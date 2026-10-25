// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a6b4a2 FUN_140a6b4a2 body=135 status=ok
// SIG undefined FUN_140a6b4a2(void)

void FUN_140a6b4a2(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_140f45ebc(puVar1,param_4,param_5);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e13ac0;
  *(undefined4 *)(puVar1 + 10) = param_3;
  *(undefined4 *)((longlong)puVar1 + 0x54) = param_3;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000140a6b525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 140a6b52a FUN_140a6b52a body=35 status=ok
// SIG undefined FUN_140a6b52a(void)

void FUN_140a6b52a(longlong param_1)

{
  FUN_140a6b54e();
  FUN_14052f894(param_1 + 0xf88,0);
  return;
}



// FUNCTION 140a6b54e FUN_140a6b54e body=80 status=ok
// SIG undefined FUN_140a6b54e(void)

void FUN_140a6b54e(longlong *param_1)

{
  byte bVar1;
  
  FUN_140a6b59e();
  if (*(char *)((longlong)param_1 + 0xe51) == '\x01') {
    bVar1 = 1;
    if ((char)param_1[0x109] != (char)param_1[0x1ca]) {
      *(char *)(param_1 + 0x109) = (char)param_1[0x1ca];
      (**(code **)(*param_1 + 0xa98))(param_1);
      bVar1 = *(byte *)((longlong)param_1 + 0xe51);
    }
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)((longlong)param_1 + 0xe51) = 0;
    }
  }
  return;
}



// FUNCTION 140a6b59e FUN_140a6b59e body=115 status=ok
// SIG undefined FUN_140a6b59e(void)

void FUN_140a6b59e(longlong param_1,int param_2)

{
  char cVar1;
  
  FUN_1401c30c4();
  FUN_1448c4a0e(param_1,param_2);
  if (*(longlong *)(param_1 + 0xbe8) != 0) goto switchD_140a6b603_caseD_3;
  if (param_2 == 3) {
switchD_140a6b603_caseD_1:
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      cVar1 = '\x02';
    }
    else {
      cVar1 = FUN_1449e2a3e();
      cVar1 = cVar1 * '\x02';
    }
  }
  else {
    switch(param_2) {
    case 0:
      cVar1 = '\x01';
      break;
    case 1:
      goto switchD_140a6b603_caseD_1;
    case 2:
    case 4:
      cVar1 = '\0';
      break;
    default:
      goto switchD_140a6b603_caseD_3;
    }
  }
  *(char *)(param_1 + 0x849) = cVar1;
switchD_140a6b603_caseD_3:
  FUN_140a6b612(param_1);
  return;
}



// FUNCTION 140a6b612 FUN_140a6b612 body=1096 status=ok
// SIG undefined FUN_140a6b612(void)

void FUN_140a6b612(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0xbc8) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
     (cVar4 = FUN_1449e2a3e(), cVar4 == '\0')) {
    FUN_147e23212(*(undefined8 *)(param_1 + 0xbc8),param_1);
  }
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if ((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) goto LAB_140a6b7cc;
  uVar2 = DAT_14cb1ae68;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_40,uVar2,lVar6);
  plVar14 = local_38;
  if ((local_40 == 0) || (local_38 == (longlong *)0x0)) {
    plVar14 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar10 = local_38 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_38 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (plVar14 == (longlong *)0x0) goto LAB_140a6b7cc;
  iVar5 = (int)plVar14[1];
  do {
    plVar10 = (longlong *)0x0;
    if (iVar5 == 0) break;
    LOCK();
    iVar3 = (int)plVar14[1];
    bVar15 = iVar5 == iVar3;
    if (bVar15) {
      *(int *)(plVar14 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar10 = plVar14;
  } while (!bVar15);
  LOCK();
  piVar1 = (int *)((longlong)plVar14 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if (plVar10 == (longlong *)0x0) goto LAB_140a6b7cc;
  if ((local_40 != 0) &&
     ((((lVar6 = param_1, *(char *)(param_1 + 0x830) != '\0' ||
        (*(longlong *)(param_1 + 0xbe8) != 0)) ||
       ((*(longlong *)(param_1 + 0x820) != 0 &&
        ((*(longlong *)(param_1 + 0x828) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 0x828) + 8)))
        )))) || (*(longlong *)(param_1 + 0x9d8) != 0)))) {
LAB_140a6b759:
    lVar7 = lVar6;
    lVar6 = lVar7;
    if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x000140a6b768;
    goto LAB_140a6b777;
  }
  goto LAB_140a6b7c2;
code_r0x000140a6b768:
  lVar6 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) goto LAB_140a6b759;
  lVar6 = FUN_142840154(lVar7);
LAB_140a6b777:
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar7 + 0x20);
    goto LAB_140a6b759;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18);
  }
  if (*(int *)(local_40 + 0xa0) != *(int *)(local_40 + 0xcc)) {
    lVar6 = *(longlong *)(lVar6 + 0x18);
    uVar8 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar12 = (uint)lVar6 & 0xffff;
    uVar11 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar13 = (uint)lVar7 & 0xffff;
    uVar11 = (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar13) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar13 >> 4);
    uVar8 = uVar11 >> 0xd ^
            ((int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar12) +
             (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4)) - uVar11;
    uVar12 = uVar8 << 8 ^ (-0x61c88647 - uVar11) - uVar8;
    uVar13 = uVar12 >> 0xd ^ (uVar11 - uVar8) - uVar12;
    uVar11 = uVar13 >> 0xc ^ (uVar8 - uVar12) - uVar13;
    uVar8 = uVar11 << 0x10 ^ (uVar12 - uVar13) - uVar11;
    uVar12 = uVar8 >> 5 ^ (uVar13 - uVar11) - uVar8;
    uVar11 = uVar12 >> 3 ^ (uVar11 - uVar8) - uVar12;
    uVar8 = uVar11 << 10 ^ (uVar8 - uVar12) - uVar11;
    lVar9 = local_40 + 0xd0;
    if (*(longlong *)(local_40 + 0xd8) != 0) {
      lVar9 = *(longlong *)(local_40 + 0xd8);
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(local_40 + 0xe0) - 1U &
                             (uVar8 >> 0xf ^ uVar12 - (uVar11 + uVar8))) * 4);
    if (iVar5 != -1) {
      do {
        plVar14 = (longlong *)(*(longlong *)(local_40 + 0x98) + (longlong)iVar5 * 0x28);
        if ((*plVar14 == lVar6) &&
           (*(longlong *)(*(longlong *)(local_40 + 0x98) + 8 + (longlong)iVar5 * 0x28) == lVar7)) {
          if (plVar14 + 2 != (longlong *)0x0 && plVar14 != (longlong *)0x0) {
            FUN_140a6bae6(local_40,plVar14[2]);
          }
          break;
        }
        iVar5 = (int)plVar14[4];
      } while (iVar5 != -1);
    }
  }
  plVar14 = *(longlong **)(param_1 + 0x828);
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x828) = 0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
LAB_140a6b7c2:
  LOCK();
  plVar14 = plVar10 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_140a6b7cc:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6ba5c FUN_140a6ba5c body=137 status=ok
// SIG undefined FUN_140a6ba5c(void)

void FUN_140a6ba5c(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    FUN_140a8ede4();
    puVar1 = &DAT_14cb7c580;
    if (param_2 != '\0') {
      puVar1 = &DAT_14cb7c588;
    }
    local_20 = *puVar1;
    FUN_140bfca4e(param_1 + 0xd10,&DAT_14cb7bde0,&local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6bae6 FUN_140a6bae6 body=696 status=ok
// SIG undefined FUN_140a6bae6(void)

void FUN_140a6bae6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1437ead6c(param_2);
    plVar2 = *(longlong **)(param_2 + 0x120);
    if (plVar2 == (longlong *)0x0) {
LAB_140a6bce3:
      if (*(longlong *)(param_2 + 0x140) != 0) {
        FUN_140929f1a(*(longlong *)(param_2 + 0x140),param_2 + 0x128);
      }
    }
    else {
      iVar8 = (int)plVar2[1];
      do {
        if (iVar8 == 0) goto LAB_140a6bce3;
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar16 = iVar8 == iVar6;
        if (bVar16) {
          *(int *)(plVar2 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar16);
      lVar3 = *(longlong *)(param_2 + 0x118);
      if (lVar3 == 0) {
        if (*(longlong *)(param_2 + 0x140) != 0) {
          FUN_140929f1a(*(longlong *)(param_2 + 0x140),param_2 + 0x128);
        }
      }
      else {
        plVar4 = *(longlong **)(param_2 + 0x120);
        *(undefined8 *)(param_2 + 0x118) = 0;
        *(undefined8 *)(param_2 + 0x120) = 0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        if (*(longlong *)(param_2 + 0x140) != 0) {
          FUN_140929f1a(*(longlong *)(param_2 + 0x140),param_2 + 0x128);
        }
        if ((*(int *)(lVar3 + 0x4b8) < 1) &&
           (*(int *)(param_1 + 0x528) != *(int *)(param_1 + 0x554))) {
          uVar10 = *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 0x14);
          uVar9 = uVar10 >> 0xd ^ *(int *)(lVar3 + 0x10) - uVar10;
          uVar12 = uVar9 << 8 ^ (-0x61c88647 - uVar10) - uVar9;
          uVar15 = uVar12 >> 0xd ^ (uVar10 - uVar9) - uVar12;
          uVar10 = uVar15 >> 0xc ^ (uVar9 - uVar12) - uVar15;
          uVar9 = uVar10 << 0x10 ^ (uVar12 - uVar15) - uVar10;
          uVar12 = uVar9 >> 5 ^ (uVar15 - uVar10) - uVar9;
          uVar10 = uVar12 >> 3 ^ (uVar10 - uVar9) - uVar12;
          uVar9 = uVar10 << 10 ^ (uVar9 - uVar12) - uVar10;
          lVar11 = param_1 + 0x558;
          if (*(longlong *)(param_1 + 0x560) != 0) {
            lVar11 = *(longlong *)(param_1 + 0x560);
          }
          uVar13 = (longlong)(int)(uVar9 >> 0xf ^ uVar12 - (uVar10 + uVar9)) &
                   (longlong)*(int *)(param_1 + 0x568) - 1U;
          iVar8 = *(int *)(lVar11 + uVar13 * 4);
          if (iVar8 != -1) {
            puVar14 = (undefined4 *)(lVar11 + uVar13 * 4);
            do {
              lVar5 = *(longlong *)(param_1 + 0x520);
              lVar11 = lVar5 + (longlong)iVar8 * 0x30;
              if (((*(int *)(lVar5 + (longlong)iVar8 * 0x30) == *(int *)(lVar3 + 0x10)) &&
                  (cVar7 = FUN_14007c268(lVar11 + 4,lVar3 + 0x14), cVar7 != '\0')) &&
                 (cVar7 = FUN_14007c310(lVar11 + 0xc,lVar3 + 0x1c), cVar7 != '\0')) {
                FUN_140b77e40((longlong *)(param_1 + 0x520),*puVar14);
                break;
              }
              iVar8 = *(int *)(lVar11 + 0x28);
              puVar14 = (undefined4 *)(lVar11 + 0x28);
            } while (iVar8 != -1);
          }
        }
      }
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if ((*(longlong *)(param_1 + 0x200) == *(longlong *)(param_2 + 0x18)) &&
       (*(longlong *)(param_1 + 0x208) == *(longlong *)(param_2 + 0x20))) {
      cVar7 = FUN_140510976(param_1 + 0x1f0);
      if (cVar7 != '\0') {
        FUN_145758894(param_1 + 0x1f0);
      }
    }
    if (*(char *)(param_2 + 0xf9) == '\x01') {
      FUN_145977dbe(param_1 + 0x98,param_2 + 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 140a6bd9e FUN_140a6bd9e body=606 status=ok
// SIG undefined FUN_140a6bd9e(void)

undefined8 *
FUN_140a6bd9e(undefined8 *param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  code *local_100;
  undefined1 local_f8 [120];
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = 0;
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2[4];
  }
  *(longlong *)((longlong)param_1 + 0x14) = lVar2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d) = 0;
  local_80 = (undefined1 *)0x0;
  local_78 = 0xa00000000;
  local_48 = 0;
  local_40 = 0xa00000000;
  local_38 = 0xffffffff;
  (**(code **)(*param_2 + 0x1a0))(param_2,local_f8);
  if ((int)local_78 != 0) {
    puVar4 = local_f8;
    if (local_80 != (undefined1 *)0x0) {
      puVar4 = local_80;
    }
    uVar1 = FUN_140242058(&DAT_14c952a70,puVar4);
  }
  FUN_140241d2e(param_1,uVar1);
  if (param_2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)param_2[1];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951d20) {
      FUN_144b3d300(&DAT_14c951d20);
      if (DAT_14c951d20 == -1) {
        local_108 = FUN_1446ddbd2();
        local_100 = FUN_14067a048;
        local_110 = 0;
        local_118 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
    }
    if (DAT_14c951cd8 == 0) {
      bVar5 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar5) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar5 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (!bVar5) goto LAB_140a6bed3;
    }
    else if ((puVar3[3] & DAT_14c951cd8) == 0) goto LAB_140a6bed3;
    *(bool *)((longlong)param_1 + 0x71) =
         (*(byte *)(param_4 + (ulonglong)*(byte *)((longlong)param_2 + 0x71)) &
         *(byte *)((longlong)param_2 + 0x73)) != 0;
  }
LAB_140a6bed3:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6bffe FUN_140a6bffe body=81 status=ok
// SIG undefined FUN_140a6bffe(void)

void FUN_140a6bffe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_20);
  FUN_140a6c050(param_2,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6c050 FUN_140a6c050 body=127 status=ok
// SIG undefined FUN_140a6c050(void)

void FUN_140a6c050(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_140a6c0d0();
  *puVar4 = param_2;
  *(undefined4 *)(puVar4 + 1) = 0;
  iVar2 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
    FUN_14681508e(param_1 + 0x88,iVar2);
  }
  lVar5 = param_1 + 0x88;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  *(int *)(lVar5 + (longlong)iVar2 * 4) = iVar3;
  if (-1 < (longlong)iVar3) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar5 = param_1;
    }
    piVar1 = (int *)(lVar5 + 8 + (longlong)iVar3 * 0xc);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 140a6c0d0 FUN_140a6c0d0 body=87 status=ok
// SIG undefined FUN_140a6c0d0(void)

longlong FUN_140a6c0d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_1468f02c2(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0xc;
  FUN_140241d0e(lVar2,1);
  return lVar2;
}



// FUNCTION 140a6c128 FUN_140a6c128 body=154 status=ok
// SIG undefined FUN_140a6c128(void)

void FUN_140a6c128(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  if (param_1[0xe] != 0) {
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
    FUN_140a6c1c4(param_2);
    lVar1 = param_2 + 0x88;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      lVar1 = *(longlong *)(param_2 + 0xb0);
    }
    *(undefined4 *)(param_2 + 0xc0) =
         *(undefined4 *)(lVar1 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6c1c4 FUN_140a6c1c4 body=317 status=ok
// SIG undefined FUN_140a6c1c4(void)

void FUN_140a6c1c4(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  FUN_140a6c050(param_1,*(undefined8 *)(param_2 + 0x18));
  local_38 = (undefined1 *)0x0;
  local_30 = 0x800000000;
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 != 0) {
    do {
      uVar1 = local_30;
      lVar4 = (longlong)(int)local_30;
      uVar2 = (int)local_30 + 1;
      local_30 = CONCAT44(local_30._4_4_,uVar2);
      if (local_30._4_4_ < uVar2) {
        FUN_1468f3130(local_78,uVar1 & 0xffffffff);
      }
      puVar3 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar3 = local_78;
      }
      *(longlong *)(puVar3 + lVar4 * 8) = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x20);
    } while (lVar5 != 0);
    if ((longlong)(int)local_30 != 0) {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x80) + -1;
      puVar3 = local_78;
      if (local_38 != (undefined1 *)0x0) {
        puVar3 = local_38;
      }
      lVar5 = (longlong)(int)local_30 << 3;
      do {
        FUN_140a6c050(param_1,*(undefined8 *)(*(longlong *)(puVar3 + lVar5 + -8) + 0x18));
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      lVar5 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xb0);
      }
      *(undefined4 *)(param_1 + 0xc0) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(param_1 + 0xc0) * 4);
    }
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6c316 FUN_140a6c316 body=200 status=ok
// SIG undefined FUN_140a6c316(void)

void FUN_140a6c316(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x168))(param_1,&local_30);
  FUN_140a6c050(param_2,CONCAT44(iStack_2c,local_30));
  plVar1 = (longlong *)param_1[0xe];
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  FUN_140a6c1c4(param_2,plVar1);
  (**(code **)(*plVar1 + 0x370))(plVar1,&local_30);
  if (((iStack_2c != 0 || local_30 != 0) || local_28 != 0) || local_24 != 0) {
    FUN_1411a49e4(param_2,&local_30);
  }
  lVar2 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar2 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6c3e0 FUN_140a6c3e0 body=750 status=ok
// SIG undefined FUN_140a6c3e0(void)

void FUN_140a6c3e0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined2 local_92;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar5 = (**(code **)(*param_1 + 0x308))();
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x458))(param_1);
    iVar9 = (int)param_1[0x5e] - *(int *)((longlong)param_1 + 0x31c);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    local_70 = DAT_14c9a1ab0;
    local_92 = *(undefined2 *)((longlong)param_1 + 0xb6);
    plVar1 = param_1 + 0x3d;
    if (*(int *)((longlong)param_1 + 500) < iVar9) {
      FUN_140a6c90c(plVar1);
    }
    local_90 = param_1 + 0x5f;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_88 = plVar1;
    local_60 = local_90;
    if ((int)param_1[0x62] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar9 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
      iVar9 = (int)param_1[0x62];
    }
    plVar1 = local_60;
    local_80 = param_1 + 0x5d;
    iVar8 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar11 = local_50;
    iVar4 = iVar9;
    local_78 = param_1;
    if (local_58._4_4_ != iVar9 || local_60 != local_90) {
      do {
        local_98 = iVar4;
        lVar13 = *local_80;
        lVar14 = *(longlong *)(lVar13 + 0x10 + (longlong)iVar7 * 0x20);
        if (lVar14 != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x58);
          if ((lVar14 != 0) && (*(longlong *)(lVar14 + 8) != 0)) {
            FUN_144a548dc(local_70,local_92);
            *(undefined8 *)(lVar14 + 8) = 0;
            iVar9 = local_98;
          }
          iVar4 = (int)local_78[0x3e];
          *(uint *)(local_78 + 0x3e) = iVar4 + 1U;
          if (*(uint *)((longlong)local_78 + 500) < iVar4 + 1U) {
            FUN_14709fa28(local_88,iVar4);
            iVar9 = local_98;
          }
          puVar6 = (undefined8 *)(lVar13 + (longlong)iVar7 * 0x20 + 0x10);
          *(undefined8 *)(*local_88 + (longlong)iVar4 * 8) = *puVar6;
          *puVar6 = 0;
        }
        uVar12 = uVar12 & ~(uint)uVar16;
        plVar15 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        iVar4 = (int)plVar1[3];
        lVar13 = (longlong)iVar8;
        uVar10 = *(uint *)((longlong)plVar15 + lVar13 * 4) & uVar12;
        if (uVar10 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar3 = iVar7;
          if (iVar7 < iVar8) {
            iVar3 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar14 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar15 + lVar14 * 4 + lVar13 * 4 + 4);
              if (uVar10 != 0) {
                iVar8 = iVar8 + (int)lVar14 + 1;
                uVar12 = 0xffffffff;
                goto LAB_140a6c5f0;
              }
              iVar11 = iVar11 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar3 - lVar13 != lVar14);
            uVar12 = 0xffffffff;
            iVar8 = iVar3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar4;
          iVar9 = local_98;
        }
        else {
LAB_140a6c5f0:
          uVar16 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar7 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar7) {
            iVar7 = iVar4;
          }
        }
        iVar4 = local_98;
      } while (iVar7 != iVar9 || plVar1 != local_90);
    }
    local_78[0x39] = 0;
    FUN_14042f1dc(local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6c6d0 FUN_140a6c6d0 body=114 status=ok
// SIG undefined FUN_140a6c6d0(void)

void FUN_140a6c6d0(longlong *param_1,int param_2)

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



// FUNCTION 140a6c742 FUN_140a6c742 body=318 status=ok
// SIG undefined FUN_140a6c742(void)

void FUN_140a6c742(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_14481578e(param_1 + 0x188,0);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x178);
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
  FUN_140a6c880(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140a6c880 FUN_140a6c880 body=64 status=ok
// SIG undefined FUN_140a6c880(void)

void FUN_140a6c880(longlong param_1)

{
  FUN_140a6c8c0(param_1 + 0x88);
  FUN_140a6c8c0(param_1 + 0x68);
  FUN_140a6c8c0(param_1 + 0x48);
  FUN_140a6c8c0(param_1 + 0x28);
  FUN_140a6c8c0(param_1 + 8);
  return;
}



// FUNCTION 140a6c8c0 FUN_140a6c8c0 body=75 status=ok
// SIG undefined FUN_140a6c8c0(void)

void FUN_140a6c8c0(undefined8 *param_1)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a6c90c FUN_140a6c90c body=93 status=ok
// SIG undefined FUN_140a6c90c(void)

void FUN_140a6c90c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 140a6c96a FUN_140a6c96a body=2989 status=ok
// SIG undefined FUN_140a6c96a(void)

undefined1 FUN_140a6c96a(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  uint *local_1c0;
  uint local_1b8;
  int local_1b4;
  longlong *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  ulonglong local_188;
  uint *local_180;
  longlong *local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  longlong *local_158;
  uint local_150;
  int local_14c;
  int local_148 [2];
  uint *local_140;
  longlong *local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined8 local_e0;
  longlong local_d8 [2];
  longlong *local_c8;
  int local_bc;
  longlong local_98;
  undefined4 local_90;
  int local_88;
  int local_84;
  longlong local_80 [2];
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar23 = param_1 + 0x3f;
  uVar16 = (longlong)(int)param_1[0x5e] - (longlong)*(int *)((longlong)param_1 + 0x31c);
  uVar15 = (uint)uVar16;
  if ((uint)((int)param_1[0x40] - *(int *)((longlong)param_1 + 0x22c)) < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar16);
    }
    FUN_1404056c0(plVar23,uVar16 & 0xffffffff);
    iVar4 = 1;
    if (3 < uVar15) {
      uVar15 = (uVar15 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if (((int)param_1[0x48] == 0) || ((int)param_1[0x48] < iVar4)) {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140405458();
    }
  }
  iVar4 = (int)param_1[0x5e] - *(int *)((longlong)param_1 + 0x31c);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_1 + 0x5c) < iVar4) {
    FUN_141189b3c();
    iVar4 = (int)param_1[0x5e] - *(int *)((longlong)param_1 + 0x31c);
  }
  uVar15 = iVar4 * 3;
  if ((uint)((int)param_1[0xd] - *(int *)((longlong)param_1 + 0x94)) < uVar15) {
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar15);
    }
    FUN_140404b1e(param_1 + 0xc,uVar15);
    iVar4 = 1;
    if (3 < uVar15) {
      uVar15 = (uVar15 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if (((int)param_1[0x15] == 0) || ((int)param_1[0x15] < iVar4)) {
      *(int *)(param_1 + 0x15) = iVar4;
      FUN_141189784();
    }
  }
  puVar21 = (uint *)(param_1 + 0x5f);
  uVar15 = *(uint *)(param_1 + 0x62);
  uVar16 = (ulonglong)uVar15;
  local_1b0 = plVar23;
  if (uVar15 == 0) {
    uVar24 = 1;
    uVar22 = 0;
    iVar4 = 0;
    uVar9 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x61];
    if ((uint *)param_1[0x61] == (uint *)0x0) {
      puVar7 = puVar21;
    }
    uVar9 = *puVar7;
    if (uVar9 == 0) {
      iVar4 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar4 = uVar15 - 1;
      }
      uVar22 = 0;
      uVar24 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar24 = uVar22;
      }
      iVar4 = 0;
      do {
        if (uVar24 == uVar22) goto LAB_140a6cb1a;
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar7[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar22 = 0;
      iVar4 = 0;
    }
    uVar24 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar24 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar9 = (iVar4 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar9) {
      uVar9 = uVar15;
    }
  }
  if (uVar9 != uVar15) {
    local_198 = param_1 + 0x49;
    local_178 = param_1 + 0x53;
    local_190 = param_1 + 0x46;
    uVar20 = 0xffffffff;
    local_1c8 = param_1;
    local_188 = uVar16;
    local_180 = puVar21;
    do {
      if (*(longlong *)(param_1[0x5d] + 0x10 + (longlong)(int)uVar9 * 0x20) != 0) {
        plVar23 = (longlong *)(param_1[0x5d] + (longlong)(int)uVar9 * 0x20 + 0x10);
        local_1b8 = uVar20;
        local_1b4 = iVar4;
        local_170 = uVar24;
        local_168 = uVar22;
        FUN_1447a97f4(&local_88);
        lVar19 = *plVar23;
        lVar5 = FUN_1400e3e52(param_1,lVar19);
        if (lVar5 == 0) {
          lVar5 = lVar19;
        }
        if (lVar5 != 0) {
          local_118 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = (longlong *)0x0;
          plStack_130 = (longlong *)0x0;
          uStack_110 = 0x8000000000;
          local_108 = 0xffffffff;
          local_e0 = *(longlong ***)(lVar5 + 0x30);
          FUN_140403780(local_d8,&local_138);
          plVar18 = local_1b0;
          if (((local_88 == 0) || (local_84 == 0)) || (local_88 == DAT_14c948000)) {
            local_150 = DAT_14c948620;
            local_158 = DAT_14c948618;
          }
          else if (local_84 < 1) {
            local_150 = DAT_14c948620;
            local_158 = DAT_14c948618;
          }
          else {
            plVar13 = local_80;
            if (0 < local_64) {
              plVar13 = local_70;
            }
            if (local_84 != 1) {
              plVar13 = local_70;
            }
            local_158 = (longlong *)*plVar13;
            local_150 = *(uint *)(plVar13 + 1);
          }
          FUN_140405376(local_1b0,local_148);
          puVar21 = local_140;
          local_140[2] = local_150;
          *(longlong **)local_140 = local_158;
          *(longlong ***)(local_140 + 4) = local_e0;
          FUN_140403780(local_140 + 6,local_d8);
          plVar13 = local_1c8;
          puVar21[0x1a] = 0xffffffff;
          local_14c = local_148[0];
          uVar15 = *puVar21;
          uVar9 = puVar21[2];
          if (uVar9 != 0) {
            uVar15 = uVar9 >> 0xd ^ uVar15 - uVar9;
            uVar20 = uVar15 << 8 ^ (-0x61c88647 - uVar9) - uVar15;
            uVar17 = uVar20 >> 0xd ^ (uVar9 - uVar15) - uVar20;
            uVar15 = uVar17 >> 0xc ^ (uVar15 - uVar20) - uVar17;
            uVar9 = uVar15 << 0x10 ^ (uVar20 - uVar17) - uVar15;
            uVar20 = uVar9 >> 5 ^ (uVar17 - uVar15) - uVar9;
            uVar17 = uVar20 >> 3 ^ (uVar15 - uVar9) - uVar20;
            uVar15 = uVar17 << 10 ^ (uVar9 - uVar20) - uVar17;
            uVar15 = uVar15 >> 0xf ^ uVar20 - (uVar17 + uVar15);
          }
          cVar3 = FUN_1404052f0(plVar18,uVar15,puVar21,&local_14c);
          iVar4 = local_14c;
          if (cVar3 == '\0') {
            uVar9 = (int)plVar13[0x40] - *(int *)((longlong)plVar13 + 0x22c);
            if (uVar9 < 4) {
              iVar12 = 1;
            }
            else {
              uVar16 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
              lVar19 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar12 = 1 << ((byte)lVar19 & 0x1f);
            }
            if (((int)uVar9 < 1) || (iVar12 <= (int)plVar13[0x48])) {
              uVar15 = (int)plVar13[0x48] - 1U & uVar15;
              puVar21[0x1b] = uVar15;
              plVar6 = (longlong *)plVar13[0x47];
              if ((longlong *)plVar13[0x47] == (longlong *)0x0) {
                plVar6 = local_190;
              }
              puVar21[0x1a] =
                   *(uint *)((longlong)plVar6 +
                            ((longlong)(int)plVar13[0x48] - 1U & (longlong)(int)uVar15) * 4);
              plVar6 = (longlong *)plVar13[0x47];
              if ((longlong *)plVar13[0x47] == (longlong *)0x0) {
                plVar6 = local_190;
              }
              *(int *)((longlong)plVar6 +
                      ((longlong)(int)plVar13[0x48] - 1U & (longlong)(int)uVar15) * 4) = local_14c;
            }
            else {
              *(int *)(plVar13 + 0x48) = iVar12;
              FUN_140405458(plVar18);
            }
          }
          lVar19 = *plVar18;
          local_90 = 0;
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          FUN_1406d06c4(local_d8);
          uStack_f0 = uStack_f0 & 0xffffffff00000000;
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          FUN_1406d06c4(&local_138);
          if (lVar5 == *plVar23) {
            if (*(longlong *)(lVar5 + 0x30) != 0) {
              FUN_14485dc96(plVar13,lVar5);
              if (*(longlong *)(lVar5 + 0x30) != 0) {
                FUN_1400b068a(*(longlong *)(lVar5 + 0x30) + 8,&local_88,plVar13);
              }
            }
          }
          else {
            lVar8 = *(longlong *)(*plVar23 + 0x30);
            if (lVar8 != 0) {
              FUN_1400b068a(lVar8 + 8,&local_88,plVar13);
              if (((local_88 == 0) || (local_84 == 0)) ||
                 ((local_88 == DAT_14c948000 || (local_84 < 1)))) {
                local_138 = DAT_14c948618;
                uVar15 = DAT_14c948620;
              }
              else {
                plVar18 = local_80;
                if (0 < local_64) {
                  plVar18 = local_70;
                }
                if (local_84 != 1) {
                  plVar18 = local_70;
                }
                local_138 = (longlong *)*plVar18;
                uVar15 = *(uint *)(plVar18 + 1);
              }
              plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,uVar15);
              local_d8[0] = *plVar23 + 0x30;
              local_e0 = &local_138;
              FUN_141738be4(local_198,local_148,&local_e0,0);
            }
          }
          puVar21 = (uint *)(lVar5 + 0x80);
          uVar15 = *(uint *)(lVar5 + 0x98);
          if (uVar15 == 0) {
            uVar22 = 1;
            uVar16 = 0;
            iVar12 = 0;
            uVar9 = 0;
          }
          else {
            puVar7 = *(uint **)(lVar5 + 0x90);
            if (*(uint **)(lVar5 + 0x90) == (uint *)0x0) {
              puVar7 = puVar21;
            }
            uVar9 = *puVar7;
            if (uVar9 == 0) {
              iVar12 = uVar15 + 0x1e;
              if (-1 < (int)(uVar15 - 1)) {
                iVar12 = uVar15 - 1;
              }
              uVar16 = 0;
              uVar22 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar22 = uVar16;
              }
              iVar12 = 0;
              do {
                if (uVar22 == uVar16) goto LAB_140a6cff3;
                iVar12 = iVar12 + 0x20;
                uVar9 = puVar7[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar9 == 0);
            }
            else {
              uVar16 = 0;
              iVar12 = 0;
            }
            uVar22 = (ulonglong)(-uVar9 & uVar9);
            uVar24 = uVar22 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar9 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if ((int)uVar15 <= (int)uVar9) {
              uVar9 = uVar15;
            }
          }
          if (uVar9 != uVar15) {
            local_160 = (longlong)iVar4 * 0x70 + lVar19 + 0x18;
            uVar20 = 0xffffffff;
            local_1c0 = puVar21;
            local_1a8 = (ulonglong)uVar15;
            local_1a0 = lVar5;
            do {
              lVar19 = *(longlong *)(local_1a0 + 0x70);
              lVar5 = *(longlong *)(lVar19 + 0x10 + (longlong)(int)uVar9 * 0x20);
              if (lVar5 != 0) {
                lVar8 = FUN_14013f2d6(local_1c8,lVar5);
                if (lVar8 == 0) {
                  lVar8 = lVar5;
                }
                puVar21 = local_1c0;
                if (*(longlong *)(lVar8 + 0x30) != 0) {
                  plVar23 = (longlong *)(lVar19 + (longlong)(int)uVar9 * 0x20 + 0x10);
                  puVar14 = (undefined4 *)*plVar23;
                  if ((*(longlong *)(puVar14 + 0xc) != 0) &&
                     (puVar14 = *(undefined4 **)(*(longlong *)(lVar8 + 0x30) + 8),
                     puVar14 == (undefined4 *)0x0)) {
                    puVar14 = &DAT_14c9485f0;
                  }
                  FUN_1447a97f4(&local_e0,puVar14);
                  if (local_e0._4_4_ < 2) {
                    local_138 = local_d8;
                    if (0 < local_bc) {
                      local_138 = local_c8;
                    }
                  }
                  else {
                    local_138 = (longlong *)((longlong)local_c8 + 0xc);
                  }
                  plStack_130 = (longlong *)(lVar8 + 0x30);
                  FUN_14040327a(local_160,local_148,&local_138,0);
                  (**(code **)(*local_1c8 + 0x438))(local_1c8,lVar8,&local_88,0);
                  plVar18 = local_1c8;
                  if (lVar8 == *plVar23) {
                    lVar19 = *(longlong *)(lVar8 + 0x30);
                    if (lVar19 != 0) {
                      FUN_1400b068a(lVar19 + 8,&local_e0,local_1c8);
                    }
                    FUN_14485dc96(plVar18,lVar8);
                  }
                  else {
                    lVar19 = *(longlong *)(*plVar23 + 0x30);
                    if (lVar19 != 0) {
                      FUN_1400b068a(lVar19 + 8,&local_e0,local_1c8);
                      if (local_e0._4_4_ < 2) {
                        local_138 = local_d8;
                        if (0 < local_bc) {
                          local_138 = local_c8;
                        }
                      }
                      else {
                        local_138 = (longlong *)((longlong)local_c8 + 0xc);
                      }
                      plStack_130 = (longlong *)(*plVar23 + 0x30);
                      FUN_140404262(local_178,local_148,&local_138);
                      (**(code **)(*local_1c8 + 0x438))(local_1c8,*plVar23,&local_88,1);
                    }
                  }
                  puVar21 = local_1c0;
                  if (local_c8 != (longlong *)0x0) {
                    FUN_1400020a8();
                    puVar21 = local_1c0;
                  }
                }
              }
              uVar20 = uVar20 & ~(uint)uVar22;
              puVar7 = *(uint **)(local_1a0 + 0x90);
              if (*(uint **)(local_1a0 + 0x90) == (uint *)0x0) {
                puVar7 = puVar21;
              }
              uVar15 = *(uint *)(local_1a0 + 0x98);
              iVar4 = (int)uVar16;
              lVar19 = (longlong)iVar4;
              uVar9 = puVar7[lVar19] & uVar20;
              if (uVar9 == 0) {
                iVar10 = uVar15 + 0x1e;
                if (-1 < (int)(uVar15 - 1)) {
                  iVar10 = uVar15 - 1;
                }
                iVar10 = iVar10 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar4) {
                  iVar11 = iVar4;
                }
                if (iVar4 < iVar10) {
                  lVar5 = 0;
                  do {
                    uVar9 = puVar7[lVar19 + lVar5 + 1];
                    if (uVar9 != 0) {
                      uVar16 = (ulonglong)(iVar4 + (int)lVar5 + 1);
                      uVar20 = 0xffffffff;
                      goto LAB_140a6d373;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar5 = lVar5 + 1;
                  } while (iVar11 - lVar19 != lVar5);
                  uVar20 = 0xffffffff;
                  iVar4 = iVar11;
                }
                uVar16 = (ulonglong)(iVar4 + 1);
                puVar21 = local_1c0;
                uVar9 = uVar15;
              }
              else {
LAB_140a6d373:
                uVar22 = (ulonglong)(-uVar9 & uVar9);
                uVar24 = uVar22 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                uVar9 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if ((int)uVar15 <= (int)uVar9) {
                  uVar9 = uVar15;
                }
              }
            } while (uVar9 != (uint)local_1a8);
          }
        }
LAB_140a6cff3:
        if (local_70 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar15 = *(uint *)(local_1c8 + 0x62);
        param_1 = local_1c8;
        uVar16 = local_188;
        puVar21 = local_180;
        uVar22 = local_168;
        uVar24 = local_170;
        iVar4 = local_1b4;
        uVar20 = local_1b8;
      }
      uVar20 = uVar20 & ~(uint)uVar24;
      puVar7 = (uint *)param_1[0x61];
      if ((uint *)param_1[0x61] == (uint *)0x0) {
        puVar7 = puVar21;
      }
      iVar12 = (int)uVar22;
      lVar19 = (longlong)iVar12;
      uVar9 = puVar7[lVar19] & uVar20;
      if (uVar9 == 0) {
        iVar10 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar10 = uVar15 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar12) {
          iVar11 = iVar12;
        }
        if (iVar12 < iVar10) {
          lVar5 = 0;
          do {
            uVar9 = puVar7[lVar19 + lVar5 + 1];
            if (uVar9 != 0) {
              uVar22 = (ulonglong)(iVar12 + (int)lVar5 + 1);
              uVar20 = 0xffffffff;
              goto LAB_140a6d0ae;
            }
            iVar4 = iVar4 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar11 - lVar19 != lVar5);
          uVar20 = 0xffffffff;
          iVar12 = iVar11;
        }
        uVar22 = (ulonglong)(iVar12 + 1);
        param_1 = local_1c8;
        uVar9 = uVar15;
      }
      else {
LAB_140a6d0ae:
        uVar24 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar24 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar9 = (iVar4 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar9) {
          uVar9 = uVar15;
        }
      }
    } while (uVar9 != (uint)uVar16);
  }
LAB_140a6cb1a:
  (**(code **)(*param_1 + 0x448))(param_1);
  LOCK();
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x154);
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140a6d51a FUN_140a6d51a body=580 status=ok
// SIG undefined FUN_140a6d51a(void)

void FUN_140a6d51a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_70 = DAT_14c8464f0;
  local_80 = DAT_14c8464e0;
  uStack_78 = DAT_14c8464e8;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  local_50 = DAT_14c8464e0;
  uStack_48 = DAT_14c8464e8;
  local_40 = DAT_14c8464f0;
  local_38 = 0xffffffff00000000;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_a0);
            goto LAB_140a6d646;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_a0) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_a0,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_a0,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_b0 = (undefined4)plVar1[6];
        local_b8 = 0;
        FUN_1400746b0(plVar1,&local_a0,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_a0,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
LAB_140a6d646:
  puVar6 = &local_a0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140a6d760(param_1,puVar6);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6d760 FUN_140a6d760 body=405 status=ok
// SIG undefined FUN_140a6d760(void)

void FUN_140a6d760(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_140a6d8f6(param_2);
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x660);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x218);
      plVar6 = *(longlong **)(lVar5 + 0x220);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (((lVar3 != 0) && (*(int *)(param_2 + 0x6c) < *(int *)(lVar3 + 0x1f8))) &&
         (*(int *)(*(longlong *)(lVar3 + 0x1f0) + (longlong)*(int *)(param_2 + 0x6c) * 4) == 3))
      goto LAB_140a6d876;
    }
    lVar5 = (**(code **)(*(longlong *)(lVar4 + 0xaf0) + 0x38))(lVar4 + 0xaf0);
    if (lVar5 == 0) {
      uVar8 = 0x3f800000;
    }
    else {
      uVar8 = *(undefined4 *)(lVar5 + 0x100);
    }
    FUN_140a6db3f(lVar4,*(undefined4 *)(param_2 + 0x6c),uVar8);
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140a6da42(lVar4,&local_58);
    FUN_140a6de43(lVar4,*(undefined4 *)(param_2 + 0x6c),&local_58);
    lVar3 = DAT_14cb24ad0;
    if (DAT_14cb24ad0 == 0) {
      plVar6 = (longlong *)FUN_145a7712c();
      lVar3 = plVar6[0x22];
      if (plVar6[0x22] == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        lVar3 = plVar6[0x22];
      }
    }
    DAT_14cb24ad0 = lVar3;
    if ((lVar5 == 0) || (fVar7 = *(float *)(lVar5 + 0x104), fVar7 <= 1e-08)) {
      fVar7 = *(float *)(DAT_14cb24ad0 + 0x38);
    }
    FUN_140a6dcc1(lVar4,*(undefined4 *)(param_2 + 0x6c),fVar7);
  }
LAB_140a6d876:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6d8f6 FUN_140a6d8f6 body=101 status=ok
// SIG undefined FUN_140a6d8f6(void)

longlong FUN_140a6d8f6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return 0;
  }
  lVar3 = FUN_140a6d95c();
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30) {
    return lVar1;
  }
  return 0;
}



// FUNCTION 140a6d95c FUN_140a6d95c body=228 status=ok
// SIG undefined FUN_140a6d95c(void)

longlong FUN_140a6d95c(void)

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
  if (DAT_14cb249b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632df60;
    local_38 = &LAB_147f62f51;
    local_40 = &LAB_141818804;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xfb0;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"GbxGeometryCollectionComponent",&DAT_14cb249b0,
                  FUN_1464430ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb249b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6da42 FUN_140a6da42 body=253 status=ok
// SIG undefined FUN_140a6da42(void)

void FUN_140a6da42(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xaf8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0xa50) != 0)) {
    param_1 = param_1 + 0xdf0;
    if (*(int *)(lVar1 + 300) == 1) {
      lVar1 = DAT_14cb24ad0;
      if (DAT_14cb24ad0 == 0) {
        plVar3 = (longlong *)FUN_145a7712c();
        lVar1 = plVar3[0x22];
        if (plVar3[0x22] == 0) {
          (**(code **)(*plVar3 + 1000))(plVar3);
          lVar1 = plVar3[0x22];
        }
      }
      DAT_14cb24ad0 = lVar1;
      FUN_140078ec2(param_1,*(undefined8 *)(DAT_14cb24ad0 + 0xbc));
    }
    else if (*(int *)(lVar1 + 300) == 2) {
      FUN_1412b4a80(param_1,*(undefined1 *)(lVar1 + 0x145));
      uVar2 = FUN_144b261ba(lVar1 + 0x130);
      FUN_140a18d12(param_1,uVar2,1);
      FUN_1417e5370(param_1,*(undefined1 *)(lVar1 + 0x146));
      FUN_1406902ca(param_1,lVar1 + 0x198);
    }
    FUN_144a2a070(param_1,param_2,0xffffffff);
    return;
  }
  return;
}



// FUNCTION 140a6db3f FUN_140a6db3f body=386 status=ok
// SIG undefined FUN_140a6db3f(void)

void FUN_140a6db3f(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xa40);
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar6 = 0;
      iVar4 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(lVar5 + 0x10) = iVar3;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar4 = iVar3;
        }
      }
    }
    lVar5 = *(longlong *)(lVar1 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined2 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_149f45dc0;
      puVar2[10] = FUN_1438a0810;
      puVar2[0xc] = 0;
      puVar2[0xe] = &PTR_LAB_14ac97950;
      *(uint *)(puVar2 + 0xf) = uVar6;
      *(int *)((longlong)puVar2 + 0x7c) = iVar4;
      puVar2[0x10] = lVar1;
      *(undefined4 *)(puVar2 + 0x11) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x8c) = param_3;
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      *(undefined1 *)(puVar2 + 0x1a) = 0;
      FUN_1406e6496(lVar5 + 0x70,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a6dcc1 FUN_140a6dcc1 body=386 status=ok
// SIG undefined FUN_140a6dcc1(void)

void FUN_140a6dcc1(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xa40);
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar6 = 0;
      iVar4 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(lVar5 + 0x10) = iVar3;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar4 = iVar3;
        }
      }
    }
    lVar5 = *(longlong *)(lVar1 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined2 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_149f45dc0;
      puVar2[10] = FUN_1438a0980;
      puVar2[0xc] = 0;
      puVar2[0xe] = &PTR_LAB_14ac97970;
      *(uint *)(puVar2 + 0xf) = uVar6;
      *(int *)((longlong)puVar2 + 0x7c) = iVar4;
      puVar2[0x10] = lVar1;
      *(undefined4 *)(puVar2 + 0x11) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x8c) = param_3;
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      *(undefined1 *)(puVar2 + 0x1a) = 0;
      FUN_1406e6496(lVar5 + 0x70,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a6de43 FUN_140a6de43 body=874 status=ok
// SIG undefined FUN_140a6de43(void)

void FUN_140a6de43(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xa40);
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar14 = 0;
      iVar13 = 0;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar13 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar13 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar13 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar12;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar13 = iVar12;
        }
      }
    }
    local_78 = *(undefined4 *)param_3;
    uStack_74 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_70 = *(undefined4 *)(param_3 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_68 = *(undefined4 *)(param_3 + 2);
    uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_60 = *(undefined4 *)(param_3 + 3);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_58 = *(undefined4 *)(param_3 + 4);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_50 = *(undefined4 *)(param_3 + 5);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar15 = *(longlong *)(lVar1 + 8);
    if (lVar15 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      puVar7 = (undefined8 *)FUN_14001cc68(0x50,8);
      *puVar7 = &PTR_LAB_14ac97990;
      *(uint *)(puVar7 + 1) = uVar14;
      *(int *)((longlong)puVar7 + 0xc) = iVar13;
      puVar7[2] = lVar1;
      puVar7[3] = CONCAT44(uStack_74,local_78);
      puVar7[4] = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(puVar7 + 5) = local_68;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_64;
      *(undefined4 *)(puVar7 + 6) = uStack_60;
      *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_5c;
      *(undefined4 *)(puVar7 + 7) = local_58;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_54;
      *(undefined4 *)(puVar7 + 8) = uStack_50;
      *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_4c;
      *(uint *)(puVar7 + 9) = param_2;
      pcVar11 = FUN_1438a0ad2;
      if ((uint *)(puVar7 + 1) == (uint *)0x0) {
        pcVar11 = (code *)0x0;
      }
      *(undefined2 *)(puVar6 + 1) = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *(undefined2 *)(puVar6 + 8) = 1;
      *puVar6 = &PTR_FUN_149f45dc0;
      puVar6[10] = pcVar11;
      puVar6[0xc] = puVar7;
      puVar6[0x12] = 0;
      puVar6[0x14] = 0;
      *(undefined1 *)(puVar6 + 0x1a) = 0;
      FUN_1406e6496(lVar15 + 0x70,puVar6);
    }
    if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x418))) &&
        (lVar15 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x410) + (ulonglong)param_2 * 4),
        lVar15 != -1)) &&
       ((lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x440) + lVar15 * 8), lVar1 != 0 &&
        (0 < *(int *)(lVar1 + 0x88))))) {
      lVar15 = 0;
      do {
        lVar8 = *(longlong *)(lVar1 + 0x80);
        if (*(longlong *)(lVar1 + 0x80) == 0) {
          lVar8 = lVar1 + 0x78;
        }
        lVar8 = *(longlong *)(lVar8 + lVar15 * 8);
        if ((*(uint *)(lVar8 + 8) & 3) == 0) {
          lVar9 = *(longlong *)(lVar8 + 0x48);
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          uVar3 = *(undefined4 *)(param_3 + 1);
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)param_3;
          *(undefined4 *)(lVar8 + 100) = uVar2;
          *(undefined4 *)(lVar8 + 0x68) = uVar3;
          *(undefined4 *)(lVar8 + 0x6c) = uVar4;
          uVar14 = *(uint *)(lVar8 + 0xc);
          *(uint *)(lVar8 + 0xc) = uVar14 | 1;
          if ((lVar9 != 0 && uVar14 == 0) && (*(longlong *)(lVar9 + 8) != 0)) {
            FUN_144821112(*(longlong *)(lVar9 + 8) + 0x70,lVar9,*(uint *)(lVar8 + 8) >> 3);
          }
        }
        else {
          uVar5 = param_3[1];
          *(undefined8 *)(lVar8 + 0x58) = *param_3;
          *(undefined8 *)(lVar8 + 0x60) = uVar5;
        }
        lVar9 = *(longlong *)(lVar8 + 0x10);
        bVar10 = *(byte *)(lVar9 + 0x1c) & 0x1f;
        if (bVar10 == 4 && lVar9 != 0) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x20);
            bVar10 = *(byte *)(lVar9 + 0x1c) & 0x1f;
          } while (lVar9 != 0 && bVar10 == 4);
        }
        bVar16 = bVar10 == 0xb;
        if ((*(uint *)(lVar8 + 8) & 3) == 0) {
          lVar9 = *(longlong *)(lVar8 + 0x48);
          uVar2 = *(undefined4 *)((longlong)param_3 + (ulonglong)bVar16 * 0x10 + 0x14);
          uVar3 = *(undefined4 *)(param_3 + (ulonglong)bVar16 * 2 + 3);
          uVar4 = *(undefined4 *)((longlong)param_3 + (ulonglong)bVar16 * 0x10 + 0x1c);
          *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(param_3 + (ulonglong)bVar16 * 2 + 2);
          *(undefined4 *)(lVar8 + 0x54) = uVar2;
          *(undefined4 *)(lVar8 + 0x58) = uVar3;
          *(undefined4 *)(lVar8 + 0x5c) = uVar4;
          uVar14 = *(uint *)(lVar8 + 0xc);
          *(uint *)(lVar8 + 0xc) = uVar14 | 1;
          if ((lVar9 != 0 && uVar14 == 0) && (*(longlong *)(lVar9 + 8) != 0)) {
            FUN_144821112(*(longlong *)(lVar9 + 8) + 0x70,lVar9,*(uint *)(lVar8 + 8) >> 3);
          }
        }
        else {
          uVar2 = *(undefined4 *)((longlong)param_3 + (ulonglong)bVar16 * 0x10 + 0x14);
          uVar3 = *(undefined4 *)(param_3 + (ulonglong)bVar16 * 2 + 3);
          uVar4 = *(undefined4 *)((longlong)param_3 + (ulonglong)bVar16 * 0x10 + 0x1c);
          *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(param_3 + (ulonglong)bVar16 * 2 + 2);
          *(undefined4 *)(lVar8 + 0x4c) = uVar2;
          *(undefined4 *)(lVar8 + 0x50) = uVar3;
          *(undefined4 *)(lVar8 + 0x54) = uVar4;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(lVar1 + 0x88));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6e1ae FUN_140a6e1ae body=1211 status=ok
// SIG undefined FUN_140a6e1ae(void)

undefined8 FUN_140a6e1ae(longlong *param_1,uint param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong *local_b0;
  undefined2 *local_a8;
  uint *local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  uint *local_80;
  longlong local_78 [7];
  
  uVar7 = (ulonglong)param_3;
  local_78[6] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(uint *)(param_1 + 4) < param_2) {
    if (*(int *)((longlong)param_1 + 0x24) == 2) {
      uVar11 = *(uint *)(param_1 + 1);
      if ((uVar11 != 0) && (iVar5 = 0, uVar11 != 0)) {
        for (; (uVar11 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_78[6] ^ (ulonglong)auStack_d8);
    }
    uVar11 = 0;
    if ((param_3 != 0) && (uVar11 = param_3, (int)(0x10000 % (ulonglong)param_3) == 0)) {
      uVar11 = 0;
    }
    local_b0 = local_78 + 4;
    local_78[4] = 0;
    local_a8 = &DAT_149dfb77a;
    local_a0 = (uint *)((ulonglong)local_a0 & 0xffffffff00000000);
    local_b8 = (ulonglong)(uVar11 + param_2);
    iVar5 = FUN_14631a284(*(undefined8 *)(*param_1 + 0x10),*(int *)((longlong)param_1 + 0x24),
                          (int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc));
    if (iVar5 < 0) {
      local_b0 = local_78;
      local_78[0] = 0;
      local_78[1] = 0;
      local_b8 = 0;
      FUN_145763094(iVar5,
                    "Adapter->CreateBuffer(PagePool.GetHeapType(), GetGPUMask(), GetVisibilityMask(), Size + Alignment, &Resource, *ResourceName)"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Allocation.cpp",0x847);
    }
    local_b8 = 0;
    uVar9 = 0;
    FUN_1400daf10(param_4,local_78[4],(ulonglong)(uVar11 + param_2),0);
    if (*(int *)((longlong)param_1 + 0x24) != 2) {
      if (*(int *)((longlong)param_1 + 0x24) != 4) goto LAB_140a6e2a4;
      if ((*(uint *)(param_1 + 5) & 0xfffffffe) != 2) {
        uVar9 = 0;
        goto LAB_140a6e2a4;
      }
    }
    uVar9 = *(undefined8 *)(local_78[4] + 0x48);
    goto LAB_140a6e2a4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  puVar6 = (uint *)param_1[9];
  if (puVar6 == (uint *)0x0) {
LAB_140a6e2e5:
    local_80 = *(uint **)(param_1[2] + 0x10);
    uVar12 = FUN_14473bdf6(*(undefined8 *)(local_80 + 0x14e),1);
    if (0 < (int)param_1[8]) {
      lVar8 = 1;
      do {
        puVar6 = *(uint **)(param_1[7] + -8 + lVar8 * 8);
        if ((*(int *)(*(longlong *)(puVar6 + 2) + 8) == 1) && (*(ulonglong *)(puVar6 + 8) <= uVar12)
           ) {
          puVar6[4] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          iVar5 = (int)param_1[8];
          if (iVar5 != (int)lVar8) {
            memmove((void *)(param_1[7] + lVar8 * 8 + -8),(void *)(param_1[7] + lVar8 * 8),
                    (longlong)(iVar5 - (int)lVar8) << 3);
            iVar5 = (int)param_1[8];
          }
          *(int *)(param_1 + 8) = iVar5 + -1;
          FUN_140a6e6f0(param_1 + 7);
          goto LAB_140a6e46e;
        }
        bVar4 = lVar8 < (int)param_1[8];
        lVar8 = lVar8 + 1;
      } while (bVar4);
    }
    puVar6 = (uint *)FUN_14001cc68(0x28,0x10);
    local_a8 = (undefined2 *)(ulonglong)*(uint *)(param_1 + 4);
    *puVar6 = *(uint *)(param_1 + 4);
    puVar1 = puVar6 + 2;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    uVar10 = 0xac3;
    if (1 < *(int *)((longlong)param_1 + 0x24) - 1U) {
      if (*(int *)((longlong)param_1 + 0x24) == 4) {
        uVar10 = 0x400;
        if ((*(uint *)(param_1 + 5) & 0xfffffffe) == 2) {
          uVar10 = 0xac3;
        }
      }
      else {
        uVar10 = 0x400;
      }
    }
    local_98 = L"Fast Allocator Page";
    local_b0 = (longlong *)CONCAT44(local_b0._4_4_,uVar10);
    local_90 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_a0 = puVar1;
    iVar5 = FUN_140a6e772(local_80,(longlong)param_1 + 0x24,(int)param_1[3]);
    if (iVar5 < 0) {
      local_b0 = local_78 + 2;
      local_78[2] = 0;
      local_78[3] = 0;
      local_b8 = 0;
      FUN_145763094(iVar5,
                    "Adapter->CreateBuffer(HeapProperties, GetGPUMask(), InitialState, ED3D12ResourceStateMode::SingleState, InitialState, PageSize, Page->FastAllocBuffer.GetInitReference(), TEXT(\"Fast Allocator Page\"))"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Allocation.cpp",0x8aa);
    }
    *(byte *)(*(longlong *)puVar1 + 0xdf) = *(byte *)(*(longlong *)puVar1 + 0xdf) & 0xf7;
    local_80 = puVar6 + 6;
    lVar8 = *(longlong *)puVar1;
    if ((*(int *)(lVar8 + 0xd8) == 0) &&
       (iVar5 = (**(code **)(**(longlong **)(lVar8 + 0x20) + 0x40))
                          (*(longlong **)(lVar8 + 0x20),0,0,lVar8 + 0x48), iVar5 < 0)) {
      local_b0 = local_78 + 4;
      local_78[4] = 0;
      local_78[5] = 0;
      local_b8 = 0;
      FUN_145763094(iVar5,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                    ".\\Runtime/D3D12RHI/Private\\D3D12Resources.h",0x119);
    }
    *(int *)(lVar8 + 0xd8) = *(int *)(lVar8 + 0xd8) + 1;
    *(undefined8 *)local_80 = *(undefined8 *)(lVar8 + 0x48);
LAB_140a6e46e:
    param_1[9] = (longlong)puVar6;
    uVar12 = (uVar7 - 1) + (ulonglong)puVar6[4];
    uVar11 = (int)uVar12 - (int)(uVar12 % uVar7);
  }
  else {
    uVar12 = (puVar6[4] + uVar7) - 1;
    uVar11 = (int)uVar12 - (int)(uVar12 % uVar7);
    if (*(uint *)(param_1 + 4) < uVar11 + param_2) {
      FUN_140a6e68e(param_1 + 2,puVar6);
      goto LAB_140a6e2e5;
    }
  }
  uVar7 = (ulonglong)uVar11;
  lVar8 = *(longlong *)(puVar6 + 2);
  lVar2 = *(longlong *)(puVar6 + 6);
  lVar3 = *(longlong *)(lVar8 + 0x40);
  *(undefined1 *)(param_4 + 0x70) = 3;
  *(longlong *)(param_4 + 0x10) = lVar8;
  *(ulonglong *)(param_4 + 0x68) = (ulonglong)param_2;
  *(ulonglong *)(param_4 + 0x60) = uVar7;
  if (lVar2 != 0) {
    *(ulonglong *)(param_4 + 0x50) = lVar2 + uVar7;
  }
  *(ulonglong *)(param_4 + 0x58) = lVar3 + uVar7;
  *(uint *)(param_1[9] + 0x10) = param_2 + uVar11;
  lVar8 = param_1[9];
  uVar7 = (longlong)
          *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 8) + 0x10) + 0x10) + 0x538) +
                  0x58) + 1;
  if (uVar7 <= *(ulonglong *)(lVar8 + 0x20)) {
    uVar7 = *(ulonglong *)(lVar8 + 0x20);
  }
  *(ulonglong *)(lVar8 + 0x20) = uVar7;
  uVar9 = *(undefined8 *)(param_4 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
LAB_140a6e2a4:
  if ((local_78[6] ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140a6e68e FUN_140a6e68e body=98 status=ok
// SIG undefined FUN_140a6e68e(void)

void FUN_140a6e68e(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)
          *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) + 0x10) + 0x538)
                  + 0x58) + 1;
  if (uVar2 <= *(ulonglong *)(param_2 + 0x20)) {
    uVar2 = *(ulonglong *)(param_2 + 0x20);
  }
  *(ulonglong *)(param_2 + 0x20) = uVar2;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_145768ef0((longlong *)(param_1 + 0x28),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 140a6e6f0 FUN_140a6e6f0 body=129 status=ok
// SIG undefined FUN_140a6e6f0(void)

void FUN_140a6e6f0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x1ffffffffffff800U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 3,8);
      uVar2 = uVar2 >> 3;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,8,8);
    }
  }
  return;
}



// FUNCTION 140a6e772 FUN_140a6e772 body=221 status=ok
// SIG undefined FUN_140a6e772(void)

undefined8 FUN_140a6e772(void)

{
  undefined8 uVar1;
  undefined4 in_R9D;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  longlong in_stack_00000040;
  uint in_stack_00000050;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (in_stack_00000040 == 0) {
    uVar1 = 0x80004003;
  }
  else {
    uStack_60 = 0;
    uStack_30 = 0;
    local_68 = 1;
    local_58 = in_stack_00000038;
    uStack_50 = 0x1000100000001;
    local_48 = 0x100000000;
    uStack_40 = 0x100000000;
    local_38 = (ulonglong)in_stack_00000050;
    local_88 = in_stack_00000040;
    local_98 = in_stack_00000030;
    local_a0 = in_stack_00000028;
    local_78 = 1;
    local_90 = 0;
    local_a8 = in_R9D;
    uVar1 = FUN_140a6e850();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6e850 FUN_140a6e850 body=1059 status=ok
// SIG undefined FUN_140a6e850(void)

int FUN_140a6e850(longlong param_1,int *param_2,uint param_3,undefined4 *param_4,uint param_5,
                 undefined4 param_6,int param_7,undefined8 *param_8,longlong *param_9,
                 undefined8 param_10,char param_11)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined8 *local_140;
  undefined *local_138;
  longlong **local_130;
  undefined1 *local_128;
  undefined *local_120;
  longlong **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  longlong *local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_9 == (longlong *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    local_70 = (longlong *)0x0;
    uVar5 = (uint)((param_2[0xc] & 3U) == 0 & *(byte *)(param_1 + 0xc6)) << 0xc;
    local_b8._0_4_ = *param_2;
    local_b8._4_4_ = param_2[1];
    iStack_b0 = param_2[2];
    iStack_ac = param_2[3];
    local_a8 = param_2[4];
    iStack_a4 = param_2[5];
    iStack_a0 = param_2[6];
    iStack_9c = param_2[7];
    local_98 = param_2[8];
    iStack_94 = param_2[9];
    iStack_90 = param_2[10];
    iStack_8c = param_2[0xb];
    uStack_88 = param_2[0xc];
    iStack_84 = param_2[0xd];
    iStack_80 = param_2[0xe];
    iStack_7c = param_2[0xf];
    if (((param_2[0xc] & 0x20U) != 0) && (uVar5 = uVar5 | 1, *param_2 == 1)) {
      uStack_88 = uStack_88 & 0xffffffdf;
    }
    if (param_7 == 0x400000) {
      uStack_88 = uStack_88 | 4;
    }
    if ((((*(byte *)((longlong)param_2 + 0x3a) & 1) == 0) || (DAT_14ca84df4 != 0x8086)) ||
       (DAT_14ca778e8 != '\x01')) {
      if (*(char *)((longlong)param_2 + 0x39) == '\0') {
        local_130 = &local_70;
        local_138 = &DAT_14a350238;
        local_140 = param_8;
        local_148 = CONCAT44(local_148._4_4_,param_5);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))
                          (*(longlong **)(param_1 + 8),param_4,uVar5,&local_b8);
      }
      else {
        local_f8 = (int *)CONCAT44(local_f8._4_4_,(int)local_b8);
        local_cc = CONCAT44(uStack_88,iStack_8c);
        local_c4 = 0;
        local_bc = 0;
        local_f0 = *(undefined8 *)(param_2 + 2);
        uStack_e8 = *(undefined8 *)(param_2 + 4);
        local_e0 = iStack_a0;
        local_dc = iStack_9c;
        iStack_d8 = local_98;
        iStack_d4 = iStack_94;
        iStack_d0 = iStack_90;
        FUN_1431706b0(param_2,local_68);
        local_128 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          local_128 = local_68;
        }
        local_118 = &local_70;
        local_120 = &DAT_14a350238;
        local_130 = (longlong **)CONCAT44(local_130._4_4_,local_50);
        local_138 = (undefined *)0x0;
        local_140 = param_8;
        local_148 = local_148 & 0xffffffff00000000;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x260))
                          (*(longlong **)(param_1 + 0x68),param_4,uVar5,&local_f8);
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        param_5 = param_5 & iVar2 >> 0x1f;
      }
    }
    else {
      local_f0 = 0;
      local_f8 = (int *)&local_b8;
      uStack_e8 = 1;
      local_130 = &local_70;
      local_138 = &DAT_14a350238;
      local_140 = param_8;
      local_148 = CONCAT44(local_148._4_4_,param_5);
      iVar2 = FUN_144bcdd70(*(undefined8 *)(DAT_14ca77418 + 0x1d8),param_4,uVar5);
    }
    if (iVar2 < 0) {
      if (param_11 != '\0') {
        local_140 = &local_108;
        local_108 = 0;
        uStack_100 = 0;
        local_148 = *(ulonglong *)(param_1 + 8);
        FUN_145763094(iVar2,&DAT_14a3502ae,".\\Runtime/D3D12RHI/Private/D3D12Resources.cpp",0x347);
      }
    }
    else {
      lVar3 = FUN_14001cc68(0xe8,0x10);
      if (param_3 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (param_3 != 0) {
          for (; (param_3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
      local_120 = (undefined *)CONCAT44(local_120._4_4_,*param_4);
      local_130 = (longlong **)&local_b8;
      local_138 = (undefined *)CONCAT44(local_138._4_4_,param_7);
      local_140 = (undefined8 *)CONCAT44(local_140._4_4_,param_6);
      local_148 = CONCAT44(local_148._4_4_,param_5);
      local_128 = (undefined1 *)0x0;
      FUN_1447f3b12(lVar3,*(undefined8 *)(param_1 + 2000 + (ulonglong)uVar5 * 8),param_3,local_70);
      *param_9 = lVar3;
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      lVar3 = *param_9;
      if ((((*(byte *)(lVar3 + 0xdf) & 2) != 0) && (*(longlong *)(lVar3 + 0x30) == 0)) &&
         (*(longlong *)(lVar3 + 0xe0) == 0)) {
        puVar4 = (undefined4 *)FUN_14001cc68(0x438);
        *puVar4 = 0;
        memset(puVar4 + 2,0,0x420);
        *(undefined4 **)(lVar3 + 0x38) = puVar4;
        FUN_140387612(*(undefined8 *)(lVar3 + 0x10),&local_f8,lVar3 + 0x58);
        if (DAT_14c760b88 == '\x01') {
          lVar1 = *(longlong *)(lVar3 + 0x38);
          *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar3 + 0x20);
          *(int **)(lVar1 + 0x10) = local_f8;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          FUN_1405e2d48(*(longlong *)(lVar3 + 0x10) + 0x90,*(undefined8 *)(lVar3 + 0x38));
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 140a6ec82 FUN_140a6ec82 body=1377 status=ok
// SIG undefined FUN_140a6ec82(void)

void FUN_140a6ec82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  void *pvVar15;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  longlong local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  plVar1 = (longlong *)(param_1 + 0x78);
  do {
    iVar10 = *(int *)(param_1 + 0x80);
    uVar13 = (uint)uVar8;
    if (iVar10 <= (int)uVar13) goto LAB_140a6f0dc;
    lVar14 = *plVar1;
    if ((int)uStack_b0 != local_84) {
      lVar9 = *(longlong *)(lVar14 + uVar8 * 0x90);
      uVar7 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar11 = (uint)lVar9 & 0xffff;
      puVar5 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar5 = local_80;
      }
      for (iVar10 = *(int *)(puVar5 + (ulonglong)
                                      (local_70 - 1U &
                                      (int)((ulonglong)lVar9 >> 0x20) +
                                      ((uint)lVar9 << 0x10 | uVar11) +
                                      (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar11 >> 4)) * 4);
          iVar10 != -1; iVar10 = *(int *)((longlong)iVar10 * 0x10 + local_b8 + 8)) {
        if (*(longlong *)(local_b8 + (longlong)iVar10 * 0x10) == lVar9) {
          lVar9 = (longlong)(int)uVar13 * 0x90;
          FUN_14072ffb2(*(undefined8 *)(lVar14 + 0x78 + lVar9),
                        *(undefined4 *)(lVar14 + 0x80 + lVar9));
          if (*(longlong *)(lVar14 + 0x78 + lVar9) != 0) {
            FUN_1400020a8();
          }
          pvVar15 = (void *)(lVar14 + lVar9);
          plVar4 = *(longlong **)((longlong)pvVar15 + 0x70);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
          if (*(longlong *)((longlong)pvVar15 + 0x40) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)((longlong)pvVar15 + 8) != 0) {
            FUN_1400020a8();
          }
          iVar10 = *(int *)(param_1 + 0x80);
          if (~uVar13 + iVar10 != 0) {
            memmove(pvVar15,(void *)((longlong)pvVar15 + 0x90),
                    (longlong)(int)(~uVar13 + iVar10) * 0x90);
            iVar10 = *(int *)(param_1 + 0x80);
          }
          *(int *)(param_1 + 0x80) = iVar10 + -1;
          FUN_140a6f1e4(plVar1);
          uVar13 = uVar13 - 1;
          goto LAB_140a6eed0;
        }
      }
    }
    lVar14 = lVar14 + uVar8 * 0x90;
    uVar8 = 0;
    FUN_144a13f80(&local_b8,&local_108,lVar14,0);
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0x80;
    uStack_d8 = 0xffffffff;
    local_d4 = 0;
    local_c8 = (undefined1 *)0x0;
    local_c0 = 0;
    do {
      iVar10 = *(int *)(lVar14 + 0x10);
      uVar7 = (uint)uVar8;
      if (iVar10 <= (int)uVar7) break;
      lVar9 = *(longlong *)(lVar14 + 8);
      pvVar15 = (void *)(lVar9 + uVar8 * 8);
      if ((int)uStack_100 != local_d4) {
        lVar9 = *(longlong *)(lVar9 + uVar8 * 8);
        uVar11 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar12 = (uint)lVar9 & 0xffff;
        puVar5 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar5 = local_d0;
        }
        for (iVar3 = *(int *)(puVar5 + (ulonglong)
                                       (local_c0 - 1U &
                                       (int)((ulonglong)lVar9 >> 0x20) +
                                       ((uint)lVar9 << 0x10 | uVar12) +
                                       (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4)) * 4);
            iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x10 + local_108 + 8)) {
          if (*(longlong *)(local_108 + (longlong)iVar3 * 0x10) == lVar9) {
            if (~uVar7 + iVar10 != 0) {
              memmove(pvVar15,(void *)((longlong)pvVar15 + 8),(longlong)(int)(~uVar7 + iVar10) << 3)
              ;
              iVar10 = *(int *)(lVar14 + 0x10);
            }
            *(int *)(lVar14 + 0x10) = iVar10 + -1;
            FUN_1406ce816((longlong *)(lVar14 + 8));
            uVar7 = uVar7 - 1;
            goto LAB_140a6ee11;
          }
        }
      }
      FUN_144a13f80(&local_108,local_10c,pvVar15,0);
LAB_140a6ee11:
      uVar8 = (ulonglong)(uVar7 + 1);
    } while (-2 < (int)uVar7);
    iVar10 = *(int *)(lVar14 + 0x20);
    if ((longlong)iVar10 < 0) {
      plVar4 = *(longlong **)(lVar14 + 8);
      uVar7 = *(uint *)(lVar14 + 0x10);
LAB_140a6ee34:
      if (uVar7 != 0) {
        plVar6 = plVar4 + (int)uVar7;
        lVar9 = *(longlong *)(lVar14 + 0x18);
LAB_140a6ee47:
        iVar10 = 0;
        do {
          if (*plVar4 == lVar9) goto LAB_140a6ee60;
          plVar4 = plVar4 + 1;
          iVar10 = iVar10 + 1;
        } while (plVar4 != plVar6);
      }
      iVar10 = -1;
LAB_140a6ee60:
      *(int *)(lVar14 + 0x20) = iVar10;
    }
    else {
      uVar7 = *(uint *)(lVar14 + 0x10);
      plVar4 = *(longlong **)(lVar14 + 8);
      if ((int)uVar7 <= iVar10) goto LAB_140a6ee34;
      lVar9 = *(longlong *)(lVar14 + 0x18);
      if (lVar9 != plVar4[iVar10]) {
        if (lVar9 == 0) {
          *(longlong *)(lVar14 + 0x18) = plVar4[iVar10];
          goto LAB_140a6ee64;
        }
        plVar6 = plVar4 + uVar7;
        goto LAB_140a6ee47;
      }
    }
LAB_140a6ee64:
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar8 = uStack_100 >> 0x20;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    if ((int)uVar8 != 0) {
      FUN_14472eb64(&local_108,0);
    }
    uStack_d8 = 0xffffffff;
    local_d4 = 0;
    local_e0 = 0;
    if (0x80 < local_dc) {
      local_dc = 0x80;
      FUN_1446efbd8(local_f8,0);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
LAB_140a6eed0:
    uVar8 = (ulonglong)(uVar13 + 1);
  } while (-2 < (int)uVar13);
  iVar10 = *(int *)(param_1 + 0x80);
LAB_140a6f0dc:
  if (*(int *)(param_1 + 0x84) != iVar10) {
    FUN_1408522b2(plVar1);
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6f1e4 FUN_140a6f1e4 body=151 status=ok
// SIG undefined FUN_140a6f1e4(void)

void FUN_140a6f1e4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x90)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x90,8);
      uVar3 = uVar3 / 0x90;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x90,8);
    }
  }
  return;
}



// FUNCTION 140a6f284 FUN_140a6f284 body=587 status=ok
// SIG undefined FUN_140a6f284(void)

undefined8 FUN_140a6f284(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (*(undefined4 *)(param_1 + 0x38) = 0, *(int *)(param_1 + 0x3c) != 0)) {
    FUN_1409d5a12(param_1);
  }
  pbVar9 = (byte *)*param_2;
  if ((pbVar9 == (byte *)0x0) || ((*pbVar9 & 3) != 1)) {
    plVar3 = (longlong *)param_2[1];
    pbVar5 = pbVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      pbVar5 = (byte *)*param_2;
    }
    plVar6 = plVar3;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 0x6b) == 3)) {
      puVar4 = (undefined8 *)FUN_1446e60f4(pbVar5,&DAT_14cb768e8);
      pbVar9 = (byte *)*puVar4;
      plVar6 = (longlong *)puVar4[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
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
    if ((pbVar9 != (byte *)0x0) && ((*pbVar9 & 0x6b) == 2)) {
      lVar7 = (longlong)(int)(*(longlong **)(pbVar9 + 8))[2];
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)**(longlong **)(pbVar9 + 8);
        puVar8 = puVar4 + lVar7 * 2;
        do {
          local_70 = *puVar4;
          local_68 = (longlong *)puVar4[1];
          if (local_68 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
          }
          local_60 = 0;
          local_58 = 0x3003;
          local_50 = 0;
          FUN_140a6f562(&local_70,&local_60);
          if ((local_60 != 0) && (local_58 - 1U < 0xfffffffe)) {
            FUN_140a6f4d0(param_1,&local_60);
          }
          plVar3 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_68 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          puVar4 = puVar4 + 2;
        } while (puVar4 != puVar8);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  else {
    local_60 = 0;
    local_58 = 0x3003;
    local_50 = 0;
    FUN_140a6f562(param_2,&local_60);
    if ((local_60 != 0) && (local_58 - 1U < 0xfffffffe)) {
      FUN_140a6f4d0(param_1,&local_60);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140a6f4d0 FUN_140a6f4d0 body=146 status=ok
// SIG undefined FUN_140a6f4d0(void)

void FUN_140a6f4d0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar3 = (longlong)(int)uVar1;
  if ((char)uVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) == *param_2) &&
         (*(int *)(lVar2 + 8 + lVar4) == (int)param_2[1])) {
        return;
      }
      lVar4 = lVar4 + 0x18;
    } while ((ulonglong)((uVar1 & 0xff) << 3) * 3 != lVar4);
  }
  *(uint *)(param_1 + 0x38) = uVar1 + 1;
  if (*(uint *)(param_1 + 0x3c) < uVar1 + 1) {
    FUN_1409d5af8(param_1,uVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  *(longlong *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(int *)(lVar2 + 8 + lVar3 * 0x18) = (int)param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  return;
}



// FUNCTION 140a6f562 FUN_140a6f562 body=143 status=ok
// SIG undefined FUN_140a6f562(void)

void FUN_140a6f562(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  local_48 = (undefined4)param_2[1];
  local_40 = 0;
  local_1c = 1;
  local_20 = local_48;
  FUN_140008118(local_38,param_1);
  if ((*param_2 != local_38[0]) || ((int)param_2[1] != 0x3003)) {
    *param_2 = local_38[0];
    *(undefined4 *)(param_2 + 1) = 0x3003;
    param_2[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6f5f2 FUN_140a6f5f2 body=261 status=ok
// SIG undefined FUN_140a6f5f2(void)

void FUN_140a6f5f2(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x348))(param_1,(char)param_1[0x17],0);
  FUN_140a6f97c(param_1,param_1 + 0x5c,param_2,param_1 + 0x2b);
  FUN_140a6fa14(param_1,param_1 + 0x5d,param_2,param_1 + 0x32);
  FUN_140a6f6fe(param_1,param_1 + 0x5e,param_2,param_1 + 0x39);
  FUN_140a6f6fe(param_1,param_1 + 0x5f,param_2,param_1 + 0x24);
  FUN_140a6f6fe(param_1,param_1 + 0x60,param_2,param_1 + 0x40);
  FUN_140a6f8e8(param_1,param_1 + 0x61,param_2,param_1 + 0x1d);
  FUN_140a6f796(param_1,(longlong)param_1 + 0x30c,param_2,param_1 + 0x47);
  FUN_140a6f6fe(param_1,param_1 + 0x62,param_2,param_1 + 0x4e);
  FUN_140a6f6fe(param_1,param_1 + 99,param_2,param_1 + 0x55);
  return;
}



// FUNCTION 140a6f6fe FUN_140a6f6fe body=127 status=ok
// SIG undefined FUN_140a6f6fe(void)

void FUN_140a6f6fe(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144741050(param_4 + 0x28);
  FUN_144830b78(local_2c,uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_4 + 0x35) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6f796 FUN_140a6f796 body=123 status=ok
// SIG undefined FUN_140a6f796(void)

void FUN_140a6f796(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144741050(param_4 + 0x28);
  FUN_144830b78(local_2c,uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_4 + 0x35) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6f82a FUN_140a6f82a body=188 status=ok
// SIG undefined FUN_140a6f82a(void)

void FUN_140a6f82a(uint *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0xffffffff;
  local_30 = param_3;
  local_28[0] = FUN_144830b78(local_28,&DAT_14cb420d0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) == local_30) && (*(int *)(lVar2 + 8 + lVar4) == local_28[0])
         ) {
        iVar3 = (int)(lVar4 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = (uint)*(ushort *)(param_2[2] + 2 + (longlong)iVar3 * 0x20);
        }
        break;
      }
      lVar1 = lVar2 + lVar4;
      lVar4 = lVar4 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6f8e8 FUN_140a6f8e8 body=123 status=ok
// SIG undefined FUN_140a6f8e8(void)

void FUN_140a6f8e8(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144741050(param_4 + 0x28);
  FUN_144830b78(local_2c,uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_4 + 0x35) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6f97c FUN_140a6f97c body=127 status=ok
// SIG undefined FUN_140a6f97c(void)

void FUN_140a6f97c(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144741050(param_4 + 0x28);
  FUN_144830b78(local_2c,uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_4 + 0x35) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6fa14 FUN_140a6fa14 body=127 status=ok
// SIG undefined FUN_140a6fa14(void)

void FUN_140a6fa14(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144741050(param_4 + 0x28);
  FUN_144830b78(local_2c,uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_4 + 0x35) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6faac FUN_140a6faac body=188 status=ok
// SIG undefined FUN_140a6faac(void)

void FUN_140a6faac(uint *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0xffffffff;
  local_30 = param_3;
  local_28[0] = FUN_144830b78(local_28,&DAT_14cb420e0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) == local_30) && (*(int *)(lVar2 + 8 + lVar4) == local_28[0])
         ) {
        iVar3 = (int)(lVar4 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = (uint)*(ushort *)(param_2[2] + 2 + (longlong)iVar3 * 0x20);
        }
        break;
      }
      lVar1 = lVar2 + lVar4;
      lVar4 = lVar4 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6fb6a FUN_140a6fb6a body=327 status=ok
// SIG undefined FUN_140a6fb6a(void)

void FUN_140a6fb6a(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40 [2];
  longlong local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_38 = param_3;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42180);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_38) && (*(int *)(lVar2 + 8 + lVar5) == local_30[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 1;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2]);
          goto LAB_140a6fc5e;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_48 = param_3;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42170);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_48) && (*(int *)(lVar2 + 8 + lVar5) == local_40[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 0;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2] + 4);
LAB_140a6fc5e:
          *(uint *)(param_1 + 4) = (uint)*puVar4;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6fcb2 FUN_140a6fcb2 body=238 status=ok
// SIG undefined FUN_140a6fcb2(void)

undefined8 * FUN_140a6fcb2(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = DAT_14cbc3098;
  if ((((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0 &&
       (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x3c))) &&
      (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 && (*(longlong *)(param_1 + 0x50) != 0)))))) {
    if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1))
        && (((int)uVar1 < DAT_14c9647dc &&
            ((((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0 &&
               (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x4c))) &&
              ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) &&
             ((*(longlong *)(param_1 + 0x40) != 0 &&
              (cVar2 = FUN_140a6ff78(param_1), uVar4 = DAT_14cbc30a0, cVar2 != '\0')))))))) &&
       (iVar3 = FUN_140a6fda0(param_1,1), uVar4 = DAT_14cbc30a8, iVar3 != -1)) {
      uVar4 = 0;
    }
  }
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 140a6fda0 FUN_140a6fda0 body=472 status=ok
// SIG undefined FUN_140a6fda0(void)

ulonglong FUN_140a6fda0(longlong param_1,char param_2)

{
  uint uVar1;
  uint *puVar2;
  double *pdVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = 0xffffffff;
  if (((((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
       (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x3c))))) &&
     (((((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
        ((*(longlong *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0x4c) != 0)))) &&
       (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
      (((((int)uVar1 < DAT_14c9647dc &&
         (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0)) &&
        (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x4c))) &&
       (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
        (lVar6 = *(longlong *)(param_1 + 0x40), lVar6 != 0)))))))) {
    fVar10 = *(float *)(lVar6 + 0x24);
    fVar11 = *(float *)(lVar6 + 0x60);
    if (param_2 != '\0') {
      fVar10 = fVar10 - *(float *)(lVar6 + 0x30);
      fVar11 = fVar11 - *(float *)(lVar6 + 0x30);
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((ulonglong)uVar1 != 0) {
      uVar9 = -(uint)(0.0 < *(float *)(param_1 + 0xb8));
      puVar2 = *(uint **)(param_1 + 0x28);
      fVar12 = 3.4028235e+38;
      uVar4 = 0xffffffff;
      uVar7 = 0;
      do {
        uVar8 = (longlong)(int)(uVar1 - 1);
        if ((longlong)uVar7 < (longlong)(int)(uVar1 - 1)) {
          uVar8 = uVar7;
        }
        if ((longlong)uVar8 < 1) {
          uVar8 = 0;
        }
        uVar5 = *(uint *)(param_1 + 0x24) - (uint)uVar8;
        if (*(uint *)(param_1 + 0x24) < (uint)uVar8) {
          uVar5 = uVar5 + puVar2[4];
        }
        pdVar3 = *(double **)(*(longlong *)(puVar2 + 2) + (longlong)(int)(uVar5 & *puVar2) * 0x10);
        if (pdVar3 == (double *)0x0) {
          return uVar4;
        }
        fVar13 = (float)((double)(float)*(double *)(param_1 + 0x10) - *pdVar3);
        if (fVar11 < fVar13) {
          return uVar4;
        }
        if (((fVar10 <= fVar13) && (*(char *)(pdVar3 + 0xe) == '\x01')) &&
           (fVar13 = ABS(fVar13 - (float)(~uVar9 & (uint)fVar11 |
                                         (uint)*(float *)(param_1 + 0xb8) & uVar9)), fVar13 < fVar12
           )) {
          uVar4 = uVar7 & 0xffffffff;
          fVar12 = fVar13;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  return uVar4;
}



// FUNCTION 140a6ff78 FUN_140a6ff78 body=893 status=ok
// SIG undefined FUN_140a6ff78(void)

ulonglong FUN_140a6ff78(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  undefined8 ***local_c0 [3];
  ushort local_a8;
  byte local_a0;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  char local_58;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140a701fe:
    uVar10 = 0;
    goto LAB_140a70200;
  }
  uVar6 = *(uint *)(param_1 + 0x38);
  uVar10 = 0;
  if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_140a70200;
  lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  if (((lVar11 == 0) ||
      (((*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x3c) ||
        ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) || (*(longlong *)(param_1 + 0x50) == 0)))) ||
     (*(int *)(param_1 + 0x4c) == 0)) goto LAB_140a701fe;
  uVar6 = *(uint *)(param_1 + 0x48);
  uVar10 = 0;
  if (((int)uVar6 < 0) || (uVar10 = 0, DAT_14c9647dc <= (int)uVar6)) goto LAB_140a70200;
  lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  if (((lVar11 == 0) ||
      ((*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x4c) ||
       ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) || (*(longlong *)(param_1 + 0x40) == 0))
  goto LAB_140a701fe;
  FUN_140a7042e(param_1,local_d0);
  uVar10 = CONCAT71((int7)((ulonglong)local_d0 >> 8),1);
  if ((local_d0[0] != 0) && (local_58 != '\x01')) {
    if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140a7028b:
      lVar11 = 0;
      uVar8 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x38);
      lVar11 = 0;
      if ((int)uVar6 < 0) goto LAB_140a7028b;
      uVar8 = 0;
      if ((int)uVar6 < DAT_14c9647dc) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != *(int *)(param_1 + 0x3c))) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar11 = *plVar9, lVar11 == 0))
        goto LAB_140a7028b;
        uVar8 = FUN_1447210f0(lVar11);
      }
    }
    FUN_140a702f6(&local_e0,uVar8);
    if (local_d8 != (longlong *)0x0) {
      iVar5 = (int)local_d8[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_d8[1];
        bVar12 = iVar5 == iVar4;
        if (bVar12) {
          *(int *)(local_d8 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar9 = local_d8;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_e0 == 0) {
          uVar10 = 0;
        }
        else {
          uVar6 = FUN_140a70784(local_e0,local_d0,lVar11,0);
          uVar10 = (ulonglong)uVar6;
        }
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        goto LAB_140a70170;
      }
    }
    uVar10 = 0;
  }
LAB_140a70170:
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_48[0];
    if (local_30 < 0x19) {
      ppppuVar7 = local_48;
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_88[0];
    if (local_70 < 0x19) {
      ppppuVar7 = local_88;
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_c0[0];
    if (local_a8 < 0x19) {
      ppppuVar7 = local_c0;
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(local_c0[0]);
  }
LAB_140a70200:
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 140a702f6 FUN_140a702f6 body=310 status=ok
// SIG undefined FUN_140a702f6(void)

longlong * FUN_140a702f6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb23f08;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
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
    }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a7042e FUN_140a7042e body=624 status=ok
// SIG undefined FUN_140a7042e(void)

longlong * FUN_140a7042e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 5) = 4;
  *(undefined4 *)(param_2 + 2) = 0x3f800000;
  *(undefined1 *)(param_2 + 6) = 3;
  cVar3 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_2 + 7) = cVar3;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 0xc) = 4;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined1 *)(param_2 + 0xd) = 3;
  *(char *)(param_2 + 0xe) = cVar3;
  *(undefined2 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7a) = 0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  FUN_144983130(param_2 + 1,lVar5 + 0x180);
  FUN_144983130(param_2 + 8,lVar5 + 0x1b8);
  *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(lVar5 + 0x1f0);
  puVar1 = (uint *)(lVar5 + 0x1f8);
  if (((((*(int *)(lVar5 + 0x1fc) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar5 + 0x1fc))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar6 = *plVar7, lVar6 == 0)))) {
    if (*(longlong *)(lVar5 + 0x200) != 0) {
      lVar6 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar6 == 0) || (cVar3 == '\0')) {
        if (lVar6 == 0) {
          *(undefined8 *)(lVar5 + 0x1f8) = 0;
          goto LAB_140a705fc;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
        *puVar1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar4 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar4 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar4 = iVar8;
          }
        }
        *(int *)(lVar5 + 0x1fc) = iVar4;
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,lVar6);
        }
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_140a70535;
    }
  }
  else {
LAB_140a70535:
    lVar5 = FUN_140a7069e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar6);
      }
      goto LAB_140a7056a;
    }
  }
LAB_140a705fc:
  lVar6 = 0;
LAB_140a7056a:
  *param_2 = lVar6;
  return param_2;
}



// FUNCTION 140a7069e FUN_140a7069e body=228 status=ok
// SIG undefined FUN_140a7069e(void)

longlong FUN_140a7069e(void)

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
  if (DAT_14cb210a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f174b7;
    local_40 = &LAB_140ec5c1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAITicketData",&DAT_14cb210a0,&DAT_147f174b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb210a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a70784 FUN_140a70784 body=1785 status=ok
// SIG undefined FUN_140a70784(void)

/* WARNING: Removing unreachable block (ram,0x000140a70b09) */

ulonglong FUN_140a70784(undefined8 param_1,undefined8 *param_2,longlong param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined7 uVar16;
  ulonglong uVar15;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  float local_f0;
  int iStack_ec;
  ushort local_d8;
  byte local_d0;
  char local_c8 [8];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  char local_a8;
  int local_a0 [2];
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_4 == (char *)0x0) {
    local_c8[0] = '\0';
    local_a0[0] = 0;
    FUN_1456bb102(local_c8,param_3);
  }
  else {
    local_c8[0] = *param_4;
    if (local_c8[0] == '\x01') {
      local_c8[0] = '\x02';
      if (*(longlong *)(param_4 + 8) == 0) {
        local_c0._0_4_ = 0;
        iVar7 = 0;
        uVar4 = (uint)local_c0;
      }
      else {
        uVar4 = *(uint *)(*(longlong *)(param_4 + 8) + 0xc);
        local_c0 = (ulonglong)uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar7 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar7 = *(int *)(lVar17 + 0x10);
          bVar20 = iVar7 == 0;
          if (bVar20) {
            *(int *)(lVar17 + 0x10) = iVar14;
            iVar7 = 0;
          }
          UNLOCK();
          uVar4 = (uint)local_c0;
          if (bVar20) {
            iVar7 = iVar14;
          }
        }
      }
      local_c0._0_4_ = uVar4;
      local_c0 = CONCAT44(iVar7,(uint)local_c0);
    }
    else if (local_c8[0] == '\x02') {
      local_c0 = *(ulonglong *)(param_4 + 8);
    }
    else if (local_c8[0] == '\x03') {
      local_c0 = *(undefined8 *)(param_4 + 8);
      local_b8 = *(longlong **)(param_4 + 0x10);
      if (local_b8 == (longlong *)0x0) {
        local_b0 = *(undefined8 *)(param_4 + 0x18);
        local_a8 = param_4[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
        UNLOCK();
        local_b0 = *(undefined8 *)(param_4 + 0x18);
        local_a8 = param_4[0x20];
      }
    }
    local_a0[0] = 0;
    if (*(int *)(param_4 + 0x28) != 0) {
      uVar9 = FUN_1448174c4(local_a0);
      FUN_1400e08b0(uVar9,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
    }
  }
  uVar9 = *param_2;
  pfVar8 = &local_f0;
  FUN_1447c3578(param_2 + 1,pfVar8,local_c8);
  if (local_d0 == 3) {
    fVar22 = local_f0;
    bVar6 = 3;
  }
  else {
    pfVar19 = &local_98;
    FUN_1400b56fe(pfVar19,&local_f0,3);
    fVar22 = 0.0;
    if (local_78 != 0) {
      fVar22 = local_98;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar19 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar19);
    }
    bVar6 = local_d0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar6 = local_d0;
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar8 = (float *)CONCAT44(iStack_ec,local_f0);
    }
    (*pcVar5)(pfVar8);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(iStack_ec,local_f0));
  }
  if (*(char *)((longlong)param_2 + 0x7a) == '\x01') {
    pfVar8 = &local_98;
    FUN_1447c3578(param_2 + 0x10,pfVar8,local_c8);
    uVar10 = FUN_14030a32e(pfVar8);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar8 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar8);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  else {
    uVar10 = 0;
  }
  cVar2 = *(char *)(param_2 + 0xf);
  pfVar8 = &local_f0;
  FUN_1447c3578(param_2 + 8,pfVar8,local_c8);
  bVar6 = 3;
  if (local_d0 != 3) {
    pfVar19 = &local_98;
    local_f8 = param_1;
    FUN_1400b56fe(pfVar19,&local_f0,3);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar19 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar19);
    }
    param_1 = local_f8;
    bVar6 = local_d0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      param_1 = local_f8;
      bVar6 = local_d0;
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar8 = (float *)CONCAT44(iStack_ec,local_f0);
    }
    (*pcVar5)(pfVar8);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(iStack_ec,local_f0));
  }
  uVar16 = (undefined7)((ulonglong)param_3 >> 8);
  if (fVar22 <= 0.0) {
    uVar15 = CONCAT71(uVar16,1);
    goto LAB_140a70975;
  }
  cVar3 = *(char *)((longlong)param_2 + 0x79);
  FUN_140a70e7e(param_1,&local_98,param_3);
  local_108 = uVar10;
  pfVar8 = (float *)FUN_140a71094(param_1,uVar9,param_3,&local_98);
  if (cVar3 == '\0' || cVar2 != '\x02') {
    if (pfVar8 == (float *)0x0) {
LAB_140a70d68:
      uVar15 = 0;
      goto LAB_140a70975;
    }
    fVar22 = fVar22 + *pfVar8;
  }
  else {
    fVar21 = 0.0;
    if (cVar3 == '\x01') {
      local_100 = 1;
      local_108 = uVar10;
      FUN_140a71b12(param_1,&local_f0,uVar9,param_3);
      if (((((iStack_ec != 0) && (-1 < (int)local_f0)) && ((int)local_f0 < DAT_14c9647dc)) &&
          ((plVar12 = (longlong *)
                      ((ulonglong)(((uint)local_f0 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_f0 >> 0x10) * 8)),
           plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iStack_ec)))) &&
         (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && ((param_3 != 0 && (*plVar12 != 0)))))) {
        local_108 = 0;
        fVar21 = (float)FUN_140a72f08(param_1,pfVar8,param_3);
      }
    }
    if (pfVar8 == (float *)0x0) goto LAB_140a70d68;
    fVar22 = (pfVar8[2] - fVar21) + fVar22 + *pfVar8;
  }
  uVar15 = CONCAT71(uVar16,fVar22 <= pfVar8[1]);
LAB_140a70975:
  lVar17 = DAT_14c9a3da0;
  if ((longlong)local_a0[0] != 0) {
    lVar18 = (longlong)local_a0[0] + -1;
    lVar13 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar17 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar17 = DAT_14c9a3da0;
    iVar7 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar17 + lVar13) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar17 + 4 + lVar13) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar14 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar14 = iVar7;
    }
    bVar6 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar11 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_a0[0] = 0;
  }
  if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a70e7e FUN_140a70e7e body=347 status=ok
// SIG undefined FUN_140a70e7e(void)

undefined4 * FUN_140a70e7e(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    uVar9 = 0;
    uVar5 = 0;
  }
  else {
    uVar9 = *(uint *)(param_3 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar5 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar5 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar5 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar5 = uVar8;
      }
    }
  }
  local_40 = CONCAT44(uVar5,uVar9);
  iVar4 = FUN_140a70fda(param_1 + 0x120,uVar5 ^ uVar9);
  if ((iVar4 == -1) && (param_3 != 0)) {
    uVar6 = FUN_1401b0f18();
    plVar7 = (longlong *)FUN_144718840(param_3,uVar6);
    if ((plVar7 != (longlong *)0x0) && (lVar10 = (**(code **)(*plVar7 + 0x18))(plVar7), lVar10 != 0)
       ) {
      param_2[4] = *(undefined4 *)(lVar10 + 0x844);
      uVar1 = *(undefined4 *)(lVar10 + 0x838);
      uVar2 = *(undefined4 *)(lVar10 + 0x83c);
      uVar3 = *(undefined4 *)(lVar10 + 0x840);
      *param_2 = *(undefined4 *)(lVar10 + 0x834);
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      goto LAB_140a70f4c;
    }
  }
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 3) = 0;
LAB_140a70f4c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a70fda FUN_140a70fda body=185 status=ok
// SIG undefined FUN_140a70fda(void)

int FUN_140a70fda(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140a71003;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140a71003:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140a71094 FUN_140a71094 body=677 status=ok
// SIG undefined FUN_140a71094(void)

undefined8
FUN_140a71094(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_140a711b9;
  if ((param_5 == 0) && (*(char *)(param_2 + 0xa0) == '\0')) {
    cVar1 = FUN_140a7133a(param_4);
    if (cVar1 == '\0') {
      local_48 = 0;
      FUN_14485c47a(&local_48,param_3);
      local_68 = local_48;
      iVar2 = FUN_140a70fda(param_1 + 0x120,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
      if (iVar2 == -1) goto LAB_140a712e5;
    }
    local_58 = *(undefined4 *)(param_4 + 2);
    local_68 = *param_4;
    uStack_60 = *(uint *)(param_4 + 1);
    iStack_5c = *(int *)((longlong)param_4 + 0xc);
    local_50 = 0;
    local_54 = *(uint *)(param_2 + 0xc);
    if ((int)local_54 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_54 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_54 >> 0x10) * 8);
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
    local_50 = iVar2;
    uVar3 = FUN_140a727de(param_1);
  }
  else {
    local_78 = param_5;
    local_70 = 1;
    FUN_140a71b12(param_1,&local_40,param_2,param_3);
    if (iStack_3c != 0) {
      uVar3 = 0;
      if (((int)local_40 < 0) || (uVar3 = 0, DAT_14c9647dc <= (int)local_40)) goto LAB_140a711b9;
      lVar5 = (ulonglong)((local_40 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
      if ((lVar5 != 0) &&
         ((*(int *)(lVar5 + 0x10) == iStack_3c && ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
        local_68 = CONCAT44(iStack_3c,local_40);
        iStack_5c = 0;
        uStack_60 = *(uint *)(param_2 + 0xc);
        if ((int)uStack_60 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uStack_60 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_60 >> 0x10) * 8);
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
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar4);
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
        iStack_5c = iVar2;
        uVar3 = FUN_140a713d0(param_1);
        goto LAB_140a711b9;
      }
    }
LAB_140a712e5:
    uVar3 = 0;
  }
LAB_140a711b9:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140a7133a FUN_140a7133a body=149 status=ok
// SIG undefined FUN_140a7133a(void)

undefined8 FUN_140a7133a(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = param_1[2];
  if (((((iVar1 == 0) || (uVar2 = param_1[1], (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
      ((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 == 0 ||
       (*(int *)(lVar6 + 0x10) != iVar1)))) ||
     (uVar4 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1), (*(uint *)(lVar6 + 8) & 0x10200000) != 0
     )) {
    uVar2 = param_1[4];
    uVar5 = (ulonglong)uVar2;
    if (((uVar2 != 0) && (uVar3 = param_1[3], -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 != 0 &&
         (*(uint *)(lVar6 + 0x10) == uVar2)))))) {
      uVar2 = *(uint *)(lVar6 + 8);
      uVar5 = (ulonglong)uVar2;
      if ((uVar2 & 0x10200000) == 0) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
    }
    uVar4 = CONCAT71((int7)(uVar5 >> 8),-1 < *param_1);
  }
  return uVar4;
}



// FUNCTION 140a713d0 FUN_140a713d0 body=1476 status=ok
// SIG undefined FUN_140a713d0(void)

longlong FUN_140a713d0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar4 = param_2[1];
  if (uVar4 == 0) {
LAB_140a71869:
    lVar11 = 0;
    goto LAB_140a7157f;
  }
  uVar7 = *param_2;
  lVar11 = 0;
  if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_140a7157f;
  plVar10 = (longlong *)
            ((ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
  if ((plVar10 == (longlong *)0x0) ||
     ((((*(uint *)(plVar10 + 2) != uVar4 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) ||
       (lVar15 = *plVar10, lVar15 == 0)) || (uVar9 = param_2[3], uVar9 == 0)))) goto LAB_140a71869;
  uVar12 = param_2[2];
  lVar11 = 0;
  if (((int)uVar12 < 0) || (lVar11 = 0, DAT_14c9647dc <= (int)uVar12)) goto LAB_140a7157f;
  plVar10 = (longlong *)
            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
  if ((plVar10 == (longlong *)0x0) ||
     (((*(uint *)(plVar10 + 2) != uVar9 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) ||
      (lVar1 = *plVar10, lVar1 == 0)))) goto LAB_140a71869;
  plVar10 = (longlong *)(param_1 + 0x30);
  uVar9 = uVar9 ^ uVar12;
  uVar7 = uVar9 >> 0xd ^ (uVar7 ^ uVar4) - uVar9;
  uVar4 = uVar7 << 8 ^ (-0x61c88647 - uVar9) - uVar7;
  uVar12 = uVar4 >> 0xd ^ (uVar9 - uVar7) - uVar4;
  uVar9 = uVar12 >> 0xc ^ (uVar7 - uVar4) - uVar12;
  uVar7 = uVar9 << 0x10 ^ (uVar4 - uVar12) - uVar9;
  uVar4 = uVar7 >> 5 ^ (uVar12 - uVar9) - uVar7;
  uVar9 = uVar4 >> 3 ^ (uVar9 - uVar7) - uVar4;
  uVar7 = uVar9 << 10 ^ (uVar7 - uVar4) - uVar9;
  iVar5 = FUN_140a71996(plVar10,uVar7 >> 0xf ^ uVar4 - (uVar9 + uVar7),param_2);
  if (iVar5 != -1) {
    if (*plVar10 + (longlong)iVar5 * 0x98 != 0) {
      lVar11 = *plVar10 + (longlong)iVar5 * 0x98 + 0x10;
      goto LAB_140a7157f;
    }
  }
  local_d0 = lVar15;
  if (*(int *)(param_1 + 100) == 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar5 + 1;
    if (*(int *)(param_1 + 0x3c) == iVar5) {
      FUN_14125fb0c(plVar10,iVar5);
    }
    lVar15 = (longlong)iVar5;
    iVar14 = FUN_144a54ea4(param_1 + 0x40,1);
    lVar11 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar11 = param_1 + 0x40;
    }
    iVar6 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar6 = iVar14;
    }
    bVar3 = (byte)iVar14 & 0x1f;
    puVar13 = (uint *)(lVar11 + (longlong)(iVar6 >> 5) * 4);
    *puVar13 = *puVar13 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x60);
    lVar15 = (longlong)iVar5;
    iVar14 = *(int *)(*(longlong *)(param_1 + 0x30) + 4 + lVar15 * 0x98);
    *(int *)(param_1 + 0x60) = iVar14;
    iVar6 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar14 * 0x98) = 0xffffffff;
    }
  }
  lVar11 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x50);
  }
  iVar14 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar14 = iVar5;
  }
  puVar13 = (uint *)(lVar11 + (longlong)(iVar14 >> 5) * 4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar5 & 0x1f);
  lVar11 = *(longlong *)(param_1 + 0x30);
  local_78 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  puVar13 = (uint *)(lVar11 + lVar15 * 0x98);
  *puVar13 = *param_2;
  puVar13[1] = uVar4;
  puVar13[2] = uVar7;
  puVar13[3] = uVar9;
  puVar13[6] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  FUN_140a71a2a(puVar13 + 0x10,&local_98);
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar13 = (uint *)(lVar11 + lVar15 * 0x98);
  FUN_140a3dc66(&local_98);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  puVar13[0x24] = 0xffffffff;
  uVar7 = puVar13[3] ^ puVar13[2];
  uVar4 = uVar7 >> 0xd ^ (puVar13[1] ^ *puVar13) - uVar7;
  uVar9 = uVar4 << 8 ^ (-0x61c88647 - uVar7) - uVar4;
  uVar12 = uVar9 >> 0xd ^ (uVar7 - uVar4) - uVar9;
  uVar7 = uVar12 >> 0xc ^ (uVar4 - uVar9) - uVar12;
  uVar4 = uVar7 << 0x10 ^ (uVar9 - uVar12) - uVar7;
  uVar9 = uVar4 >> 5 ^ (uVar12 - uVar7) - uVar4;
  uVar7 = uVar9 >> 3 ^ (uVar7 - uVar4) - uVar9;
  uVar4 = uVar7 << 10 ^ (uVar4 - uVar9) - uVar7;
  uVar4 = uVar4 >> 0xf ^ uVar9 - (uVar7 + uVar4);
  iVar14 = 1;
  if (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100) == 1) {
    uVar7 = 1;
LAB_140a717a8:
    iVar6 = iVar5;
    if (((int)uVar7 < 1) || (iVar14 <= *(int *)(param_1 + 0x78))) {
      uVar4 = *(int *)(param_1 + 0x78) - 1U & uVar4;
      puVar13[0x25] = uVar4;
      lVar11 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar11 = param_1 + 0x68;
      }
      puVar13[0x24] =
           *(uint *)(lVar11 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar4) * 4);
      lVar11 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar11 = param_1 + 0x68;
      }
      *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar4) * 4) =
           iVar5;
    }
    else {
      *(int *)(param_1 + 0x78) = iVar14;
      FUN_145768f76(plVar10);
    }
  }
  else {
    iVar6 = FUN_140a71996(plVar10,uVar4,puVar13);
    if (iVar6 == -1) {
      uVar7 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
      if (3 < uVar7) {
        uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar11 & 0x1f);
      }
      goto LAB_140a717a8;
    }
    lVar11 = *plVar10;
    FUN_140a3dc1e((longlong)iVar6 * 0x98 + lVar11 + 0x10);
    memmove((void *)(lVar11 + (longlong)iVar6 * 0x98),puVar13,0x90);
    FUN_14389f738(plVar10,iVar5);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar15 = lVar2 + (longlong)iVar6 * 0x98;
  lVar11 = lVar15 + 0x10;
  FUN_140a72466(param_1,lVar11,lVar1);
  uVar4 = *(uint *)(local_d0 + 0xc);
  *(uint *)(lVar15 + 0x38) = uVar4;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  iVar5 = *(int *)(lVar15 + 0x10);
  if (*(int *)(lVar15 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar14 = DAT_14c964868 + 1;
    bVar16 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar16) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar14);
    }
    LOCK();
    iVar5 = *(int *)(lVar15 + 0x10);
    bVar16 = iVar5 == 0;
    if (bVar16) {
      *(int *)(lVar15 + 0x10) = iVar14;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar16) {
      iVar5 = iVar14;
    }
  }
  *(int *)(lVar2 + 0x3c + (longlong)iVar6 * 0x98) = iVar5;
LAB_140a7157f:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 140a71996 FUN_140a71996 body=148 status=ok
// SIG undefined FUN_140a71996(void)

int FUN_140a71996(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar4 = lVar4 + (longlong)iVar3 * 0x98;
        cVar1 = FUN_14472ecf8(lVar4,param_3);
        if ((cVar1 != '\0') && (cVar1 = FUN_140a723fe(lVar4 + 8,param_3 + 8), cVar1 != '\0')) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x90 + (longlong)iVar3 * 0x98);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140a71a2a FUN_140a71a2a body=232 status=ok
// SIG undefined FUN_140a71a2a(void)

undefined8 * FUN_140a71a2a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 140a71b12 FUN_140a71b12 body=2139 status=ok
// SIG undefined FUN_140a71b12(void)

uint * FUN_140a71b12(longlong param_1,uint *param_2,longlong param_3,longlong param_4,
                    longlong param_5,char param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined *puVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  undefined8 ****ppppuVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  char local_a0 [16];
  longlong *local_90;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_5 == 0) {
    uStack_ac = 0;
    if (param_4 == 0) {
      local_b0 = 0;
      uVar13 = 0;
    }
    else {
      local_b0 = *(uint *)(param_4 + 0xc);
      if ((int)local_b0 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((local_b0 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_b0 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      uVar13 = *(uint *)(lVar21 + 0x10);
      if (*(uint *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar13 = *(uint *)(lVar21 + 0x10);
        bVar27 = uVar13 == 0;
        if (bVar27) {
          *(uint *)(lVar21 + 0x10) = uVar11;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar27) {
          uVar13 = uVar11;
        }
      }
    }
    uStack_a4 = 0;
    uStack_ac = uVar13;
    if (param_3 == 0) {
      uStack_a8 = 0;
      uVar13 = 0;
    }
    else {
      uStack_a8 = *(uint *)(param_3 + 0xc);
      if ((int)uStack_a8 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uStack_a8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_a8 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      uVar13 = *(uint *)(lVar21 + 0x10);
      if (*(uint *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar13 = *(uint *)(lVar21 + 0x10);
        bVar27 = uVar13 == 0;
        if (bVar27) {
          *(uint *)(lVar21 + 0x10) = uVar11;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar27) {
          uVar13 = uVar11;
        }
      }
    }
    plVar2 = (longlong *)(param_1 + 0xd0);
    uVar18 = uStack_ac ^ local_b0;
    uVar15 = uVar18 >> 0xd ^ (uVar13 ^ uStack_a8) - uVar18;
    uVar11 = uVar15 << 8 ^ (-0x61c88647 - uVar18) - uVar15;
    uVar20 = uVar11 >> 0xd ^ (uVar18 - uVar15) - uVar11;
    uVar18 = uVar20 >> 0xc ^ (uVar15 - uVar11) - uVar20;
    uVar15 = uVar18 << 0x10 ^ (uVar11 - uVar20) - uVar18;
    uVar11 = uVar15 >> 5 ^ (uVar20 - uVar18) - uVar15;
    uVar18 = uVar11 >> 3 ^ (uVar18 - uVar15) - uVar11;
    uVar15 = uVar18 << 10 ^ (uVar15 - uVar11) - uVar18;
    uStack_a4 = uVar13;
    iVar12 = FUN_140a7236e(plVar2,uVar15 >> 0xf ^ uVar11 - (uVar18 + uVar15));
    if (iVar12 != -1) {
      if ((*plVar2 + (longlong)iVar12 * 0x20 != 0) &&
         (puVar14 = (undefined8 *)((longlong)iVar12 * 0x20 + *plVar2 + 0x10),
         puVar14 != (undefined8 *)0x0)) {
        *(undefined8 *)param_2 = *puVar14;
        goto LAB_140a71cbd;
      }
    }
    local_a0[0] = '\0';
    local_78 = 0;
    FUN_1456bb102(local_a0,param_4);
    FUN_1447c3578(param_3 + 0x68,local_70,local_a0);
    lVar21 = FUN_14070d842(local_70);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar25 = local_70;
      if (0x18 < local_58) {
        ppppuVar25 = (undefined8 ****)local_70[0];
      }
      (*pcVar5)(ppppuVar25);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    lVar22 = DAT_14c9a3da0;
    if ((longlong)local_78 != 0) {
      lVar26 = (longlong)local_78 + -1;
      lVar24 = lVar26 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar24),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar24));
      if (*(longlong *)(lVar22 + lVar24) != 0) {
        FUN_1400020a8();
      }
      lVar22 = DAT_14c9a3da0;
      iVar12 = (int)lVar26;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
      }
      *(undefined4 *)(lVar22 + lVar24) = 0xffffffff;
      iVar23 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar23 = DAT_14c9a3dd0;
      }
      *(int *)(lVar22 + 4 + lVar24) = iVar23;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar19 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar19 = DAT_14c9a3dc0;
      }
      iVar23 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar23 = iVar12;
      }
      bVar6 = (byte)lVar26 & 0x1f;
      DAT_14c9a3dd0 = iVar12;
      *(uint *)(puVar19 + (longlong)(iVar23 >> 5) * 4) =
           *(uint *)(puVar19 + (longlong)(iVar23 >> 5) * 4) &
           (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      local_78 = 0;
    }
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (param_6 != '\0') {
      local_b8 = lVar21;
      if (lVar21 == 0) {
        uVar13 = 0;
        uVar17 = 0;
      }
      else {
        uVar13 = *(uint *)(lVar21 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar21 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar21 = 0;
        }
        uVar17 = (ulonglong)*(uint *)(lVar21 + 0x10);
        if (*(uint *)(lVar21 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          uVar11 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar11);
          }
          LOCK();
          uVar15 = *(uint *)(lVar21 + 0x10);
          bVar27 = uVar15 == 0;
          if (bVar27) {
            *(uint *)(lVar21 + 0x10) = uVar11;
            uVar15 = 0;
          }
          UNLOCK();
          if (bVar27) {
            uVar15 = uVar11;
          }
          uVar17 = (ulonglong)uVar15;
        }
      }
      if (*(int *)(param_1 + 0x104) == 0) {
        iVar12 = *(int *)(param_1 + 0xd8);
        *(int *)(param_1 + 0xd8) = iVar12 + 1;
        if (*(int *)(param_1 + 0xdc) == iVar12) {
          FUN_1405b363e(plVar2,iVar12);
        }
        lVar22 = (longlong)iVar12;
        iVar23 = FUN_144a54ea4(param_1 + 0xe0,1);
        lVar21 = *(longlong *)(param_1 + 0xf0);
        if (*(longlong *)(param_1 + 0xf0) == 0) {
          lVar21 = param_1 + 0xe0;
        }
        iVar16 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar16 = iVar23;
        }
        bVar6 = (byte)iVar23 & 0x1f;
        puVar3 = (uint *)(lVar21 + (longlong)(iVar16 >> 5) * 4);
        *puVar3 = *puVar3 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x100);
        lVar22 = (longlong)iVar12;
        iVar23 = *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + lVar22 * 0x20);
        *(int *)(param_1 + 0x100) = iVar23;
        iVar16 = *(int *)(param_1 + 0x104) + -1;
        *(int *)(param_1 + 0x104) = iVar16;
        if (iVar16 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar23 * 0x20) = 0xffffffff;
        }
      }
      iVar23 = 1;
      lVar21 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        lVar21 = *(longlong *)(param_1 + 0xf0);
      }
      iVar16 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar16 = iVar12;
      }
      puVar3 = (uint *)(lVar21 + (longlong)(iVar16 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
      lVar21 = *(longlong *)(param_1 + 0xd0);
      lVar22 = lVar22 * 0x20;
      puVar4 = (undefined4 *)(lVar21 + lVar22);
      puVar3 = (uint *)(lVar21 + lVar22);
      *puVar3 = local_b0;
      puVar3[1] = uStack_ac;
      puVar3[2] = uStack_a8;
      puVar3[3] = uStack_a4;
      *(ulonglong *)(lVar21 + 0x10 + lVar22) = (ulonglong)uVar13 | uVar17 << 0x20;
      *(undefined4 *)(lVar21 + 0x18 + lVar22) = 0xffffffff;
      uVar11 = *(uint *)(lVar21 + 4 + lVar22) ^ *(uint *)(lVar21 + lVar22);
      uVar13 = uVar11 >> 0xd ^
               (*(uint *)(lVar21 + 0xc + lVar22) ^ *(uint *)(lVar21 + 8 + lVar22)) - uVar11;
      uVar15 = uVar13 << 8 ^ (-0x61c88647 - uVar11) - uVar13;
      uVar18 = uVar15 >> 0xd ^ (uVar11 - uVar13) - uVar15;
      uVar11 = uVar18 >> 0xc ^ (uVar13 - uVar15) - uVar18;
      uVar13 = uVar11 << 0x10 ^ (uVar15 - uVar18) - uVar11;
      uVar15 = uVar13 >> 5 ^ (uVar18 - uVar11) - uVar13;
      uVar11 = uVar15 >> 3 ^ (uVar11 - uVar13) - uVar15;
      uVar13 = uVar11 << 10 ^ (uVar13 - uVar15) - uVar11;
      uVar13 = uVar13 >> 0xf ^ uVar15 - (uVar11 + uVar13);
      if (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104) == 1) {
        uVar11 = 1;
      }
      else {
        iVar16 = FUN_140a7236e(plVar2,uVar13);
        lVar21 = local_b8;
        if (iVar16 != -1) {
          lVar22 = *plVar2;
          uVar7 = *puVar4;
          uVar8 = puVar4[1];
          uVar9 = puVar4[2];
          uVar10 = puVar4[3];
          *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar16 * 0x20) = *(undefined8 *)(puVar4 + 4);
          puVar4 = (undefined4 *)(lVar22 + (longlong)iVar16 * 0x20);
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          FUN_14389f6c6(plVar2,iVar12);
          goto LAB_140a7203e;
        }
        uVar11 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104);
        if (3 < uVar11) {
          uVar17 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
          lVar21 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar23 = 1 << ((byte)lVar21 & 0x1f);
        }
      }
      lVar21 = local_b8;
      if (((int)uVar11 < 1) || (iVar23 <= *(int *)(param_1 + 0x118))) {
        uVar13 = *(int *)(param_1 + 0x118) - 1U & uVar13;
        puVar4[7] = uVar13;
        lVar22 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar22 = param_1 + 0x108;
        }
        puVar4[6] = *(undefined4 *)
                     (lVar22 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)(int)uVar13) *
                               4);
        lVar22 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar22 = param_1 + 0x108;
        }
        *(int *)(lVar22 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)(int)uVar13) * 4) =
             iVar12;
      }
      else {
        *(int *)(param_1 + 0x118) = iVar23;
        FUN_140a738b4(plVar2);
      }
    }
LAB_140a7203e:
    param_2[1] = 0;
    if (lVar21 != 0) {
      uVar13 = *(uint *)(lVar21 + 0xc);
      goto LAB_140a71d16;
    }
    *param_2 = 0;
    uVar13 = 0;
  }
  else {
    param_2[1] = 0;
    uVar13 = *(uint *)(param_5 + 0xc);
LAB_140a71d16:
    *param_2 = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    uVar13 = *(uint *)(lVar21 + 0x10);
    if (*(uint *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar13 = *(uint *)(lVar21 + 0x10);
      bVar27 = uVar13 == 0;
      if (bVar27) {
        *(uint *)(lVar21 + 0x10) = uVar11;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar27) {
        uVar13 = uVar11;
      }
    }
  }
  param_2[1] = uVar13;
LAB_140a71cbd:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a7236e FUN_140a7236e body=143 status=ok
// SIG undefined FUN_140a7236e(void)

int FUN_140a7236e(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar5 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        cVar1 = FUN_140a723fe(lVar5 + lVar4 + 8,param_3 + 8);
        if ((cVar1 != '\0') && (cVar1 = FUN_14472d054(lVar5 + lVar4,param_3), cVar1 != '\0')) {
          return iVar3;
        }
        lVar5 = *param_1;
        iVar3 = *(int *)(lVar5 + 0x18 + lVar4);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140a723fe FUN_140a723fe body=104 status=ok
// SIG undefined FUN_140a723fe(void)

ulonglong FUN_140a723fe(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140a72466 FUN_140a72466 body=887 status=ok
// SIG undefined FUN_140a72466(void)

void FUN_140a72466(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar5 = *(uint *)(param_1 + 8);
    uVar8 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_140a724e7;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0xc) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar8 = *puVar6;
      goto LAB_140a724e7;
    }
  }
  uVar8 = 0;
LAB_140a724e7:
  if (param_3 == 0) {
    param_2[8] = 0;
    iVar4 = 0;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    param_2[8] = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar4 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar4 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar4 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar4 = iVar10;
      }
    }
  }
  param_2[9] = iVar4;
  *param_2 = 0;
  param_2[2] = 0;
  local_c0[0] = '\0';
  local_98 = 0;
  FUN_1456bb102(local_c0,uVar8);
  puVar9 = &local_90;
  FUN_1447c3578(param_3 + 0x30,puVar9,local_c0);
  if (local_70 == 3) {
    uVar5 = 3;
    uVar16 = local_90;
  }
  else {
    puVar13 = &local_68;
    FUN_1400b56fe(puVar13,&local_90,3);
    uVar16 = 0;
    if (local_48 != 0) {
      uVar16 = local_68;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar13 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(puVar13);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar5 = (uint)local_70;
  }
  param_2[1] = uVar16;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar9 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(puVar9);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  lVar14 = DAT_14c9a3da0;
  if ((longlong)local_98 != 0) {
    lVar11 = (longlong)local_98 + -1;
    lVar12 = lVar11 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar14 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar14 = DAT_14c9a3da0;
    iVar4 = (int)lVar11;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
    }
    *(undefined4 *)(lVar14 + lVar12) = 0xffffffff;
    iVar10 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar10 = DAT_14c9a3dd0;
    }
    *(int *)(lVar14 + 4 + lVar12) = iVar10;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar10 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar10 = iVar4;
    }
    bVar3 = (byte)lVar11 & 0x1f;
    DAT_14c9a3dd0 = iVar4;
    *(uint *)(puVar7 + (longlong)(iVar10 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar10 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_98 = 0;
  }
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a727de FUN_140a727de body=1640 status=ok
// SIG undefined FUN_140a727de(void)

longlong FUN_140a727de(longlong param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar9 = FUN_140a7133a(param_2);
  if ((cVar9 == '\0') || (uVar10 = param_2[6], uVar10 == 0)) {
LAB_140a72d61:
    lVar16 = 0;
    goto LAB_140a729d1;
  }
  uVar14 = param_2[5];
  lVar16 = 0;
  if (((int)uVar14 < 0) || (DAT_14c9647dc <= (int)uVar14)) goto LAB_140a729d1;
  plVar15 = (longlong *)
            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
  if ((((plVar15 == (longlong *)0x0) || (*(uint *)(plVar15 + 2) != uVar10)) ||
      ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (lVar2 = *plVar15, lVar2 == 0))
  goto LAB_140a72d61;
  plVar15 = (longlong *)(param_1 + 0x80);
  uVar10 = uVar10 ^ uVar14;
  uVar17 = param_2[2] ^ param_2[1];
  uVar14 = uVar17 >> 0xd ^ *param_2 - uVar17;
  uVar18 = uVar14 << 8 ^ (-0x61c88647 - uVar17) - uVar14;
  uVar19 = uVar18 >> 0xd ^ (uVar17 - uVar14) - uVar18;
  uVar17 = uVar19 >> 0xc ^ (uVar14 - uVar18) - uVar19;
  uVar14 = uVar17 << 0x10 ^ (uVar18 - uVar19) - uVar17;
  uVar18 = uVar14 >> 5 ^ (uVar19 - uVar17) - uVar14;
  uVar17 = uVar18 >> 3 ^ (uVar17 - uVar14) - uVar18;
  uVar14 = uVar17 << 10 ^ (uVar14 - uVar18) - uVar17;
  uVar17 = uVar10 >> 0xd ^ (uVar14 >> 0xf ^ uVar18 - (uVar17 + uVar14)) - uVar10;
  uVar18 = uVar17 << 8 ^ (-0x61c88647 - uVar10) - uVar17;
  uVar14 = uVar18 >> 0xd ^ (uVar10 - uVar17) - uVar18;
  uVar10 = uVar14 >> 0xc ^ (uVar17 - uVar18) - uVar14;
  uVar18 = uVar10 << 0x10 ^ (uVar18 - uVar14) - uVar10;
  uVar17 = uVar18 >> 5 ^ (uVar14 - uVar10) - uVar18;
  uVar10 = uVar17 >> 3 ^ (uVar10 - uVar18) - uVar17;
  uVar14 = uVar10 << 10 ^ (uVar18 - uVar17) - uVar10;
  iVar11 = FUN_140a72e48(plVar15,uVar14 >> 0xf ^ uVar17 - (uVar10 + uVar14),param_2);
  if (iVar11 != -1) {
    if (*plVar15 + (longlong)iVar11 * 0xa8 != 0) {
      lVar16 = *plVar15 + (longlong)iVar11 * 0xa8 + 0x20;
      goto LAB_140a729d1;
    }
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    iVar11 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar11 + 1;
    if (*(int *)(param_1 + 0x8c) == iVar11) {
      FUN_140727bdc(plVar15,iVar11);
    }
    lVar22 = (longlong)iVar11;
    iVar21 = FUN_144a54ea4(param_1 + 0x90,1);
    lVar16 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar16 = param_1 + 0x90;
    }
    iVar12 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar12 = iVar21;
    }
    bVar3 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)(lVar16 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  else {
    iVar11 = *(int *)(param_1 + 0xb0);
    lVar22 = (longlong)iVar11;
    iVar21 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar22 * 0xa8);
    *(int *)(param_1 + 0xb0) = iVar21;
    iVar12 = *(int *)(param_1 + 0xb4) + -1;
    *(int *)(param_1 + 0xb4) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar21 * 0xa8) = 0xffffffff;
    }
  }
  lVar16 = param_1 + 0x90;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar16 = *(longlong *)(param_1 + 0xa0);
  }
  iVar21 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar21 = iVar11;
  }
  puVar1 = (uint *)(lVar16 + (longlong)(iVar21 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  lVar16 = *(longlong *)(param_1 + 0x80);
  local_78 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  iVar21 = *param_2;
  iVar12 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  iVar6 = param_2[4];
  iVar7 = param_2[5];
  iVar8 = param_2[6];
  piVar20 = (int *)(lVar16 + lVar22 * 0xa8);
  piVar20[3] = param_2[3];
  piVar20[4] = iVar6;
  piVar20[5] = iVar7;
  piVar20[6] = iVar8;
  *piVar20 = iVar21;
  piVar20[1] = iVar12;
  piVar20[2] = iVar4;
  piVar20[3] = iVar5;
  piVar20[10] = 0;
  piVar20[8] = 0;
  piVar20[9] = 0;
  piVar20[0xc] = 0;
  piVar20[0xd] = 0;
  piVar20[0xe] = 0;
  piVar20[0xf] = 0;
  piVar20[0x10] = 0;
  piVar20[0x11] = 0;
  piVar20[0x12] = 0;
  piVar20[0x13] = 0;
  FUN_140a71a2a(piVar20 + 0x14,&local_98);
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  piVar20 = (int *)(lVar16 + lVar22 * 0xa8);
  FUN_140a3dc66(&local_98);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  piVar20[0x28] = -1;
  uVar10 = piVar20[6] ^ piVar20[5];
  uVar17 = piVar20[2] ^ piVar20[1];
  uVar14 = uVar17 >> 0xd ^ *piVar20 - uVar17;
  uVar18 = uVar14 << 8 ^ (-0x61c88647 - uVar17) - uVar14;
  uVar19 = uVar18 >> 0xd ^ (uVar17 - uVar14) - uVar18;
  uVar17 = uVar19 >> 0xc ^ (uVar14 - uVar18) - uVar19;
  uVar14 = uVar17 << 0x10 ^ (uVar18 - uVar19) - uVar17;
  uVar18 = uVar14 >> 5 ^ (uVar19 - uVar17) - uVar14;
  uVar17 = uVar18 >> 3 ^ (uVar17 - uVar14) - uVar18;
  uVar14 = uVar17 << 10 ^ (uVar14 - uVar18) - uVar17;
  uVar17 = uVar10 >> 0xd ^ (uVar14 >> 0xf ^ uVar18 - (uVar17 + uVar14)) - uVar10;
  uVar18 = uVar17 << 8 ^ (-0x61c88647 - uVar10) - uVar17;
  uVar14 = uVar18 >> 0xd ^ (uVar10 - uVar17) - uVar18;
  uVar10 = uVar14 >> 0xc ^ (uVar17 - uVar18) - uVar14;
  uVar17 = uVar10 << 0x10 ^ (uVar18 - uVar14) - uVar10;
  uVar18 = uVar17 >> 5 ^ (uVar14 - uVar10) - uVar17;
  uVar10 = uVar18 >> 3 ^ (uVar10 - uVar17) - uVar18;
  uVar14 = uVar10 << 10 ^ (uVar17 - uVar18) - uVar10;
  uVar10 = uVar14 >> 0xf ^ uVar18 - (uVar10 + uVar14);
  iVar21 = 1;
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4) == 1) {
    uVar14 = 1;
LAB_140a72ca1:
    iVar12 = iVar11;
    if (((int)uVar14 < 1) || (iVar21 <= *(int *)(param_1 + 200))) {
      uVar10 = *(int *)(param_1 + 200) - 1U & uVar10;
      piVar20[0x29] = uVar10;
      lVar16 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar16 = param_1 + 0xb8;
      }
      piVar20[0x28] =
           *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)(int)uVar10) * 4);
      lVar16 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar16 = param_1 + 0xb8;
      }
      *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)(int)uVar10) * 4) =
           iVar11;
    }
    else {
      *(int *)(param_1 + 200) = iVar21;
      FUN_145769152(plVar15);
    }
  }
  else {
    iVar12 = FUN_140a72e48(plVar15,uVar10,piVar20);
    if (iVar12 == -1) {
      uVar14 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4);
      if (3 < uVar14) {
        uVar13 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
        lVar16 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar16 & 0x1f);
      }
      goto LAB_140a72ca1;
    }
    lVar16 = *plVar15;
    FUN_140a3dc1e((longlong)iVar12 * 0xa8 + lVar16 + 0x20);
    memmove((void *)(lVar16 + (longlong)iVar12 * 0xa8),piVar20,0xa0);
    FUN_14389f7b2(plVar15,iVar11);
  }
  lVar16 = *(longlong *)(param_1 + 0x80) + (longlong)iVar12 * 0xa8 + 0x20;
  FUN_140a72466(param_1,lVar16,lVar2);
LAB_140a729d1:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a72e48 FUN_140a72e48 body=192 status=ok
// SIG undefined FUN_140a72e48(void)

int FUN_140a72e48(longlong *param_1,uint param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar5 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0xa8;
        if (*(int *)(lVar5 + lVar4) == *param_3) {
          lVar5 = lVar5 + lVar4;
          cVar1 = FUN_14007c268(lVar5 + 4,param_3 + 1);
          if (((cVar1 != '\0') && (cVar1 = FUN_14007c310(lVar5 + 0xc,param_3 + 3), cVar1 != '\0'))
             && (cVar1 = FUN_140a723fe(lVar5 + 0x14,param_3 + 5), cVar1 != '\0')) {
            return iVar3;
          }
        }
        lVar5 = *param_1;
        iVar3 = *(int *)(lVar5 + 0xa0 + lVar4);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140a72f08 FUN_140a72f08 body=2475 status=ok
// SIG undefined FUN_140a72f08(void)

float FUN_140a72f08(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong *param_5)

{
  ulonglong uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  uint *puVar25;
  float *pfVar26;
  float *pfVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined1 local_3d0;
  uint *local_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined4 local_388 [190];
  undefined8 local_90;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  fVar32 = 0.0;
  local_3b8 = param_4;
  local_3a0 = param_1;
  if ((((((*(int *)(param_2 + 0x24) != 0) && (uVar16 = *(uint *)(param_2 + 0x20), -1 < (int)uVar16))
        && ((int)uVar16 < DAT_14c9647dc)) &&
       ((plVar8 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_2 + 0x24))))) &&
      ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (local_3a8 = *plVar8, local_3a8 != 0)) {
    if (param_3 == 0) {
      fVar30 = -1.0;
    }
    else {
      fVar30 = (float)FUN_14389a378(param_3);
    }
    puVar25 = (uint *)(param_2 + 0x40);
    iVar23 = *(int *)(param_2 + 0x58);
    if (iVar23 == 0) {
      uVar19 = 1;
      uVar28 = 0;
      iVar12 = 0;
      iVar3 = 0;
    }
    else {
      puVar14 = *(uint **)(param_2 + 0x50);
      if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
        puVar14 = puVar25;
      }
      uVar16 = *puVar14;
      if (uVar16 == 0) {
        iVar3 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar3 = iVar23 + -1;
        }
        uVar28 = 0;
        uVar19 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar19 = uVar28;
        }
        iVar12 = 0;
        do {
          if (uVar19 == uVar28) {
            fVar32 = 0.0;
            goto LAB_140a73075;
          }
          iVar12 = iVar12 + 0x20;
          uVar16 = puVar14[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar28 = 0;
        iVar12 = 0;
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar19 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar3 = (iVar12 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar3) {
        iVar3 = iVar23;
      }
    }
    fVar32 = 0.0;
    if (iVar3 != iVar23) {
      uVar16 = 0xffffffff;
      local_3c0 = puVar25;
      do {
        if (*(char *)(*(longlong *)(param_2 + 0x30) + 0x10 + (longlong)iVar3 * 0x1c) == '\x01') {
          puVar14 = (uint *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar3 * 0x1c);
          if ((((puVar14[1] != 0) && (uVar7 = *puVar14, -1 < (int)uVar7)) &&
              (((int)uVar7 < DAT_14c9647dc &&
               (((plVar8 = (longlong *)
                           ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                 plVar8 != (longlong *)0x0 && (*(uint *)(plVar8 + 2) == puVar14[1])) &&
                ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))))) && (lVar20 = *plVar8, lVar20 != 0))
          {
            if ((((*(int *)(param_2 + 0x2c) == 0) ||
                 (uVar7 = *(uint *)(param_2 + 0x28), (int)uVar7 < 0)) ||
                ((DAT_14c9647dc <= (int)uVar7 ||
                 ((plVar8 = (longlong *)
                            ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                  plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_2 + 0x2c))))))) ||
               (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar10 = *plVar8, lVar10 == 0)))) {
              local_3d0 = 0;
              local_3d8 = 0;
              FUN_140a71b12(local_3a0,&local_398,local_3a8,lVar20);
              puVar25 = local_3c0;
              if ((local_398._4_4_ == 0) || ((int)(uint)local_398 < 0)) {
                lVar10 = 0;
              }
              else {
                lVar10 = 0;
                if ((int)(uint)local_398 < DAT_14c9647dc) {
                  plVar8 = (longlong *)
                           ((ulonglong)(((uint)local_398 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_398 >> 0x10) * 8));
                  if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != local_398._4_4_)) ||
                     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar8;
                  }
                }
              }
            }
            if ((lVar10 != 0 && lVar10 == local_3b8) &&
               (fVar31 = (float)FUN_14389a378(lVar20), puVar25 = local_3c0, fVar30 < fVar31)) {
              if (param_5 != (longlong *)0x0) {
                uVar11 = *(undefined8 *)puVar14;
                iVar3 = (int)param_5[1];
                *(uint *)(param_5 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
                  local_3b0 = uVar11;
                  FUN_147f6240a(param_5,iVar3);
                  uVar11 = local_3b0;
                }
                lVar20 = *param_5;
                *(float *)(lVar20 + (longlong)iVar3 * 0xc) = fVar31;
                *(undefined8 *)(lVar20 + 4 + (longlong)iVar3 * 0xc) = uVar11;
              }
              fVar32 = fVar32 + (float)puVar14[2];
              puVar25 = local_3c0;
            }
          }
        }
        uVar16 = uVar16 & ~(uint)uVar19;
        puVar14 = *(uint **)(param_2 + 0x50);
        if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
          puVar14 = puVar25;
        }
        iVar15 = *(int *)(param_2 + 0x58);
        iVar3 = (int)uVar28;
        lVar20 = (longlong)iVar3;
        uVar7 = puVar14[lVar20] & uVar16;
        if (uVar7 == 0) {
          iVar4 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar4 = iVar15 + -1;
          }
          iVar4 = iVar4 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar5 = iVar4;
          if (iVar4 < iVar3) {
            iVar5 = iVar3;
          }
          if (iVar3 < iVar4) {
            lVar10 = 0;
            do {
              uVar7 = puVar14[lVar20 + lVar10 + 1];
              if (uVar7 != 0) {
                uVar28 = (ulonglong)(iVar3 + (int)lVar10 + 1);
                uVar16 = 0xffffffff;
                goto LAB_140a73827;
              }
              iVar12 = iVar12 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar5 - lVar20 != lVar10);
            uVar16 = 0xffffffff;
            iVar3 = iVar5;
          }
          uVar28 = (ulonglong)(iVar3 + 1);
          puVar25 = local_3c0;
          iVar3 = iVar15;
        }
        else {
LAB_140a73827:
          uVar19 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar19 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar3 = (iVar12 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar3) {
            iVar3 = iVar15;
          }
        }
      } while (iVar3 != iVar23);
    }
LAB_140a73075:
    if (param_5 != (longlong *)0x0) {
      iVar23 = (int)param_5[1];
      if (1 < (longlong)iVar23) {
        lVar20 = *param_5;
        memset(local_388,0,0x2f0);
        local_390 = lVar20 + (longlong)iVar23 * 0xc + -0xc;
        local_398 = lVar20;
        fVar30 = logf((float)iVar23);
        local_388[0] = (int)(longlong)(fVar30 + fVar30);
        puVar6 = &local_398;
        do {
          pfVar9 = (float *)*puVar6;
          pfVar17 = (float *)puVar6[1];
          iVar23 = *(int *)(puVar6 + 2);
          iVar3 = (int)((ulonglong)((longlong)pfVar17 - (longlong)pfVar9) >> 2) * -0x55555555;
          uVar16 = iVar3 + 1;
          pfVar18 = pfVar9;
          pfVar13 = pfVar9;
          pfVar21 = pfVar17;
          if (iVar23 != 0) {
LAB_140a7310f:
            if (8 < (int)uVar16) {
              uVar19 = (ulonglong)(uVar16 >> 1);
              fVar30 = pfVar13[uVar19 * 3 + 2];
              uVar11 = *(undefined8 *)(pfVar13 + uVar19 * 3);
              pfVar13[uVar19 * 3 + 2] = pfVar13[2];
              *(undefined8 *)(pfVar13 + uVar19 * 3) = *(undefined8 *)pfVar13;
              pfVar13[2] = fVar30;
              *(undefined8 *)pfVar13 = uVar11;
              pfVar24 = pfVar21 + 3;
              pfVar9 = pfVar13;
              do {
                pfVar2 = pfVar9 + 3;
                pfVar22 = pfVar9 + 3;
                do {
                  pfVar9 = pfVar22;
                  pfVar27 = pfVar2;
                  if (pfVar21 < pfVar9) break;
                  pfVar2 = pfVar27 + 3;
                  pfVar22 = pfVar9 + 3;
                } while (*pfVar13 < *pfVar9 || *pfVar13 == *pfVar9);
                pfVar2 = pfVar24 + -6;
                do {
                  pfVar22 = pfVar24;
                  pfVar26 = pfVar2;
                  pfVar24 = pfVar22 + -3;
                  if (pfVar24 <= pfVar13) break;
                  pfVar2 = pfVar26 + -3;
                } while (*pfVar24 < *pfVar13 || *pfVar24 == *pfVar13);
                if (pfVar24 < pfVar9) goto LAB_140a731f8;
                fVar30 = pfVar9[2];
                uVar11 = *(undefined8 *)pfVar9;
                pfVar9[2] = pfVar22[-1];
                *(undefined8 *)pfVar9 = *(undefined8 *)pfVar24;
                pfVar22[-1] = fVar30;
                *(undefined8 *)pfVar24 = uVar11;
              } while( true );
            }
            if (pfVar13 < pfVar21) {
              do {
                pfVar9 = pfVar13;
                if (pfVar13 + 3 <= pfVar21) {
                  fVar30 = *pfVar13;
                  pfVar17 = pfVar13 + 3;
                  do {
                    fVar31 = *pfVar17;
                    pfVar18 = pfVar17;
                    if (fVar30 <= *pfVar17) {
                      fVar31 = fVar30;
                      pfVar18 = pfVar9;
                    }
                    pfVar9 = pfVar18;
                    fVar30 = fVar31;
                    pfVar17 = pfVar17 + 3;
                  } while (pfVar17 <= pfVar21);
                }
                local_88 = pfVar9[2];
                local_90 = *(undefined8 *)pfVar9;
                pfVar9[2] = pfVar21[2];
                *(undefined8 *)pfVar9 = *(undefined8 *)pfVar21;
                pfVar21[2] = local_88;
                *(undefined8 *)pfVar21 = local_90;
                pfVar21 = pfVar21 + -3;
              } while (pfVar13 < pfVar21);
            }
            goto LAB_140a73582;
          }
LAB_140a732c3:
          if (uVar16 != 0) {
            iVar23 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
            iVar3 = iVar23;
joined_r0x000140a732ea:
            do {
              iVar12 = iVar23 * 2 + 1;
              if (iVar12 < (int)uVar16) {
                iVar15 = iVar23 * 2 + 2;
                if ((iVar15 < (int)uVar16) &&
                   (pfVar9[(longlong)iVar15 * 3] < pfVar9[(longlong)iVar12 * 3] ||
                    pfVar9[(longlong)iVar15 * 3] == pfVar9[(longlong)iVar12 * 3])) {
                  iVar12 = iVar15;
                }
                if (pfVar9[(longlong)iVar12 * 3] <= pfVar9[(longlong)iVar23 * 3] &&
                    pfVar9[(longlong)iVar23 * 3] != pfVar9[(longlong)iVar12 * 3]) {
                  pfVar21 = pfVar9 + (longlong)iVar23 * 3;
                  pfVar17 = pfVar9 + (longlong)iVar12 * 3;
                  local_88 = pfVar21[2];
                  local_90 = *(undefined8 *)pfVar21;
                  pfVar21[2] = pfVar17[2];
                  *(undefined8 *)pfVar21 = *(undefined8 *)pfVar17;
                  pfVar17[2] = local_88;
                  *(undefined8 *)pfVar17 = local_90;
                  iVar23 = iVar12;
                  goto joined_r0x000140a732ea;
                }
              }
              bVar29 = iVar3 != 0;
              iVar23 = iVar3 + -1;
              iVar3 = iVar23;
            } while (bVar29);
            if (1 < (int)uVar16) {
              uVar19 = (ulonglong)uVar16 - 1;
              local_88 = pfVar9[2];
              local_90 = *(undefined8 *)pfVar9;
              pfVar9[2] = pfVar9[uVar19 * 3 + 2];
              *(undefined8 *)pfVar9 = *(undefined8 *)(pfVar9 + uVar19 * 3);
              pfVar9[uVar19 * 3 + 2] = local_88;
              *(undefined8 *)(pfVar9 + uVar19 * 3) = local_90;
              if (uVar16 != 2) {
                do {
                  iVar23 = 0;
                  iVar12 = 1;
                  iVar3 = 0;
                  do {
                    iVar23 = iVar23 + 2;
                    iVar15 = iVar12;
                    if (((longlong)iVar23 < (longlong)uVar19) &&
                       (pfVar9[(longlong)iVar23 * 3] < pfVar9[(longlong)iVar12 * 3] ||
                        pfVar9[(longlong)iVar23 * 3] == pfVar9[(longlong)iVar12 * 3])) {
                      iVar15 = iVar23;
                    }
                    if (pfVar9[(longlong)iVar3 * 3] < pfVar9[(longlong)iVar15 * 3] ||
                        pfVar9[(longlong)iVar3 * 3] == pfVar9[(longlong)iVar15 * 3]) break;
                    pfVar21 = pfVar9 + (longlong)iVar3 * 3;
                    pfVar17 = pfVar9 + (longlong)iVar15 * 3;
                    fVar30 = pfVar21[2];
                    uVar11 = *(undefined8 *)pfVar21;
                    pfVar21[2] = pfVar17[2];
                    *(undefined8 *)pfVar21 = *(undefined8 *)pfVar17;
                    pfVar17[2] = fVar30;
                    *(undefined8 *)pfVar17 = uVar11;
                    iVar23 = iVar15 * 2;
                    iVar12 = iVar15 * 2 + 1;
                    iVar3 = iVar15;
                  } while ((longlong)iVar12 < (longlong)uVar19);
                  uVar28 = uVar19 - 1;
                  local_88 = pfVar9[2];
                  local_90 = *(undefined8 *)pfVar9;
                  pfVar9[2] = pfVar9[uVar28 * 3 + 2];
                  *(undefined8 *)pfVar9 = *(undefined8 *)(pfVar9 + uVar28 * 3);
                  pfVar9[uVar28 * 3 + 2] = local_88;
                  *(undefined8 *)(pfVar9 + uVar28 * 3) = local_90;
                  bVar29 = 2 < uVar19;
                  uVar19 = uVar28;
                } while (bVar29);
              }
            }
          }
LAB_140a73582:
          puVar6 = puVar6 + -3;
        } while (&local_398 <= puVar6);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return fVar32;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140a731f8:
  local_88 = pfVar13[2];
  local_90 = *(undefined8 *)pfVar13;
  pfVar13[2] = pfVar22[-1];
  *(undefined8 *)pfVar13 = *(undefined8 *)pfVar24;
  pfVar22[-1] = local_88;
  *(undefined8 *)pfVar24 = local_90;
  iVar23 = iVar23 + -1;
  pfVar22 = pfVar22 + -6;
  if ((longlong)pfVar26 - (longlong)pfVar18 < (longlong)pfVar17 - (longlong)pfVar27) {
    if (pfVar9 < pfVar21) {
      *puVar6 = pfVar9;
      puVar6[1] = pfVar21;
      *(int *)(puVar6 + 2) = iVar23;
      puVar6 = puVar6 + 3;
    }
    pfVar9 = pfVar13;
    pfVar17 = pfVar26;
    if (pfVar24 <= pfVar13 + 3) goto LAB_140a73582;
  }
  else {
    if (pfVar13 + 3 < pfVar24) {
      *puVar6 = pfVar13;
      puVar6[1] = pfVar22;
      *(int *)(puVar6 + 2) = iVar23;
      puVar6 = puVar6 + 3;
    }
    pfVar13 = pfVar27;
    pfVar22 = pfVar21;
    pfVar17 = pfVar21;
    if (pfVar21 <= pfVar9) goto LAB_140a73582;
  }
  iVar3 = (int)((ulonglong)((longlong)pfVar17 - (longlong)pfVar13) >> 2) * -0x55555555;
  uVar16 = iVar3 + 1;
  pfVar18 = pfVar13;
  pfVar13 = pfVar9;
  pfVar21 = pfVar22;
  if (iVar23 == 0) goto LAB_140a732c3;
  goto LAB_140a7310f;
}



// FUNCTION 140a738b4 FUN_140a738b4 body=468 status=ok
// SIG undefined FUN_140a738b4(void)

void FUN_140a738b4(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a78877(*(uint *)(lVar3 + 0xc + lVar10) ^ *(uint *)(lVar3 + 8 + lVar10),
                              *(uint *)(lVar3 + 4 + lVar10) ^ *(uint *)(lVar3 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
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



// FUNCTION 140a73a8a FUN_140a73a8a body=154 status=ok
// SIG undefined FUN_140a73a8a(void)

void FUN_140a73a8a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined1 local_68;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_78[0] = param_3;
  FUN_140a73b26(param_1,param_2,local_78);
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar2 = local_38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_70 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_70 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a73b26 FUN_140a73b26 body=59060 status=FAIL
// SIG undefined FUN_140a73b26(void)
/* DECOMPILE FAILED */

// FUNCTION 140a821dc FUN_140a821dc body=364 status=ok
// SIG undefined FUN_140a821dc(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140a821dc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  ulonglong local_70 [3];
  undefined4 local_58;
  undefined8 local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_58 = 0;
  local_48 = 0x10;
  if (param_3 == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_3 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  local_70[0] = (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_140574f3e(param_1,local_70 + 1,*(undefined8 *)(param_3 + 0x20),0);
  local_70[2] = *(undefined8 *)(param_3 + 0x18);
  local_58 = FUN_140574c42(param_1,param_3);
  bVar2 = FUN_140574932(param_1,param_3,param_2);
  local_48 = (bVar2 ^ 1) * '\x02' | bVar2 ^ 1 | 0x10;
  FUN_140a8234a(param_1,param_2,local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8234a FUN_140a8234a body=132 status=ok
// SIG undefined FUN_140a8234a(void)

void FUN_140a8234a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30 = param_3;
  FUN_1409190e0(param_1,local_24,&local_38,0);
  cVar1 = FUN_14493c216(param_3,0);
  if (cVar1 == '\0') {
    local_38 = param_3;
    local_30 = param_2;
    FUN_140926be8(param_1 + 0x50,local_24,&local_38,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a823d0 FUN_140a823d0 body=38 status=ok
// SIG undefined FUN_140a823d0(void)

undefined8 * FUN_140a823d0(undefined8 *param_1)

{
  FUN_140a823f6();
  *param_1 = &PTR_FUN_14a464b00;
  *(undefined2 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 140a823f6 FUN_140a823f6 body=94 status=ok
// SIG undefined FUN_140a823f6(void)

undefined8 * FUN_140a823f6(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a45caf0;
  return param_1;
}



// FUNCTION 140a82454 FUN_140a82454 body=300 status=ok
// SIG undefined FUN_140a82454(void)

undefined8 FUN_140a82454(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140a82579;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140a82579;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140a82579:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140a82522;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140a82522;
    }
  }
  uVar6 = 0;
LAB_140a82522:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a82582 FUN_140a82582 body=873 status=ok
// SIG undefined FUN_140a82582(void)

void FUN_140a82582(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LARGE_INTEGER *pLVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  LARGE_INTEGER *local_60;
  code *local_58;
  code *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_1[10] != '\x01') goto LAB_140a825f9;
  lVar10 = param_1[4];
  if (lVar10 == 0) {
LAB_140a828bc:
    lVar10 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_60 = &local_48;
      local_48.QuadPart = (LONGLONG)FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = CONCAT44(local_98._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_140a828bc;
  }
  if (lVar10 == param_2) {
    local_48.QuadPart = 0;
    uVar6 = 0;
    uVar4 = 0;
    if (param_3 != 0) {
      uVar6 = *(uint *)(param_3 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar4 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar10 + 0x10);
        bVar11 = uVar4 == 0;
        if (bVar11) {
          *(uint *)(lVar10 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar4 = uVar7;
        }
      }
      local_48.s.HighPart = uVar4;
      local_48.s.LowPart = uVar6;
    }
    uVar6 = uVar4 >> 0xd ^ uVar6 - uVar4;
    uVar7 = uVar6 << 8 ^ (-0x61c88647 - uVar4) - uVar6;
    uVar8 = uVar7 >> 0xd ^ (uVar4 - uVar6) - uVar7;
    uVar4 = uVar8 >> 0xc ^ (uVar6 - uVar7) - uVar8;
    uVar6 = uVar4 << 0x10 ^ (uVar7 - uVar8) - uVar4;
    uVar8 = uVar6 >> 5 ^ (uVar8 - uVar4) - uVar6;
    uVar7 = uVar8 >> 3 ^ (uVar4 - uVar6) - uVar8;
    uVar4 = uVar7 << 10 ^ (uVar6 - uVar8) - uVar7;
    pLVar5 = (LARGE_INTEGER *)
             FUN_147cc659e(param_1 + 0xb,uVar4 >> 0xf ^ uVar8 - (uVar7 + uVar4),&local_48);
    if (pLVar5->QuadPart == 0) {
      local_98 = param_4;
      FUN_14365b648(param_1,&local_48,param_3,4);
      lVar10 = pLVar5->QuadPart;
      pLVar5->QuadPart = (LONGLONG)local_48;
      if (lVar10 != 0) {
        FUN_1400020a8();
      }
    }
    QueryPerformanceCounter(&local_48);
    dVar12 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(pLVar5->QuadPart + 0x20) * 0x138) = 1
    ;
    lVar10 = param_1[0x15];
    lVar9 = (longlong)*(int *)(pLVar5->QuadPart + 0x20) * 0x138;
    *(double *)(lVar10 + 0xa0 + lVar9) = dVar12 - *(double *)(pLVar5->QuadPart + 8);
    *(undefined1 *)(lVar10 + 0xa8 + lVar9) = 1;
    puVar2 = (undefined4 *)pLVar5->QuadPart;
    uVar1 = *puVar2;
    *puVar2 = 5;
    *(double *)(puVar2 + 2) = dVar12;
    local_90 = 5;
    local_98 = CONCAT44(local_98._4_4_,uVar1);
    (**(code **)(*param_1 + 0x2e8))
              (param_1,(longlong)(int)puVar2[8],(longlong)(int)puVar2[8] * 0x138 + param_1[0x15],
               param_3);
  }
LAB_140a825f9:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a828ec FUN_140a828ec body=877 status=ok
// SIG undefined FUN_140a828ec(void)

void FUN_140a828ec(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  LARGE_INTEGER *local_60;
  code *local_58;
  code *local_50;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_1[10] != '\x01') goto LAB_140a82961;
  lVar9 = param_1[4];
  if (lVar9 == 0) {
LAB_140a82c2a:
    lVar9 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_60 = &local_40;
      local_40.QuadPart = (LONGLONG)FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_140a82c2a;
  }
  if (lVar9 == param_2) {
    local_40.QuadPart = 0;
    uVar5 = 0;
    uVar2 = 0;
    if (param_3 != 0) {
      uVar5 = *(uint *)(param_3 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar2 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar2 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar2 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar6;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar2 = uVar6;
        }
      }
      local_40.s.HighPart = uVar2;
      local_40.s.LowPart = uVar5;
    }
    uVar5 = uVar2 >> 0xd ^ uVar5 - uVar2;
    uVar6 = uVar5 << 8 ^ (-0x61c88647 - uVar2) - uVar5;
    uVar7 = uVar6 >> 0xd ^ (uVar2 - uVar5) - uVar6;
    uVar2 = uVar7 >> 0xc ^ (uVar5 - uVar6) - uVar7;
    uVar5 = uVar2 << 0x10 ^ (uVar6 - uVar7) - uVar2;
    uVar7 = uVar5 >> 5 ^ (uVar7 - uVar2) - uVar5;
    uVar6 = uVar7 >> 3 ^ (uVar2 - uVar5) - uVar7;
    uVar2 = uVar6 << 10 ^ (uVar5 - uVar7) - uVar6;
    plVar3 = (longlong *)
             FUN_147cc659e(param_1 + 0xb,uVar2 >> 0xf ^ uVar7 - (uVar6 + uVar2),&local_40);
    if (*plVar3 != 0) {
      QueryPerformanceCounter(&local_40);
      dVar11 = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
      *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(*plVar3 + 0x20) * 0x138) = 1;
      lVar9 = param_1[0x15];
      lVar8 = (longlong)*(int *)(*plVar3 + 0x20) * 0x138;
      *(double *)(lVar9 + 0xd0 + lVar8) = dVar11 - *(double *)(*plVar3 + 8);
      *(undefined1 *)(lVar9 + 0xd8 + lVar8) = 1;
      puVar4 = (undefined4 *)*plVar3;
      if (*(char *)(puVar4 + 6) == '\x01') {
        lVar9 = param_1[0x15];
        iVar1 = puVar4[8];
        *(double *)(lVar9 + 0xc0 + (longlong)iVar1 * 0x138) = dVar11 - *(double *)(puVar4 + 4);
        *(undefined1 *)(lVar9 + 200 + (longlong)iVar1 * 0x138) = 1;
        puVar4 = (undefined4 *)*plVar3;
      }
      local_98 = *puVar4;
      *puVar4 = 8;
      *(double *)(puVar4 + 2) = dVar11;
      local_90 = 8;
      (**(code **)(*param_1 + 0x2e8))
                (param_1,(longlong)(int)puVar4[8],(longlong)(int)puVar4[8] * 0x138 + param_1[0x15],
                 param_3);
    }
  }
LAB_140a82961:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a82c5a FUN_140a82c5a body=18 status=ok
// SIG undefined FUN_140a82c5a(void)

void FUN_140a82c5a(undefined8 param_1,uint param_2,undefined8 param_3)

{
  FUN_140a82c6c(param_1,param_3,param_2 ^ 1,1);
  return;
}



// FUNCTION 140a82c6c FUN_140a82c6c body=60 status=ok
// SIG undefined FUN_140a82c6c(void)

void FUN_140a82c6c(longlong param_1,undefined8 param_2,char param_3)

{
  FUN_140a82ca8();
  if (param_3 == '\0') {
    FUN_1400bc8c2();
    return;
  }
  FUN_1400bc96c(param_1 + 0x40,param_2);
  return;
}



// FUNCTION 140a82ca8 FUN_140a82ca8 body=80 status=ok
// SIG undefined FUN_140a82ca8(void)

void FUN_140a82ca8(longlong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  if (((param_4 & param_3) == 1) && (*(char *)(param_1 + 0x18) == '\0')) {
    FUN_1403663e2(param_1);
  }
  if (param_3 == 0) {
    FUN_1400bc8c2();
    return;
  }
  FUN_1400bc96c(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 140a82cf8 FUN_140a82cf8 body=295 status=ok
// SIG undefined FUN_140a82cf8(void)

undefined8 FUN_140a82cf8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140a82e19;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140a82e19;
    }
    FUN_140192332(param_1 + 0x40,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_140a82e19:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140a82dc7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x44) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_28 = *plVar5;
      FUN_140a82e20(param_1 + 8,param_1 + 0x48);
      uVar6 = 1;
      goto LAB_140a82dc7;
    }
  }
  uVar6 = 0;
LAB_140a82dc7:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a82e20 FUN_140a82e20 body=145 status=ok
// SIG undefined FUN_140a82e20(void)

void FUN_140a82e20(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = (code *)*param_2;
  uVar2 = *param_3;
  local_30 = 0;
  local_28 = 0;
  FUN_14009d848(&local_30,param_1 + 8);
  local_40 = *(undefined8 *)(param_1 + 4);
  local_38 = *(longlong *)(param_1 + 6);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  (*pcVar1)(uVar2,&local_58,&local_40,&local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a82ec0 FUN_140a82ec0 body=415 status=ok
// SIG undefined FUN_140a82ec0(void)

void FUN_140a82ec0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar8 = FUN_14088624c(param_1,param_2,1);
  if ((lVar8 != 0) && (lVar4 = *(longlong *)(lVar8 + 0x68), lVar4 == *param_3)) {
    lVar5 = *(longlong *)(lVar8 + 0x70);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(lVar8 + 0x50);
    *(longlong *)(lVar8 + 0x48) = lVar4;
    *(longlong *)(lVar8 + 0x50) = lVar5;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    iVar3 = *(int *)(lVar8 + 0x80);
    _Src = *(void **)(lVar8 + 0x78);
    *(int *)(lVar8 + 0x60) = iVar3;
    if (iVar3 == 0 && *(int *)(lVar8 + 100) == 0) {
      *(undefined4 *)(lVar8 + 100) = 0;
    }
    else {
      FUN_1401b309e((undefined8 *)(lVar8 + 0x58),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(lVar8 + 0x58),_Src,(longlong)iVar3 << 3);
      }
    }
    if ((((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(*(longlong *)*param_4 + 0x30))(), cVar7 != '\0')) {
      if ((int)param_4[1] == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*param_4;
      }
      (**(code **)(*plVar9 + 0x58))();
      lVar8 = FUN_14088624c(param_1,param_2,1);
      if (lVar8 == 0) goto LAB_140a82fdc;
    }
    FUN_1408861c0(lVar8 + 0x68,0);
  }
LAB_140a82fdc:
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((int)param_4[1] != 0) {
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a83060 FUN_140a83060 body=1525 status=ok
// SIG undefined FUN_140a83060(void)

void FUN_140a83060(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_78 = (undefined8 *)CONCAT44(local_78._4_4_,param_2);
    uVar6 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_78);
    if ((DAT_14c761388 != 0) &&
       ((lVar8 = param_1[0x16], lVar8 != 0 || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)))) {
      uVar6 = FUN_14119d0a4(lVar8);
      FUN_140e65914(uVar6,param_1,*(undefined4 *)(lVar8 + 0x6f4));
    }
  }
  FUN_140a83748(param_1,0);
  if (param_1[0x2a] != 0) {
    cVar3 = FUN_140a8394a(param_1);
    while( true ) {
      plVar1 = (longlong *)param_1[0x2a];
      lVar8 = *(longlong *)plVar1[0x13];
      if (lVar8 != 0) {
        plVar1[0x14] = *(longlong *)(lVar8 + 8);
        lVar11 = plVar1[0x13];
        plVar1[0x13] = lVar8;
        *(undefined8 *)(lVar8 + 8) = 0;
        if (lVar11 != 0) {
          FUN_1400020a8();
        }
      }
      lVar8 = plVar1[0x14];
      plVar1[0x14] = 0;
      if (lVar8 == 0) break;
      if (((*(char *)((longlong)param_1 + 0x1a2) == '\x01') &&
          (*(longlong **)(lVar8 + 8) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar8 + 8) + 0xf0))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x78))
                          (*(longlong **)(lVar8 + 8),param_1[0x26],1,
                           *(char *)((longlong)param_1 + 0x1a3) == '\0');
        if (cVar4 != '\0') {
          if (cVar3 == '\0') {
            if (((char)param_1[0x34] != '\0') ||
               ((plVar7 = (longlong *)(**(code **)(*param_1 + 0x4a0))(param_1),
                plVar7 != (longlong *)0x0 &&
                (cVar4 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar4 != '\0')))) {
              local_78 = (undefined8 *)0x0;
              uStack_70 = 0;
              FUN_140a2b238(&local_78,param_1 + 0x26);
              uVar6 = FUN_14477b072(param_1,DAT_14caf7610);
              (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_78);
              if (local_78 != (undefined8 *)0x0) {
                (**(code **)*local_78)(local_78,1);
              }
            }
          }
          else {
            uVar2 = param_1[7];
            if (uVar2 < 0xffffffff00000000) {
              plVar7 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar7 = (longlong *)0x0;
              }
              (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar2,2);
            }
            else {
              uVar12 = (uint)uVar2;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c998088)) {
                puVar9 = &DAT_14c998070;
                if (DAT_14c998080 != (undefined *)0x0) {
                  puVar9 = DAT_14c998080;
                }
                if ((*(uint *)(puVar9 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar12 & 0x1f) & 1) !=
                    0) {
                  lVar11 = DAT_14c998060 + (ulonglong)(uVar12 & 0x7fffffff) * 0x68;
                  puVar10 = *(uint **)(lVar11 + 0x18);
                  if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
                    puVar10 = (uint *)(lVar11 + 8);
                  }
                  *puVar10 = *puVar10 | 4;
                  *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
                }
              }
            }
          }
        }
      }
      if ((*(char *)((longlong)param_1 + 0x1a3) == '\x01') &&
         (local_88 = (longlong)*(int *)(lVar8 + 0x20), local_88 != 0)) {
        local_90 = *(longlong *)(lVar8 + 0x18);
        local_98 = param_1 + 0x22;
        local_88 = local_88 << 3;
        lVar11 = 0;
        do {
          if ((*(longlong **)(local_90 + lVar11) != (longlong *)0x0) &&
             (cVar4 = (**(code **)(**(longlong **)(local_90 + lVar11) + 0xf0))(), cVar4 != '\0')) {
            local_80 = (longlong *)*local_98;
            uVar5 = (**(code **)(**(longlong **)(local_90 + lVar11) + 0xe8))();
            (**(code **)(*local_80 + 0xf8))(local_80,uVar5,1);
            cVar4 = (**(code **)(**(longlong **)(local_90 + lVar11) + 0x78))
                              (*(longlong **)(local_90 + lVar11),*local_98,0,1);
            if (cVar4 != '\0') {
              if (cVar3 == '\0') {
                if (((char)param_1[0x34] != '\0') ||
                   ((plVar7 = (longlong *)(**(code **)(*param_1 + 0x4a0))(param_1),
                    plVar7 != (longlong *)0x0 &&
                    (cVar4 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar4 != '\0')))) {
                  FUN_147c6e1bc(param_1,local_98);
                }
              }
              else {
                FUN_147c6df54(param_1,local_98);
              }
            }
          }
          lVar11 = lVar11 + 8;
        } while (local_88 != lVar11);
      }
      if (cVar3 != '\0') {
        if (((*(char *)((longlong)param_1 + 0x1a2) == '\x01') &&
            (*(longlong **)(lVar8 + 0x10) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0xf0))(), cVar4 != '\0')) {
          cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x78))
                            (*(longlong **)(lVar8 + 0x10),param_1[0x28],1,
                             *(char *)((longlong)param_1 + 0x1a3) == '\0');
          if (cVar4 != '\0') {
            uVar2 = param_1[7];
            if (uVar2 < 0xffffffff00000000) {
              plVar7 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar7 = (longlong *)0x0;
              }
              (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar2,3);
            }
            else {
              uVar12 = (uint)uVar2;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c998088)) {
                puVar9 = &DAT_14c998070;
                if (DAT_14c998080 != (undefined *)0x0) {
                  puVar9 = DAT_14c998080;
                }
                if ((*(uint *)(puVar9 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar12 & 0x1f) & 1) !=
                    0) {
                  lVar11 = DAT_14c998060 + (ulonglong)(uVar12 & 0x7fffffff) * 0x68;
                  puVar10 = *(uint **)(lVar11 + 0x18);
                  if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
                    puVar10 = (uint *)(lVar11 + 8);
                  }
                  *puVar10 = *puVar10 | 8;
                  *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
                }
              }
            }
          }
        }
        if ((*(char *)((longlong)param_1 + 0x1a3) == '\x01') &&
           (local_88 = (longlong)*(int *)(lVar8 + 0x30), local_88 != 0)) {
          local_90 = *(longlong *)(lVar8 + 0x28);
          local_98 = param_1 + 0x24;
          local_88 = local_88 << 3;
          lVar11 = 0;
          do {
            if ((*(longlong **)(local_90 + lVar11) != (longlong *)0x0) &&
               (cVar4 = (**(code **)(**(longlong **)(local_90 + lVar11) + 0xf0))(), cVar4 != '\0'))
            {
              local_80 = (longlong *)*local_98;
              uVar5 = (**(code **)(**(longlong **)(local_90 + lVar11) + 0xe8))();
              (**(code **)(*local_80 + 0xf8))(local_80,uVar5,1);
              cVar4 = (**(code **)(**(longlong **)(local_90 + lVar11) + 0x78))
                                (*(longlong **)(local_90 + lVar11),*local_98,0,1);
              if (cVar4 != '\0') {
                FUN_147c6e088(param_1,local_98);
              }
            }
            lVar11 = lVar11 + 8;
          } while (local_88 != lVar11);
        }
      }
      if (*(char *)((longlong)param_1 + 0x1a1) == '\x01') {
        *(undefined2 *)(param_1 + 0x34) = 0;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a83656 FUN_140a83656 body=188 status=ok
// SIG undefined FUN_140a83656(void)

void FUN_140a83656(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 8) + 0x100))();
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x100))();
  }
  iVar1 = *(int *)(param_2 + 0x24);
  FUN_140a83712(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  *(undefined4 *)(param_2 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_2 + 0x24) != 0)) {
    FUN_147c86c8e(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  FUN_140a83712(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30));
  *(undefined4 *)(param_2 + 0x30) = 0;
  if ((iVar1 < 0) && (*(int *)(param_2 + 0x34) != 0)) {
    FUN_147c86c8e(param_2 + 0x28);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  puVar3[1] = param_2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *puVar2 = puVar3;
  }
  return;
}



// FUNCTION 140a83712 FUN_140a83712 body=54 status=ok
// SIG undefined FUN_140a83712(void)

void FUN_140a83712(longlong param_1,int param_2)

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



// FUNCTION 140a83748 FUN_140a83748 body=512 status=ok
// SIG undefined FUN_140a83748(void)

void FUN_140a83748(longlong *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x2a] != 0) && (lVar5 = FUN_14496b220(), lVar5 != 0)) {
    cVar1 = FUN_140a8394a(param_1);
    if ((cVar1 == '\0') &&
       (((lVar6 = param_1[0x16], lVar6 != 0 || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) &&
        (lVar6 = FUN_140636ec6(lVar6), lVar6 != 0)))) {
      *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar6 + 0x930);
      *(undefined1 *)(lVar5 + 0x28) = 1;
    }
    if ((char)param_1[0x34] == '\0') {
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x4a0))(param_1);
      bVar2 = 0;
      if (plVar7 != (longlong *)0x0) {
        bVar2 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
      }
      bVar2 = plVar7 != (longlong *)0x0 & bVar2;
    }
    else {
      bVar2 = 1;
    }
    *(byte *)(lVar5 + 0x10) = bVar2;
    *(undefined1 *)(lVar5 + 0x11) = 1;
    if (param_2 != '\0') {
      lVar6 = param_1[0x16];
      if ((lVar6 != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) {
        uVar4 = FUN_14490d72a(lVar6);
        *(undefined4 *)(lVar5 + 0x14) = uVar4;
        *(undefined1 *)(lVar5 + 0x18) = 1;
      }
      lVar6 = param_1[0x15];
      if (lVar6 != 0) {
        *(uint *)(lVar5 + 0x1c) = (uint)*(byte *)(lVar6 + 0x178);
        *(undefined1 *)(lVar5 + 0x20) = 1;
        uVar3 = FUN_140a83cb0(lVar6);
        *(undefined1 *)(lVar5 + 0x2c) = uVar3;
        *(undefined1 *)(lVar5 + 0x2d) = 1;
        local_38 = *(undefined8 *)(lVar6 + 0x18);
        FUN_1400021e4(&local_38,&local_48);
        if (&local_48 == (longlong *)(lVar5 + 0x40)) {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar5 + 0x40) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar5 + 0x40) = local_48;
          local_48 = 0;
          *(undefined4 *)(lVar5 + 0x48) = local_40;
          *(undefined4 *)(lVar5 + 0x4c) = local_3c;
        }
      }
      if ((param_1[0x32] != 0) && (param_1 + 0x32 != (longlong *)(lVar5 + 0x30))) {
        *(longlong *)(lVar5 + 0x30) = param_1[0x32];
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        *(undefined1 *)(lVar5 + 0x38) = 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8394a FUN_140a8394a body=70 status=ok
// SIG undefined FUN_140a8394a(void)

bool FUN_140a8394a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    FUN_1448abda6(param_1);
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
  }
  iVar1 = FUN_14490d72a(lVar2);
  return iVar1 == 2;
}



// FUNCTION 140a83990 FUN_140a83990 body=798 status=ok
// SIG undefined FUN_140a83990(void)

longlong FUN_140a83990(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = (code *)&LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = &DAT_149e063b2;
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) goto LAB_140a83a5b;
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      if (DAT_14caf64b8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
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
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
        lVar2 = *(longlong *)(lVar1 + 0x3c0);
        if (lVar2 != 0) {
          if (DAT_14caf9cd0 == 0) {
            local_40 = &local_20;
            local_20 = FUN_141030f22;
            local_30 = FUN_14081d0ea;
            local_38 = (code *)&LAB_1463c0cc2;
            local_48 = &LAB_147c9db5b;
            local_50 = &LAB_1463f9c44;
            local_58 = &DAT_149e063b2;
            local_60 = 0x2000000000;
            local_68 = 0x10000004;
            local_70 = 8;
            local_78 = 0x958;
            FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
          }
          if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30))
          goto LAB_140a83a5b;
        }
        lVar2 = *(longlong *)(lVar1 + 0x168);
        if (lVar2 != 0) {
          lVar1 = FUN_144a75eb4();
          if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) goto LAB_140a83a5b;
        }
      }
    }
  }
  lVar2 = 0;
LAB_140a83a5b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140a83cb0 FUN_140a83cb0 body=7 status=ok
// SIG undefined FUN_140a83cb0(void)

undefined1 FUN_140a83cb0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1a4);
}



// FUNCTION 140a83cb8 FUN_140a83cb8 body=48 status=ok
// SIG undefined FUN_140a83cb8(void)

bool FUN_140a83cb8(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140a83ce8();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x1fb) == '\x02')) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(param_1 + 0xa8) != 0;
  }
  return bVar2;
}



// FUNCTION 140a83ce8 FUN_140a83ce8 body=552 status=ok
// SIG undefined FUN_140a83ce8(void)

undefined8 FUN_140a83ce8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_28;
      local_28 = (code *)&LAB_14355090c;
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
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1449e2820;
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
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (lVar5 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar5 = 0;
        }
      } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      if ((lVar5 != 0) &&
         ((*(longlong *)(lVar5 + 0xc0) != 0 && (*(longlong *)(param_1 + 0xa8) != 0)))) {
        lVar3 = FUN_14066ef58();
        if (lVar3 != 0) {
          local_38 = *(undefined4 *)(param_1 + 0x2b8);
          uStack_34 = *(undefined4 *)(param_1 + 700);
          uStack_30 = *(undefined4 *)(param_1 + 0x2c0);
          uStack_2c = *(undefined4 *)(param_1 + 0x2c4);
          uVar4 = FUN_147ba5f0a(lVar3);
          goto LAB_140a83d97;
        }
      }
    }
  }
  uVar4 = 0;
LAB_140a83d97:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a83f12 FUN_140a83f12 body=85 status=ok
// SIG undefined FUN_140a83f12(void)

void FUN_140a83f12(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x48);
  *param_1 = *(undefined8 *)(param_3 + 0x40);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 < 1) {
    return;
  }
  FUN_140a83f68(param_1);
  FUN_140a841e6(param_1,param_2);
  FUN_140a84010(param_1,param_2);
  return;
}



// FUNCTION 140a83f68 FUN_140a83f68 body=166 status=ok
// SIG undefined FUN_140a83f68(void)

void FUN_140a83f68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 in_RDX;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  undefined8 *local_40;
  code *local_38;
  undefined1 **local_30;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_2;
  cVar1 = FUN_140a857c0(param_1,in_RDX,param_4);
  if (cVar1 != '\0') {
    local_21 = DAT_14c75efac == 1;
    FUN_140a85304(param_1);
    FUN_140a840c2(param_1);
    FUN_140a84e16(param_1);
    local_30 = &local_50;
    local_40 = &local_20;
    local_38 = FUN_142989bc4;
    local_50 = &local_21;
    local_48 = param_1;
    FUN_1400bd65e(*(undefined4 *)(param_1 + 0xa0),&local_38,0);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a84010 FUN_140a84010 body=178 status=ok
// SIG undefined FUN_140a84010(void)

void FUN_140a84010(longlong param_1,double param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar5 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar12 = 0;
    do {
      plVar7 = *(longlong **)(lVar6 + lVar12);
      lVar8 = *plVar7;
      lVar13 = (longlong)(int)plVar7[1];
      lVar9 = *(longlong *)(lVar8 + 0x530);
      lVar10 = *(longlong *)(lVar8 + 0x278);
      fVar1 = *(float *)(lVar10 + 8 + lVar13 * 0xc);
      fVar2 = *(float *)(lVar10 + 4 + lVar13 * 0xc);
      lVar11 = lVar13 * 0x18;
      dVar3 = *(double *)(lVar9 + 0x10 + lVar11);
      dVar4 = *(double *)(lVar9 + 8 + lVar11);
      lVar8 = *(longlong *)(lVar8 + 0x28);
      *(double *)(lVar8 + lVar11) =
           *(double *)(lVar9 + lVar11) - (double)*(float *)(lVar10 + lVar13 * 0xc) * param_2;
      *(double *)(lVar8 + 8 + lVar11) = dVar4 - (double)fVar2 * param_2;
      *(double *)(lVar8 + 0x10 + lVar11) = dVar3 - (double)fVar1 * param_2;
      lVar12 = lVar12 + 0x40;
    } while ((longlong)iVar5 * 0x40 != lVar12);
  }
  return;
}



// FUNCTION 140a840c2 FUN_140a840c2 body=292 status=ok
// SIG undefined FUN_140a840c2(void)

void FUN_140a840c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar7 = *(int *)(param_1 + 0xf0);
  if (iVar7 < iVar3) {
    *(int *)(param_1 + 0xf0) = iVar3;
    if ((uint)(*(int *)(param_1 + 0xf4) - iVar7) < (uint)(iVar3 - iVar7)) {
      FUN_1446f48e2(plVar1);
    }
    memset((void *)((longlong)iVar7 * 4 + *plVar1),0,(longlong)(iVar3 - iVar7) << 2);
  }
  else {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 < iVar7) {
      *(int *)(param_1 + 0xf0) = iVar3;
      FUN_14479f406(plVar1);
    }
  }
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xa0));
  }
  iVar3 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + 8 + lVar6);
      if ((lVar4 == 0) || (iVar7 = *(int *)(lVar4 + 0x28), iVar7 == -1)) {
        lVar4 = *(longlong *)(lVar5 + 0x10 + lVar6);
        if (lVar4 == 0) {
          iVar7 = -1;
        }
        else {
          iVar7 = *(int *)(lVar4 + 0x28);
        }
      }
      *(int *)(lVar5 + 0x18 + lVar6) = iVar7;
      piVar2 = (int *)(*plVar1 + (longlong)iVar7 * 4);
      *piVar2 = *piVar2 + 1;
      lVar6 = lVar6 + 0x40;
    } while ((longlong)iVar3 * 0x40 != lVar6);
  }
  return;
}



// FUNCTION 140a841e6 FUN_140a841e6 body=2163 status=ok
// SIG undefined FUN_140a841e6(void)

void FUN_140a841e6(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong *plVar27;
  int iVar28;
  longlong *plVar29;
  undefined1 auStack_238 [40];
  uint local_210;
  uint local_20c;
  ulonglong local_208;
  ulonglong local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138 [2];
  undefined8 local_128;
  int local_120;
  longlong local_d8 [2];
  uint local_c8 [4];
  uint *local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar29 = *(longlong **)(param_1 + 0x10);
    plVar27 = plVar29 + (longlong)*(int *)(param_1 + 0x18) * 8;
    do {
      lVar26 = *(longlong *)(*(longlong *)*plVar29 + 0x1d0);
      lVar8 = (longlong)(int)((longlong *)*plVar29)[1] * 0x10;
      if (0 < *(int *)(lVar26 + 8 + lVar8)) {
        plVar17 = (longlong *)(lVar26 + lVar8);
        lVar26 = 0;
        do {
          lVar8 = *(longlong *)(*plVar17 + 8 + lVar26 * 0x10);
          cVar6 = *(char *)(lVar8 + 8);
          if (cVar6 == '\x01') {
            lVar13 = lVar8 + 0x40;
            if (*(longlong *)(lVar8 + 0x98) != 0) {
              lVar13 = *(longlong *)(lVar8 + 0x98);
            }
            iVar28 = *(int *)(lVar8 + 0xa0);
            if ((longlong)iVar28 != 0) {
              lVar15 = 0;
              do {
                uVar18 = *(ulonglong *)(lVar13 + 0x10 + lVar15);
                if ((uVar18 != 0) &&
                   ((((*(ushort *)(uVar18 + 0x374) & 2) == 0 ||
                     ((*(longlong *)(uVar18 + 0x140) != 0 &&
                      ((*(byte *)(*(longlong *)(uVar18 + 0x140) + 10) & 0x40) != 0)))) &&
                    ((*(ushort *)(uVar18 + 0x374) & 1) != 0)))) {
                  local_138[0] = uVar18;
                  FUN_140a84a5a(local_d8,local_198,local_138,0);
                }
                lVar15 = lVar15 + 0x58;
              } while ((longlong)iVar28 * 0x58 - lVar15 != 0);
              cVar6 = *(char *)(lVar8 + 8);
              goto LAB_140a843bb;
            }
          }
          else {
LAB_140a843bb:
            if (cVar6 == '\0') {
              local_208 = lVar8 + 0x50;
              local_138[0] = 0x100000000;
              local_138[1] = local_208;
              local_128 = 0xffffffff;
              local_120 = 0;
              if (*(int *)(lVar8 + 0x68) == 0) {
                uVar18 = 1;
                local_210 = 0;
                local_128._4_4_ = 0;
                uVar7 = 0xffffffff;
                iVar28 = 0;
              }
              else {
                FUN_1449c0562(local_138);
                uVar18 = local_138[0] >> 0x20;
                local_210 = *(uint *)(lVar8 + 0x68);
                uVar7 = (uint)local_128;
                iVar28 = (int)local_138[0];
              }
              uVar12 = local_138[1];
              uVar24 = local_128._4_4_;
              iVar25 = local_120;
              if (local_128._4_4_ != local_210 || local_138[1] != local_208) {
                do {
                  uVar16 = *(ulonglong *)
                            (*(longlong *)(lVar8 + 0x40) + 0x10 + (longlong)(int)uVar24 * 0x20);
                  if (((uVar16 != 0) &&
                      (((*(ushort *)(uVar16 + 0x374) & 2) == 0 ||
                       ((*(longlong *)(uVar16 + 0x140) != 0 &&
                        ((*(byte *)(*(longlong *)(uVar16 + 0x140) + 10) & 0x40) != 0)))))) &&
                     ((*(ushort *)(uVar16 + 0x374) & 1) != 0)) {
                    local_20c = uVar7;
                    local_200 = uVar12;
                    local_138[0] = uVar16;
                    FUN_140a84a5a(local_d8,local_198,local_138,0);
                    uVar12 = local_200;
                    uVar7 = local_20c;
                  }
                  uVar7 = uVar7 & ~(uint)uVar18;
                  uVar16 = *(ulonglong *)(uVar12 + 0x10);
                  if (*(ulonglong *)(uVar12 + 0x10) == 0) {
                    uVar16 = uVar12;
                  }
                  uVar3 = *(uint *)(uVar12 + 0x18);
                  lVar13 = (longlong)iVar28;
                  uVar24 = *(uint *)(uVar16 + lVar13 * 4) & uVar7;
                  if (uVar24 == 0) {
                    iVar10 = uVar3 + 0x1e;
                    if (-1 < (int)(uVar3 - 1)) {
                      iVar10 = uVar3 - 1;
                    }
                    iVar10 = iVar10 >> 5;
                    iVar25 = iVar25 + 0x20;
                    iVar11 = iVar10;
                    if (iVar10 < iVar28) {
                      iVar11 = iVar28;
                    }
                    local_20c = uVar7;
                    local_200 = uVar18;
                    if (iVar28 < iVar10) {
                      lVar15 = 0;
                      do {
                        uVar24 = *(uint *)(uVar16 + lVar13 * 4 + 4 + lVar15 * 4);
                        if (uVar24 != 0) {
                          iVar28 = iVar28 + (int)lVar15 + 1;
                          uVar7 = 0xffffffff;
                          goto LAB_140a848e7;
                        }
                        iVar25 = iVar25 + 0x20;
                        lVar15 = lVar15 + 1;
                      } while (iVar11 - lVar13 != lVar15);
                      local_20c = 0xffffffff;
                      iVar28 = iVar11;
                    }
                    iVar28 = iVar28 + 1;
                    uVar24 = uVar3;
                    uVar7 = local_20c;
                  }
                  else {
LAB_140a848e7:
                    uVar18 = (ulonglong)(-uVar24 & uVar24);
                    uVar16 = uVar18 * 2 + 1;
                    lVar13 = 0x3f;
                    if (uVar16 != 0) {
                      for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                      }
                    }
                    uVar24 = (iVar25 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                    if ((int)uVar3 <= (int)uVar24) {
                      uVar24 = uVar3;
                    }
                  }
                } while ((uVar24 != local_210) || (uVar12 != local_208));
              }
            }
          }
          if ((*(char *)(lVar8 + 8) == '\x02') &&
             (uVar18 = *(ulonglong *)(lVar8 + 200), uVar18 != 0)) {
            uVar2 = *(ushort *)(uVar18 + 0x374);
            if ((uVar2 & 2) == 0) {
              uVar2 = uVar2 & 1;
            }
            else {
              if ((*(longlong *)(uVar18 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_140a843ce;
              uVar2 = *(ushort *)(*(longlong *)(uVar18 + 0x140) + 10) & 0x40;
            }
            if (uVar2 != 0) {
              local_138[0] = uVar18;
              FUN_140a84a5a(local_d8,local_198,local_138,0);
            }
          }
LAB_140a843ce:
          lVar26 = lVar26 + 1;
        } while (lVar26 < (int)plVar17[1]);
      }
      plVar29 = plVar29 + 8;
    } while (plVar29 != plVar27);
    if (local_b0 != 0) {
      puVar9 = local_b8;
      if (local_b8 == (uint *)0x0) {
        puVar9 = local_c8;
      }
      uVar7 = *puVar9;
      if (uVar7 == 0) {
        iVar28 = local_b0 + 0x1e;
        if (-1 < (int)(local_b0 - 1)) {
          iVar28 = local_b0 - 1;
        }
        uVar18 = 0;
        uVar12 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar12 = uVar18;
        }
        iVar28 = 0;
        do {
          if (uVar12 == uVar18) goto LAB_140a84271;
          iVar28 = iVar28 + 0x20;
          uVar7 = puVar9[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar18 = 0;
        iVar28 = 0;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar12 = uVar16 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar7 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if ((int)uVar7 < (int)local_b0) {
        uVar24 = 0xffffffff;
        local_208 = (ulonglong)local_b0;
        do {
          lVar26 = *(longlong *)(local_d8[0] + (longlong)(int)uVar7 * 0x10);
          plVar29 = *(longlong **)(lVar26 + 0xe0);
          lVar8 = *plVar29;
          lVar13 = (longlong)(int)plVar29[1];
          if ((plVar29 == (longlong *)0x0) || (*(byte *)((longlong)plVar29 + 0xc) < 2)) {
LAB_140a844f0:
            lVar23 = 0x28;
            lVar15 = 0x48;
          }
          else {
            cVar6 = *(char *)(*(longlong *)(lVar8 + 0x2c0) + 0xb + lVar13 * 0x10);
            lVar23 = 0x530;
            lVar15 = 0x548;
            if ((cVar6 != '\x01') && (cVar6 != '\x04')) goto LAB_140a844f0;
          }
          plVar29 = *(longlong **)(lVar26 + 0xe8);
          lVar15 = *(longlong *)(lVar8 + lVar15);
          lVar14 = lVar13 * 0x10;
          dVar4 = (double)*(float *)(lVar15 + 0xc + lVar14);
          dVar5 = (double)*(float *)(lVar15 + 4 + lVar14);
          local_198._8_4_ = SUB84(dVar5,0);
          local_198._0_8_ = (double)*(float *)(lVar15 + lVar14);
          local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_188._8_4_ = SUB84(dVar4,0);
          local_188._0_8_ = (double)*(float *)(lVar15 + 8 + lVar14);
          local_188._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(lVar8 + lVar23) + lVar13 * 0x18);
          local_178 = *puVar1;
          uStack_174 = puVar1[1];
          uStack_170 = puVar1[2];
          uStack_16c = puVar1[3];
          local_168 = *(undefined8 *)(*(longlong *)(lVar8 + lVar23) + 0x10 + lVar13 * 0x18);
          uStack_160 = 0;
          local_158 = 0x3ff0000000000000;
          uStack_150 = 0x3ff0000000000000;
          local_148 = 0x3ff0000000000000;
          uStack_140 = 0;
          local_210 = uVar24;
          FUN_1447dc19e(lVar26 + 0x20,local_138,local_198);
          lVar8 = *plVar29;
          lVar13 = (longlong)(int)plVar29[1];
          if ((plVar29 == (longlong *)0x0) || (*(byte *)((longlong)plVar29 + 0xc) < 2)) {
LAB_140a845c6:
            lVar23 = 0x28;
            lVar15 = 0x48;
          }
          else {
            cVar6 = *(char *)(*(longlong *)(lVar8 + 0x2c0) + 0xb + lVar13 * 0x10);
            lVar23 = 0x530;
            lVar15 = 0x548;
            if ((cVar6 != '\x01') && (cVar6 != '\x04')) goto LAB_140a845c6;
          }
          lVar15 = *(longlong *)(lVar8 + lVar15);
          lVar14 = lVar13 * 0x10;
          dVar4 = (double)*(float *)(lVar15 + 0xc + lVar14);
          dVar5 = (double)*(float *)(lVar15 + 4 + lVar14);
          local_1f8._8_4_ = SUB84(dVar5,0);
          local_1f8._0_8_ = (double)*(float *)(lVar15 + lVar14);
          local_1f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_1e8._8_4_ = SUB84(dVar4,0);
          local_1e8._0_8_ = (double)*(float *)(lVar15 + 8 + lVar14);
          local_1e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(lVar8 + lVar23) + lVar13 * 0x18);
          local_1d8 = *puVar1;
          uStack_1d4 = puVar1[1];
          uStack_1d0 = puVar1[2];
          uStack_1cc = puVar1[3];
          local_1c8 = *(undefined8 *)(*(longlong *)(lVar8 + lVar23) + 0x10 + lVar13 * 0x18);
          uStack_1c0 = 0;
          local_1b8 = 0x3ff0000000000000;
          uStack_1b0 = 0x3ff0000000000000;
          local_1a8 = 0x3ff0000000000000;
          uStack_1a0 = 0;
          FUN_1447dc19e(lVar26 + 0x80,local_198,local_1f8);
          puVar19 = local_138;
          puVar21 = (ulonglong *)(lVar26 + 0x170);
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          puVar20 = (undefined8 *)local_198;
          puVar22 = (undefined8 *)(lVar26 + 0x1d0);
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar22 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar22 = puVar22 + 1;
          }
          FUN_1400c31d0(lVar26);
          FUN_1449c337b(lVar26,local_138,local_198,param_2);
          uVar24 = local_210 & ~(uint)uVar16;
          puVar9 = local_b8;
          if (local_b8 == (uint *)0x0) {
            puVar9 = local_c8;
          }
          iVar25 = (int)uVar18;
          lVar26 = (longlong)iVar25;
          uVar7 = puVar9[lVar26] & uVar24;
          if (uVar7 == 0) {
            iVar10 = local_b0 + 0x1e;
            if (-1 < (int)(local_b0 - 1)) {
              iVar10 = local_b0 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar25 < iVar10) {
              lVar8 = 0;
              do {
                uVar7 = puVar9[lVar26 + lVar8 + 1];
                if (uVar7 != 0) {
                  uVar18 = (ulonglong)(iVar25 + (int)lVar8 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_140a84720;
                }
                iVar28 = iVar28 + 0x20;
                lVar8 = lVar8 + 1;
              } while (iVar11 - lVar26 != lVar8);
              uVar24 = 0xffffffff;
              iVar25 = iVar11;
            }
            uVar18 = (ulonglong)(iVar25 + 1);
            uVar7 = local_b0;
          }
          else {
LAB_140a84720:
            uVar16 = (ulonglong)(-uVar7 & uVar7);
            uVar12 = uVar16 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            uVar7 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if ((int)local_b0 <= (int)uVar7) {
              uVar7 = local_b0;
            }
          }
        } while (uVar7 != (uint)local_208);
      }
    }
  }
LAB_140a84271:
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1403930a0(local_d8);
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a84a5a FUN_140a84a5a body=329 status=ok
// SIG undefined FUN_140a84a5a(void)

undefined4 *
FUN_140a84a5a(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a84c3a(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140a84ba4(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140a8505a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a84ba4 FUN_140a84ba4 body=149 status=ok
// SIG undefined FUN_140a84ba4(void)

void FUN_140a84ba4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_140a86b06(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140a84bc8;
    }
  }
  uVar1 = 0;
LAB_140a84bc8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140a84c3a FUN_140a84c3a body=476 status=ok
// SIG undefined FUN_140a84c3a(void)

int * FUN_140a84c3a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1446efaca(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140a84e16 FUN_140a84e16 body=579 status=ok
// SIG undefined FUN_140a84e16(void)

void FUN_140a84e16(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  iVar4 = *(int *)(param_1 + 0xa0);
  iVar6 = iVar4 + 1;
  iVar5 = *(int *)(param_1 + 0xe0);
  if (iVar4 < iVar5) {
    if (iVar4 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar6 < iVar5) {
      *(int *)(param_1 + 0xe0) = iVar6;
      FUN_14479f406(plVar1);
    }
  }
  else {
    *(int *)(param_1 + 0xe0) = iVar6;
    if ((uint)(*(int *)(param_1 + 0xe4) - iVar5) < (uint)(iVar6 - iVar5)) {
      FUN_1446f48e2(plVar1);
    }
    memset((void *)((longlong)iVar5 * 4 + *plVar1),0,(longlong)(iVar6 - iVar5) << 2);
  }
  plVar1 = (longlong *)(param_1 + 0xf8);
  iVar6 = *(int *)(param_1 + 0xa0);
  iVar4 = *(int *)(param_1 + 0x100);
  if (iVar4 < iVar6) {
    *(int *)(param_1 + 0x100) = iVar6;
    if ((uint)(*(int *)(param_1 + 0x104) - iVar4) < (uint)(iVar6 - iVar4)) {
      FUN_1446f48e2(plVar1);
    }
    memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(iVar6 - iVar4) << 2);
  }
  else {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar6 < iVar4) {
      *(int *)(param_1 + 0x100) = iVar6;
      FUN_14479f406(plVar1);
    }
  }
  **(undefined4 **)(param_1 + 0xd8) = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar7 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar7 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + lVar7 * 4);
      *(int *)(*(longlong *)(param_1 + 0xd8) + 4 + lVar7 * 4) =
           *(int *)(*(longlong *)(param_1 + 0xe8) + lVar7 * 4) +
           *(int *)(*(longlong *)(param_1 + 0xd8) + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xa0));
  }
  plVar2 = (longlong *)(param_1 + 0x90);
  iVar6 = *(int *)(param_1 + 0x88);
  iVar4 = *(int *)(param_1 + 0x98);
  if (iVar4 < iVar6) {
    *(int *)(param_1 + 0x98) = iVar6;
    if ((uint)(*(int *)(param_1 + 0x9c) - iVar4) < (uint)(iVar6 - iVar4)) {
      FUN_145769426(plVar2);
    }
    memset((void *)((longlong)iVar4 * 8 + *plVar2),0,(longlong)(iVar6 - iVar4) << 3);
  }
  else {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar6 < iVar4) {
      *(int *)(param_1 + 0x98) = iVar6;
      FUN_140a86a84(plVar2);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x80);
    lVar8 = (longlong)*(int *)(param_1 + 0x88) << 6;
    do {
      iVar6 = *(int *)(lVar7 + 0x18);
      *(longlong *)(*plVar2 + (longlong)*(int *)(*plVar1 + (longlong)iVar6 * 4) * 8) = lVar7;
      piVar3 = (int *)(*plVar1 + (longlong)iVar6 * 4);
      *piVar3 = *piVar3 + 1;
      lVar7 = lVar7 + 0x40;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 140a8505a FUN_140a8505a body=682 status=ok
// SIG undefined FUN_140a8505a(void)

void FUN_140a8505a(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140a850be;
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
LAB_140a850be:
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
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
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



// FUNCTION 140a85304 FUN_140a85304 body=716 status=ok
// SIG undefined FUN_140a85304(void)

void FUN_140a85304(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  plVar2 = (longlong *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) < 0) {
    FUN_140a86944(plVar2,0);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_140a86944(plVar1,0);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) < 0) {
    FUN_14481578e(param_1 + 0xb8,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_14481578e(param_1 + 200,0);
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x18) * 8;
    do {
      if (((int)plVar9[5] == -1) &&
         (*(char *)(*(longlong *)(*(longlong *)*plVar9 + 0x2c0) + 0xb +
                   (longlong)(int)((longlong *)*plVar9)[1] * 0x10) == '\x04')) {
        *(undefined4 *)(plVar9 + 5) = *(undefined4 *)(param_1 + 0xa0);
        iVar11 = *(int *)(param_1 + 0xb0);
        *(uint *)(param_1 + 0xb0) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0xb4) < iVar11 + 1U) {
          FUN_140a8565e(plVar2,iVar11);
        }
        *(longlong **)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar11 * 8) = plVar9;
        uVar3 = *(undefined4 *)(param_1 + 0x28);
        iVar11 = *(int *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0xc4) < iVar11 + 1U) {
          FUN_1446f48e2(param_1 + 0xb8,iVar11);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar11 * 4) = uVar3;
        iVar11 = 0;
        uVar8 = *(uint *)(param_1 + 0xb0);
        while (0 < (int)uVar8) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + -8 + (ulonglong)uVar8 * 8);
          *(uint *)(param_1 + 0xb0) = uVar8 - 1;
          FUN_140a855d0(plVar2);
          iVar4 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
            FUN_140a8565e(plVar1,iVar4);
          }
          *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar6;
          iVar4 = *(int *)(lVar6 + 0x10);
          if ((longlong)iVar4 != 0) {
            lVar6 = *(longlong *)(lVar6 + 8);
            lVar12 = 0;
            do {
              lVar7 = *(longlong *)(lVar6 + lVar12);
              if (*(int *)(lVar7 + 0x28) == -1) {
                *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_1 + 0xa0);
                iVar5 = *(int *)(param_1 + 0xb0);
                uVar8 = iVar5 + 1;
                *(uint *)(param_1 + 0xb0) = uVar8;
                if (*(uint *)(param_1 + 0xb4) < uVar8) {
                  FUN_140a8565e(plVar2);
                }
                *(longlong *)(*plVar2 + (longlong)iVar5 * 8) = lVar7;
              }
              lVar12 = lVar12 + 8;
            } while ((longlong)iVar4 * 8 != lVar12);
          }
          iVar11 = iVar11 + 1;
          uVar8 = *(uint *)(param_1 + 0xb0);
        }
        iVar4 = *(int *)(param_1 + 0xd0);
        *(uint *)(param_1 + 0xd0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0xd4) < iVar4 + 1U) {
          FUN_1446f48e2(param_1 + 200,iVar4);
        }
        *(int *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 4) = iVar11;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
      plVar9 = plVar9 + 8;
    } while (plVar9 != plVar10);
  }
  return;
}



// FUNCTION 140a855d0 FUN_140a855d0 body=142 status=ok
// SIG undefined FUN_140a855d0(void)

void FUN_140a855d0(longlong param_1)

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



// FUNCTION 140a8565e FUN_140a8565e body=353 status=ok
// SIG undefined FUN_140a8565e(void)

void FUN_140a8565e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a856e3;
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
LAB_140a856e3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a857c0 FUN_140a857c0 body=4274 status=ok
// SIG undefined FUN_140a857c0(void)

/* WARNING: Removing unreachable block (ram,0x000140a86767) */
/* WARNING: Removing unreachable block (ram,0x000140a86779) */

uint FUN_140a857c0(longlong *param_1,double param_2,int param_3,longlong *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong **pplVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  double *pdVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  uint uVar28;
  longlong *plVar29;
  longlong *plVar30;
  float *pfVar31;
  longlong lVar32;
  int iVar33;
  longlong *plVar34;
  ulonglong uVar35;
  uint *puVar36;
  longlong *plVar37;
  bool bVar38;
  undefined4 uVar39;
  longlong lVar40;
  longlong **pplVar41;
  longlong lVar42;
  undefined1 uVar43;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  double *local_1b0;
  undefined1 local_1a3;
  char local_1a2;
  char local_1a1;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  longlong **local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined1 local_b0;
  double local_a8 [7];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_170 = param_1 + 2;
  iVar26 = *(int *)((longlong)param_1 + 0x1c);
  FUN_140a86873(param_1[2],(int)param_1[3]);
  *(undefined4 *)(param_1 + 3) = 0;
  if ((iVar26 < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    FUN_145769366(local_170,0);
  }
  iVar26 = (int)param_1[1] * 2;
  if (param_3 <= iVar26) {
    iVar26 = param_3;
  }
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar26);
  }
  if (*(int *)((longlong)param_1 + 0x1c) < iVar26) {
    FUN_145769366(local_170);
  }
  local_180 = param_1 + 6;
  if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
    plVar16 = param_1 + 0xd;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[0xe];
    }
    iVar26 = (int)param_1[0xf];
    iVar33 = iVar26 + 3;
    if (-1 < iVar26) {
      iVar33 = iVar26;
    }
    if ((int)param_1[7] - *(int *)((longlong)param_1 + 100) < iVar33 >> 2) {
      iVar26 = (int)param_1[0xb];
      if (iVar26 == 0) {
        param_4 = (longlong *)0x0;
        uVar35 = 1;
        iVar33 = 0;
        iVar15 = 0;
      }
      else {
        puVar36 = (uint *)param_1[10];
        if ((uint *)param_1[10] == (uint *)0x0) {
          puVar36 = (uint *)(param_1 + 8);
        }
        uVar14 = *puVar36;
        if (uVar14 == 0) {
          iVar33 = iVar26 + 0x1e;
          if (-1 < iVar26 + -1) {
            iVar33 = iVar26 + -1;
          }
          param_4 = (longlong *)0x0;
          plVar37 = (longlong *)(ulonglong)(uint)(iVar33 >> 5);
          if (iVar33 >> 5 < 1) {
            plVar37 = param_4;
          }
          iVar15 = 0;
          do {
            if (plVar37 == param_4) goto LAB_140a8629f;
            iVar15 = iVar15 + 0x20;
            uVar14 = puVar36[(longlong)((longlong)param_4 + 1)];
            param_4 = (longlong *)((longlong)param_4 + 1);
          } while (uVar14 == 0);
        }
        else {
          param_4 = (longlong *)0x0;
          iVar15 = 0;
        }
        uVar35 = (ulonglong)(-uVar14 & uVar14);
        uVar3 = uVar35 * 2 + 1;
        lVar42 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar42 == 0; lVar42 = lVar42 + -1) {
          }
        }
        iVar33 = (iVar15 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar33) {
          iVar33 = iVar26;
        }
      }
      if (iVar33 != iVar26) {
        uVar14 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar16 + (longlong)*(int *)(param_1[6] + 0x14 + (longlong)iVar33 * 0x18) * 4)
               = 0xffffffff;
          uVar14 = ~(uint)uVar35 & uVar14;
          puVar36 = (uint *)param_1[10];
          if ((uint *)param_1[10] == (uint *)0x0) {
            puVar36 = (uint *)(param_1 + 8);
          }
          iVar20 = (int)param_1[0xb];
          iVar33 = (int)param_4;
          lVar42 = (longlong)iVar33;
          uVar28 = puVar36[lVar42] & uVar14;
          if (uVar28 == 0) {
            iVar24 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar24 = iVar20 + -1;
            }
            iVar24 = iVar24 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar25 = iVar24;
            if (iVar24 < iVar33) {
              iVar25 = iVar33;
            }
            if (iVar33 < iVar24) {
              lVar40 = 0;
              do {
                uVar28 = puVar36[lVar42 + lVar40 + 1];
                if (uVar28 != 0) {
                  param_4 = (longlong *)(ulonglong)(iVar33 + (int)lVar40 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_140a8626a;
                }
                iVar15 = iVar15 + 0x20;
                lVar40 = lVar40 + 1;
              } while (iVar25 - lVar42 != lVar40);
              uVar14 = 0xffffffff;
              iVar33 = iVar25;
            }
            param_4 = (longlong *)(ulonglong)(iVar33 + 1);
            iVar33 = iVar20;
          }
          else {
LAB_140a8626a:
            uVar35 = (ulonglong)(-uVar28 & uVar28);
            uVar3 = uVar35 * 2 + 1;
            lVar42 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar42 == 0; lVar42 = lVar42 + -1) {
              }
            }
            iVar33 = (iVar15 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar33) {
              iVar33 = iVar20;
            }
          }
        } while (iVar33 != iVar26);
      }
    }
    else if (0 < iVar26) {
      lVar42 = 0;
      do {
        *(undefined4 *)((longlong)plVar16 + lVar42 * 4) = 0xffffffff;
        lVar42 = lVar42 + 1;
      } while (lVar42 < (int)param_1[0xf]);
    }
LAB_140a8629f:
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) < 0) {
      FUN_144727cd0(local_180,0);
    }
    param_1[0xc] = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  plVar16 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) < 0) {
    FUN_1457693c6(plVar16,0);
  }
  iVar26 = (int)param_1[1];
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar26);
  }
  if (*(int *)((longlong)param_1 + 0x8c) < iVar26) {
    FUN_1457693c6(plVar16);
    iVar26 = (int)param_1[1];
  }
  dVar11 = (double)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
  dVar10 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
  if (iVar26 == 0) {
    uVar14 = 0;
  }
  else {
    plVar27 = (longlong *)*param_1;
    plVar37 = plVar27 + iVar26;
    local_160 = param_1 + 0xd;
    uVar14 = 0;
    do {
      pplVar41 = &local_198;
      plVar34 = (longlong *)&local_1a2;
      pdVar23 = local_a8;
      lVar42 = *plVar27;
      if ((*(ushort *)(lVar42 + 0x374) & 0x502) == 0x400) {
        local_198 = (longlong *)0x0;
        local_158 = (longlong *)0x0;
        local_1a2 = '\0';
        local_1a1 = '\0';
        local_a8[4] = 0.0;
        local_a8[5] = 0.0;
        local_a8[2] = 0.0;
        local_a8[3] = 0.0;
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        uVar35 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        lVar40 = 0;
        local_168 = plVar37;
        do {
          plVar37 = *(longlong **)(lVar42 + 0xe0 + lVar40 * 8);
          if ((plVar37 == (longlong *)0x0) || (*(byte *)((longlong)plVar37 + 0xc) < 2)) {
            *pplVar41 = (longlong *)0x0;
            *(undefined1 *)plVar34 = 0;
          }
          else {
            uVar43 = *(char *)(*(longlong *)(*plVar37 + 0x2c0) + 0xb +
                              (longlong)(int)plVar37[1] * 0x10) == '\x04';
            if ((bool)uVar43) {
              if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
                uVar14 = ((uint)((ulonglong)plVar37 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)plVar37 >> 4)) * -0x7a143595;
                uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                plVar17 = (longlong *)param_1[0xe];
                if ((longlong *)param_1[0xe] == (longlong *)0x0) {
                  plVar17 = local_160;
                }
                iVar26 = *(int *)((longlong)plVar17 +
                                 (ulonglong)((int)param_1[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4
                                 );
                if (iVar26 != -1) {
                  do {
                    puVar1 = (ulonglong *)(*local_180 + (longlong)iVar26 * 0x18);
                    if ((longlong *)*puVar1 == plVar37) {
                      if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                        local_1a0 = (longlong *)puVar1[1];
                        goto LAB_140a85c8a;
                      }
                      break;
                    }
                    iVar26 = (int)puVar1[2];
                  } while (iVar26 != -1);
                }
              }
              local_190 = (longlong *)CONCAT44(local_190._4_4_,(int)uVar35);
              local_e8._0_4_ = SUB84(plVar37,0);
              local_e8._4_4_ = (undefined4)((ulonglong)plVar37 >> 0x20);
              uStack_e0._0_4_ = 0;
              uStack_e0._4_4_ = 0;
              uStack_d8._0_4_ = 0;
              uStack_d8._4_4_ = 0;
              uStack_d0._0_4_ = 0;
              uStack_d0._4_4_ = 0;
              uStack_c8 = 0;
              local_c0 = 0xffffffff;
              uStack_b8 = 0x3ff0000000000000;
              local_b0 = 0;
              local_188 = plVar34;
              local_178 = plVar16;
              local_140 = pplVar41;
              FUN_140a86944(&uStack_e0);
              if (uStack_c8._4_4_ < 8) {
                FUN_140a868b2(&uStack_d0);
              }
              lVar40 = param_1[3];
              uVar14 = (int)lVar40 + 1;
              *(uint *)(param_1 + 3) = uVar14;
              if (*(uint *)((longlong)param_1 + 0x1c) < uVar14) {
                FUN_146cb48c2(local_170);
              }
              lVar21 = *local_170;
              lVar40 = (longlong)(int)lVar40 * 0x40;
              *(ulonglong *)(lVar21 + lVar40) = CONCAT44(local_e8._4_4_,(undefined4)local_e8);
              *(undefined8 *)(lVar21 + 8 + lVar40) = 0;
              *(ulonglong *)(lVar21 + 8 + lVar40) = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
              *(undefined4 *)(lVar21 + 0x10 + lVar40) = (undefined4)uStack_d8;
              *(undefined4 *)(lVar21 + 0x14 + lVar40) = uStack_d8._4_4_;
              *(undefined8 *)(lVar21 + 0x18 + lVar40) = 0;
              *(ulonglong *)(lVar21 + 0x18 + lVar40) =
                   CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
              *(undefined4 *)(lVar21 + 0x20 + lVar40) = (undefined4)uStack_c8;
              *(int *)(lVar21 + 0x24 + lVar40) = uStack_c8._4_4_;
              *(undefined1 *)(lVar21 + 0x38 + lVar40) = local_b0;
              puVar4 = (undefined4 *)(lVar21 + 0x28 + lVar40);
              *puVar4 = local_c0;
              puVar4[1] = uStack_bc;
              puVar4[2] = (undefined4)uStack_b8;
              puVar4[3] = uStack_b8._4_4_;
              uStack_c8 = 0;
              uStack_d0._4_4_ = 0;
              uStack_d0._0_4_ = 0;
              uStack_d8._4_4_ = 0;
              uStack_d8._0_4_ = 0;
              uStack_e0._4_4_ = 0;
              uStack_e0._0_4_ = 0;
              plVar16 = param_1 + 8;
              plVar34 = (longlong *)((longlong)((int)param_1[3] + -1) * 0x40 + param_1[2]);
              local_1a3 = uVar43;
              local_1a0 = plVar34;
              if (*(int *)((longlong)param_1 + 100) == 0) {
                iVar26 = (int)param_1[7];
                *(int *)(param_1 + 7) = iVar26 + 1;
                if (*(int *)((longlong)param_1 + 0x3c) == iVar26) {
                  FUN_14482b872(local_180,iVar26);
                }
                iVar33 = (int)param_1[0xb];
                if (iVar33 == 0) {
                  iVar15 = -1;
                }
                else {
                  iVar15 = iVar33 + 0x1e;
                  if (-1 < iVar33 + -1) {
                    iVar15 = iVar33 + -1;
                  }
                  iVar15 = iVar15 >> 5;
                }
                iVar20 = iVar33 + 1;
                iVar24 = iVar33 + 0x1f;
                if (-1 < iVar33) {
                  iVar24 = iVar33;
                }
                if (iVar24 >> 5 == iVar15) {
                  *(int *)(param_1 + 0xb) = iVar20;
                }
                else {
                  if (*(int *)((longlong)param_1 + 0x5c) <= iVar33) {
                    local_150 = plVar16;
                    if (iVar33 + 0x20U < 0xa0) {
                      iVar20 = 0x80;
                      iVar15 = iVar33;
                    }
                    else {
                      uVar14 = iVar33 + 0x20U >> 5;
                      local_148 = (ulonglong)uVar14;
                      if (*(int *)((longlong)param_1 + 0x5c) + 0x1fU < 0xa0) {
                        uVar28 = 4;
                        if (4 < uVar14) {
                          uVar28 = uVar14;
                        }
                      }
                      else {
                        uVar28 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
                      }
                      uVar35 = FUN_144a3809e(uVar28 << 2,0);
                      iVar15 = (int)(uVar35 >> 2);
                      iVar20 = -0x20;
                      if ((int)local_148 <= iVar15) {
                        iVar20 = iVar15 << 5;
                      }
                      iVar15 = (int)param_1[0xb];
                    }
                    *(int *)((longlong)param_1 + 0x5c) = iVar20;
                    FUN_1446efbd8(local_150,iVar15);
                    iVar20 = (int)param_1[0xb] + 1;
                    plVar34 = local_1a0;
                    plVar16 = local_150;
                  }
                  iVar15 = iVar20 + 0x1f;
                  if (-1 < iVar20) {
                    iVar15 = iVar20;
                  }
                  *(int *)(param_1 + 0xb) = iVar20;
                  if (iVar20 % 0x20 != 0) {
                    plVar17 = (longlong *)param_1[10];
                    if ((longlong *)param_1[10] == (longlong *)0x0) {
                      plVar17 = plVar16;
                    }
                    bVar19 = -(char)(iVar20 % 0x20);
                    *(uint *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4) =
                         (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4) <<
                               (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
                  }
                }
                lVar40 = (longlong)iVar26;
                plVar17 = (longlong *)param_1[10];
                if ((longlong *)param_1[10] == (longlong *)0x0) {
                  plVar17 = plVar16;
                }
                bVar19 = (byte)iVar33 & 0x1f;
                puVar36 = (uint *)((longlong)plVar17 + (longlong)(iVar24 >> 5) * 4);
                *puVar36 = *puVar36 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
              }
              else {
                iVar26 = (int)param_1[0xc];
                lVar40 = (longlong)iVar26;
                iVar33 = *(int *)(param_1[6] + 4 + lVar40 * 0x18);
                *(int *)(param_1 + 0xc) = iVar33;
                iVar15 = *(int *)((longlong)param_1 + 100) + -1;
                *(int *)((longlong)param_1 + 100) = iVar15;
                if (iVar15 != 0) {
                  *(undefined4 *)(param_1[6] + (longlong)iVar33 * 0x18) = 0xffffffff;
                }
              }
              pplVar41 = local_140;
              if ((longlong *)param_1[10] != (longlong *)0x0) {
                plVar16 = (longlong *)param_1[10];
              }
              iVar33 = iVar26 + 0x1f;
              if (-1 < iVar26) {
                iVar33 = iVar26;
              }
              puVar36 = (uint *)((longlong)plVar16 + (longlong)(iVar33 >> 5) * 4);
              *puVar36 = *puVar36 | 1 << ((byte)iVar26 & 0x1f);
              puVar1 = (ulonglong *)(param_1[6] + lVar40 * 0x18);
              *puVar1 = (ulonglong)plVar37;
              puVar1[1] = (ulonglong)plVar34;
              *(undefined4 *)(puVar1 + 2) = 0xffffffff;
              uVar14 = ((uint)((ulonglong)plVar37 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)plVar37 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              uVar14 = uVar14 >> 0x10 ^ uVar14;
              uVar28 = (int)param_1[7] - *(int *)((longlong)param_1 + 100);
              if (1 < uVar28) {
                plVar16 = (longlong *)param_1[0xe];
                if ((longlong *)param_1[0xe] == (longlong *)0x0) {
                  plVar16 = local_160;
                }
                iVar33 = *(int *)((longlong)plVar16 +
                                 (ulonglong)((int)param_1[0xf] - 1U & uVar14) * 4);
                if (iVar33 != -1) {
                  do {
                    puVar2 = (ulonglong *)(*local_180 + (longlong)iVar33 * 0x18);
                    if ((longlong *)*puVar2 == plVar37) {
                      uVar39 = *(undefined4 *)((longlong)puVar1 + 4);
                      uVar35 = puVar1[1];
                      uVar9 = *(undefined4 *)((longlong)puVar1 + 0xc);
                      *(int *)puVar2 = (int)*puVar1;
                      *(undefined4 *)((longlong)puVar2 + 4) = uVar39;
                      *(int *)(puVar2 + 1) = (int)uVar35;
                      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar9;
                      FUN_146cb4948(local_180,iVar26);
                      goto LAB_140a85c7b;
                    }
                    iVar33 = (int)puVar2[2];
                  } while (iVar33 != -1);
                }
              }
              iVar33 = 1;
              if (3 < uVar28) {
                uVar35 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
                lVar40 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                  }
                }
                iVar33 = 1 << ((byte)lVar40 & 0x1f);
              }
              if (((int)uVar28 < 1) || (iVar33 <= (int)param_1[0xf])) {
                uVar14 = (int)param_1[0xf] - 1U & uVar14;
                *(uint *)((longlong)puVar1 + 0x14) = uVar14;
                plVar16 = (longlong *)param_1[0xe];
                if ((longlong *)param_1[0xe] == (longlong *)0x0) {
                  plVar16 = local_160;
                }
                *(undefined4 *)(puVar1 + 2) =
                     *(undefined4 *)
                      ((longlong)plVar16 +
                      ((longlong)(int)param_1[0xf] - 1U & (longlong)(int)uVar14) * 4);
                plVar16 = (longlong *)param_1[0xe];
                if ((longlong *)param_1[0xe] == (longlong *)0x0) {
                  plVar16 = local_160;
                }
                *(int *)((longlong)plVar16 +
                        ((longlong)(int)param_1[0xf] - 1U & (longlong)(int)uVar14) * 4) = iVar26;
              }
              else {
                *(int *)(param_1 + 0xf) = iVar33;
                FUN_1457694ac(local_180);
              }
LAB_140a85c7b:
              uVar35 = (ulonglong)local_190 & 0xffffffff;
              plVar34 = local_188;
              plVar16 = local_178;
              uVar43 = local_1a3;
            }
            else {
              local_1a0 = (longlong *)0x0;
            }
LAB_140a85c8a:
            *pplVar41 = local_1a0;
            *(undefined1 *)plVar34 = uVar43;
            lVar21 = (longlong)(int)plVar37[1];
            lVar40 = *(longlong *)(*plVar37 + 0x278);
            fVar6 = *(float *)(lVar40 + 8 + lVar21 * 0xc);
            fVar7 = *(float *)(lVar40 + 4 + lVar21 * 0xc);
            *pdVar23 = (double)*(float *)(lVar40 + lVar21 * 0xc) * param_2;
            pdVar23[1] = (double)fVar7 * param_2;
            pdVar23[2] = (double)fVar6 * param_2;
          }
          plVar37 = local_168;
          pdVar23 = local_a8 + 3;
          pplVar41 = &local_158;
          lVar40 = 1;
          plVar34 = (longlong *)&local_1a1;
          uVar3 = uVar35 & 1;
          uVar35 = 0;
        } while (uVar3 != 0);
        plVar34 = *(longlong **)(lVar42 + 0xe0);
        plVar17 = *(longlong **)(lVar42 + 0xe8);
        plVar29 = (longlong *)0x0;
        if (1 < *(byte *)((longlong)plVar34 + 0xc)) {
          plVar29 = plVar34;
        }
        plVar22 = (longlong *)0x0;
        if (1 < *(byte *)((longlong)plVar17 + 0xc)) {
          plVar22 = plVar17;
        }
        local_100 = DAT_14c8464e0;
        local_f0 = DAT_14c8464f0;
        local_f8 = DAT_14c8464e8;
        if (plVar29 != (longlong *)0x0) {
          lVar21 = (longlong)(int)plVar29[1];
          lVar40 = *(longlong *)(*plVar29 + 0x278);
          local_100 = (double)*(float *)(lVar40 + lVar21 * 0xc) * param_2;
          local_f0 = (double)*(float *)(lVar40 + 8 + lVar21 * 0xc) * param_2;
          local_f8 = (double)*(float *)(lVar40 + 4 + lVar21 * 0xc) * param_2;
        }
        local_118 = DAT_14c8464e0;
        local_108 = DAT_14c8464f0;
        local_110 = DAT_14c8464e8;
        if (plVar22 != (longlong *)0x0) {
          lVar21 = (longlong)(int)plVar22[1];
          lVar40 = *(longlong *)(*plVar22 + 0x278);
          local_118 = (double)*(float *)(lVar40 + lVar21 * 0xc) * param_2;
          local_108 = (double)*(float *)(lVar40 + 8 + lVar21 * 0xc) * param_2;
          local_110 = (double)*(float *)(lVar40 + 4 + lVar21 * 0xc) * param_2;
        }
        plVar30 = plVar29;
        if (plVar29 == (longlong *)0x0) {
          plVar30 = plVar34;
        }
        lVar40 = 0x548;
        if (plVar29 == (longlong *)0x0) {
          lVar40 = 0x48;
        }
        lVar21 = (longlong)(int)plVar30[1] * 0x10;
        lVar40 = *(longlong *)(*plVar30 + lVar40);
        uStack_d0 = (double)*(float *)(lVar40 + 0xc + lVar21);
        uStack_d8 = (double)*(float *)(lVar40 + 8 + lVar21);
        uStack_e0 = (double)*(float *)(lVar40 + 4 + lVar21);
        local_e8 = (double)*(float *)(lVar40 + lVar21);
        if (plVar22 == (longlong *)0x0) {
          lVar40 = *plVar17;
          lVar21 = (longlong)(int)plVar17[1];
          pfVar31 = (float *)(lVar21 * 0x10 + *(longlong *)(lVar40 + 0x48));
        }
        else {
          pfVar31 = (float *)((longlong)(int)plVar22[1] * 0x10 + *(longlong *)(*plVar22 + 0x548));
          lVar40 = *plVar17;
          lVar21 = (longlong)(int)plVar17[1];
        }
        local_1b0 = &local_138;
        local_1b8 = &local_118;
        local_120 = (double)pfVar31[3];
        local_128 = (double)pfVar31[2];
        local_130 = (double)pfVar31[1];
        local_138 = (double)*pfVar31;
        uVar14 = FUN_1400c4092((longlong)(int)plVar34[1] * 0x18 + *(longlong *)(*plVar34 + 0x128),
                               &local_100,&local_e8,lVar21 * 0x18 + *(longlong *)(lVar40 + 0x128));
        local_190 = local_198;
        pdVar23 = local_a8;
        param_4 = local_158;
        dVar10 = local_e8;
        dVar11 = uStack_d0;
        if (local_198 != (longlong *)0x0 || local_158 != (longlong *)0x0) {
          local_188 = local_158;
          lVar40 = 0;
          local_1a0 = local_158;
          bVar12 = true;
          do {
            bVar38 = bVar12;
            plVar37 = *(longlong **)(lVar42 + 0xe0 + lVar40 * 8);
            if ((plVar37 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar37 + 0xc))) {
              lVar21 = *plVar37;
              lVar32 = (longlong)(int)plVar37[1] * 0x10;
              param_4 = local_1a0;
              if (*(char *)(*(longlong *)(lVar21 + 0x2c0) + 0xb + lVar32) == '\x02') {
                lVar8 = *(longlong *)(lVar21 + 0x548);
                uStack_d0 = (double)*(float *)(lVar8 + 0xc + lVar32);
                uStack_d8 = (double)*(float *)(lVar8 + 8 + lVar32);
                uStack_e0 = (double)*(float *)(lVar8 + 4 + lVar32);
                local_e8 = (double)*(float *)(lVar8 + lVar32);
                local_1b0 = &local_118;
                local_1b8 = &local_100;
                cVar13 = FUN_1400c436a((longlong)(int)plVar37[1] * 0x18 +
                                       *(longlong *)(lVar21 + 0x128),pdVar23,&local_e8,&local_138);
                param_4 = local_1a0;
                if (cVar13 != '\0') {
                  uVar39 = (undefined4)lVar40;
                  break;
                }
              }
            }
            pdVar23 = local_a8 + 3;
            uVar39 = 0xffffffff;
            lVar40 = 1;
            bVar12 = false;
          } while (bVar38);
          local_e8._4_4_ = 0;
          uStack_e0._0_4_ = 0;
          uStack_e0._4_4_ = 0;
          uStack_d8._0_4_ = 0;
          uStack_d8._4_4_ = 0;
          uStack_d0._0_4_ = 0;
          iVar26 = (int)param_1[0x11];
          *(uint *)(param_1 + 0x11) = iVar26 + 1U;
          if (*(uint *)((longlong)param_1 + 0x8c) < iVar26 + 1U) {
            FUN_146cb49ba(plVar16,iVar26);
            param_4 = local_1a0;
          }
          lVar40 = *plVar16;
          lVar21 = (longlong)iVar26 * 0x40;
          *(longlong *)(lVar40 + lVar21) = lVar42;
          *(longlong **)(lVar40 + 8 + lVar21) = local_190;
          *(longlong **)(lVar40 + 0x10 + lVar21) = local_188;
          *(undefined8 *)(lVar40 + 0x18 + lVar21) = 0xffffffff;
          *(undefined4 *)(lVar40 + 0x20 + lVar21) = uVar39;
          puVar4 = (undefined4 *)(lVar40 + 0x24 + lVar21);
          *puVar4 = (undefined4)local_e8;
          puVar4[1] = local_e8._4_4_;
          puVar4[2] = (undefined4)uStack_e0;
          puVar4[3] = uStack_e0._4_4_;
          puVar5 = (undefined8 *)(lVar40 + 0x30 + lVar21);
          *puVar5 = CONCAT44((undefined4)uStack_d8,uStack_e0._4_4_);
          puVar5[1] = CONCAT44((undefined4)uStack_d0,uStack_d8._4_4_);
          pplVar18 = &local_198;
          bVar12 = true;
          do {
            bVar38 = bVar12;
            plVar37 = *pplVar18;
            if (plVar37 != (longlong *)0x0) {
              lVar40 = param_1[0x11];
              lVar42 = param_1[0x10];
              iVar26 = (int)plVar37[4];
              *(uint *)(plVar37 + 4) = iVar26 + 1U;
              if (*(uint *)((longlong)plVar37 + 0x24) < iVar26 + 1U) {
                local_178 = plVar16;
                FUN_145769426(plVar37 + 3,iVar26);
                param_4 = local_1a0;
                plVar16 = local_178;
              }
              *(longlong *)(plVar37[3] + (longlong)iVar26 * 8) =
                   (longlong)((int)lVar40 + -1) * 0x40 + lVar42;
            }
            plVar37 = local_168;
            pplVar18 = pplVar41;
            bVar12 = false;
          } while (bVar38);
          dVar10 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
          uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
          uStack_d8 = (double)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
          dVar11 = (double)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
          if ((local_1a2 != '\0') &&
             (dVar10 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8),
             uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0),
             uStack_d8 = (double)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8),
             dVar11 = (double)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0), local_1a1 == '\x01'))
          {
            plVar34 = local_190 + 1;
            iVar26 = (int)local_190[2];
            *(uint *)(local_190 + 2) = iVar26 + 1U;
            if (*(uint *)((longlong)local_190 + 0x14) < iVar26 + 1U) {
              FUN_140a8565e(plVar34,iVar26);
              param_4 = local_1a0;
            }
            *(longlong **)(*plVar34 + (longlong)iVar26 * 8) = local_188;
            param_4 = param_4 + 1;
            iVar26 = (int)local_188[2];
            *(uint *)(local_188 + 2) = iVar26 + 1U;
            if (*(uint *)((longlong)local_188 + 0x14) < iVar26 + 1U) {
              FUN_140a8565e(param_4,iVar26);
            }
            dVar11 = (double)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
            dVar10 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
            *(longlong **)(*param_4 + (longlong)iVar26 * 8) = local_190;
          }
        }
      }
      plVar27 = plVar27 + 1;
    } while (plVar27 != plVar37);
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
    local_e8 = dVar10;
    uStack_d0 = dVar11;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 140a86873 FUN_140a86873 body=63 status=ok
// SIG undefined FUN_140a86873(void)

void FUN_140a86873(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a868b2 FUN_140a868b2 body=145 status=ok
// SIG undefined FUN_140a868b2(void)

void FUN_140a868b2(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x40;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e04];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x40,8);
  }
  uVar2 = 0x7fffffff;
  if (7 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 140a86944 FUN_140a86944 body=320 status=ok
// SIG undefined FUN_140a86944(void)

void FUN_140a86944(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a869ad;
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
LAB_140a869ad:
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



// FUNCTION 140a86a84 FUN_140a86a84 body=129 status=ok
// SIG undefined FUN_140a86a84(void)

void FUN_140a86a84(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x1ffffffffffff800U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 3,8);
      uVar2 = uVar2 >> 3;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,8,8);
    }
  }
  return;
}



// FUNCTION 140a86b06 FUN_140a86b06 body=138 status=ok
// SIG undefined FUN_140a86b06(void)

void FUN_140a86b06(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140a86b90 FUN_140a86b90 body=290 status=ok
// SIG undefined FUN_140a86b90(void)

undefined8 FUN_140a86b90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140a86cab;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140a86cab;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140a86cab:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140a86c56;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_140a86c56;
    }
  }
  uVar6 = 0;
LAB_140a86c56:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a86cb4 FUN_140a86cb4 body=1716 status=ok
// SIG undefined FUN_140a86cb4(void)

void FUN_140a86cb4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  float fVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  
  if (*(int *)(param_1 + 200) == *(int *)(param_1 + 0xf4)) {
    return;
  }
  lVar13 = *param_2;
  lVar18 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar18 = param_1 + 0xf8;
  }
  iVar16 = *(int *)(lVar18 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) * 4);
  if (iVar16 == -1) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0xc0);
  lVar18 = *plVar1;
  iVar21 = iVar16;
  while (lVar13 != *(longlong *)(lVar18 + (longlong)iVar21 * 0x30)) {
    iVar21 = *(int *)((longlong)iVar21 * 0x30 + lVar18 + 0x28);
    if (iVar21 == -1) {
      return;
    }
  }
  do {
    lVar27 = lVar18 + (longlong)iVar16 * 0x30;
    if (lVar13 == *(longlong *)(lVar18 + (longlong)iVar16 * 0x30)) goto LAB_140a86d60;
    iVar16 = *(int *)(lVar27 + 0x28);
  } while (iVar16 != -1);
  lVar27 = 0;
LAB_140a86d60:
  plVar2 = (longlong *)(param_1 + 0x110);
  uVar12 = *(uint *)(lVar27 + 0x18);
  uVar14 = *(ulonglong *)(lVar27 + 0x10);
  uVar15 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  uVar15 = uVar12 >> 0xd ^ (uVar15 >> 0x10 ^ uVar15) - uVar12;
  uVar19 = uVar15 << 8 ^ (-0x61c88647 - uVar12) - uVar15;
  uVar22 = uVar19 >> 0xd ^ (uVar12 - uVar15) - uVar19;
  uVar24 = uVar22 >> 0xc ^ (uVar15 - uVar19) - uVar22;
  uVar15 = uVar24 << 0x10 ^ (uVar19 - uVar22) - uVar24;
  uVar19 = uVar15 >> 5 ^ (uVar22 - uVar24) - uVar15;
  uVar22 = uVar19 >> 3 ^ (uVar24 - uVar15) - uVar19;
  uVar15 = uVar22 << 10 ^ (uVar15 - uVar19) - uVar22;
  uVar15 = uVar15 >> 0xf ^ uVar19 - (uVar22 + uVar15);
  iVar21 = *(int *)(param_1 + 0x118);
  iVar16 = *(int *)(param_1 + 0x144);
  if (iVar21 != iVar16) {
    lVar13 = param_1 + 0x148;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x150);
    }
    iVar25 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & uVar15) * 4);
    if (iVar25 != -1) {
      lVar13 = *plVar2;
      if (*(longlong *)(lVar27 + 8) == 0) {
        uVar14 = 0;
      }
      do {
        lVar17 = (longlong)iVar25;
        lVar18 = *(longlong *)(lVar13 + lVar17 * 0x28);
        uVar20 = 0;
        if (lVar18 != 0) {
          uVar20 = *(ulonglong *)(lVar13 + 8 + lVar17 * 0x28);
        }
        if (((lVar18 == *(longlong *)(lVar27 + 8)) && (uVar20 == uVar14)) &&
           (lVar18 = lVar13 + lVar17 * 0x28, *(uint *)(lVar18 + 0x10) == uVar12)) {
          if (lVar18 != 0) goto LAB_140a8700b;
          break;
        }
        iVar25 = *(int *)(lVar13 + 0x20 + lVar17 * 0x28);
      } while (iVar25 != -1);
    }
  }
  if (iVar16 == 0) {
    *(int *)(param_1 + 0x118) = iVar21 + 1;
    if (*(int *)(param_1 + 0x11c) == iVar21) {
      FUN_140549c28(plVar2,iVar21);
    }
    lVar18 = (longlong)iVar21;
    iVar16 = FUN_144a54ea4(param_1 + 0x120,1);
    lVar13 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar13 = param_1 + 0x120;
    }
    iVar25 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar25 = iVar16;
    }
    bVar7 = (byte)iVar16 & 0x1f;
    puVar3 = (uint *)(lVar13 + (longlong)(iVar25 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar21 = *(int *)(param_1 + 0x140);
    lVar18 = (longlong)iVar21;
    iVar25 = *(int *)(*(longlong *)(param_1 + 0x110) + 4 + lVar18 * 0x28);
    *(int *)(param_1 + 0x140) = iVar25;
    *(int *)(param_1 + 0x144) = iVar16 + -1;
    if (iVar16 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar25 * 0x28) = 0xffffffff;
    }
  }
  lVar13 = param_1 + 0x120;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x130);
  }
  iVar16 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar16 = iVar21;
  }
  puVar3 = (uint *)(lVar13 + (longlong)(iVar16 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar21 & 0x1f);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x110) + lVar18 * 0x28);
  lVar13 = *(longlong *)(lVar27 + 8);
  *plVar4 = lVar13;
  if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) {
    FUN_1456cec3c();
  }
  lVar13 = *(longlong *)(lVar27 + 0x10);
  plVar4[1] = lVar13;
  iVar16 = *(int *)(lVar27 + 0x18);
  *(int *)(plVar4 + 2) = iVar16;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 4) = 0xffffffff;
  uVar12 = *(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x144);
  if (1 < uVar12) {
    lVar18 = param_1 + 0x148;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x150);
    }
    iVar25 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & uVar15) * 4);
    if (iVar25 != -1) {
      lVar18 = *plVar2;
      if (*plVar4 == 0) {
        lVar13 = 0;
      }
      do {
        lVar26 = (longlong)iVar25;
        lVar17 = *(longlong *)(lVar18 + lVar26 * 0x28);
        lVar28 = 0;
        if (lVar17 != 0) {
          lVar28 = *(longlong *)(lVar18 + 8 + lVar26 * 0x28);
        }
        if (((lVar17 == *plVar4) && (lVar28 == lVar13)) &&
           (puVar5 = (undefined4 *)(lVar18 + lVar26 * 0x28), puVar5[4] == iVar16)) {
          lVar13 = *plVar4;
          uVar8 = *(undefined4 *)((longlong)plVar4 + 4);
          lVar18 = plVar4[1];
          uVar9 = *(undefined4 *)((longlong)plVar4 + 0xc);
          uVar10 = *(undefined4 *)((longlong)plVar4 + 0x14);
          lVar17 = plVar4[3];
          uVar11 = *(undefined4 *)((longlong)plVar4 + 0x1c);
          puVar5[4] = (int)plVar4[2];
          puVar5[5] = uVar10;
          puVar5[6] = (int)lVar17;
          puVar5[7] = uVar11;
          *puVar5 = (int)lVar13;
          puVar5[1] = uVar8;
          puVar5[2] = (int)lVar18;
          puVar5[3] = uVar9;
          FUN_1406662d8(plVar2);
          goto LAB_140a86ff9;
        }
        iVar25 = *(int *)(lVar18 + 0x20 + lVar26 * 0x28);
      } while (iVar25 != -1);
    }
  }
  if (uVar12 < 4) {
    iVar16 = 1;
  }
  else {
    uVar14 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar16 <= *(int *)(param_1 + 0x158))) {
    uVar15 = *(int *)(param_1 + 0x158) - 1U & uVar15;
    *(uint *)((longlong)plVar4 + 0x24) = uVar15;
    lVar13 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar13 = param_1 + 0x148;
    }
    *(undefined4 *)(plVar4 + 4) =
         *(undefined4 *)
          (lVar13 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar15) * 4);
    lVar13 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar13 = param_1 + 0x148;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar15) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 0x158) = iVar16;
    FUN_145769690(plVar2);
  }
LAB_140a86ff9:
  lVar18 = *plVar2 + (longlong)iVar21 * 0x28;
LAB_140a8700b:
  *(undefined4 *)(lVar18 + 0x1c) = 0;
  *(undefined1 *)(lVar18 + 0x18) = 0;
  iVar16 = *(int *)(param_3 + 0x138);
  if (0 < (longlong)iVar16) {
    lVar13 = *(longlong *)(param_3 + 0x130);
    lVar17 = 0;
    do {
      if (((*(byte *)(lVar13 + 0xad + lVar17) & 1) != 0) &&
         (fVar6 = *(float *)(lVar13 + 8 + lVar17), fVar6 * fVar6 < *(float *)(lVar27 + 0x20))) {
        *(undefined1 *)(lVar18 + 0x18) = 1;
      }
      lVar17 = lVar17 + 0x100;
    } while ((longlong)iVar16 * 0x100 != lVar17);
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    lVar13 = *param_2;
    lVar18 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x100);
    }
    iVar16 = *(int *)(lVar18 + ((longlong)((int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13) &
                               (longlong)*(int *)(param_1 + 0x108) - 1U) * 4);
    if (iVar16 != -1) {
      lVar27 = *plVar1;
      do {
        lVar17 = lVar27 + (longlong)iVar16 * 0x30;
        if (lVar13 == *(longlong *)(lVar27 + (longlong)iVar16 * 0x30)) {
          iVar21 = *(int *)(lVar18 + (longlong)*(int *)(lVar17 + 0x2c) * 4);
          if (iVar21 == iVar16) {
            piVar23 = (int *)((longlong)*(int *)(lVar17 + 0x2c) * 4 + lVar18);
          }
          else {
            do {
              piVar23 = (int *)(lVar27 + (longlong)iVar21 * 0x30 + 0x28);
              iVar21 = *piVar23;
            } while (iVar21 != iVar16);
          }
          *piVar23 = *(int *)(lVar17 + 0x28);
          FUN_140a87368(plVar1);
          return;
        }
        iVar16 = *(int *)(lVar17 + 0x28);
      } while (iVar16 != -1);
    }
  }
  return;
}



// FUNCTION 140a87368 FUN_140a87368 body=124 status=ok
// SIG undefined FUN_140a87368(void)

void FUN_140a87368(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 140a873e4 FUN_140a873e4 body=616 status=ok
// SIG undefined FUN_140a873e4(void)

void FUN_140a873e4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a8764e();
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(param_1 + 0xbf8) = param_2;
    if (param_2 == (longlong *)0x0) goto LAB_140a87525;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong **)(param_1 + 0xbf8) = param_2;
  }
  if (DAT_14cb71bf8 != '\x01') goto LAB_140a87525;
  lVar7 = (**(code **)(*param_2 + 0x180))(param_2);
  uVar4 = DAT_14cb71f80;
  bVar3 = true;
  if (lVar7 == 0) {
LAB_140a8756f:
    local_40 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_40,uVar4,lVar7);
    plVar8 = local_38;
    if ((local_40 == 0) || (local_38 == (longlong *)0x0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar9 = local_38 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_38 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_140a8756f;
    iVar6 = (int)plVar8[1];
    do {
      plVar9 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar9 = plVar8;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    if (plVar9 == (longlong *)0x0) goto LAB_140a8756f;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar3 = false;
  }
  *(longlong *)(param_1 + 0xdc8) = local_40;
  plVar8 = *(longlong **)(param_1 + 0xdd0);
  if (plVar9 == plVar8) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar8 = plVar9;
        goto joined_r0x000140a87561;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xdd0) = plVar9;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x000140a87561:
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if (!bVar3) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_140a87525:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8764e FUN_140a8764e body=91 status=ok
// SIG undefined FUN_140a8764e(void)

void FUN_140a8764e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140a876aa();
  if (param_2 != 0) {
    lVar1 = FUN_140890cca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_140a8768d;
    }
  }
  param_2 = 0;
LAB_140a8768d:
  *(longlong *)(param_1 + 0xbd0) = param_2;
  return;
}



// FUNCTION 140a876aa FUN_140a876aa body=397 status=ok
// SIG undefined FUN_140a876aa(void)

void FUN_140a876aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  if (param_2 != 0) {
    lVar1 = FUN_140a87838();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_140a8770a;
    }
  }
  lVar1 = 0;
LAB_140a8770a:
  *(longlong *)(param_1 + 0xad0) = lVar1;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb63950 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464ec72a;
      local_48 = &LAB_1486f5f75;
      local_50 = &LAB_140945686;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
      FUN_1406c6972(*(undefined8 *)(param_1 + 0xad0),lVar1 + 0x1288);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140a8791e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a87838 FUN_140a87838 body=228 status=ok
// SIG undefined FUN_140a87838(void)

longlong FUN_140a87838(void)

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
  if (DAT_14cb5e180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1458e0a3e;
    local_38 = &LAB_14869ecae;
    local_40 = FUN_14185272f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x630;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAnimInstance",&DAT_14cb5e180,FUN_1464dfaa0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8791e FUN_140a8791e body=134 status=ok
// SIG undefined FUN_140a8791e(void)

void FUN_140a8791e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140a879a4();
  if (*(longlong *)(param_1 + 0x998) != 0) goto LAB_140a87939;
  if (param_2 == 0) {
LAB_140a87993:
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14130c340();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) goto LAB_140a87993;
    lVar1 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x998) = lVar1;
LAB_140a87939:
  FUN_140a88516(param_1 + 0x968,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa8));
  return;
}



// FUNCTION 140a879a4 FUN_140a879a4 body=497 status=ok
// SIG undefined FUN_140a879a4(void)

void FUN_140a879a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 local_40 [16];
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    if (DAT_14c9a51d8 == 0) {
      local_60 = &local_30;
      local_30 = FUN_1433d5220;
      local_50 = FUN_142b32f24;
      local_58 = &LAB_1462ac436;
      local_68 = &LAB_1470c7d1d;
      local_70 = &LAB_1462ac43b;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000008;
      local_90 = 0x10;
      local_98 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    if ((*(int *)(DAT_14c9a51d8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) == DAT_14c9a51d8 + 0x30)) {
      lVar5 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_140a87a14;
    }
  }
  lVar5 = 0;
LAB_140a87a14:
  *(longlong *)(param_1 + 0x950) = lVar5;
  lVar5 = *(longlong *)(param_1 + 0x948);
  if (lVar5 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0xa8);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140a87d46();
      lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        uVar2 = FUN_140a87d46();
        lVar4 = FUN_144718840(lVar3,uVar2);
        lVar6 = 0;
        if (lVar3 != lVar4) {
          lVar6 = lVar4;
        }
      }
      FUN_140a88124(local_40,lVar6);
      FUN_140a87b96(lVar5,local_40,1);
      lVar5 = *(longlong *)(param_1 + 0x948);
    }
    FUN_140a87c14(lVar5,param_1,0);
  }
  FUN_14005d520(param_1,param_2);
  FUN_140a87e2c(param_1);
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a87b96 FUN_140a87b96 body=125 status=ok
// SIG undefined FUN_140a87b96(void)

void FUN_140a87b96(longlong param_1,uint *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_2[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      FUN_140a887f4(param_1 + 0x120);
      if (param_3 != '\0') {
        FUN_1406c717c(param_1);
      }
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
  }
  return;
}



// FUNCTION 140a87c14 FUN_140a87c14 body=305 status=ok
// SIG undefined FUN_140a87c14(void)

void FUN_140a87c14(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      FUN_1405ea3a2(param_1,param_1 + 0xd0);
      *(undefined2 *)(param_1 + 0xa8) = 0x100;
    }
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    if ((*(char *)(param_1 + 0xa9) != '\0') ||
       (*(int *)(param_2 + 0x8f0) - *(int *)(param_2 + 0x91c) !=
        *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104))) {
      FUN_1405ea0f6(param_2 + 0x8e8);
      iVar1 = *(int *)(param_2 + 0x940);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_2 + 0x938);
        lVar3 = 0;
        do {
          if (**(longlong **)(lVar2 + lVar3) != 0) {
            **(undefined8 **)(lVar2 + 8 + lVar3) = 0;
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar3);
      }
      *(undefined1 *)(param_1 + 0xa9) = 0;
    }
  }
  else {
    FUN_1405ea3a2(param_1,param_1 + 0xd0);
    FUN_1405ea0f6(param_2 + 0x8e8);
    iVar1 = *(int *)(param_2 + 0x940);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x938);
      lVar3 = 0;
      do {
        if (**(longlong **)(lVar2 + lVar3) != 0) {
          **(undefined8 **)(lVar2 + 8 + lVar3) = 0;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar3);
    }
    *(undefined2 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 140a87d46 FUN_140a87d46 body=228 status=ok
// SIG undefined FUN_140a87d46(void)

longlong FUN_140a87d46(void)

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
  if (DAT_14c9a46f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470bc4ab;
    local_40 = FUN_1462a8450;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxAnimSetProvider",&DAT_14c9a46f0,&DAT_1470bc4aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a46f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a87e2c FUN_140a87e2c body=287 status=ok
// SIG undefined FUN_140a87e2c(void)

void FUN_140a87e2c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar1 = (longlong *)(param_1 + 0x958);
  iVar4 = *(int *)(param_1 + 0x964);
  FUN_140a87f4b(*(undefined8 *)(param_1 + 0x958),*(undefined4 *)(param_1 + 0x960));
  *(undefined4 *)(param_1 + 0x960) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0x964) != 0)) {
    FUN_1470d9e62(plVar1,0);
  }
  if (*(longlong *)(param_1 + 0x950) != 0) {
    lVar10 = FUN_140a88303();
    iVar4 = *(int *)(lVar10 + 0x28);
    if ((longlong)iVar4 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20);
      lVar11 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x960);
        *(uint *)(param_1 + 0x960) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x964) < iVar5 + 1U) {
          FUN_140a87fb2(plVar1,iVar5);
        }
        puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x28);
        *puVar2 = 0;
        iVar5 = *(int *)(lVar10 + 8 + lVar11);
        uVar6 = *(undefined8 *)(lVar10 + lVar11);
        *(int *)(puVar2 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1408cdb42(puVar2,iVar5,0);
          FUN_1408cdabe(*puVar2,uVar6);
        }
        puVar3 = (undefined4 *)(lVar10 + 0x10 + lVar11);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        *(undefined4 *)(puVar2 + 2) = *puVar3;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uVar7;
        *(undefined4 *)(puVar2 + 3) = uVar8;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar9;
        *(undefined1 *)(puVar2 + 4) = 1;
        lVar11 = lVar11 + 0x20;
      } while ((longlong)iVar4 * 0x20 != lVar11);
    }
  }
  return;
}



// FUNCTION 140a87f4b FUN_140a87f4b body=54 status=ok
// SIG undefined FUN_140a87f4b(void)

void FUN_140a87f4b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140a87f81(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140a87f81 FUN_140a87f81 body=49 status=ok
// SIG undefined FUN_140a87f81(void)

void FUN_140a87f81(longlong param_1,int param_2)

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



// FUNCTION 140a87fb2 FUN_140a87fb2 body=370 status=ok
// SIG undefined FUN_140a87fb2(void)

void FUN_140a87fb2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a8803b;
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
LAB_140a8803b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140a88124 FUN_140a88124 body=478 status=ok
// SIG undefined FUN_140a88124(void)

uint * FUN_140a88124(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
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
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 != 0)) {
    if (DAT_14c927740 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_146856450;
      local_60 = FUN_1427b121c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000021;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) == DAT_14c927740 + 0x30)) {
      uVar3 = *(uint *)(lVar4 + 0xc);
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
        uVar5 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar6 = uVar3 == 0;
        if (bVar6) {
          *(uint *)(lVar4 + 0x10) = uVar5;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar6) {
          uVar3 = uVar5;
        }
      }
      goto LAB_140a8815b;
    }
  }
  *param_1 = 0;
  uVar3 = 0;
LAB_140a8815b:
  param_1[1] = uVar3;
  cVar2 = FUN_140076fba(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a88303 FUN_140a88303 body=529 status=ok
// SIG undefined FUN_140a88303(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140a88303(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9a6228 == (longlong *)0x0) {
    _DAT_14c9a6258 = 0;
    _DAT_14c9a6260 = 0;
    _DAT_14c9a6248 = 0;
    _DAT_14c9a6250 = 0;
    DAT_14c9a6238 = 0;
    _DAT_14c9a6240 = 0;
    _DAT_14c9a6230 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14c9a6238);
    _DAT_14c9a6248 = CONCAT44(DAT_14c9a6248_4,0xffffffff);
    _DAT_14c9a6230 = &PTR_FUN_14a18e380;
    _DAT_14c9a6250 = 0;
    _DAT_14c9a6258 = 0;
    _DAT_14c9a6260 = 0x459c40000000000a;
    DAT_14c9a6228 = (longlong *)&DAT_14c9a6230;
  }
  plVar1 = DAT_14c9a6228;
  plVar4 = DAT_14c9a6228 + 1;
  cVar2 = (char)DAT_14c9a6228[2];
  plVar5 = plVar4;
  if (cVar2 == '\0') {
LAB_140a8833c:
    if (*plVar5 == 0) goto LAB_140a88478;
    plVar5 = plVar4;
    if (cVar2 == '\0') {
LAB_140a88351:
      if (*plVar5 == 0) goto LAB_140a8840d;
      if ((((int)DAT_14c9a6228[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar4 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_140a88369;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)(*plVar4 + 0x30);
        goto LAB_140a88351;
      }
LAB_140a8840d:
      if (((DAT_14c9a1ab0 == 0) || (*plVar4 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_140a88369;
      puVar6 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar1,puVar6);
    }
    if (cVar2 == '\0') goto LAB_140a88369;
  }
  else {
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      goto LAB_140a8833c;
    }
LAB_140a88478:
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140a88369;
    FUN_144a884d2(local_58,"def_globals_animperf",0);
    FUN_140024ada(local_58,plVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140a88369:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 140a88516 FUN_140a88516 body=732 status=ok
// SIG undefined FUN_140a88516(void)

void FUN_140a88516(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (longlong *)0x0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar4;
      }
    }
    param_1[1] = uVar2;
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
    lVar5 = (**(code **)(*param_2 + 0x288))(param_2,DAT_14cb1c498);
    if (lVar5 != 0) {
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
      lVar3 = FUN_144718840(lVar5,DAT_14cb1c498);
      if (lVar5 != lVar3) goto LAB_140a885cb;
    }
  }
  lVar3 = 0;
LAB_140a885cb:
  FUN_14036fb34(&local_38,lVar3);
  param_1[6] = (uint)local_38;
  param_1[7] = local_38._4_4_;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  if ((((*(longlong **)(param_1 + 8) != (longlong *)0x0) && (param_1[7] != 0)) &&
      (uVar2 = param_1[6], -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0)) &&
      ((*(uint *)(lVar5 + 0x10) == param_1[7] && ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar5 + 0x168);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a887f4 FUN_140a887f4 body=120 status=ok
// SIG undefined FUN_140a887f4(void)

ulonglong FUN_140a887f4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  uVar6 = (ulonglong)iVar2;
  if (uVar6 != 0) {
    lVar7 = 0;
    iVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + 8 + lVar7) == param_2[1]) {
        if (iVar5 != 1) {
          uVar6 = (ulonglong)(uint)-iVar5;
          goto LAB_140a88833;
        }
        break;
      }
      iVar5 = iVar5 + -1;
      lVar7 = lVar7 + 0x10;
    } while (uVar6 << 4 != lVar7);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140a8886c(param_1,iVar2);
    lVar4 = *param_1;
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
LAB_140a88833:
  return uVar6 & 0xffffffff;
}



// FUNCTION 140a8886c FUN_140a8886c body=269 status=ok
// SIG undefined FUN_140a8886c(void)

void FUN_140a8886c(longlong param_1,int param_2)

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



// FUNCTION 140a8897a FUN_140a8897a body=139 status=ok
// SIG undefined FUN_140a8897a(void)

void FUN_140a8897a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 800);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x318);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  lVar2 = FUN_140a88a2a();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1401bd7a2(lVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a88a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2,lVar2,*(code **)(*plVar3 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 140a88a06 FUN_140a88a06 body=1 status=ok
// SIG undefined FUN_140a88a06(void)

void FUN_140a88a06(void)

{
  return;
}



// FUNCTION 140a88a2a FUN_140a88a2a body=195 status=ok
// SIG undefined FUN_140a88a2a(void)

longlong FUN_140a88a2a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x4c0);
    if (0 < (longlong)iVar1) {
      lVar5 = 1;
      while (*(longlong *)(*(longlong *)(lVar2 + 0x4b8) + -8 + lVar5 * 8) != param_2) {
        bVar6 = lVar5 == iVar1;
        lVar5 = lVar5 + 1;
        if (bVar6) {
          return 0;
        }
      }
      if (((int)lVar5 < iVar1) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x4b8) + lVar5 * 8), lVar2 != 0)) {
        piVar4 = &DAT_14c9485f0;
        if (*(int **)(param_2 + 8) != (int *)0x0) {
          piVar4 = *(int **)(param_2 + 8);
        }
        piVar3 = (int *)&DAT_14c948618;
        if (((*piVar4 != 0) && (iVar1 = piVar4[1], iVar1 != 0)) && (*piVar4 != DAT_14c948000)) {
          if ((iVar1 < 2) && (piVar4[9] < 1)) {
            piVar4 = piVar4 + 2;
          }
          else {
            piVar4 = *(int **)(piVar4 + 6);
          }
          if (0 < iVar1) {
            piVar3 = piVar4;
          }
        }
        if ((*(int *)(lVar2 + 0x3b0) == *piVar3) && (*(int *)(lVar2 + 0x3b8) == piVar3[2])) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a88b2a FUN_140a88b2a body=112 status=ok
// SIG undefined FUN_140a88b2a(void)

void FUN_140a88b2a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 140a88b9a FUN_140a88b9a body=641 status=ok
// SIG undefined FUN_140a88b9a(void)

void FUN_140a88b9a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [40];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 8) == '\0') {
    local_80 = *(undefined4 *)(param_1 + 0x14);
    local_88 = *(undefined8 *)(param_1 + 0xc);
  }
  else {
    local_80 = *(undefined4 *)(param_1 + 0x20);
    local_88 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar5 = FUN_140823ef2(param_1,param_4,&local_88);
  *(undefined1 *)(lVar5 + 0x30) = 1;
  plVar6 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41bb30;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14afff040;
  *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x34) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x3c) = 0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(plVar6 + 5) = 1;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar4 + 1U) {
    FUN_140822376((longlong *)(lVar5 + 0x48),iVar4);
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  FUN_140a88e1c(param_4 + 0x2c0,local_78,param_4,param_1);
  uVar7 = 0;
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 0:
    uVar7 = DAT_14cb86278;
    break;
  case 1:
    uVar7 = DAT_14cb86200;
    break;
  case 3:
    uVar7 = DAT_14cb86210;
    break;
  case 4:
    uVar7 = DAT_14cb86218;
  }
  iVar4 = (int)plVar6[4];
  *(uint *)(plVar6 + 4) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar6 + 0x24) < iVar4 + 1U) {
    FUN_140823334(plVar6 + 3,iVar4);
  }
  puVar3 = (undefined8 *)(plVar6[3] + (longlong)iVar4 * 0x28);
  *puVar3 = uVar7;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_98[0] = 1;
  local_8c = 1;
  local_94 = DAT_14cb7c588;
  FUN_140821fec(puVar3,local_78,local_98,0);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a88e1c FUN_140a88e1c body=1421 status=ok
// SIG undefined FUN_140a88e1c(void)

ulonglong * FUN_140a88e1c(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  byte bVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong *plVar28;
  ulonglong *puVar29;
  int iVar30;
  int iVar31;
  longlong *plVar32;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar32 = *(longlong **)(param_1 + 0xb8);
  if (plVar32 == (longlong *)0x0) {
    puVar21 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar21[4] = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar21[8] = 0;
    puVar21[9] = 0;
    *(undefined4 *)((longlong)puVar21 + 0x2c) = 0x80;
    *(undefined4 *)(puVar21 + 6) = 0xffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar21;
    FUN_1403d9fee(0);
    plVar32 = *(longlong **)(param_1 + 0xb8);
  }
  iVar20 = (int)plVar32[1];
  iVar31 = *(int *)((longlong)plVar32 + 0x34);
  if (iVar20 != iVar31) {
    uVar19 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    plVar23 = plVar32 + 7;
    if ((longlong *)plVar32[8] != (longlong *)0x0) {
      plVar23 = (longlong *)plVar32[8];
    }
    iVar18 = *(int *)((longlong)plVar23 +
                     (ulonglong)((int)plVar32[9] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
    if (iVar18 != -1) {
      do {
        if (*(ulonglong *)(*plVar32 + (longlong)iVar18 * 0x48) == param_4) goto LAB_140a8902c;
        iVar18 = *(int *)(*plVar32 + (longlong)iVar18 * 0x48 + 0x40);
      } while (iVar18 != -1);
    }
  }
  FUN_140a893aa(param_1,local_80,param_3);
  if (*(int *)((longlong)plVar32 + 0x34) == 0) {
    iVar20 = (int)plVar32[1];
    *(int *)(plVar32 + 1) = iVar20 + 1;
    if (*(int *)((longlong)plVar32 + 0xc) == iVar20) {
      FUN_14021b4e8(plVar32,iVar20);
    }
    iVar31 = (int)plVar32[5];
    if (iVar31 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = iVar31 + 0x1e;
      if (-1 < iVar31 + -1) {
        iVar18 = iVar31 + -1;
      }
      iVar18 = iVar18 >> 5;
    }
    plVar23 = plVar32 + 2;
    iVar25 = iVar31 + 1;
    iVar30 = iVar31 + 0x1f;
    if (-1 < iVar31) {
      iVar30 = iVar31;
    }
    if (iVar30 >> 5 == iVar18) {
      *(int *)(plVar32 + 5) = iVar25;
    }
    else {
      if (*(int *)((longlong)plVar32 + 0x2c) <= iVar31) {
        if (iVar31 + 0x20U < 0xa0) {
          iVar25 = 0x80;
          iVar18 = iVar31;
        }
        else {
          uVar19 = iVar31 + 0x20U >> 5;
          local_88 = (ulonglong)uVar19;
          if (*(int *)((longlong)plVar32 + 0x2c) + 0x1fU < 0xa0) {
            uVar27 = 4;
            if (4 < uVar19) {
              uVar27 = uVar19;
            }
          }
          else {
            uVar27 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar26 = FUN_144a3809e(uVar27 << 2,0);
          iVar18 = (int)(uVar26 >> 2);
          iVar25 = -0x20;
          if ((int)local_88 <= iVar18) {
            iVar25 = iVar18 << 5;
          }
          iVar18 = (int)plVar32[5];
        }
        *(int *)((longlong)plVar32 + 0x2c) = iVar25;
        FUN_1446efbd8(plVar23,iVar18);
        iVar25 = (int)plVar32[5] + 1;
      }
      iVar18 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      *(int *)(plVar32 + 5) = iVar25;
      if (iVar25 % 0x20 != 0) {
        plVar28 = (longlong *)plVar32[4];
        if ((longlong *)plVar32[4] == (longlong *)0x0) {
          plVar28 = plVar23;
        }
        bVar24 = -(char)(iVar25 % 0x20);
        *(uint *)((longlong)plVar28 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar28 + (longlong)(iVar18 >> 5) * 4) << (bVar24 & 0x1f)) >>
             (bVar24 & 0x1f);
      }
    }
    lVar22 = (longlong)iVar20;
    if ((longlong *)plVar32[4] != (longlong *)0x0) {
      plVar23 = (longlong *)plVar32[4];
    }
    bVar24 = (byte)iVar31 & 0x1f;
    puVar2 = (uint *)((longlong)plVar23 + (longlong)(iVar30 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
  }
  else {
    iVar20 = (int)plVar32[6];
    lVar22 = (longlong)iVar20;
    iVar31 = *(int *)(*plVar32 + 4 + lVar22 * 0x48);
    *(int *)(plVar32 + 6) = iVar31;
    iVar18 = *(int *)((longlong)plVar32 + 0x34) + -1;
    *(int *)((longlong)plVar32 + 0x34) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(*plVar32 + (longlong)iVar31 * 0x48) = 0xffffffff;
    }
  }
  iVar31 = 1;
  plVar23 = plVar32 + 2;
  if ((longlong *)plVar32[4] != (longlong *)0x0) {
    plVar23 = (longlong *)plVar32[4];
  }
  iVar18 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar18 = iVar20;
  }
  puVar2 = (uint *)((longlong)plVar23 + (longlong)(iVar18 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar20 & 0x1f);
  lVar3 = *plVar32;
  puVar29 = (ulonglong *)(lVar3 + lVar22 * 0x48);
  *puVar29 = param_4;
  puVar1 = (ulonglong *)(lVar3 + lVar22 * 0x48);
  FUN_14014e938(puVar1 + 1,local_80);
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  uVar26 = *puVar1;
  uVar19 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  uVar19 = uVar19 >> 0x10 ^ uVar19;
  uVar27 = (int)plVar32[1] - *(int *)((longlong)plVar32 + 0x34);
  if (uVar27 != 1) {
    if ((int)plVar32[1] != *(int *)((longlong)plVar32 + 0x34)) {
      plVar23 = plVar32 + 7;
      if ((longlong *)plVar32[8] != (longlong *)0x0) {
        plVar23 = (longlong *)plVar32[8];
      }
      iVar18 = *(int *)((longlong)plVar23 + (ulonglong)((int)plVar32[9] - 1U & uVar19) * 4);
      if (iVar18 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar32 + (longlong)iVar18 * 0x48);
          if (*puVar1 == uVar26) {
            if (puVar1[6] != 0) {
              FUN_1400020a8();
            }
            uVar26 = *puVar29;
            uVar4 = *(undefined4 *)((longlong)puVar29 + 4);
            uVar12 = puVar29[1];
            uVar5 = *(undefined4 *)((longlong)puVar29 + 0xc);
            uVar13 = puVar29[2];
            uVar6 = *(undefined4 *)((longlong)puVar29 + 0x14);
            uVar14 = puVar29[3];
            uVar7 = *(undefined4 *)((longlong)puVar29 + 0x1c);
            uVar15 = puVar29[4];
            uVar8 = *(undefined4 *)((longlong)puVar29 + 0x24);
            uVar16 = puVar29[5];
            uVar9 = *(undefined4 *)((longlong)puVar29 + 0x2c);
            uVar10 = *(undefined4 *)((longlong)puVar29 + 0x34);
            uVar17 = puVar29[7];
            uVar11 = *(undefined4 *)((longlong)puVar29 + 0x3c);
            *(int *)(puVar1 + 6) = (int)puVar29[6];
            *(undefined4 *)((longlong)puVar1 + 0x34) = uVar10;
            *(int *)(puVar1 + 7) = (int)uVar17;
            *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar11;
            *(int *)(puVar1 + 4) = (int)uVar15;
            *(undefined4 *)((longlong)puVar1 + 0x24) = uVar8;
            *(int *)(puVar1 + 5) = (int)uVar16;
            *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar9;
            *(int *)(puVar1 + 2) = (int)uVar13;
            *(undefined4 *)((longlong)puVar1 + 0x14) = uVar6;
            *(int *)(puVar1 + 3) = (int)uVar14;
            *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar7;
            *(int *)puVar1 = (int)uVar26;
            *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
            *(int *)(puVar1 + 1) = (int)uVar12;
            *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
            FUN_1489186e2(plVar32);
            goto LAB_140a8900f;
          }
          iVar18 = (int)puVar1[8];
        } while (iVar18 != -1);
      }
    }
    if (3 < uVar27) {
      uVar26 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar31 = 1 << ((byte)lVar22 & 0x1f);
    }
  }
  if (((int)uVar27 < 1) || (iVar31 <= (int)plVar32[9])) {
    uVar19 = (int)plVar32[9] - 1U & uVar19;
    *(uint *)((longlong)puVar29 + 0x44) = uVar19;
    plVar23 = (longlong *)plVar32[8];
    if ((longlong *)plVar32[8] == (longlong *)0x0) {
      plVar23 = plVar32 + 7;
    }
    *(undefined4 *)(puVar29 + 8) =
         *(undefined4 *)
          ((longlong)plVar23 + ((longlong)(int)plVar32[9] - 1U & (longlong)(int)uVar19) * 4);
    plVar23 = (longlong *)plVar32[8];
    if ((longlong *)plVar32[8] == (longlong *)0x0) {
      plVar23 = plVar32 + 7;
    }
    *(int *)((longlong)plVar23 + ((longlong)(int)plVar32[9] - 1U & (longlong)(int)uVar19) * 4) =
         iVar20;
  }
  else {
    *(int *)(plVar32 + 9) = iVar31;
    FUN_140a89550(plVar32);
  }
LAB_140a8900f:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar32 = *(longlong **)(param_1 + 0xb8);
  iVar20 = (int)plVar32[1];
  iVar31 = *(int *)((longlong)plVar32 + 0x34);
LAB_140a8902c:
  if (iVar20 != iVar31) {
    uVar19 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    plVar23 = plVar32 + 7;
    if ((longlong *)plVar32[8] != (longlong *)0x0) {
      plVar23 = (longlong *)plVar32[8];
    }
    iVar20 = *(int *)((longlong)plVar23 +
                     (ulonglong)((int)plVar32[9] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
    if (iVar20 != -1) {
      do {
        puVar29 = (ulonglong *)(*plVar32 + (longlong)iVar20 * 0x48);
        if (*puVar29 == param_4) break;
        iVar20 = (int)puVar29[8];
        puVar29 = (ulonglong *)0x0;
      } while (iVar20 != -1);
      goto LAB_140a89096;
    }
  }
  puVar29 = (ulonglong *)0x0;
LAB_140a89096:
  *(undefined2 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(int *)(param_2 + 1) = (int)puVar29[2];
  *param_2 = puVar29[1];
  FUN_1447715ec(param_2 + 2,puVar29 + 3);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a893aa FUN_140a893aa body=421 status=ok
// SIG undefined FUN_140a893aa(void)

undefined2 * FUN_140a893aa(longlong param_1,undefined2 *param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  int local_88;
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_144928d62(&local_58,0,&DAT_14cb7bd98);
  piVar2 = &DAT_14c9485f0;
  if (*(int **)(param_3 + 8) != (int *)0x0) {
    piVar2 = *(int **)(param_3 + 8);
  }
  if (((*piVar2 != 0) && (iVar1 = piVar2[1], iVar1 != 0)) && (*piVar2 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar2[9] < 1)) {
      piVar2 = piVar2 + 2;
    }
    else {
      piVar2 = *(int **)(piVar2 + 6);
    }
    if (0 < iVar1) {
      local_88 = piVar2[2];
      local_90 = *(undefined8 *)piVar2;
      goto LAB_140a89454;
    }
  }
  local_88 = DAT_14c948620;
  local_90 = DAT_14c948618;
LAB_140a89454:
  FUN_144928d62(&local_58,1,&local_90);
  FUN_144928d62(&local_58,2,&DAT_14cb7bdb0);
  local_88 = DAT_14cb86a58;
  local_90 = DAT_14cb86a50;
  if ((int)DAT_14cb86a50 != 0) {
    local_88 = *(undefined4 *)(param_1 + 0x54);
  }
  FUN_144928d62(&local_58,3,&local_90);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_1447a97f4(local_80,&local_58);
  FUN_14071d490(local_80,param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a89550 FUN_140a89550 body=679 status=ok
// SIG undefined FUN_140a89550(void)

void FUN_140a89550(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_140a895b4;
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
LAB_140a895b4:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x48);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x44 + lVar12 * 0x48) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x40 + lVar12 * 0x48) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 140a897f8 FUN_140a897f8 body=857 status=ok
// SIG undefined FUN_140a897f8(void)

void FUN_140a897f8(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_7c;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  lVar10 = FUN_140823ef2(param_1,param_4,&DAT_14c948618);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar6 + 0xc80) & 1) == 0) {
    plVar11 = (longlong *)FUN_14001cc68(0x98,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b41bb70;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14b00bf40;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    *(undefined4 *)(plVar11 + 0xf) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x31) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    *(undefined8 *)((longlong)plVar11 + 0x4a) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x52) = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0;
    *(undefined1 *)(plVar11 + 0x12) = 0;
  }
  else {
    puVar3 = (undefined1 *)(lVar6 + 0xc80);
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar4 = *(undefined4 *)(lVar6 + 0xc7c);
    *puVar3 = 0;
    *(undefined4 *)(lVar6 + 0xc7c) = 0xffffffff;
    plVar11 = (longlong *)FUN_14001cc68(0x98,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b41bb70;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14b00bf40;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    *(undefined4 *)(plVar11 + 0xf) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x31) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    *(undefined8 *)((longlong)plVar11 + 0x4a) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x52) = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0;
    *(undefined1 *)(plVar11 + 0x12) = 0;
    *(undefined4 *)(lVar6 + 0xc7c) = uVar4;
    *puVar3 = 1;
  }
  *(undefined1 *)(plVar11 + 7) = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(plVar11 + 5) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)plVar11 + 0x2c) = uVar4;
  *(undefined4 *)(plVar11 + 6) = uVar7;
  *(undefined4 *)((longlong)plVar11 + 0x34) = uVar8;
  FUN_1401f3db8(plVar11 + 8,param_1 + 0x20);
  FUN_140a88e1c(param_4 + 0x2c0,&local_80,param_4,param_1);
  *(undefined1 *)(plVar11 + 0xb) = local_80;
  local_80 = 0;
  *(undefined8 *)((longlong)plVar11 + 0x5c) = local_7c;
  local_7c = 0;
  FUN_1404e49fa(plVar11 + 0xd,local_70);
  *(undefined1 *)((longlong)plVar11 + 0x59) = local_7f;
  local_7f = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar12 = FUN_140822c64();
  lVar6 = local_88;
  cVar9 = FUN_1448093f4(local_88,uVar12);
  if ((lVar6 == 0) || (cVar9 == '\0')) {
    uVar12 = FUN_140822eba();
    cVar9 = FUN_1448093f4(lVar6,uVar12);
    if ((lVar6 != 0) &&
       ((cVar9 != '\0' && (*(undefined1 *)(plVar11 + 0x12) = 1, *(char *)(lVar6 + 8) == '\0')))) {
      *(undefined4 *)((longlong)plVar11 + 0x94) = *(undefined4 *)(lVar6 + 0xc);
    }
  }
  else {
    *(undefined1 *)(plVar11 + 0x12) = 0;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(lVar10 + 0x50);
  *(uint *)(lVar10 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar10 + 0x54) < iVar5 + 1U) {
    FUN_140822376((longlong *)(lVar10 + 0x48),iVar5);
  }
  lVar6 = *(longlong *)(lVar10 + 0x48);
  *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar11 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
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
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a89b52 FUN_140a89b52 body=373 status=ok
// SIG undefined FUN_140a89b52(void)

void FUN_140a89b52(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_1[0x55];
  iVar1 = *(int *)((longlong)param_1 + 0x2ac);
  iVar5 = (int)param_1[0x56];
  iVar6 = *(int *)((longlong)param_1 + 0x2b4);
  if (((iVar1 == 0 && iVar4 == 0) && iVar5 == 0) && iVar6 == 0) {
    (**(code **)(*param_1 + 0x5d8))(param_1);
    iVar4 = (int)param_1[0x55];
    iVar1 = *(int *)((longlong)param_1 + 0x2ac);
    iVar5 = (int)param_1[0x56];
    iVar6 = *(int *)((longlong)param_1 + 0x2b4);
    if (((iVar1 != 0 || iVar4 != 0) || iVar5 != 0) || iVar6 != 0) goto LAB_140a89c12;
  }
  else {
LAB_140a89c12:
    if (param_1[0x15] != 0) {
      FUN_1401a2efc(local_40);
      local_68 = local_30;
      uStack_64 = uStack_2c;
      uStack_60 = uStack_28;
      uStack_5c = uStack_24;
      FUN_140a107dc(&local_58,param_1 + 0x55);
      iVar4 = (int)param_1[0x55];
      iVar1 = *(int *)((longlong)param_1 + 0x2ac);
      iVar5 = (int)param_1[0x56];
      iVar6 = *(int *)((longlong)param_1 + 0x2b4);
      goto LAB_140a89bce;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
LAB_140a89bce:
  *(undefined4 *)(param_1 + 0x57) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 700) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uStack_50._4_4_;
  if (((((iVar1 != 0 || iVar4 != 0) || iVar5 != 0) || iVar6 != 0) &&
      ((*(byte *)((longlong)param_1 + 0x1fb) & 0xfd) != 0)) && (param_1[0x15] != 0)) {
    lVar2 = FUN_14066ef58();
    if (lVar2 != 0) {
      local_78 = (undefined4)param_1[0x57];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 700);
      uStack_70 = (undefined4)param_1[0x58];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0x2c4);
      puVar3 = (undefined4 *)FUN_147ba5f0a(lVar2);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)((longlong)param_1 + 0x304) = *puVar3;
      }
    }
  }
  FUN_1401a0912(param_1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a89cc8 FUN_140a89cc8 body=212 status=ok
// SIG undefined FUN_140a89cc8(void)

void FUN_140a89cc8(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x1fb) == '\x02') || (*(longlong *)(param_1 + 0xa8) == 0)) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_1412e3d1e(&local_48);
  }
  *(undefined4 *)(param_1 + 0x2a8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2ac) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2b0) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x2b4) = uStack_40._4_4_;
  if ((((*(int *)(param_1 + 0x2ac) == 0 && *(int *)(param_1 + 0x2a8) == 0) &&
       *(int *)(param_1 + 0x2b0) == 0) && *(int *)(param_1 + 0x2b4) == 0) ||
     (*(longlong *)(param_1 + 0xa8) == 0)) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_1401a2efc(&local_48);
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_140a107dc(&local_48,param_1 + 0x2a8);
  }
  *(undefined4 *)(param_1 + 0x2b8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 700) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x2c4) = uStack_40._4_4_;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a89d9e FUN_140a89d9e body=65 status=ok
// SIG undefined FUN_140a89d9e(void)

longlong FUN_140a89d9e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140a89dfc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_140a89ddf(lVar2);
  return lVar2;
}



// FUNCTION 140a89ddf FUN_140a89ddf body=29 status=ok
// SIG undefined FUN_140a89ddf(void)

void FUN_140a89ddf(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 2;
  *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 140a89dfc FUN_140a89dfc body=373 status=ok
// SIG undefined FUN_140a89dfc(void)

void FUN_140a89dfc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a89e85;
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
LAB_140a89e85:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,4);
  return;
}



// FUNCTION 140a89f72 FUN_140a89f72 body=879 status=ok
// SIG undefined FUN_140a89f72(void)

void FUN_140a89f72(longlong *param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *plStack_168;
  undefined4 local_160;
  double local_158;
  longlong *local_150;
  double local_148;
  float local_140;
  longlong *local_e0;
  longlong *local_68;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(char *)(param_2 + 0x210) != '\x01') goto LAB_140a89f9e;
  local_1b0 = 0xffffffffffffffff;
  local_1a8 = 0;
  local_1a0 = DAT_14cb1d020;
  uStack_198 = DAT_14cb1d028;
  local_190 = DAT_14cb1d030;
  local_188 = DAT_14cb1d020;
  uStack_180 = DAT_14cb1d028;
  local_178 = DAT_14cb1d030;
  local_170 = 0;
  plStack_168 = (longlong *)0x0;
  local_160 = 0xffffffff;
  cVar4 = (**(code **)(*param_1 + 0x28))(0,param_2,param_2 + 0x1e0);
  if (cVar4 != '\0') {
    dVar6 = (*(double *)(param_2 + 0x1f0) -
            (*(double *)(param_2 + 0x158) - (double)*(float *)(param_2 + 0x194))) +
            *(double *)(param_2 + 0x208);
    dVar7 = (*(double *)(param_2 + 0x1e8) - *(double *)(param_2 + 0x150)) +
            *(double *)(param_2 + 0x200);
    dVar3 = (*(double *)(param_2 + 0x1e0) - *(double *)(param_2 + 0x148)) +
            *(double *)(param_2 + 0x1f8);
    fVar8 = (float)SQRT(dVar6 * dVar6 + dVar3 * dVar3 + dVar7 * dVar7);
    local_148 = DAT_14c8464f0;
    local_150 = DAT_14c8464e8;
    local_158 = DAT_14c8464e0;
    if (1e-08 < fVar8) {
      dVar9 = (double)(1.0 / fVar8);
      local_148 = dVar6 * dVar9;
      local_150 = (longlong *)(dVar7 * dVar9);
      local_158 = dVar3 * dVar9;
    }
    local_140 = (float)(-(uint)(0.0 < *(float *)(param_2 + 0x5c)) &
                       (uint)(fVar8 / *(float *)(param_2 + 0x5c)));
    if (10.0 <= local_140) {
      local_140 = 10.0;
    }
    if (local_140 <= 0.0) {
      local_140 = 0.0;
    }
    local_38 = '\0';
    if (&local_158 != param_3) {
      if (*(char *)(param_3 + 0x25) == '\x01') {
        if (*(char *)(param_3 + 0x24) == '\x01') {
          *(undefined1 *)(param_3 + 0x24) = 0xff;
          plVar5 = (longlong *)param_3[1];
        }
        else {
          if (*(char *)(param_3 + 0x24) != '\x02') goto LAB_140a8a135;
          *(undefined1 *)(param_3 + 0x24) = 0xff;
          plVar5 = (longlong *)param_3[0x1e];
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
          plVar5 = (longlong *)param_3[0xf];
        }
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
LAB_140a8a135:
      *(undefined1 *)(param_3 + 0x24) = 0xff;
      FUN_140a8a2e2(param_3,&local_158);
      *(undefined1 *)(param_3 + 0x25) = 1;
      if (local_38 == '\x01') {
        local_38 = -1;
        plVar5 = local_150;
      }
      else {
        if (local_38 != '\x02') goto LAB_140a8a1a9;
        local_38 = -1;
        plVar5 = local_e0;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar5 = local_e0;
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
              plVar5 = local_e0;
            }
          }
        }
      }
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
  }
LAB_140a8a1a9:
  plVar5 = plStack_168;
  if (plStack_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_168 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_168)(plStack_168);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_140a89f9e:
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8a2e2 FUN_140a8a2e2 body=535 status=ok
// SIG undefined FUN_140a8a2e2(void)

undefined8 * FUN_140a8a2e2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  cVar3 = *(char *)(param_2 + 0x24);
  if (cVar3 != '\x01') {
    switch(cVar3) {
    case '\0':
      goto switchD_140a8a374_caseD_0;
    case '\x02':
      FUN_140a8a93c(param_1,param_2);
      return param_1;
    case '\x03':
    case '\x04':
    case '\x05':
      FUN_1437f9e3c(param_1);
      *(undefined1 *)(param_1 + 0x24) = 3;
      return param_1;
    default:
      if (cVar3 == -1) {
        return param_1;
      }
    case '\x01':
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
      return param_1;
    }
  }
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
  case 3:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    goto switchD_140a8a316_default;
  case 1:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    plVar8 = (longlong *)param_1[1];
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    plVar8 = (longlong *)param_1[0x1e];
    if (plVar8 != (longlong *)0x0) {
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
    plVar8 = (longlong *)param_1[0xf];
    break;
  default:
    goto switchD_140a8a316_default;
  }
  if (plVar8 != (longlong *)0x0) {
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
switchD_140a8a316_default:
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  return param_1;
switchD_140a8a374_caseD_0:
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
  case 3:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    goto switchD_140a8a391_default;
  case 1:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    plVar8 = (longlong *)param_1[1];
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    plVar8 = (longlong *)param_1[0x1e];
    if (plVar8 != (longlong *)0x0) {
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
    plVar8 = (longlong *)param_1[0xf];
    break;
  default:
    goto switchD_140a8a391_default;
  }
  if (plVar8 != (longlong *)0x0) {
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
switchD_140a8a391_default:
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 140a8a4fa FUN_140a8a4fa body=693 status=ok
// SIG undefined FUN_140a8a4fa(void)

/* WARNING: Removing unreachable block (ram,0x000140a8a775) */
/* WARNING: Removing unreachable block (ram,0x000140a8a77b) */
/* WARNING: Removing unreachable block (ram,0x000140a8a781) */
/* WARNING: Removing unreachable block (ram,0x000140a8a79d) */

undefined4
FUN_140a8a4fa(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  float fVar2;
  double _X;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  float fStack_94;
  undefined4 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x1aa0) - 1U < 2) {
    if ((*(int *)(param_1 + 0x1a98) != -1) && (*(int *)(param_1 + 0x1a9c) != -1)) {
LAB_140a8a551:
      _X = *(double *)(param_1 + 0x1aa8);
      uVar5 = 0;
      if ((_X <= -DAT_14cb1d020) || (DAT_14cb1d020 <= _X)) goto LAB_140a8a709;
      uVar5 = 0;
      if ((*(double *)(param_1 + 0x1ab0) <= -DAT_14cb1d028) ||
         (uVar5 = 0, DAT_14cb1d028 <= *(double *)(param_1 + 0x1ab0))) goto LAB_140a8a709;
      uVar5 = 0;
      if ((*(double *)(param_1 + 0x1ab8) <= -DAT_14cb1d030) ||
         (DAT_14cb1d030 <= *(double *)(param_1 + 0x1ab8))) goto LAB_140a8a709;
      iVar4 = _finite(_X);
      if (((iVar4 != 0) && (iVar4 = _finite(*(double *)(param_1 + 0x1ab0)), iVar4 != 0)) &&
         (iVar4 = _finite(*(double *)(param_1 + 0x1ab8)), iVar4 != 0)) {
        local_38 = 0xffffffffffffffff;
        local_78 = *param_2;
        local_70 = param_2[0x29];
        uStack_68 = param_2[0x2a];
        fVar2 = *(float *)((longlong)param_2 + 0x194);
        local_60 = (double)param_2[0x2b] - (double)fVar2;
        local_48 = param_3[2];
        local_58 = *param_3;
        uStack_50 = param_3[1];
        if (*(int *)(param_1 + 0x1aa0) == 1) {
          local_40 = *(undefined8 *)(param_1 + 0x1a98);
        }
        else {
          local_40 = 0xffffffffffffffff;
        }
        local_90 = *(undefined4 *)(param_1 + 8);
        uVar5 = *(undefined4 *)(param_2 + 0x32);
        local_88 = param_2[8];
        plVar3 = (longlong *)param_2[9];
        if (plVar3 == (longlong *)0x0) {
          _local_98 = CONCAT44(fVar2,uVar5);
          plStack_80 = (longlong *)0x0;
          uVar5 = FUN_14038bf6e(&local_98,param_4);
        }
        else {
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          _local_98 = CONCAT44(fVar2,uVar5);
          plStack_80 = plVar3;
          uVar5 = FUN_14038bf6e(&local_98,param_4);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        goto LAB_140a8a709;
      }
    }
  }
  else if (*(int *)(param_1 + 0x1aa0) == 3) goto LAB_140a8a551;
  uVar5 = 0;
LAB_140a8a709:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140a8a7b0 FUN_140a8a7b0 body=394 status=ok
// SIG undefined FUN_140a8a7b0(void)

/* WARNING: Removing unreachable block (ram,0x000140a8a91e) */
/* WARNING: Removing unreachable block (ram,0x000140a8a928) */

bool FUN_140a8a7b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_7c = 0;
  local_40 = *param_2;
  local_58 = *(undefined4 *)(param_1 + 8);
  local_50 = param_2[8];
  plStack_48 = (longlong *)param_2[9];
  if (plStack_48 == (longlong *)0x0) {
    plStack_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plStack_48 + 0xc) = *(int *)((longlong)plStack_48 + 0xc) + 1;
    UNLOCK();
  }
  local_60 = param_2[0x32];
  local_98 = param_2[0x29];
  uStack_90 = param_2[0x2a];
  local_88 = (double)param_2[0x2b] - (double)*(float *)((longlong)param_2 + 0x194);
  local_68 = param_3[2];
  local_78 = *param_3;
  uStack_70 = param_3[1];
  iVar2 = FUN_140855e2d(&local_98,param_4,0);
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2 == 0;
}



// FUNCTION 140a8a93c FUN_140a8a93c body=372 status=ok
// SIG undefined FUN_140a8a93c(void)

undefined8 * FUN_140a8a93c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
  case 3:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    goto switchD_140a8a966_default;
  case 1:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    plVar7 = (longlong *)param_1[1];
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    plVar7 = (longlong *)param_1[0x1e];
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
    plVar7 = (longlong *)param_1[0xf];
    break;
  default:
    goto switchD_140a8a966_default;
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
switchD_140a8a966_default:
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  puVar8 = param_2 + 2;
  puVar9 = param_1 + 2;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0xe] = param_2[0xe];
  lVar6 = param_2[0xf];
  param_1[0xf] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar8 = param_2 + 0x11;
  puVar9 = param_1 + 0x11;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x1d] = param_2[0x1d];
  lVar6 = param_2[0x1e];
  param_1[0x1e] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  uVar3 = param_2[0x21];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x10d);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x115);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x10d) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x115) = uVar5;
  *(undefined1 *)(param_1 + 0x24) = 2;
  return param_1;
}



// FUNCTION 140a8aabe FUN_140a8aabe body=90 status=ok
// SIG undefined FUN_140a8aabe(void)

undefined8 * FUN_140a8aabe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2d3e40;
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
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140a8ab18 FUN_140a8ab18 body=60 status=ok
// SIG undefined FUN_140a8ab18(void)

bool FUN_140a8ab18(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_140a8ab54();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      bVar2 = true;
    }
    else {
      bVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30;
    }
  }
  return bVar2;
}



// FUNCTION 140a8ab54 FUN_140a8ab54 body=228 status=ok
// SIG undefined FUN_140a8ab54(void)

longlong FUN_140a8ab54(void)

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
  if (DAT_14cae8ee0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147b97db4;
    local_40 = &LAB_145a0e852;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Engine",L"LevelScriptActor",&DAT_14cae8ee0,FUN_1463e8418);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8ee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8ac3a FUN_140a8ac3a body=860 status=ok
// SIG undefined FUN_140a8ac3a(void)

void FUN_140a8ac3a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int *param_8,
                  undefined8 param_9,longlong *param_10)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong *local_390;
  undefined8 local_388;
  longlong *local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2d0 [4];
  undefined4 local_2cc;
  undefined4 local_22c;
  undefined4 local_200;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_100;
  undefined1 local_f7;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_390 = param_1;
  local_388 = param_4;
  if ((int)param_2[1] != 0) {
    if ((-1 < *param_8) && (*param_8 < (int)param_2[1])) {
      local_300 = 0;
      local_2f8 = 0x200000000;
      FUN_1405c5fa2();
      local_2e8 = &DAT_14cb769e8;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2f0 = &PTR_FUN_14b0394b0;
      memset(local_2d0,0,0x100);
      local_200 = 0xffffffff;
      local_2cc = 0x3f800000;
      local_22c = 0xffffffff;
      local_1d0 = 0;
      local_1c8 = 0x4fc71eb4;
      local_1c0 = 0;
      local_1b0 = 0;
      local_100 = 0;
      local_f7 = 0;
      local_e8 = 0;
      local_d8 = 0;
      local_7c = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_1b8 = 0x80;
      local_1a8 = (undefined4)DAT_14c8464e0;
      uStack_1a4 = DAT_14c8464e0._4_4_;
      uStack_1a0 = (undefined4)DAT_14c8464e8;
      uStack_19c = DAT_14c8464e8._4_4_;
      local_198 = DAT_14c8464f0;
      local_190 = (undefined4)DAT_14c8464e0;
      uStack_18c = DAT_14c8464e0._4_4_;
      uStack_188 = (undefined4)DAT_14c8464e8;
      uStack_184 = DAT_14c8464e8._4_4_;
      local_180 = DAT_14c8464f0;
      local_178 = (undefined4)DAT_14c8464e0;
      uStack_174 = DAT_14c8464e0._4_4_;
      uStack_170 = (undefined4)DAT_14c8464e8;
      uStack_16c = DAT_14c8464e8._4_4_;
      local_168 = DAT_14c8464f0;
      local_160 = (undefined4)DAT_14c8464e0;
      uStack_15c = DAT_14c8464e0._4_4_;
      uStack_158 = (undefined4)DAT_14c8464e8;
      uStack_154 = DAT_14c8464e8._4_4_;
      local_150 = DAT_14c8464f0;
      local_138 = DAT_14c8464f0;
      local_148 = (undefined4)DAT_14c8464e0;
      uStack_144 = DAT_14c8464e0._4_4_;
      uStack_140 = (undefined4)DAT_14c8464e8;
      uStack_13c = DAT_14c8464e8._4_4_;
      local_130 = 0;
      local_3a8 = param_7;
      FUN_140a8c38c(local_390,&local_378,local_388,param_6);
      uVar3 = local_388;
      plVar7 = local_390;
      lVar8 = (longlong)*param_8;
      if (*param_8 < (int)param_2[1]) {
        local_380 = param_10 + 4;
        lVar9 = lVar8 * 0x118;
        do {
          lVar1 = *param_2;
          local_398 = param_7;
          local_3a0 = param_6;
          local_3a8 = lVar1 + lVar9;
          FUN_140a8af98(plVar7,&local_378,uVar3,param_5);
          local_398 = param_9;
          local_3a0 = param_7;
          local_3a8 = param_6;
          (**(code **)(*plVar7 + 0x40))(plVar7,&local_378,lVar1 + lVar9,uVar3);
          *param_8 = *param_8 + 1;
          pcVar2 = (code *)*param_10;
          if (pcVar2 != (code *)0x0) {
            plVar6 = (longlong *)param_10[2];
            if ((longlong *)param_10[2] == (longlong *)0x0) {
              plVar6 = local_380;
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar4 = (*pcVar2)(uVar5);
            if (cVar4 == '\0') break;
          }
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x118;
        } while (lVar8 < (int)param_2[1]);
      }
      FUN_1403dfdc4(&local_378);
    }
  }
  if (*param_10 != 0) {
    plVar7 = param_10 + 4;
    if ((longlong *)param_10[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_10[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8af98 FUN_140a8af98 body=2169 status=ok
// SIG undefined FUN_140a8af98(void)

void FUN_140a8af98(longlong param_1,longlong param_2,longlong *param_3,double *param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  undefined8 uVar6;
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
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0xf1) == '\0') {
    if (param_7 == 0) {
      if ((param_6 == 0) || (*(char *)(param_6 + 0x1f8) != '\x01')) {
        dVar9 = DAT_14c8464e0;
        dVar15 = DAT_14c8464e8;
        dVar14 = DAT_14c8464f0;
        if ((*param_3 != 0) && (lVar2 = *(longlong *)(*param_3 + 0x1c8), lVar2 != 0)) {
          dVar9 = *(double *)(lVar2 + 0x260);
          dVar15 = *(double *)(lVar2 + 0x268);
          dVar14 = *(double *)(lVar2 + 0x270);
        }
      }
      else {
        dVar9 = *(double *)(param_6 + 0x1e0);
        dVar15 = *(double *)(param_6 + 0x1e8);
        dVar14 = *(double *)(param_6 + 0x1f0);
      }
    }
    else {
      dVar9 = *(double *)(param_7 + 0x50);
      dVar15 = *(double *)(param_7 + 0x58);
      dVar14 = *(double *)(param_7 + 0x60);
    }
    if (((((dVar9 == 0.0) && (!NAN(dVar9))) && (dVar15 == 0.0)) &&
        ((!NAN(dVar15) && (dVar14 == 0.0)))) && (!NAN(dVar14))) goto LAB_140a8b178;
    dVar8 = *(double *)(param_5 + 0x18);
    dVar10 = *(double *)(param_5 + 0x20);
    dVar13 = *(double *)(param_5 + 0x28);
    if (((dVar8 == 0.0) && (!NAN(dVar8))) &&
       ((dVar10 == 0.0 && (((!NAN(dVar10) && (dVar13 == 0.0)) && (!NAN(dVar13)))))))
    goto LAB_140a8b178;
    dVar13 = dVar13 - dVar14;
    dVar10 = dVar10 - dVar15;
    dVar8 = dVar8 - dVar9;
    dVar14 = dVar13 * dVar13 + dVar8 * dVar8 + dVar10 * dVar10;
    if (((dVar14 != 1.0) || (dVar15 = dVar8, dVar9 = dVar13, dVar3 = dVar10, NAN(dVar14))) &&
       (dVar15 = DAT_14c8464e0, dVar9 = DAT_14c8464f0, dVar3 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar14)) {
      dVar15 = 1.0 / SQRT(dVar14);
      dVar9 = dVar13 * dVar15;
      dVar3 = dVar10 * dVar15;
      dVar15 = dVar8 * dVar15;
    }
    if (((ABS(dVar15) <= 9.999999747378752e-05) && (ABS(dVar3) <= 9.999999747378752e-05)) &&
       (ABS(dVar9) <= 9.999999747378752e-05)) goto LAB_140a8b178;
  }
  else {
LAB_140a8b178:
    dVar9 = param_4[2];
    dVar15 = *param_4;
    dVar3 = param_4[1];
  }
  dVar8 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0xf8),0x4076800000000000);
  dVar14 = 0.0;
  dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                  (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
  if ((dVar8 == 0.0) && (!NAN(dVar8))) {
    dVar8 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x100),0x4076800000000000);
    dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                    (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
    if ((dVar8 == 0.0) && (!NAN(dVar8))) {
      dVar8 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x108),0x4076800000000000);
      dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                      (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
      if ((dVar8 == 0.0) && (!NAN(dVar8))) goto LAB_140a8b25c;
    }
  }
  if ((dVar3 != 0.0) || (((NAN(dVar3) || (dVar15 != 0.0)) || (NAN(dVar15))))) {
    dVar14 = atan2(dVar3,dVar15);
    dVar14 = dVar14 * 0.5;
  }
  dVar8 = SQRT(dVar15 * dVar15 + dVar3 * dVar3);
  dVar15 = 0.0;
  if (((dVar9 != 0.0) || (NAN(dVar9))) || ((dVar8 != 0.0 || (NAN(dVar8))))) {
    dVar15 = atan2(dVar9,dVar8);
    dVar15 = dVar15 * 0.5;
  }
  dVar8 = sin(dVar15);
  dVar9 = cos(dVar15);
  dVar10 = sin(dVar14);
  dVar14 = cos(dVar14);
  dVar12 = dVar8 * dVar10;
  dVar8 = -dVar8 * dVar14;
  dVar10 = dVar10 * dVar9;
  dVar9 = dVar9 * dVar14;
  dVar13 = *(double *)(param_1 + 0x110);
  dVar3 = *(double *)(param_1 + 0x118);
  dVar16 = *(double *)(param_1 + 0x120);
  dVar4 = *(double *)(param_1 + 0x128);
  dVar14 = dVar3 * dVar10 * -1.0 + dVar16 * dVar8 + dVar12 * dVar4 * 1.0 + dVar13 * dVar9;
  dVar15 = dVar13 * dVar10 * 1.0 + dVar4 * dVar8 + dVar12 * dVar16 * -1.0 + dVar3 * dVar9;
  dVar11 = dVar4 * dVar10 * 1.0 + ((dVar12 * dVar3 * 1.0 + dVar9 * dVar16) - dVar13 * dVar8);
  dVar8 = dVar16 * dVar10 * -1.0 + ((dVar12 * dVar13 * -1.0 + dVar9 * dVar4) - dVar3 * dVar8);
  dVar10 = dVar11 - dVar14 * 0.0;
  dVar13 = dVar14 * 0.0 - dVar15;
  dVar16 = dVar15 * 0.0 + dVar11 * -0.0;
  dVar13 = dVar13 + dVar13;
  dVar10 = dVar10 + dVar10;
  dVar16 = dVar16 + dVar16;
  dVar9 = (dVar14 * dVar10 - dVar16 * dVar15) + dVar8 * dVar13 + 0.0;
  dVar3 = (dVar11 * dVar16 - dVar13 * dVar14) + dVar8 * dVar10 + 0.0;
  dVar15 = (dVar15 * dVar13 - dVar10 * dVar11) + dVar8 * dVar16 + 1.0;
LAB_140a8b25c:
  uVar6 = FUN_14485cccc(param_5 + 0xc0);
  if ((*(byte *)(param_1 + 0x1a8) & 3) == 0) {
    *(undefined2 *)(param_2 + 0x280) = 0x100;
  }
  else {
    local_c0 = *param_3;
    if ((local_c0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_b8 = param_3[1];
    if ((local_b8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    if ((*(byte *)(param_1 + 0x1a8) & 1) == 0) {
      local_c0 = 0;
    }
    else if ((*(byte *)(param_1 + 0x1a8) & 2) == 0) {
      local_b8 = 0;
    }
    uVar5 = FUN_140a8bacc(&local_c0,uVar6);
    *(undefined1 *)(param_2 + 0x280) = uVar5;
    *(undefined1 *)(param_2 + 0x281) = 1;
  }
  FUN_14082cfa8(param_2,uVar6);
  memcpy((void *)(param_2 + 0xa8),(void *)(param_5 + 8),0x100);
  uVar6 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(param_2 + 0x1f0) = uVar6;
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_5 + 0x40);
  *(double *)(param_2 + 0x200) = dVar15;
  *(double *)(param_2 + 0x208) = dVar3;
  *(double *)(param_2 + 0x210) = dVar9;
  fVar7 = (float)FUN_140a8b812(param_1,*param_3,param_6);
  dVar14 = (double)fVar7;
  *(double *)(param_2 + 0x230) = dVar14 * dVar15;
  *(double *)(param_2 + 0x238) = dVar3 * dVar14;
  *(double *)(param_2 + 0x240) = dVar9 * dVar14;
  if (((*(byte *)(param_1 + 0x17c) & 1) == 0) || (ABS(fVar7) <= 1e-08)) {
    *(undefined8 *)(param_2 + 0x228) = *(undefined8 *)(param_2 + 0x240);
    *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_2 + 0x230);
    *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x238);
  }
  else {
    dVar14 = dVar15 * dVar15 + dVar3 * dVar3;
    if ((dVar14 != 1.0) || (NAN(dVar14))) {
      dVar10 = DAT_14c8464f0;
      dVar9 = DAT_14c8464e0;
      dVar8 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar14) {
        dVar10 = 0.0;
        dVar9 = dVar15 * (1.0 / SQRT(dVar14));
        dVar8 = dVar3 * (1.0 / SQRT(dVar14));
      }
    }
    else {
      dVar10 = (double)(-(ulonglong)(dVar9 == 0.0) & (ulonglong)dVar9);
      dVar9 = dVar15;
      dVar8 = dVar3;
    }
    dVar14 = (double)(float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                            ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000);
    fVar1 = *(float *)(param_1 + 0x178);
    dVar15 = (double)ABS(fVar7);
    *(double *)(param_2 + 0x218) = (dVar9 * dVar14 + 0.0) * dVar15;
    *(double *)(param_2 + 0x220) = (dVar8 * dVar14 + 0.0) * dVar15;
    *(double *)(param_2 + 0x228) = ((double)fVar1 + dVar10 * dVar14) * dVar15;
  }
  *(byte *)(param_2 + 0x1c1) = *(byte *)(param_2 + 0x1c1) | 2;
  if ((local_b0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403e0ef4(param_2 + 0x300,param_5 + 0x108);
  return;
}



// FUNCTION 140a8b812 FUN_140a8b812 body=178 status=ok
// SIG undefined FUN_140a8b812(void)

ulonglong FUN_140a8b812(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [40];
  char local_60 [16];
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == 0) || (*(char *)(param_3 + 0x1c4) != '\x01')) {
    local_60[0] = '\0';
    local_38[0] = 0;
    FUN_1456bb102(local_60);
    uVar2 = FUN_140a8b8c6(param_1 + 0x130,local_60);
    FUN_1448173f8(local_38);
    if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_3 + 0x1c0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8b8c6 FUN_140a8b8c6 body=361 status=ok
// SIG undefined FUN_140a8b8c6(void)

ulonglong FUN_140a8b8c6(char *param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [44];
  uint local_cc;
  undefined1 local_c8 [40];
  undefined1 local_a0 [8];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_cc = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x28);
  }
  else if (cVar1 == '\x02') {
    uVar3 = FUN_140430f72();
    FUN_140a8ba30(uVar3,*(undefined8 *)(param_1 + 4),&local_cc);
    uVar5 = (ulonglong)local_cc;
  }
  else {
    uVar5 = 0;
    if (cVar1 == '\x01') {
      local_c8[0] = 0;
      FUN_1447f8f6a(local_c8);
      FUN_1447f8ea6(local_a0,param_2 + 0x28);
      local_98[0] = 0;
      local_70 = 0;
      uVar3 = FUN_144873cc0(param_1 + 0x10);
      FUN_144750e81(local_68,uVar3,local_c8);
      uVar5 = FUN_144a7ecd0(local_68);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppuVar4 = local_68;
        if (0x18 < local_50) {
          pppuVar4 = (undefined8 ***)local_68[0];
        }
        (*pcVar2)(pppuVar4);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      FUN_144a5ac3a(local_98);
      FUN_144a5ac3a(local_c8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8ba30 FUN_140a8ba30 body=156 status=ok
// SIG undefined FUN_140a8ba30(void)

undefined8 FUN_140a8ba30(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x14);
        if (*plVar4 == param_2) goto LAB_140a8baa0;
        iVar2 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140a8baa0:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    *param_3 = (int)*plVar5;
  }
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),plVar5 != (longlong *)0x0);
}



// FUNCTION 140a8bacc FUN_140a8bacc body=151 status=ok
// SIG undefined FUN_140a8bacc(void)

ulonglong FUN_140a8bacc(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*param_1 == param_2) goto LAB_140a8bb3e;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      if (lVar2 == param_2) goto LAB_140a8bb3e;
      if ((longlong)*(int *)(lVar2 + 0x1c0) != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x1b8) + lVar4) == param_2) {
            cVar1 = FUN_140940f38(param_2);
            if (cVar1 != '\0') goto LAB_140a8bb3e;
            lVar2 = param_1[1];
            break;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(lVar2 + 0x1c0) * 8 != lVar4);
      }
      if ((*(longlong *)(lVar2 + 0x1c8) == 0) ||
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1c8) + 0x120), lVar2 == 0)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0xa8);
      }
      if (lVar2 == param_2) goto LAB_140a8bb3e;
    }
  }
  uVar3 = 0;
LAB_140a8bb3e:
  return uVar3 & 0xffffffff;
}



// FUNCTION 140a8bb64 FUN_140a8bb64 body=2087 status=ok
// SIG undefined FUN_140a8bb64(void)

void FUN_140a8bb64(longlong *param_1,longlong param_2,byte *param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6,float *param_7)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined1 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198 [2];
  undefined8 local_188;
  undefined8 local_158 [2];
  undefined8 local_148;
  ulonglong local_118;
  ulonglong uStack_110;
  longlong *local_108;
  float local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  longlong local_f8;
  undefined8 uStack_f0;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(char *)(param_7 + 1) == '\x01') {
    fVar16 = *param_7;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xa9) == '\x01') {
      uVar6 = FUN_14485cccc(param_3 + 0xc0);
    }
    else {
      uVar6 = *param_4;
    }
    fVar16 = (float)FUN_14074d5ce(param_1,uVar6,param_5);
  }
  if ((param_5 != 0) && (*(char *)(param_5 + 0x2c8) == '\x01')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar11 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x1b2) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_118 = local_118 & 0xffffffffffffff00;
    uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
    FUN_1456bb102(&local_118,*param_4);
    pfVar9 = &local_e0;
    FUN_1448729ea(lVar11,pfVar9,&local_118);
    if (local_c0 == 3) {
      fVar12 = local_e0;
      bVar4 = 3;
    }
    else {
      pfVar10 = &local_b8;
      FUN_1400b56fe(pfVar10,&local_e0,3);
      fVar12 = 0.0;
      if (local_98 != 0) {
        fVar12 = local_b8;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar10 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar10);
      }
      bVar4 = local_c0;
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
        bVar4 = local_c0;
      }
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_c8) {
        pfVar9 = (float *)CONCAT44(uStack_dc,local_e0);
      }
      (*pcVar3)(pfVar9);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
    }
    FUN_1448173f8(&uStack_f0);
    if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))();
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar11 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x1b4) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_118 = local_118 & 0xffffffffffffff00;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    FUN_1456bb102(&local_118,*param_4);
    pfVar9 = &local_e0;
    FUN_1448729ea(lVar11,pfVar9,&local_118);
    if (local_c0 == 3) {
      fVar13 = local_e0;
      bVar4 = 3;
    }
    else {
      pfVar10 = &local_b8;
      FUN_1400b56fe(pfVar10,&local_e0,3);
      fVar13 = local_b8;
      if (local_98 == 0) {
        fVar13 = 1.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar10 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar10);
      }
      bVar4 = local_c0;
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
        bVar4 = local_c0;
      }
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_c8) {
        pfVar9 = (float *)CONCAT44(uStack_dc,local_e0);
      }
      (*pcVar3)(pfVar9);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
    }
    FUN_1448173f8(&uStack_f0);
    if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))();
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar11 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x1b6) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_118 = local_118 & 0xffffffffffffff00;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    FUN_1456bb102(&local_118,*param_4);
    pfVar9 = &local_e0;
    FUN_1448729ea(lVar11,pfVar9,&local_118);
    if (local_c0 == 3) {
      uVar5 = 3;
      fVar17 = local_e0;
    }
    else {
      pfVar10 = &local_b8;
      FUN_1400b56fe(pfVar10,&local_e0,3);
      fVar17 = local_b8;
      if (local_98 == 0) {
        fVar17 = 1.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar10 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar10);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      }
      uVar5 = (uint)local_c0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_c8) {
        pfVar9 = (float *)CONCAT44(uStack_dc,local_e0);
      }
      (*pcVar3)(pfVar9);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
    }
    FUN_1448173f8(&uStack_f0);
    if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))();
      }
    }
    if ((0.0 < fVar12) && (0.0 < fVar13)) {
      fVar13 = *(float *)(param_5 + 0x2c4) / fVar13;
      auVar15 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
      fVar12 = fVar12 * (float)(int)auVar15._0_4_;
      if (((*(byte *)((longlong)param_1 + 0x1a9) & 4) != 0) && (fVar17 <= fVar12)) {
        fVar12 = fVar17;
      }
      fVar16 = fVar16 * (fVar12 + 1.0);
    }
  }
  plVar2 = (longlong *)param_1[0x69];
  if (((plVar2 != (longlong *)0x0) && (param_6 != 0)) && ((*(byte *)(plVar2 + 2) & 4) != 0)) {
    fVar12 = (float)(**(code **)(*plVar2 + 0x28))(plVar2,param_3,param_2,param_6);
    fVar16 = fVar16 * fVar12;
    if ((*(byte *)((longlong)param_1 + 0x17c) & 2) != 0) {
      dVar14 = (double)fVar12;
      *(double *)(param_2 + 0x218) = *(double *)(param_2 + 0x218) * dVar14;
      *(double *)(param_2 + 0x220) = *(double *)(param_2 + 0x220) * dVar14;
      *(double *)(param_2 + 0x228) = *(double *)(param_2 + 0x228) * dVar14;
      *(double *)(param_2 + 0x230) = *(double *)(param_2 + 0x230) * dVar14;
      *(double *)(param_2 + 0x238) = *(double *)(param_2 + 0x238) * dVar14;
      *(double *)(param_2 + 0x240) = dVar14 * *(double *)(param_2 + 0x240);
    }
  }
  puVar7 = (undefined8 *)FUN_1405473b6();
  if (puVar7 == (undefined8 *)0x0) goto LAB_140a8bdd8;
  if (param_6 == 0) {
    fVar12 = 0.0;
LAB_140a8bcff:
    if ((*(byte *)(param_1 + 0x15) & 8) != 0) goto LAB_140a8bd31;
    local_1b8 = local_198;
    local_198[0] = 0;
    local_188 = 0;
    FUN_14082d216(param_2,fVar16,puVar7,1);
  }
  else {
    fVar12 = *(float *)(param_6 + 0x164);
    if (fVar12 <= 0.0) goto LAB_140a8bcff;
LAB_140a8bd31:
    local_f8 = 0;
    uStack_f0 = 0;
    local_fb = 2;
    puVar8 = (ulonglong *)(param_6 + 0x50);
    if (param_6 == 0) {
      puVar8 = (ulonglong *)(param_3 + 0x18);
    }
    local_118 = *puVar8;
    uStack_110 = puVar8[1];
    local_108 = (longlong *)puVar8[2];
    local_fc = 1;
    local_1a8 = local_158;
    local_158[0] = 0;
    local_148 = 0;
    local_1b0 = 1;
    local_1b8 = puVar7;
    local_100 = fVar12;
    FUN_1405fd98c(param_2,fVar16,&local_118,'\x02' - ((*param_3 & 5) == 0));
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1,puVar7,param_5);
  FUN_14025a2c6(puVar7);
LAB_140a8bdd8:
  if ((local_90 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8c38c FUN_140a8c38c body=1841 status=ok
// SIG undefined FUN_140a8c38c(void)

void FUN_140a8c38c(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_88;
  float local_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = param_3[1];
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_3[1];
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x18) = lVar9;
  lVar9 = *param_3;
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *param_3;
    }
  }
  *(longlong *)(param_2 + 0x28) = lVar9;
  *(uint *)(param_2 + 0x1c0) =
       *(uint *)(param_2 + 0x1c0) & 0xfffffeff | (*(uint *)(param_1 + 0x1a8) & 4) << 6;
  if (param_1 + 0x180 != param_2 + 0x250) {
    FUN_1403e1402();
  }
  (**(code **)(*(longlong *)(param_2 + 0x88) + 0x20))(param_2 + 0x88,0);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  FUN_1406022fe(param_2 + 0x98,param_1 + 0x98);
  if (param_4 == 0) {
    *(uint *)(param_2 + 0x1c0) =
         *(uint *)(param_2 + 0x1c0) & 0xfffffffe | *(byte *)(param_1 + 0xa8) & 1;
    FUN_14118c70e(param_2 + 0x48,param_1 + 0x38);
    uVar10 = FUN_1405faa04();
    *(undefined8 *)(param_2 + 0x40) = uVar10;
  }
  else {
    if (*(char *)(param_4 + 0x27a) == '\x01') {
      bVar8 = *(byte *)(param_4 + 0x279);
    }
    else {
      bVar8 = *(byte *)(param_1 + 0xa8) & 1;
    }
    *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe | (uint)bVar8;
    if (*(int *)(param_4 + 0x24c) == 0) {
LAB_140a8c73c:
      lVar9 = 0;
    }
    else {
      uVar11 = *(uint *)(param_4 + 0x248);
      lVar9 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(param_4 + 0x24c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_140a8c73c;
        lVar9 = *plVar12;
        if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar9);
        }
      }
    }
    *(longlong *)(param_2 + 0x20) = lVar9;
    iVar15 = *(int *)(param_4 + 0x50);
    if (iVar15 < 1) {
LAB_140a8c507:
      if ((longlong *)(param_2 + 0x48) != (longlong *)(param_1 + 0x38)) {
        uVar16 = *(undefined4 *)(param_2 + 0x84);
        iVar15 = *(int *)(param_1 + 0x70);
        plVar13 = (longlong *)(param_1 + 0x38);
        if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
          plVar13 = *(longlong **)(param_1 + 0x68);
        }
LAB_140a8c52a:
        FUN_1400709d4(param_2 + 0x48,plVar13,iVar15,uVar16);
      }
    }
    else {
      plVar12 = (longlong *)(param_4 + 0x18);
      plVar13 = *(longlong **)(param_4 + 0x48);
      if (*(longlong **)(param_4 + 0x48) == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      if ((*plVar13 == 0) || (0xfffffffd < (int)plVar13[1] - 1U)) goto LAB_140a8c507;
      if ((*(byte *)(param_4 + 0x278) & 0x10) == 0) {
        if ((longlong *)(param_2 + 0x48) == plVar12) goto LAB_140a8c52f;
        uVar16 = *(undefined4 *)(param_2 + 0x84);
        goto LAB_140a8c52a;
      }
      lVar9 = param_2 + 0x48;
      if (lVar9 != param_1 + 0x38) {
        lVar18 = param_1 + 0x38;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar18 = *(longlong *)(param_1 + 0x68);
        }
        FUN_1400709d4(lVar9,lVar18,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_2 + 0x84));
      }
      FUN_1405faa8e(lVar9,plVar12);
    }
LAB_140a8c52f:
    lVar9 = *(longlong *)(param_4 + 0x10);
    if (lVar9 == 0) {
      lVar9 = FUN_1405faa04(param_1 + 0x18);
    }
    *(longlong *)(param_2 + 0x40) = lVar9;
    uVar11 = (*(uint *)(param_2 + 0x1c0) & 0xfffffffd) + (*(uint *)(param_4 + 0x278) & 1) * 2;
    *(uint *)(param_2 + 0x1c0) = uVar11;
    *(uint *)(param_2 + 0x1c0) = uVar11 & 0xffffffdf | (*(uint *)(param_4 + 0x278) & 2) << 4;
    FUN_1403e0f94(param_2 + 0x2d0,param_4 + 0x280);
    FUN_1405dc634(param_2 + 0x88,param_4 + 0x58);
    *(undefined8 *)(param_2 + 0x2e0) = *(undefined8 *)(param_4 + 0x2d0);
    FUN_1403e0f44(param_2 + 0x2e8,param_4 + 0x2d8);
    if ((*(longlong *)(param_4 + 0x2a8) != 0) && (*(int *)(param_4 + 0x2b0) - 1U < 0xfffffffe)) {
      plVar12 = (longlong *)(param_4 + 0x2a8);
      goto LAB_140a8c5ce;
    }
  }
  plVar12 = (longlong *)(param_1 + 0x1b8);
LAB_140a8c5ce:
  if ((int)plVar12[1] == 0x3d418293) {
    local_80 = 0.0;
    local_88 = *param_3;
    local_78 = *(undefined8 *)(param_2 + 0x40);
    if (param_5 == 0) {
      plVar13 = *(longlong **)(param_1 + 0x348);
      if (((plVar13 != (longlong *)0x0) &&
          (fVar19 = (float)(**(code **)(*plVar13 + 0x18))(plVar13,param_3[1]), local_80 = fVar19,
          param_4 != 0)) && ((*(byte *)(param_4 + 0x278) & 4) != 0)) {
        local_80 = (float)FUN_140acff56(param_3[1]);
        local_80 = fVar19 * local_80;
      }
    }
    else {
      iVar15 = *(int *)(param_5 + 4);
      if (((iVar15 == 3) || (iVar15 == 2)) || (iVar15 == 1)) {
        local_80 = *(float *)(param_5 + 8);
      }
      else {
        local_80 = (float)DAT_14c8464e0;
      }
    }
    FUN_141125464(plVar12,&local_a8,&local_88);
    if ((*(longlong *)(param_2 + 0x1a8) != local_a8) ||
       (*(int *)(param_2 + 0x1b0) != (int)plStack_a0)) {
      *(longlong *)(param_2 + 0x1a8) = local_a8;
      *(int *)(param_2 + 0x1b0) = (int)plStack_a0;
      *(undefined8 *)(param_2 + 0x1b8) = 0;
    }
  }
  else {
    lVar9 = *plVar12;
    if (*(longlong *)(param_2 + 0x1a8) != lVar9) {
      *(undefined8 *)(param_2 + 0x1b8) = 0;
    }
    *(longlong *)(param_2 + 0x1a8) = lVar9;
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x78);
    local_b8 = (longlong *)(param_2 + 0x2d0);
    local_b0 = (longlong)*(int *)(param_1 + 0x80) * 0x18;
    lVar18 = 0;
    do {
      local_a8 = *(longlong *)(lVar9 + lVar18);
      FUN_1446dcdd4(&local_88,&local_a8);
      if (DAT_14cb77de0 == 0) {
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
      }
      else {
        FUN_140f6011c(DAT_14cb77de0,&local_a8,&local_88);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar12 = plStack_a0;
      lVar7 = local_a8;
      if (local_a8 != 0) {
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
          UNLOCK();
        }
        iVar15 = *(int *)(param_2 + 0x2d8);
        *(uint *)(param_2 + 0x2d8) = iVar15 + 1U;
        if (*(uint *)(param_2 + 0x2dc) < iVar15 + 1U) {
          FUN_1408da40e(local_b8,iVar15);
        }
        lVar4 = *local_b8;
        lVar17 = (longlong)iVar15 * 0x20;
        lVar1 = lVar4 + lVar17;
        *(longlong *)(lVar4 + lVar17) = lVar7;
        *(longlong **)(lVar4 + 8 + lVar17) = plVar12;
        if (plVar12 == (longlong *)0x0) {
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar12)();
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))();
            }
          }
        }
      }
      plVar12 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_a0 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plStack_a0)();
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
      }
      lVar18 = lVar18 + 0x18;
    } while (local_b0 != lVar18);
  }
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    uVar11 = (uint)(*(int *)(*(longlong *)(param_1 + 0x348) + 0x14) != 1) << 2;
  }
  uVar3 = *(uint *)(param_2 + 0x1c0);
  puVar14 = &DAT_14c8464e0;
  if (param_5 != 0) {
    puVar14 = (undefined8 *)(param_5 + 0x50);
  }
  *(uint *)(param_2 + 0x1c0) = uVar3 & 0xfffffffb | uVar11;
  uVar16 = *(undefined4 *)((longlong)puVar14 + 4);
  uVar5 = *(undefined4 *)(puVar14 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar14 + 0xc);
  *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)puVar14;
  *(undefined4 *)(param_2 + 0x1d4) = uVar16;
  *(undefined4 *)(param_2 + 0x1d8) = uVar5;
  *(undefined4 *)(param_2 + 0x1dc) = uVar6;
  *(undefined8 *)(param_2 + 0x1e0) = puVar14[2];
  uVar11 = uVar3 & 0xffffffbb | uVar11 | (uint)*(byte *)(param_1 + 0x340) << 6;
  *(uint *)(param_2 + 0x1c0) = uVar11;
  if ((*(char *)(param_1 + 0x341) == '\x01') &&
     ((undefined4 *)(param_1 + 0x344) != (undefined4 *)(param_2 + 0x1c4))) {
    *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_1 + 0x344);
    *(undefined1 *)(param_2 + 0x1c8) = 1;
  }
  *(uint *)(param_2 + 0x1c0) = uVar11 & 0xffffff7f | (uint)*(byte *)(param_1 + 0xaa) << 7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8cacc FUN_140a8cacc body=85 status=ok
// SIG undefined FUN_140a8cacc(void)

undefined8 * FUN_140a8cacc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b300fb0;
  plVar3 = (longlong *)param_1[7];
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



// FUNCTION 140a8cb22 FUN_140a8cb22 body=2556 status=ok
// SIG undefined FUN_140a8cb22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a8cb22(longlong param_1,longlong *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  double *pdVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ushort *puVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined8 *local_380;
  longlong local_378;
  float local_36c;
  double local_368;
  longlong *local_360;
  double local_358;
  double dStack_350;
  ushort *local_340;
  double local_338;
  double dStack_330;
  double local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  ushort *local_298;
  undefined8 uStack_290;
  double local_280;
  double dStack_278;
  double local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined1 local_250 [256];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_360 = param_2;
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x138) + 0x234)) &&
     (iVar17 = *(int *)(*(longlong *)(param_1 + 0x138) + 0x240), 0 < iVar17)) {
    local_258 = 0;
    local_254 = 0;
    local_150 = 0;
    local_148 = 0x1000000000;
    local_138 = 0;
    local_130 = 0x2000000000;
    uStack_128 = 0xffffffff;
    local_100 = 0;
    local_f8 = 0;
    FUN_140a8e708(local_250,iVar17 * 2);
    lVar8 = *(longlong *)(param_1 + 0x138);
    local_378 = param_1;
    if (0 < *(int *)(lVar8 + 0x240)) {
      lVar16 = 0;
      do {
        lVar3 = *(longlong *)(lVar8 + 0x238);
        if (0 < *(int *)(lVar3 + lVar16 * 0x20)) {
          uVar15 = 0;
          iVar17 = 0;
          do {
            local_318 = (double)CONCAT44(local_318._4_4_,uVar15 | (uint)lVar16);
            FUN_140a8d520(&local_258);
            iVar17 = iVar17 + 1;
            uVar15 = uVar15 + 0x10000;
          } while (iVar17 < *(int *)(lVar3 + lVar16 * 0x20));
          lVar8 = *(longlong *)(local_378 + 0x138);
          param_1 = local_378;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(lVar8 + 0x240));
    }
    local_298 = (ushort *)0x0;
    uStack_290 = 0;
    puVar12 = &local_258;
    dVar9 = (double)FUN_140a8ea00(puVar12,*(undefined4 *)(lVar8 + 0x234),0);
    uVar30 = SUB84(puVar12,0);
    lVar8 = *(longlong *)(param_1 + 0x38);
    lVar16 = *(longlong *)(lVar8 + 0x1c8);
    if (lVar16 == 0) {
      local_368 = DAT_14c8464f0;
      uVar30 = 0;
      uVar31 = 0x3ff00000;
      local_358 = DAT_14c8464e0;
      dStack_350 = DAT_14c8464e8;
    }
    else {
      local_368 = *(double *)(lVar16 + 0x270);
      local_358 = *(double *)(lVar16 + 0x260);
      dStack_350 = *(double *)(lVar16 + 0x268);
      dVar28 = *(double *)(lVar16 + 0x240);
      dVar25 = *(double *)(lVar16 + 0x248);
      dVar20 = *(double *)*(undefined1 (*) [16])(lVar16 + 0x250);
      dVar4 = *(double *)(lVar16 + 600);
      local_308 = *(undefined1 (*) [16])(lVar16 + 0x250);
      pdVar11 = *(double **)(lVar16 + 0x228);
      local_318 = dVar28;
      dStack_310 = dVar25;
      if (pdVar11 == (double *)0x0) {
        uVar30 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar16 + 0x228) = pdVar11;
      }
      lVar16 = -(ulonglong)(dVar4 != pdVar11[3]);
      auVar27._8_4_ = (int)-(ulonglong)(dVar25 != pdVar11[1]);
      auVar27._0_8_ = -(ulonglong)(dVar28 != *pdVar11);
      auVar27._12_4_ = (int)(-(ulonglong)(dVar25 != pdVar11[1]) >> 0x20);
      iVar17 = movmskpd(SUB84(dVar9,0),auVar27);
      auVar29._8_4_ = (int)lVar16;
      auVar29._0_8_ = -(ulonglong)(dVar20 != pdVar11[2]);
      auVar29._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      uVar15 = movmskpd(uVar30,auVar29);
      if ((uVar15 & 0x3fffffff) != 0 || iVar17 != 0) {
        pdVar11[2] = (double)local_308._0_8_;
        pdVar11[3] = (double)local_308._8_8_;
        *pdVar11 = local_318;
        pdVar11[1] = dStack_310;
        FUN_1448052ee(&local_318,&local_280);
        pdVar11[6] = local_270;
        pdVar11[4] = local_280;
        pdVar11[5] = dStack_278;
      }
      lVar8 = *(longlong *)(lVar8 + 0x1c8);
      if (lVar8 == 0) {
        uVar30 = 0;
        uVar31 = 0x3ff00000;
      }
      else {
        uVar30 = *(undefined4 *)(lVar8 + 0x280);
        uVar31 = *(undefined4 *)(lVar8 + 0x284);
      }
    }
    local_2a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x250);
    uVar10 = (**(code **)(*local_360 + 0x10))();
    lVar8 = *(longlong *)(param_1 + 0x138);
    lVar16 = FUN_14576987e(uVar10);
    local_2a8 = *(double *)(lVar8 + 0x2b8) + *(double *)(lVar16 + 0x40);
    local_2b0 = *(double *)(lVar8 + 0x2b0) + *(double *)(lVar16 + 0x38);
    local_2b8 = *(double *)(lVar8 + 0x2a8) + *(double *)(lVar16 + 0x30);
    if ((longlong)(int)uStack_290 != 0) {
      local_36c = (float)(double)CONCAT44(uVar31,uVar30);
      local_340 = local_298 + (longlong)(int)uStack_290 * 2;
      local_338 = dStack_350;
      dStack_330 = dStack_350;
      puVar18 = local_298;
      do {
        uVar2 = *puVar18;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x238);
        do {
          do {
            uVar15 = rand();
            fVar19 = (float)(uVar15 & 0x7fff) / 32767.0;
            dVar9 = (double)(fVar19 + fVar19 + -1.0);
            uVar15 = rand();
            fVar19 = (float)(uVar15 & 0x7fff) / 32767.0;
            dVar28 = (double)(fVar19 + fVar19 + -1.0);
            uVar15 = rand();
            fVar19 = (float)(uVar15 & 0x7fff) / 32767.0;
            dVar25 = (double)(fVar19 + fVar19 + -1.0);
            dVar20 = dVar25 * dVar25 + dVar9 * dVar9 + dVar28 * dVar28;
          } while (1.0 < dVar20);
        } while (dVar20 < 9.999999747378752e-05);
        dVar4 = 1.0 / SQRT(dVar20);
        dVar28 = dVar28 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar20 = 0.0;
        if ((((dVar9 != 0.0) || (NAN(dVar9))) || (dVar28 != 0.0)) || (NAN(dVar28))) {
          dVar20 = atan2(dVar28,dVar9);
          dVar20 = dVar20 * 57.29577951308232;
        }
        dVar4 = dVar4 * dVar25;
        dVar28 = SQRT(dVar9 * dVar9 + dVar28 * dVar28);
        dVar9 = 0.0;
        if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar28 != 0.0 || (NAN(dVar28))))) {
          dVar9 = atan2(dVar4,dVar28);
          dVar9 = dVar9 * 57.29577951308232;
        }
        do {
          do {
            uVar15 = rand();
            fVar19 = (float)(uVar15 & 0x7fff) / 32767.0;
            dVar25 = (double)(fVar19 + fVar19 + -1.0);
            uVar15 = rand();
            fVar19 = (float)(uVar15 & 0x7fff) / 32767.0;
            dVar28 = (double)(fVar19 + fVar19 + -1.0);
            uVar15 = rand();
            fVar19 = (float)(uVar15 & 0x7fff) / 32767.0;
            dVar6 = (double)(fVar19 + fVar19 + -1.0);
            dVar4 = dVar6 * dVar6 + dVar25 * dVar25 + dVar28 * dVar28;
          } while (1.0 < dVar4);
        } while (dVar4 < 9.999999747378752e-05);
        lVar16 = lVar8 + (ulonglong)uVar2 * 0x20;
        uVar15 = rand();
        cVar1 = *(char *)(lVar8 + 8 + (ulonglong)uVar2 * 0x20);
        uVar7 = rand();
        param_1 = local_378;
        if (cVar1 == '\x01') {
          pfVar13 = (float *)(lVar16 + 0x10);
          pfVar14 = (float *)(lVar16 + 0xc);
        }
        else {
          pfVar13 = (float *)(*(longlong *)(local_378 + 0x138) + 0x24c);
          pfVar14 = (float *)(*(longlong *)(local_378 + 0x138) + 0x248);
        }
        dVar22 = 1.0 / SQRT(dVar4);
        dVar21 = (double)(((float)(uVar15 & 0x7fff) / 32767.0) * 5.0 + 5.0);
        dVar5 = dVar22 * dVar25 * dVar21 + local_358;
        dVar4 = dVar28 * dVar22 * dVar21 + local_338;
        fVar19 = *pfVar14;
        auVar26._8_8_ = dVar20;
        auVar26._0_8_ = dVar9;
        auVar27 = divpd(auVar26,_DAT_1499387d0);
        auVar27 = roundpd(auVar27,auVar27,3);
        auVar29 = roundpd(ZEXT416((uint)fVar19),_DAT_149931140,3);
        dVar6 = dVar6 * dVar22 * dVar21 + local_368;
        local_328 = (double)(((*pfVar13 - fVar19) * ((float)(uVar7 & 0x7fff) / 32767.0) + fVar19) *
                            local_36c);
        uStack_320 = 0;
        dVar9 = (dVar9 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar28 = (dVar20 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar25 = (0.0 - auVar29._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar20 = (0.0 - auVar29._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar22 = sin(dVar9);
        dVar21 = sin(dVar28);
        dVar23 = sin(dVar25);
        sin(dVar20);
        dVar24 = cos(dVar9);
        dVar28 = cos(dVar28);
        dVar25 = cos(dVar25);
        cos(dVar20);
        dVar9 = dVar21 * dVar22 * dVar23 + dVar28 * dVar24 * dVar25;
        local_318 = dVar22 * dVar21 * dVar25 - dVar24 * dVar28 * dVar23;
        dStack_310 = -(dVar22 * dVar28 * dVar25) - dVar24 * dVar21 * dVar23;
        local_308._8_4_ = SUB84(dVar9,0);
        local_308._0_8_ = -(dVar28 * dVar22 * dVar23) + dVar21 * dVar24 * dVar25;
        local_308._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_2f8._8_4_ = SUB84(dVar4,0);
        local_2f8._0_8_ = dVar5;
        local_2f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_2e0 = 0;
        local_2d8 = local_328;
        dStack_2d0 = local_328;
        local_2c8 = local_328;
        uStack_2c0 = 0;
        local_260 = 0;
        lVar8 = *(longlong *)(param_1 + 0x138);
        local_2e8 = dVar6;
        if ((*(char *)(lVar8 + 0x280) == '\x01') && ((double *)(lVar8 + 0x288) != &local_280)) {
          dStack_278 = 0.0;
          local_280 = *(double *)(lVar8 + 0x288);
          local_270 = 0.0;
          uVar10 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x290));
          dStack_278 = (double)FUN_14477b664(uVar10);
          local_270 = *(double *)(lVar8 + 0x298);
          local_268 = *(undefined8 *)(lVar8 + 0x2a0);
          local_260 = 1;
        }
        uVar10 = (**(code **)(*local_360 + 0x10))();
        local_380 = &local_2a0;
        local_388 = &local_2b8;
        FUN_140a8dd08(uVar10,*(undefined8 *)(lVar16 + 0x18),&local_280,&local_318);
        puVar18 = puVar18 + 2;
      } while (puVar18 != local_340);
    }
    if (local_298 != (ushort *)0x0) {
      FUN_1400020a8(local_298);
    }
    local_f8 = 0;
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    FUN_140a8dac6(local_250);
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8d520 FUN_140a8d520 body=278 status=ok
// SIG undefined FUN_140a8d520(void)

undefined8 FUN_140a8d520(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_48 [36];
  float local_24;
  float *local_20;
  float *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    if (param_1[0x44] != param_1[0x4d]) {
      pfVar3 = param_1 + 0x4e;
      if (*(float **)(param_1 + 0x56) != (float *)0x0) {
        pfVar3 = *(float **)(param_1 + 0x56);
      }
      fVar4 = pfVar3[(int)param_1[0x58] - 1U & (uint)*param_3];
      if (fVar4 != -NAN) {
        pfVar3 = *(float **)(param_1 + 0x42);
        if (*(float **)(param_1 + 0x42) == (float *)0x0) {
          pfVar3 = param_1 + 2;
        }
        do {
          pfVar1 = pfVar3 + (longlong)(int)fVar4 * 4;
          if (pfVar3[(longlong)(int)fVar4 * 4] == *param_3) {
            if (pfVar1 + 1 != (float *)0x0 && pfVar1 != (float *)0x0) {
              fVar4 = *param_1 - pfVar1[1];
              goto LAB_140a8d58b;
            }
            break;
          }
          fVar4 = pfVar1[2];
        } while (fVar4 != -NAN);
      }
    }
    fVar4 = *param_1;
LAB_140a8d58b:
    *param_1 = fVar4 + param_2;
    local_18 = &local_24;
    local_20 = param_3;
    FUN_140a8d638(param_1 + 2,local_c,&local_20,0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140a8d638 FUN_140a8d638 body=292 status=ok
// SIG undefined FUN_140a8d638(void)

undefined4 *
FUN_140a8d638(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a8d884(param_1,local_50);
  piVar1 = (int *)param_3[1];
  iVar4 = *(int *)*param_3;
  *local_48 = iVar4;
  local_48[1] = *piVar1;
  local_48[2] = -1;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_140a8d7d2(param_1,iVar4,local_48);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    cVar3 = FUN_140a8d75e(param_1,*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300),0);
    if (cVar3 == '\0') {
      uVar5 = (longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)iVar4;
      iVar4 = (int)uVar5;
      local_48[3] = iVar4;
      lVar6 = *(longlong *)(param_1 + 0x150);
      if (*(longlong *)(param_1 + 0x150) == 0) {
        lVar6 = param_1 + 0x130;
      }
      local_48[2] = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x158) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x150);
      if (*(longlong *)(param_1 + 0x150) == 0) {
        lVar6 = param_1 + 0x130;
      }
      *(undefined4 *)(lVar6 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 0x158) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8d75e FUN_140a8d75e body=115 status=ok
// SIG undefined FUN_140a8d75e(void)

undefined8 FUN_140a8d75e(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 3) {
    iVar4 = 8;
  }
  if (param_2 < 4) {
    iVar4 = 8;
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x158))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x158) <= iVar4)))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x158) = iVar4;
    FUN_140a8e78c(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140a8d7d2 FUN_140a8d7d2 body=178 status=ok
// SIG undefined FUN_140a8d7d2(void)

void FUN_140a8d7d2(longlong param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300) != 1) &&
     (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 300))) {
    lVar3 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x150);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar3 = param_1;
      }
      do {
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        if (*(int *)(lVar3 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_145b23f6a(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140a8d82c;
    }
  }
  uVar2 = 0;
LAB_140a8d82c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140a8d884 FUN_140a8d884 body=578 status=ok
// SIG undefined FUN_140a8d884(void)

int * FUN_140a8d884(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 300) == 0) {
    iVar9 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar9 + 1;
    if (*(int *)(param_1 + 0x10c) == iVar9) {
      FUN_1470b6a54(param_1,iVar9);
    }
    iVar11 = *(int *)(param_1 + 0x120);
    if (iVar11 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar2 = iVar11 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    lVar8 = param_1 + 0x110;
    iVar7 = iVar11 + 1;
    iVar10 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar10 >> 5 == iVar2) {
      *(int *)(param_1 + 0x120) = iVar7;
    }
    else {
      if (*(int *)(param_1 + 0x124) <= iVar11) {
        if (iVar11 + 0x20U < 0x40) {
          iVar7 = 0x20;
          iVar2 = iVar11;
        }
        else {
          uVar12 = iVar11 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x124) + 0x1fU < 0x40) {
            uVar6 = 4;
            if (4 < uVar12) {
              uVar6 = uVar12;
            }
          }
          else {
            uVar6 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar6 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar7 = -0x20;
          if ((int)uVar12 <= iVar2) {
            iVar7 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_1 + 0x120);
        }
        *(int *)(param_1 + 0x124) = iVar7;
        FUN_14008f53c(lVar8,iVar2);
        iVar7 = *(int *)(param_1 + 0x120) + 1;
      }
      iVar2 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      *(int *)(param_1 + 0x120) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
        if (*(longlong *)(param_1 + 0x118) == 0) {
          lVar3 = lVar8;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar3 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar3 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x118);
    }
    bVar5 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar8 = param_1;
    }
    iVar9 = *(int *)(param_1 + 0x128);
    lVar3 = (longlong)iVar9;
    iVar11 = *(int *)(lVar8 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 0x128) = iVar11;
    iVar2 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 300) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar11 * 0x10) = 0xffffffff;
    }
  }
  lVar8 = param_1 + 0x110;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x118);
  }
  iVar11 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar11 = iVar9;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  *param_2 = iVar9;
  lVar8 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar8 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + lVar8;
  return param_2;
}



// FUNCTION 140a8dac6 FUN_140a8dac6 body=62 status=ok
// SIG undefined FUN_140a8dac6(void)

void FUN_140a8dac6(longlong param_1)

{
  FUN_140a8db04(param_1,0);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a8db04 FUN_140a8db04 body=137 status=ok
// SIG undefined FUN_140a8db04(void)

void FUN_140a8db04(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != param_2) {
    FUN_140a8db8e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x128) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x124)) && (*(int *)(param_1 + 0x124) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x124) = uVar1;
  FUN_14008f53c(param_1 + 0x110,0);
  return;
}



// FUNCTION 140a8db8e FUN_140a8db8e body=236 status=ok
// SIG undefined FUN_140a8db8e(void)

void FUN_140a8db8e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x10, 0x10 < param_2)) {
    uVar1 = (longlong)(int)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)(int)param_2 & 0xfffffffffffffff]
                          ];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = (int)uVar2;
  FUN_140a8dc7a(param_1,*(undefined4 *)(param_1 + 0x108),uVar2,0x10);
  return;
}



// FUNCTION 140a8dc7a FUN_140a8dc7a body=141 status=ok
// SIG undefined FUN_140a8dc7a(void)

void FUN_140a8dc7a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a8dd08 FUN_140a8dd08 body=922 status=ok
// SIG undefined FUN_140a8dd08(void)

void FUN_140a8dd08(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [16];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8 [12];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248 [12];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 local_180 [9];
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (((param_2 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
     ((*(longlong *)(param_1 + 0x20) != 0 && (cVar3 = FUN_1405bb4f2(), cVar3 != '\0'))))
  goto LAB_140a8dfbf;
  local_2c8 = 0;
  uStack_2c0 = 0;
  puVar9 = &DAT_14c846480;
  puVar10 = local_2b8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_258 = 0;
  uStack_250 = 0;
  puVar9 = &DAT_14c846480;
  puVar10 = local_248;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_188 = 0;
  local_198 = 0;
  lStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar9 = &DAT_14c964b40;
  puVar10 = local_180;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = &DAT_14c846480;
  puVar10 = local_138;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a0 = 0x3ecccccd42c80000;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (lVar6 != 0) {
    FUN_1447210f0(lVar6);
  }
  local_80 = *(undefined8 *)(lVar2 + 0x48);
  uVar5 = FUN_14477b664(*(undefined8 *)(lVar2 + 0x50));
  uStack_78 = FUN_14477b664(uVar5);
  local_70 = *(undefined8 *)(lVar2 + 0x58);
  local_d8 = *param_6;
  FUN_1400bbfc4(local_2e8,param_2);
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  local_1b8 = CONCAT44(uStack_2d4,local_2d8);
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  uVar1 = *(uint *)(param_2 + 0xc);
  if (cVar3 == '\0') {
LAB_140a8def7:
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar6 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar8;
      }
    }
  }
  else {
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) goto LAB_140a8def7;
    uStack_1d0 = 0;
    iVar4 = 0;
  }
  uStack_1d0 = CONCAT44(iVar4,(undefined4)uStack_1d0);
  if (*(char *)(param_3 + 4) == '\x01') {
    local_b8 = *param_3;
    uVar5 = FUN_14477b664(param_3[1]);
    uStack_b0 = FUN_14477b664(uVar5);
    local_a8 = param_3[2];
    local_a0 = param_3[3];
  }
  FUN_140a8e0a4(param_1,param_4,param_5,&local_2c8);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (lStack_190 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
LAB_140a8dfbf:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8e0a4 FUN_140a8e0a4 body=1634 status=ok
// SIG undefined FUN_140a8e0a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a8e0a4(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_4f8 [32];
  undefined1 local_4d8;
  undefined1 local_4c8 [8];
  longlong *local_4c0;
  undefined2 local_4b8 [4];
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined1 local_4a0 [48];
  undefined8 *local_470;
  int local_468;
  longlong local_460;
  undefined4 local_458;
  undefined2 local_448 [4];
  undefined8 local_440;
  longlong *local_438;
  undefined1 local_430 [41];
  undefined1 local_407;
  undefined1 local_405;
  undefined8 *local_400;
  int local_3f8;
  longlong local_3f0;
  undefined4 local_3e8;
  double local_3d8;
  double local_3d0;
  double local_3c8 [34];
  longlong local_2b8;
  longlong local_290;
  longlong local_190;
  undefined8 local_148 [12];
  double local_e8;
  double local_e0;
  double local_d8;
  longlong local_d0;
  code *local_c8 [2];
  undefined8 *local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_140a8e58a;
  lVar8 = FUN_1447210f0();
  if (lVar8 == 0) goto LAB_140a8e58a;
  lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x20));
  iVar7 = FUN_14490d72a(lVar8);
  if ((iVar7 == 1) || (*(longlong *)(param_4 + 0x1f0) == 0)) goto LAB_140a8e58a;
  lVar9 = FUN_1405bbea6();
  lVar11 = *(longlong *)(lVar9 + 0x110);
  if (lVar11 == 0) {
    FUN_140aa6c08(lVar9);
    lVar11 = *(longlong *)(lVar9 + 0x110);
    uVar19 = (undefined4)*param_3;
    uVar20 = (undefined4)((ulonglong)*param_3 >> 0x20);
    uVar21 = (undefined4)param_3[1];
    uVar22 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    uVar23 = (undefined4)param_3[2];
    uVar24 = (undefined4)((ulonglong)param_3[2] >> 0x20);
    if (lVar11 != 0) goto LAB_140a8e15f;
    fVar14 = 20000.0;
    bVar6 = true;
    lVar11 = 0;
  }
  else {
    uVar19 = (undefined4)*param_3;
    uVar20 = (undefined4)((ulonglong)*param_3 >> 0x20);
    uVar21 = (undefined4)param_3[1];
    uVar22 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    uVar23 = (undefined4)param_3[2];
    uVar24 = (undefined4)((ulonglong)param_3[2] >> 0x20);
LAB_140a8e15f:
    fVar14 = *(float *)(lVar11 + 0x7c);
    bVar6 = false;
  }
  dVar5 = (double)CONCAT44(uVar22,uVar21);
  dVar4 = (double)CONCAT44(uVar20,uVar19);
  dVar16 = (double)CONCAT44(uVar24,uVar23);
  dVar17 = dVar16 * (double)CONCAT44(uVar24,uVar23) +
           dVar4 * (double)CONCAT44(uVar20,uVar19) + dVar5 * (double)CONCAT44(uVar22,uVar21);
  if (fVar14 < (float)SQRT(dVar17)) {
    dVar15 = 1.0 / SQRT(dVar17);
    if (9.99999993922529e-09 < dVar17) {
      dVar4 = (double)CONCAT44(uVar20,uVar19) * dVar15;
      dVar5 = (double)CONCAT44(uVar22,uVar21) * dVar15;
    }
    dVar16 = (double)fVar14;
    dVar4 = dVar4 * dVar16;
    dVar5 = dVar5 * dVar16;
    dVar16 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar17) & CONCAT44(uVar24,uVar23) |
                     (ulonglong)((double)CONCAT44(uVar24,uVar23) * dVar15) &
                     -(ulonglong)(9.99999993922529e-09 < dVar17)) * dVar16;
  }
  local_4d8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 800))
            (*(longlong **)(param_1 + 0x20),1,&local_3d8,local_448);
  local_3c8[0] = (double)param_2[6] - local_3c8[0];
  local_3d0 = (double)param_2[5] - local_3d0;
  local_3d8 = (double)param_2[4] - local_3d8;
  dVar17 = local_3c8[0] * local_3c8[0] + local_3d8 * local_3d8 + local_3d0 * local_3d0;
  if (9.99999993922529e-09 < dVar17) {
    dVar17 = 1.0 / SQRT(dVar17);
    local_3d8 = local_3d8 * dVar17;
    local_3d0 = local_3d0 * dVar17;
    local_3c8[0] = local_3c8[0] * dVar17;
  }
  if (bVar6) {
    dVar17 = 8000.0;
  }
  else {
    dVar17 = (double)*(float *)(lVar11 + 0x78);
  }
  dVar15 = local_3d8 * dVar17;
  dVar18 = local_3d0 * dVar17;
  dVar17 = local_3c8[0] * dVar17;
  if ((dVar4 == 0.0 && dVar5 == 0.0) && dVar16 == 0.0) {
    dVar15 = dVar15 + dVar15;
    dVar18 = dVar18 + dVar18;
    dVar17 = dVar17 + dVar17;
  }
  lVar11 = *(longlong *)(param_1 + 0x20);
  lVar9 = lVar11;
  if (lVar11 == 0) {
    lVar9 = _DAT_000001b0;
  }
  FUN_1411374ca(local_4b8,lVar11,param_4 + 0x1f0,param_2);
  FUN_140faf1c8(local_4b8,*(undefined8 *)(param_1 + 0x20));
  FUN_140faf27a(local_4b8,lVar9);
  local_3d8 = (double)(param_1 + 0x30);
  FUN_141413e7e(local_3c8,param_4);
  puVar12 = local_148;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *param_2;
    param_2 = param_2 + 1;
    puVar12 = puVar12 + 1;
  }
  local_c8[0] = (code *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_e8 = dVar4 + dVar15;
  local_e0 = dVar5 + dVar18;
  local_d8 = dVar16 + dVar17;
  local_d0 = param_1;
  puVar10 = (undefined8 *)FUN_14001cc68(800,0x10);
  *puVar10 = &PTR_FUN_14b40fc90;
  puVar10[2] = local_3d8;
  local_b8 = puVar10;
  FUN_141413e7e(puVar10 + 4,local_3c8);
  puVar12 = local_148;
  puVar13 = puVar10 + 0x54;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  if (puVar10 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_c8[0] = FUN_143d96c64;
  }
  FUN_140faf186(local_4b8,local_c8);
  local_448[0] = local_4b8[0];
  local_440 = local_4b0;
  local_438 = local_4a8;
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
  }
  FUN_140697b8a(local_430,local_4a0);
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if (local_290 != 0) {
    FUN_1400020a8();
  }
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(local_460,local_458);
  if (local_460 != 0) {
    FUN_1400020a8();
  }
  if (local_468 == 0) {
LAB_140a8e47b:
    if (local_470 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_470 != (undefined8 *)0x0) {
    (**(code **)*local_470)(local_470,0);
    FUN_1446efa72(&local_470,0,0,0x10);
    local_468 = 0;
    goto LAB_140a8e47b;
  }
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar2 = (int *)((longlong)local_4a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4a8 + 0x10))(local_4a8);
      }
    }
  }
  if ((iVar7 == 3) || (*(char *)(lVar8 + 0x152) == '\x04')) {
    local_407 = 1;
    local_405 = 1;
    FUN_140faf7b4(local_440,local_448);
    FUN_14127efc4(local_440);
  }
  else {
    FUN_140faf12e(local_448,local_4c8);
    if (local_4c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4c0)(local_4c0);
        LOCK();
        piVar2 = (int *)((longlong)local_4c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4c0 + 0x10))(local_4c0);
        }
      }
    }
  }
  FUN_140861e20(local_3f0,local_3e8);
  if (local_3f0 != 0) {
    FUN_1400020a8();
  }
  if (local_3f8 == 0) {
LAB_140a8e54f:
    if (local_400 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_400 != (undefined8 *)0x0) {
    (**(code **)*local_400)(local_400,0);
    FUN_1446efa72(&local_400,0,0,0x10);
    local_3f8 = 0;
    goto LAB_140a8e54f;
  }
  plVar1 = local_438;
  if (local_438 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_438 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_438)(local_438);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_140a8e58a:
  if ((local_80 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8e708 FUN_140a8e708 body=132 status=ok
// SIG undefined FUN_140a8e708(void)

void FUN_140a8e708(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 3) {
    iVar3 = 8;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 8;
  }
  if ((((int)(uint)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x158))) &&
     (*(int *)(param_1 + 0x158) <= iVar3)) {
    FUN_1488d37f6(param_1);
    FUN_140a8db04(param_1,param_2 & 0xffffffff);
    return;
  }
  FUN_140a8db04(param_1,param_2 & 0xffffffff);
  *(int *)(param_1 + 0x158) = iVar3;
  FUN_140a8e78c(param_1);
  return;
}



// FUNCTION 140a8e78c FUN_140a8e78c body=495 status=ok
// SIG undefined FUN_140a8e78c(void)

void FUN_140a8e78c(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1446efa72(param_1 + 0x150,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x158);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x130;
    uVar7 = 0;
    FUN_140a8e97c(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x158) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x110;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0x100);
        if (*(longlong *)(local_70 + 0x100) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4 * 0x10;
        uVar10 = (longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)*(int *)(lVar6 + lVar5);
        iVar9 = (int)uVar10;
        *(int *)(lVar6 + 0xc + lVar5) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar6 + 8 + lVar5) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x158) - 1U & uVar10) * 4);
        lVar6 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x158) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8e97c FUN_140a8e97c body=132 status=ok
// SIG undefined FUN_140a8e97c(void)

void FUN_140a8e97c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a8ea00 FUN_140a8ea00 body=970 status=ok
// SIG undefined FUN_140a8ea00(void)

undefined4 FUN_140a8ea00(float *param_1,int param_2,char param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  code *pcVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar2 = *(uint *)(param_4 + 1);
  fVar23 = *param_1;
  if (0 < (int)uVar2 && param_3 == '\0') {
    uVar8 = 0;
    do {
      if (param_1[0x44] != param_1[0x4d]) {
        fVar3 = *(float *)(*param_4 + uVar8 * 4);
        pfVar12 = *(float **)(param_1 + 0x56);
        if (*(float **)(param_1 + 0x56) == (float *)0x0) {
          pfVar12 = param_1 + 0x4e;
        }
        fVar14 = pfVar12[(int)param_1[0x58] - 1U & (uint)fVar3];
        if (fVar14 != -NAN) {
          pfVar12 = *(float **)(param_1 + 0x42);
          if (*(float **)(param_1 + 0x42) == (float *)0x0) {
            pfVar12 = param_1 + 2;
          }
          do {
            pfVar18 = pfVar12 + (longlong)(int)fVar14 * 4;
            if (pfVar12[(longlong)(int)fVar14 * 4] == fVar3) {
              if (pfVar18 + 1 != (float *)0x0 && pfVar18 != (float *)0x0) {
                fVar23 = fVar23 - pfVar18[1];
              }
              break;
            }
            fVar14 = pfVar18[2];
          } while (fVar14 != -NAN);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  uVar6 = uVar2;
  if (0 < param_2) {
    iVar19 = 0;
    pcVar10 = rand_exref;
    do {
      uVar6 = (*pcVar10)();
      fVar3 = param_1[0x4a];
      if (fVar3 == 0.0) {
        uVar11 = 1;
        uVar8 = 0;
        fVar14 = 0.0;
        iVar9 = 0;
      }
      else {
        pfVar12 = *(float **)(param_1 + 0x48);
        if (*(float **)(param_1 + 0x48) == (float *)0x0) {
          pfVar12 = param_1 + 0x46;
        }
        fVar14 = *pfVar12;
        if (fVar14 == 0.0) {
          iVar9 = (int)fVar3 + 0x1e;
          if (-1 < (int)fVar3 + -1) {
            iVar9 = (int)fVar3 + -1;
          }
          uVar8 = 0;
          uVar11 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar11 = uVar8;
          }
          iVar9 = 0;
          do {
            if (uVar11 == uVar8) goto LAB_140a8ead6;
            iVar9 = iVar9 + 0x20;
            fVar14 = pfVar12[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (fVar14 == 0.0);
        }
        else {
          uVar8 = 0;
          iVar9 = 0;
        }
        uVar11 = (ulonglong)(-(int)fVar14 & (uint)fVar14);
        uVar1 = uVar11 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        fVar14 = (float)((iVar9 - ((uint)lVar17 ^ 0x3f)) + 0x3e);
        if ((int)fVar3 <= (int)fVar14) {
          fVar14 = fVar3;
        }
      }
      if (fVar14 != fVar3) {
        pfVar12 = *(float **)(param_1 + 0x42);
        if (*(float **)(param_1 + 0x42) == (float *)0x0) {
          pfVar12 = param_1 + 2;
        }
        fVar21 = ((float)(uVar6 & 0x7fff) / 32767.0) * fVar23;
        lVar17 = *param_4;
        iVar4 = (int)param_4[1];
        uVar6 = 0xffffffff;
        fVar22 = 0.0;
        do {
          pfVar18 = pfVar12 + (longlong)(int)fVar14 * 4;
          if (iVar4 != 0 && param_3 == '\0') {
            lVar20 = 0;
            do {
              if (*(float *)(lVar17 + lVar20) == *pfVar18) goto LAB_140a8ebb3;
              lVar20 = lVar20 + 4;
            } while ((longlong)iVar4 * 4 - lVar20 != 0);
          }
          bVar5 = fVar22 <= fVar21;
          fVar22 = fVar22 + pfVar18[1];
          if ((bVar5) && (fVar21 <= fVar22)) {
            if (param_3 == '\0') {
              fVar23 = fVar23 - pfVar18[1];
            }
            *(uint *)(param_4 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
              FUN_1446f48e2(param_4);
              lVar17 = *param_4;
            }
            *(float *)(lVar17 + (longlong)iVar4 * 4) = *pfVar18;
            pcVar10 = rand_exref;
            break;
          }
LAB_140a8ebb3:
          uVar6 = uVar6 & ~(uint)uVar11;
          pfVar18 = *(float **)(param_1 + 0x48);
          if (*(float **)(param_1 + 0x48) == (float *)0x0) {
            pfVar18 = param_1 + 0x46;
          }
          iVar7 = (int)uVar8;
          lVar20 = (longlong)iVar7;
          fVar14 = (float)((uint)pfVar18[lVar20] & uVar6);
          pcVar10 = rand_exref;
          if (fVar14 == 0.0) {
            iVar15 = (int)fVar3 + -1;
            if ((int)fVar3 + -1 < 0) {
              iVar15 = (int)fVar3 + 0x1e;
            }
            iVar15 = iVar15 >> 5;
            iVar16 = iVar15;
            if (iVar15 < iVar7) {
              iVar16 = iVar7;
            }
            if (iVar15 <= iVar7) break;
            lVar13 = 0;
            while( true ) {
              iVar9 = iVar9 + 0x20;
              fVar14 = pfVar18[lVar20 + lVar13 + 1];
              if (fVar14 != 0.0) break;
              lVar13 = lVar13 + 1;
              if (iVar16 - lVar20 == lVar13) goto LAB_140a8ead6;
            }
            uVar8 = (ulonglong)(iVar7 + (int)lVar13 + 1);
            uVar6 = 0xffffffff;
          }
          uVar11 = (ulonglong)(-(int)fVar14 & (uint)fVar14);
          uVar1 = uVar11 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          fVar14 = (float)((iVar9 - ((uint)lVar20 ^ 0x3f)) + 0x3e);
        } while ((int)fVar14 < (int)fVar3);
      }
LAB_140a8ead6:
      iVar19 = iVar19 + 1;
    } while (iVar19 != param_2);
    uVar6 = *(uint *)(param_4 + 1);
  }
  return CONCAT31((int3)(uVar6 - uVar2 >> 8),uVar6 - uVar2 == param_2);
}



// FUNCTION 140a8ede4 FUN_140a8ede4 body=156 status=ok
// SIG undefined FUN_140a8ede4(void)

void FUN_140a8ede4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
      ((*(byte *)(lVar1 + 0x155) & 0x20) == 0)) &&
     (FUN_1409ce496(param_1,&local_20), *(longlong *)(param_1 + 0xc50) != local_20)) {
    *(longlong *)(param_1 + 0xc50) = local_20;
    FUN_140bfca4e(param_1 + 0xd10,&DAT_14cb8c1e8,&local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8ee82 FUN_140a8ee82 body=470 status=ok
// SIG undefined FUN_140a8ee82(void)

void FUN_140a8ee82(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = *param_3;
  FUN_1409d0fb6(*param_1);
  lVar1 = *param_1;
  local_38 = DAT_14c8463f0;
  if (*(int *)(lVar1 + 0x38) < 1) {
    iVar2 = *(int *)(lVar1 + 0xb0);
LAB_140a8eeee:
    if (iVar2 != 0) {
LAB_140a8effa:
      fVar4 = *(float *)(lVar1 + 0x94);
      fVar5 = (1.0 / fVar4) * *(float *)(lVar1 + 0xbc);
      fVar3 = *(float *)(param_1 + 6);
      if (fVar3 < fVar5) {
        if (iVar2 == 2) {
          fVar5 = fVar5 - fVar3;
        }
        else {
          if (iVar2 != 1) goto LAB_140a8ef14;
          fVar5 = (fVar5 - fVar3) * 0.5;
        }
        local_38 = (double)fVar5;
      }
      goto LAB_140a8ef14;
    }
  }
  else {
    iVar2 = *(int *)(lVar1 + 0xb0);
    if (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x60) != '\x01') goto LAB_140a8eeee;
    if (iVar2 == 0) {
      iVar2 = 2;
      goto LAB_140a8effa;
    }
    if (iVar2 != 2) goto LAB_140a8effa;
  }
  fVar3 = *(float *)(param_1 + 6);
  fVar4 = *(float *)(lVar1 + 0x94);
LAB_140a8ef14:
  local_30 = DAT_14c8463f8 * (double)fVar4;
  local_38 = local_38 * (double)fVar4;
  local_40 = (double)*(float *)((longlong)param_1 + 0x34);
  local_48 = (double)fVar3;
  FUN_140a8f05a();
  (**(code **)(*(longlong *)*param_1 + 8))();
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a8ef89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a8f05a FUN_140a8f05a body=398 status=ok
// SIG undefined FUN_140a8f05a(void)

void FUN_140a8f05a(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(double *)(param_1 + 0xd0) != *param_2) ||
       (NAN(*(double *)(param_1 + 0xd0)) || NAN(*param_2))) ||
      (*(double *)(param_1 + 0xd8) != param_2[1])) ||
     (NAN(*(double *)(param_1 + 0xd8)) || NAN(param_2[1]))) {
    dVar1 = param_2[1];
    *(double *)(param_1 + 0xd0) = *param_2;
    *(double *)(param_1 + 0xd8) = dVar1;
    if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x48)) {
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
    }
  }
  dVar1 = *(double *)(param_1 + 0xe0);
  dVar2 = *(double *)(param_1 + 0xe8);
  if (((dVar1 != *param_3) || (NAN(dVar1) || NAN(*param_3))) ||
     ((dVar2 != param_3[1] || (NAN(dVar2) || NAN(param_3[1]))))) {
    dVar5 = param_3[1];
    *(double *)(param_1 + 0xe0) = *param_3;
    *(double *)(param_1 + 0xe8) = dVar5;
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      dVar2 = *(double *)(param_1 + 0xe8) - dVar2;
      dVar1 = *(double *)(param_1 + 0xe0) - dVar1;
      plVar8 = *(longlong **)(param_1 + 0x30);
      plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x38) * 0xd;
      do {
        plVar8[6] = (longlong)((double)plVar8[6] - dVar1);
        plVar8[7] = (longlong)((double)plVar8[7] - dVar2);
        lVar6 = plVar8[1];
        if ((longlong)(int)lVar6 != 0) {
          lVar3 = *plVar8;
          lVar7 = 0;
          do {
            plVar4 = *(longlong **)(lVar3 + lVar7);
            (**(code **)(*plVar4 + 0x38))(plVar4,&local_90);
            local_78 = local_88 - dVar2;
            local_80 = local_90 - dVar1;
            (**(code **)(*plVar4 + 0x30))(plVar4,&local_80);
            lVar7 = lVar7 + 0x10;
          } while ((longlong)(int)lVar6 * 0x10 != lVar7);
        }
        plVar8 = plVar8 + 0xd;
      } while (plVar8 != plVar9);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8f1ea FUN_140a8f1ea body=286 status=ok
// SIG undefined FUN_140a8f1ea(void)

undefined8 FUN_140a8f1ea(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x970) != 0) {
    local_38 = (code *)0x0;
    plStack_30 = (longlong *)0x0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = *(undefined4 *)param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar2 = FUN_1404d3d28();
    if (cVar2 == '\0') {
      if (local_38 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_78 = local_38;
      local_70 = (int)plStack_30 + -1;
      if ((int)plStack_30 == 0) {
        local_70 = 0;
      }
      cVar2 = FUN_146febdfc(*(undefined8 *)(param_1 + 0x970));
      if (local_38 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (cVar2 != '\0') {
        uVar3 = 0;
        goto LAB_140a8f25e;
      }
    }
  }
  FUN_1446f82e2(&local_38,*(undefined4 *)(param_3 + 1),*param_3,1);
  pcVar1 = local_38;
  plStack_30 = &local_48;
  local_38 = FUN_142adf94e;
  local_48 = param_1;
  local_40 = param_2;
  uVar3 = FUN_140a8f30a(param_1 + 0x8d0,pcVar1,&local_38);
LAB_140a8f25e:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a8f30a FUN_140a8f30a body=891 status=ok
// SIG undefined FUN_140a8f30a(void)

undefined8 FUN_140a8f30a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_9a8 [32];
  undefined1 *local_988;
  undefined4 local_980;
  code *local_978;
  longlong **local_970;
  longlong local_968;
  longlong local_960;
  longlong *local_958;
  longlong *plStack_950;
  longlong *local_948;
  undefined1 *local_940;
  longlong local_938;
  undefined4 local_930;
  uint local_92c;
  undefined4 uStack_928;
  undefined4 local_924;
  longlong local_918;
  undefined4 local_910;
  longlong local_908 [16];
  longlong *local_888;
  undefined8 local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  char local_860;
  undefined1 local_858 [2070];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_9a8;
  local_960 = param_2;
  if (param_2 == 0) {
LAB_140a8f3a9:
    uVar7 = 0;
  }
  else {
    uVar5 = (uint)param_2;
    iVar9 = (int)((ulonglong)param_2 >> 0x20);
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      iVar9 + (uVar5 << 0x10 | uVar5 & 0xffff) + (uVar1 << 0x13 | uVar1 & 0xffff) +
                      ((uVar5 & 0xffff) >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x60) == param_2) goto LAB_140a8f3a9;
          iVar8 = *(int *)((longlong)iVar8 * 0x60 + *param_1 + 0x58);
        } while (iVar8 != -1);
      }
    }
    local_878 = local_858;
    local_860 = '\0';
    local_868 = local_42;
    local_870 = local_878;
    FUN_14005eb5c(&local_960,&local_878);
    puVar4 = local_870;
    puVar3 = local_878;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c99e028) && (FUN_144b3d300(&DAT_14c99e028), DAT_14c99e028 == -1)) {
      FUN_1446ddc76(&DAT_14c99e020,L"/Disabled",1);
      _Init_thread_footer(&DAT_14c99e028);
    }
    local_888 = (longlong *)0x0;
    local_880 = 0x1000000001;
    local_938 = 0;
    local_930 = 0;
    local_958 = (longlong *)0x0;
    plStack_950 = (longlong *)0x0;
    local_92c = 0x80;
    uStack_928 = 0xffffffff;
    local_924 = 0;
    local_918 = 0;
    local_910 = 0;
    local_908[0] = param_2;
    FUN_140a8fb92(param_1,(uVar5 << 0x10 | uVar5 & 0xffff) + iVar9 +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar5 & 0xffff) >> 4),&local_960,
                  &local_958);
    local_910 = 0;
    if (local_918 != 0) {
      FUN_1400020a8();
    }
    uVar2 = (ulonglong)plStack_950 >> 0x20;
    plStack_950 = (longlong *)((ulonglong)plStack_950 & 0xffffffff00000000);
    if ((int)uVar2 != 0) {
      FUN_14472eb64(&local_958,0);
    }
    uStack_928 = 0xffffffff;
    local_924 = 0;
    local_930 = 0;
    if (0x80 < local_92c) {
      local_92c = 0x80;
      FUN_1446efbd8(&local_948,0);
    }
    if (local_938 != 0) {
      FUN_1400020a8();
    }
    if (local_958 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_948 = &local_968;
    local_940 = puVar3;
    local_980 = (undefined4)((ulonglong)((longlong)puVar4 - (longlong)puVar3) >> 1);
    local_938 = CONCAT44(local_938._4_4_,local_980);
    local_978 = FUN_142aeb7b0;
    local_988 = puVar3;
    local_970 = &local_958;
    local_968 = param_2;
    local_958 = param_1;
    plStack_950 = local_908;
    FUN_140a8f686();
    plVar6 = local_888;
    if (local_888 == (longlong *)0x0) {
      plVar6 = local_908;
    }
    if ((longlong)(int)local_880 != 0) {
      lVar10 = (longlong)(int)local_880 << 3;
      do {
        local_958 = *(longlong **)((longlong)plVar6 + lVar10 + -8);
        (*(code *)*param_3)(param_3[1],&local_958);
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    if (local_888 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_860 == '\x01') {
      FUN_1400020a8(local_878);
    }
    uVar7 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_9a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140a8f686 FUN_140a8f686 body=662 status=ok
// SIG undefined FUN_140a8f686(void)

void FUN_140a8f686(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort *puVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort *local_60;
  int local_58;
  undefined8 local_50;
  int iStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (ushort *)0x0;
  iStack_48 = 0;
  local_60 = (ushort *)0x0;
  local_58 = 0;
  local_78 = (undefined4)*param_1;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_70 = (undefined4)param_1[1];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_140a8f91e(&local_78,&local_50);
  iVar12 = iStack_48;
  if ((longlong)iStack_48 < 1) {
    if (iStack_48 == 0) {
      if ((int)param_1[1] < 1) {
        iVar12 = 0;
      }
      else {
        uVar1 = *(ushort *)*param_1;
        uVar8 = 1L << ((byte)uVar1 & 0x3f);
        uVar7 = uVar8 & 0x800000000000;
        if (0x3f < uVar1) {
          uVar7 = 0;
        }
        uVar8 = (ulonglong)((uint)uVar8 & 0x10000000);
        if ((uVar1 & 0xffc0) != 0x40) {
          uVar8 = 0;
        }
        iVar12 = 0;
        if (uVar8 != 0 || uVar7 != 0) {
          iVar12 = 1;
          local_50 = (ushort *)*param_1;
          iStack_48 = iVar12;
        }
      }
    }
  }
  else if ((local_50[(longlong)iStack_48 + -1] == 0x3a) && (0 < local_58)) {
    uVar1 = *local_60;
    uVar8 = 1L << ((byte)uVar1 & 0x3f);
    uVar7 = uVar8 & 0x800000000000;
    if (0x3f < uVar1) {
      uVar7 = 0;
    }
    uVar8 = (ulonglong)((uint)uVar8 & 0x10000000);
    if ((uVar1 & 0xffc0) != 0x40) {
      uVar8 = 0;
    }
    if (uVar8 != 0 || uVar7 != 0) {
      iVar12 = iStack_48 + 1;
      iStack_48 = iVar12;
    }
  }
  puVar11 = local_50 + iVar12;
  lVar3 = *param_1;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  uVar8 = 0;
  do {
    lVar5 = lVar3 + (longlong)(int)uVar7 * 2 + 2;
    lVar9 = (longlong)(int)uVar7 * -2;
    do {
      lVar6 = lVar3;
      if (lVar9 == 0) break;
      uVar1 = *(ushort *)(lVar5 + -4);
      uVar10 = 1L << ((byte)uVar1 & 0x3f);
      uVar7 = uVar10 & 0x800000000000;
      if (0x3f < uVar1) {
        uVar7 = uVar8;
      }
      uVar10 = (ulonglong)((uint)uVar10 & 0x10000000);
      if ((uVar1 & 0xffc0) != 0x40) {
        uVar10 = uVar8;
      }
      lVar5 = lVar5 + -2;
      lVar9 = lVar9 + 2;
      lVar6 = lVar5;
    } while (uVar10 != 0 || uVar7 != 0);
    iVar4 = (int)((ulonglong)(lVar6 - lVar3) >> 1);
    *(int *)(param_1 + 1) = iVar4;
    if ((ushort *)(lVar3 + (longlong)iVar4 * 2) <= puVar11) break;
    local_88 = *param_1;
    local_80 = (undefined4)param_1[1];
    local_7c = *(undefined4 *)((longlong)param_1 + 0xc);
    cVar2 = (*(code *)*param_2)(param_2[1],&local_88);
    if (cVar2 == '\0') goto LAB_140a8f87d;
    lVar3 = *param_1;
    lVar5 = lVar3 + (longlong)(int)param_1[1] * 2 + 2;
    lVar9 = (longlong)(int)param_1[1] * -2;
    do {
      lVar6 = lVar3;
      if (lVar9 == 0) break;
      uVar1 = *(ushort *)(lVar5 + -4);
      uVar10 = 1L << ((byte)uVar1 & 0x3f);
      uVar7 = uVar10 & 0x800000000000;
      if (0x3f < uVar1) {
        uVar7 = uVar8;
      }
      uVar10 = (ulonglong)((uint)uVar10 & 0x10000000);
      if ((uVar1 & 0xffc0) != 0x40) {
        uVar10 = uVar8;
      }
      lVar5 = lVar5 + -2;
      lVar9 = lVar9 + 2;
      lVar6 = lVar5;
    } while (uVar10 == 0 && uVar7 == 0);
    uVar7 = (ulonglong)(lVar6 - lVar3) >> 1;
    *(int *)(param_1 + 1) = (int)uVar7;
  } while ((int)uVar7 != 0);
  if (iVar12 != 0) {
    local_98 = (undefined4)local_50;
    uStack_94 = local_50._4_4_;
    iStack_90 = iStack_48;
    uStack_8c = uStack_44;
    (*(code *)*param_2)(param_2[1]);
  }
LAB_140a8f87d:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8f91e FUN_140a8f91e body=628 status=ok
// SIG undefined FUN_140a8f91e(void)

void FUN_140a8f91e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  short *in_R11;
  
  iVar9 = (int)param_1[1];
  psVar11 = (short *)(longlong)iVar9;
  if (psVar11 == (short *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    return;
  }
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  if (sVar1 == 0x3a) {
    *param_2 = (longlong)psVar3;
    *(uint *)(param_2 + 1) = (uint)(0 < iVar9);
    if (iVar9 != 1) {
      iVar9 = (int)param_1[1];
      iVar8 = 1;
      if (1 < iVar9) {
        iVar8 = iVar9;
      }
      uVar7 = iVar8 - 1;
      lVar5 = (longlong)iVar9 * 2 + *param_1;
      uVar6 = (ulonglong)uVar7 * 2;
LAB_140a8f9d3:
      *param_3 = lVar5 - uVar6;
      *(uint *)(param_3 + 1) = uVar7;
      return;
    }
LAB_140a8f97f:
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
  }
  else {
    if (iVar9 != 1) {
      if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
        if ((psVar3[1] == 0x5c) || (psVar3[1] == 0x2f)) {
          if (iVar9 != 2) {
            psVar12 = psVar3 + 2;
            if (iVar9 < 3) {
              psVar11 = psVar3 + (longlong)psVar11;
LAB_140a8fa76:
              do {
                sVar1 = *psVar12;
                if (sVar1 == 0x5c) {
                  in_R11 = psVar12;
                }
                psVar4 = psVar12;
                if ((sVar1 == 0x2f) || (psVar4 = in_R11, sVar1 == 0x5c)) {
                  if (psVar4 != (short *)0x0) {
                    iVar8 = (int)((ulonglong)((longlong)psVar4 - (longlong)psVar3) >> 1);
                    if (iVar9 <= iVar8) {
                      iVar8 = iVar9;
                    }
                    if (iVar8 < 1) {
                      iVar8 = 0;
                    }
                    *param_2 = (longlong)psVar3;
                    *(int *)(param_2 + 1) = iVar8;
                    uVar2 = *(uint *)(param_1 + 1);
                    uVar7 = uVar2 - iVar8;
                    if ((int)uVar2 <= (int)(uVar2 - iVar8)) {
                      uVar7 = uVar2;
                    }
                    if ((int)uVar7 < 1) {
                      uVar7 = 0;
                    }
                    lVar5 = (longlong)(int)uVar2 * 2 + *param_1;
                    uVar6 = (ulonglong)(uVar7 * 2);
                    goto LAB_140a8f9d3;
                  }
                  break;
                }
                psVar12 = psVar12 + 1;
              } while (psVar12 != psVar11);
            }
            else {
              in_R11 = (short *)0x2;
              do {
                if ((*psVar12 != 0x5c) && (*psVar12 != 0x2f)) {
                  if (iVar9 != (int)in_R11) {
                    psVar11 = psVar12 + ((longlong)psVar11 - (longlong)in_R11);
                    goto LAB_140a8fa76;
                  }
                  break;
                }
                in_R11 = (short *)((longlong)in_R11 + 1);
                psVar12 = psVar12 + 1;
              } while (psVar11 != in_R11);
            }
          }
          lVar5 = param_1[1];
          *param_2 = *param_1;
          param_2[1] = lVar5;
          goto LAB_140a8f97f;
        }
      }
      else {
        if (psVar3[1] == 0x3a) {
          iVar8 = 2;
          if (iVar9 < 2) {
            iVar8 = iVar9;
          }
          iVar9 = 0;
          if (0 < iVar8) {
            iVar9 = iVar8;
          }
          *param_2 = (longlong)psVar3;
          *(int *)(param_2 + 1) = iVar9;
          iVar9 = (int)param_1[1];
          iVar8 = 2;
          if (2 < iVar9) {
            iVar8 = iVar9;
          }
          *param_3 = (longlong)iVar9 * 2 + *param_1 + (ulonglong)(iVar8 - 2U) * -2;
          *(uint *)(param_3 + 1) = iVar8 - 2U;
          return;
        }
        if (2 < iVar9) {
          psVar12 = (short *)0x0;
          while (sVar1 = psVar3[(longlong)(psVar12 + 1)], sVar1 != 0x5c) {
            if (sVar1 == 0x3a) {
              iVar8 = (int)psVar12;
              iVar10 = iVar9;
              if (iVar8 + 3 < iVar9) {
                iVar10 = iVar8 + 3;
              }
              if (iVar10 < 1) {
                iVar10 = 0;
              }
              *param_2 = (longlong)psVar3;
              *(int *)(param_2 + 1) = iVar10;
              if (iVar9 + -3 != iVar8) {
                iVar9 = (int)param_1[1];
                iVar8 = (iVar9 - iVar8) + -3;
                if (iVar9 <= iVar8) {
                  iVar8 = iVar9;
                }
                iVar10 = 0;
                if (0 < iVar8) {
                  iVar10 = iVar8;
                }
                *param_3 = ((longlong)iVar9 * 2 + *param_1) - (ulonglong)(uint)(iVar10 * 2);
                *(int *)(param_3 + 1) = iVar10;
                return;
              }
              goto LAB_140a8f97f;
            }
            if ((sVar1 == 0x2f) ||
               (psVar12 = (short *)((longlong)psVar12 + 1), psVar11 + -1 == psVar12)) break;
          }
        }
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    lVar5 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = lVar5;
  }
  return;
}



// FUNCTION 140a8fb92 FUN_140a8fb92 body=747 status=ok
// SIG undefined FUN_140a8fb92(void)

void FUN_140a8fb92(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x60) == *param_3) {
          if (lVar1 != 0) goto LAB_140a8fd70;
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x58);
      } while (iVar7 != -1);
    }
  }
  FUN_140a8fe7e(param_1,local_40);
  *local_38 = *param_3;
  local_38[5] = 0;
  *(undefined4 *)(local_38 + 6) = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined8 *)((longlong)local_38 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_38 + 0x3c) = 0;
  local_38[9] = 0;
  *(undefined4 *)(local_38 + 10) = 0;
  if (local_38 + 1 != param_4) {
    local_38[1] = *param_4;
    *param_4 = 0;
    *(int *)(local_38 + 2) = (int)param_4[1];
    *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
    if (param_4[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_4 + 0x14);
      lVar1 = param_4[3];
      uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(int *)(local_38 + 3) = (int)param_4[2];
      *(undefined4 *)((longlong)local_38 + 0x1c) = uVar2;
      *(int *)(local_38 + 4) = (int)lVar1;
      *(undefined4 *)((longlong)local_38 + 0x24) = uVar3;
    }
    if (local_38[5] != 0) {
      FUN_1400020a8();
    }
    local_38[5] = param_4[4];
    param_4[4] = 0;
    *(int *)(local_38 + 6) = (int)param_4[5];
    *(undefined4 *)((longlong)local_38 + 0x34) = *(undefined4 *)((longlong)param_4 + 0x2c);
    param_4[5] = 0;
    *(int *)(local_38 + 7) = (int)param_4[6];
    *(undefined4 *)((longlong)local_38 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0x34);
    param_4[6] = 0xffffffff;
  }
  if (param_4[8] == 0) {
    *(int *)(local_38 + 8) = (int)param_4[7];
  }
  if (local_38[9] != 0) {
    FUN_1400020a8();
  }
  local_38[9] = param_4[8];
  param_4[8] = 0;
  *(int *)(local_38 + 10) = (int)param_4[9];
  *(undefined4 *)(param_4 + 9) = 0;
  *(undefined4 *)(local_38 + 0xb) = 0xffffffff;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar7 = 1;
  if (uVar6 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      if (iVar8 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x60);
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x60) == *local_38) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_14472eaf0((longlong)_Dst + 8);
            memmove(_Dst,local_38,0x58);
            FUN_1470239fe(param_1,local_40[0],1);
            goto LAB_140a8fd70;
          }
          iVar8 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar8 != -1);
      }
    }
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar1 & 0x1f);
    }
  }
  if (((int)uVar6 < 1) || (iVar7 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)local_38 + 0x5c) = param_2;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_38 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)
     ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_144a550a6(param_1);
  }
LAB_140a8fd70:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a8fe7e FUN_140a8fe7e body=484 status=ok
// SIG undefined FUN_140a8fe7e(void)

int * FUN_140a8fe7e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14488f93c(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x60);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x60) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 140a90062 FUN_140a90062 body=501 status=ok
// SIG undefined FUN_140a90062(void)

void FUN_140a90062(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  char local_a0 [12];
  int local_94;
  longlong local_78;
  longlong local_68;
  undefined8 local_60;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = param_1 + -0x418;
  FUN_140a90258(lVar1,&local_68);
  if (local_68 != 0) {
    iVar3 = *(int *)(param_1 + 200);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xc0);
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar4 + 0x68 + lVar8) == DAT_14cbcd1e0) {
          uVar9 = (int)(lVar8 >> 3) * -0xf0f0f0f;
          if (((iVar3 <= (int)uVar9 || (int)uVar9 < 0) ||
              (lVar8 = (ulonglong)(uVar9 & 0x7fffffff) * 0x88, *(int *)(lVar4 + 0x80 + lVar8) < 1))
             || (pfVar2 = (float *)(lVar4 + lVar8 + 0x84), 0.0 < *pfVar2 || *pfVar2 == 0.0)) break;
          local_c8 = local_60;
          FUN_143d26f48(local_68,local_a0,local_68 + 0x28);
          if (local_a0[0] == '\x01') {
            if (local_94 == 0) break;
          }
          else {
            cVar5 = FUN_140321d1a(local_a0);
            if (cVar5 == '\0') break;
          }
          uVar6 = FUN_1447210f0(lVar1);
          plVar7 = (longlong *)FUN_14007a5e6(uVar6);
          if (plVar7 != (longlong *)0x0) {
            local_b8 = 0;
            uStack_b0 = 0;
            FUN_1406f1bc8(param_1 + 0x808,local_a0);
            (**(code **)(*plVar7 + 0x68))(plVar7,local_a0,&local_b8);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if ((int)uStack_b0 == 0) {
              *(undefined1 *)(param_1 + 0x24c0) = 1;
              FUN_145be1ef4(lVar1);
              FUN_141364042(lVar1);
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        lVar8 = lVar8 + 0x88;
      } while ((longlong)iVar3 * 0x88 != lVar8);
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a90258 FUN_140a90258 body=145 status=ok
// SIG undefined FUN_140a90258(void)

longlong * FUN_140a90258(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  if ((longlong)*(int *)(param_1 + 0xce8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xce0);
    lVar5 = (longlong)*(int *)(param_1 + 0xce8) << 6;
    do {
      plVar1 = *(longlong **)(lVar4 + 0x30);
      uVar2 = FUN_1465c2a12();
      lVar3 = (**(code **)(*plVar1 + 0x28))(plVar1,uVar2);
      if (lVar3 != 0) {
        *param_2 = lVar3;
        FUN_1447715ec(param_2 + 2,lVar4 + 8);
        lVar4 = FUN_14479d2ce(lVar4);
        param_2[1] = lVar4;
        return param_2;
      }
      lVar4 = lVar4 + 0x40;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  return param_2;
}



// FUNCTION 140a902ea FUN_140a902ea body=1857 status=ok
// SIG undefined FUN_140a902ea(void)

void FUN_140a902ea(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_f8 [43];
  char local_cd;
  uint local_cc;
  longlong local_c8;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  uint *local_88;
  undefined1 local_80 [24];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_141501dc0(&DAT_14cb841d0);
  *(undefined1 *)(param_1 + 0x41c) = 1;
  FUN_140741ce4(local_80,5);
  local_c8 = param_1 + 0x2f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_c8;
  if (*(int *)(param_1 + 0x310) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar14 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar14 = *(int *)(param_1 + 0x310);
  }
  lVar17 = local_60;
  iVar9 = (int)local_68;
  uVar19 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar13 = local_50;
  if (local_58._4_4_ != iVar14 || local_60 != local_c8) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x10 + (longlong)iVar8 * 0x20) != 0) {
        FUN_140a916fe(param_1);
      }
      uVar19 = uVar19 & ~(uint)uVar15;
      lVar5 = *(longlong *)(lVar17 + 0x10);
      if (*(longlong *)(lVar17 + 0x10) == 0) {
        lVar5 = lVar17;
      }
      iVar10 = *(int *)(lVar17 + 0x18);
      lVar16 = (longlong)iVar9;
      uVar12 = *(uint *)(lVar5 + lVar16 * 4) & uVar19;
      if (uVar12 == 0) {
        iVar8 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar8 = iVar10 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar4 = iVar8;
        if (iVar8 < iVar9) {
          iVar4 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar18 = 0;
          do {
            uVar12 = *(uint *)(lVar5 + lVar16 * 4 + 4 + lVar18 * 4);
            if (uVar12 != 0) {
              iVar9 = iVar9 + (int)lVar18 + 1;
              uVar19 = 0xffffffff;
              goto LAB_140a90451;
            }
            iVar13 = iVar13 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar4 - lVar16 != lVar18);
          uVar19 = 0xffffffff;
          iVar9 = iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar10;
      }
      else {
LAB_140a90451:
        uVar15 = (ulonglong)(-uVar12 & uVar12);
        uVar11 = uVar15 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar8) {
          iVar8 = iVar10;
        }
      }
    } while (iVar8 != iVar14 || lVar17 != local_c8);
  }
  *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
  *(undefined1 *)(param_1 + 0x41c) = 0;
  if (*(char *)(param_1 + 0x41d) != '\0') {
    *(undefined1 *)(param_1 + 0x41d) = 0;
    FUN_1447f69b6(param_1 + 0x390);
  }
  local_68 = 0x100000000;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0x310) == 0) {
    uVar15 = 1;
    local_cc = 0xffffffff;
    iVar14 = 0;
    local_58._4_4_ = 0;
    local_a8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_a8 = local_68 & 0xffffffff;
    uVar15 = local_68 >> 0x20;
    local_cc = (uint)local_58;
    iVar14 = *(int *)(param_1 + 0x310);
  }
  iVar9 = local_58._4_4_;
  iVar8 = local_50;
  lVar17 = param_1;
  lVar5 = local_60;
  if (local_58._4_4_ != iVar14 || local_60 != local_c8) {
    do {
      local_a0 = lVar5;
      local_b0 = lVar17;
      local_c0 = iVar14;
      lVar17 = *(longlong *)(local_b0 + 0x2e8);
      lVar5 = *(longlong *)(lVar17 + 0x10 + (longlong)iVar9 * 0x20);
      local_bc = iVar8;
      local_98 = uVar15;
      if ((lVar5 != 0) && (plVar3 = *(longlong **)(lVar5 + 0x30), plVar3 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar16 = FUN_14042c486();
        if ((lVar16 != 0) &&
           ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar5 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
             lVar16 + 0x30)))) {
          local_cd = *(char *)((longlong)plVar3 + 0x29);
          if (local_cd != '\0') {
            FUN_140a90a66(&DAT_14cb841d0,plVar3);
          }
          lVar17 = *(longlong *)(lVar17 + (longlong)iVar9 * 0x20 + 0x10);
          local_88 = (uint *)(lVar17 + 0x80);
          uVar19 = *(uint *)(lVar17 + 0x98);
          local_b8 = (ulonglong)uVar19;
          if (uVar19 == 0) {
            uVar20 = 1;
            uVar15 = 0;
            iVar14 = 0;
            uVar12 = 0;
          }
          else {
            puVar7 = *(uint **)(lVar17 + 0x90);
            if (*(uint **)(lVar17 + 0x90) == (uint *)0x0) {
              puVar7 = local_88;
            }
            uVar12 = *puVar7;
            if (uVar12 == 0) {
              iVar14 = uVar19 + 0x1e;
              if (-1 < (int)(uVar19 - 1)) {
                iVar14 = uVar19 - 1;
              }
              uVar15 = 0;
              uVar11 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar11 = uVar15;
              }
              iVar14 = 0;
              do {
                if (uVar11 == uVar15) goto LAB_140a9082e;
                iVar14 = iVar14 + 0x20;
                uVar12 = puVar7[uVar15 + 1];
                uVar15 = uVar15 + 1;
              } while (uVar12 == 0);
            }
            else {
              uVar15 = 0;
              iVar14 = 0;
            }
            uVar20 = (ulonglong)(-uVar12 & uVar12);
            uVar11 = uVar20 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar12 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if ((int)uVar19 <= (int)uVar12) {
              uVar12 = uVar19;
            }
          }
          if (uVar12 != uVar19) {
            uVar19 = 0xffffffff;
            local_90 = lVar17;
            do {
              lVar17 = *(longlong *)(local_90 + 0x70);
              plVar3 = *(longlong **)
                        (*(longlong *)(lVar17 + 0x10 + (longlong)(int)uVar12 * 0x20) + 0x30);
              if (plVar3 == (longlong *)0x0) {
LAB_140a9073f:
                plVar3 = *(longlong **)
                          (*(longlong *)(lVar17 + (longlong)(int)uVar12 * 0x20 + 0x10) + 0x30);
                if (plVar3 != (longlong *)0x0) {
                  lVar17 = (**(code **)(*plVar3 + 8))(plVar3);
                  lVar5 = FUN_14005f2f0();
                  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar17 + 0x38))) {
                    plVar6 = (longlong *)0x0;
                    if (*(longlong *)
                         (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                        lVar5 + 0x30) {
                      plVar6 = plVar3;
                    }
                    if ((local_cd != '\0') && (plVar6 != (longlong *)0x0)) {
                      cVar1 = *(char *)((longlong)plVar6 + 0x29);
                      goto joined_r0x000140a907ac;
                    }
                  }
                }
              }
              else {
                lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
                lVar16 = FUN_140a90a2c();
                if (((lVar16 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar16 + 0x38))) ||
                   (*(longlong *)
                     (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
                    lVar16 + 0x30)) goto LAB_140a9073f;
                if (local_cd != '\0') {
                  cVar1 = *(char *)((longlong)plVar3 + 0x29);
joined_r0x000140a907ac:
                  if (cVar1 != '\0') {
                    FUN_140a90a66(&DAT_14cb841d0,plVar3);
                  }
                }
              }
              uVar19 = uVar19 & ~(uint)uVar20;
              puVar7 = *(uint **)(local_90 + 0x90);
              if (*(uint **)(local_90 + 0x90) == (uint *)0x0) {
                puVar7 = local_88;
              }
              uVar2 = *(uint *)(local_90 + 0x98);
              iVar9 = (int)uVar15;
              lVar17 = (longlong)iVar9;
              uVar12 = puVar7[lVar17] & uVar19;
              if (uVar12 == 0) {
                iVar8 = uVar2 + 0x1e;
                if (-1 < (int)(uVar2 - 1)) {
                  iVar8 = uVar2 - 1;
                }
                iVar8 = iVar8 >> 5;
                iVar14 = iVar14 + 0x20;
                iVar13 = iVar8;
                if (iVar8 < iVar9) {
                  iVar13 = iVar9;
                }
                if (iVar9 < iVar8) {
                  lVar5 = 0;
                  do {
                    uVar12 = puVar7[lVar17 + lVar5 + 1];
                    if (uVar12 != 0) {
                      uVar15 = (ulonglong)(iVar9 + (int)lVar5 + 1);
                      uVar19 = 0xffffffff;
                      goto LAB_140a9070a;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar5 = lVar5 + 1;
                  } while (iVar13 - lVar17 != lVar5);
                  uVar19 = 0xffffffff;
                  iVar9 = iVar13;
                }
                uVar15 = (ulonglong)(iVar9 + 1);
                uVar12 = uVar2;
              }
              else {
LAB_140a9070a:
                uVar20 = (ulonglong)(-uVar12 & uVar12);
                uVar11 = uVar20 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                uVar12 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if ((int)uVar2 <= (int)uVar12) {
                  uVar12 = uVar2;
                }
              }
            } while (uVar12 != (uint)local_b8);
          }
        }
      }
LAB_140a9082e:
      local_cc = local_cc & ~(uint)local_98;
      lVar17 = *(longlong *)(local_a0 + 0x10);
      if (*(longlong *)(local_a0 + 0x10) == 0) {
        lVar17 = local_a0;
      }
      iVar14 = *(int *)(local_a0 + 0x18);
      iVar9 = (int)local_a8;
      lVar5 = (longlong)iVar9;
      uVar19 = *(uint *)(lVar17 + lVar5 * 4) & local_cc;
      iVar8 = local_bc;
      if (uVar19 == 0) {
        iVar13 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar13 = iVar14 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar8 = local_bc + 0x20;
        iVar10 = iVar13;
        if (iVar13 < iVar9) {
          iVar10 = iVar9;
        }
        if (iVar9 < iVar13) {
          lVar16 = 0;
          do {
            uVar19 = *(uint *)(lVar17 + lVar5 * 4 + 4 + lVar16 * 4);
            if (uVar19 != 0) {
              local_a8 = (ulonglong)(iVar9 + (int)lVar16 + 1);
              local_cc = 0xffffffff;
              goto LAB_140a908bd;
            }
            iVar8 = iVar8 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar5 != lVar16);
          local_cc = 0xffffffff;
          iVar9 = iVar10;
        }
        local_a8 = (ulonglong)(iVar9 + 1);
        uVar15 = local_98;
        iVar9 = iVar14;
      }
      else {
LAB_140a908bd:
        uVar15 = (ulonglong)(-uVar19 & uVar19);
        uVar11 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar9 = (iVar8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar9) {
          iVar9 = iVar14;
        }
      }
      iVar14 = local_c0;
      lVar17 = local_b0;
      lVar5 = local_a0;
    } while (iVar9 != local_c0 || local_a0 != local_c8);
  }
  FUN_145769bdc(&DAT_14cb841d0);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a90a2c FUN_140a90a2c body=57 status=ok
// SIG undefined FUN_140a90a2c(void)

void FUN_140a90a2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a070 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a070 = FUN_140002ddd(FUN_146524aa8,uVar1,L"InventoryPartDef");
  }
  return;
}



// FUNCTION 140a90a66 FUN_140a90a66 body=3223 status=ok
// SIG undefined FUN_140a90a66(void)

ulonglong FUN_140a90a66(longlong param_1,longlong param_2)

{
  short *psVar1;
  short *psVar2;
  uint *puVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  undefined8 unaff_RBP;
  ulonglong uVar26;
  undefined7 uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  longlong *plVar32;
  undefined4 *puVar33;
  uint uVar34;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  int local_84 [3];
  ulonglong local_78;
  uint local_70;
  longlong local_68;
  int *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = param_2;
  if ((param_2 == 0) ||
     ((((ulonglong)*(byte *)(param_2 + 0x29) < 5 &&
       (piVar17 = (int *)(param_1 + 0x38 + (ulonglong)*(byte *)(param_2 + 0x29) * 4),
       *piVar17 = *piVar17 + 1, *(char *)(param_2 + 0x29) == '\0')) ||
      (*(longlong *)(param_2 + 0x20) != *(longlong *)(param_1 + 0x10))))) {
LAB_140a91114:
    uVar26 = 0;
    goto LAB_140a91116;
  }
  piVar17 = *(int **)(param_2 + 8);
  if (piVar17 == (int *)0x0) {
    piVar17 = &DAT_14c9485f0;
  }
  if (((*piVar17 == 0) || (iVar11 = piVar17[1], iVar11 == 0)) || (*piVar17 == DAT_14c948000)) {
LAB_140a912ae:
    local_70 = DAT_14c948620;
    local_78 = DAT_14c948618;
  }
  else {
    if ((iVar11 < 2) && (piVar17[9] < 1)) {
      puVar22 = (ulonglong *)(piVar17 + 2);
    }
    else {
      puVar22 = *(ulonglong **)(piVar17 + 6);
    }
    if (iVar11 < 1) goto LAB_140a912ae;
    local_70 = (uint)puVar22[1];
    local_78 = *puVar22;
  }
  if (*(char *)(param_2 + 0x28) != '\x01') {
    FUN_1400f0e12(piVar17,local_84,1);
    uVar34 = (uint)local_78;
    if (local_70 != 0) {
      uVar34 = local_70 >> 0xd ^ (uint)local_78 - local_70;
      uVar21 = uVar34 << 8 ^ (-0x61c88647 - local_70) - uVar34;
      uVar29 = uVar21 >> 0xd ^ (local_70 - uVar34) - uVar21;
      uVar28 = uVar29 >> 0xc ^ (uVar34 - uVar21) - uVar29;
      uVar34 = uVar28 << 0x10 ^ (uVar21 - uVar29) - uVar28;
      uVar21 = uVar34 >> 5 ^ (uVar29 - uVar28) - uVar34;
      uVar28 = uVar21 >> 3 ^ (uVar28 - uVar34) - uVar21;
      uVar34 = uVar28 << 10 ^ (uVar34 - uVar21) - uVar28;
      uVar34 = uVar34 >> 0xf ^ uVar21 - (uVar28 + uVar34);
    }
    iVar11 = FUN_140988aa2((longlong *)(param_1 + 0xb8),uVar34,&local_78);
    if ((((iVar11 != -1) &&
         (lVar14 = (longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0xb8),
         plVar13 = (longlong *)(lVar14 + 0x10), plVar13 != (longlong *)0x0 && lVar14 != 0)) &&
        (lVar14 = *plVar13, lVar14 != 0)) && (local_84[0] != 0)) {
      local_58 = &local_68;
      local_60 = local_84;
      FUN_14096a31a(lVar14 + 0x58,local_4c,&local_60,0);
      if (*(short *)(param_1 + 0x52) <= *(short *)(local_68 + 0x2a)) {
        plVar13 = (longlong *)
                  FUN_1406fe82e(lVar14 + 8,(int)*(short *)(local_68 + 0x2a),local_68 + 0x2a,
                                &local_68);
        lVar14 = *plVar13;
        if ((lVar14 != 0) && (lVar14 != local_68)) {
          puVar33 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar14 + 8) != (undefined4 *)0x0) {
            puVar33 = *(undefined4 **)(lVar14 + 8);
          }
          FUN_1400f0e12(puVar33,&local_60,1);
          if (*(char *)(param_1 + 0x22) == '\0') goto LAB_140a91114;
        }
      }
    }
    uVar26 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    goto LAB_140a91116;
  }
  plVar13 = (longlong *)FUN_14001cc68(0xa8);
  memset(plVar13 + 1,0,0xa0);
  *(undefined8 *)((longlong)plVar13 + 0x34) = 0xffffffff00000080;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  *(undefined8 *)((longlong)plVar13 + 0x84) = 0xffffffff00000080;
  *plVar13 = param_2;
  iVar11 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar11 + 1U;
  if (*(uint *)(param_1 + 100) < iVar11 + 1U) {
    FUN_14655deae(param_1 + 0x58,iVar11);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar11 * 8) = plVar13;
  local_a0 = (longlong *)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar11 = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0xc0) = iVar11 + 1;
    if (*(int *)(param_1 + 0xc4) == iVar11) {
      FUN_1447711aa(local_a0,iVar11);
    }
    iVar10 = *(int *)(param_1 + 0xe0);
    if (iVar10 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar9 = iVar10 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    lVar18 = param_1 + 200;
    iVar16 = iVar10 + 1;
    iVar25 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar25 = iVar10;
    }
    if (iVar25 >> 5 == iVar9) {
      *(int *)(param_1 + 0xe0) = iVar16;
    }
    else {
      if (*(int *)(param_1 + 0xe4) <= iVar10) {
        iVar9 = iVar10;
        if (iVar10 + 0x20U < 0xa0) {
          iVar16 = 0x80;
        }
        else {
          uVar34 = iVar10 + 0x20U >> 5;
          if (*(int *)(param_1 + 0xe4) + 0x1fU < 0xa0) {
            uVar28 = 4;
            if (4 < uVar34) {
              uVar28 = uVar34;
            }
          }
          else {
            uVar28 = uVar34 + (uVar34 * 3 >> 3) + 0x10;
          }
          uVar26 = (ulonglong)(uVar28 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar21 = (uint)(uVar26 + 0xf);
              if (uVar28 < 0x1ffd) {
                uVar26 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 >> 4]];
              }
              else {
                uVar19 = uVar26 + 0xf & 0xfffffffffffffff0;
                if (uVar19 < 0x7ff1) {
                  bVar15 = (&DAT_14c841e00)[uVar21 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar15) {
                    uVar20 = (ulonglong)bVar15;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar15;
                  do {
                    uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_140a9139f;
                    lVar14 = uVar20 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar14 != 0x33);
                }
                uVar26 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar26 = (ulonglong)DAT_14c841df8;
                }
                uVar26 = -uVar26 & (uVar19 + uVar26) - 1;
              }
            }
            else {
              uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
              iVar9 = *(int *)(param_1 + 0xe0);
            }
          }
LAB_140a9139f:
          iVar12 = (int)(uVar26 >> 2);
          iVar16 = -0x20;
          if ((int)uVar34 <= iVar12) {
            iVar16 = iVar12 << 5;
          }
        }
        *(int *)(param_1 + 0xe4) = iVar16;
        FUN_1446efbd8(lVar18,iVar9);
        iVar16 = *(int *)(param_1 + 0xe0) + 1;
      }
      iVar9 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar9 = iVar16;
      }
      *(int *)(param_1 + 0xe0) = iVar16;
      if (iVar16 % 0x20 != 0) {
        lVar14 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          lVar14 = lVar18;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar9 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar11;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar18 = *(longlong *)(param_1 + 0xd8);
    }
    bVar15 = (byte)iVar10 & 0x1f;
    puVar3 = (uint *)(lVar18 + (longlong)(iVar25 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar11 = *(int *)(param_1 + 0xe8);
    lVar14 = (longlong)iVar11;
    iVar10 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar14 * 0x20);
    *(int *)(param_1 + 0xe8) = iVar10;
    iVar9 = *(int *)(param_1 + 0xec) + -1;
    *(int *)(param_1 + 0xec) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  uVar26 = 1;
  lVar18 = param_1 + 200;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar18 = *(longlong *)(param_1 + 0xd8);
  }
  iVar10 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar10 = iVar11;
  }
  puVar3 = (uint *)(lVar18 + (longlong)(iVar10 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  lVar18 = *(longlong *)(param_1 + 0xb8);
  lVar14 = lVar14 * 0x20;
  *(uint *)(lVar18 + 8 + lVar14) = local_70;
  *(ulonglong *)(lVar18 + lVar14) = local_78;
  *(longlong **)(lVar18 + 0x10 + lVar14) = plVar13;
  *(undefined4 *)(lVar18 + 0x18 + lVar14) = 0xffffffff;
  uVar19 = local_78;
  if (local_70 != 0) {
    uVar34 = local_70 >> 0xd ^ (int)local_78 - local_70;
    uVar28 = uVar34 << 8 ^ (-0x61c88647 - local_70) - uVar34;
    uVar21 = uVar28 >> 0xd ^ (local_70 - uVar34) - uVar28;
    uVar34 = uVar21 >> 0xc ^ (uVar34 - uVar28) - uVar21;
    uVar28 = uVar34 << 0x10 ^ (uVar28 - uVar21) - uVar34;
    uVar21 = uVar28 >> 5 ^ (uVar21 - uVar34) - uVar28;
    uVar34 = uVar21 >> 3 ^ (uVar34 - uVar28) - uVar21;
    uVar28 = uVar34 << 10 ^ (uVar28 - uVar21) - uVar34;
    uVar19 = (ulonglong)(uVar28 >> 0xf ^ uVar21 - (uVar34 + uVar28));
  }
  puVar33 = (undefined4 *)(lVar18 + lVar14);
  uVar34 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec);
  if (uVar34 == 1) {
LAB_140a90cee:
    if (((int)uVar34 < 1) || ((int)uVar26 <= *(int *)(param_1 + 0x100))) {
      uVar34 = *(int *)(param_1 + 0x100) - 1U & (uint)uVar19;
      puVar33[7] = uVar34;
      lVar14 = *(longlong *)(param_1 + 0xf8);
      if (*(longlong *)(param_1 + 0xf8) == 0) {
        lVar14 = param_1 + 0xf0;
      }
      puVar33[6] = *(undefined4 *)
                    (lVar14 + ((longlong)*(int *)(param_1 + 0x100) - 1U & (longlong)(int)uVar34) * 4
                    );
      lVar14 = *(longlong *)(param_1 + 0xf8);
      if (*(longlong *)(param_1 + 0xf8) == 0) {
        lVar14 = param_1 + 0xf0;
      }
      *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x100) - 1U & (longlong)(int)uVar34) * 4) =
           iVar11;
    }
    else {
      *(int *)(param_1 + 0x100) = (int)uVar26;
      FUN_1415020b2(local_a0);
    }
  }
  else {
    iVar10 = FUN_140988aa2(local_a0,uVar19 & 0xffffffff,puVar33);
    if (iVar10 == -1) {
      if (3 < uVar34) {
        uVar26 = (ulonglong)(uVar34 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar26 = (ulonglong)(uint)(1 << ((byte)lVar14 & 0x1f));
      }
      goto LAB_140a90cee;
    }
    lVar14 = *local_a0;
    uVar5 = *puVar33;
    uVar6 = puVar33[1];
    uVar7 = puVar33[2];
    uVar8 = puVar33[3];
    *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar10 * 0x20) = *(undefined8 *)(puVar33 + 4);
    puVar33 = (undefined4 *)(lVar14 + (longlong)iVar10 * 0x20);
    *puVar33 = uVar5;
    puVar33[1] = uVar6;
    puVar33[2] = uVar7;
    puVar33[3] = uVar8;
    FUN_148966cc2(local_a0,iVar11);
  }
  sVar4 = *(short *)(param_2 + 0x2a);
  uVar34 = (uint)sVar4;
  uVar27 = (undefined7)(uVar26 >> 8);
  uVar26 = CONCAT71(uVar27,1);
  if (*(short *)(param_1 + 0x50) <= sVar4) {
    plVar32 = (longlong *)(param_1 + 0x68);
    iVar11 = *(int *)(param_1 + 0x70);
    iVar10 = *(int *)(param_1 + 0x9c);
    if (iVar11 != iVar10) {
      lVar14 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar14 = *(longlong *)(param_1 + 0xa8);
      }
      iVar9 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & uVar34) * 4);
      if (iVar9 != -1) {
        do {
          psVar1 = (short *)(*plVar32 + (longlong)iVar9 * 0x18);
          if (*psVar1 == sVar4) {
            if (psVar1 != (short *)0x0) goto LAB_140a90f95;
            break;
          }
          iVar9 = *(int *)(psVar1 + 8);
        } while (iVar9 != -1);
      }
    }
    if (iVar10 == 0) {
      *(int *)(param_1 + 0x70) = iVar11 + 1;
      if (*(int *)(param_1 + 0x74) == iVar11) {
        FUN_14482b872(plVar32,iVar11);
      }
      iVar10 = *(int *)(param_1 + 0x90);
      if (iVar10 == 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar9 = iVar10 + -1;
        }
        iVar9 = iVar9 >> 5;
      }
      plVar31 = (longlong *)(param_1 + 0x78);
      iVar16 = iVar10 + 1;
      iVar25 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar25 = iVar10;
      }
      if (iVar25 >> 5 == iVar9) {
        *(int *)(param_1 + 0x90) = iVar16;
      }
      else {
        if (*(int *)(param_1 + 0x94) <= iVar10) {
          iVar9 = iVar10;
          local_a0 = plVar31;
          local_90 = plVar32;
          if (iVar10 + 0x20U < 0xa0) {
            iVar16 = 0x80;
          }
          else {
            uVar28 = iVar10 + 0x20U >> 5;
            local_98 = (ulonglong)uVar28;
            if (*(int *)(param_1 + 0x94) + 0x1fU < 0xa0) {
              uVar21 = 4;
              if (4 < uVar28) {
                uVar21 = uVar28;
              }
            }
            else {
              uVar21 = uVar28 + (uVar28 * 3 >> 3) + 0x10;
            }
            uVar19 = (ulonglong)(uVar21 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar28 = (uint)(uVar19 + 0xf);
                if (uVar21 < 0x1ffd) {
                  uVar19 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar28 >> 4]];
                }
                else {
                  uVar20 = uVar19 + 0xf & 0xfffffffffffffff0;
                  if (uVar20 < 0x7ff1) {
                    bVar15 = (&DAT_14c841e00)[uVar28 >> 4];
                    uVar24 = 0x32;
                    if (0x32 < bVar15) {
                      uVar24 = (ulonglong)bVar15;
                    }
                    uVar30 = 0x32 - (ulonglong)bVar15;
                    do {
                      uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0) goto LAB_140a91456;
                      lVar14 = uVar24 + 1 + uVar30;
                      uVar30 = uVar30 - 1;
                    } while (lVar14 != 0x33);
                  }
                  uVar19 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar19 = (ulonglong)DAT_14c841df8;
                  }
                  uVar19 = -uVar19 & (uVar20 + uVar19) - 1;
                }
              }
              else {
                uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
                iVar9 = *(int *)(param_1 + 0x90);
              }
            }
LAB_140a91456:
            iVar12 = (int)(uVar19 >> 2);
            iVar16 = -0x20;
            if ((int)local_98 <= iVar12) {
              iVar16 = iVar12 << 5;
            }
          }
          *(int *)(param_1 + 0x94) = iVar16;
          FUN_1446efbd8(local_a0,iVar9);
          iVar16 = *(int *)(param_1 + 0x90) + 1;
          plVar31 = local_a0;
          plVar32 = local_90;
        }
        iVar9 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar9 = iVar16;
        }
        *(int *)(param_1 + 0x90) = iVar16;
        if (iVar16 % 0x20 != 0) {
          plVar23 = *(longlong **)(param_1 + 0x88);
          if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
            plVar23 = plVar31;
          }
          bVar15 = -(char)(iVar16 % 0x20);
          *(uint *)((longlong)plVar23 + (longlong)(iVar9 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar23 + (longlong)(iVar9 >> 5) * 4) << (bVar15 & 0x1f))
               >> (bVar15 & 0x1f);
        }
      }
      lVar14 = (longlong)iVar11;
      if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
        plVar31 = *(longlong **)(param_1 + 0x88);
      }
      bVar15 = (byte)iVar10 & 0x1f;
      puVar3 = (uint *)((longlong)plVar31 + (longlong)(iVar25 >> 5) * 4);
      *puVar3 = *puVar3 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x98);
      lVar14 = (longlong)iVar11;
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar14 * 0x18);
      *(int *)(param_1 + 0x98) = iVar9;
      *(int *)(param_1 + 0x9c) = iVar10 + -1;
      if (iVar10 + -1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar9 * 0x18) = 0xffffffff;
      }
    }
    lVar18 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x88);
    }
    iVar10 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    puVar3 = (uint *)(lVar18 + (longlong)(iVar10 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
    iVar10 = 1;
    psVar1 = (short *)(*(longlong *)(param_1 + 0x68) + lVar14 * 0x18);
    sVar4 = *(short *)(param_2 + 0x2a);
    *psVar1 = sVar4;
    *(longlong **)(psVar1 + 4) = plVar13;
    psVar1[8] = -1;
    psVar1[9] = -1;
    uVar28 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c);
    if ((uVar28 != 0) && (uVar28 != 1)) {
      lVar14 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar14 = *(longlong *)(param_1 + 0xa8);
      }
      iVar9 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & uVar34) * 4);
      if (iVar9 != -1) {
        do {
          psVar2 = (short *)(*plVar32 + (longlong)iVar9 * 0x18);
          if (*psVar2 == sVar4) {
            uVar5 = *(undefined4 *)(psVar1 + 2);
            uVar6 = *(undefined4 *)(psVar1 + 4);
            uVar7 = *(undefined4 *)(psVar1 + 6);
            *(undefined4 *)psVar2 = *(undefined4 *)psVar1;
            *(undefined4 *)(psVar2 + 2) = uVar5;
            *(undefined4 *)(psVar2 + 4) = uVar6;
            *(undefined4 *)(psVar2 + 6) = uVar7;
            FUN_148966d34(plVar32,iVar11);
            goto LAB_140a90f83;
          }
          iVar9 = *(int *)(psVar2 + 8);
        } while (iVar9 != -1);
      }
    }
    if (3 < uVar28) {
      uVar19 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar28 < 1) || (iVar10 <= *(int *)(param_1 + 0xb0))) {
      uVar34 = *(int *)(param_1 + 0xb0) - 1U & uVar34;
      *(uint *)(psVar1 + 10) = uVar34;
      lVar14 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar14 = param_1 + 0xa0;
      }
      *(undefined4 *)(psVar1 + 8) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0xb0) - 1U & (longlong)(int)uVar34) * 4);
      lVar14 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar14 = param_1 + 0xa0;
      }
      *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0xb0) - 1U & (longlong)(int)uVar34) * 4) =
           iVar11;
    }
    else {
      *(int *)(param_1 + 0xb0) = iVar10;
      FUN_141501e94(plVar32);
    }
LAB_140a90f83:
    psVar1 = (short *)(*plVar32 + (longlong)iVar11 * 0x18);
LAB_140a90f95:
    if (*(longlong **)(psVar1 + 4) != plVar13 && *(longlong **)(psVar1 + 4) != (longlong *)0x0) {
      uVar26 = CONCAT71(uVar27,*(undefined1 *)(param_1 + 0x22));
    }
  }
LAB_140a91116:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26 & 0xffffffff;
}



// FUNCTION 140a916fe FUN_140a916fe body=7764 status=ok
// SIG undefined FUN_140a916fe(void)

void FUN_140a916fe(longlong *param_1,longlong param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined2 uVar10;
  ushort uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  int *piVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  int *piVar22;
  uint *puVar23;
  undefined ***pppuVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  byte bVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined ***pppuVar38;
  ulonglong uVar39;
  undefined4 *puVar40;
  ulonglong uVar41;
  bool bVar42;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  uint *local_f0;
  int local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  uint local_bc;
  uint *local_b8;
  uint *local_b0;
  longlong *local_a8;
  undefined **local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined **local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144837e54(param_2,0);
  plVar26 = *(longlong **)(param_2 + 0x30);
  plVar12 = plVar26;
  if (plVar26 == (longlong *)0x0) {
    plVar12 = (longlong *)(**(code **)(*param_1 + 0x460))(param_1);
    *(longlong **)(param_2 + 0x30) = plVar12;
    if ((param_2 != 0) && (plVar12 != (longlong *)0x0)) {
      FUN_1407d81de(plVar12 + 1,param_2);
      plVar12 = *(longlong **)(param_2 + 0x30);
    }
  }
  if (*(int *)((longlong)plVar12 + 0x34) == (int)param_1[0x83]) goto LAB_140a92d1a;
  *(int *)((longlong)plVar12 + 0x34) = (int)param_1[0x83];
  bVar16 = *(byte *)(plVar12 + 0x4f);
  local_108 = plVar12;
  local_100 = param_2;
  local_f8 = param_1;
  if (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x44)) {
    lVar14 = plVar12[0xc];
    if (lVar14 == 0) {
      uVar13 = FUN_14042c486();
      lVar14 = FUN_14477b664(uVar13);
      local_108[0xc] = lVar14;
    }
    plVar12 = local_108 + 0xb;
    lVar37 = local_108[0xd];
    if (lVar37 == 0) {
      param_1 = local_f8;
      param_2 = local_100;
      if ((lVar14 != 0) && (*plVar12 != 0)) {
        plVar4 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
          local_108[0xd] = 0;
          param_1 = local_f8;
          param_2 = local_100;
        }
        else {
          uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar37 = FUN_144aff482(uVar13,plVar12);
          local_108[0xd] = lVar37;
          param_1 = local_f8;
          param_2 = local_100;
          if (lVar37 != 0) {
            lVar14 = local_108[0xc];
            goto LAB_140a92e9b;
          }
        }
      }
    }
    else {
LAB_140a92e9b:
      if (lVar14 == 0) {
        uVar13 = FUN_14042c486();
        lVar14 = FUN_14477b664(uVar13);
        local_108[0xc] = lVar14;
        lVar37 = local_108[0xd];
        if (((lVar37 == 0) && (lVar37 = 0, lVar14 != 0)) && (*plVar12 != 0)) {
          plVar4 = *(longlong **)(lVar14 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
            lVar37 = 0;
          }
          else {
            uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar37 = FUN_144aff482(uVar13,plVar12);
          }
          local_108[0xd] = lVar37;
        }
      }
      param_1 = local_f8;
      param_2 = local_100;
      if (*(int *)(lVar37 + 0x34) != (int)local_f8[0x83]) {
        lVar14 = local_108[0xc];
        if (lVar14 == 0) {
          uVar13 = FUN_14042c486();
          lVar14 = FUN_14477b664(uVar13);
          local_108[0xc] = lVar14;
          lVar37 = local_108[0xd];
        }
        if (lVar37 == 0) {
          local_108[0xd] = 0;
          lVar37 = 0;
          if ((lVar14 != 0) && (local_108[0xb] != 0)) {
            plVar4 = *(longlong **)(lVar14 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
              lVar37 = 0;
            }
            else {
              uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar37 = FUN_144aff482(uVar13,plVar12);
            }
            local_108[0xd] = lVar37;
          }
        }
        param_1 = local_f8;
        puVar40 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar37 + 8) != (undefined4 *)0x0) {
          puVar40 = *(undefined4 **)(lVar37 + 8);
        }
        lVar14 = FUN_1400e3c00(local_f8,puVar40,1);
        param_2 = local_100;
        if (lVar14 != 0) {
          FUN_140a916fe(param_1,lVar14);
        }
      }
    }
  }
  iVar32 = *(int *)(param_2 + 0x40);
  iVar28 = *(int *)(param_2 + 0x44);
  if (iVar32 == iVar28) {
    lVar14 = local_108[0xc];
    if (lVar14 == 0) {
      uVar13 = FUN_14042c486();
      lVar14 = FUN_14477b664(uVar13);
      local_108[0xc] = lVar14;
    }
    plVar12 = local_108 + 0xb;
    lVar37 = local_108[0xd];
    if (lVar37 == 0) {
      if ((lVar14 != 0) && (*plVar12 != 0)) {
        plVar4 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar4 == (longlong *)0x0) || (cVar9 = (**(code **)(*plVar4 + 0x108))(), cVar9 == '\0')
           ) {
          local_108[0xd] = 0;
        }
        else {
          uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar37 = FUN_144aff482(uVar13,plVar12);
          local_108[0xd] = lVar37;
          if (lVar37 != 0) {
            lVar14 = local_108[0xc];
            goto LAB_140a92f6e;
          }
        }
      }
    }
    else {
LAB_140a92f6e:
      if (lVar14 == 0) {
        uVar13 = FUN_14042c486();
        lVar14 = FUN_14477b664(uVar13);
        local_108[0xc] = lVar14;
        lVar37 = local_108[0xd];
        if (((lVar37 == 0) && (lVar37 = 0, lVar14 != 0)) && (*plVar12 != 0)) {
          plVar4 = *(longlong **)(lVar14 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
            lVar37 = 0;
          }
          else {
            uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar37 = FUN_144aff482(uVar13,plVar12);
          }
          local_108[0xd] = lVar37;
        }
      }
      if (*(int *)(lVar37 + 0x30) == (int)local_f8[0x83]) {
        iVar32 = *(int *)(local_100 + 0x40);
        iVar28 = *(int *)(local_100 + 0x44);
        param_1 = local_f8;
        param_2 = local_100;
        goto LAB_140a917bb;
      }
    }
    plVar12 = local_108;
    if ((char)local_108[7] == '\0') goto LAB_140a92d1a;
LAB_140a91baf:
    local_d0 = plVar12 + 0x74;
    puVar20 = (uint *)(plVar12 + 0x76);
    iVar32 = (int)plVar12[0x79];
    if (iVar32 == 0) {
      uVar41 = 1;
      uVar21 = 0;
      iVar28 = 0;
      iVar19 = 0;
    }
    else {
      puVar23 = (uint *)plVar12[0x78];
      if ((uint *)plVar12[0x78] == (uint *)0x0) {
        puVar23 = puVar20;
      }
      uVar30 = *puVar23;
      if (uVar30 == 0) {
        iVar28 = iVar32 + 0x1e;
        if (-1 < iVar32 + -1) {
          iVar28 = iVar32 + -1;
        }
        uVar21 = 0;
        uVar27 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar27 = uVar21;
        }
        iVar28 = 0;
        do {
          if (uVar27 == uVar21) goto LAB_140a91c92;
          iVar28 = iVar28 + 0x20;
          uVar30 = puVar23[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar21 = 0;
        iVar28 = 0;
      }
      uVar41 = (ulonglong)(-uVar30 & uVar30);
      uVar27 = uVar41 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar19 = (iVar28 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar32 <= iVar19) {
        iVar19 = iVar32;
      }
    }
    if (iVar19 < iVar32) {
      uVar30 = 0xffffffff;
      do {
        lVar14 = *local_d0;
        lVar37 = (longlong)iVar19 * 0x68;
        if (*(int *)(lVar14 + 0x18 + lVar37) != *(int *)(lVar14 + 0x44 + lVar37)) {
          lVar35 = lVar14 + lVar37;
          FUN_1488dc23c();
          *(undefined4 *)(lVar35 + 0x18) = 0;
          if (*(int *)(lVar35 + 0x1c) < 0) {
            FUN_144727cd0(lVar35 + 0x10,0);
          }
          lVar14 = lVar14 + lVar37;
          *(undefined4 *)(lVar14 + 0x40) = 0xffffffff;
          *(undefined4 *)(lVar14 + 0x44) = 0;
          *(undefined4 *)(lVar14 + 0x38) = 0;
          iVar32 = (int)local_108[0x79];
          plVar12 = local_108;
        }
        uVar30 = uVar30 & ~(uint)uVar41;
        puVar23 = (uint *)plVar12[0x78];
        if ((uint *)plVar12[0x78] == (uint *)0x0) {
          puVar23 = puVar20;
        }
        iVar19 = (int)uVar21;
        lVar14 = (longlong)iVar19;
        uVar17 = puVar23[lVar14] & uVar30;
        if (uVar17 == 0) {
          iVar18 = iVar32 + 0x1e;
          if (-1 < iVar32 + -1) {
            iVar18 = iVar32 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar33 = iVar18;
          if (iVar18 < iVar19) {
            iVar33 = iVar19;
          }
          if (iVar18 <= iVar19) break;
          lVar37 = 0;
          while( true ) {
            iVar28 = iVar28 + 0x20;
            uVar17 = puVar23[lVar14 + lVar37 + 1];
            if (uVar17 != 0) break;
            lVar37 = lVar37 + 1;
            if (iVar33 - lVar14 == lVar37) goto LAB_140a91c92;
          }
          uVar21 = (ulonglong)(iVar19 + (int)lVar37 + 1);
          uVar30 = 0xffffffff;
        }
        uVar41 = (ulonglong)(-uVar17 & uVar17);
        uVar27 = uVar41 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar19 = (iVar28 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar19 < iVar32);
    }
LAB_140a91c92:
    local_d8 = plVar12 + 0x81;
    *(undefined4 *)(plVar12 + 0x82) = 0;
    if (*(int *)((longlong)plVar12 + 0x414) < 0) {
      FUN_1488dc192();
    }
    local_b8 = (uint *)(local_100 + 0x80);
    iVar32 = *(int *)(local_100 + 0x98);
    plVar26 = local_f8;
    if (iVar32 == 0) {
      uVar41 = 1;
      uVar21 = 0;
      iVar28 = 0;
      iVar19 = 0;
    }
    else {
      puVar20 = *(uint **)(local_100 + 0x90);
      if (*(uint **)(local_100 + 0x90) == (uint *)0x0) {
        puVar20 = local_b8;
      }
      uVar30 = *puVar20;
      if (uVar30 == 0) {
        iVar28 = iVar32 + 0x1e;
        if (-1 < iVar32 + -1) {
          iVar28 = iVar32 + -1;
        }
        uVar21 = 0;
        uVar27 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar27 = uVar21;
        }
        iVar28 = 0;
        do {
          if (uVar27 == uVar21) goto LAB_140a92d03;
          iVar28 = iVar28 + 0x20;
          uVar30 = puVar20[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar21 = 0;
        iVar28 = 0;
      }
      uVar41 = (ulonglong)(-uVar30 & uVar30);
      uVar27 = uVar41 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar19 = (iVar28 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar32 <= iVar19) {
        iVar19 = iVar32;
      }
    }
    if (iVar19 < iVar32) {
      local_a8 = plVar12 + 0x7b;
      local_e0 = local_f8 + 0x7d;
      uVar30 = 0xffffffff;
LAB_140a91d16:
      local_bc = uVar30;
      piVar15 = *(int **)(*(longlong *)(local_100 + 0x70) + 0x10 + (longlong)iVar19 * 0x20);
      bVar16 = *(byte *)((longlong)piVar15 + 0x2a);
      local_e4 = iVar28;
      local_c8 = uVar21;
      if ((-1 < (char)bVar16) && ((int)(char)bVar16 < (int)plVar26[0x78])) {
        lVar14 = plVar26[0x77];
        if (*(longlong *)(lVar14 + (ulonglong)bVar16 * 8) == DAT_14cb84658) {
          lVar14 = FUN_140a93e94(plVar26,local_100,piVar15);
          if (lVar14 != 0) {
            iVar32 = (int)local_108[0x82];
            *(uint *)(local_108 + 0x82) = iVar32 + 1U;
            if (*(uint *)((longlong)local_108 + 0x414) < iVar32 + 1U) {
              FUN_140a94426(local_d8,iVar32);
            }
            *(longlong *)(*local_d8 + (longlong)iVar32 * 8) = lVar14;
          }
          goto LAB_140a921de;
        }
        FUN_144837e54(piVar15,0);
        if (*(byte **)(piVar15 + 0x12) == (byte *)0x0) {
          plVar12 = *(longlong **)(piVar15 + 0xc);
joined_r0x000140a922dc:
          if (plVar12 != (longlong *)0x0) {
            iVar32 = (int)plVar26[0x7e];
            *(uint *)(plVar26 + 0x7e) = iVar32 + 1U;
            if (*(uint *)((longlong)plVar26 + 0x3f4) < iVar32 + 1U) {
              FUN_145769886(local_e0,iVar32);
            }
            *(longlong **)(*local_e0 + (longlong)iVar32 * 8) = plVar12;
            piVar15[0xc] = 0;
            piVar15[0xd] = 0;
          }
          goto LAB_140a921de;
        }
        plVar12 = *(longlong **)(piVar15 + 0xc);
        if ((**(byte **)(piVar15 + 0x12) & 3) == 0) goto joined_r0x000140a922dc;
        if (plVar12 == (longlong *)0x0) {
          lVar37 = *(longlong *)(local_100 + 0x30);
          if (lVar37 == 0) goto LAB_140a921de;
          if (0 < (longlong)(int)plVar26[0x7e]) {
            lVar35 = 0;
            do {
              lVar36 = *(longlong *)(*local_e0 + lVar35 * 8);
              piVar29 = *(int **)(lVar36 + 8);
              if (piVar29 == (int *)0x0) {
                piVar29 = &DAT_14c9485f0;
              }
              if (*piVar29 == *piVar15) {
                *(longlong *)(piVar15 + 0xc) = lVar36;
                iVar32 = (int)plVar26[0x7e];
                if (iVar32 + -1 != (int)lVar35) {
                  iVar28 = (iVar32 + -1) - (int)lVar35;
                  if (0 < iVar28) {
                    iVar28 = 1;
                  }
                  memmove((void *)(plVar26[0x7d] + lVar35 * 8),
                          (void *)(plVar26[0x7d] + (longlong)(iVar32 - iVar28) * 8),
                          (longlong)iVar28 << 3);
                  iVar32 = (int)plVar26[0x7e];
                }
                *(int *)(plVar26 + 0x7e) = iVar32 + -1;
                FUN_14576990c(local_e0);
                if (lVar36 != 0) {
                  plVar12 = *(longlong **)(piVar15 + 0xc);
                  if (piVar15[0x10] == piVar15[0x11]) goto LAB_140a91f19;
                  goto LAB_140a91da7;
                }
                break;
              }
              lVar35 = lVar35 + 1;
            } while ((int)plVar26[0x7e] != lVar35);
          }
          lVar37 = (**(code **)(*plVar26 + 0x468))(plVar26,lVar37);
          *(undefined8 *)(lVar37 + 0x40) =
               *(undefined8 *)(plVar26[0x77] + (longlong)*(char *)((longlong)piVar15 + 0x2a) * 8);
          *(longlong *)(piVar15 + 0xc) = lVar37;
          FUN_1400f0d6e(plVar26,piVar15,1);
          plVar12 = *(longlong **)(piVar15 + 0xc);
          if (piVar15[0x10] != piVar15[0x11]) {
            local_f0 = (uint *)(piVar15 + 0x11);
            goto LAB_140a91df2;
          }
          goto LAB_140a91f19;
        }
        if (piVar15[0x10] != piVar15[0x11]) {
LAB_140a91da7:
          local_f0 = (uint *)(piVar15 + 0x11);
          (**(code **)*plVar12)(plVar12,0);
          FUN_140a93612(plVar12,*(undefined8 *)(local_100 + 0x30));
          plVar12[8] = *(longlong *)
                        (plVar26[0x77] + (longlong)*(char *)((longlong)piVar15 + 0x2a) * 8);
          FUN_1400f0d6e(plVar26,piVar15,1);
LAB_140a91df2:
          puVar20 = (uint *)(piVar15 + 0x10);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb84718) && (FUN_144b3d300(&DAT_14cb84718), DAT_14cb84718 == -1)) {
            FUN_140a97dc4(&DAT_14cb84668);
            atexit((_func_5014 *)&LAB_143db4c99);
            _Init_thread_footer(&DAT_14cb84718);
          }
          piVar29 = piVar15 + 0x12;
          if (*(byte **)piVar29 != (byte *)0x0) {
            bVar42 = (**(byte **)piVar29 & 3) == 3;
            *(bool *)((longlong)plVar12 + 0x3f) = bVar42;
            if (!bVar42) goto LAB_140a91f0f;
            local_b0 = puVar20;
            uVar13 = FUN_140a90a2c();
            FUN_1446e7478(piVar29,plVar12,uVar13,1);
            puVar40 = (undefined4 *)plVar12[1];
            if (puVar40 == (undefined4 *)0x0) {
              puVar40 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar37 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar37);
              DAT_14c947fe0 = lVar37;
            }
            FUN_140045924(DAT_14c947fe0,&local_88,puVar40,1);
            plVar26 = local_f8;
            lVar37 = plVar12[0xc];
            if ((longlong)(int)lVar37 != 0) {
              lVar35 = plVar12[0xb];
              lVar36 = 0;
              do {
                if (*(longlong *)(lVar35 + lVar36) != 0) {
                  *(undefined ***)(*(longlong *)(lVar35 + lVar36) + 0x10) = local_88;
                }
                lVar36 = lVar36 + 0x18;
              } while ((longlong)(int)lVar37 * 0x18 != lVar36);
            }
            lVar37 = FUN_140831778();
            local_98 = 0;
            (**(code **)(*plVar12 + 0x10))(plVar12,piVar29);
            cVar9 = FUN_140a9368e(lVar37,plVar12 + 8,&local_98);
            puVar20 = local_b0;
            if (cVar9 == '\0') goto LAB_140a91f0f;
            plVar26 = plVar26 + 0x75;
            if ((char)plVar12[9] == '\x01') {
              local_88 = (undefined **)&DAT_14a171d50;
              local_78 = 0;
              uStack_70 = 0;
              local_80 = *(longlong **)
                          (*(longlong *)(DAT_14cb848c0 + 0x3a8) +
                           (ulonglong)*(ushort *)((longlong)plVar12 + 0x52) * 0x20 + 8);
              FUN_1406022fe(&local_78);
              local_88 = &PTR_FUN_14b1828b0;
              FUN_1405dc634(&local_88,
                            (ulonglong)*(ushort *)((longlong)plVar12 + 0x4c) * 0x20 +
                            *(longlong *)(DAT_14cb848c0 + 0x3a8));
              if (*(int *)(lVar37 + 0x108) != *(int *)(lVar37 + 0x134)) {
                uVar30 = (uint)((ulonglong)local_98 >> 0x10);
                uVar17 = (uint)local_98 & 0xffff;
                lVar35 = lVar37 + 0x138;
                if (*(longlong *)(lVar37 + 0x140) != 0) {
                  lVar35 = *(longlong *)(lVar37 + 0x140);
                }
                iVar32 = *(int *)(lVar35 + (ulonglong)
                                           (*(int *)(lVar37 + 0x148) - 1U &
                                           (int)((ulonglong)local_98 >> 0x20) +
                                           ((uint)local_98 << 0x10 | uVar17) +
                                           (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar17 >> 4)) * 4);
                if (iVar32 != -1) {
                  do {
                    lVar35 = *(longlong *)(lVar37 + 0x100) + (longlong)iVar32 * 0x68;
                    if (*(longlong *)(*(longlong *)(lVar37 + 0x100) + (longlong)iVar32 * 0x68) ==
                        local_98) {
                      if ((((lVar35 + 8U & 0xfffffffffffffff7) != 0) &&
                          (*(longlong *)(lVar35 + 0x20) != 0)) &&
                         ((longlong)*(int *)(lVar35 + 0x30) != 0)) {
                        lVar37 = 0;
                        goto LAB_140a928ac;
                      }
                      break;
                    }
                    iVar32 = *(int *)(lVar35 + 0x60);
                  } while (iVar32 != -1);
                }
              }
              goto LAB_140a927b8;
            }
            uVar11 = *(ushort *)((longlong)plVar12 + 0x52);
            *(ushort *)((longlong)plVar12 + 0x54) = uVar11;
            goto LAB_140a92817;
          }
          *(undefined1 *)((longlong)plVar12 + 0x3f) = 0;
          goto LAB_140a91f0f;
        }
        goto LAB_140a91f22;
      }
      goto LAB_140a921de;
    }
LAB_140a92d03:
    *(undefined1 *)(plVar12 + 7) = 0;
    *(int *)(plVar12 + 6) = (int)plVar26[0x83];
  }
  else {
LAB_140a917bb:
    plVar12 = local_108;
    local_c8 = CONCAT71(local_c8._1_7_,iVar32 == iVar28);
    local_90 = (undefined4)local_108[5];
    local_98 = local_108[4];
    if (plVar26 != (longlong *)0x0) {
      uVar3 = *(undefined4 *)((longlong)local_108 + 0x34);
      lVar14 = local_108[7];
      (**(code **)*local_108)(local_108,0);
      FUN_140e735bc(plVar12);
      if ((param_2 != 0) && (*(longlong *)(local_100 + 0x30) != 0)) {
        FUN_1407d81de(*(longlong *)(local_100 + 0x30) + 8,local_100);
      }
      *(undefined4 *)((longlong)local_108 + 0x34) = uVar3;
      *(char *)(local_108 + 7) = (char)lVar14;
      param_1 = local_f8;
      param_2 = local_100;
    }
    plVar4 = local_108;
    plVar12 = (longlong *)(param_2 + 0x48);
    uVar13 = FUN_14042c486();
    FUN_1446e7478(plVar12,plVar4,uVar13,1);
    (**(code **)(*plVar4 + 0x10))(plVar4,plVar12);
    puVar40 = (undefined4 *)plVar4[1];
    if (puVar40 == (undefined4 *)0x0) {
      puVar40 = &DAT_14c9485f0;
    }
    if (DAT_14c947fe0 == 0) {
      lVar14 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar14);
      DAT_14c947fe0 = lVar14;
    }
    FUN_140045924(DAT_14c947fe0,&local_88,puVar40,1);
    lVar14 = plVar4[0x84];
    if ((longlong)(int)lVar14 != 0) {
      lVar37 = plVar4[0x83];
      lVar35 = 0;
      do {
        if (*(longlong *)(lVar37 + lVar35) != 0) {
          *(undefined ***)(*(longlong *)(lVar37 + lVar35) + 0x10) = local_88;
        }
        lVar35 = lVar35 + 0x18;
      } while ((longlong)(int)lVar14 * 0x18 != lVar35);
    }
    if ((undefined **)plVar4[0xb] != (undefined **)0x0) {
      local_a0 = (undefined **)plVar4[0xb];
      FUN_1446dcdd4(&local_88);
      lVar14 = FUN_1400e3c00(param_1,&local_88,1);
      if (lVar14 != 0) {
        FUN_140a916fe(param_1,lVar14);
      }
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
    }
    lVar14 = plVar4[0xc];
    if (lVar14 == 0) {
      uVar13 = FUN_14042c486();
      lVar14 = FUN_14477b664(uVar13);
      plVar4[0xc] = lVar14;
    }
    lVar37 = plVar4[0xd];
    if (lVar37 == 0) {
      if ((lVar14 == 0) || (plVar4[0xb] == 0)) {
LAB_140a93091:
        FUN_140a3e398(plVar4 + 0x17);
      }
      else {
        plVar6 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
          plVar4[0xd] = 0;
          goto LAB_140a93091;
        }
        uVar13 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar37 = FUN_144aff482(uVar13,plVar4 + 0xb);
        plVar4[0xd] = lVar37;
        FUN_140a3e398(plVar4 + 0x17);
        if (lVar37 != 0) goto LAB_140a9190e;
      }
      puVar25 = &DAT_14c9a1308;
      if (*plVar12 != 0) {
        puVar25 = (undefined8 *)FUN_1446e60f4(*plVar12,&DAT_14cb84660);
      }
      local_a0 = (undefined **)CONCAT62(local_a0._2_6_,0x101);
      FUN_14000954c(puVar25,&local_88);
      plVar12 = local_108;
      if (local_108 != (longlong *)&DAT_14c9a1260) {
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        plVar4 = (longlong *)local_108[0x16];
        local_108[0x15] = (longlong)local_88;
        local_108[0x16] = (longlong)local_80;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar15 = (int *)((longlong)plVar4 + 0xc);
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (*piVar15 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      plVar4 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_80 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar15 = (int *)((longlong)plVar4 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      puVar40 = (undefined4 *)plVar12[1];
      if (puVar40 == (undefined4 *)0x0) {
        puVar40 = &DAT_14c9485f0;
      }
      if (DAT_14c947fe0 == 0) {
        lVar14 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar14);
        DAT_14c947fe0 = lVar14;
      }
      bVar42 = true;
      FUN_140045924(DAT_14c947fe0,&local_88,puVar40,1);
      *(undefined ***)((longlong)plVar12 + 0x3c) = local_88;
      if ((byte)(*(char *)((longlong)plVar12 + 0x23a) - 1U) < 2) {
        puVar40 = (undefined4 *)plVar12[1];
        if (puVar40 == (undefined4 *)0x0) {
          puVar40 = &DAT_14c9485f0;
        }
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        pppuVar38 = &local_88;
        bVar42 = true;
        FUN_140045924(DAT_14c947fe0,pppuVar38,puVar40,1);
        pppuVar24 = (undefined ***)&DAT_14cb82348;
        lVar37 = 0;
        goto LAB_140a91a62;
      }
      lVar37 = 0;
    }
    else {
      FUN_140a3e398(plVar4 + 0x17);
LAB_140a9190e:
      *(undefined8 *)((longlong)plVar4 + 0x3c) = *(undefined8 *)(lVar37 + 0x3c);
      puVar25 = &DAT_14c9a1308;
      if (*plVar12 != 0) {
        puVar25 = (undefined8 *)FUN_1446e60f4(*plVar12,&DAT_14cb84660);
      }
      local_118 = 1;
      FUN_140008518(&local_88,puVar25,lVar37 + 0xa8,0);
      plVar12 = local_108;
      if (local_108 != (longlong *)&DAT_14c9a1260) {
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        plVar4 = (longlong *)local_108[0x16];
        local_108[0x15] = (longlong)local_88;
        local_108[0x16] = (longlong)local_80;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar15 = (int *)((longlong)plVar4 + 0xc);
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (*piVar15 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      plVar4 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_80 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar15 = (int *)((longlong)plVar4 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar12[0x4d] == 0) {
        plVar12[0x4d] = *(longlong *)(lVar37 + 0x268);
      }
      if (((byte)(*(char *)((longlong)plVar12 + 0x23a) - 1U) < 2) ||
         ((bVar42 = false, *(char *)((longlong)plVar12 + 0x23a) != '\x04' &&
          ((*(byte *)(lVar37 + 0x23a) & 0xfe) == 2)))) {
        local_88 = (undefined **)plVar12[0x4c];
        if (local_88 == (undefined **)0x0) {
          local_88 = *(undefined ***)((longlong)plVar12 + 0x3c);
        }
        puVar40 = (undefined4 *)plVar12[1];
        if (puVar40 == (undefined4 *)0x0) {
          puVar40 = &DAT_14c9485f0;
        }
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        pppuVar38 = &local_a0;
        FUN_140045924(DAT_14c947fe0,pppuVar38,puVar40,1);
        pppuVar24 = &local_88;
        bVar42 = false;
LAB_140a91a62:
        FUN_140a93dbb(pppuVar24,pppuVar38,plVar12 + 0x4e,0);
        plVar12 = local_108;
      }
    }
    if (*(longlong *)((longlong)plVar12 + 0x204) == 0) {
      puVar40 = &DAT_14c9485f0;
      if ((undefined4 *)plVar12[1] != (undefined4 *)0x0) {
        puVar40 = (undefined4 *)plVar12[1];
      }
      FUN_1447a97f4(&local_88,puVar40);
    }
    else {
      FUN_1446dcdd4(&local_88,(undefined4 *)((longlong)plVar12 + 0x204));
    }
    FUN_1447715ec(plVar12 + 0x42,&local_88);
    if (uStack_70 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plVar12 + 0x74;
    if ((int)plVar12[0x75] != *(int *)((longlong)plVar12 + 0x3d4)) {
      FUN_140b78798(plVar4);
      FUN_14576994a(plVar4);
    }
    *(undefined1 *)(plVar12 + 7) = 1;
    if (0 < (int)plVar12[0x73]) {
      lVar14 = 0;
      lVar35 = 0;
      do {
        uVar13 = *(undefined8 *)(plVar12[0x72] + lVar14);
        uVar30 = (uint)((ulonglong)uVar13 >> 0x10);
        uVar17 = (uint)uVar13 & 0xffff;
        puVar40 = (undefined4 *)
                  FUN_140a93554(plVar4,((uint)uVar13 << 0x10 | uVar17) +
                                       (int)((ulonglong)uVar13 >> 0x20) +
                                       (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar17 >> 4),
                                plVar12[0x72] + lVar14);
        *puVar40 = (int)lVar35;
        lVar35 = lVar35 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar35 < (int)plVar12[0x73]);
    }
    bVar34 = plVar26 != (longlong *)0x0 & (byte)local_c8;
    if (!bVar42) {
      FUN_140a96d8c(plVar12,lVar37,0);
    }
    FUN_140231a4a(plVar12);
    plVar26 = local_f8;
    *(undefined4 *)(local_100 + 0x40) = *(undefined4 *)(local_100 + 0x44);
    *(int *)(plVar12 + 6) = (int)local_f8[0x83];
    if (bVar34 != 0) {
      *(undefined4 *)(plVar12 + 5) = local_90;
      plVar12[4] = local_98;
    }
    if ((bVar16 & 2) >> 1 != (*(byte *)(plVar12 + 0x4f) & 2) >> 1) {
      if ((*(byte *)(plVar12 + 0x4f) & 2) == 0) {
        FUN_1488cb0e0(local_f8 + 0x84,plVar12);
      }
      else {
        FUN_140a96878();
      }
      bVar42 = *(char *)((longlong)plVar26 + 0x41c) == '\0';
      if (bVar42) {
        FUN_1447f69b6();
      }
      *(bool *)((longlong)plVar26 + 0x41d) = !bVar42;
    }
    if ((char)plVar12[7] == '\x01') goto LAB_140a91baf;
  }
  FUN_140a9374a(plVar12);
LAB_140a92d1a:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar37 = lVar37 + 8, (longlong)*(int *)(lVar35 + 0x30) * 8 != lVar37) {
LAB_140a928ac:
    if (*(longlong *)(*(longlong *)(lVar35 + 0x28) + lVar37) != 0) {
      FUN_140a943ce(&local_88,lVar35 + 0x18);
      break;
    }
  }
LAB_140a927b8:
  uVar10 = FUN_144914e1c(plVar26,&local_88);
  *(undefined2 *)((longlong)plVar12 + 0x54) = uVar10;
  local_88 = (undefined **)&DAT_14a171d50;
  uVar21 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar21 != 0) {
    FUN_140115c12(&local_78,0);
  }
  local_80 = (longlong *)0x0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar11 = *(ushort *)((longlong)plVar12 + 0x54);
LAB_140a92817:
  FUN_140a94588(&local_98,(ulonglong)uVar11 * 0x20 + *plVar26,0);
  plVar26 = local_f8;
  puVar20 = local_b0;
LAB_140a91f0f:
  *puVar20 = *local_f0;
LAB_140a91f19:
  if (plVar12 == (longlong *)0x0) goto LAB_140a921de;
LAB_140a91f22:
  plVar4 = local_d0;
  if (*(char *)((longlong)plVar12 + 0x3f) != '\x01') goto LAB_140a921de;
  ppuVar1 = (undefined **)(lVar14 + (ulonglong)bVar16 * 8);
  iVar32 = (int)local_108[0x75] - *(int *)((longlong)local_108 + 0x3d4);
  if (iVar32 != 0) {
    puVar5 = *ppuVar1;
    uVar30 = (uint)((ulonglong)puVar5 >> 0x10);
    uVar17 = (uint)puVar5 & 0xffff;
    plVar26 = (longlong *)local_108[0x7c];
    if ((longlong *)local_108[0x7c] == (longlong *)0x0) {
      plVar26 = local_a8;
    }
    iVar28 = *(int *)((longlong)plVar26 +
                     (ulonglong)
                     ((int)local_108[0x7d] - 1U &
                     (int)((ulonglong)puVar5 >> 0x20) + ((uint)puVar5 << 0x10 | uVar17) +
                     (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar17 >> 4)) * 4);
    if (iVar28 != -1) {
      do {
        lVar14 = *local_d0 + (longlong)iVar28 * 0x68;
        if (*(undefined **)(*local_d0 + (longlong)iVar28 * 0x68) == puVar5) {
          if (lVar14 != 0) {
            piVar29 = (int *)(lVar14 + 8);
            goto LAB_140a91fdf;
          }
          break;
        }
        iVar28 = *(int *)(lVar14 + 0x60);
      } while (iVar28 != -1);
    }
  }
  local_88 = ppuVar1;
  FUN_145769a86(local_d0,&local_98,&local_88);
  piVar29 = (int *)(*plVar4 + (longlong)(int)local_98 * 0x68 + 8);
  *piVar29 = iVar32;
LAB_140a91fdf:
  if (DAT_14c947fe0 == 0) {
    lVar14 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar14);
    DAT_14c947fe0 = lVar14;
  }
  plVar26 = (longlong *)(piVar29 + 2);
  FUN_140045924(DAT_14c947fe0,&local_88,piVar15,1);
  if (piVar29[0xf] == 0) {
    iVar32 = piVar29[4];
    piVar29[4] = iVar32 + 1;
    if (piVar29[5] == iVar32) {
      FUN_14482b872(plVar26,iVar32);
    }
    iVar28 = piVar29[0xc];
    if (iVar28 == 0) {
      iVar19 = -1;
    }
    else {
      iVar19 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar19 = iVar28 + -1;
      }
      iVar19 = iVar19 >> 5;
    }
    piVar15 = piVar29 + 6;
    iVar18 = iVar28 + 1;
    iVar33 = iVar28 + 0x1f;
    if (-1 < iVar28) {
      iVar33 = iVar28;
    }
    if (iVar33 >> 5 == iVar19) {
      piVar29[0xc] = iVar18;
    }
    else {
      if (piVar29[0xd] <= iVar28) {
        if (iVar28 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar19 = iVar28;
        }
        else {
          uVar30 = iVar28 + 0x20U >> 5;
          local_f0 = (uint *)(ulonglong)uVar30;
          if (piVar29[0xd] + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar30) {
              uVar17 = uVar30;
            }
          }
          else {
            uVar17 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
          }
          uVar21 = FUN_144a3809e(uVar17 << 2,0);
          iVar19 = (int)(uVar21 >> 2);
          iVar18 = -0x20;
          if ((int)local_f0 <= iVar19) {
            iVar18 = iVar19 << 5;
          }
          iVar19 = piVar29[0xc];
        }
        piVar29[0xd] = iVar18;
        FUN_1446efbd8(piVar15,iVar19);
        iVar18 = piVar29[0xc] + 1;
      }
      iVar19 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar19 = iVar18;
      }
      piVar29[0xc] = iVar18;
      if (iVar18 % 0x20 != 0) {
        piVar22 = *(int **)(piVar29 + 10);
        if (*(int **)(piVar29 + 10) == (int *)0x0) {
          piVar22 = piVar15;
        }
        bVar16 = -(char)(iVar18 % 0x20);
        piVar22[iVar19 >> 5] = (uint)(piVar22[iVar19 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar32;
    if (*(int **)(piVar29 + 10) != (int *)0x0) {
      piVar15 = *(int **)(piVar29 + 10);
    }
    bVar16 = (byte)iVar28 & 0x1f;
    piVar15[iVar33 >> 5] = piVar15[iVar33 >> 5] & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar32 = piVar29[0xe];
    lVar14 = (longlong)iVar32;
    iVar28 = *(int *)(*(longlong *)(piVar29 + 2) + 4 + lVar14 * 0x18);
    piVar29[0xe] = iVar28;
    iVar19 = piVar29[0xf] + -1;
    piVar29[0xf] = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*(longlong *)(piVar29 + 2) + (longlong)iVar28 * 0x18) = 0xffffffff;
    }
  }
  local_f0 = (uint *)(piVar29 + 6);
  puVar20 = *(uint **)(piVar29 + 10);
  if (*(uint **)(piVar29 + 10) == (uint *)0x0) {
    puVar20 = local_f0;
  }
  iVar28 = iVar32 + 0x1f;
  if (-1 < iVar32) {
    iVar28 = iVar32;
  }
  puVar20[iVar28 >> 5] = puVar20[iVar28 >> 5] | 1 << ((byte)iVar32 & 0x1f);
  puVar25 = (undefined8 *)(*(longlong *)(piVar29 + 2) + lVar14 * 0x18);
  *puVar25 = local_88;
  puVar25[1] = plVar12;
  *(undefined4 *)(puVar25 + 2) = 0xffffffff;
  uVar30 = (uint)((ulonglong)local_88 >> 0x10);
  uVar17 = (uint)local_88 & 0xffff;
  uVar30 = ((uint)local_88 << 0x10 | uVar17) + (int)((ulonglong)local_88 >> 0x20) +
           (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar17 >> 4);
  uVar17 = piVar29[4] - piVar29[0xf];
  if ((uVar17 != 0) && (uVar17 != 1)) {
    piVar15 = piVar29 + 0x10;
    if (*(int **)(piVar29 + 0x12) != (int *)0x0) {
      piVar15 = *(int **)(piVar29 + 0x12);
    }
    iVar28 = piVar15[piVar29[0x14] - 1U & uVar30];
    if (iVar28 != -1) {
      do {
        puVar2 = (undefined8 *)(*plVar26 + (longlong)iVar28 * 0x18);
        if ((undefined **)*puVar2 == local_88) {
          uVar3 = *(undefined4 *)((longlong)puVar25 + 4);
          uVar7 = *(undefined4 *)(puVar25 + 1);
          uVar8 = *(undefined4 *)((longlong)puVar25 + 0xc);
          *(undefined4 *)puVar2 = *(undefined4 *)puVar25;
          *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
          *(undefined4 *)(puVar2 + 1) = uVar7;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uVar8;
          FUN_1488dc380(plVar26,iVar32);
          plVar26 = local_f8;
          goto LAB_140a921de;
        }
        iVar28 = *(int *)(puVar2 + 2);
      } while (iVar28 != -1);
    }
  }
  if (uVar17 < 4) {
    uVar31 = 1;
  }
  else {
    uVar21 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar31 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar17 < 1) || ((int)uVar31 <= piVar29[0x14])) {
    uVar30 = piVar29[0x14] - 1U & uVar30;
    *(uint *)((longlong)puVar25 + 0x14) = uVar30;
    piVar15 = *(int **)(piVar29 + 0x12);
    if (*(int **)(piVar29 + 0x12) == (int *)0x0) {
      piVar15 = piVar29 + 0x10;
    }
    *(int *)(puVar25 + 2) = piVar15[(longlong)piVar29[0x14] - 1U & (longlong)(int)uVar30];
    piVar15 = *(int **)(piVar29 + 0x12);
    if (*(int **)(piVar29 + 0x12) == (int *)0x0) {
      piVar15 = piVar29 + 0x10;
    }
    piVar15[(longlong)piVar29[0x14] - 1U & (longlong)(int)uVar30] = iVar32;
    plVar26 = local_f8;
    goto LAB_140a921de;
  }
  piVar29[0x14] = uVar31;
  plVar12 = (longlong *)(piVar29 + 0x12);
  if (*(longlong *)(piVar29 + 0x12) != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar31 = piVar29[0x14];
  }
  piVar15 = piVar29 + 0x10;
  if (uVar31 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_140a92480:
    uVar30 = 0;
    do {
      piVar22 = *(int **)(piVar29 + 0x12);
      if (*(int **)(piVar29 + 0x12) == (int *)0x0) {
        piVar22 = piVar15;
      }
      piVar22[piVar29[0x14] + 0x7fffffffU & uVar30] = -1;
      uVar30 = uVar30 + 1;
    } while (uVar31 != uVar30);
  }
  else {
    plVar26 = local_f8;
    if (uVar31 == 0) goto LAB_140a921de;
    FUN_1446efa72(plVar12,0,uVar31,4);
    if (0 < (int)uVar31) goto LAB_140a92480;
  }
  iVar32 = piVar29[0xc];
  plVar26 = local_f8;
  if (iVar32 == 0) {
    uVar21 = 0;
    uVar27 = 1;
    iVar28 = 0;
    iVar19 = 0;
  }
  else {
    puVar20 = *(uint **)(piVar29 + 10);
    if (*(uint **)(piVar29 + 10) == (uint *)0x0) {
      puVar20 = local_f0;
    }
    uVar30 = *puVar20;
    if (uVar30 == 0) {
      iVar28 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar28 = iVar32 + -1;
      }
      uVar21 = 0;
      uVar27 = (ulonglong)(uint)(iVar28 >> 5);
      if (iVar28 >> 5 < 1) {
        uVar27 = uVar21;
      }
      iVar19 = 0;
      do {
        if (uVar27 == uVar21) goto LAB_140a921de;
        iVar19 = iVar19 + 0x20;
        uVar30 = puVar20[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar21 = 0;
      iVar19 = 0;
    }
    uVar27 = (ulonglong)(-uVar30 & uVar30);
    uVar39 = uVar27 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar28 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar32 <= iVar28) {
      iVar28 = iVar32;
    }
  }
  if (iVar28 < iVar32) {
    uVar30 = 0xffffffff;
    do {
      lVar14 = *(longlong *)(piVar29 + 2);
      lVar37 = (longlong)iVar28;
      uVar13 = *(undefined8 *)(lVar14 + lVar37 * 0x18);
      uVar17 = (uint)((ulonglong)uVar13 >> 0x10);
      uVar31 = (uint)uVar13 & 0xffff;
      uVar39 = (longlong)
               (int)(((uint)uVar13 << 0x10 | uVar31) + (int)((ulonglong)uVar13 >> 0x20) +
                     (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar31 >> 4)) &
               (longlong)piVar29[0x14] - 1U;
      iVar32 = (int)uVar39;
      *(int *)(lVar14 + 0x14 + lVar37 * 0x18) = iVar32;
      piVar22 = *(int **)(piVar29 + 0x12);
      if (*(int **)(piVar29 + 0x12) == (int *)0x0) {
        piVar22 = piVar15;
      }
      *(int *)(lVar14 + 0x10 + lVar37 * 0x18) = piVar22[(longlong)piVar29[0x14] - 1U & uVar39];
      piVar22 = *(int **)(piVar29 + 0x12);
      if (*(int **)(piVar29 + 0x12) == (int *)0x0) {
        piVar22 = piVar15;
      }
      piVar22[(longlong)iVar32 & (longlong)piVar29[0x14] - 1U] = iVar28;
      uVar30 = ~(uint)uVar27 & uVar30;
      puVar20 = *(uint **)(piVar29 + 10);
      if (*(uint **)(piVar29 + 10) == (uint *)0x0) {
        puVar20 = local_f0;
      }
      iVar32 = piVar29[0xc];
      iVar28 = (int)uVar21;
      lVar14 = (longlong)iVar28;
      uVar17 = puVar20[lVar14] & uVar30;
      if (uVar17 == 0) {
        iVar18 = iVar32 + 0x1e;
        if (-1 < iVar32 + -1) {
          iVar18 = iVar32 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar33 = iVar18;
        if (iVar18 < iVar28) {
          iVar33 = iVar28;
        }
        if (iVar18 <= iVar28) break;
        lVar37 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar17 = puVar20[lVar14 + lVar37 + 1];
          if (uVar17 != 0) break;
          lVar37 = lVar37 + 1;
          if (iVar33 - lVar14 == lVar37) goto LAB_140a921de;
        }
        uVar21 = (ulonglong)(iVar28 + (int)lVar37 + 1);
        uVar30 = 0xffffffff;
      }
      uVar27 = (ulonglong)(-uVar17 & uVar17);
      uVar39 = uVar27 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar28 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar28 < iVar32);
  }
LAB_140a921de:
  uVar30 = local_bc & ~(uint)uVar41;
  puVar20 = *(uint **)(local_100 + 0x90);
  if (*(uint **)(local_100 + 0x90) == (uint *)0x0) {
    puVar20 = local_b8;
  }
  iVar32 = *(int *)(local_100 + 0x98);
  iVar19 = (int)local_c8;
  lVar14 = (longlong)iVar19;
  uVar17 = puVar20[lVar14] & uVar30;
  uVar21 = local_c8;
  iVar28 = local_e4;
  plVar12 = local_108;
  if (uVar17 == 0) {
    iVar18 = iVar32 + 0x1e;
    if (-1 < iVar32 + -1) {
      iVar18 = iVar32 + -1;
    }
    iVar18 = iVar18 >> 5;
    iVar33 = iVar18;
    if (iVar18 < iVar19) {
      iVar33 = iVar19;
    }
    if (iVar18 <= iVar19) goto LAB_140a92d03;
    lVar37 = 0;
    while( true ) {
      iVar28 = iVar28 + 0x20;
      uVar17 = puVar20[lVar14 + lVar37 + 1];
      if (uVar17 != 0) break;
      lVar37 = lVar37 + 1;
      if (iVar33 - lVar14 == lVar37) goto LAB_140a92d03;
    }
    uVar30 = 0xffffffff;
    uVar21 = (ulonglong)(iVar19 + (int)lVar37 + 1);
  }
  uVar41 = (ulonglong)(-uVar17 & uVar17);
  uVar27 = uVar41 * 2 + 1;
  lVar14 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  iVar19 = (iVar28 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
  if (iVar32 <= iVar19) goto LAB_140a92d03;
  goto LAB_140a91d16;
}



// FUNCTION 140a93554 FUN_140a93554 body=189 status=ok
// SIG undefined FUN_140a93554(void)

longlong FUN_140a93554(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x68;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x68) == *param_3) {
          if (lVar3 != 0) goto LAB_140a935e9;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x60);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140a9380c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x68 + *param_1;
LAB_140a935e9:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140a93612 FUN_140a93612 body=124 status=ok
// SIG undefined FUN_140a93612(void)

void FUN_140a93612(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  *param_1 = &PTR_FUN_14b30c7a0;
  param_1[6] = param_2;
  param_1[7] = 0x101000100010001;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined2 *)((longlong)param_1 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 140a9368e FUN_140a9368e body=187 status=ok
// SIG undefined FUN_140a9368e(void)

undefined8 FUN_140a9368e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xf0);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar7 * 0x18);
        if (*plVar4 == lVar1) break;
        iVar7 = (int)plVar4[2];
        plVar4 = (longlong *)0x0;
      } while (iVar7 != -1);
      goto LAB_140a93725;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140a93725:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    *param_3 = *plVar3;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),plVar3 != (longlong *)0x0);
}



// FUNCTION 140a9374a FUN_140a9374a body=77 status=ok
// SIG undefined FUN_140a9374a(void)

void FUN_140a9374a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140a94f8a();
  if (((*(byte *)(param_1 + 0x278) & 2) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x410), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x408);
    lVar3 = 0;
    do {
      FUN_140a956fc(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 140a93798 FUN_140a93798 body=116 status=ok
// SIG undefined FUN_140a93798(void)

undefined8 FUN_140a93798(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar5 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar5 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 1;
  }
  uVar6 = FUN_14001cc68(0x4c8,0x10);
  FUN_140e735bc(uVar6);
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  return uVar6;
}



// FUNCTION 140a9380c FUN_140a9380c body=298 status=ok
// SIG undefined FUN_140a9380c(void)

undefined4 *
FUN_140a9380c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a93bda(param_1,local_58);
  FUN_140a93938(param_4,local_50);
  *(undefined4 *)(local_50 + 0x60) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140a93b06(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)(local_50 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140a94ce2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a93938 FUN_140a93938 body=184 status=ok
// SIG undefined FUN_140a93938(void)

undefined8 * FUN_140a93938(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_60 = 0;
  local_48 = 0;
  uStack_3c = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  local_78 = 0xffffffff;
  uStack_70 = 0;
  local_68 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  FUN_140a939f2(param_2 + 2,&uStack_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  FUN_140b786e4(&uStack_70);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a939f2 FUN_140a939f2 body=125 status=ok
// SIG undefined FUN_140a939f2(void)

undefined8 * FUN_140a939f2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140a93a70();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140a93a70 FUN_140a93a70 body=150 status=ok
// SIG undefined FUN_140a93a70(void)

longlong * FUN_140a93a70(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140a93b06 FUN_140a93b06 body=212 status=ok
// SIG undefined FUN_140a93b06(void)

void FUN_140a93b06(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x68);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x68) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x58) = 0;
          if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
            FUN_1400020a8();
          }
          FUN_140b786e4((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x60);
          FUN_1488d18c6(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x60);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140a93b79;
    }
  }
  uVar1 = 0;
LAB_140a93b79:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140a93bda FUN_140a93bda body=481 status=ok
// SIG undefined FUN_140a93bda(void)

int * FUN_140a93bda(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1406a7630(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x68);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x68) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 140a93dbb FUN_140a93dbb body=216 status=ok
// SIG undefined FUN_140a93dbb(void)

void FUN_140a93dbb(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140265f12();
  FUN_1405593a8(&DAT_14cb83310,param_3,param_2);
  FUN_140a946aa(&local_50,param_1);
  FUN_140559328(local_50 + 0x10,param_3);
  if (param_4 != 0) {
    local_40 = param_2;
    FUN_140818534(local_50 + 0x38,&local_34,&local_40,0);
    *(int *)(*(longlong *)(local_50 + 0x38) + 8 + (longlong)local_34 * 0x14) = param_4;
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a93e94 FUN_140a93e94 body=1336 status=ok
// SIG undefined FUN_140a93e94(void)

longlong * FUN_140a93e94(longlong *param_1,longlong param_2,int *param_3)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  undefined4 *puVar13;
  char cVar14;
  undefined1 auStack_b8 [39];
  char local_91;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144837e54(param_3,0);
  if (*(byte **)(param_3 + 0x12) == (byte *)0x0) {
    lVar6 = *(longlong *)(param_3 + 0xc);
joined_r0x000140a93ef6:
    if (lVar6 != 0) {
      iVar3 = (int)param_1[0x80];
      *(uint *)(param_1 + 0x80) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x404) < iVar3 + 1U) {
        FUN_140a94426(param_1 + 0x7f,iVar3);
      }
      *(longlong *)(param_1[0x7f] + (longlong)iVar3 * 8) = lVar6;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
    }
  }
  else {
    lVar6 = *(longlong *)(param_3 + 0xc);
    if ((**(byte **)(param_3 + 0x12) & 3) == 0) goto joined_r0x000140a93ef6;
    if (lVar6 != 0) {
LAB_140a93ee1:
      bVar2 = false;
LAB_140a93fad:
      plVar10 = *(longlong **)(param_3 + 0xc);
      if (*(uint *)(param_1 + 0x83) == (uint)*(ushort *)((longlong)plVar10 + 0xa2))
      goto LAB_140a942a4;
      *(short *)((longlong)plVar10 + 0xa2) = (short)*(uint *)(param_1 + 0x83);
      lVar6 = FUN_140a9668e(plVar10);
      iVar3 = param_3[0x10];
      iVar4 = param_3[0x11];
      if (lVar6 == 0 || iVar3 != iVar4) {
LAB_140a9401f:
        if (iVar3 == iVar4) {
          if (lVar6 == 0) goto LAB_140a942a4;
          uVar9 = *(uint *)(param_1 + 0x83);
          goto LAB_140a94034;
        }
      }
      else {
        uVar9 = (uint)*(ushort *)(lVar6 + 0xa2);
        iVar4 = iVar3;
        if (*(uint *)(param_1 + 0x83) != (uint)*(ushort *)(lVar6 + 0xa2)) {
          puVar13 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
            puVar13 = *(undefined4 **)(lVar6 + 8);
          }
          FUN_14189740e(param_1,puVar13);
          iVar3 = param_3[0x10];
          iVar4 = param_3[0x11];
          goto LAB_140a9401f;
        }
LAB_140a94034:
        iVar3 = iVar4;
        if (uVar9 != *(ushort *)(lVar6 + 0xa0)) goto LAB_140a942a4;
      }
      cVar14 = iVar3 != iVar4;
      local_78 = (undefined4)plVar10[5];
      local_80 = plVar10[4];
      if (!bVar2) {
        uVar1 = *(undefined2 *)((longlong)plVar10 + 0xa2);
        (**(code **)*plVar10)(plVar10,0);
        FUN_140ca3730(plVar10,*(undefined8 *)(param_2 + 0x30));
        FUN_1400f0d6e(param_1,param_3,1);
        *(undefined2 *)((longlong)plVar10 + 0xa2) = uVar1;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb848a0) && (FUN_144b3d300(&DAT_14cb848a0), DAT_14cb848a0 == -1))
      {
        FUN_140c12158(&DAT_14cb84720);
        atexit((_func_5014 *)&LAB_143db4ca5);
        _Init_thread_footer(&DAT_14cb848a0);
      }
      uVar7 = FUN_14005f2f0();
      FUN_1446e7478(param_3 + 0x12,plVar10,uVar7,1);
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3 + 0x12);
      puVar13 = (undefined4 *)plVar10[1];
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = &DAT_14c9485f0;
      }
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,local_70,puVar13,1);
      lVar6 = plVar10[0x22];
      if ((longlong)(int)lVar6 != 0) {
        lVar5 = plVar10[0x21];
        lVar11 = 0;
        do {
          if (*(longlong *)(lVar5 + lVar11) != 0) {
            *(undefined8 *)(*(longlong *)(lVar5 + lVar11) + 0x10) = local_70[0];
          }
          lVar11 = lVar11 + 0x18;
        } while ((longlong)(int)lVar6 * 0x18 != lVar11);
      }
      if (plVar10[9] != 0) {
        local_88 = plVar10[9];
        FUN_1446dcdd4(local_70);
        FUN_14189740e(param_1,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = FUN_140a9668e(plVar10);
      if (lVar6 != 0) {
        FUN_143da64cc(plVar10,lVar6,0);
      }
      lVar5 = plVar10[6];
      if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x268) != 0)) &&
         (((byte)((char)plVar10[0x23] - 1U) < 2 ||
          (((lVar6 != 0 && ((char)plVar10[0x23] != '\x04')) &&
           ((*(byte *)(lVar6 + 0x118) & 0xfe) == 2)))))) {
        local_90 = plVar10 + 0x28;
        puVar13 = &DAT_14c9485f0;
        if ((undefined4 *)plVar10[1] != (undefined4 *)0x0) {
          puVar13 = (undefined4 *)plVar10[1];
        }
        local_91 = cVar14;
        if (DAT_14c947fe0 == 0) {
          lVar6 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar6);
          DAT_14c947fe0 = lVar6;
        }
        FUN_140045924(DAT_14c947fe0,local_70,puVar13,1);
        FUN_140a93dbb(lVar5 + 0x268,local_70,local_90,0);
        cVar14 = local_91;
      }
      if ((plVar10[0x26] != 0) && (plVar10[0x27] != 0)) {
        FUN_140a93dbb(plVar10 + 0x26,plVar10 + 0x27,plVar10 + 0x29,0);
      }
      param_3[0x10] = param_3[0x11];
      *(short *)(plVar10 + 0x14) = (short)param_1[0x83];
      if (!bVar2 && cVar14 == '\0') {
        *(undefined4 *)(plVar10 + 5) = local_78;
        plVar10[4] = local_80;
      }
      goto LAB_140a942a4;
    }
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 != 0) {
      if (0 < (longlong)(int)param_1[0x80]) {
        lVar5 = 0;
        do {
          lVar11 = *(longlong *)(param_1[0x7f] + lVar5 * 8);
          piVar12 = *(int **)(lVar11 + 8);
          if (piVar12 == (int *)0x0) {
            piVar12 = &DAT_14c9485f0;
          }
          if (*piVar12 == *param_3) {
            *(longlong *)(param_3 + 0xc) = lVar11;
            iVar3 = (int)param_1[0x80];
            if (iVar3 + -1 != (int)lVar5) {
              iVar8 = (iVar3 + -1) - (int)lVar5;
              iVar4 = 1;
              if (iVar8 < 1) {
                iVar4 = iVar8;
              }
              memmove((void *)(param_1[0x7f] + lVar5 * 8),
                      (void *)(param_1[0x7f] + (longlong)(iVar3 - iVar4) * 8),(longlong)iVar4 << 3);
              iVar3 = (int)param_1[0x80];
            }
            *(int *)(param_1 + 0x80) = iVar3 + -1;
            FUN_1488dc450(param_1 + 0x7f);
            if (lVar11 != 0) goto LAB_140a93ee1;
            break;
          }
          lVar5 = lVar5 + 1;
        } while ((int)param_1[0x80] != lVar5);
      }
      uVar7 = (**(code **)(*param_1 + 0x470))(param_1,lVar6);
      *(undefined8 *)(param_3 + 0xc) = uVar7;
      bVar2 = true;
      FUN_1400f0d6e(param_1,param_3,1);
      goto LAB_140a93fad;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_140a942a4:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 140a943ce FUN_140a943ce body=88 status=ok
// SIG undefined FUN_140a943ce(void)

undefined8 FUN_140a943ce(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      uVar3 = 0;
      do {
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
        uVar5 = ~*(ulonglong *)(*(longlong *)(param_2 + 0x10) + uVar4 * 8) & uVar1;
        if (uVar5 != uVar1) {
          *(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) = uVar5;
          uVar3 = 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140a94426 FUN_140a94426 body=353 status=ok
// SIG undefined FUN_140a94426(void)

void FUN_140a94426(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a944ab;
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
LAB_140a944ab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a94588 FUN_140a94588 body=289 status=ok
// SIG undefined FUN_140a94588(void)

void FUN_140a94588(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a946aa(&local_58,param_1);
  FUN_1405dc634(local_58 + 0x10,param_2);
  if (param_3 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1449f3ff4(param_2,&local_68);
    if ((longlong)(int)uStack_60 != 0) {
      lVar5 = (longlong)(int)uStack_60 << 3;
      lVar4 = local_68;
      do {
        lVar3 = local_58;
        local_48 = lVar4;
        FUN_140818534(local_58 + 0x38,&local_3c,&local_48,0);
        *(int *)(*(longlong *)(lVar3 + 0x38) + 8 + (longlong)local_3c * 0x14) = param_3;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a946aa FUN_140a946aa body=1591 status=ok
// SIG undefined FUN_140a946aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a946aa(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  bool bVar22;
  
  if (DAT_14cb82368 != DAT_14cb82394) {
    lVar16 = *param_2;
    uVar15 = (uint)((ulonglong)lVar16 >> 0x10);
    uVar18 = (uint)lVar16 & 0xffff;
    puVar10 = &DAT_14cb82398;
    if (DAT_14cb823a0 != (undefined *)0x0) {
      puVar10 = DAT_14cb823a0;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)
                    (DAT_14cb823a8 - 1U &
                    (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar18) +
                    (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar18 >> 4)) * 4);
    while (iVar7 != -1) {
      lVar13 = DAT_14cb82360 + (longlong)iVar7 * 0x20;
      if (*(longlong *)(DAT_14cb82360 + (longlong)iVar7 * 0x20) == lVar16) {
        if ((lVar13 + 8U & 0xfffffffffffffff7) != 0) {
          *param_1 = *(undefined8 *)(lVar13 + 8);
          lVar16 = *(longlong *)(lVar13 + 0x10);
          param_1[1] = lVar16;
          if (lVar16 == 0) {
            return param_1;
          }
          LOCK();
          *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
          UNLOCK();
          return param_1;
        }
        break;
      }
      iVar7 = *(int *)(lVar13 + 0x18);
    }
  }
  plVar8 = (longlong *)FUN_14001cc68(0x98);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b412540;
  memset(plVar8 + 2,0,0x88);
  FUN_140265f12();
  plVar8[5] = (longlong)&DAT_14cb83310;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[4] = (longlong)&PTR_FUN_14b1828b0;
  *(undefined1 *)(plVar8 + 8) = 0;
  plVar8[0xd] = 0;
  *(undefined4 *)(plVar8 + 0xe) = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined8 *)((longlong)plVar8 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar8 + 0x7c) = 0;
  plVar8[0x11] = 0;
  *(undefined4 *)(plVar8 + 0x12) = 0;
  plVar19 = plVar8 + 2;
  if ((plVar19 == (longlong *)0x0) ||
     (((*plVar19 != 0 && (plVar8[3] != 0)) && (0 < *(int *)(plVar8[3] + 8))))) goto LAB_140a94835;
  if (plVar8 == (longlong *)0x0) {
    _DAT_00000010 = 0x10;
    plVar21 = (longlong *)&DAT_00000018;
    plVar14 = _DAT_00000018;
    if (_DAT_00000018 == (longlong *)0x0) goto LAB_140a94835;
LAB_140a94c1b:
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    *plVar21 = (longlong)plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_140a94835;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar8[2] = (longlong)plVar19;
    if ((longlong *)plVar8[3] != plVar8) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar8[3] != (longlong *)0x0) {
        plVar21 = plVar8 + 3;
        plVar14 = (longlong *)plVar8[3];
        goto LAB_140a94c1b;
      }
      plVar8[3] = (longlong)plVar8;
    }
  }
  LOCK();
  plVar21 = plVar8 + 1;
  *(int *)plVar21 = (int)*plVar21 + -1;
  UNLOCK();
  if ((int)*plVar21 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_140a94835:
  iVar20 = DAT_14cb82390;
  iVar7 = DAT_14cb82368;
  if (DAT_14cb82394 == 0) {
    iVar20 = DAT_14cb82368 + 1;
    bVar22 = DAT_14cb8236c == DAT_14cb82368;
    DAT_14cb82368 = iVar20;
    if (bVar22) {
      FUN_1447711aa(&DAT_14cb82360,iVar7);
    }
    iVar20 = DAT_14cb82388;
    if (DAT_14cb82388 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = DAT_14cb82388 + 0x1e;
      if (-1 < DAT_14cb82388 + -1) {
        iVar6 = DAT_14cb82388 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    iVar12 = DAT_14cb82388 + 1;
    iVar17 = DAT_14cb82388 + 0x1f;
    if (-1 < DAT_14cb82388) {
      iVar17 = DAT_14cb82388;
    }
    if (iVar17 >> 5 != iVar6) {
      if (DAT_14cb8238c <= DAT_14cb82388) {
        if (DAT_14cb82388 + 0x20U < 0xa0) {
          DAT_14cb8238c = 0x80;
        }
        else {
          uVar15 = DAT_14cb82388 + 0x20U >> 5;
          if (DAT_14cb8238c + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar15) {
              uVar18 = uVar15;
            }
          }
          else {
            uVar18 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar18 << 2,0);
          iVar6 = (int)(uVar9 >> 2);
          DAT_14cb8238c = -0x20;
          if ((int)uVar15 <= iVar6) {
            DAT_14cb8238c = iVar6 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb82370,DAT_14cb82388);
        iVar12 = DAT_14cb82388 + 1;
      }
      iVar6 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar6 = iVar12;
      }
      if (iVar12 % 0x20 != 0) {
        puVar10 = &DAT_14cb82370;
        if (DAT_14cb82380 != (undefined *)0x0) {
          puVar10 = DAT_14cb82380;
        }
        bVar11 = -(char)(iVar12 % 0x20);
        DAT_14cb82388 = iVar12;
        *(uint *)(puVar10 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar6 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
        iVar12 = DAT_14cb82388;
      }
    }
    DAT_14cb82388 = iVar12;
    lVar16 = (longlong)iVar7;
    puVar10 = &DAT_14cb82370;
    if (DAT_14cb82380 != (undefined *)0x0) {
      puVar10 = DAT_14cb82380;
    }
    bVar11 = (byte)iVar20 & 0x1f;
    *(uint *)(puVar10 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
    iVar20 = iVar7;
  }
  else {
    lVar16 = (longlong)DAT_14cb82390;
    DAT_14cb82390 = *(int *)(DAT_14cb82360 + 4 + lVar16 * 0x20);
    DAT_14cb82394 = DAT_14cb82394 + -1;
    if (DAT_14cb82394 != 0) {
      *(undefined4 *)(DAT_14cb82360 + (longlong)DAT_14cb82390 * 0x20) = 0xffffffff;
    }
  }
  iVar7 = 1;
  puVar10 = &DAT_14cb82370;
  if (DAT_14cb82380 != (undefined *)0x0) {
    puVar10 = DAT_14cb82380;
  }
  iVar6 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar6 = iVar20;
  }
  *(uint *)(puVar10 + (longlong)(iVar6 >> 5) * 4) =
       *(uint *)(puVar10 + (longlong)(iVar6 >> 5) * 4) | 1 << ((byte)iVar20 & 0x1f);
  lVar5 = DAT_14cb82360;
  lVar16 = lVar16 * 0x20;
  plVar21 = (longlong *)(DAT_14cb82360 + lVar16);
  lVar13 = *param_2;
  *(longlong *)(DAT_14cb82360 + lVar16) = lVar13;
  *(longlong **)(lVar5 + 8 + lVar16) = plVar19;
  *(longlong **)(lVar5 + 0x10 + lVar16) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    lVar13 = *plVar21;
  }
  *(undefined4 *)(plVar21 + 3) = 0xffffffff;
  uVar15 = (uint)((ulonglong)lVar13 >> 0x10);
  uVar18 = (uint)lVar13 & 0xffff;
  uVar15 = ((uint)lVar13 << 0x10 | uVar18) + (int)((ulonglong)lVar13 >> 0x20) +
           (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar18 >> 4);
  uVar18 = DAT_14cb82368 - DAT_14cb82394;
  if (uVar18 != 1) {
    if (DAT_14cb82368 != DAT_14cb82394) {
      puVar10 = &DAT_14cb82398;
      if (DAT_14cb823a0 != (undefined *)0x0) {
        puVar10 = DAT_14cb823a0;
      }
      iVar6 = *(int *)(puVar10 + (ulonglong)(DAT_14cb823a8 - 1U & uVar15) * 4);
      while (iVar6 != -1) {
        puVar2 = (undefined4 *)(DAT_14cb82360 + (longlong)iVar6 * 0x20);
        if (*(longlong *)(DAT_14cb82360 + (longlong)iVar6 * 0x20) == lVar13) {
          plVar19 = *(longlong **)(puVar2 + 4);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar19 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          lVar16 = *plVar21;
          uVar3 = *(undefined4 *)((longlong)plVar21 + 4);
          lVar13 = plVar21[1];
          uVar4 = *(undefined4 *)((longlong)plVar21 + 0xc);
          *(longlong *)(puVar2 + 4) = plVar21[2];
          *puVar2 = (int)lVar16;
          puVar2[1] = uVar3;
          puVar2[2] = (int)lVar13;
          puVar2[3] = uVar4;
          FUN_1488d163e(iVar20);
          iVar20 = iVar6;
          goto LAB_140a94a5d;
        }
        iVar6 = puVar2[6];
      }
    }
    if (3 < uVar18) {
      uVar9 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar16 & 0x1f);
    }
  }
  if (((int)uVar18 < 1) || (iVar7 <= DAT_14cb823a8)) {
    uVar15 = DAT_14cb823a8 - 1U & uVar15;
    *(uint *)((longlong)plVar21 + 0x1c) = uVar15;
    puVar10 = DAT_14cb823a0;
    if (DAT_14cb823a0 == (undefined *)0x0) {
      puVar10 = &DAT_14cb82398;
    }
    *(undefined4 *)(plVar21 + 3) =
         *(undefined4 *)(puVar10 + ((longlong)DAT_14cb823a8 - 1U & (longlong)(int)uVar15) * 4);
    puVar10 = DAT_14cb823a0;
    if (DAT_14cb823a0 == (undefined *)0x0) {
      puVar10 = &DAT_14cb82398;
    }
    *(int *)(puVar10 + ((longlong)DAT_14cb823a8 - 1U & (longlong)(int)uVar15) * 4) = iVar20;
  }
  else {
    DAT_14cb823a8 = iVar7;
    FUN_140a96b14();
  }
LAB_140a94a5d:
  lVar16 = DAT_14cb82360;
  *param_1 = *(undefined8 *)(DAT_14cb82360 + 8 + (longlong)iVar20 * 0x20);
  lVar16 = *(longlong *)(lVar16 + 0x10 + (longlong)iVar20 * 0x20);
  param_1[1] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar8 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return param_1;
}



// FUNCTION 140a94ce2 FUN_140a94ce2 body=679 status=ok
// SIG undefined FUN_140a94ce2(void)

void FUN_140a94ce2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140a94d57;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140a94d57:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x68;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 100 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x60 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 140a94f8a FUN_140a94f8a body=1905 status=ok
// SIG undefined FUN_140a94f8a(void)

void FUN_140a94f8a(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int *_Dst;
  void *_Dst_00;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *_Src;
  int iVar16;
  size_t _Size;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_918 [32];
  longlong local_8f8;
  int local_8ec;
  uint local_8e8;
  int local_8e4;
  uint *local_8e0;
  ulonglong local_8d8;
  ulonglong local_8d0;
  int *local_8c8;
  longlong local_8c0;
  longlong *local_8b8;
  longlong *local_8b0;
  undefined1 local_8a8 [2048];
  undefined1 *local_a8;
  undefined8 local_a0;
  longlong local_98 [8];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_8f8 = param_1;
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(local_8f8 + 0x3f0) = 0;
  }
  if (*(longlong *)(local_8f8 + 0x400) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(local_8f8 + 0x400) = 0;
    *(undefined4 *)(local_8f8 + 0x3f8) = 0;
  }
  iVar4 = *(int *)(local_8f8 + 0x3a8);
  iVar16 = *(int *)(local_8f8 + 0x3d4);
  if (iVar4 == iVar16) goto LAB_140a94fe9;
  local_58 = (longlong *)0x0;
  local_50 = 0x800000000;
  if (local_8f8 != 0) {
    lVar19 = local_8f8;
    lVar18 = local_8f8;
    do {
      lVar17 = (longlong)(int)local_50;
      uVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar3);
      if (local_50._4_4_ < uVar3) {
        FUN_1488d1950(local_98);
        lVar19 = local_8f8;
      }
      plVar5 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar5 = local_98;
      }
      plVar5[lVar17] = lVar18;
      lVar17 = *(longlong *)(lVar18 + 0x60);
      if (lVar17 == 0) {
        uVar6 = FUN_14042c486();
        lVar17 = FUN_14477b664(uVar6);
        *(longlong *)(lVar18 + 0x60) = lVar17;
        lVar19 = local_8f8;
      }
      lVar7 = *(longlong *)(lVar18 + 0x68);
      if (lVar7 == 0) {
        if ((lVar17 == 0) || (*(longlong *)(lVar18 + 0x58) == 0)) break;
        plVar5 = *(longlong **)(lVar17 + 0xb8);
        if ((plVar5 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar5 + 0x108))(), cVar2 == '\0')
           ) {
          lVar7 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar7 = FUN_144aff482(uVar6);
        }
        *(longlong *)(lVar18 + 0x68) = lVar7;
        lVar19 = local_8f8;
      }
      lVar18 = lVar7;
    } while (lVar7 != 0);
    iVar4 = *(int *)(lVar19 + 0x3a8);
    iVar16 = *(int *)(lVar19 + 0x3d4);
  }
  _Size = (size_t)((iVar4 - iVar16) * 8);
  uVar21 = 0;
  _Dst = (int *)FUN_14001cc68(_Size);
  *(int **)(local_8f8 + 0x3f0) = _Dst;
  memset(_Dst,0,_Size);
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x10000000000;
  puVar10 = (uint *)(local_8f8 + 0x3b0);
  iVar4 = *(int *)(local_8f8 + 0x3c8);
  if (iVar4 == 0) {
    uVar20 = 1;
    iVar12 = 0;
    iVar16 = 0;
  }
  else {
    puVar9 = *(uint **)(local_8f8 + 0x3c0);
    if (*(uint **)(local_8f8 + 0x3c0) == (uint *)0x0) {
      puVar9 = puVar10;
    }
    uVar3 = *puVar9;
    if (uVar3 == 0) {
      iVar16 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar16 = iVar4 + -1;
      }
      uVar21 = 0;
      uVar20 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar20 = uVar21;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar21) goto LAB_140a9555b;
        iVar16 = iVar16 + 0x20;
        uVar3 = puVar9[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar21 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar20 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar12 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar12) {
      iVar12 = iVar4;
    }
  }
  if (iVar12 < iVar4) {
    uVar3 = 0xffffffff;
    iVar8 = 0;
    local_8e0 = puVar10;
LAB_140a951a9:
    plVar5 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar5 = local_98;
    }
    *_Dst = iVar8;
    lVar19 = local_8f8;
    iVar14 = iVar8;
    if ((longlong)(int)local_50 != 0) {
      local_8b8 = plVar5 + (int)local_50;
      local_8c0 = (longlong)iVar12 * 0x68;
      local_8e8 = uVar3;
      local_8e4 = iVar16;
      local_8d8 = uVar20;
      local_8d0 = uVar21;
      local_8c8 = _Dst;
LAB_140a95207:
      lVar18 = *plVar5;
      local_8b0 = plVar5;
      if (*(int *)(lVar18 + 0x3a8) != *(int *)(lVar18 + 0x3d4)) {
        lVar17 = *(longlong *)(*(longlong *)(lVar19 + 0x3a0) + local_8c0);
        uVar3 = (uint)((ulonglong)lVar17 >> 0x10);
        uVar13 = (uint)lVar17 & 0xffff;
        lVar7 = lVar18 + 0x3d8;
        if (*(longlong *)(lVar18 + 0x3e0) != 0) {
          lVar7 = *(longlong *)(lVar18 + 0x3e0);
        }
        iVar4 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar18 + 1000) - 1U &
                                 (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar13)
                                 + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            lVar7 = *(longlong *)(lVar18 + 0x3a0) + (longlong)iVar4 * 0x68;
            if (*(longlong *)(*(longlong *)(lVar18 + 0x3a0) + (longlong)iVar4 * 0x68) == lVar17) {
              if ((lVar7 != 0) && (lVar7 != -8)) {
                iVar4 = *(int *)(lVar7 + 0x38);
                if (iVar4 == 0) {
                  uVar21 = 1;
                  uVar20 = 0;
                  iVar12 = 0;
                  iVar16 = 0;
                  goto LAB_140a9534c;
                }
                puVar10 = *(uint **)(lVar7 + 0x30);
                if (*(uint **)(lVar7 + 0x30) == (uint *)0x0) {
                  puVar10 = (uint *)(lVar7 + 0x20);
                }
                uVar3 = *puVar10;
                if (uVar3 != 0) {
                  uVar20 = 0;
                  iVar16 = 0;
                  goto LAB_140a95329;
                }
                iVar16 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar16 = iVar4 + -1;
                }
                uVar20 = 0;
                uVar21 = (ulonglong)(uint)(iVar16 >> 5);
                if (iVar16 >> 5 < 1) {
                  uVar21 = uVar20;
                }
                iVar16 = 0;
                goto LAB_140a95314;
              }
              break;
            }
            iVar4 = *(int *)(lVar7 + 0x60);
          } while (iVar4 != -1);
        }
      }
      goto LAB_140a952ab;
    }
    goto LAB_140a95498;
  }
LAB_140a9555b:
  *(undefined4 *)(local_8f8 + 0x3f8) = 0;
LAB_140a95566:
  if (_Dst != (int *)0x0) {
    FUN_1400020a8(_Dst);
  }
  *(undefined8 *)(local_8f8 + 0x3f0) = 0;
  puVar11 = local_a8;
LAB_140a955f9:
  if (puVar11 != (undefined1 *)0x0) {
    FUN_1400020a8(puVar11);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140a94fe9:
  if ((local_48 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    iVar16 = iVar16 + 0x20;
    uVar3 = puVar10[uVar20 + 1];
    uVar20 = uVar20 + 1;
    if (uVar3 != 0) break;
LAB_140a95314:
    if (uVar21 == uVar20) goto LAB_140a952ab;
  }
LAB_140a95329:
  uVar21 = (ulonglong)(-uVar3 & uVar3);
  uVar1 = uVar21 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar12 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar4 <= iVar12) {
    iVar12 = iVar4;
  }
LAB_140a9534c:
  if (iVar12 < iVar4) {
    uVar3 = 0xffffffff;
    do {
      local_8ec = iVar16;
      uVar1 = local_a0;
      lVar18 = *(longlong *)(lVar7 + 0x10);
      lVar17 = (longlong)(int)local_a0;
      uVar13 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,uVar13);
      if (local_a0._4_4_ < uVar13) {
        FUN_140a97b9c(local_8a8,uVar1 & 0xffffffff);
        lVar19 = local_8f8;
      }
      puVar11 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar11 = local_8a8;
      }
      *(undefined8 *)(puVar11 + lVar17 * 8) = *(undefined8 *)(lVar18 + (longlong)iVar12 * 0x18 + 8);
      uVar3 = uVar3 & ~(uint)uVar21;
      puVar10 = *(uint **)(lVar7 + 0x30);
      if (*(uint **)(lVar7 + 0x30) == (uint *)0x0) {
        puVar10 = (uint *)(lVar7 + 0x20);
      }
      iVar4 = *(int *)(lVar7 + 0x38);
      iVar12 = (int)uVar20;
      lVar18 = (longlong)iVar12;
      uVar13 = puVar10[lVar18] & uVar3;
      iVar16 = local_8ec;
      if (uVar13 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = iVar8;
        if (iVar8 < iVar12) {
          iVar14 = iVar12;
        }
        if (iVar8 <= iVar12) break;
        lVar17 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar13 = puVar10[lVar18 + lVar17 + 1];
          if (uVar13 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar14 - lVar18 == lVar17) goto LAB_140a952ab;
        }
        uVar20 = (ulonglong)(iVar12 + (int)lVar17 + 1);
        uVar3 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar21 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar12 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar4);
  }
LAB_140a952ab:
  plVar5 = local_8b0 + 1;
  if (plVar5 == local_8b8) goto LAB_140a9546b;
  goto LAB_140a95207;
LAB_140a9546b:
  iVar14 = *local_8c8;
  iVar4 = *(int *)(lVar19 + 0x3c8);
  puVar10 = local_8e0;
  _Dst = local_8c8;
  uVar20 = local_8d8;
  uVar21 = local_8d0;
  iVar16 = local_8e4;
  iVar8 = (int)local_a0;
  uVar3 = local_8e8;
LAB_140a95498:
  lVar18 = local_8f8;
  _Dst[1] = iVar8 - iVar14;
  uVar3 = uVar3 & ~(uint)uVar20;
  puVar9 = *(uint **)(lVar19 + 0x3c0);
  if (*(uint **)(lVar19 + 0x3c0) == (uint *)0x0) {
    puVar9 = puVar10;
  }
  iVar12 = (int)uVar21;
  lVar19 = (longlong)iVar12;
  uVar13 = puVar9[lVar19] & uVar3;
  if (uVar13 == 0) {
    iVar14 = iVar4 + 0x1e;
    if (-1 < iVar4 + -1) {
      iVar14 = iVar4 + -1;
    }
    iVar14 = iVar14 >> 5;
    iVar15 = iVar14;
    if (iVar14 < iVar12) {
      iVar15 = iVar12;
    }
    if (iVar14 <= iVar12) goto LAB_140a955b0;
    lVar17 = 0;
    while( true ) {
      iVar16 = iVar16 + 0x20;
      uVar13 = puVar9[lVar19 + lVar17 + 1];
      if (uVar13 != 0) break;
      lVar17 = lVar17 + 1;
      if (iVar15 - lVar19 == lVar17) goto LAB_140a955b0;
    }
    uVar21 = (ulonglong)(iVar12 + (int)lVar17 + 1);
    uVar3 = 0xffffffff;
  }
  _Dst = _Dst + 2;
  uVar20 = (ulonglong)(-uVar13 & uVar13);
  uVar1 = uVar20 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  iVar12 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if (iVar4 <= iVar12) goto LAB_140a955b0;
  goto LAB_140a951a9;
LAB_140a955b0:
  *(int *)(local_8f8 + 0x3f8) = iVar8;
  if (iVar8 < 1) {
    _Dst = *(int **)(local_8f8 + 0x3f0);
    goto LAB_140a95566;
  }
  _Dst_00 = (void *)FUN_14001cc68((longlong)(iVar8 << 3),0);
  puVar11 = local_a8;
  *(void **)(lVar18 + 0x400) = _Dst_00;
  _Src = local_8a8;
  if (local_a8 != (undefined1 *)0x0) {
    _Src = local_a8;
  }
  memcpy(_Dst_00,_Src,(longlong)(iVar8 << 3));
  goto LAB_140a955f9;
}



// FUNCTION 140a956fc FUN_140a956fc body=2631 status=ok
// SIG undefined FUN_140a956fc(void)

void FUN_140a956fc(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  undefined *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  uint *puVar23;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_1c8 [36];
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  uint local_18c;
  uint *local_188;
  ulonglong local_180;
  undefined **local_178;
  undefined *local_170;
  longlong local_168;
  ulonglong uStack_160;
  undefined **local_158;
  undefined *local_150;
  longlong local_148;
  ulonglong uStack_140;
  undefined **local_138;
  undefined *local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined **local_118;
  undefined *local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined **local_f8;
  undefined *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined **local_d8;
  undefined *local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  char local_a0 [16];
  longlong *local_90;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_140265f12();
  local_150 = &DAT_14cb83310;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  local_170 = &DAT_14cb83310;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = &PTR_FUN_14b1828b0;
  local_198 = param_1;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x278) & 2) != 0)) {
    FUN_1405dc634(&local_178,
                  (ulonglong)*(ushort *)(param_1 + 0x15a) * 0x20 +
                  *(longlong *)(DAT_14cb848c0 + 0x3a8));
    lVar17 = *(longlong *)(param_1 + 0x30);
    local_a0[0] = '\0';
    local_78 = 0;
    FUN_14575a19a(local_a0,0);
    if ((param_1 != 0) && (*(longlong *)(lVar17 + 0x400) != 0)) {
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      FUN_140265f12();
      local_d0 = &DAT_14cb83310;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = &PTR_FUN_14b1828b0;
      FUN_140265f12();
      local_f0 = &DAT_14cb83310;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = &PTR_FUN_14b1828b0;
      puVar19 = *(uint **)(lVar17 + 0x3f0);
      puVar23 = (uint *)(lVar17 + 0x3b0);
      iVar18 = *(int *)(lVar17 + 0x3c8);
      if (iVar18 == 0) {
        uVar24 = 1;
        uVar15 = 0;
        iVar16 = 0;
        iVar20 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar17 + 0x3c0);
        if (*(uint **)(lVar17 + 0x3c0) == (uint *)0x0) {
          puVar11 = puVar23;
        }
        uVar14 = *puVar11;
        if (uVar14 == 0) {
          iVar20 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar20 = iVar18 + -1;
          }
          uVar15 = 0;
          uVar24 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar24 = uVar15;
          }
          iVar20 = 0;
          do {
            if (uVar24 == uVar15) goto LAB_140a95e78;
            iVar20 = iVar20 + 0x20;
            uVar14 = puVar11[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar15 = 0;
          iVar20 = 0;
        }
        uVar24 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar24 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar16 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar16) {
          iVar16 = iVar18;
        }
      }
      if (iVar16 < iVar18) {
        local_1a0 = lVar17;
        local_188 = puVar23;
        uVar14 = 0xffffffff;
        do {
          local_18c = uVar14;
          local_1a4 = iVar20;
          if (puVar19[1] != 0) {
            bVar25 = (longlong)uStack_b0 < 0;
            uStack_b0 = uStack_b0 & 0xffffffff00000000;
            if (bVar25) {
              FUN_1407d6a5a(&local_b8,0);
            }
            piVar7 = (int *)FUN_140a96514(local_198);
            if (0 < piVar7[1]) {
              iVar18 = *piVar7;
              local_180 = uVar15;
              if (puVar19[1] != 0) {
                plVar22 = (longlong *)((ulonglong)*puVar19 * 8 + *(longlong *)(local_1a0 + 0x400));
                uVar14 = 0;
LAB_140a95970:
                lVar17 = *plVar22;
                cVar4 = FUN_140a96144(piVar7,lVar17,&local_118);
                if ((cVar4 != '\0') && (fVar26 = (float)FUN_140a963a0(lVar17), 0.0 < fVar26)) {
                  lVar8 = *(longlong *)(DAT_14cb848c0 + 0x3a8);
                  lVar12 = (ulonglong)*(ushort *)(lVar17 + 0x4e) * 0x20;
                  puVar13 = *(undefined **)(lVar8 + 8 + lVar12);
                  if (puVar13 != (undefined *)0x0) {
                    lVar12 = lVar12 + lVar8;
                    uVar6 = *(uint *)(lVar12 + 0x18);
                    if ((longlong)(int)uVar6 != 0) {
                      lVar12 = *(longlong *)(lVar12 + 0x10);
                      lVar21 = 0;
                      do {
                        if (*(longlong *)(lVar12 + lVar21) != 0) {
                          if (local_f0 != puVar13) goto LAB_140a95a7d;
                          uVar3 = uVar6;
                          if ((int)(uint)uStack_e0 < (int)uVar6) {
                            uVar3 = (uint)uStack_e0;
                          }
                          if ((int)uVar3 < 1) goto LAB_140a95ad2;
                          uVar15 = 0;
                          goto LAB_140a95abd;
                        }
                        lVar21 = lVar21 + 8;
                      } while ((longlong)(int)uVar6 * 8 - lVar21 != 0);
                    }
                  }
                  goto LAB_140a959f7;
                }
                goto LAB_140a95a7d;
              }
LAB_140a95afa:
              uVar15 = local_180;
              puVar23 = local_188;
              lVar17 = local_1a0;
              if (0 < (int)uStack_b0) {
                FUN_140265f12();
                local_110 = &DAT_14cb83310;
                local_108 = 0;
                uStack_100 = 0;
                local_118 = &PTR_FUN_14b1828b0;
                FUN_140265f12();
                plVar22 = local_b8;
                local_130 = &DAT_14cb83310;
                local_128 = 0;
                uStack_120 = 0;
                local_138 = &PTR_FUN_14b1828b0;
                lVar17 = (longlong)(int)uStack_b0;
                if (lVar17 != 0) {
                  lVar8 = *local_b8;
                  lVar12 = 0;
                  do {
                    lVar21 = *(longlong *)((longlong)plVar22 + lVar12);
                    FUN_1405dc634(&local_158,
                                  (ulonglong)*(ushort *)(lVar21 + 0x54) * 0x20 +
                                  *(longlong *)(DAT_14cb848c0 + 0x3a8));
                    if (0 < iVar18) {
                      FUN_140a9622e(&local_118,
                                    (ulonglong)*(ushort *)(lVar8 + 0x54) * 0x20 +
                                    *(longlong *)(DAT_14cb848c0 + 0x3a8),
                                    (ulonglong)*(ushort *)(lVar21 + 0x54) * 0x20 +
                                    *(longlong *)(DAT_14cb848c0 + 0x3a8));
                      FUN_140a9622e(&local_138,
                                    (ulonglong)*(ushort *)(lVar8 + 0x4c) * 0x20 +
                                    *(longlong *)(DAT_14cb848c0 + 0x3a8),
                                    (ulonglong)*(ushort *)(lVar21 + 0x4c) * 0x20 +
                                    *(longlong *)(DAT_14cb848c0 + 0x3a8));
                    }
                    FUN_1405dc634(&local_f8);
                    lVar12 = lVar12 + 8;
                  } while (lVar17 * 8 != lVar12);
                }
                if (local_110 != (undefined *)0x0) {
                  if ((longlong)(int)uStack_100 != 0) {
                    lVar17 = 0;
                    do {
                      if (*(longlong *)(local_108 + lVar17) != 0) {
                        FUN_1405dc634(&local_178);
                        break;
                      }
                      lVar17 = lVar17 + 8;
                    } while ((longlong)(int)uStack_100 * 8 != lVar17);
                  }
                }
                if (local_130 != (undefined *)0x0) {
                  if ((longlong)(int)uStack_120 != 0) {
                    lVar17 = 0;
                    do {
                      if (*(longlong *)(local_128 + lVar17) != 0) {
                        FUN_1405dc634(&local_d8,&local_138);
                        break;
                      }
                      lVar17 = lVar17 + 8;
                    } while ((longlong)(int)uStack_120 * 8 != lVar17);
                  }
                }
                local_138 = (undefined **)&DAT_14a171d50;
                uVar15 = uStack_120 >> 0x20;
                uStack_120 = uStack_120 & 0xffffffff00000000;
                if ((int)uVar15 != 0) {
                  FUN_140115c12(&local_128,0);
                }
                uVar15 = local_180;
                puVar23 = local_188;
                lVar17 = local_1a0;
                local_130 = (undefined *)0x0;
                if (local_128 != 0) {
                  FUN_1400020a8();
                }
                local_118 = (undefined **)&DAT_14a171d50;
                uVar1 = uStack_100 >> 0x20;
                uStack_100 = uStack_100 & 0xffffffff00000000;
                if ((int)uVar1 != 0) {
                  FUN_140115c12(&local_108,0);
                }
                local_110 = (undefined *)0x0;
                if (local_108 != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          uVar14 = local_18c & ~(uint)uVar24;
          puVar11 = *(uint **)(lVar17 + 0x3c0);
          if (*(uint **)(lVar17 + 0x3c0) == (uint *)0x0) {
            puVar11 = puVar23;
          }
          iVar18 = *(int *)(lVar17 + 0x3c8);
          iVar16 = (int)uVar15;
          lVar8 = (longlong)iVar16;
          uVar6 = puVar11[lVar8] & uVar14;
          iVar20 = local_1a4;
          if (uVar6 == 0) {
            iVar9 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar9 = iVar18 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar16) {
              iVar10 = iVar16;
            }
            if (iVar9 <= iVar16) break;
            lVar12 = 0;
            while( true ) {
              iVar20 = iVar20 + 0x20;
              uVar6 = puVar11[lVar8 + lVar12 + 1];
              if (uVar6 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar8 == lVar12) goto LAB_140a95e78;
            }
            uVar15 = (ulonglong)(iVar16 + (int)lVar12 + 1);
            uVar14 = 0xffffffff;
          }
          puVar19 = puVar19 + 2;
          uVar24 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar24 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
        } while ((int)((iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e) < iVar18);
      }
LAB_140a95e78:
      local_f8 = (undefined **)&DAT_14a171d50;
      uVar15 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if ((int)uVar15 != 0) {
        FUN_140115c12(&local_e8,0);
      }
      local_f0 = (undefined *)0x0;
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      local_d8 = (undefined **)&DAT_14a171d50;
      uVar15 = uStack_c0 >> 0x20;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      if ((int)uVar15 != 0) {
        FUN_140115c12(&local_c8,0);
      }
      local_d0 = (undefined *)0x0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar17 = DAT_14c9a3da0;
    if ((longlong)local_78 != 0) {
      lVar12 = (longlong)local_78 + -1;
      lVar8 = lVar12 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
      if (*(longlong *)(lVar17 + lVar8) != 0) {
        FUN_1400020a8();
      }
      lVar17 = DAT_14c9a3da0;
      iVar18 = (int)lVar12;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar17 + lVar8) = 0xffffffff;
      iVar20 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar20 = DAT_14c9a3dd0;
      }
      *(int *)(lVar17 + 4 + lVar8) = iVar20;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar13 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar13 = DAT_14c9a3dc0;
      }
      iVar20 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar20 = iVar18;
      }
      bVar2 = (byte)lVar12 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar13 + (longlong)(iVar20 >> 5) * 4) =
           *(uint *)(puVar13 + (longlong)(iVar20 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_78 = 0;
    }
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar7 = (int *)((longlong)local_90 + 0xc);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  lVar8 = DAT_14cb848c0 + 0x3a8;
  uVar5 = FUN_144914e1c(lVar8,&local_158);
  lVar17 = local_198;
  *(undefined2 *)(local_198 + 0x15c) = uVar5;
  uVar5 = FUN_144914e1c(lVar8,&local_178);
  *(undefined2 *)(lVar17 + 0x15e) = uVar5;
  local_178 = (undefined **)&DAT_14a171d50;
  uVar15 = uStack_160 >> 0x20;
  uStack_160 = uStack_160 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    FUN_140115c12(&local_168,0);
  }
  local_170 = (undefined *)0x0;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  local_158 = (undefined **)&DAT_14a171d50;
  uVar15 = uStack_140 >> 0x20;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    FUN_140115c12(&local_148,0);
  }
  local_150 = (undefined *)0x0;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (uVar15 = uVar15 + 1, uVar3 != uVar15) {
LAB_140a95abd:
    if ((*(ulonglong *)(lVar12 + uVar15 * 8) & ~*(ulonglong *)(local_e8 + uVar15 * 8)) != 0)
    goto LAB_140a95a7d;
  }
LAB_140a95ad2:
  if ((int)(uint)uStack_e0 < (int)uVar6) {
    lVar21 = 0;
    do {
      if (*(longlong *)(lVar12 + (longlong)(int)(uint)uStack_e0 * 8 + lVar21 * 8) != 0)
      goto LAB_140a95a7d;
      lVar21 = lVar21 + 1;
    } while (uVar6 - (uint)uStack_e0 != (int)lVar21);
  }
LAB_140a959f7:
  lVar12 = (ulonglong)*(ushort *)(lVar17 + 0x50) * 0x20;
  if (local_d0 == *(undefined **)(lVar8 + 8 + lVar12)) {
    lVar8 = lVar8 + lVar12;
    uVar6 = *(uint *)(lVar8 + 0x18);
    if ((int)(uint)uStack_c0 < (int)uVar6) {
      uVar6 = (uint)uStack_c0;
    }
    if (0 < (int)uVar6) {
      uVar15 = 0;
      do {
        if ((*(ulonglong *)(local_c8 + uVar15 * 8) &
            *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + uVar15 * 8)) != 0) goto LAB_140a95a7d;
        uVar15 = uVar15 + 1;
      } while (uVar6 != uVar15);
    }
  }
  lVar8 = (longlong)(int)uStack_b0;
  uVar6 = (int)uStack_b0 + 1;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
  if (uStack_b0._4_4_ < uVar6) {
    FUN_140a96716(&local_b8);
  }
  local_b8[lVar8] = lVar17;
LAB_140a95a7d:
  plVar22 = plVar22 + 1;
  uVar14 = uVar14 + 1;
  if (puVar19[1] <= uVar14) goto LAB_140a95afa;
  goto LAB_140a95970;
}



// FUNCTION 140a96144 FUN_140a96144 body=232 status=ok
// SIG undefined FUN_140a96144(void)

undefined8 FUN_140a96144(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  uVar1 = CONCAT71((int7)(local_20 >> 8),1);
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x60))) {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 8);
    }
    FUN_1400f0e12(puVar2,&local_34,1);
    uVar3 = local_30;
    if ((local_30 == DAT_14c948034) && (uVar3 = DAT_14c948034, local_34 != DAT_14c948030)) {
      FUN_14011791e(&local_28,local_34,local_30 >> 0x20);
      uVar3 = local_28;
    }
    if ((longlong)*(int *)(param_1 + 0x60) == 0) {
LAB_140a96204:
      uVar1 = 0;
    }
    else {
      puVar4 = *(ulonglong **)(param_1 + 0x58);
      lVar5 = (longlong)*(int *)(param_1 + 0x60) * 0x18;
      uVar1 = 0;
      do {
        if (*puVar4 == uVar3) {
          if (puVar4 == (ulonglong *)0x0) goto LAB_140a96204;
          *param_3 = (char)puVar4[1];
          uVar1 = 1;
          break;
        }
        puVar4 = puVar4 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140a9622e FUN_140a9622e body=367 status=ok
// SIG undefined FUN_140a9622e(void)

ulonglong FUN_140a9622e(longlong *param_1,longlong param_2,longlong param_3)

{
  void **ppvVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  undefined8 unaff_RBX;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_2 + 8);
  bVar8 = lVar2 == *(longlong *)(param_3 + 8);
  if (bVar8 && lVar2 != 0) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    uVar4 = *(uint *)(param_3 + 0x18);
    if ((int)*(uint *)(param_2 + 0x18) < (int)*(uint *)(param_3 + 0x18)) {
      uVar4 = *(uint *)(param_2 + 0x18);
    }
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if (uVar4 != 0) {
      FUN_140115c12(&local_58,uVar4);
      uVar5 = 0;
      do {
        uVar7 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar5 * 8) &
                *(ulonglong *)(*(longlong *)(param_2 + 0x10) + uVar5 * 8);
        if (uVar7 != 0) {
          FUN_1405dc706(&local_58,(int)uVar5 + 1,1);
          *(ulonglong *)((longlong)local_58 + uVar5 * 8) = uVar7;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    (**(code **)(*param_1 + 0x20))(param_1,0);
    _Src = local_58;
    param_1[1] = lVar2;
    ppvVar1 = (void **)(param_1 + 2);
    if (ppvVar1 != &local_58) {
      iVar3 = (int)uStack_50;
      lVar6 = (longlong)(int)uStack_50;
      *(int *)(param_1 + 3) = (int)uStack_50;
      if ((int)uStack_50 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
      else {
        FUN_140602356(ppvVar1,uStack_50 & 0xffffffff);
        if (iVar3 != 0) {
          memcpy(*ppvVar1,_Src,lVar6 << 3);
        }
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar6 = param_1[1];
    (**(code **)(*param_1 + 0x20))(param_1,0);
    param_1[1] = lVar6;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar8 && lVar2 != 0) & 0xffffffff;
}



// FUNCTION 140a963a0 FUN_140a963a0 body=371 status=ok
// SIG undefined FUN_140a963a0(void)

undefined4 FUN_140a963a0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar5 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3c) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  puVar3 = &local_90;
  FUN_1448729ea(lVar5,puVar3,param_2);
  if (local_70 == 3) {
    uVar2 = 3;
    uVar6 = local_90;
  }
  else {
    puVar4 = &local_68;
    FUN_1400b56fe(puVar4,&local_90,3);
    uVar6 = local_68;
    if (local_48 == 0) {
      uVar6 = 0x3f800000;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar4 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar2 = (uint)local_70;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar3 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140a96514 FUN_140a96514 body=378 status=ok
// SIG undefined FUN_140a96514(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140a96514(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  do {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb83048) && (FUN_144b3d300(&DAT_14cb83048), DAT_14cb83048 == -1)) {
      _DAT_14cb83010 = 0;
      uRam000000014cb83018 = 0;
      _DAT_14cb83000 = 0;
      uRam000000014cb83008 = 0;
      _DAT_14cb82ff0 = 0;
      uRam000000014cb82ff8 = 0;
      _DAT_14cb83020 = 0xf00000d0;
      _DAT_14cb83028 = 0;
      _DAT_14cb83030 = 0x3f800000;
      DAT_14cb83038 = 0;
      uRam000000014cb83040 = 0;
      _DAT_14cb82fe0 = &DAT_100000001;
      _DAT_14cb82fe8 = 0x3f000000;
      atexit((_func_5014 *)&LAB_143da64bb);
      _Init_thread_footer(&DAT_14cb83048);
    }
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar1 = *param_2;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar4 = (uint)lVar1 & 0xffff;
      lVar3 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0xe8);
      }
      iVar5 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0xf0) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0x78;
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0x78) == lVar1) {
            if (lVar3 != 0) {
              return (undefined *)(lVar3 + 8);
            }
            break;
          }
          iVar5 = *(int *)(lVar3 + 0x70);
        } while (iVar5 != -1);
      }
    }
    param_1 = FUN_140a9668e(param_1);
    if (param_1 == 0) {
      return &DAT_14cb82fe0;
    }
  } while( true );
}



// FUNCTION 140a9668e FUN_140a9668e body=136 status=ok
// SIG undefined FUN_140a9668e(void)

void FUN_140a9668e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar3 = FUN_14005f2f0();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x50) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140a96716 FUN_140a96716 body=353 status=ok
// SIG undefined FUN_140a96716(void)

void FUN_140a96716(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a9679b;
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
LAB_140a9679b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a96878 FUN_140a96878 body=666 status=ok
// SIG undefined FUN_140a96878(void)

void FUN_140a96878(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  if (param_2 != 0) {
    lVar11 = param_2;
    lVar10 = 0;
    do {
      lVar5 = lVar11;
      uVar8 = local_68;
      if (*(longlong *)(lVar5 + 0x270) != 0) {
        if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x260) == 0)) {
          lVar11 = (longlong)(int)local_68;
          uVar3 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar3);
          if (local_68._4_4_ < uVar3) {
            FUN_1488d16be(local_90,uVar8 & 0xffffffff);
          }
          puVar4 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar4 = local_90;
          }
          *(undefined8 *)(puVar4 + lVar11 * 8) = 0;
          uVar7 = *(undefined8 *)(lVar5 + 0x270);
        }
        else {
          local_98 = 0;
          FUN_140265f12();
          if (*(longlong *)(lVar10 + 0x260) == 0) {
            lVar10 = lVar10 + 0x3c;
          }
          else {
            lVar10 = lVar10 + 0x260;
          }
          FUN_1405593a8(&DAT_14cb83310,&local_98,lVar10);
          uVar8 = local_68;
          lVar11 = (longlong)(int)local_68;
          uVar3 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar3);
          if (local_68._4_4_ < uVar3) {
            FUN_1488d16be(local_90,uVar8 & 0xffffffff);
          }
          puVar4 = local_70;
          uVar7 = local_98;
          if (local_70 == (undefined1 *)0x0) {
            puVar4 = local_90;
          }
        }
        *(undefined8 *)(puVar4 + lVar11 * 8) = uVar7;
      }
      lVar11 = FUN_14001d26e();
      lVar10 = lVar5;
    } while (lVar11 != 0);
    if (0 < (longlong)(int)local_68) {
      plVar9 = (longlong *)*param_1;
      lVar11 = (longlong)(int)local_68;
      do {
        lVar10 = lVar11 + -1;
        puVar4 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar4 = local_90;
        }
        if ((longlong)(int)plVar9[4] != 0) {
          param_1 = (longlong *)plVar9[3];
          lVar5 = (longlong)(int)plVar9[4] << 3;
          do {
            plVar6 = (longlong *)*param_1;
            if (*(longlong *)*param_1 == *(longlong *)(puVar4 + lVar10 * 8)) goto LAB_140a96a49;
            param_1 = param_1 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
        *plVar6 = 0;
        *plVar6 = *(longlong *)(puVar4 + lVar10 * 8);
        plVar6[3] = 0;
        plVar6[4] = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        iVar1 = (int)plVar9[4];
        *(uint *)(plVar9 + 4) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar9 + 0x24) < iVar1 + 1U) {
          FUN_146554208(plVar9 + 3,iVar1);
        }
        param_1 = (longlong *)(plVar9[3] + (longlong)iVar1 * 8);
        *param_1 = (longlong)plVar6;
LAB_140a96a49:
        plVar9 = plVar6;
        bVar2 = 1 < lVar11;
        lVar11 = lVar10;
      } while (bVar2);
    }
  }
  lVar11 = *param_1;
  lVar10 = *(longlong *)(lVar11 + 8);
  iVar1 = *(int *)(lVar11 + 0x10);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar8 = 0;
    do {
      if (*(longlong *)(lVar10 + uVar8) == param_2) {
        if ((int)(~uVar8 >> 3) != 0) goto LAB_140a96ab1;
        break;
      }
      uVar8 = uVar8 + 8;
    } while (lVar5 * 8 - uVar8 != 0);
  }
  *(uint *)(lVar11 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar11 + 0x14) < iVar1 + 1U) {
    FUN_141895a5e((longlong *)(lVar11 + 8),iVar1);
    lVar10 = *(longlong *)(lVar11 + 8);
  }
  *(longlong *)(lVar10 + lVar5 * 8) = param_2;
LAB_140a96ab1:
  puVar4 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    puVar4 = local_90;
  }
  FUN_143dae9eb(puVar4,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a96b14 FUN_140a96b14 body=631 status=ok
// SIG undefined FUN_140a96b14(void)

void FUN_140a96b14(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb823a0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb823a0,0,0,4);
  }
  uVar5 = DAT_14cb823a8;
  if (DAT_14cb823a8 != 0) {
    FUN_144a1cbf0(&DAT_14cb82398,0,DAT_14cb823a8,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14cb823a0;
        if (DAT_14cb823a0 == (undefined *)0x0) {
          puVar7 = &DAT_14cb82398;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb823a8 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cb82370;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cb82388 == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
      do {
        lVar13 = DAT_14cb82360;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar1 = *(undefined8 *)(DAT_14cb82360 + lVar12);
        uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
        uVar14 = (uint)uVar1 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar1 << 0x10 | uVar14) + (int)((ulonglong)uVar1 >> 0x20) +
                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) &
                 (longlong)(int)DAT_14cb823a8 - 1U;
        iVar10 = (int)uVar11;
        *(int *)(DAT_14cb82360 + 0x1c + lVar12) = iVar10;
        puVar7 = DAT_14cb823a0;
        if (DAT_14cb823a0 == (undefined *)0x0) {
          puVar7 = &DAT_14cb82398;
        }
        *(undefined4 *)(lVar13 + 0x18 + lVar12) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cb823a8 - 1U & uVar11) * 4);
        puVar7 = DAT_14cb823a0;
        if (DAT_14cb823a0 == (undefined *)0x0) {
          puVar7 = &DAT_14cb82398;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14cb823a8 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_58 + 0x10);
        if (*(undefined **)(local_58 + 0x10) == (undefined *)0x0) {
          puVar7 = local_58;
        }
        iVar10 = *(int *)(local_58 + 0x18);
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar6 = iVar10 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_140a96d44;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar10);
    }
  }
LAB_140a96d44:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a96d8c FUN_140a96d8c body=3598 status=ok
// SIG undefined FUN_140a96d8c(void)

void FUN_140a96d8c(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  void *pvVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  byte bVar10;
  char cVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  }
  if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_2 + 0x1dc);
  }
  bVar10 = *(byte *)(param_1 + 0x368);
  if ((bVar10 & 2) == 0) {
    bVar10 = bVar10 & 0xf9 | *(byte *)(param_2 + 0x368) & 4;
    *(byte *)(param_1 + 0x368) = bVar10;
  }
  if ((bVar10 & 8) == 0) {
    bVar10 = bVar10 & 0xe7 | *(byte *)(param_2 + 0x368) & 0x10;
    *(byte *)(param_1 + 0x368) = bVar10;
  }
  if ((bVar10 & 0x20) == 0) {
    bVar10 = bVar10 & 0x9f | *(byte *)(param_2 + 0x368) & 0x40;
    *(byte *)(param_1 + 0x368) = bVar10;
  }
  if (-1 < (char)bVar10) {
    *(byte *)(param_1 + 0x369) = *(byte *)(param_1 + 0x369) & 0xfe | *(byte *)(param_2 + 0x369) & 1;
  }
  if ((*(char *)(param_1 + 0x378) == '\0') &&
     (cVar11 = *(char *)(param_2 + 0x379), *(char *)(param_1 + 0x379) = cVar11, cVar11 == '\x01')) {
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0x37c);
  }
  bVar10 = *(byte *)(param_1 + 0x369);
  if ((bVar10 & 2) == 0) {
    bVar10 = bVar10 & 0xf9 | *(byte *)(param_2 + 0x369) & 4;
    *(byte *)(param_1 + 0x369) = bVar10;
  }
  if ((bVar10 & 8) == 0) {
    bVar10 = bVar10 & 0xe7 | *(byte *)(param_2 + 0x369) & 0x10;
    *(byte *)(param_1 + 0x369) = bVar10;
  }
  if ((bVar10 & 0x20) == 0) {
    *(byte *)(param_1 + 0x369) = bVar10 & 0x9f | *(byte *)(param_2 + 0x369) & 0x40;
  }
  if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
    *(byte *)(param_1 + 0x278) =
         *(byte *)(param_1 + 0x278) & 0xfc | ((*(byte *)(param_2 + 0x278) & 6) != 0) * '\x02';
  }
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  }
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x204);
    *(longlong *)(param_1 + 0x204) = lVar17;
    if (lVar17 == 0) {
      puVar14 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        puVar14 = *(undefined4 **)(param_1 + 8);
      }
      FUN_1447a97f4(&local_60,puVar14);
    }
    else {
      FUN_1446dcdd4(&local_60,param_1 + 0x204);
    }
    FUN_1447715ec(param_1 + 0x210,&local_60);
    if (uStack_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((*(byte *)(param_1 + 0x238) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x239) = *(undefined1 *)(param_2 + 0x239);
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    uVar6 = *(undefined4 *)(param_2 + 0x7c);
    uVar7 = *(undefined4 *)(param_2 + 0x80);
    uVar8 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = uVar6;
    *(undefined4 *)(param_1 + 0x80) = uVar7;
    *(undefined4 *)(param_1 + 0x84) = uVar8;
    if (param_1 != param_2) {
      iVar15 = *(int *)(param_2 + 0x90);
      pvVar2 = *(void **)(param_2 + 0x88);
      *(int *)(param_1 + 0x90) = iVar15;
      if (iVar15 == 0 && *(int *)(param_1 + 0x94) == 0) {
        *(undefined4 *)(param_1 + 0x94) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x88),iVar15);
        if (iVar15 != 0) {
          memcpy(*(void **)(param_1 + 0x88),pvVar2,(longlong)iVar15 * 2);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    lVar17 = *(longlong *)(param_2 + 0xd0);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    *(longlong *)(param_1 + 0xd0) = lVar17;
    if (*(longlong *)(param_1 + 0xd8) != *(longlong *)(param_2 + 0xd8)) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0xd8) = uVar13;
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar17 = *(longlong *)(param_2 + 0xe8);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    *(longlong *)(param_1 + 0xe8) = lVar17;
    if (*(longlong *)(param_1 + 0xf0) != *(longlong *)(param_2 + 0xf0)) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0xf0) = uVar13;
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x100);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    *(longlong *)(param_1 + 0x100) = lVar17;
    if (*(longlong *)(param_1 + 0x108) != *(longlong *)(param_2 + 0x108)) {
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x108) = uVar13;
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  }
  if (*(longlong *)(param_1 + 0x130) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x130);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(longlong *)(param_1 + 0x130) = lVar17;
    if (*(longlong *)(param_1 + 0x138) != *(longlong *)(param_2 + 0x138)) {
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x138) = uVar13;
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  }
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
    uVar6 = *(undefined4 *)(param_2 + 0x1ac);
    uVar7 = *(undefined4 *)(param_2 + 0x1b0);
    uVar8 = *(undefined4 *)(param_2 + 0x1b4);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = uVar6;
    *(undefined4 *)(param_1 + 0x1b0) = uVar7;
    *(undefined4 *)(param_1 + 0x1b4) = uVar8;
    if (param_1 != param_2) {
      iVar15 = *(int *)(param_2 + 0x1c0);
      pvVar2 = *(void **)(param_2 + 0x1b8);
      *(int *)(param_1 + 0x1c0) = iVar15;
      if (iVar15 == 0 && *(int *)(param_1 + 0x1c4) == 0) {
        *(undefined4 *)(param_1 + 0x1c4) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x1b8),iVar15);
        if (iVar15 != 0) {
          memcpy(*(void **)(param_1 + 0x1b8),pvVar2,(longlong)iVar15 * 2);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x279) == '\0') {
    *(undefined1 *)(param_1 + 0x279) = *(undefined1 *)(param_2 + 0x279);
  }
  if (*(longlong *)(param_1 + 0x290) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x290);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    *(longlong *)(param_1 + 0x290) = lVar17;
    if (*(longlong *)(param_1 + 0x298) != *(longlong *)(param_2 + 0x298)) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x298) = uVar13;
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  }
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x2a8);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x2b8) = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar17;
    if (*(longlong *)(param_1 + 0x2b0) != *(longlong *)(param_2 + 0x2b0)) {
      *(undefined8 *)(param_1 + 0x2b8) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x2b0) = uVar13;
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  }
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x2c0);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    *(longlong *)(param_1 + 0x2c0) = lVar17;
    if (*(longlong *)(param_1 + 0x2c8) != *(longlong *)(param_2 + 0x2c8)) {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x2c8) = uVar13;
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  }
  lVar17 = *(longlong *)(param_1 + 0x2f0);
  if (lVar17 == 0) {
    uVar13 = FUN_140067708();
    lVar17 = FUN_14477b664(uVar13);
    *(longlong *)(param_1 + 0x2f0) = lVar17;
  }
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    plVar1 = (longlong *)(param_1 + 0x2e8);
    if ((lVar17 != 0) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar17 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar11 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar11 == '\0')) {
        *(undefined8 *)(param_1 + 0x2f8) = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar17 = FUN_144aff482(uVar13,plVar1);
        *(longlong *)(param_1 + 0x2f8) = lVar17;
        if (lVar17 != 0) goto LAB_140a97347;
      }
    }
    if ((*(char *)(param_1 + 0x2d8) != '\x01') || (*(longlong *)(param_1 + 0x2dc) == 0)) {
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
      lVar17 = *(longlong *)(param_2 + 0x2e8);
      if (*plVar1 != lVar17) {
        *(undefined8 *)(param_1 + 0x2f8) = 0;
      }
      *(longlong *)(param_1 + 0x2e8) = lVar17;
      if (*(longlong *)(param_1 + 0x2f0) != *(longlong *)(param_2 + 0x2f0)) {
        *(undefined8 *)(param_1 + 0x2f8) = 0;
      }
      uVar13 = FUN_14477b664();
      uVar13 = FUN_14477b664(uVar13);
      *(undefined8 *)(param_1 + 0x2f0) = uVar13;
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
      if ((*(longlong *)(param_1 + 0x300) != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x300) + 0x50));
      }
      bVar10 = DAT_14cb26569;
      lVar17 = *(longlong *)(param_2 + 0x300);
      *(longlong *)(param_1 + 0x300) = lVar17;
      if ((lVar17 != 0) && ((bVar10 & 1) != 0)) {
        piVar3 = *(int **)(lVar17 + 0x50);
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar15 = 5;
        }
        else {
          if ((char)piVar3[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_140a97347;
          }
          iVar15 = 2;
        }
        LOCK();
        piVar3[2] = iVar15;
        UNLOCK();
      }
    }
  }
LAB_140a97347:
  lVar17 = *(longlong *)(param_1 + 800);
  if (lVar17 == 0) {
    uVar13 = FUN_140067708();
    lVar17 = FUN_14477b664(uVar13);
    *(longlong *)(param_1 + 800) = lVar17;
  }
  if (*(longlong *)(param_1 + 0x328) == 0) {
    plVar1 = (longlong *)(param_1 + 0x318);
    if ((lVar17 != 0) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar17 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar11 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar11 == '\0')) {
        *(undefined8 *)(param_1 + 0x328) = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar17 = FUN_144aff482(uVar13,plVar1);
        *(longlong *)(param_1 + 0x328) = lVar17;
        if (lVar17 != 0) goto LAB_140a97365;
      }
    }
    if ((*(char *)(param_1 + 0x308) != '\x01') || (*(longlong *)(param_1 + 0x30c) == 0)) {
      *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_2 + 0x308);
      lVar17 = *(longlong *)(param_2 + 0x318);
      if (*plVar1 != lVar17) {
        *(undefined8 *)(param_1 + 0x328) = 0;
      }
      *(longlong *)(param_1 + 0x318) = lVar17;
      if (*(longlong *)(param_1 + 800) != *(longlong *)(param_2 + 800)) {
        *(undefined8 *)(param_1 + 0x328) = 0;
      }
      uVar13 = FUN_14477b664();
      uVar13 = FUN_14477b664(uVar13);
      *(undefined8 *)(param_1 + 800) = uVar13;
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
      if ((*(longlong *)(param_1 + 0x330) != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x50));
      }
      bVar10 = DAT_14cb26569;
      lVar17 = *(longlong *)(param_2 + 0x330);
      *(longlong *)(param_1 + 0x330) = lVar17;
      if ((lVar17 != 0) && ((bVar10 & 1) != 0)) {
        piVar3 = *(int **)(lVar17 + 0x50);
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar15 = 5;
        }
        else {
          if ((char)piVar3[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_140a97365;
          }
          iVar15 = 2;
        }
        LOCK();
        piVar3[2] = iVar15;
        UNLOCK();
      }
    }
  }
LAB_140a97365:
  if (*(longlong *)(param_1 + 0x338) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x338);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    *(longlong *)(param_1 + 0x338) = lVar17;
    if (*(longlong *)(param_1 + 0x340) != *(longlong *)(param_2 + 0x340)) {
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x340) = uVar13;
    *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x488);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x498) = 0;
    }
    *(longlong *)(param_1 + 0x488) = lVar17;
    if (*(longlong *)(param_1 + 0x490) != *(longlong *)(param_2 + 0x490)) {
      *(undefined8 *)(param_1 + 0x498) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x490) = uVar13;
    *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  }
  if ((*(byte *)(param_1 + 0x368) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
    uVar6 = *(undefined4 *)(param_2 + 0x354);
    uVar7 = *(undefined4 *)(param_2 + 0x358);
    uVar8 = *(undefined4 *)(param_2 + 0x35c);
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
    *(undefined4 *)(param_1 + 0x354) = uVar6;
    *(undefined4 *)(param_1 + 0x358) = uVar7;
    *(undefined4 *)(param_1 + 0x35c) = uVar8;
  }
  if (*(longlong *)(param_1 + 0x430) == 0) {
    *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
    uVar6 = *(undefined4 *)(param_2 + 0x434);
    uVar7 = *(undefined4 *)(param_2 + 0x438);
    uVar8 = *(undefined4 *)(param_2 + 0x43c);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
    *(undefined4 *)(param_1 + 0x434) = uVar6;
    *(undefined4 *)(param_1 + 0x438) = uVar7;
    *(undefined4 *)(param_1 + 0x43c) = uVar8;
    if (param_1 != param_2) {
      iVar15 = *(int *)(param_2 + 0x448);
      pvVar2 = *(void **)(param_2 + 0x440);
      *(int *)(param_1 + 0x448) = iVar15;
      if (iVar15 == 0 && *(int *)(param_1 + 0x44c) == 0) {
        *(undefined4 *)(param_1 + 0x44c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + 0x440),iVar15);
        if (iVar15 != 0) {
          memcpy(*(void **)(param_1 + 0x440),pvVar2,(longlong)iVar15 * 2);
        }
      }
    }
  }
  if ((param_3 == '\0') && (0 < *(int *)(param_2 + 0x288))) {
    FUN_145d27c8e(param_1 + 0x280,param_2 + 0x280);
  }
  if ((*(int *)(param_1 + 0x398) == 0) &&
     (FUN_1406fa324(param_1 + 0x390,param_2 + 0x390), 0 < *(int *)(param_2 + 0x398))) {
    lVar18 = 0;
    lVar17 = 0;
    do {
      uVar13 = *(undefined8 *)(*(longlong *)(param_2 + 0x390) + lVar18);
      uVar5 = (uint)((ulonglong)uVar13 >> 0x10);
      uVar16 = (uint)uVar13 & 0xffff;
      puVar14 = (undefined4 *)
                FUN_140a93554(param_1 + 0x3a0,
                              ((uint)uVar13 << 0x10 | uVar16) + (int)((ulonglong)uVar13 >> 0x20) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4),
                              *(longlong *)(param_2 + 0x390) + lVar18);
      *puVar14 = (int)lVar17;
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 8;
    } while (lVar17 < *(int *)(param_2 + 0x398));
  }
  bVar10 = *(byte *)(param_1 + 0x38c);
  if ((bVar10 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x380) = *(undefined2 *)(param_2 + 0x380);
  }
  if ((bVar10 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  }
  if ((bVar10 & 4) == 0) {
    bVar10 = bVar10 & 0xf3 | *(byte *)(param_2 + 0x38c) & 8;
    *(byte *)(param_1 + 0x38c) = bVar10;
  }
  if ((bVar10 & 0x10) == 0) {
    *(byte *)(param_1 + 0x38c) = bVar10 & 0xcf | *(byte *)(param_2 + 0x38c) & 0x20;
  }
  if ((*(byte *)(param_1 + 0x46c) & 1) == 0) {
    *(byte *)(param_1 + 0x46c) = *(byte *)(param_1 + 0x46c) & 0xfc | *(byte *)(param_2 + 0x46c) & 2;
  }
  if ((*(byte *)(param_1 + 0x4b8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x4bc) = *(undefined8 *)(param_2 + 0x4bc);
  }
  if (*(longlong *)(param_1 + 0x470) == 0) {
    lVar17 = *(longlong *)(param_2 + 0x470);
    if (lVar17 != 0) {
      *(undefined8 *)(param_1 + 0x480) = 0;
    }
    *(longlong *)(param_1 + 0x470) = lVar17;
    if (*(longlong *)(param_1 + 0x478) != *(longlong *)(param_2 + 0x478)) {
      *(undefined8 *)(param_1 + 0x480) = 0;
    }
    uVar13 = FUN_14477b664();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x478) = uVar13;
    *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_2 + 0x480);
  }
  lVar17 = DAT_14cb848c0;
  if (param_3 == '\0') {
    lVar18 = DAT_14cb848c0 + 0x3a8;
    local_60 = (undefined **)&DAT_14a171d50;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = *(undefined8 *)
                (*(longlong *)(DAT_14cb848c0 + 0x3a8) +
                 (ulonglong)*(ushort *)(param_1 + 0x386) * 0x20 + 8);
    FUN_1406022fe(&local_50);
    local_60 = &PTR_FUN_14b1828b0;
    FUN_1405dc634(&local_60,
                  (ulonglong)*(ushort *)(param_2 + 0x386) * 0x20 + *(longlong *)(lVar17 + 0x3a8));
    uVar12 = FUN_144914e1c(lVar18,&local_60);
    *(undefined2 *)(param_1 + 0x386) = uVar12;
    local_60 = (undefined **)&DAT_14a171d50;
    uVar9 = uStack_48 >> 0x20;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_140115c12(&local_50,0);
    }
    local_58 = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a97b9c FUN_140a97b9c body=552 status=ok
// SIG undefined FUN_140a97b9c(void)

void FUN_140a97b9c(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x808);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x101) {
    *(undefined4 *)((longlong)param_1 + 0x80c) = 0x100;
    _Src = *(void **)((longlong)param_1 + 0x800);
joined_r0x000140a97d34:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x100 < *(uint *)((longlong)param_1 + 0x80c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_140a97c36;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_140a97c36:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x80c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x800);
    }
    else {
      *(uint *)((longlong)param_1 + 0x80c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x800);
      if (uVar6 < 0x101) goto joined_r0x000140a97d34;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x800,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,uVar8,8);
  return;
}



// FUNCTION 140a97dc4 FUN_140a97dc4 body=138 status=ok
// SIG undefined FUN_140a97dc4(void)

void FUN_140a97dc4(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  *(undefined2 *)((longlong)param_1 + 0x2a) = 0xffff;
  *param_1 = &PTR_FUN_14b30c7a0;
  param_1[6] = 0;
  param_1[7] = 0x101000100010001;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined2 *)((longlong)param_1 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
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
  param_1[4] = DAT_14cb841e0;
  *(undefined1 *)(param_1 + 5) = 2;
  return;
}



// FUNCTION 140a97e4e FUN_140a97e4e body=12 status=ok
// SIG undefined FUN_140a97e4e(void)

void FUN_140a97e4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a97e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140a97e5a FUN_140a97e5a body=59 status=ok
// SIG undefined FUN_140a97e5a(void)

undefined8 * FUN_140a97e5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c5450;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a97e96 FUN_140a97e96 body=614 status=ok
// SIG undefined FUN_140a97e96(void)

longlong * FUN_140a97e96(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_3 == 0) {
    *param_2 = 0;
    return param_2;
  }
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c75f6d8 + 1;
  lVar8 = DAT_14c75f6d8 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c75f6d8 + 2;
    lVar8 = DAT_14c75f6d8 + 2;
  }
  DAT_14c75f6d8 = lVar8;
  *param_2 = lVar7;
  *(longlong *)(param_3 + 0x30) = lVar7;
  plVar3 = (longlong *)FUN_140a980fe(param_1 + 0x2e);
  *plVar3 = lVar7;
  uVar1 = *(uint *)(param_3 + 0xc);
  *(uint *)(plVar3 + 1) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar2 = *(int *)(lVar8 + 0x10);
  if (iVar2 == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar2 = *(int *)(lVar8 + 0x10);
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(lVar8 + 0x10) = iVar6;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar2 = iVar6;
    }
    *(int *)((longlong)plVar3 + 0xc) = iVar2;
    if (iVar2 == 0) goto LAB_140a97f89;
  }
  else {
    *(int *)((longlong)plVar3 + 0xc) = iVar2;
  }
  uVar1 = *(uint *)(plVar3 + 1);
  if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
      (puVar5 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      puVar5 != (undefined8 *)0x0)) &&
     ((*(int *)(puVar5 + 2) == iVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar4 = *puVar5;
    }
    else {
      uVar4 = 0;
    }
    FUN_140a981c4(uVar4,(int)param_1[0x24],param_1 + 0x30,plVar3 + 2);
  }
LAB_140a97f89:
  if (((((int)plVar3[2] != 0) || ((char)plVar3[5] != '\0')) ||
      (*(int *)((longlong)plVar3 + 0x14) != 0)) && (plVar3[4] != 0)) {
    *(undefined1 *)(plVar3 + 6) = 1;
    (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
    FUN_140a1989c(param_1 + 3,param_2,param_3);
  }
  plVar3 = (longlong *)FUN_140a9816e(param_1 + 0x67);
  *plVar3 = *param_2;
  uVar1 = *(uint *)(param_3 + 0xc);
  *(uint *)(plVar3 + 1) = uVar1;
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
    iVar6 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar2 = *(int *)(lVar8 + 0x10);
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(lVar8 + 0x10) = iVar6;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar2 = iVar6;
    }
  }
  *(int *)((longlong)plVar3 + 0xc) = iVar2;
  return param_2;
}



// FUNCTION 140a980fe FUN_140a980fe body=66 status=ok
// SIG undefined FUN_140a980fe(void)

longlong FUN_140a980fe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145769c96(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_140a98140(lVar2,1);
  return lVar2;
}



// FUNCTION 140a98140 FUN_140a98140 body=45 status=ok
// SIG undefined FUN_140a98140(void)

void FUN_140a98140(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x30);
    do {
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined2 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + -0x30) = 0;
      *(undefined8 *)(puVar1 + -0x28) = 0;
      *(undefined8 *)(puVar1 + -0x24) = 0;
      *(undefined8 *)(puVar1 + -0x1c) = 0;
      puVar1 = puVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a9816e FUN_140a9816e body=66 status=ok
// SIG undefined FUN_140a9816e(void)

longlong FUN_140a9816e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145769c10(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_140a981b0(lVar2,1);
  return lVar2;
}



// FUNCTION 140a981b0 FUN_140a981b0 body=19 status=ok
// SIG undefined FUN_140a981b0(void)

void FUN_140a981b0(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 140a981c4 FUN_140a981c4 body=787 status=ok
// SIG undefined FUN_140a981c4(void)

void FUN_140a981c4(longlong *param_1,int param_2,double *param_3,uint *param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_d8;
  double local_d0;
  undefined1 local_88;
  undefined1 local_80 [16];
  double local_70;
  undefined1 local_68;
  undefined1 local_60 [24];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*param_1 + 0x350))();
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  lVar11 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar11 == 0) {
    *param_4 = 0;
    local_48 = 0;
    uVar10 = (**(code **)(*param_1 + 0x348))(param_1);
    param_4[1] = uVar10;
    param_4[2] = 0;
    uVar12 = (**(code **)(*param_1 + 0x310))(param_1,0);
    *(undefined8 *)(param_4 + 4) = uVar12;
    uVar9 = (**(code **)(*param_1 + 0x318))(param_1);
    *(undefined1 *)(param_4 + 6) = uVar9;
    uVar9 = (**(code **)(*param_1 + 0x300))(param_1);
    *(undefined1 *)(param_4 + 6) = uVar9;
    goto LAB_140a98387;
  }
  if (param_2 - 1U < 2) {
    if (*(char *)(param_3 + 3) == '\x01') {
      (**(code **)(*param_1 + 0x2b0))(param_1,&local_f8);
      dVar1 = param_3[1];
      dVar2 = *param_3;
      uVar10 = (**(code **)(*param_1 + 0x340))();
      param_4[2] = uVar10;
      *param_4 = 0;
      uVar10 = 0;
      uVar14 = 0;
      do {
        if ((1 < uVar10) && ((*(uint *)(lVar11 + 0x170) >> (uVar10 & 0x1f) & 1) != 0)) {
          if (uVar10 == 2) {
            cVar3 = *(char *)((longlong)param_1 + 0xbb);
            plVar15 = (longlong *)((longlong)param_1 + 0xbc);
joined_r0x000140a982e9:
            if (cVar3 == '\0') goto LAB_140a982be;
          }
          else {
            if (uVar10 == 3) {
              cVar3 = *(char *)((longlong)param_1 + 0xbf);
              plVar15 = param_1 + 0x18;
              goto joined_r0x000140a982e9;
            }
            plVar15 = (longlong *)((longlong)param_1 + 0xbe);
            if (*(char *)((longlong)param_1 + 0xbd) != '\x01') break;
          }
          if ((char)*plVar15 == '\0') {
            uVar14 = uVar14 | 1 << ((byte)uVar10 & 0x1f);
            *param_4 = uVar14;
          }
        }
LAB_140a982be:
        uVar10 = uVar10 + 1;
      } while (uVar10 != 5);
      local_68 = 1;
      local_70 = SQRT((dVar2 - local_d8) * (dVar2 - local_d8) +
                      (dVar1 - local_d0) * (dVar1 - local_d0));
LAB_140a98347:
      uVar10 = (**(code **)(*param_1 + 0x348))(param_1);
      param_4[1] = uVar10;
    }
    else {
      *param_4 = 0;
      puVar13 = local_80;
LAB_140a984a6:
      puVar13[8] = 0;
      uVar10 = (**(code **)(*param_1 + 0x348))(param_1);
      param_4[1] = uVar10;
      param_4[2] = 0;
    }
  }
  else {
    if (param_2 == 3) {
      *param_4 = *(uint *)(lVar11 + 0x170) & 2;
      uVar10 = (**(code **)(*param_1 + 0x340))(param_1);
      param_4[2] = uVar10;
      local_88 = 0;
      goto LAB_140a98347;
    }
    if (param_2 == 0) {
      *param_4 = 0;
      puVar13 = local_60;
      goto LAB_140a984a6;
    }
  }
  uVar12 = (**(code **)(*param_1 + 0x310))(param_1,param_4[2]);
  *(undefined8 *)(param_4 + 4) = uVar12;
  uVar9 = (**(code **)(*param_1 + 0x318))(param_1);
  *(undefined1 *)(param_4 + 6) = uVar9;
  uVar9 = (**(code **)(*param_1 + 0x300))(param_1);
  *(undefined1 *)((longlong)param_4 + 0x19) = uVar9;
LAB_140a98387:
  (**(code **)(*param_1 + 800))(param_1,&local_f8);
  if (param_1 + 0xd == &local_f8) {
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    param_1[0xd] = local_f8;
    local_f8 = 0;
    *(undefined4 *)(param_1 + 0xe) = local_f0;
    *(undefined4 *)((longlong)param_1 + 0x74) = local_ec;
  }
  uVar9 = (**(code **)(*param_1 + 0x328))(param_1);
  *(undefined1 *)(param_1 + 0xf) = uVar9;
  uVar10 = param_4[1];
  uVar14 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(uint *)(param_1 + 8) = *param_4;
  *(uint *)((longlong)param_1 + 0x44) = uVar10;
  *(uint *)(param_1 + 9) = uVar14;
  *(uint *)((longlong)param_1 + 0x4c) = uVar4;
  *(uint *)(param_1 + 10) = uVar5;
  *(uint *)((longlong)param_1 + 0x54) = uVar6;
  *(uint *)(param_1 + 0xb) = uVar7;
  *(uint *)((longlong)param_1 + 0x5c) = uVar8;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a984fc FUN_140a984fc body=2984 status=ok
// SIG undefined FUN_140a984fc(void)

/* WARNING: Removing unreachable block (ram,0x000140a98d73) */
/* WARNING: Removing unreachable block (ram,0x000140a98d82) */
/* WARNING: Removing unreachable block (ram,0x000140a98d86) */

void FUN_140a984fc(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  int iVar12;
  ushort *puVar13;
  longlong lVar14;
  undefined **ppuVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined ***pppuVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte bVar26;
  int iVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined ***pppuVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong *plVar34;
  undefined ***pppuVar35;
  int iVar36;
  uint uVar37;
  longlong lVar38;
  undefined4 *puVar39;
  int *piVar40;
  undefined ***pppuVar41;
  uint uVar42;
  int *piVar43;
  uint uVar44;
  longlong lVar45;
  int *piVar46;
  int iVar47;
  undefined1 auStack_298 [40];
  longlong *local_270;
  byte *local_268;
  ulonglong local_260;
  ulonglong local_258;
  undefined ***local_250;
  ulonglong local_248;
  ulonglong local_240;
  int *local_238;
  uint local_230;
  int local_22c;
  float *local_228 [2];
  int local_218;
  float *local_210;
  int local_200;
  float *local_1f8;
  int local_1e8;
  float *local_1e0 [2];
  int local_1d0;
  float *local_1c8;
  int local_1b8;
  float *local_1b0;
  int local_1a0;
  undefined1 local_198 [8];
  longlong local_190;
  undefined ***local_188;
  undefined ***pppuStack_180;
  undefined ***local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined **local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_148 [4];
  undefined ***local_138;
  undefined ***pppuStack_130;
  undefined ***local_128;
  undefined ***pppuStack_120;
  undefined **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined ***local_f8;
  undefined8 uStack_f0;
  undefined ***local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_140a990a6(local_198);
  if (*param_2 == 1) {
    iVar27 = *(int *)(param_2 + 0x30);
    bVar26 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar27);
    uVar42 = (uint)bVar26;
    *(int *)(param_2 + 0x30) = iVar27 + 1;
    lVar38 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar27 * 8);
    iVar27 = *(int *)(param_2 + 0x44) * (uint)bVar26;
    bVar26 = 1;
  }
  else {
    puVar13 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar13;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar13 + 1;
    uVar37 = uVar11 & 0x7fff;
    uVar42 = (uint)(uVar11 >> 0xf);
    lVar45 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar11 < 0) {
      lVar38 = (ulonglong)(uVar37 * *(int *)(lVar45 + 0x80)) + *(longlong *)(lVar45 + 0x70);
    }
    else {
      iVar27 = **(int **)(lVar45 + 0x20);
      lVar38 = 0;
      if (iVar27 <= (int)uVar37) {
        do {
          uVar37 = uVar37 - iVar27;
          iVar27 = (*(int **)(lVar45 + 0x20))[lVar38 + 1];
          lVar38 = lVar38 + 1;
        } while (iVar27 <= (int)uVar37);
      }
      lVar38 = (longlong)(int)uVar37 + *(longlong *)(*(longlong *)(lVar45 + 0x18) + lVar38 * 8);
    }
    iVar27 = *(int *)(lVar45 + 0x4c) * uVar42;
    bVar26 = *param_2;
  }
  local_260 = CONCAT44(local_260._4_4_,iVar27);
  if ((bVar26 & 1) == 0) {
    puVar13 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar13;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar13 + 1;
    uVar44 = uVar11 & 0x7fff;
    uVar37 = (uint)(uVar11 >> 0xf);
    lVar32 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar11 < 0) {
      lVar45 = (ulonglong)(uVar44 * *(int *)(lVar32 + 0x80)) + *(longlong *)(lVar32 + 0x70);
    }
    else {
      iVar27 = **(int **)(lVar32 + 0x20);
      lVar45 = 0;
      if (iVar27 <= (int)uVar44) {
        do {
          uVar44 = uVar44 - iVar27;
          iVar27 = (*(int **)(lVar32 + 0x20))[lVar45 + 1];
          lVar45 = lVar45 + 1;
        } while (iVar27 <= (int)uVar44);
      }
      lVar45 = (longlong)(int)uVar44 + *(longlong *)(*(longlong *)(lVar32 + 0x18) + lVar45 * 8);
    }
    iVar27 = *(int *)(lVar32 + 0x4c) * uVar37;
    bVar26 = *param_2;
  }
  else {
    iVar27 = *(int *)(param_2 + 0x30);
    uVar37 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar27);
    *(int *)(param_2 + 0x30) = iVar27 + 1;
    lVar45 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar27 * 8);
    iVar27 = *(int *)(param_2 + 0x44) * uVar37;
  }
  local_258 = CONCAT44(local_258._4_4_,uVar42);
  if ((bVar26 & 1) == 0) {
    puVar13 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar13;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar13 + 1;
    uVar42 = uVar11 & 0x7fff;
    lVar33 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar11 < 0) {
      lVar32 = (ulonglong)(uVar42 * *(int *)(lVar33 + 0x80)) + *(longlong *)(lVar33 + 0x70);
    }
    else {
      iVar47 = **(int **)(lVar33 + 0x20);
      lVar32 = 0;
      if (iVar47 <= (int)uVar42) {
        do {
          uVar42 = uVar42 - iVar47;
          iVar47 = (*(int **)(lVar33 + 0x20))[lVar32 + 1];
          lVar32 = lVar32 + 1;
        } while (iVar47 <= (int)uVar42);
      }
      lVar32 = (longlong)(int)uVar42 + *(longlong *)(*(longlong *)(lVar33 + 0x18) + lVar32 * 8);
    }
    uVar42 = (uint)(uVar11 >> 0xf);
    pbVar28 = (byte *)(lVar33 + 0x4c);
  }
  else {
    iVar47 = *(int *)(param_2 + 0x30);
    uVar42 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar47);
    *(int *)(param_2 + 0x30) = iVar47 + 1;
    lVar32 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar47 * 8);
    pbVar28 = param_2 + 0x44;
  }
  iVar47 = *(int *)pbVar28;
  FUN_1448a432c(local_1e0,param_2);
  FUN_1448a432c(local_228,param_2);
  if (*param_2 == 1) {
    iVar36 = *(int *)(param_2 + 0x30);
    uVar44 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar36);
    *(int *)(param_2 + 0x30) = iVar36 + 1;
    lVar33 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar36 * 8);
    iVar36 = *(int *)(param_2 + 0x44) * uVar44;
    bVar26 = 1;
  }
  else {
    puVar13 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar13;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar13 + 1;
    uVar31 = uVar11 & 0x7fff;
    uVar44 = (uint)(uVar11 >> 0xf);
    lVar14 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar11 < 0) {
      lVar33 = (ulonglong)(uVar31 * *(int *)(lVar14 + 0x80)) + *(longlong *)(lVar14 + 0x70);
    }
    else {
      iVar36 = **(int **)(lVar14 + 0x20);
      lVar33 = 0;
      if (iVar36 <= (int)uVar31) {
        do {
          uVar31 = uVar31 - iVar36;
          iVar36 = (*(int **)(lVar14 + 0x20))[lVar33 + 1];
          lVar33 = lVar33 + 1;
        } while (iVar36 <= (int)uVar31);
      }
      lVar33 = (longlong)(int)uVar31 + *(longlong *)(*(longlong *)(lVar14 + 0x18) + lVar33 * 8);
    }
    iVar36 = *(int *)(lVar14 + 0x4c) * uVar44;
    bVar26 = *param_2;
  }
  if ((bVar26 & 1) == 0) {
    puVar13 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar13;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar13 + 1;
    uVar31 = uVar11 & 0x7fff;
    if (uVar31 == 0x7fff) {
      local_238 = &local_22c;
      local_230 = 0;
    }
    else {
      lVar14 = *(longlong *)(param_2 + 0x80);
      local_230 = 1;
      local_238 = (int *)((ulonglong)(uVar31 * *(int *)(lVar14 + 0x80)) +
                          *(longlong *)(lVar14 + 0x70) + (longlong)*(int *)(lVar14 + 0x4c) * 4);
    }
  }
  else {
    iVar12 = *(int *)(param_2 + 0x30);
    bVar26 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar12);
    local_230 = (uint)bVar26;
    *(int *)(param_2 + 0x30) = iVar12 + 1;
    local_238 = (int *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar26 * 4 +
                       *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar12 * 8));
  }
  *(undefined1 *)(local_190 + 0xec) = 1;
  pbVar28 = param_2 + 0x3c;
  pbVar29 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar29 = pbVar28;
  }
  if (0 < *(int *)pbVar29) {
    piVar43 = (int *)(lVar38 + (longlong)(int)local_260 * 4);
    piVar46 = (int *)(lVar45 + (longlong)iVar27 * 4);
    piVar40 = (int *)(lVar32 + (longlong)iVar47 * (ulonglong)uVar42 * 4);
    puVar39 = (undefined4 *)(lVar33 + (longlong)iVar36 * 4);
    local_258 = local_258 & 0xffffffff;
    local_240 = (ulonglong)uVar37;
    local_248 = (ulonglong)uVar44;
    iVar27 = 0;
    local_260 = (ulonglong)uVar42;
    do {
      uVar25 = uStack_100;
      uVar24 = local_108;
      uVar23 = uStack_110;
      ppuVar15 = local_118;
      pppuVar41 = pppuStack_120;
      pppuVar35 = pppuStack_130;
      lVar38 = local_190;
      iVar47 = *piVar40;
      pfVar2 = local_1b0 + local_1a0;
      pfVar3 = local_1c8 + local_1b8;
      pfVar4 = local_1e0[0] + local_1d0;
      ppuVar19 = (undefined **)((double)*local_1b0 + *(double *)(local_190 + 0x48));
      ppuVar20 = (undefined **)((double)*local_1c8 + *(double *)(local_190 + 0x40));
      ppuVar21 = (undefined **)((double)*local_1e0[0] + *(double *)(local_190 + 0x38));
      pfVar5 = local_1f8 + local_1e8;
      pfVar6 = local_210 + local_200;
      fVar8 = *local_1f8;
      pfVar7 = local_228[0] + local_218;
      fVar9 = *local_210;
      fVar10 = *local_228[0];
      local_148[0] = 0;
      local_138 = (undefined ***)0x0;
      local_128 = (undefined ***)0x0;
      local_228[0] = pfVar7;
      local_210 = pfVar6;
      local_1f8 = pfVar5;
      local_1e0[0] = pfVar4;
      local_1c8 = pfVar3;
      local_1b0 = pfVar2;
      if ((*piVar43 == 0) || (*piVar46 == 0)) {
        if ((*piVar43 == 0) || ((*piVar46 == 0 || (local_268 = pbVar28, 0 < iVar47)))) {
          local_148[0] = iVar47;
          local_c8 = local_108;
          uStack_c0 = uStack_100;
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          local_e8 = (undefined ***)0x0;
          uStack_e0 = pppuStack_120;
          local_f8 = (undefined ***)0x0;
          uStack_f0 = pppuStack_130;
          local_108 = CONCAT44(uStack_154,local_158);
          uStack_100 = CONCAT44(uStack_14c,uStack_150);
          local_118 = &PTR_LAB_14be78690;
          uStack_110 = CONCAT44(*puVar39,iVar47);
          pppuStack_120 = (undefined ***)CONCAT44(uStack_16c,uStack_170);
          local_128 = (undefined ***)0x0;
          local_138 = (undefined ***)FUN_144619808;
          pppuStack_130 = pppuStack_180;
          uStack_e0._0_4_ = (uint)pppuVar41;
          uStack_170 = (uint)uStack_e0;
          uStack_e0._4_4_ = (int)((ulonglong)pppuVar41 >> 0x20);
          uStack_16c = uStack_e0._4_4_;
          uStack_d0._0_4_ = (undefined4)uVar23;
          uStack_160 = (undefined4)uStack_d0;
          uStack_d0._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
          uStack_15c = uStack_d0._4_4_;
          local_c8._0_4_ = (undefined4)uVar24;
          local_158 = (undefined4)local_c8;
          local_c8._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
          uStack_154 = local_c8._4_4_;
          uStack_c0._0_4_ = (undefined4)uVar25;
          uStack_150 = (undefined4)uStack_c0;
          uStack_c0._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
          uStack_14c = uStack_c0._4_4_;
          local_168 = ppuVar15;
          uStack_c0 = uVar25;
          local_c8 = uVar24;
          uStack_d0 = uVar23;
          local_d8 = ppuVar15;
          uStack_e0 = pppuVar41;
          local_e8 = (undefined ***)0x0;
          uStack_f0 = pppuVar35;
          local_f8 = (undefined ***)0x0;
          local_118 = &PTR_LAB_14be78690;
          local_128 = (undefined ***)0x0;
          local_138 = (undefined ***)FUN_144619808;
          local_178 = (undefined ***)0x0;
          pppuStack_180 = pppuVar35;
          local_188 = (undefined ***)0x0;
          local_268 = pbVar28;
          FUN_1408164d2(local_190 + 0x70,local_148);
        }
        *local_238 = 0;
        pbVar28 = local_268;
        local_238 = local_238 + (int)local_230;
      }
      else {
        if (iVar47 < 1) {
          local_268 = pbVar28;
          if (*(char *)(local_190 + 0x58) == '\x01') {
            local_250 = (undefined ***)(local_190 + 0x98);
            local_188 = (undefined ***)&DAT_100000000;
            local_178 = (undefined ***)&DAT_ffffffff;
            uStack_170 = 0;
            pppuStack_180 = local_250;
            if (*(int *)(local_190 + 0xb0) == 0) {
              local_270 = (longlong *)((ulonglong)local_270 & 0xffffffff00000000);
            }
            else {
              FUN_1449c0562(&local_188);
              local_270 = (longlong *)CONCAT44(local_270._4_4_,*(undefined4 *)(lVar38 + 0xb0));
            }
            pppuVar41 = (undefined ***)(lVar38 + 0x88);
            uStack_e0 = local_178;
            pppuVar35 = uStack_e0;
            local_d8 = (undefined **)CONCAT44(uStack_16c,uStack_170);
            uStack_f0 = local_188;
            local_e8 = pppuStack_180;
            local_f8 = pppuVar41;
            uStack_e0._4_4_ = (int)((ulonglong)local_178 >> 0x20);
            iVar36 = uStack_e0._4_4_;
            if ((uStack_e0._4_4_ != (int)local_270) ||
               (uStack_e0 = pppuVar35, pppuStack_180 != local_250)) {
              do {
                uStack_e0 = pppuVar35;
                ppuVar15 = *local_f8;
                lVar38 = (longlong)iVar36;
                pbVar28 = local_268;
                if (((double)ppuVar15[lVar38 * 8 + 6] - (double)ppuVar19) *
                    ((double)ppuVar15[lVar38 * 8 + 6] - (double)ppuVar19) +
                    ((double)ppuVar15[lVar38 * 8 + 4] - (double)ppuVar21) *
                    ((double)ppuVar15[lVar38 * 8 + 4] - (double)ppuVar21) +
                    ((double)ppuVar15[lVar38 * 8 + 5] - (double)ppuVar20) *
                    ((double)ppuVar15[lVar38 * 8 + 5] - (double)ppuVar20) <
                    (double)*(float *)(local_190 + 0x5c)) goto LAB_140a988e9;
                uStack_e0 = (undefined ***)
                            CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
                FUN_1449c0562(&uStack_f0);
                iVar36 = uStack_e0._4_4_;
                pppuVar35 = uStack_e0;
              } while (local_f8 != pppuVar41 ||
                       (local_e8 != local_250 || uStack_e0._4_4_ != (int)local_270));
            }
            if ((longlong)*(int *)(local_190 + 0x68) != 0) {
              lVar38 = *(longlong *)(local_190 + 0x60);
              lVar45 = 0;
              do {
                dVar16 = *(double *)(lVar38 + 0x10 + lVar45) - (double)ppuVar19;
                dVar18 = *(double *)(lVar38 + 8 + lVar45) - (double)ppuVar20;
                dVar17 = *(double *)(lVar38 + lVar45) - (double)ppuVar21;
                pbVar28 = local_268;
                if (dVar16 * dVar16 + dVar17 * dVar17 + dVar18 * dVar18 <
                    (double)*(float *)(local_190 + 0x5c)) goto LAB_140a988e9;
                lVar45 = lVar45 + 0x18;
              } while ((longlong)*(int *)(local_190 + 0x68) * 0x18 != lVar45);
            }
          }
          LOCK();
          piVar1 = (int *)(local_190 + 0x80);
          iVar47 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          iVar47 = iVar47 + 1;
          plVar34 = (longlong *)(local_190 + 0x60);
          iVar36 = *(int *)(local_190 + 0x68);
          lVar38 = (longlong)iVar36;
          *(uint *)(local_190 + 0x68) = iVar36 + 1U;
          local_148[0] = iVar47;
          if (*(uint *)(local_190 + 0x6c) < iVar36 + 1U) {
            local_270 = plVar34;
            FUN_1403e3958(plVar34,iVar36);
            plVar34 = local_270;
          }
          lVar45 = *plVar34;
          *(undefined ***)(lVar45 + lVar38 * 0x18) = ppuVar21;
          *(undefined ***)(lVar45 + 8 + lVar38 * 0x18) = ppuVar20;
          *(undefined ***)(lVar45 + 0x10 + lVar38 * 0x18) = ppuVar19;
          local_188 = (undefined ***)0x0;
          local_178 = (undefined ***)0x0;
          pppuVar30 = (undefined ***)FUN_14001cc68(0x40,8);
          uVar25 = uStack_100;
          uVar24 = local_108;
          uVar23 = uStack_110;
          ppuVar15 = local_118;
          pppuVar22 = pppuStack_120;
          local_178 = local_128;
          pppuVar41 = pppuStack_130;
          pppuVar35 = local_138;
          *pppuVar30 = &PTR_FUN_14be78670;
          *(int *)(pppuVar30 + 1) = iVar47;
          pppuVar30[2] = ppuVar21;
          pppuVar30[3] = ppuVar20;
          pppuVar30[4] = ppuVar19;
          pppuVar30[5] = (undefined **)(double)fVar10;
          pppuVar30[6] = (undefined **)(double)fVar9;
          pppuVar30[7] = (undefined **)(double)fVar8;
          if (pppuVar30 + 1 != (undefined ***)0x0) {
            local_188 = (undefined ***)FUN_144619328;
          }
          local_c8 = local_108;
          uStack_c0 = uStack_100;
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          local_e8 = local_128;
          uStack_e0 = pppuStack_120;
          local_f8 = local_138;
          uStack_f0 = pppuStack_130;
          local_108 = CONCAT44(uStack_154,local_158);
          uStack_100 = CONCAT44(uStack_14c,uStack_150);
          local_118 = local_168;
          uStack_110 = CONCAT44(uStack_15c,uStack_160);
          local_128 = pppuVar30;
          pppuStack_120 = (undefined ***)CONCAT44(uStack_16c,uStack_170);
          local_138 = local_188;
          pppuStack_130 = pppuStack_180;
          uStack_e0._0_4_ = (uint)pppuVar22;
          uStack_e0._4_4_ = (int)((ulonglong)pppuVar22 >> 0x20);
          uStack_d0._0_4_ = (undefined4)uVar23;
          uStack_d0._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
          local_c8._0_4_ = (undefined4)uVar24;
          local_c8._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
          uStack_c0._0_4_ = (undefined4)uVar25;
          uStack_c0._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
          local_158 = (undefined4)local_c8;
          uStack_154 = local_c8._4_4_;
          uStack_150 = (undefined4)uStack_c0;
          uStack_14c = uStack_c0._4_4_;
          local_168 = ppuVar15;
          uStack_160 = (undefined4)uStack_d0;
          uStack_15c = uStack_d0._4_4_;
          uStack_170 = (uint)uStack_e0;
          uStack_16c = uStack_e0._4_4_;
          local_188 = pppuVar35;
          pppuStack_180 = pppuVar41;
          uStack_e0 = pppuVar22;
          uStack_d0 = uVar23;
          local_c8 = uVar24;
          uStack_c0 = uVar25;
          if (pppuVar35 != (undefined ***)0x0) {
            pppuVar35 = local_178;
            if (local_178 == (undefined ***)0x0) {
              pppuVar35 = &local_168;
            }
            (*(code *)(*pppuVar35)[2])();
          }
          FUN_1408164d2(local_190 + 0x70,local_148);
          pbVar28 = local_268;
        }
LAB_140a988e9:
        *local_238 = iVar47;
        local_238 = local_238 + (int)local_230;
      }
      if (local_138 != (undefined ***)0x0) {
        pppuVar35 = local_128;
        if (local_128 == (undefined ***)0x0) {
          pppuVar35 = &local_118;
        }
        (*(code *)(*pppuVar35)[2])();
      }
      piVar43 = piVar43 + local_258;
      piVar46 = piVar46 + local_240;
      piVar40 = piVar40 + local_260;
      puVar39 = puVar39 + local_248;
      iVar27 = iVar27 + 1;
      pbVar29 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar29 = pbVar28;
      }
    } while (iVar27 < *(int *)pbVar29);
  }
  if ((local_b0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a990a6 FUN_140a990a6 body=148 status=ok
// SIG undefined FUN_140a990a6(void)

void FUN_140a990a6(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 140a9913a FUN_140a9913a body=340 status=ok
// SIG undefined FUN_140a9913a(void)

void FUN_140a9913a(code ***param_1)

{
  code ***pppcVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  code *local_70;
  code ****local_68;
  code ***local_60;
  code **local_58;
  code ****local_50;
  code ***local_48;
  code *local_40;
  code ****local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &local_60;
  local_58 = (code **)&LAB_143cba64a;
  local_40 = FUN_14186e030;
  local_60 = param_1;
  local_48 = &local_58;
  local_38 = &local_48;
  FUN_140a992ce(param_1,2);
  pppcVar1 = param_1 + 0x1b;
  iVar3 = *(int *)((longlong)param_1 + 0x28c);
  FUN_140a9928f(pppcVar1,*(undefined4 *)(param_1 + 0x51));
  *(undefined4 *)(param_1 + 0x51) = 0;
  iVar2 = *(int *)((longlong)param_1 + 0x28c);
  if (iVar3 < 0) {
    if (iVar2 != 0) {
      FUN_1487d8482(pppcVar1);
      iVar3 = *(int *)(param_1 + 0x51);
      iVar2 = *(int *)((longlong)param_1 + 0x28c);
      goto LAB_140a991c9;
    }
    iVar2 = 0;
  }
  iVar3 = 0;
LAB_140a991c9:
  *(int *)(param_1 + 0x51) = iVar3 + 6;
  if ((uint)(iVar2 - iVar3) < 6) {
    FUN_1487d8496(pppcVar1,iVar3);
  }
  FUN_140a992aa(pppcVar1 + (longlong)iVar3 * 9);
  (**(code **)(*param_1[9] + 0x88))(param_1[9],param_1 + 0xba);
  local_58 = &local_70;
  local_70 = FUN_143cba65a;
  local_40 = FUN_140c8fe02;
  local_68 = &local_48;
  local_48 = param_1;
  local_38 = (code ****)&local_58;
  FUN_14480914e(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9928f FUN_140a9928f body=27 status=ok
// SIG undefined FUN_140a9928f(void)

void FUN_140a9928f(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x40);
    do {
      if (*pbVar1 < 6) {
        *pbVar1 = 0xff;
      }
      pbVar1 = pbVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a992aa FUN_140a992aa body=36 status=ok
// SIG undefined FUN_140a992aa(void)

void FUN_140a992aa(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0xff;
  *(undefined1 *)(param_1 + 0x88) = 0xff;
  *(undefined1 *)(param_1 + 0xd0) = 0xff;
  *(undefined1 *)(param_1 + 0x118) = 0xff;
  *(undefined1 *)(param_1 + 0x160) = 0xff;
  *(undefined1 *)(param_1 + 0x1a8) = 0xff;
  return;
}



// FUNCTION 140a992ce FUN_140a992ce body=194 status=ok
// SIG undefined FUN_140a992ce(void)

void FUN_140a992ce(longlong param_1,char param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [39];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (lVar3 = *(longlong *)(param_1 + 0x48), lVar3 != 0)) {
    local_41 = '\0';
    iVar1 = *(int *)(lVar3 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x28);
      lVar5 = 0;
      do {
        if ((*(char *)(lVar3 + 8 + lVar5) == param_2) &&
           (lVar4 = *(longlong *)(lVar3 + lVar5), lVar4 != 0)) {
          iVar2 = *(int *)(lVar4 + 0x18);
          if ((-1 < (longlong)iVar2) &&
             ((iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78) &&
              (lVar4 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar2 * 8),
              lVar4 != 0)))) {
            (*(code *)*param_3)(param_3[1],lVar4,&local_41);
            if (local_41 != '\0') break;
          }
        }
        lVar5 = lVar5 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a99392 FUN_140a99392 body=93 status=ok
// SIG undefined FUN_140a99392(void)

void FUN_140a99392(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000140a993eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140a993ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 140a993f0 FUN_140a993f0 body=563 status=ok
// SIG undefined FUN_140a993f0(void)

void FUN_140a993f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    if ((((((*(char *)(param_1 + 0x34) == '\x01') &&
           (*(undefined1 *)(param_1 + 0x34) = 0, *(longlong *)(param_1 + 0x28) != 0)) &&
          (*(int *)(param_1 + 0x24) != 0)) &&
         (((uVar5 = *(uint *)(param_1 + 0x20), -1 < (int)uVar5 && ((int)uVar5 < DAT_14c9647dc)) &&
          ((plVar3 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar3 != (longlong *)0x0 &&
           (((int)plVar3[2] == *(int *)(param_1 + 0x24) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))))))) && (*plVar3 != 0)) &&
       (lVar1 = FUN_1401b4c98(), lVar1 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      if (lVar4 != 0) {
        uVar5 = (uint)lVar4;
        if ((int)(uVar5 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar2 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar2 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar2 + (ulonglong)((uVar5 & 0xffffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1) !=
              0) {
            lVar2 = *(longlong *)(lVar1 + 8);
            lVar6 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
            if (((lVar2 + lVar6 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar6) == lVar4)) &&
               (*(char *)(lVar2 + 1 + lVar6) != '\x04')) {
              FUN_1405a424c(lVar1);
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbe5258) && (FUN_144b3d300(&DAT_14cbe5258), DAT_14cbe5258 == -1)) {
      FUN_1457dfdf2(&DAT_14cbe51e0);
      atexit((_func_5014 *)&LAB_1443302eb);
      _Init_thread_footer(&DAT_14cbe5258);
    }
    if (((*(int *)(param_1 + 0x24) != 0) && (uVar5 = *(uint *)(param_1 + 0x20), -1 < (int)uVar5)) &&
       (((int)uVar5 < DAT_14c9647dc &&
        ((((plVar3 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (lVar1 = *plVar3, lVar1 != 0)))))) {
      uVar5 = 1;
      do {
        if ((*(uint *)(param_1 + 0x30) >> (uVar5 & 0x1f) & 1) != 0) {
          if ((longlong)*(int *)(lVar1 + 0x2928) != 0) {
            lVar4 = *(longlong *)(lVar1 + 0x2920);
            lVar2 = (longlong)*(int *)(lVar1 + 0x2928) * 0x78;
            do {
              if (*(uint *)(lVar4 + 0x48) == uVar5) break;
              lVar4 = lVar4 + 0x78;
              lVar2 = lVar2 + -0x78;
            } while (lVar2 != 0);
          }
          if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)
             ) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0xb);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 140a9967c FUN_140a9967c body=126 status=ok
// SIG undefined FUN_140a9967c(void)

undefined4 FUN_140a9967c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_143e5fa28();
  if ((char)uVar4 == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x1b0);
    if (plVar2 != (longlong *)0x0) {
      if (*(code **)(*plVar2 + 0x498) == (code *)&LAB_14015c36e) {
        cVar3 = (char)plVar2[0x42];
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x498))();
      }
      if (cVar3 == '\b') {
        FUN_140f5a52b(param_1 + 0x228,param_1);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  return uVar4;
}



// FUNCTION 140a996fa FUN_140a996fa body=81 status=ok
// SIG undefined FUN_140a996fa(void)

undefined8 FUN_140a996fa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_143e5fa28();
  if (cVar3 != '\0') {
    FUN_140ceee2f(param_1 + 0x218,param_1 + 0x228,param_1);
  }
  plVar2 = *(longlong **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return 0;
}



// FUNCTION 140a99762 FUN_140a99762 body=216 status=ok
// SIG undefined FUN_140a99762(void)

void FUN_140a99762(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  
  lVar2 = *(longlong *)(param_1 + 0x858);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x830);
  lVar7 = *(longlong *)(param_1 + 0x820);
  if (lVar7 == 0) {
    uVar5 = FUN_145ef08be();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x820) = lVar7;
  }
  lVar6 = *(longlong *)(param_1 + 0x828);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(param_1 + 0x818) == 0))
  goto LAB_140a997fa;
  plVar3 = *(longlong **)(lVar7 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
LAB_140a99836:
    lVar6 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
    if (cVar4 == '\0') goto LAB_140a99836;
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x818));
  }
  *(longlong *)(param_1 + 0x828) = lVar6;
LAB_140a997fa:
  FUN_141077e62(lVar2 + 0x1288,lVar6,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff)
  ;
  return;
}



// FUNCTION 140a9983a FUN_140a9983a body=303 status=ok
// SIG undefined FUN_140a9983a(void)

void FUN_140a9983a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_140a9996a();
  *(uint *)(param_2 + 10) = DAT_14cb3cc24 + uVar8;
  lVar2 = param_2[7];
  lVar5 = *(longlong *)(*(longlong *)(param_2[2] + 0x18) + 0x14);
  plVar1 = (longlong *)(lVar2 + 0x10 + (ulonglong)uVar8);
  *(undefined4 *)(plVar1 + -1) = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x1c);
  plVar1[-2] = lVar5;
  lVar5 = *(longlong *)param_2[5];
  uVar6 = *(ulonglong *)(lVar5 + 0x20);
  if ((uVar6 & 1) != 0) {
    uVar6 = ((longlong)uVar6 >> 0x18) + lVar5 + 0x20;
  }
  sVar4 = (short)plVar1 - (short)param_2[7];
  if ((longlong)*(int *)(lVar5 + 0x28) != 0) {
    lVar7 = 0;
    do {
      if (*(short *)(uVar6 + lVar7) == sVar4) goto LAB_140a99917;
      lVar7 = lVar7 + 6;
    } while ((longlong)*(int *)(lVar5 + 0x28) * 6 != lVar7);
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x10);
  if ((uVar6 & 1) != 0) {
    uVar6 = ((longlong)uVar6 >> 0x18) + lVar5 + 0x10;
  }
  if ((longlong)*(int *)(lVar5 + 0x18) != 0) {
    lVar7 = 0;
    do {
      if (*(short *)(uVar6 + lVar7) == sVar4) goto LAB_140a99917;
      lVar7 = lVar7 + 4;
    } while ((longlong)*(int *)(lVar5 + 0x18) * 4 != lVar7);
  }
  goto LAB_140a998d9;
LAB_140a99917:
  lVar5 = param_2[1];
  if ((*(longlong *)(lVar5 + 0x1c0) == 0 || *(int *)(lVar5 + 0x1cc) < 1) ||
     (plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x1c0) + 0x10), plVar3 == (longlong *)0x0)) {
LAB_140a99938:
    lVar5 = FUN_140579634(lVar5,*param_2,0);
  }
  else {
    lVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,*param_2);
    if (lVar5 == 0) {
      lVar5 = param_2[1];
      goto LAB_140a99938;
    }
  }
  *plVar1 = lVar5;
LAB_140a998d9:
  *(undefined8 *)(lVar2 + (ulonglong)uVar8 + 0x18) = DAT_14c9c0de0;
  return;
}



// FUNCTION 140a9996a FUN_140a9996a body=258 status=ok
// SIG undefined FUN_140a9996a(void)

void FUN_140a9996a(void)

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
              0x110) < DAT_14cb3cc68) {
    FUN_144b3d300(&DAT_14cb3cc68);
    if (DAT_14cb3cc68 == -1) {
      FUN_145769d26(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3cbe8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a56ac9);
      _Init_thread_footer(&DAT_14cb3cc68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a99a6e FUN_140a99a6e body=57 status=ok
// SIG undefined FUN_140a99a6e(void)

void FUN_140a99a6e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140a99a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1,7,param_2);
    return;
  }
  return;
}



// FUNCTION 140a99aa8 FUN_140a99aa8 body=31 status=ok
// SIG undefined FUN_140a99aa8(void)

undefined1 FUN_140a99aa8(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined1)param_1[10];
  }
  return uVar2;
}



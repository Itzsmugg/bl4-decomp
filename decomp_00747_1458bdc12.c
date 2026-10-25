// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458bdc12 FUN_1458bdc12 body=237 status=ok
// SIG undefined FUN_1458bdc12(void)

void FUN_1458bdc12(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x68) == 0) || (*(longlong *)(param_1 + 0x70) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x70) + 8) < 1)) {
    lVar3 = FUN_1458bdd18(param_1);
    if (lVar3 != 0) {
      FUN_144a7bec8(lVar3,&local_38);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        if (local_30 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
      }
      *(undefined8 *)(param_1 + 0x68) = local_38;
      plVar2 = *(longlong **)(param_1 + 0x70);
      *(longlong **)(param_1 + 0x70) = local_30;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bdd18 FUN_1458bdd18 body=375 status=ok
// SIG undefined FUN_1458bdd18(void)

longlong * FUN_1458bdd18(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  code *local_50;
  undefined8 *local_48;
  code **local_40;
  code *local_38;
  code ***local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = *(longlong **)(param_1 + 0x40);
  if (plVar7 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    lVar6 = FUN_1458bde90();
    if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)) && (plVar2 = (longlong *)plVar7[0x45], plVar2 != (longlong *)0x0)) {
      iVar4 = (int)plVar2[1];
      plVar8 = (longlong *)0x0;
      do {
        if (iVar4 == 0) goto LAB_1458bde4b;
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar9 = iVar4 == iVar3;
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar9);
      lVar5 = plVar7[0x44];
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x40) == 0)) {
LAB_1458bde6f:
        plVar8 = (longlong *)0x0;
      }
      else {
        local_58 = *(undefined8 *)(param_1 + 0x48);
        local_48 = &local_58;
        local_40 = &local_50;
        local_50 = FUN_143d554bc;
        local_30 = &local_40;
        local_38 = FUN_1459a65f0;
        lVar6 = FUN_1458bdeca();
        if ((lVar6 == 0) ||
           (plVar7 = (longlong *)FUN_144a7f1e2(lVar5,lVar6), plVar7 == (longlong *)0x0))
        goto LAB_1458bde6f;
        lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
        lVar6 = FUN_1400de7f6();
        if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1458bde6f;
        plVar8 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          plVar8 = plVar7;
        }
      }
      LOCK();
      plVar7 = plVar2 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      goto LAB_1458bde4b;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_1458bde4b:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 1458bde90 FUN_1458bde90 body=57 status=ok
// SIG undefined FUN_1458bde90(void)

void FUN_1458bde90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a140 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a140 = FUN_140002ddd(FUN_1464c8068,uVar1,L"GbxAttachableBodyState");
  }
  return;
}



// FUNCTION 1458bdeca FUN_1458bdeca body=99 status=ok
// SIG undefined FUN_1458bdeca(void)

undefined8 FUN_1458bdeca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_18 = 0;
  local_20 = &local_38;
  local_28 = FUN_142b44618;
  local_38 = param_2;
  FUN_1447c5ba2();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bdf2e FUN_1458bdf2e body=24 status=ok
// SIG undefined FUN_1458bdf2e(void)

void FUN_1458bdf2e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458bdf42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458bdf46 FUN_1458bdf46 body=88 status=ok
// SIG undefined FUN_1458bdf46(void)

undefined8 * FUN_1458bdf46(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bdf9e FUN_1458bdf9e body=158 status=ok
// SIG undefined FUN_1458bdf9e(void)

void FUN_1458bdf9e(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = param_2;
  FUN_141460aa2(local_58);
  FUN_141460ac0(param_1 + -0x19d8,&DAT_14cbcdd20,local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (param_3 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  }
  FUN_1458be03d(param_1 + 0x10,&local_5c,uVar1);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458be03d FUN_1458be03d body=64 status=ok
// SIG undefined FUN_1458be03d(void)

void FUN_1458be03d(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_3;
  FUN_1447cd2ec();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458be07e FUN_1458be07e body=177 status=ok
// SIG undefined FUN_1458be07e(void)

undefined8 FUN_1458be07e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1412e09e0();
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cbd4310) {
        FUN_144b3d300(&DAT_14cbd4310);
        if (DAT_14cbd4310 == -1) {
          FUN_1446f470e(&DAT_14cbd4308,L"Gibbed",1);
          _Init_thread_footer(&DAT_14cbd4310);
        }
      }
      FUN_1400bc96c(lVar1 + 0x7c78,&DAT_14cbd4308);
    }
  }
  return 0;
}



// FUNCTION 1458be136 FUN_1458be136 body=180 status=ok
// SIG undefined FUN_1458be136(void)

void FUN_1458be136(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_1458be1ec(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458be1ec FUN_1458be1ec body=371 status=ok
// SIG undefined FUN_1458be1ec(void)

undefined4 * FUN_1458be1ec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1458be416(param_1,local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  *local_80 = *(undefined8 *)*param_3;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0xffffffffffffffff;
  FUN_1412e0d58(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_1458be360(param_1,uVar7,local_80,&local_78);
  uVar1 = (undefined4)local_78;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_80 + 0x3c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_80 + 7) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = (undefined4)local_78;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1458be4fc(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458be360 FUN_1458be360 body=181 status=ok
// SIG undefined FUN_1458be360(void)

undefined8 FUN_1458be360(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_1412e0d58(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_145837b0c(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458be416 FUN_1458be416 body=230 status=ok
// SIG undefined FUN_1458be416(void)

int * FUN_1458be416(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1458be4fc FUN_1458be4fc body=459 status=ok
// SIG undefined FUN_1458be4fc(void)

void FUN_1458be4fc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458be6c8 FUN_1458be6c8 body=157 status=ok
// SIG undefined FUN_1458be6c8(void)

undefined4 FUN_1458be6c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f72344(param_1,&local_30,param_2);
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_140f7223e(param_1 + 8);
    uVar3 = FUN_1412e0f8a(local_30,uVar4,param_3);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458be766 FUN_1458be766 body=65 status=ok
// SIG undefined FUN_1458be766(void)

longlong FUN_1458be766(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458beade(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1458be7a7(lVar2);
  return lVar2;
}



// FUNCTION 1458be7a7 FUN_1458be7a7 body=27 status=ok
// SIG undefined FUN_1458be7a7(void)

void FUN_1458be7a7(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  return;
}



// FUNCTION 1458be7c2 FUN_1458be7c2 body=171 status=ok
// SIG undefined FUN_1458be7c2(void)

void FUN_1458be7c2(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_1458be857;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1458be857:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1458be86e FUN_1458be86e body=132 status=ok
// SIG undefined FUN_1458be86e(void)

void FUN_1458be86e(longlong param_1,int param_2)

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



// FUNCTION 1458be8f2 FUN_1458be8f2 body=100 status=ok
// SIG undefined FUN_1458be8f2(void)

ulonglong FUN_1458be8f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1458be939:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1458be939;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1458be956 FUN_1458be956 body=385 status=ok
// SIG undefined FUN_1458be956(void)

longlong * FUN_1458be956(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_140df6136(param_2,&local_40);
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  *puVar4 = &PTR_LAB_14b42dce0;
  puVar4[1] = *param_3;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar4[2] = lVar6;
  *puVar4 = &PTR_FUN_14b42dc70;
  puVar4[3] = local_40;
  puVar4[4] = local_38;
  if (local_38 == (longlong *)0x0) {
    puVar4[5] = &LAB_1489913a6;
  }
  else {
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_1489913a6;
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458beade FUN_1458beade body=147 status=ok
// SIG undefined FUN_1458beade(void)

void FUN_1458beade(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458beb72 FUN_1458beb72 body=9 status=ok
// SIG undefined FUN_1458beb72(void)

void FUN_1458beb72(longlong param_1)

{
  FUN_1458beb7c(param_1 + 0x10);
  return;
}



// FUNCTION 1458beb7c FUN_1458beb7c body=66 status=ok
// SIG undefined FUN_1458beb7c(void)

void FUN_1458beb7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b00bec0;
  FUN_1447cd778(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_141083bd6(param_1);
  return;
}



// FUNCTION 1458bebca FUN_1458bebca body=182 status=ok
// SIG undefined FUN_1458bebca(void)

undefined8 * FUN_1458bebca(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_14118b488(param_1 + 5);
  *param_1 = &PTR_FUN_14a7902f0;
  param_1[5] = &PTR_FUN_14a790590;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[6] = 0x3e4ccccd3fc00000;
  param_1[7] = 0x3f0000003a83126f;
  param_1[8] = 0x43fa00003fc00000;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfffffffc | 2;
  *(undefined4 *)(param_1 + 9) = 0x41200000;
  return param_1;
}



// FUNCTION 1458bec8e FUN_1458bec8e body=40 status=ok
// SIG undefined FUN_1458bec8e(void)

undefined8 FUN_1458bec8e(undefined8 param_1,int param_2)

{
  FUN_1458becb6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458becb6 FUN_1458becb6 body=191 status=ok
// SIG undefined FUN_1458becb6(void)

void FUN_1458becb6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0b02d0;
  param_1[5] = &PTR_FUN_14b0b0dd0;
  param_1[6] = &PTR_FUN_14b0b0e10;
  param_1[0x55] = &PTR_FUN_14b0b0e60;
  param_1[0x56] = &PTR_FUN_14b0b0ee0;
  param_1[0x57] = &PTR_FUN_14b0b0ef0;
  if (param_1[0xed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xe4];
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
  FUN_14006e248(param_1);
  return;
}



// FUNCTION 1458bed82 FUN_1458bed82 body=31 status=ok
// SIG undefined FUN_1458bed82(void)

undefined8 FUN_1458bed82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458beda2 FUN_1458beda2 body=12 status=ok
// SIG undefined FUN_1458beda2(void)

void FUN_1458beda2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001458bedab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1458bedae FUN_1458bedae body=31 status=ok
// SIG undefined FUN_1458bedae(void)

undefined8 FUN_1458bedae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bedda FUN_1458bedda body=31 status=ok
// SIG undefined FUN_1458bedda(void)

undefined8 FUN_1458bedda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bee06 FUN_1458bee06 body=31 status=ok
// SIG undefined FUN_1458bee06(void)

undefined8 FUN_1458bee06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bee2e FUN_1458bee2e body=121 status=ok
// SIG undefined FUN_1458bee2e(void)

undefined8 * FUN_1458bee2e(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a49d320;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x15) = 0x300;
  return param_1;
}



// FUNCTION 1458beea8 FUN_1458beea8 body=12 status=ok
// SIG undefined FUN_1458beea8(void)

void FUN_1458beea8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001458beeb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1458beeb4 FUN_1458beeb4 body=31 status=ok
// SIG undefined FUN_1458beeb4(void)

undefined8 FUN_1458beeb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458beede FUN_1458beede body=32 status=ok
// SIG undefined FUN_1458beede(void)

undefined8 * FUN_1458beede(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7736e0;
  return param_1;
}



// FUNCTION 1458bef0a FUN_1458bef0a body=31 status=ok
// SIG undefined FUN_1458bef0a(void)

undefined8 FUN_1458bef0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bef36 FUN_1458bef36 body=31 status=ok
// SIG undefined FUN_1458bef36(void)

undefined8 FUN_1458bef36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bef62 FUN_1458bef62 body=31 status=ok
// SIG undefined FUN_1458bef62(void)

undefined8 FUN_1458bef62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bef8c FUN_1458bef8c body=32 status=ok
// SIG undefined FUN_1458bef8c(void)

undefined8 * FUN_1458bef8c(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b021690;
  return param_1;
}



// FUNCTION 1458befb8 FUN_1458befb8 body=32 status=ok
// SIG undefined FUN_1458befb8(void)

undefined8 * FUN_1458befb8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b09b2c0;
  return param_1;
}



// FUNCTION 1458befe6 FUN_1458befe6 body=72 status=ok
// SIG undefined FUN_1458befe6(void)

undefined8 * FUN_1458befe6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1412c0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1411f306c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bf03a FUN_1458bf03a body=31 status=ok
// SIG undefined FUN_1458bf03a(void)

undefined8 FUN_1458bf03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bf05a FUN_1458bf05a body=37 status=ok
// SIG undefined FUN_1458bf05a(void)

void FUN_1458bf05a(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001458bf07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1458bf080 FUN_1458bf080 body=61 status=ok
// SIG undefined FUN_1458bf080(void)

void FUN_1458bf080(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_1458bf0be(lVar1 + 0x2a8);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1458bf0be FUN_1458bf0be body=341 status=ok
// SIG undefined FUN_1458bf0be(void)

void FUN_1458bf0be(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 != 0) {
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != plVar2) {
      *(longlong **)(param_1 + 0x10) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x18) = (int)plVar4[1];
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 != plVar2) {
      *(longlong **)(param_1 + 0x20) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x28) = (int)plVar4[1];
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != plVar2) {
      *(longlong **)(param_1 + 0x30) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x38) = (int)plVar4[1];
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != plVar2) {
      *(longlong **)(param_1 + 0x40) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x48) = (int)plVar4[1];
    iVar1 = *(int *)(param_1 + 0x8c);
    FUN_140f9c02e(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x8c) != 0)) {
      FUN_148a07b08(param_1 + 0x80,0);
      return;
    }
  }
  return;
}



// FUNCTION 1458bf214 FUN_1458bf214 body=293 status=ok
// SIG undefined FUN_1458bf214(void)

void FUN_1458bf214(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = (**(code **)(*param_1 + 0x480))(param_1,param_4);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
    cVar1 = FUN_144a7f202(uVar2,DAT_14c9abbf0);
    if (cVar1 == '\0') {
      local_48 = param_3[2];
      local_58 = *param_3;
      uStack_50 = param_3[1];
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = *(undefined8 *)(param_2 + 4);
      FUN_1458bf33a(param_1,&local_78,&local_58,param_4);
    }
  }
  lVar3 = param_1[0x16];
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 != 0) goto LAB_1458bf2b2;
  }
  else {
LAB_1458bf2b2:
    fVar4 = *(float *)(lVar3 + 0x6f4);
    if (1e-08 < fVar4) goto LAB_1458bf2c3;
  }
  fVar4 = 1.0;
LAB_1458bf2c3:
  uVar2 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
  local_80 = DAT_14c9abbf8;
  local_88 = fVar4;
  FUN_1458bf390(uVar2,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bf33a FUN_1458bf33a body=86 status=ok
// SIG undefined FUN_1458bf33a(void)

void FUN_1458bf33a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_1458bf406(lVar1,param_2,param_3,1,0,0xffffffffffffffff,0);
  }
  return;
}



// FUNCTION 1458bf390 FUN_1458bf390 body=117 status=ok
// SIG undefined FUN_1458bf390(void)

void FUN_1458bf390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  code *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_10;
  local_18 = &local_40;
  local_28 = (undefined1 *)&param_5;
  local_20 = FUN_142b51a06;
  local_40 = param_2;
  local_38 = param_3;
  local_10 = param_4;
  FUN_1408d6bd2(param_1,param_6);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bf406 FUN_1458bf406 body=325 status=ok
// SIG undefined FUN_1458bf406(void)

void FUN_1458bf406(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined1 param_4,
                  undefined1 param_5,ulonglong param_6,undefined8 param_7)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar2 = param_6 < 0xffffffff00000000 && (int)param_6 != -1;
  local_98 = param_2[2];
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  uStack_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  uStack_80 = *(undefined8 *)(param_3 + 4);
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x48,8);
  *local_68 = (longlong)&PTR_FUN_14aa1dde0;
  *(undefined4 *)(local_68 + 5) = uStack_88;
  *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_84;
  *(undefined4 *)(local_68 + 6) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x34) = uStack_80._4_4_;
  *(undefined4 *)(local_68 + 3) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_68 + 0x1c) = local_98._4_4_;
  *(undefined4 *)(local_68 + 4) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x24) = uStack_8c;
  *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
  *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
  *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
  *(undefined1 *)(local_68 + 7) = param_4;
  *(undefined1 *)((longlong)local_68 + 0x39) = param_5;
  *(bool *)((longlong)local_68 + 0x3a) = bVar2;
  local_68[8] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_14362267c;
  }
  local_b8 = local_78;
  FUN_140f482b4(param_1,param_6,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_7);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bf54c FUN_1458bf54c body=443 status=ok
// SIG undefined FUN_1458bf54c(void)

longlong * FUN_1458bf54c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [72];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1446ddc76(local_88,"FEngineService",1);
  FUN_1458bfb2e(local_80,local_88);
  uVar4 = FUN_1458bf78c(local_80,param_1,FUN_1434deae4);
  uVar4 = FUN_1458bf94e(uVar4,param_1,FUN_1434decfe);
  uVar4 = FUN_1458bf9ee(uVar4,param_1,FUN_1434def14);
  uVar4 = FUN_1458bfa8e(uVar4,param_1,&LAB_147a8fe8e);
  lVar5 = FUN_1458bf8b0(uVar4,param_1,FUN_1434df1e8);
  *(undefined4 *)(lVar5 + 0x44) = 1;
  FUN_1458bfc2e(lVar5,&local_38);
  plVar2 = local_30;
  if (&local_38 != param_1) {
    *param_1 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)param_1[1];
    if (local_30 != plVar3) {
      local_30 = (longlong *)0x0;
      param_1[1] = (longlong)plVar2;
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
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1458bf708(local_80);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    local_38 = CONCAT44(local_38._4_4_,0x20001);
    uVar4 = FUN_1458bf754();
    FUN_1414d7078(uVar4,local_80);
    FUN_1414d7090(lVar5,local_80,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bf708 FUN_1458bf708 body=76 status=ok
// SIG undefined FUN_1458bf708(void)

void FUN_1458bf708(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1412e3cd5(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458bf750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458bf754 FUN_1458bf754 body=55 status=ok
// SIG undefined FUN_1458bf754(void)

void FUN_1458bf754(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fa30 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fa30 = FUN_140002ddd(FUN_14629da2f,uVar1,L"EngineServicePing");
  }
  return;
}



// FUNCTION 1458bf78c FUN_1458bf78c body=158 status=ok
// SIG undefined FUN_1458bf78c(void)

longlong FUN_1458bf78c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14a8e9718;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a8e9730;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1458bf82a FUN_1458bf82a body=132 status=ok
// SIG undefined FUN_1458bf82a(void)

void FUN_1458bf82a(longlong param_1,int param_2)

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



// FUNCTION 1458bf8b0 FUN_1458bf8b0 body=158 status=ok
// SIG undefined FUN_1458bf8b0(void)

longlong FUN_1458bf8b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14a8e97d8;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a8e97f0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1458bf94e FUN_1458bf94e body=160 status=ok
// SIG undefined FUN_1458bf94e(void)

longlong FUN_1458bf94e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14a8e9748;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a8e9760;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1458bf9ee FUN_1458bf9ee body=160 status=ok
// SIG undefined FUN_1458bf9ee(void)

longlong FUN_1458bf9ee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14a8e9778;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a8e9790;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1458bfa8e FUN_1458bfa8e body=160 status=ok
// SIG undefined FUN_1458bfa8e(void)

longlong FUN_1458bfa8e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14a8e97a8;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a8e97c0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1458bfb2e FUN_1458bfb2e body=254 status=ok
// SIG undefined FUN_1458bfb2e(void)

undefined8 * FUN_1458bfb2e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_38,"Messaging",1);
  uVar2 = local_38;
  uVar4 = FUN_144a52528();
  plVar5 = (longlong *)FUN_1402c9134(uVar4,uVar2,local_24,1);
  (**(code **)(*plVar5 + 0x68))(plVar5,&local_38);
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
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
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = *param_2;
  uVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bfc2e FUN_1458bfc2e body=974 status=ok
// SIG undefined FUN_1458bfc2e(void)

longlong * FUN_1458bfc2e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) goto LAB_1458bfdb8;
  iVar9 = (int)plVar3[1];
  do {
    if (iVar9 == 0) goto LAB_1458bfdb8;
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar12 = iVar9 == iVar7;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar9 + 1;
      iVar7 = iVar9;
    }
    iVar9 = iVar7;
    UNLOCK();
  } while (!bVar12);
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_60 = plVar4;
    local_58 = plVar3;
    local_48 = (longlong *)FUN_1458c00a0((longlong)param_1 + 0x3c,&local_60,param_1 + 5,param_1 + 3)
    ;
    local_50 = local_48 + 2;
    FUN_1458bfffe(&local_50);
    plVar5 = local_48;
    if (local_48 == (longlong *)0x0) {
      *param_2 = (longlong)local_50;
      plVar11 = (longlong *)param_2[1];
      if (plVar11 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_1458bfe08:
        LOCK();
        plVar5 = plVar11 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar9 = *piVar2;
          UNLOCK();
joined_r0x0001458bfe47:
          if (iVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      *param_2 = (longlong)local_50;
      plVar11 = (longlong *)param_2[1];
      if (local_48 == plVar11) {
        LOCK();
        plVar11 = local_48 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar9 = *piVar2;
          UNLOCK();
          plVar11 = plVar5;
          goto joined_r0x0001458bfe47;
        }
      }
      else {
        param_2[1] = (longlong)local_48;
        if (plVar11 != (longlong *)0x0) goto LAB_1458bfe08;
      }
    }
    plVar5 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_48 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_58 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_50 = (longlong *)*param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plVar11 = local_50;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar11 = (longlong *)*param_2;
      local_48 = plVar5;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,plVar11 + 5,&local_50);
    plVar11 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar5 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    if ((((int)param_1[4] != 0) && (plVar5 = (longlong *)param_1[3], plVar5 != (longlong *)0x0)) &&
       (cVar8 = (**(code **)(*plVar5 + 0x30))(), cVar8 != '\0')) {
      plVar5 = (longlong *)*param_2;
      plVar11 = (longlong *)param_2[1];
      if (plVar11 == (longlong *)0x0) {
        local_50 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          local_50 = plVar5;
        }
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        local_50 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          local_50 = plVar5;
        }
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        local_48 = plVar11;
      }
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_50);
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar11 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
    lVar6 = *param_2;
    if ((char)param_1[2] == '\x01') {
      *(undefined1 *)(lVar6 + 0x48) = 0;
    }
    if ((char)param_1[7] == '\x01') {
      *(undefined1 *)(lVar6 + 0x90) = 1;
      uVar10 = 0xff;
    }
    else {
      uVar10 = (uint)*(byte *)((longlong)param_1 + 0x44);
    }
    *(uint *)(lVar6 + 0x9c) = uVar10;
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1458bfdb8:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bfffe FUN_1458bfffe body=162 status=ok
// SIG undefined FUN_1458bfffe(void)

void FUN_1458bfffe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x18) != 0) && (*(longlong *)(param_2 + 0x20) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x20) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x18) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x20);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x18) = param_2;
    if (*(longlong **)(param_2 + 0x20) == plVar2) goto LAB_1458c003d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x20);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x20) = plVar2;
      goto LAB_1458c003d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x20) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458c003d:
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
                    /* WARNING: Could not recover jumptable at 0x0001458c009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458c00a0 FUN_1458c00a0 body=183 status=ok
// SIG undefined FUN_1458c00a0(void)

undefined8 *
FUN_1458c00a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a8eaf20;
  local_50 = 0;
  local_48 = 0;
  FUN_1458c0158(&local_50,param_4);
  local_58 = &local_50;
  FUN_1458c01de(puVar1 + 2,param_1,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c0158 FUN_1458c0158 body=132 status=ok
// SIG undefined FUN_1458c0158(void)

void FUN_1458c0158(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 1458c01de FUN_1458c01de body=408 status=ok
// SIG undefined FUN_1458c01de(void)

undefined8 *
FUN_1458c01de(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_14a8eaf40;
  param_1[1] = &PTR_LAB_14a8eaf70;
  param_1[2] = &PTR_FUN_14a8eaf90;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1412e3d1e(&local_48);
  *(undefined4 *)(param_1 + 5) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_44;
  *(undefined4 *)(param_1 + 6) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_3c;
  param_1[7] = *param_3;
  lVar2 = param_3[1];
  param_1[8] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar3 = *param_4;
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1458c0378(param_1 + 10,iVar1,0);
    FUN_1412e3d3b(param_1[10],uVar3,iVar1);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1458c0158(param_1 + 0xc,param_5);
  FUN_1412e3d1e(param_1 + 0xe);
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  param_1[0x11] = puVar5;
  param_1[0x10] = puVar5;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = *param_2;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
  *(uint *)((longlong)param_1 + 0x9c) = (uint)bVar4;
  FUN_1449db362(param_5);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c0378 FUN_1458c0378 body=98 status=ok
// SIG undefined FUN_1458c0378(void)

void FUN_1458c0378(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1458c03da FUN_1458c03da body=20 status=ok
// SIG undefined FUN_1458c03da(void)

undefined8 FUN_1458c03da(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1458c03ee FUN_1458c03ee body=150 status=ok
// SIG undefined FUN_1458c03ee(void)

void FUN_1458c03ee(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_14097cfe8();
  uVar3 = FUN_144a8069e(*param_1);
  lVar4 = FUN_1458c0484(uVar3);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x28) == '\0')) {
    lVar5 = FUN_1412e3d68(*param_1);
    iVar2 = *(int *)(lVar5 + 0x388);
    if (0 < iVar2) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(lVar5 + 0x380);
        if (*(longlong *)(lVar5 + 0x380) == 0) {
          lVar6 = lVar5;
        }
        if ((*(byte *)(lVar6 + 0x34 + lVar7) & 1) == 0) {
          uVar3 = FUN_14030a32e(lVar6 + lVar7);
          cVar1 = FUN_1458c0500(lVar4,uVar3);
          if (cVar1 != '\0') {
            return;
          }
          iVar2 = *(int *)(lVar5 + 0x388);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar8 < iVar2);
    }
  }
  return;
}



// FUNCTION 1458c0484 FUN_1458c0484 body=124 status=ok
// SIG undefined FUN_1458c0484(void)

longlong FUN_1458c0484(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
     (FUN_14097d052(&DAT_14cbc2fb0), 0 < DAT_14cbc2fb8)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      cVar1 = FUN_14069eaf4(DAT_14cbc2fb0 + lVar2,param_1);
      if (cVar1 != '\0') {
        return lVar2 + DAT_14cbc2fb0;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < DAT_14cbc2fb8);
  }
  return 0;
}



// FUNCTION 1458c0500 FUN_1458c0500 body=391 status=ok
// SIG undefined FUN_1458c0500(void)

ulonglong FUN_1458c0500(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *unaff_RBX;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar8 = FUN_14479d2ce(param_1);
    uVar8 = FUN_1447210f0(uVar8);
    FUN_1409e0c66(&local_38,uVar8);
    unaff_RBX = local_30;
    if (local_30 != (longlong *)0x0) {
      iVar7 = (int)local_30[1];
      do {
        if (iVar7 == 0) {
          unaff_RBX = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_30[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(local_30 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (unaff_RBX != (longlong *)0x0) {
        if (local_38 != 0) {
          FUN_1409e0d9e(local_38,param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = 0;
          plVar4 = *(longlong **)(param_1 + 0x20);
          if (plVar4 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x20) = 0;
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        LOCK();
        plVar4 = unaff_RBX + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*unaff_RBX)(unaff_RBX);
          LOCK();
          piVar1 = (int *)((longlong)unaff_RBX + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
          }
        }
      }
    }
  }
  lVar3 = param_1 + 8;
  cVar6 = FUN_14069eaf4(lVar3,param_2);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar6 == '\0') {
    cVar6 = FUN_14079e1ea(lVar3,0);
    if ((cVar6 != '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
      uVar8 = FUN_14479d2ce(param_1);
      cVar6 = FUN_1458c0688(param_2,uVar8);
      if (cVar6 != '\0') {
        FUN_14485c47a(lVar3,param_2);
        *(undefined1 *)(param_1 + 0x28) = 1;
        goto LAB_1458c060e;
      }
    }
    uVar9 = 0;
  }
LAB_1458c060e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1458c0688 FUN_1458c0688 body=305 status=ok
// SIG undefined FUN_1458c0688(void)

bool FUN_1458c0688(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_140502f56();
  lVar3 = FUN_140519fd4(param_1);
  bVar7 = false;
  if ((lVar2 != 0) && (lVar3 != 0)) {
    lVar4 = FUN_1408a1fe2(lVar3);
    if (lVar4 != param_2) {
      FUN_1458c07ba(lVar3,param_2);
    }
    lVar5 = FUN_1408a1fe2(lVar3);
    bVar7 = lVar5 == param_2;
    if (bVar7) {
      puVar6 = &local_60;
      local_48 = 4;
      local_60 = 1;
      local_40 = 1;
      FUN_1402b90a2(lVar2,&DAT_14cbc2f98,puVar6);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_48) {
          puVar6 = (undefined4 *)CONCAT44(uStack_5c,local_60);
        }
        (*pcVar1)(puVar6);
      }
      if (0x18 < local_48) {
        FUN_1400020a8(CONCAT44(uStack_5c,local_60));
      }
      FUN_140fd1e04(lVar3,&DAT_14cbc2fa0,1);
    }
    if (lVar4 != param_2) {
      FUN_1458c07ba(lVar3,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c07ba FUN_1458c07ba body=33 status=ok
// SIG undefined FUN_1458c07ba(void)

void FUN_1458c07ba(longlong param_1)

{
  FUN_14485c47a(param_1 + 0xa8);
  FUN_140bf70b8(param_1);
  return;
}



// FUNCTION 1458c07dc FUN_1458c07dc body=308 status=ok
// SIG undefined FUN_1458c07dc(void)

undefined4 *
FUN_1458c07dc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1458c09f4(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  FUN_1411b79c1(0,0);
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1458c0912(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
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
      FUN_1458c0ada(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c0912 FUN_1458c0912 body=224 status=ok
// SIG undefined FUN_1458c0912(void)

void FUN_1458c0912(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = *param_3;
    iVar8 = FUN_141303122();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      lVar9 = (longlong)iVar8 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar9);
      FUN_1411b79c1(*(undefined8 *)(lVar2 + 8 + lVar9),*(undefined4 *)(lVar2 + 0x10 + lVar9));
      if (*(longlong *)(lVar2 + 8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148e76b18(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_1458c0946;
    }
  }
  uVar7 = 0;
LAB_1458c0946:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c09f4 FUN_1458c09f4 body=230 status=ok
// SIG undefined FUN_1458c09f4(void)

int * FUN_1458c09f4(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1458c0ada FUN_1458c0ada body=448 status=ok
// SIG undefined FUN_1458c0ada(void)

void FUN_1458c0ada(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c0caa FUN_1458c0caa body=45 status=ok
// SIG undefined FUN_1458c0caa(void)

undefined8 FUN_1458c0caa(undefined8 param_1,int param_2)

{
  FUN_1458c0cd8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1458c0cd8 FUN_1458c0cd8 body=81 status=ok
// SIG undefined FUN_1458c0cd8(void)

void FUN_1458c0cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5d2500;
  FUN_14051f4c4(param_1 + 0x53);
  FUN_14051f4c4(param_1 + 0x3d);
  *param_1 = &PTR_FUN_14b0159c0;
  FUN_14051f4c4(param_1 + 0x23);
  FUN_14051f4c4(param_1 + 7);
  return;
}



// FUNCTION 1458c0d29 FUN_1458c0d29 body=46 status=ok
// SIG undefined FUN_1458c0d29(void)

void FUN_1458c0d29(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458c0d58(puVar1);
  *puVar1 = &PTR_FUN_14b75e920;
  puVar1[0x33] = &PTR_FUN_14b75ec60;
  return;
}



// FUNCTION 1458c0d58 FUN_1458c0d58 body=94 status=ok
// SIG undefined FUN_1458c0d58(void)

undefined8 * FUN_1458c0d58(undefined8 *param_1)

{
  FUN_140fbcba4();
  *(undefined1 *)(param_1 + 0x21) = 1;
  *param_1 = &PTR_FUN_14b534980;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 1458c0db6 FUN_1458c0db6 body=147 status=ok
// SIG undefined FUN_1458c0db6(void)

undefined8 *
FUN_1458c0db6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140df5408(param_1,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    local_38 = 0;
    local_30 = 0;
    FUN_1458c0e4a(&local_38,param_4);
    FUN_1458c0f3e(lVar1 + 0x68,param_2,&local_38);
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c0e4a FUN_1458c0e4a body=124 status=ok
// SIG undefined FUN_1458c0e4a(void)

void FUN_1458c0e4a(longlong *param_1,longlong *param_2)

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



// FUNCTION 1458c0ec8 FUN_1458c0ec8 body=118 status=ok
// SIG undefined FUN_1458c0ec8(void)

void FUN_1458c0ec8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4279a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b427930;
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



// FUNCTION 1458c0f3e FUN_1458c0f3e body=216 status=ok
// SIG undefined FUN_1458c0f3e(void)

undefined8 * FUN_1458c0f3e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458c1040 FUN_1458c1040 body=145 status=ok
// SIG undefined FUN_1458c1040(void)

undefined8 FUN_1458c1040(longlong param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  cVar1 = FUN_1458c1104();
  if (cVar1 == '\x01' && param_3 == '\0') {
    cVar1 = FUN_144729dda(param_1 + 0x30);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x30);
      lVar3 = FUN_1407f492e(uVar2);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (puVar5 = (undefined8 *)FUN_1458c10d8(param_1,param_2), puVar5 != (undefined8 *)0x0)) {
          FUN_1458c10d2(lVar3 + 0x3c28,*puVar5);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1458c10d2 FUN_1458c10d2 body=5 status=ok
// SIG undefined FUN_1458c10d2(void)

void FUN_1458c10d2(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1458c10d8 FUN_1458c10d8 body=44 status=ok
// SIG undefined FUN_1458c10d8(void)

longlong FUN_1458c10d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 200))) {
    return (ulonglong)param_2 * 0xb0 + *(longlong *)(lVar1 + 0xc0);
  }
  return 0;
}



// FUNCTION 1458c1104 FUN_1458c1104 body=1072 status=ok
// SIG undefined FUN_1458c1104(void)

undefined8 FUN_1458c1104(longlong param_1,uint param_2)

{
  byte bVar1;
  ushort *puVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *_Str;
  size_t sVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_218 [44];
  uint local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1ec = param_2;
  iVar5 = FUN_1412e481c();
  if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x2b8))) &&
      (iVar5 = FUN_1412e481c(param_1), -1 < (int)param_2)) &&
     (lVar6 = (longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x2b0),
     (int)param_2 < *(int *)(lVar6 + 0x18))) {
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if (((*(char *)(lVar6 + 0x80 + (ulonglong)param_2 * 0xb0) == '\0') &&
        (*(char *)(lVar6 + (ulonglong)param_2 * 0xb0 + 8) == '\0')) &&
       (lVar6 = *(longlong *)(param_1 + 0x288), lVar6 != 0)) {
      *(uint *)(param_1 + 0x2f8) = param_2;
      uVar7 = FUN_14479d2ce(param_1 + 0x30);
      local_1e8 = local_1c8;
      local_1d0 = '\0';
      local_1d8 = local_c8;
      local_1e0 = local_1e8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetActiveNavItemByIndex",&local_1e8);
      local_48 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_40 = 0;
        local_38 = 0;
      }
      else {
        sVar8 = wcslen(_Str);
        FUN_1446fe5a4(local_c8,_Str,sVar8 & 0xffffffff,1);
      }
      FUN_140c7f7d4(uVar7,local_40,&local_1ec);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_1d0 == '\x01') {
        FUN_1400020a8(local_1e8);
      }
      uVar14 = *(uint *)(param_1 + 800);
      if (*(char *)(param_1 + 0x329) == '\x01') {
        uVar10 = uVar14;
        if (uVar14 == 0xffffffff) {
          uVar10 = *(uint *)(param_1 + 0x2f8);
        }
        uVar9 = (ulonglong)uVar10;
        lVar15 = *(longlong *)(param_1 + 0x288);
        do {
          uVar4 = (longlong)((int)uVar9 + *(int *)(param_1 + 0x300) + -1) %
                  (longlong)*(int *)(param_1 + 0x300);
          uVar9 = uVar4 & 0xffffffff;
          uVar10 = (uint)uVar4;
          if (lVar15 == 0) {
LAB_1458c14a5:
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            if (-1 < (int)uVar10) {
              if (*(int *)(lVar15 + 200) <= (int)uVar10) goto LAB_1458c14a5;
              lVar16 = uVar9 * 0xb0 + *(longlong *)(lVar15 + 0xc0);
            }
          }
          uVar13 = uVar14;
          if (uVar14 == 0xffffffff) {
            uVar13 = *(uint *)(param_1 + 0x2f8);
          }
          bVar11 = 0;
        } while (((lVar16 != 0) && (bVar11 = 0, uVar13 != uVar10)) &&
                ((*(char *)(lVar16 + 8) != '\0' || (bVar11 = 1, *(char *)(lVar16 + 0x80) != '\0'))))
        ;
      }
      else {
        if (uVar14 == 0xffffffff) {
          uVar14 = *(uint *)(param_1 + 0x2f8);
        }
        uVar9 = *(ulonglong *)(param_1 + 0x288);
        if ((uVar9 == 0) || ((int)uVar14 < 1)) {
LAB_1458c1410:
          bVar11 = 0;
        }
        else {
          lVar15 = (ulonglong)uVar14 * 0xb0;
          do {
            lVar15 = lVar15 + -0xb0;
            if ((*(int *)(uVar9 + 200) < (int)uVar14) ||
               (lVar16 = *(longlong *)(uVar9 + 0xc0), lVar16 + lVar15 == 0)) goto LAB_1458c1410;
            if ((*(char *)(lVar16 + 8 + lVar15) == '\0') &&
               (*(char *)(lVar16 + 0x80 + lVar15) != '\x01')) {
              bVar11 = 1;
              break;
            }
            bVar11 = 0;
            uVar10 = uVar14 - 1;
            bVar3 = 0 < (int)uVar14;
            uVar14 = uVar10;
          } while (uVar10 != 0 && bVar3);
        }
      }
      bVar1 = *(byte *)(lVar6 + 0x230);
      *(byte *)(lVar6 + 0x230) = bVar1 & 0xfe | bVar11;
      uVar14 = *(uint *)(param_1 + 800);
      if (*(char *)(param_1 + 0x329) == '\x01') {
        uVar10 = uVar14;
        if (uVar14 == 0xffffffff) {
          uVar10 = *(uint *)(param_1 + 0x2f8);
        }
        uVar9 = (ulonglong)uVar10;
        lVar15 = *(longlong *)(param_1 + 0x288);
        do {
          uVar4 = (longlong)((int)uVar9 + 1) % (longlong)*(int *)(param_1 + 0x300);
          uVar9 = uVar4 & 0xffffffff;
          uVar10 = (uint)uVar4;
          if (lVar15 == 0) {
LAB_1458c1496:
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            if (-1 < (int)uVar10) {
              if (*(int *)(lVar15 + 200) <= (int)uVar10) goto LAB_1458c1496;
              lVar16 = uVar9 * 0xb0 + *(longlong *)(lVar15 + 0xc0);
            }
          }
          uVar13 = uVar14;
          if (uVar14 == 0xffffffff) {
            uVar13 = *(uint *)(param_1 + 0x2f8);
          }
          bVar12 = 0;
        } while (((lVar16 != 0) && (uVar13 != uVar10)) &&
                ((*(char *)(lVar16 + 8) != '\0' || (bVar12 = 2, *(char *)(lVar16 + 0x80) != '\0'))))
        ;
      }
      else {
        if (uVar14 == 0xffffffff) {
          uVar14 = *(uint *)(param_1 + 0x2f8);
        }
        lVar15 = *(longlong *)(param_1 + 0x288);
        if ((lVar15 != 0) && (-2 < (int)uVar14)) {
          uVar10 = *(uint *)(lVar15 + 200);
          uVar9 = (ulonglong)uVar10;
          uVar14 = uVar14 + 1;
          if ((int)uVar14 < (int)uVar10) {
            do {
              lVar16 = (ulonglong)uVar14 * 0xb0 + *(longlong *)(lVar15 + 0xc0);
              if (lVar16 == 0) goto LAB_1458c149e;
              if ((*(char *)(lVar16 + 8) == '\0') &&
                 (bVar12 = 2, *(char *)(lVar16 + 0x80) != '\x01')) break;
              uVar14 = uVar14 + 1;
              bVar12 = 0;
            } while ((int)uVar14 < (int)uVar10);
            goto LAB_1458c139d;
          }
        }
LAB_1458c149e:
        bVar12 = 0;
      }
LAB_1458c139d:
      *(byte *)(lVar6 + 0x230) = bVar1 & 0xfc | bVar11 | bVar12;
      puVar2 = *(ushort **)(lVar6 + 0x80);
      uVar7 = CONCAT71((int7)(uVar9 >> 8),1);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
      goto LAB_1458c13c8;
    }
  }
  uVar7 = 0;
LAB_1458c13c8:
  if ((local_30 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1458c1536 FUN_1458c1536 body=40 status=ok
// SIG undefined FUN_1458c1536(void)

undefined8 FUN_1458c1536(undefined8 param_1,int param_2)

{
  FUN_1458c155e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c155e FUN_1458c155e body=122 status=ok
// SIG undefined FUN_1458c155e(void)

void FUN_1458c155e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b94edf0;
  plVar3 = (longlong *)param_1[0x6c];
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
  *param_1 = &PTR_FUN_14b948d50;
  FUN_1449e6b18(param_1 + 0x69);
  FUN_1449e6b18((longlong)param_1 + 0x33c);
  FUN_1449e6b18(param_1 + 0x66);
  FUN_14103e040(param_1);
  return;
}



// FUNCTION 1458c15d8 FUN_1458c15d8 body=180 status=ok
// SIG undefined FUN_1458c15d8(void)

void FUN_1458c15d8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63cba(local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x718))(param_1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c168e FUN_1458c168e body=51 status=ok
// SIG undefined FUN_1458c168e(void)

void FUN_1458c168e(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((*param_2 != 0) && (param_2[1] != 0)) && (*param_2 != DAT_14c948000)) {
    uVar1 = FUN_1412e518a(param_2);
  }
  *(undefined8 *)(param_1 + 0x550) = uVar1;
  return;
}



// FUNCTION 1458c16c1 FUN_1458c16c1 body=46 status=ok
// SIG undefined FUN_1458c16c1(void)

void FUN_1458c16c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458c16f0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5758b0;
  puVar1[5] = &PTR_FUN_14b575bd0;
  return;
}



// FUNCTION 1458c16f0 FUN_1458c16f0 body=84 status=ok
// SIG undefined FUN_1458c16f0(void)

undefined8 * FUN_1458c16f0(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a513960;
  param_1[5] = &PTR_FUN_14a513c80;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 1458c1744 FUN_1458c1744 body=40 status=ok
// SIG undefined FUN_1458c1744(void)

undefined8 FUN_1458c1744(undefined8 param_1,int param_2)

{
  FUN_1458c176c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c176c FUN_1458c176c body=240 status=ok
// SIG undefined FUN_1458c176c(void)

void FUN_1458c176c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b32a980;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x89));
  FUN_144760f98(param_1 + 0x81);
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c185c(param_1 + 0x75);
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1458c185c FUN_1458c185c body=62 status=ok
// SIG undefined FUN_1458c185c(void)

void FUN_1458c185c(longlong *param_1)

{
  FUN_1458c189a();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c189a FUN_1458c189a body=68 status=ok
// SIG undefined FUN_1458c189a(void)

void FUN_1458c189a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1458c18de(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1458c18de FUN_1458c18de body=83 status=ok
// SIG undefined FUN_1458c18de(void)

void FUN_1458c18de(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760f98(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458c1932 FUN_1458c1932 body=40 status=ok
// SIG undefined FUN_1458c1932(void)

undefined8 FUN_1458c1932(undefined8 param_1,int param_2)

{
  FUN_1458c195a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c195a FUN_1458c195a body=118 status=ok
// SIG undefined FUN_1458c195a(void)

void FUN_1458c195a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baba1f0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c19d0(param_1 + 0x13);
  FUN_1458c1a06(param_1);
  return;
}



// FUNCTION 1458c19d0 FUN_1458c19d0 body=53 status=ok
// SIG undefined FUN_1458c19d0(void)

void FUN_1458c19d0(longlong *param_1)

{
  FUN_1458c1c00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c1a06 FUN_1458c1a06 body=118 status=ok
// SIG undefined FUN_1458c1a06(void)

void FUN_1458c1a06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bab9360;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c1a7c(param_1 + 7);
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458c1a7c FUN_1458c1a7c body=53 status=ok
// SIG undefined FUN_1458c1a7c(void)

void FUN_1458c1a7c(longlong *param_1)

{
  FUN_1458c1ab2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c1ab2 FUN_1458c1ab2 body=332 status=ok
// SIG undefined FUN_1458c1ab2(void)

void FUN_1458c1ab2(longlong *param_1)

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
      FUN_1490c371c((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 1458c1c00 FUN_1458c1c00 body=370 status=ok
// SIG undefined FUN_1458c1c00(void)

void FUN_1458c1c00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1447a1747(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c1d73 FUN_1458c1d73 body=35 status=ok
// SIG undefined FUN_1458c1d73(void)

void FUN_1458c1d73(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458c1d96(puVar1,param_1);
  *puVar1 = &PTR_FUN_149fa99f0;
  return;
}



// FUNCTION 1458c1d96 FUN_1458c1d96 body=52 status=ok
// SIG undefined FUN_1458c1d96(void)

undefined8 * FUN_1458c1d96(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149fa6af0;
  FUN_1458c1dca(param_1 + 5);
  param_1[0x5d] = 0;
  return param_1;
}



// FUNCTION 1458c1dca FUN_1458c1dca body=505 status=ok
// SIG undefined FUN_1458c1dca(void)

undefined8 * FUN_1458c1dca(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  param_1[0x25] = 0x800000001;
  *(undefined4 *)(param_1 + 0x26) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x100;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 1;
  param_1[0x2c] = 0x800000001;
  *(undefined4 *)(param_1 + 0x2d) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x100;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x32) = 1;
  param_1[0x33] = 0x800000001;
  *(undefined4 *)(param_1 + 0x34) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0x100;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x39) = 1;
  param_1[0x3a] = 0x800000001;
  *(undefined4 *)(param_1 + 0x3b) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 0x100;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  param_1[0x41] = 0x800000001;
  *(undefined4 *)(param_1 + 0x42) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x214) = 0x100;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x47) = 1;
  param_1[0x48] = 0x800000001;
  *(undefined4 *)(param_1 + 0x49) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x24c) = 0x100;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 1;
  param_1[0x4f] = 0x800000001;
  *(undefined4 *)(param_1 + 0x50) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x284) = 0x100;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x55) = 1;
  param_1[0x56] = 0x800000001;
  *(undefined4 *)(param_1 + 0x57) = 0xff;
  *(undefined2 *)((longlong)param_1 + 700) = 0x100;
  FUN_1458c1fc4(param_1);
  return param_1;
}



// FUNCTION 1458c1fc4 FUN_1458c1fc4 body=1162 status=ok
// SIG undefined FUN_1458c1fc4(void)

void FUN_1458c1fc4(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &DAT_14c99c140;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[10] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  local_40 = &DAT_14c99c148;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[0xb] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  local_40 = &DAT_14c99c150;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[0xc] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  local_40 = &DAT_14c99c158;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[0xd] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  local_40 = &DAT_14c99c160;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[0xe] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  local_40 = &DAT_14c99c168;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[0xf] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  local_40 = &DAT_14c99c170;
  FUN_1412e6a90(param_1,&local_2c,&local_40,0);
  param_1[0x10] = *(longlong *)(*param_1 + 8 + (longlong)local_2c * 0x18);
  lVar1 = *(longlong *)(param_1[0xb] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xb];
  }
  local_2c = -1;
  FUN_1458c2d3c(lVar1 + 0x20,&local_40,DAT_14c99c0d8,&local_2c);
  param_1[0x11] = (longlong)local_40;
  lVar1 = *(longlong *)(param_1[0xd] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xd];
  }
  local_2c = -1;
  FUN_1458c35f4(lVar1 + 0x20,&local_40,DAT_14c99c0e0,&local_2c);
  *(undefined4 *)(param_1 + 0x12) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_1 + 0x94) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x13) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_34;
  lVar1 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xe];
  }
  local_2c = -1;
  FUN_1458c3790(lVar1 + 0x20,&local_40,DAT_14c99c0e8,&local_2c);
  *(undefined4 *)(param_1 + 0x14) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_1 + 0xa4) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x15) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xac) = uStack_34;
  lVar1 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xe];
  }
  local_2c = -1;
  FUN_1458c270c(lVar1 + 0x20,&local_40,DAT_14c99c0f0,&local_2c);
  param_1[0x16] = (longlong)local_40;
  lVar1 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xe];
  }
  local_2c = -1;
  FUN_1458c2450(lVar1 + 0x20,&local_40,DAT_14c99c110,&local_2c);
  param_1[0x1d] = (longlong)local_40;
  lVar1 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xe];
  }
  local_2c = -1;
  local_50 = 0x30;
  local_58 = &local_2c;
  FUN_1458c288e(lVar1 + 0x20,&local_40,DAT_14c99c108,0);
  *(undefined4 *)(param_1 + 0x1b) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_1 + 0xdc) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uStack_34;
  lVar1 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xe];
  }
  local_2c = -1;
  FUN_1458c2a18(lVar1 + 0x20,&local_40,DAT_14c99c100,&local_2c);
  *(undefined4 *)(param_1 + 0x19) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_1 + 0xcc) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x1a) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_34;
  lVar1 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xe];
  }
  local_2c = -1;
  FUN_1458c2baa(lVar1 + 0x20,&local_40,DAT_14c99c0f8,&local_2c);
  *(undefined4 *)(param_1 + 0x17) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_1 + 0xbc) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x18) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_34;
  lVar1 = *(longlong *)(param_1[0xf] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xf];
  }
  local_2c = -1;
  FUN_1458c2450(lVar1 + 0x20,&local_40,DAT_14c99c120,&local_2c);
  param_1[0x1e] = (longlong)local_40;
  lVar1 = *(longlong *)(param_1[10] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[10];
  }
  local_50 = 0x21;
  local_58 = (int *)&DAT_14c846330;
  FUN_1458c2ed2(lVar1 + 0x20,&local_40,DAT_14c99c0d0,1);
  param_1[0x1f] = (longlong)local_40;
  lVar1 = *(longlong *)(param_1[0xc] + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1[0xc];
  }
  local_50 = 0x21;
  local_58 = (int *)&DAT_14c84635c;
  FUN_1458c326a(lVar1 + 0x20,&local_40,DAT_14c99c118,1);
  FUN_1458c25d2(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c2450 FUN_1458c2450 body=385 status=ok
// SIG undefined FUN_1458c2450(void)

longlong * FUN_1458c2450(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x30;
              goto LAB_1458c2551;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_1412e701c(&local_50,1,param_4,0x30);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c2551:
  *param_2 = *plVar6;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c25d2 FUN_1458c25d2 body=314 status=ok
// SIG undefined FUN_1458c25d2(void)

void FUN_1458c25d2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 6;
  FUN_1412e7a7e(param_1 + 0x100,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                DAT_14c99c0d8);
  *(undefined4 *)(param_1 + 0x160) = 6;
  FUN_1412e7a7e(param_1 + 0x138,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x68),
                DAT_14c99c0e0);
  FUN_1412e7a7e(param_1 + 0x170,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70),
                DAT_14c99c0e8);
  *(undefined4 *)(param_1 + 0x1d0) = 2;
  FUN_1412e7a7e(param_1 + 0x1a8,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                DAT_14c99c0f8);
  *(undefined4 *)(param_1 + 0x208) = 6;
  FUN_1412e7a7e(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70),
                DAT_14c99c108);
  *(undefined4 *)(param_1 + 0x240) = 1;
  FUN_1412e7a7e(param_1 + 0x218,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),
                DAT_14c99c0f0);
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0x100;
  *(undefined8 *)(param_1 + 0x2b0) = 0x100;
  FUN_1412e7a7e(param_1 + 0x250,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70),
                DAT_14c99c110);
  FUN_1412e7a7e(param_1 + 0x288,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),
                DAT_14c99c120);
  return;
}



// FUNCTION 1458c270c FUN_1458c270c body=385 status=ok
// SIG undefined FUN_1458c270c(void)

longlong * FUN_1458c270c(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x30;
              goto LAB_1458c280d;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_1412e701c(&local_50,1,param_4,0x30);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c280d:
  *param_2 = *plVar6;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c288e FUN_1458c288e body=393 status=ok
// SIG undefined FUN_1458c288e(void)

longlong *
FUN_1458c288e(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 3)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_1458c2996;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 3;
  FUN_1412e701c(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar1 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_34 * 0x18 + 8);
LAB_1458c2996:
  *param_2 = *plVar6;
  *(undefined4 *)(param_2 + 1) = 3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c2a18 FUN_1458c2a18 body=401 status=ok
// SIG undefined FUN_1458c2a18(void)

longlong * FUN_1458c2a18(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 3)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x38;
              goto LAB_1458c2afd;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 3;
  FUN_1412e701c(&local_50,1,param_4,0x38);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c2afd:
  *param_2 = *plVar6;
  *(undefined4 *)(param_2 + 1) = 3;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c2baa FUN_1458c2baa body=401 status=ok
// SIG undefined FUN_1458c2baa(void)

longlong * FUN_1458c2baa(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 3)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x38;
              goto LAB_1458c2c8f;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 3;
  FUN_1412e701c(&local_50,1,param_4,0x38);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c2c8f:
  *param_2 = *plVar6;
  *(undefined4 *)(param_2 + 1) = 3;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c2d3c FUN_1458c2d3c body=404 status=ok
// SIG undefined FUN_1458c2d3c(void)

longlong * FUN_1458c2d3c(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x30;
              goto LAB_1458c2dda;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_1412e701c(&local_50,1,param_4,0x30);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c2dda:
  *param_2 = *plVar6;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c2ed2 FUN_1458c2ed2 body=405 status=ok
// SIG undefined FUN_1458c2ed2(void)

longlong *
FUN_1458c2ed2(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 1) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_1458c2f77;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_1458c3068(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar1 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_34 * 0x18 + 8);
LAB_1458c2f77:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c3068 FUN_1458c3068 body=277 status=ok
// SIG undefined FUN_1458c3068(void)

longlong *
FUN_1458c3068(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  if (param_6 < 1) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar2[1] = 1;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7780;
    puVar2[7] = 0;
    puVar2[8] = 0x100000000;
    puVar2[9] = *param_3;
    *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_3 + 1);
    FUN_146f7f028(puVar2,param_2);
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined4 *)(puVar2 + 1) = 1;
    *(int *)((longlong)puVar2 + 0xc) = param_6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa76f0;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    puVar2[8] = *param_3;
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_3 + 1);
    FUN_1458c317e(puVar2,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1458c317e FUN_1458c317e body=194 status=ok
// SIG undefined FUN_1458c317e(void)

void FUN_1458c317e(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 <= param_2) {
    if (iVar5 < param_2) {
      do {
        *(uint *)(param_1 + 0x38) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
          FUN_146f7e88a(lVar1,iVar5);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = lVar1;
        }
        puVar2 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x18);
        iVar5 = *(int *)(param_1 + 0xc);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(int *)(puVar2 + 2) = iVar5;
        iVar3 = *(int *)(param_1 + 0x10);
        FUN_1458c3240(puVar2,iVar5 * iVar3);
        if (0 < iVar3) {
          FUN_146f7e40c(puVar2,iVar3 + -1,param_1 + 0x40);
        }
        iVar5 = *(int *)(param_1 + 0x38);
      } while (iVar5 < param_2);
    }
    return;
  }
  FUN_146f7eaea(lVar1,param_2,1);
  return;
}



// FUNCTION 1458c3240 FUN_1458c3240 body=42 status=ok
// SIG undefined FUN_1458c3240(void)

void FUN_1458c3240(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140678446();
  return;
}



// FUNCTION 1458c326a FUN_1458c326a body=405 status=ok
// SIG undefined FUN_1458c326a(void)

longlong *
FUN_1458c326a(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 2) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_1458c330f;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_1458c3400(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar1 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_34 * 0x18 + 8);
LAB_1458c330f:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c3400 FUN_1458c3400 body=263 status=ok
// SIG undefined FUN_1458c3400(void)

longlong *
FUN_1458c3400(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  if (param_6 < 1) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar2[1] = 2;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa78a0;
    puVar2[7] = 0;
    puVar2[8] = 0x100000000;
    puVar2[9] = *param_3;
    FUN_146f81946(puVar2,param_2);
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *(undefined4 *)(puVar2 + 1) = 2;
    *(int *)((longlong)puVar2 + 0xc) = param_6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7810;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    puVar2[8] = *param_3;
    FUN_1458c3508(puVar2,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1458c3508 FUN_1458c3508 body=194 status=ok
// SIG undefined FUN_1458c3508(void)

void FUN_1458c3508(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 <= param_2) {
    if (iVar5 < param_2) {
      do {
        *(uint *)(param_1 + 0x38) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
          FUN_146f811d2(lVar1,iVar5);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = lVar1;
        }
        puVar2 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x18);
        iVar5 = *(int *)(param_1 + 0xc);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(int *)(puVar2 + 2) = iVar5;
        iVar3 = *(int *)(param_1 + 0x10);
        FUN_1458c35ca(puVar2,iVar5 * iVar3);
        if (0 < iVar3) {
          FUN_146f80d5a(puVar2,iVar3 + -1,param_1 + 0x40);
        }
        iVar5 = *(int *)(param_1 + 0x38);
      } while (iVar5 < param_2);
    }
    return;
  }
  FUN_146f81412(lVar1,param_2,1);
  return;
}



// FUNCTION 1458c35ca FUN_1458c35ca body=42 status=ok
// SIG undefined FUN_1458c35ca(void)

void FUN_1458c35ca(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14171ef34();
  return;
}



// FUNCTION 1458c35f4 FUN_1458c35f4 body=411 status=ok
// SIG undefined FUN_1458c35f4(void)

longlong * FUN_1458c35f4(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 2)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x30;
              goto LAB_1458c3692;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 2;
  FUN_1412e701c(&local_50,1,param_4,0x30);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c3692:
  *param_2 = *plVar6;
  *(undefined4 *)(param_2 + 1) = 2;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c3790 FUN_1458c3790 body=411 status=ok
// SIG undefined FUN_1458c3790(void)

longlong * FUN_1458c3790(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 3)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x30;
              goto LAB_1458c382e;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 3;
  FUN_1412e701c(&local_50,1,param_4,0x30);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar1 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_2c * 0x18 + 8);
LAB_1458c382e:
  *param_2 = *plVar6;
  *(undefined4 *)(param_2 + 1) = 3;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458c392c FUN_1458c392c body=9 status=ok
// SIG undefined FUN_1458c392c(void)

void FUN_1458c392c(longlong param_1)

{
  FUN_1458c3936(param_1 + 0x10);
  return;
}



// FUNCTION 1458c3936 FUN_1458c3936 body=94 status=ok
// SIG undefined FUN_1458c3936(void)

void FUN_1458c3936(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fa760;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c3994(param_1 + 5);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458c3990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458c3994 FUN_1458c3994 body=109 status=ok
// SIG undefined FUN_1458c3994(void)

void FUN_1458c3994(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001458c39fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458c3a16 FUN_1458c3a16 body=228 status=ok
// SIG undefined FUN_1458c3a16(void)

longlong FUN_1458c3a16(void)

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
  if (DAT_14cb53b48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14646d3b4;
    local_38 = &LAB_1485fc8a9;
    local_40 = &LAB_14594804d;
    local_48 = L"GbxTimeOfDay";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 0x10;
    local_68 = 0x900;
    FUN_14081cfa3(L"/Script/GbxCloudscape",L"GbxNiagaraCloudscapeComponent",&DAT_14cb53b48,
                  &DAT_1485fc8a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb53b48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c3b02 FUN_1458c3b02 body=228 status=ok
// SIG undefined FUN_1458c3b02(void)

longlong FUN_1458c3b02(void)

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
  if (DAT_14cb6ad40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_143dc0e52;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14876c0e3;
    local_40 = &LAB_1457e5cd4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x4b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"LightBeamManager",&DAT_14cb6ad40,FUN_14652970a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ad40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c3be8 FUN_1458c3be8 body=21 status=ok
// SIG undefined FUN_1458c3be8(void)

undefined8 FUN_1458c3be8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458c3bfe FUN_1458c3bfe body=62 status=ok
// SIG undefined FUN_1458c3bfe(void)

void FUN_1458c3bfe(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1458c3c3e(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c3c3e FUN_1458c3c3e body=244 status=ok
// SIG undefined FUN_1458c3c3e(void)

void FUN_1458c3c3e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      lVar10 = (longlong)iVar6;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar7 = iVar6;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar8 = iVar4;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar7 = iVar7 + 1;
        plVar9 = plVar9 + 2;
        iVar8 = iVar7;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar8 - iVar6;
      if (bVar5 == false) {
        if (iVar12 != iVar6) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar4 << 4);
        }
        iVar12 = iVar12 + iVar4;
      }
      else {
        FUN_1458c3d32(plVar2 + lVar10 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar8;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1458c3d32 FUN_1458c3d32 body=75 status=ok
// SIG undefined FUN_1458c3d32(void)

void FUN_1458c3d32(longlong param_1,int param_2)

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



// FUNCTION 1458c3d7e FUN_1458c3d7e body=40 status=ok
// SIG undefined FUN_1458c3d7e(void)

undefined8 FUN_1458c3d7e(undefined8 param_1,int param_2)

{
  FUN_1458c3da6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c3da6 FUN_1458c3da6 body=159 status=ok
// SIG undefined FUN_1458c3da6(void)

void FUN_1458c3da6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a854890;
  param_1[5] = &PTR_FUN_14a855290;
  param_1[6] = &PTR_LAB_14a8552d0;
  param_1[0x55] = &PTR_FUN_14a855320;
  param_1[0x56] = &PTR_FUN_14a8553a0;
  param_1[0x57] = &PTR_FUN_14a8553b0;
  param_1[0xc4] = &PTR_FUN_14a8553e0;
  FUN_1458c3e46(param_1 + 0xca,0);
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1458c3e46 FUN_1458c3e46 body=114 status=ok
// SIG undefined FUN_1458c3e46(void)

void FUN_1458c3e46(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1447ab16c(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1458c3eba FUN_1458c3eba body=57 status=ok
// SIG undefined FUN_1458c3eba(void)

undefined8 * FUN_1458c3eba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a862068;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c3f96 FUN_1458c3f96 body=253 status=ok
// SIG undefined FUN_1458c3f96(void)

void FUN_1458c3f96(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_1458c4094(&local_30);
  uVar3 = (ulonglong)local_20;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      lVar1 = *(longlong *)(local_30 + (uVar3 & 0xffffffff) * 8);
      if ((lVar1 != 0) &&
         (((*(uint *)(lVar1 + 8) & 0x50) == 0 && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)))
         ) {
        lVar2 = FUN_141210d5c();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          FUN_148117120(param_1,*(undefined8 *)(local_30 + (longlong)(int)local_20 * 8),1);
        }
      }
      uVar3 = (longlong)(int)local_20;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
        local_20 = (uint)uVar3;
        if ((longlong)local_28 <= (longlong)uVar3) break;
      } while (*(longlong *)(local_30 + uVar3 * 8) == 0);
    } while ((-2 < (longlong)uVar4) && ((int)local_20 < local_28));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c4094 FUN_1458c4094 body=170 status=ok
// SIG undefined FUN_1458c4094(void)

longlong * FUN_1458c4094(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1412e927a();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458c4140 FUN_1458c4140 body=103 status=ok
// SIG undefined FUN_1458c4140(void)

ulonglong FUN_1458c4140(longlong param_1)

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
LAB_1458c418a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458c418a;
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



// FUNCTION 1458c41ae FUN_1458c41ae body=9 status=ok
// SIG undefined FUN_1458c41ae(void)

void FUN_1458c41ae(longlong param_1)

{
  FUN_1458c41b8(param_1 + 0x10);
  return;
}



// FUNCTION 1458c41b8 FUN_1458c41b8 body=133 status=ok
// SIG undefined FUN_1458c41b8(void)

void FUN_1458c41b8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99ea90;
  param_1[4] = &PTR_FUN_14b99eab0;
  param_1[0x15] = &PTR_FUN_14b99ead0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  param_1[0x15] = &PTR_LAB_14b99b7d0;
  plVar2 = (longlong *)param_1[0x18];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_141105d6e(param_1);
  return;
}



// FUNCTION 1458c423e FUN_1458c423e body=63 status=ok
// SIG undefined FUN_1458c423e(void)

void FUN_1458c423e(longlong param_1)

{
  longlong lVar1;
  
  FUN_1412e9408();
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_140c125e6(lVar1 + 0x3c0,&DAT_14cbd9580);
    return;
  }
  return;
}



// FUNCTION 1458c427e FUN_1458c427e body=210 status=ok
// SIG undefined FUN_1458c427e(void)

void FUN_1458c427e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140872622();
  if (*(longlong *)(param_1 + 0x2210) != 0) {
    FUN_145ac048a();
    *(undefined8 *)(param_1 + 0x2210) = 0;
    plVar3 = *(longlong **)(param_1 + 0x2218);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2218) = 0;
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
  if (*(longlong *)(param_1 + 0x2200) != 0) {
    FUN_145ac0b44();
  }
  *(undefined8 *)(param_1 + 0x2200) = 0;
  plVar3 = *(longlong **)(param_1 + 0x2208);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2208) = 0;
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
  FUN_1458c4350(param_1 + 0x3910,1);
  return;
}



// FUNCTION 1458c4350 FUN_1458c4350 body=139 status=ok
// SIG undefined FUN_1458c4350(void)

void FUN_1458c4350(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_140a9a328();
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x138);
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
  FUN_1458c446e(param_1);
  FUN_1458c43dc(param_1);
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}



// FUNCTION 1458c43dc FUN_1458c43dc body=145 status=ok
// SIG undefined FUN_1458c43dc(void)

void FUN_1458c43dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1413ea8d6();
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar3 = *(longlong **)(param_1 + 0x130);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
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
    if (*(char *)(param_1 + 0x84) != '\0') {
      *(undefined1 *)(param_1 + 0x84) = 0;
      FUN_1459063aa(param_1 + 0x28,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  FUN_1412e9410(param_1,0);
  return;
}



// FUNCTION 1458c446e FUN_1458c446e body=478 status=ok
// SIG undefined FUN_1458c446e(void)

void FUN_1458c446e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x160) != 0) {
    plVar1 = (longlong *)(param_1 + 0x158);
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      cVar7 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
      if (cVar7 != '\0') {
        iVar2 = *(int *)(param_1 + 0x150);
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x148);
          lVar10 = 0;
          do {
            local_b0 = *(undefined4 *)(lVar3 + 8 + lVar10);
            local_b8 = *(undefined8 *)(lVar3 + lVar10);
            FUN_144928b90(local_80,8);
            local_90 = local_b8;
            local_88 = local_b0;
            FUN_144928d62(local_70,1,&local_90);
            local_98 = 0xffffffff;
            local_a0 = *(undefined8 *)(param_1 + 0x90);
            uVar8 = FUN_140a9a328(param_1);
            if ((*(int *)(param_1 + 0x160) == 0) ||
               (plVar4 = (longlong *)*plVar1, plVar4 == (longlong *)0x0)) {
              local_a8 = 0;
            }
            else {
              (**(code **)(*plVar4 + 0x38))(plVar4,&local_a8);
            }
            uVar6 = local_a8;
            lVar9 = FUN_140149a73(uVar8,0);
            if (lVar9 != 0) {
              FUN_140825b72(local_80,uVar6,lVar9,&local_a0);
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 0xc;
          } while ((longlong)iVar2 * 0xc != lVar10);
        }
        *(undefined4 *)(param_1 + 0x150) = 0;
        if (*(int *)(param_1 + 0x154) != 0) {
          FUN_1446dda88(param_1 + 0x148,0);
        }
        if ((*(int *)(param_1 + 0x160) != 0) &&
           (puVar5 = (undefined8 *)*plVar1, puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,0);
          FUN_1446efa72(plVar1,0,0,0x10);
          *(undefined4 *)(param_1 + 0x160) = 0;
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



// FUNCTION 1458c464e FUN_1458c464e body=126 status=ok
// SIG undefined FUN_1458c464e(void)

void FUN_1458c464e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      iVar6 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1458c46cc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458c46cc FUN_1458c46cc body=131 status=ok
// SIG undefined FUN_1458c46cc(void)

void FUN_1458c46cc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 1458c475a FUN_1458c475a body=82 status=ok
// SIG undefined FUN_1458c475a(void)

undefined8 * FUN_1458c475a(undefined8 *param_1)

{
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14b215150;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0x20;
  return param_1;
}



// FUNCTION 1458c47ac FUN_1458c47ac body=73 status=ok
// SIG undefined FUN_1458c47ac(void)

undefined8 * FUN_1458c47ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be7e1f0;
  param_1[6] = &PTR_LAB_14be7e4d0;
  FUN_1458c47f6(param_1 + 9);
  FUN_1410891e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c47f6 FUN_1458c47f6 body=76 status=ok
// SIG undefined FUN_1458c47f6(void)

void FUN_1458c47f6(longlong param_1)

{
  FUN_1458c4842(param_1 + 0x118);
  FUN_1458c48d2(param_1 + 0xe0);
  FUN_1458c4842(param_1 + 0xa8);
  FUN_1458c4908(param_1 + 0x70);
  FUN_1458c493e(param_1);
  return;
}



// FUNCTION 1458c4842 FUN_1458c4842 body=53 status=ok
// SIG undefined FUN_1458c4842(void)

void FUN_1458c4842(longlong *param_1)

{
  FUN_1458c4878();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c4878 FUN_1458c4878 body=90 status=ok
// SIG undefined FUN_1458c4878(void)

void FUN_1458c4878(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 1458c48d2 FUN_1458c48d2 body=53 status=ok
// SIG undefined FUN_1458c48d2(void)

void FUN_1458c48d2(longlong *param_1)

{
  FUN_1458c49b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c4908 FUN_1458c4908 body=53 status=ok
// SIG undefined FUN_1458c4908(void)

void FUN_1458c4908(longlong *param_1)

{
  FUN_1458c4a12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c493e FUN_1458c493e body=68 status=ok
// SIG undefined FUN_1458c493e(void)

void FUN_1458c493e(undefined8 *param_1)

{
  FUN_1458c4982(param_1 + 7);
  *param_1 = &PTR_LAB_14be7fec8;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c4982 FUN_1458c4982 body=53 status=ok
// SIG undefined FUN_1458c4982(void)

void FUN_1458c4982(longlong *param_1)

{
  FUN_1458c4a6c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c49b8 FUN_1458c49b8 body=90 status=ok
// SIG undefined FUN_1458c49b8(void)

void FUN_1458c49b8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 1458c4a12 FUN_1458c4a12 body=90 status=ok
// SIG undefined FUN_1458c4a12(void)

void FUN_1458c4a12(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 1458c4a6c FUN_1458c4a6c body=90 status=ok
// SIG undefined FUN_1458c4a6c(void)

void FUN_1458c4a6c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 1458c4ac6 FUN_1458c4ac6 body=732 status=ok
// SIG undefined FUN_1458c4ac6(void)

void FUN_1458c4ac6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(longlong *)(param_1 + 0x970) == 0) || (*(longlong *)(param_1 + 0x9e0) == 0)) ||
      (cVar6 = FUN_144729dda(param_1 + 0x9d8), cVar6 == '\0')) ||
     (*(longlong **)(param_1 + 0x9e0) == (longlong *)0x0)) goto LAB_1458c4ce7;
  lVar4 = *param_2;
  if (lVar4 != DAT_14cb8c178) {
    if (((lVar4 == DAT_14cb8c180) || (lVar4 == DAT_14cb8c170)) &&
       (*(longlong *)(param_1 + 0x978) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
    }
    goto LAB_1458c4ce7;
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x50))();
  local_98 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  FUN_14122243a(uVar7,&local_88,*(undefined8 *)(param_1 + 0x970),1);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_78);
  plVar1 = local_80;
  if (local_80 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x978) = local_88;
    plVar9 = *(longlong **)(param_1 + 0x980);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x980) = 0;
LAB_1458c4d38:
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001458c4d6f:
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x978) = local_88;
    plVar9 = *(longlong **)(param_1 + 0x980);
    if (local_80 == plVar9) {
      LOCK();
      plVar9 = local_80 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar9 = plVar1;
        goto joined_r0x0001458c4d6f;
      }
    }
    else {
      *(longlong **)(param_1 + 0x980) = local_80;
      if (plVar9 != (longlong *)0x0) goto LAB_1458c4d38;
    }
  }
  if (local_88 != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar5 = local_78;
    uStack_70 = CONCAT44(uStack_70._4_4_,3);
    *local_78 = &PTR_LAB_14b3e9c20;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_78[2] = lVar8;
    *local_78 = &PTR_FUN_14b42e1f0;
    local_78[3] = 0;
    FUN_14485c47a(local_78 + 3,param_1);
    puVar5[4] = param_1;
    FUN_140ebcfd8(local_88 + 0x18,local_90,&local_78);
    FUN_1449db362(&local_78);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
LAB_1458c4ce7:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c4db8 FUN_1458c4db8 body=107 status=ok
// SIG undefined FUN_1458c4db8(void)

void FUN_1458c4db8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  FUN_1412e98ba(param_1 + 0xe0,&local_1c);
  *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x29 + (longlong)local_1c * 0x38) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1412e97a0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c4e24 FUN_1458c4e24 body=428 status=ok
// SIG undefined FUN_1458c4e24(void)

longlong * FUN_1458c4e24(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_1458c4f04:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b3fba10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1458c4f04;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b3fba10;
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



// FUNCTION 1458c4fd0 FUN_1458c4fd0 body=213 status=ok
// SIG undefined FUN_1458c4fd0(void)

void FUN_1458c4fd0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_30 = param_2;
  iVar5 = FUN_1412e9b20((longlong *)(param_1 + 0xe0),uVar4 >> 0x10 ^ uVar4);
  if ((iVar5 != -1) && (lVar6 = (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0xe0), lVar6 != 0))
  {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    plVar3 = *(longlong **)(lVar6 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar6 + 0x20) = 0;
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
    *(undefined1 *)(lVar6 + 0x29) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c5300 FUN_1458c5300 body=114 status=ok
// SIG undefined FUN_1458c5300(void)

void FUN_1458c5300(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1458c5372 FUN_1458c5372 body=358 status=ok
// SIG undefined FUN_1458c5372(void)

void FUN_1458c5372(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140212f8e(&local_40);
  iVar1 = FUN_1458c553e(&local_40);
  local_50 = 0;
  local_58 = 0;
  FUN_1458c54da(&local_48,0,
                ((param_2 +
                 (((uint)(param_2 / 6 + (param_2 >> 0x1f)) >> 2) - (param_2 >> 0x1f)) * -0x18) -
                (uint)(iVar1 - 3U < 9)) + 6,param_3 % 0x3c);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(((double)((local_40 - local_48) % 864000000000) / 864000000000.0 +
                 (double)(int)((local_40 - local_48) / 864000000000) + 1721425.5 + -2400000.5) -
                ((double)(*param_1 % 864000000000) / 864000000000.0 +
                 (double)(int)(*param_1 / 864000000000) + 1721425.5 + -2400000.5));
}



// FUNCTION 1458c54da FUN_1458c54da body=99 status=ok
// SIG undefined FUN_1458c54da(void)

void FUN_1458c54da(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  *param_1 = (longlong)(param_6 / 100) +
             (longlong)param_5 * 10000000 +
             (longlong)param_4 * 600000000 +
             (longlong)param_3 * 36000000000 + (longlong)param_2 * 864000000000;
  return;
}



// FUNCTION 1458c553e FUN_1458c553e body=73 status=ok
// SIG undefined FUN_1458c553e(void)

undefined4 FUN_1458c553e(undefined8 param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14021332c(param_1,local_14,&local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c5588 FUN_1458c5588 body=40 status=ok
// SIG undefined FUN_1458c5588(void)

undefined8 FUN_1458c5588(undefined8 param_1,int param_2)

{
  FUN_1458c55b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c55b0 FUN_1458c55b0 body=119 status=ok
// SIG undefined FUN_1458c55b0(void)

void FUN_1458c55b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4a0970;
  param_1[0x1f] = &PTR_FUN_14a4a0ce0;
  FUN_1458c5656(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5627(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c56ac(param_1);
  return;
}



// FUNCTION 1458c5627 FUN_1458c5627 body=47 status=ok
// SIG undefined FUN_1458c5627(void)

void FUN_1458c5627(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1404dbc70(param_1);
      param_1 = param_1 + 0x128;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c5656 FUN_1458c5656 body=86 status=ok
// SIG undefined FUN_1458c5656(void)

void FUN_1458c5656(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x338;
    do {
      FUN_1404dbc70(param_1);
      FUN_1404dbc70(param_1 + -0x110);
      FUN_1404dbc70(param_1 + -0x220);
      FUN_1404dbc70(param_1 + -0x330);
      param_1 = param_1 + 0x458;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c56ac FUN_1458c56ac body=288 status=ok
// SIG undefined FUN_1458c56ac(void)

void FUN_1458c56ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4be360;
  param_1[0x1f] = &PTR_FUN_14a4be6d0;
  FUN_1458c57cc(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c58dd(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5893(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5855(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c57f7(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5826(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 1458c57cc FUN_1458c57cc body=43 status=ok
// SIG undefined FUN_1458c57cc(void)

void FUN_1458c57cc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1475b1918(param_1);
    param_1 = param_1 + 0x998;
  }
  return;
}



// FUNCTION 1458c57f7 FUN_1458c57f7 body=47 status=ok
// SIG undefined FUN_1458c57f7(void)

void FUN_1458c57f7(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1404dbc70(param_1);
      param_1 = param_1 + 0x118;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c5826 FUN_1458c5826 body=47 status=ok
// SIG undefined FUN_1458c5826(void)

void FUN_1458c5826(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140bb7e7c(param_1);
      param_1 = param_1 + 0x110;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c5855 FUN_1458c5855 body=62 status=ok
// SIG undefined FUN_1458c5855(void)

void FUN_1458c5855(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x118;
    do {
      FUN_1404dbc70(param_1);
      FUN_1404dbc70(param_1 + -0x110);
      param_1 = param_1 + 0x228;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c5893 FUN_1458c5893 body=74 status=ok
// SIG undefined FUN_1458c5893(void)

void FUN_1458c5893(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x228;
    do {
      FUN_1404dbc70(param_1);
      FUN_1404dbc70(param_1 + -0x110);
      FUN_1404dbc70(param_1 + -0x220);
      param_1 = param_1 + 0x338;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c58dd FUN_1458c58dd body=86 status=ok
// SIG undefined FUN_1458c58dd(void)

void FUN_1458c58dd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x338;
    do {
      FUN_1404dbc70(param_1);
      FUN_1404dbc70(param_1 + -0x110);
      FUN_1404dbc70(param_1 + -0x220);
      FUN_1404dbc70(param_1 + -0x330);
      param_1 = param_1 + 0x448;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458c5934 FUN_1458c5934 body=132 status=ok
// SIG undefined FUN_1458c5934(void)

void FUN_1458c5934(longlong param_1,int param_2)

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



// FUNCTION 1458c59ba FUN_1458c59ba body=501 status=ok
// SIG undefined FUN_1458c59ba(void)

void FUN_1458c59ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"OwnerPC",1);
  uVar1 = FUN_1412eb6ec();
  FUN_1412eb6ec();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DebugActor",1);
  uVar1 = FUN_1412eb6ec();
  FUN_1412eb6ec();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VisLogSync",1);
  uVar1 = FUN_1412eb6ec();
  FUN_1412eb6ec();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsEnabled",1);
  uVar1 = FUN_1412eb6ec();
  FUN_1412eb6ec();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ReplicatedData",1);
  uVar1 = FUN_1412eb6ec();
  FUN_1412eb6ec();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_60,L"bHidden",1);
  uVar1 = FUN_144a6c4d8();
  uVar2 = FUN_1412eb6ec();
  FUN_145872512(uVar2,uVar1,local_60,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c5bb0 FUN_1458c5bb0 body=57 status=ok
// SIG undefined FUN_1458c5bb0(void)

void FUN_1458c5bb0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144a8b586();
  uVar1 = FUN_1412eb7d2(uVar2);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = (ulonglong)uVar1;
  *(undefined1 *)(param_1 + 0x28) = 2;
  return;
}



// FUNCTION 1458c5bea FUN_1458c5bea body=40 status=ok
// SIG undefined FUN_1458c5bea(void)

void FUN_1458c5bea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001458c5c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1458c5c1a FUN_1458c5c1a body=21 status=ok
// SIG undefined FUN_1458c5c1a(void)

undefined8 FUN_1458c5c1a(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  return 1;
}



// FUNCTION 1458c5c31 FUN_1458c5c31 body=56 status=ok
// SIG undefined FUN_1458c5c31(void)

void FUN_1458c5c31(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458c5c6a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad350e0;
  puVar1[5] = 0x412000003f800000;
  *(undefined4 *)(puVar1 + 6) = 0x3f800000;
  return;
}



// FUNCTION 1458c5c6a FUN_1458c5c6a body=32 status=ok
// SIG undefined FUN_1458c5c6a(void)

undefined8 * FUN_1458c5c6a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad14910;
  return param_1;
}



// FUNCTION 1458c5c96 FUN_1458c5c96 body=55 status=ok
// SIG undefined FUN_1458c5c96(void)

undefined8 * FUN_1458c5c96(undefined8 *param_1)

{
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b18ec60;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[8] = DAT_14cb82320;
  return param_1;
}



// FUNCTION 1458c5cfa FUN_1458c5cfa body=21 status=ok
// SIG undefined FUN_1458c5cfa(void)

undefined8 FUN_1458c5cfa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458c5d10 FUN_1458c5d10 body=111 status=ok
// SIG undefined FUN_1458c5d10(void)

void FUN_1458c5d10(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x5b) = 0;
  if (*param_1 != 0) {
    cVar1 = FUN_144a7e912(param_1 + 0x16);
    plVar3 = param_1 + 0x23;
    if (cVar1 != '\0') {
      plVar3 = param_1 + 0x16;
    }
    puVar2 = (undefined8 *)FUN_1412c3498(plVar3);
    FUN_14136a5f7(param_1 + 0x6b,*puVar2,puVar2);
    FUN_141123ce0(param_1 + 0x6f,*puVar2,puVar2);
    return;
  }
  return;
}



// FUNCTION 1458c5d84 FUN_1458c5d84 body=1357 status=ok
// SIG undefined FUN_1458c5d84(void)

undefined8 * FUN_1458c5d84(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e11f9c();
  FUN_1400b22c2(local_68,"FEAB692FBBDD4113857BCD32C2B644BC");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e730;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"71000000000000000000000000000035");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e760;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"D28F2FDCCAC4499B8F8E87728235A46C");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e770;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"49D2EF76967340EFB22F2F398E4DDDDD");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e780;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"8A37C45D24F2423CBE5F8F371DE33575");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e790;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"57EE8EA0152B492DB17F8B8D32D923FE");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7a0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"5812036309394F58AFDBB84B1B7BC36D");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7c0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"98F7D79A5811013825E75BBCC41ED3E9");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7d0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"4E595C2AC5E947D6BA9ABC874353E5BC");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7b0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"156678D4F9084D7CAE98FADC6AB93573");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e740;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"00B8207248CC44B88F7DEC8F328A5D8B");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e750;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"80B255B52A0BB2DFB621304F52C68B29");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7e0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c62d2 FUN_1458c62d2 body=42 status=ok
// SIG undefined FUN_1458c62d2(void)

void FUN_1458c62d2(longlong param_1)

{
  FUN_1458c62fc();
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1458c6388(param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1458c62fc FUN_1458c62fc body=85 status=ok
// SIG undefined FUN_1458c62fc(void)

void FUN_1458c62fc(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_145b08b9a();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_1458c6351(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_1488f0b0a(param_1 + 0x40);
    return;
  }
  return;
}



// FUNCTION 1458c6351 FUN_1458c6351 body=54 status=ok
// SIG undefined FUN_1458c6351(void)

void FUN_1458c6351(longlong param_1,int param_2)

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



// FUNCTION 1458c6388 FUN_1458c6388 body=122 status=ok
// SIG undefined FUN_1458c6388(void)

void FUN_1458c6388(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (param_1[10] != 0)) {
    plVar1 = param_1 + 10;
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,plVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*plVar1);
    }
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 1458c6402 FUN_1458c6402 body=90 status=ok
// SIG undefined FUN_1458c6402(void)

void FUN_1458c6402(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1401c3ca6();
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1458c645c(param_1 + 0x110,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1458c645c FUN_1458c645c body=74 status=ok
// SIG undefined FUN_1458c645c(void)

void FUN_1458c645c(longlong param_1,undefined8 param_2)

{
  FUN_1458c64da(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_1458c64a6(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 1458c64a6 FUN_1458c64a6 body=52 status=ok
// SIG undefined FUN_1458c64a6(void)

void FUN_1458c64a6(longlong param_1,longlong param_2)

{
  FUN_1458c64da();
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 1458c64da FUN_1458c64da body=87 status=ok
// SIG undefined FUN_1458c64da(void)

void FUN_1458c64da(longlong param_1)

{
  char cVar1;
  
  FUN_1412d6726();
  cVar1 = FUN_1403ae288(param_1 + 0x70);
  if (cVar1 != '\0') {
    FUN_140609c6a(param_1 + 0x70);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(longlong *)(param_1 + 0x58) != 0) || (*(int *)(param_1 + 0x60) != 10)) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 10;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1458c6532 FUN_1458c6532 body=64 status=ok
// SIG undefined FUN_1458c6532(void)

void FUN_1458c6532(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1d0);
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14ac6f9c0;
  *(undefined2 *)(param_2 + 0x39) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1ca) = 1;
  return;
}



// FUNCTION 1458c6572 FUN_1458c6572 body=104 status=ok
// SIG undefined FUN_1458c6572(void)

undefined8 FUN_1458c6572(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1458c65dc(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c65dc FUN_1458c65dc body=22 status=ok
// SIG undefined FUN_1458c65dc(void)

undefined8 FUN_1458c65dc(int *param_1)

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
  
  plVar4 = DAT_14cb8b898;
  if (DAT_14cb8b898 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8b898 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8b898 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8b898[0x3a] <= *(int *)((longlong)DAT_14cb8b898 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8b898 + 0x300))(DAT_14cb8b898);
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



// FUNCTION 1458c65f2 FUN_1458c65f2 body=168 status=ok
// SIG undefined FUN_1458c65f2(void)

void FUN_1458c65f2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = DAT_14caa8578;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0x3e4ccccd;
  FUN_1446f470e(&local_28,L"AnimNotify",1);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined2 *)(param_1 + 0x40);
  local_2e = *(undefined1 *)(param_1 + 0x42);
  local_2c = *(undefined4 *)(param_1 + 0x44);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  FUN_1458c669c(&local_38,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c669c FUN_1458c669c body=134 status=ok
// SIG undefined FUN_1458c669c(void)

void FUN_1458c669c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = FUN_140746dd0();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar3 != 0) {
        local_20 = &local_30;
        local_28 = FUN_142b512e2;
        local_30 = param_1;
        FUN_1408d6bd2(lVar3,*param_1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c6724 FUN_1458c6724 body=93 status=ok
// SIG undefined FUN_1458c6724(void)

void * FUN_1458c6724(undefined8 param_1,longlong param_2)

{
  char cVar1;
  void *_Dst;
  
  cVar1 = FUN_1458c67f8(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2),1,1);
  if (cVar1 == '\0') {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14001cc68(0x158);
    memset(_Dst,0,0x158);
    FUN_1458c6782(_Dst);
  }
  return _Dst;
}



// FUNCTION 1458c6782 FUN_1458c6782 body=118 status=ok
// SIG undefined FUN_1458c6782(void)

undefined8 * FUN_1458c6782(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2a0410;
  param_1[1] = 0;
  FUN_141222082(param_1 + 2,0);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 1458c67f8 FUN_1458c67f8 body=497 status=ok
// SIG undefined FUN_1458c67f8(void)

ulonglong FUN_1458c67f8(ulonglong param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined4 *puVar7;
  bool bVar8;
  undefined7 uVar6;
  
  cVar4 = DAT_14ca84e0a;
  param_1 = param_1 & 0xffff;
  if ((param_3 == '\0') || (DAT_14c760e34 != 0)) {
    bVar3 = (byte)((uint)(&DAT_14ca814c8)[param_1 * 0xf] >> 0x1d) &
            *(byte *)((longlong)&DAT_14ca814d8 + param_1 * 0x3c + 3) >> 4 &
            (byte)((*(uint *)(&DAT_14ca814cc + param_1 * 0x3c) & 8) >> 3);
  }
  else {
    bVar3 = 0;
  }
  puVar7 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar7 = DAT_14ca96af8;
  }
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (((uint)puVar7[param_1 >> 5] >> ((uint)param_1 & 0x1f) & 1) != 0) {
    uVar5 = CONCAT71(uVar6,(int)(&DAT_14ca814b8)[param_1 * 0xf] < 3);
  }
  if (bVar3 != 0) {
    if (param_2 == '\0') goto LAB_1458c690d;
    iVar1 = (**(code **)(*DAT_14ca83900 + 0x28))();
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca96ee0) {
      FUN_144b3d300(&DAT_14ca96ee0);
      if (DAT_14ca96ee0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca96ed8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.RequireDX12",1);
        _Init_thread_footer(&DAT_14ca96ee0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca96ee8) {
      FUN_144b3d300(&DAT_14ca96ee8);
      if (DAT_14ca96ee8 == -1) {
        iVar2 = 1;
        if (DAT_14ca96ed8 != (longlong *)0x0) {
          iVar2 = (**(code **)(*DAT_14ca96ed8 + 0xb0))();
        }
        DAT_14ca96ee4 = iVar2;
        _Init_thread_footer(&DAT_14ca96ee8);
      }
    }
    if ((((cVar4 != '\0') && (DAT_14ca96ee4 != 0)) &&
        (bVar8 = iVar1 != 2, cVar4 = bVar8, iVar1 == 3)) &&
       ((DAT_14ca96ee4 == 1 && (cVar4 = '\0', DAT_14ca84e0b != '\0')))) {
      cVar4 = bVar8;
    }
    if (cVar4 != '\0') goto LAB_1458c690d;
  }
  uVar5 = 0;
LAB_1458c690d:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1458c69ea FUN_1458c69ea body=55 status=ok
// SIG undefined FUN_1458c69ea(void)

void FUN_1458c69ea(longlong *param_1)

{
  FUN_1458c6a22(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c6a22 FUN_1458c6a22 body=121 status=ok
// SIG undefined FUN_1458c6a22(void)

void FUN_1458c6a22(longlong param_1,int param_2)

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



// FUNCTION 1458c6aa8 FUN_1458c6aa8 body=237 status=ok
// SIG undefined FUN_1458c6aa8(void)

undefined8 * FUN_1458c6aa8(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cb820;
  *(undefined4 *)(param_1 + 7) = 4;
  lVar2 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0x78);
    local_20 = FUN_145990b9a();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_14122166c(&local_20,uVar1);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14588a226();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c6b96 FUN_1458c6b96 body=244 status=ok
// SIG undefined FUN_1458c6b96(void)

undefined8
FUN_1458c6b96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_149e62de0;
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
  *local_40 = &PTR_FUN_14a8ea8b0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1458c6c8c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c6c8c FUN_1458c6c8c body=216 status=ok
// SIG undefined FUN_1458c6c8c(void)

undefined8 * FUN_1458c6c8c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458c6d7e FUN_1458c6d7e body=573 status=ok
// SIG undefined FUN_1458c6d7e(void)

undefined8 * FUN_1458c6d7e(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b60c1d0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  FUN_14112fbd2(param_1 + 0x3b);
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  FUN_1412ed500(param_1 + 0x8a);
  *(undefined2 *)(param_1 + 0x9d) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x41200000;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0x9f] = 0;
  *(undefined2 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0x100;
  FUN_140785382(param_1 + 0xa7,10);
  *(undefined2 *)(param_1 + 0xae) = 0;
  *(undefined1 *)((longlong)param_1 + 0x572) = 0;
  param_1[0xaf] = 0;
  *(undefined2 *)(param_1 + 0xb3) = 4;
  *(undefined4 *)(param_1 + 0xb0) = 0x42340000;
  *(undefined1 *)(param_1 + 0xb4) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0xb5) = cVar1;
  param_1[0xb6] = 0;
  *(undefined2 *)(param_1 + 0xba) = 4;
  *(undefined4 *)(param_1 + 0xb7) = 0x42b40000;
  *(undefined1 *)(param_1 + 0xbb) = 3;
  *(char *)(param_1 + 0xbc) = cVar1;
  *(undefined2 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = 0;
  *(undefined2 *)(param_1 + 0xc2) = 4;
  *(undefined4 *)(param_1 + 0xbf) = 1;
  *(undefined1 *)(param_1 + 0xc3) = 2;
  *(byte *)(param_1 + 0xc4) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  FUN_140440628(param_1 + 0xc6,&DAT_14cbcac38,0);
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  *(undefined2 *)(param_1 + 0xd8) = 0x100;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  FUN_140440628(local_68,&DAT_14cbcac30,0);
  FUN_1403719a4(param_1 + 0x33,local_68);
  FUN_144a2da94(local_68);
  FUN_144983130(param_1 + 0x9f,param_1 + 0x33);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c6fc2 FUN_1458c6fc2 body=221 status=ok
// SIG undefined FUN_1458c6fc2(void)

longlong FUN_1458c6fc2(void)

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
  if (DAT_14cb204c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ef6313;
    local_40 = FUN_14642ec09;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/AIModule",L"NavLocalGridManager",&DAT_14cb204c8,FUN_14642ebe2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb204c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c70a0 FUN_1458c70a0 body=77 status=ok
// SIG undefined FUN_1458c70a0(void)

undefined8 * FUN_1458c70a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f81030;
  if (param_1[0xc] != 0) {
    FUN_140113f3a();
    param_1[0xc] = 0;
  }
  FUN_1458c70ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c70ee FUN_1458c70ee body=74 status=ok
// SIG undefined FUN_1458c70ee(void)

void FUN_1458c70ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f833a0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c7138(param_1 + 5,0);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458c7138 FUN_1458c7138 body=115 status=ok
// SIG undefined FUN_1458c7138(void)

void FUN_1458c7138(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        thunk_FUN_1400020a8(lVar2,0x10000);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1458c71ac FUN_1458c71ac body=9 status=ok
// SIG undefined FUN_1458c71ac(void)

void FUN_1458c71ac(longlong param_1)

{
  FUN_1458c71b6(param_1 + 0x10);
  return;
}



// FUNCTION 1458c71b6 FUN_1458c71b6 body=101 status=ok
// SIG undefined FUN_1458c71b6(void)

void FUN_1458c71b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2427f0;
  FUN_1458c721b(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1458c721b FUN_1458c721b body=73 status=ok
// SIG undefined FUN_1458c721b(void)

void FUN_1458c721b(longlong param_1,int param_2)

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



// FUNCTION 1458c7264 FUN_1458c7264 body=38 status=ok
// SIG undefined FUN_1458c7264(void)

undefined8 FUN_1458c7264(undefined8 param_1,int param_2)

{
  FUN_1458c728a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c728a FUN_1458c728a body=73 status=ok
// SIG undefined FUN_1458c728a(void)

void FUN_1458c728a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  FUN_14121ab67(*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x300));
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_1400020a8();
  }
  FUN_1410a5cb2(param_1);
  return;
}



// FUNCTION 1458c72e2 FUN_1458c72e2 body=45 status=ok
// SIG undefined FUN_1458c72e2(void)

undefined8 FUN_1458c72e2(undefined8 param_1,int param_2)

{
  FUN_1458c7310();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1458c7310 FUN_1458c7310 body=75 status=ok
// SIG undefined FUN_1458c7310(void)

void FUN_1458c7310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0ef120;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c735c(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458c735c FUN_1458c735c body=55 status=ok
// SIG undefined FUN_1458c735c(void)

void FUN_1458c735c(longlong *param_1)

{
  FUN_1458c7394(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c7394 FUN_1458c7394 body=121 status=ok
// SIG undefined FUN_1458c7394(void)

void FUN_1458c7394(longlong param_1,int param_2)

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



// FUNCTION 1458c740e FUN_1458c740e body=254 status=ok
// SIG undefined FUN_1458c740e(void)

undefined8
FUN_1458c740e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9e1b50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c750e FUN_1458c750e body=64 status=ok
// SIG undefined FUN_1458c750e(void)

void FUN_1458c750e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1458c754e(*param_2,param_1);
  return;
}



// FUNCTION 1458c754e FUN_1458c754e body=111 status=ok
// SIG undefined FUN_1458c754e(void)

undefined8 * FUN_1458c754e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b528c20;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1458c75be(param_1 + 1,param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b528bb0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  return param_1;
}



// FUNCTION 1458c75be FUN_1458c75be body=124 status=ok
// SIG undefined FUN_1458c75be(void)

void FUN_1458c75be(longlong *param_1,longlong *param_2)

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



// FUNCTION 1458c763c FUN_1458c763c body=244 status=ok
// SIG undefined FUN_1458c763c(void)

undefined8
FUN_1458c763c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14b42c4c0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c7732 FUN_1458c7732 body=244 status=ok
// SIG undefined FUN_1458c7732(void)

undefined8 FUN_1458c7732(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b42c5a0;
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
  *local_38 = &PTR_FUN_14b42c530;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14105379e;
  FUN_1458c7828(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c7828 FUN_1458c7828 body=216 status=ok
// SIG undefined FUN_1458c7828(void)

undefined8 * FUN_1458c7828(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458c790e FUN_1458c790e body=24 status=ok
// SIG undefined FUN_1458c790e(void)

bool FUN_1458c790e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1458c7926 FUN_1458c7926 body=244 status=ok
// SIG undefined FUN_1458c7926(void)

undefined8 FUN_1458c7926(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b42c6f0;
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
  *local_38 = &PTR_FUN_14b42c680;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_141239110;
  FUN_1458c7a1c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c7a1c FUN_1458c7a1c body=216 status=ok
// SIG undefined FUN_1458c7a1c(void)

undefined8 * FUN_1458c7a1c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458c7b02 FUN_1458c7b02 body=326 status=ok
// SIG undefined FUN_1458c7b02(void)

ulonglong FUN_1458c7b02(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  longlong local_180;
  longlong local_178;
  undefined4 local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_158 [30];
  byte local_64;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(longlong *)(param_1[0xf] + 0x88) != 0) &&
     (plVar1 = *(longlong **)(param_1[0xf] + 0x90), plVar1 != (longlong *)0x0)) {
    local_160 = (**(code **)(*plVar1 + 8))();
    if (local_160 != 0) {
      plVar1 = (longlong *)param_1[5];
      uVar3 = FUN_144a79cc8(local_160);
      cVar2 = (**(code **)(*plVar1 + 0x388))(plVar1,uVar3);
      if (cVar2 != '\0') {
        local_170 = 0x19100;
        local_168 = 0;
        FUN_144a79b68(&local_180,*(undefined8 *)(param_1[0xf] + 0xa8));
        if (local_180 != 0) {
          local_168 = 0;
        }
        local_178 = local_180;
        FUN_1449daf8c(local_158,param_1,0);
        local_64 = local_64 | 0x10;
        FUN_1458c7c49(local_158,&local_178);
        (**(code **)(local_158[0] + 0x150))(local_158,&local_160);
        (**(code **)(*param_1 + 0x308))(param_1,local_188,local_158,0);
        uVar4 = CONCAT71((int7)((ulonglong)&local_178 >> 8),1);
        FUN_14097d6da(param_1,1);
        FUN_1449daebe(local_158);
        goto LAB_1458c7c22;
      }
    }
  }
  uVar4 = 0;
LAB_1458c7c22:
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c7c49 FUN_1458c7c49 body=148 status=ok
// SIG undefined FUN_1458c7c49(void)

void FUN_1458c7c49(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_28 = *param_2;
    (**(code **)(*param_1 + 0x160))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1,&local_28);
    if (*param_2 != local_28) {
      param_2[2] = 0;
    }
    *param_2 = local_28;
  }
  FUN_14041e882(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c7cde FUN_1458c7cde body=379 status=ok
// SIG undefined FUN_1458c7cde(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1458c7cde(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = param_3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = -1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  FUN_1411321ea();
  param_1[1] = *param_2;
  uVar4 = FUN_14479d2ce(param_2);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar2 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
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
  local_58[2] = lVar5;
  *local_58 = &PTR_FUN_14b42da80;
  local_58[3] = 0;
  FUN_14485c47a(local_58 + 3,uVar4);
  puVar2[4] = param_1;
  plVar1 = local_48 + 1;
  local_48[1] = 0;
  local_38 = 0;
  FUN_14009d848(plVar1,&local_58);
  FUN_1448b6402(param_3 + 8,local_48,plVar1);
  FUN_1449db362(plVar1);
  param_1[2] = local_48[0];
  FUN_1449db362(&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c7e72 FUN_1458c7e72 body=102 status=ok
// SIG undefined FUN_1458c7e72(void)

ulonglong FUN_1458c7e72(longlong param_1)

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
LAB_1458c7ebb:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458c7ebb;
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



// FUNCTION 1458c7ed8 FUN_1458c7ed8 body=73 status=ok
// SIG undefined FUN_1458c7ed8(void)

void FUN_1458c7ed8(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001458c7f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 1458c7f24 FUN_1458c7f24 body=152 status=ok
// SIG undefined FUN_1458c7f24(void)

undefined8 FUN_1458c7f24(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1d8) != *(int *)(lVar2 + 0x204))) {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar3 = lVar2 + 0x208;
    if (*(longlong *)(lVar2 + 0x210) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x210);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x218) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(lVar2 + 0x1d0);
      iVar5 = iVar4;
      while (*(uint *)(lVar2 + (longlong)iVar5 * 0x20) != uVar1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar2 + 0x18);
        if (iVar5 == -1) {
          return 0;
        }
      }
      do {
        lVar3 = lVar2 + (longlong)iVar4 * 0x20;
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == uVar1) goto LAB_1458c7f91;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
      lVar3 = 0;
LAB_1458c7f91:
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 8) >> 8),
                      *(undefined1 *)(*(longlong *)(lVar3 + 8) + 7));
    }
  }
  return 0;
}



// FUNCTION 1458c7fbc FUN_1458c7fbc body=73 status=ok
// SIG undefined FUN_1458c7fbc(void)

void FUN_1458c7fbc(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001458c7ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 1458c8008 FUN_1458c8008 body=80 status=ok
// SIG undefined FUN_1458c8008(void)

void FUN_1458c8008(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x58))(param_1,0x17 < *(int *)((longlong)param_1 + 0x44));
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001458c8051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 1458c805a FUN_1458c805a body=55 status=ok
// SIG undefined FUN_1458c805a(void)

void FUN_1458c805a(longlong *param_1)

{
  FUN_1458c8092(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c8092 FUN_1458c8092 body=123 status=ok
// SIG undefined FUN_1458c8092(void)

void FUN_1458c8092(longlong param_1,int param_2)

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



// FUNCTION 1458c810e FUN_1458c810e body=42 status=ok
// SIG undefined FUN_1458c810e(void)

void FUN_1458c810e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1458c8138(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



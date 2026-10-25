// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ab107c FUN_145ab107c body=162 status=ok
// SIG undefined FUN_145ab107c(void)

void FUN_145ab107c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ab10bb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ab10bb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ab10bb:
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
                    /* WARNING: Could not recover jumptable at 0x000145ab111a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ab111e FUN_145ab111e body=176 status=ok
// SIG undefined FUN_145ab111e(void)

undefined8 * FUN_145ab111e(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR__purecall_149ef0700;
  param_1[1] = param_2;
  FUN_1446ddc76(param_1 + 2,"Children",1);
  *param_1 = &PTR_LAB_149ef0620;
  param_1[3] = &PTR_FUN_149edb640;
  param_1[4] = param_1;
  param_1[5] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  param_1[6] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = &PTR_LAB_149ef0620;
  param_1[3] = &PTR_FUN_149ef0668;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140a5808e(param_1 + 7,param_2);
  param_1[9] = 0;
  *param_1 = &PTR_LAB_149ef05d0;
  param_1[3] = &PTR_FUN_149ef0618;
  return param_1;
}



// FUNCTION 145ab11ce FUN_145ab11ce body=401 status=ok
// SIG undefined FUN_145ab11ce(void)

longlong *
FUN_145ab11ce(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x218,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14aa99340;
  plVar1 = plVar4 + 2;
  FUN_145ab1402(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145ab1360(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ab1284;
    param_1[1] = 0;
LAB_145ab12f1:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145ab1284;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145ab1284;
      goto LAB_145ab12f1;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ab1284;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145ab1284:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 0x208;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab1360 FUN_145ab1360 body=162 status=ok
// SIG undefined FUN_145ab1360(void)

void FUN_145ab1360(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ab139f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ab139f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ab139f:
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
                    /* WARNING: Could not recover jumptable at 0x000145ab13fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ab1402 FUN_145ab1402 body=169 status=ok
// SIG undefined FUN_145ab1402(void)

undefined8 * FUN_145ab1402(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f1bc50;
  FUN_1446f470e(&local_20,L"Children",1);
  param_1[0x3d] = param_1;
  param_1[0x3e] = local_20;
  param_1[0x3c] = &PTR_LAB_149f1e0c0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab14ac FUN_145ab14ac body=428 status=ok
// SIG undefined FUN_145ab14ac(void)

longlong * FUN_145ab14ac(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145ab158c:
    *puVar5 = &PTR_LAB_149f05210;
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
    *puVar5 = &PTR_FUN_14aa992d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ab158c;
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
    *puVar5 = &PTR_LAB_149f05210;
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
    *puVar5 = &PTR_FUN_14aa992d0;
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



// FUNCTION 145ab1658 FUN_145ab1658 body=428 status=ok
// SIG undefined FUN_145ab1658(void)

longlong * FUN_145ab1658(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145ab1738:
    *puVar5 = &PTR_LAB_149f201b0;
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
    *puVar5 = &PTR_FUN_14aa993a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ab1738;
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
    *puVar5 = &PTR_LAB_149f201b0;
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
    *puVar5 = &PTR_FUN_14aa993a0;
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



// FUNCTION 145ab1804 FUN_145ab1804 body=7124 status=ok
// SIG undefined FUN_145ab1804(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145ab1804(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStack_1398 [32];
  undefined1 *local_1378;
  undefined8 *local_1368;
  undefined8 local_1360;
  undefined8 *local_1358;
  longlong local_1350;
  undefined8 local_1348;
  undefined8 local_1340;
  longlong *local_1338;
  undefined1 local_1329;
  undefined1 local_1328 [8];
  longlong *local_1320;
  undefined1 local_1309;
  undefined8 local_1308;
  longlong *local_1300;
  undefined1 local_12e9;
  undefined1 local_12e8 [8];
  longlong *local_12e0;
  undefined1 local_12c9;
  undefined1 local_12c8 [8];
  longlong *local_12c0;
  undefined1 local_12a9;
  undefined1 local_12a8 [8];
  longlong *local_12a0;
  undefined8 local_1290;
  longlong *local_1288;
  undefined8 local_1280;
  longlong *local_1278;
  undefined8 local_1270;
  longlong *local_1268;
  undefined2 local_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  longlong *local_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined1 local_1228;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined2 local_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  longlong *local_11f0;
  undefined8 local_11e8;
  longlong *local_11e0;
  undefined8 local_11d8;
  longlong *local_11d0;
  undefined8 local_11c8;
  longlong *local_11c0;
  undefined8 local_11b8;
  longlong *local_11b0;
  undefined8 local_11a8;
  longlong *local_11a0;
  undefined8 local_1198;
  longlong *local_1190;
  undefined8 local_1188;
  longlong *local_1180;
  undefined4 local_1178;
  undefined4 uStack_1174;
  undefined4 uStack_1170;
  undefined4 uStack_116c;
  undefined1 local_1168;
  undefined8 local_1160;
  undefined4 local_1158;
  undefined1 local_1150 [16];
  undefined1 local_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined1 local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined2 local_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined1 local_10e0 [16];
  undefined1 local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined1 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined2 local_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined1 local_1070 [16];
  undefined1 local_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined1 local_1038;
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined2 local_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined1 local_1000 [64];
  undefined4 local_fc0;
  undefined1 local_fbc;
  undefined4 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fa8 [88];
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined1 local_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined1 local_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined4 local_f10;
  undefined1 local_f0c;
  undefined1 local_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined1 local_ef0 [192];
  undefined1 local_e30 [192];
  undefined8 local_d70 [24];
  undefined8 local_cb0;
  longlong *local_ca8;
  undefined2 local_c40;
  undefined1 local_c38 [320];
  longlong *local_af8 [8];
  undefined4 local_ab8;
  undefined1 local_ab4;
  undefined4 local_ab0;
  undefined1 local_aac;
  undefined1 local_a38 [8];
  longlong *local_a30;
  undefined8 local_880;
  longlong *local_878;
  code *local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined1 local_608 [568];
  undefined1 local_3d0;
  undefined1 local_3cf;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined2 local_360;
  undefined1 local_358 [16];
  undefined2 local_348;
  undefined1 local_340 [288];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 local_210;
  undefined1 auStack_208 [8];
  undefined8 local_200;
  undefined8 uStack_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [56];
  undefined1 local_1b0 [256];
  undefined1 local_b0;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x145ab181a;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1398;
  local_1350 = param_2;
  FUN_145ab3d24(&local_3d0);
  local_b0 = 0;
  local_1018 = CONCAT11(1,*(undefined1 *)(param_1 + 0x250));
  local_1010 = 0;
  uStack_1008 = 0;
  local_348 = local_1018;
  FUN_144a450dc(local_340,&local_1010);
  FUN_1449db362(&local_1010);
  local_1048 = 0;
  uStack_1040 = 0;
  local_1038 = 1;
  local_1030 = 0;
  uStack_1028 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (longlong *)CONCAT71(local_1f0._1_7_,1);
  FUN_144a450dc(local_1e8,&local_1030);
  FUN_1449db362(&local_1030);
  local_7c0 = FUN_146aa23e8;
  local_7b8 = 0;
  FUN_145ab3a44(local_608,param_1);
  FUN_144a450dc(local_1b0,local_608);
  FUN_1449db362(local_608);
  local_f10 = 1;
  local_f0c = 1;
  local_f08 = 1;
  local_f00 = 0;
  uStack_ef8 = 0;
  lVar8 = FUN_145ab3468(&local_3d0);
  FUN_1446ddc76(local_d70,"NoBorder",1);
  lVar9 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar9 == 0) {
    lVar9 = DAT_14c96b350;
  }
  uVar10 = FUN_141492734(lVar9,local_d70[0],0,0);
  *(undefined8 *)(lVar8 + 0x1b8) = uVar10;
  FUN_140a53334(local_608);
  local_7c0 = FUN_146aa24a2;
  local_7b8 = 0;
  FUN_145ab3540(local_608,param_1,&local_7c0);
  local_7c0 = (code *)0x149f04f08;
  local_7b8 = 8;
  FUN_1446e940c(local_e30,&local_7c0);
  local_7c0 = (code *)0x149f04f1a;
  local_7b8 = 0xe;
  FUN_1446e940c(local_ef0,&local_7c0);
  FUN_140208bae(local_af8,local_ef0,local_e30,L"Minimize");
  FUN_14023423e(local_1070,local_af8);
  local_1060 = 1;
  local_1058 = 0;
  uStack_1050 = 0;
  uVar10 = FUN_145ab3412(local_608,local_1070);
  local_1378 = local_fa8;
  FUN_140a554b8(&local_7c0,"SImage",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x52);
  FUN_140a52c70(&local_7c0,&local_880,uVar10);
  plVar6 = local_878;
  if (local_878 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_878 + 1) = (int)local_878[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_878 + 1) = (int)local_878[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar8 + 0x1b0);
  *(undefined8 *)(lVar8 + 0x1a8) = local_880;
  *(longlong **)(lVar8 + 0x1b0) = local_878;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar5 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  local_1378 = local_1000;
  FUN_145ab3730(local_a38,"SButton",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x4a);
  FUN_145ab34ca(local_a38,&local_cb0,lVar8);
  plVar5 = local_ca8;
  if (local_ca8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 600) = local_cb0;
    plVar13 = *(longlong **)(param_1 + 0x260);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x260) = 0;
LAB_145ab2c7d:
      LOCK();
      plVar5 = plVar13 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000145ab2fdd:
        if (iVar4 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_ca8 + 1) = (int)local_ca8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 600) = local_cb0;
    plVar13 = *(longlong **)(param_1 + 0x260);
    if (local_ca8 == plVar13) {
      LOCK();
      plVar13 = local_ca8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_ca8)(local_ca8);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar13 = plVar5;
        goto joined_r0x000145ab2fdd;
      }
    }
    else {
      *(longlong **)(param_1 + 0x260) = local_ca8;
      if (plVar13 != (longlong *)0x0) goto LAB_145ab2c7d;
    }
  }
  plVar5 = local_ca8;
  if (local_ca8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_ca8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_ca8)(local_ca8);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_a30;
  if (local_a30 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_a30 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_a30)(local_a30);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = local_878;
  if (local_878 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_878 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_878)(local_878);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_7b4,local_7b8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_af8[0] != (longlong *)0x0) {
    (**(code **)(*local_af8[0] + 0x10))();
  }
  FUN_140a55a86(local_608);
  FUN_145ab35f4(&local_3d0);
  FUN_145ab3d24(&local_3d0);
  local_b0 = 0;
  local_1088 = CONCAT11(1,*(undefined1 *)(param_1 + 0x251));
  local_1080 = 0;
  uStack_1078 = 0;
  local_348 = local_1088;
  FUN_144a450dc(local_340,&local_1080);
  FUN_1449db362(&local_1080);
  local_10b8 = 0;
  uStack_10b0 = 0;
  local_10a8 = 1;
  local_10a0 = 0;
  uStack_1098 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (longlong *)CONCAT71(local_1f0._1_7_,1);
  FUN_144a450dc(local_1e8,&local_10a0);
  FUN_1449db362(&local_10a0);
  local_7c0 = FUN_146aa257c;
  local_7b8 = 0;
  FUN_145ab3a44(local_608,param_1);
  FUN_144a450dc(local_1b0,local_608);
  FUN_1449db362(local_608);
  local_f30 = 1;
  local_f2c = 1;
  local_f28 = 1;
  local_f20 = 0;
  uStack_f18 = 0;
  lVar8 = FUN_145ab3468(&local_3d0);
  FUN_1446ddc76(local_d70,"NoBorder",1);
  lVar9 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar9 == 0) {
    lVar9 = DAT_14c96b350;
  }
  uVar10 = FUN_141492734(lVar9,local_d70[0],0,0);
  *(undefined8 *)(lVar8 + 0x1b8) = uVar10;
  FUN_140a53334(local_608);
  local_7c0 = FUN_146aa26a4;
  local_7b8 = 0;
  FUN_145ab3540(local_608,param_1,&local_7c0);
  local_7c0 = (code *)0x149f04f38;
  local_7b8 = 8;
  FUN_1446e940c(local_e30,&local_7c0);
  local_7c0 = (code *)0x149f04f1a;
  local_7b8 = 0xe;
  FUN_1446e940c(local_ef0,&local_7c0);
  FUN_140208bae(local_af8,local_ef0,local_e30,L"Maximize");
  FUN_14023423e(local_10e0,local_af8);
  local_10d0 = 1;
  local_10c8 = 0;
  uStack_10c0 = 0;
  uVar10 = FUN_145ab3412(local_608,local_10e0);
  local_1378 = local_fa8;
  FUN_140a554b8(&local_7c0,"SImage",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x5f);
  FUN_140a52c70(&local_7c0,&local_880,uVar10);
  plVar6 = local_878;
  if (local_878 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_878 + 1) = (int)local_878[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_878 + 1) = (int)local_878[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar8 + 0x1b0);
  *(undefined8 *)(lVar8 + 0x1a8) = local_880;
  *(longlong **)(lVar8 + 0x1b0) = local_878;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar5 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  local_1378 = local_1000;
  FUN_145ab3730(local_a38,"SButton",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x57);
  FUN_145ab34ca(local_a38,&local_cb0,lVar8);
  plVar5 = local_ca8;
  if (local_ca8 == (longlong *)0x0) {
    local_1358 = (undefined8 *)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x268) = local_cb0;
    plVar13 = *(longlong **)(param_1 + 0x270);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
LAB_145ab2d23:
      local_1358 = (undefined8 *)(param_1 + 0x268);
      LOCK();
      plVar5 = plVar13 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000145ab308d:
        if (iVar4 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_ca8 + 1) = (int)local_ca8[1] + 1;
    UNLOCK();
    local_1358 = (undefined8 *)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x268) = local_cb0;
    plVar13 = *(longlong **)(param_1 + 0x270);
    if (local_ca8 == plVar13) {
      LOCK();
      plVar13 = local_ca8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_ca8)(local_ca8);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar13 = plVar5;
        goto joined_r0x000145ab308d;
      }
    }
    else {
      *(longlong **)(param_1 + 0x270) = local_ca8;
      if (plVar13 != (longlong *)0x0) goto LAB_145ab2d23;
    }
  }
  plVar5 = local_ca8;
  if (local_ca8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_ca8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_ca8)(local_ca8);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_a30;
  if (local_a30 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_a30 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_a30)(local_a30);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = local_878;
  if (local_878 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_878 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_878)(local_878);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_7b4,local_7b8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_1338 = (longlong *)(param_1 + 0x270);
  if (local_af8[0] != (longlong *)0x0) {
    (**(code **)(*local_af8[0] + 0x10))();
  }
  FUN_140a55a86(local_608);
  FUN_145ab35f4(&local_3d0);
  FUN_145ab3d24(&local_3d0);
  local_b0 = 0;
  local_10f8 = CONCAT11(1,*(undefined1 *)(param_1 + 0x252));
  local_10f0 = 0;
  uStack_10e8 = 0;
  local_348 = local_10f8;
  FUN_144a450dc(local_340,&local_10f0);
  FUN_1449db362(&local_10f0);
  local_1128 = 0;
  uStack_1120 = 0;
  local_1118 = 1;
  local_1110 = 0;
  uStack_1108 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (longlong *)CONCAT71(local_1f0._1_7_,1);
  FUN_144a450dc(local_1e8,&local_1110);
  FUN_1449db362(&local_1110);
  local_7c0 = FUN_146aa2812;
  local_7b8 = 0;
  FUN_145ab3a44(local_608,param_1);
  FUN_144a450dc(local_1b0,local_608);
  FUN_1449db362(local_608);
  local_f50 = 1;
  local_f4c = 1;
  local_f48 = 1;
  local_f40 = 0;
  uStack_f38 = 0;
  lVar8 = FUN_145ab3468(&local_3d0);
  FUN_1446ddc76(local_d70,"NoBorder",1);
  lVar9 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar9 == 0) {
    lVar9 = DAT_14c96b350;
  }
  uVar10 = FUN_141492734(lVar9,local_d70[0],0,0);
  *(undefined8 *)(lVar8 + 0x1b8) = uVar10;
  FUN_140a53334(local_608);
  local_7c0 = FUN_146aa28b6;
  local_7b8 = 0;
  FUN_145ab3540(local_608,param_1,&local_7c0);
  local_7c0 = (code *)0x149ef1b16;
  local_7b8 = 5;
  FUN_1446e940c(local_e30,&local_7c0);
  local_7c0 = (code *)0x149f04f1a;
  local_7b8 = 0xe;
  FUN_1446e940c(local_ef0,&local_7c0);
  FUN_140208bae(local_af8,local_ef0,local_e30,L"Close");
  FUN_14023423e(local_1150,local_af8);
  local_1140 = 1;
  local_1138 = 0;
  uStack_1130 = 0;
  uVar10 = FUN_145ab3412(local_608,local_1150);
  local_1378 = local_fa8;
  FUN_140a554b8(&local_7c0,"SImage",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x6c);
  FUN_140a52c70(&local_7c0,&local_880,uVar10);
  plVar6 = local_878;
  if (local_878 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_878 + 1) = (int)local_878[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_878 + 1) = (int)local_878[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar8 + 0x1b0);
  *(undefined8 *)(lVar8 + 0x1a8) = local_880;
  *(longlong **)(lVar8 + 0x1b0) = local_878;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar5 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  local_1378 = local_1000;
  FUN_145ab3730(local_a38,"SButton",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",100);
  FUN_145ab34ca(local_a38,&local_cb0,lVar8);
  plVar5 = local_ca8;
  if (local_ca8 == (longlong *)0x0) {
    local_1368 = (undefined8 *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = local_cb0;
    plVar13 = *(longlong **)(param_1 + 0x280);
    if (plVar13 == (longlong *)0x0) goto LAB_145ab22db;
    *(undefined8 *)(param_1 + 0x280) = 0;
LAB_145ab2dca:
    local_1368 = (undefined8 *)(param_1 + 0x278);
    LOCK();
    plVar5 = plVar13 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145ab22db;
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar3 = (int *)((longlong)plVar13 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar4 = *piVar3;
    UNLOCK();
    plVar5 = plVar13;
  }
  else {
    LOCK();
    *(int *)(local_ca8 + 1) = (int)local_ca8[1] + 1;
    UNLOCK();
    local_1368 = (undefined8 *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = local_cb0;
    plVar13 = *(longlong **)(param_1 + 0x280);
    if (local_ca8 != plVar13) {
      *(longlong **)(param_1 + 0x280) = local_ca8;
      if (plVar13 == (longlong *)0x0) goto LAB_145ab22db;
      goto LAB_145ab2dca;
    }
    LOCK();
    plVar13 = local_ca8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 != 0) goto LAB_145ab22db;
    (**(code **)*local_ca8)(local_ca8);
    LOCK();
    piVar3 = (int *)((longlong)plVar5 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar4 = *piVar3;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_145ab22db:
  if (local_ca8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_ca8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_ca8)(local_ca8);
      LOCK();
      piVar3 = (int *)((longlong)local_ca8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_ca8 + 0x10))(local_ca8);
      }
    }
  }
  if (local_a30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_a30)(local_a30);
      LOCK();
      piVar3 = (int *)((longlong)local_a30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_a30 + 0x10))(local_a30);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_878 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_878 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_878)(local_878);
      LOCK();
      piVar3 = (int *)((longlong)local_878 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_878 + 0x10))(local_878);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_7b4,local_7b8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_af8[0] != (longlong *)0x0) {
    (**(code **)(*local_af8[0] + 0x10))();
  }
  FUN_140a55a86(local_608);
  FUN_145ab35f4(&local_3d0);
  lVar9 = local_1350;
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(local_1350 + 0x1a8);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(local_1350 + 0x1ac);
  local_1168 = *(undefined1 *)(local_1350 + 0x1c0);
  local_1178 = *(undefined4 *)(local_1350 + 0x1b0);
  uStack_1174 = *(undefined4 *)(local_1350 + 0x1b4);
  uStack_1170 = *(undefined4 *)(local_1350 + 0x1b8);
  uStack_116c = *(undefined4 *)(local_1350 + 0x1bc);
  local_1160 = 0;
  local_1158 = 0;
  FUN_140a58be0(&local_1160,local_1350 + 0x1c8);
  local_1360 = FUN_145ab3f6a(param_1 + 0x218,&local_1178);
  FUN_140a504fe(local_608);
  FUN_140a4fdf2(local_fa8,0);
  uVar10 = FUN_145acdaa4(local_fa8,lVar9 + 0x1d8);
  local_1340 = FUN_140a5058c(local_608,uVar10);
  FUN_140a4fdf2(local_1000,0);
  local_fb8 = 1;
  local_fb4 = 1;
  local_fc0 = 3;
  local_fbc = 1;
  FUN_1407679b0(&local_7c0);
  FUN_145aafb3e(&local_880);
  local_1348 = FUN_145aaf900(&local_880);
  FUN_140a5296a(local_a38);
  FUN_140a50426(local_af8);
  local_ab0 = 1;
  local_aac = 1;
  local_ab8 = 3;
  local_ab4 = 1;
  uVar10 = FUN_140a52578(local_af8);
  FUN_140a53a96(&local_3d0);
  local_1210 = CONCAT11(1,DAT_14c96b23c);
  local_1208 = 0;
  uStack_1200 = 0;
  local_360 = local_1210;
  FUN_144a450dc(local_358,&local_1208);
  FUN_1449db362(&local_1208);
  local_1238 = 0;
  uStack_1230 = 0;
  local_1228 = 1;
  local_1220 = 0;
  uStack_1218 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 1;
  FUN_144a450dc(auStack_208,&local_1220);
  FUN_1449db362(&local_1220);
  FUN_140a5296a(&local_cb0);
  local_1260 = CONCAT11(1,DAT_14c96b23c);
  local_1258 = 0;
  uStack_1250 = 0;
  local_c40 = local_1260;
  FUN_144a450dc(local_c38,&local_1258);
  FUN_1449db362(&local_1258);
  FUN_140a50426(local_d70);
  uVar11 = FUN_140a52578(local_d70);
  local_1270 = *(undefined8 *)(param_1 + 600);
  plVar6 = *(longlong **)(param_1 + 0x260);
  if (plVar6 == (longlong *)0x0) {
    local_1268 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_1268 = plVar6;
  }
  uVar11 = FUN_140a4fe8e(uVar11,&local_1270);
  uVar11 = FUN_140a52392(&local_cb0,uVar11);
  FUN_140a50426(local_e30);
  uVar12 = FUN_140a52578(local_e30);
  local_1280 = *local_1358;
  plVar5 = (longlong *)*local_1338;
  if (plVar5 == (longlong *)0x0) {
    local_1278 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_1278 = plVar5;
  }
  uVar12 = FUN_140a4fe8e(uVar12,&local_1280);
  uVar11 = FUN_140a52392(uVar11,uVar12);
  FUN_140a50426(local_ef0);
  uVar12 = FUN_140a52578(local_ef0);
  local_1290 = *local_1368;
  plVar13 = *(longlong **)(param_1 + 0x280);
  if (plVar13 == (longlong *)0x0) {
    local_1288 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_1288 = plVar13;
  }
  uVar12 = FUN_140a4fe8e(uVar12,&local_1290);
  uVar11 = FUN_140a52392(uVar11,uVar12);
  local_1378 = &local_12a9;
  FUN_140a541dc(local_12a8,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x8f);
  FUN_140a50ec6(local_12a8,&local_1248,uVar11);
  plVar7 = local_1f0;
  plVar2 = local_1240;
  if (local_1240 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1240 + 1) = (int)local_1240[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1240 + 1) = (int)local_1240[1] + 1;
    UNLOCK();
  }
  uStack_1f8 = local_1248;
  local_1f0 = local_1240;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_1378 = &local_12c9;
  FUN_140a53d66(local_12c8,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x8a);
  FUN_140a50bf4(local_12c8,&local_11f8,&local_3d0);
  local_11e8 = local_11f8;
  local_11e0 = local_11f0;
  if (local_11f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11f0 + 1) = (int)local_11f0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(uVar10,&local_11e8);
  uVar10 = FUN_140a52392(local_a38,uVar10);
  local_1378 = &local_12e9;
  FUN_140a541dc(local_12e8,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x84);
  FUN_140a50ec6(local_12e8,&local_11d8,uVar10);
  local_11c8 = local_11d8;
  local_11c0 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11d0 + 1) = (int)local_11d0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_145aaf878(local_1348,&local_11c8);
  uVar10 = FUN_145aaf822(&local_7c0,uVar10);
  local_1378 = &local_1309;
  FUN_14076837c(&local_1308,"SVerticalBox",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x80);
  if (local_1300 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1300 + 1) = (int)local_1300[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x288) = local_1308;
  *(longlong **)(param_1 + 0x290) = local_1300;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_14076784c(&local_1308,&local_11b8,uVar10);
  local_11a8 = local_11b8;
  local_11a0 = local_11b0;
  if (local_11b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11b0 + 1) = (int)local_11b0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_1000,&local_11a8);
  uVar10 = FUN_140a5058c(local_1340,uVar10);
  local_1378 = &local_1329;
  FUN_140a536a8(local_1328,"SOverlay",
                ".\\Runtime/Slate/Private/Widgets/Layout/SWindowTitleBarArea.cpp",0x76);
  FUN_140a4ff16(local_1328,&local_1198,uVar10);
  plVar7 = local_1190;
  local_1188 = local_1198;
  local_1180 = local_1190;
  if (local_1190 == (longlong *)0x0) {
    FUN_145ab3cb8(local_1360,&local_1188);
  }
  else {
    LOCK();
    *(int *)(local_1190 + 1) = (int)local_1190[1] + 1;
    UNLOCK();
    FUN_145ab3cb8(local_1360);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if (local_1190 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1190 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1190)(local_1190);
      LOCK();
      piVar3 = (int *)((longlong)local_1190 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1190 + 0x10))(local_1190);
      }
    }
  }
  if (local_1320 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1320 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1320)(local_1320);
      LOCK();
      piVar3 = (int *)((longlong)local_1320 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1320 + 0x10))(local_1320);
      }
    }
  }
  plVar7 = local_11a0;
  if (local_11a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_11a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_11a0)(local_11a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_11b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_11b0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_11b0)(local_11b0);
      LOCK();
      piVar3 = (int *)((longlong)local_11b0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_11b0 + 0x10))(local_11b0);
      }
    }
  }
  if (local_1300 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1300 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1300)(local_1300);
      LOCK();
      piVar3 = (int *)((longlong)local_1300 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1300 + 0x10))(local_1300);
      }
    }
  }
  plVar7 = local_11c0;
  if (local_11c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_11c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_11c0)(local_11c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_11d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar3 = (int *)((longlong)local_11d0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_11d0 + 0x10))(local_11d0);
      }
    }
  }
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_12e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_12e0)(local_12e0);
      LOCK();
      piVar3 = (int *)((longlong)local_12e0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_12e0 + 0x10))(local_12e0);
      }
    }
  }
  plVar7 = local_11e0;
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_11e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_11e0)(local_11e0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_11f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_11f0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_11f0)(local_11f0);
      LOCK();
      piVar3 = (int *)((longlong)local_11f0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_11f0 + 0x10))(local_11f0);
      }
    }
  }
  if (local_12c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_12c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_12c0)(local_12c0);
      LOCK();
      piVar3 = (int *)((longlong)local_12c0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_12c0 + 0x10))(local_12c0);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_1240 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1240 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1240)(local_1240);
      LOCK();
      piVar3 = (int *)((longlong)local_1240 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1240 + 0x10))(local_1240);
      }
    }
  }
  if (local_12a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_12a0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_12a0)(local_12a0);
      LOCK();
      piVar3 = (int *)((longlong)local_12a0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_12a0 + 0x10))(local_12a0);
      }
    }
  }
  plVar2 = local_1288;
  if (local_1288 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1288 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1288)(local_1288);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_140a509a6(local_ef0);
  plVar13 = local_1278;
  if (local_1278 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1278 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1278)(local_1278);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar5 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  FUN_140a509a6(local_e30);
  plVar5 = local_1268;
  if (local_1268 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1268 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1268)(local_1268);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_140a509a6(local_d70);
  FUN_145ab33da(&local_cb0);
  FUN_140a5660c(&local_3d0);
  FUN_140a509a6(local_af8);
  FUN_145ab33da(local_a38);
  FUN_140767f30(&local_880);
  FUN_14149255e(&local_7c0);
  FUN_1415b5e50(local_1000);
  FUN_1415b5e50(local_fa8);
  FUN_1415b5e16(local_608);
  local_3d0 = DAT_14c96b1e1;
  local_3cf = 1;
  local_3c8 = 0;
  uStack_3c0 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x288) + 0x1c0))
            (*(longlong **)(param_1 + 0x288),&local_3d0);
  FUN_14009d848(param_1 + 0x240,local_1350 + 0x1e8);
  if ((local_60 ^ (ulonglong)auStack_1398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab33da FUN_145ab33da body=56 status=ok
// SIG undefined FUN_145ab33da(void)

void FUN_145ab33da(longlong param_1)

{
  FUN_140a4fdc8(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145ab3412 FUN_145ab3412 body=86 status=ok
// SIG undefined FUN_145ab3412(void)

longlong FUN_145ab3412(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x170);
  *(char *)(param_1 + 0x180) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x188,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 145ab3468 FUN_145ab3468 body=98 status=ok
// SIG undefined FUN_145ab3468(void)

longlong FUN_145ab3468(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 0x50) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x50) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x54) != '\x01') goto LAB_145ab348d;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x54) = uVar1;
  }
LAB_145ab348d:
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 2);
  FUN_144a450dc(param_1 + 0x60,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 145ab34ca FUN_145ab34ca body=117 status=ok
// SIG undefined FUN_145ab34ca(void)

longlong * FUN_145ab34ca(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ab4204(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ab3540 FUN_145ab3540 body=178 status=ok
// SIG undefined FUN_145ab3540(void)

longlong FUN_145ab3540(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_145ab3b7e(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab35f4 FUN_145ab35f4 body=316 status=ok
// SIG undefined FUN_145ab35f4(void)

void FUN_145ab35f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x36b) == '\x01') {
    *(undefined1 *)(param_1 + 0x36b) = 0;
  }
  if (*(char *)(param_1 + 0x369) == '\x01') {
    *(undefined1 *)(param_1 + 0x369) = 0;
  }
  if (*(char *)(param_1 + 0x360) == '\x01') {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  if (*(char *)(param_1 + 0x340) == '\x01') {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  FUN_1449db362(param_1 + 0x310);
  FUN_1449db362(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x298);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x230);
  FUN_1449db362(param_1 + 0x220);
  FUN_1449db362(param_1 + 0x210);
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1e8);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145ab3730 FUN_145ab3730 body=401 status=ok
// SIG undefined FUN_145ab3730(void)

longlong *
FUN_145ab3730(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x378,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f055a0;
  plVar1 = plVar4 + 2;
  FUN_145ab3964(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145ab38c2(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ab37e6;
    param_1[1] = 0;
LAB_145ab3853:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145ab37e6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145ab37e6;
      goto LAB_145ab3853;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ab37e6;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145ab37e6:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 0x368;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab38c2 FUN_145ab38c2 body=162 status=ok
// SIG undefined FUN_145ab38c2(void)

void FUN_145ab38c2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ab3901;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ab3901;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ab3901:
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
                    /* WARNING: Could not recover jumptable at 0x000145ab3960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ab3964 FUN_145ab3964 body=223 status=ok
// SIG undefined FUN_145ab3964(void)

undefined8 * FUN_145ab3964(undefined8 *param_1)

{
  FUN_140a55e66();
  *param_1 = &PTR_FUN_149f101b0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x34c) = 0;
  FUN_140a5808e((longlong)param_1 + 0x33c,param_1);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_140a5808e(param_1 + 0x6a,param_1);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  FUN_140a5808e(param_1 + 0x6c,param_1);
  *(undefined1 *)((longlong)param_1 + 0x33) = 2;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfb;
  return param_1;
}



// FUNCTION 145ab3a44 FUN_145ab3a44 body=314 status=ok
// SIG undefined FUN_145ab3a44(void)

longlong * FUN_145ab3a44(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ab3b01:
    *puVar5 = &PTR_LAB_149f05630;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19dd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_145ab3b01;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05630;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19dd0;
    puVar5[3] = uVar10;
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



// FUNCTION 145ab3b7e FUN_145ab3b7e body=314 status=ok
// SIG undefined FUN_145ab3b7e(void)

longlong * FUN_145ab3b7e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ab3c3b:
    *puVar5 = &PTR_LAB_149f056a0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19e40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_145ab3c3b;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19e40;
    puVar5[3] = uVar10;
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



// FUNCTION 145ab3cb8 FUN_145ab3cb8 body=108 status=ok
// SIG undefined FUN_145ab3cb8(void)

longlong FUN_145ab3cb8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14149270a(param_1 + 0x18);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
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
  FUN_140a5503c(param_1 + 0x18);
  return param_1;
}



// FUNCTION 145ab3d24 FUN_145ab3d24 body=580 status=ok
// SIG undefined FUN_145ab3d24(void)

longlong FUN_145ab3d24(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"Button",1);
  uVar3 = FUN_141492734(lVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_50,"ButtonText",1);
  uVar3 = FUN_140a57516(lVar2,local_50,0,0);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1d4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1d8) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1dc) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_144a5dc74(param_1 + 0x1f8);
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x288) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x290) = 1;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x2b0) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x2b8) = 1;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined1 **)(param_1 + 0x2d0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x2d8) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x304) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x308) = 4;
  *(undefined1 *)(param_1 + 0x30c) = 1;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 800) = 1;
  *(undefined1 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x360) = 0;
  *(undefined1 *)(param_1 + 0x369) = 0;
  *(undefined1 *)(param_1 + 0x36b) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab3f6a FUN_145ab3f6a body=158 status=ok
// SIG undefined FUN_145ab3f6a(void)

longlong FUN_145ab3f6a(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined1 *)(param_2 + 4);
  local_30 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_28 = param_2[8];
  param_2[8] = 0;
  if (*(longlong *)(param_1 + -0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + -0x18) + 8);
  }
  FUN_145ab400a(param_1,uVar1,&local_48);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2 + 6);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1 + -0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab400a FUN_145ab400a body=369 status=ok
// SIG undefined FUN_145ab400a(void)

void FUN_145ab400a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)param_3[3] != (longlong *)0x0 && *(int *)(param_3 + 4) != 0) {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 2) = 0;
      if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_145ab4166:
        local_48 = *param_3;
        uStack_40 = *(undefined4 *)(param_3 + 1);
        uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
        if (cVar1 == '\0') goto LAB_145ab4166;
        local_48 = param_3[3];
        param_3[3] = 0;
        uStack_40 = *(undefined4 *)(param_3 + 4);
        *(undefined4 *)(param_3 + 4) = 0;
        local_38 = 1;
      }
      FUN_146ac5594(param_1,param_2,&local_48);
      bVar2 = local_38;
      goto LAB_145ab408c;
    }
  }
  if (*(char *)(param_3 + 2) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(undefined1 *)(param_3 + 2) = 0;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_145ab4067:
    local_48 = *param_3;
    uStack_40 = *(undefined4 *)(param_3 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    bVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_145ab4067;
    local_48 = param_3[3];
    param_3[3] = 0;
    uStack_40 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_3 + 4) = 0;
    bVar2 = 1;
  }
  local_38 = bVar2;
  FUN_145ab4190(param_1,param_2,&local_48);
LAB_145ab408c:
  (*(code *)(&PTR_FUN_149ef0800)[bVar2])(&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab4190 FUN_145ab4190 body=116 status=ok
// SIG undefined FUN_145ab4190(void)

ulonglong FUN_145ab4190(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[2] != param_3[2]))
      || ((NAN(param_1[2]) || NAN(param_3[2]) || (param_1[1] != param_3[1])))) ||
     ((NAN(param_1[1]) || NAN(param_3[1]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    FUN_14094e0ca(param_2,param_1,0,1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 145ab4204 FUN_145ab4204 body=1774 status=ok
// SIG undefined FUN_145ab4204(void)

void FUN_145ab4204(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  undefined8 *puVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_938 [32];
  undefined1 *local_918;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined1 local_8f8;
  undefined8 local_8f0;
  undefined4 local_8e8;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined1 uStack_8c4;
  undefined8 local_8c0;
  undefined4 local_8b8;
  undefined4 local_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined1 local_898;
  undefined8 local_890;
  undefined4 local_888;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined1 local_868;
  undefined8 local_860;
  undefined4 local_858;
  undefined1 local_849;
  undefined1 local_848 [8];
  longlong *local_840;
  longlong *local_830;
  undefined4 local_828;
  undefined1 local_820;
  undefined8 local_818;
  undefined4 local_810;
  undefined2 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  longlong local_7f0;
  longlong *local_7e8;
  undefined1 local_7e0 [424];
  longlong local_638;
  longlong *local_630;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined1 local_588;
  undefined1 local_580 [16];
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined1 local_560;
  undefined1 local_558 [56];
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined1 local_50c;
  undefined1 local_508 [88];
  longlong local_4b0 [14];
  undefined2 local_440;
  undefined1 local_438 [1016];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_938;
  bVar4 = *(byte *)(param_1 + 0x33b);
  *(byte *)(param_1 + 0x33b) = bVar4 & 0xfd;
  *(byte *)(param_1 + 0x33b) = bVar4 & 0xfc | *(byte *)(param_2 + 800);
  FUN_140a5abdc(param_1 + 0x33c,param_1,param_2 + 0x2f8);
  FUN_145ab48f4(param_1 + 0x2b8,param_2 + 0x220);
  FUN_14009d848(param_1 + 0x2c8,param_2 + 0x230);
  FUN_14009d848(param_1 + 0x2d8,param_2 + 0x240);
  FUN_14009d848(param_1 + 0x2e8,param_2 + 0x250);
  FUN_14009d848(param_1 + 0x2f8,param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x339) = *(undefined1 *)(param_2 + 0x274);
  *(undefined1 *)(param_1 + 0x33a) = *(undefined1 *)(param_2 + 0x278);
  plVar11 = (longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x358);
  if (*(char *)(param_2 + 0x360) != '\0') {
    plVar11 = (longlong *)(param_2 + 0x348);
  }
  lVar10 = *plVar11;
  if (DAT_14c950c29 == 1) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *plVar11;
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x308) = lVar10;
  *(longlong *)(param_1 + 0x310) = plVar11[1];
  *(longlong *)(param_1 + 0x318) = plVar11[2];
  plVar11 = (longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x340);
  if (*(char *)(param_2 + 0x340) != '\0') {
    plVar11 = (longlong *)(param_2 + 0x328);
  }
  lVar10 = *plVar11;
  if ((bVar4 & 1) != 0) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *plVar11;
    }
  }
  *(longlong *)(param_1 + 800) = lVar10;
  *(longlong *)(param_1 + 0x328) = plVar11[1];
  *(longlong *)(param_1 + 0x330) = plVar11[2];
  FUN_140a562d0(local_7e0);
  local_878 = *(undefined4 *)(param_2 + 0x2a8);
  uStack_874 = *(undefined4 *)(param_2 + 0x2ac);
  uStack_870 = *(undefined4 *)(param_2 + 0x2b0);
  uStack_86c = *(undefined4 *)(param_2 + 0x2b4);
  local_868 = *(undefined1 *)(param_2 + 0x2b8);
  local_860 = 0;
  local_858 = 0;
  FUN_140a51be2(&local_860,param_2 + 0x2c0);
  local_588 = local_868;
  local_598 = local_878;
  uStack_594 = uStack_874;
  uStack_590 = uStack_870;
  uStack_58c = uStack_86c;
  FUN_144a450dc(local_580,&local_860);
  FUN_1449db362(&local_860);
  local_898 = *(undefined1 *)(param_2 + 0x290);
  local_8a8 = *(undefined4 *)(param_2 + 0x280);
  uStack_8a4 = *(undefined4 *)(param_2 + 0x284);
  uStack_8a0 = *(undefined4 *)(param_2 + 0x288);
  uStack_89c = *(undefined4 *)(param_2 + 0x28c);
  local_890 = 0;
  local_888 = 0;
  FUN_140a51be2(&local_890,param_2 + 0x298);
  local_560 = local_898;
  local_570 = local_8a8;
  uStack_56c = uStack_8a4;
  uStack_568 = uStack_8a0;
  uStack_564 = uStack_89c;
  FUN_144a450dc(local_558,&local_890);
  FUN_1449db362(&local_890);
  uStack_8c8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x2dd) >> 0x18);
  uStack_8c4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x2dd) >> 0x38);
  local_8d8 = *(undefined4 *)(param_2 + 0x2d0);
  uStack_8d4 = *(undefined4 *)(param_2 + 0x2d4);
  uStack_8d0 = *(undefined4 *)(param_2 + 0x2d8);
  uStack_8cc = *(undefined4 *)(param_2 + 0x2dc);
  local_8c0 = 0;
  local_8b8 = 0;
  FUN_140a5aaa0(&local_8c0,param_2 + 0x2e8);
  local_510 = uStack_8c8;
  local_520 = local_8d8;
  uStack_51c = uStack_8d4;
  uStack_518 = uStack_8d0;
  uStack_514 = uStack_8cc;
  local_50c = uStack_8c4;
  FUN_144a450dc(local_508,&local_8c0);
  FUN_1449db362(&local_8c0);
  local_628 = *(undefined4 *)(param_2 + 0x1c8);
  local_624 = *(undefined4 *)(param_2 + 0x1cc);
  lVar10 = *(longlong *)(param_2 + 0x1a8);
  if (*(longlong *)(param_2 + 0x1a8) == DAT_14c98dec8) {
    if (*(longlong **)(param_2 + 0x210) == (longlong *)0x0 || *(int *)(param_2 + 0x218) == 0) {
LAB_145ab4660:
      uVar9 = FUN_14142e2d2((longlong *)(param_2 + 0x1f8));
      cVar8 = FUN_144a7c5f6(uVar9);
      if (cVar8 != '\0') {
        lVar10 = *(longlong *)(param_2 + 0x1a8);
        goto LAB_145ab44df;
      }
    }
    else {
      cVar8 = (**(code **)(**(longlong **)(param_2 + 0x210) + 0x30))();
      if (cVar8 == '\0') goto LAB_145ab4660;
    }
    FUN_140a570d8(local_4b0);
    local_808 = CONCAT11(1,DAT_14c96b23a);
    local_800 = 0;
    uStack_7f8 = 0;
    local_440 = local_808;
    FUN_144a450dc(local_438,&local_800);
    FUN_1449db362(&local_800);
    local_830 = *(longlong **)(param_2 + 0x1f8);
    if (local_830 != (longlong *)0x0) {
      (**(code **)(*local_830 + 8))();
    }
    local_828 = *(undefined4 *)(param_2 + 0x200);
    local_820 = *(undefined1 *)(param_2 + 0x208);
    local_818 = 0;
    local_810 = 0;
    FUN_1413a4324(&local_818,param_2 + 0x210);
    lVar10 = FUN_140a54906(local_4b0,&local_830);
    *(undefined8 *)(lVar10 + 0x1d0) = *(undefined8 *)(param_2 + 0x1c0);
    if (*(char *)(param_2 + 0x369) == '\x01') {
      *(undefined1 *)(lVar10 + 0x440) = *(undefined1 *)(param_2 + 0x368);
      *(undefined1 *)(lVar10 + 0x441) = 1;
    }
    else if (*(char *)(lVar10 + 0x441) == '\x01') {
      *(undefined1 *)(lVar10 + 0x441) = 0;
    }
    if (*(char *)(param_2 + 0x36b) == '\x01') {
      *(undefined1 *)(lVar10 + 0x442) = *(undefined1 *)(param_2 + 0x36a);
      *(undefined1 *)(lVar10 + 0x443) = 1;
    }
    else if (*(char *)(lVar10 + 0x443) == '\x01') {
      *(undefined1 *)(lVar10 + 0x443) = 0;
    }
    local_918 = &local_849;
    FUN_140a54526(local_848,"STextBlock",".\\Runtime/Slate/Private/Widgets/Input/SButton.cpp",100);
    FUN_140a52852(local_848,&local_7f0,lVar10);
    if (local_7e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_7e8 + 1) = (int)local_7e8[1] + 1;
      UNLOCK();
      if (local_7e8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_7e8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_7e8)(local_7e8);
          LOCK();
          piVar3 = (int *)((longlong)local_7e8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_7e8 + 0x10))(local_7e8);
          }
        }
      }
    }
    if (local_840 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_840 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_840)(local_840);
        LOCK();
        piVar3 = (int *)((longlong)local_840 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_840 + 0x10))(local_840);
        }
      }
    }
    FUN_140a59ae6(local_4b0);
    plVar11 = local_7e8;
    if (local_7e8 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      bVar6 = true;
      goto LAB_145ab44f9;
    }
  }
  else {
LAB_145ab44df:
    local_7f0 = lVar10;
    plVar11 = *(longlong **)(param_2 + 0x1b0);
    if (plVar11 == (longlong *)0x0) {
      bVar6 = true;
      plVar11 = (longlong *)0x0;
      goto LAB_145ab44f9;
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  UNLOCK();
  bVar6 = false;
LAB_145ab44f9:
  plVar2 = local_630;
  local_638 = local_7f0;
  plVar7 = plVar11;
  if (local_630 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_630 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_630;
      local_630 = plVar11;
      (*(code *)*puVar5)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar7 = local_630;
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar7 = local_630;
      }
    }
  }
  local_630 = plVar7;
  FUN_140a5a2ee(param_1,local_7e0);
  if (!bVar6) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a59028(local_7e0);
  local_908 = *(undefined4 *)(param_2 + 0x1d0);
  uStack_904 = *(undefined4 *)(param_2 + 0x1d4);
  uStack_900 = *(undefined4 *)(param_2 + 0x1d8);
  uStack_8fc = *(undefined4 *)(param_2 + 0x1dc);
  local_8f8 = *(undefined1 *)(param_2 + 0x1e0);
  local_8f0 = 0;
  local_8e8 = 0;
  FUN_140a58be0(&local_8f0,param_2 + 0x1e8);
  FUN_140a58e4a(param_1 + 0x350,param_1,&local_908);
  FUN_1449db362(&local_8f0);
  FUN_145ab4972(param_1,*(undefined8 *)(param_2 + 0x1b8));
  FUN_1414927ae(param_1,local_4b0);
  if (local_4b0[0] == DAT_14c98ef58) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
    FUN_144a88240(param_1 + 0x18,param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_938) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab48f4 FUN_145ab48f4 body=124 status=ok
// SIG undefined FUN_145ab48f4(void)

void FUN_145ab48f4(longlong *param_1,longlong *param_2)

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



// FUNCTION 145ab4972 FUN_145ab4972 body=366 status=ok
// SIG undefined FUN_145ab4972(void)

void FUN_145ab4972(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x2b0) = param_2;
    lVar2 = *(longlong *)(param_2 + 0x358);
    lVar3 = param_2;
    if (DAT_14c950c29 == 1) {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_2 + 0x358);
        lVar3 = *(longlong *)(param_1 + 0x2b0);
      }
    }
    bVar1 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x308) = lVar2;
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x360);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x368);
    lVar2 = *(longlong *)(lVar3 + 0x340);
    if ((bVar1 & 1) != 0) {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(lVar3 + 0x340);
      }
    }
    *(longlong *)(param_1 + 800) = lVar2;
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(lVar3 + 0x348);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(lVar3 + 0x350);
    FUN_145ab4b0e(param_1,&local_58);
    uStack_48 = CONCAT71(uStack_48._1_7_,1);
    local_40 = 0;
    uStack_38 = 0;
    FUN_145ab4ba4(param_1,&local_58);
    local_58 = *(char *)(*(longlong *)(param_1 + 0x2b0) + 0x23c) == '\0';
    local_57 = 1;
    local_50 = 0;
    uStack_48 = 0;
    FUN_145ab4ae2(param_1,&local_58);
    FUN_145ab4c3e(param_1);
    FUN_145ab4d7a(param_1);
    FUN_140163244(param_1,2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ab4ae2 FUN_145ab4ae2 body=43 status=ok
// SIG undefined FUN_145ab4ae2(void)

void FUN_145ab4ae2(longlong param_1,longlong param_2)

{
  FUN_140a5ad86(param_1 + 0x298,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145ab4b0e FUN_145ab4b0e body=150 status=ok
// SIG undefined FUN_145ab4b0e(void)

void FUN_145ab4b0e(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar8 = 0x334;
  lVar10 = 0x338;
  lVar11 = 0x33c;
  lVar9 = 0x330;
  if (((*(byte *)(param_1 + 0x33b) & 2) == 0) && (*(char *)(param_1 + 0x360) == '\0')) {
    lVar8 = 0x324;
    lVar10 = 0x328;
    lVar11 = 0x32c;
    lVar9 = 800;
  }
  lVar7 = *(longlong *)(param_1 + 0x2b0);
  fVar1 = *(float *)(param_1 + 0x35c);
  fVar2 = *(float *)(lVar7 + lVar11);
  fVar3 = *(float *)(param_1 + 0x358);
  fVar4 = *(float *)(lVar7 + lVar10);
  fVar5 = *(float *)(param_1 + 0x354);
  fVar6 = *(float *)(lVar7 + lVar8);
  *param_2 = *(float *)(param_1 + 0x350) + *(float *)(lVar7 + lVar9);
  param_2[1] = fVar5 + fVar6;
  param_2[2] = fVar3 + fVar4;
  param_2[3] = fVar1 + fVar2;
  return;
}



// FUNCTION 145ab4ba4 FUN_145ab4ba4 body=153 status=ok
// SIG undefined FUN_145ab4ba4(void)

void FUN_145ab4ba4(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined1 *)(param_2 + 4);
  local_30 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_28 = param_2[8];
  param_2[8] = 0;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8);
  }
  FUN_140a58e4a(param_1 + 0x218,uVar1,&local_48);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2 + 6);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab4c3e FUN_145ab4c3e body=271 status=ok
// SIG undefined FUN_145ab4c3e(void)

void FUN_145ab4c3e(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [8];
  longlong local_80 [15];
  
  local_80[0xe] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1[0x56] + 0x23c) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
    if (cVar1 == '\0') {
      plVar2 = local_80 + 0xc;
      local_80[10] = param_1[0x56] + 0x220;
      plVar4 = local_80 + 10;
      goto LAB_145ab4ca8;
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x33b) & 2) == 0) {
    lVar3 = param_1[0x56];
    if ((char)param_1[0x6c] != '\x01') {
      if (*(char *)((longlong)param_1 + 0x3b) == '\x01') {
        plVar2 = local_80 + 4;
        local_80[2] = lVar3 + 0xc0;
        plVar4 = local_80 + 2;
      }
      else {
        plVar2 = local_80;
        local_90 = lVar3 + 0x10;
        plVar4 = &local_90;
      }
      goto LAB_145ab4ca8;
    }
  }
  else {
    lVar3 = param_1[0x56];
  }
  plVar2 = local_80 + 8;
  local_80[6] = lVar3 + 0x170;
  plVar4 = local_80 + 6;
LAB_145ab4ca8:
  *(undefined1 *)(plVar4 + 1) = 1;
  *plVar2 = 0;
  plVar2[1] = 0;
  FUN_145ab4d4e(param_1);
  if ((local_80[0xe] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab4d4e FUN_145ab4d4e body=43 status=ok
// SIG undefined FUN_145ab4d4e(void)

void FUN_145ab4d4e(longlong param_1,longlong param_2)

{
  FUN_140a5acbc(param_1 + 0x268,param_1,param_2);
  FUN_1449db362(param_2 + 0x10);
  return;
}



// FUNCTION 145ab4d7a FUN_145ab4d7a body=455 status=ok
// SIG undefined FUN_145ab4d7a(void)

void FUN_145ab4d7a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(float *)(param_1 + 0x33c) == 1.0) && (!NAN(*(float *)(param_1 + 0x33c)))) {
    if (((*(float *)(param_1 + 0x340) == 0.0) &&
        ((((!NAN(*(float *)(param_1 + 0x340)) && (*(float *)(param_1 + 0x344) == 1.0)) &&
          (!NAN(*(float *)(param_1 + 0x344)))) &&
         ((*(float *)(param_1 + 0x348) == 1.0 && (!NAN(*(float *)(param_1 + 0x348)))))))) &&
       (*(char *)(param_1 + 0x34c) == '\x04')) {
      if (((*(byte *)(param_1 + 0x33b) & 2) == 0) && (*(char *)(param_1 + 0x360) != '\x01')) {
        lVar1 = *(longlong *)(param_1 + 0x2b0);
        if (*(char *)(param_1 + 0x3b) == '\x01') {
          local_58 = *(undefined4 *)(lVar1 + 0x2f4);
          puVar2 = &local_50;
          local_68 = *(undefined8 *)(lVar1 + 0x2e4);
          uStack_60 = *(undefined8 *)(lVar1 + 0x2ec);
          local_54 = 1;
          local_50 = 0;
          uStack_48 = 0;
          puVar3 = &local_68;
        }
        else {
          local_88 = *(undefined4 *)(lVar1 + 0x2e0);
          puVar2 = &local_80;
          local_98 = *(undefined8 *)(lVar1 + 0x2d0);
          uStack_90 = *(undefined8 *)(lVar1 + 0x2d8);
          local_84 = 1;
          local_80 = 0;
          uStack_78 = 0;
          puVar3 = &local_98;
        }
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x2b0);
        local_28 = *(undefined4 *)(lVar1 + 0x308);
        puVar2 = &local_20;
        local_38 = *(undefined8 *)(lVar1 + 0x2f8);
        uStack_30 = *(undefined8 *)(lVar1 + 0x300);
        local_24 = 1;
        local_20 = 0;
        uStack_18 = 0;
        puVar3 = &local_38;
      }
      goto LAB_145ab4e6b;
    }
  }
  local_b8 = *(undefined4 *)(param_1 + 0x34c);
  puVar2 = &local_b0;
  local_c8 = *(undefined8 *)(param_1 + 0x33c);
  uStack_c0 = *(undefined8 *)(param_1 + 0x344);
  local_b4 = 1;
  local_b0 = 0;
  uStack_a8 = 0;
  puVar3 = &local_c8;
LAB_145ab4e6b:
  FUN_140a5c8a2(param_1 + 0x250,param_1,puVar3);
  FUN_1449db362(puVar2);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab4f42 FUN_145ab4f42 body=8545 status=ok
// SIG undefined FUN_145ab4f42(void)

undefined8 * FUN_145ab4f42(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_bf8 [32];
  undefined ***local_bd8;
  undefined4 local_bd0;
  undefined8 *local_bc8;
  longlong local_bc0;
  int local_bb8;
  longlong local_bb0;
  int local_ba8;
  longlong local_ba0;
  int local_b98;
  longlong local_b90 [2];
  undefined8 local_b80;
  undefined **local_b78;
  undefined1 *puStack_b70;
  longlong *local_ad8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  longlong local_aa8;
  int local_aa0;
  undefined1 *local_a98;
  undefined1 *puStack_a90;
  longlong local_a88;
  int local_a80;
  longlong local_a78;
  int local_a70;
  longlong local_a68;
  int local_a60;
  longlong local_a58;
  undefined8 uStack_a50;
  undefined1 *local_a48;
  undefined1 *puStack_a40;
  undefined **local_a38 [20];
  longlong *local_998;
  undefined1 *local_988;
  undefined1 *puStack_980;
  undefined1 *local_978;
  undefined1 *puStack_970;
  longlong local_968;
  int local_960;
  longlong local_958;
  int local_950;
  longlong local_948;
  int local_940;
  longlong local_938 [2];
  undefined1 *local_928;
  undefined1 *puStack_920;
  undefined **local_918 [20];
  longlong *local_878;
  undefined1 *local_868;
  undefined1 *puStack_860;
  longlong local_858;
  int local_850;
  longlong local_848;
  int local_840;
  longlong local_838;
  int local_830;
  longlong local_828 [2];
  undefined1 *local_818;
  undefined1 *puStack_810;
  undefined **local_808 [20];
  longlong *local_768;
  undefined1 local_758 [16];
  undefined1 local_748 [176];
  undefined1 local_698 [176];
  undefined1 local_5e8 [176];
  undefined1 local_538 [256];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 local_3e8 [888];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_bf8;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f168f0;
  FUN_145ab70a4(param_1 + 0x3c,param_1);
  param_1[0x3c] = &PTR_LAB_149f174a0;
  param_1[0x3f] = &PTR_FUN_149f174e8;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x252) = 1;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  if (DAT_14c98ffc0 == '\0') {
    local_bc8 = param_1;
    FUN_140ca8d78(local_758);
    local_b78 = (undefined **)&DAT_3f8000003f800000;
    puStack_b70 = &DAT_3f8000003f800000;
    local_818 = (undefined1 *)0x3e8000003e800000;
    puStack_810 = (undefined1 *)0x3e8000003e800000;
    local_b90[0] = 0x4200000042000000;
    FUN_1400b22c2(&local_848,"Common/Button");
    FUN_1414927bc(&local_868);
    FUN_1412cfe60(&local_858,&local_868,((int)puStack_860 == 0) + '\x06');
    FUN_1401aebe8(&local_858,L"Slate",5);
    iVar4 = local_840 + -1;
    if (local_840 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_838,&local_858,iVar4 + 1 + (uint)(local_850 == 0));
    FUN_1401aebe8(&local_838,local_848,iVar4);
    FUN_144a882a8(local_828,&local_838,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = &local_b78;
    FUN_141492880(local_808,local_828,local_b90,&local_818);
    FUN_140f13d9e(local_748,local_808);
    local_928 = &DAT_3f8000003f800000;
    puStack_920 = &DAT_3f8000003f800000;
    local_938[0] = 0x3e8000003e800000;
    local_938[1] = 0x3e8000003e800000;
    local_ba0 = 0x4200000042000000;
    FUN_1400b22c2(&local_968,"Common/Button_Hovered");
    FUN_1414927bc(&local_988);
    FUN_1412cfe60(&local_978,&local_988,((int)puStack_980 == 0) + '\x06');
    FUN_1401aebe8(&local_978,L"Slate",5);
    iVar4 = local_960 + -1;
    if (local_960 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_958,&local_978,iVar4 + 1 + (uint)((int)puStack_970 == 0));
    FUN_1401aebe8(&local_958,local_968,iVar4);
    FUN_144a882a8(&local_948,&local_958,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)&local_928;
    FUN_141492880(local_918,&local_948,&local_ba0,local_938);
    FUN_140f13d9e(local_698,local_918);
    local_a48 = &DAT_3f8000003f800000;
    puStack_a40 = &DAT_3f8000003f800000;
    local_a58 = 0x3e8000003e800000;
    uStack_a50 = 0x3e8000003e800000;
    local_bb0 = 0x4200000042000000;
    FUN_1400b22c2(&local_a88,"Common/Button_Pressed");
    FUN_1414927bc(&local_aa8);
    FUN_1412cfe60(&local_a98,&local_aa8,(local_aa0 == 0) + '\x06');
    FUN_1401aebe8(&local_a98,L"Slate",5);
    iVar4 = local_a80 + -1;
    if (local_a80 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_a78,&local_a98,iVar4 + 1 + (uint)((int)puStack_a90 == 0));
    FUN_1401aebe8(&local_a78,local_a88,iVar4);
    FUN_144a882a8(&local_a68,&local_a78,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)&local_a48;
    FUN_141492880(local_a38,&local_a68,&local_bb0,&local_a58);
    FUN_140f13d9e(local_5e8,local_a38);
    local_438 = 0x4000000040000000;
    uStack_430 = 0x4000000040000000;
    local_428 = 0x40000000;
    uStack_424 = 0x40400000;
    uStack_420 = 0x40000000;
    uStack_41c = 0x3f800000;
    FUN_141478cf2(local_3e8,local_758);
    plVar2 = local_998;
    local_a38[0] = &PTR_FUN_149ed05f0;
    if (local_998 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_998 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_998)(local_998);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_a68 != 0) {
      FUN_1400020a8();
    }
    if (local_a78 != 0) {
      FUN_1400020a8();
    }
    if (local_a98 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_aa8 != 0) {
      FUN_1400020a8();
    }
    if (local_a88 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_878;
    local_918[0] = &PTR_FUN_149ed05f0;
    if (local_878 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_878 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_878)(local_878);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_948 != 0) {
      FUN_1400020a8();
    }
    if (local_958 != 0) {
      FUN_1400020a8();
    }
    if (local_978 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_988 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_968 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_768;
    local_808[0] = &PTR_FUN_149ed05f0;
    if (local_768 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_768 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_768)(local_768);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_828[0] != 0) {
      FUN_1400020a8();
    }
    if (local_838 != 0) {
      FUN_1400020a8();
    }
    if (local_858 != 0) {
      FUN_1400020a8();
    }
    if (local_868 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_848 != 0) {
      FUN_1400020a8();
    }
    FUN_140ffd6b6(local_758);
    FUN_141478cf2(local_758,local_3e8);
    local_818 = &DAT_3f8000003f800000;
    puStack_810 = &DAT_3f8000003f800000;
    local_ab0 = 0x4190000041d80000;
    FUN_1400b22c2(&local_848,"Common/Window/WindowButton_Minimize_Normal");
    FUN_1414927bc(&local_868);
    FUN_1412cfe60(&local_858,&local_868,((int)puStack_860 == 0) + '\x06');
    FUN_1401aebe8(&local_858,L"Slate",5);
    iVar4 = local_840 + -1;
    if (local_840 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_838,&local_858,iVar4 + 1 + (uint)(local_850 == 0));
    FUN_1401aebe8(&local_838,local_848,iVar4);
    FUN_144a882a8(local_828,&local_838,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_808,local_828,&local_ab0,&local_818);
    FUN_140f13d9e(local_748,local_808);
    local_928 = &DAT_3f8000003f800000;
    puStack_920 = &DAT_3f8000003f800000;
    local_ab8 = 0x4190000041d80000;
    FUN_1400b22c2(&local_958,"Common/Window/WindowButton_Minimize_Hovered");
    FUN_1414927bc(&local_978);
    FUN_1412cfe60(&local_968,&local_978,((int)puStack_970 == 0) + '\x06');
    FUN_1401aebe8(&local_968,L"Slate",5);
    iVar4 = local_950 + -1;
    if (local_950 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_948,&local_968,iVar4 + 1 + (uint)(local_960 == 0));
    FUN_1401aebe8(&local_948,local_958,iVar4);
    FUN_144a882a8(local_938,&local_948,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_918,local_938,&local_ab8,&local_928);
    FUN_140f13d9e(local_698,local_918);
    local_988 = &DAT_3f8000003f800000;
    puStack_980 = &DAT_3f8000003f800000;
    local_ac0 = 0x4190000041d80000;
    FUN_1400b22c2(&local_a68,"Common/Window/WindowButton_Minimize_Pressed");
    FUN_1414927bc(&local_a88);
    FUN_1412cfe60(&local_a78,&local_a88,(local_a80 == 0) + '\x06');
    FUN_1401aebe8(&local_a78,L"Slate",5);
    iVar4 = local_a60 + -1;
    if (local_a60 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_a58,&local_a78,iVar4 + 1 + (uint)(local_a70 == 0));
    FUN_1401aebe8(&local_a58,local_a68,iVar4);
    FUN_144a882a8(&local_a48,&local_a58,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_a38,&local_a48,&local_ac0,&local_988);
    FUN_140f13d9e(local_5e8,local_a38);
    local_a98 = &DAT_3f8000003f800000;
    puStack_a90 = &DAT_3f8000003f800000;
    local_b80 = 0x4190000041d80000;
    FUN_1400b22c2(&local_ba0,"Common/Window/WindowButton_Minimize_Disabled");
    FUN_1414927bc(&local_bc0);
    FUN_1412cfe60(&local_bb0,&local_bc0,(local_bb8 == 0) + '\x06');
    FUN_1401aebe8(&local_bb0,L"Slate",5);
    iVar4 = local_b98 + -1;
    if (local_b98 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(local_b90,&local_bb0,iVar4 + 1 + (uint)(local_ba8 == 0));
    FUN_1401aebe8(local_b90,local_ba0,iVar4);
    FUN_144a882a8(&local_aa8,local_b90,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(&local_b78,&local_aa8,&local_b80,&local_a98);
    FUN_140f13d9e(local_538,&local_b78);
    FUN_141254448(&DAT_14c98f200,local_758);
    plVar2 = local_ad8;
    local_b78 = &PTR_FUN_149ed05f0;
    if (local_ad8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_ad8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_ad8)(local_ad8);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_aa8 != 0) {
      FUN_1400020a8();
    }
    if (local_b90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_bb0 != 0) {
      FUN_1400020a8();
    }
    if (local_bc0 != 0) {
      FUN_1400020a8();
    }
    if (local_ba0 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_998;
    local_a38[0] = &PTR_FUN_149ed05f0;
    if (local_998 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_998 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_998)(local_998);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_a48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a58 != 0) {
      FUN_1400020a8();
    }
    if (local_a78 != 0) {
      FUN_1400020a8();
    }
    if (local_a88 != 0) {
      FUN_1400020a8();
    }
    if (local_a68 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_878;
    local_918[0] = &PTR_FUN_149ed05f0;
    if (local_878 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_878 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_878)(local_878);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_938[0] != 0) {
      FUN_1400020a8();
    }
    if (local_948 != 0) {
      FUN_1400020a8();
    }
    if (local_968 != 0) {
      FUN_1400020a8();
    }
    if (local_978 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_958 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_768;
    local_808[0] = &PTR_FUN_149ed05f0;
    if (local_768 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_768 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_768)(local_768);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_828[0] != 0) {
      FUN_1400020a8();
    }
    if (local_838 != 0) {
      FUN_1400020a8();
    }
    if (local_858 != 0) {
      FUN_1400020a8();
    }
    if (local_868 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_848 != 0) {
      FUN_1400020a8();
    }
    FUN_140ffd6b6(local_758);
    FUN_141478cf2(local_758,local_3e8);
    local_818 = &DAT_3f8000003f800000;
    puStack_810 = &DAT_3f8000003f800000;
    local_ab0 = 0x4190000041b80000;
    FUN_1400b22c2(&local_848,"Common/Window/WindowButton_Maximize_Normal");
    FUN_1414927bc(&local_868);
    FUN_1412cfe60(&local_858,&local_868,((int)puStack_860 == 0) + '\x06');
    FUN_1401aebe8(&local_858,L"Slate",5);
    iVar4 = local_840 + -1;
    if (local_840 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_838,&local_858,iVar4 + 1 + (uint)(local_850 == 0));
    FUN_1401aebe8(&local_838,local_848,iVar4);
    FUN_144a882a8(local_828,&local_838,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_808,local_828,&local_ab0,&local_818);
    FUN_140f13d9e(local_748,local_808);
    local_928 = &DAT_3f8000003f800000;
    puStack_920 = &DAT_3f8000003f800000;
    local_ab8 = 0x4190000041b80000;
    FUN_1400b22c2(&local_958,"Common/Window/WindowButton_Maximize_Hovered");
    FUN_1414927bc(&local_978);
    FUN_1412cfe60(&local_968,&local_978,((int)puStack_970 == 0) + '\x06');
    FUN_1401aebe8(&local_968,L"Slate",5);
    iVar4 = local_950 + -1;
    if (local_950 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_948,&local_968,iVar4 + 1 + (uint)(local_960 == 0));
    FUN_1401aebe8(&local_948,local_958,iVar4);
    FUN_144a882a8(local_938,&local_948,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_918,local_938,&local_ab8,&local_928);
    FUN_140f13d9e(local_698,local_918);
    local_988 = &DAT_3f8000003f800000;
    puStack_980 = &DAT_3f8000003f800000;
    local_ac0 = 0x4190000041b80000;
    FUN_1400b22c2(&local_a68,"Common/Window/WindowButton_Maximize_Pressed");
    FUN_1414927bc(&local_a88);
    FUN_1412cfe60(&local_a78,&local_a88,(local_a80 == 0) + '\x06');
    FUN_1401aebe8(&local_a78,L"Slate",5);
    iVar4 = local_a60 + -1;
    if (local_a60 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_a58,&local_a78,iVar4 + 1 + (uint)(local_a70 == 0));
    FUN_1401aebe8(&local_a58,local_a68,iVar4);
    FUN_144a882a8(&local_a48,&local_a58,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_a38,&local_a48,&local_ac0,&local_988);
    FUN_140f13d9e(local_5e8,local_a38);
    local_a98 = &DAT_3f8000003f800000;
    puStack_a90 = &DAT_3f8000003f800000;
    local_b80 = 0x4190000041d80000;
    FUN_1400b22c2(&local_ba0,"Common/Window/WindowButton_Maximize_Disabled");
    FUN_1414927bc(&local_bc0);
    FUN_1412cfe60(&local_bb0,&local_bc0,(local_bb8 == 0) + '\x06');
    FUN_1401aebe8(&local_bb0,L"Slate",5);
    iVar4 = local_b98 + -1;
    if (local_b98 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(local_b90,&local_bb0,iVar4 + 1 + (uint)(local_ba8 == 0));
    FUN_1401aebe8(local_b90,local_ba0,iVar4);
    FUN_144a882a8(&local_aa8,local_b90,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(&local_b78,&local_aa8,&local_b80,&local_a98);
    FUN_140f13d9e(local_538,&local_b78);
    FUN_141254448(&DAT_14c98f570,local_758);
    plVar2 = local_ad8;
    local_b78 = &PTR_FUN_149ed05f0;
    if (local_ad8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_ad8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_ad8)(local_ad8);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_aa8 != 0) {
      FUN_1400020a8();
    }
    if (local_b90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_bb0 != 0) {
      FUN_1400020a8();
    }
    if (local_bc0 != 0) {
      FUN_1400020a8();
    }
    if (local_ba0 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_998;
    local_a38[0] = &PTR_FUN_149ed05f0;
    if (local_998 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_998 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_998)(local_998);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_a48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a58 != 0) {
      FUN_1400020a8();
    }
    if (local_a78 != 0) {
      FUN_1400020a8();
    }
    if (local_a88 != 0) {
      FUN_1400020a8();
    }
    if (local_a68 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_878;
    local_918[0] = &PTR_FUN_149ed05f0;
    if (local_878 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_878 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_878)(local_878);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_938[0] != 0) {
      FUN_1400020a8();
    }
    if (local_948 != 0) {
      FUN_1400020a8();
    }
    if (local_968 != 0) {
      FUN_1400020a8();
    }
    if (local_978 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_958 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_768;
    local_808[0] = &PTR_FUN_149ed05f0;
    if (local_768 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_768 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_768)(local_768);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_828[0] != 0) {
      FUN_1400020a8();
    }
    if (local_838 != 0) {
      FUN_1400020a8();
    }
    if (local_858 != 0) {
      FUN_1400020a8();
    }
    if (local_868 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_848 != 0) {
      FUN_1400020a8();
    }
    FUN_140ffd6b6(local_758);
    FUN_141478cf2(local_758,local_3e8);
    local_818 = &DAT_3f8000003f800000;
    puStack_810 = &DAT_3f8000003f800000;
    local_ab0 = 0x4190000041b80000;
    FUN_1400b22c2(&local_848,"Common/Window/WindowButton_Restore_Normal");
    FUN_1414927bc(&local_868);
    FUN_1412cfe60(&local_858,&local_868,((int)puStack_860 == 0) + '\x06');
    FUN_1401aebe8(&local_858,L"Slate",5);
    iVar4 = local_840 + -1;
    if (local_840 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_838,&local_858,iVar4 + 1 + (uint)(local_850 == 0));
    FUN_1401aebe8(&local_838,local_848,iVar4);
    FUN_144a882a8(local_828,&local_838,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_808,local_828,&local_ab0,&local_818);
    FUN_140f13d9e(local_748,local_808);
    local_928 = &DAT_3f8000003f800000;
    puStack_920 = &DAT_3f8000003f800000;
    local_ab8 = 0x4190000041b80000;
    FUN_1400b22c2(&local_958,"Common/Window/WindowButton_Restore_Hovered");
    FUN_1414927bc(&local_978);
    FUN_1412cfe60(&local_968,&local_978,((int)puStack_970 == 0) + '\x06');
    FUN_1401aebe8(&local_968,L"Slate",5);
    iVar4 = local_950 + -1;
    if (local_950 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_948,&local_968,iVar4 + 1 + (uint)(local_960 == 0));
    FUN_1401aebe8(&local_948,local_958,iVar4);
    FUN_144a882a8(local_938,&local_948,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_918,local_938,&local_ab8,&local_928);
    FUN_140f13d9e(local_698,local_918);
    local_988 = &DAT_3f8000003f800000;
    puStack_980 = &DAT_3f8000003f800000;
    local_ac0 = 0x4190000041b80000;
    FUN_1400b22c2(&local_a68,"Common/Window/WindowButton_Restore_Pressed");
    FUN_1414927bc(&local_a88);
    FUN_1412cfe60(&local_a78,&local_a88,(local_a80 == 0) + '\x06');
    FUN_1401aebe8(&local_a78,L"Slate",5);
    iVar4 = local_a60 + -1;
    if (local_a60 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_a58,&local_a78,iVar4 + 1 + (uint)(local_a70 == 0));
    FUN_1401aebe8(&local_a58,local_a68,iVar4);
    FUN_144a882a8(&local_a48,&local_a58,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_a38,&local_a48,&local_ac0,&local_988);
    FUN_140f13d9e(local_5e8,local_a38);
    local_a98 = &DAT_3f8000003f800000;
    puStack_a90 = &DAT_3f8000003f800000;
    local_b80 = 0x4190000041d80000;
    FUN_1400b22c2(&local_ba0,"Common/Window/WindowButton_Maximize_Disabled");
    FUN_1414927bc(&local_bc0);
    FUN_1412cfe60(&local_bb0,&local_bc0,(local_bb8 == 0) + '\x06');
    FUN_1401aebe8(&local_bb0,L"Slate",5);
    iVar4 = local_b98 + -1;
    if (local_b98 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(local_b90,&local_bb0,iVar4 + 1 + (uint)(local_ba8 == 0));
    FUN_1401aebe8(local_b90,local_ba0,iVar4);
    FUN_144a882a8(&local_aa8,local_b90,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(&local_b78,&local_aa8,&local_b80,&local_a98);
    FUN_140f13d9e(local_538,&local_b78);
    FUN_141254448(&DAT_14c98f8e0,local_758);
    local_b78 = &PTR_FUN_149ed05f0;
    if (local_ad8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_ad8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_ad8)(local_ad8);
        LOCK();
        piVar3 = (int *)((longlong)local_ad8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_ad8 + 0x10))(local_ad8);
        }
      }
    }
    if (local_aa8 != 0) {
      FUN_1400020a8();
    }
    if (local_b90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_bb0 != 0) {
      FUN_1400020a8();
    }
    if (local_bc0 != 0) {
      FUN_1400020a8();
    }
    if (local_ba0 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_998;
    local_a38[0] = &PTR_FUN_149ed05f0;
    if (local_998 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_998 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_998)(local_998);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_a48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a58 != 0) {
      FUN_1400020a8();
    }
    if (local_a78 != 0) {
      FUN_1400020a8();
    }
    if (local_a88 != 0) {
      FUN_1400020a8();
    }
    if (local_a68 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_878;
    local_918[0] = &PTR_FUN_149ed05f0;
    if (local_878 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_878 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_878)(local_878);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_938[0] != 0) {
      FUN_1400020a8();
    }
    if (local_948 != 0) {
      FUN_1400020a8();
    }
    if (local_968 != 0) {
      FUN_1400020a8();
    }
    if (local_978 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_958 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_768;
    local_808[0] = &PTR_FUN_149ed05f0;
    if (local_768 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_768 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_768)(local_768);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_828[0] != 0) {
      FUN_1400020a8();
    }
    if (local_838 != 0) {
      FUN_1400020a8();
    }
    if (local_858 != 0) {
      FUN_1400020a8();
    }
    if (local_868 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_848 != 0) {
      FUN_1400020a8();
    }
    FUN_140ffd6b6(local_758);
    FUN_141478cf2(local_758,local_3e8);
    local_b78 = (undefined **)&DAT_3f8000003f800000;
    puStack_b70 = &DAT_3f8000003f800000;
    local_a88 = 0x4190000042300000;
    FUN_1400b22c2(&local_838,"Common/Window/WindowButton_Close_Normal");
    FUN_1414927bc(&local_858);
    FUN_1412cfe60(&local_848,&local_858,(local_850 == 0) + '\x06');
    FUN_1401aebe8(&local_848,L"Slate",5);
    iVar4 = local_830 + -1;
    if (local_830 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(local_828,&local_848,iVar4 + 1 + (uint)(local_840 == 0));
    FUN_1401aebe8(local_828,local_838,iVar4);
    FUN_144a882a8(&local_818,local_828,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_808,&local_818,&local_a88,&local_b78);
    FUN_140f13d9e(local_748,local_808);
    local_868 = &DAT_3f8000003f800000;
    puStack_860 = &DAT_3f8000003f800000;
    local_a98 = (undefined1 *)0x4190000042300000;
    FUN_1400b22c2(&local_948,"Common/Window/WindowButton_Close_Hovered");
    FUN_1414927bc(&local_968);
    FUN_1412cfe60(&local_958,&local_968,(local_960 == 0) + '\x06');
    FUN_1401aebe8(&local_958,L"Slate",5);
    iVar4 = local_940 + -1;
    if (local_940 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(local_938,&local_958,iVar4 + 1 + (uint)(local_950 == 0));
    FUN_1401aebe8(local_938,local_948,iVar4);
    FUN_144a882a8(&local_928,local_938,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_918,&local_928,&local_a98,&local_868);
    FUN_140f13d9e(local_698,local_918);
    local_978 = &DAT_3f8000003f800000;
    puStack_970 = &DAT_3f8000003f800000;
    local_aa8 = 0x4190000042300000;
    FUN_1400b22c2(&local_a58,"Common/Window/WindowButton_Close_Pressed");
    FUN_1414927bc(&local_a78);
    FUN_1412cfe60(&local_a68,&local_a78,(local_a70 == 0) + '\x06');
    FUN_1401aebe8(&local_a68,L"Slate",5);
    iVar4 = (int)uStack_a50 + -1;
    if ((int)uStack_a50 == 0) {
      iVar4 = 0;
    }
    FUN_1412cfe60(&local_a48,&local_a68,iVar4 + 1 + (uint)(local_a60 == 0));
    FUN_1401aebe8(&local_a48,local_a58,iVar4);
    FUN_144a882a8(&local_988,&local_a48,&DAT_149eca162);
    local_bd0 = 1;
    local_bd8 = (undefined ***)((ulonglong)local_bd8 & 0xffffffff00000000);
    FUN_14140806a(local_a38,&local_988,&local_aa8,&local_978);
    FUN_140f13d9e(local_5e8,local_a38);
    FUN_141254448(&DAT_14c98fc50,local_758);
    local_a38[0] = &PTR_FUN_149ed05f0;
    if (local_998 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_998 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_998)(local_998);
        LOCK();
        piVar3 = (int *)((longlong)local_998 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_998 + 0x10))(local_998);
        }
      }
    }
    param_1 = local_bc8;
    if (local_988 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a68 != 0) {
      FUN_1400020a8();
    }
    if (local_a78 != 0) {
      FUN_1400020a8();
    }
    if (local_a58 != 0) {
      FUN_1400020a8();
    }
    local_918[0] = &PTR_FUN_149ed05f0;
    if (local_878 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_878 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_878)(local_878);
        LOCK();
        piVar3 = (int *)((longlong)local_878 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_878 + 0x10))(local_878);
        }
      }
    }
    if (local_928 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_938[0] != 0) {
      FUN_1400020a8();
    }
    if (local_958 != 0) {
      FUN_1400020a8();
    }
    if (local_968 != 0) {
      FUN_1400020a8();
    }
    if (local_948 != 0) {
      FUN_1400020a8();
    }
    local_808[0] = &PTR_FUN_149ed05f0;
    if (local_768 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_768 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_768)(local_768);
        LOCK();
        piVar3 = (int *)((longlong)local_768 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_768 + 0x10))(local_768);
        }
      }
    }
    if (local_818 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_828[0] != 0) {
      FUN_1400020a8();
    }
    if (local_848 != 0) {
      FUN_1400020a8();
    }
    if (local_858 != 0) {
      FUN_1400020a8();
    }
    if (local_838 != 0) {
      FUN_1400020a8();
    }
    FUN_140ffd6b6(local_758);
    DAT_14c98ffc0 = '\x01';
    FUN_140ffd6b6(local_3e8);
  }
  if ((local_70 ^ (ulonglong)auStack_bf8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab70a4 FUN_145ab70a4 body=145 status=ok
// SIG undefined FUN_145ab70a4(void)

undefined8 * FUN_145ab70a4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR__purecall_149ef0700;
  param_1[1] = param_2;
  FUN_1446ddc76(param_1 + 2,"Children",1);
  *param_1 = &PTR_LAB_149f17540;
  param_1[3] = &PTR_FUN_149edb640;
  param_1[4] = param_1;
  param_1[5] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  param_1[6] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_LAB_149f174f0;
  param_1[3] = &PTR_FUN_149f17538;
  return param_1;
}



// FUNCTION 145ab7136 FUN_145ab7136 body=40 status=ok
// SIG undefined FUN_145ab7136(void)

undefined8 FUN_145ab7136(undefined8 param_1,int param_2)

{
  FUN_145ab715e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab715e FUN_145ab715e body=125 status=ok
// SIG undefined FUN_145ab715e(void)

void FUN_145ab715e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2d10f0;
  param_1[7] = &PTR_FUN_14b2d13b0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab71dc(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ab71dc FUN_145ab71dc body=53 status=ok
// SIG undefined FUN_145ab71dc(void)

void FUN_145ab71dc(longlong *param_1)

{
  FUN_145ab7212();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab7212 FUN_145ab7212 body=332 status=ok
// SIG undefined FUN_145ab7212(void)

void FUN_145ab7212(longlong *param_1)

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
      FUN_1456d909e(*local_68 + (longlong)iStack_4c * 0x78 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 145ab7360 FUN_145ab7360 body=122 status=ok
// SIG undefined FUN_145ab7360(void)

longlong FUN_145ab7360(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145ab73da(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145ab73da FUN_145ab73da body=123 status=ok
// SIG undefined FUN_145ab73da(void)

undefined8 * FUN_145ab73da(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14585f49a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145ab7456 FUN_145ab7456 body=196 status=ok
// SIG undefined FUN_145ab7456(void)

void FUN_145ab7456(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ab751a(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 145ab751a FUN_145ab751a body=132 status=ok
// SIG undefined FUN_145ab751a(void)

void FUN_145ab751a(longlong param_1,int param_2)

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



// FUNCTION 145ab759e FUN_145ab759e body=269 status=ok
// SIG undefined FUN_145ab759e(void)

undefined8 FUN_145ab759e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  local_50 = FUN_148978c44;
  local_48 = 0;
  FUN_145ab7872(local_40,param_1);
  lVar6 = *(longlong *)(param_1 + 0xc0);
  if (lVar6 == 0) {
    uVar4 = FUN_145cd97be();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xc0) = lVar6;
  }
  lVar5 = *(longlong *)(param_1 + 200);
  if (((lVar5 != 0) || (lVar5 = 0, lVar6 == 0)) || (*(longlong *)(param_1 + 0xb8) == 0))
  goto LAB_145ab7653;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145ab768c:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_145ab768c;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0xb8));
  }
  *(longlong *)(param_1 + 200) = lVar5;
LAB_145ab7653:
  FUN_145ab76ac(uVar1,param_2,lVar5,local_40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab76ac FUN_145ab76ac body=208 status=ok
// SIG undefined FUN_145ab76ac(void)

undefined8 * FUN_145ab76ac(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x28);
      lVar1 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
      do {
        if (*plVar2 == param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145ab7710;
          break;
        }
        plVar2 = plVar2 + 6;
        lVar1 = lVar1 + -0x30;
      } while (lVar1 != 0);
    }
    plVar2 = (longlong *)FUN_1458be766(param_1 + 0x28);
    *plVar2 = param_3;
LAB_145ab7710:
    local_38 = 0;
    local_30 = 0;
    FUN_145ab777e(&local_38,param_4);
    FUN_1404e4072(plVar2 + 3,param_2,&local_38);
    FUN_1449db362(&local_38);
  }
  FUN_1449db362(param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab777e FUN_145ab777e body=124 status=ok
// SIG undefined FUN_145ab777e(void)

void FUN_145ab777e(longlong *param_1,longlong *param_2)

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



// FUNCTION 145ab77fc FUN_145ab77fc body=118 status=ok
// SIG undefined FUN_145ab77fc(void)

void FUN_145ab77fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e010;
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



// FUNCTION 145ab7872 FUN_145ab7872 body=428 status=ok
// SIG undefined FUN_145ab7872(void)

longlong * FUN_145ab7872(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_145ab7952:
    *puVar5 = &PTR_LAB_14b42a6d0;
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
    *puVar5 = &PTR_FUN_14b428600;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ab7952;
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
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a6d0;
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
    *puVar5 = &PTR_FUN_14b428600;
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



// FUNCTION 145ab7a1e FUN_145ab7a1e body=37 status=ok
// SIG undefined FUN_145ab7a1e(void)

void FUN_145ab7a1e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x5e0);
  FUN_145ab7a44(param_2);
  return;
}



// FUNCTION 145ab7a44 FUN_145ab7a44 body=515 status=ok
// SIG undefined FUN_145ab7a44(void)

undefined8 * FUN_145ab7a44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141493208();
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = &PTR_FUN_14b6e3090;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3ff00000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0x3ff0000000000000;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x3ff00000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0x3ff0000000000000;
  param_1[0x6f] = 0x3ff0000000000000;
  param_1[0x70] = 0x3ff0000000000000;
  param_1[0x71] = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0x3fa000003eb33333;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0x200000000;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0x200000000;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0x200000000;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0x200000000;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3ff00000;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0x3ff0000000000000;
  param_1[0x99] = 0x3ff0000000000000;
  param_1[0x9a] = 0x3ff0000000000000;
  param_1[0x9b] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0x3f800000;
  param_1[0xa9] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xa7] = DAT_14c8464e0;
  param_1[0xa8] = uVar1;
  param_1[0xac] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xaa] = DAT_14c8464e0;
  param_1[0xab] = uVar1;
  param_1[0xba] = 0;
  return param_1;
}



// FUNCTION 145ab7c48 FUN_145ab7c48 body=40 status=ok
// SIG undefined FUN_145ab7c48(void)

undefined8 FUN_145ab7c48(undefined8 param_1,int param_2)

{
  FUN_145ab7c70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab7c70 FUN_145ab7c70 body=70 status=ok
// SIG undefined FUN_145ab7c70(void)

void FUN_145ab7c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2145b0;
  param_1[0xd] = &PTR_FUN_14b214890;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab7cb6(param_1 + 0xe);
  FUN_1458ea31e(param_1);
  return;
}



// FUNCTION 145ab7cb6 FUN_145ab7cb6 body=99 status=ok
// SIG undefined FUN_145ab7cb6(void)

void FUN_145ab7cb6(longlong *param_1)

{
  FUN_145ab7d4a(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab7d19(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab7d19(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab7d19 FUN_145ab7d19 body=49 status=ok
// SIG undefined FUN_145ab7d19(void)

void FUN_145ab7d19(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ab7d4a FUN_145ab7d4a body=49 status=ok
// SIG undefined FUN_145ab7d4a(void)

void FUN_145ab7d4a(longlong param_1,int param_2)

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



// FUNCTION 145ab7d7c FUN_145ab7d7c body=52 status=ok
// SIG undefined FUN_145ab7d7c(void)

longlong FUN_145ab7d7c(longlong param_1,int param_2)

{
  FUN_145ab7db0(param_1 + 0x28);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab7db0 FUN_145ab7db0 body=120 status=ok
// SIG undefined FUN_145ab7db0(void)

void FUN_145ab7db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8cb80;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab7e28(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab7e5e(param_1 + 3);
  return;
}



// FUNCTION 145ab7e28 FUN_145ab7e28 body=53 status=ok
// SIG undefined FUN_145ab7e28(void)

void FUN_145ab7e28(longlong *param_1)

{
  FUN_145ab7e94();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab7e5e FUN_145ab7e5e body=53 status=ok
// SIG undefined FUN_145ab7e5e(void)

void FUN_145ab7e5e(longlong *param_1)

{
  FUN_145ab8014();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab7e94 FUN_145ab7e94 body=382 status=ok
// SIG undefined FUN_145ab7e94(void)

void FUN_145ab7e94(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1468bfd3c(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145ab8014 FUN_145ab8014 body=382 status=ok
// SIG undefined FUN_145ab8014(void)

void FUN_145ab8014(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1468bfd3c(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145ab8194 FUN_145ab8194 body=169 status=ok
// SIG undefined FUN_145ab8194(void)

void FUN_145ab8194(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x450);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x7a] = 0;
  param_2[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_2 + 0x3e4) = 0;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_2 + 0x82) = 0;
  param_2[0x87] = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  *param_2 = &PTR_FUN_14b2e9450;
  param_2[0x89] = 0;
  return;
}



// FUNCTION 145ab823e FUN_145ab823e body=180 status=ok
// SIG undefined FUN_145ab823e(void)

longlong * FUN_145ab823e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145ab82ca;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145ab82f4(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_145ab82ca:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 145ab82f4 FUN_145ab82f4 body=266 status=ok
// SIG undefined FUN_145ab82f4(void)

undefined4 * FUN_145ab82f4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_145ab847a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_145ab8400(param_1,param_3,local_40,local_48);
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
      FUN_1414932a2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab8400 FUN_145ab8400 body=122 status=ok
// SIG undefined FUN_145ab8400(void)

undefined8 FUN_145ab8400(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
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
          FUN_147080a7c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 145ab847a FUN_145ab847a body=231 status=ok
// SIG undefined FUN_145ab847a(void)

int * FUN_145ab847a(longlong *param_1,int *param_2)

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



// FUNCTION 145ab856a FUN_145ab856a body=115 status=ok
// SIG undefined FUN_145ab856a(void)

undefined8 * FUN_145ab856a(undefined8 *param_1)

{
  FUN_140dbffdc();
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14a60b3d0;
  param_1[6] = &PTR_LAB_14a60b690;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 145ab85e8 FUN_145ab85e8 body=112 status=ok
// SIG undefined FUN_145ab85e8(void)

undefined8 * FUN_145ab85e8(undefined8 *param_1)

{
  FUN_145902de4();
  *param_1 = &PTR_FUN_14a73f2c0;
  param_1[5] = &PTR_FUN_14a73f8c0;
  param_1[6] = &PTR_LAB_14a73f900;
  param_1[0x71] = 0;
  FUN_144894d4c(param_1 + 0x74);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf5 | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(undefined1 *)(param_1 + 0x72) = 0;
  return param_1;
}



// FUNCTION 145ab8658 FUN_145ab8658 body=69 status=ok
// SIG undefined FUN_145ab8658(void)

undefined8 * FUN_145ab8658(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b630940;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab869e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab869e FUN_145ab869e body=54 status=ok
// SIG undefined FUN_145ab869e(void)

void FUN_145ab869e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b657560;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ab86dc FUN_145ab86dc body=114 status=ok
// SIG undefined FUN_145ab86dc(void)

undefined4 FUN_145ab86dc(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140c1ab54(param_2);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_144a7cdd6(param_2,0);
    FUN_1446ddc76(&local_28,uVar2,1);
    *param_1 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab8756 FUN_145ab8756 body=126 status=ok
// SIG undefined FUN_145ab8756(void)

void FUN_145ab8756(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  uVar1 = FUN_145ab87d6(param_1 + 0x118,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                        &local_30);
  FUN_145ab885e(param_1,param_2,uVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab87d6 FUN_145ab87d6 body=135 status=ok
// SIG undefined FUN_145ab87d6(void)

longlong FUN_145ab87d6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_145ab88e6();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_145ab8823;
  }
  local_30 = param_3;
  FUN_145ab8ba2(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145ab8823:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x18 + 8;
}



// FUNCTION 145ab885e FUN_145ab885e body=135 status=ok
// SIG undefined FUN_145ab885e(void)

void FUN_145ab885e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 == 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_40 = local_30;
    local_38 = param_1;
    FUN_145ab89da(param_2 + 0xc10,&local_48);
    *param_3 = local_48;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab88e6 FUN_145ab88e6 body=186 status=ok
// SIG undefined FUN_145ab88e6(void)

int FUN_145ab88e6(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_145ab89a2(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145ab890f;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145ab890f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145ab89a2 FUN_145ab89a2 body=55 status=ok
// SIG undefined FUN_145ab89a2(void)

ulonglong FUN_145ab89a2(int *param_1,int *param_2)

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



// FUNCTION 145ab89da FUN_145ab89da body=220 status=ok
// SIG undefined FUN_145ab89da(void)

undefined8 FUN_145ab89da(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b412ca0;
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
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14b412c30;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(local_38 + 3) = *param_3;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar1;
  *(undefined4 *)(local_38 + 4) = uVar2;
  *(undefined4 *)((longlong)local_38 + 0x24) = uVar3;
  FUN_145ab8ab8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab8ab8 FUN_145ab8ab8 body=216 status=ok
// SIG undefined FUN_145ab8ab8(void)

undefined8 * FUN_145ab8ab8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ab8ba2 FUN_145ab8ba2 body=275 status=ok
// SIG undefined FUN_145ab8ba2(void)

undefined4 * FUN_145ab8ba2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_145ab8d3c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_145ab8cb6(param_1,param_3,local_40,local_48);
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
      FUN_145ab8e24(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab8cb6 FUN_145ab8cb6 body=132 status=ok
// SIG undefined FUN_145ab8cb6(void)

undefined8 FUN_145ab8cb6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_145a483b0();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_145a485f0(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_145ab8cda;
    }
  }
  uVar6 = 0;
LAB_145ab8cda:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab8d3c FUN_145ab8d3c body=231 status=ok
// SIG undefined FUN_145ab8d3c(void)

int * FUN_145ab8d3c(longlong *param_1,int *param_2)

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



// FUNCTION 145ab8e24 FUN_145ab8e24 body=445 status=ok
// SIG undefined FUN_145ab8e24(void)

void FUN_145ab8e24(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145ab8fe2 FUN_145ab8fe2 body=40 status=ok
// SIG undefined FUN_145ab8fe2(void)

undefined8 FUN_145ab8fe2(undefined8 param_1,int param_2)

{
  FUN_145ab900a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab900a FUN_145ab900a body=117 status=ok
// SIG undefined FUN_145ab900a(void)

void FUN_145ab900a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3e6300;
  param_1[6] = &PTR_FUN_14a3e65e0;
  FUN_144717c65(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9080(param_1 + 8);
  FUN_1410891e4(param_1);
  return;
}



// FUNCTION 145ab9080 FUN_145ab9080 body=53 status=ok
// SIG undefined FUN_145ab9080(void)

void FUN_145ab9080(longlong *param_1)

{
  FUN_145ab90b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab90b6 FUN_145ab90b6 body=343 status=ok
// SIG undefined FUN_145ab90b6(void)

void FUN_145ab90b6(longlong *param_1)

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
      FUN_147486bfa(*local_68 + (longlong)iStack_4c * 0x70 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
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



// FUNCTION 145ab920e FUN_145ab920e body=64 status=ok
// SIG undefined FUN_145ab920e(void)

longlong FUN_145ab920e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ab9294(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_145ab924e(lVar2,1);
  return lVar2;
}



// FUNCTION 145ab924e FUN_145ab924e body=70 status=ok
// SIG undefined FUN_145ab924e(void)

void FUN_145ab924e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    param_1[10] = 0;
    param_1 = param_1 + 0xb;
  }
  return;
}



// FUNCTION 145ab9294 FUN_145ab9294 body=143 status=ok
// SIG undefined FUN_145ab9294(void)

void FUN_145ab9294(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ab932e FUN_145ab932e body=68 status=ok
// SIG undefined FUN_145ab932e(void)

void FUN_145ab932e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b819e50;
  FUN_14592696e(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145ab9372 FUN_145ab9372 body=179 status=ok
// SIG undefined FUN_145ab9372(void)

bool FUN_145ab9372(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 145ab9434 FUN_145ab9434 body=148 status=ok
// SIG undefined FUN_145ab9434(void)

void FUN_145ab9434(longlong *param_1)

{
  if (param_1[0x3b] != 0) {
    FUN_140113f3a();
    param_1[0x3b] = 0;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab94c8(param_1 + 0x31);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9500(param_1 + 9);
  FUN_1414938c5(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab94c8 FUN_145ab94c8 body=55 status=ok
// SIG undefined FUN_145ab94c8(void)

void FUN_145ab94c8(longlong *param_1)

{
  FUN_145ab958e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab9500 FUN_145ab9500 body=141 status=ok
// SIG undefined FUN_145ab9500(void)

void FUN_145ab9500(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab958e FUN_145ab958e body=386 status=ok
// SIG undefined FUN_145ab958e(void)

void FUN_145ab958e(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x28 + lVar5 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar5 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140b7ce44(param_1,param_2);
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ab9712 FUN_145ab9712 body=520 status=ok
// SIG undefined FUN_145ab9712(void)

void FUN_145ab9712(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  int local_154;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_154 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_154);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_154);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_38;
  local_178 = local_48;
  uStack_174 = uStack_44;
  uStack_170 = uStack_40;
  uStack_16c = uStack_3c;
  local_188 = local_154 != 0;
  puVar3 = local_150;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_145ab991c(param_1,&local_178,iVar2 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab991c FUN_145ab991c body=95 status=ok
// SIG undefined FUN_145ab991c(void)

void FUN_145ab991c(undefined8 param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = param_5;
  FUN_14020f670(local_28,&local_28,param_3,param_4);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab9984 FUN_145ab9984 body=100 status=ok
// SIG undefined FUN_145ab9984(void)

undefined8 * FUN_145ab9984(undefined8 *param_1)

{
  FUN_145874842();
  *param_1 = &PTR_FUN_14b652b70;
  param_1[5] = &PTR_LAB_14b653010;
  param_1[6] = &PTR_LAB_14b653050;
  FUN_140f23ff6(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x239) = 0;
  *(undefined8 *)((longlong)param_1 + 0x241) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  return param_1;
}



// FUNCTION 145ab99e8 FUN_145ab99e8 body=104 status=ok
// SIG undefined FUN_145ab99e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ab99e8(void)

{
  _DAT_14ca812d8 = 0;
  if (DAT_14ca812d0 != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9a50(&DAT_14ca81290);
  DAT_14ca81288 = 0;
  if (DAT_14ca81280 != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9a50(&DAT_14ca81240);
                    /* WARNING: Could not recover jumptable at 0x000145ab9a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  return;
}



// FUNCTION 145ab9a50 FUN_145ab9a50 body=53 status=ok
// SIG undefined FUN_145ab9a50(void)

void FUN_145ab9a50(longlong *param_1)

{
  FUN_145ab9a86();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab9a86 FUN_145ab9a86 body=90 status=ok
// SIG undefined FUN_145ab9a86(void)

void FUN_145ab9a86(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 145ab9ae0 FUN_145ab9ae0 body=69 status=ok
// SIG undefined FUN_145ab9ae0(void)

void FUN_145ab9ae0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_145ab9b26(param_1 + 0xa8,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab9b26 FUN_145ab9b26 body=107 status=ok
// SIG undefined FUN_145ab9b26(void)

void FUN_145ab9b26(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ab9b92(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 145ab9b92 FUN_145ab9b92 body=132 status=ok
// SIG undefined FUN_145ab9b92(void)

void FUN_145ab9b92(longlong param_1,int param_2)

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



// FUNCTION 145ab9c16 FUN_145ab9c16 body=38 status=ok
// SIG undefined FUN_145ab9c16(void)

undefined8 FUN_145ab9c16(undefined8 param_1,int param_2)

{
  FUN_145ab9c3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab9c3c FUN_145ab9c3c body=135 status=ok
// SIG undefined FUN_145ab9c3c(void)

void FUN_145ab9c3c(longlong param_1)

{
  longlong lVar1;
  
  FUN_14024d953(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_14024d99c(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9cc4(param_1 + 0x30);
  lVar1 = 0x20;
  do {
    FUN_141493904(*(undefined8 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 8 + lVar1));
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 145ab9cc4 FUN_145ab9cc4 body=80 status=ok
// SIG undefined FUN_145ab9cc4(void)

void FUN_145ab9cc4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0xf0;
  do {
    FUN_14476820c(param_1 + lVar1);
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != 0x90);
  FUN_14476820c(param_1 + 0x90);
  FUN_14476820c(param_1 + 0x60);
  FUN_14476820c(param_1 + 0x30);
  FUN_14476820c(param_1);
  return;
}



// FUNCTION 145ab9d14 FUN_145ab9d14 body=40 status=ok
// SIG undefined FUN_145ab9d14(void)

undefined8 FUN_145ab9d14(undefined8 param_1,int param_2)

{
  FUN_145ab9d3c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ab9d3c FUN_145ab9d3c body=230 status=ok
// SIG undefined FUN_145ab9d3c(void)

void FUN_145ab9d3c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bd827f0;
  param_1[5] = &PTR_FUN_14bd82be0;
  param_1[0x13] = &PTR_FUN_14bd82c00;
  param_1[0x15] = &PTR_FUN_14bd82c30;
  param_1[0x16] = &PTR_FUN_14bd82c70;
  param_1[0x20] = &PTR_FUN_14bd82ca0;
  lVar1 = param_1[0x2fd];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_145cbfe42(param_1 + 0x29e);
  FUN_1457e5b52(param_1 + 0x282);
  FUN_14008cd94(param_1 + 0x25e);
  FUN_1456c3cc8(param_1 + 0x240);
  FUN_145ab9fdc(param_1 + 0x210);
  FUN_145aba0b4(param_1 + 0x1e2);
  FUN_145ab9e22(param_1 + 0x12e);
  FUN_145ab9f74(param_1 + 0x86);
  FUN_14008cd94(param_1 + 0x3c);
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145ab9e22 FUN_145ab9e22 body=103 status=ok
// SIG undefined FUN_145ab9e22(void)

void FUN_145ab9e22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd8c2b0;
  FUN_14008cd94(param_1 + 0x86);
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9e8a(param_1 + 0x7c);
  FUN_14008cd94(param_1 + 0x58);
  FUN_145ab9ec0(param_1 + 0x16);
  return;
}



// FUNCTION 145ab9e8a FUN_145ab9e8a body=53 status=ok
// SIG undefined FUN_145ab9e8a(void)

void FUN_145ab9e8a(longlong *param_1)

{
  FUN_145ab9f1a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab9ec0 FUN_145ab9ec0 body=89 status=ok
// SIG undefined FUN_145ab9ec0(void)

void FUN_145ab9ec0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af19160;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145be4b94(param_1);
  return;
}



// FUNCTION 145ab9f1a FUN_145ab9f1a body=90 status=ok
// SIG undefined FUN_145ab9f1a(void)

void FUN_145ab9f1a(longlong param_1)

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



// FUNCTION 145ab9f74 FUN_145ab9f74 body=103 status=ok
// SIG undefined FUN_145ab9f74(void)

void FUN_145ab9f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd8c250;
  FUN_14008cd94(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab9e8a(param_1 + 0x7a);
  FUN_14008cd94(param_1 + 0x56);
  FUN_145ab9ec0(param_1 + 0x14);
  return;
}



// FUNCTION 145ab9fdc FUN_145ab9fdc body=128 status=ok
// SIG undefined FUN_145ab9fdc(void)

void FUN_145ab9fdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14af18420;
  FUN_145a45466(param_1 + 0x17);
  if (param_1[0xe] != 0) {
    plVar2 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[2] != 0) {
    plVar2 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x000145aba046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}



// FUNCTION 145aba074 FUN_145aba074 body=31 status=ok
// SIG undefined FUN_145aba074(void)

undefined8 FUN_145aba074(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba094 FUN_145aba094 body=31 status=ok
// SIG undefined FUN_145aba094(void)

undefined8 FUN_145aba094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba0b4 FUN_145aba0b4 body=307 status=ok
// SIG undefined FUN_145aba0b4(void)

void FUN_145aba0b4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae728b0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145aba20f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145aba1e7(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145aba23b(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  plVar1 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[4];
  }
                    /* WARNING: Could not recover jumptable at 0x000145aba1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



// FUNCTION 145aba1e7 FUN_145aba1e7 body=40 status=ok
// SIG undefined FUN_145aba1e7(void)

void FUN_145aba1e7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1482aaf30(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 145aba20f FUN_145aba20f body=44 status=ok
// SIG undefined FUN_145aba20f(void)

void FUN_145aba20f(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_146c7d752(param_1);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aba23b FUN_145aba23b body=49 status=ok
// SIG undefined FUN_145aba23b(void)

void FUN_145aba23b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aba26c FUN_145aba26c body=109 status=ok
// SIG undefined FUN_145aba26c(void)

int FUN_145aba26c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aba2da FUN_145aba2da body=24 status=ok
// SIG undefined FUN_145aba2da(void)

void FUN_145aba2da(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aba2ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145aba2f2 FUN_145aba2f2 body=38 status=ok
// SIG undefined FUN_145aba2f2(void)

undefined8 FUN_145aba2f2(undefined8 param_1,int param_2)

{
  FUN_140e9e952();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba318 FUN_145aba318 body=40 status=ok
// SIG undefined FUN_145aba318(void)

undefined8 FUN_145aba318(undefined8 param_1,int param_2)

{
  FUN_145aba340();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba340 FUN_145aba340 body=84 status=ok
// SIG undefined FUN_145aba340(void)

void FUN_145aba340(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a169c20;
  param_1[5] = &PTR_FUN_14a169ed0;
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aba394 FUN_145aba394 body=38 status=ok
// SIG undefined FUN_145aba394(void)

undefined8 FUN_145aba394(undefined8 param_1,int param_2)

{
  FUN_145aba3ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba3ba FUN_145aba3ba body=24 status=ok
// SIG undefined FUN_145aba3ba(void)

void FUN_145aba3ba(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14a1e5c30;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 145aba3d2 FUN_145aba3d2 body=24 status=ok
// SIG undefined FUN_145aba3d2(void)

void FUN_145aba3d2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aba3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145aba3ea FUN_145aba3ea body=38 status=ok
// SIG undefined FUN_145aba3ea(void)

undefined8 FUN_145aba3ea(undefined8 param_1,int param_2)

{
  FUN_141698b5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba41c FUN_145aba41c body=51 status=ok
// SIG undefined FUN_145aba41c(void)

undefined8 * FUN_145aba41c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a628dc0;
  param_1[5] = 0;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145aba45a FUN_145aba45a body=51 status=ok
// SIG undefined FUN_145aba45a(void)

undefined8 * FUN_145aba45a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14a6ba700;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145aba49a FUN_145aba49a body=51 status=ok
// SIG undefined FUN_145aba49a(void)

void FUN_145aba49a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_14ad4f3d0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145aba4cd FUN_145aba4cd body=68 status=ok
// SIG undefined FUN_145aba4cd(void)

void FUN_145aba4cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145aba512(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1fdb10;
  puVar1[5] = &PTR_FUN_14b1fddc8;
  puVar1[8] = &PTR_FUN_14b1fdde0;
  FUN_145aba54a(puVar1 + 9);
  return;
}



// FUNCTION 145aba512 FUN_145aba512 body=55 status=ok
// SIG undefined FUN_145aba512(void)

undefined8 * FUN_145aba512(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  *param_1 = &PTR_FUN_14a169f70;
  param_1[5] = &PTR_FUN_14a16a228;
  return param_1;
}



// FUNCTION 145aba54a FUN_145aba54a body=89 status=ok
// SIG undefined FUN_145aba54a(void)

undefined8 * FUN_145aba54a(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b208f00;
  FUN_145aba5a4(param_1 + 3);
  param_1[3] = &PTR_FUN_14b3ee298;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42960000;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x43b40000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 145aba5a4 FUN_145aba5a4 body=36 status=ok
// SIG undefined FUN_145aba5a4(void)

void FUN_145aba5a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1fcb10;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43340000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 145aba5d0 FUN_145aba5d0 body=54 status=ok
// SIG undefined FUN_145aba5d0(void)

undefined8 * FUN_145aba5d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a61c0;
  return param_1;
}



// FUNCTION 145aba60e FUN_145aba60e body=54 status=ok
// SIG undefined FUN_145aba60e(void)

undefined8 * FUN_145aba60e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a6480;
  return param_1;
}



// FUNCTION 145aba64c FUN_145aba64c body=54 status=ok
// SIG undefined FUN_145aba64c(void)

undefined8 * FUN_145aba64c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a6740;
  return param_1;
}



// FUNCTION 145aba698 FUN_145aba698 body=145 status=ok
// SIG undefined FUN_145aba698(void)

void FUN_145aba698(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_InFlight",1);
    FUN_140721fbe(param_1 + 0x265,local_20);
  }
  else if (*(char *)((longlong)param_1 + 0x136c) == '\x01') {
    (**(code **)(*param_1 + 0x688))(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aba73e FUN_145aba73e body=40 status=ok
// SIG undefined FUN_145aba73e(void)

undefined8 FUN_145aba73e(undefined8 param_1,int param_2)

{
  FUN_145aba766();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba766 FUN_145aba766 body=84 status=ok
// SIG undefined FUN_145aba766(void)

void FUN_145aba766(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b554bb0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aba7d2 FUN_145aba7d2 body=102 status=ok
// SIG undefined FUN_145aba7d2(void)

void FUN_145aba7d2(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_c = 0;
    local_20 = DAT_14cbc5600;
    local_18 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_20,1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aba83a FUN_145aba83a body=40 status=ok
// SIG undefined FUN_145aba83a(void)

undefined8 FUN_145aba83a(undefined8 param_1,int param_2)

{
  FUN_145aba862();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba862 FUN_145aba862 body=97 status=ok
// SIG undefined FUN_145aba862(void)

void FUN_145aba862(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b648c50;
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
  FUN_145aba8c3(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145aba8c3 FUN_145aba8c3 body=49 status=ok
// SIG undefined FUN_145aba8c3(void)

void FUN_145aba8c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aba8f4 FUN_145aba8f4 body=24 status=ok
// SIG undefined FUN_145aba8f4(void)

void FUN_145aba8f4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aba908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145aba90c FUN_145aba90c body=38 status=ok
// SIG undefined FUN_145aba90c(void)

undefined8 FUN_145aba90c(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aba932 FUN_145aba932 body=204 status=ok
// SIG undefined FUN_145aba932(void)

void FUN_145aba932(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (int)((ulonglong)(param_1[1] - *param_1) >> 2) + (DAT_14cc0c598 - DAT_14cc0c5c4);
  if ((uint)(DAT_14cc0c598 - DAT_14cc0c5c4) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_145abae54(uVar3);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cc0c5d8 == 0) || (DAT_14cc0c5d8 < iVar2)) {
      DAT_14cc0c5d8 = iVar2;
      FUN_145abaca2(&DAT_14cc0c590);
    }
  }
  lVar4 = *param_1;
  lVar1 = param_1[1];
  if (lVar4 != lVar1) {
    do {
      FUN_145abaa00(local_24,lVar4);
      lVar4 = lVar4 + 4;
    } while (lVar4 != lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abaa00 FUN_145abaa00 body=319 status=ok
// SIG undefined FUN_145abaa00(void)

undefined4 * FUN_145abaa00(undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ababbc(&DAT_14cc0c590,local_48);
  uVar6 = *param_2;
  *local_40 = uVar6;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_145abab40(&DAT_14cc0c590,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = DAT_14cc0c598 - DAT_14cc0c5c4;
    if (uVar4 < 4) {
      iVar8 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= DAT_14cc0c5d8)) {
      uVar6 = DAT_14cc0c5d8 - 1U & uVar6;
      local_40[2] = uVar6;
      puVar5 = DAT_14cc0c5d0;
      if (DAT_14cc0c5d0 == (undefined *)0x0) {
        puVar5 = &DAT_14cc0c5c8;
      }
      local_40[1] = *(uint *)(puVar5 + ((longlong)DAT_14cc0c5d8 - 1U & (longlong)(int)uVar6) * 4);
      puVar5 = DAT_14cc0c5d0;
      if (DAT_14cc0c5d0 == (undefined *)0x0) {
        puVar5 = &DAT_14cc0c5c8;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cc0c5d8 - 1U & (longlong)(int)uVar6) * 4) = local_4c
      ;
    }
    else {
      DAT_14cc0c5d8 = iVar8;
      FUN_145abaca2(&DAT_14cc0c590);
    }
  }
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abab40 FUN_145abab40 body=124 status=ok
// SIG undefined FUN_145abab40(void)

undefined8 FUN_145abab40(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_14932a972(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ababbc FUN_145ababbc body=230 status=ok
// SIG undefined FUN_145ababbc(void)

int * FUN_145ababbc(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 145abaca2 FUN_145abaca2 body=433 status=ok
// SIG undefined FUN_145abaca2(void)

void FUN_145abaca2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145abae54 FUN_145abae54 body=487 status=ok
// SIG undefined FUN_145abae54(void)

void FUN_145abae54(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cc0c598;
  uVar9 = param_1 - DAT_14cc0c598;
  if (uVar9 != 0 && DAT_14cc0c598 <= (int)param_1) {
    iVar8 = DAT_14cc0c598;
    if (DAT_14cc0c59c < (int)param_1) {
      FUN_1447a08a2(&DAT_14cc0c590);
      iVar8 = DAT_14cc0c598;
    }
    DAT_14cc0c598 = iVar8 + uVar9;
    if ((uint)(DAT_14cc0c59c - iVar8) < uVar9) {
      FUN_1447cc1b4(&DAT_14cc0c590);
    }
    lVar2 = DAT_14cc0c590;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)(DAT_14cc0c590 + (ulonglong)param_1 * 0xc + -8);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cc0c5c4 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cc0c5c0 * 0xc) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cc0c5c4) {
          iVar13 = DAT_14cc0c5c0;
        }
        *piVar7 = iVar13;
        DAT_14cc0c5c4 = DAT_14cc0c5c4 + 1;
        piVar7 = piVar7 + -3;
        uVar12 = uVar1;
        DAT_14cc0c5c0 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      DAT_14cc0c5b8 = uVar9;
      if (param_1 != 0) {
        uVar10 = uVar9 + 0x1f >> 5;
        if (DAT_14cc0c5bc + 0x1f >> 5 < uVar10) {
          FUN_14499171c(&DAT_14cc0c5a0,0,uVar10,4);
          DAT_14cc0c5bc = uVar9 + 0x1f & 0xffffffe0;
        }
        puVar6 = DAT_14cc0c5b0;
        if (DAT_14cc0c5b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cc0c5a0;
        }
        if (uVar9 < 0x101) {
          uVar10 = uVar10 + (uVar10 == 0);
        }
        memset(puVar6,0,(ulonglong)(uVar10 << 2));
        uVar9 = DAT_14cc0c5b8 + 0x1f;
        if (-1 < (int)DAT_14cc0c5b8) {
          uVar9 = DAT_14cc0c5b8;
        }
        if ((int)DAT_14cc0c5b8 % 0x20 != 0) {
          puVar6 = &DAT_14cc0c5a0;
          if (DAT_14cc0c5b0 != (undefined *)0x0) {
            puVar6 = DAT_14cc0c5b0;
          }
          bVar5 = -(char)((int)DAT_14cc0c5b8 % 0x20);
          *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
               (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cc0c5a0,uVar9);
      FUN_1447c6044(&DAT_14cc0c5a0,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 145abb046 FUN_145abb046 body=228 status=ok
// SIG undefined FUN_145abb046(void)

longlong FUN_145abb046(void)

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
  if (DAT_14cbac940 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635ee46;
    local_38 = &LAB_148c2ec37;
    local_40 = FUN_1465e300f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xca0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMainMenuCameraComponent",&DAT_14cbac940,FUN_1465e2fe8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbac940;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abb12c FUN_145abb12c body=221 status=ok
// SIG undefined FUN_145abb12c(void)

void FUN_145abb12c(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_1 + 0x12) == '\0') {
    local_40 = *param_2;
    local_48 = *(undefined4 *)(param_2 + 1);
    if (*param_1 == 0) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x1172,
                    L"%s.%.*s: Subobject class setup is only allowed in base class constructor call (in the initialization list)"
                    ,L"NULL");
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
    FUN_144750a86(*param_1,&local_30,0,0);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x1172,
                  L"%s.%.*s: Subobject class setup is only allowed in base class constructor call (in the initialization list)"
                  ,puVar1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145abb20c FUN_145abb20c body=369 status=ok
// SIG undefined FUN_145abb20c(void)

void FUN_145abb20c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  uVar4 = (ulonglong)(int)param_2[1];
  psVar7 = (short *)*param_2;
  if (0 < (longlong)uVar4) {
    psVar2 = psVar7 + uVar4;
    do {
      iVar6 = 1;
      psVar3 = psVar7;
      while (*psVar3 != 0x2e) {
        psVar3 = psVar3 + 1;
        iVar6 = iVar6 + 1;
        if (psVar2 <= psVar3) goto LAB_145abb263;
      }
      if (iVar6 == 0) goto LAB_145abb263;
      FUN_1446f82e2(&local_58,iVar6 + -1,psVar7,1);
      uVar4 = uStack_40;
      lVar5 = (longlong)(int)uStack_40;
      uVar1 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
      if (uStack_40._4_4_ < uVar1) {
        FUN_1446f84a2(&local_48,uVar4 & 0xffffffff);
      }
      *(longlong *)(local_48 + lVar5 * 8) = local_58;
      psVar7 = (short *)((longlong)iVar6 * 2 + *param_2);
      *param_2 = (longlong)psVar7;
      lVar5 = param_2[1];
      uVar1 = (int)lVar5 - iVar6;
      uVar4 = (ulonglong)uVar1;
      *(uint *)(param_2 + 1) = uVar1;
      psVar2 = psVar7 + uVar4;
    } while (0 < (int)uVar1);
    uVar4 = (ulonglong)(uint)((int)lVar5 - iVar6);
  }
LAB_145abb263:
  FUN_1446f82e2(&local_58,uVar4,psVar7,1);
  uVar4 = uStack_40;
  lVar5 = (longlong)(int)uStack_40;
  uVar1 = (int)uStack_40 + 1;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
  if (uStack_40._4_4_ < uVar1) {
    FUN_1446f84a2(&local_48,uVar4 & 0xffffffff);
  }
  *(longlong *)(local_48 + lVar5 * 8) = local_58;
  local_58 = local_48;
  local_50 = (int)uStack_40;
  local_68 = local_48;
  local_60 = (int)uStack_40;
  local_5c = local_4c;
  FUN_145abb37e(param_1,&local_68,param_3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abb37e FUN_145abb37e body=411 status=ok
// SIG undefined FUN_145abb37e(void)

void FUN_145abb37e(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)*param_2;
  if ((int)param_2[1] < 2) {
    if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      FUN_14048646a(param_1,lVar2,param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar1 = (int)param_1[0x21];
  lVar5 = (longlong)iVar1;
  if (0 < lVar5) {
    plVar3 = (longlong *)param_1[0x20];
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      plVar4 = param_1;
    }
    lVar6 = 0;
    do {
      if (*plVar4 == lVar2) goto LAB_145abb46b;
      lVar6 = lVar6 + 1;
      plVar4 = plVar4 + 4;
    } while (lVar5 != lVar6);
  }
  *(uint *)(param_1 + 0x21) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14690404a(param_1,iVar1);
  }
  plVar3 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar3 = param_1;
  }
  plVar3[lVar5 * 4] = lVar2;
  plVar3[lVar5 * 4 + 1] = 0;
  (plVar3 + lVar5 * 4 + 1)[1] = 0;
  *(undefined1 *)(plVar3 + lVar5 * 4 + 3) = 0;
  plVar3 = (longlong *)param_1[0x20];
  lVar6 = lVar5;
LAB_145abb46b:
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1;
  }
  if (plVar3[lVar6 * 4 + 2] == 0) {
    _Dst = (void *)FUN_14001cc68(0x110);
    memset(_Dst,0,0x110);
    *(undefined4 *)((longlong)_Dst + 0x10c) = 8;
    lVar2 = plVar3[lVar6 * 4 + 2];
    plVar3[lVar6 * 4 + 2] = (longlong)_Dst;
    if (lVar2 != 0) {
      FUN_1447240f2(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  plVar3 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar3 = param_1;
  }
  if (param_4 == (longlong *)0x0) {
    param_4 = param_2;
  }
  local_50 = (int)param_2[1] + -1;
  local_58 = *param_2 + 8;
  FUN_145abb37e(plVar3[lVar6 * 4 + 2],&local_58,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 145abb52c FUN_145abb52c body=609 status=ok
// SIG undefined FUN_145abb52c(void)

undefined8 * FUN_145abb52c(undefined8 *param_1)

{
  FUN_1410b71be();
  *param_1 = &PTR_FUN_14b92de50;
  param_1[0x72] = &PTR_FUN_14b92e4f0;
  param_1[0x73] = &PTR_FUN_14b92e510;
  param_1[0x74] = &PTR_FUN_14b92e540;
  param_1[0x75] = &PTR_FUN_14b92e550;
  param_1[0x76] = &PTR_FUN_14b92e5c0;
  param_1[0x77] = &PTR_FUN_14b92e5f0;
  param_1[0x78] = &PTR_FUN_14b92e620;
  param_1[0x7f] = &PTR_FUN_14b92e6d0;
  param_1[0x80] = &PTR_FUN_14b92e740;
  param_1[0x81] = &PTR_FUN_14b92e7b0;
  param_1[0x82] = &PTR_FUN_14b92e7e0;
  param_1[0x83] = &PTR_FUN_14b92e820;
  param_1[0x84] = &PTR_FUN_14b92e8c0;
  param_1[0x85] = &PTR_FUN_14b92e8e0;
  param_1[0x89] = &PTR_FUN_14b92e900;
  param_1[0x8a] = &PTR_FUN_14b92e9c0;
  param_1[0x8b] = &PTR_FUN_14b92ea40;
  param_1[0x8c] = &PTR_FUN_14b92ea90;
  param_1[0x8d] = &PTR_FUN_14b92ead0;
  param_1[0x8e] = &PTR_FUN_14b92eaf0;
  param_1[0x8f] = &PTR_FUN_14b92eb10;
  param_1[0x90] = &PTR_FUN_14b92eb30;
  param_1[0x91] = &PTR_FUN_14b92eb50;
  param_1[0x92] = &PTR_FUN_14b92eb70;
  param_1[0x93] = &PTR_FUN_14b92eb90;
  param_1[0x94] = &PTR_FUN_14b92ebb0;
  param_1[0x95] = &PTR_FUN_14b92ebd0;
  param_1[0x96] = &PTR_FUN_14b92ebf0;
  param_1[0x34b] = &PTR_FUN_14b92ec10;
  param_1[0x352] = &PTR_FUN_14b92ec20;
  param_1[0x353] = &PTR_FUN_14b92ec60;
  param_1[0x354] = &PTR_FUN_14b92eca0;
  param_1[0x355] = &PTR_FUN_14b92ecf0;
  param_1[0x356] = &PTR_FUN_14b92ed20;
  param_1[0x359] = &PTR_FUN_14b92ed60;
  param_1[0x35a] = &PTR_FUN_14b92ed70;
  param_1[0x35b] = &PTR_FUN_14b92eda0;
  param_1[0x35c] = &PTR_FUN_14b92ee40;
  param_1[0x4bf] = &PTR_FUN_14b92ee60;
  param_1[0x4df] = &PTR_LAB_14b92ee70;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  *(undefined1 *)(param_1 + 0x4e2) = 0;
  return param_1;
}



// FUNCTION 145abb798 FUN_145abb798 body=279 status=ok
// SIG undefined FUN_145abb798(void)

void FUN_145abb798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9a5ec0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  FUN_145abb8b0(param_1 + 0xba);
  *(undefined4 *)(param_1 + 0xb9) = 0;
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  FUN_145abb8e8(param_1 + 0xb0);
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa9) = 0;
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  FUN_145abb920(param_1 + 0xa0);
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_141286efe(param_1);
  return;
}



// FUNCTION 145abb8b0 FUN_145abb8b0 body=55 status=ok
// SIG undefined FUN_145abb8b0(void)

void FUN_145abb8b0(longlong *param_1)

{
  FUN_141493ef2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abb8e8 FUN_145abb8e8 body=55 status=ok
// SIG undefined FUN_145abb8e8(void)

void FUN_145abb8e8(longlong *param_1)

{
  FUN_145abb958(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abb920 FUN_145abb920 body=55 status=ok
// SIG undefined FUN_145abb920(void)

void FUN_145abb920(longlong *param_1)

{
  FUN_145abb9d4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abb958 FUN_145abb958 body=123 status=ok
// SIG undefined FUN_145abb958(void)

void FUN_145abb958(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145abb9d4 FUN_145abb9d4 body=375 status=ok
// SIG undefined FUN_145abb9d4(void)

void FUN_145abb9d4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      lVar4 = (longlong)iStack_64;
      FUN_140bb1538(*(undefined8 *)(lVar2 + 8 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145abbb5a FUN_145abbb5a body=528 status=ok
// SIG undefined FUN_145abbb5a(void)

void FUN_145abbb5a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 3;
  cVar3 = FUN_144729dda(plVar1);
  if (cVar3 != '\0') {
    FUN_1457b7c82(param_1);
    uVar4 = FUN_14479d2ce(plVar1);
    local_68 = 0;
    FUN_14113775c(uVar4,param_1 + 0xc,1,0);
    lVar5 = FUN_14479d2ce(plVar1);
    uVar4 = FUN_14479d2ce(param_1 + 2);
    if (*(int *)(lVar5 + 0x3b0) != 3) {
      FUN_1446efa72((longlong *)(lVar5 + 0x3a8),0,3,0x10);
      *(undefined4 *)(lVar5 + 0x3b0) = 3;
    }
    puVar2 = *(undefined8 **)(lVar5 + 0x3a8);
    *puVar2 = &PTR_LAB_149e020b0;
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
    puVar2[2] = lVar6;
    *puVar2 = &PTR_FUN_14b433160;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,uVar4);
    puVar2[4] = param_1;
    lVar6 = FUN_14479d2ce(plVar1);
    uVar4 = FUN_14479d2ce(param_1 + 2);
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar2 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_14b433240;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_50[2] = lVar7;
    *local_50 = &PTR_FUN_14b4331d0;
    local_50[3] = 0;
    FUN_14485c47a(local_50 + 3,uVar4);
    puVar2[4] = param_1;
    FUN_145abbd98(lVar6 + 0x390,local_58,&local_50);
    FUN_1449db362(&local_50);
    lVar5 = FUN_14479d2ce(plVar1);
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(lVar5 + 0x410));
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abbd98 FUN_145abbd98 body=216 status=ok
// SIG undefined FUN_145abbd98(void)

undefined8 * FUN_145abbd98(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145abbe7e FUN_145abbe7e body=83 status=ok
// SIG undefined FUN_145abbe7e(void)

longlong * FUN_145abbe7e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_145abbed2();
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



// FUNCTION 145abbed2 FUN_145abbed2 body=57 status=ok
// SIG undefined FUN_145abbed2(void)

void FUN_145abbed2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1c00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1c00 = FUN_140002ddd(FUN_1465b16d6,uVar1,L"GbxRewardData_VaultCardCurrency");
  }
  return;
}



// FUNCTION 145abbf24 FUN_145abbf24 body=82 status=ok
// SIG undefined FUN_145abbf24(void)

undefined8 * FUN_145abbf24(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a44f190;
  param_1[1] = &PTR_LAB_14a44f1c0;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  FUN_145abbf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abbf76 FUN_145abbf76 body=9 status=ok
// SIG undefined FUN_145abbf76(void)

void FUN_145abbf76(longlong param_1)

{
  FUN_145abbf80(param_1 + 8);
  return;
}



// FUNCTION 145abbf80 FUN_145abbf80 body=62 status=ok
// SIG undefined FUN_145abbf80(void)

void FUN_145abbf80(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149eee430;
  FUN_141494824();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abbfbe FUN_145abbfbe body=38 status=ok
// SIG undefined FUN_145abbfbe(void)

undefined8 FUN_145abbfbe(undefined8 param_1,int param_2)

{
  FUN_145abbfe4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abbfe4 FUN_145abbfe4 body=115 status=ok
// SIG undefined FUN_145abbfe4(void)

void FUN_145abbfe4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14a44f080;
  param_1[2] = &PTR_FUN_14a44f0b0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c04d8(param_1 + 2);
  *param_1 = &PTR__purecall_14a453170;
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
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



// FUNCTION 145abc058 FUN_145abc058 body=24 status=ok
// SIG undefined FUN_145abc058(void)

void FUN_145abc058(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145abc06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145abc070 FUN_145abc070 body=38 status=ok
// SIG undefined FUN_145abc070(void)

undefined8 FUN_145abc070(undefined8 param_1,int param_2)

{
  FUN_145abc096();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abc096 FUN_145abc096 body=156 status=ok
// SIG undefined FUN_145abc096(void)

void FUN_145abc096(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b425b00;
  param_1[4] = &PTR_FUN_14b425b20;
  param_1[5] = &PTR_FUN_14b425b70;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  param_1[5] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 5);
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145abc12e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145abc132 FUN_145abc132 body=46 status=ok
// SIG undefined FUN_145abc132(void)

void FUN_145abc132(longlong param_1)

{
  FUN_145abc160();
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  FUN_1406398aa(param_1 + 0x1ee0,0);
  return;
}



// FUNCTION 145abc160 FUN_145abc160 body=72 status=ok
// SIG undefined FUN_145abc160(void)

void FUN_145abc160(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1414948cc();
  uVar1 = FUN_1447210f0(param_1);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x1a60) + 0x10))(param_1 + 0x1a60);
  FUN_140d0d88c(uVar1,uVar2);
  *(undefined1 *)(param_1 + 0x1a98) = 0;
  return;
}



// FUNCTION 145abc1a8 FUN_145abc1a8 body=40 status=ok
// SIG undefined FUN_145abc1a8(void)

undefined8 FUN_145abc1a8(undefined8 param_1,int param_2)

{
  FUN_145abc1d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abc1d0 FUN_145abc1d0 body=112 status=ok
// SIG undefined FUN_145abc1d0(void)

void FUN_145abc1d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a48e140;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140a07690(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145abc240(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145abc240 FUN_145abc240 body=53 status=ok
// SIG undefined FUN_145abc240(void)

void FUN_145abc240(longlong *param_1)

{
  FUN_145abc276();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abc276 FUN_145abc276 body=355 status=ok
// SIG undefined FUN_145abc276(void)

void FUN_145abc276(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x30);
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
    FUN_14494313c(param_1,0);
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



// FUNCTION 145abc3e6 FUN_145abc3e6 body=302 status=ok
// SIG undefined FUN_145abc3e6(void)

undefined8 * FUN_145abc3e6(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141494e4e();
  *param_1 = &PTR_FUN_14ae50470;
  param_1[5] = &PTR_FUN_14ae50790;
  FUN_140ca8f8e(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x46) = 2;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  local_50 = L"Loading";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"LoadGuard";
  local_48 = 9;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(param_1 + 0x49,local_58,local_54,L"Loading...");
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 2;
  FUN_140e2f50a(param_1,4);
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abc516 FUN_145abc516 body=87 status=ok
// SIG undefined FUN_145abc516(void)

undefined8 * FUN_145abc516(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8b9df0;
  FUN_145abc56e(param_1 + 0x30);
  FUN_145abc56e(param_1 + 0x24);
  FUN_145abc56e(param_1 + 0x18);
  FUN_140fe7f26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abc56e FUN_145abc56e body=100 status=ok
// SIG undefined FUN_145abc56e(void)

void FUN_145abc56e(longlong *param_1)

{
  FUN_140d9f63b(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abc5d2 FUN_145abc5d2 body=38 status=ok
// SIG undefined FUN_145abc5d2(void)

undefined8 FUN_145abc5d2(undefined8 param_1,int param_2)

{
  FUN_145abc5f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abc5f8 FUN_145abc5f8 body=149 status=ok
// SIG undefined FUN_145abc5f8(void)

void FUN_145abc5f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9cb1a0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_141282245(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_1412823f0(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145abc694 FUN_145abc694 body=228 status=ok
// SIG undefined FUN_145abc694(void)

longlong FUN_145abc694(void)

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
  if (DAT_14cac8d88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14595985c;
    local_38 = &LAB_1478ad0bb;
    local_40 = &LAB_145ce063d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Engine",L"TriggerBox",&DAT_14cac8d88,&DAT_1478ad0ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8d88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abc780 FUN_145abc780 body=228 status=ok
// SIG undefined FUN_145abc780(void)

longlong FUN_145abc780(void)

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
  if (DAT_14cb274d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14644d79e;
    local_38 = &LAB_147f9f9c9;
    local_40 = FUN_14644d878;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputTriggerDown",&DAT_14cb274d8,&DAT_147f9f9c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb274d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abc86c FUN_145abc86c body=228 status=ok
// SIG undefined FUN_145abc86c(void)

longlong FUN_145abc86c(void)

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
  if (DAT_14cb9fe58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b5764;
    local_38 = &LAB_148b87c69;
    local_40 = FUN_1465a770a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x700;
    FUN_14081cfa3(L"/Script/OakGame",L"CharacterSelectBoxComponent",&DAT_14cb9fe58,&DAT_148b87c68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fe58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abc958 FUN_145abc958 body=228 status=ok
// SIG undefined FUN_145abc958(void)

longlong FUN_145abc958(void)

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
  if (DAT_14cbae0f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141864c34;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465c56e4;
    local_38 = &LAB_148c3ca03;
    local_40 = &LAB_146235b9d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerProxy",&DAT_14cbae0f8,&DAT_148c3ca02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae0f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abca44 FUN_145abca44 body=150 status=ok
// SIG undefined FUN_145abca44(void)

void FUN_145abca44(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 auStack_48 [3];
  undefined2 local_30;
  undefined1 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce(*param_1);
  if (lVar1 != 0) {
    local_50 = 0;
    auStack_48[0] = 0;
    local_30 = 8;
    FUN_14485c47a(auStack_48,lVar1);
    local_28 = 7;
    local_20 = 7;
    if ((DAT_14c9a8cf4 & 0x20) != 0) {
      local_20 = 0;
    }
    FUN_141109e26(param_2,&DAT_14cbd2d10,&local_50);
    FUN_144a2da94(&local_50);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abcae6 FUN_145abcae6 body=192 status=ok
// SIG undefined FUN_145abcae6(void)

undefined8 * FUN_145abcae6(undefined8 *param_1)

{
  FUN_140834366();
  *param_1 = &PTR_FUN_14a60f1a0;
  param_1[0x86] = 0;
  param_1[0x72] = 0x3e19999a3d4ccccd;
  param_1[0x73] = 0x1f4000000c8;
  param_1[0x7a] = 0x4040000042280000;
  param_1[0x7b] = 0x4334000041100000;
  param_1[0x7c] = 0x3f8000003e800000;
  param_1[0x7d] = 0x3dcccccd3e19999a;
  param_1[0x7e] = 0x3f0000003e000000;
  param_1[0x7f] = 0x3cb5dcc63c87fcb9;
  param_1[0x80] = 0x27103c87fcb9;
  *(undefined4 *)(param_1 + 0x81) = 10;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x3c87fcb900000000;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x447a0000;
  *(undefined2 *)((longlong)param_1 + 0x419) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0xbe8000003e800000;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x42c) = 0x100;
  return param_1;
}



// FUNCTION 145abcba6 FUN_145abcba6 body=110 status=ok
// SIG undefined FUN_145abcba6(void)

longlong FUN_145abcba6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_14058acb2(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  FUN_145abcc14(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 145abcc14 FUN_145abcc14 body=93 status=ok
// SIG undefined FUN_145abcc14(void)

undefined8 * FUN_145abcc14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ac3866(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a68694(param_1,iVar1);
      FUN_148a68707(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145abcc72 FUN_145abcc72 body=404 status=ok
// SIG undefined FUN_145abcc72(void)

void FUN_145abcc72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_50;
  uStack_80 = uStack_48;
  local_78 = local_40;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  FUN_145abce08(&local_68,&local_a8,local_34);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abce08 FUN_145abce08 body=250 status=ok
// SIG undefined FUN_145abce08(void)

undefined8 FUN_145abce08(undefined8 param_1,undefined8 param_2,float param_3,double *param_4)

{
  double dVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_4;
  dStack_20 = param_4[1];
  local_18 = param_4[2];
  dVar1 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    if (9.99999993922529e-09 <= dVar1) {
      dVar1 = 1.0 / SQRT(dVar1);
      local_18 = local_18 * dVar1;
      dStack_20 = dStack_20 * dVar1;
      local_28 = local_28 * dVar1;
    }
    else {
      local_18 = DAT_14c8464f0;
      local_28 = DAT_14c8464e0;
      dStack_20 = DAT_14c8464e8;
    }
  }
  else {
    local_18 = param_4[2];
    local_28 = *param_4;
    dStack_20 = param_4[1];
  }
  FUN_140ccff96(param_2,param_1,(double)param_3 * 0.017453292519943295,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145abcf0e FUN_145abcf0e body=118 status=ok
// SIG undefined FUN_145abcf0e(void)

undefined8 * FUN_145abcf0e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149fceec0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  FUN_1400b22c2(param_1 + 7,"Default");
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145abcf84(param_1 + 10);
  FUN_145abcf84(param_1 + 0x16);
  FUN_145abcf84(param_1 + 0x22);
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 145abcf84 FUN_145abcf84 body=121 status=ok
// SIG undefined FUN_145abcf84(void)

undefined8 * FUN_145abcf84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fcfbd0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  FUN_1400b22c2(param_1 + 3,"Default");
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = &PTR_FUN_149fcfa50;
  *(undefined4 *)(param_1 + 7) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d) = 0x2020202;
  FUN_1400b22c2(param_1 + 9,"Default");
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145abd008 FUN_145abd008 body=114 status=ok
// SIG undefined FUN_145abd008(void)

undefined8 * FUN_145abd008(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a526180;
  param_1[5] = &PTR_FUN_14a5264a0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  *(undefined2 *)(param_1 + 0x30) = 2;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 145abd07a FUN_145abd07a body=38 status=ok
// SIG undefined FUN_145abd07a(void)

undefined8 FUN_145abd07a(undefined8 param_1,int param_2)

{
  FUN_145abd0a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abd0a0 FUN_145abd0a0 body=93 status=ok
// SIG undefined FUN_145abd0a0(void)

void FUN_145abd0a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cac40;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  FUN_145abd0fe(param_1 + 5);
  *param_1 = &PTR_LAB_14a8cac90;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145abd0fe FUN_145abd0fe body=96 status=ok
// SIG undefined FUN_145abd0fe(void)

void FUN_145abd0fe(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145abd15e(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145c63a5c(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abd15e FUN_145abd15e body=53 status=ok
// SIG undefined FUN_145abd15e(void)

void FUN_145abd15e(longlong *param_1)

{
  FUN_145abd194();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abd194 FUN_145abd194 body=344 status=ok
// SIG undefined FUN_145abd194(void)

void FUN_145abd194(longlong *param_1)

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
      FUN_147a8d2d8(*local_68 + (longlong)iStack_4c * 0x18 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145abd2ee FUN_145abd2ee body=306 status=ok
// SIG undefined FUN_145abd2ee(void)

undefined4 * FUN_145abd2ee(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145abd4b0(local_40);
  uVar1 = *(undefined8 *)*param_2;
  *local_38 = uVar1;
  local_38[1] = 0;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar4 = FUN_145abd422(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb43db0 - DAT_14cb43ddc;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb43df0)) {
      uVar9 = DAT_14cb43df0 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x14) = uVar9;
      puVar6 = DAT_14cb43de8;
      if (DAT_14cb43de8 == (undefined *)0x0) {
        puVar6 = &DAT_14cb43de0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb43df0 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14cb43de8;
      if (DAT_14cb43de8 == (undefined *)0x0) {
        puVar6 = &DAT_14cb43de0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb43df0 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14cb43df0 = iVar8;
      FUN_141494f50(&DAT_14cb43da8);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abd422 FUN_145abd422 body=141 status=ok
// SIG undefined FUN_145abd422(void)

undefined8 FUN_145abd422(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb43db0 - DAT_14cb43ddc != 1) {
    local_28 = *param_2;
    iVar5 = FUN_141494e8a();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar1 = (undefined4 *)(DAT_14cb43da8 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148207532(&DAT_14cb43da8,*param_3);
      *param_3 = iVar5;
      uVar6 = 1;
      goto LAB_145abd466;
    }
  }
  uVar6 = 0;
LAB_145abd466:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abd4b0 FUN_145abd4b0 body=283 status=ok
// SIG undefined FUN_145abd4b0(void)

int * FUN_145abd4b0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb43dd8;
  iVar3 = DAT_14cb43db0;
  if (DAT_14cb43ddc == 0) {
    iVar2 = DAT_14cb43db0 + 1;
    bVar7 = DAT_14cb43db4 == DAT_14cb43db0;
    DAT_14cb43db0 = iVar2;
    if (bVar7) {
      FUN_1403951a8(&DAT_14cb43da8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb43db8,1);
    puVar4 = DAT_14cb43dc8;
    if (DAT_14cb43dc8 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb43db8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb43dd8;
    DAT_14cb43dd8 = *(int *)(DAT_14cb43da8 + 4 + lVar6 * 0x18);
    DAT_14cb43ddc = DAT_14cb43ddc + -1;
    if (DAT_14cb43ddc != 0) {
      *(undefined4 *)(DAT_14cb43da8 + (longlong)DAT_14cb43dd8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb43db8;
  if (DAT_14cb43dc8 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb43dc8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb43da8;
  return param_1;
}



// FUNCTION 145abd5d6 FUN_145abd5d6 body=114 status=ok
// SIG undefined FUN_145abd5d6(void)

undefined8 * FUN_145abd5d6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ae5a630;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 6,0,0x89);
  FUN_140ca8f8e(param_1 + 0x1e);
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x35) = 0x101;
  return param_1;
}



// FUNCTION 145abd648 FUN_145abd648 body=40 status=ok
// SIG undefined FUN_145abd648(void)

undefined8 FUN_145abd648(undefined8 param_1,int param_2)

{
  FUN_14149510e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abd670 FUN_145abd670 body=40 status=ok
// SIG undefined FUN_145abd670(void)

undefined8 FUN_145abd670(undefined8 param_1,int param_2)

{
  FUN_145abd698();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abd698 FUN_145abd698 body=93 status=ok
// SIG undefined FUN_145abd698(void)

void FUN_145abd698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1fdb10;
  param_1[5] = &PTR_FUN_14b1fddc8;
  param_1[8] = &PTR_FUN_14b1fdde0;
  param_1[9] = &PTR_FUN_14b208f00;
  FUN_145abd6fc(param_1 + 0xc);
  param_1[9] = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 10);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145abd6f6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145abd6fc FUN_145abd6fc body=83 status=ok
// SIG undefined FUN_145abd6fc(void)

void FUN_145abd6fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1fcb10;
  FUN_145abd74f(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145abd79c(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145abd74f FUN_145abd74f body=77 status=ok
// SIG undefined FUN_145abd74f(void)

void FUN_145abd74f(longlong param_1,int param_2)

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



// FUNCTION 145abd79c FUN_145abd79c body=77 status=ok
// SIG undefined FUN_145abd79c(void)

void FUN_145abd79c(longlong param_1,int param_2)

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



// FUNCTION 145abd7ea FUN_145abd7ea body=85 status=ok
// SIG undefined FUN_145abd7ea(void)

void FUN_145abd7ea(longlong param_1)

{
  if (*(int *)(param_1 + 0x17c) < 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    FUN_148af6848(param_1 + 0x170,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  FUN_145abd840(param_1 + 0x180);
  FUN_1447f69b6(param_1 + 0xb0);
  return;
}



// FUNCTION 145abd840 FUN_145abd840 body=19 status=ok
// SIG undefined FUN_145abd840(void)

void FUN_145abd840(undefined1 *param_1)

{
  if (param_1[1] == '\0') {
    *param_1 = 0;
    FUN_145abd854(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 145abd854 FUN_145abd854 body=70 status=ok
// SIG undefined FUN_145abd854(void)

void FUN_145abd854(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145abd89a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145abd89a FUN_145abd89a body=325 status=ok
// SIG undefined FUN_145abd89a(void)

void FUN_145abd89a(longlong *param_1)

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



// FUNCTION 145abd9e0 FUN_145abd9e0 body=38 status=ok
// SIG undefined FUN_145abd9e0(void)

undefined8 FUN_145abd9e0(undefined8 param_1,int param_2)

{
  FUN_145abda06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abda06 FUN_145abda06 body=87 status=ok
// SIG undefined FUN_145abda06(void)

void FUN_145abda06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9c4d80;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145abda64 FUN_145abda64 body=197 status=ok
// SIG undefined FUN_145abda64(void)

void FUN_145abda64(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abdb2a FUN_145abdb2a body=195 status=ok
// SIG undefined FUN_145abdb2a(void)

longlong * FUN_145abdb2a(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca80058 != DAT_14ca80084) {
    puVar3 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar3 = DAT_14ca80090;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14ca80098 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca80050 + (longlong)iVar2 * 0x14);
        if (*plVar1 == *param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_145abdbc6;
          break;
        }
        iVar2 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_20 = param_2;
  FUN_145abdbee(&local_14,param_1);
  plVar1 = (longlong *)(DAT_14ca80050 + (longlong)local_14 * 0x14);
LAB_145abdbc6:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1 + 1;
}



// FUNCTION 145abdbee FUN_145abdbee body=283 status=ok
// SIG undefined FUN_145abdbee(void)

undefined4 * FUN_145abdbee(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145abdda2(local_48);
  *local_40 = *(undefined8 *)*param_3;
  *(undefined2 *)(local_40 + 1) = 0;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar2 = FUN_145abdd0a(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14ca80058 - DAT_14ca80084;
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
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14ca80098)) {
      param_2 = DAT_14ca80098 - 1U & param_2;
      *(uint *)(local_40 + 2) = param_2;
      puVar4 = DAT_14ca80090;
      if (DAT_14ca80090 == (undefined *)0x0) {
        puVar4 = &DAT_14ca80088;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14ca80098 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14ca80090;
      if (DAT_14ca80090 == (undefined *)0x0) {
        puVar4 = &DAT_14ca80088;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14ca80098 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14ca80098 = iVar6;
      FUN_141495628();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abdd0a FUN_145abdd0a body=151 status=ok
// SIG undefined FUN_145abdd0a(void)

undefined8 FUN_145abdd0a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((DAT_14ca80058 - DAT_14ca80084 != 1) && (DAT_14ca80058 != DAT_14ca80084)) {
    puVar4 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar4 = DAT_14ca80090;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14ca80098 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca80050 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_2) {
          lVar2 = *param_2;
          *(int *)(plVar1 + 1) = (int)param_2[1];
          *plVar1 = lVar2;
          FUN_14740dd88(*param_3);
          *param_3 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145abdda2 FUN_145abdda2 body=283 status=ok
// SIG undefined FUN_145abdda2(void)

int * FUN_145abdda2(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca80080;
  iVar3 = DAT_14ca80058;
  if (DAT_14ca80084 == 0) {
    iVar2 = DAT_14ca80058 + 1;
    bVar7 = DAT_14ca8005c == DAT_14ca80058;
    DAT_14ca80058 = iVar2;
    if (bVar7) {
      FUN_140171ad2(&DAT_14ca80050,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14ca80060,1);
    puVar4 = DAT_14ca80070;
    if (DAT_14ca80070 == (undefined *)0x0) {
      puVar4 = &DAT_14ca80060;
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
    lVar6 = (longlong)DAT_14ca80080;
    DAT_14ca80080 = *(int *)(DAT_14ca80050 + 4 + lVar6 * 0x14);
    DAT_14ca80084 = DAT_14ca80084 + -1;
    if (DAT_14ca80084 != 0) {
      *(undefined4 *)(DAT_14ca80050 + (longlong)DAT_14ca80080 * 0x14) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14ca80060;
  if (DAT_14ca80070 != (undefined *)0x0) {
    puVar4 = DAT_14ca80070;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x14 + DAT_14ca80050;
  return param_1;
}



// FUNCTION 145abdebe FUN_145abdebe body=223 status=ok
// SIG undefined FUN_145abdebe(void)

void FUN_145abdebe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x118,0x10);
  FUN_145abe002(uVar2);
  FUN_145abe17e(local_28,uVar2);
  FUN_145abe44c(uVar2);
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar3 = &PTR_FUN_14b4c3c80;
  *(undefined1 *)(puVar3 + 1) = 1;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  FUN_145abdfb4(puVar3);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (lVar1 == 0) {
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 145abdfb4 FUN_145abdfb4 body=76 status=ok
// SIG undefined FUN_145abdfb4(void)

void FUN_145abdfb4(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145abe0a4(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x30) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe002 FUN_145abe002 body=161 status=ok
// SIG undefined FUN_145abe002(void)

void FUN_145abe002(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4cdca0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}



// FUNCTION 145abe0a4 FUN_145abe0a4 body=216 status=ok
// SIG undefined FUN_145abe0a4(void)

undefined8 FUN_145abe0a4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b4c3840;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4c37d0;
  local_30[3] = param_2;
  local_30[4] = FUN_148a3dc9e;
  FUN_145abe258(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe17e FUN_145abe17e body=216 status=ok
// SIG undefined FUN_145abe17e(void)

undefined8 FUN_145abe17e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b4cce80;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4cce10;
  local_30[3] = param_2;
  local_30[4] = &LAB_145a2530e;
  FUN_145abe352(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe258 FUN_145abe258 body=233 status=ok
// SIG undefined FUN_145abe258(void)

undefined8 * FUN_145abe258(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb95218,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb95220;
      lVar6 = (longlong)(int)DAT_14cb95220;
      DAT_14cb95220 = DAT_14cb95220 + 1;
      if (DAT_14cb95224 < DAT_14cb95220) {
        FUN_1447a71f6(&DAT_14cb95218,uVar3);
      }
      lVar2 = DAT_14cb95218;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb95218 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe352 FUN_145abe352 body=233 status=ok
// SIG undefined FUN_145abe352(void)

undefined8 * FUN_145abe352(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb8e380,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb8e388;
      lVar6 = (longlong)(int)DAT_14cb8e388;
      DAT_14cb8e388 = DAT_14cb8e388 + 1;
      if (DAT_14cb8e38c < DAT_14cb8e388) {
        FUN_1447a71f6(&DAT_14cb8e380,uVar3);
      }
      lVar2 = DAT_14cb8e380;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb8e380 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe44c FUN_145abe44c body=1126 status=ok
// SIG undefined FUN_145abe44c(void)

void FUN_145abe44c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_49 = 1;
  lVar1 = param_1 + 0x78;
  local_48 = &DAT_14cb8e198;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  param_1 = param_1 + 200;
  local_40 = &DAT_14cb8e198;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 2;
  local_48 = &DAT_14cb8e200;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e200;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 3;
  local_48 = &DAT_14cb8e468;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e468;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 4;
  local_48 = &DAT_14cb8e1d8;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e1d8;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 5;
  local_48 = (undefined8 *)&DAT_14cb8e1c0;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = (undefined8 *)&DAT_14cb8e1c0;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 6;
  local_48 = &DAT_14cb8e1a0;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e1a0;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 7;
  local_48 = (undefined8 *)&DAT_14cb8e1c8;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = (undefined8 *)&DAT_14cb8e1c8;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 8;
  local_48 = &DAT_14cb8e1a8;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e1a8;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 9;
  local_48 = &DAT_14cb8e1b0;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e1b0;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 10;
  local_48 = &DAT_14cb8e208;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e208;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 0xb;
  local_48 = &DAT_14cb8e210;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e210;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 0xc;
  local_48 = (undefined8 *)&DAT_14cb8e1b8;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = (undefined8 *)&DAT_14cb8e1b8;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 0xd;
  local_48 = (undefined8 *)&DAT_14cb8e1d0;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = (undefined8 *)&DAT_14cb8e1d0;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 0xe;
  local_48 = (undefined8 *)&DAT_14cb8e1f8;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = (undefined8 *)&DAT_14cb8e1f8;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  local_49 = 0xf;
  local_48 = &DAT_14cb8e1e0;
  local_40 = (undefined8 *)&local_49;
  FUN_141468f82(lVar1,local_34,&local_48,0);
  local_40 = &DAT_14cb8e1e0;
  local_48 = (undefined8 *)&local_49;
  FUN_145abe8b4(param_1,local_34,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe8b4 FUN_145abe8b4 body=287 status=ok
// SIG undefined FUN_145abe8b4(void)

undefined4 * FUN_145abe8b4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145abea5c(param_1,local_48);
  puVar2 = (undefined8 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[0xc] = 0xff;
  local_40[0xd] = 0xff;
  local_40[0xe] = 0xff;
  local_40[0xf] = 0xff;
  local_4c = local_48[0];
  cVar4 = FUN_145abe9d4(param_1,bVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x10) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_141495834(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abe9d4 FUN_145abe9d4 body=136 status=ok
// SIG undefined FUN_145abe9d4(void)

undefined8 FUN_145abe9d4(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*pcVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          *(undefined4 *)(pcVar1 + 8) = *(undefined4 *)(param_3 + 8);
          *(undefined8 *)pcVar1 = uVar2;
          FUN_148a4dd56(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)(pcVar1 + 0xc);
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145abea5c FUN_145abea5c body=243 status=ok
// SIG undefined FUN_145abea5c(void)

int * FUN_145abea5c(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 145abeb56 FUN_145abeb56 body=179 status=ok
// SIG undefined FUN_145abeb56(void)

bool FUN_145abeb56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 145abec0a FUN_145abec0a body=179 status=ok
// SIG undefined FUN_145abec0a(void)

void FUN_145abec0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  pcVar3 = *(char **)(local_38 + 0x450);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x10));
  *(int *)(pcVar3 + 8) = *(int *)(pcVar3 + 8) + 1;
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
  if (*param_4 == *pcVar3) {
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_145abec70;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
  }
  *pcVar3 = *param_4;
  *(int *)(pcVar3 + 4) = iVar4;
LAB_145abec70:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145abec8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abecbe FUN_145abecbe body=40 status=ok
// SIG undefined FUN_145abecbe(void)

undefined8 FUN_145abecbe(undefined8 param_1,int param_2)

{
  FUN_145abece6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abece6 FUN_145abece6 body=124 status=ok
// SIG undefined FUN_145abece6(void)

void FUN_145abece6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5b35e0;
  FUN_145abed93(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145abed62(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_141495b8a(param_1);
  return;
}



// FUNCTION 145abed62 FUN_145abed62 body=49 status=ok
// SIG undefined FUN_145abed62(void)

void FUN_145abed62(longlong param_1,int param_2)

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



// FUNCTION 145abed93 FUN_145abed93 body=56 status=ok
// SIG undefined FUN_145abed93(void)

void FUN_145abed93(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145abedda FUN_145abedda body=45 status=ok
// SIG undefined FUN_145abedda(void)

undefined8 FUN_145abedda(undefined8 param_1,int param_2)

{
  FUN_145abee08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x748);
  }
  return param_1;
}



// FUNCTION 145abee08 FUN_145abee08 body=129 status=ok
// SIG undefined FUN_145abee08(void)

void FUN_145abee08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5d1140;
  FUN_14051f4c4(param_1 + 0xcf);
  FUN_14051f4c4(param_1 + 0xb3);
  FUN_14051f4c4(param_1 + 0x96);
  FUN_14051f4c4(param_1 + 0x7a);
  FUN_14051f4c4(param_1 + 0x5d);
  FUN_14051f4c4(param_1 + 0x41);
  *param_1 = &PTR_FUN_14b0159c0;
  FUN_14051f4c4(param_1 + 0x23);
  FUN_14051f4c4(param_1 + 7);
  return;
}



// FUNCTION 145abee8a FUN_145abee8a body=159 status=ok
// SIG undefined FUN_145abee8a(void)

undefined8 * FUN_145abee8a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145abef2a(&local_38,param_3);
  FUN_145abefa8(param_1 + 0x28,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abef2a FUN_145abef2a body=124 status=ok
// SIG undefined FUN_145abef2a(void)

void FUN_145abef2a(longlong *param_1,longlong *param_2)

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



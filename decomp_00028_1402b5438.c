// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402b5438 FUN_1402b5438 body=130 status=ok
// SIG undefined FUN_1402b5438(void)

ulonglong FUN_1402b5438(longlong param_1)

{
  int iVar1;
  uint3 uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar4 = (int *)&DAT_14c948618;
  piVar3 = &DAT_14c948620;
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
     (4 < *(int *)(param_1 + 0x14))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
  }
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((*piVar4 == DAT_14cb7bef8) && (*piVar3 == DAT_14cb7bf00)) {
    return CONCAT71((uint7)uVar2,1);
  }
  piVar4 = (int *)&DAT_14c948618;
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     ((iVar1 != DAT_14c948000 && (4 < *(int *)(param_1 + 0x14))))) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
  }
  return (ulonglong)CONCAT31(uVar2,*piVar4 == 0);
}



// FUNCTION 1402b54ba FUN_1402b54ba body=391 status=ok
// SIG undefined FUN_1402b54ba(void)

void FUN_1402b54ba(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  uVar7 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (uVar7 == 0) {
    uVar8 = 0x20;
  }
  else {
    uVar8 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
  }
  if (DAT_14c760da4 != 0) {
    if (param_4 == 0) {
      param_4 = DAT_14ca84b20;
    }
    lVar5 = **(longlong **)(param_1 + 0x1b0);
    uVar4 = (ulonglong)uVar8;
    lVar13 = 0;
    uVar6 = uVar7;
    do {
      lVar11 = *(longlong *)(lVar5 + 2000 + uVar4 * 8);
      lVar3 = FUN_14001cc68(0xd0,0x10);
      if (param_4 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(param_4 + 0x128 + (ulonglong)*(uint *)(lVar11 + 8) * 8);
      }
      FUN_1402b5642(lVar3,lVar11,uVar12,lVar13);
      lVar11 = lVar3;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        lVar11 = lVar13;
      }
      *(longlong *)(lVar11 + 0x88 + uVar4 * 8) = lVar3;
      uVar6 = uVar6 & ~(1 << ((uint)uVar4 & 0x1f));
      if (uVar6 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        uVar4 = (ulonglong)uVar1;
      }
      lVar13 = lVar11;
    } while (uVar6 != 0);
    if (lVar11 != 0) {
      *(uint *)(lVar11 + 0x80) = uVar7;
      bVar2 = (byte)uVar8 & 0x1f;
      uVar7 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar7;
      if (uVar7 != 0) {
        uVar8 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        do {
          puVar9 = (undefined8 *)(lVar11 + 0x80);
          puVar10 = (undefined8 *)(*(longlong *)(lVar11 + 0x88 + (ulonglong)uVar8 * 8) + 0x80);
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          bVar2 = (byte)uVar8 & 0x1f;
          uVar7 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar7;
          if (uVar7 == 0) {
            uVar8 = 0x20;
          }
          else {
            uVar8 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
          }
        } while (uVar7 != 0);
      }
      *param_2 = lVar11;
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1402b5642 FUN_1402b5642 body=311 status=ok
// SIG undefined FUN_1402b5642(void)

undefined8 * FUN_1402b5642(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0xf] = param_2;
  if (param_4 == 0) {
    FUN_1400db9e2(*(undefined8 *)(param_2 + 0x6a8),&local_30);
  }
  else {
    local_30 = *(undefined8 *)(param_4 + 0x68);
  }
  uVar1 = local_30;
  FUN_1402b577a(param_1,0x19);
  *param_1 = &PTR_FUN_14a37fd30;
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = DAT_14ca84b20;
  }
  param_1[0xc] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_14a350f40;
  param_1[0xe] = &PTR_LAB_14a350f80;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (((int)uVar1 != -1) && ((char)((ulonglong)uVar1 >> 0x20) != -1)) {
    FUN_14472d45a(param_3 + 0x60,param_1 + 0xe);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(*(longlong *)(param_3 + 0x168) + 0x44);
    FUN_14736bbd6(param_2 + 0x6b0,param_1[0xd]);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b577a FUN_1402b577a body=107 status=ok
// SIG undefined FUN_1402b577a(void)

void FUN_1402b577a(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
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
  param_1[0xb] = 0xc7efffffe0000000;
  return;
}



// FUNCTION 1402b57e6 FUN_1402b57e6 body=14 status=ok
// SIG undefined FUN_1402b57e6(void)

void FUN_1402b57e6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001402b57f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  return;
}



// FUNCTION 1402b57f4 FUN_1402b57f4 body=177 status=ok
// SIG undefined FUN_1402b57f4(void)

void FUN_1402b57f4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar1 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
    if (*(int *)(lVar1 + (longlong)(*(int *)(param_1 + 0x30) + -1) * 4) == 2) {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1401e7dd2(*(undefined8 *)(param_1 + 0x38),local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1402b584f;
    }
  }
  local_38[0] = 0;
  FUN_1401e7ce8(param_1,param_2);
LAB_1402b584f:
  FUN_1402b58a6(param_1,param_2);
  bifrost::telemetry::rowBuilder::vBeginObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b58a6 FUN_1402b58a6 body=67 status=ok
// SIG undefined FUN_1402b58a6(void)

void FUN_1402b58a6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1470b585c(param_1 + 8,iVar1);
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 1;
  return;
}



// FUNCTION 1402b58ea FUN_1402b58ea body=322 status=ok
// SIG undefined FUN_1402b58ea(void)

undefined8 FUN_1402b58ea(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe8);
    lVar9 = 0;
    do {
      plVar7 = *(longlong **)(lVar4 + 8 + lVar9);
      if ((((plVar7 != (longlong *)0x0) && (iVar2 = *(int *)(lVar4 + 4 + lVar9), iVar2 != 0)) &&
          (uVar3 = *(uint *)(lVar4 + lVar9), -1 < (int)uVar3)) &&
         ((((int)uVar3 < DAT_14c9647dc &&
           (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 != 0)) &&
          ((*(int *)(lVar8 + 0x10) == iVar2 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
        lVar8 = (**(code **)(*plVar7 + 0x28))();
        if ((*(int *)(lVar8 + 0x1c) == 0) || (uVar3 = *(uint *)(lVar8 + 0x18), (int)uVar3 < 0)) {
LAB_1402b5a28:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(lVar8 + 0x1c))) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_1402b5a28;
            lVar6 = *plVar7;
          }
        }
        if (((lVar6 != param_2) &&
            (lVar8 = (**(code **)(**(longlong **)(lVar4 + 8 + lVar9) + 0x30))(),
            *(char *)(lVar8 + 0x38) != '\0')) &&
           (cVar5 = FUN_1402b5a2c(lVar8 + 0x18,param_3,param_4), cVar5 != '\0')) {
          return 1;
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar9);
  }
  return 0;
}



// FUNCTION 1402b5a2c FUN_1402b5a2c body=518 status=ok
// SIG undefined FUN_1402b5a2c(void)

bool FUN_1402b5a2c(undefined8 *param_1,double *param_2,float param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  double ****ppppdVar4;
  float extraout_XMM0_Da;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  double **local_a8;
  double **ppdStack_a0;
  double **local_98;
  double ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(char *)(param_1 + 4) == '\x04') {
      local_98 = (double **)param_1[2];
      local_a8 = (double **)*param_1;
      ppdStack_a0 = (double **)param_1[1];
    }
    else {
      FUN_1400b56fe(local_88,param_1,4);
      ppppdVar4 = (double ****)&DAT_14c9ab228;
      if (local_68 != 0) {
        ppppdVar4 = local_88;
      }
      local_98 = (double **)ppppdVar4[2];
      local_a8 = (double **)*ppppdVar4;
      ppdStack_a0 = (double **)ppppdVar4[1];
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppdVar4 = local_88;
        if (0x18 < local_70) {
          ppppdVar4 = (double ****)local_88[0];
        }
        (*pcVar1)(ppppdVar4);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88[0]);
      }
    }
    dVar2 = (double)local_98 - (double)param_1[7];
    dVar6 = (double)ppdStack_a0 - (double)param_1[6];
    dVar5 = (double)local_a8 - (double)param_1[5];
    dVar7 = param_2[2] - (double)param_1[7];
    dVar9 = param_2[1] - (double)param_1[6];
    dVar8 = *param_2 - (double)param_1[5];
    if (dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9 <=
        dVar2 * dVar2 + dVar5 * dVar5 + dVar6 * dVar6) {
      if (0.0 < (float)(dVar2 * dVar7 + dVar5 * dVar8 + dVar6 * dVar9)) {
        FUN_1402b5c34(param_2,param_1 + 5,&local_a8);
        bVar3 = extraout_XMM0_Da <= param_3 * param_3;
        goto LAB_1402b5b74;
      }
    }
  }
  bVar3 = false;
LAB_1402b5b74:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b5c34 FUN_1402b5c34 body=396 status=ok
// SIG undefined FUN_1402b5c34(void)

undefined8 FUN_1402b5c34(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  dVar9 = param_2[2];
  dVar3 = param_3[2] - dVar9;
  dVar1 = *param_3;
  uVar11 = SUB84(dVar1,0);
  uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar10 = *param_2;
  dVar2 = param_2[1];
  dVar4 = param_3[1] - dVar2;
  dVar1 = dVar1 - dVar10;
  dVar5 = (param_1[2] - dVar9) * dVar3 + (*param_1 - dVar10) * dVar1 + (param_1[1] - dVar2) * dVar4;
  if (0.0 < dVar5) {
    dVar6 = dVar3 * dVar3 + dVar1 * dVar1 + dVar4 * dVar4;
    dVar7 = param_3[2];
    dVar8 = param_3[1];
    if (dVar6 <= dVar5) goto LAB_1402b5d5c;
    dVar5 = dVar5 / dVar6;
    dVar9 = dVar9 + dVar3 * dVar5;
    dVar2 = dVar2 + dVar4 * dVar5;
    dVar10 = dVar10 + dVar1 * dVar5;
  }
  uVar11 = SUB84(dVar10,0);
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar7 = dVar9;
  dVar8 = dVar2;
LAB_1402b5d5c:
  dVar7 = param_1[2] - dVar7;
  dVar8 = param_1[1] - dVar8;
  dVar9 = *param_1 - (double)CONCAT44(uVar12,uVar11);
  dVar9 = dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8;
  return CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
}



// FUNCTION 1402b5dc0 FUN_1402b5dc0 body=487 status=ok
// SIG undefined FUN_1402b5dc0(void)

ulonglong FUN_1402b5dc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + -0x14) != 0) {
    uVar3 = *(uint *)(param_1 + -0x18);
    uVar8 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1402b5f73;
    plVar7 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar7 != (longlong *)0x0) &&
       (((((int)plVar7[2] == *(int *)(param_1 + -0x14) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar4 = *plVar7, lVar4 != 0)) &&
        (((*(byte *)(lVar4 + 0x155) & 0x24) == 0 && (*(longlong *)(lVar4 + 0x180) != 0)))))) {
      LOCK();
      UNLOCK();
      local_60 = DAT_14cb24328;
      local_58 = &DAT_14cb24328;
      LOCK();
      DAT_14cb24330 = DAT_14cb24330 + 2;
      UNLOCK();
      local_68 = lVar4;
      local_50 = &local_68;
      FUN_1402b5fa8();
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      local_48 = (longlong *)0x0;
      local_40 = &DAT_14cb24328;
      LOCK();
      DAT_14cb24330 = DAT_14cb24330 + 1;
      UNLOCK();
      local_38 = &local_68;
      FUN_1402b5fa8(&local_48);
      LOCK();
      DAT_14cb24330 = DAT_14cb24330 + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_40 + 1) = *(int *)(local_40 + 1) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
      if ((local_60 != local_48) ||
         ((0 < *(int *)(param_1 + 0x18) || (0 < *(int *)(param_1 + 0x28))))) goto LAB_1402b5f73;
      FUN_1402b6034(&local_68,lVar4);
      if (local_60 != (longlong *)0x0) {
        iVar6 = (int)local_60[1];
        do {
          if (iVar6 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)local_60[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(local_60 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar7 = local_60;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) {
          if (local_68 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = CONCAT71((int7)((ulonglong)&local_68 >> 8),
                             *(int *)(local_68 + 0xc74) < *(int *)(local_68 + 0xc50));
          }
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
          goto LAB_1402b5f73;
        }
      }
    }
  }
  uVar8 = 0;
LAB_1402b5f73:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1402b5fa8 FUN_1402b5fa8 body=139 status=ok
// SIG undefined FUN_1402b5fa8(void)

void FUN_1402b5fa8(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *param_1;
  do {
    if (lVar4 == 0) {
      return;
    }
    plVar3 = (longlong *)param_1[2];
    iVar1 = *(int *)(*(longlong *)(lVar4 + 0x10) + 0x1c);
    if ((iVar1 == 0) || (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x10) + 0x18), (int)uVar2 < 0)) {
LAB_1402b601f:
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if ((int)uVar2 < DAT_14c9647dc) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != iVar1)) ||
            ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) || (*plVar5 == 0)) goto LAB_1402b601f;
        lVar4 = FUN_1447210f0();
      }
    }
    if (lVar4 == *plVar3) {
      return;
    }
    lVar4 = *(longlong *)*param_1;
    *param_1 = lVar4;
  } while( true );
}



// FUNCTION 1402b6034 FUN_1402b6034 body=310 status=ok
// SIG undefined FUN_1402b6034(void)

longlong * FUN_1402b6034(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb23aa0;
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



// FUNCTION 1402b616c FUN_1402b616c body=26 status=ok
// SIG undefined FUN_1402b616c(void)

void FUN_1402b616c(undefined8 param_1)

{
  FUN_140d09b26();
  FUN_1402b6186(param_1);
  return;
}



// FUNCTION 1402b6186 FUN_1402b6186 body=228 status=ok
// SIG undefined FUN_1402b6186(void)

void FUN_1402b6186(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  cVar2 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xef;
  uVar1 = param_1[7];
  if (uVar1 < 0xffffffff00000000) {
    plVar6 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,1);
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
        *puVar5 = *puVar5 | 2;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
  }
  FUN_1402b6276((longlong)param_1 + 0xbb,param_1);
  return;
}



// FUNCTION 1402b6276 FUN_1402b6276 body=130 status=ok
// SIG undefined FUN_1402b6276(void)

void FUN_1402b6276(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402b62fa(param_1,&local_30);
  if (local_30 != 0) {
    local_20 = param_2;
    FUN_1447cd2ec();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b62fa FUN_1402b62fa body=266 status=ok
// SIG undefined FUN_1402b62fa(void)

undefined8 * FUN_1402b62fa(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1402b631e;
  FUN_1477ec1be(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0xbb,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1402b631e;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001402b63c2:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001402b63c2;
      }
    }
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
LAB_1402b631e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b6406 FUN_1402b6406 body=14 status=ok
// SIG undefined FUN_1402b6406(void)

void FUN_1402b6406(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402b6414();
    return;
  }
  return;
}



// FUNCTION 1402b6414 FUN_1402b6414 body=449 status=ok
// SIG undefined FUN_1402b6414(void)

void FUN_1402b6414(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x70);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402b652e:
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
LAB_1402b656b:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x70;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402b6469;
LAB_1402b645e:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402b6469:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x249) goto code_r0x0001402b6495;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x1c + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402b64eb:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402b656b;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402b652e;
code_r0x0001402b6495:
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
      goto LAB_1402b64eb;
    }
  }
  goto LAB_1402b645e;
}



// FUNCTION 1402b65d6 FUN_1402b65d6 body=1483 status=ok
// SIG undefined FUN_1402b65d6(void)

double * FUN_1402b65d6(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  double *pdVar14;
  longlong *plVar15;
  double *pdVar16;
  float *pfVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  undefined4 uVar22;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  code *local_b0;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  float local_68;
  undefined4 uStack_64;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar11 = (longlong *)FUN_1402b6ba2(param_4);
  if (plVar11 == (longlong *)0x0) {
    lVar12 = FUN_1447262c2(param_4);
    if (lVar12 != 0) {
      if (DAT_14cac9ca8 == 0) {
        local_c0 = &local_88;
        local_88 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1478c0a72;
        local_d0 = &LAB_1417b2375;
        local_d8 = L"Engine";
        local_e0 = 0x1000000000;
        local_e8 = 0x10000004;
        local_f0 = 8;
        local_f8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
         (plVar11 = *(longlong **)(lVar12 + 0x1c8), plVar11 != (longlong *)0x0)) goto LAB_1402b66ab;
    }
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    goto LAB_1402b6665;
  }
LAB_1402b66ab:
  uVar9 = *(int *)(param_1 + 8) - 1;
  if (5 < uVar9) {
    lVar12 = plVar11[0x4c];
    uVar22 = *(undefined4 *)((longlong)plVar11 + 0x264);
    lVar8 = plVar11[0x4d];
    uVar18 = *(undefined4 *)((longlong)plVar11 + 0x26c);
    dVar13 = (double)plVar11[0x4e];
    *(undefined2 *)(param_2 + 3) = 0x18;
    *(int *)param_2 = (int)lVar12;
    *(undefined4 *)((longlong)param_2 + 4) = uVar22;
    *(int *)(param_2 + 1) = (int)lVar8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar18;
    param_2[2] = dVar13;
LAB_1402b67fd:
    *(undefined1 *)(param_2 + 4) = 4;
    goto LAB_1402b6665;
  }
  uVar22 = 0x4a1c88f4;
  dVar13 = (double)((longlong)&switchD_1402b66c7::switchdataD_14a1c88f4 +
                   (longlong)(int)(&switchD_1402b66c7::switchdataD_14a1c88f4)[uVar9]);
  switch(*(int *)(param_1 + 8)) {
  case 1:
    pcVar5 = (code *)plVar11[0x48];
    dVar21 = (double)plVar11[0x49];
    dVar6 = (double)plVar11[0x4a];
    dVar7 = (double)plVar11[0x4b];
    pdVar14 = (double *)plVar11[0x45];
    local_88 = pcVar5;
    uStack_80 = dVar21;
    local_78 = dVar6;
    dStack_70 = dVar7;
    if (pdVar14 == (double *)0x0) {
      uVar22 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar13 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar13;
      dVar13 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar13;
      dVar13 = DAT_14c846500;
      pdVar14[4] = DAT_14c8464f8;
      pdVar14[5] = dVar13;
      dVar13 = DAT_14c846508;
      pdVar14[6] = DAT_14c846508;
      plVar11[0x45] = (longlong)pdVar14;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar21 != pdVar14[1]);
    auVar2._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar14);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar21 != pdVar14[1]) >> 0x20);
    iVar10 = movmskpd(SUB84(dVar13,0),auVar2);
    auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
    auVar4._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
    uVar9 = movmskpd(uVar22,auVar4);
    if ((uVar9 & 0x3fffffff) != 0 || iVar10 != 0) {
      pdVar14[2] = local_78;
      pdVar14[3] = dStack_70;
      *(float *)pdVar14 = (float)local_88;
      *(uint *)((longlong)pdVar14 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar14[6] = local_58;
      pdVar14[4] = (double)CONCAT44(uStack_64,local_68);
      pdVar14[5] = dStack_60;
    }
    param_2[2] = pdVar14[6];
    uVar22 = *(undefined4 *)((longlong)pdVar14 + 0x24);
    uVar18 = *(undefined4 *)(pdVar14 + 5);
    uVar20 = *(undefined4 *)((longlong)pdVar14 + 0x2c);
    *(undefined4 *)param_2 = *(undefined4 *)(pdVar14 + 4);
    *(undefined4 *)((longlong)param_2 + 4) = uVar22;
    *(undefined4 *)(param_2 + 1) = uVar18;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar20;
    *(undefined2 *)(param_2 + 3) = 0x18;
    break;
  case 2:
    (**(code **)(*plVar11 + 0x4e0))(plVar11,param_2);
    *(undefined2 *)(param_2 + 3) = 0x18;
    goto LAB_1402b67fd;
  case 3:
    plVar15 = plVar11;
    dVar13 = (double)(**(code **)(*plVar11 + 0x4e0))(plVar11,&local_a0);
    uVar22 = SUB84(plVar15,0);
    uVar18 = SUB84(local_98,0);
    uVar20 = (undefined4)((ulonglong)local_98 >> 0x20);
    if (((9.999999747378752e-05 < ABS(local_a0)) || (9.999999747378752e-05 < ABS(local_98))) ||
       (9.999999747378752e-05 < ABS(local_90))) {
      dVar13 = 0.0;
      if (((local_a0 != 0.0) || (NAN(local_a0))) || ((local_98 != 0.0 || (NAN(local_98))))) {
        dVar13 = atan2(local_98,local_a0);
        dVar13 = dVar13 * 57.29577951308232;
        uVar18 = SUB84(local_98,0);
        uVar20 = (undefined4)((ulonglong)local_98 >> 0x20);
      }
      dVar21 = SQRT(local_a0 * local_a0 +
                    (double)CONCAT44(uVar20,uVar18) * (double)CONCAT44(uVar20,uVar18));
      uVar22 = 0;
      uVar18 = 0;
      if ((((local_90 != 0.0) || (NAN(local_90))) || (dVar21 != 0.0)) || (NAN(dVar21))) {
        dVar21 = atan2(local_90,dVar21);
        dVar21 = dVar21 * 57.29577951308232;
      }
      else {
        dVar21 = 0.0;
      }
    }
    else {
      pcVar5 = (code *)plVar11[0x48];
      dVar21 = (double)plVar11[0x49];
      dVar6 = (double)plVar11[0x4a];
      dVar7 = (double)plVar11[0x4b];
      pdVar14 = (double *)plVar11[0x45];
      local_88 = pcVar5;
      uStack_80 = dVar21;
      local_78 = dVar6;
      dStack_70 = dVar7;
      if (pdVar14 == (double *)0x0) {
        uVar22 = 0x40;
        pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
        dVar13 = DAT_14c8463d8;
        *pdVar14 = DAT_14c8463d0;
        pdVar14[1] = dVar13;
        dVar13 = DAT_14c8463e8;
        pdVar14[2] = DAT_14c8463e0;
        pdVar14[3] = dVar13;
        dVar13 = DAT_14c846500;
        pdVar14[4] = DAT_14c8464f8;
        pdVar14[5] = dVar13;
        dVar13 = DAT_14c846508;
        pdVar14[6] = DAT_14c846508;
        plVar11[0x45] = (longlong)pdVar14;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar21 != pdVar14[1]);
      auVar1._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar14);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar21 != pdVar14[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar13,0),auVar1);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
      uVar9 = movmskpd(uVar22,auVar3);
      if ((uVar9 & 0x3fffffff) != 0 || iVar10 != 0) {
        pdVar14[2] = local_78;
        pdVar14[3] = dStack_70;
        *(float *)pdVar14 = (float)local_88;
        *(uint *)((longlong)pdVar14 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar14[6] = local_58;
        pdVar14[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar14[5] = dStack_60;
      }
      dVar21 = pdVar14[4];
      dVar13 = pdVar14[5];
      uVar22 = SUB84(pdVar14[6],0);
      uVar18 = (undefined4)((ulonglong)pdVar14[6] >> 0x20);
    }
    *(undefined2 *)(param_2 + 3) = 0x18;
    *param_2 = dVar21;
    param_2[1] = dVar13;
    param_2[2] = (double)CONCAT44(uVar18,uVar22);
    break;
  case 4:
    plVar15 = (longlong *)plVar11[0x15];
    if (plVar15 == (longlong *)0x0) {
      pfVar17 = (float *)&local_88;
      lVar12 = *plVar11;
LAB_1402b6afa:
      local_88 = (code *)((ulonglong)local_88._4_4_ << 0x20);
      local_68 = 0.0;
      (**(code **)(lVar12 + 0x538))(plVar11,&local_88,&local_68);
      fVar19 = *pfVar17;
      goto LAB_1402b68d1;
    }
    lVar12 = *plVar15;
    pdVar14 = (double *)&local_88;
    pdVar16 = param_2;
    goto LAB_1402b66e7;
  case 5:
    plVar15 = (longlong *)plVar11[0x15];
    if (plVar15 == (longlong *)0x0) {
      local_88 = (code *)((ulonglong)local_88._4_4_ << 0x20);
      local_68 = 0.0;
      (**(code **)(*plVar11 + 0x538))(plVar11,&local_88,&local_68);
    }
    else {
      (**(code **)(*plVar15 + 0x528))(plVar15,&local_88,&local_68);
    }
    fVar19 = local_68 + local_68;
LAB_1402b68d1:
    *(undefined2 *)(param_2 + 3) = 4;
    *(float *)param_2 = fVar19;
    goto LAB_1402b66f3;
  case 6:
    plVar15 = (longlong *)plVar11[0x15];
    if (plVar15 == (longlong *)0x0) {
      pfVar17 = &local_68;
      lVar12 = *plVar11;
      goto LAB_1402b6afa;
    }
    lVar12 = *plVar15;
    pdVar16 = (double *)&local_88;
    pdVar14 = param_2;
LAB_1402b66e7:
    (**(code **)(lVar12 + 0x528))(plVar15,pdVar16,pdVar14);
    *(undefined2 *)(param_2 + 3) = 4;
LAB_1402b66f3:
    *(undefined1 *)(param_2 + 4) = 3;
    goto LAB_1402b6665;
  }
  *(undefined1 *)(param_2 + 4) = 5;
LAB_1402b6665:
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402b6ba2 FUN_1402b6ba2 body=275 status=ok
// SIG undefined FUN_1402b6ba2(void)

longlong FUN_1402b6ba2(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cac7648 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_143242436;
      local_38 = &LAB_14789ef1f;
      local_40 = &LAB_1417b008f;
      local_48 = L"Engine";
      local_50 = 0x8000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) goto LAB_1402b6bef;
  }
  lVar1 = 0;
LAB_1402b6bef:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b6cb6 FUN_1402b6cb6 body=58 status=ok
// SIG undefined FUN_1402b6cb6(void)

void FUN_1402b6cb6(longlong *param_1)

{
  char cVar1;
  
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) & 0xf7;
  FUN_1402b6cf0();
  cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar1 << 6;
  return;
}



// FUNCTION 1402b6cf0 FUN_1402b6cf0 body=153 status=ok
// SIG undefined FUN_1402b6cf0(void)

void FUN_1402b6cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x840);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x838);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140156df6(lVar3,0,0);
        lVar3 = *(longlong *)(lVar2 + lVar4);
        if (lVar3 != 0) {
          FUN_144760d56(lVar3);
          FUN_1400020a8(lVar3);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x840) = 0;
  if (*(int *)(param_1 + 0x844) != 0) {
    FUN_14179bc96(param_1 + 0x838,0);
    return;
  }
  return;
}



// FUNCTION 1402b6d8a FUN_1402b6d8a body=426 status=ok
// SIG undefined FUN_1402b6d8a(void)

undefined8
FUN_1402b6d8a(longlong param_1,undefined8 param_2,int param_3,char param_4,char param_5,char param_6
             )

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined4 local_50;
  undefined8 local_4c;
  short local_44;
  undefined4 local_42;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (undefined8 *)(param_1 + 0x6b0);
  if (*(longlong **)(param_1 + 0x6b0) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x10))();
    if (*(int *)(lVar1 + 0x30) == param_3) {
      lVar1 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
      if ((*(short *)(lVar1 + 0x34) == 0) != (bool)param_4) {
        lVar1 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
        if (((*(byte *)(lVar1 + 0x22) & 2) == 0) != (bool)param_5) {
          lVar1 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
          if ((*(char *)(lVar1 + 0x28) != '\n') != (bool)param_6) goto LAB_1402b6e1f;
        }
      }
    }
  }
  uVar3 = 0x12;
  if ((DAT_14c873798 & 1) == 0) {
    uVar3 = 0x25;
  }
  local_3d = 10;
  if (param_6 == '\0') {
    local_3d = uVar3;
  }
  puVar2 = (undefined1 *)0x9;
  if (param_5 != '\0') {
    puVar2 = &DAT_00020008;
  }
  iVar5 = param_3 * param_3;
  if (param_4 != '\0') {
    iVar5 = param_3;
  }
  local_70 = (ulonglong)puVar2 | DAT_14ca4ae80;
  local_4c = CONCAT44(param_3,iVar5);
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_44 = 1;
  local_3e = 0;
  local_68 = DAT_14ca83a58;
  local_64 = DAT_14ca83a5c;
  uStack_60 = DAT_14ca83a60;
  uStack_5c = DAT_14ca83a64;
  uStack_58 = DAT_14ca83a68;
  local_3c = 0;
  local_42 = 0x1010001;
  if (((short)param_3 != 0) && (param_4 != '\0')) {
    local_3e = 2;
    local_44 = (short)param_3;
  }
  local_3b = 0xff;
  local_78 = L"CombineLUTs";
  FUN_14490a8c0(&DAT_14ca9a3e8,param_2,&local_70,puVar4);
LAB_1402b6e1f:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b6f36 FUN_1402b6f36 body=226 status=ok
// SIG undefined FUN_1402b6f36(void)

void FUN_1402b6f36(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1402b7018(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1402b7018 FUN_1402b7018 body=1096 status=ok
// SIG undefined FUN_1402b7018(void)

void FUN_1402b7018(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *_Src;
  undefined8 *puVar12;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c0;
  longlong *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    plVar9 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar9 = &local_c0;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar4 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar4 = puVar12 + 2;
    }
    memcpy(puVar4,plVar9,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar12 + 5;
    }
    memcpy(puVar4,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pcVar2 = *(code **)(param_1 + 0x1f0);
  if (pcVar2 != (code *)0x0) {
    plVar9 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x200);
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar2)(uVar8);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1e0);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  plVar9 = (longlong *)(param_1 + 0x1c8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ff8f8) {
    FUN_144b3d300(&DAT_14c9ff8f8);
    if (DAT_14c9ff8f8 == -1) {
      FUN_1401b5c28(&local_c0);
      local_d0 = 0;
      local_e0 = 0;
      local_100 = "Unknown";
      local_110 = 0;
      uStack_108 = 0;
      local_118 = L"FParameters";
      local_d8 = 0;
      local_f0 = 0x240;
      local_f8 = 0x38e;
      local_e8 = &local_c0;
      FUN_140b49562(&DAT_14c9ff878,0,1);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6f5);
      _Init_thread_footer(&DAT_14c9ff8f8);
    }
  }
  if (*plVar9 == 0) {
    uVar5 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar9 + 0xd4);
    uVar5 = *(ulonglong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (uVar5 == 0) {
      uVar5 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  uVar6 = FUN_140029432(param_2,uVar5,0);
  param_2[0x37] = uVar5;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar6;
  local_118 = (wchar_t *)uVar8;
  FUN_14480864a(param_2,uVar5,*plVar9,&DAT_14c9ff878);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fd0;
  puVar12[2] = uVar3;
  *(undefined4 *)(puVar12 + 3) = uVar1;
  if (*plVar9 == 0) {
    lVar7 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*plVar9 + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar11 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar10,lVar11,1);
    }
  }
  FUN_144ab1114(param_2,plVar9,lVar7);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b7462 FUN_1402b7462 body=61 status=ok
// SIG undefined FUN_1402b7462(void)

void FUN_1402b7462(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4800);
  if (*(longlong *)(param_1 + 0x4800) == 0) {
    lVar1 = param_1;
  }
  FUN_1402b749f(lVar1,*(undefined4 *)(param_1 + 0x4808));
  if (*(longlong *)(param_1 + 0x4800) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402b749f FUN_1402b749f body=77 status=ok
// SIG undefined FUN_1402b749f(void)

void FUN_1402b749f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
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
      plVar4 = plVar4 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402b74ec FUN_1402b74ec body=304 status=ok
// SIG undefined FUN_1402b74ec(void)

void FUN_1402b74ec(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = *param_1;
  uVar7 = (uint)uVar2;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
      return;
    }
    uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    uVar5 = (ulonglong)((uVar7 & 0x3ffffff) >> 0xe);
    uVar6 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar4 | *(uint *)(lVar3 + 0x10 + uVar6 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar3 + uVar6 * 0x18 + 0x10) = 0;
      lVar3 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar7 & 0x3ffffff);
      if (lVar3 == 0) {
        return;
      }
      FUN_1400020a8(lVar3);
    }
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
  } while( true );
}



// FUNCTION 1402b761c FUN_1402b761c body=304 status=ok
// SIG undefined FUN_1402b761c(void)

void FUN_1402b761c(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = *param_1;
  uVar7 = (uint)uVar2;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
      return;
    }
    uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    uVar5 = (ulonglong)((uVar7 & 0x3ffffff) >> 0xe);
    uVar6 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar4 | *(uint *)(lVar3 + 0x10 + uVar6 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar3 + uVar6 * 0x18 + 0x10) = 0;
      lVar3 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar7 & 0x3ffffff);
      if (lVar3 == 0) {
        return;
      }
      FUN_1400020a8(lVar3);
    }
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
  } while( true );
}



// FUNCTION 1402b774c FUN_1402b774c body=103 status=ok
// SIG undefined FUN_1402b774c(void)

ulonglong FUN_1402b774c(longlong param_1)

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
LAB_1402b7796:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1402b7796;
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



// FUNCTION 1402b77b4 FUN_1402b77b4 body=2137 status=ok
// SIG undefined FUN_1402b77b4(void)

void FUN_1402b77b4(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  double dVar11;
  longlong *plVar12;
  double *pdVar13;
  uint uVar14;
  longlong *plVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_170 [8];
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double dStack_e0;
  undefined2 local_d8;
  char local_d0;
  char local_c8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((((*(int *)(param_1 + 0xc) == 0) || (uVar14 = *(uint *)(param_1 + 8), (int)uVar14 < 0)) ||
       (DAT_14c9647dc <= (int)uVar14)) ||
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0xc))))) ||
     (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 ||
      ((*plVar15 == 0 || ((*(byte *)(*plVar15 + 0x155) & 0x20) != 0)))))) goto LAB_1402b7b99;
  if (param_4 == '\x06') {
    FUN_14048b906(*param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_198);
  }
  if (param_4 == '\x04') {
    if ((param_2 != 0) && (*(char *)(*param_3 + 0x460) == '\0')) {
      if (*(byte *)(param_2 + 0xb5) == 2) {
        if (*(char *)(*(longlong *)(param_2 + 0x48) + 0x73) != '\0') goto LAB_1402b7b99;
      }
      else if ((*(byte *)(param_2 + 0xb5) & 0xfd) == 1) goto LAB_1402b7b99;
      plVar15 = (longlong *)FUN_14048b906();
      if (plVar15 != (longlong *)0x0) {
        local_140 = 0;
        FUN_14485c47a(&local_140,plVar15);
        local_f8 = (double)local_140;
        iVar8 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                              (uint)((ulonglong)local_140 >> 0x20) ^ (uint)local_140);
        if (iVar8 != -1) {
          lVar10 = *(longlong *)(param_1 + 0x58);
          lVar17 = lVar10 + (longlong)iVar8 * 0x90;
          if ((((lVar17 != 0) && (lVar10 + (longlong)iVar8 * 0x90 != -8)) &&
              (cVar7 = FUN_141077302(), cVar7 != '\0')) &&
             (((*(char *)(lVar17 + 0xb) == '\0' &&
               (plVar12 = (longlong *)FUN_14479d2ce(lVar17 + 0x2c), plVar12 != (longlong *)0x0)) &&
              ((*(char *)(lVar17 + 10) != '\0' ||
               (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x9f8))(plVar12),
               plVar12 != (longlong *)0x0)))))) {
            lVar10 = plVar15[0x39];
            if (lVar10 == 0) {
              pdVar13 = (double *)&DAT_14c8464e0;
              uVar18 = (undefined4)DAT_14c8464f0;
              uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar18 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
              uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
              pdVar13 = (double *)(lVar10 + 0x260);
            }
            dVar5 = *pdVar13;
            dVar6 = pdVar13[1];
            dVar3 = (double)plVar12[0x4c];
            dVar4 = (double)plVar12[0x4d];
            dVar11 = (double)plVar12[0x4e];
            local_158 = dVar3;
            dStack_150 = dVar4;
            (**(code **)(*plVar15 + 0x528))(plVar15,&local_f8,&local_110);
            local_148 = (double)local_110._0_4_ + dVar11;
            dVar3 = dVar3 - dVar5;
            dVar4 = dVar4 - dVar6;
            if (*(float *)(plVar12 + 0xcb) * *(float *)(plVar12 + 0xcb) <
                (float)(dVar4 * dVar4 + dVar3 * dVar3)) {
              local_100 = local_148 - (double)CONCAT44(uVar19,uVar18);
              local_110 = dVar3;
              dStack_108 = dVar4;
              FUN_144a90df0(&local_f8);
              FUN_144a90b9e(&local_f8,local_170);
              uStack_f0 = (double)(float)local_168;
              local_f8 = 0.0;
              local_e8 = 0.0;
              local_178 = 0;
              (**(code **)(*plVar15 + 0x4d0))(plVar15,&local_158,&local_f8,0);
            }
          }
        }
      }
    }
    goto LAB_1402b7b99;
  }
  if (param_4 != '\0') goto LAB_1402b7b99;
  uVar9 = FUN_14048b906(*param_3);
  local_118 = 0;
  FUN_14485c47a(&local_118,uVar9);
  local_f8 = (double)local_118;
  iVar8 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                        (uint)((ulonglong)local_118 >> 0x20) ^ (uint)local_118);
  if (iVar8 == -1) goto LAB_1402b7b99;
  lVar10 = *(longlong *)(param_1 + 0x58);
  lVar17 = lVar10 + (longlong)iVar8 * 0x90;
  if (((lVar17 == 0) || ((longlong)iVar8 * 0x90 + lVar10 == -8)) ||
     (plVar15 = (longlong *)FUN_14479d2ce(lVar17 + 0x2c), plVar15 == (longlong *)0x0))
  goto LAB_1402b7b99;
  if (*(char *)(lVar17 + 10) == '\0') {
    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x9f8))(plVar15);
  }
  if ((param_2 == 0) || (plVar15 == (longlong *)0x0)) goto LAB_1402b7b99;
  lVar10 = FUN_144860928();
  uVar9 = FUN_1402b804a(param_2);
  FUN_1456efc70(&local_f8,plVar15);
  FUN_1402b8062(uVar9,&DAT_14cb716e8,&local_f8);
  FUN_144a2da94(&local_f8);
  cVar7 = FUN_1402b90e8(plVar15);
  if (cVar7 != '\0') {
    plVar15 = plVar15 + 0x1a6;
    FUN_1487cc980(plVar15,&local_f8);
    FUN_1402b8062(uVar9,&DAT_14cb716f0,&local_f8);
    FUN_144a2da94(&local_f8);
    FUN_1487ccacc(plVar15,&local_f8);
    FUN_1402b8062(uVar9,&DAT_14cb716f8,&local_f8);
    FUN_144a2da94(&local_f8);
    FUN_1487ccc18(plVar15,&local_f8);
    FUN_1402b8062(uVar9,&DAT_14cb71700,&local_f8);
    FUN_144a2da94(&local_f8);
    FUN_1402b8062(uVar9,&DAT_14cb71708,lVar10 + 0xa0);
    goto LAB_1402b7b99;
  }
  cVar7 = FUN_1402b90fa(plVar15);
  if (cVar7 == '\0') {
    cVar7 = FUN_1402b8050(plVar15);
    if (cVar7 == '\0') {
      plVar12 = plVar15;
      cVar7 = FUN_1456efc5e();
      uVar18 = SUB84(plVar12,0);
      if (cVar7 == '\0') goto LAB_1402b7b99;
      if ((char)plVar15[499] == '\x02') {
        FUN_1402b8062(uVar9,&DAT_14cb71730,plVar15 + 0x1ec);
        local_f8 = 0.0;
        local_d8 = 4;
        uStack_f0 = (double)CONCAT44(uStack_f0._4_4_,1);
        local_c8 = (DAT_14c9a8634 & 0x20) == 0;
        local_d0 = '\x01';
        puVar16 = &DAT_14cb71738;
      }
      else {
        if (((char)plVar15[499] != '\x01') || (dVar11 = (double)plVar15[0x15], dVar11 == 0.0))
        goto LAB_1402b7b99;
        lVar10 = *(longlong *)((longlong)dVar11 + 0x1c8);
        if (lVar10 == 0) {
          local_128 = DAT_14c846508;
          local_138 = (undefined4)DAT_14c8464f8;
          uStack_134 = DAT_14c8464f8._4_4_;
          uStack_130 = (undefined4)DAT_14c846500;
          uStack_12c = DAT_14c846500._4_4_;
        }
        else {
          dVar3 = *(double *)(lVar10 + 0x240);
          dVar4 = *(double *)(lVar10 + 0x248);
          dVar5 = *(double *)(lVar10 + 0x250);
          dVar6 = *(double *)(lVar10 + 600);
          pdVar13 = *(double **)(lVar10 + 0x228);
          local_f8 = dVar3;
          uStack_f0 = dVar4;
          local_e8 = dVar5;
          dStack_e0 = dVar6;
          if (pdVar13 == (double *)0x0) {
            uVar18 = 0x40;
            pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
            dVar11 = DAT_14c8463d8;
            *pdVar13 = DAT_14c8463d0;
            pdVar13[1] = dVar11;
            dVar11 = DAT_14c8463e8;
            pdVar13[2] = DAT_14c8463e0;
            pdVar13[3] = dVar11;
            dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar13[5] = dVar11;
            dVar11 = DAT_14c846508;
            pdVar13[6] = DAT_14c846508;
            *(double **)(lVar10 + 0x228) = pdVar13;
          }
          auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar13[1]);
          auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar13);
          auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar13[1]) >> 0x20);
          iVar8 = movmskpd(SUB84(dVar11,0),auVar1);
          auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar13[3]);
          auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar13[2]);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar13[3]) >> 0x20);
          uVar14 = movmskpd(uVar18,auVar2);
          if ((uVar14 & 0x3fffffff) != 0 || iVar8 != 0) {
            pdVar13[2] = local_e8;
            pdVar13[3] = dStack_e0;
            *(undefined4 *)pdVar13 = (undefined4)local_f8;
            *(undefined4 *)((longlong)pdVar13 + 4) = local_f8._4_4_;
            *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_f0;
            *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_f0._4_4_;
            FUN_1448052ee(&local_f8,&local_110);
            pdVar13[6] = local_100;
            pdVar13[4] = local_110;
            pdVar13[5] = dStack_108;
          }
          local_128 = pdVar13[6];
          local_138 = *(undefined4 *)(pdVar13 + 4);
          uStack_134 = *(undefined4 *)((longlong)pdVar13 + 0x24);
          uStack_130 = *(undefined4 *)(pdVar13 + 5);
          uStack_12c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
        }
        local_f8 = 0.0;
        local_d8 = 0x18;
        local_e8 = (double)CONCAT44(uStack_12c,uStack_130);
        dStack_e0 = local_128;
        local_d0 = 5;
        local_c8 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
        uStack_f0._0_4_ = local_138;
        uStack_f0._4_4_ = uStack_134;
        FUN_1402b8062(uVar9,&DAT_14cb71730,&local_f8);
        FUN_144a2da94(&local_f8);
        local_f8 = 0.0;
        local_d8 = 4;
        uStack_f0 = (double)CONCAT44(uStack_f0._4_4_,1);
        local_c8 = (DAT_14c9a8634 & 0x20) == 0;
        local_d0 = '\x01';
        puVar16 = &DAT_14cb71738;
      }
      goto LAB_1402b7fbc;
    }
    FUN_1487c69a4(plVar15,&local_f8);
    if (local_d0 != '\0') {
      FUN_1402b8062(uVar9,&DAT_14cb71728,&local_f8);
    }
  }
  else {
    FUN_1487ccd6a(plVar15 + 0x1c1,&local_f8);
    FUN_1402b8062(uVar9,&DAT_14cb71710,&local_f8);
    FUN_144a2da94(&local_f8);
    FUN_1487cceb6(plVar15 + 0x1c1,&local_f8);
    FUN_1402b8062(uVar9,&DAT_14cb71718,&local_f8);
    FUN_144a2da94(&local_f8);
    if (((char)plVar15[0x1db] == '\x01') && ((char)plVar15[0x1d9] != '\0')) {
      plVar15 = plVar15 + 0x1d4;
    }
    else {
      plVar15 = (longlong *)(lVar10 + 0xd8);
    }
    FUN_14034cca6(&local_f8,plVar15);
    puVar16 = &DAT_14cb71720;
LAB_1402b7fbc:
    FUN_1402b8062(uVar9,puVar16,&local_f8);
  }
  FUN_144a2da94(&local_f8);
LAB_1402b7b99:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402b804a FUN_1402b804a body=5 status=ok
// SIG undefined FUN_1402b804a(void)

undefined8 FUN_1402b804a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 1402b8050 FUN_1402b8050 body=18 status=ok
// SIG undefined FUN_1402b8050(void)

undefined8 FUN_1402b8050(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xd24) >> 8),
                  *(longlong *)(param_1 + 0xd24) == DAT_14cb24258);
}



// FUNCTION 1402b8062 FUN_1402b8062 body=72 status=ok
// SIG undefined FUN_1402b8062(void)

void FUN_1402b8062(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0xffffffff;
  local_18 = *param_2;
  FUN_1402b8456(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b80ac FUN_1402b80ac body=56 status=ok
// SIG undefined FUN_1402b80ac(void)

undefined8 FUN_1402b80ac(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_1402b80e4();
    if (cVar1 == '\0') {
      uVar2 = FUN_14096b0e8(param_1,param_2);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1402b80e4 FUN_1402b80e4 body=880 status=ok
// SIG undefined FUN_1402b80e4(void)

undefined8 FUN_1402b80e4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double _X;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double _X_00;
  double _X_01;
  int iVar8;
  double *pdVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 extraout_var;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != (longlong *)0x0) {
    lVar10 = param_2[0x39];
    if (lVar10 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
      uVar13 = (undefined4)DAT_14c8464f0;
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar13 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
      pdVar9 = (double *)(lVar10 + 0x260);
    }
    dVar6 = *pdVar9;
    dVar7 = pdVar9[1];
    local_a4 = 0.0;
    local_a8 = 0.0;
    (**(code **)(*param_2 + 0x528))(param_2,&local_a4,&local_a8);
    dVar5 = (double)local_a8;
    _X_00 = (double)param_1[0x4c];
    _X_01 = (double)param_1[0x4d];
    _X = (double)param_1[0x4e];
    lVar10 = FUN_14070cc62();
    if (((*(int *)(lVar10 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
         lVar10 + 0x30)) && (lVar10 = param_2[0x10b], lVar10 != 0)) {
      lVar3 = *(longlong *)(lVar10 + 0x1518);
      plVar4 = *(longlong **)(lVar10 + 0x1520);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x250) - 0x15U < 10)) {
        _X = _X + (double)*(float *)((longlong)param_1 + 0xfa4);
      }
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
    }
    lVar10 = (**(code **)(*param_1 + 0x9f8))(param_1);
    if (lVar10 == 0) {
      bVar12 = false;
    }
    else {
      bVar12 = *(longlong *)(lVar10 + 0xd24) == DAT_14cb24250;
    }
    fVar15 = local_a4;
    if ((!bVar12) && (*(char *)((longlong)param_1 + 0xd2c) == '\0')) {
      fVar15 = *(float *)(param_1 + 0xcb) + local_a4;
    }
    uVar11 = 0;
    if ((_X_00 <= -DAT_14cb71350) || (DAT_14cb71350 <= _X_00)) goto LAB_1402b839f;
    uVar11 = 0;
    if ((_X_01 <= -DAT_14cb71358) ||
       (((uVar11 = 0, DAT_14cb71358 <= _X_01 || (uVar11 = 0, _X <= -DAT_14cb71360)) ||
        (DAT_14cb71360 <= _X)))) goto LAB_1402b839f;
    fVar16 = *(float *)(param_1 + 0xcc) * 0.5 + local_a8;
    iVar8 = _finite(_X_00);
    if ((iVar8 != 0) && (iVar8 = _finite(_X_01), iVar8 != 0)) {
      iVar8 = _finite(_X);
      if ((iVar8 != 0) &&
         ((float)((dVar6 - _X_00) * (dVar6 - _X_00) + (dVar7 - _X_01) * (dVar7 - _X_01)) <=
          fVar15 * fVar15 + 0.01)) {
        uVar11 = CONCAT71((int7)(CONCAT44(extraout_var,iVar8) >> 8),
                          ABS((float)((double)(float)((double)CONCAT44(uVar14,uVar13) - dVar5) - _X)
                             ) <= fVar16 + 0.01);
        goto LAB_1402b839f;
      }
    }
  }
  uVar11 = 0;
LAB_1402b839f:
  if ((local_a0 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1402b8456 FUN_1402b8456 body=1074 status=ok
// SIG undefined FUN_1402b8456(void)

void FUN_1402b8456(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  void *_Buf2;
  undefined8 ****ppppuVar13;
  longlong *plVar14;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a1;
  undefined8 ***local_a0;
  longlong *local_98;
  ushort local_88;
  byte local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == 0) goto LAB_1402b871a;
  plVar14 = (longlong *)(param_1 + 0x90);
  lVar7 = FUN_1402b888a(param_2,plVar14);
  if (lVar7 == 0) {
    iVar6 = *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x9c) < iVar6 + 1U) {
      FUN_141115832(plVar14,iVar6);
    }
    lVar7 = *plVar14;
    lVar12 = (longlong)iVar6 * 0x58;
    FUN_14034cca6(lVar7 + lVar12,param_3);
    *(longlong *)(lVar7 + 0x38 + lVar12) = *param_2;
    puVar9 = (undefined8 *)(lVar7 + 0x40 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined1 *)(lVar7 + 0x50 + lVar12) = 0;
    *(int *)(param_2 + 1) = iVar6;
    goto LAB_1402b871a;
  }
  lVar12 = (longlong)(int)param_2[1] * 0x58;
  bVar2 = *(byte *)(*plVar14 + 0x28 + lVar12);
  if (bVar2 == *(byte *)(param_3 + 0x28)) {
    lVar12 = *plVar14 + lVar12;
    puVar9 = (undefined8 *)(lVar12 + 8);
    _Buf2 = (void *)(param_3 + 8);
    if (0x18 < *(ushort *)(param_3 + 0x20)) {
      _Buf2 = *(void **)(param_3 + 8);
    }
    if (0x18 < *(ushort *)(lVar12 + 0x20)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    uVar8 = (ulonglong)((uint)bVar2 * 0x120);
    if (*(code **)(&DAT_14c9a85e0 + uVar8) == (code *)0x0) {
      iVar6 = memcmp(puVar9,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
      if (iVar6 == 0) goto LAB_1402b871a;
    }
    else {
      cVar5 = (**(code **)(&DAT_14c9a85e0 + uVar8))();
      if (cVar5 != '\0') goto LAB_1402b871a;
    }
  }
  local_a1 = 2;
  local_b0 = FUN_14479d2ce(param_1 + 0x48);
  local_a0 = *(undefined8 ****)(param_1 + 8);
  local_98 = *(longlong **)(param_1 + 0x10);
  if (local_98 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
    UNLOCK();
    plVar14 = local_98;
  }
  local_78[0] = 0;
  local_50 = 0;
  FUN_1402b8912(local_78,&local_a0,&local_b0,&local_a1);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar12 = *param_2;
    uVar4 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar11 = (uint)lVar12 & 0xffff;
    lVar10 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xe0);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0xe8) - 1U &
                              (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar11) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x38) == lVar12) {
          if ((lVar10 != 0) && (lVar10 + 0x10 != 0)) {
            if (*(longlong *)(lVar10 + 0x28) != 0) {
              puVar9 = (undefined8 *)(lVar10 + 0x28);
              if (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar7 + 0x28) * 0x120) != (code *)0x0)
              {
                (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar7 + 0x28) * 0x120))
                          (lVar7 + 8,local_78,puVar9);
              }
              if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
                 (*(int *)(*(longlong *)(param_1 + 0x10) + 8) < 1)) {
                *puVar9 = 0;
              }
              else {
                FUN_1402b964e(&local_a0,param_1,param_2);
                if (*(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(param_3 + 0x28) * 0x120) ==
                    (code *)0x0) {
                  local_b0 = 0;
                }
                else {
                  (**(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(param_3 + 0x28) * 0x120))
                            (&local_b0,(void *)(param_3 + 8),local_78,&local_a0);
                }
                *puVar9 = local_b0;
                FUN_1449db362(&local_a0);
              }
            }
            FUN_144983130(lVar7);
            if ((longlong)*(int *)(lVar10 + 0x18) == 0) goto LAB_1402b86b8;
            lVar7 = 0;
            goto LAB_1402b8645;
          }
          break;
        }
        iVar6 = *(int *)(lVar10 + 0x30);
      } while (iVar6 != -1);
    }
  }
  FUN_144983130(lVar7,param_3);
  goto LAB_1402b86b8;
  while (lVar7 = lVar7 + 0x10, (longlong)*(int *)(lVar10 + 0x18) * 0x10 != lVar7) {
LAB_1402b8645:
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar7) != 0) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar7) != 0)) {
      FUN_1447c3578(param_3,&local_a0,local_78);
      FUN_14094d6d2(lVar10 + 0x10,&local_a0);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar13 = &local_a0;
        if (0x18 < local_88) {
          ppppuVar13 = (undefined8 ****)local_a0;
        }
        (*pcVar3)(ppppuVar13);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0);
      }
      break;
    }
  }
LAB_1402b86b8:
  FUN_144a5ac3a(local_78);
LAB_1402b871a:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402b888a FUN_1402b888a body=136 status=ok
// SIG undefined FUN_1402b888a(void)

longlong FUN_1402b888a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  if ((((longlong)iVar1 < 0) || (iVar2 <= iVar1)) ||
     (lVar4 = (longlong)iVar1 * 0x58, *(longlong *)(lVar3 + 0x38 + lVar4) != *param_1)) {
    if (iVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x38 + lVar6) == *param_1) {
          uVar5 = (int)(lVar6 >> 3) * -0x45d1745d;
          if ((int)uVar5 < 0) {
            return 0;
          }
          if (iVar2 <= (int)uVar5) {
            return 0;
          }
          *(uint *)(param_1 + 1) = uVar5;
          return (ulonglong)(uVar5 & 0x7fffffff) * 0x58 + *param_2;
        }
        lVar6 = lVar6 + 0x58;
      } while ((longlong)iVar2 * 0x58 - lVar6 != 0);
    }
  }
  else {
    lVar4 = lVar3 + lVar4;
  }
  return lVar4;
}



// FUNCTION 1402b8912 FUN_1402b8912 body=314 status=ok
// SIG undefined FUN_1402b8912(void)

void FUN_1402b8912(char *param_1,undefined8 *param_2,longlong *param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  if (*param_1 == '\x03') {
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  cVar2 = *param_4;
  lVar7 = *param_3;
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar6;
  param_1[0x20] = cVar2;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 1402b8a4c FUN_1402b8a4c body=69 status=ok
// SIG undefined FUN_1402b8a4c(void)

void FUN_1402b8a4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = 0xffffffff;
  FUN_1402b8b80();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b8a92 FUN_1402b8a92 body=62 status=ok
// SIG undefined FUN_1402b8a92(void)

void FUN_1402b8a92(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b8ad2 FUN_1402b8ad2 body=173 status=ok
// SIG undefined FUN_1402b8ad2(void)

void FUN_1402b8ad2(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1402b8b69;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1402b8b69:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1402b8b80 FUN_1402b8b80 body=1304 status=ok
// SIG undefined FUN_1402b8b80(void)

void FUN_1402b8b80(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  uint *puVar13;
  code *pcVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 auStack_c8 [40];
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  ulonglong local_78;
  uint local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = &DAT_14c9a7840;
  if (((((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) &&
       (uVar7 = *param_1, -1 < (int)uVar7)) &&
      (((int)uVar7 < DAT_14c9647dc &&
       (lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar15 != 0)))) &&
     ((*(uint *)(lVar15 + 0x10) == param_1[1] && ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
  }
  if ((longlong)(int)plVar4[1] != 0) {
    lVar15 = *plVar4;
    lVar9 = (longlong)(int)plVar4[1] * 0x58;
    do {
      if (*(longlong *)(lVar15 + 0x38) == *param_2) {
        if (lVar15 != 0) {
          uVar6 = FUN_14479d2ce(param_1);
          local_a0[0] = (undefined8 ***)((ulonglong)local_a0[0] & 0xffffffffffffff00);
          local_78 = local_78 & 0xffffffff00000000;
          FUN_1456bb102(local_a0,uVar6);
          FUN_1447c3578(lVar15,local_58,local_a0);
          FUN_140af060e(param_1,param_2,local_58);
          pcVar14 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
          if (pcVar14 != (code *)0x0) {
            ppppuVar11 = local_58;
            if (0x18 < local_40) {
              ppppuVar11 = (undefined8 ****)local_58[0];
            }
            (*pcVar14)(ppppuVar11);
          }
          if (0x18 < local_40) {
            FUN_1400020a8(local_58[0]);
          }
          FUN_144a5ac3a(local_a0);
          goto LAB_1402b8ec5;
        }
        break;
      }
      lVar15 = lVar15 + 0x58;
      lVar9 = lVar9 + -0x58;
    } while (lVar9 != 0);
  }
  puVar16 = param_1 + 4;
  uVar7 = *(uint *)(param_2 + 1);
  uVar3 = param_1[0x246];
  uVar12 = (ulonglong)uVar3;
  puVar13 = *(uint **)(param_1 + 0x244);
  puVar5 = puVar13;
  if (puVar13 == (uint *)0x0) {
    puVar5 = puVar16;
  }
  if ((int)uVar7 < (int)uVar3 && -1 < (int)uVar7) {
    uVar10 = (ulonglong)uVar7;
    lVar15 = *param_2;
    if (*(longlong *)(puVar5 + uVar10 * 0x12 + 10) == lVar15) {
LAB_1402b8ccc:
      if (puVar13 == (uint *)0x0) {
        puVar13 = puVar16;
      }
      puVar13 = puVar13 + uVar10 * 0x12;
      local_88 = (ushort)puVar13[6];
      if (local_88 < 0x19) {
        uVar12 = (ulonglong)((uint)(byte)puVar13[8] * 0x120);
        pcVar14 = *(code **)((longlong)&DAT_14c9a85b8 + uVar12);
        if ((pcVar14 == (code *)0x0) &&
           (pcVar14 = *(code **)((longlong)&DAT_14c9a85b0 + uVar12), pcVar14 == (code *)0x0)) {
          memcpy(local_a0,puVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
        }
        else {
          (*pcVar14)(local_a0,puVar13);
        }
      }
      else {
        local_a0[0] = *(undefined8 ****)puVar13;
        puVar13[0] = 0;
        puVar13[1] = 0;
        *(undefined2 *)(puVar13 + 6) = 0;
      }
      local_80 = (byte)puVar13[8];
      *(undefined1 *)(puVar13 + 8) = 0;
      local_70 = puVar13[0xc];
      local_78 = *(ulonglong *)(puVar13 + 10);
      local_68 = *(longlong *)(puVar13 + 0xe);
      local_60 = *(longlong **)(puVar13 + 0x10);
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      local_40 = local_88;
      if (local_88 < 0x19) {
        uVar12 = (ulonglong)((uint)local_80 * 0x120);
        pcVar14 = *(code **)((longlong)&DAT_14c9a85b8 + uVar12);
        if ((pcVar14 == (code *)0x0) &&
           (pcVar14 = *(code **)((longlong)&DAT_14c9a85b0 + uVar12), pcVar14 == (code *)0x0)) {
          memcpy(local_58,local_a0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
        }
        else {
          (*pcVar14)(local_58,local_a0);
        }
      }
      else {
        local_58[0] = local_a0[0];
        local_a0[0] = (undefined8 ****)0x0;
        local_88 = 0;
      }
      local_38 = local_80;
      local_80 = 0;
      lVar15 = param_2[1];
      if (*(uint **)(param_1 + 0x244) != (uint *)0x0) {
        puVar16 = *(uint **)(param_1 + 0x244);
      }
      puVar16 = puVar16 + (longlong)(int)lVar15 * 0x12;
      FUN_140cfa737(puVar16,1);
      uVar7 = param_1[0x246];
      iVar8 = uVar7 - ((int)lVar15 + 1);
      if (iVar8 != 0) {
        memmove(puVar16,puVar16 + 0x12,(longlong)iVar8 * 0x48);
        uVar7 = param_1[0x246];
      }
      param_1[0x246] = uVar7 - 1;
      if (local_38 == 0) {
        uVar7 = 0;
      }
      else {
        FUN_140af0ad8(param_1,param_2,local_a0,local_58);
        uVar7 = (uint)local_38;
      }
      pcVar14 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
      if (pcVar14 != (code *)0x0) {
        ppppuVar11 = (undefined8 ****)local_58[0];
        if (local_40 < 0x19) {
          ppppuVar11 = local_58;
        }
        (*pcVar14)(ppppuVar11);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      plVar4 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      pcVar14 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
      if (pcVar14 != (code *)0x0) {
        ppppuVar11 = (undefined8 ****)local_a0[0];
        if (local_88 < 0x19) {
          ppppuVar11 = local_a0;
        }
        (*pcVar14)(ppppuVar11);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0[0]);
      }
      goto LAB_1402b8ec5;
    }
LAB_1402b8c70:
    lVar9 = 0;
    do {
      if (*(longlong *)((longlong)puVar5 + lVar9 + 0x28) == lVar15) {
        uVar7 = (int)(lVar9 >> 3) * 0x38e38e39;
        *(uint *)(param_2 + 1) = uVar7;
        if (((int)uVar7 < 0) || ((int)param_1[0x246] <= (int)uVar7)) goto LAB_1402b8ec5;
        puVar13 = *(uint **)(param_1 + 0x244);
        uVar10 = (ulonglong)(uVar7 & 0x7fffffff);
        goto LAB_1402b8ccc;
      }
      lVar9 = lVar9 + 0x48;
    } while (uVar12 * 0x48 != lVar9);
  }
  else if (uVar12 != 0) {
    uVar12 = (ulonglong)(int)uVar3;
    lVar15 = *param_2;
    goto LAB_1402b8c70;
  }
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
LAB_1402b8ec5:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402b909a FUN_1402b909a body=7 status=ok
// SIG undefined FUN_1402b909a(void)

undefined1 FUN_1402b909a(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3c0);
}



// FUNCTION 1402b90a2 FUN_1402b90a2 body=69 status=ok
// SIG undefined FUN_1402b90a2(void)

void FUN_1402b90a2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = 0xffffffff;
  FUN_140af060e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b90e8 FUN_1402b90e8 body=18 status=ok
// SIG undefined FUN_1402b90e8(void)

undefined8 FUN_1402b90e8(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xd24) >> 8),
                  *(longlong *)(param_1 + 0xd24) == DAT_14cb24238);
}



// FUNCTION 1402b90fa FUN_1402b90fa body=30 status=ok
// SIG undefined FUN_1402b90fa(void)

undefined8 FUN_1402b90fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd24);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == DAT_14cb24248 || lVar1 == DAT_14cb24240);
}



// FUNCTION 1402b9118 FUN_1402b9118 body=171 status=ok
// SIG undefined FUN_1402b9118(void)

undefined8 FUN_1402b9118(char *param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined7 uVar7;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar8;
  
  cVar1 = FUN_141077302();
  if (((cVar1 == '\0') || (param_1[3] != '\0')) || (param_1[4] != '\x01')) {
    return 0;
  }
  plVar4 = (longlong *)(param_1 + 0x24);
  plVar3 = (longlong *)FUN_14479d2ce(plVar4);
  if (plVar3 != (longlong *)0x0) {
    if (*param_1 == '\x01') {
      if (((param_1[2] != '\0') ||
          (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x9f8))(), plVar4 = plVar3,
          plVar3 != (longlong *)0x0)) &&
         (plVar4 = plVar3, *(char *)((longlong)plVar3 + 0xf9b) == '\x01')) {
        uVar7 = (undefined7)((ulonglong)plVar3 >> 8);
        cVar1 = *(char *)((longlong)plVar3 + 0xf9c);
LAB_1402b917c:
        bVar2 = 1;
        bVar8 = 1;
        if (cVar1 != '\x01') goto LAB_1402b9180;
        plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x34);
        lVar5 = FUN_140519fd4(plVar4);
        if (lVar5 != 0) {
          uVar6 = FUN_147f5e16e(lVar5);
          bVar8 = (byte)uVar6;
          uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
          bVar2 = 1;
          goto LAB_1402b9180;
        }
      }
    }
    else {
      plVar4 = plVar3;
      if ((char)plVar3[0x1a4] == '\x01') {
        uVar7 = (undefined7)((ulonglong)plVar3 >> 8);
        cVar1 = *(char *)((longlong)plVar3 + 0xd21);
        goto LAB_1402b917c;
      }
    }
  }
  bVar8 = (byte)plVar4;
  bVar2 = 0;
  uVar7 = 0;
LAB_1402b9180:
  return CONCAT71(uVar7,bVar2 & bVar8);
}



// FUNCTION 1402b91c4 FUN_1402b91c4 body=63 status=ok
// SIG undefined FUN_1402b91c4(void)

longlong FUN_1402b91c4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14027347e();
  if (lVar1 != 0) {
    lVar2 = FUN_140358c20();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1402b9204 FUN_1402b9204 body=121 status=ok
// SIG undefined FUN_1402b9204(void)

undefined8 FUN_1402b9204(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 2) != (longlong *)0x0) {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))();
        if (lVar3 != 0) {
          uVar2 = FUN_140cb10de(lVar3,param_2);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1402b927e FUN_1402b927e body=835 status=ok
// SIG undefined FUN_1402b927e(void)

void FUN_1402b927e(undefined8 param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  code *local_48;
  longlong *local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong **)(param_2 + 0x50) == (longlong *)0x0) || (*(int *)(param_2 + 0x4c) == 0)) ||
      (uVar2 = *(uint *)(param_2 + 0x48), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
  goto LAB_1402b92e8;
  lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)(param_2 + 0x4c))) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_1402b92e8;
  lVar9 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x20))();
  if (((lVar9 == 0) || (*(int *)(param_2 + 0x28) == 0)) ||
     ((uVar2 = *(uint *)(param_2 + 0x24), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2))))
  goto LAB_1402b92e8;
  plVar10 = (longlong *)
            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if ((((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)(param_2 + 0x28))) ||
      ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) ||
     (plVar5 = (longlong *)*plVar10, plVar5 == (longlong *)0x0)) goto LAB_1402b92e8;
  if (param_2[3] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (*param_2 == '\x01') {
    if (param_2[2] == '\0') {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x9f8))(plVar5);
      if (plVar5 == (longlong *)0x0) goto LAB_1402b92e8;
    }
    lVar6 = FUN_1402b9204(lVar9,(longlong)plVar5 + 0xd24);
    if (lVar6 == 0) goto LAB_1402b92e8;
    local_48 = FUN_1402b77b4;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x38);
    if (iVar3 == 0) {
LAB_1402b95d1:
      uVar8 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x34);
      uVar8 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != iVar3 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
        goto LAB_1402b95d1;
        uVar8 = *puVar7;
      }
    }
    (**(code **)(*plVar5 + 0xa40))
              (plVar5,uVar8,CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1),
               CONCAT71((int7)((ulonglong)plVar10 >> 8),param_2[7]));
    if (param_2[7] == '\0') {
      plVar10 = plVar5 + 0x123;
      if (plVar5[0x123] == DAT_14cb24220) {
        plVar10 = &DAT_14cb241e8;
      }
      if (plVar5[0x123] == DAT_14cb24218) {
        plVar10 = &DAT_14cb241e8;
      }
    }
    else {
      plVar10 = &DAT_14cb241e8;
    }
    lVar6 = FUN_1402b9204(lVar9,plVar10);
    if (lVar6 == 0) {
      if (*plVar10 == DAT_14cb241e8) goto LAB_1402b92e8;
      lVar6 = FUN_1402b9204(lVar9,&DAT_14cb241e8);
      if (lVar6 == 0) goto LAB_1402b92e8;
    }
    local_48 = FUN_1456f1392;
  }
  local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
  FUN_146544f30(&local_38,param_1);
  pcVar4 = *(code **)(lVar6 + 0x30);
  plVar10 = *(longlong **)(lVar6 + 0x38);
  if (plVar10 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar10 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
    local_40 = plVar10;
  }
  local_48 = pcVar4;
  FUN_14123f11a(lVar9,1,&local_48,&local_38);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar10 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1402b92e8;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1402b92e8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b95d8 FUN_1402b95d8 body=117 status=ok
// SIG undefined FUN_1402b95d8(void)

void FUN_1402b95d8(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x98)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x98)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402b964e FUN_1402b964e body=352 status=ok
// SIG undefined FUN_1402b964e(void)

longlong * FUN_1402b964e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  plVar8 = *(longlong **)(param_2 + 0x10);
  bVar7 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_1402b9741:
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_1402b9741;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *puVar3 = &PTR_LAB_14a1c9ed0;
  puVar3[1] = *param_3;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_3 + 1);
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[3] = lVar9;
  *puVar3 = &PTR_FUN_14a1c9e60;
  puVar3[4] = uVar10;
  puVar3[5] = plVar8;
  if (bVar7) {
    puVar3[6] = &LAB_141142e06;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar3[6] = &LAB_141142e06;
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
  return param_1;
}



// FUNCTION 1402b97ae FUN_1402b97ae body=965 status=ok
// SIG undefined FUN_1402b97ae(void)

void FUN_1402b97ae(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    uVar12 = 0;
    uVar4 = 0;
  }
  else {
    uVar12 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar4 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar4 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar4 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar11;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar4 = uVar11;
      }
    }
  }
  local_58 = CONCAT44(uVar4,uVar12);
  iVar3 = FUN_1409a82f2((longlong *)(param_1 + 0x58),uVar4 ^ uVar12);
  if (iVar3 != -1) {
    lVar13 = (longlong)iVar3 * 0x90 + *(longlong *)(param_1 + 0x58);
    pcVar10 = (char *)(lVar13 + 8);
    if (pcVar10 != (char *)0x0 && lVar13 != 0) {
      if (((((*(int *)(lVar13 + 0x30) != 0) && (uVar4 = *(uint *)(lVar13 + 0x2c), -1 < (int)uVar4))
           && ((int)uVar4 < DAT_14c9647dc)) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(lVar13 + 0x30))))) &&
         (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
          (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
        (**(code **)(*plVar8 + 0xa40))(plVar8,param_2,0,1);
        lVar5 = plVar8[0x123];
        if (lVar5 == DAT_14cb241f8) {
          if (param_2 != (longlong *)0x0) {
            (**(code **)(*param_2 + 0x5c8))(param_2,0);
          }
          lVar5 = (**(code **)(*plVar8 + 0x9f8))(plVar8);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x6f1) == '\x01')) {
            uVar4 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar3 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar3 = *(int *)(lVar5 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar5 + 0x10) = iVar9;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar9;
              }
            }
            uVar1 = *(undefined4 *)(lVar13 + 0x10);
            iVar9 = *(int *)(param_1 + 0xb0);
            lVar13 = (longlong)iVar9;
            *(uint *)(param_1 + 0xb0) = iVar9 + 1U;
            if (*(uint *)(param_1 + 0xb4) < iVar9 + 1U) {
              FUN_1487d2e02((longlong *)(param_1 + 0xa8),iVar9);
            }
            lVar5 = *(longlong *)(param_1 + 0xa8);
            *(uint *)(lVar5 + lVar13 * 0xc) = uVar4;
            *(int *)(lVar5 + 4 + lVar13 * 0xc) = iVar3;
            *(undefined4 *)(lVar5 + 8 + lVar13 * 0xc) = uVar1;
          }
          goto LAB_1402b9a54;
        }
        if (lVar5 == DAT_14cb24200) {
          if ((param_2 != (longlong *)0x0) && (plVar8[0x124] != 0)) {
            uVar6 = FUN_14090a268();
            plVar8 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar6);
            if (plVar8 != (longlong *)0x0) {
              uVar6 = FUN_14090a268();
              plVar7 = (longlong *)FUN_144718840(plVar8,uVar6);
              if (plVar7 != (longlong *)0x0 && plVar8 != plVar7) {
                lVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
                *(undefined8 *)(lVar5 + 8) = DAT_14caa8578;
              }
            }
          }
        }
        else if (lVar5 == DAT_14cb24220) {
          FUN_143ca1bdc(plVar8);
        }
      }
      if ((*(float *)(lVar13 + 0x10) == 3.4028235e+38) && (!NAN(*(float *)(lVar13 + 0x10)))) {
        *(undefined4 *)(lVar13 + 0x10) = 0;
      }
      if ((*(char *)(lVar13 + 0xb) == '\0') && (*pcVar10 == '\0')) {
        cVar2 = FUN_1402b9118(pcVar10);
        if (cVar2 == '\0') {
          cVar2 = FUN_1410770b6(param_1,pcVar10);
          if (cVar2 == '\0') {
            FUN_1456efee2(param_1,pcVar10);
          }
          else {
            FUN_1456f06d6();
          }
        }
        else {
          FUN_145a2b17e(param_1,pcVar10);
        }
      }
    }
  }
LAB_1402b9a54:
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402b9b74 FUN_1402b9b74 body=478 status=ok
// SIG undefined FUN_1402b9b74(void)

void FUN_1402b9b74(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar2 = (longlong *)*param_1;
  FUN_14076ac9c(plVar2,param_1);
  *(byte *)((longlong)plVar2 + 0x2de) = *(byte *)((longlong)plVar2 + 0x2de) | 0x10;
  ppuVar3 = &PTR_FUN_14b50c110;
  *plVar2 = (longlong)&PTR_FUN_14b50c110;
  plVar2[5] = (longlong)&PTR_LAB_14b50cb10;
  plVar2[6] = (longlong)&PTR_LAB_14b50cb50;
  plVar2[0x55] = (longlong)&PTR_LAB_14b50cba0;
  plVar2[0x56] = (longlong)&PTR_LAB_14b50cc20;
  plVar2[0x57] = (longlong)&PTR_LAB_14b50cc30;
  plVar2[0xcb] = 0;
  plVar2[0xcc] = 0;
  plVar2[0xcd] = 0;
  plVar2[0xce] = 0;
  plVar2[0xcf] = 0;
  plVar2[0xd0] = 0;
  plVar2[0xd1] = 0;
  *(undefined4 *)(plVar2 + 0xd2) = 0xff000000;
  *(byte *)((longlong)plVar2 + 0x1f9) = *(byte *)((longlong)plVar2 + 0x1f9) | 8;
  plVar2[200] = 0x408f400000000000;
  plVar2[0xc9] = 0x408f400000000000;
  plVar2[0xca] = 0x408f400000000000;
  *(undefined4 *)((longlong)plVar2 + 0x68c) = 0xffffffff;
  *(undefined1 *)((longlong)plVar2 + 0x1fb) = 0;
  if (((*(byte *)((longlong)plVar2 + 0x2d3) & 8) != 0) &&
     (*(byte *)((longlong)plVar2 + 0x2d3) = *(byte *)((longlong)plVar2 + 0x2d3) & 0xf7,
     plVar4 = plVar2, DAT_14c76142c == 1)) {
    do {
      if ((*(byte *)(plVar4 + 0x3f) & 2) == 0) break;
      *(byte *)(plVar4 + 0x3f) = *(byte *)(plVar4 + 0x3f) & 0xfd;
      plVar1 = plVar4 + 0x24;
      plVar4 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    ppuVar3 = (undefined **)*plVar2;
  }
  (*(code *)ppuVar3[0x128])(plVar2,0);
  (**(code **)(*plVar2 + 0x938))(plVar2,2,1);
  (**(code **)(*plVar2 + 0x720))(plVar2,0);
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  plVar4 = plVar2;
  while( true ) {
    if (plVar4 == (longlong *)0x0) {
      if (plVar2[0xcd] == 0) {
        plVar4 = plVar2 + 0xcb;
        plVar2[0xce] = (longlong)&DAT_14cb98d60;
        plVar2[0xcd] = (longlong)plVar2;
        lVar5 = DAT_14cb98d60;
        while( true ) {
          plVar2[0xcb] = lVar5;
          LOCK();
          lVar6 = *(longlong *)plVar2[0xce];
          bVar7 = lVar5 == lVar6;
          if (bVar7) {
            *(longlong *)plVar2[0xce] = (longlong)plVar4;
            lVar6 = lVar5;
          }
          UNLOCK();
          if (bVar7) break;
          plVar2[0xcb] = lVar6;
          lVar5 = *(longlong *)plVar2[0xce];
        }
        if (*plVar4 != 0) {
          *(longlong **)(*plVar4 + 8) = plVar4;
        }
      }
      return;
    }
    if ((*(uint *)(plVar4 + 1) & 0x30) != 0) break;
    plVar4 = (longlong *)plVar4[4];
  }
  return;
}



// FUNCTION 1402b9d52 FUN_1402b9d52 body=54 status=ok
// SIG undefined FUN_1402b9d52(void)

void FUN_1402b9d52(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1402b9d88(param_1 + 0x82);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001402b9d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x950))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1402b9d88 FUN_1402b9d88 body=67 status=ok
// SIG undefined FUN_1402b9d88(void)

undefined4 FUN_1402b9d88(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1402b9dcc(param_1 + 0x68);
  if ((char)uVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x44) = DAT_14cad0ef0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
    FUN_1400bcfd8(param_1);
  }
  return uVar1;
}



// FUNCTION 1402b9dcc FUN_1402b9dcc body=85 status=ok
// SIG undefined FUN_1402b9dcc(void)

undefined8 FUN_1402b9dcc(longlong param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((byte)(&DAT_14cad0ed0)[(int)param_2] == param_3) {
    FUN_14493c25c();
  }
  else {
    FUN_1402ba1a6(param_1,param_2,param_3);
  }
  if ((param_2 < 0x20) && (*(byte *)(param_1 + (ulonglong)param_2) != param_3)) {
    *(char *)(param_1 + (ulonglong)param_2) = (char)param_3;
    uVar1 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1402b9e22 FUN_1402b9e22 body=353 status=ok
// SIG undefined FUN_1402b9e22(void)

void FUN_1402b9e22(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar5 = param_1;
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
    return;
  }
  for (; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[4]) {
    if ((*(uint *)(plVar5 + 1) & 0x30) != 0) {
      return;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x570))(param_1);
  if (((uVar4 < 6) && ((0x2aU >> (uVar4 & 0x1f) & 1) != 0)) &&
     (plVar5 = param_1, DAT_14c76142c == 1)) {
    do {
      if ((*(byte *)(plVar5 + 0x3f) & 2) == 0) break;
      *(byte *)(plVar5 + 0x3f) = *(byte *)(plVar5 + 0x3f) & 0xfd;
      plVar1 = plVar5 + 0x24;
      plVar5 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
  }
  if (param_2 != '\0') {
    if ((longlong)(int)param_1[0x44] < 1) {
      if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
        cVar3 = (**(code **)(*param_1 + 0x508))(param_1,0,1,0);
        *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar3 * '\x02';
      }
    }
    else {
      lVar2 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
      *(byte *)(lVar2 + 0x608) = *(byte *)(lVar2 + 0x608) | 2;
      *(undefined4 *)(lVar2 + 0x10) = 3;
      *(undefined4 *)(lVar2 + 200) = 0xffffffff;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x460))(param_1);
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) == (bool)cVar3) {
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar3 << 6;
    plVar5 = DAT_14caca218;
    if (DAT_14caca220 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
  }
  FUN_1402ba01c((longlong)param_1 + 0x59d,param_1);
  return;
}



// FUNCTION 1402b9f84 FUN_1402b9f84 body=151 status=ok
// SIG undefined FUN_1402b9f84(void)

void FUN_1402b9f84(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc,4);
      uVar3 = uVar3 / 0xc;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
    }
  }
  return;
}



// FUNCTION 1402ba01c FUN_1402ba01c body=125 status=ok
// SIG undefined FUN_1402ba01c(void)

void FUN_1402ba01c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402ba09a(param_1,&local_28);
  if (local_28 != 0) {
    FUN_147890345(local_28,param_2);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ba09a FUN_1402ba09a body=266 status=ok
// SIG undefined FUN_1402ba09a(void)

undefined8 * FUN_1402ba09a(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1402ba0be;
  FUN_14028d57c(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x59d,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1402ba0be;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001402ba162:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001402ba162;
      }
    }
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
LAB_1402ba0be:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ba1a6 FUN_1402ba1a6 body=440 status=ok
// SIG undefined FUN_1402ba1a6(void)

undefined8 FUN_1402ba1a6(longlong param_1,uint param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cacfd48 == (longlong *)0x0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_140eca530;
    local_58 = &LAB_1479b02e7;
    local_60 = &LAB_146063820;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000006;
    local_80 = 8;
    local_88 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
  }
  plVar1 = DAT_14cacfd48;
  lVar5 = DAT_14cacfd48[0x22];
  if (lVar5 == 0) {
    (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
    lVar5 = plVar1[0x22];
  }
  if (DAT_14cacfd78 == '\0') {
    FUN_1416bf7d6(lVar5,0);
    DAT_14cacfd78 = '\x01';
  }
  if (((int)param_2 < 0) || (*(int *)(lVar5 + 0x148) <= (int)param_2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x140) + (ulonglong)param_2 * 8);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x28);
  lVar6 = (longlong)iVar2;
  if (0 < lVar6) {
    plVar3 = (longlong *)*plVar1;
    lVar4 = lVar6;
    do {
      if (lVar5 == *plVar3) goto LAB_1402ba255;
      plVar3 = (longlong *)((longlong)plVar3 + 0xc);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
    FUN_1402ba360(plVar1,iVar2);
  }
  plVar3 = (longlong *)(*plVar1 + lVar6 * 0xc);
  *plVar3 = lVar5;
LAB_1402ba255:
  *(undefined1 *)(plVar3 + 1) = param_3;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ba360 FUN_1402ba360 body=373 status=ok
// SIG undefined FUN_1402ba360(void)

void FUN_1402ba360(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402ba3eb;
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
LAB_1402ba3eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1402ba4d6 FUN_1402ba4d6 body=54 status=ok
// SIG undefined FUN_1402ba4d6(void)

void FUN_1402ba4d6(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1402ba50c(param_1 + 0x82);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001402ba502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x950))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1402ba50c FUN_1402ba50c body=617 status=ok
// SIG undefined FUN_1402ba50c(void)

undefined8 FUN_1402ba50c(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
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
  lVar7 = 0;
  bVar10 = false;
  do {
    lVar8 = lVar7 + 0x68;
    while (*(byte *)(param_1 + lVar8) == param_2) {
      lVar8 = lVar8 + 1;
      if (lVar8 == 0x88) {
        if (bVar10) goto LAB_1402ba572;
        uVar9 = 0;
        goto LAB_1402ba668;
      }
    }
    *(char *)(param_1 + lVar8) = (char)param_2;
    lVar7 = lVar8 + -0x67;
    bVar10 = true;
  } while (lVar8 != 0x87);
LAB_1402ba572:
  plVar1 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0x20) {
    FUN_144760bde(plVar1,0x20);
  }
  if (DAT_14cacfd48 == (longlong *)0x0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_140eca530;
    local_78 = &LAB_1479b02e7;
    local_80 = &LAB_146063820;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
  }
  plVar6 = DAT_14cacfd48;
  lVar7 = DAT_14cacfd48[0x22];
  if (lVar7 == 0) {
    (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
    lVar7 = plVar6[0x22];
  }
  if (DAT_14cacfd78 == '\0') {
    FUN_1416bf7d6(lVar7,0);
    DAT_14cacfd78 = '\x01';
  }
  lVar8 = 0;
  do {
    cVar2 = *(char *)(param_1 + 0x68 + lVar8);
    if (((cVar2 != (&DAT_14cad0ed0)[lVar8]) && ((int)lVar8 < *(int *)(lVar7 + 0x148))) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x140) + lVar8 * 8), lVar4 != 0)) {
      iVar3 = *(int *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x94) < iVar3 + 1U) {
        FUN_1402ba360(plVar1,iVar3);
      }
      lVar5 = *plVar1;
      *(longlong *)(lVar5 + (longlong)iVar3 * 0xc) = lVar4;
      *(char *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = cVar2;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x20);
  if (*(int *)(param_1 + 0x94) != *(int *)(param_1 + 0x90)) {
    FUN_144760bde(plVar1);
  }
  *(undefined8 *)(param_1 + 0x44) = DAT_14cad0ef0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
  FUN_1400bcfd8(param_1);
  uVar9 = 1;
LAB_1402ba668:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1402ba776 FUN_1402ba776 body=435 status=ok
// SIG undefined FUN_1402ba776(void)

undefined4 * FUN_1402ba776(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ba9e4(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  *local_40 = (longlong)puVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar1;
    uVar5 = puVar1[2];
  }
  uVar4 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar12 = (uint)uVar5 & 0xffff;
  uVar6 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar11 = (uint)uVar8 & 0xffff;
  uVar6 = ((uint)uVar8 << 0x10 | uVar11) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4);
  uVar6 = (uVar6 >> 2) +
          (uint)uVar5 * 0x10000 + (int)((ulonglong)uVar5 >> 0x20) + uVar12 +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6;
  local_58 = 0;
  cVar3 = FUN_1402ba92a(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0xc) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1414c06bc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ba92a FUN_1402ba92a body=184 status=ok
// SIG undefined FUN_1402ba92a(void)

void FUN_1402ba92a(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    puVar1 = (undefined8 *)*param_3;
    local_48 = 0;
    uStack_40 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      local_48 = *puVar1;
      uStack_40 = puVar1[2];
    }
    iVar3 = FUN_1447fff98(param_1,param_2,&local_48);
    if (iVar3 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar3 * 0x10) = *param_3;
      FUN_14701a870(param_1,*param_4);
      *param_4 = iVar3;
      uVar2 = 1;
      goto LAB_1402ba994;
    }
  }
  uVar2 = 0;
LAB_1402ba994:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ba9e4 FUN_1402ba9e4 body=715 status=ok
// SIG undefined FUN_1402ba9e4(void)

int * FUN_1402ba9e4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402baba2;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1402baba2:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1402bacd4 FUN_1402bacd4 body=89 status=ok
// SIG undefined FUN_1402bacd4(void)

void FUN_1402bacd4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1402bad2e(param_1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1402baeb8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,local_28);
}



// FUNCTION 1402bad2e FUN_1402bad2e body=392 status=ok
// SIG undefined FUN_1402bad2e(void)

ulonglong * FUN_1402bad2e(longlong param_1,ulonglong *param_2,ulonglong param_3,float *param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_3 >> 0x20;
  if (((((*(byte *)(param_1 + 0x368) & 2) != 0) || (*(int *)(param_1 + 0x304) == 2)) ||
      (*(int *)(param_1 + 0x304) == 4)) ||
     (((*(byte *)(param_1 + 0x369) & 1) != 0 || (*(char *)(param_1 + 0x360) == '\x01'))))
  goto LAB_1402bad6b;
  FUN_14697fe60(param_1,&local_60,0);
  if (*(char *)(param_4 + 1) == '\0') {
    lVar2 = (ulonglong)(*(longlong *)(param_1 + 0x510) != 0) * 0x10;
    fVar4 = (float)FUN_145788320(*(undefined4 *)(lVar2 + 0x370 + param_1),
                                 *(undefined4 *)(lVar2 + 0x374 + param_1));
    *param_4 = fVar4;
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (*(longlong **)(param_1 + 0x510) == (longlong *)0x0) {
LAB_1402bae63:
    local_60 = (local_60 + local_58) * *param_4;
    local_54 = (local_54 + local_5c) * *param_4;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x70))();
    if (cVar1 == '\0') goto LAB_1402bae63;
    local_60 = local_60 + local_58;
    local_54 = local_54 + local_5c;
  }
  local_54 = local_54 + (float)(param_3 >> 0x20);
  if ((*(byte *)(param_1 + 0x368) & 1) != 0) {
    local_54 = local_54 + *param_4 * 34.0;
  }
  param_3 = (ulonglong)(uint)(local_60 + (float)param_3);
  uVar3 = (ulonglong)(uint)local_54;
LAB_1402bad6b:
  *param_2 = param_3 & 0xffffffff | uVar3 << 0x20;
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402baeb8 FUN_1402baeb8 body=440 status=ok
// SIG undefined FUN_1402baeb8(void)

void FUN_1402baeb8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = (float)param_2;
  fVar9 = fVar3;
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    fVar9 = *(float *)(param_1 + 0x4ec);
  }
  if (fVar9 <= fVar3) {
    fVar9 = fVar3;
  }
  fVar3 = fVar9;
  if (*(char *)(param_1 + 0x500) == '\x01') {
    fVar3 = *(float *)(param_1 + 0x4fc);
  }
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = fVar4;
  if (*(char *)(param_1 + 0x4f8) == '\x01') {
    fVar10 = *(float *)(param_1 + 0x4f4);
  }
  if (fVar9 <= fVar3) {
    fVar3 = fVar9;
  }
  if (fVar10 <= fVar4) {
    fVar10 = fVar4;
  }
  fVar9 = fVar10;
  if (*(char *)(param_1 + 0x508) == '\x01') {
    fVar9 = *(float *)(param_1 + 0x504);
  }
  if (fVar10 <= fVar9) {
    fVar9 = fVar10;
  }
  fVar10 = *(float *)(param_1 + 0x394) + -0.0001;
  iVar5 = (int)ROUND(-0.5 - (fVar9 + -0.0001 + fVar9 + -0.0001)) >> 1;
  iVar6 = -iVar5;
  iVar2 = (int)ROUND(-0.5 - (fVar3 + -0.0001 + fVar3 + -0.0001)) >> 1;
  iVar7 = -iVar2;
  if ((iVar5 != (int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1) ||
     (fVar9 = *(float *)(param_1 + 0x390) + -0.0001,
     iVar2 != (int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1)) {
    *(byte *)(param_1 + 0x448) = *(byte *)(param_1 + 0x448) & 0xf8;
    dVar8 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
    *(double *)(param_1 + 0x430) = dVar8 - *(double *)(param_1 + 0x440);
    plVar1 = *(longlong **)(param_1 + 0x510);
    if (plVar1 == (longlong *)0x0) {
      *(float *)(param_1 + 0x378) = (float)iVar7;
      *(float *)(param_1 + 0x37c) = (float)iVar6;
    }
    else {
      (**(code **)(*plVar1 + 8))
                (plVar1,(int)*(float *)(param_1 + 0x380),(int)*(float *)(param_1 + 900),iVar7,iVar6)
      ;
    }
  }
  FUN_1402bb070(param_1,CONCAT44((float)iVar6,(float)iVar7));
  return;
}



// FUNCTION 1402bb070 FUN_1402bb070 body=191 status=ok
// SIG undefined FUN_1402bb070(void)

void FUN_1402bb070(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar2 = (float)param_2;
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  plVar1 = *(longlong **)(param_1 + 0x510);
  if (plVar1 != (longlong *)0x0) {
    local_20 = (double)fVar3;
    local_28 = (double)fVar2;
    (**(code **)(*plVar1 + 0xf0))(plVar1,&local_28);
    fVar2 = (float)local_28;
    fVar3 = (float)local_20;
  }
  if ((*(float *)(param_1 + 0x390) == fVar2) && (!NAN(*(float *)(param_1 + 0x390)) && !NAN(fVar2)))
  {
    if ((*(float *)(param_1 + 0x394) == fVar3) && (!NAN(*(float *)(param_1 + 0x394)) && !NAN(fVar3))
       ) goto LAB_1402bb0ef;
  }
  *(float *)(param_1 + 0x390) = fVar2;
  *(float *)(param_1 + 0x394) = fVar3;
  FUN_14032aaf4(param_1 + 0x268,0);
LAB_1402bb0ef:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402bb130 FUN_1402bb130 body=310 status=ok
// SIG undefined FUN_1402bb130(void)

undefined4 * FUN_1402bb130(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

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
  FUN_1402bb38c(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  local_48[1] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_1402bb268(param_1,uVar3,local_48);
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
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x58))) {
      uVar3 = *(int *)(param_1 + 0x58) - 1U & uVar3;
      local_48[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar6 = param_1 + 0x40;
      }
      if (lVar6 == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x58) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar6 = param_1 + 0x40;
      }
      if (lVar6 == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x58) = iVar5;
      FUN_1402bb5a0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402bb268 FUN_1402bb268 body=154 status=ok
// SIG undefined FUN_1402bb268(void)

void FUN_1402bb268(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[10];
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_1402bb302(param_1,*param_4,1);
          *param_4 = iVar2;
          uVar1 = 1;
          break;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
        uVar1 = 0;
      } while (iVar2 != -1);
      goto LAB_1402bb2dd;
    }
  }
  uVar1 = 0;
LAB_1402bb2dd:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1402bb302 FUN_1402bb302 body=138 status=ok
// SIG undefined FUN_1402bb302(void)

void FUN_1402bb302(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402bb38c FUN_1402bb38c body=437 status=ok
// SIG undefined FUN_1402bb38c(void)

int * FUN_1402bb38c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1402bb542(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar5 = 0x80;
        }
        else {
          uVar2 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar2) {
              uVar8 = uVar2;
            }
          }
          else {
            uVar8 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
          }
          iVar5 = -0x20;
          if (uVar2 <= uVar8) {
            iVar5 = uVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar5;
        FUN_1401f5dc4(plVar9,iVar6);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar5 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1402bb542 FUN_1402bb542 body=93 status=ok
// SIG undefined FUN_1402bb542(void)

void FUN_1402bb542(longlong param_1,int param_2)

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
    FUN_1401fa972();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1402bb5a0 FUN_1402bb5a0 body=605 status=ok
// SIG undefined FUN_1402bb5a0(void)

void FUN_1402bb5a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  if (param_1[10] != 0) {
    FUN_14025f766(param_1 + 10,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 0xb);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    plVar2 = param_1 + 8;
    uVar16 = 0;
    FUN_14025f66e(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar8 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar8 = plVar2;
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[0xb] + 0x7fffffffU & uVar3) * 4)
             = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      uVar10 = 1;
      iVar12 = 0;
      iVar4 = 0;
    }
    else {
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        uVar16 = 0;
        uVar10 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar10 = uVar16;
        }
        iVar4 = 0;
        do {
          if (uVar10 == uVar16) {
            return;
          }
          iVar4 = iVar4 + 0x20;
          uVar5 = puVar9[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar16 = 0;
        iVar4 = 0;
      }
      uVar10 = (ulonglong)(-uVar5 & uVar5);
      uVar14 = uVar10 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar12) {
        iVar12 = iVar13;
      }
    }
    if (iVar12 < iVar13) {
      uVar5 = 0xffffffff;
      do {
        lVar15 = *param_1;
        lVar11 = (longlong)iVar12;
        uVar14 = (longlong)(int)param_1[0xb] - 1U & (longlong)*(int *)(lVar15 + lVar11 * 0xc);
        iVar13 = (int)uVar14;
        *(int *)(lVar15 + 8 + lVar11 * 0xc) = iVar13;
        plVar8 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar8 = plVar2;
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar15 + 4 + lVar11 * 0xc) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[0xb] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar8 = plVar2;
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[0xb] - 1U) * 4) =
             iVar12;
        uVar5 = ~(uint)uVar10 & uVar5;
        puVar9 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 2);
        }
        iVar13 = (int)param_1[5];
        iVar12 = (int)uVar16;
        lVar15 = (longlong)iVar12;
        uVar3 = puVar9[lVar15] & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar6 = iVar13 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar12) {
            iVar7 = iVar12;
          }
          if (iVar6 <= iVar12) {
            return;
          }
          lVar11 = 0;
          while( true ) {
            iVar4 = iVar4 + 0x20;
            uVar3 = puVar9[lVar15 + lVar11 + 1];
            if (uVar3 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar7 - lVar15 == lVar11) {
              return;
            }
          }
          uVar16 = (ulonglong)(iVar12 + (int)lVar11 + 1);
          uVar5 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar12 = (iVar4 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar13);
    }
  }
  return;
}



// FUNCTION 1402bb7fe FUN_1402bb7fe body=125 status=ok
// SIG undefined FUN_1402bb7fe(void)

void FUN_1402bb7fe(longlong param_1)

{
  FUN_1401f5f9d(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1402bb87b(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1402bb8a6(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1402bb8de(param_1);
  return;
}



// FUNCTION 1402bb87b FUN_1402bb87b body=43 status=ok
// SIG undefined FUN_1402bb87b(void)

void FUN_1402bb87b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1402bb8a6 FUN_1402bb8a6 body=55 status=ok
// SIG undefined FUN_1402bb8a6(void)

void FUN_1402bb8a6(longlong *param_1)

{
  FUN_1402bb990(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402bb8de FUN_1402bb8de body=55 status=ok
// SIG undefined FUN_1402bb8de(void)

void FUN_1402bb8de(longlong *param_1)

{
  FUN_1402bb916(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402bb916 FUN_1402bb916 body=121 status=ok
// SIG undefined FUN_1402bb916(void)

void FUN_1402bb916(longlong param_1,int param_2)

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



// FUNCTION 1402bb990 FUN_1402bb990 body=582 status=ok
// SIG undefined FUN_1402bb990(void)

void FUN_1402bb990(longlong *param_1,int param_2)

{
  uint *puVar1;
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
  
  puVar1 = (uint *)(param_1 + 2);
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
      puVar10 = puVar1;
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
        if (uVar16 == uVar15) goto LAB_1402bbb4f;
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
      lVar13 = *param_1;
      plVar5 = *(longlong **)(lVar13 + 0x18 + (longlong)iVar6 * 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      plVar5 = *(longlong **)(lVar13 + (longlong)iVar6 * 0x40 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
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
          if (iVar9 - lVar13 == lVar11) goto LAB_1402bbb4f;
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
LAB_1402bbb4f:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar7 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar7 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar7;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1402bbbd8 FUN_1402bbbd8 body=92 status=ok
// SIG undefined FUN_1402bbbd8(void)

void FUN_1402bbbd8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a355fd0;
  *(undefined ***)(param_1 + 0x278) = &PTR_FUN_14a356230;
  plVar3 = *(longlong **)(param_1 + 0x690);
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
  FUN_1402bbc34(param_1 + 0x10);
  return;
}



// FUNCTION 1402bbc34 FUN_1402bbc34 body=2037 status=ok
// SIG undefined FUN_1402bbc34(void)

void FUN_1402bbc34(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_149ef1020;
  param_1[0x4d] = &PTR_FUN_149ef1280;
  plVar3 = (longlong *)param_1[0xce];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[199];
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
  plVar3 = param_1 + 0xc2;
  if (*(int *)(param_1 + 0xc3) == 0) {
LAB_1402bbca2:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xc3) = 0;
      goto LAB_1402bbca2;
    }
  }
  FUN_1401b439d(param_1[0xc0],*(undefined4 *)(param_1 + 0xc1));
  if (param_1[0xc0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xbf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xbd];
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
  plVar3 = (longlong *)param_1[0xbb];
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
  plVar3 = (longlong *)param_1[0xb9];
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
  plVar3 = param_1 + 0xb6;
  if (*(int *)(param_1 + 0xb7) == 0) {
LAB_1402bbd30:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xb7) = 0;
      goto LAB_1402bbd30;
    }
  }
  plVar3 = param_1 + 0xb4;
  if (*(int *)(param_1 + 0xb5) == 0) {
LAB_1402bbd50:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xb5) = 0;
      goto LAB_1402bbd50;
    }
  }
  FUN_144760e21(param_1[0xb1],*(undefined4 *)(param_1 + 0xb2));
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 0xaf;
  if (*(int *)(param_1 + 0xb0) == 0) {
LAB_1402bbd92:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      goto LAB_1402bbd92;
    }
  }
  FUN_144760e21(param_1[0xac],*(undefined4 *)(param_1 + 0xad));
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 0xaa;
  if (*(int *)(param_1 + 0xab) == 0) {
LAB_1402bbdd4:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xab) = 0;
      goto LAB_1402bbdd4;
    }
  }
  FUN_144760e21(param_1[0xa7],*(undefined4 *)(param_1 + 0xa8));
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 0xa5;
  if (*(int *)(param_1 + 0xa6) == 0) {
LAB_1402bbe16:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xa6) = 0;
      goto LAB_1402bbe16;
    }
  }
  lVar4 = param_1[0xa4];
  if (lVar4 != 0) {
    FUN_1401f5f9d(*(undefined8 *)(lVar4 + 0x98),*(undefined4 *)(lVar4 + 0xa0));
    if (*(longlong *)(lVar4 + 0x98) != 0) {
      FUN_1400020a8();
    }
    FUN_1402bb87b(*(undefined8 *)(lVar4 + 0x88),*(undefined4 *)(lVar4 + 0x90));
    if (*(longlong *)(lVar4 + 0x88) != 0) {
      FUN_1400020a8();
    }
    FUN_1402bb8a6(lVar4 + 0x50);
    *(undefined4 *)(lVar4 + 0x48) = 0;
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1402bb8de(lVar4);
    FUN_1400020a8(lVar4);
  }
  plVar3 = (longlong *)param_1[0xa3];
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
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  if (*(char *)(param_1 + 0x9f) == '\x01') {
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  if (*(char *)(param_1 + 0x9e) == '\x01') {
    *(undefined1 *)(param_1 + 0x9e) = 0;
  }
  plVar3 = (longlong *)param_1[0x9c];
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
  plVar3 = (longlong *)param_1[0x9a];
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
  plVar3 = (longlong *)param_1[0x98];
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
  plVar3 = (longlong *)param_1[0x96];
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
  plVar3 = (longlong *)param_1[0x92];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x90];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x8d];
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
  FUN_1402bc42a(param_1 + 0x7c);
  plVar3 = (longlong *)param_1[0x75];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = param_1 + 0x69;
  if (*(int *)(param_1 + 0x6a) == 0) {
LAB_1402bbf9d:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x6a) = 0;
      goto LAB_1402bbf9d;
    }
  }
  if ((longlong *)param_1[0x66] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x66] + 0x10))();
  }
  plVar3 = param_1 + 100;
  if (*(int *)(param_1 + 0x65) != 0) {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1402bbfdb;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1402bbfdb:
  if ((longlong *)param_1[0x61] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x61] + 0x10))();
  }
  FUN_1402bc654(param_1 + 0x4d);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1402bc42a FUN_1402bc42a body=553 status=ok
// SIG undefined FUN_1402bc42a(void)

void FUN_1402bc42a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(longlong *)(param_1 + 0x10) != 0) &&
        (plVar8 = *(longlong **)(param_1 + 0x18), plVar8 != (longlong *)0x0)) &&
       (0 < (int)plVar8[1])) &&
      ((*(longlong *)(param_1 + 0x20) != 0 && (*(longlong *)(param_1 + 0x28) != 0)))) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 8))) {
    uVar7 = 0;
    iVar6 = (int)plVar8[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1402bc5b4;
      }
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
LAB_1402bc5b4:
    local_30 = *(longlong **)(param_1 + 0x28);
    if (local_30 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      local_38 = 0;
    }
    else {
      iVar6 = (int)local_30[1];
      local_38 = 0;
      do {
        if (iVar6 == 0) {
          local_30 = (longlong *)0x0;
          goto LAB_1402bc5e2;
        }
        LOCK();
        iVar4 = (int)local_30[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(local_30 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      local_38 = *(undefined8 *)(param_1 + 0x20);
    }
LAB_1402bc5e2:
    FUN_14697f106(uVar7,&local_38);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 8))) {
    FUN_1401cb356();
    local_48 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(longlong *)(param_1 + 0x38);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_48);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  plVar8 = *(longlong **)(param_1 + 0x38);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x18);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar8 = *(longlong **)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402bc654 FUN_1402bc654 body=342 status=ok
// SIG undefined FUN_1402bc654(void)

void FUN_1402bc654(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149eceb60;
  FUN_14032abc4(param_1,1);
  if (DAT_14c968098 == 0) {
    lVar1 = param_1[9];
    if (lVar1 != 0) {
      FUN_1402bc8f6(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  else {
    FUN_140457ffc(DAT_14c968098 + 0xd8,param_1);
    (**(code **)(**(longlong **)(DAT_14c968098 + 0x20) + 400))
              (*(longlong **)(DAT_14c968098 + 0x20),param_1[9]);
  }
  FUN_1402bc7aa(&DAT_14c967f20,*(undefined4 *)(param_1 + 0xe));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 800) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  FUN_14076595c(param_1 + 2,param_1[2]);
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1402bc7aa FUN_1402bc7aa body=104 status=ok
// SIG undefined FUN_1402bc7aa(void)

undefined8 FUN_1402bc7aa(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1402bc812(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1402bc812 FUN_1402bc812 body=91 status=ok
// SIG undefined FUN_1402bc812(void)

void FUN_1402bc812(longlong *param_1,int param_2)

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
  FUN_1402bc86e(param_1,param_2,1);
  return;
}



// FUNCTION 1402bc86e FUN_1402bc86e body=136 status=ok
// SIG undefined FUN_1402bc86e(void)

void FUN_1402bc86e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402bc8f6 FUN_1402bc8f6 body=105 status=ok
// SIG undefined FUN_1402bc8f6(void)

void FUN_1402bc8f6(longlong param_1)

{
  FUN_1402bc997(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  FUN_1402bc9e4(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1402bc960(param_1);
  return;
}



// FUNCTION 1402bc960 FUN_1402bc960 body=55 status=ok
// SIG undefined FUN_1402bc960(void)

void FUN_1402bc960(longlong *param_1)

{
  FUN_1402bca32(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402bc997 FUN_1402bc997 body=77 status=ok
// SIG undefined FUN_1402bc997(void)

void FUN_1402bc997(longlong param_1,int param_2)

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



// FUNCTION 1402bc9e4 FUN_1402bc9e4 body=77 status=ok
// SIG undefined FUN_1402bc9e4(void)

void FUN_1402bc9e4(longlong param_1,int param_2)

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



// FUNCTION 1402bca32 FUN_1402bca32 body=123 status=ok
// SIG undefined FUN_1402bca32(void)

void FUN_1402bca32(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140de7f60(param_1,param_2);
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



// FUNCTION 1402bcaae FUN_1402bcaae body=84 status=ok
// SIG undefined FUN_1402bcaae(void)

longlong FUN_1402bcaae(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = (ulonglong)(param_2 >> 0xe);
  if (*(longlong *)(param_1 + 0x40 + uVar3 * 8) == 0) {
    lVar2 = FUN_14001cc68(0x60000,0);
    plVar1 = (longlong *)(param_1 + 0x40 + uVar3 * 8);
    LOCK();
    bVar4 = *plVar1 == 0;
    if (bVar4) {
      *plVar1 = lVar2;
    }
    UNLOCK();
    if (!bVar4) {
      FUN_1400020a8();
    }
  }
  return (ulonglong)((param_2 & 0x3fff) * 0x18) + *(longlong *)(param_1 + 0x40 + uVar3 * 8);
}



// FUNCTION 1402bcb02 FUN_1402bcb02 body=3195 status=ok
// SIG undefined FUN_1402bcb02(void)

ulonglong FUN_1402bcb02(longlong param_1,longlong param_2,longlong param_3,byte *param_4,
                       undefined8 param_5,longlong *param_6,char param_7)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  int *piVar14;
  void *pvVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  undefined4 uVar25;
  void **ppvVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_108 [32];
  undefined4 **local_e8;
  byte *local_e0;
  undefined4 local_d8;
  byte *local_d0;
  undefined4 *local_c8;
  undefined4 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined4 local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar22 = *(int *)(param_3 + 0x38);
  if (param_7 == '\0') {
    local_d8 = 0;
    local_e0._0_1_ = 1;
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x298,param_2,*(undefined4 *)(*(longlong *)(param_3 + 0x48) + 0x18),
                  iVar22);
    local_d8 = 0;
    local_e0._0_1_ = 1;
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x2c8,param_2,*(int *)(*(longlong *)(param_3 + 0x48) + 0x28) << 2,
                  iVar22 * 4);
    uVar25 = 0;
    if ((*(byte *)(param_1 + 300) & 3) != 0) {
      uVar25 = *(undefined4 *)(*(longlong *)(param_3 + 0x48) + 0x38);
    }
    local_d8 = 0;
    local_e0._0_1_ = 1;
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x2f8,param_2,uVar25,iVar22);
    local_d8 = 0;
    local_e0 = (byte *)CONCAT71(local_e0._1_7_,1);
    local_e8 = (undefined4 **)CONCAT44(local_e8._4_4_,0x78);
    FUN_1402bd77e(param_1 + 0x328,param_2,*(int *)(*(longlong *)(param_3 + 0x48) + 0xa0) << 3,
                  iVar22 << 3);
    *(undefined4 *)(param_1 + 0x368) = 0;
    lVar20 = *(longlong *)(param_1 + 0x370);
    if (lVar20 != 0) {
      *(undefined8 *)(param_1 + 0x370) = 0;
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar20 = *(longlong *)(param_1 + 0x378);
    if (lVar20 != 0) {
      *(undefined8 *)(param_1 + 0x378) = 0;
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar20 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar20 + 0xd);
          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
          plVar16[1] = lVar20;
          plVar19 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar16 = (longlong)plVar19;
              LOCK();
              bVar31 = plVar19 != DAT_14ca843c0;
              plVar17 = plVar16;
              if (bVar31) {
                plVar19 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar16 = (longlong)plVar17;
              LOCK();
              bVar31 = plVar17 != DAT_14ca843c8;
              plVar19 = plVar16;
              if (bVar31) {
                plVar17 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
    }
    lVar20 = *(longlong *)(param_1 + 0x380);
    if (lVar20 != 0) {
      *(undefined8 *)(param_1 + 0x380) = 0;
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar20 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar20 + 0xd);
          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
          plVar16[1] = lVar20;
          plVar19 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar16 = (longlong)plVar19;
              LOCK();
              bVar31 = plVar19 != DAT_14ca843c0;
              plVar17 = plVar16;
              if (bVar31) {
                plVar19 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar16 = (longlong)plVar17;
              LOCK();
              bVar31 = plVar17 != DAT_14ca843c8;
              plVar19 = plVar16;
              if (bVar31) {
                plVar17 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x398) = 0;
    lVar20 = *(longlong *)(param_1 + 0x3a0);
    if (lVar20 != 0) {
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar20 = *(longlong *)(param_1 + 0x3a8);
    if (lVar20 != 0) {
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar20 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar20 + 0xd);
          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
          plVar16[1] = lVar20;
          plVar19 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar16 = (longlong)plVar19;
              LOCK();
              bVar31 = plVar19 != DAT_14ca843c0;
              plVar17 = plVar16;
              if (bVar31) {
                plVar19 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar16 = (longlong)plVar17;
              LOCK();
              bVar31 = plVar17 != DAT_14ca843c8;
              plVar19 = plVar16;
              if (bVar31) {
                plVar17 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
    }
    lVar20 = *(longlong *)(param_1 + 0x3b0);
    if (lVar20 != 0) {
      *(undefined8 *)(param_1 + 0x3b0) = 0;
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar20 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar20 + 0xd);
          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
          plVar16[1] = lVar20;
          plVar19 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar16 = (longlong)plVar19;
              LOCK();
              bVar31 = plVar19 != DAT_14ca843c0;
              plVar17 = plVar16;
              if (bVar31) {
                plVar19 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar16 = (longlong)plVar17;
              LOCK();
              bVar31 = plVar17 != DAT_14ca843c8;
              plVar19 = plVar16;
              if (bVar31) {
                plVar17 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    if (*(char *)(param_3 + 0x41) != '\0') {
LAB_1402bd2ec:
      lVar20 = *(longlong *)(param_4 + 0x70);
      if (*(longlong *)(param_4 + 0x70) == 0) {
        lVar20 = DAT_14cb427b0;
      }
      *(longlong *)(*param_6 + 0x68) = lVar20;
      lVar20 = *(longlong *)(param_4 + 0x100);
      if (*(longlong *)(param_4 + 0x100) == 0) {
        lVar20 = DAT_14cb429b0;
      }
      *(longlong *)(*param_6 + 0x70) = lVar20;
      lVar20 = *(longlong *)(param_4 + 0xa0);
      if (*(longlong *)(param_4 + 0xa0) == 0) {
        lVar20 = DAT_14cb428b0;
      }
      *(longlong *)(*param_6 + 0x78) = lVar20;
      *(uint *)(*param_6 + 0x80) = *(uint *)(param_4 + 0x128) >> 2;
      *(uint *)(*param_6 + 0x84) = *(uint *)(param_4 + 0x130) >> 1;
      *(uint *)(*param_6 + 0x88) = *(uint *)(param_4 + 300) >> 2;
      *(undefined4 *)(*param_6 + 0x8c) = *(undefined4 *)(param_1 + 0x3d4);
      goto LAB_1402bcda2;
    }
    piVar14 = (int *)((longlong)&local_50 + 4);
    local_50 = (undefined1 *)((ulonglong)local_50 & 0xffffffff00000000);
    uVar25 = 0;
    iVar22 = 2;
LAB_1402bccbe:
    local_58 = 0;
    *piVar14 = iVar22;
  }
  else {
    iVar7 = *(int *)(param_4 + 0x120);
    iVar23 = *(int *)(param_1 + 0x128);
    if (*(int *)(param_1 + 0x128) < 1) {
      iVar23 = iVar7;
    }
    if ((*(byte *)(param_1 + 300) & 3) == 0) {
      iVar23 = 1;
    }
    iVar29 = iVar23;
    if (iVar7 < iVar23) {
      iVar29 = iVar7;
    }
    if (iVar29 < 2) {
      iVar29 = 1;
    }
    uVar25 = 0;
    local_d8 = 0;
    local_e0 = (byte *)((ulonglong)local_e0._1_7_ << 8);
    local_e8._0_4_ = 0x78;
    local_d0 = param_4;
    FUN_1402bd77e(param_1 + 0x298,param_2,iVar7,iVar22);
    local_d8 = 0;
    local_e0 = (byte *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x2c8,param_2,iVar7 * 4,iVar22 * 4);
    iVar9 = 0;
    if ((*(uint *)(param_1 + 300) & 3) != 0) {
      iVar9 = iVar7;
    }
    local_d8 = 0;
    local_e0 = (byte *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x2f8,param_2,iVar9,iVar22);
    param_4 = local_d0;
    local_d8 = 0;
    local_e0 = (byte *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x328,param_2,iVar29 << 3,iVar23 << 3);
    local_d8 = 0;
    local_e0 = (byte *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_e8._0_4_ = 0x78;
    FUN_1402bd77e(param_1 + 0x358,param_2,iVar7,iVar22);
    local_e0 = (byte *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_d8 = 0x80;
    local_e8 = (undefined4 **)CONCAT44(local_e8._4_4_,0x7c);
    bVar13 = FUN_1402bd77e(param_1 + 0x388,param_2,0xf,0xf);
    *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) | bVar13;
    if (*(char *)(param_3 + 0x41) == '\x01') goto LAB_1402bd2ec;
    local_58 = 0;
    local_50 = (undefined1 *)0x200000000;
    if ((*(byte *)(param_1 + 300) & 3) != 0) {
      local_60 = *(undefined4 *)(param_1 + 0x3d4);
      local_50 = (undefined1 *)0x200000001;
      *(undefined4 *)(*param_6 + 0x8c) = 0;
      uVar25 = 1;
      if ((*(byte *)(param_1 + 300) & 1) != 0) {
        piVar14 = &local_5c;
        local_50 = &DAT_200000002;
        iVar22 = *(int *)(param_1 + 0x3d4) + 1;
        uVar25 = 2;
        goto LAB_1402bccbe;
      }
    }
  }
  local_c8 = &local_60;
  local_e8 = &local_c8;
  local_e0 = param_4;
  local_c0 = uVar25;
  FUN_1448714fe(&local_b8);
  ppvVar26 = &local_b8;
  puVar21 = (undefined8 *)(*param_6 + 0x10);
  for (lVar20 = 0xb; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar21 = *ppvVar26;
    ppvVar26 = ppvVar26 + 1;
    puVar21 = puVar21 + 1;
  }
  lVar20 = *param_6;
  puVar21 = &DAT_14cb427b0;
  if (*(longlong *)(lVar20 + 0x10) != 0) {
    puVar21 = (undefined8 *)(lVar20 + 0x20);
  }
  *(undefined8 *)(lVar20 + 0x68) = *puVar21;
  lVar20 = *param_6;
  puVar21 = &DAT_14cb429b0;
  if (*(longlong *)(lVar20 + 0x28) != 0) {
    puVar21 = (undefined8 *)(lVar20 + 0x38);
  }
  *(undefined8 *)(lVar20 + 0x70) = *puVar21;
  lVar20 = *param_6;
  puVar21 = &DAT_14cb428b0;
  if (*(longlong *)(lVar20 + 0x40) != 0) {
    puVar21 = (undefined8 *)(lVar20 + 0x50);
  }
  *(undefined8 *)(lVar20 + 0x78) = *puVar21;
  *(uint *)(*param_6 + 0x80) = *(uint *)(*param_6 + 0x58) >> 2;
  *(uint *)(*param_6 + 0x84) = *(uint *)(*param_6 + 0x5c) >> 1;
  *(uint *)(*param_6 + 0x88) = *(uint *)(*param_6 + 0x60) >> 2;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1402bcda2:
  uVar18 = *(ulonglong *)(param_3 + 0x48);
  if ((uVar18 != 0) && (0 < *(int *)(uVar18 + 8))) {
    pbVar2 = (byte *)(param_1 + 0x290);
    LOCK();
    bVar31 = *(char *)(param_1 + 0x290) == '\0';
    if (bVar31) {
      *(char *)(param_1 + 0x290) = '\x01';
    }
    UNLOCK();
    if (!bVar31) {
      FUN_1447d2058(pbVar2);
    }
    lVar20 = *(longlong *)(param_3 + 0x48);
    iVar22 = *(int *)(lVar20 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x2b0);
    cVar6 = *(char *)(param_2 + 0x69);
    if (cVar6 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_e8 = (undefined4 **)CONCAT44(local_e8._4_4_,iVar22 << 2);
    local_e0 = (byte *)CONCAT44(local_e0._4_4_,1);
    pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar8,0);
    if (cVar6 == '\0') {
      FUN_14002049c(param_2,0);
    }
    memcpy(pvVar15,*(void **)(lVar20 + 0x10),(longlong)*(int *)(lVar20 + 0x18) << 2);
    uVar8 = *(undefined8 *)(param_1 + 0x2b0);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
    }
    iVar22 = *(int *)(lVar20 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x2e0);
    cVar6 = *(char *)(param_2 + 0x69);
    if (cVar6 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_e8 = (undefined4 **)CONCAT44(local_e8._4_4_,iVar22 << 4);
    local_e0 = (byte *)CONCAT44(local_e0._4_4_,1);
    pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar8,0);
    if (cVar6 == '\0') {
      FUN_14002049c(param_2,0);
    }
    memcpy(pvVar15,*(void **)(lVar20 + 0x20),(longlong)*(int *)(lVar20 + 0x28) << 4);
    uVar8 = *(undefined8 *)(param_1 + 0x2e0);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
    }
    if ((*(byte *)(param_1 + 300) & 3) != 0) {
      iVar22 = *(int *)(lVar20 + 0x38);
      uVar8 = *(undefined8 *)(param_1 + 0x310);
      cVar6 = *(char *)(param_2 + 0x69);
      if (cVar6 == '\0') {
        FUN_14002049c(param_2,1);
      }
      local_e8 = (undefined4 **)CONCAT44(local_e8._4_4_,iVar22 << 2);
      local_e0 = (byte *)CONCAT44(local_e0._4_4_,1);
      pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar8,0);
      if (cVar6 == '\0') {
        FUN_14002049c(param_2,0);
      }
      memcpy(pvVar15,*(void **)(lVar20 + 0x30),(longlong)*(int *)(lVar20 + 0x38) << 2);
      uVar8 = *(undefined8 *)(param_1 + 0x310);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
      }
    }
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    iVar22 = *(int *)(lVar20 + 0xa0);
    local_d0 = pbVar2;
    if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar22 * 8);
    }
    if ((iVar22 != 0) && (FUN_14480809c(&local_b8), 0 < *(int *)(lVar20 + 0xa0))) {
      lVar30 = 0x38;
      lVar24 = 0;
      do {
        uVar18 = uStack_b0;
        lVar27 = *(longlong *)(lVar20 + 0x98);
        if (*(longlong *)(lVar20 + 0x98) == 0) {
          lVar27 = lVar20 + 0x40;
        }
        iVar22 = (int)uStack_b0;
        lVar28 = (longlong)(int)uStack_b0;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 8);
        if ((uint)(uStack_b0._4_4_ - iVar22) < 8) {
          FUN_1447808da(&local_b8,uVar18 & 0xffffffff);
        }
        puVar3 = (undefined4 *)(lVar27 + lVar30);
        uVar25 = *puVar3;
        uVar10 = puVar3[1];
        uVar11 = puVar3[2];
        uVar12 = puVar3[3];
        puVar21 = (undefined8 *)(lVar27 + 0x10 + lVar30);
        uVar8 = puVar21[1];
        puVar4 = (undefined8 *)((longlong)local_b8 + lVar28 * 4 + 0x10);
        *puVar4 = *puVar21;
        puVar4[1] = uVar8;
        puVar3 = (undefined4 *)((longlong)local_b8 + lVar28 * 4);
        *puVar3 = uVar25;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = uVar12;
        lVar24 = lVar24 + 1;
        lVar30 = lVar30 + 0x58;
      } while (lVar24 < *(int *)(lVar20 + 0xa0));
    }
    iVar22 = (int)uStack_b0 << 2;
    uVar8 = *(undefined8 *)(param_1 + 0x340);
    cVar6 = *(char *)(param_2 + 0x69);
    if (cVar6 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_e8 = (undefined4 **)CONCAT44(local_e8._4_4_,iVar22);
    local_e0 = (byte *)CONCAT44(local_e0._4_4_,1);
    pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar8,0);
    pbVar2 = local_d0;
    if (cVar6 == '\0') {
      FUN_14002049c(param_2,0);
    }
    memcpy(pvVar15,local_b8,(longlong)(int)uStack_b0 << 2);
    uVar8 = *(undefined8 *)(param_1 + 0x340);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar18 = 1;
    LOCK();
    bVar13 = *pbVar2;
    if (bVar13 == 1) {
      *pbVar2 = 0;
    }
    else {
      uVar18 = (ulonglong)bVar13;
    }
    UNLOCK();
    if (bVar13 != 1) {
      uVar18 = FUN_14008cdb0(pbVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 1402bd77e FUN_1402bd77e body=2073 status=ok
// SIG undefined FUN_1402bd77e(void)

ulonglong FUN_1402bd77e(undefined8 *param_1,longlong param_2,uint param_3,uint param_4,
                       undefined4 param_5,byte param_6,uint param_7)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    lVar10 = param_1[3];
    if (lVar10 != 0) {
      param_1[3] = 0;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = param_1[4];
    if (lVar10 != 0) {
      param_1[4] = 0;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = param_1[5];
    if (lVar10 != 0) {
      param_1[5] = 0;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          if ((bVar2 & 2) == 0) {
            uVar9 = 0;
            plVar6 = DAT_14ca843c0;
            do {
              *plVar7 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar7;
              if (bVar11) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar11);
          }
          else {
            uVar9 = 0;
            plVar6 = DAT_14ca843c8;
            do {
              *plVar7 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar5 = plVar7;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar11);
          }
          goto LAB_1402bdd20;
        }
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 2) / *(uint *)((longlong)param_1 + 0xc);
    if ((uVar3 < param_3 || (param_1[4] == 0) != (bool)param_6) ||
       (fVar12 = (float)param_3 * 1.2, (uint)-((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1) < uVar3))
    {
      fVar12 = (float)param_3 * 1.1;
      uVar3 = (int)ROUND(fVar12 + fVar12 + 0.5) >> 1;
      if (param_4 < uVar3) {
        uVar3 = param_4;
      }
      local_58 = *param_1;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 1;
      local_74 = 0;
      uStack_6c = 0;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_5c = 0;
      param_7 = (uint)(param_6 ^ 1) + (uint)(param_6 ^ 1) * 4 + 4 | param_7;
      uVar3 = uVar3 * *(uint *)((longlong)param_1 + 0xc);
      local_50 = 0;
      uStack_48 = 0;
      *(uint *)(param_1 + 2) = uVar3;
      local_98 = (ulonglong)uVar3;
      uStack_90 = CONCAT44(uStack_90._4_4_,param_7) | 0x4100;
      if (uVar3 == 0) {
        FUN_14570b4be(param_2,&local_88,param_7 | 0x4100,0);
      }
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        local_b0 = &local_88;
        local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,param_5);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
        *(undefined4 *)(local_a0 + 0x18) = param_5;
        FUN_14002049c(param_2,0);
      }
      else {
        local_b0 = &local_88;
        local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,param_5);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
        *(undefined4 *)(local_a0 + 0x18) = param_5;
      }
      lVar10 = local_a0;
      plVar7 = param_1 + 3;
      if (plVar7 == &local_a0) {
LAB_1402bda05:
        lVar10 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_a0 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_a0 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(local_a0 + 0xd);
              plVar4 = (longlong *)FUN_14001cc68(0x10,8);
              plVar4[1] = lVar10;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar4 = (longlong)plVar6;
                  LOCK();
                  bVar11 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar4;
                  if (bVar11) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar4 = (longlong)plVar5;
                  LOCK();
                  bVar11 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar4;
                  if (bVar11) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
        }
        lVar10 = *plVar7;
      }
      else {
        lVar8 = *plVar7;
        *plVar7 = local_a0;
        local_a0 = 0;
        if (lVar8 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar8 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar8 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar8 + 0xd);
              plVar4 = (longlong *)FUN_14001cc68(0x10,8);
              plVar4[1] = lVar8;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar4 = (longlong)plVar6;
                  LOCK();
                  bVar11 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar4;
                  if (bVar11) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar4 = (longlong)plVar5;
                  LOCK();
                  bVar11 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar4;
                  if (bVar11) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
          goto LAB_1402bda05;
        }
      }
      lVar8 = param_2;
      if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
        local_b8 = &local_98;
        uStack_90 = 0;
        local_98._0_2_ = (ushort)*(byte *)(param_1 + 1) << 8;
        local_98 = (ulonglong)CONCAT12(1,(short)local_98);
        (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
      }
      else {
        local_b8 = &local_98;
        uStack_90 = 0;
        local_98 = 0x40000;
        (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
      }
      plVar7 = param_1 + 5;
      if (plVar7 == &local_a0) {
LAB_1402bdb57:
        lVar10 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_a0 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_a0 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(local_a0 + 0xd);
              plVar5 = (longlong *)FUN_14001cc68(0x10,8);
              plVar5[1] = lVar10;
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar5 = (longlong)plVar7;
                  LOCK();
                  bVar11 = plVar7 != DAT_14ca843c0;
                  plVar6 = plVar5;
                  if (bVar11) {
                    plVar7 = DAT_14ca843c0;
                    plVar6 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar6;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar5 = (longlong)plVar6;
                  LOCK();
                  bVar11 = plVar6 != DAT_14ca843c8;
                  plVar7 = plVar5;
                  if (bVar11) {
                    plVar6 = DAT_14ca843c8;
                    plVar7 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar7;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
        }
      }
      else {
        lVar10 = *plVar7;
        *plVar7 = local_a0;
        local_a0 = 0;
        if (lVar10 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar10 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar10 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar10 + 0xd);
              plVar5 = (longlong *)FUN_14001cc68(0x10,8);
              plVar5[1] = lVar10;
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar5 = (longlong)plVar7;
                  LOCK();
                  bVar11 = plVar7 != DAT_14ca843c0;
                  plVar6 = plVar5;
                  if (bVar11) {
                    plVar7 = DAT_14ca843c0;
                    plVar6 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar6;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar5 = (longlong)plVar6;
                  LOCK();
                  bVar11 = plVar6 != DAT_14ca843c8;
                  plVar7 = plVar5;
                  if (bVar11) {
                    plVar6 = DAT_14ca843c8;
                    plVar7 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar7;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
          goto LAB_1402bdb57;
        }
      }
      plVar7 = param_1 + 4;
      if (param_6 == 0) {
        if ((param_1[3] == 0) || ((*(byte *)(param_1[3] + 0x28) & 0x10) == 0)) {
          local_b8 = &local_98;
          uStack_90 = 0;
          local_98._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 1),1);
          local_98 = (ulonglong)CONCAT12(1,(short)local_98);
          (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
        }
        else {
          local_b8 = &local_98;
          uStack_90 = 0;
          local_98 = 0x40001;
          (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
        }
      }
      else {
        local_a0 = 0;
        param_2 = lVar8;
      }
      if (plVar7 == &local_a0) {
LAB_1402bdcbd:
        lVar10 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_a0 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_a0 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(local_a0 + 0xd);
              plVar5 = (longlong *)FUN_14001cc68(0x10,8);
              plVar5[1] = lVar10;
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar5 = (longlong)plVar7;
                  LOCK();
                  bVar11 = plVar7 != DAT_14ca843c0;
                  plVar6 = plVar5;
                  if (bVar11) {
                    plVar7 = DAT_14ca843c0;
                    plVar6 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar6;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar5 = (longlong)plVar6;
                  LOCK();
                  bVar11 = plVar6 != DAT_14ca843c8;
                  plVar7 = plVar5;
                  if (bVar11) {
                    plVar6 = DAT_14ca843c8;
                    plVar7 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar7;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
        }
      }
      else {
        lVar10 = *plVar7;
        *plVar7 = local_a0;
        local_a0 = 0;
        if (lVar10 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar10 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar10 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar10 + 0xd);
              plVar5 = (longlong *)FUN_14001cc68(0x10,8);
              plVar5[1] = lVar10;
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar5 = (longlong)plVar7;
                  LOCK();
                  bVar11 = plVar7 != DAT_14ca843c0;
                  plVar6 = plVar5;
                  if (bVar11) {
                    plVar7 = DAT_14ca843c0;
                    plVar6 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar6;
                  UNLOCK();
                } while (bVar11);
              }
              else {
                do {
                  *plVar5 = (longlong)plVar6;
                  LOCK();
                  bVar11 = plVar6 != DAT_14ca843c8;
                  plVar7 = plVar5;
                  if (bVar11) {
                    plVar6 = DAT_14ca843c8;
                    plVar7 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar7;
                  UNLOCK();
                } while (bVar11);
              }
            }
          }
          goto LAB_1402bdcbd;
        }
      }
      uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_1402bdd20;
    }
  }
  uVar9 = 0;
LAB_1402bdd20:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1402bdf98 FUN_1402bdf98 body=72 status=ok
// SIG undefined FUN_1402bdf98(void)

void FUN_1402bdf98(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x678) != '\x02') {
    FUN_1449496c6(param_1 + 0x350,param_2);
    *(undefined1 *)(param_1 + 0x680) = *(undefined1 *)(param_2 + 0x330);
    return;
  }
  FUN_1402beb02(param_1,param_2);
  return;
}



// FUNCTION 1402bdfe0 FUN_1402bdfe0 body=157 status=ok
// SIG undefined FUN_1402bdfe0(void)

undefined8 FUN_1402bdfe0(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  if ((*(char *)(param_2 + 0x65) == '\x03') && (*(char *)((longlong)param_2 + 0xf9) == '\0')) {
    dVar1 = *(double *)(param_1 + 0x590);
    dVar2 = *(double *)(param_1 + 0x598) - (double)*(float *)(param_1 + 0x5d4);
    if ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x588) - *param_2)) ||
       ((9.999999747378752e-05 < ABS(dVar1 - param_2[1]) ||
        (9.999999747378752e-05 < ABS(dVar2 - param_2[2]))))) {
      *param_2 = *(double *)(param_1 + 0x588);
      param_2[1] = dVar1;
      param_2[2] = dVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1402be07e FUN_1402be07e body=164 status=ok
// SIG undefined FUN_1402be07e(void)

bool FUN_1402be07e(uint *param_1,uint *param_2)

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



// FUNCTION 1402be122 FUN_1402be122 body=118 status=ok
// SIG undefined FUN_1402be122(void)

void FUN_1402be122(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + 0x3a0);
  if (*(char *)(param_1 + 0x3d8) == '\x01') {
    if ((puVar1 == param_2) ||
       (((*(byte *)((longlong)param_2 + 0x34) | *(byte *)(param_1 + 0x3d4)) & 1) == 0))
    goto LAB_1402be15c;
  }
  else if (puVar1 == param_2) goto LAB_1402be15c;
  *(undefined8 *)(param_1 + 0x3d0) = param_2[6];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  *(undefined8 *)(param_1 + 0x3c0) = param_2[4];
  *(undefined8 *)(param_1 + 0x3c8) = uVar6;
  *(undefined8 *)(param_1 + 0x3b0) = uVar4;
  *(undefined8 *)(param_1 + 0x3b8) = uVar5;
  *puVar1 = uVar2;
  *(undefined8 *)(param_1 + 0x3a8) = uVar3;
  *(undefined1 *)(param_1 + 0x3d8) = 1;
LAB_1402be15c:
  if (*(longlong *)(param_1 + 0xcc0) == 0) {
    *(undefined8 *)(param_1 + 0xcc0) = DAT_14c872be0;
  }
  *(undefined1 *)(param_1 + 0xcd0) = *(undefined1 *)((longlong)param_2 + 0x34);
  return;
}



// FUNCTION 1402be198 FUN_1402be198 body=1305 status=ok
// SIG undefined FUN_1402be198(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1402be198(double *param_1,double *param_2)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  if (*(char *)(param_1 + 0x65) == *(char *)(param_2 + 0x65)) {
    switch(*(char *)(param_1 + 0x65)) {
    case '\0':
      if (((ABS(*param_1 - *param_2) <= 0.01) && (ABS(param_1[1] - param_2[1]) <= 0.01)) &&
         (ABS(param_1[2] - param_2[2]) <= 0.01)) {
        return ABS(*(float *)(param_1 + 3) - *(float *)(param_2 + 3)) <= 0.01;
      }
      break;
    case '\x01':
      uVar7 = FUN_1402f8346(param_1,param_2);
      return (bool)uVar7;
    case '\x02':
      if (((*param_1 == *param_2) && (param_1[0xe] == param_2[0xe])) &&
         (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
        if (param_1[0xe] == 0.0) {
          dVar2 = (double)DAT_1499387d0;
          dVar3 = DAT_1499387d0._8_8_;
          auVar22._8_8_ = param_1[3] - param_2[3];
          auVar22._0_8_ = param_1[2] - param_2[2];
          auVar23 = divpd(auVar22,_DAT_1499387d0);
          auVar10._0_8_ = (param_1[4] - param_2[4]) / 360.0;
          auVar10._8_8_ = 0;
          auVar24 = roundpd(auVar23,auVar23,3);
          auVar23 = roundpd(auVar10,auVar10,3);
          auVar34._0_8_ = (param_1[4] - param_2[4]) - auVar23._0_8_ * dVar2;
          auVar34._8_8_ = 0.0 - auVar23._8_8_ * dVar3;
          dVar32 = (param_1[2] - param_2[2]) - auVar24._0_8_ * dVar2;
          dVar33 = (param_1[3] - param_2[3]) - auVar24._8_8_ * dVar3;
          auVar30._0_8_ = dVar32 + dVar2;
          auVar30._8_8_ = dVar33 + dVar3;
          auVar28._0_8_ = dVar2 + auVar34._0_8_;
          auVar28._8_8_ = dVar3 + auVar34._8_8_;
          auVar11._8_8_ = -(ulonglong)(0.0 <= dVar33);
          auVar11._0_8_ = -(ulonglong)(0.0 <= dVar32);
          auVar23._8_8_ = dVar33;
          auVar23._0_8_ = dVar32;
          auVar24 = blendvpd(auVar30,auVar23,auVar11);
          auVar12._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
          auVar12._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
          auVar23 = blendvpd(auVar28,auVar34,auVar12);
          auVar35._0_8_ = auVar24._0_8_ + -360.0;
          auVar35._8_8_ = auVar24._8_8_ + -360.0;
          auVar13._8_8_ = -(ulonglong)(180.0 < auVar24._8_8_);
          auVar13._0_8_ = -(ulonglong)(180.0 < auVar24._0_8_);
          auVar10 = blendvpd(auVar24,auVar35,auVar13);
          auVar14._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
          auVar14._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
          auVar24._8_8_ = auVar23._8_8_ + -360.0;
          auVar24._0_8_ = auVar23._0_8_ + -360.0;
          auVar23 = blendvpd(auVar23,auVar24,auVar14);
          auVar25._8_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar10._8_8_));
          auVar25._0_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar10._0_8_));
          iVar8 = movmskpd(0,auVar25);
          auVar15._8_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar23._8_8_));
          auVar15._0_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar23._0_8_));
          uVar9 = movmskpd(*(int *)(param_1 + 0x10),auVar15);
          if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
            return false;
          }
          if (1.0 <= ABS(param_1[5] - param_2[5])) {
            return false;
          }
          if (1.0 <= ABS(param_1[6] - param_2[6])) {
            return false;
          }
          if (1.0 <= ABS(param_1[7] - param_2[7])) {
            return false;
          }
        }
        else {
          cVar6 = FUN_143830496(param_1 + 8,param_2 + 8);
          if (cVar6 == '\0') {
            return false;
          }
        }
        if ((param_1[0x1d] == param_2[0x1d]) &&
           (*(int *)(param_1 + 0x1f) == *(int *)(param_2 + 0x1f))) {
          if (param_1[0x1d] != 0.0) {
            uVar7 = FUN_143830496(param_1 + 0x17,param_2 + 0x17);
            return (bool)uVar7;
          }
          dVar2 = (double)DAT_1499387d0;
          dVar3 = DAT_1499387d0._8_8_;
          auVar26._8_8_ = param_1[0x12] - param_2[0x12];
          auVar26._0_8_ = param_1[0x11] - param_2[0x11];
          auVar23 = divpd(auVar26,_DAT_1499387d0);
          auVar16._0_8_ = (param_1[0x13] - param_2[0x13]) / 360.0;
          auVar16._8_8_ = 0;
          auVar24 = roundpd(auVar23,auVar23,3);
          auVar23 = roundpd(auVar16,auVar16,3);
          auVar36._0_8_ = (param_1[0x13] - param_2[0x13]) - auVar23._0_8_ * dVar2;
          auVar36._8_8_ = 0.0 - auVar23._8_8_ * dVar3;
          dVar32 = (param_1[0x11] - param_2[0x11]) - auVar24._0_8_ * dVar2;
          dVar33 = (param_1[0x12] - param_2[0x12]) - auVar24._8_8_ * dVar3;
          auVar31._0_8_ = dVar32 + dVar2;
          auVar31._8_8_ = dVar33 + dVar3;
          auVar29._0_8_ = dVar2 + auVar36._0_8_;
          auVar29._8_8_ = dVar3 + auVar36._8_8_;
          auVar17._8_8_ = -(ulonglong)(0.0 <= dVar33);
          auVar17._0_8_ = -(ulonglong)(0.0 <= dVar32);
          auVar4._8_8_ = dVar33;
          auVar4._0_8_ = dVar32;
          auVar24 = blendvpd(auVar31,auVar4,auVar17);
          auVar18._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
          auVar18._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
          auVar23 = blendvpd(auVar29,auVar36,auVar18);
          auVar37._0_8_ = auVar24._0_8_ + -360.0;
          auVar37._8_8_ = auVar24._8_8_ + -360.0;
          auVar19._8_8_ = -(ulonglong)(180.0 < auVar24._8_8_);
          auVar19._0_8_ = -(ulonglong)(180.0 < auVar24._0_8_);
          auVar24 = blendvpd(auVar24,auVar37,auVar19);
          auVar20._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
          auVar20._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
          auVar5._8_8_ = auVar23._8_8_ + -360.0;
          auVar5._0_8_ = auVar23._0_8_ + -360.0;
          auVar23 = blendvpd(auVar23,auVar5,auVar20);
          auVar27._8_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar24._8_8_));
          auVar27._0_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar24._0_8_));
          iVar8 = movmskpd(0,auVar27);
          auVar21._8_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar23._8_8_));
          auVar21._0_8_ = -(ulonglong)(0.10000000149011612 < ABS(auVar23._0_8_));
          uVar9 = movmskpd(*(int *)(param_1 + 0x1f),auVar21);
          if ((((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) &&
              (ABS(param_1[0x14] - param_2[0x14]) < 1.0)) &&
             (ABS(param_1[0x15] - param_2[0x15]) < 1.0)) {
            return ABS(param_1[0x16] - param_2[0x16]) < 1.0;
          }
        }
      }
      break;
    case '\x03':
      cVar6 = FUN_1402be7c0(param_1,param_2);
      if (cVar6 != '\0') {
        bVar1 = *(byte *)(param_1 + 0x56);
        if ((bVar1 == *(byte *)(param_2 + 0x56) & bVar1) == 1) {
          cVar6 = FUN_1402be7c0(param_1 + 0x2b,param_2 + 0x2b);
          if (cVar6 == '\0') {
            return false;
          }
        }
        else if (bVar1 != *(byte *)(param_2 + 0x56)) {
          return false;
        }
        cVar6 = FUN_1402be6b1(param_1 + 0x57,param_2 + 0x57);
        if (cVar6 != '\0') {
          if (*(char *)(param_1 + 100) != *(char *)(param_2 + 100)) {
            return false;
          }
          if (*(char *)(param_1 + 100) != '\0') {
            dVar2 = param_2[0x62];
            if ((dVar2 != 0.0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(dVar2);
            }
            return *(float *)(param_1 + 99) == *(float *)(param_2 + 99) && param_1[0x62] == dVar2;
          }
          return true;
        }
      }
      break;
    case '\x04':
    case '\x05':
      return true;
    default:
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return false;
}



// FUNCTION 1402be6b1 FUN_1402be6b1 body=270 status=ok
// SIG undefined FUN_1402be6b1(void)

bool FUN_1402be6b1(double *param_1,double *param_2)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & bVar1 == *(byte *)(param_2 + 10)) != 1) {
    return bVar1 == *(byte *)(param_2 + 10);
  }
  if ((param_1[6] == param_2[6]) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    if (param_1[6] == 0.0) {
      if (1.0 <= ABS(*param_1 - *param_2)) {
        return false;
      }
      dVar3 = param_1[1] - param_2[1];
      lVar2 = 0x10;
    }
    else {
      if (1.0 <= ABS(param_1[3] - param_2[3])) {
        return false;
      }
      dVar3 = param_1[4] - param_2[4];
      lVar2 = 0x28;
    }
    if (((ABS(dVar3) < 1.0) &&
        (ABS(*(double *)((longlong)param_1 + lVar2) - *(double *)((longlong)param_2 + lVar2)) < 1.0)
        ) && (ABS(*(float *)(param_1 + 9) - *(float *)(param_2 + 9)) <= 1.0)) {
      return ABS(*(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_2 + 0x4c)) <= 1.0
      ;
    }
  }
  return false;
}



// FUNCTION 1402be7c0 FUN_1402be7c0 body=588 status=ok
// SIG undefined FUN_1402be7c0(void)

undefined8 FUN_1402be7c0(double *param_1,double *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (*(char *)((longlong)param_1 + 0xf9) == '\x01') {
    if (((((*(char *)((longlong)param_2 + 0xf9) != '\0') &&
          (*(int *)(param_1 + 0x1e) == *(int *)(param_2 + 0x1e))) &&
         (ABS(*param_1 - *param_2) < 1.0)) &&
        ((ABS(param_1[1] - param_2[1]) < 1.0 && (ABS(param_1[2] - param_2[2]) < 1.0)))) &&
       ((((ABS(param_1[3] - param_2[3]) < 1.0 &&
          ((ABS(param_1[4] - param_2[4]) < 1.0 && (ABS(param_1[5] - param_2[5]) < 1.0)))) &&
         (ABS(param_1[6] - param_2[6]) < 1.0)) &&
        ((((ABS(param_1[7] - param_2[7]) < 1.0 && (ABS(param_1[8] - param_2[8]) < 1.0)) &&
          (ABS(param_1[9] - param_2[9]) < 1.0)) &&
         ((ABS(param_1[10] - param_2[10]) < 1.0 && (ABS(param_1[0xb] - param_2[0xb]) < 1.0)))))))) {
      if ((param_1[0xc] == param_2[0xc]) && (!NAN(param_1[0xc]) && !NAN(param_2[0xc]))) {
        if ((param_1[0xd] == param_2[0xd]) && (!NAN(param_1[0xd]) && !NAN(param_2[0xd]))) {
          if ((param_1[0xe] == param_2[0xe]) &&
             ((!NAN(param_1[0xe]) && !NAN(param_2[0xe]) &&
              (uVar1 = FUN_1402f83ea(param_1 + 0xf,param_2 + 0xf), (char)uVar1 != '\0')))) {
            uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(char *)((longlong)param_1 + 0xfa));
            bVar3 = *(char *)((longlong)param_1 + 0xfa) == *(char *)((longlong)param_2 + 0xfa);
LAB_1402be9c2:
            return CONCAT71((int7)(uVar2 >> 8),bVar3);
          }
        }
      }
    }
  }
  else if (*(char *)((longlong)param_2 + 0xf9) == '\0') {
    if ((param_1[3] == param_2[3]) && (!NAN(param_1[3]) && !NAN(param_2[3]))) {
      if ((param_1[4] == param_2[4]) && (!NAN(param_1[4]) && !NAN(param_2[4]))) {
        if ((param_1[5] == param_2[5]) && (!NAN(param_1[5]) && !NAN(param_2[5]))) {
          uVar2 = (ulonglong)*(uint *)(param_1 + 0x1a);
          bVar3 = *(uint *)(param_1 + 0x1a) == *(uint *)(param_2 + 0x1a);
          goto LAB_1402be9c2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1402bea0c FUN_1402bea0c body=90 status=ok
// SIG undefined FUN_1402bea0c(void)

longlong FUN_1402bea0c(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x340) == '\x01') {
    FUN_1449493b2(param_1);
  }
  *(undefined1 *)(param_1 + 0x328) = 0xff;
  FUN_1449496c6(param_1,param_2);
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x340) = 1;
  return param_1;
}



// FUNCTION 1402bea66 FUN_1402bea66 body=156 status=ok
// SIG undefined FUN_1402bea66(void)

void FUN_1402bea66(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xcc8);
  if ((undefined4 *)(lVar2 + 0x1c98) != param_2) {
    if (*(char *)(lVar2 + 0x1ce0) == '\x01') {
      if (*(char *)(lVar2 + 0x1cd8) == '\x01') {
        *(undefined1 *)(lVar2 + 0x1cd8) = 0;
      }
      if (*(char *)(lVar2 + 0x1cb8) == '\x01') {
        *(undefined1 *)(lVar2 + 0x1cb8) = 0;
      }
    }
    *(undefined4 *)(lVar2 + 0x1c98) = *param_2;
    cVar1 = *(char *)(param_2 + 8);
    *(char *)(lVar2 + 0x1cb8) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined8 *)(lVar2 + 0x1cb0) = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(lVar2 + 0x1ca0) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(lVar2 + 0x1ca8) = uVar3;
    }
    cVar1 = *(char *)(param_2 + 0x10);
    *(char *)(lVar2 + 0x1cd8) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined8 *)(lVar2 + 0x1cd0) = *(undefined8 *)(param_2 + 0xe);
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(lVar2 + 0x1cc0) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(lVar2 + 0x1cc8) = uVar3;
    }
    *(undefined1 *)(lVar2 + 0x1ce0) = 1;
  }
  return;
}



// FUNCTION 1402beb02 FUN_1402beb02 body=81 status=ok
// SIG undefined FUN_1402beb02(void)

longlong FUN_1402beb02(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x338) == '\x01') {
      FUN_1449493b2(param_1);
    }
    *(undefined1 *)(param_1 + 0x328) = 0xff;
    FUN_1449496c6(param_1,param_2);
    *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
    *(undefined1 *)(param_1 + 0x338) = 1;
  }
  return param_1;
}



// FUNCTION 1402beb54 FUN_1402beb54 body=243 status=ok
// SIG undefined FUN_1402beb54(void)

void FUN_1402beb54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9b8bb0;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x199) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x199) = 0;
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
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1402bec48 FUN_1402bec48 body=19 status=ok
// SIG undefined FUN_1402bec48(void)

undefined1 FUN_1402bec48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1402bec5c(param_3);
  return 1;
}



// FUNCTION 1402bec5c FUN_1402bec5c body=130 status=ok
// SIG undefined FUN_1402bec5c(void)

void FUN_1402bec5c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1402bee1c(param_2,param_1 + 8);
  FUN_1402becde(param_2,param_1 + 0x18);
  puVar2 = (undefined4 *)(param_1 + 0x28);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402becca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 1402becde FUN_1402becde body=316 status=ok
// SIG undefined FUN_1402becde(void)

longlong * FUN_1402becde(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_141067c74(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar4 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147cd6866(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar4 = (uint)param_2[1];
    }
    uVar3 = *param_2;
    uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    (**(code **)(*param_1 + 0x170))(param_1,uVar5,(longlong)(int)uVar4 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1402bee1c FUN_1402bee1c body=319 status=ok
// SIG undefined FUN_1402bee1c(void)

longlong * FUN_1402bee1c(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140272f20(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar4 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14746620a(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar4 = (uint)param_2[1];
    }
    uVar3 = *param_2;
    uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    (**(code **)(*param_1 + 0x170))(param_1,uVar5,(longlong)(int)uVar4 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1402bef5c FUN_1402bef5c body=884 status=ok
// SIG undefined FUN_1402bef5c(void)

void FUN_1402bef5c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  void *_Dst;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_158 [44];
  uint local_12c;
  longlong *local_128;
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_118 [48];
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*param_1 + 0xd50))();
  iVar11 = (int)param_1[0x94];
  if (0 < iVar11) {
    local_128 = param_1 + 0x93;
    local_12c = 0;
    do {
      lVar13 = *(longlong *)(*local_128 + (longlong)(int)local_12c * 8);
      if (lVar13 == 0) {
        if (~local_12c + iVar11 != 0) {
          _Dst = (void *)(*local_128 + (longlong)(int)local_12c * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~local_12c + iVar11) << 3);
          iVar11 = (int)param_1[0x94];
        }
        *(int *)(param_1 + 0x94) = iVar11 + -1;
        FUN_14021c7da(local_128);
        local_12c = local_12c - 1;
      }
      else {
        local_58 = (undefined4 *)0x0;
        local_50 = 0x1800000000;
        FUN_14024dbd6(lVar13,local_118,0);
        if (0 < (int)local_50) {
          lVar13 = 0;
          do {
            puVar5 = local_58;
            if (local_58 == (undefined4 *)0x0) {
              puVar5 = local_118;
            }
            lVar7 = *(longlong *)(puVar5 + lVar13 * 2);
            if ((*(byte *)(lVar7 + 0x9c) & 1) != 0) {
              local_11c = *(undefined4 *)(lVar7 + 0x3d0);
              FUN_1472dd72a(param_3,local_120,&local_11c,0);
              iVar11 = *(int *)(lVar7 + 0x140);
              if ((longlong)iVar11 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x138);
                lVar12 = 0;
                do {
                  lVar1 = *(longlong *)(lVar7 + lVar12);
                  if (lVar1 != 0) {
                    lVar6 = FUN_144a3a302();
                    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                          (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                       ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) {
                      local_11c = *(undefined4 *)(lVar1 + 0x3d0);
                      FUN_1472dd72a(param_3,local_120,&local_11c,0);
                    }
                  }
                  lVar12 = lVar12 + 8;
                } while ((longlong)iVar11 * 8 != lVar12);
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)local_50);
        }
        if (local_58 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_12c = local_12c + 1;
      iVar11 = (int)param_1[0x94];
    } while ((int)local_12c < iVar11);
  }
  uVar4 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34);
  uVar10 = *(uint *)(param_1 + 0x96);
  uVar8 = uVar4 + uVar10;
  if (uVar4 < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_147ca81e6(param_3,uVar8);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar11 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 1 << ((byte)iVar11 & 0x1f);
    }
    if ((*(int *)(param_3 + 0x48) == 0) || (*(int *)(param_3 + 0x48) < iVar11)) {
      *(int *)(param_3 + 0x48) = iVar11;
      FUN_1472dda4c(param_3);
    }
    uVar10 = *(uint *)(param_1 + 0x96);
  }
  if (0 < (int)uVar10) {
    iVar11 = -uVar10;
    lVar13 = (ulonglong)uVar10 * 8;
    uVar9 = (ulonglong)uVar10;
    do {
      lVar13 = lVar13 + -8;
      lVar7 = FUN_14479d2ce(param_1[0x95] + lVar13);
      if (lVar7 == 0) {
        uVar8 = *(uint *)(param_1 + 0x96);
        if (uVar9 != uVar8) {
          iVar3 = uVar8 + iVar11;
          if (0 < (int)(uVar8 + iVar11)) {
            iVar3 = 1;
          }
          memmove((void *)(param_1[0x95] + uVar9 * 8 + -8),
                  (void *)(param_1[0x95] + (longlong)(int)(uVar8 - iVar3) * 8),(longlong)iVar3 << 3)
          ;
          uVar8 = *(uint *)(param_1 + 0x96);
        }
        *(uint *)(param_1 + 0x96) = uVar8 - 1;
        FUN_147ca8392(param_1 + 0x95);
      }
      else if ((*(byte *)(lVar7 + 0x9c) & 1) != 0) {
        local_118[0] = *(undefined4 *)(lVar7 + 0x3d0);
        FUN_1472dd72a(param_3,&local_11c,local_118,0);
      }
      iVar11 = iVar11 + 1;
      bVar2 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar2);
  }
  (**(code **)(*param_1 + 0xd58))(param_1,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402bf2d6 FUN_1402bf2d6 body=145 status=ok
// SIG undefined FUN_1402bf2d6(void)

undefined8 * FUN_1402bf2d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a242eb8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x2000000002;
  FUN_1402bf368(param_1 + 4,0x40);
  return param_1;
}



// FUNCTION 1402bf368 FUN_1402bf368 body=315 status=ok
// SIG undefined FUN_1402bf368(void)

void FUN_1402bf368(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1402bf3d2;
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
LAB_1402bf3d2:
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



// FUNCTION 1402bf4a4 FUN_1402bf4a4 body=233 status=ok
// SIG undefined FUN_1402bf4a4(void)

void FUN_1402bf4a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(*(longlong *)(*param_2 + 0x5a8) + (longlong)(int)param_2[1] * 0x10);
  if (((plVar4 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar4 + 0xc))) ||
     (plVar4 = param_2, local_30 = param_2, param_2 != (longlong *)0x0)) {
    iVar1 = (int)plVar4[2];
    local_30 = plVar4;
    if (((-1 < (longlong)iVar1) &&
        (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2c8),
        iVar1 < *(int *)(lVar2 + 0x700))) &&
       (*(longlong **)(*(longlong *)(lVar2 + 0x6f8) + (longlong)iVar1 * 8) == plVar4)) {
      QueryPerformanceCounter(&local_28);
      local_28.QuadPart = local_28.QuadPart & 0xffffffff;
      uVar3 = ((uint)((ulonglong)plVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar4 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      FUN_1402bf58e(param_1 + 0x78,uVar3 >> 0x10 ^ uVar3,&local_30,&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402bf58e FUN_1402bf58e body=1122 status=ok
// SIG undefined FUN_1402bf58e(void)

longlong * FUN_1402bf58e(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  
  iVar18 = (int)param_1[1];
  iVar13 = *(int *)((longlong)param_1 + 0x34);
  if (iVar18 != iVar13) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*plVar8 == *param_3) {
          if (plVar8 != (longlong *)0x0) goto LAB_1402bf5ef;
          break;
        }
        iVar4 = (int)plVar8[2];
      } while (iVar4 != -1);
    }
  }
  if (iVar13 == 0) {
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_14482b872(param_1,iVar18);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar4 = iVar13 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar10 = iVar13 + 1;
    iVar17 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar17 = iVar13;
    }
    if (iVar17 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar13) {
        iVar4 = iVar13;
        if (iVar13 + 0x20U < 0xa0) {
          iVar10 = 0x80;
        }
        else {
          uVar19 = iVar13 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar19) {
              uVar14 = uVar19;
            }
          }
          else {
            uVar14 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar14 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar11 + 0xf);
              if (uVar14 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
              }
              else {
                uVar12 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar12 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar16 = 0x32;
                  if (0x32 < bVar9) {
                    uVar16 = (ulonglong)bVar9;
                  }
                  uVar20 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_1402bf8d6;
                    lVar7 = uVar16 + 1 + uVar20;
                    uVar20 = uVar20 - 1;
                  } while (lVar7 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar12 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              iVar4 = (int)param_1[5];
            }
          }
LAB_1402bf8d6:
          iVar6 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar19 <= iVar6) {
            iVar10 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar8,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar8;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar13 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar7 = (longlong)iVar18;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13 + -1;
    if (iVar13 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar13 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar13 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  iVar13 = 1;
  plVar8 = (longlong *)(*param_1 + lVar7 * 0x18);
  lVar7 = *param_3;
  *plVar8 = lVar7;
  plVar8[1] = *param_4;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar19 != 0) && (uVar19 != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar15 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*plVar15 == lVar7) {
          uVar2 = *(undefined4 *)((longlong)plVar8 + 4);
          lVar7 = plVar8[1];
          uVar3 = *(undefined4 *)((longlong)plVar8 + 0xc);
          *(int *)plVar15 = (int)*plVar8;
          *(undefined4 *)((longlong)plVar15 + 4) = uVar2;
          *(int *)(plVar15 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar15 + 0xc) = uVar3;
          FUN_14016e678(param_1,iVar18,1);
          goto LAB_1402bf776;
        }
        iVar4 = (int)plVar15[2];
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar19) {
    uVar11 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar13 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)plVar8 + 0x14) = param_2;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 2) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    FUN_14493d890(param_1);
  }
LAB_1402bf776:
  plVar8 = (longlong *)(*param_1 + (longlong)iVar18 * 0x18);
LAB_1402bf5ef:
  return plVar8 + 1;
}



// FUNCTION 1402bf9f0 FUN_1402bf9f0 body=53 status=ok
// SIG undefined FUN_1402bf9f0(void)

void FUN_1402bf9f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001402bfa22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
            (*(longlong **)(param_1 + 0x10),param_2,param_3);
  return;
}



// FUNCTION 1402bfa3a FUN_1402bfa3a body=197 status=ok
// SIG undefined FUN_1402bfa3a(void)

void FUN_1402bfa3a(longlong *param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (*param_2 >> 0x10 ^ *param_2) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  for (uVar2 = *(uint *)(param_1[8] +
                        (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(uint *)((longlong)param_1 + 0x34)) *
                        4); uVar2 != 0xffffffff;
      uVar2 = *(uint *)(param_1[9] + (ulonglong)uVar2 * 4)) {
    if (*(uint *)(*param_1 + 0x30 + (longlong)(int)uVar2 * 0x40) == *param_2) {
      lVar4 = *param_1 + (longlong)(int)uVar2 * 0x40;
      lVar3 = *(longlong *)(lVar4 + 8);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xa0) & 1) == 0)) {
        iVar1 = *(int *)(param_3 + 0x28);
        *(uint *)(param_3 + 0x28) = iVar1 + 1U;
        if (*(uint *)(param_3 + 0x2c) < iVar1 + 1U) {
          FUN_14476a5c8(param_3,iVar1);
        }
        lVar3 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar3 = param_3;
        }
        lVar4 = *(longlong *)(lVar4 + 8);
        *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
      }
    }
  }
  return;
}



// FUNCTION 1402bfb00 FUN_1402bfb00 body=198 status=ok
// SIG undefined FUN_1402bfb00(void)

void FUN_1402bfb00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,undefined8 param_7,longlong *param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = FUN_1401d0000(param_3,param_2,param_4,param_5,param_6,param_7);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402bfbc6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar1 * 0x50;
  *(undefined8 *)(lVar2 + lVar5) = param_3;
  *(undefined8 *)(lVar2 + 8 + lVar5) = uVar4;
  lVar3 = *param_8;
  *(longlong *)(lVar2 + 0x10 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x20 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar6 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_8[2];
    }
    (**(code **)*plVar6)(plVar6,lVar2 + lVar5 + 0x20);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + param_6 * param_5;
  return;
}



// FUNCTION 1402bfbc6 FUN_1402bfbc6 body=93 status=ok
// SIG undefined FUN_1402bfbc6(void)

void FUN_1402bfbc6(longlong param_1,int param_2)

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
    FUN_1402bfc24();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1402bfc24 FUN_1402bfc24 body=469 status=ok
// SIG undefined FUN_1402bfc24(void)

void FUN_1402bfc24(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_1402bfd54:
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
LAB_1402bfd91:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402bfc8e;
LAB_1402bfc83:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402bfc8e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xff99) goto code_r0x0001402bfcbb;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x68;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402bfd11:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402bfd91;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402bfd54;
code_r0x0001402bfcbb:
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
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1402bfd11;
    }
  }
  goto LAB_1402bfc83;
}



// FUNCTION 1402bfe00 FUN_1402bfe00 body=47 status=ok
// SIG undefined FUN_1402bfe00(void)

void FUN_1402bfe00(undefined8 param_1)

{
  char cVar1;
  
  FUN_1402bfe30();
  cVar1 = FUN_1402bfec4(param_1,0);
  if (cVar1 == '\0') {
    FUN_1402bffc2(param_1);
    return;
  }
  return;
}



// FUNCTION 1402bfe30 FUN_1402bfe30 body=49 status=ok
// SIG undefined FUN_1402bfe30(void)

void FUN_1402bfe30(longlong param_1)

{
  longlong *plVar1;
  
  switchD_143c3d4dc::caseD_1d();
  plVar1 = *(longlong **)(param_1 + 0x38);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x5c) == '\0')) {
    (**(code **)(*plVar1 + 0x20))();
  }
  FUN_1402bfe62(param_1);
  return;
}



// FUNCTION 1402bfe62 FUN_1402bfe62 body=98 status=ok
// SIG undefined FUN_1402bfe62(void)

void FUN_1402bfe62(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((int)param_1[0x17] == -1) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x2f0))();
  lVar2 = FUN_140083894();
  if (cVar1 == '\x05') {
    FUN_14366932c(*(undefined8 *)(lVar2 + 0x50),param_1);
  }
  else {
    (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xc0))(*(longlong **)(lVar2 + 0x30),param_1);
  }
  param_1[8] = 0;
  FUN_1402c00da(param_1);
  return;
}



// FUNCTION 1402bfec4 FUN_1402bfec4 body=253 status=ok
// SIG undefined FUN_1402bfec4(void)

ulonglong FUN_1402bfec4(longlong *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1[7] != 0) goto LAB_1402bfef5;
  if (param_1[0x18] == 0) {
    uVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
    uVar6 = (ulonglong)uVar3;
    if (param_2 == '\x01' && (char)uVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001402bff23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*param_1 + 0x300))(param_1);
      return uVar6;
    }
    goto LAB_1402bfef5;
  }
  if ((param_1[0x18] & 2U) == 0) goto LAB_1402bfeeb;
  cVar2 = (**(code **)(*param_1 + 0x2f8))(param_1);
  if (cVar2 != '\0') goto LAB_1402bfef5;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1402bff7b;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1402bff7b;
    }
  }
  else {
LAB_1402bff7b:
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
  }
LAB_1402bfeeb:
  if ((param_2 != '\0') && ((*(byte *)(param_1 + 0x18) & 4) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar2 != '\0') goto LAB_1402bfef5;
    cVar2 = FUN_144a61b4f();
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfb;
    }
  }
  uVar6 = 0;
LAB_1402bfef5:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1402bffc2 FUN_1402bffc2 body=280 status=ok
// SIG undefined FUN_1402bffc2(void)

void FUN_1402bffc2(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar4 = *(uint *)(lVar2 + 0xc60);
  lVar7 = 0x118;
  if (((uVar4 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar4 != 2)) {
    puVar1 = (uint *)(lVar2 + 0xc60);
    if (uVar4 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1402c0041;
      uVar4 = *puVar1;
    }
    if (((uVar4 != 4) && (cVar3 = (*(code *)PTR_FUN_14c758760)(), cVar3 == '\0')) &&
       (uVar4 = *puVar1, uVar4 != 8)) {
      if (DAT_14c86a9fc == 0) {
        lVar7 = 0x120;
        if (((0x20 < uVar4) || ((0x100010004U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)) &&
           (uVar4 != 0x40000010)) goto LAB_1402c0050;
      }
      else {
        lVar7 = 0x120;
        if (((uVar4 - 0x10 & 0xbfffffef) != 0) && (uVar4 != 0x20)) goto LAB_1402c0050;
      }
    }
  }
LAB_1402c0041:
  if (*(longlong *)(param_1 + lVar7) != 0) {
    FUN_1402c0228(param_1);
  }
LAB_1402c0050:
  lVar2 = *(longlong *)(param_1 + 0x128);
  if (*(char *)(lVar2 + 0x18) == '\x01') {
    FUN_140414380(lVar2,0);
    *(undefined1 *)(lVar2 + 0x18) = 0;
  }
  FUN_1400fb146(param_1 + 0x130,0);
  *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) | 4;
  return;
}



// FUNCTION 1402c00da FUN_1402c00da body=241 status=ok
// SIG undefined FUN_1402c00da(void)

void FUN_1402c00da(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar7 = 0x80;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      local_58 = *(undefined8 *)(lVar1 + -0x80 + lVar7);
      local_44 = 2;
      pcVar2 = *(code **)(lVar1 + -0x20 + lVar7);
      plVar3 = *(longlong **)(lVar1 + -0x10 + lVar7);
      plVar5 = (longlong *)(lVar1 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        plVar5 = plVar3;
      }
      local_50 = param_1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_58,&local_50,&local_44);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xa0;
    } while (lVar6 < *(int *)(param_1 + 0x30));
  }
  FUN_1402c01cc(*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_147d62d44(param_1 + 0x28,0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402c01cc FUN_1402c01cc body=91 status=ok
// SIG undefined FUN_1402c01cc(void)

void FUN_1402c01cc(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[4] != 0) {
        plVar1 = plVar2 + 8;
        if ((longlong *)plVar2[6] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402c0228 FUN_1402c0228 body=1321 status=ok
// SIG undefined FUN_1402c0228(void)

void FUN_1402c0228(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined ***pppuVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[0x23] == 0) goto LAB_1402c03b0;
  FUN_1402bfe62();
  lVar6 = (**(code **)(*param_1 + 0x340))(param_1);
  if ((lVar6 != 0) && (plVar7 = (longlong *)(**(code **)(*param_1 + 0x340))(param_1), *plVar7 != 0))
  {
    FUN_14371c050(param_1,0,0);
  }
  param_1[0x18] = 0;
  plVar7 = (longlong *)param_1[0x23];
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar3 != 2) {
      if (iVar3 != 1) goto LAB_1402c02bb;
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1402c02c0;
      goto LAB_1402c030a;
    }
LAB_1402c02c0:
    param_1[0x24] = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    if (plVar7 != (longlong *)0x0) {
      puVar8 = (undefined8 *)*plVar7;
      plVar14 = plVar7;
LAB_1402c02e3:
      (*(code *)*puVar8)(plVar14,1);
    }
  }
  else {
LAB_1402c02bb:
    if (iVar3 == 0x10) goto LAB_1402c02c0;
LAB_1402c030a:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar3 = *(int *)(lVar6 + 0xc60), iVar3 == 2))
      goto LAB_1402c02c0;
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1402c02c0;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar8 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar8;
      if (puVar10 != (uint *)0x0) goto LAB_1402c0471;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar6 + 0x310);
        *(undefined8 *)(lVar6 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar8 = puVar9;
        FUN_140217a48(puVar8);
        puVar10 = (uint *)*puVar8;
LAB_1402c0471:
        plVar14 = (longlong *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(plVar14 + 0x17);
        uVar11 = puVar10[0x12];
        if (puVar13 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar1 = *puVar10;
          *puVar10 = *puVar10 + uVar11 + 1;
          UNLOCK();
          if ((uVar1 ^ uVar11) != 0xffffffff) break;
          puVar10 = (uint *)*puVar8;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar8 = puVar10;
          plVar14 = (longlong *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(plVar14 + 0x17);
          uVar11 = 0;
          if (puVar13 <= puVar10 + 0x4000) {
            uVar11 = 1;
            goto LAB_1402c04f1;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_1402c04f1:
      *(uint **)(puVar10 + 0x10) = puVar13;
      puVar10[0x12] = uVar11;
      iVar3 = 0;
      FUN_1447247dc(plVar14,0);
      *plVar14 = (longlong)&PTR_FUN_14aad4640;
      plVar14[0x15] = (longlong)param_1;
      plVar14[0x16] = (longlong)plVar7;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
          iVar3 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar3 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(plVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar14[0xe] + 0x18))(plVar14 + 0xe,plVar14 + 9);
      }
      plVar14[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar14[9] = (longlong)plVar14;
      plVar14[10] = (longlong)plVar14;
      lVar6 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar6 == 0) {
        uVar2 = 1;
        if ((char)uVar15 != '\x06') {
          uVar2 = uVar15;
        }
        uVar15 = uVar2;
        lVar6 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      }
      plVar14[0xf] = lVar6;
      plVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)plVar14 + 0x1c) = iVar3;
      if (plVar14 == (longlong *)0x0) {
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_1402c03a5;
      }
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(plVar14);
      LOCK();
      plVar7 = plVar14 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 != 0) goto LAB_1402c03a5;
      puVar8 = (undefined8 *)*plVar14;
      goto LAB_1402c02e3;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aad4600;
    local_68[0] = FUN_143737ce6;
    local_40 = param_1;
    local_38 = plVar7;
    FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cb0b600);
    if (local_68[0] != (code *)0x0) {
      pppuVar12 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar12 = &local_48;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
LAB_1402c03a5:
  param_1[0x23] = 0;
LAB_1402c03b0:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c0752 FUN_1402c0752 body=929 status=ok
// SIG undefined FUN_1402c0752(void)

void FUN_1402c0752(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  lVar16 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar16 != 0) && (DVar6 = GetCurrentThreadId(), DVar6 != *(DWORD *)(lVar16 + 0x20))) {
    FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
  }
  uVar7 = *(uint *)(param_2 + 0xb8);
  lVar16 = (longlong)(int)uVar7;
  if (-1 < lVar16) {
    if (((int)uVar7 < *(int *)(param_1 + 0x318)) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x310) + lVar16 * 8) == param_2)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x310) + lVar16 * 8) = 0;
    }
    else if ((int)uVar7 < *(int *)(param_1 + 0x18)) {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar16 * 0xa8) == param_2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar16 * 0xa8) = 0;
        iVar3 = *(int *)(param_1 + 0x328);
        *(uint *)(param_1 + 0x328) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x32c) < iVar3 + 1U) {
          FUN_1446f48e2(param_1 + 800,iVar3);
        }
        *(uint *)(*(longlong *)(param_1 + 800) + (longlong)iVar3 * 4) = uVar7;
        if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
          uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          lVar16 = param_1 + 0x378;
          if (*(longlong *)(param_1 + 0x380) != 0) {
            lVar16 = *(longlong *)(param_1 + 0x380);
          }
          iVar3 = *(int *)(lVar16 + ((longlong)(int)(uVar8 >> 0x10 ^ uVar8) &
                                    (longlong)*(int *)(param_1 + 0x388) - 1U) * 4);
          if (iVar3 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)(param_1 + 0x340) + (longlong)iVar3 * 0x10) == param_2
                 ) {
                FUN_147d63a9e();
                break;
              }
              iVar3 = *(int *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x340) + 8);
            } while (iVar3 != -1);
          }
        }
        if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
          lVar16 = *(longlong *)(param_1 + 0x3d0);
          if (*(longlong *)(param_1 + 0x3d0) == 0) {
            lVar16 = param_1 + 0x3c8;
          }
          puVar12 = (uint *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x3d8) + 0x7fffffffU & uVar7) *
                                      4);
          do {
            uVar8 = *puVar12;
            lVar16 = (longlong)(int)uVar8;
            if (lVar16 == -1) break;
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x390) + lVar16 * 0xc);
            uVar4 = *puVar1;
            if (uVar4 == uVar7) {
              lVar14 = *(longlong *)(param_1 + 0x3d0);
              if (*(longlong *)(param_1 + 0x3d0) == 0) {
                lVar14 = param_1 + 0x3c8;
              }
              uVar11 = *(uint *)(lVar14 + (longlong)(int)puVar1[2] * 4);
              if (uVar11 == uVar8) {
                puVar15 = (uint *)(lVar14 + (longlong)(int)puVar1[2] * 4);
              }
              else {
                do {
                  puVar15 = (uint *)(*(longlong *)(param_1 + 0x390) + (longlong)(int)uVar11 * 0xc +
                                    4);
                  uVar11 = *puVar15;
                } while (uVar11 != uVar8);
              }
              *puVar15 = puVar1[1];
              lVar14 = *(longlong *)(param_1 + 0x390);
              if (*(int *)(param_1 + 0x3c4) != 0) {
                *(uint *)(lVar14 + (longlong)*(int *)(param_1 + 0x3c0) * 0xc) = uVar8;
              }
              *(undefined4 *)(lVar14 + lVar16 * 0xc) = 0xffffffff;
              uVar10 = 0xffffffff;
              if (0 < *(int *)(param_1 + 0x3c4)) {
                uVar10 = *(undefined4 *)(param_1 + 0x3c0);
              }
              *(undefined4 *)(lVar14 + lVar16 * 0xc + 4) = uVar10;
              *(uint *)(param_1 + 0x3c0) = uVar8;
              *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x3c4) + 1;
              lVar16 = *(longlong *)(param_1 + 0x3b0);
              if (*(longlong *)(param_1 + 0x3b0) == 0) {
                lVar16 = param_1 + 0x3a0;
              }
              uVar11 = uVar8 + 0x1f;
              if (-1 < (int)uVar8) {
                uVar11 = uVar8;
              }
              bVar5 = (byte)uVar8 & 0x1f;
              puVar1 = (uint *)(lVar16 + (longlong)((int)uVar11 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
            }
            else {
              puVar12 = puVar1 + 1;
            }
          } while (uVar4 != uVar7);
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xb8) = 0xffffffff;
  *(byte *)(param_2 + 0xbc) = *(byte *)(param_2 + 0xbc) & 0xfb;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar16 + ((longlong)(int)(uVar7 >> 0x10 ^ uVar7) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar3 != -1) {
      lVar14 = *(longlong *)(param_1 + 0x20);
      do {
        lVar2 = lVar14 + (longlong)iVar3 * 0x10;
        if (*(ulonglong *)(lVar14 + (longlong)iVar3 * 0x10) == param_2) {
          iVar13 = *(int *)(lVar16 + (longlong)*(int *)(lVar2 + 0xc) * 4);
          if (iVar13 == iVar3) {
            piVar9 = (int *)(lVar16 + (longlong)*(int *)(lVar2 + 0xc) * 4);
          }
          else {
            do {
              piVar9 = (int *)((longlong)iVar13 * 0x10 + lVar14 + 8);
              iVar13 = *piVar9;
            } while (iVar13 != iVar3);
          }
          *piVar9 = *(int *)(lVar2 + 8);
          FUN_1402c0af4((longlong *)(param_1 + 0x20));
          break;
        }
        iVar3 = *(int *)(lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001402c09ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  return;
}



// FUNCTION 1402c0af4 FUN_1402c0af4 body=114 status=ok
// SIG undefined FUN_1402c0af4(void)

void FUN_1402c0af4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1402c0b66 FUN_1402c0b66 body=200 status=ok
// SIG undefined FUN_1402c0b66(void)

void FUN_1402c0b66(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(char *)(param_1 + 0x5c) == '\0') && (*(int *)(param_1 + 0x60) != 0)) {
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    if (*(longlong **)(param_1 + 0x650) != (longlong *)0x0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x650) + 0x20))();
      if (iVar1 == 1) {
        plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar2[1] = 0;
        *plVar2 = (longlong)&PTR_FUN_14aac2720;
        plVar2[2] = param_1;
        if (param_1 != 0) {
          LOCK();
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
          UNLOCK();
        }
        if (DAT_14c8442c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402c0bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,plVar2,3);
          return;
        }
        FUN_146086200(plVar2 + 2);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402c0c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x28))(plVar2,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1402c0c2e FUN_1402c0c2e body=2826 status=ok
// SIG undefined FUN_1402c0c2e(void)

ulonglong FUN_1402c0c2e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       float param_5)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  int *piVar3;
  longlong *plVar4;
  longlong **pplVar5;
  undefined4 *puVar6;
  int iVar7;
  double dVar8;
  uint uVar9;
  undefined ***pppuVar10;
  bool bVar11;
  undefined1 *puVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong **pplVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStack_428 [32];
  longlong local_408;
  uint *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  longlong local_3e0;
  undefined **local_3d8;
  uint uStack_3cc;
  undefined8 uStack_3c8;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  longlong *local_3a8;
  undefined8 local_3a0;
  float local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong *plStack_380;
  undefined **local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  longlong local_360;
  longlong *local_348;
  undefined8 local_340;
  float local_338;
  uint local_330;
  byte local_32c;
  longlong local_328;
  longlong *local_310;
  undefined ***local_308;
  undefined8 uStack_300;
  undefined1 local_2f0;
  undefined1 local_2e8 [136];
  undefined4 local_260;
  undefined1 local_25c;
  undefined8 uStack_250;
  uint local_240;
  byte local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_220;
  undefined1 local_218 [136];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong *plStack_178;
  undefined1 local_168;
  undefined1 local_160 [136];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_388 = 0;
  plStack_380 = (longlong *)0x0;
  local_390 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x20))
            (*(longlong **)(param_1 + 0x5d8),&local_330,param_4);
  if ((local_32c != 1) || (cVar13 = FUN_1403e7f2a(&local_390), cVar13 == '\0')) {
    uVar18 = 0;
    goto LAB_1402c1508;
  }
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_310);
  plVar16 = plStack_380;
  if (plStack_380 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
    UNLOCK();
  }
  local_23c = local_32c;
  if ((local_32c & 1) != 0) {
    local_240 = local_330;
  }
  local_3f8 = (longlong *)(param_1 + -0x148);
  local_188 = (undefined1 *)local_390;
  uStack_180 = (longlong **)local_388;
  plStack_178 = plStack_380;
  local_400 = &local_240;
  if (plStack_380 == (longlong *)0x0) {
    local_408 = (ulonglong)local_408._1_7_ << 8;
    FUN_1402c1b84(&local_3d8,&local_188,&local_310,param_4);
    local_3d8 = &PTR_FUN_149eda6f0;
    local_398 = param_5;
  }
  else {
    LOCK();
    *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
    UNLOCK();
    local_408 = (ulonglong)local_408._1_7_ << 8;
    FUN_1402c1b84(&local_3d8,&local_188,&local_310,param_4);
    local_3d8 = &PTR_FUN_149eda6f0;
    local_398 = param_5;
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar3 = (int *)((longlong)plVar16 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + 1;
  local_240 = local_240 & 0xffffff00;
  local_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  memset(local_218,0,0x88);
  local_190 = 0x20702;
  local_310 = local_3f8;
  local_308 = &local_3d8;
  local_188 = &LAB_1428f5d8c;
  uStack_180 = &local_310;
  cVar13 = FUN_1402c4aee(param_1 + 0x500);
  if (cVar13 == '\0') {
LAB_1402c0e6d:
    uVar9 = uStack_3cc;
    if (((longlong)(int)uStack_3cc < 0) || (*(int *)(param_1 + 0x1d0) <= (int)uStack_3cc)) {
LAB_1402c16fc:
      FUN_141370954(local_3f8,&local_310,uVar9,0);
    }
    else {
      lVar14 = (longlong)(int)uStack_3cc * 0x10;
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + lVar14);
      pppuVar10 = *(undefined ****)(*(longlong *)(param_1 + 0x1c8) + 8 + lVar14);
      if (pppuVar10 == (undefined ***)0x0) {
        if (plVar16 == (longlong *)0x0) goto LAB_1402c16fc;
        local_308 = (undefined ***)0x0;
        local_310 = plVar16;
      }
      else {
        LOCK();
        *(int *)(pppuVar10 + 1) = *(int *)(pppuVar10 + 1) + 1;
        UNLOCK();
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(pppuVar10 + 1) = *(int *)(pppuVar10 + 1) + 1;
          UNLOCK();
          local_310 = plVar16;
          local_308 = pppuVar10;
        }
        LOCK();
        pppuVar2 = pppuVar10 + 1;
        *(int *)pppuVar2 = *(int *)pppuVar2 + -1;
        UNLOCK();
        if (*(int *)pppuVar2 == 0) {
          (*(code *)**pppuVar10)(pppuVar10);
          LOCK();
          piVar3 = (int *)((longlong)pppuVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*pppuVar10)[2])(pppuVar10);
          }
        }
        if (plVar16 == (longlong *)0x0) goto LAB_1402c16fc;
      }
    }
    plVar16 = local_310;
    lVar14 = local_310[0x12];
    if (lVar14 == 0) {
      local_408 = CONCAT71(local_408._1_7_,DAT_14c96b238);
      FUN_1402c4e4c(local_310 + 0xe,&local_188,0,0);
      pplVar5 = uStack_180;
      puVar12 = local_188;
      if (uStack_180 == (longlong **)0x0) {
        plVar16[0x12] = (longlong)local_188;
        pplVar17 = (longlong **)plVar16[0x13];
        if (pplVar17 != (longlong **)0x0) {
          plVar16[0x13] = 0;
LAB_1402c1594:
          LOCK();
          pplVar5 = pplVar17 + 1;
          *(int *)pplVar5 = *(int *)pplVar5 + -1;
          UNLOCK();
          if (*(int *)pplVar5 == 0) {
            (*(code *)**pplVar17)(pplVar17);
            LOCK();
            piVar3 = (int *)((longlong)pplVar17 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar7 = *piVar3;
            UNLOCK();
joined_r0x0001402c15bf:
            if (iVar7 == 0) {
              (*(code *)(*pplVar17)[2])(pplVar17);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(uStack_180 + 1) = *(int *)(uStack_180 + 1) + 1;
        UNLOCK();
        plVar16[0x12] = (longlong)puVar12;
        pplVar17 = (longlong **)plVar16[0x13];
        if (pplVar5 == pplVar17) {
          LOCK();
          pplVar17 = pplVar5 + 1;
          *(int *)pplVar17 = *(int *)pplVar17 + -1;
          UNLOCK();
          if (*(int *)pplVar17 == 0) {
            (*(code *)**pplVar5)(pplVar5);
            LOCK();
            piVar3 = (int *)((longlong)pplVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar7 = *piVar3;
            UNLOCK();
            pplVar17 = pplVar5;
            goto joined_r0x0001402c15bf;
          }
        }
        else {
          plVar16[0x13] = (longlong)pplVar5;
          if (pplVar17 != (longlong **)0x0) goto LAB_1402c1594;
        }
      }
      pplVar5 = uStack_180;
      if (uStack_180 != (longlong **)0x0) {
        LOCK();
        pplVar17 = uStack_180 + 1;
        *(int *)pplVar17 = *(int *)pplVar17 + -1;
        UNLOCK();
        if (*(int *)pplVar17 == 0) {
          (*(code *)**pplVar5)(pplVar5);
          LOCK();
          piVar3 = (int *)((longlong)pplVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
      lVar14 = plVar16[0x12];
    }
    pppuVar10 = local_308;
    local_3e8 = (longlong *)plVar16[0x13];
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3e8 + 1) = (int)local_3e8[1] + 1;
      UNLOCK();
    }
    if (local_308 != (undefined ***)0x0) {
      LOCK();
      pppuVar2 = local_308 + 1;
      *(int *)pppuVar2 = *(int *)pppuVar2 + -1;
      UNLOCK();
      if (*(int *)pppuVar2 == 0) {
        (*(code *)**pppuVar10)(pppuVar10);
        LOCK();
        piVar3 = (int *)((longlong)pppuVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (*(code *)(*pppuVar10)[2])(pppuVar10);
        }
      }
    }
    uStack_250 = uStack_3c8;
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
    }
    local_328 = (ulonglong)uStack_3cc << 0x20;
    uVar9 = *(uint *)(lVar14 + 0x130);
    uVar18 = (ulonglong)uVar9;
    local_370 = local_328;
    uStack_368 = uStack_3c8;
    local_348 = local_3a8;
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
    }
    local_3f0 = local_3a8;
    local_340 = local_3a0;
    local_378 = &PTR_FUN_149eda6f0;
    local_338 = local_398;
    local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
    local_2f0 = 0;
    local_308 = (undefined ***)0x0;
    uStack_300 = 0;
    local_3e0 = param_1;
    local_360 = lVar14;
    memset(local_2e8,0,0x88);
    local_260 = 0x20702;
    local_25c = 0;
    local_360 = lVar14;
    if (0 < (int)uVar9) {
      lVar20 = uVar18 * 0x48 + -8;
      lVar19 = uVar18 * 0x14 + -4;
      do {
        local_70 = *(char *)(*(longlong *)(lVar14 + 0x150) + lVar19);
        if (local_70 == '\x01') {
          lVar15 = *(longlong *)(lVar14 + 0x150) + lVar19;
          local_188 = *(undefined1 **)(lVar15 + -0x10);
          uStack_180 = *(longlong ***)(lVar15 + -8);
        }
        lVar15 = *(longlong *)(lVar14 + 0x128);
        if (*(longlong *)(lVar14 + 0x128) == 0) {
          lVar15 = lVar14 + 8;
        }
        local_98 = *(undefined8 *)(lVar15 + -0x10 + lVar20);
        puVar6 = (undefined4 *)(lVar15 + -0x40 + lVar20);
        local_c8 = *puVar6;
        uStack_c4 = puVar6[1];
        uStack_c0 = puVar6[2];
        uStack_bc = puVar6[3];
        puVar6 = (undefined4 *)(lVar15 + -0x30 + lVar20);
        local_b8 = *puVar6;
        uStack_b4 = puVar6[1];
        uStack_b0 = puVar6[2];
        uStack_ac = puVar6[3];
        puVar6 = (undefined4 *)(lVar15 + -0x20 + lVar20);
        local_a8 = *puVar6;
        uStack_a4 = puVar6[1];
        uStack_a0 = puVar6[2];
        uStack_9c = puVar6[3];
        local_90 = *(longlong **)(lVar15 + -8 + lVar20);
        local_88 = *(longlong **)(lVar15 + lVar20);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
        }
        if (local_70 != '\0') {
          local_80 = (undefined4)local_188;
          uStack_7c = local_188._4_4_;
          uStack_78 = (undefined4)uStack_180;
          uStack_74 = uStack_180._4_4_;
        }
        if (*(char *)((longlong)local_90 + 0x3a) == '\x01') {
          (**(code **)(*local_90 + 0x50))(local_90,&local_188,&local_c8,&local_378);
        }
        else {
          local_188 = (undefined1 *)((ulonglong)local_188 & 0xffffffffffffff00);
          local_168 = 0;
          uStack_180 = (longlong **)0x0;
          plStack_178 = (longlong *)0x0;
          memset(local_160,0,0x88);
          local_d8 = CONCAT35(local_d8._5_3_,0x20702);
        }
        FUN_1402c173a(&local_188,&local_90);
        FUN_1402c17c2(&local_310,&local_188);
        FUN_14493db24(&local_188);
        local_400 = (uint *)CONCAT44(local_400._4_4_,local_370._4_4_);
        local_408 = 0;
        FUN_1402c1d72(local_3f8,lVar14,&local_310,lVar14);
        plVar16 = local_88;
        if (local_70 == '\x01') {
          local_70 = '\0';
        }
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar3 = (int *)((longlong)plVar16 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        if (uVar18 < 2) break;
        lVar20 = lVar20 + -0x48;
        lVar19 = lVar19 + -0x14;
        uVar18 = uVar18 - 1;
      } while ((char)local_310 == '\0');
    }
    plVar1 = local_348;
    plVar16 = local_3f0;
    local_378 = &PTR_FUN_149eda6d0;
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_348 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    param_1 = local_3e0;
    if (plVar16 == (longlong *)0x0) {
      FUN_1403d4924(&local_240,&local_310);
      FUN_14493db24(&local_310);
    }
    else {
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      FUN_1403d4924(&local_240,&local_310);
      FUN_14493db24(&local_310);
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    plVar16 = local_3e8;
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    local_188 = (undefined1 *)CONCAT71(local_188._1_7_,1);
    local_168 = 0;
    uStack_180 = (longlong **)0x0;
    plStack_178 = (longlong *)0x0;
    memset(local_160,0,0x88);
    local_d8 = 0x20702;
    FUN_1403d4924(&local_240,&local_188);
    FUN_14493db24(&local_188);
    if ((local_240 & 1) == 0) goto LAB_1402c0e6d;
  }
  FUN_1405df8b8(local_3f8,&local_310,uStack_3cc);
  plVar16 = local_310;
  if (*(char *)((longlong)local_310 + 0x1a) == '\x01') {
    local_188 = (undefined1 *)CONCAT44(uStack_3b4,local_3b8);
    uStack_180 = (longlong **)CONCAT44(uStack_3ac,uStack_3b0);
    plStack_178 = local_3a8;
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
    }
    fVar24 = ABS(local_398);
    cVar13 = (**(code **)(*local_310 + 0x60))(local_310,&local_188);
    if ((cVar13 == '\0') ||
       (fVar24 < *(float *)((longlong)plVar16 + 0x1c) ||
        fVar24 == *(float *)((longlong)plVar16 + 0x1c))) {
      cVar13 = (**(code **)(*plVar16 + 0x68))(plVar16,&local_188);
      if (cVar13 == '\0') {
        bVar11 = false;
      }
      else {
        bVar11 = *(float *)(plVar16 + 4) <= fVar24 && fVar24 != *(float *)(plVar16 + 4);
      }
    }
    else {
      bVar11 = true;
    }
    plVar16 = plStack_178;
    if (plStack_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_178 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_178)(plStack_178);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if (bVar11) {
      dVar21 = (double)(**(code **)(*(longlong *)(param_1 + -0x148) + 0x60))(local_3f8);
      dVar8 = *(double *)(param_1 + 0x228);
      uVar22 = SUB84(dVar8,0);
      uVar23 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if ((dVar8 != dVar21) || (NAN(dVar8) || NAN(dVar21))) {
        *(double *)(param_1 + 0x228) = dVar21;
        FUN_1402c1cc6(param_1 + 0x238,SUB84(dVar21,0));
        uVar22 = (undefined4)*(undefined8 *)(param_1 + 0x228);
        uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x228) >> 0x20);
      }
      *(ulonglong *)(param_1 + 0x230) = CONCAT44(uVar23,uVar22);
    }
  }
  pppuVar10 = local_308;
  uVar18 = CONCAT71((int7)((ulonglong)plVar16 >> 8),(undefined1)local_240);
  if (local_308 != (undefined ***)0x0) {
    LOCK();
    pppuVar2 = local_308 + 1;
    *(int *)pppuVar2 = *(int *)pppuVar2 + -1;
    UNLOCK();
    if (*(int *)pppuVar2 == 0) {
      (*(code *)**pppuVar10)(pppuVar10);
      LOCK();
      piVar3 = (int *)((longlong)pppuVar10 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*pppuVar10)[2])(pppuVar10);
      }
    }
  }
  FUN_14493db24(&local_240);
  *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + -1;
  local_3d8 = &PTR_FUN_149eda6d0;
  if (local_3a8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_3a8 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar3 = (int *)((longlong)local_3a8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_3a8 + 0x10))(local_3a8);
      }
    }
  }
LAB_1402c1508:
  plVar16 = plStack_380;
  if (plStack_380 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_380 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_380)(plStack_380);
      LOCK();
      piVar3 = (int *)((longlong)plVar16 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c173a FUN_1402c173a body=136 status=ok
// SIG undefined FUN_1402c173a(void)

longlong FUN_1402c173a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001402c179c;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001402c179c:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1402c17c2 FUN_1402c17c2 body=790 status=ok
// SIG undefined FUN_1402c17c2(void)

undefined1 * FUN_1402c17c2(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  if (param_2 != param_1) {
    if (param_2[0x20] == '\x01') {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      uVar6 = 1;
    }
    else {
      if (param_1[0x20] != '\x01') goto LAB_1402c1818;
      uVar6 = 0;
    }
    param_1[0x20] = uVar6;
  }
LAB_1402c1818:
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(longlong *)(param_1 + 0x50) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x70);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(longlong *)(param_1 + 0x70) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  lVar4 = *(longlong *)(param_2 + 0x80);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(longlong *)(param_1 + 0x80) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  lVar4 = *(longlong *)(param_2 + 0x98);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(longlong *)(param_1 + 0x98) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  lVar4 = *(longlong *)(param_2 + 0xa8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(longlong *)(param_1 + 0xa8) = lVar4;
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
  param_1[0xb4] = param_2[0xb4];
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 1402c1ad8 FUN_1402c1ad8 body=159 status=ok
// SIG undefined FUN_1402c1ad8(void)

undefined8 FUN_1402c1ad8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar1,1,1);
    DAT_14c9670a0 = plVar1;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_34,param_3);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_34);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c1b84 FUN_1402c1b84 body=321 status=ok
// SIG undefined FUN_1402c1b84(void)

undefined8 *
FUN_1402c1b84(undefined8 *param_1,undefined8 *param_2,undefined2 *param_3,undefined4 param_4,
             undefined1 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149eda670;
  *(undefined2 *)(param_1 + 1) = *param_3;
  *(undefined1 *)((longlong)param_1 + 10) = param_5;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = 0;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar4,1,1);
    param_4 = *(undefined4 *)(param_1 + 2);
    DAT_14c9670a0 = plVar4;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_34,param_4);
  *(undefined4 *)((longlong)param_1 + 0xc) = local_34;
  *param_1 = &PTR_FUN_149eda6d0;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  lVar3 = param_2[2];
  param_1[6] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  if (*(char *)(param_6 + 1) == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *param_6;
  }
  plVar4 = (longlong *)param_2[2];
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
  if (*(char *)(param_6 + 1) == '\x01') {
    *(undefined1 *)(param_6 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c1cc6 FUN_1402c1cc6 body=172 status=ok
// SIG undefined FUN_1402c1cc6(void)

void FUN_1402c1cc6(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1402c1d5a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar7 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1402c1d5a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1402c1d72 FUN_1402c1d72 body=11642 status=ok
// SIG undefined FUN_1402c1d72(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1402c1d72(longlong *param_1,longlong param_2,longlong param_3,undefined1 *param_4,
                  longlong param_5,uint param_6)

{
  int *piVar1;
  undefined *****pppppuVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  undefined ****ppppuVar11;
  undefined8 *puVar12;
  undefined3 uVar13;
  longlong *plVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  undefined7 uVar20;
  undefined1 *puVar18;
  longlong lVar19;
  byte bVar21;
  undefined1 uVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong **pplVar25;
  ushort *puVar26;
  undefined *****pppppuVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong *plVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined *****pppppuVar33;
  undefined4 uVar34;
  undefined ****ppppuVar35;
  longlong lVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auStack_638 [32];
  undefined *****local_618;
  undefined *****local_610;
  undefined4 local_608;
  undefined4 local_5f4;
  longlong *local_5f0;
  undefined1 *local_5e8;
  undefined4 local_5dc;
  longlong *local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  longlong local_5c0;
  longlong *local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  longlong *plStack_590;
  undefined8 local_580;
  undefined8 local_578;
  longlong local_570;
  undefined8 local_568;
  longlong local_560;
  undefined ****local_558;
  longlong *plStack_550;
  longlong local_540;
  longlong *local_538;
  undefined **local_530 [3];
  longlong local_518;
  longlong *local_4e0;
  longlong *local_4b0;
  undefined *****local_4a8;
  longlong *plStack_4a0;
  uint local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  longlong local_488;
  longlong *local_480;
  undefined *****local_478;
  longlong *plStack_470;
  undefined *****local_468;
  longlong *plStack_460;
  undefined *****local_458;
  longlong *plStack_450;
  uint local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  undefined8 local_430;
  longlong *local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_40d;
  undefined4 uStack_409;
  longlong local_400;
  longlong *local_3f8;
  char local_3f0;
  undefined7 uStack_3ef;
  longlong *local_3e8;
  longlong *plStack_3e0;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  longlong *local_3c0;
  undefined *****local_3b8;
  longlong *plStack_3b0;
  undefined *****local_3a8;
  undefined ******local_3a0;
  undefined *****local_398;
  longlong *plStack_390;
  uint local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 uStack_34d;
  longlong **local_290;
  ulonglong local_288;
  undefined1 local_280;
  undefined8 local_278;
  longlong *plStack_270;
  longlong local_268;
  ulonglong uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_245;
  undefined4 uStack_241;
  longlong *local_238;
  undefined *****pppppuStack_230;
  undefined **local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined *****local_1e0;
  longlong *plStack_1d8;
  uint local_1d0;
  undefined *****local_1c8;
  ushort uStack_1c0;
  undefined1 uStack_1be;
  undefined1 uStack_1bd;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong *plStack_1b0;
  undefined8 *local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined *****pppppuStack_180;
  longlong *local_178;
  ulonglong uStack_170;
  undefined4 local_168;
  undefined2 local_164;
  undefined7 local_160;
  undefined4 uStack_159;
  ushort *local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_638;
  local_5b0 = *(longlong *)(param_3 + 0xa0);
  plVar29 = *(longlong **)(param_3 + 0xa8);
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
    UNLOCK();
  }
  if (param_4 == (undefined1 *)0x0 || local_5b0 == 0) {
    local_5d0 = (undefined1 *)((ulonglong)local_5d0._4_4_ << 0x20);
  }
  else {
    local_5d0 = (undefined1 *)
                CONCAT44(local_5d0._4_4_,
                         (int)CONCAT71((int7)(local_60 >> 8),0 < *(int *)(param_4 + 0x130)));
  }
  if (*(int *)(param_2 + 0x130) < 1) {
    local_5dc = 0;
  }
  else {
    lVar19 = param_2 + 8;
    if (*(longlong *)(param_2 + 0x128) != 0) {
      lVar19 = *(longlong *)(param_2 + 0x128);
    }
    lVar32 = *(longlong *)(lVar19 + 0x38);
    plVar28 = *(longlong **)(lVar19 + 0x40);
    uVar20 = (undefined7)((ulonglong)lVar32 >> 8);
    if (plVar28 == (longlong *)0x0) {
      uVar31 = CONCAT71(uVar20,*(undefined1 *)(lVar32 + 0x369)) & 0xffffffffffffff02;
      local_5dc = (undefined4)CONCAT71((int7)(uVar31 >> 8),(byte)uVar31 >> 1);
    }
    else {
      LOCK();
      *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
      UNLOCK();
      uVar31 = CONCAT71(uVar20,*(undefined1 *)(lVar32 + 0x369)) & 0xffffffffffffff02;
      local_5dc = (undefined4)CONCAT71((int7)(uVar31 >> 8),(byte)uVar31 >> 1);
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
  }
  puVar23 = &DAT_149ed0668;
  if (param_5 != 0) {
    puVar23 = (undefined4 *)(param_5 + 0x58);
  }
  local_5f4 = *puVar23;
  if (((int)param_6 < 0) || ((int)param_1[99] <= (int)param_6)) {
LAB_1402c454e:
    uVar34 = local_5f4;
    FUN_141370954(param_1,&local_400,param_6,0);
  }
  else {
    lVar19 = *(longlong *)(param_1[0x62] + (ulonglong)param_6 * 0x10);
    plVar28 = *(longlong **)(param_1[0x62] + 8 + (ulonglong)param_6 * 0x10);
    if (plVar28 == (longlong *)0x0) {
      if (lVar19 == 0) goto LAB_1402c454e;
      local_3f8 = (longlong *)0x0;
      local_400 = lVar19;
      uVar34 = local_5f4;
    }
    else {
      LOCK();
      *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
      UNLOCK();
      if (lVar19 != 0) {
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        local_400 = lVar19;
        local_3f8 = plVar28;
      }
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
      uVar34 = local_5f4;
      if (lVar19 == 0) goto LAB_1402c454e;
    }
  }
  lVar19 = local_400;
  cVar15 = FUN_1408025c4(local_400,uVar34);
  bVar21 = (byte)local_5d0;
  if ((cVar15 != '\0') && ((~bVar21 & (*(byte *)(param_3 + 0xb4) & 1) == 0) == 0)) {
    FUN_140d95e8c(lVar19,local_5f4);
  }
  if ((*(uint *)(param_3 + 0xb4) & 4) != 0) {
    if ((*(uint *)(param_3 + 0xb4) & 8) == 0) {
      FUN_1469aa454(DAT_14c98e618,*(undefined4 *)(local_400 + 0x18),*(undefined1 *)(param_3 + 0xb0))
      ;
    }
    else {
      local_1c8 = (undefined *****)CONCAT71(local_1c8._1_7_,DAT_14c96b238);
      local_a0 = (ushort *)0x0;
      local_98 = 0x400000000;
      local_90 = 0;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      (**(code **)(*param_1 + 0x158))(param_1,&local_1c8,*(undefined1 *)(param_3 + 0xb0));
      FUN_1447fa2ac(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar28 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar30 = plStack_80 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      puVar26 = local_a0;
      if (local_a0 == (ushort *)0x0) {
        puVar26 = &uStack_1c0;
      }
      FUN_1447157bd(puVar26,local_98 & 0xffffffff);
      if (local_a0 != (ushort *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((*(byte *)(param_3 + 0xb4) & 0x80) != 0) {
    FUN_1469b781a(local_400);
  }
  cVar15 = '\0';
  local_5f0 = param_1;
  local_5e8 = param_4;
  local_5d8 = plVar29;
  local_5c8 = param_2;
  local_5c0 = param_3;
  if (bVar21 != 0) {
    puVar18 = param_4 + 8;
    if (*(undefined1 **)(param_4 + 0x128) != (undefined1 *)0x0) {
      puVar18 = *(undefined1 **)(param_4 + 0x128);
    }
    local_1c8 = *(undefined ******)(puVar18 + 0x38);
    plVar28 = *(longlong **)(puVar18 + 0x40);
    if (plVar28 == (longlong *)0x0) {
      uStack_1c0 = 0;
      uStack_1be = 0;
      uStack_1bd = 0;
      uStack_1bc = 0;
      FUN_1403d09a4(param_1,&local_478,param_5);
    }
    else {
      LOCK();
      *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
      UNLOCK();
      uStack_1c0 = (ushort)plVar28;
      uStack_1be = (undefined1)((ulonglong)plVar28 >> 0x10);
      uStack_1bd = (undefined1)((ulonglong)plVar28 >> 0x18);
      uStack_1bc = (undefined4)((ulonglong)plVar28 >> 0x20);
      LOCK();
      *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
      UNLOCK();
      FUN_1403d09a4(param_1,&local_478,param_5);
      if (plVar28 != (longlong *)0x0) {
        LOCK();
        plVar30 = plVar28 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    local_488 = local_5b0;
    if (plVar29 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
      UNLOCK();
    }
    local_480 = plVar29;
    FUN_1469b8550(local_400,&local_488);
    FUN_1402d8544(local_400,&local_3d8,local_5f4);
    plVar29 = local_428;
    local_238 = plStack_470;
    pppppuStack_230 = local_468;
    local_4a8 = local_458;
    plStack_4a0 = plStack_450;
    local_498 = local_448;
    uStack_494 = uStack_444;
    uStack_490 = uStack_440;
    uStack_48c = uStack_43c;
    local_5a0 = local_438;
    local_5a8 = local_430;
    if (local_428 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_428 + 1) = (int)local_428[1] + 1;
      UNLOCK();
    }
    uStack_245 = uStack_40d;
    uStack_241 = uStack_409;
    uStack_258 = local_420;
    uStack_254 = uStack_41c;
    uStack_250 = uStack_418;
    uStack_24c = uStack_414;
    local_1c8 = (undefined *****)CONCAT71(local_1c8._1_7_,DAT_14c96b238);
    local_a0 = (ushort *)0x0;
    local_98 = 0x400000000;
    local_90 = 0;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    local_618 = (undefined *****)CONCAT71(local_618._1_7_,DAT_14c96b238);
    FUN_1404dd558(&local_3d8,&local_1c8,0,0);
    uVar31 = (ulonglong)(int)local_98;
    plVar28 = (longlong *)0x0;
    if (0 < (longlong)uVar31) {
      lVar19 = uVar31 * 0x48 + -8;
      lVar32 = uVar31 * 0x14 + -4;
      local_5b8 = plVar29;
      plVar30 = (longlong *)0x0;
      do {
        cVar15 = *(char *)(local_78 + lVar32);
        if (cVar15 == '\x01') {
          local_3b8 = *(undefined ******)(local_78 + lVar32 + -0x10);
          plStack_3b0 = *(longlong **)(local_78 + lVar32 + -8);
        }
        puVar26 = local_a0;
        if (local_a0 == (ushort *)0x0) {
          puVar26 = &uStack_1c0;
        }
        puVar12 = (undefined8 *)((longlong)puVar26 + lVar19 + -0x40);
        puVar4 = (undefined8 *)((longlong)puVar26 + lVar19 + -0x30);
        puVar23 = (undefined4 *)((longlong)puVar26 + lVar19 + -0x20);
        local_228 = (undefined **)*puVar12;
        uStack_220 = puVar12[1];
        local_218 = *puVar4;
        uStack_210 = puVar4[1];
        local_208 = *puVar23;
        uStack_204 = puVar23[1];
        uStack_200 = puVar23[2];
        uStack_1fc = puVar23[3];
        local_1f8 = *(undefined8 *)((longlong)puVar26 + lVar19 + -0x10);
        local_1f0 = *(longlong **)((longlong)puVar26 + lVar19 + -8);
        local_1e8 = *(longlong **)((longlong)puVar26 + lVar19);
        if (local_1e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
          UNLOCK();
        }
        local_1d0 = CONCAT31(local_1d0._1_3_,cVar15);
        if (cVar15 == '\0') {
          local_398 = local_4a8;
          plStack_390 = plStack_4a0;
          if (local_5b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_5b8 + 1) = (int)local_5b8[1] + 1;
            UNLOCK();
          }
        }
        else {
          local_1e0 = local_3b8;
          plStack_1d8 = plStack_3b0;
          local_398 = local_3b8;
          plStack_390 = plStack_3b0;
          if (local_5b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_5b8 + 1) = (int)local_5b8[1] + 1;
            UNLOCK();
          }
        }
        uStack_34d = CONCAT44(uStack_241,uStack_245);
        local_3a0 = &local_1c8;
        uStack_354 = uStack_24c;
        uStack_358 = uStack_250;
        uStack_35c = uStack_254;
        local_360 = uStack_258;
        local_370 = local_5a8;
        local_378 = local_5a0;
        uStack_37c = uStack_48c;
        uStack_380 = uStack_490;
        uStack_384 = uStack_494;
        local_388 = local_498;
        local_3a8 = pppppuStack_230;
        plStack_3b0 = local_238;
        local_3b8 = (undefined *****)&PTR_FUN_149eda650;
        local_368 = local_5b8;
        (**(code **)(*local_1f0 + 0x80))(local_1f0,&local_3b8);
        local_3f0 = '\0';
        local_3e8 = (longlong *)0x0;
        plStack_3e0 = (longlong *)0x0;
        FUN_1403d0382(&local_3f0,&local_1f0);
        plVar28 = plStack_3e0;
        cVar15 = local_3f0;
        if (plStack_3e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_3e0 + 1) = (int)plStack_3e0[1] + 1;
          UNLOCK();
        }
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          plVar29 = plVar30 + 1;
          *(int *)plVar29 = (int)*plVar29 + -1;
          UNLOCK();
          if ((int)*plVar29 == 0) {
            (**(code **)*plVar30)(plVar30);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
        plVar29 = plStack_3e0;
        if (plStack_3e0 != (longlong *)0x0) {
          LOCK();
          plVar30 = plStack_3e0 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*plStack_3e0)(plStack_3e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        plVar29 = local_368;
        local_3b8 = (undefined *****)&PTR_FUN_149eda650;
        if (local_368 != (longlong *)0x0) {
          LOCK();
          plVar30 = local_368 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*local_368)(local_368);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        plVar29 = local_1e8;
        local_1d0 = local_1d0 & 0xffffff00;
        if (local_1e8 != (longlong *)0x0) {
          LOCK();
          plVar30 = local_1e8 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*local_1e8)(local_1e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        plVar29 = local_5b8;
        param_2 = local_5c8;
        if (uVar31 < 2) break;
        lVar19 = lVar19 + -0x48;
        lVar32 = lVar32 + -0x14;
        uVar31 = uVar31 - 1;
        plVar30 = plVar28;
      } while (cVar15 == '\0');
    }
    if (plVar29 != (longlong *)0x0) {
      LOCK();
      plVar30 = plVar29 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar29)(plVar29);
        LOCK();
        piVar1 = (int *)((longlong)plVar29 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
        }
      }
    }
    if (plVar28 != (longlong *)0x0) {
      LOCK();
      plVar29 = plVar28 + 1;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)*plVar29 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    FUN_1447fa2ac(local_78,uStack_70 & 0xffffffff);
    plVar29 = local_5d8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    plVar28 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar30 = plStack_80 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    puVar26 = local_a0;
    if (local_a0 == (ushort *)0x0) {
      puVar26 = &uStack_1c0;
    }
    FUN_1447157bd(puVar26,local_98 & 0xffffffff);
    if (local_a0 != (ushort *)0x0) {
      FUN_1400020a8();
    }
    local_540 = local_5b0;
    local_538 = plVar29;
    if (plVar29 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
      UNLOCK();
    }
    FUN_1403d061a(local_530,&local_478,&local_540);
    uVar31 = (ulonglong)*(int *)(param_2 + 0x130);
    local_518 = param_2;
    if ((longlong)uVar31 < 1) {
      pppppuVar27 = (undefined *****)0x0;
    }
    else {
      lVar19 = uVar31 * 0x48 + -8;
      lVar32 = uVar31 * 0x14 + -4;
      pppppuVar33 = (undefined *****)0x0;
      lVar36 = param_2;
      do {
        cVar15 = *(char *)(*(longlong *)(lVar36 + 0x150) + lVar32);
        if (cVar15 == '\x01') {
          lVar24 = *(longlong *)(lVar36 + 0x150) + lVar32;
          local_3b8 = *(undefined ******)(lVar24 + -0x10);
          plStack_3b0 = *(longlong **)(lVar24 + -8);
        }
        lVar24 = *(longlong *)(lVar36 + 0x128);
        if (*(longlong *)(lVar36 + 0x128) == 0) {
          lVar24 = param_2 + 8;
        }
        local_198 = *(undefined8 *)(lVar24 + -0x10 + lVar19);
        puVar12 = (undefined8 *)(lVar24 + -0x40 + lVar19);
        local_1c8 = (undefined *****)*puVar12;
        uVar34 = *(undefined4 *)(puVar12 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar12 + 0xc);
        puVar23 = (undefined4 *)(lVar24 + -0x30 + lVar19);
        uStack_1b8 = *puVar23;
        uStack_1b4 = puVar23[1];
        plStack_1b0 = *(longlong **)(puVar23 + 2);
        puVar12 = (undefined8 *)(lVar24 + -0x20 + lVar19);
        local_1a8 = (undefined8 *)*puVar12;
        uStack_1a0 = puVar12[1];
        uStack_1c0 = (ushort)uVar34;
        uStack_1be = (undefined1)((uint)uVar34 >> 0x10);
        uStack_1bd = (undefined1)((uint)uVar34 >> 0x18);
        local_190 = *(longlong **)(lVar24 + -8 + lVar19);
        local_188 = *(longlong **)(lVar24 + lVar19);
        if (local_188 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_188 + 1) = (int)local_188[1] + 1;
          UNLOCK();
        }
        uStack_170 = CONCAT71(uStack_170._1_7_,cVar15);
        if (cVar15 != '\0') {
          pppppuStack_180 = local_3b8;
          local_178 = plStack_3b0;
        }
        (**(code **)(*local_190 + 0xc0))(local_190,&local_1c8,local_530);
        local_3b8 = (undefined *****)((ulonglong)local_3b8 & 0xffffffffffffff00);
        plStack_3b0 = (longlong *)0x0;
        local_3a8 = (undefined *****)0x0;
        FUN_1403d0382(&local_3b8,&local_190);
        pppppuVar27 = local_3a8;
        cVar15 = (char)local_3b8;
        if (local_3a8 != (undefined *****)0x0) {
          LOCK();
          *(int *)(local_3a8 + 1) = *(int *)(local_3a8 + 1) + 1;
          UNLOCK();
        }
        if (pppppuVar33 != (undefined *****)0x0) {
          LOCK();
          pppppuVar2 = pppppuVar33 + 1;
          *(int *)pppppuVar2 = *(int *)pppppuVar2 + -1;
          UNLOCK();
          if (*(int *)pppppuVar2 == 0) {
            (*(code *)**pppppuVar33)(pppppuVar33);
            LOCK();
            piVar1 = (int *)((longlong)pppppuVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppppuVar33)[2])(pppppuVar33);
            }
          }
        }
        pppppuVar33 = local_3a8;
        if (local_3a8 != (undefined *****)0x0) {
          LOCK();
          pppppuVar2 = local_3a8 + 1;
          *(int *)pppppuVar2 = *(int *)pppppuVar2 + -1;
          UNLOCK();
          if (*(int *)pppppuVar2 == 0) {
            (*(code *)**local_3a8)(local_3a8);
            LOCK();
            piVar1 = (int *)((longlong)pppppuVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppppuVar33)[2])(pppppuVar33);
            }
          }
        }
        plVar29 = local_188;
        if ((char)uStack_170 == '\x01') {
          uStack_170 = uStack_170 & 0xffffffffffffff00;
        }
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar28 = local_188 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        if (uVar31 < 2) break;
        lVar19 = lVar19 + -0x48;
        lVar32 = lVar32 + -0x14;
        uVar31 = uVar31 - 1;
        pppppuVar33 = pppppuVar27;
        lVar36 = local_5c8;
      } while (cVar15 == '\0');
    }
    local_530[0] = &PTR_FUN_149efe1e0;
    if (local_4b0 != (longlong *)0x0) {
      LOCK();
      plVar29 = local_4b0 + 1;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)*plVar29 == 0) {
        (**(code **)*local_4b0)(local_4b0);
        LOCK();
        piVar1 = (int *)((longlong)local_4b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_4b0 + 0x10))(local_4b0);
        }
      }
    }
    param_3 = local_5c0;
    plVar29 = local_5d8;
    param_4 = local_5e8;
    local_530[0] = &PTR_FUN_149eda650;
    cVar15 = (char)local_5d0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar28 = local_4e0 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar1 = (int *)((longlong)local_4e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_4e0 + 0x10))(local_4e0);
        }
      }
    }
    if (pppppuVar27 != (undefined *****)0x0) {
      LOCK();
      pppppuVar33 = pppppuVar27 + 1;
      *(int *)pppppuVar33 = *(int *)pppppuVar33 + -1;
      UNLOCK();
      if (*(int *)pppppuVar33 == 0) {
        (*(code *)**pppppuVar27)(pppppuVar27);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar27 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar27)[2])(pppppuVar27);
        }
      }
    }
    if (local_3c0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_3c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3c0 + 0x10))();
      }
    }
    FUN_1447de57f(local_3d8,local_3d0);
    param_1 = local_5f0;
    if (local_3d8 != 0) {
      FUN_1400020a8();
    }
    local_478 = (undefined *****)&PTR_FUN_149eda650;
    if (local_428 != (longlong *)0x0) {
      LOCK();
      plVar28 = local_428 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        (**(code **)*local_428)(local_428);
        LOCK();
        piVar1 = (int *)((longlong)local_428 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_428 + 0x10))(local_428);
        }
      }
    }
  }
  if ((*(char *)((longlong)param_1 + 0x4c4) != '\0') ||
     ((*(byte *)(param_1 + 0x34) | (byte)local_5dc) == 1)) {
    plVar28 = *(longlong **)(param_3 + 0x40);
    if (plVar28 == (longlong *)0x0) {
LAB_1402c2075:
      plVar28 = (longlong *)0x0;
    }
    else {
      iVar16 = (int)plVar28[1];
      do {
        if (iVar16 == 0) goto LAB_1402c2075;
        LOCK();
        iVar17 = (int)plVar28[1];
        bVar37 = iVar16 == iVar17;
        if (bVar37) {
          *(int *)(plVar28 + 1) = iVar16 + 1;
          iVar17 = iVar16;
        }
        iVar16 = iVar17;
        UNLOCK();
      } while (!bVar37);
    }
    ppppuVar8 = *(undefined *****)(param_3 + 0x38);
    ppppuVar35 = ppppuVar8;
    if (plVar28 == (longlong *)0x0) {
      ppppuVar35 = (undefined ****)0x0;
    }
    if (cVar15 == '\0' && ppppuVar35 != (undefined ****)0x0) {
      if (plVar28 == (longlong *)0x0) {
        local_558 = (undefined ****)0x0;
        plStack_550 = (longlong *)0x0;
        cVar15 = FUN_140d95694(local_400,local_5f4,&local_558,local_5c8);
      }
      else {
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        local_558 = ppppuVar8;
        plStack_550 = plVar28;
        cVar15 = FUN_140d95694(local_400,local_5f4,&local_558,local_5c8);
        LOCK();
        plVar30 = plVar28 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      if (cVar15 != '\0') {
        FUN_1402d8544(local_400,&local_3b8,local_5f4);
        if (0 < (longlong)(int)plStack_3b0) {
          local_5f4 = CONCAT31(local_5f4._1_3_,param_4 != (undefined1 *)0x0 && param_5 != 0);
          local_5d0 = param_4 + 8;
          lVar19 = (longlong)(int)plStack_3b0;
          do {
            lVar32 = lVar19 + -1;
            ppppuVar8 = local_3b8[lVar32 * 2 + 1];
            if (ppppuVar8 != (undefined ****)0x0) {
              iVar16 = *(int *)(ppppuVar8 + 1);
              do {
                if (iVar16 == 0) goto LAB_1402c23bf;
                LOCK();
                iVar17 = *(int *)(ppppuVar8 + 1);
                bVar37 = iVar16 == iVar17;
                if (bVar37) {
                  *(int *)(ppppuVar8 + 1) = iVar16 + 1;
                  iVar17 = iVar16;
                }
                iVar16 = iVar17;
                UNLOCK();
              } while (!bVar37);
              ppppuVar9 = local_3b8[lVar32 * 2];
              if (ppppuVar9 != (undefined ****)0x0) {
                if (ppppuVar9 == ppppuVar35) {
                  LOCK();
                  ppppuVar9 = ppppuVar8 + 1;
                  *(int *)ppppuVar9 = *(int *)ppppuVar9 + -1;
                  UNLOCK();
                  if (*(int *)ppppuVar9 == 0) {
                    (*(code *)**ppppuVar8)(ppppuVar8);
                    LOCK();
                    piVar1 = (int *)((longlong)ppppuVar8 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (*(code *)(*ppppuVar8)[2])(ppppuVar8);
                    }
                  }
                  break;
                }
                if (((char)local_5f4 == '\0') || (*(int *)(local_5e8 + 0x130) < 1)) {
                  uStack_1c0 = uStack_1c0 & 0xfe00;
                  uStack_1be = 0;
                  uStack_1bc = 0;
                  uStack_1b8 = 0xffffffff;
                  plStack_1b0 = (longlong *)0x0;
                  local_1c8 = (undefined *****)&PTR_FUN_149eda650;
                  local_198 = 0;
                  local_1a8 = (undefined8 *)0x0;
                  uStack_1a0 = 0;
                  local_190 = (longlong *)&DAT_14c96b1e8;
                  local_178 = (longlong *)0x0;
                  uStack_170 = 0;
                  local_188 = (longlong *)0x0;
                  pppppuStack_180 = (undefined *****)0x0;
                  local_168 = 0x3f800000;
                  local_164 = 0;
                  local_160 = 0;
                  uStack_159 = 0;
                  (*(code *)(*ppppuVar9)[0x10])(ppppuVar9,&local_1c8);
                  plVar30 = local_178;
                  local_1c8 = (undefined *****)&PTR_FUN_149eda650;
                  if (local_178 != (longlong *)0x0) {
                    LOCK();
                    plVar14 = local_178 + 1;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)*plVar14 == 0) {
                      (**(code **)*local_178)(local_178);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar30 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar30 + 0x10))(plVar30);
                      }
                    }
                  }
                }
                else {
                  puVar18 = *(undefined1 **)(local_5e8 + 0x128);
                  if (*(undefined1 **)(local_5e8 + 0x128) == (undefined1 *)0x0) {
                    puVar18 = local_5d0;
                  }
                  local_478 = *(undefined ******)(puVar18 + 0x38);
                  plVar29 = *(longlong **)(puVar18 + 0x40);
                  if (plVar29 == (longlong *)0x0) {
                    plStack_470 = (longlong *)0x0;
                    FUN_1403d09a4(local_5f0,&local_1c8,param_5,&local_478);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                    UNLOCK();
                    plStack_470 = plVar29;
                    FUN_1403d09a4(local_5f0,&local_1c8,param_5,&local_478);
                    if (plVar29 != (longlong *)0x0) {
                      LOCK();
                      plVar30 = plVar29 + 1;
                      *(int *)plVar30 = (int)*plVar30 + -1;
                      UNLOCK();
                      if ((int)*plVar30 == 0) {
                        (**(code **)*plVar29)(plVar29);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar29 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar29 + 0x10))(plVar29);
                        }
                      }
                    }
                    LOCK();
                    plVar30 = plVar29 + 1;
                    *(int *)plVar30 = (int)*plVar30 + -1;
                    UNLOCK();
                    if ((int)*plVar30 == 0) {
                      (**(code **)*plVar29)(plVar29);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar29 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar29 + 0x10))(plVar29);
                      }
                    }
                  }
                  (*(code *)(*ppppuVar9)[0x10])(ppppuVar9,&local_1c8);
                  plVar30 = local_178;
                  local_1c8 = (undefined *****)&PTR_FUN_149eda650;
                  plVar29 = local_5d8;
                  if (local_178 != (longlong *)0x0) {
                    LOCK();
                    plVar14 = local_178 + 1;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)*plVar14 == 0) {
                      (**(code **)*local_178)(local_178);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar30 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      plVar29 = local_5d8;
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar30 + 0x10))(plVar30);
                        plVar29 = local_5d8;
                      }
                    }
                  }
                }
              }
              LOCK();
              ppppuVar9 = ppppuVar8 + 1;
              *(int *)ppppuVar9 = *(int *)ppppuVar9 + -1;
              UNLOCK();
              if (*(int *)ppppuVar9 == 0) {
                (*(code *)**ppppuVar8)(ppppuVar8);
                LOCK();
                piVar1 = (int *)((longlong)ppppuVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppuVar8)[2])(ppppuVar8);
                }
              }
            }
LAB_1402c23bf:
            bVar37 = 1 < lVar19;
            lVar19 = lVar32;
          } while (bVar37);
          param_4 = local_5e8;
          if ((local_5e8 != (undefined1 *)0x0) && (iVar16 = *(int *)(local_5e8 + 0x130), 0 < iVar16)
             ) {
            puVar18 = *(undefined1 **)(local_5e8 + 0x128);
            if (*(undefined1 **)(local_5e8 + 0x128) == (undefined1 *)0x0) {
              puVar18 = local_5d0;
            }
            ppppuVar8 = local_3b8[(longlong)((int)plStack_3b0 + -1) * 2 + 1];
            if (ppppuVar8 != (undefined ****)0x0) {
              iVar17 = *(int *)(ppppuVar8 + 1);
              do {
                if (iVar17 == 0) goto LAB_1402c2a65;
                LOCK();
                iVar5 = *(int *)(ppppuVar8 + 1);
                bVar37 = iVar17 == iVar5;
                if (bVar37) {
                  *(int *)(ppppuVar8 + 1) = iVar17 + 1;
                  iVar5 = iVar17;
                }
                iVar17 = iVar5;
                UNLOCK();
              } while (!bVar37);
              ppppuVar10 = local_3b8[(longlong)((int)plStack_3b0 + -1) * 2];
              ppppuVar11 = *(undefined *****)(puVar18 + (ulonglong)(iVar16 - 1) * 0x48 + 0x38);
              LOCK();
              ppppuVar9 = ppppuVar8 + 1;
              *(int *)ppppuVar9 = *(int *)ppppuVar9 + -1;
              UNLOCK();
              if (*(int *)ppppuVar9 == 0) {
                (*(code *)**ppppuVar8)(ppppuVar8);
                LOCK();
                piVar1 = (int *)((longlong)ppppuVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppuVar8)[2])(ppppuVar8);
                }
              }
              if (ppppuVar10 == ppppuVar11 && ppppuVar10 != (undefined ****)0x0) goto LAB_1402c315c;
            }
LAB_1402c2a65:
            lVar19 = (longlong)*(int *)(param_4 + 0x130);
            if (0 < lVar19) {
              uVar31 = lVar19 + 1;
              lVar19 = lVar19 * 0x48 + -8;
              do {
                puVar18 = *(undefined1 **)(param_4 + 0x128);
                if (*(undefined1 **)(param_4 + 0x128) == (undefined1 *)0x0) {
                  puVar18 = local_5d0;
                }
                ppppuVar8 = *(undefined *****)(puVar18 + lVar19 + -8);
                plVar30 = *(longlong **)(puVar18 + lVar19);
                if (plVar30 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
                  UNLOCK();
                }
                if (ppppuVar8 != (undefined ****)0x0) {
                  if ((ppppuVar8 == ppppuVar35) ||
                     (cVar15 = FUN_14497f9ca(&local_3b8), cVar15 != '\0')) {
                    plVar29 = local_5d8;
                    if (plVar30 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = plVar30 + 1;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)*plVar14 == 0) {
                        (**(code **)*plVar30)(plVar30);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar30 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar30 + 0x10))(plVar30);
                        }
                      }
                    }
                    break;
                  }
                  if (param_5 == 0) {
                    uStack_1c0 = uStack_1c0 & 0xfe00;
                    uStack_1be = 0;
                    uStack_1bc = 0;
                    uStack_1b8 = 0xffffffff;
                    plStack_1b0 = (longlong *)0x0;
                    local_1c8 = (undefined *****)&PTR_FUN_149eda650;
                    local_198 = 0;
                    local_1a8 = (undefined8 *)0x0;
                    uStack_1a0 = 0;
                    local_190 = (longlong *)&DAT_14c96b1e8;
                    local_178 = (longlong *)0x0;
                    uStack_170 = 0;
                    local_188 = (longlong *)0x0;
                    pppppuStack_180 = (undefined *****)0x0;
                    local_168 = 0x3f800000;
                    local_164 = 0;
                    local_160 = 0;
                    uStack_159 = 0;
                    (*(code *)(*ppppuVar8)[0x10])(ppppuVar8,&local_1c8);
                    plVar29 = local_178;
                    local_1c8 = (undefined *****)&PTR_FUN_149eda650;
                    if (local_178 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_178 + 1;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)*plVar14 == 0) {
                        (**(code **)*local_178)(local_178);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar29 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar29 + 0x10))(plVar29);
                        }
                      }
                    }
                  }
                  else {
                    puVar18 = *(undefined1 **)(param_4 + 0x128);
                    if (*(undefined1 **)(param_4 + 0x128) == (undefined1 *)0x0) {
                      puVar18 = local_5d0;
                    }
                    local_478 = *(undefined ******)(puVar18 + 0x38);
                    plVar29 = *(longlong **)(puVar18 + 0x40);
                    if (plVar29 == (longlong *)0x0) {
                      plStack_470 = (longlong *)0x0;
                      FUN_1403d09a4(local_5f0,&local_1c8,param_5,&local_478);
                    }
                    else {
                      LOCK();
                      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                      UNLOCK();
                      LOCK();
                      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                      UNLOCK();
                      plStack_470 = plVar29;
                      FUN_1403d09a4(local_5f0,&local_1c8,param_5,&local_478);
                      if (plVar29 != (longlong *)0x0) {
                        LOCK();
                        plVar14 = plVar29 + 1;
                        *(int *)plVar14 = (int)*plVar14 + -1;
                        UNLOCK();
                        if ((int)*plVar14 == 0) {
                          (**(code **)*plVar29)(plVar29);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar29 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar29 + 0x10))(plVar29);
                          }
                        }
                      }
                      LOCK();
                      plVar14 = plVar29 + 1;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)*plVar14 == 0) {
                        (**(code **)*plVar29)(plVar29);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar29 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar29 + 0x10))(plVar29);
                        }
                      }
                    }
                    (*(code *)(*ppppuVar8)[0x10])(ppppuVar8,&local_1c8);
                    plVar29 = local_178;
                    local_1c8 = (undefined *****)&PTR_FUN_149eda650;
                    param_4 = local_5e8;
                    if (local_178 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_178 + 1;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)*plVar14 == 0) {
                        (**(code **)*local_178)(local_178);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar29 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        param_4 = local_5e8;
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar29 + 0x10))(plVar29);
                          param_4 = local_5e8;
                        }
                      }
                    }
                  }
                }
                plVar29 = local_5d8;
                if (plVar30 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plVar30 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*plVar30)(plVar30);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar30 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar30 + 0x10))(plVar30);
                    }
                  }
                }
                uVar31 = uVar31 - 1;
                lVar19 = lVar19 + -0x48;
              } while (1 < uVar31);
            }
          }
        }
LAB_1402c315c:
        if (local_3a0 != (undefined ******)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_3a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_3a0)[2])();
          }
        }
        FUN_1447de57f(local_3b8,(ulonglong)plStack_3b0 & 0xffffffff);
        param_1 = local_5f0;
        if (local_3b8 != (undefined *****)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined1 *)(local_400 + 0x49) = 1;
    }
    if (((((byte)local_5dc == '\0') && (ppppuVar35 != (undefined ****)0x0)) &&
        (0 < *(int *)(local_5c8 + 0x130))) &&
       (((*(byte *)(local_5c0 + 0xb4) & 0x20) != 0 &&
        (cVar15 = (**(code **)(*DAT_14c968088 + 0x80))(), cVar15 == '\0')))) {
      lVar19 = local_5c8 + 8;
      if (*(longlong *)(local_5c8 + 0x128) != 0) {
        lVar19 = *(longlong *)(local_5c8 + 0x128);
      }
      lVar32 = *(longlong *)(lVar19 + 0x38);
      plVar30 = *(longlong **)(lVar19 + 0x40);
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
      }
      plVar14 = DAT_14c968088;
      local_1c8 = *(undefined ******)(lVar32 + 0x510);
      lVar19 = *(longlong *)(lVar32 + 0x518);
      uStack_1c0 = (ushort)lVar19;
      uStack_1be = (undefined1)((ulonglong)lVar19 >> 0x10);
      uStack_1bd = (undefined1)((ulonglong)lVar19 >> 0x18);
      uStack_1bc = (undefined4)((ulonglong)lVar19 >> 0x20);
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x48))(plVar14,&local_1c8);
      plVar14 = (longlong *)
                CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      plVar14 = DAT_14c968088;
      local_1c8 = *(undefined ******)(lVar32 + 0x510);
      lVar19 = *(longlong *)(lVar32 + 0x518);
      uStack_1c0 = (ushort)lVar19;
      uStack_1be = (undefined1)((ulonglong)lVar19 >> 0x10);
      uStack_1bd = (undefined1)((ulonglong)lVar19 >> 0x18);
      uStack_1bc = (undefined4)((ulonglong)lVar19 >> 0x20);
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x78))(plVar14,1,&local_1c8);
      plVar14 = (longlong *)
                CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      *(undefined1 *)(local_400 + 0x49) = 1;
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar30 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
          }
        }
      }
    }
    param_3 = local_5c0;
    if (*(char *)(local_5c0 + 0x20) == '\x01') {
      FUN_141653418(local_400,10,(int)(float)(int)*(undefined8 *)(local_5c0 + 0x18),
                    (int)(float)(int)((ulonglong)*(undefined8 *)(local_5c0 + 0x18) >> 0x20));
    }
    plVar30 = *(longlong **)(param_3 + 0x60);
    if (plVar30 != (longlong *)0x0) {
      iVar16 = (int)plVar30[1];
      do {
        if (iVar16 == 0) goto LAB_1402c3443;
        LOCK();
        iVar17 = (int)plVar30[1];
        bVar37 = iVar16 == iVar17;
        if (bVar37) {
          *(int *)(plVar30 + 1) = iVar16 + 1;
          iVar17 = iVar16;
        }
        iVar16 = iVar17;
        UNLOCK();
      } while (!bVar37);
      lVar19 = *(longlong *)(param_3 + 0x58);
      LOCK();
      plVar14 = plVar30 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
        }
      }
      if (lVar19 != 0) {
        plVar30 = *(longlong **)(param_3 + 0x60);
        if (plVar30 == (longlong *)0x0) {
LAB_1402c33fe:
          plVar30 = (longlong *)0x0;
        }
        else {
          iVar16 = (int)plVar30[1];
          do {
            if (iVar16 == 0) goto LAB_1402c33fe;
            LOCK();
            iVar17 = (int)plVar30[1];
            bVar37 = iVar16 == iVar17;
            if (bVar37) {
              *(int *)(plVar30 + 1) = iVar16 + 1;
              iVar17 = iVar16;
            }
            iVar16 = iVar17;
            UNLOCK();
          } while (!bVar37);
        }
        local_1c8 = (undefined *****)0x0;
        if (plVar30 != (longlong *)0x0) {
          local_1c8 = *(undefined ******)(param_3 + 0x58);
        }
        uStack_1c0 = (ushort)plVar30;
        uStack_1be = (undefined1)((ulonglong)plVar30 >> 0x10);
        uStack_1bd = (undefined1)((ulonglong)plVar30 >> 0x18);
        uStack_1bc = (undefined4)((ulonglong)plVar30 >> 0x20);
        FUN_1407c4b7e(local_400);
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar30 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar30)(plVar30);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
      }
    }
LAB_1402c3443:
    if (plVar28 != (longlong *)0x0) {
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
  }
  if (((param_6 == 0 && (byte)local_5dc == '\0') && (0 < *(int *)(local_5c8 + 0x130))) &&
     (((*(uint *)(param_3 + 0xb4) & 0x21) == 1 &&
      (cVar15 = (**(code **)(*DAT_14c968088 + 0x80))(), cVar15 != '\0')))) {
    local_1c8 = (undefined *****)0x0;
    uStack_1c0 = 0;
    uStack_1be = 0;
    uStack_1bd = 0;
    uStack_1bc = 0;
    (**(code **)(*DAT_14c968088 + 0x78))(DAT_14c968088,0,&local_1c8);
    plVar28 = (longlong *)CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
    if (plVar28 != (longlong *)0x0) {
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    local_1c8 = (undefined *****)0x0;
    uStack_1c0 = 0;
    uStack_1be = 0;
    uStack_1bd = 0;
    uStack_1bc = 0;
    (**(code **)(*DAT_14c968088 + 0x48))(DAT_14c968088,&local_1c8);
    plVar28 = (longlong *)CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
    if (plVar28 != (longlong *)0x0) {
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    *(undefined1 *)(local_400 + 0x49) = 1;
  }
  if ((*(byte *)(param_3 + 0xb4) & 0x10) != 0) {
    FUN_141720966(local_400);
  }
  plVar28 = *(longlong **)(param_3 + 0x80);
  if (plVar28 == (longlong *)0x0) {
LAB_1402c35b1:
    if (*(char *)(param_3 + 0xb1) != '\a') goto LAB_1402c35c0;
  }
  else {
    iVar16 = (int)plVar28[1];
    do {
      if (iVar16 == 0) goto LAB_1402c35b1;
      LOCK();
      iVar17 = (int)plVar28[1];
      bVar37 = iVar16 == iVar17;
      if (bVar37) {
        *(int *)(plVar28 + 1) = iVar16 + 1;
        iVar17 = iVar16;
      }
      iVar16 = iVar17;
      UNLOCK();
    } while (!bVar37);
    if (*(longlong *)(param_3 + 0x78) == 0) {
      cVar15 = *(char *)(param_3 + 0xb1);
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
      if (cVar15 == '\a') goto LAB_1402c4033;
    }
    else {
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
LAB_1402c35c0:
    lVar19 = local_400;
    local_3b8._0_1_ = DAT_14c96b238;
    local_290 = (longlong **)0x0;
    local_288 = 0x400000000;
    local_280 = 0;
    local_278 = 0;
    plStack_270 = (longlong *)0x0;
    local_268 = 0;
    uStack_260 = 0;
    if (*(char *)(param_3 + 0xb3) == '\x01') {
      local_3b8 = (undefined *****)CONCAT71(local_3b8._1_7_,*param_4);
      FUN_1401bb734(&plStack_3b0,param_4 + 8);
      plVar30 = plStack_270;
      local_280 = param_4[0x138];
      local_278 = *(undefined8 *)(param_4 + 0x140);
      plVar28 = *(longlong **)(param_4 + 0x148);
      if (plVar28 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
      }
      puVar18 = param_4;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_270 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          puVar12 = (undefined8 *)*plStack_270;
          plStack_270 = plVar28;
          (*(code *)*puVar12)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar28 = plStack_270;
          if (*piVar1 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            plVar28 = plStack_270;
          }
        }
      }
LAB_1402c38cd:
      plStack_270 = plVar28;
      FUN_1401bb840(&local_268,puVar18 + 0x150);
    }
    else {
      puVar18 = *(undefined1 **)(local_400 + 0x90);
      if (puVar18 == (undefined1 *)0x0) {
        local_618 = (undefined *****)CONCAT71(local_618._1_7_,DAT_14c96b238);
        FUN_1402c4e4c(local_400 + 0x70,&local_1c8,0,0);
        plVar28 = (longlong *)
                  CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
        if (plVar28 == (longlong *)0x0) {
          *(undefined ******)(lVar19 + 0x90) = local_1c8;
          plVar30 = *(longlong **)(lVar19 + 0x98);
          if (plVar30 != (longlong *)0x0) {
            *(undefined8 *)(lVar19 + 0x98) = 0;
LAB_1402c3739:
            LOCK();
            plVar28 = plVar30 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plVar30)(plVar30);
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar16 = *piVar1;
              UNLOCK();
joined_r0x0001402c3764:
              if (iVar16 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
          UNLOCK();
          *(undefined ******)(lVar19 + 0x90) = local_1c8;
          plVar30 = *(longlong **)(lVar19 + 0x98);
          if (plVar28 == plVar30) {
            LOCK();
            plVar30 = plVar28 + 1;
            *(int *)plVar30 = (int)*plVar30 + -1;
            UNLOCK();
            if ((int)*plVar30 == 0) {
              (**(code **)*plVar28)(plVar28);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar16 = *piVar1;
              UNLOCK();
              plVar30 = plVar28;
              goto joined_r0x0001402c3764;
            }
          }
          else {
            *(longlong **)(lVar19 + 0x98) = plVar28;
            if (plVar30 != (longlong *)0x0) goto LAB_1402c3739;
          }
        }
        plVar28 = (longlong *)
                  CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
        if (plVar28 != (longlong *)0x0) {
          LOCK();
          plVar30 = plVar28 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*plVar28)(plVar28);
            LOCK();
            piVar1 = (int *)((longlong)plVar28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
            }
          }
        }
        puVar18 = *(undefined1 **)(lVar19 + 0x90);
      }
      plVar28 = *(longlong **)(lVar19 + 0x98);
      if (plVar28 == (longlong *)0x0) {
        local_3b8 = (undefined *****)CONCAT71(local_3b8._1_7_,*puVar18);
        FUN_1401bb734(&plStack_3b0,puVar18 + 8);
        plVar30 = plStack_270;
        local_280 = puVar18[0x138];
        local_278 = *(undefined8 *)(puVar18 + 0x140);
        plVar28 = *(longlong **)(puVar18 + 0x148);
        if (plVar28 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
          UNLOCK();
        }
        if (plStack_270 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_270 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            puVar12 = (undefined8 *)*plStack_270;
            plStack_270 = plVar28;
            (*(code *)*puVar12)(plVar30);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar28 = plStack_270;
            if (*piVar1 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
              plVar28 = plStack_270;
            }
          }
        }
        goto LAB_1402c38cd;
      }
      LOCK();
      *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
      UNLOCK();
      local_3b8 = (undefined *****)CONCAT71(local_3b8._1_7_,*puVar18);
      FUN_1401bb734(&plStack_3b0,puVar18 + 8);
      plVar14 = plStack_270;
      local_280 = puVar18[0x138];
      local_278 = *(undefined8 *)(puVar18 + 0x140);
      plVar30 = *(longlong **)(puVar18 + 0x148);
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
      }
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_270 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar12 = (undefined8 *)*plStack_270;
          plStack_270 = plVar30;
          (*(code *)*puVar12)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar30 = plStack_270;
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            plVar30 = plStack_270;
          }
        }
      }
      plStack_270 = plVar30;
      FUN_1401bb840(&local_268,puVar18 + 0x150);
      param_4 = local_5e8;
      LOCK();
      plVar30 = plVar28 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    lVar19 = (longlong)(int)local_288;
    if (0 < lVar19) {
      if ((DAT_14c75ef42 == '\0') && (*(char *)(param_3 + 0xb2) == '\x01')) {
        pplVar25 = local_290;
        if (local_290 == (longlong **)0x0) {
          pplVar25 = &plStack_3b0;
        }
        plVar28 = pplVar25[lVar19 * 9 + -2];
        plVar30 = pplVar25[lVar19 * 9 + -1];
        if (plVar30 == (longlong *)0x0) {
          bVar21 = *(byte *)((longlong)plVar28 + 0x163);
        }
        else {
          LOCK();
          *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
          UNLOCK();
          bVar21 = *(byte *)((longlong)plVar28 + 0x163);
          LOCK();
          plVar28 = plVar30 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plVar30)(plVar30);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
        if ((bVar21 & 8) == 0) goto LAB_1402c3fc5;
      }
      plVar28 = *(longlong **)(param_3 + 0x80);
      if (plVar28 != (longlong *)0x0) {
        iVar16 = (int)plVar28[1];
        do {
          if (iVar16 == 0) goto LAB_1402c3a06;
          LOCK();
          iVar17 = (int)plVar28[1];
          bVar37 = iVar16 == iVar17;
          if (bVar37) {
            *(int *)(plVar28 + 1) = iVar16 + 1;
            iVar17 = iVar16;
          }
          iVar16 = iVar17;
          UNLOCK();
        } while (!bVar37);
        lVar19 = *(longlong *)(param_3 + 0x78);
        LOCK();
        plVar30 = plVar28 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
        if (lVar19 != 0) {
          local_568 = 0;
          local_560 = *(longlong *)(param_3 + 0x80);
          if (local_560 != 0) {
            iVar16 = *(int *)(local_560 + 8);
            do {
              if (iVar16 == 0) {
                local_560 = 0;
                goto LAB_1402c3fa5;
              }
              LOCK();
              iVar17 = *(int *)(local_560 + 8);
              bVar37 = iVar16 == iVar17;
              if (bVar37) {
                *(int *)(local_560 + 8) = iVar16 + 1;
                iVar17 = iVar16;
              }
              iVar16 = iVar17;
              UNLOCK();
            } while (!bVar37);
            if (local_560 != 0) {
              local_568 = *(undefined8 *)(param_3 + 0x78);
            }
          }
LAB_1402c3fa5:
          local_618 = (undefined *****)((ulonglong)local_618 & 0xffffffffffffff00);
          FUN_1428f4eb4(param_1,&local_3b8,&local_568,param_6);
          goto LAB_1402c3fc5;
        }
      }
LAB_1402c3a06:
      FUN_1428668da(&local_3b8,&local_3f0);
      uVar6 = *(undefined2 *)(param_3 + 0xb1);
      (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_1c8);
      uStack_220._0_3_ = (uint3)(ushort)local_1c8;
      uStack_220 = CONCAT44(param_6,(undefined4)uStack_220);
      local_218 = CONCAT44(local_218._4_4_,param_6);
      uStack_210 = 0;
      local_228 = &PTR_FUN_149eda690;
      local_208 = CONCAT22(local_208._2_2_,uVar6);
      local_448 = local_448 & 0xffffff00;
      local_458 = (undefined *****)0x0;
      plStack_450 = (longlong *)0x0;
      local_468 = (undefined *****)0x0;
      plStack_460 = (longlong *)0x0;
      local_478 = (undefined *****)0x0;
      plStack_470 = (longlong *)0x0;
      lVar19 = (longlong)(int)local_288;
      if (0 < lVar19) {
        uVar31 = lVar19 + 1;
        lVar19 = lVar19 * 0x48;
        do {
          pplVar25 = local_290;
          if (local_290 == (longlong **)0x0) {
            pplVar25 = &plStack_3b0;
          }
          plVar29 = *(longlong **)((longlong)pplVar25 + lVar19 + -0x10);
          if (*(char *)((longlong)plVar29 + 0x3a) == '\x01') {
            pppppuVar27 = (undefined *****)((longlong)pplVar25 + lVar19 + -0x48);
            (**(code **)(*plVar29 + 0x140))(plVar29,&local_1c8,pppppuVar27,&local_228);
            local_1c8 = *(undefined ******)((longlong)pplVar25 + lVar19 + -0x10);
            plVar29 = *(longlong **)((longlong)pplVar25 + lVar19 + -8);
            if (plVar29 == (longlong *)0x0) {
              plVar28 = (longlong *)
                        CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
              if (plVar28 != (longlong *)0x0) {
                uStack_1c0 = 0;
                uStack_1be = 0;
                uStack_1bd = 0;
                uStack_1bc = 0;
LAB_1402c3cdb:
                LOCK();
                plVar29 = plVar28 + 1;
                *(int *)plVar29 = (int)*plVar29 + -1;
                UNLOCK();
                if ((int)*plVar29 == 0) {
                  (**(code **)*plVar28)(plVar28);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar28 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar16 = *piVar1;
                  UNLOCK();
joined_r0x0001402c3d08:
                  if (iVar16 == 0) {
                    (**(code **)(*plVar28 + 0x10))(plVar28);
                  }
                }
                goto LAB_1402c3d13;
              }
LAB_1402c3d2c:
              plVar29 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
              UNLOCK();
              plVar28 = (longlong *)
                        CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
              if (plVar29 == plVar28) {
                LOCK();
                plVar28 = plVar29 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*plVar29)(plVar29);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar29 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar16 = *piVar1;
                  UNLOCK();
                  plVar28 = plVar29;
                  goto joined_r0x0001402c3d08;
                }
LAB_1402c3d13:
                plVar29 = (longlong *)
                          CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
                if (plVar29 == (longlong *)0x0) goto LAB_1402c3d2c;
              }
              else {
                uStack_1c0 = (ushort)plVar29;
                uStack_1be = (undefined1)((ulonglong)plVar29 >> 0x10);
                uStack_1bd = (undefined1)((ulonglong)plVar29 >> 0x18);
                uStack_1bc = (undefined4)((ulonglong)plVar29 >> 0x20);
                if (plVar28 != (longlong *)0x0) goto LAB_1402c3cdb;
              }
              LOCK();
              *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
              UNLOCK();
            }
            plVar28 = plStack_470;
            local_478 = local_1c8;
            if (plStack_470 != (longlong *)0x0) {
              LOCK();
              plVar30 = plStack_470 + 1;
              *(int *)plVar30 = (int)*plVar30 + -1;
              UNLOCK();
              if ((int)*plVar30 == 0) {
                puVar12 = (undefined8 *)*plStack_470;
                plStack_470 = plVar29;
                (*(code *)*puVar12)(plVar28);
                LOCK();
                piVar1 = (int *)((longlong)plVar28 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar29 = plStack_470;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                  plVar29 = plStack_470;
                }
              }
            }
            plStack_470 = plVar29;
            plVar29 = plStack_460;
            param_4 = local_5e8;
            local_468 = (undefined *****)CONCAT44(uStack_1b4,uStack_1b8);
            if (plStack_1b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
              UNLOCK();
            }
            plStack_460 = plStack_1b0;
            if (plVar29 != (longlong *)0x0) {
              LOCK();
              plVar28 = plVar29 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plVar29)(plVar29);
                LOCK();
                piVar1 = (int *)((longlong)plVar29 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar29 + 0x10))(plVar29);
                }
              }
            }
            FUN_1414df504(&local_458,&local_1a8);
            local_448 = CONCAT31(local_448._1_3_,(undefined1)local_198);
            if ((int)uStack_1a0 == 0) {
LAB_1402c3c12:
              if (local_1a8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_1a8 != (undefined8 *)0x0) {
              (**(code **)*local_1a8)(local_1a8,0);
              FUN_1446efa72(&local_1a8,0,0,0x10);
              uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
              goto LAB_1402c3c12;
            }
            plVar29 = plStack_1b0;
            if (plStack_1b0 != (longlong *)0x0) {
              LOCK();
              plVar28 = plStack_1b0 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plStack_1b0)(plStack_1b0);
                LOCK();
                piVar1 = (int *)((longlong)plVar29 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar29 + 0x10))(plVar29);
                }
              }
            }
            plVar29 = (longlong *)
                      CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
            if (plVar29 != (longlong *)0x0) {
              LOCK();
              plVar28 = plVar29 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plVar29)(plVar29);
                LOCK();
                piVar1 = (int *)((longlong)plVar29 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar29 + 0x10))(plVar29);
                }
              }
            }
            plVar28 = local_5f0;
            if ((((char)local_448 != '\0') || (uVar31 == 2)) ||
               (pppppuVar27[7] == (undefined ****)CONCAT71(uStack_3ef,local_3f0))) {
              lVar19 = (longlong)(int)local_288;
              if (lVar19 < 1) break;
              uVar31 = CONCAT71((int7)((ulonglong)plVar29 >> 8),(byte)local_208);
              if ((local_448 & 0xff) == 4) {
                if ((local_458 == (undefined *****)0x0 || (int)plStack_450 == 0) ||
                   (cVar15 = (*(code *)(*local_458)[6])(), cVar15 == '\0')) {
LAB_1402c47b4:
                  local_1c8 = (undefined *****)0x0;
                  uVar22 = 0;
LAB_1402c47b8:
                  uStack_1c0 = 0;
                  uStack_1be = 0;
                  uStack_1bd = 0;
                  uStack_1bc = 0;
                  local_618 = (undefined *****)CONCAT71(local_618._1_7_,uVar22);
                  FUN_1428f4eb4(local_5f0,&local_3b8,&local_1c8,uStack_220._4_4_);
                  param_4 = local_5e8;
                  break;
                }
                pppppuVar27 = local_458;
                if ((int)plStack_450 == 0) {
                  pppppuVar27 = (undefined *****)0x0;
                }
                (*(code *)(*pppppuVar27)[0xb])(pppppuVar27,&local_1c8,uVar31 & 0xffffffff);
                plVar29 = (longlong *)
                          CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
                uVar22 = 1;
                plVar28 = local_5f0;
                param_4 = local_5e8;
LAB_1402c3e9b:
                uStack_1c0 = (ushort)plVar29;
                uStack_1be = (undefined1)((ulonglong)plVar29 >> 0x10);
                uStack_1bd = (undefined1)((ulonglong)plVar29 >> 0x18);
                uStack_1bc = (undefined4)((ulonglong)plVar29 >> 0x20);
                if (plVar29 == (longlong *)0x0) {
                  local_618 = (undefined *****)CONCAT71(local_618._1_7_,uVar22);
                  FUN_1428f4eb4(plVar28,&local_3b8,&local_1c8,uStack_220._4_4_);
                  break;
                }
                LOCK();
                *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                UNLOCK();
                local_618 = (undefined *****)CONCAT71(local_618._1_7_,uVar22);
              }
              else {
                if ((local_448 & 0xff) != 1) {
                  if (((byte)local_208 & 0xfe) == 4) {
                    FUN_1403d040a(&local_3d8,&local_3b8);
                    local_618 = pppppuVar27;
                    FUN_146949760(&local_3d8,&local_1c8,uVar31 & 0xffffffff,&local_478);
                    puVar26 = local_a0;
                    if (local_a0 == (ushort *)0x0) {
                      puVar26 = &uStack_1c0;
                    }
                    pppppuVar27 = *(undefined ******)
                                   (puVar26 + (longlong)((int)local_98 + -1) * 0x24 + 0x1c);
                    plVar29 = *(longlong **)(puVar26 + (longlong)((int)local_98 + -1) * 0x24 + 0x20)
                    ;
                    if (plVar29 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                      UNLOCK();
                    }
                    FUN_1447fa2ac(local_78,uStack_70 & 0xffffffff);
                    if (local_78 != 0) {
                      FUN_1400020a8();
                    }
                    plVar28 = plStack_80;
                    if (plStack_80 != (longlong *)0x0) {
                      LOCK();
                      plVar30 = plStack_80 + 1;
                      *(int *)plVar30 = (int)*plVar30 + -1;
                      UNLOCK();
                      if ((int)*plVar30 == 0) {
                        (**(code **)*plStack_80)(plStack_80);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar28 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar28 + 0x10))(plVar28);
                        }
                      }
                    }
                    puVar26 = &uStack_1c0;
                    if (local_a0 != (ushort *)0x0) {
                      puVar26 = local_a0;
                    }
                    FUN_1447157bd(puVar26,local_98 & 0xffffffff);
                    if (local_a0 != (ushort *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_3c0 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_3c0 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_3c0 + 0x10))();
                      }
                    }
                    FUN_1447de57f(local_3d8,local_3d0);
                    if (local_3d8 != 0) {
                      FUN_1400020a8();
                    }
                    uVar22 = 0;
                    local_1c8 = pppppuVar27;
                    plVar28 = local_5f0;
                    param_4 = local_5e8;
                  }
                  else {
                    pplVar25 = &plStack_3b0;
                    if (local_290 != (longlong **)0x0) {
                      pplVar25 = local_290;
                    }
                    FUN_1428668da(&local_3b8,&local_3d8);
                    local_608 = uStack_220._4_4_;
                    local_618 = (undefined *****)&local_478;
                    local_610 = pppppuVar27;
                    FUN_14101246a(*(undefined8 *)(local_3d8 + 0x520),&local_1c8,
                                  pplVar25 + lVar19 * 9 + -9,uVar31 & 0xffffffff);
                    pppppuVar27 = local_1c8;
                    param_4 = local_5e8;
                    plVar29 = (longlong *)
                              CONCAT44(uStack_1bc,
                                       CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
                    local_1c8 = (undefined *****)0x0;
                    if (plVar29 != (longlong *)0x0) {
                      uStack_1c0 = 0;
                      uStack_1be = 0;
                      uStack_1bd = 0;
                      uStack_1bc = 0;
                    }
                    plVar30 = (longlong *)CONCAT44(uStack_3cc,local_3d0);
                    if (plVar30 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = plVar30 + 1;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)*plVar14 == 0) {
                        (**(code **)*plVar30)(plVar30);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar30 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar30 + 0x10))(plVar30);
                        }
                      }
                    }
                    uVar22 = 0;
                    local_1c8 = pppppuVar27;
                  }
                  goto LAB_1402c3e9b;
                }
                if (((local_468 == (undefined *****)0x0) ||
                    (*(char *)((longlong)local_468 + 0x3a) != '\x01')) ||
                   (cVar15 = (*(code *)(*local_468)[0x32])(), cVar15 == '\0')) goto LAB_1402c47b4;
                if (plStack_460 == (longlong *)0x0) {
                  uVar22 = 1;
                  local_1c8 = local_468;
                  goto LAB_1402c47b8;
                }
                LOCK();
                *(int *)(plStack_460 + 1) = (int)plStack_460[1] + 1;
                UNLOCK();
                local_1c8 = local_468;
                uStack_1c0 = (ushort)plStack_460;
                uStack_1be = (undefined1)((ulonglong)plStack_460 >> 0x10);
                uStack_1bd = (undefined1)((ulonglong)plStack_460 >> 0x18);
                uStack_1bc = (undefined4)((ulonglong)plStack_460 >> 0x20);
                LOCK();
                *(int *)(plStack_460 + 1) = (int)plStack_460[1] + 1;
                UNLOCK();
                local_618 = (undefined *****)CONCAT71(local_618._1_7_,1);
                plVar28 = local_5f0;
                plVar29 = plStack_460;
              }
              FUN_1428f4eb4(plVar28,&local_3b8,&local_1c8,uStack_220._4_4_);
              param_4 = local_5e8;
              LOCK();
              plVar28 = plVar29 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plVar29)(plVar29);
                LOCK();
                piVar1 = (int *)((longlong)plVar29 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar29 + 0x10))(plVar29);
                }
              }
              break;
            }
          }
          uVar31 = uVar31 - 1;
          lVar19 = lVar19 + -0x48;
        } while (1 < uVar31);
      }
      param_3 = local_5c0;
      plVar29 = local_5d8;
      if ((int)plStack_450 == 0) {
LAB_1402c3f37:
        if (local_458 != (undefined *****)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_458 != (undefined *****)0x0) {
        (*(code *)**local_458)(local_458,0);
        FUN_1446efa72(&local_458,0,0,0x10);
        plStack_450 = (longlong *)((ulonglong)plStack_450 & 0xffffffff00000000);
        goto LAB_1402c3f37;
      }
      plVar28 = plStack_460;
      if (plStack_460 != (longlong *)0x0) {
        LOCK();
        plVar30 = plStack_460 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plStack_460)(plStack_460);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      plVar28 = plStack_470;
      param_1 = local_5f0;
      if (plStack_470 != (longlong *)0x0) {
        LOCK();
        plVar30 = plStack_470 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plStack_470)(plStack_470);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      plVar28 = local_3e8;
      if (local_3e8 != (longlong *)0x0) {
        LOCK();
        plVar30 = local_3e8 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*local_3e8)(local_3e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
    }
LAB_1402c3fc5:
    FUN_1447fa2ac(local_268,uStack_260 & 0xffffffff);
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    plVar28 = plStack_270;
    if (plStack_270 != (longlong *)0x0) {
      LOCK();
      plVar30 = plStack_270 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plStack_270)(plStack_270);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
    pplVar25 = local_290;
    if (local_290 == (longlong **)0x0) {
      pplVar25 = &plStack_3b0;
    }
    FUN_1447157bd(pplVar25,local_288 & 0xffffffff);
    if (local_290 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1402c4033:
  plVar28 = *(longlong **)(param_3 + 0x70);
  if (plVar28 != (longlong *)0x0) {
    iVar16 = (int)plVar28[1];
    do {
      if (iVar16 == 0) goto LAB_1402c4350;
      LOCK();
      iVar17 = (int)plVar28[1];
      bVar37 = iVar16 == iVar17;
      if (bVar37) {
        *(int *)(plVar28 + 1) = iVar16 + 1;
        iVar17 = iVar16;
      }
      iVar16 = iVar17;
      UNLOCK();
    } while (!bVar37);
    lVar19 = *(longlong *)(param_3 + 0x68);
    LOCK();
    plVar30 = plVar28 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
    if (lVar19 != 0) {
      puVar18 = param_4 + 8;
      if (*(undefined1 **)(param_4 + 0x128) != (undefined1 *)0x0) {
        puVar18 = *(undefined1 **)(param_4 + 0x128);
      }
      local_1c8 = *(undefined ******)(puVar18 + 0x38);
      plVar29 = *(longlong **)(puVar18 + 0x40);
      if (plVar29 == (longlong *)0x0) {
        uStack_1c0 = 0;
        uStack_1be = 0;
        uStack_1bd = 0;
        uStack_1bc = 0;
        FUN_1403d09a4(param_1,&local_3b8,param_5);
      }
      else {
        LOCK();
        *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
        UNLOCK();
        uStack_1c0 = (ushort)plVar29;
        uStack_1be = (undefined1)((ulonglong)plVar29 >> 0x10);
        uStack_1bd = (undefined1)((ulonglong)plVar29 >> 0x18);
        uStack_1bc = (undefined4)((ulonglong)plVar29 >> 0x20);
        LOCK();
        *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
        UNLOCK();
        FUN_1403d09a4(param_1,&local_3b8,param_5);
        if (plVar29 != (longlong *)0x0) {
          LOCK();
          plVar28 = plVar29 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plVar29)(plVar29);
            LOCK();
            piVar1 = (int *)((longlong)plVar29 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        LOCK();
        plVar28 = plVar29 + 1;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)*plVar28 == 0) {
          (**(code **)*plVar29)(plVar29);
          LOCK();
          piVar1 = (int *)((longlong)plVar29 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
          }
        }
      }
      uVar34 = local_360;
      pppppuVar27 = local_398;
      lVar19 = local_400;
      local_580 = *(undefined8 *)(param_3 + 0x88);
      local_578 = *(undefined8 *)(param_3 + 0x90);
      local_570 = *(longlong *)(param_3 + 0x98);
      if (local_570 != 0) {
        LOCK();
        *(int *)(local_570 + 8) = *(int *)(local_570 + 8) + 1;
        UNLOCK();
      }
      plVar28 = *(longlong **)(param_3 + 0x70);
      if (plVar28 == (longlong *)0x0) {
LAB_1402c426a:
        local_598 = 0;
        plStack_590 = (longlong *)0x0;
        FUN_140d95bee(param_4,&local_1c8);
        local_618 = pppppuVar27;
        FUN_140cbe54c(lVar19,&local_1c8,uVar34,&local_580);
        FUN_1447fa2ac(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        plVar28 = plStack_80;
        plVar29 = local_5d8;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar30 = plStack_80 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
            }
          }
        }
        puVar26 = local_a0;
        if (local_a0 == (ushort *)0x0) {
          puVar26 = &uStack_1c0;
        }
        FUN_1447157bd(puVar26,local_98 & 0xffffffff);
        if (local_a0 != (ushort *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar16 = (int)plVar28[1];
        do {
          if (iVar16 == 0) goto LAB_1402c426a;
          LOCK();
          iVar17 = (int)plVar28[1];
          bVar37 = iVar16 == iVar17;
          if (bVar37) {
            *(int *)(plVar28 + 1) = iVar16 + 1;
            iVar17 = iVar16;
          }
          iVar16 = iVar17;
          UNLOCK();
        } while (!bVar37);
        local_598 = *(undefined8 *)(param_3 + 0x68);
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        plStack_590 = plVar28;
        FUN_140d95bee(param_4,&local_1c8);
        local_618 = pppppuVar27;
        FUN_140cbe54c(lVar19,&local_1c8,uVar34,&local_580);
        FUN_1447fa2ac(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        plVar30 = plStack_80;
        plVar29 = local_5d8;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_80 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
        puVar26 = local_a0;
        if (local_a0 == (ushort *)0x0) {
          puVar26 = &uStack_1c0;
        }
        FUN_1447157bd(puVar26,local_98 & 0xffffffff);
        if (local_a0 != (ushort *)0x0) {
          FUN_1400020a8();
        }
        LOCK();
        plVar30 = plVar28 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      plVar28 = local_368;
      local_3b8 = (undefined *****)&PTR_FUN_149eda650;
      if (local_368 != (longlong *)0x0) {
        LOCK();
        plVar30 = local_368 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*local_368)(local_368);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
    }
  }
LAB_1402c4350:
  local_1c8 = (undefined *****)0x0;
  plVar28 = *(longlong **)(param_3 + 0x50);
  uStack_1c0 = (ushort)plVar28;
  uStack_1be = (undefined1)((ulonglong)plVar28 >> 0x10);
  uStack_1bd = (undefined1)((ulonglong)plVar28 >> 0x18);
  uStack_1bc = (undefined4)((ulonglong)plVar28 >> 0x20);
  bVar37 = true;
  if (plVar28 != (longlong *)0x0) {
    iVar16 = (int)plVar28[1];
    do {
      if (iVar16 == 0) {
        uStack_1c0 = 0;
        uStack_1be = 0;
        uStack_1bd = 0;
        uStack_1bc = 0;
        goto LAB_1402c43ad;
      }
      LOCK();
      iVar17 = (int)plVar28[1];
      bVar38 = iVar16 == iVar17;
      if (bVar38) {
        *(int *)(plVar28 + 1) = iVar16 + 1;
        iVar17 = iVar16;
      }
      iVar16 = iVar17;
      UNLOCK();
    } while (!bVar38);
    if (plVar28 != (longlong *)0x0) {
      local_1c8 = *(undefined ******)(param_3 + 0x48);
      bVar37 = false;
      goto LAB_1402c43af;
    }
  }
LAB_1402c43ad:
  plVar28 = (longlong *)0x0;
LAB_1402c43af:
  uVar7 = *(uint *)(param_3 + 0xb4);
  uVar13 = (undefined3)(uVar7 >> 8);
  if ((local_1c8 != (undefined *****)0x0 & (byte)uVar7 >> 1) == 1) {
    if ((uVar7 & 8) == 0) {
      uVar22 = *(undefined1 *)(param_3 + 0xb0);
      local_3b8 = local_1c8;
      if (!bVar37) {
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
      }
      plStack_3b0 = plVar28;
      FUN_1410a3cc2(local_400,&local_3b8,CONCAT31(uVar13,uVar22));
      if (plVar28 != (longlong *)0x0) {
        LOCK();
        plVar30 = plVar28 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      plVar28 = (longlong *)
                CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT12(uStack_1be,uStack_1c0)));
    }
    else {
      FUN_145cd1400(param_1,&local_1c8,CONCAT31(uVar13,*(undefined1 *)(param_3 + 0xb0)));
    }
  }
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar30 = plVar28 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  plVar28 = local_3f8;
  if (local_3f8 != (longlong *)0x0) {
    LOCK();
    plVar30 = local_3f8 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*local_3f8)(local_3f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    plVar28 = plVar29 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plVar29)(plVar29);
      LOCK();
      piVar1 = (int *)((longlong)plVar29 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402c4aee FUN_1402c4aee body=706 status=ok
// SIG undefined FUN_1402c4aee(void)

undefined4 FUN_1402c4aee(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined1 *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  iVar9 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar9 == 0) {
    uVar3 = 0;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0xa0);
    lVar10 = 0;
    do {
      uVar3 = (*(code *)*param_2)(param_2[1],*(undefined8 *)(lVar8 + lVar10));
      if ((char)uVar3 != '\0') break;
      bVar11 = (longlong)iVar9 * 0x10 + -0x10 != lVar10;
      lVar10 = lVar10 + 0x10;
    } while (bVar11);
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0xc0);
  if (0 < (longlong)uVar7) {
    local_98 = param_1 + 0xa0;
    lVar8 = param_1 + 0x80;
    do {
      local_a0 = uVar7 - 1;
      lVar10 = local_a0 * 0x10 + *(longlong *)(param_1 + 0xb8);
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar8;
      if (*(int *)(param_1 + 0x90) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_144a81a4c(&local_68);
        iVar9 = *(int *)(param_1 + 0x90);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar2 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_78._4_4_;
      local_90 = param_1;
      if ((local_78._4_4_ != iVar9) || (local_78 = uVar2, uStack_60 != lVar8)) {
        do {
          local_78 = uVar2;
          lVar6 = *(longlong *)(local_90 + 0x70);
          if (*(longlong *)(local_90 + 0x70) == 0) {
            lVar6 = local_90;
          }
          local_68 = lVar10;
          FUN_145a38772((longlong)iVar4 * 0x10 + lVar6,&local_68);
          local_68 = lVar10;
          FUN_145a38772(local_98,&local_68);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_144a81a4c(&local_88);
          iVar4 = local_78._4_4_;
          uVar2 = local_78;
        } while (local_90 != param_1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar8 || local_78._4_4_ != iVar9));
      }
      bVar11 = 1 < (longlong)uVar7;
      uVar7 = local_a0;
    } while (bVar11);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0xc0);
  }
  iVar9 = *(int *)(param_1 + 0xc4);
  FUN_1402c4db1(*(undefined8 *)(param_1 + 0xb8),uVar7 & 0xffffffff);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    FUN_1469b6d70(param_1 + 0xb8);
  }
  lVar8 = *(longlong *)(param_1 + 200);
  uVar5 = 0;
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0xd0) * 0x18;
    do {
      FUN_1456d49be(param_1,lVar8);
      lVar8 = lVar8 + 0x18;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    uVar5 = *(undefined4 *)(param_1 + 0xd0);
    lVar8 = *(longlong *)(param_1 + 200);
  }
  iVar9 = *(int *)(param_1 + 0xd4);
  FUN_1402c4dfe(lVar8,uVar5);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0xd4) != 0)) {
    FUN_1469b6eda(param_1 + 200);
  }
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1402c4db1 FUN_1402c4db1 body=77 status=ok
// SIG undefined FUN_1402c4db1(void)

void FUN_1402c4db1(longlong param_1,int param_2)

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



// FUNCTION 1402c4dfe FUN_1402c4dfe body=77 status=ok
// SIG undefined FUN_1402c4dfe(void)

void FUN_1402c4dfe(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402c4e4c FUN_1402c4e4c body=202 status=ok
// SIG undefined FUN_1402c4e4c(void)

undefined8 *
FUN_1402c4e4c(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined1 *)FUN_14001cc68(0x160,0x10);
  *puVar1 = DAT_14c96b238;
  *(undefined8 *)(puVar1 + 0x128) = 0;
  *(undefined8 *)(puVar1 + 0x130) = 0x400000000;
  puVar1[0x138] = 0;
  *(undefined8 *)(puVar1 + 0x150) = 0;
  *(undefined8 *)(puVar1 + 0x158) = 0;
  *(undefined8 *)(puVar1 + 0x140) = 0;
  *(undefined8 *)(puVar1 + 0x148) = 0;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149eda560;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  FUN_1404dd558(param_1,puVar1,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1402c4f16 FUN_1402c4f16 body=2626 status=ok
// SIG undefined FUN_1402c4f16(void)

void FUN_1402c4f16(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int *local_98;
  longlong *local_90;
  uint *local_88;
  int local_7c;
  longlong local_78;
  longlong *local_70;
  int *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (**(longlong **)(param_1 + 0x108) != 0) {
    local_90 = (longlong *)(param_1 + 0x50);
    local_a0 = param_1;
    do {
      plVar1 = *(longlong **)(**(longlong **)(param_1 + 0x108) + 8);
      if (param_2 < (int)plVar1[0x14]) break;
      local_88 = (uint *)(plVar1 + 2);
      iVar3 = (int)plVar1[5];
      local_7c = param_2;
      if (iVar3 == 0) {
        uVar13 = 1;
        uVar19 = 0;
        iVar18 = 0;
        iVar11 = 0;
      }
      else {
        puVar17 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar17 = local_88;
        }
        uVar14 = *puVar17;
        if (uVar14 == 0) {
          iVar18 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar18 = iVar3 + -1;
          }
          uVar19 = 0;
          uVar20 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar20 = uVar19;
          }
          iVar18 = 0;
          do {
            if (uVar20 == uVar19) goto LAB_1402c518e;
            iVar18 = iVar18 + 0x20;
            uVar14 = puVar17[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar19 = 0;
          iVar18 = 0;
        }
        uVar13 = (ulonglong)(-uVar14 & uVar14);
        uVar20 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar11 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar11) {
          iVar11 = iVar3;
        }
      }
      if (iVar11 != iVar3) {
        uVar14 = 0xffffffff;
        do {
          puVar17 = (uint *)((longlong)iVar11 * 0x20 + *plVar1);
          if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
            lVar15 = param_1 + 0x88;
            lVar16 = *(longlong *)(param_1 + 0x90);
            if (*(longlong *)(param_1 + 0x90) == 0) {
              lVar16 = lVar15;
            }
            iVar11 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & *puVar17) * 4);
            if (iVar11 != -1) {
              do {
                if (*(uint *)(*local_90 + (longlong)iVar11 * 0x20) == *puVar17) {
                  local_78 = lVar15;
                  if ((longlong)(int)puVar17[4] != 0) {
                    local_98 = *(int **)(puVar17 + 2);
                    local_68 = local_98 + (int)puVar17[4];
                    do {
                      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                        lVar15 = *(longlong *)(local_a0 + 0x90);
                        if (*(longlong *)(local_a0 + 0x90) == 0) {
                          lVar15 = local_78;
                        }
                        iVar11 = *(int *)(lVar15 + (ulonglong)
                                                   (*(int *)(local_a0 + 0x98) - 1U & *puVar17) * 4);
                        if (iVar11 != -1) {
                          do {
                            lVar15 = *local_90 + (longlong)iVar11 * 0x20;
                            if (*(uint *)(*local_90 + (longlong)iVar11 * 0x20) == *puVar17)
                            goto LAB_1402c5812;
                            iVar11 = *(int *)(lVar15 + 0x18);
                          } while (iVar11 != -1);
                        }
                      }
                      lVar15 = 0;
LAB_1402c5812:
                      if ((longlong)*(int *)(lVar15 + 0x10) != 0) {
                        lVar16 = 0;
                        do {
                          if (*(int *)(*(longlong *)(lVar15 + 8) + lVar16) == *local_98)
                          goto LAB_1402c587d;
                          lVar16 = lVar16 + 4;
                        } while ((longlong)*(int *)(lVar15 + 0x10) * 4 != lVar16);
                      }
                      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                        lVar15 = *(longlong *)(local_a0 + 0x90);
                        if (*(longlong *)(local_a0 + 0x90) == 0) {
                          lVar15 = local_78;
                        }
                        iVar11 = *(int *)(lVar15 + (ulonglong)
                                                   (*(int *)(local_a0 + 0x98) - 1U & *puVar17) * 4);
                        if (iVar11 != -1) {
                          do {
                            lVar15 = *local_90 + (longlong)iVar11 * 0x20;
                            if (*(uint *)(*local_90 + (longlong)iVar11 * 0x20) == *puVar17)
                            goto LAB_1402c5847;
                            iVar11 = *(int *)(lVar15 + 0x18);
                          } while (iVar11 != -1);
                        }
                      }
                      lVar15 = 0;
LAB_1402c5847:
                      local_70 = (longlong *)(lVar15 + 8);
                      iVar11 = *(int *)(lVar15 + 0x10);
                      *(uint *)(lVar15 + 0x10) = iVar11 + 1U;
                      if (*(uint *)(lVar15 + 0x14) < iVar11 + 1U) {
                        FUN_140543018(local_70,iVar11);
                      }
                      *(int *)(*local_70 + (longlong)iVar11 * 4) = *local_98;
LAB_1402c587d:
                      local_98 = local_98 + 1;
                      param_1 = local_a0;
                    } while (local_98 != local_68);
                  }
                  goto LAB_1402c5041;
                }
                iVar11 = *(int *)((longlong)iVar11 * 0x20 + *local_90 + 0x18);
              } while (iVar11 != -1);
            }
          }
          local_58 = puVar17 + 2;
          local_60 = puVar17;
          FUN_1402c5e66(local_90,local_4c,&local_60,0);
LAB_1402c5041:
          uVar14 = uVar14 & ~(uint)uVar13;
          puVar17 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar17 = local_88;
          }
          iVar8 = (int)plVar1[5];
          iVar11 = (int)uVar19;
          lVar15 = (longlong)iVar11;
          uVar10 = puVar17[lVar15] & uVar14;
          if (uVar10 == 0) {
            iVar6 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar6 = iVar8 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar11) {
              iVar7 = iVar11;
            }
            if (iVar11 < iVar6) {
              lVar16 = 0;
              do {
                uVar10 = puVar17[lVar15 + lVar16 + 1];
                if (uVar10 != 0) {
                  uVar19 = (ulonglong)(iVar11 + (int)lVar16 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1402c50ad;
                }
                iVar18 = iVar18 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar7 - lVar15 != lVar16);
              uVar14 = 0xffffffff;
              iVar11 = iVar7;
            }
            uVar19 = (ulonglong)(iVar11 + 1);
            param_1 = local_a0;
            iVar11 = iVar8;
          }
          else {
LAB_1402c50ad:
            uVar13 = (ulonglong)(-uVar10 & uVar10);
            uVar20 = uVar13 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar11 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar8 <= iVar11) {
              iVar11 = iVar8;
            }
          }
        } while (iVar11 != iVar3);
      }
LAB_1402c518e:
      iVar3 = (int)plVar1[0xf];
      if (iVar3 == 0) {
        uVar20 = 1;
        uVar19 = 0;
        iVar18 = 0;
        iVar11 = 0;
      }
      else {
        puVar17 = (uint *)plVar1[0xe];
        if ((uint *)plVar1[0xe] == (uint *)0x0) {
          puVar17 = (uint *)(plVar1 + 0xc);
        }
        uVar14 = *puVar17;
        if (uVar14 == 0) {
          iVar18 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar18 = iVar3 + -1;
          }
          uVar19 = 0;
          uVar20 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar20 = uVar19;
          }
          iVar11 = 0;
          do {
            if (uVar20 == uVar19) goto LAB_1402c52eb;
            iVar11 = iVar11 + 0x20;
            uVar14 = puVar17[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar19 = 0;
          iVar11 = 0;
        }
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar13 = uVar20 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar18 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar18) {
          iVar18 = iVar3;
        }
      }
      if (iVar18 != iVar3) {
        lVar15 = local_a0 + 0xa0;
        uVar14 = 0xffffffff;
        do {
          FUN_1402c595a(lVar15,&local_60,(longlong)iVar18 * 0xc + plVar1[10],0);
          uVar14 = ~(uint)uVar20 & uVar14;
          puVar17 = (uint *)plVar1[0xe];
          if ((uint *)plVar1[0xe] == (uint *)0x0) {
            puVar17 = (uint *)(plVar1 + 0xc);
          }
          iVar8 = (int)plVar1[0xf];
          iVar18 = (int)uVar19;
          lVar16 = (longlong)iVar18;
          uVar10 = puVar17[lVar16] & uVar14;
          if (uVar10 == 0) {
            iVar6 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar6 = iVar8 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar18) {
              iVar7 = iVar18;
            }
            if (iVar18 < iVar6) {
              lVar12 = 0;
              do {
                uVar10 = puVar17[lVar16 + lVar12 + 1];
                if (uVar10 != 0) {
                  uVar19 = (ulonglong)(iVar18 + (int)lVar12 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1402c52b5;
                }
                iVar11 = iVar11 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar7 - lVar16 != lVar12);
              uVar14 = 0xffffffff;
              lVar16 = (longlong)iVar7;
            }
            uVar19 = lVar16 + 1U & 0xffffffff;
            iVar18 = iVar8;
          }
          else {
LAB_1402c52b5:
            uVar20 = (ulonglong)(-uVar10 & uVar10);
            uVar13 = uVar20 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar18 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar8 <= iVar18) {
              iVar18 = iVar8;
            }
          }
        } while (iVar18 != iVar3);
      }
LAB_1402c52eb:
      param_1 = local_a0;
      lVar15 = **(longlong **)(local_a0 + 0x108);
      if (lVar15 != 0) {
        lVar16 = *(longlong *)(local_a0 + 0x108);
        *(longlong *)(local_a0 + 0x108) = lVar15;
        *(undefined8 *)(lVar15 + 8) = 0;
        if (lVar16 != 0) {
          FUN_1400020a8();
        }
      }
      puVar17 = local_88;
      lVar15 = local_a0;
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar3 = (int)plVar1[9];
        iVar18 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar18 = iVar3;
        }
        if ((int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34) < iVar18 >> 2) {
          iVar3 = (int)plVar1[5];
          if (iVar3 == 0) {
            uVar19 = 0;
            uVar20 = 1;
            iVar18 = 0;
            iVar11 = 0;
          }
          else {
            puVar9 = (uint *)plVar1[4];
            if ((uint *)plVar1[4] == (uint *)0x0) {
              puVar9 = local_88;
            }
            uVar14 = *puVar9;
            if (uVar14 == 0) {
              iVar18 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar18 = iVar3 + -1;
              }
              uVar19 = 0;
              uVar10 = iVar18 >> 5;
              if (iVar18 >> 5 < 1) {
                uVar10 = 0;
              }
              iVar11 = 0;
              do {
                if (uVar10 == uVar19) goto LAB_1402c5555;
                iVar11 = iVar11 + 0x20;
                uVar14 = puVar9[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar14 == 0);
            }
            else {
              uVar19 = 0;
              iVar11 = 0;
            }
            uVar20 = (ulonglong)(-uVar14 & uVar14);
            uVar13 = uVar20 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar18 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar18) {
              iVar18 = iVar3;
            }
          }
          if (iVar18 != iVar3) {
            uVar14 = 0xffffffff;
            do {
              *(undefined4 *)
               ((longlong)plVar5 + (longlong)*(int *)(*plVar1 + 0x1c + (longlong)iVar18 * 0x20) * 4)
                   = 0xffffffff;
              uVar14 = ~(uint)uVar20 & uVar14;
              puVar9 = (uint *)plVar1[4];
              if ((uint *)plVar1[4] == (uint *)0x0) {
                puVar9 = local_88;
              }
              iVar8 = (int)plVar1[5];
              iVar18 = (int)uVar19;
              lVar16 = (longlong)iVar18;
              uVar10 = puVar9[lVar16] & uVar14;
              if (uVar10 == 0) {
                iVar6 = iVar8 + 0x1e;
                if (-1 < iVar8 + -1) {
                  iVar6 = iVar8 + -1;
                }
                iVar6 = iVar6 >> 5;
                iVar11 = iVar11 + 0x20;
                iVar7 = iVar6;
                if (iVar6 < iVar18) {
                  iVar7 = iVar18;
                }
                if (iVar18 < iVar6) {
                  lVar12 = 0;
                  do {
                    uVar10 = puVar9[lVar16 + lVar12 + 1];
                    if (uVar10 != 0) {
                      uVar19 = (ulonglong)(iVar18 + (int)lVar12 + 1);
                      uVar14 = 0xffffffff;
                      goto LAB_1402c5520;
                    }
                    iVar11 = iVar11 + 0x20;
                    lVar12 = lVar12 + 1;
                  } while (iVar7 - lVar16 != lVar12);
                  uVar14 = 0xffffffff;
                  lVar16 = (longlong)iVar7;
                }
                uVar19 = lVar16 + 1U & 0xffffffff;
                iVar18 = iVar8;
              }
              else {
LAB_1402c5520:
                uVar20 = (ulonglong)(-uVar10 & uVar10);
                uVar13 = uVar20 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                iVar18 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if (iVar8 <= iVar18) {
                  iVar18 = iVar8;
                }
              }
            } while (iVar18 != iVar3);
          }
        }
        else if (0 < iVar3) {
          lVar16 = 0;
          do {
            *(undefined4 *)((longlong)plVar5 + lVar16 * 4) = 0xffffffff;
            lVar16 = lVar16 + 1;
          } while (lVar16 < (int)plVar1[9]);
        }
LAB_1402c5555:
        iVar3 = (int)plVar1[5];
        if (iVar3 == 0) {
          uVar19 = 0;
          uVar20 = 1;
          iVar18 = 0;
          iVar11 = 0;
        }
        else {
          puVar9 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar9 = local_88;
          }
          uVar14 = *puVar9;
          if (uVar14 == 0) {
            iVar18 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar18 = iVar3 + -1;
            }
            uVar19 = 0;
            uVar20 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar20 = uVar19;
            }
            iVar11 = 0;
            do {
              if (uVar20 == uVar19) goto LAB_1402c5689;
              iVar11 = iVar11 + 0x20;
              uVar14 = puVar9[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar19 = 0;
            iVar11 = 0;
          }
          uVar20 = (ulonglong)(-uVar14 & uVar14);
          uVar13 = uVar20 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar18 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar18) {
            iVar18 = iVar3;
          }
        }
        if (iVar18 < iVar3) {
          uVar14 = 0xffffffff;
          do {
            if (*(longlong *)(*plVar1 + 8 + (longlong)iVar18 * 0x20) != 0) {
              FUN_1400020a8();
              iVar3 = (int)plVar1[5];
            }
            uVar14 = uVar14 & ~(uint)uVar20;
            puVar9 = (uint *)plVar1[4];
            if ((uint *)plVar1[4] == (uint *)0x0) {
              puVar9 = puVar17;
            }
            iVar18 = (int)uVar19;
            lVar16 = (longlong)iVar18;
            uVar10 = puVar9[lVar16] & uVar14;
            if (uVar10 == 0) {
              iVar8 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar8 = iVar3 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar6 = iVar8;
              if (iVar8 < iVar18) {
                iVar6 = iVar18;
              }
              if (iVar8 <= iVar18) break;
              lVar12 = 0;
              while( true ) {
                iVar11 = iVar11 + 0x20;
                uVar10 = puVar9[lVar16 + lVar12 + 1];
                if (uVar10 != 0) break;
                lVar12 = lVar12 + 1;
                if (iVar6 - lVar16 == lVar12) goto LAB_1402c5689;
              }
              uVar19 = (ulonglong)(iVar18 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
            }
            uVar20 = (ulonglong)(-uVar10 & uVar10);
            uVar13 = uVar20 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar18 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          } while (iVar18 < iVar3);
        }
LAB_1402c5689:
        *(undefined4 *)(plVar1 + 1) = 0;
        if (*(int *)((longlong)plVar1 + 0xc) < 0) {
          FUN_1446f4a44(plVar1,0);
        }
        plVar1[6] = 0xffffffff;
        *(undefined4 *)(plVar1 + 5) = 0;
        param_1 = lVar15;
      }
      if ((int)plVar1[0xb] != *(int *)((longlong)plVar1 + 0x84)) {
        FUN_1402c63d2(plVar1 + 10);
        *(undefined4 *)(plVar1 + 0xb) = 0;
        if (*(int *)((longlong)plVar1 + 0x5c) < 0) {
          FUN_1447a08a2(plVar1 + 10,0);
        }
        plVar1[0x10] = 0xffffffff;
        *(undefined4 *)(plVar1 + 0xf) = 0;
      }
      *(undefined4 *)(plVar1 + 0x14) = 0xffffffff;
      puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar4 = 0;
      puVar4[1] = plVar1;
      if (puVar4 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(param_1 + 0x110);
        *(undefined8 **)(param_1 + 0x110) = puVar4;
        *puVar2 = puVar4;
      }
      param_2 = local_7c;
    } while (**(longlong **)(param_1 + 0x108) != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c595a FUN_1402c595a body=297 status=ok
// SIG undefined FUN_1402c595a(void)

undefined4 * FUN_1402c595a(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

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
  FUN_1402c5b10(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  local_48[1] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_1402c5a84(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      local_48[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1402c65b4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c5a84 FUN_1402c5a84 body=140 status=ok
// SIG undefined FUN_1402c5a84(void)

void FUN_1402c5a84(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  uVar1 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar1 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 == -1) {
      uVar1 = 0;
    }
    else {
      do {
        if (*(int *)(*param_1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_1402c5ddc(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
        uVar1 = 0;
      } while (iVar3 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1402c5b10 FUN_1402c5b10 body=716 status=ok
// SIG undefined FUN_1402c5b10(void)

int * FUN_1402c5b10(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447cc1b4(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402c5d07;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1402c5d07:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0xc);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0xc) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1402c5ddc FUN_1402c5ddc body=138 status=ok
// SIG undefined FUN_1402c5ddc(void)

void FUN_1402c5ddc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402c5e66 FUN_1402c5e66 body=290 status=ok
// SIG undefined FUN_1402c5e66(void)

undefined4 *
FUN_1402c5e66(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1402c61f0(param_1,local_50);
  FUN_1402c5f8a(param_3,local_48);
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  local_68 = param_4;
  cVar1 = FUN_1402c5ff4(param_1,uVar3,local_48);
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
      FUN_1402c6826(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c5f8a FUN_1402c5f8a body=106 status=ok
// SIG undefined FUN_1402c5f8a(void)

undefined4 * FUN_1402c5f8a(undefined8 *param_1,undefined4 *param_2)

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
    FUN_1402c60b2(param_2 + 2,iVar1,0);
    memcpy(*(void **)(param_2 + 2),_Src,(longlong)iVar1 << 2);
  }
  return param_2;
}



// FUNCTION 1402c5ff4 FUN_1402c5ff4 body=189 status=ok
// SIG undefined FUN_1402c5ff4(void)

void FUN_1402c5ff4(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_140542a02(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1402c603e;
    }
  }
  uVar6 = 0;
LAB_1402c603e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1402c60b2 FUN_1402c60b2 body=317 status=ok
// SIG undefined FUN_1402c60b2(void)

void FUN_1402c60b2(longlong param_1,int param_2,int param_3)

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
    uVar5 = (longlong)param_2 * 4;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402c6120;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1402c6120:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402c61f0 FUN_1402c61f0 body=482 status=ok
// SIG undefined FUN_1402c61f0(void)

int * FUN_1402c61f0(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1402c63d2 FUN_1402c63d2 body=481 status=ok
// SIG undefined FUN_1402c63d2(void)

void FUN_1402c63d2(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar11 = 0;
      uVar13 = 1;
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 8 + (longlong)iVar8 * 0xc) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_1402c651b;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_1402c651b:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 1402c65b4 FUN_1402c65b4 body=625 status=ok
// SIG undefined FUN_1402c65b4(void)

void FUN_1402c65b4(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402c6626;
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
LAB_1402c6626:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0xc);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 8 + lVar12 * 0xc) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 4 + lVar12 * 0xc) =
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



// FUNCTION 1402c6826 FUN_1402c6826 body=628 status=ok
// SIG undefined FUN_1402c6826(void)

void FUN_1402c6826(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402c6898;
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
LAB_1402c6898:
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
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
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



// FUNCTION 1402c6a9a FUN_1402c6a9a body=164 status=ok
// SIG undefined FUN_1402c6a9a(void)

undefined8 * FUN_1402c6a9a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14aa92ae0;
  if (param_1[0x48] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x48] + 0x2e8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) {
      FUN_14493dc94(param_1[0x48]);
    }
  }
  param_1[0x48] = 0;
  FUN_1402c6b3e(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_14476820c(param_1 + 0x3f);
  FUN_140137a98(param_1 + 0x29);
  FUN_1402c6bbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402c6b3e FUN_1402c6b3e body=128 status=ok
// SIG undefined FUN_1402c6b3e(void)

void FUN_1402c6b3e(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x48;
    do {
      FUN_1401d38ec(param_1);
      FUN_1401d38b5(*(undefined8 *)(param_1 + -0x20),*(undefined4 *)(param_1 + -0x18));
      if (*(longlong *)(param_1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_1448d20d1(*(undefined8 *)(param_1 + -0x30),*(undefined4 *)(param_1 + -0x28));
      if (*(longlong *)(param_1 + -0x30) != 0) {
        FUN_1400020a8();
      }
      puVar2 = *(undefined8 **)(param_1 + -0x38);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      param_1 = param_1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402c6bbe FUN_1402c6bbe body=255 status=ok
// SIG undefined FUN_1402c6bbe(void)

void FUN_1402c6bbe(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14aa92510;
  if (param_1[0x24] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x24] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x21] != 0 && (param_1[0x21] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1401be7ff(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1402c6cbd(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1402c6cbd FUN_1402c6cbd body=45 status=ok
// SIG undefined FUN_1402c6cbd(void)

void FUN_1402c6cbd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1402c6cea FUN_1402c6cea body=331 status=ok
// SIG undefined FUN_1402c6cea(void)

void FUN_1402c6cea(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x104 + (longlong)iVar4 * 0x110) * 4) =
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



// FUNCTION 1402c6e36 FUN_1402c6e36 body=444 status=ok
// SIG undefined FUN_1402c6e36(void)

void FUN_1402c6e36(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) goto LAB_1402c6f8d;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x20 + (longlong)iVar3 * 0x110) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar3 * 0x110 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar3 = (int)uVar9;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) goto LAB_1402c6f8d;
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1402c6f8d:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403c5a5e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 1402c6ff2 FUN_1402c6ff2 body=361 status=ok
// SIG undefined FUN_1402c6ff2(void)

void FUN_1402c6ff2(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = DAT_14cb07dd8;
  if ((int)DAT_14cb07dd8 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cb07ddc == 0) {
    uVar3 = 4;
    if (4 < DAT_14cb07dd8) {
      uVar3 = DAT_14cb07dd8;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)DAT_14cb07dd8 * 3) >> 3) + (longlong)(int)DAT_14cb07dd8 +
            0x10;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402c7079;
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
LAB_1402c7079:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  DAT_14cb07ddc = (int)uVar7;
  FUN_1446f8d3c(&DAT_14cb07dd0,param_1,uVar7,8,8);
  return;
}



// FUNCTION 1402c715c FUN_1402c715c body=391 status=ok
// SIG undefined FUN_1402c715c(void)

undefined8 * FUN_1402c715c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa97a10;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c59fe(param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c60ae(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c61e6(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c60e6(param_1 + 0xb);
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402c72e4 FUN_1402c72e4 body=29 status=ok
// SIG undefined FUN_1402c72e4(void)

void FUN_1402c72e4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1402c7302 FUN_1402c7302 body=64 status=ok
// SIG undefined FUN_1402c7302(void)

undefined8 * FUN_1402c7302(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a391de0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402c7342 FUN_1402c7342 body=124 status=ok
// SIG undefined FUN_1402c7342(void)

void FUN_1402c7342(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_14493e13a();
    if (*(char *)(param_1 + 0x220) == '\x01') {
      cVar1 = '\x02' - (*(float *)(param_1 + 0x2cc) < 0.99999);
    }
    else {
      cVar1 = (1e-05 < *(float *)(param_1 + 0x2cc)) * '\x03';
    }
    *(char *)(param_2 + 0x4c) = cVar1;
    lVar2 = FUN_14493e20e(param_1);
    if (lVar2 != 0) {
      FUN_1402c73be(param_2 + 0x20,lVar2 + 0x118);
      return;
    }
  }
  return;
}



// FUNCTION 1402c73be FUN_1402c73be body=93 status=ok
// SIG undefined FUN_1402c73be(void)

undefined8 * FUN_1402c73be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1402c741b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1402c76ca(param_1,iVar1);
      FUN_1402c75d7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1402c741b FUN_1402c741b body=57 status=ok
// SIG undefined FUN_1402c741b(void)

void FUN_1402c741b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x98;
    do {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1402c7646(param_1);
      }
      param_1 = param_1 + 0xf8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402c7454 FUN_1402c7454 body=133 status=ok
// SIG undefined FUN_1402c7454(void)

int FUN_1402c7454(longlong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar5 = (param_2 & bVar1 & 1) + (((param_2 & bVar1) >> 1 & 1) != 0);
  iVar6 = 0;
  if ((*(int *)(param_1 + 8) != 0) && (bVar5 != 0)) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar2 = 0;
      if ((bVar1 & 1) != 0) {
        uVar2 = *(char *)(param_1 + 0x11) == '\x01' | 6;
      }
      uVar4 = uVar2 + 6;
      if ((bVar1 & 2) == 0) {
        uVar4 = uVar2;
      }
    }
    uVar2 = (*(int *)(param_1 + 8) - uVar4) / (uint)bVar5;
    uVar3 = uVar2;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0;
    }
    if ((bVar1 & 2) == 0) {
      uVar2 = 0;
    }
    iVar6 = uVar2 + uVar4 + uVar3;
  }
  return iVar6;
}



// FUNCTION 1402c74da FUN_1402c74da body=163 status=ok
// SIG undefined FUN_1402c74da(void)

longlong FUN_1402c74da(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined8 *local_480;
  undefined1 *local_478;
  int local_46c;
  undefined1 local_468 [1088];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_488 = param_2;
  FUN_1402c7fd8(local_468,param_3);
  local_480 = &local_488;
  local_478 = local_468;
  FUN_1402c7ab2(param_1 + 0x10,&local_46c,&local_480,0);
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_1403c51be(local_468);
  if ((local_28 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return lVar1 + (longlong)local_46c * 0x460 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c757e FUN_1402c757e body=89 status=ok
// SIG undefined FUN_1402c757e(void)

undefined8 * FUN_1402c757e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1402c79c8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
    }
  }
  return param_1;
}



// FUNCTION 1402c75d7 FUN_1402c75d7 body=110 status=ok
// SIG undefined FUN_1402c75d7(void)

void FUN_1402c75d7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1402c781e(param_1,param_2);
      puVar2 = (undefined8 *)(param_2 + 0xa8);
      puVar3 = (undefined8 *)(param_1 + 0xa8);
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_1 = param_1 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402c7646 FUN_1402c7646 body=132 status=ok
// SIG undefined FUN_1402c7646(void)

void FUN_1402c7646(longlong *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar1 = (int *)param_1[2];
  if (*piVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402c7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    return;
  }
  if (*param_1 != 0) {
    FUN_1400020a8(*param_1);
    piVar1 = (int *)param_1[2];
  }
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1402c76ca FUN_1402c76ca body=339 status=ok
// SIG undefined FUN_1402c76ca(void)

void FUN_1402c76ca(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0xf8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402c773b;
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
LAB_1402c773b:
    iVar5 = (int)(uVar4 / 0xf8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xf8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402c781e FUN_1402c781e body=425 status=ok
// SIG undefined FUN_1402c781e(void)

undefined1 * FUN_1402c781e(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    if (*(PSRWLOCK *)(param_2 + 0x98) != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_2 + 0x98));
      if (*(PSRWLOCK *)(param_1 + 0x98) != (PSRWLOCK)0x0) {
        AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
      }
    }
    if (*plVar1 != 0) {
      **(int **)(param_1 + 0xa0) = **(int **)(param_1 + 0xa0) + -1;
      piVar4 = *(int **)(param_1 + 0xa0);
      if (*piVar4 == 0) {
        if (*plVar1 != 0) {
          FUN_1400020a8(*plVar1);
          piVar4 = *(int **)(param_1 + 0xa0);
        }
        *plVar1 = 0;
        if (piVar4 != (int *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
        if (*(longlong *)(param_1 + 0x98) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
      }
    }
    lVar2 = *(longlong *)(param_2 + 0x90);
    *(longlong *)(param_1 + 0x90) = lVar2;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    piVar4 = *(int **)(param_2 + 0xa0);
    *(int **)(param_1 + 0xa0) = piVar4;
    if (lVar2 != 0) {
      *piVar4 = *piVar4 + 1;
      ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
    }
  }
  return param_1;
}



// FUNCTION 1402c79c8 FUN_1402c79c8 body=233 status=ok
// SIG undefined FUN_1402c79c8(void)

void FUN_1402c79c8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
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
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402c7ab2 FUN_1402c7ab2 body=366 status=ok
// SIG undefined FUN_1402c7ab2(void)

undefined4 *
FUN_1402c7ab2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402c7cee(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1402c885a(local_40 + 2,uVar1);
  *(undefined4 *)(local_40 + 0x8a) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_1402c7c22(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x454) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x8a) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402c859e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c7c22 FUN_1402c7c22 body=203 status=ok
// SIG undefined FUN_1402c7c22(void)

void FUN_1402c7c22(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x460);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x460) == *param_3) {
          FUN_1403c51be((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x450);
          FUN_145702ed8(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x450);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1402c7c4e;
    }
  }
  uVar1 = 0;
LAB_1402c7c4e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1402c7cee FUN_1402c7cee body=481 status=ok
// SIG undefined FUN_1402c7cee(void)

int * FUN_1402c7cee(longlong *param_1,int *param_2)

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
      FUN_1402c7ed0(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x460);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x460) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x460 + *param_1;
  return param_2;
}



// FUNCTION 1402c7ed0 FUN_1402c7ed0 body=264 status=ok
// SIG undefined FUN_1402c7ed0(void)

void FUN_1402c7ed0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x460;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x460)) {
      uVar5 = uVar4 / 0x460 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x460,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402c7fd8 FUN_1402c7fd8 body=493 status=ok
// SIG undefined FUN_1402c7fd8(void)

longlong FUN_1402c7fd8(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1402c8234();
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x1f8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  *(undefined8 *)(param_1 + 0x208) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x210) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = uVar3;
  *(undefined4 *)(param_1 + 0x21c) = uVar4;
  *(undefined8 *)(param_1 + 0x220) = DAT_14c8464f0;
  puVar6 = &DAT_14c846480;
  puVar7 = local_98;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1402c81c6(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(char *)(param_1 + 0x260) = *(char *)(param_1 + 0x1b8) * '\x02';
  *(undefined2 *)(param_1 + 0x262) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0xffffffffff7fffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2ac) = 0;
  *(undefined1 *)(param_1 + 0x2b5) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x35f) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x368) = 1;
  *(undefined1 *)(param_1 + 0x37f) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3e0) = 0;
  *(undefined1 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c81c6 FUN_1402c81c6 body=109 status=ok
// SIG undefined FUN_1402c81c6(void)

undefined8 * FUN_1402c81c6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  PSRWLOCK SRWLock;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4 = puVar1;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_1 = puVar1;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  param_1[1] = SRWLock;
  puVar2 = (undefined4 *)FUN_14001cc68(4,0x10);
  *puVar2 = 1;
  param_1[2] = puVar2;
  return param_1;
}



// FUNCTION 1402c8234 FUN_1402c8234 body=821 status=ok
// SIG undefined FUN_1402c8234(void)

undefined8 * FUN_1402c8234(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *param_1 = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[6] = param_2[6];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  memcpy(param_1 + 0xb,param_2 + 0xb,0xa0);
  param_1[0x1f] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar3 = param_2[0x1f];
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  else {
    FUN_1402c904a(param_1 + 0x1f,iVar1,0);
    FUN_1402c8569(param_1[0x1f],uVar3,iVar1);
  }
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  pvVar2 = (void *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1470f3cae(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],pvVar2,(longlong)iVar1 * 0x30);
  }
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  uVar3 = param_2[0x23];
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_1402c76ca(param_1 + 0x23,iVar1,0);
    FUN_1402c75d7(param_1[0x23],uVar3,iVar1);
  }
  param_1[0x25] = 0;
  iVar1 = *(int *)(param_2 + 0x26);
  uVar3 = param_2[0x25];
  *(int *)(param_1 + 0x26) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  }
  else {
    FUN_1470f3d22(param_1 + 0x25,iVar1,0);
    FUN_1470f3d94(param_1[0x25],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  param_1[0x28] = param_2[0x28];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14c);
  uVar5 = *(undefined4 *)(param_2 + 0x2a);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar4;
  *(undefined4 *)(param_1 + 0x2a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar6;
  param_1[0x2b] = 0;
  iVar1 = *(int *)(param_2 + 0x2c);
  pvVar2 = (void *)param_2[0x2b];
  *(int *)(param_1 + 0x2c) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2b,iVar1,0);
    memcpy((void *)param_1[0x2b],pvVar2,(longlong)iVar1 * 2);
  }
  lVar7 = param_2[0x2d];
  param_1[0x2d] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar8 = param_2 + 0x2e;
  puVar9 = param_1 + 0x2e;
  for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x1dc) = *(undefined1 *)((longlong)param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  return param_1;
}



// FUNCTION 1402c8569 FUN_1402c8569 body=52 status=ok
// SIG undefined FUN_1402c8569(void)

void FUN_1402c8569(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1402c8f18(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1402c859e FUN_1402c859e body=700 status=ok
// SIG undefined FUN_1402c859e(void)

void FUN_1402c859e(longlong *param_1)

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
    if ((int)uVar10 < 1) goto LAB_1402c8604;
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
LAB_1402c8604:
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
      lVar16 = (longlong)iVar15 * 0x460;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x454 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x450 + lVar16) =
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



// FUNCTION 1402c885a FUN_1402c885a body=1726 status=ok
// SIG undefined FUN_1402c885a(void)

longlong FUN_1402c885a(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  FUN_1402c8234();
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  iVar2 = *(int *)(param_2 + 0x1e8);
  pvVar3 = *(void **)(param_2 + 0x1e0);
  *(int *)(param_1 + 0x1e8) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  else {
    FUN_1402c79c8((undefined8 *)(param_1 + 0x1e0),iVar2,0);
    memcpy(*(void **)(param_1 + 0x1e0),pvVar3,(longlong)iVar2 * 0x60);
  }
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  uVar4 = *(undefined4 *)(param_2 + 0x1f0);
  uVar5 = *(undefined4 *)(param_2 + 500);
  uVar6 = *(undefined4 *)(param_2 + 0x1f8);
  uVar7 = *(undefined4 *)(param_2 + 0x1fc);
  uVar8 = *(undefined4 *)(param_2 + 0x200);
  uVar9 = *(undefined4 *)(param_2 + 0x204);
  uVar10 = *(undefined4 *)(param_2 + 0x208);
  uVar11 = *(undefined4 *)(param_2 + 0x20c);
  uVar12 = *(undefined4 *)(param_2 + 0x214);
  uVar13 = *(undefined4 *)(param_2 + 0x218);
  uVar14 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar12;
  *(undefined4 *)(param_1 + 0x218) = uVar13;
  *(undefined4 *)(param_1 + 0x21c) = uVar14;
  *(undefined4 *)(param_1 + 0x200) = uVar8;
  *(undefined4 *)(param_1 + 0x204) = uVar9;
  *(undefined4 *)(param_1 + 0x208) = uVar10;
  *(undefined4 *)(param_1 + 0x20c) = uVar11;
  *(undefined4 *)(param_1 + 0x1f0) = uVar4;
  *(undefined4 *)(param_1 + 500) = uVar5;
  *(undefined4 *)(param_1 + 0x1f8) = uVar6;
  *(undefined4 *)(param_1 + 0x1fc) = uVar7;
  FUN_142b51230(param_1 + 0x228,param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x240) = 0;
  iVar2 = *(int *)(param_2 + 0x248);
  uVar15 = *(undefined8 *)(param_2 + 0x240);
  *(int *)(param_1 + 0x248) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  else {
    FUN_14009aa12((undefined8 *)(param_1 + 0x240),iVar2,0);
    FUN_1447ad956(*(undefined8 *)(param_1 + 0x240),uVar15,iVar2);
  }
  *(undefined8 *)(param_1 + 0x250) = 0;
  iVar2 = *(int *)(param_2 + 600);
  uVar15 = *(undefined8 *)(param_2 + 0x250);
  *(int *)(param_1 + 600) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  else {
    FUN_14009aa12((undefined8 *)(param_1 + 0x250),iVar2,0);
    FUN_1447ad956(*(undefined8 *)(param_1 + 0x250),uVar15,iVar2);
  }
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x260);
  cVar1 = *(char *)(param_2 + 0x262);
  *(char *)(param_1 + 0x262) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x261) = *(undefined1 *)(param_2 + 0x261);
  }
  *(undefined1 *)(param_1 + 0x263) = *(undefined1 *)(param_2 + 0x263);
  lVar16 = *(longlong *)(param_2 + 0x270);
  *(longlong *)(param_1 + 0x270) = lVar16;
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x27c);
  uVar5 = *(undefined4 *)(param_2 + 0x280);
  uVar6 = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = uVar4;
  *(undefined4 *)(param_1 + 0x280) = uVar5;
  *(undefined4 *)(param_1 + 0x284) = uVar6;
  *(undefined8 *)(param_1 + 0x288) = 0;
  iVar2 = *(int *)(param_2 + 0x290);
  pvVar3 = *(void **)(param_2 + 0x288);
  *(int *)(param_1 + 0x290) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)(param_1 + 0x288),iVar2,0);
    memcpy(*(void **)(param_1 + 0x288),pvVar3,(longlong)iVar2 << 2);
  }
  uVar4 = *(undefined4 *)(param_2 + 0x298);
  uVar5 = *(undefined4 *)(param_2 + 0x29c);
  uVar6 = *(undefined4 *)(param_2 + 0x2a0);
  uVar7 = *(undefined4 *)(param_2 + 0x2a4);
  uVar8 = *(undefined4 *)(param_2 + 0x2a8);
  uVar9 = *(undefined4 *)(param_2 + 0x2ac);
  uVar10 = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = uVar8;
  *(undefined4 *)(param_1 + 0x2ac) = uVar9;
  *(undefined4 *)(param_1 + 0x2b0) = uVar10;
  *(undefined4 *)(param_1 + 0x298) = uVar4;
  *(undefined4 *)(param_1 + 0x29c) = uVar5;
  *(undefined4 *)(param_1 + 0x2a0) = uVar6;
  *(undefined4 *)(param_1 + 0x2a4) = uVar7;
  cVar1 = *(char *)(param_2 + 0x2b5);
  *(char *)(param_1 + 0x2b5) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  }
  cVar1 = *(char *)(param_2 + 800);
  *(char *)(param_1 + 800) = cVar1;
  if (cVar1 == '\x01') {
    puVar17 = (undefined8 *)(param_2 + 0x2c0);
    puVar18 = (undefined8 *)(param_1 + 0x2c0);
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x338) = 0;
  iVar2 = *(int *)(param_2 + 0x340);
  pvVar3 = *(void **)(param_2 + 0x338);
  *(int *)(param_1 + 0x340) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x344) = 0;
  }
  else {
    FUN_1470fb5e4((undefined8 *)(param_1 + 0x338),iVar2,0);
    memcpy(*(void **)(param_1 + 0x338),pvVar3,(longlong)iVar2 << 3);
  }
  FUN_142b51272(param_1 + 0x348,param_2 + 0x348);
  *(undefined2 *)(param_1 + 0x360) = *(undefined2 *)(param_2 + 0x360);
  *(undefined1 *)(param_1 + 0x362) = *(undefined1 *)(param_2 + 0x362);
  *(undefined1 *)(param_1 + 0x368) = *(undefined1 *)(param_2 + 0x368);
  cVar1 = *(char *)(param_2 + 0x370);
  *(char *)(param_1 + 0x370) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  }
  cVar1 = *(char *)(param_2 + 0x378);
  *(char *)(param_1 + 0x378) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x374);
  }
  cVar1 = *(char *)(param_2 + 0x37d);
  *(char *)(param_1 + 0x37d) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x37c);
  }
  cVar1 = *(char *)(param_2 + 0x37f);
  *(char *)(param_1 + 0x37f) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x37e) = *(undefined1 *)(param_2 + 0x37e);
  }
  cVar1 = *(char *)(param_2 + 0x381);
  *(char *)(param_1 + 0x381) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x380);
  }
  cVar1 = *(char *)(param_2 + 899);
  *(char *)(param_1 + 899) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x382) = *(undefined1 *)(param_2 + 0x382);
  }
  cVar1 = *(char *)(param_2 + 0x385);
  *(char *)(param_1 + 0x385) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 900) = *(undefined1 *)(param_2 + 900);
  }
  if (*(int *)(param_2 + 0x388) == -1) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0x388);
  }
  *(undefined8 *)(param_1 + 0x388) = uVar15;
  if (*(int *)(param_2 + 0x390) == -1) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0x390);
  }
  *(undefined8 *)(param_1 + 0x390) = uVar15;
  cVar1 = *(char *)(param_2 + 0x399);
  *(char *)(param_1 + 0x399) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x398);
  }
  cVar1 = *(char *)(param_2 + 0x39b);
  *(char *)(param_1 + 0x39b) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x39a) = *(undefined1 *)(param_2 + 0x39a);
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  iVar2 = *(int *)(param_2 + 0x3a8);
  uVar15 = *(undefined8 *)(param_2 + 0x3a0);
  *(int *)(param_1 + 0x3a8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  else {
    FUN_1470f8a66((undefined8 *)(param_1 + 0x3a0),iVar2,0);
    FUN_1470f8ad5(*(undefined8 *)(param_1 + 0x3a0),uVar15,iVar2);
  }
  cVar1 = *(char *)(param_2 + 0x3e0);
  *(char *)(param_1 + 0x3e0) = cVar1;
  if (cVar1 == '\x01') {
    cVar1 = *(char *)(param_2 + 0x3b4);
    *(char *)(param_1 + 0x3b4) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
    }
    cVar1 = *(char *)(param_2 + 0x3bc);
    *(char *)(param_1 + 0x3bc) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
    }
    cVar1 = *(char *)(param_2 + 0x3c1);
    *(char *)(param_1 + 0x3c1) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3c0) = *(undefined1 *)(param_2 + 0x3c0);
    }
    cVar1 = *(char *)(param_2 + 0x3c3);
    *(char *)(param_1 + 0x3c3) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3c2) = *(undefined1 *)(param_2 + 0x3c2);
    }
    cVar1 = *(char *)(param_2 + 0x3c5);
    *(char *)(param_1 + 0x3c5) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3c4) = *(undefined1 *)(param_2 + 0x3c4);
    }
    cVar1 = *(char *)(param_2 + 0x3c7);
    *(char *)(param_1 + 0x3c7) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3c6) = *(undefined1 *)(param_2 + 0x3c6);
    }
    cVar1 = *(char *)(param_2 + 0x3c9);
    *(char *)(param_1 + 0x3c9) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x3c8);
    }
    if (*(int *)(param_2 + 0x3cc) == -1) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = *(undefined8 *)(param_2 + 0x3cc);
    }
    *(undefined8 *)(param_1 + 0x3cc) = uVar15;
    if (*(int *)(param_2 + 0x3d4) == -1) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = *(undefined8 *)(param_2 + 0x3d4);
    }
    *(undefined8 *)(param_1 + 0x3d4) = uVar15;
    cVar1 = *(char *)(param_2 + 0x3dd);
    *(char *)(param_1 + 0x3dd) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3dc) = *(undefined1 *)(param_2 + 0x3dc);
    }
    cVar1 = *(char *)(param_2 + 0x3df);
    *(char *)(param_1 + 0x3df) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x3de) = *(undefined1 *)(param_2 + 0x3de);
    }
  }
  *(undefined1 *)(param_1 + 1000) = *(undefined1 *)(param_2 + 1000);
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  FUN_1404233de(param_1 + 0x3f0,param_2 + 0x3f0);
  return param_1;
}



// FUNCTION 1402c8f18 FUN_1402c8f18 body=305 status=ok
// SIG undefined FUN_1402c8f18(void)

undefined8 * FUN_1402c8f18(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_2[7] != 0) {
    plVar1 = param_1 + 7;
    if ((PSRWLOCK)param_2[8] != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)param_2[8]);
      if ((PSRWLOCK)param_1[8] != (PSRWLOCK)0x0) {
        AcquireSRWLockExclusive((PSRWLOCK)param_1[8]);
      }
    }
    if (*plVar1 != 0) {
      *(int *)param_1[9] = *(int *)param_1[9] + -1;
      piVar3 = (int *)param_1[9];
      if (*piVar3 == 0) {
        if (*plVar1 != 0) {
          FUN_1400020a8(*plVar1);
          piVar3 = (int *)param_1[9];
        }
        *plVar1 = 0;
        if (piVar3 != (int *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive((PSRWLOCK)param_1[8]);
        if (param_1[8] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)param_1[8]);
      }
    }
    lVar2 = param_2[7];
    param_1[7] = lVar2;
    param_1[8] = param_2[8];
    piVar3 = (int *)param_2[9];
    param_1[9] = piVar3;
    if (lVar2 != 0) {
      *piVar3 = *piVar3 + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)param_1[8]);
    }
  }
  return param_1;
}



// FUNCTION 1402c904a FUN_1402c904a body=233 status=ok
// SIG undefined FUN_1402c904a(void)

void FUN_1402c904a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x50;
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
    iVar1 = (int)(uVar3 / 0x50);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x50,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402c9134 FUN_1402c9134 body=132 status=ok
// SIG undefined FUN_1402c9134(void)

longlong FUN_1402c9134(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 == DVar3) goto LAB_1402c91a2;
      }
      lVar4 = FUN_1401e3324(param_1,param_2);
      if (lVar4 == 0) {
        *param_3 = 5;
        lVar4 = 0;
      }
      return lVar4;
    }
  }
LAB_1402c91a2:
  lVar4 = FUN_1409983d4(param_1,param_2,param_3);
  return lVar4;
}



// FUNCTION 1402c91b8 FUN_1402c91b8 body=31 status=ok
// SIG undefined FUN_1402c91b8(void)

void FUN_1402c91b8(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x29) = 0;
    *(undefined8 *)((longlong)param_1 + 0x31) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1402c91d8 FUN_1402c91d8 body=910 status=ok
// SIG undefined FUN_1402c91d8(void)

longlong FUN_1402c91d8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong local_e8;
  undefined8 ***local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x100);
  uVar5 = local_a0;
  if (5 < *(int *)(param_1 + 0x108) - *(int *)(param_1 + 0x134)) {
    local_d8 = param_1 + 0x110;
    local_e0 = (undefined8 ***)&DAT_100000000;
    local_d0 = 0xffffffff;
    local_c8 = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_1449c0562(&local_e0);
    }
    local_b0 = (undefined8 ****)local_e0;
    local_a8 = local_d8;
    local_a0 = local_d0;
    uVar5 = local_a0;
    local_98 = local_c8;
    local_94 = local_c4;
    local_80 = 0;
    local_a0._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
    local_b8 = plVar1;
    local_90 = plVar1;
    local_88 = plVar1;
    if (local_a0._4_4_ < *(int *)(local_d8 + 0x18)) {
      iVar4 = local_a0._4_4_;
      local_a0 = uVar5;
      do {
        cVar3 = FUN_144729dda((longlong)iVar4 * 0x18 + *local_b8);
        if ((cVar3 == '\0') ||
           (cVar3 = FUN_144729dda(*local_b8 + (longlong)local_a0._4_4_ * 0x18 + 8), cVar3 == '\0'))
        {
          FUN_1456f387a(local_90);
          local_80 = CONCAT11(local_80._1_1_,1);
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
        FUN_1449c0562(&local_b0);
        iVar4 = local_a0._4_4_;
      } while (local_a0._4_4_ < *(int *)(local_a8 + 0x18));
      uVar5 = local_a0;
      if (((local_80 & 1) != 0) && (local_80._1_1_ == '\x01')) {
        FUN_148b7ca0c();
        uVar5 = local_a0;
      }
    }
  }
  local_a0 = uVar5;
  if (param_2 == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar9 = *(uint *)(param_2 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar6 = *(uint *)(lVar10 + 0x10);
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
      uVar6 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar6 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar6 = uVar8;
      }
    }
  }
  local_b8 = (longlong *)CONCAT44(uVar6,uVar9);
  iVar4 = FUN_1402c9568(plVar1,uVar6 ^ uVar9,&local_b8);
  if ((((((iVar4 == -1) || (lVar10 = (longlong)iVar4 * 0x18 + *plVar1, lVar10 == 0)) ||
        (uVar2 = *(ulonglong *)(lVar10 + 8), uVar2 >> 0x20 == 0)) ||
       ((uVar6 = (uint)uVar2, (int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)))) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
       plVar7 == (longlong *)0x0 ||
       (((int)plVar7[2] != (int)(uVar2 >> 0x20) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))))
     || (lVar10 = *plVar7, lVar10 == 0)) {
    FUN_1411371f6(&local_b8);
    uVar5 = FUN_1456f3794();
    local_f8 = &local_b8;
    lVar10 = FUN_141137228(param_2,uVar5,0,0);
    if (local_78 != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
    local_e0 = (undefined8 ****)0x0;
    FUN_14485c47a(&local_e0,lVar10);
    local_e8 = 0;
    FUN_14485c47a(&local_e8,param_2);
    local_b8 = &local_e8;
    local_b0 = &local_e0;
    FUN_1456f3942(plVar1,local_bc);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1402c9568 FUN_1402c9568 body=180 status=ok
// SIG undefined FUN_1402c9568(void)

int FUN_1402c9568(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_140bf1e82(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1402c95f6;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1402c95f6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c961e FUN_1402c961e body=294 status=ok
// SIG undefined FUN_1402c961e(void)

void FUN_1402c961e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x3bc) & 2) == 0) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x3b0);
    *(uint *)(param_1 + 0x3b0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3b4) < iVar1 + 1U) {
      FUN_148b7cea0((longlong *)(param_1 + 0x3a8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x3a0);
    *(uint *)(param_1 + 0x3a0) = iVar1 + 1U;
    local_38 = param_2;
    if (*(uint *)(param_1 + 0x3a4) < iVar1 + 1U) {
      FUN_1465a26bc((longlong *)(param_1 + 0x398),iVar1);
    }
    FUN_148b7cf26((longlong)iVar1 * 0x18 + *(longlong *)(param_1 + 0x398),&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c9756 FUN_1402c9756 body=297 status=ok
// SIG undefined FUN_1402c9756(void)

void FUN_1402c9756(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = (byte)param_2;
  if ((*(uint *)(param_1 + 0x89) & 2) == 0) {
    local_31 = bVar2;
    uVar1 = FUN_14477b072(param_1,DAT_14cb9ebc8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_31);
  }
  else {
    *(byte *)(param_1 + 0x73) = bVar2;
    *(uint *)(param_1 + 0x89) = *(uint *)(param_1 + 0x89) & 0xfffffffe | param_2 & 0xff;
    (**(code **)(*param_1 + 0x400))(param_1,param_2);
  }
  FUN_1405d0f74(param_1);
  if (0 < (int)param_1[0x7e]) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(param_1[0x7d] + lVar3) + (ulonglong)(bVar2 ^ 1) * 8 + 8))();
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < (int)param_1[0x7e]);
  }
  if (0 < (int)param_1[0x80]) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(param_1[0x7f] + lVar3) +
                  (((ulonglong)param_2 ^ 1) & 0xff) * 8 + 8))();
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < (int)param_1[0x80]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c9880 FUN_1402c9880 body=305 status=ok
// SIG undefined FUN_1402c9880(void)

void FUN_1402c9880(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1402c991a;
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
LAB_1402c98f3:
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
      goto LAB_1402c98f3;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1402c991a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1402c991a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c99b2 FUN_1402c99b2 body=120 status=ok
// SIG undefined FUN_1402c99b2(void)

undefined4 FUN_1402c99b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  uVar4 = FUN_1403e7f2a(&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402c9a2c FUN_1402c9a2c body=373 status=ok
// SIG undefined FUN_1402c9a2c(void)

void FUN_1402c9a2c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402c9ab5;
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
LAB_1402c9ab5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1402c9ba2 FUN_1402c9ba2 body=1151 status=ok
// SIG undefined FUN_1402c9ba2(void)

void FUN_1402c9ba2(longlong *param_1,undefined8 ***param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 **ppuVar10;
  char cVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_d8 [32];
  undefined8 ***local_b8;
  undefined8 **ppuStack_b0;
  longlong *local_a8;
  undefined8 ***local_a0;
  undefined8 **ppuStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 **local_70;
  undefined8 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb9eac8 == (undefined8 ****)0x0) {
    if (DAT_14cb9ead0 != (undefined8 ***)0x0) {
      lVar12 = FUN_1402ca1b2();
      lVar17 = *(longlong *)(lVar12 + 0x110);
      if (lVar17 == 0) {
        FUN_140aa6c08(lVar12);
        lVar17 = *(longlong *)(lVar12 + 0x110);
      }
      pppuVar7 = DAT_14cb9ead0;
      local_68 = DAT_14cb9ead0;
      local_70 = param_2;
      if (0 < *(int *)(lVar17 + 400)) {
        lVar20 = 0x18;
        lVar12 = 0;
        do {
          puVar16 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)(lVar17 + 0x188) + -0x10 + lVar20) != 0) {
            puVar16 = *(undefined2 **)(*(longlong *)(lVar17 + 0x188) + -0x18 + lVar20);
          }
          cVar11 = FUN_1402ca022(pppuVar7,puVar16);
          if (cVar11 != '\0') {
            if ((int)lVar12 < *(int *)(lVar17 + 400)) {
              lVar12 = *(longlong *)(lVar17 + 0x188);
              local_a0 = &local_68;
              ppuStack_98 = &local_70;
              FUN_1402ca290(lVar17 + 0x208,&local_b8);
              plVar18 = (longlong *)(lVar12 + lVar20);
              if (*(int *)(lVar12 + 8 + lVar20) < 1) goto LAB_1402c9e9d;
              lVar17 = 0;
              lVar19 = 0;
              goto LAB_1402c9e6a;
            }
            break;
          }
          lVar12 = lVar12 + 1;
          lVar20 = lVar20 + 0x28;
        } while (lVar12 < *(int *)(lVar17 + 400));
      }
    }
  }
  else {
    lVar12 = FUN_1402ca1b2();
    lVar17 = *(longlong *)(lVar12 + 0x110);
    if (lVar17 == 0) {
      FUN_140aa6c08(lVar12);
      lVar17 = *(longlong *)(lVar12 + 0x110);
    }
    ppppuVar6 = DAT_14cb9eac8;
    local_b8 = DAT_14cb9eac8;
    local_68 = param_2;
    if (0 < *(int *)(lVar17 + 0x180)) {
      lVar20 = 0x20;
      lVar12 = 0;
      do {
        puVar16 = &DAT_149dfb77a;
        if (*(int *)(*(longlong *)(lVar17 + 0x178) + -0x18 + lVar20) != 0) {
          puVar16 = *(undefined2 **)(*(longlong *)(lVar17 + 0x178) + -0x20 + lVar20);
        }
        cVar11 = FUN_1402ca022(ppppuVar6,puVar16);
        if (cVar11 != '\0') {
          if ((int)lVar12 < *(int *)(lVar17 + 0x180)) {
            lVar12 = *(longlong *)(lVar17 + 0x178);
            local_a0 = &local_b8;
            ppuStack_98 = &local_68;
            FUN_1402ca290(lVar17 + 0x1b8,&local_70);
            plVar18 = (longlong *)(lVar12 + lVar20);
            if (*(int *)(lVar12 + 8 + lVar20) < 1) goto LAB_1402c9ce1;
            lVar17 = 0;
            lVar19 = 0;
            goto LAB_1402c9cae;
          }
          break;
        }
        lVar12 = lVar12 + 1;
        lVar20 = lVar20 + 0x30;
      } while (lVar12 < *(int *)(lVar17 + 0x180));
    }
  }
  goto LAB_1402c9f8b;
  while( true ) {
    lVar19 = lVar19 + 1;
    lVar17 = lVar17 + 0x30;
    if ((int)plVar18[1] <= lVar19) break;
LAB_1402c9e6a:
    puVar16 = &DAT_149dfb77a;
    if (*(int *)(*plVar18 + 8 + lVar17) != 0) {
      puVar16 = *(undefined2 **)(*plVar18 + lVar17);
    }
    cVar11 = FUN_1402ca022(local_70,puVar16);
    if (cVar11 != '\0') goto LAB_1402c9f41;
  }
LAB_1402c9e9d:
  uStack_80 = 0;
  uStack_7c = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  FUN_1400021e4(&local_70,&local_b8);
  local_a0 = local_b8;
  ppuStack_98 = ppuStack_b0;
  ppuStack_b0 = (undefined8 ***)0x0;
  local_a8 = (longlong *)0x0;
  local_b8 = (undefined8 ****)*param_1;
  FUN_1413a4742(&local_90,&local_b8);
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uStack_7c = CONCAT44(*(uint *)(param_1 + 1) & 0xf | uStack_7c._4_4_ & 0xfffffff0,
                       (undefined4)uStack_7c);
  iVar4 = *(int *)(lVar12 + 8 + lVar20);
  *(uint *)(lVar12 + 8 + lVar20) = iVar4 + 1U;
  if (*(uint *)(lVar12 + 0xc + lVar20) < iVar4 + 1U) {
    FUN_1402ca69e(plVar18,iVar4);
  }
  FUN_1456f4712((longlong)iVar4 * 0x30 + *plVar18,&local_a0);
  FUN_1456f46c6(&local_a0);
  goto LAB_1402c9f8b;
LAB_1402c9f41:
  lVar12 = *plVar18;
  *param_1 = *(longlong *)(lVar12 + 0x10 + lVar17);
  uVar13 = *(uint *)(lVar12 + 0x28 + lVar17) & 1;
  uVar5 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar5 & 0xfffffffe | uVar13;
  uVar14 = *(uint *)(lVar12 + 0x28 + lVar17) & 2;
  *(uint *)(param_1 + 1) = uVar5 & 0xfffffffc | uVar13 | uVar14;
  uVar15 = *(uint *)(lVar12 + 0x28 + lVar17) & 4;
  *(uint *)(param_1 + 1) = uVar5 & 0xfffffff8 | uVar13 | uVar14 | uVar15;
  *(uint *)(param_1 + 1) =
       uVar5 & 0xfffffff0 | uVar13 | uVar14 | uVar15 | *(uint *)(lVar12 + 0x28 + lVar17) & 8;
  goto LAB_1402c9f8b;
  while( true ) {
    lVar19 = lVar19 + 1;
    lVar17 = lVar17 + 0x30;
    if ((int)plVar18[1] <= lVar19) break;
LAB_1402c9cae:
    puVar16 = &DAT_149dfb77a;
    if (*(int *)(*plVar18 + 8 + lVar17) != 0) {
      puVar16 = *(undefined2 **)(*plVar18 + lVar17);
    }
    cVar11 = FUN_1402ca022(local_68,puVar16);
    if (cVar11 != '\0') goto LAB_1402c9f41;
  }
LAB_1402c9ce1:
  FUN_1400021e4(&local_68,&local_a0);
  ppuVar10 = ppuStack_98;
  pppuVar7 = local_a0;
  iVar9 = (int)ppuStack_98;
  lVar17 = *param_1;
  lVar19 = param_1[1];
  iVar4 = *(int *)(lVar12 + 8 + lVar20);
  *(uint *)(lVar12 + 8 + lVar20) = iVar4 + 1U;
  if (*(uint *)(lVar12 + 0xc + lVar20) < iVar4 + 1U) {
    FUN_1402ca69e(plVar18,iVar4);
  }
  lVar12 = *plVar18;
  lVar20 = (longlong)iVar4 * 0x30;
  puVar3 = (undefined8 *)(lVar12 + lVar20);
  *(undefined8 *)(lVar12 + lVar20) = 0;
  *(int *)(lVar12 + 8 + lVar20) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar3,(ulonglong)ppuVar10 & 0xffffffff,0);
    memcpy((void *)*puVar3,pppuVar7,(longlong)iVar9 * 2);
  }
  puVar3[2] = lVar17;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(byte *)(puVar3 + 5) = (byte)(int)lVar19 & 0xf;
  if ((undefined8 ****)pppuVar7 != (undefined8 ****)0x0) {
    FUN_1400020a8(pppuVar7);
  }
LAB_1402c9f8b:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ca022 FUN_1402ca022 body=50 status=ok
// SIG undefined FUN_1402ca022(void)

void FUN_1402ca022(undefined8 param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (param_2 == (wchar_t *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    uVar1 = (int)sVar2;
  }
  FUN_1402ca054(param_1,param_2,uVar1);
  return;
}



// FUNCTION 1402ca054 FUN_1402ca054 body=348 status=ok
// SIG undefined FUN_1402ca054(void)

bool FUN_1402ca054(ulonglong param_1,short *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ushort *puVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar8 = param_1 == 0;
  local_2c = param_3;
  if (param_3 != 0) {
    if ((param_1 == 0) && (*param_2 == 0x5f)) {
      FUN_14577453c(param_2,&local_2c);
      uVar4 = local_2c;
    }
    else {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      puVar6 = (ushort *)
               ((ulonglong)(((uint)param_1 & 0xffff) * 2) +
               (&DAT_14c87eb10)[param_1 >> 0x10 & 0xffff]);
      if (((param_1 >> 0x20 != 0) &&
          (iVar3 = FUN_14577453c(param_2,&local_2c), param_3 = local_2c,
          iVar3 != (int)(param_1 >> 0x20))) || (uVar1 = *puVar6, param_3 != uVar1 >> 6)) {
        bVar8 = false;
        goto LAB_1402ca128;
      }
      puVar6 = puVar6 + 1;
      uVar7 = (ulonglong)param_3;
      if ((uVar1 & 1) == 0) {
        uVar4 = FUN_144a6307c(param_2,puVar6);
      }
      else {
        if (param_3 != 0) {
          lVar5 = 0;
          do {
            uVar1 = *(ushort *)((longlong)param_2 + lVar5);
            uVar2 = *(ushort *)((longlong)puVar6 + lVar5);
            if (uVar1 == uVar2) {
              uVar4 = 0;
              if ((uVar1 == 0) || (uVar7 == 1)) goto LAB_1402ca121;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) {
                uVar4 = (uint)uVar1 - (uint)uVar2;
                goto LAB_1402ca121;
              }
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                        (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                goto LAB_1402ca121;
              }
              if (uVar7 == 1) break;
            }
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 2;
          } while( true );
        }
        uVar4 = 0;
      }
    }
LAB_1402ca121:
    bVar8 = uVar4 == 0;
  }
LAB_1402ca128:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ca1b2 FUN_1402ca1b2 body=221 status=ok
// SIG undefined FUN_1402ca1b2(void)

longlong FUN_1402ca1b2(void)

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
  if (DAT_14cb9ecd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b78e1b;
    local_40 = &LAB_1461c2822;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 600;
    FUN_14081cfa3(L"/Script/GameplayDebugger",L"GameplayDebuggerConfig",&DAT_14cb9ecd0,
                  &DAT_148b78e1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ecd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ca290 FUN_1402ca290 body=316 status=ok
// SIG undefined FUN_1402ca290(void)

undefined4 * FUN_1402ca290(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402ca3ce(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  if (uVar5 < 4) {
    iVar6 = 1;
  }
  else {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1402ca7b2(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ca3ce FUN_1402ca3ce body=719 status=ok
// SIG undefined FUN_1402ca3ce(void)

int * FUN_1402ca3ce(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1403951a8(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402ca594;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1402ca594:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1402ca69e FUN_1402ca69e body=275 status=ok
// SIG undefined FUN_1402ca69e(void)

void FUN_1402ca69e(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 1402ca7b2 FUN_1402ca7b2 body=679 status=ok
// SIG undefined FUN_1402ca7b2(void)

void FUN_1402ca7b2(longlong *param_1)

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
  longlong lVar15;
  int iVar16;
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
    if ((int)uVar10 < 1) goto LAB_1402ca827;
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
LAB_1402ca827:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
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
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1402caa5a FUN_1402caa5a body=445 status=ok
// SIG undefined FUN_1402caa5a(void)

void FUN_1402caa5a(longlong *param_1)

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



// FUNCTION 1402cac18 FUN_1402cac18 body=1472 status=ok
// SIG undefined FUN_1402cac18(void)

void FUN_1402cac18(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_d8 [44];
  int local_ac;
  uint local_a8;
  int local_a4;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = FUN_1447210f0(param_2);
  FUN_14490d72a(lVar10);
  local_a8 = 0x40;
  if ((lVar10 != 0) && (iVar8 = FUN_14490d72a(lVar10), iVar8 == 3)) {
    bVar7 = FUN_14020697c(lVar10);
    local_a8 = (uint)bVar7 << 6;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = (longlong *)(param_1 + 0x90);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  local_60 = local_a0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar18 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar8 = 0;
    iVar19 = 0;
    local_58._4_4_ = 0;
    uVar21 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar21 = local_68 & 0xffffffff;
    uVar18 = local_68 >> 0x20;
    iVar8 = *(int *)(param_1 + 0xa8);
    iVar19 = (int)local_50;
  }
  plVar6 = local_60;
  uVar15 = (uint)local_58;
  iVar11 = local_58._4_4_;
  lVar10 = param_2;
  lVar14 = param_1;
  if (local_58._4_4_ != iVar8 || local_60 != local_a0) {
    do {
      local_90 = lVar14;
      local_98 = lVar10;
      local_a4 = iVar8;
      iVar8 = (int)uVar21;
      puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar11 * 0x28);
      local_68 = *puVar3;
      local_60 = (longlong *)0x0;
      local_58 = local_58 & 0xffffffff00000000;
      FUN_1410ad242(&local_60,puVar3 + 1);
      local_50 = puVar3[3];
      DAT_14cb9eac8 = local_68;
      if (((uint)local_50 & 0xff00) != 0x400) {
        plVar13 = local_60;
        if ((uint)local_58 == 0) {
          plVar13 = (longlong *)0x0;
        }
        (**(code **)(*plVar13 + 0x58))(plVar13,&local_88);
        lVar10 = local_88;
        if (param_2 == 0) {
          *(undefined4 *)(local_88 + 0x28) = 0;
          iVar11 = 0;
        }
        else {
          uVar9 = *(uint *)(param_2 + 0xc);
          *(uint *)(local_88 + 0x28) = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar11 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar11 = DAT_14c964868 + 1;
            UNLOCK();
            iVar16 = DAT_14c964868 + 1;
            bVar23 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar11;
            if (bVar23) {
              local_ac = iVar16;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar16);
              iVar16 = local_ac;
            }
            LOCK();
            iVar11 = *(int *)(lVar14 + 0x10);
            bVar23 = iVar11 == 0;
            if (bVar23) {
              *(int *)(lVar14 + 0x10) = iVar16;
              iVar11 = 0;
            }
            UNLOCK();
            if (bVar23) {
              iVar11 = iVar16;
            }
          }
        }
        uVar4 = uStack_70;
        param_2 = local_98;
        *(int *)(lVar10 + 0x2c) = iVar11;
        *(int *)(lVar10 + 0x38) = (int)param_3[1];
        *(ulonglong *)(lVar10 + 0x48) = local_68;
        uVar9 = *(uint *)(lVar10 + 0x34) & 0xffffffbf | local_a8;
        *(uint *)(lVar10 + 0x34) = uVar9;
        *(uint *)(lVar10 + 0x34) =
             (uint)(local_50._1_1_ < 2) << 7 |
             (uVar9 & 0xffffff5f) + (*(uint *)(local_98 + 0x448) & 4) * 8;
        lVar10 = (longlong)(int)uStack_70;
        uVar9 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        if (uStack_70._4_4_ < uVar9) {
          FUN_1402cb222(&local_78,uVar4 & 0xffffffff);
        }
        plVar13 = local_80;
        *(longlong *)(local_78 + lVar10 * 0x10) = local_88;
        *(longlong **)(local_78 + 8 + lVar10 * 0x10) = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
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
      }
      param_1 = local_90;
      if ((uint)local_58 == 0) {
LAB_1402cae94:
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_60 != (longlong *)0x0) {
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = local_58 & 0xffffffff00000000;
        goto LAB_1402cae94;
      }
      uVar15 = uVar15 & ~(uint)uVar18;
      plVar13 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar13 = plVar6;
      }
      iVar16 = (int)plVar6[3];
      lVar10 = (longlong)iVar8;
      uVar9 = *(uint *)((longlong)plVar13 + lVar10 * 4) & uVar15;
      if (uVar9 == 0) {
        iVar11 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar11 = iVar16 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar8) {
          iVar12 = iVar8;
        }
        if (iVar8 < iVar11) {
          lVar14 = 0;
          do {
            uVar9 = *(uint *)((longlong)plVar13 + lVar14 * 4 + lVar10 * 4 + 4);
            if (uVar9 != 0) {
              uVar21 = (ulonglong)(iVar8 + (int)lVar14 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1402caf0d;
            }
            iVar19 = iVar19 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar12 - lVar10 != lVar14);
          uVar15 = 0xffffffff;
          iVar8 = iVar12;
        }
        uVar21 = (ulonglong)(iVar8 + 1);
        param_2 = local_98;
        param_1 = local_90;
        iVar11 = iVar16;
      }
      else {
LAB_1402caf0d:
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar4 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar11 = (iVar19 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar11) {
          iVar11 = iVar16;
        }
      }
      iVar8 = local_a4;
      lVar10 = local_98;
      lVar14 = local_90;
    } while (iVar11 != local_a4 || plVar6 != local_a0);
  }
  DAT_14cb9eac8 = 0;
  iVar8 = *(int *)((longlong)param_3 + 0xc);
  FUN_1402cb1d9(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar8 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_148b7b6e0(param_3);
  }
  iVar8 = *(int *)(param_1 + 0xd8);
  if (0 < iVar8) {
    lVar10 = *(longlong *)(param_1 + 0xd0);
    lVar14 = 0;
    do {
      lVar20 = lVar14 * 0x10;
      if (0 < *(int *)(lVar10 + 8 + lVar20)) {
        lVar22 = 0;
        do {
          puVar17 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar10 + lVar20) + lVar22 * 4) * 0x10 +
                    local_78);
          iVar8 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
            FUN_1402cb222(param_3,iVar8);
          }
          lVar10 = *param_3;
          *(undefined8 *)(lVar10 + (longlong)iVar8 * 0x10) = *puVar17;
          lVar5 = puVar17[1];
          *(longlong *)(lVar10 + 8 + (longlong)iVar8 * 0x10) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          lVar22 = lVar22 + 1;
          lVar10 = *(longlong *)(param_1 + 0xd0);
        } while (lVar22 < *(int *)(lVar10 + 8 + lVar20));
        iVar8 = *(int *)(param_1 + 0xd8);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
  }
  FUN_1402cb1d9(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402cb1d9 FUN_1402cb1d9 body=73 status=ok
// SIG undefined FUN_1402cb1d9(void)

void FUN_1402cb1d9(longlong param_1,int param_2)

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



// FUNCTION 1402cb222 FUN_1402cb222 body=269 status=ok
// SIG undefined FUN_1402cb222(void)

void FUN_1402cb222(longlong param_1,int param_2)

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



// FUNCTION 1402cb330 FUN_1402cb330 body=205 status=ok
// SIG undefined FUN_1402cb330(void)

uint FUN_1402cb330(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  uVar4 = (uint)uVar2;
  while( true ) {
    if ((uVar2 & 0x3ffffff) == 0) {
      return 0;
    }
    uVar3 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar3;
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    uVar2 = *param_1;
    uVar4 = (uint)uVar2;
  }
  return uVar4 & 0x3ffffff;
}



// FUNCTION 1402cb3fe FUN_1402cb3fe body=353 status=ok
// SIG undefined FUN_1402cb3fe(void)

void FUN_1402cb3fe(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402cb483;
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
LAB_1402cb483:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402cb560 FUN_1402cb560 body=1897 status=ok
// SIG undefined FUN_1402cb560(void)

void FUN_1402cb560(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a345be0;
  iVar8 = *(int *)(param_1 + 0xf3);
  if ((longlong)iVar8 != 0) {
    lVar2 = param_1[0xf2];
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar10);
      FUN_14488df26(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0xa0) = 0;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar8 * 8 != lVar10);
  }
  *(undefined4 *)(param_1 + 0xf3) = 0;
  if (*(int *)((longlong)param_1 + 0x79c) != 0) {
    FUN_1456f49ac(param_1 + 0xf2);
  }
  if (DAT_14c760da4 != 0) {
    uVar9 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar7 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    do {
      lVar2 = param_1[(ulonglong)uVar7 + 0xfa];
      if (lVar2 != 0) {
        FUN_1456f4f78(lVar2);
        thunk_FUN_1400020a8(lVar2,0x1540,0x40);
      }
      param_1[(ulonglong)uVar7 + 0xfa] = 0;
      uVar9 = uVar9 & ~(1 << (uVar7 & 0x1f));
      if (uVar9 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
    } while (uVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if (*(int *)((longlong)param_1 + 0x52c) != 0) {
    FUN_1456f49dc(param_1 + 0xa4);
  }
  lVar2 = param_1[0xa6];
  if (lVar2 != 0) {
    param_1[0xa6] = 0;
    LOCK();
    puVar1 = (uint *)(lVar2 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (DAT_14c760da4 != 0) {
    uVar9 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar7 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    do {
      lVar2 = param_1[(ulonglong)uVar7 + 0x9c];
      if (lVar2 != 0) {
        FUN_1456f4856(lVar2 + 0x20);
        FUN_14129c6ba(lVar2 + 0xe8);
        FUN_1456f4856(lVar2 + 0x1e8);
        lVar2 = param_1[(ulonglong)uVar7 + 0x9c];
        if (lVar2 != 0) {
          FUN_1456f4812(lVar2 + 0x1e8);
          FUN_145887a94(lVar2 + 0xe8);
          DeleteCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xc0));
          FUN_1456f4812(lVar2 + 0x20);
          FUN_1400020a8(lVar2);
        }
        param_1[(ulonglong)uVar7 + 0x9c] = 0;
      }
      uVar9 = uVar9 & ~(1 << (uVar7 & 0x1f));
      if (uVar9 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
    } while (uVar9 != 0);
  }
  uVar4 = param_1[0xa7];
  param_1[0xa7] = 0;
  FUN_1456f47d2(uVar4);
  puVar5 = (undefined8 *)param_1[0xf9];
  if (puVar5 != (undefined8 *)0x0) {
    param_1[0xf9] = 0;
    (**(code **)*puVar5)(puVar5,1);
  }
  if (param_1[1] != 0) {
    FUN_1402cbcd2(param_1 + 0x57);
  }
  FUN_1402cbe50(param_1 + 0x47);
  plVar6 = (longlong *)param_1[0x96];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x96] = 0;
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)param_1[0x97];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x97] = 0;
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)param_1[0x98];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x98] = 0;
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)param_1[0x99];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x99] = 0;
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)param_1[0x9b];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x9b] = 0;
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)param_1[0x15];
  if (plVar6 != (longlong *)0x0) {
    local_48 = 0x490bda80e48ae283;
    local_40 = 0x8dacfa9e943e687;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_48,6);
    plVar6 = (longlong *)param_1[0x15];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x15] = 0;
      (**(code **)(*plVar6 + 0x10))();
    }
    FUN_14315a398();
  }
  puVar5 = (undefined8 *)param_1[1];
  if ((puVar5 != (undefined8 *)0x0) && (DAT_14ca8507a == '\x01')) {
    local_50 = (longlong *)0x0;
    iVar8 = (**(code **)*puVar5)(puVar5,&DAT_14a346578);
    if (-1 < iVar8) {
      (**(code **)(*local_50 + 0x28))(local_50,2);
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((PVOID)param_1[0x16] != (PVOID)0xffffffffffffffff) {
    RemoveVectoredExceptionHandler((PVOID)param_1[0x16]);
  }
  FreeLibrary((HMODULE)param_1[0x14]);
  FreeLibrary((HMODULE)param_1[0x17]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x105));
  puVar5 = (undefined8 *)param_1[0xf9];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf4));
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe4));
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xdf) = 0;
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  FUN_1456f4a0c(param_1 + 0xd6);
  param_1[0xa8] = &PTR_LAB_14a1e4500;
  if (param_1[199] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[199] + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1456f47d2(param_1[0xa7]);
  if (param_1[0xa6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xa6] + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x9b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x9b] + 0x10))();
  }
  if ((longlong *)param_1[0x9a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x9a] + 0x10))();
  }
  if ((longlong *)param_1[0x99] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x99] + 0x10))();
  }
  if ((longlong *)param_1[0x98] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x98] + 0x10))();
  }
  if ((longlong *)param_1[0x97] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x97] + 0x10))();
  }
  if ((longlong *)param_1[0x96] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x96] + 0x10))();
  }
  FUN_1456f4ae8(param_1 + 0x57);
  FUN_1456f4a78(param_1 + 0x47);
  if ((longlong *)param_1[0x46] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x46] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402cbcca FreeLibrary body=7 status=ok
// SIG BOOL FreeLibrary(HMODULE hLibModule)

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001402cbcca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



// FUNCTION 1402cbcd2 FUN_1402cbcd2 body=380 status=ok
// SIG undefined FUN_1402cbcd2(void)

void FUN_1402cbcd2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  size_t _Size;
  void *pvVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if ((*(char *)(param_1 + 0x1f0) == '\x01') && (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0)
     ) {
    _Size = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x58))();
    if (_Size != 0) {
      uStack_30 = CONCAT44(uStack_30._4_4_,(int)_Size);
      if ((int)_Size == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        FUN_1447403be(&local_38,0);
        pvVar3 = local_38;
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x60))
                        (*(longlong **)(param_1 + 0x1e8),pvVar3,_Size);
      if (iVar2 < 0) {
        local_50 = &local_48;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        FUN_145763094(iVar2,"PipelineLibrary->Serialize(LibraryData.GetData(), LibrarySize)",
                      ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState.cpp",0x1e7);
      }
      pvVar3 = local_38;
      *(undefined8 *)(param_1 + 0x1c0) = 0xc;
      FUN_1473870d2(param_1 + 0x188,_Size,0);
      if (*(char *)(param_1 + 0x1c9) == '\0') {
        memcpy((void *)(*(longlong *)(param_1 + 0x198) + *(longlong *)(param_1 + 0x1c0)),pvVar3,
               _Size);
        *(longlong *)(param_1 + 0x1c0) = *(longlong *)(param_1 + 0x1c0) + _Size;
      }
    }
  }
  FUN_147387340(param_1 + 0x188);
  FUN_1402cd97c(param_1);
  plVar1 = *(longlong **)(param_1 + 0x1e8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cbe50 FUN_1402cbe50 body=444 status=ok
// SIG undefined FUN_1402cbe50(void)

void FUN_1402cbe50(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  lVar4 = local_60;
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar5 = *(int *)(local_60 + 0x18);
  iVar14 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      lVar8 = *(longlong *)(*plVar1 + 0xf0 + (longlong)iVar7 * 0x100);
      if (lVar8 != 0) {
        if (*(longlong **)(lVar8 + 0x90) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar8 + 0x90) + 0x10))();
        }
        if (*(longlong **)(lVar8 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar8 + 8) + 0x10))();
        }
        FUN_1400020a8(lVar8);
        iVar5 = *(int *)(lVar4 + 0x18);
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      lVar8 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar8 = lVar4;
      }
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)(lVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)(lVar8 + lVar11 * 4 + 4 + lVar9 * 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar11 == lVar9) goto LAB_1402cbfa4;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1402cbfa4:
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    FUN_1402cc00e(plVar1);
    FUN_1402cc158(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cc00e FUN_1402cc00e body=328 status=ok
// SIG undefined FUN_1402cc00e(void)

void FUN_1402cc00e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xfc + (longlong)iVar4 * 0x100) * 4) =
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



// FUNCTION 1402cc158 FUN_1402cc158 body=435 status=ok
// SIG undefined FUN_1402cc158(void)

void FUN_1402cc158(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar12 = (int)local_68;
  uVar8 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar11 = 0xc0;
      do {
        if (*(longlong *)((longlong)iVar6 * 0x100 + lVar10 + -8 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != 0);
      uVar8 = uVar8 & ~(uint)uVar13;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar12;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar8;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar12) {
          iVar3 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar3 - lVar10 == lVar11) goto LAB_1402cc289;
        }
        iVar12 = iVar12 + (int)lVar11 + 1;
        uVar8 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1402cc289:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1458130c8(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cc30c FUN_1402cc30c body=45 status=ok
// SIG undefined FUN_1402cc30c(void)

void FUN_1402cc30c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_14493e5fa(*(undefined8 *)(param_1 + 0x10 + lVar1 * 8),0x14,0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  return;
}



// FUNCTION 1402cc33a FUN_1402cc33a body=353 status=ok
// SIG undefined FUN_1402cc33a(void)

void FUN_1402cc33a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402cc3bf;
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
LAB_1402cc3bf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402cc49c FUN_1402cc49c body=38 status=ok
// SIG undefined FUN_1402cc49c(void)

undefined8 FUN_1402cc49c(undefined8 param_1,int param_2)

{
  FUN_1402cc500();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402cc500 FUN_1402cc500 body=162 status=ok
// SIG undefined FUN_1402cc500(void)

void FUN_1402cc500(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a34ab30;
  if ((param_1[0x19] != 0) && (puVar2 = (undefined8 *)param_1[0x19], puVar2 != (undefined8 *)0x0)) {
    param_1[0x19] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x1a];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x19];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1402cc6b6(param_1);
  return;
}



// FUNCTION 1402cc5a2 FUN_1402cc5a2 body=275 status=ok
// SIG undefined FUN_1402cc5a2(void)

void FUN_1402cc5a2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a34cdd8;
  lVar4 = param_1[7];
  if ((lVar4 == 0) || (DAT_14c760b88 == '\0')) {
LAB_1402cc5e0:
    if (lVar4 == 0) goto LAB_1402cc5ed;
  }
  else if (*(longlong *)(lVar4 + 8) != 0) {
    FUN_1402cd10a(param_1[2] + 0x90);
    lVar4 = param_1[7];
    goto LAB_1402cc5e0;
  }
  FUN_1400020a8(lVar4);
LAB_1402cc5ed:
  if ((param_1[10] != 0) && ((DAT_14c9ac110 & 1) != 0)) {
    GFSDK_Aftermath_DX12_UnregisterResource();
  }
  if ((*(byte *)((longlong)param_1 + 0x92) & 4) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca778c0);
    plVar2 = (longlong *)param_1[4];
    if (plVar2 != (longlong *)0x0) {
      param_1[4] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca778c0);
  }
  lVar4 = param_1[0x1c];
  if (lVar4 != 0) {
    FUN_145788bac(lVar4);
    FUN_1400020a8(lVar4);
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 1402cc6b6 FUN_1402cc6b6 body=61 status=ok
// SIG undefined FUN_1402cc6b6(void)

void FUN_1402cc6b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1e64d0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1402cc6f4 FUN_1402cc6f4 body=133 status=ok
// SIG undefined FUN_1402cc6f4(void)

void FUN_1402cc6f4(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  ppuVar1 = &PTR_FUN_14a34c3b8;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a34c3b8;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = *(undefined ***)(param_1 + 0x18);
  }
  *(longlong *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  (*(code *)ppuVar1[1])((undefined8 *)(param_1 + 0x18),0);
  FUN_1402cc779(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1402cc779 FUN_1402cc779 body=149 status=ok
// SIG undefined FUN_1402cc779(void)

void FUN_1402cc779(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  longlong lVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[1] = (longlong)&PTR_FUN_14a34c3c8;
    lVar4 = param_1[2];
    ppuVar3 = &PTR_FUN_14a34c3c8;
    if (lVar4 != 0) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        FUN_1400020a8();
        param_1[2] = lVar4;
      } while (lVar4 != 0);
      ppuVar3 = (undefined **)param_1[1];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    (*(code *)ppuVar3[1])(param_1 + 1,0);
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)();
      }
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1402cc80e FUN_1402cc80e body=43 status=ok
// SIG undefined FUN_1402cc80e(void)

void FUN_1402cc80e(longlong *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1402cc83a FUN_1402cc83a body=87 status=ok
// SIG undefined FUN_1402cc83a(void)

void FUN_1402cc83a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  while (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(param_1 + 0x28);
    FUN_1400020a8();
  }
  lVar3 = 0x10;
  do {
    puVar2 = *(undefined8 **)(param_1 + lVar3);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1402cc892 FUN_1402cc892 body=337 status=ok
// SIG undefined FUN_1402cc892(void)

void FUN_1402cc892(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = *param_1;
  uVar8 = (uint)uVar2;
  while ((uVar2 & 0x3ffffff) != 0) {
    uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar6 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
    uVar7 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar6 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar5 | *(uint *)(lVar3 + 0x10 + uVar7 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar3 + uVar7 * 0x18 + 0x10) = 0;
      puVar4 = *(undefined8 **)
                (*(longlong *)(&DAT_14c833b00 + uVar6 * 8) + 8 + (ulonglong)(uVar8 & 0x3fff) * 0x18)
      ;
      FUN_1447d080c(uVar8 & 0x3ffffff);
      if (puVar4 == (undefined8 *)0x0) break;
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar2 = *param_1;
    uVar8 = (uint)uVar2;
  }
  FUN_1456f5780(param_1);
  return;
}



// FUNCTION 1402cc9e4 FUN_1402cc9e4 body=38 status=ok
// SIG undefined FUN_1402cc9e4(void)

undefined8 FUN_1402cc9e4(undefined8 param_1,int param_2)

{
  FUN_1402cca0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402cca0a FUN_1402cca0a body=290 status=ok
// SIG undefined FUN_1402cca0a(void)

void FUN_1402cca0a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a349150;
  puVar2 = (undefined8 *)param_1[0x37];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ccb2c(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ccb2c(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ccb2c(param_1 + 9);
  FUN_14476c499(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_14476c499(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402ccb2c FUN_1402ccb2c body=55 status=ok
// SIG undefined FUN_1402ccb2c(void)

void FUN_1402ccb2c(longlong *param_1)

{
  FUN_1402ccb64(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402ccb64 FUN_1402ccb64 body=526 status=ok
// SIG undefined FUN_1402ccb64(void)

void FUN_1402ccb64(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1402cccb3;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*param_1 + (longlong)iVar5 * 0x18);
      if (lVar12 != 0) {
        LOCK();
        piVar2 = (int *)(lVar12 + 0x478);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          FUN_1402cd3ea(*(undefined8 *)(lVar12 + 0x10));
        }
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_1402cccb3;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_1402cccb3:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar6 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1402ccd72 FUN_1402ccd72 body=340 status=ok
// SIG undefined FUN_1402ccd72(void)

void FUN_1402ccd72(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = *param_1;
  uVar7 = (uint)uVar2;
  while ((uVar2 & 0x3ffffff) != 0) {
    uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar5 = (ulonglong)((uVar7 & 0x3ffffff) >> 0xe);
    uVar6 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar4 | *(uint *)(lVar3 + 0x10 + uVar6 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar3 + uVar6 * 0x18 + 0x10) = 0;
      lVar3 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar7 & 0x3ffffff);
      if (lVar3 == 0) break;
      FUN_1402ccec6(lVar3);
      FUN_1400020a8(lVar3);
    }
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
  }
  FUN_1456f57cc(param_1);
  return;
}



// FUNCTION 1402ccec6 FUN_1402ccec6 body=108 status=ok
// SIG undefined FUN_1402ccec6(void)

void FUN_1402ccec6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (DAT_14c760b88 != '\0')) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && ((DAT_14c9ac110 & 1) != 0)) {
    GFSDK_Aftermath_ReleaseContextHandle();
  }
  FUN_141789bfa(param_1 + 0x90);
  FUN_14315cda0(param_1 + 0x18);
  return;
}



// FUNCTION 1402ccf32 FUN_1402ccf32 body=472 status=ok
// SIG undefined FUN_1402ccf32(void)

void FUN_1402ccf32(ulonglong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar3 = *param_1;
  uVar10 = (uint)uVar3;
  while ((uVar3 & 0x3ffffff) != 0) {
    uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar7 >> 0x1a < uVar3 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar8 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
    uVar9 = (ulonglong)((uint)uVar3 & 0x3fff);
    lVar4 = *(longlong *)(&DAT_14c833b00 + uVar8 * 8);
    LOCK();
    uVar2 = *param_1;
    if (uVar3 == uVar2) {
      *param_1 = uVar7 | *(uint *)(lVar4 + 0x10 + uVar9 * 0x18);
    }
    UNLOCK();
    if (uVar3 == uVar2) {
      *(undefined4 *)(lVar4 + uVar9 * 0x18 + 0x10) = 0;
      lVar4 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar8 * 8) + 8 + (ulonglong)(uVar10 & 0x3fff) * 0x18)
      ;
      FUN_1447d080c(uVar10 & 0x3ffffff);
      if (lVar4 == 0) break;
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x28);
        piVar1 = (int *)(lVar5 + 0xd8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x48))(*(longlong **)(lVar5 + 0x20),0,0);
          *(undefined8 *)(lVar5 + 0x48) = 0;
        }
        *(undefined8 *)(lVar4 + 0x30) = 0;
      }
      if ((DAT_14c760b88 == '\x01') && (*(longlong *)(lVar4 + 0x48) != 0)) {
        FUN_1402cd10a(*(longlong *)(lVar4 + 0x10) + 0x90,lVar4 + 0x40);
      }
      if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
      }
      puVar6 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      FUN_1400020a8(lVar4);
    }
    uVar3 = *param_1;
    uVar10 = (uint)uVar3;
  }
  FUN_1456f588c(param_1);
  return;
}



// FUNCTION 1402cd10a FUN_1402cd10a body=104 status=ok
// SIG undefined FUN_1402cd10a(void)

void FUN_1402cd10a(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  lVar1 = *(longlong *)(param_2 + 0x10a);
  **(longlong **)(param_2 + 0x10c) = lVar1;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x10c);
  if (*param_2 == 0) {
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) - *(longlong *)(param_2 + 4);
  }
  else {
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001402cd163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  return;
}



// FUNCTION 1402cd172 FUN_1402cd172 body=370 status=ok
// SIG undefined FUN_1402cd172(void)

void FUN_1402cd172(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = *param_1;
  uVar8 = (uint)uVar2;
  while ((uVar2 & 0x3ffffff) != 0) {
    uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar6 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
    uVar7 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar6 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar5 | *(uint *)(lVar3 + 0x10 + uVar7 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar3 + uVar7 * 0x18 + 0x10) = 0;
      lVar3 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar6 * 8) + 8 + (ulonglong)(uVar8 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar8 & 0x3ffffff);
      if (lVar3 == 0) break;
      plVar4 = *(longlong **)(lVar3 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
        (**(code **)(*plVar4 + 0x10))();
        if (*(longlong **)(lVar3 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x10))();
        }
      }
      FUN_1400020a8(lVar3);
    }
    uVar2 = *param_1;
    uVar8 = (uint)uVar2;
  }
  FUN_1456f5950(param_1);
  return;
}



// FUNCTION 1402cd2e4 FUN_1402cd2e4 body=125 status=ok
// SIG undefined FUN_1402cd2e4(void)

void FUN_1402cd2e4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x30);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8);
      if (lVar2 != 0) {
        puVar3 = *(undefined8 **)(lVar2 + 8);
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        FUN_1400020a8(lVar2);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  FUN_146319e52((longlong *)(param_1 + 0x28));
  return;
}



// FUNCTION 1402cd362 FUN_1402cd362 body=136 status=ok
// SIG undefined FUN_1402cd362(void)

void FUN_1402cd362(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x10))();
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_147379ca8((longlong *)(param_1 + 0x30));
  }
  LeaveCriticalSection(lpCriticalSection);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001402cd3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1402cd3ea FUN_1402cd3ea body=327 status=ok
// SIG undefined FUN_1402cd3ea(void)

ulonglong FUN_1402cd3ea(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar2 = *(int *)(param_2 + 0x1c) - 1;
  if (uVar2 < 5) {
    lVar5 = *(longlong *)(&DAT_14a34c780 + (ulonglong)uVar2 * 8);
  }
  else {
    lVar5 = 0;
  }
  uVar2 = FUN_14493c560();
  if (uVar2 == 0) {
    uVar3 = 0;
    uVar9 = 0;
    lVar7 = 0;
  }
  else {
    uVar9 = (ulonglong)(uVar2 >> 0xe);
    uVar3 = uVar2 & 0x3fff;
    lVar7 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
  }
  puVar8 = (ulonglong *)(param_1 + lVar5 * 0x40 + 0x9c0);
  *(longlong *)(lVar7 + 8) = param_2;
  do {
    uVar1 = *puVar8;
    uVar4 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar1 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    if (uVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar3 * 0x18);
    }
    *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
    LOCK();
    uVar6 = *puVar8;
    bVar10 = uVar1 == uVar6;
    if (bVar10) {
      *puVar8 = uVar4 | uVar2;
      uVar6 = uVar1;
    }
    UNLOCK();
  } while (!bVar10);
  return uVar6;
}



// FUNCTION 1402cd532 FUN_1402cd532 body=555 status=ok
// SIG undefined FUN_1402cd532(void)

void FUN_1402cd532(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
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
  plVar6 = local_60;
  iVar17 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar11 = local_58._4_4_;
  iVar13 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar15 = *(longlong *)(*param_1 + 0x38 + (longlong)iVar11 * 0x48);
      if (lVar15 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar15 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar15 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar15 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar15;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar18 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar18) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar18 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar18) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar15 = (longlong)iVar17;
      uVar10 = *(uint *)((longlong)plVar9 + lVar15 * 4) & uVar14;
      if (uVar10 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar5 = iVar11;
        if (iVar11 < iVar17) {
          iVar5 = iVar17;
        }
        if (iVar11 <= iVar17) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar10 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar15 * 4 + 4);
          if (uVar10 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar5 - lVar15 == lVar12) goto LAB_1402cd6c3;
        }
        iVar17 = iVar17 + (int)lVar12 + 1;
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_1402cd6c3:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cd75e FUN_1402cd75e body=540 status=ok
// SIG undefined FUN_1402cd75e(void)

void FUN_1402cd75e(longlong *param_1)

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
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x48);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x44 + lVar10 * 0x48) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x40 + lVar10 * 0x48) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1402cd931;
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
LAB_1402cd931:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cd97c FUN_1402cd97c body=889 status=ok
// SIG undefined FUN_1402cd97c(void)

void FUN_1402cd97c(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  local_60 = param_1 + 0x20;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  lVar6 = local_60;
  iVar13 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    do {
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x300 + (longlong)iVar8 * 0x310);
      if (((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) == 0) &&
         (DAT_14ca76a80 != '\0')) {
        if (puVar4 != (undefined8 *)0x0) {
LAB_1402cdce7:
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      else if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) goto LAB_1402cdce7;
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      lVar9 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar9 = lVar6;
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      lVar12 = (longlong)iVar13;
      uVar7 = *(uint *)(lVar9 + lVar12 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar13) {
          iVar5 = iVar13;
        }
        if (iVar8 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)(lVar9 + lVar12 * 4 + 4 + lVar10 * 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_1402cdb00;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar15 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_1402cdb00:
  FUN_1456f5c14((longlong *)(param_1 + 0x10));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
  local_60 = param_1 + 0x70;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  lVar6 = local_60;
  iVar13 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    do {
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x60 + (longlong)iVar8 * 0x70);
      if (((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) == 0) &&
         (DAT_14ca76a80 != '\0')) {
        if (puVar4 != (undefined8 *)0x0) {
LAB_1402cdcbb:
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      else if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) goto LAB_1402cdcbb;
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      lVar9 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar9 = lVar6;
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      lVar12 = (longlong)iVar13;
      uVar7 = *(uint *)(lVar9 + lVar12 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar13) {
          iVar5 = iVar13;
        }
        if (iVar8 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)(lVar9 + lVar12 * 4 + 4 + lVar10 * 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_1402cdc68;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar15 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_1402cdc68:
  FUN_1456f5caa((longlong *)(param_1 + 0x60));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cdcf6 FUN_1402cdcf6 body=541 status=ok
// SIG undefined FUN_1402cdcf6(void)

void FUN_1402cdcf6(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x70;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + 0x50 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x6c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x68 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1402cdeca;
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
LAB_1402cdeca:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



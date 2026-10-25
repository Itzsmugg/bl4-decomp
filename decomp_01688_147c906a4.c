// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c906a4 FUN_147c906a4 body=267 status=ok
// SIG undefined FUN_147c906a4(void)

void FUN_147c906a4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_2[1];
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(int *)(*param_1 + (longlong)iVar1 * 4) = (int)lVar2;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x40400000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x41300000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x40000000;
  return;
}



// FUNCTION 147c907b0 FUN_147c907b0 body=94 status=ok
// SIG undefined FUN_147c907b0(void)

void FUN_147c907b0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_14173150e(param_1,iVar2);
  }
  FUN_146eecc76((longlong)iVar2 * 200 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147c9080e FUN_147c9080e body=463 status=ok
// SIG undefined FUN_147c9080e(void)

void FUN_147c9080e(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  undefined4 local_58;
  ushort *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401a0912();
  bVar5 = DAT_14c7618a8 == 1;
  local_50 = (ushort *)0x0;
  local_48 = 2;
  FUN_1447cd5fa(&local_50,2,0);
  *local_50 = (ushort)bVar5;
  bVar5 = true;
  do {
    bVar2 = bVar5;
    uVar3 = (ulonglong)((byte)~bVar2 & 1);
    if (*(longlong *)(param_1 + 0x368 + uVar3 * 8) == 0) {
      lVar1 = uVar3 * 8 + 0x368;
      puVar4 = (undefined8 *)FUN_14001cc68(0x120,0x10);
      *puVar4 = 0;
      puVar4[0x16] = 0;
      puVar4[0x17] = 0;
      puVar4[0x18] = 0;
      puVar4[0x19] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x20] = 0;
      puVar4[0x21] = 0;
      puVar4[0x22] = 0;
      puVar4[0x23] = 0;
      *(undefined8 **)(param_1 + lVar1) = puVar4;
      if (DAT_14caf8690 == 1) {
        local_60 = (undefined4 *)0x0;
        local_58 = 1;
        FUN_1474ab05a(&local_60,1,0);
        *local_60 = 2;
      }
      else {
        local_60 = (undefined4 *)0x0;
        local_58 = 0xc;
        FUN_1474ab05a(&local_60,0xc,0);
        *(undefined8 *)(local_60 + 8) = 0xa00000009;
        *(undefined8 *)(local_60 + 10) = 0x100000000f;
        *(undefined8 *)(local_60 + 4) = 0x600000005;
        *(undefined8 *)(local_60 + 6) = 0x800000007;
        *local_60 = 1;
        local_60[1] = 2;
        local_60[2] = 3;
        local_60[3] = 4;
        FUN_147ca6621(local_60,local_58);
      }
      FUN_143647a6e(*(undefined8 *)(param_1 + lVar1),&local_60);
      if (local_60 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    bVar5 = false;
  } while (bVar2);
  if (local_50 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c909de FUN_147c909de body=223 status=ok
// SIG undefined FUN_147c909de(void)

void FUN_147c909de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_144a7e84a();
  FUN_14748d4c2(param_1 + 0x2f8,param_1 + 0x308);
  FUN_14748d4c2(param_1 + 0x2b8,param_1 + 0x2c8);
  iVar1 = *(int *)(param_1 + 0x2d4);
  FUN_1408bc7be(*(undefined8 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2d0));
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2d4) != 0)) {
    FUN_146eee2a6(param_1 + 0x2c8,0);
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
    if (lVar2 == 0) goto LAB_147c90a7f;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
  }
  if (*(longlong *)(lVar2 + 0x218) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x218) + 800))();
  }
LAB_147c90a7f:
  FUN_1448c6f34(param_1);
  return;
}



// FUNCTION 147c90abe FUN_147c90abe body=187 status=ok
// SIG undefined FUN_147c90abe(void)

void FUN_147c90abe(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_3 == '\0') {
    iVar2 = *(int *)(param_1 + 0x2d0);
    *(uint *)(param_1 + 0x2d0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2d4) < iVar2 + 1U) {
      FUN_14173150e(param_1 + 0x2c8,iVar2);
    }
    FUN_1403c2a98((longlong)iVar2 * 200 + *(longlong *)(param_1 + 0x2c8),param_2);
    plVar1 = (longlong *)(param_1 + 0x2d8);
    iVar2 = *(int *)(param_1 + 0x2e0);
    *(uint *)(param_1 + 0x2e0) = iVar2 + 1U;
    if (iVar2 + 1U <= *(uint *)(param_1 + 0x2e4)) goto LAB_147c90b5b;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x2a8);
    iVar2 = *(int *)(param_1 + 0x2b0);
    *(uint *)(param_1 + 0x2b0) = iVar2 + 1U;
    if (iVar2 + 1U <= *(uint *)(param_1 + 0x2b4)) goto LAB_147c90b5b;
  }
  FUN_14173150e(plVar1,iVar2);
LAB_147c90b5b:
  FUN_1403c2a98((longlong)iVar2 * 200 + *plVar1,param_2);
  return;
}



// FUNCTION 147c90b7a FUN_147c90b7a body=187 status=ok
// SIG undefined FUN_147c90b7a(void)

void FUN_147c90b7a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_3 == '\0') {
    iVar2 = *(int *)(param_1 + 0x310);
    *(uint *)(param_1 + 0x310) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x314) < iVar2 + 1U) {
      FUN_14173150e(param_1 + 0x308,iVar2);
    }
    FUN_1403c2a98((longlong)iVar2 * 200 + *(longlong *)(param_1 + 0x308),param_2);
    plVar1 = (longlong *)(param_1 + 0x318);
    iVar2 = *(int *)(param_1 + 800);
    *(uint *)(param_1 + 800) = iVar2 + 1U;
    if (iVar2 + 1U <= *(uint *)(param_1 + 0x324)) goto LAB_147c90c17;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x2e8);
    iVar2 = *(int *)(param_1 + 0x2f0);
    *(uint *)(param_1 + 0x2f0) = iVar2 + 1U;
    if (iVar2 + 1U <= *(uint *)(param_1 + 0x2f4)) goto LAB_147c90c17;
  }
  FUN_14173150e(plVar1,iVar2);
LAB_147c90c17:
  FUN_1403c2a98((longlong)iVar2 * 200 + *plVar1,param_2);
  return;
}



// FUNCTION 147c90c36 FUN_147c90c36 body=76 status=ok
// SIG undefined FUN_147c90c36(void)

void FUN_147c90c36(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x360);
  *(uint *)(param_1 + 0x360) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x364) < iVar1 + 1U) {
    FUN_14173150e((longlong *)(param_1 + 0x358),iVar1);
  }
  FUN_1403c2a98((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x358),param_2);
  return;
}



// FUNCTION 147c90c82 FUN_147c90c82 body=126 status=ok
// SIG undefined FUN_147c90c82(void)

void FUN_147c90c82(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    local_28 = param_2;
    FUN_146ef0f10(param_1 + 0x308,&local_28);
    param_1 = param_1 + 0x318;
  }
  else {
    param_1 = param_1 + 0x2e8;
  }
  local_28 = param_2;
  FUN_146ef0f10(param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c90d02 FUN_147c90d02 body=613 status=ok
// SIG undefined FUN_147c90d02(void)

void FUN_147c90d02(longlong param_1,byte param_2,double *param_3,undefined4 param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80;
  longlong local_78 [2];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = (ulonglong)(param_2 ^ 1) * 0x10;
  local_78[0] = 0;
  local_78[1] = 0;
  local_64 = param_4;
  FUN_1448158c6(local_78,&local_64,*(undefined4 *)(param_1 + 0x2b0 + uVar9));
  lVar5 = (longlong)*(int *)(param_1 + 0x2b0 + uVar9);
  local_88 = uVar9;
  local_80 = param_1;
  if (lVar5 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x2a8 + uVar9);
    lVar5 = lVar5 * 200 + lVar11;
    iVar8 = 0;
    do {
      lVar7 = param_5[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar2 = *param_5;
        lVar10 = 0;
        do {
          cVar4 = FUN_146e90c1a(lVar10 + lVar2,lVar11);
          if (cVar4 != '\0') {
            iVar3 = (int)(lVar10 / 200);
            if (iVar3 != -1) {
              puVar6 = (undefined4 *)((longlong)iVar3 * 200 + *param_5 + 0x18);
              goto LAB_147c90dd2;
            }
            break;
          }
          lVar10 = lVar10 + 200;
        } while ((longlong)(int)lVar7 * 200 - lVar10 != 0);
      }
      puVar6 = &local_64;
LAB_147c90dd2:
      lVar7 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(local_78[0] + lVar7 * 4) = *puVar6;
      lVar11 = lVar11 + 200;
    } while (lVar11 != lVar5);
  }
  uVar9 = local_88 | 0x2a8;
  FUN_1408bc7be(*param_5,(int)param_5[1]);
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    FUN_146eee2a6(param_5,0);
  }
  lVar5 = (longlong)*(int *)(local_80 + 8 + uVar9);
  if (lVar5 != 0) {
    lVar11 = *(longlong *)(local_80 + uVar9);
    lVar5 = lVar5 * 200;
    iVar8 = 0;
    do {
      if ((((*(double *)(lVar11 + 0x20) < param_3[3] || *(double *)(lVar11 + 0x20) == param_3[3]) &&
           (*param_3 < *(double *)(lVar11 + 0x38) || *param_3 == *(double *)(lVar11 + 0x38))) &&
          (*(double *)(lVar11 + 0x28) < param_3[4] || *(double *)(lVar11 + 0x28) == param_3[4])) &&
         (((param_3[1] < *(double *)(lVar11 + 0x40) || param_3[1] == *(double *)(lVar11 + 0x40) &&
           (*(double *)(lVar11 + 0x30) < param_3[5] || *(double *)(lVar11 + 0x30) == param_3[5])) &&
          (param_3[2] < *(double *)(lVar11 + 0x48) || param_3[2] == *(double *)(lVar11 + 0x48))))) {
        uVar1 = *(undefined4 *)(local_78[0] + (longlong)iVar8 * 4);
        iVar3 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
          FUN_14173150e(param_5,iVar3);
        }
        lVar7 = *param_5;
        FUN_1403c2a98(lVar7 + (longlong)iVar3 * 200,lVar11);
        *(undefined4 *)(lVar7 + 0x18 + (longlong)iVar3 * 200) = uVar1;
      }
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + 200;
      lVar5 = lVar5 + -200;
    } while (lVar5 != 0);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c90f68 FUN_147c90f68 body=613 status=ok
// SIG undefined FUN_147c90f68(void)

void FUN_147c90f68(longlong param_1,byte param_2,double *param_3,undefined4 param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80;
  longlong local_78 [2];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = (ulonglong)(param_2 ^ 1) * 0x10;
  local_78[0] = 0;
  local_78[1] = 0;
  local_64 = param_4;
  FUN_1448158c6(local_78,&local_64,*(undefined4 *)(param_1 + 0x2f0 + uVar9));
  lVar5 = (longlong)*(int *)(param_1 + 0x2f0 + uVar9);
  local_88 = uVar9;
  local_80 = param_1;
  if (lVar5 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x2e8 + uVar9);
    lVar5 = lVar5 * 200 + lVar11;
    iVar8 = 0;
    do {
      lVar7 = param_5[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar2 = *param_5;
        lVar10 = 0;
        do {
          cVar4 = FUN_146e90c1a(lVar10 + lVar2,lVar11);
          if (cVar4 != '\0') {
            iVar3 = (int)(lVar10 / 200);
            if (iVar3 != -1) {
              puVar6 = (undefined4 *)((longlong)iVar3 * 200 + *param_5 + 0x18);
              goto LAB_147c91038;
            }
            break;
          }
          lVar10 = lVar10 + 200;
        } while ((longlong)(int)lVar7 * 200 - lVar10 != 0);
      }
      puVar6 = &local_64;
LAB_147c91038:
      lVar7 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(local_78[0] + lVar7 * 4) = *puVar6;
      lVar11 = lVar11 + 200;
    } while (lVar11 != lVar5);
  }
  uVar9 = local_88 | 0x2e8;
  FUN_1408bc7be(*param_5,(int)param_5[1]);
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    FUN_146eee2a6(param_5,0);
  }
  lVar5 = (longlong)*(int *)(local_80 + 8 + uVar9);
  if (lVar5 != 0) {
    lVar11 = *(longlong *)(local_80 + uVar9);
    lVar5 = lVar5 * 200;
    iVar8 = 0;
    do {
      if ((((*(double *)(lVar11 + 0x20) < param_3[3] || *(double *)(lVar11 + 0x20) == param_3[3]) &&
           (*param_3 < *(double *)(lVar11 + 0x38) || *param_3 == *(double *)(lVar11 + 0x38))) &&
          (*(double *)(lVar11 + 0x28) < param_3[4] || *(double *)(lVar11 + 0x28) == param_3[4])) &&
         (((param_3[1] < *(double *)(lVar11 + 0x40) || param_3[1] == *(double *)(lVar11 + 0x40) &&
           (*(double *)(lVar11 + 0x30) < param_3[5] || *(double *)(lVar11 + 0x30) == param_3[5])) &&
          (param_3[2] < *(double *)(lVar11 + 0x48) || param_3[2] == *(double *)(lVar11 + 0x48))))) {
        uVar1 = *(undefined4 *)(local_78[0] + (longlong)iVar8 * 4);
        iVar3 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
          FUN_14173150e(param_5,iVar3);
        }
        lVar7 = *param_5;
        FUN_1403c2a98(lVar7 + (longlong)iVar3 * 200,lVar11);
        *(undefined4 *)(lVar7 + 0x18 + (longlong)iVar3 * 200) = uVar1;
      }
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + 200;
      lVar5 = lVar5 + -200;
    } while (lVar5 != 0);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c911ce thunk_FUN_14364af3c body=5 status=ok
// SIG undefined thunk_FUN_14364af3c(void)

void thunk_FUN_14364af3c(longlong *param_1,int param_2,longlong param_3,longlong *param_4,
                        longlong *param_5)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  ulonglong uStack_78;
  longlong *plStack_70;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0 < (int)param_1[1]) && ((int)param_4[1] == (int)param_5[1])) {
    uStack_68 = 0;
    dVar2 = *(double *)(param_3 + 0x78);
    lVar12 = 0;
    uStack_78 = 0;
    plStack_70 = param_4;
    iStack_64 = (int)param_4[1];
    do {
      lVar13 = lVar12 * 200;
      lVar8 = *(longlong *)(*param_1 + lVar13);
      *(double *)(param_3 + 0x78) = (double)((float)dVar2 - *(float *)(*param_1 + 0x18 + lVar13));
      plVar6 = (longlong *)FUN_1403c252d();
      iVar10 = -1;
      if ((longlong)(int)plVar6[1] != 0) {
        lVar9 = (longlong)(int)plVar6[1] << 3;
        lVar11 = 0;
        do {
          if (*(longlong *)(*plVar6 + lVar11 * 8) == lVar8) {
            iVar10 = (int)lVar11;
            break;
          }
          lVar11 = lVar11 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      iVar5 = 0;
      if (iVar10 < 0x14) {
        iVar5 = iVar10;
      }
      if (iVar10 == -1) {
        iVar5 = 0;
      }
      if ((iVar5 == param_2) &&
         (plVar6 = *(longlong **)(*param_1 + 8 + lVar13), plVar6 != (longlong *)0x0)) {
        uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,param_3);
        uStack_78 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        if (0 < (int)param_5[1]) {
          lVar8 = 0x10;
          lVar13 = 0;
          do {
            lVar9 = *param_5;
            lVar11 = *param_4;
            dVar3 = *(double *)(lVar11 + lVar8);
            dVar4 = *(double *)(lVar11 + -8 + lVar8);
            *(double *)(lVar9 + -0x10 + lVar8) =
                 *(double *)(lVar9 + -0x10 + lVar8) + *(double *)(lVar11 + -0x10 + lVar8);
            *(double *)(lVar9 + -8 + lVar8) = *(double *)(lVar9 + -8 + lVar8) + dVar4;
            *(double *)(lVar9 + lVar8) = *(double *)(lVar9 + lVar8) + dVar3;
            lVar13 = lVar13 + 1;
            lVar8 = lVar8 + 0x18;
          } while (lVar13 < (int)param_5[1]);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[1]);
    if ((uStack_78 & 1) != 0) goto LAB_14364b0ae;
  }
  iVar10 = (int)param_4[1];
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != iVar10) {
    FUN_1447a8aa0(param_5,iVar10);
  }
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    iVar5 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
      FUN_1403e3958(param_5,iVar5);
    }
    lVar12 = *param_5;
    puVar1 = (undefined8 *)(lVar12 + (longlong)iVar5 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar12 + 0x10 + (longlong)iVar5 * 0x18) = 0;
  }
LAB_14364b0ae:
  if ((uStack_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c911d3 thunk_FUN_14364b13d body=5 status=ok
// SIG undefined thunk_FUN_14364b13d(void)

void thunk_FUN_14364b13d(longlong *param_1,int param_2,longlong param_3,longlong *param_4,
                        longlong *param_5)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  ulonglong uStack_78;
  longlong *plStack_70;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0 < (int)param_1[1]) && ((int)param_4[1] == (int)param_5[1])) {
    uStack_68 = 0;
    dVar1 = *(double *)(param_3 + 0x78);
    lVar9 = 0;
    uStack_78 = 0;
    plStack_70 = param_4;
    iStack_64 = (int)param_4[1];
    do {
      lVar10 = lVar9 * 200;
      lVar5 = *(longlong *)(*param_1 + lVar10);
      *(double *)(param_3 + 0x78) = (double)((float)dVar1 - *(float *)(*param_1 + 0x18 + lVar10));
      plVar3 = (longlong *)FUN_1403c252d();
      iVar6 = -1;
      if ((longlong)(int)plVar3[1] != 0) {
        lVar7 = (longlong)(int)plVar3[1] << 3;
        lVar8 = 0;
        do {
          if (*(longlong *)(*plVar3 + lVar8 * 8) == lVar5) {
            iVar6 = (int)lVar8;
            break;
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      iVar2 = 0;
      if (iVar6 < 0x14) {
        iVar2 = iVar6;
      }
      if (iVar6 == -1) {
        iVar2 = 0;
      }
      if ((iVar2 == param_2) &&
         (plVar3 = *(longlong **)(*param_1 + 8 + lVar10), plVar3 != (longlong *)0x0)) {
        uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,param_3);
        uStack_78 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        if (0 < (int)param_5[1]) {
          lVar5 = 0;
          do {
            *(float *)(*param_5 + lVar5 * 4) =
                 *(float *)(*param_5 + lVar5 * 4) + *(float *)(*param_4 + lVar5 * 4);
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)param_5[1]);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[1]);
    if ((uStack_78 & 1) != 0) goto LAB_14364b296;
  }
  plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
  FUN_1448158c6(param_5,&plStack_70,(int)param_4[1]);
LAB_14364b296:
  if ((uStack_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c911d8 thunk_FUN_14364b2c3 body=5 status=ok
// SIG undefined thunk_FUN_14364b2c3(void)

void thunk_FUN_14364b2c3(longlong *param_1,int param_2,longlong param_3,longlong *param_4,
                        longlong *param_5)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  ulonglong uStack_78;
  longlong *plStack_70;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0 < (int)param_1[1]) && ((int)param_4[1] == (int)param_5[1])) {
    uStack_68 = 0;
    dVar2 = *(double *)(param_3 + 0x78);
    lVar10 = 0;
    uStack_78 = 0;
    plStack_70 = param_4;
    iStack_64 = (int)param_4[1];
    do {
      lVar11 = lVar10 * 200;
      lVar6 = *(longlong *)(*param_1 + lVar11);
      *(double *)(param_3 + 0x78) = (double)((float)dVar2 - *(float *)(*param_1 + 0x18 + lVar11));
      plVar4 = (longlong *)FUN_1403c252d();
      iVar7 = -1;
      if ((longlong)(int)plVar4[1] != 0) {
        lVar8 = (longlong)(int)plVar4[1] << 3;
        lVar9 = 0;
        do {
          if (*(longlong *)(*plVar4 + lVar9 * 8) == lVar6) {
            iVar7 = (int)lVar9;
            break;
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      iVar3 = 0;
      if (iVar7 < 0x14) {
        iVar3 = iVar7;
      }
      if (iVar7 == -1) {
        iVar3 = 0;
      }
      if ((iVar3 == param_2) &&
         (plVar4 = *(longlong **)(*param_1 + 8 + lVar11), plVar4 != (longlong *)0x0)) {
        uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,param_3);
        uStack_78 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (0 < (int)param_5[1]) {
          lVar6 = 0;
          do {
            piVar1 = (int *)(*param_5 + lVar6 * 4);
            *piVar1 = *piVar1 + *(int *)(*param_4 + lVar6 * 4);
            lVar6 = lVar6 + 1;
          } while (lVar6 < (int)param_5[1]);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[1]);
    if ((uStack_78 & 1) != 0) goto LAB_14364b413;
  }
  plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
  FUN_1448156a8(param_5,&plStack_70,(int)param_4[1]);
LAB_14364b413:
  if ((uStack_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c911de FUN_147c911de body=90 status=ok
// SIG undefined FUN_147c911de(void)

void FUN_147c911de(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_147ca6a02(param_1);
    iVar2 = (int)param_1[1];
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_1406ea252(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return;
}



// FUNCTION 147c9124c FUN_147c9124c body=1094 status=ok
// SIG undefined FUN_147c9124c(void)

longlong FUN_147c9124c(longlong param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar16 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  fVar17 = *(float *)(param_2 + 0x3ac);
  fVar18 = *(float *)(param_2 + 0x3b0);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  *(float *)(param_1 + 0x78) = fVar18;
  fVar18 = fVar18 - fVar17;
  if (fVar18 <= 1e-05) {
    fVar18 = 1e-05;
  }
  fVar1 = *(float *)(param_2 + 0x390);
  *(double *)(param_1 + 0xc0) = (double)(1.0 / fVar18);
  *(double *)(param_1 + 200) = (double)(-fVar17 * (1.0 / fVar18));
  *(double *)(param_1 + 0xd0) = (double)fVar1;
  fVar17 = *(float *)(param_2 + 0x3b4);
  if (89.9 <= fVar17) {
    fVar17 = 89.9;
  }
  if (fVar17 <= 0.1) {
    fVar17 = 0.1;
  }
  fVar18 = cosf((fVar17 * 3.1415927) / 180.0);
  fVar17 = *(float *)(param_2 + 0x3b8);
  if (89.9 <= fVar17) {
    fVar17 = 89.9;
  }
  if (fVar17 <= 0.1) {
    fVar17 = 0.1;
  }
  fVar17 = cosf((fVar17 * 3.1415927) / 180.0);
  fVar18 = fVar18 - fVar17;
  if (fVar18 <= 1e-05) {
    fVar18 = 1e-05;
  }
  *(double *)(param_1 + 0xd8) = (double)(1.0 / fVar18);
  *(double *)(param_1 + 0xe0) = (double)(-fVar17 * (1.0 / fVar18));
  puVar14 = (undefined8 *)(param_2 + 0x3e0);
  puVar15 = (undefined8 *)(param_1 + 0x100);
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar14 = (undefined8 *)(param_2 + 0x460);
  puVar15 = (undefined8 *)(param_1 + 0x180);
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    uVar16 = *(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x18);
  }
  *(undefined8 *)(param_1 + 0x250) = uVar16;
  dVar8 = *(double *)(param_2 + 0x240);
  dVar9 = *(double *)(param_2 + 0x248);
  dVar10 = *(double *)(param_2 + 0x250);
  dVar11 = *(double *)(param_2 + 0x280);
  dVar12 = *(double *)(param_2 + 0x288);
  dStack_100 = *(double *)(param_2 + 0x290);
  dVar20 = dVar9 + dVar9;
  dVar2 = dVar10 + dVar10;
  dVar19 = dVar8 * (dVar8 + dVar8);
  dVar5 = (1.0 - (dVar10 * dVar2 + dVar19)) * dVar12;
  local_f8 = (1.0 - (dVar19 + dVar9 * dVar20)) * dStack_100;
  dVar7 = *(double *)(param_2 + 0x240) * dVar2;
  dVar19 = *(double *)(param_2 + 600);
  dVar3 = dVar2 * dVar19;
  dVar4 = (dVar8 + dVar8) * *(double *)(param_2 + 600);
  dVar19 = dVar20 * dVar19;
  dVar6 = (dVar20 * dVar8 + dVar3) * dVar11;
  local_118 = (dVar2 * dVar9 + dVar4) * dVar12;
  local_108 = (dVar19 + dVar7) * dStack_100;
  local_138 = (dVar7 - dVar19) * dVar11;
  dStack_100 = (dVar2 * dVar9 - dVar4) * dStack_100;
  local_148._8_4_ = SUB84(dVar6,0);
  local_148._0_8_ = (1.0 - (dVar10 * dVar2 + dVar9 * dVar20)) * dVar11;
  local_148._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  uStack_130 = 0;
  local_128._8_4_ = SUB84(dVar5,0);
  local_128._0_8_ = (dVar20 * dVar8 - dVar3) * dVar12;
  local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  uStack_110 = 0;
  uStack_f0 = 0;
  local_e8 = *(undefined8 *)(param_2 + 0x260);
  uStack_e0 = *(undefined8 *)(param_2 + 0x268);
  local_d8 = *(undefined8 *)(param_2 + 0x270);
  uStack_d0 = 0x3ff0000000000000;
  FUN_147288854(param_1);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0x394);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x398);
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9169e FUN_147c9169e body=131 status=ok
// SIG undefined FUN_147c9169e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147c9169e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf89c8) {
    FUN_144b3d300(&DAT_14caf89c8);
    if (DAT_14caf89c8 == -1) {
      DAT_14caf89b0 = 0;
      _DAT_14caf89b8 = 0;
      _DAT_14caf89c0 = 2;
      _DAT_14caf89a8 = &PTR_FUN_14aa4c7d0;
      atexit(FUN_14364b5e9);
      _Init_thread_footer(&DAT_14caf89c8);
    }
  }
  return &DAT_14caf89a8;
}



// FUNCTION 147c91728 FUN_147c91728 body=124 status=ok
// SIG undefined FUN_147c91728(void)

void FUN_147c91728(longlong *param_1,longlong param_2)

{
  byte bVar1;
  
  if (param_1[6] != 0) {
    *(undefined8 *)(param_1[6] + 0x430) = 0;
  }
  if (param_1 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  bVar1 = DAT_14c950c29;
  *(longlong **)(param_2 + 0x430) = param_1;
  if ((param_2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  param_1[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x000147c91787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
  return;
}



// FUNCTION 147c917a4 FUN_147c917a4 body=174 status=ok
// SIG undefined FUN_147c917a4(void)

void FUN_147c917a4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_140475d9a();
  local_38 = param_4[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = *(undefined8 *)(param_2 + 4);
  local_98 = param_5;
  local_90 = param_1;
  FUN_1479910e2(uVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9185c FUN_147c9185c body=100 status=ok
// SIG undefined FUN_147c9185c(void)

void FUN_147c9185c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_30 = param_2;
  uVar1 = FUN_14477b072(local_28,DAT_14caf97b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c918ce FUN_147c918ce body=21 status=ok
// SIG undefined FUN_147c918ce(void)

void FUN_147c918ce(longlong param_1,longlong *param_2,longlong *param_3)

{
  *param_2 = param_1 + 0x2e18;
  *param_3 = param_1 + 0x2e28;
  return;
}



// FUNCTION 147c918e4 FUN_147c918e4 body=125 status=ok
// SIG undefined FUN_147c918e4(void)

undefined8 FUN_147c918e4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (*param_1 == lVar1) {
    lVar1 = param_2[0x148];
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (param_1[0x148] == lVar1) {
      uVar2 = FUN_14799272e(param_1 + 2,param_2 + 2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147c91962 FUN_147c91962 body=86 status=ok
// SIG undefined FUN_147c91962(void)

void FUN_147c91962(longlong param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x2de0) < 1) && (DAT_14cb0d2b0 != 0)) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_144a7b302(lVar1);
      if (lVar1 != 0) {
        FUN_1434080aa(lVar1,1.0 - *(float *)(param_1 + 0x3d0));
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c919b8 FUN_147c919b8 body=138 status=ok
// SIG undefined FUN_147c919b8(void)

longlong FUN_147c919b8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x2d88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2d80);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      lVar6 = *param_2;
      if ((((lVar6 == 0) || (lVar5 = FUN_1410ec160(), lVar5 == 0)) ||
          (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *param_2;
      }
      if (lVar4 == lVar6) {
        return lVar3;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return 0;
}



// FUNCTION 147c91a42 FUN_147c91a42 body=126 status=ok
// SIG undefined FUN_147c91a42(void)

undefined8 FUN_147c91a42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x2d88);
    if (0 < (int)uVar2) {
      lVar1 = *(longlong *)(param_1 + 0x2d80);
      _Size = (longlong)(int)uVar2 * 8;
      uVar3 = 0;
      do {
        _Size = _Size - 8;
        if (*(longlong *)(lVar1 + uVar3 * 8) == param_2) {
          if (uVar2 - 1 != (int)uVar3) {
            memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + uVar3 * 8 + 8),_Size);
            uVar2 = *(uint *)(param_1 + 0x2d88);
          }
          *(uint *)(param_1 + 0x2d88) = uVar2 - 1;
          FUN_147ca6c5c((longlong *)(param_1 + 0x2d80));
          return 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return 0;
}



// FUNCTION 147c91b10 FUN_147c91b10 body=383 status=ok
// SIG undefined FUN_147c91b10(void)

void FUN_147c91b10(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a78 [32];
  undefined1 local_a58 [152];
  undefined4 local_9c0;
  char local_9bc;
  longlong local_9b8;
  undefined4 local_9b0;
  undefined1 local_9a8 [2088];
  longlong local_180;
  longlong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8 [12];
  char local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  memcpy(local_a58,param_1 + 0x88,0x98);
  local_9bc = *(char *)((longlong)param_1 + 0x4dc);
  if (local_9bc == '\x01') {
    local_9c0 = (undefined4)param_1[0x9b];
  }
  local_9b0 = (undefined4)param_1[0x9d];
  local_9b8 = param_1[0x9c];
  FUN_144903306(local_9a8,param_1 + 0x9e);
  local_e8 = param_1[0x1b6];
  lStack_e0 = param_1[0x1b7];
  local_d8 = param_1[0x1b8];
  lStack_d0 = param_1[0x1b9];
  local_68 = (char)param_1[0x1c6];
  if (local_68 == '\x01') {
    plVar3 = param_1 + 0x1ba;
    plVar4 = local_c8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *plVar4 = *plVar3;
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
    }
  }
  local_38 = param_1[0x1cc];
  local_58 = (undefined4)param_1[0x1c8];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0xe44);
  uStack_50 = (undefined4)param_1[0x1c9];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xe4c);
  local_48 = (undefined4)param_1[0x1ca];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0xe54);
  uStack_40 = (undefined4)param_1[0x1cb];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xe5c);
  bVar1 = (**(code **)(*param_1 + 0x748))(param_1,local_a58);
  *(uint *)(param_1 + 0x5cb) = *(uint *)(param_1 + 0x5cb) & 0xfffff7ff | (uint)bVar1 << 0xb;
  FUN_140475e1a(param_1,local_a58);
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c91c90 FUN_147c91c90 body=1488 status=ok
// SIG undefined FUN_147c91c90(void)

void FUN_147c91c90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  double param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  longlong local_88 [2];
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = (**(code **)(*param_1 + 0x670))();
  *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  local_74 = 0;
  local_88[0] = *(longlong *)(param_1[0x86] + 0x18);
  FUN_1400021e4(local_88,&local_98);
  puVar8 = &DAT_149dfb77a;
  puVar10 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar10 = (undefined2 *)CONCAT44(uStack_94,local_98);
  }
  local_b0 = param_2 + 0xa8;
  FUN_1400021e4(param_1 + 0x74,&local_a8);
  if (local_a0 != 0) {
    puVar8 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
  }
  FUN_140002266(local_88,L"   Camera Style:%s main ViewTarget:%s",puVar8,puVar10);
  lVar5 = local_b0;
  FUN_147d8f316(local_b0,local_88,&local_74);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d0] != 0) {
    local_a8 = 0;
    local_88[0] = *(longlong *)(param_1[0x1d0] + 0x18);
    FUN_1400021e4(local_88,&local_98);
    if (local_90 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)CONCAT44(uStack_94,local_98);
    }
    FUN_140002266(local_88,L"   PendingViewTarget:%s",puVar8);
    FUN_147d8f316(lVar5,local_88,&local_a8);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_94,local_98) != 0) {
      FUN_1400020a8();
    }
  }
  local_74 = 0;
  fVar1 = *(float *)(lVar7 + 0x30);
  FUN_1467fafc0(lVar7 + 0x18,&local_98);
  puVar8 = &DAT_149dfb77a;
  puVar10 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar10 = (undefined2 *)CONCAT44(uStack_94,local_98);
  }
  FUN_141706e52(lVar7,&local_a8);
  if (local_a0 != 0) {
    puVar8 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
  }
  local_c8 = (double)fVar1;
  FUN_140002266(local_88,L"   CamLoc:%s CamRot:%s FOV:%f",puVar8,puVar10);
  lVar5 = local_b0;
  FUN_147d8f316(local_b0,local_88,&local_74);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  FUN_140002266(local_88,L"   AspectRatio: %1.3f",(double)*(float *)(lVar7 + 0x94));
  FUN_147d8f316(lVar5,local_88,&local_98);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  fVar1 = *(float *)(param_1 + 0x31a);
  fVar2 = *(float *)((longlong)param_1 + 0x18d4);
  dVar4 = (double)((fVar2 - fVar1) / fVar2);
  if ((fVar2 == 0.0) && (!NAN(fVar2))) {
    dVar4 = 0.0;
  }
  if (param_1[0x1d0] == 0) {
    FUN_140056680(&local_98,&DAT_149e01fe8);
  }
  else {
    local_88[0] = *(longlong *)(param_1[0x1d0] + 0x18);
    FUN_1400021e4(local_88,&local_98);
  }
  if (local_90 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)CONCAT44(uStack_94,local_98);
  }
  if (param_1[0x86] == 0) {
    FUN_140056680(&local_a8,&DAT_149e01fe8);
  }
  else {
    local_88[0] = *(longlong *)(param_1[0x86] + 0x18);
    FUN_1400021e4(local_88,&local_a8);
  }
  if (local_a0 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
  }
  local_c8 = (double)fVar1;
  local_c0 = dVar4;
  FUN_140002266(local_88,L"   ViewTarget Blend: From %s to %s, time remaining = %f, pct = %f",
                puVar10,puVar8);
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  FUN_147d8f316(lVar5,local_88);
  lVar5 = param_1[0x5b1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = param_1[0x5b0];
    lVar9 = 0;
    do {
      local_c8 = param_5;
      (**(code **)(**(longlong **)(lVar3 + lVar9) + 0x2a8))
                (*(longlong **)(lVar3 + lVar9),param_2,param_3,param_4);
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
  }
  local_74 = 0;
  FUN_140002266(&local_a8,L"X=%3.3f Y=%3.3f",*(undefined8 *)(lVar7 + 0x980),
                *(undefined8 *)(lVar7 + 0x988));
  lVar5 = local_b0;
  if (local_a0 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
  }
  FUN_140002266(&local_98,L"   Foreground: FOV:%f Proj Offset:%s",(double)*(float *)(lVar7 + 0x68),
                puVar8);
  FUN_147d8f316(lVar5,&local_98,&local_74);
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(lVar7 + 0xa0);
  if ((uVar6 & 1) != 0) {
    local_a8 = 0;
    local_c8 = *(double *)(lVar7 + 0x48);
    FUN_140002266(&local_98,L"   ForegroundLocation: (%f,%f,%f)",*(undefined8 *)(lVar7 + 0x38),
                  *(undefined8 *)(lVar7 + 0x40));
    FUN_147d8f316(lVar5,&local_98,&local_a8);
    if (CONCAT44(uStack_94,local_98) != 0) {
      FUN_1400020a8();
    }
    uVar6 = *(uint *)(lVar7 + 0xa0);
  }
  if ((uVar6 & 2) != 0) {
    local_a8 = 0;
    local_c8 = *(double *)(lVar7 + 0x60);
    FUN_140002266(&local_98,L"   ForegroundRotation: (y=%f,p=%f,r=%f)",*(undefined8 *)(lVar7 + 0x58)
                  ,*(undefined8 *)(lVar7 + 0x50));
    FUN_147d8f316(lVar5,&local_98,&local_a8);
    if (CONCAT44(uStack_94,local_98) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c92262 FUN_147c92262 body=919 status=ok
// SIG undefined FUN_147c92262(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147c92262(longlong *param_1,double *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_14b8 [32];
  double local_1498;
  double local_1490;
  double local_1488;
  undefined4 local_1400;
  char local_13fc;
  undefined8 local_13f8;
  undefined4 local_13f0;
  undefined1 local_13e8 [2088];
  longlong local_bc0;
  longlong local_b38;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 auStack_b08 [12];
  char local_aa8;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined8 local_a78;
  double local_a68;
  double local_a60;
  double local_a58;
  undefined4 local_9d0;
  char local_9cc;
  undefined8 local_9c8;
  undefined4 local_9c0;
  undefined1 local_9b8 [2088];
  longlong local_190;
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [12];
  char local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_14b8;
  FUN_1478b6f28();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x670))(param_1);
  memcpy(&local_a68,pvVar1,0x98);
  local_9cc = *(char *)((longlong)pvVar1 + 0x9c);
  if (local_9cc == '\x01') {
    local_9d0 = *(undefined4 *)((longlong)pvVar1 + 0x98);
  }
  local_9c0 = *(undefined4 *)((longlong)pvVar1 + 0xa8);
  local_9c8 = *(undefined8 *)((longlong)pvVar1 + 0xa0);
  FUN_144903306(local_9b8,(longlong)pvVar1 + 0xb0);
  local_f8 = *(undefined8 *)((longlong)pvVar1 + 0x970);
  uStack_f0 = *(undefined8 *)((longlong)pvVar1 + 0x978);
  local_e8 = *(undefined8 *)((longlong)pvVar1 + 0x980);
  uStack_e0 = *(undefined8 *)((longlong)pvVar1 + 0x988);
  local_78 = *(char *)((longlong)pvVar1 + 0x9f0);
  if (local_78 == '\x01') {
    puVar3 = (undefined8 *)((longlong)pvVar1 + 0x990);
    puVar4 = auStack_d8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_48 = *(undefined8 *)((longlong)pvVar1 + 0xa20);
  local_68 = *(undefined8 *)((longlong)pvVar1 + 0xa00);
  uStack_60 = *(undefined8 *)((longlong)pvVar1 + 0xa08);
  local_58 = *(undefined4 *)((longlong)pvVar1 + 0xa10);
  uStack_54 = *(undefined4 *)((longlong)pvVar1 + 0xa14);
  uStack_50 = *(undefined4 *)((longlong)pvVar1 + 0xa18);
  uStack_4c = *(undefined4 *)((longlong)pvVar1 + 0xa1c);
  local_a68 = *param_2 + local_a68;
  local_a60 = param_2[1] + local_a60;
  local_a58 = param_2[2] + local_a58;
  (**(code **)(*param_1 + 0x660))(param_1);
  pvVar1 = (void *)(**(code **)(*param_1 + 0x678))(param_1);
  memcpy(&local_1498,pvVar1,0x98);
  local_13fc = *(char *)((longlong)pvVar1 + 0x9c);
  if (local_13fc == '\x01') {
    local_1400 = *(undefined4 *)((longlong)pvVar1 + 0x98);
  }
  local_13f0 = *(undefined4 *)((longlong)pvVar1 + 0xa8);
  local_13f8 = *(undefined8 *)((longlong)pvVar1 + 0xa0);
  FUN_144903306(local_13e8,(longlong)pvVar1 + 0xb0);
  uStack_b28 = *(undefined8 *)((longlong)pvVar1 + 0x970);
  uStack_b20 = *(undefined8 *)((longlong)pvVar1 + 0x978);
  local_b18 = *(undefined8 *)((longlong)pvVar1 + 0x980);
  uStack_b10 = *(undefined8 *)((longlong)pvVar1 + 0x988);
  local_aa8 = *(char *)((longlong)pvVar1 + 0x9f0);
  if (local_aa8 == '\x01') {
    puVar3 = (undefined8 *)((longlong)pvVar1 + 0x990);
    puVar4 = auStack_b08;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_a78 = *(undefined8 *)((longlong)pvVar1 + 0xa20);
  local_a98 = *(undefined8 *)((longlong)pvVar1 + 0xa00);
  uStack_a90 = *(undefined8 *)((longlong)pvVar1 + 0xa08);
  local_a88 = *(undefined4 *)((longlong)pvVar1 + 0xa10);
  uStack_a84 = *(undefined4 *)((longlong)pvVar1 + 0xa14);
  uStack_a80 = *(undefined4 *)((longlong)pvVar1 + 0xa18);
  uStack_a7c = *(undefined4 *)((longlong)pvVar1 + 0xa1c);
  local_1498 = *param_2 + local_1498;
  local_1490 = param_2[1] + local_1490;
  local_1488 = param_2[2] + local_1488;
  (**(code **)(*param_1 + 0x668))(param_1,&local_1498);
  param_1[0x88] = (longlong)(*param_2 + (double)param_1[0x88]);
  param_1[0x89] = (longlong)(param_2[1] + (double)param_1[0x89]);
  param_1[0x8a] = (longlong)(param_2[2] + (double)param_1[0x8a]);
  param_1[0x1d2] = (longlong)(*param_2 + (double)param_1[0x1d2]);
  param_1[0x1d3] = (longlong)(param_2[1] + (double)param_1[0x1d3]);
  param_1[0x1d4] = (longlong)(param_2[2] + (double)param_1[0x1d4]);
  if (local_aa8 == '\x01') {
    local_aa8 = '\0';
  }
  if (local_b38 != 0) {
    FUN_1400020a8();
  }
  if (local_bc0 != 0) {
    FUN_1400020a8();
  }
  if (local_78 == '\x01') {
    local_78 = '\0';
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_14b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c925fa FUN_147c925fa body=614 status=ok
// SIG undefined FUN_147c925fa(void)

longlong * FUN_147c925fa(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_3;
  if (0 < *(int *)(param_1 + 0x2e08)) {
    lVar10 = 8;
    lVar8 = 0;
    local_60 = param_1;
    do {
      lVar9 = *(longlong *)(local_60 + 0x2e00);
      lVar1 = *(longlong *)(lVar9 + -8 + lVar10);
      *param_2 = lVar1;
      if ((DAT_14c950c29 == 1) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
      }
      param_2[1] = *(longlong *)(lVar9 + lVar10);
      lVar9 = *local_68;
      if ((((lVar9 == 0) || (lVar3 = FUN_144a6c4d8(), lVar3 == 0)) ||
          (*(int *)(lVar9 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)*local_68;
      }
      lVar9 = plVar5[0x22];
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        lVar9 = plVar5[0x22];
      }
      if ((lVar9 == 0) || (DAT_14c950c29 == 0)) {
        if (lVar9 != 0) goto LAB_147c926d4;
        plVar5 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c(lVar9);
LAB_147c926d4:
        uVar4 = FUN_1458d48aa();
        plVar5 = (longlong *)FUN_144718840(lVar9,uVar4);
      }
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
        lVar3 = *(longlong *)(lVar1 + 0x10);
        lVar7 = *local_68;
        if ((lVar7 == 0) ||
           (((lVar6 = FUN_144a6c4d8(), lVar6 == 0 ||
             (*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38))) ||
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
             lVar6 + 0x30)))) {
          lVar7 = 0;
        }
        else {
          lVar7 = *local_68;
        }
        if (lVar3 == lVar7) goto LAB_147c9282c;
        plVar11 = (longlong *)0x0;
        if (*param_2 != 0) {
          plVar11 = (longlong *)param_2[1];
        }
        local_50 = *local_68;
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        cVar2 = (**(code **)(*plVar11 + 0x48))(plVar11,&local_50);
        if (cVar2 != '\0') goto LAB_147c9282c;
        if (plVar5 != (longlong *)0x0 && lVar9 != 0) {
          local_58 = *(longlong *)(lVar1 + 0x10);
          if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c();
          }
          cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_58);
          if (cVar2 != '\0') goto LAB_147c9282c;
        }
      }
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar8 < *(int *)(local_60 + 0x2e08));
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147c9282c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147c92862 FUN_147c92862 body=1150 status=ok
// SIG undefined FUN_147c92862(void)

longlong * FUN_147c92862(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined8 local_170;
  undefined1 local_168 [104];
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  longlong local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar6 = *param_3;
  if (lVar6 == 0) {
LAB_147c928b8:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_198);
  }
  lVar3 = FUN_144a6c4d8();
  if ((((lVar3 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30)) || (lVar6 = *param_3, lVar6 == 0)) goto LAB_147c928b8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_144a6c4d8();
  if (((lVar3 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)*param_3;
  }
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  if ((lVar6 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar6 != 0) goto LAB_147c92950;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_147c92950:
    uVar4 = FUN_1458d48aa();
    plVar5 = (longlong *)FUN_144718840(lVar6,uVar4);
    FUN_144a6c4d8();
    if (plVar5 != (longlong *)0x0 && lVar6 != 0) {
      cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if (cVar2 == '\0') {
        local_d0 = *param_3;
        if ((local_d0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        (**(code **)(*param_1 + 0x790))(param_1,&local_c8,&local_d0);
        if (DAT_14c950c29 == 1) {
          if (local_c8 == 0) {
            *param_2 = 0;
            param_2[1] = (longlong)plStack_c0;
            goto LAB_147c92987;
          }
          FUN_1456cec3c();
        }
        *param_2 = local_c8;
        param_2[1] = (longlong)plStack_c0;
        if (plStack_c0 != (longlong *)0x0 && local_c8 != 0) {
          (**(code **)(*plStack_c0 + 0x58))(plStack_c0);
        }
      }
    }
  }
LAB_147c92987:
  if ((*param_2 != 0) && (param_2[1] != 0)) goto LAB_147c9299c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_97 = 1;
  local_95 = 0;
  plVar5 = (longlong *)0x0;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_b8 = (**(code **)(*(longlong *)param_1[0x72] + 0x6b8))();
  lStack_b0 = param_1[0x36];
  local_98 = 1;
  local_94 = 0x48;
  local_96 = 4;
  lVar6 = *param_3;
  if (lVar6 != 0) {
    lVar3 = FUN_144a6c4d8();
    if (((lVar3 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)*param_3;
    }
  }
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  (**(code **)(*param_1 + 0x720))(param_1,local_e8,local_100);
  local_178 = (**(code **)(*param_1 + 0x6e8))(param_1);
  FUN_14798fb38(local_168,lVar6,local_e8,local_100);
  uVar4 = FUN_1447210f0(param_1);
  lVar6 = *param_3;
  if (lVar6 == 0) {
LAB_147c92b6d:
    lVar6 = 0;
  }
  else {
    lVar3 = FUN_144a6c4d8();
    if (((lVar3 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147c92b6d;
    lVar6 = *param_3;
  }
  local_170 = FUN_141037e38(uVar4,lVar6,local_168,&local_c8);
  FUN_147c92ce2(param_2);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0 && *param_2 != 0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,param_1);
    iVar1 = (int)param_1[0x5c1];
    *(uint *)(param_1 + 0x5c1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2e0c) < iVar1 + 1U) {
      FUN_147ca6cf8(param_1 + 0x5c0,iVar1);
    }
    lVar6 = param_1[0x5c0];
    lVar3 = *param_2;
    *(longlong *)(lVar6 + (longlong)iVar1 * 0x10) = lVar3;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(lVar6 + (longlong)iVar1 * 0x10 + 8) = param_2[1];
    local_178 = local_178 & 0xffffff00;
    FUN_14113775c(*param_2,local_168,1,0);
  }
  if (local_88 != 0) {
    plVar5 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar5 = local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
LAB_147c9299c:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147c92ce2 FUN_147c92ce2 body=105 status=ok
// SIG undefined FUN_147c92ce2(void)

longlong * FUN_147c92ce2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_147c92d2f;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = FUN_1458d48aa();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
LAB_147c92d2f:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 147c92d4c FUN_147c92d4c body=69 status=ok
// SIG undefined FUN_147c92d4c(void)

void FUN_147c92d4c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_147ca6d7e(param_1 + 0x2e00,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c92d92 FUN_147c92d92 body=162 status=ok
// SIG undefined FUN_147c92d92(void)

void FUN_147c92d92(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x2e08)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2e00) + lVar3);
      if (lVar1 != 0) {
        lVar2 = FUN_144a6c4d8();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_140aeefbc(lVar1,0,1);
        }
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x2e08));
  }
  *(undefined4 *)(param_1 + 0x2e08) = 0;
  if (*(int *)(param_1 + 0x2e0c) == 0) {
    return;
  }
  FUN_147ca6ede((longlong *)(param_1 + 0x2e00));
  return;
}



// FUNCTION 147c92e34 FUN_147c92e34 body=112 status=ok
// SIG undefined FUN_147c92e34(void)

undefined8 FUN_147c92e34(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x790))(param_1,local_28,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c92ea6 FUN_147c92ea6 body=112 status=ok
// SIG undefined FUN_147c92ea6(void)

undefined8 FUN_147c92ea6(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x798))(param_1,local_28,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c92f18 FUN_147c92f18 body=152 status=ok
// SIG undefined FUN_147c92f18(void)

void FUN_147c92f18(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_28 = param_2;
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2 + 0x3e0;
  if (param_2 == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x7a0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c92fb2 FUN_147c92fb2 body=193 status=ok
// SIG undefined FUN_147c92fb2(void)

undefined8
FUN_147c92fb2(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_5[2];
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_1c = '\0';
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_60 = *param_2;
  local_58 = param_3;
  local_54 = param_4;
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar1 = (**(code **)(*param_1 + 0x7c8))(param_1,&local_60,&local_58);
  if (local_1c == '\x01') {
    local_1c = '\0';
  }
  FUN_1449db362(&uStack_30);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c93074 FUN_147c93074 body=210 status=ok
// SIG undefined FUN_147c93074(void)

undefined8
FUN_147c93074(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(param_6 + 4);
  local_58 = *param_6;
  uStack_54 = param_6[1];
  uStack_50 = param_6[2];
  uStack_4c = param_6[3];
  local_5c = param_5;
  local_38 = 0;
  local_30 = 0;
  local_24 = '\0';
  local_68 = *param_2;
  local_60 = param_4;
  local_40 = param_3;
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar1 = (**(code **)(*param_1 + 0x7c8))(param_1,&local_68,&local_60);
  if (local_24 == '\x01') {
    local_24 = '\0';
  }
  FUN_1449db362(&local_38);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c93148 FUN_147c93148 body=172 status=ok
// SIG undefined FUN_147c93148(void)

undefined8 FUN_147c93148(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_1411080a4();
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) &&
       ((lVar1 = *param_2, lVar1 != 0 &&
        (plVar2 = *(longlong **)(param_1 + 0x2e10), plVar2 != (longlong *)0x0)))) {
      local_30 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      uVar4 = (**(code **)(*plVar2 + 0x310))(plVar2,&local_30,param_3);
      goto LAB_147c93195;
    }
  }
  uVar4 = 0;
LAB_147c93195:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c93216 FUN_147c93216 body=170 status=ok
// SIG undefined FUN_147c93216(void)

void FUN_147c93216(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_1411080a4();
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) &&
       ((lVar1 = *param_2, lVar1 != 0 &&
        (plVar2 = *(longlong **)(param_1 + 0x2e10), plVar2 != (longlong *)0x0)))) {
      local_30 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      (**(code **)(*plVar2 + 0x328))(plVar2,&local_30,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c932dc FUN_147c932dc body=191 status=ok
// SIG undefined FUN_147c932dc(void)

void FUN_147c932dc(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_1411080a4();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar1 = *param_2;
      if ((param_3 != 0 && lVar1 != 0) &&
         (plVar2 = *(longlong **)(param_1 + 0x2e10), plVar2 != (longlong *)0x0)) {
        local_38 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        (**(code **)(*plVar2 + 0x338))(plVar2,&local_38,param_3,param_4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c933bc FUN_147c933bc body=265 status=ok
// SIG undefined FUN_147c933bc(void)

void FUN_147c933bc(longlong *param_1,double *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x730))(param_1,&local_58);
  local_48 = param_2[2] - local_48;
  dVar2 = (*param_2 - local_58) * (*param_2 - local_58) +
          (param_2[1] - local_50) * (param_2[1] - local_50);
  if (param_4 <= param_3) {
    if (local_48 * local_48 + dVar2 < (double)(param_3 * param_3)) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = 0.0;
    }
  }
  else {
    fVar1 = (float)((SQRT(local_48 * local_48 + dVar2) - (double)param_3) /
                   (double)(param_4 - param_3));
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = powf(1.0 - fVar1,param_5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar1);
}



// FUNCTION 147c934c6 FUN_147c934c6 body=586 status=ok
// SIG undefined FUN_147c934c6(void)

void FUN_147c934c6(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d8 [6];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (0 < *(int *)(param_1 + 0x238)) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x230) + lVar5);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x448) != 0)) {
        local_98 = param_3[2];
        local_a8 = *(undefined4 *)param_3;
        uStack_a4 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_a0 = *(undefined4 *)(param_3 + 1);
        uStack_9c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_128 = (undefined4 *)CONCAT44(local_128._4_4_,param_6);
        uVar6 = FUN_147c933bc(*(longlong *)(lVar1 + 0x448),&local_a8,param_4,param_5);
        if ((param_7 == '\0') || (*(longlong *)(lVar1 + 0x3d0) == 0)) {
          local_108 = DAT_14c846508;
          local_118 = (undefined4)DAT_14c8464f8;
          uStack_114 = DAT_14c8464f8._4_4_;
          uStack_110 = (undefined4)DAT_14c846500;
          uStack_10c = DAT_14c846500._4_4_;
          local_120 = *param_2;
          if ((local_120 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_128 = &local_118;
          plVar2 = &local_120;
          uVar3 = 0;
        }
        else {
          (**(code **)(**(longlong **)(lVar1 + 0x448) + 0x730))
                    (*(longlong **)(lVar1 + 0x448),&local_c0);
          local_e0 = param_3[2] - local_b0;
          local_e8 = param_3[1] - local_b8;
          local_f0 = *param_3 - local_c0;
          FUN_144a79a9c(&local_f0,local_d8);
          local_f8 = *param_2;
          if ((local_f8 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_128 = local_d8;
          plVar2 = &local_f8;
          uVar3 = 2;
        }
        FUN_147c93712(lVar1,plVar2,uVar6,uVar3);
      }
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x238));
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c93712 FUN_147c93712 body=181 status=ok
// SIG undefined FUN_147c93712(void)

void FUN_147c93712(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      FUN_1456cec3c();
      local_68 = *param_2;
    }
  }
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  local_48 = *(undefined8 *)(param_5 + 4);
  local_60 = param_3;
  local_5c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14caf97e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c937c8 FUN_147c937c8 body=215 status=ok
// SIG undefined FUN_147c937c8(void)

void FUN_147c937c8(longlong param_1,float param_2,float param_3,undefined4 param_4,
                  undefined8 *param_5,byte param_6,byte param_7)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x2e58);
  *(uint *)(param_1 + 0x2e58) = uVar2 | 8;
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 0x3c0) = *param_5;
  *(undefined8 *)(param_1 + 0x3c8) = uVar1;
  *(double *)(param_1 + 0x2de8) = (double)param_2;
  *(double *)(param_1 + 0x2df0) = (double)param_3;
  *(undefined4 *)(param_1 + 0x2df8) = param_4;
  *(undefined4 *)(param_1 + 0x2dfc) = param_4;
  uVar2 = uVar2 & 0xffffffef | 8 | (uint)param_6 << 4;
  *(uint *)(param_1 + 0x2e58) = uVar2;
  if ((param_6 != 0) && (0 < *(int *)(param_1 + 0x2de0))) {
    FUN_14788cab4(param_1 + 0x2dd8,
                  -(uint)(ABS(param_3 + -1.0) <= 1e-08 || param_2 < param_3) & 0xffffff01);
    uVar2 = *(uint *)(param_1 + 0x2e58);
  }
  *(uint *)(param_1 + 0x2e58) = (uVar2 & 0xffffcfff) + (uint)param_7 * 0x1000 + 0x2000;
  return;
}



// FUNCTION 147c938ce FUN_147c938ce body=90 status=ok
// SIG undefined FUN_147c938ce(void)

void FUN_147c938ce(longlong *param_1,undefined4 param_2,undefined4 *param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x5cb);
  *(uint *)(param_1 + 0x5cb) = uVar1 | 8;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 0x78) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = uVar2;
  *(undefined4 *)(param_1 + 0x79) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar4;
  *(undefined4 *)(param_1 + 0x7a) = param_2;
  *(uint *)(param_1 + 0x5cb) = uVar1 & 0xffffdfef | 8 | (uint)param_4 << 4;
  (**(code **)(*param_1 + 0x768))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x2dfc) = 0;
  return;
}



// FUNCTION 147c93928 FUN_147c93928 body=242 status=ok
// SIG undefined FUN_147c93928(void)

void * FUN_147c93928(longlong *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(param_2,_Src,0x98);
  cVar1 = *(char *)((longlong)_Src + 0x9c);
  *(char *)((longlong)param_2 + 0x9c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_2 + 0x98) = *(undefined4 *)((longlong)_Src + 0x98);
  }
  *(undefined4 *)((longlong)param_2 + 0xa8) = *(undefined4 *)((longlong)_Src + 0xa8);
  *(undefined8 *)((longlong)param_2 + 0xa0) = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306((longlong)param_2 + 0xb0,(longlong)_Src + 0xb0);
  uVar2 = *(undefined8 *)((longlong)_Src + 0x978);
  uVar3 = *(undefined8 *)((longlong)_Src + 0x980);
  uVar4 = *(undefined8 *)((longlong)_Src + 0x988);
  *(undefined8 *)((longlong)param_2 + 0x970) = *(undefined8 *)((longlong)_Src + 0x970);
  *(undefined8 *)((longlong)param_2 + 0x978) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0x980) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0x988) = uVar4;
  cVar1 = *(char *)((longlong)_Src + 0x9f0);
  *(char *)((longlong)param_2 + 0x9f0) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = (undefined8 *)((longlong)_Src + 0x990);
    puVar7 = (undefined8 *)((longlong)param_2 + 0x990);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined8 *)((longlong)param_2 + 0xa20) = *(undefined8 *)((longlong)_Src + 0xa20);
  uVar2 = *(undefined8 *)((longlong)_Src + 0xa00);
  uVar3 = *(undefined8 *)((longlong)_Src + 0xa08);
  uVar4 = *(undefined8 *)((longlong)_Src + 0xa18);
  *(undefined8 *)((longlong)param_2 + 0xa10) = *(undefined8 *)((longlong)_Src + 0xa10);
  *(undefined8 *)((longlong)param_2 + 0xa18) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0xa00) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0xa08) = uVar3;
  return param_2;
}



// FUNCTION 147c93a1a FUN_147c93a1a body=242 status=ok
// SIG undefined FUN_147c93a1a(void)

void * FUN_147c93a1a(longlong *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  _Src = (void *)(**(code **)(*param_1 + 0x678))();
  memcpy(param_2,_Src,0x98);
  cVar1 = *(char *)((longlong)_Src + 0x9c);
  *(char *)((longlong)param_2 + 0x9c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_2 + 0x98) = *(undefined4 *)((longlong)_Src + 0x98);
  }
  *(undefined4 *)((longlong)param_2 + 0xa8) = *(undefined4 *)((longlong)_Src + 0xa8);
  *(undefined8 *)((longlong)param_2 + 0xa0) = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306((longlong)param_2 + 0xb0,(longlong)_Src + 0xb0);
  uVar2 = *(undefined8 *)((longlong)_Src + 0x978);
  uVar3 = *(undefined8 *)((longlong)_Src + 0x980);
  uVar4 = *(undefined8 *)((longlong)_Src + 0x988);
  *(undefined8 *)((longlong)param_2 + 0x970) = *(undefined8 *)((longlong)_Src + 0x970);
  *(undefined8 *)((longlong)param_2 + 0x978) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0x980) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0x988) = uVar4;
  cVar1 = *(char *)((longlong)_Src + 0x9f0);
  *(char *)((longlong)param_2 + 0x9f0) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = (undefined8 *)((longlong)_Src + 0x990);
    puVar7 = (undefined8 *)((longlong)param_2 + 0x990);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined8 *)((longlong)param_2 + 0xa20) = *(undefined8 *)((longlong)_Src + 0xa20);
  uVar2 = *(undefined8 *)((longlong)_Src + 0xa00);
  uVar3 = *(undefined8 *)((longlong)_Src + 0xa08);
  uVar4 = *(undefined8 *)((longlong)_Src + 0xa18);
  *(undefined8 *)((longlong)param_2 + 0xa10) = *(undefined8 *)((longlong)_Src + 0xa10);
  *(undefined8 *)((longlong)param_2 + 0xa18) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0xa00) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0xa08) = uVar3;
  return param_2;
}



// FUNCTION 147c93b0c FUN_147c93b0c body=70 status=ok
// SIG undefined FUN_147c93b0c(void)

float FUN_147c93b0c(longlong param_1)

{
  float fVar1;
  
  fVar1 = tanf(*(float *)(param_1 + 0x3a8) * 0.5 * 0.017453292);
  fVar1 = atanf(fVar1 / *(float *)(param_1 + 0x3bc));
  return fVar1 * 57.295776 + fVar1 * 57.295776;
}



// FUNCTION 147c93b52 FUN_147c93b52 body=398 status=ok
// SIG undefined FUN_147c93b52(void)

uint FUN_147c93b52(longlong *param_1)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a78 [32];
  undefined1 local_a58 [152];
  undefined4 local_9c0;
  char local_9bc;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined1 local_9a8 [2088];
  longlong local_180;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [12];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(local_a58,_Src,0x98);
  local_9bc = *(char *)((longlong)_Src + 0x9c);
  if (local_9bc == '\x01') {
    local_9c0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9b0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9b8 = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9a8,(longlong)_Src + 0xb0);
  local_e8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_e0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_d8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_d0 = *(undefined8 *)((longlong)_Src + 0x988);
  uVar1 = (uint)local_9b8;
  if (*(char *)((longlong)_Src + 0x9f0) == '\0') {
    local_38 = *(undefined8 *)((longlong)_Src + 0xa20);
    local_58 = *(undefined4 *)((longlong)_Src + 0xa00);
    uStack_54 = *(undefined4 *)((longlong)_Src + 0xa04);
    uStack_50 = *(undefined4 *)((longlong)_Src + 0xa08);
    uStack_4c = *(undefined4 *)((longlong)_Src + 0xa0c);
    local_48 = *(undefined4 *)((longlong)_Src + 0xa10);
    uStack_44 = *(undefined4 *)((longlong)_Src + 0xa14);
    uStack_40 = *(undefined4 *)((longlong)_Src + 0xa18);
    uStack_3c = *(undefined4 *)((longlong)_Src + 0xa1c);
  }
  else {
    puVar3 = (undefined8 *)((longlong)_Src + 0x990);
    puVar4 = auStack_c8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_38 = *(undefined8 *)((longlong)_Src + 0xa20);
    local_58 = *(undefined4 *)((longlong)_Src + 0xa00);
    uStack_54 = *(undefined4 *)((longlong)_Src + 0xa04);
    uStack_50 = *(undefined4 *)((longlong)_Src + 0xa08);
    uStack_4c = *(undefined4 *)((longlong)_Src + 0xa0c);
    local_48 = *(undefined4 *)((longlong)_Src + 0xa10);
    uStack_44 = *(undefined4 *)((longlong)_Src + 0xa14);
    uStack_40 = *(undefined4 *)((longlong)_Src + 0xa18);
    uStack_3c = *(undefined4 *)((longlong)_Src + 0xa1c);
  }
  local_68 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return (uVar1 & 2) >> 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c93ce2 FUN_147c93ce2 body=397 status=ok
// SIG undefined FUN_147c93ce2(void)

uint FUN_147c93ce2(longlong *param_1)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a78 [32];
  undefined1 local_a58 [152];
  undefined4 local_9c0;
  char local_9bc;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined1 local_9a8 [2088];
  longlong local_180;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [12];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(local_a58,_Src,0x98);
  local_9bc = *(char *)((longlong)_Src + 0x9c);
  if (local_9bc == '\x01') {
    local_9c0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9b0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9b8 = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9a8,(longlong)_Src + 0xb0);
  local_e8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_e0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_d8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_d0 = *(undefined8 *)((longlong)_Src + 0x988);
  uVar1 = (uint)local_9b8;
  if (*(char *)((longlong)_Src + 0x9f0) == '\0') {
    local_38 = *(undefined8 *)((longlong)_Src + 0xa20);
    local_58 = *(undefined4 *)((longlong)_Src + 0xa00);
    uStack_54 = *(undefined4 *)((longlong)_Src + 0xa04);
    uStack_50 = *(undefined4 *)((longlong)_Src + 0xa08);
    uStack_4c = *(undefined4 *)((longlong)_Src + 0xa0c);
    local_48 = *(undefined4 *)((longlong)_Src + 0xa10);
    uStack_44 = *(undefined4 *)((longlong)_Src + 0xa14);
    uStack_40 = *(undefined4 *)((longlong)_Src + 0xa18);
    uStack_3c = *(undefined4 *)((longlong)_Src + 0xa1c);
  }
  else {
    puVar3 = (undefined8 *)((longlong)_Src + 0x990);
    puVar4 = auStack_c8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_38 = *(undefined8 *)((longlong)_Src + 0xa20);
    local_58 = *(undefined4 *)((longlong)_Src + 0xa00);
    uStack_54 = *(undefined4 *)((longlong)_Src + 0xa04);
    uStack_50 = *(undefined4 *)((longlong)_Src + 0xa08);
    uStack_4c = *(undefined4 *)((longlong)_Src + 0xa0c);
    local_48 = *(undefined4 *)((longlong)_Src + 0xa10);
    uStack_44 = *(undefined4 *)((longlong)_Src + 0xa14);
    uStack_40 = *(undefined4 *)((longlong)_Src + 0xa18);
    uStack_3c = *(undefined4 *)((longlong)_Src + 0xa1c);
  }
  local_68 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return uVar1 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c93e70 FUN_147c93e70 body=398 status=ok
// SIG undefined FUN_147c93e70(void)

undefined8 * FUN_147c93e70(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a78 [32];
  undefined1 local_a58 [80];
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined8 local_9f8;
  undefined4 local_9c0;
  char local_9bc;
  ulonglong local_9b8;
  undefined4 local_9b0;
  undefined1 local_9a8 [2088];
  longlong local_180;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [12];
  char local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(local_a58,_Src,0x98);
  local_9bc = *(char *)((longlong)_Src + 0x9c);
  if (local_9bc == '\x01') {
    local_9c0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9b0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9b8 = *(ulonglong *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9a8,(longlong)_Src + 0xb0);
  local_e8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_e0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_d8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_d0 = *(undefined8 *)((longlong)_Src + 0x988);
  cVar1 = *(char *)((longlong)_Src + 0x9f0);
  local_68 = cVar1;
  if (cVar1 == '\x01') {
    puVar3 = (undefined8 *)((longlong)_Src + 0x990);
    puVar4 = auStack_c8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_38 = *(undefined8 *)((longlong)_Src + 0xa20);
  local_58 = *(undefined8 *)((longlong)_Src + 0xa00);
  uStack_50 = *(undefined8 *)((longlong)_Src + 0xa08);
  local_48 = *(undefined4 *)((longlong)_Src + 0xa10);
  uStack_44 = *(undefined4 *)((longlong)_Src + 0xa14);
  uStack_40 = *(undefined4 *)((longlong)_Src + 0xa18);
  uStack_3c = *(undefined4 *)((longlong)_Src + 0xa1c);
  if ((local_9b8 & 2) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    param_2[2] = local_9f8;
    *(undefined4 *)param_2 = local_a08;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_a04;
    *(undefined4 *)(param_2 + 1) = uStack_a00;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_9fc;
  }
  if (cVar1 != '\0') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94000 FUN_147c94000 body=395 status=ok
// SIG undefined FUN_147c94000(void)

undefined8 * FUN_147c94000(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a78 [32];
  undefined1 local_a58 [56];
  undefined4 local_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined8 local_a10;
  undefined4 local_9c0;
  char local_9bc;
  ulonglong local_9b8;
  undefined4 local_9b0;
  undefined1 local_9a8 [2088];
  longlong local_180;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [12];
  char local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(local_a58,_Src,0x98);
  local_9bc = *(char *)((longlong)_Src + 0x9c);
  if (local_9bc == '\x01') {
    local_9c0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9b0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9b8 = *(ulonglong *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9a8,(longlong)_Src + 0xb0);
  local_e8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_e0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_d8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_d0 = *(undefined8 *)((longlong)_Src + 0x988);
  cVar1 = *(char *)((longlong)_Src + 0x9f0);
  local_68 = cVar1;
  if (cVar1 == '\x01') {
    puVar3 = (undefined8 *)((longlong)_Src + 0x990);
    puVar4 = auStack_c8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_38 = *(undefined8 *)((longlong)_Src + 0xa20);
  local_58 = *(undefined8 *)((longlong)_Src + 0xa00);
  uStack_50 = *(undefined8 *)((longlong)_Src + 0xa08);
  local_48 = *(undefined4 *)((longlong)_Src + 0xa10);
  uStack_44 = *(undefined4 *)((longlong)_Src + 0xa14);
  uStack_40 = *(undefined4 *)((longlong)_Src + 0xa18);
  uStack_3c = *(undefined4 *)((longlong)_Src + 0xa1c);
  if ((local_9b8 & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    param_2[2] = local_a10;
    *(undefined4 *)param_2 = local_a20;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_a1c;
    *(undefined4 *)(param_2 + 1) = uStack_a18;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_a14;
  }
  if (cVar1 != '\0') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9418c FUN_147c9418c body=124 status=ok
// SIG undefined FUN_147c9418c(void)

undefined8 FUN_147c9418c(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf9490) {
    FUN_144b3d300(&DAT_14caf9490);
    if (DAT_14caf9490 == -1) {
      FUN_1446f470e(&DAT_14caf9488,L"FirstPerson",1);
      _Init_thread_footer(&DAT_14caf9490);
    }
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x3a0) >> 8),
                  *(longlong *)(param_1 + 0x3a0) == DAT_14caf9488);
}



// FUNCTION 147c94208 FUN_147c94208 body=228 status=ok
// SIG undefined FUN_147c94208(void)

void FUN_147c94208(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1478c1b52();
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_14118b53e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_1447ff17a(param_1 + 0x88,param_2 + 0x88);
      FUN_1447ff17a(param_1 + 0x1d2,param_2 + 0x88);
      *(int *)(param_1 + 0x31a) = (int)param_2[0x31a];
      lVar3 = param_2[0x31b];
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x18dc);
      lVar2 = param_2[0x31c];
      *(undefined4 *)((longlong)param_1 + 0x18d4) = *(undefined4 *)((longlong)param_2 + 0x18d4);
      *(int *)(param_1 + 0x31b) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x18dc) = uVar1;
      *(int *)(param_1 + 0x31c) = (int)lVar2;
      uVar4 = (**(code **)(*param_2 + 0x670))(param_2);
      (**(code **)(*param_1 + 0x660))(param_1,uVar4);
      *(int *)(param_1 + 800) = (int)param_2[800];
      uVar4 = (**(code **)(*param_2 + 0x678))(param_2);
      (**(code **)(*param_1 + 0x668))(param_1,uVar4);
      *(int *)(param_1 + 0x468) = (int)param_2[0x468];
    }
  }
  return;
}



// FUNCTION 147c9432c FUN_147c9432c body=160 status=ok
// SIG undefined FUN_147c9432c(void)

void FUN_147c9432c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xca0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c943ce FUN_147c943ce body=160 status=ok
// SIG undefined FUN_147c943ce(void)

void FUN_147c943ce(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc88))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94470 FUN_147c94470 body=160 status=ok
// SIG undefined FUN_147c94470(void)

void FUN_147c94470(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc98))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94512 FUN_147c94512 body=160 status=ok
// SIG undefined FUN_147c94512(void)

void FUN_147c94512(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc90))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c945b4 FUN_147c945b4 body=160 status=ok
// SIG undefined FUN_147c945b4(void)

void FUN_147c945b4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xcb8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9465a FUN_147c9465a body=41 status=ok
// SIG undefined FUN_147c9465a(void)

void FUN_147c9465a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xe08))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c946d8 FUN_147c946d8 body=389 status=ok
// SIG undefined FUN_147c946d8(void)

void FUN_147c946d8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar2 = local_4c;
  iVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  cVar3 = FUN_1434a1b92();
  if (cVar3 == '\0') {
    uVar4 = FUN_140083894();
    local_78 = uVar2;
    FUN_147a3539a(uVar4,&local_68,0x3f800000,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0) & 0xffffffff);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94878 FUN_147c94878 body=47 status=ok
// SIG undefined FUN_147c94878(void)

void FUN_147c94878(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14caf9598);
                    /* WARNING: Could not recover jumptable at 0x000147c948a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147c948c2 FUN_147c948c2 body=47 status=ok
// SIG undefined FUN_147c948c2(void)

void FUN_147c948c2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14caf95a8);
                    /* WARNING: Could not recover jumptable at 0x000147c948ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147c9490c FUN_147c9490c body=160 status=ok
// SIG undefined FUN_147c9490c(void)

void FUN_147c9490c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0xffffffffffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7e0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c949ec FUN_147c949ec body=245 status=ok
// SIG undefined FUN_147c949ec(void)

void FUN_147c949ec(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa10))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94ae2 FUN_147c94ae2 body=92 status=ok
// SIG undefined FUN_147c94ae2(void)

void FUN_147c94ae2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9618);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94b40 FUN_147c94b40 body=160 status=ok
// SIG undefined FUN_147c94b40(void)

void FUN_147c94b40(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xa08))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94be6 FUN_147c94be6 body=162 status=ok
// SIG undefined FUN_147c94be6(void)

void FUN_147c94be6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xa00))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94c8e FUN_147c94c8e body=162 status=ok
// SIG undefined FUN_147c94c8e(void)

void FUN_147c94c8e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x9f8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94d32 FUN_147c94d32 body=224 status=ok
// SIG undefined FUN_147c94d32(void)

void FUN_147c94d32(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(&local_60);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9658);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94e14 FUN_147c94e14 body=305 status=ok
// SIG undefined FUN_147c94e14(void)

void FUN_147c94e14(longlong *param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined1 local_88 [16];
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = &PTR_FUN_14a184370;
  local_78 = local_48;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_48])(local_88,&local_58);
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*param_1 + 0xa68))(param_1,&local_90);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c94f46 FUN_147c94f46 body=274 status=ok
// SIG undefined FUN_147c94f46(void)

void FUN_147c94f46(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined7 local_30;
  undefined4 uStack_29;
  undefined1 uStack_25;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_30 = 0;
  uStack_29 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = CONCAT13(uStack_25,uStack_29._1_3_);
  local_40 = CONCAT17((undefined1)uStack_29,local_30);
  (**(code **)(*param_1 + 0x958))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9505a FUN_147c9505a body=102 status=ok
// SIG undefined FUN_147c9505a(void)

void FUN_147c9505a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9678);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c950c2 FUN_147c950c2 body=333 status=ok
// SIG undefined FUN_147c950c2(void)

void FUN_147c950c2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9e0))(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95210 FUN_147c95210 body=431 status=ok
// SIG undefined FUN_147c95210(void)

void FUN_147c95210(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  local_68 = local_40;
  (**(code **)(*param_1 + 0x9d8))(param_1,local_20,&local_58,local_3c);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c953c0 FUN_147c953c0 body=100 status=ok
// SIG undefined FUN_147c953c0(void)

void FUN_147c953c0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  local_1f = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9698);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95432 FUN_147c95432 body=342 status=ok
// SIG undefined FUN_147c95432(void)

void FUN_147c95432(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
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
  (**(code **)(*param_1 + 0x9d0))(param_1,local_28,iVar1 != 0,local_30 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95590 FUN_147c95590 body=425 status=ok
// SIG undefined FUN_147c95590(void)

void FUN_147c95590(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34;
  (**(code **)(*param_1 + 0x9c8))(param_1,local_28,local_2c,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9573a FUN_147c9573a body=326 status=ok
// SIG undefined FUN_147c9573a(void)

void FUN_147c9573a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14093f012();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7f0))(param_1,local_1c,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95882 FUN_147c95882 body=237 status=ok
// SIG undefined FUN_147c95882(void)

void FUN_147c95882(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7e8))(param_1,local_19,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95970 FUN_147c95970 body=92 status=ok
// SIG undefined FUN_147c95970(void)

void FUN_147c95970(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf96e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c959ce FUN_147c959ce body=160 status=ok
// SIG undefined FUN_147c959ce(void)

void FUN_147c959ce(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xaa8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95a8a FUN_147c95a8a body=171 status=ok
// SIG undefined FUN_147c95a8a(void)

void FUN_147c95a8a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_30);
  plVar2 = local_30;
  plVar1 = (longlong *)*param_2;
  if (local_30 != plVar1) {
    local_30 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_28 = (undefined4)param_2[1];
  uVar3 = FUN_14477b072(param_1,DAT_14caf9728);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95b36 FUN_147c95b36 body=178 status=ok
// SIG undefined FUN_147c95b36(void)

void FUN_147c95b36(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xab0))(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95c14 FUN_147c95c14 body=608 status=ok
// SIG undefined FUN_147c95c14(void)

void FUN_147c95c14(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_78 = local_4c != 0;
  local_80 = iVar1 != 0;
  local_88 = local_44;
  (**(code **)(*param_1 + 0x9a8))(param_1,iVar2 != 0,local_30);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95e76 FUN_147c95e76 body=160 status=ok
// SIG undefined FUN_147c95e76(void)

void FUN_147c95e76(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x9a0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c95f2e FUN_147c95f2e body=443 status=ok
// SIG undefined FUN_147c95f2e(void)

void FUN_147c95f2e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x998))(param_1,iVar3 != 0,iVar2 != 0,iVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c960ea FUN_147c960ea body=332 status=ok
// SIG undefined FUN_147c960ea(void)

void FUN_147c960ea(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x990))(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9623c FUN_147c9623c body=162 status=ok
// SIG undefined FUN_147c9623c(void)

void FUN_147c9623c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xac8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c962e0 FUN_147c962e0 body=191 status=ok
// SIG undefined FUN_147c962e0(void)

void FUN_147c962e0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x970))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c963a0 FUN_147c963a0 body=191 status=ok
// SIG undefined FUN_147c963a0(void)

void FUN_147c963a0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x978))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96460 FUN_147c96460 body=495 status=ok
// SIG undefined FUN_147c96460(void)

void FUN_147c96460(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_3d);
  local_80 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_88 = &local_78;
  (**(code **)(*param_1 + 0x9e8))(param_1,&local_80,uVar1,uVar2 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96650 FUN_147c96650 body=264 status=ok
// SIG undefined FUN_147c96650(void)

void FUN_147c96650(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
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
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147c9675a(param_1,&local_30,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9675a FUN_147c9675a body=163 status=ok
// SIG undefined FUN_147c9675a(void)

void FUN_147c9675a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 *local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    local_28 = DAT_14c846508;
    local_38 = (undefined4)DAT_14c8464f8;
    uStack_34 = DAT_14c8464f8._4_4_;
    uStack_30 = (undefined4)DAT_14c846500;
    uStack_2c = DAT_14c846500._4_4_;
    local_40 = *param_2;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_50 = &local_38;
    local_58 = 0;
    (**(code **)(*plVar1 + 0x7d8))(plVar1,&local_40,param_3,0x3f800000);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9681e FUN_147c9681e body=290 status=ok
// SIG undefined FUN_147c9681e(void)

void FUN_147c9681e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  iVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x960))(param_1,&local_38,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96948 FUN_147c96948 body=263 status=ok
// SIG undefined FUN_147c96948(void)

void FUN_147c96948(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x800))(plVar1,local_20,local_24 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96a50 FUN_147c96a50 body=242 status=ok
// SIG undefined FUN_147c96a50(void)

void FUN_147c96a50(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x950))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96b4a FUN_147c96b4a body=443 status=ok
// SIG undefined FUN_147c96b4a(void)

void FUN_147c96b4a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_50;
  char local_49;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_49 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar1 = local_50;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_49 == '\x02' && iVar1 != 0) {
    *(short *)(param_1 + 0x670) = *(short *)(param_1 + 0x670) + 1;
  }
  local_78 = &local_38;
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  FUN_1461c932c(param_1,local_48,local_49,iVar1 != 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96d0c FUN_147c96d0c body=224 status=ok
// SIG undefined FUN_147c96d0c(void)

void FUN_147c96d0c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(&local_60);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9860);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96dee FUN_147c96dee body=305 status=ok
// SIG undefined FUN_147c96dee(void)

void FUN_147c96dee(longlong *param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined1 local_88 [16];
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = &PTR_FUN_14a184370;
  local_78 = local_48;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_48])(local_88,&local_58);
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*param_1 + 0xa60))(param_1,&local_90);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96f20 FUN_147c96f20 body=130 status=ok
// SIG undefined FUN_147c96f20(void)

void FUN_147c96f20(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_147c96fa4(&local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9870);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  FUN_147ca6f0e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c96fa4 FUN_147c96fa4 body=95 status=ok
// SIG undefined FUN_147c96fa4(void)

undefined8 * FUN_147c96fa4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147ca6f0e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ca6f6c(param_1,iVar1);
      FUN_147ca6fdf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147c97004 FUN_147c97004 body=186 status=ok
// SIG undefined FUN_147c97004(void)

void FUN_147c97004(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa38))(param_1,&local_28);
  FUN_147ca6f0e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c970c0 FUN_147c970c0 body=147 status=ok
// SIG undefined FUN_147c970c0(void)

void FUN_147c970c0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_26 = param_5;
  local_24 = param_6;
  local_20 = param_7;
  local_1c = param_8;
  local_30 = param_2;
  local_28 = param_3;
  local_27 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9880);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9716c FUN_147c9716c body=700 status=ok
// SIG undefined FUN_147c9716c(void)

void FUN_147c9716c(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar3 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar2 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_50 != 0;
  local_78 = iVar1 != 0;
  local_68 = local_4c;
  local_70 = local_48;
  (**(code **)(*param_1 + 0x940))(param_1,local_38,iVar3 != 0,iVar2 != 0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9742a FUN_147c9742a body=171 status=ok
// SIG undefined FUN_147c9742a(void)

void FUN_147c9742a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_30);
  plVar2 = local_30;
  plVar1 = (longlong *)*param_2;
  if (local_30 != plVar1) {
    local_30 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_28 = (undefined4)param_2[1];
  uVar3 = FUN_14477b072(param_1,DAT_14caf98b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c974d6 FUN_147c974d6 body=178 status=ok
// SIG undefined FUN_147c974d6(void)

void FUN_147c974d6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x930))(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9758a FUN_147c9758a body=243 status=ok
// SIG undefined FUN_147c9758a(void)

void FUN_147c9758a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0xc58))(param_1,&local_50);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97684 FUN_147c97684 body=259 status=ok
// SIG undefined FUN_147c97684(void)

void FUN_147c97684(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = local_48;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147c97788(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97788 FUN_147c97788 body=181 status=ok
// SIG undefined FUN_147c97788(void)

undefined8 FUN_147c97788(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar5 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if (lVar1 != 0) {
      uVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_147c977ef;
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (plVar3 = *(longlong **)(lVar1 + 0x78), plVar3 != (longlong *)0x0)))) {
        cVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,local_30);
        if (cVar4 != '\0') {
          uVar6 = FUN_147ab7a10(param_1,local_30,param_2,param_3);
          goto LAB_147c977ef;
        }
      }
    }
  }
  uVar6 = 0;
LAB_147c977ef:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97844 FUN_147c97844 body=428 status=ok
// SIG undefined FUN_147c97844(void)

void FUN_147c97844(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar2 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (double)local_48;
  local_40 = (double)local_44;
  uVar1 = FUN_147ab7a10(param_1,&local_40,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97a0c FUN_147c97a0c body=160 status=ok
// SIG undefined FUN_147c97a0c(void)

void FUN_147c97a0c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xaf8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97aae FUN_147c97aae body=39 status=ok
// SIG undefined FUN_147c97aae(void)

void FUN_147c97aae(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14364ba6c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c97ad6 FUN_147c97ad6 body=39 status=ok
// SIG undefined FUN_147c97ad6(void)

void FUN_147c97ad6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14364babc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c97afe FUN_147c97afe body=39 status=ok
// SIG undefined FUN_147c97afe(void)

void FUN_147c97afe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14364bb0c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c97b26 FUN_147c97b26 body=100 status=ok
// SIG undefined FUN_147c97b26(void)

void FUN_147c97b26(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xe60))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97b9a FUN_147c97b9a body=407 status=ok
// SIG undefined FUN_147c97b9a(void)

void FUN_147c97b9a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  int local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  puVar3 = local_138;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147c97d32(param_1,local_31,iVar1 != 0,puVar3);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c97d32 FUN_147c97d32 body=316 status=ok
// SIG undefined FUN_147c97d32(void)

undefined8 FUN_147c97d32(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar4 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) &&
        ((*(longlong **)(lVar1 + 0x78) != (longlong *)0x0 &&
         (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x338))(), cVar3 != '\0')))))) {
      local_48 = local_38;
      uStack_44 = uStack_34;
      uStack_40 = uStack_30;
      uStack_3c = uStack_2c;
      local_58 = param_4;
      cVar3 = FUN_14364e710(param_1,&local_48,param_2 & 0xffffffff,param_3);
      uVar5 = CONCAT71((uint7)(param_2 >> 8) & 0xffffff,1);
      if (cVar3 != '\0') goto LAB_147c97dfc;
    }
  }
  *param_4 = 0x3f80000000000000;
  uVar5 = 0;
  memset(param_4 + 1,0,0x9c);
  *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
  *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_4 + 0xec) = 0;
  param_4[0x1e] = 0;
  param_4[0x1f] = 0;
LAB_147c97dfc:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147c97e7e FUN_147c97e7e body=407 status=ok
// SIG undefined FUN_147c97e7e(void)

void FUN_147c97e7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  int local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  puVar3 = local_138;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147c98016(param_1,local_31,iVar1 != 0,puVar3);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c98016 FUN_147c98016 body=352 status=ok
// SIG undefined FUN_147c98016(void)

ulonglong FUN_147c98016(longlong param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar4 = *(longlong *)(param_1 + 0x430);
    if (((((lVar4 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))) &&
       ((*(longlong **)(lVar4 + 0x78) != (longlong *)0x0 &&
        (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x338))(), cVar2 != '\0')))) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      lVar4 = FUN_144a9f2d6();
      uVar6 = 0x21;
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar4 + 0x168))) {
        uVar6 = *(undefined4 *)(*(longlong *)(lVar4 + 0x160) + (ulonglong)param_2 * 4);
      }
      local_58 = param_4;
      cVar2 = FUN_14364e710(param_1,&local_38,uVar6,param_3);
      uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (cVar2 != '\0') goto LAB_147c980df;
    }
  }
  *param_4 = 0x3f80000000000000;
  uVar5 = 0;
  memset(param_4 + 1,0,0x9c);
  *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
  *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_4 + 0xec) = 0;
  param_4[0x1e] = 0;
  param_4[0x1f] = 0;
LAB_147c980df:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147c98186 FUN_147c98186 body=454 status=ok
// SIG undefined FUN_147c98186(void)

void FUN_147c98186(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_188 [40];
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  int local_5c;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar1 = local_5c;
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
  puVar4 = local_160;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147c9834e(param_1,plVar3,iVar1 != 0,puVar4);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9834e FUN_147c9834e body=317 status=ok
// SIG undefined FUN_147c9834e(void)

ulonglong FUN_147c9834e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar4 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) &&
        ((*(longlong **)(lVar1 + 0x78) != (longlong *)0x0 &&
         (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x338))(), cVar3 != '\0')))))) {
      local_48 = local_38;
      uStack_44 = uStack_34;
      uStack_40 = uStack_30;
      uStack_3c = uStack_2c;
      local_58 = param_4;
      cVar3 = FUN_14364e896(param_1,&local_48,param_2,param_3);
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (cVar3 != '\0') goto LAB_147c98419;
    }
  }
  *param_4 = 0x3f80000000000000;
  uVar5 = 0;
  memset(param_4 + 1,0,0x9c);
  *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
  *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_4 + 0xec) = 0;
  param_4[0x1e] = 0;
  param_4[0x1f] = 0;
LAB_147c98419:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147c9849a FUN_147c9849a body=522 status=ok
// SIG undefined FUN_147c9849a(void)

void FUN_147c9849a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  int local_38;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_32 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_32);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  local_148 = local_138;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_148 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14364bb5c(param_1,local_31,local_32,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c986b4 FUN_147c986b4 body=522 status=ok
// SIG undefined FUN_147c986b4(void)

void FUN_147c986b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  int local_38;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_32 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_32);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  local_148 = local_138;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_148 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14364bc70(param_1,local_31,local_32,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c988ce FUN_147c988ce body=568 status=ok
// SIG undefined FUN_147c988ce(void)

void FUN_147c988ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  int local_5c;
  longlong local_58 [2];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar1 = local_5c;
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
  local_168 = local_160;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14364bf04(param_1,local_41,plVar3,iVar1 != 0);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c98b24 FUN_147c98b24 body=241 status=ok
// SIG undefined FUN_147c98b24(void)

void FUN_147c98b24(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147c98c16(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c98c16 FUN_147c98c16 body=167 status=ok
// SIG undefined FUN_147c98c16(void)

undefined8 FUN_147c98c16(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_143774bb6(lVar3,&local_38);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c98cbe FUN_147c98cbe body=338 status=ok
// SIG undefined FUN_147c98cbe(void)

void FUN_147c98cbe(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar1 = &local_30;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_34;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c98e12(param_1,local_29,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c98e12 FUN_147c98e12 body=312 status=ok
// SIG undefined FUN_147c98e12(void)

void FUN_147c98e12(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0;
  }
  else {
    if (param_2 == 1) {
      local_68 = (undefined4)DAT_14c9657b8;
      uStack_64 = DAT_14c9657b8._4_4_;
      uStack_60 = (undefined4)DAT_14c9657c0;
      uStack_5c = DAT_14c9657c0._4_4_;
      local_58 = DAT_14c9657c8;
      if (DAT_14c9657c8 != 0) {
        LOCK();
        *(int *)(DAT_14c9657c8 + 8) = *(int *)(DAT_14c9657c8 + 8) + 1;
        UNLOCK();
      }
      uVar4 = FUN_143774bb6(lVar1,&local_68);
      *param_3 = uVar4;
      uVar2 = *(undefined8 *)(param_1 + 0x508);
      local_80 = (undefined4)DAT_14c9657d0;
      uStack_7c = DAT_14c9657d0._4_4_;
      uStack_78 = (undefined4)DAT_14c9657d8;
      uStack_74 = DAT_14c9657d8._4_4_;
      local_70 = DAT_14c9657e0;
      if (DAT_14c9657e0 != 0) {
        LOCK();
        *(int *)(DAT_14c9657e0 + 8) = *(int *)(DAT_14c9657e0 + 8) + 1;
        UNLOCK();
      }
      puVar3 = &local_80;
    }
    else {
      if (param_2 != 0) {
        *param_3 = 0;
        *param_4 = 0;
        goto LAB_147c98f1e;
      }
      local_38 = (undefined4)DAT_14c965770;
      uStack_34 = DAT_14c965770._4_4_;
      uStack_30 = (undefined4)DAT_14c965778;
      uStack_2c = DAT_14c965778._4_4_;
      local_28 = DAT_14c965780;
      if (DAT_14c965780 != 0) {
        LOCK();
        *(int *)(DAT_14c965780 + 8) = *(int *)(DAT_14c965780 + 8) + 1;
        UNLOCK();
      }
      uVar4 = FUN_143774bb6(lVar1,&local_38);
      *param_3 = uVar4;
      uVar2 = *(undefined8 *)(param_1 + 0x508);
      local_50 = (undefined4)DAT_14c965788;
      uStack_4c = DAT_14c965788._4_4_;
      uStack_48 = (undefined4)DAT_14c965790;
      uStack_44 = DAT_14c965790._4_4_;
      local_40 = DAT_14c965798;
      if (DAT_14c965798 != 0) {
        LOCK();
        *(int *)(DAT_14c965798 + 8) = *(int *)(DAT_14c965798 + 8) + 1;
        UNLOCK();
      }
      puVar3 = &local_50;
    }
    uVar4 = FUN_143774bb6(uVar2,puVar3);
    *param_4 = uVar4;
  }
LAB_147c98f1e:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c98f4c FUN_147c98f4c body=241 status=ok
// SIG undefined FUN_147c98f4c(void)

void FUN_147c98f4c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147c9903e(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9903e FUN_147c9903e body=167 status=ok
// SIG undefined FUN_147c9903e(void)

undefined8 FUN_147c9903e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_1437785f2(lVar3,&local_38);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c990e6 FUN_147c990e6 body=435 status=ok
// SIG undefined FUN_147c990e6(void)

void FUN_147c990e6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar5 = local_80;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = local_68;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_50;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  local_a8 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_a8 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c9929a(param_1,puVar3,puVar4,puVar5);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9929a FUN_147c9929a body=380 status=ok
// SIG undefined FUN_147c9929a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c9929a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = (undefined4)DAT_14c965a88;
  uStack_5c = DAT_14c965a88._4_4_;
  uStack_58 = _DAT_14c965a90;
  uStack_54 = uRam000000014c965a94;
  local_50 = DAT_14c965a98;
  if (DAT_14c965a98 != 0) {
    LOCK();
    *(int *)(DAT_14c965a98 + 8) = *(int *)(DAT_14c965a98 + 8) + 1;
    UNLOCK();
  }
  FUN_147c996ea(param_1,&local_48,&local_60);
  param_2[2] = local_38;
  *param_2 = CONCAT44(uStack_44,local_48);
  param_2[1] = CONCAT44(uStack_3c,uStack_40);
  local_78 = (undefined4)DAT_14c965aa0;
  uStack_74 = DAT_14c965aa0._4_4_;
  uStack_70 = _DAT_14c965aa8;
  uStack_6c = uRam000000014c965aac;
  local_68 = DAT_14c965ab0;
  if (DAT_14c965ab0 != 0) {
    LOCK();
    *(int *)(DAT_14c965ab0 + 8) = *(int *)(DAT_14c965ab0 + 8) + 1;
    UNLOCK();
  }
  FUN_147c996ea(param_1,&local_48,&local_78);
  param_3[2] = local_38;
  *param_3 = CONCAT44(uStack_44,local_48);
  param_3[1] = CONCAT44(uStack_3c,uStack_40);
  local_90 = (undefined4)DAT_14c965ab8;
  uStack_8c = DAT_14c965ab8._4_4_;
  uStack_88 = _DAT_14c965ac0;
  uStack_84 = uRam000000014c965ac4;
  local_80 = DAT_14c965ac8;
  if (DAT_14c965ac8 != 0) {
    LOCK();
    *(int *)(DAT_14c965ac8 + 8) = *(int *)(DAT_14c965ac8 + 8) + 1;
    UNLOCK();
  }
  FUN_147c996ea(param_1,&local_48,&local_90);
  param_4[2] = local_38;
  *param_4 = CONCAT44(uStack_44,local_48);
  param_4[1] = CONCAT44(uStack_3c,uStack_40);
  local_a8 = (undefined4)DAT_14c965ad0;
  uStack_a4 = DAT_14c965ad0._4_4_;
  uStack_a0 = _DAT_14c965ad8;
  uStack_9c = uRam000000014c965adc;
  local_98 = DAT_14c965ae0;
  if (DAT_14c965ae0 != 0) {
    LOCK();
    *(int *)(DAT_14c965ae0 + 8) = *(int *)(DAT_14c965ae0 + 8) + 1;
    UNLOCK();
  }
  FUN_147c996ea(param_1,&local_48,&local_a8);
  *(undefined8 *)(param_5 + 4) = local_38;
  *param_5 = local_48;
  param_5[1] = uStack_44;
  param_5[2] = uStack_40;
  param_5[3] = uStack_3c;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99418 FUN_147c99418 body=266 status=ok
// SIG undefined FUN_147c99418(void)

void FUN_147c99418(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c99524(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99524 FUN_147c99524 body=186 status=ok
// SIG undefined FUN_147c99524(void)

void FUN_147c99524(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 == 0) {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    local_38 = (undefined4)DAT_14c964cb0;
    uStack_34 = DAT_14c964cb0._4_4_;
    uStack_30 = (undefined4)DAT_14c964cb8;
    uStack_2c = DAT_14c964cb8._4_4_;
    local_28 = DAT_14c964cc0;
    if (DAT_14c964cc0 != 0) {
      LOCK();
      *(int *)(DAT_14c964cc0 + 8) = *(int *)(DAT_14c964cc0 + 8) + 1;
      UNLOCK();
    }
    uVar3 = FUN_143774bb6(lVar1,&local_38);
    *param_2 = uVar3;
    uVar2 = *(undefined8 *)(param_1 + 0x508);
    local_50 = (undefined4)DAT_14c964cc8;
    uStack_4c = DAT_14c964cc8._4_4_;
    uStack_48 = (undefined4)DAT_14c964cd0;
    uStack_44 = DAT_14c964cd0._4_4_;
    local_40 = DAT_14c964cd8;
    if (DAT_14c964cd8 != 0) {
      LOCK();
      *(int *)(DAT_14c964cd8 + 8) = *(int *)(DAT_14c964cd8 + 8) + 1;
      UNLOCK();
    }
    uVar3 = FUN_143774bb6(uVar2,&local_50);
    *param_3 = uVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c995e6 FUN_147c995e6 body=259 status=ok
// SIG undefined FUN_147c995e6(void)

void FUN_147c995e6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_58 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_147c996ea(param_1,&local_50,&local_68);
  plVar3 = local_28;
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c996ea FUN_147c996ea body=173 status=ok
// SIG undefined FUN_147c996ea(void)

undefined8 * FUN_147c996ea(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    local_30 = *param_3;
    local_28 = param_3[1];
    local_20 = param_3[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_143778716(lVar3,param_2,&local_30);
  }
  plVar4 = (longlong *)param_3[2];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9979e FUN_147c9979e body=275 status=ok
// SIG undefined FUN_147c9979e(void)

void FUN_147c9979e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_34;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14588d080(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c998b2 FUN_147c998b2 body=100 status=ok
// SIG undefined FUN_147c998b2(void)

void FUN_147c998b2(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x720);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 147c99916 FUN_147c99916 body=86 status=ok
// SIG undefined FUN_147c99916(void)

void FUN_147c99916(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c9996e(param_1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9996e FUN_147c9996e body=102 status=ok
// SIG undefined FUN_147c9996e(void)

undefined4 * FUN_147c9996e(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      uVar4 = *(undefined4 *)(lVar1 + 0x100);
    }
  }
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 147c999f0 FUN_147c999f0 body=268 status=ok
// SIG undefined FUN_147c999f0(void)

void FUN_147c999f0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xba0))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99afe FUN_147c99afe body=41 status=ok
// SIG undefined FUN_147c99afe(void)

void FUN_147c99afe(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb98))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c99b28 FUN_147c99b28 body=184 status=ok
// SIG undefined FUN_147c99b28(void)

void FUN_147c99b28(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xba8))(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99be2 FUN_147c99be2 body=280 status=ok
// SIG undefined FUN_147c99be2(void)

void FUN_147c99be2(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14039bfee(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99d02 FUN_147c99d02 body=239 status=ok
// SIG undefined FUN_147c99d02(void)

void FUN_147c99d02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147c99df2(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99df2 FUN_147c99df2 body=156 status=ok
// SIG undefined FUN_147c99df2(void)

undefined4 FUN_147c99df2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    local_20 = param_2[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_14482ef28(lVar3,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c99e94 FUN_147c99e94 body=41 status=ok
// SIG undefined FUN_147c99e94(void)

void FUN_147c99e94(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb80))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c99ed0 FUN_147c99ed0 body=548 status=ok
// SIG undefined FUN_147c99ed0(void)

void FUN_147c99ed0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar2 = local_54;
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar1 = local_58;
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_2e = local_5c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = iVar2 != 0;
  local_2f = iVar1 != 0;
  local_40 = local_48;
  local_38 = local_50;
  uVar3 = FUN_14477b072(param_1,DAT_14caf9668);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9a0f6 FUN_147c9a0f6 body=175 status=ok
// SIG undefined FUN_147c9a0f6(void)

void FUN_147c9a0f6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb08))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9a1aa FUN_147c9a1aa body=162 status=ok
// SIG undefined FUN_147c9a1aa(void)

void FUN_147c9a1aa(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x800))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9a280 FUN_147c9a280 body=872 status=ok
// SIG undefined FUN_147c9a280(void)

void FUN_147c9a280(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined4 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined1 local_51;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar4 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar3 = local_48;
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
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar1 = local_50;
  local_51 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0;
  lStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_70;
  uStack_84 = local_70._4_4_;
  uStack_80 = (undefined4)uStack_68;
  uStack_7c = uStack_68._4_4_;
  local_78 = lStack_60;
  if ((lStack_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_b0 = iVar2 != 0;
  local_a8 = iVar1 != 0;
  local_b8 = iVar3 != 0;
  local_98 = &local_88;
  local_a0 = local_51;
  FUN_147c9a5ea(param_1,local_3c,local_40,iVar4 != 0);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9a5ea FUN_147c9a5ea body=366 status=ok
// SIG undefined FUN_147c9a5ea(void)

void FUN_147c9a5ea(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  byte param_5,byte param_6,byte param_7,char param_8,longlong param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  uVar1 = FUN_14119d0a4(uVar1);
  lVar2 = FUN_147ca7dae(uVar1,*(undefined8 *)(param_9 + 0x10),*(undefined4 *)(param_9 + 4));
  if (lVar2 == 0) {
    if (param_8 == '\0') {
      lVar2 = FUN_14001cc68(0x40,0x10);
      FUN_147ca1bbc(lVar2,param_1,param_3,param_9);
      *(undefined4 *)(lVar2 + 0x20) = param_2;
      *(uint *)(lVar2 + 0x1c) =
           (param_4 & 0xff) + (uint)param_5 * 2 + (uint)param_6 * 4 + (uint)param_7 * 8 |
           *(uint *)(lVar2 + 0x1c) & 0xfffffff0;
      FUN_140b1330e(uVar1,*(undefined8 *)(param_9 + 0x10),*(undefined4 *)(param_9 + 4),lVar2);
      return;
    }
  }
  else {
    if (param_8 == '\0') {
      *(undefined4 *)(lVar2 + 8) = param_3;
      *(undefined4 *)(lVar2 + 0xc) = 0;
      *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | 1;
    }
    else if (param_8 == '\x02') {
      *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xfe;
      return;
    }
    *(undefined4 *)(lVar2 + 0x20) = param_2;
    *(uint *)(lVar2 + 0x1c) =
         (param_4 & 0xff) + (uint)param_5 * 2 + (uint)param_6 * 4 + (uint)param_7 * 8 |
         *(uint *)(lVar2 + 0x1c) & 0xfffffff0;
  }
  return;
}



// FUNCTION 147c9a75e FUN_147c9a75e body=413 status=ok
// SIG undefined FUN_147c9a75e(void)

void FUN_147c9a75e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_2c;
  undefined4 local_28;
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_28 = 0;
  FUN_144a64e42();
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
  local_38 = local_2c != 0;
  FUN_14364c990(param_1,local_20,local_21,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9a908 FUN_147c9a908 body=355 status=ok
// SIG undefined FUN_147c9a908(void)

void FUN_147c9a908(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar3 = local_50;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  uVar2 = FUN_1401c9e06(param_1,&local_78,puVar3,local_54 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9aa82 FUN_147c9aa82 body=225 status=ok
// SIG undefined FUN_147c9aa82(void)

void FUN_147c9aa82(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x430) != 0) && (DAT_14c98e618 != 0)) {
    plVar2 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))();
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0xe0);
      FUN_1446ddc76(local_40,"InputDeviceAnalogStickDeadZone",1);
      local_38 = 1;
      local_34 = 0;
      (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_40);
      FUN_1446ddc76(local_50,"InputDeviceAnalogStickDeadZone",1);
      local_48 = 2;
      local_44 = 0;
      (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_50);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ab64 FUN_147c9ab64 body=103 status=ok
// SIG undefined FUN_147c9ab64(void)

void FUN_147c9ab64(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(longlong *)(param_1 + 0x430) != 0) && (DAT_14c98e618 != 0)) {
    plVar1 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c9abc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))
                (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0xe0),
                 *(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 147c9abe6 FUN_147c9abe6 body=175 status=ok
// SIG undefined FUN_147c9abe6(void)

void FUN_147c9abe6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc60))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ac96 FUN_147c9ac96 body=224 status=ok
// SIG undefined FUN_147c9ac96(void)

void FUN_147c9ac96(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(&local_60);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9a38);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ad78 FUN_147c9ad78 body=424 status=ok
// SIG undefined FUN_147c9ad78(void)

void FUN_147c9ad78(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  undefined1 local_d8 [16];
  byte local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined1 local_a8 [16];
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = &PTR_FUN_14a5af930;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = &PTR_FUN_14a184370;
  local_98 = local_68;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_a8,&local_78);
  local_b0 = &PTR_FUN_14a5af930;
  local_90 = 0;
  uStack_88 = 0;
  cVar1 = (**(code **)(*param_1 + 0xa50))(param_1,&local_b0);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerBlockPlayer_Validate";
  }
  else {
    local_e0 = &PTR_FUN_14a184370;
    local_c8 = local_68;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_d8,&local_78);
    local_e0 = &PTR_FUN_14a5af930;
    local_c0 = 0;
    uStack_b8 = 0;
    (**(code **)(*param_1 + 0xa58))(param_1,&local_e0);
  }
  local_80 = &PTR_FUN_14a5af930;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])(&local_78);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9af22 FUN_147c9af22 body=200 status=ok
// SIG undefined FUN_147c9af22(void)

void FUN_147c9af22(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x8f0))(param_1,local_20);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerCamera_Validate";
  }
  else {
    (**(code **)(*param_1 + 0x8f8))(param_1,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9afec FUN_147c9afec body=119 status=ok
// SIG undefined FUN_147c9afec(void)

void FUN_147c9afec(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9a58);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b064 FUN_147c9b064 body=218 status=ok
// SIG undefined FUN_147c9b064(void)

void FUN_147c9b064(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x8e0))(param_1,local_28);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerChangeName_Validate";
  }
  else {
    (**(code **)(*param_1 + 0x8e8))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b140 FUN_147c9b140 body=75 status=ok
// SIG undefined FUN_147c9b140(void)

void FUN_147c9b140(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x808))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c9b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x810))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerDestroy_Validate";
  return;
}



// FUNCTION 147c9b18c FUN_147c9b18c body=152 status=ok
// SIG undefined FUN_147c9b18c(void)

void FUN_147c9b18c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b226 FUN_147c9b226 body=218 status=ok
// SIG undefined FUN_147c9b226(void)

void FUN_147c9b226(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xab8))(param_1,local_28);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerExecRPC_Validate";
  }
  else {
    (**(code **)(*param_1 + 0xac0))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b302 FUN_147c9b302 body=224 status=ok
// SIG undefined FUN_147c9b302(void)

void FUN_147c9b302(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(&local_60);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b3e4 FUN_147c9b3e4 body=424 status=ok
// SIG undefined FUN_147c9b3e4(void)

void FUN_147c9b3e4(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  undefined1 local_d8 [16];
  byte local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined1 local_a8 [16];
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = &PTR_FUN_14a5af930;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = &PTR_FUN_14a184370;
  local_98 = local_68;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_a8,&local_78);
  local_b0 = &PTR_FUN_14a5af930;
  local_90 = 0;
  uStack_88 = 0;
  cVar1 = (**(code **)(*param_1 + 0xa80))(param_1,&local_b0);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerMutePlayer_Validate";
  }
  else {
    local_e0 = &PTR_FUN_14a184370;
    local_c8 = local_68;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_d8,&local_78);
    local_e0 = &PTR_FUN_14a5af930;
    local_c0 = 0;
    uStack_b8 = 0;
    (**(code **)(*param_1 + 0xa88))(param_1,&local_e0);
  }
  local_80 = &PTR_FUN_14a5af930;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])(&local_78);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b58e FUN_147c9b58e body=75 status=ok
// SIG undefined FUN_147c9b58e(void)

void FUN_147c9b58e(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x8d0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c9b5be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8d8))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerPause_Validate";
  return;
}



// FUNCTION 147c9b5da FUN_147c9b5da body=128 status=ok
// SIG undefined FUN_147c9b5da(void)

void FUN_147c9b5da(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_30[0] = param_2;
  FUN_1447a122a(local_28,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9af0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b65c FUN_147c9b65c body=263 status=ok
// SIG undefined FUN_147c9b65c(void)

void FUN_147c9b65c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7f8))(param_1,local_1c,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b764 FUN_147c9b764 body=75 status=ok
// SIG undefined FUN_147c9b764(void)

void FUN_147c9b764(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x8c0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c9b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8c8))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerRestartPlayer_Validate";
  return;
}



// FUNCTION 147c9b7b0 FUN_147c9b7b0 body=356 status=ok
// SIG undefined FUN_147c9b7b0(void)

void FUN_147c9b7b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x7a8))(param_1,local_30,&local_98);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerSeamlessNetTransitionTeleport_Validate";
  }
  else {
    (**(code **)(*param_1 + 0x7b0))(param_1,local_30,&local_98);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b91a FUN_147c9b91a body=205 status=ok
// SIG undefined FUN_147c9b91a(void)

void FUN_147c9b91a(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0xad0))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    DAT_14c949520 = L"ServerSetSpectatorWaiting_Validate";
  }
  else {
    (**(code **)(*param_1 + 0xad8))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9b9e8 FUN_147c9b9e8 body=75 status=ok
// SIG undefined FUN_147c9b9e8(void)

void FUN_147c9b9e8(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x818))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c9ba18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x820))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerToggleAILogging_Validate";
  return;
}



// FUNCTION 147c9ba34 FUN_147c9ba34 body=224 status=ok
// SIG undefined FUN_147c9ba34(void)

void FUN_147c9ba34(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(&local_60);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9b70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9bb16 FUN_147c9bb16 body=424 status=ok
// SIG undefined FUN_147c9bb16(void)

void FUN_147c9bb16(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  undefined1 local_d8 [16];
  byte local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined1 local_a8 [16];
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = &PTR_FUN_14a5af930;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = &PTR_FUN_14a184370;
  local_98 = local_68;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_a8,&local_78);
  local_b0 = &PTR_FUN_14a5af930;
  local_90 = 0;
  uStack_88 = 0;
  cVar1 = (**(code **)(*param_1 + 0xa40))(param_1,&local_b0);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerUnblockPlayer_Validate";
  }
  else {
    local_e0 = &PTR_FUN_14a184370;
    local_c8 = local_68;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_d8,&local_78);
    local_e0 = &PTR_FUN_14a5af930;
    local_c0 = 0;
    uStack_b8 = 0;
    (**(code **)(*param_1 + 0xa48))(param_1,&local_e0);
  }
  local_80 = &PTR_FUN_14a5af930;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])(&local_78);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9bcc0 FUN_147c9bcc0 body=224 status=ok
// SIG undefined FUN_147c9bcc0(void)

void FUN_147c9bcc0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(&local_60);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9b80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9bda2 FUN_147c9bda2 body=424 status=ok
// SIG undefined FUN_147c9bda2(void)

void FUN_147c9bda2(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  undefined1 local_d8 [16];
  byte local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined1 local_a8 [16];
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = &PTR_FUN_14a5af930;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = &PTR_FUN_14a184370;
  local_98 = local_68;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_a8,&local_78);
  local_b0 = &PTR_FUN_14a5af930;
  local_90 = 0;
  uStack_88 = 0;
  cVar1 = (**(code **)(*param_1 + 0xa70))(param_1,&local_b0);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerUnmutePlayer_Validate";
  }
  else {
    local_e0 = &PTR_FUN_14a184370;
    local_c8 = local_68;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_68])(local_d8,&local_78);
    local_e0 = &PTR_FUN_14a5af930;
    local_c0 = 0;
    uStack_b8 = 0;
    (**(code **)(*param_1 + 0xa78))(param_1,&local_e0);
  }
  local_80 = &PTR_FUN_14a5af930;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])(&local_78);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9bf4c FUN_147c9bf4c body=328 status=ok
// SIG undefined FUN_147c9bf4c(void)

void FUN_147c9bf4c(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  cVar1 = (**(code **)(*param_1 + 0x870))(param_1,&local_58,local_34);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerUpdateCamera_Validate";
  }
  else {
    local_78 = local_30;
    uStack_74 = uStack_2c;
    uStack_70 = uStack_28;
    uStack_6c = uStack_24;
    local_68 = local_20;
    (**(code **)(*param_1 + 0x878))(param_1,&local_78,local_34);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c096 FUN_147c9c096 body=119 status=ok
// SIG undefined FUN_147c9c096(void)

void FUN_147c9c096(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_147c9c10e(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9bb0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c10e FUN_147c9c10e body=89 status=ok
// SIG undefined FUN_147c9c10e(void)

undefined8 * FUN_147c9c10e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147ca706a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 147c9c168 FUN_147c9c168 body=278 status=ok
// SIG undefined FUN_147c9c168(void)

void FUN_147c9c168(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)(int)uStack_30 != 0) {
    lVar2 = (longlong)(int)uStack_30 * 0x18;
    lVar3 = local_38;
    do {
      cVar1 = FUN_14099723a(lVar3);
      if (cVar1 == '\0') {
        DAT_14c949520 = L"ServerUpdateMultipleLevelsVisibility_Validate";
        goto LAB_147c9c253;
      }
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
    if ((longlong)(int)uStack_30 != 0) {
      lVar2 = (longlong)(int)uStack_30 * 0x18;
      lVar3 = local_38;
      do {
        FUN_1409973c2(param_1,lVar3);
        lVar3 = lVar3 + 0x18;
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
  }
LAB_147c9c253:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c9c280 FUN_147c9c280 body=75 status=ok
// SIG undefined FUN_147c9c280(void)

void FUN_147c9c280(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x850))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c9c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x858))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerViewNextPlayer_Validate";
  return;
}



// FUNCTION 147c9c2cc FUN_147c9c2cc body=75 status=ok
// SIG undefined FUN_147c9c2cc(void)

void FUN_147c9c2cc(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x840))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c9c2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x848))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerViewPrevPlayer_Validate";
  return;
}



// FUNCTION 147c9c318 FUN_147c9c318 body=233 status=ok
// SIG undefined FUN_147c9c318(void)

void FUN_147c9c318(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  uStack_20 = 0x40000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  cVar1 = (**(code **)(*param_1 + 0x830))(param_1);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerViewSelf_Validate";
  }
  else {
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = (undefined4)uStack_20;
    uStack_3c = uStack_20._4_4_;
    (**(code **)(*param_1 + 0x838))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c402 FUN_147c9c402 body=287 status=ok
// SIG undefined FUN_147c9c402(void)

void FUN_147c9c402(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  *(uint *)(param_1 + 0x740) = *(uint *)(param_1 + 0x740) | 2;
  FUN_14485c47a(param_1 + 0x74c,local_20);
  *(undefined8 *)(param_1 + 0x798) = local_48;
  *(undefined4 *)(param_1 + 0x788) = local_58;
  *(undefined4 *)(param_1 + 0x78c) = uStack_54;
  *(undefined4 *)(param_1 + 0x790) = uStack_50;
  *(undefined4 *)(param_1 + 0x794) = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c522 FUN_147c9c522 body=427 status=ok
// SIG undefined FUN_147c9c522(void)

void FUN_147c9c522(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_58 = local_40;
  local_68 = local_50;
  uStack_60 = uStack_48;
  local_88 = local_38;
  uStack_84 = uStack_34;
  uStack_80 = uStack_30;
  uStack_7c = uStack_2c;
  local_78 = local_28;
  *(uint *)(param_1 + 0x740) = *(uint *)(param_1 + 0x740) | 1;
  FUN_14485c47a(param_1 + 0x744,local_20);
  *(undefined8 *)(param_1 + 0x768) = local_78;
  *(ulonglong *)(param_1 + 0x758) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x760) = CONCAT44(uStack_7c,uStack_80);
  *(undefined4 *)(param_1 + 0x770) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x774) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x778) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x77c) = uStack_60._4_4_;
  *(undefined8 *)(param_1 + 0x780) = local_58;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c6ea FUN_147c9c6ea body=537 status=ok
// SIG undefined FUN_147c9c6ea(void)

void FUN_147c9c6ea(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar4 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar3 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar2 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_4c != 0;
  local_68 = iVar1 != 0;
  (**(code **)(*param_1 + 0xb60))(param_1,iVar4 != 0,iVar3 != 0,iVar2 != 0);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c904 FUN_147c9c904 body=232 status=ok
// SIG undefined FUN_147c9c904(void)

void FUN_147c9c904(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c9c9ee(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9c9ee FUN_147c9c9ee body=251 status=ok
// SIG undefined FUN_147c9c9ee(void)

void FUN_147c9c9ee(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined1 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x430) != 0) && (DAT_14c98e618 != 0)) {
    plVar2 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))();
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0xe0);
      FUN_1446ddc76(local_60,"InputDeviceAnalogStickDeadZone",1);
      local_58 = 1;
      local_54 = param_2;
      (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_60);
      FUN_1446ddc76(local_70,"InputDeviceAnalogStickDeadZone",1);
      local_68 = 2;
      local_64 = param_3;
      (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_70);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9caea FUN_147c9caea body=212 status=ok
// SIG undefined FUN_147c9caea(void)

void FUN_147c9caea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
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
  if ((*(longlong *)(param_1 + 0x430) != 0) && (DAT_14c98e618 != 0)) {
    plVar1 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))
                (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0xe0),local_1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9cbc4 FUN_147c9cbc4 body=162 status=ok
// SIG undefined FUN_147c9cbc4(void)

void FUN_147c9cbc4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xc70))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9cc68 FUN_147c9cc68 body=325 status=ok
// SIG undefined FUN_147c9cc68(void)

void FUN_147c9cc68(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14364da82(param_1,local_1c,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9cdb2 FUN_147c9cdb2 body=228 status=ok
// SIG undefined FUN_147c9cdb2(void)

void FUN_147c9cdb2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c9ce98(param_1,local_19,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ce98 FUN_147c9ce98 body=114 status=ok
// SIG undefined FUN_147c9ce98(void)

void FUN_147c9ce98(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && (*(longlong *)(lVar1 + 0x78) != 0)))) {
      FUN_147acc3a0(*(longlong *)(lVar1 + 0x78),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147c9cf0a FUN_147c9cf0a body=229 status=ok
// SIG undefined FUN_147c9cf0a(void)

void FUN_147c9cf0a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c9cff0(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9cff0 FUN_147c9cff0 body=134 status=ok
// SIG undefined FUN_147c9cff0(void)

void FUN_147c9cff0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar4 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) &&
        ((*(longlong *)(lVar1 + 0x78) != 0 &&
         (plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x78) + 0xf8), plVar3 != (longlong *)0x0))))
       )) {
                    /* WARNING: Could not recover jumptable at 0x000147c9d073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x128))(plVar3,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147c9d076 FUN_147c9d076 body=175 status=ok
// SIG undefined FUN_147c9d076(void)

void FUN_147c9d076(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb30))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d12a FUN_147c9d12a body=154 status=ok
// SIG undefined FUN_147c9d12a(void)

void FUN_147c9d12a(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x950) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d1cc FUN_147c9d1cc body=508 status=ok
// SIG undefined FUN_147c9d1cc(void)

void FUN_147c9d1cc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  int local_30;
  undefined4 local_2c;
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
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
  local_40 = local_30 != 0;
  local_48 = local_2c;
  (**(code **)(*param_1 + 0xcc0))(param_1,local_20,local_24,local_25);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d3ce FUN_147c9d3ce body=162 status=ok
// SIG undefined FUN_147c9d3ce(void)

void FUN_147c9d3ce(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xca8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d472 FUN_147c9d472 body=155 status=ok
// SIG undefined FUN_147c9d472(void)

void FUN_147c9d472(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xbc8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d50e FUN_147c9d50e body=158 status=ok
// SIG undefined FUN_147c9d50e(void)

void FUN_147c9d50e(undefined8 param_1,longlong param_2)

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
  FUN_14364da82(param_1,0,0,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d5b2 FUN_147c9d5b2 body=41 status=ok
// SIG undefined FUN_147c9d5b2(void)

void FUN_147c9d5b2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb88))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c9d5e0 FUN_147c9d5e0 body=41 status=ok
// SIG undefined FUN_147c9d5e0(void)

void FUN_147c9d5e0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb90))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c9d60a FUN_147c9d60a body=175 status=ok
// SIG undefined FUN_147c9d60a(void)

void FUN_147c9d60a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb38))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d6ba FUN_147c9d6ba body=209 status=ok
// SIG undefined FUN_147c9d6ba(void)

void FUN_147c9d6ba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d790 FUN_147c9d790 body=162 status=ok
// SIG undefined FUN_147c9d790(void)

void FUN_147c9d790(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xc00))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d83a FUN_147c9d83a body=239 status=ok
// SIG undefined FUN_147c9d83a(void)

void FUN_147c9d83a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147c9d92a(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d92a FUN_147c9d92a body=156 status=ok
// SIG undefined FUN_147c9d92a(void)

undefined4 FUN_147c9d92a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    local_20 = param_2[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_147d95a3e(lVar3,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9d9ce FUN_147c9d9ce body=239 status=ok
// SIG undefined FUN_147c9d9ce(void)

void FUN_147c9d9ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147c9dabe(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9dabe FUN_147c9dabe body=156 status=ok
// SIG undefined FUN_147c9dabe(void)

undefined4 FUN_147c9dabe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    local_20 = param_2[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_147d95c58(lVar3,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9dbda FUN_147c9dbda body=180 status=ok
// SIG undefined FUN_147c9dbda(void)

void FUN_147c9dbda(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a364bc();
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893054);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_20 = (ulonglong)DAT_14c893054;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9618);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9dc90 FUN_147c9dc90 body=118 status=ok
// SIG undefined FUN_147c9dc90(void)

void FUN_147c9dc90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 0x490);
  FUN_140476f06(&local_30,param_1 + 0x478,param_1 + 0x460,param_3);
  *(undefined8 *)(param_1 + 0x488) = local_20;
  *(undefined4 *)(param_1 + 0x478) = local_30;
  *(undefined4 *)(param_1 + 0x47c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x480) = uStack_28;
  *(undefined4 *)(param_1 + 0x484) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9dd08 FUN_147c9dd08 body=124 status=ok
// SIG undefined FUN_147c9dd08(void)

void FUN_147c9dd08(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xe60))(param_1,&local_38);
  *(undefined8 *)(param_3 + 4) = local_28;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  (**(code **)(*param_1 + 0x680))(param_1,&local_38);
  *(undefined8 *)(param_3 + 10) = local_28;
  param_3[6] = local_38;
  param_3[7] = uStack_34;
  param_3[8] = uStack_30;
  param_3[9] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9dd86 FUN_147c9dd86 body=498 status=ok
// SIG undefined FUN_147c9dd86(void)

void FUN_147c9dd86(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = param_1[0xc4];
  local_48 = (undefined4)param_1[0xc2];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x614);
  uStack_40 = (undefined4)param_1[0xc3];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x61c);
  (**(code **)(*param_1 + 0x680))(local_48,&local_60);
  plVar5 = (longlong *)param_1[0x89];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x788))(plVar5,param_2,&local_60,&local_48);
  }
  lVar3 = (**(code **)(*param_1 + 0x6b8))(param_1);
  if (((((lVar3 == 0) || (param_1[0x89] == 0)) || (cVar2 = FUN_14479439c(lVar3,0), cVar2 == '\0'))
      || (cVar2 = FUN_1478ba174(lVar3), cVar2 != '\0')) &&
     ((((*(byte *)(param_1 + 0x84) & 2) != 0 &&
       (cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar2 != '\0')) &&
      ((*(longlong *)(DAT_14cb0d2b0 + 0xfe0) != 0 && (lVar3 = FUN_1447210f0(param_1), lVar3 != 0))))
     )) {
    plVar5 = *(longlong **)(DAT_14cb0d2b0 + 0xfe0);
    uVar4 = FUN_1447210f0(param_1);
    cVar2 = (**(code **)(*plVar5 + 0x158))(plVar5,uVar4);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x118))
                (*(longlong **)(DAT_14cb0d2b0 + 0xfe0),&local_70,0);
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x20))(local_70,param_1,&local_60);
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_68 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    }
  }
  (**(code **)(*param_1 + 0x688))(param_1,&local_60,1);
  plVar5 = (longlong *)param_1[0x7a];
  if ((plVar5 != (longlong *)0x0) || (plVar5 = (longlong *)param_1[0xf4], plVar5 != (longlong *)0x0)
     ) {
    local_78 = local_50;
    local_88 = local_60;
    uStack_84 = uStack_5c;
    uStack_80 = uStack_58;
    uStack_7c = uStack_54;
    (**(code **)(*plVar5 + 0x730))(local_60,&local_88,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c9df8c FUN_147c9df8c body=235 status=ok
// SIG undefined FUN_147c9df8c(void)

undefined8 * FUN_147c9df8c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [424];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  thunk_FUN_140a5071c(local_1d0);
  FUN_147ca758a(local_1f8,&local_1f9);
  FUN_147c9e07e(local_1f8,&local_1e0,local_1d0);
  *param_2 = local_1e0;
  param_2[1] = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
    UNLOCK();
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
  }
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_140a4ff8c(local_1d0);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e078 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 147c9e07e FUN_147c9e07e body=115 status=ok
// SIG undefined FUN_147c9e07e(void)

longlong * FUN_147c9e07e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a88344(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147c9e0f2 FUN_147c9e0f2 body=226 status=ok
// SIG undefined FUN_147c9e0f2(void)

void FUN_147c9e0f2(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x7a] != 0) {
    (**(code **)(*param_1 + 0x6f8))(param_1);
    FUN_1413ef136(param_1);
  }
  FUN_147a36648(param_1);
  local_20 = 0;
  local_1c = 1;
  local_18 = 0x40000000;
  (**(code **)(*param_1 + 0xe38))(param_1,param_1);
  (**(code **)(*param_1 + 0xec8))(param_1);
  *(uint *)(param_1 + 0xb4) =
       (*(uint *)(param_1 + 0xb4) & 0xffffffef) + (~(uint)*(byte *)(param_1[0x73] + 0x39a) & 4) * 4;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893048);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e1d6 FUN_147c9e1d6 body=197 status=ok
// SIG undefined FUN_147c9e1d6(void)

void FUN_147c9e1d6(longlong *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xec8))();
  local_20 = 0;
  local_1c = 1;
  local_18 = 0x40000000;
  (**(code **)(*param_1 + 0xe38))(param_1,param_1);
  if (param_1[0x73] == 0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = (~(uint)*(byte *)(param_1[0x73] + 0x39a) & 4) << 2;
  }
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffef | uVar1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893048);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e2ea FUN_147c9e2ea body=219 status=ok
// SIG undefined FUN_147c9e2ea(void)

void FUN_147c9e2ea(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0xe60))(param_1,&local_90);
  local_68 = local_80;
  local_78 = local_90;
  uStack_70 = uStack_88;
  local_48 = DAT_14c846508;
  local_58 = DAT_14c8464f8;
  uStack_50 = DAT_14c846500;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  local_c8 = param_3;
  local_c0 = param_4;
  FUN_147abea3c(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e3c6 FUN_147c9e3c6 body=158 status=ok
// SIG undefined FUN_147c9e3c6(void)

void FUN_147c9e3c6(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = param_3[2];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_18 = DAT_14c846508;
  local_28 = DAT_14c8464f8;
  uStack_20 = DAT_14c846500;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = param_5;
  local_78 = 0;
  local_88 = param_4;
  FUN_147abea3c(param_5,0,&local_48);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e49c FUN_147c9e49c body=92 status=ok
// SIG undefined FUN_147c9e49c(void)

void FUN_147c9e49c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9a48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e51c FUN_147c9e51c body=292 status=ok
// SIG undefined FUN_147c9e51c(void)

void FUN_147c9e51c(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_78 [32];
  float *local_58;
  undefined1 local_50;
  undefined1 local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    if ((char)param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78,param_2,param_3,param_5);
    }
    if (0.0 <= *param_4) {
      fVar2 = (float)*param_4;
    }
    else {
      fVar2 = *(float *)(plVar1 + 0x7a);
    }
    local_34 = (float)(byte)((ulonglong)param_3 >> 0x18) * 0.003921569;
    local_38 = (float)((uint)param_3 & 0xff) * 0.003921569;
    local_3c = (float)((uint)((ulonglong)param_3 >> 8) & 0xff) * 0.003921569;
    local_40 = (float)((uint)((ulonglong)param_3 >> 0x10) & 0xff) * 0.003921569;
    local_58 = &local_40;
    local_48 = param_7;
    local_50 = param_6;
    (**(code **)(*plVar1 + 0x808))(plVar1,fVar2,(float)param_4[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e65a FUN_147c9e65a body=191 status=ok
// SIG undefined FUN_147c9e65a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c9e65a(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = *(uint *)(param_1 + 0x7d8);
  if ((int)*(uint *)(param_1 + 0x7d8) <= (int)param_2) {
    uVar2 = param_2;
  }
  *(uint *)(param_1 + 0x7d8) = uVar2;
  uVar2 = param_2 + 0xf;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  lVar1 = param_1 + (ulonglong)(param_2 - (uVar2 & 0xfffffff0)) * 0x10;
  plVar3 = (longlong *)(lVar1 + 0x7e0);
  if (plVar3 != param_3) {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    *plVar3 = *param_3;
    *param_3 = 0;
    *(int *)(lVar1 + 0x7e8) = (int)param_3[1];
    *(undefined4 *)(lVar1 + 0x7ec) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  uVar2 = 0;
  if (0 < (int)(param_2 - _DAT_14c7618d0)) {
    uVar2 = param_2 - _DAT_14c7618d0;
  }
  if ((int)uVar2 < (int)param_2) {
    do {
      uVar2 = uVar2 + 1;
      FUN_147c9b5da(param_1,uVar2,(ulonglong)((uVar2 & 0xf) << 4) + param_1 + 0x7e0);
    } while (uVar2 != param_2);
  }
  return;
}



// FUNCTION 147c9e750 FUN_147c9e750 body=133 status=ok
// SIG undefined FUN_147c9e750(void)

void FUN_147c9e750(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_14487fd02();
  if (iVar1 == 0) {
    FUN_140056680(local_38,L"?restart");
    local_48 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    FUN_1461c932c(param_1,local_38,2,0);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e7d6 FUN_147c9e7d6 body=103 status=ok
// SIG undefined FUN_147c9e7d6(void)

void FUN_147c9e7d6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14487fd02();
  if (iVar1 == 0) {
    local_38 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    FUN_1461c932c(param_1,param_2,2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e83e FUN_147c9e83e body=68 status=ok
// SIG undefined FUN_147c9e83e(void)

void FUN_147c9e83e(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14497e828();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c9e85b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x3f8))(plVar1);
    return;
  }
  lVar2 = FUN_1447210f0(param_1);
  FUN_147d811a6(DAT_14cb0d2b0,lVar2,*(undefined8 *)(lVar2 + 0x38));
  return;
}



// FUNCTION 147c9e882 FUN_147c9e882 body=47 status=ok
// SIG undefined FUN_147c9e882(void)

void FUN_147c9e882(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14caf9ae0);
                    /* WARNING: Could not recover jumptable at 0x000147c9e8ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147c9e8b2 FUN_147c9e8b2 body=95 status=ok
// SIG undefined FUN_147c9e8b2(void)

void FUN_147c9e8b2(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  lVar1 = FUN_14093f908();
  (**(code **)(*param_1 + 0xb20))(param_1,*(longlong *)(lVar1 + 0x588) == 0,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9e91e FUN_147c9e91e body=71 status=ok
// SIG undefined FUN_147c9e91e(void)

void FUN_147c9e91e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  plVar1 = *(longlong **)(lVar2 + 0x170);
  if ((plVar1 != (longlong *)0x0) && (1 < *(int *)(param_2 + 8))) {
                    /* WARNING: Could not recover jumptable at 0x000147c9e95a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x798))(plVar1,param_1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 147c9e966 FUN_147c9e966 body=62 status=ok
// SIG undefined FUN_147c9e966(void)

void FUN_147c9e966(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = FUN_14487fd02();
  if ((uVar2 & 0xfffffffd) != 0) {
    return;
  }
  uVar1 = FUN_1447210f0(param_1);
  FUN_146152ff8(uVar1,param_2,0,0);
  return;
}



// FUNCTION 147c9e9a4 FUN_147c9e9a4 body=145 status=ok
// SIG undefined FUN_147c9e9a4(void)

void FUN_147c9e9a4(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_44 = 1;
  local_40 = 0x40000000;
  (**(code **)(*param_1 + 0xe38))();
  local_38 = param_2;
  local_30 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9608);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ea36 FUN_147c9ea36 body=80 status=ok
// SIG undefined FUN_147c9ea36(void)

void FUN_147c9ea36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_14 = 1;
  local_10 = 0x40000000;
  (**(code **)(*param_1 + 0xe38))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ea88 FUN_147c9ea88 body=613 status=ok
// SIG undefined FUN_147c9ea88(void)

undefined8 FUN_147c9ea88(longlong *param_1,double *param_2,double *param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  double local_378;
  double local_368;
  double dStack_360;
  undefined1 local_358 [128];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 local_2b8 [16];
  undefined8 local_238 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_190;
  undefined1 local_108;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_1[0x86] != 0) {
    lVar6 = FUN_1449db7f2();
    plVar4 = (longlong *)param_1[0x86];
    if (plVar4 != (longlong *)0x0) {
      uVar7 = 0;
      if ((lVar6 == 0) || (lVar8 = plVar4[2], lVar8 == 0)) goto LAB_147c9eafc;
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && (lVar6 = plVar4[0xf], lVar6 != 0)))) {
        local_2c8 = DAT_14c8464f0;
        local_2d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dStack_2d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        puVar9 = &DAT_14c846400;
        puVar10 = local_2b8;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar9 = &DAT_14c846400;
        puVar10 = local_238;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        local_190 = 0;
        local_108 = 0;
        local_78 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_68 = (undefined4)DAT_14c8464e0;
        uStack_64 = DAT_14c8464e0._4_4_;
        uStack_60 = (undefined4)DAT_14c8464e8;
        uStack_5c = DAT_14c8464e8._4_4_;
        local_58 = DAT_14c8464f0;
        local_50 = 0;
        uStack_48 = 0;
        cVar5 = (**(code **)(*plVar4 + 0x358))
                          (plVar4,*(undefined8 *)(lVar6 + 0xf8),&local_2d8,0xffffffff);
        if (cVar5 != '\0') {
          FUN_14012d55c(&local_2d8,local_358);
          local_398 = 0;
          cVar5 = FUN_1401ca69e(param_2,&local_50,local_358,&local_368);
          if (cVar5 != '\0') {
            if ((char)param_4 != '\0') {
              local_368 = local_368 - (double)(int)local_50;
              dStack_360 = dStack_360 - (double)(int)((ulonglong)local_50 >> 0x20);
            }
            local_378 = param_2[2];
            local_388 = *(undefined4 *)param_2;
            uStack_384 = *(undefined4 *)((longlong)param_2 + 4);
            uStack_380 = *(undefined4 *)(param_2 + 1);
            uStack_37c = *(undefined4 *)((longlong)param_2 + 0xc);
            (**(code **)(*param_1 + 0xb70))(param_1,&local_388,&local_368,param_4);
            dVar1 = *param_2;
            dVar2 = param_2[1];
            dVar3 = param_2[2];
            *param_3 = local_368;
            param_3[1] = dStack_360;
            param_3[2] = SQRT((dVar3 - local_2c8) * (dVar3 - local_2c8) +
                              (dVar2 - dStack_2d0) * (dVar2 - dStack_2d0) +
                              (dVar1 - local_2d8) * (dVar1 - local_2d8));
            uVar7 = 1;
            goto LAB_147c9eafc;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_147c9eafc:
  if ((local_38 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ecee FUN_147c9ecee body=292 status=ok
// SIG undefined FUN_147c9ecee(void)

undefined8
FUN_147c9ecee(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x440) == 0) {
LAB_147c9ed28:
    cVar2 = FUN_147ab7a10(param_1,param_2,&local_50,&local_68);
    if (cVar2 != '\0') {
      uVar3 = FUN_1447210f0(param_1);
      dVar1 = (double)*(float *)(param_1 + 0x66c);
      local_70 = local_58 * dVar1 + local_40;
      local_78 = local_60 * dVar1 + local_48;
      local_80 = dVar1 * local_68 + local_50;
      local_88 = &DAT_14cad0f10;
      local_98 = param_3;
      local_90 = param_4;
      uVar3 = FUN_1400b50cc(uVar3,param_5);
      goto LAB_147c9edec;
    }
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    lVar4 = FUN_147af0014(*(longlong *)(param_1 + 0x440),&local_38,1);
    if (lVar4 == 0) goto LAB_147c9ed28;
  }
  uVar3 = 0;
LAB_147c9edec:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ee14 FUN_147c9ee14 body=365 status=ok
// SIG undefined FUN_147c9ee14(void)

undefined4
FUN_147c9ee14(longlong *param_1,undefined8 *param_2,undefined4 param_3,float param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  plVar3 = DAT_14c966e90;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_70 = 0xffffffff;
  uStack_68 = 0x3c88888900000000;
  local_60 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  local_50 = DAT_14c8464f0;
  local_48 = 0;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = (longlong *)param_2[2];
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
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
  local_70 = CONCAT44(param_3,(undefined4)local_70);
  local_60 = (double)param_4;
  local_48 = param_5;
  uVar4 = (**(code **)(*param_1 + 0xd08))(param_1,&local_88);
  plVar3 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9ef82 FUN_147c9ef82 body=405 status=ok
// SIG undefined FUN_147c9ef82(void)

undefined4
FUN_147c9ef82(longlong *param_1,undefined8 *param_2,float param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  plVar3 = DAT_14c966e90;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_90 = 0xffffffff;
  uStack_88 = 0x3c88888900000000;
  local_80 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_78 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_70 = DAT_14c8464f0;
  local_68 = 0;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = (longlong *)param_2[2];
  if (local_98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
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
  local_80 = (double)param_3;
  uStack_78 = 0;
  local_70 = 0;
  uStack_88 = CONCAT44(param_4,param_5);
  local_68 = param_6;
  uVar4 = (**(code **)(*param_1 + 0xd08))(param_1,&local_a8);
  plVar3 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9f118 FUN_147c9f118 body=620 status=ok
// SIG undefined FUN_147c9f118(void)

ulonglong FUN_147c9f118(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4,
                       undefined4 param_5,undefined1 *param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  param_2 = param_2 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(longlong **)(DAT_14cb0d2b0 + 0xfe0) != (longlong *)0x0) &&
     (plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x130))(),
     plVar3 != (longlong *)0x0)) {
    local_180 = (undefined1 *)CONCAT44(local_180._4_4_,param_7);
    local_188 = param_6;
    cVar1 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar1 != '\0') goto LAB_147c9f271;
  }
  if (*(longlong *)(param_1 + 0x508) == 0) {
    uVar6 = 0;
  }
  else {
    local_178 = param_7;
    local_180 = param_6;
    local_188 = (undefined1 *)CONCAT44(local_188._4_4_,param_5);
    uVar2 = FUN_147d93860(*(longlong *)(param_1 + 0x508),param_2,param_3,param_4);
    uVar6 = (ulonglong)uVar2;
    if ((*(byte *)(param_1 + 0x634) & 0x14) != 0) {
      lVar5 = 0;
      memset(local_148,0,0x100);
      local_78 = 0xffffffff;
      local_144 = 0x3f800000;
      local_a4 = 0xffffffff;
      local_158 = *param_4;
      uStack_154 = param_4[1];
      uStack_150 = param_4[2];
      uStack_14c = param_4[3];
      local_188 = local_148;
      cVar1 = FUN_14364e710(param_1,&local_158,*(undefined1 *)(param_1 + 0x66b),1);
      lVar7 = param_1 + param_2 * 8 + 0x690;
      lVar4 = FUN_14479d2ce(lVar7);
      if (cVar1 != '\0') {
        lVar5 = FUN_14479d2ce(local_70);
      }
      if ((*(longlong *)(param_1 + 0x440) != 0) && ((param_3 == 5 || (param_3 == 0)))) {
        local_168 = *param_4;
        uStack_164 = param_4[1];
        uStack_160 = param_4[2];
        uStack_15c = param_4[3];
        cVar1 = FUN_147af00f4(*(longlong *)(param_1 + 0x440),&local_168,param_3 != 0);
        if (cVar1 != '\0') {
          lVar5 = 0;
        }
      }
      if (param_3 == 5) {
        uVar2 = *(uint *)(param_1 + 0x634);
        if (lVar5 != 0 && (uVar2 & 4) != 0) {
          FUN_1479f1eee(lVar5,param_2);
          uVar2 = *(uint *)(param_1 + 0x634);
        }
        if ((uVar2 & 0x10) == 0) goto LAB_147c9f271;
        if ((lVar4 != 0) && (lVar4 != lVar5)) {
          FUN_1479f122c(param_2,lVar4,lVar5);
        }
        FUN_1479f122c(param_2,lVar5,0);
        lVar5 = 0;
      }
      else {
        if (param_3 != 0) goto LAB_147c9f271;
        uVar2 = *(uint *)(param_1 + 0x634);
        if (lVar5 != 0 && (uVar2 & 4) != 0) {
          FUN_1479f1d18(lVar5,param_2);
          uVar2 = *(uint *)(param_1 + 0x634);
        }
        if ((uVar2 & 0x10) == 0) goto LAB_147c9f271;
        FUN_1479f122c(param_2,lVar4,lVar5);
      }
      FUN_14485c47a(lVar7,lVar5);
    }
  }
LAB_147c9f271:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147c9f3a6 FUN_147c9f3a6 body=130 status=ok
// SIG undefined FUN_147c9f3a6(void)

void FUN_147c9f3a6(longlong *param_1,uint param_2,char param_3,char param_4)

{
  if ((param_3 != '\0') && ((*(byte *)(param_1 + 0xe0) & 1) != (byte)param_2)) {
    (**(code **)(*param_1 + 0x730))(param_1,param_2);
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe | param_2 & 0xff;
  }
  if ((param_4 != '\0') && (((*(byte *)(param_1 + 0xe0) & 2) == 0) == (bool)(byte)param_2)) {
    (**(code **)(*param_1 + 0x748))(param_1,param_2);
    *(uint *)(param_1 + 0xe0) = (*(uint *)(param_1 + 0xe0) & 0xfffffffd) + (param_2 & 0xff) * 2;
  }
  return;
}



// FUNCTION 147c9f428 FUN_147c9f428 body=92 status=ok
// SIG undefined FUN_147c9f428(void)

void FUN_147c9f428(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,byte param_6)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_5;
  local_c = (uint)param_6;
  local_18 = param_3;
  local_14 = param_4;
  (**(code **)(*param_1 + 0xe38))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9f486 FUN_147c9f486 body=1244 status=ok
// SIG undefined FUN_147c9f486(void)

void FUN_147c9f486(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  double *pdVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    (**(code **)(*param_1 + 0x718))(param_1,&local_e8,&local_c8);
  }
  else {
    iVar10 = (int)param_1 + 0x744;
    dVar13 = (double)FUN_14479d2ce();
    if (dVar13 == 0.0) {
      local_d8 = (double)param_1[0xed];
      local_e8 = (double)param_1[0xeb];
      uStack_e0 = (double)param_1[0xec];
      local_c8 = (double)param_1[0xee];
      dStack_c0 = (double)param_1[0xef];
      local_b8 = (double)param_1[0xf0];
    }
    else {
      dVar1 = *(double *)((longlong)dVar13 + 0x240);
      dVar16 = *(double *)((longlong)dVar13 + 0x248);
      dVar5 = *(double *)((longlong)dVar13 + 0x250);
      dVar6 = *(double *)((longlong)dVar13 + 600);
      pdVar9 = *(double **)((longlong)dVar13 + 0x228);
      dVar8 = dVar13;
      local_e8 = dVar1;
      uStack_e0 = dVar16;
      local_d8 = dVar5;
      uStack_d0 = dVar6;
      if (pdVar9 == (double *)0x0) {
        iVar10 = 0x40;
        pdVar9 = (double *)FUN_14001cc68(0x40,0x10);
        dVar8 = DAT_14c8463d8;
        *pdVar9 = DAT_14c8463d0;
        pdVar9[1] = dVar8;
        dVar8 = DAT_14c8463e8;
        pdVar9[2] = DAT_14c8463e0;
        pdVar9[3] = dVar8;
        dVar8 = DAT_14c846500;
        pdVar9[4] = DAT_14c8464f8;
        pdVar9[5] = dVar8;
        dVar8 = DAT_14c846508;
        pdVar9[6] = DAT_14c846508;
        *(double **)((longlong)dVar13 + 0x228) = pdVar9;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar16 != pdVar9[1]);
      auVar3._0_8_ = -(ulonglong)(dVar1 != *pdVar9);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar16 != pdVar9[1]) >> 0x20);
      iVar7 = movmskpd(SUB84(dVar8,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar6 != pdVar9[3]);
      auVar4._0_8_ = -(ulonglong)(dVar5 != pdVar9[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar9[3]) >> 0x20);
      uVar11 = movmskpd(iVar10,auVar4);
      if ((uVar11 & 0x3fffffff) != 0 || iVar7 != 0) {
        *(undefined4 *)(pdVar9 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)pdVar9 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(pdVar9 + 3) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)pdVar9 + 0x1c) = uStack_d0._4_4_;
        *(undefined4 *)pdVar9 = (undefined4)local_e8;
        *(undefined4 *)((longlong)pdVar9 + 4) = local_e8._4_4_;
        *(undefined4 *)(pdVar9 + 1) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)pdVar9 + 0xc) = uStack_e0._4_4_;
        FUN_1448052ee(&local_e8,&local_c8);
        pdVar9[6] = local_b8;
        pdVar9[4] = local_c8;
        pdVar9[5] = dStack_c0;
      }
      local_b8 = pdVar9[6] + (double)param_1[0xf0];
      dStack_c0 = pdVar9[5] + (double)param_1[0xef];
      local_c8 = pdVar9[4] + (double)param_1[0xee];
      dVar1 = *(double *)((longlong)dVar13 + 0x260);
      dVar16 = *(double *)((longlong)dVar13 + 0x270);
      dVar13 = *(double *)((longlong)dVar13 + 0x268);
      FUN_1401c9a0e(&local_c8,&local_100,param_1 + 0xeb);
      local_d8 = dVar16 + local_f0;
      uStack_e0 = dVar13 + local_f8;
      local_e8 = dVar1 + local_100;
    }
  }
  dVar5 = local_c8 * 0.01745329238474369;
  dVar6 = dStack_c0 * 0.01745329238474369;
  dVar8 = local_b8 * 0.01745329238474369;
  dVar13 = sin(dVar5);
  dVar1 = sin(dVar6);
  dVar16 = sin(dVar8);
  sin(0.0);
  dVar5 = cos(dVar5);
  dVar6 = cos(dVar6);
  dVar8 = cos(dVar8);
  cos(0.0);
  dVar12 = dVar5 * dVar6;
  dVar14 = dVar1 * dVar5;
  dVar2 = dVar13 * dVar16 * dVar6 - dVar1 * dVar8;
  dVar1 = dVar13 * dVar16 * dVar1 + dVar6 * dVar8;
  dVar5 = -dVar16 * dVar5;
  *param_2 = local_e8;
  param_2[1] = uStack_e0;
  param_2[2] = local_d8;
  dVar16 = dVar13 * dVar13 + dVar12 * dVar12 + dVar14 * dVar14;
  if (((dVar16 != 1.0) || (dVar8 = dVar12, dVar15 = dVar14, dVar6 = dVar13, NAN(dVar16))) &&
     (dVar8 = DAT_14c8464e0, dVar15 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar8 = dVar12 * dVar16;
    dVar15 = dVar14 * dVar16;
    dVar6 = dVar13 * dVar16;
  }
  *param_3 = dVar8;
  param_3[1] = dVar15;
  param_3[2] = dVar6;
  dVar13 = dVar5 * dVar5 + dVar2 * dVar2 + dVar1 * dVar1;
  if (((dVar13 != 1.0) || (dVar16 = dVar2, dVar6 = dVar1, dVar8 = dVar5, NAN(dVar13))) &&
     (dVar16 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar13)) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar16 = dVar2 * dVar13;
    dVar6 = dVar1 * dVar13;
    dVar8 = dVar5 * dVar13;
  }
  *param_4 = dVar16;
  param_4[1] = dVar6;
  param_4[2] = dVar8;
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c9f964 FUN_147c9f964 body=144 status=ok
// SIG undefined FUN_147c9f964(void)

uint FUN_147c9f964(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = *(uint *)(param_1 + 0x740);
  if ((uVar5 & 2) != 0) {
    lVar6 = FUN_14479d2ce(param_1 + 0x74c);
    if (lVar6 == 0) {
      param_2[2] = *(double *)(param_1 + 0x798);
      dVar1 = *(double *)(param_1 + 0x790);
      *param_2 = *(double *)(param_1 + 0x788);
      param_2[1] = dVar1;
    }
    else {
      dVar1 = *(double *)(lVar6 + 0x270);
      dVar2 = *(double *)(param_1 + 0x798);
      dVar3 = *(double *)(lVar6 + 0x268);
      dVar4 = *(double *)(param_1 + 0x790);
      *param_2 = *(double *)(lVar6 + 0x260) + *(double *)(param_1 + 0x788);
      param_2[1] = dVar3 + dVar4;
      param_2[2] = dVar1 + dVar2;
    }
  }
  return (uVar5 & 2) >> 1;
}



// FUNCTION 147c9f9f8 FUN_147c9f9f8 body=64 status=ok
// SIG undefined FUN_147c9f9f8(void)

void FUN_147c9f9f8(longlong param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (*(ulonglong *)(param_1 + 0x3c8) == (ulonglong)DAT_14c893048) {
    *(byte *)(param_1 + 0x5a0) = *(byte *)(param_1 + 0x5a0) | 0x10;
  }
  return;
}



// FUNCTION 147c9fa38 FUN_147c9fa38 body=64 status=ok
// SIG undefined FUN_147c9fa38(void)

void FUN_147c9fa38(longlong param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (*(ulonglong *)(param_1 + 0x3c8) == (ulonglong)DAT_14c893048) {
    *(byte *)(param_1 + 0x5a0) = *(byte *)(param_1 + 0x5a0) | 0x10;
  }
  return;
}



// FUNCTION 147c9fa7c FUN_147c9fa7c body=84 status=ok
// SIG undefined FUN_147c9fa7c(void)

void FUN_147c9fa7c(longlong *param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] == (ulonglong)DAT_14c893048) {
                    /* WARNING: Could not recover jumptable at 0x000147c9fac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe00))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c9fad4 FUN_147c9fad4 body=84 status=ok
// SIG undefined FUN_147c9fad4(void)

void FUN_147c9fad4(longlong *param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] == (ulonglong)DAT_14c893048) {
                    /* WARNING: Could not recover jumptable at 0x000147c9fb1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe00))(param_1,0xffffffff);
    return;
  }
  return;
}



// FUNCTION 147c9fb28 FUN_147c9fb28 body=519 status=ok
// SIG undefined FUN_147c9fb28(void)

longlong FUN_147c9fb28(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  lVar8 = FUN_1447210f0();
  lVar1 = *(longlong *)(lVar8 + 0x170);
  lVar8 = *(longlong *)(lVar8 + 0x178);
  if (lVar1 != 0 && lVar8 != 0) {
    if ((*(longlong *)(param_1 + 0x448) == 0) ||
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x448) + 0xe70), lVar2 == 0)) {
      iVar7 = *(int *)(lVar8 + 0x3b0);
      if ((longlong)iVar7 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar8 + 0x3a8);
      uVar12 = 0;
      bVar5 = DAT_14c950c29;
      while( true ) {
        lVar3 = *(longlong *)(param_1 + 0x398);
        if ((lVar3 != 0 & bVar5) == 1) {
          FUN_1456cec3c(lVar3);
          bVar5 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar2 + uVar12) == lVar3) break;
        uVar12 = uVar12 + 8;
        if ((longlong)iVar7 * 8 == uVar12) {
          return 0;
        }
      }
    }
    else {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar2);
      }
      iVar7 = *(int *)(lVar8 + 0x3b0);
      if ((longlong)iVar7 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(lVar8 + 0x3a8);
      uVar12 = 0;
      bVar5 = DAT_14c950c29;
      while( true ) {
        if ((bVar5 & 1) != 0) {
          FUN_1456cec3c(lVar2);
          bVar5 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar3 + uVar12) == lVar2) break;
        uVar12 = uVar12 + 8;
        if ((longlong)iVar7 * 8 == uVar12) {
          return 0;
        }
      }
    }
    uVar12 = uVar12 >> 3;
    if (-1 < (int)uVar12) {
      iVar7 = *(int *)(lVar8 + 0x3b0);
      if ((int)uVar12 < iVar7) {
        iVar11 = 0;
        do {
          uVar4 = (uint)uVar12;
          uVar10 = (ulonglong)(param_2 + uVar4);
          if (uVar4 == iVar7 - 1U) {
            uVar10 = 0;
          }
          if (param_2 < 1) {
            uVar10 = (ulonglong)(param_2 + uVar4);
          }
          uVar12 = (ulonglong)(iVar7 - 1U);
          if (uVar4 != 0) {
            uVar12 = uVar10;
          }
          if (-1 < param_2) {
            uVar12 = uVar10;
          }
          lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x3a8) + (longlong)(int)uVar12 * 8);
          if ((*(longlong *)(param_1 + 0x398) != lVar2) &&
             (lVar3 = *(longlong *)(lVar2 + 0x168), lVar3 != 0)) {
            lVar9 = FUN_14490fee6();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (((*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30 &&
                 (*(longlong *)(lVar3 + 0x3d0) != 0)) &&
                (cVar6 = FUN_147ab13de(lVar1,param_1,lVar2), cVar6 != '\0')))) {
              return lVar2;
            }
          }
          iVar11 = iVar11 + 1;
          iVar7 = *(int *)(lVar8 + 0x3b0);
          if (iVar7 <= iVar11) {
            return lVar2;
          }
        } while( true );
      }
    }
  }
  return 0;
}



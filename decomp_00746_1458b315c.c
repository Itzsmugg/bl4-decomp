// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458b315c FUN_1458b315c body=132 status=ok
// SIG undefined FUN_1458b315c(void)

void FUN_1458b315c(longlong param_1,int param_2)

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



// FUNCTION 1458b31e1 FUN_1458b31e1 body=7 status=ok
// SIG undefined FUN_1458b31e1(void)

void FUN_1458b31e1(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1458b31e8 FUN_1458b31e8 body=62 status=ok
// SIG undefined FUN_1458b31e8(void)

void FUN_1458b31e8(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1458b3228 FUN_1458b3228 body=31 status=ok
// SIG undefined FUN_1458b3228(void)

undefined8 FUN_1458b3228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b3248 FUN_1458b3248 body=1298 status=ok
// SIG undefined FUN_1458b3248(void)

void FUN_1458b3248(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[10] = param_2;
  (**(code **)(*(longlong *)(param_1[9] + 0x3c20) + 0x18))(param_1[9] + 0x3c20);
  if (param_1[10] != 0) {
    lVar1 = *(longlong *)(param_1[10] + 0x1a00);
    if (lVar1 != 0) {
      local_60 = *(longlong *)(lVar1 + 0x1230);
      FUN_1446dcdd4(&local_58);
      if (DAT_14cb7d760 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_144837462(DAT_14cb7d760,&local_58);
      }
      if (lStack_40 != 0) {
        FUN_1400020a8();
      }
      if ((lVar4 != 0) && (plVar6 = (longlong *)param_1[9], plVar6 != (longlong *)0x0)) {
        uVar5 = FUN_1403c7982();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1403c7982();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
          if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
            if (((param_1[9] != 0) &&
                ((lVar8 = *(longlong *)(param_1[9] + 0x168), lVar8 != 0 &&
                 (*(char *)(lVar8 + 0x178) == '\x03')))) &&
               ((*(longlong *)(lVar1 + 0x1230) != param_1[0xb] ||
                (*(int *)(lVar1 + 0x1238) != (int)param_1[0xc])))) {
              FUN_140609c6a(param_1 + 0xe);
              uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
              FUN_14036c7e6(uVar5,&local_58,lVar4,1);
              param_1[0x10] = local_48;
              param_1[0x11] = lStack_40;
              *(undefined4 *)(param_1 + 0xe) = (undefined4)local_58;
              *(undefined4 *)((longlong)param_1 + 0x74) = local_58._4_4_;
              *(undefined4 *)(param_1 + 0xf) = uStack_50;
              *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_4c;
              if ((param_1[0xb] != *(longlong *)(lVar1 + 0x1230)) ||
                 ((int)param_1[0xc] != *(int *)(lVar1 + 0x1238))) {
                param_1[0xb] = *(longlong *)(lVar1 + 0x1230);
                *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0x1238);
                param_1[0xd] = 0;
              }
            }
            plVar6 = param_1 + 0xe;
            cVar3 = FUN_14486ea84(plVar6);
            if (cVar3 != '\0') {
              if (param_1[0x12] == 0) {
                lVar8 = FUN_14008e0ae(plVar6);
                lVar1 = param_1[9];
                local_58 = (undefined8 *)0x0;
                uStack_50 = 0;
                FUN_1446efa72(&local_58,0,3,0x10);
                puVar2 = local_58;
                uStack_50 = 3;
                *local_58 = &PTR_LAB_14b3f7890;
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 1;
                lVar4 = DAT_14c758608 + 1;
                if (lVar9 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar9 = DAT_14c758608 + 2;
                  lVar4 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar4;
                local_58[2] = lVar9;
                *local_58 = &PTR_FUN_14b9dcfe0;
                local_58[3] = 0;
                FUN_14485c47a(local_58 + 3,lVar1);
                puVar2[4] = param_1;
                FUN_14036a282(lVar8 + 0x168,&local_60,&local_58);
                FUN_1449db362(&local_58);
                param_1[0x12] = local_60;
              }
              if (param_1[0x13] == 0) {
                lVar8 = FUN_14008e0ae(plVar6);
                lVar1 = param_1[9];
                local_58 = (undefined8 *)0x0;
                uStack_50 = 0;
                FUN_1446efa72(&local_58,0,3,0x10);
                puVar2 = local_58;
                uStack_50 = 3;
                *local_58 = &PTR_LAB_14b3f7890;
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 1;
                lVar4 = DAT_14c758608 + 1;
                if (lVar9 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar9 = DAT_14c758608 + 2;
                  lVar4 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar4;
                local_58[2] = lVar9;
                *local_58 = &PTR_FUN_14b9dd050;
                local_58[3] = 0;
                FUN_14485c47a(local_58 + 3,lVar1);
                puVar2[4] = param_1;
                FUN_14036a282(lVar8 + 0x198,&local_60,&local_58);
                FUN_1449db362(&local_58);
                param_1[0x13] = local_60;
              }
            }
          }
        }
      }
    }
    lVar1 = *(longlong *)(param_1[10] + 0x1700);
    if (lVar1 != 0) {
      if ((int)param_1[1] != 3) {
        FUN_1446efa72(param_1,0,3,0x10);
        *(undefined4 *)(param_1 + 1) = 3;
      }
      puVar2 = (undefined8 *)*param_1;
      *puVar2 = &PTR_LAB_149e020b0;
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
      puVar2[2] = lVar8;
      *puVar2 = &PTR_FUN_14b9dd0c0;
      puVar2[3] = 0;
      FUN_14485c47a(puVar2 + 3,lVar1);
      puVar2[4] = &LAB_145adbbc6;
      *(undefined4 *)(puVar2 + 5) = 0;
      if ((int)param_1[5] != 3) {
        FUN_1446efa72(param_1 + 4,0,3,0x10);
        *(undefined4 *)(param_1 + 5) = 3;
      }
      puVar2 = (undefined8 *)param_1[4];
      *puVar2 = &PTR_LAB_149e020b0;
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
      puVar2[2] = lVar8;
      *puVar2 = &PTR_FUN_14b9dd0c0;
      puVar2[3] = 0;
      FUN_14485c47a(puVar2 + 3,lVar1);
      puVar2[4] = &LAB_145adbbc8;
      *(undefined4 *)(puVar2 + 5) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b375c FUN_1458b375c body=38 status=ok
// SIG undefined FUN_1458b375c(void)

undefined8 FUN_1458b375c(undefined8 param_1,int param_2)

{
  FUN_1458b3782();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b3782 FUN_1458b3782 body=398 status=ok
// SIG undefined FUN_1458b3782(void)

void FUN_1458b3782(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b895ab0;
  if (param_1[0x162] != 0) {
    plVar1 = param_1 + 0x166;
    if ((longlong *)param_1[0x164] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x164];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x15e] != 0) {
    FUN_1400020a8();
  }
  FUN_1457fcfbf(param_1[0x15b],*(undefined4 *)(param_1 + 0x15c));
  if (param_1[0x15b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x155] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4710a(param_1 + 0x143);
  FUN_140d4710a(param_1 + 0x133);
  FUN_140d4710a(param_1 + 0x123);
  FUN_1412d6a62(param_1 + 0xd2);
  FUN_1412d6a62(param_1 + 0x85);
  FUN_141286eab(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_1412d6a39(param_1[0x80],*(undefined4 *)(param_1 + 0x81));
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_1412d6a39(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x78] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x78] + 0x10))();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1412d6bec(param_1);
  return;
}



// FUNCTION 1458b3910 FUN_1458b3910 body=34 status=ok
// SIG undefined FUN_1458b3910(void)

bool FUN_1458b3910(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_1458b3932(param_1 + -0x30);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 1458b3932 FUN_1458b3932 body=84 status=ok
// SIG undefined FUN_1458b3932(void)

undefined8 FUN_1458b3932(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = FUN_1402a1246(lVar1), lVar1 != 0)) {
      return *(undefined8 *)(lVar1 + 0xf78);
    }
  }
  return 0;
}



// FUNCTION 1458b3986 FUN_1458b3986 body=150 status=ok
// SIG undefined FUN_1458b3986(void)

undefined8 FUN_1458b3986(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar4);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
        lVar2 = FUN_1449f3324();
        if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
          return 0;
        }
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30) {
          return 0;
        }
        uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x958) + 0x10))(lVar1 + 0x958);
        lVar2 = FUN_1412d7211(uVar3);
        if (lVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_1412d7224(lVar2);
        return uVar3;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar4);
  }
  return 0;
}



// FUNCTION 1458b3a1c FUN_1458b3a1c body=93 status=ok
// SIG undefined FUN_1458b3a1c(void)

void FUN_1458b3a1c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1458b3a7a(param_1,0);
  *(undefined8 *)(param_1 + 0xb50) = 0;
  plVar3 = *(longlong **)(param_1 + 0xb58);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb58) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001458b3a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458b3a7a FUN_1458b3a7a body=93 status=ok
// SIG undefined FUN_1458b3a7a(void)

void FUN_1458b3a7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1458b3ad8(param_1,0);
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xab0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xab0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001458b3ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458b3ad8 FUN_1458b3ad8 body=143 status=ok
// SIG undefined FUN_1458b3ad8(void)

void FUN_1458b3ad8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x280) = 0;
  plVar3 = *(longlong **)(param_1 + 0x288);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x288) = 0;
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
  FUN_14122e148(param_1 + 0x1c0);
  if (-1 < *(int *)(param_1 + 0x184)) {
    *(undefined4 *)(param_1 + 0x180) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  FUN_147770e52(param_1 + 0x178);
  return;
}



// FUNCTION 1458b3b72 FUN_1458b3b72 body=204 status=ok
// SIG undefined FUN_1458b3b72(void)

undefined8 * FUN_1458b3b72(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1405ba846();
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x3ff00000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x3ff00000;
  param_1[0x84] = 0x3ff0000000000000;
  param_1[0x85] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *param_1 = &PTR_FUN_14b0094b0;
  param_1[0x86] = &PTR_FUN_14b009b20;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  FUN_1412d7af2(param_1 + 0x8a);
  if ((((*(uint *)(param_1 + 1) & 0x80010) == 0) && (lVar2 = FUN_1447210f0(param_1), lVar2 != 0)) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  }
  return param_1;
}



// FUNCTION 1458b3c44 FUN_1458b3c44 body=103 status=ok
// SIG undefined FUN_1458b3c44(void)

void FUN_1458b3c44(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar2 + 0x130))(plVar2,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar2 + 0x140))(plVar2,lVar1);
  }
  plVar2 = (longlong *)FUN_144a7b9cd();
                    /* WARNING: Could not recover jumptable at 0x0001458b3c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x150))(plVar2,param_1,*(code **)(*plVar2 + 0x150));
  return;
}



// FUNCTION 1458b3cac FUN_1458b3cac body=92 status=ok
// SIG undefined FUN_1458b3cac(void)

void FUN_1458b3cac(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1458b3d9a();
  lVar1 = FUN_14479d2ce(param_1 + 0xe);
  if (lVar1 != 0) {
    lVar1 = FUN_1458b3d24(lVar1);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0x2d,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001458b3cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1458b3d24 FUN_1458b3d24 body=102 status=ok
// SIG undefined FUN_1458b3d24(void)

void FUN_1458b3d24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14592c742();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b3d9a FUN_1458b3d9a body=574 status=ok
// SIG undefined FUN_1458b3d9a(void)

void FUN_1458b3d9a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  thunk_FUN_1412d7b64();
  FUN_1458b4048(param_1);
  if (((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    cVar4 = FUN_144729dda(param_1 + 0x80);
    if (cVar4 != '\0') {
      lVar5 = FUN_1458b3fe4(param_1);
      if (lVar5 != 0) {
        uVar6 = FUN_14011c2be(*(longlong *)(param_1 + 0x58) + 0x58);
        local_78 = 0;
        uStack_70 = (longlong *)0x0;
        uStack_5c = CONCAT31(uStack_5c._1_3_,0xff);
        uStack_60 = 0;
        local_68 = 0;
        FUN_14493679e(lVar5,&local_78,uVar6,1);
        *(undefined4 *)(param_1 + 0x128) = (undefined4)local_68;
        *(undefined4 *)(param_1 + 300) = local_68._4_4_;
        *(undefined4 *)(param_1 + 0x130) = uStack_60;
        *(undefined4 *)(param_1 + 0x134) = uStack_5c;
        *(undefined4 *)(param_1 + 0x118) = (undefined4)local_78;
        *(undefined4 *)(param_1 + 0x11c) = local_78._4_4_;
        *(undefined4 *)(param_1 + 0x120) = (undefined4)uStack_70;
        *(undefined4 *)(param_1 + 0x124) = uStack_70._4_4_;
        uVar6 = FUN_14011c2be(*(longlong *)(param_1 + 0x58) + 0x80);
        local_78 = 0;
        uStack_70 = (longlong *)0x0;
        uStack_5c = CONCAT31(uStack_5c._1_3_,0xff);
        uStack_60 = 0;
        local_68 = 0;
        FUN_14493679e(lVar5,&local_78,uVar6,1);
        *(undefined8 *)(param_1 + 0x148) = local_68;
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(uStack_5c,uStack_60);
        *(undefined4 *)(param_1 + 0x138) = (undefined4)local_78;
        *(undefined4 *)(param_1 + 0x13c) = local_78._4_4_;
        *(undefined4 *)(param_1 + 0x140) = (undefined4)uStack_70;
        *(undefined4 *)(param_1 + 0x144) = uStack_70._4_4_;
      }
      lVar5 = *(longlong *)(param_1 + 0x58);
      if (((*(int *)(lVar5 + 0x9c) != 0 || *(int *)(lVar5 + 0x98) != 0) ||
          *(int *)(lVar5 + 0xa0) != 0) || *(int *)(lVar5 + 0xa4) != 0) {
        uVar6 = FUN_14479d2ce(param_1 + 0x80);
        FUN_1458b427c(uVar6,&local_78,*(longlong *)(param_1 + 0x58) + 0x98);
        plVar2 = uStack_70;
        if ((undefined8 *)(param_1 + 0xe8) != &local_78) {
          *(undefined8 *)(param_1 + 0xe8) = local_78;
          local_78 = 0;
          plVar3 = *(longlong **)(param_1 + 0xf0);
          if (uStack_70 != plVar3) {
            uStack_70 = (longlong *)0x0;
            *(longlong **)(param_1 + 0xf0) = plVar2;
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
        plVar2 = uStack_70;
        if (uStack_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_70)(uStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      if (*(longlong *)(param_1 + 0x88) != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x88) + 0x28) & 2) == 0) {
          FUN_141085762(param_1);
        }
        else {
          FUN_141085ad6(param_1);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b3fda thunk_FUN_1412d7b64 body=5 status=ok
// SIG undefined thunk_FUN_1412d7b64(void)

void thunk_FUN_1412d7b64(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar2 = (byte)uVar1;
  bVar5 = bVar2 * '\x02' & -(*(byte *)(param_1 + 6) & 1) & 2;
  *(byte *)(param_1 + 10) = bVar2 & 0xfd | bVar5;
  if ((bool)(bVar5 >> 1) == ((uVar1 >> 1 & 1) != 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    cVar3 = (**(code **)(*param_1 + 0x60))(param_1,0);
    if (cVar3 == '\0') {
      return;
    }
    lVar4 = 0x58;
  }
  else {
    lVar4 = (ulonglong)(bVar5 == 0) * 8 + 0x50;
  }
                    /* WARNING: Could not recover jumptable at 0x0001412d7bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar4))(param_1);
  return;
}



// FUNCTION 1458b3fe4 FUN_1458b3fe4 body=100 status=ok
// SIG undefined FUN_1458b3fe4(void)

undefined8 FUN_1458b3fe4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1403c7982();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1403c7982();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001458b403c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1458b4048 FUN_1458b4048 body=229 status=ok
// SIG undefined FUN_1458b4048(void)

void FUN_1458b4048(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x58);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  if (lVar3 != 0) {
    lVar1 = FUN_1458b412e();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (*(longlong *)(lVar2 + 0x50) != 0)) {
      lVar2 = FUN_14479d2ce(param_1 + 0x70);
      if (lVar2 != 0) {
        lVar3 = FUN_1458b4214(lVar2);
        if (lVar3 == 0) {
          lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3a40) + 0x10))(lVar2 + 0x3a40);
          FUN_148dd681a(local_38,param_1);
          FUN_148dd6732(lVar2 + 8,local_40,local_38);
          FUN_1449db362(local_38);
        }
        FUN_14485c47a(param_1 + 0xe0,lVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b412e FUN_1458b412e body=228 status=ok
// SIG undefined FUN_1458b412e(void)

longlong FUN_1458b412e(void)

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
  if (DAT_14cb65290 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_148715fdd;
    local_40 = &LAB_146508aa4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillNetSpecializationComponent",&DAT_14cb65290,
                  &DAT_148715fdc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb65290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b4214 FUN_1458b4214 body=102 status=ok
// SIG undefined FUN_1458b4214(void)

void FUN_1458b4214(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458b412e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b427c FUN_1458b427c body=172 status=ok
// SIG undefined FUN_1458b427c(void)

undefined8 * FUN_1458b427c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140df52d6(param_1,&local_30);
  uVar4 = FUN_1458b433a();
  cVar3 = FUN_1458b432a(param_1,uVar4,&local_30);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_30;
    param_2[1] = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b432a FUN_1458b432a body=15 status=ok
// SIG undefined FUN_1458b432a(void)

undefined8 FUN_1458b432a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((longlong *)*param_3 == (longlong *)0x0) {
    return 0;
  }
  pcVar1 = *(code **)(*(longlong *)*param_3 + 8);
  if (pcVar1 == FUN_144b395cc) {
    lVar2 = DAT_14cb62b20;
    if (DAT_14cb62b20 == 0) {
      uVar3 = FUN_140325e72();
      lVar2 = FUN_140002ddd(FUN_1464fa00b,uVar3,L"GbxRotationChannel");
      DAT_14cb62b20 = lVar2;
    }
  }
  else if (pcVar1 == FUN_144b394b8) {
    lVar2 = DAT_14cb55590;
    if (DAT_14cb55590 == 0) {
      uVar3 = FUN_140325e72();
      lVar2 = FUN_140002ddd(FUN_1464b27a6,uVar3,L"BreadcrumbDef");
      DAT_14cb55590 = lVar2;
    }
  }
  else if (pcVar1 == FUN_144b39630) {
    lVar2 = DAT_14cb6d990;
    if (DAT_14cb6d990 == 0) {
      uVar3 = FUN_140325e72();
      lVar2 = FUN_140002ddd(FUN_146536cae,uVar3,L"GbxActivityAreaStampDef");
      DAT_14cb6d990 = lVar2;
    }
  }
  else {
    lVar2 = (*pcVar1)();
  }
  if ((param_2 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(param_2 + 0x38))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
                     param_2 + 0x30);
  }
  return uVar3;
}



// FUNCTION 1458b433a FUN_1458b433a body=57 status=ok
// SIG undefined FUN_1458b433a(void)

void FUN_1458b433a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2a20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2a20 = FUN_140002ddd(FUN_1465b5dd9,uVar1,L"GbxSkillComponent_Charges");
  }
  return;
}



// FUNCTION 1458b437c FUN_1458b437c body=167 status=ok
// SIG undefined FUN_1458b437c(void)

undefined8 * FUN_1458b437c(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
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
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac47970;
  FUN_140440628(param_1 + 0x10,&DAT_14cb23d2c,0);
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0x459c4000;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined2 *)((longlong)param_1 + 0x7b) = 1;
  return param_1;
}



// FUNCTION 1458b4424 FUN_1458b4424 body=100 status=ok
// SIG undefined FUN_1458b4424(void)

void FUN_1458b4424(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001458b4470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001458b447d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1458b4488 FUN_1458b4488 body=41 status=ok
// SIG undefined FUN_1458b4488(void)

void FUN_1458b4488(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1412d7be2(*(undefined8 *)(param_1 + 0x18),param_1 + 0x38);
  }
  FUN_1458b44fe(param_1);
  return;
}



// FUNCTION 1458b44b2 FUN_1458b44b2 body=75 status=ok
// SIG undefined FUN_1458b44b2(void)

void FUN_1458b44b2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b419c58;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458b44f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458b44fe FUN_1458b44fe body=353 status=ok
// SIG undefined FUN_1458b44fe(void)

void FUN_1458b44fe(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x30) = 1;
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    iVar9 = (int)plVar4[1];
    do {
      if (iVar9 == 0) goto LAB_1458b45b6;
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_1458b45d8:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        bVar10 = true;
      }
      else {
        iVar9 = (int)plVar6[1];
        do {
          if (iVar9 == 0) goto LAB_1458b45d8;
          LOCK();
          iVar8 = (int)plVar6[1];
          bVar10 = iVar9 == iVar8;
          if (bVar10) {
            *(int *)(plVar6 + 1) = iVar9 + 1;
            iVar8 = iVar9;
          }
          iVar9 = iVar8;
          UNLOCK();
        } while (!bVar10);
        uVar7 = *(undefined8 *)(param_1 + 8);
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
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        bVar10 = false;
        local_48 = uVar7;
        plStack_40 = plVar6;
      }
      plVar6 = plStack_40;
      FUN_1458b4660(lVar5,&local_48);
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (!bVar10) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1458b45b6:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b4660 FUN_1458b4660 body=341 status=ok
// SIG undefined FUN_1458b4660(void)

void FUN_1458b4660(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) == *param_2) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
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
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_1458b473c:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar8 = true;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1458b473c;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar8 = iVar7 == iVar6;
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar8);
      uVar5 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      bVar8 = false;
      local_38 = uVar5;
      plStack_30 = plVar3;
    }
    plVar3 = plStack_30;
    FUN_1458b47b6(uVar4,&local_38);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_30 + 0x10))();
      }
    }
    if (!bVar8) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b47b6 FUN_1458b47b6 body=57 status=ok
// SIG undefined FUN_1458b47b6(void)

void FUN_1458b47b6(longlong param_1)

{
  longlong lVar1;
  
  FUN_1458b47f0(param_1 + 0x160);
  lVar1 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_1405f658a(lVar1);
    return;
  }
  return;
}



// FUNCTION 1458b47f0 FUN_1458b47f0 body=88 status=ok
// SIG undefined FUN_1458b47f0(void)

void FUN_1458b47f0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_1458b48cc();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1458b4848(param_1,iVar3);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = *param_2;
    lVar2 = param_2[1];
    *(longlong *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1458b4848 FUN_1458b4848 body=132 status=ok
// SIG undefined FUN_1458b4848(void)

void FUN_1458b4848(longlong param_1,int param_2)

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



// FUNCTION 1458b48cc FUN_1458b48cc body=247 status=ok
// SIG undefined FUN_1458b48cc(void)

ulonglong FUN_1458b48cc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_1458b492b:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1458b492b;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1458b4959:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1458b4959;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 1458b49c4 FUN_1458b49c4 body=177 status=ok
// SIG undefined FUN_1458b49c4(void)

void FUN_1458b49c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412d7cbc();
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) goto LAB_1458b4a22;
      lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar3 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar3 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_1458b4a76(lVar3 + 0x1e0,&local_20,param_1);
    *(undefined8 *)(param_1 + 0x150) = local_20;
    FUN_1458b4b4a(param_1);
  }
LAB_1458b4a22:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b4a76 FUN_1458b4a76 body=210 status=ok
// SIG undefined FUN_1458b4a76(void)

undefined8 FUN_1458b4a76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b54a440;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = &LAB_148b0a116;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b4b4a FUN_1458b4b4a body=367 status=ok
// SIG undefined FUN_1458b4b4a(void)

void FUN_1458b4b4a(longlong param_1)

{
  void **ppvVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  void *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppvVar1 = (void **)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_1402191ca(ppvVar1,0);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  lVar2 = DAT_14cb0d2b0;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar3 == 0) goto LAB_1458b4c4c;
  }
  FUN_1412629c6(&local_40,*(undefined8 *)(param_1 + 0x70));
  FUN_1412d7cdc(lVar3,&local_50,local_40);
  _Src = local_50;
  if (ppvVar1 != &local_50) {
    *(int *)(param_1 + 0x140) = local_48;
    if (local_48 == 0 && *(int *)(param_1 + 0x144) == 0) {
      *(undefined4 *)(param_1 + 0x144) = 0;
    }
    else {
      FUN_1401b309e(ppvVar1,local_48);
      if (local_48 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_48 << 3);
      }
    }
  }
  FUN_141277db8(lVar3,&local_58,local_40);
  if (local_58 == 0) {
    if (0 < *(int *)(param_1 + 0x140)) {
      local_58 = *(longlong *)*ppvVar1;
      goto LAB_1458b4c36;
    }
  }
  else {
LAB_1458b4c36:
    *(longlong *)(param_1 + 0x148) = local_58;
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1458b4c4c:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b4cba FUN_1458b4cba body=142 status=ok
// SIG undefined FUN_1458b4cba(void)

void FUN_1458b4cba(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == param_3) {
    FUN_1412d7d86(param_1 + -0x28);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + uVar2) == param_3) {
        if ((int)(uVar2 >> 3) * -0x3b13b13b == -1) {
          return;
        }
        FUN_1458b4d48(param_1 + 0x80);
        if (iVar1 != param_3) {
          return;
        }
        if (*(int *)(param_1 + 0x88) == 0) {
          return;
        }
        FUN_14583d6da(param_1 + -0x28,0);
        return;
      }
      uVar2 = uVar2 + 0x68;
    } while ((longlong)*(int *)(param_1 + 0x88) * 0x68 - uVar2 != 0);
  }
  return;
}



// FUNCTION 1458b4d48 FUN_1458b4d48 body=81 status=ok
// SIG undefined FUN_1458b4d48(void)

void FUN_1458b4d48(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x68 + *param_1);
  FUN_14583d64e(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x68),(longlong)(int)(~param_2 + iVar1) * 0x68);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1458b4d9a(param_1);
  return;
}



// FUNCTION 1458b4d9a FUN_1458b4d9a body=62 status=ok
// SIG undefined FUN_1458b4d9a(void)

void FUN_1458b4d9a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458b4dd8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 1458b4dd8 FUN_1458b4dd8 body=103 status=ok
// SIG undefined FUN_1458b4dd8(void)

ulonglong FUN_1458b4dd8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x68) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      uVar1 = uVar1 / 0x68;
    }
  }
  return uVar1;
}



// FUNCTION 1458b4e40 FUN_1458b4e40 body=60 status=ok
// SIG undefined FUN_1458b4e40(void)

void FUN_1458b4e40(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1458b4e7c();
  uVar1 = FUN_1459d6d20();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(lVar2 + 0x38) * *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = *(int *)(lVar2 + 0x3c) * *(int *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 1458b4e7c FUN_1458b4e7c body=143 status=ok
// SIG undefined FUN_1458b4e7c(void)

void FUN_1458b4e7c(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_28);
  if (param_1 + 5 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = local_28;
    *(undefined4 *)(param_1 + 6) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b4f0c FUN_1458b4f0c body=92 status=ok
// SIG undefined FUN_1458b4f0c(void)

undefined8 FUN_1458b4f0c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_30,local_28);
  FUN_1412d7e86(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b4f69 FUN_1458b4f69 body=35 status=ok
// SIG undefined FUN_1458b4f69(void)

void FUN_1458b4f69(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458b4f8c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9f8140;
  return;
}



// FUNCTION 1458b4f8c FUN_1458b4f8c body=32 status=ok
// SIG undefined FUN_1458b4f8c(void)

undefined8 * FUN_1458b4f8c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a15df00;
  return param_1;
}



// FUNCTION 1458b4fac FUN_1458b4fac body=43 status=ok
// SIG undefined FUN_1458b4fac(void)

undefined4 FUN_1458b4fac(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30) + 0x10;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar3 = *(uint *)(lVar2 + (longlong)((int)uVar3 >> 5) * 4);
  return CONCAT31((int3)(uVar3 >> 8),(uVar3 >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 1458b4fd8 FUN_1458b4fd8 body=173 status=ok
// SIG undefined FUN_1458b4fd8(void)

void FUN_1458b4fd8(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1458b506f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1458b506f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1458b5090 FUN_1458b5090 body=221 status=ok
// SIG undefined FUN_1458b5090(void)

longlong FUN_1458b5090(void)

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
  if (DAT_14cabf048 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478575a9;
    local_40 = FUN_14636deaf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/Engine",L"AssetExportTask",&DAT_14cabf048,&DAT_1478575a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5174 FUN_1458b5174 body=221 status=ok
// SIG undefined FUN_1458b5174(void)

longlong FUN_1458b5174(void)

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
  if (DAT_14cac4ab8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147882939;
    local_40 = FUN_146386d72;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"MeshDeformerInstance",&DAT_14cac4ab8,&DAT_147882938);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4ab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5258 FUN_1458b5258 body=221 status=ok
// SIG undefined FUN_1458b5258(void)

longlong FUN_1458b5258(void)

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
  if (DAT_14cac7078 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147899251;
    local_40 = &LAB_14585328f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Engine",L"RuntimePartition",&DAT_14cac7078,&DAT_147899250);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac7078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b533c FUN_1458b533c body=221 status=ok
// SIG undefined FUN_1458b533c(void)

longlong FUN_1458b533c(void)

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
  if (DAT_14cacd200 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14793b58b;
    local_40 = &LAB_145ed1a18;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/Engine",L"NodeMappingContainer",&DAT_14cacd200,&DAT_14793b58a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacd200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5420 FUN_1458b5420 body=221 status=ok
// SIG undefined FUN_1458b5420(void)

longlong FUN_1458b5420(void)

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
  if (DAT_14cadb808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147acab9c;
    local_40 = &LAB_1463cf88b;
    local_48 = L"GameUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/Engine",L"GameUserSettings",&DAT_14cadb808,FUN_1463cf864);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadb808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5504 FUN_1458b5504 body=221 status=ok
// SIG undefined FUN_1458b5504(void)

longlong FUN_1458b5504(void)

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
  if (DAT_14cb026c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147cec34b;
    local_40 = FUN_1463fdcff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Engine",L"ReverbEffect",&DAT_14cb026c8,&DAT_147cec34a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb026c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b55e8 FUN_1458b55e8 body=221 status=ok
// SIG undefined FUN_1458b55e8(void)

longlong FUN_1458b55e8(void)

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
  if (DAT_14cb04028 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147cf252d;
    local_40 = FUN_1436a5846;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/Engine",L"SCS_Node",&DAT_14cb04028,&DAT_147cf252c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb04028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b56cc FUN_1458b56cc body=221 status=ok
// SIG undefined FUN_1458b56cc(void)

longlong FUN_1458b56cc(void)

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
  if (DAT_14cb07fc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d28d85;
    local_40 = FUN_146401b7c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/Engine",L"SlateBrushAsset",&DAT_14cb07fc0,&DAT_147d28d84);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb07fc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b57b4 FUN_1458b57b4 body=221 status=ok
// SIG undefined FUN_1458b57b4(void)

longlong FUN_1458b57b4(void)

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
  if (DAT_14cb1fc28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ecfed4;
    local_40 = FUN_14642c563;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryInstanceBlueprintWrapper",&DAT_14cb1fc28,
                  FUN_14642c53c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fc28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b589c FUN_1458b589c body=221 status=ok
// SIG undefined FUN_1458b589c(void)

longlong FUN_1458b589c(void)

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
  if (DAT_14cb28fb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fcf487;
    local_40 = &LAB_145c79099;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraRigProxyAsset",&DAT_14cb28fb8,&DAT_147fcf486);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28fb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5980 FUN_1458b5980 body=221 status=ok
// SIG undefined FUN_1458b5980(void)

longlong FUN_1458b5980(void)

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
  if (DAT_14cb291c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14645b082;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fcf49b;
    local_40 = &LAB_14614b986;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"GameplayCameraSystemHost",&DAT_14cb291c8,
                  &DAT_147fcf49a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb291c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5a64 FUN_1458b5a64 body=221 status=ok
// SIG undefined FUN_1458b5a64(void)

longlong FUN_1458b5a64(void)

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
  if (DAT_14cb29740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fe6673;
    local_40 = FUN_146458b6c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraRigTransition",&DAT_14cb29740,&DAT_147fe6672);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5b48 FUN_1458b5b48 body=221 status=ok
// SIG undefined FUN_1458b5b48(void)

longlong FUN_1458b5b48(void)

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
  if (DAT_14cb49e18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148409a59;
    local_40 = FUN_146489acf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Water",L"WaterWavesBase",&DAT_14cb49e18,&DAT_148409a58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb49e18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5c2c FUN_1458b5c2c body=221 status=ok
// SIG undefined FUN_1458b5c2c(void)

longlong FUN_1458b5c2c(void)

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
  if (DAT_14cb4b2b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14843c9d9;
    local_40 = &LAB_145e3ab15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoTransformChangeStateTarget",
                  &DAT_14cb4b2b0,&DAT_14843c9d8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b2b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5d10 FUN_1458b5d10 body=221 status=ok
// SIG undefined FUN_1458b5d10(void)

longlong FUN_1458b5d10(void)

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
  if (DAT_14cb9b220 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b14794;
    local_40 = FUN_1465977cb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/ModelViewViewModel",L"MVVMViewModelCollectionObject",&DAT_14cb9b220,
                  FUN_1465977a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9b220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5df4 FUN_1458b5df4 body=221 status=ok
// SIG undefined FUN_1458b5df4(void)

longlong FUN_1458b5df4(void)

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
  if (DAT_14cb9d2a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b52b92;
    local_40 = FUN_14659d88b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGWidgetFactory",&DAT_14cb9d2a8,FUN_14659d864);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9d2a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5ed8 FUN_1458b5ed8 body=221 status=ok
// SIG undefined FUN_1458b5ed8(void)

longlong FUN_1458b5ed8(void)

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
  if (DAT_14cc07988 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1491ec3ee;
    local_40 = FUN_1466ced21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/ControlRig",L"RigHierarchyController",&DAT_14cc07988,FUN_1466cecfa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc07988;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b5fbc FUN_1458b5fbc body=221 status=ok
// SIG undefined FUN_1458b5fbc(void)

longlong FUN_1458b5fbc(void)

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
  if (DAT_14cc17358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149456f6d;
    local_40 = FUN_146730c41;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ComputeFramework",L"ComputeDataInterface",&DAT_14cc17358,&DAT_149456f6c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc17358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b60a0 FUN_1458b60a0 body=221 status=ok
// SIG undefined FUN_1458b60a0(void)

longlong FUN_1458b60a0(void)

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
  if (DAT_14cc173b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149456f79;
    local_40 = FUN_146730ddb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/ComputeFramework",L"ComputeSource",&DAT_14cc173b8,&DAT_149456f78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc173b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b6184 FUN_1458b6184 body=221 status=ok
// SIG undefined FUN_1458b6184(void)

longlong FUN_1458b6184(void)

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
  if (DAT_14cc1d950 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494e8427;
    local_40 = &LAB_145d7220c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusVariableDescription",&DAT_14cc1d950,&DAT_1494e8426
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1d950;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b626a FUN_1458b626a body=54 status=ok
// SIG undefined FUN_1458b626a(void)

undefined8 * FUN_1458b626a(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = DAT_14c9a2028;
  FUN_140608954(param_1 + 1,&DAT_14c9a2028);
  return param_1;
}



// FUNCTION 1458b62a6 FUN_1458b62a6 body=57 status=ok
// SIG undefined FUN_1458b62a6(void)

void FUN_1458b62a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5ab0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5ab0 = FUN_140002ddd(FUN_1462af687,uVar1,L"GbxWeightedAttributeInit");
  }
  return;
}



// FUNCTION 1458b62e6 FUN_1458b62e6 body=57 status=ok
// SIG undefined FUN_1458b62e6(void)

void FUN_1458b62e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21210 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21210 = FUN_140002ddd(FUN_14643258c,uVar1,L"GbxBrainAspect_ChanceToStart");
  }
  return;
}



// FUNCTION 1458b6326 FUN_1458b6326 body=57 status=ok
// SIG undefined FUN_1458b6326(void)

void FUN_1458b6326(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69250 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69250 = FUN_140002ddd(FUN_14651f6e4,uVar1,L"GpsGenerator_ProjectOntoCylinder");
  }
  return;
}



// FUNCTION 1458b6360 FUN_1458b6360 body=132 status=ok
// SIG undefined FUN_1458b6360(void)

void FUN_1458b6360(longlong param_1,int param_2)

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



// FUNCTION 1458b63e6 FUN_1458b63e6 body=40 status=ok
// SIG undefined FUN_1458b63e6(void)

undefined8 FUN_1458b63e6(undefined8 param_1,int param_2)

{
  FUN_1458b640e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b640e FUN_1458b640e body=230 status=ok
// SIG undefined FUN_1458b640e(void)

void FUN_1458b640e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeabfa0;
  param_1[0x27] = &PTR_FUN_14aeac320;
  if (param_1[0x48] != 0) {
    plVar1 = param_1 + 0x4c;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x4a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x40] != 0) {
    plVar1 = param_1 + 0x44;
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x42];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar1 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar1 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1458b654c(param_1);
  return;
}



// FUNCTION 1458b650c FUN_1458b650c body=31 status=ok
// SIG undefined FUN_1458b650c(void)

undefined8 FUN_1458b650c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b652c FUN_1458b652c body=31 status=ok
// SIG undefined FUN_1458b652c(void)

undefined8 FUN_1458b652c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b654c FUN_1458b654c body=120 status=ok
// SIG undefined FUN_1458b654c(void)

void FUN_1458b654c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeabb80;
  if (param_1[0x1c] != 0) {
    plVar1 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14582b792(param_1 + 0x10);
  *param_1 = &PTR_FUN_14aeab700;
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458b65c4 FUN_1458b65c4 body=29 status=ok
// SIG undefined FUN_1458b65c4(void)

void FUN_1458b65c4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1458b65e2 FUN_1458b65e2 body=59 status=ok
// SIG undefined FUN_1458b65e2(void)

undefined8 * FUN_1458b65e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9db3f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b661e FUN_1458b661e body=59 status=ok
// SIG undefined FUN_1458b661e(void)

longlong FUN_1458b661e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458b6664(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1458b6659(lVar2);
  return lVar2;
}



// FUNCTION 1458b6659 FUN_1458b6659 body=11 status=ok
// SIG undefined FUN_1458b6659(void)

void FUN_1458b6659(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1458b6664 FUN_1458b6664 body=132 status=ok
// SIG undefined FUN_1458b6664(void)

void FUN_1458b6664(longlong param_1,int param_2)

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



// FUNCTION 1458b66e8 FUN_1458b66e8 body=40 status=ok
// SIG undefined FUN_1458b66e8(void)

undefined8 FUN_1458b66e8(undefined8 param_1,int param_2)

{
  FUN_1458b6710();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b6710 FUN_1458b6710 body=962 status=ok
// SIG undefined FUN_1458b6710(void)

void FUN_1458b6710(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5b2e50;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b6ad2(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1412d95f1(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2b];
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
  plVar3 = (longlong *)param_1[0x28];
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
  plVar3 = (longlong *)param_1[0x25];
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
  plVar3 = (longlong *)param_1[0x22];
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
  plVar3 = (longlong *)param_1[0x1f];
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
  plVar3 = (longlong *)param_1[0x19];
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
  plVar3 = (longlong *)param_1[0x16];
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
  plVar3 = (longlong *)param_1[0x13];
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
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458b6ad2 FUN_1458b6ad2 body=38 status=ok
// SIG undefined FUN_1458b6ad2(void)

void FUN_1458b6ad2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145cdc2a4(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1458b6af8 FUN_1458b6af8 body=138 status=ok
// SIG undefined FUN_1458b6af8(void)

void FUN_1458b6af8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      iVar5 = 0x10;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      iVar4 = (int)(uVar3 / 0x14);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_1458b6b82(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1458b6b82 FUN_1458b6b82 body=148 status=ok
// SIG undefined FUN_1458b6b82(void)

void FUN_1458b6b82(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x14);
  return;
}



// FUNCTION 1458b6c16 FUN_1458b6c16 body=33 status=ok
// SIG undefined FUN_1458b6c16(void)

void FUN_1458b6c16(longlong param_1)

{
  FUN_140115e24();
  FUN_1458b6c38(param_1 + 0x2808,param_1);
  return;
}



// FUNCTION 1458b6c38 FUN_1458b6c38 body=50 status=ok
// SIG undefined FUN_1458b6c38(void)

void FUN_1458b6c38(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x110) = param_2;
  return;
}



// FUNCTION 1458b6c74 FUN_1458b6c74 body=70 status=ok
// SIG undefined FUN_1458b6c74(void)

void FUN_1458b6c74(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b7f25a0;
  FUN_1458b6cba(param_1 + 5);
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458b6cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458b6cba FUN_1458b6cba body=66 status=ok
// SIG undefined FUN_1458b6cba(void)

void FUN_1458b6cba(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 1458b6cfc FUN_1458b6cfc body=104 status=ok
// SIG undefined FUN_1458b6cfc(void)

undefined8 FUN_1458b6cfc(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1458b6d66(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b6d66 FUN_1458b6d66 body=138 status=ok
// SIG undefined FUN_1458b6d66(void)

longlong * FUN_1458b6d66(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447a97f4(local_40,param_1);
  plVar1 = (longlong *)FUN_1400d6974(local_40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1458b6df2();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1458b6dcf;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1458b6dcf:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b6df2 FUN_1458b6df2 body=57 status=ok
// SIG undefined FUN_1458b6df2(void)

void FUN_1458b6df2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0228 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0228 = FUN_140002ddd(FUN_1465a8ac1,uVar1,L"CommandRingDef");
  }
  return;
}



// FUNCTION 1458b6e2c FUN_1458b6e2c body=1133 status=ok
// SIG undefined FUN_1458b6e2c(void)

void FUN_1458b6e2c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  double dVar9;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1411ab38a(param_2 + 0x2c,&local_40);
  *(int *)(param_1 + 0x58) = local_40;
  FUN_1411ab38a(param_2 + 0x44,&local_40);
  *(int *)(param_1 + 0x5c) = local_40;
  FUN_1411ab38a(param_2 + 0x14,&local_40);
  *(int *)(param_1 + 0x60) = local_40;
  FUN_1449027d0(param_1,&local_40);
  lVar4 = *(longlong *)(CONCAT44(uStack_3c,local_40) + 0x180);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x138));
  *(int *)(lVar4 + 0x130) = *(int *)(lVar4 + 0x130) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  dVar9 = (double)*(float *)(param_2 + 0x24);
  if ((((*(double *)(lVar4 + 0x98) != dVar9) || (*(double *)(lVar4 + 0xa0) != dVar9)) ||
      (NAN(*(double *)(lVar4 + 0xa0)) || NAN(dVar9))) || (*(int *)(lVar4 + 0xa8) == 0)) {
    *(double *)(lVar4 + 0x98) = dVar9;
    *(double *)(lVar4 + 0xa0) = dVar9;
    *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  }
  FUN_1458b729a(param_1 + 0x60,&local_50);
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,&DAT_14b9b5e50,puVar8);
  FUN_140775538(lVar4 + 0xb0,&local_40);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  fVar3 = *(float *)(param_2 + 0x28);
  iVar6 = *(int *)(lVar4 + 0xcc);
  if ((fVar3 != *(float *)(lVar4 + 200)) || (NAN(fVar3) || NAN(*(float *)(lVar4 + 200)))) {
LAB_1458b6fa1:
    *(float *)(lVar4 + 200) = fVar3;
    *(int *)(lVar4 + 0xcc) = iVar6 + 1;
  }
  else if (iVar6 == 0) {
    iVar6 = 0;
    goto LAB_1458b6fa1;
  }
  FUN_1458b729a(param_1 + 0x58,&local_50);
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,&DAT_14b9b5e50,puVar8);
  FUN_140775538(lVar4 + 0xd0,&local_40);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  fVar3 = *(float *)(param_2 + 0x3c);
  if ((fVar3 != *(float *)(lVar4 + 0xe8)) || (NAN(fVar3) || NAN(*(float *)(lVar4 + 0xe8)))) {
    iVar6 = *(int *)(lVar4 + 0xec) + 1;
LAB_1458b7035:
    *(float *)(lVar4 + 0xe8) = fVar3;
    *(int *)(lVar4 + 0xec) = iVar6;
  }
  else if (*(int *)(lVar4 + 0xec) == 0) {
    iVar6 = 1;
    goto LAB_1458b7035;
  }
  FUN_1458b729a(param_1 + 0x5c,&local_50);
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,&DAT_14b9b5e50,puVar8);
  FUN_140775538(lVar4 + 0xf0,&local_40);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_2 + 0x40) == *(char *)(lVar4 + 0x108)) {
    iVar6 = 1;
    if (*(int *)(lVar4 + 0x10c) == 0) goto LAB_1458b70c5;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x10c) + 1;
LAB_1458b70c5:
    *(char *)(lVar4 + 0x108) = *(char *)(param_2 + 0x40);
    *(int *)(lVar4 + 0x10c) = iVar6;
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    lVar7 = FUN_1400d7050(param_1 + 0x30);
    if (lVar7 == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_14016169c(lVar7,&local_40);
      bVar5 = bVar5 ^ 1 | local_40 == 0;
    }
    bVar5 = lVar7 != 0 & bVar5;
  }
  else {
    bVar5 = 0;
  }
  if (bVar5 == *(byte *)(lVar4 + 0x110)) {
    if (*(int *)(lVar4 + 0x114) == 0) {
      iVar6 = 1;
      goto LAB_1458b712e;
    }
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x114) + 1;
LAB_1458b712e:
    *(byte *)(lVar4 + 0x110) = bVar5;
    *(int *)(lVar4 + 0x114) = iVar6;
  }
  if (*(char *)(param_2 + 0x11) == *(char *)(lVar4 + 0x118)) {
    iVar6 = 1;
    if (*(int *)(lVar4 + 0x11c) == 0) goto LAB_1458b715c;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x11c) + 1;
LAB_1458b715c:
    *(char *)(lVar4 + 0x118) = *(char *)(param_2 + 0x11);
    *(int *)(lVar4 + 0x11c) = iVar6;
  }
  if (*(char *)(param_2 + 0x12) == *(char *)(lVar4 + 0x120)) {
    iVar6 = 1;
    if (*(int *)(lVar4 + 0x124) == 0) goto LAB_1458b718a;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x124) + 1;
LAB_1458b718a:
    *(char *)(lVar4 + 0x120) = *(char *)(param_2 + 0x12);
    *(int *)(lVar4 + 0x124) = iVar6;
  }
  if (*(int *)(lVar4 + 0x130) == *(int *)(lVar4 + 0x128)) {
    if (*(int *)(lVar4 + 300) != 0) goto LAB_1458b71c3;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(lVar4 + 300) + 1;
  }
  *(int *)(lVar4 + 0x128) = *(int *)(lVar4 + 0x130);
  *(int *)(lVar4 + 300) = iVar6;
LAB_1458b71c3:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x138));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b729a FUN_1458b729a body=57 status=ok
// SIG undefined FUN_1458b729a(void)

undefined8 FUN_1458b729a(undefined1 *param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%02X%02X%02X%02X",param_1[2],param_1[1],*param_1,param_1[3]);
  return param_2;
}



// FUNCTION 1458b72d4 FUN_1458b72d4 body=55 status=ok
// SIG undefined FUN_1458b72d4(void)

void FUN_1458b72d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c991d80 == 0) {
    uVar1 = FUN_1458b730b();
    DAT_14c991d80 = FUN_140002ddd(FUN_1462843cd,uVar1,L"CustomFieldData");
  }
  return;
}



// FUNCTION 1458b730b FUN_1458b730b body=49 status=ok
// SIG undefined FUN_1458b730b(void)

longlong FUN_1458b730b(void)

{
  if (DAT_14c991290 == 0) {
    FUN_140f50038(&DAT_14c991290,&PTR_s__Script_BuildPatchServices_149f2c8f0);
  }
  return DAT_14c991290;
}



// FUNCTION 1458b733c FUN_1458b733c body=55 status=ok
// SIG undefined FUN_1458b733c(void)

void FUN_1458b733c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99f6c0 == 0) {
    uVar1 = FUN_1412da464();
    DAT_14c99f6c0 = FUN_140002ddd(FUN_14629c0df,uVar1,L"TypedElementSelectionNormalizationOptions");
  }
  return;
}



// FUNCTION 1458b7374 FUN_1458b7374 body=55 status=ok
// SIG undefined FUN_1458b7374(void)

void FUN_1458b7374(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca75c40 == 0) {
    uVar1 = FUN_1412da495();
    DAT_14ca75c40 = FUN_140002ddd(FUN_14631924a,uVar1,L"XRHMDData");
  }
  return;
}



// FUNCTION 1458b73ac FUN_1458b73ac body=55 status=ok
// SIG undefined FUN_1458b73ac(void)

void FUN_1458b73ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc268 == 0) {
    uVar1 = FUN_1412da4c6();
    DAT_14cabc268 = FUN_140002ddd(FUN_146364f42,uVar1,L"MediaMetadataItemBPT");
  }
  return;
}



// FUNCTION 1458b73e4 FUN_1458b73e4 body=55 status=ok
// SIG undefined FUN_1458b73e4(void)

void FUN_1458b73e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb447b8 == 0) {
    uVar1 = FUN_1412da4f7();
    DAT_14cb447b8 = FUN_140002ddd(FUN_14647d758,uVar1,L"CommonInputKeyBrushConfiguration");
  }
  return;
}



// FUNCTION 1458b7420 FUN_1458b7420 body=169 status=ok
// SIG undefined FUN_1458b7420(void)

bool FUN_1458b7420(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b74ca FUN_1458b74ca body=38 status=ok
// SIG undefined FUN_1458b74ca(void)

void FUN_1458b74ca(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_140f35564();
    FUN_14113263c(param_1);
    return;
  }
  return;
}



// FUNCTION 1458b74f0 FUN_1458b74f0 body=55 status=ok
// SIG undefined FUN_1458b74f0(void)

void FUN_1458b74f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc28848 == 0) {
    uVar1 = FUN_1458b7527();
    DAT_14cc28848 = FUN_140002ddd(FUN_146760ca5,uVar1,L"GbxPackedLevelStreamingCellData");
  }
  return;
}



// FUNCTION 1458b7527 FUN_1458b7527 body=49 status=ok
// SIG undefined FUN_1458b7527(void)

longlong FUN_1458b7527(void)

{
  if (DAT_14cc28890 == 0) {
    FUN_140f50038(&DAT_14cc28890,&PTR_s__Script_GbxPackedLevelStreamingC_14be911e3_5_14be911c8);
  }
  return DAT_14cc28890;
}



// FUNCTION 1458b7558 FUN_1458b7558 body=40 status=ok
// SIG undefined FUN_1458b7558(void)

undefined8 FUN_1458b7558(undefined8 param_1,int param_2)

{
  FUN_1458b7580();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b7580 FUN_1458b7580 body=600 status=ok
// SIG undefined FUN_1458b7580(void)

void FUN_1458b7580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bac92d0;
  FUN_1458b7ad0();
  FUN_1448a8284(param_1 + 0x6a);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6d));
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b77d8(param_1 + 0x5d);
  FUN_1412dab16(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x4c);
  FUN_1412daae5(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b7810(param_1 + 0x27);
  FUN_1401f9f1c(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9edd(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9e80(param_1 + 0x19);
  FUN_1401f9e80(param_1 + 0xf);
  FUN_1401f9e80(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458b77d8 FUN_1458b77d8 body=55 status=ok
// SIG undefined FUN_1458b77d8(void)

void FUN_1458b77d8(longlong *param_1)

{
  FUN_1458b794e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b7810 FUN_1458b7810 body=137 status=ok
// SIG undefined FUN_1458b7810(void)

void FUN_1458b7810(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b789a(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458b789a FUN_1458b789a body=55 status=ok
// SIG undefined FUN_1458b789a(void)

void FUN_1458b789a(longlong *param_1)

{
  FUN_1458b78d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b78d2 FUN_1458b78d2 body=123 status=ok
// SIG undefined FUN_1458b78d2(void)

void FUN_1458b78d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1458b794e FUN_1458b794e body=384 status=ok
// SIG undefined FUN_1458b794e(void)

void FUN_1458b794e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b7ad0 FUN_1458b7ad0 body=672 status=ok
// SIG undefined FUN_1458b7ad0(void)

void FUN_1458b7ad0(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int *)(param_1 + 0x214) < 0) {
    FUN_1402191ca(param_1 + 0x208,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(int *)(param_1 + 0x22c) < 0) {
    FUN_1490ef3a2(param_1 + 0x220);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) < 0) {
    FUN_1490ef3d2(param_1 + 0x238);
  }
  iVar1 = *(int *)(param_1 + 0x124);
  FUN_1401f9edd(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x124) != 0)) {
    FUN_1458149c4(param_1 + 0x118,0);
  }
  iVar1 = *(int *)(param_1 + 0x134);
  FUN_1401f9f1c(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
    FUN_1490ef402(param_1 + 0x128,0);
  }
  FUN_1458b7d70(param_1 + 0x138);
  if (*(int *)(param_1 + 0x1fc) < 0) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    FUN_1490f1358(param_1 + 0x1f0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x25c);
  FUN_1412daae5(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600));
  *(undefined4 *)(param_1 + 600) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x25c) != 0)) {
    FUN_1490ef462(param_1 + 0x250,0);
  }
  FUN_14005eae2(param_1 + 0x260);
  if (*(int *)(param_1 + 0x2f0) != *(int *)(param_1 + 0x31c)) {
    FUN_1490ef094(param_1 + 0x2e8);
    FUN_1490ef1d8(param_1 + 0x2e8);
  }
  *(longlong *)(param_1 + 0x218) = param_1 + 0x208;
  *(longlong *)(param_1 + 0x230) = param_1 + 0x220;
  *(longlong *)(param_1 + 0x248) = param_1 + 0x238;
  *(longlong *)(param_1 + 0x1e8) = param_1 + 0x138;
  if (*(int *)(param_1 + 0x2d4) < 0) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    FUN_145cb2204(param_1 + 0x2c8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2e4);
  FUN_1412dab16(*(undefined8 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2e0));
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2e4) != 0)) {
    FUN_1490ef330(param_1 + 0x2d8,0);
  }
  FUN_1458b7e5c(param_1);
  return;
}



// FUNCTION 1458b7d70 FUN_1458b7d70 body=168 status=ok
// SIG undefined FUN_1458b7d70(void)

void FUN_1458b7d70(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_144893a1c(param_1,0);
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_1490f162c(param_1 + 0x18);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1490f13c8(param_1 + 0x28,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_1458b7e18(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x48),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x48);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1458b7e18 FUN_1458b7e18 body=68 status=ok
// SIG undefined FUN_1458b7e18(void)

void FUN_1458b7e18(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1490f14e8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1458b7e5c FUN_1458b7e5c body=201 status=ok
// SIG undefined FUN_1458b7e5c(void)

void FUN_1458b7e5c(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 700) < 0) {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    FUN_14480809c(param_1 + 0x2b0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  iVar1 = *(int *)(param_1 + 0x134);
  FUN_1401f9f1c(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
    FUN_1490ef402(param_1 + 0x128,0);
  }
  iVar1 = *(int *)(param_1 + 0x2e4);
  FUN_1412dab16(*(undefined8 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2e0));
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2e4) != 0)) {
    FUN_1490ef330(param_1 + 0x2d8,0);
    return;
  }
  return;
}



// FUNCTION 1458b7f26 FUN_1458b7f26 body=62 status=ok
// SIG undefined FUN_1458b7f26(void)

void FUN_1458b7f26(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458b7f64(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1458b7f64 FUN_1458b7f64 body=89 status=ok
// SIG undefined FUN_1458b7f64(void)

ulonglong FUN_1458b7f64(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 1458b7fbe FUN_1458b7fbe body=33 status=ok
// SIG undefined FUN_1458b7fbe(void)

void FUN_1458b7fbe(longlong param_1)

{
  FUN_1412dad80(param_1,*(undefined8 *)(param_1 + 0xa0));
  FUN_1412dad4c(param_1);
  return;
}



// FUNCTION 1458b7ff6 FUN_1458b7ff6 body=187 status=ok
// SIG undefined FUN_1458b7ff6(void)

void FUN_1458b7ff6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1407afa82();
  if (lVar2 != 0) {
    FUN_1412db0fe(param_1 + 0x4780,lVar2);
    lVar2 = FUN_1405831b2();
    cVar1 = FUN_1412daf9e(lVar2 + 0x10d8);
    if (cVar1 == '\0') {
      uStack_70 = 0;
      local_78 = 1;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_140c19bee(&uStack_70,lVar2 + 0x10d8);
      FUN_1412daff8(param_1 + 0x6890,&local_78);
      FUN_1412dafa6(&uStack_70);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b80b2 FUN_1458b80b2 body=34 status=ok
// SIG undefined FUN_1458b80b2(void)

void FUN_1458b80b2(longlong param_1)

{
  FUN_144725486(param_1 + 0x98);
  FUN_1412db970(param_1 + 0x10);
  return;
}



// FUNCTION 1458b80dc FUN_1458b80dc body=84 status=ok
// SIG undefined FUN_1458b80dc(void)

undefined8 * FUN_1458b80dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1458b8130(param_1,uVar1);
  *param_1 = &PTR_FUN_14b7149e0;
  param_1[0xd] = &PTR_FUN_14b714d60;
  param_1[0x16] = &PTR_FUN_14b714da0;
  *(undefined2 *)(param_1 + 0x14) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  return param_1;
}



// FUNCTION 1458b8130 FUN_1458b8130 body=57 status=ok
// SIG undefined FUN_1458b8130(void)

undefined8 * FUN_1458b8130(undefined8 *param_1)

{
  FUN_1412db998();
  *param_1 = &PTR_FUN_14b78c320;
  param_1[0xd] = &PTR_FUN_14b78c6a0;
  param_1[0x16] = &PTR_FUN_14b78c6e0;
  return param_1;
}



// FUNCTION 1458b816a FUN_1458b816a body=115 status=ok
// SIG undefined FUN_1458b816a(void)

void FUN_1458b816a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 7) {
    *(undefined4 *)(param_1 + 1) = 7;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 7U - iVar1) {
      FUN_1458b81de(param_1,iVar1);
    }
    FUN_1412dbd82((longlong)iVar1 * 0x30 + *param_1,7U - iVar1);
    return;
  }
  if (iVar1 == 7) {
    return;
  }
  FUN_147c43790(param_1,iVar1 + -7);
  FUN_147c437e8(param_1);
  return;
}



// FUNCTION 1458b81de FUN_1458b81de body=147 status=ok
// SIG undefined FUN_1458b81de(void)

void FUN_1458b81de(longlong param_1,int param_2)

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



// FUNCTION 1458b8272 FUN_1458b8272 body=228 status=ok
// SIG undefined FUN_1458b8272(void)

undefined8 FUN_1458b8272(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14aa07690;
  local_38[3] = param_3;
  local_38[4] = FUN_140c5819c;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b8358 FUN_1458b8358 body=421 status=ok
// SIG undefined FUN_1458b8358(void)

void FUN_1458b8358(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
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
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  FUN_1458b84fe(&local_80,&local_68,uVar1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b84fe FUN_1458b84fe body=133 status=ok
// SIG undefined FUN_1458b84fe(void)

void FUN_1458b84fe(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140df51a0(param_1,&local_40);
  FUN_1458b8584(local_40,param_2,param_3);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b8584 FUN_1458b8584 body=168 status=ok
// SIG undefined FUN_1458b8584(void)

void FUN_1458b8584(longlong param_1,int *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x50);
      puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x58) * 2;
      do {
        uVar3 = *puVar6;
        plVar4 = (longlong *)puVar6[1];
        if (plVar4 == (longlong *)0x0) {
          FUN_1458b862c(uVar3,param_3);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_1458b862c(uVar3,param_3);
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
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar7);
    }
  }
  else {
    lVar5 = FUN_140df5408();
    if (lVar5 != 0) {
      FUN_1458b862c(lVar5,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1458b862c FUN_1458b862c body=106 status=ok
// SIG undefined FUN_1458b862c(void)

void FUN_1458b862c(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    param_2 = param_2 + *(float *)(param_1 + 0xa4);
    fVar3 = 0.0;
    if (0.0 <= param_2) {
      fVar3 = param_2;
    }
    *(float *)(param_1 + 0xa4) = fVar3;
    if (*(float *)(param_1 + 0xa0) < fVar3) {
      iVar1 = *(int *)(param_1 + 0x90);
      if (((((longlong)iVar1 < 0) || (*(int *)(*(longlong *)(param_1 + 0x80) + 0x38) <= iVar1)) ||
          (lVar2 = (longlong)iVar1 * 0x108 + *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x30),
          lVar2 == 0)) || (*(char *)(lVar2 + 0xd0) == '\0')) {
        *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa0);
      }
    }
  }
  return;
}



// FUNCTION 1458b8696 FUN_1458b8696 body=55 status=ok
// SIG undefined FUN_1458b8696(void)

void FUN_1458b8696(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x168);
  FUN_1412dbdbe(param_2);
  *param_2 = &PTR_FUN_14b746070;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 1458b86d8 FUN_1458b86d8 body=760 status=ok
// SIG undefined FUN_1458b86d8(void)

undefined8 * FUN_1458b86d8(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abee880;
  param_1[5] = &PTR_FUN_14abeebb0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffff00000000;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) & 0xfe;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffff;
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) & 0xfe;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffff;
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) & 0xfe;
  FUN_1400b22c2(&local_40,"Cone Check");
  if (param_1 + 6 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 7) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
  }
  local_48 = FUN_144a6c4d8();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_1446f470e(&local_50,L"ConeOrigin",1);
  FUN_1458b8c86(param_1 + 0xf,param_1,local_50,&local_48);
  FUN_1446f470e(&local_58,L"ConeOrigin",1);
  FUN_1458b89d2(param_1 + 0xf,param_1,local_58);
  local_60 = FUN_144a6c4d8();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1446f470e(&local_68,L"ConeDirection",1);
  FUN_1458b8c86(param_1 + 0x14,param_1,local_68,&local_60);
  FUN_1446f470e(&local_70,L"ConeDirection",1);
  FUN_1458b89d2(param_1 + 0x14,param_1,local_70);
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) | 1;
  local_78 = FUN_144a6c4d8();
  if ((local_78 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_78);
  }
  FUN_1446f470e(&local_80,L"Observed",1);
  FUN_1458b8c86(param_1 + 0x19,param_1,local_80,&local_78);
  FUN_1446f470e(&local_88,L"Observed",1);
  FUN_1458b89d2(param_1 + 0x19,param_1,local_88);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 5;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 199;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x42340000;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b89d2 FUN_1458b89d2 body=272 status=ok
// SIG undefined FUN_1458b89d2(void)

void FUN_1458b89d2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  FUN_1400021e4(&local_28,local_48);
  FUN_144a882a8(&local_38,local_48,L"_Vector");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar3,1);
  lVar2 = FUN_1458b8ae3(param_2,local_50);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412dc08c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b8ae3 FUN_1458b8ae3 body=187 status=ok
// SIG undefined FUN_1458b8ae3(void)

undefined8 FUN_1458b8ae3(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458b8ba0();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b8ba0 FUN_1458b8ba0 body=228 status=ok
// SIG undefined FUN_1458b8ba0(void)

longlong FUN_1458b8ba0(void)

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
  if (DAT_14cb1ef70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145833db4;
    local_38 = &LAB_147eb2d5d;
    local_40 = FUN_1464298aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/AIModule",L"BlackboardKeyType_Vector",&DAT_14cb1ef70,&DAT_147eb2d5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ef70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b8c86 FUN_1458b8c86 body=420 status=ok
// SIG undefined FUN_1458b8c86(void)

void FUN_1458b8c86(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_3;
  FUN_1400021e4(&local_38,&local_68);
  puVar8 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar8 = local_68;
  }
  FUN_140002266(&local_58,L"%s_Object",puVar8);
  puVar8 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar8 = local_58;
  }
  FUN_1446f470e(&local_48,puVar8,1);
  uVar4 = FUN_1412dbfa6();
  local_78 = 0;
  FUN_140af9fb2(&local_40,param_2,uVar4,local_48);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_1458b8e2b(param_2,local_40);
  lVar2 = *param_4;
  if (((lVar2 == 0) || (lVar6 = FUN_1446f8646(), lVar6 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38))) {
    lVar7 = 0;
  }
  else {
    lVar3 = *param_4;
    lVar7 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      lVar7 = lVar3;
    }
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
      lVar7 = lVar3;
    }
  }
  *(longlong *)(lVar5 + 0x30) = lVar7;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412dc08c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b8e2b FUN_1458b8e2b body=187 status=ok
// SIG undefined FUN_1458b8e2b(void)

undefined8 FUN_1458b8e2b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1412dbfa6();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b8ef6 FUN_1458b8ef6 body=70 status=ok
// SIG undefined FUN_1458b8ef6(void)

undefined8 * FUN_1458b8ef6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b633150;
  if (param_1[0x219] != 0) {
    FUN_1400020a8();
  }
  FUN_14096c94c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b8f3c FUN_1458b8f3c body=511 status=ok
// SIG undefined FUN_1458b8f3c(void)

void FUN_1458b8f3c(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x58) = param_2;
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
    *(undefined4 *)(param_1 + 0x54) = param_3;
    FUN_1458b913c(param_1);
    lVar2 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x58));
    *(float *)(param_1 + 0x44) = (float)*(double *)(lVar2 + 0x6d0);
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar4 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14b9615f0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,uVar3);
    puVar4[4] = param_1;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x48,&local_98,0x3e4ccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
    FUN_140f40189(param_1,*(undefined4 *)(param_1 + 0x54));
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b913c FUN_1458b913c body=57 status=ok
// SIG undefined FUN_1458b913c(void)

void FUN_1458b913c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    uVar2 = FUN_1412dd104();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458b916a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1458b9176 FUN_1458b9176 body=219 status=ok
// SIG undefined FUN_1458b9176(void)

undefined8 *
FUN_1458b9176(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1447715ec(param_1 + 2,param_2 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1401aa3da(param_1 + 7,param_3);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_1458b9252(param_1 + 9,param_4);
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  FUN_1449db362(param_3);
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(longlong *)(param_4 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14118c45e(param_4);
  return param_1;
}



// FUNCTION 1458b9252 FUN_1458b9252 body=120 status=ok
// SIG undefined FUN_1458b9252(void)

longlong FUN_1458b9252(longlong param_1,longlong param_2)

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
    FUN_1458b92ca(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1458b92ca FUN_1458b92ca body=239 status=ok
// SIG undefined FUN_1458b92ca(void)

longlong * FUN_1458b92ca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14118c496(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1458b93ba FUN_1458b93ba body=506 status=ok
// SIG undefined FUN_1458b93ba(void)

void FUN_1458b93ba(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  uint local_70;
  undefined1 local_6c [12];
  longlong local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  lVar4 = DAT_14cb8d378;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x40) == 0) goto LAB_1458b9562;
  if (DAT_14cb8d378 == 0) {
LAB_1458b9591:
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_1401533ba(local_6c,param_1 + 0x38,1);
    FUN_1448075d0(&local_60,local_6c);
    plVar3 = (longlong *)FUN_144837462(lVar4,&local_60);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (plVar3 == (longlong *)0x0) goto LAB_1458b9591;
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar5 = FUN_1458b95b6();
    if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_1458b9591;
    plVar9 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      plVar9 = plVar3;
    }
  }
  lVar4 = FUN_1406d14fa(param_1);
  if (lVar4 == 0) goto LAB_1458b9562;
  lVar5 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_1458b9562;
  uVar6 = FUN_144a7ba4c(lVar4);
  if (uVar6 == 0) goto LAB_1458b9562;
  uVar2 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  local_70 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_70 = local_70 >> 0x10 ^ local_70;
  FUN_1448d5e3c(&local_60);
  lVar5 = *(longlong *)(local_60 + 0x490);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x38));
  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
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
  lVar7 = 0x10;
  lVar8 = lVar5;
  if (*(int *)(param_1 + 0x40) == 1) {
LAB_1458b9546:
    *(int *)(lVar5 + lVar7) = *(int *)(lVar5 + lVar7) + 1;
    FUN_1412dd56c(lVar8,plVar9,*(undefined8 *)(lVar4 + 0xa08));
  }
  else if (*(int *)(param_1 + 0x40) == 2) {
    lVar8 = lVar5 + 0x18;
    lVar7 = 0x28;
    goto LAB_1458b9546;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x38));
LAB_1458b9562:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b95b6 FUN_1458b95b6 body=55 status=ok
// SIG undefined FUN_1458b95b6(void)

void FUN_1458b95b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5d48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5d48 = FUN_140002ddd(FUN_146600ce6,uVar1,L"GbxUIDisplayDataDef_StatPanel");
  }
  return;
}



// FUNCTION 1458b95ee FUN_1458b95ee body=93 status=ok
// SIG undefined FUN_1458b95ee(void)

undefined8 * FUN_1458b95ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458b964b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1458b96e6(param_1,iVar1);
      FUN_1458b96b1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1458b964b FUN_1458b964b body=40 status=ok
// SIG undefined FUN_1458b964b(void)

void FUN_1458b964b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458b9674(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1458b9674 FUN_1458b9674 body=61 status=ok
// SIG undefined FUN_1458b9674(void)

void FUN_1458b9674(longlong *param_1)

{
  FUN_1412dd762(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458b96a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1458b96b1 FUN_1458b96b1 body=52 status=ok
// SIG undefined FUN_1458b96b1(void)

void FUN_1458b96b1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1458b9748(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1458b96e6 FUN_1458b96e6 body=98 status=ok
// SIG undefined FUN_1458b96e6(void)

void FUN_1458b96e6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1458b9748 FUN_1458b9748 body=113 status=ok
// SIG undefined FUN_1458b9748(void)

longlong * FUN_1458b9748(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  lVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1458b98d4(param_1 + 2,iVar1,0);
    FUN_1458b97b9(param_1[2],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1458b97b9 FUN_1458b97b9 body=52 status=ok
// SIG undefined FUN_1458b97b9(void)

void FUN_1458b97b9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1458b97ee(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1458b97ee FUN_1458b97ee body=113 status=ok
// SIG undefined FUN_1458b97ee(void)

longlong * FUN_1458b97ee(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  lVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1458b9860(param_1 + 2,iVar1,0);
    FUN_1412dd837(param_1[2],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1458b9860 FUN_1458b9860 body=115 status=ok
// SIG undefined FUN_1458b9860(void)

void FUN_1458b9860(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1458b98d4 FUN_1458b98d4 body=98 status=ok
// SIG undefined FUN_1458b98d4(void)

void FUN_1458b98d4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1458b9936 FUN_1458b9936 body=77 status=ok
// SIG undefined FUN_1458b9936(void)

void FUN_1458b9936(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_144a63f30();
  for (plVar1 = param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
    if ((*(uint *)(plVar1 + 1) & 0x30) != 0) goto LAB_1458b9969;
  }
  FUN_1412dd960(param_1,0,0);
LAB_1458b9969:
  uVar2 = (**(code **)(*param_1 + 0x390))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
  return;
}



// FUNCTION 1458b9984 FUN_1458b9984 body=82 status=ok
// SIG undefined FUN_1458b9984(void)

void FUN_1458b9984(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
      FUN_1458b9a10();
      return;
    }
    fVar2 = (float)FUN_147959fa6(lVar1);
    if (0.0001 < fVar2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001458b99a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c0))(param_1);
  return;
}



// FUNCTION 1458b9a10 FUN_1458b9a10 body=9 status=ok
// SIG undefined FUN_1458b9a10(void)

undefined4 FUN_1458b9a10(void)

{
  return DAT_14c761324;
}



// FUNCTION 1458b9a1a FUN_1458b9a1a body=40 status=ok
// SIG undefined FUN_1458b9a1a(void)

undefined8 FUN_1458b9a1a(undefined8 param_1,int param_2)

{
  FUN_1458b9a42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b9a42 FUN_1458b9a42 body=139 status=ok
// SIG undefined FUN_1458b9a42(void)

void FUN_1458b9a42(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a867090;
  param_1[5] = &PTR_FUN_14a867670;
  param_1[6] = &PTR_LAB_14a8676b0;
  puVar2 = (undefined8 *)param_1[0x66];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1458b9ace FUN_1458b9ace body=158 status=ok
// SIG undefined FUN_1458b9ace(void)

bool FUN_1458b9ace(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b9b6e FUN_1458b9b6e body=840 status=ok
// SIG undefined FUN_1458b9b6e(void)

void FUN_1458b9b6e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_128 [40];
  undefined2 *local_100;
  int local_f8;
  longlong local_f0 [2];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8;
  int local_c0;
  undefined4 uStack_bc;
  float local_b8;
  int local_b4;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  char local_80;
  int local_7c;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1449027d0(param_1,&local_c8);
  lVar3 = *(longlong *)(local_c8 + 0x180);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x138));
  *(int *)(lVar3 + 0x130) = *(int *)(lVar3 + 0x130) + 1;
  plVar5 = (longlong *)CONCAT44(uStack_bc,local_c0);
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
  FUN_1458b9eb8(lVar3,(int)param_2[1]);
  *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  uVar11 = (ulonglong)(int)param_2[1];
  if ((longlong)uVar11 < 1) {
LAB_1458b9d87:
    FUN_1458b9f54(param_1);
  }
  else {
    bVar6 = false;
    do {
      lVar12 = uVar11 * 0x88 + *param_2;
      uVar9 = uVar11;
      while (*(char *)(lVar12 + -0x1c) != '\0') {
        lVar12 = lVar12 + -0x88;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          if (bVar6) goto LAB_1458b9d79;
          goto LAB_1458b9d87;
        }
      }
      FUN_1458ba15e(&local_c8);
      lVar8 = FUN_1458ba0b8(lVar12 + -0x88);
      if (lVar8 == 0) {
        FUN_1410e88ee(local_b0,lVar12 + -0x80);
        fVar13 = *(float *)(lVar12 + -0x70);
        if (local_b4 == 0 || fVar13 != local_b8) goto LAB_1458b9c9b;
      }
      else {
        FUN_1410e88ee(local_b0,lVar8);
        fVar13 = (*(float *)(lVar8 + 0x10) - *(float *)(lVar12 + -0x18)) + 0.05;
        if (local_b4 == 0 || fVar13 != local_b8) {
LAB_1458b9c9b:
          local_b4 = local_b4 + 1;
          local_b8 = fVar13;
        }
      }
      FUN_1458b9fac(lVar12 + -0x88,local_d8);
      FUN_1410e88ee(local_98,local_d8);
      if (local_c0 == 0 || local_c8 != *(int *)(lVar12 + -0x20)) {
        local_c0 = local_c0 + 1;
        local_c8 = (longlong)*(int *)(lVar12 + -0x20);
      }
      if (*(char *)(lVar12 + -0x34) == '\0') {
        cVar7 = FUN_144a7c5f6(local_d8);
      }
      else {
        cVar7 = '\x01';
      }
      if (local_7c == 0 || local_80 != cVar7) {
        local_7c = local_7c + 1;
        local_80 = cVar7;
      }
      if (*(char *)(lVar12 + -0x5c) == '\x01') {
        FUN_1411ab38a(lVar12 + -0x6c,local_dc);
        FUN_1458b729a(local_dc,&local_100);
        puVar10 = local_100;
        if (local_f8 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_140002266(local_f0,&DAT_14b9b5e50,puVar10);
        FUN_148e59a40(local_78,local_f0);
        if (local_f0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_100 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1458b9fda(lVar3,&local_c8);
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      uVar11 = uVar9 - 1;
      FUN_1458b9ef6(&local_c8);
      bVar6 = true;
    } while (1 < uVar9);
LAB_1458b9d79:
    FUN_1458ba106(param_1);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x138));
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b9eb8 FUN_1458b9eb8 body=61 status=ok
// SIG undefined FUN_1458b9eb8(void)

void FUN_1458b9eb8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1412de13c(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1458ba1e4(param_1);
  return;
}



// FUNCTION 1458b9ef6 FUN_1458b9ef6 body=94 status=ok
// SIG undefined FUN_1458b9ef6(void)

void FUN_1458b9ef6(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) != -1) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0xffffffff00000000;
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458b9f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1458b9f54 FUN_1458b9f54 body=88 status=ok
// SIG undefined FUN_1458b9f54(void)

void FUN_1458b9f54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140c125e6(lVar1 + 0xd98,&DAT_14cbd9650);
      return;
    }
  }
  return;
}



// FUNCTION 1458b9fac FUN_1458b9fac body=45 status=ok
// SIG undefined FUN_1458b9fac(void)

undefined8 FUN_1458b9fac(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 == (longlong *)0x0) {
    FUN_144a5dc74(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1458b9fda FUN_1458b9fda body=71 status=ok
// SIG undefined FUN_1458b9fda(void)

void FUN_1458b9fda(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e641c6(param_1,iVar1);
  }
  FUN_1458ba022((longlong)iVar1 * 0x68 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 1458ba022 FUN_1458ba022 body=149 status=ok
// SIG undefined FUN_1458ba022(void)

undefined8 * FUN_1458ba022(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_140dd90de(param_1 + 3,param_2 + 3);
  FUN_140dd90de(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_14054da5a(param_1 + 10,param_2 + 10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 1458ba0b8 FUN_1458ba0b8 body=77 status=ok
// SIG undefined FUN_1458ba0b8(void)

longlong FUN_1458ba0b8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar3 != 0) {
    lVar2 = lVar3 * 0x18;
    lVar1 = *(longlong *)(param_1 + 0x78);
    do {
      if (*(float *)(param_1 + 0x70) < *(float *)(lVar1 + 0x10)) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  lVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78) + lVar3 * 0x18 + -0x18;
  }
  return lVar2;
}



// FUNCTION 1458ba106 FUN_1458ba106 body=88 status=ok
// SIG undefined FUN_1458ba106(void)

void FUN_1458ba106(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1403ca8ec(lVar1 + 0xd98,&DAT_14cbd9650);
      return;
    }
  }
  return;
}



// FUNCTION 1458ba15e FUN_1458ba15e body=133 status=ok
// SIG undefined FUN_1458ba15e(void)

undefined8 * FUN_1458ba15e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 5) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[6] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 7) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1458ba1e4 FUN_1458ba1e4 body=58 status=ok
// SIG undefined FUN_1458ba1e4(void)

void FUN_1458ba1e4(undefined8 *param_1,int param_2)

{
  FUN_1412de13c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1458ba21e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1458ba21e FUN_1458ba21e body=108 status=ok
// SIG undefined FUN_1458ba21e(void)

void FUN_1458ba21e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 1458ba28a FUN_1458ba28a body=273 status=ok
// SIG undefined FUN_1458ba28a(void)

void FUN_1458ba28a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  FUN_14122c73c(param_1 + 0x220,param_2);
  FUN_1412de1de(param_1 + 0x500,param_2);
  FUN_14122c9c4(param_1 + 0x1180,param_2);
  FUN_1412de164(param_1 + 0x2380,param_2);
  FUN_14122c9c4(param_1 + 0x28c0,param_2);
  FUN_14122c7a8(param_1 + 0x2010,param_2);
  FUN_14122c7a8(param_1 + 0x3210,param_2);
  return;
}



// FUNCTION 1458ba39c FUN_1458ba39c body=49 status=ok
// SIG undefined FUN_1458ba39c(void)

void FUN_1458ba39c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x188);
  FUN_1458ba3ce(param_2);
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  return;
}



// FUNCTION 1458ba3ce FUN_1458ba3ce body=183 status=ok
// SIG undefined FUN_1458ba3ce(void)

void * FUN_1458ba3ce(void *param_1)

{
  memset(param_1,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3fc0000040000000;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined1 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined1 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  return param_1;
}



// FUNCTION 1458ba486 FUN_1458ba486 body=62 status=ok
// SIG undefined FUN_1458ba486(void)

void FUN_1458ba486(longlong param_1)

{
  FUN_140eaf988(param_1,1);
  FUN_140f6a16c(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_140da129a();
  }
  FUN_1402811b8(param_1);
  FUN_144925f42(param_1);
  return;
}



// FUNCTION 1458ba4c4 FUN_1458ba4c4 body=293 status=ok
// SIG undefined FUN_1458ba4c4(void)

void FUN_1458ba4c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (lVar3 == 0) {
    return;
  }
  if ((longlong)*(int *)(lVar3 + 0x128) != 0) {
    plVar8 = *(longlong **)(lVar3 + 0x120);
    plVar7 = plVar8 + (longlong)*(int *)(lVar3 + 0x128) * 2;
    do {
      plVar4 = (longlong *)plVar8[1];
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *plVar8;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_1458ba57c;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        if (lVar3 != 0) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
          *(int *)(lVar3 + 0x160) = *(int *)(lVar3 + 0x160) + 1;
          iVar6 = *(int *)(lVar3 + 0x138);
          if (*(char *)(lVar3 + 0x134) == '\0') {
LAB_1458ba55b:
            *(undefined1 *)(lVar3 + 0x134) = 1;
            *(int *)(lVar3 + 0x138) = iVar6 + 1;
          }
          else if (iVar6 == 0) {
            iVar6 = 0;
            goto LAB_1458ba55b;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
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
LAB_1458ba57c:
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      return;
    }
  }
  FUN_140da129a();
  return;
}



// FUNCTION 1458ba5e9 FUN_1458ba5e9 body=158 status=ok
// SIG undefined FUN_1458ba5e9(void)

longlong * FUN_1458ba5e9(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  FUN_1458ba6b4(param_1,param_2 + 0xf8);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0xfc),1);
  }
  else {
    *(undefined1 *)(param_2 + 0xfc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_1458ba687(param_1,param_2);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0xfd),1);
  }
  else {
    *(undefined1 *)(param_2 + 0xfd) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 1458ba687 FUN_1458ba687 body=45 status=ok
// SIG undefined FUN_1458ba687(void)

void FUN_1458ba687(undefined8 param_1,longlong param_2)

{
  FUN_1418947b9(param_1,param_2 + 8);
  FUN_1488d9370(param_1,param_2 + 0xe8);
  return;
}



// FUNCTION 1458ba6b4 FUN_1458ba6b4 body=82 status=ok
// SIG undefined FUN_1458ba6b4(void)

longlong * FUN_1458ba6b4(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1458ba714 FUN_1458ba714 body=40 status=ok
// SIG undefined FUN_1458ba714(void)

undefined8 FUN_1458ba714(undefined8 param_1,int param_2)

{
  FUN_1412de796();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ba744 FUN_1458ba744 body=322 status=ok
// SIG undefined FUN_1458ba744(void)

undefined8 * FUN_1458ba744(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14a1701c0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = &PTR_FUN_14a1701c0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = &PTR_FUN_14a1701c0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  lVar1 = FUN_1412de81e();
  if (lVar1 != 0) {
    uVar2 = FUN_1405d6618();
    FUN_140d13562(param_1,uVar2);
    uVar2 = FUN_1405d6618();
    FUN_140d13562(param_1 + 0xe,uVar2);
    uVar2 = FUN_1405d6618();
    FUN_140d13562(param_1 + 0x1c,uVar2);
  }
  return param_1;
}



// FUNCTION 1458ba886 FUN_1458ba886 body=619 status=ok
// SIG undefined FUN_1458ba886(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001458baae7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1458ba886(longlong param_1,char *param_2,undefined1 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  void *_Src;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [256];
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0;
  undefined **local_c8;
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  if (param_2 == (char *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_1f8,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_e0,local_f0);
  local_d0 = *param_3;
  local_c8 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(local_c0,param_4 + 8);
  local_98 = *(undefined4 *)(param_4 + 0x30);
  local_94 = *(undefined1 *)(param_4 + 0x34);
  local_c8 = &PTR_FUN_14b8197b0;
  local_90 = *(undefined1 *)(param_4 + 0x38);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_5 + 1);
  lVar4 = (longlong)local_80;
  _Src = (void *)*param_5;
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,8);
  *puVar2 = &PTR_FUN_14b9c1220;
  FUN_1458baaf2(puVar2 + 1,local_e0);
  if (puVar2 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = &LAB_1458fd770;
    local_78 = &LAB_1458fd770;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_1412de826(local_e0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458baaf2 FUN_1458baaf2 body=180 status=ok
// SIG undefined FUN_1458baaf2(void)

undefined8 * FUN_1458baaf2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b8197b0;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1458baba6 FUN_1458baba6 body=104 status=ok
// SIG undefined FUN_1458baba6(void)

undefined8 FUN_1458baba6(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1458bac10(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bac10 FUN_1458bac10 body=22 status=ok
// SIG undefined FUN_1458bac10(void)

undefined8 FUN_1458bac10(int *param_1)

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
  
  plVar4 = DAT_14cb92e58;
  if (DAT_14cb92e58 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb92e58 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb92e58 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb92e58[0x3a] <= *(int *)((longlong)DAT_14cb92e58 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb92e58 + 0x300))(DAT_14cb92e58);
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



// FUNCTION 1458bac34 FUN_1458bac34 body=40 status=ok
// SIG undefined FUN_1458bac34(void)

undefined8 FUN_1458bac34(undefined8 param_1,int param_2)

{
  FUN_1458bac5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bac5c FUN_1458bac5c body=73 status=ok
// SIG undefined FUN_1458bac5c(void)

void FUN_1458bac5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6d2450;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458baca6 FUN_1458baca6 body=53 status=ok
// SIG undefined FUN_1458baca6(void)

void FUN_1458baca6(longlong *param_1)

{
  FUN_1458bacdc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458bacdc FUN_1458bacdc body=90 status=ok
// SIG undefined FUN_1458bacdc(void)

void FUN_1458bacdc(longlong param_1)

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



// FUNCTION 1458bad36 FUN_1458bad36 body=162 status=ok
// SIG undefined FUN_1458bad36(void)

void FUN_1458bad36(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1458badc3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1458badc3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1458badd8 FUN_1458badd8 body=87 status=ok
// SIG undefined FUN_1458badd8(void)

void FUN_1458badd8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1458bae30(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1458bae66(param_1);
  return;
}



// FUNCTION 1458bae30 FUN_1458bae30 body=53 status=ok
// SIG undefined FUN_1458bae30(void)

void FUN_1458bae30(longlong *param_1)

{
  FUN_1458bb034();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458bae66 FUN_1458bae66 body=55 status=ok
// SIG undefined FUN_1458bae66(void)

void FUN_1458bae66(longlong *param_1)

{
  FUN_1458bae9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458bae9e FUN_1458bae9e body=403 status=ok
// SIG undefined FUN_1458bae9e(void)

void FUN_1458bae9e(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_140dc7a18(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
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



// FUNCTION 1458bb034 FUN_1458bb034 body=375 status=ok
// SIG undefined FUN_1458bb034(void)

void FUN_1458bb034(longlong *param_1)

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
      FUN_1403cc58e(lVar2 + lVar3 + 8);
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



// FUNCTION 1458bb1be FUN_1458bb1be body=51 status=ok
// SIG undefined FUN_1458bb1be(void)

void FUN_1458bb1be(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if (param_3 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x10f0))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001458bb1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10e8))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1458bb1f1 FUN_1458bb1f1 body=459 status=ok
// SIG undefined FUN_1458bb1f1(void)

longlong * FUN_1458bb1f1(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x68) == '\0') {
    plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_LAB_14b9a0920;
    plVar4 = plVar3 + 2;
    FUN_1458bb3be(plVar4,param_2);
    plVar3[2] = (longlong)&PTR_FUN_14b99b640;
    *(undefined4 *)(plVar3 + 0x16) = 0;
    *(undefined1 *)((longlong)plVar3 + 0xb4) = 0;
    local_38 = plVar4;
    local_30 = plVar3;
    FUN_1458bb440(&local_38,plVar4);
  }
  else if (*(char *)(param_2 + 0x68) == '\x03') {
    plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14b9a0940;
    plVar4 = plVar3 + 2;
    FUN_1458bb3be(plVar4,param_2);
    plVar3[2] = (longlong)&PTR_FUN_14b99b6a0;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    local_38 = plVar4;
    local_30 = plVar3;
    FUN_1458bb584(&local_38,plVar4);
  }
  else {
    plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14b9a0960;
    plVar4 = plVar3 + 2;
    FUN_1458bb3be(plVar4,param_2);
    plVar3[2] = (longlong)&PTR_FUN_14b99b5e0;
    plVar3[0x16] = 0;
    local_38 = plVar4;
    local_30 = plVar3;
    FUN_1458bb4e2(&local_38,plVar4);
  }
  plVar2 = local_30;
  *param_1 = (longlong)plVar4;
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bb3be FUN_1458bb3be body=130 status=ok
// SIG undefined FUN_1458bb3be(void)

undefined8 * FUN_1458bb3be(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = DAT_14c7640cc + 1;
  *(int *)(param_1 + 4) = DAT_14c7640cc;
  DAT_14c7640cc = iVar1;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xf0;
  *param_1 = &PTR_LAB_14b99b580;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1412df474(param_1 + 0xd);
  FUN_141028572((longlong)param_1 + 0x74);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  return param_1;
}



// FUNCTION 1458bb440 FUN_1458bb440 body=162 status=ok
// SIG undefined FUN_1458bb440(void)

void FUN_1458bb440(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x30) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x28) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x28) = param_2;
    if (*(longlong **)(param_2 + 0x30) == plVar2) goto LAB_1458bb47f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x30) = plVar2;
      goto LAB_1458bb47f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x30) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458bb47f:
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
                    /* WARNING: Could not recover jumptable at 0x0001458bb4de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458bb4e2 FUN_1458bb4e2 body=162 status=ok
// SIG undefined FUN_1458bb4e2(void)

void FUN_1458bb4e2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x30) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x28) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x28) = param_2;
    if (*(longlong **)(param_2 + 0x30) == plVar2) goto LAB_1458bb521;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x30) = plVar2;
      goto LAB_1458bb521;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x30) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458bb521:
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
                    /* WARNING: Could not recover jumptable at 0x0001458bb580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458bb584 FUN_1458bb584 body=162 status=ok
// SIG undefined FUN_1458bb584(void)

void FUN_1458bb584(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x30) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x28) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x28) = param_2;
    if (*(longlong **)(param_2 + 0x30) == plVar2) goto LAB_1458bb5c3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x30) = plVar2;
      goto LAB_1458bb5c3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x30) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458bb5c3:
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
                    /* WARNING: Could not recover jumptable at 0x0001458bb622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458bb626 FUN_1458bb626 body=132 status=ok
// SIG undefined FUN_1458bb626(void)

void FUN_1458bb626(longlong param_1,int param_2)

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



// FUNCTION 1458bb6ac FUN_1458bb6ac body=38 status=ok
// SIG undefined FUN_1458bb6ac(void)

undefined8 FUN_1458bb6ac(undefined8 param_1,int param_2)

{
  FUN_1458bb6d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458bb6d2 FUN_1458bb6d2 body=132 status=ok
// SIG undefined FUN_1458bb6d2(void)

void FUN_1458bb6d2(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14a9fd960;
  iVar2 = *(int *)(param_1 + 5);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[4];
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0xa8))(plVar4,1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  puVar5 = (undefined8 *)param_1[6];
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458bb75c FUN_1458bb75c body=228 status=ok
// SIG undefined FUN_1458bb75c(void)

longlong FUN_1458bb75c(void)

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
  if (DAT_14cac1870 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f0f78;
    local_38 = &LAB_147870977;
    local_40 = &LAB_1417ad1e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xcb0;
    FUN_14081cfa3(L"/Script/Engine",L"HierarchicalInstancedStaticMeshComponent",&DAT_14cac1870,
                  &DAT_147870976);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bb846 FUN_1458bb846 body=228 status=ok
// SIG undefined FUN_1458bb846(void)

longlong FUN_1458bb846(void)

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
  if (DAT_14caa86b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_145a4498a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146328d5e;
    local_38 = &LAB_14747f5e9;
    local_40 = &LAB_145d005c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/DataflowEngine",L"Dataflow",&DAT_14caa86b8,&DAT_14747f5e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa86b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bb932 FUN_1458bb932 body=228 status=ok
// SIG undefined FUN_1458bb932(void)

longlong FUN_1458bb932(void)

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
  if (DAT_14cab3e70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_147585335;
    local_40 = FUN_146343088;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneHookSection",&DAT_14cab3e70,&DAT_147585334);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3e70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bba22 FUN_1458bba22 body=228 status=ok
// SIG undefined FUN_1458bba22(void)

longlong FUN_1458bba22(void)

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
  if (DAT_14cac11d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14786c8df;
    local_40 = &LAB_145808172;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Engine",L"GbxBoneSet",&DAT_14cac11d8,&DAT_14786c8de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac11d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bbb12 FUN_1458bbb12 body=228 status=ok
// SIG undefined FUN_1458bbb12(void)

longlong FUN_1458bbb12(void)

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
  if (DAT_14cae4968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458628e6;
    local_38 = &LAB_147af529d;
    local_40 = &LAB_1463d2a66;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"InputDelegateBinding",&DAT_14cae4968,&DAT_147af529c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae4968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bbbfc FUN_1458bbbfc body=228 status=ok
// SIG undefined FUN_1458bbbfc(void)

longlong FUN_1458bbbfc(void)

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
  if (DAT_14cb07e58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145892f94;
    local_38 = &LAB_147d25186;
    local_40 = FUN_146400f0a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/Engine",L"SkinnedAsset",&DAT_14cb07e58,FUN_146400ee8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb07e58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bbce6 FUN_1458bbce6 body=228 status=ok
// SIG undefined FUN_1458bbce6(void)

longlong FUN_1458bbce6(void)

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
  if (DAT_14cb0b9b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146408884;
    local_38 = &LAB_147d71a29;
    local_40 = &LAB_145d2196d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2DArray",&DAT_14cb0b9b8,&DAT_147d71a28);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b9b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bbdd2 FUN_1458bbdd2 body=228 status=ok
// SIG undefined FUN_1458bbdd2(void)

longlong FUN_1458bbdd2(void)

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
  if (DAT_14cb1c678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e398b9;
    local_40 = &LAB_1464212c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxNav",L"HavokTraversalData",&DAT_14cb1c678,&DAT_147e398b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bbebc FUN_1458bbebc body=228 status=ok
// SIG undefined FUN_1458bbebc(void)

longlong FUN_1458bbebc(void)

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
  if (DAT_14cb1f9f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147ecd440;
    local_40 = &LAB_145cc304d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/AIModule",L"BrainComponent",&DAT_14cb1f9f0,FUN_14642bbca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1f9f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bbfac FUN_1458bbfac body=228 status=ok
// SIG undefined FUN_1458bbfac(void)

longlong FUN_1458bbfac(void)

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
  if (DAT_14cb20e40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f14d09;
    local_40 = FUN_14180b313;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverViewData",&DAT_14cb20e40,&DAT_147f14d08);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20e40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc096 FUN_1458bc096 body=228 status=ok
// SIG undefined FUN_1458bc096(void)

longlong FUN_1458bc096(void)

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
  if (DAT_14cb247e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146442844;
    local_38 = &LAB_147f62815;
    local_40 = &LAB_146442933;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2c0;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"GbxDestructibleGeometryCollectionData",&DAT_14cb247e8,
                  FUN_14644290c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb247e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc180 FUN_1458bc180 body=228 status=ok
// SIG undefined FUN_1458bc180(void)

longlong FUN_1458bc180(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb24d48 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_147f692e7;
    local_40 = FUN_146443fd4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioGraphAsset",&DAT_14cb24d48,&DAT_147f692e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb24d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc26a FUN_1458bc26a body=228 status=ok
// SIG undefined FUN_1458bc26a(void)

longlong FUN_1458bc26a(void)

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
  if (DAT_14cb28ca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146341bc0;
    local_38 = &LAB_147fc6867;
    local_40 = FUN_14645567d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x4a8;
    FUN_14081cfa3(L"/Script/TemplateSequence",L"TemplateSequencePlayer",&DAT_14cb28ca0,FUN_146455656
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28ca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc354 FUN_1458bc354 body=228 status=ok
// SIG undefined FUN_1458bc354(void)

longlong FUN_1458bc354(void)

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
  if (DAT_14cb297b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7809;
    local_40 = FUN_146458ceb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"BooleanCameraVariable",&DAT_14cb297b0,&DAT_147fe7808)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb297b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc43e FUN_1458bc43e body=228 status=ok
// SIG undefined FUN_1458bc43e(void)

longlong FUN_1458bc43e(void)

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
  if (DAT_14cb297c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7813;
    local_40 = FUN_146458d58;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Integer32CameraVariable",&DAT_14cb297c8,
                  &DAT_147fe7812);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb297c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc528 FUN_1458bc528 body=228 status=ok
// SIG undefined FUN_1458bc528(void)

longlong FUN_1458bc528(void)

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
  if (DAT_14cb297e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7817;
    local_40 = FUN_146458dc8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"FloatCameraVariable",&DAT_14cb297e0,&DAT_147fe7816);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb297e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc612 FUN_1458bc612 body=228 status=ok
// SIG undefined FUN_1458bc612(void)

longlong FUN_1458bc612(void)

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
  if (DAT_14cb297f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe781b;
    local_40 = FUN_146458e38;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"DoubleCameraVariable",&DAT_14cb297f8,&DAT_147fe781a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb297f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc6fc FUN_1458bc6fc body=228 status=ok
// SIG undefined FUN_1458bc6fc(void)

longlong FUN_1458bc6fc(void)

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
  if (DAT_14cb29828 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7823;
    local_40 = FUN_146458f10;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Vector2dCameraVariable",&DAT_14cb29828,&DAT_147fe7822
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc7e6 FUN_1458bc7e6 body=228 status=ok
// SIG undefined FUN_1458bc7e6(void)

longlong FUN_1458bc7e6(void)

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
  if (DAT_14cb29858 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe782b;
    local_40 = FUN_146458fe0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Vector3dCameraVariable",&DAT_14cb29858,&DAT_147fe782a
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29858;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc8d0 FUN_1458bc8d0 body=228 status=ok
// SIG undefined FUN_1458bc8d0(void)

longlong FUN_1458bc8d0(void)

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
  if (DAT_14cb29888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7833;
    local_40 = FUN_1464590bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Vector4dCameraVariable",&DAT_14cb29888,&DAT_147fe7832
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bc9ba FUN_1458bc9ba body=228 status=ok
// SIG undefined FUN_1458bc9ba(void)

longlong FUN_1458bc9ba(void)

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
  if (DAT_14cb298b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe783b;
    local_40 = FUN_1464591a8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Rotator3dCameraVariable",&DAT_14cb298b8,
                  &DAT_147fe783a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb298b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bcaa4 FUN_1458bcaa4 body=228 status=ok
// SIG undefined FUN_1458bcaa4(void)

longlong FUN_1458bcaa4(void)

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
  if (DAT_14cb298e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7843;
    local_40 = FUN_146459292;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Transform3dCameraVariable",&DAT_14cb298e8,
                  &DAT_147fe7842);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb298e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bcb8e FUN_1458bcb8e body=228 status=ok
// SIG undefined FUN_1458bcb8e(void)

longlong FUN_1458bcb8e(void)

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
  if (DAT_14cb366d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14806386d;
    local_40 = FUN_146467201;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSimCacheCustomStorageInterface",&DAT_14cb366d0,
                  &DAT_14806386c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb366d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bcc78 FUN_1458bcc78 body=228 status=ok
// SIG undefined FUN_1458bcc78(void)

longlong FUN_1458bcc78(void)

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
  if (DAT_14cb4af40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148430210;
    local_40 = FUN_14648cf69;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoClickTarget",&DAT_14cb4af40,
                  FUN_14648cf42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4af40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bcd62 FUN_1458bcd62 body=228 status=ok
// SIG undefined FUN_1458bcd62(void)

longlong FUN_1458bcd62(void)

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
  if (DAT_14cb4afd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14843062f;
    local_40 = FUN_14648d239;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoStateTarget",&DAT_14cb4afd0,
                  FUN_14648d212);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4afd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bce4c FUN_1458bce4c body=228 status=ok
// SIG undefined FUN_1458bce4c(void)

longlong FUN_1458bce4c(void)

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
  if (DAT_14cb4c4a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_1484c1b53;
    local_40 = &LAB_145dae09a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"GeometrySelectionVisualizationProperties",
                  &DAT_14cb4c4a0,&DAT_1484c1b52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c4a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bcf38 FUN_1458bcf38 body=228 status=ok
// SIG undefined FUN_1458bcf38(void)

longlong FUN_1458bcf38(void)

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
  if (DAT_14cb4c4c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484c1b87;
    local_40 = FUN_1464927d0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"InteractiveToolActivity",&DAT_14cb4c4c0,
                  &DAT_1484c1b86);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd024 FUN_1458bd024 body=228 status=ok
// SIG undefined FUN_1458bd024(void)

longlong FUN_1458bd024(void)

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
  if (DAT_14cb4c8a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f23b4;
    local_38 = &LAB_1484cb177;
    local_40 = FUN_146493184;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"SingleTargetWithSelectionToolBuilder",
                  &DAT_14cb4c8a8,&DAT_1484cb176);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c8a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd110 FUN_1458bd110 body=228 status=ok
// SIG undefined FUN_1458bd110(void)

longlong FUN_1458bd110(void)

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
  if (DAT_14cb4c8c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145995692;
    local_38 = &LAB_1484cb17b;
    local_40 = &LAB_1464931a7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"SingleTargetWithSelectionTool",&DAT_14cb4c8c0,
                  &DAT_1484cb17a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c8c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd1fa FUN_1458bd1fa body=228 status=ok
// SIG undefined FUN_1458bd1fa(void)

longlong FUN_1458bd1fa(void)

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
  if (DAT_14cb4ca50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146493878;
    local_38 = &LAB_1484df631;
    local_40 = &LAB_145de8313;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PolyEditPreviewMesh",&DAT_14cb4ca50,&DAT_1484df630
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ca50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd2e4 FUN_1458bd2e4 body=228 status=ok
// SIG undefined FUN_1458bd2e4(void)

longlong FUN_1458bd2e4(void)

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
  if (DAT_14cb4d900 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ee63a;
    local_38 = &LAB_14854d75f;
    local_40 = FUN_146495692;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0xb40;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PolygonSelectionMechanic",&DAT_14cb4d900,
                  &DAT_14854d75e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4d900;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd3d0 FUN_1458bd3d0 body=228 status=ok
// SIG undefined FUN_1458bd3d0(void)

longlong FUN_1458bd3d0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbab8a8 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b5516;
    local_38 = &LAB_148c250dd;
    local_40 = FUN_1418cabe6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/OakGame",L"OakInteractiveObjectBodyData",&DAT_14cbab8a8,&DAT_148c250dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbab8a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd4bc FUN_1458bd4bc body=228 status=ok
// SIG undefined FUN_1458bd4bc(void)

longlong FUN_1458bd4bc(void)

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
  if (DAT_14cba5d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148be0ceb;
    local_40 = &LAB_14624b242;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2ca0;
    FUN_14081cfa3(L"/Script/OakGame",L"ModularTerminal",&DAT_14cba5d90,FUN_1465c5622);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd5a8 FUN_1458bd5a8 body=228 status=ok
// SIG undefined FUN_1458bd5a8(void)

longlong FUN_1458bd5a8(void)

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
  if (DAT_14cbbca10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148c96be1;
    local_40 = &LAB_1412b8ffc;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2730;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVaultTrackable",&DAT_14cbbca10,FUN_14660b606);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbca10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd694 FUN_1458bd694 body=228 status=ok
// SIG undefined FUN_1458bd694(void)

longlong FUN_1458bd694(void)

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
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf5d00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1459237b6;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14900842b;
    local_40 = &LAB_14612941d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/Party",L"SocialChatManager",&DAT_14cbf5d00,&DAT_14900842a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf5d00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd77a FUN_1458bd77a body=500 status=ok
// SIG undefined FUN_1458bd77a(void)

void FUN_1458bd77a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(longlong *)(param_1 + 0x10) = param_2;
  uVar2 = FUN_14479fe53(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2),1,1);
  FUN_1401a82b6(param_1,uVar2);
  if ((-1 < (int)DAT_14ca5c7a0) &&
     (lVar1 = *(longlong *)(param_1 + 0x10), (int)DAT_14ca5c7a0 < *(int *)(lVar1 + 0x5330))) {
    lVar4 = lVar1 + 0x5318;
    if (*(longlong *)(lVar1 + 0x5328) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x5328);
    }
    if (((*(uint *)(lVar4 + (ulonglong)(DAT_14ca5c7a0 >> 5) * 4) >> (DAT_14ca5c7a0 & 0x1f) & 1) != 0
        ) && (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x5308) + (ulonglong)DAT_14ca5c7a0 * 8),
             lVar1 != 0)) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,2,0x10);
      local_38 = 2;
      *local_40 = &PTR_LAB_14a2a1000;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar3;
      *local_40 = &PTR_FUN_14a2a0f90;
      local_40[3] = FUN_142e55bfc;
      FUN_1458bd970(lVar1,&DAT_14c76088c,&local_40);
      FUN_1449db362(&local_40);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,2,0x10);
      local_38 = 2;
      *local_40 = &PTR_LAB_14a2a1000;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar3;
      *local_40 = &PTR_FUN_14a2a0f90;
      local_40[3] = FUN_142e56080;
      FUN_1458bd970(lVar1,&DAT_14c76089c,&local_40);
      FUN_1449db362(&local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458bd970 FUN_1458bd970 body=93 status=ok
// SIG undefined FUN_1458bd970(void)

void FUN_1458bd970(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1458bda4c((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)puVar1 = *param_2;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
  *(undefined4 *)(puVar1 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
  FUN_1458bd9ce(puVar1 + 2,param_3);
  return;
}



// FUNCTION 1458bd9ce FUN_1458bd9ce body=124 status=ok
// SIG undefined FUN_1458bd9ce(void)

void FUN_1458bd9ce(longlong *param_1,longlong *param_2)

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



// FUNCTION 1458bda4c FUN_1458bda4c body=132 status=ok
// SIG undefined FUN_1458bda4c(void)

void FUN_1458bda4c(longlong param_1,int param_2)

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



// FUNCTION 1458bdad0 FUN_1458bdad0 body=322 status=ok
// SIG undefined FUN_1458bdad0(void)

void FUN_1458bdad0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(char *)((longlong)param_1 + 0x149) == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x90))();
    if (cVar3 == '\0') {
      lVar6 = FUN_1409b37a2(param_1);
      plVar7 = (longlong *)FUN_140937900(lVar6);
      if ((plVar7 == param_1) && (lVar1 = param_1[0xf], (longlong)(int)lVar1 != 0)) {
        uVar2 = *(undefined8 *)(lVar6 + 0x1c8);
        lVar9 = param_1[0xe];
        lVar4 = 0;
        do {
          plVar7 = *(longlong **)(lVar9 + lVar4);
          if (plVar7 != (longlong *)0x0) {
            lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar8 = FUN_1412e09a6();
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              (**(code **)(*plVar7 + 0x78))(plVar7,lVar6,uVar2,0);
            }
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)lVar1 * 8 != lVar4);
      }
    }
    else {
      lVar6 = param_1[0xf];
      if ((longlong)(int)lVar6 != 0) {
        lVar1 = param_1[0xe];
        lVar9 = 0;
        do {
          plVar7 = *(longlong **)(lVar1 + lVar9);
          if (plVar7 != (longlong *)0x0) {
            lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar5 = FUN_1412e09a6();
            if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30)) {
              FUN_1458bdc12(plVar7);
            }
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar9);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x149) = 1;
    FUN_140936424(param_1);
    return;
  }
  return;
}



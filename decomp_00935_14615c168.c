// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14615c168 FUN_14615c168 body=27 status=ok
// SIG undefined FUN_14615c168(void)

undefined8 FUN_14615c168(longlong param_1)

{
  byte in_stack_00000040;
  
  FUN_1415ebd7a(*(undefined8 *)(param_1 + 0x18),in_stack_00000040 & 1);
  return 0;
}



// FUNCTION 14615c184 FUN_14615c184 body=186 status=ok
// SIG undefined FUN_14615c184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615c184(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c998008 = 0;
  _DAT_14c998030 = 0;
  _DAT_14c998038 = 0;
  _DAT_14c998010 = 0;
  _DAT_14c998018 = 0;
  _DAT_14c99803c = 0xffffffff00000080;
  DAT_14c998044 = 0;
  DAT_14c998050 = 0;
  _DAT_14c998058 = 0;
  DAT_14c998080 = 0;
  DAT_14c998088 = 0;
  DAT_14c998060 = 0;
  _DAT_14c998068 = 0;
  _DAT_14c99808c = 0xffffffff00000080;
  _DAT_14c998094 = 0;
  DAT_14c998098 = 0;
  uVar1 = FUN_140b631de();
  FUN_14615c240(uVar1,&local_18);
  DAT_14c998098 = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615c240 FUN_14615c240 body=226 status=ok
// SIG undefined FUN_14615c240(void)

undefined8 FUN_14615c240(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_149e020b0;
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
  *local_30 = &PTR_FUN_149f7ca50;
  local_30[3] = &DAT_14c998008;
  local_30[4] = FUN_14142d822;
  FUN_1448b6402(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615c344 FUN_14615c344 body=158 status=ok
// SIG undefined FUN_14615c344(void)

bool FUN_14615c344(longlong param_1,undefined8 param_2)

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



// FUNCTION 14615c3e4 FUN_14615c3e4 body=156 status=ok
// SIG undefined FUN_14615c3e4(void)

void FUN_14615c3e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_144a7b4ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14615c425;
  }
  param_2 = 0;
LAB_14615c425:
  FUN_145fef18e(param_1,param_2,1);
  local_30 = 0;
  FUN_14485c47a(&local_30,param_2);
  local_28 = &local_30;
  FUN_14615c482(param_1 + 0x70);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615c482 FUN_14615c482 body=306 status=ok
// SIG undefined FUN_14615c482(void)

int FUN_14615c482(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar2 = FUN_145a5d382(lVar1,*param_2);
    iVar8 = 0;
    iVar9 = 0;
    do {
      lVar12 = (longlong)iVar9;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar6) {
        iVar5 = iVar6;
      }
      lVar13 = lVar1 + 8 + lVar12 * 8;
      iVar10 = iVar9;
      lVar4 = lVar12;
      do {
        lVar4 = lVar4 + 1;
        iVar11 = iVar5;
        if (lVar7 <= lVar4) break;
        bVar3 = FUN_145a5d382(lVar13,*param_2);
        iVar10 = iVar10 + 1;
        lVar13 = lVar13 + 8;
        iVar11 = iVar10;
      } while ((bVar2 & 1) == bVar3);
      if ((bVar2 & 1) == 0) {
        if (iVar8 != iVar9) {
          memmove((void *)(lVar1 + (longlong)iVar8 * 8),(void *)(lVar1 + lVar12 * 8),
                  (longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar2 = bVar2 ^ 1;
    } while (lVar4 < lVar7);
    *(int *)(param_1 + 1) = iVar8;
    iVar6 = iVar6 - iVar8;
  }
  return iVar6;
}



// FUNCTION 14615c5b4 FUN_14615c5b4 body=68 status=ok
// SIG undefined FUN_14615c5b4(void)

void FUN_14615c5b4(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  FUN_14615c5f8(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14615c5f8 FUN_14615c5f8 body=346 status=ok
// SIG undefined FUN_14615c5f8(void)

undefined8 * FUN_14615c5f8(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a0690;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x19] = local_38;
  *(undefined4 *)(param_1 + 0x1a) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xd4) = local_2c;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x1c] = local_38;
  *(undefined4 *)(param_1 + 0x1d) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xec) = local_2c;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x1f] = local_38;
  *(undefined4 *)(param_1 + 0x20) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x104) = local_2c;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615c754 FUN_14615c754 body=217 status=ok
// SIG undefined FUN_14615c754(void)

void FUN_14615c754(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140eeb8c0(param_1 + -0x8c0);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  if (*(char *)(param_1 + -0x748) == '\x03') {
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      FUN_14615c894(param_1 + 0x10);
    }
    lVar4 = FUN_14011c349();
    iVar1 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        if ((plVar3 != (longlong *)0x0) && (plVar3[0x59] == *(longlong *)(lVar4 + 0xe0))) {
          (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_1 + 0x38));
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  FUN_14615c82e(param_1,*(undefined8 *)(param_1 + 0x38),param_3,param_4);
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return;
}



// FUNCTION 14615c82e FUN_14615c82e body=102 status=ok
// SIG undefined FUN_14615c82e(void)

void FUN_14615c82e(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 == -1) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*plVar2 + 0x698))(plVar2,param_2);
  }
  if (param_2 != 0) {
    FUN_140e79714(param_2 + 0x7790,param_1,param_3,iVar1);
    return;
  }
  return;
}



// FUNCTION 14615c894 FUN_14615c894 body=250 status=ok
// SIG undefined FUN_14615c894(void)

void FUN_14615c894(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x28))(param_1);
    local_58 = *puVar3;
    FUN_1446dcdd4(local_50);
    if (DAT_14cbcb7a8 == 0) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar4 = FUN_144837462(DAT_14cbcb7a8,local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((lVar4 != 0) && (lVar2 != 0)) {
        puVar5 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
          puVar5 = *(undefined4 **)(lVar4 + 8);
        }
        FUN_1447325ac(puVar5,local_50,1);
        cVar1 = FUN_14615c990(lVar2,local_50);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x30))(param_1,1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615c990 FUN_14615c990 body=69 status=ok
// SIG undefined FUN_14615c990(void)

undefined8 FUN_14615c990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x30);
    uVar1 = FUN_14615c9d6(param_1 + 0x6090,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14615c9d6 FUN_14615c9d6 body=721 status=ok
// SIG undefined FUN_14615c9d6(void)

undefined8 FUN_14615c9d6(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [8];
  longlong local_78;
  ulonglong uStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = param_1 + 0x50;
  cVar3 = FUN_144729dda(lVar7);
  if ((cVar3 != '\0') && (lVar4 = FUN_14479d2ce(lVar7), *(char *)(lVar4 + 0x178) == '\x03')) {
    FUN_1446dcdd4(&local_78,param_2);
    if (DAT_14cbcb7a8 == 0) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar4 = FUN_144837462(DAT_14cbcb7a8,&local_78);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        local_a8 = lVar7;
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar7 = 0;
          lVar8 = 0;
          do {
            FUN_1447325ac(*(longlong *)(param_1 + 0x30) + lVar7,&local_78,1);
            if (local_78 == *param_2) goto LAB_14615cb1d;
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x30;
          } while (lVar8 < *(int *)(param_1 + 0x38));
        }
        FUN_1446dcdd4(&local_78,param_2);
        iVar2 = *(int *)(param_1 + 0x38);
        lVar8 = (longlong)iVar2;
        *(uint *)(param_1 + 0x38) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
          FUN_14615cfba((longlong *)(param_1 + 0x30),iVar2);
        }
        lVar7 = *(longlong *)(param_1 + 0x30);
        FUN_1404e49e4(lVar7 + lVar8 * 0x30,&local_78);
        *(undefined1 *)(lVar7 + 0x28 + lVar8 * 0x30) = 0;
        if (local_60 != 0) {
          FUN_1400020a8();
        }
LAB_14615cb1d:
        pcVar1 = (char *)(*(longlong *)(param_1 + 0x30) + 0x28 + lVar8 * 0x30);
        *pcVar1 = *pcVar1 + '\x01';
        cVar3 = *(char *)(*(longlong *)(param_1 + 0x30) + 0x28 + lVar8 * 0x30);
        local_78 = 0;
        uStack_70 = 0;
        uVar5 = (ulonglong)*(uint *)(lVar4 + 0x40);
        if (0 < (int)*(uint *)(lVar4 + 0x40)) {
          lVar7 = *(longlong *)(lVar4 + 0x38);
          do {
            if (*(char *)(lVar7 + 0x28) == cVar3) {
              FUN_14615ccfc(&local_78);
              if ((longlong)(int)uStack_70 != 0) {
                lVar7 = (longlong)(int)uStack_70 * 0x18;
                lVar4 = local_78;
                do {
                  lVar8 = FUN_14479d2ce(local_a8);
                  FUN_14615ce02(local_80,param_2,
                                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff);
                  FUN_14615cca8(lVar4,&local_a0);
                  local_90 = local_a0;
                  uStack_8c = uStack_9c;
                  uStack_88 = uStack_98;
                  uStack_84 = uStack_94;
                  local_c0 = 0;
                  local_c8 = 0;
                  local_d8 = 0;
                  local_b8 = 0;
                  local_d0 = 0x3f800000;
                  FUN_141348940(lVar8 + 0x3ad8,&local_90,local_80,1);
                  lVar4 = lVar4 + 0x18;
                  lVar7 = lVar7 + -0x18;
                } while (lVar7 != 0);
              }
              break;
            }
            lVar7 = lVar7 + 0x30;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        FUN_141165eb6(param_1,param_2);
        lVar7 = FUN_14479d2ce(local_a8);
        FUN_1447f69b6(lVar7 + 0x5a00);
        FUN_140d587e5(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        uVar6 = 1;
        goto LAB_14615cc4e;
      }
    }
  }
  uVar6 = 0;
LAB_14615cc4e:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14615cca8 FUN_14615cca8 body=83 status=ok
// SIG undefined FUN_14615cca8(void)

longlong * FUN_14615cca8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140db965e();
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



// FUNCTION 14615ccfc FUN_14615ccfc body=93 status=ok
// SIG undefined FUN_14615ccfc(void)

undefined8 * FUN_14615ccfc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d587e5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14615cd8e(param_1,iVar1);
      FUN_14615cd59(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14615cd59 FUN_14615cd59 body=52 status=ok
// SIG undefined FUN_14615cd59(void)

void FUN_14615cd59(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14615cd8e FUN_14615cd8e body=115 status=ok
// SIG undefined FUN_14615cd8e(void)

void FUN_14615cd8e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14615ce02 FUN_14615ce02 body=439 status=ok
// SIG undefined FUN_14615ce02(void)

undefined8 FUN_14615ce02(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  _Src = DAT_14cbcb708;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = (undefined2 *)0x0;
  lVar4 = (longlong)(int)DAT_14cbcb710;
  uStack_40 = CONCAT44(uStack_40._4_4_,DAT_14cbcb710);
  if (lVar4 == 0) {
    uStack_40 = (ulonglong)DAT_14cbcb710;
  }
  else {
    FUN_1446dd670(&local_48,DAT_14cbcb710,0);
    memcpy(local_48,_Src,lVar4 * 2);
  }
  if (param_3 == '\x02') {
    puVar2 = &DAT_14cbcb718;
  }
  else {
    if (param_3 != '\x03') goto LAB_14615cea9;
    puVar2 = &DAT_14cbcb728;
  }
  iVar1 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,*puVar2,iVar1);
LAB_14615cea9:
  FUN_1400b22c2(local_78,L".Preview");
  FUN_1400021e4(param_2,local_88);
  FUN_1401c7f3e(local_68,local_88,local_78);
  FUN_144a7dea0(&local_58,local_68,&local_48);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_48 = local_58;
  uStack_40 = uStack_50;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_48;
  if ((int)uStack_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar3,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14615cfba FUN_14615cfba body=147 status=ok
// SIG undefined FUN_14615cfba(void)

void FUN_14615cfba(longlong param_1,int param_2)

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



// FUNCTION 14615d04e FUN_14615d04e body=95 status=ok
// SIG undefined FUN_14615d04e(void)

ulonglong FUN_14615d04e(longlong param_1)

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
LAB_14615d090:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14615d090;
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



// FUNCTION 14615d0ae FUN_14615d0ae body=85 status=ok
// SIG undefined FUN_14615d0ae(void)

void FUN_14615d0ae(longlong param_1)

{
  if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x18) == '\0') &&
     (*(longlong *)(param_1 + 0xa0) != 0)) {
    FUN_14615d104(*(longlong *)(param_1 + 0xa0) + 0x18,param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x28) & 2) != 0) {
      FUN_1415ee148(param_1,*(undefined4 *)(param_1 + 0x3c));
      FUN_1411886c2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14615d104 FUN_14615d104 body=414 status=ok
// SIG undefined FUN_14615d104(void)

void FUN_14615d104(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14615d1d0:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b42c8b0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_143e3d3fc;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14615d1d0;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b42c8b0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_143e3d3fc;
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
                    /* WARNING: Could not recover jumptable at 0x00014615d28a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14615d2a2 FUN_14615d2a2 body=9 status=ok
// SIG undefined FUN_14615d2a2(void)

void FUN_14615d2a2(longlong param_1)

{
  FUN_14615d2ac(param_1 + 0x10);
  return;
}



// FUNCTION 14615d2ac FUN_14615d2ac body=95 status=ok
// SIG undefined FUN_14615d2ac(void)

void FUN_14615d2ac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4189a0;
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
  FUN_140fae274(param_1);
  return;
}



// FUNCTION 14615d316 FUN_14615d316 body=406 status=ok
// SIG undefined FUN_14615d316(void)

undefined8 * FUN_14615d316(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14b2ab6b0;
  param_1[5] = &PTR_FUN_14b2abb30;
  param_1[6] = &PTR_LAB_14b2abb70;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3f0000003d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x3f80000000000000;
  *(undefined2 *)((longlong)param_1 + 300) = 3;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x137) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x29] = DAT_14c8464e0;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x2f] = DAT_14c8464f8;
  param_1[0x30] = uVar1;
  param_1[0x31] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x37] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x35] = DAT_14c8464e0;
  param_1[0x36] = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x39] = DAT_14c8464f8;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = DAT_14c846508;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3f] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x3d] = DAT_14c8464f8;
  param_1[0x3e] = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xb9 | 0x42;
  *(undefined1 *)(param_1 + 9) = 2;
  return param_1;
}



// FUNCTION 14615d4ac FUN_14615d4ac body=167 status=ok
// SIG undefined FUN_14615d4ac(void)

void FUN_14615d4ac(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  (**(code **)(*param_1 + 0x2d8))();
  local_48 = param_5;
  FUN_140bc0c12(param_1,param_2,param_3,param_4);
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
  }
  puVar1 = &DAT_14cb72218;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_3 + 0x18);
  }
  local_40 = *puVar1;
  FUN_14615d554(uVar2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615d554 FUN_14615d554 body=145 status=ok
// SIG undefined FUN_14615d554(void)

void FUN_14615d554(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_14070cc62();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_1 + 0x858), lVar1 != 0)) {
      FUN_1407adf94(lVar1,param_2);
      FUN_1409df526(lVar1,param_2);
      FUN_1400bc8c2(lVar1 + 0x1aa0,param_2);
      FUN_1400bc8c2(lVar1 + 0x1198,param_2);
      *(byte *)(lVar1 + 0x5b7) =
           *(byte *)(lVar1 + 0x5b7) & 0xfd | *(char *)(lVar1 + 0x1198) * '\x02';
    }
  }
  return;
}



// FUNCTION 14615d5e6 FUN_14615d5e6 body=494 status=ok
// SIG undefined FUN_14615d5e6(void)

void FUN_14615d5e6(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar3 == '\0') {
    local_58 = (void *)0x0;
    local_50 = (int)param_4[1];
    lVar10 = (longlong)local_50;
    pvVar2 = (void *)*param_4;
    if (lVar10 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar2,lVar10 * 2);
    }
    local_68 = (void *)0x0;
    local_60 = (int)param_3[1];
    lVar10 = (longlong)local_60;
    pvVar2 = (void *)*param_3;
    if (lVar10 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar2,lVar10 * 2);
    }
    local_78 = param_5;
    FUN_14615d85c(param_1,param_2,&local_68,&local_58);
    goto LAB_14615d6c8;
  }
  if ((char)param_2 == '\0') goto LAB_14615d6c8;
  lVar10 = param_1[0x51];
  uVar4 = DAT_14cbe0d70;
  if (lVar10 != 0) {
    iVar1 = *(int *)(lVar10 + 0x1c0);
    if (iVar1 == (int)param_4[1]) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(lVar10 + 0x1b8) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(*param_4 + lVar5);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) goto LAB_14615d789;
LAB_14615d75d:
          lVar5 = lVar5 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_14615d75d;
        }
        if (uVar6 != uVar8) goto LAB_14615d790;
      }
    }
    else if ((int)param_4[1] + iVar1 != 1) goto LAB_14615d790;
LAB_14615d789:
    uVar4 = DAT_14cbe0d78;
  }
LAB_14615d790:
  *(undefined8 *)((longlong)param_1 + 0x35c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x364) = param_5;
  FUN_14615d7d6(param_1);
LAB_14615d6c8:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615d7d6 FUN_14615d7d6 body=132 status=ok
// SIG undefined FUN_14615d7d6(void)

void FUN_14615d7d6(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x354) == '\x01') {
    local_38 = FUN_14621d582;
    local_30 = 0;
    FUN_14615e09a(local_28,param_1);
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_14615df74(uVar1,local_28);
    FUN_1449db362(local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615d85c FUN_14615d85c body=594 status=ok
// SIG undefined FUN_14615d85c(void)

void FUN_14615d85c(longlong param_1,char param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined4 *puVar7;
  wchar_t *_Str1;
  wchar_t *_Str2;
  longlong lVar8;
  int iVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar4 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x1a8) == 0) goto LAB_14615d9d9;
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
  puVar7 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = puVar2;
  }
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  FUN_1400b2348(puVar7,&local_58,1);
  pwVar5 = local_58;
  _Str2 = L"";
  if ((int)param_3[1] != 0) {
    _Str2 = (wchar_t *)*param_3;
  }
  _Str1 = L"";
  if ((int)uStack_50 != 0) {
    _Str1 = local_58;
  }
  iVar6 = wcscmp(_Str1,_Str2);
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if ((iVar6 != 0) || (param_2 == '\0')) goto LAB_14615d9d9;
  FUN_14615dab0(param_1);
  lVar14 = *(longlong *)(param_1 + 0x288);
  if (lVar14 == 0) {
    iVar6 = (int)param_4[1];
LAB_14615d942:
    local_68 = (void *)0x0;
    pvVar3 = (void *)*param_4;
    local_60 = iVar6;
    if (iVar6 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,iVar6,0);
      memcpy(local_68,pvVar3,(longlong)iVar6 * 2);
    }
    local_78 = (void *)0x0;
    local_70 = (int)param_3[1];
    lVar14 = (longlong)local_70;
    pvVar3 = (void *)*param_3;
    if (lVar14 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar3,lVar14 * 2);
    }
    local_88 = uVar4;
    FUN_14615db22(param_1,1,&local_78,&local_68);
  }
  else {
    iVar6 = *(int *)(lVar14 + 0x1c0);
    iVar1 = (int)param_4[1];
    if (iVar6 == iVar1) {
      if (1 < iVar6) {
        lVar8 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*(longlong *)(lVar14 + 0x1b8) + lVar8);
          uVar11 = (ulonglong)uVar10;
          uVar12 = *(ushort *)(*param_4 + lVar8);
          if (uVar10 != uVar12) break;
          if (uVar10 == 0) goto LAB_14615da78;
LAB_14615da48:
          lVar8 = lVar8 + 2;
        }
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_14615da48;
        }
        if (uVar10 != uVar12) goto LAB_14615d942;
      }
    }
    else {
      iVar9 = iVar6 + iVar1;
      iVar6 = iVar1;
      if (iVar9 != 1) goto LAB_14615d942;
    }
LAB_14615da78:
    FUN_14615de26(param_1,&param_5);
  }
LAB_14615d9d9:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615dab0 FUN_14615dab0 body=114 status=ok
// SIG undefined FUN_14615dab0(void)

void FUN_14615dab0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[0x67] != 0) {
    lVar1 = param_1[0x66];
    lVar2 = (longlong)(int)param_1[0x67] << 3;
    do {
      (**(code **)(*param_1 + 0x108))(param_1,lVar1,1);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
    *(undefined4 *)(param_1 + 0x67) = 0;
    if (*(int *)((longlong)param_1 + 0x33c) != 0) {
      FUN_1403de8ba(param_1 + 0x66,0);
      return;
    }
  }
  return;
}



// FUNCTION 14615db22 FUN_14615db22 body=463 status=ok
// SIG undefined FUN_14615db22(void)

void FUN_14615db22(longlong *param_1,byte param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x35] != 0) {
    puVar1 = *(undefined4 **)(param_1[0x35] + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_48 = 0;
    uStack_40 = 0;
    bVar12 = true;
    FUN_1400b2348(puVar4,&local_48);
    if ((int)uStack_40 == (int)param_3[1]) {
      if (1 < (int)uStack_40) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(local_48 + lVar6);
          uVar2 = (uint)uVar7;
          uVar9 = *(ushort *)(*param_3 + lVar6);
          uVar10 = (uint)uVar9;
          if (uVar7 != uVar9) {
            if ((uVar9 | uVar7) < 0x80) {
              uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar7];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_14615dbbe;
            }
            iVar3 = uVar2 - uVar10;
            goto LAB_14615dbe9;
          }
          if (uVar7 == 0) break;
LAB_14615dbbe:
          lVar6 = lVar6 + 2;
        }
        iVar3 = 0;
LAB_14615dbe9:
        bVar12 = iVar3 == 0;
      }
    }
    else {
      bVar12 = (int)param_3[1] + (int)uStack_40 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if ((bVar12 & param_2) == 1) {
      iVar3 = (int)param_4[1];
      if (1 < iVar3) {
        lVar6 = param_1[0x51];
        if (lVar6 == 0) goto LAB_14615dc1d;
        if (*(int *)(lVar6 + 0xe8) == iVar3) {
          lVar5 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*(longlong *)(lVar6 + 0xe0) + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar9 = *(ushort *)(*param_4 + lVar5);
            if (uVar7 != uVar9) break;
            if (uVar7 == 0) goto LAB_14615dc0a;
LAB_14615dcad:
            lVar5 = lVar5 + 2;
          }
          if ((uVar9 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            uVar11 = (ulonglong)uVar9;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_14615dcad;
          }
          if (uVar7 != uVar9) goto LAB_14615dc1d;
        }
        else if (*(int *)(lVar6 + 0xe8) + iVar3 != 1) goto LAB_14615dc1d;
      }
LAB_14615dc0a:
      (**(code **)(*param_1 + 0x178))(param_1,param_5);
    }
  }
LAB_14615dc1d:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615dcf2 FUN_14615dcf2 body=306 status=ok
// SIG undefined FUN_14615dcf2(void)

void FUN_14615dcf2(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[0x51];
  if (((lVar2 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar2 + 200))) {
    if ((*(char *)(*(longlong *)(lVar2 + 0xc0) + 8 + (ulonglong)param_2 * 0xb0) == '\0') &&
       (lVar2 = *(longlong *)(lVar2 + 0xc0) + (ulonglong)param_2 * 0xb0,
       *(char *)(lVar2 + 0x80) == '\0')) {
      local_40 = 0;
      iVar3 = *(int *)(lVar2 + 0x90);
      uVar1 = *(undefined8 *)(lVar2 + 0x88);
      local_38 = iVar3;
      if (iVar3 == 0) {
        local_34 = 0;
        iVar3 = 0;
      }
      else {
        FUN_1415eee28(&local_40,iVar3,0);
        FUN_1415eed97(local_40,uVar1,iVar3);
        iVar3 = 0;
        if ((longlong)local_38 != 0) {
          lVar2 = local_40 + (longlong)local_38 * 0x18;
          lVar4 = local_40;
          do {
            (**(code **)(*param_1 + 0x100))(param_1,lVar4,lVar4 + 8);
            lVar4 = lVar4 + 0x18;
            iVar3 = local_38;
          } while (lVar4 != lVar2);
        }
      }
      FUN_1407ccdd0(local_40,iVar3);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615de26 FUN_14615de26 body=333 status=ok
// SIG undefined FUN_14615de26(void)

void FUN_14615de26(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined4 *)(param_1 + 0x324) = *param_2;
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetActiveSubNavItemByIndex",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_140c7f7d4(uVar2,local_38,param_2);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615df74 FUN_14615df74 body=293 status=ok
// SIG undefined FUN_14615df74(void)

void FUN_14615df74(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48 [2];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = FUN_1407f492e();
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar1 = FUN_144a7ba4c(lVar1);
        if (lVar1 != 0) {
          FUN_144a5dc74(local_38);
          FUN_144a5dc74(local_48);
          FUN_140ac6c96(&DAT_14cbe4ff0,local_38);
          FUN_140ac6c96(&DAT_14cbe5018,local_48);
          lVar1 = FUN_145da44aa(lVar1);
          if (lVar1 != 0) {
            uVar3 = FUN_140e82300();
            local_58 = FUN_140e82300();
            local_50 = uVar3;
            FUN_14615e246(lVar1,local_38,local_48,param_2);
          }
          if (local_48[0] != (longlong *)0x0) {
            (**(code **)(*local_48[0] + 0x10))();
          }
          if (local_38[0] != (longlong *)0x0) {
            (**(code **)(*local_38[0] + 0x10))();
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615e09a FUN_14615e09a body=428 status=ok
// SIG undefined FUN_14615e09a(void)

longlong * FUN_14615e09a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14615e17a:
    *puVar5 = &PTR_LAB_14b972ed0;
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
    *puVar5 = &PTR_FUN_14b9d2d50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14615e17a;
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
    *puVar5 = &PTR_LAB_14b972ed0;
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
    *puVar5 = &PTR_FUN_14b9d2d50;
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



// FUNCTION 14615e246 FUN_14615e246 body=737 status=ok
// SIG undefined FUN_14615e246(void)

undefined4
FUN_14615e246(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  plVar4 = (longlong *)FUN_145da4f3c();
  cVar2 = FUN_144a7c5f6(param_5);
  if (cVar2 == '\0') {
    pwVar5 = (wchar_t *)*param_5;
    local_58 = pwVar5;
    if (pwVar5 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar5 + 8))(pwVar5);
    }
    local_50 = *(undefined4 *)(param_5 + 1);
  }
  else {
    local_58 = L"Dialog_Yes";
    local_50 = 10;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"OakDialogBox";
    local_50 = 0xc;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(&local_58,local_70,local_6c,&DAT_149e06384);
    pwVar5 = local_58;
  }
  pwVar1 = (wchar_t *)*plVar4;
  if (pwVar1 != pwVar5) {
    *plVar4 = (longlong)pwVar5;
    if (pwVar5 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar5 + 8))(pwVar5);
    }
    pwVar5 = local_58;
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
      pwVar5 = local_58;
    }
  }
  *(undefined4 *)(plVar4 + 1) = local_50;
  if (pwVar5 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar5 + 0x10))(pwVar5);
  }
  FUN_1446f470e(&local_58,&DAT_149e06384,1);
  plVar4[2] = (longlong)local_58;
  plVar4 = (longlong *)FUN_145da4f3c(&local_68);
  cVar2 = FUN_144a7c5f6(param_6);
  if (cVar2 == '\0') {
    pwVar5 = (wchar_t *)*param_6;
    local_58 = pwVar5;
    if (pwVar5 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar5 + 8))(pwVar5);
    }
    local_50 = *(undefined4 *)(param_6 + 1);
  }
  else {
    local_58 = L"Dialog_No";
    local_50 = 9;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"OakDialogBox";
    local_50 = 0xc;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(&local_58,local_70,local_6c,&DAT_149e06338);
    pwVar5 = local_58;
  }
  pwVar1 = (wchar_t *)*plVar4;
  if (pwVar1 != pwVar5) {
    *plVar4 = (longlong)pwVar5;
    if (pwVar5 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar5 + 8))(pwVar5);
    }
    pwVar5 = local_58;
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
      pwVar5 = local_58;
    }
  }
  *(undefined4 *)(plVar4 + 1) = local_50;
  if (pwVar5 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar5 + 0x10))(pwVar5);
  }
  FUN_1446f470e(&local_58,&DAT_149e06338,1);
  plVar4[2] = (longlong)local_58;
  local_80 = 1;
  local_88 = 0;
  local_90 = 0;
  local_98 = param_4;
  uVar3 = FUN_1459dd948(param_1,param_2,param_3,&local_68);
  FUN_140e0067b(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14615e534 FUN_14615e534 body=406 status=ok
// SIG undefined FUN_14615e534(void)

undefined8 * FUN_14615e534(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ad027c0;
  param_1[0x72] = &PTR_LAB_14ad02e00;
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3b4) = *(byte *)((longlong)param_1 + 0x3b4) & 0xc0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(uint *)((longlong)param_1 + 0x3bc) = *(uint *)((longlong)param_1 + 0x3bc) & 0xfffffff8 | 2;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  FUN_1446f470e(&local_38,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_50 = 0;
  local_58 = CONCAT71(local_58._1_7_,1);
  lVar2 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  FUN_1446ddc76(&local_40,"AnimationPlayer",1);
  local_58 = FUN_1458bc26a();
  local_48 = 0;
  local_50 = 1;
  lVar2 = FUN_140486aac(param_2,param_1,local_40,local_58);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x78] = lVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615e6cc FUN_14615e6cc body=23 status=ok
// SIG undefined FUN_14615e6cc(void)

undefined8 FUN_14615e6cc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14615e6fc FUN_14615e6fc body=186 status=ok
// SIG undefined FUN_14615e6fc(void)

void FUN_14615e6fc(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_14615e74d;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_14615e74d:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_14615e794;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_14615e794:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14615e7b6 FUN_14615e7b6 body=450 status=ok
// SIG undefined FUN_14615e7b6(void)

ulonglong FUN_14615e7b6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (1 < (int)param_1[1])) {
    FUN_140810f5e(&local_30);
    iVar2 = (int)param_1[1];
    if (iVar2 == local_28) {
      bVar10 = true;
      if (1 < iVar2) {
        lVar6 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*param_1 + lVar6);
          uVar4 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(local_30 + lVar6);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_14615e891;
LAB_14615e936:
          lVar6 = lVar6 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar9 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_14615e936;
        }
        if (uVar5 != uVar7) goto LAB_14615e80d;
      }
    }
    else if (local_28 + iVar2 == 1) {
      bVar10 = true;
    }
    else {
LAB_14615e80d:
      FUN_14615e97a(&local_40);
      iVar2 = (int)param_1[1];
      if (iVar2 == local_38) {
        if (iVar2 < 2) {
          bVar10 = true;
        }
        else {
          lVar6 = 0;
          while( true ) {
            uVar5 = *(ushort *)(*param_1 + lVar6);
            uVar1 = (uint)uVar5;
            uVar7 = *(ushort *)(local_40 + lVar6);
            uVar8 = (uint)uVar7;
            if (uVar5 != uVar7) {
              if ((uVar7 | uVar5) < 0x80) {
                uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_14615e857;
              }
              iVar2 = uVar1 - uVar8;
              goto LAB_14615e882;
            }
            if (uVar5 == 0) break;
LAB_14615e857:
            lVar6 = lVar6 + 2;
          }
          iVar2 = 0;
LAB_14615e882:
          bVar10 = iVar2 == 0;
        }
      }
      else {
        bVar10 = local_38 + iVar2 == 1;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
LAB_14615e891:
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (bVar10) goto LAB_14615e8d5;
    lVar6 = *(longlong *)(param_2 + 0x170);
    if (lVar6 != 0) {
      lVar3 = FUN_14592c82e();
      lVar6 = *(longlong *)(lVar6 + 0x10);
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) goto LAB_14615e8d5;
    }
  }
  uVar4 = 0;
LAB_14615e8d5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14615e97a FUN_14615e97a body=176 status=ok
// SIG undefined FUN_14615e97a(void)

undefined8 * FUN_14615e97a(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14117e474();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto LAB_14615ea10;
  }
  lVar3 = FUN_14117e474();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x70);
    _Src = *(void **)(lVar4 + 0x68);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
LAB_14615ea10:
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 14615ea2a FUN_14615ea2a body=316 status=ok
// SIG undefined FUN_14615ea2a(void)

undefined4 * FUN_14615ea2a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14615ec48(param_1,local_48);
  FUN_14615ebd6(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14615eb68(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14615ed30(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615eb68 FUN_14615eb68 body=109 status=ok
// SIG undefined FUN_14615eb68(void)

undefined8 FUN_14615eb68(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_148ab42a0(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_1460ad20e(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1460ad25a(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 14615ebd6 FUN_14615ebd6 body=113 status=ok
// SIG undefined FUN_14615ebd6(void)

undefined8 * FUN_14615ebd6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14615ec48 FUN_14615ec48 body=231 status=ok
// SIG undefined FUN_14615ec48(void)

int * FUN_14615ec48(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14615ed30 FUN_14615ed30 body=485 status=ok
// SIG undefined FUN_14615ed30(void)

void FUN_14615ed30(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615ef16 FUN_14615ef16 body=400 status=ok
// SIG undefined FUN_14615ef16(void)

undefined8 FUN_14615ef16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [24];
  longlong local_50;
  undefined8 local_48;
  int iStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = 0;
  local_48 = 0xffffffff00000000;
  FUN_14615f0a8(local_68);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0x1a8);
  lVar2 = (longlong)local_70;
  pvVar1 = *(void **)(param_1 + 0x1a0);
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar2 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_1 + 0x1b8);
  lVar2 = (longlong)local_80;
  pvVar1 = *(void **)(param_1 + 0x1b0);
  if (lVar2 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar2 * 2);
  }
  local_98 = &local_50;
  local_a8 = 0;
  local_a0 = local_68;
  FUN_14615f0cc(param_2,&local_88,param_3,&local_78);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((iStack_44 != -1) && (local_50 != 0)) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f0a8 FUN_14615f0a8 body=35 status=ok
// SIG undefined FUN_14615f0a8(void)

void FUN_14615f0a8(undefined8 *param_1)

{
  *param_1 = 0x5a00000a8c;
  param_1[1] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14615f0cc FUN_14615f0cc body=192 status=ok
// SIG undefined FUN_14615f0cc(void)

undefined8 *
FUN_14615f0cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 *param_6,longlong param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0x5a00000a8c;
  param_1[10] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_144a787a6(param_1 + 4);
  FUN_144a787a6(param_1 + 2,param_3);
  FUN_144a787a6(param_1,param_4);
  *(undefined1 *)(param_1 + 8) = param_5;
  param_1[0xb] = *(undefined8 *)(param_6 + 4);
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 9) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  if (*(int *)(param_7 + 0xc) != -1) {
    FUN_144a787a6(param_1 + 6,param_7);
  }
  return param_1;
}



// FUNCTION 14615f18c FUN_14615f18c body=36 status=ok
// SIG undefined FUN_14615f18c(void)

void FUN_14615f18c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14ba38d40;
  FUN_14615f1b0();
  return;
}



// FUNCTION 14615f1b0 FUN_14615f1b0 body=382 status=ok
// SIG undefined FUN_14615f1b0(void)

void FUN_14615f1b0(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar2 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_149e001f0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_149e00260;
  puVar2[3] = FUN_14437e1de;
  local_58 = 0;
  (**(code **)(*plVar1 + 0xa8))
            (plVar1,L"PrintHdr10PlusDevices",
             L"Prints the information of the detected displays (all -1 | specific >0).",&local_48);
  FUN_1449db362(&local_48);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar2 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_149e001f0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_149e00260;
  puVar2[3] = FUN_14437e25c;
  local_58 = 0;
  (**(code **)(*plVar1 + 0xa8))
            (plVar1,L"r.Hdr10Plus.Enable",L"Turn on/off HDR10+\n 0 Turn off\n1 Turn on\n",&local_48)
  ;
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f330 FUN_14615f330 body=617 status=ok
// SIG undefined FUN_14615f330(void)

void FUN_14615f330(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  ulonglong local_58;
  longlong local_50;
  code *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 != '\0') {
    plVar1 = param_1 + -6;
    if (DAT_14cbd6bb0 == '\x01') {
      lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
        lVar3 = FUN_1400d6ce6();
        if (lVar3 != 0) {
          local_48 = FUN_148e382be;
          local_40 = local_40 & 0xffffffff00000000;
          FUN_148e381be(lVar3 + 400,&local_50,plVar1,&local_48);
          local_48 = FUN_148e38702;
          local_40 = local_40 & 0xffffffff00000000;
          FUN_148e38602(lVar3 + 0x160,&local_50,plVar1,&local_48);
        }
      }
    }
    lVar3 = FUN_1400d7050(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        local_48 = FUN_141206a28;
        local_40 = local_40 & 0xffffffff00000000;
        FUN_14615f724(lVar3 + 0xdd0,&local_50,plVar1);
        param_1[0x3f] = local_50;
        lVar3 = *(longlong *)(lVar3 + 0xf40);
        if (lVar3 != 0) {
          FUN_1401073f6(lVar3 + 0x5fc0,plVar1);
          FUN_1412a3650(&local_58);
          local_48 = (code *)0x0;
          FUN_14485c47a(&local_48,plVar1);
          local_40 = local_58;
          FUN_14113f0c0(&local_48);
          FUN_14053c012(lVar3 + 0x5fc0,&local_48);
          local_48 = FUN_145879d26;
          local_40 = local_40 & 0xffffffff00000000;
          FUN_14615f824(lVar3 + 0x7790,&local_50,plVar1,&local_48);
          FUN_145881e1a(&local_60);
          FUN_14615f69a(lVar3 + 0x3d4,plVar1,local_60);
          local_48 = FUN_1461c7490;
          local_40 = local_40 & 0xffffffff00000000;
          FUN_14615f59a(lVar3 + 0x6090,&local_50,plVar1,&local_48);
          local_48 = FUN_1461c7490;
          local_40 = local_40 & 0xffffffff00000000;
          FUN_14615f59a(lVar3 + 0x60a8,&local_50,plVar1,&local_48);
          FUN_14615f924(plVar1);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f59a FUN_14615f59a body=254 status=ok
// SIG undefined FUN_14615f59a(void)

undefined8
FUN_14615f59a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b422d40;
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
  *local_48 = &PTR_FUN_14b9aed40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14591eb98(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f69a FUN_14615f69a body=137 status=ok
// SIG undefined FUN_14615f69a(void)

void FUN_14615f69a(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1410d8386(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x3d4,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f724 FUN_14615f724 body=254 status=ok
// SIG undefined FUN_14615f724(void)

undefined8
FUN_14615f724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9aea30;
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
  *local_48 = &PTR_FUN_14b9aec60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14598e72a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f824 FUN_14615f824 body=254 status=ok
// SIG undefined FUN_14615f824(void)

undefined8
FUN_14615f824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b96ec30;
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
  *local_48 = &PTR_FUN_14b9aecd0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f50c4e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615f924 FUN_14615f924 body=1178 status=ok
// SIG undefined FUN_14615f924(void)

void FUN_14615f924(longlong param_1)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_1405d1fee(param_1 + 0x30);
  if (lVar7 != 0) {
    lVar8 = FUN_144a2f878();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      FUN_140d128b6(param_1,&local_50);
      lVar8 = local_50;
      SRWLock = (PSRWLOCK)(local_50 + 0x638);
      AcquireSRWLockExclusive(SRWLock);
      plVar2 = local_48;
      *(int *)(lVar8 + 0x630) = *(int *)(lVar8 + 0x630) + 1;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      FUN_140bb46a8(param_1,&local_50);
      lVar5 = local_50;
      SRWLock_00 = (PSRWLOCK)(local_50 + 0x638);
      AcquireSRWLockExclusive(SRWLock_00);
      *(int *)(lVar5 + 0x630) = *(int *)(lVar5 + 0x630) + 1;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)local_48 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      uVar6 = FUN_1415ef101();
      if (((int)uVar6 < 0) || (*(int *)(lVar7 + 0x78f0) <= (int)uVar6)) {
        lVar9 = 0;
      }
      else {
        lVar9 = (ulonglong)uVar6 * 0x48 + *(longlong *)(lVar7 + 0x78e8);
      }
      FUN_14128ad8c(&local_58,lVar9);
      uVar4 = local_58;
      FUN_1400b22c2(&local_50,"classmod");
      FUN_14128ab18(lVar8,&local_50,uVar4);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_50,"classmod");
      FUN_14128ab18(lVar5,&local_50,local_58);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_141526213();
      if (((int)uVar6 < 0) || (*(int *)(lVar7 + 0x78f0) <= (int)uVar6)) {
        lVar9 = 0;
      }
      else {
        lVar9 = (ulonglong)uVar6 * 0x48 + *(longlong *)(lVar7 + 0x78e8);
      }
      FUN_14128ad8c(&local_60,lVar9);
      uVar4 = local_60;
      FUN_1400b22c2(&local_50,"enhancement");
      FUN_14128ab18(lVar8,&local_50,uVar4);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_50,"enhancement");
      FUN_14128ab18(lVar5,&local_50,local_60);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_140232fad();
      if (((int)uVar6 < 0) || (*(int *)(lVar7 + 0x78f0) <= (int)uVar6)) {
        lVar9 = 0;
      }
      else {
        lVar9 = (ulonglong)uVar6 * 0x48 + *(longlong *)(lVar7 + 0x78e8);
      }
      FUN_14128ad8c(&local_68,lVar9);
      uVar4 = local_68;
      FUN_1400b22c2(&local_50,"repair_kit");
      FUN_14128ab18(lVar8,&local_50,uVar4);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_50,"repair_kit");
      FUN_14128ab18(lVar5,&local_50,local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_1401902e2();
      if (((int)uVar6 < 0) || (*(int *)(lVar7 + 0x78f0) <= (int)uVar6)) {
        lVar9 = 0;
      }
      else {
        lVar9 = (ulonglong)uVar6 * 0x48 + *(longlong *)(lVar7 + 0x78e8);
      }
      FUN_14128ad8c(&local_70,lVar9);
      uVar4 = local_70;
      FUN_1400b22c2(&local_50,"shield");
      FUN_14128ab18(lVar8,&local_50,uVar4);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_50,"shield");
      FUN_14128ab18(lVar5,&local_50,local_70);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_1403ae46b();
      if (((int)uVar6 < 0) || (*(int *)(lVar7 + 0x78f0) <= (int)uVar6)) {
        lVar7 = 0;
      }
      else {
        lVar7 = (ulonglong)uVar6 * 0x48 + *(longlong *)(lVar7 + 0x78e8);
      }
      FUN_14128ad8c(&local_78,lVar7);
      uVar4 = local_78;
      FUN_1400b22c2(&local_50,"gadget");
      FUN_14128ab18(lVar8,&local_50,uVar4);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_50,"gadget");
      FUN_14128ab18(lVar5,&local_50,local_78);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      ReleaseSRWLockExclusive(SRWLock_00);
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615fdc0 FUN_14615fdc0 body=40 status=ok
// SIG undefined FUN_14615fdc0(void)

undefined8 FUN_14615fdc0(undefined8 param_1,int param_2)

{
  FUN_14615fde8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14615fde8 FUN_14615fde8 body=380 status=ok
// SIG undefined FUN_14615fde8(void)

void FUN_14615fde8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9a79a0;
  param_1[5] = &PTR_FUN_14a9a7e10;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145b04cda(param_1);
  return;
}



// FUNCTION 14615ff64 FUN_14615ff64 body=24 status=ok
// SIG undefined FUN_14615ff64(void)

void FUN_14615ff64(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014615ff78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14615ff7c FUN_14615ff7c body=38 status=ok
// SIG undefined FUN_14615ff7c(void)

undefined8 FUN_14615ff7c(undefined8 param_1,int param_2)

{
  FUN_14615ffa2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14615ffa2 FUN_14615ffa2 body=402 status=ok
// SIG undefined FUN_14615ffa2(void)

void FUN_14615ffa2(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14ac8d630;
  plVar3 = param_1 + 4;
  puVar1 = param_1 + 6;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = puVar1;
  if (*(int *)(param_1 + 9) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 9);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar3;
  if ((iStack_4c != iVar7) || (local_58 != puVar1)) {
    do {
      lVar6 = *local_88;
      lVar5 = (longlong)iStack_6c;
      if ((*(longlong *)(lVar6 + 8 + lVar5 * 0x18) != 0) &&
         ((cVar4 = FUN_144729dda(), cVar4 != '\0' &&
          (plVar8 = (longlong *)(lVar6 + lVar5 * 0x18 + 8), lVar6 = FUN_14479d2ce(*plVar8),
          *(longlong *)(*plVar8 + 0x30) != 0)))) {
        FUN_14480f766(lVar6 + 0x2d0);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar7) || (local_78 != puVar1)) || (local_88 != plVar3));
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_146160136(plVar3);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146160136 FUN_146160136 body=53 status=ok
// SIG undefined FUN_146160136(void)

void FUN_146160136(longlong *param_1)

{
  FUN_14616016c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14616016c FUN_14616016c body=321 status=ok
// SIG undefined FUN_14616016c(void)

void FUN_14616016c(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 1461602ae FUN_1461602ae body=38 status=ok
// SIG undefined FUN_1461602ae(void)

undefined8 FUN_1461602ae(undefined8 param_1,int param_2)

{
  FUN_1461602d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461602d4 FUN_1461602d4 body=382 status=ok
// SIG undefined FUN_1461602d4(void)

void FUN_1461602d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b905dd0;
  if ((longlong *)param_1[0x5d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5d] + 0x10))();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x41] + 0x10))();
  }
  if ((longlong *)param_1[0x3f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3f] + 0x10))();
  }
  if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3d] + 0x10))();
  }
  if ((longlong *)param_1[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x10))();
  }
  if ((longlong *)param_1[0x36] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x36] + 0x10))();
  }
  if ((longlong *)param_1[0x34] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x34] + 0x10))();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 146160452 FUN_146160452 body=385 status=ok
// SIG undefined FUN_146160452(void)

undefined4 * FUN_146160452(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14616064a(local_48);
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  *(undefined8 *)(local_40 + 4) = 0;
  iVar12 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  local_40[6] = iVar12;
  if ((longlong)iVar12 == 0) {
    local_40[7] = 0;
  }
  else {
    FUN_1446dd670(local_40 + 4,iVar12,0);
    memcpy(*(void **)(local_40 + 4),_Src,(longlong)iVar12 * 2);
  }
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = FUN_1447addd0(local_40,0x10);
  cVar7 = FUN_1461605d4(uVar8,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = DAT_14ca80470 - DAT_14ca8049c;
    iVar12 = 1;
    if (3 < uVar9) {
      uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= DAT_14ca804b0)) {
      uVar8 = DAT_14ca804b0 - 1U & uVar8;
      local_40[9] = uVar8;
      puVar10 = DAT_14ca804a8;
      if (DAT_14ca804a8 == (undefined *)0x0) {
        puVar10 = &DAT_14ca804a0;
      }
      local_40[8] = *(undefined4 *)
                     (puVar10 + ((longlong)DAT_14ca804b0 - 1U & (longlong)(int)uVar8) * 4);
      puVar10 = DAT_14ca804a8;
      if (DAT_14ca804a8 == (undefined *)0x0) {
        puVar10 = &DAT_14ca804a0;
      }
      *(undefined4 *)(puVar10 + ((longlong)DAT_14ca804b0 - 1U & (longlong)(int)uVar8) * 4) =
           local_4c;
    }
    else {
      DAT_14ca804b0 = iVar12;
      FUN_146160758();
    }
  }
  *param_1 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461605d4 FUN_1461605d4 body=117 status=ok
// SIG undefined FUN_1461605d4(void)

undefined8 FUN_1461605d4(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if ((DAT_14ca80470 - DAT_14ca8049c != 1) && (iVar9 = FUN_147409e46(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(DAT_14ca80468 + (longlong)iVar9 * 0x28);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14740e578(*param_3);
    *param_3 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 14616064a FUN_14616064a body=270 status=ok
// SIG undefined FUN_14616064a(void)

int * FUN_14616064a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca80498;
  iVar3 = DAT_14ca80470;
  if (DAT_14ca8049c == 0) {
    iVar2 = DAT_14ca80470 + 1;
    bVar7 = DAT_14ca80474 == DAT_14ca80470;
    DAT_14ca80470 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14ca80468,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14ca80478,1);
    puVar4 = DAT_14ca80488;
    if (DAT_14ca80488 == (undefined *)0x0) {
      puVar4 = &DAT_14ca80478;
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
    lVar6 = (longlong)DAT_14ca80498;
    DAT_14ca80498 = *(int *)(DAT_14ca80468 + 4 + lVar6 * 0x28);
    DAT_14ca8049c = DAT_14ca8049c + -1;
    if (DAT_14ca8049c != 0) {
      *(undefined4 *)(DAT_14ca80468 + (longlong)DAT_14ca80498 * 0x28) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14ca80478;
  if (DAT_14ca80488 != (undefined *)0x0) {
    puVar4 = DAT_14ca80488;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14ca80468;
  return param_1;
}



// FUNCTION 146160758 FUN_146160758 body=487 status=ok
// SIG undefined FUN_146160758(void)

void FUN_146160758(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14ca804a8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca804a8,0,0,4);
  }
  uVar2 = DAT_14ca804b0;
  uVar3 = local_58;
  if (DAT_14ca804b0 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14ca804a0,0,DAT_14ca804b0,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14ca804a8;
        if (DAT_14ca804a8 == (undefined *)0x0) {
          puVar7 = &DAT_14ca804a0;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14ca804b0 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_48 = 0x100000000;
    local_40 = &DAT_14ca80478;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (DAT_14ca80490 != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = &DAT_14ca80468;
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    if (local_58._4_4_ < *(int *)(local_40 + 0x18)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar1 = *local_70 + (longlong)iVar4 * 0x28;
        iVar5 = FUN_1447addd0(lVar1,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14ca804b0 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x24) = iVar5;
        puVar7 = DAT_14ca804a8;
        if (DAT_14ca804a8 == (undefined *)0x0) {
          puVar7 = &DAT_14ca804a0;
        }
        *(undefined4 *)(lVar1 + 0x20) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14ca804b0 - 1U & uVar6) * 4);
        puVar7 = DAT_14ca804a8;
        if (DAT_14ca804a8 == (undefined *)0x0) {
          puVar7 = &DAT_14ca804a0;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14ca804b0 - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x18));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146160940 FUN_146160940 body=414 status=ok
// SIG undefined FUN_146160940(void)

void FUN_146160940(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
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
  local_48 = local_34;
  FUN_146160ae0(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146160ae0 FUN_146160ae0 body=197 status=ok
// SIG undefined FUN_146160ae0(void)

void FUN_146160ae0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar2 = FUN_144a78b9e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_30 = 0;
      FUN_14485c47a(&local_30,param_3);
      local_28 = local_30;
      iVar1 = FUN_145714f92(param_1 + 0x3a8,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
      if (iVar1 != -1) {
        local_38 = 0;
        FUN_14485c47a(&local_38,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146160bc0 FUN_146160bc0 body=413 status=ok
// SIG undefined FUN_146160bc0(void)

undefined8 * FUN_146160bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14a6c8be0;
  param_1[5] = &PTR_FUN_14a6c9060;
  param_1[6] = &PTR_LAB_14a6c90a0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x43c80000;
  *(undefined1 *)((longlong)param_1 + 0x124) = DAT_14cafa558;
  *(undefined1 *)((longlong)param_1 + 300) = DAT_14cafa559;
  *(undefined1 *)((longlong)param_1 + 0x134) = DAT_14c76190c;
  FUN_1458e26da(param_1 + 0x27);
  param_1[0x37] = 0xa00000000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = DAT_14cafa568;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = DAT_14cafa569;
  *(undefined1 *)((longlong)param_1 + 500) = DAT_14c761932;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = DAT_14c761934;
  *(undefined4 *)((longlong)param_1 + 0x204) = DAT_14c761938;
  *(undefined4 *)((longlong)param_1 + 0x20c) = DAT_14c76193c;
  *(undefined4 *)((longlong)param_1 + 0x214) = DAT_14c761940;
  *(undefined2 *)((longlong)param_1 + 0x21c) = DAT_14caf7c70;
  *(undefined2 *)((longlong)param_1 + 0x224) = DAT_14caf7c74;
  *(undefined1 *)((longlong)param_1 + 0x22c) = DAT_14caf7c78;
  *(undefined1 *)((longlong)param_1 + 0x234) = DAT_14caf7c79;
  *(undefined1 *)((longlong)param_1 + 0x23c) = DAT_14c761824;
  *(undefined1 *)((longlong)param_1 + 0x244) = DAT_14caf7c7a;
  *(undefined1 *)((longlong)param_1 + 0x24c) = DAT_14caf7c7b;
  *(undefined1 *)((longlong)param_1 + 0x254) = DAT_14c761825;
  *(undefined1 *)((longlong)param_1 + 0x25c) = DAT_14caf7c7c;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  return param_1;
}



// FUNCTION 146160d5e FUN_146160d5e body=205 status=ok
// SIG undefined FUN_146160d5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146160d5e(void)

{
  if ((DAT_14caef907 & 2) == 0) {
    DAT_14caef907 = DAT_14caef907 | 2;
    _DAT_14caef8a8 = L"FMaterialProcessedSource";
    _DAT_14caef8c0 = FUN_146826540;
    _DAT_14caef8c8 = FUN_146825d77;
    _DAT_14caef8d0 = FUN_146825fd6;
    _DAT_14caef8d8 = FUN_1407e02ea;
    _DAT_14caef8e0 = FUN_146826273;
    _DAT_14caef8b8 = FUN_147bc0022;
    _DAT_14caef8f8 = 0xffffffff00000018;
    _DAT_14caef900 = 8;
    DAT_14caef904 = 0;
    _DAT_14caef8e8 = &LAB_147bc0064;
    FUN_146160e2c();
    FUN_1407e00cc(&DAT_14caef8a0);
    return;
  }
  return;
}



// FUNCTION 146160e2c FUN_146160e2c body=216 status=ok
// SIG undefined FUN_146160e2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146160e2c(void)

{
  _DAT_14caf0a60 = L"Source";
  DAT_14caf0a8a = FUN_140850cc5();
  _DAT_14caf0a68 = FUN_145790020();
  _DAT_14caf0a78 = &LAB_14682652b;
  _DAT_14caf0a80 = &DAT_100000008;
  _DAT_14caf0a88 = 0;
  _DAT_14caf0a70 = DAT_14caef8b0;
  DAT_14caef8b0 = &DAT_14caf0a60;
  _DAT_14caf0a30 = L"Name";
  DAT_14caf0a5a = FUN_140850cc5();
  _DAT_14caf0a38 = FUN_1457fb358();
  _DAT_14caf0a48 = &LAB_14682652b;
  _DAT_14caf0a50 = 0x100000000;
  _DAT_14caf0a58 = 0;
  _DAT_14caf0a40 = DAT_14caef8b0;
  DAT_14caef8b0 = &DAT_14caf0a30;
  return;
}



// FUNCTION 146160f04 FUN_146160f04 body=37 status=ok
// SIG undefined FUN_146160f04(void)

void FUN_146160f04(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa20);
  FUN_146160f2a(param_2);
  return;
}



// FUNCTION 146160f2a FUN_146160f2a body=140 status=ok
// SIG undefined FUN_146160f2a(void)

undefined8 * FUN_146160f2a(undefined8 *param_1)

{
  FUN_1411b9bf0();
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b632940;
  FUN_146160fb6(param_1 + 0x32);
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  return param_1;
}



// FUNCTION 146160fb6 FUN_146160fb6 body=244 status=ok
// SIG undefined FUN_146160fb6(void)

undefined8 * FUN_146160fb6(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  FUN_14112fbd2(param_1 + 7);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_14112fbd2(param_1 + 0x56);
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  FUN_14112fbd2(param_1 + 0xa5);
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 10;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0xf00000d0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x40000000;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0xf00000d0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0x3f800000;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  return param_1;
}



// FUNCTION 1461610aa FUN_1461610aa body=954 status=ok
// SIG undefined FUN_1461610aa(void)

void FUN_1461610aa(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  undefined2 *puVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  uint local_fc;
  int local_f8;
  undefined1 local_f2;
  char local_f1;
  uint local_f0;
  uint local_ec;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int local_d0;
  uint local_c8;
  uint local_c4;
  longlong local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1415ef1f0(0);
  FUN_140056680(&local_d8,L"/Script/Engine.Engine");
  FUN_140056680(&local_e8,L"/Script/Engine.GameUserSettings");
  puVar3 = &DAT_149dfb77a;
  if (local_d0 != 0) {
    puVar3 = local_d8;
  }
  local_108 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,puVar3,L"GameUserSettingsClassName",&local_e8);
  uVar5 = DAT_14c967818;
  local_ec = (uint)DAT_14c967818;
  uVar6 = DAT_14c967818 >> 0x20;
  local_f0 = (uint)(DAT_14c967818 >> 0x20);
  local_f1 = '\0';
  local_f2 = 0;
  local_f8 = 0;
  puVar3 = &DAT_149dfb77a;
  if (local_e0 != 0) {
    puVar3 = local_e8;
  }
  local_108 = &DAT_14c872b08;
  cVar2 = FUN_1414d73b6(DAT_14c872ce0,puVar3,L"Version",&local_f8);
  cVar4 = '\x01';
  if ((cVar2 != '\0') && (local_f8 == 6)) {
    puVar3 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar3 = local_e8;
    }
    local_108 = &DAT_14c872b08;
    FUN_14052bb08(DAT_14c872ce0,puVar3,L"bUseDesktopResolution",&local_f1);
    local_fc = 1;
    puVar3 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar3 = local_e8;
    }
    local_108 = &DAT_14c872b08;
    FUN_1414d73b6(DAT_14c872ce0,puVar3,L"FullscreenMode",&local_fc);
    uVar1 = local_fc;
    cVar4 = (local_fc != 1) + '\x01';
    if (local_fc == 0) {
      cVar4 = '\0';
    }
    puVar3 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar3 = local_e8;
    }
    local_108 = &DAT_14c872b08;
    FUN_1414d73b6(DAT_14c872ce0,puVar3,L"ResolutionSizeX",&local_ec);
    puVar3 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar3 = local_e8;
    }
    local_108 = &DAT_14c872b08;
    FUN_1414d73b6(DAT_14c872ce0,puVar3,L"ResolutionSizeY",&local_f0);
    uVar5 = (ulonglong)local_ec;
    uVar6 = (ulonglong)local_f0;
    if ((((uVar1 < 2) && (local_f1 != '\0')) && (local_ec == 0)) && (local_f0 == 0)) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_140c2d49a(&local_c8);
      uVar5 = (ulonglong)local_c8;
      uVar6 = (ulonglong)local_c4;
      FUN_140ecb711(local_c0,uStack_b8 & 0xffffffff);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
    puVar3 = local_e8;
    if (local_e0 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    local_108 = &DAT_14c872b08;
    FUN_14052bb08(DAT_14c872ce0,puVar3,L"bUseHDRDisplayOutput",&local_f2);
  }
  cVar2 = FUN_146161cb3();
  if (cVar2 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cadb870) && (FUN_144b3d300(&DAT_14cadb870), DAT_14cadb870 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadb868 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.EnableHDROutput",1);
      _Init_thread_footer(&DAT_14cadb870);
    }
    if (DAT_14cadb868 != 0) {
      FUN_140635eb8(DAT_14cadb868,local_f2,0x2000000,0);
    }
  }
  FUN_146161466(uVar5 & 0xffffffff,uVar6,cVar4,param_1);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146161466 FUN_146161466 body=111 status=ok
// SIG undefined FUN_146161466(void)

void FUN_146161466(ulonglong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  undefined1 auStack_58 [44];
  uint local_2c;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = (uint)param_3;
  local_28 = (uint)param_2;
  local_2c = (uint)param_1;
  if (param_4 != '\0') {
    FUN_1461615d0(&local_2c,&local_28,&local_24);
    param_3 = (ulonglong)local_24;
    param_2 = (ulonglong)local_28;
    param_1 = (ulonglong)local_2c;
  }
  FUN_1461614d6(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461614d6 FUN_1461614d6 body=248 status=ok
// SIG undefined FUN_1461614d6(void)

void FUN_1461614d6(undefined4 param_1,undefined4 param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_58 = &DAT_149dfb77a;
  if (param_3 < 3) {
    FUN_14020fad6(&local_38,(&PTR_DAT_14aae75b8)[param_3]);
    local_58 = local_38;
    if ((int)uStack_30 == 0) {
      local_58 = &DAT_149dfb77a;
    }
  }
  FUN_140002266(&local_48,L"%dx%d%s",param_1,param_2);
  plVar1 = DAT_14cb0cb58;
  puVar3 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  uVar2 = (**(code **)(*DAT_14cb0cb58 + 0x18))(DAT_14cb0cb58);
  (**(code **)(*plVar1 + 0x98))(plVar1,puVar3,uVar2 & 0xff000000,0);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461615d0 FUN_1461615d0 body=621 status=ok
// SIG undefined FUN_1461615d0(void)

void FUN_1461615d0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"Windowed");
  uVar5 = 2;
  if (cVar2 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"SimMobile");
    if (cVar2 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar2 = FUN_14054d46e(&DAT_14c846b20,L"FullScreen");
      if (cVar2 == '\0') goto LAB_14616164e;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cad8c70) {
        FUN_144b3d300(&DAT_14cad8c70);
        if (DAT_14cad8c70 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar4 = (longlong *)
                   (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FullScreenMode",1);
          if (plVar4 == (longlong *)0x0) {
            DAT_14cad8c68 = (int *)0x0;
          }
          else {
            DAT_14cad8c68 = (int *)(**(code **)(*plVar4 + 0x68))(plVar4);
          }
          _Init_thread_footer(&DAT_14cad8c70);
        }
      }
      iVar1 = *DAT_14cad8c68;
      *param_3 = (uint)(iVar1 != 0);
      if (iVar1 != 0) goto LAB_14616164e;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cad8c78) {
        FUN_144b3d300(&DAT_14cad8c78);
        if (DAT_14cad8c78 == -1) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar2 = FUN_14054d46e(&DAT_14c846b20,L"d3d12");
          cVar3 = '\x01';
          if (cVar2 == '\0') {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            cVar3 = FUN_14054d46e(&DAT_14c846b20,&DAT_14a3816b6);
          }
          DAT_14cad8c74 = cVar3;
          _Init_thread_footer(&DAT_14cad8c78);
        }
      }
      uVar5 = 1;
      if (DAT_14cad8c74 != '\x01') goto LAB_14616164e;
    }
  }
  *param_3 = uVar5;
LAB_14616164e:
  FUN_14616183e(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14616183e FUN_14616183e body=1140 status=ok
// SIG undefined FUN_14616183e(void)

void FUN_14616183e(int *param_1,int *param_2,int *param_3,byte param_4)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulonglong local_e8;
  undefined8 uStack_e0;
  int local_cc;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int local_b4;
  longlong local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_f8 = 0;
  cVar2 = FUN_14063337c(&DAT_14c846b20,L"Res=",&local_c8,1);
  if (cVar2 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_141369f9a(&DAT_14c846b20,L"ResX=",param_1);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_141369f9a(&DAT_14c846b20,L"ResY=",param_2);
    if (cVar2 == '\x01' && cVar3 == '\0') {
      *param_2 = (int)((float)*param_1 / 1.7777778);
    }
    else if (cVar2 == '\0' && cVar3 == '\x01') {
      *param_1 = (int)((float)*param_2 * 1.7777778);
    }
  }
  else {
    local_b8 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    local_cc = 2;
    puVar6 = local_c8;
    if ((int)uStack_c0 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    cVar2 = FUN_140decd29(puVar6,&local_b8,&local_e8,&local_cc);
    if (cVar2 != '\0') {
      *param_1 = local_b8;
      *param_2 = (int)local_e8;
      iVar5 = (local_cc != 1) + 1;
      if (local_cc == 0) {
        iVar5 = 0;
      }
      *param_3 = iVar5;
    }
  }
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (DAT_14c98e618 == (longlong *)0x0) {
    FUN_140c2d49a(&local_b8);
  }
  else {
    (**(code **)(*DAT_14c98e618 + 0x1c8))(DAT_14c98e618,&local_b8);
  }
  iVar5 = local_b8;
  iVar7 = local_b4;
  if ((*param_3 == 2 & param_4) != 0) {
    iVar5 = (int)uStack_98 - (int)local_a0;
    iVar7 = uStack_98._4_4_ - local_a0._4_4_;
  }
  if (*param_3 == 0) {
    if (0 < (longlong)(int)uStack_a8) {
      iVar5 = *(int *)(local_b0 + 0x20);
      iVar7 = *(int *)(local_b0 + 0x24);
      lVar4 = 0;
      do {
        if (*(char *)(local_b0 + 0x50 + lVar4) == '\x01') {
          iVar5 = *(int *)(local_b0 + 0x28 + lVar4);
          if ((iVar5 == 0) || (iVar7 = *(int *)(local_b0 + 0x2c + lVar4), iVar7 == 0)) {
            iVar5 = *(int *)(local_b0 + 0x20 + lVar4);
            iVar7 = *(int *)(local_b0 + 0x24 + lVar4);
          }
          break;
        }
        lVar4 = lVar4 + 0x58;
      } while ((longlong)(int)uStack_a8 * 0x58 - lVar4 != 0);
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"ForceRes");
  if ((cVar2 == '\0') &&
     ((((*param_1 < 1 || (iVar5 < *param_1)) || (*param_2 < 1)) || (iVar7 < *param_2)))) {
    *param_1 = iVar5;
    *param_2 = iVar7;
    if (*param_3 == 2) {
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_147a9863a(&local_b8,&local_e8);
      lVar4 = (longlong)(int)uStack_e0;
      if (0 < lVar4) {
        *param_1 = *(int *)((local_e8 - 8) + lVar4 * 8);
        *param_2 = *(int *)((local_e8 - 4) + lVar4 * 8);
        do {
          if (lVar4 < 1) goto LAB_146161af8;
          iVar5 = *(int *)((local_e8 - 8) + lVar4 * 8);
          lVar1 = lVar4 * 8;
          lVar4 = lVar4 + -1;
        } while (0.0001 <= ABS((float)iVar5 / (float)*(int *)((local_e8 - 4) + lVar1) -
                               (float)local_b8 / (float)local_b4));
        *param_1 = iVar5;
        *param_2 = *(int *)(local_e8 + 4 + lVar4 * 8);
      }
LAB_146161af8:
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"Portrait");
  if (cVar2 != '\0') {
    iVar5 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar5;
  }
  FUN_140ecb711(local_b0,uStack_a8 & 0xffffffff);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146161cb3 FUN_146161cb3 body=622 status=ok
// SIG undefined FUN_146161cb3(void)

bool FUN_146161cb3(void)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95224) {
    FUN_144b3d300(&DAT_14ca95224);
    if (DAT_14ca95224 == -1) {
      DAT_14ca95220 = FUN_146161f22();
      _Init_thread_footer(&DAT_14ca95224);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9522c) {
    FUN_144b3d300(&DAT_14ca9522c);
    if (DAT_14ca9522c == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca95228 = FUN_14054d46e(&DAT_14c846b20,&DAT_149ef6326);
      _Init_thread_footer(&DAT_14ca9522c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95234) {
    FUN_144b3d300(&DAT_14ca95234);
    if (DAT_14ca95234 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca95230 = FUN_14054d46e(&DAT_14c846b20,L"nohdr");
      _Init_thread_footer(&DAT_14ca95234);
    }
  }
  iVar2 = DAT_14ca95220;
  iVar4 = FUN_146161f22();
  if (iVar2 != iVar4) {
    DAT_14ca95220 = FUN_146161f22();
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca95228 = FUN_14054d46e(&DAT_14c846b20,&DAT_149ef6326);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca95230 = FUN_14054d46e(&DAT_14c846b20,L"nohdr");
  }
  lVar1 = DAT_14ca95158;
  if (DAT_14ca95228 == '\0') {
    if (DAT_14ca95230 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar3 ^ 1);
      }
      bVar6 = *(int *)(lVar1 + uVar5 * 4) != 0;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}



// FUNCTION 146161f22 FUN_146161f22 body=7 status=ok
// SIG undefined FUN_146161f22(void)

undefined4 FUN_146161f22(void)

{
  return DAT_14c846b18;
}



// FUNCTION 146161f2a FUN_146161f2a body=571 status=ok
// SIG undefined FUN_146161f2a(void)

void FUN_146161f2a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b896c50;
  plVar3 = (longlong *)param_1[0x45];
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
  plVar3 = (longlong *)param_1[0x43];
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
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d82dc(param_1 + 0x2d);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x10))();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_146162165(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 146162165 FUN_146162165 body=63 status=ok
// SIG undefined FUN_146162165(void)

void FUN_146162165(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1461621a4 FUN_1461621a4 body=158 status=ok
// SIG undefined FUN_1461621a4(void)

bool FUN_1461621a4(longlong param_1,undefined8 param_2)

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



// FUNCTION 14616224e FUN_14616224e body=147 status=ok
// SIG undefined FUN_14616224e(void)

void FUN_14616224e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x410);
  SRWLock = (PSRWLOCK)(lVar3 + 0x1b0);
  AcquireSRWLockExclusive(SRWLock);
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
  *(undefined1 *)(lVar3 + 0x118) = 0;
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461622e2 FUN_1461622e2 body=54 status=ok
// SIG undefined FUN_1461622e2(void)

void FUN_1461622e2(void)

{
  FUN_146162318();
  if (DAT_14cb70f90 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb70f70 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146162318 FUN_146162318 body=368 status=ok
// SIG undefined FUN_146162318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146162318(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb70f80;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb70f98 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb70f70;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)iStack_3c * 0x60) != 0) {
        lVar2 = *local_58 + (longlong)iStack_3c * 0x60;
        plVar1 = *(longlong **)(lVar2 + 0x20);
        plVar3 = (longlong *)(lVar2 + 0x30);
        if (plVar1 != (longlong *)0x0) {
          plVar3 = plVar1;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  _DAT_14cb70f78 = 0;
  if (DAT_14cb70f7c != 0) {
    FUN_1401283f4(&DAT_14cb70f70,0);
  }
  _DAT_14cb70fa0 = 0xffffffff;
  DAT_14cb70f98 = 0;
  if (0x80 < DAT_14cb70f9c) {
    DAT_14cb70f9c = 0x80;
    FUN_1446efbd8(&DAT_14cb70f80,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616248a FUN_14616248a body=365 status=ok
// SIG undefined FUN_14616248a(void)

undefined4 *
FUN_14616248a(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461626aa(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  *local_40 = *puVar1;
  lVar8 = puVar1[1];
  local_40[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *plVar2;
  local_40[2] = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = (**(code **)(*(longlong *)*local_40 + 0x90))();
  local_58 = param_4;
  cVar3 = FUN_1461625f8(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14616281a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461625f8 FUN_1461625f8 body=177 status=ok
// SIG undefined FUN_1461625f8(void)

void FUN_1461625f8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_1415ef528();
    if (iVar10 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar10 * 0x20);
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
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_146162790(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_146162676;
    }
  }
  uVar9 = 0;
LAB_146162676:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1461626aa FUN_1461626aa body=230 status=ok
// SIG undefined FUN_1461626aa(void)

int * FUN_1461626aa(longlong *param_1,int *param_2)

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



// FUNCTION 146162790 FUN_146162790 body=138 status=ok
// SIG undefined FUN_146162790(void)

void FUN_146162790(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14616281a FUN_14616281a body=457 status=ok
// SIG undefined FUN_14616281a(void)

void FUN_14616281a(longlong *param_1)

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
        iVar6 = (**(code **)(**(longlong **)(lVar3 + lVar10) + 0x90))();
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



// FUNCTION 1461629e4 FUN_1461629e4 body=188 status=ok
// SIG undefined FUN_1461629e4(void)

void FUN_1461629e4(longlong param_1)

{
  longlong lVar1;
  
  FUN_146162aa0(param_1 + 0x3e0);
  FUN_146162ae0(param_1 + 0x430);
  FUN_140e5127a(param_1 + 0x4d0,0);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_141356754();
  }
  FUN_146162dc4(*(undefined8 *)(param_1 + 0x858));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_147bcd424();
  }
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar1 = 0;
    do {
      FUN_147bcd424(*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < *(int *)(param_1 + 0x100));
  }
  if (*(longlong **)(param_1 + 0x830) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2c0))();
  }
  if (*(longlong *)(param_1 + 0x840) != 0) {
    FUN_146f4570c();
    return;
  }
  return;
}



// FUNCTION 146162aa0 FUN_146162aa0 body=63 status=ok
// SIG undefined FUN_146162aa0(void)

void FUN_146162aa0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146162b20(param_1);
    FUN_1413560b6(param_1);
    return;
  }
  FUN_1413560b6(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14164f3a2(param_1);
  return;
}



// FUNCTION 146162ae0 FUN_146162ae0 body=63 status=ok
// SIG undefined FUN_146162ae0(void)

void FUN_146162ae0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146162c70(param_1);
    FUN_141356290(param_1);
    return;
  }
  FUN_141356290(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140e4d1bc(param_1);
  return;
}



// FUNCTION 146162b20 FUN_146162b20 body=335 status=ok
// SIG undefined FUN_146162b20(void)

void FUN_146162b20(longlong *param_1)

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



// FUNCTION 146162c70 FUN_146162c70 body=339 status=ok
// SIG undefined FUN_146162c70(void)

void FUN_146162c70(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 146162dc4 FUN_146162dc4 body=351 status=ok
// SIG undefined FUN_146162dc4(void)

void FUN_146162dc4(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145a0c516(param_1 + 0x14,0);
  FUN_145a0c582(param_1 + 0x32,0);
  FUN_146162f24(param_1 + 10,param_1);
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_58 = local_30;
  iStack_54 = iStack_2c;
  local_50 = local_28;
  local_4c = local_24;
  local_68 = local_40;
  local_60 = local_38;
  local_70 = param_1;
  local_48 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      lVar1 = *(longlong *)(*local_70 + (longlong)iStack_54 * 0x18);
      FUN_14576eb0e(lVar1 + 0x30);
      FUN_14576eb0e(lVar1 + 0x80);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  FUN_145a0c5ee(param_1 + 0x28,0);
  FUN_145a0c65a(param_1 + 0x3c,0);
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146162f24 FUN_146162f24 body=120 status=ok
// SIG undefined FUN_146162f24(void)

longlong FUN_146162f24(longlong param_1,longlong param_2)

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
    FUN_146162f9c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146162f9c FUN_146162f9c body=223 status=ok
// SIG undefined FUN_146162f9c(void)

longlong * FUN_146162f9c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141355ae4(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14616309c FUN_14616309c body=52 status=ok
// SIG undefined FUN_14616309c(void)

void FUN_14616309c(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1461630d0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1461630d0 FUN_1461630d0 body=54 status=ok
// SIG undefined FUN_1461630d0(void)

void FUN_1461630d0(longlong param_1,int param_2)

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



// FUNCTION 146163106 FUN_146163106 body=54 status=ok
// SIG undefined FUN_146163106(void)

void FUN_146163106(void)

{
  FUN_14616313c();
  if (DAT_14cb83070 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb83050 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14616313c FUN_14616313c body=369 status=ok
// SIG undefined FUN_14616313c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14616313c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb83060;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb83078 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb83050;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < (int)local_38[6]) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x30;
      FUN_140bb299f(*(undefined8 *)(lVar1 + 0x10 + lVar2),*(undefined4 *)(lVar1 + 0x18 + lVar2));
      if (*(longlong *)(lVar1 + 0x10 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  DAT_14cb83058 = 0;
  if (DAT_14cb8305c != 0) {
    FUN_14494313c(&DAT_14cb83050,0);
  }
  _DAT_14cb83080 = 0xffffffff;
  DAT_14cb83078 = 0;
  if (0x80 < DAT_14cb8307c) {
    DAT_14cb8307c = 0x80;
    FUN_1446efbd8(&DAT_14cb83060,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461632ae FUN_1461632ae body=37 status=ok
// SIG undefined FUN_1461632ae(void)

void FUN_1461632ae(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x810);
  FUN_1461632d4(param_2);
  return;
}



// FUNCTION 1461632d4 FUN_1461632d4 body=705 status=ok
// SIG undefined FUN_1461632d4(void)

undefined8 * FUN_1461632d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b774fa0;
  memset(param_1 + 4,0,400);
  param_1[0x38] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  param_1[0x39] = 0x3e4ccccd3f800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3002;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3003;
  param_1[0x42] = 0;
  FUN_1405c5f70(param_1 + 0x43);
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 10;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 10;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  memset(param_1 + 0x58,0,0x198);
  *(undefined4 *)(param_1 + 0x8b) = 0x3e4ccccd;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  lVar3 = 0x56c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0xa4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0xb4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0xc4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0xd4);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x94) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x8c) = 0xc5daac38;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x84);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x77);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -100) = 1;
    *(undefined1 *)((longlong)param_1 + lVar3 + -0x60) = 0;
    uVar2 = DAT_14c8464e8;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x54);
    *puVar1 = DAT_14c8464e0;
    puVar1[1] = uVar2;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x44) = DAT_14c8464f0;
    uVar2 = DAT_14c846500;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x3c);
    *puVar1 = DAT_14c8464f8;
    puVar1[1] = uVar2;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x2c) = DAT_14c846508;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x24) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0xc) = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x1c);
    *puVar1 = DAT_14c8464e0;
    puVar1[1] = uVar2;
    *(undefined8 *)((longlong)param_1 + lVar3 + -4) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x5c) = 10;
    lVar3 = lVar3 + 0xd8;
  } while (lVar3 != 0x71c);
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcf] = 0x3ee666663f19999a;
  *(undefined4 *)(param_1 + 0xd0) = 0x44160000;
  uVar2 = DAT_14c846500;
  param_1[0xd1] = DAT_14c8464f8;
  param_1[0xd2] = uVar2;
  param_1[0xd3] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0xd4) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xd5) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0x44e10000;
  FUN_141230602(param_1 + 0xd6);
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0x4416000000000005;
  param_1[0xfe] = 0x640000000a;
  param_1[0xff] = 0x4290000041000000;
  param_1[0x100] = 0x1e47c35000;
  param_1[0x101] = 0x3e4ccccd00000009;
  return param_1;
}



// FUNCTION 146163596 FUN_146163596 body=53 status=ok
// SIG undefined FUN_146163596(void)

void FUN_146163596(longlong *param_1)

{
  FUN_1461635cc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461635cc FUN_1461635cc body=370 status=ok
// SIG undefined FUN_1461635cc(void)

void FUN_1461635cc(longlong *param_1)

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
      FUN_1489be05c(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 146163748 FUN_146163748 body=275 status=ok
// SIG undefined FUN_146163748(void)

void FUN_146163748(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408c7d08();
  *(char *)(param_1 + 0xc4) = (char)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xa8) == (*(uint *)(param_1 + 0xb8) & 0xff)) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if (plVar2[3] != 0) {
      cVar1 = FUN_144729dda(plVar2 + 2);
      if (cVar1 != '\0') {
        local_30 = DAT_14cbe73b8;
        local_28 = -1;
        cVar1 = FUN_144a7a548(plVar2);
        if (((cVar1 != '\0') && (lVar3 = (longlong)local_28 * 0x88 + *plVar2, lVar3 != 0)) &&
           (0 < *(int *)(lVar3 + 0x80))) {
          FUN_148f0674a(param_1);
        }
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
          local_30 = &LAB_148f06804;
          local_28 = 0;
          FUN_14616385c(lVar3 + 0x58,&local_20,param_1);
          *(undefined8 *)(param_1 + 0xd0) = local_20;
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



// FUNCTION 14616385c FUN_14616385c body=254 status=ok
// SIG undefined FUN_14616385c(void)

undefined8
FUN_14616385c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3f7600;
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
  *local_48 = &PTR_FUN_14b9de5c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140740a5e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616395c FUN_14616395c body=54 status=ok
// SIG undefined FUN_14616395c(void)

void FUN_14616395c(void)

{
  FUN_146163992();
  if (DAT_14cb7c148 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7c128 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146163992 FUN_146163992 body=370 status=ok
// SIG undefined FUN_146163992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146163992(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7c138;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7c150 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7c128;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cb7c130 = 0;
  if (DAT_14cb7c134 != 0) {
    FUN_140549ad6(&DAT_14cb7c128,0);
  }
  _DAT_14cb7c158 = 0xffffffff;
  DAT_14cb7c150 = 0;
  if (0x80 < DAT_14cb7c154) {
    DAT_14cb7c154 = 0x80;
    FUN_1446efbd8(&DAT_14cb7c138,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146163b06 FUN_146163b06 body=226 status=ok
// SIG undefined FUN_146163b06(void)

longlong * FUN_146163b06(longlong *param_1)

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
  pcVar13 = FUN_146321326;
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



// FUNCTION 146163bea FUN_146163bea body=138 status=ok
// SIG undefined FUN_146163bea(void)

code * FUN_146163bea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UploadStructuredBuffer1x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474439d0;
}



// FUNCTION 146163c74 FUN_146163c74 body=138 status=ok
// SIG undefined FUN_146163c74(void)

code * FUN_146163c74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UploadStructuredBuffer8x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FUint8>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000119;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443a5a;
}



// FUNCTION 146163cfe FUN_146163cfe body=140 status=ok
// SIG undefined FUN_146163cfe(void)

undefined1 * FUN_146163cfe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d122e4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRDGByteBufferShader::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caa0d00;
  return &LAB_147443b6e;
}



// FUNCTION 146163d96 FUN_146163d96 body=415 status=ok
// SIG undefined FUN_146163d96(void)

undefined8 * FUN_146163d96(undefined8 *param_1)

{
  FUN_145c4481a();
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *param_1 = &PTR_FUN_14b2cf1f0;
  param_1[0x73] = &PTR_FUN_14b2cf830;
  param_1[0x7a] = &PTR_FUN_14b2cf8e0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0x200000000;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x441) = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 2;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined2 *)(param_1 + 0x95) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x531) = 0;
  *(undefined8 *)((longlong)param_1 + 0x539) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ff) = 0;
  *(undefined8 *)((longlong)param_1 + 0x507) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0xab) = 2;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0xae) = 2;
  *(undefined8 *)((longlong)param_1 + 0x581) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xba] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  FUN_1405bab3a(param_1,0);
  return param_1;
}



// FUNCTION 146163f36 FUN_146163f36 body=181 status=ok
// SIG undefined FUN_146163f36(void)

longlong FUN_146163f36(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146163f98;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146163fec(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146163f98:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146163fec FUN_146163fec body=272 status=ok
// SIG undefined FUN_146163fec(void)

undefined4 * FUN_146163fec(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461641a2(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_1461640fe(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_146164288(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461640fe FUN_1461640fe body=163 status=ok
// SIG undefined FUN_1461640fe(void)

undefined8 FUN_1461640fe(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
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
          FUN_148a6ff24(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461641a2 FUN_1461641a2 body=230 status=ok
// SIG undefined FUN_1461641a2(void)

int * FUN_1461641a2(longlong *param_1,int *param_2)

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



// FUNCTION 146164288 FUN_146164288 body=431 status=ok
// SIG undefined FUN_146164288(void)

void FUN_146164288(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146164438 FUN_146164438 body=118 status=ok
// SIG undefined FUN_146164438(void)

void FUN_146164438(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FUN_1449ce97a();
  if (cVar1 == '\0') {
    if ((longlong *)param_1[0x7ee] != (longlong *)0x0) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))();
      if (cVar1 != '\0') goto LAB_146164471;
    }
    FUN_1461644ae(param_1);
    return;
  }
LAB_146164471:
  plVar2 = (longlong *)FUN_1411311bc();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
                    /* WARNING: Could not recover jumptable at 0x0001461644ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x510))(param_1,lVar3);
  return;
}



// FUNCTION 1461644ae FUN_1461644ae body=202 status=ok
// SIG undefined FUN_1461644ae(void)

void FUN_1461644ae(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if ((*(uint *)(param_1 + 0x73) & 0x20) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) | 0x20;
  if ((char)param_1[0x2f] == '\x03') {
    if (param_1[0x78] != 0) {
      lVar2 = FUN_144a75eb4();
      if ((((param_1[0x78] != 0) && (lVar2 != 0)) &&
          (lVar1 = *(longlong *)(param_1[0x78] + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) goto LAB_14616452c;
    }
    FUN_140aeefbc(param_1,0,1);
  }
  else {
LAB_14616452c:
    (**(code **)(*param_1 + 0x738))(param_1);
    (**(code **)(*param_1 + 0x658))(param_1);
    (**(code **)(*param_1 + 0x330))(param_1,1);
    fVar3 = *(float *)((longlong)param_1 + 0x6c);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.1) {
      fVar3 = 0.1;
    }
    (**(code **)(*param_1 + 0x388))(param_1,fVar3);
  }
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xdf;
  return;
}



// FUNCTION 146164578 FUN_146164578 body=54 status=ok
// SIG undefined FUN_146164578(void)

void FUN_146164578(void)

{
  FUN_1461645ae();
  if (DAT_14c872fc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c872fa0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461645ae FUN_1461645ae body=372 status=ok
// SIG undefined FUN_1461645ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461645ae(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c872fb0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c872fc8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c872fa0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_14681b500((longlong)iStack_3c * 0x28 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c872fa8 = 0;
  if (DAT_14c872fac != 0) {
    FUN_140549ad6(&DAT_14c872fa0,0);
  }
  _DAT_14c872fd0 = 0xffffffff;
  DAT_14c872fc8 = 0;
  if (0x80 < DAT_14c872fcc) {
    DAT_14c872fcc = 0x80;
    FUN_1446efbd8(&DAT_14c872fb0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146164724 FUN_146164724 body=205 status=ok
// SIG undefined FUN_146164724(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146164724(void)

{
  if ((DAT_14c9f928f & 2) == 0) {
    DAT_14c9f928f = DAT_14c9f928f | 2;
    _DAT_14c9f9230 = L"FLumenDirectLightingShadowMaskFromLightAttenuationCS";
    _DAT_14c9f9248 = FUN_146826540;
    _DAT_14c9f9250 = FUN_146825d77;
    _DAT_14c9f9258 = FUN_146825fd6;
    _DAT_14c9f9260 = FUN_1407e02ea;
    _DAT_14c9f9268 = FUN_146826273;
    _DAT_14c9f9240 = FUN_147204f60;
    _DAT_14c9f9280 = 0xffffffff000000e0;
    _DAT_14c9f9288 = 8;
    DAT_14c9f928c = 0;
    _DAT_14c9f9270 = &LAB_147204f8a;
    FUN_1461647f2();
    FUN_1407e00cc(&DAT_14c9f9228);
    return;
  }
  return;
}



// FUNCTION 1461647f2 FUN_1461647f2 body=123 status=ok
// SIG undefined FUN_1461647f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461647f2(void)

{
  _DAT_14c9ffca8 = L"BASE";
  DAT_14c9ffcd2 = 4;
  _DAT_14c9ffcb0 = FUN_140b35ae4();
  _DAT_14c9ffcb8 = DAT_14c9f9238;
  _DAT_14c9ffcc0 = &LAB_14682652b;
  DAT_14c9f9238 = &DAT_14c9ffca8;
  DAT_14c9f928d = DAT_14c9f928d + '\x01';
  _DAT_14c9ffcc8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffcb0 + 100) != '\0') {
    DAT_14c9f928e = DAT_14c9f928e + '\x01';
  }
  return;
}



// FUNCTION 14616486e FUN_14616486e body=59 status=ok
// SIG undefined FUN_14616486e(void)

void FUN_14616486e(void)

{
  if (DAT_14ca80460 < 2) {
    FUN_1461648aa();
    FUN_145d2cb80();
    return;
  }
  FUN_145d2cb80();
  DAT_14ca80460 = 1;
  FUN_14610fee8(&DAT_14ca80418);
  return;
}



// FUNCTION 1461648aa FUN_1461648aa body=367 status=ok
// SIG undefined FUN_1461648aa(void)

void FUN_1461648aa(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14ca80450;
  if (DAT_14ca80458 != (undefined4 *)0x0) {
    puVar5 = DAT_14ca80458;
  }
  iVar4 = DAT_14ca80460 + 3;
  if (-1 < DAT_14ca80460) {
    iVar4 = DAT_14ca80460;
  }
  if (DAT_14ca80420 - DAT_14ca8044c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca80428;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca80440 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca80440;
    }
    local_78 = &DAT_14ca80418;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca80428)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x1c + (longlong)iVar2 * 0x20)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca80418 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca80428 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca80460) {
      lVar3 = 0;
      do {
        puVar5[lVar3] = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca80460);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146164a1a FUN_146164a1a body=138 status=ok
// SIG undefined FUN_146164a1a(void)

code * FUN_146164a1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndexDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b80000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805021e;
}



// FUNCTION 146164aa4 FUN_146164aa4 body=138 status=ok
// SIG undefined FUN_146164aa4(void)

code * FUN_146164aa4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUParticleCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480502a8;
}



// FUNCTION 146164b2e FUN_146164b2e body=144 status=ok
// SIG undefined FUN_146164b2e(void)

code * FUN_146164b2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd9b3e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNiagaraMeshCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14646199c;
}



// FUNCTION 146164bbe FUN_146164bbe body=54 status=ok
// SIG undefined FUN_146164bbe(void)

void FUN_146164bbe(void)

{
  FUN_146164bf4();
  if (DAT_14cb455d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb455b0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146164bf4 FUN_146164bf4 body=372 status=ok
// SIG undefined FUN_146164bf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146164bf4(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb455c0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb455d8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb455b0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_148244ebc((longlong)iStack_3c * 0x60 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb455b8 = 0;
  if (DAT_14cb455bc != 0) {
    FUN_1448fc38a(&DAT_14cb455b0,0);
  }
  _DAT_14cb455e0 = 0xffffffff;
  DAT_14cb455d8 = 0;
  if (0x80 < DAT_14cb455dc) {
    DAT_14cb455dc = 0x80;
    FUN_1446efbd8(&DAT_14cb455c0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146164d6a FUN_146164d6a body=54 status=ok
// SIG undefined FUN_146164d6a(void)

void FUN_146164d6a(void)

{
  FUN_146164da0();
  if (DAT_14cb979f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb979d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146164da0 FUN_146164da0 body=372 status=ok
// SIG undefined FUN_146164da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146164da0(void)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb979e0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb979f8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb979d0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      puVar1 = (undefined8 *)(*local_68 + (longlong)iStack_4c * 0x30);
      *puVar1 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 3)])();
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb979d8 = 0;
  if (DAT_14cb979dc != 0) {
    FUN_14494313c(&DAT_14cb979d0,0);
  }
  _DAT_14cb97a00 = 0xffffffff;
  DAT_14cb979f8 = 0;
  if (0x80 < DAT_14cb979fc) {
    DAT_14cb979fc = 0x80;
    FUN_1446efbd8(&DAT_14cb979e0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146164f16 FUN_146164f16 body=68 status=ok
// SIG undefined FUN_146164f16(void)

void FUN_146164f16(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x708);
  memset(_Dst,0,0x708);
  FUN_146164f5a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146164f5a FUN_146164f5a body=405 status=ok
// SIG undefined FUN_146164f5a(void)

undefined8 * FUN_146164f5a(undefined8 *param_1)

{
  FUN_1461650f0();
  *param_1 = &PTR_FUN_14b8c1840;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_140056680(param_1 + 0x53,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x55,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_140056680(param_1 + 0x59,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x5b,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  FUN_140056680(param_1 + 0x5e,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x60,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_140056680(param_1 + 99,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x65,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  FUN_140056680(param_1 + 0x6c,&DAT_149dfb77a);
  FUN_1400b22c2(param_1 + 0x6e);
  memset(param_1 + 0x70,0,0x308);
  FUN_141563852(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  return param_1;
}



// FUNCTION 1461650f0 FUN_1461650f0 body=381 status=ok
// SIG undefined FUN_1461650f0(void)

undefined8 * FUN_1461650f0(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b7f80;
  FUN_1413f03d2(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x203) = 0;
  FUN_144a5dc74(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  return param_1;
}



// FUNCTION 14616526e FUN_14616526e body=54 status=ok
// SIG undefined FUN_14616526e(void)

void FUN_14616526e(void)

{
  FUN_1461652a4();
  if (DAT_14cc2e3e0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc2e3c0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461652a4 FUN_1461652a4 body=372 status=ok
// SIG undefined FUN_1461652a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461652a4(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cc2e3d0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cc2e3e8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cc2e3c0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_14989e5f8((longlong)iStack_3c * 0x28 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cc2e3c8 = 0;
  if (DAT_14cc2e3cc != 0) {
    FUN_140549ad6(&DAT_14cc2e3c0,0);
  }
  _DAT_14cc2e3f0 = 0xffffffff;
  DAT_14cc2e3e8 = 0;
  if (0x80 < DAT_14cc2e3ec) {
    DAT_14cc2e3ec = 0x80;
    FUN_1446efbd8(&DAT_14cc2e3d0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14616541a FUN_14616541a body=262 status=ok
// SIG undefined FUN_14616541a(void)

undefined8 *
FUN_14616541a(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  FUN_1414a725e(puVar4);
  *puVar4 = &PTR_LAB_14acd0ae0;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_146165522(puVar4 + 4,param_4);
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146165522 FUN_146165522 body=484 status=ok
// SIG undefined FUN_146165522(void)

void FUN_146165522(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  FUN_1410534e0();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar5 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14b9a7b50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_2);
  *(undefined4 *)(puVar5 + 5) = uVar3;
  puVar5[4] = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b5afca0;
  plVar7[2] = (longlong)local_48;
  local_48 = (undefined8 *)0x0;
  *(undefined4 *)(plVar7 + 3) = local_40;
  local_40 = 0;
  if (plVar7 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) goto LAB_146165643;
    param_1[1] = 0;
LAB_146165699:
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
    if (plVar7 == (longlong *)0x0) goto LAB_146165643;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar7 + 2);
    plVar9 = (longlong *)param_1[1];
    if (plVar7 == plVar9) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[1] = (longlong)plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_146165699;
    }
  }
  LOCK();
  plVar9 = plVar7 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146165643:
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146165712 FUN_146165712 body=843 status=ok
// SIG undefined FUN_146165712(void)

undefined8 * FUN_146165712(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ab513a0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x4000;
  param_1[0x17] = "gbxactor";
  FUN_1400b22c2(local_58,"GbxActor");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_140927942();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146165847;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_146165847:
  lVar4 = FUN_140927942();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_1461658dc;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_1461658dc:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146165a5e FUN_146165a5e body=160 status=ok
// SIG undefined FUN_146165a5e(void)

void FUN_146165a5e(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_146165b45();
  FUN_1446ddc76(local_18,"FDataflowSimulationNode",1);
  FUN_146165aff(local_18);
  FUN_1446ddc76(local_18,"FDataflowInvalidNode",1);
  FUN_146165aff(local_18);
  FUN_1446ddc76(local_18,"FDataflowExecutionNode",1);
  FUN_146165aff(local_18);
  FUN_146165c6a();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146165aff FUN_146165aff body=69 status=ok
// SIG undefined FUN_146165aff(void)

void FUN_146165aff(undefined8 param_1)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a13f80(&DAT_14c99d030,local_c,param_1,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146165b45 FUN_146165b45 body=292 status=ok
// SIG undefined FUN_146165b45(void)

void FUN_146165b45(void)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146165e92();
  FUN_146166168();
  FUN_14616643e();
  FUN_146166714();
  FUN_1461669ea();
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Terminal",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Setup",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Physics",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146165c6a FUN_146165c6a body=550 status=ok
// SIG undefined FUN_146165c6a(void)

void FUN_146165c6a(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a3ea200;
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
  *local_38 = &PTR_FUN_14a3e9ea0;
  FUN_14585199c(&DAT_14cb10868,&local_40,&local_38);
  FUN_1449db362(&local_38);
  DAT_14caa88d8 = local_40;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a3ea270;
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
  *local_38 = &PTR_FUN_14a3e9f10;
  FUN_14037332e(&DAT_14cad0f38,&local_40,&local_38);
  FUN_1449db362(&local_38);
  DAT_14caa88e0 = local_40;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a3ea270;
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
  *local_38 = &PTR_FUN_14a3e9f80;
  FUN_14037332e(&DAT_14cad0f50,&local_40,&local_38);
  FUN_1449db362(&local_38);
  DAT_14caa88e8 = local_40;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146165e92 FUN_146165e92 body=725 status=ok
// SIG undefined FUN_146165e92(void)

void FUN_146165e92(void)

{
  void *_Src;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  void **local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetSimulationTimeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetSimulationTime",1);
  FUN_1446ddc76(&local_d8,"Physics|Common",1);
  _Src = DAT_14caa85d0;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)DAT_14caa85d8;
  local_e0 = DAT_14caa85d8;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,DAT_14caa85d8,0);
    memcpy(local_e8,_Src,lVar4 * 2);
  }
  FUN_1446ddc76(local_100,"GetSimulationTime",1);
  FUN_1446ddc76(local_108,"FGetSimulationTimeDataflowNode",1);
  if (DAT_14caa8970 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar3,L"GetSimulationTimeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14caa8970,local_108,local_100);
  if (DAT_14caa8970 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar3,L"GetSimulationTimeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14caa8970);
  if (DAT_14caa8970 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar3,L"GetSimulationTimeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14caa8970);
  FUN_1446ddc76(local_118,"FGetSimulationTimeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = &local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14a3ea020;
  local_50 = FUN_1474880ec;
  local_78 = FUN_147488230;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146166168 FUN_146166168 body=725 status=ok
// SIG undefined FUN_146166168(void)

void FUN_146166168(void)

{
  void *_Src;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  void **local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetPhysicsSolversDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetPhysicsSolvers",1);
  FUN_1446ddc76(&local_d8,"Physics|Solver",1);
  _Src = DAT_14caa85d0;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)DAT_14caa85d8;
  local_e0 = DAT_14caa85d8;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,DAT_14caa85d8,0);
    memcpy(local_e8,_Src,lVar4 * 2);
  }
  FUN_1446ddc76(local_100,"GetPhysicsSolvers",1);
  FUN_1446ddc76(local_108,"FGetPhysicsSolversDataflowNode",1);
  if (DAT_14caa8988 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar3,L"GetPhysicsSolversDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14caa8988,local_108,local_100);
  if (DAT_14caa8988 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar3,L"GetPhysicsSolversDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14caa8988);
  if (DAT_14caa8988 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar3,L"GetPhysicsSolversDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14caa8988);
  FUN_1446ddc76(local_118,"FGetPhysicsSolversDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = &local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14a3ea040;
  local_50 = FUN_147488268;
  local_78 = FUN_147488426;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616643e FUN_14616643e body=725 status=ok
// SIG undefined FUN_14616643e(void)

void FUN_14616643e(void)

{
  void *_Src;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  void **local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FAdvancePhysicsSolversDataflowNode",1);
  FUN_1446ddc76(&local_d0,"AdvancePhysicsSolvers",1);
  FUN_1446ddc76(&local_d8,"Physics|Solver",1);
  _Src = DAT_14caa85d0;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)DAT_14caa85d8;
  local_e0 = DAT_14caa85d8;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,DAT_14caa85d8,0);
    memcpy(local_e8,_Src,lVar4 * 2);
  }
  FUN_1446ddc76(local_100,"AdvancePhysicsSolvers",1);
  FUN_1446ddc76(local_108,"FAdvancePhysicsSolversDataflowNode",1);
  if (DAT_14caa89a0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar3,L"AdvancePhysicsSolversDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14caa89a0,local_108,local_100);
  if (DAT_14caa89a0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar3,L"AdvancePhysicsSolversDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14caa89a0);
  if (DAT_14caa89a0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar3,L"AdvancePhysicsSolversDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14caa89a0);
  FUN_1446ddc76(local_118,"FAdvancePhysicsSolversDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = &local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14a3ea060;
  local_50 = FUN_14748845e;
  local_78 = FUN_147488600;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146166714 FUN_146166714 body=725 status=ok
// SIG undefined FUN_146166714(void)

void FUN_146166714(void)

{
  void *_Src;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  void **local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFilterSimulationProxiesDataflowNode",1);
  FUN_1446ddc76(&local_d0,"FilterSimulationProxies",1);
  FUN_1446ddc76(&local_d8,"Physics|Proxy",1);
  _Src = DAT_14caa85d0;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)DAT_14caa85d8;
  local_e0 = DAT_14caa85d8;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,DAT_14caa85d8,0);
    memcpy(local_e8,_Src,lVar4 * 2);
  }
  FUN_1446ddc76(local_100,"FilterSimulationProxies",1);
  FUN_1446ddc76(local_108,"FFilterSimulationProxiesDataflowNode",1);
  if (DAT_14caa89b8 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar3,L"FilterSimulationProxiesDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14caa89b8,local_108,local_100);
  if (DAT_14caa89b8 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar3,L"FilterSimulationProxiesDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14caa89b8);
  if (DAT_14caa89b8 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar3,L"FilterSimulationProxiesDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14caa89b8);
  FUN_1446ddc76(local_118,"FFilterSimulationProxiesDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = &local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14a3ea080;
  local_50 = FUN_147488638;
  local_78 = FUN_1474887be;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461669ea FUN_1461669ea body=725 status=ok
// SIG undefined FUN_1461669ea(void)

void FUN_1461669ea(void)

{
  void *_Src;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  void **local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSimulationProxiesTerminalDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SimulationProxiesTerminal",1);
  FUN_1446ddc76(&local_d8,"Terminal|Proxy",1);
  _Src = DAT_14caa85d0;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)DAT_14caa85d8;
  local_e0 = DAT_14caa85d8;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,DAT_14caa85d8,0);
    memcpy(local_e8,_Src,lVar4 * 2);
  }
  FUN_1446ddc76(local_100,"SimulationProxiesTerminal",1);
  FUN_1446ddc76(local_108,"FSimulationProxiesTerminalDataflowNode",1);
  if (DAT_14caa89d0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar3,L"SimulationProxiesTerminalDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14caa89d0,local_108,local_100);
  if (DAT_14caa89d0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar3,L"SimulationProxiesTerminalDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14caa89d0);
  if (DAT_14caa89d0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar3,L"SimulationProxiesTerminalDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14caa89d0);
  FUN_1446ddc76(local_118,"FSimulationProxiesTerminalDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = &local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14a3ea0a0;
  local_50 = FUN_1474887f6;
  local_78 = FUN_147488934;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146166cc0 FUN_146166cc0 body=54 status=ok
// SIG undefined FUN_146166cc0(void)

void FUN_146166cc0(void)

{
  FUN_146166cf6();
  if (DAT_14c9a3dc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a3da0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146166cf6 FUN_146166cf6 body=373 status=ok
// SIG undefined FUN_146166cf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146166cf6(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c9a3db0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c9a3dc8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c9a3da0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x10;
      FUN_1448176ff(*(undefined8 *)(lVar1 + lVar2),*(undefined4 *)(lVar1 + 8 + lVar2));
      if (*(longlong *)(lVar1 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c9a3da8 = 0;
  if (DAT_14c9a3dac != 0) {
    FUN_14474875a(&DAT_14c9a3da0,0);
  }
  _DAT_14c9a3dd0 = 0xffffffff;
  DAT_14c9a3dc8 = 0;
  if (0x80 < DAT_14c9a3dcc) {
    DAT_14c9a3dcc = 0x80;
    FUN_1446efbd8(&DAT_14c9a3db0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146166e6c FUN_146166e6c body=54 status=ok
// SIG undefined FUN_146166e6c(void)

void FUN_146166e6c(void)

{
  FUN_146166ea2();
  if (DAT_14cabc6f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cabc6d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146166ea2 FUN_146166ea2 body=373 status=ok
// SIG undefined FUN_146166ea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146166ea2(void)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cabc6e8;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cabc700 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cabc6d8;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar1 = (longlong *)(*local_60 + (longlong)iStack_44 * 0x28);
      FUN_1449db362(plVar1 + 2);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cabc6e0 = 0;
  if (DAT_14cabc6e4 != 0) {
    FUN_140549ad6(&DAT_14cabc6d8,0);
  }
  _DAT_14cabc708 = 0xffffffff;
  DAT_14cabc700 = 0;
  if (0x80 < DAT_14cabc704) {
    DAT_14cabc704 = 0x80;
    FUN_1446efbd8(&DAT_14cabc6e8,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146167024 FUN_146167024 body=417 status=ok
// SIG undefined FUN_146167024(void)

undefined8 * FUN_146167024(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6cfc10;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xb] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xc] = uVar2;
  param_1[0xd] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xe] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xf] = uVar2;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x19] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x17] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x18] = uVar2;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1a) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
  param_1[0x1c] = DAT_14c8464f0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x135) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x155) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15d) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x195) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19d) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x40600000;
  *(undefined4 *)(param_1 + 0x30) = 0x3dcccccd;
  *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 7;
  *(byte *)((longlong)param_1 + 0x29) = (*(byte *)((longlong)param_1 + 0x29) & 0xf0) + 1;
  *(byte *)((longlong)param_1 + 0x17c) = *(byte *)((longlong)param_1 + 0x17c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x447a0000;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffc | 2;
  uVar6 = FUN_141302b5a(0);
  iVar1 = *(int *)(param_1 + 0x26);
  *(uint *)(param_1 + 0x26) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x134) < iVar1 + 1U) {
    FUN_1458d38f4(param_1 + 0x25,iVar1);
  }
  *(undefined1 *)(param_1[0x25] + (longlong)iVar1) = uVar6;
  return param_1;
}



// FUNCTION 1461671c6 FUN_1461671c6 body=37 status=ok
// SIG undefined FUN_1461671c6(void)

void FUN_1461671c6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x718);
  FUN_1461671ec(param_2);
  return;
}



// FUNCTION 1461671ec FUN_1461671ec body=818 status=ok
// SIG undefined FUN_1461671ec(void)

undefined8 * FUN_1461671ec(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b181190;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x451c4000447a0000;
  param_1[10] = 0x4480000044800000;
  *(undefined4 *)(param_1 + 0xb) = 0x46000000;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0x14;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  memset(param_1 + 0xc,0,0x2f8);
  *(undefined8 *)((longlong)param_1 + 0x374) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0xc1800000;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0xc1600000;
  *(undefined4 *)(param_1 + 0xcc) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0x453b8000;
  FUN_1446f470e(&local_48,L"Cinematic",1);
  param_1[0xcd] = local_48;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0x3f80000000000050;
  *(undefined4 *)(param_1 + 0xd9) = 0x3f800000;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0x3f19999a41200000;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f000000;
  FUN_140056680(param_1 + 0xe0,&DAT_14a15699e);
  param_1[0xe2] = 0x4120000040400000;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146167520 FUN_146167520 body=54 status=ok
// SIG undefined FUN_146167520(void)

void FUN_146167520(void)

{
  FUN_146167556();
  if (DAT_14cb71168 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb71148 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146167556 FUN_146167556 body=373 status=ok
// SIG undefined FUN_146167556(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146167556(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cb71158;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cb71170 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cb71148;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cb71150 = 0;
  if (DAT_14cb71154 != 0) {
    FUN_1446f4a44(&DAT_14cb71148,0);
  }
  _DAT_14cb71178 = 0xffffffff;
  DAT_14cb71170 = 0;
  if (0x80 < DAT_14cb71174) {
    DAT_14cb71174 = 0x80;
    FUN_1446efbd8(&DAT_14cb71158,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461676cc FUN_1461676cc body=153 status=ok
// SIG undefined FUN_1461676cc(void)

bool FUN_1461676cc(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146167766 FUN_146167766 body=60 status=ok
// SIG undefined FUN_146167766(void)

void FUN_146167766(longlong *param_1,undefined8 param_2,char param_3)

{
  (**(code **)(*param_1 + 0x2d0))();
  FUN_1410e5ae4(param_1,1);
  if (param_3 != '\x01') {
    FUN_1459ca14e(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1461677a2 FUN_1461677a2 body=217 status=ok
// SIG undefined FUN_1461677a2(void)

undefined8 FUN_1461677a2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong **)(param_1 + 0x388) == (longlong *)0x0) ||
      (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x388) + 8))(), cVar3 == '\0')) ||
     (*(longlong *)(param_1 + 0x390) == 0)) {
    uVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x380);
    uVar5 = FUN_14001cc68(0x40,0x10);
    local_30 = *(longlong *)(param_2 + 0x10);
    if (local_30 == 0) {
LAB_146167878:
      local_30 = 0;
    }
    else {
      iVar4 = *(int *)(local_30 + 8);
      do {
        if (iVar4 == 0) goto LAB_146167878;
        LOCK();
        iVar1 = *(int *)(local_30 + 8);
        bVar6 = iVar4 == iVar1;
        if (bVar6) {
          *(int *)(local_30 + 8) = iVar4 + 1;
          iVar1 = iVar4;
        }
        iVar4 = iVar1;
        UNLOCK();
      } while (!bVar6);
    }
    local_38 = 0;
    if (local_30 != 0) {
      local_38 = *(undefined8 *)(param_2 + 8);
    }
    FUN_14616787c(uVar5,param_1);
    FUN_1410d2116(*(undefined8 *)(lVar2 + 0x210),uVar5);
    uVar5 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14616787c FUN_14616787c body=209 status=ok
// SIG undefined FUN_14616787c(void)

undefined8 * FUN_14616787c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_30);
  param_1[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_FUN_14ba447b0;
  param_1[2] = param_2;
  param_1[3] = *param_3;
  lVar3 = param_3[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616794e FUN_14616794e body=348 status=ok
// SIG undefined FUN_14616794e(void)

void FUN_14616794e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined2 local_40 [4];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40[0] = 1;
  local_38 = 0;
  uStack_30 = 0;
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
  FUN_146167afc(local_70,local_40);
  FUN_146167b5a(local_58,local_28,local_70);
  *param_3 = local_58[0];
  FUN_146167aac(param_3 + 2,&local_50);
  FUN_14587d987(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146167aac FUN_146167aac body=80 status=ok
// SIG undefined FUN_146167aac(void)

longlong * FUN_146167aac(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14587d987(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146167afc FUN_146167afc body=93 status=ok
// SIG undefined FUN_146167afc(void)

undefined2 * FUN_146167afc(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    FUN_148c172ae(param_1 + 4,iVar1,0);
    FUN_148c17321(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146167b5a FUN_146167b5a body=776 status=ok
// SIG undefined FUN_146167b5a(void)

int * FUN_146167b5a(int *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar8 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_144a7d35a(lVar8,&local_58);
    if (-1 < (int)local_50) {
      do {
        if ((int)local_58[1] <= (int)local_50) break;
        lVar8 = FUN_14479d2ce((ulonglong)local_50 * 8 + *local_58);
        if (lVar8 != 0) {
          lVar9 = FUN_144a5dd5e();
          if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
             (lVar9 = *(longlong *)(lVar8 + 0xa08), lVar9 != 0)) {
            lVar10 = FUN_144a2f878();
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              if ((int)*(uint *)(param_3 + 0x10) < 1) {
LAB_146167c49:
                *param_1 = *param_1 + 1;
                if (*param_3 == '\x01') {
                  plVar11 = (longlong *)FUN_146167e64(param_1 + 2);
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(lVar8);
                  }
                  bVar6 = DAT_14c950c29;
                  *plVar11 = lVar8;
                  if ((bVar6 & 1) != 0) {
                    FUN_1456cec3c(lVar9);
                  }
                  plVar11[1] = lVar9;
                }
                else {
                  plVar11 = (longlong *)0x0;
                }
                if ((param_3[1] == '\x01') &&
                   (iVar2 = *(int *)(lVar9 + 0x6888), (longlong)iVar2 != 0)) {
                  local_60 = *(longlong *)(lVar9 + 0x6880);
                  lVar8 = 0;
                  do {
                    *param_1 = *param_1 + 1;
                    if ((plVar11 != (longlong *)0x0) && (*param_3 != '\0')) {
                      iVar3 = (int)plVar11[3];
                      *(uint *)(plVar11 + 3) = iVar3 + 1U;
                      if (*(uint *)((longlong)plVar11 + 0x1c) < iVar3 + 1U) {
                        FUN_140b51998(plVar11 + 2,iVar3);
                      }
                      lVar9 = *(longlong *)(local_60 + lVar8);
                      *(longlong *)(plVar11[2] + (longlong)iVar3 * 8) = lVar9;
                      if ((DAT_14c950c29 == 1) && (lVar9 != 0)) {
                        FUN_1456cec3c();
                      }
                    }
                    lVar8 = lVar8 + 0x10;
                  } while ((longlong)iVar2 * 0x10 != lVar8);
                }
              }
              else {
                local_60 = *(longlong *)(lVar9 + 0x3f70);
                if (local_60 != 0) {
                  plVar11 = *(longlong **)(param_3 + 8);
                  lVar10 = (ulonglong)*(uint *)(param_3 + 0x10) * 0x18;
                  do {
                    lVar13 = plVar11[1];
                    if (lVar13 == 0) {
                      uVar12 = FUN_1401548e0();
                      lVar13 = FUN_14477b664(uVar12);
                      plVar11[1] = lVar13;
                    }
                    lVar14 = plVar11[2];
                    if (lVar14 == 0) {
                      if (lVar13 == 0) {
                        lVar14 = 0;
                      }
                      else {
                        lVar14 = 0;
                        if (*plVar11 != 0) {
                          plVar4 = *(longlong **)(lVar13 + 0xb8);
                          if ((plVar4 == (longlong *)0x0) ||
                             (cVar7 = (**(code **)(*plVar4 + 0x108))(), cVar7 == '\0')) {
                            lVar14 = 0;
                          }
                          else {
                            uVar12 = (**(code **)(*plVar4 + 0x110))(plVar4);
                            lVar14 = FUN_144aff482(uVar12,plVar11);
                          }
                          plVar11[2] = lVar14;
                        }
                      }
                    }
                    if (lVar14 == local_60) {
                      if (plVar11 != (longlong *)0x0) goto LAB_146167c49;
                      break;
                    }
                    plVar11 = plVar11 + 3;
                    lVar10 = lVar10 + -0x18;
                  } while (lVar10 != 0);
                }
              }
            }
          }
        }
        uVar1 = local_50 + 1;
        bVar5 = -2 < (int)local_50;
        local_50 = uVar1;
      } while (bVar5);
    }
  }
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146167e64 FUN_146167e64 body=59 status=ok
// SIG undefined FUN_146167e64(void)

longlong FUN_146167e64(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146167eaa(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_146167e9f(lVar2);
  return lVar2;
}



// FUNCTION 146167e9f FUN_146167e9f body=11 status=ok
// SIG undefined FUN_146167e9f(void)

void FUN_146167e9f(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 146167eaa FUN_146167eaa body=132 status=ok
// SIG undefined FUN_146167eaa(void)

void FUN_146167eaa(longlong param_1,int param_2)

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



// FUNCTION 146167f2e FUN_146167f2e body=172 status=ok
// SIG undefined FUN_146167f2e(void)

undefined8 FUN_146167f2e(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1415f1c62(local_48);
  FUN_146167fdc(local_58);
  FUN_1401c7f3e(local_38,local_58,local_48);
  FUN_144a882a8(param_1,local_38,&DAT_149e065c6);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146167fdc FUN_146167fdc body=152 status=ok
// SIG undefined FUN_146167fdc(void)

undefined8 FUN_146167fdc(undefined8 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  wchar_t *local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410f2562(&local_28);
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  local_30 = L"Developers";
  local_38 = 10;
  FUN_140002266(param_1,L"%.*s%.*s/",iVar1,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146168076 FUN_146168076 body=362 status=ok
// SIG undefined FUN_146168076(void)

undefined8 * FUN_146168076(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  void *_Src;
  undefined1 auStack_68 [32];
  longlong *local_48;
  char local_31;
  longlong local_30 [2];
  ulonglong local_20;
  
  uVar2 = DAT_14c872ce0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = '\0';
  puVar1 = (undefined8 *)FUN_1415f1ed0();
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  FUN_140056680(local_30,puVar3);
  local_48 = local_30;
  FUN_14052bb08(uVar2,L"PerforceSourceControl.PerforceSourceControlSettings",
                L"PerforceUsernameForDeveloperFolder",&local_31);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  iVar4 = DAT_14c872f80;
  uVar2 = DAT_14c872ce0;
  if (local_31 == '\x01') {
    if (DAT_14c872f80 < 2) {
      puVar1 = (undefined8 *)FUN_1415f1ed0();
      if (*(int *)(puVar1 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*puVar1;
      }
      FUN_140056680(local_30,puVar3);
      local_48 = local_30;
      FUN_1449da20c(uVar2,L"PerforceSourceControl.PerforceSourceControlSettings",L"UserName",
                    &DAT_14c872f78);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      iVar4 = DAT_14c872f80;
      *param_1 = 0;
      _Src = DAT_14c872f78;
      *(int *)(param_1 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        goto LAB_146168105;
      }
    }
    else {
      *param_1 = 0;
      _Src = DAT_14c872f78;
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_1446dd670(param_1,iVar4,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 * 2);
  }
  else {
    uVar2 = FUN_1461681e2(1);
    FUN_140056680(param_1,uVar2);
  }
LAB_146168105:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461681e2 FUN_1461681e2 body=241 status=ok
// SIG undefined FUN_1461681e2(void)

undefined2 * FUN_1461681e2(char param_1)

{
  int iVar1;
  wint_t _C;
  wint_t *pwVar2;
  undefined2 *puVar3;
  wint_t *pwVar4;
  undefined1 auStack_58 [44];
  DWORD local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == '\0') {
    if (DAT_14c8c3290 == 0) {
      local_2c = 0x100;
      puVar3 = &DAT_14c8c3290;
      GetUserNameW(&DAT_14c8c3290,&local_2c);
    }
    else {
      puVar3 = &DAT_14c8c3290;
    }
  }
  else if (DAT_14c8c3490 == 0) {
    local_2c = 0x100;
    puVar3 = &DAT_14c8c3490;
    GetUserNameW((LPWSTR)&DAT_14c8c3490,&local_2c);
    pwVar4 = &DAT_14c8c3490;
    if (DAT_14c8c3490 != 0) {
      pwVar4 = &DAT_14c8c3490;
      pwVar2 = &DAT_14c8c3492;
      _C = DAT_14c8c3490;
      do {
        iVar1 = iswalnum(_C);
        if (iVar1 != 0) {
          *pwVar4 = pwVar2[-1];
          pwVar4 = pwVar4 + 1;
        }
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (_C != 0);
    }
    *pwVar4 = 0;
  }
  else {
    puVar3 = &DAT_14c8c3490;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461682d4 FUN_1461682d4 body=162 status=ok
// SIG undefined FUN_1461682d4(void)

void FUN_1461682d4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2120(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616831b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616831b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168378 FUN_146168378 body=162 status=ok
// SIG undefined FUN_146168378(void)

void FUN_146168378(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f222a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461683bf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461683bf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616841c FUN_14616841c body=162 status=ok
// SIG undefined FUN_14616841c(void)

void FUN_14616841c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2334(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168463;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168463:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461684c0 FUN_1461684c0 body=162 status=ok
// SIG undefined FUN_1461684c0(void)

void FUN_1461684c0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f243e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168507;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168507:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168564 FUN_146168564 body=162 status=ok
// SIG undefined FUN_146168564(void)

void FUN_146168564(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2548(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461685ab;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461685ab:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168608 FUN_146168608 body=162 status=ok
// SIG undefined FUN_146168608(void)

void FUN_146168608(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2652(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616864f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616864f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461686ac FUN_1461686ac body=162 status=ok
// SIG undefined FUN_1461686ac(void)

void FUN_1461686ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f275c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461686f3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461686f3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168750 FUN_146168750 body=162 status=ok
// SIG undefined FUN_146168750(void)

void FUN_146168750(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2866(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168797;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168797:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461687f4 FUN_1461687f4 body=162 status=ok
// SIG undefined FUN_1461687f4(void)

void FUN_1461687f4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2970(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616883b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616883b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168898 FUN_146168898 body=162 status=ok
// SIG undefined FUN_146168898(void)

void FUN_146168898(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2a7a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461688df;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461688df:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616893c FUN_14616893c body=162 status=ok
// SIG undefined FUN_14616893c(void)

void FUN_14616893c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2b84(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168983;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168983:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461689e0 FUN_1461689e0 body=162 status=ok
// SIG undefined FUN_1461689e0(void)

void FUN_1461689e0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2c8e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168a27;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168a27:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168a84 FUN_146168a84 body=162 status=ok
// SIG undefined FUN_146168a84(void)

void FUN_146168a84(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2d98(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168acb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168acb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168b28 FUN_146168b28 body=162 status=ok
// SIG undefined FUN_146168b28(void)

void FUN_146168b28(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2ea2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168b6f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168b6f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168bcc FUN_146168bcc body=162 status=ok
// SIG undefined FUN_146168bcc(void)

void FUN_146168bcc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f2fac(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168c13;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168c13:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168c70 FUN_146168c70 body=162 status=ok
// SIG undefined FUN_146168c70(void)

void FUN_146168c70(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f30b6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168cb7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168cb7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168d14 FUN_146168d14 body=162 status=ok
// SIG undefined FUN_146168d14(void)

void FUN_146168d14(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f31c0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168d5b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168d5b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168db8 FUN_146168db8 body=162 status=ok
// SIG undefined FUN_146168db8(void)

void FUN_146168db8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f32ca(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168dff;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168dff:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168e5c FUN_146168e5c body=162 status=ok
// SIG undefined FUN_146168e5c(void)

void FUN_146168e5c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f33d4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168ea3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168ea3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168f00 FUN_146168f00 body=162 status=ok
// SIG undefined FUN_146168f00(void)

void FUN_146168f00(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f34de(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168f47;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168f47:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146168fa4 FUN_146168fa4 body=162 status=ok
// SIG undefined FUN_146168fa4(void)

void FUN_146168fa4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f35e8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146168feb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146168feb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169048 FUN_146169048 body=162 status=ok
// SIG undefined FUN_146169048(void)

void FUN_146169048(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f36f2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616908f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616908f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461690ec FUN_1461690ec body=162 status=ok
// SIG undefined FUN_1461690ec(void)

void FUN_1461690ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f37fc(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169133;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169133:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169190 FUN_146169190 body=162 status=ok
// SIG undefined FUN_146169190(void)

void FUN_146169190(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3906(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461691d7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461691d7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169234 FUN_146169234 body=162 status=ok
// SIG undefined FUN_146169234(void)

void FUN_146169234(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3a10(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616927b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616927b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461692d8 FUN_1461692d8 body=162 status=ok
// SIG undefined FUN_1461692d8(void)

void FUN_1461692d8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3b1a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616931f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616931f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616937c FUN_14616937c body=162 status=ok
// SIG undefined FUN_14616937c(void)

void FUN_14616937c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3c24(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461693c3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461693c3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169420 FUN_146169420 body=162 status=ok
// SIG undefined FUN_146169420(void)

void FUN_146169420(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3d2e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169467;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169467:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461694c4 FUN_1461694c4 body=162 status=ok
// SIG undefined FUN_1461694c4(void)

void FUN_1461694c4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3e38(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616950b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616950b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169568 FUN_146169568 body=162 status=ok
// SIG undefined FUN_146169568(void)

void FUN_146169568(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f3f42(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461695af;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461695af:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616960c FUN_14616960c body=162 status=ok
// SIG undefined FUN_14616960c(void)

void FUN_14616960c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f404c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169653;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169653:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461696b0 FUN_1461696b0 body=162 status=ok
// SIG undefined FUN_1461696b0(void)

void FUN_1461696b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4156(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461696f7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461696f7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169754 FUN_146169754 body=162 status=ok
// SIG undefined FUN_146169754(void)

void FUN_146169754(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4260(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616979b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616979b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461697f8 FUN_1461697f8 body=162 status=ok
// SIG undefined FUN_1461697f8(void)

void FUN_1461697f8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f436a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616983f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616983f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616989c FUN_14616989c body=162 status=ok
// SIG undefined FUN_14616989c(void)

void FUN_14616989c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4474(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1461698e3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461698e3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169940 FUN_146169940 body=162 status=ok
// SIG undefined FUN_146169940(void)

void FUN_146169940(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f457e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169987;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169987:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461699e4 FUN_1461699e4 body=162 status=ok
// SIG undefined FUN_1461699e4(void)

void FUN_1461699e4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4688(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169a2b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169a2b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169a88 FUN_146169a88 body=162 status=ok
// SIG undefined FUN_146169a88(void)

void FUN_146169a88(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4792(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169acf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169acf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169b2c FUN_146169b2c body=162 status=ok
// SIG undefined FUN_146169b2c(void)

void FUN_146169b2c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f489c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169b73;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169b73:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169bd0 FUN_146169bd0 body=162 status=ok
// SIG undefined FUN_146169bd0(void)

void FUN_146169bd0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f49a6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169c17;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169c17:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169c74 FUN_146169c74 body=162 status=ok
// SIG undefined FUN_146169c74(void)

void FUN_146169c74(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4ab0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169cbb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169cbb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169d18 FUN_146169d18 body=162 status=ok
// SIG undefined FUN_146169d18(void)

void FUN_146169d18(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4bba(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169d5f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169d5f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169dbc FUN_146169dbc body=162 status=ok
// SIG undefined FUN_146169dbc(void)

void FUN_146169dbc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4cc4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169e03;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169e03:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169e60 FUN_146169e60 body=162 status=ok
// SIG undefined FUN_146169e60(void)

void FUN_146169e60(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4dce(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169ea7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169ea7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169f04 FUN_146169f04 body=162 status=ok
// SIG undefined FUN_146169f04(void)

void FUN_146169f04(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4ed8(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169f4b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169f4b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146169fa8 FUN_146169fa8 body=162 status=ok
// SIG undefined FUN_146169fa8(void)

void FUN_146169fa8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f4fe2(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_146169fef;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146169fef:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a04c FUN_14616a04c body=162 status=ok
// SIG undefined FUN_14616a04c(void)

void FUN_14616a04c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f50ec(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a093;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a093:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a0f0 FUN_14616a0f0 body=162 status=ok
// SIG undefined FUN_14616a0f0(void)

void FUN_14616a0f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f51f6(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a137;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a137:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a194 FUN_14616a194 body=162 status=ok
// SIG undefined FUN_14616a194(void)

void FUN_14616a194(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5300(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a1db;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a1db:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a238 FUN_14616a238 body=162 status=ok
// SIG undefined FUN_14616a238(void)

void FUN_14616a238(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f540a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a27f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a27f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a2dc FUN_14616a2dc body=162 status=ok
// SIG undefined FUN_14616a2dc(void)

void FUN_14616a2dc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5514(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a323;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a323:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a380 FUN_14616a380 body=162 status=ok
// SIG undefined FUN_14616a380(void)

void FUN_14616a380(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f561e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a3c7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a3c7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a424 FUN_14616a424 body=162 status=ok
// SIG undefined FUN_14616a424(void)

void FUN_14616a424(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5728(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a46b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a46b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a4c8 FUN_14616a4c8 body=162 status=ok
// SIG undefined FUN_14616a4c8(void)

void FUN_14616a4c8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5832(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a50f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a50f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a56c FUN_14616a56c body=162 status=ok
// SIG undefined FUN_14616a56c(void)

void FUN_14616a56c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f593c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a5b3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a5b3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a610 FUN_14616a610 body=162 status=ok
// SIG undefined FUN_14616a610(void)

void FUN_14616a610(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5a46(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a657;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a657:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a6b4 FUN_14616a6b4 body=162 status=ok
// SIG undefined FUN_14616a6b4(void)

void FUN_14616a6b4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5b50(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a6fb;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a6fb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a758 FUN_14616a758 body=162 status=ok
// SIG undefined FUN_14616a758(void)

void FUN_14616a758(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5c5a(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a79f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a79f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a7fc FUN_14616a7fc body=162 status=ok
// SIG undefined FUN_14616a7fc(void)

void FUN_14616a7fc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5d64(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a843;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a843:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a8a0 FUN_14616a8a0 body=162 status=ok
// SIG undefined FUN_14616a8a0(void)

void FUN_14616a8a0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5e6e(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a8e7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a8e7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a944 FUN_14616a944 body=162 status=ok
// SIG undefined FUN_14616a944(void)

void FUN_14616a944(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f5f78(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616a98b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616a98b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616a9e8 FUN_14616a9e8 body=162 status=ok
// SIG undefined FUN_14616a9e8(void)

void FUN_14616a9e8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6082(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616aa2f;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616aa2f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616aa8c FUN_14616aa8c body=162 status=ok
// SIG undefined FUN_14616aa8c(void)

void FUN_14616aa8c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f618c(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616aad3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616aad3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ab30 FUN_14616ab30 body=162 status=ok
// SIG undefined FUN_14616ab30(void)

void FUN_14616ab30(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f6296(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ab77;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ab77:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616abd4 FUN_14616abd4 body=162 status=ok
// SIG undefined FUN_14616abd4(void)

void FUN_14616abd4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f63a0(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ac1b;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ac1b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ac78 FUN_14616ac78 body=162 status=ok
// SIG undefined FUN_14616ac78(void)

void FUN_14616ac78(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f64aa(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616acbf;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616acbf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14616ad1c FUN_14616ad1c body=162 status=ok
// SIG undefined FUN_14616ad1c(void)

void FUN_14616ad1c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1415f65b4(&local_20);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_20) {
    lVar3 = *plVar4;
    *plVar4 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_14616ad63;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14616ad63:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



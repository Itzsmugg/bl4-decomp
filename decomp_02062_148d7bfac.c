// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d7bfac FUN_148d7bfac body=73 status=ok
// SIG undefined FUN_148d7bfac(void)

undefined8 * FUN_148d7bfac(longlong param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x88);
  FUN_1447715ec(param_2 + 2,param_1 + 0x90);
  return param_2;
}



// FUNCTION 148d7bff6 FUN_148d7bff6 body=118 status=ok
// SIG undefined FUN_148d7bff6(void)

ulonglong FUN_148d7bff6(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7c078 FUN_148d7c078 body=325 status=ok
// SIG undefined FUN_148d7c078(void)

longlong * FUN_148d7c078(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xd0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97cda0;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0xa0);
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b6a0f90;
  *(undefined4 *)(plVar4 + 0x13) = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  *(undefined4 *)(plVar4 + 0x16) = 0;
  plVar4[0x11] = 0;
  *(undefined2 *)(plVar4 + 0x12) = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148d8659a(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7c1c0 FUN_148d7c1c0 body=265 status=ok
// SIG undefined FUN_148d7c1c0(void)

undefined8 FUN_148d7c1c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_14054e994();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
LAB_148d7c201:
    puVar6 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(lVar5 + 8);
    }
    FUN_1447325ac(puVar6,local_30,1);
    FUN_1400021e4(local_30,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
        *(longlong *)(param_1 + 0x30) = lVar5;
        if (lVar5 != 0) goto LAB_148d7c201;
        goto LAB_148d7c29a;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
LAB_148d7c29a:
  FUN_1400b22c2(param_2,"NO CHALLENGE");
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7c2ca FUN_148d7c2ca body=734 status=ok
// SIG undefined FUN_148d7c2ca(void)

longlong * FUN_148d7c2ca(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  longlong local_100 [2];
  longlong *local_f0;
  longlong *local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_59;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((param_3[1] == 0) || (param_3[2] == 0)) || (*(int *)(param_3[2] + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x78,0x10);
  FUN_148d86638(plVar5,param_3);
  plVar1 = plVar5 + 2;
  local_f0 = plVar1;
  local_e8 = plVar5;
  FUN_148d867ba(&local_f0,plVar1);
  lVar6 = FUN_140ec3d82(*(undefined8 *)(*param_3 + 8));
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x178) != 0)) {
    lVar7 = FUN_14041aabe();
    lVar6 = *(longlong *)(lVar6 + 0x178);
    if ((((lVar6 != 0) && ((lVar7 != 0 && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)))) &&
        (*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30 && (*(longlong *)(lVar6 + 0x488) != 0)))) {
      lVar6 = FUN_1401b2ade();
      if (lVar6 != 0) {
        lVar7 = FUN_144a5dd5e();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          FUN_14485c47a(plVar5 + 0xd,lVar6);
          FUN_140d895f4(plVar5 + 9,param_1 + 0x20);
          uVar8 = (**(code **)(*(longlong *)(lVar6 + 0xe68) + 0x10))();
          local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0xffffffff;
          local_5c = 0;
          local_5a = 1;
          local_59 = 0;
          FUN_148d12298(uVar8,local_100,param_1 + 0x20);
          plVar5[0xc] = local_100[0];
        }
      }
    }
  }
  lVar6 = FUN_1459492d0(*param_3);
  if (lVar6 != 0) {
    local_d8 = FUN_148d7c6d8;
    local_d0 = local_d0 & 0xffffffff00000000;
    FUN_148d7c5aa(local_100,&local_f0,&local_d8);
    local_d8 = (code *)0x0;
    local_d0 = local_d0 & 0xffffffff00000000;
    FUN_14487d8d8(&local_d8,local_100);
    uStack_9c._0_5_ = CONCAT14(1,(undefined4)uStack_9c);
    local_108 = local_e0;
    local_e0[0] = 1;
    local_dc = 0xbf800000;
    FUN_1406f4044(lVar6,plVar5 + 0xe,&local_d8,0x3dcccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[uStack_9c >> 0x20 & 0xff])(&local_d8);
    FUN_1449db362(local_100);
  }
  plVar4 = local_e8;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
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
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7c5aa FUN_148d7c5aa body=302 status=ok
// SIG undefined FUN_148d7c5aa(void)

longlong * FUN_148d7c5aa(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b97cdf0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b97cdf0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148d7c6d8 FUN_148d7c6d8 body=49 status=ok
// SIG undefined FUN_148d7c6d8(void)

void FUN_148d7c6d8(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_148d80934();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1412d7be2(*(undefined8 *)(param_1 + 0x18),param_1 + 0x60);
  FUN_1458b44fe(param_1);
  return;
}



// FUNCTION 148d7c70a FUN_148d7c70a body=71 status=ok
// SIG undefined FUN_148d7c70a(void)

undefined8 FUN_148d7c70a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7c752 FUN_148d7c752 body=301 status=ok
// SIG undefined FUN_148d7c752(void)

undefined8 * FUN_148d7c752(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_140ec3d82(*(undefined8 *)(*param_3 + 8));
  if ((lVar2 != 0) && (lVar3 = FUN_148db664c(lVar2), lVar3 != 0)) {
    lVar3 = param_1 + 0x20;
    FUN_1400021e4(lVar3,local_50);
    if (0 < *(int *)(lVar2 + 0x238)) {
      iVar6 = 0;
      lVar8 = 0;
      do {
        lVar4 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar8);
        if (lVar4 != 0) {
          lVar5 = FUN_144a5dd5e();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            cVar1 = *(char *)(param_1 + 0x28);
            if (cVar1 == '\x02') {
              uVar7 = 1;
            }
            else {
              if (cVar1 != '\x01') {
                if (cVar1 == '\0') {
                  FUN_148c369ee(lVar4,lVar3);
                }
                goto LAB_148d7c7f8;
              }
              uVar7 = 0;
            }
            FUN_148c36af0(lVar4,lVar3,uVar7);
          }
        }
LAB_148d7c7f8:
        lVar8 = lVar8 + 8;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0x238));
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7c880 FUN_148d7c880 body=26 status=ok
// SIG undefined FUN_148d7c880(void)

undefined8 FUN_148d7c880(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x20);
  return param_2;
}



// FUNCTION 148d7c89a FUN_148d7c89a body=678 status=ok
// SIG undefined FUN_148d7c89a(void)

undefined8 * FUN_148d7c89a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_140ec3d82(*(undefined8 *)(*param_3 + 8));
  if (lVar3 == 0) goto LAB_148d7c96a;
  lVar4 = FUN_1406f612e(lVar3);
  if (*(longlong *)(lVar3 + 0x178) == 0) {
LAB_148d7c99b:
    lVar8 = 0;
  }
  else {
    lVar5 = FUN_14041aabe();
    lVar7 = *(longlong *)(lVar3 + 0x178);
    if (lVar7 == 0) goto LAB_148d7c99b;
    lVar8 = 0;
    if ((lVar5 != 0) && (lVar9 = *(longlong *)(lVar7 + 0x10), lVar9 != 0)) {
      if (*(int *)(lVar9 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_148d7c99b;
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar8 = lVar7;
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
    uVar6 = FUN_140b7bb2c();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x28) = lVar7;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    if ((lVar7 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_148d7c96a;
    plVar1 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  if (((lVar4 != 0) && (lVar8 != 0)) && (lVar5 != 0)) {
    uVar6 = FUN_1408d7900(lVar5 + 0x30);
    lVar7 = FUN_14148eec0(lVar4,uVar6);
    if (lVar7 != 0) {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x48))();
      if (cVar2 == '\0') {
        if (0 < *(int *)(lVar3 + 0x238)) {
          iVar10 = 0;
          lVar5 = 0;
          do {
            lVar8 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar5);
            if (lVar8 == 0) {
LAB_148d7cb08:
              lVar8 = 0;
            }
            else {
              lVar9 = FUN_144a5dd5e();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_148d7cb08;
            }
            local_68 = 0;
            FUN_140d18af6(lVar4,lVar8,lVar7,1);
            lVar5 = lVar5 + 8;
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar3 + 0x238));
        }
      }
      else if ((*(longlong *)(lVar8 + 0x488) != 0) && (lVar3 = FUN_1401b2ade(), lVar3 != 0)) {
        lVar8 = FUN_144a5dd5e();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          local_60 = *(undefined8 *)(lVar5 + 0x30);
          local_58 = *(undefined4 *)(lVar5 + 0x38);
          local_50 = 0;
          cVar2 = FUN_140c1542c(lVar3);
          if (cVar2 == '\0') {
            local_68 = 0;
            FUN_140d18af6(lVar4,lVar3,lVar7,1);
          }
        }
      }
    }
  }
LAB_148d7c96a:
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7cb42 FUN_148d7cb42 body=71 status=ok
// SIG undefined FUN_148d7cb42(void)

undefined8 FUN_148d7cb42(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7cb8a FUN_148d7cb8a body=966 status=ok
// SIG undefined FUN_148d7cb8a(void)

longlong * FUN_148d7cb8a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined1 local_d8 [16];
  longlong *local_c8;
  longlong *local_c0;
  code *local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  code *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  longlong local_88;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_3[1] == 0) || (param_3[2] == 0)) || (*(int *)(param_3[2] + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  local_b8 = (code *)0x0;
  lStack_b0 = 0;
  local_a8 = 0;
  uVar5 = FUN_140672052(*(undefined8 *)(*param_3 + 8));
  lVar6 = (**(code **)(*(longlong *)*param_3 + 0x70))();
  if (lVar6 == 0) {
    local_98 = (code *)0x0;
    local_90 = 0;
  }
  else {
    local_90 = *(undefined4 *)(lVar6 + 0x98);
    local_98 = *(code **)(lVar6 + 0x90);
  }
  lVar6 = FUN_1456d28b8(param_1 + 0x20,&local_98,uVar5);
  if (lVar6 == 0) {
    bVar12 = true;
    bVar13 = true;
LAB_148d7ccc4:
    uVar5 = FUN_140b7bb2c();
    lStack_b0 = FUN_14477b664(uVar5);
    if (bVar12) {
LAB_148d7ccdb:
      if (((!(bool)(lStack_b0 == 0 | bVar13)) &&
          (plVar2 = *(longlong **)(lStack_b0 + 0xb8), plVar2 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 != '\0')) {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_a8 = FUN_144aff482(uVar5,&local_b8);
        if (local_a8 != 0) goto LAB_148d7cd4a;
      }
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_148d7cd2c;
    }
  }
  else {
    FUN_141154cc6(&local_98,lVar6);
    pcVar3 = local_98;
    local_b8 = local_98;
    uVar5 = FUN_14477b664(CONCAT44(uStack_8c,local_90));
    lStack_b0 = FUN_14477b664(uVar5);
    local_a8 = local_88;
    bVar12 = local_88 == 0;
    bVar13 = pcVar3 == (code *)0x0;
    if (lStack_b0 == 0) goto LAB_148d7ccc4;
    if (local_88 == 0) goto LAB_148d7ccdb;
  }
LAB_148d7cd4a:
  plVar7 = (longlong *)FUN_14001cc68(0x70,0x10);
  FUN_148d86bc4(plVar7,param_3);
  plVar2 = plVar7 + 2;
  local_c8 = plVar2;
  local_c0 = plVar7;
  FUN_148d86ddc(&local_c8,plVar2);
  lVar6 = FUN_140ec3d82(*(undefined8 *)(*param_3 + 8));
  if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x238))) {
    iVar10 = 0;
    lVar11 = 0;
    do {
      lVar8 = FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar11);
      if (lVar8 != 0) {
        lVar9 = FUN_144a5dd5e();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          uVar5 = (**(code **)(*(longlong *)(lVar8 + 0xe68) + 0x10))(lVar8 + 0xe68);
          cVar4 = FUN_148d12410(uVar5,&local_b8);
          if (cVar4 != '\0') {
            FUN_14485c47a(plVar7 + 0xc,lVar8);
            FUN_140d895f4(plVar7 + 9,&local_b8);
            break;
          }
        }
      }
      lVar11 = lVar11 + 8;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar6 + 0x238));
  }
  cVar4 = FUN_144729dda(plVar7 + 0xc);
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar6 = FUN_1459492d0(*param_3);
    if (lVar6 != 0) {
      local_98 = FUN_148d7d080;
      local_90 = 0;
      FUN_148d7cf52(local_d8,&local_c8,&local_98);
      local_98 = (code *)0x0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,local_d8);
      local_58 = 1;
      local_e8 = local_a0;
      local_a0[0] = 1;
      local_9c = 0xbf800000;
      FUN_1406f4044(lVar6,plVar7 + 0xd,&local_98,0x3dcccccd);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(local_d8);
    }
    *param_2 = (longlong)plVar2;
    param_2[1] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_148d7cd2c;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar7 = local_c0;
  }
  if (plVar7 != (longlong *)0x0) {
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
  }
LAB_148d7cd2c:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7cf52 FUN_148d7cf52 body=302 status=ok
// SIG undefined FUN_148d7cf52(void)

longlong * FUN_148d7cf52(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b97ce90;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b97ce90;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148d7d080 FUN_148d7d080 body=49 status=ok
// SIG undefined FUN_148d7d080(void)

void FUN_148d7d080(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_148d80982();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1412d7be2(*(undefined8 *)(param_1 + 0x18),param_1 + 0x58);
  FUN_1458b44fe(param_1);
  return;
}



// FUNCTION 148d7d0b2 FUN_148d7d0b2 body=29 status=ok
// SIG undefined FUN_148d7d0b2(void)

undefined8 FUN_148d7d0b2(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 148d7d0d8 FUN_148d7d0d8 body=29 status=ok
// SIG undefined FUN_148d7d0d8(void)

undefined8 FUN_148d7d0d8(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x18,param_2,1);
  return param_2;
}



// FUNCTION 148d7d0f6 FUN_148d7d0f6 body=47 status=ok
// SIG undefined FUN_148d7d0f6(void)

undefined8 FUN_148d7d0f6(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x750) == '\x01') {
    cVar1 = FUN_1407a73f8(param_1 + 0x4f0,&DAT_14cbcddd8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148d7d14e FUN_148d7d14e body=161 status=ok
// SIG undefined FUN_148d7d14e(void)

void FUN_148d7d14e(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = *(int *)(param_1 + 0x128);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(lVar2 + lVar4) == *param_2) && (*(int *)(lVar2 + 8 + lVar4) == param_2[2])) {
        return;
      }
      lVar4 = lVar4 + 0xc;
    } while (lVar3 * 0xc != lVar4);
  }
  *(uint *)(param_1 + 0x128) = iVar1 + 1U;
  if (*(uint *)(param_1 + 300) < iVar1 + 1U) {
    FUN_1446dd912((longlong *)(param_1 + 0x120),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x120);
  }
  *(int *)(lVar2 + 8 + lVar3 * 0xc) = param_2[2];
  *(undefined8 *)(lVar2 + lVar3 * 0xc) = *(undefined8 *)param_2;
  FUN_140fec1fc(param_1);
  return;
}



// FUNCTION 148d7d1f0 FUN_148d7d1f0 body=143 status=ok
// SIG undefined FUN_148d7d1f0(void)

void FUN_148d7d1f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  int *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x120) + lVar1) == *param_2) &&
         (*(int *)(*(longlong *)(param_1 + 0x120) + 8 + lVar1) == param_2[2])) {
        local_18 = param_2;
        FUN_140bdf3fa(param_1 + 0x120,&local_18);
        FUN_140fec1fc(param_1);
        break;
      }
      lVar1 = lVar1 + 0xc;
    } while ((longlong)*(int *)(param_1 + 0x128) * 0xc != lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d7d280 FUN_148d7d280 body=146 status=ok
// SIG undefined FUN_148d7d280(void)

undefined8 * FUN_148d7d280(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_145779c2a();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7d314 FUN_148d7d314 body=608 status=ok
// SIG undefined FUN_148d7d314(void)

void FUN_148d7d314(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_80;
  byte local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    lVar3 = (**(code **)(*(longlong *)(param_2 + 0x9a8) + 0x10))(param_2 + 0x9a8);
    if (lVar3 != 0) {
      lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
      if (lVar4 == 0) {
        local_a8 = 0;
        local_a0 = 0;
      }
      else {
        local_a0 = *(undefined4 *)(lVar4 + 0x98);
        local_a8 = *(ulonglong *)(lVar4 + 0x90);
      }
      FUN_140e3418c(&local_a8,local_d0,1);
      local_c8 = &DAT_3f800000ffffffff;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      cVar2 = FUN_14189d00a(param_1);
      if (cVar2 != '\0') {
        cVar2 = FUN_1441a6532(param_1);
        if (cVar2 == '\0') {
          lVar4 = FUN_1406d51c0();
          local_a8 = local_a8 & 0xffffffffffffff00;
          local_80 = 0;
          FUN_1456bb102(&local_a8,param_2);
          FUN_1448729ea(lVar4 + 0x1e8,local_68,&local_a8);
          uVar7 = FUN_144a7ecd0(local_68);
          local_c8 = (undefined1 *)CONCAT44(uVar7,(undefined4)local_c8);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar6 = local_68;
            if (0x18 < local_50) {
              ppppuVar6 = (undefined8 ****)local_68[0];
            }
            (*pcVar1)(ppppuVar6);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(local_68[0]);
          }
          FUN_144a5ac3a(&local_a8);
        }
      }
      if (param_4 != 0) {
        FUN_1459ff440(&local_b8,param_4);
      }
      local_d8 = (undefined4)param_1[0x13];
      local_e0 = param_1[0x12];
      uVar5 = FUN_140672052(param_1[1]);
      FUN_140c5218a(param_3,&local_a8,uVar5,&local_e0);
      FUN_1489420c4(local_68,&local_a8);
      FUN_14164c0ba(lVar3,local_68,local_d0);
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_70])(&local_a8);
      FUN_140de863f(local_b8,uStack_b0 & 0xffffffff);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7d576 FUN_148d7d576 body=52 status=ok
// SIG undefined FUN_148d7d576(void)

void FUN_148d7d576(longlong param_1,undefined8 param_2)

{
  FUN_143df33ee();
  if (*(int *)(param_1 + 8) != 0) {
    FUN_14011750a(param_1 + 0x18,param_2);
    return;
  }
  return;
}



// FUNCTION 148d7d5aa FUN_148d7d5aa body=823 status=ok
// SIG undefined FUN_148d7d5aa(void)

undefined8 FUN_148d7d5aa(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94 [12];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar6 = (longlong *)FUN_146130dfe();
  if ((plVar6 != (longlong *)0x0) && (lVar7 = FUN_1406d51c0(), *(char *)(lVar7 + 0x290) == '\n')) {
    FUN_144a659ac(lVar7 + 0x2a0,local_94,2);
    FUN_1448075d0(&local_88,local_94);
    uVar8 = FUN_14060eaf6(&local_88);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (uVar8 != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
      if (lVar3 == 0) {
        local_98 = DAT_14c948620;
        local_a0 = DAT_14c948618;
      }
      else {
        local_98 = *(undefined4 *)(lVar3 + 0x10);
        local_a0 = *(undefined8 *)(lVar3 + 8);
      }
      FUN_1448075d0(&local_88,&local_a0);
      uVar9 = FUN_14060eaf6(&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      uVar10 = 0;
      if (uVar9 == 0) goto LAB_148d7d8a3;
      local_68 = 0;
      local_60 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      FUN_14890bbc8(uVar8,&local_88);
      if ((int)uStack_80 != local_54) {
        uVar5 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        puVar11 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar11 = local_50;
        }
        for (iVar2 = *(int *)(puVar11 + (ulonglong)(local_40 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
            iVar2 != -1; iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_88 + 8)) {
          if (*(ulonglong *)(local_88 + (longlong)iVar2 * 0x10) == uVar9) goto LAB_148d7d87a;
        }
      }
      if (uVar9 != uVar8) {
        FUN_144a659ac(lVar7 + 0x2a0,local_c0,2);
        (**(code **)(*plVar6 + 0x78))(plVar6,&local_b0,local_c0);
        if ((local_b0 == 0) || (cVar4 = FUN_1405f61f4(), cVar4 != '\x06')) {
          (**(code **)(*plVar6 + 0x38))(plVar6,local_c0,lVar7 + 0x290);
          cVar4 = FUN_141882374(local_c0,DAT_14cb88918);
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_a8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar1 = (int *)((longlong)local_a8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_a8 + 0x10))(local_a8);
              }
            }
          }
          if (cVar4 == '\0') goto LAB_148d7d87a;
        }
        else if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_a8 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)local_a8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a8 + 0x10))(local_a8);
            }
          }
        }
        local_40 = 0;
        if (local_48 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1401bcc5a(&local_88);
        uVar10 = 1;
        goto LAB_148d7d8a3;
      }
LAB_148d7d87a:
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1401bcc5a(&local_88);
    }
  }
  uVar10 = 0;
LAB_148d7d8a3:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7d8e2 FUN_148d7d8e2 body=100 status=ok
// SIG undefined FUN_148d7d8e2(void)

void FUN_148d7d8e2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140c05e56();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    puVar3 = (undefined8 *)(param_1 + 0x1a8);
    lVar2 = FUN_144a61814(uVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 148d7d946 FUN_148d7d946 body=372 status=ok
// SIG undefined FUN_148d7d946(void)

longlong * FUN_148d7d946(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  undefined1 local_34 [8];
  int local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_140c05e56();
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x178) != 0) {
      lVar4 = FUN_14041aabe();
      lVar6 = *(longlong *)(lVar3 + 0x178);
      if (((((lVar6 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) &&
          ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) &&
         ((*(longlong *)(lVar6 + 0x488) != 0 && (lVar6 = FUN_1401b2ade(), lVar6 != 0)))) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = *(longlong *)(lVar6 + 0x23d8);
          *param_2 = lVar4;
          iVar1 = *(int *)(lVar6 + 0x23e0);
          *(int *)(param_2 + 1) = iVar1;
          param_2[2] = 0;
          if (lVar4 != 0 && iVar1 - 1U < 0xfffffffe) goto LAB_148d7da1a;
        }
      }
    }
    FUN_140fda471(local_2c,lVar3);
    if (local_2c[0] != 0) {
      FUN_140e3418c(local_2c,local_34,1);
      lVar3 = FUN_1413e2d1a(local_34);
      if (lVar3 != 0) {
        plVar5 = (longlong *)FUN_145d1453e(lVar3);
        *param_2 = *plVar5;
        *(int *)(param_2 + 1) = (int)plVar5[1];
        param_2[2] = 0;
        goto LAB_148d7da1a;
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x6000;
  param_2[2] = 0;
LAB_148d7da1a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7dabc FUN_148d7dabc body=140 status=ok
// SIG undefined FUN_148d7dabc(void)

void FUN_148d7dabc(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143df6084();
  lVar1 = FUN_14133cf88(param_1);
  if (lVar1 != 0) {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(lVar1 + 8);
    }
    FUN_144a7660c(puVar2,&local_34,1);
    local_20 = local_2c;
    local_28 = local_34;
    FUN_140d59fc2(param_1 + 400);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7db4a FUN_148d7db4a body=347 status=ok
// SIG undefined FUN_148d7db4a(void)

ulonglong FUN_148d7db4a(undefined8 param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined7 uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = FUN_140c05e56();
  FUN_1410d53f0(&local_48,uVar7);
  if (plStack_40 != (longlong *)0x0) {
    iVar5 = (int)plStack_40[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_40[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plStack_40 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = plStack_40;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
    lVar3 = local_48;
    if (plVar8 != (longlong *)0x0) {
      if (local_48 == 0) {
LAB_148d7dc82:
        uVar7 = 0;
      }
      else {
        uVar9 = (undefined7)((ulonglong)param_2 >> 8);
        if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
          if (*param_3 == 0) goto LAB_148d7dc82;
          local_58 = 0;
          uStack_50 = 0;
          uVar7 = CONCAT71(uVar9,1);
          FUN_140e3418c(param_3,&local_48,1);
          uVar6 = FUN_148e0b166(lVar3,&local_48,&local_58);
          param_3 = (int *)(ulonglong)uVar6;
        }
        else {
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          local_60 = 0;
          local_68 = 0xbf800000;
          local_78 = 1;
          local_70 = &local_48;
          uVar6 = FUN_144230d0e(lVar3,param_2,0,0);
          param_3 = (int *)(ulonglong)uVar6;
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          uVar7 = CONCAT71(uVar9,1);
        }
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_148d7dc1f;
    }
  }
  uVar7 = 0;
LAB_148d7dc1f:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)uVar7 >> 8),(byte)uVar7 & (byte)param_3) & 0xffffffff;
}



// FUNCTION 148d7dca6 FUN_148d7dca6 body=303 status=ok
// SIG undefined FUN_148d7dca6(void)

void FUN_148d7dca6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (*param_3 != 0)) {
    uVar6 = FUN_140c05e56();
    FUN_1410d53f0(&local_40,uVar6);
    plVar8 = (longlong *)CONCAT44(uStack_34,local_38);
    if (plVar8 != (longlong *)0x0) {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar9 = iVar5 == iVar4;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
      }
      lVar3 = local_40;
      if (plVar8 != (longlong *)0x0) {
        if (local_40 != 0) {
          local_40 = *param_3;
          local_38 = 0x6000;
          local_30 = 0;
          lVar7 = FUN_144a5dd5e();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
            param_2 = 0;
          }
          local_48 = 0;
          local_50 = 1;
          local_58 = 0;
          local_60 = 0;
          local_68 = 1;
          FUN_1416a3978(lVar3,param_2,&local_40,0);
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d7ddd6 FUN_148d7ddd6 body=17 status=ok
// SIG undefined FUN_148d7ddd6(void)

void FUN_148d7ddd6(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [44];
  uint uStack_7c;
  longlong lStack_78;
  undefined4 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_54 [12];
  ulonglong uStack_48;
  
  plVar3 = *(longlong **)(param_1 + 0xe0);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_7c = param_2;
  FUN_140d7e3fa(plVar3,auStack_54);
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3,auStack_54);
  lStack_68 = 0;
  uStack_60 = 0;
  uVar10 = *(uint *)(plVar3 + 0x21);
  iVar7 = (int)plVar3[0x23] + uVar10;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  iVar8 = 0;
  if (iVar7 != 0) {
    FUN_146557146(&lStack_68);
    uVar10 = *(uint *)(plVar3 + 0x21);
    iVar8 = (int)uStack_60;
  }
  if (uVar10 != 0) {
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar10 + iVar8);
    if ((uint)(uStack_60._4_4_ - iVar8) < uVar10) {
      FUN_140f16476(&lStack_68,iVar8);
    }
    memcpy((void *)((longlong)iVar8 * 8 + lStack_68),(void *)plVar3[0x20],(longlong)(int)uVar10 << 3
          );
    iVar8 = (int)uStack_60;
  }
  uVar10 = *(uint *)(plVar3 + 0x23);
  if ((longlong)(int)uVar10 != 0) {
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar10 + iVar8);
    if ((uint)(uStack_60._4_4_ - iVar8) < uVar10) {
      FUN_140f16476(&lStack_68,iVar8);
    }
    memcpy((void *)((longlong)iVar8 * 8 + lStack_68),(void *)plVar3[0x22],(longlong)(int)uVar10 << 3
          );
    iVar8 = (int)uStack_60;
  }
  if (iVar8 != 0) {
    lVar6 = (longlong)iVar8 << 3;
    uVar11 = 0;
    do {
      if (*(longlong *)(lStack_68 + uVar11 * 8) == lVar5) goto LAB_1441a594f;
      uVar11 = uVar11 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    uVar11 = 0xffffffff;
LAB_1441a594f:
    if (0 < iVar8) {
      do {
        uVar10 = (int)uVar11 + (-(param_3 & 0xff) | 1);
        if ((int)uVar10 < 0) {
          uVar10 = (int)uStack_60 - 1;
        }
        uVar9 = 0;
        if ((int)uStack_60 <= (int)uVar10) {
          uVar10 = uVar9;
        }
        uVar11 = (ulonglong)uVar10;
        plVar1 = *(longlong **)(lStack_68 + (longlong)(int)uVar10 * 8);
        plVar2 = (longlong *)plVar1[0x14];
        if (plVar2 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar6 = FUN_140fa5e64();
          if (((lVar6 != 0) && (uVar9 = 0, *(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            uVar9 = (**(code **)(*plVar2 + 0x80))(plVar2);
          }
        }
        cVar4 = (**(code **)(*plVar1 + 0xf0))(plVar1);
        if ((cVar4 != '\0') && ((uVar9 == uStack_7c || (uVar9 == 0xfffffffe)))) {
          uStack_70 = (undefined4)plVar1[0x13];
          lStack_78 = plVar1[0x12];
          FUN_146253a1c(plVar3,uStack_7c);
          break;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if (lStack_68 != 0) {
    FUN_1400020a8();
  }
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d7dde8 FUN_148d7dde8 body=589 status=ok
// SIG undefined FUN_148d7dde8(void)

void FUN_148d7dde8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_74 [4];
  longlong *local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_143df686c(param_1,&local_60);
  if (*(char *)(param_1 + 0x174) == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa4);
    if (lVar2 != 0) {
      lVar2 = FUN_145725aea(lVar2,1);
      if (lVar2 != 0) {
        lVar2 = FUN_144a7ba4c(lVar2);
        if (lVar2 != 0) {
          lVar2 = FUN_145da44aa(lVar2);
          if (lVar2 != 0) {
            local_50 = L"FastForwardHeader";
            local_48 = 0x11;
            FUN_1446e940c(&local_88,&local_50);
            local_50 = L"MissionSystem";
            local_48 = 0xd;
            FUN_1446e940c(local_74,&local_50);
            FUN_140208bae(local_70,local_74,&local_88,L"Fast Forward?");
            local_50 = L"FastForwardText";
            local_48 = 0xf;
            FUN_1446e940c(&local_88,&local_50);
            local_50 = L"MissionSystem";
            local_48 = 0xd;
            FUN_1446e940c(local_74,&local_50);
            FUN_140208bae(&local_50,local_74,&local_88,
                          L"Would you like to skip missions you have already completed in another play session?"
                         );
            *(undefined1 *)(param_1 + 0x174) = 1;
            local_88 = (undefined8 *)0x0;
            local_80 = 0;
            FUN_1446efa72(&local_88,0,2,0x10);
            local_80 = 2;
            *local_88 = &PTR_LAB_14b972ed0;
            LOCK();
            UNLOCK();
            lVar4 = DAT_14c758608 + 1;
            lVar1 = DAT_14c758608 + 1;
            if (lVar4 == 0) {
              LOCK();
              UNLOCK();
              lVar4 = DAT_14c758608 + 2;
              lVar1 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar1;
            local_88[2] = lVar4;
            *local_88 = &PTR_FUN_14b97dae0;
            local_88[3] = param_1;
            uVar3 = FUN_140e82300();
            local_98 = FUN_140e82300();
            local_90 = uVar3;
            FUN_14615e246(lVar2,local_70,&local_50,&local_88);
            FUN_1449db362(&local_88);
            if (local_50 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_50 + 0x10))();
            }
            if (local_70[0] != (longlong *)0x0) {
              (**(code **)(*local_70[0] + 0x10))();
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7e036 FUN_148d7e036 body=218 status=ok
// SIG undefined FUN_148d7e036(void)

undefined8 * FUN_148d7e036(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_140c05e56();
  FUN_1410d53f0(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        *param_2 = *(undefined8 *)(local_30 + 0xd0);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(local_30 + 0xd8);
        param_2[2] = 0;
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (local_30 != 0) goto LAB_148d7e0ef;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x6000;
  param_2[2] = 0;
LAB_148d7e0ef:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7e112 FUN_148d7e112 body=2604 status=ok
// SIG undefined FUN_148d7e112(void)

void FUN_148d7e112(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  ushort local_340;
  byte *local_330;
  undefined4 *local_328;
  longlong local_320;
  longlong local_318;
  undefined4 *local_310;
  longlong local_308;
  ulonglong local_300;
  longlong local_2f8;
  ulonglong local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 *local_2a8;
  char local_2a0;
  undefined4 local_298 [2];
  longlong local_290;
  undefined4 local_98 [10];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_14082167c();
  local_308 = param_2 + 0x2c0;
  local_320 = param_2;
  FUN_140fcbf3a(local_308,param_1 + 0x78);
  iVar6 = *(int *)(param_1 + 200);
  if (0 < iVar6) {
    local_300 = param_1 + 0x10;
    local_310 = local_98;
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_328 = (undefined4 *)(lVar10 + 0xc7c);
    local_330 = (byte *)(lVar10 + 0xc80);
    lVar10 = 0;
    uVar11 = 0;
    local_318 = param_1;
    do {
      lVar12 = local_320;
      lVar8 = *(longlong *)(param_1 + 0xc0);
      local_2c0 = *(undefined4 *)(lVar8 + 8 + lVar10);
      local_2c8 = *(undefined8 *)(lVar8 + lVar10);
      if ((int)local_2c8 != 0) {
        local_2d0 = *(undefined4 *)((undefined8 *)(lVar8 + lVar10) + 1);
        local_2d8 = *(undefined8 *)(lVar8 + lVar10);
        FUN_14089ceb8(local_98,local_320,&local_2d8);
        local_2f8 = FUN_1406b2efc(local_308);
        lVar8 = local_2f8 + 0xb0;
        puVar7 = (undefined8 *)FUN_144a8232a(&DAT_14cbcdaa0);
        local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
        local_2b8._4_4_ = 0;
        uStack_2b0._0_4_ = 0;
        uStack_2b0._4_4_ = 0;
        FUN_144976b9c(&local_2b8,*puVar7);
        local_340 = local_340 & 0xff00;
        local_348 = local_348 & 0xffffffffffffff00;
        FUN_14064171a(lVar8,&local_2d8,&DAT_14cbcd498,&local_2b8);
        bVar3 = *(byte *)(param_1 + 8);
        local_2f0 = uVar11;
        FUN_14089cb6a(param_1,&local_2b8,uVar11 & 0xffffffff,lVar12);
        local_348 = local_300;
        local_340 = (ushort)bVar3 * 2;
        lVar8 = FUN_1408236ae(param_1,lVar12,&local_2b8,&local_2c8);
        local_2a0 = '\0';
        local_2b8 = local_298;
        local_2a8 = local_310;
        uStack_2b0 = local_2b8;
        FUN_14014e8d0(local_98,&local_2b8);
        if (local_2a8 <= uStack_2b0 + 1) {
          FUN_145753a78(&local_2b8,4);
        }
        *uStack_2b0 = 0x203d3d20;
        uStack_2b0 = uStack_2b0 + 1;
        FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,0);
        if (local_2a8 <= (undefined4 *)((longlong)uStack_2b0 + 1)) {
          FUN_145753a78(&local_2b8,1);
        }
        *(undefined1 *)uStack_2b0 = 0;
        uStack_2b0 = (undefined4 *)((longlong)uStack_2b0 + 1);
        FUN_140822110(&local_2e8,&local_2b8,0);
        iVar6 = *(int *)(lVar8 + 0x38);
        *(uint *)(lVar8 + 0x38) = iVar6 + 1U;
        if (*(uint *)(lVar8 + 0x3c) < iVar6 + 1U) {
          FUN_1410f5714((longlong *)(lVar8 + 0x30),iVar6);
        }
        lVar8 = *(longlong *)(lVar8 + 0x30);
        lVar12 = (longlong)iVar6 * 0x10;
        *(undefined8 *)(lVar8 + lVar12) = 0;
        *(ulonglong *)(lVar8 + lVar12) = CONCAT44(local_2e8._4_4_,(uint)local_2e8);
        local_2e8._0_4_ = 0;
        local_2e8._4_4_ = 0;
        *(undefined4 *)(lVar8 + 8 + lVar12) = local_2e0;
        *(undefined4 *)(lVar8 + 0xc + lVar12) = uStack_2dc;
        local_2e0 = 0;
        uStack_2dc = 0;
        FUN_1447cd778(0,0);
        if (CONCAT44(local_2e8._4_4_,(uint)local_2e8) != 0) {
          FUN_1400020a8();
        }
        if (local_2a0 == '\x01') {
          FUN_1400020a8(local_2b8);
        }
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x10 + lVar10);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,param_1,local_320,&local_2d8);
        }
        uVar4 = *local_328;
        bVar3 = *local_330;
        if ((bVar3 & 1) != 0) {
          *local_330 = 0;
          *local_328 = 0xffffffff;
        }
        plVar9 = (longlong *)FUN_14001cc68(0x68,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14b41e000;
        plVar9[2] = (longlong)&PTR_FUN_14b35b440;
        plVar9[3] = 0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        plVar9[6] = (longlong)&PTR_FUN_14b00be10;
        plVar9[7] = 0;
        plVar9[8] = 0;
        plVar9[9] = 0;
        plVar9[10] = 0;
        plVar9[0xb] = 0;
        plVar9[0xc] = 0;
        if ((bVar3 & 1) != 0) {
          *local_328 = uVar4;
          *local_330 = 1;
        }
        local_2a0 = '\0';
        local_2b8 = local_298;
        local_2a8 = local_310;
        uStack_2b0 = local_2b8;
        FUN_14014e8d0(local_98,&local_2b8);
        if (local_2a8 <= uStack_2b0 + 1) {
          FUN_145753a78(&local_2b8,4);
        }
        *uStack_2b0 = 0x203d3d20;
        uStack_2b0 = uStack_2b0 + 1;
        FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,2);
        if (local_2a8 <= (undefined4 *)((longlong)uStack_2b0 + 1)) {
          FUN_145753a78(&local_2b8,1);
        }
        *(undefined1 *)uStack_2b0 = 0;
        uStack_2b0 = (undefined4 *)((longlong)uStack_2b0 + 1);
        FUN_140822110(&local_2e8,&local_2b8,0);
        FUN_14089cace(plVar9 + 2,&local_2e8);
        FUN_1447cd778(CONCAT44(local_2e8._4_4_,(uint)local_2e8),local_2e0);
        if (CONCAT44(local_2e8._4_4_,(uint)local_2e8) != 0) {
          FUN_1400020a8();
        }
        puVar7 = (undefined8 *)FUN_144a8232a(&DAT_14cbcd4b0);
        local_2e8._0_4_ = (uint)local_2e8 & 0xffffff00;
        local_2e8._4_4_ = 0;
        local_2e0 = 0;
        uStack_2dc = 0;
        FUN_144976b9c(&local_2e8,*puVar7);
        local_340 = local_340 & 0xff00;
        local_348 = local_348 & 0xffffffffffffff00;
        FUN_14064171a(plVar9 + 6,&local_2d8,&DAT_14cbcd498,&local_2e8);
        local_2e0 = SUB84(plVar9,0);
        uStack_2dc = (undefined4)((ulonglong)plVar9 >> 0x20);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_2e8 = plVar9 + 2;
        FUN_1408229d0(local_308,&local_2e8);
        plVar5 = (longlong *)CONCAT44(uStack_2dc,local_2e0);
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
        if (local_2a0 == '\x01') {
          FUN_1400020a8(local_2b8);
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar9 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        lVar8 = FUN_140823ef2(local_318,local_320,&local_2d8);
        uVar4 = *local_328;
        bVar3 = *local_330;
        if ((bVar3 & 1) != 0) {
          *local_330 = 0;
          *local_328 = 0xffffffff;
        }
        plVar9 = (longlong *)FUN_14001cc68(0x38,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14b97dc60;
        plVar9[3] = 0;
        plVar9[4] = 0;
        plVar9[2] = (longlong)&PTR_FUN_14b5c72c0;
        plVar9[5] = 0;
        plVar9[6] = 0;
        if ((bVar3 & 1) != 0) {
          *local_328 = uVar4;
          *local_330 = 1;
        }
        *(undefined4 *)(plVar9 + 4) = 1;
        FUN_140823334(plVar9 + 3,0);
        puVar7 = (undefined8 *)plVar9[3];
        *puVar7 = DAT_14cbcd488;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        local_2e8._0_4_ = CONCAT31(local_2e8._1_3_,2);
        uStack_2dc = 1;
        local_2e8._4_4_ = 0;
        local_2e0 = 0;
        FUN_14600d166(local_318,&local_2b8,local_320);
        FUN_140821fec(puVar7,&local_2b8,&local_2e8,1);
        if (local_290 != 0) {
          FUN_1400020a8();
        }
        iVar6 = (int)plVar9[4];
        *(uint *)(plVar9 + 4) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar9 + 0x24) < iVar6 + 1U) {
          FUN_140823334(plVar9 + 3,iVar6);
        }
        puVar7 = (undefined8 *)(plVar9[3] + (longlong)iVar6 * 0x28);
        *puVar7 = DAT_14cbcd490;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        local_2b8._0_4_ = CONCAT31(local_2b8._1_3_,2);
        uStack_2b0._4_4_ = 1;
        local_2b8._4_4_ = 0;
        uStack_2b0._0_4_ = 0;
        FUN_140821fec(puVar7,local_98,&local_2b8,5);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        iVar6 = *(int *)(lVar8 + 0x50);
        *(uint *)(lVar8 + 0x50) = iVar6 + 1U;
        if (*(uint *)(lVar8 + 0x54) < iVar6 + 1U) {
          FUN_140822376((longlong *)(lVar8 + 0x48),iVar6);
        }
        lVar8 = *(longlong *)(lVar8 + 0x48);
        *(longlong **)(lVar8 + (longlong)iVar6 * 0x10) = plVar9 + 2;
        *(longlong **)(lVar8 + 8 + (longlong)iVar6 * 0x10) = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar9 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        lVar12 = local_2f8;
        lVar8 = local_2f8 + 0x140;
        puVar7 = (undefined8 *)FUN_144a8232a(&DAT_14cbcd4b0);
        local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
        local_2b8._4_4_ = 0;
        uStack_2b0._0_4_ = 0;
        uStack_2b0._4_4_ = 0;
        FUN_144976b9c(&local_2b8,*puVar7);
        local_340 = local_340 & 0xff00;
        local_348 = local_348 & 0xffffffffffffff00;
        FUN_14064171a(lVar8,&local_2d8,&DAT_14cbcd498,&local_2b8);
        puVar7 = (undefined8 *)FUN_144a8232a(&DAT_14cbcda88);
        local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
        local_2b8._4_4_ = 0;
        uStack_2b0._0_4_ = 0;
        uStack_2b0._4_4_ = 0;
        FUN_144976b9c(&local_2b8,*puVar7);
        local_340 = local_340 & 0xff00;
        local_348 = local_348 & 0xffffffffffffff00;
        FUN_14064171a(lVar12 + 0xe0,&local_2d8,&DAT_14cbcd498,&local_2b8);
        puVar7 = (undefined8 *)FUN_144a8232a(&DAT_14cbcda88);
        local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
        local_2b8._4_4_ = 0;
        uStack_2b0._0_4_ = 0;
        uStack_2b0._4_4_ = 0;
        FUN_144976b9c(&local_2b8,*puVar7);
        local_340 = local_340 & 0xff00;
        local_348 = local_348 & 0xffffffffffffff00;
        FUN_14064171a(lVar12 + 0x110,&local_2d8,&DAT_14cbcd498,&local_2b8);
        puVar7 = (undefined8 *)FUN_144a8232a(&DAT_14cbcda88);
        local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
        local_2b8._4_4_ = 0;
        uStack_2b0._0_4_ = 0;
        uStack_2b0._4_4_ = 0;
        FUN_144976b9c(&local_2b8,*puVar7);
        local_340 = local_340 & 0xff00;
        local_348 = local_348 & 0xffffffffffffff00;
        FUN_14064171a(lVar12 + 0x58,&local_2d8,&DAT_14cbcd498,&local_2b8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar9 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        iVar6 = *(int *)(local_318 + 200);
        param_1 = local_318;
        uVar11 = local_2f0;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x28;
    } while ((longlong)uVar11 < (longlong)iVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d7eb48 FUN_148d7eb48 body=234 status=ok
// SIG undefined FUN_148d7eb48(void)

longlong * FUN_148d7eb48(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97dd60;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97dd80;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d89f7e(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7ec3a FUN_148d7ec3a body=158 status=ok
// SIG undefined FUN_148d7ec3a(void)

longlong * FUN_148d7ec3a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_148d8a025();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d8a6ec(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7ecdc FUN_148d7ecdc body=91 status=ok
// SIG undefined FUN_148d7ecdc(void)

void FUN_148d7ecdc(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == 0) || (lVar1 = FUN_146612a7e(), lVar1 == 0)) ||
     (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = param_2;
    }
  }
  FUN_140005f6c(param_1,lVar2,param_3,param_4);
  return;
}



// FUNCTION 148d7ed38 FUN_148d7ed38 body=168 status=ok
// SIG undefined FUN_148d7ed38(void)

void FUN_148d7ed38(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14891f44e();
  FUN_14011750a(param_1 + 0x10,param_2);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x1c);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x1c) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x1c) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7ede2 FUN_148d7ede2 body=94 status=ok
// SIG undefined FUN_148d7ede2(void)

void FUN_148d7ede2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1457f66cc(param_2);
  if (lVar1 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x18);
    local_20 = *(undefined8 *)(param_1 + 0x10);
    FUN_141417784(lVar1,&local_20,*(undefined1 *)(param_1 + 0x1c));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7ee42 FUN_148d7ee42 body=135 status=ok
// SIG undefined FUN_148d7ee42(void)

undefined8 FUN_148d7ee42(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  FUN_1408226d0(param_1 + 0x10,&local_30,1);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"TraitMission=%s bAvailable=%d",puVar2,uVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d7eeca FUN_148d7eeca body=273 status=ok
// SIG undefined FUN_148d7eeca(void)

longlong FUN_148d7eeca(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_14060ed7a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x28) = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      goto LAB_148d7eefe;
    }
  }
  else {
LAB_148d7eefe:
    if (lVar5 != 0) {
      return lVar6;
    }
    uVar4 = FUN_14060ed7a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      return *(longlong *)(param_1 + 0x28);
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
      goto LAB_148d7efc7;
    }
  }
  lVar5 = 0;
LAB_148d7efc7:
  *(longlong *)(param_1 + 0x28) = lVar5;
  return lVar5;
}



// FUNCTION 148d7f004 FUN_148d7f004 body=254 status=ok
// SIG undefined FUN_148d7f004(void)

undefined8
FUN_148d7f004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b97e180;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7f104 FUN_148d7f104 body=125 status=ok
// SIG undefined FUN_148d7f104(void)

void FUN_148d7f104(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar2 = FUN_1403ca142();
    if (((*(longlong *)(lVar1 + 0x1f0) != 0) &&
        (((lVar2 != 0 && (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0x10), lVar1 != 0))
         && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = FUN_14021f720();
      if (lVar1 != 0) {
        FUN_140457ffc(lVar1 + 0x40,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d7f182 FUN_148d7f182 body=739 status=ok
// SIG undefined FUN_148d7f182(void)

void FUN_148d7f182(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar6 = *(char *)(param_2 + 0xb0);
  *(bool *)(param_1 + 0x398) = (byte)(cVar6 - 1U) < 7;
  if (cVar6 != '\a') {
    if (cVar6 == '\t') {
      FUN_145be4cfc(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
    }
    if (cVar6 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
    }
    goto LAB_148d7f1cc;
  }
  if ((*(longlong *)(param_1 + 0x470) == 0) || (*(char *)(param_1 + 0x178) != '\x03'))
  goto LAB_148d7f1cc;
  uVar7 = FUN_1447210f0(param_1);
  FUN_148895840(&local_50,uVar7);
  if (local_50 != 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar5 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b419c70;
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
    local_60[2] = lVar8;
    *local_60 = &PTR_FUN_14b97e1f0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar5[4] = FUN_1441aa27c;
    *(undefined4 *)(puVar5 + 5) = 0;
    lVar4 = *(longlong *)(param_1 + 0x470);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
LAB_148d7f2eb:
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      FUN_1400bbfc4(&local_40,lVar4);
      uStack_80 = CONCAT44(uStack_3c,local_40);
      local_78 = CONCAT44(uStack_34,uStack_38);
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
      uStack_70 = CONCAT44(uStack_2c,local_30);
      local_68 = CONCAT44(uStack_24,uStack_28);
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      if (cVar6 != '\0') {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
          local_88 = 0;
          goto LAB_148d7f3e0;
        }
      }
      FUN_14485c47a(&local_88,lVar4);
    }
    else {
      uStack_70 = 0;
      local_68 = 0;
      if (lVar4 != 0) goto LAB_148d7f2eb;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
    }
LAB_148d7f3e0:
    local_98 = &DAT_14c948618;
    FUN_145d5623a(local_50,&local_40,&local_88,&local_60);
    if (uStack_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_60);
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
LAB_148d7f1cc:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7f48e FUN_148d7f48e body=254 status=ok
// SIG undefined FUN_148d7f48e(void)

undefined8
FUN_148d7f48e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b419ce0;
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
  *local_48 = &PTR_FUN_14b97e260;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c81c2c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7f58e FUN_148d7f58e body=512 status=ok
// SIG undefined FUN_148d7f58e(void)

undefined8 FUN_148d7f58e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1;
  if (*(char *)(param_1 + 0xb0) == '\0') {
LAB_148d7f5b2:
    FUN_1441aa61c(&local_48);
    uVar6 = 0;
  }
  else {
    lVar5 = FUN_14577a94c();
    if (lVar5 != 0) {
      iVar4 = FUN_14490d72a(lVar5);
      if (iVar4 != 3) goto LAB_148d7f5b2;
    }
    cVar3 = FUN_144729dda(param_1 + 100);
    if (cVar3 != '\0') {
      uVar6 = FUN_14479d2ce(param_1 + 100);
      lVar7 = FUN_14119d4d6(uVar6);
      if (lVar7 != 0) {
        lVar5 = FUN_140334a94(lVar7,lVar5);
        if (lVar5 != 0) {
          lVar7 = FUN_144a5dd5e();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            FUN_148c38b54(lVar5);
          }
        }
      }
    }
    if (((*(longlong *)(param_1 + 0x98) == 0) || (*(longlong *)(param_1 + 0xa0) == 0)) ||
       (uVar6 = 1, *(int *)(*(longlong *)(param_1 + 0xa0) + 8) < 1)) {
      uVar6 = FUN_1401cb356();
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      local_38 = 3;
      *local_40 = &PTR_LAB_149e02020;
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
      local_40[2] = lVar7;
      *local_40 = &PTR_FUN_14b97c290;
      local_40[3] = param_1;
      local_40[4] = FUN_148d7f58e;
      local_58 = 0x40400000;
      FUN_1405f67fc(uVar6,&local_30,&local_40,L"FOakNewGameState.CheckPingHostAboutCurrentState");
      *(undefined8 *)(param_1 + 0x98) = local_30;
      local_30 = 0;
      plVar2 = *(longlong **)(param_1 + 0xa0);
      *(longlong **)(param_1 + 0xa0) = local_28;
      local_28 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        if (local_28 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
        }
      }
      FUN_1449db362(&local_40);
      uVar6 = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7f790 FUN_148d7f790 body=269 status=ok
// SIG undefined FUN_148d7f790(void)

ulonglong FUN_148d7f790(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  param_1 = param_1 + 100;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    lVar3 = *(longlong *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      lVar4 = FUN_140b6d0be();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        iVar2 = FUN_14133ce8a(lVar3);
        uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        if (0 < iVar2) goto LAB_148d7f87d;
      }
    }
    lVar3 = FUN_14479d2ce(param_1);
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) {
      uVar8 = 0;
      if (*(int *)(lVar3 + 0x238) < 1) goto LAB_148d7f87d;
      lVar4 = 0;
      do {
        plVar5 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar4);
        if ((((plVar5 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar1 == '\0')) && (plVar5[0x73] != 0)
            ) && ((lVar6 = (**(code **)(*plVar5 + 0x498))(plVar5), lVar6 != 0 &&
                  ((*(byte *)(plVar5[0x73] + 0x39a) & 0x20) == 0)))) {
          uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          goto LAB_148d7f87d;
        }
        lVar4 = lVar4 + 8;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(lVar3 + 0x238));
    }
  }
  uVar8 = 0;
LAB_148d7f87d:
  return uVar8 & 0xffffffff;
}



// FUNCTION 148d7f89e FUN_148d7f89e body=423 status=ok
// SIG undefined FUN_148d7f89e(void)

void FUN_148d7f89e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14577a94c();
  if (lVar4 != 0) {
    iVar3 = FUN_14490d72a(lVar4);
    if ((iVar3 != 3) &&
       ((*(char *)(param_1 + 0x11c) != '\x01' || (*(int *)(param_1 + 0x118) != param_2)))) {
      *(int *)(param_1 + 0x118) = param_2;
      *(undefined1 *)(param_1 + 0x11c) = 1;
      lVar4 = FUN_14662d9fa(param_1);
      if (lVar4 != 0) {
        FUN_148d33aba(lVar4,param_2);
      }
      if (((*(longlong *)(param_1 + 0x88) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) ||
         (*(int *)(*(longlong *)(param_1 + 0x90) + 8) < 1)) {
        uVar5 = FUN_1401cb356();
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,2,0x10);
        local_38 = 2;
        *local_40 = &PTR_LAB_149e02020;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_40[2] = lVar6;
        *local_40 = &PTR_FUN_14b97e570;
        local_40[3] = param_1;
        local_48 = 0x3f800000;
        FUN_1405f67fc(uVar5,&local_30,&local_40,L"FOakNewGameState.SetStartGameTimer");
        *(undefined8 *)(param_1 + 0x88) = local_30;
        local_30 = 0;
        plVar2 = *(longlong **)(param_1 + 0x90);
        *(longlong **)(param_1 + 0x90) = local_28;
        local_28 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))();
            }
          }
        }
        FUN_1449db362(&local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7fa46 FUN_148d7fa46 body=88 status=ok
// SIG undefined FUN_148d7fa46(void)

undefined8 FUN_148d7fa46(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14577a94c();
  if ((((lVar2 != 0) && (iVar1 = FUN_14490d72a(lVar2), iVar1 != 3)) &&
      (*(longlong *)(param_1 + 0x88) != 0)) &&
     (((lVar2 = *(longlong *)(param_1 + 0x90), lVar2 != 0 && (0 < *(int *)(lVar2 + 8))) &&
      (*(char *)(param_1 + 0x11c) == '\x01')))) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),0 < *(int *)(param_1 + 0x118));
  }
  return 0;
}



// FUNCTION 148d7fa9e FUN_148d7fa9e body=338 status=ok
// SIG undefined FUN_148d7fa9e(void)

void FUN_148d7fa9e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x80) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
    *local_40 = &PTR_LAB_149e02020;
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
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b97e340;
    local_40[3] = param_1;
    local_48 = 0;
    FUN_1405f67fc(uVar4,&local_30,&local_40,L"FOakNewGameState.FinishNextFrame");
    *(undefined8 *)(param_1 + 0x78) = local_30;
    local_30 = 0;
    plVar2 = *(longlong **)(param_1 + 0x80);
    *(longlong **)(param_1 + 0x80) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7fbf2 FUN_148d7fbf2 body=228 status=ok
// SIG undefined FUN_148d7fbf2(void)

undefined8
FUN_148d7fbf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b97e420;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7fcd8 FUN_148d7fcd8 body=228 status=ok
// SIG undefined FUN_148d7fcd8(void)

undefined8
FUN_148d7fcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3e9d10;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b97e490;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1459850be(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7fdbe FUN_148d7fdbe body=58 status=ok
// SIG undefined FUN_148d7fdbe(void)

void FUN_148d7fdbe(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    cVar2 = FUN_144729dda(param_1 + 100);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_1 + 100);
      FUN_148d2ffde(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d7fdf8 FUN_148d7fdf8 body=225 status=ok
// SIG undefined FUN_148d7fdf8(void)

void FUN_148d7fdf8(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14662d9fa();
  if (lVar2 != 0) {
    iVar1 = FUN_14487fd02(lVar2);
    if (iVar1 != 3) {
      FUN_144928b90(local_48,4);
      local_58 = DAT_14cbca7a0;
      local_50 = DAT_14cbca7a8;
      FUN_144928d62(local_38,1);
      uVar3 = FUN_1447210f0(lVar2);
      local_68[0] = 1;
      local_5c = 1;
      local_64 = DAT_14cb7c588;
      lVar2 = FUN_140149a73(uVar3,0);
      if (lVar2 != 0) {
        FUN_140bc53f1(local_48,local_68,lVar2,0);
      }
      if (local_20 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7feda FUN_148d7feda body=40 status=ok
// SIG undefined FUN_148d7feda(void)

void FUN_148d7feda(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14577a94c();
  lVar2 = FUN_141221176(uVar1);
  if (lVar2 != 0) {
    FUN_1488c2626(lVar2);
    return;
  }
  return;
}



// FUNCTION 148d7ff02 FUN_148d7ff02 body=206 status=ok
// SIG undefined FUN_148d7ff02(void)

int FUN_148d7ff02(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = FUN_14662d9fa();
  iVar6 = 1;
  if (lVar2 != 0) {
    lVar3 = FUN_14577a94c(param_1);
    iVar6 = 0;
    if (lVar3 == 0) {
      bVar7 = false;
    }
    else {
      iVar1 = FUN_14490d72a(lVar3);
      bVar7 = iVar1 != 3;
    }
    iVar1 = *(int *)(lVar2 + 0x3b0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x3a8);
      lVar3 = 0;
      iVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + lVar3);
        if (((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) &&
           ((*(byte *)(lVar4 + 0x39a) & 0x2a) == 0)) {
          if (bVar7) {
            lVar4 = FUN_1401b2ade();
            if (lVar4 != 0) {
              lVar5 = FUN_144a5dd5e();
              if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) goto LAB_148d7ffc8;
            }
          }
          else {
LAB_148d7ffc8:
            iVar6 = iVar6 + 1;
          }
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  return iVar6;
}



// FUNCTION 148d7ffd0 FUN_148d7ffd0 body=155 status=ok
// SIG undefined FUN_148d7ffd0(void)

void FUN_148d7ffd0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar6) {
    iVar5 = -(int)param_1[1];
    lVar7 = uVar6 * 8;
    do {
      lVar7 = lVar7 + -8;
      cVar3 = FUN_144729dda(*param_1 + lVar7);
      if (cVar3 == '\0') {
        uVar4 = *(uint *)(param_1 + 1);
        if (uVar6 != uVar4) {
          iVar2 = iVar5 + uVar4;
          if (0 < (int)(iVar5 + uVar4)) {
            iVar2 = 1;
          }
          memmove((void *)(*param_1 + uVar6 * 8 + -8),
                  (void *)(*param_1 + (longlong)(int)(uVar4 - iVar2) * 8),(longlong)iVar2 << 3);
          uVar4 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar4 - 1;
        FUN_148d8b860(param_1);
      }
      iVar5 = iVar5 + 1;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148d8006c FUN_148d8006c body=586 status=ok
// SIG undefined FUN_148d8006c(void)

void FUN_148d8006c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *pvVar8;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < (byte)(*(char *)(param_1 + 0xb0) - 5U)) goto LAB_148d8008e;
  uVar2 = FUN_148d7ff02();
  if ((*(char *)(param_1 + 0x140) == '\x01') && (*(uint *)(param_1 + 0x160) < uVar2)) {
    lVar5 = param_1 + 100;
    cVar1 = FUN_144729dda(lVar5);
    if ((cVar1 != '\0') && (lVar4 = FUN_14479d2ce(lVar5), 1 < *(uint *)(lVar4 + 0x40))) {
      uVar6 = FUN_14479d2ce(lVar5);
      lVar5 = FUN_145725aea(uVar6,1);
      if (lVar5 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_140d27aa0(lVar5);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if (*(uint *)(param_1 + 0x160) == uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  cVar1 = *(char *)(param_1 + 0xb0);
  if (cVar1 == '\x05') {
    cVar1 = FUN_148d7f790(param_1);
    uVar6 = 6;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xb0);
      goto LAB_148d80183;
    }
LAB_148d8012b:
    FUN_1441aa338(param_1,uVar6,0);
  }
  else {
LAB_148d80183:
    if (cVar1 == '\x06') {
      cVar1 = FUN_148d7f790(param_1);
      uVar6 = 5;
      if (cVar1 == '\0') goto LAB_148d8012b;
    }
  }
  lVar5 = FUN_14577a94c(param_1);
  if ((lVar5 != 0) && (DAT_14cbcdcd0 == '\0')) {
    DAT_14cbcdcd0 = 1;
    iVar3 = FUN_14490d72a(lVar5);
    if ((1 < uVar2) && ((iVar3 != 3 && (cVar1 = FUN_148d802da(param_1), cVar1 != '\0')))) {
      local_30 = (void *)0x0;
      local_28 = *(int *)(param_1 + 0x150);
      lVar5 = (longlong)local_28;
      pvVar8 = *(void **)(param_1 + 0x148);
      if (lVar5 != 0) {
        FUN_148d8b8fc(&local_30,local_28);
        memcpy(local_30,pvVar8,lVar5 << 3);
        if ((longlong)local_28 != 0) {
          lVar5 = (longlong)local_28 << 3;
          pvVar8 = local_30;
          do {
            cVar1 = FUN_144729dda(pvVar8);
            if (cVar1 != '\0') {
              uVar6 = FUN_14479d2ce(pvVar8);
              lVar4 = FUN_1401b2ade(uVar6);
              if (lVar4 != 0) {
                lVar7 = FUN_144a5dd5e();
                if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                  FUN_148c3645c(lVar4);
                }
              }
            }
            pvVar8 = (void *)((longlong)pvVar8 + 8);
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        if (local_30 != (void *)0x0) {
          FUN_1400020a8(local_30);
        }
      }
    }
    DAT_14cbcdcd0 = '\0';
  }
LAB_148d8008e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d802da FUN_148d802da body=88 status=ok
// SIG undefined FUN_148d802da(void)

bool FUN_148d802da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14577a94c();
  if ((((lVar2 != 0) && (iVar1 = FUN_14490d72a(lVar2), iVar1 != 3)) &&
      ((*(longlong *)(param_1 + 0x88) == 0 ||
       ((*(longlong *)(param_1 + 0x90) == 0 || (*(int *)(*(longlong *)(param_1 + 0x90) + 8) < 1)))))
      ) && (*(char *)(param_1 + 0x11c) == '\x01')) {
    return *(int *)(param_1 + 0x118) < 1;
  }
  return false;
}



// FUNCTION 148d80332 FUN_148d80332 body=254 status=ok
// SIG undefined FUN_148d80332(void)

void FUN_148d80332(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar3 = 0;
  bVar6 = false;
  do {
    lVar5 = lVar3 * 8;
    while( true ) {
      cVar1 = FUN_145a5d382(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 8;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_148d8041a;
      }
    }
    do {
      if (iVar2 - 1U != (uint)lVar3) {
        iVar4 = ~(uint)lVar3 + iVar2;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),
                (longlong)iVar4 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      if (iVar2 + -1 <= lVar3) goto LAB_148d8041a;
      cVar1 = FUN_145a5d382(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_148d8041a:
  FUN_148d8b860(param_1);
  return;
}



// FUNCTION 148d80430 FUN_148d80430 body=244 status=ok
// SIG undefined FUN_148d80430(void)

void FUN_148d80430(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x11c) != '\x01') {
LAB_148d8044d:
    if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + -1;
  lVar4 = FUN_14662d9fa();
  if (lVar4 != 0) {
    FUN_148d33aba(lVar4,*(undefined4 *)(param_1 + 0x118));
  }
  cVar3 = FUN_148d7f790(param_1);
  if (cVar3 == '\0') {
    FUN_14662da60(param_1);
  }
  else {
    if (0 < *(int *)(param_1 + 0x118)) goto LAB_148d8044d;
    if (((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x90) + 8))) {
      FUN_1401cb356();
      local_20 = *(undefined8 *)(param_1 + 0x88);
      local_18 = *(longlong *)(param_1 + 0x90);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_20);
      plVar2 = *(longlong **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 148d80532 FUN_148d80532 body=801 status=ok
// SIG undefined FUN_148d80532(void)

undefined8 FUN_148d80532(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  code *pcVar11;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  code *local_68;
  int local_60;
  undefined ***local_58;
  undefined **local_48;
  undefined2 **local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_68,"Windows");
  pcVar6 = local_68;
  if (local_60 == 0) {
    pcVar6 = (code *)&DAT_149dfb77a;
  }
  FUN_140047918(param_2,L"Platform: %s",pcVar6);
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = FUN_140e82e72();
  uVar3 = FUN_1457ba796(uVar2);
  FUN_140047918(param_2,L"Config: %s",uVar3);
  uVar3 = FUN_144a8b586();
  FUN_14626b538(uVar3,&local_68,4);
  pcVar6 = local_68;
  if (local_60 == 0) {
    pcVar6 = (code *)&DAT_149dfb77a;
  }
  FUN_140047918(param_2,L"Engineversion: %s",pcVar6);
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  FUN_145c232fc(&local_78,&local_88);
  puVar10 = &DAT_149dfb77a;
  if ((int)uStack_80 != 0) {
    puVar10 = local_88;
  }
  puVar9 = &DAT_149dfb77a;
  if ((int)uStack_70 != 0) {
    puVar9 = local_78;
  }
  FUN_140047918(param_2,L"OS: %s %s",puVar9,puVar10);
  uVar3 = FUN_146802b76();
  FUN_140047918(param_2,L"Commandline: %s",uVar3);
  if (DAT_14c9a1ab0 != 0) {
    local_40 = &local_98;
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b97e5e0;
    local_68 = FUN_1441af720;
    FUN_1470a03d8(DAT_14c9a1ab0,&local_68);
    if (local_68 != (code *)0x0) {
      pppuVar5 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar5 = &local_48;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    FUN_1400b22c2(&local_68,&DAT_149e9807e);
    iVar8 = local_60 + -1;
    pcVar6 = local_68;
    if (local_60 == 0) {
      pcVar6 = (code *)&DAT_149dfb77a;
      iVar8 = 0;
    }
    FUN_140b127b8(&local_98,pcVar6,iVar8,1);
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
    puVar10 = local_98;
    if ((int)uStack_90 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_140047918(param_2,L"Nexus Layers: %s",puVar10);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  iVar8 = FUN_14490d72a(uVar3);
  if (iVar8 == 3) {
    pcVar7 = "Client";
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    cVar1 = FUN_1459abcf0(*(undefined8 *)(lVar4 + 0x1f0));
    pcVar7 = "Listen server";
    if (cVar1 != '\0') {
      pcVar7 = "Dedicated server";
    }
  }
  FUN_1400b22c2(&local_68,pcVar7);
  pcVar6 = local_68;
  pcVar11 = (code *)&DAT_149dfb77a;
  if (local_60 != 0) {
    pcVar11 = local_68;
  }
  FUN_140047918(param_2,L"Server type: %s",pcVar11);
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar4 != 0) &&
     (lVar4 = (**(code **)(*param_1 + 0x180))(param_1), *(longlong *)(lVar4 + 0x1f0) != 0)) {
    FUN_1459f1912();
  }
  if (pcVar6 != (code *)0x0) {
    FUN_1400020a8(pcVar6);
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d80854 FUN_148d80854 body=108 status=ok
// SIG undefined FUN_148d80854(void)

void FUN_148d80854(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  if (*(longlong *)(lVar2 + 0x508) != 0) {
    lVar2 = FUN_1404d56e0();
    if (lVar2 != 0) {
      lVar3 = FUN_14030d4a0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = FUN_1414e4356(lVar2);
        FUN_148dadc20(lVar2,uVar1 ^ 1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d808c0 FUN_148d808c0 body=18 status=ok
// SIG undefined FUN_148d808c0(void)

void FUN_148d808c0(longlong param_1)

{
  FUN_14001cc68(param_1 + (ulonglong)(param_1 == 0),0x10);
  return;
}



// FUNCTION 148d808d2 FUN_148d808d2 body=18 status=ok
// SIG undefined FUN_148d808d2(void)

void FUN_148d808d2(longlong param_1)

{
  FUN_14001cc68(param_1 + (ulonglong)(param_1 == 0),0x10);
  return;
}



// FUNCTION 148d808e4 thunk_FUN_1400020a8 body=5 status=ok
// SIG undefined thunk_FUN_1400020a8(void)

void thunk_FUN_1400020a8(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 148d808e9 FUN_148d808e9 body=13 status=ok
// SIG undefined FUN_148d808e9(void)

void FUN_148d808e9(undefined8 param_1,longlong param_2)

{
  FUN_14001fdce(param_1,param_2 + (ulonglong)(param_2 == 0));
  return;
}



// FUNCTION 148d808f6 FUN_148d808f6 body=38 status=ok
// SIG undefined FUN_148d808f6(void)

undefined8 FUN_148d808f6(undefined8 param_1,int param_2)

{
  FUN_148d7a9ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d80934 FUN_148d80934 body=77 status=ok
// SIG undefined FUN_148d80934(void)

undefined8 FUN_148d80934(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0xe68) + 0x10))(lVar1 + 0xe68);
    uVar2 = FUN_148d123f8(uVar2,param_1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148d80982 FUN_148d80982 body=203 status=ok
// SIG undefined FUN_148d80982(void)

undefined8 FUN_148d80982(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 == 0) {
      uVar5 = FUN_140b7bb2c();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x40) = lVar6;
    }
    plVar1 = (longlong *)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x48) != 0) {
LAB_148d809c8:
      uVar5 = (**(code **)(*(longlong *)(lVar4 + 0xe68) + 0x10))(lVar4 + 0xe68);
      uVar5 = FUN_148d12410(uVar5,plVar1);
      return uVar5;
    }
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x48) = lVar6;
        if (lVar6 == 0) {
          return 0;
        }
        goto LAB_148d809c8;
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return 0;
}



// FUNCTION 148d80a4e FUN_148d80a4e body=128 status=ok
// SIG undefined FUN_148d80a4e(void)

void FUN_148d80a4e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cbcd9a0;
  if (DAT_14cbcd9d4 != 0) {
    *(int *)(DAT_14cbcd9a0 + (longlong)DAT_14cbcd9d0 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbcd9d4) {
    iVar4 = DAT_14cbcd9d0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14cbcd9d4 = DAT_14cbcd9d4 + 1;
  puVar3 = &DAT_14cbcd9b0;
  if (DAT_14cbcd9c0 != (undefined *)0x0) {
    puVar3 = DAT_14cbcd9c0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cbcd9d0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148d80ace FUN_148d80ace body=29 status=ok
// SIG undefined FUN_148d80ace(void)

undefined8 FUN_148d80ace(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d80b06 FUN_148d80b06 body=29 status=ok
// SIG undefined FUN_148d80b06(void)

bool FUN_148d80b06(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d80b24 FUN_148d80b24 body=26 status=ok
// SIG undefined FUN_148d80b24(void)

bool FUN_148d80b24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d80b3e FUN_148d80b3e body=24 status=ok
// SIG undefined FUN_148d80b3e(void)

bool FUN_148d80b3e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d80b56 FUN_148d80b56 body=101 status=ok
// SIG undefined FUN_148d80b56(void)

void FUN_148d80b56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d80bbc FUN_148d80bbc body=101 status=ok
// SIG undefined FUN_148d80bbc(void)

void FUN_148d80bbc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d80c22 FUN_148d80c22 body=134 status=ok
// SIG undefined FUN_148d80c22(void)

void FUN_148d80c22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c1c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d80c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d80ca8 FUN_148d80ca8 body=52 status=ok
// SIG undefined FUN_148d80ca8(void)

void FUN_148d80ca8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d80cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148d80cdc FUN_148d80cdc body=162 status=ok
// SIG undefined FUN_148d80cdc(void)

bool FUN_148d80cdc(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148d80d80 FUN_148d80d80 body=29 status=ok
// SIG undefined FUN_148d80d80(void)

undefined8 FUN_148d80d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d80dba FUN_148d80dba body=93 status=ok
// SIG undefined FUN_148d80dba(void)

void FUN_148d80dba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d80e18 FUN_148d80e18 body=93 status=ok
// SIG undefined FUN_148d80e18(void)

void FUN_148d80e18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d80e76 FUN_148d80e76 body=126 status=ok
// SIG undefined FUN_148d80e76(void)

void FUN_148d80e76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c290;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d80ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d80f02 FUN_148d80f02 body=21 status=ok
// SIG undefined FUN_148d80f02(void)

undefined8 FUN_148d80f02(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d80f18 FUN_148d80f18 body=155 status=ok
// SIG undefined FUN_148d80f18(void)

undefined8 *
FUN_148d80f18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_38 = param_5;
  FUN_143dd931c(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_14b97c300;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  cVar1 = FUN_1488ebfe0(param_2);
  if (cVar1 != '\0') {
    FUN_148d80fb4(param_1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d80fb4 FUN_148d80fb4 body=767 status=ok
// SIG undefined FUN_148d80fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d80fb4(longlong param_1,char param_2)

{
  int *piVar1;
  void *pvVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  void **local_f8;
  undefined4 local_f0;
  undefined1 *local_e8;
  char local_d9;
  longlong local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c;
  void *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d9 = param_2;
  local_d8 = param_1;
  if (param_2 == '\0') {
    uVar7 = 0;
  }
  else {
    lVar6 = FUN_148d812e0(param_1);
    uVar7 = *(undefined8 *)(lVar6 + 0x88);
  }
  if ((longlong)*(int *)(local_d8 + 0x110) != 0) {
    plVar9 = *(longlong **)(local_d8 + 0x108);
    plVar8 = plVar9 + (longlong)*(int *)(local_d8 + 0x110) * 7;
    do {
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_90 = (int)plVar9[1];
      local_98 = (void *)*plVar9;
      FUN_1447715ec(&local_88,plVar9 + 2);
      local_b0 = _DAT_14cb7bdf8;
      local_a8 = DAT_14cb7be00;
      FUN_144928d62(&local_88,5,&local_b0);
      uVar5 = (**(code **)(**(longlong **)(local_d8 + 0x18) + 0x180))();
      local_c0[0] = 0;
      local_bc = 0;
      local_b4 = 0;
      FUN_144976b9c(local_c0,uVar7);
      lVar6 = FUN_140149a73(uVar5,0);
      if (lVar6 != 0) {
        FUN_140bc53f1(&local_98,local_c0,lVar6,0);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plVar9 + 7;
    } while (plVar9 != plVar8);
  }
  lVar6 = local_d8;
  uVar7 = (**(code **)(**(longlong **)(local_d8 + 0x18) + 0x180))();
  FUN_141552268(uVar7,0);
  uVar7 = (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x180))();
  FUN_140630e34(&local_98,uVar7);
  plVar9 = (longlong *)CONCAT44(uStack_8c,local_90);
  if (plVar9 != (longlong *)0x0) {
    iVar4 = (int)plVar9[1];
    do {
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_8c,local_90) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_8c,local_90) + 0x10))();
    }
    pvVar2 = local_98;
    if (plVar9 != (longlong *)0x0) {
      if (local_98 != (void *)0x0) {
        FUN_1408226d0(local_d8 + 0x2c,&local_98,1);
        _Src = local_98;
        local_9c = 0;
        local_d0 = (void *)0x0;
        lVar6 = (longlong)local_90;
        local_c8 = local_90;
        if (lVar6 == 0) {
          local_c4 = 0;
        }
        else {
          FUN_1446dd670(&local_d0,local_90,0);
          memcpy(local_d0,_Src,lVar6 * 2);
        }
        local_e8 = local_a0;
        local_f8 = &local_d0;
        local_f0 = 0xffffffff;
        FUN_140c25efa(pvVar2,local_d8 + 0xf8,local_d9,0);
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
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
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d812b4 FUN_148d812b4 body=38 status=ok
// SIG undefined FUN_148d812b4(void)

undefined8 FUN_148d812b4(undefined8 param_1,int param_2)

{
  FUN_148d813a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d812e0 FUN_148d812e0 body=115 status=ok
// SIG undefined FUN_148d812e0(void)

undefined8 FUN_148d812e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d81354(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d81354 FUN_148d81354 body=83 status=ok
// SIG undefined FUN_148d81354(void)

longlong * FUN_148d81354(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4a56();
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



// FUNCTION 148d813a8 FUN_148d813a8 body=126 status=ok
// SIG undefined FUN_148d813a8(void)

void FUN_148d813a8(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_14b97c300;
  cVar1 = FUN_1488ebfe0(param_1[3]);
  if (cVar1 != '\0') {
    FUN_148d80fb4(param_1,0);
  }
  FUN_1405d7ab2(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7ab2(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ec0c8(param_1);
  return;
}



// FUNCTION 148d81426 FUN_148d81426 body=158 status=ok
// SIG undefined FUN_148d81426(void)

undefined8 *
FUN_148d81426(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_38 = param_5;
  FUN_143dd931c(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_14b97c360;
  param_1[0x1f] = 0xffffffffffffffff;
  param_1[0x20] = 0;
  cVar1 = FUN_1488ebfe0(param_2);
  if (cVar1 != '\0') {
    FUN_148d814c6(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d814c6 FUN_148d814c6 body=108 status=ok
// SIG undefined FUN_148d814c6(void)

void FUN_148d814c6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  if (lVar4 != 0) {
    lVar4 = FUN_148d81634(param_1);
    iVar1 = *(int *)(lVar4 + 0x10);
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        iVar5 = 0;
      }
      else {
        uVar2 = rand();
        iVar3 = (int)((float)iVar1 * ((float)(uVar2 & 0x7fff) / 32767.0));
        iVar5 = iVar1 + -1;
        if (iVar3 < iVar1 + -1) {
          iVar5 = iVar3;
        }
      }
      *(int *)(param_1 + 0xf8) = iVar5;
    }
  }
  return;
}



// FUNCTION 148d81532 FUN_148d81532 body=56 status=ok
// SIG undefined FUN_148d81532(void)

undefined8 * FUN_148d81532(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b97c360;
  FUN_148d816fc();
  FUN_1488ec0c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d8156a FUN_148d8156a body=57 status=ok
// SIG undefined FUN_148d8156a(void)

void FUN_148d8156a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1488ec6b6();
  cVar1 = FUN_14883d960(param_2,L"Finished");
  if (cVar1 == '\0') {
    return;
  }
  FUN_148d816fc(param_1);
  return;
}



// FUNCTION 148d815b0 FUN_148d815b0 body=49 status=ok
// SIG undefined FUN_148d815b0(void)

void FUN_148d815b0(longlong param_1)

{
  if ((*(int *)(param_1 + 0xf8) != -1) && (*(int *)(param_1 + 0xfc) == -1)) {
    FUN_148d81792(param_1);
  }
  FUN_143dd99e6(param_1);
  return;
}



// FUNCTION 148d81634 FUN_148d81634 body=115 status=ok
// SIG undefined FUN_148d81634(void)

undefined8 FUN_148d81634(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d816a8(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d816a8 FUN_148d816a8 body=83 status=ok
// SIG undefined FUN_148d816a8(void)

longlong * FUN_148d816a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4c18();
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



// FUNCTION 148d816fc FUN_148d816fc body=149 status=ok
// SIG undefined FUN_148d816fc(void)

void FUN_148d816fc(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x100);
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
  lVar3 = FUN_1415b2342();
  if (lVar3 != 0) {
    FUN_147d687da(lVar3,param_1);
    return;
  }
  return;
}



// FUNCTION 148d81792 FUN_148d81792 body=897 status=ok
// SIG undefined FUN_148d81792(void)

void FUN_148d81792(longlong param_1)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined4 local_f0;
  undefined2 *local_e8;
  undefined4 local_e0;
  float local_d8;
  longlong **local_d0;
  longlong **local_c8;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0xf8) != -1) {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    if (lVar8 != 0) {
      lVar9 = FUN_148d81634(param_1);
      plVar11 = (longlong *)((longlong)*(int *)(param_1 + 0xf8) * 0x10 + *(longlong *)(lVar9 + 8));
      iVar2 = *(int *)(param_1 + 0xfc);
      uVar7 = iVar2 + 1;
      *(uint *)(param_1 + 0xfc) = uVar7;
      if ((iVar2 < -1) || ((int)plVar11[1] <= (int)uVar7)) {
        *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
        FUN_148d816fc(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
      }
      plVar11 = (longlong *)((ulonglong)uVar7 * 0x18 + *plVar11);
      lVar9 = FUN_1488eca3a(param_1);
      if (lVar9 != 0) {
        lVar9 = FUN_1415b2342();
        if (lVar9 != 0) {
          FUN_144a5dc74(&local_98);
          plVar6 = local_98;
          local_88 = 0;
          plVar5 = (longlong *)*plVar11;
          if (local_98 != plVar5) {
            local_98 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          local_90 = (undefined4)plVar11[1];
          local_88 = (undefined4)plVar11[2];
          dVar1 = *(double *)(lVar8 + 0x6e8);
          local_b0 = local_98;
          if (local_98 != (longlong *)0x0) {
            (**(code **)(*local_98 + 8))();
          }
          local_d0 = &local_b0;
          local_c8 = &local_98;
          local_a8 = local_90;
          local_a0 = local_88;
          FUN_148d81b34(&local_c0);
          local_f0 = (undefined4)plVar11[2];
          local_e0 = 0;
          local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffffffffff00);
          local_e8 = &local_c0;
          local_d8 = (float)dVar1;
          FUN_14372ac1c(lVar9,param_1,0x3f800000,0);
          FUN_1458791db(CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0)),local_b8);
          if (CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0)) != 0) {
            FUN_1400020a8();
          }
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 0x10))();
          }
          if (local_98 != (longlong *)0x0) {
            (**(code **)(*local_98 + 0x10))();
          }
        }
      }
      if (*(longlong *)(lVar8 + 0x1f0) == 0) {
        puVar10 = (undefined8 *)(lVar8 + 0x458);
      }
      else {
        puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar10;
      lVar8 = plVar11[2];
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      plVar11 = local_b0;
      local_a8 = 3;
      *local_b0 = (longlong)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_b0[2] = lVar12;
      *local_b0 = (longlong)&PTR_FUN_14b97c3c0;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,uVar4);
      plVar11[4] = param_1;
      local_98 = (longlong *)0x0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_f8 = &local_c0;
      local_c0 = 0;
      uStack_bc = 0xbf800000;
      FUN_1406f4044(uVar3,param_1 + 0x100,&local_98,(int)lVar8);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d81b34 FUN_148d81b34 body=91 status=ok
// SIG undefined FUN_148d81b34(void)

undefined8 * FUN_148d81b34(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * -0x55555555;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1479d7102(param_1,iVar2,0);
    FUN_1479d7175(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 148d81b90 FUN_148d81b90 body=29 status=ok
// SIG undefined FUN_148d81b90(void)

undefined8 FUN_148d81b90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d81bc6 FUN_148d81bc6 body=29 status=ok
// SIG undefined FUN_148d81bc6(void)

bool FUN_148d81bc6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d81be4 FUN_148d81be4 body=26 status=ok
// SIG undefined FUN_148d81be4(void)

bool FUN_148d81be4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d81c08 FUN_148d81c08 body=93 status=ok
// SIG undefined FUN_148d81c08(void)

void FUN_148d81c08(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c3c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d81c66 FUN_148d81c66 body=93 status=ok
// SIG undefined FUN_148d81c66(void)

void FUN_148d81c66(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c3c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d81cc4 FUN_148d81cc4 body=126 status=ok
// SIG undefined FUN_148d81cc4(void)

void FUN_148d81cc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c3c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d81d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d81d4c FUN_148d81d4c body=141 status=ok
// SIG undefined FUN_148d81d4c(void)

undefined4 FUN_148d81d4c(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  uVar2 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar2 != '\0') {
    FUN_148d81792(*(undefined8 *)(param_1 + 0x20));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d81dda FUN_148d81dda body=166 status=ok
// SIG undefined FUN_148d81dda(void)

undefined8 *
FUN_148d81dda(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_38 = param_5;
  FUN_143dd931c(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_14b97c430;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  cVar1 = FUN_1488ebfe0(param_2);
  if (cVar1 != '\0') {
    FUN_148d81e82(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d81e82 FUN_148d81e82 body=74 status=ok
// SIG undefined FUN_148d81e82(void)

void FUN_148d81e82(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    return;
  }
  FUN_148d81f10(param_1);
  *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + 1;
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 == '\0') {
    FUN_1441ab4a4(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d81ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 148d81ecc FUN_148d81ecc body=38 status=ok
// SIG undefined FUN_148d81ecc(void)

undefined8 FUN_148d81ecc(undefined8 param_1,int param_2)

{
  FUN_148d82528();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d81ef2 FUN_148d81ef2 body=28 status=ok
// SIG undefined FUN_148d81ef2(void)

bool FUN_148d81ef2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  lVar2 = FUN_148d820f2();
  return iVar1 == *(int *)(lVar2 + 0x10);
}



// FUNCTION 148d81f10 FUN_148d81f10 body=480 status=ok
// SIG undefined FUN_148d81f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d81f10(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x100) != 0) && (*(int *)(param_1 + 0x108) != 0)) {
    local_60 = _DAT_14cb7d0b0;
    local_58 = DAT_14cb7d0b8;
    local_70 = *(undefined8 *)(param_1 + 0x108);
    local_68 = *(undefined4 *)(param_1 + 0x110);
    local_80 = *(undefined8 *)(param_1 + 0x20);
    local_78 = *(undefined4 *)(param_1 + 0x28);
    FUN_14884572d(local_50);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    lVar2 = FUN_140149a73(uVar3,0);
    if (lVar2 != 0) {
      FUN_140825b72(local_50,uVar1,lVar2,0);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    local_90 = _DAT_14cb7d0c8;
    local_88 = DAT_14cb7d0d0;
    local_a0 = *(undefined8 *)(param_1 + 0x108);
    local_98 = *(undefined4 *)(param_1 + 0x110);
    local_b0 = *(undefined8 *)(param_1 + 0x20);
    local_a8 = *(undefined4 *)(param_1 + 0x28);
    FUN_14884572d(local_50);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    local_c0[0] = 1;
    local_b4 = 1;
    local_bc = DAT_14cb7c588;
    lVar2 = FUN_140149a73(uVar1,0);
    if (lVar2 != 0) {
      FUN_140bc53f1(local_50,local_c0,lVar2,0);
    }
    *(undefined4 *)(param_1 + 0x110) = DAT_14cb85c6c;
    *(undefined8 *)(param_1 + 0x108) = DAT_14cb85c64;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d820f2 FUN_148d820f2 body=115 status=ok
// SIG undefined FUN_148d820f2(void)

undefined8 FUN_148d820f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d82166(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d82166 FUN_148d82166 body=83 status=ok
// SIG undefined FUN_148d82166(void)

longlong * FUN_148d82166(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4cae();
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



// FUNCTION 148d821ba FUN_148d821ba body=350 status=ok
// SIG undefined FUN_148d821ba(void)

void FUN_148d821ba(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  code *local_130;
  undefined1 **local_128;
  longlong local_120;
  undefined4 local_118;
  undefined1 local_110 [192];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  local_128 = &local_138;
  local_130 = FUN_148d8231a;
  lVar4 = *param_2;
  lVar1 = param_2[1];
  local_138 = local_110;
  uVar3 = FUN_140094010();
  if (lVar4 != lVar1) {
    do {
      lVar7 = lVar4 + 0x40;
      local_120 = lVar4;
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        local_120 = *(longlong *)(lVar4 + 0x30);
      }
      local_118 = *(undefined4 *)(lVar4 + 0x38);
      cVar2 = FUN_14686d4e7(uVar3,&local_120,&local_130,0);
    } while ((cVar2 != '\0') && (lVar4 = lVar7, lVar7 != lVar1));
  }
  FUN_1447a993c(param_1,local_48 & 0xffffffff);
  if (0 < (int)local_48) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar6 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar6 = local_110;
      }
      FUN_140093fc6(param_1,uVar5 & 0xffffffff,puVar6 + lVar4);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xc;
    } while ((longlong)uVar5 < (longlong)(int)local_48);
  }
  FUN_14009404e(param_1);
  FUN_141238f06(param_1,*(undefined4 *)(param_1 + 4));
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8231a FUN_148d8231a body=91 status=ok
// SIG undefined FUN_148d8231a(void)

undefined8 FUN_148d8231a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 148d82376 FUN_148d82376 body=29 status=ok
// SIG undefined FUN_148d82376(void)

undefined8 FUN_148d82376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d823ac FUN_148d823ac body=29 status=ok
// SIG undefined FUN_148d823ac(void)

bool FUN_148d823ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d823ca FUN_148d823ca body=26 status=ok
// SIG undefined FUN_148d823ca(void)

bool FUN_148d823ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d823ee FUN_148d823ee body=93 status=ok
// SIG undefined FUN_148d823ee(void)

void FUN_148d823ee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d8244c FUN_148d8244c body=93 status=ok
// SIG undefined FUN_148d8244c(void)

void FUN_148d8244c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97c490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d824aa FUN_148d824aa body=126 status=ok
// SIG undefined FUN_148d824aa(void)

void FUN_148d824aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c490;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d82519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d82528 FUN_148d82528 body=54 status=ok
// SIG undefined FUN_148d82528(void)

void FUN_148d82528(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_14b97c430;
  cVar1 = FUN_1488ebfe0(param_1[3]);
  if (cVar1 != '\0') {
    FUN_148d81f10(param_1);
  }
  FUN_1488ec0c8(param_1);
  return;
}



// FUNCTION 148d8255e FUN_148d8255e body=278 status=ok
// SIG undefined FUN_148d8255e(void)

undefined8 *
FUN_148d8255e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_38 = param_5;
  FUN_143dd931c(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_14b97c500;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  cVar2 = FUN_1488ebfe0(param_2);
  if (cVar2 == '\0') goto LAB_148d825f7;
  lVar3 = FUN_148d82675(param_2);
  lVar1 = param_1[0x28];
  if (lVar3 == 0) {
    if (lVar1 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      goto LAB_148d8264f;
    }
  }
  else if (lVar1 != lVar3) {
    if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
LAB_148d8264f:
    param_1[0x28] = lVar3;
  }
  FUN_1441abca8(param_1);
LAB_148d825f7:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d82675 FUN_148d82675 body=148 status=ok
// SIG undefined FUN_148d82675(void)

undefined8 FUN_148d82675(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a567fe();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8270a FUN_148d8270a body=38 status=ok
// SIG undefined FUN_148d8270a(void)

undefined8 FUN_148d8270a(undefined8 param_1,int param_2)

{
  FUN_148d82ce4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d82730 FUN_148d82730 body=70 status=ok
// SIG undefined FUN_148d82730(void)

void FUN_148d82730(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1488ec6b6();
  cVar1 = FUN_1488ebfe0(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    cVar1 = FUN_14883d960(param_2,L"Finished");
    if (cVar1 != '\0') {
      FUN_148d82d52(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d82776 FUN_148d82776 body=407 status=ok
// SIG undefined FUN_148d82776(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_148d82776(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  longlong **local_90;
  undefined1 local_82;
  undefined1 local_81;
  longlong local_80 [5];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = FUN_148d82910();
  iVar1 = *(int *)(lVar2 + 8);
  lVar2 = FUN_14479d2ce(param_1 + 0x138);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (lVar2 == 0) {
    uVar3 = CONCAT71(uVar4,iVar1 == 2);
  }
  else {
    local_58 = 0;
    local_50 = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_140d09f2a(lVar2,1);
    local_80[0] = FUN_144a78b9e();
    if ((local_80[0] != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_80[0]);
    }
    FUN_140d0a8da(lVar2,local_80 + 1,local_80);
    local_a0 = &local_81;
    local_81 = 1;
    local_a8 = &local_82;
    local_82 = 0;
    local_90 = &local_b0;
    local_98 = &LAB_148d82dea;
    local_c0 = *(undefined8 *)(param_1 + 0x20);
    local_b8 = *(undefined4 *)(param_1 + 0x28);
    local_b0 = local_80 + 1;
    FUN_1488ecad0(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 2) {
      uVar3 = CONCAT71(uVar4,local_82) ^ 1;
    }
    else if (iVar1 == 1) {
      uVar3 = CONCAT71(uVar4,local_81);
    }
    else if (iVar1 == 0) {
      uVar3 = CONCAT71(uVar4,local_82);
    }
    else {
      uVar3 = 0;
    }
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_140d0a7fc(local_80 + 1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d82910 FUN_148d82910 body=115 status=ok
// SIG undefined FUN_148d82910(void)

undefined8 FUN_148d82910(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d829ca(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d82984 FUN_148d82984 body=70 status=ok
// SIG undefined FUN_148d82984(void)

void FUN_148d82984(longlong *param_1,longlong param_2)

{
  FUN_14485c47a(param_1 + 0x27);
  if ((param_2 != 0) && (param_1[0x28] != 0)) {
    FUN_148d7a1cc(param_1[0x28],param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d829b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 148d829ca FUN_148d829ca body=83 status=ok
// SIG undefined FUN_148d829ca(void)

longlong * FUN_148d829ca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4d74();
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



// FUNCTION 148d82a1e FUN_148d82a1e body=29 status=ok
// SIG undefined FUN_148d82a1e(void)

undefined8 FUN_148d82a1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d82a54 FUN_148d82a54 body=29 status=ok
// SIG undefined FUN_148d82a54(void)

bool FUN_148d82a54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d82a72 FUN_148d82a72 body=26 status=ok
// SIG undefined FUN_148d82a72(void)

bool FUN_148d82a72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d82a96 FUN_148d82a96 body=93 status=ok
// SIG undefined FUN_148d82a96(void)

void FUN_148d82a96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d82af4 FUN_148d82af4 body=93 status=ok
// SIG undefined FUN_148d82af4(void)

void FUN_148d82af4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d82b52 FUN_148d82b52 body=126 status=ok
// SIG undefined FUN_148d82b52(void)

void FUN_148d82b52(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c560;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d82bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d82bd0 FUN_148d82bd0 body=86 status=ok
// SIG undefined FUN_148d82bd0(void)

void FUN_148d82bd0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_140d7fcdc();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148d82984(uVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d82c28 FUN_148d82c28 body=187 status=ok
// SIG undefined FUN_148d82c28(void)

undefined4 FUN_148d82c28(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar5 = local_40;
  }
  else {
    lVar5 = 0;
  }
  uVar3 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar3 != '\0') {
    local_40 = *param_3;
    local_38 = (undefined4)param_3[1];
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = FUN_140d7fcdc(&local_40,param_2);
    FUN_148d82984(uVar1,uVar4);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d82ce4 FUN_148d82ce4 body=110 status=ok
// SIG undefined FUN_148d82ce4(void)

void FUN_148d82ce4(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_14b97c500;
  cVar1 = FUN_1488ebfe0(param_1[3]);
  if (cVar1 != '\0') {
    FUN_148d82d52(param_1);
  }
  if (param_1[0x28] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x28] = 0;
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ec0c8(param_1);
  return;
}



// FUNCTION 148d82d52 FUN_148d82d52 body=151 status=ok
// SIG undefined FUN_148d82d52(void)

void FUN_148d82d52(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
    lVar2 = FUN_14040226a(uVar1,0);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_1401499e8(lVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x100,*(undefined8 *)(param_1 + 0xf8));
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x138);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_148d7a38a(*(longlong *)(param_1 + 0x140),lVar2);
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148d82df0 FUN_148d82df0 body=206 status=ok
// SIG undefined FUN_148d82df0(void)

void FUN_148d82df0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  uVar1 = *(ulonglong *)(param_2 + 0xa08);
  lVar8 = 0x10;
  if (uVar1 != 0) {
    lVar4 = FUN_144a78b9e();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(uVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(uVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) &&
       (plVar2 = (longlong *)*param_1, (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
      uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      plVar6 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar2[8];
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar7 != -1) {
        do {
          if (*(ulonglong *)(*plVar2 + (longlong)iVar7 * 0x10) == uVar1) {
            uVar3 = 1;
            lVar8 = 8;
            break;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar2 + 8);
          uVar3 = 0;
        } while (iVar7 != -1);
        goto LAB_148d82e2d;
      }
    }
  }
  uVar3 = 0;
LAB_148d82e2d:
  **(undefined1 **)((longlong)param_1 + lVar8) = uVar3;
  return;
}



// FUNCTION 148d82ebe FUN_148d82ebe body=51 status=ok
// SIG undefined FUN_148d82ebe(void)

void FUN_148d82ebe(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
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



// FUNCTION 148d82ef1 FUN_148d82ef1 body=73 status=ok
// SIG undefined FUN_148d82ef1(void)

void FUN_148d82ef1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148d82f3a FUN_148d82f3a body=112 status=ok
// SIG undefined FUN_148d82f3a(void)

void FUN_148d82f3a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 148d82faa FUN_148d82faa body=55 status=ok
// SIG undefined FUN_148d82faa(void)

void FUN_148d82faa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = uVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 148d82fe2 FUN_148d82fe2 body=147 status=ok
// SIG undefined FUN_148d82fe2(void)

void FUN_148d82fe2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148d83076 FUN_148d83076 body=95 status=ok
// SIG undefined FUN_148d83076(void)

void FUN_148d83076(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 148d830d5 FUN_148d830d5 body=22 status=ok
// SIG undefined FUN_148d830d5(void)

void FUN_148d830d5(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 148d830ec FUN_148d830ec body=132 status=ok
// SIG undefined FUN_148d830ec(void)

void FUN_148d830ec(longlong param_1,int param_2)

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



// FUNCTION 148d83172 FUN_148d83172 body=9 status=ok
// SIG undefined FUN_148d83172(void)

void FUN_148d83172(longlong param_1)

{
  FUN_14106cf6c(param_1 + 0x10);
  return;
}



// FUNCTION 148d8317c FUN_148d8317c body=29 status=ok
// SIG undefined FUN_148d8317c(void)

undefined8 FUN_148d8317c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d8319a FUN_148d8319a body=167 status=ok
// SIG undefined FUN_148d8319a(void)

void FUN_148d8319a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d83215;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d83215;
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
LAB_148d83215:
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
                    /* WARNING: Could not recover jumptable at 0x000148d83235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d83242 FUN_148d83242 body=83 status=ok
// SIG undefined FUN_148d83242(void)

longlong * FUN_148d83242(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4ee6();
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



// FUNCTION 148d83296 FUN_148d83296 body=460 status=ok
// SIG undefined FUN_148d83296(void)

longlong * FUN_148d83296(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_148d82ebe(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_148d82f3a(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x2aaaa < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0x28;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14480c34d(param_1,lVar3 + lVar5 + -0x28);
      FUN_14011750a(lVar3 + lVar5 + -0x10,param_1);
      FUN_1488345b9(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x60;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_148d83464(param_2);
    if (0 < (int)local_44) {
      iVar4 = 0;
      do {
        lVar5 = FUN_148d7abce(param_2);
        FUN_14480c34d(param_1,lVar5);
        FUN_14011750a(lVar5 + 0x18,param_1);
        FUN_1488345b9(param_1,lVar5 + 0x28);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d83464 FUN_148d83464 body=57 status=ok
// SIG undefined FUN_148d83464(void)

void FUN_148d83464(undefined8 *param_1,int param_2)

{
  FUN_148d82ebe(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148d82f3a(param_1,param_2);
  return;
}



// FUNCTION 148d8349e FUN_148d8349e body=9 status=ok
// SIG undefined FUN_148d8349e(void)

void FUN_148d8349e(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148d834a8 FUN_148d834a8 body=29 status=ok
// SIG undefined FUN_148d834a8(void)

undefined8 FUN_148d834a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d834c6 FUN_148d834c6 body=173 status=ok
// SIG undefined FUN_148d834c6(void)

void FUN_148d834c6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (lVar3 != 0) {
        local_40 = FUN_148d835ee;
        local_38 = 0;
        FUN_148d83b2c(local_30,param_1);
        FUN_1403524de(lVar3 + 0x1a8,&local_40,local_30);
        FUN_1449db362(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d83574 FUN_148d83574 body=83 status=ok
// SIG undefined FUN_148d83574(void)

void FUN_148d83574(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (lVar3 != 0) {
        FUN_140457ffc(lVar3 + 0x1a8,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d835c8 FUN_148d835c8 body=38 status=ok
// SIG undefined FUN_148d835c8(void)

undefined8 FUN_148d835c8(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d835ee FUN_148d835ee body=1341 status=ok
// SIG undefined FUN_148d835ee(void)

void FUN_148d835ee(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  ulonglong local_160;
  undefined8 *local_158;
  undefined4 local_150;
  ulonglong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  ulonglong local_130 [3];
  undefined1 local_118 [24];
  longlong local_100;
  undefined4 local_f0;
  char local_a8;
  undefined7 uStack_a7;
  int local_9c;
  ushort local_90;
  byte local_88;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar7 = FUN_148d84016();
  if ((lVar7 != 0) && (lVar8 = (**(code **)(*param_2 + 0xf8))(param_2), lVar8 != 0)) {
    cVar5 = FUN_142b38acc(lVar7 + 0x98);
    if (cVar5 == '\0') {
      local_118[0] = 0;
      local_f0 = 0;
      FUN_1456bb102(local_118,lVar8);
      pcVar13 = &local_a8;
      FUN_140168de2(lVar7 + 0x98,pcVar13,local_118);
      cVar5 = FUN_144a7fca4(pcVar13);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_90) {
          pcVar13 = (char *)CONCAT71(uStack_a7,local_a8);
        }
        (*pcVar3)(pcVar13);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(CONCAT71(uStack_a7,local_a8));
      }
      FUN_144a5ac3a(local_118);
      if (cVar5 == '\0') goto LAB_148d836d2;
    }
    if (*(int *)(lVar7 + 0xd8) != 0) {
      uVar9 = FUN_141068cca(param_1);
      FUN_1410d9770(param_1,local_118);
      local_168 = uVar9;
      FUN_143d26f48(lVar7,&local_a8,lVar7 + 0xd0,local_118);
      if (local_a8 == '\x01') {
        cVar5 = local_9c != 0;
      }
      else {
        cVar5 = FUN_140321d1a(&local_a8);
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      if (cVar5 == '\0') goto LAB_148d836d2;
    }
    if ((*(char *)(lVar7 + 0xe0) == '\x01') && (*(int *)(lVar7 + 0xe4) != 0)) {
      FUN_141068c44(param_1,&local_a8);
      FUN_14189c5e8(local_118,&local_a8,lVar7 + 0xe4);
      FUN_1447325ac(local_118,local_130,1);
      uVar14 = local_130[0];
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      local_160 = uVar14 & 0xffffffff00000000;
      uVar14 = uVar14 & 0xffffffff;
    }
    else {
      uVar14 = 0;
      local_160 = 0;
    }
    FUN_141068c44(param_1,local_118);
    uVar9 = FUN_141068cca(param_1);
    FUN_140f4ea62(lVar7 + 0x18,local_130,uVar9,local_118);
    local_118[0] = 0;
    local_f0 = 0;
    FUN_1456bb102(local_118,lVar8);
    pcVar13 = &local_a8;
    FUN_1447c3578(lVar7 + 0x48,pcVar13,local_118);
    iVar6 = FUN_1405d5f74(pcVar13);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_90) {
        pcVar13 = (char *)CONCAT71(uStack_a7,local_a8);
      }
      (*pcVar3)(pcVar13);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(CONCAT71(uStack_a7,local_a8));
    }
    FUN_144a5ac3a(local_118);
    iVar15 = 5;
    if (iVar6 < 5) {
      iVar15 = iVar6;
    }
    lVar10 = *(longlong *)(lVar7 + 0x88);
    if (lVar10 == 0) {
      uVar9 = FUN_1418621d0();
      lVar10 = FUN_14477b664(uVar9);
      *(longlong *)(lVar7 + 0x88) = lVar10;
    }
    lVar11 = *(longlong *)(lVar7 + 0x90);
    if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*(longlong *)(lVar7 + 0x80) != 0)) {
      plVar4 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar7 + 0x80));
      }
      *(longlong *)(lVar7 + 0x90) = lVar11;
    }
    puVar12 = &DAT_14c846480;
    if (*(longlong *)(lVar8 + 0x1c8) != 0) {
      puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
    }
    pcVar13 = &local_a8;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8 *)pcVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      pcVar13 = pcVar13 + 8;
    }
    if (0 < iVar6) {
      local_160 = local_160 | uVar14;
      do {
        local_148 = local_130[0];
        FUN_1411374b4(local_118,lVar8,&local_148,&local_a8);
        uVar9 = FUN_140faf1c8(local_118,0);
        uVar9 = FUN_140faf27a(uVar9,0);
        local_158 = (undefined8 *)0x0;
        local_150 = 0;
        FUN_1446efa72(&local_158,0,3,0x10);
        local_150 = 3;
        *local_158 = &PTR_LAB_14a3a3510;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_158[2] = lVar10;
        *local_158 = &PTR_FUN_14b97c870;
        local_158[3] = lVar11;
        local_158[4] = local_160;
        uVar9 = FUN_14180114c(uVar9,&local_158);
        FUN_140faf12e(uVar9,local_140);
        plVar4 = local_138;
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_138 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        FUN_1449db362(&local_158);
        FUN_14119d0c2(local_118);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
LAB_148d836d2:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d83b2c FUN_148d83b2c body=386 status=ok
// SIG undefined FUN_148d83b2c(void)

longlong * FUN_148d83b2c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d83c3d:
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b97c800;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d83c3d;
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
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b97c800;
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



// FUNCTION 148d83cae FUN_148d83cae body=64 status=ok
// SIG undefined FUN_148d83cae(void)

undefined8 * FUN_148d83cae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97c800;
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



// FUNCTION 148d83cf2 FUN_148d83cf2 body=81 status=ok
// SIG undefined FUN_148d83cf2(void)

undefined8 FUN_148d83cf2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d83d4a FUN_148d83d4a body=89 status=ok
// SIG undefined FUN_148d83d4a(void)

bool FUN_148d83d4a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d83d95;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d83d95:
  return lVar6 == param_2;
}



// FUNCTION 148d83dc0 FUN_148d83dc0 body=118 status=ok
// SIG undefined FUN_148d83dc0(void)

void FUN_148d83dc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c800;
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



// FUNCTION 148d83e36 FUN_148d83e36 body=118 status=ok
// SIG undefined FUN_148d83e36(void)

void FUN_148d83e36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c800;
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



// FUNCTION 148d83eac FUN_148d83eac body=156 status=ok
// SIG undefined FUN_148d83eac(void)

void FUN_148d83eac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c800;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d83f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d83f48 FUN_148d83f48 body=104 status=ok
// SIG undefined FUN_148d83f48(void)

void FUN_148d83f48(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d83f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d83fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148d83fb0 FUN_148d83fb0 body=101 status=ok
// SIG undefined FUN_148d83fb0(void)

ulonglong FUN_148d83fb0(longlong param_1)

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
LAB_148d8400a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d8400a;
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



// FUNCTION 148d84016 FUN_148d84016 body=78 status=ok
// SIG undefined FUN_148d84016(void)

longlong * FUN_148d84016(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a34e4();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d84064 FUN_148d84064 body=29 status=ok
// SIG undefined FUN_148d84064(void)

undefined8 FUN_148d84064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d84096 FUN_148d84096 body=93 status=ok
// SIG undefined FUN_148d84096(void)

void FUN_148d84096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d840f4 FUN_148d840f4 body=93 status=ok
// SIG undefined FUN_148d840f4(void)

void FUN_148d840f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d84152 FUN_148d84152 body=126 status=ok
// SIG undefined FUN_148d84152(void)

void FUN_148d84152(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c870;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d841c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d841da FUN_148d841da body=20 status=ok
// SIG undefined FUN_148d841da(void)

undefined1 FUN_148d841da(longlong param_1)

{
  FUN_148d841ee(param_1 + 0x18);
  return 1;
}



// FUNCTION 148d841ee FUN_148d841ee body=508 status=ok
// SIG undefined FUN_148d841ee(void)

void FUN_148d841ee(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined1 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    lVar3 = FUN_140ebc504();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      if (param_1[1] != 0) {
        iVar1 = *(int *)(param_2 + 0x1f8);
        *(uint *)(param_2 + 0x1f8) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x1fc) < iVar1 + 1U) {
          FUN_1446f84a2((longlong *)(param_2 + 0x1f0),iVar1);
        }
        *(longlong *)(*(longlong *)(param_2 + 0x1f0) + (longlong)iVar1 * 8) = param_1[1];
      }
      if (*param_1 != 0) {
        local_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
        local_88 = 0;
        uStack_80 = 0;
        lVar3 = *(longlong *)(param_2 + 0x1c8);
        if (lVar3 == 0) {
          puVar4 = &DAT_14c8464e0;
          uVar5 = (undefined4)DAT_14c8464f0;
          uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar5 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
          uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
          puVar4 = (undefined8 *)(lVar3 + 0x260);
        }
        local_78 = *puVar4;
        uStack_70 = puVar4[1];
        local_68 = CONCAT44(uVar6,uVar5);
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_b8 = 1;
        local_b0 = 0.0;
        dStack_a8 = 0.0;
        local_a0 = 0.0;
        local_98 = 1;
        FUN_141035d0a();
        plVar2 = *(longlong **)(param_2 + 0x1c8);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = FUN_144a3a302();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
              == lVar3 + 0x30)) {
            local_f8 = uStack_c0;
            local_108 = (undefined4)uStack_d0;
            uStack_104 = uStack_d0._4_4_;
            uStack_100 = (undefined4)local_c8;
            uStack_fc = local_c8._4_4_;
            (**(code **)(*plVar2 + 0x700))(plVar2,&local_108,1);
            local_30 = local_a0 * 0.01745329238474369;
            local_38 = dStack_a8 * 0.01745329238474369;
            local_40 = local_b0 * 0.01745329238474369;
            (**(code **)(*plVar2 + 0x850))(plVar2,&local_40,1);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d843ec FUN_148d843ec body=167 status=ok
// SIG undefined FUN_148d843ec(void)

void FUN_148d843ec(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d84467;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d84467;
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
LAB_148d84467:
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
                    /* WARNING: Could not recover jumptable at 0x000148d84487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d84494 FUN_148d84494 body=9 status=ok
// SIG undefined FUN_148d84494(void)

void FUN_148d84494(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148d8449e FUN_148d8449e body=29 status=ok
// SIG undefined FUN_148d8449e(void)

undefined8 FUN_148d8449e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d844bc FUN_148d844bc body=38 status=ok
// SIG undefined FUN_148d844bc(void)

undefined8 FUN_148d844bc(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d844e2 FUN_148d844e2 body=313 status=ok
// SIG undefined FUN_148d844e2(void)

void FUN_148d844e2(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1410d0064();
  if (lVar3 != 0) {
    local_50 = FUN_148d8464a;
    local_48 = 0;
    FUN_148d849fc(local_40,param_1);
    FUN_14112c702(&DAT_14cbd0ae8,&local_50,local_40);
    FUN_1449db362(local_40);
    if (0 < *(int *)(lVar3 + 0x238)) {
      iVar6 = 0;
      lVar7 = 0;
      do {
        lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar7);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x398) != 0)) {
          lVar5 = FUN_144a7b4ca();
          lVar4 = *(longlong *)(lVar4 + 0x398);
          if ((((lVar4 != 0) &&
               (((lVar5 != 0 && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
                (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
              (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                 == lVar5 + 0x30 && (lVar5 = FUN_14129b2e6(lVar4), lVar5 != 0)) &&
               (*(char *)(lVar4 + 0xcea) == '\x01')))) &&
             (cVar2 = FUN_14162faaa(lVar5), cVar2 != '\0')) {
            FUN_148d8464a(param_1,lVar4);
          }
        }
        lVar7 = lVar7 + 8;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar3 + 0x238));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8461c FUN_148d8461c body=45 status=ok
// SIG undefined FUN_148d8461c(void)

void FUN_148d8461c(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1410d0064();
  if (lVar1 != 0) {
    FUN_140457ffc(&DAT_14cbd0ae8,param_1);
    return;
  }
  return;
}



// FUNCTION 148d8464a FUN_148d8464a body=945 status=ok
// SIG undefined FUN_148d8464a(void)

void FUN_148d8464a(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined8 ***local_1b8;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 ***local_190;
  undefined4 local_188;
  ushort local_178;
  byte local_170;
  undefined4 local_168;
  char local_160 [40];
  undefined4 local_138;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  char *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar3 = FUN_148d84ee8();
  local_198 = lVar3;
  if (lVar3 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbcdd18) && (FUN_144b3d300(&DAT_14cbcdd18), DAT_14cbcdd18 == -1)) {
      FUN_1446ddc76(&DAT_14cbcdd10,&DAT_14acb8ec8,1);
      _Init_thread_footer(&DAT_14cbcdd18);
    }
    lVar4 = (**(code **)(*param_2 + 0x5d0))(param_2);
    if (lVar4 != 0) {
      lVar5 = FUN_144a5dd5e();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        lVar5 = FUN_140254ee4(lVar4);
        if (lVar5 != 0) {
          local_160[0] = '\0';
          uVar6 = FUN_140254ee4(lVar4);
          local_78 = 0;
          local_68 = &PTR_LAB_14b97c9a0;
          local_60 = &local_198;
          local_88 = FUN_148d84f36;
          local_58 = local_160;
          FUN_14100973a(uVar6);
          lVar3 = local_198;
          if (local_160[0] != '\0') goto LAB_148d846dc;
        }
        if (*(char *)(lVar3 + 0x81) == '\x01') {
          uVar2 = 1;
          if (param_2 != (longlong *)0x0) {
            uVar6 = FUN_14018b740();
            plVar7 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar6);
            if (plVar7 != (longlong *)0x0) {
              uVar6 = FUN_14018b740();
              plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
              if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
                uVar2 = (**(code **)(*plVar8 + 0x18))(plVar8);
              }
            }
          }
        }
        else {
          local_160[0] = '\0';
          local_138 = 0;
          FUN_1456bb102(local_160,param_2);
          FUN_1448729ea(lVar3 + 0x88,&local_190,local_160);
          uVar2 = FUN_14005fbd2(&local_190,1);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar9 = &local_190;
            if (0x18 < local_178) {
              ppppuVar9 = (undefined8 ****)local_190;
            }
            (*pcVar1)(ppppuVar9);
          }
          if (0x18 < local_178) {
            FUN_1400020a8(local_190);
          }
          FUN_144a5ac3a(local_160);
        }
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_190 = (undefined8 ****)0x0;
        local_188 = 0;
        local_160[0] = '\0';
        local_138 = 0;
        FUN_1456bb102(local_160,param_2[0x2d]);
        local_1c0 = 0;
        local_1c8 = 0;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e8 = 0;
        local_1e0 = 1;
        local_1b8 = &local_190;
        FUN_1403695ab(&local_1a8,local_198 + 0x18,uVar2,local_160);
        FUN_144a5ac3a(local_160);
        lVar3 = local_1a8;
        if (0 < (int)uStack_1a0) {
          local_190 = (undefined8 ***)((ulonglong)local_190 & 0xffffffffffffff00);
          local_168 = 0;
          FUN_1456bb102(&local_190,param_2[0x2d]);
          FUN_140368c94(lVar3,local_160,&local_190,0);
          FUN_144a5ac3a(&local_190);
          FUN_1409e3208(local_160,&DAT_14cbcdd10,*(undefined1 *)(local_198 + 0x80));
          local_1e8 = local_1e8 & 0xffffffff00000000;
          (**(code **)(*(longlong *)(lVar4 + 0xe38) + 0x30))
                    (lVar4 + 0xe38,local_160,0x28,0xffffffff);
          FUN_140368b56(local_160);
        }
        FUN_14036924e(local_1a8,(int)uStack_1a0);
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_148d846dc:
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d849fc FUN_148d849fc body=386 status=ok
// SIG undefined FUN_148d849fc(void)

longlong * FUN_148d849fc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d84b0d:
    *puVar5 = &PTR_LAB_14b982300;
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
    *puVar5 = &PTR_FUN_14b97c930;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d84b0d;
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
    *puVar5 = &PTR_LAB_14b982300;
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
    *puVar5 = &PTR_FUN_14b97c930;
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



// FUNCTION 148d84b7e FUN_148d84b7e body=64 status=ok
// SIG undefined FUN_148d84b7e(void)

undefined8 * FUN_148d84b7e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97c930;
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



// FUNCTION 148d84bc2 FUN_148d84bc2 body=81 status=ok
// SIG undefined FUN_148d84bc2(void)

undefined8 FUN_148d84bc2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d84c1a FUN_148d84c1a body=89 status=ok
// SIG undefined FUN_148d84c1a(void)

bool FUN_148d84c1a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d84c65;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d84c65:
  return lVar6 == param_2;
}



// FUNCTION 148d84c90 FUN_148d84c90 body=118 status=ok
// SIG undefined FUN_148d84c90(void)

void FUN_148d84c90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c930;
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



// FUNCTION 148d84d06 FUN_148d84d06 body=118 status=ok
// SIG undefined FUN_148d84d06(void)

void FUN_148d84d06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c930;
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



// FUNCTION 148d84d7c FUN_148d84d7c body=156 status=ok
// SIG undefined FUN_148d84d7c(void)

void FUN_148d84d7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b982300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d84e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d84e18 FUN_148d84e18 body=104 status=ok
// SIG undefined FUN_148d84e18(void)

void FUN_148d84e18(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d84e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d84e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148d84e80 FUN_148d84e80 body=101 status=ok
// SIG undefined FUN_148d84e80(void)

ulonglong FUN_148d84e80(longlong param_1)

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
LAB_148d84eda:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d84eda;
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



// FUNCTION 148d84ee8 FUN_148d84ee8 body=78 status=ok
// SIG undefined FUN_148d84ee8(void)

longlong * FUN_148d84ee8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a357a();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d84f36 FUN_148d84f36 body=66 status=ok
// SIG undefined FUN_148d84f36(void)

void FUN_148d84f36(undefined8 *param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140b479f0(param_2 + 8,&DAT_14cbcdd10,0);
  if (uVar1 == *(byte *)(*(longlong *)*param_1 + 0x80)) {
    *param_3 = 1;
    *(undefined1 *)param_1[1] = 1;
  }
  return;
}



// FUNCTION 148d84fa2 FUN_148d84fa2 body=29 status=ok
// SIG undefined FUN_148d84fa2(void)

undefined8 FUN_148d84fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d84fc0 FUN_148d84fc0 body=167 status=ok
// SIG undefined FUN_148d84fc0(void)

void FUN_148d84fc0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d8503b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d8503b;
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
LAB_148d8503b:
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
                    /* WARNING: Could not recover jumptable at 0x000148d8505b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d85068 FUN_148d85068 body=9 status=ok
// SIG undefined FUN_148d85068(void)

void FUN_148d85068(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148d85072 FUN_148d85072 body=29 status=ok
// SIG undefined FUN_148d85072(void)

undefined8 FUN_148d85072(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d85090 FUN_148d85090 body=38 status=ok
// SIG undefined FUN_148d85090(void)

undefined8 FUN_148d85090(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d850b6 FUN_148d850b6 body=167 status=ok
// SIG undefined FUN_148d850b6(void)

void FUN_148d850b6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d85131;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d85131;
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
LAB_148d85131:
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
                    /* WARNING: Could not recover jumptable at 0x000148d85151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d8515e FUN_148d8515e body=386 status=ok
// SIG undefined FUN_148d8515e(void)

longlong * FUN_148d8515e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d8526f:
    *puVar5 = &PTR_LAB_14b97ca80;
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
    *puVar5 = &PTR_FUN_14b97ca10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d8526f;
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
    *puVar5 = &PTR_LAB_14b97ca80;
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
    *puVar5 = &PTR_FUN_14b97ca10;
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



// FUNCTION 148d852e0 FUN_148d852e0 body=230 status=ok
// SIG undefined FUN_148d852e0(void)

undefined8 * FUN_148d852e0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 148d853c8 FUN_148d853c8 body=64 status=ok
// SIG undefined FUN_148d853c8(void)

undefined8 * FUN_148d853c8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97ca10;
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



// FUNCTION 148d8540c FUN_148d8540c body=81 status=ok
// SIG undefined FUN_148d8540c(void)

undefined8 FUN_148d8540c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d85464 FUN_148d85464 body=89 status=ok
// SIG undefined FUN_148d85464(void)

bool FUN_148d85464(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d854af;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d854af:
  return lVar6 == param_2;
}



// FUNCTION 148d854e6 FUN_148d854e6 body=118 status=ok
// SIG undefined FUN_148d854e6(void)

void FUN_148d854e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97ca80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ca10;
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



// FUNCTION 148d8555c FUN_148d8555c body=118 status=ok
// SIG undefined FUN_148d8555c(void)

void FUN_148d8555c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97ca80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ca10;
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



// FUNCTION 148d855d2 FUN_148d855d2 body=156 status=ok
// SIG undefined FUN_148d855d2(void)

void FUN_148d855d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97ca80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97ca10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d8565e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d8566e FUN_148d8566e body=104 status=ok
// SIG undefined FUN_148d8566e(void)

void FUN_148d8566e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d856bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d856cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148d856d6 FUN_148d856d6 body=101 status=ok
// SIG undefined FUN_148d856d6(void)

ulonglong FUN_148d856d6(longlong param_1)

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
LAB_148d85730:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d85730;
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



// FUNCTION 148d8573e FUN_148d8573e body=68 status=ok
// SIG undefined FUN_148d8573e(void)

undefined8 * FUN_148d8573e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97caf0;
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



// FUNCTION 148d85786 FUN_148d85786 body=81 status=ok
// SIG undefined FUN_148d85786(void)

undefined8 FUN_148d85786(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d857de FUN_148d857de body=91 status=ok
// SIG undefined FUN_148d857de(void)

bool FUN_148d857de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d8580e;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d8580e:
  return lVar6 == param_2;
}



// FUNCTION 148d8583a FUN_148d8583a body=118 status=ok
// SIG undefined FUN_148d8583a(void)

void FUN_148d8583a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97cb60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97caf0;
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



// FUNCTION 148d858b0 FUN_148d858b0 body=118 status=ok
// SIG undefined FUN_148d858b0(void)

void FUN_148d858b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97cb60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97caf0;
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



// FUNCTION 148d85926 FUN_148d85926 body=156 status=ok
// SIG undefined FUN_148d85926(void)

void FUN_148d85926(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97cb60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97caf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d859b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d859c2 FUN_148d859c2 body=104 status=ok
// SIG undefined FUN_148d859c2(void)

void FUN_148d859c2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d85a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d85a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148d85a2a FUN_148d85a2a body=101 status=ok
// SIG undefined FUN_148d85a2a(void)

ulonglong FUN_148d85a2a(longlong param_1)

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
LAB_148d85a84:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d85a84;
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



// FUNCTION 148d85a92 FUN_148d85a92 body=38 status=ok
// SIG undefined FUN_148d85a92(void)

undefined8 FUN_148d85a92(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d85ab8 FUN_148d85ab8 body=9 status=ok
// SIG undefined FUN_148d85ab8(void)

void FUN_148d85ab8(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148d85ac2 FUN_148d85ac2 body=29 status=ok
// SIG undefined FUN_148d85ac2(void)

undefined8 FUN_148d85ac2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d85ae0 FUN_148d85ae0 body=38 status=ok
// SIG undefined FUN_148d85ae0(void)

undefined8 FUN_148d85ae0(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d85b06 FUN_148d85b06 body=167 status=ok
// SIG undefined FUN_148d85b06(void)

void FUN_148d85b06(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d85b81;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d85b81;
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
LAB_148d85b81:
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
                    /* WARNING: Could not recover jumptable at 0x000148d85ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d85bae FUN_148d85bae body=9 status=ok
// SIG undefined FUN_148d85bae(void)

void FUN_148d85bae(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148d85bb8 FUN_148d85bb8 body=29 status=ok
// SIG undefined FUN_148d85bb8(void)

undefined8 FUN_148d85bb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d85bd6 FUN_148d85bd6 body=38 status=ok
// SIG undefined FUN_148d85bd6(void)

undefined8 FUN_148d85bd6(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d85bfc FUN_148d85bfc body=167 status=ok
// SIG undefined FUN_148d85bfc(void)

void FUN_148d85bfc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d85c77;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d85c77;
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
LAB_148d85c77:
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
                    /* WARNING: Could not recover jumptable at 0x000148d85c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d85ca4 FUN_148d85ca4 body=64 status=ok
// SIG undefined FUN_148d85ca4(void)

undefined8 * FUN_148d85ca4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97ccc0;
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



// FUNCTION 148d85ce8 FUN_148d85ce8 body=81 status=ok
// SIG undefined FUN_148d85ce8(void)

undefined8 FUN_148d85ce8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d85d40 FUN_148d85d40 body=89 status=ok
// SIG undefined FUN_148d85d40(void)

bool FUN_148d85d40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d85d8b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d85d8b:
  return lVar6 == param_2;
}



// FUNCTION 148d85db6 FUN_148d85db6 body=118 status=ok
// SIG undefined FUN_148d85db6(void)

void FUN_148d85db6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ccc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d85e2c FUN_148d85e2c body=118 status=ok
// SIG undefined FUN_148d85e2c(void)

void FUN_148d85e2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ccc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d85ea2 FUN_148d85ea2 body=156 status=ok
// SIG undefined FUN_148d85ea2(void)

void FUN_148d85ea2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97ccc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d85f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d85f3e FUN_148d85f3e body=155 status=ok
// SIG undefined FUN_148d85f3e(void)

void FUN_148d85f3e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148d85fa8:
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    (**(code **)(param_1 + 0x28))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d85fa8;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d85fda FUN_148d85fda body=149 status=ok
// SIG undefined FUN_148d85fda(void)

ulonglong FUN_148d85fda(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148d8604e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d8604e;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      (**(code **)(param_1 + 0x28))(lVar4);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148d86070 FUN_148d86070 body=381 status=ok
// SIG undefined FUN_148d86070(void)

longlong * FUN_148d86070(longlong *param_1,longlong param_2)

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
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148d8617b:
    *puVar3 = &PTR_LAB_14a3a3510;
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
    *puVar3 = &PTR_FUN_14b97cd30;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_148d7c06e;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148d8617b;
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
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a3a3510;
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
    *puVar3 = &PTR_FUN_14b97cd30;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_148d7c06e;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d861ee FUN_148d861ee body=64 status=ok
// SIG undefined FUN_148d861ee(void)

undefined8 * FUN_148d861ee(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97cd30;
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



// FUNCTION 148d86232 FUN_148d86232 body=81 status=ok
// SIG undefined FUN_148d86232(void)

undefined8 FUN_148d86232(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d8628a FUN_148d8628a body=89 status=ok
// SIG undefined FUN_148d8628a(void)

bool FUN_148d8628a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d862d5;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d862d5:
  return lVar6 == param_2;
}



// FUNCTION 148d86300 FUN_148d86300 body=118 status=ok
// SIG undefined FUN_148d86300(void)

void FUN_148d86300(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97cd30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d86376 FUN_148d86376 body=118 status=ok
// SIG undefined FUN_148d86376(void)

void FUN_148d86376(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97cd30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d863ec FUN_148d863ec body=156 status=ok
// SIG undefined FUN_148d863ec(void)

void FUN_148d863ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97cd30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d86478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d86488 FUN_148d86488 body=98 status=ok
// SIG undefined FUN_148d86488(void)

void FUN_148d86488(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d864d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d864e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d864ea FUN_148d864ea body=94 status=ok
// SIG undefined FUN_148d864ea(void)

ulonglong FUN_148d864ea(longlong param_1)

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
LAB_148d8653d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d8653d;
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



// FUNCTION 148d86548 FUN_148d86548 body=52 status=ok
// SIG undefined FUN_148d86548(void)

void FUN_148d86548(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b6a0f90;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d5d70e(param_1 + 0x10);
  return;
}



// FUNCTION 148d8657c FUN_148d8657c body=29 status=ok
// SIG undefined FUN_148d8657c(void)

undefined8 FUN_148d8657c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d8659a FUN_148d8659a body=158 status=ok
// SIG undefined FUN_148d8659a(void)

void FUN_148d8659a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d8660c;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d8660c;
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
LAB_148d8660c:
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
                    /* WARNING: Could not recover jumptable at 0x000148d8662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d86638 FUN_148d86638 body=105 status=ok
// SIG undefined FUN_148d86638(void)

void FUN_148d86638(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b97cdc0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &PTR_LAB_14b419c58;
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  lVar1 = param_2[2];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[2] = &PTR_FUN_14b97cdd8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



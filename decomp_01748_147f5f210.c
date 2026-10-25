// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f5f210 FUN_147f5f210 body=319 status=ok
// SIG undefined FUN_147f5f210(void)

void FUN_147f5f210(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_2 + 0x38);
  if (plVar4 == (longlong *)0x0) {
LAB_147f5f2a1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  iVar8 = (int)plVar4[1];
  do {
    if (iVar8 == 0) goto LAB_147f5f2a1;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar9 = iVar8 == iVar6;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar9);
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 == 0) {
    FUN_1470ddf8e(param_1);
    goto LAB_147f5f2c5;
  }
  local_30 = *(longlong *)(lVar5 + 0x390);
  local_28 = *(longlong **)(lVar5 + 0x398);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  if (local_30 == 0) {
    if (*(longlong *)(param_2 + 0x50) == 0) {
LAB_147f5f33b:
      FUN_1470ddf8e(param_1);
    }
    else {
LAB_147f5f308:
      *(undefined4 *)(param_1 + 0x518) = 4;
    }
  }
  else {
    cVar7 = FUN_144903750(lVar5,&local_30,1);
    if (cVar7 == '\x01') {
      *(undefined4 *)(param_2 + 0x6c) = 4;
      if (*(longlong *)(param_2 + 0x50) != 0) goto LAB_147f5f308;
      *(undefined4 *)(param_1 + 0x518) = 3;
    }
    else if (cVar7 == '\x02') goto LAB_147f5f33b;
  }
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_147f5f2c5:
  LOCK();
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar3 = (int *)((longlong)plVar4 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5f360 FUN_147f5f360 body=394 status=ok
// SIG undefined FUN_147f5f360(void)

void FUN_147f5f360(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar6 = *(int *)(param_1 + 0x58);
  }
  uStack_80 = CONCAT44(uStack_54,uStack_58);
  local_88 = local_60;
  iStack_84 = iStack_5c;
  local_98 = (undefined4)local_70;
  uStack_94 = local_70._4_4_;
  uStack_90 = (undefined4)uStack_68;
  uStack_8c = uStack_68._4_4_;
  uVar7 = local_78;
  local_a0 = plVar1;
  if ((iStack_5c == iVar6) && (uStack_68 == lVar2)) {
    fVar9 = 3.4028235e+38;
  }
  else {
    fVar9 = 3.4028235e+38;
    do {
      lVar3 = *local_a0;
      lVar4 = (longlong)iStack_84 * 0x1c;
      if ((*(char *)(lVar3 + 0x10 + lVar4) == '\x01') &&
         (fVar8 = *(float *)(lVar3 + 8 + lVar4), fVar8 < fVar9)) {
        uVar7 = *(undefined8 *)(lVar3 + lVar4);
        fVar9 = fVar8;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar6));
  }
  local_78 = uVar7;
  cVar5 = FUN_144729dda(&local_78);
  fVar8 = 0.0;
  if (cVar5 != '\0') {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - fVar9;
    FUN_140e1bd9a(plVar1,local_78);
    fVar8 = fVar9;
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar8);
  }
  return;
}



// FUNCTION 147f5f4ec FUN_147f5f4ec body=124 status=ok
// SIG undefined FUN_147f5f4ec(void)

void FUN_147f5f4ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = param_3;
  FUN_14485c47a(&local_30);
  uVar1 = FUN_147f61e2c(param_1 + 0x120,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                        &local_30);
  FUN_140721fbe(uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5f56e FUN_147f5f56e body=384 status=ok
// SIG undefined FUN_147f5f56e(void)

void FUN_147f5f56e(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  undefined4 local_88;
  undefined2 local_70;
  undefined4 local_68;
  char local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\0') {
    uVar3 = FUN_144a7be76(param_1);
    local_90 = local_90 & 0xffffffffffffff00;
    local_68 = 0;
    FUN_1456bb102(&local_90,uVar3);
    FUN_1447c3578(lVar1 + 0x88,local_58,&local_90);
    uVar3 = FUN_14070d842(local_58);
    FUN_14485c47a(param_1 + 0x58,uVar3);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar4 = local_58;
      if (0x18 < local_40) {
        pppuVar4 = (undefined8 ***)local_58[0];
      }
      (*pcVar2)(pppuVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(&local_90);
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_144983130(param_1 + 0x68,lVar1 + 0x40);
  *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(lVar1 + 0x80);
  FUN_144983130(param_1 + 0xe0,lVar1 + 0x88);
  local_90 = 0;
  local_70 = 4;
  local_88 = 0;
  local_68 = CONCAT31(local_68._1_3_,3);
  local_60 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1403719a4(param_1 + 0xa0,&local_90);
  FUN_144a2da94(&local_90);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5f6f0 FUN_147f5f6f0 body=208 status=ok
// SIG undefined FUN_147f5f6f0(void)

void FUN_147f5f6f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1405f939e();
  FUN_140a702f6(&local_38,uVar5);
  if (local_30 != (longlong *)0x0) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_30;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_38 != 0) {
        *(undefined1 *)(param_1 + 0xd8) = 1;
        uVar5 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
        FUN_14105eeda(local_38,param_1 + 0x60,uVar5,0);
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5f7c2 FUN_147f5f7c2 body=197 status=ok
// SIG undefined FUN_147f5f7c2(void)

void FUN_147f5f7c2(longlong param_1)

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
  uVar5 = FUN_1405f939e();
  FUN_140a702f6(&local_30,uVar5);
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
        uVar5 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
        FUN_14119101a(local_30,param_1 + 0x60,uVar5,0);
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5f888 FUN_147f5f888 body=220 status=ok
// SIG undefined FUN_147f5f888(void)

undefined4 FUN_147f5f888(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1405f939e();
  FUN_140a702f6(&local_38,uVar6);
  if (local_30 != (longlong *)0x0) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_38 == 0) {
        uVar5 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 2;
        uVar6 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
        uVar5 = FUN_14105eeda(local_38,param_1 + 0x60,uVar6,0);
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
      goto LAB_147f5f93e;
    }
  }
  uVar5 = 0;
LAB_147f5f93e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147f5f966 FUN_147f5f966 body=38 status=ok
// SIG undefined FUN_147f5f966(void)

undefined8 FUN_147f5f966(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5f9a2 FUN_147f5f9a2 body=38 status=ok
// SIG undefined FUN_147f5f9a2(void)

undefined8 FUN_147f5f9a2(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5f9d6 FUN_147f5f9d6 body=45 status=ok
// SIG undefined FUN_147f5f9d6(void)

longlong FUN_147f5f9d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1456ed0e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5fa04 FUN_147f5fa04 body=38 status=ok
// SIG undefined FUN_147f5fa04(void)

undefined8 FUN_147f5fa04(undefined8 param_1,int param_2)

{
  FUN_14117b6e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5fa2e FUN_147f5fa2e body=45 status=ok
// SIG undefined FUN_147f5fa2e(void)

longlong FUN_147f5fa2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14117b6e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5fa60 FUN_147f5fa60 body=123 status=ok
// SIG undefined FUN_147f5fa60(void)

undefined8 * FUN_147f5fa60(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140bc2c5e();
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



// FUNCTION 147f5fadc FUN_147f5fadc body=68 status=ok
// SIG undefined FUN_147f5fadc(void)

undefined8 * FUN_147f5fadc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8d3a0;
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



// FUNCTION 147f5fb24 FUN_147f5fb24 body=81 status=ok
// SIG undefined FUN_147f5fb24(void)

undefined8 FUN_147f5fb24(longlong param_1)

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



// FUNCTION 147f5fb7c FUN_147f5fb7c body=91 status=ok
// SIG undefined FUN_147f5fb7c(void)

bool FUN_147f5fb7c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f5fbac;
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
LAB_147f5fbac:
  return lVar6 == param_2;
}



// FUNCTION 147f5fbf4 FUN_147f5fbf4 body=118 status=ok
// SIG undefined FUN_147f5fbf4(void)

void FUN_147f5fbf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d3a0;
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



// FUNCTION 147f5fc6a FUN_147f5fc6a body=118 status=ok
// SIG undefined FUN_147f5fc6a(void)

void FUN_147f5fc6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d3a0;
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



// FUNCTION 147f5fce0 FUN_147f5fce0 body=156 status=ok
// SIG undefined FUN_147f5fce0(void)

void FUN_147f5fce0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8d3a0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f5fd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f5fd7c FUN_147f5fd7c body=104 status=ok
// SIG undefined FUN_147f5fd7c(void)

void FUN_147f5fd7c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f5fdc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f5fdda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147f5fde4 FUN_147f5fde4 body=255 status=ok
// SIG undefined FUN_147f5fde4(void)

bool FUN_147f5fde4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x38) == param_2)
        goto LAB_147f5fe0d;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_147f5fe0d:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_140a3ee12(lVar4,local_68);
    puVar5 = local_68;
    for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_3 = *puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 != 0;
}



// FUNCTION 147f5fee4 FUN_147f5fee4 body=54 status=ok
// SIG undefined FUN_147f5fee4(void)

longlong FUN_147f5fee4(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 147f5ff1a FUN_147f5ff1a body=133 status=ok
// SIG undefined FUN_147f5ff1a(void)

void FUN_147f5ff1a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x5c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x14)) {
        uVar4 = uVar3 / 0x14 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x5c) = (int)uVar4;
    FUN_14089e204(param_1,param_2,uVar4,0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f5ffc6 FUN_147f5ffc6 body=29 status=ok
// SIG undefined FUN_147f5ffc6(void)

undefined8 FUN_147f5ffc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5ffe4 FUN_147f5ffe4 body=83 status=ok
// SIG undefined FUN_147f5ffe4(void)

void FUN_147f5ffe4(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9290;
  uVar2 = (ushort)DAT_14c9a9290;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9328 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9290);
  }
  else {
    (*DAT_14c9a9328)();
  }
  *(undefined1 *)(param_2 + 4) = 0xc;
  return;
}



// FUNCTION 147f60038 FUN_147f60038 body=83 status=ok
// SIG undefined FUN_147f60038(void)

void FUN_147f60038(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9290;
  uVar2 = (ushort)DAT_14c9a9290;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9328 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9290);
  }
  else {
    (*DAT_14c9a9328)();
  }
  *(undefined1 *)(param_2 + 4) = 0xc;
  return;
}



// FUNCTION 147f6008c FUN_147f6008c body=81 status=ok
// SIG undefined FUN_147f6008c(void)

void FUN_147f6008c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 147f600f4 FUN_147f600f4 body=283 status=ok
// SIG undefined FUN_147f600f4(void)

undefined8 FUN_147f600f4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 147f60238 FUN_147f60238 body=59 status=ok
// SIG undefined FUN_147f60238(void)

undefined8 FUN_147f60238(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f602d6 FUN_147f602d6 body=85 status=ok
// SIG undefined FUN_147f602d6(void)

void FUN_147f602d6(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147f6032c FUN_147f6032c body=40 status=ok
// SIG undefined FUN_147f6032c(void)

void FUN_147f6032c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14592919a();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 147f60354 FUN_147f60354 body=39 status=ok
// SIG undefined FUN_147f60354(void)

void FUN_147f60354(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14592919a();
  FUN_14470ec92(uVar1,param_1,&DAT_14ac8d9e8,0);
  return;
}



// FUNCTION 147f6037c FUN_147f6037c body=114 status=ok
// SIG undefined FUN_147f6037c(void)

void FUN_147f6037c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 147f603ee FUN_147f603ee body=107 status=ok
// SIG undefined FUN_147f603ee(void)

/* WARNING: Removing unreachable block (ram,0x000147f60420) */
/* WARNING: Removing unreachable block (ram,0x000147f603fc) */
/* WARNING: Removing unreachable block (ram,0x000147f60412) */
/* WARNING: Removing unreachable block (ram,0x000147f6042b) */
/* WARNING: Removing unreachable block (ram,0x000147f60414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f603ee(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb242b0;
  LOCK();
  UNLOCK();
  DAT_14cb242b0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb242b8 = _DAT_14cb242b8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb242b8 = _DAT_14cb242b8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f6045a FUN_147f6045a body=107 status=ok
// SIG undefined FUN_147f6045a(void)

/* WARNING: Removing unreachable block (ram,0x000147f6048c) */
/* WARNING: Removing unreachable block (ram,0x000147f60468) */
/* WARNING: Removing unreachable block (ram,0x000147f6047e) */
/* WARNING: Removing unreachable block (ram,0x000147f60497) */
/* WARNING: Removing unreachable block (ram,0x000147f60480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f6045a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb242c0;
  LOCK();
  UNLOCK();
  DAT_14cb242c0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb242c8 = _DAT_14cb242c8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb242c8 = _DAT_14cb242c8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f604c6 FUN_147f604c6 body=420 status=ok
// SIG undefined FUN_147f604c6(void)

void FUN_147f604c6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1403af08a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14021b4e8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x48 + -0x44);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x12;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 147f6066a FUN_147f6066a body=348 status=ok
// SIG undefined FUN_147f6066a(void)

undefined4 * FUN_147f6066a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ffab16(param_1,local_40);
  uVar1 = param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  FUN_14034cca6(local_38 + 1,uVar1);
  *(undefined4 *)(local_38 + 8) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_140ffa974(param_1,uVar7,local_38);
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
      *(uint *)((longlong)local_38 + 0x44) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f607c8 FUN_147f607c8 body=48 status=ok
// SIG undefined FUN_147f607c8(void)

void FUN_147f607c8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147f607f8 FUN_147f607f8 body=31 status=ok
// SIG undefined FUN_147f607f8(void)

undefined8 FUN_147f607f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6082c FUN_147f6082c body=85 status=ok
// SIG undefined FUN_147f6082c(void)

void FUN_147f6082c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d5c0;
  return;
}



// FUNCTION 147f60882 FUN_147f60882 body=118 status=ok
// SIG undefined FUN_147f60882(void)

void FUN_147f60882(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8d5c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f608e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f608f8 FUN_147f608f8 body=101 status=ok
// SIG undefined FUN_147f608f8(void)

undefined8 FUN_147f608f8(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14620a72a(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6095e FUN_147f6095e body=132 status=ok
// SIG undefined FUN_147f6095e(void)

void FUN_147f6095e(longlong param_1,int param_2)

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



// FUNCTION 147f609e4 FUN_147f609e4 body=147 status=ok
// SIG undefined FUN_147f609e4(void)

void FUN_147f609e4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f60a78 FUN_147f60a78 body=48 status=ok
// SIG undefined FUN_147f60a78(void)

void FUN_147f60a78(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 147f60aa8 FUN_147f60aa8 body=96 status=ok
// SIG undefined FUN_147f60aa8(void)

void FUN_147f60aa8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147f60b08 FUN_147f60b08 body=614 status=ok
// SIG undefined FUN_147f60b08(void)

void FUN_147f60b08(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_141031e2c(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147f60b08(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f60d70 FUN_147f60d70 body=308 status=ok
// SIG undefined FUN_147f60d70(void)

void FUN_147f60d70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_141031e2c(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f60ea6 FUN_147f60ea6 body=739 status=ok
// SIG undefined FUN_147f60ea6(void)

void FUN_147f60ea6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_147f60fca:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_147f60fde;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_147f60fca;
LAB_147f60fde:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_141031e2c(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147f60ea6(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f6118a FUN_147f6118a body=107 status=ok
// SIG undefined FUN_147f6118a(void)

/* WARNING: Removing unreachable block (ram,0x000147f611bc) */
/* WARNING: Removing unreachable block (ram,0x000147f61198) */
/* WARNING: Removing unreachable block (ram,0x000147f611ae) */
/* WARNING: Removing unreachable block (ram,0x000147f611c7) */
/* WARNING: Removing unreachable block (ram,0x000147f611b0) */

void FUN_147f6118a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb24328;
  LOCK();
  UNLOCK();
  DAT_14cb24328 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb24330 = DAT_14cb24330 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    DAT_14cb24330 = DAT_14cb24330 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f611f6 FUN_147f611f6 body=31 status=ok
// SIG undefined FUN_147f611f6(void)

undefined8 FUN_147f611f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6122a FUN_147f6122a body=85 status=ok
// SIG undefined FUN_147f6122a(void)

void FUN_147f6122a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d6f0;
  return;
}



// FUNCTION 147f61280 FUN_147f61280 body=118 status=ok
// SIG undefined FUN_147f61280(void)

void FUN_147f61280(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8d6f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f612e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f612f6 FUN_147f612f6 body=101 status=ok
// SIG undefined FUN_147f612f6(void)

undefined8 FUN_147f612f6(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d895b4(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6135c FUN_147f6135c body=114 status=ok
// SIG undefined FUN_147f6135c(void)

void FUN_147f6135c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147f613ce FUN_147f613ce body=48 status=ok
// SIG undefined FUN_147f613ce(void)

void FUN_147f613ce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147f613fe FUN_147f613fe body=48 status=ok
// SIG undefined FUN_147f613fe(void)

void FUN_147f613fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x308,8);
  }
  return;
}



// FUNCTION 147f6142e FUN_147f6142e body=48 status=ok
// SIG undefined FUN_147f6142e(void)

void FUN_147f6142e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 147f61462 FUN_147f61462 body=81 status=ok
// SIG undefined FUN_147f61462(void)

undefined8 FUN_147f61462(longlong param_1)

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



// FUNCTION 147f614ba FUN_147f614ba body=89 status=ok
// SIG undefined FUN_147f614ba(void)

bool FUN_147f614ba(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f61505;
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
LAB_147f61505:
  return lVar6 == param_2;
}



// FUNCTION 147f61514 FUN_147f61514 body=118 status=ok
// SIG undefined FUN_147f61514(void)

void FUN_147f61514(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d7a0;
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



// FUNCTION 147f6158a FUN_147f6158a body=156 status=ok
// SIG undefined FUN_147f6158a(void)

void FUN_147f6158a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8da20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8d7a0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f61616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f61626 FUN_147f61626 body=104 status=ok
// SIG undefined FUN_147f61626(void)

void FUN_147f61626(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f61673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f61684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147f61690 FUN_147f61690 body=332 status=ok
// SIG undefined FUN_147f61690(void)

void FUN_147f61690(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x88) * 4) =
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



// FUNCTION 147f617de FUN_147f617de body=147 status=ok
// SIG undefined FUN_147f617de(void)

void FUN_147f617de(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f61872 FUN_147f61872 body=107 status=ok
// SIG undefined FUN_147f61872(void)

/* WARNING: Removing unreachable block (ram,0x000147f618a4) */
/* WARNING: Removing unreachable block (ram,0x000147f61880) */
/* WARNING: Removing unreachable block (ram,0x000147f61896) */
/* WARNING: Removing unreachable block (ram,0x000147f618af) */
/* WARNING: Removing unreachable block (ram,0x000147f61898) */

void FUN_147f61872(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb246c8;
  LOCK();
  UNLOCK();
  DAT_14cb246c8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb246d0 = DAT_14cb246d0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    DAT_14cb246d0 = DAT_14cb246d0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f618de FUN_147f618de body=96 status=ok
// SIG undefined FUN_147f618de(void)

void FUN_147f618de(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147f6193e FUN_147f6193e body=113 status=ok
// SIG undefined FUN_147f6193e(void)

void FUN_147f6193e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147f619b0 FUN_147f619b0 body=127 status=ok
// SIG undefined FUN_147f619b0(void)

void FUN_147f619b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0x18)) {
        uVar2 = uVar1 / 0x18 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_146c5b11e(param_1,*(undefined4 *)(param_1 + 200),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 147f61a30 FUN_147f61a30 body=302 status=ok
// SIG undefined FUN_147f61a30(void)

void FUN_147f61a30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_147f61b5e(lVar2,*param_2);
    iVar9 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar12 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar5 * 0x50;
      lVar13 = lVar2 + 0x50 + lVar11;
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar12;
        if (lVar10 <= lVar5) break;
        bVar4 = FUN_147f61b5e(lVar13,*param_2);
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x50;
        iVar8 = iVar7;
      } while ((bVar3 & 1) == bVar4);
      iVar12 = iVar8 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar6) {
          memmove((void *)((longlong)iVar9 * 0x50 + lVar2),(void *)(lVar11 + lVar2),
                  (longlong)iVar12 * 0x50);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_1405214e6(lVar11 + lVar2,iVar12);
      }
      iVar6 = iVar8;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 147f61b5e FUN_147f61b5e body=101 status=ok
// SIG undefined FUN_147f61b5e(void)

undefined8 FUN_147f61b5e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144a43716(param_1 + 8,param_2 + 8);
  if (((((cVar1 == '\0') || (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38))) ||
       (*(float *)(param_1 + 0x40) != *(float *)(param_2 + 0x40))) ||
      ((NAN(*(float *)(param_1 + 0x40)) || NAN(*(float *)(param_2 + 0x40)) ||
       (*(float *)(param_1 + 0x44) != *(float *)(param_2 + 0x44))))) ||
     ((NAN(*(float *)(param_1 + 0x44)) || NAN(*(float *)(param_2 + 0x44)) ||
      ((*(char *)(param_1 + 0x48) != *(char *)(param_2 + 0x48) ||
       (*(char *)(param_1 + 0x49) != *(char *)(param_2 + 0x49))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x38) >> 8),
                     *(char *)(param_1 + 0x4a) == *(char *)(param_2 + 0x4a));
  }
  return uVar2;
}



// FUNCTION 147f61bd4 FUN_147f61bd4 body=93 status=ok
// SIG undefined FUN_147f61bd4(void)

void FUN_147f61bd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f61c32 FUN_147f61c32 body=93 status=ok
// SIG undefined FUN_147f61c32(void)

void FUN_147f61c32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f61c90 FUN_147f61c90 body=126 status=ok
// SIG undefined FUN_147f61c90(void)

void FUN_147f61c90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8d810;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f61cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f61d1c FUN_147f61d1c body=113 status=ok
// SIG undefined FUN_147f61d1c(void)

void FUN_147f61d1c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 147f61d8e FUN_147f61d8e body=158 status=ok
// SIG undefined FUN_147f61d8e(void)

void FUN_147f61d8e(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0xc2c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0xc28) * 0x30) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)(param_1 + 0xc2c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xc28);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x30 + 4) = uVar5;
  *(int *)(param_1 + 0xc28) = param_2;
  *(int *)(param_1 + 0xc2c) = *(int *)(param_1 + 0xc2c) + 1;
  lVar4 = param_1 + 0xc10;
  if (*(longlong *)(param_1 + 0xc18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xc18);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147f61e2c FUN_147f61e2c body=133 status=ok
// SIG undefined FUN_147f61e2c(void)

longlong FUN_147f61e2c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140a70fda();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_147f61e65;
  }
  local_30 = param_3;
  FUN_147f61eb2(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_147f61e65:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f61eb2 FUN_147f61eb2 body=277 status=ok
// SIG undefined FUN_147f61eb2(void)

undefined4 * FUN_147f61eb2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147f61fc8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147f620ae(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147f621c4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f61fc8 FUN_147f61fc8 body=229 status=ok
// SIG undefined FUN_147f61fc8(void)

int * FUN_147f61fc8(longlong *param_1,int *param_2)

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



// FUNCTION 147f620ae FUN_147f620ae body=163 status=ok
// SIG undefined FUN_147f620ae(void)

undefined8 FUN_147f620ae(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar6 = FUN_140a70fda();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_147f62152(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_147f620f2;
    }
  }
  uVar7 = 0;
LAB_147f620f2:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62152 FUN_147f62152 body=114 status=ok
// SIG undefined FUN_147f62152(void)

void FUN_147f62152(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147f621c4 FUN_147f621c4 body=439 status=ok
// SIG undefined FUN_147f621c4(void)

void FUN_147f621c4(longlong *param_1)

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



// FUNCTION 147f6237c FUN_147f6237c body=90 status=ok
// SIG undefined FUN_147f6237c(void)

void FUN_147f6237c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147f623d6();
  return;
}



// FUNCTION 147f623d6 FUN_147f623d6 body=52 status=ok
// SIG undefined FUN_147f623d6(void)

void FUN_147f623d6(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147f62152(param_1,param_2);
  return;
}



// FUNCTION 147f6240a FUN_147f6240a body=147 status=ok
// SIG undefined FUN_147f6240a(void)

void FUN_147f6240a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f624a6 FUN_147f624a6 body=235 status=ok
// SIG undefined FUN_147f624a6(void)

void FUN_147f624a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
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
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_70 = DAT_14c8464f0;
  local_80 = DAT_14c8464e0;
  uStack_78 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_50 = DAT_14c8464e0;
  uStack_48 = DAT_14c8464e8;
  local_40 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_28 = DAT_14c8464f0;
  local_20 = 0xffffffff00000000;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62592 FUN_147f62592 body=264 status=ok
// SIG undefined FUN_147f62592(void)

void FUN_147f62592(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c8464f0;
  local_70 = DAT_14c8464e0;
  uStack_68 = DAT_14c8464e8;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  local_40 = DAT_14c8464e0;
  uStack_38 = DAT_14c8464e8;
  local_30 = DAT_14c8464f0;
  local_28 = 0xffffffff00000000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  puVar1 = &local_90;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1438a00ec(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6269c FUN_147f6269c body=235 status=ok
// SIG undefined FUN_147f6269c(void)

void FUN_147f6269c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
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
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_70 = DAT_14c8464f0;
  local_80 = DAT_14c8464e0;
  uStack_78 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_50 = DAT_14c8464e0;
  uStack_48 = DAT_14c8464e8;
  local_40 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_28 = DAT_14c8464f0;
  local_20 = 0xffffffff00000000;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6279c FUN_147f6279c body=120 status=ok
// SIG undefined FUN_147f6279c(void)

void FUN_147f6279c(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_20);
  if (DAT_14c950c29 == '\x01') {
    if (local_20 == 0) {
      local_20 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62848 FUN_147f62848 body=265 status=ok
// SIG undefined FUN_147f62848(void)

void FUN_147f62848(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x10))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62952 FUN_147f62952 body=336 status=ok
// SIG undefined FUN_147f62952(void)

void FUN_147f62952(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,puVar2,local_3c,local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62aa4 FUN_147f62aa4 body=336 status=ok
// SIG undefined FUN_147f62aa4(void)

void FUN_147f62aa4(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,puVar2,local_3c,local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62bfa FUN_147f62bfa body=38 status=ok
// SIG undefined FUN_147f62bfa(void)

void FUN_147f62bfa(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x50))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f62c24 FUN_147f62c24 body=38 status=ok
// SIG undefined FUN_147f62c24(void)

void FUN_147f62c24(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x60))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f62d1c FUN_147f62d1c body=289 status=ok
// SIG undefined FUN_147f62d1c(void)

void FUN_147f62d1c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_198 [32];
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined4 local_d4;
  undefined4 local_a8;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  memset(local_178,0,0x100);
  local_a8 = 0xffffffff;
  local_174 = 0x3f800000;
  local_d4 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_6c = 3;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_178);
  }
  puVar2 = local_178;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14079f6b4(puVar2);
  if (local_68 != 0) {
    plVar1 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62e4e FUN_147f62e4e body=50 status=ok
// SIG undefined FUN_147f62e4e(void)

void FUN_147f62e4e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xaf0) + 0x38))(param_1 + 0xaf0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f62e80 FUN_147f62e80 body=39 status=ok
// SIG undefined FUN_147f62e80(void)

void FUN_147f62e80(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147f676c6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f62ea8 FUN_147f62ea8 body=168 status=ok
// SIG undefined FUN_147f62ea8(void)

void FUN_147f62ea8(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0xaf0) + 0x48))(param_1 + 0xaf0,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f62f70 FUN_147f62f70 body=778 status=ok
// SIG undefined FUN_147f62f70(void)

undefined8 FUN_147f62f70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 *local_150;
  ulonglong local_148;
  undefined1 local_140 [80];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 != 0) {
    lVar4 = FUN_14595a802();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar5 = FUN_14001cc68(0x3e0,0x10);
      FUN_147114fd0(uVar5,param_1);
      *(undefined8 *)(param_1 + 0x620) = uVar5;
      *(undefined8 *)(param_1 + 0x5a8) = uVar5;
      FUN_140def630(local_64);
      iVar1 = *(int *)(lVar2 + 0x2b0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x2a8);
        lVar4 = 0;
        local_148 = 0;
        do {
          local_70 = *(undefined8 *)(lVar2 + lVar4);
          lVar6 = FUN_14479d2ce(&local_70);
          if (lVar6 != 0) {
            lVar7 = FUN_1401f7e9a();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
              lVar7 = FUN_14479d2ce(lVar6 + 0x410);
              if (lVar7 != 0) {
                lVar8 = FUN_14099bfa2();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                  local_f0[0] = 0;
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
                  local_d8 = 0;
                  uStack_d0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_78 = 0;
                  FUN_140b5cb3a(local_140,lVar7 + 0x38,&DAT_14c846480);
                  FUN_140b5c58c(&uStack_e0,local_140);
                  FUN_140074a56(local_140);
                  local_158 = (undefined8 *)(lVar6 + 0x240);
                  iVar3 = (int)local_148;
                  local_150 = local_64;
                  FUN_14710e1ac(*(undefined8 *)(param_1 + 0x620),local_f0,local_148,1);
                  FUN_14003d612(local_f0);
                  local_148 = (ulonglong)(iVar3 + 1);
                }
              }
            }
            else {
              local_f0[0] = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_78 = 0;
              local_88 = 1;
              FUN_140acb960(&uStack_90,0);
              FUN_144a5d136(uStack_90,lVar6,0);
              iVar3 = (int)local_148;
              local_150 = local_64;
              local_158 = &DAT_14c846480;
              FUN_14710e1ac(*(undefined8 *)(param_1 + 0x620),local_f0,local_148,1);
              FUN_14003d612(local_f0);
              local_148 = (ulonglong)(iVar3 + 1);
            }
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar1 * 8 != lVar4);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x620);
      goto LAB_147f62fab;
    }
  }
  uVar5 = 0;
LAB_147f62fab:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147f6327c FUN_147f6327c body=1374 status=ok
// SIG undefined FUN_147f6327c(void)

void FUN_147f6327c(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 *puVar10;
  double *pdVar11;
  double *pdVar12;
  float *pfVar13;
  float *pfVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[6] = 0.0;
  lVar2 = *(longlong *)(param_1 + 0x620);
  if (lVar2 != 0) {
    if ((longlong)*(int *)(lVar2 + 0x2f0) == 0) {
      uVar32 = 0xe0000000;
      uVar33 = 0x47efffff;
      dVar24 = 3.4028234663852886e+38;
      dVar21 = -3.4028234663852886e+38;
      dVar18 = -3.4028234663852886e+38;
      dVar22 = -3.4028234663852886e+38;
      dVar31 = 3.4028234663852886e+38;
    }
    else {
      pdVar11 = *(double **)(lVar2 + 0x2e8);
      pdVar12 = pdVar11 + (longlong)*(int *)(lVar2 + 0x2f0) * 0x16;
      dVar31 = 3.4028234663852886e+38;
      dVar24 = 3.4028234663852886e+38;
      dVar26 = 3.4028234663852886e+38;
      dVar21 = -3.4028234663852886e+38;
      dVar15 = -3.4028234663852886e+38;
      dVar5 = -3.4028234663852886e+38;
      do {
        dVar4 = *pdVar11 * pdVar11[0x10];
        dVar20 = pdVar11[1] * pdVar11[0x11];
        dVar22 = pdVar11[2] * pdVar11[0x12];
        dVar7 = pdVar11[10];
        dVar8 = pdVar11[8];
        dVar9 = pdVar11[9];
        dVar27 = dVar20 * dVar8 - dVar4 * dVar9;
        dVar29 = dVar22 * dVar9 - dVar20 * dVar7;
        dVar25 = dVar4 * dVar7 - dVar22 * dVar8;
        dVar29 = dVar29 + dVar29;
        dVar25 = dVar25 + dVar25;
        dVar27 = dVar27 + dVar27;
        dVar17 = pdVar11[0xb];
        dVar18 = pdVar11[0xb];
        dVar28 = pdVar11[3] * pdVar11[0x10];
        dVar30 = pdVar11[4] * pdVar11[0x11];
        dVar3 = pdVar11[5] * pdVar11[0x12];
        dVar16 = dVar30 * dVar8 - dVar9 * dVar28;
        dVar19 = dVar3 * dVar9 - dVar7 * dVar30;
        dVar23 = dVar28 * dVar7 - dVar8 * dVar3;
        dVar19 = dVar19 + dVar19;
        dVar23 = dVar23 + dVar23;
        dVar16 = dVar16 + dVar16;
        dVar22 = dVar27 * dVar17 + dVar22 + (dVar25 * dVar8 - dVar29 * dVar9);
        dVar6 = dVar16 * dVar17 + dVar3 + (dVar23 * dVar8 - dVar19 * dVar9);
        dVar3 = (dVar27 * dVar9 - dVar25 * dVar7) + dVar17 * dVar29 + dVar4;
        dVar4 = (dVar7 * dVar29 - dVar8 * dVar27) + dVar18 * dVar25 + dVar20;
        dVar17 = (dVar16 * dVar9 - dVar23 * dVar7) + dVar17 * dVar19 + dVar28;
        dVar20 = (dVar7 * dVar19 - dVar8 * dVar16) + dVar18 * dVar23 + dVar30;
        dVar18 = dVar22;
        if (dVar6 <= dVar22) {
          dVar18 = dVar6;
        }
        uVar32 = SUB84(dVar3,0);
        uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
        if (dVar31 <= dVar18) {
          dVar18 = dVar31;
        }
        dVar31 = dVar18;
        dVar18 = dVar3;
        if (dVar3 <= dVar17) {
          dVar18 = dVar17;
        }
        if (dVar17 <= dVar3) {
          uVar32 = SUB84(dVar17,0);
          uVar33 = (undefined4)((ulonglong)dVar17 >> 0x20);
        }
        if (dVar26 <= (double)CONCAT44(uVar33,uVar32)) {
          uVar32 = SUB84(dVar26,0);
          uVar33 = (undefined4)((ulonglong)dVar26 >> 0x20);
        }
        dVar26 = dVar4;
        if (dVar20 <= dVar4) {
          dVar26 = dVar20;
        }
        if (dVar18 <= dVar5) {
          dVar18 = dVar5;
        }
        if (dVar24 <= dVar26) {
          dVar26 = dVar24;
        }
        dVar24 = dVar26;
        if (dVar4 <= dVar20) {
          dVar4 = dVar20;
        }
        if (dVar22 <= dVar6) {
          dVar22 = dVar6;
        }
        if (dVar22 <= dVar15) {
          dVar22 = dVar15;
        }
        if (dVar4 <= dVar21) {
          dVar4 = dVar21;
        }
        dVar21 = dVar4;
        pdVar11 = pdVar11 + 0x16;
        dVar26 = (double)CONCAT44(uVar33,uVar32);
        dVar15 = dVar22;
        dVar5 = dVar18;
      } while (pdVar11 != pdVar12);
    }
    if ((longlong)*(int *)(lVar2 + 0x330) == 0) {
      dVar26 = (double)CONCAT44(uVar33,uVar32);
    }
    else {
      puVar10 = *(undefined8 **)(lVar2 + 0x328);
      puVar1 = puVar10 + (longlong)*(int *)(lVar2 + 0x330) * 5;
      do {
        if ((longlong)*(int *)(puVar10 + 1) == 0) {
          dVar26 = (double)CONCAT44(uVar33,uVar32);
        }
        else {
          pfVar13 = (float *)*puVar10;
          pfVar14 = pfVar13 + (longlong)*(int *)(puVar10 + 1) * 0x16;
          dVar5 = dVar18;
          dVar15 = dVar21;
          dVar17 = dVar24;
          do {
            dVar18 = (double)*pfVar13;
            dVar26 = dVar18;
            if ((double)CONCAT44(uVar33,uVar32) <= dVar18) {
              dVar26 = (double)CONCAT44(uVar33,uVar32);
            }
            dVar21 = (double)pfVar13[1];
            dVar24 = dVar21;
            if (dVar17 <= dVar21) {
              dVar24 = dVar17;
            }
            dVar17 = (double)pfVar13[2];
            dVar3 = dVar17;
            if (dVar31 <= dVar17) {
              dVar3 = dVar31;
            }
            dVar31 = dVar3;
            if (dVar18 <= dVar5) {
              dVar18 = dVar5;
            }
            if (dVar21 <= dVar15) {
              dVar21 = dVar15;
            }
            if (dVar17 <= dVar22) {
              dVar17 = dVar22;
            }
            dVar22 = dVar17;
            pfVar13 = pfVar13 + 0x16;
            uVar32 = SUB84(dVar26,0);
            uVar33 = (undefined4)((ulonglong)dVar26 >> 0x20);
            dVar5 = dVar18;
            dVar15 = dVar21;
            dVar17 = dVar24;
          } while (pfVar13 != pfVar14);
        }
        puVar10 = puVar10 + 5;
        uVar32 = SUB84(dVar26,0);
        uVar33 = (undefined4)((ulonglong)dVar26 >> 0x20);
      } while (puVar10 != puVar1);
    }
    uVar32 = SUB84(dVar26,0);
    uVar33 = (int)((ulonglong)dVar26 >> 0x20);
    if (dVar18 <= dVar26) {
      uVar32 = SUB84(dVar18,0);
      uVar33 = (int)((ulonglong)dVar18 >> 0x20);
    }
    if (ABS((double)CONCAT44(uVar33,uVar32) - dVar26) <= 9.999999747378752e-05) {
      uVar32 = SUB84(dVar24,0);
      uVar33 = (int)((ulonglong)dVar24 >> 0x20);
      if (dVar21 <= dVar24) {
        uVar32 = SUB84(dVar21,0);
        uVar33 = (int)((ulonglong)dVar21 >> 0x20);
      }
      if (ABS((double)CONCAT44(uVar33,uVar32) - dVar24) <= 9.999999747378752e-05) {
        dVar5 = dVar31;
        if (dVar22 <= dVar31) {
          dVar5 = dVar22;
        }
        if (ABS(dVar5 - dVar31) <= 9.999999747378752e-05) {
          dVar17 = dVar22 - dVar31;
          dVar5 = dVar21 - dVar24;
          dVar15 = dVar18 - dVar26;
          param_2[3] = dVar15;
          param_2[4] = dVar5;
          param_2[5] = dVar17;
          *param_2 = (dVar18 + dVar26) * 0.5;
          param_2[1] = (dVar21 + dVar24) * 0.5;
          param_2[2] = (dVar22 + dVar31) * 0.5;
          param_2[6] = SQRT(dVar17 * dVar17 + dVar15 * dVar15 + dVar5 * dVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 147f637da FUN_147f637da body=790 status=ok
// SIG undefined FUN_147f637da(void)

void FUN_147f637da(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_2f8 [36];
  undefined4 local_2d4;
  undefined8 local_2d0;
  longlong *local_2c8;
  byte local_2b9;
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  uint local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_250;
  longlong local_248;
  undefined4 local_240;
  undefined8 local_238 [12];
  longlong local_1d8 [12];
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  uint3 local_118 [4];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  longlong local_e8 [2];
  longlong local_d8 [12];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x4c8);
    plVar8 = *(longlong **)(param_1 + 0x4d0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (lVar3 != 0) {
      lVar5 = (**(code **)(*param_2 + 0x7a0))(param_2);
      lVar6 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
      if (lVar6 != 0) {
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        plVar8 = param_2 + 0x48;
        plVar10 = local_d8;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *plVar10 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar10 = plVar10 + 1;
        }
        local_73 = 0;
        local_78 = CONCAT31(local_78._1_3_,1);
        local_2c8 = param_3;
        local_e8[0] = lVar3;
        FUN_1407125d4(local_e8,&local_f0);
        local_2d0 = FUN_14034b308(lVar6);
        local_108 = 0;
        uStack_100 = 0;
        FUN_147c4786a(lVar6,&local_2b8);
        lVar3 = CONCAT44(uStack_2b4,local_2b8);
        local_2d4 = uStack_2b0;
        local_118[0]._0_4_ = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        FUN_144a2a070(lVar6,&local_148,0xffffffff);
        FUN_144b0760a(lVar5,&local_2b8);
        bVar13 = (char)local_2b8 == '\x03';
        uVar4 = FUN_144b261ba(lVar6);
        FUN_147c48a7c(local_118,uVar4,
                      CONCAT71((int7)((ulonglong)&local_2b8 >> 8),bVar13) & 0xffffffff);
        local_118[0] = (uint3)(ushort)local_118[0];
        local_170 = 0;
        local_168 = 0;
        local_150 = 0xffffffff;
        local_2b8 = local_2b8 & 0xffffff00;
        uStack_2b4 = (undefined4)local_148;
        uStack_2b0 = local_148._4_4_;
        uStack_2ac = (undefined4)uStack_140;
        uStack_2a8 = uStack_140._4_4_;
        local_2a4 = (undefined4)local_138;
        uStack_2a0 = local_138._4_4_;
        uStack_29c = (undefined4)uStack_130;
        uStack_298 = uStack_130._4_4_;
        local_294 = (undefined4)local_128;
        uStack_290 = local_128._4_4_;
        uStack_28c = (undefined4)uStack_120;
        uStack_288 = uStack_120._4_4_;
        local_284 = (undefined4)local_118[0];
        FUN_144b0760a(lVar5,&local_2b9);
        plVar8 = local_2c8;
        local_280 = (uint)local_2b9;
        local_278 = *(undefined4 *)(lVar6 + 0x50);
        uStack_274 = *(undefined4 *)(lVar6 + 0x54);
        uStack_270 = *(undefined4 *)(lVar6 + 0x58);
        uStack_26c = *(undefined4 *)(lVar6 + 0x5c);
        local_268 = *(undefined8 *)(lVar6 + 0x60);
        local_260 = local_2d0;
        local_250 = local_2d4;
        local_248 = local_108;
        local_240 = (undefined4)uStack_100;
        puVar9 = &DAT_14c846480;
        puVar11 = local_238;
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        plVar10 = param_2 + 0x48;
        plVar12 = local_1d8;
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *plVar12 = *plVar10;
          plVar10 = plVar10 + 1;
          plVar12 = plVar12 + 1;
        }
        local_178 = lVar5 + 0x38;
        local_160 = *(undefined8 *)(lVar5 + 0xf8);
        local_158 = *(undefined4 *)(lVar5 + 0x100);
        FUN_143629c3c(&local_f0,&local_2b8,0);
        FUN_141731984(&local_f0,0);
        iVar2 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar8 + 0xc) < iVar2 + 1U) {
          FUN_140711e5c(plVar8,iVar2);
        }
        *(undefined8 *)(*plVar8 + (longlong)iVar2 * 8) = local_f0;
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (lVar3 != 0) {
          FUN_1400020a8(lVar3);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f63af2 FUN_147f63af2 body=1925 status=ok
// SIG undefined FUN_147f63af2(void)

void FUN_147f63af2(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined4 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  longlong lVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_2f8 [32];
  uint local_2d8;
  undefined8 *local_2d0;
  ulonglong local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  uint local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  uint local_2a4;
  undefined8 *local_2a0;
  undefined8 local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong *local_228;
  undefined8 uStack_220;
  longlong local_210;
  longlong local_208 [2];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined1 local_193;
  undefined8 local_190;
  undefined1 local_188 [24];
  undefined1 local_170 [8];
  undefined1 *local_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (param_1 == 0) goto LAB_147f63ba9;
  lVar6 = *(longlong *)(param_1 + 0x4c8);
  plVar7 = *(longlong **)(param_1 + 0x4d0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  if (lVar6 == 0) goto LAB_147f63ba9;
  dVar11 = (double)param_2[0x48];
  dVar12 = (double)param_2[0x49];
  dVar10 = (double)param_2[0x4a];
  local_f8 = (undefined4)param_2[0x4c];
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x264);
  uStack_f0 = (undefined4)param_2[0x4d];
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0x26c);
  local_e8 = (undefined4)param_2[0x4e];
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x274);
  local_148 = (double)param_2[0x50];
  dVar13 = (double)param_2[0x51];
  dVar14 = (double)param_2[0x52];
  dVar3 = (double)param_2[0x4b];
  dVar9 = dVar12 + dVar12;
  dVar26 = dVar10 + dVar10;
  dVar28 = dVar11 * (dVar11 + dVar11);
  local_158 = (1.0 - (dVar10 * dVar26 + dVar12 * dVar9)) * local_148;
  dVar10 = (1.0 - (dVar10 * dVar26 + dVar28)) * dVar13;
  local_108 = (1.0 - (dVar28 + dVar12 * dVar9)) * dVar14;
  dVar27 = dVar26 * dVar3;
  dVar28 = (dVar11 + dVar11) * (double)param_2[0x4b];
  dVar3 = dVar9 * dVar3;
  dStack_150 = (dVar9 * dVar11 + dVar27) * local_148;
  local_128 = (dVar26 * dVar12 + dVar28) * dVar13;
  local_148 = ((double)param_2[0x48] * dVar26 - dVar3) * local_148;
  dVar28 = (dVar26 * dVar12 - dVar28) * dVar14;
  uStack_140 = 0;
  local_138._8_4_ = SUB84(dVar10,0);
  local_138._0_8_ = (dVar9 * dVar11 - dVar27) * dVar13;
  local_138._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  uStack_120 = 0;
  local_118._8_4_ = SUB84(dVar28,0);
  local_118._0_8_ = (dVar3 + (double)param_2[0x48] * dVar26) * dVar14;
  local_118._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  uStack_100 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  FUN_144afda3c(&local_158,local_188,0x3e45798ee0000000);
  FUN_144a91046(&local_158);
  dVar3 = local_108;
  auVar16 = local_118;
  local_118 = local_138;
  local_108 = local_128;
  local_138 = auVar16;
  local_128 = dVar3;
  lVar25 = param_2[200];
  local_194 = 0;
  local_190 = 0;
  local_1f8 = (undefined4)param_2[0x48];
  uStack_1f4 = *(undefined4 *)((longlong)param_2 + 0x244);
  uStack_1f0 = (undefined4)param_2[0x49];
  uStack_1ec = *(undefined4 *)((longlong)param_2 + 0x24c);
  local_1e8 = (undefined4)param_2[0x4a];
  uStack_1e4 = *(undefined4 *)((longlong)param_2 + 0x254);
  uStack_1e0 = (undefined4)param_2[0x4b];
  uStack_1dc = *(undefined4 *)((longlong)param_2 + 0x25c);
  local_1d8 = param_2[0x4c];
  lStack_1d0 = param_2[0x4d];
  local_1c8 = param_2[0x4e];
  lStack_1c0 = param_2[0x4f];
  local_193 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 1;
  local_208[0] = lVar6;
  FUN_1407125d4(local_208,&local_210);
  lVar6 = local_210;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x100000000;
  local_228 = (longlong *)0x0;
  uStack_220 = 0;
  local_230 = *(undefined8 **)(param_2[0xd9] + 0x30);
  if (local_230 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_230 + 1) = *(int *)(local_230 + 1) + 1;
    UNLOCK();
  }
  puVar19 = &DAT_14c846480;
  puVar24 = &local_298;
  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar24 = puVar24 + 1;
  }
  puVar19 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_140711d1e(puVar19,&local_230,&local_298);
  if (puVar19 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
  }
  local_2c8 = local_160 & 0xffffffff;
  local_238 = puVar19;
  FUN_140711c7e(&local_2a0,local_2c8,&local_238);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar20 = (**(code **)(*param_2 + 0x558))(param_2);
  uVar5 = *(undefined4 *)(param_2[0x15] + 0xc);
  uVar17 = (**(code **)(*param_2 + 0x580))(param_2);
  FUN_144b20c5c(&local_298,uVar17,0,uVar20);
  local_2ac = (undefined4)local_298;
  local_2a8 = local_298._4_4_;
  local_2c0 = 0;
  local_2bc = (undefined4)local_298;
  local_2b4 = 0 < (int)lVar25 ^ 3 | dStack_290._0_4_ | 0x14;
  local_2b8 = uVar4;
  local_2b0 = uVar5;
  local_2a4 = local_2b4;
  FUN_144b03742(local_2a0);
  FUN_144aa44d4(local_2a0,&local_2c0);
  local_298 = (undefined8 *)(param_2[0xd9] + 0x20);
  local_2d8 = *(uint *)(local_2a0 + 1) >> 3;
  local_2d0 = &local_298;
  FUN_140a4b88e(local_2a0 + 0x10,1,(longlong)local_2a0 + 0xc,local_2a0[9]);
  uVar15 = uStack_220;
  lVar25 = (longlong)(int)uStack_220;
  uVar18 = (int)uStack_220 + 1;
  uStack_220 = CONCAT44(uStack_220._4_4_,uVar18);
  if (uStack_220._4_4_ < uVar18) {
    FUN_140619960(&local_228,uVar15 & 0xffffffff);
  }
  iVar23 = (int)local_2c8;
  local_228[lVar25] = (longlong)local_238;
  local_238 = (undefined8 *)0x0;
  uVar18 = iVar23 + 1;
  local_160 = CONCAT44(local_160._4_4_,uVar18);
  if (local_160._4_4_ < uVar18) {
    FUN_1402771ac(local_170);
  }
  puVar21 = local_168;
  if (local_168 == (undefined1 *)0x0) {
    puVar21 = local_170;
  }
  *(undefined8 **)(puVar21 + (longlong)iVar23 * 8) = local_2a0;
  local_2a0 = (undefined8 *)0x0;
  if ((int)uStack_220 == 1) {
    uVar20 = *(undefined8 *)(lVar6 + 0x40);
    local_298 = (undefined8 *)*local_228;
    if (local_298 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = *(int *)(local_298 + 1) + 1;
      UNLOCK();
    }
LAB_147f64089:
    FUN_1406188f0(uVar20,&local_298);
  }
  else {
    puVar19 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_14014f414(puVar19,&local_228);
    if (puVar19 == (undefined8 *)0x0) {
      uVar20 = *(undefined8 *)(lVar6 + 0x40);
      local_298 = (undefined8 *)0x0;
      goto LAB_147f64089;
    }
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
    uVar20 = *(undefined8 *)(lVar6 + 0x40);
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
    local_298 = puVar19;
    FUN_1406188f0(uVar20);
    LOCK();
    piVar2 = (int *)(puVar19 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(int *)((longlong)puVar19 + 0xc) == 0)) {
      (**(code **)*puVar19)(puVar19,1);
    }
  }
  puVar21 = local_170;
  if (local_168 != (undefined1 *)0x0) {
    puVar21 = local_168;
  }
  lVar25 = (longlong)(int)local_160;
  if (lVar25 != 0) {
    lVar22 = 0;
    do {
      lVar8 = *(longlong *)(lVar6 + 0x40);
      dStack_290 = (double)*(float *)(lVar8 + 0x44);
      local_298 = (undefined8 *)(double)*(float *)(lVar8 + 0x40);
      local_288._8_4_ = SUB84((double)*(float *)(lVar8 + 0x4c),0);
      local_288._0_8_ = (double)*(float *)(lVar8 + 0x48);
      local_288._12_4_ = (int)((ulonglong)(double)*(float *)(lVar8 + 0x4c) >> 0x20);
      local_278 = *(undefined4 *)(lVar8 + 0x20);
      uStack_274 = *(undefined4 *)(lVar8 + 0x24);
      uStack_270 = *(undefined4 *)(lVar8 + 0x28);
      uStack_26c = *(undefined4 *)(lVar8 + 0x2c);
      local_268 = *(undefined8 *)(lVar8 + 0x30);
      uStack_260 = 0;
      local_258 = 0x3ff0000000000000;
      uStack_250 = 0x3ff0000000000000;
      local_248 = 0x3ff0000000000000;
      uStack_240 = 0;
      FUN_14484a332(*(undefined8 *)(puVar21 + lVar22),&local_298);
      lVar22 = lVar22 + 8;
    } while (lVar25 * 8 != lVar22);
  }
  FUN_146dd9a2e(*(longlong *)(lVar6 + 0x40) + 0x78,local_170);
  iVar23 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar23 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar23 + 1U) {
    FUN_140711e5c(param_3,iVar23);
  }
  *(longlong *)(*param_3 + (longlong)iVar23 * 8) = local_210;
  if (local_2a0 != (undefined8 *)0x0) {
    (**(code **)*local_2a0)(local_2a0,1);
  }
  if (local_238 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_238 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(int *)((longlong)local_238 + 0xc) == 0)) {
      (**(code **)*local_238)(local_238,1);
    }
  }
  if (local_230 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_230 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(int *)((longlong)local_230 + 0xc) == 0)) {
      (**(code **)*local_230)(local_230,1);
    }
  }
  FUN_144756766(local_228,uStack_220 & 0xffffffff);
  if (local_228 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14008cd5a(local_170);
LAB_147f63ba9:
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f64278 FUN_147f64278 body=2296 status=ok
// SIG undefined FUN_147f64278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f64278(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined1 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined1 *local_320;
  undefined8 local_318;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_29b [3];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  cVar18 = FUN_144729dda(param_2 + 1);
  if (cVar18 != '\0') {
    lVar20 = FUN_14479d2ce(param_2 + 1);
    lVar20 = *(longlong *)(lVar20 + 0x390);
    if (lVar20 != 0) {
      lVar27 = *(longlong *)(lVar20 + 0x660);
      lVar21 = FUN_14479d2ce(param_2 + 2);
      if ((lVar21 != 0 && lVar27 != 0) && ((longlong)*(int *)(lVar21 + 200) != 0)) {
        lVar27 = *(longlong *)(lVar21 + 0xc0);
        lVar21 = (longlong)*(int *)(lVar21 + 200) * 0xb0;
        do {
          lVar22 = FUN_140081d40(lVar27,0);
          if (lVar22 != 0) {
            lVar23 = FUN_1406d0862();
            if (((*(int *)(lVar23 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar23 + 0x38) * 8) == lVar23 + 0x30)) &&
               (lVar22 = *(longlong *)(lVar22 + 0x188), lVar22 != 0)) {
              uVar24 = FUN_14001cc68(0x188,0x10);
              FUN_144805afa(uVar24);
              *param_2 = uVar24;
              thunk_FUN_1400f437c(uVar24,lVar22 + 0x148);
              puVar26 = local_29b;
              FUN_14025a69a(local_29b,0);
              auVar37 = _DAT_149934d80;
              local_2d8 = ZEXT816(0);
              local_2e8 = ZEXT816(0);
              auVar31 = *(undefined1 (*) [16])(param_2 + 0xc);
              dVar5 = auVar31._0_8_;
              dVar9 = auVar31._8_8_;
              auVar3 = *(undefined1 (*) [16])(param_2 + 0xe);
              dVar6 = auVar3._0_8_;
              auVar32 = *(undefined1 (*) [16])(lVar27 + 0x60);
              dVar7 = auVar32._0_8_;
              dVar10 = auVar32._8_8_;
              auVar4 = *(undefined1 (*) [16])(lVar27 + 0x70);
              dVar8 = auVar4._0_8_;
              auVar31 = minpd(auVar32,auVar31);
              auVar36 = minpd(auVar4,auVar3);
              auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
              auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
              iVar19 = movmskpd((int)local_2e8,auVar32);
              auVar31._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar31._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              uVar25 = movmskpd((int)puVar26,auVar31);
              if ((uVar25 & 0x3fffffff) == 0 && iVar19 == 0) {
                dVar39 = *(double *)(lVar27 + 0x20);
                dVar41 = *(double *)(lVar27 + 0x28);
                dVar12 = *(double *)(lVar27 + 0x30);
                dVar13 = *(double *)(lVar27 + 0x38);
                dVar14 = (double)param_2[4];
                dVar15 = (double)param_2[5];
                dVar16 = (double)param_2[6];
                dVar17 = (double)param_2[7];
                dVar30 = (double)param_2[7];
                dVar35 = (double)param_2[7];
                dVar1 = (double)param_2[4];
                dVar11 = (double)param_2[4];
                dVar40 = (double)param_2[5];
                dVar2 = (double)param_2[5];
                dVar38 = (double)param_2[6];
                dVar34 = (double)param_2[6];
                local_308._0_8_ =
                     dVar41 * dVar38 * -1.0 +
                     dVar12 * dVar40 + dVar13 * dVar1 * 1.0 + dVar39 * dVar30;
                local_308._8_8_ =
                     dVar39 * dVar34 * 1.0 +
                     dVar13 * dVar2 + dVar12 * dVar11 * -1.0 + dVar41 * dVar35;
                local_2f8._0_8_ =
                     dVar13 * dVar38 * 1.0 +
                     ((dVar1 * dVar41 * 1.0 + dVar12 * dVar30) - dVar39 * dVar40);
                local_2f8._8_8_ =
                     dVar12 * dVar34 * -1.0 +
                     ((dVar11 * dVar39 * -1.0 + dVar13 * dVar35) - dVar41 * dVar2);
                dVar39 = *(double *)(lVar27 + 0x40) * dVar5;
                dVar2 = *(double *)(lVar27 + 0x48) * dVar9;
                dVar34 = *(double *)(lVar27 + 0x50) * dVar6;
                dVar38 = *(double *)(lVar27 + 0x58) * auVar3._8_8_;
                dVar11 = dVar2 * dVar14 - dVar15 * dVar39;
                dVar1 = dVar34 * dVar15 - dVar16 * dVar2;
                dVar40 = dVar39 * dVar16 - dVar14 * dVar34;
                dVar41 = dVar38 * dVar17 - dVar17 * dVar38;
                dVar1 = dVar1 + dVar1;
                dVar40 = dVar40 + dVar40;
                dVar11 = dVar11 + dVar11;
                dVar41 = dVar41 + dVar41;
                dVar2 = (dVar1 * dVar16 - dVar11 * dVar14) + dVar35 * dVar40 + dVar2 +
                        (double)param_2[9];
                dVar35 = (dVar41 * dVar17 - dVar41 * dVar17) + dVar35 * dVar41 + dVar38 +
                         (double)param_2[0xb];
                local_2e8._8_4_ = SUB84(dVar2,0);
                local_2e8._0_8_ =
                     (dVar11 * dVar15 - dVar16 * dVar40) + dVar30 * dVar1 + dVar39 +
                     (double)param_2[8];
                local_2e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                local_2d8._8_4_ = SUB84(dVar35,0);
                local_2d8._0_8_ =
                     (dVar40 * dVar14 - dVar15 * dVar1) + dVar30 * dVar11 + dVar34 +
                     (double)param_2[10];
                local_2d8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
              }
              else {
                dVar1 = (double)param_2[4];
                dVar40 = (double)param_2[5];
                dVar2 = (double)param_2[6];
                dVar34 = dVar40 + dVar40;
                dVar38 = dVar2 + dVar2;
                dVar35 = dVar1 * (dVar1 + dVar1);
                local_1a8 = (1.0 - (dVar35 + dVar40 * dVar34)) * dVar6;
                dVar30 = (double)param_2[7];
                dVar39 = dVar38 * dVar30;
                dVar41 = (dVar1 + dVar1) * (double)param_2[7];
                dVar30 = dVar34 * dVar30;
                local_1b8 = (dVar30 + (double)param_2[4] * dVar38) * dVar6;
                dVar35 = (DAT_149934d80._8_8_ - (dVar2 * dVar38 + dVar35)) * dVar9;
                dVar11 = (dVar34 * dVar1 + dVar39) * dVar5;
                local_1c8 = (dVar38 * dVar40 + dVar41) * dVar9;
                dStack_1b0 = (dVar38 * dVar40 - dVar41) * dVar6;
                local_1e8 = ((double)param_2[4] * dVar38 - dVar30) * dVar5;
                local_1f8._8_4_ = SUB84(dVar11,0);
                local_1f8._0_8_ =
                     ((double)DAT_149934d80 - (dVar2 * dVar38 + dVar40 * dVar34)) * dVar5;
                local_1f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                uStack_1e0 = 0;
                local_1d8._8_4_ = SUB84(dVar35,0);
                local_1d8._0_8_ = (dVar34 * dVar1 - dVar39) * dVar9;
                local_1d8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = param_2[8];
                uStack_190 = param_2[9];
                local_188 = param_2[10];
                uStack_180 = 0x3ff0000000000000;
                dVar1 = *(double *)(lVar27 + 0x20);
                dVar40 = *(double *)(lVar27 + 0x28);
                dVar2 = *(double *)(lVar27 + 0x30);
                dVar34 = dVar40 + dVar40;
                dVar38 = dVar2 + dVar2;
                dVar35 = dVar1 * (dVar1 + dVar1);
                local_228 = (1.0 - (dVar35 + dVar40 * dVar34)) * dVar8;
                dVar11 = *(double *)(lVar27 + 0x20) * dVar38;
                dVar30 = *(double *)(lVar27 + 0x38);
                dVar39 = dVar38 * dVar30;
                dVar41 = (dVar1 + dVar1) * *(double *)(lVar27 + 0x38);
                dVar30 = dVar34 * dVar30;
                local_238 = (dVar30 + dVar11) * dVar8;
                dStack_230 = (dVar38 * dVar40 - dVar41) * dVar8;
                local_278 = ((double)DAT_149934d80 - (dVar2 * dVar38 + dVar40 * dVar34)) * dVar7;
                dVar35 = (DAT_149934d80._8_8_ - (dVar2 * dVar38 + dVar35)) * dVar10;
                dStack_270 = (dVar34 * dVar1 + dVar39) * dVar7;
                local_248 = (dVar38 * dVar40 + dVar41) * dVar10;
                local_268 = (dVar11 - dVar30) * dVar7;
                uStack_260 = 0;
                local_258._8_4_ = SUB84(dVar35,0);
                local_258._0_8_ = (dVar34 * dVar1 - dVar39) * dVar10;
                local_258._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = *(undefined8 *)(lVar27 + 0x40);
                uStack_210 = *(undefined8 *)(lVar27 + 0x48);
                local_208 = *(undefined8 *)(lVar27 + 0x50);
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar36._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
                auVar36._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
                auVar31 = blendvpd(_DAT_149936790,auVar37,auVar36);
                uVar28 = -(ulonglong)(0.0 <= dVar6 * dVar8);
                dVar30 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar35 = auVar31._0_8_;
                local_168 = local_168 * dVar35;
                local_170 = local_170 * dVar35;
                local_178 = local_178 * dVar35;
                dVar35 = auVar31._8_8_;
                local_148 = local_148 * dVar35;
                local_150 = local_150 * dVar35;
                local_158 = dVar35 * local_158;
                local_128 = local_128 * dVar30;
                local_130 = local_130 * dVar30;
                local_138 = dVar30 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar30 = local_288 * local_288 + local_298 * local_298;
                dVar35 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar33._0_8_ = dVar30 + dVar35;
                auVar33._8_8_ = dVar30 + dVar35;
                auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
                auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
                auVar31 = sqrtpd(auVar33,auVar33);
                auVar31 = divpd(auVar37,auVar31);
                auVar37._0_8_ = auVar31._0_8_ * local_288;
                auVar37._8_8_ = auVar31._8_8_ * dStack_280;
                local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar29);
                local_308._8_8_ =
                     (ulonglong)(dStack_290 * auVar31._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
                local_308._0_8_ =
                     (ulonglong)(local_298 * auVar31._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
                local_2d8._8_8_ = 0;
                local_2d8._0_8_ = local_108;
                local_2e8._8_8_ = uStack_110;
                local_2e8._0_8_ = local_118;
              }
              dVar30 = auVar3._8_8_ * auVar4._8_8_;
              local_2c8._8_4_ = SUB84(dVar9 * dVar10,0);
              local_2c8._0_8_ = dVar5 * dVar7;
              local_2c8._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
              local_2b8._8_4_ = SUB84(dVar30,0);
              local_2b8._0_8_ = dVar6 * dVar8;
              local_2b8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
              local_318 = 0;
              local_328 = param_1;
              local_320 = local_29b;
              FUN_140311a0a(*param_2,lVar22,local_308,lVar20);
            }
          }
          lVar27 = lVar27 + 0xb0;
          lVar21 = lVar21 + -0xb0;
        } while (lVar21 != 0);
      }
      if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_348);
}



// FUNCTION 147f64be4 FUN_147f64be4 body=825 status=ok
// SIG undefined FUN_147f64be4(void)

void FUN_147f64be4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_141255c6e();
  lVar10 = *(longlong *)(param_1 + 0xa8);
  if (lVar10 != 0) {
    lVar12 = FUN_1459acc96();
    if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8
         ) == lVar12 + 0x30)) goto LAB_147f64c23;
  }
  lVar10 = 0;
LAB_147f64c23:
  uVar3 = *(undefined8 *)(lVar10 + 0x4c8);
  plVar4 = *(longlong **)(lVar10 + 0x4d0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  local_78 = 0;
  uStack_70 = 0;
  iVar7 = *(int *)(param_1 + 0x2b0);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_140718530(&local_78);
    iVar7 = *(int *)(param_1 + 0x2b0);
    if ((longlong)iVar7 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x2a8);
      lVar11 = 0;
      do {
        local_60 = *(undefined8 **)(lVar12 + lVar11);
        lVar8 = FUN_14479d2ce(&local_60);
        if (lVar8 != 0) {
          lVar9 = FUN_144a7a726();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
            lVar9 = FUN_1401f7e9a();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
              FUN_147f63af2(lVar10,lVar8,&local_78);
            }
          }
          else {
            FUN_147f637da(lVar10,lVar8,&local_78);
          }
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar7 * 8 != lVar11);
    }
  }
  FUN_142a2e6cc(uVar3,&local_78,1);
  uVar5 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    FUN_140718530(&local_78,0);
  }
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (((lVar10 != 0) || (lVar10 = FUN_1448abda6(param_1), lVar10 != 0)) &&
     (lVar10 = *(longlong *)(lVar10 + 0x260), lVar10 != 0)) {
    iVar7 = *(int *)(param_1 + 0x2c0);
    lVar12 = (longlong)iVar7;
    if (0 < lVar12) {
      lVar11 = 0;
      lVar8 = 0;
      do {
        FUN_147f64278(lVar10,*(longlong *)(param_1 + 0x2b8) + lVar11);
        lVar8 = lVar8 + 1;
        iVar7 = *(int *)(param_1 + 0x2c0);
        lVar12 = (longlong)iVar7;
        lVar11 = lVar11 + 0x80;
      } while (lVar8 < lVar12);
    }
    if (iVar7 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x2b8);
      lVar12 = lVar12 << 7;
      do {
        cVar6 = FUN_144729dda(lVar10 + 8);
        if (cVar6 != '\0') {
          lVar11 = FUN_14479d2ce(lVar10 + 8);
          lVar8 = *(longlong *)(lVar11 + 0x390);
          lVar11 = lVar8 + 0x7b0;
          FUN_147f64f9e(&local_80);
          FUN_147f64f20(lVar11,param_1,local_80);
          FUN_147f65050(&local_88);
          FUN_147f64f20(lVar11,param_1,local_88);
          FUN_147f65118(&local_90);
          FUN_147f64f20(lVar11,param_1,local_90);
          local_a0 = 0;
          local_98 = lVar10;
          FUN_14485c47a(&local_a0,lVar8);
          local_58 = &local_98;
          local_60 = &local_a0;
          FUN_147f666ec(param_1 + 0x2c8,local_4c,&local_60);
        }
        lVar10 = lVar10 + 0x80;
        lVar12 = lVar12 + -0x80;
      } while (lVar12 != 0);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f64f20 FUN_147f64f20 body=125 status=ok
// SIG undefined FUN_147f64f20(void)

void FUN_147f64f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f64f9e FUN_147f64f9e body=177 status=ok
// SIG undefined FUN_147f64f9e(void)

undefined8 * FUN_147f64f9e(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb24a90) {
    FUN_144b3d300(&DAT_14cb24a90);
    if (DAT_14cb24a90 == -1) {
      pwVar2 = L"OnBreakMakeFracturedChunksTransient";
      puVar3 = local_68;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      FUN_1446f470e(&DAT_14cb24a88,local_68,1);
      _Init_thread_footer(&DAT_14cb24a90);
    }
  }
  *param_1 = DAT_14cb24a88;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f65050 FUN_147f65050 body=198 status=ok
// SIG undefined FUN_147f65050(void)

undefined8 * FUN_147f65050(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [11];
  undefined2 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb24aa0) {
    FUN_144b3d300(&DAT_14cb24aa0);
    if (DAT_14cb24aa0 == -1) {
      pwVar2 = L"OnBreakSetFracturedChunksCollisionFilterData";
      puVar3 = local_88;
      for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_30 = 0;
      FUN_1446f470e(&DAT_14cb24a98,local_88,1);
      _Init_thread_footer(&DAT_14cb24aa0);
    }
  }
  *param_1 = DAT_14cb24a98;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f65118 FUN_147f65118 body=183 status=ok
// SIG undefined FUN_147f65118(void)

undefined8 * FUN_147f65118(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb24ab0) {
    FUN_144b3d300(&DAT_14cb24ab0);
    if (DAT_14cb24ab0 == -1) {
      pwVar2 = L"OnBreakRemoveWorldQueryCollision";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0;
      FUN_1446f470e(&DAT_14cb24aa8,local_68,1);
      _Init_thread_footer(&DAT_14cb24ab0);
    }
  }
  *param_1 = DAT_14cb24aa8;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f651d0 FUN_147f651d0 body=118 status=ok
// SIG undefined FUN_147f651d0(void)

void FUN_147f651d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1411096ca();
  if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x2c0) << 7;
    lVar3 = *(longlong *)(param_1 + 0x2b8) + 8;
    do {
      cVar2 = FUN_144729dda(lVar3);
      if (cVar2 != '\0') {
        lVar1 = FUN_14479d2ce(lVar3);
        lVar1 = *(longlong *)(lVar1 + 0x390);
        *(undefined4 *)(lVar1 + 0x7b8) = 0;
        if (*(int *)(lVar1 + 0x7bc) != 0) {
          FUN_1407d9874(lVar1 + 0x7b0,0);
        }
      }
      lVar3 = lVar3 + 0x80;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 147f6524c FUN_147f6524c body=1087 status=ok
// SIG undefined FUN_147f6524c(void)

void FUN_147f6524c(longlong param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  
  iVar8 = *(int *)(param_1 + 0x10);
  lVar15 = (longlong)iVar8;
  if (lVar15 == -1) {
    iVar8 = FUN_147f66de8(param_1);
    *(int *)(param_1 + 0x10) = iVar8;
    lVar15 = *(longlong *)(param_1 + 0x28);
    lVar11 = (longlong)iVar8 * 0x50;
    *(double *)(lVar15 + 0x48 + lVar11) = param_2[6];
    dVar22 = *param_2;
    dVar23 = param_2[1];
    dVar24 = param_2[2];
    dVar6 = param_2[3];
    dVar3 = param_2[5];
    pdVar1 = (double *)(lVar15 + 0x38 + lVar11);
    *pdVar1 = param_2[4];
    pdVar1[1] = dVar3;
    pdVar1 = (double *)(lVar15 + 0x28 + lVar11);
    *pdVar1 = dVar24;
    pdVar1[1] = dVar6;
    pdVar1 = (double *)(lVar15 + 0x18 + lVar11);
    *pdVar1 = dVar22;
    pdVar1[1] = dVar23;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x10) * 0x50) =
         *param_3;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar11 + 0xc + lVar15 * 0x50) != -1) {
      dVar22 = param_2[5];
      dVar23 = param_2[4];
      dVar24 = param_2[3];
      dVar6 = param_2[2];
      dVar3 = *param_2;
      dVar4 = param_2[1];
      do {
        iVar8 = *(int *)(lVar11 + 8 + lVar15 * 0x50);
        lVar13 = (longlong)iVar8 * 0x50;
        uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x40 + lVar13);
        uVar16 = SUB84(dVar22,0);
        uVar17 = uVar18;
        if (dVar22 <= dVar5) {
          uVar16 = SUB84(dVar5,0);
          uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        iVar10 = *(int *)(lVar11 + 0xc + lVar15 * 0x50);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x38 + lVar13);
        uVar19 = SUB84(dVar23,0);
        uVar20 = uVar21;
        if (dVar23 <= dVar5) {
          uVar19 = SUB84(dVar5,0);
          uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x30 + lVar13);
        uVar25 = SUB84(dVar24,0);
        uVar27 = uVar26;
        if (dVar24 <= dVar5) {
          uVar25 = SUB84(dVar5,0);
          uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar30 = SUB84(dVar6,0);
        uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x28 + lVar13);
        uVar31 = uVar30;
        uVar38 = uVar37;
        if (dVar5 <= dVar6) {
          uVar31 = SUB84(dVar5,0);
          uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar32 = SUB84(dVar4,0);
        uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x20 + lVar13);
        uVar33 = uVar32;
        uVar40 = uVar39;
        if (dVar5 <= dVar4) {
          uVar33 = SUB84(dVar5,0);
          uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar34 = SUB84(dVar3,0);
        uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x18 + lVar13);
        uVar35 = uVar34;
        uVar42 = uVar41;
        if (dVar5 <= dVar3) {
          uVar35 = SUB84(dVar5,0);
          uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        lVar15 = (longlong)iVar10 * 0x50;
        dVar5 = *(double *)(lVar11 + 0x40 + lVar15);
        uVar36 = SUB84(dVar22,0);
        if (dVar22 <= dVar5) {
          uVar36 = SUB84(dVar5,0);
          uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x38 + lVar15);
        uVar29 = SUB84(dVar23,0);
        if (dVar23 <= dVar5) {
          uVar29 = SUB84(dVar5,0);
          uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x30 + lVar15);
        uVar28 = SUB84(dVar24,0);
        if (dVar24 <= dVar5) {
          uVar28 = SUB84(dVar5,0);
          uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x28 + lVar15);
        if (dVar5 <= dVar6) {
          uVar30 = SUB84(dVar5,0);
          uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x20 + lVar15);
        if (dVar5 <= dVar4) {
          uVar32 = SUB84(dVar5,0);
          uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x18 + lVar15);
        if (dVar5 <= dVar3) {
          uVar34 = SUB84(dVar5,0);
          uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        if (((double)CONCAT44(uVar26,uVar28) - (double)CONCAT44(uVar41,uVar34)) *
            ((double)CONCAT44(uVar21,uVar29) - (double)CONCAT44(uVar39,uVar32)) *
            ((double)CONCAT44(uVar18,uVar36) - (double)CONCAT44(uVar37,uVar30)) <=
            ((double)CONCAT44(uVar27,uVar25) - (double)CONCAT44(uVar42,uVar35)) *
            ((double)CONCAT44(uVar20,uVar19) - (double)CONCAT44(uVar40,uVar33)) *
            ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar38,uVar31))) {
          iVar8 = iVar10;
        }
        lVar15 = (longlong)iVar8;
      } while (*(int *)(lVar11 + 0xc + lVar15 * 0x50) != -1);
    }
    iVar9 = FUN_147f66de8(param_1);
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar13 = (longlong)iVar9 * 0x50;
    uVar16 = *(undefined4 *)((longlong)param_2 + 4);
    uVar17 = *(undefined4 *)(param_2 + 1);
    uVar18 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar19 = *(undefined4 *)(param_2 + 2);
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar21 = *(undefined4 *)(param_2 + 3);
    uVar25 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar27 = *(undefined4 *)(param_2 + 4);
    uVar26 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar31 = *(undefined4 *)(param_2 + 5);
    uVar38 = *(undefined4 *)((longlong)param_2 + 0x2c);
    puVar2 = (undefined4 *)(lVar11 + 0x18 + lVar13);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    puVar2 = (undefined4 *)(lVar11 + 0x28 + lVar13);
    *puVar2 = uVar19;
    puVar2[1] = uVar20;
    puVar2[2] = uVar21;
    puVar2[3] = uVar25;
    puVar2 = (undefined4 *)(lVar11 + 0x38 + lVar13);
    *puVar2 = uVar27;
    puVar2[1] = uVar26;
    puVar2[2] = uVar31;
    puVar2[3] = uVar38;
    *(double *)(lVar11 + 0x48 + lVar13) = param_2[6];
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar13) = *param_3;
    iVar10 = FUN_147f66de8(param_1);
    lVar14 = (longlong)iVar10 * 0x50;
    *(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar14) = iVar8;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar14) = iVar9;
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar15 = lVar15 * 0x50;
    dVar22 = *(double *)(lVar11 + 0x40 + lVar15);
    uVar16 = SUB84(dVar22,0);
    uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x40 + lVar13);
    if (dVar22 <= dVar23) {
      uVar16 = SUB84(dVar23,0);
      uVar17 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x38 + lVar15);
    uVar18 = SUB84(dVar22,0);
    uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x38 + lVar13);
    if (dVar22 <= dVar23) {
      uVar18 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x30 + lVar15);
    uVar20 = SUB84(dVar22,0);
    uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x30 + lVar13);
    if (dVar22 <= dVar23) {
      uVar20 = SUB84(dVar23,0);
      uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x28 + lVar15);
    dVar23 = *(double *)(lVar11 + 0x28 + lVar13);
    if (dVar23 <= dVar22) {
      dVar22 = dVar23;
    }
    dVar23 = *(double *)(lVar11 + 0x18 + lVar15);
    dVar24 = *(double *)(lVar11 + 0x20 + lVar15);
    dVar6 = *(double *)(lVar11 + 0x20 + lVar13);
    if (dVar6 <= dVar24) {
      dVar24 = dVar6;
    }
    dVar6 = *(double *)(lVar11 + 0x18 + lVar13);
    if (dVar6 <= dVar23) {
      dVar23 = dVar6;
    }
    *(double *)(lVar11 + 0x18 + lVar14) = dVar23;
    *(double *)(lVar11 + 0x20 + lVar14) = dVar24;
    *(double *)(lVar11 + 0x28 + lVar14) = dVar22;
    *(ulonglong *)(lVar11 + 0x30 + lVar14) = CONCAT44(uVar21,uVar20);
    *(ulonglong *)(lVar11 + 0x38 + lVar14) = CONCAT44(uVar19,uVar18);
    *(ulonglong *)(lVar11 + 0x40 + lVar14) = CONCAT44(uVar17,uVar16);
    *(undefined1 *)(lVar11 + 0x48 + lVar14) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar14) = 1;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar15);
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar15) = iVar10;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar13) = iVar10;
    if ((longlong)iVar9 == -1) {
      *(int *)(param_1 + 0x10) = iVar10;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + (longlong)iVar10 * 0x50) = iVar9;
      lVar11 = (longlong)iVar9 * 0x50;
      lVar15 = *(longlong *)(param_1 + 0x28) + lVar11;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar11) == iVar8) {
        *(int *)(lVar15 + 8) = iVar10;
      }
      else {
        *(int *)(lVar15 + 0xc) = iVar10;
      }
    }
    if (iVar10 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      do {
        lVar11 = (longlong)iVar10 * 0x50;
        lVar13 = (longlong)*(int *)(lVar15 + 8 + lVar11) * 0x50;
        lVar14 = (longlong)*(int *)(lVar15 + 0xc + lVar11) * 0x50;
        dVar22 = *(double *)(lVar15 + 0x40 + lVar13);
        uVar16 = SUB84(dVar22,0);
        uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x40 + lVar14);
        if (dVar22 <= dVar23) {
          uVar16 = SUB84(dVar23,0);
          uVar17 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x38 + lVar13);
        uVar18 = SUB84(dVar22,0);
        uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x38 + lVar14);
        if (dVar22 <= dVar23) {
          uVar18 = SUB84(dVar23,0);
          uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x30 + lVar13);
        uVar20 = SUB84(dVar22,0);
        uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x30 + lVar14);
        if (dVar22 <= dVar23) {
          uVar20 = SUB84(dVar23,0);
          uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x28 + lVar13);
        dVar23 = *(double *)(lVar15 + 0x28 + lVar14);
        if (dVar23 <= dVar22) {
          dVar22 = dVar23;
        }
        dVar23 = *(double *)(lVar15 + 0x20 + lVar13);
        dVar24 = *(double *)(lVar15 + 0x20 + lVar14);
        if (dVar24 <= dVar23) {
          dVar23 = dVar24;
        }
        dVar24 = *(double *)(lVar15 + 0x18 + lVar13);
        dVar6 = *(double *)(lVar15 + 0x18 + lVar14);
        if (dVar6 <= dVar24) {
          dVar24 = dVar6;
        }
        *(double *)(lVar15 + 0x18 + lVar11) = dVar24;
        *(double *)(lVar15 + 0x20 + lVar11) = dVar23;
        *(double *)(lVar15 + 0x28 + lVar11) = dVar22;
        *(ulonglong *)(lVar15 + 0x30 + lVar11) = CONCAT44(uVar21,uVar20);
        *(ulonglong *)(lVar15 + 0x38 + lVar11) = CONCAT44(uVar19,uVar18);
        *(ulonglong *)(lVar15 + 0x40 + lVar11) = CONCAT44(uVar17,uVar16);
        *(undefined1 *)(lVar15 + 0x48 + lVar11) = 1;
        uVar7 = *(uint *)(lVar15 + 0x14 + lVar13);
        uVar12 = *(uint *)(lVar15 + 0x14 + lVar14);
        if (uVar12 < uVar7) {
          uVar12 = uVar7;
        }
        *(uint *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar11) = uVar12 + 1;
        lVar15 = *(longlong *)(param_1 + 0x28);
        iVar10 = *(int *)(lVar15 + 0x10 + lVar11);
      } while (iVar10 != -1);
    }
  }
  return;
}



// FUNCTION 147f65694 FUN_147f65694 body=68 status=ok
// SIG undefined FUN_147f65694(void)

void FUN_147f65694(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f656da FUN_147f656da body=32 status=ok
// SIG undefined FUN_147f656da(void)

undefined8 FUN_147f656da(longlong param_1,undefined8 param_2)

{
  FUN_147f656fa(param_2,param_1 + 0xf8);
  return param_2;
}



// FUNCTION 147f656fa FUN_147f656fa body=155 status=ok
// SIG undefined FUN_147f656fa(void)

undefined8 * FUN_147f656fa(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1468bee18(&local_30,*param_2,0);
  }
  local_20 = local_30;
  local_18 = local_28 + -1;
  if (local_28 == 0) {
    local_18 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f65796 FUN_147f65796 body=38 status=ok
// SIG undefined FUN_147f65796(void)

undefined8 FUN_147f65796(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Destruction.DestructibleData.MissingFractureGeoCollection",1);
  return param_2;
}



// FUNCTION 147f657bc FUN_147f657bc body=52 status=ok
// SIG undefined FUN_147f657bc(void)

undefined8 FUN_147f657bc(undefined8 param_1,undefined8 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Destruction.Actor.DirectlyReferencedDestructibleGeometryCollection";
  if (param_3 != '\0') {
    pwVar1 = L"Destruction.Actor.DirectlyReferencedAlwaysDestructibleGeometryCollection";
  }
  FUN_1446f470e(param_2,pwVar1,1);
  return param_2;
}



// FUNCTION 147f657f0 FUN_147f657f0 body=49 status=ok
// SIG undefined FUN_147f657f0(void)

longlong * FUN_147f657f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a6d95c();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 147f65822 FUN_147f65822 body=32 status=ok
// SIG undefined FUN_147f65822(void)

undefined8 FUN_147f65822(longlong param_1,undefined8 param_2)

{
  FUN_147f65842(param_2,param_1 + 0xd8);
  return param_2;
}



// FUNCTION 147f65842 FUN_147f65842 body=155 status=ok
// SIG undefined FUN_147f65842(void)

undefined8 * FUN_147f65842(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1468bee18(&local_30,*param_2,0);
  }
  local_20 = local_30;
  local_18 = local_28 + -1;
  if (local_28 == 0) {
    local_18 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f658de FUN_147f658de body=38 status=ok
// SIG undefined FUN_147f658de(void)

undefined8 FUN_147f658de(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Destruction.DestructibleData.MissingPreFractureSkelMesh",1);
  return param_2;
}



// FUNCTION 147f65904 FUN_147f65904 body=52 status=ok
// SIG undefined FUN_147f65904(void)

undefined8 FUN_147f65904(undefined8 param_1,undefined8 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Destruction.Actor.DirectlyReferencedDestructibleSkelMesh";
  if (param_3 != '\0') {
    pwVar1 = L"Destruction.Actor.DirectlyReferencedAlwaysDestructibleSkeletalMesh";
  }
  FUN_1446f470e(param_2,pwVar1,1);
  return param_2;
}



// FUNCTION 147f65938 FUN_147f65938 body=32 status=ok
// SIG undefined FUN_147f65938(void)

undefined8 FUN_147f65938(longlong param_1,undefined8 param_2)

{
  FUN_147f65958(param_2,param_1 + 0xe0);
  return param_2;
}



// FUNCTION 147f65958 FUN_147f65958 body=155 status=ok
// SIG undefined FUN_147f65958(void)

undefined8 * FUN_147f65958(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1468bee18(&local_30,*param_2,0);
  }
  local_20 = local_30;
  local_18 = local_28 + -1;
  if (local_28 == 0) {
    local_18 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f659f4 FUN_147f659f4 body=38 status=ok
// SIG undefined FUN_147f659f4(void)

undefined8 FUN_147f659f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Destruction.DestructibleData.MissingPreFractureStaticMesh",1);
  return param_2;
}



// FUNCTION 147f65a1a FUN_147f65a1a body=52 status=ok
// SIG undefined FUN_147f65a1a(void)

undefined8 FUN_147f65a1a(undefined8 param_1,undefined8 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Destruction.Actor.DirectlyReferencedDestructibleStaticMesh";
  if (param_3 != '\0') {
    pwVar1 = L"Destruction.Actor.DirectlyReferencedAlwaysDestructibleStaticMesh";
  }
  FUN_1446f470e(param_2,pwVar1,1);
  return param_2;
}



// FUNCTION 147f65a50 FUN_147f65a50 body=48 status=ok
// SIG undefined FUN_147f65a50(void)

void FUN_147f65a50(longlong *param_1,int param_2)

{
  FUN_140f53a74();
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  FUN_140f531fa(param_1);
  return;
}



// FUNCTION 147f65a80 FUN_147f65a80 body=94 status=ok
// SIG undefined FUN_147f65a80(void)

void FUN_147f65a80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1478b8668();
  if (*(longlong *)(param_1 + 0x390) != 0) {
    lVar2 = FUN_140a6d95c();
    if ((((*(longlong *)(param_1 + 0x390) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_147f676d0();
      return;
    }
  }
  return;
}



// FUNCTION 147f65ade FUN_147f65ade body=193 status=ok
// SIG undefined FUN_147f65ade(void)

longlong FUN_147f65ade(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1459ebcbe();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 147f65ba4 FUN_147f65ba4 body=45 status=ok
// SIG undefined FUN_147f65ba4(void)

longlong FUN_147f65ba4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65bd2 FUN_147f65bd2 body=48 status=ok
// SIG undefined FUN_147f65bd2(void)

longlong FUN_147f65bd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65c02 FUN_147f65c02 body=48 status=ok
// SIG undefined FUN_147f65c02(void)

longlong FUN_147f65c02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65c32 FUN_147f65c32 body=48 status=ok
// SIG undefined FUN_147f65c32(void)

longlong FUN_147f65c32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65c66 FUN_147f65c66 body=45 status=ok
// SIG undefined FUN_147f65c66(void)

longlong FUN_147f65c66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a1207a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65c94 FUN_147f65c94 body=90 status=ok
// SIG undefined FUN_147f65c94(void)

bool FUN_147f65c94(longlong *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2a8))(param_1,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_38[0] != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f65d20 FUN_147f65d20 body=45 status=ok
// SIG undefined FUN_147f65d20(void)

longlong FUN_147f65d20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140aee5f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65d54 FUN_147f65d54 body=48 status=ok
// SIG undefined FUN_147f65d54(void)

longlong FUN_147f65d54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140aee5f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65d8c FUN_147f65d8c body=48 status=ok
// SIG undefined FUN_147f65d8c(void)

longlong FUN_147f65d8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140aee5f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65dc4 FUN_147f65dc4 body=48 status=ok
// SIG undefined FUN_147f65dc4(void)

longlong FUN_147f65dc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140aee5f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f65dfc FUN_147f65dfc body=290 status=ok
// SIG undefined FUN_147f65dfc(void)

longlong * FUN_147f65dfc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f65f20 FUN_147f65f20 body=38 status=ok
// SIG undefined FUN_147f65f20(void)

void FUN_147f65f20(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 147f65f46 FUN_147f65f46 body=38 status=ok
// SIG undefined FUN_147f65f46(void)

void FUN_147f65f46(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 147f65f6c FUN_147f65f6c body=41 status=ok
// SIG undefined FUN_147f65f6c(void)

void FUN_147f65f6c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144760d56(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 147f65fac FUN_147f65fac body=39 status=ok
// SIG undefined FUN_147f65fac(void)

undefined8 FUN_147f65fac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f65ffc FUN_147f65ffc body=59 status=ok
// SIG undefined FUN_147f65ffc(void)

undefined8 FUN_147f65ffc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f66048 FUN_147f66048 body=56 status=ok
// SIG undefined FUN_147f66048(void)

void FUN_147f66048(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((char)param_2[0x10] == '\x01') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_144760d56(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147f661de FUN_147f661de body=39 status=ok
// SIG undefined FUN_147f661de(void)

undefined8 FUN_147f661de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6622e FUN_147f6622e body=59 status=ok
// SIG undefined FUN_147f6622e(void)

undefined8 FUN_147f6622e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f662d0 FUN_147f662d0 body=96 status=ok
// SIG undefined FUN_147f662d0(void)

void FUN_147f662d0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined4 *)((longlong)param_2 + 0x108) = 0;
  *(undefined1 *)((longlong)param_2 + 0x10c) = 3;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  return;
}



// FUNCTION 147f66330 FUN_147f66330 body=96 status=ok
// SIG undefined FUN_147f66330(void)

void FUN_147f66330(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined4 *)((longlong)param_2 + 0x108) = 0;
  *(undefined1 *)((longlong)param_2 + 0x10c) = 3;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  return;
}



// FUNCTION 147f663d0 FUN_147f663d0 body=109 status=ok
// SIG undefined FUN_147f663d0(void)

undefined8 FUN_147f663d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x10d);
      FUN_147f65dfc(param_2 + lVar1 + 0x110,param_3 + lVar1 + 0x110);
      lVar1 = lVar1 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f66466 FUN_147f66466 body=59 status=ok
// SIG undefined FUN_147f66466(void)

undefined8 FUN_147f66466(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f664b2 FUN_147f664b2 body=67 status=ok
// SIG undefined FUN_147f664b2(void)

void FUN_147f664b2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x150) == '\x01') {
    if (*(longlong *)(param_2 + 0x110) != 0) {
      plVar1 = (longlong *)(param_2 + 0x130);
      if (*(longlong **)(param_2 + 0x120) != (longlong *)0x0) {
        plVar1 = *(longlong **)(param_2 + 0x120);
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 147f66546 FUN_147f66546 body=168 status=ok
// SIG undefined FUN_147f66546(void)

longlong * FUN_147f66546(longlong *param_1)

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
  uVar2 = FUN_14595a802();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f665ef FUN_147f665ef body=175 status=ok
// SIG undefined FUN_147f665ef(void)

undefined8 FUN_147f665ef(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b64fbc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f666a4 FUN_147f666a4 body=71 status=ok
// SIG undefined FUN_147f666a4(void)

undefined8 * FUN_147f666a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ac97940;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f666ec FUN_147f666ec body=299 status=ok
// SIG undefined FUN_147f666ec(void)

undefined4 * FUN_147f666ec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f66818(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_147f668fe(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147f66ab0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f66818 FUN_147f66818 body=230 status=ok
// SIG undefined FUN_147f66818(void)

int * FUN_147f66818(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147f668fe FUN_147f668fe body=132 status=ok
// SIG undefined FUN_147f668fe(void)

undefined8 FUN_147f668fe(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
    iVar5 = FUN_147f66984();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_147f66a3e(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_147f66922;
    }
  }
  uVar6 = 0;
LAB_147f66922:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f66984 FUN_147f66984 body=185 status=ok
// SIG undefined FUN_147f66984(void)

int FUN_147f66984(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_140206d5c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147f669ad;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147f669ad:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147f66a3e FUN_147f66a3e body=114 status=ok
// SIG undefined FUN_147f66a3e(void)

void FUN_147f66a3e(longlong *param_1,int param_2)

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



// FUNCTION 147f66ab0 FUN_147f66ab0 body=436 status=ok
// SIG undefined FUN_147f66ab0(void)

void FUN_147f66ab0(longlong *param_1)

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



// FUNCTION 147f66c66 FUN_147f66c66 body=31 status=ok
// SIG undefined FUN_147f66c66(void)

undefined8 FUN_147f66c66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f66c9e FUN_147f66c9e body=93 status=ok
// SIG undefined FUN_147f66c9e(void)

void FUN_147f66c9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac988f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac97ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f66cfc FUN_147f66cfc body=93 status=ok
// SIG undefined FUN_147f66cfc(void)

void FUN_147f66cfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac988f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac97ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f66d5a FUN_147f66d5a body=126 status=ok
// SIG undefined FUN_147f66d5a(void)

void FUN_147f66d5a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac988f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac97ab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f66dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f66de8 FUN_147f66de8 body=297 status=ok
// SIG undefined FUN_147f66de8(void)

void FUN_147f66de8(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar6 = 8;
    if (uVar2 != 0) {
      uVar6 = uVar2 * 2;
    }
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < (int)uVar6) {
      FUN_14480809c(plVar1);
    }
    uVar7 = uVar6 - uVar2;
    if (uVar2 <= uVar6 && uVar7 != 0) {
      do {
        uVar6 = uVar6 - 1;
        iVar4 = *(int *)(param_1 + 0x20);
        uVar5 = iVar4 + 1;
        *(uint *)(param_1 + 0x20) = uVar5;
        if (*(uint *)(param_1 + 0x24) < uVar5) {
          FUN_1447808da(plVar1);
        }
        *(uint *)(*plVar1 + (longlong)iVar4 * 4) = uVar6;
      } while (uVar6 != uVar2);
    }
    iVar4 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar4 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar4) < uVar7) {
      FUN_147f66f12(param_1 + 0x28);
    }
    memset((void *)((longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x28)),0,
           (longlong)(int)uVar7 * 0x50);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar4 + -1) * 4) * 0x50;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar3) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 147f66f12 FUN_147f66f12 body=147 status=ok
// SIG undefined FUN_147f66f12(void)

void FUN_147f66f12(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f66fa6 FUN_147f66fa6 body=31 status=ok
// SIG undefined FUN_147f66fa6(void)

undefined8 FUN_147f66fa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f66fe2 FUN_147f66fe2 body=93 status=ok
// SIG undefined FUN_147f66fe2(void)

void FUN_147f66fe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac97b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f67040 FUN_147f67040 body=126 status=ok
// SIG undefined FUN_147f67040(void)

void FUN_147f67040(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac97b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f670af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f670be FUN_147f670be body=21 status=ok
// SIG undefined FUN_147f670be(void)

undefined8 FUN_147f670be(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f670d4 FUN_147f670d4 body=141 status=ok
// SIG undefined FUN_147f670d4(void)

void FUN_147f670d4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 147f67162 FUN_147f67162 body=336 status=ok
// SIG undefined FUN_147f67162(void)

void FUN_147f67162(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_2 + 200);
        *(uint *)(param_2 + 200) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0xcc) < iVar3 + 1U) {
          FUN_147f672b4(param_2,iVar3);
        }
        lVar5 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar5 = param_2;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f672b4 FUN_147f672b4 body=119 status=ok
// SIG undefined FUN_147f672b4(void)

void FUN_147f672b4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147f670d4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f6732c FUN_147f6732c body=519 status=ok
// SIG undefined FUN_147f6732c(void)

void FUN_147f6732c(longlong *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auStack_1e8 [40];
  undefined1 local_1c0 [48];
  double local_190;
  undefined1 local_188 [4];
  undefined4 local_184;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_b8;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined1 local_7c;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  memset(local_188,0,0x100);
  local_b8 = 0xffffffff;
  local_184 = 0x3f800000;
  local_e4 = 0xffffffff;
  local_7c = 3;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  local_150 = param_2[2];
  local_160 = *param_2;
  uStack_158 = param_2[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar5 != 1.0) || (local_128 = dVar2, local_120 = dVar3, local_130 = dVar1, NAN(dVar5))) &&
     (local_128 = DAT_14c8464e8, local_120 = DAT_14c8464f0, local_130 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    local_128 = dVar2 * dVar5;
    local_120 = dVar3 * dVar5;
    local_130 = dVar1 * dVar5;
  }
  local_e0 = 0xffffffff;
  (**(code **)(param_1[-0x15e] + 0x528))(param_1 + -0x15e,local_1c0,param_1 + -0x116);
  local_88 = (float)local_190;
  local_80 = 0x7f7fffff;
  local_84 = (float)SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
  (**(code **)(*param_1 + 0x18))(param_1,local_188);
  if (local_78 != 0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f67534 FUN_147f67534 body=393 status=ok
// SIG undefined FUN_147f67534(void)

void FUN_147f67534(longlong *param_1,double *param_2)

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
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar9 = *param_2 * (double)param_1[-0x10e];
  dVar10 = param_2[1] * (double)param_1[-0x10d];
  dVar8 = param_2[2] * (double)param_1[-0x10c];
  dVar5 = (double)param_1[-0x116];
  dVar6 = (double)param_1[-0x115];
  dVar7 = (double)param_1[-0x114];
  dVar1 = (double)param_1[-0x113];
  dVar2 = dVar10 * dVar5 - dVar9 * dVar6;
  dVar3 = dVar8 * dVar6 - dVar10 * dVar7;
  dVar4 = dVar9 * dVar7 - dVar5 * dVar8;
  dVar3 = dVar3 + dVar3;
  dVar4 = dVar4 + dVar4;
  dVar2 = dVar2 + dVar2;
  dVar10 = (dVar7 * dVar3 - dVar5 * dVar2) + (double)param_1[-0x113] * dVar4 + dVar10 +
           (double)param_1[-0x111];
  local_78 = dVar2 * dVar1 + dVar8 + (dVar4 * dVar5 - dVar3 * dVar6) + (double)param_1[-0x110];
  local_88._8_4_ = SUB84(dVar10,0);
  local_88._0_8_ = (dVar2 * dVar6 - dVar4 * dVar7) + dVar1 * dVar3 + dVar9 + (double)param_1[-0x112]
  ;
  local_88._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  (**(code **)(*param_1 + 0x20))();
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f676c6 FUN_147f676c6 body=9 status=ok
// SIG undefined FUN_147f676c6(void)

undefined4 FUN_147f676c6(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb04);
}



// FUNCTION 147f676d0 FUN_147f676d0 body=22 status=ok
// SIG undefined FUN_147f676d0(void)

void FUN_147f676d0(longlong param_1)

{
  if (*(float *)(param_1 + 0xb04) < 1e-08) {
    return;
  }
  FUN_140acf690();
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    return;
  }
  FUN_141062a52(param_1,0);
  return;
}



// FUNCTION 147f676e6 FUN_147f676e6 body=121 status=ok
// SIG undefined FUN_147f676e6(void)

void FUN_147f676e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1458bc096();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 8) = param_2;
      FUN_1406cc26a(param_1 + -0xaf0,*(undefined8 *)(param_2 + 0xf8),1,1);
      return;
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 147f6777e FUN_147f6777e body=277 status=ok
// SIG undefined FUN_147f6777e(void)

void FUN_147f6777e(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_39);
  FUN_140665542(local_58,&local_38);
  local_48 = local_28;
  FUN_147f7b6a6(local_58,uVar1 & 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6789a FUN_147f6789a body=690 status=ok
// SIG undefined FUN_147f6789a(void)

void FUN_147f6789a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined4 local_58;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = 0;
  FUN_1446f4b16();
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
  local_51 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_58 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_b8 = local_70;
  if (puVar4 != (undefined1 *)0x0) {
    local_b8 = puVar4;
  }
  puVar5 = &local_58;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = puVar3;
  }
  puVar4 = &local_51;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  local_b0 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_b0 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_40;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  FUN_147f7c298(local_38,&local_a8,puVar4,puVar5);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f67b54 FUN_147f67b54 body=478 status=ok
// SIG undefined FUN_147f67b54(void)

void FUN_147f67b54(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  puVar3 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  uVar2 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar2);
  local_58 = local_38;
  uVar1 = FUN_147f7bf34(local_28,local_30,&local_68,puVar3);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f67d46 FUN_147f67d46 body=534 status=ok
// SIG undefined FUN_147f67d46(void)

void FUN_147f67d46(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [48];
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_30 = 0;
  FUN_1446f4b16();
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
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_78[0] = 0;
  local_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412bd664(local_b0,local_78);
  local_c8 = local_48;
  uStack_c4 = uStack_44;
  uStack_c0 = uStack_40;
  uStack_bc = uStack_3c;
  local_b8 = local_38;
  uVar2 = FUN_147f7c348(local_30,&local_c8,local_b0,uVar1);
  *param_3 = uVar2;
  if ((lStack_50 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_50 + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f67f5e FUN_147f67f5e body=428 status=ok
// SIG undefined FUN_147f67f5e(void)

void FUN_147f67f5e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = uStack_40;
  lVar3 = local_48;
  uVar2 = local_50;
  uVar1 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = 0;
  local_60 = (int)uStack_40;
  if ((int)uStack_40 == 0) {
    local_5c = 0;
  }
  else {
    FUN_140d27400(&local_68,uStack_40 & 0xffffffff,0);
    FUN_144796a68(local_68,lVar3,uVar4 & 0xffffffff);
  }
  FUN_147f7bb9a(&local_68,uVar2,uVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6810c FUN_147f6810c body=321 status=ok
// SIG undefined FUN_147f6810c(void)

void FUN_147f6810c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f7c3f0(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6824e FUN_147f6824e body=345 status=ok
// SIG undefined FUN_147f6824e(void)

void FUN_147f6824e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  uVar1 = FUN_14477b664(uStack_50);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_48;
  FUN_140665542(local_88,&local_38);
  local_78 = local_28;
  FUN_147f7b4b4(local_88,&local_70);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f683b4 FUN_147f683b4 body=255 status=ok
// SIG undefined FUN_147f683b4(void)

void FUN_147f683b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1438a40f6(local_28,local_2c != 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f684ba FUN_147f684ba body=895 status=ok
// SIG undefined FUN_147f684ba(void)

void FUN_147f684ba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined8 *local_1e0;
  undefined1 local_1d0 [48];
  undefined8 local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int local_17c;
  undefined1 local_178 [4];
  undefined8 local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_140 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  local_148 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  local_178[0] = 0;
  local_174 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  lStack_150 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_178);
  }
  local_17c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_17c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_17c);
  }
  iVar3 = local_17c;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_b8;
  puVar6 = local_138;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_d8 = local_58;
  local_d0 = local_50;
  local_cc = local_4c;
  FUN_1412bd664(local_1d0,local_178);
  local_1e8 = iVar3 != 0;
  local_1e0 = local_138;
  FUN_147f7b73c(&local_1a0,local_140,local_148,local_1d0);
  if (&local_1a0 != param_3) {
    *param_3 = local_1a0;
    local_1a0 = 0;
    plVar2 = (longlong *)param_3[1];
    param_3[1] = local_198;
    local_198 = (longlong *)0x0;
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
  *(undefined4 *)(param_3 + 2) = local_190;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_18c;
  *(undefined4 *)(param_3 + 3) = uStack_188;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_184;
  if (local_198 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_198 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_198 + 0x10))();
    }
  }
  if ((lStack_150 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_150 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6883a FUN_147f6883a body=564 status=ok
// SIG undefined FUN_147f6883a(void)

void FUN_147f6883a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar2 = local_7c;
  uVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  uVar3 = FUN_14477b664(uStack_70);
  local_90 = FUN_14477b664(uVar3);
  local_88 = local_68;
  FUN_140665542(local_b0,&local_58);
  local_a0 = local_48;
  FUN_147f7b0bc(local_b0,&local_98,uVar2,uVar1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f68a70 FUN_147f68a70 body=403 status=ok
// SIG undefined FUN_147f68a70(void)

void FUN_147f68a70(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar2 = local_4c;
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar3);
  local_58 = local_38;
  FUN_147f7bac8(&local_68,uVar2,uVar1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f68c04 FUN_147f68c04 body=386 status=ok
// SIG undefined FUN_147f68c04(void)

void FUN_147f68c04(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  uVar2 = FUN_14477b664(uStack_50);
  local_68 = FUN_14477b664(uVar2);
  local_60 = local_48;
  local_90 = local_38;
  local_88 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
    UNLOCK();
  }
  local_80 = (undefined4)local_28;
  uStack_7c = local_28._4_4_;
  uStack_78 = (undefined4)uStack_20;
  uStack_74 = uStack_20._4_4_;
  FUN_147f7b832(&local_90,&local_70);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f68d88 FUN_147f68d88 body=371 status=ok
// SIG undefined FUN_147f68d88(void)

void FUN_147f68d88(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_147f7bc98(local_18,local_20,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f68efc FUN_147f68efc body=201 status=ok
// SIG undefined FUN_147f68efc(void)

void FUN_147f68efc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  uVar1 = FUN_14477b664(uStack_20);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_18;
  FUN_147f7b912(&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f68fc6 FUN_147f68fc6 body=345 status=ok
// SIG undefined FUN_147f68fc6(void)

void FUN_147f68fc6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  uVar1 = FUN_14477b664(uStack_50);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_48;
  FUN_140665542(local_88,&local_38);
  local_78 = local_28;
  FUN_147f7b2c0(local_88,&local_70);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69120 FUN_147f69120 body=437 status=ok
// SIG undefined FUN_147f69120(void)

void FUN_147f69120(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_30;
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
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  lStack_40 = 0;
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
  local_68 = (undefined4)local_50;
  uStack_64 = local_50._4_4_;
  uStack_60 = (undefined4)uStack_48;
  uStack_5c = uStack_48._4_4_;
  local_58 = lStack_40;
  if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  FUN_140665542(local_80,&local_38);
  local_70 = local_28;
  FUN_147f7c484(local_20,local_80,&local_68);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69308 FUN_147f69308 body=45 status=ok
// SIG undefined FUN_147f69308(void)

longlong FUN_147f69308(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bb466a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6933c FUN_147f6933c body=45 status=ok
// SIG undefined FUN_147f6933c(void)

longlong FUN_147f6933c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145bb466a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f693e2 FUN_147f693e2 body=59 status=ok
// SIG undefined FUN_147f693e2(void)

undefined8 FUN_147f693e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69482 FUN_147f69482 body=29 status=ok
// SIG undefined FUN_147f69482(void)

undefined8 FUN_147f69482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f694a0 FUN_147f694a0 body=55 status=ok
// SIG undefined FUN_147f694a0(void)

void FUN_147f694a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24c90 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24c90 = FUN_140002ddd(FUN_146443c49,uVar1,L"GbxAudioZoneEffectProvider");
  }
  return;
}



// FUNCTION 147f694dc FUN_147f694dc body=51 status=ok
// SIG undefined FUN_147f694dc(void)

undefined8 FUN_147f694dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 147f69510 FUN_147f69510 body=74 status=ok
// SIG undefined FUN_147f69510(void)

void FUN_147f69510(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_4 = 0;
  *param_5 = 0x3f800000;
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147f6954f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f695c4 FUN_147f695c4 body=59 status=ok
// SIG undefined FUN_147f695c4(void)

undefined8 FUN_147f695c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69664 FUN_147f69664 body=29 status=ok
// SIG undefined FUN_147f69664(void)

undefined8 FUN_147f69664(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f69682 FUN_147f69682 body=55 status=ok
// SIG undefined FUN_147f69682(void)

void FUN_147f69682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ca8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ca8 = FUN_140002ddd(FUN_146443cdf,uVar1,L"GbxAudioAcousticsDataProvider");
  }
  return;
}



// FUNCTION 147f6971e FUN_147f6971e body=59 status=ok
// SIG undefined FUN_147f6971e(void)

undefined8 FUN_147f6971e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69764 FUN_147f69764 body=51 status=ok
// SIG undefined FUN_147f69764(void)

void FUN_147f69764(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147f69820 FUN_147f69820 body=75 status=ok
// SIG undefined FUN_147f69820(void)

undefined8 FUN_147f69820(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a67f5c();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f69894 FUN_147f69894 body=59 status=ok
// SIG undefined FUN_147f69894(void)

undefined8 FUN_147f69894(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f698da FUN_147f698da body=38 status=ok
// SIG undefined FUN_147f698da(void)

void FUN_147f698da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147f69950 FUN_147f69950 body=42 status=ok
// SIG undefined FUN_147f69950(void)

void FUN_147f69950(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413493a6(param_2);
  *param_2 = &PTR_FUN_14ac9f900;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 147f69994 FUN_147f69994 body=85 status=ok
// SIG undefined FUN_147f69994(void)

undefined1 FUN_147f69994(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d0d20(param_2,param_3);
    FUN_147f69ad4(param_2 + 0xa8,param_3 + 0xa8);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 147f69a12 FUN_147f69a12 body=59 status=ok
// SIG undefined FUN_147f69a12(void)

undefined8 FUN_147f69a12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69a5e FUN_147f69a5e body=40 status=ok
// SIG undefined FUN_147f69a5e(void)

void FUN_147f69a5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14588aab2(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 147f69ad4 FUN_147f69ad4 body=95 status=ok
// SIG undefined FUN_147f69ad4(void)

undefined8 * FUN_147f69ad4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14588aaf6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f69b34(param_1,iVar1);
      FUN_147f69ba7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f69b34 FUN_147f69b34 body=115 status=ok
// SIG undefined FUN_147f69b34(void)

void FUN_147f69b34(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f69ba7 FUN_147f69ba7 body=145 status=ok
// SIG undefined FUN_147f69ba7(void)

void FUN_147f69ba7(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1447c510a(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f69c42 FUN_147f69c42 body=183 status=ok
// SIG undefined FUN_147f69c42(void)

void FUN_147f69c42(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 0x16,0,0x98);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 2;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0xffffffff00000080;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined8 *)((longlong)param_2 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_2 + 0x105) = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *param_2 = &PTR_FUN_14aca4640;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  return;
}



// FUNCTION 147f69dfe FUN_147f69dfe body=59 status=ok
// SIG undefined FUN_147f69dfe(void)

undefined8 FUN_147f69dfe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f69e4a FUN_147f69e4a body=40 status=ok
// SIG undefined FUN_147f69e4a(void)

void FUN_147f69e4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_147f69f1e(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 147f69ec0 FUN_147f69ec0 body=38 status=ok
// SIG undefined FUN_147f69ec0(void)

undefined8 FUN_147f69ec0(undefined8 param_1,int param_2)

{
  FUN_147f69f1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f69ee6 FUN_147f69ee6 body=55 status=ok
// SIG undefined FUN_147f69ee6(void)

void FUN_147f69ee6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d38 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d38 = FUN_140002ddd(FUN_146443f75,uVar1,L"GbxAudioGraphState");
  }
  return;
}



// FUNCTION 147f69f1e FUN_147f69f1e body=141 status=ok
// SIG undefined FUN_147f69f1e(void)

void FUN_147f69f1e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aca4640;
  if (param_1[8] != 0) {
    FUN_140872c8a(param_1);
  }
  FUN_1403d8100(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2a];
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
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7f26(param_1);
  return;
}



// FUNCTION 147f6a04e FUN_147f6a04e body=78 status=ok
// SIG undefined FUN_147f6a04e(void)

undefined1 FUN_147f6a04e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6a0c4 FUN_147f6a0c4 body=59 status=ok
// SIG undefined FUN_147f6a0c4(void)

undefined8 FUN_147f6a0c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6a10a FUN_147f6a10a body=32 status=ok
// SIG undefined FUN_147f6a10a(void)

void FUN_147f6a10a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f6a178 FUN_147f6a178 body=38 status=ok
// SIG undefined FUN_147f6a178(void)

undefined8 FUN_147f6a178(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6a19e FUN_147f6a19e body=55 status=ok
// SIG undefined FUN_147f6a19e(void)

void FUN_147f6a19e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d68 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d68 = FUN_140002ddd(FUN_146444083,uVar1,L"GbxAudioNodeAspectSettings");
  }
  return;
}



// FUNCTION 147f6a25e FUN_147f6a25e body=94 status=ok
// SIG undefined FUN_147f6a25e(void)

undefined8 FUN_147f6a25e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f6a2e4 FUN_147f6a2e4 body=59 status=ok
// SIG undefined FUN_147f6a2e4(void)

undefined8 FUN_147f6a2e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6a32a FUN_147f6a32a body=32 status=ok
// SIG undefined FUN_147f6a32a(void)

void FUN_147f6a32a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6a398 FUN_147f6a398 body=38 status=ok
// SIG undefined FUN_147f6a398(void)

undefined8 FUN_147f6a398(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6a3be FUN_147f6a3be body=55 status=ok
// SIG undefined FUN_147f6a3be(void)

void FUN_147f6a3be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d80 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d80 = FUN_140002ddd(FUN_146444119,uVar1,L"GbxAudioNodeAspectState");
  }
  return;
}



// FUNCTION 147f6a49c FUN_147f6a49c body=78 status=ok
// SIG undefined FUN_147f6a49c(void)

undefined1 FUN_147f6a49c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6a512 FUN_147f6a512 body=59 status=ok
// SIG undefined FUN_147f6a512(void)

undefined8 FUN_147f6a512(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6a558 FUN_147f6a558 body=32 status=ok
// SIG undefined FUN_147f6a558(void)

void FUN_147f6a558(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f6a5c6 FUN_147f6a5c6 body=38 status=ok
// SIG undefined FUN_147f6a5c6(void)

undefined8 FUN_147f6a5c6(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6a5ec FUN_147f6a5ec body=55 status=ok
// SIG undefined FUN_147f6a5ec(void)

void FUN_147f6a5ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d98 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d98 = FUN_140002ddd(FUN_1464441af,uVar1,L"GbxAudioNodeAspectSettings_Data");
  }
  return;
}



// FUNCTION 147f6a6ac FUN_147f6a6ac body=94 status=ok
// SIG undefined FUN_147f6a6ac(void)

undefined8 FUN_147f6a6ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f6a732 FUN_147f6a732 body=59 status=ok
// SIG undefined FUN_147f6a732(void)

undefined8 FUN_147f6a732(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6a778 FUN_147f6a778 body=32 status=ok
// SIG undefined FUN_147f6a778(void)

void FUN_147f6a778(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6a7e6 FUN_147f6a7e6 body=38 status=ok
// SIG undefined FUN_147f6a7e6(void)

undefined8 FUN_147f6a7e6(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6a80c FUN_147f6a80c body=55 status=ok
// SIG undefined FUN_147f6a80c(void)

void FUN_147f6a80c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24db0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24db0 = FUN_140002ddd(FUN_146444247,uVar1,L"GbxAudioNodeAspectState_Data");
  }
  return;
}



// FUNCTION 147f6a8e8 FUN_147f6a8e8 body=78 status=ok
// SIG undefined FUN_147f6a8e8(void)

undefined1 FUN_147f6a8e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6a95e FUN_147f6a95e body=59 status=ok
// SIG undefined FUN_147f6a95e(void)

undefined8 FUN_147f6a95e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6a9a4 FUN_147f6a9a4 body=32 status=ok
// SIG undefined FUN_147f6a9a4(void)

void FUN_147f6a9a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f6aa12 FUN_147f6aa12 body=38 status=ok
// SIG undefined FUN_147f6aa12(void)

undefined8 FUN_147f6aa12(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6aa38 FUN_147f6aa38 body=55 status=ok
// SIG undefined FUN_147f6aa38(void)

void FUN_147f6aa38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24dc8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24dc8 = FUN_140002ddd(FUN_1464442df,uVar1,L"GbxAudioNodeAspectSettings_Action");
  }
  return;
}



// FUNCTION 147f6aaf8 FUN_147f6aaf8 body=94 status=ok
// SIG undefined FUN_147f6aaf8(void)

undefined8 FUN_147f6aaf8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f6ab7e FUN_147f6ab7e body=59 status=ok
// SIG undefined FUN_147f6ab7e(void)

undefined8 FUN_147f6ab7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6abc4 FUN_147f6abc4 body=32 status=ok
// SIG undefined FUN_147f6abc4(void)

void FUN_147f6abc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



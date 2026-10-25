// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418ea4c4 FUN_1418ea4c4 body=101 status=ok
// SIG undefined FUN_1418ea4c4(void)

void FUN_1418ea4c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418ea52a FUN_1418ea52a body=353 status=ok
// SIG undefined FUN_1418ea52a(void)

void FUN_1418ea52a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418ea5af;
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
LAB_1418ea5af:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1418ea68c FUN_1418ea68c body=52 status=ok
// SIG undefined FUN_1418ea68c(void)

void FUN_1418ea68c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b92d8a0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  FUN_140944000(param_1 + 0x10);
  return;
}



// FUNCTION 1418ea6c0 FUN_1418ea6c0 body=29 status=ok
// SIG undefined FUN_1418ea6c0(void)

undefined8 FUN_1418ea6c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ea6de FUN_1418ea6de body=197 status=ok
// SIG undefined FUN_1418ea6de(void)

undefined8 * FUN_1418ea6de(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcd1b8) {
    FUN_144b3d300(&DAT_14cbcd1b8);
    if (DAT_14cbcd1b8 == -1) {
      builtin_wcsncpy(local_48,L"OnMeshPhysicsStateChanged",0x1a);
      FUN_1446f470e(&DAT_14cbcd1b0,local_48,1);
      _Init_thread_footer(&DAT_14cbcd1b8);
    }
  }
  *param_1 = DAT_14cbcd1b0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ea7a4 FUN_1418ea7a4 body=99 status=ok
// SIG undefined FUN_1418ea7a4(void)

void FUN_1418ea7a4(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x988);
  FUN_1406c9b82(param_1);
  local_28 = 0xf2b4b945;
  uStack_24 = 0x5af04ac7;
  uStack_20 = 0xa2c07f6e;
  uStack_1c = 0xfb2c84ec;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ea808 FUN_1418ea808 body=65 status=ok
// SIG undefined FUN_1418ea808(void)

void FUN_1418ea808(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1 + 0x30,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ea84a FUN_1418ea84a body=28 status=ok
// SIG undefined FUN_1418ea84a(void)

ulonglong FUN_1418ea84a(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x2238) + 0x60))(param_1 + -0x2238);
  return uVar1 ^ 1;
}



// FUNCTION 1418ea866 FUN_1418ea866 body=53 status=ok
// SIG undefined FUN_1418ea866(void)

ulonglong FUN_1418ea866(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + -0x2238);
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x2238) + 0x58))(plVar3);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1418ea8ae FUN_1418ea8ae body=66 status=ok
// SIG undefined FUN_1418ea8ae(void)

void FUN_1418ea8ae(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbcd1e0,0);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbcd1e8,0);
  return;
}



// FUNCTION 1418ea8f0 FUN_1418ea8f0 body=292 status=ok
// SIG undefined FUN_1418ea8f0(void)

void FUN_1418ea8f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140af2f8c();
  if ((longlong)*(int *)(lVar3 + 0x38) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x30);
    lVar3 = (longlong)*(int *)(lVar3 + 0x38) * 0x18;
    do {
      lVar6 = plVar7[1];
      if (lVar6 == 0) {
        uVar4 = FUN_145d863b2();
        lVar6 = FUN_14477b664(uVar4);
        plVar7[1] = lVar6;
      }
      lVar5 = plVar7[2];
      if (lVar5 == 0) {
        if ((lVar6 != 0) && (*plVar7 != 0)) {
          plVar1 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar7[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar4,plVar7);
            plVar7[2] = lVar5;
            if (lVar5 != 0) goto LAB_1418ea947;
          }
        }
      }
      else {
LAB_1418ea947:
        local_3c = 0;
        cVar2 = FUN_140af2cf8(lVar5,param_1,&local_3c);
        if (cVar2 != '\0') {
          FUN_140af2c5a(param_2,*(undefined1 *)(lVar5 + 0x18),local_3c);
        }
      }
      plVar7 = plVar7 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418eaa16 FUN_1418eaa16 body=208 status=ok
// SIG undefined FUN_1418eaa16(void)

double * FUN_1418eaa16(undefined8 param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = FUN_1404df6a8();
  puVar2 = &DAT_14c967818;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x50);
  }
  dVar4 = (double)(int)*puVar2;
  dVar3 = (double)(int)((ulonglong)*puVar2 >> 0x20);
  dVar3 = (double)(~-(ulonglong)(1e-08 < ABS(dVar3)) &
                   -(ulonglong)(dVar3 <= param_3[1]) & 0x3ff0000000000000 |
                  (ulonglong)(param_3[1] / dVar3) & -(ulonglong)(1e-08 < ABS(dVar3)));
  dVar4 = (double)(~-(ulonglong)(1e-08 < ABS(dVar4)) &
                   -(ulonglong)(dVar4 <= *param_3) & 0x3ff0000000000000 |
                  (ulonglong)(*param_3 / dVar4) & -(ulonglong)(1e-08 < ABS(dVar4)));
  *param_2 = dVar4 + dVar4 + -1.0;
  param_2[1] = 1.0 - (dVar3 + dVar3);
  return param_2;
}



// FUNCTION 1418eaae6 FUN_1418eaae6 body=26 status=ok
// SIG undefined FUN_1418eaae6(void)

void FUN_1418eaae6(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_1411e3072(param_1);
  return;
}



// FUNCTION 1418eab0c FUN_1418eab0c body=62 status=ok
// SIG undefined FUN_1418eab0c(void)

void FUN_1418eab0c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x680);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1418eab4a FUN_1418eab4a body=278 status=ok
// SIG undefined FUN_1418eab4a(void)

void FUN_1418eab4a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0xa8), plVar3 != (longlong *)0x0)) {
    uVar2 = FUN_140bc1dde();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140bc1dde();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 != '\0')) {
        switch(*(undefined1 *)(param_1 + 0x38)) {
        case 0:
          plVar3 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x0001418eabe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        case 1:
          plVar3 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x0001418eac02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x18))(plVar3);
          return;
        case 2:
          plVar3 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x0001418eac1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x20))(plVar3);
          return;
        case 3:
          plVar3 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x0001418eac3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x28))(plVar3);
          return;
        case 4:
          uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
          FUN_143dd5282(uVar2,3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1418eac60 FUN_1418eac60 body=156 status=ok
// SIG undefined FUN_1418eac60(void)

undefined8 * FUN_1418eac60(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418eacfc FUN_1418eacfc body=287 status=ok
// SIG undefined FUN_1418eacfc(void)

longlong FUN_1418eacfc(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_144725486(param_1 + 0x3c8);
  FUN_144725486(param_1 + 800);
  FUN_144725486(param_1 + 0x298);
  FUN_144725486(param_1 + 0x2a8);
  FUN_144725486(param_1 + 0x2c0);
  FUN_144725486(param_1 + 0x360);
  *(undefined ***)(param_1 + 0x3c8) = &PTR_FUN_14a1ca480;
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x5d8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x5d0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1 + 0x3c8);
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_1400020a8();
  }
  FUN_140296b76(param_1 + 0x360);
  FUN_140296ab8(param_1 + 800);
  FUN_140296d44(param_1 + 0x298);
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418eae1c FUN_1418eae1c body=152 status=ok
// SIG undefined FUN_1418eae1c(void)

ulonglong * FUN_1418eae1c(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = FUN_14480c900(0,param_3);
  bVar2 = FUN_144914152(param_1,param_3);
  uVar1 = *(ulonglong *)(param_1 + 0x3b0);
  *param_2 = uVar1;
  if (((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) {
    if ((uVar1 & 0x200000000) != 0) {
LAB_1418eaead:
      uVar4 = 0x10;
      goto LAB_1418eae71;
    }
  }
  else if ((uVar1 & 0x200000000) != 0 && (*(byte *)(param_1 + 0x75) & 200) != 0) goto LAB_1418eaead;
  uVar4 = 0;
LAB_1418eae71:
  *(uint *)(param_2 + 2) = (uint)bVar2 * 8 + (uVar3 & 0xff) * 4 | uVar4 | 0x82;
  return param_2;
}



// FUNCTION 1418eaeb4 FUN_1418eaeb4 body=101 status=ok
// SIG undefined FUN_1418eaeb4(void)

void FUN_1418eaeb4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418eaf1a FUN_1418eaf1a body=570 status=ok
// SIG undefined FUN_1418eaf1a(void)

void FUN_1418eaf1a(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x180;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x174 + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x170 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1418eb10f;
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
LAB_1418eb10f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418eb156 FUN_1418eb156 body=186 status=ok
// SIG undefined FUN_1418eb156(void)

void FUN_1418eb156(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406f63d6();
  if (lVar1 != 0) {
    lVar2 = FUN_1406f612e(lVar1);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 0x690,param_1);
      FUN_140457ffc(lVar2 + 0x30,param_1);
    }
    FUN_140457ffc(lVar1 + 0x800,param_1);
    if (*(longlong *)(lVar1 + 0x178) != 0) {
      lVar2 = FUN_14041aabe();
      if ((((*(longlong *)(lVar1 + 0x178) != 0) && (lVar2 != 0)) &&
          (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        FUN_140457ffc(&DAT_14cb7df38,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418eb210 FUN_1418eb210 body=289 status=ok
// SIG undefined FUN_1418eb210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418eb210(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b97d0c0;
  plVar1 = plVar3 + 2;
  plVar3[9] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 2;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b6aee40;
  if (plVar3 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar4 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_1418eb310:
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *plVar5 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_1418eb29a;
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar3[3] = (longlong)plVar1;
    if ((longlong *)plVar3[4] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar5 = plVar3 + 4;
        plVar4 = (longlong *)plVar3[4];
        goto LAB_1418eb310;
      }
      plVar3[4] = (longlong)plVar3;
    }
LAB_1418eb29a:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
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
  }
  return param_2;
}



// FUNCTION 1418eb332 FUN_1418eb332 body=110 status=ok
// SIG undefined FUN_1418eb332(void)

void FUN_1418eb332(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = param_1;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0x100000000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = param_2;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = puVar1;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *puVar1 = &PTR_FUN_14b97b7b0;
  return;
}



// FUNCTION 1418eb3a0 FUN_1418eb3a0 body=609 status=ok
// SIG undefined FUN_1418eb3a0(void)

void FUN_1418eb3a0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  size_t sVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_58 [40];
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) goto LAB_1418eb3cb;
  _Str = *(char **)(pbVar1 + 8);
  if (_Str == (char *)0x0) {
LAB_1418eb508:
    uVar3 = 0;
    uVar8 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    iVar5 = (int)sVar2;
    if (iVar5 == 0) goto LAB_1418eb508;
    lVar6 = (longlong)iVar5;
    pcVar11 = _Str + lVar6 + -1;
    uVar4 = 0;
    if (pcVar11 < _Str) {
      lVar10 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar11 - 0x30U)) break;
        uVar4 = uVar4 + 1;
        pcVar11 = pcVar11 + -1;
      } while (_Str <= pcVar11);
      lVar10 = 0;
      if ((((uVar4 != 0) && ((int)uVar4 < iVar5)) && (lVar10 = 0, uVar4 < 0xb)) &&
         (lVar12 = -(ulonglong)uVar4, _Str[lVar12 + lVar6 + -1] == '_')) {
        if ((uVar4 == 1) || (_Str[lVar12 + lVar6] != '0')) {
          lVar9 = 0;
          do {
            lVar10 = (longlong)_Str[lVar12 + lVar6] + lVar9 * 10;
            lVar9 = lVar10 + -0x30;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
          if (lVar9 < 0x7fffffff) {
            iVar5 = ~uVar4 + iVar5;
            lVar10 = lVar10 + -0x2f;
            goto LAB_1418eb444;
          }
        }
        lVar10 = 0;
      }
LAB_1418eb444:
      if (iVar5 == 0) goto LAB_1418eb508;
    }
    local_24 = 0;
    local_30 = _Str;
    local_28 = iVar5;
    uVar4 = FUN_14001a6c0(&local_30,1);
    uVar8 = lVar10 << 0x20;
    uVar3 = (ulonglong)uVar4;
  }
  uVar3 = uVar3 | uVar8;
  if (uVar3 == DAT_14cbcdd98) {
    puVar7 = &DAT_14cbcdd98;
  }
  else if (uVar3 == DAT_14cbcdda8) {
    puVar7 = &DAT_14cbcdda8;
  }
  else if (uVar3 == DAT_14cbcd518) {
    puVar7 = (undefined8 *)&DAT_14cbcd568;
  }
  else if (uVar3 == DAT_14cbcd520) {
    puVar7 = &DAT_14cbcddb0;
  }
  else if (uVar3 == DAT_14cbcd528) {
    puVar7 = &DAT_14cbcdd68;
  }
  else if (uVar3 == DAT_14cbcd530) {
    puVar7 = (undefined8 *)&DAT_14cbcdd70;
  }
  else if (uVar3 == DAT_14cbcd538) {
    puVar7 = (undefined8 *)&DAT_14cbcdd78;
  }
  else if (uVar3 == DAT_14cbcd540) {
    puVar7 = &DAT_14cbcdd80;
  }
  else if (uVar3 == DAT_14cbcd548) {
    puVar7 = (undefined8 *)&DAT_14cbcd570;
  }
  else if (uVar3 == DAT_14cbcd550) {
    puVar7 = &DAT_14cbcddd8;
  }
  else if (uVar3 == DAT_14cbcd558) {
    puVar7 = (undefined8 *)&DAT_14cbcdd88;
  }
  else {
    if (uVar3 != DAT_14cbcd560) goto LAB_1418eb3cb;
    puVar7 = (undefined8 *)&DAT_14cbcdd90;
  }
  FUN_140af8630(param_1 + 0x4f0,puVar7);
LAB_1418eb3cb:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418eb602 FUN_1418eb602 body=535 status=ok
// SIG undefined FUN_1418eb602(void)

ulonglong FUN_1418eb602(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined2 *local_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1406d51c0();
  local_60 = &DAT_14a171d50;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  FUN_1401004a0(&local_60);
  if (*(longlong *)(lVar3 + 0x98) == local_58) {
    uVar1 = *(uint *)(lVar3 + 0xa8);
    uVar6 = (uint)local_48;
    if ((int)uVar1 < (int)(uint)local_48) {
      uVar6 = uVar1;
    }
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        if ((*(ulonglong *)(lStack_50 + uVar7 * 8) &
            ~*(ulonglong *)(*(longlong *)(lVar3 + 0xa0) + uVar7 * 8)) != 0) goto LAB_1418eb6d6;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    uVar7 = CONCAT71((int7)((ulonglong)&local_60 >> 8),1);
    if ((int)uVar1 < (int)(uint)local_48) {
      lVar5 = 0;
      do {
        if (*(longlong *)((longlong)(int)uVar1 * 8 + lStack_50 + lVar5 * 8) != 0)
        goto LAB_1418eb6d6;
        lVar5 = lVar5 + 1;
      } while ((uint)local_48 - uVar1 != (int)lVar5);
    }
  }
  else {
LAB_1418eb6d6:
    local_80 = &DAT_14a171d50;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    FUN_1401004a0(&local_80,param_1 + 0x4f0);
    if (*(longlong *)(lVar3 + 0xb8) == local_78) {
      uVar1 = *(uint *)(lVar3 + 200);
      uVar6 = (uint)local_68;
      if ((int)uVar1 < (int)(uint)local_68) {
        uVar6 = uVar1;
      }
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if ((*(ulonglong *)(lStack_70 + uVar7 * 8) &
              ~*(ulonglong *)(*(longlong *)(lVar3 + 0xc0) + uVar7 * 8)) != 0) goto LAB_1418eb772;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      uVar7 = CONCAT71((int7)((ulonglong)&local_80 >> 8),1);
      if ((int)uVar1 < (int)(uint)local_68) {
        lVar3 = 0;
        do {
          bVar8 = *(longlong *)((longlong)(int)uVar1 * 8 + lStack_70 + lVar3 * 8) == 0;
          uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar8);
          if (!bVar8) break;
          iVar4 = (int)lVar3;
          lVar3 = lVar3 + 1;
        } while (~uVar1 + (uint)local_68 != iVar4);
      }
    }
    else {
LAB_1418eb772:
      uVar7 = 0;
    }
    local_80 = &DAT_14a171d50;
    uVar2 = local_68 >> 0x20;
    local_68 = local_68 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      FUN_140115c12(&lStack_70,0);
    }
    local_78 = 0;
    if (lStack_70 != 0) {
      FUN_1400020a8();
    }
  }
  local_60 = &DAT_14a171d50;
  uVar2 = local_48 >> 0x20;
  local_48 = local_48 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_140115c12(&lStack_50,0);
  }
  local_58 = 0;
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1418eb81a FUN_1418eb81a body=609 status=ok
// SIG undefined FUN_1418eb81a(void)

bool FUN_1418eb81a(char *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  undefined1 local_60 [16];
  undefined1 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == '\x01') {
    FUN_1447a97f4(&local_68,param_1 + 0x10);
    if (0 < local_64) {
      lVar7 = 0;
      uVar3 = 0;
      iVar1 = local_64;
      iVar2 = DAT_14c948000;
      do {
        bVar8 = local_68 != 0;
        bVar9 = local_68 != iVar2;
        piVar4 = &DAT_14c948620;
        piVar5 = (int *)&DAT_14c948618;
        if (bVar9 && bVar8) {
          puVar6 = local_60;
          if (0 < local_44) {
            puVar6 = local_50;
          }
          if (1 < iVar1) {
            puVar6 = local_50;
          }
          piVar4 = (int *)(puVar6 + lVar7 + 8);
          piVar5 = (int *)(puVar6 + lVar7);
        }
        if ((*piVar5 == DAT_14cb7beb0) && (*piVar4 == DAT_14cb7beb8)) {
LAB_1418eba0b:
          FUN_1402b5374(&local_68,uVar3 & 0xffffffff,0);
          iVar1 = local_64;
          iVar2 = DAT_14c948000;
        }
        else {
          piVar4 = &DAT_14c948620;
          piVar5 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar6 = local_60;
            if (0 < local_44) {
              puVar6 = local_50;
            }
            if (1 < iVar1) {
              puVar6 = local_50;
            }
            piVar4 = (int *)(puVar6 + lVar7 + 8);
            piVar5 = (int *)(puVar6 + lVar7);
          }
          if ((*piVar5 == DAT_14cb7bec8) && (*piVar4 == DAT_14cb7bed0)) goto LAB_1418eba0b;
          piVar4 = &DAT_14c948620;
          piVar5 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar6 = local_60;
            if (0 < local_44) {
              puVar6 = local_50;
            }
            if (1 < iVar1) {
              puVar6 = local_50;
            }
            piVar4 = (int *)(puVar6 + lVar7 + 8);
            piVar5 = (int *)(puVar6 + lVar7);
          }
          if ((*piVar5 == DAT_14cb7bee0) && (*piVar4 == DAT_14cb7bee8)) goto LAB_1418eba0b;
          piVar4 = &DAT_14c948620;
          piVar5 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar6 = local_60;
            if (0 < local_44) {
              puVar6 = local_50;
            }
            if (1 < iVar1) {
              puVar6 = local_50;
            }
            piVar4 = (int *)(puVar6 + lVar7 + 8);
            piVar5 = (int *)(puVar6 + lVar7);
          }
          if ((*piVar5 == DAT_14cb7bef8) && (*piVar4 == DAT_14cb7bf00)) goto LAB_1418eba0b;
          piVar4 = &DAT_14c948620;
          piVar5 = (int *)&DAT_14c948618;
          if (bVar9 && bVar8) {
            puVar6 = local_60;
            if (0 < local_44) {
              puVar6 = local_50;
            }
            if (1 < iVar1) {
              puVar6 = local_50;
            }
            piVar4 = (int *)(puVar6 + lVar7 + 8);
            piVar5 = (int *)(puVar6 + lVar7);
          }
          if ((*piVar5 == DAT_14cb7bf10) && (*piVar4 == DAT_14cb7bf18)) goto LAB_1418eba0b;
        }
        uVar3 = uVar3 + 1;
        lVar7 = lVar7 + 0xc;
      } while ((longlong)uVar3 < (longlong)iVar1);
    }
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_68 = *(int *)(param_1 + 0x10);
  }
  iVar1 = FUN_140f8dafc(&DAT_14cbcd9f0,local_68,param_1);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1 != -1;
}



// FUNCTION 1418eba7c FUN_1418eba7c body=614 status=ok
// SIG undefined FUN_1418eba7c(void)

undefined8 * FUN_1418eba7c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  lVar8 = *(longlong *)(param_2 + 0x4f0);
  iVar2 = *(int *)(param_2 + 0x4f8);
  local_58 = lVar8;
  local_50 = iVar2;
  lVar7 = FUN_1406d51c0();
  local_48 = 0;
  uStack_40 = 0;
  FUN_140ddec7c(&local_58);
  if ((longlong)(int)uStack_40 == 0) {
    uVar12 = 0;
  }
  else {
    lVar10 = 0;
    uVar12 = 0;
    do {
      uVar3 = *(undefined8 *)(local_48 + lVar10);
      uVar11 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar13 = (uint)uVar3 & 0xffff;
      uVar11 = ((uint)uVar3 << 0x10 | uVar13) + (int)((ulonglong)uVar3 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar13 >> 4);
      uVar12 = uVar11 >> 0xd ^ uVar12 - uVar11;
      uVar13 = uVar12 << 8 ^ (-0x61c88647 - uVar11) - uVar12;
      uVar14 = uVar13 >> 0xd ^ (uVar11 - uVar12) - uVar13;
      uVar12 = uVar14 >> 0xc ^ (uVar12 - uVar13) - uVar14;
      uVar11 = uVar12 << 0x10 ^ (uVar13 - uVar14) - uVar12;
      uVar13 = uVar11 >> 5 ^ (uVar14 - uVar12) - uVar11;
      uVar14 = uVar13 >> 3 ^ (uVar12 - uVar11) - uVar13;
      uVar12 = uVar14 << 10 ^ (uVar11 - uVar13) - uVar14;
      uVar12 = uVar12 >> 0xf ^ uVar13 - (uVar14 + uVar12);
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)uStack_40 * 8 != lVar10);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(lVar7 + 0x28) != *(int *)(lVar7 + 0x54)) {
    lVar10 = lVar7 + 0x58;
    if (*(longlong *)(lVar7 + 0x60) != 0) {
      lVar10 = *(longlong *)(lVar7 + 0x60);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar7 + 0x68) - 1U & uVar12) * 4);
    if (iVar9 != -1) {
      lVar7 = *(longlong *)(lVar7 + 0x20);
      do {
        lVar10 = (longlong)iVar9 * 0x40;
        if ((lVar8 == *(longlong *)(lVar7 + lVar10)) &&
           (lVar1 = lVar7 + lVar10, iVar2 == *(int *)(lVar1 + 8))) {
          if (lVar1 != 0) {
            lVar8 = FUN_14090ae24(lVar1 + 0x10);
            if (lVar8 != 0) {
              *param_1 = *(undefined8 *)(lVar1 + 0x10);
              uVar4 = *(undefined4 *)(lVar1 + 0x1c);
              uVar5 = *(undefined4 *)(lVar1 + 0x20);
              uVar6 = *(undefined4 *)(lVar1 + 0x24);
              *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0x18);
              *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
              *(undefined4 *)(param_1 + 2) = uVar5;
              *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
              param_1[3] = 0;
              iVar2 = *(int *)(lVar1 + 0x30);
              _Src = *(void **)(lVar1 + 0x28);
              *(int *)(param_1 + 4) = iVar2;
              if ((longlong)iVar2 == 0) {
                *(undefined4 *)((longlong)param_1 + 0x24) = 0;
              }
              else {
                FUN_1446dd670(param_1 + 3,iVar2,0);
                memcpy((void *)param_1[3],_Src,(longlong)iVar2 * 2);
              }
              goto LAB_1418ebc29;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar7 + 0x38 + lVar10);
      } while (iVar9 != -1);
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
LAB_1418ebc29:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ebce8 FUN_1418ebce8 body=414 status=ok
// SIG undefined FUN_1418ebce8(void)

void FUN_1418ebce8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88 [40];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b97df20;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b911ad0;
  *(undefined4 *)(plVar6 + 4) = 1;
  FUN_140823334(plVar6 + 3,0);
  puVar4 = (undefined8 *)plVar6[3];
  *puVar4 = DAT_14cbcdb28;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  local_98[0] = 1;
  local_8c = 1;
  local_94 = DAT_14cb7c588;
  local_a8 = 2;
  FUN_1408234aa();
  FUN_140821fec(puVar4,local_88,local_98,0);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_2 + 0x50);
  *(uint *)(param_2 + 0x50) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x54) < iVar3 + 1U) {
    FUN_140822376((longlong *)(param_2 + 0x48),iVar3);
  }
  lVar5 = *(longlong *)(param_2 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar6;
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
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ebe88 FUN_1418ebe88 body=543 status=ok
// SIG undefined FUN_1418ebe88(void)

void FUN_1418ebe88(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0 [4];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [12];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  longlong local_80;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x90) == 1) {
    local_b8 = *(undefined4 *)(*(undefined8 **)(param_1 + 0x88) + 1);
    local_c0 = **(undefined8 **)(param_1 + 0x88);
    local_d8 = 2;
    FUN_1408234aa(local_b8,local_70,param_2,&DAT_14cb86eb8);
    lVar3 = FUN_140823ef2(param_1,param_2,&local_c0);
    iVar2 = *(int *)(lVar3 + 0x60);
    *(uint *)(lVar3 + 0x60) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 100) < iVar2 + 1U) {
      FUN_140823334((longlong *)(lVar3 + 0x58),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar2 * 0x28);
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar4 = &DAT_14cbcdd30;
    if (*(char *)(param_1 + 0x78) == '\x01') {
      puVar4 = &DAT_14cbcdd20;
    }
    *puVar1 = *puVar4;
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_9c = 1;
    uStack_a4 = (undefined4)DAT_14cb7c588;
    uStack_a0 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    FUN_140821fec(puVar1,local_70,&local_a8,0);
    FUN_14082207e(&local_a8,local_70,0);
    FUN_140822770(param_2 + 0x2c0,&local_a8,1);
    FUN_1447cd778(CONCAT44(uStack_a4,local_a8),uStack_a0);
    if (CONCAT44(uStack_a4,local_a8) != 0) {
      FUN_1400020a8();
    }
    lVar3 = FUN_1406b2efc(param_2 + 0x2c0);
    local_d0[0] = 1;
    local_c4 = 1;
    local_cc = DAT_14cb7c588;
    local_a8 = (undefined4)DAT_14cbcd1e0;
    uStack_a4 = (undefined4)((ulonglong)DAT_14cbcd1e0 >> 0x20);
    FUN_1401533ba(local_b4,&local_a8,1);
    FUN_140fe4afa(param_1,&local_a8,&local_c0,local_b4);
    local_d8 = 0;
    FUN_140641812(lVar3 + 0x140,&local_a8,local_d0,0);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_141193194(param_1,param_2,*(undefined8 *)(param_1 + 0x88));
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ec0a8 FUN_1418ec0a8 body=1690 status=ok
// SIG undefined FUN_1418ec0a8(void)

void FUN_1418ec0a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14082167c();
  if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar8 = *(undefined4 *)(param_1 + 0xac);
    local_c8 = *(undefined4 *)(param_1 + 0xb0);
    local_c4 = *(undefined4 *)(param_1 + 0xb4);
  }
  else {
    local_c4 = 0;
    local_c8 = 0;
    uVar8 = 0;
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      uVar8 = *(undefined4 *)(param_1 + 0xb8);
      local_c8 = *(undefined4 *)(param_1 + 0xbc);
      local_c4 = *(undefined4 *)(param_1 + 0xc0);
    }
  }
  local_90 = 0;
  local_98 = 0;
  local_a4 = uVar8;
  uStack_a0 = local_c8;
  local_9c = local_c4;
  lVar5 = FUN_141193194(param_1,param_2);
  plVar6 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b97df60;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *(undefined4 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b945d20;
  *(undefined1 *)(plVar6 + 3) = 0xb;
  FUN_140c25b54(plVar6 + 3);
  local_a8 = local_9c;
  local_b0 = CONCAT44(uStack_a0,local_a4);
  FUN_144928d62(plVar6 + 5,0);
  *(undefined1 *)(plVar6 + 10) = *(undefined1 *)(param_1 + 0xc4);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x28) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x2c) < iVar4 + 1U) {
    FUN_140823c34((longlong *)(lVar5 + 0x20),iVar4);
  }
  lVar5 = *(longlong *)(lVar5 + 0x20);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar7 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b97df80;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[2] = (longlong)&PTR_FUN_14b7bd2e0;
  plVar7[8] = 0;
  *(undefined1 *)(plVar7 + 5) = *(undefined1 *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x80) != 0 || iVar4 != 0) {
    plVar7[6] = *(longlong *)(param_1 + 0x80);
    *(int *)(plVar7 + 7) = iVar4;
  }
  *(undefined4 *)(plVar7 + 10) = *(undefined4 *)(param_1 + 0xa0);
  plVar7[9] = *(longlong *)(param_1 + 0x98);
  *(undefined4 *)(plVar7 + 0xb) = uVar8;
  *(undefined4 *)((longlong)plVar7 + 0x5c) = local_c8;
  *(undefined4 *)(plVar7 + 0xc) = local_c4;
  lVar5 = FUN_140823ef2(param_1,param_2,&local_a4);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar4 + 1U;
  uVar8 = extraout_XMM0_Da;
  if (*(uint *)(lVar5 + 0x54) < iVar4 + 1U) {
    uVar8 = FUN_140822376((longlong *)(lVar5 + 0x48),iVar4);
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar7 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar8 = (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_d8 = 2;
  FUN_1408234aa(uVar8,&local_98,param_2,&DAT_14cb86eb8);
  lVar5 = param_2 + 0x2c0;
  FUN_14082207e(&local_c0,&local_98,0);
  FUN_140822770(lVar5,&local_c0,1);
  FUN_1447cd778(CONCAT44(uStack_bc,local_c0),local_b8);
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  plVar1 = plVar7 + 3;
  iVar4 = (int)plVar7[4];
  *(uint *)(plVar7 + 4) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar7 + 0x24) < iVar4 + 1U) {
    FUN_140823334(plVar1,iVar4);
  }
  puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x28);
  *puVar3 = DAT_14cbc3ed0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  local_b4 = 1;
  uStack_bc = (undefined4)DAT_14cb7c588;
  local_b8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  uVar8 = FUN_140821fec(puVar3,&local_98,&local_c0,0);
  if (local_70 != 0) {
    uVar8 = FUN_1400020a8();
  }
  local_d8 = 2;
  FUN_1408234aa(uVar8,&local_98,param_2,&DAT_14cb86ed0);
  FUN_14082207e(&local_c0,&local_98,0);
  FUN_140822770(lVar5,&local_c0,2);
  FUN_1447cd778(CONCAT44(uStack_bc,local_c0),local_b8);
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  iVar4 = (int)plVar7[4];
  *(uint *)(plVar7 + 4) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar7 + 0x24) < iVar4 + 1U) {
    FUN_140823334(plVar1,iVar4);
  }
  puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x28);
  *puVar3 = DAT_14cbc3ed8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  local_b4 = 1;
  uStack_bc = (undefined4)DAT_14cb7c588;
  local_b8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  uVar8 = FUN_140821fec(puVar3,&local_98,&local_c0,0);
  if (local_70 != 0) {
    uVar8 = FUN_1400020a8();
  }
  local_d8 = 2;
  FUN_1408234aa(uVar8,&local_98,param_2,&DAT_14cb86ee8);
  FUN_14082207e(&local_c0,&local_98,0);
  FUN_140822770(lVar5,&local_c0,3);
  FUN_1447cd778(CONCAT44(uStack_bc,local_c0),local_b8);
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  iVar4 = (int)plVar7[4];
  *(uint *)(plVar7 + 4) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar7 + 0x24) < iVar4 + 1U) {
    FUN_140823334(plVar1,iVar4);
  }
  puVar3 = (undefined8 *)(plVar7[3] + (longlong)iVar4 * 0x28);
  *puVar3 = DAT_14cbc3ee0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  local_b4 = 1;
  uStack_bc = (undefined4)DAT_14cb7c588;
  local_b8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar3,&local_98,&local_c0,0);
  iVar4 = (int)plVar7[4];
  *(uint *)(plVar7 + 4) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar7 + 0x24) < iVar4 + 1U) {
    FUN_140823334(plVar1,iVar4);
  }
  puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x28);
  *puVar3 = DAT_14cbc3ee8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  local_b4 = 1;
  uStack_bc = (undefined4)DAT_14cb7c588;
  local_b8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar3,&local_98,&local_c0,0);
  if (local_70 != 0) {
    FUN_1400020a8();
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ec744 FUN_1418ec744 body=404 status=ok
// SIG undefined FUN_1418ec744(void)

void FUN_1418ec744(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_3;
  local_48 = (undefined4)param_3[1];
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_68 = param_5;
  FUN_140d22372(param_1,&local_60);
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b97e100;
  plVar6 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b6a1020;
  iVar3 = *(int *)(param_5 + 0x2f8);
  *(uint *)(param_5 + 0x2f8) = iVar3 + 1U;
  if (*(uint *)(param_5 + 0x2fc) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_5 + 0x2f0),iVar3);
  }
  lVar4 = *(longlong *)(param_5 + 0x2f0);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((undefined8 *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(param_1 + 0x10);
  plVar6[1] = *(longlong *)(param_1 + 8);
  plVar6[3] = *param_3;
  *(int *)(plVar6 + 4) = (int)param_3[1];
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ec8da FUN_1418ec8da body=385 status=ok
// SIG undefined FUN_1418ec8da(void)

void FUN_1418ec8da(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_3;
  local_48 = (undefined4)param_3[1];
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_68 = param_5;
  FUN_140d22372(param_1,&local_60);
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b97e120;
  plVar6 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b6a1050;
  iVar3 = *(int *)(param_5 + 0x2f8);
  *(uint *)(param_5 + 0x2f8) = iVar3 + 1U;
  if (*(uint *)(param_5 + 0x2fc) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_5 + 0x2f0),iVar3);
  }
  lVar4 = *(longlong *)(param_5 + 0x2f0);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((undefined8 *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(param_1 + 0x10);
  plVar6[1] = *(longlong *)(param_1 + 8);
  plVar6[3] = *param_3;
  *(int *)(plVar6 + 4) = (int)param_3[1];
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418eca5c FUN_1418eca5c body=404 status=ok
// SIG undefined FUN_1418eca5c(void)

void FUN_1418eca5c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_3;
  local_48 = (undefined4)param_3[1];
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_68 = param_5;
  FUN_140d22372(param_1,&local_60);
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b97e140;
  plVar6 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b6a1080;
  iVar3 = *(int *)(param_5 + 0x2f8);
  *(uint *)(param_5 + 0x2f8) = iVar3 + 1U;
  if (*(uint *)(param_5 + 0x2fc) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_5 + 0x2f0),iVar3);
  }
  lVar4 = *(longlong *)(param_5 + 0x2f0);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((undefined8 *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(param_1 + 0x10);
  plVar6[1] = *(longlong *)(param_1 + 8);
  plVar6[3] = *param_3;
  *(int *)(plVar6 + 4) = (int)param_3[1];
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ecbf1 thunk_FUN_1400020a8 body=5 status=ok
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



// FUNCTION 1418ecbf6 FUN_1418ecbf6 body=143 status=ok
// SIG undefined FUN_1418ecbf6(void)

undefined8 * FUN_1418ecbf6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1418ecc86 FUN_1418ecc86 body=73 status=ok
// SIG undefined FUN_1418ecc86(void)

undefined8 * FUN_1418ecc86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418eccd0 FUN_1418eccd0 body=73 status=ok
// SIG undefined FUN_1418eccd0(void)

undefined8 * FUN_1418eccd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecd1a FUN_1418ecd1a body=73 status=ok
// SIG undefined FUN_1418ecd1a(void)

undefined8 * FUN_1418ecd1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecd64 FUN_1418ecd64 body=73 status=ok
// SIG undefined FUN_1418ecd64(void)

undefined8 * FUN_1418ecd64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecdae FUN_1418ecdae body=121 status=ok
// SIG undefined FUN_1418ecdae(void)

void FUN_1418ecdae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351f30;
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418ece23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418ece28 FUN_1418ece28 body=29 status=ok
// SIG undefined FUN_1418ece28(void)

undefined8 FUN_1418ece28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ece46 FUN_1418ece46 body=29 status=ok
// SIG undefined FUN_1418ece46(void)

undefined8 FUN_1418ece46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ece64 FUN_1418ece64 body=57 status=ok
// SIG undefined FUN_1418ece64(void)

void FUN_1418ece64(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418ece9e FUN_1418ece9e body=29 status=ok
// SIG undefined FUN_1418ece9e(void)

undefined8 FUN_1418ece9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecebc FUN_1418ecebc body=77 status=ok
// SIG undefined FUN_1418ecebc(void)

void FUN_1418ecebc(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b5c7300;
  FUN_140d97376(param_1 + 0x28);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418ecf0a FUN_1418ecf0a body=29 status=ok
// SIG undefined FUN_1418ecf0a(void)

undefined8 FUN_1418ecf0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecf28 FUN_1418ecf28 body=57 status=ok
// SIG undefined FUN_1418ecf28(void)

void FUN_1418ecf28(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418ecf62 FUN_1418ecf62 body=29 status=ok
// SIG undefined FUN_1418ecf62(void)

undefined8 FUN_1418ecf62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecf80 FUN_1418ecf80 body=25 status=ok
// SIG undefined FUN_1418ecf80(void)

void FUN_1418ecf80(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3e4b50;
  lVar1 = *(longlong *)(param_1 + 0x40);
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



// FUNCTION 1418ecf9a FUN_1418ecf9a body=29 status=ok
// SIG undefined FUN_1418ecf9a(void)

undefined8 FUN_1418ecf9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ecfb8 FUN_1418ecfb8 body=57 status=ok
// SIG undefined FUN_1418ecfb8(void)

void FUN_1418ecfb8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418ecff2 FUN_1418ecff2 body=29 status=ok
// SIG undefined FUN_1418ecff2(void)

undefined8 FUN_1418ecff2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed010 FUN_1418ed010 body=57 status=ok
// SIG undefined FUN_1418ed010(void)

void FUN_1418ed010(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418ed04a FUN_1418ed04a body=29 status=ok
// SIG undefined FUN_1418ed04a(void)

undefined8 FUN_1418ed04a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed068 FUN_1418ed068 body=57 status=ok
// SIG undefined FUN_1418ed068(void)

void FUN_1418ed068(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418ed0a2 FUN_1418ed0a2 body=29 status=ok
// SIG undefined FUN_1418ed0a2(void)

undefined8 FUN_1418ed0a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed0c0 FUN_1418ed0c0 body=29 status=ok
// SIG undefined FUN_1418ed0c0(void)

undefined8 FUN_1418ed0c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed0de FUN_1418ed0de body=29 status=ok
// SIG undefined FUN_1418ed0de(void)

undefined8 FUN_1418ed0de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed0fc FUN_1418ed0fc body=29 status=ok
// SIG undefined FUN_1418ed0fc(void)

undefined8 FUN_1418ed0fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed11a FUN_1418ed11a body=29 status=ok
// SIG undefined FUN_1418ed11a(void)

undefined8 FUN_1418ed11a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed138 FUN_1418ed138 body=29 status=ok
// SIG undefined FUN_1418ed138(void)

undefined8 FUN_1418ed138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed156 FUN_1418ed156 body=29 status=ok
// SIG undefined FUN_1418ed156(void)

undefined8 FUN_1418ed156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed174 FUN_1418ed174 body=161 status=ok
// SIG undefined FUN_1418ed174(void)

void FUN_1418ed174(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar6 = *(longlong **)(param_1 + 8);
    plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x10) * 2;
    iVar5 = 0;
    do {
      plVar2 = (longlong *)*plVar6;
      plVar3 = (longlong *)plVar6[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x18] == '\x03')) {
        (**(code **)(*plVar2 + 8))(plVar2,0);
        iVar5 = iVar5 + 1;
      }
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
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar4);
    if (0 < iVar5) {
      FUN_140b758c4(param_1 + -0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1418ed216 FUN_1418ed216 body=310 status=ok
// SIG undefined FUN_1418ed216(void)

longlong * FUN_1418ed216(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cbce5d8;
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



// FUNCTION 1418ed34e FUN_1418ed34e body=61 status=ok
// SIG undefined FUN_1418ed34e(void)

longlong FUN_1418ed34e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ed38c FUN_1418ed38c body=95 status=ok
// SIG undefined FUN_1418ed38c(void)

ulonglong * FUN_1418ed38c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "TitleMessage";
  local_18 = 0xc;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ed3ec FUN_1418ed3ec body=127 status=ok
// SIG undefined FUN_1418ed3ec(void)

void FUN_1418ed3ec(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1409231c6(param_2);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x178), lVar1 != 0)) {
    lVar2 = FUN_14041aabe();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      FUN_140c379ae(param_1 + 8,&DAT_14cbce528);
      return;
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x28) = 4;
  return;
}



// FUNCTION 1418ed46c FUN_1418ed46c body=149 status=ok
// SIG undefined FUN_1418ed46c(void)

undefined8
FUN_1418ed46c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14116599c();
    }
    lVar2 = FUN_1400f6f32(lVar2);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar2 + 0x68) == 0) {
        return 0;
      }
      uVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
      plVar4 = (longlong *)FUN_140d75dd6(lVar3,uVar1);
      if (plVar4 == (longlong *)0x0) {
        return 1;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418ed560 FUN_1418ed560 body=93 status=ok
// SIG undefined FUN_1418ed560(void)

void FUN_1418ed560(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b991510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418ed5be FUN_1418ed5be body=93 status=ok
// SIG undefined FUN_1418ed5be(void)

void FUN_1418ed5be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b991580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418ed61c FUN_1418ed61c body=576 status=ok
// SIG undefined FUN_1418ed61c(void)

void FUN_1418ed61c(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1418ed7fa;
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
LAB_1418ed7fa:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ed85e FUN_1418ed85e body=137 status=ok
// SIG undefined FUN_1418ed85e(void)

void FUN_1418ed85e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1418ed8e8 FUN_1418ed8e8 body=605 status=ok
// SIG undefined FUN_1418ed8e8(void)

void FUN_1418ed8e8(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    lVar6 = FUN_140dd10c4();
    plVar3 = *(longlong **)(param_1 + 0x508);
    if ((((plVar3 != (longlong *)0x0) && (lVar6 != 0)) && (lVar4 = plVar3[2], lVar4 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)))) {
      plVar7 = (longlong *)FUN_14142a730();
      lVar6 = plVar7[0x22];
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 1000))(plVar7);
        lVar6 = plVar7[0x22];
        if (lVar6 == 0) goto LAB_1418edaba;
      }
      local_70 = lVar6 + 0x58;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = local_70;
      if (*(int *)(lVar6 + 0x70) == 0) {
        uVar17 = 1;
        local_58._0_4_ = 0xffffffff;
        iVar12 = 0;
        local_58._4_4_ = 0;
        local_68._0_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        uVar17 = local_68 >> 0x20;
        iVar12 = *(int *)(lVar6 + 0x70);
      }
      lVar4 = local_60;
      iVar10 = (int)local_68;
      uVar8 = (uint)local_58;
      iVar9 = local_58._4_4_;
      iVar11 = local_50;
      if (local_58._4_4_ != iVar12 || local_60 != local_70) {
        do {
          (**(code **)(*plVar3 + 800))(plVar3,(longlong)iVar9 * 0x28 + *(longlong *)(lVar6 + 0x48));
          uVar8 = ~(uint)uVar17 & uVar8;
          lVar16 = *(longlong *)(lVar4 + 0x10);
          if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar16 = lVar4;
          }
          iVar2 = *(int *)(lVar4 + 0x18);
          lVar14 = (longlong)iVar10;
          uVar13 = *(uint *)(lVar16 + lVar14 * 4) & uVar8;
          if (uVar13 == 0) {
            iVar9 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar9 = iVar2 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar5 = iVar9;
            if (iVar9 < iVar10) {
              iVar5 = iVar10;
            }
            if (iVar10 < iVar9) {
              lVar15 = 0;
              do {
                uVar13 = *(uint *)(lVar16 + lVar14 * 4 + 4 + lVar15 * 4);
                if (uVar13 != 0) {
                  iVar10 = iVar10 + (int)lVar15 + 1;
                  uVar8 = 0xffffffff;
                  goto LAB_1418eda78;
                }
                iVar11 = iVar11 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar5 - lVar14 != lVar15);
              uVar8 = 0xffffffff;
              iVar10 = iVar5;
            }
            iVar10 = iVar10 + 1;
            iVar9 = iVar2;
          }
          else {
LAB_1418eda78:
            uVar17 = (ulonglong)(-uVar13 & uVar13);
            uVar1 = uVar17 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar9 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar9) {
              iVar9 = iVar2;
            }
          }
        } while ((iVar9 != iVar12) || (lVar4 != local_70));
      }
    }
  }
LAB_1418edaba:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418edb46 FUN_1418edb46 body=503 status=ok
// SIG undefined FUN_1418edb46(void)

void FUN_1418edb46(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb22240 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464376fa;
      local_48 = &LAB_147f28935;
      local_50 = FUN_146437c39;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb22240);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464376fa;
        local_48 = &LAB_147f28935;
        local_50 = FUN_146437c39;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb22240);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x30))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418edd70 FUN_1418edd70 body=79 status=ok
// SIG undefined FUN_1418edd70(void)

undefined8 FUN_1418edd70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1447210f0(param_1 + -0xe48);
  if (lVar2 != 0) {
    iVar1 = FUN_14490d72a(lVar2);
    if (((iVar1 == 3) && (*(int *)(param_1 + 0x2378) != 0)) &&
       (*(longlong **)(param_1 + 0x2370) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001418eddb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x2370) + 0x30))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1418eddc0 FUN_1418eddc0 body=77 status=ok
// SIG undefined FUN_1418eddc0(void)

undefined8 FUN_1418eddc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1447210f0(param_1 + -0xe48);
  if (lVar2 != 0) {
    iVar1 = FUN_14490d72a(lVar2);
    if ((iVar1 == 3) && (*(longlong *)(param_1 + 0x2368) != 0)) {
      uVar3 = FUN_1489af7ae(*(longlong *)(param_1 + 0x2368),param_1 + -0xe48);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1418ede0e FUN_1418ede0e body=92 status=ok
// SIG undefined FUN_1418ede0e(void)

longlong FUN_1418ede0e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + -0xac8) != 0) {
    lVar3 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + -0xac8);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1418ede6a FUN_1418ede6a body=133 status=ok
// SIG undefined FUN_1418ede6a(void)

void FUN_1418ede6a(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0xda8) + 0x6c8))(param_1 + -0xda8);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + -0xc30) != '\x03') goto LAB_1418edec0;
    param_1 = param_1 + 0x1408;
  }
  else {
    param_1 = param_1 + 0x13e0;
  }
  if (param_2 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c(param_1,&local_20);
  }
LAB_1418edec0:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418edef0 FUN_1418edef0 body=86 status=ok
// SIG undefined FUN_1418edef0(void)

int FUN_1418edef0(undefined8 param_1)

{
  byte bVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  bVar1 = FUN_14016169c(param_1,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return (uint)(local_14 == 1 & bVar1) * 0x200 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418edf48 FUN_1418edf48 body=330 status=ok
// SIG undefined FUN_1418edf48(void)

undefined8 FUN_1418edf48(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + -0xa80);
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar1 = *(longlong *)(param_1 + -0xa80);
      if (lVar1 == 0) goto LAB_1418ee084;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_1418ee084:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1418ee0a8 FUN_1418ee0a8 body=58 status=ok
// SIG undefined FUN_1418ee0a8(void)

void FUN_1418ee0a8(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14007a5e6(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418ee0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x48))(plVar2,*param_2,*(code **)(*plVar2 + 0x48));
      return;
    }
  }
  return;
}



// FUNCTION 1418ee0e2 FUN_1418ee0e2 body=85 status=ok
// SIG undefined FUN_1418ee0e2(void)

longlong FUN_1418ee0e2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x3d0);
    if (lVar1 != 0) {
      lVar2 = FUN_1402095ca();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        return *(longlong *)(param_1 + 0xa08);
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1418ee138 FUN_1418ee138 body=68 status=ok
// SIG undefined FUN_1418ee138(void)

bool FUN_1418ee138(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if ((cVar1 != '\0') && (lVar2 = FUN_140c8d816(param_1 + -0x1c8,param_2), lVar2 != 0)) {
    return 0.0 < *(float *)(lVar2 + 0x78);
  }
  return false;
}



// FUNCTION 1418ee17c FUN_1418ee17c body=423 status=ok
// SIG undefined FUN_1418ee17c(void)

undefined8 FUN_1418ee17c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1401b4be6();
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0xf40) == 0) {
      if (((*(longlong *)(param_1 + 0x2370) != 0) && (*(int *)(param_1 + 0x2378) - 1U < 0xfffffffe))
         || (*(char *)(param_1 + 0x2368) != '\0')) goto LAB_1418ee272;
      cVar1 = *(char *)(param_1 + 0x23b8);
    }
    else {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xf40) + 0x1990);
    }
    if ((cVar1 == '\0') && (lVar2 = *(longlong *)(param_1 + 0x398), lVar2 != 0)) {
      if (DAT_14cbae3d8 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141030f22;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464f5fc4;
        local_38 = &LAB_148c3dd26;
        local_40 = &LAB_1459673ba;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar2 = *(longlong *)(param_1 + 0x398);
        if (lVar2 == 0) goto LAB_1418ee272;
      }
      uVar3 = 0;
      if ((DAT_14cbae3d8 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0))
      goto LAB_1418ee223;
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          == DAT_14cbae3d8 + 0x30)) {
        lVar2 = FUN_1403b0700();
        lVar2 = *(longlong *)(lVar2 + 0x38);
        uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != DAT_14cb71810 && lVar2 != 0);
        goto LAB_1418ee223;
      }
    }
  }
LAB_1418ee272:
  uVar3 = 0;
LAB_1418ee223:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ee324 FUN_1418ee324 body=457 status=ok
// SIG undefined FUN_1418ee324(void)

void FUN_1418ee324(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
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
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + -0x530);
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_1 + -0x530);
      if (lVar2 == 0) goto LAB_1418ee4da;
    }
    lVar4 = 0;
    if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0))
    goto LAB_1418ee39a;
    if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar4 = lVar2;
      }
      goto LAB_1418ee39a;
    }
  }
LAB_1418ee4da:
  lVar4 = 0;
LAB_1418ee39a:
  lVar2 = FUN_1404960a8(lVar4);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    *puVar3 = &PTR_FUN_14b9941c8;
    puVar3[1] = param_2;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0;
    FUN_140d188f2(puVar3 + 2,param_3);
    *(undefined1 *)(puVar3 + 0xc) = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ee508 FUN_1418ee508 body=383 status=ok
// SIG undefined FUN_1418ee508(void)

void FUN_1418ee508(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
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
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + -0x530);
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_1 + -0x530);
      if (lVar2 == 0) goto LAB_1418ee674;
    }
    lVar4 = 0;
    if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0))
    goto LAB_1418ee574;
    if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar4 = lVar2;
      }
      goto LAB_1418ee574;
    }
  }
LAB_1418ee674:
  lVar4 = 0;
LAB_1418ee574:
  lVar2 = FUN_1404960a8(lVar4);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar3 = &PTR_FUN_14b9941d8;
    puVar3[1] = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ee6c0 FUN_1418ee6c0 body=101 status=ok
// SIG undefined FUN_1418ee6c0(void)

void FUN_1418ee6c0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b995700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418ee726 FUN_1418ee726 body=29 status=ok
// SIG undefined FUN_1418ee726(void)

undefined8 FUN_1418ee726(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ee744 FUN_1418ee744 body=95 status=ok
// SIG undefined FUN_1418ee744(void)

ulonglong * FUN_1418ee744(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_CrosshairFeedbackTriggered";
  local_18 = 0x26;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ee7a4 FUN_1418ee7a4 body=75 status=ok
// SIG undefined FUN_1418ee7a4(void)

undefined8 * FUN_1418ee7a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9941c8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ee7f0 FUN_1418ee7f0 body=95 status=ok
// SIG undefined FUN_1418ee7f0(void)

ulonglong * FUN_1418ee7f0(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "PlayAnimation";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ee850 FUN_1418ee850 body=29 status=ok
// SIG undefined FUN_1418ee850(void)

undefined8 FUN_1418ee850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ee86e FUN_1418ee86e body=95 status=ok
// SIG undefined FUN_1418ee86e(void)

ulonglong * FUN_1418ee86e(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "StopAnimation";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ee8e0 FUN_1418ee8e0 body=101 status=ok
// SIG undefined FUN_1418ee8e0(void)

void FUN_1418ee8e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418ee946 FUN_1418ee946 body=101 status=ok
// SIG undefined FUN_1418ee946(void)

void FUN_1418ee946(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418ee9ac FUN_1418ee9ac body=101 status=ok
// SIG undefined FUN_1418ee9ac(void)

void FUN_1418ee9ac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b995690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418eea12 FUN_1418eea12 body=360 status=ok
// SIG undefined FUN_1418eea12(void)

void FUN_1418eea12(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448ef896();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd06f0) {
    FUN_144b3d300(&DAT_14cbd06f0);
    if (DAT_14cbd06f0 == -1) {
      FUN_1446f470e(&local_28,L"BankItems",1);
      uVar1 = FUN_144a7b4ca();
      FUN_144a7b4ca();
      DAT_14cbd06e8 = FUN_140f1fabf(uVar1,local_28);
      _Init_thread_footer(&DAT_14cbd06f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  if (0 < *(int *)(DAT_14cbd06e8 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1448ef1fe(&DAT_14c997f90,param_1,*(int *)(DAT_14cbd06e8 + 0x40) + iVar2,
                    *(undefined1 *)(param_1 + 0xceb));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_14cbd06e8 + 0x30));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418eeb7b FUN_1418eeb7b body=513 status=ok
// SIG undefined FUN_1418eeb7b(void)

ulonglong * FUN_1418eeb7b(ulonglong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  ulonglong uVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 auStack_78 [32];
  char *local_58;
  int local_50;
  undefined1 local_4c;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = DAT_14cbd02a8;
  local_58 = DAT_14cbd02a0;
  FUN_1448075d0(local_48);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar12 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar6[9];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
      if (iVar5 != -1) {
        do {
          lVar8 = *plVar6 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_48[0]) {
            if ((((lVar8 != 0) &&
                 (puVar7 = (undefined8 *)(lVar8 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_1418eec29;
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_1418eec29:
  pbVar1 = (byte *)*puVar7;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) &&
     (_Str = *(char **)(pbVar1 + 8), _Str != (char *)0x0)) {
    sVar3 = strlen(_Str);
    iVar5 = (int)sVar3;
    if (iVar5 != 0) {
      lVar8 = (longlong)iVar5;
      pcVar13 = _Str + lVar8 + -1;
      uVar4 = 0;
      if (pcVar13 < _Str) {
        lVar11 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar13 - 0x30U)) break;
          uVar4 = uVar4 + 1;
          pcVar13 = pcVar13 + -1;
        } while (_Str <= pcVar13);
        lVar11 = 0;
        if (((uVar4 != 0) && ((int)uVar4 < iVar5)) &&
           ((lVar11 = 0, uVar4 < 0xb &&
            (lVar14 = -(ulonglong)uVar4, _Str[lVar14 + lVar8 + -1] == '_')))) {
          if ((uVar4 == 1) || (_Str[lVar14 + lVar8] != '0')) {
            lVar10 = 0;
            do {
              lVar11 = (longlong)_Str[lVar14 + lVar8] + lVar10 * 10;
              lVar10 = lVar11 + -0x30;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0);
            if (lVar10 < 0x7fffffff) {
              iVar5 = ~uVar4 + iVar5;
              lVar11 = lVar11 + -0x2f;
              goto LAB_1418eecdd;
            }
          }
          lVar11 = 0;
        }
LAB_1418eecdd:
        if (iVar5 == 0) goto LAB_1418eec31;
      }
      local_4c = 0;
      local_58 = _Str;
      local_50 = iVar5;
      uVar4 = FUN_14001a6c0(&local_58,1);
      uVar9 = lVar11 << 0x20;
      uVar2 = (ulonglong)uVar4;
      goto LAB_1418eec35;
    }
  }
LAB_1418eec31:
  uVar2 = 0;
  uVar9 = 0;
LAB_1418eec35:
  *param_1 = uVar2 | uVar9;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418eed7d FUN_1418eed7d body=472 status=ok
// SIG undefined FUN_1418eed7d(void)

undefined8 FUN_1418eed7d(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char *_Str;
  size_t sVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_188 [40];
  uint local_160 [6];
  longlong local_148;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_130 = DAT_14cbd0278;
  local_138 = DAT_14cbd0270;
  FUN_1448075d0(local_160);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_160[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_160[0]) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_1418eee35;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_1418eee35:
  pbVar2 = (byte *)*puVar5;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
    _Str = *(char **)(pbVar2 + 8);
    local_38 = 0;
    if (_Str != (char *)0x0) {
      sVar3 = strlen(_Str);
      FUN_1446e6fe8(&local_138,_Str,sVar3 & 0xffffffff,1);
      goto LAB_1418eee66;
    }
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
LAB_1418eee66:
  FUN_140056680(param_1,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418eef56 FUN_1418eef56 body=438 status=ok
// SIG undefined FUN_1418eef56(void)

undefined8 * FUN_1418eef56(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14cbd0810;
  local_60 = DAT_14cbd0808;
  FUN_1448075d0(local_50);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar6 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar5[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar5[10] - 1U & local_50[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar3 = *plVar5 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar7 * 0x40) == local_50[0]) {
            if ((((lVar3 != 0) && (plVar5 = (longlong *)(lVar3 + 0x28), plVar5 != (longlong *)0x0))
                && ((byte *)*plVar5 != (byte *)0x0)) && ((*(byte *)*plVar5 & 0x40) == 0))
            goto LAB_1418ef00a;
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  plVar5 = &DAT_14c9a1308;
LAB_1418ef00a:
  if (*plVar5 == 0) {
    puVar2 = &DAT_14c9a12e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
  }
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  FUN_140045924(DAT_14c947fe0,&local_60,puVar2,1);
  lVar3 = FUN_14050aea0(&local_60);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
  }
  *param_1 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418ef10d FUN_1418ef10d body=291 status=ok
// SIG undefined FUN_1418ef10d(void)

undefined8 FUN_1418ef10d(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14cbd0828;
  local_50 = DAT_14cbd0820;
  FUN_1448075d0(local_40);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_40[0]) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_40[0]) {
            if ((((lVar1 != 0) && (plVar3 = (longlong *)(lVar1 + 0x28), plVar3 != (longlong *)0x0))
                && ((byte *)*plVar3 != (byte *)0x0)) && ((*(byte *)*plVar3 & 0x40) == 0))
            goto LAB_1418ef1ba;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  plVar3 = &DAT_14c9a1308;
LAB_1418ef1ba:
  puVar4 = &DAT_14c9a12e0;
  if (*plVar3 != 0) {
    puVar4 = (undefined4 *)FUN_140625092(*plVar3,&DAT_14c9a12e0);
  }
  FUN_1447a97f4(param_1,puVar4);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418ef232 FUN_1418ef232 body=639 status=ok
// SIG undefined FUN_1418ef232(void)

undefined8 FUN_1418ef232(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14009b010(&local_48,3,0);
    FUN_1446dcc2e(param_3,&local_48);
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  if ((*(longlong *)(param_1 + 0x23d8) != 0) && (*(int *)(param_1 + 0x23e0) - 1U < 0xfffffffe)) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_14009b010(&local_68,1,0);
    local_48 = *(undefined8 *)(param_1 + 0x23d8);
    if (local_68 != 0) {
      FUN_1401269d0(local_68,&local_48);
    }
    local_50 = DAT_14cbd0810;
    local_58 = DAT_14cbd0808;
    FUN_1448075d0(&local_48);
    if (*param_3 != 0) {
      local_78 = 0;
      FUN_14014191c(*param_3,&local_48,&local_68,0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if (((*(int *)(param_1 + 0x2408) != 0) && (*(int *)(param_1 + 0x240c) != 0)) &&
     (*(int *)(param_1 + 0x2408) != DAT_14c948000)) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_14009b010(&local_68,1,0);
    if (local_68 != 0) {
      FUN_1402afb64(local_68,param_1 + 0x2408);
    }
    local_50 = DAT_14cbd0828;
    local_58 = DAT_14cbd0820;
    FUN_1448075d0(&local_48);
    if (*param_3 != 0) {
      local_78 = 0;
      FUN_14014191c(*param_3,&local_48,&local_68,0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ef4b2 FUN_1418ef4b2 body=1004 status=ok
// SIG undefined FUN_1418ef4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418ef4b2(int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 < 0) {
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
    plVar1 = DAT_14cadc188;
    if (DAT_14cadc188 != DAT_14c844840) {
      DAT_14cadc188 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    _DAT_14cadc190 = DAT_14c844848;
  }
  else {
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
    local_98 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_90 = DAT_14c844848;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"TitleActivateCompilingShadersText",0);
    FUN_140ac6c96(&local_58,&local_98);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_1413a454c(local_b8,param_1,0);
    FUN_14023409e(&local_d8,&local_98,1);
    local_58 = CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,local_b8);
    local_70 = &uStack_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_d8;
    local_80 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a8,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar3 = (int *)((longlong)local_d0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    FUN_140008f88(&DAT_14cadc188,local_a8);
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    plVar1 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ef8b4 FUN_1418ef8b4 body=1049 status=ok
// SIG undefined FUN_1418ef8b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418ef8b4(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = param_2;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (lVar8 = FUN_1447210f0(), lVar8 != 0)) {
    lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x180));
    if ((*(longlong *)(lVar8 + 0x30) != 0) &&
       ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0) != 0 &&
        (cVar5 = FUN_144729dda(&local_a0), cVar5 != '\0')))) {
      lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x180));
      if (*(longlong *)(lVar8 + 0x30) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
      }
      plVar9 = (longlong *)FUN_140995b6b(uVar10);
      if (plVar9 != (longlong *)0x0) {
        FUN_14057a3b2(plVar9,1,1,1);
        local_a8 = DAT_14c8464f0;
        local_b8 = DAT_14c8464e0;
        uStack_b0 = DAT_14c8464e8;
        auVar13 = *(undefined1 (*) [16])(plVar9 + 0x36);
        dVar3 = auVar13._0_8_;
        dVar4 = auVar13._8_8_;
        dVar18 = (double)plVar9[0x38];
        puVar11 = (undefined8 *)plVar9[0x46];
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          uVar10 = DAT_14c8463d8;
          *puVar11 = DAT_14c8463d0;
          puVar11[1] = uVar10;
          uVar10 = DAT_14c8463e8;
          puVar11[2] = DAT_14c8463e0;
          puVar11[3] = uVar10;
          uVar10 = DAT_14c846500;
          puVar11[4] = DAT_14c8464f8;
          puVar11[5] = uVar10;
          puVar11[6] = DAT_14c846508;
          plVar9[0x46] = (longlong)puVar11;
        }
        if (((((double)puVar11[4] != dVar3) || (NAN((double)puVar11[4]) || NAN(dVar3))) ||
            ((double)puVar11[5] != dVar4)) ||
           (((NAN((double)puVar11[5]) || NAN(dVar4) || ((double)puVar11[6] != dVar18)) ||
            (NAN((double)puVar11[6]) || NAN(dVar18))))) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = dVar18;
          dVar1 = (double)DAT_1499387d0;
          dVar2 = DAT_1499387d0._8_8_;
          auVar13 = divpd(auVar13,_DAT_1499387d0);
          auVar16 = divpd(auVar21,_DAT_1499387d0);
          auVar13 = roundpd(auVar13,auVar13,3);
          auVar16 = roundpd(auVar16,auVar16,3);
          dVar3 = dVar3 - auVar13._0_8_ * dVar1;
          dVar4 = dVar4 - auVar13._8_8_ * dVar2;
          auVar22._0_8_ = dVar18 - auVar16._0_8_ * dVar1;
          auVar22._8_8_ = 0.0 - auVar16._8_8_ * dVar2;
          auVar20._0_8_ = dVar3 + dVar1;
          auVar20._8_8_ = dVar4 + dVar2;
          auVar19._0_8_ = dVar1 + auVar22._0_8_;
          auVar19._8_8_ = dVar2 + auVar22._8_8_;
          auVar16._8_8_ = -(ulonglong)(0.0 <= dVar4);
          auVar16._0_8_ = -(ulonglong)(0.0 <= dVar3);
          auVar13._8_4_ = SUB84(dVar4,0);
          auVar13._0_8_ = dVar3;
          auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          auVar16 = blendvpd(auVar20,auVar13,auVar16);
          auVar14._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
          auVar14._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
          auVar13 = blendvpd(auVar19,auVar22,auVar14);
          auVar17._0_8_ = auVar16._0_8_ + -360.0;
          auVar17._8_8_ = auVar16._8_8_ + -360.0;
          auVar15._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
          auVar15._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
          auVar16 = blendvpd(auVar16,auVar17,auVar15);
          dVar18 = auVar13._0_8_;
          *(undefined1 (*) [16])(puVar11 + 4) = auVar16;
          puVar11[6] = ~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
                       (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18);
          FUN_144a7484c(puVar11 + 4,&local_78);
          puVar11[2] = local_68;
          puVar11[3] = uStack_60;
          *puVar11 = local_78;
          puVar11[1] = uStack_70;
        }
        local_78 = *puVar11;
        uStack_70 = puVar11[1];
        local_68 = puVar11[2];
        uStack_60 = puVar11[3];
        local_98 = local_b8;
        uStack_90 = uStack_b0;
        local_88 = local_a8;
        iVar12 = 0;
        local_100 = 0;
        local_108 = 0;
        FUN_144927ad4(plVar9,&local_98,&local_78,0);
        local_d8 = DAT_14c8464f8;
        uStack_d0 = DAT_14c846500;
        local_c8 = DAT_14c846508;
        local_108 = local_108 & 0xffffffffffffff00;
        FUN_14020f75c(plVar9,&local_d8,0,0);
        local_e8 = DAT_14c846520;
        local_f8 = DAT_14c846510;
        uStack_f0 = DAT_14c846518;
        (**(code **)(*plVar9 + 0x478))(plVar9);
        FUN_140c0573e(plVar9,1);
        *(byte *)((longlong)plVar9 + 0x2d4) = *(byte *)((longlong)plVar9 + 0x2d4) & 0xfe;
        (**(code **)(*plVar9 + 0x720))(plVar9,0);
        uVar10 = FUN_14479d2ce(&local_a0);
        (**(code **)(*plVar9 + 0xa78))(plVar9,uVar10);
        uVar10 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x180));
        FUN_140b506dc(plVar9,uVar10,0);
        FUN_1449e3cec(plVar9,1,1);
        iVar6 = (**(code **)(*plVar9 + 0x7b0))(plVar9);
        if (0 < iVar6) {
          do {
            (**(code **)(*plVar9 + 0x678))(plVar9,iVar12,0,0);
            iVar12 = iVar12 + 1;
          } while (iVar6 != iVar12);
        }
        if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
          uVar7 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x1070))();
          FUN_140357fa8(plVar9,uVar7,0);
        }
        goto LAB_1418efb5e;
      }
    }
  }
  plVar9 = (longlong *)0x0;
LAB_1418efb5e:
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 1418efcce FUN_1418efcce body=369 status=ok
// SIG undefined FUN_1418efcce(void)

void FUN_1418efcce(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0xe8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1418efd56;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_1418efd56:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x8d3dcb08d3dcb09),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0xe8,8);
  return;
}



// FUNCTION 1418efe40 FUN_1418efe40 body=29 status=ok
// SIG undefined FUN_1418efe40(void)

undefined8 FUN_1418efe40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418efe5e FUN_1418efe5e body=95 status=ok
// SIG undefined FUN_1418efe5e(void)

ulonglong * FUN_1418efe5e(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FGbxUIEvent_StatusMenu_Damage";
  local_18 = 0x1d;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418efebe FUN_1418efebe body=502 status=ok
// SIG undefined FUN_1418efebe(void)

uint * FUN_1418efebe(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_88 [40];
  uint local_60 [2];
  uint *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449c02b2(param_1,local_60);
  puVar5 = (undefined4 *)param_3[1];
  local_48 = *(undefined4 *)((undefined8 *)*param_3 + 1);
  local_50 = *(undefined8 *)*param_3;
  FUN_1448075d0(local_58);
  uVar4 = *puVar5;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  FUN_14009b010(local_58 + 10,uVar4,0);
  local_58[0xe] = 0xffffffff;
  uVar17 = *local_58;
  uVar20 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
  if (1 < uVar20) {
    plVar18 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[9];
    }
    uVar22 = *(uint *)((longlong)plVar18 + (ulonglong)((int)param_1[10] - 1U & uVar17) * 4);
    if (uVar22 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*param_1 + (longlong)(int)uVar22 * 0x40);
        if (*(uint *)(*param_1 + (longlong)(int)uVar22 * 0x40) == uVar17) {
          plVar18 = *(longlong **)(puVar3 + 0xc);
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar18 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          if (*(longlong *)(puVar3 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar17 = *local_58;
          uVar20 = local_58[1];
          uVar7 = local_58[2];
          uVar8 = local_58[3];
          uVar9 = local_58[4];
          uVar10 = local_58[5];
          uVar11 = local_58[6];
          uVar12 = local_58[7];
          uVar13 = local_58[8];
          uVar14 = local_58[9];
          uVar15 = local_58[10];
          uVar16 = local_58[0xb];
          *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(local_58 + 0xc);
          puVar3[8] = uVar13;
          puVar3[9] = uVar14;
          puVar3[10] = uVar15;
          puVar3[0xb] = uVar16;
          puVar3[4] = uVar9;
          puVar3[5] = uVar10;
          puVar3[6] = uVar11;
          puVar3[7] = uVar12;
          *puVar3 = uVar17;
          puVar3[1] = uVar20;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          FUN_140458984(param_1,local_60[0],1);
          local_60[0] = uVar22;
          goto LAB_1418f0000;
        }
        uVar22 = puVar3[0xe];
      } while (uVar22 != 0xffffffff);
    }
  }
  iVar21 = 1;
  if (3 < uVar20) {
    uVar19 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar21 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar20 < 1) || (iVar21 <= (int)param_1[10])) {
    uVar17 = (int)param_1[10] - 1U & uVar17;
    local_58[0xf] = uVar17;
    plVar18 = (longlong *)param_1[9];
    if ((longlong *)param_1[9] == (longlong *)0x0) {
      plVar18 = param_1 + 8;
    }
    local_58[0xe] =
         *(uint *)((longlong)plVar18 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar17) * 4
                  );
    plVar18 = (longlong *)param_1[9];
    if ((longlong *)param_1[9] == (longlong *)0x0) {
      plVar18 = param_1 + 8;
    }
    *(uint *)((longlong)plVar18 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar17) * 4) =
         local_60[0];
  }
  else {
    *(int *)(param_1 + 10) = iVar21;
    FUN_1446eb800(param_1);
  }
LAB_1418f0000:
  *param_2 = local_60[0];
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418f00b5 FUN_1418f00b5 body=41 status=ok
// SIG undefined FUN_1418f00b5(void)

void FUN_1418f00b5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140368b56(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 1418f00de FUN_1418f00de body=113 status=ok
// SIG undefined FUN_1418f00de(void)

undefined8 FUN_1418f00de(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x7c);
  uVar2 = *(uint *)((longlong)param_2 + 0x7c);
  if (uVar1 != uVar2) {
    uVar4 = uVar1 ^ uVar2;
    if ((uVar4 >> 0xc & 1) != 0) {
      return 0;
    }
    if ((uVar4 >> 0xd & 1) != 0) {
      return 0;
    }
    if ((uVar4 >> 0xe & 1) != 0) {
      return 0;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      return 0;
    }
    if (0x1ffff < uVar4) {
      return 0;
    }
    if ((char)uVar1 < '\0' == -1 < (char)uVar2) {
      return 0;
    }
  }
  if ((*param_2 == *param_1) && ((int)param_2[1] == (int)param_1[1])) {
    uVar3 = FUN_140383372(param_2 + 0xb,param_1 + 0xb);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1418f0156 FUN_1418f0156 body=40 status=ok
// SIG undefined FUN_1418f0156(void)

void FUN_1418f0156(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x3c0,param_1 + 0x390);
  return;
}



// FUNCTION 1418f017e FUN_1418f017e body=50 status=ok
// SIG undefined FUN_1418f017e(void)

void FUN_1418f017e(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  FUN_14020684a(param_1);
  return;
}



// FUNCTION 1418f01b6 FUN_1418f01b6 body=300 status=ok
// SIG undefined FUN_1418f01b6(void)

void FUN_1418f01b6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  FUN_1401533ba(&local_30,&DAT_14cbd0da0,1);
  *(undefined4 *)(puVar1 + 1) = local_28;
  *puVar1 = local_30;
  if ((DAT_14cbd0da0 != 0) && ((longlong)*(int *)(param_1 + 400) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x68 + lVar2) == DAT_14cbd0da0) {
        iVar3 = (int)(lVar2 >> 3) * -0xf0f0f0f;
        if ((iVar3 != -1) && (*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 0x88 != 0)) {
          local_40 = DAT_14cbd0da0;
          local_38 = 0xffffffff;
          FUN_140c823b2(param_1 + 0x188,&local_30);
          FUN_144976b9c((longlong)puVar1 + 0xc,local_30);
        }
        break;
      }
      lVar2 = lVar2 + 0x88;
    } while ((longlong)*(int *)(param_1 + 400) * 0x88 != lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f02e4 FUN_1418f02e4 body=135 status=ok
// SIG undefined FUN_1418f02e4(void)

void FUN_1418f02e4(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  lVar1 = DAT_14cbd0da0;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cbd0da0) {
    *(undefined4 *)(param_1 + 0x3c0) = param_5;
    local_10 = param_5;
    local_c = 1;
    local_20 = *param_3;
    local_18 = 0xffffffff;
    local_30 = lVar1;
    local_28 = 0xffffffff;
    FUN_140f8b8f2(param_1 + 0x188);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f036c FUN_1418f036c body=408 status=ok
// SIG undefined FUN_1418f036c(void)

longlong * FUN_1418f036c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cbd0dc0 != 0) goto LAB_1418f0397;
  uVar4 = FUN_140ddd994();
  FUN_14042b5a6(local_80,uVar4);
  FUN_1413e5462(&local_30,local_80);
  plVar1 = local_28;
  plVar5 = DAT_14cbd0dc8;
  DAT_14cbd0dc0 = local_30;
  if (local_28 == (longlong *)0x0) {
    if (DAT_14cbd0dc8 != (longlong *)0x0) {
      DAT_14cbd0dc8 = (longlong *)0x0;
LAB_1418f0487:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001418f04b2:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    plVar5 = DAT_14cbd0dc8;
    UNLOCK();
    if (local_28 == DAT_14cbd0dc8) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x0001418f04b2;
      }
    }
    else {
      DAT_14cbd0dc8 = local_28;
      if (plVar5 != (longlong *)0x0) goto LAB_1418f0487;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_38 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1418f0397:
  *param_2 = DAT_14cbd0dc0;
  plVar5 = DAT_14cbd0dc8;
  param_2[1] = (longlong)DAT_14cbd0dc8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f0506 FUN_1418f0506 body=128 status=ok
// SIG undefined FUN_1418f0506(void)

void FUN_1418f0506(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_140ddd994();
  FUN_14042b5a6(local_68,uVar2);
  FUN_14042b1ec(param_2,local_68,1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f0588 FUN_1418f0588 body=97 status=ok
// SIG undefined FUN_1418f0588(void)

undefined8 * FUN_1418f0588(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_LAB_14b999650;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b999cd0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1418f05ea FUN_1418f05ea body=97 status=ok
// SIG undefined FUN_1418f05ea(void)

undefined8 * FUN_1418f05ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_LAB_14b9996b0;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b999cf0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1418f064c FUN_1418f064c body=55 status=ok
// SIG undefined FUN_1418f064c(void)

undefined8 FUN_1418f064c(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  if ((ulonglong)*(byte *)(param_1 + 8) < 3) {
    puVar1 = (undefined4 *)(&PTR_DAT_14b99ad38)[*(byte *)(param_1 + 8)];
  }
  else {
    puVar1 = &DAT_14c9485f0;
  }
  FUN_1447a97f4(param_2,puVar1);
  return param_2;
}



// FUNCTION 1418f0684 FUN_1418f0684 body=89 status=ok
// SIG undefined FUN_1418f0684(void)

undefined8 * FUN_1418f0684(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xc30);
  _Src = *(void **)(param_1 + 0xc28);
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



// FUNCTION 1418f06de FUN_1418f06de body=174 status=ok
// SIG undefined FUN_1418f06de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418f06de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b02dcc0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f078c FUN_1418f078c body=123 status=ok
// SIG undefined FUN_1418f078c(void)

void FUN_1418f078c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1418f07b2;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1418f07b2:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f07fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f0808 FUN_1418f0808 body=29 status=ok
// SIG undefined FUN_1418f0808(void)

undefined8 FUN_1418f0808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f0826 FUN_1418f0826 body=66 status=ok
// SIG undefined FUN_1418f0826(void)

undefined8 * FUN_1418f0826(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b999c40;
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



// FUNCTION 1418f0868 FUN_1418f0868 body=274 status=ok
// SIG undefined FUN_1418f0868(void)

void FUN_1418f0868(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0xe0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418f097c FUN_1418f097c body=69 status=ok
// SIG undefined FUN_1418f097c(void)

void FUN_1418f097c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1411b0b54(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418f09c2 FUN_1418f09c2 body=1092 status=ok
// SIG undefined FUN_1418f09c2(void)

void FUN_1418f09c2(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_a8 [32];
  int local_88;
  uint local_84;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar18 = *(uint *)(param_1 + 9);
  if (uVar18 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar18,4);
    if (0 < (int)uVar18) {
      uVar5 = 0;
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4)
             = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar18 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar22 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 & 0xffffffff;
      uVar22 = local_68 >> 0x20;
    }
    uVar18 = (uint)local_58;
    iVar21 = local_58._4_4_;
    iVar17 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_88 = iVar17;
        local_84 = uVar18;
        local_80 = uVar12;
        lVar15 = *param_1;
        lVar20 = (longlong)iVar21 * 0x78;
        lVar16 = lVar15 + lVar20;
        iVar17 = *(int *)(lVar15 + 0x18 + lVar20);
        iVar6 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar6 = 0;
        }
        uVar18 = 0;
        if (0 < iVar6) {
          puVar14 = &DAT_149dfb77a;
          if (iVar17 != 0) {
            puVar14 = *(undefined2 **)(lVar16 + 0x10);
          }
          lVar9 = 0;
          uVar18 = 0;
          do {
            uVar5 = ((uint)(ushort)puVar14[lVar9] +
                    (uint)(0x19 < (ushort)puVar14[lVar9] - 0x61) * 0x20) - 0x20;
            uVar18 = uVar18 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar18 ^ uVar5) & 0xff) * 4);
            uVar18 = uVar18 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
            lVar9 = lVar9 + 1;
          } while (iVar6 != (int)lVar9);
        }
        uVar3 = *(undefined8 *)(lVar15 + lVar20);
        uVar4 = *(undefined8 *)(lVar15 + 8 + lVar20);
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar13 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar11 = (uint)uVar3 & 0xffff;
        uVar13 = ((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar11 >> 4);
        uVar11 = (uint)uVar4 & 0xffff;
        uVar13 = (uVar13 >> 2) + 0x9e3779b9 +
                 ((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4) + uVar13 * 0x40 ^ uVar13;
        uVar5 = uVar13 >> 0xd ^ -uVar13;
        uVar11 = uVar5 << 8 ^ (-0x61c88647 - uVar13) - uVar5;
        uVar13 = uVar11 >> 0xd ^ (uVar13 - uVar5) - uVar11;
        uVar5 = uVar13 >> 0xc ^ (uVar5 - uVar11) - uVar13;
        uVar11 = uVar5 << 0x10 ^ (uVar11 - uVar13) - uVar5;
        uVar13 = uVar11 >> 5 ^ (uVar13 - uVar5) - uVar11;
        uVar19 = uVar13 >> 3 ^ (uVar5 - uVar11) - uVar13;
        uVar5 = uVar19 << 10 ^ (uVar11 - uVar13) - uVar19;
        uVar13 = uVar18 >> 0xd ^ (uVar5 >> 0xf ^ uVar13 - (uVar19 + uVar5)) - uVar18;
        uVar5 = uVar13 << 8 ^ (-0x61c88647 - uVar18) - uVar13;
        uVar18 = uVar5 >> 0xd ^ (uVar18 - uVar13) - uVar5;
        uVar13 = uVar18 >> 0xc ^ (uVar13 - uVar5) - uVar18;
        uVar5 = uVar13 << 0x10 ^ (uVar5 - uVar18) - uVar13;
        uVar18 = uVar5 >> 5 ^ (uVar18 - uVar13) - uVar5;
        uVar13 = uVar18 >> 3 ^ (uVar13 - uVar5) - uVar18;
        uVar5 = uVar13 << 10 ^ (uVar5 - uVar18) - uVar13;
        uVar12 = (longlong)(int)(uVar5 >> 0xf ^ uVar18 - (uVar13 + uVar5)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar17 = (int)uVar12;
        *(int *)(lVar16 + 0x74) = iVar17;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar16 + 0x70) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar12) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar17 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar21;
        uVar18 = local_84 & ~(uint)uVar22;
        plVar10 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar10 = local_60;
        }
        iVar6 = (int)local_60[3];
        iVar21 = (int)local_80;
        lVar16 = (longlong)iVar21;
        uVar5 = *(uint *)((longlong)plVar10 + lVar16 * 4) & uVar18;
        uVar12 = local_80;
        iVar17 = local_88;
        local_78 = local_60;
        local_70 = plVar1;
        if (uVar5 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar21) {
            iVar8 = iVar21;
          }
          if (iVar7 <= iVar21) break;
          lVar15 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar5 = *(uint *)((longlong)plVar10 + lVar15 * 4 + lVar16 * 4 + 4);
            if (uVar5 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar8 - lVar16 == lVar15) goto LAB_1418f0dc9;
          }
          uVar18 = 0xffffffff;
          uVar12 = (ulonglong)(iVar21 + (int)lVar15 + 1);
        }
        uVar22 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar21 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      } while (iVar21 < iVar6);
    }
  }
LAB_1418f0dc9:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f0e08 FUN_1418f0e08 body=29 status=ok
// SIG undefined FUN_1418f0e08(void)

undefined8 FUN_1418f0e08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f0e26 FUN_1418f0e26 body=29 status=ok
// SIG undefined FUN_1418f0e26(void)

undefined8 FUN_1418f0e26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f0e44 FUN_1418f0e44 body=99 status=ok
// SIG undefined FUN_1418f0e44(void)

void FUN_1418f0e44(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x2b8) = param_2;
  *(bool *)(param_1 + 0x318) = *(char *)(param_2 + 0x178) == '\x03';
  *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) & 0xfe;
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    FUN_140e5bfbe();
    return;
  }
  return;
}



// FUNCTION 1418f0ea8 FUN_1418f0ea8 body=182 status=ok
// SIG undefined FUN_1418f0ea8(void)

undefined8 FUN_1418f0ea8(longlong param_1,undefined2 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  *param_2 = *(undefined2 *)(param_1 + 0x58);
  if ((undefined2 *)(param_1 + 0x58) == param_2) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x68);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    return 1;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x5c);
    uVar6 = 1;
  }
  else {
    if (*(char *)(param_2 + 4) == '\0') goto LAB_1418f0ed2;
    uVar6 = 0;
  }
  *(undefined1 *)(param_2 + 4) = uVar6;
LAB_1418f0ed2:
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0xe) = uVar2;
  *(undefined4 *)(param_2 + 0x10) = uVar3;
  *(undefined4 *)(param_2 + 0x12) = uVar4;
  iVar1 = *(int *)(param_1 + 0x88);
  _Src = *(void **)(param_1 + 0x80);
  *(int *)(param_2 + 0x18) = iVar1;
  if (iVar1 == 0 && *(int *)(param_2 + 0x1a) == 0) {
    *(undefined4 *)(param_2 + 0x1a) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 0x14,iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_2 + 0x14),_Src,(longlong)iVar1 * 2);
    }
  }
  return 1;
}



// FUNCTION 1418f0f5e FUN_1418f0f5e body=118 status=ok
// SIG undefined FUN_1418f0f5e(void)

void FUN_1418f0f5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99be30;
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



// FUNCTION 1418f0fd4 FUN_1418f0fd4 body=118 status=ok
// SIG undefined FUN_1418f0fd4(void)

void FUN_1418f0fd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bf10;
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



// FUNCTION 1418f104a FUN_1418f104a body=319 status=ok
// SIG undefined FUN_1418f104a(void)

undefined8 FUN_1418f104a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) && (*param_3 != 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f119e FUN_1418f119e body=319 status=ok
// SIG undefined FUN_1418f119e(void)

undefined8 FUN_1418f119e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) && (*param_3 != 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f12f2 FUN_1418f12f2 body=370 status=ok
// SIG undefined FUN_1418f12f2(void)

undefined8 * FUN_1418f12f2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1418f1466 FUN_1418f1466 body=29 status=ok
// SIG undefined FUN_1418f1466(void)

undefined8 FUN_1418f1466(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f1484 FUN_1418f1484 body=365 status=ok
// SIG undefined FUN_1418f1484(void)

bool FUN_1418f1484(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint *_Dst;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar5 = DAT_14cbd2e30;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 == DAT_14cbd2e30) {
    plVar1 = (longlong *)(param_1 + 0x80);
    local_58 = *param_3;
    local_50 = param_3[1];
    FUN_1403350f6(plVar1);
    iVar6 = *(int *)(param_1 + 0x88);
    if (0 < iVar6) {
      lVar10 = 0;
      bVar7 = false;
      do {
        while( true ) {
          lVar4 = *plVar1;
          _Dst = (uint *)(lVar4 + lVar10 * 0x10);
          if (((((*(longlong *)(lVar4 + 8 + lVar10 * 0x10) != 0) && (_Dst[1] != 0)) &&
               (uVar2 = *_Dst, -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (plVar9 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar9 != (longlong *)0x0)))) &&
             ((*(uint *)(plVar9 + 2) == _Dst[1] &&
              (((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0 && (*plVar9 != 0)))))) break;
          iVar8 = ~(uint)lVar10 + iVar6;
          if (iVar8 != 0) {
            if (0 < iVar8) {
              iVar8 = 1;
            }
            memmove(_Dst,(void *)(lVar4 + (longlong)(iVar6 - iVar8) * 0x10),(longlong)iVar8 << 4);
            iVar6 = *(int *)(param_1 + 0x88);
          }
          iVar6 = iVar6 + -1;
          *(int *)(param_1 + 0x88) = iVar6;
          bVar7 = true;
          if (iVar6 <= lVar10) goto LAB_1418f15e8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar6);
      if (bVar7) {
LAB_1418f15e8:
        FUN_1400bbcfc(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 == lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f15f2 FUN_1418f15f2 body=68 status=ok
// SIG undefined FUN_1418f15f2(void)

undefined8 * FUN_1418f15f2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99e7a0;
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



// FUNCTION 1418f1650 FUN_1418f1650 body=209 status=ok
// SIG undefined FUN_1418f1650(void)

undefined8 FUN_1418f1650(longlong param_1,undefined2 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  *param_2 = *(undefined2 *)(param_1 + 0x28);
  if ((undefined2 *)(param_1 + 0x28) == param_2) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    goto LAB_1418f16db;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x2c);
    uVar6 = 1;
LAB_1418f1719:
    *(undefined1 *)(param_2 + 4) = uVar6;
  }
  else if (*(char *)(param_2 + 4) != '\0') {
    uVar6 = 0;
    goto LAB_1418f1719;
  }
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0xe) = uVar2;
  *(undefined4 *)(param_2 + 0x10) = uVar3;
  *(undefined4 *)(param_2 + 0x12) = uVar4;
  iVar1 = *(int *)(param_1 + 0x58);
  _Src = *(void **)(param_1 + 0x50);
  *(int *)(param_2 + 0x18) = iVar1;
  if (iVar1 == 0 && *(int *)(param_2 + 0x1a) == 0) {
    *(undefined4 *)(param_2 + 0x1a) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 0x14,iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_2 + 0x14),_Src,(longlong)iVar1 * 2);
    }
  }
LAB_1418f16db:
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + -4);
  *(undefined1 *)(param_2 + 4) = 1;
  return 1;
}



// FUNCTION 1418f1722 FUN_1418f1722 body=173 status=ok
// SIG undefined FUN_1418f1722(void)

void FUN_1418f1722(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b99ee50;
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1418f1779;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1418f1779:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f1791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f17d0 FUN_1418f17d0 body=29 status=ok
// SIG undefined FUN_1418f17d0(void)

undefined8 FUN_1418f17d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f17ee FUN_1418f17ee body=66 status=ok
// SIG undefined FUN_1418f17ee(void)

undefined8 * FUN_1418f17ee(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99ee70;
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



// FUNCTION 1418f1830 FUN_1418f1830 body=68 status=ok
// SIG undefined FUN_1418f1830(void)

undefined8 * FUN_1418f1830(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f040;
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



// FUNCTION 1418f1874 FUN_1418f1874 body=173 status=ok
// SIG undefined FUN_1418f1874(void)

void FUN_1418f1874(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b99f0f0;
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1418f18cb;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1418f18cb:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f18e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f1922 FUN_1418f1922 body=29 status=ok
// SIG undefined FUN_1418f1922(void)

undefined8 FUN_1418f1922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f1940 FUN_1418f1940 body=66 status=ok
// SIG undefined FUN_1418f1940(void)

undefined8 * FUN_1418f1940(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f180;
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



// FUNCTION 1418f1982 FUN_1418f1982 body=29 status=ok
// SIG undefined FUN_1418f1982(void)

undefined8 FUN_1418f1982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f19a0 FUN_1418f19a0 body=68 status=ok
// SIG undefined FUN_1418f19a0(void)

undefined8 * FUN_1418f19a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f390;
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



// FUNCTION 1418f19e4 FUN_1418f19e4 body=68 status=ok
// SIG undefined FUN_1418f19e4(void)

undefined8 * FUN_1418f19e4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f550;
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



// FUNCTION 1418f1a28 FUN_1418f1a28 body=66 status=ok
// SIG undefined FUN_1418f1a28(void)

undefined8 * FUN_1418f1a28(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99fb60;
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



// FUNCTION 1418f1a6a FUN_1418f1a6a body=66 status=ok
// SIG undefined FUN_1418f1a6a(void)

undefined8 * FUN_1418f1a6a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99fcc0;
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



// FUNCTION 1418f1aac FUN_1418f1aac body=29 status=ok
// SIG undefined FUN_1418f1aac(void)

undefined8 FUN_1418f1aac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f1aca FUN_1418f1aca body=66 status=ok
// SIG undefined FUN_1418f1aca(void)

undefined8 * FUN_1418f1aca(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99feb0;
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



// FUNCTION 1418f1b0c FUN_1418f1b0c body=29 status=ok
// SIG undefined FUN_1418f1b0c(void)

undefined8 FUN_1418f1b0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f1b2a FUN_1418f1b2a body=68 status=ok
// SIG undefined FUN_1418f1b2a(void)

undefined8 * FUN_1418f1b2a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a02b0;
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



// FUNCTION 1418f1b6e FUN_1418f1b6e body=68 status=ok
// SIG undefined FUN_1418f1b6e(void)

undefined8 * FUN_1418f1b6e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a0890;
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



// FUNCTION 1418f1bb2 FUN_1418f1bb2 body=132 status=ok
// SIG undefined FUN_1418f1bb2(void)

undefined8 FUN_1418f1bb2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      local_18 = DAT_14c8464f0;
      local_28 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_28 = *(undefined8 *)(lVar1 + 0x260);
      uStack_20 = *(undefined8 *)(lVar1 + 0x268);
      local_18 = *(undefined8 *)(lVar1 + 0x270);
    }
    uVar2 = FUN_14086aacd(param_2,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f1c40 FUN_1418f1c40 body=300 status=ok
// SIG undefined FUN_1418f1c40(void)

longlong * FUN_1418f1c40(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x100,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a1e70;
  plVar1 = plVar4 + 2;
  plVar4[2] = (longlong)&PTR_FUN_14ab67360;
  plVar4[3] = *param_3;
  lVar3 = param_3[1];
  plVar4[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b9a0de0;
  plVar4[0xe] = 0;
  *(undefined4 *)(plVar4 + 0xf) = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
  plVar4[0x12] = 0;
  *(undefined4 *)(plVar4 + 0x13) = 0;
  plVar4[0x18] = 0;
  *(undefined4 *)(plVar4 + 0x19) = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  *(undefined8 *)((longlong)plVar4 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar4 + 0xd4) = 0;
  plVar4[0x1c] = 0;
  *(undefined4 *)(plVar4 + 0x1d) = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  *(undefined4 *)(plVar4 + 9) = 0xffffffff;
  FUN_140c6a160(plVar1);
  FUN_140c6a768(plVar1);
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
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
  return param_2;
}



// FUNCTION 1418f1d6c FUN_1418f1d6c body=238 status=ok
// SIG undefined FUN_1418f1d6c(void)

void FUN_1418f1d6c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14092aa68(param_1,&local_30);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  plVar4 = *(longlong **)(param_1 + 0xe8);
  *(longlong **)(param_1 + 0xe8) = plVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 1418f1e6c FUN_1418f1e6c body=331 status=ok
// SIG undefined FUN_1418f1e6c(void)

void FUN_1418f1e6c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined1 *)(param_1 + 8);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = FUN_1406820ce();
  (**(code **)(*param_2 + 8))(param_2,uVar5,CONCAT71(uVar6,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  uVar5 = FUN_140682380();
  (**(code **)(*param_2 + 8))(param_2,uVar5,CONCAT71(uVar6,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined1 *)(param_1 + 0x18);
  uVar5 = FUN_1406821b4();
  (**(code **)(*param_2 + 8))(param_2,uVar5,CONCAT71(uVar6,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  uVar2 = *(undefined1 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined1 *)(param_1 + 0x38);
  uVar5 = FUN_14068229a();
  (**(code **)(*param_2 + 8))(param_2,uVar5,CONCAT71(uVar6,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  uVar2 = *(undefined1 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined1 *)(param_1 + 0x48);
  uVar5 = FUN_1409178de();
  (**(code **)(*param_2 + 8))(param_2,uVar5,CONCAT71(uVar6,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  uVar2 = *(undefined1 *)(param_1 + 0x60);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  uVar1 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined1 *)(param_1 + 0x58);
  uVar5 = FUN_1409177f8();
  (**(code **)(*param_2 + 8))(param_2,uVar5,CONCAT71(uVar6,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  return;
}



// FUNCTION 1418f1fb8 FUN_1418f1fb8 body=65 status=ok
// SIG undefined FUN_1418f1fb8(void)

void FUN_1418f1fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9a1008;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418f1ffa FUN_1418f1ffa body=85 status=ok
// SIG undefined FUN_1418f1ffa(void)

void FUN_1418f1ffa(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  
  lVar3 = FUN_140e9c38e();
  if (lVar3 != 0) {
    bVar1 = *(byte *)(param_1 + 8);
    bVar2 = *(byte *)(lVar3 + 0x208);
    bVar4 = ~(byte)(1 << (bVar1 & 0x1f)) & bVar2;
    *(byte *)(lVar3 + 0x208) = bVar4;
    if (bVar2 != bVar4) {
      FUN_140e9c2d2(lVar3 + 200,lVar3,bVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1418f2050 FUN_1418f2050 body=191 status=ok
// SIG undefined FUN_1418f2050(void)

void FUN_1418f2050(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 == '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = FUN_1406820ce();
    (**(code **)(*param_2 + 8))(param_2,uVar2,5,uVar1,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = FUN_1406821b4();
    (**(code **)(*param_2 + 8))(param_2,uVar2,5,uVar1,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = FUN_140682380();
    (**(code **)(*param_2 + 8))(param_2,uVar2,5,uVar1,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = FUN_14068229a();
    (**(code **)(*param_2 + 8))(param_2,uVar2,5,uVar1,0,0);
  }
  return;
}



// FUNCTION 1418f2110 FUN_1418f2110 body=631 status=ok
// SIG undefined FUN_1418f2110(void)

void FUN_1418f2110(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x20);
    lVar11 = (longlong)*(int *)(param_1 + 0x28) * 0x28;
    do {
      lVar7 = plVar10[1];
      if (lVar7 == 0) {
        uVar5 = FUN_14117f018();
        lVar7 = FUN_14477b664(uVar5);
        plVar10[1] = lVar7;
      }
      lVar12 = plVar10[2];
      if (lVar12 == 0) {
        if ((lVar7 != 0) && (*plVar10 != 0)) {
          plVar8 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
            plVar10[2] = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar12 = FUN_144aff482(uVar5,plVar10);
            plVar10[2] = lVar12;
            if (lVar12 != 0) goto LAB_1418f215d;
          }
        }
      }
      else {
LAB_1418f215d:
        lVar7 = *(longlong *)(lVar12 + 0x58);
        if (lVar7 == 0) {
          uVar5 = FUN_1465f8c9c();
          lVar7 = FUN_14477b664(uVar5);
          *(longlong *)(lVar12 + 0x58) = lVar7;
        }
        lVar6 = *(longlong *)(lVar12 + 0x60);
        if (lVar6 == 0) {
          if ((lVar7 != 0) && (*(longlong *)(lVar12 + 0x50) != 0)) {
            plVar8 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar8 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
              *(undefined8 *)(lVar12 + 0x60) = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
              lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar12 + 0x50));
              *(longlong *)(lVar12 + 0x60) = lVar6;
              if (lVar6 != 0) goto LAB_1418f2177;
            }
          }
        }
        else {
LAB_1418f2177:
          plVar8 = *(longlong **)(lVar6 + 0x18);
          if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
          }
          FUN_1447a1fc0(plVar8);
          plVar8 = *(longlong **)(lVar6 + 0x18);
          pcVar3 = *(code **)(*plVar8 + 0x28);
          if (pcVar3 == FUN_14482841c) {
            plVar9 = plVar8 + 3;
            if (plVar8[5] != 0) {
              plVar9 = (longlong *)(plVar8[5] + 8);
            }
          }
          else if (pcVar3 == (code *)&LAB_14010c34c) {
            plVar9 = plVar8 + 2;
          }
          else {
            plVar9 = (longlong *)(*pcVar3)(plVar8);
          }
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447a1bd6(param_2,iVar2);
          }
          lVar7 = *param_2;
          lVar12 = (longlong)iVar2 * 0x10;
          puVar1 = (undefined8 *)(lVar7 + lVar12);
          *(undefined8 *)(lVar7 + lVar12) = 0;
          iVar2 = (int)plVar9[1];
          _Src = (void *)*plVar9;
          *(int *)(lVar7 + 8 + lVar12) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar2,0);
            memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      plVar10 = plVar10 + 5;
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 1418f238e FUN_1418f238e body=511 status=ok
// SIG undefined FUN_1418f238e(void)

void FUN_1418f238e(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong *local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_1 + 0x2528) = 1;
  if ((*param_2 != 0) && (*(longlong *)(param_1 + 0x2520) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x2250);
    if (lVar5 == 0) {
      local_58 = *(undefined8 *)(param_1 + 0x2240);
      lVar5 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2250) = lVar5;
      if (lVar5 == 0) goto LAB_1418f2523;
    }
    cVar3 = FUN_144a7c5f6(lVar5 + 0x98);
    if (cVar3 == '\0') {
      FUN_14142865e(*(undefined8 *)(param_1 + 0x2520),lVar5 + 0x98);
    }
    else {
      puVar7 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(lVar5 + 8);
      }
      FUN_1447a97f4(&local_58,puVar7);
      if ((((int)local_58 != 0) && (local_58._4_4_ != 0)) && ((int)local_58 != DAT_14c948000)) {
        local_68 = (undefined2 *)0x0;
        uStack_60 = 0;
        FUN_1400b2348(&local_58,&local_68,1);
        uVar2 = *(undefined8 *)(param_1 + 0x2520);
        uVar8 = (longlong)(int)uStack_60 * 2;
        do {
          if (uVar8 == 0) {
            uVar6 = 0;
            goto LAB_1418f2487;
          }
          uVar1 = uVar8 - 2;
          lVar5 = uVar8 - 2;
          uVar8 = uVar1;
        } while (*(short *)((longlong)local_68 + lVar5) != 0x2e);
        uVar6 = (int)(uVar1 >> 1) + 1;
LAB_1418f2487:
        uVar9 = (int)uStack_60 - 1;
        puVar4 = local_68;
        if ((int)uStack_60 == 0) {
          puVar4 = &DAT_149dfb77a;
          uVar9 = 0;
        }
        if ((int)uVar9 <= (int)uVar6) {
          uVar6 = uVar9;
        }
        uVar8 = (ulonglong)uVar6;
        if ((int)uVar6 < 1) {
          uVar8 = 0;
        }
        FUN_14006620a(local_88,puVar4 + uVar8,uVar9 - (int)uVar8);
        FUN_140233b1a(local_78,local_88);
        FUN_14142865e(uVar2,local_78);
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1418f2523:
  FUN_140e8fbe2(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f258e FUN_1418f258e body=26 status=ok
// SIG undefined FUN_1418f258e(void)

void FUN_1418f258e(undefined8 param_1)

{
  FUN_140e02c44();
  FUN_1447210f0(param_1);
  return;
}



// FUNCTION 1418f25a8 FUN_1418f25a8 body=437 status=ok
// SIG undefined FUN_1418f25a8(void)

void FUN_1418f25a8(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  void *_Src;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  ulonglong uStack_48;
  undefined2 *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar3 = FUN_144a80a00(puVar8,L"Loader");
  if (iVar3 != 0) {
    local_40 = (undefined2 *)0x0;
    uVar2 = *(uint *)(param_2 + 1);
    _Src = (void *)*param_2;
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_38 = (ulonglong)uVar2;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_40,uVar2,0);
      memcpy(local_40,_Src,(longlong)(int)uVar2 * 2);
      _Src = (void *)*param_2;
      iVar3 = *(int *)(param_2 + 1);
    }
    uVar9 = (longlong)iVar3 * 2;
    do {
      if (uVar9 == 0) goto LAB_1418f2695;
      uVar1 = uVar9 - 2;
      lVar5 = uVar9 - 2;
      uVar9 = uVar1;
    } while (*(short *)((longlong)_Src + lVar5) != 0x2f);
    iVar7 = (int)(uVar1 >> 1);
    if (iVar7 != -1) {
      iVar4 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      if ((-2 < iVar7) && (iVar7 + 1 < iVar4)) {
        FUN_140056680(&local_50,(void *)((longlong)_Src + (longlong)(iVar7 + 1) * 2));
        if (local_40 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_40 = local_50;
        uStack_38 = uStack_48;
      }
    }
LAB_1418f2695:
    puVar8 = local_40;
    if ((int)uStack_38 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar8,1);
    FUN_1405f0c40(DAT_14cb84f20,&local_50,local_58);
    lVar5 = FUN_1413e2d1a(&local_50);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_145d1453e(lVar5);
      if ((*(longlong *)(param_1 + 0xb0) != *plVar6) || (*(int *)(param_1 + 0xb8) != (int)plVar6[1])
         ) {
        *(longlong *)(param_1 + 0xb0) = *plVar6;
        *(int *)(param_1 + 0xb8) = (int)plVar6[1];
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f275e FUN_1418f275e body=290 status=ok
// SIG undefined FUN_1418f275e(void)

ulonglong FUN_1418f275e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  double *pdVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((param_1 != 0) && (plVar4 = (longlong *)*param_2, plVar4 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar4 + 0x58))(plVar4);
    if ((cVar6 != '\0') &&
       ((lVar5 = plVar4[0xf], lVar5 != 0 && (*(char *)(lVar5 + 0x28) == '\x01')))) {
      dVar11 = *(double *)(lVar5 + 0x10);
      dVar12 = *(double *)(lVar5 + 0x18);
      dVar3 = *(double *)(lVar5 + 0x20);
      lVar7 = FUN_140cb9f34();
      lVar5 = *(longlong *)(param_1 + 0x1c8);
      if (lVar5 == 0) {
        pdVar8 = (double *)&DAT_14c8464e0;
        dVar10 = DAT_14c8464f0;
      }
      else {
        pdVar8 = (double *)(lVar5 + 0x260);
        dVar10 = *(double *)(lVar5 + 0x270);
      }
      dVar10 = dVar10 - dVar3;
      dVar11 = *pdVar8 - dVar11;
      dVar12 = pdVar8[1] - dVar12;
      uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                       SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12) <
                       (double)*(float *)(lVar7 + 0x30));
      goto LAB_1418f2829;
    }
  }
  uVar9 = 0;
LAB_1418f2829:
  plVar4 = (longlong *)param_2[1];
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
  return uVar9 & 0xffffffff;
}



// FUNCTION 1418f2880 FUN_1418f2880 body=156 status=ok
// SIG undefined FUN_1418f2880(void)

undefined8 * FUN_1418f2880(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f291c FUN_1418f291c body=269 status=ok
// SIG undefined FUN_1418f291c(void)

void FUN_1418f291c(longlong param_1,int param_2)

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



// FUNCTION 1418f2a2a FUN_1418f2a2a body=172 status=ok
// SIG undefined FUN_1418f2a2a(void)

void FUN_1418f2a2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b9a2400;
  plVar3 = *(longlong **)(param_1 + 0xb8);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b9a24d0;
  FUN_14104ad00(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
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
  FUN_14024cf5a(param_1 + 0x10);
  return;
}



// FUNCTION 1418f2ad6 FUN_1418f2ad6 body=29 status=ok
// SIG undefined FUN_1418f2ad6(void)

undefined8 FUN_1418f2ad6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f2af4 FUN_1418f2af4 body=183 status=ok
// SIG undefined FUN_1418f2af4(void)

void FUN_1418f2af4(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_1 + 0x98);
  local_38 = param_1;
  (**(code **)(*param_2 + 0x20))(param_2);
  uVar3 = (ulonglong)*(int *)(param_1 + 0x98);
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 << 5;
    do {
      lVar4 = lVar4 + -0x20;
      if (*(int *)(param_1 + 0x88) < 1) break;
      cVar2 = (**(code **)(*param_2 + 0x28))(param_2,*(longlong *)(param_1 + 0x90) + lVar4);
      if (cVar2 != '\0') {
        FUN_148e0ed1e(param_1,(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  FUN_14104ad2a(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f2bac FUN_1418f2bac body=381 status=ok
// SIG undefined FUN_1418f2bac(void)

void FUN_1418f2bac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x70);
  lVar8 = *(longlong *)(lVar4 + 0x40);
  if (lVar8 == 0) {
    uVar7 = FUN_145cd9fe6();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar4 + 0x40) = lVar8;
  }
  if (((*(longlong *)(lVar4 + 0x48) == 0) && (lVar8 != 0)) && (*(longlong *)(lVar4 + 0x38) != 0)) {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
      uVar7 = FUN_144aff482(uVar7,(longlong *)(lVar4 + 0x38));
    }
    *(undefined8 *)(lVar4 + 0x48) = uVar7;
  }
  FUN_140bbbdc0(uVar3,&local_40);
  plVar1 = local_38;
  *(undefined8 *)(param_1 + 0xa0) = local_40;
  local_40 = 0;
  plVar5 = *(longlong **)(param_1 + 0xa8);
  if (local_38 != plVar5) {
    local_38 = (longlong *)0x0;
    *(longlong **)(param_1 + 0xa8) = plVar1;
    if (plVar5 == (longlong *)0x0) goto LAB_1418f2c35;
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
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_1418f2c35:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f2d40 FUN_1418f2d40 body=50 status=ok
// SIG undefined FUN_1418f2d40(void)

void FUN_1418f2d40(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14104ae62();
  if (lVar1 != 0) {
    FUN_14104ada0(param_1,lVar1 + 0x6890,1);
    return;
  }
  return;
}



// FUNCTION 1418f2d72 FUN_1418f2d72 body=29 status=ok
// SIG undefined FUN_1418f2d72(void)

undefined8 FUN_1418f2d72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f2d90 FUN_1418f2d90 body=29 status=ok
// SIG undefined FUN_1418f2d90(void)

undefined8 FUN_1418f2d90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f2dae FUN_1418f2dae body=123 status=ok
// SIG undefined FUN_1418f2dae(void)

void FUN_1418f2dae(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x74))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_14480f766(lVar2 + 0x42b8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1418f2e2a FUN_1418f2e2a body=68 status=ok
// SIG undefined FUN_1418f2e2a(void)

undefined8 * FUN_1418f2e2a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a2c30;
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



// FUNCTION 1418f2e6e FUN_1418f2e6e body=353 status=ok
// SIG undefined FUN_1418f2e6e(void)

void FUN_1418f2e6e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418f2ef3;
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
LAB_1418f2ef3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418f2fd0 FUN_1418f2fd0 body=322 status=ok
// SIG undefined FUN_1418f2fd0(void)

undefined8 FUN_1418f2fd0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = (longlong)param_2 * 0x98;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1418f3035;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar8 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
  }
LAB_1418f3035:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  uVar5 = SUB168(auVar3 * ZEXT816(0xd79435e50d79435f),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar4 / 0x98)) {
    uVar8 = uVar4 / 0x98 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar5 = FUN_1446f8d3c(param_1,0,uVar8,0x98,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar5;
}



// FUNCTION 1418f3112 FUN_1418f3112 body=607 status=ok
// SIG undefined FUN_1418f3112(void)

void FUN_1418f3112(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1418f330b;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1418f330b:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f3372 FUN_1418f3372 body=91 status=ok
// SIG undefined FUN_1418f3372(void)

void FUN_1418f3372(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x16];
  if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    (**(code **)(*param_1 + 0x720))(param_1,0);
  }
  FUN_1448aa298(param_1);
  return;
}



// FUNCTION 1418f33ce FUN_1418f33ce body=476 status=ok
// SIG undefined FUN_1418f33ce(void)

void FUN_1418f33ce(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_1447210f0();
  if ((((lVar6 != 0) && (lVar4 = *(longlong *)(param_1 + 0x2640), lVar4 != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x2648), iVar1 - 1U < 0xfffffffe)) &&
     (0 < *(int *)(lVar6 + 0x238))) {
    lVar8 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(lVar6 + 0x230) + 4 + lVar8 * 8);
      if (((iVar2 != 0) &&
          (uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x230) + lVar8 * 8), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar2)) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar5 = *plVar7, lVar5 != 0)))) {
          if (DAT_14cbadd90 == 0) {
            local_60 = &local_40;
            local_40 = FUN_141030f22;
            local_50 = FUN_14081d0ea;
            local_58 = &LAB_1459f2e4c;
            local_68 = &LAB_148c39de3;
            local_70 = &LAB_1457a9eb2;
            local_78 = &DAT_149e063b2;
            local_80 = 0;
            local_88 = 0x10000004;
            local_90 = 0x10;
            local_98 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
              (*(longlong *)(lVar5 + 0x23c0) == lVar4)) && (*(int *)(lVar5 + 0x23c8) == iVar1)) {
            FUN_141446872(param_1,lVar5,1);
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)(lVar6 + 0x238));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f35ac FUN_1418f35ac body=48 status=ok
// SIG undefined FUN_1418f35ac(void)

void FUN_1418f35ac(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b9a3d08);
  FUN_140975a5e(param_1,param_2);
  return;
}



// FUNCTION 1418f35dc FUN_1418f35dc body=46 status=ok
// SIG undefined FUN_1418f35dc(void)

void FUN_1418f35dc(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 1418f360a FUN_1418f360a body=112 status=ok
// SIG undefined FUN_1418f360a(void)

void FUN_1418f360a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 != 0) && (*(longlong *)(param_1 + 0x2250) == 0)) {
    local_20 = *(undefined8 *)(param_1 + 0x2240);
    uVar1 = FUN_14050aea0();
    *(undefined8 *)(param_1 + 0x2250) = uVar1;
  }
  FUN_140e8fbe2(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f367c FUN_1418f367c body=356 status=ok
// SIG undefined FUN_1418f367c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418f367c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)FUN_14001cc68(0x198,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b9a59f0;
  FUN_140effda4(plVar2 + 2,param_1,param_3);
  plVar4 = plVar2 + 2;
  *plVar4 = (longlong)&PTR_FUN_14b9a40a0;
  plVar2[0x30] = param_1;
  plVar2[0x31] = 0;
  *(undefined4 *)(plVar2 + 0x32) = 0xffffffff;
  if ((plVar4 == (longlong *)0x0) ||
     (((plVar2[3] != 0 && (plVar2[4] != 0)) && (0 < *(int *)(plVar2[4] + 8))))) {
    *param_2 = plVar4;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1418f3732;
  }
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_1418f37b4;
LAB_1418f379c:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar5 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_1418f37b4:
      *param_2 = plVar4;
      param_2[1] = plVar2;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar4;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar5 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_1418f379c;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
  LOCK();
  plVar5 = plVar2 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *param_2 = plVar4;
  param_2[1] = plVar2;
LAB_1418f3732:
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
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
  return param_2;
}



// FUNCTION 1418f37e0 FUN_1418f37e0 body=373 status=ok
// SIG undefined FUN_1418f37e0(void)

void FUN_1418f37e0(longlong param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_3 == '\x01') &&
       (lVar5 = *(longlong *)(param_1 + 0x38), *(char *)(lVar5 + 0x178) == '\x03')) && (lVar5 != 0))
     && (*(char *)(*(longlong *)(param_1 + 0x170) + 0x440) != '\0')) {
    uVar3 = FUN_14136bb9a();
    plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x170);
      local_98[0] = 0;
      local_70 = 0;
      FUN_1456bb102(local_98,*(undefined8 *)(param_1 + 0x38));
      FUN_1448729ea(lVar5 + 0x448,local_68,local_98);
      uVar7 = FUN_144a7b41a(local_68,0x3f800000);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar6 = local_68;
        if (0x18 < local_50) {
          pppuVar6 = (undefined8 ***)local_68[0];
        }
        (*pcVar1)(pppuVar6);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      FUN_144a5ac3a(local_98);
      lVar5 = FUN_14105ddea(*(undefined8 *)(param_1 + 0x38));
      if (lVar5 != 0) {
        uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
        cVar2 = FUN_14136bc80(uVar3,lVar5,uVar7);
        if (cVar2 != '\0') goto LAB_1418f381b;
      }
      FUN_1410c9a0e(param_1,0);
    }
  }
LAB_1418f381b:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f3956 FUN_1418f3956 body=199 status=ok
// SIG undefined FUN_1418f3956(void)

longlong * FUN_1418f3956(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b9a5be0;
  plVar3[3] = param_1;
  plVar3[4] = param_3;
  *(undefined2 *)(plVar3 + 5) = 0;
  *(byte *)((longlong)plVar3 + 0x2a) = *(byte *)((longlong)plVar3 + 0x2a) & 0xfc;
  plVar3[8] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x34) = 0;
  *(undefined2 *)((longlong)plVar3 + 0x3c) = 0;
  plVar3[9] = -1;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b9a4390;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar3 + 100) = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = param_1;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 1418f3a1e FUN_1418f3a1e body=318 status=ok
// SIG undefined FUN_1418f3a1e(void)

void FUN_1418f3a1e(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f3b88 FUN_1418f3b88 body=578 status=ok
// SIG undefined FUN_1418f3b88(void)

void FUN_1418f3b88(undefined8 param_1,longlong *param_2,undefined4 param_3,int param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  int local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb94538 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb94538 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148a18249;
        local_50 = FUN_14657713c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb94538);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x18))();
        if ((param_4 < 0) || (*(int *)(lVar3 + 0xa8) <= param_4)) {
          local_78 = (uint)local_78._1_3_ << 8;
          FUN_140e16d82(lVar3,*param_5,param_3,0);
        }
        else {
          local_70 = local_70 & 0xffffff00;
          local_78 = (uint)local_78._1_3_ << 8;
          FUN_1413e01ba(lVar3,param_4,*param_5,param_3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f3dcc FUN_1418f3dcc body=760 status=ok
// SIG undefined FUN_1418f3dcc(void)

ulonglong FUN_1418f3dcc(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = FUN_140714c1e(param_1 + 0x180,*(undefined4 *)(param_1 + 0x70));
  uVar9 = (ulonglong)uVar6;
  if ((char)uVar6 != '\0') {
    lVar14 = *(longlong *)(param_1 + 0xb8);
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
    if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
      lVar15 = (longlong)*(int *)(param_1 + 0xc0) * 0x70 + lVar14;
      do {
        FUN_1400021e4(lVar14 + 0x20,&local_78);
        lVar3 = local_78;
        iVar4 = (int)uStack_70;
        uVar6 = (int)uStack_70 - 1;
        if ((int)uStack_70 == 0) {
          uVar6 = 0;
        }
        if (0 < (int)uVar6) {
          uVar7 = 0;
          do {
            uVar1 = *(ushort *)(local_78 + uVar7 * 2);
            *(ushort *)(local_78 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
            uVar7 = uVar7 + 1;
          } while (uVar6 != uVar7);
        }
        local_78 = 0;
        uStack_70 = 0;
        if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
          plVar11 = *(longlong **)(param_1 + 0x1d0);
          plVar8 = plVar11 + (longlong)*(int *)(param_1 + 0x1d8) * 2;
LAB_1418f3eec:
          if ((int)plVar11[1] == iVar4) {
            local_89 = (undefined1)uVar9;
            bVar12 = 0x10;
            if (1 < iVar4) {
              lVar10 = 0;
              do {
                uVar1 = *(ushort *)(*plVar11 + lVar10);
                uVar2 = *(ushort *)(lVar3 + lVar10);
                uVar9 = (ulonglong)uVar2;
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar13 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_1418f3fb0;
                  }
                  uVar9 = (ulonglong)(uint)uVar2;
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar9]) goto LAB_1418f3fad;
                }
                lVar10 = lVar10 + 2;
              } while( true );
            }
            uVar9 = CONCAT71((int7)(uVar9 >> 8),local_89);
          }
          else {
            if ((int)plVar11[1] + iVar4 != 1) goto LAB_1418f3efe;
            bVar12 = 0x10;
          }
          goto LAB_1418f3ea7;
        }
        bVar12 = 0;
LAB_1418f3ea7:
        *(byte *)(lVar14 + 0x42) = *(byte *)(lVar14 + 0x42) & 0xef | bVar12;
        if ((lVar3 != 0) && (FUN_1400020a8(), local_78 != 0)) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + 0x70;
      } while (lVar14 != lVar15);
    }
    if ((-1 < *(int *)(param_1 + 0xd0)) && (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xc0))) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      if ((longlong)*(int *)(param_1 + 0x110) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x108);
        lVar15 = (longlong)*(int *)(param_1 + 0x110) * 0x70 + lVar14;
        do {
          FUN_1400021e4(lVar14,&local_88);
          uStack_70 = uStack_80;
          uVar6 = (int)uStack_80 - 1;
          if ((int)uStack_80 == 0) {
            uVar6 = 0;
          }
          if (0 < (int)uVar6) {
            uVar7 = 0;
            do {
              uVar1 = *(ushort *)(local_88 + uVar7 * 2);
              *(ushort *)(local_88 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
              uVar7 = uVar7 + 1;
            } while (uVar6 != uVar7);
          }
          local_78 = local_88;
          local_88 = 0;
          uStack_80 = 0;
          cVar5 = FUN_144a23846(param_1 + 0x1d0,&local_78);
          *(byte *)(lVar14 + 0x62) = *(byte *)(lVar14 + 0x62) & 0xef | cVar5 << 4;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 0x70;
        } while (lVar14 != lVar15);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
LAB_1418f3fad:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[uVar9];
LAB_1418f3fb0:
  uVar9 = CONCAT71((int7)(uVar9 >> 8),local_89);
  if (iVar13 == 0) goto LAB_1418f3ea7;
LAB_1418f3efe:
  plVar11 = plVar11 + 2;
  bVar12 = 0;
  if (plVar11 == plVar8) goto LAB_1418f3ea7;
  goto LAB_1418f3eec;
}



// FUNCTION 1418f40c6 FUN_1418f40c6 body=30 status=ok
// SIG undefined FUN_1418f40c6(void)

void FUN_1418f40c6(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418f40e4 FUN_1418f40e4 body=33 status=ok
// SIG undefined FUN_1418f40e4(void)

undefined8 FUN_1418f40e4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14011be0c();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_144a7ba4c(lVar1);
  return uVar2;
}



// FUNCTION 1418f4106 FUN_1418f4106 body=49 status=ok
// SIG undefined FUN_1418f4106(void)

void FUN_1418f4106(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001418f4133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 1418f4138 FUN_1418f4138 body=30 status=ok
// SIG undefined FUN_1418f4138(void)

void FUN_1418f4138(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418f4166 FUN_1418f4166 body=30 status=ok
// SIG undefined FUN_1418f4166(void)

void FUN_1418f4166(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418f4184 FUN_1418f4184 body=34 status=ok
// SIG undefined FUN_1418f4184(void)

undefined8 FUN_1418f4184(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x14);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x3d0);
  }
  return uVar2;
}



// FUNCTION 1418f41a6 FUN_1418f41a6 body=25 status=ok
// SIG undefined FUN_1418f41a6(void)

void FUN_1418f41a6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140059518(param_1 + 0x14);
  FUN_1404960a8(uVar1);
  return;
}



// FUNCTION 1418f41c0 FUN_1418f41c0 body=30 status=ok
// SIG undefined FUN_1418f41c0(void)

void FUN_1418f41c0(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418f41de FUN_1418f41de body=49 status=ok
// SIG undefined FUN_1418f41de(void)

void FUN_1418f41de(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001418f420b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 1418f4210 FUN_1418f4210 body=30 status=ok
// SIG undefined FUN_1418f4210(void)

void FUN_1418f4210(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418f422e FUN_1418f422e body=343 status=ok
// SIG undefined FUN_1418f422e(void)

void FUN_1418f422e(longlong param_1,uint param_2)

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
    uVar3 = (ulonglong)param_2 * 0xf8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x85) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418f429a;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0xfffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1418f429a:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0xf8)) {
      uVar4 = uVar3 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xf8,8);
  }
  return;
}



// FUNCTION 1418f4386 FUN_1418f4386 body=101 status=ok
// SIG undefined FUN_1418f4386(void)

void FUN_1418f4386(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a5780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f43ec FUN_1418f43ec body=110 status=ok
// SIG undefined FUN_1418f43ec(void)

void FUN_1418f43ec(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418f445a FUN_1418f445a body=29 status=ok
// SIG undefined FUN_1418f445a(void)

undefined8 FUN_1418f445a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f4478 FUN_1418f4478 body=29 status=ok
// SIG undefined FUN_1418f4478(void)

undefined8 FUN_1418f4478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f4496 FUN_1418f4496 body=100 status=ok
// SIG undefined FUN_1418f4496(void)

void FUN_1418f4496(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1468) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x13f8;
  do {
    if (*(longlong *)(param_1 + 0x30 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x68;
  } while (lVar1 != -0x58);
  return;
}



// FUNCTION 1418f44fa FUN_1418f44fa body=45 status=ok
// SIG undefined FUN_1418f44fa(void)

void FUN_1418f44fa(longlong param_1)

{
  FUN_140dcb5a6(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418f4528 FUN_1418f4528 body=29 status=ok
// SIG undefined FUN_1418f4528(void)

undefined8 FUN_1418f4528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f4546 FUN_1418f4546 body=340 status=ok
// SIG undefined FUN_1418f4546(void)

void FUN_1418f4546(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x88;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xf1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418f45b6;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xfffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1418f45b6:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x88)) {
      uVar3 = uVar4 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x88,8);
  }
  return;
}



// FUNCTION 1418f469a FUN_1418f469a body=363 status=ok
// SIG undefined FUN_1418f469a(void)

void FUN_1418f469a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418f4730;
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
LAB_1418f4730:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1418f4806 FUN_1418f4806 body=71 status=ok
// SIG undefined FUN_1418f4806(void)

undefined8 * FUN_1418f4806(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1418f484e FUN_1418f484e body=80 status=ok
// SIG undefined FUN_1418f484e(void)

bool FUN_1418f484e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145917388(param_1,iVar1);
  }
  FUN_1413505e4((longlong)iVar1 * 0x430 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return iVar1 != -1;
}



// FUNCTION 1418f489e FUN_1418f489e body=311 status=ok
// SIG undefined FUN_1418f489e(void)

undefined8 FUN_1418f489e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar1 = FUN_140c154c8(lVar1);
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x170);
        goto LAB_1418f4911;
      }
    }
  }
  uVar2 = 0;
LAB_1418f4911:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f49d6 FUN_1418f49d6 body=190 status=ok
// SIG undefined FUN_1418f49d6(void)

undefined8 * FUN_1418f49d6(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6294) {
    FUN_144b3d300(&DAT_14cbd6294);
    if (DAT_14cbd6294 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"nged",5);
      builtin_wcsncpy(local_48 + 8,L"yNameCha",8);
      builtin_wcsncpy(local_48,L"OnDispla",8);
      FUN_1446f470e(&DAT_14cbd628c,local_48,1);
      _Init_thread_footer(&DAT_14cbd6294);
    }
  }
  *param_1 = DAT_14cbd628c;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f4a96 FUN_1418f4a96 body=441 status=ok
// SIG undefined FUN_1418f4a96(void)

void FUN_1418f4a96(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 != 0) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x58) + 8;
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar3 = FUN_140e8a950(lVar5,param_4);
      if (cVar3 != '\0') {
        if ((lVar5 != 8) && (param_3 == '\0')) {
          FUN_1402815f4(param_1,&local_48);
          puVar2 = *(undefined8 **)(local_48 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
          *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar6 = (int *)((longlong)local_40 + 0xc);
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (*piVar6 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
              }
            }
          }
          iVar4 = *(int *)(lVar5 + 8);
          piVar6 = (int *)*puVar2;
          *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 2;
          if ((longlong)*(int *)(puVar2 + 1) == 0) goto LAB_1418f4be2;
          lVar7 = (longlong)*(int *)(puVar2 + 1) * 0xd8;
          goto LAB_1418f4b74;
        }
        break;
      }
      lVar5 = lVar5 + 0x88;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar6 = piVar6 + 0x36;
    lVar7 = lVar7 + -0xd8;
    if (lVar7 == 0) break;
LAB_1418f4b74:
    if (*piVar6 == iVar4) {
      if (piVar6 == (int *)0x0) break;
      FUN_141178df0(piVar6);
      lVar7 = FUN_1447210f0(param_4);
      fVar8 = (float)*(double *)(lVar7 + 0x6d0);
      if (((float)piVar6[0x28] != fVar8) || (NAN((float)piVar6[0x28]) || NAN(fVar8))) {
        iVar4 = piVar6[0x29] + 1;
LAB_1418f4bc2:
        piVar6[0x28] = (int)fVar8;
        piVar6[0x29] = iVar4;
      }
      else if (piVar6[0x29] == 0) {
        iVar4 = 1;
        goto LAB_1418f4bc2;
      }
      if ((char)piVar6[0x1e] == '\0') {
        iVar4 = piVar6[0x1f] + 1;
      }
      else {
        if (piVar6[0x1f] != 0) break;
        iVar4 = 1;
      }
      *(undefined1 *)(piVar6 + 0x1e) = 1;
      piVar6[0x1f] = iVar4;
      break;
    }
  }
LAB_1418f4be2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1418f4c66 FUN_1418f4c66 body=417 status=ok
// SIG undefined FUN_1418f4c66(void)

void FUN_1418f4c66(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_5 != 0) && (param_3 == '\0')) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x58) + 8;
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar3 = FUN_140e8a950(lVar6,param_5);
      if (cVar3 != '\0') {
        if (lVar6 != 8) {
          FUN_1402815f4(param_1,&local_38);
          puVar2 = *(undefined8 **)(local_38 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
          *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar4 = (int *)((longlong)local_30 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*local_30 + 0x10))(local_30);
              }
            }
          }
          iVar5 = *(int *)(lVar6 + 8);
          piVar4 = (int *)*puVar2;
          *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 2;
          if ((longlong)*(int *)(puVar2 + 1) == 0) goto LAB_1418f4d8d;
          lVar7 = (longlong)*(int *)(puVar2 + 1) * 0xd8;
          goto LAB_1418f4d42;
        }
        break;
      }
      lVar6 = lVar6 + 0x88;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar4 = piVar4 + 0x36;
    lVar7 = lVar7 + -0xd8;
    if (lVar7 == 0) break;
LAB_1418f4d42:
    if (*piVar4 == iVar5) {
      if (piVar4 == (int *)0x0) break;
      if ((char)piVar4[0x1e] == '\0') {
        if (piVar4[0x1f] == 0) {
          iVar5 = 1;
          goto LAB_1418f4daf;
        }
      }
      else {
        iVar5 = piVar4[0x1f] + 1;
LAB_1418f4daf:
        *(undefined1 *)(piVar4 + 0x1e) = 0;
        piVar4[0x1f] = iVar5;
      }
      if (((float)piVar4[0x2a] != 0.0) || (NAN((float)piVar4[0x2a]))) {
        iVar5 = piVar4[0x2b] + 1;
      }
      else {
        if (piVar4[0x2b] != 0) break;
        iVar5 = 1;
      }
      piVar4[0x2a] = 0;
      piVar4[0x2b] = iVar5;
      break;
    }
  }
LAB_1418f4d8d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1418f4e1c FUN_1418f4e1c body=43 status=ok
// SIG undefined FUN_1418f4e1c(void)

void FUN_1418f4e1c(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1418f4e48 FUN_1418f4e48 body=357 status=ok
// SIG undefined FUN_1418f4e48(void)

undefined8 FUN_1418f4e48(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (plVar3 = *(longlong **)(lVar1 + 0xf48), plVar3 != (longlong *)0x0)) {
      uVar2 = FUN_1401fa540();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_1401fa540();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
          lVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            uVar2 = 1;
            goto LAB_1418f4ea5;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_1418f4ea5:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f4fae FUN_1418f4fae body=275 status=ok
// SIG undefined FUN_1418f4fae(void)

void FUN_1418f4fae(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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



// FUNCTION 1418f50c2 FUN_1418f50c2 body=101 status=ok
// SIG undefined FUN_1418f50c2(void)

void FUN_1418f50c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a7dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5128 FUN_1418f5128 body=545 status=ok
// SIG undefined FUN_1418f5128(void)

void FUN_1418f5128(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x160;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x15c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x158 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1418f5304;
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
LAB_1418f5304:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f534a FUN_1418f534a body=600 status=ok
// SIG undefined FUN_1418f534a(void)

void FUN_1418f534a(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x50;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x4c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x48 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1418f5544;
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
LAB_1418f5544:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f55a4 FUN_1418f55a4 body=230 status=ok
// SIG undefined FUN_1418f55a4(void)

int * FUN_1418f55a4(longlong *param_1,int *param_2)

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



// FUNCTION 1418f568a FUN_1418f568a body=101 status=ok
// SIG undefined FUN_1418f568a(void)

void FUN_1418f568a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f56f0 FUN_1418f56f0 body=101 status=ok
// SIG undefined FUN_1418f56f0(void)

void FUN_1418f56f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a99d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5756 FUN_1418f5756 body=101 status=ok
// SIG undefined FUN_1418f5756(void)

void FUN_1418f5756(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a9da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f57bc FUN_1418f57bc body=101 status=ok
// SIG undefined FUN_1418f57bc(void)

void FUN_1418f57bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9aa200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5822 FUN_1418f5822 body=101 status=ok
// SIG undefined FUN_1418f5822(void)

void FUN_1418f5822(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9aa510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9aa4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5888 FUN_1418f5888 body=101 status=ok
// SIG undefined FUN_1418f5888(void)

void FUN_1418f5888(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9aa580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f58ee FUN_1418f58ee body=297 status=ok
// SIG undefined FUN_1418f58ee(void)

undefined8 FUN_1418f58ee(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    if (iVar1 == 2) goto LAB_1418f5a10;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418f5a10;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1418f5a10:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418f59bb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1418f59bb;
    }
  }
  uVar6 = 0;
LAB_1418f59bb:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f5a18 FUN_1418f5a18 body=101 status=ok
// SIG undefined FUN_1418f5a18(void)

void FUN_1418f5a18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9aa6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5a7e FUN_1418f5a7e body=101 status=ok
// SIG undefined FUN_1418f5a7e(void)

void FUN_1418f5a7e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9aac80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5ae4 FUN_1418f5ae4 body=440 status=ok
// SIG undefined FUN_1418f5ae4(void)

longlong FUN_1418f5ae4(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar5 != '\0') {
    plVar9 = (longlong *)(*(int *)(param_1 + 0x18) + param_3);
    iVar10 = 0;
    local_60 = 0;
    local_68 = (ulonglong *)0x0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_68,&local_60);
    uVar3 = local_60;
    puVar2 = local_68;
    local_4c = (uint)local_60;
    local_58 = local_68;
    if (0 < (int)(uint)local_60) {
      iVar10 = 0;
      uVar8 = 0x7fffffff;
      uVar6 = (uint)local_60;
      do {
        if (uVar8 == 0) {
          iVar10 = -1;
          break;
        }
        iVar4 = iVar10;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
           (uVar7 = uVar8, 7 < (int)uVar8)) {
          while (uVar8 = uVar7, iVar4 = iVar10, local_4c = uVar6,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            iVar10 = iVar10 + 8;
            local_4c = uVar6 - 8;
            uVar8 = uVar7 - 8;
            bVar1 = (int)uVar6 < 0x10;
            uVar6 = local_4c;
            iVar4 = iVar10;
            if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar8, bVar1)) break;
          }
        }
LAB_1418f5bde:
        do {
          iVar10 = iVar4;
          if (((int)uVar6 < 1) || ((int)uVar8 < 1)) break;
          uVar7 = FUN_14003e942(&local_58,&local_4c);
          uVar6 = local_4c;
          if (uVar7 < 0x10000) {
            uVar8 = uVar8 - 1;
            iVar4 = iVar10 + 1;
            if (0x7f < uVar7) goto LAB_1418f5bde;
          }
          else {
            if (1 < uVar8) {
              uVar8 = uVar8 - 2;
              iVar4 = iVar10 + 2;
              goto LAB_1418f5bde;
            }
            uVar8 = 0;
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar10;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar6);
    }
    FUN_1409ee492(plVar9,iVar10 + 1,1);
    *(undefined2 *)(*plVar9 + (longlong)iVar10 * 2) = 0;
    FUN_1446e71a3(*plVar9,(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f5c9e FUN_1418f5c9e body=101 status=ok
// SIG undefined FUN_1418f5c9e(void)

void FUN_1418f5c9e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5d04 FUN_1418f5d04 body=101 status=ok
// SIG undefined FUN_1418f5d04(void)

void FUN_1418f5d04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5d6a FUN_1418f5d6a body=101 status=ok
// SIG undefined FUN_1418f5d6a(void)

void FUN_1418f5d6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f5dd0 FUN_1418f5dd0 body=29 status=ok
// SIG undefined FUN_1418f5dd0(void)

undefined8 FUN_1418f5dd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f5dee FUN_1418f5dee body=29 status=ok
// SIG undefined FUN_1418f5dee(void)

undefined8 FUN_1418f5dee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f5e0c FUN_1418f5e0c body=931 status=ok
// SIG undefined FUN_1418f5e0c(void)

void FUN_1418f5e0c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
  int *piVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_108 [40];
  int *local_e0;
  longlong *local_d8;
  int *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1449027d0(param_1 + -0x38);
  lVar3 = *(longlong *)(local_c0 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  *(int *)(lVar3 + 0x1f8) = *(int *)(lVar3 + 0x1f8) + 1;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_b8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar10 = (int *)((longlong)local_b8 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  lVar8 = FUN_1400d7050(param_1 + -8);
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x3d0) != 0)) {
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3d0) + 0x1c8);
    if (lVar8 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
      uVar24 = SUB84(DAT_14c8464f0,0);
      uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar24 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
      uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
      pdVar9 = (double *)(lVar8 + 0x260);
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      dVar5 = *pdVar9;
      dVar6 = pdVar9[1];
      lVar14 = 0x18;
      lVar8 = 8;
      lVar13 = 0;
      local_c8 = (longlong *)(lVar3 + 0x48);
      local_d0 = (int *)(lVar3 + 0x58);
      local_d8 = (longlong *)(lVar3 + 0x60);
      local_e0 = (int *)(lVar3 + 0x70);
      do {
        lVar4 = *(longlong *)(param_1 + 0x10);
        cVar7 = FUN_14079e1ea((uint *)(lVar8 + lVar4));
        if (cVar7 == '\0') {
          iVar1 = *(int *)(lVar4 + 4 + lVar8);
          if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar8 + lVar4), (int)uVar2 < 0)) {
LAB_1418f6161:
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar12 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != iVar1)) ||
                 ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_1418f6161;
              lVar11 = *plVar12;
            }
          }
          lVar11 = *(longlong *)(lVar11 + 0x1c8);
          if (lVar11 == 0) {
            pdVar9 = (double *)&DAT_14c8464e0;
            dVar15 = DAT_14c8464f0;
          }
          else {
            pdVar9 = (double *)(lVar11 + 0x260);
            dVar15 = *(double *)(lVar11 + 0x270);
          }
          dVar15 = dVar15 + *(double *)(lVar4 + 0x30 + lVar8);
          dVar16 = pdVar9[1] + *(double *)(lVar4 + 0x28 + lVar8);
          dVar17 = *pdVar9 + *(double *)(lVar4 + 0x20 + lVar8);
          fVar19 = 1.0;
          if (*(char *)(lVar4 + 0x10 + lVar8) == '\0') {
            dVar20 = dVar17 - dVar5;
            dVar23 = dVar16 - dVar6;
            dVar21 = dVar15 - (double)CONCAT44(uVar25,uVar24);
            fVar18 = (float)SQRT(dVar21 * dVar21 + dVar23 * dVar23 + dVar20 * dVar20);
            fVar22 = *(float *)(lVar4 + 8 + lVar8) - *(float *)(lVar4 + 0xc + lVar8);
            fVar19 = 0.0;
            if (0.0 <= fVar22) {
              fVar19 = fVar22;
            }
            fVar19 = 1.0 - (float)(-(uint)(0.0 < fVar19) & (uint)((fVar18 - fVar19) / fVar19) |
                                  ~-(uint)(0.0 < fVar19) & (uint)fVar18);
            if (1.0 <= fVar19) {
              fVar19 = 1.0;
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
          }
          lVar11 = *(longlong *)(lVar4 + 0x14 + lVar8);
          if (lVar11 == DAT_14cbd63f8) {
            iVar1 = *(int *)(lVar3 + 0x50);
            piVar10 = local_d0;
            plVar12 = local_c8;
          }
          else {
            if (lVar11 != DAT_14cbd6400) goto LAB_1418f60c4;
            iVar1 = *(int *)(lVar3 + 0x68);
            piVar10 = local_e0;
            plVar12 = local_d8;
          }
          if (lVar13 < iVar1) {
            *piVar10 = *piVar10 + 1;
            lVar11 = *plVar12;
            *(double *)(lVar11 + lVar14) = dVar17;
            *(double *)(lVar11 + 8 + lVar14) = dVar16;
            *(double *)(lVar11 + 0x10 + lVar14) = dVar15;
            *(float *)(lVar11 + 0x40 + lVar14) = fVar19;
            *(undefined1 *)(lVar11 + 0x68 + lVar14) = *(undefined1 *)(lVar4 + 0x10 + lVar8);
          }
        }
LAB_1418f60c4:
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0xb8;
        lVar8 = lVar8 + 0x48;
      } while (lVar13 < *(int *)(param_1 + 0x18));
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f61b0 FUN_1418f61b0 body=196 status=ok
// SIG undefined FUN_1418f61b0(void)

void FUN_1418f61b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
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
  *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 2;
  if ((longlong)*(int *)(lVar3 + 0x50) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x48) + lVar4) == param_2) {
        *(undefined1 *)(*(longlong *)(lVar3 + 0x48) + 0x10 + lVar4) = 5;
        break;
      }
      lVar4 = lVar4 + 0xb8;
    } while ((longlong)*(int *)(lVar3 + 0x50) * 0xb8 - lVar4 != 0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f6276 FUN_1418f6276 body=1266 status=ok
// SIG undefined FUN_1418f6276(void)

void FUN_1418f6276(longlong param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  longlong *local_f0;
  code *local_e8;
  longlong *local_e0;
  double local_c8;
  double dStack_c0;
  longlong local_b8;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = FUN_1400d7050(param_1 + -8);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_110 = &local_e8;
      local_e8 = FUN_141030f22;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_1459f2e4c;
      local_118 = &LAB_148c39de3;
      local_120 = &LAB_1457a9eb2;
      local_128 = &DAT_149e063b2;
      local_130 = 0;
      local_138 = 0x10000004;
      local_140 = 0x10;
      local_148 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (plVar10 = *(longlong **)(lVar5 + 0x2500), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x730))(plVar10,&local_88);
      FUN_1449027d0(param_1 + -0x38);
      plVar10 = *(longlong **)(local_e8 + 0x50);
      SRWLock = (PSRWLOCK)(plVar10 + 0x40);
      AcquireSRWLockExclusive(SRWLock);
      *(int *)(plVar10 + 0x3f) = (int)plVar10[0x3f] + 1;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_e0 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      plVar14 = (longlong *)plVar10[3];
      *(int *)(plVar10 + 5) = (int)plVar10[5] + 2;
      if ((longlong)(int)plVar10[4] != 0) {
        plVar13 = plVar14 + (longlong)(int)plVar10[4] * 0x17;
        do {
          if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
            lVar5 = *plVar14;
            lVar8 = *(longlong *)(param_1 + 0x50);
            if (*(longlong *)(param_1 + 0x50) == 0) {
              lVar8 = param_1 + 0x48;
            }
            iVar7 = *(int *)(lVar8 + (ulonglong)
                                     (*(int *)(param_1 + 0x58) - 1U &
                                     (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
            if (iVar7 != -1) {
              do {
                plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 0x18);
                if (*plVar2 == lVar5) {
                  if (((((plVar2 != (longlong *)0x0) &&
                        (puVar12 = (uint *)(plVar2 + 1), puVar12 != (uint *)0x0)) &&
                       ((*(int *)((longlong)plVar2 + 0xc) != 0 &&
                        ((uVar3 = *puVar12, -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)))))) &&
                      (puVar9 = (undefined8 *)
                                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                      puVar9 != (undefined8 *)0x0)) &&
                     ((*(int *)(puVar9 + 2) == *(int *)((longlong)plVar2 + 0xc) &&
                      ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
                    if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
                      plVar6 = (longlong *)*puVar9;
                    }
                    else {
                      plVar6 = (longlong *)0x0;
                    }
                    local_f0 = plVar10;
                    (**(code **)(*plVar6 + 0x2b0))();
                    plVar14[3] = (longlong)local_c8;
                    plVar14[4] = (longlong)dStack_c0;
                    plVar14[5] = local_b8;
                    if ((*(int *)((longlong)plVar2 + 0xc) == 0) ||
                       (uVar3 = *puVar12, (int)uVar3 < 0)) {
                      lVar5 = 0;
                    }
                    else {
                      lVar5 = 0;
                      if ((int)uVar3 < DAT_14c9647dc) {
                        plVar10 = (longlong *)
                                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                        if (((plVar10 == (longlong *)0x0) ||
                            ((int)plVar10[2] != *(int *)((longlong)plVar2 + 0xc))) ||
                           ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) {
                          lVar5 = 0;
                        }
                        else {
                          lVar5 = *plVar10;
                        }
                      }
                    }
                    if (*(char *)(lVar5 + 0x60) == '\x01') {
                      bVar4 = (byte)*(undefined4 *)(lVar5 + 0x44);
                    }
                    else {
                      bVar4 = 0;
                    }
                    *(byte *)((longlong)plVar14 + 0x81) = bVar4 >> 2 & 1;
                    dVar15 = SQRT((dStack_c0 - local_80) * (dStack_c0 - local_80) +
                                  (local_c8 - local_88) * (local_c8 - local_88)) / 100.0;
                    *(float *)(plVar14 + 0xb) =
                         (float)(int)((ulonglong)(longlong)ROUND(dVar15 + dVar15 + 0.5) >> 1);
                    plVar10 = local_f0;
                  }
                  break;
                }
                iVar7 = (int)plVar2[2];
              } while (iVar7 != -1);
            }
          }
          plVar14 = plVar14 + 0x17;
        } while (plVar14 != plVar13);
      }
      lVar5 = *plVar10;
      *(int *)(plVar10 + 2) = (int)plVar10[2] + 2;
      lVar8 = plVar10[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar11 = 0;
        do {
          dVar15 = *(double *)(lVar5 + 0x18 + lVar11) - local_88;
          dVar16 = *(double *)(lVar5 + 0x20 + lVar11) - local_80;
          dVar15 = SQRT(dVar16 * dVar16 + dVar15 * dVar15) / 100.0;
          *(float *)(lVar5 + 0x58 + lVar11) =
               (float)(int)((ulonglong)(longlong)ROUND(dVar15 + dVar15 + 0.5) >> 1);
          lVar11 = lVar11 + 0xb8;
        } while ((longlong)(int)lVar8 * 0xb8 - lVar11 != 0);
      }
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f676a FUN_1418f676a body=58 status=ok
// SIG undefined FUN_1418f676a(void)

void FUN_1418f676a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140dca418(*(longlong *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f67a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f67a4 FUN_1418f67a4 body=58 status=ok
// SIG undefined FUN_1418f67a4(void)

void FUN_1418f67a4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140bf9354(*(longlong *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f67da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f67de FUN_1418f67de body=128 status=ok
// SIG undefined FUN_1418f67de(void)

void FUN_1418f67de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140eaf26f();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (lVar1 == 0) goto LAB_1418f683d;
  }
  else {
    FUN_1456cec3c(lVar1);
    *(longlong *)(param_1 + 0x60) = lVar1;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_1418f684c:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_140e85284();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1418f684c;
  }
  FUN_140eafca4(lVar1,1,lVar3);
LAB_1418f683d:
  FUN_140f45be4(param_1);
  return;
}



// FUNCTION 1418f686c FUN_1418f686c body=43 status=ok
// SIG undefined FUN_1418f686c(void)

void FUN_1418f686c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140d9144c();
    FUN_140d914a6(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



// FUNCTION 1418f6898 FUN_1418f6898 body=30 status=ok
// SIG undefined FUN_1418f6898(void)

bool FUN_1418f6898(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_1405d1fee();
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



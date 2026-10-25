// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145704f02 FUN_145704f02 body=228 status=ok
// SIG undefined FUN_145704f02(void)

undefined8 FUN_145704f02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_FUN_14b95f9e0;
  local_38[3] = param_3;
  local_38[4] = FUN_141482670;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145704fe8 FUN_145704fe8 body=228 status=ok
// SIG undefined FUN_145704fe8(void)

undefined8 FUN_145704fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ab9f910;
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
  *local_38 = &PTR_FUN_14b95fa50;
  local_38[3] = param_3;
  local_38[4] = FUN_141323e3e;
  FUN_1403734ae(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457050ce FUN_1457050ce body=254 status=ok
// SIG undefined FUN_1457050ce(void)

undefined8
FUN_1457050ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a3ea270;
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
  *local_48 = &PTR_FUN_14b95bf20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14037332e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457051ce FUN_1457051ce body=254 status=ok
// SIG undefined FUN_1457051ce(void)

undefined8
FUN_1457051ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b40ed20;
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
  *local_48 = &PTR_FUN_14b95c6b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457052ce(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457052ce FUN_1457052ce body=216 status=ok
// SIG undefined FUN_1457052ce(void)

undefined8 * FUN_1457052ce(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457053b4 FUN_1457053b4 body=132 status=ok
// SIG undefined FUN_1457053b4(void)

void FUN_1457053b4(longlong param_1,int param_2)

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



// FUNCTION 14570543a FUN_14570543a body=486 status=ok
// SIG undefined FUN_14570543a(void)

void FUN_14570543a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_2a8 [40];
  undefined8 ***local_280 [3];
  ushort local_268;
  byte local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined1 local_250 [384];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((longlong)(int)param_1[1] != 0) {
    local_258 = 0;
    local_254 = 0;
    local_d0 = 0;
    local_c8 = 0x1000000000;
    local_b8 = 0;
    local_b0 = 0;
    uStack_ac = 0x20;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0;
    local_80 = 0;
    local_78 = 0;
    ppppuVar4 = (undefined8 ****)*param_1;
    lVar5 = (longlong)(int)param_1[1] * 0xd0;
    do {
      FUN_1448729ea(ppppuVar4 + 2,local_280,param_2);
      fVar6 = (float)FUN_144a7ecd0(local_280);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_260 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar3 = local_280;
        if (0x18 < local_268) {
          ppppuVar3 = (undefined8 ****)local_280[0];
        }
        (*pcVar1)(ppppuVar3);
      }
      if (0x18 < local_268) {
        FUN_1400020a8(local_280[0]);
      }
      if (0.0 < fVar6) {
        local_280[0] = ppppuVar4;
        FUN_1457056c8(&local_258,fVar6,local_280);
      }
      ppppuVar4 = ppppuVar4 + 0x1a;
      lVar5 = lVar5 + -0xd0;
    } while (lVar5 != 0);
    cVar2 = FUN_145705b76(&local_258,local_280);
    ppppuVar4 = (undefined8 ****)local_280[0];
    if (cVar2 == '\0') {
      ppppuVar4 = (undefined8 ****)((longlong)((int)param_1[1] + -1) * 0xd0 + *param_1);
    }
    (*(code *)*param_3)(param_3[1],ppppuVar4);
    local_78 = 0;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_145705622(local_250);
  }
  if ((local_70 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145705622 FUN_145705622 body=60 status=ok
// SIG undefined FUN_145705622(void)

void FUN_145705622(longlong param_1)

{
  FUN_14570565e();
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570565e FUN_14570565e body=106 status=ok
// SIG undefined FUN_14570565e(void)

void FUN_14570565e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_140373856(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(uint *)(param_1 + 0x1a4) < 0x21) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0x20;
  FUN_14008f53c(param_1 + 400,0);
  return;
}



// FUNCTION 1457056c8 FUN_1457056c8 body=320 status=ok
// SIG undefined FUN_1457056c8(void)

void FUN_1457056c8(float *param_1,float param_2,ulonglong *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong *local_20;
  float *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    if (param_1[100] != param_1[0x6d]) {
      uVar2 = *param_3;
      uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      pfVar4 = param_1 + 0x6e;
      if (*(float **)(param_1 + 0x76) != (float *)0x0) {
        pfVar4 = *(float **)(param_1 + 0x76);
      }
      fVar5 = pfVar4[(int)param_1[0x78] - 1U & (uVar3 >> 0x10 ^ uVar3)];
      if (fVar5 != -NAN) {
        pfVar4 = *(float **)(param_1 + 0x62);
        if (*(float **)(param_1 + 0x62) == (float *)0x0) {
          pfVar4 = param_1 + 2;
        }
        do {
          pfVar1 = pfVar4 + (longlong)(int)fVar5 * 6;
          if (*(ulonglong *)pfVar1 == uVar2) {
            if (pfVar1 + 2 != (float *)0x0 && pfVar1 != (float *)0x0) {
              fVar5 = *param_1 - pfVar1[2];
              goto LAB_145705700;
            }
            break;
          }
          fVar5 = pfVar1[4];
        } while (fVar5 != -NAN);
      }
    }
    fVar5 = *param_1;
LAB_145705700:
    *param_1 = fVar5 + param_2;
    local_18 = &local_24;
    local_20 = param_3;
    FUN_14570580a(param_1 + 2,local_c,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570580a FUN_14570580a body=317 status=ok
// SIG undefined FUN_14570580a(void)

undefined4 * FUN_14570580a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145705a48(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1457059ac(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    cVar3 = FUN_145705948(param_1,*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac));
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x1d8) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_40 + 0x14) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar7 = param_1 + 0x1b0;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar7 = param_1 + 0x1b0;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145705948 FUN_145705948 body=100 status=ok
// SIG undefined FUN_145705948(void)

undefined8 FUN_145705948(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x1d8))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x1d8) = iVar4;
    FUN_14037396c(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1457059ac FUN_1457059ac body=156 status=ok
// SIG undefined FUN_1457059ac(void)

undefined8 FUN_1457059ac(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac) != 1) &&
     (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1ac))) {
    lVar5 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar5 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar5 + (longlong)iVar6 * 0x18);
        if (*plVar1 == *param_3) {
          lVar5 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar1 = (int)lVar5;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1488d3702((int)lVar5,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145705a48 FUN_145705a48 body=302 status=ok
// SIG undefined FUN_145705a48(void)

int * FUN_145705a48(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x1ac) == 0) {
    iVar6 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar6 + 1;
    if (*(int *)(param_1 + 0x18c) == iVar6) {
      FUN_14593ecc2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 400,1);
    lVar5 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar5 = param_1 + 400;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x1a8);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0x1a8) = iVar3;
    iVar4 = *(int *)(param_1 + 0x1ac) + -1;
    *(int *)(param_1 + 0x1ac) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 145705b76 FUN_145705b76 body=377 status=ok
// SIG undefined FUN_145705b76(void)

undefined8 FUN_145705b76(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = rand();
  fVar8 = ((float)(uVar4 & 0x7fff) / 32767.0) * *param_1;
  pfVar1 = param_1 + 2;
  pfVar2 = param_1 + 0x66;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  fStack_5c = 0.0;
  uStack_58 = 0;
  uStack_68 = pfVar2;
  if (param_1[0x6a] == 0.0) {
    fVar7 = 0.0;
  }
  else {
    FUN_144a81a4c(&local_70);
    fVar7 = param_1[0x6a];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  fStack_7c = fStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = pfVar1;
  if ((fStack_5c != fVar7) || (uStack_68 != pfVar2)) {
    fVar9 = 0.0;
    do {
      pfVar6 = *(float **)(local_98 + 0x60);
      if (*(float **)(local_98 + 0x60) == (float *)0x0) {
        pfVar6 = local_98;
      }
      bVar3 = fVar9 <= fVar8;
      fVar9 = fVar9 + pfVar6[(longlong)(int)fStack_7c * 6 + 2];
      if ((bVar3) && (fVar8 <= fVar9)) {
        uVar5 = *(undefined8 *)(pfVar6 + (longlong)(int)fStack_7c * 6);
        *param_2 = uVar5;
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        goto LAB_145705c78;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_144a81a4c(&local_90);
    } while (local_98 != pfVar1 ||
             ((float *)CONCAT44(uStack_84,uStack_88) != pfVar2 || fStack_7c != fVar7));
  }
  uVar5 = 0;
LAB_145705c78:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145705cf0 FUN_145705cf0 body=47 status=ok
// SIG undefined FUN_145705cf0(void)

void FUN_145705cf0(undefined8 param_1,longlong *param_2)

{
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 0x40) != 0) {
    FUN_14483d664();
    return;
  }
  FUN_140131bdc();
  return;
}



// FUNCTION 145705d20 FUN_145705d20 body=168 status=ok
// SIG undefined FUN_145705d20(void)

void FUN_145705d20(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *(int *)(param_1 + 0x638) = param_2;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x64c) < param_2) {
      FUN_145705dca(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x5f4) = param_3;
    FUN_14020a6cc(param_1 + 0x5ec,1);
    *(undefined4 *)(param_1 + 0x600) = param_4;
    FUN_14020a6cc(param_1 + 0x5f8,1);
    *(undefined4 *)(param_1 + 0x60c) = param_5;
    FUN_14020a6cc(param_1 + 0x604,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145705dca FUN_145705dca body=96 status=ok
// SIG undefined FUN_145705dca(void)

void FUN_145705dca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 145705e2a FUN_145705e2a body=337 status=ok
// SIG undefined FUN_145705e2a(void)

void FUN_145705e2a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458c446e();
  lVar3 = param_1[0x12];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14b3e6310;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14b995690;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,lVar3);
  puVar1[4] = FUN_148f01d6c;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_144a450dc(param_1 + 0x2b,&local_30);
  FUN_1449db362(&local_30);
  local_30 = param_1;
  lVar3 = FUN_1411cfb7f();
  FUN_140374556(&local_30,lVar3 + 0xb8);
  lVar3 = FUN_1411cfb7f();
  FUN_140374556(&local_30,lVar3 + 0xc4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145705f7c FUN_145705f7c body=481 status=ok
// SIG undefined FUN_145705f7c(void)

void FUN_145705f7c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0x90) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x65) & 2) == 0)) &&
      (lVar4 = FUN_1402a1246(), lVar4 != 0)) &&
     ((FUN_140a9b590(param_1,&local_58,0), local_58 == 0 || lStack_50 != 0 &&
      (local_58 == 0 || lStack_50 == 0)))) {
    local_58 = 0;
    lStack_50 = 0;
    FUN_14037d352(&local_58);
    lVar6 = local_58;
    lVar8 = (longlong)(int)lStack_50;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(lVar6 + lVar7);
        if ((lVar1 != 0) && (cVar3 = FUN_14037567c(lVar1,lVar4), cVar3 != '\0')) {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          local_68 = 0;
          lStack_60 = 0;
          uVar5 = FUN_14037df6e();
          lVar4 = FUN_14477b664(uVar5);
          lVar6 = FUN_14037df6e();
          uVar5 = FUN_14037df6e();
          FUN_1402d1bfa(&local_40,uVar5,lVar1);
          if (local_40 != 0) {
            lStack_60 = 0;
          }
          local_70 = local_40;
          lVar8 = FUN_14037df6e();
          if (lVar6 == 0) {
LAB_1457060df:
            lVar8 = lVar6;
          }
          else if (lVar8 == 0) {
            lVar8 = 0;
          }
          else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                   == lVar8 + 0x30)) goto LAB_1457060df;
          if (lVar4 != lVar8) {
            lStack_60 = 0;
          }
          uVar5 = FUN_14477b664(lVar8);
          local_68 = FUN_14477b664(uVar5);
          if ((local_40 != 0) && (local_68 != 0)) {
            lStack_60 = lVar1;
          }
          FUN_14570615e(uVar2,&local_70);
          break;
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570615e FUN_14570615e body=204 status=ok
// SIG undefined FUN_14570615e(void)

void FUN_14570615e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcfb84 == '\0') {
    DAT_14cbcfb84 = 1;
    if (*(byte *)(param_1 + 0x178) < 3) {
      local_38 = *param_2;
      uVar1 = FUN_14477b664(param_2[1]);
      local_30 = FUN_14477b664(uVar1);
      local_28 = param_2[2];
      FUN_14570622c(param_1,&local_38);
    }
    local_50 = *param_2;
    uVar1 = FUN_14477b664(param_2[1]);
    local_48 = FUN_14477b664(uVar1);
    local_40 = param_2[2];
    FUN_140375722(param_1 + 0x3910,&local_50);
    DAT_14cbcfb84 = '\0';
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570622c FUN_14570622c body=132 status=ok
// SIG undefined FUN_14570622c(void)

void FUN_14570622c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cbadcb8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457062b2 FUN_1457062b2 body=132 status=ok
// SIG undefined FUN_1457062b2(void)

void FUN_1457062b2(longlong param_1,int param_2)

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



// FUNCTION 145706336 FUN_145706336 body=116 status=ok
// SIG undefined FUN_145706336(void)

void FUN_145706336(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x88)) {
      uVar2 = uVar1 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x88,8);
  }
  return;
}



// FUNCTION 1457063aa FUN_1457063aa body=307 status=ok
// SIG undefined FUN_1457063aa(void)

int FUN_1457063aa(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar8 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x38;
        puVar1 = (undefined8 *)(lVar8 + lVar10);
        if (*(longlong *)(lVar8 + 8 + lVar10) == 0) {
          uVar7 = FUN_140da11b8();
          uVar7 = FUN_14477b664(uVar7);
          puVar1[1] = uVar7;
        }
        lVar8 = param_3[1];
        if (lVar8 == 0) {
          lVar8 = FUN_140da11b8();
        }
        uVar7 = *param_3;
        uVar6 = FUN_14477b664(lVar8);
        local_50 = uVar7;
        uVar3 = FUN_144a7891a(uVar6);
        local_58 = *puVar1;
        uVar7 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar7);
        local_68 = uVar6;
        local_60 = &local_50;
        cVar2 = FUN_144a789b8(uVar4,uVar7,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_145706490;
        lVar8 = *param_1;
        iVar9 = *(int *)(lVar8 + 0x30 + lVar10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_145706490:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457064de FUN_1457064de body=410 status=ok
// SIG undefined FUN_1457064de(void)

undefined4 * FUN_1457064de(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457067ae(param_1,local_48);
  FUN_14570667a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  lVar7 = local_40[1];
  if (lVar7 == 0) {
    lVar7 = FUN_140da11b8();
  }
  uVar1 = *local_40;
  uVar6 = FUN_14477b664(lVar7);
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),uVar5 >> 0x10 ^ uVar5);
  cVar3 = FUN_145706730(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x34) = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145706ba6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570667a FUN_14570667a body=110 status=ok
// SIG undefined FUN_14570667a(void)

longlong FUN_14570667a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  FUN_1457066e8();
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8((undefined8 *)(param_1 + 0x18),iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 2);
  return param_1;
}



// FUNCTION 1457066e8 FUN_1457066e8 body=71 status=ok
// SIG undefined FUN_1457066e8(void)

undefined8 * FUN_1457066e8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 145706730 FUN_145706730 body=125 status=ok
// SIG undefined FUN_145706730(void)

undefined8 FUN_145706730(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_1457063aa(), iVar13 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
    if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar13 * 0x38) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[9];
    uVar11 = param_3[10];
    uVar12 = param_3[0xb];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar10;
    puVar1[10] = uVar11;
    puVar1[0xb] = uVar12;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148e0c652(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 1457067ae FUN_1457067ae body=227 status=ok
// SIG undefined FUN_1457067ae(void)

int * FUN_1457067ae(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 145706892 FUN_145706892 body=132 status=ok
// SIG undefined FUN_145706892(void)

void FUN_145706892(longlong param_1,int param_2)

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



// FUNCTION 145706918 FUN_145706918 body=127 status=ok
// SIG undefined FUN_145706918(void)

void FUN_145706918(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1456d172d(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_140179e18(param_2,0);
  }
  local_20 = &local_30;
  local_28 = FUN_1443463dc;
  local_30 = param_2;
  FUN_14037cfe6(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145706998 FUN_145706998 body=248 status=ok
// SIG undefined FUN_145706998(void)

undefined8 FUN_145706998(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3ecf50;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b95c250;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(&DAT_14cb7df50,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145706a92 FUN_145706a92 body=132 status=ok
// SIG undefined FUN_145706a92(void)

void FUN_145706a92(longlong param_1,int param_2)

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



// FUNCTION 145706b18 FUN_145706b18 body=141 status=ok
// SIG undefined FUN_145706b18(void)

void FUN_145706b18(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_147e27a44(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_1437ed6fa;
  local_20 = &local_30;
  local_28 = FUN_14037e3dc;
  local_48 = param_2;
  FUN_14037dfa8(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145706ba6 FUN_145706ba6 body=564 status=ok
// SIG undefined FUN_145706ba6(void)

void FUN_145706ba6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar4 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
  if (uVar4 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar10 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar2 = *local_80;
        lVar7 = *(longlong *)(lVar2 + 8 + (longlong)iVar10 * 0x38);
        if (lVar7 == 0) {
          lVar7 = FUN_140da11b8();
        }
        puVar12 = (undefined8 *)(lVar2 + (longlong)iVar10 * 0x38);
        uVar3 = *puVar12;
        uVar6 = FUN_14477b664(lVar7);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar11 = (uint)uVar3 & 0xffff;
        iVar5 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar9 >> 0x10 ^ uVar9
                             );
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)((longlong)puVar12 + 0x34) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar12 + 6) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar10 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145706ddc FUN_145706ddc body=132 status=ok
// SIG undefined FUN_145706ddc(void)

void FUN_145706ddc(longlong param_1,int param_2)

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



// FUNCTION 145706e62 FUN_145706e62 body=132 status=ok
// SIG undefined FUN_145706e62(void)

void FUN_145706e62(longlong param_1,int param_2)

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



// FUNCTION 145706ee8 FUN_145706ee8 body=333 status=ok
// SIG undefined FUN_145706ee8(void)

undefined4 *
FUN_145706ee8(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_1457070cc(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_145707036(param_1,uVar2,local_48);
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
      FUN_1457071ba(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145707036 FUN_145707036 body=149 status=ok
// SIG undefined FUN_145707036(void)

void FUN_145707036(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1468f96f2(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_14570705a;
    }
  }
  uVar1 = 0;
LAB_14570705a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1457070cc FUN_1457070cc body=238 status=ok
// SIG undefined FUN_1457070cc(void)

int * FUN_1457070cc(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1457071ba FUN_1457071ba body=487 status=ok
// SIG undefined FUN_1457071ba(void)

void FUN_1457071ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457073a2 FUN_1457073a2 body=500 status=ok
// SIG undefined FUN_1457073a2(void)

void FUN_1457073a2(uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar2 = DAT_14caceb90;
  uVar8 = param_1 - DAT_14caceb90;
  if (uVar8 != 0 && DAT_14caceb90 <= (int)param_1) {
    iVar7 = DAT_14caceb90;
    if (DAT_14caceb94 < (int)param_1) {
      FUN_14474875a(&DAT_14caceb88);
      iVar7 = DAT_14caceb90;
    }
    DAT_14caceb90 = iVar7 + uVar8;
    if ((uint)(DAT_14caceb94 - iVar7) < uVar8) {
      FUN_1446efaca(&DAT_14caceb88);
    }
    lVar1 = DAT_14caceb88;
    if (iVar7 < (int)param_1) {
      uVar11 = (ulonglong)param_1;
      piVar6 = (int *)(uVar11 * 0x10 + DAT_14caceb88 + -0xc);
      do {
        iVar10 = (int)uVar11;
        if (DAT_14cacebbc != 0) {
          *(int *)(lVar1 + (longlong)DAT_14cacebb8 * 0x10) = iVar10 + -1;
        }
        piVar6[-1] = -1;
        iVar12 = -1;
        if (0 < DAT_14cacebbc) {
          iVar12 = DAT_14cacebb8;
        }
        uVar11 = uVar11 - 1;
        *piVar6 = iVar12;
        DAT_14cacebb8 = iVar10 + -1;
        DAT_14cacebbc = DAT_14cacebbc + 1;
        piVar6 = piVar6 + -4;
      } while ((longlong)iVar7 < (longlong)uVar11);
    }
    if (iVar2 == 0) {
      DAT_14cacebb0 = uVar8;
      if (param_1 != 0) {
        uVar9 = uVar8 + 0x1f >> 5;
        if (DAT_14cacebb4 + 0x1f >> 5 < uVar9) {
          FUN_14499171c(&DAT_14caceb98,0,uVar9,4);
          DAT_14cacebb4 = uVar8 + 0x1f & 0xffffffe0;
        }
        puVar5 = DAT_14caceba8;
        if (DAT_14caceba8 == (undefined *)0x0) {
          puVar5 = &DAT_14caceb98;
        }
        if (uVar8 < 0x101) {
          uVar9 = uVar9 + (uVar9 == 0);
        }
        memset(puVar5,0,(ulonglong)(uVar9 << 2));
        uVar8 = DAT_14cacebb0 + 0x1f;
        if (-1 < (int)DAT_14cacebb0) {
          uVar8 = DAT_14cacebb0;
        }
        if ((int)DAT_14cacebb0 % 0x20 != 0) {
          puVar5 = &DAT_14caceb98;
          if (DAT_14caceba8 != (undefined *)0x0) {
            puVar5 = DAT_14caceba8;
          }
          bVar4 = -(char)((int)DAT_14cacebb0 % 0x20);
          *(uint *)(puVar5 + (longlong)((int)uVar8 >> 5) * 4) =
               (uint)(*(int *)(puVar5 + (longlong)((int)uVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(&DAT_14caceb98,uVar8);
      FUN_1447c6044(&DAT_14caceb98,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 145707596 FUN_145707596 body=78 status=ok
// SIG undefined FUN_145707596(void)

void FUN_145707596(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1405ba846(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7f6330;
  FUN_140381810(puVar1[0x75],1);
                    /* WARNING: Could not recover jumptable at 0x0001457075e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)puVar1[0x75] + 0x728))((longlong *)puVar1[0x75],DAT_14cace838,1);
  return;
}



// FUNCTION 1457075e4 FUN_1457075e4 body=150 status=ok
// SIG undefined FUN_1457075e4(void)

void FUN_1457075e4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14570767c FUN_14570767c body=52 status=ok
// SIG undefined FUN_14570767c(void)

void FUN_14570767c(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_144a78877((ulonglong)param_1 >> 0x20);
  uVar2 = FUN_144a78877((ulonglong)param_1 & 0xffffffff,param_2);
  *param_1 = CONCAT44(uVar1,uVar2);
  return;
}



// FUNCTION 1457076b0 FUN_1457076b0 body=143 status=ok
// SIG undefined FUN_1457076b0(void)

void FUN_1457076b0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145707740 FUN_145707740 body=48 status=ok
// SIG undefined FUN_145707740(void)

void FUN_145707740(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,8);
  }
  return;
}



// FUNCTION 145707770 FUN_145707770 body=138 status=ok
// SIG undefined FUN_145707770(void)

void FUN_145707770(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457077fa FUN_1457077fa body=48 status=ok
// SIG undefined FUN_1457077fa(void)

void FUN_1457077fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14570782a FUN_14570782a body=61 status=ok
// SIG undefined FUN_14570782a(void)

longlong FUN_14570782a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f202e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_145707867(lVar2);
  return lVar2;
}



// FUNCTION 145707867 FUN_145707867 body=16 status=ok
// SIG undefined FUN_145707867(void)

void FUN_145707867(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  return;
}



// FUNCTION 145707877 FUN_145707877 body=168 status=ok
// SIG undefined FUN_145707877(void)

longlong * FUN_145707877(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 145707920 FUN_145707920 body=95 status=ok
// SIG undefined FUN_145707920(void)

void FUN_145707920(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145707980 FUN_145707980 body=7 status=ok
// SIG undefined FUN_145707980(void)

undefined1 FUN_145707980(void)

{
  return DAT_14c7615a8;
}



// FUNCTION 145707988 FUN_145707988 body=132 status=ok
// SIG undefined FUN_145707988(void)

void FUN_145707988(longlong param_1,int param_2)

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



// FUNCTION 145707a0e FUN_145707a0e body=67 status=ok
// SIG undefined FUN_145707a0e(void)

void FUN_145707a0e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145707ae0(param_1);
    FUN_1414892c0(param_1,0);
    return;
  }
  FUN_1414892c0(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1403a258c(param_1);
  return;
}



// FUNCTION 145707a52 FUN_145707a52 body=140 status=ok
// SIG undefined FUN_145707a52(void)

undefined8 * FUN_145707a52(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_140114204(param_3);
  if ((cVar1 == '\0') || (*param_3 != '\t')) {
    *param_2 = 0;
  }
  else {
    FUN_140bc5fbc(param_3,local_50);
    FUN_145707d34(param_1,param_2,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145707ae0 FUN_145707ae0 body=339 status=ok
// SIG undefined FUN_145707ae0(void)

void FUN_145707ae0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 145707c34 FUN_145707c34 body=254 status=ok
// SIG undefined FUN_145707c34(void)

undefined8
FUN_145707c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b9dcde0;
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



// FUNCTION 145707d34 FUN_145707d34 body=387 status=ok
// SIG undefined FUN_145707d34(void)

undefined8 * FUN_145707d34(longlong param_1,undefined8 *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  uint local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 8);
    if (((*(longlong *)(lVar3 + 0x30) != 0) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x152) == '\x05')) {
      *param_2 = 0;
      goto LAB_145707e60;
    }
  }
  local_60[0] = 1;
  local_54 = 0;
  local_5c = DAT_14cb7c580;
  if (((*param_3 == 0) || (param_3[1] == 0)) || (*param_3 == DAT_14c948000)) {
    FUN_1403a0728(local_60,param_2);
  }
  else {
    FUN_145781cfb(&local_50,param_3);
    if (((local_50 == 0) || (local_4c == 0)) || (local_50 == DAT_14c948000)) {
      iStack_68 = DAT_14c948620;
      local_70 = (uint)DAT_14c948618;
      uStack_6c = (undefined4)(DAT_14c948618 >> 0x20);
      uVar4 = DAT_14c948618;
    }
    else {
      local_70 = local_50;
      uStack_6c = (undefined4)DAT_14c948028;
      iStack_68 = (int)((ulonglong)DAT_14c948028 >> 0x20);
      uVar4 = (ulonglong)local_50;
    }
    if (iStack_68 != 0) {
      uVar2 = FUN_144a78877(uVar4 & 0xffffffff,iStack_68);
      uVar4 = (ulonglong)uVar2;
    }
    lVar3 = FUN_140bc754e(param_1 + 0x10,uVar4,&local_70);
    FUN_145707eb8(local_60,*(undefined1 *)(lVar3 + 0x28));
    FUN_1403a0728(local_60,param_2);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
LAB_145707e60:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145707eb8 FUN_145707eb8 body=173 status=ok
// SIG undefined FUN_145707eb8(void)

undefined8 FUN_145707eb8(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb793e0) {
    FUN_144b3d300(&DAT_14cb793e0);
    if (DAT_14cb793e0 == -1) {
      DAT_14cb793d8 = FUN_145782150();
      _Init_thread_footer(&DAT_14cb793e0);
    }
  }
  FUN_1414aa4be(DAT_14cb793d8,&local_28,param_2);
  FUN_141434f00(param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145707f66 FUN_145707f66 body=170 status=ok
// SIG undefined FUN_145707f66(void)

longlong FUN_145707f66(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xe8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x60;
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x60) == lVar2) break;
        iVar5 = *(int *)(lVar3 + 0x58);
        lVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_145707ff2;
    }
  }
  lVar3 = 0;
LAB_145707ff2:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 145708010 FUN_145708010 body=162 status=ok
// SIG undefined FUN_145708010(void)

undefined8 FUN_145708010(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949188) {
    FUN_144b3d300(&DAT_14c949188);
    if (DAT_14c949188 == -1) {
      FUN_1446f470e(&local_18,L"FallbackStruct",1);
      DAT_14c949180 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949188);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457080b4 FUN_1457080b4 body=157 status=ok
// SIG undefined FUN_1457080b4(void)

void FUN_1457080b4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145708152 FUN_145708152 body=226 status=ok
// SIG undefined FUN_145708152(void)

longlong * FUN_145708152(longlong *param_1)

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
  pcVar13 = FUN_1462f3be4;
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



// FUNCTION 14570823a FUN_14570823a body=132 status=ok
// SIG undefined FUN_14570823a(void)

undefined1 * FUN_14570823a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RayTracingCutError";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145708236;
}



// FUNCTION 1457082be FUN_1457082be body=138 status=ok
// SIG undefined FUN_1457082be(void)

code * FUN_1457082be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DbgBuffer64";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<UlongType>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000137;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726742a;
}



// FUNCTION 145708348 FUN_145708348 body=26 status=ok
// SIG undefined FUN_145708348(void)

void FUN_145708348(undefined8 param_1)

{
  FUN_141499196();
  FUN_1403af3c4(param_1);
  return;
}



// FUNCTION 145708362 FUN_145708362 body=74 status=ok
// SIG undefined FUN_145708362(void)

longlong * FUN_145708362(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)*param_1;
  if (plVar2 != plVar3) {
    *param_2 = 0;
    *param_1 = (longlong)plVar2;
    if (plVar3 != (longlong *)0x0) {
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1457083ac FUN_1457083ac body=85 status=ok
// SIG undefined FUN_1457083ac(void)

undefined8 * FUN_1457083ac(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_14485c47a(param_1 + 6);
  lVar1 = DAT_14cb71810;
  if (param_1[7] != DAT_14cb71810) {
    param_1[9] = 0;
  }
  param_1[7] = lVar1;
  return param_1;
}



// FUNCTION 145708402 FUN_145708402 body=154 status=ok
// SIG undefined FUN_145708402(void)

void FUN_145708402(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14570843d;
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14570843d;
    }
  }
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14570843d:
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145708498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14570849c FUN_14570849c body=226 status=ok
// SIG undefined FUN_14570849c(void)

longlong * FUN_14570849c(longlong *param_1)

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
  pcVar13 = FUN_1462e4fb8;
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



// FUNCTION 145708584 FUN_145708584 body=138 status=ok
// SIG undefined FUN_145708584(void)

undefined1 * FUN_145708584(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x171;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145708580;
}



// FUNCTION 14570860e FUN_14570860e body=234 status=ok
// SIG undefined FUN_14570860e(void)

ulonglong FUN_14570860e(ushort param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar3 = CONCAT71((uint7)(byte)(param_1 >> 8),1);
  if ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca96920) {
      FUN_144b3d300(&DAT_14ca96920);
      if (DAT_14ca96920 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar4 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.Mobile.AllowPerPixelShadingModels",1);
        if (plVar4 == (longlong *)0x0) {
          DAT_14ca96918 = 0;
        }
        else {
          DAT_14ca96918 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        _Init_thread_footer(&DAT_14ca96920);
      }
    }
    lVar1 = DAT_14ca96918;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    uVar3 = (ulonglong)(*(int *)(lVar1 + uVar3 * 4) != 0);
  }
  return uVar3;
}



// FUNCTION 1457086f8 FUN_1457086f8 body=243 status=ok
// SIG undefined FUN_1457086f8(void)

undefined8
FUN_1457086f8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457087f8 FUN_1457087f8 body=132 status=ok
// SIG undefined FUN_1457087f8(void)

void FUN_1457087f8(longlong *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar1 = (int *)param_1[2];
  if (*piVar1 == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000145708875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  return;
}



// FUNCTION 14570887c FUN_14570887c body=94 status=ok
// SIG undefined FUN_14570887c(void)

void FUN_14570887c(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    (**(code **)(*plVar2 + 0xbd0))(plVar2,param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457088da FUN_1457088da body=38 status=ok
// SIG undefined FUN_1457088da(void)

undefined8 FUN_1457088da(undefined8 param_1,int param_2)

{
  FUN_145708900();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145708900 FUN_145708900 body=103 status=ok
// SIG undefined FUN_145708900(void)

void FUN_145708900(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a2ade70;
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14003f39a(param_1);
  return;
}



// FUNCTION 145708968 FUN_145708968 body=47 status=ok
// SIG undefined FUN_145708968(void)

void FUN_145708968(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba8040);
                    /* WARNING: Could not recover jumptable at 0x000145708994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 145708998 FUN_145708998 body=76 status=ok
// SIG undefined FUN_145708998(void)

uint FUN_145708998(longlong param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = rand();
  fVar1 = *(float *)(param_1 + 0x270);
  return -(uint)(fVar1 <= *(float *)(param_1 + 0x274)) &
         (uint)((*(float *)(param_1 + 0x274) - fVar1) * ((float)(uVar2 & 0x7fff) / 32767.0) + fVar1)
  ;
}



// FUNCTION 1457089e4 FUN_1457089e4 body=67 status=ok
// SIG undefined FUN_1457089e4(void)

void FUN_1457089e4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145708a28(param_1);
    FUN_145a9d83c(param_1,0);
    return;
  }
  FUN_145a9d83c(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1403cb758(param_1);
  return;
}



// FUNCTION 145708a28 FUN_145708a28 body=335 status=ok
// SIG undefined FUN_145708a28(void)

void FUN_145708a28(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 145708b78 FUN_145708b78 body=101 status=ok
// SIG undefined FUN_145708b78(void)

void FUN_145708b78(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xa4 + (longlong)param_2 * 0xb0);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xb0 + 0xa0);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xb0 + 0xa0);
  FUN_145708bde();
  return;
}



// FUNCTION 145708bde FUN_145708bde body=122 status=ok
// SIG undefined FUN_145708bde(void)

void FUN_145708bde(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0 + 4) = uVar5;
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



// FUNCTION 145708c58 FUN_145708c58 body=226 status=ok
// SIG undefined FUN_145708c58(void)

longlong * FUN_145708c58(longlong *param_1)

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
  pcVar13 = FUN_146308684;
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



// FUNCTION 145708d40 FUN_145708d40 body=136 status=ok
// SIG undefined FUN_145708d40(void)

code * FUN_145708d40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualSmPageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x43800000100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8c64;
}



// FUNCTION 145708dc8 FUN_145708dc8 body=138 status=ok
// SIG undefined FUN_145708dc8(void)

code * FUN_145708dc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AllocatedPageRectBounds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint4 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44800000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f8bda;
}



// FUNCTION 145708e52 FUN_145708e52 body=26 status=ok
// SIG undefined FUN_145708e52(void)

void FUN_145708e52(undefined8 param_1)

{
  FUN_140893b6e();
  FUN_145708e6c(param_1);
  return;
}



// FUNCTION 145708e6c FUN_145708e6c body=285 status=ok
// SIG undefined FUN_145708e6c(void)

void FUN_145708e6c(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar3 == 0) {
    FUN_145709438(&local_30,param_1);
  }
  else {
    FUN_140457ffc(&DAT_14c9647a0,param_1);
    FUN_14485c47a(param_1 + 0x6c,*(undefined8 *)(lVar3 + 0x38));
    plVar4 = (longlong *)
             FUN_145708f8a((uint)((ulonglong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) ^
                           (uint)*(undefined8 *)(param_1 + 0x6c),param_1 + 0x6c);
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_145709010(plVar4,iVar1);
    }
    *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = local_30;
    uVar2 = FUN_14490d72a(lVar3);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    FUN_145709528(param_1);
    lVar3 = *(longlong *)(param_1 + 0x28);
    local_30 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    FUN_1405f6d44(lVar3 + 0x16c8,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145708f8a FUN_145708f8a body=132 status=ok
// SIG undefined FUN_145708f8a(void)

longlong FUN_145708f8a(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_145709094();
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20, DAT_14cb7c5c8 + lVar2 == 0)) {
    local_28 = param_2;
    FUN_145709162(&local_1c,param_1);
    lVar2 = (longlong)local_1c << 5;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + DAT_14cb7c5c8 + 8;
}



// FUNCTION 145709010 FUN_145709010 body=132 status=ok
// SIG undefined FUN_145709010(void)

void FUN_145709010(longlong param_1,int param_2)

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



// FUNCTION 145709094 FUN_145709094 body=205 status=ok
// SIG undefined FUN_145709094(void)

int FUN_145709094(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c5d0 != DAT_14cb7c5fc) {
    puVar2 = &DAT_14cb7c600;
    if (DAT_14cb7c608 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c608;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c610 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c5c8 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1460869b8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1457090c1;
        iVar3 = *(int *)(DAT_14cb7c5c8 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1457090c1:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 145709162 FUN_145709162 body=289 status=ok
// SIG undefined FUN_145709162(void)

undefined4 * FUN_145709162(undefined4 *param_1,uint param_2,undefined8 *param_3)

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
  FUN_14570932a(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_145709284(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb7c5d0 - DAT_14cb7c5fc;
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
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb7c610)) {
      param_2 = DAT_14cb7c610 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb7c608;
      if (DAT_14cb7c608 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7c600;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7c610 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb7c608;
      if (DAT_14cb7c608 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7c600;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7c610 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb7c610 = iVar6;
      FUN_1457097c6();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145709284 FUN_145709284 body=165 status=ok
// SIG undefined FUN_145709284(void)

undefined8 FUN_145709284(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb7c5d0 - DAT_14cb7c5fc != 1) {
    local_30 = *param_2;
    iVar6 = FUN_145d241ee();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb7c5c8 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb7c5c8 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_145d24452(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_1457092af;
    }
  }
  uVar7 = 0;
LAB_1457092af:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570932a FUN_14570932a body=269 status=ok
// SIG undefined FUN_14570932a(void)

int * FUN_14570932a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7c5f8;
  iVar3 = DAT_14cb7c5d0;
  if (DAT_14cb7c5fc == 0) {
    iVar2 = DAT_14cb7c5d0 + 1;
    bVar7 = DAT_14cb7c5d4 == DAT_14cb7c5d0;
    DAT_14cb7c5d0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7c5c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7c5d8,1);
    puVar4 = DAT_14cb7c5e8;
    if (DAT_14cb7c5e8 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb7c5d8;
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
    lVar6 = (longlong)DAT_14cb7c5f8;
    DAT_14cb7c5f8 = *(int *)(DAT_14cb7c5c8 + 4 + lVar6 * 0x20);
    DAT_14cb7c5fc = DAT_14cb7c5fc + -1;
    if (DAT_14cb7c5fc != 0) {
      *(undefined4 *)(DAT_14cb7c5c8 + (longlong)DAT_14cb7c5f8 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7c5d8;
  if (DAT_14cb7c5e8 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7c5e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7c5c8;
  return param_1;
}



// FUNCTION 145709438 FUN_145709438 body=239 status=ok
// SIG undefined FUN_145709438(void)

undefined8 FUN_145709438(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1e1a40;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b400470;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_146153868;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145709528 FUN_145709528 body=500 status=ok
// SIG undefined FUN_145709528(void)

void FUN_145709528(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[0xd] != 3) {
    FUN_140d2ef40(param_1 + 0xf);
    plVar3 = param_1 + 0x11;
    FUN_140d2ef40(plVar3);
    FUN_145709742(param_1);
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar6 = FUN_1411db1ae(uVar5);
    if (lVar6 != 0) {
      lVar7 = FUN_1457f66ee(lVar6);
      if (lVar7 != 0) {
        plVar8 = (longlong *)FUN_1457f66ee(lVar6);
        (**(code **)(*plVar8 + 0x28))(plVar8,plVar3);
      }
      FUN_14570971e(lVar6,&local_40);
      if (local_40 != 0) {
        FUN_1488414b8(&local_50);
        if (local_50 != 0) {
          if (local_38 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
          }
          plVar8 = *(longlong **)(local_50 + 0x18);
          *(longlong *)(local_50 + 0x10) = local_40;
          *(longlong **)(local_50 + 0x18) = local_38;
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
          plVar8 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          iVar4 = (int)param_1[0x12];
          *(uint *)(param_1 + 0x12) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x94) < iVar4 + 1U) {
            FUN_140d2f4b4(plVar3,iVar4);
          }
          lVar6 = *plVar3;
          *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = local_50;
          *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_48 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570971e FUN_14570971e body=36 status=ok
// SIG undefined FUN_14570971e(void)

void FUN_14570971e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 200);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145709742 FUN_145709742 body=66 status=ok
// SIG undefined FUN_145709742(void)

void FUN_145709742(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_145709784();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x150))(plVar1);
    FUN_1403d31e4(plVar1,param_1,param_1 + 0x88);
    return;
  }
  return;
}



// FUNCTION 145709784 FUN_145709784 body=65 status=ok
// SIG undefined FUN_145709784(void)

undefined8 FUN_145709784(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14039ffc6(lVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457097b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1457097c6 FUN_1457097c6 body=489 status=ok
// SIG undefined FUN_1457097c6(void)

void FUN_1457097c6(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7c608 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7c608,0,0,4);
  }
  uVar2 = DAT_14cb7c610;
  uVar3 = local_50;
  if (DAT_14cb7c610 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7c600,0,DAT_14cb7c610,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb7c608;
        if (DAT_14cb7c608 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c600;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7c610 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7c5d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7c5f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7c5c8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb7c610 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb7c608;
        if (DAT_14cb7c608 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c600;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7c610 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7c608;
        if (DAT_14cb7c608 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c600;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7c610 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457099b0 FUN_1457099b0 body=159 status=ok
// SIG undefined FUN_1457099b0(void)

undefined8 * FUN_1457099b0(undefined8 *param_1)

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
  uVar4 = FUN_1459aa096();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
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



// FUNCTION 145709a52 FUN_145709a52 body=159 status=ok
// SIG undefined FUN_145709a52(void)

undefined8 * FUN_145709a52(undefined8 *param_1)

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
  uVar4 = FUN_1459aa0ce();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
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



// FUNCTION 145709af4 FUN_145709af4 body=132 status=ok
// SIG undefined FUN_145709af4(void)

void FUN_145709af4(longlong param_1,int param_2)

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



// FUNCTION 145709b7a FUN_145709b7a body=226 status=ok
// SIG undefined FUN_145709b7a(void)

longlong * FUN_145709b7a(longlong *param_1)

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
  pcVar13 = FUN_146314b8a;
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



// FUNCTION 145709c5e FUN_145709c5e body=138 status=ok
// SIG undefined FUN_145709c5e(void)

code * FUN_145709c5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473394a6;
}



// FUNCTION 145709ce8 FUN_145709ce8 body=138 status=ok
// SIG undefined FUN_145709ce8(void)

code * FUN_145709ce8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridZParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733941c;
}



// FUNCTION 145709d72 FUN_145709d72 body=138 status=ok
// SIG undefined FUN_145709d72(void)

code * FUN_145709d72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ResourceGridSizeInt";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145709c5e;
}



// FUNCTION 145709dfc FUN_145709dfc body=182 status=ok
// SIG undefined FUN_145709dfc(void)

void FUN_145709dfc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  FUN_140c8411c(param_1 + 0x3c18);
  plVar6 = (longlong *)(param_1 + 0x3bc8);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_1407db052(plVar6,uVar2,param_2);
  if (((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x20 + *plVar6, lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 != 0)) {
    FUN_140925f20(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_145709eb4(plVar6,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145709eb4 FUN_145709eb4 body=264 status=ok
// SIG undefined FUN_145709eb4(void)

undefined4 FUN_145709eb4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar2,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_145709f22:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x20);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_145709f7c;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_145709f7c;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_145709f82;
      }
      if (iVar1 + iVar2 == 1) goto LAB_145709f82;
      goto LAB_145709fab;
    }
  }
  return 0;
LAB_145709f7c:
  if (uVar5 == uVar7) {
LAB_145709f82:
    FUN_145709fbc(param_1);
    return 1;
  }
LAB_145709fab:
  iVar1 = (int)plVar3[3];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_145709f22;
}



// FUNCTION 145709fbc FUN_145709fbc body=89 status=ok
// SIG undefined FUN_145709fbc(void)

void FUN_145709fbc(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14570a016();
  return;
}



// FUNCTION 14570a016 FUN_14570a016 body=51 status=ok
// SIG undefined FUN_14570a016(void)

void FUN_14570a016(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14570a04a(param_1,param_2);
  return;
}



// FUNCTION 14570a04a FUN_14570a04a body=116 status=ok
// SIG undefined FUN_14570a04a(void)

void FUN_14570a04a(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14570a0be FUN_14570a0be body=362 status=ok
// SIG undefined FUN_14570a0be(void)

void FUN_14570a0be(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  plVar2 = (longlong *)FUN_140a3d526(lVar4);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2e8))(plVar2,param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x778);
  if (lVar4 != 0) {
    local_68 = *(undefined8 *)(param_1 + 0x768);
    local_60 = *(longlong *)(param_1 + 0x770);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    uVar3 = FUN_140206ee8(param_1 + 0x6b0,&local_68);
    local_78 = 0;
    FUN_14084a448(lVar4,&local_58,uVar3,param_1);
    local_58 = 0;
    local_50 = 0xffffffffffffffff;
    iVar1 = *(int *)(param_1 + 0x788);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x780);
      lVar5 = 0;
      do {
        FUN_14072da56(*(undefined8 *)(param_1 + 0x778),*(undefined8 *)(lVar4 + lVar5),
                      (int)(*(float *)(param_1 + 0x6f0) * 1000.0));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x788) = 0;
  if (*(int *)(param_1 + 0x78c) != 0) {
    FUN_1448f21ac(param_1 + 0x780,0);
  }
  *(undefined8 *)(param_1 + 0x744) = 0;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570a22a FUN_14570a22a body=107 status=ok
// SIG undefined FUN_14570a22a(void)

void FUN_14570a22a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_20 = &local_28;
    FUN_14570a296(param_1 + 0x70);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570a296 FUN_14570a296 body=289 status=ok
// SIG undefined FUN_14570a296(void)

void FUN_14570a296(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar5 = FUN_14570a3b8(lVar2,*param_2);
    iVar9 = 0;
    iVar10 = 0;
    do {
      lVar8 = (longlong)iVar10;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar2 + 8 + lVar8 * 8;
      lVar7 = lVar8;
      iVar11 = iVar10;
      do {
        lVar7 = lVar7 + 1;
        iVar4 = iVar3;
        if (lVar13 <= lVar7) break;
        bVar6 = FUN_14570a3b8(lVar12,*param_2);
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 8;
        iVar4 = iVar11;
      } while ((bVar5 & 1) == bVar6);
      if ((bVar5 & 1) == 0) {
        if (iVar9 != iVar10) {
          memmove((void *)(lVar2 + (longlong)iVar9 * 8),(void *)(lVar2 + lVar8 * 8),
                  (longlong)(iVar4 - iVar10) << 3);
        }
        iVar9 = iVar9 + (iVar4 - iVar10);
      }
      iVar10 = iVar4;
      bVar5 = bVar5 ^ 1;
    } while (lVar7 < lVar13);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14570a3b8 FUN_14570a3b8 body=55 status=ok
// SIG undefined FUN_14570a3b8(void)

ulonglong FUN_14570a3b8(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14570a3f0 FUN_14570a3f0 body=430 status=ok
// SIG undefined FUN_14570a3f0(void)

void FUN_14570a3f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  plVar2 = (longlong *)FUN_140a3d526(lVar5);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2e0))(plVar2,param_1);
  }
  lVar5 = *(longlong *)(param_1 + 0x778);
  if (lVar5 != 0) {
    local_68 = *(undefined8 *)(param_1 + 0x768);
    local_60 = *(longlong *)(param_1 + 0x770);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    uVar3 = FUN_140206ee8(param_1 + 0x680,&local_68);
    local_98 = 0;
    FUN_14084a448(lVar5,&local_58,uVar3,param_1);
    local_58 = 0;
    local_50 = 0xffffffffffffffff;
    if ((longlong)*(int *)(param_1 + 0x6e8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x6e0);
      lVar6 = (longlong)*(int *)(param_1 + 0x6e8) * 0x30;
      do {
        local_90 = *(undefined8 *)(param_1 + 0x768);
        uVar3 = *(undefined8 *)(param_1 + 0x778);
        local_88 = *(longlong *)(param_1 + 0x770);
        if (local_88 != 0) {
          LOCK();
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
          UNLOCK();
        }
        uVar4 = FUN_140206ee8(lVar5,&local_90);
        local_98 = 0;
        FUN_14084a448(uVar3,local_80,uVar4,param_1);
        iVar1 = *(int *)(param_1 + 0x788);
        *(uint *)(param_1 + 0x788) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x78c) < iVar1 + 1U) {
          FUN_14479d316((longlong *)(param_1 + 0x780),iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x780) + (longlong)iVar1 * 8) = local_70;
        lVar5 = lVar5 + 0x30;
        lVar6 = lVar6 + -0x30;
      } while (lVar6 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570a5a0 FUN_14570a5a0 body=300 status=ok
// SIG undefined FUN_14570a5a0(void)

void FUN_14570a5a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x70);
    if (0 < *(int *)(param_1 + 0x78)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar3 = FUN_14479d2ce(*plVar1 + lVar4);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x6f8) < *(int *)(param_2 + 0x6f8))) {
          local_38 = 0;
          FUN_14485c47a(&local_38,param_2);
          iVar2 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
            FUN_14570a6ce(plVar1,iVar2);
          }
          memmove((void *)(*plVar1 + lVar4 + 8),(void *)(*plVar1 + lVar4),
                  (ulonglong)(uint)(iVar2 - (int)lVar5) << 3);
          *(undefined8 *)(*plVar1 + lVar4) = local_38;
          goto LAB_14570a611;
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar5 < *(int *)(param_1 + 0x78));
    }
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_14570a6ce(plVar1,iVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = local_38;
  }
LAB_14570a611:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570a6ce FUN_14570a6ce body=132 status=ok
// SIG undefined FUN_14570a6ce(void)

void FUN_14570a6ce(longlong param_1,int param_2)

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



// FUNCTION 14570a752 FUN_14570a752 body=226 status=ok
// SIG undefined FUN_14570a752(void)

longlong * FUN_14570a752(longlong *param_1)

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
  pcVar13 = FUN_1462d4f02;
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



// FUNCTION 14570a83a FUN_14570a83a body=132 status=ok
// SIG undefined FUN_14570a83a(void)

undefined1 * FUN_14570a83a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14570a836;
}



// FUNCTION 14570a8be FUN_14570a8be body=138 status=ok
// SIG undefined FUN_14570a8be(void)

code * FUN_14570a8be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionAtlasSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d470c;
}



// FUNCTION 14570a948 FUN_14570a948 body=226 status=ok
// SIG undefined FUN_14570a948(void)

longlong * FUN_14570a948(longlong *param_1)

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
  pcVar13 = FUN_1462d401c;
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



// FUNCTION 14570aa30 FUN_14570aa30 body=132 status=ok
// SIG undefined FUN_14570aa30(void)

undefined1 * FUN_14570aa30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14570aa2c;
}



// FUNCTION 14570aab4 FUN_14570aab4 body=138 status=ok
// SIG undefined FUN_14570aab4(void)

code * FUN_14570aab4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageInfoBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570aa30;
}



// FUNCTION 14570ab3e FUN_14570ab3e body=347 status=ok
// SIG undefined FUN_14570ab3e(void)

longlong FUN_14570ab3e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = DAT_14c949118;
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x20)) {
    if (lVar1 == 0) {
      local_38 = FUN_140631fbe;
      lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar1;
      FUN_1446f470e(local_30,L"Class",1);
      local_48 = &LAB_146891e90;
      local_50 = &LAB_146273097;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x20;
      local_70 = 0x10000000;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar1);
      DAT_14c949118 = lVar1;
      uVar2 = FUN_144a7a812();
      lVar1 = DAT_14c949118;
      uVar3 = FUN_1449e2fb2();
      local_78 = L"Class";
      FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
      lVar1 = DAT_14c949118;
    }
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14570ab90;
  }
  param_1 = 0;
LAB_14570ab90:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570ac9a FUN_14570ac9a body=293 status=ok
// SIG undefined FUN_14570ac9a(void)

undefined4 *
FUN_14570ac9a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  FUN_1403e9896(param_1,local_58);
  FUN_1403e970a(param_4,local_50);
  *(undefined4 *)(local_50 + 0x108) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1403e964e(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0x10c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x108) =
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
      FUN_1403e9a80(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570adc0 FUN_14570adc0 body=482 status=ok
// SIG undefined FUN_14570adc0(void)

void FUN_14570adc0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 14570afa4 FUN_14570afa4 body=136 status=ok
// SIG undefined FUN_14570afa4(void)

code * FUN_14570afa4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AerialPerspectiveMieOnlyStartDistanceKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000295;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147335984;
}



// FUNCTION 14570b02c FUN_14570b02c body=138 status=ok
// SIG undefined FUN_14570b02c(void)

code * FUN_14570b02c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AerialPerspectiveRayOnlyStartDistanceKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7f800000293;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147335a0e;
}



// FUNCTION 14570b0b6 FUN_14570b0b6 body=138 status=ok
// SIG undefined FUN_14570b0b6(void)

code * FUN_14570b0b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EnableAtmosphericLightsSampling";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7ec00000290;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147335b22;
}



// FUNCTION 14570b140 FUN_14570b140 body=132 status=ok
// SIG undefined FUN_14570b140(void)

undefined1 * FUN_14570b140(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x107;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c0592;
}



// FUNCTION 14570b1c4 FUN_14570b1c4 body=138 status=ok
// SIG undefined FUN_14570b1c4(void)

code * FUN_14570b1c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000010e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c036a;
}



// FUNCTION 14570b24e FUN_14570b24e body=138 status=ok
// SIG undefined FUN_14570b24e(void)

code * FUN_14570b24e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000110;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570b1c4;
}



// FUNCTION 14570b2d8 FUN_14570b2d8 body=486 status=ok
// SIG undefined FUN_14570b2d8(void)

void FUN_14570b2d8(ushort *param_1,longlong param_2,longlong param_3,longlong *param_4,byte param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  longlong lVar14;
  int iVar15;
  ushort uVar16;
  bool bVar17;
  
  iVar2 = (int)param_4[1];
  if (iVar2 != 0) {
    iVar15 = iVar2 + -1;
    if (param_5 == 0) {
      iVar15 = 0;
    }
    iVar12 = -1;
    if (param_5 == 0) {
      iVar12 = iVar2;
    }
    uVar1 = *(uint *)(param_3 + 0x88);
    uVar9 = 2;
    if (2 < (int)uVar1 / 2) {
      uVar9 = (int)uVar1 / 2;
    }
    if ((int)uVar1 <= (int)uVar9) {
      uVar9 = uVar1;
    }
    uVar6 = *(uint *)(param_2 + 0xc);
    uVar8 = uVar1;
    do {
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        iVar2 = *(int *)(*param_4 + (longlong)iVar15 * 4);
        uVar10 = 0;
        do {
          uVar11 = uVar10 + 1;
          bVar17 = uVar10 == uVar6 - 1;
          uVar6 = uVar11;
          if (bVar17) {
            uVar6 = 0;
          }
          uVar4 = (ushort)(uVar10 << (*(byte *)(param_2 + 0x18) & 0x1f)) |
                  (ushort)(iVar2 << (*(byte *)(param_2 + 0x10) & 0x1f));
          uVar5 = (ushort)(uVar6 << (*(byte *)(param_2 + 0x18) & 0x1f)) |
                  (ushort)((uint)bVar17 + iVar2 << (*(byte *)(param_2 + 0x10) & 0x1f));
          if (uVar1 == 0) {
            uVar6 = 0;
            goto LAB_14570b420;
          }
          uVar6 = 0;
          do {
            lVar14 = *(longlong *)(param_3 + 0x80);
            if (*(longlong *)(param_3 + 0x80) == 0) {
              lVar14 = param_3;
            }
            uVar3 = *(undefined4 *)(lVar14 + (longlong)(int)(uVar6 + 1) * 4);
            uVar7 = (ushort)*(undefined4 *)(lVar14 + (longlong)(int)uVar6 * 4);
            *param_1 = uVar7 | uVar4;
            uVar13 = (ushort)uVar3;
            uVar16 = uVar13 | uVar4;
            param_1[1] = uVar16;
            uVar7 = uVar7 | uVar5;
            param_1[2] = uVar7;
            param_1[3] = uVar16;
            param_1[4] = uVar13 | uVar5;
            param_1[5] = uVar7;
            param_1 = param_1 + 6;
            uVar6 = uVar6 + 2;
          } while (uVar6 < uVar9);
          while( true ) {
            uVar8 = *(uint *)(param_3 + 0x88);
LAB_14570b420:
            if (uVar8 <= uVar6) break;
            lVar14 = *(longlong *)(param_3 + 0x80);
            if (*(longlong *)(param_3 + 0x80) == 0) {
              lVar14 = param_3;
            }
            uVar3 = *(undefined4 *)(lVar14 + (longlong)(int)(uVar6 + 1) * 4);
            uVar7 = (ushort)*(undefined4 *)(lVar14 + (longlong)(int)uVar6 * 4);
            uVar16 = uVar7 | uVar4;
            *param_1 = uVar16;
            uVar13 = (ushort)uVar3;
            param_1[1] = uVar13 | uVar4;
            uVar13 = uVar13 | uVar5;
            param_1[2] = uVar13;
            param_1[3] = uVar16;
            param_1[4] = uVar13;
            param_1[5] = uVar7 | uVar5;
            param_1 = param_1 + 6;
            uVar6 = uVar6 + 2;
          }
          uVar6 = *(uint *)(param_2 + 0xc);
          uVar10 = uVar11;
        } while (uVar11 < uVar6);
      }
      iVar15 = iVar15 + (-(uint)param_5 | 1);
    } while (iVar15 != iVar12);
  }
  return;
}



// FUNCTION 14570b4be FUN_14570b4be body=173 status=ok
// SIG undefined FUN_14570b4be(void)

void FUN_14570b4be(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2 + 0x40,&local_38);
  local_58 = local_38;
  if (local_30 == 0) {
    local_58 = &DAT_149dfb77a;
  }
  pwVar1 = L"(nullptr)";
  if (*(wchar_t **)(param_2 + 0x30) != (wchar_t *)0x0) {
    pwVar1 = *(wchar_t **)(param_2 + 0x30);
  }
  local_50 = param_3;
  local_48 = param_4;
  FUN_140033559(".\\Runtime/RHI/Private/RHICommandList.cpp",0x8c3,
                L"Attempt to create zero-sized buffer \'%s\', owner \'%s\', usage 0x%x, stride %u.",
                pwVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570b56c FUN_14570b56c body=132 status=ok
// SIG undefined FUN_14570b56c(void)

void FUN_14570b56c(longlong param_1,int param_2)

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



// FUNCTION 14570b5f2 FUN_14570b5f2 body=147 status=ok
// SIG undefined FUN_14570b5f2(void)

void FUN_14570b5f2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14570b686 FUN_14570b686 body=429 status=ok
// SIG undefined FUN_14570b686(void)

undefined8 * FUN_14570b686(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x265) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4e] = param_1;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_145c805d0(param_1 + 0x59);
  FUN_14570b834(param_1,param_2);
  return param_1;
}



// FUNCTION 14570b834 FUN_14570b834 body=476 status=ok
// SIG undefined FUN_14570b834(void)

longlong FUN_14570b834(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_1413f4b02();
  FUN_14570bacc(param_1,param_2);
  FUN_14570bb2c(param_1 + 0x50,param_2 + 0x50);
  FUN_14570bb8c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14570bbec(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14570bc4c(param_1 + 0x140,param_2 + 0x140);
  FUN_14570ba10(param_1 + 400,param_2 + 400);
  FUN_14570ba6e(param_1 + 0x1e0,param_2 + 0x1e0);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x230) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
    *(undefined8 *)(param_2 + 0x238) = 0;
    if (*(longlong *)(param_1 + 0x240) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
    *(undefined8 *)(param_2 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
    *(undefined8 *)(param_2 + 0x248) = 0;
    if (*(longlong *)(param_1 + 0x250) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
    *(undefined8 *)(param_2 + 0x250) = 0;
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
    *(undefined8 *)(param_2 + 600) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_2 + 0x260) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_2 + 0x264) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_2 + 0x268) = uVar1;
  FUN_14570bdd8(param_1 + 0x2c8,param_2 + 0x2c8);
  return param_1;
}



// FUNCTION 14570ba10 FUN_14570ba10 body=93 status=ok
// SIG undefined FUN_14570ba10(void)

longlong FUN_14570ba10(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570bcac(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570ba6e FUN_14570ba6e body=93 status=ok
// SIG undefined FUN_14570ba6e(void)

longlong FUN_14570ba6e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570bd42(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bacc FUN_14570bacc body=95 status=ok
// SIG undefined FUN_14570bacc(void)

longlong FUN_14570bacc(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1410ff662(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bb2c FUN_14570bb2c body=95 status=ok
// SIG undefined FUN_14570bb2c(void)

longlong FUN_14570bb2c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570c9a0(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bb8c FUN_14570bb8c body=95 status=ok
// SIG undefined FUN_14570bb8c(void)

longlong FUN_14570bb8c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570cb62(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bbec FUN_14570bbec body=95 status=ok
// SIG undefined FUN_14570bbec(void)

longlong FUN_14570bbec(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570cd24(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bc4c FUN_14570bc4c body=95 status=ok
// SIG undefined FUN_14570bc4c(void)

longlong FUN_14570bc4c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570cf06(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bcac FUN_14570bcac body=150 status=ok
// SIG undefined FUN_14570bcac(void)

longlong * FUN_14570bcac(longlong *param_1,longlong *param_2)

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



// FUNCTION 14570bd42 FUN_14570bd42 body=150 status=ok
// SIG undefined FUN_14570bd42(void)

longlong * FUN_14570bd42(longlong *param_1,longlong *param_2)

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



// FUNCTION 14570bdd8 FUN_14570bdd8 body=304 status=ok
// SIG undefined FUN_14570bdd8(void)

longlong FUN_14570bdd8(longlong param_1,longlong param_2)

{
  FUN_14570bf66();
  FUN_14570c3f0(param_1,param_2);
  if (param_1 == param_2) {
    FUN_14570bf08(param_1 + 0xb0,param_2 + 0xb0);
  }
  else {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    FUN_14570bf08(param_1 + 0xb0,param_2 + 0xb0);
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined8 *)(param_2 + 0x108) = 0;
  }
  FUN_14570bf08(param_1 + 0x110,param_2 + 0x110);
  FUN_14570bf08(param_1 + 0x160,param_2 + 0x160);
  FUN_14570c392(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_1448325b8(param_1);
  return param_1;
}



// FUNCTION 14570bf08 FUN_14570bf08 body=93 status=ok
// SIG undefined FUN_14570bf08(void)

longlong FUN_14570bf08(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570c598(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570bf66 FUN_14570bf66 body=150 status=ok
// SIG undefined FUN_14570bf66(void)

void FUN_14570bf66(longlong param_1)

{
  FUN_14570bffc();
  FUN_1403fa3f6(param_1 + 0x50,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_14570c084(param_1 + 0xa0,0);
  }
  FUN_1403fa566(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_14701aace(param_1 + 0x100,0);
  }
  FUN_1403fa566(param_1 + 0x110);
  FUN_1403fa566(param_1 + 0x160);
  FUN_14570c040(param_1 + 0x1b0);
  return;
}



// FUNCTION 14570bffc FUN_14570bffc body=67 status=ok
// SIG undefined FUN_14570bffc(void)

void FUN_14570bffc(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14570c242(param_1);
    FUN_1403fa4e6(param_1,0);
    return;
  }
  FUN_1403fa4e6(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14498d7c0(param_1);
  return;
}



// FUNCTION 14570c040 FUN_14570c040 body=67 status=ok
// SIG undefined FUN_14570c040(void)

void FUN_14570c040(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14570c0f2(param_1);
    FUN_1403fa8ea(param_1,0);
    return;
  }
  FUN_1403fa8ea(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14701ab2e(param_1);
  return;
}



// FUNCTION 14570c084 FUN_14570c084 body=110 status=ok
// SIG undefined FUN_14570c084(void)

void FUN_14570c084(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14570c0f2 FUN_14570c0f2 body=335 status=ok
// SIG undefined FUN_14570c0f2(void)

void FUN_14570c0f2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14570c242 FUN_14570c242 body=335 status=ok
// SIG undefined FUN_14570c242(void)

void FUN_14570c242(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14570c392 FUN_14570c392 body=93 status=ok
// SIG undefined FUN_14570c392(void)

longlong FUN_14570c392(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570c7e8(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570c3f0 FUN_14570c3f0 body=95 status=ok
// SIG undefined FUN_14570c3f0(void)

longlong FUN_14570c3f0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14570c750(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14570c450 FUN_14570c450 body=327 status=ok
// SIG undefined FUN_14570c450(void)

void FUN_14570c450(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14570c598 FUN_14570c598 body=439 status=ok
// SIG undefined FUN_14570c598(void)

longlong * FUN_14570c598(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570c750 FUN_14570c750 body=152 status=ok
// SIG undefined FUN_14570c750(void)

longlong * FUN_14570c750(longlong *param_1,longlong *param_2)

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



// FUNCTION 14570c7e8 FUN_14570c7e8 body=439 status=ok
// SIG undefined FUN_14570c7e8(void)

longlong * FUN_14570c7e8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570c9a0 FUN_14570c9a0 body=448 status=ok
// SIG undefined FUN_14570c9a0(void)

longlong * FUN_14570c9a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570cb62 FUN_14570cb62 body=448 status=ok
// SIG undefined FUN_14570cb62(void)

longlong * FUN_14570cb62(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570cd24 FUN_14570cd24 body=480 status=ok
// SIG undefined FUN_14570cd24(void)

longlong * FUN_14570cd24(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x68;
        *(undefined4 *)(lVar2 + 0x58 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x50 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_140d6e09a(lVar2 + lVar8 + 0x10);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570cf06 FUN_14570cf06 body=484 status=ok
// SIG undefined FUN_14570cf06(void)

longlong * FUN_14570cf06(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_1403950f6(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570d0ec FUN_14570d0ec body=124 status=ok
// SIG undefined FUN_14570d0ec(void)

void FUN_14570d0ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1403fc062(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14570d169 FUN_14570d169 body=133 status=ok
// SIG undefined FUN_14570d169(void)

undefined8 FUN_14570d169(undefined8 param_1)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_20 = 0;
  local_60 = in_stack_00000030;
  local_68 = in_stack_00000028;
  FUN_14570d1ef(local_58);
  FUN_1403fdc5c(param_1,local_58,2,1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570d1ef FUN_14570d1ef body=256 status=ok
// SIG undefined FUN_14570d1ef(void)

void FUN_14570d1ef(int *param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  int param_6)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  param_1[5] = param_3;
  lVar5 = DAT_14ca94db0;
  uVar3 = (ulonglong)DAT_14ca85550;
  if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar3 * 0x3c + 6) & 0x10) == 0) {
    *(longlong *)(param_1 + 8) = DAT_14ca94db0;
    *(longlong *)(param_1 + 10) = lVar5;
    *(longlong *)(param_1 + 0xc) = lVar5;
    *(longlong *)(param_1 + 6) = lVar5;
    lVar4 = *(longlong *)(param_1 + 0xe);
    iVar6 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x1c8);
    lVar5 = DAT_14ca94db0;
    lVar4 = *(longlong *)(param_2 + 0x200);
    if (*(longlong *)(param_2 + 0x200) == 0) {
      lVar4 = DAT_14ca94db0;
    }
    *(longlong *)(param_1 + 10) = lVar4;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x1d0);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x1d8);
    if (param_4 == 0) {
      lVar4 = *(longlong *)(param_2 + 0x1e0);
      *(longlong *)(param_1 + 0xe) = lVar4;
      iVar6 = *(int *)(param_2 + 0x1e8);
    }
    else {
      lVar4 = *(longlong *)(param_4 + 0x20);
      *(longlong *)(param_1 + 0xe) = lVar4;
      iVar6 = (*(uint *)(param_4 + 0x34) < 2) - 1;
    }
  }
  if (lVar4 == 0) {
    *(longlong *)(param_1 + 0xe) = lVar5;
  }
  bVar1 = *(byte *)(param_2 + 0x1ed);
  if (*(longlong *)(&DAT_14ca814b0 + uVar3 * 0x3c) == DAT_14ca81498) {
    param_5 = 0;
  }
  cVar2 = *(char *)(param_2 + 0x1ec);
  if (*(longlong *)(&DAT_14ca814b0 + uVar3 * 0x3c) == DAT_14ca81498) {
    param_6 = 0;
  }
  *param_1 = iVar6;
  param_1[1] = (uint)bVar1;
  param_1[2] = (int)cVar2;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}



// FUNCTION 14570d2f0 FUN_14570d2f0 body=84 status=ok
// SIG undefined FUN_14570d2f0(void)

longlong FUN_14570d2f0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_144a799b0();
  lVar2 = FUN_14570d344(param_1,&DAT_14cc06918,uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a799b0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14570d344 FUN_14570d344 body=206 status=ok
// SIG undefined FUN_14570d344(void)

longlong FUN_14570d344(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar5 = *param_2;
    uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar6 = (uint)lVar5 & 0xffff;
    lVar4 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar2 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x18),
            *plVar1 != lVar5) {
        iVar2 = (int)plVar1[2];
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (plVar1 == (longlong *)0x0) {
        return 0;
      }
      if (plVar1 == (longlong *)&DAT_fffffffffffffff8) {
        return 0;
      }
      lVar5 = FUN_14479d2ce();
      if (lVar5 != 0) {
        if (*(int *)(param_3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(param_3 + 0x38) * 8) != param_3 + 0x30) {
            return 0;
          }
          return lVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14570d412 FUN_14570d412 body=125 status=ok
// SIG undefined FUN_14570d412(void)

undefined8 * FUN_14570d412(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1404037fe();
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



// FUNCTION 14570d490 FUN_14570d490 body=127 status=ok
// SIG undefined FUN_14570d490(void)

undefined8 * FUN_14570d490(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14570d510();
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



// FUNCTION 14570d510 FUN_14570d510 body=471 status=ok
// SIG undefined FUN_14570d510(void)

longlong * FUN_14570d510(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x70;
        *(undefined4 *)(lVar2 + 0x60 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x58 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_1406d06c4(lVar2 + lVar8 + 0x18);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14570d6e8 FUN_14570d6e8 body=512 status=ok
// SIG undefined FUN_14570d6e8(void)

undefined4 FUN_14570d6e8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 **local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14040d984(&local_a0);
  if (local_98 != (longlong *)0x0) {
    iVar6 = (int)local_98[1];
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_98[1];
      bVar12 = iVar6 == iVar4;
      if (bVar12) {
        *(int *)(local_98 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar11 = local_98;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    puVar3 = local_a0;
    if (plVar11 != (longlong *)0x0) {
      if (local_a0 == (undefined8 *)0x0) {
LAB_14570d8b8:
        uVar7 = 0;
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x20);
        if (lVar8 == 0) {
          uVar9 = FUN_1401ad114();
          lVar8 = FUN_14477b664(uVar9);
          *(longlong *)(param_1 + 0x20) = lVar8;
        }
        lVar10 = *(longlong *)(param_1 + 0x28);
        if (lVar10 == 0) {
          uVar7 = 0;
          if ((lVar8 != 0) && (local_a8 = (longlong *)(param_1 + 0x18), *local_a8 != 0)) {
            plVar2 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
              *(undefined8 *)(param_1 + 0x28) = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar10 = FUN_144aff482(uVar9,local_a8);
              *(longlong *)(param_1 + 0x28) = lVar10;
              if (lVar10 != 0) goto LAB_14570d789;
            }
            goto LAB_14570d8b8;
          }
        }
        else {
LAB_14570d789:
          FUN_14040dabc(puVar3,param_1);
          local_68 = *(undefined8 *)(lVar10 + 0xb0);
          uStack_60 = *(undefined8 *)(lVar10 + 0xb8);
          local_a0 = &local_68;
          local_58 = *(undefined8 *)(lVar10 + 0xc0);
          local_6c = *(undefined4 *)(lVar10 + 0xf0);
          local_98 = (longlong *)&local_6c;
          local_80 = FUN_1440ce89c;
          local_90 = param_4;
          local_88 = param_3;
          local_78 = &local_a0;
          uVar7 = FUN_14040d662(param_1,param_2);
        }
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      goto LAB_14570d7ff;
    }
  }
  uVar7 = 0;
LAB_14570d7ff:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14570d8ea FUN_14570d8ea body=65 status=ok
// SIG undefined FUN_14570d8ea(void)

longlong FUN_14570d8ea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148cebf0c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  FUN_14570d92b(lVar2);
  return lVar2;
}



// FUNCTION 14570d92b FUN_14570d92b body=35 status=ok
// SIG undefined FUN_14570d92b(void)

void FUN_14570d92b(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0x13] = 0x400000000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14570d94e FUN_14570d94e body=112 status=ok
// SIG undefined FUN_14570d94e(void)

void FUN_14570d94e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xa0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 14570d9be FUN_14570d9be body=333 status=ok
// SIG undefined FUN_14570d9be(void)

undefined4 * FUN_14570d9be(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14570dbbe(param_1,local_48);
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1414a8c77(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14570db0c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14570dcae(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570db0c FUN_14570db0c body=178 status=ok
// SIG undefined FUN_14570db0c(void)

undefined8 FUN_14570db0c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1414a8c77(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148cebe9a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14570dbbe FUN_14570dbbe body=239 status=ok
// SIG undefined FUN_14570dbbe(void)

int * FUN_14570dbbe(longlong *param_1,int *param_2)

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



// FUNCTION 14570dcae FUN_14570dcae body=486 status=ok
// SIG undefined FUN_14570dcae(void)

void FUN_14570dcae(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570de96 FUN_14570de96 body=123 status=ok
// SIG undefined FUN_14570de96(void)

void FUN_14570de96(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14570df12(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14570df12 FUN_14570df12 body=141 status=ok
// SIG undefined FUN_14570df12(void)

void FUN_14570df12(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x20);
  return;
}



// FUNCTION 14570dfa0 FUN_14570dfa0 body=132 status=ok
// SIG undefined FUN_14570dfa0(void)

void FUN_14570dfa0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1403966e6();
  if (cVar1 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    DAT_14c760d60 = param_3;
    lVar2 = FUN_140f058b4(param_1);
    if (lVar2 != 0) {
      FUN_140410ec0(lVar2,param_2,param_3,param_4,param_5);
    }
                    /* WARNING: Could not recover jumptable at 0x00014570e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    return;
  }
  return;
}



// FUNCTION 14570e024 FUN_14570e024 body=131 status=ok
// SIG undefined FUN_14570e024(void)

void FUN_14570e024(undefined8 param_1,int param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 2) {
    local_20 = &local_21;
    local_18 = &local_20;
    FUN_14740b2bc(param_1);
  }
  else {
    if (param_2 != 1) goto LAB_14570e045;
    local_20 = &local_21;
    local_18 = &local_20;
    FUN_14740aaf4(param_1);
  }
  FUN_1408374a4(param_1);
LAB_14570e045:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570e0a8 FUN_14570e0a8 body=95 status=ok
// SIG undefined FUN_14570e0a8(void)

void FUN_14570e0a8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar1 = (longlong *)FUN_140415bba();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(lVar2 + 0x194);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar2 + 400);
  return;
}



// FUNCTION 14570e108 FUN_14570e108 body=662 status=ok
// SIG undefined FUN_14570e108(void)

void FUN_14570e108(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined2 **local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8 [2];
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined2 *local_78;
  int local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  undefined2 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar7 = (undefined2 *)*param_2;
  if (puVar7 != (undefined2 *)0x0) {
    local_30 = puVar7;
    lVar4 = (**(code **)(*param_1 + 0xb98))();
    if ((lVar4 != 0) && (iVar1 = FUN_144992686(lVar4,puVar7), iVar1 == -1)) {
      uVar2 = FUN_144909502(param_1,*param_2);
      uVar5 = FUN_140418574(param_1);
      uVar3 = FUN_147c7d804(lVar4,uVar5,uVar2);
      if ((-1 < (int)uVar3) &&
         (((int)uVar3 < (int)param_1[0x1af] &&
          (lVar4 = *(longlong *)(param_1[0x1ae] + (ulonglong)uVar3 * 8), lVar4 != 0)))) {
        FUN_14041807a(param_1,&local_78,(int)*(short *)(lVar4 + 0x10));
        local_30 = local_78;
        puVar7 = local_78;
        if (local_78 == (undefined2 *)0x0) goto LAB_14570e2f0;
      }
    }
    FUN_1400021e4(&local_30,&local_48);
    puVar6 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar6 = local_48;
    }
    FUN_140002266(&local_78,L"RemovedBodyAndChildren_%s",puVar6);
    puVar6 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar6 = local_78;
    }
    FUN_1446f470e(&local_38,puVar6,1);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140416388(&local_78,0);
    local_a8[0] = local_78;
    if ((local_78 != (undefined2 *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_138 = local_a8;
    local_80 = local_50;
    local_90 = local_60;
    uStack_8c = uStack_5c;
    uStack_88 = uStack_58;
    uStack_84 = uStack_54;
    uStack_98 = uStack_68;
    local_140 = &local_c0;
    local_c0 = 0x3ee4f8b580000000;
    local_b8 = 0x3ee4f8b580000000;
    local_b0 = 0x3ee4f8b580000000;
    local_148 = &local_d8;
    local_d8 = DAT_14c8464f8;
    uStack_d0 = DAT_14c846500;
    local_c8 = DAT_14c846508;
    local_f8 = (undefined4)DAT_14c8464e0;
    uStack_f4 = DAT_14c8464e0._4_4_;
    uStack_f0 = (undefined4)DAT_14c8464e8;
    uStack_ec = DAT_14c8464e8._4_4_;
    local_e8 = DAT_14c8464f0;
    local_110 = 1;
    local_118 = 1;
    local_120 = 1;
    local_128 = 0;
    local_130 = 0;
    local_108 = 0;
    FUN_14041646c(param_1,local_38,puVar7);
  }
LAB_14570e2f0:
  if ((local_28 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570e3a0 FUN_14570e3a0 body=55 status=ok
// SIG undefined FUN_14570e3a0(void)

void FUN_14570e3a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14c84635c;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfe;
  return;
}



// FUNCTION 14570e3d8 FUN_14570e3d8 body=132 status=ok
// SIG undefined FUN_14570e3d8(void)

void FUN_14570e3d8(longlong param_1,int param_2)

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



// FUNCTION 14570e45c FUN_14570e45c body=226 status=ok
// SIG undefined FUN_14570e45c(void)

longlong * FUN_14570e45c(longlong *param_1)

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
  pcVar13 = FUN_1462d1912;
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



// FUNCTION 14570e540 FUN_14570e540 body=132 status=ok
// SIG undefined FUN_14570e540(void)

undefined1 * FUN_14570e540(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471bfe02;
}



// FUNCTION 14570e5c4 FUN_14570e5c4 body=138 status=ok
// SIG undefined FUN_14570e5c4(void)

code * FUN_14570e5c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bEnableIndirectionGrid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfc64;
}



// FUNCTION 14570e64e FUN_14570e64e body=138 status=ok
// SIG undefined FUN_14570e64e(void)

code * FUN_14570e64e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570e540;
}



// FUNCTION 14570e6d8 FUN_14570e6d8 body=58 status=ok
// SIG undefined FUN_14570e6d8(void)

void FUN_14570e6d8(undefined8 *param_1,int param_2)

{
  FUN_14042ab82(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14570e712(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14570e712 FUN_14570e712 body=111 status=ok
// SIG undefined FUN_14570e712(void)

void FUN_14570e712(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x110,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x110)) {
      uVar2 = uVar1 / 0x110 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x110,8);
  }
  return;
}



// FUNCTION 14570e782 FUN_14570e782 body=93 status=ok
// SIG undefined FUN_14570e782(void)

undefined8 * FUN_14570e782(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14042a3cd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14570e81c(param_1,iVar1);
      FUN_14570e7df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14570e7df FUN_14570e7df body=60 status=ok
// SIG undefined FUN_14570e7df(void)

void FUN_14570e7df(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140391044(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 14570e81c FUN_14570e81c body=98 status=ok
// SIG undefined FUN_14570e81c(void)

void FUN_14570e81c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14570e87e FUN_14570e87e body=389 status=ok
// SIG undefined FUN_14570e87e(void)

/* WARNING: Removing unreachable block (ram,0x00014570e9f6) */
/* WARNING: Removing unreachable block (ram,0x00014570e9fd) */

void FUN_14570e87e(longlong param_1,ulonglong *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = param_3[4];
  uStack_54 = param_3[5];
  uStack_50 = param_3[6];
  uStack_4c = param_3[7];
  FUN_14570ea04(&local_38,param_4);
  FUN_14570ea4e(&local_48,param_5);
  uVar3 = *param_2;
  if ((uVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar3);
  }
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  plVar6 = (longlong *)FUN_14570eb1c(param_1 + 0x730,uVar5 >> 0x10 ^ uVar5,param_2);
  iVar2 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
    FUN_14570ea98(plVar6,iVar2);
  }
  lVar4 = *plVar6;
  lVar7 = (longlong)iVar2 * 0x40;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar4 + lVar7);
  *puVar1 = local_68;
  puVar1[1] = uStack_64;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = local_48;
  *(undefined4 *)(lVar4 + 0x28 + lVar7) = (undefined4)uStack_40;
  *(undefined4 *)(lVar4 + 0x2c + lVar7) = uStack_40._4_4_;
  *(undefined8 *)(lVar4 + 0x30 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar7) = local_38;
  *(undefined4 *)(lVar4 + 0x38 + lVar7) = (undefined4)uStack_30;
  *(undefined4 *)(lVar4 + 0x3c + lVar7) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570ea04 FUN_14570ea04 body=74 status=ok
// SIG undefined FUN_14570ea04(void)

undefined8 * FUN_14570ea04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405b853a(param_1,iVar1);
    FUN_147fa2dbf(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14570ea4e FUN_14570ea4e body=74 status=ok
// SIG undefined FUN_14570ea4e(void)

undefined8 * FUN_14570ea4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405b83fc(param_1,iVar1);
    FUN_147fa2e11(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14570ea98 FUN_14570ea98 body=132 status=ok
// SIG undefined FUN_14570ea98(void)

void FUN_14570ea98(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14570eb1c FUN_14570eb1c body=133 status=ok
// SIG undefined FUN_14570eb1c(void)

longlong FUN_14570eb1c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140949712();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_14570eb69;
  }
  local_30 = param_3;
  FUN_14570eba2(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_14570eb69:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 8;
}



// FUNCTION 14570eba2 FUN_14570eba2 body=269 status=ok
// SIG undefined FUN_14570eba2(void)

undefined4 * FUN_14570eba2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14570ee10(param_1,local_48);
  FUN_14570ecb0(param_4,local_40);
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_14570ed32(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
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
      FUN_14570ef00(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570ecb0 FUN_14570ecb0 body=65 status=ok
// SIG undefined FUN_14570ecb0(void)

longlong * FUN_14570ecb0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_1;
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14570ecf1(0,0);
  return param_2;
}



// FUNCTION 14570ecf1 FUN_14570ecf1 body=65 status=ok
// SIG undefined FUN_14570ecf1(void)

void FUN_14570ecf1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
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



// FUNCTION 14570ed32 FUN_14570ed32 body=221 status=ok
// SIG undefined FUN_14570ed32(void)

undefined8 FUN_14570ed32(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_140949712(param_1,param_2,&local_48);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      lVar7 = (longlong)iVar5 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar7);
      FUN_14570ecf1(*(undefined8 *)(lVar2 + 8 + lVar7),*(undefined4 *)(lVar2 + 0x10 + lVar7));
      if (*(longlong *)(lVar2 + 8 + lVar7) != 0) {
        FUN_1400020a8();
      }
      lVar2 = *param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      lVar7 = param_3[1];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar2;
      puVar1[1] = uVar3;
      puVar1[2] = (int)lVar7;
      puVar1[3] = uVar4;
      FUN_147fa2e64(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_14570ed5c;
    }
  }
  uVar6 = 0;
LAB_14570ed5c:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570ee10 FUN_14570ee10 body=239 status=ok
// SIG undefined FUN_14570ee10(void)

int * FUN_14570ee10(longlong *param_1,int *param_2)

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



// FUNCTION 14570ef00 FUN_14570ef00 body=517 status=ok
// SIG undefined FUN_14570ef00(void)

void FUN_14570ef00(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x20);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x20;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x1c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x18) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570f106 FUN_14570f106 body=114 status=ok
// SIG undefined FUN_14570f106(void)

void FUN_14570f106(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 14570f178 FUN_14570f178 body=88 status=ok
// SIG undefined FUN_14570f178(void)

int FUN_14570f178(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14042c7ac(param_1);
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = (longlong)param_1 + ((longlong)uVar2 >> 0x18);
  }
  memset((void *)(uVar2 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return iVar1;
}



// FUNCTION 14570f1d0 FUN_14570f1d0 body=132 status=ok
// SIG undefined FUN_14570f1d0(void)

void FUN_14570f1d0(longlong param_1,int param_2)

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



// FUNCTION 14570f254 FUN_14570f254 body=120 status=ok
// SIG undefined FUN_14570f254(void)

void FUN_14570f254(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb26569 = 0;
  LOCK();
  DAT_14cb26390 = 0;
  UNLOCK();
  local_18 = &local_21;
  local_20 = &LAB_1438ac098;
  FUN_14042cac6();
  if (DAT_14cb259f8 != 0) {
    FUN_14570f2ce();
  }
  FUN_14042d23c(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570f2ce FUN_14570f2ce body=9 status=ok
// SIG undefined FUN_14570f2ce(void)

void FUN_14570f2ce(longlong param_1)

{
  FUN_14042c9dc(*(undefined8 *)(param_1 + 0x60));
  return;
}



// FUNCTION 14570f2d8 FUN_14570f2d8 body=67 status=ok
// SIG undefined FUN_14570f2d8(void)

void FUN_14570f2d8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1406d0234(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14041d2f4(param_1);
    return;
  }
  FUN_14570f598(param_1);
  FUN_1406d0234(param_1,0);
  return;
}



// FUNCTION 14570f31c FUN_14570f31c body=107 status=ok
// SIG undefined FUN_14570f31c(void)

void FUN_14570f31c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (*(int *)(param_1 + 0x48) <= iVar3) {
LAB_14570f36e:
      FUN_14570f6de(param_1);
      FUN_1406d04a0(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == iVar3) goto LAB_14570f36e;
  FUN_1406d04a0(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_140405458(param_1);
  return;
}



// FUNCTION 14570f388 FUN_14570f388 body=107 status=ok
// SIG undefined FUN_14570f388(void)

void FUN_14570f388(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14570f3d7:
      FUN_1406d06fc(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140404396(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14570f3d7;
  FUN_14570f450(param_1);
  FUN_1406d06fc(param_1,param_2);
  return;
}



// FUNCTION 14570f3f4 FUN_14570f3f4 body=91 status=ok
// SIG undefined FUN_14570f3f4(void)

void FUN_14570f3f4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x2b8))();
  (**(code **)(*param_1 + 0x2a8))(param_1);
  param_1[7] = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_14482b126(lVar2,0x40000000);
  return;
}



// FUNCTION 14570f450 FUN_14570f450 body=327 status=ok
// SIG undefined FUN_14570f450(void)

void FUN_14570f450(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14570f598 FUN_14570f598 body=325 status=ok
// SIG undefined FUN_14570f598(void)

void FUN_14570f598(longlong *param_1)

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



// FUNCTION 14570f6de FUN_14570f6de body=325 status=ok
// SIG undefined FUN_14570f6de(void)

void FUN_14570f6de(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 14570f830 FUN_14570f830 body=208 status=ok
// SIG undefined FUN_14570f830(void)

undefined8 * FUN_14570f830(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad6c6f0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x54) = 3;
  param_1[0xc] = 0xc059000000000000;
  param_1[0xd] = 0xc059000000000000;
  param_1[0xe] = 0xc059000000000000;
  param_1[0xf] = 0x4059000000000000;
  param_1[0x10] = 0x4059000000000000;
  param_1[0x11] = 0x4059000000000000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_14570f900(param_1 + 0x13);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_14043110a(param_1 + 0x27);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_14043112a(param_1 + 0x2f);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



// FUNCTION 14570f900 FUN_14570f900 body=190 status=ok
// SIG undefined FUN_14570f900(void)

undefined2 * FUN_14570f900(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar1 = FUN_144830b78(param_1 + 0x12,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 **)(param_1 + 0x14) = &DAT_3f8000003f800000;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  uVar1 = FUN_144830b78(param_1 + 0x22,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x22) = uVar1;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffe00;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0x1459c4000;
  *(undefined8 *)(param_1 + 0x32) = 0x3f80000000000001;
  return param_1;
}



// FUNCTION 14570f9be FUN_14570f9be body=45 status=ok
// SIG undefined FUN_14570f9be(void)

longlong FUN_14570f9be(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14570f9ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14570f9ec FUN_14570f9ec body=734 status=ok
// SIG undefined FUN_14570f9ec(void)

void FUN_14570f9ec(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14627232e(param_1 + 8);
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FUN_1400020a8();
  }
  FUN_14570fcca(param_1 + 0x548);
  FUN_14570fcca(param_1 + 0x4c0);
  FUN_14570fd04(param_1 + 0x478);
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    FUN_14570fd28(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    FUN_14570fd28(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
  }
  FUN_14570fe14(param_1 + 0x3c0);
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_1400020a8();
  }
  FUN_14570fef0(param_1 + 0x3a0);
  FUN_14570ff94(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1400020a8();
  }
  FUN_14570fe4a(param_1 + 0x238);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14570fe80(param_1 + 0x1b8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x140);
  puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x130);
  FUN_1400020a8();
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x130) = puVar2;
    puVar3 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar3;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_14570feb8(param_1 + 0xd8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  FUN_1449a44cd(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1449a44cd(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x60);
  FUN_1400020a8();
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x60) = puVar2;
    puVar3 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570fcca FUN_14570fcca body=58 status=ok
// SIG undefined FUN_14570fcca(void)

void FUN_14570fcca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14570fd04 FUN_14570fd04 body=35 status=ok
// SIG undefined FUN_14570fd04(void)

void FUN_14570fd04(undefined8 *param_1)

{
  FUN_14018802a(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00014570fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 14570fd28 FUN_14570fd28 body=99 status=ok
// SIG undefined FUN_14570fd28(void)

void FUN_14570fd28(longlong param_1)

{
  FUN_14570fd8c(param_1 + 0x68);
  FUN_14570fdd0(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570fd8c FUN_14570fd8c body=67 status=ok
// SIG undefined FUN_14570fd8c(void)

void FUN_14570fd8c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[2];
  do {
    puVar2 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar1;
    puVar3 = puVar2;
  } while (bVar4);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 14570fdd0 FUN_14570fdd0 body=67 status=ok
// SIG undefined FUN_14570fdd0(void)

void FUN_14570fdd0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[2];
  do {
    puVar2 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar1;
    puVar3 = puVar2;
  } while (bVar4);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 14570fe14 FUN_14570fe14 body=53 status=ok
// SIG undefined FUN_14570fe14(void)

void FUN_14570fe14(longlong *param_1)

{
  FUN_14571016c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570fe4a FUN_14570fe4a body=53 status=ok
// SIG undefined FUN_14570fe4a(void)

void FUN_14570fe4a(longlong *param_1)

{
  FUN_14570ff3a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570fe80 FUN_14570fe80 body=55 status=ok
// SIG undefined FUN_14570fe80(void)

void FUN_14570fe80(longlong *param_1)

{
  FUN_140431f46(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570feb8 FUN_14570feb8 body=55 status=ok
// SIG undefined FUN_14570feb8(void)

void FUN_14570feb8(longlong *param_1)

{
  FUN_140431fbc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14570fef0 FUN_14570fef0 body=73 status=ok
// SIG undefined FUN_14570fef0(void)

void FUN_14570fef0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar1;
    puVar2 = (undefined8 *)*puVar1;
    FUN_1427d4d36(puVar1 + 1);
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 14570ff3a FUN_14570ff3a body=90 status=ok
// SIG undefined FUN_14570ff3a(void)

void FUN_14570ff3a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 14570ff94 FUN_14570ff94 body=129 status=ok
// SIG undefined FUN_14570ff94(void)

void FUN_14570ff94(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_145710016(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14571004c(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145710082(param_1 + 8);
  return;
}



// FUNCTION 145710016 FUN_145710016 body=53 status=ok
// SIG undefined FUN_145710016(void)

void FUN_145710016(longlong *param_1)

{
  FUN_1457100b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14571004c FUN_14571004c body=53 status=ok
// SIG undefined FUN_14571004c(void)

void FUN_14571004c(longlong *param_1)

{
  FUN_145710112();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145710082 FUN_145710082 body=53 status=ok
// SIG undefined FUN_145710082(void)

void FUN_145710082(longlong *param_1)

{
  FUN_140432032();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457100b8 FUN_1457100b8 body=89 status=ok
// SIG undefined FUN_1457100b8(void)

void FUN_1457100b8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145710112 FUN_145710112 body=89 status=ok
// SIG undefined FUN_145710112(void)

void FUN_145710112(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14571016c FUN_14571016c body=321 status=ok
// SIG undefined FUN_14571016c(void)

void FUN_14571016c(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457102ae FUN_1457102ae body=724 status=ok
// SIG undefined FUN_1457102ae(void)

void FUN_1457102ae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_145aa2e42(param_2);
  if (lVar4 != 0) {
    FUN_145aa30f6(lVar4,&local_40,param_1[0x18]);
    param_1[0x10] = CONCAT62(uStack_3e,CONCAT11(uStack_3f,local_40));
    lVar5 = FUN_14479d2ce(param_1 + 0x10);
    FUN_145710588(lVar5 + 0x110,&local_40,param_1);
    FUN_14571086a(lVar4,&local_40,param_1[0x18]);
    param_1[7] = CONCAT62(uStack_3e,CONCAT11(uStack_3f,local_40));
  }
  if (param_2 != 0) {
    lVar4 = FUN_144a79464();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) goto LAB_14571036c;
  }
  param_2 = 0;
LAB_14571036c:
  plVar1 = param_1 + 0x19;
  FUN_14485c47a(plVar1,param_2);
  if (param_1[0x18] != 0) {
    lVar4 = FUN_1449db7f2();
    if ((((param_1[0x18] != 0) && (lVar4 != 0)) &&
        (lVar5 = *(longlong *)(param_1[0x18] + 0x10), lVar5 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      lVar4 = param_1[5];
      FUN_14485c47a(lVar4 + 0x21c);
      local_40 = DAT_14c96b23a;
      uStack_3f = 1;
      local_38 = 0;
      uStack_30 = 0;
      FUN_140fe254e(lVar4);
    }
  }
  if ((DAT_14c9a1ab0 != 0) && (*(int *)(DAT_14c9a1ab0 + 0x58) < 3)) {
    FUN_148a00ac4(DAT_14c9a1ab0 + 0x580,&local_40,param_1);
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar4 != 0) &&
     ((bVar2 = *(byte *)(lVar4 + 0x152), bVar2 == 1 ||
      ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))))) {
    lVar4 = FUN_1449baec6(lVar4);
    if (lVar4 != 0) {
      lVar5 = FUN_140d976a6();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        FUN_14571067e(lVar4 + 0x410,&local_40,param_1);
        param_1[0x2f] = CONCAT62(uStack_3e,CONCAT11(uStack_3f,local_40));
      }
    }
    cVar3 = FUN_144729dda(plVar1);
    if ((cVar3 != '\0') && (param_1[0x25] == 0)) {
      lVar4 = FUN_14479d2ce(plVar1);
      FUN_145710774(lVar4 + 0x2a8,&local_40,param_1);
      param_1[0x25] = CONCAT62(uStack_3e,CONCAT11(uStack_3f,local_40));
      plVar6 = (longlong *)FUN_14479d2ce(plVar1);
      local_40 = (**(code **)(*plVar6 + 0x498))(plVar6);
      plVar6 = (longlong *)FUN_14479d2ce(plVar1);
      (**(code **)(*plVar6 + 0x498))(plVar6);
      uVar7 = FUN_14479d2ce(plVar1);
      cVar3 = FUN_145c11e2a(plVar1,uVar7);
      if (cVar3 != '\0') {
        FUN_1414e9a52(param_1,&local_40);
      }
    }
  }
  uVar7 = FUN_140432306();
  cVar3 = FUN_140432338(uVar7);
  if (cVar3 != '\0') {
    FUN_145710584(uVar7,1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145710584 FUN_145710584 body=4 status=ok
// SIG undefined FUN_145710584(void)

void FUN_145710584(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x40) = param_2;
  return;
}



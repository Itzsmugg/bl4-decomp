// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478b3df4 FUN_1478b3df4 body=320 status=ok
// SIG undefined FUN_1478b3df4(void)

undefined8 FUN_1478b3df4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
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
  uVar4 = 1;
  if ((*(byte *)(param_1 + 0x199) & 0x40) == 0) {
    plVar1 = (longlong *)(param_1 + 0x138);
    lVar2 = param_1 + 0x148;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x160) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0x160);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar4 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (uStack_48 != lVar2)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        lVar5 = *(longlong *)(*local_78 + 8 + (longlong)iVar3 * 0x18);
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
           (lVar5 = FUN_1479633e0(*(undefined8 *)(param_1 + 0x58)),
           (*(byte *)(lVar5 + 0x20) & 2) != 0)) {
          uVar4 = 1;
          goto LAB_1478b3e96;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
    local_60 = uVar4;
    uVar4 = 0;
  }
LAB_1478b3e96:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1478b3f36 FUN_1478b3f36 body=31 status=ok
// SIG undefined FUN_1478b3f36(void)

void FUN_1478b3f36(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  return;
}



// FUNCTION 1478b3f56 FUN_1478b3f56 body=52 status=ok
// SIG undefined FUN_1478b3f56(void)

undefined8 FUN_1478b3f56(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_140056680(param_2,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(param_1 + 0x4c,param_2);
  }
  return param_2;
}



// FUNCTION 1478b3f8a FUN_1478b3f8a body=36 status=ok
// SIG undefined FUN_1478b3f8a(void)

longlong FUN_1478b3f8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 == 0) {
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478b3fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x318))();
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1478b3fae FUN_1478b3fae body=218 status=ok
// SIG undefined FUN_1478b3fae(void)

void FUN_1478b3fae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x108);
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + 8);
      if ((lVar2 != 0 & bVar3) == 1) {
        FUN_1456cec3c(lVar2);
        bVar3 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + 8 + lVar5) == lVar2) {
        *(undefined4 *)(lVar1 + 0x10 + lVar5) = *(undefined4 *)(param_2 + 0x10);
        return;
      }
      lVar5 = lVar5 + 0xb8;
    } while ((longlong)iVar4 * 0xb8 - lVar5 != 0);
    iVar4 = *(int *)(param_1 + 0x110);
  }
  *(uint *)(param_1 + 0x110) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x114) < iVar4 + 1U) {
    FUN_1478c4260((longlong *)(param_1 + 0x108),iVar4);
  }
  lVar1 = *(longlong *)(param_1 + 0x108);
  FUN_1477e80e4(lVar1 + (longlong)iVar4 * 0xb8,param_2);
  *(undefined1 *)(lVar1 + 0xb0 + (longlong)iVar4 * 0xb8) = *(undefined1 *)(param_2 + 0xb0);
  return;
}



// FUNCTION 1478b4088 FUN_1478b4088 body=469 status=ok
// SIG undefined FUN_1478b4088(void)

void FUN_1478b4088(longlong param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  byte local_108;
  undefined1 local_100 [48];
  undefined **local_d0;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = param_1 + (ulonglong)param_2 * 0x10;
  iVar2 = *(int *)(lVar1 + 0x120);
  iVar7 = 0;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x118 + (ulonglong)param_2 * 0x10);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_3 + 8);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      if (*(longlong *)(lVar3 + 8 + lVar6) == lVar4) {
LAB_1478b4244:
        *(undefined4 *)(lVar3 + 0x18 + lVar6) = *(undefined4 *)(param_3 + 0x18);
        goto LAB_1478b4104;
      }
      lVar4 = *(longlong *)(param_3 + 0x10);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      if (*(longlong *)(lVar3 + 0x10 + lVar6) == lVar4) goto LAB_1478b4244;
      lVar6 = lVar6 + 0xb8;
    } while ((longlong)iVar2 * 0xb8 - lVar6 != 0);
    iVar7 = *(int *)(lVar1 + 0x120);
  }
  *(uint *)(lVar1 + 0x120) = iVar7 + 1U;
  if (*(uint *)(lVar1 + 0x124) < iVar7 + 1U) {
    FUN_1478c44a6((longlong *)(lVar1 + 0x118),iVar7);
  }
  FUN_1477d06d2((longlong)iVar7 * 0xb8 + *(longlong *)(lVar1 + 0x118),param_3);
LAB_1478b4104:
  *(undefined1 *)(param_1 + 2000) = 1;
  local_108 = param_2;
  FUN_1477d06d2(local_100,param_3);
  iVar2 = *(int *)(param_1 + 0x7e0);
  *(uint *)(param_1 + 0x7e0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7e4) < iVar2 + 1U) {
    FUN_1478c42f6((longlong *)(param_1 + 0x7d8),iVar2);
  }
  pbVar5 = (byte *)((longlong)iVar2 * 0xc0 + *(longlong *)(param_1 + 0x7d8));
  *pbVar5 = local_108;
  FUN_1478c438a(pbVar5 + 8,local_100);
  local_d0 = (undefined **)&DAT_14a176f00;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_d0 = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b425e FUN_1478b425e body=7 status=ok
// SIG undefined FUN_1478b425e(void)

undefined1 FUN_1478b425e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 2000);
}



// FUNCTION 1478b4266 FUN_1478b4266 body=8 status=ok
// SIG undefined FUN_1478b4266(void)

longlong FUN_1478b4266(longlong param_1)

{
  return param_1 + 0x7d8;
}



// FUNCTION 1478b426e FUN_1478b426e body=72 status=ok
// SIG undefined FUN_1478b426e(void)

void FUN_1478b426e(longlong param_1)

{
  FUN_1477d0770(*(undefined8 *)(param_1 + 0x7d8),*(undefined4 *)(param_1 + 0x7e0));
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  if (*(int *)(param_1 + 0x7e4) != 0) {
    FUN_1478c453c(param_1 + 0x7d8);
  }
  *(undefined1 *)(param_1 + 2000) = 0;
  return;
}



// FUNCTION 1478b42b6 FUN_1478b42b6 body=111 status=ok
// SIG undefined FUN_1478b42b6(void)

void FUN_1478b42b6(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  switch(param_3) {
  case 0:
    *(undefined1 *)(param_1 + 0x948) = 3;
    lVar1 = 0x7f0;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x949) = 3;
    lVar1 = 0x848;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x94b) = 3;
    lVar1 = 0x8f8;
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x94a) = 3;
    lVar1 = 0x8a0;
    break;
  default:
    goto switchD_1478b42dc_default;
  }
  FUN_1478b4326(lVar1 + param_1);
  *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) | 0x40;
switchD_1478b42dc_default:
  return;
}



// FUNCTION 1478b4326 FUN_1478b4326 body=356 status=ok
// SIG undefined FUN_1478b4326(void)

void FUN_1478b4326(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1477cebfc(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1477cedaa(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_1477cefaa(param_1,&local_50,(longlong)iStack_5c * 0x10 + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b448c FUN_1478b448c body=197 status=ok
// SIG undefined FUN_1478b448c(void)

void FUN_1478b448c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switch(param_3) {
  case 0:
    lVar1 = param_1 + 0x7f0;
    break;
  case 1:
    lVar1 = param_1 + 0x848;
    break;
  case 2:
    lVar1 = param_1 + 0x8f8;
    break;
  case 3:
    lVar1 = param_1 + 0x8a0;
    break;
  default:
    goto switchD_1478b44e5_default;
  }
  FUN_1478b4552(lVar1,local_70,param_2);
  FUN_1477c0152(lVar1,local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(local_70);
  *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) | 0x40;
switchD_1478b44e5_default:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b4552 FUN_1478b4552 body=549 status=ok
// SIG undefined FUN_1478b4552(void)

undefined8 * FUN_1478b4552(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1477cebfc(param_2,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_1477cedaa(param_2);
    }
  }
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      local_90 = *(ulonglong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if ((DAT_14c950c29 == 1) && (local_90 != 0)) {
        FUN_1456cec3c(local_90);
      }
      uVar1 = local_90;
      if (((DAT_14c950c29 & 1) != 0) && (local_90 != 0)) {
        FUN_1456cec3c(local_90);
      }
      uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      iVar2 = FUN_1477cf2d0(param_3,uVar3 >> 0x10 ^ uVar3,&local_90);
      if (iVar2 == -1) {
        FUN_1477cefaa(param_2,&local_60,(longlong)iStack_6c * 0x10 + *local_88,0);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478b478c FUN_1478b478c body=262 status=ok
// SIG undefined FUN_1478b478c(void)

void FUN_1478b478c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_147d30922();
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x108);
      lVar8 = (longlong)*(int *)(param_1 + 0x110) * 0xb8 + lVar6;
      do {
        lVar3 = param_2[1];
        iVar5 = 0;
        if ((longlong)(int)lVar3 != 0) {
          lVar1 = *param_2;
          lVar7 = 0;
          bVar4 = DAT_14c950c29;
          do {
            lVar2 = *(longlong *)(lVar6 + 8);
            if (((bVar4 & 1) != 0) && (lVar2 != 0)) {
              FUN_1456cec3c(lVar2);
              bVar4 = DAT_14c950c29;
            }
            if (*(longlong *)(lVar1 + 8 + lVar7) == lVar2) {
              *(undefined4 *)(lVar1 + 0x10 + lVar7) = *(undefined4 *)(lVar6 + 0x10);
              goto LAB_1478b4833;
            }
            lVar7 = lVar7 + 0xb8;
          } while ((longlong)(int)lVar3 * 0xb8 - lVar7 != 0);
          iVar5 = (int)param_2[1];
        }
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_1478c4260(param_2,iVar5);
        }
        lVar3 = *param_2;
        FUN_1477e80e4(lVar3 + (longlong)iVar5 * 0xb8,lVar6);
        *(undefined1 *)(lVar3 + 0xb0 + (longlong)iVar5 * 0xb8) = *(undefined1 *)(lVar6 + 0xb0);
LAB_1478b4833:
        lVar6 = lVar6 + 0xb8;
      } while (lVar6 != lVar8);
    }
  }
  return;
}



// FUNCTION 1478b4892 FUN_1478b4892 body=338 status=ok
// SIG undefined FUN_1478b4892(void)

void FUN_1478b4892(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_147d30934();
    uVar4 = (ulonglong)((param_2 & 0xff) << 4);
    lVar6 = (longlong)*(int *)(param_1 + 0x120 + uVar4);
    if (lVar6 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x118 + uVar4);
      lVar6 = lVar6 * 0xb8 + lVar8;
      do {
        lVar3 = param_3[1];
        iVar7 = 0;
        if ((longlong)(int)lVar3 != 0) {
          lVar1 = *param_3;
          lVar9 = 0;
          do {
            lVar5 = *(longlong *)(lVar1 + 8 + lVar9);
            if (lVar5 == 0) {
              bVar10 = false;
            }
            else {
              lVar2 = *(longlong *)(lVar8 + 8);
              if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
                FUN_1456cec3c(lVar2);
                lVar5 = *(longlong *)(lVar1 + 8 + lVar9);
              }
              bVar10 = lVar5 == lVar2;
            }
            lVar5 = *(longlong *)(lVar1 + 0x10 + lVar9);
            if (lVar5 == 0) {
              bVar11 = false;
            }
            else {
              lVar2 = *(longlong *)(lVar8 + 0x10);
              if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
                FUN_1456cec3c(lVar2);
                lVar5 = *(longlong *)(lVar1 + 0x10 + lVar9);
              }
              bVar11 = lVar5 == lVar2;
            }
            if ((bool)(bVar10 | bVar11)) {
              *(undefined4 *)(lVar1 + 0x18 + lVar9) = *(undefined4 *)(lVar8 + 0x18);
              goto LAB_1478b4992;
            }
            lVar9 = lVar9 + 0xb8;
          } while ((longlong)(int)lVar3 * 0xb8 - lVar9 != 0);
          iVar7 = (int)param_3[1];
        }
        *(uint *)(param_3 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
          FUN_1478c44a6(param_3,iVar7);
        }
        FUN_1477d06d2((longlong)iVar7 * 0xb8 + *param_3,lVar8);
LAB_1478b4992:
        lVar8 = lVar8 + 0xb8;
      } while (lVar8 != lVar6);
    }
  }
  return;
}



// FUNCTION 1478b49e4 FUN_1478b49e4 body=504 status=ok
// SIG undefined FUN_1478b49e4(void)

void FUN_1478b49e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1478c456c(param_2,0);
  }
  plVar5 = (longlong *)FUN_145b54fcc();
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb8)) {
    plVar5 = (longlong *)(param_1 + 0xb0);
    lVar6 = param_1 + 0xc0;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar6;
    if (*(int *)(param_1 + 0xd8) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = *(int *)(param_1 + 0xd8);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar2 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar3 = local_70._4_4_;
    local_88 = plVar5;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar2, uStack_58 != lVar6)) {
      do {
        local_70 = uVar2;
        lVar1 = *(longlong *)(*local_88 + (longlong)iVar3 * 0x10);
        if (lVar1 != 0) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1478c45cc(param_2,iVar3);
          }
          FUN_147d310f6((longlong)iVar3 * 0x10 + *param_2,lVar1);
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar3 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_88 != plVar5 ||
               (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar7));
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
    }
    lVar6 = FUN_14797546c(lVar6);
    if (lVar6 != 0) {
      lVar6 = param_2[1];
      uVar4 = (int)lVar6 + 1;
      *(uint *)(param_2 + 1) = uVar4;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
        FUN_1478c45cc(param_2,(int)lVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b4c10 FUN_1478b4c10 body=317 status=ok
// SIG undefined FUN_1478b4c10(void)

ulonglong FUN_1478b4c10(longlong param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = -1.0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1478b49e4(0,&local_78);
  lVar2 = local_78;
  lVar4 = (longlong)(int)uStack_70;
  if (lVar4 == 0) {
    fVar7 = *param_2;
  }
  else {
    lVar6 = 0;
    do {
      cVar3 = FUN_147d310e8(*(undefined8 *)(lVar2 + lVar6));
      if ((((cVar3 == '\0') && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
          (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x300))(), cVar3 != '\0')) &&
         (ABS(*(float *)(param_1 + 0x1ac)) <= 0.1)) goto LAB_1478b4d02;
      fVar1 = *param_2;
      fVar7 = *(float *)(*(longlong *)(lVar2 + lVar6) + 0x1c);
      if (0.0 <= fVar1 && fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      *param_2 = fVar7;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 * 0x10 != lVar6);
  }
  uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (fVar7 <= 0.0) {
LAB_1478b4d02:
    *param_2 = 0.0;
    uVar5 = 0;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1478b4d4e FUN_1478b4d4e body=117 status=ok
// SIG undefined FUN_1478b4d4e(void)

ulonglong FUN_1478b4d4e(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x950);
  if (*(uint *)(param_1 + 0x950) == 0xffffffff) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    uVar2 = 0xffffffff;
    if (lVar1 != 0) {
      local_28 = *(undefined8 *)(param_1 + 0x250);
      uStack_20 = *(undefined8 *)(param_1 + 600);
      local_18 = *(undefined8 *)(param_1 + 0x260);
      uVar2 = FUN_1479629ac(lVar1,&local_28,local_c,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b4dc4 FUN_1478b4dc4 body=334 status=ok
// SIG undefined FUN_1478b4dc4(void)

undefined8 * FUN_1478b4dc4(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  param_1[0x15] = 0x640000000a;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x17] = 0xbf8000003f800000;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_14109baa4(param_1 + 0x2b);
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x41a00000469c4000;
  param_1[0x45] = 0x41a00000469c4000;
  param_1[0x46] = 0x469c4000469c4000;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x23c) = 0;
  return param_1;
}



// FUNCTION 1478b4f12 FUN_1478b4f12 body=101 status=ok
// SIG undefined FUN_1478b4f12(void)

float FUN_1478b4f12(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x1b8);
  fVar1 = (float)FUN_14704140c(param_1 + 0x1c8);
  fVar2 = (float)FUN_1478b5c72(param_1);
  fVar2 = fVar2 * fVar1 * fVar3;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x2d8))();
    fVar2 = fVar2 * fVar3;
  }
  return fVar2;
}



// FUNCTION 1478b4f78 FUN_1478b4f78 body=255 status=ok
// SIG undefined FUN_1478b4f78(void)

void FUN_1478b4f78(longlong param_1,longlong param_2)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = 0xffffffff;
  local_a0 = 1;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x400000003f000000;
  FUN_14341387a();
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_c8 = *(undefined8 *)(param_2 + 0x40);
  uStack_c0 = *(undefined8 *)(param_2 + 0x48);
  local_b8 = *(undefined8 *)(param_2 + 0x50);
  FUN_14796123e(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x10),&local_c8,&local_a8)
  ;
  *(undefined4 *)(param_1 + 0x724) = local_60;
  *(undefined4 *)(param_1 + 0x714) = local_70;
  *(undefined4 *)(param_1 + 0x718) = uStack_6c;
  *(undefined4 *)(param_1 + 0x71c) = uStack_68;
  *(undefined4 *)(param_1 + 0x720) = uStack_64;
  *(undefined4 *)(param_1 + 0x704) = local_80;
  *(undefined4 *)(param_1 + 0x708) = uStack_7c;
  *(undefined4 *)(param_1 + 0x70c) = uStack_78;
  *(undefined4 *)(param_1 + 0x710) = uStack_74;
  FUN_1478b6290(param_1 + 0x728,&local_58);
  *(undefined4 *)(param_1 + 0x748) = (undefined4)local_a8;
  FUN_1478b62f0(&local_a8);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b5078 FUN_1478b5078 body=474 status=ok
// SIG undefined FUN_1478b5078(void)

void FUN_1478b5078(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1e0);
  lVar5 = (longlong)*(int *)(param_1 + 0x950) * 0x110;
  lVar1 = lVar4 + lVar5;
  dVar2 = *(double *)(lVar4 + 200 + lVar5);
  if (*(double *)(param_1 + 0x750) <= dVar2 && dVar2 != *(double *)(param_1 + 0x750)) {
    *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(param_1 + 0x760);
    *(undefined8 *)(param_1 + 0x750) = DAT_14c866ff8;
  }
  iVar3 = *(int *)(lVar1 + 0xb8);
  if ((iVar3 == *(int *)(param_1 + 0x748)) || ((*(byte *)(param_1 + 0x198) & 2) == 0)) {
    fVar7 = (1.0 - *(float *)(param_1 + 0x758)) * *(float *)(lVar1 + 0xf0) +
            *(float *)(param_1 + 0x758);
    *(float *)(param_1 + 0x760) = fVar7;
    *(float *)(param_2 + 0xb0) = fVar7;
    fVar7 = *(float *)(param_1 + 0x75c);
    fVar8 = (20000.0 - fVar7) * *(float *)(lVar1 + 0xf4);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x758);
    if (*(char *)(param_1 + 0x704) != '\x01') {
      fVar8 = (*(float *)(param_1 + 0x718) - fVar7) * *(float *)(lVar1 + 0xf0) + fVar7;
      *(float *)(param_1 + 0x760) = fVar8;
      fVar8 = ((*(float *)(lVar1 + 0x98) - fVar7) * *(float *)(lVar1 + 0xf8) + fVar7) * fVar8;
      *(float *)(param_1 + 0x760) = fVar8;
      *(float *)(param_2 + 0xb0) = fVar8;
      fVar8 = *(float *)(param_1 + 0x75c);
      fVar7 = (*(float *)(param_1 + 0x720) - fVar8) * *(float *)(lVar1 + 0xf4) + fVar8;
      fVar8 = (*(float *)(lVar1 + 0xa0) - fVar8) * *(float *)(lVar1 + 0xfc) + fVar8;
      if (fVar8 <= fVar7) {
        *(float *)(param_1 + 0x764) = fVar8;
        *(float *)(param_2 + 0x234) = fVar8;
      }
      else {
        *(float *)(param_1 + 0x764) = fVar7;
        *(float *)(param_2 + 0x234) = fVar7;
      }
      uVar6 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      goto LAB_1478b5143;
    }
    fVar7 = (*(float *)(lVar1 + 0x98) - fVar7) * *(float *)(lVar1 + 0xf8) + fVar7;
    *(float *)(param_1 + 0x760) = fVar7;
    *(float *)(param_2 + 0xb0) = fVar7;
    fVar7 = *(float *)(param_1 + 0x75c);
    fVar8 = (*(float *)(lVar1 + 0xa0) - fVar7) * *(float *)(lVar1 + 0xfc);
  }
  fVar8 = fVar8 + fVar7;
  *(float *)(param_1 + 0x764) = fVar8;
  *(float *)(param_2 + 0x234) = fVar8;
  uVar6 = 0;
LAB_1478b5143:
  FUN_1478b6338(fVar7,fVar8,uVar6);
  return;
}



// FUNCTION 1478b5252 FUN_1478b5252 body=2590 status=ok
// SIG undefined FUN_1478b5252(void)

void FUN_1478b5252(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong *local_228;
  byte local_21c;
  double local_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [24];
  double local_170;
  double local_168;
  double local_160;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar13 = param_1 + 0x2c8;
  if (((-1 < *(char *)(param_1 + 0x19c)) && (lVar13 = param_5, param_5 == 0)) &&
     (lVar13 = *(longlong *)(param_1 + 0x28) + 0x28, *(longlong *)(param_1 + 0x28) == 0)) {
    lVar13 = param_1 + 0x2c8;
  }
  local_1a8 = 0;
  uStack_1a0 = 0x3f800000;
  fStack_19c = 1.0;
  local_198 = 1.0;
  fStack_190 = 1.0;
  uStack_18c = CONCAT31(uStack_18c._1_3_,1);
  fStack_194 = *(float *)(param_1 + 0x2a4);
  if (*(char *)(lVar13 + 0xc0) < '\0') {
    *(undefined1 *)(param_3 + 0x128) = *(undefined1 *)(lVar13 + 0x1ea);
    *(undefined4 *)(param_3 + 0x150) = *(undefined4 *)(lVar13 + 600);
    FUN_14115e0ba(param_3 + 0x158,lVar13 + 0x270);
    fVar15 = *(float *)(lVar13 + 0x24c);
    *(double *)(param_3 + 0x130) = (double)*(float *)(lVar13 + 0x248);
    *(double *)(param_3 + 0x138) = (double)fVar15;
    fVar15 = *(float *)(lVar13 + 0x254);
    *(double *)(param_3 + 0x140) = (double)*(float *)(lVar13 + 0x250);
    *(double *)(param_3 + 0x148) = (double)fVar15;
  }
  if ((*(byte *)(lVar13 + 0xc1) & 8) != 0) {
    local_240 = (longlong *)(param_3 + 0xf8);
    iVar3 = *(int *)(param_3 + 0x104);
    FUN_145821b84(*(undefined8 *)(param_3 + 0xf8),*(undefined4 *)(param_3 + 0x100));
    *(undefined4 *)(param_3 + 0x100) = 0;
    if ((iVar3 < 0) && (*(int *)(param_3 + 0x104) != 0)) {
      FUN_1478c571a(local_240);
    }
    if ((longlong)*(int *)(lVar13 + 0x300) != 0) {
      lVar10 = *(longlong *)(lVar13 + 0x2f8);
      lVar14 = (longlong)*(int *)(lVar13 + 0x300) * 0xb0;
      do {
        if (*(longlong *)(lVar10 + 8) != 0) {
          iVar3 = *(int *)(param_3 + 0x100);
          *(uint *)(param_3 + 0x100) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x104) < iVar3 + 1U) {
            FUN_1478c574a(local_240,iVar3);
          }
          FUN_1477e80e4((longlong)iVar3 * 0xb0 + *local_240,lVar10);
        }
        lVar10 = lVar10 + 0xb0;
        lVar14 = lVar14 + -0xb0;
      } while (lVar14 != 0);
    }
  }
  local_248 = lVar13;
  FUN_14795db18(local_188,*(undefined8 *)(param_1 + 0x58),param_4);
  if ((*(byte *)(lVar13 + 0xc1) & 1) != 0) {
    if (*(char *)(lVar13 + 0x1eb) == '\x02') {
      fVar15 = *(float *)(lVar13 + 0x26c);
    }
    else {
      fVar15 = *(float *)(lVar13 + 0x268) - *(float *)(lVar13 + 0x264);
      if (fVar15 <= 1e-08) {
        fVar15 = 1e-08;
      }
      dVar17 = (local_168 - (double)*(float *)(lVar13 + 0x264)) / (double)fVar15;
      if (1.0 <= dVar17) {
        dVar17 = 1.0;
      }
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      if (*(char *)(lVar13 + 0x1eb) == '\0') {
        fVar15 = (float)dVar17 * (*(float *)(lVar13 + 0x260) - *(float *)(lVar13 + 0x25c)) +
                 *(float *)(lVar13 + 0x25c);
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
      }
      else {
        uVar11 = FUN_1401e2d36(lVar13 + 0x308);
        fVar15 = (float)FUN_1448c9f94(uVar11,(float)dVar17,0);
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
      }
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(param_3 + 0xb4) = fVar15 * *(float *)(param_3 + 0xb4);
  }
  bVar6 = *(byte *)(lVar13 + 0xc0);
  if ((bVar6 & 10) != 0) {
    uStack_1a0 = *(undefined4 *)(param_1 + 0x298);
    uStack_18c = CONCAT31(uStack_18c._1_3_,*(undefined1 *)(param_1 + 0x2ac));
    FUN_1478b692c(param_1,param_2,local_188);
    fVar15 = *(float *)(param_3 + 0xb4);
    if (fStack_194 <= fVar15) {
      fStack_194 = fVar15;
    }
    *(float *)(param_3 + 0x98) = fStack_190 * *(float *)(param_3 + 0x98);
    *(float *)(param_3 + 0xb4) = fVar15 * local_198;
    bVar6 = *(byte *)(lVar13 + 0xc0);
    if ((bVar6 & 2) != 0) {
      *(float *)(param_3 + 0xcc) = (float)local_170;
      *(float *)(param_3 + 0xd0) = (float)local_168;
      *(float *)(param_3 + 0xd4) = (float)local_160;
      *(undefined4 *)(param_3 + 0xd8) = local_1a8._4_4_;
      bVar6 = *(byte *)(lVar13 + 0xc0);
    }
  }
  if ((bVar6 & 1) != 0) {
    if ((*(longlong *)(param_3 + 0x10) != 0) &&
       (pfVar9 = (float *)FUN_147963494(*(undefined8 *)(param_1 + 0x58)), pfVar9 != (float *)0x0)) {
      fVar15 = *pfVar9;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fStack_19c = fVar15 * fStack_19c;
    }
    if (*(char *)(lVar13 + 9) == '\0') {
      fVar15 = (float)FUN_14795a306(lVar13,(float)local_170,*(undefined4 *)(lVar13 + 0x2c),
                                    fStack_19c);
    }
    else {
      local_1c8 = local_138;
      uStack_1c4 = uStack_134;
      uStack_1c0 = uStack_130;
      uStack_1bc = uStack_12c;
      local_1b8 = local_128;
      fVar15 = (float)FUN_14795a16e(lVar13,param_3 + 0x20,&local_1c8,fStack_19c);
    }
    *(float *)(param_3 + 0x9c) = fVar15 * *(float *)(param_3 + 0x9c);
    bVar6 = *(byte *)(lVar13 + 0xc0);
  }
  if ((bVar6 & 0x20) != 0) {
    if (*(int *)(lVar13 + 0x3a8) == 0) {
      if (0.0 < *(float *)(param_3 + 0x98)) {
        cVar7 = FUN_147963546(*(undefined8 *)(param_1 + 0x58));
        if (cVar7 == '\0') {
          FUN_14795ba42(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x950),&local_238,
                        0);
          local_1e8 = *(undefined8 *)(param_3 + 0x40);
          uStack_1e0 = *(undefined8 *)(param_3 + 0x48);
          local_1d8 = *(undefined8 *)(param_3 + 0x50);
          local_1f8 = local_228;
          local_208 = (undefined4)local_238;
          uStack_204 = local_238._4_4_;
          uStack_200 = (undefined4)uStack_230;
          uStack_1fc = uStack_230._4_4_;
          FUN_1433b6db2(param_1);
          *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)(param_1 + 0x1fc);
          *(byte *)(param_3 + 0x23c) =
               *(byte *)(param_3 + 0x23c) & 0xef | (*(int *)(param_1 + 0x1a0) != 0) << 4;
          *(undefined4 *)(param_3 + 0x230) = *(undefined4 *)(param_1 + 0x1e0);
        }
      }
    }
    else {
      lVar10 = FUN_14795adfd(2);
      if (lVar10 != 0) {
        if ((longlong)*(int *)(lVar13 + 0x3a8) != 0) {
          lVar14 = 0;
          do {
            lVar4 = *(longlong *)(lVar14 + *(longlong *)(lVar13 + 0x3a0));
            if (lVar4 != 0) {
              if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                *(longlong *)(param_3 + 0x1f8) = lVar4;
                break;
              }
            }
            lVar14 = lVar14 + 8;
          } while ((longlong)*(int *)(lVar13 + 0x3a8) * 8 != lVar14);
        }
      }
    }
  }
  if (0 < *(int *)(lVar13 + 0x398)) {
    lVar10 = FUN_14795adfd(0);
    if (lVar10 != 0) {
      if ((longlong)*(int *)(lVar13 + 0x398) != 0) {
        lVar14 = 0;
        do {
          lVar4 = *(longlong *)(lVar14 + *(longlong *)(lVar13 + 0x390));
          if (lVar4 != 0) {
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              *(longlong *)(param_3 + 0x1f0) = lVar4;
              break;
            }
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)*(int *)(lVar13 + 0x398) * 8 != lVar14);
      }
    }
  }
  if (0 < *(int *)(lVar13 + 0x3b8)) {
    lVar10 = FUN_14795adfd(1);
    if (lVar10 != 0) {
      if ((longlong)*(int *)(lVar13 + 0x3b8) != 0) {
        lVar14 = 0;
        do {
          lVar4 = *(longlong *)(lVar14 + *(longlong *)(lVar13 + 0x3b0));
          if (lVar4 != 0) {
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              *(longlong *)(param_3 + 0x200) = lVar4;
              break;
            }
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)*(int *)(lVar13 + 0x3b8) * 8 != lVar14);
      }
    }
  }
  if (((0 < *(int *)(lVar13 + 0x3c8)) && (lVar10 = FUN_14795adfd(4), lVar10 != 0)) &&
     ((longlong)*(int *)(lVar13 + 0x3c8) != 0)) {
    lVar14 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar13 + 0x3c0) + lVar14);
      if (lVar4 != 0) {
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
          *(longlong *)(param_3 + 0x208) = lVar4;
          break;
        }
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)*(int *)(lVar13 + 0x3c8) * 8 != lVar14);
  }
  if (*(longlong *)(lVar13 + 200) != 0) {
    *(longlong *)(param_3 + 0x210) = *(longlong *)(lVar13 + 200);
  }
  if ((*(byte *)(lVar13 + 0xc0) & 4) != 0) {
    local_238 = (double)*(float *)(lVar13 + 0x204);
    uStack_230 = (double)*(float *)(lVar13 + 0x208);
    local_218 = (double)*(float *)(lVar13 + 0x20c);
    local_210 = (double)*(float *)(lVar13 + 0x210);
    fVar15 = (float)FUN_1478b6624(lVar13,local_188,&local_238,lVar13 + 0xd8);
    fVar16 = (float)FUN_1478b6624(lVar13,local_188,&local_218,lVar13 + 0x160);
    if (fVar15 < *(float *)(param_3 + 0x228)) {
      *(float *)(param_3 + 0x228) = fVar15;
    }
    if (*(float *)(param_3 + 0x22c) <= fVar16 && fVar16 != *(float *)(param_3 + 0x22c)) {
      *(float *)(param_3 + 0x22c) = fVar16;
    }
  }
  *(undefined4 *)(param_3 + 0xc0) = *(undefined4 *)(lVar13 + 0x1ec);
  *(undefined4 *)(param_3 + 0xc4) = *(undefined4 *)(lVar13 + 0x1f0);
  *(undefined1 *)(param_3 + 200) = *(undefined1 *)(lVar13 + 500);
  *(undefined4 *)(param_3 + 0x1e0) = *(undefined4 *)(lVar13 + 0x1f8);
  bVar6 = *(byte *)(param_3 + 0x23c);
  bVar5 = (*(byte *)(lVar13 + 0xc1) & 2) << 6;
  *(byte *)(param_3 + 0x23c) = bVar6 & 0x7f | bVar5;
  *(byte *)(param_3 + 0x23c) = bVar6 & 0x7e | bVar5 | (*(byte *)(lVar13 + 0xc0) >> 1 | bVar6) & 1;
  uVar12 = *(uint *)(param_3 + 0x238);
  uVar8 = *(byte *)(lVar13 + 0xc1) >> 1 & 8;
  *(uint *)(param_3 + 0x238) = uVar8 | uVar12;
  *(uint *)(param_3 + 0x238) =
       uVar8 | uVar12 & 0xffffffef | (*(byte *)(lVar13 + 0xc1) >> 1 | uVar12) & 0x10;
  bVar6 = *(byte *)(param_1 + 0x19c);
  if ((bVar6 & 0x10) != 0) {
    bVar6 = bVar6 & 0xdf | (local_168 < (double)*(float *)(lVar13 + 0xd0)) << 5;
    *(byte *)(param_1 + 0x19c) = bVar6;
  }
  if ((bVar6 & 0x20) != 0) {
    *(undefined4 *)(param_3 + 0x1e4) = 0;
    goto LAB_1478b57c1;
  }
  bVar6 = *(byte *)(lVar13 + 0xc2);
  if (bVar6 == 0) {
    cVar7 = FUN_14795fb04(*(undefined8 *)(param_1 + 0x58));
    uVar12 = 1;
    if (cVar7 == '\0') {
      bVar6 = *(byte *)(lVar13 + 0xc2);
      goto LAB_1478b56d0;
    }
  }
  else {
LAB_1478b56d0:
    if (bVar6 == 1) {
      cVar7 = FUN_14795fb5a();
      uVar12 = 0;
      if (cVar7 != '\0') goto LAB_1478b56ec;
      bVar6 = *(byte *)(lVar13 + 0xc2);
    }
    uVar12 = (uint)bVar6;
  }
LAB_1478b56ec:
  *(uint *)(param_3 + 0x1e4) = uVar12;
  FUN_14795f152(*(undefined8 *)(param_1 + 0x58),&local_238);
  *(byte *)(param_3 + 0x1e8) = local_21c & 1;
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_228 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar2 = (int *)((longlong)local_228 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
LAB_1478b57c1:
  if (param_5 == 0) {
    *(ulonglong *)(param_1 + 0x2a0) = CONCAT44(fStack_194,local_198);
    *(ulonglong *)(param_1 + 0x2a8) = CONCAT44(uStack_18c,fStack_190);
    *(undefined4 *)(param_1 + 0x290) = (undefined4)local_1a8;
    *(undefined4 *)(param_1 + 0x294) = local_1a8._4_4_;
    *(undefined4 *)(param_1 + 0x298) = uStack_1a0;
    *(float *)(param_1 + 0x29c) = fStack_19c;
  }
  else {
    *(float *)(param_1 + 0x2a4) = fStack_194;
  }
  *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xef;
  if ((local_80 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b5c72 FUN_1478b5c72 body=306 status=ok
// SIG undefined FUN_1478b5c72(void)

float FUN_1478b5c72(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
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
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x88);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c == iVar3) && (uStack_58 == lVar2)) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = 1.0;
    do {
      fVar4 = (float)FUN_147d31118(*local_88 + (longlong)iStack_6c * 0x20 + 4,0);
      fVar5 = fVar5 * fVar4;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b5da6 FUN_1478b5da6 body=208 status=ok
// SIG undefined FUN_1478b5da6(void)

void FUN_1478b5da6(longlong *param_1)

{
  longlong lVar1;
  
  param_1[0x2b] = (longlong)&DAT_14a176f00;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2b] = (longlong)&PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x2c);
  lVar1 = 0x118;
  do {
    FUN_1412895b6(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0xf8);
  FUN_145821b84(param_1[0x1f],(int)param_1[0x20]);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1458793b1(param_1[0x1d],(int)param_1[0x1e]);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478b5e76 FUN_1478b5e76 body=169 status=ok
// SIG undefined FUN_1478b5e76(void)

void FUN_1478b5e76(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar3 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x178);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x180) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          lVar3 = plVar1[1];
          if (lVar3 == 0) {
            return;
          }
          FUN_1478c4e6e();
          FUN_1478b61c6(lVar3);
          FUN_1400020a8(lVar3);
          return;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1478b5f20 FUN_1478b5f20 body=546 status=ok
// SIG undefined FUN_1478b5f20(void)

bool FUN_1478b5f20(longlong param_1,undefined4 param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_c8 [39];
  byte local_a1;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar12 = true;
  if ((*(byte *)(param_1 + 0x19b) & 0x20) != 0) {
    *(byte *)(param_1 + 0x19b) = *(byte *)(param_1 + 0x19b) & 0xdf;
    plVar1 = (longlong *)(param_1 + 0x138);
    local_78 = 0;
    uStack_70 = 0;
    lVar10 = param_1 + 0x148;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_a1 = param_3;
    uStack_60 = lVar10;
    if (*(int *)(param_1 + 0x160) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(param_1 + 0x160);
    }
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    local_88 = local_58;
    uVar4 = local_88;
    local_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a0 = plVar1;
    iVar6 = local_88._4_4_;
    if ((local_88._4_4_ == iVar9) && (uStack_60 == lVar10)) {
      bVar5 = *(byte *)(param_1 + 0x19b);
      local_88 = uVar4;
    }
    else {
      do {
        local_88 = uVar4;
        lVar2 = *(longlong *)(*local_a0 + 8 + (longlong)iVar6 * 0x18);
        if (lVar2 != 0) {
          plVar8 = (longlong *)FUN_1479635b4(*(undefined8 *)(param_1 + 0x58),lVar2);
          if (plVar8 != (longlong *)0x0) {
            bVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
            if ((bVar5 | local_a1) != 1) {
              *(undefined4 *)((longlong)plVar8 + 0x3c) = param_2;
              *(undefined4 *)(plVar8 + 8) = param_2;
              *(byte *)(param_1 + 0x19b) = *(byte *)(param_1 + 0x19b) | 0x20;
              goto LAB_1478b603e;
            }
            (**(code **)(*plVar8 + 0x40))(plVar8);
          }
          uVar3 = uStack_70;
          lVar11 = (longlong)(int)uStack_70;
          uVar7 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
          if (uStack_70._4_4_ < uVar7) {
            FUN_1478c4d20(&local_78,uVar3 & 0xffffffff);
          }
          *(longlong *)(local_78 + lVar11 * 8) = lVar2;
        }
LAB_1478b603e:
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
        FUN_1449c0562(&local_98);
        lVar2 = local_78;
        uVar4 = local_88;
        iVar6 = local_88._4_4_;
      } while (local_a0 != plVar1 ||
               (CONCAT44(uStack_8c,uStack_90) != lVar10 || local_88._4_4_ != iVar9));
      lVar10 = (longlong)(int)uStack_70;
      if (lVar10 != 0) {
        lVar11 = 0;
        do {
          FUN_1478b5e76(param_1,*(undefined8 *)(*(longlong *)(lVar2 + lVar11) + 0x180));
          lVar11 = lVar11 + 8;
        } while (lVar10 * 8 != lVar11);
      }
      bVar5 = *(byte *)(param_1 + 0x19b);
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
    bVar12 = (bVar5 & 0x20) == 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar12;
}



// FUNCTION 1478b6144 FUN_1478b6144 body=130 status=ok
// SIG undefined FUN_1478b6144(void)

longlong FUN_1478b6144(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar3 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x178);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x180) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 != (longlong *)0x0) {
            return plVar1[1];
          }
          return 0;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1478b61c6 FUN_1478b61c6 body=202 status=ok
// SIG undefined FUN_1478b61c6(void)

void FUN_1478b61c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_145821b84(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 != 0) {
    FUN_1477c9968(lVar4);
    FUN_1400020a8(lVar4);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  do {
    FUN_1412895b6(*(undefined8 *)(param_1 + 0x38 + lVar4),*(undefined4 *)(param_1 + 0x40 + lVar4));
    if (*(longlong *)(param_1 + 0x38 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  FUN_1458793b1(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478b6290 FUN_1478b6290 body=95 status=ok
// SIG undefined FUN_1478b6290(void)

undefined8 * FUN_1478b6290(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bf91aa(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478c3a1c(param_1,iVar1);
      FUN_1478c3a8f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478b62f0 FUN_1478b62f0 body=72 status=ok
// SIG undefined FUN_1478b62f0(void)

void FUN_1478b62f0(longlong param_1)

{
  FUN_145bf9179(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145bf91aa(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478b6338 FUN_1478b6338 body=229 status=ok
// SIG undefined FUN_1478b6338(void)

void FUN_1478b6338(longlong param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  
  cVar4 = FUN_146269f19();
  if ((cVar4 != '\0') && (0 < (longlong)*(int *)(param_1 + 0x730))) {
    pcVar6 = *(char **)(param_1 + 0x728);
    pcVar1 = pcVar6 + (longlong)*(int *)(param_1 + 0x730) * 0x18;
    do {
      if ((*pcVar6 == param_3) && ((longlong)*(int *)(pcVar6 + 0x10) != 0)) {
        lVar7 = *(longlong *)(pcVar6 + 8);
        lVar5 = (longlong)*(int *)(pcVar6 + 0x10) * 0xb8;
        do {
          iVar2 = *(int *)(param_2 + 0xf0);
          *(uint *)(param_2 + 0xf0) = iVar2 + 1U;
          if (*(uint *)(param_2 + 0xf4) < iVar2 + 1U) {
            FUN_1478c4260((longlong *)(param_2 + 0xe8),iVar2);
          }
          lVar3 = *(longlong *)(param_2 + 0xe8);
          FUN_1477e80e4(lVar3 + (longlong)iVar2 * 0xb8,lVar7);
          *(undefined1 *)(lVar3 + 0xb0 + (longlong)iVar2 * 0xb8) = *(undefined1 *)(lVar7 + 0xb0);
          lVar7 = lVar7 + 0xb8;
          lVar5 = lVar5 + -0xb8;
        } while (lVar5 != 0);
      }
      pcVar6 = pcVar6 + 0x18;
    } while (pcVar6 != pcVar1);
  }
  return;
}



// FUNCTION 1478b641e FUN_1478b641e body=145 status=ok
// SIG undefined FUN_1478b641e(void)

undefined8 FUN_1478b641e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  uVar1 = FUN_14001cc68(400,0x10);
  FUN_14795c16e(uVar1,param_2,param_1);
  local_38 = &local_50;
  local_50 = uVar1;
  local_40 = &local_48;
  FUN_1478c5566(param_1 + 0x138,local_2c);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b64b0 FUN_1478b64b0 body=90 status=ok
// SIG undefined FUN_1478b64b0(void)

void FUN_1478b64b0(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x58) + 0x168) == '\b') {
    *(byte *)(param_1 + 0x199) = *(byte *)(param_1 + 0x199) & 0xfd;
  }
  else if ((*(longlong *)(param_2 + 0x10) != 0) &&
          (fVar1 = *(float *)(param_2 + 0xa4) * *(float *)(*(longlong *)(param_2 + 0x10) + 0x44),
          0.0001 < fVar1)) {
    *(byte *)(param_1 + 0x199) =
         *(byte *)(param_1 + 0x199) & 0xfd |
         (*(float *)(param_2 + 0x98) <= fVar1 && fVar1 != *(float *)(param_2 + 0x98)) * '\x02';
  }
  *(byte *)(param_1 + 0x199) = *(byte *)(param_1 + 0x199) | 1;
  return;
}



// FUNCTION 1478b650a FUN_1478b650a body=280 status=ok
// SIG undefined FUN_1478b650a(void)

void FUN_1478b650a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x88);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      FUN_147d3110c(*local_88 + (longlong)iStack_6c * 0x20 + 4,param_2);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b6624 FUN_1478b6624 body=776 status=ok
// SIG undefined FUN_1478b6624(void)

float FUN_1478b6624(longlong param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  dVar7 = *param_3;
  uVar11 = SUB84(dVar7,0);
  uVar12 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = param_3[1];
  if ((dVar7 != dVar8) || (NAN(dVar7) || NAN(dVar8))) {
    fVar6 = *(float *)(param_1 + 0x1fc);
    fVar1 = *(float *)(param_1 + 0x200);
    if ((fVar6 != fVar1) || (NAN(fVar6) || NAN(fVar1))) {
      if (*(char *)(param_1 + 0x1e8) == '\0') {
        dVar4 = (double)fVar6;
        dVar3 = (double)fVar1;
        dVar10 = *(double *)(param_2 + 0x18);
        if ((*(byte *)(param_1 + 0xc1) & 4) == 0) {
          if (ABS(dVar3 - dVar4) <= 1e-08) {
            dVar10 = (double)((-(ulonglong)(dVar3 <= dVar10) >> 0x20 & 0x3ff00000) << 0x20);
          }
          else {
            dVar10 = (dVar10 - dVar4) / (dVar3 - dVar4);
          }
          if (1.0 <= dVar10) {
            dVar10 = 1.0;
          }
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          dVar8 = (dVar8 - dVar7) * dVar10 + dVar7;
        }
        else {
          fVar9 = (float)dVar10;
          if (fVar9 <= fVar6) goto LAB_1478b665a;
          if (fVar9 < fVar1) {
            iVar5 = _isnan((double)fVar9);
            if (iVar5 != 0) {
              fVar6 = (float)*param_3;
              goto LAB_1478b6661;
            }
            dVar7 = log(param_3[1]);
            uVar11 = SUB84(dVar7,0);
            uVar12 = (undefined4)((ulonglong)dVar7 >> 0x20);
            if (3.3999999521443642e+38 <= dVar7) {
              uVar11 = 0xc0000000;
              uVar12 = 0x47eff933;
            }
            dVar7 = log(*param_3);
            if (dVar7 <= 9.99999993922529e-09) {
              dVar7 = 9.99999993922529e-09;
            }
            dVar7 = ((double)CONCAT44(uVar12,uVar11) - dVar7) *
                    (double)(-(ulonglong)(1e-08 < ABS(dVar3 - dVar4)) &
                            (ulonglong)(((double)fVar9 - dVar4) / (dVar3 - dVar4))) + dVar7;
LAB_1478b6840:
            fVar6 = expf((float)dVar7);
            goto LAB_1478b6661;
          }
        }
LAB_1478b66c0:
        fVar6 = (float)dVar8;
        goto LAB_1478b6661;
      }
      uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uVar13 = uVar11;
      uVar15 = uVar12;
      if (dVar7 <= dVar8) {
        uVar13 = SUB84(dVar8,0);
        uVar15 = uVar14;
      }
      if (dVar8 <= dVar7) {
        uVar11 = SUB84(dVar8,0);
        uVar12 = uVar14;
      }
      fVar6 = (float)((*(double *)(param_2 + 0x18) - (double)fVar6) / (double)(fVar1 - fVar6));
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      uVar2 = FUN_1401e2d36(param_4);
      fVar6 = (float)FUN_1448c9f94(uVar2,fVar6,0);
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if ((*(byte *)(param_1 + 0xc1) & 4) == 0) {
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar6 = ((float)(double)CONCAT44(uVar15,uVar13) - (float)(double)CONCAT44(uVar12,uVar11)) *
                fVar6 + (float)(double)CONCAT44(uVar12,uVar11);
        goto LAB_1478b6661;
      }
      if (0.0 < fVar6) {
        if (1.0 <= fVar6) {
          fVar6 = (float)(double)CONCAT44(uVar15,uVar13);
          goto LAB_1478b6661;
        }
        iVar5 = _isnan((double)fVar6);
        if (iVar5 == 0) {
          dVar7 = log((double)CONCAT44(uVar15,uVar13));
          uVar13 = SUB84(dVar7,0);
          uVar15 = (undefined4)((ulonglong)dVar7 >> 0x20);
          if (3.3999999521443642e+38 <= dVar7) {
            uVar13 = 0xc0000000;
            uVar15 = 0x47eff933;
          }
          dVar7 = log((double)CONCAT44(uVar12,uVar11));
          if (dVar7 <= 9.99999993922529e-09) {
            dVar7 = 9.99999993922529e-09;
          }
          dVar7 = (double)fVar6 * ((double)CONCAT44(uVar15,uVar13) - dVar7) + dVar7;
          goto LAB_1478b6840;
        }
      }
    }
    else if ((double)fVar6 < *(double *)(param_2 + 0x18)) goto LAB_1478b66c0;
  }
LAB_1478b665a:
  fVar6 = (float)(double)CONCAT44(uVar12,uVar11);
LAB_1478b6661:
  if (20000.0 <= fVar6) {
    fVar6 = 20000.0;
  }
  if (fVar6 <= 20.0) {
    fVar6 = 20.0;
  }
  return fVar6;
}



// FUNCTION 1478b692c FUN_1478b692c body=353 status=ok
// SIG undefined FUN_1478b692c(void)

void FUN_1478b692c(longlong param_1,float param_2,longlong param_3,undefined4 *param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  puVar3 = (undefined4 *)(param_1 + 0x290);
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = param_4;
  }
  FUN_147962bd6(*(undefined8 *)(param_1 + 0x58),param_3,puVar3,puVar3 + 1);
  *(undefined1 **)(puVar3 + 3) = &DAT_3f8000003f800000;
  if ((~*(byte *)(*(longlong *)(param_3 + 0xf0) + 0xc0) & 10) == 0) {
    uVar2 = FUN_147963070(*(undefined8 *)(param_1 + 0x58));
    fVar4 = (float)FUN_147962f08(*(undefined8 *)(param_1 + 0x58),*puVar3,
                                 *(undefined8 *)(param_3 + 0xf0));
    if (((*(byte *)(*(longlong *)(param_3 + 0xf0) + 0xc0) & 0x10) != 0) &&
       ((*(char *)(puVar3 + 7) != '\x01' || (DAT_14c76123c == 0)))) {
      fVar1 = (float)puVar3[2];
      fVar6 = *(float *)(*(longlong *)(param_3 + 0xf0) + 0x234 + (ulonglong)(fVar1 < fVar4) * 4);
      if ((0.0 < fVar6) && (fVar7 = fVar4 - fVar1, 1e-08 <= fVar7 * fVar7)) {
        fVar6 = fVar6 * param_2;
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar4 = fVar1 + fVar7 * fVar6;
      }
    }
    puVar3[2] = fVar4;
    *(undefined1 *)(puVar3 + 7) = 0;
    uVar5 = FUN_147d28fe2(*(undefined8 *)(param_3 + 0xf0),uVar2,fVar4);
    puVar3[4] = uVar5;
    uVar5 = FUN_147d2903e(*(undefined8 *)(param_3 + 0xf0),uVar2,puVar3[2]);
    puVar3[3] = uVar5;
    uVar5 = FUN_147d29010(*(undefined8 *)(param_3 + 0xf0),uVar2,puVar3[2]);
    puVar3[6] = uVar5;
  }
  return;
}



// FUNCTION 1478b6a8e FUN_1478b6a8e body=32 status=ok
// SIG undefined FUN_1478b6a8e(void)

void FUN_1478b6a8e(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1478b5252(param_1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478b6aae FUN_1478b6aae body=85 status=ok
// SIG undefined FUN_1478b6aae(void)

void FUN_1478b6aae(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x648))(param_3);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478b6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x478))(plVar1,param_1,param_2,param_4);
    return;
  }
  return;
}



// FUNCTION 1478b6b04 FUN_1478b6b04 body=110 status=ok
// SIG undefined FUN_1478b6b04(void)

undefined8 FUN_1478b6b04(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144750a86(*(undefined8 *)(param_1 + 0x28),local_28,0,0);
  FUN_144a882a8(param_2,local_28,L"[TickActor]");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b6b74 FUN_1478b6b74 body=303 status=ok
// SIG undefined FUN_1478b6b74(void)

undefined8 * FUN_1478b6b74(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\0') {
    lVar1 = FUN_144b00d56(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    local_38 = *(undefined2 **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    puVar2 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    lVar1 = FUN_144b00d56(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
    local_38 = *(undefined2 **)(lVar1 + 0x18);
    FUN_1400021e4(&local_38,&local_58);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_140002266(&local_38,L"%s/%s",puVar3,puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478b6ca4 FUN_1478b6ca4 body=38 status=ok
// SIG undefined FUN_1478b6ca4(void)

undefined8 FUN_1478b6ca4(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = switchD_143c3d4dc::caseD_53();
  if (cVar1 != '\0') {
    uVar2 = FUN_1433b734c(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1478b6cd0 FUN_1478b6cd0 body=68 status=ok
// SIG undefined FUN_1478b6cd0(void)

void FUN_1478b6cd0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  switchD_143c3d4dc::caseD_13();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b6d1c FUN_1478b6d1c body=68 status=ok
// SIG undefined FUN_1478b6d1c(void)

void FUN_1478b6d1c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  switchD_143c3d4dc::caseD_15();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b6d68 FUN_1478b6d68 body=68 status=ok
// SIG undefined FUN_1478b6d68(void)

void FUN_1478b6d68(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1478b6dae FUN_1478b6dae body=136 status=ok
// SIG undefined FUN_1478b6dae(void)

void FUN_1478b6dae(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x120) != 0)) {
    uVar1 = FUN_144a7b8cc();
    lVar2 = FUN_144a78ede(param_1,uVar1);
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x120) + 0xa8);
    uVar3 = FUN_144a7b8cc();
    lVar4 = FUN_144a78ede(uVar1,uVar3);
    if (lVar2 != lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001478b6e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4a0))
                (*(longlong **)(param_1 + 0x1c8),&DAT_14cadad64);
      return;
    }
  }
  return;
}



// FUNCTION 1478b6e9e FUN_1478b6e9e body=137 status=ok
// SIG undefined FUN_1478b6e9e(void)

void FUN_1478b6e9e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_3 + 200) = 0;
  if (*(int *)(param_3 + 0xcc) < 0) {
    FUN_1475a01f8(param_3,0);
  }
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478c5c22(param_1,&local_28,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b6f28 FUN_1478b6f28 body=486 status=ok
// SIG undefined FUN_1478b6f28(void)

void FUN_1478b6f28(longlong param_1,double *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  if ((plVar2 != (longlong *)0x0) && (plVar2[0x24] == 0)) {
    (**(code **)(*plVar2 + 0x458))(plVar2,param_2,param_3);
  }
  plVar2 = (longlong *)(param_1 + 0x240);
  lVar1 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  lStack_60 = lVar1;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = local_68;
  lStack_80 = lStack_60;
  local_90 = plVar2;
  if ((iStack_54 != iVar5) || (lStack_60 != lVar1)) {
    do {
      plVar3 = *(longlong **)(*local_90 + (longlong)iStack_74 * 0x10);
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
        lVar4 = FUN_144a799b0();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          (**(code **)(*plVar3 + 0x458))(plVar3,param_2,param_3);
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar2 || (lStack_80 != lVar1 || iStack_74 != iVar5));
  }
  if ((char)param_3 == '\0') {
    if ((*param_2 == 0.0) && (!NAN(*param_2))) {
      if ((param_2[1] == 0.0) && (!NAN(param_2[1]))) {
        if ((param_2[2] == 0.0) && (!NAN(param_2[2]))) goto LAB_1478b7089;
      }
    }
    if ((*(longlong *)(param_1 + 0x1c8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1c8) + 0x9c) & 1) != 0)) {
      FUN_1478c9886(param_1);
      FUN_1478c9862(param_1,1);
    }
  }
LAB_1478b7089:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b7114 FUN_1478b7114 body=10 status=ok
// SIG undefined FUN_1478b7114(void)

void FUN_1478b7114(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478b7117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3a0))();
  return;
}



// FUNCTION 1478b711e FUN_1478b711e body=1 status=ok
// SIG undefined FUN_1478b711e(void)

void FUN_1478b711e(void)

{
  return;
}



// FUNCTION 1478b7120 FUN_1478b7120 body=67 status=ok
// SIG undefined FUN_1478b7120(void)

undefined8 FUN_1478b7120(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),lVar2 == 0);
  if ((param_2 == 0 || lVar2 == 0) || (*(longlong *)(param_2 + 0x1c8) == 0)) {
    uVar1 = 0;
  }
  else {
    do {
      lVar2 = *(longlong *)(lVar2 + 0x120);
      uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),lVar2 != 0);
    } while (lVar2 != *(longlong *)(param_2 + 0x1c8) && lVar2 != 0);
  }
  return uVar1;
}



// FUNCTION 1478b7164 FUN_1478b7164 body=1942 status=ok
// SIG undefined FUN_1478b7164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1478b7164(longlong param_1,undefined8 *param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_218 [32];
  double local_1f8 [4];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_189;
  undefined1 *local_188;
  double *local_180;
  undefined8 *local_178;
  longlong local_170;
  undefined1 *local_168;
  double *local_160;
  undefined8 *local_158;
  undefined1 *local_150;
  double *local_148;
  undefined8 *local_140;
  longlong local_138;
  undefined1 *local_130;
  double *local_128;
  undefined8 *local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  pdVar16 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  pdVar10 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    pdVar10 = pdVar16;
  }
  auVar2 = *(undefined1 (*) [16])(pdVar10 + 8);
  auVar3 = *(undefined1 (*) [16])(pdVar10 + 10);
  lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar22._8_4_ = (int)lVar18;
  auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar22._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar14 = movmskpd((int)pdVar16,auVar22);
  lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
  auVar23._8_4_ = (int)lVar18;
  auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
  auVar23._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  uVar15 = movmskpd((int)param_2,auVar23);
  local_189 = param_3;
  if ((uVar15 & 0x3fffffff) == 0 && iVar14 == 0) {
    pdVar16 = (double *)&DAT_14c846480;
    pdVar10 = local_1f8;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar10 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar10 = pdVar10 + 1;
    }
  }
  else {
    auVar23 = divpd(_DAT_149934d80,auVar2);
    auVar22 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
    local_1b8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar23._0_8_);
    dStack_1b0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar23._8_8_);
    local_1a8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar22._0_8_);
    local_1f8[0] = -*pdVar10;
    local_1f8[1] = -pdVar10[1];
    local_1f8[2] = pdVar10[2] * -1.0;
    local_1f8[3] = pdVar10[3] * 1.0;
    dVar19 = pdVar10[4] * local_1b8;
    dVar20 = pdVar10[5] * dStack_1b0;
    dVar21 = pdVar10[6] * local_1a8;
    dVar5 = dVar20 * local_1f8[0] - local_1f8[1] * dVar19;
    dVar6 = dVar21 * local_1f8[1] - local_1f8[2] * dVar20;
    dVar4 = dVar19 * local_1f8[2] - local_1f8[0] * dVar21;
    dVar6 = dVar6 + dVar6;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    local_1d8 = 0.0 - ((dVar5 * local_1f8[1] - dVar4 * local_1f8[2]) + local_1f8[3] * dVar6 + dVar19
                      );
    dStack_1d0 = 0.0 - (dVar5 * *pdVar10 + local_1f8[2] * dVar6 + local_1f8[3] * dVar4 + dVar20);
    local_1c8 = 0.0 - (local_1f8[3] * dVar5 + dVar21 + (dVar4 * local_1f8[0] - dVar6 * local_1f8[1])
                      );
    uStack_1c0 = 0;
    uStack_1a0 = 0;
  }
  lVar18 = FUN_144a3a302();
  if ((lVar18 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar18 != 0) goto LAB_1478b73ef;
    bVar7 = true;
  }
  else {
    FUN_1456cec3c(lVar18);
LAB_1478b73ef:
    lVar11 = FUN_144a78d6a();
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar18 + 0x38))) {
      bVar7 = false;
      lVar17 = 0;
      if (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30) {
        lVar17 = lVar18;
      }
      goto LAB_1478b740b;
    }
    bVar7 = false;
  }
  lVar17 = 0;
LAB_1478b740b:
  lVar11 = FUN_144a78d6a();
  if (lVar17 == lVar11) {
    if (param_4 == '\0') {
      local_148 = local_1f8;
      local_150 = &local_189;
      local_140 = param_2;
      if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar18);
      }
      plVar1 = (longlong *)(param_1 + 0x240);
      lVar18 = param_1 + 0x250;
      local_f0 = 0x100000000;
      local_e0 = 0xffffffff;
      uStack_d8 = 0;
      lStack_e8 = lVar18;
      if (*(int *)(param_1 + 0x268) == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_f0);
        iVar14 = *(int *)(param_1 + 0x268);
      }
      uStack_f8 = CONCAT44(uStack_d4,uStack_d8);
      local_100 = local_e0;
      uVar8 = local_100;
      local_110 = local_f0;
      lStack_108 = lStack_e8;
      local_100._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      local_118 = plVar1;
      if ((local_100._4_4_ != iVar14) || (lStack_e8 != lVar18)) {
        iVar9 = local_100._4_4_;
        local_100 = uVar8;
        do {
          if (*(longlong *)(*local_118 + (longlong)iVar9 * 0x10) != 0) {
            FUN_1433c0a62(&local_150);
          }
          local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
          FUN_1449c0562(&local_110);
          iVar9 = local_100._4_4_;
          uVar8 = local_100;
        } while (local_118 != plVar1 || (lStack_108 != lVar18 || local_100._4_4_ != iVar14));
      }
    }
    else {
      local_128 = local_1f8;
      local_138 = lVar18;
      local_130 = &local_189;
      local_120 = param_2;
      if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar18);
      }
      FUN_1433c00f4(param_1,&local_138,&local_130);
      uVar8 = local_100;
    }
  }
  else if (param_4 == '\0') {
    local_180 = local_1f8;
    local_188 = &local_189;
    local_178 = param_2;
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar11 = param_1 + 0x250;
    local_f0 = 0x100000000;
    local_e0 = 0xffffffff;
    uStack_d8 = 0;
    lStack_e8 = lVar11;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_f0);
      iVar14 = *(int *)(param_1 + 0x268);
    }
    local_110 = local_f0;
    lStack_108 = lStack_e8;
    uStack_f8 = CONCAT44(uStack_d4,uStack_d8);
    local_100 = local_e0;
    uVar8 = local_100;
    local_100._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
    local_118 = plVar1;
    if ((local_100._4_4_ != iVar14) || (lStack_e8 != lVar11)) {
      iVar9 = local_100._4_4_;
      local_100 = uVar8;
      do {
        lVar17 = *(longlong *)(*local_118 + (longlong)iVar9 * 0x10);
        if (lVar17 != 0) {
          if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar18);
          }
          if (((bVar7) || (lVar13 = FUN_144a78d6a(), lVar13 == 0)) ||
             (*(int *)(lVar18 + 0x38) < *(int *)(lVar13 + 0x38))) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            if (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
                == lVar13 + 0x30) {
              lVar12 = lVar18;
            }
          }
          if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
            FUN_1433c0a62(&local_188,lVar17);
          }
        }
        local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
        FUN_1449c0562(&local_110);
        iVar9 = local_100._4_4_;
        uVar8 = local_100;
      } while (local_118 != plVar1 || (lStack_108 != lVar11 || local_100._4_4_ != iVar14));
    }
  }
  else {
    local_160 = local_1f8;
    local_170 = lVar18;
    local_168 = &local_189;
    local_158 = param_2;
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    FUN_1433c0512(param_1,&local_170,&local_168);
    uVar8 = local_100;
  }
  local_100 = uVar8;
  if ((local_d0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478b78fc FUN_1478b78fc body=438 status=ok
// SIG undefined FUN_1478b78fc(void)

void FUN_1478b78fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1478b7ab4(0,&local_98);
  FUN_1404df0ae(param_2,(int)uStack_90 - local_64);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar3 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar3 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = &local_98;
  if ((iStack_a4 != iVar3) || (local_b0 != local_88)) {
    do {
      uVar2 = *(undefined8 *)(*local_e0 + (longlong)iStack_c4 * 0x10);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_140c43e06(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != &local_98 || (local_d0 != local_88 || iStack_c4 != iVar3));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_141361a2c(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b7ab4 FUN_1478b7ab4 body=533 status=ok
// SIG undefined FUN_1478b7ab4(void)

void FUN_1478b7ab4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [36];
  undefined1 local_a4 [4];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1433b7b66(param_2);
  plVar1 = (longlong *)(param_1 + 0x240);
  local_78 = 0;
  uStack_70 = 0;
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_a0 + (longlong)iStack_84 * 0x10);
      if (lVar3 != 0) {
        lVar5 = FUN_144a3a302();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_1404dedd4(lVar3,&local_78);
          uVar6 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
          uVar7 = uVar6 + (int)uStack_70;
          if (uVar6 < uVar7) {
            if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)uVar7);
            }
            FUN_1478c61ac(param_2,uVar7);
            iVar4 = 1;
            if (3 < uVar7) {
              uVar7 = (uVar7 | 1) + 0xe;
              iVar4 = 0x1f;
              if (uVar7 != 0) {
                for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                }
              }
              iVar4 = 1 << ((byte)iVar4 & 0x1f);
            }
            if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar4)) {
              *(int *)(param_2 + 0x48) = iVar4;
              FUN_1409e9cce(param_2);
            }
          }
          lVar3 = local_78;
          if ((int)uStack_70 != 0) {
            lVar9 = (longlong)(int)uStack_70;
            lVar5 = 0;
            do {
              local_68 = *(undefined8 *)(lVar3 + lVar5);
              FUN_1409e9912(param_2,local_a4,&local_68,0);
              lVar5 = lVar5 + 8;
            } while (lVar9 * 8 != lVar5);
          }
        }
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar8));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b7ccc FUN_1478b7ccc body=47 status=ok
// SIG undefined FUN_1478b7ccc(void)

void FUN_1478b7ccc(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ab0);
                    /* WARNING: Could not recover jumptable at 0x0001478b7cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1478b7cfc FUN_1478b7cfc body=47 status=ok
// SIG undefined FUN_1478b7cfc(void)

void FUN_1478b7cfc(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ad0);
                    /* WARNING: Could not recover jumptable at 0x0001478b7d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1478b7d2c FUN_1478b7d2c body=143 status=ok
// SIG undefined FUN_1478b7d2c(void)

void FUN_1478b7d2c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1478b7dcc(param_1,&local_30);
  puVar2 = (undefined8 *)param_2[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b7dcc FUN_1478b7dcc body=271 status=ok
// SIG undefined FUN_1478b7dcc(void)

/* WARNING: Removing unreachable block (ram,0x0001478b7e1d) */
/* WARNING: Removing unreachable block (ram,0x0001478b7e23) */
/* WARNING: Removing unreachable block (ram,0x0001478b7e31) */

void FUN_1478b7dcc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  plStack_28 = (longlong *)param_2[2];
  if (plStack_28 == (longlong *)0x0) {
    plStack_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cac9af0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_38);
  plVar3 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b7edc FUN_1478b7edc body=143 status=ok
// SIG undefined FUN_1478b7edc(void)

void FUN_1478b7edc(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1478b7f7c(param_1,&local_30);
  puVar2 = (undefined8 *)param_2[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b7f7c FUN_1478b7f7c body=271 status=ok
// SIG undefined FUN_1478b7f7c(void)

/* WARNING: Removing unreachable block (ram,0x0001478b7fcd) */
/* WARNING: Removing unreachable block (ram,0x0001478b7fd3) */
/* WARNING: Removing unreachable block (ram,0x0001478b7fe1) */

void FUN_1478b7f7c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  plStack_28 = (longlong *)param_2[2];
  if (plStack_28 == (longlong *)0x0) {
    plStack_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cac9b40);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_38);
  plVar3 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b808c FUN_1478b808c body=91 status=ok
// SIG undefined FUN_1478b808c(void)

void FUN_1478b808c(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9b00);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b80e8 FUN_1478b80e8 body=91 status=ok
// SIG undefined FUN_1478b80e8(void)

void FUN_1478b80e8(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9b10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b8144 FUN_1478b8144 body=91 status=ok
// SIG undefined FUN_1478b8144(void)

void FUN_1478b8144(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9b20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b81a0 FUN_1478b81a0 body=91 status=ok
// SIG undefined FUN_1478b81a0(void)

void FUN_1478b81a0(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9b30);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b81fc FUN_1478b81fc body=104 status=ok
// SIG undefined FUN_1478b81fc(void)

void FUN_1478b81fc(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfd | param_2 * '\x02';
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_1478b8264(lVar1);
    if (lVar1 != 0) {
      if (((*(byte *)(param_1 + 0x62) & 2) != 0) &&
         ((bVar2 = *(byte *)(param_1 + 0x65) & 0x18, bVar2 == 0x10 || (bVar2 == 8)))) {
        FUN_147a91488(lVar1,param_1);
        return;
      }
      FUN_147a915c8(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1478b8264 FUN_1478b8264 body=103 status=ok
// SIG undefined FUN_1478b8264(void)

void FUN_1478b8264(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a71146();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1478c635a(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b82cc FUN_1478b82cc body=41 status=ok
// SIG undefined FUN_1478b82cc(void)

undefined8 FUN_1478b82cc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0 && *(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478b82ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x490))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1478b82f6 FUN_1478b82f6 body=152 status=ok
// SIG undefined FUN_1478b82f6(void)

void FUN_1478b82f6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
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
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x498))(plVar1,param_2,1);
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_1478b83aa(param_1 + 0x80);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b83aa FUN_1478b83aa body=113 status=ok
// SIG undefined FUN_1478b83aa(void)

longlong * FUN_1478b83aa(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = 10;
  plVar3 = param_2;
  plVar4 = param_1;
  while( true ) {
    plVar4 = plVar4 + 1;
    plVar3 = plVar3 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *plVar4 = *plVar3;
  }
  lVar2 = param_2[0xb];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
    }
  }
  param_1[0xb] = lVar2;
  return param_1;
}



// FUNCTION 1478b841c FUN_1478b841c body=93 status=ok
// SIG undefined FUN_1478b841c(void)

undefined8 * FUN_1478b841c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_144a7b8cc();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  puVar5 = param_2;
  if (lVar2 != 0) {
    lVar2 = FUN_1405d1c86(lVar2);
    if (lVar2 != 0) {
      lVar3 = 0xc;
      puVar4 = (undefined8 *)(lVar2 + 0x80);
      goto LAB_1478b846b;
    }
  }
  puVar4 = &DAT_14c846480;
  lVar3 = 0xc;
LAB_1478b846b:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_2;
}



// FUNCTION 1478b847a FUN_1478b847a body=65 status=ok
// SIG undefined FUN_1478b847a(void)

longlong FUN_1478b847a(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar1 = FUN_14348b166(*(longlong *)(param_1 + 0x1c8));
    return lVar1;
  }
  lVar1 = FUN_1447210f0();
  if (*(longlong *)(lVar1 + 0x118) != 0) {
    return *(longlong *)(lVar1 + 0x118);
  }
  lVar1 = FUN_14572cb46(lVar1);
  return lVar1;
}



// FUNCTION 1478b84c4 FUN_1478b84c4 body=1 status=ok
// SIG undefined FUN_1478b84c4(void)

void FUN_1478b84c4(void)

{
  return;
}



// FUNCTION 1478b84c6 FUN_1478b84c6 body=402 status=ok
// SIG undefined FUN_1478b84c6(void)

void FUN_1478b84c6(longlong param_1,float param_2,char param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = 0;
  if (param_3 != '\0') {
    uVar6 = ~-(uint)(ABS(param_2) <= 1e-08) & (uint)param_2 |
            -(uint)(ABS(param_2) <= 1e-08) & 0x4a1e3400;
  }
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar5) || (uStack_68 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_98 + (longlong)iStack_7c * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_14081cebe();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) && ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0)) {
          (**(code **)(*plVar3 + 0xa20))(plVar3,uVar6,0,param_4);
        }
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (CONCAT44(uStack_84,uStack_88) != lVar2 || iStack_7c != iVar5));
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b865a FUN_1478b865a body=14 status=ok
// SIG undefined FUN_1478b865a(void)

void FUN_1478b865a(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xdf | param_2 << 5;
  return;
}



// FUNCTION 1478b8668 FUN_1478b8668 body=47 status=ok
// SIG undefined FUN_1478b8668(void)

void FUN_1478b8668(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cac9a28);
                    /* WARNING: Could not recover jumptable at 0x0001478b8694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1478b8698 FUN_1478b8698 body=319 status=ok
// SIG undefined FUN_1478b8698(void)

void FUN_1478b8698(longlong param_1,undefined8 param_2,longlong param_3,double *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0x1b0);
  }
  iVar2 = FUN_14487fd02();
  if ((param_3 == 0) || (iVar2 == 3)) goto LAB_1478b879c;
  if (((*param_4 != 0.0) || (((NAN(*param_4) || (param_4[1] != 0.0)) || (NAN(param_4[1]))))) ||
     ((param_4[2] != 0.0 || (NAN(param_4[2]))))) {
    local_38 = param_4[2];
    uVar4 = *(undefined4 *)param_4;
    uVar5 = *(undefined4 *)((longlong)param_4 + 4);
    uVar6 = *(undefined4 *)(param_4 + 1);
    uVar7 = *(undefined4 *)((longlong)param_4 + 0xc);
LAB_1478b874c:
    local_48 = CONCAT44(uVar5,uVar4);
    uStack_40 = CONCAT44(uVar7,uVar6);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      local_38 = DAT_14c8464f0;
      uVar4 = (undefined4)DAT_14c8464e0;
      uVar5 = DAT_14c8464e0._4_4_;
      uVar6 = (undefined4)DAT_14c8464e8;
      uVar7 = DAT_14c8464e8._4_4_;
      goto LAB_1478b874c;
    }
    local_48 = *(undefined8 *)(lVar1 + 0x260);
    uStack_40 = *(undefined8 *)(lVar1 + 0x268);
    local_38 = *(double *)(lVar1 + 0x270);
  }
  plVar3 = DAT_14cac95d8;
  if (DAT_14cac95e0 == 0) {
    plVar3 = (longlong *)0x0;
  }
  local_58 = param_6;
  local_60 = param_5;
  local_68 = &local_48;
  (**(code **)(*plVar3 + 0x58))(param_5,param_1,param_2,param_3);
LAB_1478b879c:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b87d8 FUN_1478b87d8 body=57 status=ok
// SIG undefined FUN_1478b87d8(void)

void FUN_1478b87d8(longlong *param_1)

{
  char cVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    if (cVar1 != '\0') {
      FUN_1478c63a6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1478b8812 FUN_1478b8812 body=1482 status=ok
// SIG undefined FUN_1478b8812(void)

undefined8
FUN_1478b8812(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_3b8 [32];
  float *local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  undefined4 local_35c;
  ulonglong local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  longlong local_338;
  longlong local_328 [23];
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  float local_208;
  undefined4 local_204;
  longlong local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined4 local_164;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_70;
  
  fVar9 = (float)param_2;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar5 = param_3[1];
  if ((((lVar5 == 0) || (lVar3 = FUN_1411311bc(), lVar3 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (lVar7 = param_3[1],
     lVar7 == 0 ||
     *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
     lVar3 + 0x30)) {
    plVar4 = (longlong *)FUN_1411311bc();
    lVar5 = plVar4[0x22];
  }
  else {
    lVar5 = FUN_1411311bc();
    if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)param_3[1];
    }
    lVar5 = plVar4[0x22];
  }
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3,1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
    if (cVar2 != '\0') {
      local_398 = (float *)param_5;
      param_2 = (**(code **)(*param_1 + 0x548))(param_1,fVar9,param_3,param_4);
      fVar8 = (float)param_2;
      if ((fVar8 != 0.0) || (NAN(fVar8))) {
        if ((int)param_3[9] < 1) {
          local_358 = 0;
          memset(&local_208,0,0x100);
          local_138 = 0xffffffff;
          local_204 = 0x3f800000;
          local_164 = 0xffffffff;
          local_350 = 0;
        }
        else {
          _Src = (void *)param_3[8];
          memcpy(&local_208,_Src,0xb8);
          local_350 = *(undefined8 *)((longlong)_Src + 0xb8);
          local_148 = *(undefined8 *)((longlong)_Src + 0xc0);
          uStack_140 = *(undefined8 *)((longlong)_Src + 200);
          local_138 = *(undefined4 *)((longlong)_Src + 0xd0);
          local_134 = *(undefined1 *)((longlong)_Src + 0xd4);
          local_358 = (ulonglong)CONCAT31((int3)((uint)local_138 >> 8),local_134);
          local_110 = *(undefined8 *)((longlong)_Src + 0xf8);
          local_130 = *(undefined8 *)((longlong)_Src + 0xd8);
          uStack_128 = *(undefined8 *)((longlong)_Src + 0xe0);
          local_120 = *(undefined8 *)((longlong)_Src + 0xe8);
          uStack_118 = *(undefined8 *)((longlong)_Src + 0xf0);
          local_150 = local_350;
        }
        local_218 = param_3[7];
        local_228 = (undefined4)param_3[5];
        uStack_224 = *(undefined4 *)((longlong)param_3 + 0x2c);
        uStack_220 = (undefined4)param_3[6];
        uStack_21c = *(undefined4 *)((longlong)param_3 + 0x34);
        local_388 = param_5;
        local_398 = &local_208;
        local_390 = param_4;
        local_35c = local_138;
        FUN_1478b8fce(param_1,fVar8,lVar5);
        memcpy(local_328,&local_208,0xb8);
        local_270 = local_350;
        local_268 = local_148;
        uStack_260 = uStack_140;
        local_258 = local_35c;
        local_254 = (undefined1)local_358;
        local_250 = (undefined4)local_130;
        uStack_24c = local_130._4_4_;
        uStack_248 = (undefined4)uStack_128;
        uStack_244 = uStack_128._4_4_;
        local_240 = local_120;
        uStack_238 = uStack_118;
        local_230 = local_110;
        local_348 = (undefined4)param_3[5];
        uStack_344 = *(undefined4 *)((longlong)param_3 + 0x2c);
        uStack_340 = (undefined4)param_3[6];
        uStack_33c = *(undefined4 *)((longlong)param_3 + 0x34);
        local_398 = (float *)&local_348;
        local_338 = param_3[7];
        local_380 = param_5;
        local_390 = local_328;
        local_388 = param_4;
        FUN_1478b9088((longlong)param_1 + 0x202,param_1,fVar8,lVar5);
        if (0 < (int)param_3[9]) {
          lVar7 = 0xd8;
          lVar3 = 0;
          do {
            plVar4 = (longlong *)FUN_14479d2ce(param_3[8] + lVar7);
            if ((plVar4 != (longlong *)0x0) && ((longlong *)plVar4[0x15] == param_1)) {
              local_398 = (float *)param_5;
              (**(code **)(*plVar4 + 0x7e0))(plVar4,fVar9,param_3,param_4);
            }
            lVar3 = lVar3 + 1;
            lVar7 = lVar7 + 0x100;
          } while (lVar3 < (int)param_3[9]);
        }
      }
    }
  }
  else if ((fVar9 != 0.0) || (NAN(fVar9))) {
    local_78 = param_3[5];
    local_88 = (undefined4)param_3[3];
    uStack_84 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_80 = (undefined4)param_3[4];
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar3 = param_3[0x24];
    plVar4 = param_3 + 0x21;
    local_390 = (longlong *)FUN_14479d2ce(plVar4);
    local_a8 = param_3[0x11];
    lStack_a0 = param_3[0x12];
    local_398 = (float *)&local_a8;
    local_98 = param_3[0x13];
    local_c8 = (undefined4)param_3[0xb];
    uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x5c);
    uStack_c0 = (undefined4)param_3[0xc];
    uStack_bc = *(undefined4 *)((longlong)param_3 + 100);
    local_b8 = param_3[0xd];
    local_370 = param_5;
    local_380 = (longlong *)&local_88;
    local_388 = (longlong *)lVar3;
    local_378 = param_4;
    local_368 = param_3 + 6;
    FUN_1478b8dde(param_1,fVar9,lVar5);
    local_358 = (longlong)param_1 + 0x201;
    local_d8 = param_3[5];
    local_e8 = (undefined4)param_3[3];
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_e0 = (undefined4)param_3[4];
    uStack_dc = *(undefined4 *)((longlong)param_3 + 0x24);
    plVar1 = (longlong *)param_3[0x24];
    local_390 = (longlong *)FUN_14479d2ce(plVar4);
    local_108 = (undefined4)param_3[0xb];
    uStack_104 = *(undefined4 *)((longlong)param_3 + 0x5c);
    uStack_100 = (undefined4)param_3[0xc];
    uStack_fc = *(undefined4 *)((longlong)param_3 + 100);
    local_398 = (float *)&local_108;
    local_f8 = param_3[0xd];
    local_370 = param_5;
    local_388 = plVar1;
    local_380 = (longlong *)&local_e8;
    local_378 = (longlong *)lVar5;
    FUN_1478b8ebe(local_358,param_1,fVar9,param_4);
    plVar4 = (longlong *)FUN_14479d2ce(plVar4);
    if (plVar4 != (longlong *)0x0) {
      local_398 = (float *)param_5;
      (**(code **)(*plVar4 + 0x7e0))(plVar4,fVar9,param_3,param_4);
    }
  }
  fVar9 = (float)param_2;
  if ((fVar9 != 0.0) || (NAN(fVar9))) {
    local_1f0 = param_5;
    local_208 = fVar9;
    local_200 = lVar5;
    local_1f8 = param_4;
    uVar6 = FUN_14477b072(param_1,DAT_14cac9b50);
    (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_208);
    local_390 = param_5;
    local_398 = (float *)param_4;
    FUN_1478b9196(param_1 + 0x40,param_1,fVar9,lVar5);
    if (param_4 != (longlong *)0x0) {
      local_398 = (float *)param_5;
      (**(code **)(*param_4 + 0x700))(param_4,fVar9,lVar5,param_1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b8dde FUN_1478b8dde body=222 status=ok
// SIG undefined FUN_1478b8dde(void)

void FUN_1478b8dde(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,void *param_11)

{
  undefined8 uVar1;
  undefined1 auStack_1a8 [32];
  undefined4 local_188 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_178 = *param_4;
  uStack_170 = param_4[1];
  local_168 = param_4[2];
  local_160 = *param_5;
  uStack_158 = param_5[1];
  local_150 = param_5[2];
  local_148 = param_6;
  uStack_140 = param_7;
  local_138 = *param_8;
  uStack_130 = param_8[1];
  local_128 = param_8[2];
  local_120 = param_9;
  uStack_118 = param_10;
  local_188[0] = param_2;
  local_180 = param_3;
  memcpy(local_110,param_11,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cac9bb0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_188);
  if ((local_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b8ebe FUN_1478b8ebe body=270 status=ok
// SIG undefined FUN_1478b8ebe(void)

void FUN_1478b8ebe(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1478c6430(param_1,&local_b8);
  if (local_b8 != 0) {
    local_58 = param_8[2];
    local_68 = *param_8;
    uStack_60 = param_8[1];
    local_90 = *param_5;
    uStack_8c = param_5[1];
    uStack_88 = param_5[2];
    uStack_84 = param_5[3];
    local_80 = *(undefined8 *)(param_5 + 4);
    local_78 = param_6;
    local_70 = param_7;
    local_50 = param_9;
    local_48 = param_10;
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    FUN_1447cd2ec();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b8fce FUN_1478b8fce body=184 status=ok
// SIG undefined FUN_1478b8fce(void)

void FUN_1478b8fce(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  void *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = *param_4;
  uStack_150 = param_4[1];
  local_148 = param_4[2];
  local_168[0] = param_2;
  local_160 = param_3;
  memcpy(local_140,param_5,0x100);
  local_40 = param_6;
  uStack_38 = param_7;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9bc0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_168);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b9088 FUN_1478b9088 body=269 status=ok
// SIG undefined FUN_1478b9088(void)

void FUN_1478b9088(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5,void *param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 local_160 [256];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1478c65b4(param_1,&local_1a0);
  if (local_1a0 != 0) {
    local_168 = param_5[2];
    local_178 = *param_5;
    uStack_170 = param_5[1];
    local_190 = param_2;
    local_188 = param_3;
    local_180 = param_4;
    memcpy(local_160,param_6,0x100);
    local_60 = param_7;
    local_58 = param_8;
    FUN_1447cd2ec(local_1a0,&local_190);
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_198 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar2 = (int *)((longlong)local_198 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_198 + 0x10))(local_198);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b9196 FUN_1478b9196 body=177 status=ok
// SIG undefined FUN_1478b9196(void)

void FUN_1478b9196(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1478c6738(param_1,&local_68);
  if (local_68 != 0) {
    local_40 = param_5;
    local_38 = param_6;
    local_58 = param_2;
    local_50 = param_3;
    local_48 = param_4;
    FUN_1447cd2ec();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b9248 FUN_1478b9248 body=229 status=ok
// SIG undefined FUN_1478b9248(void)

float FUN_1478b9248(undefined8 param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  if ((longlong)*(int *)(param_3 + 0x48) < 1) {
    fVar6 = 3.4028235e+38;
  }
  else {
    lVar1 = *(longlong *)(param_3 + 0x40);
    fVar6 = 3.4028235e+38;
    lVar3 = 0;
    do {
      dVar5 = *(double *)(lVar1 + 0x38 + lVar3) - *(double *)(param_3 + 0x38);
      dVar7 = *(double *)(lVar1 + 0x28 + lVar3) - *(double *)(param_3 + 0x28);
      dVar2 = *(double *)(lVar1 + 0x30 + lVar3) - *(double *)(param_3 + 0x30);
      fVar4 = (float)(dVar5 * dVar5 + dVar7 * dVar7 + dVar2 * dVar2);
      if (fVar6 <= fVar4) {
        fVar4 = fVar6;
      }
      fVar6 = fVar4;
      lVar3 = lVar3 + 0x100;
    } while ((longlong)*(int *)(param_3 + 0x48) * 0x100 != lVar3);
  }
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  fVar4 = (float)FUN_147a91b68(param_3 + 0x10,fVar6);
  fVar6 = 0.0;
  if (0.0 <= fVar4) {
    fVar6 = fVar4;
  }
  return (param_2 - *(float *)(param_3 + 0x14)) * fVar6 + *(float *)(param_3 + 0x14);
}



// FUNCTION 1478b932e FUN_1478b932e body=71 status=ok
// SIG undefined FUN_1478b932e(void)

undefined8 FUN_1478b932e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b9376 FUN_1478b9376 body=3571 status=ok
// SIG undefined FUN_1478b9376(void)

void FUN_1478b9376(longlong *******param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  double param_5)

{
  longlong ******pppppplVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong ******pppppplVar6;
  longlong ****pppplVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *******ppppppplVar12;
  longlong lVar13;
  longlong *****ppppplVar14;
  uint uVar15;
  longlong *******ppppppplVar16;
  bool bVar17;
  longlong *******ppppppplVar18;
  longlong *******ppppppplVar19;
  undefined2 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined2 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  longlong local_1a0;
  longlong ******local_198;
  longlong ******local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong ******local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  float local_138;
  float local_134;
  longlong local_130;
  longlong local_128;
  undefined2 *local_120;
  int local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int local_108;
  longlong ******local_100;
  longlong ******local_f8;
  longlong ******pppppplStack_f0;
  longlong ******local_e8;
  longlong ******pppppplStack_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong ******local_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  (*(code *)(*param_1)[0xad])(0x3f800000,&local_f8);
  iVar9 = (int)pppppplStack_f0;
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0) {
    ppppppplVar18 = (longlong *******)local_f8;
    if ((int)pppppplStack_f0 == 0) {
      ppppppplVar18 = (longlong *******)&DAT_149dfb77a;
    }
    FUN_140002266(&local_c8,L"%s DELETED (IsValid() == false)",ppppppplVar18);
    if ((longlong *******)local_f8 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    local_f8 = (longlong ******)local_c8;
    pppppplStack_f0 = (longlong ******)uStack_c0;
    iVar9 = (int)uStack_c0;
  }
  ppppppplVar18 = (longlong *******)(param_2 + 0xa8);
  puVar23 = &DAT_149dfb77a;
  ppppppplVar16 = (longlong *******)local_f8;
  if (iVar9 == 0) {
    ppppppplVar16 = (longlong *******)&DAT_149dfb77a;
  }
  iVar9 = FUN_144a8a8b6(ppppppplVar16,&DAT_149e02088);
  if (iVar9 != 0) {
    local_c8 = (longlong *******)((ulonglong)local_c8 & 0xffffffff00000000);
    FUN_147d8f316(ppppppplVar18,&local_f8);
  }
  *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  ppppppplVar16 = &local_100;
  FUN_1446f470e(ppppppplVar16,&DAT_14a77e7e0);
  ppppppplVar12 = (longlong *******)0x0;
  if ((longlong)(int)param_3[1] != 0) {
    ppppppplVar12 = (longlong *******)((longlong)(int)param_3[1] * 8);
    ppppppplVar19 = (longlong *******)0x0;
    do {
      if (*(longlong ********)(*param_3 + (longlong)ppppppplVar19) == (longlong *******)local_100) {
        ppppppplVar16 = param_1;
        ppppppplVar12 = (longlong *******)FUN_14487fd02();
        if ((int)ppppppplVar12 != 0) {
          uVar10 = FUN_14487fd02(param_1);
          local_1a8 = (double)CONCAT44(local_1a8._4_4_,uVar10);
          FUN_140002266(&local_c8,L"ROLE: %i RemoteRole: %i NetNode: %i",
                        *(undefined1 *)(param_1 + 0x2f),*(undefined1 *)(param_1 + 0xd));
          if ((longlong *******)local_f8 != (longlong *******)0x0) {
            FUN_1400020a8();
          }
          local_f8 = (longlong ******)local_c8;
          pppppplStack_f0 = (longlong ******)uStack_c0;
          if ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0) {
            FUN_140056680(&local_168,L" Tear Off");
            FUN_1407ec8fc(&local_c8,&local_f8,&local_168);
            if ((longlong *******)local_f8 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
            local_f8 = (longlong ******)local_c8;
            pppppplStack_f0 = (longlong ******)uStack_c0;
            local_c8 = (longlong *******)0x0;
            uStack_c0 = (longlong *******)0x0;
            if (local_168 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
          }
          local_c8 = (longlong *******)((ulonglong)local_c8 & 0xffffffff00000000);
          ppppppplVar16 = ppppppplVar18;
          ppppppplVar12 = (longlong *******)FUN_147d8f316(ppppppplVar18,&local_f8);
        }
        break;
      }
      ppppppplVar19 = ppppppplVar19 + 1;
      ppppppplVar16 = (longlong *******)local_100;
    } while (ppppppplVar12 != ppppppplVar19);
  }
  uVar10 = SUB84(ppppppplVar16,0);
  local_178 = 0;
  pppppplVar1 = param_1[0x39];
  local_198 = (longlong ******)ppppppplVar18;
  if (pppppplVar1 == (longlong ******)0x0) {
    local_158 = (longlong ******)DAT_14c846508;
    uVar10 = (undefined4)DAT_14c8464f8;
    uVar24 = DAT_14c8464f8._4_4_;
    uVar25 = (undefined4)DAT_14c846500;
    uVar26 = DAT_14c846500._4_4_;
  }
  else {
    ppppppplVar18 = (longlong *******)pppppplVar1[0x48];
    ppppppplVar16 = (longlong *******)pppppplVar1[0x49];
    pppppplVar6 = (longlong ******)pppppplVar1[0x4a];
    ppppppplVar19 = (longlong *******)pppppplVar1[0x4b];
    ppppplVar14 = pppppplVar1[0x45];
    local_c8 = ppppppplVar18;
    uStack_c0 = ppppppplVar16;
    local_b8 = pppppplVar6;
    uStack_b0 = ppppppplVar19;
    if (ppppplVar14 == (longlong *****)0x0) {
      uVar10 = 0x40;
      ppppplVar14 = (longlong *****)FUN_14001cc68(0x40,0x10);
      pppplVar7 = DAT_14c8463d8;
      *ppppplVar14 = DAT_14c8463d0;
      ppppplVar14[1] = pppplVar7;
      pppplVar7 = DAT_14c8463e8;
      ppppplVar14[2] = DAT_14c8463e0;
      ppppplVar14[3] = pppplVar7;
      pppplVar7 = (longlong ****)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      ppppplVar14[4] = (longlong ****)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      ppppplVar14[5] = pppplVar7;
      ppppppplVar12 = DAT_14c846508;
      ppppplVar14[6] = (longlong ****)DAT_14c846508;
      pppppplVar1[0x45] = ppppplVar14;
    }
    auVar4._8_4_ = (int)-(ulonglong)((double)ppppppplVar16 != (double)ppppplVar14[1]);
    auVar4._0_8_ = -(ulonglong)((double)ppppppplVar18 != (double)*ppppplVar14);
    auVar4._12_4_ = (int)(-(ulonglong)((double)ppppppplVar16 != (double)ppppplVar14[1]) >> 0x20);
    iVar9 = movmskpd((int)ppppppplVar12,auVar4);
    auVar5._8_4_ = (int)-(ulonglong)((double)ppppppplVar19 != (double)ppppplVar14[3]);
    auVar5._0_8_ = -(ulonglong)((double)pppppplVar6 != (double)ppppplVar14[2]);
    auVar5._12_4_ = (int)(-(ulonglong)((double)ppppppplVar19 != (double)ppppplVar14[3]) >> 0x20);
    uVar15 = movmskpd(uVar10,auVar5);
    if ((uVar15 & 0x3fffffff) != 0 || iVar9 != 0) {
      ppppplVar14[2] = (longlong ****)local_b8;
      ppppplVar14[3] = (longlong ****)uStack_b0;
      *(undefined4 *)ppppplVar14 = (undefined4)local_c8;
      *(undefined4 *)((longlong)ppppplVar14 + 4) = local_c8._4_4_;
      *(int *)(ppppplVar14 + 1) = (int)uStack_c0;
      *(uint *)((longlong)ppppplVar14 + 0xc) = uStack_c0._4_4_;
      FUN_1448052ee(&local_c8,&local_168);
      ppppplVar14[6] = (longlong ****)local_158;
      ppppplVar14[4] = (longlong ****)local_168;
      ppppplVar14[5] = (longlong ****)uStack_160;
    }
    local_158 = (longlong ******)ppppplVar14[6];
    uVar10 = *(undefined4 *)(ppppplVar14 + 4);
    uVar24 = *(undefined4 *)((longlong)ppppplVar14 + 0x24);
    uVar25 = *(undefined4 *)(ppppplVar14 + 5);
    uVar26 = *(undefined4 *)((longlong)ppppplVar14 + 0x2c);
  }
  ppppppplVar18 = (longlong *******)local_198;
  local_168 = (longlong *******)CONCAT44(uVar24,uVar10);
  uStack_160 = (longlong *******)CONCAT44(uVar26,uVar25);
  FUN_1467fafc0(&local_168,&local_110);
  if (local_108 != 0) {
    puVar23 = (undefined2 *)CONCAT44(uStack_10c,local_110);
  }
  pppppplVar1 = param_1[0x39];
  if (pppppplVar1 == (longlong ******)0x0) {
    local_b8 = (longlong ******)DAT_14c8464f0;
    local_c8 = (longlong *******)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_c0 = (longlong *******)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_c8 = (longlong *******)pppppplVar1[0x4c];
    uStack_c0 = (longlong *******)pppppplVar1[0x4d];
    local_b8 = (longlong ******)pppppplVar1[0x4e];
  }
  FUN_141706e52(&local_c8,&local_120);
  puVar20 = local_120;
  if (local_118 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_e8,L"Location: %s Rotation: %s",puVar20,puVar23);
  FUN_147d8f316(ppppppplVar18,&local_e8,&local_178);
  if ((longlong *******)local_e8 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if (local_120 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_10c,local_110) != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_128,L"physics");
  if ((longlong)(int)param_3[1] != 0) {
    lVar21 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar21) == local_128) {
        local_178 = 0;
        (*(code *)(*param_1)[0x65])(param_1,&local_c8);
        dVar27 = (double)uStack_c0 * (double)uStack_c0;
        dVar2 = (double)local_c8 * (double)local_c8;
        (*(code *)(*param_1)[0x65])(param_1,&local_168);
        dVar28 = (double)uStack_160 * (double)uStack_160;
        dVar3 = (double)local_168 * (double)local_168;
        dVar29 = (double)local_158 * (double)local_158;
        (*(code *)(*param_1)[0x65])(param_1,&local_e8);
        FUN_141706e52(&local_e8,&local_120);
        puVar23 = local_120;
        if (local_118 == 0) {
          puVar23 = &DAT_149dfb77a;
        }
        local_1a8 = SQRT(dVar2 + dVar27);
        FUN_140002266(&local_110,L"Velocity: %s Speed: %f Speed2D: %f",puVar23,
                      SUB84(SQRT(dVar29 + dVar3 + dVar28),0));
        FUN_147d8f316(ppppppplVar18,&local_110,&local_178);
        if (CONCAT44(uStack_10c,local_110) != 0) {
          FUN_1400020a8();
        }
        if (local_120 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)(int)param_3[1] * 8 != lVar21);
  }
  FUN_1446f470e(&local_130,L"collision");
  if ((longlong)(int)param_3[1] != 0) {
    lVar21 = 0;
LAB_1478b9725:
    if (*(longlong *)(*param_3 + lVar21) != local_130) goto code_r0x0001478b972f;
    *(undefined1 *)(param_2 + 0x38) = 0;
    local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
    local_190 = (longlong ******)param_1;
    FUN_1414401ea(param_1,&local_134,&local_138,0);
    local_168 = (longlong *******)((ulonglong)local_168 & 0xffffffff00000000);
    FUN_140002266(&local_c8,L"Collision Radius: %f Height: %f",(double)local_134,(double)local_138);
    FUN_147d8f316(ppppppplVar18,&local_c8,&local_168);
    if (local_c8 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    param_1 = (longlong *******)local_190;
    if ((longlong ******)local_190[0x39] == (longlong ******)0x0) {
      local_168 = (longlong *******)((ulonglong)local_168 & 0xffffffff00000000);
      FUN_140056680(&local_c8,L"No RootComponent");
      FUN_147d8f316(ppppppplVar18,&local_c8,&local_168);
      if (local_c8 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
    }
    local_1a0 = param_2;
    FUN_140056680(&local_c8,L"Overlapping ");
    if ((longlong *******)local_f8 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    local_f8 = (longlong ******)local_c8;
    pppppplStack_f0 = (longlong ******)uStack_c0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_c8 = (longlong *******)0x0;
    uStack_c0 = (longlong *******)0x0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_140 = 0;
    FUN_140d0a8da(param_1,&local_c8);
    local_e8 = (longlong ******)&DAT_100000000;
    local_d8 = 0xffffffff;
    local_d0 = 0;
    iVar9 = 0;
    pppppplStack_e0 = (longlong ******)&local_b8;
    if (local_a0 != 0) {
      FUN_1449c0562(&local_e8);
      iVar9 = local_a0;
    }
    uStack_150 = local_d8;
    uVar8 = uStack_150;
    local_148 = local_d0;
    local_144 = local_cc;
    uStack_160 = (longlong *******)local_e8;
    local_158 = pppppplStack_e0;
    uStack_150._4_4_ = (int)(local_d8 >> 0x20);
    local_168 = (longlong *******)&local_c8;
    if ((uStack_150._4_4_ == iVar9) && ((longlong *******)pppppplStack_e0 == &local_b8))
    goto LAB_1478b99e6;
    bVar17 = false;
    iVar11 = uStack_150._4_4_;
    local_188 = param_3;
    local_180 = param_4;
    uStack_150 = uVar8;
    do {
      lVar21 = *(longlong *)((longlong)*local_168 + (longlong)iVar11 * 0x10);
      if ((lVar21 != 0) && ((*(uint *)(lVar21 + 8) >> 0x1e & 1) == 0)) {
        FUN_1400b22c2(&local_110,&DAT_149dfc0cb);
        local_e8 = *(longlong *******)(lVar21 + 0x18);
        FUN_1400021e4(&local_e8,&local_178);
        FUN_1407ec8fc(&local_120,&local_f8,&local_178);
        FUN_1401c7f3e(&local_e8,&local_120,&local_110);
        if ((longlong *******)local_f8 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
        local_f8 = local_e8;
        pppppplStack_f0 = pppppplStack_e0;
        local_e8 = (longlong ******)0x0;
        pppppplStack_e0 = (longlong ******)0x0;
        if (local_120 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_174,local_178) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_10c,local_110) != 0) {
          FUN_1400020a8();
        }
        bVar17 = true;
      }
      uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uStack_150 & ~uStack_160._4_4_);
      FUN_1449c0562(&uStack_160);
      iVar11 = uStack_150._4_4_;
    } while (local_168 != (longlong *******)&local_c8 ||
             ((longlong *******)local_158 != &local_b8 || uStack_150._4_4_ != iVar9));
    param_3 = local_188;
    param_4 = local_180;
    param_1 = (longlong *******)local_190;
    uVar8 = uStack_150;
    if (!bVar17) {
LAB_1478b99e6:
      uStack_150 = uVar8;
      FUN_14020fad6(&local_f8,L"Overlapping nothing");
    }
    ppppppplVar18 = (longlong *******)local_198;
    local_168 = (longlong *******)((ulonglong)local_168 & 0xffffffff00000000);
    FUN_147d8f316(local_198,&local_f8);
    param_2 = local_1a0;
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_140d0a7fc(&local_c8);
  }
LAB_1478b9a44:
  local_110 = 0;
  if (param_1[0x2d] == (longlong ******)0x0) {
    FUN_140056680(&local_168,&DAT_149e01fe8);
  }
  else {
    local_c8 = (longlong *******)param_1[0x2d][3];
    FUN_1400021e4(&local_c8,&local_168);
  }
  if (param_1[0x36] == (longlong ******)0x0) {
    FUN_140056680(&local_e8,&DAT_149e01fe8);
  }
  else {
    local_c8 = (longlong *******)param_1[0x36][3];
    FUN_1400021e4(&local_c8,&local_e8);
  }
  ppppppplVar16 = (longlong *******)local_e8;
  if ((int)pppppplStack_e0 == 0) {
    ppppppplVar16 = (longlong *******)&DAT_149dfb77a;
  }
  FUN_140002266(&local_c8,L" Instigator: %s Owner: %s",ppppppplVar16);
  FUN_147d8f316(ppppppplVar18,&local_c8);
  if (local_c8 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *******)local_e8 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cac95f8) && (FUN_144b3d300(&DAT_14cac95f8), DAT_14cac95f8 == -1)) {
    FUN_1446f470e(&DAT_14cac95f0,L"Animation");
    _Init_thread_footer(&DAT_14cac95f8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cac9608) && (FUN_144b3d300(&DAT_14cac9608), DAT_14cac9608 == -1)) {
    FUN_1446f470e(&DAT_14cac9600,L"Bones");
    _Init_thread_footer(&DAT_14cac9608);
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar21 = *param_3;
    lVar13 = (longlong)(int)param_3[1] * 8;
    lVar22 = 0;
    do {
      if (*(longlong *)(lVar21 + lVar22) == DAT_14cac95f0) goto LAB_1478b9bc6;
      lVar22 = lVar22 + 8;
    } while (lVar13 != lVar22);
    lVar22 = 0;
    do {
      if (*(longlong *)(lVar21 + lVar22) == DAT_14cac9600) goto LAB_1478b9bc6;
      lVar22 = lVar22 + 8;
    } while (lVar13 != lVar22);
  }
  goto LAB_1478b9bdc;
code_r0x0001478b972f:
  lVar21 = lVar21 + 8;
  if ((longlong)(int)param_3[1] * 8 == lVar21) goto LAB_1478b9a44;
  goto LAB_1478b9725;
LAB_1478b9bc6:
  lVar22 = 0;
  do {
    if (*(longlong *)(lVar21 + lVar22) == DAT_14cac95f0) {
      ppppppplVar18 = param_1 + 0x48;
      ppppppplVar16 = param_1 + 0x4a;
      local_168 = (longlong *******)&DAT_100000000;
      local_158 = (longlong ******)&DAT_ffffffff;
      uStack_150 = uStack_150 & 0xffffffff00000000;
      local_1a0 = param_2;
      uStack_160 = ppppppplVar16;
      if (*(int *)(param_1 + 0x4d) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_168);
        iVar9 = *(int *)(param_1 + 0x4d);
      }
      uStack_a8 = uStack_150;
      uStack_b0 = (longlong *******)local_158;
      ppppppplVar12 = uStack_b0;
      uStack_c0 = local_168;
      local_b8 = (longlong ******)uStack_160;
      uStack_b0._4_4_ = (int)((ulonglong)local_158 >> 0x20);
      iVar11 = uStack_b0._4_4_;
      local_c8 = ppppppplVar18;
      if ((uStack_b0._4_4_ != iVar9) ||
         (uStack_b0 = (longlong *******)local_158, uStack_160 != ppppppplVar16)) {
        do {
          uStack_b0 = ppppppplVar12;
          ppppplVar14 = (*local_c8)[(longlong)iVar11 * 2];
          if (ppppplVar14 != (longlong *****)0x0) {
            lVar21 = FUN_144a74fb4();
            if (((*(int *)(lVar21 + 0x38) <= *(int *)(ppppplVar14[2] + 7)) &&
                (ppppplVar14[2][6][*(int *)(lVar21 + 0x38)] == (longlong **)(lVar21 + 0x30))) &&
               (ppppplVar14[0x15d] != (longlong ****)0x0)) {
              local_1a8 = param_5;
              FUN_1478f6962(ppppplVar14[0x15d],local_1a0,param_3,param_4);
            }
          }
          uStack_b0 = (longlong *******)CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_)
          ;
          FUN_1449c0562(&uStack_c0);
          iVar11 = uStack_b0._4_4_;
          ppppppplVar12 = uStack_b0;
        } while (local_c8 != ppppppplVar18 ||
                 ((longlong *******)local_b8 != ppppppplVar16 || uStack_b0._4_4_ != iVar9));
      }
      break;
    }
    lVar22 = lVar22 + 8;
  } while (lVar13 != lVar22);
LAB_1478b9bdc:
  if ((longlong *******)local_f8 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba174 FUN_1478ba174 body=366 status=ok
// SIG undefined FUN_1478ba174(void)

ulonglong FUN_1478ba174(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  if ((*(byte *)(param_1 + 0x62) & 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar2 = param_1 + 0x250;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 0x268) != 0) {
      FUN_1449c0562(&local_50);
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x268);
    }
    local_60 = local_40;
    uVar4 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar5 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != (int)uVar7) || (local_60 = uVar4, local_48 != lVar2)) {
      do {
        local_60 = uVar4;
        lVar3 = *(longlong *)(*local_78 + (longlong)iVar5 * 0x10);
        if (lVar3 != 0) {
          lVar6 = FUN_144a79bde();
          if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
              ((*(byte *)(lVar3 + 0x9e) & 0x10) != 0)) && ((*(byte *)(lVar3 + 0x2da) & 2) != 0)) {
            uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
            goto LAB_1478ba22e;
          }
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while ((local_68 != lVar2 || local_60._4_4_ != (int)uVar7) || local_78 != plVar1);
    }
    uVar7 = 0;
  }
LAB_1478ba22e:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1478ba2e4 FUN_1478ba2e4 body=99 status=ok
// SIG undefined FUN_1478ba2e4(void)

void FUN_1478ba2e4(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba348 FUN_1478ba348 body=140 status=ok
// SIG undefined FUN_1478ba348(void)

undefined8 * FUN_1478ba348(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = *param_3;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478ba3d6(param_1,&local_40,&local_38,0);
  *param_2 = local_38;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba3d6 FUN_1478ba3d6 body=141 status=ok
// SIG undefined FUN_1478ba3d6(void)

void FUN_1478ba3d6(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_1417970e8(param_3,0);
  }
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478c7168(param_1,&local_30,param_4,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba464 FUN_1478ba464 body=403 status=ok
// SIG undefined FUN_1478ba464(void)

longlong * FUN_1478ba464(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong local_110 [24];
  longlong *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_50 = (longlong *)0x0;
  local_48 = 0x1800000000;
  local_118 = *param_3;
  if ((local_118 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478ba5fa(param_1,&local_118,local_110);
  local_128 = 0;
  uStack_120 = 0;
  if ((int)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_48 & 0xffffffff);
  }
  if ((local_48 & 0xffffffff) != 0) {
    FUN_1417970e8(&local_128);
    plVar5 = local_110;
    if (local_50 != (longlong *)0x0) {
      plVar5 = local_50;
    }
    if ((longlong)(int)local_48 != 0) {
      plVar1 = plVar5 + (int)local_48;
      do {
        if (param_4 != 0) {
          lVar2 = *plVar5;
          if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0x70) + lVar4) == param_4) {
                lVar4 = (longlong)(int)uStack_120;
                uVar3 = (int)uStack_120 + 1;
                uStack_120 = CONCAT44(uStack_120._4_4_,uVar3);
                if (uStack_120._4_4_ < uVar3) {
                  FUN_1406ca8e4(&local_128);
                }
                *(longlong *)(local_128 + lVar4 * 8) = lVar2;
                break;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)*(int *)(lVar2 + 0x78) * 8 != lVar4);
          }
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  *param_2 = local_128;
  local_128 = 0;
  *(int *)(param_2 + 1) = (int)uStack_120;
  *(uint *)((longlong)param_2 + 0xc) = uStack_120._4_4_;
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478ba5fa FUN_1478ba5fa body=137 status=ok
// SIG undefined FUN_1478ba5fa(void)

void FUN_1478ba5fa(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_3 + 200) = 0;
  if (*(int *)(param_3 + 0xcc) < 0) {
    FUN_1470ea508(param_3,0);
  }
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478c7ae2(param_1,&local_28,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba684 FUN_1478ba684 body=62 status=ok
// SIG undefined FUN_1478ba684(void)

void FUN_1478ba684(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1478ba6c3 FUN_1478ba6c3 body=62 status=ok
// SIG undefined FUN_1478ba6c3(void)

void FUN_1478ba6c3(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1478ba702 FUN_1478ba702 body=253 status=ok
// SIG undefined FUN_1478ba702(void)

/* WARNING: Removing unreachable block (ram,0x0001478ba758) */
/* WARNING: Removing unreachable block (ram,0x0001478ba75e) */
/* WARNING: Removing unreachable block (ram,0x0001478ba76c) */

void FUN_1478ba702(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = param_3[1];
  plStack_28 = (longlong *)param_3[2];
  if (plStack_28 == (longlong *)0x0) {
    plStack_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  local_40 = param_2;
  FUN_1447cd2ec(param_1,&local_40);
  plVar3 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[2];
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478ba800 FUN_1478ba800 body=253 status=ok
// SIG undefined FUN_1478ba800(void)

/* WARNING: Removing unreachable block (ram,0x0001478ba856) */
/* WARNING: Removing unreachable block (ram,0x0001478ba85c) */
/* WARNING: Removing unreachable block (ram,0x0001478ba86a) */

void FUN_1478ba800(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = param_3[1];
  plStack_28 = (longlong *)param_3[2];
  if (plStack_28 == (longlong *)0x0) {
    plStack_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  local_40 = param_2;
  FUN_1447cd2ec(param_1,&local_40);
  plVar3 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[2];
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478ba8fe FUN_1478ba8fe body=65 status=ok
// SIG undefined FUN_1478ba8fe(void)

void FUN_1478ba8fe(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba940 FUN_1478ba940 body=65 status=ok
// SIG undefined FUN_1478ba940(void)

void FUN_1478ba940(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba982 FUN_1478ba982 body=65 status=ok
// SIG undefined FUN_1478ba982(void)

void FUN_1478ba982(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ba9c4 FUN_1478ba9c4 body=65 status=ok
// SIG undefined FUN_1478ba9c4(void)

void FUN_1478ba9c4(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478baa0c FUN_1478baa0c body=210 status=ok
// SIG undefined FUN_1478baa0c(void)

void FUN_1478baa0c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) && ((longlong)*(int *)(param_1 + 0x1f8) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar2) == local_28) {
        uVar1 = 1;
        goto LAB_1478baa96;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1f8) * 8 != lVar2);
  }
  uVar1 = 0;
LAB_1478baa96:
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478baaec FUN_1478baaec body=624 status=ok
// SIG undefined FUN_1478baaec(void)

void FUN_1478baaec(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  iVar2 = local_3c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_b4 != 0;
  puVar4 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  local_c8 = local_b0;
  uVar3 = FUN_1433b99de(param_1,local_38,iVar2 != 0,puVar4);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bad6a FUN_1478bad6a body=580 status=ok
// SIG undefined FUN_1478bad6a(void)

void FUN_1478bad6a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_40 = 0;
  FUN_1446f4b16();
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
  iVar3 = local_44;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar2 = local_ac;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar5 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  local_c8 = iVar2 != 0;
  uVar4 = FUN_140fae5dc(param_1,&local_b8,iVar3 != 0,puVar5);
  *param_3 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bafb0 FUN_1478bafb0 body=160 status=ok
// SIG undefined FUN_1478bafb0(void)

void FUN_1478bafb0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x340))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb052 FUN_1478bb052 body=160 status=ok
// SIG undefined FUN_1478bb052(void)

void FUN_1478bb052(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x348))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb0f8 FUN_1478bb0f8 body=37 status=ok
// SIG undefined FUN_1478bb0f8(void)

void FUN_1478bb0f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478c96dc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bb11e FUN_1478bb11e body=191 status=ok
// SIG undefined FUN_1478bb11e(void)

void FUN_1478bb11e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x310))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb1e2 FUN_1478bb1e2 body=158 status=ok
// SIG undefined FUN_1478bb1e2(void)

void FUN_1478bb1e2(undefined8 param_1,longlong param_2)

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
  FUN_1478b82f6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb282 FUN_1478bb282 body=160 status=ok
// SIG undefined FUN_1478bb282(void)

void FUN_1478bb282(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x318))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb324 FUN_1478bb324 body=160 status=ok
// SIG undefined FUN_1478bb324(void)

void FUN_1478bb324(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x308))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb3c6 FUN_1478bb3c6 body=291 status=ok
// SIG undefined FUN_1478bb3c6(void)

void FUN_1478bb3c6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1410dcbc6(param_1,&local_38,uVar1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb4f0 FUN_1478bb4f0 body=430 status=ok
// SIG undefined FUN_1478bb4f0(void)

void FUN_1478bb4f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
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
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar2 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141450f18(param_1,local_28,iVar1 != 0,puVar2);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb6c8 FUN_1478bb6c8 body=447 status=ok
// SIG undefined FUN_1478bb6c8(void)

void FUN_1478bb6c8(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_6c;
  undefined1 local_68 [24];
  undefined1 local_50 [28];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_6c != 0;
  puVar4 = local_68;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_50;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  (**(code **)(*param_1 + 800))(param_1,iVar2 != 0,puVar3,puVar4);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bb8a6 FUN_1478bb8a6 body=268 status=ok
// SIG undefined FUN_1478bb8a6(void)

void FUN_1478bb8a6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x588))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bba0a FUN_1478bba0a body=132 status=ok
// SIG undefined FUN_1478bba0a(void)

void FUN_1478bba0a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_18 = DAT_14c8462a0;
    local_28 = DAT_14c846290;
    uStack_20 = DAT_14c846298;
  }
  else {
    FUN_14348affe(*(longlong *)(param_1 + 0x1c8),&local_28);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bbaac FUN_1478bbaac body=39 status=ok
// SIG undefined FUN_1478bbaac(void)

void FUN_1478bbaac(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144916004();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bbada FUN_1478bbada body=278 status=ok
// SIG undefined FUN_1478bbada(void)

void FUN_1478bbada(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140c5bf3a(param_1,plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bbbf2 FUN_1478bbbf2 body=42 status=ok
// SIG undefined FUN_1478bbbf2(void)

void FUN_1478bbbf2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x5f0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bbc1c FUN_1478bbc1c body=42 status=ok
// SIG undefined FUN_1478bbc1c(void)

void FUN_1478bbc1c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x5f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bbcc0 FUN_1478bbcc0 body=237 status=ok
// SIG undefined FUN_1478bbcc0(void)

void FUN_1478bbcc0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  lVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_30);
  }
  local_28 = lVar1;
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = (**(code **)(*param_1 + 0x598))(param_1,&local_28);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bbdae FUN_1478bbdae body=271 status=ok
// SIG undefined FUN_1478bbdae(void)

void FUN_1478bbdae(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1406ca43a(param_1,&local_38,&local_40);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bbebe FUN_1478bbebe body=309 status=ok
// SIG undefined FUN_1478bbebe(void)

void FUN_1478bbebe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1478ba464(param_1,&local_40,&local_48,uVar1);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_40;
  *(undefined4 *)(param_3 + 1) = local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bbff4 FUN_1478bbff4 body=165 status=ok
// SIG undefined FUN_1478bbff4(void)

void FUN_1478bbff4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478bc09a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bc09a FUN_1478bc09a body=412 status=ok
// SIG undefined FUN_1478bc09a(void)

void FUN_1478bc09a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    fVar6 = -2.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      local_28 = DAT_14c8462e8;
      local_38 = DAT_14c8462d8;
      dStack_30 = DAT_14c8462e0;
    }
    else {
      FUN_14141a100(*(longlong *)(param_1 + 0x1c8),&local_38);
    }
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      pdVar3 = &DAT_14c8464e0;
      uVar5 = SUB84(DAT_14c8464f0,0);
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar3 = (double *)(lVar1 + 0x260);
    }
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar4 = &DAT_14c8464e0;
      dVar11 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar1 + 0x260);
      dVar11 = *(double *)(lVar1 + 0x270);
    }
    dVar11 = (double)CONCAT44(uVar7,uVar5) - dVar11;
    dVar8 = *pdVar3 - *pdVar4;
    dVar10 = pdVar3[1] - pdVar4[1];
    dVar13 = dVar11 * dVar11 + dVar8 * dVar8 + dVar10 * dVar10;
    if (((dVar13 != 1.0) || (dVar9 = dVar8, dVar12 = dVar10, dVar2 = dVar11, NAN(dVar13))) &&
       (dVar9 = DAT_14c8464e0, dVar12 = DAT_14c8464e8, dVar2 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar9 = dVar8 * dVar13;
      dVar12 = dVar10 * dVar13;
      dVar2 = dVar11 * dVar13;
    }
    fVar6 = (float)(dVar2 * local_28 + dVar9 * local_38 + dVar12 * dStack_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar6);
  }
  return;
}



// FUNCTION 1478bc238 FUN_1478bc238 body=81 status=ok
// SIG undefined FUN_1478bc238(void)

void FUN_1478bc238(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1447210f0();
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)(*(double *)(lVar1 + 0x6d0) - (double)*(float *)(param_1 + 0x180));
  }
  *param_3 = fVar2;
  return;
}



// FUNCTION 1478bc28a FUN_1478bc28a body=266 status=ok
// SIG undefined FUN_1478bc28a(void)

void FUN_1478bc28a(longlong param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_28 == 0) {
    fVar3 = 0.0;
  }
  else {
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x260);
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      pdVar2 = (double *)&DAT_14c8464e0;
    }
    pdVar1 = (double *)(*(longlong *)(local_28 + 0x1c8) + 0x260);
    if (*(longlong *)(local_28 + 0x1c8) == 0) {
      pdVar1 = (double *)&DAT_14c8464e0;
    }
    fVar3 = (float)SQRT((*pdVar2 - *pdVar1) * (*pdVar2 - *pdVar1) +
                        (pdVar2[1] - pdVar1[1]) * (pdVar2[1] - pdVar1[1]));
  }
  *param_3 = fVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bc396 FUN_1478bc396 body=165 status=ok
// SIG undefined FUN_1478bc396(void)

void FUN_1478bc396(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478bc43c(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bc43c FUN_1478bc43c body=419 status=ok
// SIG undefined FUN_1478bc43c(void)

void FUN_1478bc43c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    fVar6 = -2.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      local_28 = DAT_14c8462e8;
      local_38 = DAT_14c8462d8;
      dStack_30 = DAT_14c8462e0;
    }
    else {
      FUN_14141a100(*(longlong *)(param_1 + 0x1c8),&local_38);
    }
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      pdVar4 = &DAT_14c8464e0;
      dVar8 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar1 + 0x260);
      dVar8 = *(double *)(lVar1 + 0x270);
    }
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar5 = &DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
    else {
      pdVar5 = (double *)(lVar1 + 0x260);
      dVar9 = *(double *)(lVar1 + 0x270);
    }
    dVar2 = *pdVar4 - *pdVar5;
    dVar3 = pdVar4[1] - pdVar5[1];
    dVar10 = dVar2 * dVar2 + dVar3 * dVar3;
    if ((dVar10 != 1.0) || (NAN(dVar10))) {
      dVar7 = DAT_14c8464e8;
      dVar9 = DAT_14c8464f0;
      dVar8 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar10) {
        dVar7 = dVar3 * (1.0 / SQRT(dVar10));
        dVar9 = 0.0;
        dVar8 = dVar2 * (1.0 / SQRT(dVar10));
      }
    }
    else {
      dVar7 = dVar3;
      dVar9 = (double)(-(ulonglong)(dVar8 - dVar9 == 0.0) & (ulonglong)(dVar8 - dVar9));
      dVar8 = dVar2;
    }
    fVar6 = (float)(dVar9 * local_28 + dVar8 * local_38 + dVar7 * dStack_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar6);
  }
  return;
}



// FUNCTION 1478bc5e0 FUN_1478bc5e0 body=241 status=ok
// SIG undefined FUN_1478bc5e0(void)

void FUN_1478bc5e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar4 = FUN_1478bc6d2(param_1,&local_50);
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



// FUNCTION 1478bc6d2 FUN_1478bc6d2 body=167 status=ok
// SIG undefined FUN_1478bc6d2(void)

undefined8 FUN_1478bc6d2(longlong param_1,undefined8 *param_2)

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
  lVar3 = *(longlong *)(param_1 + 0x188);
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
    uVar5 = FUN_14347a9dc(lVar3,&local_38);
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



// FUNCTION 1478bc77a FUN_1478bc77a body=179 status=ok
// SIG undefined FUN_1478bc77a(void)

void FUN_1478bc77a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (*(longlong *)(param_1 + 0x188) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14347a9a2(*(longlong *)(param_1 + 0x188),local_28);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bc82e FUN_1478bc82e body=259 status=ok
// SIG undefined FUN_1478bc82e(void)

void FUN_1478bc82e(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_1478bc932(param_1,&local_50,&local_68);
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



// FUNCTION 1478bc932 FUN_1478bc932 body=178 status=ok
// SIG undefined FUN_1478bc932(void)

undefined4 * FUN_1478bc932(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (lVar3 != 0) {
    local_30 = *param_3;
    local_28 = param_3[1];
    local_20 = param_3[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_14347aa54(lVar3,param_2,&local_30);
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



// FUNCTION 1478bca02 FUN_1478bca02 body=82 status=ok
// SIG undefined FUN_1478bca02(void)

void FUN_1478bca02(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x3c0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 1478bca54 FUN_1478bca54 body=54 status=ok
// SIG undefined FUN_1478bca54(void)

void FUN_1478bca54(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144a7b8cc();
  uVar1 = FUN_144a78ede(param_1,uVar1);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bca8a FUN_1478bca8a body=102 status=ok
// SIG undefined FUN_1478bca8a(void)

void FUN_1478bca8a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478b841c(param_1,local_78);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bcaf2 FUN_1478bcaf2 body=43 status=ok
// SIG undefined FUN_1478bcaf2(void)

void FUN_1478bcaf2(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x390))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bcb92 FUN_1478bcb92 body=313 status=ok
// SIG undefined FUN_1478bcb92(void)

void FUN_1478bcb92(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140d0a558(param_1,plVar1,&local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bcccc FUN_1478bcccc body=180 status=ok
// SIG undefined FUN_1478bcccc(void)

void FUN_1478bcccc(undefined8 param_1,longlong param_2)

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
  FUN_1478b78fc(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bcd82 FUN_1478bcd82 body=45 status=ok
// SIG undefined FUN_1478bcd82(void)

void FUN_1478bcd82(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x1e8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bcdca FUN_1478bcdca body=37 status=ok
// SIG undefined FUN_1478bcdca(void)

void FUN_1478bcdca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144b1f4ac();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bce08 FUN_1478bce08 body=39 status=ok
// SIG undefined FUN_1478bce08(void)

void FUN_1478bce08(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478c96e8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bce30 FUN_1478bce30 body=327 status=ok
// SIG undefined FUN_1478bce30(void)

void FUN_1478bce30(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_28 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar3 = (double *)&DAT_14c8464e0;
      dVar5 = DAT_14c8464f0;
    }
    else {
      pdVar3 = (double *)(lVar1 + 0x260);
      dVar5 = *(double *)(lVar1 + 0x270);
    }
    lVar1 = *(longlong *)(local_28 + 0x1c8);
    if (lVar1 == 0) {
      pdVar2 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar2 = (double *)(lVar1 + 0x260);
      dVar6 = *(double *)(lVar1 + 0x270);
    }
    fVar4 = (float)((dVar5 - dVar6) * (dVar5 - dVar6) +
                   (*pdVar3 - *pdVar2) * (*pdVar3 - *pdVar2) +
                   (pdVar3[1] - pdVar2[1]) * (pdVar3[1] - pdVar2[1]));
  }
  *param_3 = fVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bcf78 FUN_1478bcf78 body=262 status=ok
// SIG undefined FUN_1478bcf78(void)

void FUN_1478bcf78(longlong param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_28 == 0) {
    fVar3 = 0.0;
  }
  else {
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x260);
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      pdVar2 = (double *)&DAT_14c8464e0;
    }
    pdVar1 = (double *)(*(longlong *)(local_28 + 0x1c8) + 0x260);
    if (*(longlong *)(local_28 + 0x1c8) == 0) {
      pdVar1 = (double *)&DAT_14c8464e0;
    }
    fVar3 = (float)((*pdVar2 - *pdVar1) * (*pdVar2 - *pdVar1) +
                   (pdVar2[1] - pdVar1[1]) * (pdVar2[1] - pdVar1[1]));
  }
  *param_3 = fVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bd09e FUN_1478bd09e body=100 status=ok
// SIG undefined FUN_1478bd09e(void)

void FUN_1478bd09e(longlong *param_1,longlong param_2,undefined4 *param_3)

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
  (**(code **)(*param_1 + 0x328))(param_1,&local_30);
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



// FUNCTION 1478bd104 FUN_1478bd104 body=249 status=ok
// SIG undefined FUN_1478bd104(void)

void FUN_1478bd104(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_28 == 0) {
    fVar1 = 0.0;
  }
  else {
    dVar2 = DAT_14c8464f0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      dVar2 = *(double *)(*(longlong *)(param_1 + 0x1c8) + 0x270);
    }
    dVar3 = DAT_14c8464f0;
    if (*(longlong *)(local_28 + 0x1c8) != 0) {
      dVar3 = *(double *)(*(longlong *)(local_28 + 0x1c8) + 0x270);
    }
    fVar1 = ABS((float)(dVar2 - dVar3));
  }
  *param_3 = fVar1;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478bd260 FUN_1478bd260 body=44 status=ok
// SIG undefined FUN_1478bd260(void)

void FUN_1478bd260(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144729dda(param_1 + 0x1e8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478bd292 FUN_1478bd292 body=163 status=ok
// SIG undefined FUN_1478bd292(void)

void FUN_1478bd292(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14064aef8(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bd344 FUN_1478bd344 body=499 status=ok
// SIG undefined FUN_1478bd344(void)

void FUN_1478bd344(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  int local_16c;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  memset(local_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_178 = local_16c != 0;
  puVar2 = local_168;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar2;
  }
  FUN_1478c10b0(param_1,&local_48,iVar1 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bd546 FUN_1478bd546 body=499 status=ok
// SIG undefined FUN_1478bd546(void)

void FUN_1478bd546(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  int local_16c;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  memset(local_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_178 = local_16c != 0;
  puVar2 = local_168;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar2;
  }
  FUN_1478c1190(param_1,&local_48,iVar1 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bd748 FUN_1478bd748 body=570 status=ok
// SIG undefined FUN_1478bd748(void)

void FUN_1478bd748(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  int local_9c;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_1a4 != 0;
  puVar4 = local_1a0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar4 = puVar5;
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar5 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    puVar5 = puVar4;
  }
  FUN_1478c1270(param_1,puVar3,iVar2 != 0,puVar5);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bd992 FUN_1478bd992 body=499 status=ok
// SIG undefined FUN_1478bd992(void)

void FUN_1478bd992(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  int local_16c;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  memset(local_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_178 = local_16c != 0;
  puVar2 = local_168;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar2;
  }
  FUN_145849bf0(param_1,&local_48,iVar1 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bdb94 FUN_1478bdb94 body=499 status=ok
// SIG undefined FUN_1478bdb94(void)

void FUN_1478bdb94(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  int local_16c;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  memset(local_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_178 = local_16c != 0;
  puVar2 = local_168;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar2;
  }
  FUN_1478c0eb8(param_1,&local_48,iVar1 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bdd96 FUN_1478bdd96 body=570 status=ok
// SIG undefined FUN_1478bdd96(void)

void FUN_1478bdd96(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  int local_9c;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_1a4 != 0;
  puVar4 = local_1a0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar4 = puVar5;
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar5 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    puVar5 = puVar4;
  }
  FUN_1478c0f98(param_1,puVar3,iVar2 != 0,puVar5);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bdfe0 FUN_1478bdfe0 body=570 status=ok
// SIG undefined FUN_1478bdfe0(void)

void FUN_1478bdfe0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  int local_9c;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_1a4 != 0;
  puVar4 = local_1a0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar4 = puVar5;
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar5 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    puVar5 = puVar4;
  }
  FUN_1478c1024(param_1,puVar3,iVar2 != 0,puVar5);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478be222 FUN_1478be222 body=437 status=ok
// SIG undefined FUN_1478be222(void)

void FUN_1478be222(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_30;
  undefined1 local_29;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  if (local_20 != 0 && *(longlong *)(param_1 + 0x1c8) != 0) {
    local_38 = local_30 != 0;
    FUN_147a04258(*(longlong *)(param_1 + 0x1c8),local_20,local_28,local_29);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478be3de FUN_1478be3de body=459 status=ok
// SIG undefined FUN_1478be3de(void)

void FUN_1478be3de(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar3 = local_38;
  uVar2 = local_39;
  iVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_30 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    lVar4 = (**(code **)(*local_30 + 0x3a8))();
    if (lVar4 != 0) {
      local_48 = iVar1 != 0;
      FUN_147a04258(*(undefined8 *)(param_1 + 0x1c8),lVar4,uVar3,uVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478be5b6 FUN_1478be5b6 body=648 status=ok
// SIG undefined FUN_1478be5b6(void)

void FUN_1478be5b6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  int local_40;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
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
  local_3a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
  local_3b = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3b);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_38;
  local_21 = local_40 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_24 = local_39;
  local_23 = local_3a;
  local_22 = local_3b;
  uVar2 = 0;
  if ((local_30 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    lVar3 = (**(code **)(*local_30 + 0x3a8))();
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x490))
                        (*(longlong **)(param_1 + 0x1c8),lVar3,&local_24,uVar1);
    }
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478be84c FUN_1478be84c body=621 status=ok
// SIG undefined FUN_1478be84c(void)

void FUN_1478be84c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [40];
  int local_40;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
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
  local_3a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
  local_3b = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3b);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_21 = local_40 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_24 = local_39;
  local_23 = local_3a;
  local_22 = local_3b;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (local_30 == 0 || plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x490))(plVar1,local_30,&local_24,local_38);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bead4 FUN_1478bead4 body=349 status=ok
// SIG undefined FUN_1478bead4(void)

void FUN_1478bead4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [41];
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_1e = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e);
  }
  local_1f = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c = local_1d;
  local_1b = local_1e;
  local_1a = local_1f;
  local_19 = 1;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bec32 FUN_1478bec32 body=230 status=ok
// SIG undefined FUN_1478bec32(void)

void FUN_1478bec32(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1478ba348(param_1,&local_38,&local_40);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_38;
  *(undefined4 *)(param_3 + 1) = local_30;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bed62 FUN_1478bed62 body=650 status=ok
// SIG undefined FUN_1478bed62(void)

void FUN_1478bed62(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 local_1c0;
  int local_1b4;
  undefined1 local_1b0 [4];
  undefined4 local_1ac;
  undefined4 local_10c;
  undefined4 local_e0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar2 = local_ac;
  memset(local_1b0,0,0x100);
  local_e0 = 0xffffffff;
  local_1ac = 0x3f800000;
  local_10c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_98;
  local_58 = local_a8;
  uStack_50 = uStack_a0;
  local_68 = local_80;
  local_78 = local_90;
  uStack_74 = uStack_8c;
  uStack_70 = uStack_88;
  uStack_6c = uStack_84;
  local_1c0 = local_1b4 != 0;
  puVar4 = local_1b0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  local_1c8 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    local_1c8 = puVar4;
  }
  uVar3 = FUN_1407fd818(param_1,&local_78,&local_58,iVar2 != 0);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478beffc FUN_1478beffc body=499 status=ok
// SIG undefined FUN_1478beffc(void)

void FUN_1478beffc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  int local_16c;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  memset(local_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_178 = local_16c != 0;
  puVar2 = local_168;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar2;
  }
  FUN_14639e34e(param_1,&local_48,iVar1 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bf1fe FUN_1478bf1fe body=499 status=ok
// SIG undefined FUN_1478bf1fe(void)

void FUN_1478bf1fe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  int local_16c;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  memset(local_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_178 = local_16c != 0;
  puVar2 = local_168;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar2;
  }
  FUN_1478c12fc(param_1,&local_48,iVar1 != 0,puVar3);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bf400 FUN_1478bf400 body=570 status=ok
// SIG undefined FUN_1478bf400(void)

void FUN_1478bf400(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  int local_9c;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_1a4 != 0;
  puVar4 = local_1a0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar4 = puVar5;
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar5 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    puVar5 = puVar4;
  }
  FUN_1478c13dc(param_1,puVar3,iVar2 != 0,puVar5);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bf65e FUN_1478bf65e body=611 status=ok
// SIG undefined FUN_1478bf65e(void)

void FUN_1478bf65e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  int local_1b4;
  undefined1 local_1b0 [4];
  undefined4 local_1ac;
  undefined4 local_10c;
  undefined4 local_e0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar2 = local_ac;
  memset(local_1b0,0,0x100);
  local_e0 = 0xffffffff;
  local_1ac = 0x3f800000;
  local_10c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b0);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_1b4 != 0;
  puVar6 = local_1b0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar4 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  puVar5 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    puVar5 = puVar6;
  }
  uVar3 = FUN_1413d4c10(param_1,puVar4,iVar2 != 0,puVar5);
  *param_3 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bf8c8 FUN_1478bf8c8 body=306 status=ok
// SIG undefined FUN_1478bf8c8(void)

void FUN_1478bf8c8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  local_98 = 0;
  uVar1 = (**(code **)(*param_1 + 0x4d0))(param_1,&local_88,&local_68,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bf9fc FUN_1478bf9fc body=492 status=ok
// SIG undefined FUN_1478bf9fc(void)

void FUN_1478bf9fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_58 = local_30;
  local_70 = local_50;
  local_78 = local_44;
  FUN_1478b8698(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bfbf0 FUN_1478bfbf0 body=338 status=ok
// SIG undefined FUN_1478bfbf0(void)

void FUN_1478bfbf0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x580))(param_1,local_24,iVar1 != 0,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bfd44 FUN_1478bfd44 body=98 status=ok
// SIG undefined FUN_1478bfd44(void)

void FUN_1478bfd44(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9b60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bfdae FUN_1478bfdae body=160 status=ok
// SIG undefined FUN_1478bfdae(void)

void FUN_1478bfdae(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x350))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bfe50 FUN_1478bfe50 body=160 status=ok
// SIG undefined FUN_1478bfe50(void)

void FUN_1478bfe50(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x358))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bfefa FUN_1478bfefa body=164 status=ok
// SIG undefined FUN_1478bfefa(void)

void FUN_1478bfefa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_140aff5e4(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478bffa0 FUN_1478bffa0 body=173 status=ok
// SIG undefined FUN_1478bffa0(void)

void FUN_1478bffa0(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_28 = local_40;
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    FUN_141226a1c();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0052 FUN_1478c0052 body=162 status=ok
// SIG undefined FUN_1478c0052(void)

void FUN_1478c0052(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x400))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c00f6 FUN_1478c00f6 body=153 status=ok
// SIG undefined FUN_1478c00f6(void)

void FUN_1478c00f6(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x3c) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0194 FUN_1478c0194 body=158 status=ok
// SIG undefined FUN_1478c0194(void)

void FUN_1478c0194(undefined8 param_1,longlong param_2)

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
  FUN_1478b81fc(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0234 FUN_1478c0234 body=160 status=ok
// SIG undefined FUN_1478c0234(void)

void FUN_1478c0234(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x388))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c02d6 FUN_1478c02d6 body=156 status=ok
// SIG undefined FUN_1478c02d6(void)

void FUN_1478c02d6(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x19c) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0374 FUN_1478c0374 body=156 status=ok
// SIG undefined FUN_1478c0374(void)

void FUN_1478c0374(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x194) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0412 FUN_1478c0412 body=152 status=ok
// SIG undefined FUN_1478c0412(void)

void FUN_1478c0412(undefined8 param_1,longlong param_2)

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
  FUN_14081ae08(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c04ac FUN_1478c04ac body=156 status=ok
// SIG undefined FUN_1478c04ac(void)

void FUN_1478c04ac(undefined8 param_1,longlong param_2)

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
  FUN_1405e4918(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c054a FUN_1478c054a body=160 status=ok
// SIG undefined FUN_1478c054a(void)

void FUN_1478c054a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x440))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c05ec FUN_1478c05ec body=151 status=ok
// SIG undefined FUN_1478c05ec(void)

void FUN_1478c05ec(undefined8 param_1,longlong param_2)

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
  FUN_14056a50a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0684 FUN_1478c0684 body=162 status=ok
// SIG undefined FUN_1478c0684(void)

void FUN_1478c0684(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x7c) != local_1c) {
    *(int *)(param_1 + 0x7c) = local_1c;
    FUN_1405d0f74(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c072c FUN_1478c072c body=162 status=ok
// SIG undefined FUN_1478c072c(void)

void FUN_1478c072c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c07d4 FUN_1478c07d4 body=158 status=ok
// SIG undefined FUN_1478c07d4(void)

void FUN_1478c07d4(undefined8 param_1,longlong param_2)

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
  FUN_140c7ce82(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0878 FUN_1478c0878 body=161 status=ok
// SIG undefined FUN_1478c0878(void)

void FUN_1478c0878(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfe | local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c091a FUN_1478c091a body=146 status=ok
// SIG undefined FUN_1478c091a(void)

void FUN_1478c091a(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c09ce FUN_1478c09ce body=163 status=ok
// SIG undefined FUN_1478c09ce(void)

void FUN_1478c09ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14096f7c8(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0b42 FUN_1478c0b42 body=74 status=ok
// SIG undefined FUN_1478c0b42(void)

void FUN_1478c0b42(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),4);
  if (*(char *)(param_1 + 0x68) != '\0') {
    uVar1 = FUN_1447210f0(param_1);
    FUN_14081b2ca(uVar1,param_1);
    FUN_140de30c6(param_1);
    return;
  }
  return;
}



// FUNCTION 1478c0b8c FUN_1478c0b8c body=75 status=ok
// SIG undefined FUN_1478c0b8c(void)

void FUN_1478c0b8c(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x178);
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x68) = uVar1;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),4);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),9);
  FUN_140de30c6(param_1);
  return;
}



// FUNCTION 1478c0bd8 FUN_1478c0bd8 body=238 status=ok
// SIG undefined FUN_1478c0bd8(void)

void FUN_1478c0bd8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x188) == 0) {
      uVar1 = FUN_145860fd8();
      lVar2 = FUN_141262cc4(param_1,uVar1,0,0,0,0,0,0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x188) = lVar2;
      FUN_140b506a4(lVar2);
      *(byte *)(*(longlong *)(param_1 + 0x188) + 0x194) =
           *(byte *)(*(longlong *)(param_1 + 0x188) + 0x194) & 0xfe |
           *(byte *)(param_1 + 0x62) >> 3 & 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 400) = *(undefined4 *)(param_1 + 0x17c);
      FUN_143533074(param_1,*(undefined8 *)(param_1 + 0x188));
    }
    else {
      (**(code **)(*param_2 + 0xce8))(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x0001478c0c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xce0))(param_2,*(undefined8 *)(param_1 + 0x188));
    return;
  }
  return;
}



// FUNCTION 1478c0cc6 FUN_1478c0cc6 body=278 status=ok
// SIG undefined FUN_1478c0cc6(void)

void FUN_1478c0cc6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_141262dda();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && ((lVar2 = *param_2, lVar2 != 0 && (*(longlong *)(param_1 + 0x188) == 0)))
       ) {
      lVar1 = FUN_141262dda();
      if ((lVar1 == 0) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      lVar2 = FUN_141262cc4(param_1,lVar2,0,0,0,0,0,0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x188) = lVar2;
      FUN_140b506a4(lVar2);
      *(byte *)(*(longlong *)(param_1 + 0x188) + 0x194) =
           *(byte *)(*(longlong *)(param_1 + 0x188) + 0x194) & 0xfe |
           *(byte *)(param_1 + 0x62) >> 3 & 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 400) = *(undefined4 *)(param_1 + 0x17c);
      FUN_143533074(param_1,*(undefined8 *)(param_1 + 0x188));
      return;
    }
  }
  return;
}



// FUNCTION 1478c0ddc FUN_1478c0ddc body=200 status=ok
// SIG undefined FUN_1478c0ddc(void)

void FUN_1478c0ddc(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      FUN_144a7d35a(lVar3,&local_30);
      if (-1 < (int)local_28) {
        do {
          if ((int)local_30[1] <= (int)local_28) break;
          plVar4 = (longlong *)FUN_14479d2ce((ulonglong)local_28 * 8 + *local_30);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0xce8))(plVar4,*(undefined8 *)(param_1 + 0x188));
          }
          uVar1 = local_28 + 1;
          bVar2 = -2 < (int)local_28;
          local_28 = uVar1;
        } while (bVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0eb8 FUN_1478c0eb8 body=220 status=ok
// SIG undefined FUN_1478c0eb8(void)

void FUN_1478c0eb8(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0x3f80000000000000;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_38 = param_5;
    FUN_147a039bc(*(longlong *)(param_1 + 0x1c8),&local_28,param_3,param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c0f98 FUN_1478c0f98 body=140 status=ok
// SIG undefined FUN_1478c0f98(void)

void FUN_1478c0f98(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_147a03b42(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4);
    return;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0x3f80000000000000;
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
  }
  return;
}



// FUNCTION 1478c1024 FUN_1478c1024 body=140 status=ok
// SIG undefined FUN_1478c1024(void)

void FUN_1478c1024(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_147a03cb4(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4);
    return;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0x3f80000000000000;
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
  }
  return;
}



// FUNCTION 1478c10b0 FUN_1478c10b0 body=220 status=ok
// SIG undefined FUN_1478c10b0(void)

void FUN_1478c10b0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0x3f80000000000000;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_38 = param_5;
    FUN_147a03362(*(longlong *)(param_1 + 0x1c8),&local_28,param_3,param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c1190 FUN_1478c1190 body=220 status=ok
// SIG undefined FUN_1478c1190(void)

void FUN_1478c1190(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0x3f80000000000000;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_38 = param_5;
    FUN_147a036b8(*(longlong *)(param_1 + 0x1c8),&local_28,param_3,param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c1270 FUN_1478c1270 body=140 status=ok
// SIG undefined FUN_1478c1270(void)

void FUN_1478c1270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1417bf298(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4);
    return;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0x3f80000000000000;
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
  }
  return;
}



// FUNCTION 1478c12fc FUN_1478c12fc body=220 status=ok
// SIG undefined FUN_1478c12fc(void)

void FUN_1478c12fc(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0x3f80000000000000;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_38 = param_5;
    FUN_14020f75c(*(longlong *)(param_1 + 0x1c8),&local_28,param_3,param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c13dc FUN_1478c13dc body=140 status=ok
// SIG undefined FUN_1478c13dc(void)

void FUN_1478c13dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_144927a08(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4);
    return;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0x3f80000000000000;
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
  }
  return;
}



// FUNCTION 1478c1472 FUN_1478c1472 body=88 status=ok
// SIG undefined FUN_1478c1472(void)

void FUN_1478c1472(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x170) != param_2) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      FUN_14021bad2(lVar1,param_1);
      *(longlong *)(param_1 + 0x170) = param_2;
      FUN_14081b2ca(lVar1,param_1);
      return;
    }
    *(longlong *)(param_1 + 0x170) = param_2;
  }
  return;
}



// FUNCTION 1478c14ca FUN_1478c14ca body=355 status=ok
// SIG undefined FUN_1478c14ca(void)

void FUN_1478c14ca(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x1800000000;
  FUN_1448c0c58(param_1,local_f8,0);
  if (0 < (int)local_30) {
    lVar5 = 0;
    do {
      puVar2 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar2 = local_f8;
      }
      plVar1 = *(longlong **)(puVar2 + lVar5 * 8);
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x9c) & 1) != 0)) {
        lVar3 = FUN_144a7f016();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
             == lVar3 + 0x30 &&
            (plVar4 = (longlong *)(**(code **)(*plVar1 + 0x5d8))(plVar1), plVar4 != (longlong *)0x0)
            ))) {
          (**(code **)(*plVar4 + 0x4a8))(plVar4,param_2);
        }
        lVar3 = FUN_144a3a302();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          FUN_1479edf50(plVar1,param_2);
        }
        lVar3 = FUN_140c8105a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          FUN_14347c040(plVar1);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)local_30);
  }
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c162e FUN_1478c162e body=1 status=ok
// SIG undefined FUN_1478c162e(void)

void FUN_1478c162e(void)

{
  return;
}



// FUNCTION 1478c1630 FUN_1478c1630 body=78 status=ok
// SIG undefined FUN_1478c1630(void)

undefined8 FUN_1478c1630(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) && ((*(uint *)(param_1 + 1) & 0x40) == 0)) &&
     (-1 < (char)param_1[0xc])) {
    cVar1 = (**(code **)(*param_1 + 0x120))(param_1);
    if ((cVar1 == '\0') && ((*(byte *)((longlong)param_1 + 99) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001478c1677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x3c8))(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1478c167e FUN_1478c167e body=290 status=ok
// SIG undefined FUN_1478c167e(void)

undefined8 FUN_1478c167e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar6) || (uStack_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + (longlong)iStack_54 * 0x10);
      if ((plVar3 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar3 + 0x468))(), cVar4 != '\0'))
      {
        uVar5 = 1;
        goto LAB_1478c1713;
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar6));
  }
  uVar5 = 0;
LAB_1478c1713:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1478c17a2 FUN_1478c17a2 body=346 status=ok
// SIG undefined FUN_1478c17a2(void)

longlong * FUN_1478c17a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
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
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar8) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *local_88;
      lVar9 = (longlong)iStack_6c;
      plVar5 = *(longlong **)(lVar4 + lVar9 * 0x10);
      if (plVar5 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar5 + 0x468))();
        if (cVar7 != '\0') {
          uVar6 = *(undefined8 *)(lVar4 + lVar9 * 0x10);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1406ca8e4(param_2,iVar3);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar6;
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar8));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c18fe FUN_1478c18fe body=351 status=ok
// SIG undefined FUN_1478c18fe(void)

void FUN_1478c18fe(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if ((*(float *)(param_2 + 0x2c0) != param_3) ||
       (NAN(*(float *)(param_2 + 0x2c0)) || NAN(param_3))) {
      *(float *)(param_2 + 0x2c0) = param_3;
      FUN_1448215fa(param_2);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + (longlong)iStack_64 * 0x10);
      if (lVar3 != 0) {
        lVar4 = FUN_144a3a302();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1479ed7cc(lVar3,param_2);
        }
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c1a5e FUN_1478c1a5e body=80 status=ok
// SIG undefined FUN_1478c1a5e(void)

void FUN_1478c1a5e(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140595cba(param_1 + 2);
  FUN_1478c3124(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478c1aae FUN_1478c1aae body=50 status=ok
// SIG undefined FUN_1478c1aae(void)

undefined8 FUN_1478c1aae(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7b8cc();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_14019a3f8(lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1478c1ae0 FUN_1478c1ae0 body=62 status=ok
// SIG undefined FUN_1478c1ae0(void)

byte FUN_1478c1ae0(byte param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    plVar1 = (longlong *)FUN_1478c1aae();
    if (plVar1 != (longlong *)0x0) {
      param_1 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    }
    param_1 = plVar1 != (longlong *)0x0 & param_1;
  }
  return param_1;
}



// FUNCTION 1478c1b1e FUN_1478c1b1e body=39 status=ok
// SIG undefined FUN_1478c1b1e(void)

bool FUN_1478c1b1e(void)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1478c1aae();
  if (plVar2 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
    bVar1 = 0 < *(int *)(lVar3 + 8);
  }
  return bVar1;
}



// FUNCTION 1478c1b52 FUN_1478c1b52 body=59 status=ok
// SIG undefined FUN_1478c1b52(void)

void FUN_1478c1b52(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = &DAT_14c846480;
    if (*(longlong *)(param_2 + 0x1c8) != 0) {
      puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x240);
    }
    FUN_1413d4c10(param_1,puVar1,0,0,0);
  }
  return;
}



// FUNCTION 1478c1b8e FUN_1478c1b8e body=60 status=ok
// SIG undefined FUN_1478c1b8e(void)

void FUN_1478c1b8e(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x02') {
    *(undefined1 *)(param_1 + 0x178) = 1;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),9);
  }
  FUN_1478c0b8c(param_1);
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & 0xfb;
  return;
}



// FUNCTION 1478c1bca thunk_FUN_140aeefbc body=10 status=ok
// SIG undefined thunk_FUN_140aeefbc(void)

void thunk_FUN_140aeefbc(undefined8 param_1)

{
  FUN_140aeefbc(param_1,1,1);
  return;
}



// FUNCTION 1478c1bd4 FUN_1478c1bd4 body=175 status=ok
// SIG undefined FUN_1478c1bd4(void)

undefined8 FUN_1478c1bd4(undefined8 param_1)

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
  local_b8 = FUN_141260078();
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



// FUNCTION 1478c1c84 FUN_1478c1c84 body=152 status=ok
// SIG undefined FUN_1478c1c84(void)

void FUN_1478c1c84(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if ((*(byte *)(lVar2 + 0x153) & 0x40) != 0) {
    FUN_140b506a4(param_2);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x2a8);
  *(uint *)(param_1 + 0x2a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2ac) < iVar1 + 1U) {
    FUN_14092ecf6((longlong *)(param_1 + 0x2a0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 1478c1d1c FUN_1478c1d1c body=3 status=ok
// SIG undefined FUN_1478c1d1c(void)

undefined8 FUN_1478c1d1c(void)

{
  return 0;
}



// FUNCTION 1478c1d24 FUN_1478c1d24 body=38 status=ok
// SIG undefined FUN_1478c1d24(void)

undefined8 FUN_1478c1d24(undefined8 param_1,int param_2)

{
  FUN_1478c909e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1d7c FUN_1478c1d7c body=48 status=ok
// SIG undefined FUN_1478c1d7c(void)

longlong FUN_1478c1d7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1dac FUN_1478c1dac body=48 status=ok
// SIG undefined FUN_1478c1dac(void)

longlong FUN_1478c1dac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1ddc FUN_1478c1ddc body=38 status=ok
// SIG undefined FUN_1478c1ddc(void)

undefined8 FUN_1478c1ddc(undefined8 param_1,int param_2)

{
  FUN_14148ef68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1e06 FUN_1478c1e06 body=45 status=ok
// SIG undefined FUN_1478c1e06(void)

longlong FUN_1478c1e06(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14148ef68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1e34 FUN_1478c1e34 body=45 status=ok
// SIG undefined FUN_1478c1e34(void)

longlong FUN_1478c1e34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_14148ef68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1e62 FUN_1478c1e62 body=45 status=ok
// SIG undefined FUN_1478c1e62(void)

longlong FUN_1478c1e62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_14148ef68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1e90 FUN_1478c1e90 body=38 status=ok
// SIG undefined FUN_1478c1e90(void)

undefined8 FUN_1478c1e90(undefined8 param_1,int param_2)

{
  FUN_1406588e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1eb6 FUN_1478c1eb6 body=38 status=ok
// SIG undefined FUN_1478c1eb6(void)

undefined8 FUN_1478c1eb6(undefined8 param_1,int param_2)

{
  FUN_1478b3298();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c1f3c FUN_1478c1f3c body=77 status=ok
// SIG undefined FUN_1478c1f3c(void)

undefined1 FUN_1478c1f3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_1447a122a();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478c1fb2 FUN_1478c1fb2 body=59 status=ok
// SIG undefined FUN_1478c1fb2(void)

undefined8 FUN_1478c1fb2(longlong *param_1)

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



// FUNCTION 1478c1ff8 FUN_1478c1ff8 body=38 status=ok
// SIG undefined FUN_1478c1ff8(void)

void FUN_1478c1ff8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1478c2128 FUN_1478c2128 body=19 status=ok
// SIG undefined FUN_1478c2128(void)

undefined1 FUN_1478c2128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1478b0dc6(param_3);
  return 1;
}



// FUNCTION 1478c214a FUN_1478c214a body=63 status=ok
// SIG undefined FUN_1478c214a(void)

undefined1 FUN_1478c214a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147877340(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1478c21b2 FUN_1478c21b2 body=59 status=ok
// SIG undefined FUN_1478c21b2(void)

undefined8 FUN_1478c21b2(longlong *param_1)

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



// FUNCTION 1478c21fe FUN_1478c21fe body=40 status=ok
// SIG undefined FUN_1478c21fe(void)

void FUN_1478c21fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1478772b8(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1478c22ec FUN_1478c22ec body=59 status=ok
// SIG undefined FUN_1478c22ec(void)

undefined8 FUN_1478c22ec(longlong *param_1)

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



// FUNCTION 1478c23d6 FUN_1478c23d6 body=76 status=ok
// SIG undefined FUN_1478c23d6(void)

undefined8 FUN_1478c23d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 8 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_3 + lVar2);
      *(undefined1 *)(lVar1 + -4) = *(undefined1 *)((undefined4 *)(param_3 + lVar2) + 1);
      FUN_1478b1480();
      lVar2 = lVar2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478c244a FUN_1478c244a body=59 status=ok
// SIG undefined FUN_1478c244a(void)

undefined8 FUN_1478c244a(longlong *param_1)

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



// FUNCTION 1478c2490 FUN_1478c2490 body=38 status=ok
// SIG undefined FUN_1478c2490(void)

void FUN_1478c2490(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1478c2572 FUN_1478c2572 body=59 status=ok
// SIG undefined FUN_1478c2572(void)

undefined8 FUN_1478c2572(longlong *param_1)

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



// FUNCTION 1478c266c FUN_1478c266c body=102 status=ok
// SIG undefined FUN_1478c266c(void)

undefined8 FUN_1478c266c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      *(undefined1 *)(lVar2 + -4) = *(undefined1 *)(puVar1 + 1);
      FUN_1478b1480(lVar2,puVar1 + 2);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 6);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478c26fa FUN_1478c26fa body=59 status=ok
// SIG undefined FUN_1478c26fa(void)

undefined8 FUN_1478c26fa(longlong *param_1)

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



// FUNCTION 1478c2740 FUN_1478c2740 body=38 status=ok
// SIG undefined FUN_1478c2740(void)

void FUN_1478c2740(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1478c27f2 FUN_1478c27f2 body=46 status=ok
// SIG undefined FUN_1478c27f2(void)

void FUN_1478c27f2(undefined8 param_1,longlong param_2)

{
  FUN_1477c9821(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478c2836 FUN_1478c2836 body=83 status=ok
// SIG undefined FUN_1478c2836(void)

undefined8 FUN_1478c2836(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + lVar2);
      *(undefined8 *)(param_2 + lVar2 + 5) = *(undefined8 *)(param_3 + lVar2 + 5);
      *(undefined8 *)(param_2 + lVar2) = uVar1;
      FUN_1477c97c2();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478c28b2 FUN_1478c28b2 body=59 status=ok
// SIG undefined FUN_1478c28b2(void)

undefined8 FUN_1478c28b2(longlong *param_1)

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



// FUNCTION 1478c2950 FUN_1478c2950 body=52 status=ok
// SIG undefined FUN_1478c2950(void)

void FUN_1478c2950(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1477c9821(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1478c2984 FUN_1478c2984 body=122 status=ok
// SIG undefined FUN_1478c2984(void)

longlong FUN_1478c2984(longlong param_1,longlong param_2)

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
    FUN_1478c29fe(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478c29fe FUN_1478c29fe body=117 status=ok
// SIG undefined FUN_1478c29fe(void)

undefined8 * FUN_1478c29fe(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478c2a74(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405b363e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



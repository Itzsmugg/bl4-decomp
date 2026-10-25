// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ba2aca FUN_147ba2aca body=107 status=ok
// SIG undefined FUN_147ba2aca(void)

longlong * FUN_147ba2aca(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a7cbb2();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147ba2b36 FUN_147ba2b36 body=122 status=ok
// SIG undefined FUN_147ba2b36(void)

void FUN_147ba2b36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_448 [32];
  undefined2 local_428;
  undefined8 local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_428 = 0;
  local_420 = param_2;
  cVar1 = FUN_142786b6e(&local_420,local_418,0x200,0);
  if (cVar1 != '\0') {
    FUN_1435656b6(param_1,local_418,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba2bb2 FUN_147ba2bb2 body=177 status=ok
// SIG undefined FUN_147ba2bb2(void)

void FUN_147ba2bb2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  cVar2 = FUN_140988638(&local_28,&DAT_14a9c0736,1);
  if (cVar2 == '\0') {
    cVar2 = FUN_140988638(&local_28,&DAT_14a9c43d8,1);
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(lVar3 + 0x68c);
      lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      if (iVar1 == -1) goto LAB_147ba2bf2;
    }
    *(undefined4 *)(lVar3 + 0x68c) = 0xffffffff;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
LAB_147ba2bf2:
    *(undefined4 *)(lVar3 + 0x68c) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba2c68 FUN_147ba2c68 body=39 status=ok
// SIG undefined FUN_147ba2c68(void)

void FUN_147ba2c68(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  plVar2 = (longlong *)FUN_144a81a0a();
                    /* WARNING: Could not recover jumptable at 0x000147ba2c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,uVar1,*(code **)(*plVar2 + 0x98));
  return;
}



// FUNCTION 147ba2c90 FUN_147ba2c90 body=240 status=ok
// SIG undefined FUN_147ba2c90(void)

undefined8 * FUN_147ba2c90(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_140489acc();
    local_48 = 0;
    (**(code **)(*plVar2 + 0x2f0))(plVar2,&local_40,lVar1,(int)param_1[0x1c]);
    *param_2 = &PTR_FUN_14a184370;
    *(byte *)(param_2 + 3) = local_28;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_28])(param_2 + 1,local_38);
    *param_2 = &PTR_FUN_14a5af930;
    param_2[4] = 0;
    param_2[5] = 0;
    local_40 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_28])(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14a5af930;
  param_2[4] = 0;
  param_2[5] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ba2d82 FUN_147ba2d82 body=138 status=ok
// SIG undefined FUN_147ba2d82(void)

undefined8 * FUN_147ba2d82(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  lVar3 = DAT_14c98e618;
  uVar5 = FUN_1400c16ce(DAT_14c98e618,*(undefined4 *)(param_1 + 0xe0));
  if (((int)uVar5 < 0) || (*(int *)(lVar3 + 0x318) <= (int)uVar5)) {
    uVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x310);
    uVar6 = *(undefined8 *)(lVar3 + (ulonglong)uVar5 * 0x10);
    plVar4 = *(longlong **)(lVar3 + 8 + (ulonglong)uVar5 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *param_2 = uVar6;
      param_2[1] = plVar4;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return param_2;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147ba2e0c FUN_147ba2e0c body=132 status=ok
// SIG undefined FUN_147ba2e0c(void)

void FUN_147ba2e0c(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
      }
      lVar4 = lVar4 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba2ec2 FUN_147ba2ec2 body=117 status=ok
// SIG undefined FUN_147ba2ec2(void)

void FUN_147ba2ec2(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1474409b8(param_1 + 4,param_2,L"SpeedTreeLODInfo",0);
  uVar1 = 1;
  if (*(short *)(param_1 + 8) == 0) {
    local_28 = L"SpeedTreeData";
    local_20 = 0xd;
    uVar1 = FUN_14743c56c(param_2);
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba2f38 FUN_147ba2f38 body=263 status=ok
// SIG undefined FUN_147ba2f38(void)

void FUN_147ba2f38(void)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong in_stack_00000028;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_b4 [4];
  undefined1 local_b0 [128];
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = local_b0;
  local_30 = 0;
  local_28 = 0x800000000;
  local_c8 = local_b4;
  local_d8 = in_stack_00000028;
  FUN_1417de79c();
  uVar4 = (uint)DAT_14ca85550;
  cVar2 = FUN_144a798df(uVar4,DAT_14c760db4);
  if ((cVar2 != '\0') &&
     (((&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf] != 1 ||
      ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)uVar4 * 0x3c + 1) & 0x10) == 0)))) {
    uVar3 = local_28 & 0xff;
    iVar1 = *(int *)(in_stack_00000028 + 0x88);
    *(uint *)(in_stack_00000028 + 0x88) = iVar1 + 1U;
    if (*(uint *)(in_stack_00000028 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(in_stack_00000028,iVar1);
    }
    *(ulonglong *)(in_stack_00000028 + (longlong)iVar1 * 8) = uVar3 | 0x100040d140000;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba3080 FUN_147ba3080 body=229 status=ok
// SIG undefined FUN_147ba3080(void)

void FUN_147ba3080(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ba3166(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba3166 FUN_147ba3166 body=110 status=ok
// SIG undefined FUN_147ba3166(void)

void FUN_147ba3166(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 == 0) {
    local_18 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_14021b9fa(param_1 + 0x400,&local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba31d8 FUN_147ba31d8 body=75 status=ok
// SIG undefined FUN_147ba31d8(void)

void FUN_147ba31d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1402d084a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba322a FUN_147ba322a body=55 status=ok
// SIG undefined FUN_147ba322a(void)

undefined8 FUN_147ba322a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,L"No_StaticMeshComponent");
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147ba3262 FUN_147ba3262 body=486 status=ok
// SIG undefined FUN_147ba3262(void)

void FUN_147ba3262(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401b2056();
  uVar7 = 0;
  FUN_147ba344a(param_1,*(undefined4 *)(param_1 + 0x3f8),0);
  FUN_147ba37ca(param_1);
  lVar5 = DAT_14cae98d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar4 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar4 ^ 1);
  }
  if (*(int *)(lVar5 + uVar7 * 4) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x390) + 0x2d6);
    *pbVar1 = *pbVar1 & 0xbf;
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x660);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) {
      lVar5 = FUN_144b217cc();
      if (lVar5 != 0) {
        lVar5 = FUN_144b217cc(*(undefined8 *)(param_1 + 0x390));
        lVar5 = *(longlong *)(lVar5 + 0xa8);
        if (lVar5 != 0) {
          lVar6 = FUN_145921b3e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            local_48 = param_1;
            if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(param_1);
            }
            local_40 = &local_48;
            FUN_14111a8f2(lVar5 + 0x400);
            FUN_147b9752e(lVar5 + 0x400,param_1 + 0x400);
            iVar2 = *(int *)(param_1 + 0x408);
            if ((longlong)iVar2 != 0) {
              lVar6 = *(longlong *)(param_1 + 0x400);
              lVar8 = 0;
              do {
                lVar3 = *(longlong *)(lVar6 + lVar8);
                if (lVar3 != 0) {
                  FUN_1478c18fe(lVar3,*(undefined8 *)(lVar5 + 0x390),*(undefined4 *)(lVar5 + 0x3f8))
                  ;
                }
                lVar8 = lVar8 + 8;
              } while ((longlong)iVar2 * 8 != lVar8);
            }
            *(undefined4 *)(param_1 + 0x408) = 0;
            if (*(int *)(param_1 + 0x40c) != 0) {
              FUN_1409edbf4(param_1 + 0x400,0);
            }
            *(byte *)(param_1 + 0x411) = *(byte *)(param_1 + 0x411) | 2;
          }
        }
      }
    }
  }
  FUN_140f0b5c8();
  FUN_147ba3864(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba344a FUN_147ba344a body=895 status=ok
// SIG undefined FUN_147ba344a(void)

void FUN_147ba344a(longlong param_1,float param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_144a7a726();
  if ((lVar3 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar3 != 0) goto LAB_147ba34a8;
    bVar2 = true;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_147ba34a8:
    lVar4 = FUN_144a78d6a();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      bVar2 = false;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar9 = lVar3;
      }
      goto LAB_147ba34c5;
    }
    bVar2 = false;
  }
  lVar9 = 0;
LAB_147ba34c5:
  fVar10 = 0.0;
  if (0.0 <= param_2) {
    fVar10 = param_2;
  }
  lVar4 = FUN_144a78d6a();
  bVar7 = lVar3 != 0 & DAT_14c950c29;
  if (lVar9 == lVar4) {
    if (bVar7 != 0) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar3 = param_1 + 0x250;
    local_90 = 0x100000000;
    local_80 = 0xffffffff;
    iStack_7c = 0;
    uStack_78 = 0;
    uStack_88 = lVar3;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      iVar8 = *(int *)(param_1 + 0x268);
    }
    local_b0 = (undefined4)local_90;
    uStack_ac = local_90._4_4_;
    uStack_a8 = (undefined4)uStack_88;
    uStack_a4 = uStack_88._4_4_;
    local_a0 = local_80;
    iStack_9c = iStack_7c;
    uStack_98 = CONCAT44(uStack_74,uStack_78);
    local_b8 = plVar1;
    if ((iStack_7c != iVar8) || (uStack_88 != lVar3)) {
      do {
        lVar4 = *(longlong *)(*local_b8 + (longlong)iStack_9c * 0x10);
        if ((lVar4 != 0) && (*(float *)(lVar4 + 0x2c0) = fVar10, param_3 != '\0')) {
          FUN_1448215fa();
        }
        local_a0 = local_a0 & ~uStack_ac;
        FUN_1449c0562(&local_b0);
      } while (local_b8 != plVar1 || (CONCAT44(uStack_a4,uStack_a8) != lVar3 || iStack_9c != iVar8))
      ;
    }
  }
  else {
    if (bVar7 != 0) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar4 = param_1 + 0x250;
    local_90 = 0x100000000;
    local_80 = 0xffffffff;
    iStack_7c = 0;
    uStack_78 = 0;
    uStack_88 = lVar4;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      iVar8 = *(int *)(param_1 + 0x268);
    }
    uStack_98 = CONCAT44(uStack_74,uStack_78);
    local_a0 = local_80;
    iStack_9c = iStack_7c;
    local_b0 = (undefined4)local_90;
    uStack_ac = local_90._4_4_;
    uStack_a8 = (undefined4)uStack_88;
    uStack_a4 = uStack_88._4_4_;
    local_b8 = plVar1;
    if ((iStack_7c != iVar8) || (uStack_88 != lVar4)) {
      do {
        lVar9 = *(longlong *)(*local_b8 + (longlong)iStack_9c * 0x10);
        if (lVar9 != 0) {
          if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar3);
          }
          if (((bVar2) || (lVar6 = FUN_144a78d6a(), lVar6 == 0)) ||
             (*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38))) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              lVar5 = lVar3;
            }
          }
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             (*(float *)(lVar9 + 0x2c0) = fVar10, param_3 != '\0')) {
            FUN_1448215fa(lVar9);
          }
        }
        local_a0 = local_a0 & ~uStack_ac;
        FUN_1449c0562(&local_b0);
      } while (local_b8 != plVar1 || (CONCAT44(uStack_a4,uStack_a8) != lVar4 || iStack_9c != iVar8))
      ;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba37ca FUN_147ba37ca body=153 status=ok
// SIG undefined FUN_147ba37ca(void)

void FUN_147ba37ca(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong *plStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  if (DAT_14c7615b4 < 0) {
    bVar9 = *(byte *)(*(longlong *)(param_1 + 0x390) + 0x9d);
    if ((bVar9 & 0x20) != 0) {
      return;
    }
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x390) + 0x9d);
LAB_147ba3844:
    *pbVar3 = bVar9 | 0x20;
    if (((*(byte *)(*(longlong *)(param_1 + 0x390) + 0x9c) & 1) == 0) &&
       ((*(byte *)(param_1 + 0x411) & 1) != 0)) {
      FUN_147ba3d58();
      return;
    }
    return;
  }
  bVar9 = *(byte *)(*(longlong *)(param_1 + 0x390) + 0x9d);
  if (((bVar9 & 0x20) == 0) != *(int *)(param_1 + 0x3fc) <= DAT_14c7615b4) {
    return;
  }
  pbVar3 = (byte *)(*(longlong *)(param_1 + 0x390) + 0x9d);
  if (*(int *)(param_1 + 0x3fc) <= DAT_14c7615b4) goto LAB_147ba3844;
  *pbVar3 = bVar9 & 0xdf;
  if ((*(byte *)(*(longlong *)(param_1 + 0x390) + 0x9c) & 1) == 0) {
    return;
  }
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_144a7a726();
  if ((lVar4 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar4 != 0) goto LAB_147ba3a3f;
    bVar2 = true;
  }
  else {
    FUN_1456cec3c(lVar4);
LAB_147ba3a3f:
    lVar5 = FUN_144a78d6a();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      bVar2 = false;
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar8 = lVar4;
      }
      goto LAB_147ba3a5b;
    }
    bVar2 = false;
  }
  lVar8 = 0;
LAB_147ba3a5b:
  lVar5 = FUN_144a78d6a();
  bVar9 = lVar4 != 0 & DAT_14c950c29;
  if (lVar8 == lVar5) {
    if (bVar9 != 0) {
      FUN_1456cec3c(lVar4);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar4 = param_1 + 0x250;
    uStack_60 = 0x100000000;
    uStack_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar4;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&uStack_60);
      iVar10 = *(int *)(param_1 + 0x268);
    }
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_70 = uStack_50;
    iStack_6c = iStack_4c;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    plStack_88 = plVar1;
    if ((iStack_4c != iVar10) || (uStack_58 != lVar4)) {
      do {
        lVar5 = *(longlong *)(*plStack_88 + (longlong)iStack_6c * 0x10);
        if (lVar5 != 0) {
          if ((*(byte *)(lVar5 + 0x9c) & 1) == 0) {
            *(byte *)(lVar5 + 0x9d) = *(byte *)(lVar5 + 0x9d) & 0xdf;
          }
          else {
            FUN_1401bf202();
          }
        }
        uStack_70 = uStack_70 & ~uStack_7c;
        FUN_1449c0562(&uStack_80);
      } while (plStack_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar10));
    }
  }
  else {
    if (bVar9 != 0) {
      FUN_1456cec3c(lVar4);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar5 = param_1 + 0x250;
    uStack_60 = 0x100000000;
    uStack_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar5;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&uStack_60);
      iVar10 = *(int *)(param_1 + 0x268);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    uStack_70 = uStack_50;
    iStack_6c = iStack_4c;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    plStack_88 = plVar1;
    if ((iStack_4c != iVar10) || (uStack_58 != lVar5)) {
      do {
        lVar8 = *(longlong *)(*plStack_88 + (longlong)iStack_6c * 0x10);
        if (lVar8 != 0) {
          if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar4);
          }
          if (((bVar2) || (lVar7 = FUN_144a78d6a(), lVar7 == 0)) ||
             (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30) {
              lVar6 = lVar4;
            }
          }
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            if ((*(byte *)(lVar8 + 0x9c) & 1) == 0) {
              *(byte *)(lVar8 + 0x9d) = *(byte *)(lVar8 + 0x9d) & 0xdf;
            }
            else {
              FUN_1401bf202(lVar8);
            }
          }
        }
        uStack_70 = uStack_70 & ~uStack_7c;
        FUN_1449c0562(&uStack_80);
      } while (plStack_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar5 || iStack_6c != iVar10));
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba3864 FUN_147ba3864 body=110 status=ok
// SIG undefined FUN_147ba3864(void)

void FUN_147ba3864(float param_1)

{
  int iVar1;
  uint uVar2;
  longlong in_RCX;
  float fVar3;
  
  iVar1 = DAT_14cae98e8 - (uint)*(byte *)(in_RCX + 0x410);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(in_RCX + 0x3fc);
  }
  else {
    if (iVar1 == 0 || DAT_14cae98e8 < (int)(uint)*(byte *)(in_RCX + 0x410)) {
      return;
    }
    uVar2 = iVar1 + *(int *)(in_RCX + 0x3fc);
  }
  if (uVar2 == 0) {
    return;
  }
  if ((int)uVar2 <= DAT_14cae98e8 && 0 < (int)uVar2) {
    fVar3 = *(float *)(DAT_14cae98e0 + -4 + (ulonglong)uVar2 * 4);
    param_1 = ABS(fVar3);
    if (1e-08 < param_1) goto LAB_147ba38ca;
  }
  fVar3 = *(float *)(in_RCX + 0x3f8);
LAB_147ba38ca:
  FUN_147ba344a(param_1,fVar3,1);
  return;
}



// FUNCTION 147ba38d2 FUN_147ba38d2 body=297 status=ok
// SIG undefined FUN_147ba38d2(void)

void FUN_147ba38d2(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  
  FUN_1448e423c();
  lVar2 = DAT_14cae9890;
  if ((*(byte *)(param_1 + 0x411) & 8) != 0) {
    fVar6 = *(float *)(param_1 + 0x414);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    pfVar1 = (float *)(lVar2 + uVar5 * 4);
    if (*pfVar1 <= fVar6 && fVar6 != *pfVar1) {
      fVar6 = 0.0;
      if ((int)(uint)*(byte *)(param_1 + 0x410) <= DAT_14cae98e8) {
        uVar4 = (DAT_14cae98e8 - (uint)*(byte *)(param_1 + 0x410)) + *(int *)(param_1 + 0x3fc);
        if ((int)uVar4 <= DAT_14cae98e8 && 0 < (int)uVar4) {
          fVar6 = *(float *)(DAT_14cae98e0 + -4 + (ulonglong)uVar4 * 4);
        }
      }
      FUN_147ba344a(param_1,~-(uint)(fVar6 != 0.0) & *(uint *)(param_1 + 0x3f8) |
                            (uint)fVar6 & -(uint)(fVar6 != 0.0),1);
      *(byte *)(param_1 + 0x411) = *(byte *)(param_1 + 0x411) & 0xf7;
      *(undefined4 *)(param_1 + 0x414) = 0;
      FUN_140cbebe8(param_1 + 0x30,0);
      return;
    }
    fVar6 = (float)FUN_144916004(param_1);
    if (fVar6 <= 1e-08) {
      fVar6 = 1e-08;
    }
    *(float *)(param_1 + 0x414) = param_2 / fVar6 + *(float *)(param_1 + 0x414);
  }
  return;
}



// FUNCTION 147ba39fc FUN_147ba39fc body=858 status=ok
// SIG undefined FUN_147ba39fc(void)

void FUN_147ba39fc(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
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
  lVar3 = FUN_144a7a726();
  if ((lVar3 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar3 != 0) goto LAB_147ba3a3f;
    bVar2 = true;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_147ba3a3f:
    lVar4 = FUN_144a78d6a();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      bVar2 = false;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar7 = lVar3;
      }
      goto LAB_147ba3a5b;
    }
    bVar2 = false;
  }
  lVar7 = 0;
LAB_147ba3a5b:
  lVar4 = FUN_144a78d6a();
  bVar8 = lVar3 != 0 & DAT_14c950c29;
  if (lVar7 == lVar4) {
    if (bVar8 != 0) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar3 = param_1 + 0x250;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar3;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    iStack_6c = iStack_4c;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_88 = plVar1;
    if ((iStack_4c != iVar9) || (uStack_58 != lVar3)) {
      do {
        lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
        if (lVar4 != 0) {
          if ((*(byte *)(lVar4 + 0x9c) & 1) == 0) {
            *(byte *)(lVar4 + 0x9d) = *(byte *)(lVar4 + 0x9d) & 0xdf;
          }
          else {
            FUN_1401bf202();
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar3 || iStack_6c != iVar9))
      ;
    }
  }
  else {
    if (bVar8 != 0) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar4 = param_1 + 0x250;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar4;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar9) || (uStack_58 != lVar4)) {
      do {
        lVar7 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
        if (lVar7 != 0) {
          if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar3);
          }
          if (((bVar2) || (lVar6 = FUN_144a78d6a(), lVar6 == 0)) ||
             (*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38))) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              lVar5 = lVar3;
            }
          }
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            if ((*(byte *)(lVar7 + 0x9c) & 1) == 0) {
              *(byte *)(lVar7 + 0x9d) = *(byte *)(lVar7 + 0x9d) & 0xdf;
            }
            else {
              FUN_1401bf202(lVar7);
            }
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar9))
      ;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba3d58 FUN_147ba3d58 body=837 status=ok
// SIG undefined FUN_147ba3d58(void)

void FUN_147ba3d58(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
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
  lVar3 = FUN_144a7a726();
  if ((lVar3 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar3 != 0) goto LAB_147ba3d9b;
    bVar2 = true;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_147ba3d9b:
    lVar4 = FUN_144a78d6a();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      bVar2 = false;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar7 = lVar3;
      }
      goto LAB_147ba3db7;
    }
    bVar2 = false;
  }
  lVar7 = 0;
LAB_147ba3db7:
  lVar4 = FUN_144a78d6a();
  bVar8 = lVar3 != 0 & DAT_14c950c29;
  if (lVar7 == lVar4) {
    if (bVar8 != 0) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar3 = param_1 + 0x250;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar3;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    iStack_6c = iStack_4c;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_88 = plVar1;
    if ((iStack_4c != iVar9) || (uStack_58 != lVar3)) {
      do {
        lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x9c) & 1) == 0)) {
          FUN_140b506a4();
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar3 || iStack_6c != iVar9))
      ;
    }
  }
  else {
    if (bVar8 != 0) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar4 = param_1 + 0x250;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar4;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar9) || (uStack_58 != lVar4)) {
      do {
        lVar7 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
        if (lVar7 != 0) {
          if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar3);
          }
          if (((bVar2) || (lVar6 = FUN_144a78d6a(), lVar6 == 0)) ||
             (*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38))) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              lVar5 = lVar3;
            }
          }
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             ((*(byte *)(lVar7 + 0x9c) & 1) == 0)) {
            FUN_140b506a4(lVar7);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar9))
      ;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba409e FUN_147ba409e body=219 status=ok
// SIG undefined FUN_147ba409e(void)

void FUN_147ba409e(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140206818();
  bVar1 = *(byte *)(param_1 + 0x411);
  *(byte *)(param_1 + 0x411) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    FUN_147ba39fc(param_1);
  }
  lVar5 = FUN_1447210f0(param_1);
  if (((lVar5 != 0) && (cVar4 = FUN_144b2c332(lVar5), cVar4 != '\0')) &&
     (iVar2 = *(int *)(param_1 + 0x408), (longlong)iVar2 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x400);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar6);
      if (lVar3 != 0) {
        FUN_147ba420c(&local_40);
        FUN_147ba417a(lVar3 + 0x20f,param_1,local_40);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba417a FUN_147ba417a body=145 status=ok
// SIG undefined FUN_147ba417a(void)

void FUN_147ba417a(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1402599be(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x20f,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba420c FUN_147ba420c body=183 status=ok
// SIG undefined FUN_147ba420c(void)

undefined8 * FUN_147ba420c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9bf8) {
    FUN_144b3d300(&DAT_14cae9bf8);
    if (DAT_14cae9bf8 == -1) {
      builtin_wcsncpy(local_38,L"OnSubActorEndPlay",0x12);
      FUN_1446f470e(&DAT_14cae9bf0,local_38,1);
      _Init_thread_footer(&DAT_14cae9bf8);
    }
  }
  *param_1 = DAT_14cae9bf0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba42c4 FUN_147ba42c4 body=1353 status=ok
// SIG undefined FUN_147ba42c4(void)

double * FUN_147ba42c4(longlong param_1,double *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double local_78;
  char local_70;
  undefined7 uStack_6f;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  uVar10 = (ulonglong)param_4;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1449b1c4a(param_1,param_2,param_3,0);
  dVar11 = (param_2[5] - param_2[2]) * (param_2[4] - param_2[1]) * (param_2[3] - *param_2);
  if ((dVar11 == 0.0) && (!NAN(dVar11))) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  if ((char)param_3 == '\0') goto LAB_147ba453e;
  lVar4 = FUN_144a7a726();
  local_b0 = param_1;
  if ((lVar4 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar4 != 0) goto LAB_147ba4375;
    bVar1 = true;
LAB_147ba4390:
    lVar7 = 0;
  }
  else {
    FUN_1456cec3c(lVar4);
LAB_147ba4375:
    lVar5 = FUN_144a78d6a();
    if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) {
      bVar1 = false;
      goto LAB_147ba4390;
    }
    bVar1 = false;
    lVar7 = 0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar7 = lVar4;
    }
  }
  lVar5 = FUN_144a78d6a();
  bVar8 = lVar4 != 0 & DAT_14c950c29;
  if (lVar7 == lVar5) {
    if (bVar8 != 0) {
      FUN_1456cec3c(lVar4);
    }
    lVar5 = local_b0;
    plVar12 = (longlong *)(local_b0 + 0x240);
    dVar11 = (double)(local_b0 + 0x250);
    local_68 = 2.12199579096527e-314;
    local_58 = 2.12199579047121e-314;
    uStack_50 = 0;
    dStack_60 = dVar11;
    if (*(int *)(local_b0 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(lVar5 + 0x268);
    }
    uStack_98 = local_68;
    dStack_90 = dStack_60;
    dStack_80 = (double)CONCAT44(uStack_4c,uStack_50);
    uStack_88 = local_58;
    dVar2 = uStack_88;
    uStack_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a0 = plVar12;
    if ((uStack_88._4_4_ != iVar9) || (dStack_60 != dVar11)) {
      uVar10 = (ulonglong)param_4;
      bVar8 = 0;
      iVar3 = uStack_88._4_4_;
      uStack_88 = dVar2;
      do {
        lVar4 = *(longlong *)(*local_a0 + (longlong)iVar3 * 0x10);
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x660);
          if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
            FUN_1456cec3c(lVar4);
          }
          bVar8 = bVar8 | lVar4 != 0;
        }
        uStack_88 = (double)CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
        FUN_1449c0562(&uStack_98);
        iVar3 = uStack_88._4_4_;
      } while (local_a0 != plVar12 || (dStack_90 != dVar11 || uStack_88._4_4_ != iVar9));
      goto LAB_147ba47a3;
    }
  }
  else {
    if (bVar8 != 0) {
      FUN_1456cec3c(lVar4);
    }
    lVar5 = local_b0;
    plVar12 = (longlong *)(local_b0 + 0x240);
    dVar11 = (double)(local_b0 + 0x250);
    local_68 = 2.12199579096527e-314;
    local_58 = 2.12199579047121e-314;
    uStack_50 = 0;
    dStack_60 = dVar11;
    if (*(int *)(local_b0 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(lVar5 + 0x268);
    }
    dStack_80 = (double)CONCAT44(uStack_4c,uStack_50);
    uStack_88 = local_58;
    dVar2 = uStack_88;
    uStack_98 = local_68;
    dStack_90 = dStack_60;
    uStack_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a0 = plVar12;
    if ((uStack_88._4_4_ != iVar9) || (lVar5 = local_b0, dStack_60 != dVar11)) {
      local_b1 = (undefined1)param_4;
      local_a8 = 0;
      iVar3 = uStack_88._4_4_;
      uStack_88 = dVar2;
      do {
        lVar5 = *(longlong *)(*local_a0 + (longlong)iVar3 * 0x10);
        if (lVar5 != 0) {
          if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar4);
          }
          if (((bVar1) || (lVar7 = FUN_144a78d6a(), lVar7 == 0)) ||
             (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30) {
              lVar6 = lVar4;
            }
          }
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            lVar5 = *(longlong *)(lVar5 + 0x660);
            if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
              FUN_1456cec3c(lVar5);
            }
            local_a8 = CONCAT71((int7)((ulonglong)local_a8 >> 8),(byte)local_a8 | lVar5 != 0);
          }
        }
        uStack_88 = (double)CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
        FUN_1449c0562(&uStack_98);
        iVar3 = uStack_88._4_4_;
      } while (local_a0 != plVar12 || (dStack_90 != dVar11 || uStack_88._4_4_ != iVar9));
      uVar10 = CONCAT71((int7)((ulonglong)lVar5 >> 8),local_b1);
      bVar8 = (byte)local_a8;
LAB_147ba47a3:
      lVar5 = local_b0;
      dVar2 = uStack_88;
      if ((bVar8 & 1) != 0) goto LAB_147ba453e;
    }
  }
  uStack_88 = dVar2;
  iVar9 = *(int *)(lVar5 + 0x408);
  if ((longlong)iVar9 != 0) {
    lVar4 = *(longlong *)(lVar5 + 0x400);
    lVar5 = 0;
    do {
      plVar12 = *(longlong **)(lVar4 + lVar5);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x520))(plVar12,&local_a0,1,uVar10 & 0xffffffff);
        if (local_70 == '\0' || *(char *)(param_2 + 6) == '\0') {
          if (local_70 != '\0') {
            param_2[6] = (double)CONCAT71(uStack_6f,local_70);
            param_2[4] = dStack_80;
            param_2[5] = local_78;
            param_2[2] = dStack_90;
            param_2[3] = uStack_88;
            *param_2 = (double)local_a0;
            param_2[1] = uStack_98;
          }
        }
        else {
          plVar12 = (longlong *)*param_2;
          if ((double)local_a0 <= *param_2) {
            plVar12 = local_a0;
          }
          *param_2 = (double)plVar12;
          dVar11 = param_2[1];
          if (uStack_98 <= param_2[1]) {
            dVar11 = uStack_98;
          }
          param_2[1] = dVar11;
          dVar11 = param_2[2];
          if (dStack_90 <= param_2[2]) {
            dVar11 = dStack_90;
          }
          param_2[2] = dVar11;
          dVar11 = param_2[3];
          if (param_2[3] <= uStack_88) {
            dVar11 = uStack_88;
          }
          param_2[3] = dVar11;
          dVar11 = param_2[4];
          if (param_2[4] <= dStack_80) {
            dVar11 = dStack_80;
          }
          param_2[4] = dVar11;
          dVar11 = param_2[5];
          if (param_2[5] <= local_78) {
            dVar11 = local_78;
          }
          param_2[5] = dVar11;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar9 * 8 != lVar5);
  }
LAB_147ba453e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ba480e FUN_147ba480e body=72 status=ok
// SIG undefined FUN_147ba480e(void)

undefined8 FUN_147ba480e(undefined8 param_1,longlong param_2)

{
  FUN_147457ee8(param_2,param_1);
  FUN_147457f64(param_2 + 8,param_1);
  FUN_146ed6908(param_1,param_2 + 0x10);
  FUN_147ba4856(param_2 + 0x20,param_1);
  return param_1;
}



// FUNCTION 147ba4856 FUN_147ba4856 body=538 status=ok
// SIG undefined FUN_147ba4856(void)

void FUN_147ba4856(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147ba92c6(param_2,param_1);
    goto LAB_147ba49dc;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 4,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147ba49dc;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147ba49c9:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 << 4);
  }
  else {
    if (local_1c == 0x10) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x8000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147ba9534(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147ba94ae(param_1,iVar4);
        }
        goto LAB_147ba49c9;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147ba49dc:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba4a72 FUN_147ba4a72 body=563 status=ok
// SIG undefined FUN_147ba4a72(void)

void FUN_147ba4a72(longlong param_1)

{
  ulonglong uVar1;
  void *_Src;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [40];
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  void *local_a0;
  int local_98;
  int local_90;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)FUN_147daa548();
  if ((longlong)(int)plVar3[1] != 0) {
    plVar4 = (longlong *)*plVar3;
    plVar3 = plVar4 + (int)plVar3[1];
    do {
      lVar7 = *plVar4;
      FUN_14099af08(lVar7);
      FUN_1405f378a(lVar7);
      iVar6 = *(int *)(lVar7 + 0xd8);
      if ((longlong)iVar6 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0xd0);
        lVar8 = 0;
        do {
          (**(code **)(**(longlong **)(lVar7 + lVar8) + 0x5b8))();
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar6 * 8 != lVar8);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_147ba9594();
  _Src = local_a0;
  local_d0 = (void *)0x0;
  lVar7 = (longlong)local_98;
  local_c8 = local_98;
  if (lVar7 == 0) {
    local_c4 = 0;
    iVar6 = 0;
  }
  else {
    FUN_14010590e(&local_d0,local_98,0);
    memcpy(local_d0,_Src,lVar7 << 3);
    iVar6 = local_98;
  }
  local_c0 = local_90;
  if (local_90 != iVar6) {
    do {
      lVar7 = *(longlong *)((longlong)local_d0 + (longlong)local_90 * 8);
      lVar8 = *(longlong *)(lVar7 + 0xb0);
      local_c0 = local_90;
      if (lVar8 == 0) {
        lVar8 = FUN_1448abda6(lVar7);
      }
      uVar1 = uStack_b0;
      if (lVar8 == param_1) {
        lVar8 = (longlong)(int)uStack_b0;
        uVar2 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
        if (uStack_b0._4_4_ < uVar2) {
          FUN_1406ca8e4(&local_b8,uVar1 & 0xffffffff);
        }
        *(longlong *)(local_b8 + lVar8 * 8) = lVar7;
      }
      lVar7 = (longlong)local_c0;
      do {
        lVar7 = lVar7 + 1;
        local_90 = (int)lVar7;
        if (local_c8 <= lVar7) break;
      } while (*(longlong *)((longlong)local_d0 + lVar7 * 8) == 0);
      local_c0 = local_90;
    } while (iVar6 != local_90);
  }
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14342c820(&local_a0,&local_b8);
  lVar7 = local_b8;
  lVar8 = (longlong)(int)uStack_b0;
  if (lVar8 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar7 + lVar5) + 0x5b8))();
      lVar5 = lVar5 + 8;
    } while (lVar8 * 8 != lVar5);
  }
  FUN_1416525c2(&local_a0);
  plVar3 = (longlong *)FUN_140083894();
  (**(code **)(*plVar3 + 0x90))(plVar3);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba4ca6 FUN_147ba4ca6 body=195 status=ok
// SIG undefined FUN_147ba4ca6(void)

longlong FUN_147ba4ca6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9990) {
    FUN_144b3d300(&DAT_14cae9990);
    if (DAT_14cae9990 == -1) {
      FUN_1446f470e(&DAT_14cae9988,L"MapBuildDataRegistry",1);
      _Init_thread_footer(&DAT_14cae9990);
    }
  }
  uVar1 = DAT_14cae9988;
  uVar2 = FUN_144a79778(param_1);
  lVar3 = FUN_147b8e8b8(uVar2,uVar1,0,0,0,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x220) = lVar3;
  return lVar3;
}



// FUNCTION 147ba4d6a FUN_147ba4d6a body=273 status=ok
// SIG undefined FUN_147ba4d6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147ba4d6a(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9e30);
  iVar8 = DAT_14cae9e14;
  iVar6 = DAT_14cae9de8;
  _DAT_14cae9e60 = 0;
  _DAT_14cae9e68 = 0;
  _DAT_14cae9e70 = 0;
  _DAT_14cae9e58 = param_2;
  FUN_147ba9600(&local_44,param_2);
  lVar5 = DAT_14cae9de0;
  lVar10 = (longlong)local_44;
  if (lVar10 != -1) {
    param_1[2] = *(undefined8 *)(DAT_14cae9de0 + 0x18 + lVar10 * 0x28);
    puVar1 = (undefined4 *)(lVar5 + 8 + lVar10 * 0x28);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)param_1 = *puVar1;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    FUN_147b96b14(&DAT_14cae9de0);
  }
  iVar9 = DAT_14cae9e14;
  iVar7 = DAT_14cae9de8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9e30);
  if ((iVar8 < iVar6) && (iVar7 == iVar9)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cae9dd8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba4e7c FUN_147ba4e7c body=304 status=ok
// SIG undefined FUN_147ba4e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147ba4e7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9cf8);
  DAT_14cae9d20 = param_2;
  if (DAT_14cae9d28 != 0) {
    FUN_1400020a8();
  }
  iVar4 = DAT_14cae9cdc;
  iVar2 = DAT_14cae9cb0;
  DAT_14cae9d28 = 0;
  _DAT_14cae9d30 = 0;
  FUN_147ba969a(&local_44,DAT_14cae9d20);
  if ((longlong)local_44 != -1) {
    lVar6 = DAT_14cae9ca8 + (longlong)local_44 * 0x20;
    puVar7 = (undefined8 *)(lVar6 + 8);
    if (puVar7 != param_1) {
      uVar1 = *(undefined8 *)(lVar6 + 0x10);
      *param_1 = *puVar7;
      *puVar7 = 0;
      param_1[1] = uVar1;
      *(undefined8 *)(lVar6 + 0x10) = 0;
    }
    FUN_1474582e6(&DAT_14cae9ca8);
  }
  iVar5 = DAT_14cae9cdc;
  iVar3 = DAT_14cae9cb0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9cf8);
  if ((iVar4 < iVar2) && (iVar3 == iVar5)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cae9ca0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba4fae FUN_147ba4fae body=151 status=ok
// SIG undefined FUN_147ba4fae(void)

longlong FUN_147ba4fae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_38 = param_2;
  local_30 = &local_78;
  FUN_147babd84(param_1 + 0x30,&local_24);
  lVar1 = *(longlong *)(param_1 + 0x30);
  FUN_147ba50d2(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1 + (longlong)local_24 * 0x50 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba5046 FUN_147ba5046 body=139 status=ok
// SIG undefined FUN_147ba5046(void)

longlong * FUN_147ba5046(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)*param_1;
  if (plVar3 != plVar2) {
    *param_1 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      *(int *)((longlong)plVar2 + 0x1c) = *(int *)((longlong)plVar2 + 0x1c) + 1;
    }
    if (plVar3 != (longlong *)0x0) {
      piVar1 = (int *)((longlong)plVar3 + 0x1c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
  }
  plVar2 = (longlong *)param_2[1];
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != plVar2) {
    param_1[1] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar2 = plVar3 + 3;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar3 + 0x30))();
      }
    }
  }
  FUN_1403fbf4e(param_1 + 2,param_2 + 2);
  FUN_147ba827c(param_1 + 4,param_2 + 4);
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 147ba50d2 FUN_147ba50d2 body=87 status=ok
// SIG undefined FUN_147ba50d2(void)

void FUN_147ba50d2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x30))();
    }
  }
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    piVar2 = (int *)((longlong)param_1 + 0x1c);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147ba5125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))();
      return;
    }
  }
  return;
}



// FUNCTION 147ba512a FUN_147ba512a body=273 status=ok
// SIG undefined FUN_147ba512a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147ba512a(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9c58);
  iVar8 = DAT_14cae9c3c;
  iVar6 = DAT_14cae9c10;
  _DAT_14cae9c88 = 0;
  _DAT_14cae9c90 = 0;
  _DAT_14cae9c98 = 0;
  _DAT_14cae9c80 = param_2;
  FUN_147ba9734(&local_44,param_2);
  lVar5 = DAT_14cae9c08;
  lVar10 = (longlong)local_44;
  if (lVar10 != -1) {
    param_1[2] = *(undefined8 *)(DAT_14cae9c08 + 0x18 + lVar10 * 0x28);
    puVar1 = (undefined4 *)(lVar5 + 8 + lVar10 * 0x28);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)param_1 = *puVar1;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    FUN_1479f7aaa(&DAT_14cae9c08);
  }
  iVar9 = DAT_14cae9c3c;
  iVar7 = DAT_14cae9c10;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9c58);
  if ((iVar8 < iVar6) && (iVar7 == iVar9)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cae9c00);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba523c FUN_147ba523c body=271 status=ok
// SIG undefined FUN_147ba523c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147ba523c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9d90);
  iVar8 = DAT_14cae9d74;
  iVar6 = DAT_14cae9d48;
  _DAT_14cae9dc0 = 0;
  _DAT_14cae9dc8 = 0;
  _DAT_14cae9dd0 = 0;
  _DAT_14cae9db8 = param_2;
  FUN_147ba97ce(&local_44,param_2);
  lVar5 = DAT_14cae9d40;
  lVar10 = (longlong)local_44;
  if (lVar10 != -1) {
    param_1[2] = *(undefined8 *)(DAT_14cae9d40 + 0x18 + lVar10 * 0x28);
    puVar1 = (undefined4 *)(lVar5 + 8 + lVar10 * 0x28);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)param_1 = *puVar1;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    FUN_147a13412(&DAT_14cae9d40);
  }
  iVar9 = DAT_14cae9d74;
  iVar7 = DAT_14cae9d48;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9d90);
  if ((iVar8 < iVar6) && (iVar7 == iVar9)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cae9d38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba534c FUN_147ba534c body=26 status=ok
// SIG undefined FUN_147ba534c(void)

undefined8 * FUN_147ba534c(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 147ba5366 FUN_147ba5366 body=65 status=ok
// SIG undefined FUN_147ba5366(void)

void FUN_147ba5366(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ba539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147ba53a7 FUN_147ba53a7 body=185 status=ok
// SIG undefined FUN_147ba53a7(void)

void FUN_147ba53a7(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1467fd8a5();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x80),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x80) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x84),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x84) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147ba9898(param_1,param_2 + 0x88);
  return;
}



// FUNCTION 147ba5460 FUN_147ba5460 body=897 status=ok
// SIG undefined FUN_147ba5460(void)

longlong * FUN_147ba5460(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 uStack_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_24 = 0x3f800000;
  iVar3 = FUN_1448332aa(param_1,&DAT_149e3cb60);
  if ((0x15 < iVar3) && (iVar3 = FUN_1448332aa(param_1,&DAT_149e3cc08), iVar3 < 0x17)) {
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_24);
      }
      else {
        FUN_14572512c(param_1,&local_24);
      }
    }
    else {
      local_24 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae99a0) && (FUN_144b3d300(&DAT_14cae99a0), DAT_14cae99a0 == -1)) {
    FUN_1446f470e(&DAT_14cae9998,L"FullHDR");
    _Init_thread_footer(&DAT_14cae99a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae99b0) && (FUN_144b3d300(&DAT_14cae99b0), DAT_14cae99b0 == -1)) {
    FUN_1446f470e(&DAT_14cae99a8,L"EncodedHDR");
    _Init_thread_footer(&DAT_14cae99b0);
  }
  local_48[2] = 0;
  uStack_30 = 0;
  lVar4 = param_1[0xd];
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x10) == 0)) {
LAB_147ba562d:
    FUN_140077068(param_1,param_2 + 2);
  }
  else {
    (**(code **)(**(longlong **)(lVar4 + 8) + 0xd8))(*(longlong **)(lVar4 + 8),local_48 + 2);
    if ((longlong)(int)uStack_30 == 0) goto LAB_147ba562d;
    lVar4 = 0;
    do {
      if (*(longlong *)(local_48[2] + lVar4) == DAT_14cae9998) goto LAB_147ba562d;
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)uStack_30 * 8 != lVar4);
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_140077068(param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = FUN_1448332aa(param_1,&DAT_149e38f8c);
  if ((iVar3 < 3) || (iVar3 = FUN_1448332aa(param_1,&DAT_149e3cc08), 0x25 < iVar3)) {
    if ((longlong)(int)uStack_30 == 0) {
LAB_147ba56a9:
      iVar3 = FUN_1448332aa(param_1,&DAT_149e3cc08);
      if (0x25 < iVar3) {
        FUN_140077068(param_1,param_2 + 6);
        goto LAB_147ba56ee;
      }
    }
    else {
      lVar4 = 0;
      do {
        if (*(longlong *)(local_48[2] + lVar4) == DAT_14cae99a8) goto LAB_147ba56a9;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)uStack_30 * 8 != lVar4);
    }
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_140077068(param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_48[0] = 0;
    (**(code **)(*param_1 + 0x150))(param_1);
  }
LAB_147ba56ee:
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_1435684a2(param_2);
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba57e2 FUN_147ba57e2 body=911 status=ok
// SIG undefined FUN_147ba57e2(void)

void FUN_147ba57e2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  byte local_42 [2];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  switchD_143c3d4dc::caseD_21();
  FUN_140562eea(local_42,param_2,0,&DAT_14c896044);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e38f8c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39154);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_141156948(param_2);
  if ((local_42[0] & 2) == 0) {
    FUN_147ba99bc(param_2,param_1 + 0x30);
    FUN_147ba9fd2(param_2,param_1 + 0x80);
    iVar6 = FUN_1448332aa(param_2,&DAT_149e3cb60);
    if (0x13 < iVar6) {
      FUN_147baa5c6(param_2,param_1 + 0xd0);
    }
    FUN_147baabba(param_2,param_1 + 0x120);
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      lVar2 = param_1 + 0x170;
      local_38 = param_1 + 0x180;
      local_40 = 0x100000000;
      local_30 = 0xffffffff;
      local_28 = 0;
      if (*(int *)(param_1 + 0x198) != 0) {
        FUN_1449c0562(&local_40);
      }
      local_80 = local_40;
      local_78 = local_38;
      local_70 = local_30;
      uVar10 = local_70;
      local_68 = local_28;
      local_64 = local_24;
      local_50 = 0;
      local_70._4_4_ = (int)((ulonglong)local_30 >> 0x20);
      bVar4 = local_70._4_4_ < *(int *)(local_38 + 0x18);
      local_88 = lVar2;
      local_70 = local_30;
      local_60 = lVar2;
      local_58 = lVar2;
      if (bVar4) {
        local_70 = uVar10;
        do {
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
        } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
        if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
          FUN_147bab1ba(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
        }
      }
    }
    iVar6 = FUN_1448332aa(param_2,&DAT_149e39154);
    if (0 < iVar6) {
      FUN_147bab3c2(param_2,param_1 + 0x170);
    }
    iVar6 = FUN_1448332aa(param_2,&DAT_149e3cb60);
    if (0x1f < iVar6) {
      FUN_147bab7d0(param_2,param_1 + 0x1c0);
    }
    uVar7 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    cVar5 = FUN_14170fbcc(param_2,uVar7,0x8b,2);
    if (cVar5 != '\0') {
      puVar3 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        local_88 = CONCAT44(local_88._4_4_,(uint)(*(longlong *)(param_1 + 0x230) != 0));
        (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
        uVar8 = (uint)local_88;
        if (1 < (uint)local_88) {
          FUN_14572541c(param_2);
          uVar8 = (uint)local_88;
        }
      }
      else {
        uVar8 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      if (uVar8 != 0) {
        if (*(longlong *)(param_1 + 0x230) == 0) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x68,0x10);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[10] = 0;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0;
          *(undefined8 **)(param_1 + 0x230) = puVar9;
        }
        uVar10 = FUN_14639a61c();
        FUN_14047320e(uVar10,param_2,*(undefined8 *)(param_1 + 0x230),0);
        FUN_147dc0a66(*(undefined8 *)(param_1 + 0x230),param_2,param_1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba5b72 FUN_147ba5b72 body=496 status=ok
// SIG undefined FUN_147ba5b72(void)

void FUN_147ba5b72(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446e0b6e();
  cVar5 = FUN_14743059b(DAT_14ca85550);
  bVar8 = 1;
  if (cVar5 == '\0') {
    bVar8 = DAT_14c760e14 & DAT_14ca964f0;
  }
  bVar3 = DAT_14c760db4 < 3;
  bVar9 = DAT_14c760db4 != 1;
  uVar4 = local_80;
  if (*(int *)(param_1 + 0x1a4) < *(int *)(param_1 + 0x178)) {
    plVar1 = (longlong *)(param_1 + 0x170);
    local_50 = param_1 + 0x180;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (*(int *)(param_1 + 0x198) != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_48;
    uVar4 = local_80;
    local_78 = local_40;
    local_74 = local_3c;
    local_90 = local_58;
    local_88 = local_50;
    local_60 = 0;
    local_80._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_98 = plVar1;
    local_70 = plVar1;
    local_68 = plVar1;
    if (local_80._4_4_ < *(int *)(local_50 + 0x18)) {
      iVar6 = local_80._4_4_;
      local_80 = uVar4;
      do {
        lVar2 = *local_98;
        if (bVar3 && bVar8 == 0) {
          lVar7 = (longlong)iVar6 * 0x50;
          *(undefined4 *)(lVar2 + 0x20 + lVar7) = 0;
          if (*(int *)(lVar2 + 0x24 + lVar7) != 0) {
            FUN_144893a1c(lVar2 + lVar7 + 0x18,0);
          }
        }
        if (bVar9 || bVar8 != 0) {
          lVar7 = (longlong)iVar6 * 0x50;
          *(undefined4 *)(lVar2 + 0x30 + lVar7) = 0;
          if (*(int *)(lVar2 + 0x34 + lVar7) != 0) {
            FUN_144893a1c(lVar2 + lVar7 + 0x28,0);
          }
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar6 = local_80._4_4_;
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
      uVar4 = local_80;
      if (((local_60 & 1) != 0) && (local_60._1_1_ == '\x01')) {
        FUN_147bab1ba(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
        uVar4 = local_80;
      }
    }
  }
  local_80 = uVar4;
  FUN_143567f9e(param_1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba5d64 FUN_147ba5d64 body=96 status=ok
// SIG undefined FUN_147ba5d64(void)

longlong FUN_147ba5d64(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147babf2e((longlong *)(param_1 + 0x30),uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x30);
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) == 0)) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147ba5dc4 FUN_147ba5dc4 body=82 status=ok
// SIG undefined FUN_147ba5dc4(void)

longlong FUN_147ba5dc4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147babf2e((longlong *)(param_1 + 0x30),uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x30);
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147ba5e16 FUN_147ba5e16 body=84 status=ok
// SIG undefined FUN_147ba5e16(void)

undefined8 FUN_147ba5e16(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147bac07e((longlong *)(param_1 + 0x80),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x80),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 147ba5e6a FUN_147ba5e6a body=159 status=ok
// SIG undefined FUN_147ba5e6a(void)

longlong FUN_147ba5e6a(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    lVar3 = FUN_147dc093c();
    if (lVar3 != 0) goto LAB_147ba5ea6;
  }
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147bac296((longlong *)(param_1 + 0xd0),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xd0),
     plVar4 = (longlong *)(lVar3 + 0x10), plVar4 == (longlong *)0x0 || lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar4;
  }
LAB_147ba5ea6:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba5f0a FUN_147ba5f0a body=84 status=ok
// SIG undefined FUN_147ba5f0a(void)

longlong FUN_147ba5f0a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147bac396((longlong *)(param_1 + 0x120),uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 0x120);
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147ba5f5e FUN_147ba5f5e body=85 status=ok
// SIG undefined FUN_147ba5f5e(void)

longlong FUN_147ba5f5e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147bac864((longlong *)(param_1 + 0x170),uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x170);
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147ba5fb4 FUN_147ba5fb4 body=88 status=ok
// SIG undefined FUN_147ba5fb4(void)

longlong FUN_147ba5fb4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147bac956((longlong *)(param_1 + 0x1c0),uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x1c0);
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147ba600c FUN_147ba600c body=68 status=ok
// SIG undefined FUN_147ba600c(void)

void FUN_147ba600c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145caae96(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147bac9d2(param_1,param_2);
  return;
}



// FUNCTION 147ba6051 FUN_147ba6051 body=170 status=ok
// SIG undefined FUN_147ba6051(void)

undefined8 * FUN_147ba6051(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (lVar1 != 0) {
      uVar2 = FUN_147b9a77e(lVar1,0);
      *param_1 = uVar2;
      uVar2 = FUN_147b9a77e(lVar1,1);
      param_1[1] = uVar2;
      uVar2 = FUN_147b9a786(lVar1);
      param_1[2] = uVar2;
      uVar2 = FUN_147b9a78c(lVar1);
      param_1[3] = uVar2;
      param_1[4] = *(undefined8 *)(lVar1 + 0x48);
      param_1[5] = *(undefined8 *)(lVar1 + 0x50);
    }
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)param_2[1] + 0x28))();
    if (lVar1 != 0) {
      uVar2 = FUN_147d115fc(lVar1);
      param_1[6] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 147ba60fc FUN_147ba60fc body=110 status=ok
// SIG undefined FUN_147ba60fc(void)

void FUN_147ba60fc(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_147baca74(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_147bacc3c(param_1);
    return;
  }
  FUN_147bacaf8(param_1);
  FUN_147baca74(param_1,param_2);
  return;
}



// FUNCTION 147ba616a FUN_147ba616a body=62 status=ok
// SIG undefined FUN_147ba616a(void)

void FUN_147ba616a(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bad354(param_1,iVar1);
  }
  FUN_147bad30c((longlong)iVar1 * 0x58 + *param_1,param_2);
  return;
}



// FUNCTION 147ba61a8 FUN_147ba61a8 body=72 status=ok
// SIG undefined FUN_147ba61a8(void)

void FUN_147ba61a8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  uVar1 = FUN_144b00ba4(param_2);
  FUN_147bad3e4(param_1 + 0x260,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000147ba61e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return;
}



// FUNCTION 147ba61f0 FUN_147ba61f0 body=470 status=ok
// SIG undefined FUN_147ba61f0(void)

ulonglong FUN_147ba61f0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  code *local_58;
  ulonglong **local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  uVar3 = FUN_144b00ba4(param_2);
  local_70 = uVar3;
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x298;
    if (*(longlong *)(param_1 + 0x2a0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x2a0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x2a8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar3) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            local_68 = puVar1[1];
            goto LAB_147ba6394;
          }
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  local_48 = 0;
  local_58 = FUN_143569300;
  local_78 = 0;
  local_60 = &local_48;
  local_50 = &local_60;
  FUN_144a56f9f(uVar3,&local_58,1,0);
  local_68 = local_48;
  if (local_48 == 0) {
    uVar5 = FUN_144a79cc8(param_2);
    FUN_14099b09e(uVar5,0);
    local_48 = 0;
    local_58 = FUN_143569300;
    local_78 = 0;
    local_60 = &local_48;
    local_50 = &local_60;
    FUN_144a56f9f(uVar3,&local_58,1,0);
  }
  local_58 = (code *)&local_70;
  local_50 = (ulonglong **)&local_68;
  local_68 = local_48;
  FUN_147bad532((longlong *)(param_1 + 0x260),&local_48);
LAB_147ba6394:
  uVar3 = local_68;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba63c8 FUN_147ba63c8 body=142 status=ok
// SIG undefined FUN_147ba63c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ba63c8(void)

{
  _DAT_14cae9ca0 = &PTR_FUN_14a9c41e0;
  _DAT_14cae9cc8 = 0;
  _DAT_14cae9cd0 = 0;
  DAT_14cae9ca8 = 0;
  _DAT_14cae9cb0 = 0;
  _DAT_14cae9cd4 = 0xffffffff00000080;
  DAT_14cae9cdc = 0;
  DAT_14cae9ce8 = 0;
  DAT_14cae9cf0 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9cf8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9cf8,4000);
  DAT_14cae9d20 = 0;
  DAT_14cae9d28 = 0;
  _DAT_14cae9d30 = 0;
  return;
}



// FUNCTION 147ba6456 FUN_147ba6456 body=140 status=ok
// SIG undefined FUN_147ba6456(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ba6456(void)

{
  _DAT_14cae9dd8 = &PTR_FUN_14a9c4200;
  DAT_14cae9e00 = 0;
  _DAT_14cae9e08 = 0;
  DAT_14cae9de0 = 0;
  _DAT_14cae9de8 = 0;
  _DAT_14cae9e0c = 0xffffffff00000080;
  DAT_14cae9e14 = 0;
  DAT_14cae9e20 = 0;
  DAT_14cae9e28 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9e30);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9e30,4000);
  _DAT_14cae9e58 = 0;
  _DAT_14cae9e60 = 0;
  _DAT_14cae9e68 = 0;
  _DAT_14cae9e70 = 0;
  return;
}



// FUNCTION 147ba64e2 FUN_147ba64e2 body=140 status=ok
// SIG undefined FUN_147ba64e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ba64e2(void)

{
  _DAT_14cae9c00 = &PTR_FUN_14a9c4220;
  DAT_14cae9c28 = 0;
  _DAT_14cae9c30 = 0;
  DAT_14cae9c08 = 0;
  _DAT_14cae9c10 = 0;
  _DAT_14cae9c34 = 0xffffffff00000080;
  DAT_14cae9c3c = 0;
  DAT_14cae9c48 = 0;
  DAT_14cae9c50 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9c58);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9c58,4000);
  _DAT_14cae9c80 = 0;
  _DAT_14cae9c88 = 0;
  _DAT_14cae9c90 = 0;
  _DAT_14cae9c98 = 0;
  return;
}



// FUNCTION 147ba656e FUN_147ba656e body=142 status=ok
// SIG undefined FUN_147ba656e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ba656e(void)

{
  _DAT_14cae9d38 = &PTR_FUN_14a9c4240;
  DAT_14cae9d60 = 0;
  _DAT_14cae9d68 = 0;
  DAT_14cae9d40 = 0;
  _DAT_14cae9d48 = 0;
  _DAT_14cae9d6c = 0xffffffff00000080;
  DAT_14cae9d74 = 0;
  DAT_14cae9d80 = 0;
  DAT_14cae9d88 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9d90);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9d90,4000);
  _DAT_14cae9db8 = 0;
  _DAT_14cae9dc0 = 0;
  _DAT_14cae9dc8 = 0;
  return;
}



// FUNCTION 147ba6636 FUN_147ba6636 body=41 status=ok
// SIG undefined FUN_147ba6636(void)

void FUN_147ba6636(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\GameFramework/LocalMessage.h",0x3d,
                L"Pure virtual not implemented (%s)",L"ULocalMessage::ClientReceive");
  return;
}



// FUNCTION 147ba6676 FUN_147ba6676 body=32 status=ok
// SIG undefined FUN_147ba6676(void)

undefined8 FUN_147ba6676(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147ba6696 FUN_147ba6696 body=45 status=ok
// SIG undefined FUN_147ba6696(void)

longlong FUN_147ba6696(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145812924(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ba66d4 FUN_147ba66d4 body=138 status=ok
// SIG undefined FUN_147ba66d4(void)

code * FUN_147ba66d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightmapVTPackedPageTableUniform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba675e;
}



// FUNCTION 147ba675e FUN_147ba675e body=138 status=ok
// SIG undefined FUN_147ba675e(void)

code * FUN_147ba675e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightMapAdd";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0bac;
}



// FUNCTION 147ba67e8 FUN_147ba67e8 body=138 status=ok
// SIG undefined FUN_147ba67e8(void)

code * FUN_147ba67e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvUniformPenumbraSizes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba6872;
}



// FUNCTION 147ba6872 FUN_147ba6872 body=132 status=ok
// SIG undefined FUN_147ba6872(void)

undefined1 * FUN_147ba6872(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StaticShadowMapMasks";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147ba68f6;
}



// FUNCTION 147ba68fa FUN_147ba68fa body=77 status=ok
// SIG undefined FUN_147ba68fa(void)

void FUN_147ba68fa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1446f470e(param_2 + 1,&DAT_149e01fe8,1);
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 147ba6948 FUN_147ba6948 body=77 status=ok
// SIG undefined FUN_147ba6948(void)

void FUN_147ba6948(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1446f470e(param_2 + 1,&DAT_149e01fe8,1);
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 147ba69ba FUN_147ba69ba body=54 status=ok
// SIG undefined FUN_147ba69ba(void)

undefined1 FUN_147ba69ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ba6ad2(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147ba6a18 FUN_147ba6a18 body=59 status=ok
// SIG undefined FUN_147ba6a18(void)

undefined8 FUN_147ba6a18(longlong *param_1)

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



// FUNCTION 147ba6a5e FUN_147ba6a5e body=38 status=ok
// SIG undefined FUN_147ba6a5e(void)

void FUN_147ba6a5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147ba6ad2 FUN_147ba6ad2 body=189 status=ok
// SIG undefined FUN_147ba6ad2(void)

longlong * FUN_147ba6ad2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
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
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  lVar2 = param_2[5];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[5];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[5] = lVar2;
  lVar2 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[6];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar2;
  lVar2 = param_2[7];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[7];
    }
  }
  param_1[7] = lVar2;
  return param_1;
}



// FUNCTION 147ba6b90 FUN_147ba6b90 body=38 status=ok
// SIG undefined FUN_147ba6b90(void)

undefined8 FUN_147ba6b90(undefined8 param_1,int param_2)

{
  FUN_145caf8e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ba6bbc FUN_147ba6bbc body=33 status=ok
// SIG undefined FUN_147ba6bbc(void)

void FUN_147ba6bbc(undefined8 param_1)

{
  FUN_145caf9d0();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147ba6c12 FUN_147ba6c12 body=478 status=ok
// SIG undefined FUN_147ba6c12(void)

void FUN_147ba6c12(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x50;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x4c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x48 + lVar6) =
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



// FUNCTION 147ba6df2 FUN_147ba6df2 body=257 status=ok
// SIG undefined FUN_147ba6df2(void)

void FUN_147ba6df2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [36];
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  uVar8 = DAT_14c846508;
  uVar7 = DAT_14c846500;
  uVar6 = DAT_14c8464f8;
  uVar5 = DAT_14c8464e8;
  local_40 = DAT_14c846508;
  local_50 = DAT_14c8464f8;
  uStack_48 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0xa0) = 0x42b40000;
  local_50._0_4_ = (undefined4)uVar6;
  local_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_48._0_4_ = (undefined4)uVar7;
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = uVar8;
  *(undefined4 *)(param_1 + 0xa4) = uStack_54;
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)local_50;
  *(undefined4 *)(param_1 + 0xac) = local_50._4_4_;
  *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_48;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  local_50 = uVar6;
  uStack_48 = uVar7;
  FUN_147ba6f0c(param_1 + 8,param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar2 < iVar1) && (iVar3 == iVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba6f0c FUN_147ba6f0c body=136 status=ok
// SIG undefined FUN_147ba6f0c(void)

void FUN_147ba6f0c(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x50) == param_2) {
          FUN_147ba6f94(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x50 + *param_1 + 0x48);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147ba6f94 FUN_147ba6f94 body=95 status=ok
// SIG undefined FUN_147ba6f94(void)

void FUN_147ba6f94(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x48 + lVar5 * 0x50);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x50 + 0x48);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_147ba6ff4();
  return;
}



// FUNCTION 147ba6ff4 FUN_147ba6ff4 body=122 status=ok
// SIG undefined FUN_147ba6ff4(void)

void FUN_147ba6ff4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147ba706e FUN_147ba706e body=52 status=ok
// SIG undefined FUN_147ba706e(void)

void FUN_147ba706e(longlong *param_1)

{
  FUN_147ba70a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ba70a2 FUN_147ba70a2 body=89 status=ok
// SIG undefined FUN_147ba70a2(void)

void FUN_147ba70a2(longlong param_1)

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



// FUNCTION 147ba70fc FUN_147ba70fc body=260 status=ok
// SIG undefined FUN_147ba70fc(void)

double * FUN_147ba70fc(double *param_1,undefined8 *param_2,int param_3)

{
  wchar_t *pwVar1;
  wchar_t *_Str;
  double dVar2;
  
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[6] = 0.0;
  if (param_3 == 6) {
    _Str = L"";
    pwVar1 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      pwVar1 = (wchar_t *)*param_2;
    }
    dVar2 = _wtof(pwVar1);
    *param_1 = (double)(float)dVar2;
    pwVar1 = L"";
    if (*(int *)(param_2 + 3) != 0) {
      pwVar1 = (wchar_t *)param_2[2];
    }
    dVar2 = _wtof(pwVar1);
    param_1[1] = (double)(float)dVar2;
    pwVar1 = L"";
    if (*(int *)(param_2 + 5) != 0) {
      pwVar1 = (wchar_t *)param_2[4];
    }
    dVar2 = _wtof(pwVar1);
    param_1[2] = (double)(float)dVar2;
    pwVar1 = L"";
    if (*(int *)(param_2 + 7) != 0) {
      pwVar1 = (wchar_t *)param_2[6];
    }
    dVar2 = _wtof(pwVar1);
    param_1[4] = (double)(float)dVar2;
    pwVar1 = L"";
    if (*(int *)(param_2 + 9) != 0) {
      pwVar1 = (wchar_t *)param_2[8];
    }
    dVar2 = _wtof(pwVar1);
    param_1[5] = (double)(float)dVar2;
    if (*(int *)(param_2 + 0xb) != 0) {
      _Str = (wchar_t *)param_2[10];
    }
    dVar2 = _wtof(_Str);
    param_1[6] = (double)(float)dVar2;
    *(undefined4 *)(param_1 + 3) = 0x42b40000;
  }
  return param_1;
}



// FUNCTION 147ba7200 FUN_147ba7200 body=365 status=ok
// SIG undefined FUN_147ba7200(void)

undefined4 * FUN_147ba7200(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  char cVar15;
  uint uVar16;
  undefined *puVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147ba736e(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  uVar10 = puVar1[7];
  uVar11 = puVar1[8];
  uVar12 = puVar1[9];
  uVar13 = puVar1[10];
  uVar14 = puVar1[0xb];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar4;
  *(undefined4 *)(local_38 + 2) = uVar5;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar6;
  *(undefined4 *)(local_38 + 3) = uVar7;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar8;
  *(undefined4 *)(local_38 + 4) = uVar9;
  *(undefined4 *)((longlong)local_38 + 0x24) = uVar10;
  *(undefined4 *)(local_38 + 5) = uVar11;
  *(undefined4 *)((longlong)local_38 + 0x2c) = uVar12;
  *(undefined4 *)(local_38 + 6) = uVar13;
  *(undefined4 *)((longlong)local_38 + 0x34) = uVar14;
  local_38[7] = *(undefined8 *)(puVar1 + 0xc);
  *(undefined4 *)(local_38 + 8) = 0xffffffff;
  local_44 = local_40[0];
  uVar20 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar16 = (uint)uVar2 & 0xffff;
  uVar20 = ((uint)uVar2 << 0x10 | uVar16) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar16 >> 4);
  cVar15 = FUN_147ba747c(uVar20,local_38,&local_44);
  uVar4 = local_44;
  if (cVar15 == '\0') {
    uVar16 = DAT_14cae99d8 - DAT_14cae9a04;
    iVar19 = 1;
    if (3 < uVar16) {
      uVar18 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar19 <= DAT_14cae9a18)) {
      uVar20 = DAT_14cae9a18 - 1U & uVar20;
      *(uint *)((longlong)local_38 + 0x44) = uVar20;
      puVar17 = DAT_14cae9a10;
      if (DAT_14cae9a10 == (undefined *)0x0) {
        puVar17 = &DAT_14cae9a08;
      }
      *(undefined4 *)(local_38 + 8) =
           *(undefined4 *)(puVar17 + ((longlong)DAT_14cae9a18 - 1U & (longlong)(int)uVar20) * 4);
      puVar17 = DAT_14cae9a10;
      if (DAT_14cae9a10 == (undefined *)0x0) {
        puVar17 = &DAT_14cae9a08;
      }
      *(undefined4 *)(puVar17 + ((longlong)DAT_14cae9a18 - 1U & (longlong)(int)uVar20) * 4) =
           local_44;
    }
    else {
      DAT_14cae9a18 = iVar19;
      FUN_147ba75a6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba736e FUN_147ba736e body=270 status=ok
// SIG undefined FUN_147ba736e(void)

int * FUN_147ba736e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae9a00;
  iVar4 = DAT_14cae99d8;
  if (DAT_14cae9a04 == 0) {
    iVar2 = DAT_14cae99d8 + 1;
    bVar7 = DAT_14cae99dc == DAT_14cae99d8;
    DAT_14cae99d8 = iVar2;
    if (bVar7) {
      FUN_14021b4e8(&DAT_14cae99d0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae99e0,1);
    puVar3 = DAT_14cae99f0;
    if (DAT_14cae99f0 == (undefined4 *)0x0) {
      puVar3 = &DAT_14cae99e0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar3[iVar5 >> 5] = puVar3[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cae9a00;
    DAT_14cae9a00 = *(int *)(DAT_14cae99d0 + 4 + lVar6 * 0x48);
    DAT_14cae9a04 = DAT_14cae9a04 + -1;
    iVar4 = iVar2;
    if (DAT_14cae9a04 != 0) {
      *(undefined4 *)(DAT_14cae99d0 + (longlong)DAT_14cae9a00 * 0x48) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae99e0;
  if (DAT_14cae99f0 != (undefined4 *)0x0) {
    puVar3 = DAT_14cae99f0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  puVar3[iVar2 >> 5] = puVar3[iVar2 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x48 + DAT_14cae99d0;
  return param_1;
}



// FUNCTION 147ba747c FUN_147ba747c body=170 status=ok
// SIG undefined FUN_147ba747c(void)

undefined8 FUN_147ba747c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined *puVar18;
  
  if ((DAT_14cae99d8 - DAT_14cae9a04 != 1) && (DAT_14cae99d8 != DAT_14cae9a04)) {
    puVar18 = &DAT_14cae9a08;
    if (DAT_14cae9a10 != (undefined *)0x0) {
      puVar18 = DAT_14cae9a10;
    }
    iVar17 = *(int *)(puVar18 + (ulonglong)(DAT_14cae9a18 - 1U & param_1) * 4);
    if (iVar17 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cae99d0 + (longlong)iVar17 * 0x48);
        if (*plVar1 == *param_2) {
          lVar10 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar11 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          lVar12 = param_2[2];
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar13 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          lVar14 = param_2[4];
          uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
          lVar15 = param_2[5];
          uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
          uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
          lVar16 = param_2[7];
          uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
          *(int *)(plVar1 + 6) = (int)param_2[6];
          *(undefined4 *)((longlong)plVar1 + 0x34) = uVar8;
          *(int *)(plVar1 + 7) = (int)lVar16;
          *(undefined4 *)((longlong)plVar1 + 0x3c) = uVar9;
          *(int *)(plVar1 + 4) = (int)lVar14;
          *(undefined4 *)((longlong)plVar1 + 0x24) = uVar6;
          *(int *)(plVar1 + 5) = (int)lVar15;
          *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar7;
          *(int *)(plVar1 + 2) = (int)lVar12;
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar13;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar10;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar11;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_147ba7526(*param_3);
          *param_3 = iVar17;
          return 1;
        }
        iVar17 = (int)plVar1[8];
      } while (iVar17 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ba7526 FUN_147ba7526 body=128 status=ok
// SIG undefined FUN_147ba7526(void)

void FUN_147ba7526(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cae99d0;
  if (DAT_14cae9a04 != 0) {
    *(int *)(DAT_14cae99d0 + (longlong)DAT_14cae9a00 * 0x48) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x48) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cae9a04) {
    iVar4 = DAT_14cae9a00;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x48) = iVar4;
  DAT_14cae9a04 = DAT_14cae9a04 + 1;
  puVar3 = &DAT_14cae99e0;
  if (DAT_14cae99f0 != (undefined4 *)0x0) {
    puVar3 = DAT_14cae99f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cae9a00 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147ba75a6 FUN_147ba75a6 body=514 status=ok
// SIG undefined FUN_147ba75a6(void)

void FUN_147ba75a6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14cae9a10 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cae9a10,0,0,4);
  }
  uVar3 = DAT_14cae9a18;
  uVar2 = local_50;
  if (DAT_14cae9a18 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cae9a08,0,DAT_14cae9a18,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cae9a10;
        if (DAT_14cae9a10 == (undefined *)0x0) {
          puVar6 = &DAT_14cae9a08;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cae9a18 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cae99e0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cae99f8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cae99d0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x48);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cae9a18 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x44 + lVar5 * 0x48) = iVar8;
        puVar6 = DAT_14cae9a10;
        if (DAT_14cae9a10 == (undefined *)0x0) {
          puVar6 = &DAT_14cae9a08;
        }
        *(undefined4 *)(lVar1 + 0x40 + lVar5 * 0x48) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cae9a18 - 1U & uVar9) * 4);
        puVar6 = DAT_14cae9a10;
        if (DAT_14cae9a10 == (undefined *)0x0) {
          puVar6 = &DAT_14cae9a08;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cae9a18 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba77aa FUN_147ba77aa body=582 status=ok
// SIG undefined FUN_147ba77aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ba77aa(undefined8 param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined *local_b8;
  undefined1 local_ac [4];
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  fVar1 = *(float *)(param_2 + 3);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  dVar7 = param_2[6];
  cVar8 = *(char *)(param_2 + 7);
  uStack_a4 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x3c) >> 8);
  uStack_a8 = *(undefined4 *)((longlong)param_2 + 0x39);
  if (((((cVar8 == '\0') && (dVar2 == DAT_14c8464e0)) && (!NAN(dVar2) && !NAN(DAT_14c8464e0))) &&
      (((dVar3 == DAT_14c8464e8 && (!NAN(dVar3) && !NAN(DAT_14c8464e8))) &&
       ((dVar4 == DAT_14c8464f0 && ((!NAN(dVar4) && !NAN(DAT_14c8464f0) && (fVar1 == 90.0)))))))) &&
     ((!NAN(fVar1) &&
      (((((dVar5 == DAT_14c8464f8 && (!NAN(dVar5) && !NAN(DAT_14c8464f8))) &&
         (dVar6 == DAT_14c846500)) &&
        ((!NAN(dVar6) && !NAN(DAT_14c846500) && (dVar7 == DAT_14c846508)))) &&
       (!NAN(dVar7) && !NAN(DAT_14c846508))))))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9a78);
  iVar11 = DAT_14cae9a5c;
  iVar10 = DAT_14cae9a30;
  _DAT_14cae9ae1 = uStack_a8;
  uRam000000014cae9ae5 = uStack_a4;
  local_c0 = &DAT_14cae9aa0;
  local_b8 = &DAT_14cae9aa8;
  DAT_14cae9aa0 = param_1;
  _DAT_14cae9aa8 = dVar2;
  _DAT_14cae9ab0 = dVar3;
  DAT_14cae9ab8 = dVar4;
  DAT_14cae9ac0 = fVar1;
  _DAT_14cae9ac4 = uVar9;
  _DAT_14cae9ac8 = dVar5;
  _DAT_14cae9ad0 = dVar6;
  _DAT_14cae9ad8 = dVar7;
  DAT_14cae9ae0 = cVar8;
  FUN_147ba7a3e(local_ac);
  if (iVar10 == iVar11) {
    FUN_140f9708a(&DAT_14c9647b8,&DAT_14cae9a20);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147ba7a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9a78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
}



// FUNCTION 147ba7a3e FUN_147ba7a3e body=369 status=ok
// SIG undefined FUN_147ba7a3e(void)

undefined4 * FUN_147ba7a3e(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined *puVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147ba7bb0(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar22 = *(ulonglong *)*param_2;
  *local_38 = uVar22;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  uVar14 = puVar1[0xc];
  uVar15 = puVar1[0xd];
  uVar16 = puVar1[0xe];
  uVar17 = puVar1[0xf];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar3;
  *(undefined4 *)(local_38 + 2) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar5;
  *(undefined4 *)(local_38 + 3) = uVar6;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar7;
  *(undefined4 *)(local_38 + 4) = uVar8;
  *(undefined4 *)((longlong)local_38 + 0x24) = uVar9;
  *(undefined4 *)(local_38 + 5) = uVar10;
  *(undefined4 *)((longlong)local_38 + 0x2c) = uVar11;
  *(undefined4 *)(local_38 + 6) = uVar12;
  *(undefined4 *)((longlong)local_38 + 0x34) = uVar13;
  *(undefined4 *)(local_38 + 7) = uVar14;
  *(undefined4 *)((longlong)local_38 + 0x3c) = uVar15;
  *(undefined4 *)(local_38 + 8) = uVar16;
  *(undefined4 *)((longlong)local_38 + 0x44) = uVar17;
  *(undefined4 *)(local_38 + 9) = 0xffffffff;
  local_44 = local_40[0];
  uVar19 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  uVar19 = uVar19 >> 0x10 ^ uVar19;
  cVar18 = FUN_147ba7cc6(uVar19,local_38,&local_44);
  uVar3 = local_44;
  if (cVar18 == '\0') {
    uVar20 = DAT_14cae9a30 - DAT_14cae9a5c;
    iVar23 = 1;
    if (3 < uVar20) {
      uVar22 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar20 < 1) || (iVar23 <= DAT_14cae9a70)) {
      uVar19 = DAT_14cae9a70 - 1U & uVar19;
      *(uint *)((longlong)local_38 + 0x4c) = uVar19;
      puVar21 = DAT_14cae9a68;
      if (DAT_14cae9a68 == (undefined *)0x0) {
        puVar21 = &DAT_14cae9a60;
      }
      *(undefined4 *)(local_38 + 9) =
           *(undefined4 *)(puVar21 + ((longlong)DAT_14cae9a70 - 1U & (longlong)(int)uVar19) * 4);
      puVar21 = DAT_14cae9a68;
      if (DAT_14cae9a68 == (undefined *)0x0) {
        puVar21 = &DAT_14cae9a60;
      }
      *(undefined4 *)(puVar21 + ((longlong)DAT_14cae9a70 - 1U & (longlong)(int)uVar19) * 4) =
           local_44;
    }
    else {
      DAT_14cae9a70 = iVar23;
      FUN_147ba6c12(&DAT_14cae9a28);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba7bb0 FUN_147ba7bb0 body=278 status=ok
// SIG undefined FUN_147ba7bb0(void)

int * FUN_147ba7bb0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae9a58;
  iVar4 = DAT_14cae9a30;
  if (DAT_14cae9a5c == 0) {
    iVar2 = DAT_14cae9a30 + 1;
    bVar7 = DAT_14cae9a34 == DAT_14cae9a30;
    DAT_14cae9a30 = iVar2;
    if (bVar7) {
      FUN_1406fba42(&DAT_14cae9a28,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae9a38,1);
    puVar3 = DAT_14cae9a48;
    if (DAT_14cae9a48 == (undefined *)0x0) {
      puVar3 = &DAT_14cae9a38;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cae9a58;
    DAT_14cae9a58 = *(int *)(DAT_14cae9a28 + 4 + lVar6 * 0x50);
    DAT_14cae9a5c = DAT_14cae9a5c + -1;
    iVar4 = iVar2;
    if (DAT_14cae9a5c != 0) {
      *(undefined4 *)(DAT_14cae9a28 + (longlong)DAT_14cae9a58 * 0x50) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae9a38;
  if (DAT_14cae9a48 != (undefined *)0x0) {
    puVar3 = DAT_14cae9a48;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x50 + DAT_14cae9a28;
  return param_1;
}



// FUNCTION 147ba7cc6 FUN_147ba7cc6 body=158 status=ok
// SIG undefined FUN_147ba7cc6(void)

undefined8 FUN_147ba7cc6(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  int iVar1;
  undefined *puVar2;
  
  if ((DAT_14cae9a30 - DAT_14cae9a5c != 1) && (DAT_14cae9a30 != DAT_14cae9a5c)) {
    puVar2 = &DAT_14cae9a60;
    if (DAT_14cae9a68 != (undefined *)0x0) {
      puVar2 = DAT_14cae9a68;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cae9a70 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        _Dst = (void *)(DAT_14cae9a28 + (longlong)iVar1 * 0x50);
        if (*(longlong *)(DAT_14cae9a28 + (longlong)iVar1 * 0x50) == *param_2) {
          memmove(_Dst,param_2,0x48);
          FUN_147ba6ff4(&DAT_14cae9a28,*param_3);
          *param_3 = iVar1;
          return 1;
        }
        iVar1 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ba7d64 FUN_147ba7d64 body=138 status=ok
// SIG undefined FUN_147ba7d64(void)

code * FUN_147ba7d64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_PackedTangentsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba7dee;
}



// FUNCTION 147ba7dee FUN_147ba7dee body=138 status=ok
// SIG undefined FUN_147ba7dee(void)

code * FUN_147ba7dee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_PreSkinPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba7e78;
}



// FUNCTION 147ba7e78 FUN_147ba7e78 body=138 status=ok
// SIG undefined FUN_147ba7e78(void)

code * FUN_147ba7e78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fce58c;
}



// FUNCTION 147ba7f02 FUN_147ba7f02 body=138 status=ok
// SIG undefined FUN_147ba7f02(void)

code * FUN_147ba7f02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LODLightmapDataIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba7f8c;
}



// FUNCTION 147ba7f8c FUN_147ba7f8c body=138 status=ok
// SIG undefined FUN_147ba7f8c(void)

code * FUN_147ba7f8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinBaseVertexIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fce508;
}



// FUNCTION 147ba8016 FUN_147ba8016 body=138 status=ok
// SIG undefined FUN_147ba8016(void)

code * FUN_147ba8016(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSkinPassThroughPreviousPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145db06f8;
}



// FUNCTION 147ba80c8 FUN_147ba80c8 body=54 status=ok
// SIG undefined FUN_147ba80c8(void)

undefined1 FUN_147ba80c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147ba8220(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147ba8126 FUN_147ba8126 body=148 status=ok
// SIG undefined FUN_147ba8126(void)

void FUN_147ba8126(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = ((uint)(param_2[1] >> 0x14) & 0xffff ^ (uint)(param_2[1] >> 4)) * -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  FUN_144a78877(uVar1 >> 0x10 ^ uVar1,uVar2 >> 0x10 ^ uVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba8220 FUN_147ba8220 body=91 status=ok
// SIG undefined FUN_147ba8220(void)

longlong * FUN_147ba8220(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
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
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147ba827c FUN_147ba827c body=88 status=ok
// SIG undefined FUN_147ba827c(void)

undefined8 * FUN_147ba827c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147ba82d4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147ba82d4 FUN_147ba82d4 body=98 status=ok
// SIG undefined FUN_147ba82d4(void)

void FUN_147ba82d4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ba8336 FUN_147ba8336 body=79 status=ok
// SIG undefined FUN_147ba8336(void)

undefined8 * FUN_147ba8336(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147ba8386(param_1,iVar1);
      FUN_147ba83e6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147ba8386 FUN_147ba8386 body=96 status=ok
// SIG undefined FUN_147ba8386(void)

void FUN_147ba8386(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 2,2);
    iVar1 = (int)(uVar2 >> 1);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,2,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ba83e6 FUN_147ba83e6 body=30 status=ok
// SIG undefined FUN_147ba83e6(void)

void FUN_147ba83e6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined2 *)(param_1 + lVar1 * 2) = *(undefined2 *)(param_2 + lVar1 * 2);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 147ba8404 FUN_147ba8404 body=206 status=ok
// SIG undefined FUN_147ba8404(void)

longlong * FUN_147ba8404(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  }
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1417246d8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 << 4);
  }
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_147ba82d4(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 << 4);
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 147ba84d2 FUN_147ba84d2 body=81 status=ok
// SIG undefined FUN_147ba84d2(void)

void FUN_147ba84d2(longlong *param_1,int param_2)

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
          FUN_147ba8524(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147ba8524 FUN_147ba8524 body=87 status=ok
// SIG undefined FUN_147ba8524(void)

void FUN_147ba8524(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147ba857c();
  return;
}



// FUNCTION 147ba857c FUN_147ba857c body=114 status=ok
// SIG undefined FUN_147ba857c(void)

void FUN_147ba857c(longlong *param_1,int param_2)

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



// FUNCTION 147ba85ee FUN_147ba85ee body=307 status=ok
// SIG undefined FUN_147ba85ee(void)

undefined4 * FUN_147ba85ee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147ba8722(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar8 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar5 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_147ba8808(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ba8888(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba8722 FUN_147ba8722 body=230 status=ok
// SIG undefined FUN_147ba8722(void)

int * FUN_147ba8722(longlong *param_1,int *param_2)

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



// FUNCTION 147ba8808 FUN_147ba8808 body=128 status=ok
// SIG undefined FUN_147ba8808(void)

undefined8 FUN_147ba8808(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147ba857c(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ba8888 FUN_147ba8888 body=419 status=ok
// SIG undefined FUN_147ba8888(void)

void FUN_147ba8888(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 147ba8a2c FUN_147ba8a2c body=29 status=ok
// SIG undefined FUN_147ba8a2c(void)

undefined8 FUN_147ba8a2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ba8a64 FUN_147ba8a64 body=29 status=ok
// SIG undefined FUN_147ba8a64(void)

bool FUN_147ba8a64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ba8a82 FUN_147ba8a82 body=26 status=ok
// SIG undefined FUN_147ba8a82(void)

bool FUN_147ba8a82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ba8a9c FUN_147ba8a9c body=24 status=ok
// SIG undefined FUN_147ba8a9c(void)

bool FUN_147ba8a9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ba8ab4 FUN_147ba8ab4 body=101 status=ok
// SIG undefined FUN_147ba8ab4(void)

void FUN_147ba8ab4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a9c4070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ba8b1a FUN_147ba8b1a body=101 status=ok
// SIG undefined FUN_147ba8b1a(void)

void FUN_147ba8b1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a9c4070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ba8b80 FUN_147ba8b80 body=134 status=ok
// SIG undefined FUN_147ba8b80(void)

void FUN_147ba8b80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9c4070;
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
                    /* WARNING: Could not recover jumptable at 0x000147ba8bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ba8c06 FUN_147ba8c06 body=39 status=ok
// SIG undefined FUN_147ba8c06(void)

void FUN_147ba8c06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ba8c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147ba8c2e FUN_147ba8c2e body=146 status=ok
// SIG undefined FUN_147ba8c2e(void)

bool FUN_147ba8c2e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
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
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba8cc2 FUN_147ba8cc2 body=132 status=ok
// SIG undefined FUN_147ba8cc2(void)

void FUN_147ba8cc2(longlong param_1,int param_2)

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



// FUNCTION 147ba8d48 FUN_147ba8d48 body=38 status=ok
// SIG undefined FUN_147ba8d48(void)

undefined8 FUN_147ba8d48(undefined8 param_1,int param_2)

{
  FUN_14079057a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ba8d6e FUN_147ba8d6e body=302 status=ok
// SIG undefined FUN_147ba8d6e(void)

undefined4 * FUN_147ba8d6e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147ba8e9e(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5);
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
    FUN_147ba8f84(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba8e9e FUN_147ba8e9e body=230 status=ok
// SIG undefined FUN_147ba8e9e(void)

int * FUN_147ba8e9e(longlong *param_1,int *param_2)

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



// FUNCTION 147ba8f84 FUN_147ba8f84 body=474 status=ok
// SIG undefined FUN_147ba8f84(void)

void FUN_147ba8f84(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147ba9160 FUN_147ba9160 body=56 status=ok
// SIG undefined FUN_147ba9160(void)

undefined8 * FUN_147ba9160(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9c40e0;
  FUN_144725486();
  FUN_1463e994c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ba9198 FUN_147ba9198 body=38 status=ok
// SIG undefined FUN_147ba9198(void)

undefined8 FUN_147ba9198(undefined8 param_1,int param_2)

{
  FUN_1463e994c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ba91be FUN_147ba91be body=88 status=ok
// SIG undefined FUN_147ba91be(void)

undefined8 * FUN_147ba91be(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x14,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147ba2ec2(puVar1,param_1);
  FUN_1474409b8((longlong)puVar1 + 0xc,param_1,L"bIsGPUSkinPassThrough",0);
  return puVar1;
}



// FUNCTION 147ba9216 FUN_147ba9216 body=88 status=ok
// SIG undefined FUN_147ba9216(void)

undefined8 * FUN_147ba9216(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x14,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147ba2ec2(puVar1,param_1);
  FUN_1474409b8((longlong)puVar1 + 0xc,param_1,L"bIsGPUSkinPassThrough",0);
  return puVar1;
}



// FUNCTION 147ba926e FUN_147ba926e body=88 status=ok
// SIG undefined FUN_147ba926e(void)

undefined8 * FUN_147ba926e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x14,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147ba2ec2(puVar1,param_1);
  FUN_1474409b8((longlong)puVar1 + 0xc,param_1,L"bIsGPUSkinPassThrough",0);
  return puVar1;
}



// FUNCTION 147ba92c6 FUN_147ba92c6 body=420 status=ok
// SIG undefined FUN_147ba92c6(void)

longlong * FUN_147ba92c6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147ba9534(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = FUN_14280e057(param_1,lVar3 + lVar6 + -8);
      FUN_14280e057(uVar4,lVar3 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_147ba9534(param_2), 0 < (int)local_3c)) {
      iVar5 = 0;
      do {
        lVar6 = FUN_147ba946c(param_2);
        uVar4 = FUN_14280e057(param_1,lVar6);
        FUN_14280e057(uVar4,lVar6 + 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba946c FUN_147ba946c body=59 status=ok
// SIG undefined FUN_147ba946c(void)

longlong FUN_147ba946c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ba94ae(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147ba94a7(lVar2);
  return lVar2;
}



// FUNCTION 147ba94a7 FUN_147ba94a7 body=7 status=ok
// SIG undefined FUN_147ba94a7(void)

void FUN_147ba94a7(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147ba94ae FUN_147ba94ae body=132 status=ok
// SIG undefined FUN_147ba94ae(void)

void FUN_147ba94ae(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ba9534 FUN_147ba9534 body=95 status=ok
// SIG undefined FUN_147ba9534(void)

void FUN_147ba9534(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 147ba9594 FUN_147ba9594 body=107 status=ok
// SIG undefined FUN_147ba9594(void)

longlong * FUN_147ba9594(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a799b0();
  FUN_14123d74c(uVar2,param_1,1,0x30,uVar1 | 0x90200000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147ba9600 FUN_147ba9600 body=154 status=ok
// SIG undefined FUN_147ba9600(void)

void FUN_147ba9600(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cae9de8 != DAT_14cae9e14) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cae9e18;
    if (DAT_14cae9e20 != (undefined *)0x0) {
      puVar3 = DAT_14cae9e20;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cae9e28 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14cae9de0 + (longlong)iVar1 * 0x28 + 0x20)) {
      if (*(ulonglong *)(DAT_14cae9de0 + (longlong)iVar1 * 0x28) == param_2) goto LAB_147ba9616;
    }
  }
  iVar1 = -1;
LAB_147ba9616:
  *param_1 = iVar1;
  return;
}



// FUNCTION 147ba969a FUN_147ba969a body=154 status=ok
// SIG undefined FUN_147ba969a(void)

void FUN_147ba969a(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cae9cb0 != DAT_14cae9cdc) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cae9ce0;
    if (DAT_14cae9ce8 != (undefined *)0x0) {
      puVar3 = DAT_14cae9ce8;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cae9cf0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cae9ca8 + 0x18)) {
      if (*(ulonglong *)(DAT_14cae9ca8 + (longlong)iVar1 * 0x20) == param_2) goto LAB_147ba96b0;
    }
  }
  iVar1 = -1;
LAB_147ba96b0:
  *param_1 = iVar1;
  return;
}



// FUNCTION 147ba9734 FUN_147ba9734 body=154 status=ok
// SIG undefined FUN_147ba9734(void)

void FUN_147ba9734(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cae9c10 != DAT_14cae9c3c) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cae9c40;
    if (DAT_14cae9c48 != (undefined *)0x0) {
      puVar3 = DAT_14cae9c48;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cae9c50 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14cae9c08 + (longlong)iVar1 * 0x28 + 0x20)) {
      if (*(ulonglong *)(DAT_14cae9c08 + (longlong)iVar1 * 0x28) == param_2) goto LAB_147ba974a;
    }
  }
  iVar1 = -1;
LAB_147ba974a:
  *param_1 = iVar1;
  return;
}



// FUNCTION 147ba97ce FUN_147ba97ce body=154 status=ok
// SIG undefined FUN_147ba97ce(void)

void FUN_147ba97ce(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cae9d48 != DAT_14cae9d74) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cae9d78;
    if (DAT_14cae9d80 != (undefined *)0x0) {
      puVar3 = DAT_14cae9d80;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cae9d88 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14cae9d40 + (longlong)iVar1 * 0x28 + 0x20)) {
      if (*(ulonglong *)(DAT_14cae9d40 + (longlong)iVar1 * 0x28) == param_2) goto LAB_147ba97e4;
    }
  }
  iVar1 = -1;
LAB_147ba97e4:
  *param_1 = iVar1;
  return;
}



// FUNCTION 147ba9868 FUN_147ba9868 body=48 status=ok
// SIG undefined FUN_147ba9868(void)

void FUN_147ba9868(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,2,2);
  }
  return;
}



// FUNCTION 147ba9898 FUN_147ba9898 body=290 status=ok
// SIG undefined FUN_147ba9898(void)

longlong * FUN_147ba9898(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) * 2,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
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
      FUN_147ba9868(param_2);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x800000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147ba8386(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 * 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba99bc FUN_147ba99bc body=131 status=ok
// SIG undefined FUN_147ba99bc(void)

longlong FUN_147ba99bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147ba9a3f();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147ba9e0e(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147ba9a3f FUN_147ba9a3f body=667 status=ok
// SIG undefined FUN_147ba9a3f(void)

longlong * FUN_147ba9a3f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_1402ac1b3(param_1,lVar5 + (longlong)iVar8 * 0x50);
        FUN_147ba480e(param_1,lVar5 + (longlong)iVar8 * 0x50 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145cab516(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147ba9d20(param_2,&local_90);
        puVar3 = local_88 + 2;
        local_88[6] = 0;
        local_88[7] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[8] = 0;
        *(undefined4 *)(local_88 + 9) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        FUN_147ba480e(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ba9cdc FUN_147ba9cdc body=68 status=ok
// SIG undefined FUN_147ba9cdc(void)

void FUN_147ba9cdc(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147ba9e0e(param_1);
  return;
}



// FUNCTION 147ba9d20 FUN_147ba9d20 body=238 status=ok
// SIG undefined FUN_147ba9d20(void)

int * FUN_147ba9d20(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 147ba9e0e FUN_147ba9e0e body=450 status=ok
// SIG undefined FUN_147ba9e0e(void)

void FUN_147ba9e0e(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x50;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar10) =
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



// FUNCTION 147ba9fd2 FUN_147ba9fd2 body=131 status=ok
// SIG undefined FUN_147ba9fd2(void)

longlong FUN_147ba9fd2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147baa055();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147baa404(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147baa055 FUN_147baa055 body=644 status=ok
// SIG undefined FUN_147baa055(void)

longlong * FUN_147baa055(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_1402ac1b3(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_147cac0bb(param_1,lVar5 + (longlong)iVar8 * 0x20 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145cab0c0(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147baa31e(param_2,&local_90);
        puVar3 = local_88 + 2;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        FUN_147cac0bb(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147baa2da FUN_147baa2da body=68 status=ok
// SIG undefined FUN_147baa2da(void)

void FUN_147baa2da(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147baa404(param_1);
  return;
}



// FUNCTION 147baa31e FUN_147baa31e body=229 status=ok
// SIG undefined FUN_147baa31e(void)

int * FUN_147baa31e(longlong *param_1,int *param_2)

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



// FUNCTION 147baa404 FUN_147baa404 body=449 status=ok
// SIG undefined FUN_147baa404(void)

void FUN_147baa404(longlong *param_1)

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
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
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



// FUNCTION 147baa5c6 FUN_147baa5c6 body=131 status=ok
// SIG undefined FUN_147baa5c6(void)

longlong FUN_147baa5c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147baa649();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147baa9f8(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147baa649 FUN_147baa649 body=644 status=ok
// SIG undefined FUN_147baa649(void)

longlong * FUN_147baa649(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_1402ac1b3(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_147cacf85(param_1,lVar5 + (longlong)iVar8 * 0x20 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145cab044(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147baa912(param_2,&local_90);
        puVar3 = local_88 + 2;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        FUN_147cacf85(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147baa8ce FUN_147baa8ce body=68 status=ok
// SIG undefined FUN_147baa8ce(void)

void FUN_147baa8ce(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147baa9f8(param_1);
  return;
}



// FUNCTION 147baa912 FUN_147baa912 body=229 status=ok
// SIG undefined FUN_147baa912(void)

int * FUN_147baa912(longlong *param_1,int *param_2)

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



// FUNCTION 147baa9f8 FUN_147baa9f8 body=449 status=ok
// SIG undefined FUN_147baa9f8(void)

void FUN_147baa9f8(longlong *param_1)

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
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
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



// FUNCTION 147baabba FUN_147baabba body=131 status=ok
// SIG undefined FUN_147baabba(void)

longlong FUN_147baabba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147baac3d();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147baaff2(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147baac3d FUN_147baac3d body=710 status=ok
// SIG undefined FUN_147baac3d(void)

longlong * FUN_147baac3d(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xd0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xd0);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar6 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar6;
      do {
        lVar7 = *local_b0;
        FUN_1402ac1b3(param_1,lVar7 + (longlong)iVar8 * 0xd0);
        FUN_14356843a(param_1,lVar7 + (longlong)iVar8 * 0xd0 + 0x10);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar6 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145cab212(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar6 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_147baaf04(param_2,&local_b0);
        puVar3 = local_a8 + 2;
        *local_a8 = 0;
        local_a8[1] = 0;
        *(undefined4 *)(local_a8 + 2) = 0xffffffff;
        puVar9 = &DAT_14c846400;
        puVar10 = local_a8 + 4;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        local_a8[0x14] = 0;
        local_a8[0x15] = 0;
        local_a8[0x16] = 0;
        *(undefined4 *)(local_a8 + 0x18) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        FUN_14356843a(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar6 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar6;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147baaf04 FUN_147baaf04 body=237 status=ok
// SIG undefined FUN_147baaf04(void)

int * FUN_147baaf04(longlong *param_1,int *param_2)

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
      FUN_1471dad4a(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xd0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xd0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xd0 + *param_1;
  return param_2;
}



// FUNCTION 147baaff2 FUN_147baaff2 body=455 status=ok
// SIG undefined FUN_147baaff2(void)

void FUN_147baaff2(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0xd0;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc4 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc0 + lVar10) =
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



// FUNCTION 147bab1ba FUN_147bab1ba body=68 status=ok
// SIG undefined FUN_147bab1ba(void)

void FUN_147bab1ba(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147bab1fe(param_1);
  return;
}



// FUNCTION 147bab1fe FUN_147bab1fe body=450 status=ok
// SIG undefined FUN_147bab1fe(void)

void FUN_147bab1fe(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x50;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar10) =
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



// FUNCTION 147bab3c2 FUN_147bab3c2 body=131 status=ok
// SIG undefined FUN_147bab3c2(void)

longlong FUN_147bab3c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147bab445();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147bab1fe(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147bab445 FUN_147bab445 body=667 status=ok
// SIG undefined FUN_147bab445(void)

longlong * FUN_147bab445(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_1402ac1b3(param_1,lVar5 + (longlong)iVar8 * 0x50);
        FUN_147ba5460(param_1,lVar5 + (longlong)iVar8 * 0x50 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145cab394(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147bab6e2(param_2,&local_90);
        puVar3 = local_88 + 2;
        local_88[8] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        *(undefined8 *)((longlong)local_88 + 0x29) = 0;
        *(undefined8 *)((longlong)local_88 + 0x31) = 0;
        *(undefined4 *)(local_88 + 9) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        FUN_147ba5460(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bab6e2 FUN_147bab6e2 body=238 status=ok
// SIG undefined FUN_147bab6e2(void)

int * FUN_147bab6e2(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 147bab7d0 FUN_147bab7d0 body=131 status=ok
// SIG undefined FUN_147bab7d0(void)

longlong FUN_147bab7d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147bab853();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147babbbe(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147bab853 FUN_147bab853 body=621 status=ok
// SIG undefined FUN_147bab853(void)

longlong * FUN_147bab853(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar5 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar6 = local_78._4_4_;
      local_78 = uVar5;
      do {
        FUN_1402ac1b3(param_1,(longlong)iVar6 * 0x1c + *local_90);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar4,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_145cab196(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar5 = local_78;
    if (0 < (int)local_60) {
      iVar6 = 0;
      do {
        FUN_147babac2(param_2,&local_90);
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined1 *)(local_88 + 2) = 0;
        *(undefined4 *)((longlong)local_88 + 0x14) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = local_78;
      } while (iVar6 < (int)local_60);
    }
  }
  local_78 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147babac2 FUN_147babac2 body=251 status=ok
// SIG undefined FUN_147babac2(void)

int * FUN_147babac2(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 147babbbe FUN_147babbbe body=453 status=ok
// SIG undefined FUN_147babbbe(void)

void FUN_147babbbe(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = FUN_1447addd0(lVar3 + lVar4,0x10);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147babd84 FUN_147babd84 body=307 status=ok
// SIG undefined FUN_147babd84(void)

undefined4 * FUN_147babd84(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ba9d20(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  lVar10 = param_3[1];
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  FUN_147ba8404(local_40 + 4,lVar10);
  local_40[0x12] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_1447addd0(local_40,0x10);
  cVar5 = FUN_147babeb8(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[0x13] = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[0x12] =
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
      FUN_147ba9e0e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147babeb8 FUN_147babeb8 body=118 status=ok
// SIG undefined FUN_147babeb8(void)

undefined8 FUN_147babeb8(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_147babf2e(), iVar2 != -1)) {
    lVar1 = *param_1;
    FUN_147ba50d2((longlong)iVar2 * 0x50 + lVar1 + 0x10);
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x50),param_3,0x48);
    FUN_147babfa6(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 147babf2e FUN_147babf2e body=119 status=ok
// SIG undefined FUN_147babf2e(void)

int FUN_147babf2e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x50;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147babfa6 FUN_147babfa6 body=122 status=ok
// SIG undefined FUN_147babfa6(void)

void FUN_147babfa6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147bac020 FUN_147bac020 body=93 status=ok
// SIG undefined FUN_147bac020(void)

undefined8 FUN_147bac020(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147bac07e(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147bac0f2(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147bac07e FUN_147bac07e body=115 status=ok
// SIG undefined FUN_147bac07e(void)

int FUN_147bac07e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bac0f2 FUN_147bac0f2 body=114 status=ok
// SIG undefined FUN_147bac0f2(void)

void FUN_147bac0f2(longlong *param_1,int param_2)

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



// FUNCTION 147bac164 FUN_147bac164 body=305 status=ok
// SIG undefined FUN_147bac164(void)

undefined4 * FUN_147bac164(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147baa31e(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_147bac020(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147baa404(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bac296 FUN_147bac296 body=115 status=ok
// SIG undefined FUN_147bac296(void)

int FUN_147bac296(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bac30a FUN_147bac30a body=139 status=ok
// SIG undefined FUN_147bac30a(void)

longlong FUN_147bac30a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147bac396();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0xd0;
    if (lVar3 + lVar2 != 0) goto LAB_147bac346;
  }
  local_30 = param_3;
  FUN_147bac410(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0xd0;
LAB_147bac346:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bac396 FUN_147bac396 body=121 status=ok
// SIG undefined FUN_147bac396(void)

int FUN_147bac396(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0xd0;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0xc0);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bac410 FUN_147bac410 body=373 status=ok
// SIG undefined FUN_147bac410(void)

void FUN_147bac410(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [40];
  undefined4 *local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined4 local_f8;
  undefined8 local_e8 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_2;
  FUN_147baaf04(param_1,local_108);
  local_f8 = 0xffffffff;
  puVar10 = &DAT_14c846400;
  puVar11 = local_e8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  puVar1 = (undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_100 = *puVar1;
  local_100[1] = uVar2;
  local_100[2] = uVar3;
  local_100[3] = uVar4;
  local_100[4] = 0xffffffff;
  FUN_147bac586(local_100 + 8);
  local_100[0x30] = 0xffffffff;
  cVar5 = FUN_143569462(param_1,param_3,local_100,local_108);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_100[0x31] = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_100[0x30] =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_108[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147baaff2(param_1);
    }
  }
  *local_110 = local_108[0];
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bac586 FUN_147bac586 body=119 status=ok
// SIG undefined FUN_147bac586(void)

void * FUN_147bac586(void *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  memcpy(param_1,param_2,0x88);
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x90);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(int *)((longlong)param_1 + 0x90) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_147ba8386((undefined8 *)((longlong)param_1 + 0x88),iVar1,0);
    FUN_147ba83e6(*(undefined8 *)((longlong)param_1 + 0x88),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147bac5fe FUN_147bac5fe body=122 status=ok
// SIG undefined FUN_147bac5fe(void)

void FUN_147bac5fe(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xd0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0 + 4) = uVar5;
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



// FUNCTION 147bac678 FUN_147bac678 body=318 status=ok
// SIG undefined FUN_147bac678(void)

undefined4 * FUN_147bac678(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bab6e2(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  lVar10 = param_3[1];
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  FUN_147bac7b8(local_40 + 4,lVar10);
  *(undefined8 *)(local_40 + 0x10) = *(undefined8 *)(lVar10 + 0x30);
  local_40[0x12] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_1447addd0(local_40,0x10);
  cVar5 = FUN_1435694de(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[0x13] = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[0x12] =
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
      FUN_147bab1fe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bac7b8 FUN_147bac7b8 body=172 status=ok
// SIG undefined FUN_147bac7b8(void)

undefined8 * FUN_147bac7b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 147bac864 FUN_147bac864 body=119 status=ok
// SIG undefined FUN_147bac864(void)

int FUN_147bac864(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x50;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bac8dc FUN_147bac8dc body=122 status=ok
// SIG undefined FUN_147bac8dc(void)

void FUN_147bac8dc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147bac956 FUN_147bac956 body=123 status=ok
// SIG undefined FUN_147bac956(void)

int FUN_147bac956(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bac9d2 FUN_147bac9d2 body=108 status=ok
// SIG undefined FUN_147bac9d2(void)

void FUN_147bac9d2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 147baca3e FUN_147baca3e body=54 status=ok
// SIG undefined FUN_147baca3e(void)

void FUN_147baca3e(longlong *param_1)

{
  FUN_147baca74(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147baca74 FUN_147baca74 body=131 status=ok
// SIG undefined FUN_147baca74(void)

void FUN_147baca74(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0x7fffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147bacaf8 FUN_147bacaf8 body=322 status=ok
// SIG undefined FUN_147bacaf8(void)

void FUN_147bacaf8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 147bacc3c FUN_147bacc3c body=444 status=ok
// SIG undefined FUN_147bacc3c(void)

void FUN_147bacc3c(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = FUN_147bacdf9(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
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



// FUNCTION 147bacdf9 FUN_147bacdf9 body=346 status=ok
// SIG undefined FUN_147bacdf9(void)

uint FUN_147bacdf9(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = ((uint)(param_1[6] >> 0x14) & 0xffff ^ (uint)(param_1[6] >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = ((uint)(param_1[5] >> 0x14) & 0xffff ^ (uint)(param_1[5] >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)(param_1[4] >> 0x14) & 0xffff ^ (uint)(param_1[4] >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = ((uint)(param_1[1] >> 0x14) & 0xffff ^ (uint)(param_1[1] >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar4 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  return (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 +
         ((uVar5 >> 2) + uVar5 * 0x40 + -0x61c88647 +
          ((uVar3 >> 2) + uVar3 * 0x40 + -0x61c88647 +
           ((uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + (uVar1 >> 0x10 ^ uVar1) ^ uVar2) ^ uVar3) ^
         uVar5) ^ uVar4;
}



// FUNCTION 147bacf54 FUN_147bacf54 body=312 status=ok
// SIG undefined FUN_147bacf54(void)

undefined4 * FUN_147bacf54(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bad08e(param_1,local_48);
  *(undefined8 *)(local_40 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  uVar9 = param_3[9];
  uVar10 = param_3[10];
  uVar11 = param_3[0xb];
  local_40[8] = param_3[8];
  local_40[9] = uVar9;
  local_40[10] = uVar10;
  local_40[0xb] = uVar11;
  local_40[4] = uVar5;
  local_40[5] = uVar6;
  local_40[6] = uVar7;
  local_40[7] = uVar8;
  *local_40 = uVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar13 = FUN_147bacdf9(local_40);
  cVar12 = FUN_147bad174(param_1,uVar13,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar12 == '\0') {
    uVar14 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar16 = 1;
    if (3 < uVar14) {
      uVar15 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar16 <= *(int *)(param_1 + 0x48))) {
      uVar13 = *(int *)(param_1 + 0x48) - 1U & uVar13;
      local_40[0xf] = uVar13;
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(undefined4 *)
            (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4);
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar16;
      FUN_147bacc3c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bad08e FUN_147bad08e body=229 status=ok
// SIG undefined FUN_147bad08e(void)

int * FUN_147bad08e(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 147bad174 FUN_147bad174 body=111 status=ok
// SIG undefined FUN_147bad174(void)

undefined8 FUN_147bad174(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_147bad1e4(), iVar15 != -1)) {
    lVar2 = *param_1;
    lVar16 = (longlong)iVar15 * 0x40;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined8 *)(lVar2 + 0x30 + lVar16) = *(undefined8 *)(param_3 + 0xc);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar16);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar16);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar16);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147bad250(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 147bad1e4 FUN_147bad1e4 body=107 status=ok
// SIG undefined FUN_147bad1e4(void)

int FUN_147bad1e4(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_147bad2c2(lVar1 + (longlong)iVar4 * 0x40,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bad250 FUN_147bad250 body=114 status=ok
// SIG undefined FUN_147bad250(void)

void FUN_147bad250(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 147bad2c2 FUN_147bad2c2 body=74 status=ok
// SIG undefined FUN_147bad2c2(void)

undefined8 FUN_147bad2c2(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1[6] >> 8),param_1[6] == param_2[6]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147bad30c FUN_147bad30c body=71 status=ok
// SIG undefined FUN_147bad30c(void)

void FUN_147bad30c(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar1 + -4) = 0x105;
      *(undefined1 *)((longlong)puVar1 + -2) = 0;
      puVar1[-2] = &PTR_FUN_14a9bb400;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147bad354 FUN_147bad354 body=143 status=ok
// SIG undefined FUN_147bad354(void)

void FUN_147bad354(longlong param_1,int param_2)

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



// FUNCTION 147bad3e4 FUN_147bad3e4 body=132 status=ok
// SIG undefined FUN_147bad3e4(void)

void FUN_147bad3e4(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147bad468(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147bad468 FUN_147bad468 body=87 status=ok
// SIG undefined FUN_147bad468(void)

void FUN_147bad468(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147bad4c0();
  return;
}



// FUNCTION 147bad4c0 FUN_147bad4c0 body=114 status=ok
// SIG undefined FUN_147bad4c0(void)

void FUN_147bad4c0(longlong *param_1,int param_2)

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



// FUNCTION 147bad532 FUN_147bad532 body=326 status=ok
// SIG undefined FUN_147bad532(void)

undefined4 * FUN_147bad532(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bad67a(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147bad760(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_147bad7e0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bad67a FUN_147bad67a body=230 status=ok
// SIG undefined FUN_147bad67a(void)

int * FUN_147bad67a(longlong *param_1,int *param_2)

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



// FUNCTION 147bad760 FUN_147bad760 body=128 status=ok
// SIG undefined FUN_147bad760(void)

undefined8 FUN_147bad760(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_147bad4c0((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bad7e0 FUN_147bad7e0 body=474 status=ok
// SIG undefined FUN_147bad7e0(void)

void FUN_147bad7e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147bad9bc FUN_147bad9bc body=38 status=ok
// SIG undefined FUN_147bad9bc(void)

undefined8 FUN_147bad9bc(undefined8 param_1,int param_2)

{
  FUN_145dc6142();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bad9e8 FUN_147bad9e8 body=33 status=ok
// SIG undefined FUN_147bad9e8(void)

void FUN_147bad9e8(undefined8 param_1)

{
  FUN_145dc61d4();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147bada3a FUN_147bada3a body=38 status=ok
// SIG undefined FUN_147bada3a(void)

undefined8 FUN_147bada3a(undefined8 param_1,int param_2)

{
  FUN_145ca7dac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bada66 FUN_147bada66 body=33 status=ok
// SIG undefined FUN_147bada66(void)

void FUN_147bada66(undefined8 param_1)

{
  FUN_145ca7e2c();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147badabc FUN_147badabc body=38 status=ok
// SIG undefined FUN_147badabc(void)

undefined8 FUN_147badabc(undefined8 param_1,int param_2)

{
  FUN_145ca807c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147badae8 FUN_147badae8 body=33 status=ok
// SIG undefined FUN_147badae8(void)

void FUN_147badae8(undefined8 param_1)

{
  FUN_145ca80fc();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147badb3e FUN_147badb3e body=38 status=ok
// SIG undefined FUN_147badb3e(void)

undefined8 FUN_147badb3e(undefined8 param_1,int param_2)

{
  FUN_145ca834c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147badb6a FUN_147badb6a body=33 status=ok
// SIG undefined FUN_147badb6a(void)

void FUN_147badb6a(undefined8 param_1)

{
  FUN_145ca83cc();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147baded0 FUN_147baded0 body=75 status=ok
// SIG undefined FUN_147baded0(void)

void FUN_147baded0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14356a15a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147badf22 FUN_147badf22 body=7 status=ok
// SIG undefined FUN_147badf22(void)

undefined1 FUN_147badf22(void)

{
  return DAT_14caea070;
}



// FUNCTION 147badf29 FUN_147badf29 body=77 status=ok
// SIG undefined FUN_147badf29(void)

longlong FUN_147badf29(longlong *param_1,int param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] < 1) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar4 * 8);
      if (*(int *)(lVar1 + 0x24) == param_2) {
        lVar3 = lVar2;
        if (param_4 != '\0') {
          lVar3 = lVar1;
        }
        if (*(char *)(lVar1 + 0x20) != '\x04') {
          lVar3 = lVar2;
        }
        lVar2 = lVar3;
        if (*(char *)(lVar1 + 0x20) == param_3) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)param_1[1] != lVar4);
  }
  return lVar2;
}



// FUNCTION 147badf7c FUN_147badf7c body=68 status=ok
// SIG undefined FUN_147badf7c(void)

void FUN_147badf7c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_147bbe8c6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147badfc2 FUN_147badfc2 body=638 status=ok
// SIG undefined FUN_147badfc2(void)

void FUN_147badfc2(longlong param_1,longlong param_2,longlong *param_3,char param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int iStack_c0;
  int iStack_bc;
  int local_b8 [2];
  undefined8 uStack_b0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 8) = 0;
  local_e0 = param_3;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_1400821c8(param_2,0);
  }
  plVar2 = local_e0;
  FUN_144716727(*local_e0,(int)local_e0[1]);
  *(undefined4 *)(plVar2 + 1) = 0;
  if (*(int *)((longlong)plVar2 + 0xc) != 0) {
    FUN_1403b10bc(plVar2,0);
  }
  if (0 < (longlong)*(int *)(param_1 + 600)) {
    lVar10 = 0;
    lVar4 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x250) + lVar10 * 8);
      if (*(int *)(lVar8 + 0x24) == param_5) {
        if (*(char *)(lVar8 + 0x20) == '\x04') {
          lVar4 = lVar8;
        }
        if (*(char *)(lVar8 + 0x20) == param_4) break;
      }
      lVar8 = lVar4;
      lVar10 = lVar10 + 1;
      lVar4 = lVar8;
    } while (*(int *)(param_1 + 600) != lVar10);
    if (lVar8 != 0) {
      lVar4 = 8;
      do {
        *(undefined8 *)((longlong)&iStack_c0 + lVar4) = 0;
        *(undefined4 *)((longlong)local_b8 + lVar4) = 0;
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x78);
      uVar12 = 0;
      piVar9 = (int *)&uStack_b0;
      iVar7 = 0;
      local_d8 = param_1;
      do {
        FUN_14017c93e(lVar8,&local_c8,uVar12 & 0xffffffff);
        piVar9[-2] = (int)local_c8;
        piVar9[-1] = local_c8._4_4_;
        *piVar9 = iStack_c0;
        piVar9[1] = iStack_bc;
        iVar7 = iVar7 + *piVar9;
        uVar12 = uVar12 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 7);
      FUN_1403b0d30(local_e0,iVar7);
      lVar10 = 0;
      lVar4 = local_d8;
      do {
        local_d0 = lVar10;
        if ((longlong)*(int *)(&uStack_b0 + lVar10 * 2) != 0) {
          lVar11 = (&uStack_b0)[lVar10 * 2 + -1];
          lVar10 = (longlong)*(int *)(&uStack_b0 + lVar10 * 2) * 0x1c;
          do {
            local_c8 = 0;
            FUN_14017ca90(lVar11,lVar4,lVar8,&local_c8);
            if (local_c8 != 0) {
              iVar3 = FUN_14473b328(param_2);
              iVar7 = (int)local_e0[1];
              if (iVar7 <= iVar3) {
                uVar6 = (iVar3 - iVar7) + 1;
                *(int *)(local_e0 + 1) = iVar3 + 1;
                if ((uint)(*(int *)((longlong)local_e0 + 0xc) - iVar7) < uVar6) {
                  FUN_140bfc2d4();
                }
                memset((void *)((longlong)iVar7 * 0x10 + *local_e0),0,(longlong)(int)uVar6 << 4);
                lVar4 = local_d8;
              }
              lVar1 = *local_e0;
              lVar5 = (longlong)iVar3 * 0x10;
              iVar7 = *(int *)(lVar1 + 8 + lVar5);
              *(uint *)(lVar1 + 8 + lVar5) = iVar7 + 1U;
              if (*(uint *)(lVar1 + 0xc + lVar5) < iVar7 + 1U) {
                FUN_1446f48e2((longlong *)(lVar1 + lVar5),iVar7);
              }
              *(undefined4 *)(*(longlong *)(lVar1 + lVar5) + (longlong)iVar7 * 4) =
                   *(undefined4 *)(lVar11 + 0x14);
            }
            lVar11 = lVar11 + 0x1c;
            lVar10 = lVar10 + -0x1c;
          } while (lVar10 != 0);
        }
        lVar10 = local_d0 + 1;
      } while (lVar10 != 7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae27c FUN_147bae27c body=73 status=ok
// SIG undefined FUN_147bae27c(void)

void FUN_147bae27c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_147bb1dac(param_2,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae2e8 FUN_147bae2e8 body=361 status=ok
// SIG undefined FUN_147bae2e8(void)

undefined8 FUN_147bae2e8(longlong param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 1;
    }
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 == 0) {
    uVar3 = DAT_14caec4b4 | *(uint *)(param_1 + 0xb8) | 1 << ((byte)DAT_14c760db4 & 0x1f);
    do {
      uVar6 = -uVar3 & uVar3;
      iVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      if (uVar6 == 0) {
        iVar1 = 0;
      }
      if (0 < (int)*(uint *)(param_1 + 600)) {
        uVar7 = 0;
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x250) + uVar7 * 8);
          if (*(int *)(lVar4 + 0x24) == iVar1) {
            if (*(char *)(lVar4 + 0x20) == '\x04') {
              lVar5 = lVar4;
            }
            if (*(char *)(lVar4 + 0x20) == DAT_14cb0cc00) break;
          }
          lVar4 = lVar5;
          uVar7 = uVar7 + 1;
          lVar5 = lVar4;
        } while (*(uint *)(param_1 + 600) != uVar7);
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x28) & 8) == 0)) {
          return 0;
        }
      }
      bVar8 = uVar6 != uVar3;
      uVar3 = uVar6 ^ uVar3;
    } while (bVar8);
  }
  return 1;
}



// FUNCTION 147bae452 FUN_147bae452 body=432 status=ok
// SIG undefined FUN_147bae452(void)

void FUN_147bae452(longlong param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2[1] == 0 && param_2[2] == 0) && param_2[3] == 0) && *param_2 == 0) {
    CoCreateGuid((GUID *)(param_1 + 0x224));
  }
  else {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) ^ *param_2;
    *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) ^ param_2[1];
    *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) ^ param_2[2];
    *(uint *)(param_1 + 0x230) = *(uint *)(param_1 + 0x230) ^ param_2[3];
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer();
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_147bae566;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 == 0) {
    local_38 = *(longlong *)(param_1 + 0x250);
    iVar1 = *(int *)(param_1 + 600);
    if ((longlong)iVar1 == 0) {
      local_30 = 0;
    }
    else {
      lVar3 = 0;
      do {
        FUN_14357cf58();
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
      local_38 = *(longlong *)(param_1 + 0x250);
      local_30 = *(undefined4 *)(param_1 + 600);
    }
    *(undefined8 *)(param_1 + 0x250) = 0;
    local_2c = *(undefined4 *)(param_1 + 0x25c);
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_1403b9c84(&local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
LAB_147bae566:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bae604 FUN_147bae604 body=97 status=ok
// SIG undefined FUN_147bae604(void)

void FUN_147bae604(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14caea020;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(char *)(lVar1 + uVar3) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147bae65e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoCreateGuid((GUID *)(param_1 + 0x224));
  return;
}



// FUNCTION 147bae665 FUN_147bae665 body=114 status=ok
// SIG undefined FUN_147bae665(void)

undefined4 FUN_147bae665(undefined4 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = (param_2 & 0xffff) - (ulonglong)((uint)(param_2 >> 1) & 0x5555);
  uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
  uVar1 = 7;
  if ((char)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01') {
    uVar1 = param_1;
  }
  if (((uint)param_2 & 0xfff) != 0x800) {
    uVar1 = param_1;
  }
  return uVar1;
}



// FUNCTION 147bae6d8 FUN_147bae6d8 body=69 status=ok
// SIG undefined FUN_147bae6d8(void)

void FUN_147bae6d8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 600);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x250);
    lVar3 = 0;
    do {
      FUN_147bc167a(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147bae720 FUN_147bae720 body=84 status=ok
// SIG undefined FUN_147bae720(void)

undefined8 FUN_147bae720(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)(*(ulonglong *)(lVar1 + 0x468) >> 8),
                    (*(ulonglong *)(lVar1 + 0x468) >> ((ulonglong)param_2 & 0x3f) & 1) != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae776 FUN_147bae776 body=100 status=ok
// SIG undefined FUN_147bae776(void)

void FUN_147bae776(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  switchD_143c3d4dc::caseD_38();
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_14484255c(param_2,0xd0);
  }
  iVar1 = *(int *)(param_1 + 600);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x250);
    lVar3 = 0;
    do {
      FUN_147bc1236(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147bae7e0 FUN_147bae7e0 body=77 status=ok
// SIG undefined FUN_147bae7e0(void)

void FUN_147bae7e0(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae832 FUN_147bae832 body=37 status=ok
// SIG undefined FUN_147bae832(void)

bool FUN_147bae832(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x3a) & 0x10) == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x408))();
    bVar2 = 1 < uVar1;
  }
  return bVar2;
}



// FUNCTION 147bae858 FUN_147bae858 body=55 status=ok
// SIG undefined FUN_147bae858(void)

undefined8 FUN_147bae858(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x408))();
  if (((uint)uVar1 < 2) ||
     (uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)((longlong)param_1 + 0x18b)) &
              0xfffffffffffffffe, (char)uVar2 != '\x04')) {
    uVar1 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(char)param_1[0x3a]) & 0xffffffffffffff20;
    uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
  }
  return uVar1;
}



// FUNCTION 147bae890 FUN_147bae890 body=76 status=ok
// SIG undefined FUN_147bae890(void)

undefined8 FUN_147bae890(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x460)) &
          0xffffffffffffff02;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae8de FUN_147bae8de body=74 status=ok
// SIG undefined FUN_147bae8de(void)

ulonglong FUN_147bae8de(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x461)) &
           0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae92a FUN_147bae92a body=77 status=ok
// SIG undefined FUN_147bae92a(void)

undefined8 FUN_147bae92a(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x460)) &
          0xffffffffffffff40;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae978 FUN_147bae978 body=75 status=ok
// SIG undefined FUN_147bae978(void)

byte FUN_147bae978(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *(byte *)(lVar1 + 0x460) >> 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bae9f8 FUN_147bae9f8 body=115 status=ok
// SIG undefined FUN_147bae9f8(void)

ulonglong FUN_147bae9f8(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_14473b0f0();
  if (cVar1 != '\0') {
    uVar2 = 0;
    if (param_2 < 0x23) {
      if ((0x1d00c1006U >> ((ulonglong)param_2 & 0x3f) & 1) == 0) {
        if ((ulonglong)param_2 == 0x22) {
          uVar2 = (ulonglong)(*(byte *)(param_1 + 0x1d6) >> 4);
          goto LAB_147baea4a;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    if (param_2 - 0x14 < 8) {
      uVar2 = 1;
      if ((*(byte *)(param_1 + 0x1d6) & 0x10) == 0) {
        uVar2 = (ulonglong)((int)(param_2 - 0x14) < *(int *)(param_1 + 400));
      }
    }
  }
LAB_147baea4a:
  return uVar2 & 0xffffff01;
}



// FUNCTION 147baea74 FUN_147baea74 body=1837 status=ok
// SIG undefined FUN_147baea74(void)

ulonglong FUN_147baea74(longlong *param_1,uint param_2,longlong *param_3)

{
  byte bVar1;
  uint3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint7 uVar9;
  ulonglong uVar8;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  undefined1 auStack_88 [42];
  byte local_5e;
  undefined1 local_5d;
  byte local_5c;
  char local_5b;
  ushort local_5a;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5b = FUN_147bae9f8();
  local_5c = (**(code **)(*param_1 + 0x428))(param_1);
  local_5e = (**(code **)(*param_1 + 0x488))(param_1);
  local_5d = (**(code **)(*param_3 + 0x418))(param_3);
  if ((char)param_1[0x25] == '\x04') {
    bVar10 = true;
    if ((*(byte *)((longlong)param_1 + 0x1d9) & 1) == 0) {
      bVar10 = (char)param_1[0x3b] == '\x05';
    }
  }
  else {
    bVar10 = false;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x1c2);
  uVar5 = (**(code **)(*param_3 + 0x550))(param_3);
  uVar8 = (ulonglong)uVar5;
  bVar11 = *(byte *)((longlong)param_1 + 0x18b);
  (**(code **)(*param_3 + 0x410))(param_3,&local_5a);
  uVar6 = (**(code **)(*param_3 + 0x408))(param_3);
  lVar7 = param_1[0x25];
  cVar4 = FUN_14473b0f0();
  uVar2 = (uint3)(uVar5 >> 8);
  uVar9 = (uint7)uVar2;
  switch((char)lVar7) {
  case '\x01':
    if (cVar4 == '\0') {
      uVar8 = CONCAT71(uVar9,1);
      if (((param_2 - 0x14 < 8) || (param_2 == 0xc)) || (param_2 == 0x22))
      goto switchD_147baed1a_caseD_20;
      if (uVar6 == 2) {
        if (0x21 < param_2) goto switchD_147baed1a_caseD_3;
        uVar8 = 0x2000405e3;
      }
      else if (uVar6 == 5) {
        if (0x21 < param_2) {
switchD_147baed1a_caseD_3:
          uVar8 = 0;
          goto switchD_147baed1a_caseD_20;
        }
        uVar8 = 0x2000001e3;
      }
      else {
        if (uVar6 != 4 || 0x21 < param_2) goto switchD_147baed1a_caseD_3;
        uVar8 = 0x2000005e3;
      }
      uVar8 = uVar8 >> ((byte)param_2 & 0x3f);
      goto switchD_147baed1a_caseD_20;
    }
    uVar8 = CONCAT71(uVar9,1);
    if (param_2 == 0x12) goto switchD_147baed1a_caseD_20;
    goto LAB_147baebcf;
  case '\x02':
    if (cVar4 == '\0') {
      bVar10 = param_2 == 0;
      goto LAB_147baebe9;
    }
    goto LAB_147baebe6;
  case '\x03':
    if (cVar4 == '\0') {
      if (param_2 < 0x13) {
        uVar8 = (ulonglong)(0x48021 >> ((byte)param_2 & 0x1f));
        goto switchD_147baed1a_caseD_20;
      }
      goto switchD_147baed1a_caseD_3;
    }
LAB_147baebe6:
    bVar10 = param_2 == 0x1e;
    goto LAB_147baebe9;
  case '\x04':
    if (cVar4 == '\0') {
      if (param_2 != 0) {
        uVar8 = (ulonglong)CONCAT31(uVar2,param_2 == 1 & bVar10);
        goto switchD_147baed1a_caseD_20;
      }
      goto switchD_147baed1a_caseD_c;
    }
LAB_147baebcf:
    uVar8 = CONCAT71(uVar9,1);
    if (param_2 != 0x1e) {
      bVar10 = param_2 == 1 && uVar6 == 5;
LAB_147baebe9:
      uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar10);
    }
    goto switchD_147baed1a_caseD_20;
  case '\x05':
    uVar8 = CONCAT71(uVar9,1);
    if (cVar4 == '\0') {
      if ((int)param_2 < 2) {
        if ((param_2 == 0) ||
           ((param_2 == 1 && ((4 < uVar6 || ((0x13U >> (uVar6 & 0x1f) & 1) == 0))))))
        goto switchD_147baed1a_caseD_20;
      }
      else {
        if (param_2 == 0xc) goto switchD_147baed1a_caseD_20;
LAB_147baed41:
        if ((param_2 == 2) && (uVar6 == 1)) goto switchD_147baed1a_caseD_20;
      }
    }
    else if ((int)param_2 < 0xc) {
      if (param_2 != 1) goto LAB_147baed41;
      if (uVar6 == 5) goto switchD_147baed1a_caseD_20;
    }
    else if ((param_2 == 0xc) || (param_2 == 0x1e)) goto switchD_147baed1a_caseD_20;
    uVar8 = (ulonglong)CONCAT31(uVar2,param_2 - 0x14 < 8);
    goto switchD_147baed1a_caseD_20;
  default:
    bVar3 = (byte)(local_5a >> 8);
    if (cVar4 != '\0') {
      if (local_5b == '\0') goto switchD_147baed1a_caseD_3;
      if ((int)param_2 < 0x12) {
        bVar11 = uVar6 == 5;
        if (param_2 != 1) {
          if (param_2 == 2) {
            bVar11 = uVar6 == 1;
          }
          else {
            bVar11 = 0;
            if (param_2 == 0xc) goto switchD_147baec54_caseD_1e;
          }
        }
      }
      else {
        bVar11 = 0;
        switch(param_2) {
        case 0x12:
          bVar11 = (local_5a & 1) == 0;
          break;
        case 0x13:
          if ((((uVar6 < 2) || (cVar4 = FUN_147bc8126(uVar6), cVar4 != '\0')) ||
              (cVar4 = FUN_1449279a5(uVar6), cVar4 != '\0')) || (bVar11 = 1, (bVar1 & 0x10) == 0)) {
            bVar11 = bVar3 >> 2 & 1;
          }
          break;
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1d:
        case 0x21:
          break;
        case 0x1c:
          bVar11 = local_5e | uVar6 < 2;
          break;
        case 0x1e:
        case 0x22:
switchD_147baec54_caseD_1e:
          bVar11 = 1;
          break;
        case 0x1f:
          bVar11 = local_5c;
          break;
        case 0x20:
          bVar11 = (byte)uVar5;
          break;
        default:
          bVar11 = 0;
        }
      }
      bVar10 = param_2 - 0x14 < 8;
LAB_147baec62:
      uVar8 = (ulonglong)CONCAT31(uVar2,bVar10 | bVar11);
      goto switchD_147baed1a_caseD_20;
    }
    if (0x20 < param_2) {
switchD_147baed1a_caseD_c:
      uVar8 = CONCAT71(uVar9,1);
      goto switchD_147baed1a_caseD_20;
    }
  }
  switch(param_2) {
  case 0:
    uVar5 = FUN_147bc8126(uVar6);
    uVar8 = (ulonglong)uVar5 ^ 1;
    break;
  case 1:
    if (uVar6 < 2) {
LAB_147baefab:
      bVar11 = bVar3 >> 2 & 1;
    }
    else {
      cVar4 = FUN_1449279a5(uVar6);
      bVar11 = 1;
      if (cVar4 != '\0') goto LAB_147baefab;
    }
    bVar10 = (local_5a & 0x36c) != 0;
    goto LAB_147baec62;
  case 2:
    bVar10 = uVar6 == 1;
    goto LAB_147baebe9;
  case 3:
  case 4:
  case 0x1e:
  case 0x1f:
    goto switchD_147baed1a_caseD_3;
  case 5:
  case 0x12:
    bVar10 = (local_5a & 1) == 0;
    goto LAB_147baebe9;
  case 6:
  case 7:
  case 8:
    uVar8 = (ulonglong)CONCAT31(uVar2,(uVar6 < 2 || 3 < bVar11) && (local_5a & 1) == 0);
    break;
  case 9:
    local_58 = (undefined8 *)0x0;
    local_50 = 2;
    bVar10 = false;
    FUN_14470b5ae(&local_58,2,0);
    *local_58 = 0x400000001;
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        bVar10 = (local_5a >> (*(uint *)((longlong)local_58 + lVar7) & 0x1f) & 1) != 0;
        if (bVar10) break;
        bVar12 = (longlong)local_50 * 4 + -4 != lVar7;
        lVar7 = lVar7 + 4;
      } while (bVar12);
    }
    goto LAB_147baf098;
  case 10:
    uVar8 = (ulonglong)
            CONCAT31(uVar2,((uVar6 < 2 || (bVar11 & 0xfd) != 0) && (local_5a & 1) == 0) |
                           (bVar1 & 0x10) >> 4);
    break;
  case 0xb:
    local_58 = (undefined8 *)0x0;
    local_50 = 2;
    bVar10 = false;
    FUN_14470b5ae(&local_58,2,0);
    *local_58 = 0x400000001;
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        bVar10 = (local_5a >> (*(uint *)((longlong)local_58 + lVar7) & 0x1f) & 1) != 0;
        if (bVar10) break;
        bVar12 = (longlong)local_50 * 4 + -4 != lVar7;
        lVar7 = lVar7 + 4;
      } while (bVar12);
    }
LAB_147baf098:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    uVar8 = (ulonglong)(byte)(bVar10 & (uVar6 < 2 || 3 < bVar11));
    break;
  default:
    goto switchD_147baed1a_caseD_c;
  case 0xf:
    local_58 = (undefined8 *)0x0;
    local_50 = 4;
    uVar8 = 0;
    FUN_14470b5ae(&local_58,4,0);
    *(undefined4 *)local_58 = 2;
    *(undefined4 *)((longlong)local_58 + 4) = 3;
    *(undefined4 *)(local_58 + 1) = 6;
    *(undefined4 *)((longlong)local_58 + 0xc) = 8;
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        bVar10 = (local_5a >> (*(uint *)((longlong)local_58 + lVar7) & 0x1f) & 1) != 0;
        uVar8 = (ulonglong)bVar10;
        if (bVar10) break;
        bVar10 = (longlong)local_50 * 4 + -4 != lVar7;
        lVar7 = lVar7 + 4;
      } while (bVar10);
    }
    goto LAB_147baf147;
  case 0x10:
    local_58 = (undefined8 *)0x0;
    local_50 = 5;
    uVar8 = 0;
    FUN_14470b5ae(&local_58,5,0);
    *(undefined4 *)local_58 = 4;
    *(undefined4 *)((longlong)local_58 + 4) = 7;
    *(undefined4 *)(local_58 + 1) = 8;
    *(undefined4 *)((longlong)local_58 + 0xc) = 9;
    *(undefined4 *)(local_58 + 2) = 5;
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        bVar10 = (local_5a >> (*(uint *)((longlong)local_58 + lVar7) & 0x1f) & 1) != 0;
        uVar8 = (ulonglong)bVar10;
        if (bVar10) break;
        bVar10 = (longlong)local_50 * 4 + -4 != lVar7;
        lVar7 = lVar7 + 4;
      } while (bVar10);
    }
    goto LAB_147baf147;
  case 0x11:
    local_58 = (undefined8 *)0x0;
    local_50 = 2;
    uVar8 = 0;
    FUN_14470b5ae(&local_58,2,0);
    *local_58 = 0x900000004;
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        bVar10 = (local_5a >> (*(uint *)((longlong)local_58 + lVar7) & 0x1f) & 1) != 0;
        uVar8 = (ulonglong)bVar10;
        if (bVar10) break;
        bVar10 = (longlong)local_50 * 4 + -4 != lVar7;
        lVar7 = lVar7 + 4;
      } while (bVar10);
    }
LAB_147baf147:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 0x13:
    if (((uVar6 < 2) || (cVar4 = FUN_147bc8126(uVar6), cVar4 != '\0')) ||
       ((cVar4 = FUN_1449279a5(uVar6), cVar4 != '\0' ||
        (uVar8 = CONCAT71(uVar9,1), (bVar1 & 0x10) == 0)))) {
      uVar8 = (ulonglong)(local_5a >> 10 & 1);
    }
    break;
  case 0x1c:
    uVar8 = CONCAT71(0x14a9cf1,local_5e | uVar6 < 2) & 0xffffffff;
    break;
  case 0x1d:
    uVar8 = CONCAT71((int7)((ulonglong)
                            ((longlong)&switchD_147baed1a::switchdataD_14a9cf1a4 +
                            (longlong)(int)(&switchD_147baed1a::switchdataD_14a9cf1a4)[param_2]) >>
                           8),local_5d) & 0xffffffff;
    break;
  case 0x20:
    break;
  }
switchD_147baed1a_caseD_20:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 147baf1ec FUN_147baf1ec body=102 status=ok
// SIG undefined FUN_147baf1ec(void)

void FUN_147baf1ec(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c8);
  iVar2 = *(int *)(param_2 + 8) + iVar1;
  if (-1 < iVar2) {
    if (*(int *)(param_2 + 0xc) < iVar2) {
      FUN_140504644(param_2);
      iVar1 = *(int *)(param_1 + 0x3c8);
    }
    if (iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x3c0);
      lVar3 = (longlong)iVar1 * 0x18;
      do {
        FUN_140c608a8(param_2,lVar4);
        lVar4 = lVar4 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 147baf254 FUN_147baf254 body=102 status=ok
// SIG undefined FUN_147baf254(void)

void FUN_147baf254(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x3e0);
  iVar2 = *(int *)(param_2 + 8) + iVar1;
  if (-1 < iVar2) {
    if (*(int *)(param_2 + 0xc) < iVar2) {
      FUN_140504644(param_2);
      iVar1 = *(int *)(param_1 + 0x3e0);
    }
    if (iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x3d8);
      lVar3 = (longlong)iVar1 * 0x18;
      do {
        FUN_140c608a8(param_2,lVar4);
        lVar4 = lVar4 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 147baf2bc FUN_147baf2bc body=851 status=ok
// SIG undefined FUN_147baf2bc(void)

void FUN_147baf2bc(longlong param_1,char param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [33];
  undefined4 local_47;
  undefined3 uStack_43;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\x03') {
    lVar10 = (longlong)param_3 * 0x28 + *(longlong *)(param_1 + 0x340);
    lVar8 = FUN_14479d2ce(lVar10);
    if (lVar8 == 0) {
      if (*(longlong *)(lVar10 + 8) != 0) {
        plVar1 = (longlong *)(lVar10 + 8);
        lVar8 = FUN_140007850();
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar8 == 0) || (cVar7 == '\0')) {
          FUN_14485c47a(lVar10,lVar8);
          if (lVar8 != 0) goto LAB_147baf3f3;
        }
        else {
          uVar3 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar10,lVar8);
          }
LAB_147baf3f3:
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_147baf306;
        }
        if (*plVar1 != 0) {
          FUN_140081d40(plVar1,0);
          lVar8 = FUN_14479d2ce(lVar10);
          if (lVar8 != 0) goto LAB_147baf306;
          if (*plVar1 != 0) {
            lVar8 = FUN_140007850();
            cVar7 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar8 == 0) || (cVar7 == '\0')) {
              FUN_14485c47a(lVar10,lVar8);
              if (lVar8 == 0) goto LAB_147baf45e;
            }
            else {
              uVar3 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(lVar10,lVar8);
              }
            }
            if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_147baf306;
          }
        }
      }
LAB_147baf45e:
      lVar8 = 0;
    }
    else {
LAB_147baf306:
      lVar10 = FUN_144a7937e();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_147baf45e;
    }
    *param_4 = lVar8;
    *(undefined4 *)(param_4 + 1) = local_40;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_3c;
    *(undefined4 *)(param_4 + 2) = uStack_38;
    *(undefined4 *)((longlong)param_4 + 0x14) = uStack_34;
    param_4[3] = local_30;
    *(undefined1 *)(param_4 + 4) = 3;
    *(undefined4 *)((longlong)param_4 + 0x21) = local_47;
    *(uint *)((longlong)param_4 + 0x24) = CONCAT31(uStack_43,local_47._3_1_);
    goto switchD_147baf38e_caseD_3;
  }
  switch(param_2) {
  case '\0':
    *(undefined4 *)param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f0) + (longlong)param_3 * 4)
    ;
    *(undefined1 *)(param_4 + 4) = 0;
    lVar8 = *(longlong *)(param_1 + 0x2d0);
    goto LAB_147baf3ae;
  case '\x01':
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 800) + (longlong)param_3 * 0x10);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)param_4 = *puVar2;
    *(undefined4 *)((longlong)param_4 + 4) = uVar4;
    *(undefined4 *)(param_4 + 1) = uVar5;
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar6;
    *(undefined1 *)(param_4 + 4) = 1;
    lVar8 = *(longlong *)(param_1 + 0x2e0);
LAB_147baf3ae:
    *(undefined4 *)(param_4 + 5) = *(undefined4 *)(lVar8 + (longlong)param_3 * 4);
    break;
  case '\x02':
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x330) + (longlong)param_3 * 0x20);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x330) + 0x10 + (longlong)param_3 * 0x20);
    lVar8 = *plVar1;
    lVar10 = plVar1[1];
    *(undefined4 *)param_4 = *puVar2;
    *(undefined4 *)((longlong)param_4 + 4) = uVar4;
    *(undefined4 *)(param_4 + 1) = uVar5;
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar6;
    param_4[2] = lVar8;
    param_4[3] = lVar10;
    *(undefined1 *)(param_4 + 4) = 2;
    break;
  case '\x04':
    lVar8 = FUN_147baf610((longlong)param_3 * 0x28 + *(longlong *)(param_1 + 0x350));
    *param_4 = lVar8;
    *(undefined1 *)(param_4 + 4) = 4;
    break;
  case '\x05':
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x370) + (longlong)param_3 * 4);
    lVar8 = FUN_147baf68c((longlong)param_3 * 0x28 + *(longlong *)(param_1 + 0x360));
    *param_4 = lVar8;
    *(undefined4 *)(param_4 + 1) = uVar4;
    *(undefined1 *)(param_4 + 4) = 5;
    break;
  case '\x06':
    lVar8 = FUN_147b07efc((longlong)param_3 * 0x28 + *(longlong *)(param_1 + 0x380));
    *param_4 = lVar8;
    *(undefined1 *)(param_4 + 4) = 6;
    break;
  case '\a':
    lVar8 = FUN_147baf64e((longlong)param_3 * 0x28 + *(longlong *)(param_1 + 0x390));
    *param_4 = lVar8;
    *(undefined1 *)(param_4 + 4) = 7;
    break;
  case '\b':
    *(undefined1 *)param_4 = *(undefined1 *)(*(longlong *)(param_1 + 0x300) + (longlong)param_3);
    *(undefined1 *)(param_4 + 4) = 8;
    *(undefined1 *)((longlong)param_4 + 0x2c) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x310) + (longlong)param_3);
  }
switchD_147baf38e_caseD_3:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147baf610 FUN_147baf610 body=61 status=ok
// SIG undefined FUN_147baf610(void)

longlong FUN_147baf610(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_14588a6f4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147baf64e FUN_147baf64e body=61 status=ok
// SIG undefined FUN_147baf64e(void)

longlong FUN_147baf64e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1411c531a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147baf68c FUN_147baf68c body=61 status=ok
// SIG undefined FUN_147baf68c(void)

longlong FUN_147baf68c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_140259bea();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147baf6ca FUN_147baf6ca body=298 status=ok
// SIG undefined FUN_147baf6ca(void)

void FUN_147baf6ca(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = &DAT_14caea250;
  if ((byte)param_2 < 9) {
    plVar5 = (longlong *)((ulonglong)((param_2 & 0xff) * 0x50) + param_1);
  }
  uVar6 = (int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34);
  uVar1 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  uVar3 = uVar1 + uVar6;
  if (uVar1 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_147bb27a2(param_3,uVar3);
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
    if (((int)param_3[9] == 0) || ((int)param_3[9] < iVar2)) {
      *(int *)(param_3 + 9) = iVar2;
      FUN_147bb2946(param_3);
    }
  }
  if (0 < (int)uVar6) {
    lVar7 = 0;
    uVar4 = 0;
    do {
      local_58 = *plVar5 + lVar7;
      FUN_147bb2b42(param_3,&local_4c,&local_58);
      FUN_147baf2bc(param_1,param_2,uVar4 & 0xffffffff,*param_3 + (longlong)local_4c * 0x48 + 0x10);
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar6 != uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147baf836 FUN_147baf836 body=45 status=ok
// SIG undefined FUN_147baf836(void)

longlong FUN_147baf836(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14096a268(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147baf864 FUN_147baf864 body=45 status=ok
// SIG undefined FUN_147baf864(void)

longlong FUN_147baf864(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14096a268(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147354560 FUN_147354560 body=270 status=ok
// SIG undefined FUN_147354560(void)

int * FUN_147354560(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar3 = DAT_14ca75d30;
  iVar5 = DAT_14ca75d08;
  if (DAT_14ca75d34 == 0) {
    iVar3 = DAT_14ca75d08 + 1;
    bVar8 = DAT_14ca75d0c == DAT_14ca75d08;
    DAT_14ca75d08 = iVar3;
    if (bVar8) {
      FUN_140171ad2(&DAT_14ca75d00,iVar5);
    }
    lVar7 = (longlong)iVar5;
    iVar3 = FUN_144a54ea4(&DAT_14ca75d10,1);
    puVar4 = DAT_14ca75d20;
    if (DAT_14ca75d20 == (undefined8 *)0x0) {
      puVar4 = &DAT_14ca75d10;
    }
    iVar6 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar6 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)puVar4 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar7 = (longlong)DAT_14ca75d30;
    DAT_14ca75d30 = *(int *)(DAT_14ca75d00 + 4 + lVar7 * 0x14);
    DAT_14ca75d34 = DAT_14ca75d34 + -1;
    iVar5 = iVar3;
    if (DAT_14ca75d34 != 0) {
      *(undefined4 *)(DAT_14ca75d00 + (longlong)DAT_14ca75d30 * 0x14) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14ca75d10;
  if (DAT_14ca75d20 != (undefined8 *)0x0) {
    puVar4 = DAT_14ca75d20;
  }
  iVar3 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar3 = iVar5;
  }
  puVar1 = (uint *)((longlong)puVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  *param_1 = iVar5;
  *(longlong *)(param_1 + 2) = lVar7 * 0x14 + DAT_14ca75d00;
  return param_1;
}



// FUNCTION 14735466e FUN_14735466e body=149 status=ok
// SIG undefined FUN_14735466e(void)

undefined8 FUN_14735466e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((DAT_14ca75d08 - DAT_14ca75d34 != 1) && (DAT_14ca75d08 != DAT_14ca75d34)) {
    puVar4 = &DAT_14ca75d38;
    if (DAT_14ca75d40 != (undefined *)0x0) {
      puVar4 = DAT_14ca75d40;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14ca75d48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca75d00 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_2) {
          lVar2 = *param_2;
          *(int *)(plVar1 + 1) = (int)param_2[1];
          *plVar1 = lVar2;
          FUN_147354704(*param_3);
          *param_3 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147354704 FUN_147354704 body=128 status=ok
// SIG undefined FUN_147354704(void)

void FUN_147354704(int param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar3 = DAT_14ca75d00;
  if (DAT_14ca75d34 != 0) {
    *(int *)(DAT_14ca75d00 + (longlong)DAT_14ca75d30 * 0x14) = param_1;
  }
  *(undefined4 *)(lVar3 + (longlong)param_1 * 0x14) = 0xffffffff;
  iVar5 = -1;
  if (0 < DAT_14ca75d34) {
    iVar5 = DAT_14ca75d30;
  }
  *(int *)(lVar3 + 4 + (longlong)param_1 * 0x14) = iVar5;
  DAT_14ca75d34 = DAT_14ca75d34 + 1;
  puVar4 = &DAT_14ca75d10;
  if (DAT_14ca75d20 != (undefined8 *)0x0) {
    puVar4 = DAT_14ca75d20;
  }
  iVar5 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar5 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  puVar1 = (uint *)((longlong)puVar4 + (longlong)(iVar5 >> 5) * 4);
  DAT_14ca75d30 = param_1;
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147354784 FUN_147354784 body=320 status=ok
// SIG undefined FUN_147354784(void)

undefined4 * FUN_147354784(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147354560(local_48);
  puVar1 = (undefined1 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  iVar6 = FUN_144a788f7();
  uVar10 = iVar6 + (int)((ulonglong)uVar2 >> 0x20);
  cVar5 = FUN_14735466e(uVar10,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = DAT_14ca75d08 - DAT_14ca75d34;
    iVar6 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar6 <= DAT_14ca75d48)) {
      uVar10 = DAT_14ca75d48 - 1U & uVar10;
      *(uint *)(local_40 + 2) = uVar10;
      puVar8 = DAT_14ca75d40;
      if (DAT_14ca75d40 == (undefined *)0x0) {
        puVar8 = &DAT_14ca75d38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14ca75d48 - 1U & (longlong)(int)uVar10) * 4);
      puVar8 = DAT_14ca75d40;
      if (DAT_14ca75d40 == (undefined *)0x0) {
        puVar8 = &DAT_14ca75d38;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14ca75d48 - 1U & (longlong)(int)uVar10) * 4) =
           local_4c;
    }
    else {
      DAT_14ca75d48 = iVar6;
      FUN_147354232();
    }
  }
  *param_1 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473548c6 FUN_1473548c6 body=68 status=ok
// SIG undefined FUN_1473548c6(void)

void FUN_1473548c6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14735490a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14735490a FUN_14735490a body=322 status=ok
// SIG undefined FUN_14735490a(void)

void FUN_14735490a(longlong *param_1)

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



// FUNCTION 147354a4e FUN_147354a4e body=344 status=ok
// SIG undefined FUN_147354a4e(void)

undefined4 *
FUN_147354a4e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14725d788(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14725d86e(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14725d5ac(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147354ba8 FUN_147354ba8 body=24 status=ok
// SIG undefined FUN_147354ba8(void)

void FUN_147354ba8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147354bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147354bc0 FUN_147354bc0 body=29 status=ok
// SIG undefined FUN_147354bc0(void)

undefined8 FUN_147354bc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147354bde FUN_147354bde body=132 status=ok
// SIG undefined FUN_147354bde(void)

void FUN_147354bde(longlong param_1,int param_2)

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



// FUNCTION 147354c63 FUN_147354c63 body=56 status=ok
// SIG undefined FUN_147354c63(void)

void FUN_147354c63(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147354c9c FUN_147354c9c body=85 status=ok
// SIG undefined FUN_147354c9c(void)

void FUN_147354c9c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a33c350;
  param_1 = param_1 + 0x26;
  lVar1 = -0x180;
  do {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1459c8bf6(param_1);
    param_1 = param_1 + -0x18;
    lVar1 = lVar1 + 0xc0;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 147354cf2 FUN_147354cf2 body=804 status=ok
// SIG undefined FUN_147354cf2(void)

longlong FUN_147354cf2(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5
                      ,int param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  uint local_b0 [4];
  undefined1 *local_a0;
  longlong *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_70;
  longlong local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  int local_44;
  ulonglong local_30;
  
  uVar4 = (ulonglong)param_4;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = param_3 + 0x30;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  FUN_143142986(param_1,lVar3,1);
  (**(code **)(**(longlong **)(param_3 + 0x38) + 0x50))(*(longlong **)(param_3 + 0x38),&local_48);
  local_58 = *(undefined8 *)(param_3 + 0x38);
  local_50 = 0;
  local_78 = (longlong *)0x0;
  local_60 = 0;
  if (local_44 == 2) {
    local_e0 = (longlong *)&local_90;
    local_e8 = local_e8 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x70))
                      (*(longlong **)(param_1 + 0x140),local_58,0,param_6 != 1 & DAT_14ca84f68 | 4);
    if (iVar2 < 0) {
      local_e8 = *(ulonglong *)(param_1 + 0x150);
      FUN_143142730(iVar2,
                    "Direct3DDeviceIMContext->Map(Buffer->Resource, 0, MapType, 0, &MappedSubresource)"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Buffer.cpp",0xae);
    }
    local_68 = CONCAT44(uStack_8c,local_90);
    local_70 = uStack_88;
  }
  else if (param_6 == 0) {
    local_7c = 0;
    local_90 = param_5;
    uStack_8c = 3;
    uStack_88 = 0;
    uStack_84 = 0x20000;
    uStack_80 = 0;
    local_98 = (longlong *)0x0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x18))
                      (*(longlong **)(param_1 + 0x150),&local_90,0);
    if (iVar2 < 0) {
      local_e8 = *(ulonglong *)(param_1 + 0x150);
      FUN_143142730(iVar2,
                    "Direct3DDevice->CreateBuffer(&StagingBufferDesc, NULL, StagingBuffer.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Buffer.cpp",0xc0);
    }
    plVar1 = local_78;
    if (local_78 != local_98) {
      local_78 = local_98;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_c8 = local_b0;
    local_b0[3] = param_5 + param_4;
    local_b0[1] = 0;
    local_b0[2] = 0;
    local_a0 = &DAT_100000001;
    local_d8 = *(undefined8 *)(param_3 + 0x38);
    local_d0 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0._4_4_ << 0x20);
    local_e8 = local_e8 & 0xffffffff00000000;
    local_b0[0] = param_4;
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x170))
              (*(longlong **)(param_1 + 0x140),local_98,0,0);
    local_e0 = &local_c0;
    local_e8 = local_e8 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x70))
                      (*(longlong **)(param_1 + 0x140),local_98,0,1);
    if (iVar2 < 0) {
      local_e8 = *(ulonglong *)(param_1 + 0x150);
      FUN_143142730(iVar2,
                    "Direct3DDeviceIMContext->Map(StagingBuffer, 0, D3D11_MAP_READ, 0, &MappedSubresource)"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Buffer.cpp",0xcd);
    }
    local_68 = local_c0;
    local_70 = local_b8;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    uVar4 = 0;
  }
  else {
    local_68 = FUN_14001cc68(local_48,0x10);
    local_60 = CONCAT11(local_60._1_1_,1);
    local_70 = local_48;
  }
  FUN_147355018(param_1,&local_58,&local_78);
  lVar3 = local_68;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + uVar4;
}



// FUNCTION 147355018 FUN_147355018 body=122 status=ok
// SIG undefined FUN_147355018(void)

void FUN_147355018(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2638));
  local_40 = param_2;
  local_38 = param_3;
  FUN_1473652f2(param_1 + 0x25e8,local_2c);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147355086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2638));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147355094 FUN_147355094 body=265 status=ok
// SIG undefined FUN_147355094(void)

void FUN_147355094(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_38 [4];
  int local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_3 + 0x38) + 0x50))(*(longlong **)(param_3 + 0x38),local_38);
  local_58 = (longlong *)0x0;
  local_40 = 0;
  local_68 = *(undefined8 *)(param_3 + 0x38);
  local_60 = 0;
  FUN_14735519e(param_1);
  if (local_34 == 2) {
    plVar1 = *(longlong **)(param_1 + 0x140);
    plVar2 = *(longlong **)(param_3 + 0x38);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x140);
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      local_80 = local_50;
      local_88 = local_48;
      local_78 = 0;
      (**(code **)(*plVar1 + 0x180))(plVar1,*(undefined8 *)(param_3 + 0x38),0,0);
      FUN_1400020a8(local_48);
      local_48 = 0;
      goto LAB_147355112;
    }
  }
  (**(code **)(*plVar1 + 0x78))(plVar1,plVar2,0);
LAB_147355112:
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735519e FUN_14735519e body=213 status=ok
// SIG undefined FUN_14735519e(void)

void FUN_14735519e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2638));
  plVar8 = (longlong *)(param_1 + 0x25e8);
  FUN_14736583c(plVar8,&local_3c,param_2);
  if ((longlong)local_3c != -1) {
    lVar2 = *plVar8;
    lVar9 = (longlong)local_3c * 0x38;
    plVar7 = (longlong *)(lVar2 + lVar9 + 0x10);
    if (plVar7 != param_3) {
      plVar3 = (longlong *)*param_3;
      *param_3 = *plVar7;
      *plVar7 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined2 *)(param_3 + 3) = *(undefined2 *)(lVar2 + 0x28 + lVar9);
    puVar1 = (undefined4 *)(lVar2 + 0x18 + lVar9);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *(undefined4 *)(param_3 + 1) = *puVar1;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
    *(undefined4 *)(param_3 + 2) = uVar5;
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
    FUN_1473658d8(plVar8,local_3c);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147355217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2638));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147355274 FUN_147355274 body=262 status=ok
// SIG undefined FUN_147355274(void)

void FUN_147355274(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_3;
  *param_3 = 0;
  uVar2 = (undefined4)param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_38 = lVar4;
  local_30 = uVar2;
  local_2c = uVar3;
  if (*(char *)((longlong)param_2 + 100) == '\0') {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar5 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a3439f8;
    puVar5[2] = lVar4;
    *(undefined4 *)(puVar5 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
  }
  else {
    FUN_143152a14(&local_38);
    if (lVar4 != 0) {
      FUN_1400020a8(lVar4);
    }
  }
  FUN_14494c7ac(param_2,&local_40,1);
  if (local_40 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_40 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735537c FUN_14735537c body=82 status=ok
// SIG undefined FUN_14735537c(void)

void FUN_14735537c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,param_4,1);
  *(undefined8 *)(param_3 + 0x10) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473553d0 FUN_1473553d0 body=327 status=ok
// SIG undefined FUN_1473553d0(void)

void FUN_1473553d0(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  uint *local_28;
  int *local_20;
  longlong local_18;
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    if (((*(longlong *)(param_1 + 0x3fa0 + (longlong)(int)param_2 * 8) == 0) ||
        (*(undefined8 *)(param_1 + 0x3fa0 + (longlong)(int)param_2 * 8) = 0,
        *(uint *)(param_1 + 0x40c0) != param_2)) ||
       (*(uint *)(param_1 + 0x40c0) = param_2 - 1, (int)param_2 < 1)) {
      local_18 = 0;
    }
    else {
      local_18 = 0;
      uVar4 = param_2;
      do {
        if (*(longlong *)(param_1 + 0x3fa0 + (ulonglong)(uVar4 - 1) * 8) != 0) break;
        *(uint *)(param_1 + 0x40c0) = uVar4 - 2;
        uVar3 = uVar4 - 1;
        bVar2 = 0 < (int)uVar4;
        uVar4 = uVar3;
      } while (uVar3 != 0 && bVar2);
    }
  }
  else {
    local_18 = *(longlong *)(param_3 + 0x38);
    uVar4 = *(uint *)(param_1 + 0x40c0);
    if ((int)*(uint *)(param_1 + 0x40c0) < (int)param_2) {
      uVar4 = param_2;
    }
    *(uint *)(param_1 + 0x40c0) = uVar4;
    *(longlong *)(param_1 + 0x3fa0 + (longlong)(int)param_2 * 8) = param_3 + 0x30;
  }
  uVar1 = *(ushort *)(param_1 + 0x1d60 + (ulonglong)param_2 * 2);
  local_10 = (uint)uVar1;
  lVar5 = (ulonglong)param_2 * 0x10 + param_1;
  local_c = param_4;
  if (((*(longlong *)(lVar5 + 0x1b40) != local_18) || (*(int *)(lVar5 + 0x1b4c) != param_4)) ||
     (*(uint *)(lVar5 + 0x1b48) != local_10)) {
    *(longlong *)(lVar5 + 0x1b40) = local_18;
    *(int *)(lVar5 + 0x1b4c) = param_4;
    *(uint *)(lVar5 + 0x1b48) = (uint)uVar1;
    local_20 = &local_c;
    local_28 = &local_10;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x90))
              (*(longlong **)(param_1 + 0x158),param_2,1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147355542 FUN_147355542 body=180 status=ok
// SIG undefined FUN_147355542(void)

void FUN_147355542(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1431ecea2(param_1,param_2 + 0x18);
  if (param_4 != '\0') {
    lVar1 = param_1 + -0x18;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      local_28 = lVar1;
      FUN_147367230(*(longlong *)(param_2 + 0x20),param_1 + 0x4400);
    }
    if (*(longlong *)(param_2 + 0x40) != 0) {
      local_28 = lVar1;
      FUN_147367373(*(longlong *)(param_2 + 0x40),param_1 + 0x4400);
    }
    if (*(longlong *)(param_2 + 0x28) != 0) {
      local_28 = lVar1;
      FUN_1473674b8(*(longlong *)(param_2 + 0x28),param_1 + 0x4400);
    }
  }
  *(undefined4 *)(param_1 + 0x26b0) = *(undefined4 *)(param_2 + 0x70);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473555f8 FUN_1473555f8 body=172 status=ok
// SIG undefined FUN_1473555f8(void)

void FUN_1473555f8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x17cf8);
  if (lVar3 != param_2) {
    *(longlong *)(param_1 + 0x17cf8) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (DAT_14ca75f30 != 0) {
    FUN_1473556a6(param_1 + -0x18);
  }
  if (param_2 != 0) {
    local_28 = param_1 + -0x18;
    FUN_1473675fe(param_2,param_1 + 0x4400);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473556a6 FUN_1473556a6 body=206 status=ok
// SIG undefined FUN_1473556a6(void)

void FUN_1473556a6(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (longlong)*(int *)(param_1 + 0x40d4);
  if (-1 < (longlong)*(int *)(param_1 + 0x40d4)) {
    do {
      if (*(longlong *)(param_1 + 0x3bb8 + uVar2 * 8) != 0) {
        FUN_14735d8da(param_1,0,0,uVar2 & 0xffffffff);
      }
      bVar1 = 0 < (longlong)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  memset((void *)(param_1 + 0x2500),0,0xe0);
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
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x238))(*(longlong **)(param_1 + 0x170),0,0xe);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147355776 FUN_147355776 body=298 status=ok
// SIG undefined FUN_147355776(void)

void FUN_147355776(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x17cf8);
  lVar4 = *(longlong *)(lVar3 + 0xc0);
  if (*(longlong *)(param_1 + 0x1990) != lVar4) {
    *(longlong *)(param_1 + 0x1990) = lVar4;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x228))
              (*(longlong **)(param_1 + 0x158),lVar4,0,0);
  }
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x1c);
    *piVar1 = *piVar1 + 1;
    lVar4 = *(longlong *)(param_1 + 0x17d40);
    *(undefined4 *)(lVar4 + 0x20) = param_2;
    *(undefined4 *)(lVar4 + 0x24) = param_3;
    *(undefined4 *)(lVar4 + 0x28) = param_4;
  }
  plVar2 = (longlong *)(param_1 + -0x18);
  if (*(char *)(lVar3 + 0xb8) == '\x01') {
    (**(code **)(*plVar2 + 0x5a8))(plVar2);
  }
  local_40 = plVar2;
  FUN_147368327(&local_40,lVar3,param_1 + 0x43fa,param_1 + 0x4380);
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x148))
            (*(longlong **)(param_1 + 0x128),param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x1990) != 0) {
    *(undefined8 *)(param_1 + 0x1990) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x228))(*(longlong **)(param_1 + 0x158),0,0,0);
  }
  FUN_1473558a2(plVar2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473558a2 FUN_1473558a2 body=109 status=ok
// SIG undefined FUN_1473558a2(void)

void FUN_1473558a2(longlong param_1)

{
  if ((*(char *)(param_1 + 0x17f08) == '\0') && (*(int *)(DAT_14ca75f58 + 4) != 0)) {
    *(undefined1 *)(param_1 + 0x17f08) = 1;
    if (DAT_14ca84df4 == 0x1002) {
      agsDriverExtensionsDX11_BeginUAVOverlap
                (*(undefined8 *)(param_1 + 0x2680),*(undefined8 *)(param_1 + 0x140));
      return;
    }
    if (DAT_14ca84df4 == 0x8086) {
      if (*(char *)(param_1 + 0x2690) == '\x01') {
        FUN_144bcda40(*(undefined8 *)(param_1 + 0x2688));
        return;
      }
    }
    else if (DAT_14ca84df4 == 0x10de) {
      FUN_1425007d0(*(undefined8 *)(param_1 + 0x150));
      return;
    }
  }
  return;
}



// FUNCTION 147355910 FUN_147355910 body=305 status=ok
// SIG undefined FUN_147355910(void)

void FUN_147355910(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x17cf8);
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x1c);
    *piVar1 = *piVar1 + 1;
    lVar4 = *(longlong *)(param_1 + 0x17d40);
    *(undefined1 **)(lVar4 + 0x20) = &DAT_100000001;
    *(undefined4 *)(lVar4 + 0x28) = 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0xc0);
  if (*(longlong *)(param_1 + 0x1990) != lVar4) {
    *(longlong *)(param_1 + 0x1990) = lVar4;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x228))
              (*(longlong **)(param_1 + 0x158),lVar4,0,0);
  }
  plVar2 = (longlong *)(param_1 + -0x18);
  if (*(char *)(lVar3 + 0xb8) == '\x01') {
    (**(code **)(*plVar2 + 0x5a8))(plVar2);
  }
  local_38 = plVar2;
  FUN_147368327(&local_38,lVar3,param_1 + 0x43fa,param_1 + 0x4380);
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x150))
            (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_2 + 0x38),param_3);
  if (*(longlong *)(param_1 + 0x1990) != 0) {
    *(undefined8 *)(param_1 + 0x1990) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x228))(*(longlong **)(param_1 + 0x158),0,0,0);
  }
  FUN_1473558a2(plVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147355a42 FUN_147355a42 body=392 status=ok
// SIG undefined FUN_147355a42(void)

void FUN_147355a42(longlong param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                  float param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar2 = param_5 - param_2;
  if (fVar2 <= 0.0) goto LAB_147355b92;
  fVar3 = param_6 - param_3;
  if (fVar3 <= 0.0) goto LAB_147355b92;
  uStack_64 = param_7;
  local_78 = param_2;
  fStack_74 = param_3;
  fStack_70 = fVar2;
  fStack_6c = fVar3;
  local_68 = param_4;
  if (*(int *)(param_1 + 0x19b8) == 1) {
    auVar1._4_4_ = param_3;
    auVar1._0_4_ = param_2;
    auVar1._8_4_ = fVar2;
    auVar1._12_4_ = fVar3;
    if (CONCAT44(param_7,param_4) != *(longlong *)(param_1 + 0x19cc) ||
        auVar1 != *(undefined1 (*) [16])(param_1 + 0x19bc)) goto LAB_147355b19;
  }
  else {
LAB_147355b19:
    *(ulonglong *)(param_1 + 0x19cc) = CONCAT44(param_7,param_4);
    *(ulonglong *)(param_1 + 0x19bc) = CONCAT44(param_3,param_2);
    *(ulonglong *)(param_1 + 0x19c4) = CONCAT44(fVar3,fVar2);
    *(undefined4 *)(param_1 + 0x19b8) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x160))(*(longlong **)(param_1 + 0x158),1);
  }
  local_60 = (undefined4)(longlong)param_2;
  local_5c = (undefined4)(longlong)param_3;
  local_58 = (undefined4)(longlong)param_5;
  local_54 = (undefined4)(longlong)param_6;
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x168))(*(longlong **)(param_1 + 0x128),1);
LAB_147355b92:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147355bcc FUN_147355bcc body=146 status=ok
// SIG undefined FUN_147355bcc(void)

void FUN_147355bcc(longlong param_1,char param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == '\0') {
    param_3 = (int)*(float *)(param_1 + 0x19bc);
    param_4 = (int)*(float *)(param_1 + 0x19c0);
    param_5 = (int)*(float *)(param_1 + 0x19c4) + param_3;
    param_6 = (int)*(float *)(param_1 + 0x19c8) + param_4;
  }
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x168))
            (*(longlong **)(param_1 + 0x128),1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147355c60 FUN_147355c60 body=746 status=ok
// SIG undefined FUN_147355c60(void)

void FUN_147355c60(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 param_6,float param_7,float param_8,float param_9,float param_10,
                  undefined4 param_11)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_a8 = (float)((int)ROUND(param_2 + param_2 + -0.5) >> 1);
  fStack_a4 = (float)((int)ROUND(param_4 + param_4 + -0.5) >> 1);
  fStack_a0 = (float)-((int)ROUND(-0.5 - ((param_7 - param_2) + (param_7 - param_2))) >> 1);
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fStack_9c = (float)-((int)ROUND(-0.5 - ((param_9 - param_4) + (param_9 - param_4))) >> 1);
  fStack_90 = (float)((int)ROUND(param_3 + param_3 + -0.5) >> 1);
  local_98 = param_6;
  fStack_8c = (float)((int)ROUND(param_5 + param_5 + -0.5) >> 1);
  uStack_94 = param_11;
  local_88 = (float)-((int)ROUND(-0.5 - ((param_8 - param_3) + (param_8 - param_3))) >> 1);
  fStack_84 = (float)-((int)ROUND(-0.5 - ((param_10 - param_5) + (param_10 - param_5))) >> 1);
  local_c8 = (int)local_a8;
  local_c4 = (int)fStack_a4;
  local_c0 = (int)(local_a8 + fStack_a0);
  local_bc = (int)(fStack_a4 + fStack_9c);
  local_b8 = (int)fStack_90;
  uStack_80 = param_6;
  local_b4 = (int)fStack_8c;
  local_b0 = (int)(fStack_90 + local_88);
  local_ac = (int)(fStack_8c + fStack_84);
  uStack_7c = param_11;
  if (*(int *)(param_1 + 0x19b8) == 2) {
    iVar1 = memcmp((void *)(param_1 + 0x19bc),&local_a8,0x30);
    if (iVar1 == 0) goto LAB_147355edd;
  }
  *(float *)(param_1 + 0x19dc) = local_88;
  *(float *)(param_1 + 0x19e0) = fStack_84;
  *(undefined4 *)(param_1 + 0x19e4) = uStack_80;
  *(undefined4 *)(param_1 + 0x19e8) = uStack_7c;
  *(undefined4 *)(param_1 + 0x19cc) = local_98;
  *(undefined4 *)(param_1 + 0x19d0) = uStack_94;
  *(float *)(param_1 + 0x19d4) = fStack_90;
  *(float *)(param_1 + 0x19d8) = fStack_8c;
  *(float *)(param_1 + 0x19bc) = local_a8;
  *(float *)(param_1 + 0x19c0) = fStack_a4;
  *(float *)(param_1 + 0x19c4) = fStack_a0;
  *(float *)(param_1 + 0x19c8) = fStack_9c;
  *(undefined4 *)(param_1 + 0x19b8) = 2;
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x160))(*(longlong **)(param_1 + 0x158),2);
LAB_147355edd:
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x168))
            (*(longlong **)(param_1 + 0x128),2,&local_c8);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147355f4c FUN_147355f4c body=474 status=ok
// SIG undefined FUN_147355f4c(void)

void FUN_147355f4c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(undefined2 *)(param_1 + 0x1d80) = *(undefined2 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  uVar8 = *(undefined4 *)(param_2 + 100);
  uVar9 = *(undefined4 *)(param_2 + 0x68);
  uVar10 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x1d70) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x1d74) = uVar8;
  *(undefined4 *)(param_1 + 0x1d78) = uVar9;
  *(undefined4 *)(param_1 + 0x1d7c) = uVar10;
  *(undefined4 *)(param_1 + 0x1d60) = uVar4;
  *(undefined4 *)(param_1 + 0x1d64) = uVar5;
  *(undefined4 *)(param_1 + 0x1d68) = uVar6;
  *(undefined4 *)(param_1 + 0x1d6c) = uVar7;
  if (*(longlong *)(param_1 + 0x1d58) != *(longlong *)(param_2 + 0x78)) {
    *(longlong *)(param_1 + 0x1d58) = *(longlong *)(param_2 + 0x78);
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x88))();
  }
  lVar3 = *(longlong *)(param_2 + 0x80);
  if (*(longlong *)(param_1 + 0x1978) != lVar3) {
    *(longlong *)(param_1 + 0x1978) = lVar3;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x58))
              (*(longlong **)(param_1 + 0x158),lVar3,0,0);
  }
  lVar3 = *(longlong *)(param_2 + 0x88);
  if (*(longlong *)(param_1 + 0x1988) != lVar3) {
    *(longlong *)(param_1 + 0x1988) = lVar3;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x48))
              (*(longlong **)(param_1 + 0x158),lVar3,0,0);
  }
  lVar3 = *(longlong *)(param_2 + 0x90);
  if (*(longlong *)(param_1 + 0x1980) != lVar3) {
    *(longlong *)(param_1 + 0x1980) = lVar3;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xb8))
              (*(longlong **)(param_1 + 0x158),lVar3,0,0);
  }
  *(undefined1 *)(param_1 + 0x4414) = 1;
  if (DAT_14ca84f1f == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17cd0));
  }
  lVar3 = *(longlong *)(param_1 + 0x4448 + (ulonglong)*(uint *)(param_1 + 0x17cc8) * 8);
  if (lVar3 != param_2) {
    *(longlong *)(param_1 + 0x4448 + (ulonglong)*(uint *)(param_1 + 0x17cc8) * 8) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(uint *)(param_1 + 0x17cc8) =
       *(int *)(param_1 + 0x17cc8) + ((*(int *)(param_1 + 0x17cc8) + 1U) / 10000) * -10000 + 1;
  if (DAT_14ca84f1f == '\x01') {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17cd0));
  }
  *(undefined2 *)(param_1 + 0x43f0) = 0xffff;
  *(undefined4 *)(param_1 + 0x43f6) = 0xffffffff;
  memset((void *)(param_1 + 0x4150),0,0x2a0);
  if ((DAT_14ca75f30 == 0) && (DAT_14ca8507a != '\x01')) {
    return;
  }
  param_1 = param_1 + -0x18;
  FUN_14735da0c(param_1);
  FUN_14735dad8(param_1);
  FUN_14735dba8(param_1);
  FUN_1473556a6(param_1);
  return;
}



// FUNCTION 147356126 FUN_147356126 body=109 status=ok
// SIG undefined FUN_147356126(void)

void FUN_147356126(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  memset(*(void **)(param_1 + 0x4400),0,(longlong)*(int *)(param_1 + 0x4408) << 3);
  if (0 < *(int *)(param_2 + 0x60)) {
    lVar1 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x58);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        lVar3 = param_2 + 0x18;
      }
      lVar2 = *(longlong *)(param_2 + 8);
      if (*(longlong *)(param_2 + 8) == 0) {
        lVar2 = param_2;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x4400) + (ulonglong)*(byte *)(lVar2 + lVar1) * 8) =
           *(undefined8 *)(lVar3 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 147356194 FUN_147356194 body=112 status=ok
// SIG undefined FUN_147356194(void)

void FUN_147356194(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_5;
  uStack_10 = param_5[1];
  local_48 = &local_18;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_147356206(param_1 + -0x18,*(undefined8 *)(param_1 + 0x4430));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147356206 FUN_147356206 body=478 status=ok
// SIG undefined FUN_147356206(void)

void FUN_147356206(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_4[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_4;
    lVar8 = 0;
    do {
      uVar3 = *(ushort *)(lVar5 + 6 + lVar8);
      uVar4 = *(ushort *)(lVar5 + 2 + lVar8);
      memcpy((void *)((ulonglong)uVar4 + *(longlong *)(param_2 + 0x28)),
             (void *)((ulonglong)*(ushort *)(lVar5 + 4 + lVar8) + *param_3),(ulonglong)uVar3);
      uVar10 = (uint)uVar3 + (uint)uVar4;
      if (uVar10 < *(uint *)(param_2 + 0x30)) {
        uVar10 = *(uint *)(param_2 + 0x30);
      }
      *(uint *)(param_2 + 0x30) = uVar10;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  lVar6 = param_5[1];
  local_58 = param_1;
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_5;
    lVar8 = 0;
    do {
      if (*(char *)(lVar5 + 10 + lVar8) == '\x02') {
        FUN_147356e86(param_1,*(undefined1 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar8);
    lVar6 = param_5[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar5 = *param_5;
      lVar8 = 0;
      do {
        switch(*(undefined1 *)(lVar5 + 10 + lVar8)) {
        case 0:
          uVar2 = *(undefined1 *)(lVar5 + 8 + lVar8);
          if ((*(longlong **)(lVar5 + lVar8) == (longlong *)0x0) ||
             (lVar7 = (**(code **)(**(longlong **)(lVar5 + lVar8) + 0x30))(), lVar7 == 0)) {
            uVar9 = 0;
            lVar7 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar7 + 0x78);
            lVar7 = lVar7 + 0x60;
          }
          FUN_14735d8da(local_58,lVar7,uVar9,uVar2);
          break;
        case 1:
          FUN_147367744(&local_58,*(undefined8 *)(lVar5 + lVar8),*(undefined1 *)(lVar5 + 8 + lVar8))
          ;
          break;
        case 3:
          bVar1 = *(byte *)(lVar5 + 8 + lVar8);
          local_50 = *(longlong *)(*(longlong *)(lVar5 + lVar8) + 0x10);
          if (*(longlong *)(local_58 + 0x2020 + (ulonglong)bVar1 * 8) != local_50) {
            *(longlong *)(local_58 + 0x2020 + (ulonglong)bVar1 * 8) = local_50;
            (**(code **)(**(longlong **)(local_58 + 0x170) + 0x230))
                      (*(longlong **)(local_58 + 0x170),bVar1,1,&local_50);
          }
          break;
        case 4:
          FUN_14736767a(param_1,*(undefined2 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473563e6 FUN_1473563e6 body=290 status=ok
// SIG undefined FUN_1473563e6(void)

void FUN_1473563e6(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + -0x18;
  cVar2 = *(char *)(param_2 + 0x9c);
  if (cVar2 == '\x04') {
    local_48 = *param_5;
    uStack_40 = param_5[1];
    local_a8 = &local_48;
    local_58 = *param_4;
    uStack_50 = param_4[1];
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_1473566ea(lVar1,*(undefined8 *)(param_1 + 0x4428));
  }
  else if (cVar2 == '\x03') {
    local_78 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = &local_78;
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = param_3[2];
    uStack_8c = param_3[3];
    FUN_14735688c(lVar1,*(undefined8 *)(param_1 + 0x4420));
  }
  else if (cVar2 == '\0') {
    local_18 = *param_5;
    uStack_10 = param_5[1];
    local_a8 = &local_18;
    local_28 = *param_4;
    uStack_20 = param_4[1];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_14735650a(lVar1,*(undefined8 *)(param_1 + 0x4418));
  }
  if ((local_8 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735650a FUN_14735650a body=478 status=ok
// SIG undefined FUN_14735650a(void)

void FUN_14735650a(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_4[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_4;
    lVar8 = 0;
    do {
      uVar3 = *(ushort *)(lVar5 + 6 + lVar8);
      uVar4 = *(ushort *)(lVar5 + 2 + lVar8);
      memcpy((void *)((ulonglong)uVar4 + *(longlong *)(param_2 + 0x28)),
             (void *)((ulonglong)*(ushort *)(lVar5 + 4 + lVar8) + *param_3),(ulonglong)uVar3);
      uVar10 = (uint)uVar3 + (uint)uVar4;
      if (uVar10 < *(uint *)(param_2 + 0x30)) {
        uVar10 = *(uint *)(param_2 + 0x30);
      }
      *(uint *)(param_2 + 0x30) = uVar10;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  lVar6 = param_5[1];
  local_58 = param_1;
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_5;
    lVar8 = 0;
    do {
      if (*(char *)(lVar5 + 10 + lVar8) == '\x02') {
        FUN_147356f5c(param_1,*(undefined1 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar8);
    lVar6 = param_5[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar5 = *param_5;
      lVar8 = 0;
      do {
        switch(*(undefined1 *)(lVar5 + 10 + lVar8)) {
        case 0:
          uVar2 = *(undefined1 *)(lVar5 + 8 + lVar8);
          if ((*(longlong **)(lVar5 + lVar8) == (longlong *)0x0) ||
             (lVar7 = (**(code **)(**(longlong **)(lVar5 + lVar8) + 0x30))(), lVar7 == 0)) {
            uVar9 = 0;
            lVar7 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar7 + 0x78);
            lVar7 = lVar7 + 0x60;
          }
          FUN_14735d548(local_58,lVar7,uVar9,uVar2);
          break;
        case 1:
          FUN_1473677ce(&local_58,*(undefined8 *)(lVar5 + lVar8),*(undefined1 *)(lVar5 + 8 + lVar8))
          ;
          break;
        case 3:
          bVar1 = *(byte *)(lVar5 + 8 + lVar8);
          local_50 = *(longlong *)(*(longlong *)(lVar5 + lVar8) + 0x10);
          if (*(longlong *)(local_58 + 0x1da0 + (ulonglong)bVar1 * 8) != local_50) {
            *(longlong *)(local_58 + 0x1da0 + (ulonglong)bVar1 * 8) = local_50;
            (**(code **)(**(longlong **)(local_58 + 0x170) + 0xd0))
                      (*(longlong **)(local_58 + 0x170),bVar1,1,&local_50);
          }
          break;
        case 4:
          FUN_1473672ac(param_1,*(undefined2 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473566ea FUN_1473566ea body=416 status=ok
// SIG undefined FUN_1473566ea(void)

void FUN_1473566ea(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_4[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_4;
    lVar8 = 0;
    do {
      uVar3 = *(ushort *)(lVar5 + 6 + lVar8);
      uVar4 = *(ushort *)(lVar5 + 2 + lVar8);
      memcpy((void *)((ulonglong)uVar4 + *(longlong *)(param_2 + 0x28)),
             (void *)((ulonglong)*(ushort *)(lVar5 + 4 + lVar8) + *param_3),(ulonglong)uVar3);
      uVar10 = (uint)uVar3 + (uint)uVar4;
      if (uVar10 < *(uint *)(param_2 + 0x30)) {
        uVar10 = *(uint *)(param_2 + 0x30);
      }
      *(uint *)(param_2 + 0x30) = uVar10;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  lVar6 = param_5[1];
  local_58 = param_1;
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_5;
    lVar8 = 0;
    do {
      switch(*(undefined1 *)(lVar5 + 10 + lVar8)) {
      case 0:
        uVar2 = *(undefined1 *)(lVar5 + 8 + lVar8);
        if ((*(longlong **)(lVar5 + lVar8) == (longlong *)0x0) ||
           (lVar7 = (**(code **)(**(longlong **)(lVar5 + lVar8) + 0x30))(), lVar7 == 0)) {
          uVar9 = 0;
          lVar7 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar7 + 0x78);
          lVar7 = lVar7 + 0x60;
        }
        FUN_14735d7a8(local_58,lVar7,uVar9,uVar2);
        break;
      case 1:
        FUN_147367858(&local_58,*(undefined8 *)(lVar5 + lVar8),*(undefined1 *)(lVar5 + 8 + lVar8));
        break;
      case 3:
        bVar1 = *(byte *)(lVar5 + 8 + lVar8);
        local_50 = *(longlong *)(*(longlong *)(lVar5 + lVar8) + 0x10);
        if (*(longlong *)(local_58 + 0x1fa0 + (ulonglong)bVar1 * 8) != local_50) {
          *(longlong *)(local_58 + 0x1fa0 + (ulonglong)bVar1 * 8) = local_50;
          (**(code **)(**(longlong **)(local_58 + 0x170) + 0x100))
                    (*(longlong **)(local_58 + 0x170),bVar1,1,&local_50);
        }
        break;
      case 4:
        FUN_1473673ee(param_1,*(undefined2 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735688c FUN_14735688c body=475 status=ok
// SIG undefined FUN_14735688c(void)

void FUN_14735688c(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_4[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_4;
    lVar8 = 0;
    do {
      uVar3 = *(ushort *)(lVar5 + 6 + lVar8);
      uVar4 = *(ushort *)(lVar5 + 2 + lVar8);
      memcpy((void *)((ulonglong)uVar4 + *(longlong *)(param_2 + 0x28)),
             (void *)((ulonglong)*(ushort *)(lVar5 + 4 + lVar8) + *param_3),(ulonglong)uVar3);
      uVar10 = (uint)uVar3 + (uint)uVar4;
      if (uVar10 < *(uint *)(param_2 + 0x30)) {
        uVar10 = *(uint *)(param_2 + 0x30);
      }
      *(uint *)(param_2 + 0x30) = uVar10;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  lVar6 = param_5[1];
  local_58 = param_1;
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_5;
    lVar8 = 0;
    do {
      if (*(char *)(lVar5 + 10 + lVar8) == '\x02') {
        FUN_147356f5c(param_1,*(undefined1 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar8);
    lVar6 = param_5[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar5 = *param_5;
      lVar8 = 0;
      do {
        switch(*(undefined1 *)(lVar5 + 10 + lVar8)) {
        case 0:
          uVar2 = *(undefined1 *)(lVar5 + 8 + lVar8);
          if ((*(longlong **)(lVar5 + lVar8) == (longlong *)0x0) ||
             (lVar7 = (**(code **)(**(longlong **)(lVar5 + lVar8) + 0x30))(), lVar7 == 0)) {
            uVar9 = 0;
            lVar7 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar7 + 0x78);
            lVar7 = lVar7 + 0x60;
          }
          FUN_14735d67a(local_58,lVar7,uVar9,uVar2);
          break;
        case 1:
          FUN_1473678e2(&local_58,*(undefined8 *)(lVar5 + lVar8),*(undefined1 *)(lVar5 + 8 + lVar8))
          ;
          break;
        case 3:
          bVar1 = *(byte *)(lVar5 + 8 + lVar8);
          local_50 = *(longlong *)(*(longlong *)(lVar5 + lVar8) + 0x10);
          if (*(longlong *)(local_58 + 0x1f20 + (ulonglong)bVar1 * 8) != local_50) {
            *(longlong *)(local_58 + 0x1f20 + (ulonglong)bVar1 * 8) = local_50;
            (**(code **)(**(longlong **)(local_58 + 0x170) + 0x50))
                      (*(longlong **)(local_58 + 0x170),bVar1,1,&local_50);
          }
          break;
        case 4:
          FUN_147367534(param_1,*(undefined2 *)(lVar5 + 8 + lVar8),*(undefined8 *)(lVar5 + lVar8));
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147356a68 FUN_147356a68 body=67 status=ok
// SIG undefined FUN_147356a68(void)

void FUN_147356a68(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_147356aac(param_1 + -0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147356aac FUN_147356aac body=192 status=ok
// SIG undefined FUN_147356aac(void)

void FUN_147356aac(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      cVar1 = *(char *)(lVar2 + 2 + lVar4);
      if (cVar1 == '\x01') {
        local_40 = 0;
        local_44 = 0xffffffff;
        local_58 = &local_44;
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0x220))
                  (*(longlong **)(param_1 + 0x140),*(undefined1 *)(lVar2 + lVar4),1,&local_40);
      }
      else if (cVar1 == '\0') {
        FUN_14735d8da(param_1,0,0,*(undefined1 *)(lVar2 + lVar4));
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147356b6e FUN_147356b6e body=189 status=ok
// SIG undefined FUN_147356b6e(void)

void FUN_147356b6e(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + -0x18;
  cVar1 = *(char *)(param_2 + 0x9c);
  if (cVar1 == '\x04') {
    lVar3 = param_3[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_3;
      lVar4 = 0;
      do {
        if (*(char *)(lVar2 + 2 + lVar4) == '\0') {
          FUN_14735d7a8(param_1,0,0,*(undefined1 *)(lVar2 + lVar4));
        }
        lVar4 = lVar4 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar4);
    }
  }
  else if (cVar1 == '\x03') {
    local_48 = (undefined4)*param_3;
    uStack_44 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_40 = (undefined4)param_3[1];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147356cc2(param_1);
  }
  else if (cVar1 == '\0') {
    local_38 = (undefined4)*param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = (undefined4)param_3[1];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147356c2c(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147356c2c FUN_147356c2c body=150 status=ok
// SIG undefined FUN_147356c2c(void)

void FUN_147356c2c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *param_2;
    lVar7 = 0;
    do {
      cVar3 = *(char *)(lVar4 + 2 + lVar7);
      if (cVar3 == '\x01') {
        lVar5 = *(longlong *)(param_1 + 10000 + (ulonglong)*(byte *)(lVar4 + lVar7) * 8);
        if (lVar5 != 0) {
          *(undefined8 *)(param_1 + 10000 + (ulonglong)*(byte *)(lVar4 + lVar7) * 8) = 0;
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
          *(undefined4 *)(param_1 + 0x2798) = 1;
        }
      }
      else if (cVar3 == '\0') {
        FUN_14735d548(param_1,0,0,*(undefined1 *)(lVar4 + lVar7));
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar7);
  }
  return;
}



// FUNCTION 147356cc2 FUN_147356cc2 body=150 status=ok
// SIG undefined FUN_147356cc2(void)

void FUN_147356cc2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *param_2;
    lVar7 = 0;
    do {
      cVar3 = *(char *)(lVar4 + 2 + lVar7);
      if (cVar3 == '\x01') {
        lVar5 = *(longlong *)(param_1 + 10000 + (ulonglong)*(byte *)(lVar4 + lVar7) * 8);
        if (lVar5 != 0) {
          *(undefined8 *)(param_1 + 10000 + (ulonglong)*(byte *)(lVar4 + lVar7) * 8) = 0;
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
          *(undefined4 *)(param_1 + 0x2798) = 1;
        }
      }
      else if (cVar3 == '\0') {
        FUN_14735d67a(param_1,0,0,*(undefined1 *)(lVar4 + lVar7));
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar7);
  }
  return;
}



// FUNCTION 147356e86 FUN_147356e86 body=213 status=ok
// SIG undefined FUN_147356e86(void)

void FUN_147356e86(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_2c;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    plVar1 = *(longlong **)(param_3 + 0x10);
    if (*(byte *)(param_3 + 0x18) < 2) {
      plVar3 = plVar1 + 6;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*plVar1 + 0x30))();
      }
      plVar3 = (longlong *)(lVar2 + 0x60);
      if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
      }
    }
    FUN_143142986(param_1,plVar3,1);
    local_28 = *(longlong **)(param_3 + 0x40);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))(local_28);
      (**(code **)(*local_28 + 0x10))(local_28);
      goto LAB_147356f05;
    }
  }
  local_28 = (longlong *)0x0;
LAB_147356f05:
  local_38 = &local_2c;
  local_2c = 0xffffffff;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x220))(*(longlong **)(param_1 + 0x140),param_2,1)
  ;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147356f5c FUN_147356f5c body=233 status=ok
// SIG undefined FUN_147356f5c(void)

void FUN_147356f5c(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  param_2 = param_2 & 0xffffffff;
  lVar4 = *(longlong *)(param_1 + 10000 + param_2 * 8);
  if (lVar4 != param_3) {
    *(longlong *)(param_1 + 10000 + param_2 * 8) = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(undefined4 *)(param_1 + 0x2798) = 1;
  }
  if (param_3 != 0) {
    plVar3 = *(longlong **)(param_3 + 0x10);
    if (*(byte *)(param_3 + 0x18) < 2) {
      plVar5 = plVar3 + 6;
      if (plVar3 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
    }
    else {
      if (plVar3 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x30))();
      }
      plVar5 = (longlong *)(lVar4 + 0x60);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
    }
    FUN_143142986(param_1,plVar5,1);
    uVar6 = 0;
    do {
      if ((param_2 != uVar6) &&
         (lVar4 = *(longlong *)(param_1 + 10000 + uVar6 * 8), lVar4 == param_3)) {
        *(undefined8 *)(param_1 + 10000 + uVar6 * 8) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 8);
  }
  return;
}



// FUNCTION 147357045 FUN_147357045 body=245 status=ok
// SIG undefined FUN_147357045(void)

uint * FUN_147357045(uint *param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auStack_98 [36];
  uint local_74;
  uint local_70;
  undefined8 local_60;
  longlong *local_48;
  undefined1 local_3c [4];
  uint local_38;
  byte local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_2 + 0x40))(param_2,local_3c);
  local_48 = (longlong *)0x0;
  (**(code **)(*param_2 + 0x38))(param_2);
  param_1[2] = 0;
  param_1[3] = 0;
  if (local_38 - 4 < 4) {
    (**(code **)(*local_48 + 0x50))(local_48,&local_74);
    *(undefined8 *)(param_1 + 2) = local_60;
    uVar1 = local_74;
    uVar3 = local_70;
    bVar2 = local_34;
    if ((local_38 & 0xfffffffe) != 4) {
      bVar2 = 0;
    }
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    bVar2 = 0;
    if (local_38 == 8) {
      (**(code **)(*local_48 + 0x50))(local_48,&local_74);
      param_1[2] = 1;
      param_1[3] = 0;
      uVar1 = local_74;
      uVar3 = local_70;
      bVar2 = local_34;
    }
  }
  *param_1 = uVar1 >> (bVar2 & 0x1f);
  param_1[1] = uVar3 >> (bVar2 & 0x1f);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14735713c FUN_14735713c body=797 status=ok
// SIG undefined FUN_14735713c(void)

void FUN_14735713c(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e0;
  undefined4 local_d8;
  longlong *local_c8;
  uint local_bc;
  uint local_b8;
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar4 = true;
  if (((param_4 == (longlong *)0x0) || ((longlong *)*param_4 == (longlong *)0x0)) ||
     (lVar6 = (**(code **)(*(longlong *)*param_4 + 0x30))(), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    local_88._0_4_ = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_1 + 0x4428) = (undefined4)local_88;
    uVar5 = FUN_144b19f7a();
    plVar9 = *(longlong **)(lVar6 + 0x90 + (ulonglong)uVar5 * 8);
    bVar4 = false;
    FUN_143142986(param_1,lVar6 + 0x60,0);
  }
  bVar12 = *(longlong **)(param_1 + 0x27a8) != plVar9;
  if (bVar12) {
    lVar8 = *(longlong *)(param_1 + 0x27b0);
    if (lVar8 != lVar6) {
      *(longlong *)(param_1 + 0x27b0) = lVar6;
      if (!bVar4) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar8 + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x27a8);
    if (plVar3 != plVar9) {
      *(longlong **)(param_1 + 0x27a8) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  piVar11 = (int *)(param_3 + 0xc);
  uVar10 = 0;
  local_c8 = plVar9;
  do {
    if ((uVar10 < param_2) && (*(longlong **)(piVar11 + -3) != (longlong *)0x0)) {
      uVar5 = piVar11[-1];
      iVar2 = *piVar11;
      lVar6 = (**(code **)(**(longlong **)(piVar11 + -3) + 0x30))();
      if (lVar6 == 0) {
LAB_1473572f1:
        plVar9 = (longlong *)0x0;
      }
      else {
        if ((*(byte *)(lVar6 + 0xb4) & 1) != 0) {
          uVar5 = uVar5 * *(int *)(lVar6 + 0xb0) + iVar2;
        }
        if (*(uint *)(lVar6 + 0x88) <= uVar5) goto LAB_1473572f1;
        plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x80) + (longlong)(int)uVar5 * 8);
      }
      lVar8 = lVar6 + 0x60;
      if (lVar6 == 0) {
        lVar8 = 0;
      }
      FUN_143142986(param_1,lVar8,0);
    }
    else {
      plVar9 = (longlong *)0x0;
    }
    (&local_88)[uVar10] = plVar9;
    plVar3 = *(longlong **)(param_1 + 0x26d0 + uVar10 * 8);
    if (plVar3 != plVar9) {
      *(longlong **)(param_1 + 0x26d0 + uVar10 * 8) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      bVar12 = true;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar9 = local_c8;
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 6;
  } while (uVar10 != 8);
  if (*(uint *)(param_1 + 0x40dc) == param_2) {
    if (!bVar12) goto LAB_14735735b;
  }
  else {
    *(uint *)(param_1 + 0x40dc) = param_2;
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar7 = 1;
      uVar5 = 0;
      do {
        uVar5 = uVar5 | uVar7;
        uVar7 = uVar7 * 2;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *(uint *)(param_1 + 0x279c) = uVar5;
  }
  FUN_143142d90(param_1);
  *(undefined4 *)(param_1 + 0x27a0) = 0;
LAB_14735735b:
  if (CONCAT44(local_88._4_4_,(undefined4)local_88) == 0) {
    if (plVar9 != (longlong *)0x0) {
      local_90 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x38))(plVar9,&local_90);
      (**(code **)(*local_90 + 0x50))(local_90,&local_bc);
      local_e0 = (float)local_b8;
      local_e8 = (float)local_bc;
      local_d8 = 0x3f800000;
      FUN_147355a42(param_1 + 0x18,0,0,0);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  else {
    FUN_147357045(&local_bc);
    local_e0 = (float)local_b8;
    local_e8 = (float)local_bc;
    local_d8 = 0x3f800000;
    FUN_147355a42(param_1 + 0x18,0,0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735745a FUN_14735745a body=361 status=ok
// SIG undefined FUN_14735745a(void)

void FUN_14735745a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  byte local_e8;
  undefined4 local_e0;
  byte local_d8;
  undefined4 local_d0;
  undefined1 local_c0 [8];
  undefined4 local_b8 [34];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14735713c(param_1,*(undefined4 *)(param_2 + 0xc0),param_2);
  if (*(char *)(param_2 + 0xc4) == '\0') {
    if ((*(char *)(param_2 + 0x1b1) == '\0') && (*(char *)(param_2 + 0x1b0) != '\x01'))
    goto LAB_147357570;
  }
  else {
    iVar5 = *(int *)(param_2 + 0xc0);
    if (0 < iVar5) {
      puVar8 = local_b8 + 3;
      pcVar9 = (char *)(param_2 + 0x10);
      lVar10 = 0;
      do {
        cVar1 = *pcVar9;
        local_c0[lVar10] = cVar1 == '\x02';
        if ((cVar1 == '\x02') && (*(longlong **)(pcVar9 + -0x10) != (longlong *)0x0)) {
          lVar6 = (**(code **)(**(longlong **)(pcVar9 + -0x10) + 8))();
          uVar2 = *(undefined4 *)(lVar6 + 0x10);
          uVar3 = *(undefined4 *)(lVar6 + 0x14);
          uVar4 = *(undefined4 *)(lVar6 + 0x18);
          puVar8[-3] = *(undefined4 *)(lVar6 + 0xc);
          puVar8[-2] = uVar2;
          puVar8[-1] = uVar3;
          *puVar8 = uVar4;
          iVar5 = *(int *)(param_2 + 0xc0);
        }
        lVar10 = lVar10 + 1;
        puVar8 = puVar8 + 4;
        pcVar9 = pcVar9 + 0x18;
      } while (lVar10 < iVar5);
    }
  }
  if ((*(char *)(param_2 + 0x1b0) == '\0') && (*(char *)(param_2 + 0x1b1) != '\x01')) {
    local_e0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
  }
  else {
    lVar10 = (**(code **)(**(longlong **)(param_2 + 400) + 8))();
    local_e0 = *(undefined4 *)(lVar10 + 0xc);
    local_d0 = *(undefined4 *)(lVar10 + 0x10);
    local_e8 = *(byte *)(param_2 + 0x1b0);
    local_d8 = *(byte *)(param_2 + 0x1b1);
  }
  puVar7 = local_c0;
  if (*(char *)(param_2 + 0xc4) == '\0') {
    puVar7 = (undefined1 *)0x0;
  }
  local_d8 = local_d8 & 1;
  local_e8 = local_e8 & 1;
  (**(code **)(*param_1 + 0x598))(param_1,puVar7,*(undefined4 *)(param_2 + 0xc0),local_b8);
LAB_147357570:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473575c4 FUN_1473575c4 body=138 status=ok
// SIG undefined FUN_1473575c4(void)

void FUN_1473575c4(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 9999;
  if (*(int *)(param_1 + 0x17ce0) != 0) {
    uVar2 = (ulonglong)(*(int *)(param_1 + 0x17ce0) - 1);
  }
  lVar1 = *(longlong *)(param_1 + 0x4460 + uVar2 * 8);
  if (*(char *)(lVar1 + 0x98) == '\x01') {
    FUN_14735764e(*(undefined8 *)(param_1 + 0x4430),param_1 + 0x158);
  }
  if (*(char *)(lVar1 + 0x9c) == '\x01') {
    FUN_1473576f7(*(undefined8 *)(param_1 + 0x4440),param_1 + 0x158);
  }
  if (*(char *)(lVar1 + 0x9b) == '\x01') {
    FUN_1473577a3(*(undefined8 *)(param_1 + 0x4438),param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x442c) = 0;
  return;
}



// FUNCTION 14735764e FUN_14735764e body=168 status=ok
// SIG undefined FUN_14735764e(void)

void FUN_14735764e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    cVar1 = FUN_14314e5be();
    if (cVar1 != '\0') {
      local_20 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x48) * 0x10);
      if (((*(longlong *)(param_2 + 0x1f48) != local_20) || (*(int *)(param_2 + 0x1f50) != 0)) ||
         (*(int *)(param_2 + 0x1f54) != 0x1000)) {
        *(longlong *)(param_2 + 0x1f48) = local_20;
        *(undefined8 *)(param_2 + 0x1f50) = 0x100000000000;
        (**(code **)(**(longlong **)(param_2 + 0x18) + 0x38))
                  (*(longlong **)(param_2 + 0x18),0,1,&local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473576f7 FUN_1473576f7 body=171 status=ok
// SIG undefined FUN_1473576f7(void)

void FUN_1473576f7(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    cVar1 = FUN_14314e5be();
    if (cVar1 != '\0') {
      local_20 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x48) * 0x10);
      if (((*(longlong *)(param_2 + 0x22c8) != local_20) || (*(int *)(param_2 + 0x22d0) != 0)) ||
         (*(int *)(param_2 + 0x22d4) != 0x1000)) {
        *(longlong *)(param_2 + 0x22c8) = local_20;
        *(undefined8 *)(param_2 + 0x22d0) = 0x100000000000;
        (**(code **)(**(longlong **)(param_2 + 0x18) + 0xb0))
                  (*(longlong **)(param_2 + 0x18),0,1,&local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473577a3 FUN_1473577a3 body=171 status=ok
// SIG undefined FUN_1473577a3(void)

void FUN_1473577a3(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    cVar1 = FUN_14314e5be();
    if (cVar1 != '\0') {
      local_20 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x48) * 0x10);
      if (((*(longlong *)(param_2 + 0x21e8) != local_20) || (*(int *)(param_2 + 0x21f0) != 0)) ||
         (*(int *)(param_2 + 0x21f4) != 0x1000)) {
        *(longlong *)(param_2 + 0x21e8) = local_20;
        *(undefined8 *)(param_2 + 0x21f0) = 0x100000000000;
        (**(code **)(**(longlong **)(param_2 + 0x18) + 0x80))
                  (*(longlong **)(param_2 + 0x18),0,1,&local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147357866 FUN_147357866 body=171 status=ok
// SIG undefined FUN_147357866(void)

void FUN_147357866(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    cVar1 = FUN_14314e5be();
    if (cVar1 != '\0') {
      local_20 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x48) * 0x10);
      if (((*(longlong *)(param_2 + 0x23a8) != local_20) || (*(int *)(param_2 + 0x23b0) != 0)) ||
         (*(int *)(param_2 + 0x23b4) != 0x1000)) {
        *(longlong *)(param_2 + 0x23a8) = local_20;
        *(undefined8 *)(param_2 + 0x23b0) = 0x100000000000;
        (**(code **)(**(longlong **)(param_2 + 0x18) + 0x238))
                  (*(longlong **)(param_2 + 0x18),0,1,&local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147357912 FUN_147357912 body=359 status=ok
// SIG undefined FUN_147357912(void)

void FUN_147357912(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = 9999;
  if (*(int *)(param_1 + 0x17ce0) != 0) {
    uVar4 = (ulonglong)(*(int *)(param_1 + 0x17ce0) - 1);
  }
  lVar2 = *(longlong *)(param_1 + 0x4460 + uVar4 * 8);
  lVar3 = *(longlong *)(lVar2 + 0x38);
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = (uint)*(ushort *)(lVar3 + 0xb2) & *(uint *)(param_1 + 0x279c);
    local_28 = param_1;
    FUN_14736796c(&local_28,lVar3,param_1 + 0x440e,param_1 + 0x42b8);
  }
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (lVar3 != 0) {
    uVar5 = uVar5 | (uint)*(ushort *)(lVar3 + 0xb2) & *(uint *)(param_1 + 0x279c);
    local_28 = param_1;
    FUN_147367cd7(&local_28,lVar3,param_1 + 0x4408,param_1 + 0x4168);
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  if (lVar2 != 0) {
    uVar5 = uVar5 | (uint)*(ushort *)(lVar2 + 0xb2) & *(uint *)(param_1 + 0x279c);
    local_28 = param_1;
    FUN_147368045(&local_28,lVar2,param_1 + 0x4410,param_1 + 0x4328);
  }
  uVar1 = *(uint *)(param_1 + 0x27a0);
  if ((DAT_14c760aec == 0) || ((uVar1 & ~uVar5) != 0 || (uVar5 & ~uVar1) == 0)) {
    if (uVar1 != uVar5) {
      *(uint *)(param_1 + 0x27a0) = uVar5;
      FUN_143142d90(param_1);
      *(undefined4 *)(param_1 + 0x440e) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x4408) = 0xffff;
    }
  }
  else {
    *(uint *)(param_1 + 0x27a0) = uVar5;
  }
  if (*(int *)(param_1 + 0x2798) != 0) {
    FUN_143142ec2(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147357a7a FUN_147357a7a body=385 status=ok
// SIG undefined FUN_147357a7a(void)

void FUN_147357a7a(longlong param_1,undefined4 param_2,int param_3,uint param_4)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar1 = param_1 + -0x18;
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(param_1 + 0x26b0),(param_4 + (param_4 == 0)) * param_3);
  FUN_147357912(lVar1);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x5a0))(lVar1);
  uVar3 = *(uint *)(param_1 + 0x26b0);
  uVar6 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    iVar7 = 3;
  }
  else if (uVar3 == 2) {
    iVar7 = 2;
  }
  else {
    iVar7 = (uint)(uVar3 == 5) * 2 + 1;
  }
  iVar7 = iVar7 * param_3 + (uint)(uVar3 == 1) * 2;
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x14);
    *piVar2 = *piVar2 + param_3 * param_4;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x18);
    *piVar2 = *piVar2 + iVar7 * param_4;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x26b0);
  }
  if (((uint)uVar6 < 5) && ((0x17U >> ((uint)uVar6 & 0x1f) & 1) != 0)) {
    iVar5 = *(int *)(&DAT_14a344b58 + uVar6 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x3ba,
                  L"Unknown primitive type: %u");
    iVar5 = 4;
  }
  if (*(int *)(param_1 + 0x1d50) != iVar5) {
    *(int *)(param_1 + 0x1d50) = iVar5;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xc0))();
  }
  plVar4 = *(longlong **)(param_1 + 0x128);
  if (param_4 < 2) {
    (**(code **)(*plVar4 + 0x68))(plVar4,iVar7,param_2);
  }
  else {
    (**(code **)(*plVar4 + 0xa8))(plVar4,iVar7,param_4,param_2,0);
  }
  FUN_1473558a2(lVar1);
  return;
}



// FUNCTION 147357bfc FUN_147357bfc body=597 status=ok
// SIG undefined FUN_147357bfc(void)

void FUN_147357bfc(longlong param_1,longlong param_2,undefined4 param_3,int param_4,int param_5,
                  undefined4 param_6,int param_7,uint param_8)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = param_1 + -0x18;
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(param_1 + 0x26b0),(param_8 + (param_8 == 0)) * param_7);
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x14);
    *piVar2 = *piVar2 + param_8 * param_7;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x18);
    *piVar2 = *piVar2 + param_5 * param_8;
  }
  FUN_147357912(lVar1);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x5a0))(lVar1);
  iVar6 = 0x2a;
  if (*(int *)(param_2 + 0x24) == 2) {
    iVar6 = 0x39;
  }
  uVar3 = *(uint *)(param_1 + 0x26b0);
  if (uVar3 == 0) {
    iVar7 = 3;
  }
  else if (uVar3 == 2) {
    iVar7 = 2;
  }
  else {
    iVar7 = (uint)(uVar3 == 5) * 2 + 1;
  }
  bVar8 = uVar3 == 1;
  lVar5 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x40a0) = lVar5;
  if ((((*(char *)(param_1 + 0x25c8) != '\0') ||
       (*(longlong *)(param_1 + 0x1d40) != *(longlong *)(param_2 + 0x38))) ||
      (*(int *)(param_1 + 0x1d48) != iVar6)) || (*(int *)(param_1 + 0x1d4c) != 0)) {
    *(longlong *)(param_1 + 0x1d40) = *(longlong *)(param_2 + 0x38);
    *(int *)(param_1 + 0x1d48) = iVar6;
    *(undefined4 *)(param_1 + 0x1d4c) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x98))();
    uVar3 = *(uint *)(param_1 + 0x26b0);
  }
  if ((uVar3 < 5) && ((0x17U >> (uVar3 & 0x1f) & 1) != 0)) {
    iVar6 = *(int *)(&DAT_14a344b58 + (ulonglong)uVar3 * 4);
  }
  else {
    FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x3ba,
                  L"Unknown primitive type: %u");
    iVar6 = 4;
  }
  if (*(int *)(param_1 + 0x1d50) != iVar6) {
    *(int *)(param_1 + 0x1d50) = iVar6;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xc0))();
  }
  iVar6 = iVar7 * param_7 + (uint)bVar8 * 2;
  plVar4 = *(longlong **)(param_1 + 0x128);
  if (param_4 == 0 && param_8 < 2) {
    (**(code **)(*plVar4 + 0x60))(plVar4,iVar6,param_6,param_3);
  }
  else {
    (**(code **)(*plVar4 + 0xa0))(plVar4,iVar6,param_8,param_6,param_3,param_4);
  }
  FUN_1473558a2(lVar1);
  return;
}



// FUNCTION 147357e52 FUN_147357e52 body=462 status=ok
// SIG undefined FUN_147357e52(void)

void FUN_147357e52(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  byte param_5,undefined4 param_6,byte param_7,undefined1 param_8)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8 [8];
  longlong *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_78 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x2c8))
            (*(longlong **)(param_1 + 0x140),8,local_b8);
  plVar3 = local_78;
  lVar5 = 8;
  iVar4 = 9;
  do {
    local_70 = (int)lVar5;
    bVar6 = lVar5 == 0;
    lVar5 = lVar5 + -1;
    if (bVar6) goto LAB_147357f4e;
    iVar4 = iVar4 + -1;
  } while (local_b8[lVar5] == 0);
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      if ((*(char *)(param_2 + lVar5) == '\x01') && (local_b8[lVar5] != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x140) + 400))
                  (*(longlong **)(param_1 + 0x140),local_b8[lVar5],param_4);
        iVar4 = local_70;
      }
      lVar5 = lVar5 + 1;
      param_4 = param_4 + 0x10;
    } while (lVar5 < iVar4);
  }
LAB_147357f4e:
  if (param_5 == 0) {
    if ((plVar3 != (longlong *)0x0 & param_7) == 0) goto LAB_147357f86;
  }
  else if (plVar3 == (longlong *)0x0) goto LAB_147357f86;
  uVar2 = param_5 + 2;
  if (param_7 == 0) {
    uVar2 = (uint)param_5;
  }
  local_c8 = param_8;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x1a8))
            (*(longlong **)(param_1 + 0x140),plVar3,uVar2,param_6);
LAB_147357f86:
  if ((*(char *)(param_1 + 0x17d40) == '\x01') && (*(longlong *)(param_1 + 0x17d58) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d58) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  if (0 < local_70) {
    lVar5 = 0;
    iVar4 = local_70;
    do {
      if ((longlong *)local_b8[lVar5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_b8[lVar5] + 0x10))();
        iVar4 = local_70;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147358022 FUN_147358022 body=309 status=ok
// SIG undefined FUN_147358022(void)

void FUN_147358022(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  int local_44;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xc0))();
  if (iVar1 < 0) {
    local_58 = *(ulonglong *)(param_1 + 0x150);
    FUN_143142730(iVar1,"Direct3DDevice->CreateQuery(&Desc, Query.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x505);
  }
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe0))(*(longlong **)(param_1 + 0x140),local_40);
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x378))();
  local_44 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
            (*(longlong **)(param_1 + 0x140),local_40,&local_44,4);
  if (local_44 == 0) {
    do {
      FUN_14000f986(0x3ba3d70a);
      local_44 = 0;
      local_58 = local_58 & 0xffffffff00000000;
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                (*(longlong **)(param_1 + 0x140),local_40,&local_44,4);
    } while (local_44 == 0);
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147358166 FUN_147358166 body=35 status=ok
// SIG undefined FUN_147358166(void)

undefined8 FUN_147358166(void)

{
  FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x57c,
                L"FD3D11DynamicRHI::RHIGetCommandContext should never be called. D3D11 RHI does not implement parallel command list execution."
               );
  return 0;
}



// FUNCTION 14735819e FUN_14735819e body=47 status=ok
// SIG undefined FUN_14735819e(void)

void FUN_14735819e(longlong param_1)

{
  char cVar1;
  
  do {
    if (*(longlong *)(param_1 + 0x40e8) == 0) break;
    cVar1 = FUN_14735a61c(*(longlong *)(param_1 + 0x40e8),param_1,0);
  } while (cVar1 != '\0');
  FUN_14735873c(0);
  return;
}



// FUNCTION 1473581ce FUN_1473581ce body=113 status=ok
// SIG undefined FUN_1473581ce(void)

void FUN_1473581ce(longlong param_1)

{
  if (*(char *)(param_1 + 0x17f08) == '\x01') {
    if (DAT_14ca84df4 == 0x1002) {
      agsDriverExtensionsDX11_EndUAVOverlap
                (*(undefined8 *)(param_1 + 0x2680),*(undefined8 *)(param_1 + 0x140));
    }
    else if (DAT_14ca84df4 == 0x8086) {
      if (*(char *)(param_1 + 0x2690) == '\x01') {
        FUN_144bcda70(*(undefined8 *)(param_1 + 0x2688));
      }
    }
    else if (DAT_14ca84df4 == 0x10de) {
      FUN_1425008a0(*(undefined8 *)(param_1 + 0x150));
    }
    *(undefined1 *)(param_1 + 0x17f08) = 0;
  }
  return;
}



// FUNCTION 1473582de FUN_1473582de body=81 status=ok
// SIG undefined FUN_1473582de(void)

undefined8 * FUN_1473582de(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0x23;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14a3431c0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147358330 FUN_147358330 body=62 status=ok
// SIG undefined FUN_147358330(void)

void FUN_147358330(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 14735836e FUN_14735836e body=151 status=ok
// SIG undefined FUN_14735836e(void)

longlong FUN_14735836e(longlong param_1,uint param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_20[0] = 0;
  }
  else {
    local_30 = local_20;
    local_38 = local_38 & 0xffffffff00000000;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))
                      (*(longlong **)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),0,1);
    if (iVar1 < 0) {
      local_38 = 0;
      FUN_143142730(iVar1,"Context->Map(StagedRead, 0, D3D11_MAP_READ, 0, &MappedSubresource)",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x651);
    }
    local_20[0] = (ulonglong)param_2 + local_20[0];
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_20[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147358426 FUN_147358426 body=368 status=ok
// SIG undefined FUN_147358426(void)

void FUN_147358426(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint *local_68;
  uint local_58 [4];
  undefined1 *puStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0 || param_3 == 0) goto LAB_147358568;
  puVar1 = (undefined8 *)(param_3 + 0x20);
  plVar3 = *(longlong **)(param_3 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
LAB_147358497:
    local_58[0] = param_5;
    local_58[1] = 3;
    local_58[2] = 0;
    local_58[3] = 0x20000;
    puStack_48 = (undefined1 *)0x0;
    plVar4 = *(longlong **)(param_1 + 0x138);
    if (plVar3 != (longlong *)0x0) {
      *puVar1 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,local_58,0,puVar1);
    if (iVar2 < 0) {
      local_88 = *(ulonglong *)(param_1 + 0x138);
      FUN_143142730(iVar2,
                    "Direct3DDevice->CreateBuffer(&StagedReadDesc, NULL, StagingBuffer->StagedRead.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x680);
    }
    *(uint *)(param_3 + 0x28) = param_5;
    plVar4 = *(longlong **)(param_1 + 0x128);
    *(longlong **)(param_3 + 0x18) = plVar4;
    plVar3 = *(longlong **)(param_3 + 0x20);
  }
  else {
    if (*(uint *)(param_3 + 0x28) < param_5) {
      *puVar1 = 0;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar3 = (longlong *)*puVar1;
      goto LAB_147358497;
    }
    plVar4 = *(longlong **)(param_1 + 0x128);
  }
  local_68 = local_58;
  local_58[3] = param_5 + param_4;
  local_58[1] = 0;
  local_58[2] = 0;
  puStack_48 = &DAT_100000001;
  local_78 = *(undefined8 *)(param_2 + 0x38);
  local_70 = 0;
  local_80 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  local_58[0] = param_4;
  (**(code **)(*plVar4 + 0x170))(plVar4,plVar3,0,0);
LAB_147358568:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147358606 FUN_147358606 body=293 status=ok
// SIG undefined FUN_147358606(void)

void FUN_147358606(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0xa0) & 1) == 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      if ((*(byte *)(puVar2 + 0x14) & 1) == 0) {
        FUN_14735873c(puVar2);
      }
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else {
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar4;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a343a00;
      puVar3[2] = puVar2;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735873c FUN_14735873c body=320 status=ok
// SIG undefined FUN_14735873c(void)

void FUN_14735873c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*DAT_14ca83900 + 0x30))();
  while (*DAT_14ca75f78 != 0) {
    lVar1 = *DAT_14ca75f78;
    if ((longlong *)(lVar1 + 8) == (longlong *)0x0) break;
    lVar2 = *(longlong *)(lVar1 + 8);
    while( true ) {
      local_50 = 0;
      local_58 = CONCAT44(local_58._4_4_,(uint)(lVar2 != param_1));
      iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x140) + 0xe8))
                        (*(longlong **)(lVar4 + 0x140),*(undefined8 *)(lVar1 + 0x10),&local_50,4);
      if ((iVar3 != 1) && (local_50 != 0 || iVar3 != 0)) break;
      if (lVar2 != param_1) goto LAB_1473587e4;
    }
    if (iVar3 < 0) {
      local_58 = 0;
      FUN_143142730(iVar3,"Result",".\\Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp",0x6ee);
    }
    lVar1 = *(longlong *)(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    FUN_144a23f14(*(ulonglong *)(lVar1 + 0x80) >> 0x3b & 0xffffffffffffff07,
                  *(undefined4 *)(lVar1 + 0x1c));
    local_49 = 1;
    FUN_1447439e4(lVar1,&local_49);
    FUN_14735887e();
    if (lVar2 == param_1) break;
  }
LAB_1473587e4:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735887e FUN_14735887e body=201 status=ok
// SIG undefined FUN_14735887e(void)

void FUN_14735887e(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  plVar4 = DAT_14ca75f78;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)*DAT_14ca75f78;
  if (plVar2 != (longlong *)0x0) {
    local_28 = (undefined8 *)0x0;
    plStack_20 = (longlong *)0x0;
    DAT_14ca75f78 = plVar2;
    FUN_147368696(plVar2 + 1,&local_28);
    if (plStack_20 != (longlong *)0x0) {
      (**(code **)(*plStack_20 + 0x10))();
    }
    if (local_28 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_28 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      if ((longlong *)plVar4[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar4[2] + 0x10))();
      }
      puVar3 = (undefined8 *)plVar4[1];
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      FUN_1400020a8(plVar4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147358948 FUN_147358948 body=327 status=ok
// SIG undefined FUN_147358948(void)

void FUN_147358948(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_1446fac86(0xa8);
  FUN_1447247dc(puVar2,0);
  *puVar2 = &PTR_FUN_149e00300;
  local_38 = 0;
  FUN_144a24082(puVar2,L"GraphEvent",1,2);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x20);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  local_28 = puVar2;
  if (*(char *)((longlong)param_2 + 100) == '\0') {
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
    *puVar2 = &PTR_FUN_14a343a48;
    puVar2[2] = local_28;
  }
  else {
    FUN_143152c2c(&local_28);
    if (local_28 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_28 + 1);
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



// FUNCTION 147358ab0 FUN_147358ab0 body=106 status=ok
// SIG undefined FUN_147358ab0(void)

undefined8 * FUN_147358ab0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  uVar1 = *param_3;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0x1b;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_LAB_14a1e4900;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
  *puVar2 = &PTR_FUN_14a33faa0;
  puVar2[4] = 0;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147358b1a FUN_147358b1a body=48 status=ok
// SIG undefined FUN_147358b1a(void)

void FUN_147358b1a(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x10000);
  *(void **)(param_1 + 0x28) = _Dst;
  memset(_Dst,0,0x10000);
  return;
}



// FUNCTION 147358b58 FUN_147358b58 body=145 status=ok
// SIG undefined FUN_147358b58(void)

byte FUN_147358b58(void)

{
  byte bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca75f84) {
    FUN_144b3d300(&DAT_14ca75f84);
    if (DAT_14ca75f84 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"nod3dasync");
      DAT_14ca75f80 = bVar1 ^ 1;
      _Init_thread_footer(&DAT_14ca75f84);
    }
  }
  return DAT_14ca75f80;
}



// FUNCTION 147358bea FUN_147358bea body=2002 status=ok
// SIG undefined FUN_147358bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_147358bea(undefined8 *param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  void *_Dst;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  param_1[4] = 0;
  lVar6 = 0x3d;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar6 + -0x15) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar6 + -5) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar6 + -1) = 0;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0xfd);
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11f) = 0;
  *param_1 = &PTR_FUN_14a33fd00;
  param_1[3] = &PTR_FUN_14a3402c0;
  param_1[0x25] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = &PTR_FUN_14a3431e0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x3f80000000000000;
  param_1[0x4c1] = 0;
  *(undefined4 *)(param_1 + 0x4c2) = 0;
  memset(param_1 + 0x2e,0,0x1808);
  param_1[0x4bd] = 0;
  param_1[0x4be] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2614) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x261c) = 0;
  param_1[0x4c5] = 0;
  *(undefined4 *)(param_1 + 0x4c6) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4c7),4000);
  param_1[0x4cc] = 0;
  param_1[0x4cd] = 0;
  param_1[0x4ce] = 0;
  *(undefined4 *)(param_1 + 0x4cf) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x26c4) = 0;
  param_1[0x820] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  *(undefined1 *)(param_1 + 0x4d2) = 0;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  param_1[0x4df] = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e5] = 0;
  param_1[0x4e6] = 0;
  param_1[0x4e7] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  param_1[0x4f5] = 0;
  param_1[0x4f6] = 0;
  param_1[0x81d] = 0;
  param_1[0x81e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40e4) = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar7 = 0;
  puVar7[1] = 0;
  param_1[0x823] = puVar7;
  param_1[0x822] = puVar7;
  *(undefined1 *)(param_1 + 0x82c) = 0;
  param_1[0x824] = 0;
  param_1[0x825] = 0;
  param_1[0x826] = 0;
  param_1[0x827] = 0;
  param_1[0x883] = 0;
  param_1[0x884] = 0;
  *(undefined4 *)(param_1 + 0x885) = 0x22;
  *(undefined1 *)((longlong)param_1 + 0x442c) = 0;
  param_1[0x886] = 0;
  param_1[0x887] = 0;
  param_1[0x888] = 0;
  param_1[0x889] = 0;
  FUN_1473688b2(param_1 + 0x88a);
  param_1[0x88a] = &PTR_FUN_14a343b20;
  FUN_147368910(param_1 + 0x88a);
  param_1[0x2fa4] = 0;
  param_1[0x2fa2] = 0;
  param_1[0x2fa3] = 0;
  param_1[0x2fa5] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x2fa6) = 0;
  FUN_1473593be(param_1 + 0x2fa7,param_1);
  plVar3 = (longlong *)*param_4;
  param_1[0x2fb9] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  memcpy(param_1 + 0x2fba,param_4 + 1,0x136);
  *(undefined1 *)(param_1 + 0x2fe1) = 0;
  lVar6 = DAT_14ca75fb8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  uVar9 = 0;
  if (*piVar1 == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar4 ^ 1);
  }
  iVar5 = *(int *)(lVar6 + uVar8 * 4);
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x4d8) = iVar5 << 0x14;
  _Dst = (void *)FUN_14001cc68();
  param_1[0x4d7] = _Dst;
  memset(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x4d8));
  DAT_14ca84ed0 = 0;
  DAT_14ca84ec8 = 0;
  local_58 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_14ca84ed0);
  local_48 = (longlong *)0x0;
  iVar5 = (*(code *)**(undefined8 **)param_1[0x25])((undefined8 *)param_1[0x25],&DAT_14a343f28);
  *(bool *)(param_1 + 0x27) = -1 < iVar5;
  lVar6 = DAT_14ca75fa0;
  DAT_14c873434 = 0;
  DAT_14c873464 = 2;
  _DAT_14c873494 = 0x5a;
  _DAT_14c8734c4 = 0x3d;
  _DAT_14c8734f4 = 0x38;
  _DAT_14c873524 = 0x46;
  _DAT_14c873554 = 0x49;
  _DAT_14c873584 = 0x4c;
  _DAT_14c873b84 = 0x50;
  _DAT_14c8735b4 = 0;
  if (*piVar1 != 0x40000002) {
    bVar4 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar4 ^ 1);
  }
  if (*(int *)(lVar6 + uVar9 * 4) == 0) {
    bVar4 = DAT_14c873648 & 0xfd;
    _DAT_14c873c74 = 0x16;
    _DAT_14c873638 = 5;
    _DAT_14c873644 = 0x13;
  }
  else {
    bVar4 = DAT_14c873648 | 2;
    _DAT_14c873c74 = 0x2f;
    _DAT_14c873638 = 4;
    _DAT_14c873644 = 0x2c;
  }
  DAT_14c873648 = bVar4 | 1;
  DAT_14c873c78 = DAT_14c873c78 | 1;
  _DAT_14c873674 = 0x35;
  _DAT_14c873668 = 2;
  DAT_14c873678 = DAT_14c873678 | 1;
  DAT_14c8736a4 = 0x29;
  _DAT_14c8736d4 = 0x23;
  _DAT_14c873704 = 0x22;
  _DAT_14c873734 = 0x22;
  _DAT_14c873764 = 0x10;
  DAT_14c873794 = 0x18;
  DAT_14c8737c4 = 0xb;
  _DAT_14c8737f4 = 0x2c;
  DAT_14c873824 = 0x36;
  _DAT_14c873854 = 0x36;
  _DAT_14c8735e4 = 0x1a;
  _DAT_14c8735d8 = 4;
  DAT_14c873614 = 10;
  DAT_14c873608 = 8;
  _DAT_14c873914 = 0x1a;
  DAT_14c873908 = 4;
  DAT_14c873918 = DAT_14c873918 | 1;
  _DAT_14c8738b4 = 0x33;
  _DAT_14c873884 = 0x53;
  _DAT_14c8738e4 = 0x42;
  _DAT_14c873944 = 0x41;
  _DAT_14c873974 = 0x2a;
  _DAT_14c8739a4 = 0x2b;
  _DAT_14c873a34 = 0x39;
  _DAT_14c873a64 = 0x3b;
  _DAT_14c873a94 = 0xc;
  _DAT_14c873ac4 = 0xe;
  _DAT_14c873af4 = 0x55;
  DAT_14c873af8 = DAT_14c873af8 | 1;
  _DAT_14c8741b4 = 0x56;
  DAT_14c8741b8 = DAT_14c8741b8 | 1;
  _DAT_14c873b24 = 0x1b;
  _DAT_14c873f74 = 0x1e;
  _DAT_14c873fa4 = 0x1f;
  _DAT_14c873bb4 = 0x31;
  _DAT_14c873d34 = 3;
  _DAT_14c873d64 = 0x24;
  _DAT_14c874574 = 0x26;
  DAT_14c8740f4 = 0x11;
  _DAT_14c873e84 = 0x5f;
  _DAT_14c873eb4 = 0x61;
  _DAT_14c873ee4 = 0x3e;
  _DAT_14c874184 = 0x3d;
  _DAT_14c873fd4 = 0xb;
  _DAT_14c874004 = 0xd;
  _DAT_14c8740c4 = 0x67;
  DAT_14c8740c8 = DAT_14c8740c8 | 1;
  _DAT_14c8742d4 = 0x25;
  _DAT_14c874304 = 0x32;
  _DAT_14c874334 = 7;
  _DAT_14c874364 = 8;
  _DAT_14c874394 = 6;
  _DAT_14c8743c4 = 0x40;
  _DAT_14c874454 = 0x68;
  DAT_14c874458 = DAT_14c874458 | 1;
  DAT_14ca84e16 = 1;
  DAT_14ca84e40 = 0x4000;
  DAT_14ca84e64 = 0x4000;
  DAT_14ca84e6c = 0x800;
  DAT_14ca84e50 = 0x10000;
  DAT_14ca84f20 = 1;
  DAT_14ca84f1d = 1;
  DAT_14ca84d90 = 0xf;
  _DAT_14ca84e38 = 0x400000004000;
  DAT_14ca84e01 = 1;
  _DAT_14ca84f24 = 0xffff0000ffff;
  DAT_14ca84f2c = 0xffff;
  DAT_14ca84df9 = 1;
  DAT_14ca8507b = 1;
  _DAT_14ca84ab0 = 1;
  DAT_14ca84ab8 = 1;
  _DAT_14c873c68 = _DAT_14c873638;
  FUN_147359460(param_1);
  memset(param_1 + 0x82d,0,0x2ac);
  lVar6 = FUN_1411d089c();
  uVar2 = *(uint *)(lVar6 + 8);
  iVar5 = *(int *)(param_1 + 0x884);
  *(uint *)(param_1 + 0x884) = iVar5 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0x4424) - iVar5) < uVar2) {
    FUN_1411d0a1e(param_1 + 0x883);
  }
  memset((void *)((longlong)iVar5 * 8 + param_1[0x883]),0,(longlong)(int)uVar2 << 3);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473593be FUN_1473593be body=161 status=ok
// SIG undefined FUN_1473593be(void)

undefined8 * FUN_1473593be(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *param_1 = &PTR_FUN_14a340d50;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  param_1[7] = &PTR_FUN_14a340910;
  param_1[9] = param_2;
  param_1[10] = 0xffffffff00000004;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14006bf18(param_1 + 7,&DAT_14ca85100);
  FUN_14735d30a(param_1,param_2);
  return param_1;
}



// FUNCTION 147359460 FUN_147359460 body=497 status=ok
// SIG undefined FUN_147359460(void)

void FUN_147359460(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_FUN_14a33fad0;
  puVar1[2] = &PTR_LAB_14a33fb00;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14006bf18(puVar1,&DAT_14ca85100);
  *puVar1 = &PTR_FUN_14a343700;
  puVar1[2] = &PTR_FUN_14a343730;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  FUN_147364a40(param_1 + 0x4430,puVar1);
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_FUN_14a33fad0;
  puVar1[2] = &PTR_LAB_14a33fb00;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14006bf18(puVar1,&DAT_14ca85100);
  *puVar1 = &PTR_FUN_14a343700;
  puVar1[2] = &PTR_FUN_14a343730;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  FUN_147364a40(param_1 + 0x4438,puVar1);
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_FUN_14a33fad0;
  puVar1[2] = &PTR_LAB_14a33fb00;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14006bf18(puVar1,&DAT_14ca85100);
  *puVar1 = &PTR_FUN_14a343700;
  puVar1[2] = &PTR_FUN_14a343730;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  FUN_147364a40(param_1 + 0x4440,puVar1);
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_FUN_14a33fad0;
  puVar1[2] = &PTR_LAB_14a33fb00;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14006bf18(puVar1,&DAT_14ca85100);
  *puVar1 = &PTR_FUN_14a343700;
  puVar1[2] = &PTR_FUN_14a343730;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  FUN_147364a40(param_1 + 0x4448,puVar1);
  return;
}



// FUNCTION 147359652 FUN_147359652 body=707 status=ok
// SIG undefined FUN_147359652(void)

void FUN_147359652(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a33fd00;
  param_1[3] = &PTR_FUN_14a3402c0;
  if ((longlong *)param_1[0x2fb9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2fb9] + 0x10))();
  }
  FUN_147359916(param_1 + 0x2fa7);
  if (param_1[0x2fa3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2fa2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2fa2] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[0x88a] = &PTR_FUN_14a343b20;
  FUN_144725486(param_1 + 0x88a);
  FUN_147368a2e(param_1 + 0x88a);
  lVar4 = param_1[0x889];
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (*(code *)**(undefined8 **)(lVar4 + 0x10))(lVar4 + 0x10,1);
    }
  }
  lVar4 = param_1[0x888];
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (*(code *)**(undefined8 **)(lVar4 + 0x10))(lVar4 + 0x10,1);
    }
  }
  lVar4 = param_1[0x887];
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (*(code *)**(undefined8 **)(lVar4 + 0x10))(lVar4 + 0x10,1);
    }
  }
  lVar4 = param_1[0x886];
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (*(code *)**(undefined8 **)(lVar4 + 0x10))(lVar4 + 0x10,1);
    }
  }
  if (param_1[0x883] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x82c) == '\x01') {
    *(undefined1 *)(param_1 + 0x82c) = 0;
  }
  FUN_147359956(param_1 + 0x820);
  if (param_1[0x4f6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x4f6] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)param_1[0x4f5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4f5] + 0x10))();
  }
  lVar4 = 0x2748;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar4) + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0x2708);
  lVar4 = 0x2708;
  do {
    if (*(longlong **)((longlong)param_1 + lVar4) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + lVar4) + 0x10))();
    }
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0x26c8);
  if (param_1[0x4ce] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x4ce] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x4cc] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c7));
  *(undefined4 *)(param_1 + 0x4c6) = 0;
  if (param_1[0x4c5] != 0) {
    FUN_1400020a8();
  }
  FUN_1473659cc(param_1 + 0x4bd);
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x10))();
  }
  if ((longlong *)param_1[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x28] + 0x10))();
  }
  if ((longlong *)param_1[0x26] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x26] + 0x10))();
  }
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x10))();
  }
  param_1[3] = &PTR_LAB_14a1e4500;
  if (param_1[0x22] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x22] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14631aa72(param_1);
  return;
}



// FUNCTION 147359916 FUN_147359916 body=64 status=ok
// SIG undefined FUN_147359916(void)

void FUN_147359916(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a340d50;
  FUN_14735dd1a(param_1 + 0x10);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1 + 7);
  return;
}



// FUNCTION 147359956 FUN_147359956 body=84 status=ok
// SIG undefined FUN_147359956(void)

void FUN_147359956(longlong *param_1)

{
  FUN_14736599b(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_143151d04(param_1 + 2);
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014735999f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1473599aa FUN_1473599aa body=591 status=ok
// SIG undefined FUN_1473599aa(void)

void FUN_1473599aa(longlong param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int *local_68;
  int *local_60;
  uint local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar12 = 0;
  bVar2 = true;
  iVar5 = 0;
  bVar1 = false;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = param_3;
  do {
    if (!bVar2) goto LAB_147359bcc;
    local_50 = (longlong *)0x0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x17dc8) + 0x38))
                      (*(longlong **)(param_1 + 0x17dc8),0,&local_50);
    iVar6 = 2;
    if (iVar3 != -0x7785fffe) {
      if (iVar3 < 0) {
        iVar6 = 1;
      }
      else {
        local_54 = 0;
        local_78 = 0;
        iVar3 = (**(code **)(*local_50 + 0x40))(local_50,0x1c,0,&local_54);
        iVar6 = 1;
        if (iVar3 != -0x7785fffe) {
          if (iVar3 == -0x7785ffde) {
            FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11Device.cpp",0x15d,
                          L"This application cannot be run over a remote desktop configuration");
          }
          else {
            lVar4 = FUN_14001cc68((ulonglong)local_54 * 0x1c +
                                  (ulonglong)((ulonglong)local_54 * 0x1c == 0),0x10);
            local_78 = lVar4;
            iVar3 = (**(code **)(*local_50 + 0x40))(local_50,0x1c,0,&local_54);
            if (iVar3 < 0) {
              local_78 = 0;
              FUN_143142730(iVar3,"Output->GetDisplayModeList(Format,0,&NumModes,ModeList)",
                            ".\\Runtime/Windows/D3D11RHI/Private/D3D11Device.cpp",0x161);
            }
            if ((ulonglong)local_54 != 0) {
              lVar8 = 0;
              do {
                iVar3 = *(int *)(lVar4 + 4 + lVar8);
                uVar10 = *(int *)(lVar4 + lVar8) - *param_2;
                uVar7 = -uVar10;
                if ((int)uVar7 < 0) {
                  uVar7 = uVar10;
                }
                uVar11 = iVar12 - *param_2;
                uVar10 = -uVar11;
                if ((int)uVar10 < 0) {
                  uVar10 = uVar11;
                }
                uVar9 = iVar3 - *param_3;
                uVar11 = -uVar9;
                if ((int)uVar11 < 0) {
                  uVar11 = uVar9;
                }
                uVar13 = iVar5 - *param_3;
                uVar9 = -uVar13;
                if ((int)uVar9 < 0) {
                  uVar9 = uVar13;
                }
                if (!bVar1 || uVar7 <= uVar10 && uVar11 <= uVar9) {
                  iVar12 = *(int *)(lVar4 + lVar8);
                  iVar5 = iVar3;
                }
                lVar8 = lVar8 + 0x1c;
                bVar1 = true;
              } while ((ulonglong)local_54 * 0x1c != lVar8);
            }
            iVar6 = 0;
            param_1 = local_70;
            param_3 = local_60;
            param_2 = local_68;
            if (lVar4 != 0) {
              FUN_1400020a8(lVar4);
              param_1 = local_70;
              param_3 = local_60;
              param_2 = local_68;
            }
          }
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    bVar2 = false;
  } while (iVar6 == 0);
  if (iVar6 == 2) {
LAB_147359bcc:
    *param_2 = iVar12;
    *param_3 = iVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147359bfa FUN_147359bfa body=902 status=ok
// SIG undefined FUN_147359bfa(void)

LARGE_INTEGER * FUN_147359bfa(longlong param_1,LARGE_INTEGER *param_2)

{
  LARGE_INTEGER LVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  int local_8c;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = (longlong *)0x0;
  local_a8.QuadPart = 3;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xc0))();
  if (iVar2 == 0) {
    local_70 = (longlong *)0x0;
    local_a8.QuadPart = 2;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xc0))();
    if (iVar2 == 0) {
      local_78 = (longlong *)0x0;
      local_80 = (longlong *)0x0;
      local_a8.QuadPart = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xc0))();
      if ((iVar2 == 0) &&
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xc0))
                            (*(longlong **)(param_1 + 0x150),&local_a8,&local_80), iVar2 == 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe0))
                  (*(longlong **)(param_1 + 0x140),local_78);
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0x378))();
        local_a8.QuadPart = local_a8.QuadPart & 0xffffffff00000000;
        local_b8 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                  (*(longlong **)(param_1 + 0x140),local_78,&local_a8,4);
        if (local_a8.s.LowPart == 0) {
          do {
            FUN_14000f986(0x3a83126f);
            local_a8.QuadPart = local_a8.QuadPart & 0xffffffff00000000;
            local_b8 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                      (*(longlong **)(param_1 + 0x140),local_78,&local_a8,4);
          } while (local_a8.s.LowPart == 0);
        }
        iVar2 = 0;
        do {
          (**(code **)(**(longlong **)(param_1 + 0x140) + 0xd8))
                    (*(longlong **)(param_1 + 0x140),local_68);
          (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe0))
                    (*(longlong **)(param_1 + 0x140),local_70);
          (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe0))
                    (*(longlong **)(param_1 + 0x140),local_68);
          (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe0))
                    (*(longlong **)(param_1 + 0x140),local_80);
          (**(code **)(**(longlong **)(param_1 + 0x140) + 0x378))();
          local_88 = 0;
          do {
            local_8c = 0;
            QueryPerformanceCounter(&local_a8);
            LVar1 = local_a8;
            local_b8 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                      (*(longlong **)(param_1 + 0x140),local_80,&local_8c,4);
          } while (local_8c == 0);
          local_a8.QuadPart = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                            (*(longlong **)(param_1 + 0x140),local_68,&local_a8,0x10);
          if (iVar3 == 0 && (int)uStack_a0 == 0) {
            local_b8 = 0;
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0xe8))
                              (*(longlong **)(param_1 + 0x140),local_70,&local_88,8);
            if (local_88 != 0 && iVar3 == 0) {
              dVar5 = 1.0 / DAT_14c83f418;
              uVar4 = (ulonglong)dVar5;
              *param_2 = LVar1;
              param_2[1].QuadPart =
                   (longlong)(dVar5 - 9.223372036854776e+18) & (longlong)uVar4 >> 0x3f | uVar4;
              param_2[2].QuadPart = local_88;
              param_2[3].QuadPart = (LONGLONG)local_a8;
              *(undefined1 *)(param_2 + 4) = 1;
              goto LAB_147359d14;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 10);
      }
      *(undefined1 *)(param_2 + 4) = 0;
LAB_147359d14:
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    else {
      *(undefined1 *)(param_2 + 4) = 0;
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  else {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147359f81 FUN_147359f81 body=364 status=ok
// SIG undefined FUN_147359f81(void)

void FUN_147359f81(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca76030);
  local_30 = 0x100000000;
  local_28 = &DAT_14ca75ff0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca76008 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_70 = &DAT_14ca75fe0;
  local_48 = &DAT_14ca75fe0;
  local_40 = &DAT_14ca75fe0;
  local_38 = 0;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_1473695a0(local_40,*(int *)(local_40 + 1) - *(int *)((longlong)local_40 + 0x34));
    }
  }
  FUN_1473697c0();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca76030);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735a0fa FUN_14735a0fa body=159 status=ok
// SIG undefined FUN_14735a0fa(void)

void FUN_14735a0fa(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0;
  do {
    FUN_14315595f(*(undefined8 *)((longlong)&DAT_14ca76090 + lVar2),
                  *(undefined4 *)((longlong)&DAT_14ca76098 + lVar2));
    *(undefined4 *)((longlong)&DAT_14ca76098 + lVar2) = 0;
    if (*(int *)((longlong)&DAT_14ca7609c + lVar2) != 0) {
      FUN_14736a2c0((longlong)&DAT_14ca76090 + lVar2);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x110);
  puVar3 = &DAT_14ca761a0;
  lVar2 = 0;
  do {
    lVar1 = 0;
    do {
      FUN_14315595f(*(undefined8 *)((longlong)puVar3 + lVar1),
                    *(undefined4 *)((longlong)puVar3 + lVar1 + 8));
      *(undefined4 *)((longlong)puVar3 + lVar1 + 8) = 0;
      if (*(int *)((longlong)puVar3 + lVar1 + 0xc) != 0) {
        FUN_14736a2c0((longlong)puVar3 + lVar1);
      }
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != 0x110);
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x22;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 14735a19a FUN_14735a19a body=38 status=ok
// SIG undefined FUN_14735a19a(void)

longlong * FUN_14735a19a(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



// FUNCTION 14735a1c0 FUN_14735a1c0 body=38 status=ok
// SIG undefined FUN_14735a1c0(void)

longlong * FUN_14735a1c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



// FUNCTION 14735a204 FUN_14735a204 body=131 status=ok
// SIG undefined FUN_14735a204(void)

undefined8 * FUN_14735a204(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_20;
  local_28 = &local_38;
  local_30 = &LAB_143152e42;
  local_20 = param_1;
  cVar1 = FUN_1415d421a();
  local_38 = (undefined8 *)0x0;
  if ((cVar1 == '\0') ||
     (iVar2 = GFSDK_Aftermath_DX11_CreateContextHandle(param_2,&local_38), puVar3 = local_38,
     iVar2 != 1)) {
    puVar3 = (undefined8 *)0x0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 14735a288 FUN_14735a288 body=196 status=ok
// SIG undefined FUN_14735a288(void)

longlong * FUN_14735a288(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f) = 0;
  *(char *)((longlong)param_1 + 0x23) = param_2;
  local_20 = (ulonglong)((param_2 != '\x01') + 1);
  lVar4 = (**(code **)(*DAT_14ca83900 + 0x30))();
  plVar1 = *(longlong **)(lVar4 + 0x150);
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,&local_20,param_1);
  if (iVar3 < 0) {
    local_28 = plVar1;
    FUN_143142730(iVar3,"Device->CreateQuery(&Desc, Resource.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp",0x2b);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735a34e FUN_14735a34e body=118 status=ok
// SIG undefined FUN_14735a34e(void)

void FUN_14735a34e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar3 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (*(longlong *)(lVar3 + 0x40f0) == param_1) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar4 = 0;
      if (lVar1 != lVar3 + 0x40e8) {
        lVar4 = lVar1 + -0x18;
      }
      *(longlong *)(lVar3 + 0x40f0) = lVar4;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10) = puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    *(longlong *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14735a3c4 FUN_14735a3c4 body=90 status=ok
// SIG undefined FUN_14735a3c4(void)

void FUN_14735a3c4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_14735a34e();
  lVar1 = (**(code **)(*DAT_14ca83900 + 0x30))();
  if (*(longlong *)(lVar1 + 0x40e8) == 0) {
    plVar2 = (longlong *)(lVar1 + 0x40e8);
    *plVar2 = param_1;
  }
  else {
    *(longlong *)(*(longlong *)(lVar1 + 0x40f0) + 0x18) = param_1;
    plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x40f0) + 0x18);
  }
  *(longlong **)(param_1 + 0x10) = plVar2;
  *(longlong *)(lVar1 + 0x40f0) = param_1;
  return;
}



// FUNCTION 14735a41e FUN_14735a41e body=182 status=ok
// SIG undefined FUN_14735a41e(void)

undefined8 * FUN_14735a41e(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1c;
    *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
    *puVar1 = &PTR_FUN_14a1e4a50;
    uVar2 = 1;
  }
  else {
    if (param_3 != 2) {
      *param_2 = 0;
      return param_2;
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1c;
    *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
    *puVar1 = &PTR_FUN_14a1e4a50;
    uVar2 = 0;
  }
  FUN_14735a288(puVar1 + 2,uVar2);
  *puVar1 = &PTR_FUN_14a3431f8;
  puVar1[7] = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14735a500 FUN_14735a500 body=60 status=ok
// SIG undefined FUN_14735a500(void)

void FUN_14735a500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x128);
  *(char *)(param_2 + 0x31) = *(char *)(param_2 + 0x31) + '\x01';
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(param_2 + 0x10));
  *(longlong *)(param_2 + 0x18) = param_2 + 0x38;
  FUN_14735a3c4(param_2 + 0x10);
  return;
}



// FUNCTION 14735a53c FUN_14735a53c body=223 status=ok
// SIG undefined FUN_14735a53c(void)

undefined8 FUN_14735a53c(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  char extraout_AL;
  undefined7 uVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  byte bVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined7)(local_40 >> 8);
  if (*(char *)(param_2 + 0x30) != *(char *)(param_2 + 0x32)) {
    bVar5 = 0;
    do {
      cVar1 = FUN_147412706();
      if (cVar1 == '\0') {
        if (!(bool)(~bVar5 & *(char *)(param_2 + 0x30) != *(char *)(param_2 + 0x31))) {
          FUN_14735a61c(param_2 + 0x10,param_1,param_4);
          uVar4 = extraout_var;
          if (extraout_AL == '\0') goto LAB_14735a613;
          break;
        }
      }
      else if ((char)param_4 == '\0') {
LAB_14735a613:
        uVar3 = 0;
        uVar2 = 0;
        goto LAB_14735a56d;
      }
      local_50 = 0;
      local_48 = 0;
      uVar3 = FUN_14007658c(&DAT_14ca850c8,&local_50,5);
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar5 = 1;
    } while (*(char *)(param_2 + 0x30) != *(char *)(param_2 + 0x32));
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = CONCAT71(uVar4,1);
LAB_14735a56d:
  *param_3 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14735a61c FUN_14735a61c body=207 status=ok
// SIG undefined FUN_14735a61c(void)

ulonglong FUN_14735a61c(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)((longlong)param_1 + 0x21) != *(char *)((longlong)param_1 + 0x22)) {
    local_48 = *(char *)((longlong)param_1 + 0x23) == '\0';
    local_38 = 0;
    local_40 = param_3;
    uVar1 = FUN_143143b1c(param_2,*param_1,&local_28,8);
    uVar2 = (ulonglong)uVar1;
    if ((char)uVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x23) == '\0') {
        uVar3 = *(ulonglong *)(param_2 + 0x4158) / 1000000;
        local_28 = local_28 / (uVar3 + (uVar3 == 0));
      }
      *(ulonglong *)param_1[1] = local_28;
      param_1[1] = 0;
      FUN_14735a34e(param_1);
      *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_1 + 0x21);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735a6ec FUN_14735a6ec body=242 status=ok
// SIG undefined FUN_14735a6ec(void)

void FUN_14735a6ec(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_14c842750 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x20) {
LAB_14735a7be:
                    /* WARNING: Could not recover jumptable at 0x00014735a7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*param_1 + 0x140) + 0xe0))
                (*(longlong **)(*param_1 + 0x140),param_1[1]);
      return;
    }
  }
  else {
    cVar2 = FUN_144a5d717();
    if (cVar2 != '\0') goto LAB_14735a7be;
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar3;
  DAT_14ca85130 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a343b80;
  puVar3[2] = plVar1;
  return;
}



// FUNCTION 14735a7de FUN_14735a7de body=141 status=ok
// SIG undefined FUN_14735a7de(void)

longlong * FUN_14735a7de(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[1] = 0;
  local_18 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x150) + 0xc0))
                    (*(longlong **)(param_2 + 0x150),&local_18,param_1 + 1);
  if (iVar1 < 0) {
    local_28 = *(undefined8 *)(*param_1 + 0x150);
    FUN_143142730(iVar1,"D3DRHI->GetDevice()->CreateQuery(&QueryDesc,Query.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp",0x193);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735a86c FUN_14735a86c body=83 status=ok
// SIG undefined FUN_14735a86c(void)

undefined8 * FUN_14735a86c(undefined8 *param_1,char param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((param_2 == '\0') || (cVar1 = FUN_144a5d717(), cVar1 == '\0')) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    cVar1 = FUN_147412706();
    *param_1 = 0;
    if (cVar1 == '\0') {
      return param_1;
    }
    if (DAT_14c842750 != '\x01') {
      return param_1;
    }
    puVar2 = &DAT_14ca85100;
    cVar1 = FUN_1431eb928(&DAT_14ca85100);
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 14735a8c0 FUN_14735a8c0 body=242 status=ok
// SIG undefined FUN_14735a8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14735a8c0(undefined8 param_1)

{
  double dVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147359bfa(param_1,local_38);
  if (local_18 == '\x01') {
    dVar1 = (((double)CONCAT44(0x43300000,(int)local_38._0_8_) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,SUB84(local_38._0_8_,4)) - 1.9342813113834067e+25)) *
            DAT_14c83f418 * 1000000.0;
    _DAT_14ca81408 = (ulonglong)dVar1;
    _DAT_14ca81408 =
         (longlong)(dVar1 - 9.223372036854776e+18) & (longlong)_DAT_14ca81408 >> 0x3f |
         _DAT_14ca81408;
    dVar1 = (1000000.0 /
            (((double)CONCAT44(0x43300000,(int)local_38._24_8_) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,SUB84(local_38._24_8_,4)) - 1.9342813113834067e+25))) *
            (((double)CONCAT44(0x43300000,(int)local_38._16_8_) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,SUB84(local_38._16_8_,4)) - 1.9342813113834067e+25));
    _DAT_14ca81400 = (ulonglong)dVar1;
    _DAT_14ca81400 =
         (longlong)(dVar1 - 9.223372036854776e+18) & (longlong)_DAT_14ca81400 >> 0x3f |
         _DAT_14ca81400;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735a9b4 FUN_14735a9b4 body=486 status=ok
// SIG undefined FUN_14735a9b4(void)

void FUN_14735a9b4(longlong param_1)

{
  ulonglong _Size;
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14ca813bd == '\x01') {
    bVar7 = (DAT_14ca813bc & 1) == 0;
  }
  else {
    FUN_143143df2(*(undefined8 *)(param_1 + 0x10));
    bVar7 = DAT_14ca813c0 == 0;
    DAT_14ca813bc = !bVar7;
    DAT_14ca813bd = '\x01';
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (!bVar7) {
    iVar1 = *(int *)(param_1 + 0x18);
    lVar6 = (longlong)iVar1;
    _Size = lVar6 * 8;
    lVar4 = _Size + 8 + (ulonglong)(_Size + 8 == 0);
    if (0xfffffffffffffff7 < _Size) {
      lVar4 = -1;
    }
    if (lVar6 < 0) {
      lVar4 = -1;
    }
    plVar2 = (longlong *)FUN_14001cc68(lVar4);
    plVar3 = plVar2 + 1;
    *plVar2 = lVar6;
    if (lVar6 == 0) {
      *(longlong **)(param_1 + 0x28) = plVar3;
      puVar5 = (undefined8 *)FUN_14001cc68(lVar4,0x10);
      *puVar5 = 0;
      *(undefined8 **)(param_1 + 0x30) = puVar5 + 1;
    }
    else {
      memset(plVar3,0,_Size);
      *(longlong **)(param_1 + 0x28) = plVar3;
      plVar3 = (longlong *)FUN_14001cc68(lVar4);
      *plVar3 = lVar6;
      memset(plVar3 + 1,0,_Size);
      *(longlong **)(param_1 + 0x30) = plVar3 + 1;
      if (0 < iVar1) {
        lVar6 = 0;
        lVar4 = 0;
        do {
          local_40 = 2;
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x150);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar6);
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6);
          if (plVar2 != (longlong *)0x0) {
            *puVar5 = 0;
            (**(code **)(*plVar2 + 0x10))();
          }
          iVar1 = (**(code **)(*plVar3 + 0xc0))(plVar3,&local_40,puVar5);
          DAT_14ca813bc = DAT_14ca813bc & iVar1 == 0;
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x150);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar6);
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar6);
          if (plVar2 != (longlong *)0x0) {
            *puVar5 = 0;
            (**(code **)(*plVar2 + 0x10))();
          }
          iVar1 = (**(code **)(*plVar3 + 0xc0))(plVar3,&local_40,puVar5);
          DAT_14ca813bc = DAT_14ca813bc & iVar1 == 0;
          lVar4 = lVar4 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar4 < *(int *)(param_1 + 0x18));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735ab9c FUN_14735ab9c body=266 status=ok
// SIG undefined FUN_14735ab9c(void)

void FUN_14735ab9c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(*plVar1 + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(*plVar1 + lVar4 * 8) = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar4 * 8) = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x18));
    lVar4 = *plVar1;
    if (lVar4 == 0) goto LAB_14735ac51;
  }
  lVar3 = *(longlong *)(lVar4 + -8);
  if (lVar3 != 0) {
    lVar5 = lVar3 * 8;
    do {
      plVar2 = *(longlong **)(lVar4 + -8 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  thunk_FUN_1400020a8(lVar4 + -8,lVar3 * 8 + 8);
LAB_14735ac51:
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar4 + -8);
    if (lVar3 != 0) {
      lVar5 = lVar3 * 8;
      do {
        plVar2 = *(longlong **)(lVar4 + -8 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    thunk_FUN_1400020a8(lVar4 + -8,lVar3 * 8 + 8);
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14735aca6 FUN_14735aca6 body=338 status=ok
// SIG undefined FUN_14735aca6(void)

undefined8 FUN_14735aca6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x140);
  local_98 = 0;
  iVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(param_1 + 0x10),param_2,0x10);
  QueryPerformanceCounter(&local_88);
  if (iVar3 == 1) {
    dVar2 = (double)local_88.QuadPart * DAT_14c83f420;
    do {
      QueryPerformanceCounter(&local_88);
      if (0.5 <= ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0))
      break;
      FUN_14000f986(0x3ba3d70a);
      local_98 = 0;
      iVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(param_1 + 0x10),param_2,0x10);
    } while (iVar3 == 1);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735adfa FUN_14735adfa body=168 status=ok
// SIG undefined FUN_14735adfa(void)

void FUN_14735adfa(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 3;
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x150);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,&local_28,(undefined8 *)(param_1 + 0x10));
  if (iVar3 < 0) {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x150);
    FUN_143142730(iVar3,
                  "D3DRHI->GetDevice()->CreateQuery(&QueryDesc, DisjointQuery.GetInitReference())",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp",0x34b);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735aea6 FUN_14735aea6 body=644 status=ok
// SIG undefined FUN_14735aea6(void)

longlong *
FUN_14735aea6(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,undefined8 *param_5,
             int *param_6)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  int local_d0;
  int *local_c8;
  int local_b8;
  int local_b4;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_64;
  int local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x50))(*(longlong **)(lVar5 + 0x70),&local_74);
  if (local_58 == 3) {
    *param_5 = *(undefined8 *)param_4;
    param_5[1] = *(undefined8 *)(param_4 + 2);
    plVar2 = *(longlong **)(lVar5 + 0x70);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  else {
    local_80 = param_4[2];
    local_8c = *param_4;
    local_88 = param_4[1];
    local_7c = param_4[3];
    iVar7 = local_80 - local_8c;
    iVar8 = local_7c - local_88;
    local_78 = 1;
    local_84 = 0;
    local_b0 = &DAT_100000001;
    local_a8 = local_64;
    local_a4 = 1;
    uStack_a0 = 0;
    uStack_9c = 3;
    uStack_98 = 0;
    local_94 = 0x20000;
    *param_2 = 0;
    local_b8 = iVar7;
    local_b4 = iVar8;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),&local_b8,0,param_2);
    if (iVar3 < 0) {
      local_e8 = *(ulonglong *)(param_1 + 0x150);
      FUN_143142730(iVar3,
                    "Direct3DDevice->CreateTexture2D(&Desc,NULL,TempTexture2D.GetInitReference())",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x150);
    }
    *param_5 = DAT_14c967818;
    param_5[1] = CONCAT44(iVar8,iVar7);
    if (local_4c == 4) {
      iVar3 = 0;
      if (*param_6 - 1U < 5) {
        iVar3 = *param_6;
      }
      lVar6 = (**(code **)(*param_3 + 8))(param_3);
      uVar4 = (uint)*(byte *)(lVar6 + 0x30);
      iVar3 = iVar3 + param_6[5] * 6;
    }
    else {
      cVar1 = *(char *)(lVar5 + 0x52);
      lVar6 = (**(code **)(*param_3 + 8))();
      uVar4 = (uint)*(byte *)(lVar6 + 0x30);
      if ((cVar1 == '\x04') || (iVar3 = 0, cVar1 == '\x01')) {
        iVar3 = param_6[5];
      }
    }
    local_d0 = (uint)*(byte *)((longlong)param_6 + 0x11) + iVar3 * uVar4;
    if (((local_88 == 0 && local_8c == 0) && (local_80 == local_74)) && (local_7c == local_70)) {
      local_c8 = (int *)0x0;
    }
    else {
      local_c8 = &local_8c;
    }
    local_d8 = *(undefined8 *)(lVar5 + 0x70);
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x170))
              (*(longlong **)(param_1 + 0x140),*param_2,0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735b12c FUN_14735b12c body=542 status=ok
// SIG undefined FUN_14735b12c(void)

void FUN_14735b12c(longlong param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong _Size;
  void *_Dst;
  void *_Src;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong *local_100;
  ulonglong local_f8;
  int local_ec;
  undefined8 *local_e8;
  longlong local_e0;
  longlong local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_74 [16];
  undefined4 local_64;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = 0;
  local_e8 = param_4;
  local_e0 = param_1;
  if (param_2 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  iVar1 = param_3[1];
  iVar4 = param_3[2];
  iVar2 = *param_3;
  iVar3 = param_3[3];
  iVar6 = iVar3 - iVar1;
  (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x50))(*(longlong **)(lVar5 + 0x70),local_74);
  local_ec = FUN_14314432f(local_64);
  FUN_140393c76(local_e8,(iVar4 - iVar2) * iVar6 * local_ec,1);
  lVar5 = local_e0;
  local_108 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  uStack_a8 = param_5[4];
  uStack_a4 = param_5[5];
  uStack_a0 = param_5[6];
  local_100 = (longlong *)&local_b8;
  local_c8 = *(undefined8 *)param_3;
  local_c0 = *(undefined8 *)(param_3 + 2);
  FUN_14735aea6(local_e0,&local_90,param_2);
  if (local_58 == 3) {
    local_f8 = (ulonglong)*(byte *)((longlong)param_5 + 0x11);
  }
  local_100 = &local_d8;
  local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffff00000000);
  iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x140) + 0x70))
                    (*(longlong **)(lVar5 + 0x140),local_90,local_f8,1);
  if (iVar4 < 0) {
    local_108 = *(undefined8 **)(lVar5 + 0x150);
    FUN_143142730(iVar4,
                  "Direct3DDeviceIMContext->Map(TempTexture2D, MappedSubresource, D3D11_MAP_READ,0,&LockedRect)"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x189);
  }
  if (iVar3 != iVar1) {
    _Src = (void *)((ulonglong)(local_88._4_4_ * local_d0) +
                   (ulonglong)(uint)((int)local_88 * local_ec) + local_d8);
    _Dst = (void *)*local_e8;
    _Size = (ulonglong)(uint)((param_3[2] - *param_3) * local_ec);
    do {
      memcpy(_Dst,_Src,_Size);
      _Dst = (void *)((longlong)_Dst + _Size);
      _Src = (void *)((longlong)_Src + (ulonglong)local_d0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (**(code **)(**(longlong **)(lVar5 + 0x140) + 0x78))
            (*(longlong **)(lVar5 + 0x140),local_90,local_f8);
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735b34c FUN_14735b34c body=78 status=ok
// SIG undefined FUN_14735b34c(void)

void FUN_14735b34c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14602b1fc();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14698d2a8();
      return;
    }
  }
  return;
}



// FUNCTION 14735b39c FUN_14735b39c body=1320 status=ok
// SIG undefined FUN_14735b39c(void)

void FUN_14735b39c(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int *param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_1a8 [32];
  int *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined4 local_170;
  int *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong *local_140;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  longlong local_128;
  int local_120;
  int local_11c;
  int local_114;
  int local_110;
  undefined1 *local_10c;
  int local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  longlong *local_e8;
  int local_dc [5];
  longlong *local_c8;
  longlong *local_c0;
  int local_b8;
  int local_b4;
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 local_74 [16];
  int local_64;
  uint local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_158 = param_2;
  if (param_2 == (longlong *)0x0) {
    local_148 = 0;
  }
  else {
    local_148 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  iVar4 = param_3[2];
  iVar14 = param_3[3];
  iVar13 = *param_3;
  iVar6 = param_3[1];
  (**(code **)(**(longlong **)(local_148 + 0x70) + 0x50))(*(longlong **)(local_148 + 0x70),local_74)
  ;
  iVar12 = local_64;
  iVar3 = FUN_14314432f(local_64);
  local_150 = (ulonglong)local_60;
  local_8c = *param_3;
  local_88 = param_3[1];
  local_80 = param_3[2];
  local_7c = param_3[3];
  local_78 = 1;
  local_84 = 0;
  local_b0 = &DAT_100000001;
  local_a8 = iVar12;
  local_a4 = 1;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0x20;
  local_94 = 0;
  local_c0 = (longlong *)0x0;
  local_160 = iVar14 - iVar6;
  local_15c = iVar4 - iVar13;
  local_b8 = iVar4 - iVar13;
  local_b4 = iVar14 - iVar6;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                    (*(longlong **)(param_1 + 0x150),&local_b8,0);
  if (iVar4 < 0) {
    local_188 = *(int **)(param_1 + 0x150);
    FUN_143142730(iVar4,
                  "Direct3DDevice->CreateTexture2D(&NonMSAADesc,NULL,NonMSAATexture2D.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",500);
  }
  local_c8 = (longlong *)0x0;
  local_dc[3] = 0;
  local_dc[4] = 0;
  if (local_a8 == 0x1b) {
    local_dc[0] = 0x1c;
  }
  else {
    local_dc[0] = local_a8;
    if (local_a8 == 0x5a) {
      local_dc[0] = 0x57;
    }
  }
  local_dc[1] = 4;
  local_dc[2] = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                    (*(longlong **)(param_1 + 0x150),local_c0,local_dc,&local_c8);
  if (iVar4 < 0) {
    local_188 = *(int **)(param_1 + 0x150);
    FUN_143142730(iVar4,
                  "Direct3DDevice->CreateRenderTargetView(NonMSAATexture2D,&RTVDesc,NonMSAARTV.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x1ff);
  }
  local_e8 = (longlong *)0x0;
  local_114 = local_15c;
  local_110 = local_160;
  local_10c = &DAT_100000001;
  local_104 = local_64;
  local_100 = 1;
  uStack_fc = 0;
  uStack_f8 = 3;
  uStack_f4 = 0;
  local_f0 = 0x20000;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                    (*(longlong **)(param_1 + 0x150),&local_114,0);
  if (iVar4 < 0) {
    local_188 = *(int **)(param_1 + 0x150);
    FUN_143142730(iVar4,
                  "Direct3DDevice->CreateTexture2D(&StagingDesc,NULL,StagingTexture2D.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x210);
  }
  if (local_4c == 4) {
    iVar4 = 0;
    if (*param_5 - 1U < 5) {
      iVar4 = *param_5;
    }
    lVar7 = (**(code **)(*local_158 + 8))();
    uVar5 = (uint)*(byte *)(lVar7 + 0x30);
    iVar4 = iVar4 + param_5[5] * 6;
  }
  else {
    cVar2 = *(char *)(local_148 + 0x52);
    lVar7 = (**(code **)(*local_158 + 8))();
    uVar5 = (uint)*(byte *)(lVar7 + 0x30);
    if ((cVar2 == '\x04') || (iVar4 = 0, cVar2 == '\x01')) {
      iVar4 = param_5[5];
    }
  }
  local_158 = (longlong *)
              CONCAT44(local_158._4_4_,(uint)*(byte *)((longlong)param_5 + 0x11) + iVar4 * uVar5);
  iVar14 = (int)local_150;
  iVar4 = iVar14 * local_15c;
  FUN_140393c76(param_4,iVar3 * local_160 * iVar4,1);
  if (iVar14 != 0) {
    iVar14 = (int)local_150;
    iVar13 = 0;
    local_140 = param_4;
    do {
      local_128 = 0;
      local_120 = local_15c;
      local_11c = local_160;
      local_138 = *param_3;
      iStack_134 = param_3[1];
      iStack_130 = param_3[2];
      iStack_12c = param_3[3];
      local_178 = (longlong *)CONCAT44(local_178._4_4_,iVar13);
      local_188 = &local_138;
      local_180 = &local_128;
      FUN_143146204(param_1,local_148,local_c8,&local_b8);
      local_168 = &local_8c;
      local_170 = local_158._0_4_;
      local_178 = local_c0;
      local_180 = (longlong *)((ulonglong)local_180 & 0xffffffff00000000);
      local_188 = (int *)((ulonglong)local_188 & 0xffffffff00000000);
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x170))
                (*(longlong **)(param_1 + 0x140),local_e8,0,0);
      local_188 = (int *)((ulonglong)local_188 & 0xffffffff00000000);
      local_180 = &local_128;
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x70))
                        (*(longlong **)(param_1 + 0x140),local_e8,0,1);
      if (iVar6 < 0) {
        local_188 = *(int **)(param_1 + 0x150);
        FUN_143142730(iVar6,
                      "Direct3DDeviceIMContext->Map(StagingTexture2D,0,D3D11_MAP_READ,0,&LockedRect)"
                      ,".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x237);
      }
      iVar6 = param_3[1];
      iVar12 = param_3[3];
      if (iVar6 < iVar12) {
        iVar8 = param_3[2];
        do {
          iVar9 = *param_3;
          if (iVar9 < iVar8) {
            puVar10 = (undefined1 *)
                      ((longlong)(((iVar6 - param_3[1]) * iVar4 + iVar13) * iVar3) + *local_140);
            puVar11 = (undefined1 *)
                      ((ulonglong)(uint)(iVar9 * iVar3) +
                      (ulonglong)(uint)((iVar6 - param_3[1]) * local_120) + local_128);
            do {
              iVar12 = iVar3;
              if (iVar3 != 0) {
                do {
                  uVar1 = *puVar11;
                  puVar11 = puVar11 + 1;
                  *puVar10 = uVar1;
                  puVar10 = puVar10 + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                iVar8 = param_3[2];
              }
              puVar10 = puVar10 + (uint)((iVar14 + -1) * iVar3);
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
            iVar12 = param_3[3];
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar12);
      }
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x78))
                (*(longlong **)(param_1 + 0x140),local_e8,0);
      iVar13 = iVar13 + 1;
    } while (iVar13 != (int)local_150);
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735b8c6 FUN_14735b8c6 body=280 status=ok
// SIG undefined FUN_14735b8c6(void)

void FUN_14735b8c6(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,uint *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x70);
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(undefined4 *)
           ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30));
  local_50 = &local_48;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x70))
                    (*(longlong **)(param_1 + 0x140),uVar2,0,1);
  if (iVar3 < 0) {
    local_58 = *(longlong *)(param_1 + 0x150);
    FUN_143142730(iVar3,"Direct3DDeviceIMContext->Map(Resource, 0, D3D11_MAP_READ, 0, &LockedRect)",
                  ".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x256);
  }
  uVar4 = FUN_14314432f(uVar1);
  *param_4 = local_48;
  *param_5 = local_40 / uVar4;
  *param_6 = local_3c / local_40;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78,(ulonglong)local_3c % (ulonglong)local_40);
}



// FUNCTION 14735b9e0 FUN_14735b9e0 body=55 status=ok
// SIG undefined FUN_14735b9e0(void)

void FUN_14735b9e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014735ba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x78))
            (*(longlong **)(param_1 + 0x140),*(undefined8 *)(lVar1 + 0x70),0);
  return;
}



// FUNCTION 14735ba18 FUN_14735ba18 body=759 status=ok
// SIG undefined FUN_14735ba18(void)

void FUN_14735ba18(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int param_5,
                  int param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  int local_f0;
  int *local_e8;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  longlong *local_c0;
  uint local_b8;
  int local_b4;
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 local_74 [8];
  int local_6c;
  int local_64;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = param_1;
  if (param_2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  uVar5 = param_3[2] - *param_3;
  iVar3 = param_3[1];
  iVar1 = param_3[3];
  (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x50))(*(longlong **)(lVar4 + 0x70),local_74);
  if (local_64 == DAT_14c873614) {
    FUN_145ee9bde(param_4,(iVar1 - iVar3) * uVar5);
    lVar2 = local_d8;
    local_8c = *param_3;
    local_88 = param_3[1];
    local_80 = param_3[2];
    local_7c = param_3[3];
    local_78 = 1;
    local_84 = 0;
    local_b0 = &DAT_100000001;
    local_a8 = local_64;
    local_a4 = 1;
    uStack_a0 = 0;
    uStack_9c = 3;
    uStack_98 = 0;
    local_94 = 0x20000;
    local_c0 = (longlong *)0x0;
    local_b8 = uVar5;
    local_b4 = iVar1 - iVar3;
    iVar3 = (**(code **)(**(longlong **)(local_d8 + 0x150) + 0x28))();
    if (iVar3 < 0) {
      local_108 = *(ulonglong *)(lVar2 + 0x150);
      FUN_143142730(iVar3,
                    "Direct3DDevice->CreateTexture2D(&Desc,NULL,TempTexture2D.GetInitReference())",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x293);
    }
    if (local_4c == 4) {
      iVar3 = 0;
      if (param_5 - 1U < 5) {
        iVar3 = param_5;
      }
      param_6 = iVar3 + param_6 * 6;
    }
    else {
      if (*(char *)((longlong)param_2 + 0x52) != '\x01') {
        param_6 = 0;
      }
      if (param_2 == (longlong *)0x0) {
        param_6 = 0;
      }
    }
    local_f0 = param_6 * local_6c + param_7;
    local_f8 = *(undefined8 *)(lVar4 + 0x70);
    local_e8 = &local_8c;
    local_100 = (longlong *)((ulonglong)local_100._4_4_ << 0x20);
    local_108 = local_108 & 0xffffffff00000000;
    (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x170))
              (*(longlong **)(lVar2 + 0x140),local_c0,0,0);
    local_100 = &local_d0;
    local_108 = local_108 & 0xffffffff00000000;
    iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x70))
                      (*(longlong **)(lVar2 + 0x140),local_c0,0,1);
    if (iVar3 < 0) {
      local_108 = *(ulonglong *)(lVar2 + 0x150);
      FUN_143142730(iVar3,
                    "Direct3DDeviceIMContext->Map(TempTexture2D,0,D3D11_MAP_READ,0,&LockedRect)",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x2a5);
    }
    iVar3 = param_3[1];
    if (iVar3 < param_3[3]) {
      do {
        memcpy((void *)((longlong)(int)((iVar3 - param_3[1]) * uVar5) * 8 + *param_4),
               (void *)((ulonglong)(uint)(local_c8 * (iVar3 - param_3[1])) + local_d0),
               (ulonglong)uVar5 << 3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3[3]);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x78))(*(longlong **)(lVar2 + 0x140),local_c0,0);
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  else {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      FUN_1471cf4a8(param_4,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735bd10 FUN_14735bd10 body=3246 status=ok
// SIG undefined FUN_14735bd10(void)

/* WARNING: Removing unreachable block (ram,0x000147362b1e) */
/* WARNING: Removing unreachable block (ram,0x000147362b77) */
/* WARNING: Removing unreachable block (ram,0x000147362b8a) */
/* WARNING: Removing unreachable block (ram,0x000147362c6a) */
/* WARNING: Removing unreachable block (ram,0x000147362b9a) */
/* WARNING: Removing unreachable block (ram,0x000147362ca5) */
/* WARNING: Removing unreachable block (ram,0x000147362bba) */
/* WARNING: Removing unreachable block (ram,0x000147362c98) */
/* WARNING: Removing unreachable block (ram,0x000147362bbe) */
/* WARNING: Removing unreachable block (ram,0x000147362bc7) */
/* WARNING: Removing unreachable block (ram,0x000147362bd4) */
/* WARNING: Removing unreachable block (ram,0x000147362be1) */
/* WARNING: Removing unreachable block (ram,0x000147362be6) */
/* WARNING: Removing unreachable block (ram,0x000147362c02) */
/* WARNING: Removing unreachable block (ram,0x000147362c0f) */
/* WARNING: Removing unreachable block (ram,0x000147362c27) */
/* WARNING: Removing unreachable block (ram,0x000147362c47) */
/* WARNING: Removing unreachable block (ram,0x000147362c64) */
/* WARNING: Removing unreachable block (ram,0x000147362c58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Switch with 1 destination removed at 0x00014735c674 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14735bd10(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined8 *local_1a0;
  uint local_190;
  int local_18c;
  undefined4 *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_158 [12];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [12];
  undefined1 local_114 [16];
  undefined4 local_104;
  uint local_100;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_180 = param_4;
  if (param_2 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  (**(code **)(**(longlong **)(lVar12 + 0x70) + 0x50))(*(longlong **)(lVar12 + 0x70),local_114);
  if (local_100 == 1) {
    local_138 = *(undefined4 *)param_5;
    uStack_134 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_130 = *(undefined4 *)(param_5 + 1);
    local_1a8 = &local_138;
    auStack_128 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_12c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_148 = *(undefined8 *)param_3;
    local_140 = *(undefined8 *)(param_3 + 2);
    FUN_14735b12c(param_1,param_2);
  }
  else {
    local_168 = *(undefined4 *)param_5;
    uStack_164 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_160 = *(undefined4 *)(param_5 + 1);
    local_1a8 = &local_168;
    auStack_158 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_15c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_178 = *(undefined8 *)param_3;
    local_170 = *(undefined8 *)(param_3 + 2);
    FUN_14735b39c(param_1,param_2);
  }
  plVar23 = local_180;
  local_190 = param_3[1];
  iVar7 = param_3[2];
  iVar8 = *param_3;
  iVar18 = (iVar7 - iVar8) * local_100;
  uVar17 = param_3[3];
  puVar15 = (undefined8 *)(ulonglong)uVar17;
  uVar25 = uVar17 - local_190;
  FUN_14735c9c0(local_180,uVar25 * iVar18,1);
  iVar10 = FUN_14314432f(local_104);
  iVar11 = iVar10 * iVar18;
  local_18c = iVar18;
  lVar12 = (**(code **)(*param_2 + 8))(param_2);
  bVar3 = *(byte *)(lVar12 + 0x33);
  local_188 = (undefined4 *)*plVar23;
  if ((bVar3 == 0x20) || (bVar3 == 4)) {
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          pfVar16 = (float *)(local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4);
          lVar12 = 0;
          do {
            fVar27 = (float)*(ushort *)(uVar21 + local_e8 + lVar12 * 2) * 1.5259022e-05;
            *pfVar16 = fVar27;
            pfVar16[1] = fVar27;
            pfVar16[2] = fVar27;
            pfVar16[3] = 1.0;
            pfVar16 = pfVar16 + 4;
            lVar12 = lVar12 + 1;
          } while (local_18c != (int)lVar12);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (uVar22 != uVar25);
    }
    goto LAB_14735bf1d;
  }
  if ((byte)(bVar3 - 0x15) < 2) {
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          puVar13 = local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4;
          lVar12 = 0;
          do {
            uVar4 = *(ushort *)(uVar21 + local_e8 + lVar12 * 2);
            uVar17 = (uint)uVar4 << 0xd;
            if ((uVar17 & 0xf800000) == 0xf800000) {
              fVar27 = (float)(uVar17 | 0x70000000);
            }
            else if ((uVar17 & 0xf800000) == 0) {
              fVar27 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar27 = (float)((uVar17 & 0xfffe000) + 0x38000000);
            }
            uVar17 = (int)(short)uVar4 & 0x80000000U | (uint)fVar27;
            *puVar13 = uVar17;
            puVar13[1] = uVar17;
            puVar13[2] = uVar17;
            puVar13[3] = 0x3f800000;
            puVar13 = puVar13 + 4;
            lVar12 = lVar12 + 1;
          } while (local_18c != (int)lVar12);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)((int)uVar21 + iVar10 * local_100 * (iVar7 - iVar8));
      } while (uVar22 != uVar25);
    }
    goto LAB_14735bf1d;
  }
  fVar27 = *(float *)((longlong)param_5 + 0xc);
  uVar24 = (uint)bVar3;
  if (0x19 < bVar3 - 1) {
    if (bVar3 == 0x25) {
      if (uVar17 != local_190) {
        uVar17 = 0;
        uVar21 = 0;
        do {
          if (local_18c != 0) {
            lVar12 = (ulonglong)uVar17 + local_e8 + 3;
            puVar14 = local_188 + (ulonglong)(uint)(local_18c * (int)uVar21) * 4;
            lVar26 = 0;
            do {
              bVar3 = *(byte *)(lVar12 + lVar26 * 4);
              uVar1 = (&DAT_14c758c60)[*(byte *)(lVar12 + -2 + lVar26 * 4)];
              uVar2 = (&DAT_14c758c60)[*(byte *)(lVar12 + -1 + lVar26 * 4)];
              *puVar14 = (&DAT_14c758c60)[*(byte *)(lVar12 + -3 + lVar26 * 4)];
              puVar14[1] = uVar1;
              puVar14[2] = uVar2;
              puVar14[3] = (float)bVar3 * 0.003921569;
              puVar14 = puVar14 + 4;
              lVar26 = lVar26 + 1;
            } while (local_18c != (int)lVar26);
          }
          uVar21 = uVar21 + 1;
          uVar17 = uVar17 + iVar11;
        } while (uVar21 != uVar25);
      }
      goto LAB_14735bf1d;
    }
    if (uVar24 == 0x2c) goto switchD_14735c08c_caseD_b;
    goto switchD_14735c08c_caseD_3;
  }
  switch((uint)bVar3) {
  case 1:
    local_c8 = *(undefined4 *)(param_5 + 1);
    local_1a0 = &local_d0;
    local_d0 = *param_5;
    local_c0 = param_5[2];
    local_b8 = *(undefined4 *)(param_5 + 3);
    local_1a8 = local_188;
    local_c4 = fVar27;
    FUN_143152718(local_18c,uVar25,local_e8,iVar11);
    break;
  case 2:
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          lVar12 = uVar21 + local_e8 + 3;
          puVar14 = local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4;
          lVar26 = 0;
          do {
            uVar1 = (&DAT_14c758c60)[*(byte *)(lVar12 + -2 + lVar26 * 4)];
            uVar2 = (&DAT_14c758c60)[*(byte *)(lVar12 + -3 + lVar26 * 4)];
            bVar3 = *(byte *)(lVar12 + lVar26 * 4);
            *puVar14 = (&DAT_14c758c60)[*(byte *)(lVar12 + -1 + lVar26 * 4)];
            puVar14[1] = uVar1;
            puVar14[2] = uVar2;
            puVar14[3] = (float)bVar3 * 0.003921569;
            puVar14 = puVar14 + 4;
            lVar26 = lVar26 + 1;
          } while (local_18c != (int)lVar26);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (uVar22 != uVar25);
    }
    break;
  case 9:
  case 0x1a:
    if (uVar17 != local_190) {
      local_180 = (longlong *)(ulonglong)uVar25;
      uVar21 = 0;
      plVar23 = (longlong *)0x0;
      do {
        if (local_18c != 0) {
          puVar13 = local_188 + (ulonglong)(uint)(local_18c * (int)plVar23) * 4;
          lVar12 = 0;
          do {
            uVar17 = *(uint *)(uVar21 + local_e8 + lVar12 * 4);
            uVar24 = uVar17 & 0x3f;
            uVar25 = uVar17 >> 6 & 0x1f;
            if (uVar25 == 0) {
              if (uVar24 == 0) {
                uVar25 = 0xffffff90;
                uVar24 = 0;
              }
              else {
                uVar19 = 0x1f;
                if (uVar24 != 0) {
                  for (; uVar24 >> uVar19 == 0; uVar19 = uVar19 - 1) {
                  }
                }
                uVar25 = (uVar19 ^ 0xffffffe0) + 0x1b;
                uVar24 = uVar17 << (~(byte)uVar19 + 7 & 0x1f) & 0x3e;
              }
LAB_14735c11d:
              uVar25 = uVar24 * 0x20000 + uVar25 * 0x800000 + 0x38000000;
            }
            else {
              if (uVar25 != 0x1f) goto LAB_14735c11d;
              uVar25 = uVar24 << 0x11 | 0x7f800000;
            }
            uVar24 = uVar17 >> 0xb & 0x3f;
            uVar19 = uVar17 >> 0x11 & 0x1f;
            if (uVar19 == 0) {
              if (uVar24 == 0) {
                uVar19 = 0xffffff90;
                uVar24 = 0;
              }
              else {
                uVar20 = 0x1f;
                if (uVar24 != 0) {
                  for (; uVar24 >> uVar20 == 0; uVar20 = uVar20 - 1) {
                  }
                }
                uVar19 = (uVar20 ^ 0xffffffe0) + 0x1b;
                uVar24 = (uVar17 >> 0xb) << (~(byte)uVar20 + 7 & 0x1f) & 0x3e;
              }
LAB_14735c178:
              uVar24 = uVar24 * 0x20000 + uVar19 * 0x800000 + 0x38000000;
            }
            else {
              if (uVar19 != 0x1f) goto LAB_14735c178;
              uVar24 = uVar24 << 0x11 | 0x7f800000;
            }
            uVar19 = uVar17 >> 0x16 & 0x1f;
            uVar20 = uVar17 >> 0x1b;
            if (uVar20 == 0x1f) {
              uVar17 = uVar19 << 0x11 | 0x7f800000;
            }
            else {
              if (uVar17 < 0x8000000) {
                if (uVar19 == 0) {
                  uVar20 = 0xffffff90;
                  uVar19 = 0;
                }
                else {
                  uVar9 = 0x1f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                    }
                  }
                  uVar20 = (uVar9 ^ 0xffffffe0) + 0x1c;
                  uVar19 = (uVar17 >> 0x16) << (~(byte)uVar9 + 6 & 0x1f) & 0x1e;
                }
              }
              uVar17 = uVar19 * 0x40000 + uVar20 * 0x800000 + 0x38000000;
            }
            *puVar13 = uVar25;
            puVar13[1] = uVar24;
            puVar13[2] = uVar17;
            puVar13[3] = 0;
            lVar12 = lVar12 + 1;
            puVar13 = puVar13 + 4;
          } while (local_18c != (int)lVar12);
        }
        plVar23 = (longlong *)((longlong)plVar23 + 1);
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (plVar23 != local_180);
    }
    break;
  case 10:
    local_a8 = *(undefined4 *)(param_5 + 1);
    local_1a0 = &local_b0;
    local_b0 = *param_5;
    local_a0 = param_5[2];
    local_98 = *(undefined4 *)(param_5 + 3);
    local_1a8 = local_188;
    local_a4 = fVar27;
    FUN_143151e38(local_18c,uVar25,local_e8,iVar11);
    break;
  case 0xb:
switchD_14735c08c_caseD_b:
    iVar7 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)bVar3 * 0x30));
    if (iVar7 == 4) goto switchD_14735c08c_caseD_14;
    switch(bVar3) {
    case 0xb:
switchD_14735c4b4_caseD_b:
      if (4 < iVar7) {
        if (uVar17 != local_190) {
          uVar21 = 0;
          uVar22 = 0;
          do {
            if (local_18c != 0) {
              pfVar16 = (float *)(local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4);
              lVar12 = 0;
              do {
                fVar28 = *(float *)(uVar21 + local_e8 + lVar12 * 8);
                if (1.0 <= fVar28) {
                  fVar28 = 1.0;
                }
                bVar3 = *(byte *)(uVar21 + local_e8 + 4 + lVar12 * 8);
                fVar28 = ABS((1.0 / (fVar28 * 0.1 + -0.1)) / fVar27);
                if (1.0 <= fVar28) {
                  fVar28 = 1.0;
                }
                *pfVar16 = fVar28;
                pfVar16[1] = (float)bVar3 / 255.0;
                pfVar16[2] = 0.0;
                pfVar16[3] = 0.0;
                lVar12 = lVar12 + 1;
                pfVar16 = pfVar16 + 4;
              } while (local_18c != (int)lVar12);
            }
            uVar22 = uVar22 + 1;
            uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
          } while (uVar22 != uVar25);
        }
        goto LAB_14735bf1d;
      }
      if (uVar24 - 0xd < 7) {
                    /* WARNING: Calculation of case label failed */
        lVar12 = CONCAT71((int7)((ulonglong)
                                 (&DAT_14a344fac +
                                 *(int *)(&DAT_14a344fac + (ulonglong)(uVar24 - 0xd) * 4)) >> 8),
                          *(undefined1 *)((ulonglong)local_100 - 0xb7dbb4));
        if ((uint)lVar12 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x000147362dfc */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((longlong)&switchD_147362e03::switchdataD_14a345018 +
                    (longlong)(int)(&switchD_147362e03::switchdataD_14a345018)[lVar12]))
                    ((code *)((longlong)&switchD_147362e03::switchdataD_14a345018 +
                             (longlong)(int)(&switchD_147362e03::switchdataD_14a345018)[lVar12]));
          return;
        }
        if ((puVar15[0xc] ^ (ulonglong)(puVar15 + 1)) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          *puVar15 = &UNK_147362f69;
          FUN_144d8e3a0();
        }
        return;
      }
      break;
    case 0xc:
    case 0x10:
    case 0x12:
      break;
    case 0xd:
      goto switchD_14735c08c_caseD_d;
    case 0xe:
      goto switchD_14735c08c_caseD_e;
    case 0xf:
      goto switchD_14735c08c_caseD_f;
    case 0x11:
      goto switchD_14735c08c_caseD_11;
    case 0x13:
      goto switchD_14735c08c_caseD_13;
    default:
      if (uVar24 == 0x2c) goto switchD_14735c4b4_caseD_b;
    }
  default:
switchD_14735c08c_caseD_3:
    *(undefined4 *)(plVar23 + 1) = 0;
    if (*(int *)((longlong)plVar23 + 0xc) != 0) {
      FUN_144750f90(plVar23,0);
    }
    break;
  case 0xd:
switchD_14735c08c_caseD_d:
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          puVar14 = local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4;
          lVar12 = 0;
          do {
            *puVar14 = *(undefined4 *)(uVar21 + local_e8 + lVar12 * 4);
            *(undefined8 *)(puVar14 + 1) = 0;
            puVar14[3] = 0x3f800000;
            puVar14 = puVar14 + 4;
            lVar12 = lVar12 + 1;
          } while (local_18c != (int)lVar12);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (uVar22 != uVar25);
    }
    break;
  case 0xe:
switchD_14735c08c_caseD_e:
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          lVar12 = uVar21 + local_e8 + 2;
          pfVar16 = (float *)(local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4);
          lVar26 = 0;
          do {
            uVar4 = *(ushort *)(lVar12 + lVar26 * 4);
            *pfVar16 = (float)*(ushort *)(lVar12 + -2 + lVar26 * 4) / 65535.0;
            pfVar16[1] = (float)uVar4 / 65535.0;
            pfVar16[2] = 0.0;
            pfVar16[3] = 1.0;
            pfVar16 = pfVar16 + 4;
            lVar26 = lVar26 + 1;
          } while (local_18c != (int)lVar26);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (uVar22 != uVar25);
    }
    break;
  case 0xf:
switchD_14735c08c_caseD_f:
    if (uVar17 != local_190) {
      local_180 = (longlong *)(ulonglong)uVar25;
      uVar21 = 0;
      plVar23 = (longlong *)0x0;
      do {
        if (local_18c != 0) {
          lVar26 = uVar21 + local_e8 + 2;
          puVar13 = local_188 + (ulonglong)(uint)(local_18c * (int)plVar23) * 4;
          lVar12 = 0;
          do {
            uVar4 = *(ushort *)(lVar26 + lVar12 * 4);
            uVar17 = (uint)uVar4 << 0xd;
            if ((uVar17 & 0xf800000) == 0xf800000) {
              fVar27 = (float)(uVar17 | 0x70000000);
            }
            else if ((uVar17 & 0xf800000) == 0) {
              fVar27 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar27 = (float)((uVar17 & 0xfffe000) + 0x38000000);
            }
            uVar5 = *(ushort *)(lVar26 + -2 + lVar12 * 4);
            uVar17 = (uint)uVar5 << 0xd;
            if ((uVar17 & 0xf800000) == 0xf800000) {
              fVar28 = (float)(uVar17 | 0x70000000);
            }
            else if ((uVar17 & 0xf800000) == 0) {
              fVar28 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar28 = (float)((uVar17 & 0xfffe000) + 0x38000000);
            }
            *puVar13 = (int)(short)uVar5 & 0x80000000U | (uint)fVar28;
            puVar13[1] = (uint)fVar27 | (int)(short)uVar4 & 0x80000000U;
            puVar13[2] = 0;
            puVar13[3] = 0x3f800000;
            puVar13 = puVar13 + 4;
            lVar12 = lVar12 + 1;
          } while (local_18c != (int)lVar12);
        }
        plVar23 = (longlong *)((longlong)plVar23 + 1);
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (plVar23 != local_180);
    }
    break;
  case 0x11:
switchD_14735c08c_caseD_11:
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          puVar15 = (undefined8 *)(local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4);
          lVar12 = 0;
          do {
            *puVar15 = *(undefined8 *)(uVar21 + local_e8 + lVar12 * 8);
            puVar15[1] = 0x3f80000000000000;
            puVar15 = puVar15 + 2;
            lVar12 = lVar12 + 1;
          } while (local_18c != (int)lVar12);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (uVar22 != uVar25);
    }
    break;
  case 0x12:
    local_1a8 = local_188;
    FUN_143151d56(local_18c,uVar25,local_e8,iVar11);
    break;
  case 0x13:
switchD_14735c08c_caseD_13:
    if (uVar17 != local_190) {
      uVar21 = 0;
      uVar22 = 0;
      do {
        if (local_18c != 0) {
          lVar26 = uVar21 + local_e8 + 6;
          pfVar16 = (float *)(local_188 + (ulonglong)(uint)(local_18c * (int)uVar22) * 4);
          lVar12 = 0;
          do {
            uVar4 = *(ushort *)(lVar26 + lVar12 * 8);
            uVar5 = *(ushort *)(lVar26 + -2 + lVar12 * 8);
            uVar6 = *(ushort *)(lVar26 + -4 + lVar12 * 8);
            *pfVar16 = (float)*(ushort *)(lVar26 + -6 + lVar12 * 8) / 65535.0;
            pfVar16[1] = (float)uVar6 / 65535.0;
            pfVar16[2] = (float)uVar5 / 65535.0;
            pfVar16[3] = (float)uVar4 / 65535.0;
            pfVar16 = pfVar16 + 4;
            lVar12 = lVar12 + 1;
          } while (local_18c != (int)lVar12);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uint)((int)uVar21 + iVar11);
      } while (uVar22 != uVar25);
    }
    break;
  case 0x14:
switchD_14735c08c_caseD_14:
    if (uVar17 != local_190) {
      uVar21 = 0;
      do {
        if (local_18c != 0) {
          pfVar16 = (float *)(local_188 + (ulonglong)(uint)(local_18c * (int)uVar21) * 4);
          lVar12 = 0;
          do {
            uVar17 = *(uint *)(local_e8 + lVar12 * 4);
            fVar28 = (float)(uVar17 & 0xffffff) * 5.9604645e-08;
            if (1.0 <= fVar28) {
              fVar28 = 1.0;
            }
            fVar28 = ABS((1.0 / (fVar28 * 0.1 + -0.1)) / fVar27);
            if (1.0 <= fVar28) {
              fVar28 = 1.0;
            }
            *pfVar16 = fVar28;
            pfVar16[1] = (float)(uVar17 >> 0x18) / 255.0;
            pfVar16[2] = 0.0;
            pfVar16[3] = 0.0;
            lVar12 = lVar12 + 1;
            pfVar16 = pfVar16 + 4;
          } while (local_18c != (int)lVar12);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar25);
    }
  }
LAB_14735bf1d:
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735c9c0 FUN_14735c9c0 body=78 status=ok
// SIG undefined FUN_14735c9c0(void)

void FUN_14735c9c0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467ff840();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1469885b8();
      return;
    }
  }
  return;
}



// FUNCTION 14735ca10 FUN_14735ca10 body=1355 status=ok
// SIG undefined FUN_14735ca10(void)

void FUN_14735ca10(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong *param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  int *local_f8;
  ulonglong local_e8;
  int local_dc;
  longlong local_d8;
  ulonglong local_d0;
  int local_c4;
  longlong local_c0;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94 [16];
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c [16];
  uint local_5c;
  ulonglong local_48;
  undefined8 extraout_XMM0_Qb;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = param_4;
  local_d8 = param_1;
  if (param_2 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  uVar10 = param_3[2] - *param_3;
  local_dc = param_3[3] - param_3[1];
  (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x50))(*(longlong **)(lVar6 + 0x70),local_6c);
  uVar9 = local_5c;
  uVar3 = DAT_14c873824;
  uVar2 = DAT_14c8736a4;
  uVar7 = DAT_14c873614;
  if (((local_5c == DAT_14c873614) || (local_5c == DAT_14c873824)) || (local_5c == DAT_14c8736a4)) {
    local_d0 = local_e8 >> 0x20;
    local_c4 = (int)(local_e8 >> 0x20) - (int)local_e8;
    auVar18._0_8_ = FUN_145ee9bde(param_5,uVar10 * local_c4 * local_dc,1);
    auVar18._8_8_ = extraout_XMM0_Qb;
    local_84 = *param_3;
    local_80 = param_3[1];
    local_78 = param_3[2];
    local_74 = param_3[3];
    local_70 = (undefined4)local_d0;
    local_7c = (undefined4)local_e8;
    local_a4 = local_dc;
    local_a0 = local_c4;
    local_9c = 1;
    local_98 = local_5c;
    local_94 = pmovsxbw(auVar18,0x20000000003);
    local_b0 = (longlong *)0x0;
    local_a8 = uVar10;
    iVar4 = (**(code **)(**(longlong **)(local_d8 + 0x150) + 0x30))
                      (*(longlong **)(local_d8 + 0x150),&local_a8,0);
    if (iVar4 < 0) {
      local_118 = *(ulonglong *)(local_d8 + 0x150);
      FUN_143142730(iVar4,
                    "Direct3DDevice->CreateTexture3D(&Desc,NULL,TempTexture3D.GetInitReference())",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x30f);
    }
    local_108 = *(undefined8 *)(lVar6 + 0x70);
    local_f8 = &local_84;
    local_100 = 0;
    local_110 = (longlong *)((ulonglong)local_110._4_4_ << 0x20);
    local_118 = local_118 & 0xffffffff00000000;
    (**(code **)(**(longlong **)(local_d8 + 0x140) + 0x170))
              (*(longlong **)(local_d8 + 0x140),local_b0,0,0);
    local_110 = &local_c0;
    local_118 = local_118 & 0xffffffff00000000;
    iVar4 = (**(code **)(**(longlong **)(local_d8 + 0x140) + 0x70))
                      (*(longlong **)(local_d8 + 0x140),local_b0,0,1);
    if (iVar4 < 0) {
      local_118 = *(ulonglong *)(local_d8 + 0x150);
      FUN_143142730(iVar4,
                    "Direct3DDeviceIMContext->Map(TempTexture3D,0,D3D11_MAP_READ,0,&LockedRect)",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp",0x317);
    }
    uVar5 = (uint)local_d0;
    if (uVar9 == uVar7) {
      if ((int)local_e8 < (int)uVar5) {
        iVar4 = param_3[3];
        iVar11 = 0;
        uVar15 = local_e8 & 0xffffffff;
        do {
          iVar16 = param_3[1];
          if (iVar16 < iVar4) {
            iVar17 = (int)uVar15 - (int)local_e8;
            do {
              memcpy((void *)((longlong)(int)(((iVar16 - param_3[1]) + iVar11) * uVar10) * 8 +
                             *param_5),
                     (void *)((ulonglong)(uint)(local_b4 * iVar17) +
                             (ulonglong)(uint)(local_b8 * (iVar16 - param_3[1])) + local_c0),
                     (ulonglong)uVar10 << 3);
              iVar16 = iVar16 + 1;
              iVar4 = param_3[3];
            } while (iVar16 < iVar4);
          }
          uVar7 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar7;
          iVar11 = iVar11 + local_dc;
        } while (uVar7 != (uint)local_d0);
      }
    }
    else if (uVar9 == uVar3) {
      if ((int)local_e8 < (int)uVar5) {
        iVar4 = param_3[3];
        iVar11 = 0;
        iVar16 = 0;
        do {
          iVar17 = param_3[1];
          if (iVar17 < iVar4) {
            uVar15 = (ulonglong)(uint)param_3[2];
            iVar13 = iVar17 + iVar11;
            do {
              lVar6 = (longlong)*param_3;
              if (*param_3 < (int)uVar15) {
                iVar4 = param_3[1];
                do {
                  lVar14 = (longlong)(int)((iVar13 - param_3[1]) * uVar10 + (int)lVar6);
                  *(undefined2 *)(*param_5 + lVar14 * 8) =
                       *(undefined2 *)
                        ((ulonglong)(uint)(local_b4 * iVar16) + local_c0 +
                         (ulonglong)(uint)((iVar17 - iVar4) * local_b8) + lVar6 * 2);
                  *(undefined2 *)(*param_5 + 6 + lVar14 * 8) = 0x3c00;
                  lVar6 = lVar6 + 1;
                  uVar15 = (ulonglong)param_3[2];
                } while (lVar6 < (longlong)uVar15);
                iVar4 = param_3[3];
              }
              iVar17 = iVar17 + 1;
              iVar13 = iVar13 + 1;
            } while (iVar17 < iVar4);
          }
          uVar7 = (int)local_e8 + 1;
          local_e8 = (ulonglong)uVar7;
          iVar16 = iVar16 + 1;
          iVar11 = iVar11 + local_dc;
        } while (uVar7 != uVar5);
      }
    }
    else if (uVar9 == uVar2 && (int)local_e8 < (int)uVar5) {
      iVar4 = param_3[3];
      iVar11 = 0;
      iVar16 = 0;
      do {
        iVar17 = param_3[1];
        if (iVar17 < iVar4) {
          uVar15 = (ulonglong)(uint)param_3[2];
          iVar13 = iVar17 + iVar11;
          do {
            lVar6 = (longlong)*param_3;
            if (*param_3 < (int)uVar15) {
              iVar4 = param_3[1];
              do {
                fVar1 = *(float *)((ulonglong)(uint)(local_b4 * iVar16) + local_c0 +
                                   (ulonglong)(uint)((iVar17 - iVar4) * local_b8) + lVar6 * 4);
                fVar12 = ABS(fVar1);
                if ((uint)fVar12 < 0x47800000) {
                  if ((uint)fVar12 < 0x38800000) {
                    fVar12 = fVar12 + 0.5;
                  }
                  else {
                    fVar12 = (float)((int)fVar12 + 0x8000fff +
                                     (uint)(((uint)fVar12 >> 0xd & 1) != 0) >> 0xd);
                  }
                }
                else {
                  fVar12 = (float)((0x7f800000 < (uint)fVar12 | 0x3e) << 9);
                }
                iVar8 = movmskps(uVar9,ZEXT416((uint)fVar1));
                uVar9 = iVar8 << 0xf | (uint)fVar12;
                lVar14 = (longlong)(int)((iVar13 - param_3[1]) * uVar10 + (int)lVar6);
                *(short *)(*param_5 + lVar14 * 8) = (short)uVar9;
                *(undefined2 *)(*param_5 + 6 + lVar14 * 8) = 0x3c00;
                lVar6 = lVar6 + 1;
                uVar15 = (ulonglong)param_3[2];
              } while (lVar6 < (longlong)uVar15);
              iVar4 = param_3[3];
            }
            iVar17 = iVar17 + 1;
            iVar13 = iVar13 + 1;
          } while (iVar17 < iVar4);
        }
        uVar7 = (int)local_e8 + 1;
        local_e8 = (ulonglong)uVar7;
        iVar16 = iVar16 + 1;
        iVar11 = iVar11 + local_dc;
      } while (uVar7 != uVar5);
    }
    (**(code **)(**(longlong **)(local_d8 + 0x140) + 0x78))
              (*(longlong **)(local_d8 + 0x140),local_b0,0);
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  else {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0) {
      FUN_1471cf4a8(param_5,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735cf5c FUN_14735cf5c body=128 status=ok
// SIG undefined FUN_14735cf5c(void)

void FUN_14735cf5c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [456];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_144b19e5e(local_1f0);
  FUN_144b1bd80(param_2,local_1f0);
  FUN_14735745a(param_1 + -0x18,local_1f0);
  FUN_144b19efc(param_1 + 0x10,param_2);
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735cfde FUN_14735cfde body=175 status=ok
// SIG undefined FUN_14735cfde(void)

void FUN_14735cfde(longlong param_1)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_38 = &PTR_LAB_14a343bb0;
  local_58 = FUN_143152e94;
  local_30 = param_1 + -0x18;
  FUN_144b0dc59(param_1 + 0x10);
  local_70 = 0;
  local_68 = 0xffffffff00000000;
  local_60 = 0x100;
  local_80 = 0;
  local_78 = 0x2200000000;
  FUN_14735713c(param_1 + -0x18,1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735d08e FUN_14735d08e body=541 status=ok
// SIG undefined FUN_14735d08e(void)

void FUN_14735d08e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined1 local_70 [44];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x17d40) == '\x01') && (*(longlong *)(param_1 + 0x17d58) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d58) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
  }
  if (*(char *)(lVar3 + 0x53) == '\v') {
    (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x50))(*(longlong **)(lVar4 + 0x70),local_70);
    if (((((int)param_2[3] < 0) || ((int)param_2[4] < 0)) ||
        (*(int *)((longlong)param_2 + 0x1c) < 0)) || (*(int *)((longlong)param_2 + 0x24) < 0)) {
      lStack_80 = *(longlong *)(lVar4 + 0x44);
      local_88 = 0;
      lStack_90 = *(longlong *)(lVar3 + 0x44);
      local_98 = 0;
    }
    else {
      local_88 = param_2[3];
      lStack_80 = param_2[4];
      local_98 = param_2[3];
      lStack_90 = param_2[4];
    }
    local_44 = 0x22;
    uVar2 = FUN_144b19f7a();
    local_b8 = *(undefined8 *)(lVar4 + 0x90 + (ulonglong)uVar2 * 8);
    uVar2 = *(byte *)(lVar4 + 0xb4) & 1;
    if (-uVar2 < *(uint *)(lVar4 + 0x88)) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x80) + (ulonglong)uVar2 * -8);
    }
    else {
      uVar6 = 0;
    }
    local_a0 = &local_88;
    local_a8 = &local_98;
    local_b0 = local_70;
    FUN_143147538(param_1,lVar3,lVar4,uVar6);
  }
  else {
    iVar5 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar4 + 0x53) * 0x30));
    if (iVar5 == 0x1b) {
      iVar5 = 0x1c;
    }
    else if (iVar5 == 0x5a) {
      iVar5 = 0x57;
    }
    uVar2 = *(uint *)((longlong)param_2 + 0x14);
    uVar7 = (uint)*(ushort *)(lVar3 + 0x4e);
    if (-1 < (int)uVar2) {
      uVar7 = uVar2 + 1;
    }
    uVar8 = 0;
    if (0 < (int)uVar2) {
      uVar8 = uVar2;
    }
    if ((int)uVar8 < (int)uVar7) {
      do {
        local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,iVar5);
        local_b8 = CONCAT44(local_b8._4_4_,
                            *(byte *)(lVar3 + 0x50) * uVar8 + (uint)*(byte *)(param_2 + 2));
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0x1c8))
                  (*(longlong **)(param_1 + 0x140),*(undefined8 *)(lVar4 + 0x70),
                   *(byte *)(lVar4 + 0x50) * uVar8 + (uint)*(byte *)(param_2 + 2),
                   *(undefined8 *)(lVar3 + 0x70));
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735d2ac FUN_14735d2ac body=94 status=ok
// SIG undefined FUN_14735d2ac(void)

void FUN_14735d2ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_1431488be(param_1 + 0x17d38);
  lVar3 = *(longlong *)(param_1 + 0x17d10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x17d10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_143148d5a();
  FUN_14735d30a(param_1 + 0x17d38,param_1);
  return;
}



// FUNCTION 14735d30a FUN_14735d30a body=250 status=ok
// SIG undefined FUN_14735d30a(void)

void FUN_14735d30a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  cVar1 = DAT_14ca84e99;
  *(char *)(param_1 + 10) = DAT_14ca84e99;
  cVar2 = DAT_14ca84e9a;
  *(char *)(param_1 + 0xb) = DAT_14ca84e9a;
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0xc) == '\x01') {
        FUN_14735dd1a(param_1 + 0x80);
        DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
      }
      goto LAB_14735d354;
    }
    *(undefined1 *)(param_1 + 0xd) = DAT_14c867d1c;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 0;
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = DAT_14c867d1c;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      goto LAB_14735d354;
    }
  }
  DAT_14c867d1c = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  FUN_14735dc78(plVar3,param_2);
  *(longlong **)(param_1 + 0x18) = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
LAB_14735d354:
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xb);
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0x70) == '\0')) {
    iVar4 = (*(int *)(param_1 + 0x54) + 1) % *(int *)(param_1 + 0x50);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x140);
    (**(code **)(*plVar3 + 0xe0))
              (plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 8));
    *(int *)(param_1 + 0x54) = iVar4;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



// FUNCTION 14735d404 FUN_14735d404 body=324 status=ok
// SIG undefined FUN_14735d404(void)

void FUN_14735d404(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x370))();
  }
  lVar3 = param_1 + 0x20;
  lVar2 = 0;
  do {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x80);
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 0x400;
  } while (lVar2 != 6);
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(undefined4 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined1 **)(param_1 + 0x1858) = &DAT_3f8000003f800000;
  *(undefined1 **)(&DAT_00001860 + param_1) = &DAT_3f8000003f800000;
  memset((void *)(param_1 + 0x1878),0,0x184);
  *(undefined4 *)(&DAT_00001868 + param_1) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1870) = 0;
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  memset((void *)(param_1 + 0x1c48),0,0x300);
  memset((void *)(param_1 + 0x1a00),0,0x214);
  param_1 = param_1 + 0x1f54;
  do {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + -0xc + lVar2) = 0;
      *(undefined8 *)(param_1 + -4 + lVar2) = 0x100000000000;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0xe0);
    lVar3 = lVar3 + 1;
    param_1 = param_1 + 0xe0;
  } while (lVar3 != 6);
  return;
}



// FUNCTION 14735d548 FUN_14735d548 body=304 status=ok
// SIG undefined FUN_14735d548(void)

void FUN_14735d548(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != (longlong *)0x0) == (param_2 != 0)) {
    uVar6 = (ulonglong)param_4;
    lVar2 = (longlong)(int)param_4;
    if (param_2 == 0) {
      if (((*(longlong *)(param_1 + 0x27b8 + lVar2 * 8) != 0) &&
          (*(undefined8 *)(param_1 + 0x27b8 + lVar2 * 8) = 0, *(uint *)(param_1 + 0x40c0) == param_4
          )) && (*(uint *)(param_1 + 0x40c0) = param_4 - 1, uVar3 = uVar6, 0 < (int)param_4)) {
        do {
          iVar1 = (int)uVar3;
          if (*(longlong *)(param_1 + 0x27b8 + (ulonglong)(iVar1 - 1) * 8) != 0) break;
          *(int *)(param_1 + 0x40c0) = iVar1 + -2;
          uVar3 = (ulonglong)(iVar1 - 1U);
        } while (iVar1 - 1U != 0 && 0 < iVar1);
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x40c0);
      if ((int)*(uint *)(param_1 + 0x40c0) < (int)param_4) {
        uVar4 = param_4;
      }
      *(uint *)(param_1 + 0x40c0) = uVar4;
      *(longlong *)(param_1 + 0x27b8 + lVar2 * 8) = param_2;
    }
    plVar5 = *(longlong **)(param_1 + 0x178 + uVar6 * 8);
    local_30 = param_3;
    if (plVar5 != param_3) {
      if (param_3 != (longlong *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        plVar5 = *(longlong **)(param_1 + 0x178 + uVar6 * 8);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(param_1 + 0x178 + uVar6 * 8) = param_3;
      (**(code **)(**(longlong **)(param_1 + 0x170) + 200))
                (*(longlong **)(param_1 + 0x170),uVar6,1,&local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735d67a FUN_14735d67a body=301 status=ok
// SIG undefined FUN_14735d67a(void)

void FUN_14735d67a(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != (longlong *)0x0) == (param_2 != 0)) {
    uVar6 = (ulonglong)param_4;
    lVar2 = (longlong)(int)param_4;
    if (param_2 == 0) {
      if (((*(longlong *)(param_1 + 0x33b8 + lVar2 * 8) != 0) &&
          (*(undefined8 *)(param_1 + 0x33b8 + lVar2 * 8) = 0, *(uint *)(param_1 + 0x40cc) == param_4
          )) && (*(uint *)(param_1 + 0x40cc) = param_4 - 1, uVar3 = uVar6, 0 < (int)param_4)) {
        do {
          iVar1 = (int)uVar3;
          if (*(longlong *)(param_1 + 0x33b8 + (ulonglong)(iVar1 - 1) * 8) != 0) break;
          *(int *)(param_1 + 0x40cc) = iVar1 + -2;
          uVar3 = (ulonglong)(iVar1 - 1U);
        } while (iVar1 - 1U != 0 && 0 < iVar1);
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x40cc);
      if ((int)*(uint *)(param_1 + 0x40cc) < (int)param_4) {
        uVar4 = param_4;
      }
      *(uint *)(param_1 + 0x40cc) = uVar4;
      *(longlong *)(param_1 + 0x33b8 + lVar2 * 8) = param_2;
    }
    plVar5 = *(longlong **)(param_1 + 0xd78 + uVar6 * 8);
    local_30 = param_3;
    if (plVar5 != param_3) {
      if (param_3 != (longlong *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        plVar5 = *(longlong **)(param_1 + 0xd78 + uVar6 * 8);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(param_1 + 0xd78 + uVar6 * 8) = param_3;
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x40))
                (*(longlong **)(param_1 + 0x170),uVar6,1,&local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735d7a8 FUN_14735d7a8 body=304 status=ok
// SIG undefined FUN_14735d7a8(void)

void FUN_14735d7a8(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != (longlong *)0x0) == (param_2 != 0)) {
    uVar6 = (ulonglong)param_4;
    lVar2 = (longlong)(int)param_4;
    if (param_2 == 0) {
      if (((*(longlong *)(param_1 + 0x37b8 + lVar2 * 8) != 0) &&
          (*(undefined8 *)(param_1 + 0x37b8 + lVar2 * 8) = 0, *(uint *)(param_1 + 0x40d0) == param_4
          )) && (*(uint *)(param_1 + 0x40d0) = param_4 - 1, uVar3 = uVar6, 0 < (int)param_4)) {
        do {
          iVar1 = (int)uVar3;
          if (*(longlong *)(param_1 + 0x37b8 + (ulonglong)(iVar1 - 1) * 8) != 0) break;
          *(int *)(param_1 + 0x40d0) = iVar1 + -2;
          uVar3 = (ulonglong)(iVar1 - 1U);
        } while (iVar1 - 1U != 0 && 0 < iVar1);
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x40d0);
      if ((int)*(uint *)(param_1 + 0x40d0) < (int)param_4) {
        uVar4 = param_4;
      }
      *(uint *)(param_1 + 0x40d0) = uVar4;
      *(longlong *)(param_1 + 0x37b8 + lVar2 * 8) = param_2;
    }
    plVar5 = *(longlong **)(param_1 + 0x1178 + uVar6 * 8);
    local_30 = param_3;
    if (plVar5 != param_3) {
      if (param_3 != (longlong *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        plVar5 = *(longlong **)(param_1 + 0x1178 + uVar6 * 8);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(param_1 + 0x1178 + uVar6 * 8) = param_3;
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0xf8))
                (*(longlong **)(param_1 + 0x170),uVar6,1,&local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735d8da FUN_14735d8da body=304 status=ok
// SIG undefined FUN_14735d8da(void)

void FUN_14735d8da(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != (longlong *)0x0) == (param_2 != 0)) {
    uVar6 = (ulonglong)param_4;
    lVar2 = (longlong)(int)param_4;
    if (param_2 == 0) {
      if (((*(longlong *)(param_1 + 0x3bb8 + lVar2 * 8) != 0) &&
          (*(undefined8 *)(param_1 + 0x3bb8 + lVar2 * 8) = 0, *(uint *)(param_1 + 0x40d4) == param_4
          )) && (*(uint *)(param_1 + 0x40d4) = param_4 - 1, uVar3 = uVar6, 0 < (int)param_4)) {
        do {
          iVar1 = (int)uVar3;
          if (*(longlong *)(param_1 + 0x3bb8 + (ulonglong)(iVar1 - 1) * 8) != 0) break;
          *(int *)(param_1 + 0x40d4) = iVar1 + -2;
          uVar3 = (ulonglong)(iVar1 - 1U);
        } while (iVar1 - 1U != 0 && 0 < iVar1);
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x40d4);
      if ((int)*(uint *)(param_1 + 0x40d4) < (int)param_4) {
        uVar4 = param_4;
      }
      *(uint *)(param_1 + 0x40d4) = uVar4;
      *(longlong *)(param_1 + 0x3bb8 + lVar2 * 8) = param_2;
    }
    plVar5 = *(longlong **)(param_1 + 0x1578 + uVar6 * 8);
    local_30 = param_3;
    if (plVar5 != param_3) {
      if (param_3 != (longlong *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        plVar5 = *(longlong **)(param_1 + 0x1578 + uVar6 * 8);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(param_1 + 0x1578 + uVar6 * 8) = param_3;
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x218))
                (*(longlong **)(param_1 + 0x170),uVar6,1,&local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735da0c FUN_14735da0c body=203 status=ok
// SIG undefined FUN_14735da0c(void)

void FUN_14735da0c(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (longlong)*(int *)(param_1 + 0x40c0);
  if (-1 < (longlong)*(int *)(param_1 + 0x40c0)) {
    do {
      if (*(longlong *)(param_1 + 0x27b8 + uVar2 * 8) != 0) {
        FUN_14735d548(param_1,0,0,uVar2 & 0xffffffff);
      }
      bVar1 = 0 < (longlong)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  memset((void *)(param_1 + 0x20a0),0,0xe0);
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
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x38))(*(longlong **)(param_1 + 0x170),0,0xe);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735dad8 FUN_14735dad8 body=206 status=ok
// SIG undefined FUN_14735dad8(void)

void FUN_14735dad8(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (longlong)*(int *)(param_1 + 0x40d0);
  if (-1 < (longlong)*(int *)(param_1 + 0x40d0)) {
    do {
      if (*(longlong *)(param_1 + 0x37b8 + uVar2 * 8) != 0) {
        FUN_14735d7a8(param_1,0,0,uVar2 & 0xffffffff);
      }
      bVar1 = 0 < (longlong)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  memset((void *)(param_1 + 0x2420),0,0xe0);
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
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0xb0))(*(longlong **)(param_1 + 0x170),0,0xe);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735dba8 FUN_14735dba8 body=206 status=ok
// SIG undefined FUN_14735dba8(void)

void FUN_14735dba8(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (longlong)*(int *)(param_1 + 0x40cc);
  if (-1 < (longlong)*(int *)(param_1 + 0x40cc)) {
    do {
      if (*(longlong *)(param_1 + 0x33b8 + uVar2 * 8) != 0) {
        FUN_14735d67a(param_1,0,0,uVar2 & 0xffffffff);
      }
      bVar1 = 0 < (longlong)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  memset((void *)(param_1 + 0x2340),0,0xe0);
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
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x80))(*(longlong **)(param_1 + 0x170),0,0xe);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735dc78 FUN_14735dc78 body=161 status=ok
// SIG undefined FUN_14735dc78(void)

undefined8 * FUN_14735dc78(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a343210;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  param_1[3] = &PTR_FUN_14a340910;
  param_1[5] = param_2;
  param_1[6] = 0xffffffff00000001;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 100) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xb] = &PTR_FUN_14a340940;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  FUN_14735a9b4(param_1 + 3);
  FUN_14735adfa(param_1 + 0xb);
  return param_1;
}



// FUNCTION 14735dd1a FUN_14735dd1a body=96 status=ok
// SIG undefined FUN_14735dd1a(void)

void FUN_14735dd1a(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14735dd7a FUN_14735dd7a body=80 status=ok
// SIG undefined FUN_14735dd7a(void)

void FUN_14735dd7a(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar2 = 0;
  }
  else {
    memmove((void *)*param_1,(void *)((longlong)*param_1 + 8),
            (longlong)(*(int *)(param_1 + 1) + -1) << 3);
    iVar2 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 14735ddca FUN_14735ddca body=93 status=ok
// SIG undefined FUN_14735ddca(void)

void FUN_14735ddca(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_143144040(param_1 + 0x70,1);
  }
  return;
}



// FUNCTION 14735de28 FUN_14735de28 body=45 status=ok
// SIG undefined FUN_14735de28(void)

void FUN_14735de28(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  D3DPERF_BeginEvent(param_3);
  FUN_147404a7e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14735de56 FUN_14735de56 body=26 status=ok
// SIG undefined FUN_14735de56(void)

void FUN_14735de56(undefined8 param_1)

{
  D3DPERF_EndEvent();
  FUN_147404b9e(param_1);
  return;
}



// FUNCTION 14735de70 FUN_14735de70 body=147 status=ok
// SIG undefined FUN_14735de70(void)

void FUN_14735de70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  FUN_147365bf9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_14736903a(param_1 + 8,0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x140);
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined8 *)(param_1 + 0x68));
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0x50) == '\0')) {
    iVar2 = (*(int *)(param_1 + 0x34) + 1) % *(int *)(param_1 + 0x30);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x140);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 8));
    *(int *)(param_1 + 0x34) = iVar2;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 14735df04 FUN_14735df04 body=108 status=ok
// SIG undefined FUN_14735df04(void)

void FUN_14735df04(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0x50) == '\x01')) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x140);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)
                       (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x34) * 8));
    iVar2 = *(int *)(param_1 + 0x38) + 1;
    if (*(int *)(param_1 + 0x30) <= iVar2) {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x38) = iVar2;
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x140);
                    /* WARNING: Could not recover jumptable at 0x00014735df6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 14735df70 FUN_14735df70 body=93 status=ok
// SIG undefined FUN_14735df70(void)

void FUN_14735df70(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_143144040(param_1 + 0x18,1);
  }
  return;
}



// FUNCTION 14735e042 FUN_14735e042 body=31 status=ok
// SIG undefined FUN_14735e042(void)

undefined8 FUN_14735e042(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  return *(undefined8 *)(lVar1 + 0x70);
}



// FUNCTION 14735e062 FUN_14735e062 body=135 status=ok
// SIG undefined FUN_14735e062(void)

undefined8 FUN_14735e062(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  cVar1 = FUN_14490ad04(lVar2 + 0x20,&DAT_149dfb77a,0);
  uVar3 = 0;
  if (cVar1 != '\0') {
    (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_28,lVar2 + 0x20,0);
    uVar3 = local_28[0];
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735e0ea FUN_14735e0ea body=81 status=ok
// SIG undefined FUN_14735e0ea(void)

undefined8 FUN_14735e0ea(undefined8 param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  if ((*(byte *)(lVar1 + 0xb4) & 1) != 0) {
    param_3 = param_3 * *(int *)(lVar1 + 0xb0) + param_4;
  }
  if (param_3 < *(uint *)(lVar1 + 0x88)) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x80) + (longlong)(int)param_3 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14735e13c FUN_14735e13c body=31 status=ok
// SIG undefined FUN_14735e13c(void)

undefined8 FUN_14735e13c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  return *(undefined8 *)(lVar1 + 0x78);
}



// FUNCTION 14735e180 FUN_14735e180 body=39 status=ok
// SIG undefined FUN_14735e180(void)

void FUN_14735e180(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  FUN_143142730(param_3,param_4,param_5,param_6,param_2);
  return;
}



// FUNCTION 14735e1a8 FUN_14735e1a8 body=1292 status=ok
// SIG undefined FUN_14735e1a8(void)

undefined8 * FUN_14735e1a8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined2 *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  char *pcVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_228 [32];
  longlong *local_208;
  int local_1fc;
  longlong *local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8 [18];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_108 = *(undefined4 *)param_3;
  uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_100 = *(uint *)(param_3 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e8 = param_1;
  local_1e0 = param_2;
  puVar11 = (undefined8 *)FUN_14001cc68(0xd8);
  *(undefined4 *)(puVar11 + 1) = 0;
  *(undefined1 *)((longlong)puVar11 + 0xc) = 6;
  *(byte *)((longlong)puVar11 + 0xd) = *(byte *)((longlong)puVar11 + 0xd) | 3;
  *(undefined4 *)(puVar11 + 2) = 0;
  memset(puVar11 + 3,0,0x85);
  *(byte *)((longlong)puVar11 + 0x9d) = *(byte *)((longlong)puVar11 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar11 + 0x9e) = 0;
  puVar11[0x14] = 0;
  puVar11[0x15] = 0;
  *puVar11 = &PTR_FUN_14a343290;
  puVar11[0x17] = 0;
  puVar11[0x18] = 0;
  puVar11[0x19] = 0;
  uVar2 = *param_3;
  iVar10 = *(int *)(param_3 + 1);
  local_1c0 = param_3;
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_120 = uVar2;
  local_118 = (longlong)iVar10;
  FUN_140996f94(local_1b8,1);
  (*(code *)local_1b8[0][0x1e])(local_1b8,1);
  local_1d0 = puVar11 + 2;
  FUN_1402ee999(local_1b8,puVar11 + 2);
  uVar8 = uStack_100;
  uVar22 = (ulonglong)(int)uStack_100;
  lVar23 = CONCAT44(uStack_104,local_108);
  iVar10 = (int)local_128;
  if ((ulonglong)uStack_100 < 4) {
    lVar19 = 0;
    uVar21 = (ulonglong)uStack_100;
    local_1fc = iVar10;
  }
  else {
    local_1fc = *(int *)(lVar23 + -4 + uVar22);
    lVar19 = (longlong)local_1fc;
    local_1fc = local_1fc + iVar10;
    uVar21 = uVar22;
  }
  lVar25 = lVar23 + uVar21;
  puVar17 = puVar11 + 0x14;
  local_1f8 = puVar11 + 0x17;
  local_1f0 = puVar11 + 0x18;
  local_1d8 = iVar10 + lVar23;
  local_1fc = uStack_100 - local_1fc;
  pbVar16 = (byte *)0x0;
  pbVar14 = (byte *)-lVar19;
  do {
    pbVar12 = pbVar14;
    if (-5 < (longlong)pbVar12) goto LAB_14735e37e;
    pbVar13 = (byte *)(ulonglong)*(uint *)(pbVar12 + lVar25 + 1);
    pbVar14 = pbVar13;
    if (pbVar12[lVar25] == 0x70 && pbVar13 == (byte *)0x5) {
      pbVar14 = pbVar16;
    }
    pbVar14 = pbVar14 + 5 + (longlong)pbVar12;
  } while (pbVar12[lVar25] != 0x70 || pbVar13 != (byte *)0x5);
  pbVar16 = pbVar12 + lVar25 + 5;
LAB_14735e37e:
  *(undefined2 *)((longlong)puVar11 + 0xb2) = 0;
  local_1c8 = local_128;
  if (uStack_100 < 4) {
    lVar19 = 0;
  }
  else {
    lVar19 = (longlong)*(int *)(lVar25 + -4);
  }
  lVar19 = -lVar19;
  do {
    lVar20 = lVar19;
    if (-5 < lVar20) goto LAB_14735e3df;
    uVar18 = (ulonglong)*(uint *)(lVar25 + 1 + lVar20);
    bVar26 = *(char *)(lVar25 + lVar20) != 'm';
    uVar21 = uVar18;
    if (!bVar26 && uVar18 == 4) {
      uVar21 = 0;
    }
    lVar19 = uVar21 + 5 + lVar20;
  } while (bVar26 || uVar18 != 4);
  puVar15 = (undefined2 *)(lVar20 + 5 + lVar25);
  if (puVar15 != (undefined2 *)0x0) {
    *(undefined2 *)((longlong)puVar11 + 0xb2) = *puVar15;
  }
LAB_14735e3df:
  *(byte *)(puVar11 + 0x16) = *pbVar16 & 1;
  if (uStack_100 < 4) {
    lVar19 = 0;
  }
  else {
    lVar19 = (longlong)*(int *)(lVar25 + -4);
  }
  lVar19 = -lVar19;
  do {
    lVar20 = lVar19;
    if (-5 < lVar20) goto LAB_14735e42f;
    uVar1 = *(uint *)(lVar25 + 1 + lVar20);
    bVar26 = *(char *)(lVar25 + lVar20) != 'v';
    uVar21 = (ulonglong)uVar1;
    if (!bVar26) {
      uVar21 = 0;
    }
    lVar19 = uVar21 + 5 + lVar20;
  } while (bVar26);
  lVar25 = lVar25 + lVar20 + 5;
  if ((lVar25 != 0) && (0 < (int)uVar1)) {
    FUN_144869430(local_f8);
    local_f8[0] = &PTR__purecall_149e30ac0;
    local_60 = 0;
    local_50 = '\0';
    local_68 = lVar25;
    local_58 = (ulonglong)uVar1;
    FUN_140996f94(local_f8,1);
    (*(code *)local_f8[0][0x1e])(local_f8,0);
    local_f8[0] = &PTR_FUN_149e447c0;
    FUN_14736909a(local_f8);
    if (local_50 == '\x01') {
      FUN_1400020a8(local_68);
      local_68 = 0;
    }
    FUN_144a7fc42();
  }
LAB_14735e42f:
  puVar7 = local_1e0;
  lVar19 = local_1e8;
  puVar6 = local_1f0;
  plVar5 = local_1f8;
  lVar23 = lVar23 + uVar22;
  *(byte *)(puVar11 + 0x16) = *pbVar16 & 1;
  if (uVar8 < 4) {
    lVar25 = 0;
  }
  else {
    lVar25 = (longlong)*(int *)(lVar23 + -4);
  }
  lVar25 = -lVar25;
  do {
    lVar20 = lVar25;
    if (-5 < lVar20) goto LAB_14735e4a6;
    uVar21 = (ulonglong)*(uint *)(lVar23 + 1 + lVar20);
    bVar26 = *(char *)(lVar23 + lVar20) != '6';
    uVar22 = uVar21;
    if (!bVar26 && uVar21 == 1) {
      uVar22 = 0;
    }
    lVar25 = uVar22 + 5 + lVar20;
  } while (bVar26 || uVar21 != 1);
  pcVar24 = (char *)(lVar23 + lVar20 + 5);
  if (pcVar24 == (char *)0x0) {
LAB_14735e4a6:
    bVar26 = false;
  }
  else {
    bVar26 = *pcVar24 != '\0';
  }
  *(bool *)((longlong)puVar11 + 0xb1) = bVar26;
  FUN_142b77a23(puVar11,&local_108);
  local_f8[0] = (undefined **)((ulonglong)local_f8[0] & 0xffffffffffffff00);
  if (puVar11 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  cVar9 = FUN_143148eef(*(undefined8 *)(lVar19 + 0x150),puVar17);
  if (cVar9 != '\0') {
    plVar3 = *(longlong **)(lVar19 + 0x150);
    plVar4 = (longlong *)*plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar5 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    local_208 = plVar5;
    iVar10 = (**(code **)(*plVar3 + 0x60))(plVar3,local_1d8,(longlong)local_1fc,0);
    if (iVar10 < 0) {
      FUN_143148fa0(iVar10,
                    "Direct3DDevice->CreateVertexShader(ActualCode.GetData(), ActualCode.Num(), nullptr, Shader->Resource.GetInitReference())"
                    ,0x8a,*(undefined8 *)(lVar19 + 0x150));
    }
    if (((char)local_f8[0] == '\x01') && (DAT_14ca84df4 == 0x10de)) {
      FUN_142500620(*(undefined8 *)(lVar19 + 0x150),0xffffffff);
    }
    puVar17 = local_1d0;
    if (puVar11 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
    }
    FUN_1402eea41(puVar17);
  }
  iVar10 = *(int *)(local_1c0 + 1);
  _Src = (void *)*local_1c0;
  *(int *)(puVar11 + 0x19) = iVar10;
  if (iVar10 == 0 && *(int *)((longlong)puVar11 + 0xcc) == 0) {
    *(undefined4 *)((longlong)puVar11 + 0xcc) = 0;
  }
  else {
    FUN_1447a127e(puVar6,iVar10);
    if (iVar10 != 0) {
      memcpy((void *)*puVar6,_Src,(longlong)iVar10);
    }
  }
  *(int *)(puVar11 + 0x1a) = (int)local_1c8;
  *puVar7 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  FUN_144a7fc42(local_1b8);
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735e6b6 FUN_14735e6b6 body=1159 status=ok
// SIG undefined FUN_14735e6b6(void)

undefined8 * FUN_14735e6b6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  undefined8 *puVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  int local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8 [18];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_108 = *(undefined4 *)param_3;
  uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_100 = *(uint *)(param_3 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1d8 = param_1;
  local_1c0 = param_2;
  puVar9 = (undefined8 *)FUN_14001cc68(0xc0);
  *(undefined4 *)(puVar9 + 1) = 0;
  *(undefined1 *)((longlong)puVar9 + 0xc) = 10;
  *(byte *)((longlong)puVar9 + 0xd) = *(byte *)((longlong)puVar9 + 0xd) | 3;
  *(undefined4 *)(puVar9 + 2) = 0;
  memset(puVar9 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar9 + 0x9c) = 4;
  *(byte *)((longlong)puVar9 + 0x9d) = *(byte *)((longlong)puVar9 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar9 + 0x9e) = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  *puVar9 = &PTR_FUN_14a343298;
  puVar9[0x17] = 0;
  uVar2 = *param_3;
  iVar8 = *(int *)(param_3 + 1);
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_120 = uVar2;
  local_118 = (longlong)iVar8;
  FUN_140996f94(local_1b8,1);
  (*(code *)local_1b8[0][0x1e])(local_1b8,1);
  local_1c8 = puVar9 + 2;
  FUN_1402ee999(local_1b8,puVar9 + 2);
  uVar6 = uStack_100;
  uVar20 = (ulonglong)(int)uStack_100;
  lVar21 = CONCAT44(uStack_104,local_108);
  iVar8 = (int)local_128;
  if ((ulonglong)uStack_100 < 4) {
    lVar17 = 0;
    uVar19 = (ulonglong)uStack_100;
    local_1e4 = iVar8;
  }
  else {
    local_1e4 = *(int *)(lVar21 + -4 + uVar20);
    lVar17 = (longlong)local_1e4;
    local_1e4 = local_1e4 + iVar8;
    uVar19 = uVar20;
  }
  lVar24 = lVar21 + uVar19;
  puVar23 = puVar9 + 0x14;
  local_1e0 = puVar9 + 0x17;
  local_1d0 = iVar8 + lVar21;
  local_1e4 = uStack_100 - local_1e4;
  pbVar10 = (byte *)0x0;
  pbVar14 = (byte *)-lVar17;
  do {
    pbVar12 = pbVar14;
    if (-5 < (longlong)pbVar12) goto LAB_14735e86f;
    pbVar13 = (byte *)(ulonglong)*(uint *)(pbVar12 + lVar24 + 1);
    pbVar14 = pbVar13;
    if (pbVar12[lVar24] == 0x70 && pbVar13 == (byte *)0x5) {
      pbVar14 = pbVar10;
    }
    pbVar14 = pbVar14 + 5 + (longlong)pbVar12;
  } while (pbVar12[lVar24] != 0x70 || pbVar13 != (byte *)0x5);
  pbVar10 = pbVar12 + lVar24 + 5;
LAB_14735e86f:
  *(undefined2 *)((longlong)puVar9 + 0xb2) = 0;
  if (uStack_100 < 4) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)*(int *)(lVar24 + -4);
  }
  lVar17 = -lVar17;
  do {
    lVar18 = lVar17;
    if (-5 < lVar18) goto LAB_14735e8ca;
    uVar16 = (ulonglong)*(uint *)(lVar24 + 1 + lVar18);
    bVar25 = *(char *)(lVar24 + lVar18) != 'm';
    uVar19 = uVar16;
    if (!bVar25 && uVar16 == 4) {
      uVar19 = 0;
    }
    lVar17 = uVar19 + 5 + lVar18;
  } while (bVar25 || uVar16 != 4);
  puVar11 = (undefined2 *)(lVar18 + 5 + lVar24);
  if (puVar11 != (undefined2 *)0x0) {
    *(undefined2 *)((longlong)puVar9 + 0xb2) = *puVar11;
  }
LAB_14735e8ca:
  *(byte *)(puVar9 + 0x16) = *pbVar10 & 1;
  if (uStack_100 < 4) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)*(int *)(lVar24 + -4);
  }
  lVar17 = -lVar17;
  do {
    lVar18 = lVar17;
    if (-5 < lVar18) goto LAB_14735e91a;
    uVar1 = *(uint *)(lVar24 + 1 + lVar18);
    bVar25 = *(char *)(lVar24 + lVar18) != 'v';
    uVar19 = (ulonglong)uVar1;
    if (!bVar25) {
      uVar19 = 0;
    }
    lVar17 = uVar19 + 5 + lVar18;
  } while (bVar25);
  lVar24 = lVar24 + lVar18 + 5;
  if ((lVar24 != 0) && (0 < (int)uVar1)) {
    FUN_144869430(local_f8);
    local_f8[0] = &PTR__purecall_149e30ac0;
    local_60 = 0;
    local_50 = '\0';
    local_68 = lVar24;
    local_58 = (ulonglong)uVar1;
    FUN_140996f94(local_f8,1);
    (*(code *)local_f8[0][0x1e])(local_f8,0);
    local_f8[0] = &PTR_FUN_149e447c0;
    FUN_14736909a(local_f8);
    if (local_50 == '\x01') {
      FUN_1400020a8(local_68);
      local_68 = 0;
    }
    FUN_144a7fc42();
  }
LAB_14735e91a:
  lVar17 = local_1d8;
  plVar5 = local_1e0;
  lVar21 = lVar21 + uVar20;
  *(byte *)(puVar9 + 0x16) = *pbVar10 & 1;
  if (uVar6 < 4) {
    lVar24 = 0;
  }
  else {
    lVar24 = (longlong)*(int *)(lVar21 + -4);
  }
  lVar24 = -lVar24;
  do {
    lVar18 = lVar24;
    if (-5 < lVar18) goto LAB_14735e980;
    uVar19 = (ulonglong)*(uint *)(lVar21 + 1 + lVar18);
    bVar25 = *(char *)(lVar21 + lVar18) != '6';
    uVar20 = uVar19;
    if (!bVar25 && uVar19 == 1) {
      uVar20 = 0;
    }
    lVar24 = uVar20 + 5 + lVar18;
  } while (bVar25 || uVar19 != 1);
  pcVar22 = (char *)(lVar21 + lVar18 + 5);
  if (pcVar22 == (char *)0x0) {
LAB_14735e980:
    bVar25 = false;
  }
  else {
    bVar25 = *pcVar22 != '\0';
  }
  *(bool *)((longlong)puVar9 + 0xb1) = bVar25;
  FUN_142b77a23(puVar9,&local_108);
  local_f8[0] = (undefined **)((ulonglong)local_f8[0] & 0xffffffffffffff00);
  if (puVar9 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
  }
  cVar7 = FUN_143148eef(*(undefined8 *)(lVar17 + 0x150),puVar23);
  puVar23 = local_1c0;
  if (cVar7 != '\0') {
    plVar3 = *(longlong **)(lVar17 + 0x150);
    plVar4 = (longlong *)*plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar5 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    local_1f8 = plVar5;
    iVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,local_1d0,(longlong)local_1e4,0);
    if (iVar8 < 0) {
      FUN_143148fa0(iVar8,
                    "Direct3DDevice->CreateGeometryShader(ActualCode.GetData(), ActualCode.Num(), nullptr, Shader->Resource.GetInitReference())"
                    ,0xa9,*(undefined8 *)(lVar17 + 0x150));
    }
    if (((char)local_f8[0] == '\x01') && (DAT_14ca84df4 == 0x10de)) {
      FUN_142500620(*(undefined8 *)(lVar17 + 0x150),0xffffffff);
    }
    puVar15 = local_1c8;
    if (puVar9 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    FUN_1402eea41(puVar15);
  }
  *puVar23 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  FUN_144a7fc42(local_1b8);
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return puVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735eb3e FUN_14735eb3e body=1159 status=ok
// SIG undefined FUN_14735eb3e(void)

undefined8 * FUN_14735eb3e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  undefined8 *puVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  int local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8 [18];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_108 = *(undefined4 *)param_3;
  uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_100 = *(uint *)(param_3 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1d8 = param_1;
  local_1c0 = param_2;
  puVar9 = (undefined8 *)FUN_14001cc68(0xc0);
  *(undefined4 *)(puVar9 + 1) = 0;
  *(undefined1 *)((longlong)puVar9 + 0xc) = 9;
  *(byte *)((longlong)puVar9 + 0xd) = *(byte *)((longlong)puVar9 + 0xd) | 3;
  *(undefined4 *)(puVar9 + 2) = 0;
  memset(puVar9 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar9 + 0x9c) = 3;
  *(byte *)((longlong)puVar9 + 0x9d) = *(byte *)((longlong)puVar9 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar9 + 0x9e) = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  *puVar9 = &PTR_FUN_14a3432a0;
  puVar9[0x17] = 0;
  uVar2 = *param_3;
  iVar8 = *(int *)(param_3 + 1);
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_120 = uVar2;
  local_118 = (longlong)iVar8;
  FUN_140996f94(local_1b8,1);
  (*(code *)local_1b8[0][0x1e])(local_1b8,1);
  local_1c8 = puVar9 + 2;
  FUN_1402ee999(local_1b8,puVar9 + 2);
  uVar6 = uStack_100;
  uVar20 = (ulonglong)(int)uStack_100;
  lVar21 = CONCAT44(uStack_104,local_108);
  iVar8 = (int)local_128;
  if ((ulonglong)uStack_100 < 4) {
    lVar17 = 0;
    uVar19 = (ulonglong)uStack_100;
    local_1e4 = iVar8;
  }
  else {
    local_1e4 = *(int *)(lVar21 + -4 + uVar20);
    lVar17 = (longlong)local_1e4;
    local_1e4 = local_1e4 + iVar8;
    uVar19 = uVar20;
  }
  lVar24 = lVar21 + uVar19;
  puVar23 = puVar9 + 0x14;
  local_1e0 = puVar9 + 0x17;
  local_1d0 = iVar8 + lVar21;
  local_1e4 = uStack_100 - local_1e4;
  pbVar10 = (byte *)0x0;
  pbVar14 = (byte *)-lVar17;
  do {
    pbVar12 = pbVar14;
    if (-5 < (longlong)pbVar12) goto LAB_14735ecf7;
    pbVar13 = (byte *)(ulonglong)*(uint *)(pbVar12 + lVar24 + 1);
    pbVar14 = pbVar13;
    if (pbVar12[lVar24] == 0x70 && pbVar13 == (byte *)0x5) {
      pbVar14 = pbVar10;
    }
    pbVar14 = pbVar14 + 5 + (longlong)pbVar12;
  } while (pbVar12[lVar24] != 0x70 || pbVar13 != (byte *)0x5);
  pbVar10 = pbVar12 + lVar24 + 5;
LAB_14735ecf7:
  *(undefined2 *)((longlong)puVar9 + 0xb2) = 0;
  if (uStack_100 < 4) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)*(int *)(lVar24 + -4);
  }
  lVar17 = -lVar17;
  do {
    lVar18 = lVar17;
    if (-5 < lVar18) goto LAB_14735ed52;
    uVar16 = (ulonglong)*(uint *)(lVar24 + 1 + lVar18);
    bVar25 = *(char *)(lVar24 + lVar18) != 'm';
    uVar19 = uVar16;
    if (!bVar25 && uVar16 == 4) {
      uVar19 = 0;
    }
    lVar17 = uVar19 + 5 + lVar18;
  } while (bVar25 || uVar16 != 4);
  puVar11 = (undefined2 *)(lVar18 + 5 + lVar24);
  if (puVar11 != (undefined2 *)0x0) {
    *(undefined2 *)((longlong)puVar9 + 0xb2) = *puVar11;
  }
LAB_14735ed52:
  *(byte *)(puVar9 + 0x16) = *pbVar10 & 1;
  if (uStack_100 < 4) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)*(int *)(lVar24 + -4);
  }
  lVar17 = -lVar17;
  do {
    lVar18 = lVar17;
    if (-5 < lVar18) goto LAB_14735eda2;
    uVar1 = *(uint *)(lVar24 + 1 + lVar18);
    bVar25 = *(char *)(lVar24 + lVar18) != 'v';
    uVar19 = (ulonglong)uVar1;
    if (!bVar25) {
      uVar19 = 0;
    }
    lVar17 = uVar19 + 5 + lVar18;
  } while (bVar25);
  lVar24 = lVar24 + lVar18 + 5;
  if ((lVar24 != 0) && (0 < (int)uVar1)) {
    FUN_144869430(local_f8);
    local_f8[0] = &PTR__purecall_149e30ac0;
    local_60 = 0;
    local_50 = '\0';
    local_68 = lVar24;
    local_58 = (ulonglong)uVar1;
    FUN_140996f94(local_f8,1);
    (*(code *)local_f8[0][0x1e])(local_f8,0);
    local_f8[0] = &PTR_FUN_149e447c0;
    FUN_14736909a(local_f8);
    if (local_50 == '\x01') {
      FUN_1400020a8(local_68);
      local_68 = 0;
    }
    FUN_144a7fc42();
  }
LAB_14735eda2:
  lVar17 = local_1d8;
  plVar5 = local_1e0;
  lVar21 = lVar21 + uVar20;
  *(byte *)(puVar9 + 0x16) = *pbVar10 & 1;
  if (uVar6 < 4) {
    lVar24 = 0;
  }
  else {
    lVar24 = (longlong)*(int *)(lVar21 + -4);
  }
  lVar24 = -lVar24;
  do {
    lVar18 = lVar24;
    if (-5 < lVar18) goto LAB_14735ee08;
    uVar19 = (ulonglong)*(uint *)(lVar21 + 1 + lVar18);
    bVar25 = *(char *)(lVar21 + lVar18) != '6';
    uVar20 = uVar19;
    if (!bVar25 && uVar19 == 1) {
      uVar20 = 0;
    }
    lVar24 = uVar20 + 5 + lVar18;
  } while (bVar25 || uVar19 != 1);
  pcVar22 = (char *)(lVar21 + lVar18 + 5);
  if (pcVar22 == (char *)0x0) {
LAB_14735ee08:
    bVar25 = false;
  }
  else {
    bVar25 = *pcVar22 != '\0';
  }
  *(bool *)((longlong)puVar9 + 0xb1) = bVar25;
  FUN_142b77a23(puVar9,&local_108);
  local_f8[0] = (undefined **)((ulonglong)local_f8[0] & 0xffffffffffffff00);
  if (puVar9 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
  }
  cVar7 = FUN_143148eef(*(undefined8 *)(lVar17 + 0x150),puVar23);
  puVar23 = local_1c0;
  if (cVar7 != '\0') {
    plVar3 = *(longlong **)(lVar17 + 0x150);
    plVar4 = (longlong *)*plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar5 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    local_1f8 = plVar5;
    iVar8 = (**(code **)(*plVar3 + 0x78))(plVar3,local_1d0,(longlong)local_1e4,0);
    if (iVar8 < 0) {
      FUN_143148fa0(iVar8,
                    "Direct3DDevice->CreatePixelShader(ActualCode.GetData(), ActualCode.Num(), nullptr, Shader->Resource.GetInitReference())"
                    ,0xc4,*(undefined8 *)(lVar17 + 0x150));
    }
    if (((char)local_f8[0] == '\x01') && (DAT_14ca84df4 == 0x10de)) {
      FUN_142500620(*(undefined8 *)(lVar17 + 0x150),0xffffffff);
    }
    puVar15 = local_1c8;
    if (puVar9 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    FUN_1402eea41(puVar15);
  }
  *puVar23 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  FUN_144a7fc42(local_1b8);
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return puVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735efc6 FUN_14735efc6 body=1169 status=ok
// SIG undefined FUN_14735efc6(void)

undefined8 * FUN_14735efc6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  undefined8 *puVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  int local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8 [18];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_108 = *(undefined4 *)param_3;
  uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_100 = *(uint *)(param_3 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1d8 = param_1;
  local_1c0 = param_2;
  puVar9 = (undefined8 *)FUN_14001cc68(200);
  *(undefined4 *)(puVar9 + 1) = 0;
  *(undefined1 *)((longlong)puVar9 + 0xc) = 0xc;
  *(byte *)((longlong)puVar9 + 0xd) = *(byte *)((longlong)puVar9 + 0xd) | 3;
  *(undefined4 *)(puVar9 + 2) = 0;
  memset(puVar9 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar9 + 0x9c) = 5;
  *(byte *)((longlong)puVar9 + 0x9d) = *(byte *)((longlong)puVar9 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar9 + 0x9e) = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  *puVar9 = &PTR_FUN_14a3432a8;
  puVar9[0x18] = 0;
  uVar2 = *param_3;
  iVar8 = *(int *)(param_3 + 1);
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_120 = uVar2;
  local_118 = (longlong)iVar8;
  FUN_140996f94(local_1b8,1);
  (*(code *)local_1b8[0][0x1e])(local_1b8,1);
  local_1c8 = puVar9 + 2;
  FUN_1402ee999(local_1b8,puVar9 + 2);
  uVar6 = uStack_100;
  uVar20 = (ulonglong)(int)uStack_100;
  lVar21 = CONCAT44(uStack_104,local_108);
  iVar8 = (int)local_128;
  if ((ulonglong)uStack_100 < 4) {
    lVar17 = 0;
    uVar19 = (ulonglong)uStack_100;
    local_1e4 = iVar8;
  }
  else {
    local_1e4 = *(int *)(lVar21 + -4 + uVar20);
    lVar17 = (longlong)local_1e4;
    local_1e4 = local_1e4 + iVar8;
    uVar19 = uVar20;
  }
  lVar24 = lVar21 + uVar19;
  puVar23 = puVar9 + 0x15;
  local_1e0 = puVar9 + 0x18;
  local_1d0 = iVar8 + lVar21;
  local_1e4 = uStack_100 - local_1e4;
  pbVar10 = (byte *)0x0;
  pbVar14 = (byte *)-lVar17;
  do {
    pbVar12 = pbVar14;
    if (-5 < (longlong)pbVar12) goto LAB_14735f186;
    pbVar13 = (byte *)(ulonglong)*(uint *)(pbVar12 + lVar24 + 1);
    pbVar14 = pbVar13;
    if (pbVar12[lVar24] == 0x70 && pbVar13 == (byte *)0x5) {
      pbVar14 = pbVar10;
    }
    pbVar14 = pbVar14 + 5 + (longlong)pbVar12;
  } while (pbVar12[lVar24] != 0x70 || pbVar13 != (byte *)0x5);
  pbVar10 = pbVar12 + lVar24 + 5;
LAB_14735f186:
  *(undefined2 *)((longlong)puVar9 + 0xba) = 0;
  if (uStack_100 < 4) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)*(int *)(lVar24 + -4);
  }
  lVar17 = -lVar17;
  do {
    lVar18 = lVar17;
    if (-5 < lVar18) goto LAB_14735f1e1;
    uVar16 = (ulonglong)*(uint *)(lVar24 + 1 + lVar18);
    bVar25 = *(char *)(lVar24 + lVar18) != 'm';
    uVar19 = uVar16;
    if (!bVar25 && uVar16 == 4) {
      uVar19 = 0;
    }
    lVar17 = uVar19 + 5 + lVar18;
  } while (bVar25 || uVar16 != 4);
  puVar11 = (undefined2 *)(lVar18 + 5 + lVar24);
  if (puVar11 != (undefined2 *)0x0) {
    *(undefined2 *)((longlong)puVar9 + 0xba) = *puVar11;
  }
LAB_14735f1e1:
  *(byte *)(puVar9 + 0x17) = *pbVar10 & 1;
  if (uStack_100 < 4) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)*(int *)(lVar24 + -4);
  }
  lVar17 = -lVar17;
  do {
    lVar18 = lVar17;
    if (-5 < lVar18) goto LAB_14735f231;
    uVar1 = *(uint *)(lVar24 + 1 + lVar18);
    bVar25 = *(char *)(lVar24 + lVar18) != 'v';
    uVar19 = (ulonglong)uVar1;
    if (!bVar25) {
      uVar19 = 0;
    }
    lVar17 = uVar19 + 5 + lVar18;
  } while (bVar25);
  lVar24 = lVar24 + lVar18 + 5;
  if ((lVar24 != 0) && (0 < (int)uVar1)) {
    FUN_144869430(local_f8);
    local_f8[0] = &PTR__purecall_149e30ac0;
    local_60 = 0;
    local_50 = '\0';
    local_68 = lVar24;
    local_58 = (ulonglong)uVar1;
    FUN_140996f94(local_f8,1);
    (*(code *)local_f8[0][0x1e])(local_f8,0);
    local_f8[0] = &PTR_FUN_149e447c0;
    FUN_14736909a(local_f8);
    if (local_50 == '\x01') {
      FUN_1400020a8(local_68);
      local_68 = 0;
    }
    FUN_144a7fc42();
  }
LAB_14735f231:
  lVar17 = local_1d8;
  plVar5 = local_1e0;
  lVar21 = lVar21 + uVar20;
  *(byte *)(puVar9 + 0x17) = *pbVar10 & 1;
  if (uVar6 < 4) {
    lVar24 = 0;
  }
  else {
    lVar24 = (longlong)*(int *)(lVar21 + -4);
  }
  lVar24 = -lVar24;
  do {
    lVar18 = lVar24;
    if (-5 < lVar18) goto LAB_14735f297;
    uVar19 = (ulonglong)*(uint *)(lVar21 + 1 + lVar18);
    bVar25 = *(char *)(lVar21 + lVar18) != '6';
    uVar20 = uVar19;
    if (!bVar25 && uVar19 == 1) {
      uVar20 = 0;
    }
    lVar24 = uVar20 + 5 + lVar18;
  } while (bVar25 || uVar19 != 1);
  pcVar22 = (char *)(lVar21 + lVar18 + 5);
  if (pcVar22 == (char *)0x0) {
LAB_14735f297:
    bVar25 = false;
  }
  else {
    bVar25 = *pcVar22 != '\0';
  }
  *(bool *)((longlong)puVar9 + 0xb9) = bVar25;
  FUN_142b77a23(puVar9,&local_108);
  local_f8[0] = (undefined **)((ulonglong)local_f8[0] & 0xffffffffffffff00);
  if (puVar9 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
  }
  cVar7 = FUN_143148eef(*(undefined8 *)(lVar17 + 0x150),puVar23);
  puVar23 = local_1c0;
  if (cVar7 != '\0') {
    plVar3 = *(longlong **)(lVar17 + 0x150);
    plVar4 = (longlong *)*plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar5 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    local_1f8 = plVar5;
    iVar8 = (**(code **)(*plVar3 + 0x90))(plVar3,local_1d0,(longlong)local_1e4,0);
    if (iVar8 < 0) {
      FUN_143148fa0(iVar8,
                    "Direct3DDevice->CreateComputeShader(ActualCode.GetData(), ActualCode.Num(), nullptr, Shader->Resource.GetInitReference())"
                    ,0xdf,*(undefined8 *)(lVar17 + 0x150));
    }
    if (((char)local_f8[0] == '\x01') && (DAT_14ca84df4 == 0x10de)) {
      FUN_142500620(*(undefined8 *)(lVar17 + 0x150),0xffffffff);
    }
    puVar15 = local_1c8;
    if (puVar9 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    FUN_1402eea41(puVar15);
  }
  *puVar23 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  FUN_144a7fc42(local_1b8);
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return puVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735f458 FUN_14735f458 body=126 status=ok
// SIG undefined FUN_14735f458(void)

void FUN_14735f458(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x19b8) == param_2) {
    iVar1 = memcmp((void *)(param_1 + 0x19bc),param_3,(ulonglong)param_2 * 0x18);
    if (iVar1 == 0) {
      return;
    }
  }
  memcpy((void *)(param_1 + 0x19bc),param_3,(ulonglong)param_2 * 0x18);
  *(uint *)(param_1 + 0x19b8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014735f4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x160))
            (*(longlong **)(param_1 + 0x158),param_2,param_3);
  return;
}



// FUNCTION 14735f4d6 FUN_14735f4d6 body=257 status=ok
// SIG undefined FUN_14735f4d6(void)

undefined8 *
FUN_14735f4d6(undefined8 *param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x20;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e49d0;
  param_1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  uVar1 = param_4[1];
  param_1[3] = *param_4;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a341120;
  param_1[5] = &PTR_FUN_14a341130;
  param_1[8] = 0;
  local_20 = param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_143152f32(&local_20);
  }
  else {
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
    *puVar2 = &PTR_FUN_14a343bf0;
    puVar2[2] = param_1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735f5d8 FUN_14735f5d8 body=729 status=ok
// SIG undefined FUN_14735f5d8(void)

void FUN_14735f5d8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte local_5c;
  byte local_5b;
  char local_5a;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  ulonglong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  auStack_50 = (undefined1  [8])0x0;
  local_48[0] = 0;
  plVar1 = *(longlong **)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    FUN_144b1c3c6(param_1 + -0x10,&local_6c,plVar1);
    if (local_5a == '\0') {
      lVar10 = plVar1[7];
      uVar4 = FUN_144b19d65(*(undefined4 *)
                             ((longlong)&DAT_14c873434 + (ulonglong)((uint)local_5b * 0x30)));
      local_58 = CONCAT44(local_58._4_4_,uVar4);
      if (local_5c - 1 < 2) {
        puVar7 = (ulonglong *)(auStack_50 + 4);
        local_58 = CONCAT44(1,uVar4);
        auStack_50._0_4_ = local_6c / local_68;
      }
      else {
        if (local_5c != 4) goto switchD_14735f6ba_default;
        puVar7 = local_48;
        local_58 = 0xb00000027;
        auStack_50._4_4_ = local_64;
        auStack_50._0_4_ = local_6c / local_68;
        local_64 = 1;
      }
      *(uint *)puVar7 = local_64;
    }
    else {
      lVar10 = 0;
    }
    goto switchD_14735f6ba_default;
  }
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  lVar10 = *(longlong *)(lVar6 + 0x70);
  puVar8 = &local_6c;
  FUN_140100962(param_1 + -0x10,&local_6c,lVar6);
  uVar4 = FUN_144b19d65(*(undefined4 *)
                         ((longlong)&DAT_14c873434 + (ulonglong)((uint)local_68._1_1_ * 0x30)),
                        CONCAT71((int7)((ulonglong)puVar8 >> 8),local_64._2_1_) & 0xffffffffffffff01
                       );
  local_58 = CONCAT44(local_58._4_4_,uVar4);
  uVar3 = FUN_142b746ac(&local_6c,lVar6 + 0x20);
  switch(uVar3) {
  case 1:
    if (1 < *(byte *)(lVar6 + 0x51)) {
      local_58 = CONCAT44(6,(undefined4)local_58);
      goto switchD_14735f6ba_default;
    }
    local_58 = CONCAT44(4,(undefined4)local_58);
    break;
  case 2:
    if (*(byte *)(lVar6 + 0x51) < 2) {
      local_58 = CONCAT44(5,(undefined4)local_58);
      local_48[0] = (ulonglong)(CONCAT24(local_6c._2_2_,local_6c) & 0xffff0000ffff);
      break;
    }
    local_58 = CONCAT44(7,(undefined4)local_58);
    auStack_50._0_4_ = local_6c & 0xffff;
    auStack_50._4_4_ = ZEXT24(local_6c._2_2_);
    goto LAB_14735f786;
  case 3:
    local_58 = CONCAT44(9,(undefined4)local_58);
    break;
  case 4:
    local_58 = CONCAT44(10,(undefined4)local_58);
    auStack_50._5_3_ = 0;
    auStack_50._0_5_ = CONCAT14(local_64._1_1_,local_64) & 0xff000000ff;
    local_48[0] = (ulonglong)CONCAT24(local_6c._2_2_,(local_6c & 0xffff) * 6);
    goto switchD_14735f6ba_default;
  case 5:
    local_58 = CONCAT44(8,(undefined4)local_58);
    break;
  default:
    goto switchD_14735f6ba_default;
  }
  auStack_50._0_4_ = local_64 & 0xff;
  auStack_50._4_4_ = ZEXT14(local_64._1_1_);
LAB_14735f786:
switchD_14735f6ba_default:
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar9 = (longlong *)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar9 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (lVar10 != 0) {
    lVar6 = (**(code **)(*DAT_14ca83900 + 0x30))();
    plVar1 = *(longlong **)(lVar6 + 0x150);
    plVar2 = (longlong *)*plVar9;
    if (plVar2 != (longlong *)0x0) {
      *plVar9 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    iVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,lVar10,&local_58,plVar9);
    if (iVar5 < 0) {
      local_78 = plVar1;
      FUN_143142730(iVar5,
                    "Device->CreateShaderResourceView(D3DResource, &SRVDesc, View.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11SRV.cpp",0x8c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14735f8b2 FUN_14735f8b2 body=87 status=ok
// SIG undefined FUN_14735f8b2(void)

longlong *
FUN_14735f8b2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x48,0x10);
  FUN_14735f4d6(lVar1,param_3,param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14735f90a FUN_14735f90a body=848 status=ok
// SIG undefined FUN_14735f90a(void)

undefined8 * FUN_14735f90a(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  longlong **local_68;
  undefined8 **local_60;
  undefined1 local_58 [4];
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_54 = 0;
  local_4c = 1;
  local_50 = 1;
  if ((byte)(param_3[1] - 1) < 3) {
    local_50 = *(undefined4 *)(&DAT_14a344ce0 + (ulonglong)(byte)(param_3[1] - 1) * 4);
  }
  if ((byte)(param_3[2] - 1) < 3) {
    local_4c = *(undefined4 *)(&DAT_14a344ce0 + (ulonglong)(byte)(param_3[2] - 1) * 4);
  }
  local_48 = 1;
  if ((byte)(param_3[3] - 1) < 3) {
    local_48 = *(undefined4 *)(&DAT_14a344ce0 + (ulonglong)(byte)(param_3[3] - 1) * 4);
  }
  local_44 = *(undefined4 *)(param_3 + 4);
  local_40 = FUN_144abc9cb(*(undefined4 *)(param_3 + 0x10));
  local_28 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  cVar2 = param_3[0x18];
  switch(*param_3) {
  case 0:
    local_54 = (uint)(cVar2 != '\0') << 7;
    break;
  case 1:
    local_54 = (uint)(cVar2 != '\0') << 7 | 0x14;
    break;
  case 3:
  case 4:
    if (local_40 != 1) {
      local_54 = (uint)(cVar2 != '\0') << 7 | 0x55;
      break;
    }
  case 2:
    local_54 = (uint)(cVar2 != '\0') << 7 | 0x15;
  }
  uVar5 = *(uint *)(param_3 + 0x14);
  local_38 = *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar5 >> 0xe & 0x3fc));
  local_34 = (&DAT_14c758c60)[uVar5 >> 8 & 0xff];
  local_30 = (&DAT_14c758c60)[uVar5 & 0xff];
  local_2c = (float)(uVar5 >> 0x18) * 0.003921569;
  local_3c = (cVar2 == '\x01') + 1;
  local_70 = (longlong *)0x0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xb8))();
  if (iVar3 < 0) {
    local_88 = *(undefined8 *)(param_1 + 0x150);
    FUN_143142730(iVar3,
                  "Direct3DDevice->CreateSamplerState(&SamplerDesc, SamplerStateHandle.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11State.cpp",0xba);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca76030);
  if (DAT_14ca75fe8 != DAT_14ca76014) {
    uVar5 = ((uint)((ulonglong)local_70 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_70 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar6 = &DAT_14ca76018;
    if (DAT_14ca76020 != (undefined *)0x0) {
      puVar6 = DAT_14ca76020;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(DAT_14ca76028 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    while (iVar3 != -1) {
      plVar1 = (longlong *)(DAT_14ca75fe0 + (longlong)iVar3 * 0x18);
      if ((longlong *)*plVar1 == local_70) {
        if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
          puVar4 = (undefined8 *)plVar1[1];
          goto LAB_14735fbd7;
        }
        break;
      }
      iVar3 = (int)plVar1[2];
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined1 *)((longlong)puVar4 + 0xc) = 1;
  *(byte *)((longlong)puVar4 + 0xd) = *(byte *)((longlong)puVar4 + 0xd) | 3;
  *puVar4 = &PTR_FUN_14a3432c0;
  puVar4[2] = 0;
  local_78 = puVar4;
  if (local_70 != (longlong *)0x0) {
    puVar4[2] = local_70;
    (**(code **)(*local_70 + 8))();
  }
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
  local_68 = &local_80;
  local_80 = local_70;
  local_60 = &local_78;
  FUN_14736996a(local_58);
  puVar4 = local_78;
LAB_14735fbd7:
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca76030);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735fc5c FUN_14735fc5c body=332 status=ok
// SIG undefined FUN_14735fc5c(void)

undefined8 * FUN_14735fc5c(longlong param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  longlong local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 3;
  if (param_3[1] != '\x01') {
    local_54 = (param_3[1] == '\x02') + 1;
  }
  local_58 = *param_3 == '\x01' ^ 3;
  local_48 = (ulonglong)*(uint *)(param_3 + 8) << 0x20;
  local_50 = 1;
  local_4c = (int)ROUND(*(float *)(param_3 + 4) * 16777216.0 + *(float *)(param_3 + 4) * 16777216.0
                        + -0.5) >> 1;
  local_38 = (ulonglong)(byte)param_3[0xd];
  _uStack_40 = CONCAT44(1,(uint)(param_3[0xc] == '\0'));
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 2;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_FUN_14a3432d8;
  puVar2[2] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xb0))
                    (*(longlong **)(param_1 + 0x150),&local_58,puVar2 + 2);
  if (iVar1 < 0) {
    local_68 = *(undefined8 *)(param_1 + 0x150);
    FUN_143142730(iVar1,
                  "Direct3DDevice->CreateRasterizerState(&RasterizerDesc,RasterizerState->Resource.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11State.cpp",0xda);
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14735fdaa FUN_14735fdaa body=642 status=ok
// SIG undefined FUN_14735fdaa(void)

undefined8 * FUN_14735fdaa(longlong param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 3;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_FUN_14a3432e8;
  puVar2[2] = 0;
  uVar5 = (ulonglong)param_3[1];
  uVar3 = 8;
  local_74 = 8;
  local_78 = (uint)*param_3;
  local_7c = 1;
  if (uVar5 == 7) {
    local_7c = local_78;
  }
  if (uVar5 < 7) {
    local_74 = *(undefined4 *)(&DAT_14a344cec + uVar5 * 4);
  }
  local_70 = 1;
  if (param_3[2] == 0) {
    local_70 = (uint)param_3[7];
  }
  if ((ulonglong)param_3[3] < 7) {
    uVar3 = *(undefined4 *)(&DAT_14a344cec + (ulonglong)param_3[3] * 4);
  }
  bVar7 = param_3[4] - 1;
  iVar6 = bVar7 + 2;
  if (6 < bVar7) {
    iVar6 = 1;
  }
  _local_6c = CONCAT44(iVar6,(uint)*(ushort *)(param_3 + 0xc));
  bVar7 = param_3[5] - 1;
  iVar4 = bVar7 + 2;
  if (6 < bVar7) {
    iVar4 = 1;
  }
  bVar7 = param_3[6] - 1;
  iVar8 = bVar7 + 2;
  if (6 < bVar7) {
    iVar8 = 1;
  }
  _iStack_64 = CONCAT44(iVar8,iVar4);
  if ((param_3[7] & 1) == 0) {
    _iStack_54 = CONCAT44(iVar8,iVar4);
    bVar7 = param_3[9];
    bVar10 = param_3[10];
    bVar9 = param_3[0xb];
    local_4c = uVar3;
  }
  else {
    local_4c = 8;
    if ((ulonglong)param_3[8] < 7) {
      local_4c = *(undefined4 *)(&DAT_14a344cec + (ulonglong)param_3[8] * 4);
    }
    bVar7 = param_3[9];
    iVar6 = (byte)(bVar7 - 1) + 2;
    if (6 < (byte)(bVar7 - 1)) {
      iVar6 = 1;
    }
    bVar10 = param_3[10];
    iVar4 = (byte)(bVar10 - 1) + 2;
    if (6 < (byte)(bVar10 - 1)) {
      iVar4 = 1;
    }
    bVar9 = param_3[0xb];
    iVar8 = (byte)(bVar9 - 1) + 2;
    if (6 < (byte)(bVar9 - 1)) {
      iVar8 = 1;
    }
    _iStack_54 = CONCAT44(iVar8,iVar4);
  }
  _local_5c = CONCAT44(iVar6,uVar3);
  uVar1 = *param_3 & 1;
  iVar4 = uVar1 * 2;
  iVar6 = uVar1 * 2 + 0x20;
  if (((param_3[6] == 0 && bVar7 == 0) && (param_3[5] == 0 && param_3[4] == 0)) &&
      (bVar9 == 0 && bVar10 == 0)) {
    iVar6 = iVar4;
  }
  if (param_3[0xd] == 0) {
    iVar6 = iVar4;
  }
  *(int *)(puVar2 + 3) = iVar6;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xa8))
                    (*(longlong **)(param_1 + 0x150),&local_7c,puVar2 + 2);
  if (iVar6 < 0) {
    local_88 = *(undefined8 *)(param_1 + 0x150);
    FUN_143142730(iVar6,
                  "Direct3DDevice->CreateDepthStencilState(&DepthStencilDesc,DepthStencilState->Resource.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11State.cpp",0x109);
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14736002e FUN_14736002e body=578 status=ok
// SIG undefined FUN_14736002e(void)

undefined8 * FUN_14736002e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_158 [12];
  uint auStack_14c [5];
  undefined8 local_138;
  uint local_130;
  uint local_12c;
  uint local_128 [7];
  byte abStack_10c [228];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_128,0,0x100);
  local_130 = (uint)*(byte *)(param_3 + 0x39);
  local_12c = (uint)*(byte *)(param_3 + 0x38);
  pbVar5 = (byte *)(param_3 + 6);
  lVar3 = 0x24;
  do {
    bVar1 = pbVar5[-6];
    if ((longlong)(char)bVar1 == 0) {
      bVar8 = true;
      if ((((pbVar5[-4] == 0) && (pbVar5[-5] == 1)) && (pbVar5[-3] == 0)) && (pbVar5[-1] == 0)) {
        bVar8 = pbVar5[-2] != 1;
      }
      *(uint *)((longlong)auStack_14c + lVar3) = (uint)bVar8;
      uVar7 = 1;
    }
    else {
      *(undefined4 *)((longlong)auStack_14c + lVar3) = 1;
      uVar7 = 1;
      if (bVar1 < 5) {
        uVar7 = *(undefined4 *)(&DAT_14a344d04 + (longlong)(char)bVar1 * 4);
      }
    }
    *(undefined4 *)((longlong)auStack_14c + lVar3 + 0xc) = uVar7;
    uVar6 = 1;
    uVar7 = 1;
    if ((byte)(pbVar5[-5] - 1) < 0xf) {
      uVar7 = *(undefined4 *)(&DAT_14a344d18 + (ulonglong)(byte)(pbVar5[-5] - 1) * 4);
    }
    *(undefined4 *)((longlong)auStack_14c + lVar3 + 4) = uVar7;
    if ((byte)(pbVar5[-4] - 1) < 0xf) {
      uVar6 = *(undefined4 *)(&DAT_14a344d18 + (ulonglong)(byte)(pbVar5[-4] - 1) * 4);
    }
    *(undefined4 *)((longlong)auStack_14c + lVar3 + 8) = uVar6;
    uVar6 = 1;
    uVar7 = 1;
    if ((byte)(pbVar5[-3] - 1) < 4) {
      uVar7 = *(undefined4 *)(&DAT_14a344d08 + (ulonglong)(byte)(pbVar5[-3] - 1) * 4);
    }
    *(undefined4 *)((longlong)&local_138 + lVar3 + 4) = uVar7;
    if ((byte)(pbVar5[-2] - 1) < 0xf) {
      uVar6 = *(undefined4 *)(&DAT_14a344d18 + (ulonglong)(byte)(pbVar5[-2] - 1) * 4);
    }
    *(undefined4 *)((longlong)auStack_14c + lVar3 + 0x10) = uVar6;
    uVar7 = 1;
    if ((byte)(pbVar5[-1] - 1) < 0xf) {
      uVar7 = *(undefined4 *)(&DAT_14a344d18 + (ulonglong)(byte)(pbVar5[-1] - 1) * 4);
    }
    *(undefined4 *)((longlong)&local_138 + lVar3) = uVar7;
    *(byte *)((longlong)&local_130 + lVar3) = *pbVar5 & 0xf;
    lVar3 = lVar3 + 0x20;
    pbVar5 = pbVar5 + 7;
  } while (lVar3 != 0x124);
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined1 *)((longlong)puVar4 + 0xc) = 4;
  *(byte *)((longlong)puVar4 + 0xd) = *(byte *)((longlong)puVar4 + 0xd) | 3;
  *puVar4 = &PTR_FUN_14a3432f8;
  puVar4[2] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0xa0))
                    (*(longlong **)(param_1 + 0x150),&local_130,puVar4 + 2);
  if (iVar2 < 0) {
    local_138 = *(undefined8 *)(param_1 + 0x150);
    FUN_143142730(iVar2,
                  "Direct3DDevice->CreateBlendState(&BlendDesc,BlendState->Resource.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11State.cpp",299);
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147360272 FUN_147360272 body=46 status=ok
// SIG undefined FUN_147360272(void)

undefined8 *
FUN_147360272(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1431eab2a(param_3,param_4,*(byte *)(param_3 + 0x30) - 1);
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 14736030e FUN_14736030e body=333 status=ok
// SIG undefined FUN_14736030e(void)

undefined8 *
FUN_14736030e(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined4 param_5,byte param_6,undefined8 *param_7,longlong *param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1400f7c82();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14a341770;
  param_1[0xe] = param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  param_1[0xf] = param_4;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_7 + 1);
  uVar2 = *param_7;
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_147369fcc(param_1 + 0x10,iVar1,0);
    FUN_14736a02e(param_1[0x10],uVar2,iVar1);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_5;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfc | param_6;
  if ((int)param_8[1] != 0) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*param_8 + lVar5 * 8);
      plVar4 = (longlong *)param_1[lVar5 + 0x12];
      if (plVar4 != plVar3) {
        param_1[lVar5 + 0x12] = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
  }
  FUN_1431494e4(param_1,1);
  return param_1;
}



// FUNCTION 14736045c FUN_14736045c body=111 status=ok
// SIG undefined FUN_14736045c(void)

longlong * FUN_14736045c(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_4 + 0x32) == '\x02') {
    lVar1 = FUN_14314a6a8(param_1,param_4);
  }
  else {
    local_20 = 0;
    local_18 = 0;
    lVar1 = FUN_1431495a8(param_1,param_4);
  }
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473604cc FUN_1473604cc body=83 status=ok
// SIG undefined FUN_1473604cc(void)

void FUN_1473604cc(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 200) = param_2;
    if ((uint)(*(int *)(param_1 + 0xcc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147369e16();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 200) = param_2;
      FUN_147369f1c();
      return;
    }
  }
  return;
}



// FUNCTION 147360520 FUN_147360520 body=133 status=ok
// SIG undefined FUN_147360520(void)

undefined4 FUN_147360520(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
    cVar1 = FUN_14490ad04(lVar2 + 0x20,&DAT_149dfb77a,0);
    uVar3 = 0;
    if (cVar1 != '\0') {
      (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_28,lVar2 + 0x20,0);
      uVar3 = local_28[0];
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473605a6 FUN_1473605a6 body=280 status=ok
// SIG undefined FUN_1473605a6(void)

void FUN_1473605a6(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int *in_stack_00000038;
  
  if (param_3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  }
  if (param_2 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  }
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  uVar3 = *(uint *)(lVar7 + 0x30);
  lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((byte)*(uint *)(lVar7 + 0x30) < (byte)uVar3) {
    uVar3 = *(uint *)(lVar7 + 0x30);
  }
  lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
  bVar1 = *(byte *)(lVar7 + 0x30);
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  if ((char)uVar3 != '\0') {
    bVar2 = *(byte *)(lVar7 + 0x30);
    iVar8 = -(uVar3 & 0xff);
    do {
      plVar4 = *(longlong **)(param_1 + 0x140);
      (**(code **)(*plVar5 + 8))(plVar5);
      lVar7 = plVar5[0xe];
      (**(code **)(*plVar6 + 8))();
      (**(code **)(*plVar4 + 0x170))
                (plVar4,plVar6[0xe],(uint)bVar2 + iVar8,0,0,0,lVar7,(uint)bVar1 + iVar8,0);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0);
  }
  LOCK();
  *in_stack_00000038 = *in_stack_00000038 + -1;
  UNLOCK();
  return;
}



// FUNCTION 1473606be FUN_1473606be body=417 status=ok
// SIG undefined FUN_1473606be(void)

longlong *
FUN_1473606be(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  local_70 = FUN_1431edf91(*(undefined8 *)(lVar1 + 0x20),0);
  local_76 = *(undefined1 *)(lVar1 + 0x52);
  local_a8 = *(undefined8 *)(lVar1 + 0x20);
  local_75 = *(undefined2 *)(lVar1 + 0x53);
  uStack_7c = *(undefined2 *)(lVar1 + 0x4c);
  uStack_7a = *(undefined2 *)(lVar1 + 0x4e);
  local_90 = *(undefined4 *)(lVar1 + 0x38);
  local_a0 = *(undefined8 *)(lVar1 + 0x28);
  uStack_98 = *(undefined8 *)(lVar1 + 0x30);
  local_88 = *(undefined4 *)(lVar1 + 0x40);
  local_73 = *(undefined1 *)(lVar1 + 0x55);
  local_8c = *(undefined4 *)(lVar1 + 0x3c);
  local_68 = L"RHIAsyncReallocateTexture2D";
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_84 = param_5;
  uStack_80 = param_6;
  _local_78 = CONCAT11(*(undefined1 *)(lVar1 + 0x51),(char)param_4);
  local_b8 = 0;
  local_b0 = 0;
  lVar2 = FUN_1431495a8(param_1);
  local_c8 = param_7;
  local_d0 = param_6;
  local_d8 = param_5;
  (**(code **)(*param_1 + 0x590))(param_1,lVar2,lVar1,param_4);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147360860 FUN_147360860 body=611 status=ok
// SIG undefined FUN_147360860(void)

longlong *
FUN_147360860(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  if (DAT_14c842750 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x20) {
LAB_147360a86:
      local_c8 = param_8;
      local_d0 = param_7;
      local_d8 = param_6;
      FUN_1473606be(param_1,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
  }
  else {
    cVar1 = FUN_144a5d717();
    if (cVar1 != '\0') goto LAB_147360a86;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  lVar6 = 0;
  uVar2 = FUN_1431edf91(*puVar3,0);
  puVar3 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  local_76 = *(undefined1 *)((longlong)puVar3 + 0x32);
  local_a8 = *puVar3;
  local_75 = *(undefined1 *)((longlong)puVar3 + 0x33);
  local_74 = *(undefined1 *)((longlong)puVar3 + 0x34);
  local_7c = *(undefined2 *)((longlong)puVar3 + 0x2c);
  local_7a = *(undefined2 *)((longlong)puVar3 + 0x2e);
  local_77 = *(undefined1 *)((longlong)puVar3 + 0x31);
  local_90 = *(undefined4 *)(puVar3 + 3);
  local_a0 = puVar3[1];
  uStack_98 = puVar3[2];
  local_88 = *(undefined4 *)(puVar3 + 4);
  local_73 = *(undefined1 *)((longlong)puVar3 + 0x35);
  local_8c = *(undefined4 *)((longlong)puVar3 + 0x1c);
  local_68 = L"AsyncReallocateTexture2D_RenderThread";
  local_84 = CONCAT44(param_7,param_6);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = (undefined1)param_5;
  local_b8 = 0;
  local_b0 = 0;
  local_70 = uVar2;
  lVar4 = FUN_1431495a8(param_1);
  if (lVar4 != 0) {
    *param_2 = lVar4;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar6 = *param_2;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 8;
  if (DAT_14ca85108 < puVar3) {
    FUN_140023dd8(&DAT_14ca85100,0x48);
    puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 8;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar3;
  *DAT_14ca85130 = puVar5;
  DAT_14ca85130 = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a343bf8;
  puVar5[2] = param_1;
  puVar5[3] = lVar6;
  puVar5[4] = param_4;
  *(undefined4 *)(puVar5 + 5) = param_5;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = param_6;
  *(undefined4 *)(puVar5 + 6) = param_7;
  puVar5[7] = param_8;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147360ad6 FUN_147360ad6 body=133 status=ok
// SIG undefined FUN_147360ad6(void)

void FUN_147360ad6(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  lVar2 = lVar1 + 0x60;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  FUN_143142986(param_1,lVar2,0);
  FUN_14314b57c(lVar1,param_1,param_3,0,param_4,param_5,0,param_7);
  return;
}



// FUNCTION 147360b5c FUN_147360b5c body=323 status=ok
// SIG undefined FUN_147360b5c(void)

void FUN_147360b5c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c842750 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x20) goto LAB_147360c3c;
  }
  else {
    cVar1 = FUN_144a5d717();
    if (cVar1 != '\0') goto LAB_147360c3c;
  }
  if (param_5 != 0) {
    if (param_3 == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_3 + 0x30))(param_3);
    }
    local_50 = param_9;
    local_60 = param_6;
    local_68 = CONCAT44(local_68._4_4_,param_5);
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_14314b57c(uVar2,param_1,param_4,0);
    if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  param_5 = 0;
LAB_147360c3c:
  local_58 = param_9;
  local_60 = local_60 & 0xffffffffffffff00;
  local_68 = param_6;
  FUN_147360ad6(param_1,param_3,param_4,param_5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 147360ca6 FUN_147360ca6 body=53 status=ok
// SIG undefined FUN_147360ca6(void)

void FUN_147360ca6(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_14314bc12(uVar1,param_1,param_3,0);
  return;
}



// FUNCTION 147360cdc FUN_147360cdc body=263 status=ok
// SIG undefined FUN_147360cdc(void)

void FUN_147360cdc(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (DAT_14c842750 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x20) {
LAB_147360db8:
      if (param_3 == (longlong *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
      }
      FUN_14314bc12(uVar3,param_1,param_4,0);
      return;
    }
  }
  else {
    cVar1 = FUN_144a5d717();
    if (cVar1 != '\0') goto LAB_147360db8;
  }
  puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar2 + 5;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x30);
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar2 + 5;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar2;
  DAT_14ca85130 = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a343c08;
  puVar2[2] = param_1;
  puVar2[3] = param_3;
  *(undefined4 *)(puVar2 + 4) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x24) = param_5;
  return;
}



// FUNCTION 147360de4 FUN_147360de4 body=134 status=ok
// SIG undefined FUN_147360de4(void)

void FUN_147360de4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  lVar2 = lVar1 + 0x60;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  FUN_143142986(param_1,lVar2,0);
  FUN_14314b57c(lVar1,param_1,param_4,param_3,param_5,param_6,0,0);
  return;
}



// FUNCTION 147360e6a FUN_147360e6a body=58 status=ok
// SIG undefined FUN_147360e6a(void)

void FUN_147360e6a(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  FUN_14314bc12(uVar1,param_1,param_4,param_3);
  return;
}



// FUNCTION 147360ea4 FUN_147360ea4 body=594 status=ok
// SIG undefined FUN_147360ea4(void)

void FUN_147360ea4(undefined8 param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4,
                  undefined4 *param_5,uint param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  void *_Src;
  undefined1 auStack_d8 [40];
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  void *local_58;
  byte bStack_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = param_1;
  local_90 = param_3;
  lVar3 = (**(code **)(*param_3 + 8))(param_3);
  uVar9 = (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30);
  uVar8 = *(uint *)((longlong)&DAT_14c87341c + uVar9);
  uVar11 = *(uint *)((longlong)&DAT_14c873420 + uVar9);
  uVar1 = (ulonglong)((uVar8 - 1) + param_5[4]) / (ulonglong)uVar8;
  uVar10 = (uVar11 - 1) + param_5[5];
  uVar2 = (ulonglong)uVar10 / (ulonglong)uVar11;
  _Src = (void *)((ulonglong)(uVar11 * param_6 * ((param_5[3] + (uVar11 - 1)) / uVar11)) +
                 (ulonglong)
                 (((param_5[2] + (uVar8 - 1)) / uVar8) * *(int *)((longlong)&DAT_14c873428 + uVar9))
                 + param_7);
  bVar5 = *(byte *)((longlong)param_2 + 100);
  bVar7 = bVar5 ^ 1;
  local_58 = _Src;
  uStack_5c = param_6;
  if (bVar5 == 0) {
    local_b0 = (int)uVar1;
    uVar8 = 0;
    local_ac = param_4;
    local_a0 = param_2;
    _Dst = (void *)FUN_14001cc68(uVar2 * uVar1 *
                                 (longlong)*(int *)((longlong)&DAT_14c873428 + uVar9),0);
    lVar3 = uVar1 * (longlong)*(int *)((longlong)&DAT_14c873428 + uVar9);
    local_a8 = _Dst;
    if (uVar11 <= uVar10) {
      uVar11 = *(int *)((longlong)&DAT_14c873428 + uVar9) * local_b0;
      do {
        memcpy(_Dst,_Src,(ulonglong)uVar11);
        _Src = (void *)((longlong)_Src + (ulonglong)param_6);
        _Dst = (void *)((longlong)_Dst + lVar3);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)uVar2);
    }
    bVar5 = *(byte *)((longlong)local_a0 + 100);
    uStack_5c = (uint)lVar3;
    param_2 = local_a0;
    local_58 = local_a8;
    param_4 = local_ac;
  }
  local_88 = local_98;
  uStack_80 = local_90;
  uStack_74 = *param_5;
  uStack_70 = param_5[1];
  uStack_6c = param_5[2];
  uStack_68 = param_5[3];
  uStack_64 = (undefined4)*(undefined8 *)(param_5 + 4);
  uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20);
  local_78 = param_4;
  bStack_50 = bVar7;
  if ((bVar5 & 1) == 0) {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar4 + 10;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x58);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar4 + 10;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a343c10;
    *(undefined4 *)(puVar4 + 2) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_88._4_4_;
    *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_80._4_4_;
    puVar4[4] = CONCAT44(uStack_74,local_78);
    puVar4[5] = CONCAT44(uStack_6c,uStack_70);
    puVar4[6] = CONCAT44(uStack_64,uStack_68);
    puVar4[7] = CONCAT44(uStack_5c,uStack_60);
    puVar4[8] = local_58;
    puVar4[9] = CONCAT71(uStack_4f,bStack_50);
  }
  else {
    FUN_143153166(&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473610f8 FUN_1473610f8 body=321 status=ok
// SIG undefined FUN_1473610f8(void)

void FUN_1473610f8(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 param_6,uint param_7,void *param_8)

{
  uint uVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  void *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = param_5[8];
  _Dst = (void *)FUN_14001cc68((ulonglong)uVar1 * (ulonglong)param_7,0);
  memcpy(_Dst,param_8,(ulonglong)uVar1 * (ulonglong)param_7);
  local_90[0] = param_1;
  local_90[1] = param_3;
  local_80 = param_4;
  local_7c = *param_5;
  uStack_78 = param_5[1];
  uStack_74 = param_5[2];
  uStack_70 = param_5[3];
  local_6c = param_5[4];
  uStack_68 = param_5[5];
  uStack_64 = param_5[6];
  uStack_60 = param_5[7];
  local_5c = param_5[8];
  local_58 = param_6;
  local_54 = param_7;
  local_50 = _Dst;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431532da(local_90);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0xb;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x60);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar4 + 0xb;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a343c18;
    puVar2 = local_90;
    puVar4 = puVar4 + 2;
    for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14736123a FUN_14736123a body=81 status=ok
// SIG undefined FUN_14736123a(void)

void FUN_14736123a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1473610f8(param_1,param_2,*param_3,*(undefined4 *)(param_3 + 1),(longlong)param_3 + 0xc,
                *(undefined4 *)(param_3 + 6),*(undefined4 *)((longlong)param_3 + 0x34),param_3[7]);
  FUN_1400020a8(param_3[7]);
  param_3[7] = 0;
  return;
}



// FUNCTION 14736128c FUN_14736128c body=168 status=ok
// SIG undefined FUN_14736128c(void)

void FUN_14736128c(undefined8 param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  lVar2 = lVar1 + 0x60;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  FUN_143142986(param_1,lVar2,0);
  iVar3 = 0;
  if (param_3 - 1U < 5) {
    iVar3 = param_3;
  }
  FUN_14314b57c(lVar1,param_1,param_5,iVar3 + param_4 * 6,param_6,param_7,0,0);
  return;
}



// FUNCTION 147361334 FUN_147361334 body=331 status=ok
// SIG undefined FUN_147361334(void)

void FUN_147361334(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,int param_5,
                  undefined4 param_6,int param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c842750 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x20) goto LAB_14736144d;
  }
  else {
    cVar1 = FUN_144a5d717();
    if (cVar1 != '\0') goto LAB_14736144d;
  }
  if (param_7 != 0) {
    if (param_3 == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_3 + 0x30))(param_3);
    }
    iVar3 = 0;
    if (param_4 - 1U < 5) {
      iVar3 = param_4;
    }
    local_70 = param_8;
    local_78 = param_7;
    local_60 = 0;
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_14314b57c(uVar2,param_1,param_6,iVar3 + param_5 * 6);
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_58 = 0;
  param_7 = 0;
  local_50 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_58,5);
LAB_14736144d:
  local_68 = param_8;
  local_70 = CONCAT44(local_70._4_4_,param_7);
  local_78 = param_6;
  local_60 = local_60 & 0xffffffffffffff00;
  FUN_14736128c(param_1,param_3,param_4,param_5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 147361486 FUN_147361486 body=88 status=ok
// SIG undefined FUN_147361486(void)

void FUN_147361486(undefined8 param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  iVar2 = 0;
  if (param_3 - 1U < 5) {
    iVar2 = param_3;
  }
  FUN_14314bc12(uVar1,param_1,param_5,iVar2 + param_4 * 6);
  return;
}



// FUNCTION 1473614de FUN_1473614de body=279 status=ok
// SIG undefined FUN_1473614de(void)

void FUN_1473614de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_14c842750 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x20) {
LAB_1473615d9:
      FUN_147361486(param_1,param_3,param_4,param_5,param_6,0);
      return;
    }
  }
  else {
    cVar1 = FUN_144a5d717();
    if (cVar1 != '\0') goto LAB_1473615d9;
  }
  puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar3 = puVar2 + 6;
  if (DAT_14ca85108 < puVar3) {
    FUN_140023dd8(&DAT_14ca85100,0x38);
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar2 + 6;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar3;
  *DAT_14ca85130 = puVar2;
  DAT_14ca85130 = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a343c20;
  puVar2[2] = param_1;
  puVar2[3] = param_3;
  *(undefined4 *)(puVar2 + 4) = param_4;
  *(undefined4 *)((longlong)puVar2 + 0x24) = param_5;
  *(undefined4 *)(puVar2 + 5) = param_6;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = param_7;
  return;
}



// FUNCTION 1473615f6 FUN_1473615f6 body=109 status=ok
// SIG undefined FUN_1473615f6(void)

void FUN_1473615f6(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  FUN_1446f470e(local_28,param_4,1);
  FUN_1431ed9b8(uVar1,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147361664 FUN_147361664 body=2288 status=ok
// SIG undefined FUN_147361664(void)

undefined8
FUN_147361664(longlong param_1,byte param_2,byte param_3,byte param_4,ulonglong param_5,
             undefined4 *param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined2 uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  byte local_1a0;
  longlong *local_198;
  longlong **local_190;
  byte local_183;
  byte local_182;
  byte local_181;
  uint local_180;
  uint local_17c;
  undefined8 local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  longlong local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong *local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong *local_120;
  undefined8 local_118;
  uint local_110;
  uint local_10c;
  uint local_104;
  uint local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  ulonglong uStack_dc;
  ulonglong uStack_d4;
  uint local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined1 local_b8;
  undefined1 local_b7;
  char local_b6;
  byte local_b5;
  undefined2 local_b4;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_183 = param_3;
  (**(code **)(*param_7 + 0x50))(param_7,&local_118);
  uVar13 = *(uint *)((longlong)&DAT_14c873434 + (ulonglong)((uint)param_4 * 0x30));
  uVar16 = (uint)param_5;
  local_182 = param_2;
  if ((uVar16 >> 0x19 & 1) == 0) {
    if ((param_5 & 4) != 0) {
      if (uVar13 == 0x29) {
        uVar13 = 0x27;
      }
      else if (uVar13 == 0x36) {
        uVar13 = 0x35;
      }
    }
  }
  else {
    uVar13 = FUN_147365ff0(uVar13,(uVar16 & 0x10) >> 4);
  }
  uVar17 = (uVar16 & 0x10) >> 4;
  local_168 = FUN_144b19d65(uVar13,uVar17);
  local_16c = uVar13;
  uVar8 = FUN_144b19d65(uVar13,uVar17);
  uVar17 = local_104;
  local_120 = (longlong *)0x0;
  local_138 = 0;
  uStack_130 = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_181 = param_4;
  uVar13 = 0;
  if (param_4 == 0x43) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (param_4 != 0x56) {
      uVar13 = CONCAT31((int3)(local_f8 >> 8),(byte)local_f8 >> 3);
      uVar20 = 0;
      uVar10 = uVar20;
      if (((local_f8 & 0x20) != 0) && (local_110 != 0)) {
        local_170 = local_f8;
        bVar7 = local_182 | local_183;
        lVar19 = CONCAT71((int7)(param_5 >> 8),bVar7);
        local_178 = CONCAT71(local_178._1_7_,bVar7);
        local_164 = (uint)((byte)(param_5 >> 0x18) & 1 & bVar7);
        local_180 = 0;
        local_17c = uVar13;
        uVar12 = local_164;
        do {
          if ((char)uVar12 == '\0') {
            uStack_e0 = 0;
            uStack_dc = 0;
            if ((char)local_178 == '\0') {
              if (uVar17 < 2) {
                uStack_e4 = 4;
                uStack_e0 = uVar20;
              }
              else {
                uStack_e4 = 6;
              }
            }
            else if (uVar17 < 2) {
              uStack_e4 = 5;
              uStack_dc = (ulonglong)local_10c << 0x20;
              uStack_e0 = uVar20;
            }
            else {
              uStack_e4 = 7;
              uStack_dc = (ulonglong)local_10c;
            }
            local_140 = (longlong *)0x0;
            local_e8 = uVar8;
            iVar9 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                              (*(longlong **)(param_1 + 0x150),param_7,&local_e8,&local_140);
            if (iVar9 < 0) {
              local_1a8 = *(undefined8 *)(param_1 + 0x150);
              FUN_143142730(iVar9,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x5fb);
            }
            uVar15 = uStack_130;
            lVar19 = (longlong)(int)uStack_130;
            uVar13 = (int)uStack_130 + 1;
            uStack_130 = CONCAT44(uStack_130._4_4_,uVar13);
            if (uStack_130._4_4_ < uVar13) {
              FUN_147369d90(&local_138,uVar15 & 0xffffffff);
            }
            *(longlong **)(local_138 + lVar19 * 8) = local_140;
            lVar19 = local_138;
            if ((local_140 != (longlong *)0x0) &&
               (lVar19 = (**(code **)(*local_140 + 8))(), local_140 != (longlong *)0x0)) {
              lVar19 = (**(code **)(*local_140 + 0x10))();
            }
          }
          else {
            lVar19 = CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
            local_180 = (uint)lVar19;
            if (local_10c != 0) {
              uVar13 = 0;
              do {
                if (uVar17 < 2) {
                  uStack_e4 = 5;
                  uStack_e0 = uVar20;
                  uVar10 = uVar13;
                }
                else {
                  uStack_e4 = 7;
                  uStack_e0 = uVar13;
                  uVar10 = 1;
                }
                uStack_dc = (ulonglong)CONCAT14(uVar17 < 2,uVar10);
                local_140 = (longlong *)0x0;
                local_e8 = uVar8;
                iVar9 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                                  (*(longlong **)(param_1 + 0x150),param_7,&local_e8,&local_140);
                if (iVar9 < 0) {
                  local_1a8 = *(undefined8 *)(param_1 + 0x150);
                  FUN_143142730(iVar9,
                                "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                                ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x5d1);
                }
                uVar15 = uStack_130;
                lVar19 = (longlong)(int)uStack_130;
                uVar10 = (int)uStack_130 + 1;
                uStack_130 = CONCAT44(uStack_130._4_4_,uVar10);
                if (uStack_130._4_4_ < uVar10) {
                  FUN_147369d90(&local_138,uVar15 & 0xffffffff);
                }
                *(longlong **)(local_138 + lVar19 * 8) = local_140;
                lVar19 = local_138;
                if ((local_140 != (longlong *)0x0) &&
                   (lVar19 = (**(code **)(*local_140 + 8))(), local_140 != (longlong *)0x0)) {
                  lVar19 = (**(code **)(*local_140 + 0x10))();
                }
                uVar13 = uVar13 + 1;
                uVar12 = local_164;
              } while (uVar13 < local_10c);
            }
          }
          uVar20 = uVar20 + 1;
          local_f8 = local_170;
          uVar10 = local_180;
          uVar13 = local_17c;
        } while (uVar20 < local_110);
      }
    }
  }
  if ((local_f8 & 0x40) != 0) {
    uStack_dc = 0;
    uVar15 = uStack_d4 >> 0x20;
    uStack_d4 = uStack_d4 & 0xffffffff00000000;
    local_e8 = local_16c;
    if ((int)local_16c < 0x2c) {
      if (local_16c == 0x13) {
        local_e8 = 0x14;
      }
      else if (local_16c == 0x27) {
        local_e8 = 0x28;
      }
    }
    else if (local_16c == 0x2c) {
      local_e8 = 0x2d;
    }
    else if (local_16c == 0x35) {
      local_e8 = 0x37;
    }
    if ((local_182 | local_183) == 1) {
      if (uVar17 < 2) {
        uStack_e4 = 4;
        uStack_d4 = CONCAT44((int)uVar15,local_10c);
      }
      else {
        uStack_e4 = 6;
        uStack_dc = (ulonglong)local_10c << 0x20;
      }
    }
    else if (uVar17 < 2) {
      uStack_e4 = 3;
    }
    else {
      uStack_e4 = 5;
    }
    plVar18 = local_90;
    uVar15 = 0;
    local_17c = uVar13;
    do {
      plVar18 = plVar18 + 1;
      uStack_e0 = (uint)uVar15 & 1;
      if ((local_e8 == 0x2d) || (local_e8 == 0x14)) {
        uStack_e0 = uStack_e0 + (uint)(1 < uVar15) * 2;
      }
      plVar1 = *(longlong **)(param_1 + 0x150);
      plVar2 = (longlong *)*plVar18;
      if (plVar2 != (longlong *)0x0) {
        *plVar18 = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      iVar9 = (**(code **)(*plVar1 + 0x50))(plVar1,param_7,&local_e8,plVar18);
      if (iVar9 < 0) {
        local_1a8 = *(undefined8 *)(param_1 + 0x150);
        FUN_143142730(iVar9,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x631);
      }
      uVar15 = uVar15 + 1;
      uVar13 = local_17c;
    } while (uVar15 != 4);
  }
  uVar15 = uStack_d4;
  bVar4 = local_182;
  bVar7 = local_183;
  if ((uVar13 & 1) == 0) goto LAB_147361cc8;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d4 = uStack_d4 & 0xffffffff00000000;
  uVar6 = uStack_d4;
  local_e8 = local_168;
  uStack_d4._4_4_ = SUB84(uVar15,4);
  if ((local_182 & local_183) == 1) {
    uStack_e4 = 10;
    uStack_dc = (ulonglong)local_110;
    uStack_d4 = CONCAT44(uStack_d4._4_4_,local_10c / 6);
    goto LAB_147361c78;
  }
  uVar13 = local_110;
  uStack_d4 = uVar6;
  if (local_183 == 0) {
    if (local_182 == 0) {
      if (uVar17 < 2) {
        uStack_e4 = 4;
        goto LAB_147361eb9;
      }
      uStack_e4 = 6;
    }
    else {
      if (1 < uVar17) {
        uStack_e4 = 7;
        uVar13 = local_10c;
        goto LAB_147361eb9;
      }
      uStack_e4 = 5;
      uStack_dc = (ulonglong)local_110;
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_10c);
    }
  }
  else {
    uStack_e4 = 9;
LAB_147361eb9:
    uStack_dc = (ulonglong)uVar13;
  }
LAB_147361c78:
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x38))
                    (*(longlong **)(param_1 + 0x150),param_7,&local_e8,&local_120);
  if (iVar9 < 0) {
    local_1a8 = *(undefined8 *)(param_1 + 0x150);
    FUN_143142730(iVar9,
                  "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp",0x66b);
  }
LAB_147361cc8:
  cVar14 = (bVar7 != 0) * '\x03';
  if (bVar4 != 0) {
    cVar14 = (bVar7 != 0) * '\x03' + '\x01';
  }
  bVar7 = (byte)DAT_14c760da4 & 0x1f;
  local_178 = local_118;
  local_180 = *param_6;
  uVar11 = *(undefined8 *)(param_6 + 1);
  uVar3 = *(undefined8 *)(param_6 + 3);
  uVar5 = (undefined2)local_10c;
  local_b0 = FUN_1431edf91(param_5,0);
  uStack_e4 = (undefined4)(param_5 >> 0x20);
  local_b5 = local_181;
  local_b4 = 0xff00;
  local_c4 = local_178;
  local_bc = 1;
  local_ba = uVar5;
  local_b8 = (undefined1)local_110;
  local_b7 = (undefined1)local_104;
  uStack_e0 = local_180;
  local_c8 = 0;
  local_a8 = L"FD3D11DynamicRHI::CreateTextureFromResource";
  local_a0 = 0;
  uStack_98 = 0;
  local_90[0] = 0;
  local_e8 = uVar16;
  uStack_dc = uVar11;
  uStack_d4 = uVar3;
  local_cc = ~(-1 << bVar7);
  local_b6 = cVar14;
  uVar11 = FUN_14001cc68(0xb8,0x10);
  local_150 = local_90 + 1;
  local_190 = &local_150;
  local_148 = 4;
  local_198 = &local_160;
  local_160 = local_138;
  local_158 = (int)uStack_130;
  local_1a0 = (byte)uVar10 & 1;
  local_1a8 = CONCAT44(local_1a8._4_4_,local_10c);
  FUN_14736030e(uVar11,&local_e8,param_7,local_120);
  lVar19 = 0x20;
  do {
    if (*(longlong **)((longlong)local_90 + lVar19) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)local_90 + lVar19) + 0x10))();
    }
    lVar19 = lVar19 + -8;
  } while (lVar19 != 0);
  FUN_147369ce2(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 147361f56 FUN_147361f56 body=60 status=ok
// SIG undefined FUN_147361f56(void)

longlong *
FUN_147361f56(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_147361664(param_5,0,0,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147361f92 FUN_147361f92 body=60 status=ok
// SIG undefined FUN_147361f92(void)

longlong *
FUN_147361f92(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_147361664(param_5,1,0,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147361fce FUN_147361fce body=60 status=ok
// SIG undefined FUN_147361fce(void)

longlong *
FUN_147361fce(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_147361664(param_5,0,1,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14736200a FUN_14736200a body=299 status=ok
// SIG undefined FUN_14736200a(void)

undefined8 * FUN_14736200a(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined2 local_62;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_3 + 1) == 0) {
    local_50 = &DAT_149dfb77a;
  }
  else {
    local_50 = (undefined2 *)*param_3;
  }
  local_5e = *(undefined1 *)(param_2 + 0x52);
  local_90 = *(undefined8 *)(param_2 + 0x20);
  local_5d = *(undefined1 *)(param_2 + 0x53);
  local_5c = *(undefined1 *)(param_2 + 0x54);
  local_6c = *(undefined8 *)(param_2 + 0x44);
  local_64 = *(undefined2 *)(param_2 + 0x4c);
  local_62 = *(undefined2 *)(param_2 + 0x4e);
  local_60 = *(undefined1 *)(param_2 + 0x50);
  local_5f = *(undefined1 *)(param_2 + 0x51);
  local_88 = *(undefined4 *)(param_2 + 0x28);
  uStack_84 = *(undefined4 *)(param_2 + 0x2c);
  uStack_80 = *(undefined4 *)(param_2 + 0x30);
  uStack_7c = *(undefined4 *)(param_2 + 0x34);
  local_78 = *(undefined4 *)(param_2 + 0x38);
  local_70 = *(undefined4 *)(param_2 + 0x40);
  local_5b = *(undefined1 *)(param_2 + 0x55);
  local_74 = *(undefined4 *)(param_2 + 0x3c);
  local_58 = 0x70;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1400f7c82(param_1);
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a341770;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 2;
  FUN_147362136(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147362136 FUN_147362136 body=263 status=ok
// SIG undefined FUN_147362136(void)

void FUN_147362136(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  plVar1 = *(longlong **)(param_2 + 0x70);
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x70) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar1 = *(longlong **)(param_2 + 0x78);
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x78) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  FUN_1473622ce(param_1 + 0x80,param_2 + 0x80);
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfe | *(byte *)(param_2 + 0xb4) & 1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  lVar3 = 0;
  do {
    plVar1 = *(longlong **)(param_2 + 0x90 + lVar3 * 8);
    plVar2 = *(longlong **)(param_1 + 0x90 + lVar3 * 8);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0x90 + lVar3 * 8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  return;
}



// FUNCTION 14736223e FUN_14736223e body=143 status=ok
// SIG undefined FUN_14736223e(void)

void FUN_14736223e(undefined8 *param_1)

{
  longlong lVar1;
  
  if ((*(byte *)((longlong)param_1 + 0xb4) & 2) == 0) {
    FUN_1431494e4(param_1,0);
  }
  lVar1 = 0xa8;
  do {
    if (*(longlong **)((longlong)param_1 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + lVar1) + 0x10))();
    }
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x88);
  FUN_147369ce2(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473622ce FUN_1473622ce body=95 status=ok
// SIG undefined FUN_1473622ce(void)

undefined8 * FUN_1473622ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147369ce2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147369fcc(param_1,iVar1);
      FUN_14736a02e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14736232e FUN_14736232e body=65 status=ok
// SIG undefined FUN_14736232e(void)

void FUN_14736232e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((longlong *)*param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
  if ((longlong *)*param_3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_3 + 0x30))();
  }
  FUN_147362136(uVar1,uVar2);
  return;
}



// FUNCTION 147362370 FUN_147362370 body=257 status=ok
// SIG undefined FUN_147362370(void)

longlong * FUN_147362370(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong *)*param_3 == (longlong *)0x0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    lVar2 = *param_3;
  }
  local_50 = *(undefined8 *)(lVar2 + 0x10);
  FUN_1400021e4(&local_50,local_48);
  FUN_144a882a8(&local_38,local_48,L"Alias");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = FUN_14001cc68(0xb8,0x10);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(local_48,puVar3);
  FUN_14736200a(lVar2,uVar1,local_48);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147362472 FUN_147362472 body=1044 status=ok
// SIG undefined FUN_147362472(void)

void FUN_147362472(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  bool bVar21;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  int local_3d0;
  undefined8 local_3c8;
  int local_3c0;
  int *local_3b8;
  uint local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  longlong *local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong *local_378;
  ulonglong local_370;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  undefined1 local_350 [776];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  FUN_140048e76(local_350,param_1);
  if (param_2 == (longlong *)0x0) {
    local_388 = 0;
  }
  else {
    local_388 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  if (param_3 == (longlong *)0x0) {
    local_390 = 0;
  }
  else {
    local_390 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  local_398 = param_2;
  local_380 = param_1;
  lVar11 = (**(code **)(*param_2 + 8))(param_2);
  lVar12 = (**(code **)(*param_3 + 8))(param_3);
  uVar17 = 0;
  uVar20 = 0;
  bVar21 = true;
  if (((*(int *)(lVar11 + 0x24) == *(int *)(lVar12 + 0x24)) &&
      (*(int *)(lVar11 + 0x28) == *(int *)(lVar12 + 0x28))) &&
     (*(ushort *)(lVar11 + 0x2c) == *(ushort *)(lVar12 + 0x2c))) {
    if (((*param_4 == (int)DAT_14c9a5298) && (param_4[1] == DAT_14c9a5298._4_4_)) &&
       (param_4[2] == DAT_14c9a52a0)) {
      bVar21 = false;
    }
    else if (param_4[1] == *(int *)(lVar11 + 0x28) && *param_4 == *(int *)(lVar11 + 0x24)) {
      bVar21 = param_4[2] != (uint)*(ushort *)(lVar11 + 0x2c);
    }
  }
  local_378 = param_3;
  if ((*(byte *)(lVar11 + 0x30) == *(byte *)(lVar12 + 0x30)) &&
     (param_4[0xe] == (uint)*(byte *)(lVar11 + 0x30))) {
    uVar17 = ((ushort)((byte)(*(char *)(lVar11 + 0x32) - 3U) < 2) * 5 + 1) *
             *(short *)(lVar11 + 0x2e);
    uVar20 = ((ushort)((byte)(*(char *)(lVar12 + 0x32) - 3U) < 2) * 5 + 1) *
             *(short *)(lVar12 + 0x2e);
    if ((uVar17 == uVar20) && (!(bool)(bVar21 | param_4[0xb] != (uint)uVar17))) {
      (**(code **)(**(longlong **)(local_380 + 0x128) + 0x178))
                (*(longlong **)(local_380 + 0x128),*(undefined8 *)(local_390 + 0x70),
                 *(undefined8 *)(local_388 + 0x70));
      goto LAB_147362823;
    }
  }
  lVar12 = (**(code **)(*local_398 + 8))(local_398,uVar17,uVar20);
  plVar7 = local_378;
  plVar6 = local_398;
  bVar14 = *(byte *)(param_4 + 0xc);
  iVar2 = *(int *)(lVar11 + 0x24) >> (bVar14 & 0x1f);
  iVar3 = *(int *)(lVar11 + 0x28) >> (bVar14 & 0x1f);
  uVar19 = (uint)(*(ushort *)(lVar11 + 0x2c) >> (bVar14 & 0x1f));
  if (DAT_14c9a52a0 != param_4[2] ||
      (DAT_14c9a5298._4_4_ != param_4[1] || (int)DAT_14c9a5298 != *param_4)) {
    iVar2 = *param_4;
    iVar3 = param_4[1];
    uVar19 = param_4[2];
  }
  uVar15 = param_4[0xb];
  if (uVar15 != 0) {
    uVar13 = (ulonglong)((uint)*(byte *)(lVar12 + 0x33) * 0x30);
    uVar8 = param_4[0xe];
    uVar18 = 0;
    local_3ac = uVar19;
    local_3a8 = iVar3;
    local_3a4 = iVar2;
    do {
      bVar21 = uVar8 != 0;
      uVar8 = 0;
      if (bVar21) {
        local_39c = param_4[10] + uVar18;
        local_3a0 = param_4[9] + uVar18;
        uVar19 = 0;
        local_370 = (ulonglong)uVar18;
        do {
          iVar2 = param_4[0xc];
          iVar3 = param_4[0xd];
          lVar11 = (**(code **)(*plVar6 + 8))(plVar6);
          iVar9 = (uint)*(byte *)(lVar11 + 0x30) * local_3a0;
          lVar11 = (**(code **)(*plVar7 + 8))(plVar7);
          bVar14 = (byte)uVar19;
          local_368 = param_4[3] >> (bVar14 & 0x1f);
          local_364 = param_4[4] >> (bVar14 & 0x1f);
          local_360 = param_4[5] >> (bVar14 & 0x1f);
          iVar10 = param_4[3] + local_3a4 >> (bVar14 & 0x1f);
          lVar12 = (ulonglong)(iVar10 + (uint)(iVar10 == 0)) +
                   (longlong)*(int *)((longlong)&DAT_14c87341c + uVar13) + -1;
          auVar4._8_4_ = 0;
          auVar4._0_8_ = (longlong)*(int *)((longlong)&DAT_14c87341c + uVar13);
          auVar5._8_4_ = 0 >> (bVar14 & 0x1f);
          auVar5._0_8_ = lVar12;
          local_35c = (int)lVar12 - SUB124(auVar5 % auVar4,0);
          iVar10 = param_4[4] + local_3a8 >> (bVar14 & 0x1f);
          uVar16 = ((ulonglong)(iVar10 + (uint)(iVar10 == 0)) +
                   (longlong)*(int *)((longlong)&DAT_14c873420 + uVar13)) - 1;
          local_358 = (int)uVar16 -
                      (int)(uVar16 % (ulonglong)
                                     (longlong)*(int *)((longlong)&DAT_14c873420 + uVar13));
          iVar10 = (int)(param_4[5] + local_3ac) >> (bVar14 & 0x1f);
          uVar16 = ((ulonglong)(iVar10 + (uint)(iVar10 == 0)) +
                   (longlong)*(int *)(&DAT_14c873424 + uVar13)) - 1;
          local_354 = (int)uVar16 -
                      (int)(uVar16 % (ulonglong)(longlong)*(int *)(&DAT_14c873424 + uVar13));
          local_3d8 = param_4[7] >> (bVar14 & 0x1f);
          local_3d0 = param_4[8] >> (bVar14 & 0x1f);
          local_3c8 = *(undefined8 *)(local_388 + 0x70);
          local_3b8 = &local_368;
          local_3c0 = iVar2 + uVar19 + iVar9;
          (**(code **)(**(longlong **)(local_380 + 0x128) + 0x170))
                    (*(longlong **)(local_380 + 0x128),*(undefined8 *)(local_390 + 0x70),
                     iVar3 + uVar19 + (uint)*(byte *)(lVar11 + 0x30) * local_39c,
                     param_4[6] >> (bVar14 & 0x1f));
          uVar19 = uVar19 + 1;
          uVar8 = param_4[0xe];
        } while (uVar19 < uVar8);
        uVar15 = param_4[0xb];
        uVar18 = (uint)local_370;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar15);
  }
LAB_147362823:
  FUN_140048db6(local_350);
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147362888 FUN_147362888 body=232 status=ok
// SIG undefined FUN_147362888(void)

void FUN_147362888(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,int param_5
                  ,longlong param_6)

{
  int *piVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int *local_28;
  int local_20 [4];
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 != 0 && param_2 != 0) && (param_6 != 0 && param_2 != param_4)) {
    if ((*(char *)(param_1 + 0x17d28) == '\x01') && (*(longlong *)(param_1 + 0x17d40) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x17d40) + 0x10);
      *piVar1 = *piVar1 + 1;
    }
    local_28 = local_20;
    local_20[0] = param_5;
    local_20[3] = (int)param_6 + param_5;
    local_20[1] = 0;
    local_20[2] = 0;
    local_10 = &DAT_100000001;
    local_38 = *(undefined8 *)(param_4 + 0x38);
    local_30 = 0;
    local_40 = 0;
    local_48 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x170))
              (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_2 + 0x38),0,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147362972 FUN_147362972 body=257 status=ok
// SIG undefined FUN_147362972(void)

undefined8 *
FUN_147362972(undefined8 *param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1f;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e49d0;
  param_1[2] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  uVar1 = param_4[1];
  param_1[3] = *param_4;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a3417b0;
  param_1[5] = &PTR_FUN_14a3417c0;
  param_1[8] = 0;
  local_20 = param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_14315353c(&local_20);
  }
  else {
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
    *puVar2 = &PTR_FUN_14a343c28;
    puVar2[2] = param_1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147362a74 FUN_147362a74 body=687 status=ok
// SIG undefined FUN_147362a74(void)

void FUN_147362a74(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  char local_50;
  byte local_4f;
  char local_4e;
  byte local_4c;
  byte local_4b;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined1 *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    FUN_144b1c476(param_1 + -0x10,&local_60,plVar1);
    if (local_4e == '\0') {
      iVar3 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_4f * 0x30));
      if (iVar3 == 0x13) {
        iVar3 = 0x15;
      }
      else if (iVar3 == 0x5a) {
        iVar3 = 0x57;
      }
      else if (iVar3 == 0x1b) {
        iVar3 = 0x1c;
      }
      lVar7 = plVar1[7];
      local_48 = (undefined1 *)CONCAT44(1,iVar3);
      uStack_40 = CONCAT44(local_58,local_60 / local_5c);
      local_38 = (uint)local_4b * 2 + (uint)local_4c * 4;
      if (local_50 == '\x04') {
        local_48 = &DAT_100000027;
        local_38 = local_38 | 1;
      }
    }
    else {
      lVar7 = 0;
    }
    goto switchD_147362b98_default;
  }
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  lVar7 = *(longlong *)(lVar5 + 0x70);
  FUN_14178da4c(param_1 + -0x10,&local_60,lVar5);
  iVar3 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_5c._1_1_ * 0x30));
  if (iVar3 == 0x13) {
    iVar3 = 0x15;
  }
  else if (iVar3 == 0x5a) {
    iVar3 = 0x57;
  }
  else if (iVar3 == 0x1b) {
    iVar3 = 0x1c;
  }
  local_48 = (undefined1 *)CONCAT44(local_48._4_4_,iVar3);
  switch(local_5c._2_1_ & 7) {
  case 1:
    local_48 = (undefined1 *)CONCAT44(4,iVar3);
    goto LAB_147362bbe;
  case 2:
    uVar4 = local_60 & 0xffff;
    local_38 = (uint)local_60._2_2_;
    break;
  case 3:
  case 4:
    uVar4 = (local_60 & 0xffff) * 6;
    local_38 = (uint)local_60._2_2_ * 6;
    break;
  case 5:
    local_48 = (undefined1 *)CONCAT44(8,iVar3);
    local_38 = (uint)(*(ushort *)(lVar5 + 0x4c) >> ((byte)local_58 & 0x1f));
    local_38 = local_38 + (local_38 == 0);
    uStack_40 = (ulonglong)local_58 & 0xffffffff000000ff;
  default:
    goto switchD_147362b98_default;
  }
  uStack_40 = (ulonglong)uVar4 << 0x20;
  local_48 = (undefined1 *)CONCAT44(5,iVar3);
LAB_147362bbe:
  uStack_40 = CONCAT44(uStack_40._4_4_,local_58) & 0xffffffff000000ff;
switchD_147362b98_default:
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar6 = (longlong *)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar6 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (lVar7 != 0) {
    lVar5 = (**(code **)(*DAT_14ca83900 + 0x30))();
    plVar1 = *(longlong **)(lVar5 + 0x150);
    plVar2 = (longlong *)*plVar6;
    if (plVar2 != (longlong *)0x0) {
      *plVar6 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,lVar7,&local_48,plVar6);
    if (iVar3 < 0) {
      local_68 = plVar1;
      FUN_143142730(iVar3,
                    "Device->CreateUnorderedAccessView(D3DResource, &UAVDesc, View.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp",0x70);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147362d24 FUN_147362d24 body=87 status=ok
// SIG undefined FUN_147362d24(void)

longlong *
FUN_147362d24(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x48,0x10);
  FUN_147362972(lVar1,param_3,param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147362d7e FUN_147362d7e body=652 status=ok
// SIG undefined FUN_147362d7e(void)

void FUN_147362d7e(ulonglong *param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 local_60;
  int local_58;
  int local_50;
  int local_4c;
  int local_44;
  undefined4 local_40;
  byte local_3c;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x40))(*(longlong **)(param_2 + 0x40),&local_44);
  iVar5 = (uint)(param_4 ^ 1) * 2;
  uVar1 = local_44 - 3;
  if ((uVar1 < 0x3e) && ((0x2942958a284aca33U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    iVar5 = *(int *)(&DAT_14a344d54 + (ulonglong)uVar1 * 4);
  }
  switch(local_40) {
  case 1:
    if ((local_44 == 0) || ((local_34 & 1) != 0)) {
      puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 4;
      if ((undefined8 *)param_1[1] < puVar4) {
        FUN_140023dd8(param_1,0x28);
        puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar3 + 4;
      }
      *param_1 = (ulonglong)puVar4;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar3;
      param_1[6] = (ulonglong)(puVar3 + 1);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a343c30;
      puVar3[2] = param_2;
      puVar3[3] = param_3;
    }
    else if (local_38 < 0x400000) {
      local_68 = 1;
      local_60 = param_3;
      local_58 = iVar5;
      FUN_14482dfa6(param_1,param_2,local_38,1);
    }
    else {
      local_68 = 1;
      local_60 = param_3;
      local_58 = iVar5;
      FUN_14736300b(param_1,param_2,local_38,1);
    }
    break;
  case 4:
    if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
    }
    FUN_144b15a3c(uVar2,&local_50);
    local_68 = 1;
    local_60 = param_3;
    local_58 = iVar5;
    FUN_140e5d9be(param_1,param_2,local_50 >> (local_3c & 0x1f),local_4c >> (local_3c & 0x1f));
    break;
  case 5:
    if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
    }
    FUN_144b15a3c(uVar2,&local_50);
    local_68 = local_34;
    local_60 = param_3;
    local_58 = iVar5;
    FUN_1413e2dcd(param_1,param_2,local_50 >> (local_3c & 0x1f),local_4c >> (local_3c & 0x1f));
    break;
  case 8:
    if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
    }
    FUN_144b15a3c(uVar2,&local_50);
    local_68 = local_34;
    local_60 = param_3;
    local_58 = iVar5;
    FUN_14108ec43(param_1,param_2,local_50 >> (local_3c & 0x1f),local_4c >> (local_3c & 0x1f));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14736300b FUN_14736300b body=80 status=ok
// SIG undefined FUN_14736300b(void)

void FUN_14736300b(void)

{
  int in_stack_00000038;
  
  if (in_stack_00000038 == 2) {
    FUN_143154097();
  }
  else {
    if (in_stack_00000038 == 1) {
      FUN_1431545b2();
      return;
    }
    if (in_stack_00000038 == 0) {
      FUN_143153b7c();
    }
  }
  return;
}



// FUNCTION 14736305c FUN_14736305c body=118 status=ok
// SIG undefined FUN_14736305c(void)

void FUN_14736305c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_348 [32];
  undefined1 local_328 [776];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar1 = 0;
  if (param_1 != 0x18) {
    lVar1 = param_1;
  }
  FUN_140048e76(local_328,lVar1);
  FUN_147362d7e(local_328,param_2,param_3,1);
  FUN_140048db6(local_328);
  if ((local_20 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473630d4 FUN_1473630d4 body=121 status=ok
// SIG undefined FUN_1473630d4(void)

void FUN_1473630d4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_348 [32];
  undefined1 local_328 [776];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar1 = 0;
  if (param_1 != 0x18) {
    lVar1 = param_1;
  }
  FUN_140048e76(local_328,lVar1);
  FUN_147362d7e(local_328,param_2,param_3,0);
  FUN_140048db6(local_328);
  if ((local_20 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14736314e FUN_14736314e body=94 status=ok
// SIG undefined FUN_14736314e(void)

void FUN_14736314e(longlong *param_1,undefined8 *param_2)

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
    FUN_14736a1da(param_1,iVar2);
  }
  FUN_14736a196((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1473631ac FUN_1473631ac body=144 status=ok
// SIG undefined FUN_1473631ac(void)

undefined8 *
FUN_1473631ac(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x12;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e4960;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x84);
  *param_1 = &PTR_FUN_14a341a20;
  param_1[6] = param_4;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  param_1[9] = param_5[2];
  uVar1 = param_5[1];
  param_1[7] = *param_5;
  param_1[8] = uVar1;
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 0xb) = param_6;
  return param_1;
}



// FUNCTION 14736323c FUN_14736323c body=68 status=ok
// SIG undefined FUN_14736323c(void)

void FUN_14736323c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1446fc3c5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14736a260(param_1,param_2);
  return;
}



// FUNCTION 147363281 FUN_147363281 body=189 status=ok
// SIG undefined FUN_147363281(void)

void FUN_147363281(ulonglong param_1,longlong *param_2,longlong param_3,void *param_4,uint param_5)

{
  int iVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  void **local_50;
  void *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_5 != 0) {
    local_50 = local_40;
    local_58 = local_58 & 0xffffffff00000000;
    iVar1 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_3 + 0x30),0,4);
    if (iVar1 < 0) {
      local_58 = param_1;
      FUN_143142730(iVar1,
                    "Context->Map(UniformBuffer->Resource.GetReference(), 0, D3D11_MAP_WRITE_DISCARD, 0, &MappedSubresource)"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp",0x121);
    }
    memcpy(local_40[0],param_4,(ulonglong)param_5);
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_3 + 0x30),0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147363340 FUN_147363340 body=607 status=ok
// SIG undefined FUN_147363340(void)

void FUN_147363340(longlong param_1,ulonglong *param_2,longlong param_3,void *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong _Size;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong uStack_68;
  int local_60;
  undefined4 uStack_5c;
  void *pvStack_58;
  uint local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_3 + 0x20);
  uVar3 = *(uint *)(lVar5 + 0x84);
  _Size = (ulonglong)uVar3;
  iVar4 = *(int *)(lVar5 + 0x28);
  lVar13 = (longlong)iVar4;
  if (lVar13 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *param_2 + 7 & 0xfffffffffffffff8;
    uVar10 = lVar13 * 8 + uVar9;
    local_90 = param_1;
    if (param_2[1] < uVar10) {
      FUN_140023dd8(param_2,(int)(lVar13 * 8) + 8);
      uVar9 = *param_2 + 7 & 0xfffffffffffffff8;
      uVar10 = lVar13 * 8 + uVar9;
    }
    *param_2 = uVar10;
    lVar6 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar5 + 0x20) + 2 + lVar6 * 4);
      if (((byte)(bVar2 - 10) < 0xe) && ((0x3263U >> (bVar2 - 10 & 0x1f) & 1) != 0)) {
LAB_147363425:
        lVar12 = 0;
      }
      else {
        plVar11 = (longlong *)
                  ((ulonglong)*(ushort *)(*(longlong *)(lVar5 + 0x20) + lVar6 * 4) +
                  (longlong)param_4);
        if ((bVar2 < 0x13) && ((0x67200U >> (bVar2 & 0x1f) & 1) != 0)) {
          if (*plVar11 == 0) goto LAB_147363425;
          plVar11 = (longlong *)(*plVar11 + 0x10);
        }
        lVar12 = *plVar11;
      }
      *(longlong *)(uVar9 + lVar6 * 8) = lVar12;
      lVar6 = lVar6 + 1;
      param_1 = local_90;
    } while (lVar13 != lVar6);
  }
  if (uVar3 == 0) {
    pvStack_58 = (void *)0x0;
  }
  else {
    pvStack_58 = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
    uVar10 = (longlong)pvStack_58 + _Size;
    if (param_2[1] < uVar10) {
      FUN_140023dd8(param_2,uVar3 + 0x10);
      pvStack_58 = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
      uVar10 = (longlong)pvStack_58 + _Size;
    }
    *param_2 = uVar10;
    memcpy(pvStack_58,param_4,_Size);
  }
  local_80 = *(undefined8 *)(param_1 + 0x140);
  uStack_78 = *(undefined8 *)(param_1 + 0x150);
  local_70 = param_3;
  uStack_68 = uVar9;
  local_60 = iVar4;
  local_50 = uVar3;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_143155a36(&local_80);
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 9;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x50);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 9;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a343c40;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_80._4_4_;
    *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_78._4_4_;
    puVar7[4] = local_70;
    puVar7[5] = uStack_68;
    puVar7[6] = CONCAT44(uStack_5c,local_60);
    puVar7[7] = pvStack_58;
    puVar7[8] = CONCAT44(uStack_4c,local_50);
  }
  FUN_14494c7ac(param_2,&local_88,1);
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473635a0 FUN_1473635a0 body=739 status=ok
// SIG undefined FUN_1473635a0(void)

longlong * FUN_1473635a0(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 < -0x7785fffb) {
    if (param_2 < -0x7ff8fff2) {
      if (param_2 == -0x7fffbffe) {
        pwVar2 = L"E_NOINTERFACE";
        goto LAB_147363721;
      }
      if (param_2 == -0x7fffbffb) {
        pwVar2 = L"E_FAIL";
        goto LAB_147363721;
      }
    }
    else {
      if (param_2 == -0x7ff8fff2) {
        pwVar2 = L"E_OUTOFMEMORY";
        goto LAB_147363721;
      }
      if (param_2 == -0x7ff8ffa9) {
        pwVar2 = L"E_INVALIDARG";
        goto LAB_147363721;
      }
      if (param_2 == -0x7785ffff) {
        pwVar2 = L"DXGI_ERROR_INVALID_CALL";
        goto LAB_147363721;
      }
    }
LAB_147363743:
    FUN_140002266(&local_38,L"%08X",param_2);
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(int *)(param_1 + 1) = iStack_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
    }
  }
  else {
    if (-0x77840000 < param_2) {
      if (param_2 == -0x7783ffff) {
        pwVar2 = L"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS";
LAB_147363721:
        FUN_14020fad6(param_1,pwVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
      if (param_2 == -0x7783fffe) {
        pwVar2 = L"D3D11_ERROR_FILE_NOT_FOUND";
        goto LAB_147363721;
      }
      if (param_2 == 0) {
        pwVar2 = L"S_OK";
        goto LAB_147363721;
      }
      goto LAB_147363743;
    }
    if (param_2 != -0x7785fffb) {
      if (param_2 == -0x7785fff6) {
        pwVar2 = L"DXGI_ERROR_WAS_STILL_DRAWING";
        goto LAB_147363721;
      }
      if (param_2 == -0x7785ffde) {
        pwVar2 = L"DXGI_ERROR_NOT_CURRENTLY_AVAILABLE";
        goto LAB_147363721;
      }
      goto LAB_147363743;
    }
    FUN_14020fad6(param_1,L"DXGI_ERROR_DEVICE_REMOVED");
  }
  if (param_3 == (longlong *)0x0 || param_2 != -0x7785fffb) goto LAB_147363869;
  iVar1 = (**(code **)(*param_3 + 0x138))(param_3);
  local_48 = 0;
  uStack_40 = 0;
  switch(iVar1) {
  case -0x7785ffff:
    pwVar2 = L"DXGI_ERROR_INVALID_CALL";
    break;
  case -0x7785fffe:
  case -0x7785fffd:
  case -0x7785fffc:
switchD_14736370c_caseD_887a0002:
    FUN_140002266(&local_38,L"%08X",iVar1);
    local_48 = local_38;
    uStack_40 = CONCAT44(uStack_2c,iStack_30);
    goto LAB_1473637fc;
  case -0x7785fffb:
    pwVar2 = L"DXGI_ERROR_DEVICE_REMOVED";
    break;
  case -0x7785fffa:
    pwVar2 = L"DXGI_ERROR_DEVICE_HUNG";
    break;
  case -0x7785fff9:
    pwVar2 = L"DXGI_ERROR_DEVICE_RESET";
    break;
  default:
    if (iVar1 != -0x7785ffe0) goto switchD_14736370c_caseD_887a0002;
    pwVar2 = L"DXGI_ERROR_DRIVER_INTERNAL_ERROR";
  }
  FUN_14020fad6(&local_48,pwVar2);
LAB_1473637fc:
  FUN_140056680(local_58,&DAT_149e001d8);
  FUN_1401c7f3e(&local_38,local_58,&local_48);
  iVar1 = iStack_30 + -1;
  if (iStack_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_147363869:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147363884 FUN_147363884 body=96 status=ok
// SIG undefined FUN_147363884(void)

undefined8 FUN_147363884(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x220);
  if (iVar1 == *(int *)((longlong)param_2 + 0x220)) {
    if (iVar1 != 0) {
      iVar1 = memcmp(param_1,param_2,(longlong)iVar1 << 5);
      if (iVar1 != 0) goto LAB_1473638b8;
    }
    iVar1 = memcmp((void *)((longlong)param_1 + 0x22c),(void *)((longlong)param_2 + 0x22c),0x22);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  else {
LAB_1473638b8:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1473638e4 FUN_1473638e4 body=307 status=ok
// SIG undefined FUN_1473638e4(void)

longlong * FUN_1473638e4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined1 *local_290;
  longlong *local_288;
  int local_27c;
  undefined1 local_278 [552];
  undefined4 local_50;
  undefined1 local_4c [36];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_147363a18(local_278,param_3);
  iVar3 = FUN_14736a2f0(local_50,local_278);
  lVar4 = 0;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x260 + DAT_14ca764e0;
  }
  if (lVar4 == 0) {
    lVar4 = FUN_14001cc68(0x260,0x10);
    FUN_147363cbc(lVar4,local_278,local_4c);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    local_288 = &local_298;
    local_298 = lVar4;
    local_290 = local_278;
    FUN_14736a370(&local_27c);
    lVar4 = DAT_14ca764e0;
    if (local_298 != 0) {
      LOCK();
      puVar1 = (uint *)(local_298 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + (longlong)local_27c * 0x260;
  }
  lVar4 = *(longlong *)(lVar4 + 0x250);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147363a18 FUN_147363a18 body=675 status=ok
// SIG undefined FUN_147363a18(void)

longlong FUN_147363a18(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  *(undefined8 *)(param_1 + 0x220) = 0x1100000000;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x244) = 0;
  *(undefined2 *)(param_1 + 0x24c) = 0;
  uVar6 = 0;
  if (0 < *(int *)(param_2 + 0x88)) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      bVar5 = *(byte *)(param_2 + lVar10 * 8);
      bVar1 = *(byte *)(param_2 + 1 + lVar10 * 8);
      uVar7 = (uint)bVar5;
      uVar11 = uVar7;
      switch(*(undefined1 *)(param_2 + 2 + lVar10 * 8)) {
      case 1:
        uVar6 = 0x29;
        break;
      case 2:
        uVar6 = 0x10;
        break;
      case 3:
        uVar6 = 6;
        break;
      case 4:
        uVar6 = 2;
        break;
      case 5:
        uVar6 = 0x1f;
        break;
      case 6:
        uVar6 = 0x1e;
        break;
      case 7:
        uVar6 = 0x1c;
        break;
      case 8:
        uVar6 = 0x57;
        break;
      case 9:
        uVar6 = 0x26;
        break;
      case 10:
        uVar6 = 0xe;
        break;
      case 0xb:
        uVar6 = 0x25;
        break;
      case 0xc:
        uVar6 = 0x22;
        break;
      case 0xd:
        uVar6 = 10;
        break;
      case 0xe:
        uVar6 = 0xd;
        break;
      case 0xf:
        uVar6 = 0x24;
        break;
      case 0x10:
        uVar6 = 0xc;
        break;
      case 0x11:
        uVar6 = 0x23;
        break;
      case 0x12:
        uVar6 = 0xb;
        break;
      case 0x13:
        uVar6 = 0x18;
        break;
      case 0x14:
        uVar6 = 0x2a;
        break;
      default:
        FUN_140033559(".\\Runtime/Windows/D3D11RHI/Private/D3D11VertexDeclaration.cpp",0x37,
                      L"Unknown RHI vertex element type %u");
        bVar5 = *(byte *)(param_2 + lVar10 * 8);
        uVar6 = 0;
        uVar11 = (uint)bVar5;
      }
      bVar2 = *(byte *)(param_2 + 3 + lVar10 * 8);
      sVar3 = *(short *)(param_2 + 6 + lVar10 * 8);
      if (((uVar8 & 0xffff) >> (uVar11 & 0x1f) & 1) == 0) {
        uVar8 = uVar8 | 1 << ((byte)uVar11 & 0x1f);
        *(undefined2 *)(param_1 + 0x22c + (ulonglong)bVar5 * 2) =
             *(undefined2 *)(param_2 + 4 + lVar10 * 8);
      }
      iVar4 = *(int *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x224) < iVar4 + 1U) {
        FUN_147366408(param_1,iVar4);
      }
      lVar9 = (longlong)iVar4 * 0x20;
      *(char **)(param_1 + lVar9) = "ATTRIBUTE";
      *(uint *)(param_1 + 8 + lVar9) = (uint)bVar2;
      *(undefined4 *)(param_1 + 0xc + lVar9) = uVar6;
      *(uint *)(param_1 + 0x10 + lVar9) = uVar7;
      *(uint *)(param_1 + 0x14 + lVar9) = (uint)bVar1;
      uVar11 = (uint)(sVar3 != 0);
      *(uint *)(param_1 + 0x18 + lVar9) = uVar11;
      *(uint *)(param_1 + 0x1c + lVar9) = uVar11;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x88));
    uVar6 = *(undefined4 *)(param_1 + 0x220);
  }
  FUN_14736642e(param_1,uVar6);
  uVar6 = FUN_1448eb174(param_1,*(int *)(param_1 + 0x220) << 5,0);
  *(undefined4 *)(param_1 + 0x228) = uVar6;
  uVar6 = FUN_1448eb174(param_1 + 0x22c,0x22,uVar6);
  *(undefined4 *)(param_1 + 0x228) = uVar6;
  return param_1;
}



// FUNCTION 147363cbc FUN_147363cbc body=153 status=ok
// SIG undefined FUN_147363cbc(void)

undefined8 * FUN_147363cbc(undefined8 *param_1,void *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 5;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a3436e0;
  iVar1 = *(int *)((longlong)param_2 + 0x220);
  *(int *)(param_1 + 0x46) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x234) = 0x11;
  }
  else {
    FUN_147366a94(param_1 + 2);
    memcpy(param_1 + 2,param_2,(longlong)iVar1 << 5);
  }
  *(undefined2 *)(param_1 + 0x4b) = *(undefined2 *)(param_3 + 4);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[3];
  param_1[0x49] = param_3[2];
  param_1[0x4a] = uVar4;
  param_1[0x47] = uVar2;
  param_1[0x48] = uVar3;
  return param_1;
}



// FUNCTION 147363d56 FUN_147363d56 body=1300 status=ok
// SIG undefined FUN_147363d56(void)

undefined8
FUN_147363d56(longlong param_1,byte param_2,undefined4 param_3,undefined4 param_4,longlong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_140;
  undefined8 **local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined8 local_74;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  byte local_55;
  undefined2 local_54;
  undefined4 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_90 = (longlong *)0x0;
  if (param_5 == (longlong *)0x0) {
    iVar2 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)param_2 * 0x30));
    if (iVar2 < 0x49) {
      if (iVar2 == 0x1b) {
        local_78 = 0x1c;
      }
      else if (iVar2 == 0x35) {
        local_78 = 0x38;
      }
      else if (iVar2 == 0x46) {
        local_78 = 0x47;
      }
      else {
LAB_147363e1c:
        local_78 = iVar2;
      }
    }
    else if (iVar2 == 0x49) {
      local_78 = 0x4a;
    }
    else if (iVar2 == 0x4c) {
      local_78 = 0x4d;
    }
    else {
      local_78 = 0x57;
      if (iVar2 != 0x5a) goto LAB_147363e1c;
    }
    local_64 = 0;
    local_88 = CONCAT44(param_4,param_3);
    uStack_80 = 1;
    uStack_7c = 1;
    local_74 = 1;
    uStack_6c = 0;
    uStack_68 = 0x28;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),&local_88,0,&local_90);
    if (iVar2 < 0) {
      local_148 = *(undefined8 *)(param_1 + 0x150);
      pcVar4 = 
      "D3DRHI->GetDevice()->CreateTexture2D(&TextureDesc, NULL, BackBufferResource.GetInitReference())"
      ;
      uVar6 = 0x8a;
LAB_147363eab:
      FUN_143142730(iVar2,pcVar4,".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",uVar6);
    }
  }
  else {
    iVar2 = (**(code **)(*param_5 + 0x48))(param_5,0,&DAT_14997eb78,&local_90);
    if (iVar2 < 0) {
      local_148 = *(undefined8 *)(param_1 + 0x150);
      pcVar4 = 
      "SwapChain->GetBuffer(0, IID_ID3D11Texture2D, (void**)BackBufferResource.GetInitReference())";
      uVar6 = 0x79;
      goto LAB_147363eab;
    }
  }
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  if (DAT_14ca76668 == '\x01') {
    local_88 = 0x500000018;
    uStack_80 = 0;
    uStack_7c = 0;
    local_78 = 1;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                      (*(longlong **)(param_1 + 0x150),local_90,&local_88,&local_98);
    if (iVar2 < 0) {
      local_148 = *(undefined8 *)(param_1 + 0x150);
      FUN_143142730(iVar2,
                    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDescCD3D11_left, BackBufferRenderTargetView.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",0x96);
    }
    local_d0 = 0x18;
    uStack_cc = 5;
    uStack_c8 = 0;
    uStack_c4 = 1;
    local_c0 = 1;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                      (*(longlong **)(param_1 + 0x150),local_90,&local_d0,&local_a0);
    if (-1 < iVar2) goto LAB_147363ffc;
    local_148 = *(undefined8 *)(param_1 + 0x150);
    pcVar4 = 
    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &renderTargetViewRightDesc_right, BackBufferRenderTargetViewRight.GetInitReference())"
    ;
    uVar6 = 0x9a;
  }
  else {
    local_88 = 0x400000000;
    uStack_80 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))
                      (*(longlong **)(param_1 + 0x150),local_90,&local_88,&local_98);
    if (-1 < iVar2) goto LAB_147363ffc;
    local_148 = *(undefined8 *)(param_1 + 0x150);
    pcVar4 = 
    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDesc, BackBufferRenderTargetView.GetInitReference())"
    ;
    uVar6 = 0xa2;
  }
  FUN_143142730(iVar2,pcVar4,".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",uVar6);
LAB_147363ffc:
  (**(code **)(*local_90 + 0x50))(local_90,&local_d0);
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 1;
  FUN_147369d90(&local_e8,0);
  *local_e8 = local_98;
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  uVar1 = uStack_e0;
  if (DAT_14ca76668 == '\x01') {
    lVar5 = (longlong)(int)uStack_e0;
    uVar3 = (int)uStack_e0 + 1;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
    if (uStack_e0._4_4_ < uVar3) {
      FUN_147369d90(&local_e8,uVar1 & 0xffffffff);
    }
    local_e8[lVar5] = local_a0;
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 8))();
    }
  }
  local_f0 = (longlong *)0x0;
  local_108 = 0;
  uStack_104 = 4;
  uStack_100 = 0;
  uStack_fc = 1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x38))
                    (*(longlong **)(param_1 + 0x150),local_90);
  if (iVar2 < 0) {
    local_148 = *(undefined8 *)(param_1 + 0x150);
    FUN_143142730(iVar2,
                  "D3DRHI->GetDevice()->CreateShaderResourceView(BackBufferResource,&SRVDesc,BackBufferShaderResourceView.GetInitReference())"
                  ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",0xb8);
  }
  local_64 = CONCAT44(uStack_cc,local_d0);
  uStack_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_56 = 0;
  local_88 = 1;
  local_54 = 0xff00;
  local_5c = 0x10001;
  local_58 = 0x101;
  uStack_80 = 1;
  uStack_7c = 0;
  local_78 = 0;
  local_74 = 0;
  uStack_68 = 0;
  local_50 = 0x1000;
  local_48 = L"FD3D11Viewport::GetSwapChainSurface";
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_55 = param_2;
  uVar6 = FUN_14001cc68(0xb8,0x10);
  local_130 = &local_118;
  local_118 = 0;
  local_110 = 0;
  local_138 = &local_128;
  local_128 = local_e8;
  local_120 = (int)uStack_e0;
  local_140 = 0;
  local_148 = CONCAT44(local_148._4_4_,1);
  FUN_14736030e(uVar6,&local_88,local_90,local_f0);
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x10))();
  }
  FUN_147369ce2(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14736426c FUN_14736426c body=287 status=ok
// SIG undefined FUN_14736426c(void)

void FUN_14736426c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a343c70;
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0,0);
    if (iVar4 < 0) {
      local_28 = *(undefined8 *)(param_1[2] + 0x150);
      FUN_143142730(iVar4,"SwapChain->SetFullscreenState(false, NULL)",
                    ".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",0xd4);
    }
  }
  local_18 = &local_20;
  local_20 = param_1;
  FUN_14736a990(param_1[2] + 0x2660);
  if (param_1[0x13] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x13] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if (param_1[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xe] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14736438c FUN_14736438c body=133 status=ok
// SIG undefined FUN_14736438c(void)

void FUN_14736438c(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  param_2[1] = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0x58) * 0x30));
  if (iVar1 < 0x49) {
    if (iVar1 == 0x1b) {
      iVar2 = 0x1c;
      goto LAB_147364405;
    }
    if (iVar1 == 0x35) {
      iVar2 = 0x38;
      goto LAB_147364405;
    }
    if (iVar1 == 0x46) {
      iVar2 = 0x47;
      goto LAB_147364405;
    }
  }
  else {
    if (iVar1 == 0x49) {
      iVar2 = 0x4a;
      goto LAB_147364405;
    }
    if (iVar1 == 0x4c) {
      iVar2 = 0x4d;
      goto LAB_147364405;
    }
    iVar2 = 0x57;
    if (iVar1 == 0x5a) goto LAB_147364405;
  }
  iVar2 = iVar1;
LAB_147364405:
  param_2[4] = iVar2;
  *(undefined8 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 147364412 FUN_147364412 body=430 status=ok
// SIG undefined FUN_147364412(void)

undefined8 FUN_147364412(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x68), plVar1 != (longlong *)0x0)) {
    local_30 = (longlong *)0x0;
    iVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,&local_24);
    if (iVar3 < 0) {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
      FUN_143142730(iVar3,
                    "SwapChain->GetFullscreenState(&bSwapChainFullscreenState,SwapChainOutput.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",0x284);
    }
    if ((bool)*(char *)(param_1 + 100) != (local_24 != 0)) {
      LOCK();
      *(undefined4 *)(param_1 + 0x54) = 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (*(int *)(param_1 + 0x40) != DAT_14c760b14) {
    *(int *)(param_1 + 0x40) = DAT_14c760b14;
    local_30 = (longlong *)0x0;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x150);
    iVar3 = (**(code **)*puVar2)(puVar2,&DAT_14a349218);
    if (iVar3 < 0) {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150);
      FUN_143142730(iVar3,
                    "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp",0x28f);
    }
    (**(code **)(*local_30 + 0x60))(local_30,*(undefined4 *)(param_1 + 0x40));
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  uVar5 = 0;
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x54) & 1) == 0) {
    if (param_3 != '\0') {
      if ((*(char *)(param_1 + 100) == '\0') && (DAT_14ca76530 != 0)) {
        local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
        DwmIsCompositionEnabled((BOOL *)&local_30);
        if ((int)local_30 != 0) {
          FUN_14314dba6(param_1,param_2);
          uVar5 = 1;
          goto LAB_1473645a2;
        }
      }
      uVar4 = FUN_147413c95();
    }
    uVar5 = FUN_14314d986(param_1,param_2,uVar4);
  }
LAB_1473645a2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473645ee FUN_1473645ee body=304 status=ok
// SIG undefined FUN_1473645ee(void)

longlong *
FUN_1473645ee(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,char param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_7 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca765b8) {
      FUN_144b3d300(&DAT_14ca765b8);
      if (DAT_14ca765b8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar3 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
        if (plVar3 == (longlong *)0x0) {
          DAT_14ca765b0 = (undefined4 *)0x0;
        }
        else {
          DAT_14ca765b0 = (undefined4 *)(**(code **)(*plVar3 + 0x68))(plVar3);
        }
        _Init_thread_footer(&DAT_14ca765b8);
      }
    }
    uVar1 = FUN_146074939(*DAT_14ca765b0);
    param_7 = FUN_146074956(uVar1);
  }
  lVar2 = FUN_14001cc68(0xa0,0x10);
  FUN_14315634a(lVar2,param_1,param_3,param_4,param_5,param_6,param_7);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14736471e FUN_14736471e body=39 status=ok
// SIG undefined FUN_14736471e(void)

void FUN_14736471e(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  (**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,param_5,0);
  return;
}



// FUNCTION 147364746 FUN_147364746 body=222 status=ok
// SIG undefined FUN_147364746(void)

void FUN_147364746(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,char param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  
  if (param_6 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca765c8) {
      FUN_144b3d300(&DAT_14ca765c8);
      if (DAT_14ca765c8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar2 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
        if (plVar2 == (longlong *)0x0) {
          DAT_14ca765c0 = (undefined4 *)0x0;
        }
        else {
          DAT_14ca765c0 = (undefined4 *)(**(code **)(*plVar2 + 0x68))(plVar2);
        }
        _Init_thread_footer(&DAT_14ca765c8);
      }
    }
    uVar1 = FUN_146074939(*DAT_14ca765c0);
    param_6 = FUN_146074956(uVar1);
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,param_3,param_4,
             CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,param_6);
  return;
}



// FUNCTION 147364824 FUN_147364824 body=60 status=ok
// SIG undefined FUN_147364824(void)

void FUN_147364824(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x2668)) {
    lVar1 = 0;
    do {
      FUN_14736ae34(*(undefined8 *)(*(longlong *)(param_1 + 0x2660) + lVar1 * 8),0);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x2668));
  }
  return;
}



// FUNCTION 147364876 FUN_147364876 body=336 status=ok
// SIG undefined FUN_147364876(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147364876(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_58 [6];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0x10000;
  local_58[1] = 0;
  local_58[2] = 4;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
      FUN_14736aa5a(param_1 + 0x38,iVar4);
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar6 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar1 + lVar6) = 0;
    *(ulonglong *)(lVar1 + 8 + lVar6) = (ulonglong)local_58[0];
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x150);
    iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,local_58,0,lVar1 + lVar6);
    if (iVar4 < 0) {
      local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x150);
      FUN_143142730(iVar4,
                    "D3DRHI->GetDevice()->CreateBuffer(&BufferDesc, nullptr, SubBuffer.Buffer.GetInitReference())"
                    ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11ConstantBuffer.cpp",
                    0x21);
    }
    LOCK();
    _DAT_14ca84ee8 = _DAT_14ca84ee8 + *(longlong *)(lVar1 + lVar6 + 8);
    UNLOCK();
    uVar5 = (local_58[0] >> 1) + 0xf & 0xfffffff0;
    bVar3 = 0xe1 < local_58[0];
    local_58[0] = uVar5;
  } while (bVar3);
  _Dst = (void *)FUN_14001cc68(0x10000);
  *(void **)(param_1 + 0x28) = _Dst;
  memset(_Dst,0,0x10000);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473649c8 FUN_1473649c8 body=119 status=ok
// SIG undefined FUN_1473649c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473649c8(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = 0;
    do {
      LOCK();
      _DAT_14ca84ee8 = _DAT_14ca84ee8 - *(longlong *)(lVar1 + 8 + lVar3);
      UNLOCK();
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x40) * 0x10 != lVar3);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  FUN_147366b60(lVar1,uVar2);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  FUN_14736aae0(param_1 + 0x38);
  return;
}



// FUNCTION 147364a40 FUN_147364a40 body=61 status=ok
// SIG undefined FUN_147364a40(void)

longlong * FUN_147364a40(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_2) {
    *param_1 = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    }
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (*(code *)**(undefined8 **)(lVar2 + 0x10))(lVar2 + 0x10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 147364a7d FUN_147364a7d body=118 status=ok
// SIG undefined FUN_147364a7d(void)

bool FUN_147364a7d(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  bool bVar6;
  
  lVar2 = DAT_14ca765f8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14ca765f8;
  if (*(int *)(lVar2 + uVar5 * 4) < 1) {
    bVar6 = false;
  }
  else {
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    bVar6 = *(int *)(lVar3 + uVar5 * 4) != 4;
  }
  return bVar6;
}



// FUNCTION 147364af4 FUN_147364af4 body=37 status=ok
// SIG undefined FUN_147364af4(void)

void FUN_147364af4(undefined8 param_1)

{
  FUN_147358022();
  DAT_14ca84f23 = FUN_14314e892(param_1);
  FUN_140ded3be();
  return;
}



// FUNCTION 147364b1a FUN_147364b1a body=53 status=ok
// SIG undefined FUN_147364b1a(void)

bool FUN_147364b1a(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) == 0) && (FUN_14314eccc(param_1), *(longlong *)(param_1 + 8) == 0)
     ) {
    return false;
  }
  return 0xafff < *(int *)(param_1 + 0x140);
}



// FUNCTION 147364b50 FUN_147364b50 body=125 status=ok
// SIG undefined FUN_147364b50(void)

undefined8 FUN_147364b50(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1448c2e86();
  FUN_145af9b74(&local_30);
  FUN_1461cc160(uVar1,&local_28,local_30);
  FUN_147366b8c(local_28,local_20);
  uVar1 = *local_28;
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147364bce FUN_147364bce body=121 status=ok
// SIG undefined FUN_147364bce(void)

undefined4 FUN_147364bce(int param_1)

{
  if (param_1 < 0x1414) {
    if (param_1 < 0x10de) {
      if (param_1 == 0) {
        return 0;
      }
      if (param_1 == 0x1002) {
        return 0x1002;
      }
      if (param_1 == 0x1010) {
        return 0x1010;
      }
    }
    else {
      if (param_1 == 0x10de) {
        return 0x10de;
      }
      if (param_1 == 0x13b5) {
        return 0x13b5;
      }
    }
  }
  else if (param_1 < 0x14e4) {
    if (param_1 == 0x1414) {
      return 0x1414;
    }
    if (param_1 == 0x144d) {
      return 0x144d;
    }
  }
  else if (param_1 < 0x8086) {
    if (param_1 == 0x14e4) {
      return 0x14e4;
    }
    if (param_1 == 0x5143) {
      return 0x5143;
    }
  }
  else {
    if (param_1 == 0x8086) {
      return 0x8086;
    }
    if (param_1 == 0x10005) {
      return 0x10005;
    }
  }
  return 0xffffffff;
}



// FUNCTION 147364c48 FUN_147364c48 body=173 status=ok
// SIG undefined FUN_147364c48(void)

longlong *
FUN_147364c48(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x27) = param_3;
    *(undefined1 *)((longlong)param_1 + 0x13c) = param_4;
    *(undefined1 *)((longlong)param_1 + 0x13d) = param_5;
  }
  else {
    (**(code **)(*plVar1 + 8))();
    plVar1 = (longlong *)*param_1;
    *(undefined4 *)(param_1 + 0x27) = param_3;
    *(undefined1 *)((longlong)param_1 + 0x13c) = param_4;
    *(undefined1 *)((longlong)param_1 + 0x13d) = param_5;
    if (plVar1 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + 1);
      if (iVar2 < 0) {
        FUN_143142730(iVar2,"DXGIAdapter->GetDesc(&DXGIAdapterDesc)",
                      ".\\Runtime/Windows/D3D11RHI/Private\\D3D11RHIPrivate.h",0x159,0);
      }
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 147364cf6 FUN_147364cf6 body=353 status=ok
// SIG undefined FUN_147364cf6(void)

undefined8 FUN_147364cf6(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),&DAT_149eca928,&local_30);
  if (iVar2 < 0) {
    local_68 = 0;
    FUN_143142730(iVar2,
                  "ChosenAdapter.DXGIAdapter->GetParent(__uuidof(DXGIFactory1), reinterpret_cast<void**>(&DXGIFactory1))"
                  ,".\\Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device.cpp",0x3cb);
  }
  DAT_14ca85072 = 0xe;
  DAT_14ca85076 = 0;
  cVar1 = FUN_14631b5dd(&local_34);
  if (cVar1 != '\0') {
    param_2 = local_34;
  }
  DAT_14c760db4 = 3;
  if (param_2 < 3) {
    DAT_14c760db4 = param_2;
  }
  DAT_14ca85550 = *(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2);
  uVar3 = FUN_14001cc68(0x17f10,0x10);
  FUN_147358bea(uVar3,local_30,*(undefined4 *)(param_1 + 0x140),param_1 + 8);
  pwVar4 = L"false";
  if (*(char *)(param_1 + 0x145) != '\0') {
    pwVar4 = L"true";
  }
  DAT_14ca765e0 = uVar3;
  FUN_140056680(local_48,pwVar4);
  FUN_140056680(local_58,L"RHI.IntegratedGPU");
  FUN_14152eab6(local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147364e74 FUN_147364e74 body=38 status=ok
// SIG undefined FUN_147364e74(void)

int FUN_147364e74(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812();
  }
  return iVar3;
}



// FUNCTION 147364ea4 FUN_147364ea4 body=68 status=ok
// SIG undefined FUN_147364ea4(void)

undefined8 * FUN_147364ea4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147364ee8 FUN_147364ee8 body=78 status=ok
// SIG undefined FUN_147364ee8(void)

undefined8 * FUN_147364ee8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a33fad0;
  param_1[2] = &PTR_LAB_14a33fb00;
  FUN_144725486();
  param_1[2] = &PTR_FUN_149e38530;
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147364f40 FUN_147364f40 body=38 status=ok
// SIG undefined FUN_147364f40(void)

undefined8 FUN_147364f40(undefined8 param_1,int param_2)

{
  FUN_147359652();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147364f7c FUN_147364f7c body=45 status=ok
// SIG undefined FUN_147364f7c(void)

longlong FUN_147364f7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_147359652(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736500a FUN_14736500a body=38 status=ok
// SIG undefined FUN_14736500a(void)

undefined8 FUN_14736500a(undefined8 param_1,int param_2)

{
  FUN_144a4509c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365030 FUN_147365030 body=66 status=ok
// SIG undefined FUN_147365030(void)

undefined8 * FUN_147365030(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a340940;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365072 FUN_147365072 body=38 status=ok
// SIG undefined FUN_147365072(void)

undefined8 FUN_147365072(undefined8 param_1,int param_2)

{
  FUN_147359916();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365098 FUN_147365098 body=56 status=ok
// SIG undefined FUN_147365098(void)

void FUN_147365098(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb0,0x10);
  FUN_14736ab82(uVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1473650d0 FUN_1473650d0 body=38 status=ok
// SIG undefined FUN_1473650d0(void)

undefined8 FUN_1473650d0(undefined8 param_1,int param_2)

{
  FUN_143149190();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473650f6 FUN_1473650f6 body=38 status=ok
// SIG undefined FUN_1473650f6(void)

undefined8 FUN_1473650f6(undefined8 param_1,int param_2)

{
  FUN_14736ad4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736511c FUN_14736511c body=45 status=ok
// SIG undefined FUN_14736511c(void)

longlong FUN_14736511c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14736ad4e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736514a FUN_14736514a body=38 status=ok
// SIG undefined FUN_14736514a(void)

undefined8 FUN_14736514a(undefined8 param_1,int param_2)

{
  FUN_14736223e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365180 FUN_147365180 body=38 status=ok
// SIG undefined FUN_147365180(void)

undefined8 FUN_147365180(undefined8 param_1,int param_2)

{
  FUN_14736ada4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473651a6 FUN_1473651a6 body=45 status=ok
// SIG undefined FUN_1473651a6(void)

longlong FUN_1473651a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14736ada4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473651d4 FUN_1473651d4 body=38 status=ok
// SIG undefined FUN_1473651d4(void)

undefined8 FUN_1473651d4(undefined8 param_1,int param_2)

{
  FUN_14314c586();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473651fa FUN_1473651fa body=38 status=ok
// SIG undefined FUN_1473651fa(void)

undefined8 FUN_1473651fa(undefined8 param_1,int param_2)

{
  FUN_14736426c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736526c FUN_14736526c body=120 status=ok
// SIG undefined FUN_14736526c(void)

void FUN_14736526c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  do {
    local_38 = 1;
    local_40 = 1;
    local_48 = 0;
    cVar1 = FUN_143143b1c(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),&local_24,
                          4);
    if (cVar1 == '\0') break;
  } while (local_24 == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473652f2 FUN_1473652f2 body=355 status=ok
// SIG undefined FUN_1473652f2(void)

undefined4 * FUN_1473652f2(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147365456(param_1,local_40);
  puVar1 = (undefined4 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)local_38 = *puVar1;
  *(undefined4 *)((longlong)local_38 + 4) = uVar4;
  *(undefined4 *)(local_38 + 1) = uVar5;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar6;
  plVar3 = (longlong *)*plVar2;
  local_38[2] = (ulonglong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(short *)(local_38 + 5) = (short)plVar2[3];
  uVar4 = *(undefined4 *)((longlong)plVar2 + 0xc);
  lVar12 = plVar2[2];
  uVar5 = *(undefined4 *)((longlong)plVar2 + 0x14);
  *(int *)(local_38 + 3) = (int)plVar2[1];
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar4;
  *(int *)(local_38 + 4) = (int)lVar12;
  *(undefined4 *)((longlong)local_38 + 0x24) = uVar5;
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = ((uint)(*local_38 >> 0x14) & 0xffff ^ (uint)(*local_38 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_147365538(param_1,uVar8,local_38,&local_44);
  uVar4 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x34) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 6) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147365660(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147365456 FUN_147365456 body=226 status=ok
// SIG undefined FUN_147365456(void)

int * FUN_147365456(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 147365538 FUN_147365538 body=180 status=ok
// SIG undefined FUN_147365538(void)

undefined8 FUN_147365538(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar13 != -1) {
      lVar2 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x38;
        puVar1 = (undefined4 *)(lVar2 + lVar14);
        if ((*(longlong *)(lVar2 + lVar14) == *param_3) &&
           (*(int *)(lVar2 + 8 + lVar14) == (int)param_3[1])) {
          if (*(longlong **)(puVar1 + 4) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(puVar1 + 4) + 0x10))();
          }
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar14 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar9 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar11 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar11;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar9;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar10;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar14;
          puVar1[3] = uVar4;
          FUN_1473655ec(param_1,*param_4);
          *param_4 = iVar13;
          return 1;
        }
        iVar13 = puVar1[0xc];
      } while (iVar13 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473655ec FUN_1473655ec body=116 status=ok
// SIG undefined FUN_1473655ec(void)

void FUN_1473655ec(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 147365660 FUN_147365660 body=474 status=ok
// SIG undefined FUN_147365660(void)

void FUN_147365660(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x38;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x34 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x30 + lVar6) =
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



// FUNCTION 14736583c FUN_14736583c body=155 status=ok
// SIG undefined FUN_14736583c(void)

void FUN_14736583c(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_3;
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0x38;
        if ((*(ulonglong *)(lVar2 + lVar6) == uVar1) &&
           (*(int *)(lVar2 + 8 + lVar6) == (int)param_3[1])) goto LAB_14736584d;
        iVar3 = *(int *)(lVar6 + lVar2 + 0x30);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14736584d:
  *param_2 = iVar3;
  return;
}



// FUNCTION 1473658d8 FUN_1473658d8 body=124 status=ok
// SIG undefined FUN_1473658d8(void)

void FUN_1473658d8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  plVar5 = *(longlong **)(*param_1 + 0x10 + lVar2);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_1473655ec(param_1,param_2);
  return;
}



// FUNCTION 147365954 FUN_147365954 body=38 status=ok
// SIG undefined FUN_147365954(void)

undefined8 FUN_147365954(undefined8 param_1,int param_2)

{
  FUN_147358330();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736597e FUN_14736597e body=29 status=ok
// SIG undefined FUN_14736597e(void)

undefined8 FUN_14736597e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736599b FUN_14736599b body=48 status=ok
// SIG undefined FUN_14736599b(void)

void FUN_14736599b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1473659cc FUN_1473659cc body=52 status=ok
// SIG undefined FUN_1473659cc(void)

void FUN_1473659cc(longlong *param_1)

{
  FUN_147365a00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147365a00 FUN_147365a00 body=314 status=ok
// SIG undefined FUN_147365a00(void)

void FUN_147365a00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x38);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147365b3c FUN_147365b3c body=67 status=ok
// SIG undefined FUN_147365b3c(void)

undefined8 * FUN_147365b3c(undefined8 *param_1,int param_2)

{
  FUN_14735a34e(param_1 + 2);
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365b80 FUN_147365b80 body=38 status=ok
// SIG undefined FUN_147365b80(void)

undefined8 FUN_147365b80(undefined8 param_1,int param_2)

{
  FUN_147365c32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365baa FUN_147365baa body=69 status=ok
// SIG undefined FUN_147365baa(void)

undefined8 * FUN_147365baa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a343240;
  FUN_147365bf9(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147365bf9 FUN_147365bf9 body=57 status=ok
// SIG undefined FUN_147365bf9(void)

void FUN_147365bf9(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



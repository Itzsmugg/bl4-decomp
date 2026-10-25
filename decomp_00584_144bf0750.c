// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144bf0750 FUN_144bf0750 body=107 status=ok
// SIG undefined FUN_144bf0750(void)

undefined8 * FUN_144bf0750(undefined8 *param_1,ulonglong *param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  if (param_2 < (ulonglong *)0x2) {
    return param_1;
  }
  if ((*param_2 >> 0x11 & 1) != 0) {
    iVar1 = (*(code *)PTR_FUN_14c6da350)((uint)*param_2 & 0x1ffff);
    if (param_2 + (longlong)iVar1 + 2 != (ulonglong *)0x0) {
      uVar2 = (uint)param_2[(longlong)iVar1 + 2];
      goto LAB_144bf079d;
    }
  }
  uVar2 = 0;
LAB_144bf079d:
  if ((uVar2 >> 0x15 & 1) == 0) {
    param_2 = (ulonglong *)0x0;
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 144bf07c0 FUN_144bf07c0 body=107 status=ok
// SIG undefined FUN_144bf07c0(void)

undefined8 * FUN_144bf07c0(undefined8 *param_1,ulonglong *param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  if (param_2 < (ulonglong *)0x2) {
    return param_1;
  }
  if ((*param_2 >> 0x11 & 1) != 0) {
    iVar1 = (*(code *)PTR_FUN_14c6da350)((uint)*param_2 & 0x1ffff);
    if (param_2 + (longlong)iVar1 + 2 != (ulonglong *)0x0) {
      uVar2 = (uint)param_2[(longlong)iVar1 + 2];
      goto LAB_144bf080d;
    }
  }
  uVar2 = 0;
LAB_144bf080d:
  if ((uVar2 >> 0x14 & 1) == 0) {
    param_2 = (ulonglong *)0x0;
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 144bf0830 FUN_144bf0830 body=21 status=ok
// SIG undefined FUN_144bf0830(void)

undefined8 * FUN_144bf0830(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 144bf0850 FUN_144bf0850 body=192 status=ok
// SIG undefined FUN_144bf0850(void)

ulonglong FUN_144bf0850(longlong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  
  puVar4 = (ulonglong *)param_1[3];
  puVar5 = (ulonglong *)0x0;
  puVar3 = (ulonglong *)param_1[2];
  puVar6 = puVar5;
  if (puVar4 != puVar3) {
    do {
      if ((*puVar4 >> 0x17 & 1) != 0) {
        iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)*puVar4 & 0x7fffff);
        puVar3 = (ulonglong *)param_1[2];
        if (((puVar4 + (longlong)iVar2 + 2 != (ulonglong *)0x0) &&
            (puVar1 = (ulonglong *)puVar4[(longlong)iVar2 + 2], puVar1 != (ulonglong *)0x0)) &&
           ((int)*(short *)((longlong)puVar1 + 2) + (int)(short)*puVar1 != 0)) {
          puVar5 = puVar1;
          puVar6 = puVar4;
        }
      }
      puVar4 = (ulonglong *)puVar4[1];
    } while (puVar4 != puVar3);
    if (puVar6 != (ulonglong *)0x0) {
      iVar2 = (int)(short)*puVar5 + (int)*(short *)((longlong)puVar5 + 2);
      param_1[2] = (longlong)puVar6;
      *param_1 = (longlong)(puVar5 + 1);
      param_1[1] = (longlong)(puVar5 + 1 + iVar2);
      return CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



// FUNCTION 144bf0910 FUN_144bf0910 body=4 status=ok
// SIG undefined FUN_144bf0910(void)

undefined8 FUN_144bf0910(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144bf0930 FUN_144bf0930 body=133 status=ok
// SIG undefined FUN_144bf0930(void)

short * FUN_144bf0930(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  short *psVar1;
  longlong lVar2;
  
  lVar2 = (longlong)((param_2 + param_3) * 8);
  psVar1 = (short *)(**(code **)(*param_4 + 8))(param_4,lVar2 + 8);
  psVar1[1] = (short)param_3;
  *psVar1 = (short)param_2;
  psVar1[2] = (short)param_3 + (short)param_2;
  if (param_1 == 0) {
    FUN_144bfb540(psVar1 + 4,0,lVar2);
  }
  else {
    FUN_144b3d470(psVar1 + 4,param_1);
  }
  return psVar1;
}



// FUNCTION 144bf09c0 FUN_144bf09c0 body=9 status=ok
// SIG undefined FUN_144bf09c0(void)

void FUN_144bf09c0(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// FUNCTION 144bf09d0 FUN_144bf09d0 body=281 status=ok
// SIG undefined FUN_144bf09d0(void)

void FUN_144bf09d0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res8 [4];
  undefined8 local_1d8;
  code *local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [80];
  undefined1 local_158 [344];
  
  local_res8[0] = param_1;
  if ((DAT_14c784268 < 2) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) {
    return;
  }
  cVar2 = FUN_144bdbf80();
  if (cVar2 != '\0') {
    uVar1 = FUN_144bdc810(local_158,&DAT_14c784218,2);
    local_1c0 = 1;
    local_1b8 = FUN_144bf0db0;
    local_1b0 = local_res8;
    lVar3 = FUN_144bdc480(uVar1,
                          "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                          ,&local_1c0,0);
    *(char **)(lVar3 + 0x38) = "Reflect\\Core\\hkReflectType.cpp";
    *(undefined8 *)(lVar3 + 0x40) = 0x5d;
    *(undefined4 *)(lVar3 + 0x1c) = 0x34fdd456;
    FUN_144bdc8a0(local_158);
    return;
  }
  uVar1 = FUN_144bdc640(local_1a8);
  local_1d8 = 1;
  local_1d0 = FUN_144bf0db0;
  local_1c8 = local_res8;
  lVar3 = FUN_144bdc480(uVar1,
                        "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                        ,&local_1d8,0);
  *(char **)(lVar3 + 0x38) = "Reflect\\Core\\hkReflectType.cpp";
  *(undefined8 *)(lVar3 + 0x40) = 0x5d;
  *(undefined4 *)(lVar3 + 0x1c) = 0x34fdd456;
  FUN_144bdc690(local_1a8);
  return;
}



// FUNCTION 144bf0af0 FUN_144bf0af0 body=460 status=ok
// SIG undefined FUN_144bf0af0(void)

void FUN_144bf0af0(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  char *pcVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res8 [8];
  longlong local_res18;
  ulonglong local_38;
  ulonglong uStack_30;
  
  plVar2 = (longlong *)param_1[1];
  pcVar6 = "unnamed";
  if ((char *)*param_1 != (char *)0x0) {
    pcVar6 = (char *)*param_1;
  }
  FUN_144be0720(param_2,pcVar6,0xffffffff);
  if ((plVar2 != (longlong *)0x0) && ((short)plVar2[1] != 0)) {
    FUN_144be0720(param_2,&DAT_149982da8,0xffffffff);
    iVar11 = 0;
    if ((short)plVar2[1] != 0) {
      lVar10 = 0;
      plVar4 = plVar2;
      do {
        plVar8 = plVar4 + 2;
        if (0 < lVar10) {
          FUN_144be0720(param_2,&DAT_14997153c,0xffffffff);
        }
        if (*(char *)plVar4[3] == 't') {
          puVar7 = (ulonglong *)*plVar8;
          local_38 = 0;
          uStack_30 = 0;
          puVar9 = puVar7;
          if (puVar7 != (ulonglong *)0x0) {
            while (uVar3 = *puVar9, (uVar3 & 8) == 0) {
              if (((uVar3 & 1) != 0) ||
                 (puVar1 = puVar9 + 1, puVar9 = (ulonglong *)*puVar1,
                 (ulonglong *)*puVar1 == (ulonglong *)0x0)) goto LAB_144bf0bc9;
            }
            iVar5 = (*(code *)PTR_FUN_14c6da350)((uint)uVar3 & 7);
            if (puVar9 + (longlong)iVar5 + 2 != (ulonglong *)0x0) {
              local_38 = puVar9[(longlong)iVar5 + 2];
              goto LAB_144bf0bd0;
            }
LAB_144bf0bc9:
            local_38 = 0;
LAB_144bf0bd0:
            do {
              uVar3 = *puVar7;
              if ((uVar3 >> 0xf & 1) != 0) {
                iVar5 = (*(code *)PTR_FUN_14c6da350)((uint)uVar3 & 0x7fff);
                uStack_30 = puVar7[(longlong)iVar5 + 2];
                goto LAB_144bf0bea;
              }
            } while (((uVar3 & 9) == 0) &&
                    (puVar7 = (ulonglong *)puVar7[1], puVar7 != (ulonglong *)0x0));
          }
          uStack_30 = 0;
LAB_144bf0bea:
          FUN_144bf0af0(&local_38,param_2);
        }
        else {
          local_res18 = *plVar8;
          FUN_144be16e0(param_2,local_res8,&DAT_1499819e4,&DAT_149982dd8,&local_res18);
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        plVar4 = plVar8;
      } while (iVar11 < (int)(uint)*(ushort *)(plVar2 + 1));
    }
    FUN_144be0720(param_2,&DAT_149982dac,0xffffffff);
  }
  return;
}



// FUNCTION 144bf0cc0 FUN_144bf0cc0 body=235 status=ok
// SIG undefined FUN_144bf0cc0(void)

void FUN_144bf0cc0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144bf0db0 FUN_144bf0db0 body=36 status=ok
// SIG undefined FUN_144bf0db0(void)

undefined8 FUN_144bf0db0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144bf0de0 FUN_144bf0de0 body=188 status=ok
// SIG undefined FUN_144bf0de0(void)

undefined4 *
FUN_144bf0de0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_res10;
  
  if (*param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)param_3 + (longlong)*param_3;
  }
  iVar1 = param_3[1];
  FUN_144beff00(param_4,&local_res10);
  uVar3 = 0;
  uVar4 = 0;
  if (local_res10 != 0) {
    uVar3 = FUN_144beec90(local_res10);
    uVar4 = FUN_144befdb0(local_res10);
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
  }
  *param_5 = lVar5;
  param_5[1] = local_res10;
  *(int *)(param_5 + 2) = iVar1;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar3;
  uVar2 = param_5[3];
  param_5[3] = uVar4;
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf0ea0 FUN_144bf0ea0 body=27 status=ok
// SIG undefined FUN_144bf0ea0(void)

undefined4 *
FUN_144bf0ea0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5
             )

{
  if (param_5 == *(int *)(param_3 + 4)) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf0ec0 FUN_144bf0ec0 body=105 status=ok
// SIG undefined FUN_144bf0ec0(void)

bool FUN_144bf0ec0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  int param_5)

{
  char cVar1;
  undefined8 local_res10;
  
  if (param_4 != 0) {
    FUN_144beff00(param_3,&local_res10);
    cVar1 = FUN_144bef570(param_4,local_res10);
    if (cVar1 != '\0') {
      return param_5 != *(int *)(param_2 + 4);
    }
  }
  return true;
}



// FUNCTION 144bf0f30 FUN_144bf0f30 body=41 status=ok
// SIG undefined FUN_144bf0f30(void)

undefined4 *
FUN_144bf0f30(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = 0;
  if (param_5 != 0) {
    iVar1 = (int)param_5 - (int)param_3;
  }
  *param_3 = iVar1;
  param_3[1] = param_7;
  return param_2;
}



// FUNCTION 144bf0f60 FUN_144bf0f60 body=87 status=ok
// SIG undefined FUN_144bf0f60(void)

undefined8 FUN_144bf0f60(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf0fe0 FUN_144bf0fe0 body=184 status=ok
// SIG undefined FUN_144bf0fe0(void)

undefined4 *
FUN_144bf0fe0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res10;
  
  lVar1 = *param_3;
  lVar2 = param_3[1];
  FUN_144beff00(param_4,&local_res10);
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = (longlong)param_3 + lVar1;
  if (lVar1 == 0) {
    uVar5 = uVar4;
  }
  if (local_res10 != 0) {
    uVar3 = FUN_144beec90(local_res10);
    uVar4 = FUN_144befdb0(local_res10);
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar5;
  param_5[1] = local_res10;
  *(int *)(param_5 + 2) = (int)lVar2;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar3;
  uVar5 = param_5[3];
  param_5[3] = uVar4;
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf10a0 FUN_144bf10a0 body=27 status=ok
// SIG undefined FUN_144bf10a0(void)

undefined4 *
FUN_144bf10a0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5
             )

{
  if (param_5 == *(int *)(param_3 + 8)) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf10c0 FUN_144bf10c0 body=105 status=ok
// SIG undefined FUN_144bf10c0(void)

bool FUN_144bf10c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  int param_5)

{
  char cVar1;
  undefined8 local_res10;
  
  if (param_4 != 0) {
    FUN_144beff00(param_3,&local_res10);
    cVar1 = FUN_144bef570(param_4,local_res10);
    if (cVar1 != '\0') {
      return param_5 != *(int *)(param_2 + 8);
    }
  }
  return true;
}



// FUNCTION 144bf1130 FUN_144bf1130 body=39 status=ok
// SIG undefined FUN_144bf1130(void)

undefined4 *
FUN_144bf1130(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = param_5 - (longlong)param_3;
  if (param_5 == 0) {
    lVar1 = 0;
  }
  *param_3 = lVar1;
  *(undefined4 *)(param_3 + 1) = param_7;
  return param_2;
}



// FUNCTION 144bf1160 FUN_144bf1160 body=87 status=ok
// SIG undefined FUN_144bf1160(void)

undefined8 FUN_144bf1160(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf11c0 FUN_144bf11c0 body=367 status=ok
// SIG undefined FUN_144bf11c0(void)

undefined8 *
FUN_144bf11c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_128;
  undefined4 local_120;
  uint local_11c;
  
  plVar2 = (longlong *)FUN_144bef430(param_4,&local_148,&DAT_14c6dec60);
  lVar1 = *plVar2;
  if ((local_138 & 1) != 0) {
    FUN_144be6b30(local_138 & 0xfffffffffffffffe);
  }
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 8))(param_1,param_2,param_4);
  }
  else {
    FUN_144f6cb90(&local_128,param_4);
    local_148 = *param_3;
    local_138 = param_3[2];
    local_140 = param_3[1];
    if ((local_138 & 1) != 0) {
      FUN_144be6b20(local_138 & 0xfffffffffffffffe);
    }
    uVar4 = 0;
    FUN_144bf2eb0(&local_128,&local_148,param_4,0,0);
    uVar3 = FUN_144f6ce10(&local_128);
    if (param_4 != 0) {
      uVar4 = FUN_144befdb0(param_4);
    }
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_144beee40(param_4);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(uVar3,uVar5);
    }
    *param_2 = uVar3;
    param_2[1] = param_4;
    param_2[2] = uVar4;
    local_120 = 0;
    if ((-1 < (int)local_11c) && (local_128 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_128,(ulonglong)(local_11c & 0x7fffffff) << 4);
    }
  }
  return param_2;
}



// FUNCTION 144bf1330 FUN_144bf1330 body=41 status=ok
// SIG undefined FUN_144bf1330(void)

longlong * FUN_144bf1330(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  FUN_144bf4d90(param_2,param_3);
  *(undefined8 *)(*param_2 + 8) = 0xffffffff;
  return param_2;
}



// FUNCTION 144bf1360 FUN_144bf1360 body=12 status=ok
// SIG undefined FUN_144bf1360(void)

void FUN_144bf1360(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bf1365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c787678)(0,param_2,0);
  return;
}



// FUNCTION 144bf1370 FUN_144bf1370 body=60 status=ok
// SIG undefined FUN_144bf1370(void)

bool FUN_144bf1370(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  plVar2 = (longlong *)FUN_144bef430(param_2,local_28,&DAT_14c6dec60);
  lVar1 = *plVar2;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return lVar1 == 0;
}



// FUNCTION 144bf13b0 FUN_144bf13b0 body=97 status=ok
// SIG undefined FUN_144bf13b0(void)

undefined8 * FUN_144bf13b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::ReferencedObjectAllocImpl::vftable;
  FUN_144be7ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144bf1420 FUN_144bf1420 body=198 status=ok
// SIG undefined FUN_144bf1420(void)

undefined4 *
FUN_144bf1420(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  FUN_144beff00(param_4,&local_res10);
  FUN_144beff00(param_4,local_res18);
  iVar5 = FUN_144beec90(local_res18[0]);
  uVar3 = *(undefined8 *)param_3;
  uVar6 = 0;
  uVar7 = 0;
  if (local_res10 != 0) {
    uVar6 = FUN_144beec90(local_res10,(longlong)(iVar1 - iVar2) % (longlong)iVar5 & 0xffffffff);
    uVar7 = FUN_144befdb0(local_res10);
    if ((uVar7 & 1) != 0) {
      FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar3;
  param_5[1] = local_res10;
  *(int *)(param_5 + 2) = (iVar1 - iVar2) / iVar5;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
  uVar4 = param_5[3];
  param_5[3] = uVar7;
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf14f0 FUN_144bf14f0 body=90 status=ok
// SIG undefined FUN_144bf14f0(void)

undefined4 *
FUN_144bf14f0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  
  FUN_144beff00(param_4,local_res10);
  iVar1 = FUN_144beec90(local_res10[0]);
  uVar2 = 0;
  if ((longlong)param_5 != (param_3[1] - *param_3) / (longlong)iVar1) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 144bf1550 FUN_144bf1550 body=97 status=ok
// SIG undefined FUN_144bf1550(void)

undefined8 * FUN_144bf1550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::StaticArrayImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf15c0 FUN_144bf15c0 body=176 status=ok
// SIG undefined FUN_144bf15c0(void)

undefined4 *
FUN_144bf15c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong local_res10;
  
  FUN_144beff00(param_4,&local_res10);
  uVar2 = *param_3;
  uVar4 = 0;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar5 = 0;
  if (local_res10 != 0) {
    uVar4 = FUN_144beec90(local_res10);
    uVar5 = FUN_144befdb0(local_res10);
    if ((uVar5 & 1) != 0) {
      FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar2;
  param_5[1] = local_res10;
  *(undefined4 *)(param_5 + 2) = uVar1;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
  uVar3 = param_5[3];
  param_5[3] = uVar5;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf1670 FUN_144bf1670 body=83 status=ok
// SIG undefined FUN_144bf1670(void)

undefined8
FUN_144bf1670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 local_res10;
  
  FUN_144beff00(param_4,&local_res10);
  FUN_144bf1f70(param_1,param_2,param_3,local_res10,param_5);
  return param_2;
}



// FUNCTION 144bf16d0 FUN_144bf16d0 body=164 status=ok
// SIG undefined FUN_144bf16d0(void)

undefined4 *
FUN_144bf16d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,longlong param_7)

{
  char cVar1;
  undefined8 local_18 [2];
  
  FUN_144beff00(param_4,local_18);
  if ((*(longlong *)(param_7 + 8) != 0) && (cVar1 = FUN_144bef570(local_18[0]), cVar1 == '\0')) {
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_144bf2070(param_1,param_2,param_3,local_18[0],param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 144bf1780 FUN_144bf1780 body=167 status=ok
// SIG undefined FUN_144bf1780(void)

undefined8
FUN_144bf1780(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_18 [2];
  
  FUN_144beff00(param_3,local_18);
  cVar1 = FUN_144bef570(param_4,local_18[0]);
  if (cVar1 == '\0') {
LAB_144bf180d:
    uVar4 = 1;
  }
  else {
    plVar2 = (longlong *)FUN_144befe50(param_4,0x400000);
    if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
      plVar2 = (longlong *)FUN_144befe50(param_4,0x40);
      lVar3 = 0;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *plVar2;
      }
      if (lVar3 == 0) goto LAB_144bf180d;
    }
    uVar4 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar4;
}



// FUNCTION 144bf1830 FUN_144bf1830 body=35 status=ok
// SIG undefined FUN_144bf1830(void)

undefined4 *
FUN_144bf1830(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  *param_3 = param_5;
  *(uint *)(param_3 + 1) = param_7;
  *(uint *)((longlong)param_3 + 0xc) = param_7 | 0x80000000;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf1860 FUN_144bf1860 body=97 status=ok
// SIG undefined FUN_144bf1860(void)

void FUN_144bf1860(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 local_res10;
  
  FUN_144beff00(param_3,&local_res10);
  uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
  if ((uVar2 != 0) && (-1 < (int)*(uint *)((longlong)param_2 + 0xc))) {
    iVar1 = FUN_144beec90(local_res10);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),*param_2,(longlong)(int)(iVar1 * uVar2));
  }
  return;
}



// FUNCTION 144bf18d0 FUN_144bf18d0 body=213 status=ok
// SIG undefined FUN_144bf18d0(void)

void FUN_144bf18d0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_res8 [4];
  
  puVar1 = (undefined4 *)FUN_144bef800(param_1,local_res8);
  uVar4 = 0;
  if (((byte)*puVar1 & 0x1f) == 8) {
    uVar4 = param_1;
  }
  FUN_144beff00(uVar4,local_res8);
  puVar2 = (undefined8 *)FUN_144befed0(param_1,0x40);
  *puVar2 = &LAB_144bf33d0;
  puVar2 = (undefined8 *)FUN_144befed0(param_1,0x100);
  *puVar2 = FUN_144bf1db0;
  plVar3 = (longlong *)FUN_144befe50(local_res8[0],0x80);
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    puVar2 = (undefined8 *)FUN_144befed0(param_1,0x80);
    *puVar2 = FUN_144bf19b0;
    puVar2 = (undefined8 *)FUN_144befed0(param_1,0x200);
    *puVar2 = FUN_144bf1bc0;
    return;
  }
  puVar2 = (undefined8 *)FUN_144befed0(param_1,0x80);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_144befed0(param_1,0x200);
  *puVar2 = 0;
  return;
}



// FUNCTION 144bf19b0 FUN_144bf19b0 body=516 status=ok
// SIG undefined FUN_144bf19b0(void)

void FUN_144bf19b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int *piVar13;
  code *pcVar14;
  undefined1 local_res20 [8];
  longlong local_68;
  
  lVar12 = (longlong)param_4;
  uVar6 = FUN_144f69980(param_3);
  puVar7 = (undefined4 *)FUN_144bef800(uVar6,local_res20);
  uVar8 = 0;
  if (((byte)*puVar7 & 0x1f) == 8) {
    uVar8 = uVar6;
  }
  FUN_144beff00(uVar8);
  uVar8 = FUN_144befdb0(uVar8);
  if (0 < param_4) {
    piVar13 = (int *)(param_1 + 8);
    do {
      uVar9 = 0;
      piVar1 = (int *)((longlong)piVar13 + (param_2 - param_1));
      piVar13[-2] = 0;
      piVar13[-1] = 0;
      *piVar13 = 0;
      *(undefined4 *)((longlong)piVar1 + (param_1 - param_2) + 4) = 0x80000000;
      uVar6 = *(undefined8 *)((longlong)piVar13 + (param_2 - param_1) + -8);
      iVar2 = *piVar1;
      if (local_68 != 0) {
        FUN_144beec90(local_68);
        uVar9 = FUN_144befdb0(local_68);
        if ((uVar9 & 1) != 0) {
          FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
        }
      }
      iVar3 = *piVar13;
      if ((iVar3 != 0) || (iVar2 != 0)) {
        iVar5 = FUN_144beec90(local_68);
        pcVar14 = (code *)0x0;
        if ((iVar2 < 1) ||
           ((plVar10 = (longlong *)FUN_144befe50(local_68), plVar10 != (longlong *)0x0 &&
            (pcVar14 = (code *)*plVar10, pcVar14 != (code *)0x0)))) {
          FUN_144bf1e90(uVar8,piVar13 + -2,iVar5,iVar2);
          lVar4 = *(longlong *)(piVar13 + -2);
          if ((0 < iVar3) &&
             ((puVar11 = (undefined8 *)FUN_144befe50(local_68,0x100), puVar11 != (undefined8 *)0x0
              && ((code *)*puVar11 != (code *)0x0)))) {
            (*(code *)*puVar11)(lVar4,local_68,iVar3);
          }
          FUN_144bfb3c0(iVar2 * iVar5 + lVar4,iVar3 * iVar5 + lVar4,0);
          if (0 < iVar2) {
            (*pcVar14)(lVar4,uVar6,local_68,iVar2);
          }
        }
      }
      if ((uVar9 & 1) != 0) {
        FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
      }
      piVar13 = piVar13 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144bf1bc0 FUN_144bf1bc0 body=485 status=ok
// SIG undefined FUN_144bf1bc0(void)

void FUN_144bf1bc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  code *pcVar13;
  undefined1 local_res20 [8];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  lVar11 = (longlong)param_4;
  uVar5 = FUN_144f69980(param_3);
  puVar6 = (undefined4 *)FUN_144bef800(uVar5,local_res20);
  uVar10 = 0;
  if (((byte)*puVar6 & 0x1f) == 8) {
    uVar10 = uVar5;
  }
  FUN_144beff00(uVar10,&local_58);
  local_50 = FUN_144befdb0(uVar10);
  if (0 < param_4) {
    piVar12 = (int *)(param_1 + 8);
    do {
      local_40 = *(undefined8 *)((param_2 - param_1) + -8 + (longlong)piVar12);
      uVar7 = 0;
      iVar1 = *(int *)((param_2 - param_1) + (longlong)piVar12);
      if (local_58 != 0) {
        FUN_144beec90(local_58);
        uVar7 = FUN_144befdb0(local_58);
        if ((uVar7 & 1) != 0) {
          FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
        }
      }
      iVar2 = *piVar12;
      if ((iVar2 != 0) || (iVar1 != 0)) {
        iVar4 = FUN_144beec90(local_58);
        pcVar13 = (code *)0x0;
        if ((iVar1 < 1) ||
           ((plVar8 = (longlong *)FUN_144befe50(local_58,0x80), plVar8 != (longlong *)0x0 &&
            (pcVar13 = (code *)*plVar8, pcVar13 != (code *)0x0)))) {
          FUN_144bf1e90(local_50,piVar12 + -2,iVar4,iVar1);
          lVar3 = *(longlong *)(piVar12 + -2);
          local_48 = iVar4 * iVar2 + lVar3;
          if ((0 < iVar2) &&
             ((puVar9 = (undefined8 *)FUN_144befe50(local_58,0x100), puVar9 != (undefined8 *)0x0 &&
              ((code *)*puVar9 != (code *)0x0)))) {
            (*(code *)*puVar9)(lVar3,local_58,iVar2);
          }
          FUN_144bfb3c0(iVar1 * iVar4 + lVar3,local_48,0);
          if (0 < iVar1) {
            (*pcVar13)(lVar3,local_40,local_58,iVar1);
          }
        }
      }
      if ((uVar7 & 1) != 0) {
        FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
      }
      piVar12 = piVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144bf1db0 FUN_144bf1db0 body=214 status=ok
// SIG undefined FUN_144bf1db0(void)

void FUN_144bf1db0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  lVar6 = (longlong)param_3;
  uVar2 = FUN_144f69980(param_2);
  puVar3 = (undefined4 *)FUN_144bef800(uVar2,local_res18);
  uVar8 = 0;
  if (((byte)*puVar3 & 0x1f) == 8) {
    uVar8 = uVar2;
  }
  FUN_144beff00(uVar8,&local_res10);
  lVar4 = FUN_144befdb0(uVar8);
  if (0 < lVar6) {
    do {
      iVar1 = *(int *)(param_1 + 1);
      if (iVar1 != 0) {
        uVar8 = *param_1;
        puVar5 = (undefined8 *)FUN_144befe50(local_res10,0x100);
        if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
          (*(code *)*puVar5)(uVar8,local_res10,iVar1);
        }
      }
      uVar7 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
      if ((uVar7 != 0) && (-1 < (int)*(uint *)((longlong)param_1 + 0xc))) {
        iVar1 = FUN_144beec90(local_res10);
        (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x18))
                  (*(longlong **)(lVar4 + 0x10),*param_1,(longlong)(int)(iVar1 * uVar7));
      }
      param_1 = param_1 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144bf1e90 FUN_144bf1e90 body=209 status=ok
// SIG undefined FUN_144bf1e90(void)

void FUN_144bf1e90(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  if ((ulonglong)(uVar1 & 0x7fffffff) < (ulonglong)(longlong)param_4) {
    iVar2 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    plVar4 = *(longlong **)(param_1 + 0x10);
    uVar5 = (**(code **)(*plVar4 + 8))(plVar4,(longlong)param_3 * (longlong)param_4);
    FUN_144b3d470(uVar5,uVar3,(longlong)(iVar2 * param_3));
    if ((~(byte)(uVar1 >> 0x1f) & 1) != 0) {
      (**(code **)(*plVar4 + 0x18))
                (plVar4,uVar3,(ulonglong)(uVar1 & 0x7fffffff) * (longlong)param_3);
    }
    *param_2 = uVar5;
    *(int *)((longlong)param_2 + 0xc) = param_4;
    *(int *)(param_2 + 1) = param_4;
    return;
  }
  *(int *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 144bf1f70 FUN_144bf1f70 body=243 status=ok
// SIG undefined FUN_144bf1f70(void)

undefined4 *
FUN_144bf1f70(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  
  iVar1 = (int)param_3[1];
  iVar3 = FUN_144beec90(param_4);
  if (param_5 != iVar1) {
    if (param_5 < iVar1) {
      *(int *)(param_3 + 1) = param_5;
      lVar2 = *param_3;
      puVar4 = (undefined8 *)FUN_144befe50(param_4,0x100);
      if ((puVar4 != (undefined8 *)0x0) && ((code *)*puVar4 != (code *)0x0)) {
        (*(code *)*puVar4)(iVar3 * param_5 + lVar2,param_4,iVar1 - param_5);
      }
    }
    else {
      pcVar6 = (code *)0x0;
      if ((iVar1 < param_5) &&
         ((plVar5 = (longlong *)FUN_144befe50(param_4,0x40), plVar5 == (longlong *)0x0 ||
          (pcVar6 = (code *)*plVar5, pcVar6 == (code *)0x0)))) {
        *param_2 = 0x80040200;
        return param_2;
      }
      FUN_144bf1e90(param_1,param_3,iVar3,param_5);
      if (iVar1 < param_5) {
        (*pcVar6)((longlong)(iVar3 * iVar1) + *param_3,param_4,param_5 - iVar1);
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf2070 FUN_144bf2070 body=385 status=ok
// SIG undefined FUN_144bf2070(void)

undefined4 *
FUN_144bf2070(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5,int param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong lVar9;
  
  iVar1 = (int)param_3[1];
  if (param_5 < 0) {
    param_5 = iVar1;
  }
  iVar4 = iVar1;
  if (-1 < param_6) {
    iVar4 = param_6;
  }
  iVar2 = *(int *)(param_7 + 2);
  if ((iVar4 != 0) || (iVar2 != 0)) {
    iVar5 = FUN_144beec90(param_4);
    pcVar8 = (code *)0x0;
    if ((0 < iVar2) &&
       ((plVar6 = (longlong *)FUN_144befe50(param_4,0x80), plVar6 == (longlong *)0x0 ||
        (pcVar8 = (code *)*plVar6, pcVar8 == (code *)0x0)))) {
      *param_2 = 0x80040200;
      return param_2;
    }
    FUN_144bf1e90(param_1,param_3,iVar5,(iVar1 - iVar4) + iVar2);
    lVar3 = *param_3;
    lVar9 = iVar5 * param_5 + lVar3;
    if (((0 < iVar4) &&
        (puVar7 = (undefined8 *)FUN_144befe50(param_4,0x100), puVar7 != (undefined8 *)0x0)) &&
       ((code *)*puVar7 != (code *)0x0)) {
      (*(code *)*puVar7)(lVar9,param_4,iVar4);
    }
    FUN_144bfb3c0((iVar2 + param_5) * iVar5 + lVar3,(param_5 + iVar4) * iVar5 + lVar3,
                  (longlong)(iVar5 * ((iVar1 - param_5) - iVar4)));
    if (0 < iVar2) {
      (*pcVar8)(lVar9,*param_7,param_4,iVar2);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf2200 FUN_144bf2200 body=130 status=ok
// SIG undefined FUN_144bf2200(void)

undefined8
FUN_144bf2200(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) != 0) {
    return 2;
  }
  uVar1 = FUN_144beec90(param_4);
  FUN_144bf1e90(param_1,param_2,uVar1,param_5);
  uVar2 = FUN_144bf32f0(*param_2,param_4,uVar1,param_5);
  return uVar2;
}



// FUNCTION 144bf2290 FUN_144bf2290 body=97 status=ok
// SIG undefined FUN_144bf2290(void)

undefined8 * FUN_144bf2290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::hkArrayImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bf2300 FUN_144bf2300 body=185 status=ok
// SIG undefined FUN_144bf2300(void)

undefined8
FUN_144bf2300(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144beec90(param_3);
  if (((param_2 <= (ulonglong *)*param_2) && ((ulonglong *)*param_2 < param_2 + (longlong)iVar1 * 2)
      ) && ((int)param_2[1] == 0)) {
    uVar2 = FUN_144beec90(param_4);
    if ((ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < (ulonglong)(longlong)param_5)
    {
      FUN_144bf1e90(param_1,param_2,uVar2,param_5);
    }
    else {
      *(int *)(param_2 + 1) = param_5;
    }
    uVar3 = FUN_144bf32f0(*param_2,param_4,uVar2,param_5);
    return uVar3;
  }
  return 2;
}



// FUNCTION 144bf23c0 FUN_144bf23c0 body=97 status=ok
// SIG undefined FUN_144bf23c0(void)

undefined8 * FUN_144bf23c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::hkArrayImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bf2430 FUN_144bf2430 body=159 status=ok
// SIG undefined FUN_144bf2430(void)

undefined4 *
FUN_144bf2430(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  lVar2 = param_3[2];
  uVar5 = 0;
  uVar3 = *param_3;
  uVar6 = 0;
  uVar1 = *(undefined4 *)(param_3 + 1);
  if (lVar2 != 0) {
    uVar5 = FUN_144beec90(lVar2);
    uVar6 = FUN_144befdb0(lVar2);
    if ((uVar6 & 1) != 0) {
      FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar3;
  param_5[1] = lVar2;
  *(undefined4 *)(param_5 + 2) = uVar1;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
  uVar4 = param_5[3];
  param_5[3] = uVar6;
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf24d0 FUN_144bf24d0 body=55 status=ok
// SIG undefined FUN_144bf24d0(void)

undefined4 * FUN_144bf24d0(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x10) == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_144bf1f70();
  return param_2;
}



// FUNCTION 144bf2510 FUN_144bf2510 body=312 status=ok
// SIG undefined FUN_144bf2510(void)

undefined4 *
FUN_144bf2510(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5,int param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_7 + 8) != 0) {
    if ((param_3[2] != 0) && (cVar4 = FUN_144bef570(), cVar4 == '\0')) {
      iVar1 = (int)param_3[1];
      if ((iVar1 != 0) && ((param_5 != 0 || ((param_6 != iVar1 && (param_6 != -1)))))) {
        *param_2 = 0x80040200;
        return param_2;
      }
      lVar2 = *param_3;
      if (lVar2 != 0) {
        if (iVar1 != 0) {
          lVar3 = param_3[2];
          puVar5 = (undefined8 *)FUN_144befe50(lVar3,0x100);
          if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
            (*(code *)*puVar5)(lVar2,lVar3,iVar1);
          }
        }
        if ((*param_3 != 0) && (-1 < *(int *)((longlong)param_3 + 0xc))) {
          (*DAT_14c787678)(0,*param_3,0);
        }
        param_3[1] = 0;
        *param_3 = 0;
      }
    }
    param_3[2] = *(longlong *)(param_7 + 8);
  }
  FUN_144bf2070(param_1,param_2,param_3,param_3[2],param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 144bf2650 FUN_144bf2650 body=142 status=ok
// SIG undefined FUN_144bf2650(void)

undefined8
FUN_144bf2650(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_2 + 0x10) = param_4;
  plVar1 = (longlong *)FUN_144befe50(param_4,0x400000);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    plVar1 = (longlong *)FUN_144befe50(param_4,0x40);
    lVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (lVar2 == 0) {
      return 1;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x70))
                    (param_1,param_2,param_3,*(undefined8 *)(param_2 + 0x10),param_5);
  return uVar3;
}



// FUNCTION 144bf26e0 FUN_144bf26e0 body=50 status=ok
// SIG undefined FUN_144bf26e0(void)

undefined4 *
FUN_144bf26e0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  param_3[2] = param_6;
  *param_2 = 0;
  *(uint *)((longlong)param_3 + 0xc) = param_7 | 0x80000000;
  if (param_7 != 0) {
    *param_3 = param_5;
    *(uint *)(param_3 + 1) = param_7;
  }
  return param_2;
}



// FUNCTION 144bf2720 FUN_144bf2720 body=83 status=ok
// SIG undefined FUN_144bf2720(void)

void FUN_144bf2720(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
  if ((uVar2 != 0) && (-1 < (int)*(uint *)((longlong)param_2 + 0xc))) {
    iVar1 = FUN_144beec90(param_2[2]);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),*param_2,(longlong)(int)(iVar1 * uVar2));
  }
  return;
}



// FUNCTION 144bf2780 FUN_144bf2780 body=97 status=ok
// SIG undefined FUN_144bf2780(void)

undefined8 * FUN_144bf2780(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::hkArrayImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bf27f0 FUN_144bf27f0 body=972 status=ok
// SIG undefined FUN_144bf27f0(void)

int * FUN_144bf27f0(undefined8 param_1,int *param_2,undefined8 param_3,longlong param_4,
                   longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined8 *local_128;
  code *local_120;
  char *local_118;
  code *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  undefined8 local_b8;
  code *local_b0;
  char *local_a8;
  code *local_a0;
  undefined8 *local_98;
  undefined1 local_68 [80];
  
  plVar2 = param_5;
  lVar6 = param_5[1];
  lVar1 = *param_5;
  if ((((lVar6 != 0) && (cVar3 = FUN_144b45dd0(lVar6,param_4), cVar3 != '\0')) &&
      (puVar4 = (uint *)FUN_144b45d50(lVar6,&param_5), (*puVar4 >> 3 & 1) == 0)) &&
     ((lVar1 != 0 && (puVar4 = (uint *)FUN_144b45d50(plVar2[1],&param_5), (*puVar4 >> 3 & 1) == 0)))
     ) {
    lVar6 = *plVar2;
    puVar5 = (undefined8 *)FUN_144befe50(param_4,0x200);
    if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
      (*(code *)*puVar5)(param_3,lVar6,param_4,1);
      *param_2 = 0;
      return param_2;
    }
  }
  lVar6 = FUN_144beff80(param_4);
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_144befdb0(lVar6);
    piVar8 = (int *)(**(code **)(*plVar7 + 0x40))(plVar7,local_130,param_3,lVar6,plVar2);
    param_5._0_4_ = *piVar8;
    if ((int)param_5 < 0) {
      if (DAT_14c7845c0 != '\0') {
        lVar6 = FUN_144bdc640(&local_b8,&DAT_14c784570,1);
        local_128 = (undefined8 *)0x2;
        *(char **)(lVar6 + 0x38) = "Reflect\\Impl\\hkHavokImpl.cpp";
        local_120 = FUN_144bf3400;
        local_118 = "parent->getImpl()->setValue(addr, parent, other)";
        local_110 = FUN_144bdef40;
        local_108 = &param_5;
        *(undefined8 *)(lVar6 + 0x40) = 0xba;
        uVar9 = FUN_144bdc480(lVar6,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_128,0);
        local_138 = 0;
        FUN_144bdc480(uVar9,&DAT_14996de1b,&local_138,0);
        FUN_144bdc690(&local_b8);
      }
      *param_2 = (int)param_5;
      return param_2;
    }
  }
  local_f0 = 0;
  local_100 = param_3;
  local_f8 = param_4;
  if (param_4 != 0) {
    local_f0 = FUN_144befdb0(param_4);
  }
  if ((local_f0 & 1) != 0) {
    FUN_144be6b20(local_f0 & 0xfffffffffffffffe);
  }
  FUN_144bf0830(&local_128,param_4,0);
  while ((puVar5 = local_128 + 1, local_128 + 1 < local_120 ||
         (cVar3 = FUN_144bf0850(&local_128), puVar5 = local_128, cVar3 != '\0'))) {
    local_128 = puVar5;
    pbVar10 = (byte *)FUN_144bf04d0(local_128,local_130);
    if ((*pbVar10 & 0x30) != 0) {
      FUN_144bebf80(&local_100,local_d0,*local_128);
      FUN_144bebf80(plVar2,local_e8,*local_128);
      piVar8 = (int *)FUN_144bec0a0(local_d0,&local_138,local_e8);
      param_5._0_4_ = *piVar8;
      if ((int)param_5 < 0) {
        if (DAT_14c7845c0 != '\0') {
          lVar6 = FUN_144bdc640(local_68,&DAT_14c784570,1);
          local_b8 = 2;
          *(char **)(lVar6 + 0x38) = "Reflect\\Impl\\hkHavokImpl.cpp";
          local_b0 = FUN_144be3510;
          local_a8 = "tgt.assign(src)";
          local_a0 = FUN_144bdef40;
          local_98 = &param_5;
          *(undefined8 *)(lVar6 + 0x40) = 0xc1;
          uVar9 = FUN_144bdc480(lVar6,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_b8,0);
          local_138 = 0;
          FUN_144bdc480(uVar9,&DAT_14996de1b,&local_138,0);
          FUN_144bdc690(local_68);
        }
        *param_2 = (int)param_5;
        if ((local_d8 & 1) != 0) {
          FUN_144be6b30(local_d8 & 0xfffffffffffffffe);
        }
        if ((local_c0 & 1) != 0) {
          FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
        }
        goto LAB_144bf2b85;
      }
      if ((local_d8 & 1) != 0) {
        FUN_144be6b30(local_d8 & 0xfffffffffffffffe);
      }
      if ((local_c0 & 1) != 0) {
        FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
      }
    }
  }
  *param_2 = 0;
LAB_144bf2b85:
  if ((local_f0 & 1) != 0) {
    FUN_144be6b30(local_f0 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144bf2bc0 FUN_144bf2bc0 body=181 status=ok
// SIG undefined FUN_144bf2bc0(void)

undefined4 *
FUN_144bf2bc0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  ulonglong uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144befdb0(param_4);
  }
  if ((uVar1 & 1) == 0) {
    *param_5 = param_3;
    param_5[1] = param_4;
  }
  else {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
    *param_5 = param_3;
    param_5[1] = param_4;
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_144be6b30(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf2c80 FUN_144bf2c80 body=97 status=ok
// SIG undefined FUN_144bf2c80(void)

undefined8 * FUN_144bf2c80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::HavokRecordImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf2cf0 FUN_144bf2cf0 body=120 status=ok
// SIG undefined FUN_144bf2cf0(void)

undefined4 *
FUN_144bf2cf0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_5 != 0) {
    iVar1 = FUN_144bfbbb0(param_5);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(longlong)(iVar1 + 1));
    FUN_144bfbed0(uVar2,param_5,(longlong)(iVar1 + 1));
  }
  *param_3 = uVar2;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf2d70 FUN_144bf2d70 body=21 status=ok
// SIG undefined FUN_144bf2d70(void)

undefined4 *
FUN_144bf2d70(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 144bf2d90 FUN_144bf2d90 body=59 status=ok
// SIG undefined FUN_144bf2d90(void)

void FUN_144bf2d90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar2 = FUN_144bfbbb0(lVar1);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),lVar1,(longlong)(iVar2 + 1));
  }
  return;
}



// FUNCTION 144bf2dd0 FUN_144bf2dd0 body=97 status=ok
// SIG undefined FUN_144bf2dd0(void)

undefined8 * FUN_144bf2dd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::HavokStringImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bf2e40 FUN_144bf2e40 body=97 status=ok
// SIG undefined FUN_144bf2e40(void)

undefined8 * FUN_144bf2e40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::ViewPointerImpl::vftable;
  FUN_144bf49b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf2eb0 FUN_144bf2eb0 body=1081 status=ok
// SIG undefined FUN_144bf2eb0(void)

int FUN_144bf2eb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong *in_stack_ffffffffffffff18;
  undefined4 uVar18;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  
  iVar17 = 0;
  FUN_144bf0830(&local_60,param_3,0);
  do {
    do {
      while( true ) {
        do {
          plVar15 = local_60 + 1;
          if ((local_58 <= local_60 + 1) &&
             (cVar2 = FUN_144bf0850(&local_60), plVar15 = local_60, cVar2 == '\0')) {
            if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
              FUN_144be6b30(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
            }
            return iVar17;
          }
          local_60 = plVar15;
          pbVar4 = (byte *)FUN_144bf04d0(local_60,local_80);
        } while ((*pbVar4 & 0x20) == 0);
        lVar8 = *local_60;
        local_b8 = lVar8;
        puVar5 = (undefined4 *)FUN_144bef800(lVar8,local_7c);
        lVar9 = local_b8;
        lVar16 = 0;
        if (((byte)*puVar5 & 0x1f) == 8) {
          lVar16 = lVar8;
        }
        if (lVar16 != 0) break;
        puVar5 = (undefined4 *)FUN_144bef800(local_b8,local_6c);
        lVar8 = 0;
        if (((byte)*puVar5 & 0x1f) == 7) {
          lVar8 = lVar9;
        }
        if (lVar8 != 0) {
          plVar15 = (longlong *)FUN_144bef430(lVar8,&local_d8,&DAT_14c6dec60);
          lVar9 = *plVar15;
          if ((local_c8 & 1) != 0) {
            FUN_144be6b30(local_c8 & 0xfffffffffffffffe);
          }
          uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          if (lVar9 != 0) {
            iVar13 = FUN_144bf0700(&local_b8);
            uVar7 = FUN_144bf0530(&local_b8);
            uVar7 = FUN_144bebf10(param_2,&local_d8,uVar7);
            in_stack_ffffffffffffff18 = (longlong *)CONCAT44(uVar18,param_5);
            iVar13 = FUN_144bf2eb0(param_1,uVar7,lVar8,param_4 + iVar13,in_stack_ffffffffffffff18);
            iVar17 = iVar17 + iVar13;
          }
        }
      }
      puVar6 = (undefined8 *)FUN_144befe50(lVar16,1);
      iVar13 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        iVar13 = (int)((ulonglong)*puVar6 >> 8);
      }
    } while (0 < iVar13);
    uVar7 = FUN_144bf0530(&local_b8);
    puVar6 = (undefined8 *)FUN_144bebf10(param_2,&local_d8,uVar7);
    uVar7 = 0;
    local_a8 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uVar12 = local_90;
    uVar14 = uStack_88;
    if ((puVar6[1] != 0) &&
       (puVar5 = (undefined4 *)FUN_144bef800(puVar6[1],local_78), uVar12 = local_90,
       uVar14 = uStack_88, ((byte)*puVar5 & 0x1f) == 8)) {
      uVar7 = *puVar6;
      uVar12 = puVar6[1];
      local_a8 = uVar7;
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        FUN_144be6b20(puVar6[2] & 0xfffffffffffffffe);
      }
      uVar14 = puVar6[2];
    }
    local_a0 = uVar14;
    if ((local_c8 & 1) != 0) {
      FUN_144be6b30(local_c8 & 0xfffffffffffffffe);
    }
    local_c8 = 0;
    in_stack_ffffffffffffff18 = &local_d8;
    local_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    plVar15 = (longlong *)(uVar14 & 0xfffffffffffffffe);
    (**(code **)(*plVar15 + 0x48))(plVar15,local_74,uVar7,uVar12,in_stack_ffffffffffffff18);
    iVar13 = (int)local_c8;
    if ((local_c0 & 1) != 0) {
      FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
    }
    if (0 < iVar13) {
      iVar13 = *(int *)((longlong)param_1 + 0x114);
      lVar8 = FUN_144befdb0(lVar16);
      lVar9 = FUN_144befdb0(&DAT_14c6daa80);
      if (lVar8 == lVar9) {
        local_b0 = 0;
      }
      else {
        lVar8 = FUN_144befdb0(lVar16);
        lVar9 = FUN_144befdb0(&DAT_14c6dab00);
        if (lVar8 != lVar9) goto LAB_144bf3203;
        local_b0 = 1;
      }
      in_stack_ffffffffffffff18 = (longlong *)FUN_144bf0530(&local_b8);
      FUN_144f6cbe0(param_1,local_b0,param_2,param_3,in_stack_ffffffffffffff18,param_4 + param_5);
      iVar17 = iVar17 + 1;
      FUN_144beff00(lVar16,&local_68);
      uVar7 = local_68;
      plVar10 = (longlong *)FUN_144bef430(local_68,&local_d8,&DAT_14c6dec60);
      lVar8 = *plVar10;
      if ((local_c8 & 1) != 0) {
        FUN_144be6b30(local_c8 & 0xfffffffffffffffe);
      }
      if (lVar8 != 0) {
        iVar1 = *(int *)(*param_1 + -8 + (longlong)(int)param_1[1] * 0x10);
        local_c8 = 0;
        in_stack_ffffffffffffff18 = &local_d8;
        local_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        (**(code **)(*plVar15 + 0x48))(plVar15,local_70,local_a8,uVar12,in_stack_ffffffffffffff18);
        iVar11 = 0;
        if (0 < (int)local_c8) {
          do {
            uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
            local_98 = local_c8._4_4_ * iVar11 + local_d8;
            local_90 = uStack_d0;
            uStack_88 = (ulonglong)((byte)local_c0 & 1) | local_c0 & 0xfffffffffffffffe;
            if ((ulonglong)((byte)local_c0 & 1) != 0) {
              FUN_144be6b20(local_c0 & 0xfffffffffffffffe);
            }
            in_stack_ffffffffffffff18 = (longlong *)CONCAT44(uVar18,iVar13);
            iVar3 = FUN_144bf2eb0(param_1,&local_98,uVar7,0,in_stack_ffffffffffffff18);
            iVar17 = iVar17 + iVar3;
            iVar13 = iVar13 + iVar1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)local_c8);
        }
        if ((local_c0 & 1) != 0) {
          FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
        }
      }
    }
LAB_144bf3203:
    if ((local_a0 & 1) != 0) {
      FUN_144be6b30(plVar15);
    }
  } while( true );
}



// FUNCTION 144bf32f0 FUN_144bf32f0 body=210 status=ok
// SIG undefined FUN_144bf32f0(void)

undefined4 FUN_144bf32f0(void *param_1,code *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 local_28 [16];
  
  plVar1 = (longlong *)FUN_144befe50(param_2,0x400000);
  if ((plVar1 == (longlong *)0x0) || (pcVar4 = (code *)*plVar1, pcVar4 == (code *)0x0)) {
    puVar2 = (undefined8 *)FUN_144befe50(param_2,0x40);
    pcVar4 = (code *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      pcVar4 = (code *)*puVar2;
    }
    if (pcVar4 == (code *)0x0) {
      return 1;
    }
  }
  if (pcVar4 != FUN_144bf35f0) {
    puVar3 = (undefined4 *)FUN_144bef800(param_2);
    pcVar5 = (code *)0x0;
    if (((byte)*puVar3 & 0x1f) == 7) {
      pcVar5 = param_2;
    }
    if (pcVar5 != (code *)0x0) {
      memset(param_1,0,(longlong)(param_3 * param_4));
    }
    FUN_144f69460(local_28,pcVar4,param_1,param_2,param_4);
  }
  return 0;
}



// FUNCTION 144bf3400 FUN_144bf3400 body=32 status=ok
// SIG undefined FUN_144bf3400(void)

undefined8 FUN_144bf3400(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144bf3420 FUN_144bf3420 body=458 status=ok
// SIG undefined FUN_144bf3420(void)

void FUN_144bf3420(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  puVar1 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
  uVar4 = 0;
  if (((byte)*puVar1 & 0x1f) == 8) {
    uVar4 = param_1;
  }
  FUN_144beff00(uVar4,&local_res8);
  plVar2 = (longlong *)FUN_144befe50(local_res8,0x40);
  if (plVar2 == (longlong *)0x0) {
LAB_144bf34a5:
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x40);
    *puVar3 = 0;
  }
  else if ((code *)*plVar2 == FUN_144bf35f0) {
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x40);
    *puVar3 = FUN_144bf35f0;
  }
  else {
    if ((code *)*plVar2 == (code *)0x0) goto LAB_144bf34a5;
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x40);
    *puVar3 = FUN_144bf5dd0;
  }
  FUN_144beff00(uVar4,&local_res8);
  plVar2 = (longlong *)FUN_144befe50(local_res8,0x80);
  if (plVar2 == (longlong *)0x0) {
LAB_144bf3519:
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x80);
    *puVar3 = 0;
  }
  else if ((code *)*plVar2 == FUN_144bf3630) {
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x80);
    *puVar3 = FUN_144bf3630;
  }
  else {
    if ((code *)*plVar2 == (code *)0x0) goto LAB_144bf3519;
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x80);
    *puVar3 = FUN_144bf5e70;
  }
  FUN_144beff00(uVar4,&local_res8);
  plVar2 = (longlong *)FUN_144befe50(local_res8,0x200);
  if (plVar2 != (longlong *)0x0) {
    if ((code *)*plVar2 == FUN_144bf3670) {
      puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x200);
      *puVar3 = FUN_144bf3670;
      goto LAB_144bf35a1;
    }
    if ((code *)*plVar2 != (code *)0x0) {
      puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x200);
      *puVar3 = FUN_144bf5f30;
      goto LAB_144bf35a1;
    }
  }
  puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x200);
  *puVar3 = 0;
LAB_144bf35a1:
  FUN_144beff00(uVar4,&local_res8);
  plVar2 = (longlong *)FUN_144befe50(local_res8,0x100);
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
    puVar3 = (undefined8 *)FUN_144befed0(uVar4,0x100);
    *puVar3 = FUN_144bf5ff0;
  }
  return;
}



// FUNCTION 144bf35f0 FUN_144bf35f0 body=50 status=ok
// SIG undefined FUN_144bf35f0(void)

void FUN_144bf35f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_144beec90(param_2);
  FUN_144bfb540(param_1,0,(longlong)(iVar1 * param_3));
  return;
}



// FUNCTION 144bf3630 FUN_144bf3630 body=64 status=ok
// SIG undefined FUN_144bf3630(void)

void FUN_144bf3630(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_144beec90(param_3);
  FUN_144bfb3c0(param_1,param_2,(longlong)(iVar1 * param_4));
  return;
}



// FUNCTION 144bf3670 FUN_144bf3670 body=64 status=ok
// SIG undefined FUN_144bf3670(void)

void FUN_144bf3670(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_144beec90(param_3);
  FUN_144bfb3c0(param_1,param_2,(longlong)(iVar1 * param_4));
  return;
}



// FUNCTION 144bf36b0 FUN_144bf36b0 body=219 status=ok
// SIG undefined FUN_144bf36b0(void)

undefined8 * FUN_144bf36b0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144beec90(param_3);
  _Dst = (void *)(**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
  memset(_Dst,0,(longlong)iVar1);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(param_3);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_144beee40(param_3);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst,uVar3);
  }
  *param_2 = _Dst;
  param_2[1] = param_3;
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144bf3790 FUN_144bf3790 body=27 status=ok
// SIG undefined FUN_144bf3790(void)

undefined8 FUN_144bf3790(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 144bf37b0 FUN_144bf37b0 body=58 status=ok
// SIG undefined FUN_144bf37b0(void)

void FUN_144bf37b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_vftable_14c6e47a0;
  iVar2 = FUN_144beec90(param_3);
  (**(code **)(puVar1 + 0x18))(&PTR_vftable_14c6e47a0,param_2,(longlong)iVar2);
  return;
}



// FUNCTION 144bf37f0 FUN_144bf37f0 body=97 status=ok
// SIG undefined FUN_144bf37f0(void)

undefined8 * FUN_144bf37f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::HeapAllocImpl::vftable;
  FUN_144be7ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144bf3860 FUN_144bf3860 body=57 status=ok
// SIG undefined FUN_144bf3860(void)

undefined4 *
FUN_144bf3860(undefined8 param_1,undefined4 *param_2,undefined1 *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if ((char)param_5[1] == '\0') {
    if (0xff < uVar1) goto LAB_144bf388f;
  }
  else {
    if (0x80 < uVar1) {
LAB_144bf388f:
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar1 = (ulonglong)(byte)-(char)uVar1;
  }
  *param_3 = (char)uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf38a0 FUN_144bf38a0 body=26 status=ok
// SIG undefined FUN_144bf38a0(void)

undefined4 *
FUN_144bf38a0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  byte bVar1;
  
  bVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)bVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 144bf38c0 FUN_144bf38c0 body=97 status=ok
// SIG undefined FUN_144bf38c0(void)

undefined8 * FUN_144bf38c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<char>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3930 FUN_144bf3930 body=21 status=ok
// SIG undefined FUN_144bf3930(void)

undefined4 *
FUN_144bf3930(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  *param_2 = 0;
  *(bool *)param_3 = param_5 != '\0';
  return param_2;
}



// FUNCTION 144bf3950 FUN_144bf3950 body=24 status=ok
// SIG undefined FUN_144bf3950(void)

undefined4 *
FUN_144bf3950(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  
  cVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = cVar1 != '\0';
  return param_2;
}



// FUNCTION 144bf3970 FUN_144bf3970 body=97 status=ok
// SIG undefined FUN_144bf3970(void)

undefined8 * FUN_144bf3970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::BoolImplN<bool>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf39e0 FUN_144bf39e0 body=21 status=ok
// SIG undefined FUN_144bf39e0(void)

undefined4 *
FUN_144bf39e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  *param_2 = 0;
  *(bool *)param_3 = param_5 != '\0';
  return param_2;
}



// FUNCTION 144bf3a00 FUN_144bf3a00 body=24 status=ok
// SIG undefined FUN_144bf3a00(void)

undefined4 *
FUN_144bf3a00(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  
  cVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = cVar1 != '\0';
  return param_2;
}



// FUNCTION 144bf3a20 FUN_144bf3a20 body=97 status=ok
// SIG undefined FUN_144bf3a20(void)

undefined8 * FUN_144bf3a20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::BoolImplN<unsigned_char>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3a90 FUN_144bf3a90 body=72 status=ok
// SIG undefined FUN_144bf3a90(void)

undefined4 *
FUN_144bf3a90(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7f) {
    cVar3 = (char)*param_5;
    *param_2 = 0;
    cVar2 = -cVar3;
    if ((char)uVar1 == '\0') {
      cVar2 = cVar3;
    }
    *param_3 = cVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf3ae0 FUN_144bf3ae0 body=47 status=ok
// SIG undefined FUN_144bf3ae0(void)

undefined4 *
FUN_144bf3ae0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             longlong *param_5)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *param_3;
  lVar2 = (longlong)(char)bVar1;
  if ((char)bVar1 < '\0') {
    lVar2 = (longlong)~(int)(char)bVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = bVar1 >> 7;
  return param_2;
}



// FUNCTION 144bf3b10 FUN_144bf3b10 body=97 status=ok
// SIG undefined FUN_144bf3b10(void)

undefined8 * FUN_144bf3b10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<signed_char>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3b80 FUN_144bf3b80 body=42 status=ok
// SIG undefined FUN_144bf3b80(void)

undefined4 *
FUN_144bf3b80(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((byte)param_5[1] == 0) && ((ulonglong)(byte)*param_5 == *param_5)) {
    *param_3 = (byte)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf3bb0 FUN_144bf3bb0 body=26 status=ok
// SIG undefined FUN_144bf3bb0(void)

undefined4 *
FUN_144bf3bb0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  byte bVar1;
  
  bVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)bVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 144bf3bd0 FUN_144bf3bd0 body=97 status=ok
// SIG undefined FUN_144bf3bd0(void)

undefined8 * FUN_144bf3bd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_char>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3c40 FUN_144bf3c40 body=69 status=ok
// SIG undefined FUN_144bf3c40(void)

undefined4 *
FUN_144bf3c40(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  short sVar2;
  short sVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fff) {
    sVar3 = (short)*param_5;
    *param_2 = 0;
    sVar2 = -sVar3;
    if ((char)uVar1 == '\0') {
      sVar2 = sVar3;
    }
    *param_3 = sVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf3c90 FUN_144bf3c90 body=49 status=ok
// SIG undefined FUN_144bf3c90(void)

undefined4 *
FUN_144bf3c90(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             longlong *param_5)

{
  short sVar1;
  longlong lVar2;
  
  sVar1 = *param_3;
  lVar2 = (longlong)sVar1;
  if (sVar1 < 0) {
    lVar2 = (longlong)~(int)sVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((ushort)sVar1 >> 0xf);
  return param_2;
}



// FUNCTION 144bf3cd0 FUN_144bf3cd0 body=97 status=ok
// SIG undefined FUN_144bf3cd0(void)

undefined8 * FUN_144bf3cd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<short>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3d40 FUN_144bf3d40 body=43 status=ok
// SIG undefined FUN_144bf3d40(void)

undefined4 *
FUN_144bf3d40(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(ushort)*param_5 == *param_5)) {
    *param_3 = (ushort)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf3d70 FUN_144bf3d70 body=26 status=ok
// SIG undefined FUN_144bf3d70(void)

undefined4 *
FUN_144bf3d70(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 144bf3d90 FUN_144bf3d90 body=97 status=ok
// SIG undefined FUN_144bf3d90(void)

undefined8 * FUN_144bf3d90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_short>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3e00 FUN_144bf3e00 body=65 status=ok
// SIG undefined FUN_144bf3e00(void)

undefined4 *
FUN_144bf3e00(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fffffff) {
    iVar3 = (int)*param_5;
    *param_2 = 0;
    iVar2 = -iVar3;
    if ((char)uVar1 == '\0') {
      iVar2 = iVar3;
    }
    *param_3 = iVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf3e50 FUN_144bf3e50 body=46 status=ok
// SIG undefined FUN_144bf3e50(void)

undefined4 *
FUN_144bf3e50(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_3;
  lVar2 = (longlong)(int)uVar1;
  if ((int)uVar1 < 0) {
    lVar2 = (longlong)(int)~uVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)(uVar1 >> 0x1f);
  return param_2;
}



// FUNCTION 144bf3e80 FUN_144bf3e80 body=97 status=ok
// SIG undefined FUN_144bf3e80(void)

undefined8 * FUN_144bf3e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<int>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3ef0 FUN_144bf3ef0 body=41 status=ok
// SIG undefined FUN_144bf3ef0(void)

undefined4 *
FUN_144bf3ef0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(uint)*param_5 == *param_5)) {
    *param_3 = (uint)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf3f20 FUN_144bf3f20 body=25 status=ok
// SIG undefined FUN_144bf3f20(void)

undefined4 *
FUN_144bf3f20(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 144bf3f40 FUN_144bf3f40 body=97 status=ok
// SIG undefined FUN_144bf3f40(void)

undefined8 * FUN_144bf3f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_int>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf3fb0 FUN_144bf3fb0 body=65 status=ok
// SIG undefined FUN_144bf3fb0(void)

undefined4 *
FUN_144bf3fb0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fffffff) {
    iVar3 = (int)*param_5;
    *param_2 = 0;
    iVar2 = -iVar3;
    if ((char)uVar1 == '\0') {
      iVar2 = iVar3;
    }
    *param_3 = iVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf4000 FUN_144bf4000 body=46 status=ok
// SIG undefined FUN_144bf4000(void)

undefined4 *
FUN_144bf4000(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_3;
  lVar2 = (longlong)(int)uVar1;
  if ((int)uVar1 < 0) {
    lVar2 = (longlong)(int)~uVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)(uVar1 >> 0x1f);
  return param_2;
}



// FUNCTION 144bf4030 FUN_144bf4030 body=97 status=ok
// SIG undefined FUN_144bf4030(void)

undefined8 * FUN_144bf4030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<long>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf40a0 FUN_144bf40a0 body=41 status=ok
// SIG undefined FUN_144bf40a0(void)

undefined4 *
FUN_144bf40a0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(uint)*param_5 == *param_5)) {
    *param_3 = (uint)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf40d0 FUN_144bf40d0 body=25 status=ok
// SIG undefined FUN_144bf40d0(void)

undefined4 *
FUN_144bf40d0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 144bf40f0 FUN_144bf40f0 body=97 status=ok
// SIG undefined FUN_144bf40f0(void)

undefined8 * FUN_144bf40f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_long>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4160 FUN_144bf4160 body=70 status=ok
// SIG undefined FUN_144bf4160(void)

undefined4 *
FUN_144bf4160(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if (uVar1 <= (ulonglong)((char)param_5[1] != '\0') + 0x7fffffffffffffff) {
    if ((char)param_5[1] != '\0') {
      uVar1 = -uVar1;
    }
    *param_3 = uVar1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf41b0 FUN_144bf41b0 body=39 status=ok
// SIG undefined FUN_144bf41b0(void)

undefined4 *
FUN_144bf41b0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  lVar2 = lVar1;
  if (lVar1 < 0) {
    lVar2 = -lVar1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((ulonglong)lVar1 >> 0x3f);
  return param_2;
}



// FUNCTION 144bf41e0 FUN_144bf41e0 body=97 status=ok
// SIG undefined FUN_144bf41e0(void)

undefined8 * FUN_144bf41e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<__int64>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4250 FUN_144bf4250 body=37 status=ok
// SIG undefined FUN_144bf4250(void)

undefined4 *
FUN_144bf4250(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  if (*(char *)(param_5 + 1) == '\0') {
    *param_3 = *param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bf4280 FUN_144bf4280 body=25 status=ok
// SIG undefined FUN_144bf4280(void)

undefined4 *
FUN_144bf4280(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 144bf42a0 FUN_144bf42a0 body=97 status=ok
// SIG undefined FUN_144bf42a0(void)

undefined8 * FUN_144bf42a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned___int64>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4310 FUN_144bf4310 body=25 status=ok
// SIG undefined FUN_144bf4310(void)

undefined4 *
FUN_144bf4310(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (float)param_5;
  return param_2;
}



// FUNCTION 144bf4330 FUN_144bf4330 body=27 status=ok
// SIG undefined FUN_144bf4330(void)

undefined4 *
FUN_144bf4330(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double *param_5)

{
  float fVar1;
  
  fVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)fVar1;
  return param_2;
}



// FUNCTION 144bf4350 FUN_144bf4350 body=97 status=ok
// SIG undefined FUN_144bf4350(void)

undefined8 * FUN_144bf4350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::FloatImplN<float>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf43c0 FUN_144bf43c0 body=21 status=ok
// SIG undefined FUN_144bf43c0(void)

undefined4 *
FUN_144bf43c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf43e0 FUN_144bf43e0 body=21 status=ok
// SIG undefined FUN_144bf43e0(void)

undefined4 *
FUN_144bf43e0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 144bf4400 FUN_144bf4400 body=97 status=ok
// SIG undefined FUN_144bf4400(void)

undefined8 * FUN_144bf4400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::FloatImplN<double>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4470 FUN_144bf4470 body=58 status=ok
// SIG undefined FUN_144bf4470(void)

undefined4 *
FUN_144bf4470(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (short)((uint)((float)param_5 * 1.0039062) >> 0x10);
  return param_2;
}



// FUNCTION 144bf44b0 FUN_144bf44b0 body=33 status=ok
// SIG undefined FUN_144bf44b0(void)

undefined4 *
FUN_144bf44b0(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             double *param_5)

{
  short sVar1;
  
  sVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)((int)sVar1 << 0x10);
  return param_2;
}



// FUNCTION 144bf44e0 FUN_144bf44e0 body=97 status=ok
// SIG undefined FUN_144bf44e0(void)

undefined8 * FUN_144bf44e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::FloatImplN<hkHalf16>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4550 FUN_144bf4550 body=203 status=ok
// SIG undefined FUN_144bf4550(void)

undefined4 *
FUN_144bf4550(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong local_res10;
  
  puVar3 = (undefined8 *)FUN_144befe50(param_4,1);
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)((ulonglong)*puVar3 >> 8);
  }
  FUN_144beff00(param_4,&local_res10);
  uVar2 = 0;
  uVar4 = 0;
  if (local_res10 != 0) {
    uVar2 = FUN_144beec90(local_res10);
    uVar4 = FUN_144befdb0(local_res10);
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
  }
  *param_5 = param_3;
  param_5[1] = local_res10;
  *(undefined4 *)(param_5 + 2) = uVar5;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar2;
  uVar1 = param_5[3];
  param_5[3] = uVar4;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4620 FUN_144bf4620 body=64 status=ok
// SIG undefined FUN_144bf4620(void)

undefined4 *
FUN_144bf4620(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)FUN_144befe50(param_4,1);
  iVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    iVar3 = (int)((ulonglong)*puVar1 >> 8);
  }
  uVar2 = 0;
  if (param_5 != iVar3) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 144bf4660 FUN_144bf4660 body=141 status=ok
// SIG undefined FUN_144bf4660(void)

bool FUN_144bf4660(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  int param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  if (param_4 != 0) {
    FUN_144beff00(param_3,&local_res20);
    cVar1 = FUN_144bef570(param_4,local_res20);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_144befe50(param_3,1);
      if (puVar2 != (undefined8 *)0x0) {
        return param_5 != (int)((ulonglong)*puVar2 >> 8);
      }
      return param_5 != 0;
    }
  }
  return true;
}



// FUNCTION 144bf46f0 FUN_144bf46f0 body=97 status=ok
// SIG undefined FUN_144bf46f0(void)

undefined8 * FUN_144bf46f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::RepeatImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4760 FUN_144bf4760 body=18 status=ok
// SIG undefined FUN_144bf4760(void)

undefined4 *
FUN_144bf4760(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4780 FUN_144bf4780 body=21 status=ok
// SIG undefined FUN_144bf4780(void)

undefined4 *
FUN_144bf4780(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 144bf47a0 FUN_144bf47a0 body=97 status=ok
// SIG undefined FUN_144bf47a0(void)

undefined8 * FUN_144bf47a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::StaticStringImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4810 FUN_144bf4810 body=128 status=ok
// SIG undefined FUN_144bf4810(void)

undefined4 *
FUN_144bf4810(undefined8 param_1,undefined4 *param_2,void *param_3,undefined8 param_4,void *param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_5 != (void *)0x0) {
    iVar1 = FUN_144beec90(param_4);
    uVar2 = 0xffffffffffffffff;
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 + 1;
    } while (*(char *)((longlong)param_5 + uVar2) != '\0');
    if ((ulonglong)(longlong)iVar1 <= uVar2) {
      *param_2 = 0x80040200;
      return param_2;
    }
    memcpy(param_3,param_5,uVar3 + 2);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4890 FUN_144bf4890 body=18 status=ok
// SIG undefined FUN_144bf4890(void)

undefined4 *
FUN_144bf4890(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_2 = 0;
  *param_5 = param_3;
  return param_2;
}



// FUNCTION 144bf48b0 FUN_144bf48b0 body=89 status=ok
// SIG undefined FUN_144bf48b0(void)

undefined4 *
FUN_144bf48b0(undefined8 param_1,undefined4 *param_2,void *param_3,undefined8 param_4,void *param_5,
             undefined8 param_6,int param_7)

{
  int iVar1;
  
  iVar1 = FUN_144beec90(param_4);
  if (iVar1 < param_7) {
    *param_2 = 0x80040200;
    return param_2;
  }
  memcpy(param_3,param_5,(longlong)param_7);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4910 FUN_144bf4910 body=97 status=ok
// SIG undefined FUN_144bf4910(void)

undefined8 * FUN_144bf4910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::CharBufferImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4980 FUN_144bf4980 body=33 status=ok
// SIG undefined FUN_144bf4980(void)

undefined8 * FUN_144bf4980(undefined8 *param_1)

{
  FUN_144be6ac0();
  *param_1 = hkReflect::Detail::RawPointerImpl::vftable;
  return param_1;
}



// FUNCTION 144bf49b0 FUN_144bf49b0 body=15 status=ok
// SIG undefined FUN_144bf49b0(void)

void FUN_144bf49b0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::RawPointerImpl::vftable;
  FUN_144be6ae0();
  return;
}



// FUNCTION 144bf49c0 FUN_144bf49c0 body=166 status=ok
// SIG undefined FUN_144bf49c0(void)

undefined4 *
FUN_144bf49c0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  FUN_144beff00(param_4,local_18);
  plVar2 = param_5;
  lVar1 = param_5[1];
  puVar4 = (uint *)FUN_144bef800(local_18[0],&param_5);
  lVar5 = 0;
  if ((*puVar4 & 0x1f) == 0) {
    lVar5 = local_18[0];
  }
  if ((((lVar5 == 0) && (lVar1 != 0)) && (cVar3 = FUN_144b45dd0(lVar1,local_18[0]), cVar3 == '\0'))
     && (*plVar2 != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_3 = *plVar2;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4a70 FUN_144bf4a70 body=168 status=ok
// SIG undefined FUN_144bf4a70(void)

undefined4 *
FUN_144bf4a70(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res10;
  undefined8 local_18;
  longlong local_10;
  
  uVar1 = *param_3;
  FUN_144beff00(param_4,&local_res10);
  FUN_144beec10(&local_18,uVar1,local_res10);
  if (local_10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_10);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  *param_5 = local_18;
  param_5[1] = local_10;
  uVar2 = param_5[2];
  param_5[2] = uVar3;
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4b20 FUN_144bf4b20 body=142 status=ok
// SIG undefined FUN_144bf4b20(void)

undefined8
FUN_144bf4b20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint *puVar3;
  undefined8 local_res10;
  undefined8 local_18;
  longlong local_10;
  
  uVar1 = *param_2;
  FUN_144beff00(param_3,&local_res10);
  FUN_144beec10(&local_18,uVar1,local_res10);
  if (local_10 != 0) {
    cVar2 = FUN_144b45dd0(local_10,param_4);
    if (cVar2 != '\0') {
      puVar3 = (uint *)FUN_144b45d50(local_10,&local_res10);
      if ((*puVar3 >> 3 & 1) == 0) {
        return local_18;
      }
    }
  }
  return 0;
}



// FUNCTION 144bf4bb0 FUN_144bf4bb0 body=51 status=ok
// SIG undefined FUN_144bf4bb0(void)

undefined8 FUN_144bf4bb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_18 [2];
  
  uVar1 = *param_2;
  FUN_144beff00(param_3,local_res10);
  FUN_144beec10(local_18,uVar1,local_res10[0]);
  return local_18[0];
}



// FUNCTION 144bf4bf0 FUN_144bf4bf0 body=18 status=ok
// SIG undefined FUN_144bf4bf0(void)

undefined4 *
FUN_144bf4bf0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4c10 FUN_144bf4c10 body=97 status=ok
// SIG undefined FUN_144bf4c10(void)

undefined8 * FUN_144bf4c10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::RawPointerImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4c80 FUN_144bf4c80 body=24 status=ok
// SIG undefined FUN_144bf4c80(void)

uint * FUN_144bf4c80(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                    longlong *param_5)

{
  *param_2 = -(uint)(*param_5 != 0) & 0x80040200;
  return param_2;
}



// FUNCTION 144bf4ca0 FUN_144bf4ca0 body=24 status=ok
// SIG undefined FUN_144bf4ca0(void)

undefined4 *
FUN_144bf4ca0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_2 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return param_2;
}



// FUNCTION 144bf4cc0 FUN_144bf4cc0 body=3 status=ok
// SIG undefined FUN_144bf4cc0(void)

undefined8 FUN_144bf4cc0(void)

{
  return 0;
}



// FUNCTION 144bf4cd0 FUN_144bf4cd0 body=51 status=ok
// SIG undefined FUN_144bf4cd0(void)

undefined8 FUN_144bf4cd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_18 [2];
  
  uVar1 = *param_2;
  FUN_144beff00(param_3,local_res10);
  FUN_144beec10(local_18,uVar1,local_res10[0]);
  return local_18[0];
}



// FUNCTION 144bf4d10 FUN_144bf4d10 body=10 status=ok
// SIG undefined FUN_144bf4d10(void)

undefined4 * FUN_144bf4d10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf4d20 FUN_144bf4d20 body=97 status=ok
// SIG undefined FUN_144bf4d20(void)

undefined8 * FUN_144bf4d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::NullptrImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf4d90 FUN_144bf4d90 body=219 status=ok
// SIG undefined FUN_144bf4d90(void)

undefined8 * FUN_144bf4d90(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144beec90(param_2);
  _Dst = (void *)(**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
  memset(_Dst,0,(longlong)iVar1);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(param_2);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_144beee40(param_2);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst,uVar3);
  }
  *param_1 = _Dst;
  param_1[1] = param_2;
  param_1[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144bf4e90 FUN_144bf4e90 body=336 status=ok
// SIG undefined FUN_144bf4e90(void)

void FUN_144bf4e90(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  iVar4 = FUN_144beec90(param_2);
  FUN_144bfbef0(param_1,0,(longlong)(iVar4 * param_3));
  puVar6 = (undefined4 *)FUN_144bef800(param_2,local_res18);
  lVar7 = 0;
  if (((byte)*puVar6 & 0x1f) == 7) {
    lVar7 = param_2;
  }
  if ((lVar7 != 0) && (lVar7 = FUN_144beff80(), lVar7 != 0)) {
    uVar5 = FUN_144beec90(param_2);
    FUN_144bf5ce0(param_1,lVar7,param_3,uVar5);
  }
  puVar8 = (undefined8 *)FUN_144befe50(param_2,0x800000);
  if ((puVar8 != (undefined8 *)0x0) && (psVar2 = (short *)*puVar8, psVar2 != (short *)0x0)) {
    psVar1 = psVar2 + ((longlong)*psVar2 + 1) * 4;
joined_r0x000144bf4f40:
    psVar2 = psVar2 + 4;
    if (psVar2 != psVar1) {
      uVar3 = *(undefined8 *)psVar2;
      local_res10 = uVar3;
      iVar4 = FUN_144bf0700(&local_res10);
      uVar5 = FUN_144beec90(param_2);
      plVar9 = (longlong *)FUN_144befe50(uVar3,0x40);
      if (plVar9 != (longlong *)0x0) goto code_r0x000144bf4f91;
      pcVar10 = (code *)0x0;
      goto LAB_144bf4fa4;
    }
  }
  return;
code_r0x000144bf4f91:
  pcVar10 = (code *)*plVar9;
  if (pcVar10 != FUN_144bf35f0) {
LAB_144bf4fa4:
    FUN_144bf5ba0(pcVar10,iVar4 + param_1,uVar3,param_3,uVar5);
  }
  goto joined_r0x000144bf4f40;
}



// FUNCTION 144bf4fe0 FUN_144bf4fe0 body=410 status=ok
// SIG undefined FUN_144bf4fe0(void)

void FUN_144bf4fe0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  code *pcVar11;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  iVar4 = FUN_144beec90(param_3);
  FUN_144bfbee0(param_1,param_2,(longlong)(iVar4 * param_4));
  puVar7 = (undefined4 *)FUN_144bef800(param_3,local_res20);
  lVar8 = 0;
  if (((byte)*puVar7 & 0x1f) == 7) {
    lVar8 = param_3;
  }
  if ((lVar8 != 0) && (lVar8 = FUN_144beff80(), lVar8 != 0)) {
    uVar5 = FUN_144beec90(param_3);
    FUN_144bf5d50(param_1,param_2,lVar8,param_4,uVar5);
    FUN_144f69f30(local_res20,param_1,param_3,param_4);
  }
  puVar9 = (undefined8 *)FUN_144befe50(param_3,0x800000);
  if ((puVar9 != (undefined8 *)0x0) && (psVar2 = (short *)*puVar9, psVar2 != (short *)0x0)) {
    psVar1 = psVar2 + ((longlong)*psVar2 + 1) * 4;
joined_r0x000144bf50b1:
    psVar2 = psVar2 + 4;
    if (psVar2 != psVar1) {
      uVar3 = *(undefined8 *)psVar2;
      local_res18 = uVar3;
      iVar4 = FUN_144bf0700(&local_res18);
      iVar6 = FUN_144bf0700(&local_res18);
      uVar5 = FUN_144beec90(param_3);
      plVar10 = (longlong *)FUN_144befe50(uVar3,0x80);
      if (plVar10 != (longlong *)0x0) goto code_r0x000144bf5118;
      pcVar11 = (code *)0x0;
      goto LAB_144bf512b;
    }
  }
  return;
code_r0x000144bf5118:
  pcVar11 = (code *)*plVar10;
  if (pcVar11 != FUN_144bf3630) {
LAB_144bf512b:
    FUN_144bf5c30(pcVar11,param_1 + iVar6,param_2 + iVar4,uVar3,param_4,uVar5);
  }
  goto joined_r0x000144bf50b1;
}



// FUNCTION 144bf5180 FUN_144bf5180 body=652 status=ok
// SIG undefined FUN_144bf5180(void)

void FUN_144bf5180(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  short *psVar12;
  code *pcVar13;
  undefined4 local_48 [2];
  short *local_40;
  short *local_38;
  
  puVar8 = (undefined8 *)FUN_144befe50(param_3,0x800000);
  if ((puVar8 != (undefined8 *)0x0) && (local_38 = (short *)*puVar8, local_38 != (short *)0x0)) {
    sVar1 = *local_38;
    psVar12 = local_38 + 4;
    local_38 = local_38 + (longlong)sVar1 * 4 + 4;
    local_40 = psVar12;
    puVar9 = (undefined4 *)FUN_144bef800(param_3,local_48);
    lVar10 = 0;
    if (((byte)*puVar9 & 0x1f) == 7) {
      lVar10 = param_3;
    }
    if ((lVar10 != 0) && (lVar10 = FUN_144beff80(), lVar10 != 0)) {
      puVar8 = (undefined8 *)FUN_144befe50(lVar10,0x200);
      if (puVar8 == (undefined8 *)0x0) {
        pcVar13 = (code *)0x0;
      }
      else {
        pcVar13 = (code *)*puVar8;
      }
      if ((int)((longlong)sVar1 * 8 >> 3) == 0) {
        (*pcVar13)(param_1,param_2,lVar10,param_4);
      }
      else {
        iVar4 = FUN_144bf0700(psVar12);
        iVar5 = FUN_144beec90(lVar10);
        if (iVar4 < iVar5) {
          if (pcVar13 == FUN_144bf3670) {
            iVar4 = 0;
            if (0 < param_4) {
              do {
                iVar5 = FUN_144beec90(param_3);
                iVar3 = FUN_144beec90(param_3);
                iVar6 = FUN_144bf0700(psVar12);
                FUN_144bfbee0(param_1 + iVar3 * iVar4,iVar5 * iVar4 + param_2,(longlong)iVar6);
                iVar4 = iVar4 + 1;
              } while (iVar4 < param_4);
            }
          }
          else {
            uVar7 = FUN_144beec90(param_3);
            FUN_144bf5c30(pcVar13,param_1,param_2,lVar10,param_4,uVar7);
          }
        }
        else {
          iVar4 = 0;
          if (0 < param_4) {
            do {
              iVar5 = FUN_144beec90(param_3);
              iVar3 = FUN_144beec90(param_3);
              (*pcVar13)(iVar3 * iVar4 + param_1,iVar5 * iVar4 + param_2,lVar10,1);
              iVar4 = iVar4 + 1;
              psVar12 = local_40;
            } while (iVar4 < param_4);
          }
        }
      }
    }
    if (psVar12 != local_38) {
      do {
        psVar2 = *(short **)psVar12;
        local_40 = psVar2;
        iVar4 = FUN_144bf0700(&local_40);
        iVar5 = FUN_144bf0700(&local_40);
        local_48[0] = FUN_144beec90(param_3);
        puVar8 = (undefined8 *)FUN_144befe50(psVar2,0x200);
        if (puVar8 == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar8;
        }
        FUN_144bf5c30(uVar11,iVar5 + param_1,iVar4 + param_2,psVar2,param_4,local_48[0]);
        psVar12 = psVar12 + 4;
      } while (psVar12 != local_38);
    }
  }
  return;
}



// FUNCTION 144bf5410 FUN_144bf5410 body=354 status=ok
// SIG undefined FUN_144bf5410(void)

void FUN_144bf5410(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 local_res10;
  
  puVar7 = (undefined8 *)FUN_144befe50(param_2,0x800000);
  if ((puVar7 != (undefined8 *)0x0) && (psVar2 = (short *)*puVar7, psVar2 != (short *)0x0)) {
    psVar1 = psVar2 + 4 + (longlong)*psVar2 * 4;
    while (psVar1 != psVar2 + 4) {
      uVar3 = *(undefined8 *)(psVar1 + -4);
      psVar1 = psVar1 + -4;
      local_res10 = uVar3;
      iVar4 = FUN_144beec90(param_2);
      iVar5 = FUN_144bf0700(&local_res10);
      iVar6 = FUN_144beec90(param_2);
      plVar8 = (longlong *)FUN_144befe50(uVar3,0x100);
      if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
        FUN_144bf5ba0(*plVar8,(iVar5 + iVar4 * (param_3 + -1)) + param_1,uVar3,param_3,-iVar6);
      }
    }
  }
  puVar9 = (undefined4 *)FUN_144bef800(param_2,&local_res10);
  lVar10 = 0;
  if (((byte)*puVar9 & 0x1f) == 7) {
    lVar10 = param_2;
  }
  if ((lVar10 != 0) && (lVar10 = FUN_144beff80(), lVar10 != 0)) {
    iVar4 = FUN_144beec90(param_2);
    iVar5 = FUN_144beec90(param_2);
    plVar8 = (longlong *)FUN_144befe50(lVar10,0x100);
    if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
      FUN_144bf5ba0(*plVar8,iVar4 * (param_3 + -1) + param_1,lVar10,param_3,-iVar5);
    }
  }
  return;
}



// FUNCTION 144bf5580 FUN_144bf5580 body=33 status=ok
// SIG undefined FUN_144bf5580(void)

void FUN_144bf5580(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(&DAT_149983bc0,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144bf55b0 FUN_144bf55b0 body=33 status=ok
// SIG undefined FUN_144bf55b0(void)

void FUN_144bf55b0(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(&DAT_149983c28,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144bf55e0 FUN_144bf55e0 body=33 status=ok
// SIG undefined FUN_144bf55e0(void)

void FUN_144bf55e0(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(&DAT_149983c70,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144bf5610 FUN_144bf5610 body=438 status=ok
// SIG undefined FUN_144bf5610(void)

undefined4 *
FUN_144bf5610(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong local_res10;
  undefined8 local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  
  FUN_144beff00(param_4,&local_res10);
  lVar1 = *param_3;
  if (lVar1 == 0) {
    FUN_144beff00(param_4,&local_res10);
    if (local_res10 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144befdb0(local_res10);
    }
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
    *param_5 = 0;
    param_5[1] = local_res10;
    uVar6 = param_5[2];
    param_5[2] = uVar4;
  }
  else {
    plVar3 = (longlong *)FUN_144befde0(local_res10,0x800);
    if ((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) {
      param_3 = (longlong *)*param_3;
      if (param_3 == (longlong *)0x0) {
        local_38 = 0;
        lStack_30 = 0;
      }
      else if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_144beec10(local_28,param_3,&DAT_14c6dc390);
        local_38 = *puVar5;
        lStack_30 = puVar5[1];
      }
      else {
        (**(code **)*param_3)(param_3,&local_38);
      }
      lVar1 = lStack_30;
      if (lStack_30 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_144befdb0(lStack_30);
      }
      if ((uVar4 & 1) != 0) {
        FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      }
      *param_5 = local_38;
      param_5[1] = lVar1;
      uVar6 = param_5[2];
      param_5[2] = uVar4;
    }
    else {
      FUN_144beec10(&local_38,lVar1,local_res10);
      lVar1 = lStack_30;
      uVar2 = local_38;
      if (lStack_30 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_144befdb0(lStack_30);
      }
      if ((uVar4 & 1) != 0) {
        FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      }
      *param_5 = uVar2;
      param_5[1] = lVar1;
      uVar6 = param_5[2];
      param_5[2] = uVar4;
    }
  }
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf57d0 FUN_144bf57d0 body=192 status=ok
// SIG undefined FUN_144bf57d0(void)

undefined4 *
FUN_144bf57d0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  FUN_144beff00(param_4,local_18);
  plVar2 = param_5;
  lVar1 = param_5[1];
  puVar4 = (uint *)FUN_144bef800(local_18[0],&param_5);
  lVar5 = 0;
  if ((*puVar4 & 0x1f) == 0) {
    lVar5 = local_18[0];
  }
  if ((((lVar5 == 0) && (lVar1 != 0)) && (cVar3 = FUN_144b45dd0(lVar1,local_18[0]), cVar3 == '\0'))
     && (*plVar2 != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar1 = *plVar2;
  lVar5 = *param_3;
  *param_3 = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  if (lVar5 != 0) {
    FUN_144b3f230(lVar5);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf5890 FUN_144bf5890 body=97 status=ok
// SIG undefined FUN_144bf5890(void)

undefined8 * FUN_144bf5890(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::RawPointerImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf5900 FUN_144bf5900 body=185 status=ok
// SIG undefined FUN_144bf5900(void)

undefined4 *
FUN_144bf5900(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_28 [2];
  
  plVar2 = param_5;
  if (*param_5 == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_144beff00(param_4,local_28);
  lVar1 = plVar2[1];
  puVar4 = (uint *)FUN_144bef800(local_28[0],&param_5);
  uVar6 = 0;
  lVar5 = 0;
  if ((*puVar4 & 0x1f) == 0) {
    lVar5 = local_28[0];
  }
  if ((lVar5 == 0) && (lVar1 != 0)) {
    cVar3 = FUN_144b45dd0(lVar1,local_28[0]);
    if ((cVar3 == '\0') && (*plVar2 != 0)) {
      uVar6 = 0x80040200;
      goto LAB_144bf599c;
    }
  }
  *param_3 = *plVar2;
LAB_144bf599c:
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 144bf59c0 FUN_144bf59c0 body=3 status=ok
// SIG undefined FUN_144bf59c0(void)

undefined1 FUN_144bf59c0(void)

{
  return 0;
}



// FUNCTION 144bf59d0 FUN_144bf59d0 body=97 status=ok
// SIG undefined FUN_144bf59d0(void)

undefined8 * FUN_144bf59d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::RawPointerImpl::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf5a40 FUN_144bf5a40 body=23 status=ok
// SIG undefined FUN_144bf5a40(void)

undefined4 *
FUN_144bf5a40(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,char param_5
             )

{
  *param_2 = 0;
  *param_3 = (ushort)(param_5 != '\0');
  return param_2;
}



// FUNCTION 144bf5a60 FUN_144bf5a60 body=25 status=ok
// SIG undefined FUN_144bf5a60(void)

undefined4 *
FUN_144bf5a60(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             undefined8 param_5)

{
  short sVar1;
  
  sVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = sVar1 != 0;
  return param_2;
}



// FUNCTION 144bf5a80 FUN_144bf5a80 body=97 status=ok
// SIG undefined FUN_144bf5a80(void)

undefined8 * FUN_144bf5a80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::BoolImplN<unsigned_short>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf5af0 FUN_144bf5af0 body=22 status=ok
// SIG undefined FUN_144bf5af0(void)

undefined4 *
FUN_144bf5af0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,char param_5)

{
  *param_2 = 0;
  *param_3 = (uint)(param_5 != '\0');
  return param_2;
}



// FUNCTION 144bf5b10 FUN_144bf5b10 body=24 status=ok
// SIG undefined FUN_144bf5b10(void)

undefined4 *
FUN_144bf5b10(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = iVar1 != 0;
  return param_2;
}



// FUNCTION 144bf5b30 FUN_144bf5b30 body=97 status=ok
// SIG undefined FUN_144bf5b30(void)

undefined8 * FUN_144bf5b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::BoolImplN<unsigned_int>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf5ba0 FUN_144bf5ba0 body=129 status=ok
// SIG undefined FUN_144bf5ba0(void)

void FUN_144bf5ba0(code *param_1,longlong param_2,undefined8 param_3,uint param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_4;
  iVar1 = FUN_144beec90(param_3);
  if (param_5 == iVar1) {
    (*param_1)(param_2,param_3,param_4);
  }
  else if (0 < (int)param_4) {
    do {
      (*param_1)(param_2,param_3,1);
      param_2 = param_2 + param_5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144bf5c30 FUN_144bf5c30 body=164 status=ok
// SIG undefined FUN_144bf5c30(void)

void FUN_144bf5c30(code *UNRECOVERED_JUMPTABLE,longlong param_2,longlong param_3,undefined8 param_4,
                  uint param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_144beec90(param_4);
  if (param_6 != iVar1) {
    if (0 < (int)param_5) {
      param_3 = param_3 - param_2;
      uVar2 = (ulonglong)param_5;
      do {
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3 + param_2,param_4,1);
        param_2 = param_2 + param_6;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bf5c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 144bf5ce0 FUN_144bf5ce0 body=108 status=ok
// SIG undefined FUN_144bf5ce0(void)

void FUN_144bf5ce0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  
  plVar1 = (longlong *)FUN_144befe50(param_2,0x40);
  if (plVar1 == (longlong *)0x0) {
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = (code *)*plVar1;
    if (pcVar2 == FUN_144bf35f0) {
      return;
    }
  }
  FUN_144bf5ba0(pcVar2,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144bf5d50 FUN_144bf5d50 body=116 status=ok
// SIG undefined FUN_144bf5d50(void)

void FUN_144bf5d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  code *pcVar2;
  
  plVar1 = (longlong *)FUN_144befe50(param_3,0x80);
  if (plVar1 == (longlong *)0x0) {
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = (code *)*plVar1;
    if (pcVar2 == FUN_144bf3630) {
      return;
    }
  }
  FUN_144bf5c30(pcVar2,param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 144bf5dd0 FUN_144bf5dd0 body=159 status=ok
// SIG undefined FUN_144bf5dd0(void)

void FUN_144bf5dd0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  
  puVar1 = (undefined4 *)FUN_144bef800(param_2,&local_res10);
  uVar4 = 0;
  uVar3 = uVar4;
  if (((byte)*puVar1 & 0x1f) == 8) {
    uVar3 = param_2;
  }
  puVar2 = (undefined8 *)FUN_144befe50(uVar3,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_144beff00(uVar3,&local_res10);
  puVar2 = (undefined8 *)FUN_144befe50(local_res10,0x40);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
    (*(code *)*puVar2)(param_1,local_res10,(int)((ulonglong)uVar4 >> 8) * param_3);
  }
  return;
}



// FUNCTION 144bf5e70 FUN_144bf5e70 body=177 status=ok
// SIG undefined FUN_144bf5e70(void)

void FUN_144bf5e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  
  puVar1 = (undefined4 *)FUN_144bef800(param_3,&local_res18);
  uVar4 = 0;
  uVar3 = uVar4;
  if (((byte)*puVar1 & 0x1f) == 8) {
    uVar3 = param_3;
  }
  puVar2 = (undefined8 *)FUN_144befe50(uVar3,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_144beff00(uVar3,&local_res18);
  puVar2 = (undefined8 *)FUN_144befe50(local_res18,0x80);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
    (*(code *)*puVar2)(param_1,param_2,local_res18,(int)((ulonglong)uVar4 >> 8) * param_4);
  }
  return;
}



// FUNCTION 144bf5f30 FUN_144bf5f30 body=177 status=ok
// SIG undefined FUN_144bf5f30(void)

void FUN_144bf5f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  
  puVar1 = (undefined4 *)FUN_144bef800(param_3,&local_res18);
  uVar4 = 0;
  uVar3 = uVar4;
  if (((byte)*puVar1 & 0x1f) == 8) {
    uVar3 = param_3;
  }
  puVar2 = (undefined8 *)FUN_144befe50(uVar3,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_144beff00(uVar3,&local_res18);
  puVar2 = (undefined8 *)FUN_144befe50(local_res18,0x200);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
    (*(code *)*puVar2)(param_1,param_2,local_res18,(int)((ulonglong)uVar4 >> 8) * param_4);
  }
  return;
}



// FUNCTION 144bf5ff0 FUN_144bf5ff0 body=159 status=ok
// SIG undefined FUN_144bf5ff0(void)

void FUN_144bf5ff0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  
  puVar1 = (undefined4 *)FUN_144bef800(param_2,&local_res10);
  uVar4 = 0;
  uVar3 = uVar4;
  if (((byte)*puVar1 & 0x1f) == 8) {
    uVar3 = param_2;
  }
  puVar2 = (undefined8 *)FUN_144befe50(uVar3,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_144beff00(uVar3,&local_res10);
  puVar2 = (undefined8 *)FUN_144befe50(local_res10,0x100);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
    (*(code *)*puVar2)(param_1,local_res10,(int)((ulonglong)uVar4 >> 8) * param_3);
  }
  return;
}



// FUNCTION 144bf6090 FUN_144bf6090 body=119 status=ok
// SIG undefined FUN_144bf6090(void)

undefined8 * FUN_144bf6090(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = FUN_144f65d70;
  param_1[1] = FUN_144f65f60;
  param_1[2] = FUN_144f656b0;
  param_1[3] = FUN_144bf6110;
  param_1[4] = FUN_144bf6200;
  param_1[10] = &PTR_vftable_14c727a50;
  param_1[0xb] = FUN_144bf6260;
  param_1[0xc] = FUN_144bf62a0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  return param_1;
}



// FUNCTION 144bf6110 FUN_144bf6110 body=231 status=ok
// SIG undefined FUN_144bf6110(void)

void FUN_144bf6110(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ThreadMemoryAllocator");
  }
  uVar3 = 0;
  uVar2 = uVar3;
  if (lVar1 != 0) {
    uVar2 = FUN_144f6d030(lVar1,*(undefined8 *)(lVar4 + 8));
  }
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ThreadMemoryAllocator");
  }
  if (lVar1 != 0) {
    uVar3 = FUN_144f6d030(lVar1,*(undefined8 *)(lVar4 + 0x20));
  }
  lVar4 = FUN_144f63780(param_1 + 8);
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  *(undefined8 *)(lVar4 + 0x30) = uVar3;
  *(undefined8 *)(lVar4 + 8) = uVar2;
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  return;
}



// FUNCTION 144bf6200 FUN_144bf6200 body=81 status=ok
// SIG undefined FUN_144bf6200(void)

void FUN_144bf6200(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3d0) + 8);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x3d0) + 0x20);
  FUN_144f63820(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}



// FUNCTION 144bf6260 FUN_144bf6260 body=60 status=ok
// SIG undefined FUN_144bf6260(void)

void FUN_144bf6260(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0x90;
  lVar1 = (**(code **)(*param_1 + 8))(param_1,local_res8);
  if (lVar1 != 0) {
    FUN_144f6d490(lVar1,param_1,0);
    return;
  }
  return;
}



// FUNCTION 144bf62a0 FUN_144bf62a0 body=52 status=ok
// SIG undefined FUN_144bf62a0(void)

void FUN_144bf62a0(undefined8 *param_1,longlong *param_2)

{
  (**(code **)*param_1)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000144bf62d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1,0x90);
  return;
}



// FUNCTION 144bf6320 FUN_144bf6320 body=60 status=ok
// SIG undefined FUN_144bf6320(void)

void FUN_144bf6320(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x18;
    do {
      FUN_144bf90d0(param_1);
      param_1 = param_1 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf6360 FUN_144bf6360 body=58 status=ok
// SIG undefined FUN_144bf6360(void)

void FUN_144bf6360(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144f73160(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf63e0 FUN_144bf63e0 body=94 status=ok
// SIG undefined FUN_144bf63e0(void)

void FUN_144bf63e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x90 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x12;
      plVar2 = plVar2 + -0x12;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf6440 FUN_144bf6440 body=60 status=ok
// SIG undefined FUN_144bf6440(void)

void FUN_144bf6440(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x18;
    do {
      FUN_144bf9140(param_1);
      param_1 = param_1 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf64e0 FUN_144bf64e0 body=446 status=ok
// SIG undefined FUN_144bf64e0(void)

void FUN_144bf64e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0xc);
    lVar4 = param_2 + -4;
    lVar5 = param_2 + -0xc;
    lVar8 = (longlong)param_4;
    local_40 = lVar4;
    local_38 = lVar5;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        puVar7[0] = 0;
        lVar3 = *(longlong *)(lVar5 + (longlong)puVar7);
        if (lVar3 != 0) {
          uVar2 = *(uint *)(lVar4 + (longlong)puVar7);
          lVar3 = lVar3 + lVar5 + (longlong)puVar7;
          if ((lVar3 != 0) && (0 < (int)uVar2)) {
            *puVar7 = 0;
            uVar6 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
            uVar6 = uVar6 | (int)uVar6 >> 8;
            uVar6 = uVar6 | (int)uVar6 >> 4;
            uVar6 = uVar6 | (int)uVar6 >> 2;
            uVar6 = ((int)uVar6 >> 1 | uVar6) + 1;
            if ((int)uVar6 < (int)uVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_48 = (longlong)(int)uVar6 << 2;
            lVar4 = (*DAT_14c787670)(0,&local_48,0);
            if (*(longlong *)puVar1 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
            }
            FUN_144b3d470(lVar4,lVar5,(longlong)(int)puVar7[-1] << 2);
            if ((int)*puVar7 < 0) {
              if (*(longlong *)puVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)puVar1 + *(longlong *)puVar1;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            puVar7[-1] = uVar2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 - (longlong)puVar1;
            }
            *(longlong *)puVar1 = lVar5;
            *puVar7 = uVar6 | 0x80000000;
            FUN_144b3d470(lVar5 + -0xc + (longlong)puVar7,lVar3,(longlong)(int)uVar2 << 2);
            lVar4 = local_40;
          }
        }
        puVar7[1] = *(uint *)((longlong)puVar7 + param_2 + 4);
        lVar5 = local_38;
      }
      puVar7 = puVar7 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144bf66a0 FUN_144bf66a0 body=390 status=ok
// SIG undefined FUN_144bf66a0(void)

void FUN_144bf66a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 2;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 2);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144bf6830 FUN_144bf6830 body=396 status=ok
// SIG undefined FUN_144bf6830(void)

void FUN_144bf6830(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 2;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      *(uint *)(param_1 + 8 + (longlong)puVar8) = puVar8[2];
      puVar8 = puVar8 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144bf69c0 FUN_144bf69c0 body=95 status=ok
// SIG undefined FUN_144bf69c0(void)

void FUN_144bf69c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144bf6a30 FUN_144bf6a30 body=388 status=ok
// SIG undefined FUN_144bf6a30(void)

void FUN_144bf6a30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 2 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 2;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144bf6bd0 FUN_144bf6bd0 body=60 status=ok
// SIG undefined FUN_144bf6bd0(void)

void FUN_144bf6bd0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144f6f6e0(param_1,0,0);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf6d80 FUN_144bf6d80 body=55 status=ok
// SIG undefined FUN_144bf6d80(void)

void FUN_144bf6d80(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bda160(param_1);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf6dc0 FUN_144bf6dc0 body=61 status=ok
// SIG undefined FUN_144bf6dc0(void)

undefined8 FUN_144bf6dc0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bf6e70 FUN_144bf6e70 body=80 status=ok
// SIG undefined FUN_144bf6e70(void)

void FUN_144bf6e70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144bf6ec0 FUN_144bf6ec0 body=63 status=ok
// SIG undefined FUN_144bf6ec0(void)

void FUN_144bf6ec0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144bf6f00 FUN_144bf6f00 body=111 status=ok
// SIG undefined FUN_144bf6f00(void)

void FUN_144bf6f00(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar4 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      plVar1 = (longlong *)(param_2 + (longlong)param_1);
      if (param_1 != plVar1) {
        lVar2 = *plVar1;
        if (lVar2 != 0) {
          FUN_144b3d910(lVar2);
        }
        lVar3 = *param_1;
        *param_1 = lVar2;
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144bf6fe0 FUN_144bf6fe0 body=74 status=ok
// SIG undefined FUN_144bf6fe0(void)

void FUN_144bf6fe0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7040 FUN_144bf7040 body=32 status=ok
// SIG undefined FUN_144bf7040(void)

undefined8 FUN_144bf7040(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144bf70a0 FUN_144bf70a0 body=88 status=ok
// SIG undefined FUN_144bf70a0(void)

void FUN_144bf70a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7120 FUN_144bf7120 body=55 status=ok
// SIG undefined FUN_144bf7120(void)

void FUN_144bf7120(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b3e890(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf7160 FUN_144bf7160 body=75 status=ok
// SIG undefined FUN_144bf7160(void)

void FUN_144bf7160(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144bde880(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf71b0 FUN_144bf71b0 body=77 status=ok
// SIG undefined FUN_144bf71b0(void)

void FUN_144bf71b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7200 FUN_144bf7200 body=70 status=ok
// SIG undefined FUN_144bf7200(void)

void FUN_144bf7200(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144bde9a0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf72c0 FUN_144bf72c0 body=77 status=ok
// SIG undefined FUN_144bf72c0(void)

void FUN_144bf72c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x10 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -2;
      plVar2 = plVar2 + -2;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7310 FUN_144bf7310 body=32 status=ok
// SIG undefined FUN_144bf7310(void)

undefined8 FUN_144bf7310(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144bf7340 FUN_144bf7340 body=74 status=ok
// SIG undefined FUN_144bf7340(void)

void FUN_144bf7340(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7390 FUN_144bf7390 body=32 status=ok
// SIG undefined FUN_144bf7390(void)

undefined8 FUN_144bf7390(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144bf73b0 FUN_144bf73b0 body=77 status=ok
// SIG undefined FUN_144bf73b0(void)

void FUN_144bf73b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7400 FUN_144bf7400 body=32 status=ok
// SIG undefined FUN_144bf7400(void)

undefined8 FUN_144bf7400(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144bf74b0 FUN_144bf74b0 body=100 status=ok
// SIG undefined FUN_144bf74b0(void)

void FUN_144bf74b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *param_1 = -((fVar2 * fVar7 - fVar3 * fVar6) - (fVar1 * fVar8 + fVar4 * fVar5));
  param_1[1] = -((fVar3 * fVar5 - fVar2 * fVar8) - (fVar4 * fVar6 + fVar1 * fVar7));
  param_1[2] = -((fVar1 * fVar6 - fVar4 * fVar7) - (fVar2 * fVar5 + fVar3 * fVar8));
  param_1[3] = (fVar4 * fVar8 - fVar1 * fVar5) - (fVar3 * fVar7 + fVar2 * fVar6);
  return;
}



// FUNCTION 144bf75d0 FUN_144bf75d0 body=55 status=ok
// SIG undefined FUN_144bf75d0(void)

void FUN_144bf75d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144f73560(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf7610 FUN_144bf7610 body=75 status=ok
// SIG undefined FUN_144bf7610(void)

void FUN_144bf7610(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144f73590(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf76a0 FUN_144bf76a0 body=88 status=ok
// SIG undefined FUN_144bf76a0(void)

void FUN_144bf76a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7700 FUN_144bf7700 body=484 status=ok
// SIG undefined FUN_144bf7700(void)

void FUN_144bf7700(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  lVar10 = (longlong)param_4;
  if (0 < param_4) {
    plVar11 = (longlong *)(param_1 + 0x18);
    do {
      plVar4 = (longlong *)((param_2 - param_1) + (longlong)plVar11);
      if (plVar4 != plVar11) {
        plVar4 = (longlong *)*plVar4;
        iVar1 = *(int *)((longlong)plVar11 + (param_2 - param_1) + 8);
        if ((int)(*(uint *)((longlong)plVar11 + 0xc) & 0x7fffffff) < iVar1) {
          FUN_144bf9450(plVar11,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        }
        if (iVar1 < (int)plVar11[1]) {
          lVar9 = *plVar11;
          lVar5 = (longlong)(int)plVar11[1] * 0x10 + *plVar11;
          while (lVar5 != (longlong)iVar1 * 0x10 + lVar9) {
            plVar8 = (longlong *)(lVar5 + -0x10);
            lVar5 = lVar5 + -0x10;
            if (*plVar8 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar8 = (longlong *)*plVar11;
        iVar3 = iVar1;
        if ((int)plVar11[1] < iVar1) {
          iVar3 = (int)plVar11[1];
        }
        if ((plVar8 != plVar4) && (lVar9 = (longlong)iVar3, 0 < iVar3)) {
          lVar5 = (longlong)plVar8 - (longlong)plVar4;
          plVar6 = plVar4;
          do {
            if (*(longlong *)(lVar5 + (longlong)plVar6) != *plVar6) {
              if (*plVar6 != 0) {
                FUN_144b3d910();
              }
              lVar2 = *(longlong *)(lVar5 + (longlong)plVar6);
              *(longlong *)(lVar5 + (longlong)plVar6) = *plVar6;
              if (lVar2 != 0) {
                FUN_144b3f230();
              }
            }
            *(undefined2 *)((longlong)plVar6 + lVar5 + 8) =
                 *(undefined2 *)
                  ((longlong)plVar4 + (longlong)plVar6 + ((lVar5 + 8) - (longlong)plVar8));
            lVar9 = lVar9 + -1;
            plVar6 = plVar6 + 2;
          } while (lVar9 != 0);
        }
        plVar4 = plVar4 + (longlong)iVar3 * 2;
        if (0 < iVar1 - iVar3) {
          uVar7 = (ulonglong)(uint)(iVar1 - iVar3);
          plVar8 = (longlong *)(*plVar11 + (longlong)iVar3 * 0x10);
          do {
            if (plVar8 != (longlong *)0x0) {
              lVar9 = *plVar4;
              *plVar8 = lVar9;
              if (lVar9 != 0) {
                FUN_144b3d910();
              }
              plVar6 = plVar4 + 1;
              plVar4 = plVar4 + 2;
              *(short *)(plVar8 + 1) = (short)*plVar6;
            }
            uVar7 = uVar7 - 1;
            plVar8 = plVar8 + 2;
          } while (uVar7 != 0);
        }
        *(int *)(plVar11 + 1) = iVar1;
      }
      plVar11 = plVar11 + 5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144bf7a00 FUN_144bf7a00 body=69 status=ok
// SIG undefined FUN_144bf7a00(void)

longlong * FUN_144bf7a00(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)FUN_144bef800(param_2,local_res8);
    lVar2 = FUN_144beffb0(*puVar1 & 0x1f);
  }
  param_1[1] = lVar2;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 144bf7a80 FUN_144bf7a80 body=106 status=ok
// SIG undefined FUN_144bf7a80(void)

void FUN_144bf7a80(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    puVar2 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar2 + -1 != (undefined8 *)0x0) {
        puVar2[-1] = *(undefined8 *)(param_2 + -8 + (longlong)puVar2);
        *puVar2 = *(undefined8 *)(param_2 + (longlong)puVar2);
        uVar1 = *(ulonglong *)(param_2 + 8 + (longlong)puVar2);
        puVar2[1] = uVar1;
        if ((uVar1 & 1) != 0) {
          FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
        }
      }
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144bf7af0 FUN_144bf7af0 body=72 status=ok
// SIG undefined FUN_144bf7af0(void)

void FUN_144bf7af0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf7b40 FUN_144bf7b40 body=144 status=ok
// SIG undefined FUN_144bf7b40(void)

void FUN_144bf7b40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar1 = (ulonglong *)(param_2 + 0x10);
    lVar3 = (longlong)param_4;
    lVar2 = param_1 - param_2;
    do {
      *(ulonglong *)(lVar2 + -0x10 + (longlong)puVar1) = puVar1[-2];
      *(undefined8 *)((longlong)puVar1 + lVar2 + -8) =
           *(undefined8 *)((longlong)puVar1 + (param_2 - param_1) + lVar2 + -8);
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b20(*puVar1 & 0xfffffffffffffffe);
      }
      if ((*(byte *)((longlong)puVar1 + lVar2) & 1) != 0) {
        FUN_144be6b30(*(ulonglong *)((longlong)puVar1 + lVar2) & 0xfffffffffffffffe);
      }
      *(ulonglong *)((longlong)puVar1 + lVar2) = *puVar1;
      puVar1 = puVar1 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144bf7c70 FUN_144bf7c70 body=72 status=ok
// SIG undefined FUN_144bf7c70(void)

void FUN_144bf7c70(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf7cd0 FUN_144bf7cd0 body=58 status=ok
// SIG undefined FUN_144bf7cd0(void)

void FUN_144bf7cd0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bdf360(param_1);
      }
      param_1 = param_1 + 0x98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf7d10 FUN_144bf7d10 body=78 status=ok
// SIG undefined FUN_144bf7d10(void)

void FUN_144bf7d10(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144bdfad0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf7d70 FUN_144bf7d70 body=63 status=ok
// SIG undefined FUN_144bf7d70(void)

void FUN_144bf7d70(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x98 + param_1;
    do {
      FUN_144bdf2f0(param_1);
      param_1 = param_1 + -0x98;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7db0 FUN_144bf7db0 body=73 status=ok
// SIG undefined FUN_144bf7db0(void)

void FUN_144bf7db0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144bdfb70(param_1,param_2 + param_1);
      param_1 = param_1 + 0x98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf7e00 FUN_144bf7e00 body=73 status=ok
// SIG undefined FUN_144bf7e00(void)

void FUN_144bf7e00(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar1 = (undefined8 *)(param_1 + (longlong)param_3 * 8);
    puVar2 = puVar1;
    do {
      (**(code **)*puVar2)(puVar1,0);
      puVar1 = puVar1 + -1;
      puVar2 = puVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf7e80 FUN_144bf7e80 body=27 status=ok
// SIG undefined FUN_144bf7e80(void)

void FUN_144bf7e80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = (*(code *)*param_4)();
    *param_3 = uVar1;
  }
  return;
}



// FUNCTION 144bf7ea0 FUN_144bf7ea0 body=72 status=ok
// SIG undefined FUN_144bf7ea0(void)

void FUN_144bf7ea0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf7ef0 FUN_144bf7ef0 body=109 status=ok
// SIG undefined FUN_144bf7ef0(void)

void FUN_144bf7ef0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  undefined1 local_res8 [8];
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar1 != 0) {
    cVar4 = FUN_144b45dd0(lVar1,&DAT_14c6deb90);
    if (cVar4 != '\0') {
      puVar3 = (uint *)FUN_144b45d50(lVar1,local_res8);
      if (((*puVar3 >> 3 & 1) == 0) && (lVar2 != 0)) {
        FUN_144f72dd0(lVar2,10,param_2);
      }
    }
  }
  return;
}



// FUNCTION 144bf7fa0 FUN_144bf7fa0 body=76 status=ok
// SIG undefined FUN_144bf7fa0(void)

void FUN_144bf7fa0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar1 = (undefined8 *)((longlong)param_3 * 0x10 + param_1);
    puVar2 = puVar1;
    do {
      (**(code **)*puVar2)(puVar1,0);
      puVar1 = puVar1 + -2;
      puVar2 = puVar2 + -2;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf8020 FUN_144bf8020 body=72 status=ok
// SIG undefined FUN_144bf8020(void)

void FUN_144bf8020(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8080 FUN_144bf8080 body=30 status=ok
// SIG undefined FUN_144bf8080(void)

void FUN_144bf8080(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = (*(code *)*param_4)(param_1,*param_2);
    *param_3 = uVar1;
  }
  return;
}



// FUNCTION 144bf80d0 FUN_144bf80d0 body=72 status=ok
// SIG undefined FUN_144bf80d0(void)

void FUN_144bf80d0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8130 FUN_144bf8130 body=55 status=ok
// SIG undefined FUN_144bf8130(void)

void FUN_144bf8130(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144f72fa0(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf81d0 FUN_144bf81d0 body=72 status=ok
// SIG undefined FUN_144bf81d0(void)

void FUN_144bf81d0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8220 FUN_144bf8220 body=75 status=ok
// SIG undefined FUN_144bf8220(void)

void FUN_144bf8220(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144be3700(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf8270 FUN_144bf8270 body=60 status=ok
// SIG undefined FUN_144bf8270(void)

void FUN_144bf8270(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 8;
    do {
      FUN_144b49dd0(param_1);
      param_1 = param_1 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf82b0 FUN_144bf82b0 body=70 status=ok
// SIG undefined FUN_144bf82b0(void)

void FUN_144bf82b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144be3810(param_1,param_2 + param_1);
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf8360 FUN_144bf8360 body=72 status=ok
// SIG undefined FUN_144bf8360(void)

void FUN_144bf8360(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8460 FUN_144bf8460 body=72 status=ok
// SIG undefined FUN_144bf8460(void)

void FUN_144bf8460(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8510 FUN_144bf8510 body=72 status=ok
// SIG undefined FUN_144bf8510(void)

void FUN_144bf8510(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8560 FUN_144bf8560 body=39 status=ok
// SIG undefined FUN_144bf8560(void)

void FUN_144bf8560(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_144b45650();
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = *param_3;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



// FUNCTION 144bf85c0 FUN_144bf85c0 body=55 status=ok
// SIG undefined FUN_144bf85c0(void)

void FUN_144bf85c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144f72e90(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144bf8600 FUN_144bf8600 body=72 status=ok
// SIG undefined FUN_144bf8600(void)

void FUN_144bf8600(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8650 FUN_144bf8650 body=88 status=ok
// SIG undefined FUN_144bf8650(void)

void FUN_144bf8650(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf86e0 FUN_144bf86e0 body=72 status=ok
// SIG undefined FUN_144bf86e0(void)

void FUN_144bf86e0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf8800 FUN_144bf8800 body=80 status=ok
// SIG undefined FUN_144bf8800(void)

void FUN_144bf8800(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144bf8880 FUN_144bf8880 body=72 status=ok
// SIG undefined FUN_144bf8880(void)

void FUN_144bf8880(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144bf88d0 FUN_144bf88d0 body=60 status=ok
// SIG undefined FUN_144bf88d0(void)

void FUN_144bf88d0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x18;
    do {
      FUN_144f6f9a0(param_1);
      param_1 = param_1 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144bf8910 FUN_144bf8910 body=63 status=ok
// SIG undefined FUN_144bf8910(void)

void FUN_144bf8910(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144bf8980 FUN_144bf8980 body=97 status=ok
// SIG undefined FUN_144bf8980(void)

void FUN_144bf8980(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144bf8a20 FUN_144bf8a20 body=196 status=ok
// SIG undefined FUN_144bf8a20(void)

void FUN_144bf8a20(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar6 = (longlong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(param_2 + (longlong)param_1);
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
        if (param_1 != puVar1) {
          iVar3 = *(int *)((longlong)param_1 + param_2 + 8);
          puVar5 = (undefined4 *)*puVar1;
          puVar2 = puVar5 + iVar3;
          if (0 < iVar3) {
            FUN_140163394(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
          }
          puVar4 = (undefined4 *)*param_1;
          for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar5;
            }
            puVar4 = puVar4 + 1;
          }
          *(int *)(param_1 + 1) = iVar3;
        }
      }
      param_1 = param_1 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144bf8af0 FUN_144bf8af0 body=221 status=ok
// SIG undefined FUN_144bf8af0(void)

void FUN_144bf8af0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  
  if (0 < param_4) {
    param_1 = param_1 - param_2;
    piVar6 = (int *)(param_2 + 8);
    lVar5 = (longlong)param_4;
    do {
      piVar7 = (int *)(param_1 + -8 + (longlong)piVar6);
      if (piVar7 != piVar6 + -2) {
        *(undefined4 *)(param_1 + (longlong)piVar6) = 0;
        iVar2 = *piVar6;
        puVar4 = *(undefined4 **)(piVar6 + -2);
        puVar1 = puVar4 + iVar2;
        if ((int)(*(uint *)(param_1 + 4 + (longlong)piVar6) & 0x7fffffff) < iVar2) {
          FUN_140163394(piVar7,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        puVar3 = *(undefined4 **)piVar7;
        for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar4;
          }
          puVar3 = puVar3 + 1;
        }
        piVar7[2] = iVar2;
      }
      piVar6 = piVar6 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144bf8c10 FUN_144bf8c10 body=68 status=ok
// SIG undefined FUN_144bf8c10(void)

void FUN_144bf8c10(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    do {
      if (param_1 != (undefined8 *)0x0) {
        FUN_144bdf360(param_1);
        param_1[0x13] = *param_1;
      }
      param_1 = param_1 + 0x14;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144bf8cc0 FUN_144bf8cc0 body=220 status=ok
// SIG undefined FUN_144bf8cc0(void)

void FUN_144bf8cc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  
  if (0 < param_4) {
    puVar3 = (undefined8 *)(param_2 + 0x10);
    puVar6 = (undefined8 *)0x0;
    lVar4 = (longlong)param_4;
    do {
      puVar5 = (undefined8 *)((param_1 - param_2) + -0x10 + (longlong)puVar3);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined1 *)((longlong)puVar3 + (param_1 - param_2) + -8) = 0;
        cVar1 = *(char *)(puVar3 + -1);
        local_28 = puVar6;
        if (((cVar1 != '\0') && (local_28 = puVar3, cVar1 != '\x01')) &&
           (local_28 = puVar6, cVar1 == '\x02')) {
          local_28 = (undefined8 *)*puVar3;
        }
        local_20 = puVar3[-2];
        puVar2 = puVar6;
        if (local_20 != 0) {
          puVar2 = (undefined8 *)FUN_144befdb0();
        }
        local_18 = puVar2;
        if (((ulonglong)puVar2 & 1) != 0) {
          FUN_144be6b20((ulonglong)puVar2 & 0xfffffffffffffffe);
        }
        FUN_144f6f130(puVar5,&local_28);
        if (((ulonglong)local_18 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_18 & 0xfffffffffffffffe);
        }
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



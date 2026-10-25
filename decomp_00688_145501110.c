// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145501110 FUN_145501110 body=262 status=ok
// SIG undefined FUN_145501110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145501110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 *param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_18 [2];
  undefined8 local_10;
  
  local_10 = 0x14550111c;
  lVar2 = FUN_145500f50(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_10,
                        local_18,0);
  uVar1 = local_10;
  if (lVar2 == 0) {
    FUN_144ba24f0(0x23,0x6a,0x75,"crypto\\pkcs12\\p12_decr.c",0x5e);
    return 0;
  }
  param_5 = (undefined4 *)local_10;
  lVar2 = FUN_144eff7f0(0,&param_5,local_18[0],param_2);
  if (param_6 != 0) {
    FUN_14259f0c0(uVar1,(longlong)local_18[0]);
  }
  if (lVar2 == 0) {
    FUN_144ba24f0(0x23,0x6a,0x65,"crypto\\pkcs12\\p12_decr.c",0x72);
  }
  FUN_144ea6530(uVar1,"crypto\\pkcs12\\p12_decr.c",0x73);
  return lVar2;
}



// FUNCTION 145501220 FUN_145501220 body=239 status=ok
// SIG undefined FUN_145501220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145501220(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  int *local_78;
  code *local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14550122c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_78 = (int *)CONCAT44(local_78._4_4_,0x9d);
    uVar3 = 0x6c;
  }
  else {
    local_70 = FUN_1454f0180;
    local_78 = local_68;
    iVar1 = FUN_145501320();
    if (iVar1 != 0) {
      FUN_144ef1080(**(undefined8 **)(param_1 + 8),0,&local_60);
      iVar1 = FUN_144f03e70(local_60);
      if (local_68[0] == iVar1) {
        uVar2 = FUN_144f03e90(local_60);
        FUN_14259f120(local_58,uVar2,local_68[0]);
      }
      goto LAB_14550126d;
    }
    local_78 = (int *)CONCAT44(local_78._4_4_,0xa2);
    uVar3 = 0x6d;
  }
  FUN_144ba24f0(0x23,0x7e,uVar3,"crypto\\pkcs12\\p12_mutl.c");
LAB_14550126d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 145501320 FUN_145501320 body=844 status=ok
// SIG undefined FUN_145501320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145501320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_160;
  int local_158;
  undefined4 *local_150;
  longlong local_148;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_b8 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_110 = param_5;
  local_118 = FUN_1454f0180;
  if (param_6 != (code *)0x0) {
    local_118 = param_6;
  }
  lVar12 = 0;
  local_138 = param_3;
  local_130 = param_2;
  local_108 = param_4;
  iVar5 = FUN_144ea8fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar5 != 0x15) {
    local_168 = CONCAT44(local_168._4_4_,0x5c);
    FUN_144ba24f0(0x23,0x6b,0x79,"crypto\\pkcs12\\p12_mutl.c");
    goto LAB_1455015d6;
  }
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 8) + 8);
  uVar3 = *(undefined8 *)(puVar2 + 2);
  uVar1 = *puVar2;
  uVar6 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0) {
    uVar6 = FUN_144ef1170();
  }
  FUN_144ef1080(**(undefined8 **)(param_1 + 8),&local_128,0);
  FUN_144efded0(&local_120,0,0,local_128);
  uVar7 = FUN_144ea8fa0(local_120);
  uVar9 = FUN_144ea8ee0(uVar7);
  lVar10 = FUN_144baab30(uVar9);
  if (lVar10 == 0) {
    local_168 = CONCAT44(local_168._4_4_,0x69);
    FUN_144ba24f0(0x23,0x6b,0x76,"crypto\\pkcs12\\p12_mutl.c");
    goto LAB_1455015d6;
  }
  iVar5 = FUN_144ba3cd0(lVar10);
  iVar8 = FUN_144ba3cb0(lVar10);
  if (iVar5 < 0) goto LAB_1455015d6;
  if (((iVar8 == 0x329) || (iVar8 - 0x3d6U < 2)) &&
     (lVar11 = FUN_144ecf180("LEGACY_GOST_PKCS12"), lVar11 == 0)) {
    iVar5 = 0x20;
    local_150 = local_b8;
    local_158 = 0x60;
    local_168 = CONCAT44(local_168._4_4_,uVar6);
    local_160 = lVar10;
    iVar8 = FUN_14529a7a0(local_130,local_138,uVar3,uVar1);
    if (iVar8 != 0) {
      local_f8 = local_78;
      uStack_f4 = uStack_74;
      uStack_f0 = uStack_70;
      uStack_ec = uStack_6c;
      local_e8 = local_68;
      uStack_e4 = uStack_64;
      uStack_e0 = uStack_60;
      uStack_dc = uStack_5c;
      FUN_14259f0c0(local_b8,0x60);
      goto LAB_14550152c;
    }
    local_168 = CONCAT44(local_168._4_4_,0x77);
    FUN_144ba24f0(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
  }
  else {
    local_150 = &local_f8;
    local_160 = CONCAT44(local_160._4_4_,uVar6);
    local_168 = CONCAT44(local_168._4_4_,3);
    local_158 = iVar5;
    local_148 = lVar10;
    iVar8 = (*local_118)(local_130,local_138,uVar3,uVar1);
    if (iVar8 == 0) {
      local_168 = CONCAT44(local_168._4_4_,0x7d);
      FUN_144ba24f0(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
    }
    else {
LAB_14550152c:
      lVar12 = FUN_14527f710();
      if (lVar12 != 0) {
        local_168 = 0;
        iVar5 = FUN_14527f850(lVar12,&local_f8,iVar5,lVar10);
        if ((iVar5 != 0) &&
           (piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x20),
           iVar5 = FUN_14527fb30(lVar12,*(undefined8 *)(piVar4 + 2),(longlong)*piVar4), iVar5 != 0))
        {
          FUN_14527fb60(lVar12,local_108,local_110);
        }
      }
    }
  }
  FUN_14259f0c0(&local_f8,0x40);
  FUN_14527f7e0(lVar12);
LAB_1455015d6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_188);
}



// FUNCTION 1455016d0 FUN_1455016d0 body=29 status=ok
// SIG undefined FUN_1455016d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455016d0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d99fa0);
  return;
}



// FUNCTION 1455016f0 FUN_1455016f0 body=29 status=ok
// SIG undefined FUN_1455016f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455016f0(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 145501710 FUN_145501710 body=8 status=ok
// SIG undefined FUN_145501710(void)

undefined * FUN_145501710(void)

{
  return &DAT_149d99fa0;
}



// FUNCTION 145501720 FUN_145501720 body=29 status=ok
// SIG undefined FUN_145501720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145501720(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d99e70);
  return;
}



// FUNCTION 145501740 FUN_145501740 body=8 status=ok
// SIG undefined FUN_145501740(void)

undefined * FUN_145501740(void)

{
  return &DAT_149d99ec0;
}



// FUNCTION 145501750 FUN_145501750 body=8 status=ok
// SIG undefined FUN_145501750(void)

undefined * FUN_145501750(void)

{
  return &DAT_149d99f10;
}



// FUNCTION 145501760 FUN_145501760 body=560 status=ok
// SIG undefined FUN_145501760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145501760(longlong param_1,char *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x145501784;
  pcVar7 = (char *)0x0;
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    FUN_144ba24f0(0x23,0x76,0x69,"crypto\\pkcs12\\p12_kiss.c",0x2f,0x145501784);
    return 0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = FUN_145501220(param_1,0,0);
    param_2 = pcVar7;
    if (iVar1 == 0) {
      iVar1 = FUN_145501220(param_1,&DAT_149e02088,0);
      param_2 = "";
      if (iVar1 == 0) {
        uVar8 = 0x42;
        goto LAB_14550191e;
      }
    }
  }
  else {
    iVar1 = FUN_145501220(param_1,param_2,0xffffffff);
    if (iVar1 == 0) {
      uVar8 = 0x46;
LAB_14550191e:
      uVar6 = 0x71;
      pcVar2 = pcVar7;
      goto LAB_145501924;
    }
  }
  pcVar2 = (char *)FUN_144babca0();
  if (pcVar2 == (char *)0x0) {
    uVar8 = 0x4e;
    uVar6 = 0x41;
  }
  else {
    iVar1 = FUN_145501990(param_1,param_2,0xffffffff,param_3,pcVar2);
    if (iVar1 != 0) {
      pcVar3 = (char *)FUN_144bac250(pcVar2);
      do {
        if (pcVar3 == (char *)0x0) {
          FUN_144babe00(pcVar2,FUN_144b47250);
          return 1;
        }
        if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) && (param_4 != (longlong *)0x0)) &&
           (*param_4 == 0)) {
          FUN_144ba3130();
          iVar1 = FUN_144bb4fc0(pcVar3,*param_3);
          if (iVar1 != 0) {
            *param_4 = (longlong)pcVar3;
            pcVar3 = pcVar7;
          }
          FUN_144ba3170();
        }
        pcVar5 = pcVar3;
        if ((param_5 != (longlong *)0x0) && (pcVar3 != (char *)0x0)) {
          if (*param_5 == 0) {
            lVar4 = FUN_144babca0();
            *param_5 = lVar4;
            if (lVar4 == 0) goto LAB_145501938;
          }
          iVar1 = FUN_144bac1c0(*param_5,pcVar3);
          pcVar5 = pcVar7;
          if (iVar1 == 0) goto LAB_145501938;
        }
        FUN_144b47250(pcVar5);
        pcVar3 = (char *)FUN_144bac250(pcVar2);
      } while( true );
    }
    uVar8 = 0x53;
    uVar6 = 0x72;
  }
LAB_145501924:
  FUN_144ba24f0(0x23,0x76,uVar6,"crypto\\pkcs12\\p12_kiss.c",uVar8,uVar9);
  pcVar3 = pcVar7;
LAB_145501938:
  if (param_3 != (longlong *)0x0) {
    FUN_144ba6e60(*param_3);
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    FUN_144b47250(*param_4);
    *param_4 = 0;
  }
  FUN_144b47250(pcVar3);
  FUN_144babe00(pcVar2,FUN_144b47250);
  return 0;
}



// FUNCTION 145501990 FUN_145501990 body=289 status=ok
// SIG undefined FUN_145501990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145501990(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = FUN_1455dc790();
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(lVar2);
  if (0 < iVar1) {
    do {
      lVar3 = FUN_144babc00(lVar2,iVar4);
      iVar1 = FUN_144ea8fa0(*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0x15) {
        lVar3 = FUN_1455dc690(lVar3);
LAB_145501a28:
        if (lVar3 == 0) {
LAB_145501a9e:
          FUN_144babe00(lVar2,FUN_144ee7c50);
          return 0;
        }
        iVar1 = FUN_145501ac0(lVar3,param_2,param_3,param_4,param_5);
        if (iVar1 == 0) {
          FUN_144babe00(lVar3,FUN_145501720);
          goto LAB_145501a9e;
        }
        FUN_144babe00(lVar3,FUN_145501720);
      }
      else if (iVar1 == 0x1a) {
        lVar3 = FUN_1455dc6f0(lVar3,param_2,param_3);
        goto LAB_145501a28;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(lVar2);
    } while (iVar4 < iVar1);
  }
  FUN_144babe00(lVar2,FUN_144ee7c50);
  return 1;
}



// FUNCTION 145501ac0 FUN_145501ac0 body=579 status=ok
// SIG undefined FUN_145501ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145501ac0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145501ae1;
  local_38 = 0;
  iVar1 = FUN_144babbf0();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_144babc00(param_1,local_38);
      local_30 = 0;
      puVar5 = (undefined4 *)0x0;
      lVar3 = FUN_1455dc510(uVar2,0x9c);
      if (lVar3 != 0) {
        local_30 = *(longlong *)(lVar3 + 8);
      }
      lVar3 = FUN_1455dc510(uVar2,0x9d);
      if (lVar3 != 0) {
        puVar5 = *(undefined4 **)(lVar3 + 8);
      }
      iVar1 = FUN_1455dc530(uVar2);
      if (iVar1 == 0x96) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          uVar2 = FUN_1455dc630(uVar2);
          lVar3 = FUN_144efe5a0(uVar2);
          *param_4 = lVar3;
          bVar6 = lVar3 == 0;
LAB_145501cb8:
          if (bVar6) {
            return 0;
          }
        }
      }
      else if (iVar1 == 0x97) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          lVar3 = FUN_1455dc670(uVar2,param_2,param_3);
          if (lVar3 == 0) {
            return 0;
          }
          lVar4 = FUN_144efe5a0(lVar3);
          *param_4 = lVar4;
          FUN_144efe440(lVar3);
          bVar6 = *param_4 == 0;
          goto LAB_145501cb8;
        }
      }
      else if (iVar1 == 0x98) {
        iVar1 = FUN_1455dc550(uVar2);
        if (iVar1 == 0x9e) {
          lVar3 = FUN_1455dc590(uVar2);
          if (lVar3 == 0) {
            return 0;
          }
          if ((puVar5 != (undefined4 *)0x0) &&
             (iVar1 = FUN_144f02410(lVar3,*(undefined8 *)(puVar5 + 2),*puVar5), iVar1 == 0)) {
LAB_145501ce9:
            FUN_144b47250(lVar3);
            return 0;
          }
          if ((local_30 != 0) && (iVar1 = FUN_14526c520(&local_28,local_30), -1 < iVar1)) {
            iVar1 = FUN_144f02330(lVar3,local_28,iVar1);
            FUN_144ea6530(local_28,"crypto\\pkcs12\\p12_kiss.c",0xe3);
            if (iVar1 == 0) goto LAB_145501ce9;
          }
          iVar1 = FUN_144bac1c0(param_5,lVar3);
          if (iVar1 == 0) goto LAB_145501ce9;
        }
      }
      else if (iVar1 == 0x9b) {
        uVar2 = FUN_1455dc5f0(uVar2);
        iVar1 = FUN_145501ac0(uVar2,param_2,param_3,param_4,param_5);
        bVar6 = iVar1 == 0;
        goto LAB_145501cb8;
      }
      local_38 = local_38 + 1;
      iVar1 = FUN_144babbf0(param_1);
    } while (local_38 < iVar1);
  }
  return 1;
}



// FUNCTION 145501d10 FUN_145501d10 body=106 status=ok
// SIG undefined FUN_145501d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_145501d10(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145501d1c;
  puVar1 = (undefined4 *)FUN_144ea6670(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = 0;
    return puVar1;
  }
  FUN_144ba24f0(0x2c,0x6d,0x41,"crypto\\store\\store_lib.c",0x100,uVar2);
  return (undefined4 *)0x0;
}



// FUNCTION 145501d80 FUN_145501d80 body=98 status=ok
// SIG undefined FUN_145501d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_145501d80(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145501d8c;
  puVar1 = (undefined4 *)FUN_144ea6670(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x2c,0x6e,0x41,"crypto\\store\\store_lib.c",0x11c,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 145501df0 FUN_145501df0 body=98 status=ok
// SIG undefined FUN_145501df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_145501df0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145501dfc;
  puVar1 = (undefined4 *)FUN_144ea6670(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x2c,0x6f,0x41,"crypto\\store\\store_lib.c",0x126,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 3;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 145501e60 FUN_145501e60 body=98 status=ok
// SIG undefined FUN_145501e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_145501e60(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145501e6c;
  puVar1 = (undefined4 *)FUN_144ea6670(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x2c,0x6a,0x41,"crypto\\store\\store_lib.c",0x130,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 4;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 145501ed0 FUN_145501ed0 body=98 status=ok
// SIG undefined FUN_145501ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_145501ed0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145501edc;
  puVar1 = (undefined4 *)FUN_144ea6670(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x2c,0x6b,0x41,"crypto\\store\\store_lib.c",0x13a,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 5;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 145501f40 FUN_145501f40 body=3 status=ok
// SIG undefined FUN_145501f40(void)

undefined4 FUN_145501f40(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 145501f50 FUN_145501f50 body=177 status=ok
// SIG undefined FUN_145501f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145501f50(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  switch(*param_1) {
  case 1:
    FUN_144ea6530(*(undefined8 *)(param_1 + 2),"crypto\\store\\store_lib.c",0x1c7);
    uVar1 = 0x1c8;
LAB_145501f97:
    FUN_144ea6530(*(undefined8 *)(param_1 + 4),"crypto\\store\\store_lib.c",uVar1);
    break;
  case 2:
  case 3:
    FUN_144ba6e60(*(undefined8 *)(param_1 + 2));
    break;
  case 4:
    FUN_144b47250(*(undefined8 *)(param_1 + 2));
    break;
  case 5:
    FUN_144ee8210(*(undefined8 *)(param_1 + 2));
    break;
  case 0xffffffff:
    FUN_144ea7070(*(undefined8 *)(param_1 + 2));
    uVar1 = 0x1c4;
    goto LAB_145501f97;
  }
  FUN_144ea6530(param_1,"crypto\\store\\store_lib.c",0x1d7);
  return;
}



// FUNCTION 145502020 FUN_145502020 body=3 status=ok
// SIG undefined FUN_145502020(void)

undefined4 FUN_145502020(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 145502030 FUN_145502030 body=5 status=ok
// SIG undefined FUN_145502030(void)

undefined8 FUN_145502030(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 145502040 FUN_145502040 body=230 status=ok
// SIG undefined FUN_145502040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_145502040(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x145502055;
  puVar1 = (undefined4 *)FUN_144ea6670(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 2) = param_2;
    *puVar1 = 0xffffffff;
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144ea6dc0(param_1,"crypto\\store\\store_lib.c",0x26a);
    }
    *(longlong *)(puVar1 + 4) = lVar2;
    if ((param_1 != 0) && (lVar2 == 0)) {
      FUN_144ba24f0(0x2c,0x7b,0x41,"crypto\\store\\store_lib.c",0x26e,uVar3);
      FUN_145501f50(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    return puVar1;
  }
  FUN_144ba24f0(0x2c,0x7b,0x41,"crypto\\store\\store_lib.c",0x264,uVar3);
  return (undefined4 *)0x0;
}



// FUNCTION 145502130 FUN_145502130 body=13 status=ok
// SIG undefined FUN_145502130(void)

undefined8 FUN_145502130(int *param_1)

{
  if (*param_1 == -1) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}



// FUNCTION 145502140 FUN_145502140 body=13 status=ok
// SIG undefined FUN_145502140(void)

undefined8 FUN_145502140(int *param_1)

{
  if (*param_1 == -1) {
    return *(undefined8 *)(param_1 + 4);
  }
  return 0;
}



// FUNCTION 145502150 FUN_145502150 body=24 status=ok
// SIG undefined FUN_145502150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502150(void)

{
  FUN_145502170(0);
  return;
}



// FUNCTION 145502170 FUN_145502170 body=239 status=ok
// SIG undefined FUN_145502170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_145502170(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x145502180;
  plVar2 = (longlong *)FUN_144ea6670(0x30,"crypto\\ui\\ui_lib.c",0x19);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x1c,uVar5);
    return (longlong *)0x0;
  }
  lVar3 = FUN_144e985a0();
  plVar2[5] = lVar3;
  if (lVar3 == 0) {
    FUN_144ba24f0(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x22,uVar5);
    uVar4 = 0x23;
  }
  else {
    if (param_1 == 0) {
      param_1 = FUN_14550b8d0();
      if (param_1 == 0) {
        param_1 = FUN_1455dc800();
      }
    }
    *plVar2 = param_1;
    iVar1 = FUN_144ea5c20(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar4 = 0x2e;
  }
  FUN_144ea6530(plVar2,"crypto\\ui\\ui_lib.c",uVar4);
  return (longlong *)0x0;
}



// FUNCTION 145502260 FUN_145502260 body=107 status=ok
// SIG undefined FUN_145502260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502260(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
    }
    FUN_144babe00(param_1[1],FUN_145502be0);
    FUN_144ea6040(0xb,param_1,param_1 + 3);
    FUN_144e98660(param_1[5]);
    FUN_144ea6530(param_1,"crypto\\ui\\ui_lib.c",0x53);
  }
  return;
}



// FUNCTION 1455022d0 FUN_1455022d0 body=157 status=ok
// SIG undefined FUN_1455022d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1455022d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_145502c70(param_1,param_2,0,1,param_3,param_4);
  if (lVar1 == 0) {
LAB_145502321:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = FUN_144babca0();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_145502be0(lVar1);
        goto LAB_145502321;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    uVar3 = FUN_144bac1c0(*(undefined8 *)(param_1 + 8),lVar1);
    if ((int)uVar3 < 1) {
      FUN_145502be0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}



// FUNCTION 145502370 FUN_145502370 body=158 status=ok
// SIG undefined FUN_145502370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145502370(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_145502c70(param_1,param_2,0,2,param_3,param_4);
  if (lVar1 == 0) {
LAB_1455023c1:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = FUN_144babca0();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_145502be0(lVar1);
        goto LAB_1455023c1;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = param_7;
    uVar3 = FUN_144bac1c0(*(undefined8 *)(param_1 + 8),lVar1);
    if ((int)uVar3 < 1) {
      FUN_145502be0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}



// FUNCTION 145502410 FUN_145502410 body=342 status=ok
// SIG undefined FUN_145502410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502410(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    local_34 = 0x65746e45;
    local_30 = 0x2072;
    local_2e = 0;
    local_2c = 0x726f6620;
    local_28 = 0x20;
    local_38[0] = 0x3a;
    if (param_2 != 0) {
      lVar3 = -1;
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_2 + lVar2) != '\0');
      iVar1 = (int)lVar2 + 6;
      if (param_3 != 0) {
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(param_3 + lVar3) != '\0');
        iVar1 = (int)lVar2 + 0xb + (int)lVar3;
      }
      lVar3 = (longlong)(iVar1 + 2);
      lVar2 = FUN_144ea64e0(lVar3,"crypto\\ui\\ui_lib.c",0x179);
      if (lVar2 == 0) {
        local_48 = 0x17a;
        FUN_144ba24f0(0x28,0x79,0x41,"crypto\\ui\\ui_lib.c");
      }
      else {
        FUN_144ea68a0(lVar2,&local_34,lVar3);
        FUN_144ea6900(lVar2,param_2,lVar3);
        if (param_3 != 0) {
          FUN_144ea6900(lVar2,&local_2c,lVar3);
          FUN_144ea6900(lVar2,param_3,lVar3);
        }
        FUN_144ea6900(lVar2,local_38,lVar3);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x40))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 145502580 FUN_145502580 body=71 status=ok
// SIG undefined FUN_145502580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145502580(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,lVar1);
    lVar1 = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  param_1[2] = param_2;
  return lVar1;
}



// FUNCTION 1455025d0 FUN_1455025d0 body=5 status=ok
// SIG undefined FUN_1455025d0(void)

undefined8 FUN_1455025d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1455025e0 FUN_1455025e0 body=446 status=ok
// SIG undefined FUN_1455025e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_1455025e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar7;
  char *pcVar6;
  
  uVar7 = 0x1455025f5;
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 < 1)) {
    pcVar4 = "opening session";
    pcVar6 = (char *)0xffffffff;
    goto LAB_145502711;
  }
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    FUN_145500890(FUN_145502d50,param_1);
  }
  pcVar4 = (char *)0x0;
  iVar1 = FUN_144babbf0(param_1[1]);
  pcVar6 = pcVar4;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x10) != 0) {
        uVar2 = FUN_144babc00(param_1[1],pcVar6);
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
        if (iVar1 < 1) {
          pcVar4 = "writing strings";
          pcVar6 = (char *)0xffffffff;
          goto LAB_145502711;
        }
      }
      uVar5 = (int)pcVar6 + 1;
      pcVar6 = (char *)(ulonglong)uVar5;
      iVar1 = FUN_144babbf0(param_1[1]);
    } while ((int)uVar5 < iVar1);
  }
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 == -1) {
LAB_145502748:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      pcVar4 = "processing";
      pcVar6 = (char *)0xfffffffe;
      goto LAB_145502711;
    }
    if (iVar1 == 0) {
      pcVar4 = "flushing";
      pcVar6 = (char *)0xffffffff;
      goto LAB_145502711;
    }
  }
  iVar1 = FUN_144babbf0(param_1[1]);
  pcVar3 = pcVar4;
  pcVar6 = pcVar4;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x20) != 0) {
        uVar2 = FUN_144babc00(param_1[1],pcVar3);
        iVar1 = (**(code **)(*param_1 + 0x20))(param_1,uVar2);
        if (iVar1 == -1) goto LAB_145502748;
        if (iVar1 == 0) {
          pcVar4 = "reading strings";
          pcVar6 = (char *)0xffffffff;
          break;
        }
      }
      uVar5 = (int)pcVar3 + 1;
      iVar1 = FUN_144babbf0(param_1[1]);
      pcVar3 = (char *)(ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
  }
LAB_145502711:
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), 0 < iVar1)) {
    if ((int)pcVar6 != -1) {
      return pcVar6;
    }
  }
  else {
    pcVar3 = "closing session";
    if (pcVar4 != (char *)0x0) {
      pcVar3 = pcVar4;
    }
    pcVar6 = (char *)0xffffffff;
    pcVar4 = pcVar3;
  }
  FUN_144ba24f0(0x28,0x71,0x6b,"crypto\\ui\\ui_lib.c",0x221,uVar7);
  FUN_144ba2bd0(2,"while ",pcVar4);
  return pcVar6;
}



// FUNCTION 1455027a0 FUN_1455027a0 body=7 status=ok
// SIG undefined FUN_1455027a0(void)

undefined8 FUN_1455027a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_2;
}



// FUNCTION 1455027b0 FUN_1455027b0 body=202 status=ok
// SIG undefined FUN_1455027b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1455027b0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1455027c0;
  plVar2 = (longlong *)FUN_144ea6670(0x50,"crypto\\ui\\ui_lib.c",0x259);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144ea6dc0(param_1,"crypto\\ui\\ui_lib.c",0x25a);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_144ea5c20(0xe,plVar2,plVar2 + 9);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    FUN_144ea6530(*plVar2,"crypto\\ui\\ui_lib.c",0x25e);
  }
  FUN_144ea6530(plVar2,"crypto\\ui\\ui_lib.c",0x25f);
  FUN_144ba24f0(0x28,0x70,0x41,"crypto\\ui\\ui_lib.c",0x260,uVar4);
  return (longlong *)0x0;
}



// FUNCTION 145502880 FUN_145502880 body=92 status=ok
// SIG undefined FUN_145502880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502880(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ea6040(0xe,param_1,param_1 + 9);
    FUN_144ea6530(*param_1,"crypto\\ui\\ui_lib.c",0x271);
    *param_1 = 0;
    FUN_144ea6530(param_1,"crypto\\ui\\ui_lib.c",0x273);
  }
  return;
}



// FUNCTION 1455028e0 FUN_1455028e0 body=16 status=ok
// SIG undefined FUN_1455028e0(void)

undefined8 FUN_1455028e0(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 1455028f0 FUN_1455028f0 body=16 status=ok
// SIG undefined FUN_1455028f0(void)

undefined8 FUN_1455028f0(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145502900 FUN_145502900 body=16 status=ok
// SIG undefined FUN_145502900(void)

undefined8 FUN_145502900(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145502910 FUN_145502910 body=16 status=ok
// SIG undefined FUN_145502910(void)

undefined8 FUN_145502910(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 145502920 FUN_145502920 body=13 status=ok
// SIG undefined FUN_145502920(void)

undefined8 FUN_145502920(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 145502930 FUN_145502930 body=13 status=ok
// SIG undefined FUN_145502930(void)

undefined8 FUN_145502930(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 145502940 FUN_145502940 body=13 status=ok
// SIG undefined FUN_145502940(void)

undefined8 FUN_145502940(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



// FUNCTION 145502950 FUN_145502950 body=13 status=ok
// SIG undefined FUN_145502950(void)

undefined8 FUN_145502950(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



// FUNCTION 145502960 FUN_145502960 body=3 status=ok
// SIG undefined FUN_145502960(void)

undefined4 FUN_145502960(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 145502970 FUN_145502970 body=4 status=ok
// SIG undefined FUN_145502970(void)

undefined4 FUN_145502970(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 145502980 FUN_145502980 body=5 status=ok
// SIG undefined FUN_145502980(void)

undefined8 FUN_145502980(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 145502990 FUN_145502990 body=13 status=ok
// SIG undefined FUN_145502990(void)

undefined8 FUN_145502990(int *param_1)

{
  if (*param_1 != 3) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 1455029a0 FUN_1455029a0 body=17 status=ok
// SIG undefined FUN_1455029a0(void)

undefined8 FUN_1455029a0(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return *(undefined8 *)(param_1 + 6);
  }
  return 0;
}



// FUNCTION 1455029c0 FUN_1455029c0 body=13 status=ok
// SIG undefined FUN_1455029c0(void)

undefined8 FUN_1455029c0(int *param_1)

{
  if (*param_1 != 2) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xc);
}



// FUNCTION 1455029d0 FUN_1455029d0 body=36 status=ok
// SIG undefined FUN_1455029d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455029d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_3 + lVar1) != '\0');
  FUN_145502a00();
  return;
}



// FUNCTION 145502a00 FUN_145502a00 body=458 status=ok
// SIG undefined FUN_145502a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502a00(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  char *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x145502a0f;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  iVar2 = *param_2;
  _Size = (size_t)param_4;
  if (iVar2 < 1) goto LAB_145502bbd;
  if (iVar2 < 3) {
    FUN_144ec7760(local_48,0xd,&DAT_149dfc0ac,param_2[10]);
    FUN_144ec7760(local_58,0xd,&DAT_149dfc0ac,param_2[0xb]);
    if (param_4 < param_2[10]) {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x389);
      uVar4 = 0x65;
    }
    else {
      if (param_4 <= param_2[0xb]) {
        if (*(void **)(param_2 + 6) != (void *)0x0) {
          memcpy(*(void **)(param_2 + 6),param_3,_Size);
          if (param_4 <= param_2[0xb]) {
            *(undefined1 *)(_Size + *(longlong *)(param_2 + 6)) = 0;
          }
          *(size_t *)(param_2 + 8) = _Size;
          goto LAB_145502bbd;
        }
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x398);
        goto LAB_145502b81;
      }
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x390);
      uVar4 = 100;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    FUN_144ba24f0(0x28,0x78,uVar4,"crypto\\ui\\ui_lib.c");
    local_60 = " characters";
    local_68 = local_58;
    FUN_144ba2bd0(5,"You must type in ",local_48,&DAT_149d9a514);
  }
  else {
    if (iVar2 != 3) goto LAB_145502bbd;
    if (*(undefined1 **)(param_2 + 6) != (undefined1 *)0x0) {
      **(undefined1 **)(param_2 + 6) = 0;
      cVar1 = *param_3;
      while (cVar1 != '\0') {
        pcVar3 = strchr(*(char **)(param_2 + 0xc),(int)*param_3);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xc);
          break;
        }
        pcVar3 = strchr(*(char **)(param_2 + 0xe),(int)*param_3);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xe);
          break;
        }
        param_3 = param_3 + 1;
        cVar1 = *param_3;
      }
      goto LAB_145502bbd;
    }
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3a6);
LAB_145502b81:
    FUN_144ba24f0(0x28,0x78,0x69,"crypto\\ui\\ui_lib.c");
  }
LAB_145502bbd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 145502be0 FUN_145502be0 body=141 status=ok
// SIG undefined FUN_145502be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502be0(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 2),"crypto\\ui\\ui_lib.c",0x37);
    if (*param_1 == 3) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 10),"crypto\\ui\\ui_lib.c",0x3a);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0xc),"crypto\\ui\\ui_lib.c",0x3b);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0xe),"crypto\\ui\\ui_lib.c",0x3c);
    }
  }
  FUN_144ea6530(param_1,"crypto\\ui\\ui_lib.c",0x46);
  return;
}



// FUNCTION 145502c70 FUN_145502c70 body=219 status=ok
// SIG undefined FUN_145502c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_145502c70(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                   longlong param_6)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (param_2 == 0) {
    FUN_144ba24f0(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,0x145502c8b);
  }
  else if ((param_4 - 1U < 3) && (param_6 == 0)) {
    FUN_144ba24f0(0x28,0x6d,0x69,"crypto\\ui\\ui_lib.c",0x6c,0x145502c8b);
  }
  else {
    piVar1 = (int *)FUN_144ea64e0(0x48,"crypto\\ui\\ui_lib.c");
    if (piVar1 != (int *)0x0) {
      *(longlong *)(piVar1 + 2) = param_2;
      piVar1[4] = param_5;
      piVar1[0x10] = (uint)(param_3 != 0);
      *piVar1 = param_4;
      *(longlong *)(piVar1 + 6) = param_6;
    }
  }
  return piVar1;
}



// FUNCTION 145502d50 FUN_145502d50 body=110 status=ok
// SIG undefined FUN_145502d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145502d50(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x145502d5a;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58 = 5;
  if (*(code **)(*param_3 + 0x10) != (code *)0x0) {
    local_50 = param_1;
    iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_58);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 145502dc0 FUN_145502dc0 body=42 status=ok
// SIG undefined FUN_145502dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502dc0(longlong param_1)

{
  FUN_145507070();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 145502df0 FUN_145502df0 body=370 status=ok
// SIG undefined FUN_145502df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145502df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = 0;
  uVar7 = 0;
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar3 = uVar5;
  if ((param_5 == 0) && (uVar3 = FUN_144eedd20(), param_5 = uVar3, uVar3 == 0)) {
    return 0;
  }
  lVar4 = FUN_144ece690();
  uVar8 = uVar5;
  if (lVar4 != 0) {
    iVar1 = FUN_144ece810(lVar4,param_2,param_5);
    uVar8 = uVar7;
    if (iVar1 == 0) {
      FUN_144ba24f0(0x10,0xbd,3,"crypto\\ec\\ecp_mont.c",CONCAT44(uVar9,0x9e));
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_144ba0570();
      if (uVar5 != 0) {
        uVar6 = FUN_144ba03c0();
        iVar1 = FUN_144ba1260(uVar5,uVar6,lVar4,param_5);
        if (iVar1 != 0) {
          *(longlong *)(param_1 + 0x78) = lVar4;
          *(ulonglong *)(param_1 + 0x80) = uVar5;
          lVar4 = 0;
          uVar5 = 0;
          uVar2 = FUN_1455071f0(param_1,param_2,param_3,param_4,param_5);
          uVar8 = (ulonglong)uVar2;
          if (uVar2 == 0) {
            FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x80));
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
        }
      }
    }
  }
  FUN_144ba0cd0(uVar5);
  FUN_144eeddc0(uVar3);
  FUN_144ece7b0(lVar4);
  return uVar8;
}



// FUNCTION 145502f70 FUN_145502f70 body=71 status=ok
// SIG undefined FUN_145502f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502f70(longlong param_1)

{
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1455070f0(param_1);
  return;
}



// FUNCTION 145502fc0 FUN_145502fc0 body=71 status=ok
// SIG undefined FUN_145502fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145502fc0(longlong param_1)

{
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_145507130(param_1);
  return;
}



// FUNCTION 145503010 FUN_145503010 body=193 status=ok
// SIG undefined FUN_145503010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145503010(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = FUN_145507170(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    lVar2 = FUN_144ece690();
    *(longlong *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_144eceaa0(lVar2,*(undefined8 *)(param_2 + 0x78));
    if (lVar2 == 0) goto LAB_1455030a3;
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
    return 1;
  }
  lVar2 = FUN_144ba0e20();
  *(longlong *)(param_1 + 0x80) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
LAB_1455030a3:
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}



// FUNCTION 1455030e0 FUN_1455030e0 body=90 status=ok
// SIG undefined FUN_1455030e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455030e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_144ba24f0(0x10,0x83,0x6f,"crypto\\ec\\ecp_mont.c",0xc0,0x1455030ec);
    return 0;
  }
  uVar1 = FUN_144ece730(param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 145503140 FUN_145503140 body=86 status=ok
// SIG undefined FUN_145503140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145503140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_144ba24f0(0x10,0x84,0x6f,"crypto\\ec\\ecp_mont.c",0xcb);
    return 0;
  }
  uVar1 = FUN_144ece730(param_2,param_3,param_3,*(longlong *)(param_1 + 0x78),param_4);
  return uVar1;
}



// FUNCTION 1455031a0 FUN_1455031a0 body=289 status=ok
// SIG undefined FUN_1455031a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455031a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x78) == 0) {
LAB_1455031d8:
    lVar4 = 0;
  }
  else {
    lVar5 = 0;
    if (param_4 == 0) {
      param_4 = FUN_144eedd90();
      lVar5 = param_4;
      if (param_4 == 0) goto LAB_1455031d8;
    }
    FUN_144eede20(param_4);
    lVar2 = FUN_144eede90(param_4);
    lVar4 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_144ba0bb0(lVar2,2);
      lVar4 = lVar3;
      if (iVar1 != 0) {
        iVar1 = FUN_144eee270(lVar2,*(undefined8 *)(param_1 + 0x40),lVar2);
        if (iVar1 != 0) {
          lVar3 = param_4;
          iVar1 = FUN_1452a5f00(param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x40),param_4,
                                *(undefined8 *)(param_1 + 0x78));
          uVar6 = (undefined4)((ulonglong)lVar3 >> 0x20);
          if (iVar1 != 0) {
            iVar1 = FUN_144ba0340(param_2);
            if (iVar1 == 0) {
              lVar4 = 1;
            }
            else {
              FUN_144ba24f0(0x10,0x129,0xa5,"crypto\\ec\\ecp_mont.c",CONCAT44(uVar6,0xf6));
            }
          }
        }
      }
    }
    FUN_144eedf20(param_4);
    FUN_144eeddc0(lVar5);
  }
  return lVar4;
}



// FUNCTION 1455032d0 FUN_1455032d0 body=82 status=ok
// SIG undefined FUN_1455032d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455032d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_144ba24f0(0x10,0x86,0x6f,"crypto\\ec\\ecp_mont.c",0x106);
    return 0;
  }
  uVar1 = FUN_144ba1260(param_2,param_3);
  return uVar1;
}



// FUNCTION 145503330 FUN_145503330 body=82 status=ok
// SIG undefined FUN_145503330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145503330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_144ba24f0(0x10,0x85,0x6f,"crypto\\ec\\ecp_mont.c",0x111);
    return 0;
  }
  uVar1 = FUN_144ece770(param_2,param_3);
  return uVar1;
}



// FUNCTION 145503390 FUN_145503390 body=91 status=ok
// SIG undefined FUN_145503390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145503390(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_144ba24f0(0x10,0xd1,0x6f,"crypto\\ec\\ecp_mont.c",0x11c);
    return false;
  }
  lVar1 = FUN_144ba06b0(param_2);
  return lVar1 != 0;
}



// FUNCTION 1455033f0 FUN_1455033f0 body=8 status=ok
// SIG undefined FUN_1455033f0(void)

undefined * FUN_1455033f0(void)

{
  return &DAT_149d9a540;
}



// FUNCTION 145503400 FUN_145503400 body=546 status=ok
// SIG undefined FUN_145503400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145503400(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14550341b;
  if (*(int *)(param_4 + 0x28) != 0) {
    do {
      iVar1 = FUN_144ba03d0(param_1[8]);
      iVar1 = FUN_1452983c0(*(undefined8 *)(param_3 + 0x20),iVar1 + -1,0xffffffff,0);
      if (iVar1 == 0) {
        FUN_144ba24f0(0x10,0x120,3,"crypto\\ec\\ec2_smpl.c",0x2bd,uVar2);
        return 0;
      }
      iVar1 = FUN_144ba0340(*(undefined8 *)(param_3 + 0x20));
    } while (iVar1 != 0);
    if (((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
        (iVar1 = (**(code **)(*param_1 + 0x128))
                           (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20),
                            param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) {
      do {
        iVar1 = FUN_144ba03d0(param_1[8]);
        iVar1 = FUN_1452983c0(*(undefined8 *)(param_2 + 0x18),iVar1 + -1,0xffffffff,0);
        if (iVar1 == 0) {
          FUN_144ba24f0(0x10,0x120,3,"crypto\\ec\\ec2_smpl.c",0x2cc);
          return 0;
        }
        iVar1 = FUN_144ba0340(*(undefined8 *)(param_2 + 0x18));
      } while (iVar1 != 0);
      if (((((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
            (iVar1 = (**(code **)(*param_1 + 0x128))
                               (param_1,*(undefined8 *)(param_2 + 0x18),
                                *(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) &&
           ((iVar1 = (**(code **)(*param_1 + 0x110))
                               (param_1,*(undefined8 *)(param_2 + 0x20),
                                *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0 &&
            ((iVar1 = (**(code **)(*param_1 + 0x110))
                                (param_1,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0 &&
             (iVar1 = FUN_1455da9d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                                    param_1[0xd]), iVar1 != 0)))))) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              param_5), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10)
                             ,*(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) {
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145503630 FUN_145503630 body=511 status=ok
// SIG undefined FUN_145503630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145503630(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x108))
                    (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                     *(undefined8 *)(param_3 + 0x10),param_5,0x145503650);
  if (((((iVar1 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_2 + 0x20),
                           param_5), iVar1 != 0)) &&
      ((((iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10)
                             ,param_5), iVar1 != 0 &&
         (iVar1 = FUN_1455da9d0(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_2 + 0x18),
                                *(undefined8 *)(param_3 + 0x10)), iVar1 != 0)) &&
        ((iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20)
                             ,param_5), iVar1 != 0 &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_3 + 0x10),
                              *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x10),
                              param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + 0x10),
                              param_5), iVar1 != 0)))))) &&
       (iVar1 = FUN_1455da9d0(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x10),
                              *(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
     ((((iVar1 = (**(code **)(*param_1 + 0x110))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                            param_5), iVar1 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            *(undefined8 *)(param_3 + 0x18),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_5), iVar1 != 0)) &&
      ((iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_1[0xd],param_5), iVar1 != 0 &&
       (iVar1 = FUN_1455da9d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x18)), iVar1 != 0)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145503830 FUN_145503830 body=929 status=ok
// SIG undefined FUN_145503830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145503830(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_res10 = 0;
  iVar1 = FUN_144ba0340(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar2 = FUN_144efc8b0(param_1,param_2);
    return uVar2;
  }
  iVar1 = FUN_144ba0340(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 0) {
    iVar1 = FUN_144efc830(param_2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_144efcdb0(param_1,param_2,param_5);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_144ba24f0(0x10,0x11d,0x10,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar6,0x311));
    return 0;
  }
  FUN_144eede20(param_5);
  uVar3 = FUN_144eede90(param_5);
  uVar4 = FUN_144eede90(param_5);
  lVar5 = FUN_144eede90(param_5);
  if (lVar5 == 0) {
    FUN_144ba24f0(0x10,0x11d,0x41,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar6,0x31c));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x108))
                      (param_1,uVar3,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20)
                       ,param_5);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))
                        (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                         *(undefined8 *)(param_2 + 0x20),param_5);
      if (iVar1 != 0) {
        iVar1 = FUN_1455da9d0(uVar4,*(undefined8 *)(param_2 + 0x10),uVar4);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),
                             *(undefined8 *)(param_3 + 0x20),param_5);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_2 + 0x10),lVar5,param_5);
            if (iVar1 != 0) {
              iVar1 = FUN_1455da9d0(lVar5,lVar5,*(undefined8 *)(param_3 + 0x10));
              if (iVar1 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar4,lVar5,param_5);
                if (iVar1 != 0) {
                  iVar1 = (**(code **)(*param_1 + 0x110))
                                    (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),param_5);
                  if (iVar1 != 0) {
                    iVar1 = FUN_1455da9d0(lVar5,*(undefined8 *)(param_4 + 0x18),lVar5);
                    if (iVar1 != 0) {
                      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar5,lVar5,uVar3,param_5);
                      if (iVar1 != 0) {
                        iVar1 = FUN_1455da9d0(uVar4,lVar5,uVar4);
                        if (iVar1 != 0) {
                          iVar1 = (**(code **)(*param_1 + 0x108))
                                            (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),uVar3,
                                             param_5);
                          if (iVar1 != 0) {
                            iVar1 = (**(code **)(*param_1 + 0x120))(param_1,lVar5,lVar5,param_5);
                            if (iVar1 != 0) {
                              iVar1 = (**(code **)(*param_1 + 0x108))
                                                (param_1,uVar4,uVar4,lVar5,param_5);
                              if (iVar1 != 0) {
                                iVar1 = (**(code **)(*param_1 + 0x108))
                                                  (param_1,*(undefined8 *)(param_2 + 0x10),
                                                   *(undefined8 *)(param_2 + 0x20),lVar5,param_5);
                                if (iVar1 != 0) {
                                  iVar1 = FUN_1455da9d0(lVar5,*(undefined8 *)(param_4 + 0x10),
                                                        *(undefined8 *)(param_2 + 0x10));
                                  if (iVar1 != 0) {
                                    iVar1 = (**(code **)(*param_1 + 0x108))
                                                      (param_1,lVar5,lVar5,uVar4,param_5);
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_1455da9d0(*(undefined8 *)(param_2 + 0x18),
                                                            *(undefined8 *)(param_4 + 0x18),lVar5);
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_144ba0bb0(*(undefined8 *)(param_2 + 0x20),1);
                                        if (iVar1 != 0) {
                                          *(undefined4 *)(param_2 + 0x28) = 1;
                                          FUN_144ba0b80(*(undefined8 *)(param_2 + 0x10),0);
                                          FUN_144ba0b80(*(undefined8 *)(param_2 + 0x18),0);
                                          local_res10 = 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_144eedf20(param_5);
  return (ulonglong)local_res10;
}



// FUNCTION 145503be0 FUN_145503be0 body=450 status=ok
// SIG undefined FUN_145503be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145503be0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar6 = 0x145503bf8;
  if (((1 < param_4) || (iVar1 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
     (iVar1 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
    uVar2 = FUN_1452ae6c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar6);
    return uVar2;
  }
  if (param_3 == 0) {
    if (param_4 == 1) {
      uVar2 = FUN_1452af3b0(param_1,param_2,*param_6,*param_5,param_7);
      return uVar2;
    }
  }
  else if (param_4 == 0) {
    uVar2 = FUN_1452af3b0(param_1,param_2,param_3,0,param_7);
    return uVar2;
  }
  lVar3 = FUN_144efc690(param_1);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x10,0x121,0x41,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar5,0x36b));
    return 0;
  }
  iVar1 = FUN_1452af3b0(param_1,lVar3,param_3,0,param_7);
  uVar4 = 0;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_1452af3b0(param_1,param_2,*param_6,*param_5,param_7), uVar4 = 0, iVar1 != 0)) {
    iVar1 = FUN_144efcc60(param_1,param_2,lVar3,param_2,param_7);
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar4 = 1;
    }
  }
  FUN_144efc7a0(lVar3);
  return (ulonglong)uVar4;
}



// FUNCTION 145503db0 FUN_145503db0 body=84 status=ok
// SIG undefined FUN_145503db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145503db0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145503dbc;
  uVar1 = FUN_1455dac40(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  if ((int)uVar1 == 0) {
    FUN_144ba24f0(0x10,0x128,0xa5,"crypto\\ec\\ec2_smpl.c",0x386,uVar2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 145503e10 FUN_145503e10 body=108 status=ok
// SIG undefined FUN_145503e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145503e10(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = FUN_144ba0570();
  *(longlong *)(param_1 + 0x68) = lVar2;
  if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  FUN_144ba0cd0();
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x60));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x68));
  return 0;
}



// FUNCTION 145503e80 FUN_145503e80 body=50 status=ok
// SIG undefined FUN_145503e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145503e80(longlong param_1)

{
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x40));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x60));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 145503ec0 FUN_145503ec0 body=71 status=ok
// SIG undefined FUN_145503ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145503ec0(longlong param_1)

{
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x40));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x60));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 145503f10 FUN_145503f10 body=221 status=ok
// SIG undefined FUN_145503f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145503f10(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar2 != 0) {
    lVar2 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar2 != 0) {
      lVar2 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_2 + 0x48);
        *(int *)(param_1 + 0x48) = iVar1;
        iVar1 = iVar1 + 0x3f;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        lVar2 = FUN_144ba1290(*(undefined8 *)(param_1 + 0x60),
                              (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6);
        if (lVar2 != 0) {
          iVar1 = *(int *)(param_1 + 0x48) + 0x3f;
          lVar2 = FUN_144ba1290(*(undefined8 *)(param_1 + 0x68),
                                (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6);
          if (lVar2 != 0) {
            FUN_1452992a0(*(undefined8 *)(param_1 + 0x60));
            FUN_1452992a0(*(undefined8 *)(param_1 + 0x68));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 145503ff0 FUN_145503ff0 body=292 status=ok
// SIG undefined FUN_145503ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145503ff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x145504005;
  lVar2 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x40));
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_1455dbf50(*(undefined8 *)(param_1 + 0x40),param_1 + 0x48,6);
  if ((iVar1 - 4U & 0xfffffffd) == 0) {
    iVar1 = FUN_1455dade0(*(undefined8 *)(param_1 + 0x60),param_3,param_1 + 0x48);
    if ((iVar1 != 0) &&
       (iVar1 = *(int *)(param_1 + 0x48) + 0x3f,
       lVar2 = FUN_144ba1290(*(undefined8 *)(param_1 + 0x60),
                             (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6), lVar2 != 0)) {
      FUN_1452992a0(*(undefined8 *)(param_1 + 0x60));
      iVar1 = FUN_1455dade0(*(undefined8 *)(param_1 + 0x68),param_4,param_1 + 0x48);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(param_1 + 0x48) + 0x3f,
         lVar2 = FUN_144ba1290(*(undefined8 *)(param_1 + 0x68),
                               (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6), lVar2 != 0)) {
        FUN_1452992a0(*(undefined8 *)(param_1 + 0x68));
        return 1;
      }
    }
  }
  else {
    FUN_144ba24f0(0x10,0xc3,0x83,"crypto\\ec\\ec2_smpl.c",0x6a,uVar3);
  }
  return 0;
}



// FUNCTION 145504120 FUN_145504120 body=137 status=ok
// SIG undefined FUN_145504120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145504120(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (lVar1 = FUN_144ba06b0(param_2,*(undefined8 *)(param_1 + 0x40)), lVar1 == 0)
     ) {
    return 0;
  }
  if (((param_3 == 0) ||
      (lVar1 = FUN_144ba06b0(param_3,*(undefined8 *)(param_1 + 0x60)), lVar1 != 0)) &&
     ((param_4 == 0 || (lVar1 = FUN_144ba06b0(param_4,*(undefined8 *)(param_1 + 0x68)), lVar1 != 0))
     )) {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1455041b0 FUN_1455041b0 body=29 status=ok
// SIG undefined FUN_1455041b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1455041b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x40));
  return iVar1 + -1;
}



// FUNCTION 1455041d0 FUN_1455041d0 body=207 status=ok
// SIG undefined FUN_1455041d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1455041d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1455041eb;
  lVar4 = 0;
  uVar3 = 0;
  if ((param_2 == 0) && (param_2 = FUN_144eedd20(), lVar4 = param_2, param_2 == 0)) {
    FUN_144ba24f0(0x10,0x9f,0x41,"crypto\\ec\\ec2_smpl.c",0xb9,uVar5);
  }
  else {
    FUN_144eede20(param_2);
    lVar2 = FUN_144eede90(param_2);
    if ((lVar2 != 0) &&
       (iVar1 = FUN_1455dade0(lVar2,*(undefined8 *)(param_1 + 0x68),param_1 + 0x48), uVar3 = 0,
       iVar1 != 0)) {
      iVar1 = FUN_144ba0340(lVar2);
      uVar3 = 0;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
    }
  }
  FUN_144eedf20(param_2);
  FUN_144eeddc0(lVar4);
  return uVar3;
}



// FUNCTION 1455042a0 FUN_1455042a0 body=108 status=ok
// SIG undefined FUN_1455042a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455042a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = FUN_144ba0570();
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  FUN_144ba0cd0();
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x18));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 145504310 FUN_145504310 body=50 status=ok
// SIG undefined FUN_145504310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145504310(longlong param_1)

{
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x10));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x18));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 145504350 FUN_145504350 body=58 status=ok
// SIG undefined FUN_145504350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145504350(longlong param_1)

{
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x10));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x18));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 145504390 FUN_145504390 body=120 status=ok
// SIG undefined FUN_145504390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145504390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if (lVar1 != 0) {
    lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    if (lVar1 != 0) {
      lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145504410 FUN_145504410 body=41 status=ok
// SIG undefined FUN_145504410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145504410(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_144ba0bb0(*(undefined8 *)(param_2 + 0x20),0,param_3,param_4,0x14550441a);
  return 1;
}



// FUNCTION 145504440 FUN_145504440 body=208 status=ok
// SIG undefined FUN_145504440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145504440(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = FUN_144ba06b0(*(undefined8 *)(param_2 + 0x10),param_3);
    if (lVar1 != 0) {
      FUN_144ba0b80(*(undefined8 *)(param_2 + 0x10),0);
      lVar1 = FUN_144ba06b0(*(undefined8 *)(param_2 + 0x18),param_4);
      if (lVar1 != 0) {
        FUN_144ba0b80(*(undefined8 *)(param_2 + 0x18),0);
        uVar2 = FUN_144ba03c0();
        lVar1 = FUN_144ba06b0(*(undefined8 *)(param_2 + 0x20),uVar2);
        if (lVar1 != 0) {
          FUN_144ba0b80(*(undefined8 *)(param_2 + 0x20),0);
          uVar3 = 1;
          *(undefined4 *)(param_2 + 0x28) = 1;
        }
      }
    }
    return uVar3;
  }
  FUN_144ba24f0(0x10,0xa3,0x43,"crypto\\ec\\ec2_smpl.c",0x11f,0x145504455);
  return 0;
}



// FUNCTION 145504510 FUN_145504510 body=239 status=ok
// SIG undefined FUN_145504510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145504510(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14550452a;
  iVar1 = FUN_144efce30();
  if (iVar1 == 0) {
    uVar2 = FUN_144ba03c0();
    iVar1 = FUN_144ba0c40(*(undefined8 *)(param_2 + 0x20),uVar2);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        lVar3 = FUN_144ba06b0(param_3,*(undefined8 *)(param_2 + 0x10));
        if (lVar3 == 0) {
          return 0;
        }
        FUN_144ba0b80(param_3,0);
      }
      if (param_4 != 0) {
        lVar3 = FUN_144ba06b0(param_4,*(undefined8 *)(param_2 + 0x18));
        if (lVar3 == 0) {
          return 0;
        }
        FUN_144ba0b80(param_4,0);
      }
      uVar4 = 1;
    }
    else {
      FUN_144ba24f0(0x10,0xa2,0x42,"crypto\\ec\\ec2_smpl.c",0x146,uVar5);
      uVar4 = 0;
    }
  }
  else {
    FUN_144ba24f0(0x10,0xa2,0x6a,"crypto\\ec\\ec2_smpl.c",0x140,uVar5);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 145504600 FUN_145504600 body=1031 status=ok
// SIG undefined FUN_145504600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145504600(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  lVar2 = 0;
  bVar13 = false;
  iVar1 = FUN_144efce30(param_1,param_3);
  lVar10 = param_4;
  if ((iVar1 != 0) || (iVar1 = FUN_144efce30(param_1,param_4), lVar10 = param_3, iVar1 != 0)) {
    iVar1 = FUN_144efc830(param_2,lVar10);
    return iVar1 != 0;
  }
  if ((param_5 == 0) && (lVar2 = FUN_144eedd20(), param_5 = lVar2, lVar2 == 0)) {
    return false;
  }
  FUN_144eede20(param_5);
  uVar3 = FUN_144eede90(param_5);
  uVar4 = FUN_144eede90(param_5);
  uVar5 = FUN_144eede90(param_5);
  uVar6 = FUN_144eede90(param_5);
  uVar7 = FUN_144eede90(param_5);
  uVar8 = FUN_144eede90(param_5);
  uVar9 = FUN_144eede90(param_5);
  lVar10 = FUN_144eede90(param_5);
  if (lVar10 != 0) {
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar1 = FUN_144efcb20(param_1,param_3,uVar3,uVar4,param_5);
      bVar12 = iVar1 == 0;
    }
    else {
      lVar11 = FUN_144ba06b0(uVar3,*(undefined8 *)(param_3 + 0x10));
      if (lVar11 == 0) goto LAB_1455049cf;
      lVar11 = FUN_144ba06b0(uVar4,*(undefined8 *)(param_3 + 0x18));
      bVar12 = lVar11 == 0;
    }
    if (!bVar12) {
      if (*(int *)(param_4 + 0x28) == 0) {
        iVar1 = FUN_144efcb20(param_1,param_4,uVar5,uVar6,param_5);
        if (iVar1 == 0) goto LAB_1455049cf;
      }
      else {
        lVar11 = FUN_144ba06b0(uVar5,*(undefined8 *)(param_4 + 0x10));
        if ((lVar11 == 0) ||
           (lVar11 = FUN_144ba06b0(uVar6,*(undefined8 *)(param_4 + 0x18)), lVar11 == 0))
        goto LAB_1455049cf;
      }
      iVar1 = FUN_144ba0ef0(uVar3,uVar5);
      if (iVar1 == 0) {
        iVar1 = FUN_144ba0ef0(uVar4,uVar6);
        if ((iVar1 != 0) || (iVar1 = FUN_144ba0340(uVar5), iVar1 != 0)) {
          iVar1 = FUN_144efc8b0(param_1,param_2);
          bVar13 = iVar1 != 0;
          goto LAB_1455049cf;
        }
        iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar9,uVar6,uVar5,param_5);
        if ((((iVar1 == 0) || (iVar1 = FUN_1455da9d0(uVar9,uVar9,uVar5), iVar1 == 0)) ||
            (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar7,uVar9,param_5), iVar1 == 0)) ||
           (iVar1 = FUN_1455da9d0(uVar7,uVar7,uVar9), iVar1 == 0)) goto LAB_1455049cf;
        lVar10 = param_1[0xc];
      }
      else {
        iVar1 = FUN_1455da9d0(lVar10,uVar3,uVar5);
        if ((((iVar1 == 0) || (iVar1 = FUN_1455da9d0(uVar9,uVar4,uVar6), iVar1 == 0)) ||
            ((iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar9,uVar9,lVar10,param_5),
             iVar1 == 0 ||
             ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar7,uVar9,param_5), iVar1 == 0 ||
              (iVar1 = FUN_1455da9d0(uVar7,uVar7,param_1[0xc]), iVar1 == 0)))))) ||
           (iVar1 = FUN_1455da9d0(uVar7,uVar7,uVar9), iVar1 == 0)) goto LAB_1455049cf;
      }
      iVar1 = FUN_1455da9d0(uVar7,uVar7,lVar10);
      if (((((iVar1 != 0) && (iVar1 = FUN_1455da9d0(uVar8,uVar5,uVar7), iVar1 != 0)) &&
           (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar8,uVar8,uVar9,param_5), iVar1 != 0))
          && ((iVar1 = FUN_1455da9d0(uVar8,uVar8,uVar7), iVar1 != 0 &&
              (iVar1 = FUN_1455da9d0(uVar8,uVar8,uVar6), iVar1 != 0)))) &&
         (iVar1 = FUN_144efc9b0(param_1,param_2,uVar7,uVar8,param_5), iVar1 != 0)) {
        bVar13 = true;
      }
    }
  }
LAB_1455049cf:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(lVar2);
  return bVar13;
}



// FUNCTION 145504a10 FUN_145504a10 body=31 status=ok
// SIG undefined FUN_145504a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145504a10(void)

{
  FUN_145504600();
  return;
}



// FUNCTION 145504a30 FUN_145504a30 body=141 status=ok
// SIG undefined FUN_145504a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145504a30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144efce30();
  if (iVar1 == 0) {
    iVar1 = FUN_144ba0340(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = FUN_144efcfd0(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      uVar2 = FUN_1455da9d0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 145504ac0 FUN_145504ac0 body=26 status=ok
// SIG undefined FUN_145504ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145504ac0(undefined8 param_1,longlong param_2)

{
  FUN_144ba0340(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 145504ae0 FUN_145504ae0 body=377 status=ok
// SIG undefined FUN_145504ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145504ae0(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar4 = 0xffffffff;
  uVar7 = 0xffffffff;
  iVar3 = FUN_144efce30();
  if (iVar3 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar8 = 0;
    if ((param_3 == 0) && (param_3 = FUN_144eedd20(), lVar8 = param_3, param_3 == 0)) {
      return 0xffffffff;
    }
    FUN_144eede20(param_3);
    uVar5 = FUN_144eede90(param_3);
    lVar6 = FUN_144eede90(param_3);
    if (((((lVar6 != 0) &&
          (iVar3 = FUN_1455da9d0(lVar6,*(undefined8 *)(param_2 + 0x10),param_1[0xc]), uVar4 = uVar7,
          iVar3 != 0)) &&
         (iVar3 = (*pcVar1)(param_1,lVar6,lVar6,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 != 0
         )) && ((iVar3 = FUN_1455da9d0(lVar6,lVar6,*(undefined8 *)(param_2 + 0x18)), iVar3 != 0 &&
                (iVar3 = (*pcVar1)(param_1,lVar6,lVar6,*(undefined8 *)(param_2 + 0x10),param_3),
                iVar3 != 0)))) &&
       ((iVar3 = FUN_1455da9d0(lVar6,lVar6,param_1[0xd]), iVar3 != 0 &&
        ((iVar3 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_2 + 0x18),param_3), iVar3 != 0 &&
         (iVar3 = FUN_1455da9d0(lVar6,lVar6,uVar5), iVar3 != 0)))))) {
      uVar4 = FUN_144ba0340(lVar6);
    }
    FUN_144eedf20(param_3);
    FUN_144eeddc0(lVar8);
  }
  return uVar4;
}



// FUNCTION 145504c60 FUN_145504c60 body=409 status=ok
// SIG undefined FUN_145504c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145504c60(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  iVar1 = FUN_144efce30();
  if (iVar1 == 0) {
    iVar1 = FUN_144efce30(param_1,param_3);
    if (iVar1 == 0) {
      if ((*(int *)(param_2 + 0x28) == 0) || (*(int *)(param_3 + 0x28) == 0)) {
        uVar8 = uVar6;
        uVar7 = 0xffffffff;
        if ((param_4 != 0) || (param_4 = FUN_144eedd20(), uVar8 = param_4, param_4 != 0)) {
          FUN_144eede20(param_4);
          uVar2 = FUN_144eede90(param_4);
          uVar3 = FUN_144eede90(param_4);
          uVar4 = FUN_144eede90(param_4);
          lVar5 = FUN_144eede90(param_4);
          if ((((lVar5 != 0) &&
               (iVar1 = FUN_144efcb20(param_1,param_2,uVar2,uVar3,param_4), uVar7 = 0xffffffff,
               iVar1 != 0)) &&
              (iVar1 = FUN_144efcb20(param_1,param_3,uVar4,lVar5,param_4), iVar1 != 0)) &&
             ((iVar1 = FUN_144ba0c40(uVar2,uVar4), iVar1 != 0 ||
              (iVar1 = FUN_144ba0c40(uVar3,lVar5), uVar7 = uVar6, iVar1 != 0)))) {
            uVar7 = 1;
          }
          FUN_144eedf20(param_4);
          FUN_144eeddc0(uVar8);
        }
      }
      else {
        iVar1 = FUN_144ba0c40(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
        if ((iVar1 != 0) ||
           (iVar1 = FUN_144ba0c40(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18)),
           uVar7 = uVar6, iVar1 != 0)) {
          uVar7 = 1;
        }
      }
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    iVar1 = FUN_144efce30(param_1,param_3);
    uVar7 = (ulonglong)(iVar1 == 0);
  }
  return uVar7;
}



// FUNCTION 145504e00 FUN_145504e00 body=276 status=ok
// SIG undefined FUN_145504e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145504e00(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((*(int *)(param_2 + 0x28) != 0) || (iVar1 = FUN_144efce30(), iVar1 != 0)) {
    return 1;
  }
  lVar2 = 0;
  if ((param_3 == 0) && (lVar2 = FUN_144eedd20(), param_3 = lVar2, lVar2 == 0)) {
    return 0;
  }
  FUN_144eede20(param_3);
  uVar3 = FUN_144eede90(param_3);
  lVar4 = FUN_144eede90(param_3);
  lVar6 = 0;
  if ((((lVar4 != 0) &&
       (iVar1 = FUN_144efcb20(param_1,param_2,uVar3,lVar4,param_3), lVar6 = lVar5, iVar1 != 0)) &&
      (lVar5 = FUN_144ba06b0(*(undefined8 *)(param_2 + 0x10),uVar3), lVar5 != 0)) &&
     ((lVar5 = FUN_144ba06b0(*(undefined8 *)(param_2 + 0x18),lVar4), lVar5 != 0 &&
      (iVar1 = FUN_144ba0bb0(*(undefined8 *)(param_2 + 0x20),1), iVar1 != 0)))) {
    *(undefined4 *)(param_2 + 0x28) = 1;
    lVar6 = 1;
  }
  FUN_144eedf20(param_3);
  FUN_144eeddc0(lVar2);
  return lVar6;
}



// FUNCTION 145504f20 FUN_145504f20 body=131 status=ok
// SIG undefined FUN_145504f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145504f20(longlong *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined8 *)(param_3 + uVar2 * 8),param_4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}



// FUNCTION 145504fb0 FUN_145504fb0 body=47 status=ok
// SIG undefined FUN_145504fb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145504fb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1455db070(param_2,param_3,param_4,param_1 + 0x48);
  return;
}



// FUNCTION 145504fe0 FUN_145504fe0 body=38 status=ok
// SIG undefined FUN_145504fe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145504fe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1455db330(param_2,param_3,param_1 + 0x48);
  return;
}



// FUNCTION 145505010 FUN_145505010 body=47 status=ok
// SIG undefined FUN_145505010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145505010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1455dad30(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 145505040 FUN_145505040 body=8 status=ok
// SIG undefined FUN_145505040(void)

undefined * FUN_145505040(void)

{
  return &DAT_149d9a710;
}



// FUNCTION 145505110 FUN_145505110 body=8 status=ok
// SIG undefined FUN_145505110(void)

undefined * FUN_145505110(void)

{
  return &DAT_149d9a8e0;
}



// FUNCTION 145505120 FUN_145505120 body=223 status=ok
// SIG undefined FUN_145505120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145505120(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    lVar3 = FUN_144b9e8a0();
    lVar4 = FUN_144b9f4a0(param_1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar1 = FUN_144b9eb80(lVar4,param_2,param_3);
    }
    iVar2 = FUN_144b9e8c0(param_1);
    if (((iVar2 == 0) || (iVar1 < 1)) || (iVar2 = FUN_144ba5c70(lVar3,param_2,iVar1), iVar2 != 0)) {
      if (lVar4 != 0) {
        FUN_144b9e640(param_1,0xf);
        FUN_144b9f4c0(param_1);
      }
    }
    else {
      FUN_144b9e640(param_1,0xf);
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 145505200 FUN_145505200 body=190 status=ok
// SIG undefined FUN_145505200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145505200(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FUN_144b9e8a0();
  lVar4 = FUN_144b9f4a0(param_1);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_144b9e930(lVar4,param_2,param_3);
    iVar2 = FUN_144b9e8c0(param_1);
    if (((iVar2 != 0) && (0 < iVar1)) && (iVar2 = FUN_144ba5c70(lVar3,param_2,iVar1), iVar2 < 1)) {
      return -1;
    }
    FUN_144b9e640(param_1,0xf);
    FUN_144b9f4c0(param_1);
  }
  return iVar1;
}



// FUNCTION 1455052c0 FUN_1455052c0 body=92 status=ok
// SIG undefined FUN_1455052c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1455052c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_res18 [4];
  
  plVar2 = (longlong *)FUN_144b9e8a0();
  if (param_3 < *(int *)(*plVar2 + 8)) {
    return 0;
  }
  iVar1 = FUN_144ba5ca0(plVar2,param_2,local_res18);
  if (iVar1 < 1) {
    local_res18[0] = 0xffffffff;
  }
  return local_res18[0];
}



// FUNCTION 145505320 FUN_145505320 body=376 status=ok
// SIG undefined FUN_145505320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145505320(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4
                       )

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar1 = 1;
  puVar3 = (undefined8 *)FUN_144b9e8a0();
  uVar4 = FUN_144b9f4a0(param_1);
  switch(param_2) {
  case 1:
    iVar2 = FUN_144b9e8c0(param_1);
    if (iVar2 == 0) goto LAB_1455053f6;
    uVar1 = FUN_144ba5a20(puVar3,*puVar3,0);
    if ((int)uVar1 < 1) break;
  default:
    uVar1 = FUN_144b9efc0(uVar4,param_2,param_3,param_4);
    break;
  case 0xc:
    uVar4 = FUN_144b9e8a0(param_4);
    uVar5 = FUN_144ba5840(uVar4,puVar3);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    goto LAB_1455053fd;
  case 0x65:
    FUN_144b9e640(param_1,0xf);
    uVar1 = FUN_144b9efc0(uVar4,param_2,param_3,param_4);
    FUN_144b9f4c0(param_1);
    break;
  case 0x6f:
    uVar1 = FUN_144ba5a20(puVar3,param_4,0);
    if (0 < (int)uVar1) {
      FUN_144b9e8b0(param_1,1);
    }
    break;
  case 0x70:
    iVar2 = FUN_144b9e8c0(param_1);
    if (iVar2 != 0) {
      *param_4 = *puVar3;
      break;
    }
    goto LAB_1455053f6;
  case 0x78:
    *param_4 = puVar3;
LAB_1455053fd:
    FUN_144b9e8b0(param_1,1);
    break;
  case 0x94:
    iVar2 = FUN_144b9e8c0(param_1);
    if (iVar2 != 0) {
      FUN_144b9e890(param_1,param_4);
      uVar1 = 1;
      break;
    }
LAB_1455053f6:
    uVar1 = 0;
  }
  return (ulonglong)uVar1;
}



// FUNCTION 145505550 FUN_145505550 body=86 status=ok
// SIG undefined FUN_145505550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145505550(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba5700();
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144b9e8b0(param_1,1);
  FUN_144b9e890(param_1,lVar1);
  return 1;
}



// FUNCTION 1455055b0 FUN_1455055b0 body=75 status=ok
// SIG undefined FUN_1455055b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455055b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144b9e8a0();
  FUN_144ba5800(uVar1);
  FUN_144b9e890(param_1,0);
  FUN_144b9e8b0(param_1,0);
  return 1;
}



// FUNCTION 145505600 FUN_145505600 body=68 status=ok
// SIG undefined FUN_145505600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145505600(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144b9f4a0();
  if (lVar1 == 0) {
    return;
  }
  FUN_144b9f100(lVar1,param_2,param_3);
  return;
}



// FUNCTION 145505650 FUN_145505650 body=8 status=ok
// SIG undefined FUN_145505650(void)

undefined * FUN_145505650(void)

{
  return &DAT_149d9a940;
}



// FUNCTION 145505660 FUN_145505660 body=415 status=ok
// SIG undefined FUN_145505660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145505660(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  
  piVar3 = (int *)FUN_144b9e8a0();
  lVar4 = FUN_144b9f4a0(param_1);
  if ((piVar3 == (int *)0x0) || (lVar4 == 0)) {
    return 0;
  }
  FUN_144b9e640(param_1,0xf);
  for (iVar5 = *piVar3 - piVar3[1]; 0 < iVar5; iVar5 = iVar5 - iVar1) {
    iVar1 = FUN_144b9eb80(lVar4,(longlong)piVar3[1] + 0x30 + (longlong)piVar3,iVar5);
    if (iVar1 < 1) {
      FUN_144b9f4c0(param_1);
      return iVar1;
    }
    piVar3[1] = piVar3[1] + iVar1;
  }
  if ((param_2 == 0) || (param_3 < 1)) {
LAB_1455057ec:
    param_3 = 0;
  }
  else {
    piVar3[1] = 0;
    iVar5 = param_3;
    do {
      iVar1 = iVar5;
      if (0x1000 < iVar5) {
        iVar1 = 0x1000;
      }
      iVar2 = FUN_144ba5050(*(undefined8 *)(piVar3 + 6),piVar3 + 0xc,piVar3,param_2,iVar1);
      if (iVar2 == 0) {
        FUN_144b9e640(param_1,0xf);
        piVar3[4] = 0;
        goto LAB_1455057ec;
      }
      iVar5 = iVar5 - iVar1;
      iVar2 = *piVar3;
      param_2 = param_2 + iVar1;
      piVar3[1] = 0;
      for (; 0 < iVar2; iVar2 = iVar2 - iVar1) {
        iVar1 = FUN_144b9eb80(lVar4,(longlong)piVar3[1] + 0x30 + (longlong)piVar3,iVar2);
        if (iVar1 < 1) {
          FUN_144b9f4c0(param_1);
          if (param_3 == iVar5) {
            return iVar1;
          }
          return param_3 - iVar5;
        }
        piVar3[1] = piVar3[1] + iVar1;
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
    } while (0 < iVar5);
    FUN_144b9f4c0(param_1);
  }
  return param_3;
}



// FUNCTION 145505800 FUN_145505800 body=693 status=ok
// SIG undefined FUN_145505800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145505800(undefined8 param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int local_res20 [2];
  
  uVar10 = 0;
  if (param_2 == (void *)0x0) {
    return 0;
  }
  puVar5 = (uint *)FUN_144b9e8a0();
  lVar6 = FUN_144b9f4a0(param_1);
  if ((puVar5 == (uint *)0x0) || (lVar6 == 0)) {
    uVar10 = 0;
  }
  else {
    if (0 < (int)*puVar5) {
      uVar9 = *puVar5 - puVar5[1];
      if ((int)param_3 < (int)uVar9) {
        uVar9 = param_3;
      }
      uVar10 = (ulonglong)uVar9;
      memcpy(param_2,(void *)((longlong)(int)puVar5[1] + 0x30 + (longlong)puVar5),
             (longlong)(int)uVar9);
      puVar5[1] = puVar5[1] + uVar9;
      param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar9);
      param_3 = param_3 - uVar9;
      if (*puVar5 == puVar5[1]) {
        puVar5[0] = 0;
        puVar5[1] = 0;
      }
    }
    iVar2 = FUN_144ba3dd0(*(undefined8 *)(puVar5 + 6));
    if (iVar2 == 1) {
      iVar2 = 0;
    }
    if (0 < (int)param_3) {
      while (0 < (int)puVar5[2]) {
        if (*(longlong *)(puVar5 + 8) == *(longlong *)(puVar5 + 10)) {
          puVar1 = puVar5 + 0x54;
          *(uint **)(puVar5 + 8) = puVar1;
          *(uint **)(puVar5 + 10) = puVar1;
          iVar3 = FUN_144b9e930(lVar6,puVar1,0x1000);
          uVar8 = (ulonglong)iVar3;
          if (0 < iVar3) {
            *(ulonglong *)(puVar5 + 10) = *(longlong *)(puVar5 + 10) + uVar8;
            goto LAB_14550592a;
          }
LAB_14550592e:
          iVar3 = FUN_144b9e630(lVar6,8);
          if (iVar3 != 0) {
            if ((int)uVar10 == 0) {
              uVar10 = uVar8 & 0xffffffff;
            }
            break;
          }
          puVar5[2] = (uint)uVar8;
          uVar9 = FUN_144ba5080(*(undefined8 *)(puVar5 + 6),puVar5 + 0xc,puVar5);
          puVar5[4] = uVar9;
          puVar5[1] = 0;
LAB_145505a00:
          uVar9 = param_3;
          if ((int)*puVar5 <= (int)param_3) {
            uVar9 = *puVar5;
          }
          if ((int)uVar9 < 1) break;
          memcpy(param_2,puVar5 + 0xc,(longlong)(int)uVar9);
          uVar10 = (ulonglong)((int)uVar10 + uVar9);
          puVar5[1] = uVar9;
          param_3 = param_3 - uVar9;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar9);
        }
        else {
          uVar8 = (ulonglong)((int)*(longlong *)(puVar5 + 10) - puVar5[8]);
LAB_14550592a:
          iVar3 = (int)uVar8;
          if (iVar3 < 1) goto LAB_14550592e;
          if ((int)param_3 < 0x101) {
LAB_1455059c3:
            if (0x100 < iVar3) {
              iVar3 = 0x100;
            }
            iVar4 = FUN_144ba5050(*(undefined8 *)(puVar5 + 6),puVar5 + 0xc,puVar5,
                                  *(undefined8 *)(puVar5 + 8),iVar3);
            if (iVar4 == 0) {
              FUN_144b9e640(param_1,0xf);
              puVar5[4] = 0;
              return 0;
            }
            *(longlong *)(puVar5 + 8) = *(longlong *)(puVar5 + 8) + (longlong)iVar3;
            puVar5[2] = 1;
            if (*puVar5 == 0) goto LAB_145505a2d;
            goto LAB_145505a00;
          }
          iVar7 = param_3 - iVar2;
          iVar4 = iVar3;
          if (iVar7 < iVar3) {
            iVar4 = iVar7;
          }
          iVar4 = FUN_144ba5050(*(undefined8 *)(puVar5 + 6),param_2,local_res20,
                                *(undefined8 *)(puVar5 + 8),iVar4);
          if (iVar4 == 0) {
            FUN_144b9e640(param_1,0xf);
            return 0;
          }
          iVar3 = iVar3 - iVar7;
          uVar10 = (ulonglong)(uint)((int)uVar10 + local_res20[0]);
          param_2 = (void *)((longlong)param_2 + (longlong)local_res20[0]);
          param_3 = param_3 - local_res20[0];
          if (0 < iVar3) {
            *(longlong *)(puVar5 + 8) = *(longlong *)(puVar5 + 8) + (longlong)iVar7;
            goto LAB_1455059c3;
          }
          *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 10);
        }
LAB_145505a2d:
        if ((int)param_3 < 1) break;
      }
    }
    FUN_144b9e640(param_1,0xf);
    FUN_144b9f4c0(param_1);
    if ((int)uVar10 == 0) {
      uVar10 = (ulonglong)puVar5[2];
    }
  }
  return uVar10;
}



// FUNCTION 145505ac0 FUN_145505ac0 body=661 status=ok
// SIG undefined FUN_145505ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145505ac0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = 0x145505ae2;
  iVar10 = 1;
  piVar4 = (int *)FUN_144b9e8a0();
  uVar5 = FUN_144b9f4a0(param_1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  switch(param_2) {
  case 1:
    piVar4[3] = 0;
    piVar4[4] = 1;
    uVar12 = uVar5;
    uVar2 = FUN_144ba3dc0(*(undefined8 *)(piVar4 + 6));
    iVar10 = FUN_144ba4d00(*(undefined8 *)(piVar4 + 6),0,0,0,0,uVar2,uVar12,uVar13);
    if (iVar10 == 0) goto LAB_145505b82;
  default:
switchD_145505b4e_caseD_3:
LAB_145505b98:
    iVar10 = FUN_144b9efc0(uVar5,param_2,param_3,param_4);
    break;
  case 2:
    if (piVar4[2] < 1) {
      return 1;
    }
    goto switchD_145505b4e_caseD_3;
  case 10:
  case 0xd:
    if (0 < *piVar4 - piVar4[1]) {
      return *piVar4 - piVar4[1];
    }
    goto switchD_145505b4e_caseD_3;
  case 0xb:
    iVar11 = 0;
    do {
      iVar10 = *piVar4;
      iVar1 = piVar4[1];
      if (iVar10 != iVar1) {
        do {
          iVar9 = iVar10 - iVar1;
          piVar6 = (int *)FUN_144b9e8a0(param_1);
          lVar7 = FUN_144b9f4a0(param_1);
          iVar3 = iVar11;
          if ((piVar6 != (int *)0x0) && (lVar7 != 0)) {
            FUN_144b9e640(param_1,0xf);
            for (iVar10 = *piVar6 - piVar6[1]; iVar3 = iVar11, 0 < iVar10; iVar10 = iVar10 - iVar3)
            {
              iVar3 = FUN_144b9eb80(lVar7,(longlong)piVar6[1] + 0x30 + (longlong)piVar6,iVar10);
              if (iVar3 < 1) {
                FUN_144b9f4c0(param_1);
                if (iVar3 < 0) {
                  return iVar3;
                }
                break;
              }
              piVar6[1] = piVar6[1] + iVar3;
            }
          }
          iVar10 = *piVar4;
          iVar1 = piVar4[1];
          if (iVar10 - iVar1 == iVar9) {
            return iVar3;
          }
        } while (iVar10 != iVar1);
      }
      if (piVar4[3] != 0) goto LAB_145505b98;
      piVar4[3] = 1;
      piVar4[1] = 0;
      iVar10 = FUN_144ba5080(*(undefined8 *)(piVar4 + 6),piVar4 + 0xc,piVar4);
      piVar4[4] = iVar10;
    } while (0 < iVar10);
    break;
  case 0xc:
    lVar7 = FUN_144b9e8a0(param_4);
    lVar8 = FUN_144ba50b0();
    *(longlong *)(lVar7 + 0x18) = lVar8;
    if (lVar8 != 0) {
      iVar10 = FUN_144ba44b0(lVar8,*(undefined8 *)(piVar4 + 6));
      if (iVar10 == 0) {
        return 0;
      }
      FUN_144b9e8b0(param_4,1);
      return iVar10;
    }
LAB_145505b82:
    iVar10 = 0;
    break;
  case 0x65:
    FUN_144b9e640(param_1,0xf);
    iVar10 = FUN_144b9efc0(uVar5,param_2,param_3,param_4);
    FUN_144b9f4c0(param_1);
    break;
  case 0x71:
    iVar10 = piVar4[4];
    break;
  case 0x81:
    *param_4 = *(undefined8 *)(piVar4 + 6);
    FUN_144b9e8b0(param_1,1);
  }
  return iVar10;
}



// FUNCTION 145505e00 FUN_145505e00 body=211 status=ok
// SIG undefined FUN_145505e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145505e00(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x145505e10;
  lVar1 = FUN_144ea6670(0x1150,"crypto\\evp\\bio_enc.c",0x44);
  if (lVar1 == 0) {
    FUN_144ba24f0(6,199,0x41,"crypto\\evp\\bio_enc.c",0x45,uVar3);
    return 0;
  }
  lVar2 = FUN_144ba50b0();
  *(longlong *)(lVar1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    FUN_144ea6530(lVar1,"crypto\\evp\\bio_enc.c",0x4b);
    return 0;
  }
  *(undefined4 *)(lVar1 + 8) = 1;
  *(longlong *)(lVar1 + 0x20) = lVar1 + 0x150;
  *(longlong *)(lVar1 + 0x28) = lVar1 + 0x150;
  *(undefined4 *)(lVar1 + 0x10) = 1;
  FUN_144b9e890(param_1,lVar1);
  FUN_144b9e8b0(param_1,1);
  return 1;
}



// FUNCTION 145505ee0 FUN_145505ee0 body=131 status=ok
// SIG undefined FUN_145505ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145505ee0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_144b9e8a0();
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144ba5170(*(undefined8 *)(lVar1 + 0x18));
  FUN_144ea66f0(lVar1,0x1150,"crypto\\evp\\bio_enc.c",99);
  FUN_144b9e890(param_1,0);
  FUN_144b9e8b0(param_1,0);
  return 1;
}



// FUNCTION 145505f70 FUN_145505f70 body=68 status=ok
// SIG undefined FUN_145505f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145505f70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144b9f4a0();
  if (lVar1 == 0) {
    return;
  }
  FUN_144b9f100(lVar1,param_2,param_3);
  return;
}



// FUNCTION 145505fc0 FUN_145505fc0 body=8 status=ok
// SIG undefined FUN_145505fc0(void)

undefined * FUN_145505fc0(void)

{
  return &DAT_149d9a9b0;
}



// FUNCTION 145505fd0 FUN_145505fd0 body=103 status=ok
// SIG undefined FUN_145505fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145505fd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x145505fdc;
  if (param_2 == 0) {
    param_2 = FUN_144bafeb0(0);
    if (param_2 == 0) {
      FUN_144ba24f0(0x21,0x87,0x41,"crypto\\pkcs7\\pk7_attr.c",100,uVar1);
      return 0;
    }
  }
  uVar1 = FUN_1452a41b0(param_1,0x34,0x17,param_2);
  return uVar1;
}



// FUNCTION 145506040 FUN_145506040 body=131 status=ok
// SIG undefined FUN_145506040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145506040(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144efe930();
  if (lVar2 != 0) {
    iVar1 = FUN_144f03d00(lVar2,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_1452a41b0(param_1,0x33,4,lVar2), iVar1 != 0)) {
      return 1;
    }
    FUN_144efe950(lVar2);
  }
  return 0;
}



// FUNCTION 1455060d0 FUN_1455060d0 body=147 status=ok
// SIG undefined FUN_1455060d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1455060d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1455060ee;
  FUN_144eede20(param_4);
  lVar2 = FUN_144eede90(param_4);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    iVar1 = FUN_144ba0f40(lVar2,param_3);
    uVar3 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = FUN_144eef830(param_1,0,lVar2,param_2,param_4,uVar4);
      uVar3 = 0xffffffff;
      if (iVar1 != 0) {
        uVar3 = param_3;
      }
    }
  }
  FUN_144eedf20(param_4);
  return uVar3;
}



// FUNCTION 145506170 FUN_145506170 body=69 status=ok
// SIG undefined FUN_145506170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145506170(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ba0cd0();
    FUN_144ba0cd0(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_144ea6530(param_1,"crypto\\bn\\bn_recp.c",0x2a);
    }
  }
  return;
}



// FUNCTION 1455061c0 FUN_1455061c0 body=91 status=ok
// SIG undefined FUN_1455061c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455061c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba06b0();
  if (lVar2 == 0) {
    return 0;
  }
  FUN_144ba0bb0(param_1 + 0x18,0);
  uVar1 = FUN_144ba03d0(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 1;
}



// FUNCTION 145506220 FUN_145506220 body=199 status=ok
// SIG undefined FUN_145506220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_145506220(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x145506244;
  uVar2 = 0;
  FUN_144eede20(param_5);
  lVar3 = FUN_144eede90(param_5);
  if (lVar3 != 0) {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_1452830b0(lVar3,param_2,param_5);
      }
      else {
        iVar1 = FUN_144eee590(lVar3,param_2,param_3,param_5);
      }
      uVar2 = 0;
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_1455062bd;
    }
    uVar2 = FUN_1455062f0(0,param_1,param_2,param_4,param_5,uVar4);
  }
LAB_1455062bd:
  FUN_144eedf20(param_5);
  return uVar2;
}



// FUNCTION 1455062f0 FUN_1455062f0 body=590 status=ok
// SIG undefined FUN_1455062f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1455062f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar7;
  
  uVar6 = 0;
  uVar7 = 0;
  FUN_144eede20(param_5);
  if (param_1 == 0) {
    param_1 = FUN_144eede90(param_5);
  }
  if (param_2 == 0) {
    param_2 = FUN_144eede90(param_5);
  }
  uVar4 = FUN_144eede90(param_5);
  lVar5 = FUN_144eede90(param_5);
  uVar8 = uVar6;
  if (lVar5 != 0) {
    iVar1 = FUN_144ba0ef0(param_3,param_4);
    if (iVar1 < 0) {
      FUN_144ba0bb0(param_1,0);
      lVar5 = FUN_144ba06b0(param_2,param_3);
      if (lVar5 == 0) {
        FUN_144eedf20(param_5);
        return 0;
      }
      FUN_144eedf20(param_5);
      return 1;
    }
    iVar2 = FUN_144ba03d0(param_3);
    iVar1 = *(int *)(param_4 + 0x30) * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 != *(int *)(param_4 + 0x34)) {
      uVar3 = FUN_1455060d0(param_4 + 0x18,param_4,iVar2,param_5);
      *(undefined4 *)(param_4 + 0x34) = uVar3;
    }
    if ((((*(int *)(param_4 + 0x34) != -1) &&
         (iVar1 = FUN_144eefec0(uVar4,param_3,*(undefined4 *)(param_4 + 0x30)), uVar8 = uVar7,
         iVar1 != 0)) && (iVar1 = FUN_144eee590(lVar5,uVar4,param_4 + 0x18,param_5), iVar1 != 0)) &&
       (iVar1 = FUN_144eefec0(param_1,lVar5,iVar2 - *(int *)(param_4 + 0x30)), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar1 = FUN_144eee590(lVar5,param_4,param_1,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_144eee310(param_2,param_3,lVar5), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        iVar2 = FUN_144ba0ef0(param_2,param_4);
        iVar1 = 0;
        while (-1 < iVar2) {
          if (2 < iVar1) {
            FUN_144ba24f0(3,0x82,0x65,"crypto\\bn\\bn_recp.c",0x95);
            goto LAB_1455064f9;
          }
          iVar2 = FUN_144eee310(param_2,param_2,param_4);
          if ((iVar2 == 0) || (iVar2 = FUN_14526b1f0(param_1,1), iVar2 == 0)) goto LAB_1455064f9;
          iVar2 = FUN_144ba0ef0(param_2,param_4);
          iVar1 = iVar1 + 1;
        }
        iVar1 = FUN_144ba0340(param_2);
        if (iVar1 == 0) {
          uVar6 = *(undefined4 *)(param_3 + 0x10);
        }
        *(undefined4 *)(param_2 + 0x10) = uVar6;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_3 + 0x10) ^ *(uint *)(param_4 + 0x10);
        uVar8 = 1;
      }
    }
  }
LAB_1455064f9:
  FUN_144eedf20(param_5);
  return uVar8;
}



// FUNCTION 145506540 FUN_145506540 body=70 status=ok
// SIG undefined FUN_145506540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145506540(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_144ba1390();
  FUN_144ba1390(param_1 + 3);
  return;
}



// FUNCTION 145506590 FUN_145506590 body=2002 status=ok
// SIG undefined FUN_145506590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145506590(ulonglong *param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_1728 [32];
  undefined8 local_1708;
  ulonglong *local_16f8;
  ulonglong local_16f0;
  undefined1 *local_16e8;
  ulonglong local_16d8 [16];
  undefined1 local_1658 [64];
  undefined1 local_1618 [320];
  undefined1 auStack_14d8 [320];
  undefined1 auStack_1398 [320];
  undefined1 auStack_1258 [4608];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1455065a7;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1728;
  lVar11 = -(ulonglong)((int)&stack0x00000090 - 0x16e8U & 0x3f);
  puVar5 = local_1618 + lVar11;
  lVar6 = 0x140;
  puVar1 = auStack_1258 + lVar11;
  if (((uint)puVar5 & 0xfff) + 0x140 < 0x1000) {
    puVar10 = auStack_14d8 + lVar11;
    lVar6 = 0x280;
    puVar8 = puVar5;
  }
  else {
    puVar8 = auStack_1398 + lVar11;
    puVar10 = puVar5;
  }
  puVar5 = puVar5 + lVar6;
  local_16f8 = param_1;
  local_16f0 = param_4;
  local_16e8 = puVar1;
  FUN_1426e6ba0(puVar8,param_4);
  FUN_1426e6ba0(puVar5,param_2);
  FUN_1426e6ba0(puVar1,param_5);
  local_1708 = param_6;
  FUN_1426e5f00(puVar1,puVar1,puVar1,puVar8);
  local_1708 = param_6;
  FUN_1426e5f00(puVar1,puVar1,&DAT_149d9abc0,puVar8);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar1,&DAT_149d9aa80,puVar8);
  local_1708 = param_6;
  FUN_1426e5f00(puVar5,puVar5,puVar1,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0);
  FUN_1426e6e00(puVar1,puVar5,1);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar5,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,2);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,4);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,8);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  lVar11 = 0x10;
  FUN_1426e6e00(puVar1,puVar10,0x10);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x11);
  FUN_1426e6e60(puVar10,puVar1,2);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,3);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,6);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0xc);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x18);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x19);
  FUN_1426e6e60(puVar10,puVar1,4);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,5);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,10);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x14);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x15);
  FUN_1426e6e60(puVar10,puVar1,6);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,7);
  local_1708._0_4_ = 1;
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0xe);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x1c);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x1d);
  FUN_1426e6e60(puVar10,puVar1,8);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,9);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x12);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x13);
  FUN_1426e6e60(puVar10,puVar1,10);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0xb);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x16);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x17);
  FUN_1426e6e60(puVar10,puVar1,0xc);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0xd);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x1a);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x1b);
  FUN_1426e6e60(puVar10,puVar1,0xe);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0xf);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e00(puVar1,puVar10,0x1e);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  FUN_1426e6e00(puVar1,puVar10,0x1f);
  FUN_1426e6e60(puVar10,puVar1,param_3[0x7f] >> 3);
  puVar1 = local_16e8;
  uVar7 = 0x3f6;
  do {
    local_1708 = CONCAT44(local_1708._4_4_,5);
    FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
    bVar4 = (byte)uVar7 & 7;
    uVar3 = uVar7;
    if ((int)uVar7 < 0) {
      uVar3 = uVar7 + 7;
      bVar4 = bVar4 - 8;
    }
    uVar7 = uVar7 - 5;
    FUN_1426e6e60(puVar5,puVar1,
                  (int)(uint)CONCAT11(param_3[((int)uVar3 >> 3) + 1],param_3[(int)uVar3 >> 3]) >>
                  (bVar4 & 0x1f) & 0x1f);
    local_1708 = param_6;
    FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  } while (uVar7 < 0x80000000);
  local_1708 = CONCAT44(local_1708._4_4_,4);
  FUN_1426e5280(puVar10,puVar10,puVar8,param_6);
  FUN_1426e6e60(puVar5,puVar1,*param_3 & 0xf);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,puVar5,puVar8);
  local_1708 = param_6;
  FUN_1426e5f00(puVar10,puVar10,&DAT_149d9aa80,puVar8);
  puVar2 = local_16f8;
  FUN_1426e68e0(local_16f8,puVar10);
  lVar6 = FUN_145283b80(local_16d8,puVar2,local_16f0,0x10);
  local_16f0 = -lVar6;
  local_16f8 = (ulonglong *)~local_16f0;
  puVar9 = puVar2;
  do {
    *puVar9 = *(ulonglong *)
               ((longlong)local_16d8 + (-8 - (longlong)puVar2) + (longlong)(puVar9 + 1)) &
              (ulonglong)local_16f8 | local_16f0 & *puVar9;
    lVar11 = lVar11 + -1;
    puVar9 = puVar9 + 1;
  } while (lVar11 != 0);
  FUN_14259f0c0(local_1658,0x1600);
  FUN_14259f0c0(local_16d8,0x80);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1728);
}



// FUNCTION 145506d80 FUN_145506d80 body=720 status=ok
// SIG undefined FUN_145506d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145506d80(ulonglong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined1 auStack_598 [32];
  undefined1 *local_578;
  uint local_570;
  ulonglong local_568;
  ulonglong local_560;
  ulonglong local_558 [8];
  undefined1 local_518 [24];
  undefined1 auStack_500 [1024];
  undefined1 auStack_100 [64];
  longlong lStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x145506d97;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_598;
  lStack_c0 = -*param_4;
  uStack_b8 = ~param_4[1];
  uStack_b0 = ~param_4[2];
  uStack_a8 = ~param_4[3];
  uStack_a0 = ~param_4[4];
  uStack_98 = ~param_4[5];
  uStack_90 = ~param_4[6];
  uStack_88 = ~param_4[7];
  local_568 = param_3;
  FUN_14272e7d0(auStack_500,&lStack_c0,0);
  local_578 = (undefined1 *)param_5;
  FUN_14272d680(auStack_100,param_2,param_6,param_4);
  FUN_14272e7d0(auStack_500,auStack_100,1);
  local_578 = (undefined1 *)CONCAT44(local_578._4_4_,1);
  FUN_14272cd40(&lStack_c0,auStack_100,param_4,param_5);
  FUN_14272e7d0(auStack_500,&lStack_c0,2);
  iVar5 = 3;
  do {
    local_578 = auStack_500;
    local_570 = iVar5;
    FUN_14272df00(&lStack_c0,auStack_100,param_4,param_5);
    uVar2 = local_568;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  bVar1 = *(byte *)(local_568 + 0x3f);
  FUN_14272e800(&lStack_c0,auStack_500,bVar1 >> 4);
  local_578 = (undefined1 *)CONCAT44(local_578._4_4_,4);
  FUN_14272cd40(&lStack_c0,&lStack_c0,param_4,param_5);
  local_570 = bVar1 & 0xf;
  local_578 = (undefined1 *)param_5;
  FUN_14272d7e0(&lStack_c0,&lStack_c0,auStack_500,param_4);
  lVar4 = 0x3e;
  do {
    bVar1 = *(byte *)(lVar4 + uVar2);
    local_578 = (undefined1 *)CONCAT44(local_578._4_4_,4);
    FUN_14272cd40(&lStack_c0,&lStack_c0,param_4,param_5);
    local_570 = (uint)(bVar1 >> 4);
    local_578 = (undefined1 *)param_5;
    FUN_14272d7e0(&lStack_c0,&lStack_c0,auStack_500,param_4);
    local_578 = (undefined1 *)CONCAT44(local_578._4_4_,4);
    FUN_14272cd40(&lStack_c0,&lStack_c0,param_4,param_5);
    local_570 = bVar1 & 0xf;
    local_578 = (undefined1 *)param_5;
    FUN_14272d7e0(&lStack_c0,&lStack_c0,auStack_500,param_4);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  FUN_14272e0a0(param_1,&lStack_c0,param_4,param_5);
  lVar3 = 8;
  lVar4 = FUN_145283b80(local_558,param_1,param_4,8);
  local_568 = -lVar4;
  puVar6 = param_1;
  do {
    local_560 = ~local_568;
    *puVar6 = *(ulonglong *)
               ((longlong)local_558 + (-8 - (longlong)param_1) + (longlong)(puVar6 + 1)) &
              ~local_568 | local_568 & *puVar6;
    lVar3 = lVar3 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar3 != 0);
  FUN_14259f0c0(local_518,0x4c0);
  FUN_14259f0c0(local_558,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_598);
}



// FUNCTION 145507070 FUN_145507070 body=115 status=ok
// SIG undefined FUN_145507070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145507070(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = FUN_144ba0570();
  *(longlong *)(param_1 + 0x68) = lVar2;
  if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) && (lVar2 != 0)
     ) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return 1;
  }
  FUN_144ba0cd0();
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x60));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x68));
  return 0;
}



// FUNCTION 1455070f0 FUN_1455070f0 body=50 status=ok
// SIG undefined FUN_1455070f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455070f0(longlong param_1)

{
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x40));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x60));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 145507130 FUN_145507130 body=50 status=ok
// SIG undefined FUN_145507130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145507130(longlong param_1)

{
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x40));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x60));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 145507170 FUN_145507170 body=114 status=ok
// SIG undefined FUN_145507170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145507170(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar1 != 0) {
    lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar1 != 0) {
      lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1455071f0 FUN_1455071f0 body=464 status=ok
// SIG undefined FUN_1455071f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455071f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0x145507208;
  lVar6 = 0;
  lVar5 = 0;
  iVar1 = FUN_144ba03d0(param_2);
  if ((iVar1 < 3) || (iVar1 = FUN_144ba03a0(param_2), iVar1 == 0)) {
    FUN_144ba24f0(0x10,0xa6,0x67,"crypto\\ec\\ecp_smpl.c",0x90,uVar8);
    return 0;
  }
  lVar2 = lVar6;
  if ((param_5 == 0) && (lVar2 = FUN_144eedd20(), param_5 = lVar2, lVar2 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  lVar3 = FUN_144eede90(param_5);
  if ((lVar3 != 0) && (lVar4 = FUN_144ba06b0(param_1[8],param_2), lVar4 != 0)) {
    FUN_144ba0b80(param_1[8],0);
    iVar1 = FUN_1452a55e0(lVar3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
        lVar6 = FUN_144ba06b0(param_1[0xc],lVar3);
        bVar7 = lVar6 == 0;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xc],lVar3,param_5);
        bVar7 = iVar1 == 0;
      }
      lVar6 = lVar5;
      if ((((!bVar7) && (iVar1 = FUN_1452a55e0(param_1[0xd],param_4,param_2,param_5), iVar1 != 0))
          && ((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
              (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xd],param_1[0xd],param_5),
              iVar1 != 0)))) && (iVar1 = FUN_14526b1f0(lVar3,3), iVar1 != 0)) {
        iVar1 = FUN_144ba0c40(lVar3,param_1[8]);
        *(uint *)(param_1 + 0xe) = (uint)(iVar1 == 0);
        lVar6 = 1;
      }
    }
  }
  FUN_144eedf20(param_5);
  FUN_144eeddc0(lVar2);
  return lVar6;
}



// FUNCTION 1455073c0 FUN_1455073c0 body=277 status=ok
// SIG undefined FUN_1455073c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455073c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 0;
  if ((param_2 != 0) && (lVar2 = FUN_144ba06b0(param_2,param_1[8]), lVar2 == 0)) {
    return 0;
  }
  lVar2 = lVar4;
  if ((param_3 != 0) || (param_4 != 0)) {
    if (*(longlong *)(*param_1 + 0x130) == 0) {
      if ((param_3 != 0) && (lVar3 = FUN_144ba06b0(param_3,param_1[0xc]), lVar3 == 0))
      goto LAB_1455074b1;
      lVar2 = 0;
      if (param_4 != 0) {
        lVar2 = FUN_144ba06b0(param_4,param_1[0xd]);
        bVar5 = lVar2 == 0;
        lVar2 = lVar4;
        goto LAB_1455074a9;
      }
    }
    else {
      if ((param_5 == 0) && (param_5 = FUN_144eedd20(), lVar2 = param_5, param_5 == 0)) {
        return 0;
      }
      if ((param_3 != 0) &&
         (iVar1 = (**(code **)(*param_1 + 0x130))(param_1,param_3,param_1[0xc],param_5), iVar1 == 0)
         ) goto LAB_1455074b1;
      if (param_4 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x130))(param_1,param_4,param_1[0xd],param_5);
        bVar5 = iVar1 == 0;
LAB_1455074a9:
        if (bVar5) goto LAB_1455074b1;
      }
    }
  }
  lVar4 = 1;
LAB_1455074b1:
  FUN_144eeddc0(lVar2);
  return lVar4;
}



// FUNCTION 1455074e0 FUN_1455074e0 body=26 status=ok
// SIG undefined FUN_1455074e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455074e0(longlong param_1)

{
  FUN_144ba03d0(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 145507500 FUN_145507500 body=526 status=ok
// SIG undefined FUN_145507500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145507500(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar11;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar10;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar13 = 0x145507512;
  lVar1 = param_1[8];
  lVar10 = 0;
  lVar9 = 0;
  lVar8 = lVar10;
  lVar7 = lVar10;
  if ((param_2 == 0) && (param_2 = FUN_144eedd20(), lVar8 = param_2, param_2 == 0)) {
    FUN_144ba24f0(0x10,0xa5,0x41,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar12,0xfe),uVar13);
    goto LAB_1455076ef;
  }
  FUN_144eede20(param_2);
  uVar3 = FUN_144eede90(param_2);
  uVar13 = FUN_144eede90(param_2);
  uVar4 = FUN_144eede90(param_2);
  uVar5 = FUN_144eede90(param_2);
  lVar6 = FUN_144eede90(param_2);
  if (lVar6 == 0) goto LAB_1455076ef;
  if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
    lVar6 = FUN_144ba06b0(uVar3,param_1[0xc]);
    lVar7 = lVar9;
    if (lVar6 == 0) goto LAB_1455076ef;
    lVar7 = FUN_144ba06b0(uVar13,param_1[0xd]);
    bVar11 = lVar7 == 0;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar3,param_1[0xc],param_2);
    if (iVar2 == 0) goto LAB_1455076ef;
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar13,param_1[0xd],param_2);
    bVar11 = iVar2 == 0;
  }
  lVar7 = lVar10;
  if (bVar11) goto LAB_1455076ef;
  iVar2 = FUN_144ba0340(uVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_144ba0340(uVar13);
    if (iVar2 == 0) {
      iVar2 = FUN_1452a5860(uVar4,uVar3,lVar1,param_2);
      lVar7 = lVar9;
      if ((((iVar2 == 0) || (iVar2 = FUN_1452a57a0(uVar5,uVar4,uVar3,lVar1,param_2), iVar2 == 0)) ||
          (iVar2 = FUN_144eefdb0(uVar4,uVar5,2), iVar2 == 0)) ||
         (((iVar2 = FUN_1452a5860(uVar5,uVar13,lVar1,param_2), iVar2 == 0 ||
           (iVar2 = FUN_14526b160(uVar5,0x1b), iVar2 == 0)) ||
          (iVar2 = FUN_1452a5660(uVar3,uVar4,uVar5,lVar1,param_2), uVar13 = uVar3, iVar2 == 0))))
      goto LAB_1455076ef;
      goto LAB_1455076d1;
    }
  }
  else {
LAB_1455076d1:
    iVar2 = FUN_144ba0340(uVar13);
    lVar7 = lVar9;
    if (iVar2 != 0) goto LAB_1455076ef;
  }
  lVar7 = 1;
LAB_1455076ef:
  FUN_144eedf20(param_2);
  FUN_144eeddc0(lVar8);
  return lVar7;
}



// FUNCTION 145507710 FUN_145507710 body=115 status=ok
// SIG undefined FUN_145507710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145507710(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_144ba0570();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = FUN_144ba0570();
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  FUN_144ba0cd0();
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x18));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 145507790 FUN_145507790 body=50 status=ok
// SIG undefined FUN_145507790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145507790(longlong param_1)

{
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x10));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x18));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1455077d0 FUN_1455077d0 body=58 status=ok
// SIG undefined FUN_1455077d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455077d0(longlong param_1)

{
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x10));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x18));
  FUN_144ba0630(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 145507810 FUN_145507810 body=120 status=ok
// SIG undefined FUN_145507810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145507810(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if (lVar1 != 0) {
    lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    if (lVar1 != 0) {
      lVar1 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145507890 FUN_145507890 body=41 status=ok
// SIG undefined FUN_145507890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145507890(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_144ba0bb0(*(undefined8 *)(param_2 + 0x20),0,param_3,param_4,0x14550789a);
  return 1;
}



// FUNCTION 1455078c0 FUN_1455078c0 body=384 status=ok
// SIG undefined FUN_1455078c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455078c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar5 = 0;
  if ((param_6 == 0) && (lVar5 = FUN_144eedd20(), param_6 = lVar5, lVar5 == 0)) {
    return 0;
  }
  if (((param_3 == 0) ||
      ((iVar3 = FUN_1452a55e0(*(undefined8 *)(param_2 + 0x10),param_3,param_1[8],param_6), lVar7 = 0
       , iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x128))
                           (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            param_6), lVar7 = lVar6, iVar3 != 0)))))) &&
     ((param_4 == 0 ||
      ((iVar3 = FUN_1452a55e0(*(undefined8 *)(param_2 + 0x18),param_4,param_1[8],param_6),
       lVar7 = lVar6, iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x128))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18),
                            param_6), iVar3 != 0)))))))) {
    if (param_5 != 0) {
      iVar3 = FUN_1452a55e0(*(undefined8 *)(param_2 + 0x20),param_5,param_1[8],param_6);
      lVar7 = lVar6;
      if (iVar3 == 0) goto LAB_145507a16;
      iVar3 = FUN_144ba0350(*(undefined8 *)(param_2 + 0x20));
      pcVar1 = *(code **)(*param_1 + 0x128);
      if (pcVar1 != (code *)0x0) {
        if ((iVar3 == 0) || (pcVar2 = *(code **)(*param_1 + 0x138), pcVar2 == (code *)0x0)) {
          iVar4 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            param_6);
        }
        else {
          iVar4 = (*pcVar2)(param_1,*(undefined8 *)(param_2 + 0x20),param_6);
        }
        if (iVar4 == 0) goto LAB_145507a16;
      }
      *(int *)(param_2 + 0x28) = iVar3;
    }
    lVar7 = 1;
  }
LAB_145507a16:
  FUN_144eeddc0(lVar5);
  return lVar7;
}



// FUNCTION 145507a40 FUN_145507a40 body=317 status=ok
// SIG undefined FUN_145507a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145507a40(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = 0;
  lVar5 = 0;
  lVar2 = lVar4;
  lVar6 = lVar5;
  if (*(longlong *)(*param_1 + 0x130) == 0) {
    if (((param_3 != 0) &&
        (lVar3 = FUN_144ba06b0(param_3,*(undefined8 *)(param_2 + 0x10)), lVar3 == 0)) ||
       ((param_4 != 0 &&
        (lVar3 = FUN_144ba06b0(param_4,*(undefined8 *)(param_2 + 0x18)), lVar3 == 0))))
    goto LAB_145507b53;
    if (param_5 != 0) {
      lVar2 = FUN_144ba06b0(param_5,*(undefined8 *)(param_2 + 0x20));
      bVar7 = lVar2 == 0;
      goto LAB_145507b4b;
    }
  }
  else {
    if ((param_6 == 0) && (lVar2 = FUN_144eedd20(), param_6 = lVar2, lVar2 == 0)) {
      return 0;
    }
    if (((param_3 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x130))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_6), lVar6 = lVar4,
        iVar1 == 0)) ||
       ((param_4 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x130))
                           (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_6), lVar6 = lVar5,
        iVar1 == 0)))) goto LAB_145507b53;
    lVar4 = lVar2;
    if (param_5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x130))
                        (param_1,param_5,*(undefined8 *)(param_2 + 0x20),param_6);
      bVar7 = iVar1 == 0;
LAB_145507b4b:
      lVar2 = lVar4;
      lVar6 = lVar5;
      if (bVar7) goto LAB_145507b53;
    }
  }
  lVar2 = lVar4;
  lVar6 = 1;
LAB_145507b53:
  FUN_144eeddc0(lVar2);
  return lVar6;
}



// FUNCTION 145507b80 FUN_145507b80 body=147 status=ok
// SIG undefined FUN_145507b80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145507b80(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_144ba24f0(0x10,0xa8,0x43,"crypto\\ec\\ecp_smpl.c",0x1e7,0x145507b9a);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144ba03c0();
    uVar1 = FUN_144efc930(param_1,param_2,param_3,param_4,uVar1,param_5);
  }
  return uVar1;
}



// FUNCTION 145507c20 FUN_145507c20 body=736 status=ok
// SIG undefined FUN_145507c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_145507c20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  undefined4 local_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_48 = 0;
  iVar2 = FUN_144efce30();
  if (iVar2 != 0) {
    FUN_144ba24f0(0x10,0xa7,0x6a,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar9,0x1fb));
    return 0;
  }
  lVar7 = 0;
  if ((param_5 == 0) && (param_5 = FUN_144eedd20(), lVar7 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  uVar3 = FUN_144eede90(param_5);
  uVar4 = FUN_144eede90(param_5);
  uVar5 = FUN_144eede90(param_5);
  lVar6 = FUN_144eede90(param_5);
  if (lVar6 == 0) goto LAB_145507ec8;
  if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar3,*(undefined8 *)(param_2 + 0x20),param_5);
    if (iVar2 == 0) goto LAB_145507ec8;
  }
  iVar2 = FUN_144ba0350(uVar3);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar4,uVar3,param_5);
    if (iVar2 == 0) {
      FUN_144ba24f0(0x10,0xa7,3,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar9,0x22e));
      goto LAB_145507ec8;
    }
    if (*(longlong *)(*param_1 + 0x128) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar4);
    }
    else {
      iVar2 = FUN_1452a5860(uVar5,uVar4,param_1[8],param_5);
    }
    if ((iVar2 == 0) ||
       ((param_3 != 0 &&
        (iVar2 = (**(code **)(*param_1 + 0x108))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),uVar5,param_5),
        iVar2 == 0)))) goto LAB_145507ec8;
    if (param_4 != 0) {
      if (*(longlong *)(*param_1 + 0x128) == 0) {
        iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar6,uVar5,uVar4);
      }
      else {
        iVar2 = FUN_1452a57a0(lVar6,uVar5,uVar4,param_1[8],param_5);
      }
      if (iVar2 == 0) goto LAB_145507ec8;
      iVar2 = (**(code **)(*param_1 + 0x108))
                        (param_1,param_4,*(undefined8 *)(param_2 + 0x18),lVar6,param_5);
      goto LAB_145507ebc;
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x130);
    if (pcVar1 == (code *)0x0) {
      if ((param_3 != 0) &&
         (lVar6 = FUN_144ba06b0(param_3,*(undefined8 *)(param_2 + 0x10)), lVar6 == 0))
      goto LAB_145507ec8;
      if (param_4 != 0) {
        lVar6 = FUN_144ba06b0(param_4,*(undefined8 *)(param_2 + 0x18));
        bVar8 = lVar6 == 0;
        goto LAB_145507ebe;
      }
    }
    else {
      if ((param_3 != 0) &&
         (iVar2 = (*pcVar1)(param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_5), iVar2 == 0))
      goto LAB_145507ec8;
      if (param_4 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x130))
                          (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_5);
LAB_145507ebc:
        bVar8 = iVar2 == 0;
LAB_145507ebe:
        if (bVar8) goto LAB_145507ec8;
      }
    }
  }
  local_48 = 1;
LAB_145507ec8:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(lVar7);
  return local_48;
}



// FUNCTION 145507f00 FUN_145507f00 body=1452 status=ok
// SIG undefined FUN_145507f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145507f00(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  longlong local_48;
  
  uVar15 = 0;
  local_48 = 0;
  if (param_3 == param_4) {
    uVar5 = FUN_144efcd10();
    return uVar5;
  }
  iVar3 = FUN_144efce30(param_1,param_3);
  lVar14 = param_4;
  if ((iVar3 != 0) || (iVar3 = FUN_144efce30(param_1,param_4), lVar14 = param_3, iVar3 != 0)) {
    uVar5 = FUN_144efc830(param_2,lVar14);
    return uVar5;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  lVar14 = param_1[8];
  if ((param_5 == 0) && (param_5 = FUN_144eedd20(), local_48 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  uVar6 = FUN_144eede90(param_5);
  uVar7 = FUN_144eede90(param_5);
  uVar8 = FUN_144eede90(param_5);
  uVar9 = FUN_144eede90(param_5);
  uVar10 = FUN_144eede90(param_5);
  uVar11 = FUN_144eede90(param_5);
  lVar12 = FUN_144eede90(param_5);
  uVar4 = 0;
  if (lVar12 == 0) goto LAB_145508475;
  uVar4 = uVar15;
  if (*(int *)(param_4 + 0x28) == 0) {
    iVar3 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_4 + 0x20),param_5);
    if (((iVar3 == 0) ||
        (iVar3 = (*pcVar1)(param_1,uVar7,*(undefined8 *)(param_3 + 0x10),uVar6,param_5), iVar3 == 0)
        ) || (iVar3 = (*pcVar1)(param_1,uVar6,uVar6,*(undefined8 *)(param_4 + 0x20),param_5),
             iVar3 == 0)) goto LAB_145508475;
    iVar3 = (*pcVar1)(param_1,uVar8,*(undefined8 *)(param_3 + 0x18),uVar6,param_5);
    bVar16 = iVar3 == 0;
  }
  else {
    lVar13 = FUN_144ba06b0(uVar7,*(undefined8 *)(param_3 + 0x10));
    if (lVar13 == 0) goto LAB_145508475;
    lVar13 = FUN_144ba06b0(uVar8,*(undefined8 *)(param_3 + 0x18));
    bVar16 = lVar13 == 0;
  }
  if (bVar16) goto LAB_145508475;
  if (*(int *)(param_3 + 0x28) == 0) {
    iVar3 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_3 + 0x20),param_5);
    if (((iVar3 == 0) ||
        (iVar3 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_4 + 0x10),uVar6,param_5), iVar3 == 0)
        ) || (iVar3 = (*pcVar1)(param_1,uVar6,uVar6,*(undefined8 *)(param_3 + 0x20),param_5),
             iVar3 == 0)) goto LAB_145508475;
    iVar3 = (*pcVar1)(param_1,uVar10,*(undefined8 *)(param_4 + 0x18),uVar6,param_5);
    bVar16 = iVar3 == 0;
  }
  else {
    lVar13 = FUN_144ba06b0(uVar9,*(undefined8 *)(param_4 + 0x10));
    if (lVar13 == 0) goto LAB_145508475;
    lVar13 = FUN_144ba06b0(uVar10,*(undefined8 *)(param_4 + 0x18));
    bVar16 = lVar13 == 0;
  }
  if (((bVar16) || (iVar3 = FUN_1452a5740(uVar11,uVar7,uVar9,lVar14), iVar3 == 0)) ||
     (iVar3 = FUN_1452a5740(lVar12,uVar8,uVar10,lVar14), iVar3 == 0)) goto LAB_145508475;
  iVar3 = FUN_144ba0340(uVar11);
  if (iVar3 != 0) {
    iVar3 = FUN_144ba0340(lVar12);
    if (iVar3 == 0) {
      FUN_144ba0bb0(*(undefined8 *)(param_2 + 0x20),0);
      *(undefined4 *)(param_2 + 0x28) = 0;
      uVar4 = 1;
    }
    else {
      FUN_144eedf20(param_5);
      uVar4 = FUN_144efcd10(param_1,param_2,param_3,param_5);
      param_5 = 0;
    }
    goto LAB_145508475;
  }
  iVar3 = FUN_1452a56b0(uVar7,uVar7,uVar9,lVar14);
  if ((iVar3 == 0) || (iVar3 = FUN_1452a56b0(uVar8,uVar8,uVar10,lVar14), iVar3 == 0))
  goto LAB_145508475;
  if (*(int *)(param_3 + 0x28) == 0) {
LAB_1455082b9:
    if (*(int *)(param_4 + 0x28) == 0) {
      iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x20),
                        *(undefined8 *)(param_4 + 0x20),param_5);
      bVar16 = iVar3 == 0;
    }
    else {
      lVar13 = FUN_144ba06b0(uVar6,*(undefined8 *)(param_3 + 0x20));
      bVar16 = lVar13 == 0;
    }
LAB_1455082e8:
    if (bVar16) goto LAB_145508475;
    iVar3 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),uVar6,uVar11,param_5);
    bVar16 = iVar3 == 0;
  }
  else {
    if (*(int *)(param_4 + 0x28) == 0) {
      if (*(int *)(param_3 + 0x28) == 0) goto LAB_1455082b9;
      lVar13 = FUN_144ba06b0(uVar6,*(undefined8 *)(param_4 + 0x20));
      bVar16 = lVar13 == 0;
      goto LAB_1455082e8;
    }
    lVar13 = FUN_144ba06b0(*(undefined8 *)(param_2 + 0x20),uVar11);
    bVar16 = lVar13 == 0;
  }
  if (!bVar16) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    iVar3 = (*pcVar2)(param_1,uVar6,lVar12,param_5);
    if (((((((iVar3 != 0) && (iVar3 = (*pcVar2)(param_1,uVar10,uVar11,param_5), iVar3 != 0)) &&
           (iVar3 = (*pcVar1)(param_1,uVar9,uVar7,uVar10,param_5), iVar3 != 0)) &&
          ((iVar3 = FUN_1452a5740(*(undefined8 *)(param_2 + 0x10),uVar6,uVar9,lVar14), iVar3 != 0 &&
           (iVar3 = FUN_1452a58d0(uVar6,*(undefined8 *)(param_2 + 0x10),lVar14), iVar3 != 0)))) &&
         ((iVar3 = FUN_1452a5740(uVar6,uVar9,uVar6,lVar14), iVar3 != 0 &&
          ((iVar3 = (*pcVar1)(param_1,uVar6,uVar6,lVar12,param_5), iVar3 != 0 &&
           (iVar3 = (*pcVar1)(param_1,uVar11,uVar10,uVar11,param_5), iVar3 != 0)))))) &&
        (iVar3 = (*pcVar1)(param_1,uVar7,uVar8,uVar11,param_5), iVar3 != 0)) &&
       ((iVar3 = FUN_1452a5740(uVar6,uVar6,uVar7,lVar14), iVar3 != 0 &&
        ((iVar3 = FUN_144ba03a0(uVar6), iVar3 == 0 ||
         (iVar3 = FUN_144eee4f0(uVar6,uVar6,lVar14), iVar3 != 0)))))) {
      iVar3 = FUN_144eeff20(*(undefined8 *)(param_2 + 0x18),uVar6);
      uVar4 = (uint)(iVar3 != 0);
    }
  }
LAB_145508475:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(local_48);
  return (ulonglong)uVar4;
}



// FUNCTION 1455084b0 FUN_1455084b0 body=1077 status=ok
// SIG undefined FUN_1455084b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455084b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar13;
  longlong local_38;
  undefined8 uVar12;
  
  uVar12 = 0;
  uVar11 = 0;
  local_38 = 0;
  iVar4 = FUN_144efce30(param_1,param_3);
  if (iVar4 != 0) {
    FUN_144ba0bb0(*(undefined8 *)(param_2 + 0x20),0);
    *(undefined4 *)(param_2 + 0x28) = 0;
    return 1;
  }
  lVar1 = param_1[8];
  pcVar2 = *(code **)(*param_1 + 0x108);
  pcVar3 = *(code **)(*param_1 + 0x110);
  if ((param_4 == 0) && (param_4 = FUN_144eedd20(), local_38 = param_4, param_4 == 0)) {
    return 0;
  }
  FUN_144eede20(param_4);
  lVar5 = FUN_144eede90(param_4);
  lVar6 = FUN_144eede90(param_4);
  uVar7 = FUN_144eede90(param_4);
  lVar8 = FUN_144eede90(param_4);
  if (lVar8 != 0) {
    lVar9 = lVar5;
    if (*(int *)(param_3 + 0x28) == 0) {
      if ((int)param_1[0xe] == 0) {
        iVar4 = (*pcVar3)(param_1,lVar5,*(undefined8 *)(param_3 + 0x10),param_4);
        uVar12 = uVar11;
        if ((((iVar4 == 0) || (iVar4 = FUN_1452a58d0(lVar6,lVar5,lVar1), iVar4 == 0)) ||
            (iVar4 = FUN_1452a56b0(lVar5,lVar5,lVar6,lVar1), iVar4 == 0)) ||
           ((iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_3 + 0x20),param_4), iVar4 == 0 ||
            (iVar4 = (*pcVar3)(param_1,lVar6,lVar6,param_4), iVar4 == 0)))) goto LAB_1455088ab;
        iVar4 = (*pcVar2)(param_1,lVar6,lVar6,param_1[0xc],param_4);
        lVar10 = lVar5;
        lVar9 = lVar6;
      }
      else {
        iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_3 + 0x20));
        uVar12 = uVar11;
        if (((iVar4 == 0) ||
            (iVar4 = FUN_1452a56b0(lVar5,*(undefined8 *)(param_3 + 0x10),lVar6,lVar1), iVar4 == 0))
           || ((iVar4 = FUN_1452a5740(uVar7,*(undefined8 *)(param_3 + 0x10),lVar6,lVar1), iVar4 == 0
               || (iVar4 = (*pcVar2)(param_1,lVar6,lVar5,uVar7,param_4), iVar4 == 0))))
        goto LAB_1455088ab;
        iVar4 = FUN_1452a58d0(lVar5,lVar6,lVar1);
        lVar10 = lVar6;
      }
      uVar12 = uVar11;
      if (iVar4 == 0) goto LAB_1455088ab;
    }
    else {
      iVar4 = (*pcVar3)(param_1,lVar5,*(undefined8 *)(param_3 + 0x10));
      if (((iVar4 == 0) || (iVar4 = FUN_1452a58d0(lVar6,lVar5,lVar1), iVar4 == 0)) ||
         (iVar4 = FUN_1452a56b0(lVar5,lVar5,lVar6,lVar1), uVar12 = uVar11, iVar4 == 0))
      goto LAB_1455088ab;
      lVar10 = param_1[0xc];
    }
    iVar4 = FUN_1452a56b0(lVar6,lVar9,lVar10,lVar1);
    uVar12 = uVar11;
    if (iVar4 != 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar4 = (*pcVar2)(param_1,lVar5,*(undefined8 *)(param_3 + 0x18),
                          *(undefined8 *)(param_3 + 0x20),param_4);
        bVar13 = iVar4 == 0;
      }
      else {
        lVar9 = FUN_144ba06b0(lVar5,*(undefined8 *)(param_3 + 0x18));
        bVar13 = lVar9 == 0;
      }
      if ((!bVar13) &&
         (iVar4 = FUN_1452a58d0(*(undefined8 *)(param_2 + 0x20),lVar5,lVar1), iVar4 != 0)) {
        *(undefined4 *)(param_2 + 0x28) = 0;
        iVar4 = (*pcVar3)(param_1,lVar8,*(undefined8 *)(param_3 + 0x18),param_4);
        if (((((iVar4 != 0) &&
              ((iVar4 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_3 + 0x10),lVar8,param_4),
               iVar4 != 0 && (iVar4 = FUN_1452a5940(uVar7,uVar7,2,lVar1), iVar4 != 0)))) &&
             (iVar4 = FUN_1452a58d0(lVar5,uVar7,lVar1), iVar4 != 0)) &&
            ((((iVar4 = (*pcVar3)(param_1,*(undefined8 *)(param_2 + 0x10),lVar6,param_4), iVar4 != 0
               && (iVar4 = FUN_1452a5740(*(undefined8 *)(param_2 + 0x10),
                                         *(undefined8 *)(param_2 + 0x10),lVar5,lVar1), iVar4 != 0))
              && (iVar4 = (*pcVar3)(param_1,lVar5,lVar8,param_4), iVar4 != 0)) &&
             ((iVar4 = FUN_1452a5940(lVar8,lVar5,3,lVar1), iVar4 != 0 &&
              (iVar4 = FUN_1452a5740(lVar5,uVar7,*(undefined8 *)(param_2 + 0x10),lVar1), iVar4 != 0)
              ))))) && (iVar4 = (*pcVar2)(param_1,lVar5,lVar6,lVar5,param_4), iVar4 != 0)) {
          iVar4 = FUN_1452a5740(*(undefined8 *)(param_2 + 0x18),lVar5,lVar8,lVar1);
          uVar12 = 0;
          if (iVar4 != 0) {
            uVar12 = 1;
          }
        }
      }
    }
  }
LAB_1455088ab:
  FUN_144eedf20(param_4);
  FUN_144eeddc0(local_38);
  return uVar12;
}



// FUNCTION 1455088f0 FUN_1455088f0 body=89 status=ok
// SIG undefined FUN_1455088f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455088f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144efce30();
  if (iVar1 == 0) {
    iVar1 = FUN_144ba0340(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = FUN_144eee310(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 145508950 FUN_145508950 body=26 status=ok
// SIG undefined FUN_145508950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145508950(undefined8 param_1,longlong param_2)

{
  FUN_144ba0340(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 145508970 FUN_145508970 body=715 status=ok
// SIG undefined FUN_145508970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145508970(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_38;
  
  local_38 = 0;
  uVar9 = 0xffffffff;
  iVar4 = FUN_144efce30();
  if (iVar4 != 0) {
    return 1;
  }
  lVar1 = param_1[8];
  pcVar2 = *(code **)(*param_1 + 0x108);
  pcVar3 = *(code **)(*param_1 + 0x110);
  if ((param_3 == 0) && (param_3 = FUN_144eedd20(), local_38 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  FUN_144eede20(param_3);
  uVar5 = FUN_144eede90(param_3);
  lVar6 = FUN_144eede90(param_3);
  uVar7 = FUN_144eede90(param_3);
  lVar8 = FUN_144eede90(param_3);
  uVar10 = 0xffffffff;
  if ((lVar8 == 0) ||
     (iVar4 = (*pcVar3)(param_1,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), uVar10 = uVar9,
     iVar4 == 0)) goto LAB_145508bfe;
  if (*(int *)(param_2 + 0x28) == 0) {
    iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_2 + 0x20),param_3);
    if (((iVar4 == 0) || (iVar4 = (*pcVar3)(param_1,uVar7,lVar6,param_3), iVar4 == 0)) ||
       (iVar4 = (*pcVar2)(param_1,lVar8,uVar7,lVar6,param_3), iVar4 == 0)) goto LAB_145508bfe;
    if ((int)param_1[0xe] == 0) {
      iVar4 = (*pcVar2)(param_1,lVar6,uVar7,param_1[0xc],param_3);
      if (iVar4 == 0) goto LAB_145508bfe;
      iVar4 = FUN_1452a56b0(uVar5,uVar5,lVar6,lVar1);
    }
    else {
      iVar4 = FUN_1452a58d0(lVar6,uVar7,lVar1);
      if ((iVar4 == 0) || (iVar4 = FUN_1452a56b0(lVar6,lVar6,uVar7,lVar1), iVar4 == 0))
      goto LAB_145508bfe;
      iVar4 = FUN_1452a5740(uVar5,uVar5,lVar6,lVar1);
    }
    if (((iVar4 == 0) ||
        (iVar4 = (*pcVar2)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0)
        ) || (iVar4 = (*pcVar2)(param_1,lVar6,param_1[0xd],lVar8,param_3), lVar8 = lVar6, iVar4 == 0
             )) goto LAB_145508bfe;
  }
  else {
    iVar4 = FUN_1452a56b0(uVar5,uVar5,param_1[0xc],lVar1);
    if ((iVar4 == 0) ||
       (iVar4 = (*pcVar2)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0))
    goto LAB_145508bfe;
    lVar8 = param_1[0xd];
  }
  iVar4 = FUN_1452a56b0(uVar5,uVar5,lVar8,lVar1);
  if ((iVar4 != 0) &&
     (iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_2 + 0x18),param_3), iVar4 != 0)) {
    iVar4 = FUN_144ba0ef0(lVar6,uVar5);
    uVar10 = (ulonglong)(iVar4 == 0);
  }
LAB_145508bfe:
  FUN_144eedf20(param_3);
  FUN_144eeddc0(local_38);
  return uVar10;
}



// FUNCTION 145508c40 FUN_145508c40 body=692 status=ok
// SIG undefined FUN_145508c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145508c40(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_38;
  
  local_38 = 0;
  uVar8 = 0xffffffff;
  iVar3 = FUN_144efce30();
  if (iVar3 != 0) {
    iVar3 = FUN_144efce30(param_1,param_3);
    return (ulonglong)(iVar3 == 0);
  }
  iVar3 = FUN_144efce30(param_1,param_3);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0)) {
    iVar3 = FUN_144ba0c40(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    if ((iVar3 == 0) &&
       (iVar3 = FUN_144ba0c40(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18)),
       iVar3 == 0)) {
      return 0;
    }
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  if ((param_4 == 0) && (param_4 = FUN_144eedd20(), local_38 = param_4, param_4 == 0)) {
    return 0xffffffff;
  }
  FUN_144eede20(param_4);
  uVar4 = FUN_144eede90(param_4);
  uVar5 = FUN_144eede90(param_4);
  uVar6 = FUN_144eede90(param_4);
  lVar7 = FUN_144eede90(param_4);
  uVar9 = 0xffffffff;
  if (lVar7 != 0) {
    uVar9 = uVar8;
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,lVar7,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar4,*(undefined8 *)(param_2 + 0x10),lVar7,param_4),
         uVar11 = uVar4, iVar3 == 0)) goto LAB_145508ebc;
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_3 + 0x10),uVar6,param_4),
         uVar10 = uVar5, iVar3 == 0)) goto LAB_145508ebc;
    }
    else {
      uVar10 = *(undefined8 *)(param_3 + 0x10);
    }
    iVar3 = FUN_144ba0c40(uVar11,uVar10);
    if (iVar3 == 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar3 = (*pcVar1)(param_1,lVar7,lVar7,*(undefined8 *)(param_3 + 0x20),param_4);
        if ((iVar3 == 0) ||
           (iVar3 = (*pcVar1)(param_1,uVar4,*(undefined8 *)(param_2 + 0x18),lVar7,param_4),
           iVar3 == 0)) goto LAB_145508ebc;
      }
      else {
        uVar11 = *(undefined8 *)(param_2 + 0x18);
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        iVar3 = (*pcVar1)(param_1,uVar6,uVar6,*(undefined8 *)(param_2 + 0x20),param_4);
        if ((iVar3 == 0) ||
           (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_3 + 0x18),uVar6,param_4),
           iVar3 == 0)) goto LAB_145508ebc;
      }
      else {
        uVar10 = *(undefined8 *)(param_3 + 0x18);
      }
      iVar3 = FUN_144ba0c40(uVar11,uVar10);
      uVar9 = (ulonglong)(iVar3 != 0);
    }
    else {
      uVar9 = 1;
    }
  }
LAB_145508ebc:
  FUN_144eedf20(param_4);
  FUN_144eeddc0(local_38);
  return uVar9;
}



// FUNCTION 145508f00 FUN_145508f00 body=282 status=ok
// SIG undefined FUN_145508f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145508f00(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((*(int *)(param_2 + 0x28) != 0) || (iVar1 = FUN_144efce30(), iVar1 != 0)) {
    return 1;
  }
  lVar4 = 0;
  if ((param_3 == 0) && (param_3 = FUN_144eedd20(), lVar4 = param_3, param_3 == 0)) {
    return 0;
  }
  FUN_144eede20(param_3);
  uVar2 = FUN_144eede90(param_3);
  lVar3 = FUN_144eede90(param_3);
  lVar6 = 0;
  if (((lVar3 != 0) &&
      (iVar1 = FUN_144efcb20(param_1,param_2,uVar2,lVar3,param_3), lVar6 = lVar5, iVar1 != 0)) &&
     (iVar1 = FUN_144efc9b0(param_1,param_2,uVar2,lVar3,param_3), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x28) == 0) {
      FUN_144ba24f0(0x10,0x66,0x44,"crypto\\ec\\ecp_smpl.c",0x4a4);
    }
    else {
      lVar6 = 1;
    }
  }
  FUN_144eedf20(param_3);
  FUN_144eeddc0(lVar4);
  return lVar6;
}



// FUNCTION 145509020 FUN_145509020 body=1158 status=ok
// SIG undefined FUN_145509020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145509020(longlong *param_1,ulonglong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar12;
  undefined8 *local_58;
  longlong local_48;
  
  uVar6 = 0;
  local_48 = 0;
  local_58 = (undefined8 *)0x0;
  if (param_2 == 0) {
    return 1;
  }
  if ((param_4 == 0) && (param_4 = FUN_144eedd20(), local_48 = param_4, param_4 == 0)) {
    return 0;
  }
  FUN_144eede20(param_4);
  uVar2 = FUN_144eede90(param_4);
  lVar3 = FUN_144eede90(param_4);
  uVar10 = uVar6;
  if ((lVar3 != 0) &&
     (local_58 = (undefined8 *)FUN_144ea64e0(param_2 * 8,"crypto\\ec\\ecp_smpl.c",0x4c8),
     local_58 != (undefined8 *)0x0)) {
    uVar7 = uVar6;
    uVar10 = 0;
    if (param_2 != 0) {
      do {
        lVar4 = FUN_144ba0570();
        local_58[uVar7] = lVar4;
        if (lVar4 == 0) goto LAB_14550922b;
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2);
    }
    iVar1 = FUN_144ba0340(*(undefined8 *)(*param_3 + 0x20));
    if (iVar1 == 0) {
      lVar4 = FUN_144ba06b0(*local_58,*(undefined8 *)(*param_3 + 0x20));
      bVar11 = lVar4 == 0;
    }
    else {
      if (*(code **)(*param_1 + 0x138) == (code *)0x0) {
        iVar1 = FUN_144ba0bb0(*local_58,1);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x138))(param_1,*local_58,param_4);
      }
      bVar11 = iVar1 == 0;
    }
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (!bVar11) {
      uVar10 = 1;
      if (1 < param_2) {
        lVar4 = (longlong)local_58 - (longlong)param_3;
        plVar9 = param_3;
        do {
          plVar8 = plVar9 + 1;
          iVar1 = FUN_144ba0340(*(undefined8 *)(*plVar8 + 0x20));
          if (iVar1 == 0) {
            in_stack_ffffffffffffff98 = param_4;
            iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)((longlong)plVar8 + lVar4),
                               *(undefined8 *)((longlong)plVar9 + lVar4),
                               *(undefined8 *)(*plVar8 + 0x20),param_4);
            bVar11 = iVar1 == 0;
          }
          else {
            lVar5 = FUN_144ba06b0(*(undefined8 *)((longlong)plVar8 + lVar4),
                                  *(undefined8 *)((longlong)plVar9 + lVar4));
            bVar11 = lVar5 == 0;
          }
          uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          if (bVar11) goto LAB_145509223;
          uVar10 = uVar10 + 1;
          plVar9 = plVar8;
        } while (uVar10 < param_2);
      }
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,uVar2,local_58[param_2 - 1],param_4);
      if (iVar1 == 0) {
        FUN_144ba24f0(0x10,0x89,3,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar12,0x4f5));
      }
      else if ((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
              ((iVar1 = (**(code **)(*param_1 + 0x128))(param_1,uVar2,uVar2,param_4), iVar1 != 0 &&
               (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,uVar2,uVar2,param_4), iVar1 != 0))))
      {
        lVar4 = param_2 - 1;
        if (lVar4 != 0) {
          plVar9 = param_3 + lVar4;
          do {
            iVar1 = FUN_144ba0340(*(undefined8 *)(*plVar9 + 0x20));
            if ((iVar1 == 0) &&
               (((iVar1 = (**(code **)(*param_1 + 0x108))
                                    (param_1,lVar3,
                                     *(undefined8 *)
                                      ((longlong)plVar9 +
                                      (longlong)local_58 + (-8 - (longlong)param_3)),uVar2,param_4),
                 iVar1 == 0 ||
                 (iVar1 = (**(code **)(*param_1 + 0x108))
                                    (param_1,uVar2,uVar2,*(undefined8 *)(*plVar9 + 0x20),param_4),
                 iVar1 == 0)) ||
                (lVar5 = FUN_144ba06b0(*(undefined8 *)(*plVar9 + 0x20),lVar3), lVar5 == 0))))
            goto LAB_145509223;
            plVar9 = plVar9 + -1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        iVar1 = FUN_144ba0340(*(undefined8 *)(*param_3 + 0x20));
        if ((iVar1 != 0) ||
           (lVar3 = FUN_144ba06b0(*(undefined8 *)(*param_3 + 0x20),uVar2), lVar3 != 0)) {
          uVar10 = uVar6;
          if (param_2 != 0) {
            do {
              lVar3 = param_3[uVar10];
              iVar1 = FUN_144ba0340(*(undefined8 *)(lVar3 + 0x20));
              if (iVar1 == 0) {
                iVar1 = (**(code **)(*param_1 + 0x110))
                                  (param_1,uVar2,*(undefined8 *)(lVar3 + 0x20),param_4);
                if (((iVar1 == 0) ||
                    (iVar1 = (**(code **)(*param_1 + 0x108))
                                       (param_1,*(undefined8 *)(lVar3 + 0x10),
                                        *(undefined8 *)(lVar3 + 0x10),uVar2,param_4), iVar1 == 0))
                   || ((iVar1 = (**(code **)(*param_1 + 0x108))
                                          (param_1,uVar2,uVar2,*(undefined8 *)(lVar3 + 0x20),param_4
                                          ), iVar1 == 0 ||
                       (iVar1 = (**(code **)(*param_1 + 0x108))
                                          (param_1,*(undefined8 *)(lVar3 + 0x18),
                                           *(undefined8 *)(lVar3 + 0x18),uVar2,param_4), iVar1 == 0)
                       ))) goto LAB_145509223;
                if (*(code **)(*param_1 + 0x138) == (code *)0x0) {
                  iVar1 = FUN_144ba0bb0(*(undefined8 *)(lVar3 + 0x20),1);
                }
                else {
                  iVar1 = (**(code **)(*param_1 + 0x138))
                                    (param_1,*(undefined8 *)(lVar3 + 0x20),param_4);
                }
                if (iVar1 == 0) goto LAB_145509223;
                *(undefined4 *)(lVar3 + 0x28) = 1;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_2);
          }
          uVar10 = 1;
          goto LAB_14550922b;
        }
      }
LAB_145509223:
      uVar10 = 0;
    }
  }
LAB_14550922b:
  FUN_144eedf20(param_4);
  FUN_144eeddc0(local_48);
  if (local_58 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      do {
        if (local_58[uVar6] == 0) break;
        FUN_144ba0630();
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    FUN_144ea6530(local_58,"crypto\\ec\\ecp_smpl.c",0x54a);
  }
  return uVar10;
}



// FUNCTION 1455094b0 FUN_1455094b0 body=47 status=ok
// SIG undefined FUN_1455094b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455094b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1452a57a0(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 1455094e0 FUN_1455094e0 body=38 status=ok
// SIG undefined FUN_1455094e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455094e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1452a5860(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 145509510 FUN_145509510 body=321 status=ok
// SIG undefined FUN_145509510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145509510(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar4 = 0;
  lVar2 = 0;
  if ((param_4 == 0) && (lVar2 = FUN_144eedd90(), param_4 = lVar2, lVar2 == 0)) {
    return 0;
  }
  FUN_144eede20(param_4);
  lVar3 = FUN_144eede90(param_4);
  lVar5 = 0;
  if (lVar3 != 0) {
    do {
      iVar1 = FUN_1452983f0(lVar3,param_1[8]);
      lVar5 = lVar4;
      if (iVar1 == 0) goto LAB_14550961f;
      iVar1 = FUN_144ba0340(lVar3);
    } while (iVar1 != 0);
    lVar4 = param_4;
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,lVar3,param_4);
    uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
    if (iVar1 != 0) {
      lVar4 = FUN_144ef05b0(param_2,param_2,param_1[8],param_4);
      if (lVar4 == 0) {
        FUN_144ba24f0(0x10,0x12a,0xa5,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar6,0x579));
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,param_2,lVar3,param_4);
        lVar5 = 0;
        if (iVar1 != 0) {
          lVar5 = 1;
        }
      }
    }
  }
LAB_14550961f:
  FUN_144eedf20(param_4);
  FUN_144eeddc0(lVar2);
  return lVar5;
}



// FUNCTION 145509660 FUN_145509660 body=397 status=ok
// SIG undefined FUN_145509660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145509660(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14550967e;
  iVar1 = 0;
  FUN_144eede20(param_3);
  uVar3 = FUN_144eede90(param_3);
  lVar4 = FUN_144eede90(param_3);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x10,0x11f,0x41,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar5,0x59a),uVar6);
  }
  else {
    do {
      FUN_144ba3130();
      iVar1 = FUN_1452983f0(uVar3,param_1[8]);
      FUN_144ba3170();
      if (iVar1 == 0) goto LAB_1455097c5;
      iVar2 = FUN_144ba0340(uVar3);
    } while (iVar2 != 0);
    if (*(code **)(*param_1 + 0x128) != (code *)0x0) {
      iVar2 = (**(code **)(*param_1 + 0x128))(param_1,uVar3,uVar3,param_3);
      if (iVar2 == 0) goto LAB_1455097ca;
    }
    iVar2 = (**(code **)(*param_1 + 0x108))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar3
                       ,param_3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar4,uVar3,param_3);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                           lVar4,param_3);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar4,lVar4,uVar3,param_3);
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(param_2 + 0x18),
                               *(undefined8 *)(param_2 + 0x18),lVar4,param_3);
            if (iVar2 != 0) {
              *(undefined4 *)(param_2 + 0x28) = 0;
LAB_1455097c5:
              iVar1 = 1;
            }
          }
        }
      }
    }
  }
LAB_1455097ca:
  FUN_144eedf20(param_3);
  return iVar1;
}



// FUNCTION 1455097f0 FUN_1455097f0 body=684 status=ok
// SIG undefined FUN_1455097f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1455097f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14550980f;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  if (((((((*(int *)(param_4 + 0x28) != 0) &&
          (iVar6 = (**(code **)(*param_1 + 0x110))
                             (param_1,uVar3,*(undefined8 *)(param_4 + 0x10),param_5), iVar6 != 0))
         && (iVar6 = FUN_1452a5740(uVar4,uVar3,param_1[0xc],param_1[8]), iVar6 != 0)) &&
        ((iVar6 = (**(code **)(*param_1 + 0x110))(param_1,uVar4,uVar4,param_5), iVar6 != 0 &&
         (iVar6 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar5,*(undefined8 *)(param_4 + 0x10),param_1[0xd],param_5,
                             uVar7), iVar6 != 0)))) &&
       ((iVar6 = FUN_1452a5940(uVar5,uVar5,3,param_1[8]), iVar6 != 0 &&
        ((iVar6 = FUN_1452a5740(*(undefined8 *)(param_2 + 0x10),uVar4,uVar5,param_1[8]), iVar6 != 0
         && (iVar6 = FUN_1452a56b0(uVar1,uVar3,param_1[0xc],param_1[8]), iVar6 != 0)))))) &&
      (iVar6 = (**(code **)(*param_1 + 0x108))
                         (param_1,uVar2,*(undefined8 *)(param_4 + 0x10),uVar1,param_5), iVar6 != 0))
     && ((iVar6 = FUN_1452a56b0(uVar2,param_1[0xd],uVar2,param_1[8]), iVar6 != 0 &&
         (iVar6 = FUN_1452a5940(*(undefined8 *)(param_2 + 0x20),uVar2,2,param_1[8]), iVar6 != 0))))
  {
    do {
      iVar6 = FUN_1452983f0(*(undefined8 *)(param_2 + 0x18),param_1[8]);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = FUN_144ba0340(*(undefined8 *)(param_2 + 0x18));
    } while (iVar6 != 0);
    do {
      iVar6 = FUN_1452983f0(*(undefined8 *)(param_3 + 0x20),param_1[8]);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = FUN_144ba0340(*(undefined8 *)(param_3 + 0x20));
    } while (iVar6 != 0);
    if (((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
        ((iVar6 = (**(code **)(*param_1 + 0x128))
                            (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18)
                             ,param_5), iVar6 != 0 &&
         (iVar6 = (**(code **)(*param_1 + 0x128))
                            (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20)
                             ,param_5), iVar6 != 0)))) &&
       ((iVar6 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            *(undefined8 *)(param_2 + 0x18),param_5), iVar6 != 0 &&
        ((iVar6 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10)
                             ,*(undefined8 *)(param_2 + 0x18),param_5), iVar6 != 0 &&
         (iVar6 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10)
                             ,*(undefined8 *)(param_3 + 0x20),param_5), iVar6 != 0)))))) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145509aa0 FUN_145509aa0 body=1327 status=ok
// SIG undefined FUN_145509aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145509aa0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  FUN_144eede20(param_5);
  uVar2 = FUN_144eede90(param_5);
  uVar3 = FUN_144eede90(param_5);
  uVar4 = FUN_144eede90(param_5);
  uVar5 = FUN_144eede90(param_5);
  uVar6 = FUN_144eede90(param_5);
  uVar7 = FUN_144eede90(param_5);
  lVar8 = FUN_144eede90(param_5);
  if (((((((((lVar8 != 0) &&
            (iVar1 = (**(code **)(*param_1 + 0x108))
                               (param_1,lVar8,*(undefined8 *)(param_2 + 0x10),
                                *(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0)) &&
           (iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar2,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
          ((iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar6,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar5,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0)))) &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,param_1[0xc],uVar2,param_5),
          iVar1 != 0 &&
          ((iVar1 = FUN_1452a56b0(uVar7,lVar8,uVar7,param_1[8]), iVar1 != 0 &&
           (iVar1 = FUN_1452a56b0(lVar8,uVar5,uVar6,param_1[8]), iVar1 != 0)))))) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,lVar8,uVar7,param_5), iVar1 != 0)) &&
       (((((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar2,uVar2,param_5), iVar1 != 0 &&
           (iVar1 = FUN_1452a5940(uVar4,param_1[0xd],2,param_1[8]), iVar1 != 0)) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar4,uVar2,param_5), iVar1 != 0))
         && (((iVar1 = FUN_1452a58d0(uVar7,uVar7,param_1[8]), iVar1 != 0 &&
              (iVar1 = FUN_1452a5740(uVar5,uVar6,uVar5,param_1[8]), iVar1 != 0)) &&
             ((iVar1 = (**(code **)(*param_1 + 0x110))
                                 (param_1,*(undefined8 *)(param_3 + 0x20),uVar5,param_5), iVar1 != 0
              && ((iVar1 = (**(code **)(*param_1 + 0x108))
                                     (param_1,uVar6,*(undefined8 *)(param_3 + 0x20),
                                      *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0 &&
                  (iVar1 = FUN_1452a56b0(uVar2,uVar2,uVar7,param_1[8]), iVar1 != 0)))))))) &&
        ((iVar1 = FUN_1452a5740(*(undefined8 *)(param_3 + 0x10),uVar2,uVar6,param_1[8]), iVar1 != 0
         && (((iVar1 = (**(code **)(*param_1 + 0x110))
                                 (param_1,uVar6,*(undefined8 *)(param_2 + 0x10),param_5), iVar1 != 0
              && (iVar1 = (**(code **)(*param_1 + 0x110))
                                    (param_1,uVar7,*(undefined8 *)(param_2 + 0x20),param_5),
                 iVar1 != 0)) &&
             (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar8,uVar7,param_1[0xc],param_5),
             iVar1 != 0)))))))) &&
      ((((iVar1 = FUN_1452a56b0(uVar3,*(undefined8 *)(param_2 + 0x10),
                                *(undefined8 *)(param_2 + 0x20),param_1[8]), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar3,uVar3,param_5), iVar1 != 0)) &&
        (((iVar1 = FUN_1452a5740(uVar3,uVar3,uVar6,param_1[8]), iVar1 != 0 &&
          ((iVar1 = FUN_1452a5740(uVar3,uVar3,uVar7,param_1[8]), iVar1 != 0 &&
           (iVar1 = FUN_1452a5740(uVar5,uVar6,lVar8,param_1[8]), iVar1 != 0)))) &&
         (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar5,param_5), iVar1 != 0)))) &&
       ((((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar7,uVar3,param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar4,uVar2,param_5), iVar1 != 0))
         && (iVar1 = FUN_1452a5740(*(undefined8 *)(param_2 + 0x10),uVar5,uVar2,param_1[8]),
            iVar1 != 0)) &&
        ((iVar1 = FUN_1452a56b0(uVar5,uVar6,lVar8,param_1[8]), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar6,uVar7,param_5), iVar1 != 0))))))))
     && ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar6,uVar4,param_5), iVar1 != 0 &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,uVar3,uVar5,param_5), iVar1 != 0 &&
          (iVar1 = FUN_1452a58d0(uVar3,uVar3,param_1[8]), iVar1 != 0)))))) {
    iVar1 = FUN_1452a56b0(*(undefined8 *)(param_2 + 0x20),uVar6,uVar3,param_1[8]);
    bVar9 = iVar1 != 0;
  }
  FUN_144eedf20(param_5);
  return bVar9;
}



// FUNCTION 145509fd0 FUN_145509fd0 body=1302 status=ok
// SIG undefined FUN_145509fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145509fd0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint local_res10;
  
  local_res10 = 0;
  iVar1 = FUN_144ba0340(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar2 = FUN_144efc8b0(param_1,param_2);
    return uVar2;
  }
  iVar1 = FUN_144ba0340(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 0) {
    iVar1 = FUN_144efc830(param_2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_144efcdb0(param_1,param_2,param_5);
      if (iVar1 != 0) {
        return 1;
      }
    }
    return 0;
  }
  FUN_144eede20(param_5);
  uVar3 = FUN_144eede90(param_5);
  uVar4 = FUN_144eede90(param_5);
  uVar5 = FUN_144eede90(param_5);
  uVar6 = FUN_144eede90(param_5);
  uVar7 = FUN_144eede90(param_5);
  uVar8 = FUN_144eede90(param_5);
  lVar9 = FUN_144eede90(param_5);
  if (lVar9 != 0) {
    iVar1 = FUN_1452a58d0(uVar7,*(undefined8 *)(param_4 + 0x18),param_1[8]);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))
                        (param_1,lVar9,*(undefined8 *)(param_2 + 0x10),uVar7,param_5);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,lVar9,*(undefined8 *)(param_3 + 0x20),lVar9,param_5);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar8,*(undefined8 *)(param_2 + 0x20),lVar9,param_5);
          if (iVar1 != 0) {
            iVar1 = FUN_1452a58d0(uVar4,param_1[0xd],param_1[8]);
            if (iVar1 != 0) {
              iVar1 = (**(code **)(*param_1 + 0x108))
                                (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar4,param_5);
              if (iVar1 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x110))
                                  (param_1,uVar6,*(undefined8 *)(param_2 + 0x20),param_5);
                if (iVar1 != 0) {
                  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,uVar6,uVar4,param_5);
                  if (iVar1 != 0) {
                    iVar1 = (**(code **)(*param_1 + 0x108))
                                      (param_1,lVar9,*(undefined8 *)(param_2 + 0x20),param_1[0xc],
                                       param_5);
                    if (iVar1 != 0) {
                      iVar1 = (**(code **)(*param_1 + 0x108))
                                        (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                                         *(undefined8 *)(param_2 + 0x10),param_5);
                      if (iVar1 != 0) {
                        iVar1 = FUN_1452a56b0(uVar4,uVar4,lVar9,param_1[8]);
                        if (iVar1 != 0) {
                          iVar1 = (**(code **)(*param_1 + 0x108))
                                            (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar4,
                                             param_5);
                          if (iVar1 != 0) {
                            iVar1 = (**(code **)(*param_1 + 0x108))
                                              (param_1,uVar3,*(undefined8 *)(param_4 + 0x10),
                                               *(undefined8 *)(param_2 + 0x20),param_5);
                            if (iVar1 != 0) {
                              iVar1 = FUN_1452a56b0(lVar9,*(undefined8 *)(param_2 + 0x10),uVar3,
                                                    param_1[8]);
                              if (iVar1 != 0) {
                                iVar1 = (**(code **)(*param_1 + 0x108))
                                                  (param_1,lVar9,lVar9,uVar4,param_5);
                                if (iVar1 != 0) {
                                  iVar1 = FUN_1452a56b0(lVar9,lVar9,uVar5,param_1[8]);
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_1452a5740(uVar3,uVar3,
                                                          *(undefined8 *)(param_2 + 0x10),param_1[8]
                                                         );
                                    if (iVar1 != 0) {
                                      iVar1 = (**(code **)(*param_1 + 0x110))
                                                        (param_1,uVar3,uVar3,param_5);
                                      if (iVar1 != 0) {
                                        iVar1 = (**(code **)(*param_1 + 0x108))
                                                          (param_1,uVar3,uVar3,
                                                           *(undefined8 *)(param_3 + 0x10),param_5);
                                        if (iVar1 != 0) {
                                          iVar1 = FUN_1452a5740(uVar3,lVar9,uVar3,param_1[8]);
                                          if (iVar1 != 0) {
                                            iVar1 = (**(code **)(*param_1 + 0x108))
                                                              (param_1,uVar4,
                                                               *(undefined8 *)(param_3 + 0x20),uVar7
                                                               ,param_5);
                                            if (iVar1 != 0) {
                                              iVar1 = (**(code **)(*param_1 + 0x108))
                                                                (param_1,uVar4,uVar6,uVar4,param_5);
                                              if (iVar1 != 0) {
                                                if (*(code **)(*param_1 + 0x130) != (code *)0x0) {
                                                  iVar1 = (**(code **)(*param_1 + 0x130))
                                                                    (param_1,uVar4,uVar4,param_5);
                                                  if (iVar1 == 0) goto LAB_14550a4af;
                                                }
                                                iVar1 = (**(code **)(*param_1 + 0x120))
                                                                  (param_1,uVar4,uVar4,param_5);
                                                if (iVar1 != 0) {
                                                  if (*(code **)(*param_1 + 0x128) != (code *)0x0) {
                                                    iVar1 = (**(code **)(*param_1 + 0x128))
                                                                      (param_1,uVar4,uVar4,param_5);
                                                    if (iVar1 == 0) goto LAB_14550a4af;
                                                  }
                                                  iVar1 = (**(code **)(*param_1 + 0x108))
                                                                    (param_1,*(undefined8 *)
                                                                              (param_2 + 0x10),uVar8
                                                                     ,uVar4,param_5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = (**(code **)(*param_1 + 0x108))
                                                                      (param_1,*(undefined8 *)
                                                                                (param_2 + 0x18),
                                                                       uVar3,uVar4,param_5);
                                                    if (iVar1 != 0) {
                                                      if (*(code **)(*param_1 + 0x138) ==
                                                          (code *)0x0) {
                                                        iVar1 = FUN_144ba0bb0(*(undefined8 *)
                                                                               (param_2 + 0x20),1);
                                                      }
                                                      else {
                                                        iVar1 = (**(code **)(*param_1 + 0x138))
                                                                          (param_1,*(undefined8 *)
                                                                                    (param_2 + 0x20)
                                                                           ,param_5);
                                                      }
                                                      if (iVar1 != 0) {
                                                        *(undefined4 *)(param_2 + 0x28) = 1;
                                                        local_res10 = 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14550a4af:
  FUN_144eedf20(param_5);
  return (ulonglong)local_res10;
}



// FUNCTION 14550a4f0 FUN_14550a4f0 body=36 status=ok
// SIG undefined FUN_14550a4f0(void)

void FUN_14550a4f0(undefined8 param_1,int param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = (uint)(param_2 != 0);
  Ordinal_10(param_1,0x8004667e,local_res10);
  return;
}



// FUNCTION 14550a520 FUN_14550a520 body=6 status=ok
// SIG undefined FUN_14550a520(void)

undefined8 FUN_14550a520(void)

{
  return 0x1010114f;
}



// FUNCTION 14550a530 FUN_14550a530 body=295 status=ok
// SIG undefined FUN_14550a530(void)

char * FUN_14550a530(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return "close notify";
  default:
    return "unknown";
  case 10:
    return "unexpected_message";
  case 0x14:
    return "bad record mac";
  case 0x15:
    return "decryption failed";
  case 0x16:
    return "record overflow";
  case 0x1e:
    return "decompression failure";
  case 0x28:
    return "handshake failure";
  case 0x29:
    return "no certificate";
  case 0x2a:
    return "bad certificate";
  case 0x2b:
    return "unsupported certificate";
  case 0x2c:
    return "certificate revoked";
  case 0x2d:
    return "certificate expired";
  case 0x2e:
    return "certificate unknown";
  case 0x2f:
    return "illegal parameter";
  case 0x30:
    return "unknown CA";
  case 0x31:
    return "access denied";
  case 0x32:
    return "decode error";
  case 0x33:
    return "decrypt error";
  case 0x3c:
    return "export restriction";
  case 0x46:
    return "protocol version";
  case 0x47:
    return "insufficient security";
  case 0x50:
    return "internal error";
  case 0x5a:
    return "user canceled";
  case 100:
    return "no renegotiation";
  case 0x6e:
    return "unsupported extension";
  case 0x6f:
    return "certificate unobtainable";
  case 0x70:
    return "unrecognized name";
  case 0x71:
    return "bad certificate status response";
  case 0x72:
    return "bad certificate hash value";
  case 0x73:
    return "unknown PSK identity";
  case 0x78:
    return "no application protocol";
  }
}



// FUNCTION 14550a760 FUN_14550a760 body=141 status=ok
// SIG undefined FUN_14550a760(void)

void FUN_14550a760(void)

{
  int iVar1;
  char *_Filename;
  
  if ((DAT_14c7feee0 == (FILE *)0x0) &&
     (_Filename = (char *)FUN_1452b8aa0("SSLKEYLOGFILE"), _Filename != (char *)0x0)) {
    DAT_14c7feee0 = fopen(_Filename,"at");
    if ((DAT_14c7feee0 != (FILE *)0x0) &&
       (iVar1 = setvbuf(DAT_14c7feee0,(char *)0x0,4,0), iVar1 != 0)) {
      fclose(DAT_14c7feee0);
      DAT_14c7feee0 = (FILE *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014550a7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_14c6d9f28)(_Filename);
    return;
  }
  return;
}



// FUNCTION 14550a7f0 FUN_14550a7f0 body=38 status=ok
// SIG undefined FUN_14550a7f0(void)

void FUN_14550a7f0(void)

{
  if (DAT_14c7feee0 != (FILE *)0x0) {
    fclose(DAT_14c7feee0);
    DAT_14c7feee0 = (FILE *)0x0;
  }
  return;
}



// FUNCTION 14550a820 FUN_14550a820 body=12 status=ok
// SIG undefined FUN_14550a820(void)

bool FUN_14550a820(void)

{
  return DAT_14c7feee0 != 0;
}



// FUNCTION 14550a830 FUN_14550a830 body=175 status=ok
// SIG undefined FUN_14550a830(void)

void FUN_14550a830(void *param_1)

{
  ulonglong _Size;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  ulonglong uVar1;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((DAT_14c7feee0 != (FILE *)0x0) && (param_1 != (void *)0x0)) {
    _Size = 0xffffffffffffffff;
    do {
      uVar1 = _Size;
      _Size = uVar1 + 1;
    } while (*(char *)((longlong)param_1 + _Size) != '\0');
    if (uVar1 < 0xfe) {
      memcpy(local_118,param_1,_Size);
      if (*(char *)((longlong)param_1 + uVar1) != '\n') {
        local_118[uVar1 + 1] = '\n';
        _Size = uVar1 + 2;
        if (0xff < _Size) {
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
      }
      local_118[_Size] = '\0';
      fputs(local_118,DAT_14c7feee0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 14550a900 FUN_14550a900 body=380 status=ok
// SIG undefined FUN_14550a900(void)

bool FUN_14550a900(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *_MaxCount;
  char *_MaxCount_00;
  
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_3 == (char *)0x0)) ||
     (*param_3 == '\0')) {
    return false;
  }
  _MaxCount = param_4 + -1;
  if ((param_3 + -1)[(longlong)param_4] != '.') {
    _MaxCount = param_4;
  }
  _MaxCount_00 = param_2 + -1;
  if ((param_2 + -1)[(longlong)param_1] != '.') {
    _MaxCount_00 = param_2;
  }
  iVar2 = strncmp(param_1,"*.",2);
  if (iVar2 == 0) {
    cVar1 = FUN_144f1aef0(param_3);
    if (cVar1 == '\0') {
      pcVar3 = memchr(param_1,0x2e,(size_t)_MaxCount_00);
      if ((pcVar3 == (char *)0x0) ||
         (pcVar4 = (char *)FUN_1452b1c70(param_1,0x2e,_MaxCount_00), pcVar4 == pcVar3)) {
        pcVar4 = param_3;
        pcVar3 = param_1;
        if (_MaxCount != _MaxCount_00) {
          return false;
        }
      }
      else {
        pcVar4 = memchr(param_3,0x2e,(size_t)_MaxCount);
        if (pcVar4 == (char *)0x0) {
          return false;
        }
        _MaxCount = param_3 + ((longlong)_MaxCount - (longlong)pcVar4);
        if (_MaxCount != param_1 + ((longlong)_MaxCount_00 - (longlong)pcVar3)) {
          return false;
        }
      }
      iVar2 = FUN_144f195b0(pcVar4,pcVar3,_MaxCount);
      return iVar2 != 0;
    }
  }
  else if (_MaxCount == _MaxCount_00) {
    iVar2 = FUN_144f195b0(param_3,param_1,_MaxCount);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14550aa80 FUN_14550aa80 body=259 status=ok
// SIG undefined FUN_14550aa80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14550aa80(longlong param_1,ulonglong param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14550aaa0;
  uVar2 = param_2 & 0xffffffff;
  if ((int)param_2 == -1) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
  }
  iVar1 = (int)uVar2 * 2;
  lVar3 = FUN_144ea64e0((longlong)(iVar1 + 2),"crypto\\pkcs12\\p12_utl.c",0x19);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x23,0x79,0x41,"crypto\\pkcs12\\p12_utl.c",0x1a,uVar7);
    lVar3 = 0;
  }
  else {
    if (0 < iVar1) {
      lVar6 = 0;
      uVar2 = (ulonglong)((iVar1 - 1U >> 1) + 1);
      puVar5 = (undefined1 *)(lVar3 + 1);
      do {
        puVar5[-1] = 0;
        lVar4 = lVar6 >> 1;
        lVar6 = lVar6 + 2;
        *puVar5 = *(undefined1 *)(lVar4 + param_1);
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 2;
      } while (uVar2 != 0);
    }
    *(undefined1 *)(iVar1 + lVar3) = 0;
    *(undefined1 *)((iVar1 + 1) + lVar3) = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar1 + 2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 14550ab90 FUN_14550ab90 body=429 status=ok
// SIG undefined FUN_14550ab90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * FUN_14550ab90(longlong param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint local_res10 [2];
  undefined8 uVar11;
  
  uVar11 = 0x14550abac;
  iVar8 = 0;
  local_res10[0] = 0;
  uVar10 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)(param_1 + uVar10) != '\0');
  }
  iVar7 = 0;
  iVar4 = 0;
  iVar9 = (int)uVar10;
  if (0 < iVar9) {
    do {
      iVar1 = FUN_1454c9650(iVar4 + param_1,iVar9 - iVar4,local_res10);
      if (iVar1 < 0) {
        puVar2 = (undefined2 *)FUN_14550aa80(param_1,uVar10 & 0xffffffff,param_3,param_4);
        return puVar2;
      }
      if (0x10ffff < local_res10[0]) goto LAB_14550ac6b;
      iVar3 = 2;
      if (0xffff < local_res10[0]) {
        iVar3 = 4;
      }
      iVar4 = iVar4 + iVar1;
      iVar7 = iVar7 + iVar3;
    } while (iVar4 < iVar9);
  }
  puVar2 = (undefined2 *)FUN_144ea64e0((longlong)(iVar7 + 2),"crypto\\pkcs12\\p12_utl.c",0x75);
  if (puVar2 == (undefined2 *)0x0) {
    FUN_144ba24f0(0x23,0x81,0x41,"crypto\\pkcs12\\p12_utl.c",0x76,uVar11);
LAB_14550ac6b:
    puVar2 = (undefined2 *)0x0;
  }
  else {
    puVar6 = puVar2;
    if (0 < iVar9) {
      do {
        iVar4 = FUN_1454c9650(iVar8 + param_1,iVar9 - iVar8,local_res10);
        if (local_res10[0] < 0x10000) {
          *(char *)puVar6 = (char)(local_res10[0] >> 8);
          puVar5 = (undefined1 *)((longlong)puVar6 + 1);
          *puVar5 = (undefined1)local_res10[0];
        }
        else {
          local_res10[0] = local_res10[0] - 0x10000;
          iVar1 = (local_res10[0] >> 10) + 0xd800;
          iVar3 = (local_res10[0] & 0x3ff) + 0xdc00;
          *(char *)puVar6 = (char)((uint)iVar1 >> 8);
          *(char *)((longlong)puVar6 + 1) = (char)iVar1;
          *(char *)(puVar6 + 1) = (char)((uint)iVar3 >> 8);
          puVar5 = (undefined1 *)((longlong)puVar6 + 3);
          *puVar5 = (char)iVar3;
        }
        iVar8 = iVar8 + iVar4;
        puVar6 = (undefined2 *)(puVar5 + 1);
      } while (iVar8 < iVar9);
    }
    *puVar6 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar7 + 2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar2;
    }
  }
  return puVar2;
}



// FUNCTION 14550ad40 FUN_14550ad40 body=54 status=ok
// SIG undefined FUN_14550ad40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550ad40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145501710();
  FUN_144efd780(uVar1,param_1,param_2);
  return;
}



// FUNCTION 14550ad80 FUN_14550ad80 body=46 status=ok
// SIG undefined FUN_14550ad80(void)

char * FUN_14550ad80(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = &DAT_149d9b290;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 6);
  return "(UNKNOWN)";
}



// FUNCTION 14550adb0 FUN_14550adb0 body=46 status=ok
// SIG undefined FUN_14550adb0(void)

char * FUN_14550adb0(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = &DAT_149d9b2f0;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 3);
  return "(UNKNOWN)";
}



// FUNCTION 14550ade0 FUN_14550ade0 body=46 status=ok
// SIG undefined FUN_14550ade0(void)

char * FUN_14550ade0(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = &DAT_149d9b320;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 8);
  return "(UNKNOWN)";
}



// FUNCTION 14550ae10 FUN_14550ae10 body=814 status=ok
// SIG undefined FUN_14550ae10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14550ae10(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  longlong in_stack_ffffffffffffffb8;
  undefined8 uVar9;
  
  lVar6 = 0;
  local_res8 = 0;
  lVar4 = 0;
  lVar3 = FUN_14550b140(param_2,param_1 + 8);
  if (lVar3 == 0) {
    if ((param_4 & 2) == 0) {
      lVar3 = FUN_14550b140(*(undefined8 *)(param_1 + 0x48),param_1 + 8);
      if (lVar3 != 0) {
        iVar1 = 1;
        goto LAB_14550ae99;
      }
    }
    iVar1 = 0;
    uVar9 = 0x29;
    uVar5 = 0x76;
LAB_14550b0d9:
    FUN_144ba24f0(0x27,0x69,uVar5,"crypto\\ocsp\\ocsp_vfy.c",uVar9);
    goto LAB_14550b0ed;
  }
  iVar1 = 2;
LAB_14550ae99:
  lVar4 = FUN_144baf720();
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (lVar4 == 0) {
    uVar5 = CONCAT44(uVar8,0x2e);
    uVar8 = 0x41;
  }
  else {
    if ((iVar1 == 2) && ((param_4 >> 9 & 1) != 0)) {
      param_4 = param_4 | 0x10;
    }
    if ((param_4 & 4) == 0) {
      in_stack_ffffffffffffffb8 = FUN_144bb4f60(lVar3);
      if (in_stack_ffffffffffffffb8 != 0) {
        uVar5 = FUN_144ec66b0();
        iVar1 = FUN_144efe100(uVar5,param_1 + 0x30,*(undefined8 *)(param_1 + 0x40),param_1,
                              in_stack_ffffffffffffffb8);
        if (iVar1 < 1) {
          uVar9 = 0x3c;
          uVar5 = 0x75;
          goto LAB_14550b0d9;
        }
        goto LAB_14550af24;
      }
      uVar5 = CONCAT44(uVar8,0x37);
      uVar8 = 0x82;
LAB_14550b0b3:
      FUN_144ba24f0(0x27,0x69,uVar8,"crypto\\ocsp\\ocsp_vfy.c",uVar5);
      iVar1 = 0;
      goto LAB_14550b0ed;
    }
LAB_14550af24:
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if ((param_4 & 0x10) != 0) goto LAB_14550b0ed;
    if ((param_4 & 8) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
      if (lVar6 == 0) {
        if (param_2 != 0) {
          lVar6 = param_2;
        }
      }
      else if (param_2 != 0) {
        lVar6 = FUN_144bac2a0(lVar6);
        iVar7 = 0;
        iVar1 = FUN_144babbf0(param_2);
        uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (0 < iVar1) {
          do {
            uVar5 = FUN_144babc00(param_2,iVar7);
            iVar1 = FUN_144bac1c0(lVar6,uVar5);
            if (iVar1 == 0) {
              uVar5 = 0x48;
              uVar8 = 0x41;
              goto LAB_14550afc7;
            }
            iVar7 = iVar7 + 1;
            iVar1 = FUN_144babbf0(param_2);
            uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
          } while (iVar7 < iVar1);
        }
      }
    }
    iVar1 = FUN_144baf7b0(lVar4,param_3,lVar3,lVar6);
    if (iVar1 != 0) {
      FUN_144bafbd0(lVar4,8);
      iVar1 = FUN_144bb0090(lVar4);
      local_res8 = FUN_144bafba0(lVar4);
      if (iVar1 < 1) {
        uVar2 = FUN_144bafb50(lVar4);
        FUN_144ba24f0(0x27,0x69,0x65,"crypto\\ocsp\\ocsp_vfy.c",CONCAT44(uVar8,0x5d));
        uVar5 = FUN_144ec8b50(uVar2);
        FUN_144ba2bd0(2,"Verify error:",uVar5);
        goto LAB_14550b0ed;
      }
      if ((param_4 >> 8 & 1) == 0) {
        iVar1 = FUN_14550b230(param_1,local_res8);
        if ((iVar1 != 0) || ((param_4 & 0x20) != 0)) goto LAB_14550b0ed;
        iVar1 = FUN_144babbf0(local_res8);
        uVar5 = FUN_144babc00(local_res8,iVar1 + -1);
        iVar1 = FUN_144ef4600(uVar5,0xb4,0);
        if (iVar1 != 1) {
          uVar5 = CONCAT44(uVar8,0x79);
          uVar8 = 0x70;
          goto LAB_14550b0b3;
        }
      }
      iVar1 = 1;
      goto LAB_14550b0ed;
    }
    uVar5 = CONCAT44(uVar8,0x53);
    uVar8 = 0xb;
  }
LAB_14550afc7:
  FUN_144ba24f0(0x27,0x69,uVar8,"crypto\\ocsp\\ocsp_vfy.c",uVar5);
  iVar1 = -1;
LAB_14550b0ed:
  FUN_144baf770(lVar4);
  FUN_144babe00(local_res8,FUN_144b47250);
  if ((*(longlong *)(param_1 + 0x48) != 0) && (param_2 != 0)) {
    FUN_144babdb0(lVar6);
  }
  return iVar1;
}



// FUNCTION 14550b140 FUN_14550b140 body=222 status=ok
// SIG undefined FUN_14550b140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550b140(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    FUN_144bb5630(param_1,*(undefined8 *)(param_2 + 2));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (**(int **)(param_2 + 2) == 0x14) {
    plVar1 = *(longlong **)(*(int **)(param_2 + 2) + 2);
    iVar5 = 0;
    iVar2 = FUN_144babbf0();
    if (0 < iVar2) {
      do {
        uVar3 = FUN_144babc00(param_1,iVar5);
        uVar4 = FUN_144bab020();
        FUN_144bb5890(uVar3,uVar4,&local_38,0);
        if (((*plVar1 == local_38) && (plVar1[1] == local_30)) && ((int)plVar1[2] == local_28))
        break;
        iVar5 = iVar5 + 1;
        iVar2 = FUN_144babbf0(param_1);
      } while (iVar5 < iVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14550b230 FUN_14550b230 body=311 status=ok
// SIG undefined FUN_14550b230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14550b230(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x14550b240;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_res8 = 0;
  iVar2 = FUN_144babbf0(param_2);
  if (iVar2 < 1) {
    FUN_144ba24f0(0x27,0x6c,0x69,"crypto\\ocsp\\ocsp_vfy.c",0xcd,uVar5);
    return 0xffffffff;
  }
  uVar5 = FUN_14550b370(uVar1,&local_res8);
  if (0 < (int)uVar5) {
    uVar5 = FUN_144babc00(param_2,0);
    iVar2 = FUN_144babbf0(param_2);
    if (1 < iVar2) {
      uVar3 = FUN_144babc00(param_2,1);
      uVar3 = FUN_14550b450(uVar3,local_res8,uVar1);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((int)uVar3 != 0) {
        uVar4 = FUN_144ec5660(uVar5);
        if (((uVar4 & 4) != 0) && (uVar4 = FUN_144ec56e0(uVar5), (uVar4 & 0x20) != 0)) {
          return 1;
        }
        FUN_144ba24f0(0x27,0x6a,0x67,"crypto\\ocsp\\ocsp_vfy.c",0x149);
        return 0;
      }
    }
    uVar5 = FUN_14550b450(uVar5,local_res8,uVar1);
  }
  return uVar5;
}



// FUNCTION 14550b370 FUN_14550b370 body=214 status=ok
// SIG undefined FUN_14550b370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14550b370(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14550b37f;
  iVar1 = FUN_144babbf0();
  if (iVar1 < 1) {
    FUN_144ba24f0(0x27,0x6b,0x6f,"crypto\\ocsp\\ocsp_vfy.c",0xfa,uVar6);
    return 0xffffffff;
  }
  puVar3 = (undefined8 *)FUN_144babc00(param_1,0);
  iVar5 = 1;
  puVar3 = (undefined8 *)*puVar3;
  *param_2 = 0;
  if (1 < iVar1) {
    do {
      puVar4 = (undefined8 *)FUN_144babc00(param_1,iVar5);
      puVar4 = (undefined8 *)*puVar4;
      iVar2 = FUN_1452822d0(puVar3,puVar4);
      if (iVar2 != 0) {
        iVar1 = FUN_14526beb0(*puVar4,*puVar3);
        return -(uint)(iVar1 != 0) & 2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  *param_2 = puVar3;
  return 1;
}



// FUNCTION 14550b450 FUN_14550b450 body=349 status=ok
// SIG undefined FUN_14550b450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550b450(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14550b45e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (undefined8 *)0x0) {
    iVar3 = 0;
    iVar2 = FUN_144babbf0(param_3);
    if (0 < iVar2) {
      do {
        puVar6 = (undefined8 *)FUN_144babc00(param_3,iVar3);
        iVar2 = FUN_14550b450(param_1,*puVar6,0);
        if (iVar2 < 1) break;
        iVar3 = iVar3 + 1;
        iVar2 = FUN_144babbf0(param_3);
      } while (iVar3 < iVar2);
    }
  }
  else {
    uVar1 = FUN_144ea8fa0(*param_2);
    uVar4 = FUN_144ea8ee0(uVar1);
    lVar5 = FUN_144baab30(uVar4);
    if (lVar5 == 0) {
      local_78 = 0x120;
      FUN_144ba24f0(0x27,0x6d,0x77,"crypto\\ocsp\\ocsp_vfy.c");
    }
    else {
      iVar2 = FUN_144ba3cd0(lVar5);
      if (((-1 < iVar2) && (*(int *)(param_2 + 2) == iVar2)) && (*(int *)(param_2 + 5) == iVar2)) {
        uVar4 = FUN_144bb4f50(param_1);
        iVar3 = FUN_144bb5a40(uVar4,lVar5,local_68,0);
        if ((iVar3 != 0) &&
           (iVar3 = memcmp(local_68,(void *)param_2[3],(longlong)iVar2), iVar3 == 0)) {
          FUN_144bb5890(param_1,lVar5,local_68,0);
          memcmp(local_68,(void *)param_2[6],(longlong)iVar2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 14550b5c0 FUN_14550b5c0 body=402 status=ok
// SIG undefined FUN_14550b5c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14550b5c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar3 = FUN_145502960(param_2);
  if (iVar3 == 1) {
    pcVar5 = (char *)FUN_145502980(param_2);
    fputs(pcVar5,DAT_14c7ff000);
    fflush(DAT_14c7ff000);
    uVar4 = FUN_145502970(param_2);
    uVar7 = 1;
  }
  else {
    if (iVar3 == 2) {
      uVar7 = FUN_145502980(param_2);
      FUN_146c958a0(DAT_14c7ff000,"Verifying - %s",uVar7);
      fflush(DAT_14c7ff000);
      uVar4 = FUN_145502970(param_2);
      uVar7 = FUN_14550bab0(param_1,param_2,uVar4 & 1,1);
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      lVar6 = FUN_1455029c0(param_2);
      pcVar5 = (char *)FUN_1455029a0(param_2);
      lVar6 = lVar6 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar6];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return 1;
      }
      FUN_146c958a0(DAT_14c7ff000,"Verify failure\n");
      fflush(DAT_14c7ff000);
      return 0;
    }
    if (iVar3 != 3) {
      return 1;
    }
    pcVar5 = (char *)FUN_145502980(param_2);
    fputs(pcVar5,DAT_14c7ff000);
    pcVar5 = (char *)FUN_145502990(param_2);
    fputs(pcVar5,DAT_14c7ff000);
    fflush(DAT_14c7ff000);
    uVar4 = FUN_145502970(param_2);
    uVar7 = 0;
  }
  uVar7 = FUN_14550bab0(param_1,param_2,uVar4 & 1,uVar7);
  return uVar7;
}



// FUNCTION 14550b760 FUN_14550b760 body=82 status=ok
// SIG undefined FUN_14550b760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14550b760(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *_Str;
  
  iVar1 = FUN_145502960(param_2);
  if (iVar1 - 4U < 2) {
    _Str = (char *)FUN_145502980(param_2);
    fputs(_Str,DAT_14c7ff000);
    fflush(DAT_14c7ff000);
  }
  return 1;
}



// FUNCTION 14550b7c0 FUN_14550b7c0 body=174 status=ok
// SIG undefined FUN_14550b7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14550b7c0(longlong param_1)

{
  BOOL BVar1;
  HANDLE hConsoleHandle;
  
  FUN_144e98620(*(undefined8 *)(param_1 + 0x28));
  DAT_14c7ff008 = 1;
  DAT_14c7ff000 = fopen("conout$","w");
  if (DAT_14c7ff000 == (FILE *)0x0) {
    DAT_14c7ff000 = (FILE *)__acrt_iob_func(2);
  }
  hConsoleHandle = GetStdHandle(0xfffffff6);
  BVar1 = GetConsoleMode(hConsoleHandle,&DAT_14c7feff0);
  if ((BVar1 == 0) &&
     (DAT_14c7ff008 = BVar1,
     DAT_14c7feff8 = fopen("conin$",(char *)L"rInvalid resolution in tiff: zero or negative."),
     DAT_14c7feff8 != (FILE *)0x0)) {
    return 1;
  }
  DAT_14c7feff8 = (FILE *)__acrt_iob_func(0);
  return 1;
}



// FUNCTION 14550b870 FUN_14550b870 body=93 status=ok
// SIG undefined FUN_14550b870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14550b870(longlong param_1)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)__acrt_iob_func(0);
  if (DAT_14c7feff8 != pFVar1) {
    fclose(DAT_14c7feff8);
  }
  pFVar1 = (FILE *)__acrt_iob_func(2);
  if (DAT_14c7ff000 != pFVar1) {
    fclose(DAT_14c7ff000);
  }
  FUN_144e98640(*(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14550b8d0 FUN_14550b8d0 body=8 status=ok
// SIG undefined FUN_14550b8d0(void)

undefined * FUN_14550b8d0(void)

{
  return PTR_PTR_14c7450b0;
}



// FUNCTION 14550b8e0 FUN_14550b8e0 body=8 status=ok
// SIG undefined FUN_14550b8e0(void)

undefined ** FUN_14550b8e0(void)

{
  return &PTR_s_OpenSSL_default_user_interface_14c745060;
}



// FUNCTION 14550b8f0 FUN_14550b8f0 body=109 status=ok
// SIG undefined FUN_14550b8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550b8f0(FILE *param_1)

{
  char *pcVar1;
  undefined1 auStack_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  do {
    pcVar1 = fgets(local_18,4,param_1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
    pcVar1 = strchr(local_18,10);
  } while (pcVar1 == (char *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14550b980 FUN_14550b980 body=166 status=ok
// SIG undefined FUN_14550b980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550b980(void)

{
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 extraout_RAX_04;
  
  signal(0x16);
  DAT_14c7fefa0 = extraout_RAX;
  signal(8);
  DAT_14c7fef30 = extraout_RAX_00;
  signal(4);
  DAT_14c7fef10 = extraout_RAX_01;
  signal(2);
  DAT_14c7fef00 = extraout_RAX_02;
  signal(0xb);
  DAT_14c7fef48 = extraout_RAX_03;
  signal(0xf);
  DAT_14c7fef68 = extraout_RAX_04;
  return;
}



// FUNCTION 14550ba30 FUN_14550ba30 body=124 status=ok
// SIG undefined FUN_14550ba30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550ba30(void)

{
  signal(0x16);
  signal(8);
  signal(4);
  signal(2);
  signal(0xb);
                    /* WARNING: Could not recover jumptable at 0x00014550baa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  signal(0xf);
  return;
}



// FUNCTION 14550bab0 FUN_14550bab0 body=820 status=ok
// SIG undefined FUN_14550bab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14550bab0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  HANDLE pvVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStackY_698 [32];
  uint local_658 [4];
  CHAR local_648 [512];
  WCHAR local_448 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14550baca;
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_698;
  DAT_14c7ff00c = 0;
  DAT_14c7ff010 = 0;
  FUN_14550b980();
  DAT_14c7ff010 = 1;
  if ((param_3 == 0) && (DAT_14c7ff008 != 0)) {
    DAT_14c7feff4 = DAT_14c7feff0 & 0xfffffffb;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_14c7feff4);
  }
  DAT_14c7ff010 = 2;
  local_648[0] = '\0';
  if (DAT_14c7ff008 == 0) {
    pcVar5 = fgets(local_648,0x1ff,DAT_14c7feff8);
LAB_14550bcdc:
    if (pcVar5 == (char *)0x0) goto LAB_14550bd48;
  }
  else {
    DVar1 = GetEnvironmentVariableW(L"OPENSSL_WIN32_UTF8",(LPWSTR)0x0,0);
    if (DVar1 != 0) {
      pvVar4 = GetStdHandle(0xfffffff6);
      BVar2 = ReadConsoleW(pvVar4,local_448,0x1ff,local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
      if (BVar2 == 0) goto LAB_14550bd48;
      uVar7 = (ulonglong)local_658[0];
      if (((1 < local_658[0]) && (local_448[local_658[0] - 2] == L'\r')) &&
         (uVar6 = local_658[0] - 1, local_448[uVar6] == L'\n')) {
        local_448[local_658[0] - 2] = L'\n';
        uVar7 = (ulonglong)uVar6;
        local_658[0] = uVar6;
      }
      if (0x3ff < uVar7 * 2) {
                    /* WARNING: Subroutine does not return */
        FUN_144e2bb84();
      }
      local_448[uVar7] = L'\0';
      iVar3 = WideCharToMultiByte(0xfde9,0,local_448,-1,local_648,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar5 = local_648;
      if (iVar3 < 1) {
        pcVar5 = (char *)0x0;
      }
      FUN_14259f0c0(local_448,0x400);
      goto LAB_14550bcdc;
    }
    pvVar4 = GetStdHandle(0xfffffff6);
    BVar2 = ReadConsoleA(pvVar4,local_648,0x1ff,local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
    if (BVar2 == 0) goto LAB_14550bd48;
    uVar7 = (ulonglong)local_658[0];
    if (((1 < local_658[0]) && (local_648[local_658[0] - 2] == '\r')) &&
       (uVar6 = local_658[0] - 1, local_648[uVar6] == '\n')) {
      local_648[local_658[0] - 2] = '\n';
      uVar7 = (ulonglong)uVar6;
      local_658[0] = uVar6;
    }
    if (0x1ff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_648[uVar7] = '\0';
  }
  iVar3 = feof(DAT_14c7feff8);
  if ((iVar3 == 0) && (iVar3 = ferror(DAT_14c7feff8), iVar3 == 0)) {
    pcVar5 = strchr(local_648,10);
    if (pcVar5 == (char *)0x0) {
      iVar3 = FUN_14550b8f0(DAT_14c7feff8);
      if (iVar3 == 0) goto LAB_14550bd48;
    }
    else if (param_4 != 0) {
      *pcVar5 = '\0';
    }
    FUN_1455029d0(param_1,param_2,local_648);
  }
LAB_14550bd48:
  if (param_3 == 0) {
    FUN_146c958a0(DAT_14c7ff000,&DAT_149dfc0af);
  }
  if (((1 < DAT_14c7ff010) && (param_3 == 0)) && (DAT_14c7ff008 != 0)) {
    DAT_14c7feff4 = DAT_14c7feff0;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_14c7feff4);
  }
  if (0 < DAT_14c7ff010) {
    FUN_14550ba30();
  }
  FUN_14259f0c0(local_648,0x200);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_698);
}



// FUNCTION 14550be10 FUN_14550be10 body=493 status=ok
// SIG undefined FUN_14550be10(void)

ulonglong FUN_14550be10(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar9 = *(longlong *)(param_1 + 0x20);
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x30c);
  uVar1 = *(undefined8 *)(lVar9 + 0x1a8);
  if (*(uint *)(param_1 + 0x30c) == 0) {
    uVar11 = param_2[10];
  }
  local_58 = (undefined4)param_2[8];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_50 = (undefined4)param_2[9];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x4c);
  puVar7 = (undefined4 *)FUN_144f07150(local_38);
  local_48 = *puVar7;
  uStack_44 = puVar7[1];
  uStack_40 = puVar7[2];
  uStack_3c = puVar7[3];
  lVar8 = FUN_144f071e0(&local_48,&local_58);
  uVar11 = uVar11 - lVar8;
  uVar10 = uVar11;
  if ((*(int *)(param_1 + 0x300) != 0) && (param_4 == '\0')) {
    local_48 = *(undefined4 *)(lVar9 + 0x178);
    uStack_44 = *(undefined4 *)(lVar9 + 0x17c);
    uStack_40 = *(undefined4 *)(lVar9 + 0x180);
    uStack_3c = *(undefined4 *)(lVar9 + 0x184);
    puVar7 = (undefined4 *)FUN_144f07150(local_28);
    local_58 = *puVar7;
    uStack_54 = puVar7[1];
    uStack_50 = puVar7[2];
    uStack_4c = puVar7[3];
    lVar9 = FUN_144f071e0(&local_58,&local_48);
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x300) - lVar9;
    if ((longlong)uVar11 < (longlong)uVar10) {
      uVar10 = uVar11;
    }
  }
  uVar11 = 0;
  if ((longlong)uVar10 < 1) {
    FUN_144f14b70(param_1,"server response timeout");
    return 0x1c;
  }
  uVar13 = uVar11;
  if ((param_3 != '\0') && (uVar13 = 1000, (longlong)uVar10 < 1000)) {
    uVar13 = uVar10;
  }
  cVar3 = FUN_144f14130(param_1,0);
  if (cVar3 != '\0') {
    iVar4 = 1;
    goto LAB_14550bf76;
  }
  if (param_2[6] == 0) {
    if ((*param_2 != 0) && ((ulonglong)param_2[2] < (ulonglong)param_2[1])) {
      iVar4 = 1;
      goto LAB_14550bf76;
    }
    cVar3 = FUN_144f14130(param_1,0);
    if (cVar3 != '\0') {
      iVar4 = 1;
      goto LAB_14550bf76;
    }
  }
  uVar12 = uVar1;
  uVar2 = 0xffffffffffffffff;
  if (param_2[6] != 0) {
    uVar12 = 0xffffffffffffffff;
    uVar2 = uVar1;
  }
  iVar4 = FUN_144f26bb0(uVar12,0xffffffffffffffff,uVar2,uVar13);
LAB_14550bf76:
  if (param_3 != '\0') {
    iVar5 = FUN_144f25e70(param_1);
    if (iVar5 != 0) {
      return 0x2a;
    }
    puVar7 = (undefined4 *)FUN_144f07150(local_28);
    local_48 = *puVar7;
    uStack_44 = puVar7[1];
    uStack_40 = puVar7[2];
    uStack_3c = puVar7[3];
    uVar6 = FUN_144f27170(param_1,&local_48);
    uVar11 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      return uVar11;
    }
  }
  if (iVar4 == -1) {
    FUN_144f14b70(param_1,"select/poll error");
    uVar11 = 0x1b;
  }
  else if (iVar4 != 0) {
    uVar6 = (*(code *)param_2[0xf])(param_1,*(undefined8 *)(param_1 + 0x20));
    uVar11 = (ulonglong)uVar6;
  }
  return uVar11;
}



// FUNCTION 14550c000 FUN_14550c000 body=55 status=ok
// SIG undefined FUN_14550c000(void)

void FUN_14550c000(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xcd8);
  *(undefined1 *)(param_2 + 0x20) = 1;
  puVar2 = (undefined8 *)FUN_144f07150(local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_2 + 0x40) = *puVar2;
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  return;
}



// FUNCTION 14550c040 FUN_14550c040 body=14 status=ok
// SIG undefined FUN_14550c040(void)

void FUN_14550c040(longlong param_1)

{
  FUN_144f07cf0(param_1 + 0x58,0x10000);
  return;
}



// FUNCTION 14550c050 FUN_14550c050 body=196 status=ok
// SIG undefined FUN_14550c050(void)

longlong FUN_14550c050(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x30c);
  if (*(uint *)(param_1 + 0x30c) == 0) {
    uVar5 = *(ulonglong *)(param_2 + 0x50);
  }
  local_38 = *(undefined4 *)(param_2 + 0x40);
  uStack_34 = *(undefined4 *)(param_2 + 0x44);
  uStack_30 = *(undefined4 *)(param_2 + 0x48);
  uStack_2c = *(undefined4 *)(param_2 + 0x4c);
  puVar2 = (undefined4 *)FUN_144f07150(local_18);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  lVar3 = FUN_144f071e0(&local_28,&local_38);
  lVar3 = uVar5 - lVar3;
  lVar4 = lVar3;
  if ((*(int *)(param_1 + 0x300) != 0) && (param_3 == '\0')) {
    local_28 = *(undefined4 *)(lVar1 + 0x178);
    uStack_24 = *(undefined4 *)(lVar1 + 0x17c);
    uStack_20 = *(undefined4 *)(lVar1 + 0x180);
    uStack_1c = *(undefined4 *)(lVar1 + 0x184);
    puVar2 = (undefined4 *)FUN_144f07150(local_18);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    lVar4 = FUN_144f071e0(&local_38,&local_28);
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x300) - lVar4;
    if (lVar3 < lVar4) {
      lVar4 = lVar3;
    }
  }
  return lVar4;
}



// FUNCTION 14550c120 FUN_14550c120 body=314 status=ok
// SIG undefined FUN_14550c120(void)

undefined8 FUN_14550c120(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res20;
  longlong local_58;
  undefined1 local_50 [32];
  
  local_58 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_res20 = param_4;
    FUN_144f07dc0(param_2 + 0x58);
    uVar4 = FUN_144f07da0(param_2 + 0x58,param_3,&local_res20);
    if (((int)uVar4 == 0) &&
       (uVar4 = thunk_FUN_144f07eb0(param_2 + 0x58,&DAT_149c058e8,2), (int)uVar4 == 0)) {
      lVar5 = FUN_144f07ea0(param_2 + 0x58);
      uVar6 = FUN_144f07e80(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xcd8);
      *(undefined1 *)(param_2 + 0x20) = 1;
      puVar7 = (undefined4 *)FUN_144f07150(local_50);
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(param_2 + 0x40) = *puVar7;
      *(undefined4 *)(param_2 + 0x44) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      uVar4 = FUN_144f15180(param_1,0,uVar6,lVar5,&local_58);
      if ((int)uVar4 == 0) {
        FUN_144f149e0(param_1,2,uVar6,local_58);
        uVar4 = 0;
        if (local_58 == lVar5) {
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          puVar8 = (undefined8 *)FUN_144f07150(local_50);
          uVar6 = puVar8[1];
          *(undefined8 *)(param_2 + 0x40) = *puVar8;
          *(undefined8 *)(param_2 + 0x48) = uVar6;
        }
        else {
          *(longlong *)(param_2 + 0x38) = lVar5;
          *(longlong *)(param_2 + 0x30) = lVar5 - local_58;
          *(undefined8 *)(param_2 + 0x28) = uVar6;
        }
      }
    }
    return uVar4;
  }
  return 0x37;
}



// FUNCTION 14550c260 FUN_14550c260 body=311 status=ok
// SIG undefined FUN_14550c260(void)

undefined8 FUN_14550c260(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong local_res8;
  undefined1 local_28 [16];
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar4 = 0x37;
  }
  else {
    FUN_144f07dc0(param_2 + 0x58);
    uVar4 = FUN_144f07da0(param_2 + 0x58,param_3,param_4);
    if (((int)uVar4 == 0) &&
       (uVar4 = thunk_FUN_144f07eb0(param_2 + 0x58,&DAT_149c058e8,2), (int)uVar4 == 0)) {
      lVar5 = FUN_144f07ea0(param_2 + 0x58);
      uVar6 = FUN_144f07e80(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xcd8);
      *(undefined1 *)(param_2 + 0x20) = 1;
      puVar7 = (undefined4 *)FUN_144f07150(local_28);
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(param_2 + 0x40) = *puVar7;
      *(undefined4 *)(param_2 + 0x44) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      uVar4 = FUN_144f15180(param_1,0,uVar6,lVar5,&local_res8);
      if ((int)uVar4 == 0) {
        FUN_144f149e0(param_1,2,uVar6,local_res8);
        if (local_res8 == lVar5) {
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          puVar8 = (undefined8 *)FUN_144f07150(local_28);
          uVar4 = puVar8[1];
          *(undefined8 *)(param_2 + 0x40) = *puVar8;
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        else {
          *(longlong *)(param_2 + 0x38) = lVar5;
          *(longlong *)(param_2 + 0x30) = lVar5 - local_res8;
          *(undefined8 *)(param_2 + 0x28) = uVar6;
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



// FUNCTION 14550c3a0 FUN_14550c3a0 body=774 status=ok
// SIG undefined FUN_14550c3a0(void)

ulonglong FUN_14550c3a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                       undefined8 *param_5)

{
  undefined8 uVar1;
  char *_Dst;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *_Dst_00;
  longlong lVar7;
  char *_Dst_01;
  size_t _Size;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong local_res18;
  undefined4 *local_res20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = 0;
  _Dst = *(char **)(param_1 + 0xcd8);
  *param_4 = 0;
  *param_5 = 0;
  uVar6 = param_3[2];
  bVar2 = true;
  _Dst_01 = _Dst + uVar6;
  lVar8 = (longlong)_Dst_01 - param_3[3];
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x6cc);
  local_res20 = param_4;
  if (uVar6 < uVar9) {
    do {
      if ((!bVar2) || ((int)uVar11 != 0)) break;
      if ((void *)*param_3 == (void *)0x0) {
        uVar5 = FUN_144f15080(param_1,param_2,_Dst_01,uVar9 - uVar6,&local_res18);
        uVar11 = (ulonglong)uVar5;
        if (uVar5 == 0x51) {
          return 0;
        }
        if (uVar5 == 0) goto LAB_14550c471;
        bVar2 = false;
      }
      else {
        if (_Dst + uVar9 + 1 < _Dst_01 + param_3[1]) {
          FUN_144f14b70(param_1,"cached response data too big to handle");
          return 8;
        }
        memcpy(_Dst_01,(void *)*param_3,param_3[1]);
        local_res18 = param_3[1];
        (*(code *)PTR_free_14c6d9f28)(*param_3);
        *param_3 = 0;
        param_3[1] = 0;
LAB_14550c471:
        if (local_res18 < 1) {
          uVar11 = 0x38;
          bVar2 = false;
          uVar4 = Ordinal_111();
          FUN_144f14b70(param_1,"response reading failed (errno: %d)",uVar4);
        }
        else {
          *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + (int)local_res18;
          lVar7 = 0;
          param_3[2] = param_3[2] + local_res18;
          lVar10 = local_res18;
          pcVar12 = _Dst_01;
          if (0 < local_res18) {
            do {
              pcVar12 = pcVar12 + 1;
              lVar8 = lVar8 + 1;
              if (*_Dst_01 == '\n') {
                FUN_144f149e0(param_1,1,param_3[3],lVar8);
                uVar6 = FUN_144f14dc0(param_1,2,param_3[3],lVar8);
                uVar11 = uVar6 & 0xffffffff;
                if ((int)uVar6 != 0) {
                  return uVar6;
                }
                cVar3 = (*(code *)param_3[0x10])(param_1,uVar1,param_3[3],lVar8,local_res20);
                if (cVar3 != '\0') {
                  _Size = (longlong)_Dst_01 - (longlong)param_3[3];
                  memmove(_Dst,(void *)param_3[3],_Size);
                  _Dst[_Size] = '\0';
                  param_3[3] = pcVar12;
                  *param_5 = param_3[2];
                  param_3[2] = 0;
                  bVar2 = false;
                  if (lVar7 + 1 == local_res18) goto LAB_14550c634;
                  lVar8 = local_res18 - (lVar7 + 1);
                  goto LAB_14550c60a;
                }
                lVar8 = 0;
                param_3[3] = pcVar12;
                lVar10 = local_res18;
              }
              _Dst_01 = _Dst_01 + 1;
              lVar7 = lVar7 + 1;
            } while (lVar7 < lVar10);
          }
          if ((lVar8 == lVar10) && ((longlong)(ulonglong)(*(uint *)(param_1 + 0x6cc) >> 1) < lVar10)
             ) {
            FUN_144f14ad0(param_1,
                          "Excessive server response line length received, %zd bytes. Stripping");
            lVar8 = 0x28;
LAB_14550c60f:
            param_3[1] = lVar8;
            _Dst_00 = (void *)(*(code *)PTR_malloc_14c6d9f20)(lVar8);
            *param_3 = _Dst_00;
            if (_Dst_00 == (void *)0x0) {
              return 0x1b;
            }
            memcpy(_Dst_00,(void *)param_3[3],param_3[1]);
          }
          else {
            if ((ulonglong)param_3[2] <= (ulonglong)(*(uint *)(param_1 + 0x6cc) >> 1))
            goto LAB_14550c64d;
LAB_14550c60a:
            if (lVar8 != 0) goto LAB_14550c60f;
          }
LAB_14550c634:
          param_3[2] = 0;
          param_3[3] = _Dst;
          lVar8 = 0;
          _Dst_01 = _Dst;
        }
      }
LAB_14550c64d:
      uVar6 = param_3[2];
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x6cc);
    } while (uVar6 < *(uint *)(param_1 + 0x6cc));
  }
  *(undefined1 *)(param_3 + 4) = 0;
  return uVar11;
}



// FUNCTION 14550c6b0 FUN_14550c6b0 body=113 status=ok
// SIG undefined FUN_14550c6b0(void)

undefined8 FUN_14550c6b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong local_res10 [3];
  undefined1 local_18 [16];
  
  uVar2 = FUN_144f15180(param_1,0,
                        (*(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x30)) +
                        *(longlong *)(param_2 + 0x28),*(longlong *)(param_2 + 0x30),local_res10);
  if ((int)uVar2 == 0) {
    if (local_res10[0] != *(longlong *)(param_2 + 0x30)) {
      *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) - local_res10[0];
      return 0;
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    puVar3 = (undefined8 *)FUN_144f07150(local_18);
    uVar1 = puVar3[1];
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = *puVar3;
    *(undefined8 *)(param_2 + 0x48) = uVar1;
  }
  return uVar2;
}



// FUNCTION 14550c730 FUN_14550c730 body=42 status=ok
// SIG undefined FUN_14550c730(void)

undefined8 FUN_14550c730(undefined8 *param_1)

{
  FUN_144f07d10(param_1 + 0xb);
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  return 0;
}



// FUNCTION 14550c760 FUN_14550c760 body=33 status=ok
// SIG undefined FUN_14550c760(void)

undefined8 FUN_14550c760(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8);
  uVar1 = 1;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar1 = 0x10000;
  }
  return uVar1;
}



// FUNCTION 14550c790 FUN_14550c790 body=29 status=ok
// SIG undefined FUN_14550c790(void)

ulonglong FUN_14550c790(longlong *param_1)

{
  ulonglong in_RAX;
  
  if (((param_1[6] == 0) && (*param_1 != 0)) &&
     (in_RAX = param_1[1], (ulonglong)param_1[2] < in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14550c7b0 FUN_14550c7b0 body=14 status=ok
// SIG undefined FUN_14550c7b0(void)

void FUN_14550c7b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14550c7c0 FUN_14550c7c0 body=83 status=ok
// SIG undefined FUN_14550c7c0(void)

void FUN_14550c7c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1[1] != 0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)();
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = param_4;
  return;
}



// FUNCTION 14550c820 FUN_14550c820 body=5 status=ok
// SIG undefined FUN_14550c820(void)

undefined8 FUN_14550c820(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 14550c830 FUN_14550c830 body=5 status=ok
// SIG undefined FUN_14550c830(void)

undefined8 FUN_14550c830(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 14550c840 FUN_14550c840 body=142 status=ok
// SIG undefined FUN_14550c840(void)

undefined4 FUN_14550c840(undefined8 *param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_2 != (void *)0x0) {
    _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(param_3 + 1);
    if (_Dst == (void *)0x0) {
      return 0x1b;
    }
    if (param_3 != 0) {
      memcpy(_Dst,param_2,param_3);
    }
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
  }
  if ((param_1[1] != 0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)();
  }
  param_1[1] = _Dst;
  *param_1 = &DAT_1452ce920;
  param_1[2] = param_3;
  return 0;
}



// FUNCTION 14550c8d0 FUN_14550c8d0 body=47 status=ok
// SIG undefined FUN_14550c8d0(void)

void FUN_14550c8d0(undefined8 *param_1)

{
  if ((param_1[1] != 0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14550c900 FUN_14550c900 body=19 status=ok
// SIG undefined FUN_14550c900(void)

void FUN_14550c900(longlong param_1,short param_2)

{
  if (param_2 == 0x40) {
    FUN_1452dc200(param_1 + 0x350);
    return;
  }
  return;
}



// FUNCTION 14550c920 FUN_14550c920 body=207 status=ok
// SIG undefined FUN_14550c920(void)

undefined2 FUN_14550c920(void *param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong _Size;
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = uVar3;
  do {
    _Size = *(ulonglong *)((longlong)&DAT_149d9b588 + uVar3);
    if ((_Size <= param_2) &&
       (iVar2 = memcmp(param_1,*(void **)((longlong)&PTR_s_LOGIN_149d9b580 + uVar3),_Size),
       iVar2 == 0)) {
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = _Size;
      }
      if (((param_2 == *(ulonglong *)((longlong)&DAT_149d9b588 + uVar3)) ||
          (bVar1 = *(char *)(*(ulonglong *)((longlong)&DAT_149d9b588 + uVar3) + (longlong)param_1) -
                   0x2d, 0x32 < bVar1)) ||
         ((0x43ffffff01ff9U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        return (&DAT_149d9b590)[uVar4 * 0xc];
      }
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar3 = uVar4 * 0x18;
    if ((&PTR_s_LOGIN_149d9b580)[uVar4 * 3] == (undefined *)0x0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14550c9f0 FUN_14550c9f0 body=318 status=ok
// SIG undefined FUN_14550c9f0(void)

undefined8 FUN_14550c9f0(longlong param_1,char *param_2,ulonglong param_3)

{
  ushort *puVar1;
  ulonglong _Size;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (param_3 == 0) {
    return 3;
  }
  puVar1 = (ushort *)(param_1 + 0x1a);
  if (*(char *)(param_1 + 0x1e) != '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *puVar1 = 0;
  }
  iVar2 = strncmp(param_2,"*",param_3);
  uVar5 = uVar3;
  if (iVar2 == 0) {
    *puVar1 = 0xffdf;
    return 0;
  }
  while (((_Size = *(ulonglong *)((longlong)&DAT_149d9b588 + uVar3), param_3 < _Size ||
          (iVar2 = memcmp(param_2,*(void **)((longlong)&PTR_s_LOGIN_149d9b580 + uVar3),_Size),
          iVar2 != 0)) ||
         ((param_3 != _Size &&
          (((byte)(param_2[_Size] - 0x2dU) < 0x33 &&
           ((0x43ffffff01ff9U >> ((ulonglong)(byte)(param_2[_Size] - 0x2dU) & 0x3f) & 1) != 0)))))))
  {
    uVar4 = (int)uVar5 + 1;
    uVar3 = (ulonglong)uVar4 * 0x18;
    uVar5 = (ulonglong)uVar4;
    if ((&PTR_s_LOGIN_149d9b580)[(ulonglong)uVar4 * 3] == (undefined *)0x0) {
      return 3;
    }
  }
  if ((&DAT_149d9b590)[uVar5 * 0xc] == 0) {
    return 3;
  }
  if (_Size != param_3) {
    return 3;
  }
  *puVar1 = *puVar1 | (&DAT_149d9b590)[uVar5 * 0xc];
  return 0;
}



// FUNCTION 14550cb30 FUN_14550cb30 body=134 status=ok
// SIG undefined FUN_14550cb30(void)

void FUN_14550cb30(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x20c);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = param_3;
  *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)(param_3 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10000;
  *(undefined1 *)(param_1 + 4) = 0;
  if (uVar1 != 1) {
    *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
    *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
    if ((uVar1 & 1) != 0) {
      *(undefined2 *)((longlong)param_1 + 0x1a) = 3;
      uVar2 = 3;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 8;
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 0x40;
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2;
    }
    if ((uVar1 & 0x40) != 0) {
      uVar2 = uVar2 | 0x180;
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2;
    }
    if ((uVar1 & 4) != 0) {
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2 | 0x10;
    }
  }
  return;
}



// FUNCTION 14550cbc0 FUN_14550cbc0 body=26 status=ok
// SIG undefined FUN_14550cbc0(void)

bool FUN_14550cbc0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x13a0) == 0) {
    return (*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x18) & 0x20) != 0;
  }
  return true;
}



// FUNCTION 14550cbe0 FUN_14550cbe0 body=1043 status=ok
// SIG undefined FUN_14550cbe0(void)

int FUN_14550cbe0(longlong *param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  char *pcVar9;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined4 local_res18;
  undefined4 *local_res20;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  
  local_res10 = *(longlong *)(param_2 + 0x8e8);
  iVar6 = 0;
  iVar3 = 0;
  lVar4 = *(longlong *)(param_2 + 0x20);
  local_res18 = 0x11;
  if (local_res10 == 0) {
    local_res10 = *(longlong *)*param_1;
  }
  lVar5 = *(longlong *)(param_2 + 0x920);
  local_res20 = param_4;
  FUN_144f14840(param_2,0,&local_88,local_80,local_res8);
  FUN_14550c7b0(local_60);
  FUN_14550c7b0(local_78);
  uVar7 = 1;
  uVar8 = *(ushort *)((longlong)param_1 + 0x1a) & *(ushort *)(param_1 + 3);
  *(char *)(param_1 + 4) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *local_res20 = 0;
  if (((uVar8 & 0x20) != 0) && (**(char **)(lVar4 + 0x158) == '\0')) {
    pcVar9 = "EXTERNAL";
    *(undefined2 *)((longlong)param_1 + 0x1c) = 0x20;
    uVar7 = 4;
    if ((param_3 != '\0') || (iVar3 = iVar6, *(char *)(param_2 + 0xad9) != '\0')) {
      iVar3 = FUN_1455dc9a0(*(undefined8 *)(lVar4 + 0x150),local_78);
      goto LAB_14550cfdc;
    }
    goto LAB_14550cd20;
  }
  if (*(longlong *)(param_2 + 0x13a0) == 0) goto LAB_14550cdbd;
  if (((uVar8 & 8) == 0) || (cVar1 = FUN_1452d7bf0(), cVar1 == '\0')) {
    if ((uVar8 & 4) != 0) {
      uVar7 = 5;
      pcVar9 = "CRAM-MD5";
      uVar2 = 4;
      goto LAB_14550cd16;
    }
    if (((uVar8 & 0x40) == 0) || (cVar1 = FUN_1452db8d0(), cVar1 == '\0')) {
      if (((uVar8 & 0x100) == 0) || (lVar5 == 0)) {
        if (((char)uVar8 < '\0') && (lVar5 != 0)) {
          pcVar9 = "XOAUTH2";
          *(undefined2 *)((longlong)param_1 + 0x1c) = 0x80;
          uVar7 = 0xd;
          if ((param_3 != '\0') || (iVar3 = iVar6, *(char *)(param_2 + 0xad9) != '\0')) {
            iVar3 = FUN_1455dcc70(*(undefined8 *)(lVar4 + 0x150),lVar5,local_78);
            goto LAB_14550cfdc;
          }
        }
        else if ((uVar8 & 2) == 0) {
          if ((uVar8 & 1) == 0) goto LAB_14550cdbd;
          local_res18 = 3;
          *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
          pcVar9 = "LOGIN";
          uVar7 = 2;
          if ((param_3 != '\0') || (*(char *)(param_2 + 0xad9) != '\0')) {
            iVar3 = FUN_1455dc970(*(undefined8 *)(lVar4 + 0x150),local_78);
            goto LAB_14550cfdc;
          }
        }
        else {
          pcVar9 = "PLAIN";
          *(undefined2 *)((longlong)param_1 + 0x1c) = 2;
          if ((param_3 != '\0') || (iVar3 = iVar6, *(char *)(param_2 + 0xad9) != '\0')) {
            iVar3 = FUN_1455dc810(*(undefined8 *)(lVar4 + 0x168),*(undefined8 *)(lVar4 + 0x150),
                                  *(undefined8 *)(lVar4 + 0x158),local_78);
            goto LAB_14550cfdc;
          }
        }
      }
      else {
        local_res18 = 0xe;
        pcVar9 = "OAUTHBEARER";
        *(undefined2 *)((longlong)param_1 + 0x1c) = 0x100;
        uVar7 = 0xd;
        if ((param_3 != '\0') || (iVar3 = iVar6, *(char *)(param_2 + 0xad9) != '\0')) {
          iVar3 = FUN_1455dcbf0(*(undefined8 *)(lVar4 + 0x150),local_88,local_res8[0],lVar5,local_78
                               );
          goto LAB_14550cfdc;
        }
      }
    }
    else {
      local_res18 = 9;
      *(undefined2 *)((longlong)param_1 + 0x1c) = 0x40;
      pcVar9 = "NTLM";
      uVar7 = 8;
      if ((param_3 != '\0') || (iVar3 = iVar6, *(char *)(param_2 + 0xad9) != '\0')) {
        iVar3 = FUN_1452db8e0(param_2,*(undefined8 *)(lVar4 + 0x150),*(undefined8 *)(lVar4 + 0x158),
                              local_res10,local_88,lVar4 + 0x350,local_78);
LAB_14550cfdc:
        if (iVar3 != 0) goto LAB_14550cdbd;
      }
    }
  }
  else {
    pcVar9 = "DIGEST-MD5";
    uVar7 = 6;
    uVar2 = 8;
LAB_14550cd16:
    *(undefined2 *)((longlong)param_1 + 0x1c) = uVar2;
    iVar3 = iVar6;
  }
LAB_14550cd20:
  param_1[2] = (longlong)pcVar9;
  lVar4 = FUN_14550c820(local_78);
  if (lVar4 != 0) {
    iVar3 = FUN_14550d4f0(param_1,local_78);
  }
  if (*(longlong *)(*param_1 + 0x28) != 0) {
    lVar4 = FUN_14550c830(local_78);
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pcVar9[lVar5] != '\0');
    if (*(ulonglong *)(*param_1 + 0x28) < (ulonglong)(lVar4 + lVar5)) {
      FUN_14550c8d0(local_78);
    }
  }
  if ((iVar3 == 0) && (iVar3 = (**(code **)(*param_1 + 8))(param_2,pcVar9,local_78), iVar3 == 0)) {
    *local_res20 = 1;
    lVar4 = FUN_14550c820(local_78);
    if (lVar4 != 0) {
      uVar7 = local_res18;
    }
    *(undefined4 *)(param_1 + 1) = uVar7;
  }
LAB_14550cdbd:
  FUN_14550c8d0(local_78);
  return iVar3;
}



// FUNCTION 14550d000 FUN_14550d000 body=1024 status=ok
// SIG undefined FUN_14550d000(void)

ulonglong FUN_14550d000(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined8 local_res20;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  local_res10 = *(longlong *)(param_2 + 0x8e8);
  lVar2 = *(longlong *)(param_2 + 0x20);
  uVar6 = 0x11;
  if (local_res10 == 0) {
    local_res10 = *(longlong *)*param_1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x920);
  FUN_144f14840(param_2,0,&local_res20,local_70,local_res8);
  FUN_14550c7b0(local_50);
  FUN_14550c7b0(local_68);
  uVar5 = 1;
  *param_4 = 1;
  iVar1 = (int)param_1[1];
  if (iVar1 == 0x11) {
    iVar1 = *(int *)(*param_1 + 0x34);
    *param_4 = 2;
    uVar4 = 0x43;
    if (param_3 == iVar1) {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return (ulonglong)uVar4;
  }
  if (iVar1 == 0x10) {
switchD_14550d0ee_caseD_10:
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) ^ *(ushort *)((longlong)param_1 + 0x1c);
    uVar5 = FUN_14550cbe0(param_1,param_2,(char)param_1[4],param_4);
    return uVar5;
  }
  if (iVar1 == 0xe) {
switchD_14550d0ee_caseD_e:
    if (param_3 == *(int *)(*param_1 + 0x34)) {
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0;
    }
    if (param_3 != *(int *)(*param_1 + 0x30)) {
LAB_14550d3b8:
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0x43;
    }
    FUN_14550c7c0(local_68,&DAT_149d9b720,1,0);
    goto switchD_14550d0ee_caseD_7;
  }
  if (param_3 != *(int *)(*param_1 + 0x30)) goto LAB_14550d3b8;
  switch(iVar1) {
  case 0:
    *param_4 = 2;
    return 0;
  case 1:
    uVar4 = FUN_1455dc810(*(undefined8 *)(lVar2 + 0x168),*(undefined8 *)(lVar2 + 0x150),
                          *(undefined8 *)(lVar2 + 0x158),local_68);
    break;
  case 2:
    uVar4 = FUN_1455dc970(*(undefined8 *)(lVar2 + 0x150),local_68);
    uVar6 = 3;
    break;
  case 3:
    uVar4 = FUN_1455dc970(*(undefined8 *)(lVar2 + 0x158),local_68);
    break;
  case 4:
    uVar4 = FUN_1455dc9a0(*(undefined8 *)(lVar2 + 0x150),local_68);
    break;
  case 5:
    uVar4 = FUN_14550d450(param_1,param_2,local_50);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_1455dc9d0(local_50,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
                            local_68);
      break;
    }
    goto LAB_14550d2e1;
  case 6:
    uVar4 = FUN_14550d450(param_1,param_2,local_50);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_1452d7c00(param_2,local_50,*(undefined8 *)(lVar2 + 0x150),
                            *(undefined8 *)(lVar2 + 0x158),local_res10,local_68);
      uVar5 = (ulonglong)uVar4;
      if ((uVar4 == 0) && ((*(byte *)(*param_1 + 0x3a) & 1) != 0)) {
        uVar6 = 7;
        goto switchD_14550d0ee_caseD_7;
      }
    }
    goto LAB_14550d2e1;
  case 7:
    goto switchD_14550d0ee_caseD_7;
  case 8:
    uVar4 = FUN_1452db8e0(param_2,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
                          local_res10,local_res20,lVar2 + 0x350,local_68);
    uVar6 = 9;
    break;
  case 9:
    uVar4 = FUN_14550d450(param_1,param_2,local_50);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_1452db9f0(param_2,local_50,lVar2 + 0x350);
      uVar5 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        uVar4 = FUN_1452dbb70(param_2,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
                              lVar2 + 0x350,local_68);
        break;
      }
    }
    goto LAB_14550d2e1;
  default:
    FUN_144f14b70(param_2,"Unsupported SASL authentication mechanism");
    FUN_14550c8d0(local_50);
    goto LAB_14550d324;
  case 0xd:
    if (*(short *)((longlong)param_1 + 0x1c) == 0x100) {
      uVar4 = FUN_1455dcbf0(*(undefined8 *)(lVar2 + 0x150),local_res20,local_res8[0],uVar3,local_68)
      ;
      uVar6 = 0xe;
    }
    else {
      uVar4 = FUN_1455dcc70(*(undefined8 *)(lVar2 + 0x150),uVar3,local_68);
    }
    break;
  case 0xe:
    goto switchD_14550d0ee_caseD_e;
  case 0x10:
    goto switchD_14550d0ee_caseD_10;
  }
  uVar5 = (ulonglong)uVar4;
LAB_14550d2e1:
  FUN_14550c8d0(local_50);
  if ((int)uVar5 == 0) {
LAB_14550d383:
    uVar4 = FUN_14550d4f0(param_1,local_68);
    if (uVar4 == 0) {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_2,param_1[2],local_68);
    }
  }
  else {
    if ((int)uVar5 != 0x3d) {
LAB_14550d324:
      *param_4 = 2;
      FUN_14550c8d0(local_68);
      *(undefined4 *)(param_1 + 1) = 0;
      return uVar5;
    }
    uVar4 = (**(code **)(*param_1 + 0x18))(param_2,param_1[2]);
    uVar6 = 0x10;
  }
  FUN_14550c8d0(local_68);
  *(undefined4 *)(param_1 + 1) = uVar6;
  return (ulonglong)uVar4;
switchD_14550d0ee_caseD_7:
  FUN_14550c8d0(local_50);
  goto LAB_14550d383;
}



// FUNCTION 14550d450 FUN_14550d450 body=148 status=ok
// SIG undefined FUN_14550d450(void)

ulonglong FUN_14550d450(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 local_res8;
  undefined8 local_res20;
  
  uVar1 = (**(code **)(*param_1 + 0x20))(param_2,param_3);
  if (((int)uVar1 == 0) && ((*(byte *)(*param_1 + 0x3a) & 1) != 0)) {
    pcVar2 = (char *)FUN_14550c820(param_3);
    if ((*pcVar2 == '\0') || (*pcVar2 == '=')) {
      puVar3 = (undefined *)0x0;
      local_res8 = 0;
      local_res20 = 0;
    }
    else {
      uVar1 = FUN_1452b8bb0(pcVar2,&local_res20,&local_res8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      puVar3 = &DAT_1452ce920;
    }
    uVar1 = uVar1 & 0xffffffff;
    FUN_14550c7c0(param_3,local_res20,local_res8,puVar3);
  }
  return uVar1;
}



// FUNCTION 14550d4f0 FUN_14550d4f0 body=186 status=ok
// SIG undefined FUN_14550d4f0(void)

ulonglong FUN_14550d4f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  if ((*(byte *)(*param_1 + 0x3a) & 1) != 0) {
    lVar1 = FUN_14550c820(param_2);
    if (lVar1 == 0) {
      FUN_14550c7c0(param_2,&DAT_14996de1b,0,0);
      return 0;
    }
    lVar1 = FUN_14550c830(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_14550c830(param_2);
      uVar3 = FUN_14550c820(param_2);
      uVar4 = FUN_1452b8b50(uVar3,uVar2,local_res18,&local_res8);
      if ((int)uVar4 == 0) {
        FUN_14550c7c0(param_2,local_res18[0],local_res8,&DAT_1452ce920);
        uVar4 = uVar4 & 0xffffffff;
      }
      return uVar4;
    }
    FUN_14550c7c0(param_2,&DAT_149982a08,1,0);
  }
  return 0;
}



// FUNCTION 14550d5b0 FUN_14550d5b0 body=28 status=ok
// SIG undefined FUN_14550d5b0(void)

undefined8 FUN_14550d5b0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14525f250();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1b;
  }
  return uVar2;
}



// FUNCTION 14550d5f0 FUN_14550d5f0 body=114 status=ok
// SIG undefined FUN_14550d5f0(void)

void FUN_14550d5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_14525f250(local_88);
  if (iVar1 != 0) {
    uVar2 = FUN_144f16fc0(param_3);
    FUN_14525f2a0(local_88,param_2,uVar2);
    FUN_14525f3d0(param_1,local_88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14550d670 FUN_14550d670 body=108 status=ok
// SIG undefined FUN_14550d670(void)

undefined8 * FUN_14550d670(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (*(code *)PTR_malloc_14c6d9f20)(*(undefined4 *)(param_1 + 3));
    puVar2[1] = lVar3;
    if (lVar3 != 0) {
      *puVar2 = param_1;
      iVar1 = (*(code *)*param_1)(lVar3);
      if (iVar1 == 0) {
        return puVar2;
      }
      (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
    }
    (*(code *)PTR_free_14c6d9f28)(puVar2);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14550d6e0 FUN_14550d6e0 body=21 status=ok
// SIG undefined FUN_14550d6e0(void)

undefined8 FUN_14550d6e0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}



// FUNCTION 14550d700 FUN_14550d700 body=52 status=ok
// SIG undefined FUN_14550d700(void)

undefined8 FUN_14550d700(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
  (*(code *)PTR_free_14c6d9f28)(param_1[1]);
  (*(code *)PTR_free_14c6d9f28)(param_1);
  return 0;
}



// FUNCTION 14550d740 FUN_14550d740 body=68 status=ok
// SIG undefined FUN_14550d740(void)

undefined8 FUN_14550d740(char *param_1,int param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  uVar1 = Ordinal_57(param_1,param_2);
  param_1[(longlong)param_2 + -1] = '\0';
  if ((int)uVar1 == 0) {
    pcVar2 = strchr(param_1,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14550d790 FUN_14550d790 body=133 status=ok
// SIG undefined FUN_14550d790(void)

undefined4 FUN_14550d790(short *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  if (*param_1 == 0x17) {
    if ((*(byte *)(param_1 + 4) & 0xfe) == 0xfc) {
      return 3;
    }
    uVar1 = CONCAT11(*(byte *)(param_1 + 4),*(char *)((longlong)param_1 + 9));
    uVar3 = uVar1 & 0xffc0;
    if ((uVar1 & 0xffc0) == 0) {
      if ((((((((((((((char)param_1[0xb] == '\0' && *(char *)((longlong)param_1 + 0x15) == '\0') &&
                    (char)param_1[10] == '\0') && *(char *)((longlong)param_1 + 0x13) == '\0') &&
                  (char)param_1[9] == '\0') && *(char *)((longlong)param_1 + 0x11) == '\0') &&
                (char)param_1[8] == '\0') && *(char *)((longlong)param_1 + 0xf) == '\0') &&
              (char)param_1[7] == '\0') && *(char *)((longlong)param_1 + 0xd) == '\0') &&
            (char)param_1[6] == '\0') && *(char *)((longlong)param_1 + 0xb) == '\0') &&
          (char)param_1[5] == '\0') && *(char *)((longlong)param_1 + 9) == '\0') {
        uVar2 = 0;
        if (*(char *)((longlong)param_1 + 0x17) == '\x01') {
          uVar2 = 4;
        }
        return uVar2;
      }
    }
    else {
      if (uVar3 == 0xfe80) {
        return 1;
      }
      if (uVar3 == 0xfec0) {
        return 2;
      }
    }
  }
  return 0;
}



// FUNCTION 14550d820 FUN_14550d820 body=3 status=ok
// SIG undefined FUN_14550d820(void)

undefined8 FUN_14550d820(void)

{
  return 0;
}



// FUNCTION 14550d830 FUN_14550d830 body=317 status=ok
// SIG undefined FUN_14550d830(void)

undefined8 FUN_14550d830(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if ((*(char *)(param_1 + 0x13cd) == '\0') || (*(longlong *)(param_1 + 0x11b8) == 0)) {
    *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
    return 0;
  }
  iVar2 = FUN_1452b1ac0(*(longlong *)(param_1 + 0x11b8),&local_res8,10,&local_res10);
  if (iVar2 != 1) {
    bVar1 = *local_res8;
    while (((bVar1 != 0 && (bVar1 < 0x2e)) &&
           ((0x200100000200U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0))) {
      local_res8 = local_res8 + 1;
      bVar1 = *local_res8;
    }
    iVar3 = FUN_1452b1ac0(local_res8,local_res20,10,&local_res18);
    if (iVar3 != 1) {
      if ((iVar3 == 2) && (iVar2 == 0)) {
        *(longlong *)(param_1 + 0x11c0) = local_res10;
        return 0;
      }
      if ((iVar2 == 2) && (iVar3 == 0)) {
        *(longlong *)(param_1 + 0xf8) = local_res18;
        *(longlong *)(param_1 + 0x11c0) = -local_res18;
        return 0;
      }
      if ((local_res10 <= local_res18) && (local_res18 - local_res10 != 0x7fffffffffffffff)) {
        *(longlong *)(param_1 + 0x11c0) = local_res10;
        *(longlong *)(param_1 + 0xf8) = (local_res18 - local_res10) + 1;
        return 0;
      }
    }
  }
  return 0x21;
}



// FUNCTION 14550d970 FUN_14550d970 body=160 status=ok
// SIG undefined FUN_14550d970(void)

void FUN_14550d970(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14550e050(param_1,local_a8);
  FUN_1452630c0(param_2,param_3,local_a8,1);
  FUN_14550e050(param_1 + 7,local_a8);
  FUN_1452630c0(param_2,param_3 + 8,local_a8,1);
  FUN_14550e050(param_1 + 0xe,local_a8);
  FUN_1452630c0(param_2,param_3 + 0x10,local_a8,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14550da20 FUN_14550da20 body=341 status=ok
// SIG undefined FUN_14550da20(void)

void FUN_14550da20(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  char local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  char local_31;
  char local_30 [4];
  byte local_2c;
  byte local_2b;
  byte local_2a;
  undefined1 local_29 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = -1;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)(param_1 + uVar1) != '\0');
  if (uVar1 < 0xe) {
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  else {
    lVar2 = 0xe;
  }
  FUN_144f19650(local_30,param_1,lVar2);
  memset(local_30 + lVar2,0,0xe - lVar2);
  local_38 = local_30[0];
  local_37 = (byte)local_30[1] >> 1 | local_30[0] << 7;
  local_36 = (byte)local_30[2] >> 2 | local_30[1] << 6;
  local_35 = (byte)local_30[3] >> 3 | local_30[2] << 5;
  local_34 = local_2c >> 4 | local_30[3] << 4;
  local_33 = local_2b >> 5 | local_2c << 3;
  local_31 = local_2a * '\x02';
  local_32 = local_2a >> 6 | local_2b << 2;
  FUN_145263190(&local_38);
  FUN_1452631f0(&local_38,local_b8);
  FUN_1452630c0("KGS!@#$%%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",param_2,local_b8,1);
  FUN_14550e050(local_29,local_b8);
  FUN_1452630c0("KGS!@#$%%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",param_2 + 8,local_b8,1);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14550db90 FUN_14550db90 body=204 status=ok
// SIG undefined FUN_14550db90(void)

int FUN_14550db90(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(uVar3 + param_1) != '\0');
  if (uVar3 < 0x8000000000000000) {
    uVar4 = 0;
    if (uVar3 == 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
      uVar5 = uVar4;
    }
    else {
      lVar2 = (*(code *)PTR_malloc_14c6d9f20)(uVar3 * 2);
      uVar5 = uVar3 * 2;
    }
    if (lVar2 != 0) {
      if (uVar3 != 0) {
        do {
          *(undefined1 *)(lVar2 + uVar4 * 2) = *(undefined1 *)(uVar4 + param_1);
          *(undefined1 *)(lVar2 + 1 + uVar4 * 2) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      iVar1 = FUN_1455dccd0(param_2,lVar2,uVar5);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined1 *)(param_2 + 0x14) = 0;
      }
      (*(code *)PTR_free_14c6d9f28)(lVar2);
      return iVar1;
    }
  }
  return 0x1b;
}



// FUNCTION 14550dc60 FUN_14550dc60 body=289 status=ok
// SIG undefined FUN_14550dc60(void)

undefined4
FUN_14550dc60(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_2 < 0x7a1201) && (param_4 < 0x7a1201)) {
    lVar2 = (param_2 + param_4) * 2;
    lVar5 = (*(code *)PTR_malloc_14c6d9f20)(lVar2 + 1);
    if (lVar5 != 0) {
      uVar6 = 0;
      uVar7 = uVar6;
      if (param_2 != 0) {
        do {
          uVar3 = FUN_144f19630(*(undefined1 *)(uVar7 + param_1));
          *(undefined1 *)(lVar5 + uVar7 * 2) = uVar3;
          *(undefined1 *)(lVar5 + 1 + uVar7 * 2) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
      }
      lVar1 = lVar5 + param_2 * 2;
      if (param_4 != 0) {
        do {
          *(undefined1 *)(lVar1 + uVar6 * 2) = *(undefined1 *)(uVar6 + param_3);
          *(undefined1 *)(lVar1 + 1 + uVar6 * 2) = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_4);
      }
      uVar4 = FUN_14550e480(&PTR_FUN_149d9b778,param_5,0x10,lVar5,lVar2,param_6);
      (*(code *)PTR_free_14c6d9f28)(lVar5);
      return uVar4;
    }
  }
  return 0x1b;
}



// FUNCTION 14550dd90 FUN_14550dd90 body=537 status=ok
// SIG undefined FUN_14550dd90(void)

void FUN_14550dd90(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                  int *param_5)

{
  int iVar1;
  __time64_t _Var2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined4 *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  undefined4 local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  undefined8 *local_78;
  undefined8 local_70;
  longlong *local_68;
  int *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_60 = param_5;
  local_78 = param_2;
  local_70 = param_1;
  local_68 = param_4;
  _Var2 = _time64((__time64_t *)0x0);
  iVar4 = *(int *)(param_3 + 0xc) + 0x30;
  uVar5 = (_Var2 + 0x2b6109100) * 10000000;
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,iVar4);
  if (puVar3 != (undefined4 *)0x0) {
    local_90 = (int)(short)(uVar5 >> 0x30) & 0xff;
    local_98 = (uint)((longlong)uVar5 >> 0x28) & 0xff;
    local_b0 = (uint)(uVar5 >> 0x10) & 0xff;
    local_b8 = (uint)(uVar5 >> 8) & 0xff;
    local_c0 = (undefined4)(uVar5 & 0xff000000ff);
    local_88 = (uint)(byte)(uVar5 >> 0x38);
    local_a0 = (undefined4)((uVar5 & 0xff000000ff) >> 0x20);
    local_a8 = (uint)(uVar5 >> 0x18) & 0xff;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = (undefined4 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = CONCAT44(local_f8._4_4_,1);
    FUN_144f2b7e0(puVar3 + 4,*(int *)(param_3 + 0xc) + 0x20,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",1);
    *(undefined8 *)(puVar3 + 8) = *local_78;
    if (*(uint *)(param_3 + 0xc) != 0) {
      memcpy(puVar3 + 0xb,*(void **)(param_3 + 0x10),(ulonglong)*(uint *)(param_3 + 0xc));
    }
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_3 + 4);
    local_f0 = &local_58;
    local_f8 = (ulonglong)(*(int *)(param_3 + 0xc) + 0x28);
    iVar1 = FUN_14550e480(&PTR_FUN_149d9b778,local_70,0x10);
    if (iVar1 == 0) {
      *puVar3 = local_58;
      puVar3[1] = uStack_54;
      puVar3[2] = uStack_50;
      puVar3[3] = uStack_4c;
      *local_68 = (longlong)puVar3;
      *local_60 = iVar4;
    }
    else {
      (*(code *)PTR_free_14c6d9f28)(puVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 14550dfc0 FUN_14550dfc0 body=122 status=ok
// SIG undefined FUN_14550dfc0(void)

void FUN_14550dfc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = *param_2;
  local_40 = &local_28;
  local_48 = 0x10;
  iVar1 = FUN_14550e480(&PTR_FUN_149d9b778,param_1,0x10,&local_38);
  if (iVar1 == 0) {
    *param_4 = local_28;
    param_4[1] = uStack_24;
    param_4[2] = uStack_20;
    param_4[3] = uStack_1c;
    *(undefined8 *)(param_4 + 4) = *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 14550e050 FUN_14550e050 body=199 status=ok
// SIG undefined FUN_14550e050(void)

void FUN_14550e050(char *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  char local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_17 = (byte)param_1[1] >> 1 | local_18 << 7;
  local_16 = (byte)param_1[2] >> 2 | param_1[1] << 6;
  local_15 = (byte)param_1[3] >> 3 | param_1[2] << 5;
  local_14 = (byte)param_1[4] >> 4 | param_1[3] << 4;
  local_13 = (byte)param_1[5] >> 5 | param_1[4] << 3;
  local_11 = param_1[6] * '\x02';
  local_12 = (byte)param_1[6] >> 6 | param_1[5] << 2;
  FUN_145263190(&local_18);
  FUN_1452631f0(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14550e120 FUN_14550e120 body=15 status=ok
// SIG undefined FUN_14550e120(void)

undefined2 FUN_14550e120(undefined2 *param_1)

{
  return *param_1;
}



// FUNCTION 14550e130 FUN_14550e130 body=31 status=ok
// SIG undefined FUN_14550e130(void)

undefined4 FUN_14550e130(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 14550e150 FUN_14550e150 body=15 status=ok
// SIG undefined FUN_14550e150(void)

undefined2 FUN_14550e150(undefined1 *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



// FUNCTION 14550e160 FUN_14550e160 body=83 status=ok
// SIG undefined FUN_14550e160(void)

undefined8 FUN_14550e160(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_144ba5700();
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return 0x1b;
  }
  uVar3 = FUN_144bab040();
  iVar1 = FUN_144ba5a20(*param_1,uVar3,0);
  if (iVar1 == 0) {
    FUN_144ba5800(*param_1);
    return 2;
  }
  return 0;
}



// FUNCTION 14550e1d0 FUN_14550e1d0 body=36 status=ok
// SIG undefined FUN_14550e1d0(void)

void FUN_14550e1d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144ba5ca0(*param_2,param_1,0);
  FUN_144ba5800(*param_2);
  return;
}



// FUNCTION 14550e200 FUN_14550e200 body=152 status=ok
// SIG undefined FUN_14550e200(void)

undefined4 FUN_14550e200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_144ba5700();
  if (lVar3 == 0) {
    uVar1 = 0x1b;
  }
  else {
    uVar4 = FUN_144bab040();
    iVar2 = FUN_144ba5a20(lVar3,uVar4,0);
    if (iVar2 == 0) {
      FUN_144ba5800(lVar3);
      uVar1 = 2;
    }
    else {
      uVar1 = FUN_144f16fc0(param_3);
      FUN_144ba5c70(lVar3,param_2,uVar1);
      FUN_144ba5ca0(lVar3,param_1,0);
      FUN_144ba5800(lVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 14550e2a0 FUN_14550e2a0 body=335 status=ok
// SIG undefined FUN_14550e2a0(void)

undefined8 * FUN_14550e2a0(undefined8 *param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  
  uVar3 = (ulonglong)param_3;
  puVar1 = (undefined8 *)
           (*(code *)PTR_malloc_14c6d9f20)
                     ((ulonglong)*(uint *)(param_1 + 4) + 0x18 +
                      (ulonglong)(uint)(*(int *)(param_1 + 3) * 2));
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = (ulonglong)*(uint *)(param_1 + 3) + (longlong)(puVar1 + 3);
  if (*(uint *)((longlong)param_1 + 0x1c) < param_3) {
    (*(code *)*param_1)();
    (*(code *)param_1[1])(puVar1[1],param_2,uVar3);
    param_2 = (byte *)((ulonglong)*(uint *)(param_1 + 3) + puVar1[2]);
    (*(code *)param_1[2])(param_2,puVar1[1]);
    uVar3 = (ulonglong)*(uint *)(param_1 + 4);
  }
  (*(code *)*param_1)(puVar1[1]);
  (*(code *)*param_1)(puVar1[2]);
  uVar2 = 0;
  for (uVar4 = uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
    local_res8[0] = *param_2 ^ 0x36;
    (*(code *)param_1[1])(puVar1[1],local_res8,1);
    local_res8[0] = *param_2 ^ 0x5c;
    param_2 = param_2 + 1;
    (*(code *)param_1[1])(puVar1[2],local_res8,1);
    uVar2 = uVar3;
  }
  if (uVar2 < *(uint *)((longlong)param_1 + 0x1c)) {
    do {
      (*(code *)param_1[1])(puVar1[1],&DAT_149d9b7f8,1);
      (*(code *)param_1[1])(puVar1[2],&DAT_149d9b7f9,1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x1c));
  }
  return puVar1;
}



// FUNCTION 14550e3f0 FUN_14550e3f0 body=21 status=ok
// SIG undefined FUN_14550e3f0(void)

undefined8 FUN_14550e3f0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}



// FUNCTION 14550e410 FUN_14550e410 body=107 status=ok
// SIG undefined FUN_14550e410(void)

undefined8 FUN_14550e410(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = (ulonglong)*(uint *)(lVar1 + 0x18) + param_1[2];
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
  (*(code *)PTR_free_14c6d9f28)(param_1);
  return 0;
}



// FUNCTION 14550e480 FUN_14550e480 body=440 status=ok
// SIG undefined FUN_14550e480(void)

undefined8
FUN_14550e480(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte local_res8 [8];
  
  uVar2 = FUN_144f16fc0(param_3);
  uVar6 = (ulonglong)uVar2;
  plVar4 = (longlong *)
           (*(code *)PTR_malloc_14c6d9f20)
                     ((ulonglong)*(uint *)(param_1 + 4) + 0x18 +
                      (ulonglong)(uint)(*(int *)(param_1 + 3) * 2));
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)param_1;
    plVar4[1] = (longlong)(plVar4 + 3);
    plVar4[2] = (ulonglong)*(uint *)(param_1 + 3) + (longlong)(plVar4 + 3);
    if (*(uint *)((longlong)param_1 + 0x1c) < uVar2) {
      (*(code *)*param_1)();
      (*(code *)param_1[1])(plVar4[1],param_2,uVar6);
      param_2 = (byte *)((ulonglong)*(uint *)(param_1 + 3) + plVar4[2]);
      (*(code *)param_1[2])(param_2,plVar4[1]);
      uVar6 = (ulonglong)*(uint *)(param_1 + 4);
    }
    (*(code *)*param_1)(plVar4[1]);
    (*(code *)*param_1)(plVar4[2]);
    uVar5 = 0;
    for (uVar7 = uVar6; uVar7 != 0; uVar7 = uVar7 - 1) {
      local_res8[0] = *param_2 ^ 0x36;
      (*(code *)param_1[1])(plVar4[1],local_res8,1);
      local_res8[0] = *param_2 ^ 0x5c;
      param_2 = param_2 + 1;
      (*(code *)param_1[1])(plVar4[2],local_res8,1);
      uVar5 = uVar6;
    }
    if (uVar5 < *(uint *)((longlong)param_1 + 0x1c)) {
      do {
        (*(code *)param_1[1])(plVar4[1],&DAT_149d9b7f8,1);
        (*(code *)param_1[1])(plVar4[2],&DAT_149d9b7f9,1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x1c));
    }
    uVar3 = FUN_144f16fc0(param_5);
    (**(code **)(*plVar4 + 8))(plVar4[1],param_4,uVar3);
    lVar1 = *plVar4;
    if (param_6 == 0) {
      param_6 = (ulonglong)*(uint *)(lVar1 + 0x18) + plVar4[2];
    }
    (**(code **)(lVar1 + 0x10))(param_6,plVar4[1]);
    (**(code **)(lVar1 + 8))(plVar4[2],param_6,*(undefined4 *)(lVar1 + 0x20));
    (**(code **)(lVar1 + 0x10))(param_6,plVar4[2]);
    (*(code *)PTR_free_14c6d9f28)(plVar4);
    return 0;
  }
  return 0x1b;
}



// FUNCTION 14550e640 FUN_14550e640 body=66 status=ok
// SIG undefined FUN_14550e640(void)

undefined8 FUN_14550e640(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(undefined1 *)(param_1 + 0x450) = 1;
  uVar2 = *(ulonglong *)(param_1 + 0x440);
  if (param_2 < *(ulonglong *)(param_1 + 0x440)) {
    uVar2 = param_2;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar2;
  uVar1 = *(ulonglong *)(param_1 + 0x448);
  if (uVar2 <= *(ulonglong *)(param_1 + 0x448)) {
    uVar1 = uVar2;
  }
  *(ulonglong *)(param_1 + 0x448) = uVar1;
  FUN_145510bb0(param_1,param_1 + 0x40);
  return 0;
}



// FUNCTION 14550e690 FUN_14550e690 body=309 status=ok
// SIG undefined FUN_14550e690(void)

longlong FUN_14550e690(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar5 = 0;
  lVar8 = (param_3 + 1) * 0xc;
  uVar7 = uVar5;
  if (3 < param_3) {
    lVar9 = 0;
    lVar10 = 0;
    lVar2 = 0;
    lVar4 = 0;
    plVar3 = (longlong *)(param_2 + 0x38);
    do {
      uVar7 = uVar7 + 4;
      lVar9 = lVar9 + plVar3[-4] + plVar3[-5];
      lVar10 = lVar10 + plVar3[1] + *plVar3;
      lVar2 = lVar2 + plVar3[5] + plVar3[6];
      lVar4 = lVar4 + plVar3[10] + plVar3[0xb];
      plVar3 = plVar3 + 0x14;
    } while (uVar7 < (param_3 & 0xfffffffffffffffc));
    auVar1._8_4_ = (int)(lVar4 + lVar10);
    auVar1._0_8_ = lVar2 + lVar9;
    auVar1._12_4_ = (int)((ulonglong)(lVar4 + lVar10) >> 0x20);
    lVar8 = lVar8 + lVar2 + lVar9 + auVar1._8_8_;
  }
  if (param_3 <= uVar7) {
    return lVar8;
  }
  uVar6 = uVar5;
  if (1 < param_3 - uVar7) {
    lVar2 = uVar7 * 5;
    lVar4 = ((param_3 - uVar7) - 2 >> 1) + 1;
    uVar7 = uVar7 + lVar4 * 2;
    plVar3 = (longlong *)(param_2 + (lVar2 + 2) * 8);
    do {
      uVar6 = uVar6 + plVar3[1] + *plVar3;
      uVar5 = uVar5 + plVar3[6] + plVar3[5];
      lVar4 = lVar4 + -1;
      plVar3 = plVar3 + 10;
    } while (lVar4 != 0);
    if (param_3 <= uVar7) goto LAB_14550e7a5;
  }
  lVar8 = lVar8 + *(longlong *)(param_2 + 0x18 + uVar7 * 0x28) +
                  *(longlong *)(param_2 + 0x10 + uVar7 * 0x28);
LAB_14550e7a5:
  return uVar5 + uVar6 + lVar8;
}



// FUNCTION 14550e7d0 FUN_14550e7d0 body=80 status=ok
// SIG undefined FUN_14550e7d0(void)

undefined8 FUN_14550e7d0(longlong param_1,ulonglong param_2)

{
  if ((*(int *)(param_1 + 0xe4) != 0) && (*(int *)(param_1 + 0xe4) != 1)) {
    return 0xfffffdf9;
  }
  *(ulonglong *)(param_1 + 200) = param_2;
  if (param_2 < *(ulonglong *)(param_1 + 0x30)) {
    *(ulonglong *)(param_1 + 0xd0) = param_2;
    *(ulonglong *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_145510bb0(param_1,0);
  }
  return 0;
}



// FUNCTION 14550e820 FUN_14550e820 body=65 status=ok
// SIG undefined FUN_14550e820(void)

void FUN_14550e820(longlong param_1)

{
  FUN_1455dcd60(*(undefined8 *)(param_1 + 0xb0));
  FUN_1455dcd60(*(undefined8 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xe4) = 1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 14550e870 FUN_14550e870 body=102 status=ok
// SIG undefined FUN_14550e870(void)

undefined8 FUN_14550e870(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145510210();
  if ((int)uVar1 == 0) {
    memset((void *)(param_1 + 0x40),0,0x400);
    if (param_2 < 0x1000) {
      *(ulonglong *)(param_1 + 0x30) = param_2;
    }
    *(bool *)(param_1 + 0x450) = param_2 < 0x1000;
    *(undefined8 *)(param_1 + 0x448) = 0xffffffff;
    uVar1 = 0;
    *(ulonglong *)(param_1 + 0x440) = param_2;
  }
  return uVar1;
}



// FUNCTION 14550e8e0 thunk_FUN_1455102a0 body=5 status=ok
// SIG undefined thunk_FUN_1455102a0(void)

void thunk_FUN_1455102a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar1 = param_1[4];
  if (param_1[3] != 0) {
    if (param_1[3] == 0) {
      _wassert(L"idx < ringbuf->len",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",0x25d)
      ;
    }
    do {
      puVar2 = *(undefined8 **)(*param_1 + (param_1[2] + uVar3 & param_1[1]) * 8);
      FUN_1455dcd60(puVar2[1]);
      FUN_1455dcd60(*puVar2);
      FUN_1455112a0(lVar1,puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[3]);
  }
  FUN_1455112a0(lVar1,*param_1);
  return;
}



// FUNCTION 14550e8f0 FUN_14550e8f0 body=193 status=ok
// SIG undefined FUN_14550e8f0(void)

undefined8 FUN_14550e8f0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (*(char *)(param_1 + 0x450) != '\0') {
      uVar2 = *(ulonglong *)(param_1 + 0x448);
      *(undefined1 *)(param_1 + 0x450) = 0;
      *(undefined8 *)(param_1 + 0x448) = 0xffffffff;
      if (((uVar2 < *(ulonglong *)(param_1 + 0x30)) &&
          (uVar1 = FUN_1455103c0(param_2), (int)uVar1 != 0)) ||
         (uVar1 = FUN_1455103c0(param_2,*(undefined8 *)(param_1 + 0x30)), (int)uVar1 != 0)) {
LAB_14550e9ab:
        *(undefined1 *)(param_1 + 0x3c) = 1;
        return uVar1;
      }
    }
    uVar2 = 0;
    if (param_4 != 0) {
      do {
        uVar1 = FUN_145510d00(param_1,param_2,param_3);
        if ((int)uVar1 != 0) goto LAB_14550e9ab;
        uVar2 = uVar2 + 1;
        param_3 = param_3 + 0x28;
      } while (uVar2 < param_4);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffdf5;
  }
  return uVar1;
}



// FUNCTION 14550e9c0 FUN_14550e9c0 body=162 status=ok
// SIG undefined FUN_14550e9c0(void)

undefined8 FUN_14550e9c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145510210();
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_1 + 200) = 0x1000;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe4) = 1;
    FUN_145511890(param_1 + 0x48);
    FUN_145511890(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x98) = 0;
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xea) = 0;
  }
  return uVar1;
}



// FUNCTION 14550ea70 FUN_14550ea70 body=86 status=ok
// SIG undefined FUN_14550ea70(void)

void FUN_14550ea70(longlong param_1)

{
  FUN_1455dcd60(*(undefined8 *)(param_1 + 0xb0));
  FUN_1455dcd60(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_1455dcd60(*(undefined8 *)(param_1 + 0xa0));
  FUN_1455dcd60(*(undefined8 *)(param_1 + 0x98));
  FUN_1455102a0(param_1);
  return;
}



// FUNCTION 14550ead0 FUN_14550ead0 body=2539 status=ok
// SIG undefined FUN_14550ead0(void)

ulonglong FUN_14550ead0(longlong *param_1,undefined8 *param_2,uint *param_3,byte *param_4,
                       longlong param_5,int param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  ulonglong uVar20;
  int local_res8;
  undefined4 uStack_34;
  
  lVar15 = param_1[4];
  pbVar16 = param_4 + param_5;
  if (*(char *)((longlong)param_1 + 0x3c) != '\0') {
    return 0xfffffdf5;
  }
  FUN_1455dcd60(param_1[0x16]);
  FUN_1455dcd60(param_1[0x15]);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *param_3 = 0;
  pbVar18 = param_4;
LAB_14550eb58:
  bVar3 = false;
LAB_14550eb5d:
  bVar5 = false;
  bVar4 = false;
  do {
    iVar17 = (int)pbVar18;
    local_res8 = (int)param_4;
    if ((pbVar18 == pbVar16) && (!bVar3)) {
      if (param_6 != 0) {
        if (1 < *(int *)((longlong)param_1 + 0xe4) - 1U) goto LAB_14550f484;
        *param_3 = *param_3 | 1;
      }
      return (ulonglong)(uint)(iVar17 - local_res8);
    }
    bVar3 = false;
    switch(*(int *)((longlong)param_1 + 0xe4)) {
    case 0:
      if ((*pbVar18 & 0xe0) != 0x20) goto LAB_14550f484;
    case 1:
    case 2:
      bVar1 = *pbVar18;
      if ((bVar1 & 0xe0) == 0x20) {
        if (*(int *)((longlong)param_1 + 0xe4) == 2) goto LAB_14550f484;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 3;
        param_1[0x17] = 0;
        param_1[0x1b] = 0;
      }
      else if ((char)bVar1 < '\0') {
        *(undefined4 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 4;
        param_1[0x17] = 0;
        param_1[0x1b] = 0;
      }
      else {
        if (((bVar1 & 0xaf) == 0) && (bVar1 != 0x50)) {
          uVar6 = 5;
          uVar12 = 2;
        }
        else {
          uVar6 = 4;
          uVar12 = 3;
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0xe4) = uVar6;
        *(byte *)((longlong)param_1 + 0xe9) = *pbVar18 >> 6 & 1;
        *(bool *)((longlong)param_1 + 0xea) = (*pbVar18 & 0xf0) == 0x10;
        if ((int)param_1[0x1c] == 2) {
          pbVar18 = pbVar18 + 1;
        }
        param_1[0x17] = 0;
        param_1[0x1b] = 0;
      }
      break;
    case 3:
      goto switchD_14550eb8c_caseD_3;
    case 4:
      if ((int)param_1[0x1c] == 1) {
        uVar13 = 0x7f;
      }
      else {
        uVar13 = 0xf;
        if (*(char *)((longlong)param_1 + 0xe9) != '\0') {
          uVar13 = 0x3f;
        }
      }
      uVar11 = param_1[0x1b];
      param_1[0x1b] = 0;
      uVar19 = *(uint *)(param_1 + 0x17);
      pbVar7 = pbVar18;
      if (*(uint *)(param_1 + 0x17) != 0) goto joined_r0x00014550ee25;
      if ((*pbVar18 & uVar13) != uVar13) {
        bVar5 = true;
        uVar19 = 1;
        uVar13 = *pbVar18 & uVar13;
        goto LAB_14550eea0;
      }
      pbVar7 = pbVar18 + 1;
      if (pbVar7 != pbVar16) goto LAB_14550ee30;
      uVar19 = (int)pbVar7 - iVar17;
      goto LAB_14550ee96;
    case 5:
      *(byte *)(param_1 + 0x1d) = *pbVar18 >> 7;
      *(undefined4 *)((longlong)param_1 + 0xe4) = 6;
      param_1[0x17] = 0;
      param_1[0x1b] = 0;
    case 6:
      uVar20 = (ulonglong)*(uint *)(param_1 + 0x17);
      uVar11 = param_1[0x1b];
      param_1[0x1b] = 0;
      pbVar7 = pbVar18;
      if (*(uint *)(param_1 + 0x17) != 0) goto joined_r0x00014550ef81;
      if ((*pbVar18 & 0x7f) != 0x7f) {
        bVar5 = true;
        uVar20 = (ulonglong)(*pbVar18 & 0x7f);
        uVar11 = 1;
        goto LAB_14550effa;
      }
      pbVar7 = pbVar18 + 1;
      uVar20 = 0x7f;
      if (pbVar7 != pbVar16) goto LAB_14550ef90;
      uVar11 = (ulonglong)(uint)((int)pbVar7 - iVar17);
      goto LAB_14550eff0;
    case 7:
      uVar11 = FUN_145510fb0(param_1,param_1 + 9,pbVar18,pbVar16);
      if ((int)uVar11 < 0) goto LAB_14550f498;
      pbVar18 = pbVar18 + (int)uVar11;
      if (param_1[0x17] != 0) goto LAB_14550f476;
      *(undefined1 *)param_1[0xc] = 0;
      *(longlong *)(param_1[0x13] + 0x18) = param_1[0xc] - param_1[0xb];
      *(undefined4 *)((longlong)param_1 + 0xe4) = 9;
      goto LAB_14550eb5d;
    case 8:
      uVar20 = (longlong)pbVar16 - (longlong)pbVar18;
      if ((ulonglong)param_1[0x17] <= (ulonglong)((longlong)pbVar16 - (longlong)pbVar18)) {
        uVar20 = param_1[0x17];
      }
      lVar8 = FUN_1452e70f0(param_1[0xc],pbVar18,uVar20);
      param_1[0xc] = lVar8;
      lVar8 = param_1[0x17];
      uVar11 = (ulonglong)(int)uVar20;
      param_1[0x17] = lVar8 - uVar20;
      if ((int)uVar20 < 0) goto LAB_14550f498;
      pbVar18 = pbVar18 + uVar11;
      if (lVar8 - uVar20 != 0) goto LAB_14550f476;
      *(undefined1 *)param_1[0xc] = 0;
      *(longlong *)(param_1[0x13] + 0x18) = param_1[0xc] - param_1[0xb];
      *(undefined4 *)((longlong)param_1 + 0xe4) = 9;
      goto LAB_14550eb5d;
    case 9:
      *(byte *)(param_1 + 0x1d) = *pbVar18 >> 7;
      *(undefined4 *)((longlong)param_1 + 0xe4) = 10;
      param_1[0x17] = 0;
      param_1[0x1b] = 0;
    case 10:
      uVar20 = (ulonglong)*(uint *)(param_1 + 0x17);
      uVar11 = param_1[0x1b];
      param_1[0x1b] = 0;
      pbVar7 = pbVar18;
      if (*(uint *)(param_1 + 0x17) != 0) goto joined_r0x00014550f1df;
      if ((*pbVar18 & 0x7f) != 0x7f) {
        bVar5 = true;
        uVar20 = (ulonglong)(*pbVar18 & 0x7f);
        uVar11 = 1;
        goto LAB_14550f24b;
      }
      pbVar7 = pbVar18 + 1;
      uVar20 = 0x7f;
      if (pbVar7 != pbVar16) goto LAB_14550f1e1;
      uVar11 = (ulonglong)(uint)((int)pbVar7 - iVar17);
      goto LAB_14550f241;
    case 0xb:
      uVar11 = FUN_145510fb0(param_1,param_1 + 0xe,pbVar18,pbVar16);
      if ((int)uVar11 < 0) goto LAB_14550f498;
      pbVar18 = pbVar18 + (int)uVar11;
      if (param_1[0x17] == 0) goto LAB_14550f417;
      goto LAB_14550f476;
    case 0xc:
      uVar11 = FUN_145511040(param_1,param_1 + 0xe,pbVar18,pbVar16);
      if ((int)uVar11 < 0) goto LAB_14550f498;
      pbVar18 = pbVar18 + (int)uVar11;
      if (param_1[0x17] != 0) goto LAB_14550f476;
LAB_14550f417:
      *(undefined1 *)param_1[0x11] = 0;
      *(longlong *)(param_1[0x14] + 0x18) = param_1[0x11] - param_1[0x10];
      if ((int)param_1[0x1c] == 2) {
        uVar11 = FUN_1455110a0();
      }
      else {
        uVar11 = FUN_145511160(param_1,param_2);
      }
      if ((int)uVar11 != 0) goto LAB_14550f498;
      goto LAB_14550f3d3;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 + 7;
    pbVar7 = pbVar7 + 1;
joined_r0x00014550f1df:
    if (pbVar7 == pbVar16) break;
LAB_14550f1e1:
    uVar13 = *pbVar7 & 0x7f;
    if ((0x1f < uVar11) || (0xffffffffU >> ((byte)uVar11 & 0x1f) < uVar13)) goto LAB_14550f484;
    uVar13 = uVar13 << ((byte)uVar11 & 0x1f);
    if (~uVar13 < (uint)uVar20) goto LAB_14550f484;
    uVar20 = (ulonglong)((uint)uVar20 + uVar13);
    if (-1 < (char)*pbVar7) break;
  }
  param_1[0x1b] = uVar11;
  if (pbVar7 == pbVar16) {
    uVar11 = (ulonglong)(uint)((int)pbVar7 - iVar17);
  }
  else {
    bVar5 = true;
    uVar11 = (ulonglong)(((int)pbVar7 - iVar17) + 1);
  }
LAB_14550f241:
  if ((int)uVar11 == -1) goto LAB_14550f484;
LAB_14550f24b:
  if (0x10000 < (uint)uVar20) goto LAB_14550f484;
  param_1[0x17] = uVar20;
  if ((int)uVar11 < 0) goto LAB_14550f498;
  pbVar18 = pbVar18 + (int)uVar11;
  if (!bVar5) goto LAB_14550f476;
  if ((char)param_1[0x1d] == '\0') {
    uVar6 = 0xc;
  }
  else {
    FUN_1455dd170(param_1 + 8);
    uVar6 = 0xb;
    uVar20 = param_1[0x17] * 2;
  }
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar6;
  uVar11 = FUN_1455dcdc0(param_1 + 0x14,uVar20 + 1,lVar15);
  if ((int)uVar11 != 0) goto LAB_14550f498;
  FUN_1455118f0(param_1 + 0xe,*(undefined8 *)(param_1[0x14] + 0x10),
                *(undefined8 *)(param_1[0x14] + 0x18));
  bVar3 = true;
  goto LAB_14550eb5d;
  while( true ) {
    uVar11 = uVar11 + 7;
    pbVar7 = pbVar7 + 1;
joined_r0x00014550ef81:
    if (pbVar7 == pbVar16) break;
LAB_14550ef90:
    uVar13 = *pbVar7 & 0x7f;
    if ((0x1f < uVar11) || (0xffffffffU >> ((byte)uVar11 & 0x1f) < uVar13)) goto LAB_14550f484;
    uVar13 = uVar13 << ((byte)uVar11 & 0x1f);
    if (~uVar13 < (uint)uVar20) goto LAB_14550f484;
    uVar20 = (ulonglong)((uint)uVar20 + uVar13);
    if (-1 < (char)*pbVar7) break;
  }
  param_1[0x1b] = uVar11;
  if (pbVar7 == pbVar16) {
    uVar11 = (ulonglong)(uint)((int)pbVar7 - iVar17);
  }
  else {
    bVar5 = true;
    uVar11 = (ulonglong)(((int)pbVar7 - iVar17) + 1);
  }
LAB_14550eff0:
  if ((int)uVar11 == -1) goto LAB_14550f484;
LAB_14550effa:
  if (0x10000 < (uint)uVar20) goto LAB_14550f484;
  param_1[0x17] = uVar20;
  if ((int)uVar11 < 0) goto LAB_14550f498;
  pbVar18 = pbVar18 + (int)uVar11;
  if (!bVar5) goto LAB_14550f476;
  if ((char)param_1[0x1d] == '\0') {
    uVar6 = 8;
  }
  else {
    FUN_1455dd170(param_1 + 8);
    uVar6 = 7;
    uVar20 = param_1[0x17] * 2;
  }
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar6;
  uVar11 = FUN_1455dcdc0(param_1 + 0x13,uVar20 + 1,lVar15);
  if ((int)uVar11 != 0) goto LAB_14550f498;
  FUN_1455118f0(param_1 + 9,*(undefined8 *)(param_1[0x13] + 0x10),
                *(undefined8 *)(param_1[0x13] + 0x18));
  goto LAB_14550eb5d;
switchD_14550eb8c_caseD_3:
  uVar13 = *(uint *)(param_1 + 0x17);
  uVar11 = param_1[0x1b];
  uVar20 = param_1[0x1a];
  if ((ulonglong)param_1[0x19] <= (ulonglong)param_1[0x1a]) {
    uVar20 = param_1[0x19];
  }
  param_1[0x1b] = 0;
  pbVar7 = pbVar18;
  if (uVar13 != 0) goto joined_r0x00014550ecd1;
  if ((*pbVar18 & 0x1f) == 0x1f) {
    pbVar7 = pbVar18 + 1;
    uVar13 = 0x1f;
    if (pbVar7 == pbVar16) {
      uVar11 = (ulonglong)(uint)((int)pbVar7 - iVar17);
    }
    else {
      do {
        uVar19 = *pbVar7 & 0x7f;
        if (((0x1f < uVar11) || (0xffffffffU >> ((byte)uVar11 & 0x1f) < uVar19)) ||
           (uVar19 = uVar19 << ((byte)uVar11 & 0x1f), ~uVar19 < uVar13)) goto LAB_14550f484;
        uVar13 = uVar13 + uVar19;
        if (-1 < (char)*pbVar7) break;
        uVar11 = uVar11 + 7;
        pbVar7 = pbVar7 + 1;
joined_r0x00014550ecd1:
      } while (pbVar7 != pbVar16);
      param_1[0x1b] = uVar11;
      if (pbVar7 == pbVar16) {
        uVar11 = (ulonglong)(uint)((int)pbVar7 - iVar17);
      }
      else {
        bVar4 = true;
        uVar11 = (ulonglong)(((int)pbVar7 - iVar17) + 1);
      }
    }
    if ((int)uVar11 == -1) goto LAB_14550f484;
  }
  else {
    uVar11 = 1;
    uVar13 = *pbVar18 & 0x1f;
    bVar4 = true;
  }
  uVar14 = (ulonglong)uVar13;
  if (uVar20 < uVar14) goto LAB_14550f484;
  param_1[0x17] = uVar14;
  if ((int)uVar11 < 0) goto LAB_14550f498;
  pbVar18 = pbVar18 + (int)uVar11;
  if (!bVar4) goto LAB_14550f476;
  param_1[6] = uVar14;
  param_1[0x1a] = 0xffffffff;
  FUN_145510bb0(param_1,0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = 1;
  goto LAB_14550eb5d;
  while( true ) {
    uVar11 = uVar11 + 7;
    uVar19 = uVar13;
    pbVar7 = pbVar7 + 1;
joined_r0x00014550ee25:
    uVar13 = uVar19;
    if (pbVar7 == pbVar16) break;
LAB_14550ee30:
    uVar19 = *pbVar7 & 0x7f;
    if (((0x1f < uVar11) || (0xffffffffU >> ((byte)uVar11 & 0x1f) < uVar19)) ||
       (uVar19 = uVar19 << ((byte)uVar11 & 0x1f), ~uVar19 < uVar13)) goto LAB_14550f484;
    uVar13 = uVar13 + uVar19;
    if (-1 < (char)*pbVar7) break;
  }
  param_1[0x1b] = uVar11;
  if (pbVar7 == pbVar16) {
    uVar19 = (int)pbVar7 - iVar17;
  }
  else {
    bVar5 = true;
    uVar19 = ((int)pbVar7 - iVar17) + 1;
  }
LAB_14550ee96:
  if (uVar19 != 0xffffffff) {
LAB_14550eea0:
    uVar20 = (ulonglong)uVar13;
    if (uVar20 <= param_1[3] + 0x3dU) {
      param_1[0x17] = uVar20;
      uVar11 = (ulonglong)uVar19;
      if ((int)uVar19 < 0) goto LAB_14550f498;
      pbVar18 = pbVar18 + (int)uVar19;
      if (bVar5) {
        if (uVar13 != 0) {
          uVar11 = uVar20 - 1;
          param_1[0x18] = uVar11;
          if ((int)param_1[0x1c] == 1) {
            if (param_1[3] + 0x3dU <= uVar11) {
              _wassert(L"INDEX_RANGE_VALID(context, idx)",
                       L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c"
                       ,0x511);
            }
            if (uVar11 < 0x3d) {
              lVar15 = uVar11 * 0x80;
              puVar9 = &DAT_149d9b800 + lVar15;
              puVar10 = &DAT_149d9b828 + lVar15;
              uVar11 = CONCAT44(uStack_34,*(undefined4 *)(&DAT_149d9b878 + lVar15)) &
                       0xffffff00ffffffff;
            }
            else {
              if ((ulonglong)param_1[3] <= uVar20 - 0x3e) {
                _wassert(L"idx < ringbuf->len",
                         L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c"
                         ,0x25d);
              }
              puVar2 = *(undefined8 **)(*param_1 + (param_1[2] + (uVar20 - 0x3e) & param_1[1]) * 8);
              puVar9 = (undefined *)*puVar2;
              puVar10 = (undefined *)puVar2[1];
              uVar11 = puVar2[2];
            }
            *param_2 = puVar9;
            param_2[1] = puVar10;
            param_2[2] = uVar11;
LAB_14550f3d3:
            iVar17 = (int)pbVar18;
            *(undefined4 *)((longlong)param_1 + 0xe4) = 2;
            *param_3 = *param_3 | 2;
LAB_14550f3e2:
            return (ulonglong)(uint)(iVar17 - local_res8);
          }
          *(undefined4 *)((longlong)param_1 + 0xe4) = 9;
          goto LAB_14550eb58;
        }
      }
      else {
LAB_14550f476:
        iVar17 = (int)pbVar18;
        if (param_6 == 0) goto LAB_14550f3e2;
      }
    }
  }
LAB_14550f484:
  uVar11 = 0xfffffdf5;
LAB_14550f498:
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return uVar11;
}



// FUNCTION 14550f4f0 FUN_14550f4f0 body=216 status=ok
// SIG undefined FUN_14550f4f0(void)

undefined8 * FUN_14550f4f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uStack_14;
  
  if (param_2[3] + 0x3dU <= param_3) {
    _wassert(L"INDEX_RANGE_VALID(context, idx)",
             L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",0x511);
  }
  if (param_3 < 0x3d) {
    lVar4 = param_3 * 0x80;
    puVar1 = &DAT_149d9b800 + lVar4;
    puVar3 = &DAT_149d9b828 + lVar4;
    uVar5 = CONCAT44(uStack_14,*(undefined4 *)(&DAT_149d9b878 + lVar4)) & 0xffffff00ffffffff;
  }
  else {
    if ((ulonglong)param_2[3] <= param_3 - 0x3d) {
      _wassert(L"idx < ringbuf->len",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_hd.c",0x25d)
      ;
    }
    puVar2 = *(undefined8 **)(*param_2 + (param_2[2] + (param_3 - 0x3d) & param_2[1]) * 8);
    puVar1 = (undefined *)*puVar2;
    puVar3 = (undefined *)puVar2[1];
    uVar5 = puVar2[2];
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  param_1[2] = uVar5;
  return param_1;
}



// FUNCTION 14550f5d0 FUN_14550f5d0 body=2869 status=ok
// SIG undefined FUN_14550f5d0(void)

undefined4 FUN_14550f5d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  switch(param_2) {
  case 2:
    if ((*(char *)((longlong)param_1 + 1) == 'e') && ((char)*param_1 == 't')) {
      return 0x3d;
    }
    break;
  case 3:
    if (*(char *)((longlong)param_1 + 2) == 'a') {
      if ((short)*param_1 == 0x6976) {
        return 0x3b;
      }
    }
    else if ((*(char *)((longlong)param_1 + 2) == 'e') && ((short)*param_1 == 0x6761)) {
      return 0x14;
    }
    break;
  case 4:
    switch(*(undefined1 *)((longlong)param_1 + 3)) {
    case 0x65:
      if (((short)*param_1 == 0x6164) && (*(char *)((longlong)param_1 + 2) == 't')) {
        return 0x20;
      }
      break;
    case 0x67:
      if (((short)*param_1 == 0x7465) && (*(char *)((longlong)param_1 + 2) == 'a')) {
        return 0x21;
      }
      break;
    case 0x6b:
      if (((short)*param_1 == 0x696c) && (*(char *)((longlong)param_1 + 2) == 'n')) {
        return 0x2c;
      }
      break;
    case 0x6d:
      if (((short)*param_1 == 0x7266) && (*(char *)((longlong)param_1 + 2) == 'o')) {
        return 0x24;
      }
      break;
    case 0x74:
      if (((short)*param_1 == 0x6f68) && (*(char *)((longlong)param_1 + 2) == 's')) {
        return 0x25;
      }
      break;
    case 0x79:
      if (((short)*param_1 == 0x6176) && (*(char *)((longlong)param_1 + 2) == 'r')) {
        return 0x3a;
      }
    }
    break;
  case 5:
    cVar1 = *(char *)((longlong)param_1 + 4);
    if (cVar1 == 'e') {
      if ((int)*param_1 == 0x676e6172) {
        return 0x31;
      }
    }
    else if (cVar1 == 'h') {
      if ((int)*param_1 == 0x7461703a) {
        return 3;
      }
    }
    else if ((cVar1 == 'w') && ((int)*param_1 == 0x6f6c6c61)) {
      return 0x15;
    }
    break;
  case 6:
    cVar1 = *(char *)((longlong)param_1 + 5);
    if (cVar1 == 'e') {
      if (((int)*param_1 == 0x6b6f6f63) && (*(char *)((longlong)param_1 + 4) == 'i')) {
        return 0x1f;
      }
    }
    else if (cVar1 == 'r') {
      if (((int)*param_1 == 0x76726573) && (*(char *)((longlong)param_1 + 4) == 'e')) {
        return 0x35;
      }
    }
    else if (cVar1 == 't') {
      if (((int)*param_1 == 0x65636361) && (*(char *)((longlong)param_1 + 4) == 'p')) {
        return 0x12;
      }
      if (((int)*param_1 == 0x65707865) && (*(char *)((longlong)param_1 + 4) == 'c')) {
        return 0x22;
      }
    }
    break;
  case 7:
    cVar1 = *(char *)((longlong)param_1 + 6);
    if (cVar1 == 'd') {
      if (((int)*param_1 == 0x74656d3a) && (*(short *)((longlong)param_1 + 4) == 0x6f68)) {
        return 1;
      }
    }
    else if (cVar1 == 'e') {
      if (((int)*param_1 == 0x6863733a) && (*(short *)((longlong)param_1 + 4) == 0x6d65)) {
        return 5;
      }
      if (((int)*param_1 == 0x72677075) && (*(short *)((longlong)param_1 + 4) == 0x6461)) {
        return 0x41;
      }
    }
    else if (cVar1 == 'h') {
      if (((int)*param_1 == 0x72666572) && (*(short *)((longlong)param_1 + 4) == 0x7365)) {
        return 0x33;
      }
    }
    else if (cVar1 == 'r') {
      if (((int)*param_1 == 0x65666572) && (*(short *)((longlong)param_1 + 4) == 0x6572)) {
        return 0x32;
      }
    }
    else if (cVar1 == 's') {
      if (((int)*param_1 == 0x6174733a) && (*(short *)((longlong)param_1 + 4) == 0x7574)) {
        return 7;
      }
      if (((int)*param_1 == 0x69707865) && (*(short *)((longlong)param_1 + 4) == 0x6572)) {
        return 0x23;
      }
    }
    break;
  case 8:
    cVar1 = *(char *)((longlong)param_1 + 7);
    if (cVar1 == 'e') {
      if ((((int)*param_1 == 0x722d6669) && (*(short *)((longlong)param_1 + 4) == 0x6e61)) &&
         (*(char *)((longlong)param_1 + 6) == 'g')) {
        return 0x29;
      }
    }
    else if (cVar1 == 'h') {
      if ((((int)*param_1 == 0x6d2d6669) && (*(short *)((longlong)param_1 + 4) == 0x7461)) &&
         (*(char *)((longlong)param_1 + 6) == 'c')) {
        return 0x26;
      }
    }
    else if (((cVar1 == 'n') && ((int)*param_1 == 0x61636f6c)) &&
            ((*(short *)((longlong)param_1 + 4) == 0x6974 &&
             (*(char *)((longlong)param_1 + 6) == 'o')))) {
      return 0x2d;
    }
    break;
  case 9:
    if (((char)param_1[1] == 'l') && (*param_1 == 0x6f636f746f72703a)) {
      return 0x42;
    }
    break;
  case 10:
    cVar1 = *(char *)((longlong)param_1 + 9);
    if (cVar1 == 'e') {
      if ((*param_1 == 0x696c612d7065656b) && ((char)param_1[1] == 'v')) {
        return 0x3f;
      }
      if ((*param_1 == 0x6b6f6f632d746573) && ((char)param_1[1] == 'i')) {
        return 0x36;
      }
    }
    else if (cVar1 == 'n') {
      if ((*param_1 == 0x697463656e6e6f63) && ((char)param_1[1] == 'o')) {
        return 0x3e;
      }
    }
    else if (cVar1 == 't') {
      if ((*param_1 == 0x6567612d72657375) && ((char)param_1[1] == 'n')) {
        return 0x39;
      }
    }
    else if (((cVar1 == 'y') && (*param_1 == 0x69726f687475613a)) && ((char)param_1[1] == 't')) {
      return 0;
    }
    break;
  case 0xb:
    if (((*(char *)((longlong)param_1 + 10) == 'r') && (*param_1 == 0x66612d7972746572)) &&
       ((short)param_1[1] == 0x6574)) {
      return 0x34;
    }
    break;
  case 0xc:
    if (*(char *)((longlong)param_1 + 0xb) == 'e') {
      if (((*param_1 == 0x2d746e65746e6f63) && ((short)param_1[1] == 0x7974)) &&
         (*(char *)((longlong)param_1 + 10) == 'p')) {
        return 0x1e;
      }
    }
    else if (((*(char *)((longlong)param_1 + 0xb) == 's') && (*param_1 == 0x77726f662d78616d)) &&
            (((short)param_1[1] == 0x7261 && (*(char *)((longlong)param_1 + 10) == 'd')))) {
      return 0x2e;
    }
    break;
  case 0xd:
    switch(*(undefined1 *)((longlong)param_1 + 0xc)) {
    case 100:
      if ((*param_1 == 0x646f6d2d7473616c) && ((int)param_1[1] == 0x65696669)) {
        return 0x2b;
      }
      break;
    case 0x65:
      if ((*param_1 == 0x2d746e65746e6f63) && ((int)param_1[1] == 0x676e6172)) {
        return 0x1d;
      }
      break;
    case 0x68:
      if ((*param_1 == 0x2d656e6f6e2d6669) && ((int)param_1[1] == 0x6374616d)) {
        return 0x28;
      }
      break;
    case 0x6c:
      if ((*param_1 == 0x6f632d6568636163) && ((int)param_1[1] == 0x6f72746e)) {
        return 0x17;
      }
      break;
    case 0x6e:
      if ((*param_1 == 0x7a69726f68747561) && ((int)param_1[1] == 0x6f697461)) {
        return 0x16;
      }
      break;
    case 0x73:
      if ((*param_1 == 0x722d747065636361) && ((int)param_1[1] == 0x65676e61)) {
        return 0x11;
      }
    }
    break;
  case 0xe:
    if (*(char *)((longlong)param_1 + 0xd) == 'h') {
      if (((*param_1 == 0x2d746e65746e6f63) && ((int)param_1[1] == 0x676e656c)) &&
         (*(char *)((longlong)param_1 + 0xc) == 't')) {
        return 0x1b;
      }
    }
    else if (((*(char *)((longlong)param_1 + 0xd) == 't') && (*param_1 == 0x632d747065636361)) &&
            (((int)param_1[1] == 0x73726168 && (*(char *)((longlong)param_1 + 0xc) == 'e')))) {
      return 0xe;
    }
    break;
  case 0xf:
    if (*(char *)((longlong)param_1 + 0xe) == 'e') {
      if (((*param_1 == 0x6c2d747065636361) && ((int)param_1[1] == 0x75676e61)) &&
         (*(short *)((longlong)param_1 + 0xc) == 0x6761)) {
        return 0x10;
      }
    }
    else if (((*(char *)((longlong)param_1 + 0xe) == 'g') && (*param_1 == 0x652d747065636361)) &&
            (((int)param_1[1] == 0x646f636e && (*(short *)((longlong)param_1 + 0xc) == 0x6e69)))) {
      return 0xf;
    }
    break;
  case 0x10:
    cVar1 = *(char *)((longlong)param_1 + 0xf);
    if (cVar1 == 'e') {
      iVar2 = memcmp("content-languag",param_1,0xf);
      if (iVar2 == 0) {
        return 0x1a;
      }
      iVar2 = memcmp("www-authenticat",param_1,0xf);
      if (iVar2 == 0) {
        return 0x3c;
      }
    }
    else if (cVar1 == 'g') {
      iVar2 = memcmp("content-encodin",param_1,0xf);
      if (iVar2 == 0) {
        return 0x19;
      }
    }
    else if (cVar1 == 'n') {
      iVar2 = memcmp("content-locatio",param_1,0xf);
      if (iVar2 == 0) {
        return 0x1c;
      }
      iVar2 = memcmp("proxy-connectio",param_1,0xf);
      if (iVar2 == 0) {
        return 0x40;
      }
    }
    break;
  case 0x11:
    if ((char)param_1[2] == 'e') {
      if ((*param_1 == 0x6669646f6d2d6669) && (param_1[1] == 0x636e69732d646569)) {
        return 0x27;
      }
    }
    else if ((((char)param_1[2] == 'g') && (*param_1 == 0x726566736e617274)) &&
            (param_1[1] == 0x6e69646f636e652d)) {
      return 0x38;
    }
    break;
  case 0x12:
    if (((*(char *)((longlong)param_1 + 0x11) == 'e') && (*param_1 == 0x75612d79786f7270)) &&
       ((param_1[1] == 0x616369746e656874 && ((char)param_1[2] == 't')))) {
      return 0x2f;
    }
    break;
  case 0x13:
    if (*(char *)((longlong)param_1 + 0x12) == 'e') {
      if (((*param_1 == 0x646f6d6e752d6669) && (param_1[1] == 0x69732d6465696669)) &&
         ((short)param_1[2] == 0x636e)) {
        return 0x2a;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x12) == 'n') {
      if (((*param_1 == 0x2d746e65746e6f63) && (param_1[1] == 0x7469736f70736964)) &&
         ((short)param_1[2] == 0x6f69)) {
        return 0x18;
      }
      if (((*param_1 == 0x75612d79786f7270) && (param_1[1] == 0x74617a69726f6874)) &&
         ((short)param_1[2] == 0x6f69)) {
        return 0x30;
      }
    }
    break;
  case 0x19:
    if (((((char)param_1[3] == 'y') && (*param_1 == 0x742d746369727473)) &&
        (param_1[1] == 0x74726f70736e6172)) && (param_1[2] == 0x746972756365732d)) {
      return 0x37;
    }
    break;
  case 0x1b:
    if ((*(char *)((longlong)param_1 + 0x1a) == 'n') &&
       (iVar2 = memcmp("access-control-allow-origi",param_1,0x1a), iVar2 == 0)) {
      return 0x13;
    }
  }
  return 0xffffffff;
}



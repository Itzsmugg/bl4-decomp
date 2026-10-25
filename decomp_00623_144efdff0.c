// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144efdff0 FUN_144efdff0 body=29 status=ok
// SIG undefined FUN_144efdff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efdff0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c03870);
  return;
}



// FUNCTION 144efe010 FUN_144efe010 body=29 status=ok
// SIG undefined FUN_144efe010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe010(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe030 FUN_144efe030 body=29 status=ok
// SIG undefined FUN_144efe030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe030(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c03870);
  return;
}



// FUNCTION 144efe060 FUN_144efe060 body=158 status=ok
// SIG undefined FUN_144efe060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144efe060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong local_18 [2];
  
  local_18[1] = 0x144efe070;
  local_18[0] = 0;
  iVar1 = FUN_144f01520(param_3,local_18,param_1);
  if (local_18[0] != 0) {
    iVar1 = FUN_144ba5d40(local_18[0],(longlong)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      FUN_144ea6530(local_18[0],"crypto\\asn1\\a_digest.c",0x41);
      return 1;
    }
    FUN_144ea6530(local_18[0],"crypto\\asn1\\a_digest.c",0x3e);
  }
  return 0;
}



// FUNCTION 144efe100 FUN_144efe100 body=754 status=ok
// SIG undefined FUN_144efe100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144efe100(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                 longlong param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  int *piVar10;
  longlong lVar11;
  undefined4 local_38 [2];
  longlong local_30;
  
  lVar11 = param_5;
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar9 = 0;
  iVar4 = -1;
  local_30 = 0;
  if (param_5 == 0) {
    FUN_144ba24f0(0xd,0xc5,0x43,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x62));
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    FUN_144ba24f0(0xd,0xc5,0xdc,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x67));
    return -1;
  }
  lVar5 = FUN_144ba5700();
  if (lVar5 == 0) {
    FUN_144ba24f0(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x6d));
    iVar4 = -1;
    goto LAB_144efe3ae;
  }
  uVar2 = FUN_144ea8fa0(*param_2);
  iVar3 = FUN_144edaca0(uVar2,&param_5,local_38);
  if (iVar3 == 0) {
    uVar6 = 0x73;
LAB_144efe202:
    uVar8 = 199;
    iVar4 = -1;
  }
  else if ((int)param_5 == 0) {
    if ((*(longlong *)(lVar11 + 0x10) == 0) ||
       (pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x10) + 200), pcVar1 == (code *)0x0)) {
      uVar6 = 0x79;
      goto LAB_144efe202;
    }
    piVar10 = param_3;
    iVar4 = (*pcVar1)(lVar5,param_1,param_4,param_2,param_3,lVar11);
    uVar2 = (undefined4)((ulonglong)piVar10 >> 0x20);
    if (iVar4 != 2) goto LAB_144efe3ae;
LAB_144efe26b:
    iVar4 = FUN_144f01520(param_4,&local_30,param_1);
    if (iVar4 < 1) {
      FUN_144ba24f0(0xd,0xc5,0x44,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x9e));
      iVar4 = -1;
      goto LAB_144efe3ae;
    }
    if (local_30 == 0) {
      FUN_144ba24f0(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0xa2));
      iVar4 = -1;
      lVar9 = 0;
      goto LAB_144efe3ae;
    }
    lVar9 = (longlong)iVar4;
    iVar4 = FUN_144ba60c0(lVar5,*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_30,lVar9);
    if (0 < iVar4) {
      iVar4 = 1;
      goto LAB_144efe3ae;
    }
    uVar6 = 0xaa;
    uVar8 = 6;
  }
  else {
    uVar6 = FUN_144ea8ee0();
    lVar7 = FUN_144baab30(uVar6);
    if (lVar7 == 0) {
      uVar6 = 0x8a;
      uVar8 = 0xa1;
    }
    else {
      iVar3 = FUN_144ba6700(local_38[0]);
      if (iVar3 == **(int **)(lVar11 + 0x10)) {
        iVar4 = FUN_144ba6360(lVar5,0,lVar7,0,lVar11);
        uVar2 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar4 == 0) {
          FUN_144ba24f0(0xd,0xc5,6,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x95));
          iVar4 = 0;
          lVar9 = 0;
          goto LAB_144efe3ae;
        }
        goto LAB_144efe26b;
      }
      uVar6 = 0x90;
      uVar8 = 200;
    }
  }
  FUN_144ba24f0(0xd,0xc5,uVar8,"crypto\\asn1\\a_verify.c",uVar6);
LAB_144efe3ae:
  FUN_144ea66f0(local_30,lVar9,"crypto\\asn1\\a_verify.c",0xaf);
  FUN_144ba5800(lVar5);
  return iVar4;
}



// FUNCTION 144efe400 FUN_144efe400 body=52 status=ok
// SIG undefined FUN_144efe400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efe400(int param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    FUN_14259f0c0(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,param_3,param_4,0x144efe40a);
  }
  return 1;
}



// FUNCTION 144efe440 FUN_144efe440 body=29 status=ok
// SIG undefined FUN_144efe440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe440(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c03b50);
  return;
}



// FUNCTION 144efe460 FUN_144efe460 body=29 status=ok
// SIG undefined FUN_144efe460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe460(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe480 FUN_144efe480 body=8 status=ok
// SIG undefined FUN_144efe480(void)

undefined * FUN_144efe480(void)

{
  return &DAT_149c03b50;
}



// FUNCTION 144efe490 FUN_144efe490 body=140 status=ok
// SIG undefined FUN_144efe490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144efe490(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((-1 < param_3) && (iVar1 = FUN_144ef1150(*param_1,param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_144efde30(param_1[1],param_2,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    FUN_144f03e20(param_1[2],param_6,param_7);
  }
  return 1;
}



// FUNCTION 144efe520 FUN_144efe520 body=127 status=ok
// SIG undefined FUN_144efe520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144efe520(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_144f03e90(*(undefined8 *)(param_5 + 0x10));
    *param_2 = uVar2;
    uVar1 = FUN_144f03e70(*(undefined8 *)(param_5 + 0x10));
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}



// FUNCTION 144efe5a0 FUN_144efe5a0 body=339 status=ok
// SIG undefined FUN_144efe5a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe5a0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144efe5ac;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  iVar2 = FUN_144efe520(local_78,0,0,0);
  if (iVar2 != 0) {
    lVar4 = FUN_144ba6d80();
    if (lVar4 == 0) {
      local_88 = CONCAT44(local_88._4_4_,0x1f);
      FUN_144ba24f0(6,0x6f,0x41,"crypto\\evp\\evp_pkey.c");
    }
    else {
      uVar3 = FUN_144ea8fa0(local_78[0]);
      iVar2 = FUN_144ba6870(lVar4,uVar3);
      if (iVar2 == 0) {
        local_88 = CONCAT44(local_88._4_4_,0x24);
        FUN_144ba24f0(6,0x6f,0x76,"crypto\\evp\\evp_pkey.c");
        FUN_144ed0b30(local_68,0x50,local_78[0]);
        FUN_144ba2bd0(2,"TYPE=",local_68);
      }
      else {
        pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x40);
        if (pcVar1 == (code *)0x0) {
          local_88 = CONCAT44(local_88._4_4_,0x30);
          uVar5 = 0x90;
        }
        else {
          iVar2 = (*pcVar1)(lVar4,param_1);
          if (iVar2 != 0) goto LAB_144efe6e3;
          local_88 = CONCAT44(local_88._4_4_,0x2c);
          uVar5 = 0x91;
        }
        FUN_144ba24f0(6,0x6f,uVar5,"crypto\\evp\\evp_pkey.c");
      }
      FUN_144ba6e60(lVar4);
    }
  }
LAB_144efe6e3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144efe710 FUN_144efe710 body=29 status=ok
// SIG undefined FUN_144efe710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe710(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe730 FUN_144efe730 body=29 status=ok
// SIG undefined FUN_144efe730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe730(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c03ff8);
  return;
}



// FUNCTION 144efe750 FUN_144efe750 body=29 status=ok
// SIG undefined FUN_144efe750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe750(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c04048);
  return;
}



// FUNCTION 144efe770 FUN_144efe770 body=29 status=ok
// SIG undefined FUN_144efe770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe770(void)

{
  FUN_144efec20(&DAT_149c03e28);
  return;
}



// FUNCTION 144efe790 FUN_144efe790 body=29 status=ok
// SIG undefined FUN_144efe790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe790(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c03e28);
  return;
}



// FUNCTION 144efe7b0 FUN_144efe7b0 body=29 status=ok
// SIG undefined FUN_144efe7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe7b0(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe7d0 FUN_144efe7d0 body=29 status=ok
// SIG undefined FUN_144efe7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe7d0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c03e28);
  return;
}



// FUNCTION 144efe800 FUN_144efe800 body=25 status=ok
// SIG undefined FUN_144efe800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe800(void)

{
  FUN_144f03c50(3);
  return;
}



// FUNCTION 144efe820 FUN_144efe820 body=22 status=ok
// SIG undefined FUN_144efe820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe820(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efe850 FUN_144efe850 body=25 status=ok
// SIG undefined FUN_144efe850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe850(void)

{
  FUN_144f03c50(2);
  return;
}



// FUNCTION 144efe870 FUN_144efe870 body=22 status=ok
// SIG undefined FUN_144efe870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe870(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efe890 FUN_144efe890 body=29 status=ok
// SIG undefined FUN_144efe890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe890(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe8b0 FUN_144efe8b0 body=29 status=ok
// SIG undefined FUN_144efe8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe8b0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c040a8);
  return;
}



// FUNCTION 144efe8e0 FUN_144efe8e0 body=22 status=ok
// SIG undefined FUN_144efe8e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe8e0(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efe900 FUN_144efe900 body=29 status=ok
// SIG undefined FUN_144efe900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe900(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe930 FUN_144efe930 body=25 status=ok
// SIG undefined FUN_144efe930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe930(void)

{
  FUN_144f03c50(4);
  return;
}



// FUNCTION 144efe950 FUN_144efe950 body=22 status=ok
// SIG undefined FUN_144efe950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe950(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efe970 FUN_144efe970 body=29 status=ok
// SIG undefined FUN_144efe970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe970(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144efe990 FUN_144efe990 body=29 status=ok
// SIG undefined FUN_144efe990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe990(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c04078);
  return;
}



// FUNCTION 144efe9c0 FUN_144efe9c0 body=25 status=ok
// SIG undefined FUN_144efe9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe9c0(void)

{
  FUN_144f03c50(0xc);
  return;
}



// FUNCTION 144efe9e0 FUN_144efe9e0 body=22 status=ok
// SIG undefined FUN_144efe9e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efe9e0(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efea10 FUN_144efea10 body=29 status=ok
// SIG undefined FUN_144efea10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efea10(void)

{
  FUN_144efec20(&DAT_149c03dc8);
  return;
}



// FUNCTION 144efea80 FUN_144efea80 body=25 status=ok
// SIG undefined FUN_144efea80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efea80(void)

{
  FUN_144f03c50(0x16);
  return;
}



// FUNCTION 144efeaa0 FUN_144efeaa0 body=22 status=ok
// SIG undefined FUN_144efeaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efeaa0(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efead0 FUN_144efead0 body=25 status=ok
// SIG undefined FUN_144efead0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efead0(void)

{
  FUN_144f03c50(0x18);
  return;
}



// FUNCTION 144efeaf0 FUN_144efeaf0 body=22 status=ok
// SIG undefined FUN_144efeaf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efeaf0(void)

{
  FUN_144f03a80();
  return;
}



// FUNCTION 144efeb70 FUN_144efeb70 body=161 status=ok
// SIG undefined FUN_144efeb70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efeb70(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 uVar2;
  
  uVar2 = 0x144efeb7c;
  local_res10 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144f01520(param_2,&local_res10,param_1);
    if (local_res10 != 0) {
      local_res18[0] = local_res10;
      uVar2 = FUN_144eff7f0(0,local_res18,uVar1,param_1);
      FUN_144ea6530(local_res10,"crypto\\asn1\\a_dup.c",0x42);
      return uVar2;
    }
    FUN_144ba24f0(0xd,0xbf,0x41,"crypto\\asn1\\a_dup.c",0x3d,uVar2);
  }
  return 0;
}



// FUNCTION 144efec20 FUN_144efec20 body=55 status=ok
// SIG undefined FUN_144efec20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efec20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  iVar1 = FUN_144efec80(local_res10,param_1,0);
  uVar2 = 0;
  if (0 < iVar1) {
    uVar2 = local_res10[0];
  }
  return uVar2;
}



// FUNCTION 144efec60 FUN_144efec60 body=25 status=ok
// SIG undefined FUN_144efec60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efec60(undefined8 param_1,undefined8 param_2)

{
  FUN_144efec80(param_1,param_2,0);
  return;
}



// FUNCTION 144efec80 FUN_144efec80 body=670 status=ok
// SIG undefined FUN_144efec80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efec80(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144efec99;
  pcVar5 = (code *)0x0;
  lVar3 = *(longlong *)(param_2 + 0x18);
  if ((lVar3 == 0) || (pcVar6 = *(code **)(lVar3 + 0x18), *(code **)(lVar3 + 0x18) == (code *)0x0))
  {
    pcVar6 = pcVar5;
  }
  switch(*param_2) {
  case 0:
    if (*(longlong *)(param_2 + 8) == 0) goto LAB_144efed0f;
    iVar1 = FUN_144eff1c0();
    break;
  case 1:
  case 6:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_144efeee4;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = FUN_144ea6670((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x7a);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_144efee55;
    }
    else {
      memset((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    iVar1 = FUN_1452b0430(param_1,0,param_2);
    if (iVar1 < 0) {
      if (param_3 == 0) {
        FUN_144ea6530(*param_1,"crypto\\asn1\\tasn_new.c",0x81);
        *param_1 = 0;
      }
      goto LAB_144efee55;
    }
    FUN_1452b0510(param_1,param_2);
    lVar3 = *(longlong *)(param_2 + 8);
    if (0 < *(int *)(param_2 + 0x10)) {
      do {
        uVar2 = FUN_1452b0310(param_1,lVar3);
        iVar1 = FUN_144eff1c0(uVar2,lVar3);
        if (iVar1 == 0) {
          FUN_144eff380(param_1,param_2,param_3);
          goto LAB_144efee55;
        }
        lVar3 = lVar3 + 0x20;
        uVar4 = (int)pcVar5 + 1;
        pcVar5 = (code *)(ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_2 + 0x10));
    }
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar6)(1,param_1,param_2);
    goto joined_r0x000144efedc5;
  case 2:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_144efeee4;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = FUN_144ea6670((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x61);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_144efee55;
    }
    else {
      memset((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    FUN_1452b0300(param_1,0xffffffff,param_2);
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar6)(1,param_1,param_2);
joined_r0x000144efedc5:
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144eff380(param_1,param_2,param_3);
LAB_144efeee4:
    FUN_144ba24f0(0xd,0x79,100,"crypto\\asn1\\tasn_new.c",0xa1);
    return 0;
  default:
    goto LAB_144efed21;
  case 4:
    if (lVar3 == 0) {
      return 1;
    }
    if (*(code **)(lVar3 + 8) == (code *)0x0) {
      return 1;
    }
    iVar1 = (**(code **)(lVar3 + 8))(param_1,param_2);
    break;
  case 5:
LAB_144efed0f:
    iVar1 = FUN_144efef40(param_1,param_2,param_3);
  }
  if (iVar1 == 0) {
LAB_144efee55:
    FUN_144ba24f0(0xd,0x79,0x41,"crypto\\asn1\\tasn_new.c",0x98,uVar7);
    return 0;
  }
LAB_144efed21:
  return 1;
}



// FUNCTION 144efef40 FUN_144efef40 body=432 status=ok
// SIG undefined FUN_144efef40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144efef40(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144efefab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x10))();
        return uVar2;
      }
    }
    else if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))();
      return 1;
    }
  }
  if (*param_2 == '\x05') {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == -4) {
      puVar5 = (undefined4 *)FUN_144ea64e0(0x10,"crypto\\asn1\\tasn_new.c",0x12e);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_144ba24f0(0xd,0x77,0x41,"crypto\\asn1\\tasn_new.c",0x12f);
        return 0;
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = 0xffffffff;
      *param_1 = (longlong)puVar5;
      goto LAB_144eff0d7;
    }
    if (iVar1 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
      return 1;
    }
    if (iVar1 == 5) {
      *param_1 = 1;
      return 1;
    }
    if (iVar1 == 6) {
      lVar4 = FUN_144ea8d60(0);
      *param_1 = lVar4;
      return 1;
    }
  }
  if (param_3 == 0) {
    puVar3 = (undefined8 *)FUN_144f03c50(iVar1);
    *param_1 = (longlong)puVar3;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int *)((longlong)puVar3 + 4) = iVar1;
    *(undefined4 *)(puVar3 + 2) = 0x80;
  }
  if ((*param_2 == '\x05') && (puVar3 != (undefined8 *)0x0)) {
    *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 0x40;
  }
LAB_144eff0d7:
  return (ulonglong)(*param_1 != 0);
}



// FUNCTION 144eff0f0 FUN_144eff0f0 body=176 status=ok
// SIG undefined FUN_144eff0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff0f0(undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  if (6 < uVar2) {
    return;
  }
  do {
    switch(IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_144eff12d::switchdataD_144eff1a0)[(int)uVar2]) {
    case (char *)0x144eff130:
      puVar1 = *(uint **)(param_2 + 8);
      if (puVar1 == (uint *)0x0) goto switchD_144eff12d_caseD_44eff17c;
      if ((*puVar1 & 0x306) != 0) goto switchD_144eff12d_caseD_44eff18e;
      param_2 = (char *)(**(code **)(puVar1 + 6))();
      uVar2 = (uint)*param_2;
      if (6 < uVar2) {
        return;
      }
      break;
    case (char *)0x144eff15a:
      if ((*(longlong *)(param_2 + 0x18) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x18) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144eff179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    case (char *)0x144eff18e:
switchD_144eff12d_caseD_44eff18e:
      *param_1 = 0;
LAB_144eff19a:
      return;
    case (char *)0x144eff17c:
switchD_144eff12d_caseD_44eff17c:
      FUN_144eff2e0(param_1);
      return;
    case (char *)0x144eff195:
      goto LAB_144eff19a;
    }
  } while( true );
}



// FUNCTION 144eff1c0 FUN_144eff1c0 body=274 status=ok
// SIG undefined FUN_144eff1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eff1c0(longlong ****param_1,uint *param_2)

{
  uint uVar1;
  longlong ****pppplVar2;
  undefined8 uVar3;
  longlong ***ppplVar4;
  longlong ****pppplVar5;
  longlong ***local_res10;
  undefined8 uVar6;
  
  uVar6 = 0x144eff1d5;
  uVar3 = (**(code **)(param_2 + 6))();
  uVar1 = *param_2;
  pppplVar5 = &local_res10;
  pppplVar2 = param_1;
  if ((uVar1 & 0x1000) == 0) {
    pppplVar5 = param_1;
    pppplVar2 = (longlong ****)local_res10;
  }
  local_res10 = (longlong ***)pppplVar2;
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 0x306) != 0) {
      *pppplVar5 = (longlong ***)0x0;
      return 1;
    }
    uVar3 = (**(code **)(param_2 + 6))();
    FUN_144eff0f0(pppplVar5,uVar3);
    return 1;
  }
  if ((uVar1 & 0x300) == 0) {
    if ((uVar1 & 6) == 0) {
      uVar3 = FUN_144efec80(pppplVar5,uVar3,uVar1 & 0x1000);
      return uVar3;
    }
    ppplVar4 = (longlong ***)FUN_144babca0();
    if (ppplVar4 == (longlong ***)0x0) {
      FUN_144ba24f0(0xd,0x85,0x41,"crypto\\asn1\\tasn_new.c",0xe7,uVar6);
      return 0;
    }
  }
  else {
    ppplVar4 = (longlong ***)0x0;
  }
  *pppplVar5 = ppplVar4;
  return 1;
}



// FUNCTION 144eff2e0 FUN_144eff2e0 body=76 status=ok
// SIG undefined FUN_144eff2e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff2e0(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (char *)0x0) {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if ((*param_2 != '\x05') && (*(int *)(param_2 + 4) == 1)) {
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x18) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144eff308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 144eff330 FUN_144eff330 body=36 status=ok
// SIG undefined FUN_144eff330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_144eff380(local_res8,param_2,0,param_4,0x144eff33f);
  return;
}



// FUNCTION 144eff360 FUN_144eff360 body=25 status=ok
// SIG undefined FUN_144eff360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff360(undefined8 param_1,undefined8 param_2)

{
  FUN_144eff380(param_1,param_2,0);
  return;
}



// FUNCTION 144eff380 FUN_144eff380 body=568 status=ok
// SIG undefined FUN_144eff380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff380(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar6 == 0) || (pcVar4 = *(code **)(lVar6 + 0x18), pcVar4 == (code *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_144eff5e0(param_1,param_2,param_3);
    }
    else {
      FUN_144eff700();
    }
    break;
  case '\x01':
  case '\x06':
    iVar1 = FUN_1452b0430(param_1,0xffffffff,param_2);
    if ((iVar1 == 0) &&
       ((pcVar4 == (code *)0x0 || (iVar1 = (*pcVar4)(2,param_1,param_2,0), iVar1 != 2)))) {
      FUN_1452b0550(param_1,param_2);
      iVar1 = 0;
      lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x20 + *(longlong *)(param_2 + 8);
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          lVar6 = lVar6 + -0x20;
          lVar2 = FUN_1452b0320(param_1,lVar6,0);
          if (lVar2 != 0) {
            uVar3 = FUN_1452b0310(param_1,lVar2);
            FUN_144eff700(uVar3,lVar2);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_2 + 0x10));
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x73;
LAB_144eff58f:
        FUN_144ea6530(*param_1,"crypto\\asn1\\tasn_fre.c",uVar5);
        *param_1 = 0;
      }
    }
    break;
  case '\x02':
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(2,param_1,param_2), iVar1 != 2)) {
      iVar1 = FUN_1452b02f0(param_1,param_2);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x10))) {
        lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 8);
        uVar3 = FUN_1452b0310(param_1,lVar6);
        FUN_144eff700(uVar3,lVar6);
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x4b;
        goto LAB_144eff58f;
      }
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if ((lVar6 != 0) && (*(code **)(lVar6 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar6 + 0x10))(param_1,param_2);
    }
    break;
  case '\x05':
    FUN_144eff5e0(param_1,param_2,param_3);
    break;
  default:
    goto LAB_144eff5b7;
  }
LAB_144eff5b7:
  return;
}



// FUNCTION 144eff5e0 FUN_144eff5e0 body=287 status=ok
// SIG undefined FUN_144eff5e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff5e0(longlong *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    iVar2 = *(int *)*param_1;
    param_1 = (longlong *)((int *)*param_1 + 2);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (param_3 == 0) {
      if ((lVar1 != 0) && (*(code **)(lVar1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144eff62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))();
        return;
      }
    }
    else if ((lVar1 != 0) && (*(code **)(lVar1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144eff616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x20))();
      return;
    }
    if (*param_2 == '\x05') {
      if (*param_1 == 0) {
        return;
      }
      FUN_144f04220(*param_1,param_3);
      *param_1 = 0;
      return;
    }
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 1) goto LAB_144eff673;
  }
  if (*param_1 == 0) {
    return;
  }
LAB_144eff673:
  if (iVar2 == -4) {
    FUN_144eff5e0(param_1,0,0);
    FUN_144ea6530(*param_1,"crypto\\asn1\\tasn_fre.c",200);
  }
  else {
    if (iVar2 == 1) {
      if (param_2 != (char *)0x0) {
        *(int *)param_1 = *(int *)(param_2 + 0x20);
        return;
      }
      *(int *)param_1 = -1;
      return;
    }
    if (iVar2 != 5) {
      if (iVar2 != 6) {
        FUN_144f04220(*param_1,param_3);
        *param_1 = 0;
        return;
      }
      FUN_144ed0860(*param_1);
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 144eff700 FUN_144eff700 body=207 status=ok
// SIG undefined FUN_144eff700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff700(undefined8 ***param_1,uint *param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_res10;
  undefined8 local_res18;
  
  uVar5 = *param_2 & 0x1000;
  if (uVar5 != 0) {
    local_res10 = param_1;
  }
  pppuVar6 = &local_res10;
  if (uVar5 == 0) {
    pppuVar6 = param_1;
  }
  if ((*param_2 & 6) != 0) {
    iVar4 = 0;
    ppuVar1 = *pppuVar6;
    iVar2 = FUN_144babbf0(ppuVar1);
    if (0 < iVar2) {
      do {
        local_res18 = FUN_144babc00(ppuVar1,iVar4);
        uVar3 = (**(code **)(param_2 + 6))();
        FUN_144eff380(&local_res18,uVar3,uVar5);
        iVar4 = iVar4 + 1;
        iVar2 = FUN_144babbf0(ppuVar1);
      } while (iVar4 < iVar2);
    }
    FUN_144babdb0(ppuVar1);
    *pppuVar6 = (undefined8 **)0x0;
    return;
  }
  uVar3 = (**(code **)(param_2 + 6))();
  FUN_144eff380(pppuVar6,uVar3,uVar5);
  return;
}



// FUNCTION 144eff7d0 FUN_144eff7d0 body=22 status=ok
// SIG undefined FUN_144eff7d0(void)

undefined4 FUN_144eff7d0(uint param_1)

{
  if (param_1 < 0x1f) {
    return *(undefined4 *)(&DAT_149c04450 + (longlong)(int)param_1 * 4);
  }
  return 0;
}



// FUNCTION 144eff7f0 FUN_144eff7f0 body=138 status=ok
// SIG undefined FUN_144eff7f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eff7f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x144eff7fd;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = local_40;
  local_58 = 0;
  local_68 = 0;
  puVar2 = &local_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = param_1;
  }
  local_70 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_78 = 0xffffffff;
  iVar1 = FUN_144eff910(puVar2,param_2,param_3,param_4);
  if (iVar1 < 1) {
    FUN_144eff360(puVar2,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 144eff890 FUN_144eff890 body=125 status=ok
// SIG undefined FUN_144eff890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eff890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144eff910();
  if ((int)uVar1 < 1) {
    FUN_144eff360(param_1,param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144eff910 FUN_144eff910 body=2128 status=ok
// SIG undefined FUN_144eff910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eff910(longlong *param_1,longlong *param_2,ulonglong param_3,undefined1 *param_4,int param_5,
             uint param_6,char param_7,char *param_8,int param_9)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  code *pcVar15;
  longlong lVar16;
  bool bVar17;
  undefined4 local_res8 [2];
  longlong *local_res10;
  int local_res18 [2];
  uint local_res20 [2];
  undefined8 uVar18;
  ulonglong in_stack_ffffffffffffff50;
  uint in_stack_ffffffffffffff58;
  char local_78 [8];
  char *local_70;
  code *local_68;
  longlong local_60;
  char *local_58;
  
  iVar6 = (int)param_3;
  lVar16 = *(longlong *)(param_4 + 0x18);
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  iVar11 = 0;
  if ((lVar16 == 0) || (local_68 = *(code **)(lVar16 + 0x18), local_68 == (code *)0x0)) {
    local_68 = (code *)0x0;
  }
  pcVar15 = local_68;
  param_9 = param_9 + 1;
  local_res10 = param_2;
  local_res18[0] = iVar6;
  if (param_9 < 0x1f) {
    uVar10 = 0;
    switch(*param_4) {
    case 0:
      if (*(longlong *)(param_4 + 8) == 0) {
        uVar7 = FUN_144f00d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar7;
      }
      if ((param_5 == -1) && (param_7 == '\0')) {
        uVar7 = FUN_144f007f0(param_1);
        return uVar7;
      }
      uVar7 = 0xaf;
      uVar12 = 0xaa;
      break;
    case 1:
    case 6:
      local_70 = (char *)*param_2;
      if (param_5 != -1) {
        uVar10 = param_6;
      }
      iVar5 = 0x10;
      if (param_5 != -1) {
        iVar5 = param_5;
      }
      iVar5 = FUN_144f005c0(local_res18,0,0,local_res8,local_78,&local_70,iVar6,iVar5,uVar10,param_7
                            ,param_8);
      pcVar13 = local_70;
      if (iVar5 == 0) {
        uVar7 = 0x135;
        uVar12 = 0x3a;
      }
      else {
        if (iVar5 == -1) {
          return 0xffffffff;
        }
        if ((lVar16 == 0) || ((*(byte *)(lVar16 + 8) & 4) == 0)) {
          local_res20[0] = CONCAT31(local_res20[0]._1_3_,(char)local_res8[0]);
          iVar6 = local_res18[0];
        }
        else {
          local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
          iVar6 = (iVar6 - (int)local_70) + (int)*local_res10;
        }
        if (local_78[0] == '\0') {
          uVar7 = 0x141;
          uVar12 = 0x95;
        }
        else if ((*param_1 == 0) && (iVar5 = FUN_144efec60(param_1,param_4), iVar5 == 0)) {
          uVar7 = 0x146;
          uVar12 = 0x3a;
        }
        else {
          if ((pcVar15 != (code *)0x0) && (iVar5 = (*pcVar15)(4,param_1,param_4), iVar5 == 0))
          goto LAB_144f00106;
          puVar9 = *(uint **)(param_4 + 8);
          iVar5 = iVar11;
          if (0 < *(int *)(param_4 + 0x10)) {
            do {
              if (((*puVar9 & 0x300) != 0) &&
                 (local_60 = FUN_1452b0320(param_1,puVar9,0), local_60 != 0)) {
                uVar7 = FUN_1452b0310(param_1,local_60);
                FUN_144eff700(uVar7,local_60);
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 8;
            } while (iVar5 < *(int *)(param_4 + 0x10));
          }
          lVar16 = *(longlong *)(param_4 + 8);
          pcVar14 = pcVar13;
          if (0 < *(int *)(param_4 + 0x10)) {
            do {
              pbVar8 = (byte *)FUN_1452b0320(param_1,lVar16,1);
              if (pbVar8 == (byte *)0x0) goto LAB_144f00128;
              local_60 = FUN_1452b0310(param_1,pbVar8);
              pcVar14 = pcVar13;
              if (iVar6 == 0) break;
              local_58 = pcVar13;
              if (((1 < iVar6) && (*pcVar13 == '\0')) && (pcVar13[1] == '\0')) {
                pcVar14 = pcVar13 + 2;
                if ((char)local_res8[0] == '\0') {
                  uVar7 = 0x168;
                  uVar12 = 0x9f;
                  goto LAB_144f00114;
                }
                iVar6 = iVar6 + ((int)pcVar13 - (int)pcVar14);
                goto LAB_144efffcb;
              }
              if (iVar11 == *(int *)(param_4 + 0x10) + -1) {
                bVar3 = 0;
              }
              else {
                bVar3 = *pbVar8 & 1;
              }
              iVar5 = FUN_144f007f0(local_60,&local_70,iVar6,pbVar8,bVar3,param_8,param_9);
              pcVar13 = local_70;
              if (iVar5 == 0) goto LAB_144f000da;
              if (iVar5 == -1) {
                FUN_144eff700(local_60,pbVar8);
              }
              else {
                iVar6 = iVar6 + ((int)local_58 - (int)local_70);
              }
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 0x20;
              pcVar14 = pcVar13;
            } while (iVar11 < *(int *)(param_4 + 0x10));
          }
          if ((char)local_res8[0] != '\0') {
            if (((iVar6 < 2) || (*pcVar14 != '\0')) || (pcVar14[1] != '\0')) {
              uVar7 = 400;
              uVar12 = 0x89;
              break;
            }
            pcVar14 = pcVar14 + 2;
          }
LAB_144efffcb:
          if (((char)local_res20[0] != '\0') || (iVar6 == 0)) {
            if (iVar11 < *(int *)(param_4 + 0x10)) {
LAB_144f00030:
              pbVar8 = (byte *)FUN_1452b0320(param_1,lVar16,1);
              if (pbVar8 != (byte *)0x0) {
                if ((*pbVar8 & 1) != 0) goto code_r0x000144f00052;
                uVar18 = 0x1a9;
                uVar7 = 0x79;
LAB_144f000c6:
                FUN_144ba24f0(0xd,0x78,uVar7,"crypto\\asn1\\tasn_dec.c",uVar18);
LAB_144f000da:
                if (pbVar8 != (byte *)0x0) {
                  FUN_144ba2bd0(4,"Field=",*(undefined8 *)(pbVar8 + 0x10),", Type=",
                                *(undefined8 *)(param_4 + 0x28));
                  return 0;
                }
              }
              goto LAB_144f00128;
            }
LAB_144f00073:
            plVar1 = local_res10;
            iVar6 = FUN_1452b0660(param_1,*local_res10,(int)pcVar14 - (int)*local_res10,param_4);
            if ((iVar6 != 0) &&
               ((local_68 == (code *)0x0 || (iVar6 = (*local_68)(5,param_1,param_4), iVar6 != 0))))
            {
              *plVar1 = (longlong)pcVar14;
              return 1;
            }
            goto LAB_144f00106;
          }
          uVar7 = 0x195;
          uVar12 = 0x94;
        }
      }
      break;
    case 2:
      if (param_5 == -1) {
        if ((local_68 == (code *)0x0) || (iVar6 = (*local_68)(4,param_1,param_4), iVar6 != 0)) {
          if (*param_1 == 0) {
            iVar6 = FUN_144efec60(param_1,param_4);
            if (iVar6 == 0) {
              uVar7 = 0xf9;
              uVar12 = 0x3a;
              break;
            }
          }
          else {
            iVar6 = FUN_1452b02f0();
            if ((-1 < iVar6) && (iVar6 < *(int *)(param_4 + 0x10))) {
              lVar16 = (longlong)iVar6 * 0x20 + *(longlong *)(param_4 + 8);
              uVar7 = FUN_1452b0310(param_1,lVar16);
              FUN_144eff700(uVar7,lVar16);
              FUN_1452b0300(param_1,0xffffffff,param_4);
            }
          }
          local_70 = (char *)*param_2;
          pbVar8 = *(byte **)(param_4 + 8);
          bVar17 = *(int *)(param_4 + 0x10) == 0;
          if (0 < *(int *)(param_4 + 0x10)) {
            do {
              uVar7 = FUN_1452b0310(param_1,pbVar8);
              iVar6 = FUN_144f007f0(uVar7,&local_70,param_3 & 0xffffffff,pbVar8,1,param_8,param_9);
              if (iVar6 != -1) {
                if (iVar6 < 1) {
                  FUN_144eff700(uVar7,pbVar8);
                  uVar7 = 0x3a;
                  uVar18 = 0x110;
                  goto LAB_144f000c6;
                }
                break;
              }
              iVar11 = iVar11 + 1;
              pbVar8 = pbVar8 + 0x20;
            } while (iVar11 < *(int *)(param_4 + 0x10));
            bVar17 = iVar11 == *(int *)(param_4 + 0x10);
            param_2 = local_res10;
            pcVar15 = local_68;
          }
          if (bVar17) {
            if (param_7 != '\0') {
              FUN_144eff360(param_1,param_4);
              return 0xffffffff;
            }
            uVar7 = 0x11c;
            uVar12 = 0x8f;
            break;
          }
          FUN_1452b0300(param_1,iVar11,param_4);
          if ((pcVar15 == (code *)0x0) || (iVar6 = (*pcVar15)(5,param_1,param_4), iVar6 != 0)) {
            *param_2 = (longlong)local_70;
            return 1;
          }
        }
LAB_144f00106:
        uVar7 = 0x1b9;
        uVar12 = 100;
      }
      else {
        uVar7 = 0xe9;
        uVar12 = 0xe6;
      }
      break;
    default:
      goto LAB_144f0013f;
    case 4:
      uVar7 = (**(code **)(lVar16 + 0x20))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar7;
    case 5:
      if (param_5 == -1) {
        pcVar15 = (code *)*param_2;
        if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
          local_68 = pcVar15;
          uVar4 = FUN_144f03ea0(&local_68,&local_70,local_res20,local_res8,param_3 & 0xffffffff);
          cVar2 = (char)uVar4;
          if (param_8 == (char *)0x0) goto LAB_144effb0c;
          *(uint *)(param_8 + 4) = uVar4;
          iVar11 = (int)local_68 - (int)pcVar15;
          *(int *)(param_8 + 8) = (int)local_70;
          *(undefined4 *)(param_8 + 0x10) = local_res8[0];
          *(uint *)(param_8 + 0xc) = local_res20[0];
          *(int *)(param_8 + 0x14) = iVar11;
          *param_8 = '\x01';
          if (((uVar4 & 0x81) != 0) || (iVar11 + (int)local_70 <= iVar6)) goto LAB_144effb0c;
          FUN_144ba24f0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
LAB_144effb36:
          *param_8 = '\0';
        }
        else {
          local_res8[0] = *(undefined4 *)(param_8 + 0x10);
          local_res20[0] = *(uint *)(param_8 + 0xc);
          cVar2 = (char)*(undefined4 *)(param_8 + 4);
          local_70 = (char *)CONCAT44(local_70._4_4_,*(undefined4 *)(param_8 + 8));
          local_68 = pcVar15 + *(int *)(param_8 + 0x14);
LAB_144effb0c:
          if (-1 < cVar2) {
            if ((char)local_res8[0] == '\0') {
              if (local_res20[0] < 0x1f) {
                uVar10 = *(uint *)(&DAT_149c04450 + (longlong)(int)local_res20[0] * 4);
              }
              if ((*(uint *)(param_4 + 4) & uVar10) != 0) {
                uVar7 = FUN_144f00d90(param_1,local_res10,param_3 & 0xffffffff,param_4,
                                      local_res20[0],in_stack_ffffffffffffff50 & 0xffffffff00000000,
                                      in_stack_ffffffffffffff58 & 0xffffff00,param_8);
                return uVar7;
              }
              if (param_7 != '\0') {
                return 0xffffffff;
              }
              uVar7 = 0xd9;
              uVar12 = 0x8c;
            }
            else {
              if (param_7 != '\0') {
                return 0xffffffff;
              }
              uVar7 = 0xd0;
              uVar12 = 0x8b;
            }
            break;
          }
          FUN_144ba24f0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
          if (param_8 != (char *)0x0) goto LAB_144effb36;
        }
        uVar7 = 199;
        uVar12 = 0x3a;
      }
      else {
        uVar7 = 0xbe;
        uVar12 = 0xe6;
      }
    }
  }
  else {
    uVar7 = 0xa0;
    uVar12 = 0xc9;
  }
LAB_144f00114:
  FUN_144ba24f0(0xd,0x78,uVar12,"crypto\\asn1\\tasn_dec.c",uVar7);
LAB_144f00128:
  FUN_144ba2bd0(2,"Type=",*(undefined8 *)(param_4 + 0x28));
LAB_144f0013f:
  return 0;
code_r0x000144f00052:
  uVar7 = FUN_1452b0310(param_1,pbVar8);
  FUN_144eff700(uVar7,pbVar8);
  lVar16 = lVar16 + 0x20;
  iVar11 = iVar11 + 1;
  if (*(int *)(param_4 + 0x10) <= iVar11) goto LAB_144f00073;
  goto LAB_144f00030;
}



// FUNCTION 144f00180 FUN_144f00180 body=348 status=ok
// SIG undefined FUN_144f00180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f00180(longlong *param_1,int param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int local_res8 [6];
  undefined1 local_res20 [8];
  undefined4 uVar9;
  undefined1 local_38 [8];
  char *local_30;
  
  pcVar3 = (char *)*param_1;
  uVar7 = (ulonglong)param_2;
  if (param_3 == '\0') {
    *param_1 = (longlong)(pcVar3 + uVar7);
    return 1;
  }
  iVar4 = 1;
  if (0 < param_2) {
    do {
      iVar5 = (int)uVar7;
      if (((iVar5 < 2) || (*pcVar3 != '\0')) || (pcVar3[1] != '\0')) {
        local_30 = pcVar3;
        bVar1 = FUN_144f03ea0(&local_30,local_res8,local_38,local_res20,iVar5);
        if ((char)bVar1 < '\0') {
          FUN_144ba24f0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
          uVar8 = 0x3a;
          uVar9 = 0x3c5;
          goto LAB_144f002b1;
        }
        iVar2 = (int)pcVar3;
        if ((bVar1 & 1) != 0) {
          local_res8[0] = (iVar2 - (int)local_30) + iVar5;
        }
        if ((bVar1 & 1) == 0) {
          pcVar3 = local_30 + local_res8[0];
        }
        else {
          if (iVar4 == -1) {
            uVar9 = 0x3ca;
            uVar8 = 0x3a;
            goto LAB_144f002b1;
          }
          iVar4 = iVar4 + 1;
          pcVar3 = local_30;
        }
        uVar6 = iVar5 + (iVar2 - (int)pcVar3);
      }
      else {
        pcVar3 = pcVar3 + 2;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_144f00259;
        uVar6 = iVar5 - 2;
      }
      uVar7 = (ulonglong)uVar6;
    } while (0 < (int)uVar6);
    if (iVar4 == 0) {
LAB_144f00259:
      *param_1 = (longlong)pcVar3;
      return 1;
    }
  }
  uVar9 = 0x3d4;
  uVar8 = 0x89;
LAB_144f002b1:
  FUN_144ba24f0(0xd,0xbe,uVar8,"crypto\\asn1\\tasn_dec.c",uVar9);
  return 0;
}



// FUNCTION 144f002e0 FUN_144f002e0 body=734 status=ok
// SIG undefined FUN_144f002e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144f002e0(int *param_1,longlong *param_2,uint param_3,byte param_4,int param_5,int param_6,
             int param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  char *local_20;
  
  pcVar8 = (char *)*param_2;
  param_4 = param_4 & 1;
  uVar6 = (ulonglong)(int)param_3;
  if ((param_1 == (int *)0x0) && (param_4 == 0)) {
    *param_2 = (longlong)(pcVar8 + uVar6);
    return 1;
  }
  do {
    local_28 = pcVar8;
    if ((int)param_3 < 1) {
      if (param_4 == 0) {
LAB_144f005a2:
        *param_2 = (longlong)pcVar8;
        uVar9 = 1;
      }
      else {
        FUN_144ba24f0(0xd,0x6a,0x89,"crypto\\asn1\\tasn_dec.c",0x41d);
LAB_144f004c7:
        uVar9 = 0;
      }
      return uVar9;
    }
    iVar5 = (int)uVar6;
    if (((1 < iVar5) && (*pcVar8 == '\0')) && (pcVar8[1] == '\0')) {
      pcVar8 = pcVar8 + 2;
      if (param_4 == 0) {
        local_28 = pcVar8;
        FUN_144ba24f0(0xd,0x6a,0x9f,"crypto\\asn1\\tasn_dec.c",0x403);
        return 0;
      }
      goto LAB_144f005a2;
    }
    local_20 = pcVar8;
    bVar2 = FUN_144f03ea0(&local_20,&local_34,&local_30,&local_2c,iVar5);
    if ((char)bVar2 < '\0') {
      uVar9 = 0x471;
      uVar7 = 0x66;
LAB_144f00562:
      FUN_144ba24f0(0xd,0x68,uVar7,"crypto\\asn1\\tasn_dec.c",uVar9);
      FUN_144ba24f0(0xd,0x6a,0x3a,"crypto\\asn1\\tasn_dec.c",0x40c);
      return 0;
    }
    if ((-1 < param_5) && ((param_5 != local_30 || (param_6 != local_2c)))) {
      uVar9 = 0x47d;
      uVar7 = 0xa8;
      goto LAB_144f00562;
    }
    if ((bVar2 & 1) != 0) {
      local_34 = ((int)pcVar8 - (int)local_20) + iVar5;
    }
    iVar3 = local_34;
    local_28 = local_20;
    if ((bVar2 & 0x20) == 0) {
      if (local_34 != 0) {
        if (param_1 != (int *)0x0) {
          iVar1 = *param_1;
          lVar4 = FUN_144ea7230(param_1,(longlong)(local_34 + iVar1));
          if (lVar4 == 0) {
            FUN_144ba24f0(0xd,0x8c,0x41,"crypto\\asn1\\tasn_dec.c",0x42a);
            return 0;
          }
          memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 2)),local_28,(longlong)iVar3);
        }
        local_28 = local_28 + iVar3;
      }
    }
    else {
      if (4 < param_7) {
        FUN_144ba24f0(0xd,0x6a,0xc5,"crypto\\asn1\\tasn_dec.c",0x413);
        return 0;
      }
      iVar3 = FUN_144f002e0(param_1,&local_28,local_34,bVar2 & 1,param_5,param_6,param_7 + 1);
      if (iVar3 == 0) goto LAB_144f004c7;
    }
    param_3 = iVar5 + ((int)pcVar8 - (int)local_28);
    uVar6 = (ulonglong)param_3;
    pcVar8 = local_28;
  } while( true );
}



// FUNCTION 144f005c0 FUN_144f005c0 body=548 status=ok
// SIG undefined FUN_144f005c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f005c0(int *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
             longlong *param_6,int param_7,int param_8,int param_9,char param_10,char *param_11)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  int local_38 [2];
  longlong local_30;
  
  pcVar3 = param_11;
  iVar2 = param_7;
  plVar1 = param_6;
  local_30 = *param_6;
  iVar8 = (int)local_30;
  if ((param_11 == (char *)0x0) || (*param_11 == '\0')) {
    uVar4 = FUN_144f03ea0(&local_30,&param_6,local_38,&param_11,param_7);
    if (pcVar3 != (char *)0x0) {
      *(uint *)(pcVar3 + 4) = uVar4;
      iVar5 = (int)local_30 - iVar8;
      *(int *)(pcVar3 + 8) = (int)param_6;
      *(int *)(pcVar3 + 0x10) = (int)param_11;
      *(int *)(pcVar3 + 0xc) = local_38[0];
      *(int *)(pcVar3 + 0x14) = iVar5;
      *pcVar3 = '\x01';
      if (((uVar4 & 0x81) == 0) && (iVar2 < iVar5 + (int)param_6)) {
        FUN_144ba24f0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
        *pcVar3 = '\0';
        return 0;
      }
    }
  }
  else {
    param_6._0_4_ = *(int *)(param_11 + 8);
    local_30 = local_30 + *(int *)(param_11 + 0x14);
    local_38[0] = *(int *)(param_11 + 0xc);
    uVar4 = *(uint *)(param_11 + 4);
    param_11._0_4_ = *(int *)(param_11 + 0x10);
  }
  bVar7 = (byte)uVar4;
  if ((char)bVar7 < '\0') {
    FUN_144ba24f0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    uVar6 = 0;
  }
  else {
    if (-1 < param_8) {
      if ((param_8 != local_38[0]) || (param_9 != (int)param_11)) {
        if (param_10 != '\0') {
          return 0xffffffff;
        }
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
        FUN_144ba24f0(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x47d);
        return 0;
      }
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
    }
    if ((uVar4 & 1) != 0) {
      param_6._0_4_ = (iVar8 - (int)local_30) + iVar2;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = bVar7 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = bVar7 & 0x20;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = (int)param_6;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)(int)param_11;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_38[0];
    }
    *plVar1 = local_30;
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 144f007f0 FUN_144f007f0 body=477 status=ok
// SIG undefined FUN_144f007f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f007f0(longlong param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,
             undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_res8 [8];
  char *pcVar5;
  char local_28 [4];
  int local_24;
  char *local_20;
  
  if (param_1 == 0) {
    return 0;
  }
  local_20 = (char *)*param_2;
  if ((*param_4 & 0x10) == 0) {
    uVar3 = FUN_144f009d0(param_1);
    return uVar3;
  }
  pcVar5 = local_res8;
  iVar2 = FUN_144f005c0(&local_24,0,0,local_28,pcVar5,&local_20,param_3,param_4[1],*param_4 & 0xc0,
                        param_5,param_6);
  pcVar1 = local_20;
  if (iVar2 == 0) {
    uVar3 = 0x1e4;
  }
  else {
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    if (local_res8[0] == '\0') {
      uVar3 = 0x1ea;
      uVar4 = 0x78;
      goto LAB_144f008dc;
    }
    iVar2 = FUN_144f009d0(param_1,&local_20,local_24,param_4,(ulonglong)pcVar5 & 0xffffffffffffff00,
                          param_6,param_7);
    if (iVar2 != 0) {
      local_24 = local_24 + ((int)pcVar1 - (int)local_20);
      if (local_28[0] == '\0') {
        if (local_24 == 0) goto LAB_144f0096c;
        uVar3 = 0x201;
        uVar4 = 0x77;
      }
      else {
        if (((1 < local_24) && (*local_20 == '\0')) && (local_20[1] == '\0')) {
          local_20 = local_20 + 2;
LAB_144f0096c:
          *param_2 = local_20;
          return 1;
        }
        uVar3 = 0x1f8;
        uVar4 = 0x89;
      }
      goto LAB_144f008dc;
    }
    uVar3 = 0x1f0;
  }
  uVar4 = 0x3a;
LAB_144f008dc:
  FUN_144ba24f0(0xd,0x84,uVar4,"crypto\\asn1\\tasn_dec.c",uVar3);
  return 0;
}



// FUNCTION 144f009d0 FUN_144f009d0 body=954 status=ok
// SIG undefined FUN_144f009d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_144f009d0(longlong *******param_1,undefined8 *param_2,uint param_3,uint *param_4,
             undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  char *pcVar2;
  longlong *******ppppppplVar3;
  int iVar4;
  longlong ******pppppplVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *******ppppppplVar9;
  char local_res8 [8];
  undefined8 *local_res10;
  uint local_res18 [2];
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff70;
  char **ppcVar12;
  char *local_58;
  undefined8 local_50;
  longlong *******local_48 [2];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if (param_1 == (longlong *******)0x0) {
    return 0;
  }
  uVar1 = *param_4;
  local_58 = (char *)*param_2;
  ppppppplVar9 = (longlong *******)local_48;
  ppppppplVar3 = param_1;
  if ((uVar1 & 0x1000) == 0) {
    ppppppplVar9 = param_1;
    ppppppplVar3 = local_48[0];
  }
  local_48[0] = ppppppplVar3;
  local_res10 = param_2;
  local_res18[0] = param_3;
  if ((uVar1 & 6) == 0) {
    if ((uVar1 & 8) == 0) {
      uVar10 = (**(code **)(param_4 + 6))();
      iVar4 = FUN_144eff910(ppppppplVar9,&local_58,param_3,uVar10,CONCAT44(uVar11,0xffffffff),
                            (ulonglong)uVar8 << 0x20,param_5,param_6,param_7);
      if (iVar4 != 0) goto LAB_144f00d3d;
      uVar6 = 0x286;
    }
    else {
      uVar10 = (**(code **)(param_4 + 6))();
      iVar4 = FUN_144eff910(ppppppplVar9,&local_58,param_3,uVar10,CONCAT44(uVar11,param_4[1]),
                            CONCAT44(uVar8,uVar1) & 0xffffffff000000c0,param_5,param_6,param_7);
      if (iVar4 != 0) {
LAB_144f00d3d:
        if (iVar4 == -1) {
          return 0xffffffff;
        }
LAB_144f00d4b:
        *local_res10 = local_58;
        return 1;
      }
      uVar6 = 0x27d;
    }
    uVar10 = 0x3a;
  }
  else {
    uVar8 = 0;
    if ((uVar1 & 8) == 0) {
      uVar7 = (uVar1 & 2 | 0x20) >> 1;
    }
    else {
      uVar7 = param_4[1];
      uVar8 = uVar1 & 0xc0;
    }
    ppcVar12 = &local_58;
    uVar10 = 0;
    iVar4 = FUN_144f005c0(local_res18,0,0,local_res8,0,ppcVar12,param_3,uVar7,uVar8,param_5,param_6)
    ;
    if (iVar4 == 0) {
      FUN_144ba24f0(0xd,0x83,0x3a,"crypto\\asn1\\tasn_dec.c",0x23c);
      return 0;
    }
    if (iVar4 == -1) {
      return 0xffffffff;
    }
    pppppplVar5 = *ppppppplVar9;
    if (pppppplVar5 == (longlong ******)0x0) {
      pppppplVar5 = (longlong ******)FUN_144babca0();
      *ppppppplVar9 = pppppplVar5;
    }
    else {
      iVar4 = FUN_144babbf0(pppppplVar5);
      while (0 < iVar4) {
        local_50 = FUN_144bac250(pppppplVar5);
        uVar6 = (**(code **)(param_4 + 6))();
        FUN_144eff360(&local_50,uVar6);
        iVar4 = FUN_144babbf0(pppppplVar5);
      }
    }
    uVar8 = local_res18[0];
    pcVar2 = local_58;
    if (*ppppppplVar9 == (longlong ******)0x0) {
      uVar6 = 0x24f;
      uVar10 = 0x41;
    }
    else {
      while( true ) {
        local_58 = pcVar2;
        if ((int)uVar8 < 1) {
          if (local_res8[0] == '\0') goto LAB_144f00d4b;
          uVar6 = 0x274;
          uVar10 = 0x89;
          goto LAB_144f00d25;
        }
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (((1 < (int)uVar8) && (*pcVar2 == '\0')) && (pcVar2[1] == '\0')) break;
        local_50 = 0;
        uVar6 = (**(code **)(param_4 + 6))();
        param_3 = param_3 & 0xffffff00;
        ppcVar12 = (char **)((ulonglong)ppcVar12 & 0xffffffff00000000);
        uVar10 = CONCAT44(uVar11,0xffffffff);
        iVar4 = FUN_144eff910(&local_50,&local_58,uVar8,uVar6,uVar10,ppcVar12,param_3,param_6,
                              param_7);
        if (iVar4 == 0) {
          FUN_144ba24f0(0xd,0x83,0x3a,"crypto\\asn1\\tasn_dec.c",0x267);
          uVar10 = (**(code **)(param_4 + 6))();
          FUN_144eff330(local_50,uVar10);
          return 0;
        }
        uVar8 = uVar8 + ((int)pcVar2 - (int)local_58);
        iVar4 = FUN_144bac1c0(*ppppppplVar9,local_50);
        pcVar2 = local_58;
        if (iVar4 == 0) {
          FUN_144ba24f0(0xd,0x83,0x41,"crypto\\asn1\\tasn_dec.c",0x26e);
          uVar10 = (**(code **)(param_4 + 6))();
          FUN_144eff330(local_50,uVar10);
          return 0;
        }
      }
      local_58 = pcVar2 + 2;
      if (local_res8[0] != '\0') goto LAB_144f00d4b;
      uVar6 = CONCAT44(uVar11,0x25b);
      uVar10 = 0x9f;
    }
  }
LAB_144f00d25:
  FUN_144ba24f0(0xd,0x83,uVar10,"crypto\\asn1\\tasn_dec.c",uVar6);
  return 0;
}



// FUNCTION 144f00d90 FUN_144f00d90 body=1102 status=ok
// SIG undefined FUN_144f00d90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f00d90(longlong param_1,longlong *param_2,int param_3,char *param_4,uint param_5,
             undefined4 param_6,char param_7,char *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong *plVar10;
  char local_78;
  char local_77;
  char local_76 [2];
  int local_74;
  longlong local_70;
  uint local_68 [2];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar6 = 0;
  uVar8 = 0;
  local_78 = '\0';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar7 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    FUN_144ba24f0(0xd,0x6c,0x7d,"crypto\\asn1\\tasn_dec.c",0x2a0);
    return 0;
  }
  if (*param_4 == '\x05') {
    uVar2 = param_5;
    param_5 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_4 + 4);
  }
  if (uVar2 == 0xfffffffc) {
    if (-1 < (int)param_5) {
      uVar8 = 0x2ae;
      uVar6 = 0x7f;
      goto LAB_144f00fe0;
    }
    if (param_7 != '\0') {
      uVar8 = 0x2b3;
      uVar6 = 0x7e;
      goto LAB_144f00fe0;
    }
    lVar4 = *param_2;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      local_60 = lVar4;
      uVar2 = FUN_144f03ea0(&local_60,&local_70,local_68,&local_74,param_3);
      if (param_8 == (char *)0x0) goto LAB_144f00f37;
      *(uint *)(param_8 + 4) = uVar2;
      iVar3 = (int)local_60 - (int)lVar4;
      *(int *)(param_8 + 8) = (int)local_70;
      *(int *)(param_8 + 0x10) = local_74;
      *(uint *)(param_8 + 0xc) = local_68[0];
      *(int *)(param_8 + 0x14) = iVar3;
      *param_8 = '\x01';
      if (((uVar2 & 0x81) != 0) || (iVar3 + (int)local_70 <= param_3)) goto LAB_144f00f37;
      FUN_144ba24f0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
      *param_8 = '\0';
      uVar8 = 0x2ba;
    }
    else {
      local_74 = *(int *)(param_8 + 0x10);
      local_68[0] = *(uint *)(param_8 + 0xc);
      uVar2 = *(uint *)(param_8 + 4);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_8 + 8));
      local_60 = *(int *)(param_8 + 0x14) + lVar4;
LAB_144f00f37:
      if (-1 < (char)uVar2) {
        uVar2 = local_68[0];
        if ((char)local_74 != '\0') {
          uVar2 = 0xfffffffd;
        }
        goto LAB_144f00f77;
      }
      FUN_144ba24f0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      uVar8 = 0x2ba;
    }
  }
  else {
LAB_144f00f77:
    local_70 = *param_2;
    uVar1 = uVar2;
    if (param_5 != 0xffffffff) {
      uVar7 = param_6;
      uVar1 = param_5;
    }
    plVar10 = &local_70;
    pcVar9 = &local_77;
    iVar3 = FUN_144f005c0(&local_74,0,0,local_76,pcVar9,plVar10,param_3,uVar1,uVar7,param_7,param_8)
    ;
    uVar7 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (iVar3 != 0) {
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (uVar2 - 0x10 < 2) {
        if (uVar2 == 0xfffffffd) goto LAB_144f010f5;
        if (local_77 == '\0') {
          FUN_144ba24f0(0xd,0x6c,0x9c,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar7,0x2db));
          return 0;
        }
LAB_144f010fd:
        lVar4 = *param_2;
        if (local_76[0] == '\0') {
          iVar3 = ((int)local_70 - (int)lVar4) + local_74;
          lVar5 = local_70 + local_74;
        }
        else {
          iVar3 = FUN_144f00180(&local_70,local_74);
          if (iVar3 == 0) goto LAB_144f01190;
          iVar3 = (int)local_70 - (int)lVar4;
          lVar5 = local_70;
        }
      }
      else {
        if (uVar2 == 0xfffffffd) {
LAB_144f010f5:
          if (param_8 != (char *)0x0) {
            *param_8 = '\0';
          }
          goto LAB_144f010fd;
        }
        if (local_77 == '\0') {
          lVar5 = local_70 + local_74;
          lVar4 = local_70;
          iVar3 = local_74;
        }
        else {
          if ((uVar2 < 0xb) && ((0x466U >> (uVar2 & 0x1f) & 1) != 0)) {
            FUN_144ba24f0(0xd,0x6c,0xc3,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar7,0x2ed));
            return 0;
          }
          uVar8 = CONCAT44(uVar7,0xffffffff);
          local_78 = '\x01';
          iVar3 = FUN_144f002e0(&local_58,&local_70,local_74,local_76[0],uVar8,
                                (ulonglong)plVar10 & 0xffffffff00000000,0);
          uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar8 = uVar6;
          if (iVar3 == 0) goto LAB_144f01190;
          iVar3 = (int)local_58;
          lVar5 = (longlong)(int)local_58;
          lVar4 = FUN_144ea7230(&local_58,(longlong)((int)local_58 + 1));
          if (lVar4 == 0) {
            FUN_144ba24f0(0xd,0x6c,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar7,0x2ff));
            goto LAB_144f01190;
          }
          *(undefined1 *)(lVar5 + local_50) = 0;
          lVar5 = local_70;
          lVar4 = local_50;
        }
      }
      iVar3 = FUN_144f011e0(param_1,lVar4,iVar3,uVar2,&local_78,param_4);
      uVar8 = uVar6;
      if (iVar3 != 0) {
        *param_2 = lVar5;
        uVar8 = 1;
      }
LAB_144f01190:
      if (local_78 == '\0') {
        return uVar8;
      }
      FUN_144ea6530(local_50,"crypto\\asn1\\tasn_dec.c",0x313);
      return uVar8;
    }
    uVar8 = CONCAT44(uVar7,0x2c9);
  }
  uVar6 = 0x3a;
LAB_144f00fe0:
  FUN_144ba24f0(0xd,0x6c,uVar6,"crypto\\asn1\\tasn_dec.c",uVar8);
  return 0;
}



// FUNCTION 144f011e0 FUN_144f011e0 body=791 status=ok
// SIG undefined FUN_144f011e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
FUN_144f011e0(uint *param_1,byte *param_2,uint param_3,uint param_4,char *param_5,longlong param_6)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = 0x144f011fc;
  puVar8 = (uint *)0x0;
  local_res10 = param_2;
  if ((*(longlong *)(param_6 + 0x18) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_6 + 0x18) + 0x28), pcVar1 != (code *)0x0)) {
    puVar3 = (undefined1 *)(*pcVar1)();
    return puVar3;
  }
  puVar7 = param_1;
  puVar4 = puVar8;
  if (*(int *)(param_6 + 4) == -4) {
    puVar4 = *(uint **)param_1;
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)FUN_144efe770();
      if (puVar4 == (uint *)0x0) goto LAB_144f014dd;
      *(uint **)param_1 = puVar4;
    }
    if (param_4 != *puVar4) {
      FUN_144ed0590(puVar4,param_4,0);
    }
    puVar7 = puVar4 + 2;
    puVar8 = param_1;
  }
  switch(param_4) {
  case 1:
    if (param_3 == 1) {
      *puVar7 = (uint)*local_res10;
      break;
    }
    FUN_144ba24f0(0xd,0xcc,0x6a,"crypto\\asn1\\tasn_dec.c",0x345,uVar10);
    goto LAB_144f014dd;
  case 2:
  case 10:
    lVar5 = FUN_144ef1320(puVar7,&local_res10,param_3);
    if (lVar5 == 0) goto LAB_144f014dd;
    *(uint *)(*(longlong *)puVar7 + 4) = *(uint *)(*(longlong *)puVar7 + 4) & 0x100 | param_4;
    break;
  case 3:
    lVar5 = FUN_1452a3350(puVar7,&local_res10,param_3);
    goto LAB_144f012d2;
  default:
    if (param_4 == 0x1e) {
      if ((param_3 & 1) != 0) {
        FUN_144ba24f0(0xd,0xcc,0xd6,"crypto\\asn1\\tasn_dec.c",0x36f,uVar10);
        goto LAB_144f014dd;
      }
    }
    else if ((param_4 == 0x1c) && ((param_3 & 3) != 0)) {
      FUN_144ba24f0(0xd,0xcc,0xd7,"crypto\\asn1\\tasn_dec.c",0x374,uVar10);
      goto LAB_144f014dd;
    }
    puVar6 = *(uint **)puVar7;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_144f03c50(param_4);
      if (puVar6 == (uint *)0x0) {
        FUN_144ba24f0(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar9,0x37b));
        goto LAB_144f014dd;
      }
      *(uint **)puVar7 = puVar6;
    }
    else {
      puVar6[1] = param_4;
    }
    if (*param_5 == '\0') {
      iVar2 = FUN_144f03d00(puVar6,local_res10,param_3);
      if (iVar2 == 0) {
        FUN_144ba24f0(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar9,0x38b));
        FUN_144f03a80(puVar6);
        puVar7[0] = 0;
        puVar7[1] = 0;
        goto LAB_144f014dd;
      }
    }
    else {
      FUN_144ea6530(*(undefined8 *)(puVar6 + 2),"crypto\\asn1\\tasn_dec.c",0x385);
      *(byte **)(puVar6 + 2) = local_res10;
      *puVar6 = param_3;
      *param_5 = '\0';
    }
    break;
  case 5:
    if (param_3 != 0) {
      FUN_144ba24f0(0xd,0xcc,0x90,"crypto\\asn1\\tasn_dec.c",0x33d,uVar10);
      goto LAB_144f014dd;
    }
    puVar7[0] = 1;
    puVar7[1] = 0;
    break;
  case 6:
    lVar5 = FUN_144ed0f90(puVar7,&local_res10,param_3);
LAB_144f012d2:
    if (lVar5 == 0) {
LAB_144f014dd:
      FUN_144efe790(puVar4);
      if (puVar8 != (uint *)0x0) {
        puVar8[0] = 0;
        puVar8[1] = 0;
      }
      return (undefined1 *)0x0;
    }
  }
  if ((puVar4 != (uint *)0x0) && (param_4 == 5)) {
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  return &DAT_00000001;
}



// FUNCTION 144f01520 FUN_144f01520 body=25 status=ok
// SIG undefined FUN_144f01520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f01520(void)

{
  FUN_144f01fc0();
  return;
}



// FUNCTION 144f01540 FUN_144f01540 body=928 status=ok
// SIG undefined FUN_144f01540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144f01540(longlong *param_1,longlong param_2,char *param_3,ulonglong param_4,
                       uint param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  code *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res18 [2];
  undefined4 uVar12;
  uint local_38;
  int local_34;
  undefined8 local_30;
  code *pcVar8;
  
  lVar10 = *(longlong *)(param_3 + 0x18);
  pcVar8 = (code *)0x0;
  local_34 = 1;
  uVar11 = param_4 & 0xffffffff;
  if ((*param_3 != '\0') && (*param_1 == 0)) {
    return 0;
  }
  pcVar9 = pcVar8;
  if ((lVar10 != 0) && (pcVar9 = (code *)0x0, *(code **)(lVar10 + 0x18) != (code *)0x0)) {
    pcVar9 = *(code **)(lVar10 + 0x18);
  }
  local_38 = param_5;
  iVar2 = (int)param_4;
  switch(*param_3) {
  case '\0':
    lVar10 = *(longlong *)(param_3 + 8);
    if (lVar10 == 0) {
      uVar11 = FUN_144f01900(param_1,param_2,param_3);
      return uVar11;
    }
    break;
  case '\x02':
    if (iVar2 != -1) {
      uVar12 = 0x7a;
      goto LAB_144f0162f;
    }
    if ((pcVar9 != (code *)0x0) && (iVar2 = (*pcVar9)(6,param_1,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1452b02f0(param_1,param_3);
    if ((iVar2 < 0) || (*(int *)(param_3 + 0x10) <= iVar2)) {
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(7,param_1,param_3);
        return 0;
      }
      return 0;
    }
    lVar10 = (longlong)iVar2 * 0x20 + *(longlong *)(param_3 + 8);
    param_1 = (longlong *)FUN_1452b0310(param_1,lVar10);
    param_4 = 0xffffffff;
    break;
  default:
    return 0;
  case '\x04':
    uVar11 = (**(code **)(lVar10 + 0x28))(param_1,param_2,param_3,param_4,param_5);
    return uVar11;
  case '\x05':
    if (iVar2 == -1) {
      uVar11 = FUN_144f01900(param_1,param_2,param_3,0xffffffff,param_5);
      return uVar11;
    }
    uVar12 = 0x6f;
LAB_144f0162f:
    FUN_144ba24f0(0xd,0x90,0xe6,"crypto\\asn1\\tasn_enc.c",uVar12);
    return 0xffffffff;
  case '\x06':
    local_34 = 1;
    if ((param_5 >> 0xb & 1) != 0) {
      local_34 = 2;
    }
  case '\x01':
    iVar1 = FUN_1452b05c0(local_res18,param_2,param_1,param_3);
    if (iVar1 < 0) {
      return 0;
    }
    if (0 < iVar1) {
      return (ulonglong)local_res18[0];
    }
    local_res18[0] = 0;
    if (iVar2 == -1) {
      local_38 = param_5 & 0xffffff3f;
      uVar11 = 0x10;
    }
    pcVar6 = pcVar8;
    if (pcVar9 != (code *)0x0) {
      iVar2 = (*pcVar9)(6,param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      pcVar6 = (code *)(ulonglong)local_res18[0];
    }
    lVar10 = *(longlong *)(param_3 + 8);
    if (0 < *(int *)(param_3 + 0x10)) {
      do {
        lVar3 = FUN_1452b0320(param_1,lVar10,1);
        if (lVar3 == 0) {
          return 0;
        }
        uVar4 = FUN_1452b0310(param_1,lVar3);
        iVar2 = FUN_144f01ca0(uVar4,0,lVar3,0xffffffff,local_38);
        if ((iVar2 == -1) || ((int)(0x7fffffff - local_res18[0]) < iVar2)) {
          return 0xffffffff;
        }
        local_res18[0] = local_res18[0] + iVar2;
        pcVar6 = (code *)(ulonglong)local_res18[0];
        lVar10 = lVar10 + 0x20;
        uVar7 = (int)pcVar8 + 1;
        pcVar8 = (code *)(ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_3 + 0x10));
    }
    iVar2 = 0;
    uVar5 = FUN_144f041d0(local_34,pcVar6,uVar11);
    local_30 = CONCAT44(1,(int)uVar5);
    if (param_2 == 0) {
      return uVar5;
    }
    if ((int)uVar5 == -1) {
      return uVar5;
    }
    FUN_144f04080(param_2,local_34,local_res18[0],uVar11,local_38);
    lVar10 = *(longlong *)(param_3 + 8);
    if (0 < *(int *)(param_3 + 0x10)) {
      do {
        lVar3 = FUN_1452b0320(param_1,lVar10,1);
        if (lVar3 == 0) {
          return 0;
        }
        uVar4 = FUN_1452b0310(param_1,lVar3);
        FUN_144f01ca0(uVar4,param_2,lVar3,0xffffffff,local_38);
        lVar10 = lVar10 + 0x20;
        iVar2 = iVar2 + 1;
        uVar5 = local_30;
      } while (iVar2 < *(int *)(param_3 + 0x10));
    }
    if (local_34 == 2) {
      FUN_144f041b0(param_2);
    }
    if (pcVar9 == (code *)0x0) {
      return uVar5 & 0xffffffff;
    }
    iVar2 = (*pcVar9)(7,param_1,param_3);
    if (iVar2 != 0) {
      return uVar5 & 0xffffffff;
    }
    return 0;
  }
  uVar11 = FUN_144f01ca0(param_1,param_2,lVar10,param_4,param_5);
  return uVar11;
}



// FUNCTION 144f01900 FUN_144f01900 body=245 status=ok
// SIG undefined FUN_144f01900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144f01900(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
                       undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int local_res18 [4];
  undefined8 uVar5;
  
  uVar5 = 0x144f0191c;
  local_res18[0] = *(int *)(param_3 + 4);
  iVar4 = 0;
  uVar2 = FUN_144f020c0(param_1,0,local_res18,param_3);
  uVar3 = (ulonglong)uVar2;
  if ((local_res18[0] - 0x10U < 2) || (local_res18[0] == -3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0xfffffffe) {
      uVar3 = 0;
      iVar4 = 2;
    }
    if (param_4 == -1) {
      param_4 = local_res18[0];
    }
    if (param_2 != (longlong *)0x0) {
      if (bVar1) {
        FUN_144f04080(param_2,iVar4,uVar3,param_4,param_5,uVar5);
      }
      FUN_144f020c0(param_1,*param_2,local_res18,param_3);
      if (iVar4 == 0) {
        *param_2 = *param_2 + (longlong)(int)uVar3;
      }
      else {
        FUN_144f041b0(param_2);
      }
    }
    if (bVar1) {
      uVar3 = FUN_144f041d0(iVar4,uVar3,param_4);
    }
  }
  return uVar3;
}



// FUNCTION 144f01a00 FUN_144f01a00 body=667 status=ok
// SIG undefined FUN_144f01a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f01a00(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Base;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144f01a11;
  iVar6 = 0;
  local_48 = (void *)0x0;
  if ((param_5 != 0) && (iVar1 = FUN_144babbf0(), 1 < iVar1)) {
    iVar1 = FUN_144babbf0(param_1);
    _Base = (void *)FUN_144ea64e0((longlong)iVar1 * 0x18,"crypto\\asn1\\tasn_enc.c",400);
    uVar5 = 0;
    if (_Base != (void *)0x0) {
      pvVar4 = (void *)FUN_144ea64e0((longlong)param_3,"crypto\\asn1\\tasn_enc.c",0x193);
      local_38 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_144ea6530(_Base,"crypto\\asn1\\tasn_enc.c",0x195);
        uVar5 = 0;
      }
      else {
        local_48 = pvVar4;
        iVar1 = FUN_144babbf0(param_1);
        if (0 < iVar1) {
          puVar8 = (undefined8 *)((longlong)_Base + 0x10);
          iVar1 = iVar6;
          do {
            local_40 = FUN_144babc00(param_1,iVar1);
            puVar8[-2] = local_48;
            uVar2 = FUN_144f01540(&local_40,&local_48,param_4,0xffffffff,param_6);
            *(undefined4 *)(puVar8 + -1) = uVar2;
            *puVar8 = local_40;
            iVar1 = iVar1 + 1;
            iVar3 = FUN_144babbf0(param_1);
            puVar8 = puVar8 + 3;
            pvVar4 = local_38;
          } while (iVar1 < iVar3);
        }
        iVar1 = FUN_144babbf0(param_1);
        qsort(_Base,(longlong)iVar1,0x18,FUN_144f02290);
        local_48 = (void *)*param_2;
        iVar1 = FUN_144babbf0(param_1);
        if (0 < iVar1) {
          piVar7 = (int *)((longlong)_Base + 8);
          iVar1 = iVar6;
          do {
            memcpy(local_48,*(void **)(piVar7 + -2),(longlong)*piVar7);
            iVar3 = *piVar7;
            piVar7 = piVar7 + 6;
            local_48 = (void *)((longlong)local_48 + (longlong)iVar3);
            iVar1 = iVar1 + 1;
            iVar3 = FUN_144babbf0(param_1);
          } while (iVar1 < iVar3);
        }
        *param_2 = (longlong)local_48;
        if ((param_5 == 2) && (iVar1 = FUN_144babbf0(param_1), 0 < iVar1)) {
          puVar8 = (undefined8 *)((longlong)_Base + 0x10);
          do {
            FUN_144babc20(param_1,iVar6,*puVar8);
            puVar8 = puVar8 + 3;
            iVar6 = iVar6 + 1;
            iVar1 = FUN_144babbf0(param_1);
          } while (iVar6 < iVar1);
        }
        FUN_144ea6530(_Base,"crypto\\asn1\\tasn_enc.c",0x1ba);
        FUN_144ea6530(pvVar4,"crypto\\asn1\\tasn_enc.c",0x1bb);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  iVar1 = FUN_144babbf0(param_1);
  if (0 < iVar1) {
    do {
      local_40 = FUN_144babc00(param_1,iVar6);
      FUN_144f01540(&local_40,param_2,param_4,0xffffffff,param_6);
      iVar6 = iVar6 + 1;
      iVar1 = FUN_144babbf0(param_1);
    } while (iVar6 < iVar1);
  }
  return 1;
}



// FUNCTION 144f01ca0 FUN_144f01ca0 body=795 status=ok
// SIG undefined FUN_144f01ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_144f01ca0(longlong *******param_1,longlong param_2,uint *param_3,uint param_4,
                       uint param_5)

{
  longlong ******pppppplVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *******ppppppplVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint local_54;
  uint local_50;
  longlong *******local_38;
  undefined8 local_30;
  
  local_30 = 0x144f01cc1;
  uVar12 = *param_3;
  if ((uVar12 & 0x1000) != 0) {
    local_38 = param_1;
  }
  ppppppplVar10 = (longlong *******)&local_38;
  if ((uVar12 & 0x1000) == 0) {
    ppppppplVar10 = param_1;
  }
  iVar9 = 0;
  uVar11 = 0;
  if ((uVar12 & 0x18) == 0) {
    if (param_4 == 0xffffffff) {
      param_4 = 0xffffffff;
    }
    else {
      uVar11 = param_5 & 0xc0;
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      return 0xffffffff;
    }
    param_4 = param_3[1];
    uVar11 = uVar12 & 0xc0;
  }
  param_5 = param_5 & 0xffffff3f;
  bVar14 = ((uVar12 & param_5) >> 0xb & 1) != 0;
  cVar13 = bVar14 + '\x01';
  if ((uVar12 & 6) == 0) {
    if ((uVar12 & 0x10) == 0) {
      uVar5 = (**(code **)(param_3 + 6))();
      uVar6 = FUN_144f01540(ppppppplVar10,param_2,uVar5,param_4,uVar11 | param_5);
      return uVar6;
    }
    uVar5 = (**(code **)(param_3 + 6))();
    iVar9 = FUN_144f01540(ppppppplVar10,0,uVar5,0xffffffff,param_5);
    if (iVar9 != 0) {
      uVar12 = FUN_144f041d0(cVar13,iVar9,param_4);
      uVar6 = (ulonglong)uVar12;
      if (param_2 == 0) {
        return uVar6;
      }
      if (uVar12 != 0xffffffff) {
        FUN_144f04080(param_2,cVar13,iVar9,param_4,uVar11);
        uVar5 = (**(code **)(param_3 + 6))();
        FUN_144f01540(ppppppplVar10,param_2,uVar5,0xffffffff,param_5);
        if (bVar14) {
          FUN_144f041b0(param_2);
          return uVar6;
        }
        return uVar6;
      }
      return 0xffffffff;
    }
  }
  else {
    pppppplVar1 = *ppppppplVar10;
    if (pppppplVar1 != (longlong ******)0x0) {
      if ((uVar12 & 2) == 0) {
        cVar7 = '\0';
      }
      else {
        cVar7 = ((uVar12 & 4) != 0) + '\x01';
      }
      if ((param_4 == 0xffffffff) || (local_54 = param_4, local_50 = uVar11, (uVar12 & 0x10) != 0))
      {
        local_50 = 0;
        local_54 = (cVar7 != '\0') + 0x10;
      }
      iVar2 = FUN_144babbf0(pppppplVar1);
      iVar8 = iVar9;
      if (0 < iVar2) {
        do {
          local_30 = FUN_144babc00(pppppplVar1,iVar9);
          uVar5 = (**(code **)(param_3 + 6))();
          iVar2 = FUN_144f01540(&local_30,0,uVar5,0xffffffff,param_5);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          if (0x7fffffff - iVar2 < iVar8) {
            return 0xffffffff;
          }
          iVar8 = iVar8 + iVar2;
          iVar9 = iVar9 + 1;
          iVar2 = FUN_144babbf0(pppppplVar1);
        } while (iVar9 < iVar2);
      }
      uVar3 = FUN_144f041d0(cVar13,iVar8,local_54);
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar12 = uVar12 & 0x10;
      uVar4 = uVar3;
      if (uVar12 != 0) {
        uVar4 = FUN_144f041d0(cVar13,uVar3,param_4);
      }
      uVar6 = (ulonglong)uVar4;
      if (param_2 != 0) {
        if (uVar4 == 0xffffffff) {
          return 0xffffffff;
        }
        if (uVar12 != 0) {
          FUN_144f04080(param_2,cVar13,uVar3,param_4,uVar11);
        }
        FUN_144f04080(param_2,cVar13,iVar8,local_54,local_50);
        uVar5 = (**(code **)(param_3 + 6))();
        FUN_144f01a00(pppppplVar1,param_2,iVar8,uVar5,cVar7,param_5);
        if (bVar14) {
          FUN_144f041b0(param_2);
          if (uVar12 != 0) {
            FUN_144f041b0(param_2);
            return uVar6;
          }
          return uVar6;
        }
        return uVar6;
      }
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 144f01fc0 FUN_144f01fc0 body=246 status=ok
// SIG undefined FUN_144f01fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144f01fc0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x144f01fd2;
  local_res8 = param_1;
  if ((param_2 != (longlong *)0x0) && (*param_2 == 0)) {
    uVar1 = FUN_144f01540(&local_res8,0,param_3,0xffffffff,param_4,0x144f01fd2);
    if ((int)uVar1 < 1) {
      return (ulonglong)uVar1;
    }
    lVar2 = FUN_144ea64e0((longlong)(int)uVar1,"crypto\\asn1\\tasn_enc.c",0x40);
    if (lVar2 == 0) {
      FUN_144ba24f0(0xd,0x76,0x41,"crypto\\asn1\\tasn_enc.c",0x41);
      uVar3 = 0xffffffff;
    }
    else {
      local_res10 = lVar2;
      FUN_144f01540(&local_res8,&local_res10,param_3,0xffffffff,param_4,uVar4);
      uVar3 = (ulonglong)uVar1;
      *param_2 = lVar2;
    }
    return uVar3;
  }
  uVar3 = FUN_144f01540(&local_res8,param_2,param_3,0xffffffff,param_4,0x144f01fd2);
  return uVar3;
}



// FUNCTION 144f020c0 FUN_144f020c0 body=414 status=ok
// SIG undefined FUN_144f020c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144f020c0(longlong *param_1,void *param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *_Src;
  void **ppvVar7;
  void *local_res10 [2];
  undefined1 local_res20 [8];
  
  local_res10[0] = param_2;
  if ((*(longlong *)(param_4 + 0x18) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_4 + 0x18) + 0x30), pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (((*param_4 != '\0') || (*(int *)(param_4 + 4) != 1)) && (*param_1 == 0)) {
    return 0xffffffff;
  }
  if (*param_4 == '\x05') {
    uVar5 = *(undefined4 *)(*param_1 + 4);
    *param_3 = uVar5;
  }
  else if (*(int *)(param_4 + 4) == -4) {
    uVar5 = *(undefined4 *)*param_1;
    param_1 = (longlong *)((undefined4 *)*param_1 + 2);
    *param_3 = uVar5;
  }
  else {
    uVar5 = *param_3;
  }
  switch(uVar5) {
  case 1:
    iVar1 = (int)*param_1;
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (*(int *)(param_4 + 4) != -4) {
      if (iVar1 == 0) {
        if (*(int *)(param_4 + 0x20) == 0) {
          return 0xffffffff;
        }
      }
      else if (0 < *(int *)(param_4 + 0x20)) {
        return 0xffffffff;
      }
    }
    local_res20[0] = (undefined1)iVar1;
    _Src = local_res20;
    uVar6 = 1;
    break;
  case 2:
  case 10:
    ppvVar7 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar7 = (void **)0x0;
    }
    uVar4 = FUN_144ef12f0(*param_1,ppvVar7);
    return uVar4;
  case 3:
    ppvVar7 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar7 = (void **)0x0;
    }
    uVar4 = FUN_1452a3230(*param_1,ppvVar7);
    return uVar4;
  default:
    puVar3 = (uint *)*param_1;
    if ((*(int *)(param_4 + 0x20) == 0x800) && ((puVar3[4] & 0x10) != 0)) {
      if (param_2 != (void *)0x0) {
        *(void **)(puVar3 + 2) = param_2;
        *puVar3 = 0;
      }
      return 0xfffffffe;
    }
    _Src = *(undefined1 **)(puVar3 + 2);
    uVar6 = *puVar3;
    break;
  case 5:
    _Src = (undefined1 *)0x0;
    uVar6 = 0;
    break;
  case 6:
    _Src = *(undefined1 **)(*param_1 + 0x18);
    uVar6 = *(uint *)(*param_1 + 0x14);
    if (_Src == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    if (uVar6 == 0) {
      return 0xffffffff;
    }
  }
  if ((param_2 != (void *)0x0) && (uVar6 != 0)) {
    memcpy(param_2,_Src,(longlong)(int)uVar6);
  }
  return (ulonglong)uVar6;
}



// FUNCTION 144f02290 FUN_144f02290 body=65 status=ok
// SIG undefined FUN_144f02290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144f02290(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  iVar3 = memcmp((void *)*param_1,(void *)*param_2,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}



// FUNCTION 144f022e0 FUN_144f022e0 body=29 status=ok
// SIG undefined FUN_144f022e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f022e0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c045c0);
  return;
}



// FUNCTION 144f02300 FUN_144f02300 body=29 status=ok
// SIG undefined FUN_144f02300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f02300(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144f02320 FUN_144f02320 body=13 status=ok
// SIG undefined FUN_144f02320(void)

bool FUN_144f02320(longlong param_1)

{
  return *(longlong *)(param_1 + 0x138) != 0;
}



// FUNCTION 144f02330 FUN_144f02330 body=221 status=ok
// SIG undefined FUN_144f02330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f02330(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10) != 0)) {
      FUN_144efe9e0();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10) = 0;
    }
    return 1;
  }
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar1 = FUN_144efec20(&DAT_149c045c0);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        lVar2 = FUN_144efe9c0();
        *(longlong *)(lVar1 + 0x10) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_144f03d00(*(undefined8 *)(lVar1 + 0x10),param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144f02410 FUN_144f02410 body=221 status=ok
// SIG undefined FUN_144f02410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f02410(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) != 0)) {
      FUN_144efe950();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 0;
    }
    return 1;
  }
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar1 = FUN_144efec20(&DAT_149c045c0);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x18) == 0) {
        lVar2 = FUN_144efe930();
        *(longlong *)(lVar1 + 0x18) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_144f03d00(*(undefined8 *)(lVar1 + 0x18),param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144f024f0 FUN_144f024f0 body=49 status=ok
// SIG undefined FUN_144f024f0(void)

undefined8 FUN_144f024f0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x138) != 0) &&
     (puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x10), puVar1 != (undefined4 *)0x0)
     ) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10) + 8);
  }
  return 0;
}



// FUNCTION 144f02530 FUN_144f02530 body=49 status=ok
// SIG undefined FUN_144f02530(void)

undefined8 FUN_144f02530(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x138) != 0) &&
     (puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x18), puVar1 != (undefined4 *)0x0)
     ) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) + 8);
  }
  return 0;
}



// FUNCTION 144f02570 FUN_144f02570 body=17 status=ok
// SIG undefined FUN_144f02570(void)

undefined8 FUN_144f02570(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    return **(undefined8 **)(param_1 + 0x138);
  }
  return 0;
}



// FUNCTION 144f02590 FUN_144f02590 body=18 status=ok
// SIG undefined FUN_144f02590(void)

undefined8 FUN_144f02590(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8);
  }
  return 0;
}



// FUNCTION 144f025b0 FUN_144f025b0 body=29 status=ok
// SIG undefined FUN_144f025b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f025b0(void)

{
  FUN_144efec20(&DAT_149c04670);
  return;
}



// FUNCTION 144f025d0 FUN_144f025d0 body=29 status=ok
// SIG undefined FUN_144f025d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f025d0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c04670);
  return;
}



// FUNCTION 144f02600 FUN_144f02600 body=423 status=ok
// SIG undefined FUN_144f02600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144f02600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144f02627;
  lVar5 = 0;
  lVar4 = 0;
  iVar1 = FUN_144babbf0(param_3);
  lVar3 = FUN_144babce0(0,iVar1);
  if (lVar3 == 0) {
LAB_144f02749:
    FUN_144ba24f0(0x22,0x86,0x41,"crypto\\x509v3\\v3_crld.c",0x11d,uVar9);
LAB_144f02769:
    FUN_144ef47c0(lVar4);
    FUN_144ef4900(lVar5);
    FUN_144babe00(lVar3,FUN_144f02c80);
    lVar3 = 0;
  }
  else {
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = FUN_144babc00(param_3,iVar8);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar4 = FUN_145282850(param_2,*(undefined8 *)(lVar4 + 8));
          if (lVar4 != 0) {
            lVar5 = FUN_144f03280(param_2,lVar4);
            FUN_1452828b0(param_2,lVar4);
            if (lVar5 != 0) {
              FUN_144bac1c0(lVar3,lVar5);
              goto LAB_144f0272f;
            }
          }
          lVar5 = 0;
          lVar4 = 0;
          goto LAB_144f02769;
        }
        lVar4 = FUN_1452abf50(param_1,param_2,lVar4);
        if (lVar4 == 0) {
          lVar5 = 0;
          goto LAB_144f02769;
        }
        lVar5 = FUN_144ef48e0();
        if ((lVar5 == 0) || (iVar2 = FUN_144bac1c0(lVar5,lVar4), iVar2 == 0)) goto LAB_144f02749;
        lVar4 = 0;
        plVar6 = (longlong *)FUN_144efec20(&DAT_149c049e0);
        if (plVar6 == (longlong *)0x0) goto LAB_144f02749;
        FUN_144bac1c0(lVar3,plVar6);
        lVar7 = FUN_144efec20(&DAT_149c04950);
        *plVar6 = lVar7;
        if (lVar7 == 0) goto LAB_144f02749;
        *(longlong *)(lVar7 + 8) = lVar5;
        *(undefined4 *)*plVar6 = 0;
LAB_144f0272f:
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
  }
  return lVar3;
}



// FUNCTION 144f027b0 FUN_144f027b0 body=235 status=ok
// SIG undefined FUN_144f027b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f027b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      FUN_144b9ebc0(param_3,&DAT_149dfc0af);
      plVar2 = (longlong *)FUN_144babc00(param_2,iVar3);
      if (*plVar2 != 0) {
        FUN_144f03450(param_3,*plVar2,param_4);
      }
      if (plVar2[1] != 0) {
        FUN_144f031a0(param_3,"Reasons",plVar2[1],param_4);
      }
      if (plVar2[2] != 0) {
        FUN_144ec7640(param_3,"%*sCRL Issuer:\n",param_4,&DAT_149e02088);
        FUN_144f033a0(param_3,plVar2[2],param_4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 144f028a0 FUN_144f028a0 body=63 status=ok
// SIG undefined FUN_144f028a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f028a0(int param_1,longlong *param_2)

{
  if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  else if (param_1 == 3) {
    FUN_144eabc40(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  return 1;
}



// FUNCTION 144f02900 FUN_144f02900 body=286 status=ok
// SIG undefined FUN_144f02900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f02900(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    FUN_144f03450(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    FUN_144ec7640(param_3,"%*sOnly User Certificates\n",param_4,&DAT_149e02088);
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    FUN_144ec7640(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_149e02088);
  }
  if (0 < (int)param_2[3]) {
    FUN_144ec7640(param_3,"%*sIndirect CRL\n",param_4,&DAT_149e02088);
  }
  if (param_2[2] != 0) {
    FUN_144f031a0(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    FUN_144ec7640(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_149e02088);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((longlong)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((longlong)param_2 + 0x1c) < 1)))) {
    FUN_144ec7640(param_3,"%*s<EMPTY>\n",param_4,&DAT_149e02088);
  }
  return 1;
}



// FUNCTION 144f02a30 FUN_144f02a30 body=541 status=ok
// SIG undefined FUN_144f02a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144f02a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = FUN_144efec20(&DAT_149c04b20);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x22,0x9d,0x41,"crypto\\x509v3\\v3_crld.c",CONCAT44(uVar8,0x193));
LAB_144f02c37:
    FUN_144eff330(lVar3,&DAT_149c04b20);
    lVar3 = 0;
  }
  else {
    iVar7 = 0;
    iVar2 = FUN_144babbf0(param_3);
    if (0 < iVar2) {
LAB_144f02ab0:
      puVar4 = (undefined8 *)FUN_144babc00(param_3,iVar7);
      _Str1 = (char *)puVar4[1];
      uVar1 = puVar4[2];
      iVar2 = FUN_144f02e70(lVar3,param_2,puVar4);
      if (0 < iVar2) goto LAB_144f02ba9;
      if (-1 < iVar2) {
        iVar2 = strcmp(_Str1,"onlyuser");
        if (iVar2 == 0) {
          iVar2 = FUN_144ef5960(puVar4,lVar3 + 8);
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5 + 1;
            if (_Str1[lVar5] != (&DAT_149c04d3c)[lVar5]) {
              lVar5 = 0;
              goto LAB_144f02b40;
            }
            lVar5 = lVar6;
          } while (lVar6 != 7);
          iVar2 = FUN_144ef5960(puVar4,lVar3 + 0xc);
        }
        goto LAB_144f02ba1;
      }
      goto LAB_144f02c37;
    }
  }
  return lVar3;
  while (lVar5 = lVar6, lVar6 != 7) {
LAB_144f02b40:
    lVar6 = lVar5 + 1;
    if (_Str1[lVar5] != (&DAT_149c04de4)[lVar5]) {
      iVar2 = strcmp(_Str1,"indirectCRL");
      if (iVar2 == 0) {
        iVar2 = FUN_144ef5960(puVar4,lVar3 + 0x18);
        goto LAB_144f02ba1;
      }
      iVar2 = strcmp(_Str1,"onlysomereasons");
      if (iVar2 == 0) {
        iVar2 = FUN_144f03060(lVar3 + 0x10,uVar1);
        goto LAB_144f02ba1;
      }
      FUN_144ba24f0(0x22,0x9d,0x6a,"crypto\\x509v3\\v3_crld.c",0x18b);
      FUN_144ba2bd0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
      goto LAB_144f02c37;
    }
  }
  iVar2 = FUN_144ef5960(puVar4,lVar3 + 0x1c);
LAB_144f02ba1:
  if (iVar2 == 0) goto LAB_144f02c37;
LAB_144f02ba9:
  iVar7 = iVar7 + 1;
  iVar2 = FUN_144babbf0(param_3);
  if (iVar2 <= iVar7) {
    return lVar3;
  }
  goto LAB_144f02ab0;
}



// FUNCTION 144f02c60 FUN_144f02c60 body=29 status=ok
// SIG undefined FUN_144f02c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f02c60(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c04a30);
  return;
}



// FUNCTION 144f02c80 FUN_144f02c80 body=29 status=ok
// SIG undefined FUN_144f02c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f02c80(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c049e0);
  return;
}



// FUNCTION 144f02ca0 FUN_144f02ca0 body=29 status=ok
// SIG undefined FUN_144f02ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f02ca0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c04b20);
  return;
}



// FUNCTION 144f02cc0 FUN_144f02cc0 body=231 status=ok
// SIG undefined FUN_144f02cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f02cc0(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 2);
  lVar3 = FUN_144eabba0(param_2);
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar2 = FUN_144babbf0(uVar1);
  if (0 < iVar2) {
    do {
      uVar4 = FUN_144babc00(uVar1,iVar5);
      iVar2 = FUN_144ef3d50(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar5 == 0);
      if (iVar2 == 0) goto LAB_144f02d64;
      iVar5 = iVar5 + 1;
      iVar2 = FUN_144babbf0(uVar1);
    } while (iVar5 < iVar2);
  }
  iVar2 = FUN_144eabc80(*(undefined8 *)(param_1 + 4),0);
  if (-1 < iVar2) {
    return 1;
  }
LAB_144f02d64:
  FUN_144eabc40(*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  return 0;
}



// FUNCTION 144f02db0 FUN_144f02db0 body=189 status=ok
// SIG undefined FUN_144f02db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f02db0(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144f02dc5;
  if (*param_2 == '@') {
    lVar1 = FUN_145282850(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_144ef6060(param_2);
  }
  if (lVar1 == 0) {
    FUN_144ba24f0(0x22,0x9c,0x96,"crypto\\x509v3\\v3_crld.c",0x37,uVar2);
    return 0;
  }
  uVar2 = FUN_1452abbf0(0,param_1,lVar1);
  if (*param_2 == '@') {
    FUN_1452828b0(param_1,lVar1);
  }
  else {
    FUN_144babe00(lVar1,FUN_144ef58f0);
  }
  return uVar2;
}



// FUNCTION 144f02e70 FUN_144f02e70 body=492 status=ok
// SIG undefined FUN_144f02e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f02e70(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144f02e8e;
  lVar2 = 0;
  uVar6 = 0;
  iVar1 = strncmp(*(char **)(param_3 + 8),"fullname",9);
  if (iVar1 == 0) {
    lVar2 = FUN_144f02db0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar2 == 0) goto LAB_144f02ef5;
LAB_144f02ecb:
    if (*param_1 == 0) {
      puVar5 = (undefined4 *)FUN_144efec20(&DAT_149c04950);
      *param_1 = (longlong)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        if (lVar2 != 0) {
          *puVar5 = 0;
          *(longlong *)(*param_1 + 8) = lVar2;
          return 1;
        }
        *puVar5 = 1;
        *(undefined8 *)(*param_1 + 8) = uVar6;
        return 1;
      }
      goto LAB_144f02ef5;
    }
    uVar8 = 0x6e;
    uVar7 = 0xa0;
  }
  else {
    iVar1 = strcmp(*(char **)(param_3 + 8),"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_144eabc20();
    if (puVar3 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar4 = FUN_145282850(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) {
      FUN_144ba24f0(0x22,0x9e,0x96,"crypto\\x509v3\\v3_crld.c",0x56,uVar9);
      return 0xffffffff;
    }
    iVar1 = FUN_144ef6690(puVar3,lVar4,0x1001);
    FUN_1452828b0(param_2,lVar4);
    uVar6 = *puVar3;
    *puVar3 = 0;
    FUN_144eabc40(puVar3);
    if ((iVar1 == 0) || (iVar1 = FUN_144babbf0(uVar6), iVar1 < 1)) goto LAB_144f02ef5;
    iVar1 = FUN_144babbf0(uVar6);
    lVar4 = FUN_144babc00(uVar6,iVar1 + -1);
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_144f02ecb;
    uVar8 = 0x66;
    uVar7 = 0xa1;
  }
  FUN_144ba24f0(0x22,0x9e,uVar7,"crypto\\x509v3\\v3_crld.c",uVar8,uVar9);
LAB_144f02ef5:
  FUN_144babe00(lVar2,FUN_144ef47c0);
  FUN_144babe00(uVar6,FUN_144eabc00);
  return 0xffffffff;
}



// FUNCTION 144f03060 FUN_144f03060 body=309 status=ok
// SIG undefined FUN_144f03060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144f03060(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0;
  lVar5 = FUN_144ef6060(param_2);
  if (lVar5 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar4 = FUN_144babbf0(lVar5);
    iVar11 = iVar12;
    if (0 < iVar4) {
      do {
        lVar6 = FUN_144babc00(lVar5,iVar11);
        lVar6 = *(longlong *)(lVar6 + 8);
        if (*param_1 == 0) {
          lVar7 = FUN_144efe800();
          *param_1 = lVar7;
          if (lVar7 == 0) goto LAB_144f03179;
        }
        puVar9 = &DAT_149c04820;
        do {
          pcVar8 = *(char **)(puVar9 + 4);
          lVar7 = lVar6 - (longlong)pcVar8;
          do {
            cVar2 = *pcVar8;
            cVar3 = pcVar8[lVar7];
            if (cVar2 != cVar3) break;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) {
            iVar4 = FUN_1452a30a0(*param_1,*puVar9,1);
            puVar10 = puVar9;
            if (iVar4 == 0) goto LAB_144f03179;
            break;
          }
          puVar10 = puVar9 + 6;
          plVar1 = (longlong *)(puVar9 + 8);
          puVar9 = puVar10;
        } while (*plVar1 != 0);
        if (*(longlong *)(puVar10 + 2) == 0) goto LAB_144f03179;
        iVar11 = iVar11 + 1;
        iVar4 = FUN_144babbf0(lVar5);
      } while (iVar11 < iVar4);
    }
    iVar12 = 1;
  }
LAB_144f03179:
  FUN_144babe00(lVar5,FUN_144ef58f0);
  return iVar12;
}



// FUNCTION 144f031a0 FUN_144f031a0 body=209 status=ok
// SIG undefined FUN_144f031a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f031a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  FUN_144ec7640(param_1,"%*s%s:\n%*s",param_4,&DAT_149e02088,param_2,param_4 + 2,&DAT_149e02088,
                0x144f031b5);
  ppuVar4 = &PTR_s_Unused_149c04828;
  do {
    iVar2 = FUN_1452a31e0(param_3,*(undefined4 *)(ppuVar4 + -1));
    if (iVar2 != 0) {
      if (bVar1) {
        bVar1 = false;
      }
      else {
        FUN_144b9ebc0(param_1,&DAT_149dfd133);
      }
      FUN_144b9ebc0(param_1,*ppuVar4);
    }
    ppuVar4 = ppuVar4 + 3;
  } while (*ppuVar4 != (undefined *)0x0);
  pcVar3 = "\n";
  if (bVar1) {
    pcVar3 = "<EMPTY>\n";
  }
  FUN_144b9ebc0(param_1,pcVar3);
  return 1;
}



// FUNCTION 144f03280 FUN_144f03280 body=287 status=ok
// SIG undefined FUN_144f03280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144f03280(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = FUN_144efec20(&DAT_149c049e0);
  if (lVar2 == 0) {
LAB_144f03375:
    FUN_144eff330(lVar2,&DAT_149c049e0);
    lVar2 = 0;
  }
  else {
    iVar6 = 0;
    iVar1 = FUN_144babbf0(param_2);
    if (0 < iVar1) {
      do {
        lVar3 = FUN_144babc00(param_2,iVar6);
        iVar1 = FUN_144f02e70(lVar2,param_1,lVar3);
        if (iVar1 < 1) {
          if (iVar1 < 0) goto LAB_144f03375;
          lVar4 = 0;
          do {
            lVar5 = lVar4 + 1;
            if ((*(char **)(lVar3 + 8))[lVar4] != "reasons"[lVar4]) {
              iVar1 = strcmp(*(char **)(lVar3 + 8),"CRLissuer");
              if (iVar1 != 0) goto LAB_144f0335e;
              lVar3 = FUN_144f02db0(param_1,*(undefined8 *)(lVar3 + 0x10));
              *(longlong *)(lVar2 + 0x10) = lVar3;
              bVar7 = lVar3 == 0;
              goto LAB_144f0335c;
            }
            lVar4 = lVar5;
          } while (lVar5 != 8);
          iVar1 = FUN_144f03060(lVar2 + 8,*(undefined8 *)(lVar3 + 0x10));
          bVar7 = iVar1 == 0;
LAB_144f0335c:
          if (bVar7) goto LAB_144f03375;
        }
LAB_144f0335e:
        iVar6 = iVar6 + 1;
        iVar1 = FUN_144babbf0(param_2);
      } while (iVar6 < iVar1);
    }
  }
  return lVar2;
}



// FUNCTION 144f033a0 FUN_144f033a0 body=166 status=ok
// SIG undefined FUN_144f033a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f033a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      FUN_144ec7640(param_1,&DAT_149c02f70,param_3 + 2,&DAT_149e02088);
      uVar2 = FUN_144babc00(param_2,iVar3);
      FUN_1452ab980(param_1,uVar2);
      FUN_144b9ebc0(param_1,&DAT_149dfc0af);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 144f03450 FUN_144f03450 body=166 status=ok
// SIG undefined FUN_144f03450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f03450(undefined8 param_1,int *param_2,ulonglong param_3)

{
  undefined8 local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x144f03465;
  if (*param_2 == 0) {
    FUN_144ec7640(param_1,"%*sFull Name:\n");
    FUN_144f033a0(param_1,*(undefined8 *)(param_2 + 2),param_3 & 0xffffffff);
  }
  else {
    local_38[0] = *(undefined8 *)(param_2 + 2);
    FUN_144ec7640(param_1,"%*sRelative Name:\n%*s",param_3,&DAT_149e02088,(int)param_3 + 2,
                  &DAT_149e02088);
    FUN_14526c5b0(param_1,local_38,0,0x82031f);
    FUN_144b9ebc0(param_1,&DAT_149dfc0af);
  }
  return 1;
}



// FUNCTION 144f03500 FUN_144f03500 body=54 status=ok
// SIG undefined FUN_144f03500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f03500(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x144f0350c;
  local_20 = param_2;
  uVar1 = FUN_144bac1a0(*(undefined8 *)(param_1 + 8),local_28);
  FUN_144babc00(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}



// FUNCTION 144f03540 FUN_144f03540 body=73 status=ok
// SIG undefined FUN_144f03540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f03540(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1452aab20(*param_1);
    FUN_144babe00(param_1[1],FUN_1452aab20);
    FUN_144ea6530(param_1,"crypto\\x509v3\\pcy_cache.c",0xb8);
  }
  return;
}



// FUNCTION 144f03590 FUN_144f03590 body=86 status=ok
// SIG undefined FUN_144f03590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f03590(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    FUN_144e98620(*(undefined8 *)(param_1 + 0x140));
    FUN_144f03820(param_1);
    FUN_144e98640(*(undefined8 *)(param_1 + 0x140));
    return *(undefined8 *)(param_1 + 0xf0);
  }
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 144f035f0 FUN_144f035f0 body=36 status=ok
// SIG undefined FUN_144f035f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f035f0(longlong *param_1,longlong *param_2)

{
  FUN_14526beb0(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8));
  return;
}



// FUNCTION 144f03620 FUN_144f03620 body=61 status=ok
// SIG undefined FUN_144f03620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f03620(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 4) == 0x102) {
      return 0;
    }
    uVar1 = FUN_144ef1170(param_2);
    *param_1 = uVar1;
  }
  return 1;
}



// FUNCTION 144f03660 FUN_144f03660 body=433 status=ok
// SIG undefined FUN_144f03660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144f03660(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  iVar7 = 0;
  lVar5 = 0;
  iVar3 = FUN_144babbf0(param_2);
  iVar2 = 0;
  if (0 < iVar3) {
    lVar5 = FUN_144babc60(FUN_144f035f0);
    plVar1[1] = lVar5;
    if (lVar5 == 0) {
      uVar9 = 0x26;
LAB_144f036d2:
      FUN_144ba24f0(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",uVar9);
      goto LAB_144f0377b;
    }
    iVar8 = 0;
    if (0 < iVar3) {
      do {
        uVar6 = FUN_144babc00(param_2,iVar8);
        lVar5 = FUN_1452aa9c0(uVar6,0,param_3);
        if (lVar5 == 0) {
          uVar9 = 0x2d;
          goto LAB_144f036d2;
        }
        iVar4 = FUN_144ea8fa0(*(undefined8 *)(lVar5 + 8));
        if (iVar4 == 0x2ea) {
          if (*plVar1 != 0) {
LAB_144f037f1:
            *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
            iVar2 = -1;
            goto LAB_144f03773;
          }
          *plVar1 = lVar5;
        }
        else {
          iVar4 = FUN_144bac1a0(plVar1[1],lVar5);
          if (-1 < iVar4) goto LAB_144f037f1;
          iVar4 = FUN_144bac1c0(plVar1[1],lVar5);
          if (iVar4 == 0) {
            FUN_144ba24f0(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",0x3d);
            goto LAB_144f03773;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
    }
    lVar5 = 0;
    iVar2 = 1;
  }
LAB_144f03773:
  iVar7 = iVar2;
  FUN_1452aab20(lVar5);
LAB_144f0377b:
  FUN_144babe00(param_2,FUN_1452b0c00);
  if (iVar7 < 1) {
    FUN_144babe00(plVar1[1],FUN_1452aab20);
    plVar1[1] = 0;
  }
  return iVar7;
}



// FUNCTION 144f03820 FUN_144f03820 body=505 status=ok
// SIG undefined FUN_144f03820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f03820(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_res8 [2];
  longlong lVar7;
  
  lVar7 = 0;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    return 1;
  }
  puVar2 = (undefined8 *)FUN_144ea64e0(0x20,"crypto\\x509v3\\pcy_cache.c");
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x22,0xaa,0x41,"crypto\\x509v3\\pcy_cache.c",0x5e);
    return 0;
  }
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  *(undefined8 **)(param_1 + 0xf0) = puVar2;
  plVar3 = (longlong *)FUN_144eac5d0(param_1,0x191,local_res8,0);
  lVar4 = lVar6;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = lVar7;
    if (local_res8[0] == -1) {
LAB_144f0392f:
      lVar4 = FUN_144eac5d0(param_1,0x59,local_res8);
      if (lVar4 == 0) {
        lVar4 = lVar7;
        if (local_res8[0] == -1) {
          return 1;
        }
      }
      else {
        uVar5 = FUN_144f03660(param_1,lVar4,local_res8[0]);
        local_res8[0] = (int)uVar5;
        if (local_res8[0] < 1) {
          return uVar5;
        }
        lVar4 = FUN_144eac5d0(param_1,0x2eb,local_res8,0);
        if (lVar4 == 0) {
          lVar4 = lVar7;
          if (local_res8[0] == -1) {
LAB_144f039aa:
            lVar4 = FUN_144eac5d0(param_1,0x2ec,local_res8,0);
            if (lVar4 == 0) {
              if (local_res8[0] == -1) goto LAB_144f039e9;
            }
            else {
              iVar1 = FUN_144f03620(puVar2 + 2,lVar4);
              if (iVar1 != 0) goto LAB_144f039e9;
            }
          }
        }
        else {
          local_res8[0] = FUN_1452b1850(param_1,lVar4);
          lVar4 = lVar6;
          if (0 < local_res8[0]) goto LAB_144f039aa;
        }
      }
    }
  }
  else if ((((*plVar3 != 0) || (plVar3[1] != 0)) &&
           (iVar1 = FUN_144f03620((longlong)puVar2 + 0x14), iVar1 != 0)) &&
          (iVar1 = FUN_144f03620(puVar2 + 3,plVar3[1]), iVar1 != 0)) goto LAB_144f0392f;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
LAB_144f039e9:
  FUN_1452b1830(plVar3);
  FUN_144efe870(lVar4);
  return 1;
}



// FUNCTION 144f03a20 FUN_144f03a20 body=90 status=ok
// SIG undefined FUN_144f03a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144f03a20(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  return lVar1;
}



// FUNCTION 144f03a80 FUN_144f03a80 body=100 status=ok
// SIG undefined FUN_144f03a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f03a80(longlong param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0x10) == 0) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x163);
    }
    if ((uVar1 & 0x80) == 0) {
      FUN_144ea6530(param_1,"crypto\\asn1\\asn1_lib.c",0x165);
    }
  }
  return;
}



// FUNCTION 144f03af0 FUN_144f03af0 body=59 status=ok
// SIG undefined FUN_144f03af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f03af0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) & 0x10) == 0)) {
      FUN_14259f0c0(*(longlong *)(param_1 + 2),(longlong)*param_1);
    }
    FUN_144f03a80(param_1);
  }
  return;
}



// FUNCTION 144f03b30 FUN_144f03b30 body=98 status=ok
// SIG undefined FUN_144f03b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f03b30(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = param_2[1];
    iVar1 = FUN_144f03d00(param_1,*(undefined8 *)(param_2 + 2),*param_2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x80;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2[4] & 0xffffff7f;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144f03ba0 FUN_144f03ba0 body=169 status=ok
// SIG undefined FUN_144f03ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144f03ba0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144f03bac;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_144ea6670(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar2 == 0) {
    FUN_144ba24f0(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar2 + 4) = 4;
  iVar1 = FUN_144f03b30(lVar2,param_1);
  if (iVar1 == 0) {
    FUN_144f03a80(lVar2);
    return 0;
  }
  return lVar2;
}



// FUNCTION 144f03c50 FUN_144f03c50 body=92 status=ok
// SIG undefined FUN_144f03c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144f03c50(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144f03c5c;
  lVar1 = FUN_144ea6670(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = param_1;
  return lVar1;
}



// FUNCTION 144f03cb0 FUN_144f03cb0 body=74 status=ok
// SIG undefined FUN_144f03cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144f03cb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = iVar2 - *param_2;
  if (iVar1 == 0) {
    if ((iVar2 != 0) &&
       (iVar2 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)iVar2), iVar2 != 0)
       ) {
      return iVar2;
    }
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}



// FUNCTION 144f03d00 FUN_144f03d00 body=274 status=ok
// SIG undefined FUN_144f03d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f03d00(int *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined8 uVar3;
  
  uVar3 = 0x144f03d15;
  if (param_3 < 0) {
    if (param_2 == (void *)0x0) {
      return 0;
    }
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
  }
  else {
    _Size = (ulonglong)param_3;
  }
  if (_Size < 0x7fffffff) {
    if (((ulonglong)(longlong)*param_1 <= _Size) || (*(longlong *)(param_1 + 2) == 0)) {
      uVar1 = *(undefined8 *)(param_1 + 2);
      lVar2 = FUN_144ea6570(uVar1,_Size + 1,"crypto\\asn1\\asn1_lib.c",299);
      *(longlong *)(param_1 + 2) = lVar2;
      if (lVar2 == 0) {
        FUN_144ba24f0(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x12e,uVar3);
        *(undefined8 *)(param_1 + 2) = uVar1;
        return 0;
      }
    }
    *param_1 = (int)_Size;
    if (param_2 != (void *)0x0) {
      memcpy(*(void **)(param_1 + 2),param_2,_Size);
      *(undefined1 *)(_Size + *(longlong *)(param_1 + 2)) = 0;
    }
    return 1;
  }
  FUN_144ba24f0(0xd,0,0xdf,"crypto\\asn1\\asn1_lib.c",0x122,0x144f03d15);
  return 0;
}



// FUNCTION 144f03e20 FUN_144f03e20 body=77 status=ok
// SIG undefined FUN_144f03e20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f03e20(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144ea6530(*(undefined8 *)(param_1 + 2),"crypto\\asn1\\asn1_lib.c",0x147);
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}



// FUNCTION 144f03e70 FUN_144f03e70 body=3 status=ok
// SIG undefined FUN_144f03e70(void)

undefined4 FUN_144f03e70(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144f03e80 FUN_144f03e80 body=4 status=ok
// SIG undefined FUN_144f03e80(void)

undefined4 FUN_144f03e80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 144f03e90 FUN_144f03e90 body=5 status=ok
// SIG undefined FUN_144f03e90(void)

undefined8 FUN_144f03e90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144f03ea0 FUN_144f03ea0 body=473 status=ok
// SIG undefined FUN_144f03ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144f03ea0(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_5 != 0) {
    bVar1 = *(byte *)*param_1;
    iVar9 = param_5 + -1;
    uVar6 = bVar1 & 0x20;
    uVar3 = bVar1 & 0x1f;
    uVar8 = 0;
    pbVar5 = (byte *)*param_1 + 1;
    if (uVar3 == 0x1f) {
      if (iVar9 == 0) goto LAB_144f03fec;
      uVar3 = 0;
      bVar2 = *pbVar5;
      while ((char)bVar2 < '\0') {
        pbVar5 = pbVar5 + 1;
        uVar3 = bVar2 & 0x7f | uVar3 << 7;
        iVar9 = iVar9 + -1;
        if ((iVar9 == 0) || (0xffffff < (int)uVar3)) goto LAB_144f03fec;
        bVar2 = *pbVar5;
      }
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar3 = bVar2 & 0x7f | uVar3 << 7;
      iVar9 = iVar9 + -1;
    }
    if (iVar9 != 0) {
      *param_3 = uVar3;
      *param_4 = bVar1 & 0xc0;
      if (0 < iVar9) {
        bVar1 = *pbVar5;
        if (bVar1 == 0x80) {
          pbVar5 = pbVar5 + 1;
          uVar3 = uVar8;
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          uVar3 = bVar1 & 0x7f;
          pbVar5 = pbVar5 + 1;
          if ((char)bVar1 < '\0') {
            if (iVar9 + -1 < (int)(uVar3 + 1)) goto LAB_144f03fec;
            uVar4 = uVar3;
            if ((bVar1 & 0x7f) != 0) {
              do {
                uVar4 = uVar3;
                if (*pbVar5 != 0) break;
                pbVar5 = pbVar5 + 1;
                uVar3 = uVar3 - 1;
                uVar4 = uVar3;
              } while (0 < (int)uVar3);
            }
            if (4 < (int)uVar4) goto LAB_144f03fec;
            uVar3 = 0;
            uVar7 = 0;
            if (0 < (int)uVar4) {
              do {
                bVar1 = *pbVar5;
                uVar4 = uVar4 - 1;
                pbVar5 = pbVar5 + 1;
                uVar3 = uVar8 << 8 | (uint)bVar1;
                uVar8 = uVar3;
              } while (0 < (int)uVar4);
              uVar7 = 0;
              if (0x7fffffff < uVar3) goto LAB_144f03fec;
            }
          }
        }
        *param_2 = uVar3;
        if ((uVar7 == 0) || ((char)uVar6 != '\0')) {
          if (((longlong)param_5 - (longlong)pbVar5) + *param_1 < (longlong)(int)uVar3) {
            FUN_144ba24f0(0xd,0x72,0x9b,"crypto\\asn1\\asn1_lib.c",0x5b,0x144f03ebe);
            uVar6 = uVar6 | 0x80;
          }
          *param_1 = (longlong)pbVar5;
          return uVar7 | uVar6;
        }
      }
    }
  }
LAB_144f03fec:
  FUN_144ba24f0(0xd,0x72,0x7b,"crypto\\asn1\\asn1_lib.c",0x65,0x144f03ebe);
  return 0x80;
}



// FUNCTION 144f04080 FUN_144f04080 body=299 status=ok
// SIG undefined FUN_144f04080(void)

void FUN_144f04080(longlong *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)*param_1;
  bVar5 = -(param_2 != 0) & 0x20U | param_5 & 0xc0;
  iVar6 = 0;
  if (param_4 < 0x1f) {
    *pbVar7 = (byte)param_4 & 0x1f | bVar5;
    pbVar7 = pbVar7 + 1;
  }
  else {
    *pbVar7 = bVar5 | 0x1f;
    iVar1 = iVar6;
    for (iVar3 = param_4; 0 < iVar3; iVar3 = iVar3 >> 7) {
      iVar1 = iVar1 + 1;
    }
    lVar4 = (longlong)iVar1;
    if (0 < iVar1) {
      iVar3 = iVar1 + -1;
      pbVar2 = pbVar7 + (longlong)iVar1 + 1;
      do {
        pbVar2 = pbVar2 + -1;
        bVar5 = (byte)param_4 & 0x7f;
        iVar1 = iVar1 + -1;
        *pbVar2 = bVar5;
        if (iVar1 != iVar3) {
          *pbVar2 = bVar5 | 0x80;
        }
        param_4 = param_4 >> 7;
      } while (0 < iVar1);
    }
    pbVar7 = pbVar7 + lVar4 + 1;
  }
  if (param_2 == 2) {
    *pbVar7 = 0x80;
    *param_1 = (longlong)(pbVar7 + 1);
    return;
  }
  iVar1 = param_3;
  if (param_3 < 0x80) {
    *pbVar7 = (byte)param_3;
    *param_1 = (longlong)(pbVar7 + 1);
    return;
  }
  for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
    iVar6 = iVar6 + 1;
  }
  lVar4 = (longlong)iVar6;
  *pbVar7 = (byte)iVar6 | 0x80;
  if (0 < iVar6) {
    pbVar2 = pbVar7 + (longlong)iVar6 + 1;
    do {
      pbVar2 = pbVar2 + -1;
      iVar6 = iVar6 + -1;
      *pbVar2 = (byte)param_3;
      param_3 = param_3 >> 8;
    } while (0 < iVar6);
  }
  *param_1 = (longlong)(pbVar7 + lVar4 + 1);
  return;
}



// FUNCTION 144f041b0 FUN_144f041b0 body=21 status=ok
// SIG undefined FUN_144f041b0(void)

undefined8 FUN_144f041b0(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = 0;
  *param_1 = puVar1 + 1;
  return 2;
}



// FUNCTION 144f041d0 FUN_144f041d0 body=76 status=ok
// SIG undefined FUN_144f041d0(void)

int FUN_144f041d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (-1 < param_2) {
    if (0x1e < param_3) {
      do {
        param_3 = param_3 >> 7;
        iVar2 = iVar2 + 1;
      } while (0 < param_3);
    }
    if (param_1 == 2) {
      iVar2 = iVar2 + 3;
    }
    else {
      iVar2 = iVar2 + 1;
      iVar1 = param_2;
      if (0x7f < param_2) {
        for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (iVar2 < 0x7fffffff - param_2) {
      return iVar2 + param_2;
    }
  }
  return -1;
}



// FUNCTION 144f04220 FUN_144f04220 body=93 status=ok
// SIG undefined FUN_144f04220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f04220(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x163);
    }
    if (param_2 == 0) {
      FUN_144ea6530(param_1,"crypto\\asn1\\asn1_lib.c",0x165);
    }
  }
  return;
}



// FUNCTION 144f04280 FUN_144f04280 body=42 status=ok
// SIG undefined FUN_144f04280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144f04280(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba0570();
  *param_1 = lVar1;
  return lVar1 != 0;
}



// FUNCTION 144f042b0 FUN_144f042b0 body=42 status=ok
// SIG undefined FUN_144f042b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144f042b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba05d0();
  *param_1 = lVar1;
  return lVar1 != 0;
}



// FUNCTION 144f042e0 FUN_144f042e0 body=68 status=ok
// SIG undefined FUN_144f042e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f042e0(longlong *param_1,longlong param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
      FUN_144ba0630();
      *param_1 = 0;
      return;
    }
    FUN_144ba0cd0();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144f04330 FUN_144f04330 body=132 status=ok
// SIG undefined FUN_144f04330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144f04330(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return -1;
  }
  uVar2 = FUN_144ba03d0(lVar1);
  if (param_2 != (undefined1 *)0x0) {
    if ((uVar2 & 7) == 0) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    FUN_144ba08c0(lVar1,param_2);
  }
  iVar3 = FUN_144ba03d0(lVar1);
  return ((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) + (uint)((uVar2 & 7) == 0);
}



// FUNCTION 144f043c0 FUN_144f043c0 body=170 status=ok
// SIG undefined FUN_144f043c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f043c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_144ba0570();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_144ba0740(param_2,param_3,*param_1);
  if (lVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x20) & 1) != 0) {
        FUN_144ba0630();
        *param_1 = 0;
        return 0;
      }
      FUN_144ba0cd0();
      *param_1 = 0;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 144f04470 FUN_144f04470 body=143 status=ok
// SIG undefined FUN_144f04470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144f04470(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = FUN_144ba05d0();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_144f043c0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_144ba0220(*param_1,4);
  return iVar1;
}



// FUNCTION 144f04500 FUN_144f04500 body=66 status=ok
// SIG undefined FUN_144f04500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144f04500(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_14526b420(param_1,*param_2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_144b9ebc0(param_1,&DAT_149dfc0af);
  return (ulonglong)(0 < iVar1);
}



// FUNCTION 144f04570 FUN_144f04570 body=96 status=ok
// SIG undefined FUN_144f04570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f04570(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144f0457c;
  lVar1 = FUN_144ea6670(8,"crypto\\asn1\\x_int64.c",0x1f);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20,uVar2);
    return 0;
  }
  return 1;
}



// FUNCTION 144f045d0 FUN_144f045d0 body=50 status=ok
// SIG undefined FUN_144f045d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f045d0(undefined8 *param_1)

{
  FUN_144ea6530(*param_1,"crypto\\asn1\\x_int64.c",0x28);
  *param_1 = 0;
  return;
}



// FUNCTION 144f04620 FUN_144f04620 body=76 status=ok
// SIG undefined FUN_144f04620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f04620(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)*param_1;
  if (((*(uint *)(param_4 + 0x20) & 1) != 0) && (lVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x20) & 2) != 0) && (lVar1 < 0)) {
    lVar1 = -lVar1;
    uVar2 = 1;
  }
  uVar2 = FUN_144ef1630(param_2,lVar1,uVar2);
  return uVar2;
}



// FUNCTION 144f04670 FUN_144f04670 body=353 status=ok
// SIG undefined FUN_144f04670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f04670(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,longlong param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_18 [2];
  
  local_18[1] = 0x144f04685;
  local_18[0] = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*param_1 == 0) {
    lVar3 = FUN_144ea6670(8,"crypto\\asn1\\x_int64.c",0x1f);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      FUN_144ba24f0(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20);
      return 0;
    }
  }
  puVar1 = (ulonglong *)*param_1;
  if (param_3 != 0) {
    iVar2 = FUN_144ef14e0(local_18,local_res8,&local_res10,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_6 + 0x20) & 2;
    if ((uVar4 == 0) && (local_res8[0] != 0)) {
      FUN_144ba24f0(0xd,0x70,0xe2,"crypto\\asn1\\x_int64.c",0x61);
      return 0;
    }
    if (uVar4 == 0) {
      if (local_res8[0] != 0) goto LAB_144f0479e;
    }
    else {
      if (local_res8[0] != 0) {
LAB_144f0479e:
        *puVar1 = -local_18[0];
        return 1;
      }
      if (0x7fffffffffffffff < local_18[0]) {
        FUN_144ba24f0(0xd,0x70,0xdf,"crypto\\asn1\\x_int64.c",0x66);
        return 0;
      }
    }
  }
  *puVar1 = local_18[0];
  return 1;
}



// FUNCTION 144f047e0 FUN_144f047e0 body=49 status=ok
// SIG undefined FUN_144f047e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f047e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149c05148;
  if ((*(byte *)(param_3 + 0x20) & 2) == 0) {
    puVar1 = &DAT_149c05150;
  }
  FUN_144ec7640(param_1,puVar1,*(undefined8 *)*param_2);
  return;
}



// FUNCTION 144f04820 FUN_144f04820 body=96 status=ok
// SIG undefined FUN_144f04820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f04820(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144f0482c;
  lVar1 = FUN_144ea6670(4,"crypto\\asn1\\x_int64.c",0x7e);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0x8b,0x41,"crypto\\asn1\\x_int64.c",0x7f,uVar2);
    return 0;
  }
  return 1;
}



// FUNCTION 144f04880 FUN_144f04880 body=50 status=ok
// SIG undefined FUN_144f04880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f04880(undefined8 *param_1)

{
  FUN_144ea6530(*param_1,"crypto\\asn1\\x_int64.c",0x87);
  *param_1 = 0;
  return;
}



// FUNCTION 144f048d0 FUN_144f048d0 body=74 status=ok
// SIG undefined FUN_144f048d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144f048d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)*param_1;
  if (((*(uint *)(param_4 + 0x20) & 1) != 0) && (iVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x20) & 2) != 0) && (iVar1 < 0)) {
    iVar1 = -iVar1;
    uVar2 = 1;
  }
  uVar2 = FUN_144ef1630(param_2,iVar1,uVar2);
  return uVar2;
}



// FUNCTION 144f04920 FUN_144f04920 body=391 status=ok
// SIG undefined FUN_144f04920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f04920(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,longlong param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_18 [2];
  
  local_18[1] = 0x144f04935;
  local_18[0] = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*param_1 == 0) {
    lVar3 = FUN_144ea6670(8,"crypto\\asn1\\x_int64.c",0x1f);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      FUN_144ba24f0(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20);
      return 0;
    }
  }
  puVar1 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    iVar2 = FUN_144ef14e0(local_18,local_res8,&local_res10,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_6 + 0x20) & 2;
    if (uVar4 == 0) {
      if (local_res8[0] != 0) {
        FUN_144ba24f0(0xd,0x69,0xe2,"crypto\\asn1\\x_int64.c",200);
        return 0;
      }
    }
    else if (local_res8[0] != 0) {
      if (0x80000000 < local_18[0]) {
        FUN_144ba24f0(0xd,0x69,0xe0,"crypto\\asn1\\x_int64.c",0xcd);
        return 0;
      }
      local_18[0] = -local_18[0];
      goto LAB_144f04a49;
    }
    if (uVar4 != 0) {
      if (0x7fffffff < local_18[0]) goto LAB_144f04a7a;
      if (uVar4 != 0) goto LAB_144f04a49;
    }
    if (0xffffffff < local_18[0]) {
LAB_144f04a7a:
      FUN_144ba24f0(0xd,0x69,0xdf,"crypto\\asn1\\x_int64.c",0xd4);
      return 0;
    }
  }
LAB_144f04a49:
  *puVar1 = (int)local_18[0];
  return 1;
}



// FUNCTION 144f04ab0 FUN_144f04ab0 body=49 status=ok
// SIG undefined FUN_144f04ab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f04ab0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149c05158;
  if ((*(byte *)(param_3 + 0x20) & 2) == 0) {
    puVar1 = &DAT_149c0515c;
  }
  FUN_144ec7640(param_1,puVar1,*(undefined4 *)*param_2);
  return;
}



// FUNCTION 144f04b50 FUN_144f04b50 body=3605 status=ok
// SIG undefined FUN_144f04b50(void)

void FUN_144f04b50(longlong param_1,longlong param_2,char param_3,char param_4,char *param_5,
                  char *param_6,char *param_7,char param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  size_t sVar11;
  size_t _MaxCount;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  char *pcVar17;
  longlong lVar18;
  longlong *plVar19;
  char *pcVar20;
  char *_Str;
  char *pcVar21;
  uint unaff_R14D;
  uint uVar22;
  longlong *plVar23;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  uint local_118;
  char *local_110;
  char local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  __time64_t local_d8;
  char *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d0 = param_7;
  local_e8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  local_110 = param_6;
  local_108 = param_4;
  local_100 = param_1;
  local_f0 = param_2;
  local_d8 = _time64((__time64_t *)0x0);
  uVar22 = unaff_R14D & 0xffffff00;
  local_118 = uVar22;
  if ((0x31 < *(byte *)(param_1 + 0x1c8)) ||
     (plVar10 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1), plVar10 == (longlong *)0x0))
  goto LAB_144f04e5c;
  if (param_3 == '\0') {
    local_110 = (char *)0x0;
    iVar8 = strncmp(param_5,"#HttpOnly_",10);
    if (iVar8 == 0) {
      param_5 = param_5 + 10;
      *(undefined1 *)((longlong)plVar10 + 0x3b) = 1;
    }
    if (*param_5 != '#') {
      pcVar21 = strchr(param_5,0xd);
      if (pcVar21 != (char *)0x0) {
        *pcVar21 = '\0';
      }
      pcVar21 = strchr(param_5,10);
      if (pcVar21 != (char *)0x0) {
        *pcVar21 = '\0';
      }
      pcVar21 = (char *)FUN_1452b1a10(param_5,&DAT_149c052d4,&local_110);
      lVar13 = local_f0;
      iVar8 = 0;
      if (pcVar21 != (char *)0x0) {
LAB_144f053f0:
        cVar6 = (char)uVar22;
        if (cVar6 == '\0') {
          switch(iVar8) {
          case 0:
            if (*pcVar21 == '.') {
              pcVar21 = pcVar21 + 1;
            }
            lVar14 = (*(code *)PTR__strdup_14c6d9f38)(pcVar21);
            plVar10[5] = lVar14;
            if (lVar14 == 0) {
              uVar22 = 1;
            }
            break;
          case 1:
            iVar9 = FUN_144f19540(pcVar21,&DAT_149bcfe88);
            *(bool *)(plVar10 + 7) = iVar9 != 0;
            break;
          case 2:
            lVar14 = 0;
            do {
              lVar18 = lVar14 + 1;
              if ((&DAT_149bcfe88)[lVar14] != pcVar21[lVar14]) {
                lVar14 = 0;
                goto LAB_144f05470;
              }
              lVar14 = lVar18;
            } while (lVar18 != 5);
            goto LAB_144f05484;
          case 3:
            goto switchD_144f0540f_caseD_3;
          case 4:
            iVar9 = FUN_1452b1ac0(pcVar21,0,10,plVar10 + 6);
            if (iVar9 != 0) {
              uVar22 = 1;
            }
            break;
          case 5:
            lVar14 = (*(code *)PTR__strdup_14c6d9f38)(pcVar21);
            plVar10[1] = lVar14;
            if (lVar14 == 0) {
              uVar22 = 1;
            }
            else {
              iVar9 = FUN_144f195b0("__Secure-",lVar14,9);
              if (iVar9 == 0) {
                iVar9 = FUN_144f195b0("__Host-",plVar10[1],7);
                if (iVar9 != 0) {
                  *(byte *)(plVar10 + 8) = *(byte *)(plVar10 + 8) | 2;
                }
              }
              else {
                *(byte *)(plVar10 + 8) = *(byte *)(plVar10 + 8) | 1;
              }
            }
            break;
          case 6:
            lVar14 = (*(code *)PTR__strdup_14c6d9f38)(pcVar21);
            plVar10[2] = lVar14;
            uVar22 = uVar22 & 0xff;
            if (lVar14 == 0) {
              uVar22 = 1;
            }
          }
          goto switchD_144f0540f_default;
        }
        goto LAB_144f055ec;
      }
      goto LAB_144f04e52;
    }
  }
  else {
    uVar16 = 0xffffffffffffffff;
    do {
      uVar16 = uVar16 + 1;
    } while (param_5[uVar16] != '\0');
    if (uVar16 < 0x1389) {
LAB_144f04c36:
      cVar6 = *param_5;
      while ((cVar6 != '\0' && ((cVar6 == ' ' || (cVar6 == '\t'))))) {
        pcVar21 = param_5 + 1;
        param_5 = param_5 + 1;
        cVar6 = *pcVar21;
      }
      sVar11 = strcspn(param_5,";\t\r\n=");
      pcVar21 = param_5;
      if (sVar11 != 0) {
        bVar4 = false;
        pcVar20 = param_5 + sVar11;
        do {
          if ((param_5[sVar11 - 1] != ' ') && (param_5[sVar11 - 1] != '\t')) break;
          sVar11 = sVar11 - 1;
        } while (sVar11 != 0);
        if (*pcVar20 == '=') {
          _Str = pcVar20 + 1;
          _MaxCount = strcspn(_Str,";\r\n");
          bVar4 = true;
          pcVar21 = _Str + _MaxCount;
          for (; _MaxCount != 0; _MaxCount = _MaxCount - 1) {
            if ((pcVar20[_MaxCount] != ' ') && (pcVar20[_MaxCount] != '\t')) {
              if (_MaxCount != 0) goto LAB_144f04ce0;
              break;
            }
          }
          goto LAB_144f04cf5;
        }
        _Str = (char *)0x0;
        _MaxCount = 0;
        pcVar21 = pcVar20;
        goto LAB_144f04d2d;
      }
      goto LAB_144f05174;
    }
  }
  (*(code *)PTR_free_14c6d9f28)(plVar10);
  goto LAB_144f04e5c;
  while (lVar14 = lVar18, lVar18 != 6) {
LAB_144f05470:
    lVar18 = lVar14 + 1;
    if ("FALSE"[lVar14] != pcVar21[lVar14]) {
      lVar14 = (*(code *)PTR__strdup_14c6d9f38)(pcVar21);
      plVar10[3] = lVar14;
      if (lVar14 == 0) {
        uVar22 = 1;
      }
      else {
        lVar14 = FUN_144f068e0(lVar14);
        plVar10[4] = lVar14;
        if (lVar14 == 0) {
          uVar22 = 1;
        }
      }
      goto switchD_144f0540f_default;
    }
  }
LAB_144f05484:
  lVar14 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_149981d20);
  plVar10[3] = lVar14;
  lVar18 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_149981d20);
  uVar22 = (uint)(lVar14 == 0);
  plVar10[4] = lVar18;
  if (lVar18 == 0) {
    uVar22 = 1;
  }
  iVar8 = 3;
switchD_144f0540f_caseD_3:
  *(undefined1 *)((longlong)plVar10 + 0x39) = 0;
  iVar9 = FUN_144f19540(pcVar21,&DAT_149bcfe88);
  if (iVar9 != 0) {
    if ((param_8 == '\0') && (*(char *)(lVar13 + 0x208) == '\0')) {
      uVar22 = 1;
    }
    else {
      *(undefined1 *)((longlong)plVar10 + 0x39) = 1;
    }
  }
switchD_144f0540f_default:
  cVar6 = (char)uVar22;
  pcVar21 = (char *)FUN_1452b1a10(0,&DAT_149c052d4,&local_110);
  iVar8 = iVar8 + 1;
  if (pcVar21 == (char *)0x0) goto LAB_144f055ec;
  goto LAB_144f053f0;
LAB_144f055ec:
  plVar19 = local_e8;
  if (iVar8 == 6) {
    lVar13 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
    plVar10[2] = lVar13;
    if (lVar13 == 0) goto LAB_144f04e52;
    iVar8 = 7;
  }
  if ((cVar6 == '\0') && (iVar8 == 7)) {
LAB_144f0562a:
    lVar13 = local_f0;
    bVar4 = false;
    if (((((*(byte *)(plVar10 + 8) & 1) == 0) || (*(char *)((longlong)plVar10 + 0x39) != '\0')) &&
        (((*(byte *)(plVar10 + 8) & 2) == 0 ||
         ((((*(char *)((longlong)plVar10 + 0x39) != '\0' &&
            (pcVar21 = (char *)plVar10[3], pcVar21 != (char *)0x0)) && (*pcVar21 == '/')) &&
          ((pcVar21[1] == '\0' && ((char)plVar10[7] == '\0')))))))) &&
       ((*(char *)(local_f0 + 0x208) != '\0' ||
        ((*(char *)(local_f0 + 0x209) == '\0' || (plVar10[6] != 0)))))) {
      *(char *)((longlong)plVar10 + 0x3a) = *(char *)(local_f0 + 0x208);
      *(int *)(local_f0 + 0x204) = *(int *)(local_f0 + 0x204) + 1;
      *(undefined4 *)((longlong)plVar10 + 0x3c) = *(undefined4 *)(local_f0 + 0x204);
      if (local_108 == '\0') {
        FUN_144f06990(local_f0);
      }
      lVar14 = FUN_144f067f0(plVar10[5]);
      plVar1 = *(longlong **)(lVar14 * 8 + lVar13);
      if (plVar1 != (longlong *)0x0) {
        do {
          plVar19 = plVar1;
          iVar8 = FUN_144f19540(plVar19[1],plVar10[1]);
          if (iVar8 != 0) {
            lVar18 = plVar10[5];
            if (plVar19[5] == 0) {
              if (lVar18 == 0) goto LAB_144f0571a;
            }
            else if ((lVar18 != 0) && (iVar8 = FUN_144f19540(plVar19[5],lVar18), iVar8 != 0)) {
LAB_144f0571a:
              if (((plVar19[4] != 0) &&
                  (((plVar10[4] != 0 && (*(char *)((longlong)plVar19 + 0x39) != '\0')) &&
                   (*(char *)((longlong)plVar10 + 0x39) == '\0')))) && (param_8 == '\0')) {
                pcVar21 = strchr((char *)(plVar19[4] + 1),0x2f);
                lVar18 = plVar19[4];
                if (pcVar21 == (char *)0x0) {
                  lVar15 = -1;
                  do {
                    lVar15 = lVar15 + 1;
                  } while (*(char *)(lVar18 + lVar15) != '\0');
                }
                else {
                  lVar15 = (longlong)pcVar21 - lVar18;
                }
                iVar8 = FUN_144f195b0(lVar18,plVar10[4],lVar15);
                if (iVar8 != 0) {
                  FUN_144f14ad0(local_100,
                                "cookie \'%s\' for domain \'%s\' dropped, would overlay an existing cookie"
                                ,plVar10[1],plVar10[5]);
                  goto LAB_144f04e52;
                }
              }
            }
          }
          plVar23 = local_e0;
          plVar1 = local_f8;
          plVar5 = local_e0;
          if ((local_e0 == (longlong *)0x0) &&
             (iVar8 = FUN_144f19540(plVar19[1],plVar10[1]), plVar1 = local_f8, plVar5 = local_e0,
             iVar8 != 0)) {
            lVar18 = plVar10[5];
            if (plVar19[5] == 0) {
              if (lVar18 != 0) goto LAB_144f057d8;
              bVar4 = true;
            }
            else if (((lVar18 == 0) || (iVar8 = FUN_144f19540(plVar19[5],lVar18), iVar8 == 0)) ||
                    ((char)plVar19[7] != (char)plVar10[7])) {
LAB_144f057d8:
              plVar1 = local_f8;
              plVar5 = local_e0;
              if (!bVar4) goto LAB_144f05838;
            }
            else {
              bVar4 = true;
            }
            if ((((plVar19[4] == 0) || (plVar10[4] == 0)) || (iVar8 = FUN_144f19540(), iVar8 != 0))
               && ((plVar19[4] == 0) == (plVar10[4] == 0))) {
              plVar23 = plVar10;
              plVar1 = plVar19;
              plVar5 = plVar10;
              if ((*(char *)((longlong)plVar10 + 0x3a) == '\0') &&
                 (*(char *)((longlong)plVar19 + 0x3a) != '\0')) goto LAB_144f04e52;
            }
            else {
              bVar4 = false;
              plVar1 = local_f8;
              plVar5 = local_e0;
            }
          }
LAB_144f05838:
          local_e0 = plVar5;
          local_f8 = plVar1;
          plVar5 = local_f8;
          plVar1 = (longlong *)*plVar19;
        } while ((longlong *)*plVar19 != (longlong *)0x0);
        if (plVar23 != (longlong *)0x0) {
          *plVar23 = *local_f8;
          *(undefined4 *)((longlong)plVar23 + 0x3c) = *(undefined4 *)((longlong)local_f8 + 0x3c);
          (*(code *)PTR_free_14c6d9f28)(local_f8[1]);
          (*(code *)PTR_free_14c6d9f28)(plVar5[2]);
          (*(code *)PTR_free_14c6d9f28)(plVar5[5]);
          (*(code *)PTR_free_14c6d9f28)(plVar5[3]);
          (*(code *)PTR_free_14c6d9f28)(plVar5[4]);
          lVar18 = plVar23[1];
          *plVar5 = *plVar23;
          plVar5[1] = lVar18;
          lVar18 = plVar23[3];
          plVar5[2] = plVar23[2];
          plVar5[3] = lVar18;
          lVar18 = plVar23[5];
          plVar5[4] = plVar23[4];
          plVar5[5] = lVar18;
          uVar2 = *(undefined4 *)((longlong)plVar23 + 0x34);
          lVar18 = plVar23[7];
          uVar3 = *(undefined4 *)((longlong)plVar23 + 0x3c);
          *(int *)(plVar5 + 6) = (int)plVar23[6];
          *(undefined4 *)((longlong)plVar5 + 0x34) = uVar2;
          *(int *)(plVar5 + 7) = (int)lVar18;
          *(undefined4 *)((longlong)plVar5 + 0x3c) = uVar3;
          plVar5[8] = plVar23[8];
          (*(code *)PTR_free_14c6d9f28)(plVar23);
          plVar10 = plVar5;
        }
      }
      if (*(char *)(lVar13 + 0x208) != '\0') {
        pcVar21 = "Added";
        if (bVar4) {
          pcVar21 = "Replaced";
        }
        local_120 = plVar10[6];
        local_128 = plVar10[3];
        local_130 = plVar10[5];
        local_138 = plVar10[2];
        FUN_144f14ad0(local_100,"%s cookie %s=\"%s\" for domain %s, path %s, expire %I64d",pcVar21,
                      plVar10[1]);
      }
      if (!bVar4) {
        if (plVar19 == (longlong *)0x0) {
          *(longlong **)(lVar14 * 8 + lVar13) = plVar10;
        }
        else {
          *plVar19 = (longlong)plVar10;
        }
        *(int *)(lVar13 + 0x200) = *(int *)(lVar13 + 0x200) + 1;
      }
      lVar14 = plVar10[6];
      if ((lVar14 != 0) && (lVar14 < *(longlong *)(lVar13 + 0x1f8))) {
        *(longlong *)(lVar13 + 0x1f8) = lVar14;
      }
      goto LAB_144f04e5c;
    }
  }
  goto LAB_144f04e52;
  while( true ) {
    _Str = _Str + 1;
    _MaxCount = _MaxCount - 1;
    if (_MaxCount == 0) break;
LAB_144f04ce0:
    if ((*_Str != ' ') && (*_Str != '\t')) break;
  }
LAB_144f04cf5:
  pvVar12 = memchr(_Str,9,_MaxCount);
  if (pvVar12 != (void *)0x0) {
    FUN_144f06720(plVar10);
    FUN_144f14ad0(local_100,"cookie contains TAB, dropping");
    goto LAB_144f04e5c;
  }
LAB_144f04d2d:
  if (((0xffe < sVar11) || (0xffe < _MaxCount)) || (0x1000 < _MaxCount + sVar11)) {
    FUN_144f06720(plVar10);
    FUN_144f14ad0(local_100,"oversized cookie dropped, name/val %zu + %zu bytes",sVar11,_MaxCount);
    goto LAB_144f04e5c;
  }
  if (((6 < sVar11) && (*param_5 == '_')) && (param_5[1] == '_')) {
    iVar8 = FUN_144f195b0("__Secure-",param_5,9);
    if (iVar8 == 0) {
      iVar8 = FUN_144f195b0("__Host-",param_5,7);
      if (iVar8 != 0) {
        *(byte *)(plVar10 + 8) = *(byte *)(plVar10 + 8) | 2;
      }
    }
    else {
      *(byte *)(plVar10 + 8) = *(byte *)(plVar10 + 8) | 1;
    }
  }
  if (plVar10[1] == 0) {
    if (!bVar4) goto LAB_144f04e52;
    (*(code *)PTR_free_14c6d9f28)(0);
    lVar13 = FUN_144f13940(param_5,sVar11 + 1);
    plVar10[1] = lVar13;
    if (lVar13 != 0) {
      *(undefined1 *)(lVar13 + sVar11) = 0;
    }
    (*(code *)PTR_free_14c6d9f28)(plVar10[2]);
    lVar13 = FUN_144f13940(_Str,_MaxCount + 1);
    plVar10[2] = lVar13;
    if (lVar13 != 0) {
      *(undefined1 *)(lVar13 + _MaxCount) = 0;
    }
    if ((plVar10[1] == 0) || (pcVar20 = (char *)plVar10[2], pcVar20 == (char *)0x0))
    goto LAB_144f04e52;
    sVar11 = strcspn(pcVar20,
                     "\x01\x02\x03\x04\x05\x06\a\b\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x7f"
                    );
    if ((pcVar20[sVar11] != '\0') ||
       (pcVar20 = (char *)plVar10[1],
       sVar11 = strcspn(pcVar20,
                        "\x01\x02\x03\x04\x05\x06\a\b\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x7f"
                       ), param_6 = local_110, pcVar20[sVar11] != '\0')) {
      FUN_144f14ad0(local_100,"invalid octets in name/value, cookie dropped");
      goto LAB_144f04e52;
    }
    goto LAB_144f05174;
  }
  if (_MaxCount == 0) {
    if (sVar11 == 6) {
      iVar8 = FUN_144f195b0("secure",param_5,6);
      if (iVar8 == 0) {
LAB_144f04eec:
        param_6 = local_110;
        if (bVar4) goto LAB_144f04ef5;
      }
      else {
        if ((param_8 == '\0') && (*(char *)(local_f0 + 0x208) != '\0')) goto LAB_144f04e52;
        *(undefined1 *)((longlong)plVar10 + 0x39) = 1;
        param_6 = local_110;
      }
    }
    else {
      if ((sVar11 != 8) || (iVar8 = FUN_144f195b0("httponly",param_5,8), iVar8 == 0))
      goto LAB_144f04eec;
      *(undefined1 *)((longlong)plVar10 + 0x3b) = 1;
      param_6 = local_110;
    }
  }
  else {
LAB_144f04ef5:
    if (sVar11 == 4) {
      iVar8 = FUN_144f195b0(&DAT_149c05274,param_5,4);
      param_6 = local_110;
      if (iVar8 != 0) {
        (*(code *)PTR_free_14c6d9f28)(plVar10[3]);
        lVar13 = FUN_144f13940(_Str,_MaxCount + 1);
        plVar10[3] = lVar13;
        if (lVar13 != 0) {
          *(undefined1 *)(lVar13 + _MaxCount) = 0;
        }
        if (plVar10[3] == 0) goto LAB_144f04e52;
        (*(code *)PTR_free_14c6d9f28)(plVar10[4]);
        lVar13 = FUN_144f068e0(plVar10[3]);
        plVar10[4] = lVar13;
        param_6 = local_110;
        if (lVar13 == 0) goto LAB_144f04e52;
      }
    }
    else if (sVar11 == 6) {
      iVar8 = FUN_144f195b0("domain",param_5,6);
      param_6 = local_110;
      if ((iVar8 != 0) && (_MaxCount != 0)) {
        if (*_Str == '.') {
          _Str = _Str + 1;
          _MaxCount = _MaxCount - 1;
        }
        if (((_MaxCount == 9) && (iVar8 = FUN_144f195b0(_Str,"localhost",9), iVar8 != 0)) ||
           ((pvVar12 = memchr(_Str,0x2e,_MaxCount), pvVar12 != (void *)0x0 &&
            (&DAT_00000001 < _Str + (_MaxCount - (longlong)pvVar12))))) {
          param_6 = local_110;
          pcVar17 = _Str;
          if (local_110 != (char *)0x0) {
            pcVar17 = local_110;
          }
          cVar6 = FUN_144f1aef0(pcVar17);
          if (param_6 != (char *)0x0) goto LAB_144f05065;
LAB_144f05006:
          (*(code *)PTR_free_14c6d9f28)(plVar10[5]);
          lVar13 = FUN_144f13940(_Str,_MaxCount + 1);
          plVar10[5] = lVar13;
          if (lVar13 != 0) {
            *(undefined1 *)(_MaxCount + lVar13) = 0;
          }
          if (plVar10[5] == 0) goto LAB_144f04e52;
          uVar16 = (ulonglong)local_118;
          if (cVar6 == '\0') {
            *(undefined1 *)(plVar10 + 7) = 1;
          }
        }
        else {
          param_6 = ":";
          local_110 = ":";
          cVar6 = FUN_144f1aef0(&DAT_149c05284);
LAB_144f05065:
          if (cVar6 == '\0') {
            cVar7 = FUN_144f06770(_Str,_MaxCount,param_6);
            if (cVar7 != '\0') goto LAB_144f05006;
          }
          else {
            iVar8 = strncmp(_Str,param_6,_MaxCount);
            if (iVar8 == 0) {
              sVar11 = 0xffffffffffffffff;
              do {
                sVar11 = sVar11 + 1;
              } while (param_6[sVar11] != '\0');
              if (_MaxCount == sVar11) goto LAB_144f05006;
            }
          }
          uVar16 = CONCAT71((int7)((ulonglong)pcVar20 >> 8),1);
          local_118 = (uint)uVar16;
          FUN_144f14ad0(local_100,"skipped cookie with bad tailmatch domain: %s",_Str);
        }
        goto LAB_144f05179;
      }
    }
    else {
      param_6 = local_110;
      if ((sVar11 == 7) &&
         (iVar8 = FUN_144f195b0("version",param_5,7), param_6 = local_110, iVar8 == 0)) {
        iVar8 = FUN_144f195b0("max-age",param_5,7);
        if (iVar8 == 0) {
          iVar8 = FUN_144f195b0("expires",param_5,7);
          param_6 = local_110;
          if (((iVar8 != 0) && (plVar10[6] == 0)) && (_MaxCount < 0x80)) {
            memcpy(local_c8,_Str,_MaxCount);
            local_c8[_MaxCount] = 0;
            lVar13 = FUN_1452b1ce0(local_c8);
            plVar10[6] = lVar13;
            param_6 = local_110;
            if (lVar13 != 0) {
              uVar16 = (ulonglong)local_118;
              if (lVar13 < 0) {
                plVar10[6] = 0;
              }
              goto LAB_144f05179;
            }
            plVar10[6] = 1;
          }
        }
        else {
          if (*_Str == '\"') {
            _Str = _Str + 1;
          }
          iVar8 = FUN_1452b1ac0(_Str,0,10,plVar10 + 6);
          param_6 = local_110;
          if (iVar8 == 0) {
            lVar13 = plVar10[6];
            if (lVar13 != 0) {
              if (0x7fffffffffffffff - local_d8 < lVar13) goto LAB_144f05161;
              lVar13 = lVar13 + local_d8;
              goto LAB_144f0516b;
            }
LAB_144f0513d:
            plVar10[6] = 1;
          }
          else if (iVar8 == 1) {
LAB_144f05161:
            lVar13 = 0x7fffffffffffffff;
LAB_144f0516b:
            plVar10[6] = lVar13;
          }
          else if (iVar8 == 2) goto LAB_144f0513d;
        }
      }
    }
  }
LAB_144f05174:
  uVar16 = (ulonglong)local_118;
LAB_144f05179:
  cVar6 = *pcVar21;
  while ((cVar6 != '\0' && ((cVar6 == ' ' || (cVar6 == '\t'))))) {
    pcVar20 = pcVar21 + 1;
    pcVar21 = pcVar21 + 1;
    cVar6 = *pcVar20;
  }
  if (cVar6 != ';') goto LAB_144f0525f;
  param_5 = pcVar21 + 1;
  goto LAB_144f04c36;
LAB_144f0525f:
  if ((char)uVar16 == '\0') {
    if ((plVar10[5] == 0) && (param_6 != (char *)0x0)) {
      lVar13 = (*(code *)PTR__strdup_14c6d9f38)(param_6);
      plVar10[5] = lVar13;
      if (lVar13 == 0) goto LAB_144f04e52;
    }
    pcVar21 = local_d0;
    if ((plVar10[3] == 0) && (local_d0 != (char *)0x0)) {
      pcVar20 = strchr(local_d0,0x3f);
      if (pcVar20 == (char *)0x0) {
        pcVar20 = strrchr(pcVar21,0x2f);
      }
      else {
        pcVar20 = (char *)FUN_1452b1c70(pcVar21,0x2f,(longlong)pcVar20 - (longlong)pcVar21);
      }
      if (pcVar20 != (char *)0x0) {
        pvVar12 = (void *)(*(code *)PTR_malloc_14c6d9f20)(pcVar20 + (2 - (longlong)pcVar21));
        plVar10[3] = (longlong)pvVar12;
        if (pvVar12 != (void *)0x0) {
          memcpy(pvVar12,pcVar21,(size_t)(pcVar20 + (1 - (longlong)pcVar21)));
          pcVar20[plVar10[3] + (1 - (longlong)pcVar21)] = '\0';
          lVar13 = FUN_144f068e0(plVar10[3]);
          plVar10[4] = lVar13;
          if (lVar13 != 0) goto LAB_144f05322;
        }
        goto LAB_144f04e52;
      }
    }
LAB_144f05322:
    if (plVar10[1] != 0) {
      *(char *)(local_100 + 0x1c8) = *(char *)(local_100 + 0x1c8) + '\x01';
      plVar19 = local_e8;
      goto LAB_144f0562a;
    }
  }
LAB_144f04e52:
  FUN_144f06720(plVar10);
LAB_144f04e5c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
}



// FUNCTION 144f059a0 FUN_144f059a0 body=1089 status=ok
// SIG undefined FUN_144f059a0(void)

undefined8 *
FUN_144f059a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,char param_5
             )

{
  char *_Str1;
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char *_Str;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *_Base;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  size_t _NumOfElements;
  longlong *plVar12;
  
  _NumOfElements = 0;
  lVar5 = FUN_144f067f0(param_3);
  if ((param_2 != 0) && (*(longlong *)(param_2 + lVar5 * 8) != 0)) {
    FUN_144f06990(param_2);
    cVar2 = FUN_144f1aef0(param_3);
    plVar12 = *(longlong **)(param_2 + lVar5 * 8);
    puVar11 = (undefined8 *)0x0;
    if (plVar12 == (longlong *)0x0) {
      return (undefined8 *)0x0;
    }
    do {
      puVar7 = puVar11;
      if ((*(char *)((longlong)plVar12 + 0x39) != '\0') && (param_5 == '\0')) goto LAB_144f05c66;
      lVar5 = plVar12[5];
      if (lVar5 != 0) {
        if ((char)plVar12[7] != '\0') {
          if (cVar2 == '\0') {
            lVar8 = -1;
            do {
              lVar8 = lVar8 + 1;
            } while (*(char *)(lVar5 + lVar8) != '\0');
            cVar3 = FUN_144f06770(lVar5,lVar8,param_3);
            if (cVar3 != '\0') goto LAB_144f05a7a;
          }
          if (((char)plVar12[7] != '\0') && (cVar2 == '\0')) goto LAB_144f05c66;
        }
        iVar4 = FUN_144f19540(param_3,plVar12[5]);
        if (iVar4 == 0) goto LAB_144f05c66;
      }
LAB_144f05a7a:
      _Str1 = (char *)plVar12[4];
      if (_Str1 == (char *)0x0) {
LAB_144f05b7f:
        puVar7 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(0x48);
        if (puVar7 == (undefined8 *)0x0) goto joined_r0x000144f05cc8;
        if (plVar12[5] != 0) {
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)();
          puVar7[5] = lVar5;
          if (lVar5 != 0) goto LAB_144f05bb5;
LAB_144f05c8a:
          (*(code *)PTR_free_14c6d9f28)(puVar7[5]);
          (*(code *)PTR_free_14c6d9f28)(puVar7[3]);
          (*(code *)PTR_free_14c6d9f28)(puVar7[4]);
          (*(code *)PTR_free_14c6d9f28)(puVar7[1]);
          (*(code *)PTR_free_14c6d9f28)(puVar7[2]);
          (*(code *)PTR_free_14c6d9f28)(puVar7);
          goto joined_r0x000144f05cc8;
        }
LAB_144f05bb5:
        if (plVar12[3] != 0) {
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)();
          puVar7[3] = lVar5;
          if (lVar5 == 0) goto LAB_144f05c8a;
        }
        if (plVar12[4] != 0) {
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)();
          puVar7[4] = lVar5;
          if (lVar5 == 0) goto LAB_144f05c8a;
        }
        if (plVar12[1] != 0) {
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)();
          puVar7[1] = lVar5;
          if (lVar5 == 0) goto LAB_144f05c8a;
        }
        if (plVar12[2] != 0) {
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)();
          puVar7[2] = lVar5;
          if (lVar5 == 0) goto LAB_144f05c8a;
        }
        _NumOfElements = _NumOfElements + 1;
        puVar7[6] = plVar12[6];
        *(char *)(puVar7 + 7) = (char)plVar12[7];
        *(undefined1 *)((longlong)puVar7 + 0x39) = *(undefined1 *)((longlong)plVar12 + 0x39);
        *(undefined1 *)((longlong)puVar7 + 0x3a) = *(undefined1 *)((longlong)plVar12 + 0x3a);
        *(undefined1 *)((longlong)puVar7 + 0x3b) = *(undefined1 *)((longlong)plVar12 + 0x3b);
        *(undefined4 *)((longlong)puVar7 + 0x3c) = *(undefined4 *)((longlong)plVar12 + 0x3c);
        *puVar7 = puVar11;
        if (0x95 < _NumOfElements) {
          FUN_144f14ad0(param_1,"Included max number of cookies (%zu) in request!",_NumOfElements);
          goto LAB_144f05d47;
        }
      }
      else {
        uVar10 = 0xffffffffffffffff;
        do {
          uVar10 = uVar10 + 1;
        } while (_Str1[uVar10] != '\0');
        if (uVar10 == 1) goto LAB_144f05b7f;
        _Str = (char *)(*(code *)PTR__strdup_14c6d9f38)(param_4);
        if (_Str != (char *)0x0) {
          pcVar6 = strchr(_Str,0x3f);
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
          }
          lVar5 = -1;
          do {
            lVar5 = lVar5 + 1;
          } while (_Str[lVar5] != '\0');
          if ((lVar5 == 0) || (*_Str != '/')) {
            (*(code *)PTR_free_14c6d9f28)(_Str);
            _Str = (char *)FUN_144f13940(&DAT_149981d20,2);
            if (_Str == (char *)0x0) goto LAB_144f05c66;
            _Str[1] = '\0';
          }
          uVar9 = 0xffffffffffffffff;
          do {
            uVar9 = uVar9 + 1;
          } while (_Str[uVar9] != '\0');
          if (uVar9 < uVar10) {
            (*(code *)PTR_free_14c6d9f28)(_Str);
          }
          else {
            iVar4 = strncmp(_Str1,_Str,uVar10);
            if (iVar4 == 0) {
              if ((uVar10 == uVar9) || (_Str[uVar10] == '/')) {
                (*(code *)PTR_free_14c6d9f28)(_Str);
                goto LAB_144f05b7f;
              }
              (*(code *)PTR_free_14c6d9f28)(_Str);
            }
            else {
              (*(code *)PTR_free_14c6d9f28)(_Str);
            }
          }
        }
      }
LAB_144f05c66:
      plVar12 = (longlong *)*plVar12;
      puVar11 = puVar7;
    } while (plVar12 != (longlong *)0x0);
    if (_NumOfElements == 0) {
      return puVar7;
    }
LAB_144f05d47:
    _Base = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(_NumOfElements * 8);
    puVar1 = _Base;
    puVar11 = puVar7;
    if (_Base != (undefined8 *)0x0) {
      for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        *puVar1 = puVar7;
        puVar1 = puVar1 + 1;
      }
      qsort(_Base,_NumOfElements,8,(_PtFuncCompare *)&LAB_144f06ab0);
      puVar11 = (undefined8 *)*_Base;
      uVar10 = 0;
      if (_NumOfElements != 1) {
        do {
          puVar7 = _Base + uVar10;
          lVar5 = uVar10 + 1;
          uVar10 = uVar10 + 1;
          *(undefined8 *)*puVar7 = _Base[lVar5];
        } while (uVar10 < _NumOfElements - 1);
      }
      *(undefined8 *)_Base[_NumOfElements - 1] = 0;
      (*(code *)PTR_free_14c6d9f28)(_Base);
      return puVar11;
    }
joined_r0x000144f05cc8:
    while (puVar11 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar11;
      (*(code *)PTR_free_14c6d9f28)(puVar11[5]);
      (*(code *)PTR_free_14c6d9f28)(puVar11[3]);
      (*(code *)PTR_free_14c6d9f28)(puVar11[4]);
      (*(code *)PTR_free_14c6d9f28)(puVar11[1]);
      (*(code *)PTR_free_14c6d9f28)(puVar11[2]);
      (*(code *)PTR_free_14c6d9f28)(puVar11);
      puVar11 = puVar7;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144f05df0 FUN_144f05df0 body=99 status=ok
// SIG undefined FUN_144f05df0(void)

void FUN_144f05df0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    (*(code *)PTR_free_14c6d9f28)(param_1[5]);
    (*(code *)PTR_free_14c6d9f28)(param_1[3]);
    (*(code *)PTR_free_14c6d9f28)(param_1[4]);
    (*(code *)PTR_free_14c6d9f28)(param_1[1]);
    (*(code *)PTR_free_14c6d9f28)(param_1[2]);
    (*(code *)PTR_free_14c6d9f28)(param_1);
    param_1 = puVar1;
  }
  return;
}



// FUNCTION 144f05e60 FUN_144f05e60 body=186 status=ok
// SIG undefined FUN_144f05e60(void)

void FUN_144f05e60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar3 = 0x3f;
    puVar4 = param_1;
    do {
      puVar2 = (undefined8 *)*puVar4;
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar2;
        (*(code *)PTR_free_14c6d9f28)(puVar2[5]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[3]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[4]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[2]);
        (*(code *)PTR_free_14c6d9f28)(puVar2);
        puVar2 = puVar1;
      }
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 144f05f20 FUN_144f05f20 body=249 status=ok
// SIG undefined FUN_144f05f20(void)

void FUN_144f05f20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_1 != (longlong *)0x0) {
    lVar7 = 0x3f;
    plVar8 = param_1;
    do {
      plVar3 = (longlong *)*plVar8;
      plVar4 = plVar3;
      plVar5 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        do {
          plVar1 = (longlong *)*plVar3;
          plVar6 = plVar3;
          if (plVar3[6] == 0) {
            plVar2 = plVar1;
            if (plVar4 != plVar3) {
              plVar2 = plVar4;
            }
            plVar6 = plVar1;
            if (plVar5 != plVar3) {
              *plVar5 = (longlong)plVar1;
              plVar6 = plVar5;
            }
            (*(code *)PTR_free_14c6d9f28)(plVar3[5]);
            (*(code *)PTR_free_14c6d9f28)(plVar3[3]);
            (*(code *)PTR_free_14c6d9f28)(plVar3[4]);
            (*(code *)PTR_free_14c6d9f28)(plVar3[1]);
            (*(code *)PTR_free_14c6d9f28)(plVar3[2]);
            (*(code *)PTR_free_14c6d9f28)(plVar3);
            *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
            plVar4 = plVar2;
          }
          plVar3 = plVar1;
          plVar5 = plVar6;
        } while (plVar1 != (longlong *)0x0);
        *plVar8 = (longlong)plVar4;
      }
      plVar8 = plVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144f06020 FUN_144f06020 body=183 status=ok
// SIG undefined FUN_144f06020(void)

void FUN_144f06020(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x748) == 0) {
    FUN_144bbeca0(param_1,2,2);
  }
  else {
    FUN_144bbeca0(param_1,2,2);
    iVar1 = FUN_144f06ca0(param_1,*(undefined8 *)(param_1 + 0xaf0),*(undefined8 *)(param_1 + 0x748))
    ;
    if (iVar1 != 0) {
      uVar2 = FUN_144bbdb50(iVar1);
      FUN_144f14ad0(param_1,"WARNING: failed to save cookies in %s: %s",
                    *(undefined8 *)(param_1 + 0x748),uVar2);
    }
  }
  if ((param_2 != '\0') &&
     ((*(longlong *)(param_1 + 0xe8) == 0 ||
      (*(longlong *)(param_1 + 0xaf0) != *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0xb8))))) {
    FUN_144f060e0(*(undefined8 *)(param_1 + 0xaf0));
    *(undefined8 *)(param_1 + 0xaf0) = 0;
  }
  FUN_144bbece0(param_1,2);
  return;
}



// FUNCTION 144f060e0 FUN_144f060e0 body=180 status=ok
// SIG undefined FUN_144f060e0(void)

void FUN_144f060e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar3 = 0x3f;
    puVar4 = param_1;
    do {
      puVar2 = (undefined8 *)*puVar4;
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar2;
        (*(code *)PTR_free_14c6d9f28)(puVar2[5]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[3]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[4]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
        (*(code *)PTR_free_14c6d9f28)(puVar2[2]);
        (*(code *)PTR_free_14c6d9f28)(puVar2);
        puVar2 = puVar1;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return;
}



// FUNCTION 144f061a0 FUN_144f061a0 body=526 status=ok
// SIG undefined FUN_144f061a0(void)

longlong FUN_144f061a0(longlong param_1,char *param_2,longlong param_3,undefined1 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  FILE *pFVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  FILE *_File;
  
  lVar4 = param_3;
  if (param_3 == 0) {
    lVar4 = (*(code *)PTR_calloc_14c6d9f40)(1,0x210);
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x1f8) = 0x7fffffffffffffff;
  }
  *(undefined1 *)(lVar4 + 0x209) = param_4;
  if (param_1 == 0) goto LAB_144f06385;
  pFVar5 = (FILE *)0x0;
  if (param_2 == (char *)0x0) {
LAB_144f06232:
    *(undefined1 *)(lVar4 + 0x208) = 0;
    _File = (FILE *)0x0;
    if (pFVar5 != (FILE *)0x0) {
LAB_144f06242:
      lVar6 = (*(code *)PTR_malloc_14c6d9f20)(5000);
      if (lVar6 == 0) {
        (*(code *)PTR_free_14c6d9f28)(0);
        if (param_3 == 0) {
          FUN_144f060e0(lVar4);
        }
        if (_File != (FILE *)0x0) {
          fclose(_File);
        }
        return 0;
      }
      lVar7 = FUN_1452b1ba0(lVar6,5000,pFVar5);
      while (lVar7 != 0) {
        uVar8 = 0;
        iVar3 = FUN_144f195b0(lVar6,"Set-Cookie:",0xb);
        lVar7 = lVar6;
        if (iVar3 != 0) {
          lVar7 = lVar6 + 0xb;
          uVar8 = 1;
          cVar2 = *(char *)(lVar6 + 0xb);
          while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
            pcVar1 = (char *)(lVar7 + 1);
            lVar7 = lVar7 + 1;
            cVar2 = *pcVar1;
          }
        }
        FUN_144f04b50(param_1,lVar4,uVar8,1,lVar7,0,0,1);
        lVar7 = FUN_1452b1ba0(lVar6,5000,pFVar5);
      }
      (*(code *)PTR_free_14c6d9f28)(lVar6);
      FUN_144f06990(lVar4);
      if (_File != (FILE *)0x0) {
        fclose(_File);
      }
    }
  }
  else {
    if ((*param_2 == '-') && (param_2[1] == '\0')) {
      pFVar5 = (FILE *)__acrt_iob_func(0);
      goto LAB_144f06232;
    }
    pFVar5 = fopen(param_2,"rb");
    if (pFVar5 != (FILE *)0x0) {
      *(undefined1 *)(lVar4 + 0x208) = 0;
      _File = pFVar5;
      goto LAB_144f06242;
    }
    FUN_144f14ad0(param_1,"WARNING: failed to open cookie file \"%s\"",param_2);
    *(undefined1 *)(lVar4 + 0x208) = 0;
  }
  *(undefined1 *)(param_1 + 0x13d1) = 1;
LAB_144f06385:
  *(undefined1 *)(lVar4 + 0x208) = 1;
  return lVar4;
}



// FUNCTION 144f063b0 FUN_144f063b0 body=225 status=ok
// SIG undefined FUN_144f063b0(void)

ulonglong FUN_144f063b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  FUN_144bbeca0(param_1,2,2);
  uVar5 = 0;
  uVar6 = uVar5;
  if ((*(longlong *)(param_1 + 0xaf0) != 0) &&
     (uVar7 = uVar5, *(int *)(*(longlong *)(param_1 + 0xaf0) + 0x200) != 0)) {
    do {
      for (puVar1 = *(undefined8 **)(uVar7 + *(longlong *)(param_1 + 0xaf0));
          puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
        uVar3 = uVar6;
        if (puVar1[5] != 0) {
          lVar2 = FUN_144f06bc0(puVar1);
          if (lVar2 != 0) {
            uVar3 = FUN_144bbee90(uVar6,lVar2);
            if (uVar3 != 0) goto LAB_144f06439;
            (*(code *)PTR_free_14c6d9f28)(lVar2);
          }
          FUN_144b472a0(uVar6);
          uVar6 = 0;
          goto LAB_144f0644f;
        }
LAB_144f06439:
        uVar6 = uVar3;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = uVar7 + 8;
    } while (uVar4 < 0x3f);
  }
LAB_144f0644f:
  FUN_144bbece0(param_1,2);
  return uVar6;
}



// FUNCTION 144f064a0 FUN_144f064a0 body=627 status=ok
// SIG undefined FUN_144f064a0(void)

void FUN_144f064a0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  FILE *pFVar6;
  longlong lVar7;
  FILE *_File;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(param_1 + 0x2c0);
  if (puVar10 != (undefined8 *)0x0) {
    FUN_144bbeca0(param_1,2,2);
    do {
      lVar8 = *(longlong *)(param_1 + 0xaf0);
      _File = (FILE *)0x0;
      uVar1 = *(undefined1 *)(param_1 + 0xab6);
      pcVar3 = (char *)*puVar10;
      lVar5 = lVar8;
      if (lVar8 == 0) {
        lVar5 = (*(code *)PTR_calloc_14c6d9f40)(1,0x210);
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x1f8) = 0x7fffffffffffffff;
          goto LAB_144f0652d;
        }
LAB_144f06598:
        FUN_144f14ad0(param_1,"ignoring failed cookie_init for %s",*puVar10);
      }
      else {
LAB_144f0652d:
        pFVar6 = (FILE *)0x0;
        *(undefined1 *)(lVar5 + 0x209) = uVar1;
        if (pcVar3 == (char *)0x0) {
LAB_144f06552:
          *(undefined1 *)(lVar5 + 0x208) = 0;
          if (pFVar6 != (FILE *)0x0) {
LAB_144f06562:
            lVar7 = (*(code *)PTR_malloc_14c6d9f20)(5000);
            if (lVar7 == 0) {
              (*(code *)PTR_free_14c6d9f28)(0);
              if (lVar8 == 0) {
                FUN_144f060e0(lVar5);
              }
              if (_File != (FILE *)0x0) {
                fclose(_File);
              }
              goto LAB_144f06598;
            }
            lVar8 = FUN_1452b1ba0(lVar7,5000,pFVar6);
            while (lVar8 != 0) {
              uVar9 = 0;
              iVar4 = FUN_144f195b0(lVar7,"Set-Cookie:",0xb);
              lVar8 = lVar7;
              if (iVar4 != 0) {
                lVar8 = lVar7 + 0xb;
                uVar9 = 1;
                cVar2 = *(char *)(lVar7 + 0xb);
                while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
                  pcVar3 = (char *)(lVar8 + 1);
                  lVar8 = lVar8 + 1;
                  cVar2 = *pcVar3;
                }
              }
              FUN_144f04b50(param_1,lVar5,uVar9,1,lVar8,0,0,1);
              lVar8 = FUN_1452b1ba0(lVar7,5000,pFVar6);
            }
            (*(code *)PTR_free_14c6d9f28)(lVar7);
            FUN_144f06990();
            if (_File != (FILE *)0x0) {
              fclose(_File);
            }
          }
        }
        else {
          if ((*pcVar3 == '-') && (pcVar3[1] == '\0')) {
            pFVar6 = (FILE *)__acrt_iob_func(0);
            goto LAB_144f06552;
          }
          _File = fopen(pcVar3,"rb");
          if (_File != (FILE *)0x0) {
            *(undefined1 *)(lVar5 + 0x208) = 0;
            pFVar6 = _File;
            goto LAB_144f06562;
          }
          FUN_144f14ad0(param_1,"WARNING: failed to open cookie file \"%s\"",pcVar3);
          *(undefined1 *)(lVar5 + 0x208) = 0;
        }
        *(undefined1 *)(param_1 + 0x13d1) = 1;
        *(undefined1 *)(lVar5 + 0x208) = 1;
        *(longlong *)(param_1 + 0xaf0) = lVar5;
      }
      puVar10 = (undefined8 *)puVar10[1];
    } while (puVar10 != (undefined8 *)0x0);
    FUN_144bbece0(param_1,2);
  }
  return;
}



// FUNCTION 144f06720 FUN_144f06720 body=74 status=ok
// SIG undefined FUN_144f06720(void)

void FUN_144f06720(longlong param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x18));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 8));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000144f06763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(param_1);
  return;
}



// FUNCTION 144f06770 FUN_144f06770 body=128 status=ok
// SIG undefined FUN_144f06770(void)

bool FUN_144f06770(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_3 + uVar2) != '\0');
  if (param_2 <= uVar2) {
    param_3 = (uVar2 - param_2) + param_3;
    iVar1 = FUN_144f195b0(param_1,param_3,param_2);
    if (iVar1 != 0) {
      if (uVar2 != param_2) {
        return *(char *)(param_3 + -1) == '.';
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 144f067f0 FUN_144f067f0 body=234 status=ok
// SIG undefined FUN_144f067f0(void)

longlong FUN_144f067f0(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  if ((param_1 != (undefined1 *)0x0) && (cVar2 = FUN_144f1aef0(), cVar2 == '\0')) {
    puVar4 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)0xffffffffffffffff;
    do {
      puVar5 = puVar5 + 1;
    } while (param_1[(longlong)puVar5] != '\0');
    lVar3 = FUN_1452b1c70(param_1,0x2e,puVar5);
    if ((lVar3 != 0) &&
       (puVar4 = (undefined1 *)FUN_1452b1c70(param_1,0x2e,lVar3 - (longlong)param_1),
       puVar4 != (undefined1 *)0x0)) {
      puVar4 = puVar4 + 1;
      puVar5 = param_1 + ((longlong)puVar5 - (longlong)puVar4);
    }
    if (puVar4 != (undefined1 *)0x0) {
      param_1 = puVar4;
    }
    puVar5 = param_1 + (longlong)puVar5;
    uVar6 = 0x1505;
    for (; param_1 < puVar5; param_1 = param_1 + 1) {
      cVar2 = FUN_144f19630(*param_1);
      uVar6 = uVar6 * 0x21 ^ (longlong)cVar2;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    lVar3 = SUB168(ZEXT816(0x410410410410411) * auVar1,8);
    return uVar6 + ((uVar6 - lVar3 >> 1) + lVar3 >> 5) * -0x3f;
  }
  return 0;
}



// FUNCTION 144f068e0 FUN_144f068e0 body=171 status=ok
// SIG undefined FUN_144f068e0(void)

char * FUN_144f068e0(void)

{
  char *_Dst;
  char *pcVar1;
  size_t _Size;
  size_t sVar2;
  
  _Dst = (char *)(*(code *)PTR__strdup_14c6d9f38)();
  if (_Dst == (char *)0x0) {
    return (char *)0x0;
  }
  _Size = 0xffffffffffffffff;
  do {
    sVar2 = _Size;
    _Size = sVar2 + 1;
  } while (_Dst[_Size] != '\0');
  if (*_Dst == '\"') {
    memmove(_Dst,_Dst + 1,_Size);
    _Size = sVar2;
  }
  if ((_Size != 0) && (_Dst[_Size - 1] == '\"')) {
    _Size = _Size - 1;
    _Dst[_Size] = '\0';
  }
  if (*_Dst == '/') {
    if ((_Size != 0) && (_Dst[_Size - 1] == '/')) {
      _Dst[_Size - 1] = '\0';
    }
  }
  else {
    (*(code *)PTR_free_14c6d9f28)(_Dst);
    pcVar1 = (char *)FUN_144f13940(&DAT_149981d20,2);
    _Dst = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      pcVar1[1] = '\0';
      return pcVar1;
    }
  }
  return _Dst;
}



// FUNCTION 144f06990 FUN_144f06990 body=283 status=ok
// SIG undefined FUN_144f06990(void)

void FUN_144f06990(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __time64_t _Var5;
  longlong lVar6;
  undefined8 *puVar7;
  
  _Var5 = _time64((__time64_t *)0x0);
  if (((longlong)param_1[0x3f] <= _Var5) || (param_1[0x3f] == 0x7fffffffffffffff)) {
    lVar6 = 0x3f;
    param_1[0x3f] = 0x7fffffffffffffff;
    puVar7 = param_1;
    do {
      puVar2 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)0x0;
      while (puVar3 = puVar4, puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
        lVar1 = puVar4[6];
        puVar2 = (undefined8 *)*puVar4;
        if (lVar1 != 0) {
          if (lVar1 < _Var5) {
            if (puVar3 == (undefined8 *)0x0) {
              *puVar7 = puVar2;
            }
            else {
              *puVar3 = puVar2;
            }
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
            (*(code *)PTR_free_14c6d9f28)(puVar4[5]);
            (*(code *)PTR_free_14c6d9f28)(puVar4[3]);
            (*(code *)PTR_free_14c6d9f28)(puVar4[4]);
            (*(code *)PTR_free_14c6d9f28)(puVar4[1]);
            (*(code *)PTR_free_14c6d9f28)(puVar4[2]);
            (*(code *)PTR_free_14c6d9f28)(puVar4);
            puVar4 = puVar3;
          }
          else if (lVar1 < (longlong)param_1[0x3f]) {
            param_1[0x3f] = lVar1;
          }
        }
      }
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144f06bc0 FUN_144f06bc0 body=211 status=ok
// SIG undefined FUN_144f06bc0(void)

void FUN_144f06bc0(longlong param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = "";
  puVar5 = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_1 + 0x10);
  }
  puVar2 = &DAT_149981d20;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
  }
  pcVar1 = *(char **)(param_1 + 0x28);
  pcVar3 = "unknown";
  if (pcVar1 != (char *)0x0) {
    pcVar3 = pcVar1;
  }
  if (((*(char *)(param_1 + 0x38) == '\0') || (pcVar1 == (char *)0x0)) ||
     (puVar4 = &DAT_149971530, *pcVar1 == '.')) {
    puVar4 = &DAT_14996de1b;
  }
  pcVar6 = "FALSE";
  pcVar1 = "FALSE";
  if (*(char *)(param_1 + 0x39) != '\0') {
    pcVar1 = "TRUE";
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    pcVar6 = "TRUE";
  }
  if (*(char *)(param_1 + 0x3b) != '\0') {
    pcVar7 = "#HttpOnly_";
  }
  FUN_144f2b8b0("%s%s%s\t%s\t%s\t%s\t%I64d\t%s\t%s",pcVar7,puVar4,pcVar3,pcVar6,puVar2,pcVar1,
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),puVar5);
  return;
}



// FUNCTION 144f06ca0 FUN_144f06ca0 body=1194 status=ok
// SIG undefined FUN_144f06ca0(void)

int FUN_144f06ca0(undefined8 param_1,longlong param_2,char *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  void *_Base;
  longlong lVar4;
  ulonglong uVar5;
  size_t _NumOfElements;
  size_t sVar6;
  FILE *local_res10;
  char *local_res20;
  
  sVar6 = 0;
  bVar2 = false;
  local_res10 = (FILE *)0x0;
  local_res20 = (char *)0x0;
  if (param_2 == 0) {
    return 0;
  }
  FUN_144f06990(param_2);
  if ((*param_3 == '-') && (param_3[1] == '\0')) {
    local_res10 = (FILE *)__acrt_iob_func(1);
    bVar2 = true;
LAB_144f06d33:
    fputs("# Netscape HTTP Cookie File\n# https://curl.se/docs/http-cookies.html\n# This file was generated by libcurl! Edit at your own risk.\n\n"
          ,local_res10);
    if (*(int *)(param_2 + 0x200) != 0) {
      _Base = (void *)(*(code *)PTR_calloc_14c6d9f40)(1,(longlong)*(int *)(param_2 + 0x200) << 3);
      uVar5 = sVar6;
      _NumOfElements = sVar6;
      if (_Base == (void *)0x0) {
LAB_144f070fd:
        iVar3 = 0x1b;
        goto LAB_144f07102;
      }
      do {
        iVar3 = (int)uVar5;
        for (puVar1 = *(undefined8 **)(param_2 + uVar5 * 8); puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 1) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 2) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 3) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 4) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 5) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 6) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 7) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 8) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 9) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 10) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0xb) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0xc) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0xd) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0xe) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0xf) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0x10) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0x11) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0x12) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0x13) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        for (puVar1 = *(undefined8 **)(param_2 + (ulonglong)(iVar3 + 0x14) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[5] != 0) {
            *(undefined8 **)((longlong)_Base + _NumOfElements * 8) = puVar1;
            _NumOfElements = _NumOfElements + 1;
          }
        }
        uVar5 = (ulonglong)(iVar3 + 0x15U);
      } while (iVar3 + 0x15U < 0x3f);
      qsort(_Base,_NumOfElements,8,(_PtFuncCompare *)&LAB_144f06ba0);
      if (_NumOfElements != 0) {
        do {
          lVar4 = FUN_144f06bc0(*(undefined8 *)((longlong)_Base + sVar6 * 8));
          if (lVar4 == 0) {
            (*(code *)PTR_free_14c6d9f28)(_Base);
            goto LAB_144f070fd;
          }
          FUN_144f2b7b0(local_res10,&DAT_14998fa7c,lVar4);
          (*(code *)PTR_free_14c6d9f28)(lVar4);
          sVar6 = (size_t)((int)sVar6 + 1);
        } while (sVar6 < _NumOfElements);
      }
      (*(code *)PTR_free_14c6d9f28)(_Base);
    }
    if (!bVar2) {
      fclose(local_res10);
      local_res10 = (FILE *)0x0;
      if ((local_res20 != (char *)0x0) && (iVar3 = FUN_1452b2410(local_res20,param_3), iVar3 != 0))
      {
        _unlink(local_res20);
        iVar3 = 0x17;
        goto LAB_144f07102;
      }
    }
    (*(code *)PTR_free_14c6d9f28)(local_res20);
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1452b2520(param_1,param_3,&local_res10,&local_res20);
    if (iVar3 == 0) goto LAB_144f06d33;
LAB_144f07102:
    if ((local_res10 != (FILE *)0x0) && (!bVar2)) {
      fclose(local_res10);
    }
    (*(code *)PTR_free_14c6d9f28)(local_res20);
  }
  return iVar3;
}



// FUNCTION 144f07150 FUN_144f07150 body=131 status=ok
// SIG undefined FUN_144f07150(void)

ulonglong * FUN_144f07150(ulonglong *param_1)

{
  DWORD DVar1;
  ulonglong uVar2;
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_14c7976d8 != '\0') {
    QueryPerformanceCounter(local_res8);
    uVar2 = local_res8[0].QuadPart / DAT_14c7976d0;
    *(int *)(param_1 + 1) =
         (int)(((local_res8[0].QuadPart % DAT_14c7976d0) * 1000000) / DAT_14c7976d0);
    *param_1 = uVar2;
    return param_1;
  }
  DVar1 = GetTickCount();
  *(DWORD *)(param_1 + 1) = (DVar1 + (int)((ulonglong)DVar1 / 1000) * -1000) * 1000;
  *param_1 = (ulonglong)DVar1 / 1000;
  return param_1;
}



// FUNCTION 144f071e0 FUN_144f071e0 body=94 status=ok
// SIG undefined FUN_144f071e0(void)

longlong FUN_144f071e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 - *param_2;
  if (0x20c49ba5e353f6 < lVar1) {
    return 0x7fffffffffffffff;
  }
  if (lVar1 < -0x20c49ba5e353f6) {
    return -0x8000000000000000;
  }
  return (longlong)(((int)param_1[1] - (int)param_2[1]) / 1000) + lVar1 * 1000;
}



// FUNCTION 144f07240 FUN_144f07240 body=100 status=ok
// SIG undefined FUN_144f07240(void)

longlong FUN_144f07240(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 - *param_2;
  if (0x20c49ba5e353f6 < lVar1) {
    return 0x7fffffffffffffff;
  }
  if (lVar1 < -0x20c49ba5e353f6) {
    return -0x8000000000000000;
  }
  return (longlong)((((int)param_1[1] - (int)param_2[1]) + 999) / 1000) + lVar1 * 1000;
}



// FUNCTION 144f072b0 FUN_144f072b0 body=80 status=ok
// SIG undefined FUN_144f072b0(void)

longlong FUN_144f072b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 - *param_2;
  if (0x8637bd05af5 < lVar1) {
    return 0x7fffffffffffffff;
  }
  if (lVar1 < -0x8637bd05af5) {
    return -0x8000000000000000;
  }
  return ((longlong)(int)param_1[1] - (longlong)(int)param_2[1]) + lVar1 * 1000000;
}



// FUNCTION 144f07300 FUN_144f07300 body=3 status=ok
// SIG undefined FUN_144f07300(void)

undefined8 FUN_144f07300(void)

{
  return 0;
}



// FUNCTION 144f07310 FUN_144f07310 body=3 status=ok
// SIG undefined FUN_144f07310(void)

void FUN_144f07310(void)

{
  return;
}



// FUNCTION 144f07320 FUN_144f07320 body=47 status=ok
// SIG undefined FUN_144f07320(void)

undefined8 FUN_144f07320(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  uVar2 = 0;
  *param_2 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  return uVar2;
}



// FUNCTION 144f07350 free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000144f07350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)();
  return;
}



// FUNCTION 144f07360 FUN_144f07360 body=47 status=ok
// SIG undefined FUN_144f07360(void)

undefined4 FUN_144f07360(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  *param_2 = lVar1;
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144f07390 FUN_144f07390 body=12 status=ok
// SIG undefined FUN_144f07390(void)

void FUN_144f07390(longlong param_1)

{
  FUN_144f077d0(param_1 + 0xe40);
  return;
}



// FUNCTION 144f073a0 FUN_144f073a0 body=67 status=ok
// SIG undefined FUN_144f073a0(void)

void FUN_144f073a0(longlong param_1)

{
  if (((*(longlong **)(param_1 + 0xe50) != (longlong *)0x0) &&
      (**(longlong **)(param_1 + 0xe50) != 0)) && (*(char *)(param_1 + 0xab9) != '\x01')) {
    FUN_1452b2ff0();
    *(undefined1 *)(param_1 + 0xe68) = 1;
  }
  FUN_144f077d0(param_1 + 0xe40);
  return;
}



// FUNCTION 144f073f0 FUN_144f073f0 body=179 status=ok
// SIG undefined FUN_144f073f0(void)

undefined8 FUN_144f073f0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  puVar1 = *(undefined4 **)(param_1 + 0xe58);
  lVar2 = *(longlong *)(param_1 + 0xe50);
  if (lVar2 != 0) {
    *param_2 = *(undefined8 *)(lVar2 + 0x38);
    *(longlong *)(lVar2 + 0x30) = param_1;
    return 1;
  }
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  puVar1 = (undefined4 *)FUN_144f07150(local_18);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  lVar2 = FUN_144f071e0(&local_28,&local_38);
  if (lVar2 < 3) {
    lVar3 = 0;
  }
  else if (lVar2 < 0x33) {
    lVar3 = lVar2 / 3;
  }
  else {
    lVar3 = 200;
    if (lVar2 < 0xfb) {
      lVar3 = 0x32;
    }
  }
  FUN_144bba820(param_1,lVar3,1);
  return 0;
}



// FUNCTION 144f074b0 FUN_144f074b0 body=342 status=ok
// SIG undefined FUN_144f074b0(void)

undefined4 FUN_144f074b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  lVar2 = *(longlong *)(param_1 + 0xe50);
  *param_2 = 0;
  if (lVar2 == 0) {
    uVar3 = 6;
  }
  else {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(lVar2 + 0x18));
    iVar1 = *(int *)(lVar2 + 0x20);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(lVar2 + 0x18));
    if (iVar1 == 0) {
      local_38 = *(undefined4 *)(param_1 + 0xb98);
      uStack_34 = *(undefined4 *)(param_1 + 0xb9c);
      uStack_30 = *(undefined4 *)(param_1 + 0xba0);
      uStack_2c = *(undefined4 *)(param_1 + 0xba4);
      puVar4 = (undefined4 *)FUN_144f07150(local_18);
      local_28 = *puVar4;
      uStack_24 = puVar4[1];
      uStack_20 = puVar4[2];
      uStack_1c = puVar4[3];
      lVar5 = FUN_144f071e0(&local_28,&local_38);
      uVar6 = *(uint *)(lVar2 + 8);
      if (lVar5 < 0) {
        lVar5 = 0;
      }
      if (uVar6 == 0) {
        *(undefined4 *)(lVar2 + 8) = 1;
        uVar6 = 1;
      }
      else {
        if (*(longlong *)(lVar2 + 0x10) <= lVar5) {
          uVar6 = uVar6 * 2;
          *(uint *)(lVar2 + 8) = uVar6;
        }
        if (0xfa < uVar6) {
          *(undefined4 *)(lVar2 + 8) = 0xfa;
          uVar6 = 0xfa;
        }
      }
      *(ulonglong *)(lVar2 + 0x10) = (ulonglong)uVar6 + lVar5;
      FUN_144bba820(param_1,(ulonglong)uVar6,1);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0xe50);
      FUN_1452b2ee0(param_1,*(undefined4 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
      *(undefined8 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(param_1 + 0xe48) == 0) {
        uVar3 = FUN_144f1c0a0(param_1);
        FUN_144f077d0(param_1 + 0xe40);
        return uVar3;
      }
      FUN_144f077d0(param_1 + 0xe40);
      *param_2 = *(undefined8 *)(param_1 + 0xe48);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144f07610 FUN_144f07610 body=187 status=ok
// SIG undefined FUN_144f07610(void)

undefined4 FUN_144f07610(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_1452b2ff0(*(undefined8 *)(param_1 + 0xe50));
  if ((iVar2 == 0) || (param_2 == (undefined8 *)0x0)) {
    *(undefined1 *)(param_1 + 0xe68) = 1;
    if (param_2 == (undefined8 *)0x0) goto LAB_144f07681;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xe50);
    uVar3 = FUN_1452b2ee0(param_1,*(undefined4 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0xe68) = 1;
  }
  *param_2 = *(undefined8 *)(param_1 + 0xe48);
LAB_144f07681:
  if (*(longlong *)(param_1 + 0xe48) == 0) {
    uVar3 = FUN_144f1c0a0(param_1);
  }
  FUN_144f077d0(param_1 + 0xe40);
  if (*(longlong *)(param_1 + 0xe48) == 0) {
    FUN_144f16220(*(undefined8 *)(param_1 + 0x20),1);
  }
  return uVar3;
}



// FUNCTION 144f076d0 FUN_144f076d0 body=243 status=ok
// SIG undefined FUN_144f076d0(void)

undefined8 FUN_144f076d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe58);
  *param_4 = 0;
  uVar7 = 2;
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x4d8) != '\x01') {
    cVar5 = FUN_144f1b4c0();
    if ((cVar5 != '\0') && (uVar7 = 0, *(char *)(*(longlong *)(param_1 + 0x20) + 0x4d8) == '\x02'))
    {
      uVar7 = 0x17;
    }
  }
  local_48 = (ulonglong)uVar7 << 0x20;
  local_38 = 0;
  uStack_30 = 0;
  uStack_40 = (ulonglong)((*(char *)(*(longlong *)(param_1 + 0x20) + 0x4d7) != '\x03') + 1);
  local_28 = 0;
  uStack_20 = 0;
  puVar6 = (undefined4 *)FUN_144f07150(local_58);
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *puVar1 = *puVar6;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  cVar5 = FUN_144f07890(param_1,param_2,param_3,&local_48);
  if (cVar5 == '\0') {
    FUN_144f14b70(param_1,"getaddrinfo() thread failed to start");
  }
  else {
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 144f077d0 FUN_144f077d0 body=185 status=ok
// SIG undefined FUN_144f077d0(void)

void FUN_144f077d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[7];
    lVar3 = plVar1[6];
    EnterCriticalSection((LPCRITICAL_SECTION)plVar1[3]);
    lVar4 = plVar1[4];
    *(undefined4 *)(plVar1 + 4) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)plVar1[3]);
    if ((int)lVar4 == 0) {
      CloseHandle((HANDLE)*plVar1);
    }
    else {
      if (*plVar1 != 0) {
        FUN_1452b2ff0(plVar1);
      }
      FUN_144f07b60(plVar1 + 3);
      (*(code *)PTR_free_14c6d9f28)(param_1[2]);
    }
    FUN_144bbae00(lVar3,lVar2);
    Ordinal_3(lVar2);
  }
  param_1[2] = 0;
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  return;
}



// FUNCTION 144f07890 FUN_144f07890 body=714 status=ok
// SIG undefined FUN_144f07890(void)

undefined8 FUN_144f07890(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  
  plVar6 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1,0x90);
  *(longlong **)(param_1 + 0xe50) = plVar6;
  iVar9 = 0xc;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xe60) = param_3;
    *(undefined1 *)(param_1 + 0xe68) = 0;
    *(undefined4 *)(param_1 + 0xe64) = 0;
    *(undefined8 *)(param_1 + 0xe48) = 0;
    *plVar6 = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = (longlong)plVar6;
    *(undefined4 *)((longlong)plVar6 + 0x24) = param_3;
    *(undefined4 *)(plVar6 + 4) = 1;
    lVar8 = param_4[1];
    plVar6[0xb] = *param_4;
    plVar6[0xc] = lVar8;
    uVar2 = *(undefined4 *)((longlong)param_4 + 0x14);
    lVar8 = param_4[3];
    uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
    *(int *)(plVar6 + 0xd) = (int)param_4[2];
    *(undefined4 *)((longlong)plVar6 + 0x6c) = uVar2;
    *(int *)(plVar6 + 0xe) = (int)lVar8;
    *(undefined4 *)((longlong)plVar6 + 0x74) = uVar3;
    uVar2 = *(undefined4 *)((longlong)param_4 + 0x24);
    lVar8 = param_4[5];
    uVar3 = *(undefined4 *)((longlong)param_4 + 0x2c);
    *(int *)(plVar6 + 0xf) = (int)param_4[4];
    *(undefined4 *)((longlong)plVar6 + 0x7c) = uVar2;
    *(int *)(plVar6 + 0x10) = (int)lVar8;
    *(undefined4 *)((longlong)plVar6 + 0x84) = uVar3;
    lpCriticalSection = (LPCRITICAL_SECTION)(*(code *)PTR_malloc_14c6d9f20)(0x28);
    plVar6[3] = (longlong)lpCriticalSection;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      InitializeCriticalSectionEx(lpCriticalSection,0,1);
      iVar5 = FUN_1452b2660(1,1,0,plVar6 + 7);
      if (iVar5 < 0) {
        plVar6[7] = -1;
        plVar6[8] = -1;
      }
      else {
        *(undefined4 *)(plVar6 + 9) = 0;
        lVar8 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
        plVar6[5] = lVar8;
        if (lVar8 != 0) {
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xe40));
          lVar8 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
          *(longlong *)(param_1 + 0xe40) = lVar8;
          iVar9 = 0xc;
          if (lVar8 != 0) {
            *(undefined4 *)(plVar6 + 4) = 0;
            lVar8 = FUN_1452b2fa0(FUN_144f07be0,plVar6 + 3);
            *plVar6 = lVar8;
            if (lVar8 != 0) {
              return 1;
            }
            *(undefined4 *)(plVar6 + 4) = 1;
            piVar7 = _errno();
            iVar9 = *piVar7;
          }
          plVar6 = *(longlong **)(param_1 + 0xe50);
          if (plVar6 != (longlong *)0x0) {
            lVar8 = plVar6[7];
            lVar1 = plVar6[6];
            EnterCriticalSection((LPCRITICAL_SECTION)plVar6[3]);
            lVar4 = plVar6[4];
            *(undefined4 *)(plVar6 + 4) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)plVar6[3]);
            if ((int)lVar4 == 0) {
              CloseHandle((HANDLE)*plVar6);
            }
            else {
              if (*plVar6 != 0) {
                FUN_1452b2ff0(plVar6);
              }
              FUN_144f07b60(plVar6 + 3);
              (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xe50));
            }
            FUN_144bbae00(lVar1,lVar8);
            Ordinal_3(lVar8);
          }
          *(undefined8 *)(param_1 + 0xe50) = 0;
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xe40));
          *(undefined8 *)(param_1 + 0xe40) = 0;
          goto LAB_144f07a2c;
        }
      }
    }
    if (plVar6[7] != -1) {
      Ordinal_3();
      plVar6[7] = -1;
    }
    if ((LPCRITICAL_SECTION)plVar6[3] != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)plVar6[3]);
      (*(code *)PTR_free_14c6d9f28)(plVar6[3]);
    }
    (*(code *)PTR_free_14c6d9f28)(plVar6[5]);
    if (plVar6[10] != 0) {
      FUN_1452b2970();
    }
    if (plVar6[8] != -1) {
      Ordinal_3();
    }
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    *(undefined8 *)(param_1 + 0xe50) = 0;
    (*(code *)PTR_free_14c6d9f28)(plVar6);
  }
LAB_144f07a2c:
  piVar7 = _errno();
  *piVar7 = iVar9;
  return 0;
}



// FUNCTION 144f07b60 FUN_144f07b60 body=114 status=ok
// SIG undefined FUN_144f07b60(void)

void FUN_144f07b60(undefined8 *param_1)

{
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
    (*(code *)PTR_free_14c6d9f28)(*param_1);
  }
  (*(code *)PTR_free_14c6d9f28)(param_1[2]);
  if (param_1[7] != 0) {
    FUN_1452b2970();
  }
  if (param_1[5] != -1) {
    Ordinal_3();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



// FUNCTION 144f07be0 FUN_144f07be0 body=247 status=ok
// SIG undefined FUN_144f07be0(void)

void FUN_144f07be0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_1[0xe];
  FUN_144f2b7e0(local_20,0xc,&DAT_1499c1968,*(undefined4 *)((longlong)param_1 + 0xc));
  iVar2 = FUN_1452b29a0(param_1[2],local_20,param_1 + 8,param_1 + 7);
  if (iVar2 != 0) {
    iVar3 = Ordinal_111();
    if (iVar3 == 0) {
      *(int *)(param_1 + 6) = iVar2;
    }
    else {
      iVar2 = Ordinal_111();
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      *(int *)(param_1 + 6) = iVar2;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  if (*(int *)(param_1 + 1) == 0) {
    if (param_1[5] != -1) {
      local_28[0] = 1;
      iVar2 = Ordinal_19(param_1[5],local_28,1);
      if (iVar2 < 0) {
        uVar4 = Ordinal_111();
        *(undefined4 *)(param_1 + 6) = uVar4;
      }
    }
    *(undefined4 *)(param_1 + 1) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    FUN_144f07b60(param_1);
    (*(code *)PTR_free_14c6d9f28)(uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144f07cf0 FUN_144f07cf0 body=18 status=ok
// SIG undefined FUN_144f07cf0(void)

void FUN_144f07cf0(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 144f07d10 FUN_144f07d10 body=37 status=ok
// SIG undefined FUN_144f07d10(void)

void FUN_144f07d10(undefined8 *param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 144f07d40 thunk_FUN_144f07eb0 body=5 status=ok
// SIG undefined thunk_FUN_144f07eb0(void)

undefined8 thunk_FUN_144f07eb0(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  lVar1 = lVar2 + param_3;
  uVar4 = param_1[3];
  uVar7 = lVar1 + 1;
  if (uVar4 < uVar7) {
LAB_144f07eed:
    (*(code *)PTR_free_14c6d9f28)(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    uVar5 = 0x1b;
  }
  else {
    uVar8 = uVar3;
    if (uVar3 == 0) {
      uVar8 = uVar4;
      if (uVar4 < 0x20) goto LAB_144f07f42;
      if (uVar7 < 0x20) {
        uVar7 = 0x20;
      }
LAB_144f07f47:
      lVar6 = (*(code *)PTR_realloc_14c6d9f30)(*param_1,uVar7);
      if (lVar6 == 0) goto LAB_144f07eed;
      *param_1 = lVar6;
      param_1[2] = uVar7;
    }
    else {
      for (; uVar8 < uVar7; uVar8 = uVar8 * 2) {
      }
      if (uVar4 < uVar8) {
        uVar8 = uVar4;
      }
LAB_144f07f42:
      uVar7 = uVar8;
      if (uVar8 != uVar3) goto LAB_144f07f47;
    }
    if (param_3 != 0) {
      memcpy((void *)(*param_1 + lVar2),param_2,param_3);
    }
    param_1[1] = lVar1;
    *(undefined1 *)(lVar1 + *param_1) = 0;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144f07d50 FUN_144f07d50 body=31 status=ok
// SIG undefined FUN_144f07d50(void)

void FUN_144f07d50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_144f07eb0();
  return;
}



// FUNCTION 144f07d70 FUN_144f07d70 body=41 status=ok
// SIG undefined FUN_144f07d70(void)

byte FUN_144f07d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  iVar1 = FUN_144f2b760(param_1,param_2,&local_res18);
  return -(iVar1 != 0) & 0x1b;
}



// FUNCTION 144f07da0 FUN_144f07da0 body=21 status=ok
// SIG undefined FUN_144f07da0(void)

byte FUN_144f07da0(void)

{
  int iVar1;
  
  iVar1 = FUN_144f2b760();
  return -(iVar1 != 0) & 0x1b;
}



// FUNCTION 144f07dc0 FUN_144f07dc0 body=22 status=ok
// SIG undefined FUN_144f07dc0(void)

void FUN_144f07dc0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    *(undefined1 *)*param_1 = 0;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 144f07de0 FUN_144f07de0 body=123 status=ok
// SIG undefined FUN_144f07de0(void)

undefined8 FUN_144f07de0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    return 0x2b;
  }
  if (param_2 != uVar1) {
    if (param_2 == 0) {
      if (uVar1 != 0) {
        *(undefined1 *)*param_1 = 0;
      }
      param_1[1] = 0;
      return 0;
    }
    memmove((void *)*param_1,(void *)(*param_1 + (uVar1 - param_2)),param_2);
    param_1[1] = param_2;
    *(undefined1 *)(param_2 + *param_1) = 0;
  }
  return 0;
}



// FUNCTION 144f07e60 FUN_144f07e60 body=26 status=ok
// SIG undefined FUN_144f07e60(void)

undefined8 FUN_144f07e60(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] < param_2) {
    return 0x2b;
  }
  param_1[1] = param_2;
  *(undefined1 *)(param_2 + *param_1) = 0;
  return 0;
}



// FUNCTION 144f07e80 FUN_144f07e80 body=4 status=ok
// SIG undefined FUN_144f07e80(void)

undefined8 FUN_144f07e80(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144f07e90 FUN_144f07e90 body=4 status=ok
// SIG undefined FUN_144f07e90(void)

undefined8 FUN_144f07e90(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144f07ea0 FUN_144f07ea0 body=5 status=ok
// SIG undefined FUN_144f07ea0(void)

undefined8 FUN_144f07ea0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144f07eb0 FUN_144f07eb0 body=235 status=ok
// SIG undefined FUN_144f07eb0(void)

undefined8 FUN_144f07eb0(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  lVar1 = lVar2 + param_3;
  uVar4 = param_1[3];
  uVar7 = lVar1 + 1;
  if (uVar4 < uVar7) {
LAB_144f07eed:
    (*(code *)PTR_free_14c6d9f28)(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    uVar5 = 0x1b;
  }
  else {
    uVar8 = uVar3;
    if (uVar3 == 0) {
      uVar8 = uVar4;
      if (uVar4 < 0x20) goto LAB_144f07f42;
      if (uVar7 < 0x20) {
        uVar7 = 0x20;
      }
LAB_144f07f47:
      lVar6 = (*(code *)PTR_realloc_14c6d9f30)(*param_1,uVar7);
      if (lVar6 == 0) goto LAB_144f07eed;
      *param_1 = lVar6;
      param_1[2] = uVar7;
    }
    else {
      for (; uVar8 < uVar7; uVar8 = uVar8 * 2) {
      }
      if (uVar4 < uVar8) {
        uVar8 = uVar4;
      }
LAB_144f07f42:
      uVar7 = uVar8;
      if (uVar8 != uVar3) goto LAB_144f07f47;
    }
    if (param_3 != 0) {
      memcpy((void *)(*param_1 + lVar2),param_2,param_3);
    }
    param_1[1] = lVar1;
    *(undefined1 *)(lVar1 + *param_1) = 0;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144f07fa0 FUN_144f07fa0 body=97 status=ok
// SIG undefined FUN_144f07fa0(void)

ulonglong FUN_144f07fa0(void *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  
  uVar1 = *(longlong *)(param_4 + 0xa8) - *(longlong *)(param_4 + 0xa0);
  if (param_2 == 0) {
    return 0xfffffffffffffffe;
  }
  if ((param_2 <= uVar1) || (param_2 = uVar1, uVar1 != 0)) {
    memcpy(param_1,(void *)(*(longlong *)(param_4 + 0xa0) + param_4 + 0xb0),param_2);
  }
  *(longlong *)(param_4 + 0xa0) = *(longlong *)(param_4 + 0xa0) + param_2;
  return param_2;
}



// FUNCTION 144f08090 FUN_144f08090 body=467 status=ok
// SIG undefined FUN_144f08090(void)

ulonglong FUN_144f08090(char *param_1,ulonglong param_2,char param_3,longlong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  ushort uVar5;
  uint3 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar1 = (ulonglong *)(param_4 + 0x98);
  uVar7 = 0;
  uVar8 = uVar7;
  if (*(ulonglong *)(param_4 + 0xa0) < *(ulonglong *)(param_4 + 0xa8)) {
    do {
      if (0x48 < *puVar1) {
        if (1 < param_2) {
          param_1[0] = '\r';
          param_1[1] = '\n';
          uVar8 = uVar8 + 2;
          param_1 = param_1 + 2;
          *puVar1 = 0;
          param_2 = param_2 - 2;
          goto LAB_144f080f4;
        }
LAB_144f081a7:
        if (uVar8 == 0) goto LAB_144f081c4;
        break;
      }
LAB_144f080f4:
      if (param_2 < 4) goto LAB_144f081a7;
      lVar4 = *(longlong *)(param_4 + 0xa0);
      if ((ulonglong)(*(longlong *)(param_4 + 0xa8) - lVar4) < 3) break;
      bVar2 = *(byte *)(lVar4 + 0x18 + (longlong)puVar1);
      *(longlong *)(param_4 + 0xa0) = lVar4 + 1;
      uVar8 = uVar8 + 4;
      uVar3 = *(undefined1 *)(lVar4 + 0x19 + (longlong)puVar1);
      param_2 = param_2 - 4;
      *(longlong *)(param_4 + 0xa0) = lVar4 + 2;
      uVar5 = CONCAT11(bVar2,uVar3);
      uVar3 = *(undefined1 *)(lVar4 + 0x1a + (longlong)puVar1);
      *(longlong *)(param_4 + 0xa0) = lVar4 + 3;
      uVar6 = CONCAT21(uVar5,uVar3);
      *param_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar2 >> 2];
      param_1[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [uVar5 >> 4 & 0x3f];
      param_1[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [uVar6 >> 6 & 0x3f];
      param_1[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6 & 0x3f];
      param_1 = param_1 + 4;
      *puVar1 = *puVar1 + 4;
    } while (*(ulonglong *)(param_4 + 0xa0) < *(ulonglong *)(param_4 + 0xa8));
  }
  if (param_3 != '\0') {
    if (param_2 < 4) {
      if (uVar8 == 0) {
LAB_144f081c4:
        uVar8 = 0xfffffffffffffffe;
      }
    }
    else {
      param_1[2] = '=';
      param_1[3] = '=';
      lVar4 = *(longlong *)(param_4 + 0xa0);
      if (*(longlong *)(param_4 + 0xa8) != lVar4) {
        if (*(longlong *)(param_4 + 0xa8) - lVar4 == 2) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + lVar4 + 0x19) << 8;
        }
        bVar2 = *(byte *)((longlong)puVar1 + lVar4 + 0x18);
        uVar7 = (ulonglong)bVar2 << 0x10 | uVar7;
        *param_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar2 >> 2];
        param_1[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [(uint)(uVar7 >> 0xc) & 0x3f];
        *(longlong *)(param_4 + 0xa0) = *(longlong *)(param_4 + 0xa0) + 1;
        if (*(longlong *)(param_4 + 0xa0) != *(longlong *)(param_4 + 0xa8)) {
          param_1[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                       [(uint)(uVar7 >> 6) & 0x3f];
          *(longlong *)(param_4 + 0xa0) = *(longlong *)(param_4 + 0xa0) + 1;
        }
        uVar8 = uVar8 + 4;
        *puVar1 = *puVar1 + 4;
      }
    }
  }
  return uVar8;
}



// FUNCTION 144f082d0 FUN_144f082d0 body=556 status=ok
// SIG undefined FUN_144f082d0(void)

longlong FUN_144f082d0(void *param_1,ulonglong param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong _Size;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte local_res8 [8];
  
  plVar1 = (longlong *)(param_4 + 0x98);
  lVar8 = 0;
  uVar7 = *(ulonglong *)(param_4 + 0xa0);
  uVar6 = *(ulonglong *)(param_4 + 0xa8);
  if (uVar7 < uVar6) {
    do {
      uVar3 = local_res8._0_4_;
      local_res8[0] = *(byte *)(uVar7 + 0x18 + (longlong)plVar1);
      _Size = 1;
      lVar4 = 1;
      cVar2 = (&DAT_149c055c0)[local_res8[0]];
      local_res8[1] = "0123456789ABCDEF"[(uint)((longlong)(char)local_res8[0] >> 4) & 0xf];
      local_res8[3] = SUB41(uVar3,3);
      local_res8[2] = "0123456789ABCDEF"[(int)(char)local_res8[0] & 0xf];
      lVar5 = 1;
      if (cVar2 == '\x01') goto LAB_144f0840b;
      if (cVar2 == '\x02') {
        if ((uVar6 <= uVar7 + 1) && (param_3 != '\0')) goto LAB_144f08401;
        lVar5 = lVar4;
        if (uVar6 < uVar7 + 3) {
          if (param_3 == '\0') {
            return lVar8;
          }
        }
        else if (((&DAT_149c055c0)[*(byte *)(uVar7 + 0x19 + (longlong)plVar1)] == '\x03') &&
                ((&DAT_149c055c0)[*(byte *)(uVar7 + 0x1a + (longlong)plVar1)] == '\x04'))
        goto LAB_144f08401;
      }
      else {
        if (cVar2 == '\x03') {
          if ((uVar6 <= uVar7) && (param_3 != '\0')) {
LAB_144f083b1:
            _Size = 2;
            local_res8[1] = 10;
            lVar5 = 2;
            goto LAB_144f0840b;
          }
          if (uVar6 < uVar7 + 2) {
            if (param_3 == '\0') {
              return lVar8;
            }
          }
          else if ((&DAT_149c055c0)[*(byte *)(uVar7 + 0x19 + (longlong)plVar1)] == '\x04')
          goto LAB_144f083b1;
        }
LAB_144f08401:
        local_res8[0] = 0x3d;
        _Size = 3;
        lVar5 = 1;
      }
LAB_144f0840b:
      if ((&stack0x00000007)[_Size] != '\n') {
        if (*plVar1 + _Size == 0x4c) {
          uVar7 = uVar7 + lVar5;
          if ((*(ulonglong *)(param_4 + 0xa8) <= uVar7) && (param_3 != '\0')) goto LAB_144f0846b;
          if (*(ulonglong *)(param_4 + 0xa8) < uVar7 + 2) {
            if (param_3 == '\0') {
              return lVar8;
            }
          }
          else if (((&DAT_149c055c0)[*(byte *)(uVar7 + 0x18 + (longlong)plVar1)] == '\x03') &&
                  ((&DAT_149c055c0)[*(byte *)(uVar7 + 0x19 + (longlong)plVar1)] == '\x04'))
          goto LAB_144f0846b;
        }
        else {
LAB_144f0846b:
          if (*plVar1 + _Size < 0x4d) goto LAB_144f08480;
        }
        local_res8[0] = 0x3d;
        local_res8[1] = 0xd;
        local_res8[2] = 10;
        local_res8[3] = 0;
        _Size = 3;
        lVar5 = 0;
      }
LAB_144f08480:
      if (param_2 < _Size) {
        if (lVar8 != 0) {
          return lVar8;
        }
        return -2;
      }
      memcpy(param_1,local_res8,_Size);
      *plVar1 = *plVar1 + _Size;
      lVar8 = lVar8 + _Size;
      lVar4 = *plVar1;
      param_1 = (void *)((longlong)param_1 + _Size);
      param_2 = param_2 - _Size;
      if ((&stack0x00000007)[_Size] == '\n') {
        lVar4 = 0;
      }
      uVar7 = *(longlong *)(param_4 + 0xa0) + lVar5;
      *(ulonglong *)(param_4 + 0xa0) = uVar7;
      *plVar1 = lVar4;
      uVar6 = *(ulonglong *)(param_4 + 0xa8);
    } while (uVar7 < uVar6);
  }
  return lVar8;
}



// FUNCTION 144f08510 FUN_144f08510 body=145 status=ok
// SIG undefined FUN_144f08510(void)

undefined8 * FUN_144f08510(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    builtin_strncpy((char *)(puVar2 + 3),"--------",8);
    builtin_strncpy((char *)(puVar2 + 4),"--------",8);
    builtin_strncpy((char *)(puVar2 + 5),"--------",8);
    iVar1 = FUN_1452b32b0(param_1,puVar2 + 6,0x17);
    if (iVar1 != 0) {
      (*(code *)PTR_free_14c6d9f28)(puVar2);
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
  }
  return puVar2;
}



// FUNCTION 144f085b0 FUN_144f085b0 body=180 status=ok
// SIG undefined FUN_144f085b0(void)

longlong * FUN_144f085b0(longlong param_1)

{
  longlong *plVar1;
  
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)(*(code *)PTR_malloc_14c6d9f20)(0x1b8);
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    plVar1[0xe] = 0;
    memset((void *)((longlong)plVar1 + 0x7c),0,0x134);
    plVar1[0x36] = 1;
    *(undefined4 *)(plVar1 + 0xf) = 0;
    plVar1[0x10] = 0;
    plVar1[0x11] = 0;
    *plVar1 = param_1;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      *(longlong **)(*(longlong *)(param_1 + 0x10) + 8) = plVar1;
      *(longlong **)(param_1 + 0x10) = plVar1;
      return plVar1;
    }
    *(longlong **)(param_1 + 8) = plVar1;
    *(longlong **)(param_1 + 0x10) = plVar1;
  }
  return plVar1;
}



// FUNCTION 144f08670 FUN_144f08670 body=121 status=ok
// SIG undefined FUN_144f08670(void)

undefined4 FUN_144f08670(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x68));
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (param_2 != 0) {
    lVar1 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
    *(longlong *)(param_1 + 0x68) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f086f0 FUN_144f086f0 body=121 status=ok
// SIG undefined FUN_144f086f0(void)

undefined4 FUN_144f086f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x60));
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (param_2 != 0) {
    lVar1 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f08770 FUN_144f08770 body=121 status=ok
// SIG undefined FUN_144f08770(void)

undefined4 FUN_144f08770(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x58));
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (param_2 != 0) {
    lVar1 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f087f0 FUN_144f087f0 body=210 status=ok
// SIG undefined FUN_144f087f0(void)

undefined4 FUN_144f087f0(longlong param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  FUN_144f0a770();
  if (param_2 != (void *)0x0) {
    if (param_3 == 0xffffffffffffffff) {
      do {
        param_3 = param_3 + 1;
      } while (*(char *)((longlong)param_2 + param_3) != '\0');
    }
    _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(param_3 + 1);
    *(void **)(param_1 + 0x18) = _Dst;
    if (_Dst == (void *)0x0) {
      return 0x1b;
    }
    *(size_t *)(param_1 + 0x70) = param_3;
    if (param_3 != 0) {
      memcpy(_Dst,param_2,param_3);
    }
    *(undefined1 *)(param_3 + *(longlong *)(param_1 + 0x18)) = 0;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
    *(code **)(param_1 + 0x20) = FUN_144f09e90;
    *(undefined1 **)(param_1 + 0x28) = &LAB_144f09f10;
    *(code **)(param_1 + 0x30) = FUN_144f09f50;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return 0;
}



// FUNCTION 144f088d0 FUN_144f088d0 body=441 status=ok
// SIG undefined FUN_144f088d0(void)

void FUN_144f088d0(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [6];
  ushort local_62;
  undefined8 local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = 0;
  if ((param_1 != 0) && (FUN_144f0a770(), param_2 != (char *)0x0)) {
    iVar1 = _stat64(param_2,local_68);
    if ((iVar1 != 0) || (iVar1 = _access(param_2,4), iVar1 != 0)) {
      iVar6 = 0x1a;
    }
    lVar2 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
    *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
    *(longlong *)(param_1 + 0x18) = lVar2;
    if (((lVar2 != 0) && (iVar6 == 0)) && ((local_62 & 0xf000) == 0x8000)) {
      *(undefined8 *)(param_1 + 0x70) = local_50;
      *(code **)(param_1 + 0x28) = FUN_144f0a000;
    }
    *(code **)(param_1 + 0x20) = FUN_144f09f80;
    *(undefined4 *)(param_1 + 0x10) = 2;
    *(code **)(param_1 + 0x30) = FUN_144f0a0a0;
    _Str = (char *)(*(code *)PTR__strdup_14c6d9f38)(param_2);
    if (_Str != (char *)0x0) {
      pcVar3 = strrchr(_Str,0x2f);
      pcVar4 = strrchr(_Str,0x5c);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = _Str;
        if (pcVar4 != (char *)0x0) {
          pcVar3 = pcVar4 + 1;
        }
      }
      else if (pcVar4 == (char *)0x0) {
        pcVar3 = pcVar3 + 1;
      }
      else {
        if (pcVar4 < pcVar3) {
          pcVar4 = pcVar3;
        }
        pcVar3 = pcVar4 + 1;
      }
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)(pcVar3);
      (*(code *)PTR_free_14c6d9f28)(_Str);
      if (lVar2 != 0) {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
        uVar5 = (*(code *)PTR__strdup_14c6d9f38)(lVar2);
        *(undefined8 *)(param_1 + 0x60) = uVar5;
        (*(code *)PTR_free_14c6d9f28)(lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 144f08aa0 FUN_144f08aa0 body=112 status=ok
// SIG undefined FUN_144f08aa0(void)

undefined4
FUN_144f08aa0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    FUN_144f0a770();
    if (param_3 != 0) {
      *(undefined8 *)(param_1 + 0x30) = param_5;
      *(undefined8 *)(param_1 + 0x38) = param_6;
      *(longlong *)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
      *(undefined8 *)(param_1 + 0x70) = param_2;
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144f08b10 FUN_144f08b10 body=162 status=ok
// SIG undefined FUN_144f08b10(void)

undefined8 FUN_144f08b10(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x2b;
  }
  if (((*(int *)(param_1 + 2) != 4) || ((longlong *)param_1[7] != param_2)) &&
     (FUN_144f0a770(), param_2 != (longlong *)0x0)) {
    if (*param_2 != 0) {
      return 0x2b;
    }
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)*plVar1;
      while ((puVar2 != (undefined8 *)0x0 &&
             (plVar3 = (longlong *)*puVar2, plVar3 != (longlong *)0x0))) {
        plVar1 = plVar3;
        puVar2 = (undefined8 *)*plVar3;
      }
      if (param_2 == plVar1) {
        return 0x2b;
      }
    }
    *param_2 = (longlong)param_1;
    param_1[5] = FUN_144f0a6d0;
    param_1[6] = FUN_144f0a7e0;
    param_1[7] = param_2;
    param_1[0xe] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 2) = 4;
  }
  return 0;
}



// FUNCTION 144f08bc0 FUN_144f08bc0 body=123 status=ok
// SIG undefined FUN_144f08bc0(void)

undefined4 FUN_144f08bc0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x50) != param_2) {
      FUN_144b472a0();
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  *(longlong *)(param_1 + 0x50) = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(uint *)(param_1 + 0x14) = uVar1 | 1;
  }
  return 0;
}



// FUNCTION 144f08c40 FUN_144f08c40 body=107 status=ok
// SIG undefined FUN_144f08c40(void)

longlong FUN_144f08c40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  lVar1 = FUN_144f2b950(param_2,&local_res18);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_144bbee90(*param_1,lVar1);
    if (lVar2 == 0) {
      (*(code *)PTR_free_14c6d9f28)(lVar1);
    }
    else {
      *param_1 = lVar2;
    }
  }
  lVar1 = 0x1b;
  if (lVar2 != 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144f08cb0 FUN_144f08cb0 body=98 status=ok
// SIG undefined FUN_144f08cb0(void)

void FUN_144f08cb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  memset((void *)((longlong)param_1 + 0x7c),0,0x134);
  param_1[0x36] = 1;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



// FUNCTION 144f08d20 FUN_144f08d20 body=183 status=ok
// SIG undefined FUN_144f08d20(void)

void FUN_144f08d20(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144f0a770();
    FUN_144b472a0(param_1[9]);
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      FUN_144b472a0(param_1[10]);
    }
    (*(code *)PTR_free_14c6d9f28)(param_1[0xb]);
    param_1[0xb] = 0;
    (*(code *)PTR_free_14c6d9f28)(param_1[0xd]);
    param_1[0xd] = 0;
    (*(code *)PTR_free_14c6d9f28)(param_1[0xc]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    memset((void *)((longlong)param_1 + 0x7c),0,0x134);
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x36] = 1;
  }
  return;
}



// FUNCTION 144f08de0 FUN_144f08de0 body=1273 status=ok
// SIG undefined FUN_144f08de0(void)

int FUN_144f08de0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *_Src;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  void *_Dst;
  longlong lVar11;
  int iVar12;
  size_t _Size;
  
  iVar7 = *(int *)(param_3 + 0x10);
  iVar12 = 0;
  if (iVar7 == 0) {
LAB_144f091c1:
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar11 = FUN_144bbedc0();
      if (lVar11 == 0) goto LAB_144f092a8;
      if (param_2 == (undefined8 *)0x0) {
        FUN_144b472a0(lVar11);
        FUN_144f08d20(0);
        return 0x2b;
      }
      uVar8 = *(uint *)((longlong)param_2 + 0x14);
      if ((uVar8 & 1) != 0) {
        if (param_2[10] != lVar11) {
          FUN_144b472a0();
        }
        uVar8 = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe;
      }
      param_2[10] = lVar11;
      *(uint *)((longlong)param_2 + 0x14) = uVar8 | 1;
    }
    param_2[0x12] = *(undefined8 *)(param_3 + 0x90);
    lVar11 = *(longlong *)(param_3 + 0x58);
    (*(code *)PTR_free_14c6d9f28)(param_2[0xb]);
    param_2[0xb] = 0;
    if (lVar11 != 0) {
      lVar11 = (*(code *)PTR__strdup_14c6d9f38)(lVar11);
      param_2[0xb] = lVar11;
      if (lVar11 == 0) goto LAB_144f092a8;
    }
    lVar11 = *(longlong *)(param_3 + 0x68);
    (*(code *)PTR_free_14c6d9f28)(param_2[0xd]);
    param_2[0xd] = 0;
    if (lVar11 != 0) {
      lVar11 = (*(code *)PTR__strdup_14c6d9f38)(lVar11);
      param_2[0xd] = lVar11;
      if (lVar11 == 0) goto LAB_144f092a8;
    }
    lVar11 = *(longlong *)(param_3 + 0x60);
    (*(code *)PTR_free_14c6d9f28)(param_2[0xc]);
    param_2[0xc] = 0;
    if (lVar11 == 0) {
      return 0;
    }
    lVar11 = (*(code *)PTR__strdup_14c6d9f38)(lVar11);
    param_2[0xc] = lVar11;
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        iVar12 = FUN_144f088d0(param_2,*(undefined8 *)(param_3 + 0x18));
        if ((iVar12 != 0x1a) && (iVar12 != 0)) goto LAB_144f092ad;
      }
      else if (iVar7 == 3) {
        uVar3 = *(undefined8 *)(param_3 + 0x38);
        uVar4 = *(undefined8 *)(param_3 + 0x30);
        uVar5 = *(undefined8 *)(param_3 + 0x28);
        lVar11 = *(longlong *)(param_3 + 0x20);
        uVar6 = *(undefined8 *)(param_3 + 0x70);
        if (param_2 == (undefined8 *)0x0) goto LAB_144f08e34;
        if ((code *)param_2[6] != (code *)0x0) {
          (*(code *)param_2[6])(param_2[7]);
        }
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = param_2;
        param_2[3] = 0;
        param_2[8] = 0;
        param_2[0xe] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffb;
        *(undefined4 *)(param_2 + 2) = 0;
        param_2[0x36] = 1;
        *(undefined4 *)(param_2 + 0xf) = 0;
        if (lVar11 != 0) {
          param_2[4] = lVar11;
          param_2[5] = uVar5;
          param_2[6] = uVar4;
          param_2[7] = uVar3;
          param_2[0xe] = uVar6;
          *(undefined4 *)(param_2 + 2) = 3;
        }
      }
      else {
        if (iVar7 != 4) {
LAB_144f08e34:
          FUN_144f08d20(param_2);
          return 0x2b;
        }
        plVar9 = (longlong *)(*(code *)PTR_malloc_14c6d9f20)(0x60);
        if (plVar9 == (longlong *)0x0) goto LAB_144f092a8;
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar9[2] = 0;
        plVar9[3] = 0x2d2d2d2d2d2d2d2d;
        plVar9[4] = 0x2d2d2d2d2d2d2d2d;
        plVar9[5] = 0x2d2d2d2d2d2d2d2d;
        iVar7 = FUN_1452b32b0(param_1,plVar9 + 6,0x17);
        if (iVar7 != 0) {
          (*(code *)PTR_free_14c6d9f28)(plVar9);
          FUN_144f08d20(param_2);
          return 0x1b;
        }
        *(undefined4 *)(plVar9 + 9) = 0;
        plVar9[10] = 0;
        plVar9[0xb] = 0;
        if (param_2 == (undefined8 *)0x0) {
          iVar12 = 0x2b;
        }
        else if ((*(int *)(param_2 + 2) != 4) || ((longlong *)param_2[7] != plVar9)) {
          if ((code *)param_2[6] != (code *)0x0) {
            (*(code *)param_2[6])(param_2[7]);
          }
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = param_2;
          param_2[0xe] = 0;
          param_2[0x13] = 0;
          param_2[0x14] = 0;
          param_2[0x15] = 0;
          *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffb;
          param_2[4] = 0;
          param_2[3] = 0;
          param_2[8] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[0x36] = 1;
          *(undefined4 *)(param_2 + 0xf) = 0;
          if (*plVar9 == 0) {
            plVar1 = (longlong *)*param_2;
            if (plVar1 != (longlong *)0x0) {
              puVar10 = (undefined8 *)*plVar1;
              while ((puVar10 != (undefined8 *)0x0 &&
                     (plVar2 = (longlong *)*puVar10, plVar2 != (longlong *)0x0))) {
                plVar1 = plVar2;
                puVar10 = (undefined8 *)*plVar2;
              }
              if (plVar9 == plVar1) {
                iVar12 = 0x2b;
                goto LAB_144f08fa6;
              }
            }
            *plVar9 = (longlong)param_2;
            param_2[5] = FUN_144f0a6d0;
            param_2[7] = plVar9;
            param_2[6] = FUN_144f0a7e0;
            param_2[0xe] = 0xffffffffffffffff;
            *(undefined4 *)(param_2 + 2) = 4;
          }
          else {
            iVar12 = 0x2b;
          }
        }
LAB_144f08fa6:
        lVar11 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 8);
        if (iVar12 != 0) goto LAB_144f092ad;
        while (lVar11 != 0) {
          if ((plVar9 == (longlong *)0x0) ||
             (puVar10 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(0x1b8),
             puVar10 == (undefined8 *)0x0)) goto LAB_144f092a8;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0;
          memset((void *)((longlong)puVar10 + 0x7c),0,0x134);
          puVar10[0x36] = 1;
          *(undefined4 *)(puVar10 + 0xf) = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          *puVar10 = plVar9;
          if (plVar9[2] == 0) {
            plVar9[1] = (longlong)puVar10;
          }
          else {
            *(undefined8 **)(plVar9[2] + 8) = puVar10;
          }
          plVar9[2] = (longlong)puVar10;
          iVar7 = FUN_144f08de0(param_1,puVar10,lVar11);
          lVar11 = *(longlong *)(lVar11 + 8);
          if (iVar7 != 0) {
            FUN_144f08d20(param_2);
            return iVar7;
          }
        }
      }
      goto LAB_144f091c1;
    }
    _Size = *(size_t *)(param_3 + 0x70);
    _Src = *(void **)(param_3 + 0x18);
    if (param_2 == (undefined8 *)0x0) goto LAB_144f08e34;
    FUN_144f0a770(param_2);
    if (_Src == (void *)0x0) goto LAB_144f091c1;
    if (_Size == 0xffffffffffffffff) {
      do {
        _Size = _Size + 1;
      } while (*(char *)((longlong)_Src + _Size) != '\0');
    }
    _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(_Size + 1);
    param_2[3] = _Dst;
    if (_Dst != (void *)0x0) {
      param_2[0xe] = _Size;
      if (_Size != 0) {
        memcpy(_Dst,_Src,_Size);
      }
      *(undefined1 *)(_Size + param_2[3]) = 0;
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 4;
      param_2[4] = FUN_144f09e90;
      param_2[5] = &LAB_144f09f10;
      param_2[6] = FUN_144f09f50;
      *(undefined4 *)(param_2 + 2) = 1;
      goto LAB_144f091c1;
    }
  }
LAB_144f092a8:
  iVar12 = 0x1b;
LAB_144f092ad:
  FUN_144f08d20(param_2);
  return iVar12;
}



// FUNCTION 144f092e0 FUN_144f092e0 body=200 status=ok
// SIG undefined FUN_144f092e0(void)

undefined8 FUN_144f092e0(undefined8 *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x2b;
  }
  if (((*(int *)(param_1 + 2) != 4) || ((longlong *)param_1[7] != param_2)) &&
     (FUN_144f0a770(), param_2 != (longlong *)0x0)) {
    if (*param_2 != 0) {
      return 0x2b;
    }
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)*plVar1;
      while ((puVar2 != (undefined8 *)0x0 &&
             (plVar3 = (longlong *)*puVar2, plVar3 != (longlong *)0x0))) {
        plVar1 = plVar3;
        puVar2 = (undefined8 *)*plVar3;
      }
      if (param_2 == plVar1) {
        return 0x2b;
      }
    }
    *param_2 = (longlong)param_1;
    param_1[5] = FUN_144f0a6d0;
    param_1[7] = param_2;
    pcVar4 = FUN_144f0a8d0;
    param_1[0xe] = 0xffffffffffffffff;
    if (param_3 != 0) {
      pcVar4 = FUN_144f0a7e0;
    }
    *(undefined4 *)(param_1 + 2) = 4;
    param_1[6] = pcVar4;
  }
  return 0;
}



// FUNCTION 144f093b0 FUN_144f093b0 body=1336 status=ok
// SIG undefined FUN_144f093b0(void)

char * FUN_144f093b0(undefined8 param_1,longlong param_2,char *param_3,char *param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  bool bVar18;
  longlong local_res18;
  char *local_res20;
  
  pcVar10 = (char *)0x0;
  local_res18 = 0;
  FUN_144b472a0(*(undefined8 *)(param_2 + 0x48));
  *(undefined8 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x78) == 1) {
    *(undefined4 *)(param_2 + 0x78) = 1;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  pcVar11 = *(char **)(param_2 + 0x58);
  pcVar5 = pcVar11;
  if (pcVar11 == (char *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x50);
    pcVar11 = pcVar10;
    do {
      if (plVar13 == (longlong *)0x0) break;
      iVar3 = FUN_144f195b0(*plVar13,"Content-Type",0xc);
      pcVar11 = pcVar10;
      if ((iVar3 != 0) && (lVar2 = *plVar13, *(char *)(lVar2 + 0xc) == ':')) {
        pcVar11 = (char *)(lVar2 + 0xd);
        cVar1 = *(char *)(lVar2 + 0xd);
        while (cVar1 == ' ') {
          pcVar11 = pcVar11 + 1;
          cVar1 = *pcVar11;
        }
      }
      plVar13 = (longlong *)plVar13[1];
    } while (pcVar11 == (char *)0x0);
    pcVar5 = pcVar11;
    if ((pcVar11 == (char *)0x0) && (pcVar5 = param_3, param_3 == (char *)0x0)) {
      if (*(int *)(param_2 + 0x10) == 2) {
        pcVar5 = (char *)FUN_144f09af0(*(undefined8 *)(param_2 + 0x60));
        if (((pcVar5 == (char *)0x0) &&
            (pcVar5 = (char *)FUN_144f09af0(*(undefined8 *)(param_2 + 0x18)), pcVar5 == (char *)0x0)
            ) && (*(longlong *)(param_2 + 0x60) != 0)) {
          pcVar5 = "application/octet-stream";
        }
      }
      else if (*(int *)(param_2 + 0x10) == 4) {
        pcVar5 = "multipart/mixed";
      }
      else {
        pcVar5 = (char *)FUN_144f09af0(*(undefined8 *)(param_2 + 0x60));
      }
    }
  }
  if (*(int *)(param_2 + 0x10) == 4) {
    local_res18 = *(longlong *)(param_2 + 0x38);
    pcVar11 = (char *)(local_res18 + 0x18);
    if (local_res18 == 0) {
      pcVar11 = pcVar10;
    }
  }
  else {
    if (((pcVar5 != (char *)0x0) && (pcVar11 == (char *)0x0)) &&
       (iVar3 = FUN_144f195b0(pcVar5,"text/plain",10), iVar3 != 0)) {
      switch(pcVar5[10]) {
      case '\0':
      case '\t':
      case '\n':
      case '\r':
      case ' ':
      case ';':
        if ((param_5 == 0) || (*(longlong *)(param_2 + 0x60) == 0)) {
          pcVar5 = pcVar10;
        }
      }
    }
    pcVar11 = pcVar10;
  }
  plVar13 = *(longlong **)(param_2 + 0x50);
  do {
    pcVar12 = (char *)0x0;
    pcVar17 = "";
    if (plVar13 == (longlong *)0x0) {
      local_res20 = param_4;
      if (param_4 == (char *)0x0) {
        if ((*(longlong *)(param_2 + 0x60) == 0) && (*(longlong *)(param_2 + 0x68) == 0)) {
          if (pcVar5 == (char *)0x0) goto LAB_144f09771;
          iVar3 = FUN_144f195b0(pcVar5,"multipart/",10);
          if (iVar3 != 0) goto LAB_144f0972f;
        }
        local_res20 = "attachment";
      }
      iVar3 = FUN_144f19540(local_res20,"attachment");
      pcVar10 = (char *)0x0;
      if ((((iVar3 == 0) || (*(longlong *)(param_2 + 0x68) != 0)) ||
          (*(longlong *)(param_2 + 0x60) != 0)) && (local_res20 != (char *)0x0)) {
        puVar6 = (undefined1 *)0x0;
        puVar7 = (undefined1 *)0x0;
        if ((*(longlong *)(param_2 + 0x68) != 0) &&
           (puVar6 = (undefined1 *)FUN_144f09dd0(param_1,*(longlong *)(param_2 + 0x68),param_5),
           puVar6 == (undefined1 *)0x0)) {
          (*(code *)PTR_free_14c6d9f28)(0);
          (*(code *)PTR_free_14c6d9f28)(0);
          return &DAT_0000001b;
        }
        if ((*(longlong *)(param_2 + 0x60) != 0) &&
           (puVar7 = (undefined1 *)FUN_144f09dd0(param_1,*(longlong *)(param_2 + 0x60),param_5),
           puVar7 == (undefined1 *)0x0)) {
          (*(code *)PTR_free_14c6d9f28)(puVar6);
          (*(code *)PTR_free_14c6d9f28)(0);
          return &DAT_0000001b;
        }
        bVar18 = puVar7 != (undefined1 *)0x0;
        puVar16 = &DAT_14996de1b;
        if (bVar18) {
          puVar16 = &DAT_149981f00;
        }
        puVar14 = &DAT_14996de1b;
        if (bVar18) {
          puVar14 = puVar7;
        }
        pcVar10 = "";
        if (bVar18) {
          pcVar10 = "; filename=\"";
        }
        bVar18 = puVar6 != (undefined1 *)0x0;
        puVar9 = &DAT_14996de1b;
        if (bVar18) {
          puVar9 = &DAT_149981f00;
        }
        puVar8 = &DAT_14996de1b;
        if (bVar18) {
          puVar8 = puVar6;
        }
        pcVar12 = "";
        if (bVar18) {
          pcVar12 = "; name=\"";
        }
        uVar4 = FUN_144f08c40(param_2 + 0x48,"Content-Disposition: %s%s%s%s%s%s%s",local_res20,
                              pcVar12,puVar8,puVar9,pcVar10,puVar14,puVar16);
        pcVar10 = (char *)(ulonglong)uVar4;
        (*(code *)PTR_free_14c6d9f28)(puVar6);
        (*(code *)PTR_free_14c6d9f28)(puVar7);
        if (uVar4 != 0) {
          return pcVar10;
        }
      }
      break;
    }
    iVar3 = FUN_144f195b0(*plVar13,"Content-Disposition",0x13);
    if ((iVar3 != 0) && (lVar2 = *plVar13, *(char *)(lVar2 + 0x13) == ':')) {
      pcVar12 = (char *)(lVar2 + 0x14);
      cVar1 = *(char *)(lVar2 + 0x14);
      while (cVar1 == ' ') {
        pcVar12 = pcVar12 + 1;
        cVar1 = *pcVar12;
      }
    }
    plVar13 = (longlong *)plVar13[1];
  } while (pcVar12 == (char *)0x0);
  if (pcVar5 != (char *)0x0) {
LAB_144f0972f:
    pcVar10 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar17 = "; boundary=";
      pcVar10 = pcVar11;
    }
    pcVar11 = (char *)FUN_144f08c40(param_2 + 0x48,"Content-Type: %s%s%s",pcVar5,pcVar17,pcVar10);
    pcVar10 = (char *)((ulonglong)pcVar11 & 0xffffffff);
    if ((int)pcVar11 != 0) {
      return pcVar11;
    }
  }
LAB_144f09771:
  plVar13 = *(longlong **)(param_2 + 0x50);
  pcVar11 = (char *)0x0;
  do {
    if (plVar13 == (longlong *)0x0) {
      if (*(undefined8 **)(param_2 + 0x90) == (undefined8 *)0x0) {
        if (((pcVar5 == (char *)0x0) || (param_5 != 0)) || (*(int *)(param_2 + 0x10) == 4)) break;
        puVar15 = &DAT_149c057b8;
      }
      else {
        puVar15 = (undefined *)**(undefined8 **)(param_2 + 0x90);
        if (puVar15 == (undefined *)0x0) break;
      }
      pcVar12 = (char *)FUN_144f08c40((undefined8 *)(param_2 + 0x48),"Content-Transfer-Encoding: %s"
                                      ,puVar15);
      pcVar10 = (char *)((ulonglong)pcVar12 & 0xffffffff);
      if ((int)pcVar12 != 0) {
        return pcVar12;
      }
      break;
    }
    iVar3 = FUN_144f195b0(*plVar13,"Content-Transfer-Encoding",0x19);
    pcVar12 = pcVar11;
    if ((iVar3 != 0) && (lVar2 = *plVar13, *(char *)(lVar2 + 0x19) == ':')) {
      pcVar12 = (char *)(lVar2 + 0x1a);
      cVar1 = *(char *)(lVar2 + 0x1a);
      while (cVar1 == ' ') {
        pcVar12 = pcVar12 + 1;
        cVar1 = *pcVar12;
      }
    }
    plVar13 = (longlong *)plVar13[1];
  } while (pcVar12 == (char *)0x0);
  if (*(int *)(param_2 + 0x78) == 1) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x78) = 1;
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  if (*(int *)(param_2 + 0x10) != 4) {
    return pcVar10;
  }
  if (local_res18 == 0) {
    return pcVar10;
  }
  if ((pcVar5 != (char *)0x0) &&
     (iVar3 = FUN_144f195b0(pcVar5,"multipart/form-data",0x13), iVar3 != 0)) {
    switch(pcVar5[0x13]) {
    case '\0':
    case '\t':
    case '\n':
    case '\r':
    case ' ':
    case ';':
      bVar18 = true;
      goto LAB_144f0988b;
    }
  }
  bVar18 = false;
LAB_144f0988b:
  lVar2 = *(longlong *)(local_res18 + 8);
  pcVar5 = "form-data";
  if (!bVar18) {
    pcVar5 = pcVar11;
  }
  while( true ) {
    if (lVar2 == 0) {
      return pcVar10;
    }
    pcVar11 = (char *)FUN_144f093b0(param_1,lVar2,0,pcVar5,param_5);
    pcVar10 = (char *)((ulonglong)pcVar11 & 0xffffffff);
    if ((int)pcVar11 != 0) break;
    lVar2 = *(longlong *)(lVar2 + 8);
  }
  return pcVar11;
}



// FUNCTION 144f09970 FUN_144f09970 body=270 status=ok
// SIG undefined FUN_144f09970(void)

longlong FUN_144f09970(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x10) == 4) {
    uVar3 = FUN_144f0a970(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x70) = uVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar4 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x10))(param_1);
  }
  if ((-1 < lVar4) && ((*(byte *)(param_1 + 0x14) & 2) == 0)) {
    lVar6 = 0;
    lVar7 = lVar6;
    for (plVar1 = *(longlong **)(param_1 + 0x48); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[1]) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(*plVar1 + lVar5) != '\0');
      lVar7 = lVar7 + 2 + lVar5;
    }
    for (plVar1 = *(longlong **)(param_1 + 0x50); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[1]) {
      iVar2 = FUN_144f195b0(*plVar1,"Content-Type",0xc);
      if ((iVar2 == 0) || (*(char *)(*plVar1 + 0xc) != ':')) {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (*(char *)(*plVar1 + lVar5) != '\0');
        lVar6 = lVar6 + 2 + lVar5;
      }
    }
    return lVar6 + 2 + lVar4 + lVar7;
  }
  return lVar4;
}



// FUNCTION 144f09a80 FUN_144f09a80 body=78 status=ok
// SIG undefined FUN_144f09a80(void)

void FUN_144f09a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_res20 [8];
  
  do {
    local_res20[0] = 0;
    lVar1 = FUN_144f0a200(param_4,param_1,param_3,local_res20);
  } while (lVar1 == -2);
  return;
}



// FUNCTION 144f09ad0 FUN_144f09ad0 body=21 status=ok
// SIG undefined FUN_144f09ad0(void)

byte FUN_144f09ad0(void)

{
  int iVar1;
  
  iVar1 = FUN_144f0a630();
  return -(iVar1 != 0) & 0x41;
}



// FUNCTION 144f09af0 FUN_144f09af0 body=161 status=ok
// SIG undefined FUN_144f09af0(void)

undefined * FUN_144f09af0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    uVar5 = 0;
    ppuVar4 = &PTR_DAT_149c05710;
    do {
      uVar2 = 0xffffffffffffffff;
      do {
        uVar2 = uVar2 + 1;
      } while ((*ppuVar4)[uVar2] != '\0');
      if ((uVar2 <= uVar3) && (iVar1 = FUN_144f19540((uVar3 + param_1) - uVar2), iVar1 != 0)) {
        return (&PTR_s_image_gif_149c05718)[(ulonglong)uVar5 * 2];
      }
      uVar5 = uVar5 + 1;
      ppuVar4 = ppuVar4 + 2;
    } while (uVar5 < 10);
  }
  return (undefined *)0x0;
}



// FUNCTION 144f09ba0 FUN_144f09ba0 body=510 status=ok
// SIG undefined FUN_144f09ba0(void)

ulonglong FUN_144f09ba0(void *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong _Size;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar7 = uVar8;
  for (; param_3 != 0; param_3 = param_3 - _Size) {
    lVar1 = *(longlong *)(param_4 + 0x50);
    _Size = uVar8;
    switch(*(undefined4 *)(param_4 + 0x48)) {
    case 0:
    case 4:
      uVar3 = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(param_4 + 0x58) = 0;
      *(longlong *)(param_4 + 0x58) = *(longlong *)(param_4 + 0x58) + 2;
LAB_144f09d64:
      *(undefined8 *)(param_4 + 0x50) = uVar3;
      *(undefined4 *)(param_4 + 0x48) = 5;
      break;
    case 5:
      uVar2 = FUN_144f17010(*(undefined8 *)(param_4 + 0x58));
      if (uVar2 < 4) {
        _Size = param_3;
        if (4 - uVar2 <= param_3) {
          _Size = 4 - uVar2;
        }
        memcpy(param_1,&DAT_149c058ec + uVar2,_Size);
        *(longlong *)(param_4 + 0x58) = *(longlong *)(param_4 + 0x58) + _Size;
        if (_Size != 0) break;
      }
      *(undefined4 *)(param_4 + 0x48) = 6;
      *(longlong *)(param_4 + 0x50) = lVar1;
      *(undefined8 *)(param_4 + 0x58) = 0;
      break;
    case 6:
      uVar2 = FUN_144f17010(*(undefined8 *)(param_4 + 0x58));
      if (lVar1 == 0) {
        if (uVar2 < 0x2e) {
          uVar4 = 0x2e - uVar2;
          puVar6 = (undefined1 *)(param_4 + 0x18 + uVar2);
          goto LAB_144f09cda;
        }
        if (uVar2 - 0x2e < 4) {
          puVar6 = &DAT_149c058f4;
          lVar5 = 4;
          goto LAB_144f09cd4;
        }
      }
      else {
        if (uVar2 < 0x2e) {
          uVar4 = 0x2e - uVar2;
          puVar6 = (undefined1 *)(param_4 + 0x18 + uVar2);
        }
        else {
          if (1 < uVar2 - 0x2e) goto LAB_144f09cf8;
          puVar6 = &DAT_149c058e8;
          lVar5 = 2;
LAB_144f09cd4:
          puVar6 = puVar6 + (uVar2 - 0x2e);
          uVar4 = lVar5 - (uVar2 - 0x2e);
        }
LAB_144f09cda:
        _Size = param_3;
        if (uVar4 <= param_3) {
          _Size = uVar4;
        }
        memcpy(param_1,puVar6,_Size);
        *(longlong *)(param_4 + 0x58) = *(longlong *)(param_4 + 0x58) + _Size;
        if (_Size != 0) break;
      }
LAB_144f09cf8:
      *(undefined4 *)(param_4 + 0x48) = 7;
      *(longlong *)(param_4 + 0x50) = lVar1;
      *(undefined8 *)(param_4 + 0x58) = 0;
      break;
    case 7:
      if (lVar1 == 0) {
        *(undefined4 *)(param_4 + 0x48) = 8;
        *(undefined8 *)(param_4 + 0x50) = 0;
        *(undefined8 *)(param_4 + 0x58) = 0;
        _Size = 0;
      }
      else {
        _Size = FUN_144f0a200(lVar1,param_1,param_3,param_5);
        if (_Size == 0) {
          uVar3 = *(undefined8 *)(lVar1 + 8);
          *(undefined8 *)(param_4 + 0x58) = 0;
          goto LAB_144f09d64;
        }
        if ((0xfffffff < _Size) && (0xffffffffeffffffb < _Size - 0x10000002)) {
          if (uVar7 == 0) {
            return _Size;
          }
          return uVar7;
        }
      }
      break;
    case 8:
      goto LAB_144f09d81;
    }
    uVar7 = uVar7 + _Size;
    param_1 = (void *)((longlong)param_1 + _Size);
  }
LAB_144f09d81:
  return uVar7;
}



// FUNCTION 144f09dd0 FUN_144f09dd0 body=182 status=ok
// SIG undefined FUN_144f09dd0(void)

void FUN_144f09dd0(longlong param_1,char *param_2,int param_3)

{
  undefined **ppuVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 local_28 [32];
  
  ppuVar5 = &PTR_DAT_149c056f0;
  if ((param_3 == 0) || ((param_1 != 0 && ((*(byte *)(param_1 + 0x9ec) & 1) != 0)))) {
    ppuVar5 = &PTR_DAT_149c056d8;
  }
  FUN_144f07cf0(local_28,8000000);
  iVar3 = thunk_FUN_144f07eb0(local_28,&DAT_14996de1b,0);
  do {
    if ((iVar3 != 0) || (*param_2 == '\0')) {
      FUN_144f07e80(local_28);
      return;
    }
    pcVar2 = *ppuVar5;
    ppuVar4 = ppuVar5;
    while (pcVar2 != (char *)0x0) {
      if (*pcVar2 == *param_2) {
        iVar3 = FUN_144f07d50(local_28,pcVar2 + 1);
        goto LAB_144f09e5b;
      }
      ppuVar1 = ppuVar4 + 1;
      ppuVar4 = ppuVar4 + 1;
      pcVar2 = *ppuVar1;
    }
    iVar3 = thunk_FUN_144f07eb0(local_28,param_2,1);
LAB_144f09e5b:
    param_2 = param_2 + 1;
  } while( true );
}



// FUNCTION 144f09e90 FUN_144f09e90 body=127 status=ok
// SIG undefined FUN_144f09e90(void)

ulonglong FUN_144f09e90(void *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144f17010(*(longlong *)(param_4 + 0x70) - *(longlong *)(param_4 + 0x88));
  if (param_3 == 0) {
    return 0xfffffffffffffffe;
  }
  if ((param_3 < uVar1) || (param_3 = uVar1, uVar1 != 0)) {
    lVar2 = FUN_144f17010(*(undefined8 *)(param_4 + 0x88));
    memcpy(param_1,(void *)(*(longlong *)(param_4 + 0x18) + lVar2),param_3);
  }
  return param_3;
}



// FUNCTION 144f09f50 FUN_144f09f50 body=33 status=ok
// SIG undefined FUN_144f09f50(void)

void FUN_144f09f50(longlong param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 144f09f80 FUN_144f09f80 body=125 status=ok
// SIG undefined FUN_144f09f80(void)

size_t FUN_144f09f80(void *param_1,size_t param_2,size_t param_3,longlong param_4)

{
  FILE *_File;
  size_t sVar1;
  
  if (param_3 == 0) {
    sVar1 = 0xfffffffffffffffe;
  }
  else {
    _File = *(FILE **)(param_4 + 0x40);
    if (_File == (FILE *)0x0) {
      _File = fopen(*(char **)(param_4 + 0x18),"rb");
      *(FILE **)(param_4 + 0x40) = _File;
      if (_File == (FILE *)0x0) {
        return 0xffffffffffffffff;
      }
    }
    sVar1 = fread(param_1,param_2,param_3,_File);
  }
  return sVar1;
}



// FUNCTION 144f0a000 FUN_144f0a000 body=150 status=ok
// SIG undefined FUN_144f0a000(void)

byte FUN_144f0a000(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  FILE *_File;
  
  if (((param_3 == 0) && (param_2 == 0)) && (*(longlong *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  _File = *(FILE **)(param_1 + 0x40);
  if (_File == (FILE *)0x0) {
    _File = fopen(*(char **)(param_1 + 0x18),"rb");
    *(FILE **)(param_1 + 0x40) = _File;
    if (_File == (FILE *)0x0) {
      return 1;
    }
  }
  iVar1 = fseek(_File,(long)param_2,param_3);
  return -(iVar1 != 0) & 2;
}



// FUNCTION 144f0a0a0 FUN_144f0a0a0 body=56 status=ok
// SIG undefined FUN_144f0a0a0(void)

void FUN_144f0a0a0(longlong param_1)

{
  if (*(FILE **)(param_1 + 0x40) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 144f0a0e0 FUN_144f0a0e0 body=279 status=ok
// SIG undefined FUN_144f0a0e0(void)

ulonglong FUN_144f0a0e0(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x1b0);
  if ((0xffffffe < uVar2 - 1) && (0xffffffffeffffffc < uVar2 - 0x10000002)) {
    return uVar2;
  }
  if ((*(longlong *)(param_1 + 0x70) != -1) &&
     (uVar2 = 0, *(longlong *)(param_1 + 0x70) <= *(longlong *)(param_1 + 0x88)))
  goto LAB_144f0a1d2;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) == 2) {
    if ((*(FILE **)(param_1 + 0x40) != (FILE *)0x0) &&
       (iVar1 = feof(*(FILE **)(param_1 + 0x40)), iVar1 != 0)) goto LAB_144f0a1d2;
LAB_144f0a17f:
    if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_144f0a1d2;
    if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
      if (*param_4 != '\0') {
        return 0xfffffffffffffffe;
      }
      *param_4 = '\x01';
    }
    uVar2 = (**(code **)(param_1 + 0x20))(param_2,1,param_3,*(undefined8 *)(param_1 + 0x38));
  }
  else {
    if (*(int *)(param_1 + 0x10) != 4) goto LAB_144f0a17f;
    uVar2 = FUN_144f09ba0(param_2,1,param_3,*(undefined8 *)(param_1 + 0x38),param_4);
  }
  if (((uVar2 & 0xffffffffeffffffe) != 0) || (uVar2 == 1)) {
    if (uVar2 == 0xfffffffffffffffe) {
      return 0xfffffffffffffffe;
    }
    if (uVar2 != 0xffffffffffffffff) {
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + uVar2;
    }
  }
LAB_144f0a1d2:
  *(ulonglong *)(param_1 + 0x1b0) = uVar2;
  return uVar2;
}



// FUNCTION 144f0a200 FUN_144f0a200 body=1025 status=ok
// SIG undefined FUN_144f0a200(void)

ulonglong FUN_144f0a200(longlong param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *_Src;
  size_t sVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  for (; param_3 != 0; param_3 = param_3 - uVar6) {
    uVar6 = 0;
    plVar1 = *(longlong **)(param_1 + 0x80);
    sVar7 = 0;
    switch(*(undefined4 *)(param_1 + 0x78)) {
    case 0:
      *(undefined8 *)(param_1 + 0x88) = 0;
      uVar4 = 1;
      if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
        uVar4 = 4;
      }
      *(undefined4 *)(param_1 + 0x78) = uVar4;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x48);
      uVar6 = sVar7;
      break;
    case 1:
      if (plVar1 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x78) = 2;
        *(undefined8 *)(param_1 + 0x88) = 0;
        uVar6 = sVar7;
      }
      else {
LAB_144f0a30a:
        lVar2 = *plVar1;
        uVar8 = 0xffffffffffffffff;
        do {
          uVar8 = uVar8 + 1;
        } while (*(char *)(lVar2 + uVar8) != '\0');
        uVar11 = FUN_144f17010(*(undefined8 *)(param_1 + 0x88));
        if (uVar11 < uVar8) {
          _Src = (undefined1 *)(lVar2 + uVar11);
LAB_144f0a358:
          uVar6 = param_3;
          if (uVar8 - uVar11 <= param_3) {
            uVar6 = uVar8 - uVar11;
          }
          memcpy(param_2,_Src,uVar6);
          *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + uVar6;
          if (uVar6 != 0) break;
        }
        else {
          uVar11 = uVar11 - uVar8;
          if (uVar11 < 2) {
            uVar8 = 2;
            _Src = &DAT_149c058e8 + uVar11;
            goto LAB_144f0a358;
          }
        }
        *(longlong *)(param_1 + 0x80) = plVar1[1];
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      break;
    case 2:
      if (plVar1 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x78) = 3;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        uVar6 = sVar7;
      }
      else {
        iVar5 = FUN_144f195b0(*plVar1,"Content-Type",0xc);
        if ((iVar5 == 0) || (*(char *)(*plVar1 + 0xc) != ':')) goto LAB_144f0a30a;
        *(longlong *)(param_1 + 0x80) = plVar1[1];
        *(undefined4 *)(param_1 + 0x78) = 2;
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      break;
    case 3:
      uVar8 = FUN_144f17010(*(undefined8 *)(param_1 + 0x88));
      if (uVar8 < 2) {
        uVar6 = param_3;
        if (2 - uVar8 <= param_3) {
          uVar6 = 2 - uVar8;
        }
        memcpy(param_2,&DAT_149c058e8 + uVar8,uVar6);
        *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + uVar6;
        if (uVar6 != 0) break;
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x78) = 4;
      *(undefined8 *)(param_1 + 0x88) = 0;
      break;
    case 4:
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0x78) = 7;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      break;
    case 7:
      if (*(longlong *)(param_1 + 0x90) == 0) {
        uVar6 = FUN_144f0a0e0(param_1,param_2,param_3,param_4);
      }
      else {
        uVar11 = 0;
        bVar3 = false;
        uVar8 = param_3;
        pvVar10 = param_2;
LAB_144f0a450:
        while ((uVar6 = *(ulonglong *)(param_1 + 0xa8), *(ulonglong *)(param_1 + 0xa0) < uVar6 ||
               (bVar3))) {
          uVar6 = (**(code **)(*(longlong *)(param_1 + 0x90) + 8))(pvVar10,uVar8,bVar3,param_1);
          if (uVar6 == 0) {
            uVar6 = uVar11;
            if (bVar3 == false) {
              uVar6 = *(ulonglong *)(param_1 + 0xa8);
              break;
            }
            goto LAB_144f0a574;
          }
          if (0xfffffffffffffffd < uVar6) goto LAB_144f0a547;
          uVar11 = uVar11 + uVar6;
          pvVar10 = (void *)((longlong)pvVar10 + uVar6);
          uVar8 = uVar8 - uVar6;
        }
        lVar2 = *(longlong *)(param_1 + 0xa0);
        if (lVar2 != 0) {
          uVar6 = uVar6 - lVar2;
          if (uVar6 != 0) {
            memmove((void *)(param_1 + 0xb0),(void *)(param_1 + 0xb0 + lVar2),uVar6);
          }
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(ulonglong *)(param_1 + 0xa8) = uVar6;
        }
        if (uVar6 < 0x100) {
          uVar6 = FUN_144f0a0e0(param_1,param_1 + 0xb0 + uVar6,0x100 - uVar6,param_4);
          if (uVar6 == 0) {
            bVar3 = true;
          }
          else {
            if ((0xfffffff < uVar6) && (0xffffffffeffffffb < uVar6 - 0x10000002))
            goto LAB_144f0a547;
            *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + uVar6;
          }
          goto LAB_144f0a450;
        }
        uVar6 = 0xffffffffffffffff;
LAB_144f0a547:
        if (uVar11 != 0) {
          uVar6 = uVar11;
        }
      }
LAB_144f0a574:
      if (uVar6 == 0) {
        *(undefined4 *)(param_1 + 0x78) = 8;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        if ((*(int *)(param_1 + 0x10) == 2) && (*(FILE **)(param_1 + 0x40) != (FILE *)0x0)) {
          fclose(*(FILE **)(param_1 + 0x40));
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
LAB_144f0a5f5:
        if (uVar9 == 0) {
          return uVar6;
        }
        return uVar9;
      }
      if ((0xfffffff < uVar6) && (0xffffffffeffffffb < uVar6 - 0x10000002)) goto LAB_144f0a5f5;
      break;
    case 8:
      goto LAB_144f0a5b2;
    }
    param_2 = (void *)((longlong)param_2 + uVar6);
    uVar9 = uVar9 + uVar6;
  }
LAB_144f0a5b2:
  return uVar9;
}



// FUNCTION 144f0a630 FUN_144f0a630 body=153 status=ok
// SIG undefined FUN_144f0a630(void)

undefined8 FUN_144f0a630(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar1 = (*(uint *)(param_1 + 0x14) & 2) * 2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (iVar1 < *(int *)(param_1 + 0x78)) {
    uVar3 = 2;
    if (*(code **)(param_1 + 0x28) == (code *)0x0) goto LAB_144f0a6ae;
    uVar3 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x38),0,0);
    iVar2 = (int)uVar3;
    if (iVar2 == -1) {
      uVar3 = 2;
      goto LAB_144f0a6ae;
    }
    if (iVar2 != 0) {
      if (1 < iVar2 - 1U) {
        uVar3 = 1;
      }
      goto LAB_144f0a6ae;
    }
  }
  *(int *)(param_1 + 0x78) = iVar1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
LAB_144f0a6ae:
  *(undefined8 *)(param_1 + 0x1b0) = 1;
  return uVar3;
}



// FUNCTION 144f0a6d0 FUN_144f0a6d0 body=147 status=ok
// SIG undefined FUN_144f0a6d0(void)

int FUN_144f0a6d0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if ((param_3 != 0) || (param_2 != 0)) {
    return 2;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    do {
      iVar1 = FUN_144f0a630(lVar3);
      lVar3 = *(longlong *)(lVar3 + 8);
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
    } while (lVar3 != 0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 0;
}



// FUNCTION 144f0a770 FUN_144f0a770 body=111 status=ok
// SIG undefined FUN_144f0a770(void)

void FUN_144f0a770(longlong param_1)

{
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38));
  }
  *(longlong *)(param_1 + 0x38) = param_1;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffb;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 1;
  return;
}



// FUNCTION 144f0a7e0 FUN_144f0a7e0 body=230 status=ok
// SIG undefined FUN_144f0a7e0(void)

void FUN_144f0a7e0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      *(undefined8 *)(*param_1 + 0x30) = 0;
      lVar1 = *param_1;
      if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
        (**(code **)(lVar1 + 0x30))(*(undefined8 *)(lVar1 + 0x38));
      }
      *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) & 0xfffffffb;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined8 *)(lVar1 + 0x98) = 0;
      *(undefined8 *)(lVar1 + 0xa0) = 0;
      *(undefined8 *)(lVar1 + 0xa8) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(longlong *)(lVar1 + 0x38) = lVar1;
      *(undefined8 *)(lVar1 + 0x1b0) = 1;
    }
    FUN_144f0a8d0(param_1);
    lVar1 = param_1[1];
    while (lVar1 != 0) {
      param_1[1] = *(longlong *)(lVar1 + 8);
      FUN_144f08d20(lVar1);
      (*(code *)PTR_free_14c6d9f28)(lVar1);
      lVar1 = param_1[1];
    }
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return;
}



// FUNCTION 144f0a8d0 FUN_144f0a8d0 body=158 status=ok
// SIG undefined FUN_144f0a8d0(void)

void FUN_144f0a8d0(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    *(undefined8 *)(*param_1 + 0x30) = 0;
    lVar1 = *param_1;
    if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
      (**(code **)(lVar1 + 0x30))(*(undefined8 *)(lVar1 + 0x38));
    }
    *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) & 0xfffffffb;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x78) = 0;
    *(longlong *)(lVar1 + 0x38) = lVar1;
    *(undefined8 *)(lVar1 + 0x1b0) = 1;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144f0a970 FUN_144f0a970 body=359 status=ok
// SIG undefined FUN_144f0a970(void)

longlong FUN_144f0a970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = 0x34;
  for (lVar1 = *(longlong *)(param_1 + 8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
    if (*(int *)(lVar1 + 0x10) == 4) {
      uVar5 = FUN_144f0a970(*(undefined8 *)(lVar1 + 0x38));
      *(undefined8 *)(lVar1 + 0x70) = uVar5;
    }
    lVar6 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      lVar6 = (**(code **)(*(longlong *)(lVar1 + 0x90) + 0x10))(lVar1);
    }
    if ((-1 < lVar6) && ((*(byte *)(lVar1 + 0x14) & 2) == 0)) {
      lVar9 = 0;
      for (plVar2 = *(longlong **)(lVar1 + 0x48); plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[1]) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*plVar2 + lVar7) != '\0');
        lVar9 = lVar9 + 2 + lVar7;
      }
      lVar7 = 0;
      for (plVar2 = *(longlong **)(lVar1 + 0x50); plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[1]) {
        iVar4 = FUN_144f195b0(*plVar2,"Content-Type");
        if ((iVar4 == 0) || (*(char *)(*plVar2 + 0xc) != ':')) {
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar2 + lVar8) != '\0');
          lVar7 = lVar7 + 2 + lVar8;
        }
      }
      lVar6 = lVar6 + lVar9 + 2 + lVar7;
    }
    lVar9 = lVar6;
    if (-1 < lVar6) {
      lVar9 = lVar3;
    }
    if (-1 < lVar9) {
      lVar9 = lVar9 + 0x34 + lVar6;
    }
    lVar3 = lVar9;
  }
  return lVar3;
}



// FUNCTION 144f0aae0 FUN_144f0aae0 body=112 status=ok
// SIG undefined FUN_144f0aae0(void)

undefined8 FUN_144f0aae0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144b46ff0();
  *(longlong *)(param_1 + 0x58) = lVar1;
  if (lVar1 == 0) {
    return 1;
  }
  *(undefined1 *)(lVar1 + 0x14d8) = 1;
  FUN_144f1a960(param_1,param_2,&LAB_144f1adc0,FUN_144f1adf0,&DAT_144f0b8a0);
  *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xc90) = param_1;
  return 0;
}



// FUNCTION 144f0ab50 FUN_144f0ab50 body=10 status=ok
// SIG undefined FUN_144f0ab50(void)

void FUN_144f0ab50(longlong *param_1)

{
  int iVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    if (0 < (int)param_1[4]) {
      do {
        FUN_144f1a890((longlong)iVar1 * 0x20 + *param_1,param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[4]);
    }
    (*(code *)PTR_free_14c6d9f28)(*param_1);
    *param_1 = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 144f0ab60 FUN_144f0ab60 body=251 status=ok
// SIG undefined FUN_144f0ab60(void)

void FUN_144f0ab60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,5,2);
  }
  if (param_3 != 0) {
    local_a8 = *(undefined4 *)(param_2 + 0x4c4);
    if ((*(char *)(param_2 + 0x2c8) == '\0') || (*(char *)(param_2 + 0x2cb) != '\0')) {
      if (*(char *)(param_2 + 0x2d1) == '\0') {
        local_a0 = *(undefined8 *)(param_2 + 0x70);
      }
      else {
        local_a0 = *(undefined8 *)(param_2 + 0xa0);
      }
    }
    else {
      local_a0 = *(undefined8 *)(param_2 + 0xf8);
      local_a8 = *(undefined4 *)(param_2 + 0x4c0);
    }
    FUN_144f2b7e0(local_98,0x80,"%u/%ld/%s",*(undefined4 *)(param_2 + 0x4cc));
    FUN_144f19680(local_98,local_98,0x80);
    lVar2 = -1;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (local_98[lVar1] != '\0');
    FUN_144f1ab60(param_3,local_98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144f0ac70 FUN_144f0ac70 body=85 status=ok
// SIG undefined FUN_144f0ac70(void)

undefined8 FUN_144f0ac70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,5,2);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xc90) + 0x30);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,5);
  }
  return uVar1;
}



// FUNCTION 144f0acd0 FUN_144f0acd0 body=537 status=ok
// SIG undefined FUN_144f0acd0(void)

bool FUN_144f0acd0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  iVar10 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x170);
  if (iVar10 < 0) {
    iVar10 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x18) << 2;
  }
  lVar16 = 0;
  puVar11 = (undefined4 *)FUN_144f07150(&local_78);
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  *(undefined4 *)(param_2 + 0x198) = *puVar11;
  *(undefined4 *)(param_2 + 0x19c) = uVar5;
  *(undefined4 *)(param_2 + 0x1a0) = uVar6;
  *(undefined4 *)(param_2 + 0x1a4) = uVar7;
  if ((longlong)iVar10 != 0) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbeca0(param_1,5,2);
    }
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xc90) + 0x30);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbece0(param_1,5);
    }
    if ((ulonglong)(longlong)iVar10 < uVar1) {
      FUN_144f14ad0(param_1,"Connection cache is full, closing the oldest one");
      lVar2 = *(longlong *)(param_1 + 0xc90);
      lVar15 = -1;
      puVar12 = (undefined8 *)FUN_144f07150(local_68);
      uVar8 = *puVar12;
      uVar9 = puVar12[1];
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbeca0(param_1,5,2);
      }
      FUN_144f1ae20(lVar2,local_58);
      lVar13 = FUN_144f1ae30(local_58);
      lVar17 = lVar16;
      if (lVar13 != 0) {
        do {
          lVar13 = *(longlong *)(lVar13 + 0x18);
          for (plVar3 = *(longlong **)(lVar13 + 0x10); plVar3 != (longlong *)0x0;
              plVar3 = (longlong *)plVar3[2]) {
            lVar4 = *plVar3;
            if (((*(longlong *)(lVar4 + 0x330) == 0) && (*(char *)(lVar4 + 0x2ce) == '\0')) &&
               (*(char *)(lVar4 + 0x4da) == '\0')) {
              local_88 = *(undefined4 *)(lVar4 + 0x198);
              uStack_84 = *(undefined4 *)(lVar4 + 0x19c);
              uStack_80 = *(undefined4 *)(lVar4 + 0x1a0);
              uStack_7c = *(undefined4 *)(lVar4 + 0x1a4);
              local_78 = uVar8;
              uStack_70 = uVar9;
              lVar14 = FUN_144f071e0(&local_78,&local_88);
              if (lVar15 < lVar14) {
                lVar15 = lVar14;
                lVar16 = lVar4;
                lVar17 = lVar13;
              }
            }
          }
          lVar13 = FUN_144f1ae30(local_58);
        } while (lVar13 != 0);
        if (lVar16 != 0) {
          FUN_144f0b830(lVar17,lVar16);
          plVar3 = (longlong *)(lVar2 + 0x30);
          *plVar3 = *plVar3 + -1;
        }
      }
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbece0(param_1,5);
      }
      if (lVar16 != 0) {
        FUN_144f0ed40(param_1,lVar16,0);
      }
    }
  }
  return lVar16 != param_2;
}



// FUNCTION 144f0aef0 FUN_144f0aef0 body=591 status=ok
// SIG undefined FUN_144f0aef0(void)

void FUN_144f0aef0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  char local_128 [128];
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar4 = (undefined4 *)0x0;
  lVar2 = *(longlong *)(param_1 + 0xc90);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,5,2);
  }
  if (lVar2 != 0) {
    local_138 = *(undefined4 *)(lVar1 + 0x4c4);
    if ((*(char *)(lVar1 + 0x2c8) == '\0') || (*(char *)(lVar1 + 0x2cb) != '\0')) {
      if (*(char *)(lVar1 + 0x2d1) == '\0') {
        local_130 = *(undefined8 *)(lVar1 + 0x70);
      }
      else {
        local_130 = *(undefined8 *)(lVar1 + 0xa0);
      }
    }
    else {
      local_130 = *(undefined8 *)(lVar1 + 0xf8);
      local_138 = *(undefined4 *)(lVar1 + 0x4c0);
    }
    FUN_144f2b7e0(local_128,0x80,"%u/%ld/%s",*(undefined4 *)(lVar1 + 0x4cc));
    FUN_144f19680(local_128,local_128,0x80);
    lVar5 = -1;
    do {
      lVar3 = lVar5 + 1;
      lVar5 = lVar5 + 1;
    } while (local_128[lVar3] != '\0');
    puVar4 = (undefined4 *)FUN_144f1ab60(lVar2,local_128);
  }
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(*(code *)PTR_malloc_14c6d9f20)(0x30);
    if (puVar4 == (undefined4 *)0x0) goto LAB_144f0b116;
    *(undefined8 *)(puVar4 + 2) = 0;
    *puVar4 = 0;
    FUN_144f1a730(puVar4 + 4,0);
    local_138 = *(undefined4 *)(lVar1 + 0x4c4);
    if ((*(char *)(lVar1 + 0x2c8) == '\0') || (*(char *)(lVar1 + 0x2cb) != '\0')) {
      if (*(char *)(lVar1 + 0x2d1) == '\0') {
        local_130 = *(undefined8 *)(lVar1 + 0x70);
      }
      else {
        local_130 = *(undefined8 *)(lVar1 + 0xa0);
      }
    }
    else {
      local_130 = *(undefined8 *)(lVar1 + 0xf8);
      local_138 = *(undefined4 *)(lVar1 + 0x4c0);
    }
    FUN_144f2b7e0(local_a8,0x80,"%u/%ld/%s",*(undefined4 *)(lVar1 + 0x4cc));
    FUN_144f19680(local_a8,local_a8,0x80);
    lVar5 = -1;
    do {
      lVar6 = lVar5 + 1;
      lVar3 = lVar5 + 1;
      lVar5 = lVar6;
    } while (local_a8[lVar3] != '\0');
    lVar5 = FUN_144f1a980(*(undefined8 *)(param_1 + 0xc90),local_a8,lVar6,puVar4);
    if (lVar5 == 0) {
      (*(code *)PTR_free_14c6d9f28)(puVar4);
      goto LAB_144f0b116;
    }
  }
  FUN_144f1a750(puVar4 + 4,*(undefined8 *)(puVar4 + 6),lVar1,lVar1);
  *(undefined4 **)(lVar1 + 0x4a0) = puVar4;
  *(longlong *)(puVar4 + 2) = *(longlong *)(puVar4 + 2) + 1;
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x38);
  *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 1;
  *(longlong *)(lVar2 + 0x30) = *(longlong *)(lVar2 + 0x30) + 1;
LAB_144f0b116:
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_158);
}



// FUNCTION 144f0b160 FUN_144f0b160 body=278 status=ok
// SIG undefined FUN_144f0b160(void)

void FUN_144f0b160(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_2 + 0x4a0);
  lVar2 = *(longlong *)(param_1 + 0xc90);
  if (lVar1 == 0) {
    return;
  }
  if ((param_3 != '\0') && (*(longlong *)(param_1 + 0xe8) != 0)) {
    FUN_144bbeca0(param_1,5,2);
  }
  FUN_144f0b830(lVar1,param_2);
  if ((*(longlong *)(lVar1 + 8) == 0) && (lVar2 != 0)) {
    FUN_144f1ae20(lVar2,local_28);
    lVar3 = FUN_144f1ae30(local_28);
    if (lVar3 == 0) goto LAB_144f0b22b;
    do {
      if (*(longlong *)(lVar3 + 0x18) == lVar1) {
        FUN_144f1aab0(lVar2,lVar3 + 0x28,*(undefined8 *)(lVar3 + 0x20));
        *(undefined8 *)(param_2 + 0x4a0) = 0;
        goto LAB_144f0b23b;
      }
      lVar3 = FUN_144f1ae30(local_28);
    } while (lVar3 != 0);
    *(undefined8 *)(param_2 + 0x4a0) = 0;
  }
  else {
LAB_144f0b22b:
    *(undefined8 *)(param_2 + 0x4a0) = 0;
    if (lVar2 == 0) goto LAB_144f0b23f;
  }
LAB_144f0b23b:
  *(longlong *)(lVar2 + 0x30) = *(longlong *)(lVar2 + 0x30) + -1;
LAB_144f0b23f:
  if ((param_3 != '\0') && (*(longlong *)(param_1 + 0xe8) != 0)) {
    FUN_144bbece0(param_1,5);
  }
  return;
}



// FUNCTION 144f0b280 FUN_144f0b280 body=253 status=ok
// SIG undefined FUN_144f0b280(void)

undefined4 FUN_144f0b280(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbeca0(param_1,5,2);
    }
    FUN_144f1ae20(param_2,local_28);
    lVar5 = FUN_144f1ae30(local_28);
    while (lVar5 != 0) {
      lVar1 = *(longlong *)(lVar5 + 0x18);
      lVar5 = FUN_144f1ae30(local_28);
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      while (puVar2 != (undefined8 *)0x0) {
        uVar3 = *puVar2;
        puVar2 = (undefined8 *)puVar2[2];
        iVar4 = (*param_4)(param_1,uVar3,param_3);
        if (iVar4 == 1) {
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            FUN_144bbece0(param_1,5);
          }
          return 1;
        }
      }
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbece0(param_1,5);
    }
  }
  return 0;
}



// FUNCTION 144f0b380 FUN_144f0b380 body=195 status=ok
// SIG undefined FUN_144f0b380(void)

longlong FUN_144f0b380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar7 = -1;
  lVar8 = 0;
  puVar4 = (undefined8 *)FUN_144f07150(&local_38);
  plVar6 = *(longlong **)(param_2 + 0x10);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  if (plVar6 != (longlong *)0x0) {
    do {
      lVar1 = *plVar6;
      if (*(longlong *)(lVar1 + 0x330) == 0) {
        local_48 = *(undefined4 *)(lVar1 + 0x198);
        uStack_44 = *(undefined4 *)(lVar1 + 0x19c);
        uStack_40 = *(undefined4 *)(lVar1 + 0x1a0);
        uStack_3c = *(undefined4 *)(lVar1 + 0x1a4);
        local_38 = uVar2;
        uStack_30 = uVar3;
        lVar5 = FUN_144f071e0(&local_38,&local_48);
        if (lVar7 < lVar5) {
          lVar7 = lVar5;
          lVar8 = lVar1;
        }
      }
      plVar6 = (longlong *)plVar6[2];
    } while (plVar6 != (longlong *)0x0);
    if (lVar8 != 0) {
      FUN_144f0b830(param_2,lVar8);
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xc90) + 0x30);
      *plVar6 = *plVar6 + -1;
    }
  }
  return lVar8;
}



// FUNCTION 144f0b450 FUN_144f0b450 body=368 status=ok
// SIG undefined FUN_144f0b450(void)

longlong FUN_144f0b450(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [48];
  
  lVar10 = 0;
  lVar1 = *(longlong *)(param_1 + 0xc90);
  lVar9 = -1;
  puVar6 = (undefined8 *)FUN_144f07150(&local_68);
  uVar4 = *puVar6;
  uVar5 = puVar6[1];
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,5,2);
  }
  FUN_144f1ae20(lVar1,local_58);
  lVar7 = FUN_144f1ae30(local_58);
  lVar11 = lVar10;
  if (lVar7 != 0) {
    do {
      lVar7 = *(longlong *)(lVar7 + 0x18);
      for (plVar2 = *(longlong **)(lVar7 + 0x10); plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[2]) {
        lVar3 = *plVar2;
        if (((*(longlong *)(lVar3 + 0x330) == 0) && (*(char *)(lVar3 + 0x2ce) == '\0')) &&
           (*(char *)(lVar3 + 0x4da) == '\0')) {
          local_78 = *(undefined4 *)(lVar3 + 0x198);
          uStack_74 = *(undefined4 *)(lVar3 + 0x19c);
          uStack_70 = *(undefined4 *)(lVar3 + 0x1a0);
          uStack_6c = *(undefined4 *)(lVar3 + 0x1a4);
          local_68 = uVar4;
          uStack_60 = uVar5;
          lVar8 = FUN_144f071e0(&local_68,&local_78);
          if (lVar9 < lVar8) {
            lVar9 = lVar8;
            lVar10 = lVar3;
            lVar11 = lVar7;
          }
        }
      }
      lVar7 = FUN_144f1ae30(local_58);
    } while (lVar7 != 0);
    if (lVar10 != 0) {
      FUN_144f0b830(lVar11,lVar10);
      plVar2 = (longlong *)(lVar1 + 0x30);
      *plVar2 = *plVar2 + -1;
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,5);
  }
  return lVar10;
}



// FUNCTION 144f0b5c0 FUN_144f0b5c0 body=598 status=ok
// SIG undefined FUN_144f0b5c0(void)

void FUN_144f0b5c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_4b8 [32];
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  undefined1 local_468 [32];
  undefined1 local_448 [1040];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if (*(longlong *)(param_1 + 0x58) == 0) goto LAB_144f0b806;
  *(undefined1 **)(*(longlong *)(param_1 + 0x58) + 0xcd8) = local_448;
  *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x6cc) = 0x400;
  FUN_144f1ae20(param_1,local_498);
  lVar5 = FUN_144f1ae30(local_498);
  while (lVar5 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x18) + 0x10);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = *plVar1;
      if (lVar5 != 0) goto LAB_144f0b690;
      break;
    }
    lVar5 = FUN_144f1ae30(local_498);
  }
  goto LAB_144f0b7da;
  while( true ) {
    FUN_144f0ed40(*(undefined8 *)(param_1 + 0x58),lVar5,0);
    FUN_144f1ae20(param_1,local_468);
    lVar5 = FUN_144f1ae30(local_468);
    while( true ) {
      if (lVar5 == 0) goto LAB_144f0b7da;
      plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x18) + 0x10);
      if (plVar1 != (longlong *)0x0) break;
      lVar5 = FUN_144f1ae30(local_468);
    }
    lVar5 = *plVar1;
    if (lVar5 == 0) break;
LAB_144f0b690:
    FUN_144f16220(lVar5,1);
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar3 = *(longlong *)(lVar5 + 0x4a0);
    lVar4 = *(longlong *)(lVar2 + 0xc90);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar2 + 0xe8) != 0) {
        FUN_144bbeca0(lVar2,5,2);
      }
      FUN_144f0b830(lVar3,lVar5);
      if ((*(longlong *)(lVar3 + 8) == 0) && (lVar4 != 0)) {
        FUN_144f1ae20(lVar4,local_480);
        lVar6 = FUN_144f1ae30(local_480);
        if (lVar6 == 0) goto LAB_144f0b73b;
        do {
          if (*(longlong *)(lVar6 + 0x18) == lVar3) {
            FUN_144f1aab0(lVar4,lVar6 + 0x28,*(undefined8 *)(lVar6 + 0x20));
            *(undefined8 *)(lVar5 + 0x4a0) = 0;
            goto LAB_144f0b747;
          }
          lVar6 = FUN_144f1ae30(local_480);
        } while (lVar6 != 0);
        *(undefined8 *)(lVar5 + 0x4a0) = 0;
LAB_144f0b747:
        *(longlong *)(lVar4 + 0x30) = *(longlong *)(lVar4 + 0x30) + -1;
      }
      else {
LAB_144f0b73b:
        *(undefined8 *)(lVar5 + 0x4a0) = 0;
        if (lVar4 != 0) goto LAB_144f0b747;
      }
      if (*(longlong *)(lVar2 + 0xe8) != 0) {
        FUN_144bbece0(lVar2,5);
      }
    }
  }
LAB_144f0b7da:
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xcd8) = 0;
  FUN_144f1bac0(*(longlong *)(param_1 + 0x58),*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 200));
  FUN_144f0e6d0(param_1 + 0x58);
LAB_144f0b806:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_4b8);
}



// FUNCTION 144f0b830 FUN_144f0b830 body=98 status=ok
// SIG undefined FUN_144f0b830(void)

undefined8 FUN_144f0b830(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (longlong *)plVar1[2];
  }
  FUN_144f1a7d0(param_1 + 0x10,plVar1,0);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  *(undefined8 *)(param_2 + 0x4a0) = 0;
  return 1;
}



// FUNCTION 144f0b8d0 FUN_144f0b8d0 body=6 status=ok
// SIG undefined FUN_144f0b8d0(void)

undefined8 FUN_144f0b8d0(void)

{
  return 0xffffffff;
}



// FUNCTION 144f0b960 FUN_144f0b960 body=3 status=ok
// SIG undefined FUN_144f0b960(void)

undefined1 FUN_144f0b960(void)

{
  return 0;
}



// FUNCTION 144f0b970 FUN_144f0b970 body=466 status=ok
// SIG undefined FUN_144f0b970(void)

void FUN_144f0b970(char *param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  char *local_128;
  undefined1 *local_120;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pcVar6 = &DAT_14c7975f0;
  puVar4 = PTR_DAT_14c70f1a0;
  if (PTR_DAT_14c70f1a0 == &DAT_149c05b20) {
    puVar4 = PTR_DAT_14c70f1a8;
  }
  local_128 = param_1;
  local_120 = param_2;
  if (puVar4 != DAT_14c7975e0) {
    puVar8 = &DAT_14c7975f0;
    DAT_14c7975f0 = 0;
    DAT_14c7975e0 = puVar4;
    if (PTR_DAT_14c70f1a8 != (undefined *)0x0) {
      lVar7 = 0;
      puVar4 = PTR_DAT_14c70f1a8;
      do {
        bVar10 = DAT_14c7975e0 != puVar4;
        lVar5 = (**(code **)(puVar4 + 0x30))(local_118,200);
        if (lVar5 != 0) {
          local_138 = &DAT_14996de1b;
          if (bVar10) {
            local_138 = &DAT_149982a50;
          }
          local_148 = &DAT_14996de1b;
          puVar9 = &DAT_14996de1b;
          if (bVar10) {
            local_148 = &DAT_149c05c88;
          }
          local_140 = local_118;
          if (puVar8 != &DAT_14c7975f0) {
            puVar9 = &DAT_149982a34;
          }
          iVar3 = FUN_144f2b7e0(puVar8,(longlong)&DAT_14c7976b8 - (longlong)puVar8,"%s%s%s%s",puVar9
                               );
          puVar8 = puVar8 + iVar3;
        }
        puVar4 = (undefined *)(&DAT_14c70f1b0)[lVar7];
        lVar7 = lVar7 + 1;
      } while (puVar4 != (undefined *)0x0);
    }
    DAT_14c7975e8 = puVar8 + -0x14c7975f0;
  }
  puVar8 = local_120;
  pcVar2 = local_128;
  if (local_120 != (undefined1 *)0x0) {
    if (DAT_14c7975e8 < local_120) {
      do {
        cVar1 = *pcVar6;
        (local_128 + -0x14c7975f0)[(longlong)pcVar6] = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
    }
    else {
      strncpy(local_128,&DAT_14c7975f0,(size_t)(local_120 + -1));
      pcVar2[(longlong)(puVar8 + -1)] = '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 144f0bb50 FUN_144f0bb50 body=40 status=ok
// SIG undefined FUN_144f0bb50(void)

undefined8 FUN_144f0bb50(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f0bb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x20))();
  return uVar2;
}



// FUNCTION 144f0bb80 FUN_144f0bb80 body=70 status=ok
// SIG undefined FUN_144f0bb80(void)

undefined8 FUN_144f0bb80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 != 0) {
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f0bbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x60))(param_1,param_2);
  return uVar2;
}



// FUNCTION 144f0bbd0 FUN_144f0bbd0 body=91 status=ok
// SIG undefined FUN_144f0bbd0(void)

undefined8 FUN_144f0bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 != 0) {
    return 2;
  }
  uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x68))(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144f0bc30 FUN_144f0bc30 body=88 status=ok
// SIG undefined FUN_144f0bc30(void)

undefined8 FUN_144f0bc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f0bc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x70))(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144f0bc90 FUN_144f0bc90 body=65 status=ok
// SIG undefined FUN_144f0bc90(void)

undefined8 FUN_144f0bc90(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x78))(param_1,param_2);
  return uVar2;
}



// FUNCTION 144f0bce0 FUN_144f0bce0 body=57 status=ok
// SIG undefined FUN_144f0bce0(void)

void FUN_144f0bce0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 == 0) {
    (**(code **)(PTR_DAT_14c70f1a0 + 0x80))(param_1,param_2);
  }
  return;
}



// FUNCTION 144f0bd20 FUN_144f0bd20 body=106 status=ok
// SIG undefined FUN_144f0bd20(void)

undefined8
FUN_144f0bd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0xd8))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 144f0bd90 FUN_144f0bd90 body=106 status=ok
// SIG undefined FUN_144f0bd90(void)

undefined8
FUN_144f0bd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144f0df10(0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0xe0))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 144f0be00 FUN_144f0be00 body=85 status=ok
// SIG undefined FUN_144f0be00(void)

void FUN_144f0be00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
  FUN_144f0e070();
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar2 + 0x20));
    (*(code *)PTR_free_14c6d9f28)(lVar2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 144f0be60 FUN_144f0be60 body=80 status=ok
// SIG undefined FUN_144f0be60(void)

void FUN_144f0be60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
  FUN_144f0e070();
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  return;
}



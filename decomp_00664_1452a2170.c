// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1452a2170 FUN_1452a2170 body=368 status=ok
// SIG undefined FUN_1452a2170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1452a2170(int param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int *piVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  int *piVar7;
  
  uStack_30 = 0x1452a2192;
  piVar7 = (int *)0x0;
  piVar8 = (int *)0x0;
  local_38 = 0;
  lVar2 = FUN_144babca0();
  piVar3 = piVar7;
  piVar5 = piVar7;
  if (lVar2 != 0) {
    piVar5 = piVar8;
    if (param_2 != 0) {
      piVar3 = (int *)0x0;
      if ((param_3 == 0) || (piVar3 = (int *)FUN_145282850(param_3,param_2), piVar3 == (int *)0x0))
      goto LAB_1452a2291;
      iVar1 = FUN_144babbf0(piVar3);
      if (0 < iVar1) {
        do {
          lVar4 = FUN_144babc00(piVar3,piVar7);
          lVar4 = FUN_1452a1830(*(undefined8 *)(lVar4 + 0x10),param_3,param_4 + 1,param_5);
          if ((lVar4 == 0) || (iVar1 = FUN_144bac1c0(lVar2,lVar4), iVar1 == 0)) goto LAB_1452a2291;
          uVar6 = (int)piVar7 + 1;
          piVar7 = (int *)(ulonglong)uVar6;
          iVar1 = FUN_144babbf0(piVar3);
        } while ((int)uVar6 < iVar1);
      }
    }
    if (param_1 == 0x11) {
      iVar1 = FUN_144efe750();
    }
    else {
      iVar1 = FUN_144efe730(lVar2,&local_38);
    }
    if ((-1 < iVar1) && (piVar5 = (int *)FUN_144efe770(), piVar5 != (int *)0x0)) {
      lVar4 = FUN_144f03c50(param_1);
      *(longlong *)(piVar5 + 2) = lVar4;
      if (lVar4 != 0) {
        *piVar5 = param_1;
        *(undefined8 *)(lVar4 + 8) = local_38;
        **(int **)(piVar5 + 2) = iVar1;
        local_38 = 0;
      }
    }
  }
LAB_1452a2291:
  FUN_144ea6530(local_38,"crypto\\asn1\\asn1_gen.c",0x1ca);
  FUN_144babe00(lVar2,FUN_144efe790);
  FUN_1452828b0(param_3,piVar3);
  return piVar5;
}



// FUNCTION 1452a22e0 FUN_1452a22e0 body=1112 status=ok
// SIG undefined FUN_1452a22e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1452a22e0(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 uStack_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_20 = 0x1452a22f3;
  piVar3 = (int *)FUN_144efe770();
  if (piVar3 == (int *)0x0) {
    FUN_144ba24f0(0xd,0xb3,0x41,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x24b));
    return (int *)0x0;
  }
  pcVar5 = "";
  if (param_1 != (char *)0x0) {
    pcVar5 = param_1;
  }
  switch(param_3) {
  case 1:
    if (param_2 != 1) {
      FUN_144ba24f0(0xd,0xb3,0xbe,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x25d));
      goto LAB_1452a271b;
    }
    local_30 = 0;
    local_38 = 0;
    local_28 = pcVar5;
    iVar2 = FUN_144ef5960(&local_38,piVar3 + 2);
    if (iVar2 != 0) goto LAB_1452a267c;
    uVar8 = 0x264;
    uVar7 = 0xb0;
    break;
  case 2:
  case 10:
    if (param_2 != 1) {
      FUN_144ba24f0(0xd,0xb3,0xb9,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x26c));
      goto LAB_1452a271b;
    }
    lVar4 = FUN_144ef5e60(0,pcVar5);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 != 0) goto LAB_1452a267c;
    uVar8 = 0x271;
    uVar7 = 0xb4;
    break;
  case 3:
  case 4:
    lVar4 = FUN_144f03a20();
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      FUN_144ba24f0(0xd,0xb3,0x41,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x2b4));
      goto LAB_1452a271b;
    }
    if (param_2 == 3) {
      lVar4 = FUN_144ea6a80(pcVar5,local_res20);
      if (lVar4 != 0) {
        *(longlong *)(*(longlong *)(piVar3 + 2) + 8) = lVar4;
        **(undefined4 **)(piVar3 + 2) = local_res20[0];
        *(int *)(*(longlong *)(piVar3 + 2) + 4) = param_3;
LAB_1452a2667:
        if (param_3 == 3) {
          *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) =
               *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) & 0xfffffff0;
          *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) =
               *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) | 8;
        }
LAB_1452a267c:
        *piVar3 = param_3;
        return piVar3;
      }
      uVar8 = 0x2ba;
      uVar7 = 0xb2;
    }
    else {
      if (param_2 == 1) {
        FUN_144f03d00(lVar4,pcVar5,0xffffffff);
        goto LAB_1452a2667;
      }
      if ((param_2 != 4) || (param_3 != 3)) {
        FUN_144ba24f0(0xd,0xb3,0xaf,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x2cc));
        goto LAB_1452a271b;
      }
      iVar2 = FUN_144ba1dc0(pcVar5,0x2c,1,FUN_1452a1b40,lVar4);
      if (iVar2 != 0) goto LAB_1452a267c;
      uVar8 = 0x2c6;
      uVar7 = 0xbc;
    }
    break;
  case 5:
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      FUN_144ba24f0(0xd,0xb3,0xb6,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x256));
      goto LAB_1452a271b;
    }
    goto LAB_1452a267c;
  case 6:
    if (param_2 != 1) {
      FUN_144ba24f0(0xd,0xb3,0xbf,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x278));
      goto LAB_1452a271b;
    }
    lVar4 = FUN_144ea90e0(pcVar5,0);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 != 0) goto LAB_1452a267c;
    uVar8 = 0x27c;
    uVar7 = 0xb7;
    break;
  default:
    uVar8 = CONCAT44(uVar7,0x2d9);
    uVar7 = 0xc4;
    break;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (param_2 == 1) {
      uVar6 = 0x1001;
    }
    else {
      if (param_2 != 2) {
        FUN_144ba24f0(0xd,0xb3,0xb1,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x2a5));
        goto LAB_1452a271b;
      }
      uVar6 = 0x1000;
    }
    uVar1 = FUN_144eff7d0(param_3);
    iVar2 = FUN_1454ca560(piVar3 + 2,pcVar5,0xffffffff,uVar6,CONCAT44(uVar7,uVar1));
    if (0 < iVar2) goto LAB_1452a267c;
    uVar8 = 0x2ab;
    uVar7 = 0x41;
    break;
  case 0x17:
  case 0x18:
    if (param_2 != 1) {
      FUN_144ba24f0(0xd,0xb3,0xc1,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x284));
      goto LAB_1452a271b;
    }
    lVar4 = FUN_144f03a20();
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      uVar8 = 0x288;
      uVar7 = 0x41;
    }
    else {
      iVar2 = FUN_144f03d00(lVar4,pcVar5,0xffffffff);
      if (iVar2 == 0) {
        uVar8 = 0x28c;
        uVar7 = 0x41;
      }
      else {
        *(int *)(*(longlong *)(piVar3 + 2) + 4) = param_3;
        iVar2 = FUN_144ef2250(*(undefined8 *)(piVar3 + 2));
        if (iVar2 != 0) goto LAB_1452a267c;
        uVar8 = 0x291;
        uVar7 = 0xb8;
      }
    }
  }
  FUN_144ba24f0(0xd,0xb3,uVar7,"crypto\\asn1\\asn1_gen.c",uVar8);
  FUN_144ba2bd0(2,"string=",pcVar5);
LAB_1452a271b:
  FUN_144efe790(piVar3);
  return (int *)0x0;
}



// FUNCTION 1452a2780 FUN_1452a2780 body=151 status=ok
// SIG undefined FUN_1452a2780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1452a2780(char *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (param_1[uVar2] != '\0');
  }
  uVar3 = 0;
  DAT_14c7fc5f0 = &PTR_DAT_149d23110;
  do {
    if ((int)uVar2 == *(int *)(DAT_14c7fc5f0 + 1)) {
      iVar1 = strncmp(*DAT_14c7fc5f0,param_1,(longlong)(int)uVar2);
      if (iVar1 == 0) {
        return *(undefined4 *)((longlong)DAT_14c7fc5f0 + 0xc);
      }
    }
    DAT_14c7fc5f0 = DAT_14c7fc5f0 + 2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x31);
  return 0xffffffff;
}



// FUNCTION 1452a2820 FUN_1452a2820 body=159 status=ok
// SIG undefined FUN_1452a2820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1452a2820(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == 3) {
      iVar1 = strncmp(param_1,"DIR",3);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 0x2906;
        return 1;
      }
    }
    uVar2 = FUN_1452a2780(param_1,param_2);
    if ((uVar2 != 0) && ((uVar2 >> 0x10 & 1) == 0)) {
      uVar2 = FUN_144eff7d0(uVar2);
      if (uVar2 != 0) {
        *param_3 = *param_3 | uVar2;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1452a28c0 FUN_1452a28c0 body=379 status=ok
// SIG undefined FUN_1452a28c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452a28c0(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x1452a28d4;
  if (param_1 == 0) {
    FUN_144ba24f0(0x26,0x8e,0x43,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x81),0x1452a28d4);
    return 0;
  }
  FUN_144e98620(DAT_14c797590);
  iVar1 = *(int *)(param_1 + 0x9c);
  FUN_144e98640(DAT_14c797590);
  pcVar2 = *(code **)(param_1 + 0x70);
  uVar3 = (ulonglong)(pcVar2 != (code *)0x0);
  if (iVar1 < 1) {
    FUN_144ba24f0(0x26,0x8e,0x82,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x89),uVar5);
    uVar3 = 0;
  }
  else if (param_2 != 10) {
    if (param_2 - 0xbU < 8) {
      if (pcVar2 == (code *)0x0) {
        FUN_144ba24f0(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x9e),uVar5);
        return 0xffffffff;
      }
      if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
        uVar3 = FUN_1452a2db0(param_1,param_2,param_3,param_4,param_5);
        return uVar3;
      }
    }
    if (pcVar2 == (code *)0x0) {
      FUN_144ba24f0(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0xab),uVar5);
      uVar3 = 0;
    }
    else {
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar3;
}



// FUNCTION 1452a2a40 FUN_1452a2a40 body=93 status=ok
// SIG undefined FUN_1452a2a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452a2a40(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_1452a28c0(param_1,0x12,param_2,0,0,0x1452a2a4c);
  if ((int)uVar1 < 0) {
    FUN_144ba24f0(0x26,0xaa,0x8a,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar2,0xb7));
    return false;
  }
  return (uVar1 & 7) != 0;
}



// FUNCTION 1452a2aa0 FUN_1452a2aa0 body=252 status=ok
// SIG undefined FUN_1452a2aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452a2aa0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452a2ab5;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_144ba24f0(0x26,0xb2,0x43,"crypto\\engine\\eng_ctrl.c",199,0x1452a2ab5);
    return false;
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (iVar1 = FUN_1452a28c0(param_1,0xd,0,param_2,0), 0 < iVar1)) {
    iVar1 = FUN_1452a28c0(param_1,iVar1,param_3,param_4,param_5);
    return 0 < iVar1;
  }
  if (param_6 == 0) {
    FUN_144ba24f0(0x26,0xb2,0x89,"crypto\\engine\\eng_ctrl.c",0xd9,uVar2);
  }
  else {
    FUN_144ba26f0();
  }
  return param_6 != 0;
}



// FUNCTION 1452a2ba0 FUN_1452a2ba0 body=527 status=ok
// SIG undefined FUN_1452a2ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452a2ba0(longlong param_1,longlong param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_res8;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1452a2baf;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_144ba24f0(0x26,0xab,0x43,"crypto\\engine\\eng_ctrl.c",0xed,0x1452a2baf);
    return false;
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     (iVar1 = FUN_1452a28c0(param_1,0xd,0,param_2,0), iVar1 < 1)) {
    if (param_4 != 0) {
      FUN_144ba26f0();
      return true;
    }
    uVar6 = 0xff;
    uVar5 = 0x89;
  }
  else {
    iVar2 = FUN_1452a2a40(param_1,iVar1);
    if (iVar2 == 0) {
      uVar6 = 0x104;
      uVar5 = 0x86;
    }
    else {
      uVar3 = FUN_1452a28c0(param_1,0x12,iVar1,0,0);
      if ((int)uVar3 < 0) {
        uVar6 = 0x10f;
      }
      else {
        if ((uVar3 & 4) != 0) {
          if (param_3 == (char *)0x0) {
            param_3 = (char *)0x0;
            lVar4 = 0;
            goto LAB_1452a2d0e;
          }
          uVar6 = 0x118;
          uVar5 = 0x88;
          goto LAB_1452a2c70;
        }
        if (param_3 == (char *)0x0) {
          uVar6 = 0x128;
          uVar5 = 0x87;
          goto LAB_1452a2c70;
        }
        if ((uVar3 & 2) != 0) {
          lVar4 = 0;
LAB_1452a2d0e:
          iVar1 = FUN_1452a28c0(param_1,iVar1,lVar4,param_3,0);
          return 0 < iVar1;
        }
        if ((uVar3 & 1) != 0) {
          lVar4 = strtol(param_3,&local_res8,10);
          if ((param_3 == local_res8) || (*local_res8 != '\0')) {
            uVar6 = 0x140;
            uVar5 = 0x85;
            goto LAB_1452a2c70;
          }
          param_3 = (char *)0x0;
          goto LAB_1452a2d0e;
        }
        uVar6 = 0x13a;
      }
      uVar5 = 0x6e;
    }
  }
LAB_1452a2c70:
  FUN_144ba24f0(0x26,0xab,uVar5,"crypto\\engine\\eng_ctrl.c",uVar6,uVar7);
  return false;
}



// FUNCTION 1452a2db0 FUN_1452a2db0 body=692 status=ok
// SIG undefined FUN_1452a2db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452a2db0(longlong param_1,int param_2,uint param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  
  if (param_2 == 0xb) {
    puVar4 = *(uint **)(param_1 + 0x90);
    if (((puVar4 != (uint *)0x0) && (*puVar4 != 0)) && (*(longlong *)(puVar4 + 2) != 0)) {
      return (ulonglong)*puVar4;
    }
    return 0;
  }
  if ((((param_2 - 0xdU & 0xfffffff9) == 0) && (param_2 != 0x13)) && (param_4 == (char *)0x0)) {
    FUN_144ba24f0(0x26,0xac,0x43,"crypto\\engine\\eng_ctrl.c",0x4f);
    return 0xffffffffffffffff;
  }
  puVar4 = *(uint **)(param_1 + 0x90);
  if (param_2 == 0xd) {
    if (puVar4 != (uint *)0x0) {
      iVar12 = 0;
      for (puVar6 = puVar4; *puVar6 != 0; puVar6 = puVar6 + 8) {
        pcVar5 = *(char **)(puVar6 + 2);
        if (pcVar5 == (char *)0x0) {
LAB_1452a2e90:
          if (((*puVar6 != 0) && (*(longlong *)(puVar6 + 2) != 0)) && (-1 < iVar12)) {
            return (ulonglong)puVar4[(longlong)iVar12 * 8];
          }
          break;
        }
        lVar11 = (longlong)param_4 - (longlong)pcVar5;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[lVar11];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_1452a2e90;
        iVar12 = iVar12 + 1;
      }
    }
    uVar13 = 0x57;
    uVar10 = 0x89;
  }
  else {
    if (puVar4 != (uint *)0x0) {
      iVar12 = 0;
      for (puVar6 = puVar4;
          ((uVar3 = *puVar6, uVar3 != 0 && (*(longlong *)(puVar6 + 2) != 0)) && (uVar3 < param_3));
          puVar6 = puVar6 + 8) {
        iVar12 = iVar12 + 1;
      }
      if ((uVar3 == param_3) && (-1 < iVar12)) {
        switch(param_2) {
        case 0xc:
          if ((puVar4[(longlong)iVar12 * 8 + 8] != 0) &&
             (*(longlong *)(puVar4 + (longlong)iVar12 * 8 + 10) != 0)) {
            return (ulonglong)puVar4[(longlong)iVar12 * 8 + 8];
          }
          return 0;
        default:
          uVar13 = 0x79;
          uVar10 = 0x6e;
          break;
        case 0xe:
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (*(char *)(*(longlong *)(puVar4 + (longlong)iVar12 * 8 + 2) + uVar7) != '\0');
          return uVar7;
        case 0xf:
          pcVar5 = *(char **)(puVar4 + (longlong)iVar12 * 8 + 2);
          pcVar9 = param_4;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *pcVar9 = cVar1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (param_4[uVar7] != '\0');
          return uVar7;
        case 0x10:
          puVar8 = *(undefined **)(puVar4 + (longlong)iVar12 * 8 + 4);
          if (*(undefined **)(puVar4 + (longlong)iVar12 * 8 + 4) == (undefined *)0x0) {
            puVar8 = PTR_DAT_14c732138;
          }
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (puVar8[uVar7] != '\0');
          return uVar7;
        case 0x11:
          pcVar5 = *(char **)(puVar4 + (longlong)iVar12 * 8 + 4);
          if (*(char **)(puVar4 + (longlong)iVar12 * 8 + 4) == (char *)0x0) {
            pcVar5 = PTR_DAT_14c732138;
          }
          lVar11 = (longlong)param_4 - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            pcVar5[lVar11] = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (param_4[uVar7] != '\0');
          return uVar7;
        case 0x12:
          return (ulonglong)puVar4[(longlong)iVar12 * 8 + 6];
        }
        goto LAB_1452a3040;
      }
    }
    uVar13 = 0x62;
    uVar10 = 0x8a;
  }
LAB_1452a3040:
  FUN_144ba24f0(0x26,0xac,uVar10,"crypto\\engine\\eng_ctrl.c",uVar13);
  return 0xffffffffffffffff;
}



// FUNCTION 1452a3080 FUN_1452a3080 body=22 status=ok
// SIG undefined FUN_1452a3080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a3080(void)

{
  FUN_144f03d00();
  return;
}



// FUNCTION 1452a30a0 FUN_1452a30a0 body=309 status=ok
// SIG undefined FUN_1452a30a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a30a0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  bVar2 = (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f));
  bVar1 = bVar2;
  if (param_3 == 0) {
    bVar1 = 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  param_1[4] = param_1[4] & 0xfffffff0;
  iVar6 = iVar3 + 1;
  if ((*param_1 < iVar6) || (*(longlong *)(param_1 + 2) == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    lVar5 = FUN_144ea6770(*(undefined8 *)(param_1 + 2),(longlong)*param_1,(longlong)iVar6,
                          "crypto\\asn1\\a_bitstr.c",0xa5,0x1452a30b4);
    if (lVar5 == 0) {
      FUN_144ba24f0(0xd,0xb7,0x41,"crypto\\asn1\\a_bitstr.c",0xa7);
      return 0;
    }
    iVar4 = (iVar3 - *param_1) + 1;
    if (0 < iVar4) {
      memset((void *)(*param_1 + lVar5),0,(longlong)iVar4);
    }
    *(longlong *)(param_1 + 2) = lVar5;
    *param_1 = iVar6;
  }
  *(byte *)((longlong)iVar3 + *(longlong *)(param_1 + 2)) =
       *(byte *)((longlong)iVar3 + *(longlong *)(param_1 + 2)) & ~bVar2 | bVar1;
  if (0 < *param_1) {
    do {
      if (*(char *)((longlong)(*param_1 + -1) + *(longlong *)(param_1 + 2)) != '\0') {
        return 1;
      }
      *param_1 = *param_1 + -1;
    } while (0 < *param_1);
  }
  return 1;
}



// FUNCTION 1452a31e0 FUN_1452a31e0 body=74 status=ok
// SIG undefined FUN_1452a31e0(void)

bool FUN_1452a31e0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if (((param_1 != (int *)0x0) && (iVar1 + 1 <= *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
    return (*(byte *)((longlong)iVar1 + *(longlong *)(param_1 + 2)) &
           (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f))) != 0;
  }
  return false;
}



// FUNCTION 1452a3230 FUN_1452a3230 body=288 status=ok
// SIG undefined FUN_1452a3230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1452a3230(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = (ulonglong)(int)uVar1;
  if (0 < (int)uVar1) {
    if ((param_1[4] & 8) != 0) {
      bVar5 = (byte)param_1[4] & 7;
      goto LAB_1452a32f0;
    }
    uVar3 = uVar2;
    do {
      uVar1 = (uint)uVar3;
      if (*(char *)(*(longlong *)(param_1 + 2) + -1 + uVar2) != '\0') break;
      uVar1 = uVar1 - 1;
      uVar3 = (ulonglong)uVar1;
      uVar2 = uVar2 - 1;
    } while (0 < (longlong)uVar2);
    bVar5 = *(byte *)((longlong)(int)(uVar1 - 1) + *(longlong *)(param_1 + 2));
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if ((bVar5 & 8) == 0) {
            if ((bVar5 & 0x10) == 0) {
              if ((bVar5 & 0x20) == 0) {
                if ((bVar5 & 0x40) == 0) {
                  bVar5 = -((bVar5 & 0x80) != 0) & 7;
                }
                else {
                  bVar5 = 6;
                }
              }
              else {
                bVar5 = 5;
              }
            }
            else {
              bVar5 = 4;
            }
          }
          else {
            bVar5 = 3;
          }
        }
        else {
          bVar5 = 2;
        }
      }
      else {
        bVar5 = 1;
      }
      goto LAB_1452a32f0;
    }
  }
  bVar5 = 0;
LAB_1452a32f0:
  if (param_2 != (longlong *)0x0) {
    pbVar4 = (byte *)*param_2;
    *pbVar4 = bVar5;
    pbVar4 = pbVar4 + 1;
    if (0 < (int)uVar1) {
      memcpy(pbVar4,*(void **)(param_1 + 2),(longlong)(int)uVar1);
      pbVar4 = pbVar4 + (int)uVar1;
      pbVar4[-1] = pbVar4[-1] & -1 << bVar5;
    }
    *param_2 = (longlong)pbVar4;
  }
  return uVar1 + 1;
}



// FUNCTION 1452a3350 FUN_1452a3350 body=345 status=ok
// SIG undefined FUN_1452a3350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1452a3350(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int *_Dst;
  byte *_Src;
  undefined4 uVar4;
  size_t _Size;
  undefined8 uVar5;
  
  uVar5 = 0x1452a3372;
  _Dst = (int *)0x0;
  if (param_3 < 1) {
    uVar4 = 0x98;
    piVar3 = _Dst;
  }
  else {
    if (((param_1 == (longlong *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
       (piVar3 = (int *)FUN_144efe800(), piVar3 == (int *)0x0)) {
      return (int *)0x0;
    }
    bVar2 = *(byte *)*param_2;
    _Src = (byte *)*param_2 + 1;
    if (bVar2 < 8) {
      piVar3[4] = piVar3[4] & 0xfffffff8;
      piVar3[4] = piVar3[4] | bVar2 | 8;
      if (1 < param_3) {
        _Size = (size_t)(param_3 + -1);
        _Dst = (int *)FUN_144ea64e0(_Size,"crypto\\asn1\\a_bitstr.c",0x75);
        if (_Dst == (int *)0x0) {
          uVar4 = 0x41;
          goto LAB_1452a3401;
        }
        memcpy(_Dst,_Src,_Size);
        pbVar1 = (byte *)((longlong)(param_3 + -2) + (longlong)_Dst);
        *pbVar1 = *pbVar1 & -1 << (bVar2 & 0x1f);
        _Src = _Src + _Size;
      }
      *piVar3 = param_3 + -1;
      FUN_144ea6530(*(undefined8 *)(piVar3 + 2),"crypto\\asn1\\a_bitstr.c",0x81);
      *(int **)(piVar3 + 2) = _Dst;
      piVar3[1] = 3;
      if (param_1 != (longlong *)0x0) {
        *param_1 = (longlong)piVar3;
      }
      *param_2 = _Src;
      return piVar3;
    }
    uVar4 = 0xdc;
  }
LAB_1452a3401:
  FUN_144ba24f0(0xd,0xbd,uVar4,"crypto\\asn1\\a_bitstr.c",0x89,uVar5);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar3)) {
    FUN_144efe820(piVar3);
  }
  return (int *)0x0;
}



// FUNCTION 1452a34b0 FUN_1452a34b0 body=136 status=ok
// SIG undefined FUN_1452a34b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a34b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452a34d0;
  uVar2 = FUN_1455033f0();
  lVar3 = FUN_144efb8e0(uVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_144efc340(lVar3,param_1,param_2,param_3,param_4,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    FUN_144efbae0(lVar3);
  }
  return 0;
}



// FUNCTION 1452a3540 FUN_1452a3540 body=136 status=ok
// SIG undefined FUN_1452a3540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a3540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452a3560;
  uVar2 = FUN_145505040();
  lVar3 = FUN_144efb8e0(uVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_144efc340(lVar3,param_1,param_2,param_3,param_4,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    FUN_144efbae0(lVar3);
  }
  return 0;
}



// FUNCTION 1452a35d0 FUN_1452a35d0 body=25 status=ok
// SIG undefined FUN_1452a35d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a35d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001452a35e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_3 + 0x50) + 8))();
  return;
}



// FUNCTION 1452a35f0 FUN_1452a35f0 body=25 status=ok
// SIG undefined FUN_1452a35f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a35f0(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x0001452a3605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 0x50) + 0x18))();
  return;
}



// FUNCTION 1452a3610 FUN_1452a3610 body=545 status=ok
// SIG undefined FUN_1452a3610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a3610(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1452a361e;
  local_res10 = 0;
  local_res8 = 0;
  uVar1 = FUN_144ea8fa0(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_144ea8ee0(uVar1);
  lVar4 = FUN_144baab30(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_144ba5700();
  if (lVar5 == 0) {
    uVar3 = 0x342;
    uVar1 = 0x41;
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + 0x38);
    iVar2 = FUN_144ba6150(lVar5,&local_res10,lVar4,0,uVar6,uVar7);
    if (iVar2 < 1) goto LAB_1452a3692;
    uVar6 = uVar6 & 0xffffffff00000000;
    iVar2 = FUN_144ed1710(local_res10,0xffffffff,8,5,uVar6,param_1);
    uVar1 = (undefined4)(uVar6 >> 0x20);
    if (iVar2 < 1) {
      uVar3 = CONCAT44(uVar1,0x34b);
    }
    else {
      uVar3 = FUN_144ee7c70();
      iVar2 = FUN_144f01520(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar3);
      if ((local_res8 == 0) || (iVar2 = FUN_144ba5c70(lVar5,local_res8,(longlong)iVar2), iVar2 < 1))
      goto LAB_1452a3692;
      FUN_144ea6530(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x355);
      local_res8 = 0;
      iVar2 = FUN_144ba6180(lVar5,0,&local_res18);
      if ((iVar2 < 1) ||
         ((local_res8 = FUN_144ea64e0(CONCAT44(uStackX_1c,local_res18),"crypto\\pkcs7\\pk7_doit.c",
                                      0x359), local_res8 == 0 ||
          (iVar2 = FUN_144ba6180(lVar5,local_res8,&local_res18), iVar2 < 1)))) goto LAB_1452a3692;
      iVar2 = FUN_144ed1710(local_res10,0xffffffff,8,5,CONCAT44(uVar1,1),param_1);
      if (0 < iVar2) {
        FUN_144ba5800(lVar5);
        FUN_144f03e20(*(undefined8 *)(param_1 + 0x28),local_res8,local_res18);
        return 1;
      }
      uVar3 = 0x361;
    }
    uVar1 = 0x98;
  }
  FUN_144ba24f0(0x21,0x8b,uVar1,"crypto\\pkcs7\\pk7_doit.c",uVar3);
LAB_1452a3692:
  FUN_144ea6530(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x36c);
  FUN_144ba5800(lVar5);
  return 0;
}



// FUNCTION 1452a3840 FUN_1452a3840 body=1125 status=ok
// SIG undefined FUN_1452a3840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a3840(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  int *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452a3856;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar6 = 0;
  uVar13 = 0;
  local_a8 = (undefined8 *)0x0;
  lVar7 = 0;
  local_a0 = (int *)0x0;
  uVar5 = 0;
  uVar8 = 0;
  if (param_1 == 0) {
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xd1);
    FUN_144ba24f0(0x21,0x69,0x8f,"crypto\\pkcs7\\pk7_doit.c");
    goto LAB_1452a3c95;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xdf);
    FUN_144ba24f0(0x21,0x69,0x7a,"crypto\\pkcs7\\pk7_doit.c");
    goto LAB_1452a3c95;
  }
  iVar3 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 == 0x15) {
LAB_1452a39cf:
    iVar9 = 0;
    iVar3 = FUN_144babbf0(uVar5);
    if (0 < iVar3) {
      do {
        uVar4 = FUN_144babc00(uVar5,iVar9);
        iVar3 = FUN_1452a4340(&local_b8,uVar4);
        uVar11 = local_b8;
        if (iVar3 == 0) goto LAB_1452a3c61;
        iVar9 = iVar9 + 1;
        iVar3 = FUN_144babbf0(uVar5);
        uVar11 = local_b8;
      } while (iVar9 < iVar3);
    }
    if ((local_b0 == 0) ||
       (iVar3 = FUN_1452a4340(&local_b8,local_b0), uVar11 = local_b8, iVar3 != 0)) {
      uVar6 = uVar11;
      if (lVar7 == 0) {
LAB_1452a3bd2:
        if (param_2 == 0) {
          iVar3 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
          uVar11 = uVar6;
          if ((iVar3 == 0x16) && (iVar3 = FUN_1452a47b0(param_1,2,0,0), iVar3 != 0)) {
            uVar8 = FUN_145505110();
            param_2 = FUN_144b9e650(uVar8);
          }
          else if ((local_a0 == (int *)0x0) || (*local_a0 < 1)) {
            uVar8 = FUN_144b9ff50();
            param_2 = FUN_144b9e650(uVar8);
            uVar13 = 0;
            if (param_2 == 0) goto LAB_1452a3c61;
            FUN_144b9efc0(param_2,0x82,0,0);
          }
          else {
            param_2 = FUN_144b9ff70(*(undefined8 *)(local_a0 + 2));
          }
          uVar13 = 0;
          if (param_2 == 0) goto LAB_1452a3c61;
        }
        if (uVar6 != 0) {
          FUN_144b9f280(uVar6,param_2);
        }
        goto LAB_1452a3c95;
      }
      uVar5 = FUN_145505fc0();
      uVar6 = FUN_144b9e650(uVar5);
      if (uVar6 == 0) {
        local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x117);
        uVar12 = 0x20;
        goto LAB_1452a3978;
      }
      FUN_144b9efc0(uVar6,0x81,0,&local_b0);
      iVar3 = FUN_144ba3d80(lVar7);
      uVar12 = FUN_144ba3d90(lVar7);
      local_b8 = CONCAT44(local_b8._4_4_,uVar12);
      uVar12 = FUN_144ba3f10(lVar7);
      uVar5 = FUN_144ea8d60(uVar12);
      puVar2 = local_a8;
      *local_a8 = uVar5;
      uVar13 = uVar6;
      if (((int)local_b8 < 1) || (iVar9 = FUN_144bac850(local_98,local_b8 & 0xffffffff), 0 < iVar9))
      {
        local_c0 = 1;
        local_c8 = (undefined1 *)0x0;
        iVar9 = FUN_144ba4d00(local_b0,lVar7,0,0);
        if ((0 < iVar9) && (iVar9 = FUN_144ba5300(local_b0,local_88), 0 < iVar9)) {
          local_c8 = local_98;
          local_c0 = 1;
          iVar9 = FUN_144ba4d00(local_b0,0,0,local_88);
          if (0 < iVar9) {
            if (0 < (int)local_b8) {
              if (puVar2[1] == 0) {
                lVar7 = FUN_144efe770();
                puVar2[1] = lVar7;
                if (lVar7 == 0) goto LAB_1452a3c61;
              }
              iVar9 = FUN_144ba41b0(local_b0,puVar2[1]);
              if (iVar9 < 0) goto LAB_1452a3c61;
            }
            iVar10 = 0;
            iVar9 = FUN_144babbf0(uVar8);
            if (0 < iVar9) {
              do {
                uVar5 = FUN_144babc00(uVar8,iVar10);
                iVar9 = FUN_1452a4430(uVar5,local_88,iVar3);
                if (iVar9 < 1) goto LAB_1452a3c61;
                iVar10 = iVar10 + 1;
                iVar9 = FUN_144babbf0(uVar8);
              } while (iVar10 < iVar9);
            }
            FUN_14259f0c0(local_88,(longlong)iVar3);
            if (uVar11 != 0) {
              FUN_144b9f280(uVar11,uVar6);
              uVar6 = uVar11;
            }
            goto LAB_1452a3bd2;
          }
        }
      }
    }
  }
  else {
    if (iVar3 == 0x16) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28);
LAB_1452a39c5:
      local_a0 = (int *)FUN_1452a42e0(uVar4);
      goto LAB_1452a39cf;
    }
    if (iVar3 == 0x17) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      lVar7 = *(longlong *)(lVar1 + 0x18);
      local_a8 = *(undefined8 **)(lVar1 + 8);
      if (lVar7 != 0) goto LAB_1452a39cf;
      local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xfa);
LAB_1452a3972:
      uVar12 = 0x74;
    }
    else {
      if (iVar3 == 0x18) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        uVar5 = *(undefined8 *)(lVar1 + 8);
        lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x18);
        local_a8 = *(undefined8 **)(*(longlong *)(lVar1 + 0x28) + 8);
        if (lVar7 == 0) {
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xf1);
          goto LAB_1452a3972;
        }
        goto LAB_1452a39cf;
      }
      if (iVar3 == 0x19) {
        local_b0 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        goto LAB_1452a39c5;
      }
      local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x105);
      uVar12 = 0x70;
    }
LAB_1452a3978:
    FUN_144ba24f0(0x21,0x69,uVar12,"crypto\\pkcs7\\pk7_doit.c");
    uVar13 = uVar6;
  }
LAB_1452a3c61:
  FUN_144b9f360(uVar11);
  FUN_144b9f360(uVar13);
LAB_1452a3c95:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1452a3cc0 FUN_1452a3cc0 body=1247 status=ok
// SIG undefined FUN_1452a3cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a3cc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = 0;
  local_98[0] = param_2;
  if (param_1 == 0) {
    local_b8 = 0x291;
    FUN_144ba24f0(0x21,0x80,0x8f,"crypto\\pkcs7\\pk7_doit.c");
    goto LAB_1452a418f;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_b8 = 0x296;
    FUN_144ba24f0(0x21,0x80,0x7a,"crypto\\pkcs7\\pk7_doit.c");
    goto LAB_1452a418f;
  }
  lVar5 = FUN_144ba5700();
  if (lVar5 == 0) {
    local_b8 = 0x29c;
    FUN_144ba24f0(0x21,0x80,0x41,"crypto\\pkcs7\\pk7_doit.c");
    goto LAB_1452a418f;
  }
  iVar1 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 == 0x15) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    goto LAB_1452a40bc;
  }
  if (iVar1 == 0x16) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    lVar6 = FUN_1452a42e0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
    iVar3 = FUN_144ea8fa0(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
    if ((iVar3 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
      FUN_144efe950(lVar6);
      lVar6 = 0;
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
    }
LAB_1452a3f23:
    if (lVar9 == 0) {
      if (iVar1 != 0x19) goto LAB_1452a40bc;
LAB_1452a4052:
      uVar4 = FUN_144ea8fa0(**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8));
      lVar9 = FUN_1452a45b0(&local_a0,param_2,uVar4);
      if (((lVar9 != 0) && (iVar2 = FUN_144ba5ca0(local_a0,local_88,local_a8), iVar2 != 0)) &&
         (iVar2 = FUN_144ef2c50(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),local_88,
                                local_a8[0]), iVar2 != 0)) goto LAB_1452a40bc;
    }
    else {
      iVar1 = FUN_144babbf0(lVar9);
      if (0 < iVar1) {
        do {
          lVar7 = FUN_144babc00(lVar9,iVar2);
          if (*(longlong *)(lVar7 + 0x38) != 0) {
            uVar4 = FUN_144ea8fa0(**(undefined8 **)(lVar7 + 0x10));
            lVar8 = FUN_1452a45b0(&local_a0,param_2,uVar4);
            if ((lVar8 == 0) || (iVar1 = FUN_144ba5840(lVar5,local_a0), iVar1 == 0))
            goto LAB_1452a415c;
            iVar1 = FUN_144babbf0(*(undefined8 *)(lVar7 + 0x18));
            if (iVar1 < 1) {
              local_a8[0] = FUN_144ba6830(*(undefined8 *)(lVar7 + 0x38));
              lVar8 = FUN_144ea64e0(local_a8[0],"crypto\\pkcs7\\pk7_doit.c",0x2fc);
              if (lVar8 == 0) goto LAB_1452a415c;
              iVar1 = FUN_1452afb70(lVar5,lVar8,local_a8,*(undefined8 *)(lVar7 + 0x38));
              if (iVar1 == 0) {
                FUN_144ea6530(lVar8,"crypto\\pkcs7\\pk7_doit.c",0x301);
                uVar4 = 6;
                local_b8 = 0x302;
                goto LAB_1452a3e75;
              }
              FUN_144f03e20(*(undefined8 *)(lVar7 + 0x28),lVar8,local_a8[0]);
              param_2 = local_98[0];
            }
            else {
              iVar1 = FUN_1452a4690(lVar7,lVar5);
              if (iVar1 == 0) goto LAB_1452a415c;
            }
          }
          iVar2 = iVar2 + 1;
          iVar1 = FUN_144babbf0(lVar9);
        } while (iVar2 < iVar1);
      }
LAB_1452a40bc:
      iVar2 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
      if (((iVar2 != 0x16) || (iVar2 = FUN_1452a47b0(param_1,2,0,0), iVar2 == 0)) &&
         ((lVar6 != 0 && ((*(byte *)(lVar6 + 0x10) & 0x10) == 0)))) {
        lVar9 = FUN_144b9f470(param_2,0x401);
        if (lVar9 == 0) {
          local_b8 = 800;
          uVar4 = 0x6b;
          goto LAB_1452a3e75;
        }
        uVar4 = FUN_144b9efc0(lVar9,3,0,local_98);
        FUN_144b9e620(lVar9,0x200);
        FUN_144b9efc0(lVar9,0x82,0,0);
        FUN_144f03e20(lVar6,local_98[0],uVar4);
      }
    }
  }
  else {
    if (iVar1 == 0x17) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10);
      if (lVar6 == 0) {
        lVar6 = FUN_144efe930();
        if (lVar6 == 0) {
          local_b8 = 0x2ba;
LAB_1452a3e6f:
          uVar4 = 0x41;
          goto LAB_1452a3e75;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10) = lVar6;
      }
      goto LAB_1452a40bc;
    }
    if (iVar1 == 0x18) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10);
      if (lVar6 == 0) {
        lVar6 = FUN_144efe930();
        if (lVar6 == 0) {
          local_b8 = 0x2ae;
          goto LAB_1452a3e6f;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10) = lVar6;
      }
      goto LAB_1452a3f23;
    }
    if (iVar1 == 0x19) {
      lVar6 = FUN_1452a42e0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
      iVar2 = FUN_144ea8fa0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18));
      if ((iVar2 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
        FUN_144efe950(lVar6);
        lVar6 = 0;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
      }
      goto LAB_1452a4052;
    }
    local_b8 = 0x2d6;
    uVar4 = 0x70;
LAB_1452a3e75:
    FUN_144ba24f0(0x21,0x80,uVar4,"crypto\\pkcs7\\pk7_doit.c");
  }
LAB_1452a415c:
  FUN_144ba5800(lVar5);
LAB_1452a418f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452a41b0 FUN_1452a41b0 body=26 status=ok
// SIG undefined FUN_1452a41b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a41b0(longlong param_1)

{
  FUN_1452a41d0(param_1 + 0x18);
  return;
}



// FUNCTION 1452a41d0 FUN_1452a41d0 body=271 status=ok
// SIG undefined FUN_1452a41d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a41d0(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    lVar2 = FUN_144babca0();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar6 = 0;
    iVar1 = FUN_144babbf0();
    if (0 < iVar1) {
      do {
        uVar3 = FUN_144babc00(*param_1,iVar6);
        uVar4 = FUN_1452b02b0(uVar3);
        iVar1 = FUN_144ea8fa0(uVar4);
        if (iVar1 == param_2) {
          FUN_144ed4710(uVar3);
          lVar2 = FUN_144ed4740(param_2,param_3,param_4);
          if (lVar2 == 0) {
            return 0;
          }
          lVar5 = FUN_144babc20(*param_1,iVar6,lVar2);
          if (lVar5 != 0) {
            return 1;
          }
          FUN_144ed4710(lVar2);
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_144babbf0(*param_1);
      } while (iVar6 < iVar1);
    }
  }
  lVar2 = FUN_144ed4740(param_2,param_3,param_4);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_144bac1c0(*param_1,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_144ed4710(lVar2);
  return 0;
}



// FUNCTION 1452a42e0 FUN_1452a42e0 body=91 status=ok
// SIG undefined FUN_1452a42e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a42e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 == 0x15) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  if (((5 < iVar2 - 0x15U) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
     (*piVar1 == 4)) {
    return *(undefined8 *)(piVar1 + 2);
  }
  return 0;
}



// FUNCTION 1452a4340 FUN_1452a4340 body=226 status=ok
// SIG undefined FUN_1452a4340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a4340(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452a4355;
  uVar2 = FUN_145505650();
  lVar3 = FUN_144b9e650(uVar2);
  if (lVar3 == 0) {
    uVar5 = 0x3c;
  }
  else {
    uVar1 = FUN_144ea8fa0(*param_2);
    uVar2 = FUN_144ea8ee0(uVar1);
    lVar4 = FUN_144baab30(uVar2);
    if (lVar4 == 0) {
      uVar5 = 0x42;
      uVar1 = 0x6d;
      goto LAB_1452a43f4;
    }
    FUN_144b9efc0(lVar3,0x6f,0,lVar4);
    if (*param_1 == 0) {
      *param_1 = lVar3;
      return 1;
    }
    lVar4 = FUN_144b9f280(*param_1,lVar3);
    if (lVar4 != 0) {
      return 1;
    }
    uVar5 = 0x4a;
  }
  uVar1 = 0x20;
LAB_1452a43f4:
  FUN_144ba24f0(0x21,0x7d,uVar1,"crypto\\pkcs7\\pk7_doit.c",uVar5,uVar6);
  FUN_144b9e7b0(lVar3);
  return 0;
}



// FUNCTION 1452a4430 FUN_1452a4430 body=376 status=ok
// SIG undefined FUN_1452a4430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a4430(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  ulonglong in_stack_ffffffffffffffd8;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar5 = (longlong)param_3;
  lVar3 = 0;
  lVar2 = FUN_144bb4f60(*(undefined8 *)(param_1 + 0x20));
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_144ed1530(lVar2,0);
    lVar4 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_144ed21c0(lVar2);
      lVar4 = lVar3;
      if (0 < iVar1) {
        iVar1 = FUN_144ed1710(lVar2,0xffffffff,0x100,3,
                              in_stack_ffffffffffffffd8 & 0xffffffff00000000,param_1);
        lVar3 = 0;
        if (iVar1 < 1) {
          FUN_144ba24f0(0x21,0x84,0x98,"crypto\\pkcs7\\pk7_doit.c",0x6e);
        }
        else {
          lVar6 = lVar5;
          iVar1 = FUN_144ed2250(lVar2,0,&local_res8,param_2,lVar5);
          uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
          if (0 < iVar1) {
            lVar3 = FUN_144ea64e0(CONCAT44(uStackX_c,local_res8),"crypto\\pkcs7\\pk7_doit.c",0x75);
            lVar4 = 0;
            if (lVar3 == 0) {
              FUN_144ba24f0(0x21,0x84,0x41,"crypto\\pkcs7\\pk7_doit.c",CONCAT44(uVar7,0x78));
            }
            else {
              iVar1 = FUN_144ed2250(lVar2,lVar3,&local_res8,param_2,lVar5);
              if (0 < iVar1) {
                FUN_144f03e20(*(undefined8 *)(param_1 + 0x18),lVar3,local_res8);
                lVar3 = 0;
                lVar4 = 1;
              }
            }
          }
        }
      }
      FUN_144ed16b0(lVar2);
      FUN_144ea6530(lVar3,"crypto\\pkcs7\\pk7_doit.c",0x86);
    }
  }
  return lVar4;
}



// FUNCTION 1452a45b0 FUN_1452a45b0 body=223 status=ok
// SIG undefined FUN_1452a45b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a45b0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1452a45c5;
  lVar2 = FUN_144b9f470(param_2,0x208);
  do {
    if (lVar2 == 0) {
      uVar4 = 600;
      uVar3 = 0x6c;
LAB_1452a4646:
      FUN_144ba24f0(0x21,0x7f,uVar3,"crypto\\pkcs7\\pk7_doit.c",uVar4,uVar5);
      return 0;
    }
    FUN_144b9efc0(lVar2,0x78,0,param_1);
    if (*param_1 == 0) {
      uVar4 = 0x25d;
      uVar3 = 0x44;
      goto LAB_1452a4646;
    }
    uVar3 = FUN_144ba3d20();
    iVar1 = FUN_144ba3cb0(uVar3);
    if (iVar1 == param_3) {
      return lVar2;
    }
    uVar3 = FUN_144b9f4a0(lVar2);
    lVar2 = FUN_144b9f470(uVar3,0x208);
  } while( true );
}



// FUNCTION 1452a4690 FUN_1452a4690 body=266 status=ok
// SIG undefined FUN_1452a4690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a4690(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68 [4];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452a46a5;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_1452afd20(uVar3,0x34);
  uVar3 = FUN_1452afe00(uVar3,uVar1);
  lVar4 = FUN_1452b02c0(uVar3,0);
  if (lVar4 == 0) {
    iVar2 = FUN_145505fd0(param_1,0);
    if (iVar2 != 0) goto LAB_1452a471f;
    local_78 = 0x26f;
  }
  else {
LAB_1452a471f:
    iVar2 = FUN_144ba5ca0(param_2,local_58,local_68);
    if (iVar2 == 0) {
      local_78 = 0x276;
      FUN_144ba24f0(0x21,0x88,6,"crypto\\pkcs7\\pk7_doit.c");
      goto LAB_1452a478a;
    }
    iVar2 = FUN_145506040(param_1,local_58,local_68[0]);
    if (iVar2 != 0) {
      FUN_1452a3610(param_1);
      goto LAB_1452a478a;
    }
    local_78 = 0x27a;
  }
  FUN_144ba24f0(0x21,0x88,0x41,"crypto\\pkcs7\\pk7_doit.c");
LAB_1452a478a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1452a47b0 FUN_1452a47b0 body=287 status=ok
// SIG undefined FUN_1452a47b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1452a47b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452a47c5;
  iVar1 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  if (param_2 == 1) {
    if (iVar1 == 0x16) {
      *(int *)(param_1 + 0x10) = param_3;
      if (param_3 != 0) {
        iVar1 = FUN_144ea8fa0(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
        if (iVar1 == 0x15) {
          FUN_144efe950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20))
          ;
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
        }
      }
      return param_3;
    }
    uVar3 = 0x25;
  }
  else {
    if (param_2 != 2) {
      uVar3 = 0x39;
      uVar2 = 0x6e;
      goto LAB_1452a48ac;
    }
    if (iVar1 == 0x16) {
      if ((*(longlong *)(param_1 + 0x20) != 0) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    uVar3 = 0x33;
  }
  uVar2 = 0x68;
LAB_1452a48ac:
  FUN_144ba24f0(0x21,0x68,uVar2,"crypto\\pkcs7\\pk7_lib.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 1452a48d0 FUN_1452a48d0 body=37 status=ok
// SIG undefined FUN_1452a48d0(void)

void FUN_1452a48d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1452a4900 FUN_1452a4900 body=13 status=ok
// SIG undefined FUN_1452a4900(void)

void FUN_1452a4900(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1452a4910 FUN_1452a4910 body=196 status=ok
// SIG undefined FUN_1452a4910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a4910(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144ea8fa0(*(undefined8 *)(param_2 + 0x18));
  if (iVar1 == 0x15) {
    lVar2 = *(longlong *)(param_2 + 0x20);
  }
  else if (iVar1 == 0x16) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x20);
  }
  else if (iVar1 == 0x17) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 0x10);
    if (lVar2 != 0) goto LAB_1452a49b8;
    lVar2 = FUN_144efe930();
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 0x10) = lVar2;
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x10);
    if (lVar2 != 0) goto LAB_1452a49b8;
    lVar2 = FUN_144efe930();
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x10) = lVar2;
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_1452a49b8:
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x10;
  *param_1 = lVar2 + 8;
  return 1;
}



// FUNCTION 1452a49e0 FUN_1452a49e0 body=233 status=ok
// SIG undefined FUN_1452a49e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a49e0(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5
                  )

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  int local_260;
  undefined8 local_258;
  undefined1 local_248 [512];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x1452a49f3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  puVar3 = param_4;
  if ((param_4 == (undefined1 *)0x0) && (puVar3 = &DAT_14c7fc600, DAT_14c7fc600 == '\0')) {
    puVar3 = param_4;
  }
  lVar2 = FUN_145502150();
  if (lVar2 == 0) goto LAB_1452a4ab7;
  if (0x1ff < param_3) {
    param_3 = 0x1ff;
  }
  local_268 = param_2;
  local_260 = param_3;
  iVar1 = FUN_1455022d0(lVar2,puVar3,0,param_1);
  if (-1 < iVar1) {
    if (param_5 != 0) {
      local_268 = param_2;
      local_260 = param_3;
      local_258 = param_1;
      iVar1 = FUN_145502370(lVar2,puVar3,0,local_248);
      if (iVar1 < 0) goto LAB_1452a4aaf;
    }
    FUN_1455025e0(lVar2);
    FUN_14259f0c0(local_248,0x200);
  }
LAB_1452a4aaf:
  FUN_145502260(lVar2);
LAB_1452a4ab7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_288);
}



// FUNCTION 1452a4ae0 FUN_1452a4ae0 body=20 status=ok
// SIG undefined FUN_1452a4ae0(void)

undefined1 * FUN_1452a4ae0(void)

{
  if (DAT_14c7fc600 == '\0') {
    return (undefined1 *)0x0;
  }
  return &DAT_14c7fc600;
}



// FUNCTION 1452a4b00 FUN_1452a4b00 body=645 status=ok
// SIG undefined FUN_1452a4b00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a4b00(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  int param_5,uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c4 = 0;
  local_c8 = 0;
  local_b8 = param_4;
  local_b0 = param_3;
  local_a8 = param_1;
  iVar1 = FUN_144ba3d80();
  iVar2 = FUN_144ba3d90(param_1);
  if (0x40 < iVar1) {
    FUN_144ecfe40("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto\\evp\\evp_key.c",0x56);
  }
  if (0x10 < iVar2) {
    FUN_144ecfe40("assertion failed: niv <= EVP_MAX_IV_LENGTH","crypto\\evp\\evp_key.c",0x57);
  }
  if (param_4 != 0) {
    lVar5 = FUN_144ba5700();
    if (lVar5 != 0) {
      iVar3 = FUN_144ba5a20(lVar5,param_2,0);
      iVar4 = 0;
      do {
        if (((iVar3 == 0) ||
            ((((local_c0 = iVar4 + 1, iVar4 != 0 &&
               (iVar4 = FUN_144ba5c70(lVar5,local_98,local_c8), iVar4 == 0)) ||
              (iVar4 = FUN_144ba5c70(lVar5,local_b8,(longlong)param_5), iVar4 == 0)) ||
             ((local_b0 != 0 && (iVar4 = FUN_144ba5c70(lVar5,local_b0,8), iVar4 == 0)))))) ||
           (iVar4 = FUN_144ba5ca0(lVar5,local_98,&local_c8), iVar4 == 0)) break;
        uVar7 = 1;
        if (1 < param_6) {
          do {
            iVar4 = FUN_144ba5a20(lVar5,param_2,0);
            if (((iVar4 == 0) || (iVar4 = FUN_144ba5c70(lVar5,local_98,local_c8), iVar4 == 0)) ||
               (iVar4 = FUN_144ba5ca0(lVar5,local_98), iVar4 == 0)) goto LAB_1452a4d5a;
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_6);
        }
        uVar6 = 0;
        while ((iVar4 = (int)uVar6, iVar1 != 0 && (iVar4 != local_c8))) {
          if (param_7 != (undefined1 *)0x0) {
            *param_7 = local_98[uVar6];
            param_7 = param_7 + 1;
          }
          iVar1 = iVar1 + -1;
          uVar6 = (ulonglong)(iVar4 + 1);
        }
        if ((iVar2 != 0) && (iVar4 != local_c8)) {
          do {
            if ((int)uVar6 == local_c8) break;
            if (param_8 != (undefined1 *)0x0) {
              *param_8 = local_98[uVar6];
              param_8 = param_8 + 1;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if ((iVar1 == 0) && (iVar2 == 0)) {
          local_c4 = FUN_144ba3d80(local_a8);
          break;
        }
        iVar3 = FUN_144ba5a20(lVar5,param_2,0);
        iVar4 = local_c0;
      } while( true );
    }
LAB_1452a4d5a:
    FUN_144ba5800(lVar5);
    FUN_14259f0c0(local_98,0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1452a4da0 FUN_1452a4da0 body=36 status=ok
// SIG undefined FUN_1452a4da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a4da0(void)

{
  FUN_144ea6670(0x60,"crypto\\evp\\encode.c",0x81);
  return;
}



// FUNCTION 1452a4dd0 FUN_1452a4dd0 body=33 status=ok
// SIG undefined FUN_1452a4dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a4dd0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\evp\\encode.c",0x86);
  return;
}



// FUNCTION 1452a4e00 FUN_1452a4e00 body=3 status=ok
// SIG undefined FUN_1452a4e00(void)

undefined4 FUN_1452a4e00(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 1452a4e10 FUN_1452a4e10 body=16 status=ok
// SIG undefined FUN_1452a4e10(void)

void FUN_1452a4e10(undefined4 *param_1)

{
  param_1[1] = 0x30;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 1452a4e20 FUN_1452a4e20 body=375 status=ok
// SIG undefined FUN_1452a4e20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452a4e20(uint *param_1,undefined1 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  int iVar4;
  
  _Size = (size_t)param_5;
  uVar3 = 0;
  *param_3 = 0;
  if (param_5 < 1) {
    uVar1 = 0;
  }
  else {
    if (0x50 < (int)param_1[1]) {
      FUN_144ecfe40("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                    "crypto\\evp\\encode.c",0xab);
    }
    uVar2 = *param_1;
    iVar4 = param_1[1] - uVar2;
    if (param_5 < iVar4) {
      memcpy((void *)((longlong)param_1 + (longlong)(int)uVar2 + 8),param_4,_Size);
      *param_1 = *param_1 + param_5;
    }
    else {
      if (uVar2 != 0) {
        memcpy((void *)((longlong)param_1 + (longlong)(int)uVar2 + 8),param_4,(longlong)iVar4);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar4);
        _Size = (size_t)(uint)(param_5 - iVar4);
        iVar4 = FUN_1452a52e0(param_1,param_2,param_1 + 2,param_1[1]);
        uVar3 = (ulonglong)iVar4;
        param_2 = param_2 + uVar3;
        *param_1 = 0;
        if ((param_1[0x17] & 1) == 0) {
          *param_2 = 10;
          param_2 = param_2 + 1;
          uVar3 = uVar3 + 1;
        }
        *param_2 = 0;
      }
      uVar2 = (uint)_Size;
      if ((int)param_1[1] <= (int)uVar2) {
        do {
          if (0x7fffffff < uVar3) goto LAB_1452a4f4f;
          iVar4 = FUN_1452a52e0(param_1,param_2,param_4,param_1[1]);
          param_4 = (void *)((longlong)param_4 + (longlong)(int)param_1[1]);
          uVar2 = (int)_Size - param_1[1];
          _Size = (size_t)uVar2;
          param_2 = param_2 + iVar4;
          uVar3 = uVar3 + (longlong)iVar4;
          if ((param_1[0x17] & 1) == 0) {
            *param_2 = 10;
            param_2 = param_2 + 1;
            uVar3 = uVar3 + 1;
          }
          *param_2 = 0;
        } while ((int)param_1[1] <= (int)uVar2);
      }
      if (0x7fffffff < uVar3) {
LAB_1452a4f4f:
        *param_3 = 0;
        return 0;
      }
      if (uVar2 != 0) {
        memcpy(param_1 + 2,param_4,(longlong)(int)uVar2);
      }
      *param_1 = uVar2;
      *param_3 = (int)uVar3;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1452a4fa0 FUN_1452a4fa0 body=117 status=ok
// SIG undefined FUN_1452a4fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a4fa0(int *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1452a52e0(param_1,param_2,param_1 + 2);
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      uVar2 = (ulonglong)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined1 *)(uVar2 + param_2) = 10;
    }
    *(undefined1 *)((ulonglong)uVar1 + param_2) = 0;
    *param_1 = 0;
    *param_3 = uVar1;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1452a5020 FUN_1452a5020 body=33 status=ok
// SIG undefined FUN_1452a5020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5020(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1452a52e0(0,param_1,param_2,param_3);
  return;
}



// FUNCTION 1452a5050 FUN_1452a5050 body=10 status=ok
// SIG undefined FUN_1452a5050(void)

void FUN_1452a5050(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 1452a5060 FUN_1452a5060 body=490 status=ok
// SIG undefined FUN_1452a5060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452a5060(int *param_1,longlong param_2,int *param_3,byte *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong uVar9;
  
  uVar7 = 0;
  iVar14 = 0;
  piVar1 = param_1 + 2;
  iVar6 = 0;
  bVar16 = false;
  iVar4 = *param_1;
  uVar12 = (ulonglong)iVar4;
  uVar11 = uVar7;
  if ((((0 < iVar4) && (uVar11 = 0, *(char *)((longlong)(iVar4 + -1) + (longlong)piVar1) == '=')) &&
      (uVar11 = 1, 1 < iVar4)) &&
     (uVar11 = 1, *(char *)((longlong)(iVar4 + -2) + (longlong)piVar1) == '=')) {
    uVar11 = 2;
  }
  iVar10 = (int)uVar11;
  if (param_5 == 0) goto LAB_1452a521c;
  puVar5 = &DAT_149d23860;
  if ((*(byte *)(param_1 + 0x17) & 2) == 0) {
    puVar5 = &DAT_149d237e0;
  }
  uVar9 = uVar7;
  uVar13 = uVar12;
  uVar15 = uVar7;
  if (0 < param_5) {
    do {
      iVar14 = (int)uVar15;
      bVar2 = *param_4;
      param_4 = param_4 + 1;
      if ((char)bVar2 < '\0') {
        bVar3 = 0xff;
      }
      else {
        bVar3 = puVar5[bVar2];
      }
      iVar6 = iVar14;
      if (bVar3 == 0xff) goto LAB_1452a5245;
      if (bVar2 == 0x3d) {
        uVar11 = (ulonglong)((int)uVar11 + 1);
      }
      else if ((0 < (int)uVar11) && ((bVar3 | 0x13) != 0xf3)) goto LAB_1452a5245;
      iVar10 = (int)uVar11;
      if (2 < iVar10) goto LAB_1452a5245;
      if (bVar3 == 0xf2) {
        iVar6 = 1;
        bVar16 = true;
        goto LAB_1452a51da;
      }
      if ((bVar3 | 0x13) != 0xf3) {
        if (0x3f < (int)uVar13) goto LAB_1452a5245;
        uVar13 = (ulonglong)((int)uVar13 + 1);
        *(byte *)(uVar12 + (longlong)piVar1) = bVar2;
        uVar12 = uVar12 + 1;
      }
      if ((int)uVar13 == 0x40) {
        iVar4 = FUN_1452a53f0(param_1,param_2,piVar1);
        uVar13 = uVar7;
        if ((iVar4 < 0) || (uVar13 = 0, iVar4 < iVar10)) goto LAB_1452a5245;
        uVar15 = (ulonglong)(uint)(iVar14 + (iVar4 - iVar10));
        param_2 = param_2 + (iVar4 - iVar10);
        uVar12 = uVar7;
        uVar13 = uVar7;
      }
      iVar14 = (int)uVar15;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < param_5);
    iVar6 = 0;
  }
LAB_1452a51da:
  iVar4 = (int)uVar13;
  if (iVar4 < 1) {
LAB_1452a5203:
    iVar6 = iVar14;
    iVar4 = (int)uVar13;
    if (bVar16) goto LAB_1452a521c;
LAB_1452a5209:
    if ((iVar4 != 0) || (iVar10 == 0)) {
      uVar7 = 1;
    }
  }
  else {
    if ((uVar13 & 3) == 0) {
      iVar4 = FUN_1452a53f0(param_1,param_2,piVar1);
      uVar13 = 0;
      iVar6 = iVar14;
      if ((-1 < iVar4) && (iVar10 <= iVar4)) {
        uVar13 = uVar7;
        iVar14 = iVar14 + (iVar4 - iVar10);
        goto LAB_1452a5203;
      }
    }
    else {
      bVar16 = iVar6 == 0;
      iVar6 = iVar14;
      if (bVar16) goto LAB_1452a5209;
    }
LAB_1452a5245:
    iVar4 = (int)uVar13;
    uVar7 = 0xffffffff;
  }
LAB_1452a521c:
  *param_3 = iVar6;
  *param_1 = iVar4;
  return uVar7;
}



// FUNCTION 1452a5250 FUN_1452a5250 body=91 status=ok
// SIG undefined FUN_1452a5250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a5250(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_1452a53f0(param_1,param_2,param_1 + 2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    *param_1 = 0;
    *param_3 = iVar1;
  }
  return 1;
}



// FUNCTION 1452a52b0 FUN_1452a52b0 body=33 status=ok
// SIG undefined FUN_1452a52b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a52b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1452a53f0(0,param_1,param_2,param_3);
  return;
}



// FUNCTION 1452a52e0 FUN_1452a52e0 body=267 status=ok
// SIG undefined FUN_1452a52e0(void)

int FUN_1452a52e0(longlong param_1,char *param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  uint3 uVar2;
  char cVar3;
  ulonglong uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((param_1 == 0) ||
     (pcVar6 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./",
     (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    pcVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  if (0 < param_4) {
    pbVar5 = (byte *)(param_3 + 1);
    do {
      if (param_4 < 3) {
        uVar4 = (ulonglong)pbVar5[-1] << 0x10;
        if (param_4 == 2) {
          uVar4 = (ulonglong)((uint)uVar4 | (uint)*pbVar5 << 8);
        }
        *param_2 = pcVar6[uVar4 >> 0x12];
        param_2[1] = pcVar6[(uint)(uVar4 >> 0xc) & 0x3f];
        if (param_4 == 1) {
          cVar3 = '=';
        }
        else {
          cVar3 = pcVar6[(uint)(uVar4 >> 6) & 0x3f];
        }
        param_2[2] = cVar3;
        param_2[3] = '=';
      }
      else {
        uVar1 = CONCAT11(pbVar5[-1],*pbVar5);
        uVar2 = CONCAT21(uVar1,pbVar5[1]);
        *param_2 = pcVar6[pbVar5[-1] >> 2];
        param_2[1] = pcVar6[uVar1 >> 4 & 0x3f];
        param_2[2] = pcVar6[uVar2 >> 6 & 0x3f];
        param_2[3] = pcVar6[uVar2 & 0x3f];
      }
      iVar7 = iVar7 + 4;
      pbVar5 = pbVar5 + 3;
      param_4 = param_4 + -3;
      param_2 = param_2 + 4;
    } while (0 < param_4);
    *param_2 = '\0';
    return iVar7;
  }
  *param_2 = '\0';
  return 0;
}



// FUNCTION 1452a53f0 FUN_1452a53f0 body=388 status=ok
// SIG undefined FUN_1452a53f0(void)

int FUN_1452a53f0(longlong param_1,undefined1 *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  if ((param_1 == 0) || (puVar8 = &DAT_149d23860, (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    puVar8 = &DAT_149d237e0;
  }
  while (((0 < (int)param_4 && (-1 < (char)*param_3)) && (puVar8[*param_3] == -0x20))) {
    param_3 = param_3 + 1;
    param_4 = param_4 - 1;
  }
  for (lVar5 = (longlong)(int)param_4; 3 < lVar5; lVar5 = lVar5 + -1) {
    if ((char)param_3[lVar5 + -1] < '\0') {
      bVar1 = 0xff;
    }
    else {
      bVar1 = puVar8[param_3[lVar5 + -1]];
    }
    if ((bVar1 | 0x13) != 0xf3) break;
    param_4 = param_4 - 1;
  }
  uVar3 = param_4 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  if (uVar3 != 0) {
    return -1;
  }
  iVar9 = 0;
  if (0 < (int)param_4) {
    do {
      if ((char)*param_3 < '\0') {
        bVar1 = 0xff;
      }
      else {
        bVar1 = puVar8[*param_3];
      }
      if ((char)param_3[1] < '\0') {
        bVar4 = 0xff;
      }
      else {
        bVar4 = puVar8[param_3[1]];
      }
      if ((char)param_3[2] < '\0') {
        bVar2 = 0xff;
      }
      else {
        bVar2 = puVar8[param_3[2]];
      }
      if ((char)param_3[3] < '\0') {
        bVar7 = 0xff;
      }
      else {
        bVar7 = puVar8[param_3[3]];
      }
      param_3 = param_3 + 4;
      if (((char)(bVar4 | bVar1) < '\0') || ((char)(bVar7 | bVar2) < '\0')) {
        return -1;
      }
      iVar10 = iVar10 + 3;
      iVar9 = iVar9 + 4;
      iVar6 = (((uint)bVar1 << 6 | (uint)bVar4) << 6 | (uint)bVar2) << 6;
      *param_2 = (char)((uint)iVar6 >> 0x10);
      param_2[1] = (char)((uint)iVar6 >> 8);
      param_2[2] = (byte)iVar6 | bVar7;
      param_2 = param_2 + 3;
    } while (iVar9 < (int)param_4);
  }
  return iVar10;
}



// FUNCTION 1452a5580 FUN_1452a5580 body=93 status=ok
// SIG undefined FUN_1452a5580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5580(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452a5590;
  FUN_144ef1080(param_1,&local_18,&local_res20);
  uVar1 = FUN_144efe480();
  FUN_145501110(local_18,uVar1,param_2,param_3,local_res20,1);
  return;
}



// FUNCTION 1452a55e0 FUN_1452a55e0 body=127 status=ok
// SIG undefined FUN_1452a55e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a55e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_144eef830(0,param_1,param_2,param_3,param_4,0x1452a55f0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  UNRECOVERED_JUMPTABLE = FUN_144eee4f0;
  if (*(int *)(param_3 + 0x10) != 0) {
    UNRECOVERED_JUMPTABLE = FUN_144eee270;
  }
                    /* WARNING: Could not recover jumptable at 0x0001452a565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
  return uVar1;
}



// FUNCTION 1452a5660 FUN_1452a5660 body=74 status=ok
// SIG undefined FUN_1452a5660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_144eee4f0();
  if (iVar1 == 0) {
    return;
  }
  FUN_1452a55e0(param_1,param_1,param_4,param_5);
  return;
}



// FUNCTION 1452a56b0 FUN_1452a56b0 body=54 status=ok
// SIG undefined FUN_1452a56b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452a56b0(undefined8 param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1452a5a40();
  if ((int)uVar1 != 0) {
    FUN_144ba1350(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1452a56f0 FUN_1452a56f0 body=74 status=ok
// SIG undefined FUN_1452a56f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a56f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_144eee270();
  if (iVar1 == 0) {
    return;
  }
  FUN_1452a55e0(param_1,param_1,param_4,param_5);
  return;
}



// FUNCTION 1452a5740 FUN_1452a5740 body=91 status=ok
// SIG undefined FUN_1452a5740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a5740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144eee270();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_144eee4f0(param_1,param_1,param_4);
    return uVar1;
  }
  return 1;
}



// FUNCTION 1452a57a0 FUN_1452a57a0 body=186 status=ok
// SIG undefined FUN_1452a57a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1452a57a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  FUN_144eede20(param_5);
  lVar2 = FUN_144eede90(param_5);
  uVar3 = 0;
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_1452830b0(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_144eee590(lVar2,param_2,param_3,param_5);
    }
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_1452a55e0(param_1,lVar2,param_4,param_5);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  FUN_144eedf20(param_5);
  return uVar3;
}



// FUNCTION 1452a5860 FUN_1452a5860 body=98 status=ok
// SIG undefined FUN_1452a5860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452a5875;
  iVar1 = FUN_1452830b0(param_1,param_2,param_4);
  if (iVar1 == 0) {
    return;
  }
  FUN_144eef830(0,param_1,param_1,param_3,param_4,uVar2);
  return;
}



// FUNCTION 1452a58d0 FUN_1452a58d0 body=100 status=ok
// SIG undefined FUN_1452a58d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a58d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144eefe10();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_144ba0c40(param_1,param_3);
  if (-1 < iVar1) {
    uVar2 = FUN_144eee270(param_1,param_1,param_3);
    return uVar2;
  }
  return 1;
}



// FUNCTION 1452a5940 FUN_1452a5940 body=251 status=ok
// SIG undefined FUN_1452a5940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a5940(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452a5956;
  if ((param_1 != param_2) && (lVar3 = FUN_144ba06b0(), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = FUN_144ba03d0(param_1);
    iVar2 = FUN_144ba03d0(param_4);
    iVar2 = iVar2 - iVar1;
    if (iVar2 < 0) {
      FUN_144ba24f0(3,0x77,0x6e,"crypto\\bn\\bn_mod.c",0x126,uVar4);
      return 0;
    }
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 == 0) {
      iVar2 = FUN_144eefe10(param_1,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
    }
    else {
      iVar1 = FUN_144eefdb0(param_1,param_1,iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      param_3 = param_3 - iVar2;
    }
    iVar2 = FUN_144ba0c40(param_1,param_4);
  } while ((iVar2 < 0) || (iVar2 = FUN_144eee270(param_1,param_1,param_4), iVar2 != 0));
  return 0;
}



// FUNCTION 1452a5a40 FUN_1452a5a40 body=492 status=ok
// SIG undefined FUN_1452a5a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5a40(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_4 + 1);
  uVar8 = (ulonglong)iVar1;
  puVar4 = local_c8;
  local_d8 = param_4;
  lVar3 = FUN_144ba1290(param_1,iVar1);
  if ((lVar3 != 0) &&
     ((uVar8 < 0x11 ||
      (puVar4 = (undefined1 *)FUN_144ea64e0(uVar8 * 8,"crypto\\bn\\bn_mod.c",0x3c),
      puVar4 != (undefined1 *)0x0)))) {
    puVar11 = puVar4;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)*param_2;
    }
    puVar12 = puVar4;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar12 = (undefined1 *)*param_3;
    }
    uVar10 = 0;
    lVar3 = 0;
    lVar13 = 0;
    uVar9 = 0;
    if (uVar8 != 0) {
      do {
        uVar6 = ((longlong)(uVar10 - (longlong)(int)param_2[1]) >> 0x3f &
                *(ulonglong *)(puVar11 + lVar3 * 8)) + uVar9;
        uVar5 = ((longlong)(uVar10 - (longlong)(int)param_3[1]) >> 0x3f &
                *(ulonglong *)(puVar12 + lVar13 * 8)) + uVar6;
        *(ulonglong *)(puVar4 + uVar10 * 8) = uVar5;
        uVar9 = (ulonglong)(uVar6 < uVar9) + (ulonglong)(uVar5 < uVar6);
        uVar10 = uVar10 + 1;
        lVar3 = lVar3 - ((longlong)(uVar10 - (longlong)*(int *)((longlong)param_2 + 0xc)) >> 0x3f);
        lVar13 = lVar13 - ((longlong)(uVar10 - (longlong)*(int *)((longlong)param_3 + 0xc)) >> 0x3f)
        ;
      } while (uVar10 < uVar8);
    }
    puVar2 = (ulonglong *)*param_1;
    lVar3 = FUN_145283b80(puVar2,puVar4,*local_d8,iVar1);
    if (uVar8 != 0) {
      puVar7 = puVar2;
      do {
        *puVar7 = *(ulonglong *)(((longlong)puVar4 - (longlong)puVar2) + (longlong)puVar7) &
                  uVar9 - lVar3 | *puVar7 & ~(uVar9 - lVar3);
        *(undefined8 *)(((longlong)puVar4 - (longlong)puVar2) + -8 + (longlong)(puVar7 + 1)) = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (puVar4 != local_c8) {
      FUN_144ea6530(puVar4,"crypto\\bn\\bn_mod.c",0x5a);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1452a5c40 FUN_1452a5c40 body=441 status=ok
// SIG undefined FUN_1452a5c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452a5c40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  
  iVar1 = (int)param_4[1];
  uVar6 = (ulonglong)iVar1;
  lVar3 = FUN_144ba1290(param_1,iVar1);
  if (lVar3 != 0) {
    puVar2 = (ulonglong *)*param_1;
    puVar4 = puVar2;
    if ((ulonglong *)*param_2 != (ulonglong *)0x0) {
      puVar4 = (ulonglong *)*param_2;
    }
    puVar11 = puVar2;
    if ((ulonglong *)*param_3 != (ulonglong *)0x0) {
      puVar11 = (ulonglong *)*param_3;
    }
    uVar7 = 0;
    lVar10 = 0;
    lVar3 = 0;
    uVar9 = 0;
    if (uVar6 != 0) {
      do {
        uVar5 = (longlong)(uVar7 - (longlong)*(int *)(param_2 + 1)) >> 0x3f & puVar4[lVar10];
        uVar8 = (longlong)(uVar7 - (longlong)*(int *)(param_3 + 1)) >> 0x3f & puVar11[lVar3];
        puVar2[uVar7] = (uVar5 - uVar8) - uVar9;
        if (uVar5 != uVar8) {
          uVar9 = (ulonglong)(uVar5 < uVar8);
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 - ((longlong)(uVar7 - (longlong)*(int *)((longlong)param_2 + 0xc)) >> 0x3f);
        lVar3 = lVar3 - ((longlong)(uVar7 - (longlong)*(int *)((longlong)param_3 + 0xc)) >> 0x3f);
      } while (uVar7 < uVar6);
    }
    lVar3 = *param_4;
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar5 = uVar6;
      puVar4 = puVar2;
      do {
        uVar8 = (*(ulonglong *)((lVar3 - (longlong)puVar2) + (longlong)puVar4) & -uVar9) + uVar7;
        *puVar4 = *puVar4 + uVar8;
        uVar7 = (ulonglong)(uVar8 < uVar7) + (ulonglong)(*puVar4 < uVar8);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      puVar4 = puVar2;
      do {
        uVar8 = (*(ulonglong *)((longlong)puVar4 + (lVar3 - (longlong)puVar2)) & uVar7 - uVar9) +
                uVar5;
        *puVar4 = *puVar4 + uVar8;
        uVar5 = (ulonglong)(uVar8 < uVar5) + (ulonglong)(*puVar4 < uVar8);
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1452a5e00 FUN_1452a5e00 body=243 status=ok
// SIG undefined FUN_1452a5e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5e00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452a5e1a;
  iVar1 = FUN_144ba03a0(param_4);
  if (iVar1 == 0) {
    FUN_1452a7500(param_1,param_2,param_3,param_4,param_5,uVar2);
  }
  else {
    if ((((*(int *)(param_2 + 1) == 1) && (*(int *)(param_2 + 2) == 0)) &&
        (iVar1 = FUN_144ba0230(param_3,4), iVar1 == 0)) &&
       ((iVar1 = FUN_144ba0230(param_2,4), iVar1 == 0 &&
        (iVar1 = FUN_144ba0230(param_4,4), iVar1 == 0)))) {
      FUN_1452a7110(param_1,*(undefined8 *)*param_2,param_3,param_4,param_5,0);
      return;
    }
    FUN_1452a5f00(param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// FUNCTION 1452a5f00 FUN_1452a5f00 body=1345 status=ok
// SIG undefined FUN_1452a5f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a5f00(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  uint local_198;
  ulonglong local_190;
  undefined8 local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar11 = 0;
  local_170 = param_5;
  local_180 = param_6;
  local_178 = 0;
  local_188 = param_3;
  local_168 = param_1;
  iVar6 = FUN_144ba03a0(param_4);
  if (iVar6 == 0) {
    local_1a8 = CONCAT44(local_1a8._4_4_,0x142);
    FUN_144ba24f0(3,0x6d,0x66,"crypto\\bn\\bn_exp.c");
    goto LAB_1452a6431;
  }
  uVar15 = 4;
  local_198 = 4;
  if (((int)param_4[1] < 0x100000) &&
     (((iVar6 = FUN_144ba0230(param_3,4), iVar6 != 0 ||
       (iVar6 = FUN_144ba0230(param_2,4), iVar6 != 0)) ||
      (iVar6 = FUN_144ba0230(param_4,4), iVar6 != 0)))) {
    local_1a0 = param_6;
    local_1a8 = param_5;
    FUN_1452a6460(param_1,param_2,param_3,param_4);
    goto LAB_1452a6431;
  }
  iVar6 = FUN_144ba03d0(param_3);
  if (iVar6 == 0) {
    iVar6 = FUN_144ba0310(param_4,1);
    if (iVar6 == 0) {
      FUN_144ba0bb0(param_1,1);
    }
    else {
      FUN_144ba0bb0(param_1,0);
    }
    goto LAB_1452a6431;
  }
  FUN_144eede20(param_5);
  local_190 = FUN_144eede90(param_5);
  plVar9 = (longlong *)FUN_144eede90(param_5);
  lVar10 = FUN_144eede90(param_5);
  alStack_160[1] = lVar10;
  if (lVar10 == 0) goto LAB_1452a640d;
  lVar11 = local_180;
  if ((local_180 == 0) &&
     ((lVar11 = FUN_144ece690(), lVar11 == 0 ||
      (iVar7 = FUN_144ece810(lVar11,param_4,param_5), iVar7 == 0)))) {
LAB_1452a6415:
    FUN_144ece7b0(lVar11);
  }
  else {
    if ((((*(int *)(param_2 + 0x10) != 0) || (iVar7 = FUN_144ba0ef0(param_2,param_4), -1 < iVar7))
        && (iVar7 = FUN_1452a55e0(lVar10,param_2,param_4,param_5), param_2 = lVar10, iVar7 == 0)) ||
       (iVar7 = FUN_144eced20(lVar10,param_2,lVar11,param_5), uVar19 = local_190, iVar7 == 0))
    goto LAB_1452a640d;
    if (iVar6 < 0x2a0) {
      if (0xef < iVar6) {
        uVar15 = 5;
        local_198 = 5;
        goto LAB_1452a613e;
      }
      if (0x4f < iVar6) goto LAB_1452a613e;
      uVar15 = 1;
      if (0x17 < iVar6) {
        uVar15 = 3;
      }
      local_198 = uVar15;
      if (1 < uVar15) goto LAB_1452a613e;
    }
    else {
      uVar15 = 6;
      local_198 = 6;
LAB_1452a613e:
      local_1a8 = param_5;
      iVar7 = FUN_144ecebf0(local_190,lVar10,lVar10,lVar11);
      if (iVar7 == 0) goto LAB_1452a640d;
      lVar10 = 1;
      lVar18 = (longlong)(1 << ((char)uVar15 - 1U & 0x1f));
      if (1 < lVar18) {
        do {
          lVar12 = FUN_144eede90(param_5);
          alStack_160[lVar10 + 1] = lVar12;
          if (lVar12 == 0) goto LAB_1452a640d;
          local_1a8 = param_5;
          iVar7 = FUN_144ecebf0(lVar12,alStack_160[lVar10],uVar19,lVar11);
          if (iVar7 == 0) goto LAB_1452a640d;
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar18);
      }
    }
    iVar7 = (int)param_4[1];
    iVar6 = iVar6 + -1;
    local_190 = CONCAT44(local_190._4_4_,1);
    uVar15 = iVar7 - 1;
    lVar10 = (longlong)(int)uVar15 * 8;
    if (*(longlong *)(*param_4 + lVar10) < 0) {
      lVar18 = FUN_144ba1290(plVar9,iVar7);
      if (lVar18 != 0) {
        *(longlong *)*plVar9 = -*(longlong *)*param_4;
        uVar13 = 1;
        uVar19 = uVar13;
        if ((1 < iVar7) && (3 < uVar15)) {
          lVar18 = *param_4;
          lVar12 = *plVar9;
          plVar1 = (longlong *)(lVar12 + 8);
          plVar2 = (longlong *)(lVar12 + lVar10);
          if (((((longlong *)(lVar18 + lVar10) < plVar1) || (plVar2 < (longlong *)(lVar18 + 8U))) &&
              ((uVar19 = 1, plVar9 < plVar1 || (plVar2 < plVar9)))) &&
             ((param_4 < plVar1 || (plVar2 < param_4)))) {
            uVar15 = uVar15 & 0x80000003;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
            }
            uVar19 = uVar13;
            do {
              puVar3 = (ulonglong *)(lVar18 + uVar13 * 8);
              uVar5 = puVar3[1];
              uVar19 = (ulonglong)((int)uVar19 + 4);
              puVar4 = (ulonglong *)(lVar12 + uVar13 * 8);
              *puVar4 = ~*puVar3;
              puVar4[1] = ~uVar5;
              puVar3 = (ulonglong *)(lVar18 + 0x10 + uVar13 * 8);
              uVar5 = puVar3[1];
              puVar4 = (ulonglong *)(lVar12 + 0x10 + uVar13 * 8);
              *puVar4 = ~*puVar3;
              puVar4[1] = ~uVar5;
              uVar13 = uVar13 + 4;
            } while ((longlong)uVar13 < (longlong)(int)(iVar7 - uVar15));
          }
        }
        for (lVar10 = (longlong)(int)uVar19; lVar10 < iVar7; lVar10 = lVar10 + 1) {
          *(ulonglong *)(*plVar9 + lVar10 * 8) = ~*(ulonglong *)(*param_4 + lVar10 * 8);
        }
        *(int *)(plVar9 + 1) = iVar7;
LAB_1452a62ed:
        iVar7 = (int)local_190;
        do {
          while (iVar8 = FUN_144ba0d50(local_188,iVar6), uVar14 = local_188, iVar8 == 0) {
            if ((iVar7 == 0) &&
               (local_1a8 = param_5, iVar8 = FUN_144ecebf0(plVar9,plVar9,plVar9,lVar11), iVar8 == 0)
               ) goto LAB_1452a640d;
            if (iVar6 == 0) goto LAB_1452a63eb;
            iVar6 = iVar6 + -1;
          }
          uVar16 = 0;
          uVar17 = 1;
          uVar15 = uVar17;
          iVar7 = iVar6;
          if (1 < local_198) {
            do {
              iVar7 = iVar7 + -1;
              param_5 = local_170;
              if (iVar7 < 0) break;
              iVar8 = FUN_144ba0d50(uVar14,iVar7);
              if (iVar8 != 0) {
                uVar17 = uVar17 << ((char)uVar15 - (char)uVar16 & 0x1fU) | 1;
                uVar16 = uVar15;
              }
              uVar15 = uVar15 + 1;
              param_5 = local_170;
            } while ((int)uVar15 < (int)local_198);
          }
          if (((int)local_190 == 0) && (iVar7 = 0, 0 < (int)(uVar16 + 1))) {
            do {
              local_1a8 = param_5;
              iVar8 = FUN_144ecebf0(plVar9,plVar9,plVar9,lVar11);
              if (iVar8 == 0) goto LAB_1452a640d;
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(uVar16 + 1));
          }
          local_1a8 = param_5;
          iVar7 = FUN_144ecebf0(plVar9,plVar9,alStack_160[((longlong)(int)uVar17 >> 1) + 1],lVar11);
          if (iVar7 == 0) goto LAB_1452a640d;
          iVar7 = 0;
          local_190 = local_190 & 0xffffffff00000000;
          iVar6 = iVar6 + (-1 - uVar16);
        } while (-1 < iVar6);
LAB_1452a63eb:
        iVar6 = FUN_144ece770(local_168,plVar9,lVar11,param_5);
        local_178 = (ulonglong)(iVar6 != 0);
      }
    }
    else {
      uVar14 = FUN_144ba03c0();
      iVar7 = FUN_144eced20(plVar9,uVar14,lVar11,param_5);
      if (iVar7 != 0) goto LAB_1452a62ed;
    }
LAB_1452a640d:
    if (local_180 == 0) goto LAB_1452a6415;
  }
  FUN_144eedf20(param_5);
LAB_1452a6431:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 1452a6460 FUN_1452a6460 body=3198 status=ok
// SIG undefined FUN_1452a6460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a6460(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  size_t _Size;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *_Dst;
  uint uVar26;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  uint local_84;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1452a6474;
  puVar20 = auStack_f8;
  local_38 = DAT_14c707940 ^ (ulonglong)&local_b8;
  plVar9 = (longlong *)0x0;
  local_50 = 0;
  local_88 = 0;
  plVar23 = (longlong *)0x0;
  plVar25 = (longlong *)0x0;
  local_98 = param_2;
  local_78 = param_3;
  local_58 = param_1;
  local_40 = param_4;
  iVar5 = FUN_144ba03a0(param_4);
  if (iVar5 == 0) {
    local_d8 = CONCAT44(local_d8._4_4_,0x272);
    FUN_144ba24f0(3,0x7c,0x66,"crypto\\bn\\bn_exp.c");
    puVar20 = auStack_f8;
    goto LAB_1452a70cf;
  }
  iVar5 = (int)param_4[1];
  uVar17 = (ulonglong)iVar5;
  if (0xfffff < iVar5) {
    local_d0 = param_6;
    local_d8 = param_5;
    FUN_1452a5f00(param_1,param_2,param_3,param_4);
    puVar20 = auStack_f8;
    goto LAB_1452a70cf;
  }
  uVar24 = *(uint *)(param_3 + 1) * 0x40;
  local_84 = uVar24;
  if ((*(uint *)(param_3 + 1) & 0x3ffffff) == 0) {
    iVar5 = FUN_144ba0310(param_4,1);
    if (iVar5 == 0) {
      FUN_144ba0bb0(local_58,1);
    }
    else {
      FUN_144ba0bb0(local_58,0);
      puVar20 = auStack_f8;
    }
    goto LAB_1452a70cf;
  }
  FUN_144eede20(param_5);
  if (param_6 == 0) {
    lVar18 = FUN_144ece690();
    puVar20 = auStack_f8;
    plVar12 = plVar9;
    _Dst = plVar9;
    local_80 = lVar18;
    if ((lVar18 != 0) &&
       (iVar6 = FUN_144ece810(lVar18,param_4,param_5), puVar20 = auStack_f8, plVar12 = plVar23,
       _Dst = plVar25, iVar6 != 0)) goto LAB_1452a65cc;
LAB_1452a7096:
    *(undefined8 *)(puVar20 + -8) = 0x1452a709e;
    FUN_144ece7b0(lVar18);
  }
  else {
    local_80 = param_6;
    lVar18 = param_6;
LAB_1452a65cc:
    if (((int)local_98[2] == 0) && (iVar6 = FUN_144ba0ef0(local_98), iVar6 < 0)) {
LAB_1452a6622:
      if (((((int)local_98[1] == 0x10) && ((int)local_78[1] == 0x10)) &&
          (iVar6 = FUN_144ba03d0(param_4), iVar6 == 0x400)) &&
         (iVar6 = FUN_1426e7100(), puVar19 = local_58, iVar6 != 0)) {
        lVar10 = FUN_144ba1290(local_58,0x10);
        puVar20 = auStack_f8;
        plVar12 = plVar23;
        _Dst = plVar25;
        if (lVar10 != 0) {
          local_d0 = *(longlong *)(lVar18 + 0x50);
          local_d8 = *(undefined8 *)(lVar18 + 8);
          FUN_145506590(*puVar19,*local_98,*local_78,*param_4);
          *(undefined4 *)(puVar19 + 1) = 0x10;
LAB_1452a669e:
          *(undefined4 *)(puVar19 + 2) = 0;
          FUN_144ba1350(puVar19);
          local_50 = CONCAT44(local_50._4_4_,1);
          puVar20 = auStack_f8;
          plVar12 = plVar23;
          _Dst = plVar25;
        }
      }
      else if ((((int)local_98[1] == 8) && ((int)local_78[1] == 8)) &&
              (iVar6 = FUN_144ba03d0(param_4), puVar19 = local_58, iVar6 == 0x200)) {
        lVar10 = FUN_144ba1290(local_58,8);
        puVar20 = auStack_f8;
        plVar12 = plVar23;
        _Dst = plVar25;
        if (lVar10 != 0) {
          local_d0 = *(longlong *)(lVar18 + 8);
          local_d8 = *(undefined8 *)(lVar18 + 0x50);
          FUN_145506d80(*puVar19,*local_98,*local_78,*param_4);
          *(undefined4 *)(puVar19 + 1) = 8;
          goto LAB_1452a669e;
        }
      }
      else {
        iVar6 = 3;
        if ((int)uVar24 < 0x3aa) {
          if (0x132 < (int)uVar24) {
            uVar26 = 5;
            goto LAB_1452a6771;
          }
          if ((int)uVar24 < 0x5a) {
            uVar26 = 1;
            if (0x16 < (int)uVar24) {
              uVar26 = 3;
            }
            if (4 < uVar26) goto LAB_1452a6771;
          }
          else {
            uVar26 = 4;
          }
        }
        else {
          uVar26 = 6;
LAB_1452a6771:
          if (iVar5 < 0x201) {
            local_88 = iVar5 * 8;
            uVar26 = 5;
          }
        }
        local_b8._0_4_ = 1 << (sbyte)uVar26;
        iVar7 = iVar5 * 2;
        if (iVar5 * 2 <= (int)local_b8) {
          iVar7 = (int)local_b8;
        }
        local_88 = local_88 + (iVar7 + (int)local_b8 * iVar5) * 8;
        if (local_88 < 0xc00) {
          uVar11 = (longlong)(local_88 + 0x40) + 0xf;
          if (uVar11 <= (ulonglong)(longlong)(local_88 + 0x40)) {
            uVar11 = 0xffffffffffffff0;
          }
          plVar12 = (longlong *)((longlong)&local_b8 + -(uVar11 & 0xfffffffffffffff0));
          puVar4 = auStack_f8 + -(uVar11 & 0xfffffffffffffff0);
        }
        else {
          plVar12 = (longlong *)
                    FUN_144ea64e0((longlong)(local_88 + 0x40),"crypto\\bn\\bn_exp.c",0x2e4);
          puVar20 = auStack_f8;
          puVar4 = auStack_f8;
          _Dst = plVar9;
          if (plVar12 == (longlong *)0x0) goto LAB_1452a708c;
        }
        puVar20 = puVar4;
        _Size = (size_t)local_88;
        uVar11 = (ulonglong)plVar12 & 0xffffffffffffffc0;
        _Dst = (longlong *)(uVar11 + 0x40);
        *(undefined8 *)(puVar20 + -8) = 0x1452a6817;
        memset(_Dst,0,_Size);
        local_68 = 0;
        local_90 = (longlong *)0x0;
        if (0xbff < local_88) {
          local_90 = plVar12;
        }
        local_a8 = 0;
        local_60 = 0;
        local_a0 = 0;
        uVar15 = iVar5 - 1;
        local_b0 = _Dst + (longlong)(int)local_b8 * uVar17;
        local_5c = 2;
        local_70 = local_b0 + uVar17;
        lVar10 = (longlong)(int)uVar15;
        local_9c = 2;
        local_48 = lVar10 * 8;
        local_a4 = iVar5;
        iStack_64 = iVar5;
        if (((longlong *)*local_40)[lVar10] < 0) {
          *local_b0 = -*(longlong *)*local_40;
          uVar16 = 1;
          uVar22 = uVar16;
          if ((1 < iVar5) && (3 < uVar15)) {
            lVar2 = *local_40;
            if ((((longlong *)(local_48 + lVar2) < local_b0 + 1) ||
                (local_b0 + lVar10 < (longlong *)(lVar2 + 8))) &&
               ((local_40 < local_b0 + 1 || (uVar22 = 1, local_b0 + lVar10 < local_40)))) {
              uVar15 = uVar15 & 0x80000003;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
              }
              uVar22 = uVar16;
              do {
                puVar1 = (ulonglong *)(lVar2 + uVar16 * 8);
                uVar3 = puVar1[1];
                uVar22 = (ulonglong)((int)uVar22 + 4);
                local_b0[uVar16] = ~*puVar1;
                (local_b0 + uVar16)[1] = ~uVar3;
                puVar1 = (ulonglong *)(lVar2 + 0x10 + uVar16 * 8);
                uVar3 = puVar1[1];
                local_b0[uVar16 + 2] = ~*puVar1;
                (local_b0 + uVar16 + 2)[1] = ~uVar3;
                uVar16 = uVar16 + 4;
              } while ((longlong)uVar16 < (longlong)(int)(iVar5 - uVar15));
            }
          }
          for (lVar10 = (longlong)(int)uVar22; local_a8 = iVar5, lVar10 < (longlong)uVar17;
              lVar10 = lVar10 + 1) {
            local_b0[lVar10] = ~*(ulonglong *)(*local_40 + lVar10 * 8);
          }
        }
        else {
          *(undefined8 *)(puVar20 + -8) = 0x1452a6964;
          uVar13 = FUN_144ba03c0();
          *(undefined8 *)(puVar20 + -8) = 0x1452a697a;
          iVar7 = FUN_144eced20(&local_b0,uVar13,lVar18,param_5);
          plVar12 = local_90;
          if (iVar7 == 0) goto LAB_1452a708c;
        }
        plVar9 = local_98;
        *(undefined8 *)(puVar20 + -8) = 0x1452a6999;
        iVar7 = FUN_144eced20(&local_70,plVar9,lVar18,param_5);
        lVar10 = local_80;
        plVar9 = local_b0;
        plVar12 = local_90;
        if (iVar7 != 0) {
          if (((iVar5 < 0x201) && (uVar26 == 5)) && (1 < iVar5)) {
            lVar18 = lVar18 + 0x50;
            if (local_68 < iVar5) {
              plVar23 = local_70 + local_68;
              for (lVar10 = (longlong)(iVar5 - local_68); lVar10 != 0; lVar10 = lVar10 + -1) {
                *plVar23 = 0;
                plVar23 = plVar23 + 1;
              }
            }
            if (local_a8 < iVar5) {
              plVar23 = local_b0 + local_a8;
              for (lVar10 = (longlong)(iVar5 - local_a8); lVar10 != 0; lVar10 = lVar10 + -1) {
                *plVar23 = 0;
                plVar23 = plVar23 + 1;
              }
            }
            lVar10 = 0;
            plVar23 = local_70 + uVar17;
            if (0 < iVar5) {
              do {
                plVar23[lVar10] = *(longlong *)(*(longlong *)(local_80 + 0x20) + lVar10 * 8);
                lVar10 = lVar10 + 1;
              } while (lVar10 < (longlong)uVar17);
            }
            *(undefined8 *)(puVar20 + -8) = 0x1452a6a36;
            FUN_1426e46e0(plVar9,uVar17,_Dst,0);
            plVar9 = local_70;
            lVar10 = (longlong)local_68;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6a4c;
            FUN_1426e46e0(plVar9,lVar10,_Dst,1);
            plVar25 = local_70;
            plVar9 = local_b0;
            *(int *)(puVar20 + 0x28) = iVar5;
            *(longlong *)(puVar20 + 0x20) = lVar18;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6a68;
            FUN_142661b80(plVar9,plVar25,plVar25,plVar23);
            plVar9 = local_b0;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6a7d;
            FUN_1426e46e0(plVar9,uVar17,_Dst,2);
            iVar7 = 4;
            do {
              plVar9 = local_b0;
              *(int *)(puVar20 + 0x28) = iVar5;
              *(longlong *)(puVar20 + 0x20) = lVar18;
              *(undefined8 *)(puVar20 + -8) = 0x1452a6a9d;
              FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
              plVar9 = local_b0;
              *(undefined8 *)(puVar20 + -8) = 0x1452a6aaf;
              FUN_1426e46e0(plVar9,uVar17,_Dst,(longlong)iVar7);
              iVar7 = iVar7 * 2;
            } while (iVar7 < 0x20);
            local_98 = (longlong *)&DAT_00000003;
            do {
              plVar12 = local_70;
              plVar25 = local_98;
              plVar9 = local_b0;
              *(int *)(puVar20 + 0x30) = iVar6 + -1;
              *(int *)(puVar20 + 0x28) = iVar5;
              *(longlong *)(puVar20 + 0x20) = lVar18;
              *(undefined8 *)(puVar20 + -8) = 0x1452a6ae3;
              FUN_1426e1800(plVar9,plVar12,_Dst,plVar23);
              plVar9 = local_b0;
              *(undefined8 *)(puVar20 + -8) = 0x1452a6af5;
              FUN_1426e46e0(plVar9,uVar17,_Dst,plVar25);
              iVar7 = iVar6 * 2;
              if (iVar6 < 0x10) {
                do {
                  plVar9 = local_b0;
                  *(int *)(puVar20 + 0x28) = iVar5;
                  *(longlong *)(puVar20 + 0x20) = lVar18;
                  *(undefined8 *)(puVar20 + -8) = 0x1452a6b1b;
                  FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                  plVar9 = local_b0;
                  *(undefined8 *)(puVar20 + -8) = 0x1452a6b2d;
                  FUN_1426e46e0(plVar9,uVar17,_Dst,(longlong)iVar7);
                  iVar7 = iVar7 * 2;
                } while (iVar7 < 0x20);
              }
              iVar6 = iVar6 + 2;
              local_98 = (longlong *)((longlong)local_98 + 2);
            } while (iVar6 < 8);
            if (iVar6 < 0x10) {
              lVar10 = (longlong)iVar6;
              local_98 = (longlong *)(longlong)(iVar6 * 2);
              do {
                plVar25 = local_70;
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x30) = iVar6 + -1;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6b84;
                FUN_1426e1800(plVar9,plVar25,_Dst,plVar23);
                plVar9 = local_b0;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6b96;
                FUN_1426e46e0(plVar9,uVar17,_Dst,lVar10);
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6bb1;
                FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                plVar25 = local_98;
                plVar9 = local_b0;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6bc4;
                FUN_1426e46e0(plVar9,uVar17,_Dst,plVar25);
                local_98 = (longlong *)((longlong)local_98 + 4);
                iVar6 = iVar6 + 2;
                lVar10 = lVar10 + 2;
              } while (iVar6 < 0x10);
            }
            if (iVar6 < 0x20) {
              lVar10 = (longlong)iVar6;
              iVar6 = iVar6 + -1;
              do {
                plVar25 = local_70;
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x30) = iVar6;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6c10;
                FUN_1426e1800(plVar9,plVar25,_Dst,plVar23);
                plVar9 = local_b0;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6c22;
                FUN_1426e46e0(plVar9,uVar17,_Dst,lVar10);
                iVar6 = iVar6 + 2;
                lVar10 = lVar10 + 2;
              } while (iVar6 < 0x1f);
            }
            plVar25 = local_78;
            plVar9 = local_b0;
            uVar11 = 0;
            iVar7 = (int)(local_84 - 1) % 5 + 1;
            uVar24 = local_84 - iVar7;
            uVar15 = (int)uVar24 >> 0x1f & 0x3f;
            uVar26 = uVar24 + uVar15;
            iVar6 = (uVar26 & 0x3f) - uVar15;
            iVar21 = (int)uVar26 >> 6;
            if ((-1 < iVar21) && (iVar21 < (int)local_78[1])) {
              uVar11 = *(ulonglong *)(*local_78 + (longlong)iVar21 * 8);
              if (iVar6 != 0) {
                bVar14 = (byte)iVar6;
                uVar11 = uVar11 >> (bVar14 & 0x3f);
                if (iVar21 + 1 < (int)local_78[1]) {
                  uVar11 = uVar11 | *(longlong *)(*local_78 + (longlong)(iVar21 + 1) * 8) <<
                                    (0x40 - bVar14 & 0x3f);
                }
              }
            }
            local_84 = uVar24;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6cd1;
            FUN_1426e4720(plVar9,uVar17,_Dst,
                          (longlong)(int)((uint)uVar11 & (1 << ((byte)iVar7 & 0x1f)) - 1U));
            plVar9 = local_b0;
            iVar7 = iVar5;
            if ((uVar17 & 7) == 0) {
              while (0 < (int)uVar24) {
                lVar10 = *plVar25;
                uVar24 = uVar24 - 5;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6db0;
                uVar8 = FUN_1426e46b0(lVar10,uVar24);
                plVar9 = local_b0;
                *(undefined4 *)(puVar20 + 0x30) = uVar8;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6dcf;
                FUN_1426e2780(plVar9,plVar9,_Dst,plVar23);
              }
            }
            else {
              while (local_b0 = plVar9, 0 < (int)uVar24) {
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6cfd;
                FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6d18;
                FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6d33;
                FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6d4e;
                FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                plVar9 = local_b0;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6d69;
                FUN_142661b80(plVar9,plVar9,plVar9,plVar23);
                lVar10 = *plVar25;
                uVar24 = uVar24 - 5;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6d76;
                uVar8 = FUN_1426e46b0(lVar10,uVar24);
                plVar9 = local_b0;
                *(undefined4 *)(puVar20 + 0x30) = uVar8;
                *(int *)(puVar20 + 0x28) = iVar5;
                *(longlong *)(puVar20 + 0x20) = lVar18;
                *(undefined8 *)(puVar20 + -8) = 0x1452a6d95;
                FUN_1426e1800(plVar9,plVar9,_Dst,plVar23);
                plVar9 = local_b0;
              }
            }
LAB_1452a6dd6:
            local_a8 = iVar7;
            puVar19 = local_58;
            lVar18 = local_80;
            plVar12 = local_90;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6dfb;
            iVar5 = FUN_144ece770(puVar19,&local_b0,lVar18,param_5);
            if (iVar5 != 0) {
              local_50 = CONCAT44(local_50._4_4_,1);
            }
          }
          else {
            iVar7 = iVar5;
            if (local_a8 < iVar5) {
              iVar7 = local_a8;
            }
            if (0 < iVar7) {
              lVar18 = 0;
              plVar9 = _Dst;
              do {
                plVar23 = local_b0 + lVar18;
                lVar18 = lVar18 + 1;
                *plVar9 = *plVar23;
                plVar9 = plVar9 + (int)local_b8;
              } while (lVar18 < iVar7);
            }
            iVar7 = iVar5;
            if (local_68 < iVar5) {
              iVar7 = local_68;
            }
            if (0 < iVar7) {
              plVar9 = (longlong *)(uVar11 + 0x48);
              lVar18 = 0;
              do {
                plVar23 = local_70 + lVar18;
                lVar18 = lVar18 + 1;
                *plVar9 = *plVar23;
                plVar9 = plVar9 + (int)local_b8;
              } while (lVar18 < iVar7);
            }
            if (1 < uVar26) {
              *(undefined8 *)(puVar20 + 0x20) = param_5;
              *(undefined8 *)(puVar20 + -8) = 0x1452a6eb4;
              iVar7 = FUN_144ecebf0(&local_b0,&local_70,&local_70,lVar10);
              lVar18 = lVar10;
              plVar12 = local_90;
              if (iVar7 == 0) goto LAB_1452a708c;
              iVar7 = iVar5;
              if (local_a8 < iVar5) {
                iVar7 = local_a8;
              }
              if (0 < iVar7) {
                plVar9 = (longlong *)(uVar11 + 0x50);
                lVar18 = 0;
                do {
                  plVar23 = local_b0 + lVar18;
                  lVar18 = lVar18 + 1;
                  *plVar9 = *plVar23;
                  plVar9 = plVar9 + (int)local_b8;
                } while (lVar18 < iVar7);
              }
              if (3 < (int)local_b8) {
                do {
                  *(undefined8 *)(puVar20 + 0x20) = param_5;
                  *(undefined8 *)(puVar20 + -8) = 0x1452a6f29;
                  iVar7 = FUN_144ecebf0(&local_b0,&local_70,&local_b0,lVar10);
                  lVar18 = local_80;
                  plVar12 = local_90;
                  if (iVar7 == 0) goto LAB_1452a708c;
                  iVar7 = iVar5;
                  if (local_a8 < iVar5) {
                    iVar7 = local_a8;
                  }
                  lVar18 = 0;
                  if (0 < iVar7) {
                    plVar9 = _Dst + iVar6;
                    do {
                      plVar23 = local_b0 + lVar18;
                      lVar18 = lVar18 + 1;
                      *plVar9 = *plVar23;
                      plVar9 = plVar9 + (int)local_b8;
                    } while (lVar18 < iVar7);
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < (int)local_b8);
              }
            }
            plVar9 = local_78;
            iVar7 = (int)(uVar24 - 1) % (int)uVar26 + 1;
            iVar6 = uVar24 - iVar7;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6f9e;
            uVar24 = FUN_1452a78f0(plVar9,iVar6);
            *(uint *)(puVar20 + 0x20) = uVar26;
            *(undefined8 *)(puVar20 + -8) = 0x1452a6fc2;
            iVar7 = FUN_1452a7950(&local_b0,iVar5,_Dst,uVar24 & (1 << ((byte)iVar7 & 0x1f)) - 1U);
            lVar18 = local_80;
            plVar12 = local_90;
            if (iVar7 != 0) {
              local_84 = (int)local_b8 - 1;
              do {
                iVar7 = local_a8;
                if (iVar6 < 1) goto LAB_1452a6dd6;
                iVar7 = 0;
                if (uVar26 != 0) {
                  do {
                    *(undefined8 *)(puVar20 + 0x20) = param_5;
                    *(undefined8 *)(puVar20 + -8) = 0x1452a7009;
                    iVar21 = FUN_144ecebf0(&local_b0,&local_b0,&local_b0,lVar10);
                    lVar18 = local_80;
                    plVar12 = local_90;
                    if (iVar21 == 0) goto LAB_1452a708c;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (int)uVar26);
                }
                plVar9 = local_78;
                iVar6 = iVar6 - uVar26;
                *(undefined8 *)(puVar20 + -8) = 0x1452a7023;
                uVar24 = FUN_1452a78f0(plVar9,iVar6);
                uVar24 = uVar24 & local_84;
                *(uint *)(puVar20 + 0x20) = uVar26;
                *(undefined8 *)(puVar20 + -8) = 0x1452a703c;
                iVar7 = FUN_1452a7950(&local_70,iVar5,_Dst,uVar24);
                lVar18 = local_80;
                plVar12 = local_90;
                if (iVar7 == 0) break;
                *(undefined8 *)(puVar20 + 0x20) = param_5;
                *(undefined8 *)(puVar20 + -8) = 0x1452a7059;
                iVar7 = FUN_144ecebf0(&local_b0,&local_b0,&local_70,lVar10);
                lVar18 = local_80;
                plVar12 = local_90;
              } while (iVar7 != 0);
            }
          }
        }
      }
    }
    else {
      local_90 = (longlong *)FUN_144eede90(param_5);
      puVar20 = auStack_f8;
      plVar12 = plVar9;
      _Dst = plVar9;
      if ((local_90 != (longlong *)0x0) &&
         (iVar6 = FUN_1452a55e0(local_90,local_98,param_4,param_5), puVar20 = auStack_f8,
         plVar12 = plVar23, _Dst = plVar25, iVar6 != 0)) {
        local_98 = local_90;
        goto LAB_1452a6622;
      }
    }
LAB_1452a708c:
    if (param_6 == 0) goto LAB_1452a7096;
  }
  if (_Dst != (longlong *)0x0) {
    lVar18 = (longlong)local_88;
    *(undefined8 *)(puVar20 + -8) = 0x1452a70af;
    FUN_14259f0c0(_Dst,lVar18);
    *(undefined8 *)(puVar20 + -8) = 0x1452a70c4;
    FUN_144ea6530(plVar12,"crypto\\bn\\bn_exp.c",0x480);
  }
  *(undefined8 *)(puVar20 + -8) = 0x1452a70cc;
  FUN_144eedf20(param_5);
LAB_1452a70cf:
  uVar17 = local_38 ^ (ulonglong)&local_b8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_1452a70de;
  FUN_144d8e3a0(uVar17);
}



// FUNCTION 1452a7110 FUN_1452a7110 body=1002 status=ok
// SIG undefined FUN_1452a7110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1452a7110(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,longlong param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar3 = 0;
  lVar7 = 0;
  iVar2 = FUN_144ba0230(param_3,4);
  if ((iVar2 != 0) || (iVar2 = FUN_144ba0230(param_4), iVar2 != 0)) {
    FUN_144ba24f0(3,0x75,0x42,"crypto\\bn\\bn_exp.c",CONCAT44(uVar11,0x4a3));
    return 0;
  }
  iVar2 = FUN_144ba03a0(param_4);
  if (iVar2 == 0) {
    FUN_144ba24f0(3,0x75,0x66,"crypto\\bn\\bn_exp.c",CONCAT44(uVar11,0x4ab));
    return 0;
  }
  if (*(int *)(param_4 + 1) == 1) {
    param_2 = param_2 % *(ulonglong *)*param_4;
  }
  iVar2 = FUN_144ba03d0(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_144ba0310(param_4,1);
    if (iVar2 != 0) {
      FUN_144ba0bb0(param_1,0);
      return 1;
    }
    uVar3 = FUN_144ba0bb0(param_1,1);
    return uVar3;
  }
  if (param_2 == 0) {
    FUN_144ba0bb0(param_1,0);
    return 1;
  }
  FUN_144eede20(param_5);
  lVar5 = FUN_144eede90(param_5);
  lVar6 = FUN_144eede90(param_5);
  if (lVar6 == 0) {
LAB_1452a7445:
    if (param_6 != 0) goto LAB_1452a7458;
  }
  else {
    lVar7 = param_6;
    if ((param_6 != 0) ||
       ((lVar7 = FUN_144ece690(), lVar7 != 0 &&
        (iVar4 = FUN_144ece810(lVar7,param_4,param_5), uVar3 = 0, iVar4 != 0)))) {
      bVar1 = true;
      uVar10 = param_2;
      for (iVar2 = iVar2 + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
        uVar9 = uVar10 * uVar10;
        lVar8 = lVar5;
        if (uVar9 / uVar10 != uVar10) {
          if (bVar1) {
            iVar4 = FUN_144ba0bb0();
            if ((iVar4 == 0) || (iVar4 = FUN_144ba1260(lVar5,lVar5,lVar7,param_5), iVar4 == 0))
            goto LAB_1452a7443;
            bVar1 = false;
            lVar5 = lVar6;
          }
          else {
            iVar4 = FUN_14526b160(lVar5,uVar10);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_144eef830(0,lVar6,lVar5,param_4,param_5), lVar8 = lVar6, iVar4 == 0))
            goto LAB_1452a7443;
          }
          uVar9 = 1;
          lVar6 = lVar5;
        }
        if ((!bVar1) && (iVar4 = FUN_144ece730(lVar8,lVar8,lVar8,lVar7,param_5), iVar4 == 0))
        goto LAB_1452a7443;
        iVar4 = FUN_144ba0d50(param_3);
        lVar5 = lVar8;
        uVar10 = uVar9;
        if ((iVar4 != 0) && (uVar10 = uVar9 * param_2, (uVar9 * param_2) / param_2 != uVar9)) {
          if (bVar1) {
            iVar4 = FUN_144ba0bb0();
            if ((iVar4 == 0) || (iVar4 = FUN_144ba1260(lVar8,lVar8,lVar7,param_5), iVar4 == 0))
            goto LAB_1452a7443;
            bVar1 = false;
            uVar10 = param_2;
          }
          else {
            iVar4 = FUN_14526b160(lVar8,uVar9);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_144eef830(0,lVar6,lVar8,param_4,param_5), lVar5 = lVar6,
               uVar10 = param_2, lVar6 = lVar8, iVar4 == 0)) goto LAB_1452a7443;
          }
        }
      }
      if (uVar10 == 1) {
        if (bVar1) {
          iVar2 = FUN_144ba0bb0(param_1,1);
        }
        else {
LAB_1452a7496:
          iVar2 = FUN_144ece770(param_1,lVar5,lVar7,param_5);
        }
        if (iVar2 != 0) {
          uVar3 = 1;
          goto LAB_1452a7445;
        }
      }
      else if (bVar1) {
        iVar2 = FUN_144ba0bb0();
        if (iVar2 != 0) {
          iVar2 = FUN_144ba1260(lVar5,lVar5,lVar7,param_5);
joined_r0x0001452a7491:
          if (iVar2 != 0) goto LAB_1452a7496;
        }
      }
      else {
        iVar2 = FUN_14526b160(lVar5,uVar10);
        if (iVar2 != 0) {
          iVar2 = FUN_144eef830(0,lVar6,lVar5,param_4,param_5);
          lVar5 = lVar6;
          goto joined_r0x0001452a7491;
        }
      }
LAB_1452a7443:
      uVar3 = 0;
      goto LAB_1452a7445;
    }
  }
  FUN_144ece7b0(lVar7);
LAB_1452a7458:
  FUN_144eedf20(param_5);
  return uVar3;
}



// FUNCTION 1452a7500 FUN_1452a7500 body=977 status=ok
// SIG undefined FUN_1452a7500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a7500(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [56];
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar13 = 4;
  local_1a8 = param_5;
  local_1b8 = 0;
  local_1b0 = param_3;
  iVar4 = FUN_144ba0230(param_3,4);
  if (((iVar4 != 0) || (iVar4 = FUN_144ba0230(param_2,4), iVar4 != 0)) ||
     (iVar4 = FUN_144ba0230(param_4,4), iVar4 != 0)) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0xb8);
    FUN_144ba24f0(3,0x7d,0x42,"crypto\\bn\\bn_exp.c");
    goto LAB_1452a75d8;
  }
  iVar4 = FUN_144ba03d0(param_3);
  if (iVar4 == 0) {
    iVar4 = FUN_144ba0310(param_4,1);
    if (iVar4 == 0) {
      FUN_144ba0bb0(param_1,1);
    }
    else {
      FUN_144ba0bb0(param_1,0);
    }
    goto LAB_1452a75d8;
  }
  FUN_145506540(local_198);
  FUN_144eede20(param_5);
  lVar7 = FUN_144eede90(param_5);
  lVar8 = FUN_144eede90(param_5);
  alStack_160[1] = lVar8;
  if (lVar8 != 0) {
    lVar9 = param_4;
    if (*(int *)(param_4 + 0x10) != 0) {
      lVar9 = FUN_144ba06b0(lVar7,param_4);
      if (lVar9 == 0) goto LAB_1452a7898;
      *(undefined4 *)(lVar7 + 0x10) = 0;
      lVar9 = lVar7;
    }
    iVar5 = FUN_1455061c0(local_198,lVar9,param_5);
    if ((0 < iVar5) && (iVar5 = FUN_1452a55e0(lVar8,param_2,param_4,param_5), iVar5 != 0)) {
      iVar5 = FUN_144ba0340(lVar8);
      if (iVar5 == 0) {
        lVar9 = 1;
        if (iVar4 < 0x2a0) {
          if (0xef < iVar4) {
            uVar13 = 5;
            goto LAB_1452a76ef;
          }
          if (0x4f < iVar4) goto LAB_1452a76ef;
          uVar13 = 1;
          if (0x17 < iVar4) {
            uVar13 = 3;
          }
          if (1 < uVar13) goto LAB_1452a76ef;
        }
        else {
          uVar13 = 6;
LAB_1452a76ef:
          local_1c8 = param_5;
          iVar5 = FUN_145506220(lVar7,lVar8,lVar8,local_198);
          if (iVar5 == 0) goto LAB_1452a7898;
          lVar8 = (longlong)(1 << ((char)uVar13 - 1U & 0x1f));
          if (1 < lVar8) {
            do {
              lVar10 = FUN_144eede90(param_5);
              alStack_160[lVar9 + 1] = lVar10;
              if (lVar10 == 0) goto LAB_1452a7898;
              local_1c8 = param_5;
              iVar5 = FUN_145506220(lVar10,alStack_160[lVar9],lVar7,local_198);
              if (iVar5 == 0) goto LAB_1452a7898;
              lVar9 = lVar9 + 1;
            } while (lVar9 < lVar8);
          }
        }
        bVar1 = true;
        local_1b4 = 1;
        iVar4 = iVar4 + -1;
        iVar5 = FUN_144ba0bb0(param_1,1);
        if (iVar5 != 0) {
          do {
            while( true ) {
              uVar11 = 1;
              uVar12 = 1;
              iVar5 = FUN_144ba0d50(local_1b0,iVar4);
              uVar2 = local_1b0;
              if (iVar5 != 0) break;
              if ((!bVar1) &&
                 (local_1c8 = param_5, iVar5 = FUN_145506220(param_1,param_1,param_1,local_198),
                 iVar5 == 0)) goto LAB_1452a7898;
              if (iVar4 == 0) goto LAB_1452a7894;
              iVar4 = iVar4 + -1;
            }
            uVar14 = 0;
            iVar5 = iVar4;
            uVar3 = uVar11;
            if (1 < uVar13) {
              do {
                uVar12 = uVar3;
                iVar5 = iVar5 + -1;
                param_5 = local_1a8;
                if (iVar5 < 0) break;
                iVar6 = FUN_144ba0d50(uVar2,iVar5);
                if (iVar6 != 0) {
                  uVar12 = uVar12 << ((char)uVar11 - (char)uVar14 & 0x1fU) | 1;
                  uVar14 = uVar11;
                }
                uVar11 = uVar11 + 1;
                param_5 = local_1a8;
                uVar3 = uVar12;
              } while ((int)uVar11 < (int)uVar13);
            }
            if ((local_1b4 == 0) && (iVar5 = 0, 0 < (int)(uVar14 + 1))) {
              do {
                local_1c8 = param_5;
                iVar6 = FUN_145506220(param_1,param_1,param_1,local_198);
                if (iVar6 == 0) goto LAB_1452a7898;
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uVar14 + 1));
            }
            local_1c8 = param_5;
            iVar5 = FUN_145506220(param_1,param_1,alStack_160[((longlong)(int)uVar12 >> 1) + 1],
                                  local_198);
            if (iVar5 == 0) goto LAB_1452a7898;
            bVar1 = false;
            local_1b4 = 0;
            iVar4 = iVar4 + (-1 - uVar14);
          } while (-1 < iVar4);
LAB_1452a7894:
          local_1b8 = 1;
        }
      }
      else {
        FUN_144ba0bb0(param_1,0);
        local_1b8 = 1;
      }
    }
  }
LAB_1452a7898:
  FUN_144eedf20(param_5);
  FUN_145506170(local_198);
LAB_1452a75d8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 1452a78f0 FUN_1452a78f0 body=95 status=ok
// SIG undefined FUN_1452a78f0(void)

ulonglong FUN_1452a78f0(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = param_2 >> 0x1f & 0x3f;
  uVar1 = param_2 + uVar4;
  iVar2 = (uVar1 & 0x3f) - uVar4;
  iVar6 = (int)uVar1 >> 6;
  if ((-1 < iVar6) && (iVar6 < (int)param_1[1])) {
    uVar5 = *(ulonglong *)(*param_1 + (longlong)iVar6 * 8);
    if (iVar2 != 0) {
      bVar3 = (byte)iVar2;
      uVar5 = uVar5 >> (bVar3 & 0x3f);
      if (iVar6 + 1 < (int)param_1[1]) {
        return *(longlong *)(*param_1 + (longlong)(iVar6 + 1) * 8) << (0x40 - bVar3 & 0x3f) | uVar5;
      }
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 1452a7950 FUN_1452a7950 body=681 status=ok
// SIG undefined FUN_1452a7950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a7950(longlong *param_1,int param_2,ulonglong *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_78;
  
  iVar6 = 1 << ((byte)param_5 & 0x1f);
  lVar1 = FUN_144ba1290(param_1);
  if (lVar1 != 0) {
    if (param_5 < 4) {
      lVar1 = 0;
      if (0 < param_2) {
        do {
          uVar9 = 0;
          uVar5 = 0;
          puVar4 = param_3;
          if (0 < iVar6) {
            do {
              uVar3 = uVar5 ^ param_4;
              uVar5 = uVar5 + 1;
              uVar9 = uVar9 | -(ulonglong)((int)(~uVar3 & uVar3 - 1) >> 0x1f & 1) & *puVar4;
              puVar4 = puVar4 + 1;
            } while ((int)uVar5 < iVar6);
          }
          param_3 = param_3 + iVar6;
          *(ulonglong *)(*param_1 + lVar1 * 8) = uVar9;
          lVar1 = lVar1 + 1;
        } while (lVar1 < param_2);
      }
    }
    else {
      bVar2 = (byte)param_5 - 2;
      uVar5 = (int)param_4 >> (bVar2 & 0x1f);
      iVar7 = 1 << (bVar2 & 0x1f);
      lVar1 = (longlong)iVar7;
      local_78 = 0;
      if (0 < param_2) {
        do {
          uVar9 = 0;
          uVar3 = 0;
          if (0 < lVar1) {
            puVar4 = param_3 + lVar1 * 2;
            lVar10 = lVar1;
            do {
              uVar8 = uVar3 ^ param_4 & iVar7 - 1U;
              uVar3 = uVar3 + 1;
              uVar9 = uVar9 | -(ulonglong)((int)(uVar8 - 1 & ~uVar8) >> 0x1f & 1) &
                              (puVar4[lVar1 * -2] &
                               -(ulonglong)((int)(~uVar5 & uVar5 - 1) >> 0x1f & 1) |
                              (puVar4 + 1)[-1 - lVar1] &
                              -(ulonglong)((int)((uVar5 ^ 1) - 1 & ~(uVar5 ^ 1)) >> 0x1f & 1) |
                              *puVar4 & -(ulonglong)
                                         ((int)((uVar5 ^ 2) - 1 & ~(uVar5 ^ 2)) >> 0x1f & 1) |
                              puVar4[lVar1] &
                              -(ulonglong)((int)(~(uVar5 ^ 3) & (uVar5 ^ 3) - 1) >> 0x1f & 1));
              lVar10 = lVar10 + -1;
              puVar4 = puVar4 + 1;
            } while (lVar10 != 0);
          }
          param_3 = param_3 + iVar6;
          *(ulonglong *)(*param_1 + local_78 * 8) = uVar9;
          local_78 = local_78 + 1;
        } while (local_78 < param_2);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 1452a7c00 FUN_1452a7c00 body=1156 status=ok
// SIG undefined FUN_1452a7c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452a7c00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,void *param_6,uint param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *_Dst;
  ulonglong uVar12;
  size_t _Size;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  
  local_40 = 0x1452a7c24;
  uVar10 = 0;
  uVar9 = 0;
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_2 + 8);
  }
  iVar2 = FUN_144ba03d0();
  iVar2 = ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 7;
  uVar12 = (ulonglong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  iVar2 = FUN_144ba03d0(param_3);
  iVar2 = ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 7;
  uVar11 = (ulonglong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  iVar2 = FUN_144ba03d0(param_4);
  iVar2 = ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 7;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  uVar14 = (ulonglong)iVar2;
  if (uVar11 < uVar12) {
    uVar11 = uVar12;
  }
  lVar4 = FUN_144ea6670(uVar11 * 8,"crypto\\bn\\rsa_sup_mul.c",0x221);
  lVar5 = FUN_144ea6670(uVar11 * 8,"crypto\\bn\\rsa_sup_mul.c",0x222);
  lVar6 = FUN_144ea6670(uVar14 * 8,"crypto\\bn\\rsa_sup_mul.c",0x223);
  uVar12 = uVar10;
  uVar8 = uVar10;
  uVar7 = uVar10;
  if (((lVar4 != 0) && (uVar8 = 0, uVar7 = 0, lVar5 != 0)) && (lVar6 != 0)) {
    FUN_1452a8880(param_1,lVar4,uVar11);
    FUN_1452a8880(param_3,lVar5,uVar11);
    FUN_1452a8880(param_4,lVar6,uVar14);
    uVar7 = FUN_144ea64e0(uVar11 << 4,"crypto\\bn\\rsa_sup_mul.c",0x22c);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar1 = uVar14 + uVar11 * 2;
      uVar13 = 0x235;
      uVar12 = lVar1 * 3;
      uVar8 = uVar11 * 4;
      if (uVar12 <= uVar8 && uVar8 + lVar1 * -3 != 0) {
        uVar12 = uVar8;
      }
    }
    else {
      uVar8 = uVar11 * 4;
      uVar13 = 0x231;
      uVar12 = uVar14 * 4 + 2;
      if (uVar12 <= uVar8 && uVar8 - uVar12 != 0) {
        uVar12 = uVar8;
      }
    }
    uVar8 = FUN_144ea64e0(uVar12 * 8,"crypto\\bn\\rsa_sup_mul.c",uVar13);
    uVar12 = uVar9;
    if ((uVar7 != 0) && (uVar8 != 0)) {
      if (*(longlong *)(param_2 + 0x30) == 0) {
        FUN_1452a8090(uVar7,lVar4,lVar5,uVar11,uVar8);
        uVar9 = uVar14;
        FUN_1452a83b0(uVar7,uVar7,uVar11 * 2,lVar6,uVar14,uVar8);
        uVar15 = (undefined4)(uVar9 >> 0x20);
      }
      else {
        FUN_1452a8090(uVar7,lVar4,lVar5,uVar11,uVar8);
        uVar9 = uVar14;
        FUN_1452a8710(uVar7,uVar7,uVar11 * 2,lVar6,uVar14,
                      *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x50),uVar8);
        uVar15 = (undefined4)(uVar9 >> 0x20);
      }
      iVar3 = FUN_144ba03d0(param_4);
      if ((int)param_7 < (int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) {
        FUN_144ba24f0(3,0x97,7,"crypto\\bn\\rsa_sup_mul.c",CONCAT44(uVar15,0x246));
      }
      else {
        memset(param_6,0,(longlong)(int)param_7);
        iVar3 = FUN_144ba03d0(param_4);
        _Dst = (ulonglong *)
               (((longlong)(int)param_7 -
                (longlong)((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3)) + (longlong)param_6);
        if (uVar14 != 0) {
          do {
            uVar9 = *(ulonglong *)(uVar7 + uVar10 * 8);
            if (uVar10 == 0) {
              _Size = (size_t)(int)(param_7 + iVar2 * -8 + 8);
              memcpy(_Dst,(void *)((longlong)&local_40 - _Size),_Size);
            }
            else {
              *_Dst = (((uVar9 & 0xff000000000000 | uVar9 >> 0x10) >> 0x10 | uVar9 & 0xff0000000000)
                       >> 0x10 | uVar9 & 0xff00000000) >> 8 |
                      (((uVar9 << 0x10 | (ulonglong)((uint)uVar9 & 0xff00)) << 0x10 |
                       (ulonglong)((uint)uVar9 & 0xff0000)) << 0x10 | uVar9 & 0xff000000) << 8;
              _Size = 8;
            }
            uVar10 = uVar10 + 1;
            _Dst = (ulonglong *)((longlong)_Dst + _Size);
          } while (uVar10 < uVar14);
        }
        uVar12 = (ulonglong)param_7;
      }
    }
  }
  FUN_144ea6530(lVar4,"crypto\\bn\\rsa_sup_mul.c",0x25f);
  FUN_144ea6530(lVar5,"crypto\\bn\\rsa_sup_mul.c",0x260);
  FUN_144ea6530(lVar6,"crypto\\bn\\rsa_sup_mul.c",0x261);
  FUN_144ea6530(uVar8,"crypto\\bn\\rsa_sup_mul.c",0x262);
  FUN_144ea6530(uVar7,"crypto\\bn\\rsa_sup_mul.c",0x263);
  return uVar12;
}



// FUNCTION 1452a8090 FUN_1452a8090 body=637 status=ok
// SIG undefined FUN_1452a8090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a8090(void *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong local_58;
  
  puVar1 = param_5 + param_4 * 2;
  memset(param_1,0,param_4 * 0x10);
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_5;
    puVar15 = puVar1 + param_4;
    lVar16 = (longlong)puVar1 - (longlong)param_5;
    uVar10 = param_4;
    local_58 = param_4;
    do {
      uVar14 = 0;
      param_3 = param_3 + -8;
      uVar11 = uVar10 + 1;
      if (uVar11 != 0) {
        uVar12 = uVar14;
        if ((1 < uVar11) &&
           ((puVar15 < param_5 ||
            ((undefined8 *)(((longlong)param_5 - (longlong)puVar1) + (longlong)puVar15) < puVar1))))
        {
          do {
            uVar12 = uVar12 + 2;
          } while (uVar12 < (uVar11 & 0xfffffffffffffffe));
          puVar4 = puVar1;
          for (uVar6 = uVar11 & 0x1ffffffffffffffe; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          puVar4 = param_5;
          for (uVar6 = uVar11 & 0x1ffffffffffffffe; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
        if (uVar12 < uVar11) {
          puVar4 = param_5 + uVar12;
          lVar7 = uVar11 - uVar12;
          do {
            *(undefined8 *)(lVar16 + (longlong)puVar4) = 0;
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      puVar4 = (undefined8 *)
               ((longlong)param_5 + (param_4 * -8 - (longlong)puVar1) + 8 + (longlong)puVar15);
      uVar12 = uVar14;
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)((longlong)puVar4 + param_3);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)
                        (((param_2 + param_4 * -8) - (longlong)puVar1) + (longlong)puVar15);
        uVar9 = SUB168(auVar2 * auVar3,8);
        uVar5 = SUB168(auVar2 * auVar3,0);
        if ((uVar12 & 1) == 0) {
          *(undefined8 *)(lVar16 + -8 + (longlong)puVar4) = uVar9;
          *(undefined8 *)((longlong)puVar4 + lVar16) = uVar5;
        }
        else {
          puVar4[-1] = uVar9;
          *puVar4 = uVar5;
        }
        uVar12 = uVar12 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar12 < param_4);
      if (-1 < (longlong)uVar10) {
        uVar12 = uVar11;
        puVar13 = (ulonglong *)(((longlong)param_1 - (longlong)puVar1) + (longlong)puVar15);
        do {
          uVar6 = *puVar13;
          uVar14 = uVar6 + uVar14;
          uVar8 = *(longlong *)(((longlong)puVar1 - (longlong)param_1) + (longlong)puVar13) + uVar14
          ;
          *puVar13 = uVar8;
          uVar14 = (ulonglong)(uVar14 < uVar6) + (ulonglong)(uVar8 < uVar14);
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + -1;
        } while (uVar12 != 0);
      }
      lVar7 = 0;
      if (-1 < (longlong)uVar10) {
        uVar10 = uVar11;
        puVar13 = (ulonglong *)(((longlong)param_1 - (longlong)puVar1) + (longlong)puVar15);
        do {
          uVar12 = *puVar13;
          uVar14 = uVar12 + lVar7;
          uVar6 = *(longlong *)(((longlong)param_5 - (longlong)param_1) + (longlong)puVar13) +
                  uVar14;
          *puVar13 = uVar6;
          lVar7 = (ulonglong)(uVar14 < uVar12) + (ulonglong)(uVar6 < uVar14);
          uVar10 = uVar10 - 1;
          puVar13 = puVar13 + -1;
        } while (uVar10 != 0);
      }
      puVar15 = puVar15 + 1;
      local_58 = local_58 - 1;
      uVar10 = uVar11;
    } while (local_58 != 0);
  }
  return;
}



// FUNCTION 1452a8310 FUN_1452a8310 body=157 status=ok
// SIG undefined FUN_1452a8310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a8310(ulonglong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  param_1 = param_1 * 2 | param_1;
  param_1 = param_1 | param_1 * 4;
  param_1 = param_1 | param_1 << 4;
  param_1 = param_1 | param_1 << 8;
  param_1 = param_1 | param_1 << 0x10;
  param_1 = param_1 << 0x20 | param_1;
  if (param_5 != 0) {
    puVar2 = param_4;
    do {
      puVar1 = puVar2 + 1;
      *(ulonglong *)((param_2 - (longlong)param_4) + -8 + (longlong)puVar1) =
           ~param_1 & *puVar2 |
           *(ulonglong *)((param_3 - (longlong)param_4) + -8 + (longlong)puVar1) & param_1;
      param_5 = param_5 + -1;
      puVar2 = puVar1;
    } while (param_5 != 0);
  }
  return;
}



// FUNCTION 1452a83b0 FUN_1452a83b0 body=542 status=ok
// SIG undefined FUN_1452a83b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a83b0(void *param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = param_3 + param_5;
  memset(param_6,0,uVar1 * 0x18);
  puVar2 = param_6 + uVar1;
  if (param_5 < uVar1) {
    puVar5 = param_6 + param_5;
    uVar6 = param_5;
    do {
      uVar6 = uVar6 + 1;
      *puVar5 = *(ulonglong *)(((param_2 + param_5 * -8) - (longlong)param_6) + (longlong)puVar5);
      puVar5 = puVar5 + 1;
    } while (uVar6 < uVar1);
  }
  if (param_5 != 0) {
    puVar5 = puVar2;
    uVar6 = param_5;
    do {
      *puVar5 = *(ulonglong *)((param_4 - (longlong)puVar2) + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar7 = param_3 << 6;
  if (lVar7 != 0) {
    do {
      uVar6 = 0;
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = puVar2[uVar8];
          puVar2[uVar8] = uVar3 >> 1 | uVar6 << 0x3f;
          uVar6 = (ulonglong)((uint)uVar3 & 1);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      uVar6 = 0;
      if (-1 < (longlong)(uVar1 - 1)) {
        puVar5 = param_6 + (uVar1 - 1);
        uVar8 = uVar1;
        do {
          uVar3 = *puVar5;
          puVar5 = puVar5 + -1;
          uVar6 = uVar3 - uVar6;
          uVar4 = uVar6 - *(longlong *)
                           ((longlong)puVar2 + (8 - (longlong)param_6) + (longlong)puVar5);
          puVar5[uVar1 * 2 + 1] = uVar4;
          uVar6 = (ulonglong)(uVar6 < uVar4) + (ulonglong)(uVar3 < uVar6);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar6 = uVar6 * 2 | uVar6;
      uVar6 = uVar6 | uVar6 * 4;
      uVar6 = uVar6 | uVar6 << 4;
      uVar6 = uVar6 | uVar6 << 8;
      uVar6 = uVar6 | uVar6 << 0x10;
      uVar6 = uVar6 << 0x20 | uVar6;
      puVar5 = param_6;
      for (uVar8 = uVar1; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = uVar6 & *puVar5 | puVar5[uVar1 * 2] & ~uVar6;
        puVar5 = puVar5 + 1;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  memcpy(param_1,param_6 + param_3,param_5 * 8);
  return;
}



// FUNCTION 1452a85d0 FUN_1452a85d0 body=317 status=ok
// SIG undefined FUN_1452a85d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a85d0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  memset(param_5,0,(param_3 + 1) * 0x10);
  uVar10 = 0;
  plVar1 = param_5 + param_3 + 1;
  if (param_3 != 0) {
    puVar5 = param_5;
    do {
      puVar7 = puVar5 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_4;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)((param_2 - (longlong)param_5) + -8 + (longlong)puVar7);
      uVar9 = SUB168(auVar3 * auVar4,8);
      uVar6 = SUB168(auVar3 * auVar4,0);
      if ((uVar10 & 1) == 0) {
        *(undefined8 *)(((longlong)plVar1 - (longlong)param_5) + -8 + (longlong)puVar7) = uVar9;
        *(undefined8 *)(((longlong)plVar1 - (longlong)param_5) + (longlong)puVar7) = uVar6;
      }
      else {
        *puVar5 = uVar9;
        *puVar7 = uVar6;
      }
      uVar10 = uVar10 + 1;
      puVar5 = puVar7;
    } while (uVar10 < param_3);
  }
  lVar12 = 0;
  if (-1 < (longlong)param_3) {
    lVar13 = param_3 + 1;
    puVar11 = (ulonglong *)(plVar1 + param_3);
    do {
      uVar2 = *puVar11;
      uVar10 = uVar2 + lVar12;
      uVar8 = *(longlong *)(((longlong)param_5 - (longlong)plVar1) + (longlong)puVar11) + uVar10;
      *puVar11 = uVar8;
      lVar12 = (ulonglong)(uVar10 < uVar2) + (ulonglong)(uVar8 < uVar10);
      lVar13 = lVar13 + -1;
      puVar11 = puVar11 + -1;
    } while (lVar13 != 0);
  }
  lVar12 = 0;
  if (-1 < (longlong)(param_3 - 1)) {
    puVar11 = (ulonglong *)(param_1 + (param_3 - 1) * 8);
    do {
      uVar2 = *puVar11;
      uVar10 = uVar2 + lVar12;
      uVar8 = *(longlong *)((longlong)plVar1 + (8 - param_1) + (longlong)puVar11) + uVar10;
      *puVar11 = uVar8;
      lVar12 = (ulonglong)(uVar10 < uVar2) + (ulonglong)(uVar8 < uVar10);
      param_3 = param_3 - 1;
      puVar11 = puVar11 + -1;
    } while (param_3 != 0);
  }
  return *plVar1 + lVar12;
}



// FUNCTION 1452a8710 FUN_1452a8710 body=365 status=ok
// SIG undefined FUN_1452a8710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a8710(longlong param_1,void *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,void *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1452a8732;
  memset(param_7,0,param_5 * 0x10);
  memcpy((void *)((longlong)param_7 + (param_5 * 2 - param_3) * 8),param_2,param_3 * 8);
  puVar7 = (ulonglong *)((longlong)param_7 + param_5 * 8);
  uVar5 = 0;
  for (lVar6 = param_5; 0 < lVar6; lVar6 = lVar6 + -1) {
    lVar2 = FUN_1452a85d0(puVar7,param_4,param_5,puVar7[param_5 + -1] * param_6,
                          (void *)(param_5 * 0x10 + (longlong)param_7),uVar9);
    uVar1 = puVar7[-1];
    puVar7 = puVar7 + -1;
    uVar3 = lVar2 + uVar1 + uVar5;
    *puVar7 = uVar3;
    uVar5 = (uVar5 | uVar3 != uVar1) & (ulonglong)(uVar3 <= uVar1);
  }
  lVar6 = 0;
  if (-1 < param_5 + -1) {
    puVar8 = puVar7 + param_5 + -1;
    do {
      uVar1 = *puVar8;
      uVar4 = uVar1 - lVar6;
      uVar3 = uVar4 - *(longlong *)((longlong)puVar8 + (param_4 - (longlong)puVar7));
      *(ulonglong *)((param_1 - (longlong)puVar7) + 8 + (longlong)(puVar8 + -1)) = uVar3;
      lVar6 = (ulonglong)(uVar4 < uVar3) + (ulonglong)(uVar1 < uVar4);
      param_5 = param_5 + -1;
      puVar8 = puVar8 + -1;
    } while (param_5 != 0);
  }
  FUN_1452a8310(uVar5 - lVar6,param_1,puVar7,param_1);
  return;
}



// FUNCTION 1452a8880 FUN_1452a8880 body=135 status=ok
// SIG undefined FUN_1452a8880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a8880(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_144ba03d0();
  iVar1 = ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) + 7;
  lVar4 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3);
  lVar2 = 0;
  if (0 < lVar4) {
    lVar3 = lVar4 * 8;
    do {
      lVar3 = lVar3 + -8;
      *(undefined8 *)(param_2 + (param_3 - lVar4) * 8 + lVar2 * 8) =
           *(undefined8 *)(*param_1 + lVar3);
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar4);
  }
  return;
}



// FUNCTION 1452a8910 FUN_1452a8910 body=172 status=ok
// SIG undefined FUN_1452a8910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a8910(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  size_t _Size;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_144ba24f0(4,0x6c,0x6e,"crypto\\rsa\\rsa_pk1.c",0x1a,0x1452a8920);
    return 0;
  }
  *param_1 = 0;
  _Size = (size_t)(int)((param_2 - param_4) + -3);
  param_1[1] = 1;
  memset(param_1 + 2,0xff,_Size);
  param_1[_Size + 2] = 0;
  memcpy(param_1 + _Size + 3,param_3,(ulonglong)param_4);
  return 1;
}



// FUNCTION 1452a89c0 FUN_1452a89c0 body=424 status=ok
// SIG undefined FUN_1452a89c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1452a89c0(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *_Src;
  
  if (param_5 < 0xb) {
    return 0xffffffff;
  }
  if (param_5 == param_4) {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    if (cVar1 != '\0') {
      FUN_144ba24f0(4,0x70,0x8a,"crypto\\rsa\\rsa_pk1.c",0x43);
      return 0xffffffff;
    }
    param_4 = param_4 + -1;
  }
  if ((param_5 != param_4 + 1) || (_Src = param_3 + 1, *param_3 != '\x01')) {
    FUN_144ba24f0(4,0x70,0x6a,"crypto\\rsa\\rsa_pk1.c",0x4b);
    return 0xffffffff;
  }
  iVar2 = 0;
  param_4 = param_4 + -1;
  if (0 < param_4) {
    do {
      if (*_Src != -1) {
        if (*_Src != '\0') {
          FUN_144ba24f0(4,0x70,0x66,"crypto\\rsa\\rsa_pk1.c",0x58);
          return 0xffffffff;
        }
        _Src = _Src + 1;
        break;
      }
      _Src = _Src + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  if (iVar2 == param_4) {
    FUN_144ba24f0(4,0x70,0x71,"crypto\\rsa\\rsa_pk1.c",0x61);
    return 0xffffffff;
  }
  if (7 < iVar2) {
    uVar3 = param_4 + (-1 - iVar2);
    if ((int)uVar3 <= param_2) {
      memcpy(param_1,_Src,(ulonglong)uVar3);
      return uVar3;
    }
    FUN_144ba24f0(4,0x70,0x6d,"crypto\\rsa\\rsa_pk1.c",0x6d);
    return 0xffffffff;
  }
  FUN_144ba24f0(4,0x70,0x67,"crypto\\rsa\\rsa_pk1.c",0x67);
  return 0xffffffff;
}



// FUNCTION 1452a8b70 FUN_1452a8b70 body=245 status=ok
// SIG undefined FUN_1452a8b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a8b70(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_144ba24f0(4,0x6d,0x6e,"crypto\\rsa\\rsa_pk1.c",0x7d,0x1452a8b86);
    return 0;
  }
  *param_1 = 0;
  iVar6 = (param_2 - param_4) + -3;
  param_1[1] = 2;
  pcVar5 = param_1 + 2;
  iVar2 = FUN_144bac850(pcVar5,iVar6);
  if (iVar2 < 1) {
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar5;
        while (cVar1 == '\0') {
          iVar3 = FUN_144bac850(pcVar5,1);
          if (iVar3 < 1) {
            return 0;
          }
          cVar1 = *pcVar5;
        }
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    *pcVar5 = '\0';
    memcpy(pcVar5 + 1,param_3,(ulonglong)param_4);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1452a8c70 FUN_1452a8c70 body=951 status=ok
// SIG undefined FUN_1452a8c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1452a8c70(byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = 0;
  uVar10 = (ulonglong)param_4;
  uVar15 = 0;
  if (((int)param_2 < 1) || (param_4 < 1)) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar9 = (ulonglong)param_5;
    if (((int)param_5 < param_4) || ((int)param_5 < 0xb)) {
      FUN_144ba24f0(4,0x71,0x9f,"crypto\\rsa\\rsa_pk1.c",0xae);
      uVar15 = 0xffffffff;
    }
    else {
      lVar6 = FUN_144ea64e0((longlong)(int)param_5,"crypto\\rsa\\rsa_pk1.c",0xb2);
      if (lVar6 == 0) {
        FUN_144ba24f0(4,0x71,0x41,"crypto\\rsa\\rsa_pk1.c",0xb4);
        uVar15 = 0xffffffff;
      }
      else {
        pbVar11 = (byte *)(param_3 + uVar10);
        pbVar12 = (byte *)(lVar6 + (int)param_5);
        if (0 < (int)param_5) {
          do {
            uVar13 = (uint)uVar10;
            pbVar12 = pbVar12 + -1;
            uVar7 = 0xffffffff - ((int)(uVar13 - 1 & ~uVar13) >> 0x1f);
            uVar10 = (ulonglong)(uVar13 - (uVar7 & 1));
            pbVar11 = pbVar11 + -(ulonglong)(uVar7 & 1);
            *pbVar12 = *pbVar11 & (byte)uVar7;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar7 = 2;
        uVar13 = 0;
        if (2 < (int)param_5) {
          pbVar11 = pbVar12 + 2;
          do {
            bVar2 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar8 = (int)(bVar2 - 1 & ~(uint)bVar2) >> 0x1f;
            uVar4 = ~uVar13 & uVar8;
            uVar13 = uVar13 | uVar8;
            uVar8 = uVar4 & uVar7;
            uVar7 = uVar7 + 1;
            uVar15 = uVar15 & ~uVar4 | uVar8;
          } while ((int)uVar7 < (int)param_5);
        }
        uVar7 = 1;
        uVar13 = (param_5 - uVar15) - 1;
        uVar4 = param_5 - 0xb;
        uVar8 = (int)((pbVar12[1] ^ 2) - 1 & ~(pbVar12[1] ^ 2) & *pbVar12 - 1 & ~(uint)*pbVar12) >>
                0x1f & 0xffffffffU -
                       ((int)((param_2 - uVar13 ^ uVar13 | uVar13 ^ param_2) ^ param_2) >> 0x1f) &
                       0xffffffffU - ((int)((uVar15 - 10 | uVar15) ^ uVar15) >> 0x1f);
        uVar15 = param_5 - 0xb;
        uVar15 = (int)((uVar15 - param_2 ^ param_2 | uVar15 ^ param_2) ^ uVar15) >> 0x1f;
        uVar15 = ~uVar15 & param_2 | uVar15 & uVar4;
        if (1 < (int)uVar4) {
          do {
            uVar5 = (param_5 - uVar13) - 0xb & uVar7;
            bVar2 = 0xff - ((char)((byte)(uVar5 - 1 >> 0x18) & ~(byte)(uVar5 >> 0x18)) >> 7);
            if (0xb < (longlong)(int)(param_5 - uVar7)) {
              lVar6 = (longlong)(int)(param_5 - uVar7) + -0xb;
              pbVar11 = pbVar12 + 0xb;
              do {
                *pbVar11 = ~bVar2 & *pbVar11 | pbVar11[(int)uVar7] & bVar2;
                lVar6 = lVar6 + -1;
                pbVar11 = pbVar11 + 1;
              } while (lVar6 != 0);
            }
            uVar7 = uVar7 * 2;
          } while ((int)uVar7 < (int)uVar4);
        }
        lVar6 = (longlong)(int)uVar15;
        if (0 < (int)uVar15) {
          pbVar11 = param_1;
          do {
            iVar1 = iVar14 - uVar13;
            bVar2 = (byte)(uVar13 >> 0x18);
            bVar3 = (byte)((uint)iVar14 >> 0x18);
            iVar14 = iVar14 + 1;
            bVar2 = (char)(((byte)((uint)iVar1 >> 0x18) ^ bVar2 | bVar2 ^ bVar3) ^ bVar3) >> 7 &
                    (byte)uVar8;
            *pbVar11 = ~bVar2 & *pbVar11 |
                       (pbVar11 + 1)[(longlong)(pbVar12 + (10 - (longlong)param_1))] & bVar2;
            lVar6 = lVar6 + -1;
            pbVar11 = pbVar11 + 1;
          } while (lVar6 != 0);
        }
        FUN_144ea66f0(pbVar12,(longlong)(int)param_5,"crypto\\rsa\\rsa_pk1.c",0xfa);
        FUN_144ba24f0(4,0x71,0x9f,"crypto\\rsa\\rsa_pk1.c",0xfb);
        FUN_144ba33b0(uVar8 & 1);
        uVar15 = ~uVar8 | uVar8 & uVar13;
      }
    }
  }
  return uVar15;
}



// FUNCTION 1452a9030 FUN_1452a9030 body=395 status=ok
// SIG undefined FUN_1452a9030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a9030(longlong param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_5;
  iVar4 = 0;
  local_b4 = param_4;
  local_b0 = param_3;
  lVar3 = FUN_144ba5700();
  if (((lVar3 != 0) && (iVar1 = FUN_144ba3cd0(param_5), -1 < iVar1)) && (iVar5 = 0, 0 < param_2)) {
    do {
      local_b5 = (undefined1)iVar5;
      local_b7 = (undefined1)((uint)iVar5 >> 0x10);
      local_b8 = (undefined1)((uint)iVar5 >> 0x18);
      local_b6 = (undefined1)((uint)iVar5 >> 8);
      iVar2 = FUN_144ba5a20(lVar3,param_5,0);
      if (((iVar2 == 0) || (iVar2 = FUN_144ba5c70(lVar3,local_b0,(longlong)local_b4), iVar2 == 0))
         || (iVar2 = FUN_144ba5c70(lVar3,&local_b8), iVar2 == 0)) break;
      if (param_2 < iVar1 + iVar4) {
        iVar2 = FUN_144ba5ca0(lVar3,local_98);
        if (iVar2 == 0) break;
        memcpy((void *)(iVar4 + param_1),local_98,(longlong)(param_2 - iVar4));
        iVar4 = param_2;
      }
      else {
        iVar2 = FUN_144ba5ca0(lVar3,iVar4 + param_1);
        iVar4 = iVar1 + iVar4;
        if (iVar2 == 0) break;
      }
      iVar5 = iVar5 + 1;
      param_5 = local_a8;
    } while (iVar4 < param_2);
  }
  FUN_14259f0c0(local_98,0x40);
  FUN_144ba5800(lVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452a91d0 FUN_1452a91d0 body=53 status=ok
// SIG undefined FUN_1452a91d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a91d0(void)

{
  FUN_1452a9260();
  return;
}



// FUNCTION 1452a9210 FUN_1452a9210 body=70 status=ok
// SIG undefined FUN_1452a9210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a9210(void)

{
  FUN_1452a9660();
  return;
}



// FUNCTION 1452a9260 FUN_1452a9260 body=990 status=ok
// SIG undefined FUN_1452a9260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a9260(undefined1 *param_1,int param_2,void *param_3,uint param_4,undefined8 param_5,
                  int param_6,longlong param_7,longlong param_8)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  ulonglong *puVar19;
  longlong lVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  int local_c4;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulonglong local_98 [8];
  ulonglong local_58;
  undefined8 uStack_48;
  undefined1 *puVar14;
  
  uStack_48 = 0x1452a9277;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_2 = param_2 + -1;
  puVar18 = (undefined1 *)0x0;
  uVar17 = 0;
  uVar15 = 0;
  local_b0 = param_5;
  local_c8 = param_4;
  local_c0 = param_2;
  local_a8 = param_3;
  if (param_7 == 0) {
    param_7 = FUN_144bab020();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  local_b8 = param_8;
  uVar5 = FUN_144ba3cd0(param_7);
  lVar20 = (longlong)(int)uVar5;
  local_c4 = param_2 + uVar5 * -2;
  if (local_c4 + -1 < (int)param_4) {
    local_d8 = CONCAT44(local_d8._4_4_,0x3e);
    FUN_144ba24f0(4,0x9a,0x6e,"crypto\\rsa\\rsa_oaep.c");
  }
  else if (param_2 < (int)(uVar5 * 2 + 1)) {
    local_d8 = CONCAT44(local_d8._4_4_,0x44);
    FUN_144ba24f0(4,0x9a,0x78,"crypto\\rsa\\rsa_oaep.c");
  }
  else {
    puVar3 = (ulonglong *)(param_1 + 1);
    *param_1 = 0;
    local_d0 = 0;
    puVar19 = (ulonglong *)(param_1 + lVar20 + 1);
    local_d8 = param_7;
    iVar6 = FUN_144ba5d40(local_b0,(longlong)param_6,puVar19,0);
    puVar8 = puVar18;
    if (iVar6 != 0) {
      memset((undefined1 *)(lVar20 + (longlong)puVar19),0,
             (longlong)(int)((local_c4 - local_c8) + -1));
      iVar6 = local_c0;
      *(undefined1 *)((longlong)(int)(((local_c0 - local_c8) - uVar5) + -1) + (longlong)puVar19) = 1
      ;
      memcpy((undefined1 *)
             ((((longlong)local_c0 - (longlong)(int)local_c8) - lVar20) + (longlong)puVar19),
             local_a8,(ulonglong)local_c8);
      iVar7 = FUN_144bac850(puVar3,uVar5);
      puVar8 = (undefined1 *)0x0;
      if (0 < iVar7) {
        uVar15 = iVar6 - uVar5;
        lVar16 = (longlong)(int)uVar15;
        puVar8 = (undefined1 *)FUN_144ea64e0(lVar16,"crypto\\rsa\\rsa_oaep.c",0x55);
        if (puVar8 == (undefined1 *)0x0) {
          local_d8 = CONCAT44(local_d8._4_4_,0x57);
          FUN_144ba24f0(4,0x9a,0x41,"crypto\\rsa\\rsa_oaep.c");
        }
        else {
          local_d8 = local_b8;
          iVar6 = FUN_1452a9030(puVar8,uVar15,puVar3,uVar5);
          if (-1 < iVar6) {
            uVar13 = 0;
            if (((0 < (int)uVar15) && (0x1f < uVar15)) &&
               ((puVar8 + (int)(uVar15 - 1) < puVar19 ||
                ((undefined1 *)((longlong)(int)(uVar15 - 1) + (longlong)puVar19) < puVar8)))) {
              uVar10 = uVar15 & 0x8000001f;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
              }
              puVar11 = puVar19;
              puVar14 = puVar18;
              do {
                uVar13 = (int)puVar14 + 0x20;
                puVar14 = (undefined1 *)(ulonglong)uVar13;
                puVar1 = (ulonglong *)(((longlong)puVar8 - (longlong)puVar19) + (longlong)puVar11);
                uVar4 = puVar1[1];
                puVar2 = puVar11 + 4;
                *puVar11 = *puVar1 ^ *puVar11;
                puVar11[1] = uVar4 ^ puVar11[1];
                puVar1 = (ulonglong *)
                         (((longlong)puVar8 - (longlong)puVar19) + -0x10 + (longlong)puVar2);
                uVar4 = puVar1[1];
                puVar11[2] = *puVar1 ^ puVar11[2];
                puVar11[3] = uVar4 ^ puVar11[3];
                puVar11 = puVar2;
              } while ((longlong)puVar2 - (longlong)puVar19 < (longlong)(int)(uVar15 - uVar10));
            }
            lVar9 = (longlong)(int)uVar13;
            if (lVar9 < lVar16) {
              pbVar12 = (byte *)(lVar9 + (longlong)puVar19);
              lVar16 = lVar16 - lVar9;
              do {
                *pbVar12 = *pbVar12 ^ pbVar12[(longlong)puVar8 - (longlong)puVar19];
                pbVar12 = pbVar12 + 1;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            local_d8 = local_b8;
            iVar6 = FUN_1452a9030(local_98,uVar5,puVar19,uVar15);
            if (-1 < iVar6) {
              if (((0 < (int)uVar5) && (0x1f < uVar5)) &&
                 (((ulonglong *)((longlong)local_98 + (longlong)(int)(uVar5 - 1)) < puVar3 ||
                  ((ulonglong *)((longlong)(int)(uVar5 - 1) + (longlong)puVar3) < local_98)))) {
                uVar13 = uVar5 & 0x8000001f;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
                }
                puVar19 = puVar3;
                do {
                  uVar17 = (int)puVar18 + 0x20;
                  puVar18 = (undefined1 *)(ulonglong)uVar17;
                  puVar2 = (ulonglong *)
                           (((longlong)local_98 - (longlong)puVar3) + (longlong)puVar19);
                  uVar4 = puVar2[1];
                  puVar11 = puVar19 + 4;
                  *puVar19 = *puVar2 ^ *puVar19;
                  puVar19[1] = uVar4 ^ puVar19[1];
                  puVar2 = (ulonglong *)
                           (((longlong)&local_a8 - (longlong)puVar3) + (longlong)puVar11);
                  uVar4 = puVar2[1];
                  puVar19[2] = *puVar2 ^ puVar19[2];
                  puVar19[3] = uVar4 ^ puVar19[3];
                  puVar19 = puVar11;
                } while ((longlong)puVar11 - (longlong)puVar3 < (longlong)(int)(uVar5 - uVar13));
              }
              lVar16 = (longlong)(int)uVar17;
              if (lVar16 < lVar20) {
                pbVar12 = (byte *)(lVar16 + (longlong)puVar3);
                lVar20 = lVar20 - lVar16;
                do {
                  *pbVar12 = *pbVar12 ^ pbVar12[(longlong)local_98 - (longlong)puVar3];
                  pbVar12 = pbVar12 + 1;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
              }
            }
          }
        }
      }
    }
    FUN_14259f0c0(local_98,0x40);
    FUN_144ea66f0(puVar8,(longlong)(int)uVar15,"crypto\\rsa\\rsa_oaep.c",0x68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1452a9660 FUN_1452a9660 body=1752 status=ok
// SIG undefined FUN_1452a9660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a9660(byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5,
                  undefined8 param_6,int param_7,longlong param_8,longlong param_9)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  longlong lVar26;
  byte *pbVar27;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_120;
  uint local_118;
  uint local_114;
  uint local_10c;
  uint local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  byte *local_d8;
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [40];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452a967a;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar22 = 0;
  uVar11 = 0;
  local_108 = param_5;
  uVar17 = 0;
  local_e8 = param_6;
  uVar19 = (ulonglong)param_4;
  local_100 = param_8;
  local_10c = 0xffffffff;
  local_118 = 0;
  local_114 = param_2;
  local_d8 = param_1;
  if (param_8 == 0) {
    param_8 = FUN_144bab020();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  local_100 = param_8;
  local_f8 = param_9;
  uVar5 = FUN_144ba3cd0(param_8);
  lVar26 = (longlong)(int)uVar5;
  if (((int)local_114 < 1) || (param_4 < 1)) goto LAB_1452a9d28;
  if (((int)local_108 < param_4) || ((int)local_108 < (int)(uVar5 * 2 + 2))) {
    local_128 = CONCAT44(local_128._4_4_,0x98);
    FUN_144ba24f0(4,0x99,0x79,"crypto\\rsa\\rsa_oaep.c");
    goto LAB_1452a9d28;
  }
  iVar20 = local_108 - uVar5;
  uVar21 = iVar20 - 1;
  local_f0 = (longlong)(int)uVar21;
  puVar7 = (ulonglong *)FUN_144ea64e0(local_f0,"crypto\\rsa\\rsa_oaep.c",0x9d);
  if (puVar7 == (ulonglong *)0x0) {
    local_128 = CONCAT44(local_128._4_4_,0x9f);
LAB_1452a9768:
    pbVar27 = (byte *)0x0;
    FUN_144ba24f0(4,0x99,0x41,"crypto\\rsa\\rsa_oaep.c");
    lVar8 = local_f0;
  }
  else {
    lVar8 = FUN_144ea64e0((longlong)(int)local_108,"crypto\\rsa\\rsa_oaep.c",0xa3);
    if (lVar8 == 0) {
      local_128 = CONCAT44(local_128._4_4_,0xa6);
      goto LAB_1452a9768;
    }
    pbVar24 = (byte *)(param_3 + uVar19);
    pbVar27 = (byte *)(lVar8 + (int)local_108);
    if (0 < (int)local_108) {
      uVar18 = (ulonglong)local_108;
      do {
        uVar23 = (uint)uVar19;
        pbVar27 = pbVar27 + -1;
        uVar11 = 0xffffffff - ((int)(uVar23 - 1 & ~uVar23) >> 0x1f);
        uVar19 = (ulonglong)(uVar23 - (uVar11 & 1));
        pbVar24 = pbVar24 + -(ulonglong)(uVar11 & 1);
        *pbVar27 = (byte)uVar11 & *pbVar24;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    pbVar25 = pbVar27 + lVar26 + 1;
    pbVar24 = pbVar27 + 1;
    uVar23 = *pbVar27 - 1 & ~(uint)*pbVar27;
    uVar11 = (int)uVar23 >> 0x1f;
    local_128 = local_f8;
    local_e0 = lVar26;
    iVar6 = FUN_1452a9030(local_c8,uVar5,pbVar25,uVar21);
    lVar8 = local_f0;
    if (iVar6 == 0) {
      if (((0 < (int)uVar5) && (0x1f < uVar5)) &&
         ((pbVar24 + (int)(uVar5 - 1) < local_c8 || (local_c8 + (int)(uVar5 - 1) < pbVar24)))) {
        uVar12 = uVar5 & 0x8000001f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
        }
        uVar19 = uVar22;
        uVar18 = uVar22;
        do {
          uVar17 = (int)uVar18 + 0x20;
          uVar18 = (ulonglong)uVar17;
          puVar9 = (ulonglong *)(local_c8 + uVar19);
          uVar14 = uVar19 + 0x20;
          puVar16 = (ulonglong *)((longlong)puVar9 + ((longlong)pbVar24 - (longlong)local_c8));
          uVar4 = puVar16[1];
          *puVar9 = *puVar16 ^ *puVar9;
          *(ulonglong *)(auStack_c0 + uVar19) = uVar4 ^ *(ulonglong *)(auStack_c0 + uVar19);
          uVar4 = *(ulonglong *)
                   ((longlong)(local_b8 + ((longlong)pbVar24 - (longlong)local_c8) + uVar19) + 8);
          *(ulonglong *)(local_b8 + uVar19) =
               *(ulonglong *)(local_b8 + ((longlong)pbVar24 - (longlong)local_c8) + uVar19) ^
               *(ulonglong *)(local_b8 + uVar19);
          *(ulonglong *)(auStack_b0 + uVar19) = uVar4 ^ *(ulonglong *)(auStack_b0 + uVar19);
          uVar19 = uVar14;
        } while ((longlong)uVar14 < (longlong)(int)(uVar5 - uVar12));
      }
      lVar8 = (longlong)(int)uVar17;
      if (lVar8 < lVar26) {
        do {
          pbVar15 = local_c8 + lVar8;
          lVar8 = lVar8 + 1;
          *pbVar15 = *pbVar15 ^ pbVar15[(longlong)pbVar24 - (longlong)local_c8];
        } while (lVar8 < lVar26);
      }
      local_128 = local_f8;
      iVar6 = FUN_1452a9030(puVar7,uVar21,local_c8,uVar5);
      lVar8 = local_f0;
      if (iVar6 == 0) {
        uVar17 = 0;
        uVar12 = uVar17;
        if (((0 < (int)uVar21) && (0x1f < uVar21)) &&
           ((lVar8 = (longlong)(iVar20 + -2), pbVar25 + lVar8 < puVar7 ||
            ((byte *)((longlong)puVar7 + lVar8) < pbVar25)))) {
          uVar13 = uVar21 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          puVar16 = puVar7;
          uVar19 = uVar22;
          do {
            uVar12 = (int)uVar19 + 0x20;
            uVar19 = (ulonglong)uVar12;
            puVar1 = (ulonglong *)(((longlong)pbVar25 - (longlong)puVar7) + (longlong)puVar16);
            uVar18 = puVar1[1];
            puVar9 = puVar16 + 4;
            *puVar16 = *puVar1 ^ *puVar16;
            puVar16[1] = uVar18 ^ puVar16[1];
            puVar1 = (ulonglong *)
                     (((longlong)pbVar25 - (longlong)puVar7) + -0x10 + (longlong)puVar9);
            uVar18 = puVar1[1];
            puVar16[2] = *puVar1 ^ puVar16[2];
            puVar16[3] = uVar18 ^ puVar16[3];
            puVar16 = puVar9;
          } while ((longlong)puVar9 - (longlong)puVar7 < (longlong)(int)(uVar21 - uVar13));
        }
        lVar10 = (longlong)(int)uVar12;
        lVar8 = (longlong)(int)uVar21;
        if (lVar10 < lVar8) {
          pbVar24 = (byte *)(lVar10 + (longlong)puVar7);
          lVar10 = lVar8 - lVar10;
          do {
            *pbVar24 = *pbVar24 ^ pbVar24[(longlong)pbVar25 - (longlong)puVar7];
            pbVar24 = pbVar24 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        local_120 = 0;
        local_128 = local_100;
        iVar20 = FUN_144ba5d40(local_e8,(longlong)param_7,local_88,0);
        if (iVar20 != 0) {
          uVar11 = FUN_14259f120(puVar7,local_88,lVar26);
          uVar11 = (int)(uVar23 & uVar11 - 1 & ~uVar11) >> 0x1f;
          if (lVar26 < (int)uVar21) {
            pbVar24 = (byte *)(lVar26 + (longlong)puVar7);
            lVar8 = (int)uVar21 - lVar26;
            uVar19 = uVar22;
            uVar23 = uVar5;
            do {
              bVar2 = *pbVar24;
              pbVar24 = pbVar24 + 1;
              uVar17 = bVar2 ^ 1;
              uVar17 = (int)(uVar17 - 1 & ~uVar17) >> 0x1f;
              uVar12 = ~(uint)uVar22 & uVar17;
              uVar17 = (uint)uVar22 | uVar17;
              uVar22 = (ulonglong)uVar17;
              local_118 = uVar12 & uVar23;
              uVar23 = uVar23 + 1;
              local_118 = (uint)uVar19 & ~uVar12 | local_118;
              uVar19 = (ulonglong)local_118;
              uVar11 = uVar11 & ((int)(bVar2 - 1 & ~(uint)bVar2) >> 0x1f | uVar17);
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          local_10c = (uVar21 - local_118) - 1;
          iVar20 = uVar21 - uVar5;
          uVar23 = 1;
          uVar11 = uVar11 & 0xffffffffU -
                            ((int)((local_114 - local_10c ^ local_10c | local_114 ^ local_10c) ^
                                  local_114) >> 0x1f) & uVar17;
          uVar17 = iVar20 - 1;
          local_100 = CONCAT44(local_100._4_4_,uVar11);
          uVar5 = iVar20 - 1;
          uVar17 = (int)((uVar17 - local_114 ^ local_114 | local_114 ^ uVar17) ^ uVar17) >> 0x1f;
          local_118 = ~uVar17;
          uVar12 = local_118 & local_114 | uVar17 & uVar5;
          local_f8 = CONCAT44(local_f8._4_4_,uVar12);
          local_114 = uVar17;
          if (1 < (int)uVar5) {
            lVar8 = lVar26 + 1;
            do {
              uVar17 = (iVar20 - local_10c) - 1 & uVar23;
              uVar17 = 0xffffffff - ((int)(uVar17 - 1 & ~uVar17) >> 0x1f);
              if (lVar8 < (int)(uVar21 - uVar23)) {
                local_114 = uVar17 & 0xff;
                local_118 = ~local_114;
                lVar26 = (int)(uVar21 - uVar23) - lVar8;
                pbVar24 = (byte *)(lVar8 + (longlong)puVar7);
                do {
                  *pbVar24 = (byte)local_118 & *pbVar24 | (byte)uVar17 & pbVar24[(int)uVar23];
                  lVar26 = lVar26 + -1;
                  pbVar24 = pbVar24 + 1;
                } while (lVar26 != 0);
              }
              uVar23 = uVar23 * 2;
              lVar26 = local_e0;
            } while ((int)uVar23 < (int)uVar5);
          }
          uVar19 = 0;
          lVar8 = (longlong)(int)uVar12;
          if (0 < (int)uVar12) {
            pbVar24 = local_d8;
            do {
              iVar20 = (int)uVar19;
              bVar3 = (byte)(uVar19 >> 0x1f);
              bVar2 = (byte)(local_10c >> 0x18);
              uVar19 = (ulonglong)(iVar20 + 1);
              uVar17 = (uint)(byte)-(((byte)((byte)(iVar20 - local_10c >> 0x18) ^ bVar2) >> 7 |
                                     bVar3 ^ bVar2 >> 7) ^ bVar3) & uVar11 & 0xff;
              local_f8 = CONCAT44(local_f8._4_4_,uVar17);
              local_100 = CONCAT44(local_100._4_4_,~uVar17);
              *pbVar24 = (byte)~uVar17 & *pbVar24 |
                         (byte)uVar17 &
                         (pbVar24 + 1)[(longlong)((lVar26 - (longlong)local_d8) + (longlong)puVar7)]
              ;
              lVar8 = lVar8 + -1;
              pbVar24 = pbVar24 + 1;
            } while (lVar8 != 0);
          }
          local_128 = CONCAT44(local_128._4_4_,0x107);
          FUN_144ba24f0(4,0x99,0x79,"crypto\\rsa\\rsa_oaep.c");
          FUN_144ba33b0(uVar11 & 1);
          lVar8 = local_f0;
        }
      }
    }
  }
  FUN_14259f0c0(local_c8,0x40);
  FUN_144ea66f0(puVar7,lVar8,"crypto\\rsa\\rsa_oaep.c",0x10b);
  FUN_144ea66f0(pbVar27,(longlong)(int)local_108,"crypto\\rsa\\rsa_oaep.c",0x10c);
  local_f8 = CONCAT44(local_f8._4_4_,uVar11);
  local_100 = CONCAT44(local_100._4_4_,~uVar11);
LAB_1452a9d28:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
}



// FUNCTION 1452a9d60 FUN_1452a9d60 body=259 status=ok
// SIG undefined FUN_1452a9d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a9d60(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_144ba24f0(4,0x6e,0x6e,"crypto\\rsa\\rsa_ssl.c",0x19,0x1452a9d76);
    return 0;
  }
  *param_1 = 0;
  iVar6 = (param_2 - param_4) + -0xb;
  param_1[1] = 2;
  pcVar5 = param_1 + 2;
  iVar2 = FUN_144bac850(pcVar5,iVar6);
  if (iVar2 < 1) {
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar5;
        while (cVar1 == '\0') {
          iVar3 = FUN_144bac850(pcVar5,1);
          if (iVar3 < 1) {
            return 0;
          }
          cVar1 = *pcVar5;
        }
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    builtin_strncpy(pcVar5,"\x03\x03\x03\x03\x03\x03\x03\x03",9);
    memcpy(pcVar5 + 9,param_3,(ulonglong)param_4);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1452a9e70 FUN_1452a9e70 body=1190 status=ok
// SIG undefined FUN_1452a9e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1452a9e70(byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  
  iVar10 = 0;
  uVar11 = (ulonglong)param_4;
  uVar18 = 0;
  if ((0 < (int)param_2) && (0 < param_4)) {
    uVar8 = (ulonglong)param_5;
    if (((int)param_5 < param_4) || ((int)param_5 < 0xb)) {
      FUN_144ba24f0(4,0x72,0x6f,"crypto\\rsa\\rsa_ssl.c",0x4a);
      uVar18 = 0xffffffff;
    }
    else {
      lVar17 = (longlong)(int)param_5;
      lVar5 = FUN_144ea64e0(lVar17,"crypto\\rsa\\rsa_ssl.c");
      if (lVar5 == 0) {
        FUN_144ba24f0(4,0x72,0x41,"crypto\\rsa\\rsa_ssl.c",0x50);
        uVar18 = 0xffffffff;
      }
      else {
        pbVar20 = (byte *)(param_3 + uVar11);
        pbVar9 = (byte *)(lVar5 + lVar17);
        if (0 < (int)param_5) {
          do {
            uVar14 = (uint)uVar11;
            pbVar9 = pbVar9 + -1;
            uVar6 = 0xffffffff - ((int)(uVar14 - 1 & ~uVar14) >> 0x1f);
            uVar11 = (ulonglong)(uVar14 - (uVar6 & 1));
            pbVar20 = pbVar20 + -(ulonglong)(uVar6 & 1);
            *pbVar9 = *pbVar20 & (byte)uVar6;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar15 = 2;
        uVar14 = 0;
        uVar6 = 0;
        uVar19 = (int)((pbVar9[1] ^ 2) - 1 & ~(pbVar9[1] ^ 2) & *pbVar9 - 1 & ~(uint)*pbVar9) >>
                 0x1f;
        uVar16 = ~uVar19;
        if (2 < (int)param_5) {
          uVar13 = 0xffffffff;
          pbVar20 = pbVar9 + 2;
          uVar6 = 0;
          do {
            uVar7 = (int)(*pbVar20 - 1 & ~(uint)*pbVar20) >> 0x1f;
            uVar12 = uVar13 & uVar7;
            uVar14 = uVar14 | uVar7;
            uVar13 = ~uVar14;
            uVar7 = uVar12 & uVar15;
            uVar15 = uVar15 + 1;
            uVar18 = uVar18 & ~uVar12 | uVar7;
            uVar6 = ((int)((*pbVar20 ^ 3) - 1 & ~(*pbVar20 ^ 3)) >> 0x1f | uVar14) &
                    (uVar13 & 1) + uVar6;
            pbVar20 = pbVar20 + 1;
          } while ((int)uVar15 < (int)param_5);
        }
        uVar19 = uVar19 & 0xffffffffU - ((int)((uVar18 - 10 | uVar18) ^ uVar18) >> 0x1f);
        uVar14 = uVar19 | uVar16;
        uVar13 = param_5 - 0xb;
        uVar15 = (param_5 - uVar18) - 1;
        uVar7 = uVar19 & (int)((uVar6 - 8 | uVar6) ^ uVar6) >> 0x1f;
        uVar12 = uVar7 & 0xffffffffU -
                         ((int)((param_2 - uVar15 ^ uVar15 | uVar15 ^ param_2) ^ param_2) >> 0x1f);
        uVar18 = param_5 - 0xb;
        uVar18 = (int)((uVar18 - param_2 ^ param_2 | uVar18 ^ param_2) ^ uVar18) >> 0x1f;
        uVar6 = ~uVar18 & param_2 | uVar18 & uVar13;
        uVar18 = 1;
        if (1 < (int)uVar13) {
          do {
            uVar4 = (param_5 - uVar15) - 0xb & uVar18;
            bVar3 = 0xff - ((char)((byte)(uVar4 - 1 >> 0x18) & ~(byte)(uVar4 >> 0x18)) >> 7);
            if (0xb < (longlong)(int)(param_5 - uVar18)) {
              lVar5 = (longlong)(int)(param_5 - uVar18) + -0xb;
              pbVar20 = pbVar9 + 0xb;
              do {
                *pbVar20 = ~bVar3 & *pbVar20 | (pbVar20 + 1)[(longlong)(int)uVar18 + -1] & bVar3;
                lVar5 = lVar5 + -1;
                pbVar20 = pbVar20 + 1;
              } while (lVar5 != 0);
            }
            uVar18 = uVar18 * 2;
          } while ((int)uVar18 < (int)uVar13);
        }
        lVar5 = (longlong)(int)uVar6;
        if (0 < (int)uVar6) {
          pbVar20 = param_1;
          do {
            iVar1 = iVar10 - uVar15;
            bVar3 = (byte)(uVar15 >> 0x18);
            bVar2 = (byte)((uint)iVar10 >> 0x18);
            iVar10 = iVar10 + 1;
            bVar3 = (char)(((byte)((uint)iVar1 >> 0x18) ^ bVar3 | bVar3 ^ bVar2) ^ bVar2) >> 7 &
                    (byte)uVar12;
            *pbVar20 = ~bVar3 & *pbVar20 |
                       (pbVar20 + 1)[(longlong)(pbVar9 + (10 - (longlong)param_1))] & bVar3;
            lVar5 = lVar5 + -1;
            pbVar20 = pbVar20 + 1;
          } while (lVar5 != 0);
        }
        FUN_144ea66f0(pbVar9,lVar17,"crypto\\rsa\\rsa_ssl.c",0xab);
        FUN_144ba24f0(4,0x72,~(uVar12 | ~uVar7) & 0x6d |
                             (uVar12 | ~uVar7) &
                             (~(uVar7 | ~uVar19) & 0x73 |
                             (uVar7 | ~uVar19) & (~uVar14 & 0x71 | uVar14 & uVar16 & 0x6b)),
                      "crypto\\rsa\\rsa_ssl.c",0xac);
        FUN_144ba33b0(uVar12 & 1);
        uVar18 = ~uVar12 | uVar12 & uVar15;
      }
    }
    return uVar18;
  }
  return 0xffffffff;
}



// FUNCTION 1452aa320 FUN_1452aa320 body=122 status=ok
// SIG undefined FUN_1452aa320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452aa320(void *param_1,int param_2,void *param_3,uint param_4)

{
  if (param_2 < (int)param_4) {
    FUN_144ba24f0(4,0x6b,0x6e,"crypto\\rsa\\rsa_none.c",0x12);
    return 0;
  }
  if ((int)param_4 < param_2) {
    FUN_144ba24f0(4,0x6b,0x7a,"crypto\\rsa\\rsa_none.c",0x17);
    return 0;
  }
  memcpy(param_1,param_3,(ulonglong)param_4);
  return 1;
}



// FUNCTION 1452aa3a0 FUN_1452aa3a0 body=186 status=ok
// SIG undefined FUN_1452aa3a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452aa3a0(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *_Dst;
  
  param_2 = param_2 - param_4;
  if (param_2 + -2 < 0) {
    FUN_144ba24f0(4,0x7f,0x6e,"crypto\\rsa\\rsa_x931.c",0x1e,0x1452aa3b0);
    return 0xffffffff;
  }
  if (param_2 == 2) {
    *param_1 = 0x6a;
  }
  else {
    _Dst = param_1 + 1;
    *param_1 = 0x6b;
    param_1 = _Dst;
    if (1 < param_2 + -2) {
      memset(_Dst,0xbb,(longlong)(param_2 + -3));
      param_1 = _Dst + (param_2 + -3);
    }
    *param_1 = 0xba;
  }
  memcpy(param_1 + 1,param_3,(ulonglong)param_4);
  (param_1 + 1)[(int)param_4] = 0xcc;
  return 1;
}



// FUNCTION 1452aa460 FUN_1452aa460 body=272 status=ok
// SIG undefined FUN_1452aa460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1452aa460(void *param_1,undefined8 param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *_Src;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_5 != param_4) || (1 < (byte)(*param_3 + 0x96U))) {
    FUN_144ba24f0(4,0x80,0x89,"crypto\\rsa\\rsa_x931.c",0x3d);
    return 0xffffffff;
  }
  _Src = param_3 + 1;
  if (*param_3 == 'k') {
    param_4 = param_4 + -3;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        cVar1 = *_Src;
        _Src = _Src + 1;
        if (cVar1 == -0x46) break;
        if (cVar1 != -0x45) {
          uVar4 = 0x48;
          goto LAB_1452aa4c8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
    uVar3 = param_4 - iVar2;
    if (iVar2 == 0) {
      uVar4 = 0x50;
LAB_1452aa4c8:
      FUN_144ba24f0(4,0x80,0x8a,"crypto\\rsa\\rsa_x931.c",uVar4);
      return 0xffffffff;
    }
  }
  else {
    uVar3 = param_4 - 2;
  }
  if (_Src[(int)uVar3] != -0x34) {
    FUN_144ba24f0(4,0x80,0x8b,"crypto\\rsa\\rsa_x931.c",0x59);
    return 0xffffffff;
  }
  memcpy(param_1,_Src,(ulonglong)uVar3);
  return uVar3;
}



// FUNCTION 1452aa570 FUN_1452aa570 body=51 status=ok
// SIG undefined FUN_1452aa570(void)

undefined8 FUN_1452aa570(int param_1)

{
  if (param_1 == 0x40) {
    return 0x33;
  }
  if (param_1 == 0x2a0) {
    return 0x34;
  }
  if (param_1 == 0x2a1) {
    return 0x36;
  }
  if (param_1 != 0x2a2) {
    return 0xffffffff;
  }
  return 0x35;
}



// FUNCTION 1452aa5b0 FUN_1452aa5b0 body=47 status=ok
// SIG undefined FUN_1452aa5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

tm * FUN_1452aa5b0(__time64_t *param_1,tm *param_2)

{
  errno_t eVar1;
  
  eVar1 = _gmtime64_s(param_2,param_1);
  if (eVar1 != 0) {
    param_2 = (tm *)0x0;
  }
  return param_2;
}



// FUNCTION 1452aa5e0 FUN_1452aa5e0 body=423 status=ok
// SIG undefined FUN_1452aa5e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452aa5e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_res20;
  int local_18;
  
  iVar2 = FUN_1452aa860();
  if (iVar2 != 0) {
    iVar2 = ((local_res20 + 0x10bd9) * 4) / 0x23ab1;
    iVar3 = iVar2 * 0x23ab1 + 3;
    iVar4 = (local_res20 + 0x10bd9) - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = ((iVar4 + 1) * 4000) / 0x164b09;
    iVar4 = iVar4 + (0x1f - ((int)(iVar3 * 0x5b5 + (iVar3 * 0x5b5 >> 0x1f & 3U)) >> 2));
    iVar1 = (iVar4 * 0x50) / 0x98f;
    iVar2 = (iVar2 + -0x31) * 100 + iVar1 / 0xb;
    if ((uint)(iVar3 + -0x76c + iVar2) < 0x1fa4) {
      param_1[3] = iVar4 - (iVar1 * 0x98f) / 0x50;
      param_1[5] = iVar3 + -0x76c + iVar2;
      param_1[4] = iVar1 + (iVar1 / 0xb) * -0xc + 1;
      param_1[2] = local_18 / 0xe10;
      param_1[1] = (local_18 / 0x3c) % 0x3c;
      *param_1 = local_18 % 0x3c;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452aa790 FUN_1452aa790 body=199 status=ok
// SIG undefined FUN_1452aa790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452aa790(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0x1452aa7a5;
  iVar1 = FUN_1452aa860(param_3,0,0,&local_14,(longlong)&local_10 + 4);
  if ((iVar1 != 0) && (iVar1 = FUN_1452aa860(param_4,0,0,&local_18,&local_10), iVar1 != 0)) {
    local_18 = local_18 - local_14;
    local_10._0_4_ = (int)local_10 - local_10._4_4_;
    if ((0 < local_18) && ((int)local_10 < 0)) {
      local_18 = local_18 + -1;
      local_10._0_4_ = (int)local_10 + 0x15180;
    }
    if ((local_18 < 0) && (0 < (int)local_10)) {
      local_18 = local_18 + 1;
      local_10._0_4_ = (int)local_10 + -0x15180;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = local_18;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = (int)local_10;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1452aa860 FUN_1452aa860 body=311 status=ok
// SIG undefined FUN_1452aa860(void)

undefined8 FUN_1452aa860(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_3 / 0x15180 + param_2;
  iVar3 = param_3 % 0x15180 + (param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1;
  if (iVar3 < 0x15180) {
    if (iVar3 < 0) {
      param_2 = param_2 + -1;
      iVar3 = iVar3 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -0x15180;
  }
  iVar2 = (param_1[4] + -0xd) / 0xc;
  iVar4 = param_1[5] + iVar2;
  iVar1 = ((iVar4 + 0x1a90) / 100) * 3;
  iVar4 = (iVar4 + 0x1a2c) * 0x5b5;
  param_2 = ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + -0x7d4b +
            (((param_1[4] + iVar2 * -0xc + -1) * 0x16f) / 0xc -
            ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + param_1[3] + param_2;
  if (param_2 < 0) {
    return 0;
  }
  *param_4 = param_2;
  *param_5 = iVar3;
  return 1;
}



// FUNCTION 1452aa9a0 FUN_1452aa9a0 body=24 status=ok
// SIG undefined FUN_1452aa9a0(void)

undefined8 FUN_1452aa9a0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1452aa9c0 FUN_1452aa9c0 body=338 status=ok
// SIG undefined FUN_1452aa9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1452aa9c0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452aa9d5;
  if (param_1 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    goto LAB_1452aaa21;
  }
  lVar1 = FUN_14526bd70(param_2);
  if (lVar1 == 0) {
    return (undefined4 *)0x0;
  }
LAB_1452aaa21:
  puVar2 = (undefined4 *)FUN_144ea6670(0x20,"crypto\\x509v3\\pcy_data.c");
  if (puVar2 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x22,0xab,0x41,"crypto\\x509v3\\pcy_data.c",0x36,uVar4);
    FUN_144ed0860(lVar1);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    lVar3 = FUN_144babca0();
    *(longlong *)(puVar2 + 6) = lVar3;
    if (lVar3 == 0) {
      FUN_144ea6530(puVar2,"crypto\\x509v3\\pcy_data.c",0x3c);
      FUN_144ed0860(lVar1);
      FUN_144ba24f0(0x22,0xab,0x41,"crypto\\x509v3\\pcy_data.c",0x3e);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      if (param_3 != 0) {
        *puVar2 = 0x10;
      }
      if (lVar1 == 0) {
        *(undefined8 *)(puVar2 + 2) = *param_1;
        *param_1 = 0;
      }
      else {
        *(longlong *)(puVar2 + 2) = lVar1;
      }
      if (param_1 != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + 4) = param_1[1];
        param_1[1] = 0;
      }
    }
  }
  return puVar2;
}



// FUNCTION 1452aab20 FUN_1452aab20 body=95 status=ok
// SIG undefined FUN_1452aab20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452aab20(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    FUN_144ed0860(*(undefined8 *)(param_1 + 8));
    if ((*param_1 & 4) == 0) {
      FUN_144babe00(*(undefined8 *)(param_1 + 0x10),FUN_1452b0c20);
    }
    FUN_144babe00(*(undefined8 *)(param_1 + 0x18),FUN_144ed0860);
    FUN_144ea6530(param_1,"crypto\\x509v3\\pcy_data.c",0x1b);
  }
  return;
}



// FUNCTION 1452aab80 FUN_1452aab80 body=29 status=ok
// SIG undefined FUN_1452aab80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452aab80(void)

{
  FUN_144babc60(FUN_1452aaef0);
  return;
}



// FUNCTION 1452aaba0 FUN_1452aaba0 body=152 status=ok
// SIG undefined FUN_1452aaba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452aaba0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)FUN_144babc00(*(undefined8 *)(param_1 + 8),iVar3);
      if ((plVar2[1] == param_2) &&
         (iVar1 = FUN_14526beb0(*(undefined8 *)(*plVar2 + 8),param_3), iVar1 == 0)) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return (longlong *)0x0;
}



// FUNCTION 1452aac40 FUN_1452aac40 body=59 status=ok
// SIG undefined FUN_1452aac40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452aac40(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *local_48 [3];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452aac4c;
  local_48[0] = local_30;
  local_28 = param_2;
  uVar1 = FUN_144bac1a0(param_1,local_48);
  FUN_144babc00(param_1,uVar1);
  return;
}



// FUNCTION 1452aac80 FUN_1452aac80 body=373 status=ok
// SIG undefined FUN_1452aac80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452aac80(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1452aaca0;
  plVar2 = (longlong *)FUN_144ea6670(0x18,"crypto\\x509v3\\pcy_node.c",0x42);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x22,0xa8,0x41,"crypto\\x509v3\\pcy_node.c",0x44,uVar5);
    return (longlong *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
LAB_1452aad1c:
    if (param_4 == 0) {
LAB_1452aadcf:
      if (param_3 == 0) {
        return plVar2;
      }
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
      return plVar2;
    }
    if (*(longlong *)(param_4 + 0x10) == 0) {
      uVar3 = FUN_144babca0();
      *(undefined8 *)(param_4 + 0x10) = uVar3;
    }
    if (*(longlong *)(param_4 + 0x10) == 0) {
      uVar4 = 0x61;
    }
    else {
      iVar1 = FUN_144bac1c0(*(longlong *)(param_4 + 0x10),param_2);
      if (iVar1 != 0) goto LAB_1452aadcf;
      uVar4 = 0x65;
    }
  }
  else {
    iVar1 = FUN_144ea8fa0(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_1452aadb6;
      *(longlong **)(param_1 + 0x10) = plVar2;
      goto LAB_1452aad1c;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar3 = FUN_144babc60(FUN_1452aaef0);
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar4 = 0x53;
    }
    else {
      iVar1 = FUN_144bac1c0(*(longlong *)(param_1 + 8),plVar2);
      if (iVar1 != 0) goto LAB_1452aad1c;
      uVar4 = 0x57;
    }
  }
  FUN_144ba24f0(0x22,0xa8,0x41,"crypto\\x509v3\\pcy_node.c",uVar4,uVar5);
LAB_1452aadb6:
  FUN_144ea6530(plVar2,"crypto\\x509v3\\pcy_node.c",0x76);
  return (longlong *)0x0;
}



// FUNCTION 1452aae00 FUN_1452aae00 body=33 status=ok
// SIG undefined FUN_1452aae00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452aae00(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\x509v3\\pcy_node.c",0x76);
  return;
}



// FUNCTION 1452aae30 FUN_1452aae30 body=181 status=ok
// SIG undefined FUN_1452aae30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452aae30(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  pbVar1 = (byte *)*param_2;
  if (((*(uint *)(param_1 + 0x18) & 0x400) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar4 = 0;
    iVar2 = FUN_144babbf0(*(undefined8 *)(pbVar1 + 0x18));
    if (0 < iVar2) {
      do {
        uVar3 = FUN_144babc00(*(undefined8 *)(pbVar1 + 0x18),iVar4);
        iVar2 = FUN_14526beb0(uVar3,param_3);
        if (iVar2 == 0) {
          return true;
        }
        iVar4 = iVar4 + 1;
        iVar2 = FUN_144babbf0(*(undefined8 *)(pbVar1 + 0x18));
      } while (iVar4 < iVar2);
    }
    return false;
  }
  iVar2 = FUN_14526beb0(*(undefined8 *)(pbVar1 + 8),param_3);
  return iVar2 == 0;
}



// FUNCTION 1452aaef0 FUN_1452aaef0 body=42 status=ok
// SIG undefined FUN_1452aaef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452aaef0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14526beb0(*(undefined8 *)(*(longlong *)*param_1 + 8),
                *(undefined8 *)(*(longlong *)*param_2 + 8));
  return;
}



// FUNCTION 1452aaf20 FUN_1452aaf20 body=183 status=ok
// SIG undefined FUN_1452aaf20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452aaf20(byte *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar3 = false;
  uVar6 = (ulonglong)param_2;
  bVar2 = false;
  if (param_1 != (byte *)0x0) {
    if ((int)param_2 < 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while (param_1[uVar6] != 0);
    }
    if (0 < (int)uVar6) {
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
        iVar4 = FUN_144ecfdd0(bVar1,0x800);
        if (iVar4 == 0) {
          bVar3 = true;
        }
        if ((bVar1 & 0x80) != 0) {
          bVar2 = true;
        }
      } while (0 < (int)uVar5);
      if (bVar2) {
        return 0x14;
      }
      if (bVar3) {
        return 0x16;
      }
    }
  }
  return 0x13;
}



// FUNCTION 1452aafe0 FUN_1452aafe0 body=217 status=ok
// SIG undefined FUN_1452aafe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452aafe0(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  char local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452aaff0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (int *)0x0) {
    iVar5 = 0;
    iVar3 = 0;
    pcVar4 = *(char **)(param_2 + 2);
    if (0 < *param_2) {
      lVar2 = 0;
      do {
        cVar1 = *pcVar4;
        if ((((byte)(cVar1 - 0x20U) < 0x5f) || (cVar1 == '\n')) || (cVar1 == '\r')) {
          local_68[lVar2] = cVar1;
        }
        else {
          local_68[lVar2] = '.';
        }
        iVar5 = iVar5 + 1;
        lVar2 = lVar2 + 1;
        if (0x4f < iVar5) {
          iVar5 = FUN_144b9eb80(param_1,local_68);
          if (iVar5 < 1) goto LAB_1452ab0ac;
          iVar5 = 0;
          lVar2 = 0;
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (iVar3 < *param_2);
      if (0 < iVar5) {
        FUN_144b9eb80(param_1,local_68);
      }
    }
  }
LAB_1452ab0ac:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452ab0d0 FUN_1452ab0d0 body=713 status=ok
// SIG undefined FUN_1452ab0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ab0d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_170;
  uint local_168;
  longlong local_158;
  char local_150 [7];
  undefined2 uStack_149;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452ab0ef;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar10 = 0;
  iVar2 = FUN_144babbf0(param_2);
  lVar4 = param_3;
  lVar8 = param_3;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_144babc00(param_2,iVar10);
      local_158 = lVar8;
      switch(*puVar3) {
      case 0:
        pcVar7 = "<unsupported>";
        pcVar6 = "othername";
        break;
      case 1:
        iVar2 = FUN_144ef6810("email",*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                              (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_1452ab341;
      case 2:
        iVar2 = FUN_144ef6810(&DAT_149d23bc0,*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                              (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_1452ab341;
      case 3:
        pcVar7 = "<unsupported>";
        pcVar6 = "X400Name";
        break;
      case 4:
        lVar4 = FUN_144baf340(*(undefined8 *)(puVar3 + 2),(longlong)&uStack_149 + 1,0x100);
        if (lVar4 != 0) {
          pcVar6 = "DirName";
          goto LAB_1452ab332;
        }
        goto LAB_1452ab372;
      case 5:
        pcVar7 = "<unsupported>";
        pcVar6 = "EdiPartyName";
        break;
      case 6:
        iVar2 = FUN_144ef6810(&DAT_149d23bc4,*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                              (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_1452ab341;
      case 7:
        iVar2 = **(int **)(puVar3 + 2);
        puVar9 = *(undefined1 **)(*(int **)(puVar3 + 2) + 2);
        if (iVar2 == 4) {
          local_168 = (uint)(byte)puVar9[3];
          local_170 = (uint)(byte)puVar9[2];
          local_178 = (uint)(byte)puVar9[1];
          FUN_144ec7760((longlong)&uStack_149 + 1,0x100,"%d.%d.%d.%d",*puVar9);
          pcVar6 = "IP Address";
        }
        else {
          if (iVar2 != 0x10) {
            pcVar7 = "<invalid>";
            pcVar6 = "IP Address";
            break;
          }
          uStack_149._1_1_ = 0;
          iVar2 = 0;
          do {
            FUN_144ec7760(local_150,5,&DAT_149c02f90,CONCAT11(*puVar9,puVar9[1]));
            puVar5 = &uStack_149;
            puVar9 = puVar9 + 2;
            do {
              pcVar6 = (char *)((longlong)puVar5 + 1);
              puVar5 = (undefined2 *)((longlong)puVar5 + 1);
            } while (*pcVar6 != '\0');
            lVar4 = 0;
            do {
              cVar1 = local_150[lVar4];
              *(char *)((longlong)puVar5 + lVar4) = cVar1;
              lVar4 = lVar4 + 1;
            } while (cVar1 != '\0');
            if (iVar2 != 7) {
              puVar5 = &uStack_149;
              do {
                pcVar6 = (char *)((longlong)puVar5 + 1);
                puVar5 = (undefined2 *)((longlong)puVar5 + 1);
              } while (*pcVar6 != '\0');
              *puVar5 = 0x3a;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 8);
          pcVar6 = "IP Address";
        }
        goto LAB_1452ab332;
      case 8:
        FUN_144ed0b30((longlong)&uStack_149 + 1,0x100,*(undefined8 *)(puVar3 + 2));
        pcVar6 = "Registered ID";
LAB_1452ab332:
        pcVar7 = (char *)((longlong)&uStack_149 + 1);
        break;
      default:
        goto switchD_1452ab14a_default;
      }
      iVar2 = FUN_144ef5c60(pcVar6,pcVar7,&local_158);
LAB_1452ab341:
      if (iVar2 == 0) {
LAB_1452ab372:
        if (param_3 == 0) {
          FUN_144babe00(lVar8,FUN_144ef58f0);
        }
        goto LAB_1452ab38d;
      }
switchD_1452ab14a_default:
      lVar4 = local_158;
      if (local_158 == 0) goto LAB_1452ab372;
      iVar10 = iVar10 + 1;
      iVar2 = FUN_144babbf0(param_2);
      lVar8 = lVar4;
    } while (iVar10 < iVar2);
  }
  if (lVar4 == 0) {
    FUN_144babca0();
  }
LAB_1452ab38d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
}



// FUNCTION 1452ab3e0 FUN_1452ab3e0 body=412 status=ok
// SIG undefined FUN_1452ab3e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452ab3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1452ab3f3;
  iVar1 = FUN_144babbf0(param_3);
  lVar3 = FUN_144babce0(0,iVar1);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x22,0x9a,0x41,"crypto\\x509v3\\v3_alt.c",0x136,uVar8);
    FUN_144babdb0(0);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = FUN_144babc00(param_3,iVar7);
      iVar2 = FUN_144ef6830(*(undefined8 *)(lVar4 + 8),"email");
      if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar5) != (&DAT_149d23cc0)[lVar5])
          goto LAB_1452ab4c9;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        iVar2 = 0;
LAB_1452ab508:
        iVar2 = FUN_1452ac100(param_2,lVar3,iVar2);
        if (iVar2 == 0) {
LAB_1452ab517:
          FUN_144babe00(lVar3,FUN_144ef47c0);
          return 0;
        }
      }
      else {
LAB_1452ab4c9:
        iVar2 = FUN_144ef6830(*(undefined8 *)(lVar4 + 8),"email");
        if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
          lVar5 = 0;
          do {
            lVar6 = lVar5;
            if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar6) != (&DAT_14b3f534a)[lVar6])
            goto LAB_1452ab52a;
            lVar5 = lVar6 + 1;
          } while (lVar6 + 1 != 5);
          iVar2 = (int)lVar6 + -3;
          goto LAB_1452ab508;
        }
LAB_1452ab52a:
        lVar4 = FUN_1452abf80(0,param_1,param_2,lVar4,0);
        if (lVar4 == 0) goto LAB_1452ab517;
        FUN_144bac1c0(lVar3,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar3;
}



// FUNCTION 1452ab580 FUN_1452ab580 body=327 status=ok
// SIG undefined FUN_1452ab580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452ab580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1452ab593;
  iVar1 = FUN_144babbf0(param_3);
  lVar3 = FUN_144babce0(0,iVar1);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x22,0x99,0x41,"crypto\\x509v3\\v3_alt.c",0xe6,uVar8);
    FUN_144babdb0(0);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = FUN_144babc00(param_3,iVar7);
      iVar2 = FUN_144ef6830(*(undefined8 *)(lVar4 + 8),"issuer");
      if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar5) != (&DAT_149d23cc0)[lVar5])
          goto LAB_1452ab676;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        iVar2 = FUN_1452ac280(param_2,lVar3);
        if (iVar2 == 0) goto LAB_1452ab663;
      }
      else {
LAB_1452ab676:
        lVar4 = FUN_1452abf80(0,param_1,param_2,lVar4,0);
        if (lVar4 == 0) {
LAB_1452ab663:
          FUN_144babe00(lVar3,FUN_144ef47c0);
          return 0;
        }
        FUN_144bac1c0(lVar3,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar3;
}



// FUNCTION 1452ab6d0 FUN_1452ab6d0 body=631 status=ok
// SIG undefined FUN_1452ab6d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ab6d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_168 [32];
  uint local_148;
  uint local_140;
  uint local_138;
  undefined8 local_128;
  char local_120 [7];
  undefined2 uStack_119;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452ab6dc;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = param_3;
  switch(*param_2) {
  case 0:
    pcVar4 = "othername";
    goto LAB_1452ab71f;
  case 1:
    FUN_144ef6810("email",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                  (longlong)**(int **)(param_2 + 2),&local_128);
    goto switchD_1452ab716_default;
  case 2:
    FUN_144ef6810(&DAT_149d23bc0,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                  (longlong)**(int **)(param_2 + 2),&local_128);
    goto switchD_1452ab716_default;
  case 3:
    pcVar4 = "X400Name";
    goto LAB_1452ab71f;
  case 4:
    lVar2 = FUN_144baf340(*(undefined8 *)(param_2 + 2),(longlong)&uStack_119 + 1,0x100);
    if (lVar2 == 0) goto switchD_1452ab716_default;
    pcVar5 = (char *)((longlong)&uStack_119 + 1);
    pcVar4 = "DirName";
    break;
  case 5:
    pcVar4 = "EdiPartyName";
LAB_1452ab71f:
    pcVar5 = "<unsupported>";
    break;
  case 6:
    FUN_144ef6810(&DAT_149d23bc4,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                  (longlong)**(int **)(param_2 + 2),&local_128);
    goto switchD_1452ab716_default;
  case 7:
    iVar6 = **(int **)(param_2 + 2);
    puVar7 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    if (iVar6 == 4) {
      local_138 = (uint)(byte)puVar7[3];
      local_140 = (uint)(byte)puVar7[2];
      local_148 = (uint)(byte)puVar7[1];
      FUN_144ec7760((longlong)&uStack_119 + 1,0x100,"%d.%d.%d.%d",*puVar7);
      pcVar5 = (char *)((longlong)&uStack_119 + 1);
      pcVar4 = "IP Address";
    }
    else if (iVar6 == 0x10) {
      iVar6 = 0;
      uStack_119._1_1_ = 0;
      do {
        FUN_144ec7760(local_120,5,&DAT_149c02f90,CONCAT11(*puVar7,puVar7[1]));
        puVar3 = &uStack_119;
        puVar7 = puVar7 + 2;
        do {
          pcVar5 = (char *)((longlong)puVar3 + 1);
          puVar3 = (undefined2 *)((longlong)puVar3 + 1);
        } while (*pcVar5 != '\0');
        lVar2 = 0;
        do {
          cVar1 = local_120[lVar2];
          *(char *)((longlong)puVar3 + lVar2) = cVar1;
          lVar2 = lVar2 + 1;
        } while (cVar1 != '\0');
        if (iVar6 != 7) {
          puVar3 = &uStack_119;
          do {
            pcVar5 = (char *)((longlong)puVar3 + 1);
            puVar3 = (undefined2 *)((longlong)puVar3 + 1);
          } while (*pcVar5 != '\0');
          *puVar3 = 0x3a;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 8);
      pcVar5 = (char *)((longlong)&uStack_119 + 1);
      pcVar4 = "IP Address";
    }
    else {
      pcVar5 = "<invalid>";
      pcVar4 = "IP Address";
    }
    break;
  case 8:
    FUN_144ed0b30((longlong)&uStack_119 + 1,0x100,*(undefined8 *)(param_2 + 2));
    pcVar5 = (char *)((longlong)&uStack_119 + 1);
    pcVar4 = "Registered ID";
    break;
  default:
    goto switchD_1452ab716_default;
  }
  FUN_144ef5c60(pcVar4,pcVar5,&local_128);
switchD_1452ab716_default:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_168);
}



// FUNCTION 1452ab980 FUN_1452ab980 body=580 status=ok
// SIG undefined FUN_1452ab980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452ab980(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  switch(*param_2) {
  case 0:
    FUN_144ec7640(param_1,"othername:<unsupported>");
    return 1;
  case 1:
    FUN_144ec7640(param_1,"email:");
    FUN_1452aafe0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 2:
    FUN_144ec7640(param_1,&DAT_149d23c54);
    FUN_1452aafe0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 3:
    FUN_144ec7640(param_1,"X400Name:<unsupported>");
    return 1;
  case 4:
    FUN_144ec7640(param_1,"DirName:");
    FUN_14526c5b0(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    FUN_144ec7640(param_1,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    FUN_144ec7640(param_1,&DAT_149d23c5c);
    FUN_1452aafe0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    break;
  case 8:
    FUN_144ec7640(param_1,"Registered ID:");
    FUN_144ed09c0(param_1,*(undefined8 *)(param_2 + 2));
  default:
    return 1;
  }
  iVar1 = **(int **)(param_2 + 2);
  puVar3 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
  if (iVar1 == 4) {
    FUN_144ec7640(param_1,"IP Address:%d.%d.%d.%d",*puVar3,puVar3[1],puVar3[2],
                  CONCAT44(1,(uint)(byte)puVar3[3]));
    return 1;
  }
  if (iVar1 != 0x10) {
    FUN_144ec7640(param_1,"IP Address:<invalid>");
    return 1;
  }
  FUN_144ec7640(param_1,"IP Address");
  lVar2 = 8;
  do {
    FUN_144ec7640(param_1,&DAT_149d23c90,CONCAT11(*puVar3,puVar3[1]));
    puVar3 = puVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_144b9ebc0(param_1,&DAT_149dfc0af);
  return 1;
}



// FUNCTION 1452abbf0 FUN_1452abbf0 body=230 status=ok
// SIG undefined FUN_1452abbf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452abbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452abc09;
  iVar1 = FUN_144babbf0(param_3);
  lVar2 = FUN_144babce0(0,iVar1);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x22,0x76,0x41,"crypto\\x509v3\\v3_alt.c",0x197);
    FUN_144babdb0(0);
    lVar2 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_144babc00(param_3,iVar5);
        lVar4 = FUN_1452abf80(0,param_1,param_2,uVar3,0,uVar6);
        if (lVar4 == 0) {
          FUN_144babe00(lVar2,FUN_144ef47c0);
          return 0;
        }
        FUN_144bac1c0(lVar2,lVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return lVar2;
}



// FUNCTION 1452abce0 FUN_1452abce0 body=574 status=ok
// SIG undefined FUN_1452abce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
FUN_1452abce0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1452abcfb;
  if (param_5 == 0) {
    FUN_144ba24f0(0x22,0xa4,0x7c,"crypto\\x509v3\\v3_alt.c",0x1b7,0x1452abcfb);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_144ef47a0(), puVar2 == (undefined4 *)0x0)) {
    FUN_144ba24f0(0x22,0xa4,0x41,"crypto\\x509v3\\v3_alt.c",0x1c0);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    iVar1 = FUN_1452ac3c0(puVar2,param_5,param_3);
    if (iVar1 != 0) {
LAB_1452abeb9:
      *puVar2 = param_4;
      return puVar2;
    }
    uVar6 = 0x1ed;
    uVar5 = 0x93;
    break;
  case 1:
  case 2:
  case 6:
    lVar3 = FUN_144efea80();
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 != 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(param_5 + lVar4) != '\0');
      iVar1 = FUN_144f03d00(lVar3,param_5);
      if (iVar1 != 0) goto LAB_1452abeb9;
    }
    uVar6 = 0x1fa;
    uVar5 = 0x41;
    break;
  default:
    uVar6 = 0x1f2;
    uVar5 = 0xa7;
    break;
  case 4:
    iVar1 = FUN_1452ac4a0(puVar2,param_5,param_3);
    if (iVar1 != 0) goto LAB_1452abeb9;
    uVar6 = 0x1e6;
    uVar5 = 0x95;
    break;
  case 7:
    if (param_6 == 0) {
      lVar3 = FUN_144ef6490(param_5);
    }
    else {
      lVar3 = FUN_144ef6540();
    }
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 != 0) goto LAB_1452abeb9;
    FUN_144ba24f0(0x22,0xa4,0x76,"crypto\\x509v3\\v3_alt.c",0x1de);
    FUN_144ba2bd0(2,"value=",param_5);
    goto LAB_1452abef4;
  case 8:
    lVar3 = FUN_144ea90e0(param_5,0);
    if (lVar3 != 0) {
      *(longlong *)(puVar2 + 2) = lVar3;
      *puVar2 = param_4;
      return puVar2;
    }
    FUN_144ba24f0(0x22,0xa4,0x77,"crypto\\x509v3\\v3_alt.c",0x1d0);
    FUN_144ba2bd0(2,"value=",param_5);
    goto LAB_1452abef4;
  }
  FUN_144ba24f0(0x22,0xa4,uVar5,"crypto\\x509v3\\v3_alt.c",uVar6,uVar7);
LAB_1452abef4:
  if (param_1 == (undefined4 *)0x0) {
    FUN_144ef47c0(puVar2);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 1452abf50 FUN_1452abf50 body=42 status=ok
// SIG undefined FUN_1452abf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452abf50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1452abf80(0,param_1,param_2,param_3,0);
  return;
}



// FUNCTION 1452abf80 FUN_1452abf80 body=372 status=ok
// SIG undefined FUN_1452abf80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452abf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 1;
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 8);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x215),0x1452abfa0);
LAB_1452ac0d7:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_144ef6830(uVar3,"email");
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      iVar2 = FUN_144ef6830(uVar3,&DAT_149d23bc4);
      if (iVar2 == 0) {
        uVar4 = 6;
      }
      else {
        iVar2 = FUN_144ef6830(uVar3,&DAT_149d23bc0);
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = FUN_144ef6830(uVar3,&DAT_149d23cc8);
          if (iVar2 == 0) {
            uVar4 = 8;
          }
          else {
            iVar2 = FUN_144ef6830(uVar3,&DAT_149d23ccc);
            if (iVar2 == 0) {
              uVar4 = 7;
            }
            else {
              iVar2 = FUN_144ef6830(uVar3,"dirName");
              if (iVar2 == 0) {
                uVar4 = 4;
              }
              else {
                iVar2 = FUN_144ef6830(uVar3,"otherName");
                if (iVar2 != 0) {
                  FUN_144ba24f0(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x228));
                  FUN_144ba2bd0(2,"name=",uVar3);
                  goto LAB_1452ac0d7;
                }
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_1452abce0(param_1,param_2,param_3,uVar4,lVar1,CONCAT44(uVar5,param_5));
  }
  return uVar3;
}



// FUNCTION 1452ac100 FUN_1452ac100 body=382 status=ok
// SIG undefined FUN_1452ac100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452ac100(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1452ac11e;
  lVar6 = 0;
  puVar7 = (undefined4 *)0x0;
  if (param_1 == (int *)0x0) {
LAB_1452ac231:
    uVar8 = 0x162;
    uVar3 = 0x7d;
LAB_1452ac23f:
    FUN_144ba24f0(0x22,0x7a,uVar3,"crypto\\x509v3\\v3_alt.c",uVar8,uVar9);
    FUN_144ef47c0(puVar7);
    FUN_144efeaa0(lVar6);
    uVar9 = 0;
  }
  else {
    if (*param_1 != 1) {
      if (*(longlong *)(param_1 + 4) == 0) {
        if (*(longlong *)(param_1 + 6) == 0) goto LAB_1452ac231;
        uVar3 = FUN_1452ac570(*(undefined8 *)(param_1 + 6));
      }
      else {
        uVar3 = FUN_144bb4f50(*(longlong *)(param_1 + 4));
      }
      iVar1 = FUN_144ef3b20(uVar3,0x30);
      if (-1 < iVar1) {
        while( true ) {
          uVar4 = FUN_144ef3c20(uVar3,iVar1);
          uVar5 = FUN_144ef4210(uVar4);
          lVar6 = FUN_144f03ba0(uVar5);
          if (param_3 != 0) {
            FUN_144ef3c70(uVar3,iVar1);
            FUN_144eabc00(uVar4);
            iVar1 = iVar1 + -1;
          }
          puVar7 = (undefined4 *)0x0;
          if ((lVar6 == 0) || (puVar7 = (undefined4 *)FUN_144ef47a0(), puVar7 == (undefined4 *)0x0))
          break;
          *(longlong *)(puVar7 + 2) = lVar6;
          *puVar7 = 1;
          lVar6 = 0;
          iVar2 = FUN_144bac1c0(param_2,puVar7);
          if (iVar2 == 0) {
            uVar8 = 0x17d;
            uVar3 = 0x41;
            goto LAB_1452ac23f;
          }
          iVar1 = FUN_144ef3b20(uVar3,0x30,iVar1);
          if (iVar1 < 0) {
            return 1;
          }
        }
        uVar8 = 0x176;
        uVar3 = 0x41;
        goto LAB_1452ac23f;
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1452ac280 FUN_1452ac280 body=307 status=ok
// SIG undefined FUN_1452ac280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452ac280(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452ac29a;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      iVar1 = FUN_144eac570(*(longlong *)(param_1 + 2),0x55,0xffffffff);
      if (iVar1 < 0) {
        return 1;
      }
      lVar3 = FUN_144eac590(*(undefined8 *)(param_1 + 2),iVar1);
      if ((lVar3 != 0) && (lVar3 = FUN_14526d2e0(lVar3), lVar3 != 0)) {
        iVar1 = FUN_144babbf0(lVar3);
        iVar2 = FUN_144babd70(param_2,iVar1);
        if (iVar2 == 0) {
          FUN_144ba24f0(0x22,0x7b,0x41,"crypto\\x509v3\\v3_alt.c",0x119);
          FUN_144babdb0(lVar3);
          return 0;
        }
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            uVar6 = FUN_144babc00(lVar3,iVar2);
            FUN_144bac1c0(param_2,uVar6);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        FUN_144babdb0(lVar3);
        return 1;
      }
      uVar5 = 0x113;
      uVar4 = 0x7e;
      goto LAB_1452ac388;
    }
  }
  uVar5 = 0x10b;
  uVar4 = 0x7f;
LAB_1452ac388:
  FUN_144ba24f0(0x22,0x7b,uVar4,"crypto\\x509v3\\v3_alt.c",uVar5,uVar6);
  return 0;
}



// FUNCTION 1452ac3c0 FUN_1452ac3c0 body=218 status=ok
// SIG undefined FUN_1452ac3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452ac3c0(longlong param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pcVar1 = strchr(param_2,0x3b);
  if (pcVar1 != (char *)0x0) {
    lVar2 = FUN_144ef4930();
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 != 0) {
      FUN_144efe790(*(undefined8 *)(lVar2 + 8));
      lVar2 = FUN_1452a17a0(pcVar1 + 1,param_3);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = lVar2;
      if ((lVar2 != 0) &&
         (lVar2 = FUN_144ea6e30(param_2,(longlong)((int)pcVar1 - (int)param_2),
                                "crypto\\x509v3\\v3_alt.c",0x242), lVar2 != 0)) {
        uVar3 = FUN_144ea90e0(lVar2,0);
        **(undefined8 **)(param_1 + 8) = uVar3;
        FUN_144ea6530(lVar2,"crypto\\x509v3\\v3_alt.c",0x246);
        return **(longlong **)(param_1 + 8) != 0;
      }
    }
  }
  return false;
}



// FUNCTION 1452ac4a0 FUN_1452ac4a0 body=203 status=ok
// SIG undefined FUN_1452ac4a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1452ac4a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452ac4be;
  lVar3 = 0;
  lVar2 = FUN_144eabc20();
  iVar1 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_145282850(param_3,param_2);
    if (lVar3 == 0) {
      FUN_144ba24f0(0x22,0x90,0x96,"crypto\\x509v3\\v3_alt.c",0x256,uVar4);
      FUN_144ba2bd0(2,"section=",param_2);
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_144ef6690(lVar2,lVar3,0x1001);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 8) = lVar2;
        goto LAB_1452ac528;
      }
    }
  }
  FUN_144eabc40(lVar2);
LAB_1452ac528:
  FUN_1452828b0(param_3,lVar3);
  return iVar1;
}



// FUNCTION 1452ac570 FUN_1452ac570 body=5 status=ok
// SIG undefined FUN_1452ac570(void)

undefined8 FUN_1452ac570(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1452ac580 FUN_1452ac580 body=868 status=ok
// SIG undefined FUN_1452ac580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ac580(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  longlong *plVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar11 = (longlong *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_144efd350();
  lVar2 = FUN_144efc0f0(param_1);
  local_98 = lVar2;
  if (lVar2 == 0) {
    local_c8 = CONCAT44(local_c8._4_4_,0x33f);
    FUN_144ba24f0(0x10,0xf3,0x71,"crypto\\ec\\ecp_nistz256.c");
  }
  else {
    iVar1 = FUN_1452ae4c0(lVar2);
    if ((iVar1 == 0) && (local_b8 = (longlong *)FUN_1452ad700(param_1), local_b8 != (longlong *)0x0)
       ) {
      if ((param_2 != 0) ||
         (param_2 = FUN_144eedd20(), plVar7 = local_b8, plVar9 = plVar11, plVar4 = plVar11,
         local_a0 = param_2, param_2 != 0)) {
        FUN_144eede20(param_2);
        lVar3 = FUN_144efc150(param_1);
        plVar7 = local_b8;
        plVar9 = (longlong *)0x0;
        plVar4 = (longlong *)0x0;
        if (lVar3 != 0) {
          iVar1 = FUN_144ba0340(lVar3);
          if (iVar1 == 0) {
            local_b0 = (longlong *)FUN_144ea64e0(0x25040,"crypto\\ec\\ecp_nistz256.c",0x362);
            if (local_b0 == (longlong *)0x0) {
              local_c8 = CONCAT44(local_c8._4_4_,0x363);
              uVar10 = 0x41;
              plVar4 = plVar11;
LAB_1452ac860:
              FUN_144ba24f0(0x10,0xf3,uVar10,"crypto\\ec\\ecp_nistz256.c");
              plVar7 = local_b8;
              plVar9 = local_b0;
            }
            else {
              lVar3 = (longlong)local_b0 + (0x40 - (ulonglong)((uint)local_b0 & 0x3f));
              plVar4 = (longlong *)FUN_144efc690(param_1);
              local_a8 = FUN_144efc690(param_1);
              plVar7 = local_b8;
              plVar9 = local_b0;
              if (((plVar4 != (longlong *)0x0) && (local_a8 != 0)) &&
                 (iVar1 = FUN_144efc830(local_a8,lVar2), plVar7 = local_b8, plVar9 = local_b0,
                 plVar12 = plVar11, iVar1 != 0)) {
                do {
                  iVar1 = FUN_144efc830(plVar4,local_a8);
                  plVar7 = local_b8;
                  plVar9 = local_b0;
                  plVar8 = plVar11;
                  if (iVar1 == 0) goto LAB_1452ac880;
                  do {
                    iVar1 = FUN_144efcfd0(param_1,plVar4,param_2);
                    plVar7 = local_b8;
                    plVar9 = local_b0;
                    if (iVar1 == 0) goto LAB_1452ac880;
                    iVar1 = FUN_1452992e0(local_88,plVar4[2],4);
                    if ((iVar1 == 0) || (iVar1 = FUN_1452992e0(local_68,plVar4[3],4), iVar1 == 0)) {
                      local_c8 = CONCAT44(local_c8._4_4_,899);
                      uVar10 = 0x92;
                      goto LAB_1452ac860;
                    }
                    FUN_14270efc0((longlong)(int)plVar8 * 0x1000 + lVar3,local_88,plVar12);
                    plVar6 = plVar11;
                    do {
                      iVar1 = FUN_144efcd10(param_1,plVar4,plVar4,param_2);
                      plVar7 = local_b8;
                      plVar9 = local_b0;
                      if (iVar1 == 0) goto LAB_1452ac880;
                      uVar5 = (int)plVar6 + 1;
                      plVar6 = (longlong *)(ulonglong)uVar5;
                    } while ((int)uVar5 < 7);
                    uVar5 = (int)plVar8 + 1;
                    plVar8 = (longlong *)(ulonglong)uVar5;
                  } while ((int)uVar5 < 0x25);
                  local_c8 = param_2;
                  iVar1 = FUN_144efcc60(param_1,local_a8,local_a8,local_98);
                  plVar7 = local_b8;
                  plVar9 = local_b0;
                  if (iVar1 == 0) goto LAB_1452ac880;
                  uVar5 = (int)plVar12 + 1;
                  plVar12 = (longlong *)(ulonglong)uVar5;
                } while ((int)uVar5 < 0x40);
                local_b8[3] = (longlong)local_b0;
                *local_b8 = param_1;
                local_b8[1] = 7;
                local_b8[2] = lVar3;
                *(undefined4 *)(param_1 + 0x98) = 4;
                *(longlong **)(param_1 + 0xa0) = local_b8;
                plVar7 = plVar11;
                plVar9 = plVar11;
              }
            }
          }
          else {
            local_c8 = CONCAT44(local_c8._4_4_,0x35b);
            FUN_144ba24f0(0x10,0xf3,0x72,"crypto\\ec\\ecp_nistz256.c");
            plVar7 = local_b8;
          }
        }
      }
LAB_1452ac880:
      FUN_144eedf20(param_2);
      FUN_144eeddc0(local_a0);
      FUN_1452ad690(plVar7);
      FUN_144ea6530(plVar9,"crypto\\ec\\ecp_nistz256.c",0x39e);
      FUN_144efc7a0(plVar4);
      FUN_144efc7a0(local_a8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1452ac900 FUN_1452ac900 body=2007 status=ok
// SIG undefined FUN_1452ac900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001452acce7) */
/* WARNING: Removing unreachable block (ram,0x0001452accf0) */

void FUN_1452ac900(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined *param_5,void *param_6,undefined8 param_7)

{
  size_t _Size;
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Dst;
  undefined *_Dst_00;
  uint uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined8 local_1c0;
  int local_1a0;
  undefined *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined *local_180;
  void *local_178;
  longlong local_170;
  void *local_168;
  undefined8 local_160;
  ulonglong local_158;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0 [4];
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1452ac917;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  _Dst_00 = (undefined *)0x0;
  bVar2 = false;
  local_180 = param_5;
  local_178 = param_6;
  local_158 = param_4 + 1;
  puVar17 = (undefined *)0x0;
  local_160 = param_7;
  local_1a0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_198 = (undefined *)0x0;
  local_168 = (void *)0x0;
  local_188 = param_4;
  local_170 = param_2;
  if (0xffffffe < param_4) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x3cc);
    FUN_144ba24f0(0x10,0xf1,0x41,"crypto\\ec\\ecp_nistz256.c");
    goto LAB_1452ad0c3;
  }
  memset(&local_140,0,0x60);
  FUN_144eede20(param_7);
  if (param_3 == 0) {
    local_1a0 = 1;
    uVar7 = local_188;
    puVar9 = local_180;
    _Dst = local_178;
    puVar17 = _Dst_00;
    iVar3 = 1;
    goto LAB_1452acfbe;
  }
  local_190 = FUN_144efc0f0(param_1);
  if (local_190 == 0) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x3d6);
    FUN_144ba24f0(0x10,0xf1,0x71,"crypto\\ec\\ecp_nistz256.c");
    puVar17 = _Dst_00;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    lVar5 = param_3;
    if (lVar6 == 0) {
LAB_1452acad5:
      iVar3 = FUN_1452ae4c0(local_190);
      if (iVar3 == 0) {
        bVar2 = true;
        local_1a0 = 1;
      }
      else {
        local_198 = &DAT_1426e8000;
LAB_1452acaf0:
        iVar3 = FUN_144ba03d0(param_3);
        if ((0x100 < iVar3) || (iVar3 = FUN_144ba0ba0(param_3), iVar3 != 0)) {
          lVar5 = FUN_144eede90(param_7);
          if (lVar5 != 0) {
            iVar3 = FUN_1452a55e0(lVar5,param_3,*(undefined8 *)(param_1 + 0x10),param_7);
            if (iVar3 != 0) goto LAB_1452acb6a;
            local_1c8 = CONCAT44(local_1c8._4_4_,0x406);
            FUN_144ba24f0(0x10,0xf1,3,"crypto\\ec\\ecp_nistz256.c");
          }
          goto LAB_1452ad067;
        }
LAB_1452acb6a:
        uVar13 = 0;
        iVar3 = FUN_145299290(lVar5);
        if (0 < iVar3 << 3) {
          puVar10 = (undefined1 *)((longlong)&local_80 + 1);
          puVar17 = _Dst_00;
          do {
            lVar6 = FUN_145299350(lVar5);
            iVar12 = (int)puVar17;
            iVar3 = iVar12;
            if (iVar12 < 0) {
              iVar3 = iVar12 + 7;
            }
            uVar13 = iVar12 + 8;
            puVar17 = (undefined *)(ulonglong)uVar13;
            uVar1 = *(undefined8 *)(lVar6 + (longlong)(iVar3 >> 3) * 8);
            puVar10[-1] = (char)uVar1;
            *puVar10 = (char)((ulonglong)uVar1 >> 8);
            puVar10[1] = (char)((ulonglong)uVar1 >> 0x10);
            puVar10[2] = (char)((ulonglong)uVar1 >> 0x18);
            puVar10[3] = (char)((ulonglong)uVar1 >> 0x20);
            puVar10[4] = (char)((ulonglong)uVar1 >> 0x28);
            puVar10[6] = (char)((ulonglong)uVar1 >> 0x38);
            puVar10[5] = (char)((ulonglong)uVar1 >> 0x30);
            puVar10 = puVar10 + 8;
            iVar3 = FUN_145299290(lVar5);
          } while ((int)uVar13 < iVar3 * 8);
        }
        puVar17 = local_198;
        for (uVar7 = (ulonglong)(int)uVar13; (longlong)uVar7 < 0x21; uVar7 = uVar7 + 1) {
          if (0x20 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_144e2bb84();
          }
          *(undefined1 *)((longlong)&local_80 + uVar7) = 0;
        }
        uVar8 = (byte)local_80 & 0x7f;
        uVar14 = (uVar8 >> 6) - 1;
        uVar15 = ~uVar14;
        uVar13 = uVar8 * -2 + 0xff & uVar15;
        uVar13 = (uVar15 & 1) + (((uVar13 | uVar14 & uVar8 * 2) >> 1) + (uVar13 & 1)) * 2;
        FUN_14270f000(&local_140,local_198,uVar13 >> 1);
        FUN_14270d4c0(&local_100,&local_120);
        uVar7 = -(ulonglong)(uVar13 & 1);
        uVar16 = ~uVar7;
        local_110 = uVar16 & local_110 ^ uVar7 & local_f0;
        uStack_108 = uVar16 & uStack_108 ^ uVar7 & uStack_e8;
        local_120 = uVar16 & local_120 ^ uVar7 & local_100;
        uStack_118 = uVar16 & uStack_118 ^ uVar7 & uStack_f8;
        lVar6 = 0x24;
        iVar3 = 7;
        uVar7 = local_140 | local_138 | local_130 | local_128 | local_120 | uStack_118 | local_110 |
                uStack_108;
        local_f0 = 0xffffffffffffffff - ((longlong)~(-uVar7 | uVar7) >> 0x3f);
        local_100 = local_f0 & 1;
        uStack_f8 = local_f0 & 0xffffffff00000000;
        uStack_e8 = local_f0 & 0xfffffffe;
        do {
          puVar17 = puVar17 + 0x1000;
          uVar8 = iVar3 - 1;
          iVar3 = iVar3 + 7;
          uVar13 = uVar8 >> 3;
          uVar13 = (ushort)(CONCAT11(*(undefined1 *)((longlong)&local_80 + (ulonglong)(uVar13 + 1)),
                                     *(undefined1 *)((longlong)&local_80 + (ulonglong)uVar13)) >>
                           ((byte)uVar8 & 7)) & 0xff;
          uVar8 = (uVar13 >> 7) - 1;
          uVar14 = ~uVar8;
          uVar13 = 0xff - uVar13 & uVar14 | uVar8 & uVar13;
          uVar13 = (uVar14 & 1) + ((uVar13 >> 1) + (uVar13 & 1)) * 2;
          FUN_14270f000(local_e0,puVar17,uVar13 >> 1);
          FUN_14270d4c0(&local_a0,&local_c0);
          uVar7 = -(ulonglong)(uVar13 & 1);
          uVar16 = ~uVar7;
          local_c0 = local_a0 & uVar7 ^ local_c0 & uVar16;
          uStack_b8 = uStack_98 & uVar7 ^ uStack_b8 & uVar16;
          local_b0 = local_90 & uVar7 ^ local_b0 & uVar16;
          uStack_a8 = uStack_88 & uVar7 ^ uStack_a8 & uVar16;
          FUN_142710020(&local_140,&local_140,local_e0);
          lVar6 = lVar6 + -1;
          param_7 = local_160;
        } while (lVar6 != 0);
      }
      if (bVar2) {
        _Size = local_188 * 8;
        _Dst = (void *)FUN_144ea64e0(_Size + 8,"crypto\\ec\\ecp_nistz256.c",0x460);
        local_168 = _Dst;
        if (_Dst == (void *)0x0) {
          local_1c8 = CONCAT44(local_1c8._4_4_,0x462);
        }
        else {
          _Dst_00 = (undefined *)FUN_144ea64e0(_Size + 8,"crypto\\ec\\ecp_nistz256.c",0x466);
          if (_Dst_00 != (undefined *)0x0) {
            memcpy(_Dst,local_178,_Size);
            *(longlong *)(_Size + (longlong)_Dst) = lVar5;
            memcpy(_Dst_00,local_180,_Size);
            *(longlong *)(_Dst_00 + _Size) = local_190;
            uVar7 = local_158;
            puVar9 = _Dst_00;
            param_2 = local_170;
            puVar17 = _Dst_00;
            iVar3 = local_1a0;
            goto LAB_1452acfbe;
          }
          local_1c8 = CONCAT44(local_1c8._4_4_,0x468);
        }
        FUN_144ba24f0(0x10,0xf1,0x41,"crypto\\ec\\ecp_nistz256.c");
        puVar17 = _Dst_00;
      }
      else {
        iVar3 = 0;
        uVar7 = local_188;
        puVar9 = local_180;
        param_2 = local_170;
        _Dst = local_178;
        puVar17 = _Dst_00;
LAB_1452acfbe:
        if (uVar7 != 0) {
          puVar11 = local_e0;
          if (iVar3 != 0) {
            puVar11 = &local_140;
          }
          local_1c8 = uVar7;
          local_1c0 = param_7;
          iVar3 = FUN_1452adba0(param_1,puVar11,_Dst,puVar9);
          if (iVar3 == 0) goto LAB_1452ad067;
          if (local_1a0 == 0) {
            FUN_14270f8c0(&local_140,&local_140,puVar11);
          }
        }
        iVar3 = FUN_145299360(*(undefined8 *)(param_2 + 0x10),&local_140,4);
        if (((iVar3 != 0) &&
            (iVar3 = FUN_145299360(*(undefined8 *)(param_2 + 0x18),&local_120,4), iVar3 != 0)) &&
           (iVar3 = FUN_145299360(*(undefined8 *)(param_2 + 0x20),&local_100,4), iVar3 != 0)) {
          uVar13 = FUN_1452ad7e0(*(undefined8 *)(param_2 + 0x20));
          *(uint *)(param_2 + 0x28) = uVar13 & 1;
        }
      }
    }
    else {
      lVar4 = FUN_144efc690(param_1);
      if (lVar4 != 0) {
        FUN_14270f000(&local_140,*(undefined8 *)(lVar6 + 0x10),1);
        iVar3 = FUN_145299360(*(undefined8 *)(lVar4 + 0x10),&local_140,4);
        if (((iVar3 != 0) &&
            (iVar3 = FUN_145299360(*(undefined8 *)(lVar4 + 0x18),&local_120,4), iVar3 != 0)) &&
           (iVar3 = FUN_145299360(*(undefined8 *)(lVar4 + 0x20),&DAT_149d23f60,4), iVar3 != 0)) {
          *(undefined4 *)(lVar4 + 0x28) = 1;
          iVar3 = FUN_144efcf30(param_1,local_190,lVar4,param_7);
          puVar9 = _Dst_00;
          if (iVar3 == 0) {
            local_198 = *(undefined **)(lVar6 + 0x10);
            puVar9 = local_198;
          }
          FUN_144efc7a0(lVar4);
          if (puVar9 == (undefined *)0x0) goto LAB_1452acad5;
          goto LAB_1452acaf0;
        }
        FUN_144efc7a0(lVar4);
      }
    }
  }
LAB_1452ad067:
  FUN_144eedf20(param_7);
  FUN_144ea6530(puVar17,"crypto\\ec\\ecp_nistz256.c",0x48e);
  FUN_144ea6530(local_168,"crypto\\ec\\ecp_nistz256.c",0x48f);
LAB_1452ad0c3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 1452ad0f0 FUN_1452ad0f0 body=433 status=ok
// SIG undefined FUN_1452ad0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ad0f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1452ad0fe;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar1 = FUN_144efce30();
  if (iVar1 == 0) {
    iVar1 = FUN_1452992e0(local_e8,*(undefined8 *)(param_2 + 0x10),4);
    if (((iVar1 != 0) &&
        (iVar1 = FUN_1452992e0(local_88,*(undefined8 *)(param_2 + 0x18),4), iVar1 != 0)) &&
       (iVar1 = FUN_1452992e0(local_108,*(undefined8 *)(param_2 + 0x20),4), iVar1 != 0)) {
      FUN_1452ad870(local_148,local_108);
      FUN_14270e640(local_128,local_148);
      FUN_14270e340(local_c8,local_128,local_e8);
      if (param_3 != 0) {
        FUN_14270ece0(local_a8,local_c8);
        iVar1 = FUN_145299360(param_3,local_a8,4);
        if (iVar1 == 0) goto LAB_1452ad291;
      }
      if (param_4 != 0) {
        FUN_14270e340(local_148,local_148,local_128);
        FUN_14270e340(local_68,local_148,local_88);
        FUN_14270ece0(local_48,local_68);
        FUN_145299360(param_4,local_48,4);
      }
      goto LAB_1452ad291;
    }
    local_158 = 0x4a6;
    uVar2 = 0x92;
  }
  else {
    local_158 = 0x49f;
    uVar2 = 0x6a;
  }
  FUN_144ba24f0(0x10,0xf0,uVar2,"crypto\\ec\\ecp_nistz256.c");
LAB_1452ad291:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_178);
}



// FUNCTION 1452ad2b0 FUN_1452ad2b0 body=78 status=ok
// SIG undefined FUN_1452ad2b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452ad2b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144efc0f0();
  if ((lVar2 != 0) && (iVar1 = FUN_1452ae4c0(lVar2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x98) == 4) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1452ad300 FUN_1452ad300 body=860 status=ok
// SIG undefined FUN_1452ad300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ad300(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [64];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar2 = FUN_144ba1290(param_2,4);
  if (lVar2 == 0) {
    local_278 = 0x52c;
    FUN_144ba24f0(0x10,0x113,3,"crypto\\ec\\ecp_nistz256.c");
  }
  else {
    iVar1 = FUN_144ba03d0(param_3);
    if (((iVar1 < 0x101) && (iVar1 = FUN_144ba0ba0(param_3), lVar2 = param_3, iVar1 == 0)) ||
       ((lVar2 = FUN_144eede90(param_4), lVar2 != 0 &&
        (iVar1 = FUN_1452a55e0(lVar2,param_3,*(undefined8 *)(param_1 + 0x10),param_4), iVar1 != 0)))
       ) {
      iVar1 = FUN_1452992e0(local_68,lVar2,4);
      if (iVar1 != 0) {
        FUN_14270d560(local_248,local_68,&DAT_149d23d30);
        FUN_14270d8e0(local_228,local_248,1);
        FUN_14270d560(local_208,local_248,local_228);
        FUN_14270d560(local_1e8,local_208,local_228);
        FUN_14270d560(local_1c8,local_1e8,local_228);
        FUN_14270d8e0(local_1a8,local_1e8,1);
        FUN_14270d560(local_188,local_1a8,local_1e8);
        FUN_14270d8e0(local_168,local_1a8,1);
        FUN_14270d560(local_168,local_168,local_248);
        FUN_14270d8e0(local_148,local_168,1);
        FUN_14270d560(local_128,local_148,local_1e8);
        FUN_14270d560(local_108,local_148,local_168);
        FUN_14270d8e0(local_e8,local_108,2);
        FUN_14270d560(local_e8,local_e8,local_208);
        FUN_14270d8e0(local_c8,local_e8,8);
        FUN_14270d560(local_c8,local_c8,local_e8);
        FUN_14270d8e0(local_a8,local_c8,0x10);
        FUN_14270d560(local_a8,local_a8,local_c8);
        FUN_14270d8e0(local_268,local_a8,0x40);
        FUN_14270d560(local_268,local_268,local_a8);
        pbVar3 = &DAT_149d23d71;
        do {
          FUN_14270d8e0(local_268,local_268,pbVar3[-1]);
          FUN_14270d560(local_268,local_268,local_248 + (ulonglong)*pbVar3 * 0x20);
          pbVar3 = pbVar3 + 2;
        } while ((longlong)pbVar3 < 0x149d23da7);
        FUN_14270d560(local_268,local_268,&DAT_149d23d50);
        FUN_145299360(param_2,local_268,4);
        goto LAB_1452ad64d;
      }
      local_278 = 0x53c;
      uVar4 = 0x92;
    }
    else {
      local_278 = 0x535;
      uVar4 = 3;
    }
    FUN_144ba24f0(0x10,0x113,uVar4,"crypto\\ec\\ecp_nistz256.c");
  }
LAB_1452ad64d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_298);
}



// FUNCTION 1452ad670 FUN_1452ad670 body=19 status=ok
// SIG undefined FUN_1452ad670(void)

longlong FUN_1452ad670(longlong param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1452ad690 FUN_1452ad690 body=93 status=ok
// SIG undefined FUN_1452ad690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ad690(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x18),"crypto\\ec\\ecp_nistz256.c",0x4ef);
      FUN_144e98660(*(undefined8 *)(param_1 + 0x28));
      FUN_144ea6530(param_1,"crypto\\ec\\ecp_nistz256.c",0x4f1);
    }
  }
  return;
}



// FUNCTION 1452ad700 FUN_1452ad700 body=222 status=ok
// SIG undefined FUN_1452ad700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452ad700(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1452ad70c;
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)FUN_144ea6670(0x30,"crypto\\ec\\ecp_nistz256.c",0x4c6);
  if (plVar1 == (longlong *)0x0) {
    FUN_144ba24f0(0x10,0xf4,0x41,"crypto\\ec\\ecp_nistz256.c",0x4c9,uVar3);
    return (longlong *)0x0;
  }
  *plVar1 = param_1;
  plVar1[1] = 6;
  *(undefined4 *)(plVar1 + 4) = 1;
  lVar2 = FUN_144e985a0();
  plVar1[5] = lVar2;
  if (lVar2 == 0) {
    FUN_144ba24f0(0x10,0xf4,0x41,"crypto\\ec\\ecp_nistz256.c",0x4d3,uVar3);
    FUN_144ea6530(plVar1,"crypto\\ec\\ecp_nistz256.c",0x4d4);
    return (longlong *)0x0;
  }
  return plVar1;
}



// FUNCTION 1452ad7e0 FUN_1452ad7e0 body=135 status=ok
// SIG undefined FUN_1452ad7e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452ad7e0(undefined8 param_1)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)FUN_145299350();
  iVar1 = FUN_145299290(param_1);
  if (iVar1 == 4) {
    uVar3 = puVar2[3] ^ 0xfffffffe | puVar2[1] ^ 0xffffffff00000000 | ~puVar2[2] | *puVar2 ^ 1;
    return ~(-uVar3 | uVar3) >> 0x3f;
  }
  return 0;
}



// FUNCTION 1452ad870 FUN_1452ad870 body=788 status=ok
// SIG undefined FUN_1452ad870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ad870(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1452ad887;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14270e640(&local_e8);
  FUN_14270e340(local_48,&local_e8,param_2);
  FUN_14270e640(&local_e8,local_48);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e340(local_68,&local_e8,local_48);
  FUN_14270e640(&local_e8,local_68);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e340(local_88,&local_e8,local_68);
  FUN_14270e640(&local_e8,local_88);
  lVar1 = 7;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(local_a8,&local_e8,local_88);
  FUN_14270e640(&local_e8,local_a8);
  lVar1 = 0xf;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(local_c8,&local_e8,local_a8);
  FUN_14270e640(&local_e8,local_c8);
  lVar1 = 0x1f;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(&local_e8,&local_e8,param_2);
  lVar1 = 0x80;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(&local_e8,&local_e8,local_c8);
  lVar1 = 0x20;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(&local_e8,&local_e8,local_c8);
  lVar1 = 0x10;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(&local_e8,&local_e8,local_a8);
  lVar1 = 8;
  do {
    FUN_14270e640(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14270e340(&local_e8,&local_e8,local_88);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e340(&local_e8,&local_e8,local_68);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e340(&local_e8,&local_e8,local_48);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e640(&local_e8,&local_e8);
  FUN_14270e340(&local_e8,&local_e8,param_2);
  *param_1 = local_e8;
  param_1[1] = uStack_e4;
  param_1[2] = uStack_e0;
  param_1[3] = uStack_dc;
  param_1[4] = local_d8;
  param_1[5] = uStack_d4;
  param_1[6] = uStack_d0;
  param_1[7] = uStack_cc;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_108);
}



// FUNCTION 1452adba0 FUN_1452adba0 body=2322 status=ok
// SIG undefined FUN_1452adba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * FUN_1452adba0(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                    ulonglong param_5,undefined8 param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  longlong lVar23;
  undefined4 uVar24;
  byte *local_78;
  longlong local_70;
  ulonglong local_48;
  
  pbVar13 = (byte *)0x0;
  pbVar5 = pbVar13;
  pbVar6 = pbVar13;
  pbVar7 = pbVar13;
  if (param_5 * 0x10 + 6 < 0x1555556) {
    pbVar5 = (byte *)FUN_144ea64e0(param_5 * 0x600 + 0x220,"crypto\\ec\\ecp_nistz256.c",0x276);
    pbVar6 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    if (((pbVar5 != (byte *)0x0) &&
        (pbVar6 = (byte *)FUN_144ea64e0(param_5 * 0x21,"crypto\\ec\\ecp_nistz256.c",0x278),
        pbVar7 = pbVar13, pbVar6 != (byte *)0x0)) &&
       (pbVar7 = (byte *)FUN_144ea64e0(param_5 * 8,"crypto\\ec\\ecp_nistz256.c",0x279),
       pbVar7 != (byte *)0x0)) {
      local_48 = 0;
      pbVar21 = pbVar5 + (0x40 - (ulonglong)((uint)pbVar5 & 0x3f));
      pbVar1 = pbVar21 + param_5 * 0x600;
      if (param_5 != 0) {
        param_3 = param_3 - (longlong)pbVar7;
        param_4 = param_4 - (longlong)pbVar7;
        local_70 = 0;
        pbVar22 = pbVar7;
        local_78 = pbVar21;
        do {
          pbVar13 = (byte *)0x0;
          iVar4 = FUN_144ba03d0(*(undefined8 *)(pbVar22 + param_3));
          if ((0x100 < iVar4) ||
             (iVar4 = FUN_144ba0ba0(*(undefined8 *)(pbVar22 + param_3)), iVar4 != 0)) {
            lVar8 = FUN_144eede90(param_6);
            if (lVar8 != 0) {
              iVar4 = FUN_1452a55e0(lVar8,*(undefined8 *)(pbVar22 + param_3),
                                    *(undefined8 *)(param_1 + 0x10),param_6);
              if (iVar4 != 0) goto LAB_1452add38;
              uVar24 = 0x28b;
              uVar20 = 3;
LAB_1452ae3f6:
              FUN_144ba24f0(0x10,0xf2,uVar20,"crypto\\ec\\ecp_nistz256.c",uVar24);
            }
            goto LAB_1452ae405;
          }
          lVar8 = *(longlong *)(pbVar22 + param_3);
LAB_1452add38:
          *(longlong *)pbVar22 = lVar8;
          iVar4 = FUN_145299290(lVar8);
          pbVar12 = pbVar13;
          if (iVar4 << 3 < 1) {
LAB_1452adde2:
            lVar8 = 0x21 - (longlong)pbVar12;
            pbVar12 = pbVar12 + local_70 + (longlong)pbVar6;
            for (; lVar8 != 0; lVar8 = lVar8 + -1) {
              *pbVar12 = 0;
              pbVar12 = pbVar12 + 1;
            }
          }
          else {
            pbVar18 = pbVar6 + local_70;
            pbVar15 = pbVar13;
            do {
              lVar8 = FUN_145299350(*(undefined8 *)pbVar22);
              iVar14 = (int)pbVar15;
              iVar4 = iVar14;
              if (iVar14 < 0) {
                iVar4 = iVar14 + 7;
              }
              pbVar15 = (byte *)(ulonglong)(iVar14 + 8U);
              uVar2 = *(undefined8 *)(lVar8 + (longlong)(iVar4 >> 3) * 8);
              pbVar18[(longlong)pbVar12] = (byte)uVar2;
              (pbVar18 + 1)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 8);
              (pbVar18 + 2)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x10);
              (pbVar18 + 3)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x18);
              (pbVar18 + 4)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x20);
              (pbVar18 + 5)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x28);
              (pbVar18 + 7)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x38);
              (pbVar18 + 6)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x30);
              pbVar12 = pbVar12 + 8;
              iVar4 = FUN_145299290(*(undefined8 *)pbVar22);
            } while ((int)(iVar14 + 8U) < iVar4 * 8);
            if ((longlong)pbVar12 < 0x21) goto LAB_1452adde2;
          }
          iVar4 = FUN_1452992e0(pbVar1,*(undefined8 *)(*(longlong *)(pbVar22 + param_4) + 0x10),4);
          if (((iVar4 == 0) ||
              (iVar4 = FUN_1452992e0(pbVar1 + 0x20,
                                     *(undefined8 *)(*(longlong *)(pbVar22 + param_4) + 0x18),4),
              iVar4 == 0)) ||
             (iVar4 = FUN_1452992e0(pbVar1 + 0x40,
                                    *(undefined8 *)(*(longlong *)(pbVar22 + param_4) + 0x20),4),
             iVar4 == 0)) {
            uVar24 = 0x2a8;
            uVar20 = 0x92;
            goto LAB_1452ae3f6;
          }
          FUN_14270ee00(local_78,pbVar1,1);
          FUN_14270f580(pbVar1 + 0x60,pbVar1);
          FUN_14270ee00(local_78,pbVar1 + 0x60,2);
          pbVar13 = pbVar1 + 0xc0;
          FUN_14270f8c0(pbVar13,pbVar1 + 0x60,pbVar1);
          FUN_14270ee00(local_78,pbVar13,3);
          FUN_14270f580(pbVar1 + 0x60,pbVar1 + 0x60);
          FUN_14270ee00(local_78,pbVar1 + 0x60,4);
          FUN_14270f580(pbVar13,pbVar13);
          FUN_14270ee00(local_78,pbVar13,6);
          pbVar12 = pbVar1 + 0x120;
          FUN_14270f8c0(pbVar12,pbVar1 + 0x60,pbVar1);
          FUN_14270ee00(local_78,pbVar12,5);
          pbVar15 = pbVar1 + 0x180;
          FUN_14270f8c0(pbVar15,pbVar13,pbVar1);
          FUN_14270ee00(local_78,pbVar15,7);
          FUN_14270f580(pbVar1 + 0x60,pbVar1 + 0x60);
          FUN_14270ee00(local_78,pbVar1 + 0x60,8);
          FUN_14270f580(pbVar13,pbVar13);
          FUN_14270ee00(local_78,pbVar13,0xc);
          FUN_14270f580(pbVar12,pbVar12);
          FUN_14270ee00(local_78,pbVar12,10);
          FUN_14270f580(pbVar15,pbVar15);
          FUN_14270ee00(local_78,pbVar15,0xe);
          FUN_14270f8c0(pbVar13,pbVar13,pbVar1);
          FUN_14270ee00(local_78,pbVar13,0xd);
          FUN_14270f8c0(pbVar12,pbVar12,pbVar1);
          FUN_14270ee00(local_78,pbVar12,0xb);
          FUN_14270f8c0(pbVar15,pbVar15,pbVar1);
          FUN_14270ee00(local_78,pbVar15,0xf);
          FUN_14270f8c0(pbVar13,pbVar1 + 0x60,pbVar1);
          FUN_14270ee00(local_78,pbVar13,9);
          FUN_14270f580(pbVar1 + 0x60,pbVar1 + 0x60);
          FUN_14270ee00(local_78,pbVar1 + 0x60,0x10);
          local_78 = local_78 + 0x600;
          local_70 = local_70 + 0x21;
          local_48 = local_48 + 1;
          pbVar22 = pbVar22 + 8;
        } while (local_48 < param_5);
      }
      local_70._0_4_ = 0xff;
      FUN_14270ee60(pbVar1,pbVar21,(pbVar6[0x1f] >> 6 & 1) - ((char)pbVar6[0x1f] >> 7));
      uVar2 = *(undefined8 *)(pbVar1 + 8);
      *param_2 = *(undefined8 *)pbVar1;
      param_2[1] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x18);
      param_2[2] = *(undefined8 *)(pbVar1 + 0x10);
      param_2[3] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x28);
      param_2[4] = *(undefined8 *)(pbVar1 + 0x20);
      param_2[5] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x38);
      param_2[6] = *(undefined8 *)(pbVar1 + 0x30);
      param_2[7] = uVar2;
      uVar20 = *(undefined4 *)(pbVar1 + 0x44);
      uVar24 = *(undefined4 *)(pbVar1 + 0x48);
      uVar3 = *(undefined4 *)(pbVar1 + 0x4c);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pbVar1 + 0x40);
      *(undefined4 *)((longlong)param_2 + 0x44) = uVar20;
      *(undefined4 *)(param_2 + 9) = uVar24;
      *(undefined4 *)((longlong)param_2 + 0x4c) = uVar3;
      uVar2 = *(undefined8 *)(pbVar1 + 0x58);
      param_2[10] = *(undefined8 *)(pbVar1 + 0x50);
      param_2[0xb] = uVar2;
      do {
        uVar11 = (ulonglong)((uint)local_70 == 0xff);
        if (uVar11 < param_5) {
          uVar9 = (uint)local_70 - 1 >> 3;
          pbVar13 = pbVar21 + uVar11 * 0x600;
          lVar8 = uVar11 * 0x21;
          lVar23 = param_5 - uVar11;
          do {
            uVar10 = (ushort)(CONCAT11(pbVar6[lVar8 + (ulonglong)(uVar9 + 1)],
                                       pbVar6[lVar8 + (ulonglong)uVar9]) >>
                             ((byte)((uint)local_70 - 1) & 7)) & 0x3f;
            uVar16 = (uVar10 >> 5) - 1;
            uVar17 = ~uVar16;
            uVar10 = 0x3f - uVar10 & uVar17 | uVar16 & uVar10;
            uVar10 = (uVar17 & 1) + ((uVar10 >> 1) + (uVar10 & 1)) * 2;
            FUN_14270ee60(pbVar1,pbVar13,uVar10 >> 1);
            FUN_14270d4c0(pbVar1 + 0x80,pbVar1 + 0x20);
            uVar19 = -(ulonglong)(uVar10 & 1);
            uVar11 = ~uVar19;
            *(ulonglong *)(pbVar1 + 0x20) =
                 uVar11 & *(ulonglong *)(pbVar1 + 0x20) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x80);
            *(ulonglong *)(pbVar1 + 0x28) =
                 uVar19 & *(ulonglong *)(pbVar1 + 0x88) ^ *(ulonglong *)(pbVar1 + 0x28) & uVar11;
            *(ulonglong *)(pbVar1 + 0x30) =
                 *(ulonglong *)(pbVar1 + 0x30) & uVar11 ^ *(ulonglong *)(pbVar1 + 0x90) & uVar19;
            *(ulonglong *)(pbVar1 + 0x38) =
                 uVar11 & *(ulonglong *)(pbVar1 + 0x38) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x98);
            FUN_14270f8c0(param_2,param_2,pbVar1);
            lVar8 = lVar8 + 0x21;
            pbVar13 = pbVar13 + 0x600;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        local_70._0_4_ = (uint)local_70 - 5;
        FUN_14270f580(param_2,param_2);
        FUN_14270f580(param_2,param_2);
        FUN_14270f580(param_2,param_2);
        FUN_14270f580(param_2,param_2);
        FUN_14270f580(param_2,param_2);
        pbVar13 = pbVar6;
      } while (4 < (uint)local_70);
      for (; param_5 != 0; param_5 = param_5 - 1) {
        uVar10 = *pbVar13 & 0x1f;
        uVar16 = (uVar10 >> 4) - 1;
        uVar17 = ~uVar16;
        uVar9 = uVar10 * -2 + 0x3f & uVar17;
        uVar9 = (uVar17 & 1) + (((uVar9 | uVar16 & uVar10 * 2) >> 1) + (uVar9 & 1)) * 2;
        FUN_14270ee60(pbVar1,pbVar21,uVar9 >> 1);
        FUN_14270d4c0(pbVar1 + 0x80,pbVar1 + 0x20);
        uVar19 = -(ulonglong)(uVar9 & 1);
        uVar11 = ~uVar19;
        *(ulonglong *)(pbVar1 + 0x20) =
             uVar11 & *(ulonglong *)(pbVar1 + 0x20) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x80);
        *(ulonglong *)(pbVar1 + 0x28) =
             uVar19 & *(ulonglong *)(pbVar1 + 0x88) ^ *(ulonglong *)(pbVar1 + 0x28) & uVar11;
        *(ulonglong *)(pbVar1 + 0x30) =
             *(ulonglong *)(pbVar1 + 0x30) & uVar11 ^ *(ulonglong *)(pbVar1 + 0x90) & uVar19;
        *(ulonglong *)(pbVar1 + 0x38) =
             uVar11 & *(ulonglong *)(pbVar1 + 0x38) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x98);
        FUN_14270f8c0(param_2,param_2,pbVar1);
        pbVar21 = pbVar21 + 0x600;
        pbVar13 = pbVar13 + 0x21;
      }
      pbVar13 = &DAT_00000001;
      goto LAB_1452ae405;
    }
  }
  FUN_144ba24f0(0x10,0xf2,0x41,"crypto\\ec\\ecp_nistz256.c",0x27a);
LAB_1452ae405:
  FUN_144ea6530(pbVar5,"crypto\\ec\\ecp_nistz256.c",0x30a);
  FUN_144ea6530(pbVar6,"crypto\\ec\\ecp_nistz256.c",0x30b);
  FUN_144ea6530(pbVar7,"crypto\\ec\\ecp_nistz256.c",0x30c);
  return pbVar13;
}



// FUNCTION 1452ae4c0 FUN_1452ae4c0 body=319 status=ok
// SIG undefined FUN_1452ae4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452ae4c0(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_145299290(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 4) {
    iVar1 = FUN_145299290(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 4) {
      puVar2 = (ulonglong *)FUN_145299350(*(undefined8 *)(param_1 + 0x10));
      uVar4 = puVar2[2] ^ 0x79fb732b77622510 | puVar2[3] ^ 0x18905f76a53755c6 |
              puVar2[1] ^ 0x75ba95fc5fedb601 | *puVar2 ^ 0x79e730d418a9143c;
      if (0x7fffffffffffffff < ~(-uVar4 | uVar4)) {
        puVar2 = (ulonglong *)FUN_145299350(*(undefined8 *)(param_1 + 0x18));
        uVar4 = puVar2[2] ^ 0xd2e88688dd21f325 | puVar2[1] ^ 0x8b4ab8e4ba19e45c |
                puVar2[3] ^ 0x8571ff1825885d85 | *puVar2 ^ 0xddf25357ce95560a;
        if (0x7fffffffffffffff < ~(-uVar4 | uVar4)) {
          lVar3 = FUN_1452ad7e0(*(undefined8 *)(param_1 + 0x20));
          if (lVar3 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1452ae600 FUN_1452ae600 body=19 status=ok
// SIG undefined FUN_1452ae600(void)

longlong FUN_1452ae600(longlong param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1452ae620 FUN_1452ae620 body=148 status=ok
// SIG undefined FUN_1452ae620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ae620(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *plVar4;
        while (lVar5 != 0) {
          FUN_144efc7a0(lVar5);
          plVar2 = plVar4 + 1;
          plVar4 = plVar4 + 1;
          lVar5 = *plVar2;
        }
        FUN_144ea6530(*(undefined8 *)(param_1 + 0x20),"crypto\\ec\\ec_mult.c",0x62);
      }
      FUN_144e98660(*(undefined8 *)(param_1 + 0x38));
      FUN_144ea6530(param_1,"crypto\\ec\\ec_mult.c",0x65);
    }
  }
  return;
}



// FUNCTION 1452ae6c0 FUN_1452ae6c0 body=3301 status=ok
// SIG undefined FUN_1452ae6c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452ae6c0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,longlong *param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  void *_Dst;
  undefined8 *puVar11;
  size_t *psVar12;
  ulonglong uVar13;
  longlong *plVar14;
  void *_Src;
  longlong *plVar15;
  longlong *plVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 uVar20;
  uint local_res8;
  uint local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  local_40 = (longlong *)0x1452ae6df;
  plVar18 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  local_78 = 0;
  local_60 = 0;
  local_b0 = (longlong *)0x0;
  local_48 = 0;
  local_res8 = 0;
  local_98 = (char *)0x0;
  local_88 = (longlong *)0x0;
  local_90 = 0;
  local_a0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_d0 = 0;
  iVar4 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x10));
  if ((iVar4 != 0) || (iVar4 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x18)), iVar4 != 0)) {
LAB_1452ae7dd:
    plVar14 = plVar18;
    plVar16 = plVar18;
    if (param_3 != 0) goto LAB_1452ae7e6;
    goto LAB_1452ae8ff;
  }
  if (param_3 != *(longlong *)(param_1 + 0x10)) {
    if (param_3 != 0) {
      if (param_4 == (longlong *)0x0) {
        uVar7 = FUN_1452af3b0(param_1,param_2,param_3,0,param_7);
        return uVar7;
      }
      goto LAB_1452ae7a2;
    }
LAB_1452ae7a7:
    if ((param_4 == (longlong *)&DAT_00000001) && (*param_6 != *(longlong *)(param_1 + 0x10))) {
      uVar7 = FUN_1452af3b0(param_1,param_2,*param_6,*param_5,param_7);
      return uVar7;
    }
    goto LAB_1452ae7dd;
  }
LAB_1452ae7a2:
  if (param_3 == 0) goto LAB_1452ae7a7;
LAB_1452ae7e6:
  local_78 = FUN_144efc0f0(param_1);
  if (local_78 == 0) {
    FUN_144ba24f0(0x10,0xbb,0x71,"crypto\\ec\\ec_mult.c",0x1cf);
    uVar7 = 0;
    plVar14 = plVar18;
    goto LAB_1452aec2f;
  }
  plVar16 = *(longlong **)(param_1 + 0xa0);
  if (((plVar16 != (longlong *)0x0) && (plVar16[2] != 0)) &&
     (local_58 = plVar16, iVar4 = FUN_144efcf30(param_1,local_78,*(undefined8 *)plVar16[4],param_7),
     iVar4 == 0)) {
    plVar14 = (longlong *)plVar16[1];
    local_b0 = plVar14;
    iVar4 = FUN_144ba03d0(param_3);
    plVar15 = (longlong *)plVar16[2];
    plVar14 = (longlong *)((ulonglong)(longlong)iVar4 / (ulonglong)plVar14 + 1);
    if (plVar15 < plVar14) {
      plVar14 = plVar15;
    }
    local_48 = 1L << ((char)plVar16[3] - 1U & 0x3f);
    local_c0 = plVar14;
    if (plVar16[5] == (longlong)plVar15 * local_48) goto LAB_1452ae8ff;
    uVar7 = 0x1eb;
    goto LAB_1452ae8bb;
  }
  plVar14 = (longlong *)&DAT_00000001;
  local_58 = (longlong *)0x0;
  local_c0 = (longlong *)&DAT_00000001;
  plVar16 = (longlong *)0x0;
  local_d0 = 1;
LAB_1452ae8ff:
  local_b8 = (longlong *)((longlong)plVar14 + (longlong)param_4);
  lVar9 = (longlong)local_b8 * 8;
  local_98 = (char *)FUN_144ea64e0(lVar9,"crypto\\ec\\ec_mult.c",0x1f9);
  local_90 = FUN_144ea64e0(lVar9,"crypto\\ec\\ec_mult.c",0x1fa);
  local_88 = (longlong *)FUN_144ea64e0(lVar9 + 8,"crypto\\ec\\ec_mult.c",0x1fc);
  local_c8 = (longlong *)FUN_144ea64e0(lVar9,"crypto\\ec\\ec_mult.c",0x1fd);
  if (local_88 != (longlong *)0x0) {
    *local_88 = 0;
  }
  if (((local_98 == (char *)0x0) || (local_90 == 0)) ||
     ((local_88 == (longlong *)0x0 || (local_c8 == (longlong *)0x0)))) {
    uVar7 = 0x204;
    uVar20 = 0x41;
LAB_1452ae8c1:
    FUN_144ba24f0(0x10,0xbb,uVar20,"crypto\\ec\\ec_mult.c",uVar7);
LAB_1452aec2b:
    uVar7 = 0;
    plVar14 = (longlong *)0x0;
    goto LAB_1452aec2f;
  }
  local_70 = (longlong *)((ulonglong)local_d0 + (longlong)param_4);
  local_68 = 0;
  if (local_70 != (longlong *)0x0) {
    local_a8 = (longlong *)((longlong)local_88 - (longlong)param_6);
    local_80 = (longlong)local_98 - (longlong)param_6;
    local_40 = local_a8 + 1;
    local_50 = (longlong *)(local_90 - (longlong)param_6);
    plVar14 = plVar18;
    do {
      lVar9 = local_80;
      lVar8 = param_3;
      if (plVar14 < param_4) {
        lVar8 = *param_6;
      }
      uVar5 = FUN_144ba03d0(lVar8);
      if (uVar5 < 2000) {
        if (uVar5 < 800) {
          if (uVar5 < 300) {
            if (uVar5 < 0x46) {
              lVar8 = 2 - (ulonglong)(uVar5 < 0x14);
            }
            else {
              lVar8 = 3;
            }
          }
          else {
            lVar8 = 4;
          }
        }
        else {
          lVar8 = 5;
        }
      }
      else {
        lVar8 = 6;
      }
      *(longlong *)(lVar9 + (longlong)param_6) = lVar8;
      local_68 = local_68 + (1L << ((char)lVar8 - 1U & 0x3f));
      *(undefined8 *)((longlong)local_40 + (longlong)param_6) = 0;
      lVar9 = param_3;
      if (plVar14 < param_4) {
        lVar9 = *param_6;
      }
      puVar11 = (undefined8 *)((longlong)local_50 + (longlong)param_6);
      lVar9 = FUN_145299060(lVar9,*(undefined4 *)(local_80 + (longlong)param_6),puVar11);
      *(longlong *)((longlong)local_a8 + (longlong)param_6) = lVar9;
      if (lVar9 == 0) goto LAB_1452aec2b;
      if (local_a0 < (longlong *)*puVar11) {
        local_a0 = (longlong *)*puVar11;
      }
      plVar14 = (longlong *)((longlong)plVar14 + 1);
      param_6 = param_6 + 1;
    } while (plVar14 < local_70);
  }
  plVar14 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    if (plVar16 != (longlong *)0x0) {
      local_c0 = (longlong *)0x0;
      if (local_d0 != 0) {
        uVar7 = 0x22b;
        goto LAB_1452ae8bb;
      }
      uVar13 = plVar16[3];
      *(ulonglong *)(local_98 + (longlong)param_4 * 8) = uVar13;
      pvVar10 = (void *)FUN_145299060(param_3,uVar13 & 0xffffffff,&local_c0);
      if (pvVar10 != (void *)0x0) {
        if (local_c0 <= local_a0) {
          local_b8 = (longlong *)((longlong)param_4 + 1);
          local_88[(longlong)param_4] = (longlong)pvVar10;
          local_88[(longlong)param_4 + 1] = 0;
          *(longlong **)(local_90 + (longlong)param_4 * 8) = local_c0;
          local_c8[(longlong)param_4] = plVar16[4];
          goto LAB_1452aeefb;
        }
        if (local_c0 < (longlong *)((longlong)plVar14 * (longlong)local_b0)) {
          uVar13 = (ulonglong)((longlong)local_b0 + -1 + (longlong)local_c0) / (ulonglong)local_b0;
          if ((ulonglong)plVar16[2] < uVar13) {
            FUN_144ba24f0(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x256);
            uVar7 = 599;
LAB_1452aec1c:
            FUN_144ea6530(pvVar10,"crypto\\ec\\ec_mult.c",uVar7);
            goto LAB_1452aec2b;
          }
          local_b8 = (longlong *)(uVar13 + (longlong)param_4);
        }
        plVar14 = (longlong *)local_58[4];
        if (param_4 < local_b8) {
          local_50 = (longlong *)((longlong)local_b8 + -1);
          local_80 = (longlong)local_88 - local_90;
          psVar12 = (size_t *)(local_90 + (longlong)param_4 * 8);
          local_a8 = (longlong *)((longlong)local_c8 - local_90);
          _Src = pvVar10;
          plVar16 = param_4;
          do {
            if (plVar16 < local_50) {
              *psVar12 = (size_t)local_b0;
              if (local_c0 < local_b0) {
                FUN_144ba24f0(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x265);
                uVar7 = 0x266;
                goto LAB_1452aec1c;
              }
              local_c0 = (longlong *)((longlong)local_c0 - (longlong)local_b0);
            }
            else {
              *psVar12 = (size_t)local_c0;
            }
            *(undefined8 *)(local_80 + 8 + (longlong)psVar12) = 0;
            _Dst = (void *)FUN_144ea64e0(*psVar12,"crypto\\ec\\ec_mult.c",0x272);
            *(void **)(local_80 + (longlong)psVar12) = _Dst;
            if (_Dst == (void *)0x0) {
              FUN_144ba24f0(0x10,0xbb,0x41,"crypto\\ec\\ec_mult.c",0x274);
              uVar7 = 0x275;
              goto LAB_1452aec1c;
            }
            memcpy(_Dst,_Src,*psVar12);
            if (local_a0 < (longlong *)*psVar12) {
              local_a0 = (longlong *)*psVar12;
            }
            if (*plVar14 == 0) {
              FUN_144ba24f0(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x27d);
              uVar7 = 0x27e;
              goto LAB_1452aec1c;
            }
            plVar16 = (longlong *)((longlong)plVar16 + 1);
            _Src = (void *)((longlong)_Src + (longlong)local_b0);
            *(longlong **)((longlong)local_a8 + (longlong)psVar12) = plVar14;
            psVar12 = psVar12 + 1;
            plVar14 = plVar14 + local_48;
          } while (plVar16 < local_b8);
        }
        FUN_144ea6530(pvVar10,"crypto\\ec\\ec_mult.c",0x285);
        goto LAB_1452aeefb;
      }
      goto LAB_1452aec2b;
    }
    if (local_d0 != 1) {
      uVar7 = 0x222;
LAB_1452ae8bb:
      uVar20 = 0x44;
      goto LAB_1452ae8c1;
    }
  }
LAB_1452aeefb:
  lVar9 = local_68;
  plVar14 = (longlong *)FUN_144ea64e0(local_68 * 8 + 8,"crypto\\ec\\ec_mult.c",0x28f);
  if (plVar14 == (longlong *)0x0) {
    FUN_144ba24f0(0x10,0xbb,0x41,"crypto\\ec\\ec_mult.c",0x291);
LAB_1452aef4a:
    uVar7 = 0;
  }
  else {
    local_a8 = plVar14 + lVar9;
    *local_a8 = 0;
    plVar16 = plVar14;
    if (local_70 != (longlong *)0x0) {
      lVar9 = (longlong)local_c8 - (longlong)local_98;
      plVar15 = plVar18;
      pcVar17 = local_98;
      do {
        *(longlong **)(pcVar17 + lVar9) = plVar16;
        plVar19 = plVar18;
        do {
          lVar8 = FUN_144efc690(param_1);
          *plVar16 = lVar8;
          if (lVar8 == 0) goto LAB_1452af3a0;
          plVar16 = plVar16 + 1;
          plVar19 = (longlong *)((longlong)plVar19 + 1);
        } while (plVar19 < (longlong *)(1L << (*pcVar17 - 1U & 0x3f)));
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        pcVar17 = pcVar17 + 8;
      } while (plVar15 < local_70);
    }
    plVar15 = local_70;
    if (plVar16 != local_a8) {
      FUN_144ba24f0(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x2a2);
LAB_1452aeff5:
      uVar7 = 0;
      goto LAB_1452aec2f;
    }
    local_60 = FUN_144efc690(param_1);
    if (local_60 == 0) {
LAB_1452af3a0:
      uVar7 = 0;
      goto LAB_1452aec2f;
    }
    if (plVar15 != (longlong *)0x0) {
      local_a8 = (longlong *)((longlong)param_5 - (longlong)local_c8);
      lVar9 = (longlong)local_98 - (longlong)local_c8;
      plVar16 = local_c8;
      do {
        if (plVar18 < param_4) {
          iVar4 = FUN_144efc830(*(undefined8 *)*plVar16,
                                *(undefined8 *)((longlong)local_a8 + (longlong)plVar16));
          if (iVar4 == 0) {
            uVar7 = 0;
            goto LAB_1452aec2f;
          }
        }
        else {
          iVar4 = FUN_144efc830(*(undefined8 *)*plVar16,local_78);
          if (iVar4 == 0) goto LAB_1452aeff5;
        }
        if (1 < *(ulonglong *)((longlong)plVar16 + lVar9)) {
          iVar4 = FUN_144efcd10(param_1,local_60,*(undefined8 *)*plVar16,param_7);
          if (iVar4 == 0) goto LAB_1452aeff5;
          uVar13 = 1;
          if (1 < (ulonglong)(1L << (*(char *)((longlong)plVar16 + lVar9) - 1U & 0x3f))) {
            do {
              iVar4 = FUN_144efcc60(param_1,*(undefined8 *)(*plVar16 + uVar13 * 8),
                                    *(undefined8 *)(*plVar16 + -8 + uVar13 * 8),local_60,param_7);
              if (iVar4 == 0) goto LAB_1452aeff5;
              uVar13 = uVar13 + 1;
            } while (uVar13 < (ulonglong)(1L << (*(char *)((longlong)plVar16 + lVar9) - 1U & 0x3f)))
            ;
          }
        }
        plVar18 = (longlong *)((longlong)plVar18 + 1);
        plVar16 = plVar16 + 1;
      } while (plVar18 < local_70);
    }
    iVar4 = FUN_144efd050(param_1,local_68,plVar14,param_7);
    if (iVar4 == 0) goto LAB_1452aef4a;
    bVar3 = true;
    iVar4 = (int)local_a0 + -1;
    if (iVar4 < 0) {
LAB_1452af36b:
      iVar4 = FUN_144efc8b0(param_1,param_2);
      if (iVar4 == 0) goto LAB_1452aef4a;
    }
    else {
      local_b0 = (longlong *)(longlong)iVar4;
      plVar18 = local_b8;
      do {
        plVar16 = (longlong *)0x0;
        if ((!bVar3) && (iVar6 = FUN_144efcd10(param_1,param_2,param_2,param_7), iVar6 == 0))
        goto LAB_1452aeff5;
        if (plVar18 != (longlong *)0x0) {
          lVar9 = local_90 - (longlong)local_88;
          uVar13 = (ulonglong)iVar4;
          lVar8 = (longlong)local_88 - (longlong)local_c8;
          plVar15 = local_c8;
          local_78 = uVar13;
          do {
            plVar18 = (longlong *)((longlong)plVar15 + lVar8);
            if ((uVar13 < *(ulonglong *)((longlong)plVar18 + lVar9)) &&
               (cVar1 = *(char *)((longlong)local_b0 + *plVar18), iVar6 = (int)cVar1, cVar1 != '\0')
               ) {
              iVar2 = -iVar6;
              if (-(iVar6 >> 0x1f) == 0) {
                iVar2 = iVar6;
              }
              if (-(iVar6 >> 0x1f) != local_res8) {
                if ((!bVar3) && (iVar6 = FUN_144efcdb0(param_1,param_2,param_7), iVar6 == 0))
                goto LAB_1452aeff5;
                local_res8 = (uint)(local_res8 == 0);
              }
              if (bVar3) {
                iVar6 = FUN_144efc830(param_2,*(undefined8 *)(*plVar15 + ((longlong)iVar2 >> 1) * 8)
                                     );
                if (iVar6 == 0) goto LAB_1452aeff5;
                iVar6 = FUN_144efd3e0(param_1,param_2,param_7);
                if (iVar6 == 0) {
                  FUN_144ba24f0(0x10,0xbb,0xa3,"crypto\\ec\\ec_mult.c",0x2f1);
                  uVar7 = 0;
                  goto LAB_1452aec2f;
                }
                bVar3 = false;
                uVar13 = local_78;
              }
              else {
                iVar6 = FUN_144efcc60(param_1,param_2,param_2,
                                      *(undefined8 *)(*plVar15 + ((longlong)iVar2 >> 1) * 8),param_7
                                     );
                uVar13 = local_78;
                if (iVar6 == 0) goto LAB_1452aeff5;
              }
            }
            plVar16 = (longlong *)((longlong)plVar16 + 1);
            plVar15 = plVar15 + 1;
            plVar18 = local_b8;
          } while (plVar16 < local_b8);
        }
        iVar4 = iVar4 + -1;
        local_b0 = (longlong *)((longlong)local_b0 + -1);
      } while (-1 < iVar4);
      if (bVar3) goto LAB_1452af36b;
      if (local_res8 != 0) {
        iVar4 = FUN_144efcdb0(param_1,param_2,param_7);
        if (iVar4 != 0) {
          uVar7 = 1;
          goto LAB_1452aec2f;
        }
        goto LAB_1452aeff5;
      }
    }
    uVar7 = 1;
  }
LAB_1452aec2f:
  FUN_144efc7a0(local_60);
  FUN_144ea6530(local_98,"crypto\\ec\\ec_mult.c",0x30d);
  FUN_144ea6530(local_90,"crypto\\ec\\ec_mult.c",0x30e);
  plVar18 = local_88;
  if (local_88 != (longlong *)0x0) {
    lVar9 = *local_88;
    plVar16 = local_88;
    while (lVar9 != 0) {
      FUN_144ea6530(lVar9,"crypto\\ec\\ec_mult.c",0x313);
      plVar15 = plVar16 + 1;
      plVar16 = plVar16 + 1;
      lVar9 = *plVar15;
    }
    FUN_144ea6530(plVar18,"crypto\\ec\\ec_mult.c",0x315);
  }
  if (plVar14 != (longlong *)0x0) {
    lVar9 = *plVar14;
    plVar18 = plVar14;
    while (lVar9 != 0) {
      FUN_144efc7e0(lVar9);
      plVar16 = plVar18 + 1;
      plVar18 = plVar18 + 1;
      lVar9 = *plVar16;
    }
    FUN_144ea6530(plVar14,"crypto\\ec\\ec_mult.c",0x31b);
  }
  FUN_144ea6530(local_c8,"crypto\\ec\\ec_mult.c",0x31d);
  return uVar7;
}



// FUNCTION 1452af3b0 FUN_1452af3b0 body=1678 status=ok
// SIG undefined FUN_1452af3b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452af3b0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffffa8;
  uint local_44;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar8 = 0;
  local_44 = 0;
  if ((param_4 != 0) && (iVar1 = FUN_144efce30(param_1,param_4), iVar1 != 0)) {
    uVar6 = FUN_144efc8b0(param_1,param_2);
    return uVar6;
  }
  iVar1 = FUN_144ba0340(param_1[2]);
  if (iVar1 != 0) {
    FUN_144ba24f0(0x10,0x11c,0x72,"crypto\\ec\\ec_mult.c",CONCAT44(uVar13,0x9c));
    return 0;
  }
  iVar1 = FUN_144ba0340(param_1[3]);
  if (iVar1 != 0) {
    FUN_144ba24f0(0x10,0x11c,0xa4,"crypto\\ec\\ec_mult.c",CONCAT44(uVar13,0xa0));
    return 0;
  }
  FUN_144eede20(param_5);
  lVar7 = FUN_144efc690(param_1);
  if ((lVar7 == 0) || (lVar8 = FUN_144efc690(param_1), lVar8 == 0)) {
    uVar9 = 0xa8;
LAB_1452af9e5:
    uVar13 = 0x41;
  }
  else if (param_4 == 0) {
    iVar1 = FUN_144efc830(lVar7,param_1[1]);
    if (iVar1 != 0) goto LAB_1452af50b;
    uVar9 = 0xae;
    uVar13 = 0x10;
  }
  else {
    iVar1 = FUN_144efc830(lVar7,param_4);
    if (iVar1 == 0) {
      uVar9 = 0xb3;
      uVar13 = 0x10;
    }
    else {
LAB_1452af50b:
      FUN_144ba0220(*(undefined8 *)(lVar7 + 0x10),4);
      FUN_144ba0220(*(undefined8 *)(lVar7 + 0x18),4);
      FUN_144ba0220(*(undefined8 *)(lVar7 + 0x20),4);
      FUN_144ba0220(*(undefined8 *)(param_2 + 0x10),4);
      FUN_144ba0220(*(undefined8 *)(param_2 + 0x18),4);
      FUN_144ba0220(*(undefined8 *)(param_2 + 0x20),4);
      FUN_144ba0220(*(undefined8 *)(lVar8 + 0x10),4);
      FUN_144ba0220(*(undefined8 *)(lVar8 + 0x18),4);
      FUN_144ba0220(*(undefined8 *)(lVar8 + 0x20),4);
      uVar9 = FUN_144eede90(param_5);
      uVar10 = FUN_144eede90(param_5);
      lVar11 = FUN_144eede90(param_5);
      if (lVar11 == 0) {
        uVar9 = 0xc0;
        goto LAB_1452af9e5;
      }
      iVar1 = FUN_144eee590(uVar9,param_1[2],param_1[3],param_5);
      if (iVar1 == 0) {
        uVar9 = 0xc5;
        uVar13 = 3;
      }
      else {
        iVar1 = FUN_144ba03d0(uVar9);
        iVar2 = FUN_145299290(uVar9);
        iVar2 = iVar2 + 2;
        lVar12 = FUN_144ba1290(lVar11,iVar2);
        if ((lVar12 == 0) || (lVar12 = FUN_144ba1290(uVar10,iVar2), lVar12 == 0)) {
          uVar9 = 0xd3;
          uVar13 = 3;
        }
        else {
          lVar12 = FUN_144ba06b0(lVar11,param_3);
          if (lVar12 == 0) {
            uVar9 = 0xd8;
            uVar13 = 3;
          }
          else {
            FUN_144ba0220(lVar11,4);
            iVar3 = FUN_144ba03d0(lVar11);
            if (((iVar1 < iVar3) || (iVar3 = FUN_144ba0ba0(lVar11), iVar3 != 0)) &&
               (iVar3 = FUN_1452a55e0(lVar11,lVar11,uVar9,param_5), iVar3 == 0)) {
              uVar9 = 0xe4;
              uVar13 = 3;
            }
            else {
              iVar3 = FUN_144eee4f0(uVar10,lVar11,uVar9);
              if (iVar3 == 0) {
                uVar9 = 0xea;
                uVar13 = 3;
              }
              else {
                FUN_144ba0220(uVar10,4);
                iVar3 = FUN_144eee4f0(lVar11,uVar10,uVar9);
                if (iVar3 == 0) {
                  uVar9 = 0xef;
                  uVar13 = 3;
                }
                else {
                  iVar3 = FUN_144ba0d50(uVar10,iVar1);
                  FUN_144ba1070((longlong)iVar3,lVar11,uVar10,iVar2);
                  uVar13 = FUN_145299290(param_1[8]);
                  lVar12 = FUN_144ba1290(*(undefined8 *)(lVar8 + 0x10),uVar13);
                  if (((((lVar12 == 0) ||
                        (lVar12 = FUN_144ba1290(*(undefined8 *)(lVar8 + 0x18),uVar13), lVar12 == 0))
                       || ((lVar12 = FUN_144ba1290(*(undefined8 *)(lVar8 + 0x20),uVar13),
                           lVar12 == 0 ||
                           ((lVar12 = FUN_144ba1290(*(undefined8 *)(param_2 + 0x10),uVar13),
                            lVar12 == 0 ||
                            (lVar12 = FUN_144ba1290(*(undefined8 *)(param_2 + 0x18),uVar13),
                            lVar12 == 0)))))) ||
                      (lVar12 = FUN_144ba1290(*(undefined8 *)(param_2 + 0x20),uVar13), lVar12 == 0))
                     || (((lVar12 = FUN_144ba1290(*(undefined8 *)(lVar7 + 0x10),uVar13), lVar12 == 0
                          || (lVar12 = FUN_144ba1290(*(undefined8 *)(lVar7 + 0x18),uVar13),
                             lVar12 == 0)) ||
                         (lVar12 = FUN_144ba1290(*(undefined8 *)(lVar7 + 0x20),uVar13), lVar12 == 0)
                         ))) {
                    uVar9 = 0x103;
                    uVar13 = 3;
                  }
                  else if ((*(int *)(lVar7 + 0x28) == 0) &&
                          (iVar2 = FUN_144efcfd0(param_1,lVar7,param_5), iVar2 == 0)) {
                    uVar9 = 0x109;
                    uVar13 = 0x10;
                  }
                  else {
                    iVar2 = FUN_1452afa40(param_1,param_2,lVar8,lVar7,param_5);
                    if (iVar2 != 0) {
                      uVar5 = 1;
                      do {
                        iVar1 = iVar1 + -1;
                        if (iVar1 < 0) {
                          lVar11 = (longlong)(int)uVar5;
                          FUN_144ba1070(lVar11,*(undefined8 *)(param_2 + 0x10),
                                        *(undefined8 *)(lVar8 + 0x10),uVar13);
                          FUN_144ba1070(lVar11,*(undefined8 *)(param_2 + 0x18),
                                        *(undefined8 *)(lVar8 + 0x18),uVar13);
                          FUN_144ba1070(lVar11,*(undefined8 *)(param_2 + 0x20),
                                        *(undefined8 *)(lVar8 + 0x20),uVar13);
                          uVar5 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(lVar8 + 0x28)) & uVar5;
                          *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar5;
                          *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) ^ uVar5;
                          if ((*(code **)(*param_1 + 0x1a8) != (code *)0x0) &&
                             (iVar1 = (**(code **)(*param_1 + 0x1a8))
                                                (param_1,param_2,lVar8,lVar7,param_5), iVar1 == 0))
                          {
                            uVar9 = 0x16e;
                            uVar13 = 0x88;
                            goto LAB_1452af9f0;
                          }
                          local_44 = 1;
                          goto LAB_1452afa01;
                        }
                        uVar4 = FUN_144ba0d50(lVar11,iVar1);
                        lVar12 = (longlong)(int)(uVar4 ^ uVar5);
                        FUN_144ba1070(lVar12,*(undefined8 *)(param_2 + 0x10),
                                      *(undefined8 *)(lVar8 + 0x10),uVar13);
                        FUN_144ba1070(lVar12,*(undefined8 *)(param_2 + 0x18),
                                      *(undefined8 *)(lVar8 + 0x18),uVar13);
                        FUN_144ba1070(lVar12,*(undefined8 *)(param_2 + 0x20),
                                      *(undefined8 *)(lVar8 + 0x20),uVar13);
                        uVar5 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(lVar8 + 0x28)) &
                                (uVar4 ^ uVar5);
                        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar5;
                        *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) ^ uVar5;
                        iVar2 = FUN_1452afad0(param_1,param_2,lVar8,lVar7,param_5);
                        uVar5 = uVar4;
                      } while (iVar2 != 0);
                      FUN_144ba24f0(0x10,0x11c,0xa2,"crypto\\ec\\ec_mult.c",0x15f);
                      goto LAB_1452afa01;
                    }
                    uVar9 = 0x10f;
                    uVar13 = 0x99;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1452af9f0:
  FUN_144ba24f0(0x10,0x11c,uVar13,"crypto\\ec\\ec_mult.c",uVar9);
LAB_1452afa01:
  FUN_144efc7a0(lVar7);
  FUN_144efc7e0(lVar8);
  FUN_144eedf20(param_5);
  return (ulonglong)local_44;
}



// FUNCTION 1452afa40 FUN_1452afa40 body=143 status=ok
// SIG undefined FUN_1452afa40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452afa40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(code **)(*param_1 + 0x198) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001452afa7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x198))();
    return uVar2;
  }
  iVar1 = FUN_144efc830(param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_144efcd10(param_1,param_2,param_3,param_5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452afad0 FUN_1452afad0 body=149 status=ok
// SIG undefined FUN_1452afad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452afad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(code **)(*param_1 + 0x1a0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001452afb05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x1a0))();
    return uVar2;
  }
  iVar1 = FUN_144efcc60(param_1,param_3,param_2,param_3,param_5,0x1452afae0);
  if (iVar1 != 0) {
    iVar1 = FUN_144efcd10(param_1,param_2,param_2,param_5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452afb70 FUN_1452afb70 body=370 status=ok
// SIG undefined FUN_1452afb70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452afb70(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x1452afb83;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  lVar3 = 0;
  *param_3 = 0;
  iVar1 = FUN_144ba3ee0(param_1,0x200);
  if (iVar1 == 0) {
    lVar3 = FUN_144ba5700();
    if (lVar3 == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,0x22);
      FUN_144ba24f0(6,0x6b,0x41,"crypto\\evp\\p_sign.c");
      goto LAB_1452afcd2;
    }
    iVar2 = FUN_144ba5840(lVar3,param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_144ba5ca0(lVar3,local_88,local_98);
    }
    FUN_144ba5800(lVar3);
    if (iVar1 == 0) goto LAB_1452afcd2;
LAB_1452afc40:
    iVar1 = FUN_144ba6830(param_4);
    local_90 = (longlong)iVar1;
    lVar3 = FUN_144ed1530(param_4,0);
    if ((lVar3 != 0) && (iVar1 = FUN_144ed1ee0(lVar3), 0 < iVar1)) {
      local_a0 = FUN_144ba3d20(param_1);
      local_a8 = local_a8 & 0xffffffff00000000;
      iVar1 = FUN_144ed1710(lVar3,0xffffffff,0xf8,1);
      if (0 < iVar1) {
        local_a8 = (ulonglong)local_98[0];
        iVar1 = FUN_144ed1f60(lVar3,param_2,&local_90,local_88);
        if (0 < iVar1) {
          *param_3 = (undefined4)local_90;
        }
      }
    }
  }
  else {
    iVar1 = FUN_144ba5ca0(param_1,local_88,local_98);
    if (iVar1 != 0) goto LAB_1452afc40;
  }
  FUN_144ed16b0(lVar3);
LAB_1452afcd2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1452afd00 FUN_1452afd00 body=22 status=ok
// SIG undefined FUN_1452afd00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452afd00(void)

{
  FUN_144babbf0();
  return;
}



// FUNCTION 1452afd20 FUN_1452afd20 body=77 status=ok
// SIG undefined FUN_1452afd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452afd20(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144ea8d60(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = FUN_1452afd70(param_1,lVar1,param_3);
  return uVar2;
}



// FUNCTION 1452afd70 FUN_1452afd70 body=139 status=ok
// SIG undefined FUN_1452afd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1452afd70(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar4 = 0;
  if (-1 < param_3 + 1) {
    iVar4 = param_3 + 1;
  }
  iVar1 = FUN_144babbf0();
  while( true ) {
    if (iVar1 <= iVar4) {
      return -1;
    }
    puVar3 = (undefined8 *)FUN_144babc00(param_1,iVar4);
    iVar2 = FUN_14526beb0(*puVar3,param_2);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



// FUNCTION 1452afe00 FUN_1452afe00 body=75 status=ok
// SIG undefined FUN_1452afe00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452afe00(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_144babbf0();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_144babc00(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1452afe50 FUN_1452afe50 body=208 status=ok
// SIG undefined FUN_1452afe50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452afe50(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452afe6a;
  lVar3 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0x50;
    uVar4 = 0x43;
    lVar2 = lVar3;
  }
  else {
    lVar2 = *param_1;
    if ((lVar2 != 0) || (lVar2 = FUN_144babca0(), lVar2 != 0)) {
      lVar3 = FUN_144ed46d0(param_2);
      if (lVar3 == 0) goto LAB_1452afe9a;
      iVar1 = FUN_144bac1c0(lVar2,lVar3);
      if (iVar1 != 0) {
        if (*param_1 != 0) {
          return lVar2;
        }
        *param_1 = lVar2;
        return lVar2;
      }
    }
    uVar5 = 0x62;
    uVar4 = 0x41;
  }
  FUN_144ba24f0(0xb,0x87,uVar4,"crypto\\x509\\x509_att.c",uVar5,uVar6);
LAB_1452afe9a:
  FUN_144ed4710(lVar3);
  FUN_144babdb0(lVar2);
  return 0;
}



// FUNCTION 1452aff20 FUN_1452aff20 body=92 status=ok
// SIG undefined FUN_1452aff20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452aff20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452aff30;
  lVar1 = FUN_1452aff80(0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1452afe50(param_1,lVar1,param_3,param_4,param_5,uVar2);
  FUN_144ed4710(lVar1);
  return uVar2;
}



// FUNCTION 1452aff80 FUN_1452aff80 body=154 status=ok
// SIG undefined FUN_1452aff80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452aff80(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1452aff9a;
  lVar1 = FUN_144ea8d60(param_2);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xb,0x88,0x6d,"crypto\\x509\\x509_att.c",0xb1);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1452b0020(param_1,lVar1,param_3,param_4,param_5,uVar3);
    if (lVar2 == 0) {
      FUN_144ed0860(lVar1);
    }
  }
  return lVar2;
}



// FUNCTION 1452b0020 FUN_1452b0020 body=232 status=ok
// SIG undefined FUN_1452b0020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_1452b0020(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452b0040;
  if (((param_1 == (longlong *)0x0) || (plVar2 = (longlong *)*param_1, plVar2 == (longlong *)0x0))
     && (plVar2 = (longlong *)FUN_144ed46f0(), plVar2 == (longlong *)0x0)) {
    FUN_144ba24f0(0xb,0x89,0x41,"crypto\\x509\\x509_att.c",0xc4,uVar4);
  }
  else {
    if (param_2 != 0) {
      FUN_144ed0860(*plVar2);
      lVar3 = FUN_14526bd70(param_2);
      *plVar2 = lVar3;
      if ((lVar3 != 0) && (iVar1 = FUN_1452b0110(plVar2,param_3,param_4,param_5), iVar1 != 0)) {
        if (param_1 == (longlong *)0x0) {
          return plVar2;
        }
        if (*param_1 != 0) {
          return plVar2;
        }
        *param_1 = (longlong)plVar2;
        return plVar2;
      }
    }
    if ((param_1 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      FUN_144ed4710(plVar2);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1452b0110 FUN_1452b0110 body=367 status=ok
// SIG undefined FUN_1452b0110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b0110(undefined8 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452b012c;
  lVar5 = 0;
  lVar3 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((param_2 & 0x1000) == 0) {
    uVar4 = 0;
    if ((param_4 != -1) &&
       ((lVar3 = FUN_144f03c50(param_2), lVar3 == 0 ||
        (iVar2 = FUN_144f03d00(lVar3,param_3,param_4), uVar4 = param_2, iVar2 == 0))))
    goto LAB_1452b0231;
  }
  else {
    uVar1 = FUN_144ea8fa0(*param_1);
    lVar3 = FUN_1452a13b0(0,param_3,param_4,param_2,uVar1);
    if (lVar3 == 0) {
      FUN_144ba24f0(0xb,0x8a,0xd,"crypto\\x509\\x509_att.c",0x101,uVar6);
      return 0;
    }
    uVar4 = *(uint *)(lVar3 + 4);
  }
  if (param_2 == 0) {
    FUN_144f03a80(lVar3);
    return 1;
  }
  lVar5 = FUN_144efe770();
  if (lVar5 != 0) {
    if ((param_4 == -1) && ((param_2 & 0x1000) == 0)) {
      iVar2 = FUN_144ed0610(lVar5,param_2,param_3);
      if (iVar2 == 0) goto LAB_1452b0231;
    }
    else {
      FUN_144ed0590(lVar5,uVar4,lVar3);
      lVar3 = 0;
    }
    iVar2 = FUN_144bac1c0(param_1[1],lVar5);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_1452b0231:
  FUN_144ba24f0(0xb,0x8a,0x41,"crypto\\x509\\x509_att.c",0x122);
  FUN_144efe790(lVar5);
  FUN_144f03a80(lVar3);
  return 0;
}



// FUNCTION 1452b0280 FUN_1452b0280 body=38 status=ok
// SIG undefined FUN_1452b0280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b0280(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



// FUNCTION 1452b02b0 FUN_1452b02b0 body=12 status=ok
// SIG undefined FUN_1452b02b0(void)

undefined8 FUN_1452b02b0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 1452b02c0 FUN_1452b02c0 body=38 status=ok
// SIG undefined FUN_1452b02c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b02c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144babc00(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



// FUNCTION 1452b02f0 FUN_1452b02f0 body=11 status=ok
// SIG undefined FUN_1452b02f0(void)

undefined4 FUN_1452b02f0(longlong *param_1,longlong param_2)

{
  return *(undefined4 *)((longlong)*(int *)(param_2 + 4) + *param_1);
}



// FUNCTION 1452b0300 FUN_1452b0300 body=14 status=ok
// SIG undefined FUN_1452b0300(void)

undefined4 FUN_1452b0300(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((longlong)*(int *)(param_3 + 4) + *param_1);
  uVar1 = *puVar2;
  *puVar2 = param_2;
  return uVar1;
}



// FUNCTION 1452b0310 FUN_1452b0310 body=7 status=ok
// SIG undefined FUN_1452b0310(void)

longlong FUN_1452b0310(longlong *param_1,longlong param_2)

{
  return (ulonglong)*(uint *)(param_2 + 8) + *param_1;
}



// FUNCTION 1452b0320 FUN_1452b0320 body=266 status=ok
// SIG undefined FUN_1452b0320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * FUN_1452b0320(longlong *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1452b0335;
  if ((*param_2 & 0x300) == 0) {
    return param_2;
  }
  lVar4 = (**(code **)(param_2 + 6))();
  if (*(longlong *)((ulonglong)*(uint *)(lVar4 + 4) + *param_1) == 0) {
    puVar1 = *(uint **)(lVar4 + 0x28);
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      iVar2 = FUN_144ef1170();
    }
    else {
      iVar2 = FUN_144ea8fa0();
    }
    if ((*(code **)(lVar4 + 8) != (code *)0x0) && (iVar3 = (**(code **)(lVar4 + 8))(), iVar3 == 0))
    {
      uVar6 = 0xe2;
      goto LAB_1452b03f4;
    }
    iVar3 = 0;
    piVar5 = *(int **)(lVar4 + 0x10);
    if (0 < *(int *)(lVar4 + 0x18)) {
      do {
        if (*piVar5 == iVar2) {
          return (uint *)(piVar5 + 2);
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 10;
      } while (iVar3 < *(int *)(lVar4 + 0x18));
    }
    puVar1 = *(uint **)(lVar4 + 0x20);
  }
  if (puVar1 != (uint *)0x0) {
    return puVar1;
  }
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  uVar6 = 0xfb;
LAB_1452b03f4:
  FUN_144ba24f0(0xd,0x6e,0xa4,"crypto\\asn1\\tasn_utl.c",uVar6,uVar7);
  return (uint *)0x0;
}



// FUNCTION 1452b0430 FUN_1452b0430 body=223 status=ok
// SIG undefined FUN_1452b0430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1452b0430(longlong *param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1452b043c;
  iVar3 = -1;
  if ((((*param_3 == '\x01') || (*param_3 == '\x06')) &&
      (lVar1 = *(longlong *)(param_3 + 0x18), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    piVar2 = (int *)((longlong)*(int *)(lVar1 + 0xc) + *param_1);
    plVar4 = (longlong *)((longlong)*(int *)(lVar1 + 0x10) + *param_1);
    if (param_2 == -1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        FUN_144e98660(*plVar4);
        *plVar4 = 0;
      }
    }
    else if (param_2 == 0) {
      iVar3 = 1;
      *piVar2 = 1;
      lVar1 = FUN_144e985a0();
      *plVar4 = lVar1;
      if (lVar1 == 0) {
        FUN_144ba24f0(0xd,0xe9,0x41,"crypto\\asn1\\tasn_utl.c",0x4f,uVar5);
        return -1;
      }
    }
    else if (param_2 == 1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return iVar3 + 1;
    }
    return iVar3;
  }
  return 0;
}



// FUNCTION 1452b0510 FUN_1452b0510 body=53 status=ok
// SIG undefined FUN_1452b0510(void)

void FUN_1452b0510(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 1452b0550 FUN_1452b0550 body=101 status=ok
// SIG undefined FUN_1452b0550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452b0550(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    FUN_144ea6530(*puVar2,"crypto\\asn1\\tasn_utl.c",0x83);
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 1452b05c0 FUN_1452b05c0 body=149 status=ok
// SIG undefined FUN_1452b05c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b05c0(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) &&
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 != 0)) &&
     ((((*(byte *)(lVar1 + 8) & 2) != 0 &&
       (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_3),
       puVar2 != (undefined8 *)0x0)) && (*(int *)((longlong)puVar2 + 0xc) == 0)))) {
    if (param_2 != (longlong *)0x0) {
      memcpy((void *)*param_2,(void *)*puVar2,(longlong)*(int *)(puVar2 + 1));
      *param_2 = *param_2 + (longlong)*(int *)(puVar2 + 1);
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(puVar2 + 1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1452b0660 FUN_1452b0660 body=247 status=ok
// SIG undefined FUN_1452b0660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452b0660(longlong *param_1,void *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1452b0675;
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    FUN_144ea6530(*puVar2,"crypto\\asn1\\tasn_utl.c",0x92);
    _Dst = (void *)FUN_144ea64e0((longlong)param_3,"crypto\\asn1\\tasn_utl.c",0x93);
    *puVar2 = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,(longlong)param_3);
      *(int *)(puVar2 + 1) = param_3;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_144ba24f0(0xd,0x73,0x41,"crypto\\asn1\\tasn_utl.c",0x94,uVar3);
    }
    return _Dst != (void *)0x0;
  }
  return true;
}



// FUNCTION 1452b0760 FUN_1452b0760 body=399 status=ok
// SIG undefined FUN_1452b0760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b0760(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = FUN_144babbf0(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(param_2,iVar5);
      FUN_144ec7640(param_3,"%*sPolicy: ",param_4,&DAT_149e02088);
      FUN_144ed09c0(param_3,*puVar3);
      FUN_144b9ebc0(param_3,&DAT_149dfc0af);
      lVar1 = puVar3[1];
      if (lVar1 != 0) {
        iVar4 = 0;
        iVar2 = FUN_144babbf0(lVar1);
        if (0 < iVar2) {
          do {
            puVar3 = (undefined8 *)FUN_144babc00(lVar1,iVar4);
            iVar2 = FUN_144ea8fa0(*puVar3);
            if (iVar2 == 0xa4) {
              FUN_144ec7640(param_3,"%*sCPS: %.*s\n",param_4 + 2,&DAT_149e02088,
                            *(undefined4 *)puVar3[1],*(undefined8 *)((undefined4 *)puVar3[1] + 2));
            }
            else if (iVar2 == 0xa5) {
              FUN_144ec7640(param_3,"%*sUser Notice:\n",param_4 + 2,&DAT_149e02088);
              FUN_1452b0c40(param_3,puVar3[1],param_4 + 4);
            }
            else {
              FUN_144ec7640(param_3,"%*sUnknown Qualifier: ",param_4 + 4,&DAT_149e02088);
              FUN_144ed09c0(param_3,*puVar3);
              FUN_144b9ebc0(param_3,&DAT_149dfc0af);
            }
            iVar4 = iVar4 + 1;
            iVar2 = FUN_144babbf0(lVar1);
          } while (iVar4 < iVar2);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_144babbf0(param_2);
    } while (iVar5 < iVar2);
  }
  return 1;
}



// FUNCTION 1452b08f0 FUN_1452b08f0 body=685 status=ok
// SIG undefined FUN_1452b08f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452b08f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  
  lVar4 = FUN_144ef6060(param_3);
  iVar2 = FUN_144babbf0(lVar4);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x22,0x82,0x22,"crypto\\x509v3\\v3_cpols.c",0x65);
    return 0;
  }
  lVar5 = FUN_144babce0(0,iVar2);
  if (lVar5 == 0) {
    uVar11 = 0x6b;
LAB_1452b0984:
    FUN_144ba24f0(0x22,0x82,0x41,"crypto\\x509v3\\v3_cpols.c",uVar11);
LAB_1452b0b78:
    FUN_144babe00(lVar4,FUN_144ef58f0);
    FUN_144babe00(lVar5,FUN_1452b0c00);
    lVar5 = 0;
  }
  else {
    iVar12 = 0;
    iVar10 = 0;
    if (0 < iVar2) {
      do {
        puVar6 = (undefined8 *)FUN_144babc00(lVar4,iVar10);
        if ((puVar6[2] != 0) || (pcVar1 = (char *)puVar6[1], pcVar1 == (char *)0x0)) {
          uVar13 = 0x75;
          uVar11 = 0x86;
LAB_1452b0b2b:
          FUN_144ba24f0(0x22,0x82,uVar11,"crypto\\x509v3\\v3_cpols.c",uVar13);
          FUN_144ba2bd0(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
          goto LAB_1452b0b78;
        }
        lVar7 = 0;
        do {
          lVar9 = lVar7;
          if (pcVar1[lVar9] != (&DAT_149d24414)[lVar9]) {
            if (*pcVar1 == '@') {
              lVar7 = FUN_145282850(param_2,pcVar1 + 1);
              if (lVar7 == 0) {
                uVar13 = 0x81;
                uVar11 = 0x87;
                goto LAB_1452b0b2b;
              }
              plVar8 = (longlong *)FUN_1452b0dd0(param_2,lVar7,iVar12);
              FUN_1452828b0(param_2,lVar7);
              if (plVar8 == (longlong *)0x0) goto LAB_1452b0b78;
            }
            else {
              lVar7 = FUN_144ea90e0(pcVar1,0);
              if (lVar7 == 0) {
                uVar13 = 0x8d;
                uVar11 = 0x6e;
                goto LAB_1452b0b2b;
              }
              plVar8 = (longlong *)FUN_144efec20(&DAT_149d24100);
              if (plVar8 == (longlong *)0x0) {
                FUN_144ed0860(lVar7);
                uVar11 = 0x94;
                goto LAB_1452b0984;
              }
              *plVar8 = lVar7;
            }
            iVar3 = FUN_144bac1c0(lVar5,plVar8);
            if (iVar3 != 0) goto LAB_1452b0a89;
            FUN_144eff330(plVar8,&DAT_149d24100);
            uVar11 = 0x9b;
            goto LAB_1452b0984;
          }
          lVar7 = lVar9 + 1;
        } while (lVar9 + 1 != 7);
        iVar12 = (int)lVar9 + -5;
LAB_1452b0a89:
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2);
    }
    FUN_144babe00(lVar4,FUN_144ef58f0);
  }
  return lVar5;
}



// FUNCTION 1452b0c00 FUN_1452b0c00 body=29 status=ok
// SIG undefined FUN_1452b0c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452b0c00(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d24100);
  return;
}



// FUNCTION 1452b0c20 FUN_1452b0c20 body=29 status=ok
// SIG undefined FUN_1452b0c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452b0c20(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d24210);
  return;
}



// FUNCTION 1452b0c40 FUN_1452b0c40 body=385 status=ok
// SIG undefined FUN_1452b0c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452b0c40(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    uVar7 = *(undefined8 *)((undefined4 *)*puVar1 + 2);
    FUN_144ec7640(param_1,"%*sOrganization: %.*s\n",param_3,&DAT_149e02088,*(undefined4 *)*puVar1,
                  uVar7);
    iVar3 = FUN_144babbf0(puVar1[1]);
    puVar5 = &DAT_149e02088;
    if (1 < iVar3) {
      puVar5 = &DAT_14a1750e5;
    }
    FUN_144ec7640(param_1,"%*sNumber%s: ",param_3 & 0xffffffff,&DAT_149e02088,puVar5,uVar7);
    iVar6 = 0;
    iVar3 = FUN_144babbf0(puVar1[1]);
    if (0 < iVar3) {
      do {
        lVar4 = FUN_144babc00(puVar1[1],iVar6);
        if (iVar6 != 0) {
          FUN_144b9ebc0(param_1,&DAT_149dfd133);
        }
        if (lVar4 == 0) {
          FUN_144b9ebc0(param_1,"(null)");
        }
        else {
          lVar4 = FUN_144ef5de0(0,lVar4);
          if (lVar4 == 0) {
            return;
          }
          FUN_144b9ebc0(param_1,lVar4);
          FUN_144ea6530(lVar4,"crypto\\x509v3\\v3_cpols.c",0x1d5);
        }
        iVar6 = iVar6 + 1;
        iVar3 = FUN_144babbf0(puVar1[1]);
      } while (iVar6 < iVar3);
    }
    FUN_144b9ebc0(param_1,&DAT_149dfc0af);
  }
  puVar2 = (undefined4 *)param_2[1];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_144ec7640(param_1,"%*sExplicit Text: %.*s\n",param_3 & 0xffffffff,&DAT_149e02088,*puVar2,
                  *(undefined8 *)(puVar2 + 2));
  }
  return;
}



// FUNCTION 1452b0dd0 FUN_1452b0dd0 body=738 status=ok
// SIG undefined FUN_1452b0dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452b0dd0(undefined8 param_1,undefined8 param_2)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar2 = (longlong *)FUN_144efec20(&DAT_149d24100);
  if (plVar2 == (longlong *)0x0) {
LAB_1452b1060:
    uVar9 = 0xf3;
    uVar8 = 0x41;
  }
  else {
    iVar6 = 0;
    iVar1 = FUN_144babbf0(param_2);
    if (0 < iVar1) {
LAB_1452b0e30:
      puVar3 = (undefined8 *)FUN_144babc00(param_2,iVar6);
      _Str1 = (char *)puVar3[1];
      iVar1 = strcmp(_Str1,"policyIdentifier");
      if (iVar1 == 0) {
        lVar4 = FUN_144ea90e0(puVar3[2],0);
        if (lVar4 == 0) {
          uVar9 = 0xb7;
          uVar8 = 0x6e;
LAB_1452b0fc9:
          FUN_144ba24f0(0x22,0x83,uVar8,"crypto\\x509v3\\v3_cpols.c",uVar9);
          FUN_144ba2bd0(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          goto LAB_1452b1082;
        }
        *plVar2 = lVar4;
      }
      else {
        iVar1 = FUN_144ef6830(_Str1,&DAT_149d24434);
        if (iVar1 != 0) {
          iVar1 = FUN_144ef6830(puVar3[1],"userNotice");
          if (iVar1 == 0) {
            if (*(char *)puVar3[2] == '@') {
              lVar4 = FUN_145282850(param_1,(char *)puVar3[2] + 1);
              if (lVar4 == 0) {
                uVar9 = 0xd7;
                uVar8 = 0x87;
                goto LAB_1452b0fc9;
              }
              lVar7 = FUN_1452b10c0(param_1,lVar4);
              FUN_1452828b0(param_1,lVar4);
              if (lVar7 != 0) {
                if (plVar2[1] == 0) {
                  lVar4 = FUN_144babca0();
                  plVar2[1] = lVar4;
                }
                iVar1 = FUN_144bac1c0(plVar2[1],lVar7);
                goto LAB_1452b0f84;
              }
              goto LAB_1452b1082;
            }
            uVar9 = 0xd1;
            uVar8 = 0x89;
          }
          else {
            uVar9 = 0xe5;
            uVar8 = 0x8a;
          }
          goto LAB_1452b0fc9;
        }
        if (plVar2[1] == 0) {
          lVar4 = FUN_144babca0();
          plVar2[1] = lVar4;
        }
        plVar5 = (longlong *)FUN_144efec20(&DAT_149d24210);
        if ((plVar5 == (longlong *)0x0) || (iVar1 = FUN_144bac1c0(plVar2[1],plVar5), iVar1 == 0))
        goto LAB_1452b1060;
        lVar4 = FUN_144ea8d60(0xa4);
        *plVar5 = lVar4;
        if (lVar4 == 0) {
          uVar9 = 0xc5;
          uVar8 = 0x44;
          goto LAB_1452b106e;
        }
        lVar4 = FUN_144efea80();
        plVar5[1] = lVar4;
        if (lVar4 == 0) goto LAB_1452b1060;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(puVar3[2] + lVar7) != '\0');
        iVar1 = FUN_144f03d00(lVar4);
LAB_1452b0f84:
        if (iVar1 == 0) goto LAB_1452b1060;
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_144babbf0(param_2);
      if (iVar1 <= iVar6) goto LAB_1452b0f9e;
      goto LAB_1452b0e30;
    }
LAB_1452b0f9e:
    if (*plVar2 != 0) {
      return plVar2;
    }
    uVar9 = 0xec;
    uVar8 = 0x8b;
  }
LAB_1452b106e:
  FUN_144ba24f0(0x22,0x83,uVar8,"crypto\\x509v3\\v3_cpols.c",uVar9);
LAB_1452b1082:
  FUN_144eff330(plVar2,&DAT_149d24100);
  return (longlong *)0x0;
}



// FUNCTION 1452b10c0 FUN_1452b10c0 body=893 status=ok
// SIG undefined FUN_1452b10c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452b10c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar11;
  
  plVar2 = (longlong *)FUN_144efec20(&DAT_149d24210);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144ea8d60(0xa5);
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      uVar11 = 0x128;
      uVar10 = 0x44;
      goto LAB_1452b11ed;
    }
    plVar4 = (longlong *)FUN_144efec20(&DAT_149d24280);
    if (plVar4 != (longlong *)0x0) {
      plVar2[1] = (longlong)plVar4;
      iVar9 = 0;
      iVar1 = FUN_144babbf0(param_2);
      if (0 < iVar1) {
        do {
          puVar5 = (undefined8 *)FUN_144babc00(param_2,iVar9);
          _Str1 = (char *)puVar5[1];
          lVar3 = puVar5[2];
          iVar1 = strcmp(_Str1,"explicitText");
          if (iVar1 == 0) {
            uVar10 = FUN_1452b1510(lVar3,local_res20);
            lVar6 = FUN_144f03c50(uVar10);
            plVar4[1] = lVar6;
            if (lVar6 == 0) goto LAB_1452b11df;
            if (local_res20[0] != 0) {
              lVar3 = lVar3 + (ulonglong)(local_res20[0] + 1);
            }
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)(lVar3 + lVar7) != '\0');
            iVar1 = FUN_144f03d00(lVar6,lVar3);
joined_r0x0001452b12a4:
            if (iVar1 == 0) goto LAB_1452b11df;
          }
          else {
            iVar1 = strcmp(_Str1,"organization");
            if (iVar1 == 0) {
              plVar8 = (longlong *)*plVar4;
              if (plVar8 == (longlong *)0x0) {
                plVar8 = (longlong *)FUN_144efec20(&DAT_149d242f0);
                if (plVar8 == (longlong *)0x0) goto LAB_1452b11df;
                *plVar4 = (longlong)plVar8;
              }
              if (param_3 == 0) {
                *(undefined4 *)(*plVar8 + 4) = 0x1a;
              }
              else {
                *(undefined4 *)(*plVar8 + 4) = 0x16;
              }
              lVar3 = -1;
              do {
                lVar3 = lVar3 + 1;
              } while (*(char *)(puVar5[2] + lVar3) != '\0');
              iVar1 = FUN_144f03d00(*plVar8);
              goto joined_r0x0001452b12a4;
            }
            iVar1 = strcmp(_Str1,"noticeNumbers");
            if (iVar1 != 0) {
              FUN_144ba24f0(0x22,0x84,0x8a,"crypto\\x509v3\\v3_cpols.c",0x15e);
              FUN_144ba2bd0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
              goto LAB_1452b1201;
            }
            lVar3 = *plVar4;
            if (lVar3 == 0) {
              lVar3 = FUN_144efec20(&DAT_149d242f0);
              if (lVar3 == 0) goto LAB_1452b11df;
              *plVar4 = lVar3;
            }
            lVar6 = FUN_144ef6060(puVar5[2]);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (lVar6 == 0) {
LAB_1452b136a:
              FUN_144ba24f0(0x22,0x84,0x8d,"crypto\\x509v3\\v3_cpols.c",CONCAT44(uVar10,0x154));
              FUN_144ba2bd0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
              FUN_144babe00(lVar6,FUN_144ef58f0);
              goto LAB_1452b1201;
            }
            iVar1 = FUN_144babbf0(lVar6);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (iVar1 == 0) goto LAB_1452b136a;
            iVar1 = FUN_1452b1440(*(undefined8 *)(lVar3 + 8),lVar6);
            FUN_144babe00(lVar6,FUN_144ef58f0);
            if (iVar1 == 0) goto LAB_1452b1201;
          }
          iVar9 = iVar9 + 1;
          iVar1 = FUN_144babbf0(param_2);
        } while (iVar9 < iVar1);
      }
      plVar4 = (longlong *)*plVar4;
      if (plVar4 == (longlong *)0x0) {
        return plVar2;
      }
      if ((plVar4[1] != 0) && (*plVar4 != 0)) {
        return plVar2;
      }
      uVar11 = 0x167;
      uVar10 = 0x8e;
      goto LAB_1452b11ed;
    }
  }
LAB_1452b11df:
  uVar11 = 0x16e;
  uVar10 = 0x41;
LAB_1452b11ed:
  FUN_144ba24f0(0x22,0x84,uVar10,"crypto\\x509v3\\v3_cpols.c",uVar11);
LAB_1452b1201:
  FUN_144eff330(plVar2,&DAT_149d24210);
  return (longlong *)0x0;
}



// FUNCTION 1452b1440 FUN_1452b1440 body=195 status=ok
// SIG undefined FUN_1452b1440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b1440(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      lVar2 = FUN_144babc00(param_2,iVar3);
      lVar2 = FUN_144ef5e60(0,*(undefined8 *)(lVar2 + 8));
      if (lVar2 == 0) {
        uVar5 = 0x17f;
        uVar4 = 0x8c;
LAB_1452b14eb:
        FUN_144ba24f0(0x22,0x85,uVar4,"crypto\\x509v3\\v3_cpols.c",uVar5);
        return 0;
      }
      iVar1 = FUN_144bac1c0(param_1,lVar2);
      if (iVar1 == 0) {
        FUN_144efe870(lVar2);
        uVar4 = 0x41;
        uVar5 = 0x189;
        goto LAB_1452b14eb;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 1452b1510 FUN_1452b1510 body=282 status=ok
// SIG undefined FUN_1452b1510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b1510(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  *param_2 = 0;
  pcVar3 = strchr(param_1,0x3a);
  if (pcVar3 == (char *)0x0) {
    return 0x1a;
  }
  uVar1 = (int)pcVar3 - (int)param_1;
  if (uVar1 == 0xffffffff) {
    return 0x1a;
  }
  *param_2 = uVar1;
  if (uVar1 == 4) {
    pcVar3 = "UTF8";
  }
  else {
    if (uVar1 != 10) {
      if (uVar1 == 3) {
        pcVar3 = "BMP";
      }
      else {
        if (uVar1 != 9) {
          if (uVar1 == 7) {
            iVar2 = strncmp(param_1,"VISIBLE",7);
            if (iVar2 == 0) {
              return 0x1a;
            }
          }
          else if ((uVar1 == 0xd) && (iVar2 = strncmp(param_1,"VISIBLESTRING",0xd), iVar2 == 0)) {
            return 0x1a;
          }
          goto LAB_1452b1614;
        }
        pcVar3 = "BMPSTRING";
      }
      iVar2 = strncmp(param_1,pcVar3,(ulonglong)uVar1);
      if (iVar2 == 0) {
        return 0x1e;
      }
      goto LAB_1452b1614;
    }
    pcVar3 = "UTF8String";
  }
  iVar2 = strncmp(param_1,pcVar3,(ulonglong)uVar1);
  if (iVar2 == 0) {
    return 0xc;
  }
LAB_1452b1614:
  *param_2 = 0;
  return 0x1a;
}



// FUNCTION 1452b1630 FUN_1452b1630 body=74 status=ok
// SIG undefined FUN_1452b1630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452b1630(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_144ef5d30("Require Explicit Policy",*param_2,local_res18);
  FUN_144ef5d30("Inhibit Policy Mapping",param_2[1],local_res18);
  return local_res18[0];
}



// FUNCTION 1452b1680 FUN_1452b1680 body=401 status=ok
// SIG undefined FUN_1452b1680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452b1680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  plVar2 = (longlong *)FUN_144efec20(&DAT_149d245b0);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x22,0x92,0x41,"crypto\\x509v3\\v3_pcons.c",0x40);
    return (longlong *)0x0;
  }
  iVar5 = 0;
  iVar1 = FUN_144babbf0(param_3);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(param_3,iVar5);
      _Str1 = (char *)puVar3[1];
      iVar1 = strcmp(_Str1,"requireExplicitPolicy");
      plVar4 = plVar2;
      if (iVar1 != 0) {
        iVar1 = strcmp(_Str1,"inhibitPolicyMapping");
        if (iVar1 != 0) {
          FUN_144ba24f0(0x22,0x92,0x6a,"crypto\\x509v3\\v3_pcons.c",0x4c);
          FUN_144ba2bd0(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          goto LAB_1452b1785;
        }
        plVar4 = plVar2 + 1;
      }
      iVar1 = FUN_144ef5bd0(puVar3,plVar4);
      if (iVar1 == 0) goto LAB_1452b1785;
      iVar5 = iVar5 + 1;
      iVar1 = FUN_144babbf0(param_3);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    } while (iVar5 < iVar1);
  }
  if ((plVar2[1] == 0) && (*plVar2 == 0)) {
    FUN_144ba24f0(0x22,0x92,0x97,"crypto\\x509v3\\v3_pcons.c",CONCAT44(uVar6,0x53));
LAB_1452b1785:
    FUN_144eff330(plVar2,&DAT_149d245b0);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 1452b1830 FUN_1452b1830 body=29 status=ok
// SIG undefined FUN_1452b1830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452b1830(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d245b0);
  return;
}



// FUNCTION 1452b1850 FUN_1452b1850 body=351 status=ok
// SIG undefined FUN_1452b1850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1452b1850(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  iVar7 = 0;
  iVar3 = FUN_144babbf0(param_2);
  if (iVar3 == 0) {
LAB_1452b199f:
    iVar7 = -1;
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
  }
  else {
    iVar4 = FUN_144babbf0(param_2);
    iVar3 = iVar7;
    if (0 < iVar4) {
      do {
        puVar5 = (undefined8 *)FUN_144babc00(param_2,iVar3);
        iVar4 = FUN_144ea8fa0(puVar5[1]);
        if ((iVar4 == 0x2ea) || (iVar4 = FUN_144ea8fa0(*puVar5), iVar4 == 0x2ea))
        goto LAB_1452b199f;
        puVar6 = (uint *)FUN_144f03500(plVar1,*puVar5);
        if (puVar6 == (uint *)0x0) {
          if ((uint *)*plVar1 != (uint *)0x0) {
            puVar6 = (uint *)FUN_1452aa9c0(0,*puVar5,*(uint *)*plVar1 & 0x10);
            if (puVar6 != (uint *)0x0) {
              uVar2 = *(undefined8 *)(*plVar1 + 0x10);
              *puVar6 = *puVar6 | 6;
              *(undefined8 *)(puVar6 + 4) = uVar2;
              iVar4 = FUN_144bac1c0(plVar1[1],puVar6);
              if (iVar4 != 0) goto LAB_1452b1943;
              FUN_1452aab20(puVar6);
            }
            goto LAB_1452b196f;
          }
        }
        else {
          *puVar6 = *puVar6 | 1;
LAB_1452b1943:
          iVar4 = FUN_144bac1c0(*(undefined8 *)(puVar6 + 6),puVar5[1]);
          if (iVar4 == 0) goto LAB_1452b196f;
          puVar5[1] = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_144babbf0(param_2);
      } while (iVar3 < iVar4);
    }
    iVar7 = 1;
  }
LAB_1452b196f:
  FUN_144babe00(param_2,FUN_1454cd150);
  return iVar7;
}



// FUNCTION 1452b19b0 FUN_1452b19b0 body=46 status=ok
// SIG undefined FUN_1452b19b0(void)

void FUN_1452b19b0(char *param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((param_2 >> 8 & 1) != 0) {
    uVar1 = param_3 & 0xffffffff;
  }
  _open(param_1,param_2,uVar1);
  return;
}



// FUNCTION 1452b19e0 _stat64 body=7 status=ok
// SIG undefined _stat64(void)

void _stat64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001452b19e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _stat64();
  return;
}



// FUNCTION 1452b19f0 fopen body=7 status=ok
// SIG FILE * fopen(char * _Filename, char * _Mode)

FILE * __cdecl fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001452b19f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = fopen(_Filename,_Mode);
  return pFVar1;
}



// FUNCTION 1452b1a00 _access body=7 status=ok
// SIG int _access(char * _Filename, int _AccessMode)

int __cdecl _access(char *_Filename,int _AccessMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001452b1a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _access(_Filename,_AccessMode);
  return iVar1;
}



// FUNCTION 1452b1a10 FUN_1452b1a10 body=172 status=ok
// SIG undefined FUN_1452b1a10(void)

char * FUN_1452b1a10(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
  }
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar2 = strchr(param_2,(int)cVar1);
    if (pcVar2 == (char *)0x0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (*param_1 != '\0') {
    pcVar2 = param_1 + 1;
    *param_3 = (longlong)pcVar2;
    cVar1 = *pcVar2;
    while ((cVar1 != '\0' && (pcVar2 = strchr(param_2,(int)*pcVar2), pcVar2 == (char *)0x0))) {
      *param_3 = *param_3 + 1;
      pcVar2 = (char *)*param_3;
      cVar1 = *pcVar2;
    }
    if (*(char *)*param_3 != '\0') {
      *(char *)*param_3 = '\0';
      *param_3 = *param_3 + 1;
    }
    return param_1;
  }
  return (char *)0x0;
}



// FUNCTION 1452b1ac0 FUN_1452b1ac0 body=215 status=ok
// SIG undefined FUN_1452b1ac0(void)

undefined8 FUN_1452b1ac0(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined8 uVar4;
  byte *local_res8;
  
  piVar3 = _errno();
  *piVar3 = 0;
  *param_4 = 0;
  bVar2 = *param_1;
  while ((bVar2 != 0 && ((bVar2 == 0x20 || (bVar2 == 9))))) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar1;
  }
  if ((bVar2 < 0x2e) && ((0x200100003e00U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
  }
  else {
    uVar4 = strtoll(param_1,&local_res8,param_3);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_res8;
    }
    piVar3 = _errno();
    if (*piVar3 == 0x22) {
      return 1;
    }
    if (param_1 != local_res8) {
      *param_4 = uVar4;
      return 0;
    }
  }
  return 2;
}



// FUNCTION 1452b1ba0 FUN_1452b1ba0 body=202 status=ok
// SIG undefined FUN_1452b1ba0(void)

char * FUN_1452b1ba0(char *param_1,int param_2,FILE *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = false;
  pcVar3 = fgets(param_1,param_2,param_3);
  do {
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (pcVar3[lVar4] != '\0');
    if (lVar4 == 0) {
      return (char *)0x0;
    }
    if (pcVar3[lVar5] == '\n') {
      if (!bVar1) {
        return pcVar3;
      }
      bVar1 = false;
    }
    else {
      iVar2 = feof(param_3);
      if (iVar2 != 0) {
        if (bVar1) {
          return (char *)0x0;
        }
        if ((ulonglong)(longlong)param_2 <= lVar5 + 2U) {
          return (char *)0x0;
        }
        (pcVar3 + lVar4)[0] = '\n';
        (pcVar3 + lVar4)[1] = '\0';
        return pcVar3;
      }
      bVar1 = true;
    }
    pcVar3 = fgets(param_1,param_2,param_3);
  } while( true );
}



// FUNCTION 1452b1c70 FUN_1452b1c70 body=32 status=ok
// SIG undefined FUN_1452b1c70(void)

char * FUN_1452b1c70(char *param_1,char param_2,longlong param_3)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    for (pcVar1 = param_1 + param_3 + -1; param_1 <= pcVar1; pcVar1 = pcVar1 + -1) {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
    }
  }
  return (char *)0x0;
}



// FUNCTION 1452b1c90 FUN_1452b1c90 body=68 status=ok
// SIG undefined FUN_1452b1c90(void)

undefined8 FUN_1452b1c90(__time64_t param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  tm *ptVar2;
  __time64_t local_res8 [4];
  
  local_res8[0] = param_1;
  ptVar2 = _gmtime64(local_res8);
  if (ptVar2 != (tm *)0x0) {
    uVar1 = *(undefined8 *)&ptVar2->tm_hour;
    *param_2 = *(undefined8 *)ptVar2;
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)&ptVar2->tm_wday;
    param_2[2] = *(undefined8 *)&ptVar2->tm_mon;
    param_2[3] = uVar1;
    *(int *)(param_2 + 4) = ptVar2->tm_isdst;
    return 0;
  }
  return 0x2b;
}



// FUNCTION 1452b1ce0 FUN_1452b1ce0 body=74 status=ok
// SIG undefined FUN_1452b1ce0(void)

longlong FUN_1452b1ce0(undefined8 param_1)

{
  int iVar1;
  longlong local_res10 [3];
  
  local_res10[0] = -1;
  iVar1 = FUN_1452b1d30(param_1,local_res10);
  if (iVar1 == 0) {
    if (local_res10[0] == -1) {
      local_res10[0] = 0;
    }
    return local_res10[0];
  }
  if (iVar1 != 1) {
    return -1;
  }
  return local_res10[0];
}



// FUNCTION 1452b1d30 FUN_1452b1d30 body=1746 status=ok
// SIG undefined FUN_1452b1d30(void)

undefined8 FUN_1452b1d30(char *param_1,longlong *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int local_res8;
  int local_res18;
  int local_res20;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  char *local_58;
  char *local_50;
  
  iVar3 = -1;
  local_res8 = -1;
  uVar24 = 0;
  local_res20 = -1;
  iVar23 = 0;
  iVar25 = -1;
  local_68 = -1;
  local_res18 = -1;
  iVar11 = -1;
  local_60 = -1;
  iVar22 = -1;
  local_64 = 0;
  local_5c = 0;
  uVar4 = uVar24;
  iVar9 = -1;
  iVar13 = iVar25;
  iVar10 = -1;
  iVar14 = -1;
  local_50 = param_1;
  if (*param_1 != '\0') {
    while (iVar9 = local_res18, iVar10 = local_68, iVar14 = local_res20, (int)uVar4 < 6) {
      cVar1 = *param_1;
      while ((((cVar1 != '\0' && ((cVar1 < '0' || ('9' < cVar1)))) &&
              ((cVar1 < 'a' || ('z' < cVar1)))) && ((cVar1 < 'A' || ('Z' < cVar1))))) {
        pcVar15 = param_1 + 1;
        param_1 = param_1 + 1;
        cVar1 = *pcVar15;
      }
      pcVar15 = param_1;
      uVar4 = uVar24;
      if (((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 + 0xbfU) < 0x1a)) {
        for (; (((byte)(cVar1 + 0x9fU) < 0x1a || ((byte)(cVar1 + 0xbfU) < 0x1a)) && (uVar4 < 0xc));
            uVar4 = uVar4 + 1) {
          cVar1 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        }
        if (uVar4 == 0xc) goto LAB_1452b2252;
        if (iVar25 == -1) {
          iVar25 = iVar23;
          if (uVar4 < 4) {
            if (uVar4 == 3) {
              ppuVar17 = &PTR_DAT_149d249c0;
              goto LAB_1452b2170;
            }
          }
          else {
            ppuVar17 = &PTR_s_Monday_149d24a60;
LAB_1452b2170:
            do {
              uVar6 = 0xffffffffffffffff;
              do {
                uVar6 = uVar6 + 1;
              } while ((*ppuVar17)[uVar6] != '\0');
              if ((uVar6 == uVar4) && (iVar9 = FUN_144f195b0(param_1,*ppuVar17,uVar4), iVar9 != 0))
              {
                if (iVar25 == -1) goto LAB_1452b21b0;
                goto LAB_1452b2271;
              }
              ppuVar17 = ppuVar17 + 1;
              iVar25 = iVar25 + 1;
            } while (iVar25 < 7);
          }
          iVar25 = -1;
        }
LAB_1452b21b0:
        if ((iVar13 == -1) && (ppuVar17 = &PTR_DAT_149d24a00, iVar9 = iVar23, uVar4 == 3)) {
          do {
            iVar13 = iVar9;
            iVar9 = FUN_144f195b0(param_1,*ppuVar17,3);
            if (iVar9 != 0) {
              if (iVar13 != -1) goto LAB_1452b2271;
              goto LAB_1452b2201;
            }
            ppuVar17 = ppuVar17 + 1;
            iVar9 = iVar13 + 1;
          } while (iVar13 + 1 < 0xc);
          iVar13 = -1;
        }
LAB_1452b2201:
        if ((iVar22 != -1) || (puVar18 = &DAT_149d24680, uVar6 = uVar24, 4 < uVar4))
        goto LAB_1452b2252;
        while( true ) {
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (puVar18[uVar7] != '\0');
          if ((uVar7 == uVar4) && (iVar9 = FUN_144f195b0(param_1,puVar18,uVar4), iVar9 != 0)) break;
          puVar18 = puVar18 + 0xc;
          uVar19 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar19;
          if (0x44 < uVar19) goto LAB_1452b2252;
        }
        iVar22 = *(int *)(puVar18 + 8) * 0x3c;
        iVar11 = local_60;
LAB_1452b2271:
        param_1 = param_1 + uVar4;
        cVar1 = *param_1;
        iVar3 = local_res8;
      }
      else if (('/' < cVar1) && (cVar1 < ':')) {
        if (iVar11 == -1) {
          pcVar15 = param_1 + 1;
          iVar9 = (int)cVar1;
          if ((byte)(param_1[1] - 0x30U) < 10) {
            iVar9 = (int)param_1[1] + (iVar9 + -0x30) * 10;
            pcVar15 = param_1 + 2;
          }
          if (((iVar9 + -0x30 < 0x18) && (*pcVar15 == ':')) &&
             (iVar10 = (int)pcVar15[1], (byte)(pcVar15[1] - 0x30U) < 10)) {
            if ((byte)(pcVar15[2] - 0x30U) < 10) {
              pcVar16 = pcVar15 + 3;
              iVar10 = (int)pcVar15[2] + (iVar10 + -0x30) * 10;
            }
            else {
              pcVar16 = pcVar15 + 2;
            }
            if (iVar10 + -0x30 < 0x3c) {
              if ((*pcVar16 == ':') &&
                 (iVar11 = (int)pcVar16[1], uVar4 = 0, (byte)(pcVar16[1] - 0x30U) < 10)) {
                pcVar15 = pcVar16 + 2;
                if ((byte)(*pcVar15 - 0x30U) < 10) {
                  pcVar16 = pcVar16 + 3;
                  iVar11 = (int)*pcVar15 + (iVar11 + -0x30) * 10;
                }
                else {
                  pcVar16 = pcVar16 + 2;
                }
                uVar4 = (ulonglong)(iVar11 - 0x30U);
                if (0x3c < (int)(iVar11 - 0x30U)) goto LAB_1452b1ef4;
              }
              cVar1 = *pcVar16;
              local_60 = (int)uVar4;
              param_1 = pcVar16;
              iVar11 = local_60;
              local_res20 = iVar9 + -0x30;
              local_68 = iVar10 + -0x30;
              local_58 = pcVar16;
              goto LAB_1452b228a;
            }
          }
        }
LAB_1452b1ef4:
        piVar5 = _errno();
        iVar9 = *piVar5;
        piVar5 = _errno();
        *piVar5 = 0;
        lVar2 = strtol(param_1,&local_58,10);
        piVar5 = _errno();
        iVar11 = *piVar5;
        piVar5 = _errno();
        if (*piVar5 != iVar9) {
          piVar5 = _errno();
          *piVar5 = iVar9;
        }
        if (iVar11 != 0) goto LAB_1452b2252;
        iVar3 = FUN_144f16fd0(lVar2);
        if ((iVar22 == -1) && ((longlong)local_58 - (longlong)param_1 == 4)) {
          if (((iVar3 < 0x579) && (local_50 < param_1)) && ((param_1[-1] - 0x2bU & 0xfd) == 0)) {
            iVar3 = iVar3 + (iVar3 / 100) * -0x28;
            iVar22 = iVar3 * 0x3c;
            if (param_1[-1] == '+') {
              cVar1 = *local_58;
              iVar22 = iVar3 * -0x3c;
              param_1 = local_58;
              iVar11 = local_60;
              iVar3 = local_res8;
              goto LAB_1452b228a;
            }
          }
          else {
LAB_1452b2072:
            if (local_64 == 0) {
              if (local_res8 != -1) goto LAB_1452b2252;
              if (iVar3 - 1U < 0x1f) {
                cVar1 = *local_58;
                local_64 = 1;
                param_1 = local_58;
                iVar11 = local_60;
                local_res8 = iVar3;
                goto LAB_1452b228a;
              }
              local_64 = 1;
            }
            else if (local_64 != 1) goto LAB_1452b2252;
            if (local_res18 != -1) goto LAB_1452b2252;
            local_res18 = iVar3;
            if ((iVar3 < 100) && (local_res18 = iVar3 + 0x76c, iVar3 < 0x47)) {
              local_res18 = iVar3 + 2000;
            }
            if (local_res8 == -1) {
              local_64 = iVar23;
            }
          }
          cVar1 = *local_58;
          param_1 = local_58;
          iVar11 = local_60;
          iVar3 = local_res8;
        }
        else {
          if (((longlong)local_58 - (longlong)param_1 != 8) ||
             (((local_res18 != -1 || (iVar13 != -1)) || (local_res8 != -1)))) goto LAB_1452b2072;
          local_res18 = iVar3 / 10000;
          cVar1 = *local_58;
          iVar13 = (iVar3 % 10000) / 100 + -1;
          local_res8 = iVar3 % 100;
          param_1 = local_58;
          iVar11 = local_60;
          iVar3 = local_res8;
        }
      }
LAB_1452b228a:
      local_5c = local_5c + 1;
      uVar4 = (ulonglong)local_5c;
      iVar9 = local_res18;
      iVar10 = local_68;
      iVar14 = local_res20;
      if (cVar1 == '\0') break;
    }
  }
  iVar20 = 0;
  iVar21 = iVar20;
  iVar25 = iVar20;
  iVar23 = iVar20;
  if (iVar11 != -1) {
    iVar21 = iVar14;
    iVar25 = iVar10;
    iVar23 = iVar11;
  }
  if (((((iVar3 == -1) || (iVar13 == -1)) || (iVar9 < 0x62f)) || ((0x1f < iVar3 || (0xb < iVar13))))
     || ((0x17 < iVar21 || ((0x3b < iVar25 || (0x3c < iVar23)))))) {
LAB_1452b2252:
    uVar8 = 0xffffffff;
  }
  else {
    iVar11 = iVar9 - (uint)(iVar13 < 2);
    lVar12 = (((longlong)iVar21 +
              ((longlong)
               (((int)((iVar11 >> 0x1f & 3U) + iVar11) >> 2) + -0x1dd +
               (iVar11 / 400 - iVar11 / 100)) +
               (longlong)*(int *)(&DAT_149d24a98 + (longlong)iVar13 * 4) +
               (longlong)(iVar9 + -0x7b2) * 0x16d + -1 + (longlong)iVar3) * 0x18) * 0x3c +
             (longlong)iVar25) * 0x3c + (longlong)iVar23;
    if (iVar22 != -1) {
      iVar20 = iVar22;
    }
    if ((iVar20 < 1) || (lVar12 <= 0x7fffffffffffffff - (longlong)iVar20)) {
      *param_2 = iVar20 + lVar12;
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      *param_2 = 0x7fffffffffffffff;
    }
  }
  return uVar8;
}



// FUNCTION 1452b2410 FUN_1452b2410 body=262 status=ok
// SIG undefined FUN_1452b2410(void)

undefined8 FUN_1452b2410(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *lpExistingFileName;
  char *lpNewFileName;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  puVar4 = (undefined8 *)FUN_144f07150(&local_38);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  lpExistingFileName = _strdup(param_1);
  lpNewFileName = _strdup(param_2);
  iVar3 = MoveFileExA(lpExistingFileName,lpNewFileName,1);
  while( true ) {
    if (iVar3 != 0) {
      if (lpExistingFileName != (char *)0x0) {
        free(lpExistingFileName);
      }
      if (lpNewFileName != (char *)0x0) {
        free(lpNewFileName);
      }
      return 0;
    }
    local_48 = uVar1;
    uStack_40 = uVar2;
    puVar5 = (undefined4 *)FUN_144f07150(local_28);
    local_38 = *puVar5;
    uStack_34 = puVar5[1];
    uStack_30 = puVar5[2];
    uStack_2c = puVar5[3];
    uVar6 = FUN_144f071e0(&local_38,&local_48);
    if (1000 < uVar6) break;
    Sleep(1);
    iVar3 = MoveFileExA(lpExistingFileName,lpNewFileName,1);
  }
  if (lpExistingFileName != (char *)0x0) {
    free(lpExistingFileName);
  }
  if (lpNewFileName != (char *)0x0) {
    free(lpNewFileName);
  }
  return 1;
}



// FUNCTION 1452b2520 FUN_1452b2520 body=301 status=ok
// SIG undefined FUN_1452b2520(void)

void FUN_1452b2520(undefined8 param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  FILE *pFVar2;
  char *_Filename;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [6];
  ushort local_82;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  _Filename = (char *)0x0;
  *param_4 = 0;
  pFVar2 = fopen(param_2,"wt");
  *param_3 = pFVar2;
  if (pFVar2 != (FILE *)0x0) {
    iVar1 = _fileno(pFVar2);
    iVar1 = _fstat64(iVar1,local_88);
    if ((iVar1 == -1) || ((local_82 & 0xf000) != 0x8000)) goto LAB_1452b25f0;
    fclose((FILE *)*param_3);
    *param_3 = 0;
    iVar1 = FUN_1452b32b0(param_1,local_50,9);
    if ((iVar1 == 0) &&
       ((_Filename = (char *)FUN_144f2b8b0("%s.%s.tmp",param_2,local_50), _Filename != (char *)0x0
        && (iVar1 = FUN_1452b19b0(_Filename,0x501,0x180), iVar1 != -1)))) {
      pFVar2 = _fdopen(iVar1,"wt");
      *param_3 = pFVar2;
      if (pFVar2 != (FILE *)0x0) {
        *param_4 = _Filename;
        goto LAB_1452b25f0;
      }
      _close(iVar1);
      _unlink(_Filename);
    }
  }
  (*(code *)PTR_free_14c6d9f28)(_Filename);
LAB_1452b25f0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452b2660 FUN_1452b2660 body=757 status=ok
// SIG undefined FUN_1452b2660(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1452b2660(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *in_R9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_c8 [4];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8[0] = 0x10;
  lVar4 = Ordinal_23(2,1,6);
  if (lVar4 != -1) {
    local_80 = 0;
    local_88 = 2;
    local_84 = Ordinal_8(0x7f000001);
    local_86 = 0;
    in_R9[1] = -1;
    *in_R9 = -1;
    local_c8[1] = 1;
    local_d8 = 4;
    iVar3 = Ordinal_21(lVar4,0xffff,&DAT_fffffffb,local_c8 + 1);
    if ((((iVar3 != -1) && (iVar3 = Ordinal_2(lVar4,&local_88,0x10), iVar3 != -1)) &&
        (iVar3 = Ordinal_6(lVar4,&local_88,local_c8), iVar3 != -1)) &&
       ((0xf < local_c8[0] && (iVar3 = Ordinal_13(lVar4,1), iVar3 != -1)))) {
      lVar5 = Ordinal_23(2,1,0);
      *in_R9 = lVar5;
      if ((lVar5 != -1) &&
         ((iVar3 = Ordinal_4(lVar5,&local_88,0x10), iVar3 != -1 &&
          (iVar3 = FUN_14550a4f0(lVar4,1), -1 < iVar3)))) {
        local_70 = 0x300;
        local_78 = lVar4;
        FUN_144f26d10(&local_78,1,1000);
        lVar5 = Ordinal_1(lVar4,0,0);
        in_R9[1] = lVar5;
        if (lVar5 != -1) {
          puVar6 = (undefined8 *)FUN_144f07150(&local_b8);
          uVar8 = 9;
          plVar9 = &local_58;
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          iVar3 = FUN_1452b3040(0,&local_68,9);
          if (iVar3 == 0) {
            Ordinal_19(*in_R9,&local_68,9,0);
            while( true ) {
              while( true ) {
                local_78 = in_R9[1];
                local_70 = 0x300;
                FUN_144f26d10(&local_78,1,1000);
                iVar3 = Ordinal_16(in_R9[1],plVar9,uVar8 & 0xffffffff,0);
                lVar5 = (longlong)iVar3;
                if (lVar5 != -1) break;
                iVar3 = Ordinal_111();
                local_a8 = uVar1;
                uStack_a0 = uVar2;
                puVar7 = (undefined4 *)FUN_144f07150(local_98);
                local_b8 = *puVar7;
                uStack_b4 = puVar7[1];
                uStack_b0 = puVar7[2];
                uStack_ac = puVar7[3];
                lVar5 = FUN_144f071e0(&local_b8,&local_a8);
                if ((60000 < lVar5) || (iVar3 != 0x2733)) goto LAB_1452b28cf;
              }
              uVar8 = uVar8 - lVar5;
              if (uVar8 == 0) break;
              plVar9 = (longlong *)((longlong)plVar9 + lVar5);
            }
            if ((local_68 == local_58) && (local_60 == local_50)) {
              Ordinal_3(lVar4);
              goto LAB_1452b2918;
            }
          }
        }
      }
    }
LAB_1452b28cf:
    Ordinal_3(lVar4);
    Ordinal_3(*in_R9);
    Ordinal_3(in_R9[1]);
  }
LAB_1452b2918:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1452b2970 FUN_1452b2970 body=44 status=ok
// SIG undefined FUN_1452b2970(void)

void FUN_1452b2970(longlong param_1)

{
  while (param_1 != 0) {
    param_1 = *(longlong *)(param_1 + 0x28);
    (*(code *)PTR_free_14c6d9f28)();
  }
  return;
}



// FUNCTION 1452b29a0 FUN_1452b29a0 body=426 status=ok
// SIG undefined FUN_1452b29a0(void)

ulonglong FUN_1452b29a0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  size_t _Size;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *in_R9;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *local_res20;
  longlong lVar6;
  
  puVar8 = (undefined4 *)0x0;
  *in_R9 = 0;
  puVar10 = (undefined4 *)0x0;
  uVar3 = getaddrinfo();
  uVar9 = uVar3 & 0xffffffff;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  puVar7 = local_res20;
  if (local_res20 != (undefined4 *)0x0) {
    do {
      if (*(longlong *)(puVar7 + 6) == 0) {
        _Size = 0;
      }
      else {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(puVar7 + 6) + lVar5) != '\0');
        _Size = lVar6 + 2;
      }
      puVar4 = puVar10;
      if (puVar7[1] == 2) {
        uVar1 = 0x10;
LAB_1452b2a29:
        uVar3 = (ulonglong)uVar1;
        if (((*(longlong *)(puVar7 + 8) != 0) && (*(ulonglong *)(puVar7 + 4) != 0)) &&
           (uVar3 <= *(ulonglong *)(puVar7 + 4))) {
          puVar4 = (undefined4 *)(*(code *)PTR_malloc_14c6d9f20)(uVar3 + 0x30 + _Size);
          if (puVar4 == (undefined4 *)0x0) {
            uVar9 = 8;
            break;
          }
          *puVar4 = *puVar7;
          puVar4[1] = puVar7[1];
          puVar4[2] = puVar7[2];
          puVar4[3] = puVar7[3];
          puVar4[4] = uVar1;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 10) = 0;
          *(undefined4 **)(puVar4 + 8) = puVar4 + 0xc;
          memcpy(puVar4 + 0xc,*(void **)(puVar7 + 8),uVar3);
          if (_Size != 0) {
            *(void **)(puVar4 + 6) = (void *)(*(longlong *)(puVar4 + 8) + uVar3);
            memcpy((void *)(*(longlong *)(puVar4 + 8) + uVar3),*(void **)(puVar7 + 6),_Size);
          }
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = puVar4;
          }
          if (puVar10 != (undefined4 *)0x0) {
            *(undefined4 **)(puVar10 + 10) = puVar4;
          }
        }
      }
      else if (puVar7[1] == 0x17) {
        uVar1 = 0x1c;
        goto LAB_1452b2a29;
      }
      puVar2 = (undefined8 *)(puVar7 + 10);
      puVar7 = (undefined4 *)*puVar2;
      puVar10 = puVar4;
    } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
    if (local_res20 != (undefined4 *)0x0) {
      freeaddrinfo();
    }
    if ((int)uVar9 != 0) {
      while (puVar8 != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(puVar8 + 10);
        (*(code *)PTR_free_14c6d9f28)(puVar8);
        puVar8 = puVar10;
      }
      puVar8 = (undefined4 *)0x0;
      goto LAB_1452b2b2d;
    }
    if (puVar8 != (undefined4 *)0x0) goto LAB_1452b2b2d;
  }
  uVar9 = 0x2af9;
  Ordinal_112(0x2af9);
LAB_1452b2b2d:
  *in_R9 = puVar8;
  return uVar9;
}



// FUNCTION 1452b2b50 FUN_1452b2b50 body=525 status=ok
// SIG undefined FUN_1452b2b50(void)

longlong FUN_1452b2b50(int param_1,longlong *param_2,undefined8 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined2 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  void *_Dst;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar7 = (longlong *)(*(code *)PTR_malloc_14c6d9f20)(0x40);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  lVar8 = (*(code *)PTR__strdup_14c6d9f38)(param_3);
  if (lVar8 == 0) {
LAB_1452b2ba7:
    (*(code *)PTR_free_14c6d9f28)(plVar7);
    return 0;
  }
  if (param_1 == 2) {
    *(int *)(plVar7 + 4) = (int)*param_2;
    uVar6 = 4;
  }
  else {
    if (param_1 != 0x17) {
      (*(code *)PTR_free_14c6d9f28)(lVar8);
      goto LAB_1452b2ba7;
    }
    lVar13 = param_2[1];
    uVar6 = 0x10;
    plVar7[4] = *param_2;
    plVar7[5] = lVar13;
  }
  *(undefined2 *)((longlong)plVar7 + 0x12) = uVar6;
  lVar14 = 0;
  *plVar7 = lVar8;
  plVar7[3] = (longlong)(plVar7 + 6);
  plVar7[1] = 0;
  *(short *)(plVar7 + 2) = (short)param_1;
  plVar7[6] = (longlong)(plVar7 + 4);
  plVar7[7] = 0;
  puVar1 = *(undefined4 **)plVar7[3];
  lVar5 = lVar14;
  lVar13 = lVar14;
  while (puVar1 != (undefined4 *)0x0) {
    lVar15 = -1;
    do {
      lVar11 = lVar15;
      lVar15 = lVar11 + 1;
    } while (*(char *)(*plVar7 + 1 + lVar11) != '\0');
    lVar15 = 0x10;
    if ((short)plVar7[2] == 0x17) {
      lVar15 = 0x1c;
    }
    lVar9 = (*(code *)PTR_calloc_14c6d9f40)(1,lVar11 + 0x32 + lVar15);
    if (lVar9 == 0) goto joined_r0x0001452b2d10;
    *(longlong *)(lVar9 + 0x20) = lVar9 + 0x30;
    _Dst = (void *)(lVar9 + 0x30 + lVar15);
    *(void **)(lVar9 + 0x18) = _Dst;
    memcpy(_Dst,(void *)*plVar7,lVar11 + 2);
    if (lVar13 == 0) {
      lVar13 = lVar9;
    }
    if (lVar5 != 0) {
      *(longlong *)(lVar5 + 0x28) = lVar9;
    }
    iVar10 = (int)(short)plVar7[2];
    *(int *)(lVar9 + 4) = iVar10;
    *(undefined4 *)(lVar9 + 8) = 1;
    *(int *)(lVar9 + 0x10) = (int)lVar15;
    if (iVar10 == 2) {
      puVar12 = *(undefined2 **)(lVar9 + 0x20);
      *(undefined4 *)(puVar12 + 2) = *puVar1;
LAB_1452b2cd4:
      *puVar12 = (short)plVar7[2];
      uVar6 = Ordinal_9(param_4);
      puVar12[1] = uVar6;
    }
    else if (iVar10 == 0x17) {
      puVar12 = *(undefined2 **)(lVar9 + 0x20);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar12 + 4) = *puVar1;
      *(undefined4 *)(puVar12 + 6) = uVar2;
      *(undefined4 *)(puVar12 + 8) = uVar3;
      *(undefined4 *)(puVar12 + 10) = uVar4;
      goto LAB_1452b2cd4;
    }
    lVar14 = lVar14 + 8;
    lVar5 = lVar9;
    puVar1 = *(undefined4 **)(lVar14 + plVar7[3]);
  }
LAB_1452b2d33:
  (*(code *)PTR_free_14c6d9f28)(lVar8);
  (*(code *)PTR_free_14c6d9f28)(plVar7);
  return lVar13;
joined_r0x0001452b2d10:
  while (lVar13 != 0) {
    lVar14 = *(longlong *)(lVar13 + 0x28);
    (*(code *)PTR_free_14c6d9f28)(lVar13);
    lVar13 = lVar14;
  }
  lVar13 = 0;
  goto LAB_1452b2d33;
}



// FUNCTION 1452b2d60 FUN_1452b2d60 body=137 status=ok
// SIG undefined FUN_1452b2d60(void)

void FUN_1452b2d60(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = inet_pton(2,param_1,local_28);
  if (iVar1 < 1) {
    iVar1 = inet_pton(0x17,param_1,local_20);
    if (0 < iVar1) {
      FUN_1452b2b50(0x17,local_20,param_1,param_2);
    }
  }
  else {
    FUN_1452b2b50(2,local_28,param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1452b2e00 FUN_1452b2e00 body=196 status=ok
// SIG undefined FUN_1452b2e00(void)

longlong FUN_1452b2e00(void *param_1,undefined1 *param_2,char param_3)

{
  longlong lVar1;
  void *_Dst;
  size_t sVar2;
  ulonglong _Size;
  size_t sVar3;
  
  *param_2 = 0;
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1,0x9e);
  if (lVar1 != 0) {
    *(undefined2 **)(lVar1 + 0x20) = (undefined2 *)(lVar1 + 0x30);
    *(undefined2 *)(lVar1 + 0x30) = 1;
    sVar2 = 0xffffffffffffffff;
    do {
      sVar3 = sVar2;
      sVar2 = sVar3 + 1;
    } while (*(char *)((longlong)param_1 + sVar2) != '\0');
    _Size = sVar3 + 2;
    if (_Size < 0x6d) {
      *(undefined4 *)(lVar1 + 4) = 1;
      *(undefined4 *)(lVar1 + 8) = 1;
      *(uint *)(lVar1 + 0x10) = (int)_Size + 2U & 0x7fffffff;
      if (param_3 == '\0') {
        _Dst = (void *)(lVar1 + 0x32);
      }
      else {
        _Dst = (void *)(lVar1 + 0x33);
        _Size = sVar2;
      }
      memcpy(_Dst,param_1,_Size);
      return lVar1;
    }
    (*(code *)PTR_free_14c6d9f28)(lVar1);
    *param_2 = 1;
  }
  return 0;
}



// FUNCTION 1452b2ed0 thunk_FUN_144f076d0 body=5 status=ok
// SIG undefined thunk_FUN_144f076d0(void)

undefined8
thunk_FUN_144f076d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_58 [16];
  longlong lStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
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
  lStack_48 = (ulonglong)uVar7 << 0x20;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = (ulonglong)((*(char *)(*(longlong *)(param_1 + 0x20) + 0x4d7) != '\x03') + 1);
  uStack_28 = 0;
  uStack_20 = 0;
  puVar6 = (undefined4 *)FUN_144f07150(auStack_58);
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *puVar1 = *puVar6;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  cVar5 = FUN_144f07890(param_1,param_2,param_3,&lStack_48);
  if (cVar5 == '\0') {
    FUN_144f14b70(param_1,"getaddrinfo() thread failed to start");
  }
  else {
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 1452b2ee0 FUN_1452b2ee0 body=177 status=ok
// SIG undefined FUN_1452b2ee0(void)

longlong FUN_1452b2ee0(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  *(int *)(param_1 + 0xe64) = param_2;
  lVar2 = lVar1;
  if (param_2 == 0) {
    if (param_3 != 0) {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbeca0(param_1,3,2);
      }
      lVar1 = FUN_144f1b810(param_1,param_3,*(undefined8 *)(param_1 + 0xe40),0,
                            *(undefined4 *)(param_1 + 0xe60));
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbece0(param_1,3);
      }
      lVar2 = 0;
      if (lVar1 != 0) goto LAB_1452b2f6c;
      FUN_1452b2970(param_3);
    }
    lVar2 = 0x1b;
  }
LAB_1452b2f6c:
  *(longlong *)(param_1 + 0xe48) = lVar1;
  *(undefined1 *)(param_1 + 0xe68) = 1;
  return lVar2;
}



// FUNCTION 1452b2fa0 FUN_1452b2fa0 body=61 status=ok
// SIG undefined FUN_1452b2fa0(void)

uintptr_t FUN_1452b2fa0(_StartAddress *param_1,void *param_2)

{
  uintptr_t uVar1;
  uintptr_t uVar2;
  
  uVar1 = _beginthreadex((void *)0x0,0,param_1,param_2,0,(uint *)0x0);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0xffffffffffffffff) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 1452b2fe0 CloseHandle body=7 status=ok
// SIG BOOL CloseHandle(HANDLE hObject)

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001452b2fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}



// FUNCTION 1452b2ff0 FUN_1452b2ff0 body=66 status=ok
// SIG undefined FUN_1452b2ff0(void)

bool FUN_1452b2ff0(undefined8 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObjectEx((HANDLE)*param_1,0xffffffff,0);
  CloseHandle((HANDLE)*param_1);
  *param_1 = 0;
  return DVar1 == 0;
}



// FUNCTION 1452b3040 FUN_1452b3040 body=224 status=ok
// SIG undefined FUN_1452b3040(void)

ulonglong FUN_1452b3040(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  NTSTATUS NVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_res18 [4];
  
  uVar3 = 0x2b;
  do {
    if (param_3 == 0) {
      return uVar3;
    }
    uVar4 = 4;
    if (param_3 < 4) {
      uVar4 = param_3;
    }
    uVar2 = thunk_FUN_1452b37b0(param_1,local_res18,4);
    if ((int)uVar2 == 4) {
      if (DAT_14c7fc654 == '\0') {
        local_res18[0] = 0;
        NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)local_res18,4,2);
        uVar2 = (ulonglong)(-(uint)(NVar1 != 0) & 2);
        goto LAB_1452b30bc;
      }
      uVar3 = 0;
      DAT_14c7fc650 = DAT_14c7fc650 * 0x41c64e6d + 0x3039;
      local_res18[0] = DAT_14c7fc650 * 0x10000 | DAT_14c7fc650 >> 0x10;
    }
    else {
LAB_1452b30bc:
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if (uVar4 != 0) {
      param_3 = param_3 - uVar4;
      do {
        *param_2 = (char)local_res18[0];
        param_2 = param_2 + 1;
        local_res18[0] = local_res18[0] >> 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  } while( true );
}



// FUNCTION 1452b3120 FUN_1452b3120 body=373 status=ok
// SIG undefined FUN_1452b3120(void)

void FUN_1452b3120(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  NTSTATUS NVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  uint local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_3 & 0xfffffffffffffffe) < 0x100) && ((param_3 & 1) != 0)) {
    iVar3 = 0x2b;
    puVar6 = local_c8;
    uVar7 = param_3 - 1 >> 1;
    uVar5 = uVar7;
    while (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      uVar1 = thunk_FUN_1452b37b0(param_1,local_d8,4);
      if (uVar1 == 4) {
        if (DAT_14c7fc654 == '\0') {
          local_d8[0] = 0;
          NVar2 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)local_d8,4,2);
          uVar1 = -(uint)(NVar2 != 0) & 2;
          goto LAB_1452b31ec;
        }
        DAT_14c7fc650 = DAT_14c7fc650 * 0x41c64e6d + 0x3039;
        local_d8[0] = DAT_14c7fc650 * 0x10000 | DAT_14c7fc650 >> 0x10;
      }
      else {
LAB_1452b31ec:
        if (uVar1 != 0) goto LAB_1452b327e;
      }
      iVar3 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar5 - uVar4;
        do {
          *puVar6 = (char)local_d8[0];
          puVar6 = puVar6 + 1;
          local_d8[0] = local_d8[0] >> 8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    if (iVar3 == 0) {
      FUN_1452cea80(local_c8,uVar7,param_2,param_3);
    }
  }
LAB_1452b327e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1452b32b0 FUN_1452b32b0 body=224 status=ok
// SIG undefined FUN_1452b32b0(void)

undefined8 FUN_1452b32b0(undefined8 param_1,char *param_2,longlong param_3)

{
  NTSTATUS NVar1;
  undefined8 uVar2;
  uint local_res18 [4];
  
  do {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      *param_2 = '\0';
      return 0;
    }
    do {
      uVar2 = thunk_FUN_1452b37b0(param_1,local_res18,4);
      if ((int)uVar2 == 4) {
        if (DAT_14c7fc654 == '\0') {
          local_res18[0] = 0;
          NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)local_res18,4,2);
          if (NVar1 != 0) {
            return 2;
          }
          uVar2 = 0;
          goto LAB_1452b331e;
        }
        DAT_14c7fc650 = DAT_14c7fc650 * 0x41c64e6d + 0x3039;
        local_res18[0] = DAT_14c7fc650 * 0x10000 | DAT_14c7fc650 >> 0x10;
      }
      else {
LAB_1452b331e:
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    } while (0xfffffffb < local_res18[0]);
    *param_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
               [local_res18[0] % 0x3e];
    param_2 = param_2 + 1;
  } while( true );
}



// FUNCTION 1452b3390 FUN_1452b3390 body=11 status=ok
// SIG undefined FUN_1452b3390(void)

void FUN_1452b3390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1452b88d0(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 1452b33a0 FUN_1452b33a0 body=22 status=ok
// SIG undefined FUN_1452b33a0(void)

void FUN_1452b33a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [16];
  
  FUN_1452b88d0(param_1,param_2,0,local_res18);
  return;
}



// FUNCTION 1452b33c0 FUN_1452b33c0 body=43 status=ok
// SIG undefined FUN_1452b33c0(void)

bool FUN_1452b33c0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) != 0) {
    iVar1 = FUN_144b98850();
    return iVar1 != 0;
  }
  return false;
}



// FUNCTION 1452b33f0 FUN_1452b33f0 body=516 status=ok
// SIG undefined FUN_1452b33f0(void)

void FUN_1452b33f0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 auStack_1e8 [32];
  char local_1c8 [255];
  undefined1 local_c9;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  piVar1 = *(int **)(param_1 + 0x10);
  lVar6 = *(longlong *)(piVar1 + 8);
  FUN_144ba26f0();
  uVar9 = (undefined4)param_4;
  if (0x7fffffff < param_4) {
    uVar9 = 0x7fffffff;
  }
  iVar2 = FUN_144b99810(*(undefined8 *)(lVar6 + 8),param_3,uVar9);
  if (0 < iVar2) {
    *param_5 = 0;
    goto LAB_1452b35e2;
  }
  iVar2 = FUN_144b9a050(*(undefined8 *)(lVar6 + 8),iVar2);
  if (iVar2 == 1) {
    lVar6 = FUN_144f0da70(*(undefined8 *)(param_1 + 8));
    if (lVar6 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(lVar6 + 0x10);
    }
    uVar4 = FUN_144ba2630();
    if (((((uVar4 & 0xff000000) == 0x14000000) && ((uVar4 & 0xfff) == 0x80)) && (*piVar1 == 2)) &&
       ((piVar8 != (int *)0x0 && (*piVar8 == 2)))) {
      FUN_1452b3920(local_c8,0x78);
      puVar7 = local_c8;
      pcVar5 = "Error: %s does not support double SSL tunneling.";
    }
    else {
      puVar7 = (undefined1 *)FUN_1452b52f0(uVar4,local_1c8,0x100);
      pcVar5 = "SSL_write() error: %s";
    }
    FUN_144f14b70(param_2,pcVar5,puVar7);
    *param_5 = 0x37;
    goto LAB_1452b35e2;
  }
  if (iVar2 != 2) {
    if (iVar2 != 3) {
      if (iVar2 == 5) {
        iVar2 = Ordinal_111();
        if (*(int *)(lVar6 + 0x20) == 0x51) goto LAB_1452b3530;
        iVar3 = FUN_144ba2630();
        if (iVar3 == 0) {
          if (iVar2 == 0) {
            pcVar5 = (char *)FUN_1452b5240(5);
            strncpy(local_1c8,pcVar5,0x100);
            local_c9 = 0;
          }
          else {
            FUN_144bbe240(iVar2,local_1c8,0x100);
          }
        }
        else {
          FUN_1452b52f0(iVar3,local_1c8,0x100);
        }
        pcVar5 = local_1c8;
      }
      else {
        Ordinal_111();
        pcVar5 = (char *)FUN_1452b5240(iVar2);
      }
      FUN_144f14b70(param_2,"OpenSSL SSL_write: %s, errno %d",pcVar5);
      *param_5 = 0x37;
      goto LAB_1452b35e2;
    }
  }
LAB_1452b3530:
  *param_5 = 0x51;
LAB_1452b35e2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 1452b3610 FUN_1452b3610 body=395 status=ok
// SIG undefined FUN_1452b3610(void)

void FUN_1452b3610(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Source;
  undefined4 uVar6;
  undefined1 auStack_178 [32];
  char local_158 [255];
  undefined1 local_59;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  FUN_144ba26f0();
  uVar6 = (undefined4)param_4;
  if (0x7fffffff < param_4) {
    uVar6 = 0x7fffffff;
  }
  iVar3 = FUN_144b997b0(*(undefined8 *)(lVar2 + 8),param_3,uVar6);
  if ((0 < iVar3) || (iVar4 = FUN_144b9a050(*(undefined8 *)(lVar2 + 8),iVar3), iVar4 == 0))
  goto LAB_1452b3764;
  if ((iVar4 != 2) && (iVar4 != 3)) {
    if (iVar4 == 6) {
      if (*(int *)(param_1 + 0x20) == 0) {
        FUN_144f16220(uVar1,1);
      }
      goto LAB_1452b3764;
    }
    if (*(int *)(lVar2 + 0x20) != 0x51) {
      iVar5 = FUN_144ba2630();
      if ((iVar3 < 0) || (iVar5 != 0)) {
        iVar3 = Ordinal_111();
        if (iVar5 == 0) {
          if ((iVar3 == 0) || (iVar4 != 5)) {
            _Source = (char *)FUN_1452b5240(iVar4);
            strncpy(local_158,_Source,0x100);
            local_59 = 0;
          }
          else {
            FUN_144bbe240(iVar3,local_158,0x100);
          }
        }
        else {
          FUN_1452b52f0(iVar5,local_158,0x100);
        }
        FUN_144f14b70(param_2,"OpenSSL SSL_read: %s, errno %d",local_158,iVar3);
        *param_5 = 0x38;
      }
      goto LAB_1452b3764;
    }
  }
  *param_5 = 0x51;
LAB_1452b3764:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_178);
}



// FUNCTION 1452b37b0 FUN_1452b37b0 body=99 status=ok
// SIG undefined FUN_1452b37b0(void)

undefined4 FUN_1452b37b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    iVar1 = FUN_144bac950();
    if (iVar1 == 0) {
      return 2;
    }
  }
  else {
    iVar1 = FUN_1452b5410();
    if (iVar1 != 0) {
      return 2;
    }
  }
  uVar2 = FUN_144f16fb0(param_3);
  iVar1 = FUN_144bac850(param_2,uVar2);
  uVar2 = 2;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1452b3820 FUN_1452b3820 body=148 status=ok
// SIG undefined FUN_1452b3820(void)

undefined4 FUN_1452b3820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  lVar3 = FUN_144ba5700();
  if (lVar3 == 0) {
    uVar1 = 0x1b;
  }
  else {
    uVar4 = FUN_144bab040();
    iVar2 = FUN_144ba5e50(lVar3,uVar4);
    if (iVar2 == 0) {
      FUN_144ba5800();
      uVar1 = 2;
    }
    else {
      FUN_144ba5c70(lVar3,param_1,param_2);
      FUN_144ba5ca0(lVar3,param_3,local_18);
      FUN_144ba5800(lVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 1452b38c0 FUN_1452b38c0 body=3 status=ok
// SIG undefined FUN_1452b38c0(void)

undefined1 FUN_1452b38c0(void)

{
  return 1;
}



// FUNCTION 1452b38d0 FUN_1452b38d0 body=21 status=ok
// SIG undefined FUN_1452b38d0(void)

undefined8 FUN_1452b38d0(longlong param_1,int param_2)

{
  if (param_2 == 0x40002b) {
    return **(undefined8 **)(param_1 + 0x20);
  }
  return (*(undefined8 **)(param_1 + 0x20))[1];
}



// FUNCTION 1452b38f0 FUN_1452b38f0 body=47 status=ok
// SIG undefined FUN_1452b38f0(void)

void FUN_1452b38f0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_144bb4110();
  }
  (*(code *)PTR_free_14c6d9f28)(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0001452b3918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(param_1);
  return;
}



// FUNCTION 1452b3920 FUN_1452b3920 body=203 status=ok
// SIG undefined FUN_1452b3920(void)

longlong FUN_1452b3920(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char local_res18;
  undefined2 local_res19;
  
  local_res19 = 0;
  uVar1 = FUN_14550a520();
  uVar4 = (ulonglong)uVar1;
  if (uVar1 < 0x906000) {
    uVar4 = 0x1010114f;
  }
  else if ((uVar1 & 0xff0) != 0) {
    uVar3 = uVar1 >> 4 & 0xff;
    if (uVar3 < 0x1b) {
      local_res18 = (char)(uVar1 >> 4) + '`';
    }
    else {
      iVar2 = uVar3 - 1;
      local_res18 = 'z';
      local_res19 = CONCAT11(local_res19._1_1_,
                             (char)iVar2 +
                             (((char)(iVar2 / 0x1a) + (char)(iVar2 >> 0x1f)) -
                             (char)((longlong)iVar2 * 0x4ec4ec4f >> 0x3f)) * -0x1a + 'b');
    }
    goto LAB_1452b3951;
  }
  local_res18 = '\0';
LAB_1452b3951:
  iVar2 = FUN_144f2b7e0(param_1,param_2,"%s/%lx.%lx.%lx%s","OpenSSL",(uint)uVar4 >> 0x1c,
                        (uint)(uVar4 >> 0x14) & 0xff,(uint)(uVar4 >> 0xc) & 0xff,&local_res18);
  return (longlong)iVar2;
}



// FUNCTION 1452b39f0 FUN_1452b39f0 body=354 status=ok
// SIG undefined FUN_1452b39f0(void)

void FUN_1452b39f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *_Source;
  char *_Dest;
  size_t _Count;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = FUN_1452908d0(param_2);
  if (lVar2 == 0) {
    FUN_144f14b70(param_1,"SSL Engine \'%s\' not found",param_2);
  }
  else {
    if (*(longlong *)(param_1 + 0xe70) != 0) {
      FUN_144ec6930();
      FUN_144ee3a60(*(undefined8 *)(param_1 + 0xe70));
      *(undefined8 *)(param_1 + 0xe70) = 0;
    }
    iVar1 = FUN_144ec6850(lVar2);
    if (iVar1 == 0) {
      FUN_144ee3a60(lVar2);
      _Count = 0x100;
      _Dest = local_128;
      iVar1 = FUN_144ba2630();
      local_128[0] = '\0';
      uVar3 = FUN_1452b3920(local_128,0x100);
      if (uVar3 < 0xfe) {
        _Count = 0xfe - uVar3;
        (local_128 + uVar3)[0] = ':';
        (local_128 + uVar3)[1] = ' ';
        _Dest = local_128 + uVar3 + 2;
        *_Dest = '\0';
      }
      FUN_144ba27f0(iVar1,_Dest,_Count);
      if (*_Dest == '\0') {
        _Source = "No error";
        if (iVar1 != 0) {
          _Source = "Unknown error";
        }
        strncpy(_Dest,_Source,_Count);
        _Dest[_Count - 1] = '\0';
      }
      FUN_144f14b70(param_1,"Failed to initialise SSL Engine \'%s\': %s",param_2,_Dest);
    }
    else {
      *(longlong *)(param_1 + 0xe70) = lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_148);
}



// FUNCTION 1452b3b60 FUN_1452b3b60 body=31 status=ok
// SIG undefined FUN_1452b3b60(void)

undefined8 FUN_1452b3b60(void)

{
  FUN_144b973d0(0x7640,0);
  FUN_14550a760();
  return 1;
}



// FUNCTION 1452b3b80 thunk_FUN_14550a7f0 body=5 status=ok
// SIG undefined thunk_FUN_14550a7f0(void)

void thunk_FUN_14550a7f0(void)

{
  FUN_14550a7f0();
  return;
}



// FUNCTION 1452b3b90 FUN_1452b3b90 body=107 status=ok
// SIG undefined FUN_1452b3b90(void)

undefined8 FUN_1452b3b90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xe70) != 0) {
    iVar1 = FUN_144ede780(*(longlong *)(param_1 + 0xe70),0xffff);
    if (iVar1 < 1) {
      uVar2 = FUN_144ee3c30(*(undefined8 *)(param_1 + 0xe70));
      FUN_144f14b70(param_1,"set default crypto engine \'%s\' failed",uVar2);
      return 0x36;
    }
    uVar2 = FUN_144ee3c30(*(undefined8 *)(param_1 + 0xe70));
    FUN_144f14ad0(param_1,"set default crypto engine \'%s\'",uVar2);
  }
  return 0;
}



// FUNCTION 1452b3c00 FUN_1452b3c00 body=110 status=ok
// SIG undefined FUN_1452b3c00(void)

longlong FUN_1452b3c00(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_1452906e0();
  lVar1 = 0;
  while( true ) {
    if (lVar2 == 0) {
      return lVar1;
    }
    uVar3 = FUN_144ee3c30(lVar2);
    lVar4 = FUN_144bbed20(lVar1,uVar3);
    if (lVar4 == 0) break;
    lVar2 = FUN_145290780(lVar2);
    lVar1 = lVar4;
  }
  FUN_144b472a0(lVar1);
  return 0;
}



// FUNCTION 1452b3c70 FUN_1452b3c70 body=432 status=ok
// SIG undefined FUN_1452b3c70(void)

void FUN_1452b3c70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_458;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (plVar1[1] == 0) goto LAB_1452b3dd2;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != '\0')) {
    FUN_144b997b0(plVar1[1],local_428,0x400);
    FUN_144ba26f0();
    iVar2 = FUN_144b9a5b0(plVar1[1]);
    if (iVar2 == 1) {
      FUN_144f14c60(param_2,param_1,"SSL shutdown finished");
    }
    else {
      uVar3 = FUN_144b997b0(plVar1[1],local_428,0x400);
      iVar2 = FUN_144b9a050(plVar1[1],uVar3);
      if (iVar2 == 0) {
LAB_1452b3d99:
        pcVar6 = "SSL shutdown, EOF from server";
      }
      else if (iVar2 == 2) {
        pcVar6 = "SSL shutdown sent";
      }
      else {
        if (iVar2 != 3) {
          if (iVar2 != 6) {
            iVar4 = FUN_144ba2630();
            if (iVar4 == 0) {
              uVar5 = FUN_1452b5240(iVar2);
            }
            else {
              uVar5 = FUN_1452b52f0(iVar4,local_428,0x400);
            }
            local_438 = Ordinal_111();
            FUN_144f14c60(param_2,param_1,"SSL shutdown, error: \'%s\', errno %d",uVar5);
            goto LAB_1452b3db3;
          }
          goto LAB_1452b3d99;
        }
        pcVar6 = "SSL shutdown send blocked";
      }
      FUN_144f14c60(param_2,param_1,pcVar6);
    }
LAB_1452b3db3:
    FUN_144ba26f0();
    FUN_144b9a720(plVar1[1]);
  }
  FUN_144b993a0(plVar1[1]);
  plVar1[1] = 0;
LAB_1452b3dd2:
  if (*plVar1 != 0) {
    FUN_144b98360();
    *plVar1 = 0;
    *(undefined1 *)((longlong)plVar1 + 0x24) = 0;
  }
  if (plVar1[3] != 0) {
    FUN_144ece530();
    plVar1[3] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_458);
}



// FUNCTION 1452b3e30 FUN_1452b3e30 body=595 status=ok
// SIG undefined FUN_1452b3e30(void)

void FUN_1452b3e30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  size_t _Count;
  undefined1 auStack_158 [32];
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (*(char *)(param_2 + 0x6fa) == '\x02') {
    FUN_144b9a5b0(*(undefined8 *)(lVar1 + 8));
  }
  if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1452b4070;
  _Count = 0x100;
  iVar4 = 10;
  while (iVar4 != 0) {
    uVar5 = FUN_144f13ec0(param_1,param_2);
    iVar2 = FUN_144f26bb0(uVar5,0xffffffffffffffff,0xffffffffffffffff,10000);
    if (iVar2 < 1) {
      if (iVar2 == 0) {
        FUN_144f14b70(param_2,"SSL shutdown timeout");
      }
      else {
        uVar3 = Ordinal_111();
        FUN_144f14b70(param_2,"select/poll on SSL socket, errno: %d",uVar3);
      }
      break;
    }
    FUN_144ba26f0();
    uVar3 = FUN_144b997b0(*(undefined8 *)(lVar1 + 8),local_138,0x100);
    iVar2 = FUN_144b9a050(*(undefined8 *)(lVar1 + 8),uVar3);
    if (iVar2 == 0) break;
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        FUN_144f14ad0(param_2,"SSL_ERROR_WANT_WRITE");
      }
      else if (iVar2 != 6) {
        iVar4 = FUN_144ba2630();
        if (iVar4 == 0) {
          pcVar7 = (char *)FUN_1452b5240(iVar2);
        }
        else {
          local_138[0] = '\0';
          pcVar7 = local_138;
          uVar6 = FUN_1452b3920(local_138,0x100);
          if (uVar6 < 0xfe) {
            _Count = 0xfe - uVar6;
            (local_138 + uVar6)[0] = ':';
            (local_138 + uVar6)[1] = ' ';
            pcVar7 = local_138 + uVar6 + 2;
            *pcVar7 = '\0';
          }
          FUN_144ba27f0(iVar4,pcVar7,_Count);
          if (*pcVar7 == '\0') {
            strncpy(pcVar7,"Unknown error",_Count);
            pcVar7[_Count - 1] = '\0';
          }
        }
        uVar3 = Ordinal_111();
        FUN_144f14b70(param_2,"OpenSSL SSL_read on shutdown: %s, errno %d",pcVar7,uVar3);
      }
      break;
    }
    FUN_144f14ad0(param_2,"SSL_ERROR_WANT_READ");
    iVar4 = iVar4 + -1;
  }
  if (*(char *)(param_2 + 0xacf) != '\0') {
    iVar4 = FUN_144b9a880(*(undefined8 *)(lVar1 + 8));
    if (iVar4 == 1) {
      pcVar7 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN";
    }
    else if (iVar4 == 2) {
      pcVar7 = "SSL_get_shutdown() returned SSL_RECEIVED_SHUTDOWN";
    }
    else {
      if (iVar4 != 3) goto LAB_1452b405f;
      pcVar7 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN|SSL_RECEIVED__SHUTDOWN";
    }
    FUN_144f14ad0(param_2,pcVar7);
  }
LAB_1452b405f:
  FUN_144b993a0(*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(lVar1 + 8) = 0;
LAB_1452b4070:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_158);
}



// FUNCTION 1452b40a0 thunk_FUN_144eb0d50 body=5 status=ok
// SIG undefined thunk_FUN_144eb0d50(void)

void thunk_FUN_144eb0d50(void)

{
  FUN_144eb0d50();
  return;
}



// FUNCTION 1452b40b0 FUN_1452b40b0 body=55 status=ok
// SIG undefined FUN_1452b40b0(void)

void FUN_1452b40b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe70) != 0) {
    FUN_144ec6930();
    FUN_144ee3a60(*(undefined8 *)(param_1 + 0xe70));
    *(undefined8 *)(param_1 + 0xe70) = 0;
  }
  return;
}



// FUNCTION 1452b40f0 FUN_1452b40f0 body=3090 status=ok
// SIG undefined FUN_1452b40f0(void)

void FUN_1452b40f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined8 local_1d8;
  int local_1d0;
  longlong local_1c8;
  int *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [40];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar6 = FUN_144b98cb0(param_2);
  local_f8 = lVar6;
  if (lVar6 != 0) {
    iVar2 = FUN_144babbf0(lVar6);
    local_1d0 = iVar2;
    iVar3 = FUN_144f0cd30(param_1,iVar2);
    if (iVar3 == 0) {
      uVar7 = FUN_144b9ff50();
      lVar8 = FUN_144b9e650(uVar7);
      if (lVar8 != 0) {
        iVar3 = 0;
        if (0 < iVar2) {
          do {
            uVar7 = FUN_144babc00(lVar6,iVar3);
            local_1c0 = (int *)0x0;
            local_1a8 = uVar7;
            uVar9 = FUN_144bb4f50(uVar7);
            FUN_14526c5b0(lVar8,uVar9,0,0x82031f);
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,"Subject",local_1d8);
            FUN_144b9efc0(lVar8,1,0);
            uVar9 = FUN_144bb4f40(uVar7);
            FUN_14526c5b0(lVar8,uVar9,0,0x82031f);
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,"Issuer",local_1d8);
            FUN_144b9efc0(lVar8,1,0);
            uVar4 = FUN_144bb5fc0(uVar7);
            FUN_144ec7640(lVar8,&DAT_149d25a20,uVar4);
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,"Version",local_1d8);
            FUN_144b9efc0(lVar8,1,0);
            piVar10 = (int *)FUN_144bb4f20(uVar7);
            if (piVar10[1] == 0x102) {
              FUN_144b9ebc0(lVar8,&DAT_149c10344);
            }
            iVar2 = 0;
            lVar6 = 0;
            if (0 < *piVar10) {
              do {
                FUN_144ec7640(lVar8,&DAT_149d25a30,
                              *(undefined1 *)(*(longlong *)(piVar10 + 2) + lVar6));
                iVar2 = iVar2 + 1;
                lVar6 = lVar6 + 1;
              } while (iVar2 < *piVar10);
            }
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,"Serial Number",local_1d8);
            FUN_144b9efc0(lVar8,1,0);
            iVar2 = 0;
            local_1c8 = 0;
            local_1b0 = 0;
            FUN_144bb5ed0(&local_1c0,&local_1c8,uVar7);
            if (local_1c8 != 0) {
              local_1b8 = 0;
              FUN_144efded0(&local_1b8,0,0);
              FUN_144ed09c0(lVar8,local_1b8);
              iVar5 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
              local_1e8 = (char *)(longlong)iVar5;
              FUN_144f0ce00(param_1,iVar3,"Signature Algorithm",local_1d8);
              FUN_144b9efc0(lVar8,1,0,0);
            }
            lVar6 = FUN_144bb6070(uVar7);
            if ((lVar6 != 0) &&
               (local_1e8 = (char *)lVar6, FUN_144bb6830(&local_1b0,0,0,0), local_1b0 != 0)) {
              FUN_144ed09c0(lVar8);
              iVar5 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
              local_1e8 = (char *)(longlong)iVar5;
              FUN_144f0ce00(param_1,iVar3,"Public Key Algorithm",local_1d8);
              FUN_144b9efc0(lVar8,1,0);
            }
            uVar9 = FUN_144bb6080(uVar7);
            iVar5 = FUN_144babbf0(uVar9);
            if ((0 < iVar5) && (iVar5 = FUN_144babbf0(uVar9), uVar7 = local_1a8, 0 < iVar5)) {
              do {
                uVar11 = FUN_144babc00(uVar9,iVar2);
                uVar7 = FUN_144b9ff50();
                lVar6 = FUN_144b9e650(uVar7);
                uVar7 = local_1a8;
                if (lVar6 == 0) break;
                uVar7 = FUN_144ef4420(uVar11);
                FUN_144ed0b30(local_c8,0x80,uVar7);
                iVar5 = FUN_145500b60(lVar6,uVar11,0,0);
                if (iVar5 == 0) {
                  uVar7 = FUN_144ef4430(uVar11);
                  FUN_1452aafe0(lVar6,uVar7);
                }
                FUN_144b9efc0(lVar6,0x73,0,&local_198);
                local_1e8 = (char *)*local_198;
                FUN_144f0ce00(param_1,iVar3,local_c8);
                FUN_144b9e7b0(lVar6);
                iVar2 = iVar2 + 1;
                iVar5 = FUN_144babbf0(uVar9);
                uVar7 = local_1a8;
              } while (iVar2 < iVar5);
            }
            uVar9 = FUN_144bb6010(uVar7);
            FUN_144ef2290(lVar8,uVar9);
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,"Start date",local_1d8);
            FUN_144b9efc0(lVar8,1,0);
            uVar9 = FUN_144bb6030(uVar7);
            FUN_144ef2290(lVar8,uVar9);
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,"Expire date",local_1d8);
            FUN_144b9efc0(lVar8,1,0);
            lVar6 = FUN_144bb4f90(uVar7);
            if (lVar6 == 0) {
              FUN_144f14ad0(param_1,"   Unable to load public key");
            }
            else {
              iVar2 = FUN_144ba6750(lVar6);
              if (iVar2 == 6) {
                uVar9 = FUN_144ba6aa0(lVar6);
                FUN_144bad880(uVar9,&local_1a0,&local_108,0);
                uVar4 = FUN_144ba03d0(local_1a0);
                FUN_144ec7640(lVar8,&DAT_1499c1968,uVar4);
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,"RSA Public Key",local_1d8);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_1a0;
                local_1e8 = "n";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25acc);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_110);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_110);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_108;
                local_1e8 = "e";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25acc);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_100);
                uVar9 = local_100;
LAB_1452b4bb4:
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,uVar9);
                FUN_144b9efc0(lVar8,1,0);
              }
              else if (iVar2 == 0x1c) {
                uVar9 = FUN_144ba6c20(lVar6);
                FUN_144ed3ed0(uVar9,&local_150,&local_140,&local_130);
                FUN_144ed3fb0(uVar9,&local_120,0);
                lVar1 = local_150;
                local_1e8 = "p";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ae8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_148);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_148);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_140;
                local_1e8 = "q";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ae8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_138);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_138);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_130;
                local_1e8 = "g";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ae8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_128);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_128);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_120;
                local_1e8 = "pub_key";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ae8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_118);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_118);
                FUN_144b9efc0(lVar8,1,0);
              }
              else if (iVar2 == 0x74) {
                uVar9 = FUN_144ba6b60(lVar6);
                FUN_144ed4550(uVar9,&local_190,&local_180,&local_170);
                FUN_144ed4620(uVar9,&local_160,0);
                lVar1 = local_190;
                local_1e8 = "p";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ad8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_188);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_188);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_180;
                local_1e8 = "q";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ad8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_178);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_178);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_170;
                local_1e8 = "g";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ad8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_168);
                local_1e8 = (char *)(longlong)iVar2;
                FUN_144f0ce00(param_1,iVar3,local_f0,local_168);
                FUN_144b9efc0(lVar8,1,0);
                lVar1 = local_160;
                local_1e8 = "pub_key";
                FUN_144f2b7e0(local_f0,0x20,"%s(%s)",&DAT_149d25ad8);
                if (lVar1 != 0) {
                  FUN_14526b420(lVar8,lVar1);
                }
                iVar2 = FUN_144b9efc0(lVar8,3,0,&local_158);
                uVar9 = local_158;
                goto LAB_1452b4bb4;
              }
              FUN_144ba6e60(lVar6);
            }
            if (local_1c0 != (int *)0x0) {
              iVar2 = 0;
              lVar6 = 0;
              if (0 < *local_1c0) {
                do {
                  FUN_144ec7640(lVar8,"%02x:",*(undefined1 *)(*(longlong *)(local_1c0 + 2) + lVar6))
                  ;
                  lVar6 = lVar6 + 1;
                  iVar2 = iVar2 + 1;
                } while (iVar2 < *local_1c0);
              }
              iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_144f0ce00(param_1,iVar3,"Signature",local_1d8);
              FUN_144b9efc0(lVar8,1,0);
            }
            FUN_144bac6c0(lVar8,uVar7);
            iVar2 = FUN_144b9efc0(lVar8,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_144f0ce00(param_1,iVar3,&DAT_149d25b04,local_1d8);
            FUN_144b9efc0(lVar8,1);
            iVar3 = iVar3 + 1;
            lVar6 = local_f8;
          } while (iVar3 < local_1d0);
        }
        FUN_144b9e7b0(lVar8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_208);
}



// FUNCTION 1452b4d20 FUN_1452b4d20 body=615 status=ok
// SIG undefined FUN_1452b4d20(void)

ulonglong FUN_1452b4d20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  plVar6 = (longlong *)FUN_144f0da50();
  lVar7 = FUN_144f0da30(param_1,param_2);
  lVar11 = 0;
  if (((((*(int *)(param_2 + 0x6c0) == 0) || (*(char *)((longlong)plVar6 + 0x69) == '\0')) ||
       (*plVar6 != 0)) || ((plVar6[9] != 0 || (*(longlong *)(lVar7 + 0x38) != 0)))) ||
     (*(char *)(lVar7 + 0xb6) != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar7 = *(longlong *)(param_2 + 0xe0);
  if (((lVar7 != 0) || (lVar7 = *(longlong *)(param_2 + 0xd8), lVar7 != 0)) &&
     ((lVar9 = *(longlong *)(lVar7 + 0xd8), lVar9 != 0 && (*(longlong *)(lVar9 + 8) != 0)))) {
    puVar8 = (undefined4 *)FUN_144f07150(local_38);
    local_58 = *(undefined4 *)(lVar9 + 0x10);
    uStack_54 = *(undefined4 *)(lVar9 + 0x14);
    uStack_50 = *(undefined4 *)(lVar9 + 0x18);
    uStack_4c = *(undefined4 *)(lVar9 + 0x1c);
    local_48 = *puVar8;
    uStack_44 = puVar8[1];
    uStack_40 = puVar8[2];
    uStack_3c = puVar8[3];
    lVar9 = FUN_144f071e0(&local_48,&local_58);
    lVar14 = (longlong)*(int *)(param_2 + 0x6c0) * 1000;
    if ((lVar14 < 0) || (lVar9 < lVar14)) {
      puVar3 = *(undefined8 **)(lVar7 + 0xd8);
      lVar9 = FUN_144f0da50(param_1);
      pcVar13 = (char *)*puVar3;
      if ((pcVar13 == (char *)0x0) || (*(longlong *)(lVar9 + 8) == 0)) {
        bVar16 = pcVar13 == *(char **)(lVar9 + 8);
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 8) - (longlong)pcVar13;
        do {
          cVar1 = *pcVar13;
          cVar2 = pcVar13[lVar9];
          if (cVar1 != cVar2) break;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        bVar16 = cVar1 == cVar2;
      }
      if ((((bVar16) && (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xd8) + 8), lVar7 != 0)) &&
          (bVar4)) && (iVar5 = FUN_144bb4270(lVar7), iVar5 != 0)) {
        FUN_144b98560(param_3,lVar7);
        return 0;
      }
    }
  }
  lVar7 = FUN_144b98550(param_3);
  uVar10 = FUN_1452b7000(param_1,param_2,lVar7);
  uVar15 = uVar10 & 0xffffffff;
  if (((int)uVar10 == 0) && (bVar4)) {
    lVar14 = FUN_144f0da50(param_1);
    lVar9 = *(longlong *)(param_2 + 0xe0);
    uVar10 = uVar15;
    if ((lVar9 != 0) || (lVar9 = *(longlong *)(param_2 + 0xd8), lVar9 != 0)) {
      plVar6 = *(longlong **)(lVar9 + 0xd8);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1,0x20);
        *(longlong **)(lVar9 + 0xd8) = plVar6;
        if (plVar6 == (longlong *)0x0) {
          return uVar15;
        }
      }
      iVar5 = FUN_144bb4270(lVar7);
      if (iVar5 != 0) {
        if ((*(longlong *)(lVar14 + 8) == 0) ||
           (lVar11 = (*(code *)PTR__strdup_14c6d9f38)(), lVar11 != 0)) {
          if (plVar6[1] != 0) {
            FUN_144bb4110();
            (*(code *)PTR_free_14c6d9f28)(*plVar6);
          }
          plVar12 = (longlong *)FUN_144f07150(local_38);
          lVar9 = *plVar12;
          lVar14 = plVar12[1];
          plVar6[1] = lVar7;
          *plVar6 = lVar11;
          plVar6[2] = lVar9;
          plVar6[3] = lVar14;
        }
        else {
          FUN_144bb4110(lVar7);
        }
      }
    }
  }
  return uVar10;
}



// FUNCTION 1452b4f90 FUN_1452b4f90 body=53 status=ok
// SIG undefined FUN_1452b4f90(void)

undefined8 FUN_1452b4f90(undefined8 param_1)

{
  FUN_144b9e8d0(param_1,1);
  FUN_144b9e8b0(param_1,1);
  FUN_144b9e890(param_1,0);
  return 1;
}



// FUNCTION 1452b4fe0 FUN_1452b4fe0 body=125 status=ok
// SIG undefined FUN_1452b4fe0(void)

uint FUN_1452b4fe0(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_144b9e8a0();
  if (param_2 == 2) {
    if (*(longlong *)(lVar2 + 8) == 0) {
      return 1;
    }
    bVar3 = *(char *)(*(longlong *)(lVar2 + 8) + 0x24) == '\0';
  }
  else {
    if (param_2 == 8) {
      uVar1 = FUN_144b9e8e0(param_1);
      return uVar1;
    }
    if (param_2 == 9) {
      FUN_144b9e8d0(param_1,param_3);
      return 1;
    }
    if (param_2 == 0xb) {
      return 1;
    }
    bVar3 = param_2 == 0xc;
  }
  return (uint)bVar3;
}



// FUNCTION 1452b5060 FUN_1452b5060 body=198 status=ok
// SIG undefined FUN_1452b5060(void)

ulonglong FUN_1452b5060(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_res18 [2];
  
  lVar3 = FUN_144b9e8a0();
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28);
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x20);
  local_res18[0] = 0x37;
  uVar4 = FUN_144f13da0(*(undefined8 *)(lVar3 + 8),uVar1,param_2,(longlong)param_3,local_res18);
  FUN_144f14c60(uVar1,lVar3,"ossl_bio_cf_out_write(len=%d) -> %d, err=%d",param_3,uVar4 & 0xffffffff
                ,local_res18[0]);
  FUN_144b9e640(param_1,0xf);
  *(int *)(lVar2 + 0x20) = local_res18[0];
  if (((longlong)uVar4 < 0) && (local_res18[0] == 0x51)) {
    FUN_144b9e620(param_1,10);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1452b5130 FUN_1452b5130 body=249 status=ok
// SIG undefined FUN_1452b5130(void)

ulonglong FUN_1452b5130(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  lVar4 = FUN_144b9e8a0();
  puVar1 = *(undefined8 **)(*(longlong *)(lVar4 + 0x10) + 0x20);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x28);
  local_res10[0] = 0x38;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144f13dc0(*(undefined8 *)(lVar4 + 8),uVar2,param_2,(longlong)param_3,local_res10);
    FUN_144f14c60(uVar2,lVar4,"ossl_bio_cf_in_read(len=%d) -> %d, err=%d",param_3,uVar5 & 0xffffffff
                  ,local_res10[0]);
    FUN_144b9e640(param_1,0xf);
    *(int *)(puVar1 + 4) = local_res10[0];
    if (((longlong)uVar5 < 0) && (local_res10[0] == 0x51)) {
      FUN_144b9e620(param_1,9);
    }
    if (*(char *)((longlong)puVar1 + 0x24) == '\0') {
      iVar3 = FUN_1452b4d20(lVar4,uVar2,*puVar1);
      if (iVar3 != 0) {
        *(int *)(puVar1 + 4) = iVar3;
        return 0xffffffff;
      }
      *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
    }
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 1452b5240 FUN_1452b5240 body=123 status=ok
// SIG undefined FUN_1452b5240(void)

char * FUN_1452b5240(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "SSL_ERROR_NONE";
  case 1:
    return "SSL_ERROR_SSL";
  case 2:
    return "SSL_ERROR_WANT_READ";
  case 3:
    return "SSL_ERROR_WANT_WRITE";
  case 4:
    return "SSL_ERROR_WANT_X509_LOOKUP";
  case 5:
    return "SSL_ERROR_SYSCALL";
  case 6:
    return "SSL_ERROR_ZERO_RETURN";
  case 7:
    return "SSL_ERROR_WANT_CONNECT";
  case 8:
    return "SSL_ERROR_WANT_ACCEPT";
  case 9:
    return "SSL_ERROR_WANT_ASYNC";
  case 10:
    return "SSL_ERROR_WANT_ASYNC_JOB";
  default:
    return "SSL_ERROR unknown";
  }
}



// FUNCTION 1452b52f0 FUN_1452b52f0 body=148 status=ok
// SIG undefined FUN_1452b52f0(void)

char * FUN_1452b52f0(int param_1,char *param_2,size_t param_3)

{
  ulonglong uVar1;
  char *_Source;
  
  *param_2 = '\0';
  uVar1 = FUN_1452b3920(param_2,param_3);
  if (uVar1 < param_3 - 2) {
    param_2 = param_2 + uVar1;
    param_3 = param_3 + (-2 - uVar1);
    param_2[0] = ':';
    param_2[1] = ' ';
    param_2 = param_2 + 2;
    *param_2 = '\0';
  }
  FUN_144ba27f0(param_1,param_2,param_3);
  if (*param_2 == '\0') {
    _Source = "No error";
    if (param_1 != 0) {
      _Source = "Unknown error";
    }
    strncpy(param_2,_Source,param_3);
    param_2[param_3 - 1] = '\0';
  }
  return param_2;
}



// FUNCTION 1452b5390 FUN_1452b5390 body=113 status=ok
// SIG undefined FUN_1452b5390(void)

int FUN_1452b5390(void *param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)((longlong)param_4 + lVar2) != '\0');
    iVar1 = FUN_144f16fb0();
    if (iVar1 < param_2) {
      memcpy(param_1,param_4,(longlong)(iVar1 + 1));
      return iVar1;
    }
  }
  return 0;
}



// FUNCTION 1452b5410 FUN_1452b5410 body=92 status=ok
// SIG undefined FUN_1452b5410(void)

undefined8 FUN_1452b5410(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0xd8) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b4) == '\0')) {
    iVar1 = FUN_144bac950();
    if (iVar1 == 0) {
      FUN_144f14b70(param_1,"Insufficient randomness");
      return 0x23;
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x1b4) = 1;
    }
  }
  return 0;
}



// FUNCTION 1452b5470 FUN_1452b5470 body=144 status=ok
// SIG undefined FUN_1452b5470(void)

undefined8 FUN_1452b5470(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = FUN_144f19540(param_1,&DAT_149d25b0c);
    if (iVar1 == 0) {
      iVar1 = FUN_144f19540(param_1,&DAT_149d25b10);
      if (iVar1 != 0) {
        return 2;
      }
      iVar1 = FUN_144f19540(param_1,&DAT_149d25b14);
      if (iVar1 != 0) {
        return 0x2a;
      }
      iVar1 = FUN_144f19540(param_1,&DAT_149d25b18);
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        uVar2 = 0x2b;
      }
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1452b5500 FUN_1452b5500 body=139 status=ok
// SIG undefined FUN_1452b5500(void)

undefined8 FUN_1452b5500(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_145502960(param_2);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    lVar2 = FUN_1455025d0(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_145502970(param_2);
      if ((uVar3 & 2) != 0) {
        FUN_1455029d0(param_1,param_2,lVar2);
        return 1;
      }
    }
  }
  uVar4 = FUN_14550b8e0();
  UNRECOVERED_JUMPTABLE = (code *)FUN_145502940(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001452b5588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar4;
}



// FUNCTION 1452b5590 FUN_1452b5590 body=107 status=ok
// SIG undefined FUN_1452b5590(void)

undefined8 FUN_1452b5590(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_145502960(param_2);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    lVar2 = FUN_1455025d0(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_145502970(param_2);
      if ((uVar3 & 2) != 0) {
        return 1;
      }
    }
  }
  uVar4 = FUN_14550b8e0();
  UNRECOVERED_JUMPTABLE = (code *)FUN_145502930(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001452b55f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar4;
}



// FUNCTION 1452b5600 FUN_1452b5600 body=2983 status=ok
// SIG undefined FUN_1452b5600(void)

void FUN_1452b5600(longlong param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                  char *param_5,char *param_6,undefined8 *param_7,undefined *param_8,
                  longlong param_9)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined1 auStack_1e8 [32];
  ulonglong *local_1c8;
  undefined4 local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  char *local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined *local_170;
  char *local_168;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_168 = param_6;
  local_178 = param_7;
  local_170 = param_8;
  local_1a8 = param_9;
  local_190 = CONCAT31(local_190._1_3_,1);
  local_198 = param_4;
  if (((param_5 == (char *)0x0) || (*param_5 == '\0')) ||
     (iVar2 = FUN_144f19540(param_5,&DAT_149d25b0c), iVar2 != 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_144f19540(param_5,&DAT_149d25b10);
    if (iVar2 == 0) {
      iVar2 = FUN_144f19540(param_5,&DAT_149d25b14);
      if (iVar2 == 0) {
        iVar4 = FUN_144f19540(param_5,&DAT_149d25b18);
        iVar2 = -1;
        if (iVar4 != 0) {
          iVar2 = 0x2b;
        }
      }
      else {
        iVar2 = 0x2a;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  if (((param_3 == (char *)0x0) && (param_4 == (undefined8 *)0x0)) && (iVar2 != 0x2a))
  goto LAB_1452b6190;
  iVar4 = 0;
  local_1b8 = local_1b8 & 0xffffffff00000000;
  if (local_1a8 != 0) {
    FUN_144b98d00(param_2,local_1a8);
    FUN_144b98cf0(param_2,FUN_1452b5390);
  }
  if (iVar2 == 1) {
    if (param_4 == (undefined8 *)0x0) {
      iVar7 = FUN_1454d6d40(param_2,param_3);
LAB_1452b5dea:
      if (iVar7 == 1) goto LAB_1452b5bc4;
    }
    else {
      lVar8 = FUN_144b9ff70(*param_4,*(undefined4 *)(param_4 + 1));
      local_1b0 = lVar8;
      if (lVar8 != 0) {
        FUN_144ba26f0();
        lVar10 = local_1a8;
        local_188 = (char *)FUN_14526c4e0(lVar8,0,FUN_1452b5390,local_1a8);
        if (local_188 == (char *)0x0) {
LAB_1452b5dc3:
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_1454d6e60(param_2,local_188);
          iVar5 = FUN_144ba2690();
          if (iVar5 != 0) goto LAB_1452b5dc3;
          if (iVar7 != 0) {
            iVar5 = FUN_144b99c10(param_2,0x58,0,0);
            if (iVar5 != 0) {
              lVar8 = FUN_144bac680(local_1b0,0,FUN_1452b5390,lVar10);
              while (lVar8 != 0) {
                iVar5 = FUN_144b99c10(param_2,0x59,0,lVar8);
                if (iVar5 == 0) {
                  FUN_144b47250(lVar8);
                  goto LAB_1452b5dc3;
                }
                lVar8 = FUN_144bac680(local_1b0,0,FUN_1452b5390,local_1a8);
              }
              uVar6 = FUN_144ba26c0();
              if (((uVar6 & 0xff000000) == 0x9000000) && ((uVar6 & 0xfff) == 0x6c)) {
                FUN_144ba26f0();
                goto LAB_1452b5dc6;
              }
            }
            goto LAB_1452b5dc3;
          }
        }
LAB_1452b5dc6:
        FUN_144b47250(local_188);
        FUN_144b9e7b0(local_1b0);
        goto LAB_1452b5dea;
      }
    }
    uVar3 = FUN_144ba2630();
    uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
    if (local_198 != (undefined8 *)0x0) {
      param_3 = "CURLOPT_SSLCERT_BLOB";
    }
    FUN_144f14b70(param_1,
                  "could not load PEM client certificate from %s, OpenSSL error %s, (no key found, wrong pass phrase, or wrong file format?)"
                  ,param_3,uVar9);
    goto LAB_1452b6190;
  }
  if (iVar2 == 2) {
    if (param_4 == (undefined8 *)0x0) {
      iVar4 = FUN_1454d6c10(param_2,param_3,2);
LAB_1452b5c63:
      if (iVar4 == 1) {
        iVar4 = (int)local_1b8;
        goto LAB_1452b5bc4;
      }
    }
    else {
      lVar8 = FUN_144b9ff70(*param_4,*(undefined4 *)(param_4 + 1));
      if (lVar8 != 0) {
        lVar10 = FUN_144bb5aa0(lVar8,0);
        if (lVar10 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_1454d6e60(param_2,lVar10);
        }
        FUN_144b47250(lVar10);
        FUN_144b9e7b0(lVar8);
        goto LAB_1452b5c63;
      }
    }
    uVar3 = FUN_144ba2630();
    uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
    if (local_198 != (undefined8 *)0x0) {
      param_3 = "CURLOPT_SSLCERT_BLOB";
    }
    FUN_144f14b70(param_1,
                  "could not load ASN1 client certificate from %s, OpenSSL error %s, (no key found, wrong pass phrase, or wrong file format?)"
                  ,param_3,uVar9);
    goto LAB_1452b6190;
  }
  if (iVar2 != 0x2a) {
    if (iVar2 != 0x2b) {
      FUN_144f14b70(param_1,"not supported file type \'%s\' for certificate",param_5);
      goto LAB_1452b6190;
    }
    local_1b8 = 0;
    if (param_4 == (undefined8 *)0x0) {
      uVar9 = FUN_144ec7470();
      lVar8 = FUN_144b9e650(uVar9);
      if (lVar8 == 0) {
        uVar3 = FUN_144ba2630();
        uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
        FUN_144f14b70(param_1,"BIO_new return NULL, OpenSSL error %s",uVar9);
        goto LAB_1452b6190;
      }
      iVar4 = FUN_144b9efc0(lVar8,0x6c,3,param_3);
      if (iVar4 < 1) {
        FUN_144f14b70(param_1,"could not open PKCS12 file \'%s\'",param_3);
        FUN_144b9e7b0(lVar8);
        goto LAB_1452b6190;
      }
    }
    else {
      lVar8 = FUN_144b9ff70(*param_4,*(undefined4 *)(param_4 + 1));
      if (lVar8 == 0) {
        uVar3 = FUN_144ba2630();
        uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
        FUN_144f14b70(param_1,"BIO_new_mem_buf NULL, OpenSSL error %s",uVar9);
        goto LAB_1452b6190;
      }
    }
    lVar10 = FUN_14550ad40(lVar8,0);
    FUN_144b9e7b0(lVar8);
    if (lVar10 == 0) {
      if (local_198 != (undefined8 *)0x0) {
        param_3 = "(memory blob)";
      }
      FUN_144f14b70(param_1,"error reading PKCS12 file \'%s\'",param_3);
      goto LAB_1452b6190;
    }
    FUN_14529b390();
    local_1c8 = &local_1b8;
    iVar4 = FUN_145501760(lVar10,local_1a8,&local_1b0,&local_1a0);
    if (iVar4 == 0) {
      uVar3 = FUN_144ba2630();
      uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
      FUN_144f14b70(param_1,"could not parse PKCS12 file, check password, OpenSSL error %s",uVar9);
      FUN_1455016d0(lVar10);
      goto LAB_1452b6190;
    }
    FUN_1455016d0(lVar10);
    iVar4 = FUN_1454d6e60(param_2,local_1a0);
    if (iVar4 == 1) {
      iVar4 = FUN_1454d6d80(param_2,local_1b0);
      if (iVar4 == 1) {
        iVar4 = FUN_144b98d10(param_2);
        if (iVar4 != 0) {
          if (local_1b8 != 0) {
            iVar4 = FUN_144babbf0();
            while (iVar4 != 0) {
              uVar9 = FUN_144bac250(local_1b8);
              iVar4 = FUN_144b9cee0(param_2,uVar9);
              if (iVar4 == 0) {
                FUN_144b47250(uVar9);
                pcVar12 = "cannot add certificate to client CA list";
LAB_1452b5a3f:
                FUN_144f14b70(param_1,pcVar12);
                goto LAB_1452b5a47;
              }
              iVar4 = FUN_144b99c10(param_2,0xe,0,uVar9);
              if (iVar4 == 0) {
                FUN_144b47250(uVar9);
                pcVar12 = "cannot add certificate to certificate chain";
                goto LAB_1452b5a3f;
              }
              iVar4 = FUN_144babbf0(local_1b8);
            }
          }
          FUN_144ba6e60(local_1b0);
          FUN_144b47250(local_1a0);
          FUN_144babe00(local_1b8,FUN_144b47250);
          iVar4 = 1;
          goto LAB_1452b5bc4;
        }
        FUN_144f14b70(param_1,
                      "private key from PKCS12 file \'%s\' does not match certificate in same file",
                      param_3);
      }
      else {
        FUN_144f14b70(param_1,"unable to use private key from PKCS12 file \'%s\'",param_3);
      }
    }
    else {
      uVar3 = FUN_144ba2630();
      uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
      FUN_144f14b70(param_1,"could not load PKCS12 client certificate, OpenSSL error %s",uVar9);
    }
LAB_1452b5a47:
    FUN_144ba6e60(local_1b0);
    FUN_144b47250(local_1a0);
    FUN_144babe00(local_1b8,FUN_144b47250);
    goto LAB_1452b6190;
  }
  if ((((*(longlong *)(param_1 + 0xe70) == 0) && (param_3 != (char *)0x0)) &&
      (iVar7 = FUN_144f195b0(param_3,"pkcs11:",7), iVar7 != 0)) &&
     (iVar7 = FUN_1452b39f0(param_1,"pkcs11"), iVar7 != 0)) goto LAB_1452b6190;
  if (*(longlong *)(param_1 + 0xe70) == 0) {
    FUN_144f14b70(param_1,"crypto engine not set, can\'t load certificate");
    goto LAB_1452b6190;
  }
  local_180 = 0;
  local_1c8 = (ulonglong *)0x0;
  local_188 = param_3;
  iVar7 = FUN_1452a28c0(*(longlong *)(param_1 + 0xe70),0xd,0,"LOAD_CERT_CTRL");
  if (iVar7 == 0) {
    FUN_144f14b70(param_1,"ssl engine does not support loading certificates");
    goto LAB_1452b6190;
  }
  local_1c0 = 1;
  local_1c8 = (ulonglong *)0x0;
  iVar7 = FUN_1452a2aa0(*(undefined8 *)(param_1 + 0xe70),"LOAD_CERT_CTRL",0,&local_188);
  if (iVar7 == 0) {
    uVar3 = FUN_144ba2630();
    uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
    FUN_144f14b70(param_1,"ssl engine cannot load client cert with id \'%s\' [%s]",param_3,uVar9);
    goto LAB_1452b6190;
  }
  if (local_180 == 0) {
    FUN_144f14b70(param_1,"ssl engine didn\'t initialized the certificate properly.");
    goto LAB_1452b6190;
  }
  iVar7 = FUN_1454d6e60(param_2);
  if (iVar7 != 1) {
    uVar3 = FUN_144ba2630();
    uVar9 = FUN_1452b52f0(uVar3,local_158,0x100);
    FUN_144f14b70(param_1,"unable to set client certificate [%s]",uVar9);
    goto LAB_1452b6190;
  }
  FUN_144b47250(local_180);
LAB_1452b5bc4:
  pcVar12 = local_168;
  iVar7 = 0;
  if ((local_168 != (char *)0x0) || (puVar13 = local_198, local_178 != (undefined8 *)0x0)) {
    iVar2 = FUN_1452b5470(local_170);
    puVar13 = local_178;
    param_3 = pcVar12;
  }
  if (iVar2 == 1) {
    if (iVar4 == 0) goto LAB_1452b6020;
  }
  else {
    if (iVar2 == 2) {
LAB_1452b6020:
      if (puVar13 == (undefined8 *)0x0) {
        iVar7 = FUN_1454d6ae0(param_2,param_3,iVar2);
LAB_1452b60a0:
        if (iVar7 == 1) goto LAB_1452b5fdc;
      }
      else {
        lVar8 = FUN_144b9ff70(*puVar13,*(undefined4 *)(puVar13 + 1));
        if (lVar8 != 0) {
          if (iVar2 == 1) {
            lVar10 = FUN_144eea6a0(lVar8,0,FUN_1452b5390,local_1a8);
LAB_1452b6067:
            if (lVar10 != 0) {
              iVar7 = FUN_1454d6d80(param_2,lVar10);
              FUN_144ba6e60(lVar10);
            }
          }
          else if (iVar2 == 2) {
            lVar10 = FUN_144bb5b20(lVar8,0);
            goto LAB_1452b6067;
          }
          FUN_144b9e7b0(lVar8);
          goto LAB_1452b60a0;
        }
      }
      puVar14 = &DAT_149d25b0c;
      if (local_170 != (undefined *)0x0) {
        puVar14 = local_170;
      }
      pcVar12 = "(memory blob)";
      if (param_3 != (char *)0x0) {
        pcVar12 = param_3;
      }
      FUN_144f14b70(param_1,"unable to set private key file: \'%s\' type %s",pcVar12,puVar14);
      goto LAB_1452b6190;
    }
    if (iVar2 == 0x2a) {
      if (*(longlong *)(param_1 + 0xe70) == 0) {
        if (((param_3 != (char *)0x0) && (iVar2 = FUN_144f195b0(param_3,"pkcs11:",7), iVar2 != 0))
           && (iVar2 = FUN_1452b39f0(param_1,"pkcs11"), iVar2 != 0)) goto LAB_1452b6190;
        if (*(longlong *)(param_1 + 0xe70) == 0) {
          FUN_144f14b70(param_1,"crypto engine not set, can\'t load private key");
          goto LAB_1452b6190;
        }
      }
      lVar8 = FUN_1455027b0("curl user interface");
      if (lVar8 == 0) {
        FUN_144f14b70(param_1,"unable do create OpenSSL user-interface method");
        goto LAB_1452b6190;
      }
      uVar9 = FUN_14550b8e0();
      uVar9 = FUN_145502920(uVar9);
      FUN_1455028e0(lVar8,uVar9);
      uVar9 = FUN_14550b8e0();
      uVar9 = FUN_145502950(uVar9);
      FUN_145502910(lVar8,uVar9);
      FUN_145502900(lVar8,FUN_1452b5500);
      FUN_1455028f0(lVar8,FUN_1452b5590);
      lVar10 = FUN_145279570(*(undefined8 *)(param_1 + 0xe70),param_3,lVar8,local_1a8);
      FUN_145502880(lVar8);
      if (lVar10 == 0) {
        FUN_144f14b70(param_1,"failed to load private key from crypto engine");
        goto LAB_1452b6190;
      }
      iVar2 = FUN_1454d6d80(param_2,lVar10);
      if (iVar2 != 1) {
        FUN_144f14b70(param_1,"unable to set private key");
        FUN_144ba6e60(lVar10);
        goto LAB_1452b6190;
      }
      FUN_144ba6e60(lVar10);
    }
    else {
      if (iVar2 != 0x2b) {
        FUN_144f14b70(param_1,"not supported file type for private key");
        goto LAB_1452b6190;
      }
      if (iVar4 == 0) {
        FUN_144f14b70(param_1,"file type P12 for private key not supported");
        goto LAB_1452b6190;
      }
    }
  }
LAB_1452b5fdc:
  lVar8 = FUN_144b98df0(param_2);
  if (lVar8 == 0) {
    FUN_144f14b70(param_1,"unable to create an SSL structure");
  }
  else {
    local_1a0 = FUN_144b9a820(lVar8);
    if (local_1a0 != 0) {
      uVar9 = FUN_144bb4f90(local_1a0);
      uVar11 = FUN_144b9a840(lVar8);
      FUN_144ba6ec0(uVar9,uVar11);
      FUN_144ba6e60(uVar9);
    }
    uVar9 = FUN_144b9a840(lVar8);
    iVar2 = FUN_144ba6750(uVar9);
    if (iVar2 == 6) {
      uVar9 = FUN_144ba6af0(uVar9);
      bVar1 = FUN_144bae4b0(uVar9);
      FUN_144bad8c0(uVar9);
      bVar1 = bVar1 & 1 ^ 1;
    }
    else {
      bVar1 = (byte)local_190;
    }
    FUN_144b993a0(lVar8);
    if ((bVar1 == 1) && (iVar2 = FUN_144b98d10(param_2), iVar2 == 0)) {
      FUN_144f14b70(param_1,"Private key does not match the certificate public key");
    }
  }
LAB_1452b6190:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 1452b61c0 FUN_1452b61c0 body=180 status=ok
// SIG undefined FUN_1452b61c0(void)

bool FUN_1452b61c0(undefined8 param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong _Size;
  ulonglong *local_res20;
  
  uVar2 = FUN_144b9ff50();
  lVar3 = FUN_144b9e650(uVar2);
  if (lVar3 == 0) {
    return true;
  }
  iVar1 = FUN_14526c5b0(lVar3,param_1,0,0x30000);
  FUN_144b9efc0(lVar3,0x73,0,&local_res20);
  _Size = *local_res20;
  if (param_3 <= *local_res20) {
    _Size = param_3 - 1;
  }
  memcpy(param_2,(void *)local_res20[1],_Size);
  *(undefined1 *)(_Size + (longlong)param_2) = 0;
  FUN_144b9e7b0(lVar3);
  return iVar1 == 0;
}



// FUNCTION 1452b6280 FUN_1452b6280 body=1051 status=ok
// SIG undefined FUN_1452b6280(void)

void FUN_1452b6280(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  size_t sVar6;
  longlong lVar7;
  undefined8 uVar8;
  size_t _Size;
  uint unaff_EBX;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  char local_88;
  char local_87;
  char local_86;
  uint local_84;
  void *local_80;
  undefined8 local_78;
  size_t local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar12 = 0;
  uVar9 = unaff_EBX & 0xffffff00;
  lVar10 = -1;
  local_78 = param_5;
  iVar3 = 2;
  local_70 = 0;
  local_86 = '\0';
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(char *)(param_4 + lVar11) != '\0');
  local_84 = uVar9;
  local_60 = param_3;
  local_58 = param_4;
  if ((*(char *)(param_2 + 0x2d3) == '\0') || (iVar2 = inet_pton(0x17,param_4,local_50), iVar2 == 0)
     ) {
    iVar2 = inet_pton(2,param_4,local_50);
    if (iVar2 != 0) {
      local_70 = 4;
      goto LAB_1452b6333;
    }
  }
  else {
    local_70 = 0x10;
LAB_1452b6333:
    iVar3 = 7;
  }
  local_68 = FUN_144eac5d0(local_60,0x55,0);
  if (local_68 != 0) {
    cVar1 = '\0';
    local_88 = '\0';
    local_87 = '\0';
    iVar2 = FUN_144babbf0(local_68);
    lVar7 = local_68;
    local_80 = (void *)CONCAT44(local_80._4_4_,iVar2);
    if (0 < iVar2) {
      do {
        if (cVar1 != '\0') break;
        piVar4 = (int *)FUN_144babc00(lVar7,iVar12);
        iVar2 = *piVar4;
        if (iVar2 == 2) {
          local_86 = '\x01';
        }
        else {
          local_84 = uVar9 & 0xff;
          uVar9 = local_84;
          if (iVar2 == 7) {
            local_84 = 1;
            uVar9 = local_84;
          }
        }
        if (iVar2 == iVar3) {
          pvVar5 = (void *)FUN_144f03e90(*(undefined8 *)(piVar4 + 2));
          iVar2 = FUN_144f03e70(*(undefined8 *)(piVar4 + 2));
          _Size = (size_t)iVar2;
          uVar9 = local_84;
          if (iVar3 == 2) {
            sVar6 = 0xffffffffffffffff;
            do {
              sVar6 = sVar6 + 1;
            } while (*(char *)((longlong)pvVar5 + sVar6) != '\0');
            if ((_Size == sVar6) &&
               (cVar1 = FUN_14550a900(pvVar5,_Size,local_58,lVar11), uVar9 = local_84, cVar1 != '\0'
               )) {
              FUN_144f14ad0(param_1," subjectAltName: host \"%s\" matched cert\'s \"%s\"",local_78,
                            pvVar5);
              local_88 = '\x01';
              uVar9 = local_84;
            }
          }
          else if (((iVar3 == 7) && (_Size == local_70)) &&
                  (iVar2 = memcmp(pvVar5,local_50,_Size), uVar9 = local_84, iVar2 == 0)) {
            local_87 = '\x01';
            FUN_144f14ad0(param_1," subjectAltName: host \"%s\" matched cert\'s IP address!",
                          local_78);
            uVar9 = local_84;
          }
        }
        iVar12 = iVar12 + 1;
        cVar1 = local_88;
      } while (iVar12 < (int)local_80);
    }
    FUN_144ef4900(local_68);
    if ((cVar1 != '\0') || (local_87 != '\0')) goto LAB_1452b668e;
    if ((local_86 != '\0') || (param_5 = local_78, (char)uVar9 != '\0')) {
      FUN_144f14ad0(param_1," subjectAltName does not match %s",local_78);
      FUN_144f14b70(param_1,
                    "SSL: no alternative certificate subject name matches target host name \'%s\'",
                    local_78);
      goto LAB_1452b668e;
    }
  }
  local_80 = (void *)0x0;
  lVar7 = FUN_144bb4f50(local_60);
  iVar3 = 0;
  if ((lVar7 == 0) || (iVar12 = FUN_144ef3b20(lVar7,0xd,0xffffffff), iVar3 = 0, iVar12 < 0)) {
LAB_1452b660c:
    if (local_80 == (void *)0x0) {
LAB_1452b6616:
      FUN_144f14b70(param_1,"SSL: unable to obtain common name from peer certificate");
    }
    else {
      cVar1 = FUN_14550a900(local_80,(longlong)iVar3,local_58,lVar11);
      if (cVar1 == '\0') {
        FUN_144f14b70(param_1,
                      "SSL: certificate subject name \'%s\' does not match target host name \'%s\'",
                      local_80,param_5);
      }
      else {
        FUN_144f14ad0(param_1," common name: %s (matched)",local_80);
      }
    }
  }
  else {
    do {
      iVar2 = iVar12;
      iVar12 = FUN_144ef3b20(lVar7,0xd,iVar2);
    } while (-1 < iVar12);
    uVar8 = FUN_144ef3c20(lVar7,iVar2);
    lVar7 = FUN_144ef4210(uVar8);
    if (lVar7 == 0) goto LAB_1452b660c;
    iVar3 = FUN_144f03e80(lVar7);
    if (iVar3 != 0xc) {
      iVar3 = FUN_14526c520(&local_80,lVar7);
LAB_1452b65d0:
      if (local_80 != (void *)0x0) {
        do {
          lVar10 = lVar10 + 1;
        } while (*(char *)((longlong)local_80 + lVar10) != '\0');
        iVar12 = FUN_144f16fb0(lVar10);
        if (iVar12 == iVar3) goto LAB_1452b660c;
        FUN_144f14b70(param_1,"SSL: illegal cert name field");
        goto LAB_1452b666c;
      }
      goto LAB_1452b6616;
    }
    iVar3 = FUN_144f03e70(lVar7);
    if (iVar3 < 0) goto LAB_1452b65d0;
    local_80 = (void *)FUN_144ea64e0((longlong)(iVar3 + 1),
                                     "D:\\UE5\\Engine\\Source\\ThirdParty\\libcurl\\8.4.0\\curl-8.4.0\\curl-8.4.0\\lib\\vtls\\openssl.c"
                                     ,0x8f5);
    if (local_80 != (void *)0x0) {
      pvVar5 = (void *)FUN_144f03e90(lVar7);
      memcpy(local_80,pvVar5,(longlong)iVar3);
      *(undefined1 *)((longlong)iVar3 + (longlong)local_80) = 0;
      goto LAB_1452b65d0;
    }
  }
LAB_1452b666c:
  if (local_80 != (void *)0x0) {
    FUN_144ea6530(local_80,
                  "D:\\UE5\\Engine\\Source\\ThirdParty\\libcurl\\8.4.0\\curl-8.4.0\\curl-8.4.0\\lib\\vtls\\openssl.c"
                  ,0x91c);
  }
LAB_1452b668e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452b66c0 FUN_1452b66c0 body=812 status=ok
// SIG undefined FUN_1452b66c0(void)

undefined4 FUN_1452b66c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  int local_res8 [2];
  undefined4 local_res18 [2];
  longlong local_res20;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  
  uVar12 = 0;
  lVar4 = 0;
  lVar10 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x20);
  uVar2 = FUN_144b99870(puVar1[1],0x46,0,&local_res20);
  if (local_res20 == 0) {
    FUN_144f14b70(param_2,"No OCSP response received");
    uVar12 = 0x5b;
    goto LAB_1452b69d5;
  }
  local_58 = local_res20;
  lVar4 = FUN_144ec67d0(0,&local_58,uVar2);
  if (lVar4 == 0) {
    FUN_144f14b70(param_2,"Invalid OCSP response");
    uVar12 = 0x5b;
    goto LAB_1452b69d5;
  }
  iVar3 = FUN_144ec6250(lVar4);
  if (iVar3 != 0) {
    uVar5 = FUN_14550ad80(iVar3);
    FUN_144f14b70(param_2,"Invalid OCSP response status: %s (%d)",uVar5,iVar3);
    uVar12 = 0x5b;
    goto LAB_1452b69d5;
  }
  lVar6 = FUN_144ec6270(lVar4);
  if (lVar6 == 0) {
    FUN_144f14b70(param_2,"Invalid OCSP response");
    uVar12 = 0x5b;
    goto LAB_1452b69d5;
  }
  lVar7 = FUN_144b98cb0(puVar1[1]);
  if (lVar7 == 0) {
    FUN_144f14b70(param_2,"Could not get peer certificate chain");
    uVar12 = 0x5b;
  }
  else {
    uVar5 = FUN_144b98550(*puVar1);
    iVar3 = FUN_14550ae10(lVar6,lVar7,uVar5,0);
    if (iVar3 < 1) {
      FUN_144f14b70(param_2,"OCSP response verification failed");
      uVar12 = 0x5b;
    }
    else {
      lVar8 = FUN_144b98c60(puVar1[1]);
      if (lVar8 == 0) {
        FUN_144f14b70(param_2,"Error getting peer certificate");
        uVar12 = 0x5b;
      }
      else {
        iVar11 = 0;
        iVar3 = FUN_144babbf0(lVar7);
        if (iVar3 < 1) {
LAB_1452b689e:
          FUN_144b47250(lVar8);
          if (lVar10 != 0) {
            iVar3 = FUN_144ec6410(lVar6,lVar10,local_res8,local_res18,local_40,&local_48,&local_50);
            FUN_144ec6810(lVar10);
            if (iVar3 == 1) {
              iVar3 = FUN_144ec64e0(local_48,local_50,300,0xffffffff);
              if (iVar3 == 0) {
                FUN_144f14b70(param_2,"OCSP response has expired");
                uVar12 = 0x5b;
              }
              else {
                uVar5 = FUN_14550adb0(local_res8[0]);
                FUN_144f14ad0(param_2,"SSL certificate status: %s (%d)",uVar5,local_res8[0]);
                if ((local_res8[0] != 0) && (uVar12 = 0x5b, local_res8[0] == 1)) {
                  uVar5 = FUN_14550ade0(local_res18[0]);
                  FUN_144f14b70(param_2,"SSL certificate revocation reason: %s (%d)",uVar5,
                                local_res18[0]);
                }
              }
            }
            else {
              FUN_144f14b70(param_2,"Could not find certificate ID in OCSP response");
              uVar12 = 0x5b;
            }
            goto LAB_1452b69bb;
          }
        }
        else {
          do {
            uVar5 = FUN_144babc00(lVar7,iVar11);
            iVar3 = FUN_144ec54e0(uVar5,lVar8);
            if (iVar3 == 0) {
              uVar9 = FUN_144bab020();
              lVar10 = FUN_1452820c0(uVar9,lVar8,uVar5);
              goto LAB_1452b689e;
            }
            iVar11 = iVar11 + 1;
            iVar3 = FUN_144babbf0(lVar7);
          } while (iVar11 < iVar3);
          FUN_144b47250(lVar8);
        }
        FUN_144f14b70(param_2,"Error computing OCSP ID");
        uVar12 = 0x5b;
      }
    }
  }
LAB_1452b69bb:
  FUN_144ec6720(lVar6);
LAB_1452b69d5:
  FUN_144ec67b0(lVar4);
  return uVar12;
}



// FUNCTION 1452b69f0 FUN_1452b69f0 body=873 status=ok
// SIG undefined FUN_1452b69f0(void)

void FUN_1452b69f0(uint param_1,int param_2,int param_3,char *param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_4b8 [32];
  undefined *local_498;
  char *local_490;
  char *local_488;
  int local_480;
  char local_470 [40];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if ((((param_7 == 0) || (lVar1 = *(longlong *)(*(longlong *)(param_7 + 0x10) + 0x28), lVar1 == 0))
      || (*(longlong *)(lVar1 + 0x268) == 0)) || (1 < param_1)) goto LAB_1452b6d49;
  if (param_2 < 0x302) {
    if (param_2 == 0x301) {
      pcVar5 = "TLSv1.0";
      goto LAB_1452b6aec;
    }
    if (param_2 != 0) {
      if (param_2 == 2) {
        pcVar5 = "SSLv2";
      }
      else {
        if (param_2 != 0x300) goto LAB_1452b6aab;
        pcVar5 = "SSLv3";
      }
      goto LAB_1452b6aec;
    }
  }
  else {
    if (param_2 == 0x302) {
      pcVar5 = "TLSv1.1";
    }
    else if (param_2 == 0x303) {
      pcVar5 = "TLSv1.2";
    }
    else if (param_2 == 0x304) {
      pcVar5 = "TLSv1.3";
    }
    else {
LAB_1452b6aab:
      FUN_144f2b7e0(local_470,0x20,&DAT_149d25020,param_2);
      pcVar5 = local_470;
      if (param_2 == 0) goto LAB_1452b6d1a;
    }
LAB_1452b6aec:
    if ((param_3 != 0x100) && (param_3 != 0x101)) {
      if ((param_2 >> 8 == 3) && (param_3 != 0)) {
        if (param_3 == 0x14) {
          iVar4 = (int)*param_4;
          pcVar3 = "TLS change cipher";
          local_488 = "Change cipher spec";
        }
        else {
          if (param_3 == 0x15) {
            iVar4 = (int)*param_4;
            pcVar3 = "TLS alert";
            goto LAB_1452b6bb2;
          }
          if (param_3 == 0x16) {
            iVar4 = (int)*param_4;
            pcVar3 = "TLS handshake";
          }
          else if (param_3 == 0x17) {
            iVar4 = (int)*param_4;
            pcVar3 = "TLS app data";
          }
          else {
            if (param_3 != 0x100) {
              pcVar3 = "TLS Unknown";
              goto LAB_1452b6b94;
            }
            iVar4 = (int)*param_4;
            pcVar3 = "TLS header";
          }
LAB_1452b6bd5:
          switch(iVar4) {
          case 0:
            local_488 = "Hello request";
            break;
          case 1:
            local_488 = "Client hello";
            break;
          case 2:
            local_488 = "Server hello";
            break;
          default:
            goto switchD_1452b6bfd_caseD_3;
          case 4:
            local_488 = "Newsession Ticket";
            break;
          case 5:
            local_488 = "End of early data";
            break;
          case 8:
            local_488 = "Encrypted Extensions";
            break;
          case 0xb:
            local_488 = "Certificate";
            break;
          case 0xc:
            local_488 = "Server key exchange";
            break;
          case 0xd:
            local_488 = "Request CERT";
            break;
          case 0xe:
            local_488 = "Server finished";
            break;
          case 0xf:
            local_488 = "CERT verify";
            break;
          case 0x10:
            local_488 = "Client key exchange";
            break;
          case 0x14:
            local_488 = "Finished";
            break;
          case 0x16:
            local_488 = "Certificate Status";
            break;
          case 0x17:
            local_488 = "Supplemental data";
            break;
          case 0x18:
            local_488 = "Key update";
            break;
          case 0x43:
            local_488 = "Next protocol";
            break;
          case 0xfe:
            local_488 = "Message hash";
          }
        }
      }
      else {
        pcVar3 = "";
LAB_1452b6b94:
        if (param_3 == 0x14) {
          iVar4 = (int)*param_4;
          local_488 = "Change cipher spec";
        }
        else {
          iVar4 = (int)*param_4;
          if (param_3 == 0x15) {
LAB_1452b6bb2:
            iVar4 = (int)param_4[1] + iVar4 * 0x100;
            local_488 = (char *)FUN_14550a530(iVar4);
          }
          else {
            if (param_2 >> 8 == 3) goto LAB_1452b6bd5;
switchD_1452b6bfd_caseD_3:
            local_488 = "Unknown";
          }
        }
      }
      local_498 = &DAT_149d25040;
      if (param_1 != 0) {
        local_498 = &DAT_149d2503c;
      }
      local_490 = pcVar3;
      local_480 = iVar4;
      uVar2 = FUN_144f2b7e0(local_448,0x400,"%s (%s), %s, %s (%d):\n",pcVar5);
      if ((-1 < (int)uVar2) && (uVar2 < 0x400)) {
        FUN_144f149e0(lVar1,0,local_448,(longlong)(int)uVar2);
      }
    }
  }
LAB_1452b6d1a:
  FUN_144f149e0(lVar1,(param_1 == 1) + '\x05',param_4,param_5);
LAB_1452b6d49:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_4b8);
}



// FUNCTION 1452b6ec0 FUN_1452b6ec0 body=314 status=ok
// SIG undefined FUN_1452b6ec0(void)

undefined4 FUN_1452b6ec0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char local_res18 [8];
  longlong local_res20;
  
  lVar5 = 0;
  lVar3 = FUN_144b9aac0(param_1,0);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) {
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28);
  }
  if (lVar5 == 0) {
    return 0;
  }
  cVar1 = FUN_144f0daa0(lVar3);
  lVar4 = FUN_144f0da30(lVar3,lVar5);
  if (*(char *)(lVar4 + 0x6c) == '\0') {
    return 0;
  }
  local_res18[0] = '\0';
  local_res20 = 0;
  FUN_144f0cf00(lVar5);
  if ((cVar1 == '\0') && (cVar1 = FUN_144f0dab0(lVar3,lVar5,&local_res20,0), cVar1 == '\0')) {
    if (local_res20 == param_2) goto LAB_1452b6fcf;
    FUN_144f14ad0(lVar5,"old SSL session ID is stale, removing");
    FUN_144f0cfb0(lVar5,local_res20);
  }
  iVar2 = FUN_144f0dc90(lVar3,lVar5,param_2,0,local_res18);
  if (iVar2 == 0) {
    if (local_res18[0] != '\0') {
      FUN_144f0cf30(lVar5);
      return 1;
    }
  }
  else {
    FUN_144f14b70(lVar5,"failed to store ssl session");
  }
LAB_1452b6fcf:
  FUN_144f0cf30(lVar5);
  return 0;
}



// FUNCTION 1452b7000 FUN_1452b7000 body=1489 status=ok
// SIG undefined FUN_1452b7000(void)

undefined4 FUN_1452b7000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  LPSTR *ppCVar3;
  PCERT_ENHKEY_USAGE p_Var4;
  LONG LVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  PCERT_ENHKEY_USAGE pUsage;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  undefined1 *puVar24;
  byte local_res20 [8];
  uint local_84;
  uint local_80;
  _FILETIME local_78;
  HCERTSTORE local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong local_50;
  longlong local_48;
  BYTE *local_40;
  
  puVar10 = (undefined8 *)FUN_144f0da50();
  local_48 = FUN_144f0da30(param_1,param_2);
  local_68 = (undefined8 *)puVar10[9];
  if (local_68 == (undefined8 *)0x0) {
    local_60 = (undefined1 *)puVar10[1];
  }
  else {
    local_60 = (undefined1 *)0x0;
  }
  local_58 = (undefined1 *)*puVar10;
  cVar1 = *(char *)((longlong)puVar10 + 0x69);
  bVar21 = false;
  local_50 = *(longlong *)(local_48 + 0x38);
  if (param_3 == 0) {
    return 0x1b;
  }
  if (cVar1 == '\0') goto LAB_1452b7510;
  bVar22 = false;
  if (*(char *)(local_48 + 0xb6) != '\0') {
    hCertStore = CertOpenSystemStoreA(0,"ROOT");
    local_70 = hCertStore;
    if (hCertStore != (HCERTSTORE)0x0) {
      local_80 = 0;
      pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
      p_Var4 = (PCERT_ENHKEY_USAGE)0x0;
      uVar2 = 0;
      bVar21 = false;
      while (pCertContext != (PCCERT_CONTEXT)0x0) {
        local_40 = pCertContext->pbCertEncoded;
        pUsage = p_Var4;
        if (local_40 != (BYTE *)0x0) {
          GetSystemTimeAsFileTime(&local_78);
          LVar5 = CompareFileTime(&pCertContext->pCertInfo->NotBefore,&local_78);
          if ((LVar5 < 1) &&
             (LVar5 = CompareFileTime(&local_78,&pCertContext->pCertInfo->NotAfter), LVar5 < 1)) {
            BVar6 = CertGetIntendedKeyUsage
                              (pCertContext->dwCertEncodingType,pCertContext->pCertInfo,local_res20,
                               2);
            if (BVar6 == 0) {
              DVar7 = GetLastError();
              if (DVar7 == 0) goto LAB_1452b7182;
            }
            else if ((local_res20[0] & 4) != 0) {
LAB_1452b7182:
              BVar6 = CertGetEnhancedKeyUsage(pCertContext,0,(PCERT_ENHKEY_USAGE)0x0,&local_84);
              if (BVar6 != 0) {
                if ((local_84 != 0) && (uVar2 < local_84)) {
                  pUsage = (PCERT_ENHKEY_USAGE)(*(code *)PTR_realloc_14c6d9f30)(p_Var4,local_84);
                  if (pUsage == (PCERT_ENHKEY_USAGE)0x0) {
                    FUN_144f14b70(param_2,"SSL: Out of memory allocating for OID list");
                    (*(code *)PTR_free_14c6d9f28)(p_Var4);
                    CertFreeCertificateContext(pCertContext);
                    CertCloseStore(hCertStore,0);
                    return 0x1b;
                  }
                  local_80 = local_84;
                }
                BVar6 = CertGetEnhancedKeyUsage(pCertContext,0,pUsage,&local_84);
                if (BVar6 != 0) {
                  uVar2 = pUsage->cUsageIdentifier;
                  if (uVar2 == 0) {
                    DVar7 = GetLastError();
                    if (DVar7 == 0x80092004) {
LAB_1452b7236:
                      lVar11 = FUN_144bb5d50(0,&local_40);
                      if (lVar11 != 0) {
                        iVar8 = FUN_144bb4960(param_3,lVar11);
                        if (iVar8 == 1) {
                          bVar21 = true;
                        }
                        FUN_144b47250(lVar11);
                      }
                    }
                  }
                  else {
                    uVar18 = 0;
                    if (uVar2 != 0) {
                      ppCVar3 = pUsage->rgpszUsageIdentifier;
                      do {
                        iVar8 = strcmp("1.3.6.1.5.5.7.3.1",ppCVar3[uVar18]);
                        hCertStore = local_70;
                        if (iVar8 == 0) goto LAB_1452b7236;
                        uVar16 = (int)uVar18 + 1;
                        uVar18 = (ulonglong)uVar16;
                      } while (uVar16 < uVar2);
                    }
                  }
                }
              }
            }
          }
        }
        pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext);
        p_Var4 = pUsage;
        uVar2 = local_80;
      }
      (*(code *)PTR_free_14c6d9f28)(p_Var4);
      CertFreeCertificateContext((PCCERT_CONTEXT)0x0);
      CertCloseStore(hCertStore,0);
      if (bVar21) {
        FUN_144f14ad0(param_2,"successfully imported Windows CA store");
        bVar22 = bVar21;
        goto LAB_1452b7326;
      }
    }
    FUN_144f14ad0(param_2,"error importing Windows CA store, continuing anyway");
    bVar22 = bVar21;
  }
LAB_1452b7326:
  bVar21 = false;
  if (local_68 != (undefined8 *)0x0) {
    iVar8 = 0;
    if (0x7fffffff < (ulonglong)local_68[1]) {
LAB_1452b7387:
      FUN_144f14b70(param_2,"error importing CA certificate blob");
      return 0x4d;
    }
    lVar11 = FUN_144b9ff70(*local_68,local_68[1] & 0xffffffff);
    if (lVar11 == 0) {
      FUN_144f14b70(param_2,"error importing CA certificate blob");
      return 0x1b;
    }
    lVar12 = FUN_14526bfa0(lVar11,0,0,0);
    if (lVar12 == 0) {
      FUN_144b9e7b0(lVar11);
      goto LAB_1452b7387;
    }
    iVar23 = 0;
    iVar9 = FUN_144babbf0(lVar12);
    iVar17 = 0;
    if (0 < iVar9) {
      do {
        plVar13 = (longlong *)FUN_144babc00(lVar12,iVar23);
        if (*plVar13 != 0) {
          iVar8 = FUN_144bb4960(param_3);
          if (iVar8 != 0) {
            iVar17 = iVar17 + 1;
            goto LAB_1452b73d5;
          }
LAB_1452b73fc:
          iVar8 = 0;
          break;
        }
LAB_1452b73d5:
        iVar8 = iVar17;
        if (plVar13[1] != 0) {
          iVar8 = FUN_144bb49b0(param_3);
          if (iVar8 == 0) goto LAB_1452b73fc;
          iVar8 = iVar17 + 1;
        }
        iVar23 = iVar23 + 1;
        iVar9 = FUN_144babbf0(lVar12);
        iVar17 = iVar8;
      } while (iVar23 < iVar9);
    }
    FUN_144babe00(lVar12,FUN_14526bf30);
    FUN_144b9e7b0(lVar11);
    if (iVar8 < 1) {
      FUN_144f14b70(param_2,"error importing CA certificate blob");
      return 0x4d;
    }
    bVar21 = true;
    FUN_144f14ad0(param_2,"successfully imported CA certificate blob");
  }
  puVar19 = local_58;
  puVar20 = local_60;
  if ((local_60 != (undefined1 *)0x0) || (local_58 != (undefined1 *)0x0)) {
    iVar8 = FUN_144eaad90(param_3,local_60,local_58);
    if (iVar8 == 0) {
      if ((!bVar22) && (!bVar21)) {
        puVar24 = &DAT_149c0726c;
        if (puVar19 != (undefined1 *)0x0) {
          puVar24 = puVar19;
        }
        puVar19 = &DAT_149c0726c;
        if (puVar20 != (undefined1 *)0x0) {
          puVar19 = puVar20;
        }
        FUN_144f14b70(param_2,"error setting certificate verify locations:  CAfile: %s CApath: %s",
                      puVar19,puVar24);
        return 0x4d;
      }
      FUN_144f14ad0(param_2,"error setting certificate verify locations, continuing anyway");
    }
    puVar24 = &DAT_149c0726c;
    if (puVar20 != (undefined1 *)0x0) {
      puVar24 = puVar20;
    }
    FUN_144f14ad0(param_2," CAfile: %s",puVar24);
    puVar20 = &DAT_149c0726c;
    if (puVar19 != (undefined1 *)0x0) {
      puVar20 = puVar19;
    }
    FUN_144f14ad0(param_2," CApath: %s",puVar20);
  }
LAB_1452b7510:
  lVar12 = local_48;
  lVar11 = local_50;
  if (local_50 != 0) {
    uVar14 = FUN_144eaa8a0();
    lVar15 = FUN_144bb4850(param_3,uVar14);
    if ((lVar15 == 0) || (iVar8 = FUN_144eaaa60(lVar15,lVar11,1), iVar8 == 0)) {
      FUN_144f14b70(param_2,"error loading CRL file: %s",lVar11);
      return 0x52;
    }
    FUN_144f14ad0(param_2,"successfully loaded CRL file:");
    FUN_144bb4610(param_3,0xc);
    FUN_144f14ad0(param_2,"  CRLfile: %s",lVar11);
  }
  if (((cVar1 != '\0') && (FUN_144bb4610(param_3,0x8000), *(char *)(lVar12 + 0xb4) == '\0')) &&
     (lVar11 == 0)) {
    FUN_144bb4610(param_3,0x80000);
  }
  return 0;
}



// FUNCTION 1452b75e0 FUN_1452b75e0 body=2304 status=ok
// SIG undefined FUN_1452b75e0(void)

void FUN_1452b75e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined1 auStack_618 [32];
  longlong local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  char local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  longlong local_5a0;
  longlong local_598;
  undefined8 local_590;
  undefined1 local_588 [16];
  undefined1 local_578 [36];
  undefined4 local_554;
  undefined1 local_548 [256];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_618;
  lVar13 = *(longlong *)(param_1 + 0x10);
  local_5b0 = 0;
  local_5a8 = lVar13;
  lVar9 = FUN_144f0da50();
  local_598 = lVar9;
  lVar10 = FUN_144f0da30(param_1,param_2);
  local_590 = *(undefined8 *)(lVar13 + 8);
  uVar1 = *(undefined1 *)(lVar9 + 0x68);
  local_5a0 = *(longlong *)(lVar10 + 0x18);
  local_5b8 = *(longlong *)(lVar10 + 0x40);
  local_5c0 = *(longlong *)(lVar10 + 0x88);
  local_5c8 = *(char *)(lVar9 + 0x69);
  plVar2 = *(longlong **)(lVar13 + 0x20);
  if ((*(longlong *)(param_2 + 0xd8) == 0) ||
     (*(char *)(*(longlong *)(param_2 + 0xd8) + 0x1b4) == '\0')) {
    iVar6 = FUN_144bac950();
    if (iVar6 == 0) {
      FUN_144f14b70(param_2,"Insufficient randomness");
      goto LAB_1452b7ac8;
    }
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      *(undefined1 *)(*(longlong *)(param_2 + 0xd8) + 0x1b4) = 1;
    }
  }
  *(undefined4 *)(lVar10 + 0x70) = 1;
  switch(uVar1) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    uVar11 = FUN_144b9e530();
    if (*plVar2 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (plVar3[1] != 0) {
        if ((*(longlong *)(param_1 + 8) != 0) &&
           (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != '\0')) {
          FUN_144b997b0(plVar3[1],local_448,0x400);
          FUN_144ba26f0();
          iVar6 = FUN_144b9a5b0(plVar3[1]);
          if (iVar6 == 1) {
            pcVar14 = "SSL shutdown finished";
LAB_1452b77f2:
            FUN_144f14c60(param_2,param_1,pcVar14);
          }
          else {
            uVar8 = FUN_144b997b0(plVar3[1],local_448,0x400);
            iVar6 = FUN_144b9a050(plVar3[1],uVar8);
            if (iVar6 == 0) {
LAB_1452b77eb:
              pcVar14 = "SSL shutdown, EOF from server";
              goto LAB_1452b77f2;
            }
            if (iVar6 == 2) {
              pcVar14 = "SSL shutdown sent";
              goto LAB_1452b77f2;
            }
            if (iVar6 == 3) {
              pcVar14 = "SSL shutdown send blocked";
              goto LAB_1452b77f2;
            }
            if (iVar6 == 6) goto LAB_1452b77eb;
            iVar7 = FUN_144ba2630();
            if (iVar7 == 0) {
              uVar12 = FUN_1452b5240(iVar6);
            }
            else {
              uVar12 = FUN_1452b52f0(iVar7,local_448,0x400);
            }
            uVar8 = Ordinal_111();
            local_5f8 = CONCAT44(local_5f8._4_4_,uVar8);
            FUN_144f14c60(param_2,param_1,"SSL shutdown, error: \'%s\', errno %d",uVar12);
          }
          FUN_144ba26f0();
          FUN_144b9a720(plVar3[1]);
        }
        FUN_144b993a0(plVar3[1]);
        plVar3[1] = 0;
      }
      if (*plVar3 != 0) {
        FUN_144b98360();
        *plVar3 = 0;
        *(undefined1 *)((longlong)plVar3 + 0x24) = 0;
      }
      if (plVar3[3] != 0) {
        FUN_144ece530();
        plVar3[3] = 0;
      }
    }
    lVar13 = FUN_144b97f50(uVar11);
    *plVar2 = lVar13;
    if (lVar13 == 0) {
      uVar8 = FUN_144ba2690();
      uVar11 = FUN_1452b52f0(uVar8,local_548,0x100);
      FUN_144f14b70(param_2,"SSL: couldn\'t create a context: %s",uVar11);
      goto LAB_1452b7ac8;
    }
    FUN_144b99c10(lVar13,0x21,0x10);
    if ((*(longlong *)(param_2 + 0x268) != 0) && (*(char *)(param_2 + 0xacf) != '\0')) {
      FUN_144b979f0(*plVar2,FUN_1452b69f0);
      FUN_144b99c10(*plVar2,0x10,0,param_1);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 2:
    case 3:
      goto switchD_1452b78e9_caseD_2;
    }
    lVar13 = *plVar2;
    uVar8 = 0x82024054;
    if (*(char *)(lVar10 + 0xb2) != '\0') {
      uVar8 = 0x82024854;
    }
    lVar9 = FUN_144f0da50(param_1);
    uVar11 = 0;
    cVar5 = *(char *)(lVar9 + 0x68);
    uVar15 = 0x302;
    if ((cVar5 == '\x01') || (cVar5 == '\x04')) {
      uVar11 = 0x301;
LAB_1452b7952:
      if (cVar5 != '\0') goto LAB_1452b7957;
    }
    else {
      if (cVar5 == '\x05') {
        uVar11 = 0x302;
      }
      else if (cVar5 == '\x06') {
        uVar11 = 0x303;
      }
      else {
        if (cVar5 != '\a') goto LAB_1452b7952;
        uVar11 = 0x304;
      }
LAB_1452b7957:
      iVar6 = FUN_144b99c10(lVar13,0x7b,uVar11);
      if (iVar6 == 0) goto LAB_1452b7ac8;
    }
    iVar6 = *(int *)(lVar9 + 100);
    if (iVar6 < 0x50001) {
      if (iVar6 != 0x50000) {
        if (iVar6 == 0x40000) {
          uVar15 = 0x301;
        }
        else {
LAB_1452b7997:
          uVar15 = 0;
        }
      }
    }
    else if (iVar6 == 0x60000) {
      uVar15 = 0x303;
    }
    else {
      if (iVar6 != 0x70000) goto LAB_1452b7997;
      uVar15 = 0x304;
    }
    iVar6 = FUN_144b99c10(lVar13,0x7c,uVar15);
    if (iVar6 == 0) goto LAB_1452b7ac8;
    FUN_144b979e0(*plVar2,uVar8);
    lVar13 = local_5a8;
    if (*(longlong *)(local_5a8 + 0x18) != 0) {
      iVar6 = FUN_144f0d740(local_578);
      if ((iVar6 != 0) || (iVar6 = FUN_144b97ad0(*plVar2,local_578,local_554), iVar6 != 0)) {
        pcVar14 = "Error setting ALPN";
        break;
      }
      FUN_144f0d800(local_578,*(undefined8 *)(lVar13 + 0x18));
      FUN_144f14ad0(param_2,"ALPN: curl offers %s",local_578);
    }
    if (((local_5a0 != 0) || (local_5b8 != 0)) || (local_5c0 != 0)) {
      local_5d8 = *(undefined8 *)(lVar10 + 0xa8);
      local_5e0 = *(undefined8 *)(lVar10 + 0xa0);
      local_5e8 = *(undefined8 *)(lVar10 + 0x98);
      local_5f0 = *(undefined8 *)(lVar10 + 0x90);
      local_5f8 = local_5c0;
      iVar6 = FUN_1452b5600(param_2,*plVar2);
      if (iVar6 == 0) goto LAB_1452b7ac8;
    }
    lVar4 = local_598;
    lVar9 = *(longlong *)(local_598 + 0x20);
    if (lVar9 != 0) {
      iVar6 = FUN_144b97ed0(*plVar2,lVar9);
      if (iVar6 == 0) {
        FUN_144f14b70(param_2,"failed setting cipher list: %s");
        goto LAB_1452b7ac8;
      }
      FUN_144f14ad0(param_2,"Cipher selection: %s",lVar9);
    }
    lVar9 = *(longlong *)(lVar4 + 0x28);
    if (lVar9 != 0) {
      iVar6 = FUN_144ea3110(*plVar2,lVar9);
      if (iVar6 == 0) {
        FUN_144f14b70(param_2,"failed setting TLS 1.3 cipher suite: %s");
        goto LAB_1452b7ac8;
      }
      FUN_144f14ad0(param_2,"TLS 1.3 cipher selection: %s",lVar9);
    }
    FUN_144b9a680(*plVar2,1);
    lVar9 = *(longlong *)(lVar4 + 0x58);
    if ((lVar9 != 0) && (iVar6 = FUN_144b99c10(*plVar2,0x5c,0,lVar9), iVar6 == 0)) {
      FUN_144f14b70(param_2,"failed setting curves list: \'%s\'",lVar9);
      goto LAB_1452b7ac8;
    }
    FUN_144b98ce0(*plVar2,local_5c8 != '\0',0);
    cVar5 = FUN_14550a820();
    if (cVar5 != '\0') {
      FUN_144b97dc0(*plVar2,&LAB_1452b5230);
    }
    FUN_144b99c10(*plVar2,0x2c,0x301);
    FUN_144eb0af0(*plVar2,FUN_1452b6ec0);
    if (*(longlong *)(param_2 + 0x5b0) != 0) {
      if (*(char *)((longlong)plVar2 + 0x24) == '\0') {
        iVar6 = FUN_1452b4d20(param_1,param_2,*plVar2);
        if (iVar6 != 0) goto LAB_1452b7ac8;
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
      }
      FUN_144bbace0(param_2,1);
      iVar6 = (**(code **)(param_2 + 0x5b0))(param_2,*plVar2,*(undefined8 *)(param_2 + 0x5b8));
      FUN_144bbace0(param_2,0);
      if (iVar6 != 0) {
        FUN_144f14b70(param_2,"error signaled by ssl ctx callback");
        goto LAB_1452b7ac8;
      }
    }
    if (plVar2[1] != 0) {
      FUN_144b993a0();
    }
    lVar9 = FUN_144b98df0(*plVar2);
    plVar2[1] = lVar9;
    if (lVar9 == 0) {
      FUN_144f14b70(param_2,"SSL: couldn\'t create a context (handle)");
      goto LAB_1452b7ac8;
    }
    FUN_144b9aaa0(lVar9,0,param_1);
    if (*(char *)(lVar4 + 0x6b) != '\0') {
      FUN_144b99870(plVar2[1],0x41,1);
    }
    FUN_144b9a720(plVar2[1]);
    uVar11 = local_590;
    plVar2[2] = 0;
    iVar6 = inet_pton(2,local_590,local_588);
    if (((iVar6 != 0) || (iVar6 = inet_pton(0x17,uVar11,local_588), iVar6 != 0)) ||
       ((lVar9 = FUN_144f0c4f0(param_2,uVar11,0), lVar9 != 0 &&
        (iVar6 = FUN_144b99870(plVar2[1],0x37,0,lVar9), iVar6 != 0)))) {
      FUN_144b9aaa0(plVar2[1],0,param_1);
      if (*(char *)(lVar10 + 0x6c) != '\0') {
        FUN_144f0cf00(param_2);
        cVar5 = FUN_144f0dab0(param_1,param_2,&local_5b0,0);
        if (cVar5 == '\0') {
          iVar6 = FUN_144eb0eb0(plVar2[1],local_5b0);
          if (iVar6 == 0) {
            FUN_144f0cf30();
            uVar8 = FUN_144ba2630();
            uVar11 = FUN_1452b52f0(uVar8,local_548,0x100);
            FUN_144f14b70(param_2,"SSL: SSL_set_session failed: %s",uVar11);
            goto LAB_1452b7ac8;
          }
          FUN_144f14ad0(param_2,"SSL reusing session ID");
        }
        FUN_144f0cf30(param_2);
      }
      lVar9 = FUN_144ece470(0x401,"OpenSSL CF BIO");
      if (lVar9 == 0) {
        plVar2[3] = 0;
      }
      else {
        FUN_144ece580(lVar9,FUN_1452b5060);
        FUN_144ece5a0(lVar9,FUN_1452b5130);
        FUN_144ece5c0(lVar9,FUN_1452b4fe0);
        FUN_144ece5d0(lVar9,FUN_1452b4f90);
        FUN_144ece5e0(lVar9,&LAB_1452b4fd0);
        plVar2[3] = lVar9;
        lVar9 = FUN_144b9e650(lVar9);
        if (lVar9 != 0) {
          FUN_144b9e890(lVar9,param_1);
          FUN_144b98980(plVar2[1],lVar9,lVar9);
          *(undefined4 *)(lVar13 + 4) = 1;
        }
      }
      goto LAB_1452b7ac8;
    }
    pcVar14 = "Failed set SNI";
    break;
  case 2:
    FUN_144f14b70(param_2,"No SSLv2 support");
    goto LAB_1452b7ac8;
  case 3:
    FUN_144f14b70(param_2,"No SSLv3 support");
switchD_1452b78e9_caseD_2:
    goto LAB_1452b7ac8;
  default:
    pcVar14 = "Unrecognized parameter passed via CURLOPT_SSLVERSION";
  }
  FUN_144f14b70(param_2,pcVar14);
LAB_1452b7ac8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_618);
}



// FUNCTION 1452b7f30 FUN_1452b7f30 body=726 status=ok
// SIG undefined FUN_1452b7f30(void)

void FUN_1452b7f30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  char local_198 [80];
  undefined4 local_148;
  char acStack_144 [4];
  char acStack_140 [4];
  char acStack_13c [4];
  char local_138 [8];
  char acStack_130 [8];
  undefined4 local_128;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(lVar1 + 0x20);
  lVar6 = FUN_144f0da30();
  FUN_144ba26f0();
  iVar3 = FUN_144b99780(puVar2[1]);
  if (*(char *)((longlong)puVar2 + 0x24) == '\0') {
    iVar4 = FUN_1452b4d20(param_1,param_2,*puVar2);
    if (iVar4 != 0) goto LAB_1452b8087;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 1;
  }
  if (iVar3 == 1) {
    *(undefined4 *)(lVar1 + 4) = 4;
    uVar7 = FUN_144b987e0(puVar2[1]);
    uVar7 = FUN_144ea30e0(uVar7);
    uVar9 = FUN_144b9a220(puVar2[1]);
    FUN_144f14ad0(param_2,"SSL connection using %s / %s",uVar9,uVar7);
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_144b97d80(puVar2[1],&local_1a0,local_1a8);
      FUN_144f0d8c0(param_1,param_2,local_1a0,local_1a8[0]);
    }
    goto LAB_1452b8087;
  }
  iVar3 = FUN_144b9a050(puVar2[1]);
  if (iVar3 == 2) {
    *(undefined4 *)(lVar1 + 4) = 2;
    goto LAB_1452b8087;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(lVar1 + 4) = 3;
    goto LAB_1452b8087;
  }
  if (iVar3 == 9) {
    *(undefined4 *)(lVar1 + 4) = 1;
    goto LAB_1452b8087;
  }
  if (*(int *)(puVar2 + 4) == 0x51) goto LAB_1452b8087;
  local_148 = local_148 & 0xffffff00;
  memset((void *)((longlong)&local_148 + 1),0,0xff);
  *(undefined4 *)(lVar1 + 4) = 1;
  uVar5 = FUN_144ba2630();
  uVar10 = uVar5 & 0xfff;
  if ((uVar5 & 0xff000000) == 0x14000000) {
    if ((uVar10 == 0x86) || (uVar10 == 0x415)) {
      iVar3 = FUN_144b9aa40(puVar2[1]);
      if (iVar3 == 0) {
        local_148._0_1_ = 'S';
        local_148._1_1_ = 'S';
        local_148._2_1_ = 'L';
        local_148._3_1_ = ' ';
        acStack_144[0] = 'c';
        acStack_144[1] = 'e';
        acStack_144[2] = 'r';
        acStack_144[3] = 't';
        acStack_140[0] = 'i';
        acStack_140[1] = 'f';
        acStack_140[2] = 'i';
        acStack_140[3] = 'c';
        acStack_13c[0] = 'a';
        acStack_13c[1] = 't';
        acStack_13c[2] = 'e';
        acStack_13c[3] = ' ';
        local_138[0] = 'v';
        local_138[1] = 'e';
        local_138[2] = 'r';
        local_138[3] = 'i';
        local_138[4] = 'f';
        local_138[5] = 'i';
        local_138[6] = 'c';
        local_138[7] = 'a';
        acStack_130[0] = 't';
        acStack_130[1] = 'i';
        acStack_130[2] = 'o';
        acStack_130[3] = 'n';
        acStack_130[4] = ' ';
        acStack_130[5] = 'f';
        acStack_130[6] = 'a';
        acStack_130[7] = 'i';
        local_128 = 0x64656c;
      }
      else {
        *(int *)(lVar6 + 0x70) = iVar3;
        uVar7 = FUN_144ec8b50(iVar3);
        FUN_144f2b7e0(&local_148,0x100,"SSL certificate problem: %s",uVar7);
      }
    }
    else {
      if (uVar10 != 0x45c) goto LAB_1452b8104;
      FUN_1452b52f0(uVar5,&local_148,0x100);
    }
  }
  else {
LAB_1452b8104:
    FUN_1452b52f0(uVar5,&local_148,0x100);
    if (uVar5 == 0) {
      local_198[0] = '\0';
      local_198[1] = '\0';
      local_198[2] = '\0';
      local_198[3] = '\0';
      local_198[4] = '\0';
      local_198[5] = '\0';
      local_198[6] = '\0';
      local_198[7] = '\0';
      local_198[8] = '\0';
      local_198[9] = '\0';
      local_198[10] = '\0';
      local_198[0xb] = '\0';
      local_198[0xc] = '\0';
      local_198[0xd] = '\0';
      local_198[0xe] = '\0';
      local_198[0xf] = '\0';
      local_198[0x10] = '\0';
      local_198[0x41] = '\0';
      local_198[0x42] = '\0';
      local_198[0x43] = '\0';
      local_198[0x44] = '\0';
      local_198[0x45] = '\0';
      local_198[0x46] = '\0';
      local_198[0x47] = '\0';
      local_198[0x48] = '\0';
      local_198[0x11] = '\0';
      local_198[0x12] = '\0';
      local_198[0x13] = '\0';
      local_198[0x14] = '\0';
      local_198[0x15] = '\0';
      local_198[0x16] = '\0';
      local_198[0x17] = '\0';
      local_198[0x18] = '\0';
      local_198[0x19] = '\0';
      local_198[0x1a] = '\0';
      local_198[0x1b] = '\0';
      local_198[0x1c] = '\0';
      local_198[0x1d] = '\0';
      local_198[0x1e] = '\0';
      local_198[0x1f] = '\0';
      local_198[0x20] = '\0';
      local_198[0x49] = '\0';
      local_198[0x4a] = '\0';
      local_198[0x4b] = '\0';
      local_198[0x4c] = '\0';
      local_198[0x21] = '\0';
      local_198[0x22] = '\0';
      local_198[0x23] = '\0';
      local_198[0x24] = '\0';
      local_198[0x25] = '\0';
      local_198[0x26] = '\0';
      local_198[0x27] = '\0';
      local_198[0x28] = '\0';
      local_198[0x29] = '\0';
      local_198[0x2a] = '\0';
      local_198[0x2b] = '\0';
      local_198[0x2c] = '\0';
      local_198[0x2d] = '\0';
      local_198[0x2e] = '\0';
      local_198[0x2f] = '\0';
      local_198[0x30] = '\0';
      local_198[0x4d] = '\0';
      local_198[0x4e] = '\0';
      local_198[0x31] = '\0';
      local_198[0x32] = '\0';
      local_198[0x33] = '\0';
      local_198[0x34] = '\0';
      local_198[0x35] = '\0';
      local_198[0x36] = '\0';
      local_198[0x37] = '\0';
      local_198[0x38] = '\0';
      local_198[0x39] = '\0';
      local_198[0x3a] = '\0';
      local_198[0x3b] = '\0';
      local_198[0x3c] = '\0';
      local_198[0x3d] = '\0';
      local_198[0x3e] = '\0';
      local_198[0x3f] = '\0';
      local_198[0x40] = '\0';
      local_198[0x4f] = 0;
      iVar4 = Ordinal_111();
      if ((iVar4 != 0) && (iVar3 == 5)) {
        FUN_144bbe240(iVar4,local_198,0x50);
      }
      if (local_198[0] == '\0') {
        pcVar8 = (char *)FUN_1452b5240(iVar3);
      }
      else {
        pcVar8 = local_198;
      }
      local_1b8 = *(undefined4 *)(lVar1 + 0x40);
      FUN_144f14b70(param_2,"OpenSSL SSL_connect: %s in connection to %s:%d ",pcVar8,
                    *(undefined8 *)(lVar1 + 8));
      goto LAB_1452b8087;
    }
  }
  FUN_144f14b70(param_2,&DAT_149972340,&local_148);
LAB_1452b8087:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 1452b8220 FUN_1452b8220 body=1685 status=ok
// SIG undefined FUN_1452b8220(void)

void FUN_1452b8220(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  char *_Source;
  size_t _Count;
  char *pcVar15;
  undefined1 auStack_9a8 [32];
  undefined8 local_988;
  longlong local_978;
  longlong local_970;
  undefined8 local_968;
  longlong local_960;
  longlong local_958;
  char local_948 [256];
  char local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_9a8;
  local_968 = *(undefined8 *)(param_1 + 0x18);
  lVar12 = *(longlong *)(param_1 + 0x10);
  local_958 = lVar12;
  local_960 = FUN_144f0da30();
  lVar8 = FUN_144f0da50(param_1);
  local_948[0] = '\0';
  memset(local_948 + 1,0,0xff);
  uVar9 = FUN_144b9ff50();
  local_978 = FUN_144b9e650(uVar9);
  lVar1 = *(longlong *)(lVar12 + 0x20);
  if (local_978 == 0) {
    _Count = 0x100;
    pcVar15 = local_948;
    iVar3 = FUN_144ba2630();
    local_948[0] = '\0';
    uVar10 = FUN_1452b3920(local_948,0x100);
    if (uVar10 < 0xfe) {
      _Count = 0xfe - uVar10;
      (local_948 + uVar10)[0] = ':';
      (local_948 + uVar10)[1] = ' ';
      pcVar15 = local_948 + uVar10 + 2;
      *pcVar15 = '\0';
    }
    FUN_144ba27f0(iVar3,pcVar15,_Count);
    if (*pcVar15 == '\0') {
      _Source = "No error";
      if (iVar3 != 0) {
        _Source = "Unknown error";
      }
      strncpy(pcVar15,_Source,_Count);
      pcVar15[_Count - 1] = '\0';
    }
    FUN_144f14b70(param_2,"BIO_new return NULL, OpenSSL error %s",pcVar15);
    goto LAB_1452b88a5;
  }
  if (*(char *)(param_2 + 0x5e8) != '\0') {
    FUN_1452b40f0(param_2,*(undefined8 *)(lVar1 + 8));
  }
  lVar11 = FUN_144b98c60(*(undefined8 *)(lVar1 + 8));
  *(longlong *)(lVar1 + 0x10) = lVar11;
  if (lVar11 == 0) {
    FUN_144b9e7b0(local_978);
    if (param_3 != '\0') {
      FUN_144f14b70(param_2,"SSL: couldn\'t get peer certificate");
    }
    goto LAB_1452b88a5;
  }
  cVar2 = FUN_144f0daa0(param_1);
  pcVar15 = "Server";
  if (cVar2 != '\0') {
    pcVar15 = "Proxy";
  }
  FUN_144f14ad0(param_2,"%s certificate:",pcVar15);
  uVar9 = FUN_144bb4f50(*(undefined8 *)(lVar1 + 0x10));
  iVar3 = FUN_1452b61c0(uVar9,local_848,0x800);
  pcVar15 = local_848;
  if (iVar3 != 0) {
    pcVar15 = "[NONE]";
  }
  FUN_144f14ad0(param_2," subject: %s",pcVar15);
  uVar9 = FUN_144bb6010(*(undefined8 *)(lVar1 + 0x10));
  FUN_144ef2290(local_978,uVar9);
  uVar4 = FUN_144b9efc0(local_978,3,0,&local_970);
  FUN_144f14ad0(param_2," start date: %.*s",uVar4,local_970);
  FUN_144b9efc0(local_978,1,0);
  uVar9 = FUN_144bb6030(*(undefined8 *)(lVar1 + 0x10));
  FUN_144ef2290(local_978,uVar9);
  uVar4 = FUN_144b9efc0(local_978,3,0,&local_970);
  FUN_144f14ad0(param_2," expire date: %.*s",uVar4,local_970);
  FUN_144b9efc0(local_978,1,0);
  FUN_144b9e7b0(local_978);
  if (*(char *)(lVar8 + 0x6a) != '\0') {
    local_988 = *(undefined8 *)(lVar12 + 0x10);
    iVar3 = FUN_1452b6280(param_2,local_968,*(undefined8 *)(lVar1 + 0x10),
                          *(undefined8 *)(lVar12 + 8));
    if (iVar3 == 0) goto LAB_1452b84f8;
LAB_1452b8786:
    FUN_144b47250(*(undefined8 *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x10) = 0;
    goto LAB_1452b88a5;
  }
LAB_1452b84f8:
  iVar3 = 0;
  uVar9 = FUN_144bb4f40(*(undefined8 *)(lVar1 + 0x10));
  iVar5 = FUN_1452b61c0(uVar9,local_848,0x800);
  if (iVar5 == 0) {
    FUN_144f14ad0(param_2," issuer: %s",local_848);
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      if (*(longlong *)(lVar8 + 0x50) == 0) {
LAB_1452b86f4:
        iVar5 = FUN_144b9aa40(*(undefined8 *)(lVar1 + 8));
        *(int *)(local_960 + 0x70) = iVar5;
        if (iVar5 == 0) {
          FUN_144f14ad0(param_2," SSL certificate verify ok.");
        }
        else if (*(char *)(lVar8 + 0x69) == '\0') {
          uVar9 = FUN_144ec8b50(iVar5);
          FUN_144f14ad0(param_2," SSL certificate verify result: %s (%ld), continuing anyway.",uVar9
                        ,iVar5);
        }
        else {
          if (param_3 == '\0') goto LAB_1452b852f;
          uVar9 = FUN_144ec8b50(iVar5);
          FUN_144f14b70(param_2,"SSL certificate verify result: %s (%ld)",uVar9,iVar5);
          iVar3 = 0x3c;
        }
        goto LAB_1452b876f;
      }
      puVar14 = *(undefined8 **)(lVar8 + 0x50);
LAB_1452b8571:
      lVar12 = FUN_144b9ff70(*puVar14,*(undefined4 *)(puVar14 + 1));
      if (lVar12 == 0) {
        uVar4 = FUN_144ba2630();
        uVar9 = FUN_1452b52f0(uVar4,local_948,0x100);
        pcVar15 = "BIO_new_mem_buf NULL, OpenSSL error %s";
LAB_1452b85db:
        FUN_144f14b70(param_2,pcVar15,uVar9);
        FUN_144b47250(*(undefined8 *)(lVar1 + 0x10));
        *(undefined8 *)(lVar1 + 0x10) = 0;
        goto LAB_1452b88a5;
      }
LAB_1452b863c:
      local_978 = FUN_144bac680(lVar12,0,0,0);
      if (local_978 == 0) {
        if (param_3 != '\0') {
          FUN_144f14b70(param_2,"SSL: Unable to read issuer cert (%s)",*(undefined8 *)(lVar8 + 0x10)
                       );
        }
        FUN_144b9e7b0(lVar12);
        lVar12 = 0;
      }
      else {
        iVar5 = FUN_144ec54e0(local_978,*(undefined8 *)(lVar1 + 0x10));
        if (iVar5 == 0) {
          FUN_144f14ad0(param_2," SSL certificate issuer check ok (%s)",
                        *(undefined8 *)(lVar8 + 0x10));
          FUN_144b9e7b0(lVar12);
          FUN_144b47250(local_978);
          goto LAB_1452b86f4;
        }
        if (param_3 != '\0') {
          FUN_144f14b70(param_2,"SSL: Certificate issuer check failed (%s)",
                        *(undefined8 *)(lVar8 + 0x10));
        }
        FUN_144b9e7b0(lVar12);
        lVar12 = local_978;
      }
      FUN_144b47250(lVar12);
    }
    else {
      puVar14 = *(undefined8 **)(lVar8 + 0x50);
      if (puVar14 != (undefined8 *)0x0) goto LAB_1452b8571;
      uVar9 = FUN_144ec7470();
      lVar12 = FUN_144b9e650(uVar9);
      if (lVar12 == 0) {
        uVar4 = FUN_144ba2630();
        uVar9 = FUN_1452b52f0(uVar4,local_948,0x100);
        pcVar15 = "BIO_new return NULL, OpenSSL error %s";
        goto LAB_1452b85db;
      }
      iVar5 = FUN_144b9efc0(lVar12,0x6c,3,*(undefined8 *)(lVar8 + 0x10));
      if (0 < iVar5) goto LAB_1452b863c;
      if (param_3 != '\0') {
        FUN_144f14b70(param_2,"SSL: Unable to open issuer cert (%s)",*(undefined8 *)(lVar8 + 0x10));
      }
      FUN_144b9e7b0(lVar12);
    }
    FUN_144b47250(*(undefined8 *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x10) = 0;
    goto LAB_1452b88a5;
  }
  if (param_3 != '\0') {
    FUN_144f14b70(param_2,"SSL: couldn\'t get X509-issuer name");
  }
LAB_1452b852f:
  iVar3 = 0x3c;
LAB_1452b876f:
  if (*(char *)(lVar8 + 0x6b) != '\0') {
    iVar5 = FUN_1452b66c0(param_1,param_2);
    iVar3 = 0;
    if (iVar5 != 0) goto LAB_1452b8786;
  }
  iVar5 = 0;
  if (param_3 != '\0') {
    iVar5 = iVar3;
  }
  cVar2 = FUN_144f0daa0(param_1);
  if (cVar2 == '\0') {
    lVar12 = *(longlong *)(param_2 + 0x810);
  }
  else {
    lVar12 = *(longlong *)(param_2 + 0x818);
  }
  local_970 = lVar12;
  if ((iVar5 == 0) && (lVar12 != 0)) {
    lVar8 = *(longlong *)(lVar1 + 0x10);
    iVar3 = 0x5a;
    if (lVar8 != 0) {
      uVar9 = FUN_144bb6070(lVar8);
      iVar6 = FUN_144bb64a0(uVar9,0);
      lVar11 = (longlong)iVar6;
      iVar5 = 0x5a;
      if ((0 < iVar6) &&
         (lVar13 = (*(code *)PTR_malloc_14c6d9f20)(lVar11), iVar5 = iVar3, local_978 = lVar13,
         lVar13 != 0)) {
        uVar9 = FUN_144bb6070(lVar8);
        iVar7 = FUN_144bb64a0(uVar9,&local_978);
        iVar5 = 0x5a;
        if ((iVar6 == iVar7) && ((iVar5 = iVar3, local_978 != 0 && (local_978 - lVar13 == lVar11))))
        {
          iVar5 = FUN_144f0d050(param_2,lVar12,lVar13,lVar11);
        }
        (*(code *)PTR_free_14c6d9f28)(lVar13);
      }
      if (iVar5 == 0) goto LAB_1452b887e;
    }
    FUN_144f14b70(param_2,"SSL: public key does not match pinned public key");
  }
LAB_1452b887e:
  FUN_144b47250(*(undefined8 *)(lVar1 + 0x10));
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(local_958 + 4) = 5;
LAB_1452b88a5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_9a8);
}



// FUNCTION 1452b88d0 FUN_1452b88d0 body=463 status=ok
// SIG undefined FUN_1452b88d0(void)

int FUN_1452b88d0(longlong param_1,undefined8 param_2,char param_3,undefined1 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar4 = FUN_144f13ec0();
  if (*piVar1 == 2) {
    *param_4 = 1;
    return 0;
  }
  if (piVar1[1] == 0) {
    lVar5 = FUN_144f15e70(param_2,0,1);
    if (lVar5 < 0) {
      FUN_144f14b70(param_2,"SSL connection timeout");
      return 0x1c;
    }
    iVar2 = FUN_1452b75e0(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  while( true ) {
    if (2 < piVar1[1] - 1U) {
      if (piVar1[1] == 4) {
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar6 = FUN_144f0da50(param_1);
        if ((*(char *)(lVar6 + 0x69) == '\0') && (*(char *)(lVar6 + 0x6a) == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        iVar2 = FUN_1452b8220(param_1,param_2,uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(undefined4 *)(lVar5 + 4) = 5;
      }
      if (piVar1[1] == 5) {
        *piVar1 = 2;
      }
      *param_4 = piVar1[1] == 5;
      piVar1[1] = 0;
      return 0;
    }
    lVar5 = FUN_144f15e70(param_2,0);
    if (lVar5 < 0) break;
    if ((param_3 == '\0') && (iVar2 = piVar1[1], iVar2 - 2U < 2)) {
      uVar8 = 0xffffffffffffffff;
      if (iVar2 == 3) {
        uVar8 = uVar4;
      }
      uVar7 = 0xffffffffffffffff;
      if (iVar2 == 2) {
        uVar7 = uVar4;
      }
      iVar2 = FUN_144f26bb0(uVar7,0xffffffffffffffff,uVar8,lVar5);
      if (iVar2 < 0) {
        uVar3 = Ordinal_111();
        FUN_144f14b70(param_2,"select/poll on SSL socket, errno: %d",uVar3);
        return 0x23;
      }
      if (iVar2 == 0) break;
    }
    iVar2 = FUN_1452b7f30(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((param_3 != '\0') && (piVar1[1] - 1U < 3)) {
      return 0;
    }
  }
  FUN_144f14b70(param_2,"SSL connection timeout");
  return 0x1c;
}



// FUNCTION 1452b8aa0 FUN_1452b8aa0 body=173 status=ok
// SIG undefined FUN_1452b8aa0(void)

LPSTR FUN_1452b8aa0(LPCSTR param_1)

{
  uint nSize;
  DWORD DVar1;
  LPSTR pCVar2;
  LPSTR pCVar3;
  
  pCVar2 = (LPSTR)(*(code *)PTR_realloc_14c6d9f30)(0,1);
  pCVar3 = (LPSTR)0x0;
  nSize = 1;
  while ((((pCVar2 != (LPSTR)0x0 &&
           (DVar1 = GetEnvironmentVariableA(param_1,pCVar2,nSize), pCVar3 = pCVar2, DVar1 != 0)) &&
          (DVar1 != nSize)) && (DVar1 < 0x8001))) {
    if (DVar1 < nSize) {
      return pCVar2;
    }
    pCVar2 = (LPSTR)(*(code *)PTR_realloc_14c6d9f30)(pCVar2,DVar1);
    nSize = DVar1;
  }
  (*(code *)PTR_free_14c6d9f28)(pCVar3);
  return (LPSTR)0x0;
}



// FUNCTION 1452b8b50 FUN_1452b8b50 body=35 status=ok
// SIG undefined FUN_1452b8b50(void)

void FUN_1452b8b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1452b8e50("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",param_1,param_2,
                param_3,param_4);
  return;
}



// FUNCTION 1452b8b80 FUN_1452b8b80 body=35 status=ok
// SIG undefined FUN_1452b8b80(void)

void FUN_1452b8b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1452b8e50("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",param_1,param_2,
                param_3,param_4);
  return;
}



// FUNCTION 1452b8bb0 FUN_1452b8bb0 body=655 status=ok
// SIG undefined FUN_1452b8bb0(void)

void FUN_1452b8bb0(byte *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_168 [32];
  byte local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar8 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar9 = uVar7;
    uVar7 = uVar9 + 1;
  } while (param_1[uVar7] != 0);
  if ((uVar7 != 0) && ((uVar7 & 3) == 0)) {
    pbVar4 = param_1 + uVar9;
    bVar1 = *pbVar4;
    uVar9 = uVar8;
    while (bVar1 == 0x3d) {
      uVar9 = uVar9 + 1;
      pbVar4 = pbVar4 + -1;
      if (2 < uVar9) goto LAB_1452b8c86;
      bVar1 = *pbVar4;
    }
    uVar7 = uVar7 >> 2;
    lVar14 = uVar7 * 3 - uVar9;
    puVar5 = (undefined1 *)(*(code *)PTR_malloc_14c6d9f20)(lVar14 + 1);
    if (puVar5 != (undefined1 *)0x0) {
      local_148[0x20] = 0xff;
      local_148[0x21] = 0xff;
      local_148[0x22] = 0xff;
      local_148[0x23] = 0xff;
      local_148[0x24] = 0xff;
      local_148[0x25] = 0xff;
      local_148[0x26] = 0xff;
      local_148[0x27] = 0xff;
      local_148[0x28] = 0xff;
      local_148[0x29] = 0xff;
      local_148[0x2a] = 0xff;
      local_148[0xfb] = 0xff;
      local_148[0xfc] = 0xff;
      local_148[0xfd] = 0xff;
      local_148[0xfe] = 0xff;
      local_148[0xff] = 0xff;
      local_148[0] = 0xff;
      local_148[1] = 0xff;
      local_148[2] = 0xff;
      local_148[3] = 0xff;
      local_148[4] = 0xff;
      local_148[5] = 0xff;
      local_148[6] = 0xff;
      local_148[7] = 0xff;
      local_148[8] = 0xff;
      local_148[9] = 0xff;
      local_148[10] = 0xff;
      local_148[0xb] = 0xff;
      local_148[0xc] = 0xff;
      local_148[0xd] = 0xff;
      local_148[0xe] = 0xff;
      local_148[0xf] = 0xff;
      local_148[0x10] = 0xff;
      local_148[0x11] = 0xff;
      local_148[0x12] = 0xff;
      local_148[0x13] = 0xff;
      local_148[0x14] = 0xff;
      local_148[0x15] = 0xff;
      local_148[0x16] = 0xff;
      local_148[0x17] = 0xff;
      local_148[0x18] = 0xff;
      local_148[0x19] = 0xff;
      local_148[0x1a] = 0xff;
      local_148[0x1b] = 0xff;
      local_148[0x1c] = 0xff;
      local_148[0x1d] = 0xff;
      local_148[0x1e] = 0xff;
      local_148[0x1f] = 0xff;
      local_148[0x7b] = 0xff;
      local_148[0x7c] = 0xff;
      local_148[0x7d] = 0xff;
      local_148[0x7e] = 0xff;
      local_148[0x7f] = 0xff;
      local_148[0x80] = 0xff;
      local_148[0x81] = 0xff;
      local_148[0x82] = 0xff;
      local_148[0x83] = 0xff;
      local_148[0x84] = 0xff;
      local_148[0x85] = 0xff;
      local_148[0x86] = 0xff;
      local_148[0x87] = 0xff;
      local_148[0x88] = 0xff;
      local_148[0x89] = 0xff;
      local_148[0x8a] = 0xff;
      local_148[0x8b] = 0xff;
      local_148[0x8c] = 0xff;
      local_148[0x8d] = 0xff;
      local_148[0x8e] = 0xff;
      local_148[0x8f] = 0xff;
      local_148[0x90] = 0xff;
      local_148[0x91] = 0xff;
      local_148[0x92] = 0xff;
      local_148[0x93] = 0xff;
      local_148[0x94] = 0xff;
      local_148[0x95] = 0xff;
      local_148[0x96] = 0xff;
      local_148[0x97] = 0xff;
      local_148[0x98] = 0xff;
      local_148[0x99] = 0xff;
      local_148[0x9a] = 0xff;
      local_148[0x9b] = 0xff;
      local_148[0x9c] = 0xff;
      local_148[0x9d] = 0xff;
      local_148[0x9e] = 0xff;
      local_148[0x9f] = 0xff;
      local_148[0xa0] = 0xff;
      local_148[0xa1] = 0xff;
      local_148[0xa2] = 0xff;
      local_148[0xa3] = 0xff;
      local_148[0xa4] = 0xff;
      local_148[0xa5] = 0xff;
      local_148[0xa6] = 0xff;
      local_148[0xa7] = 0xff;
      local_148[0xa8] = 0xff;
      local_148[0xa9] = 0xff;
      local_148[0xaa] = 0xff;
      local_148[0xab] = 0xff;
      local_148[0xac] = 0xff;
      local_148[0xad] = 0xff;
      local_148[0xae] = 0xff;
      local_148[0xaf] = 0xff;
      local_148[0xb0] = 0xff;
      local_148[0xb1] = 0xff;
      local_148[0xb2] = 0xff;
      local_148[0xb3] = 0xff;
      local_148[0xb4] = 0xff;
      local_148[0xb5] = 0xff;
      local_148[0xb6] = 0xff;
      local_148[0xb7] = 0xff;
      local_148[0xb8] = 0xff;
      local_148[0xb9] = 0xff;
      local_148[0xba] = 0xff;
      local_148[0xbb] = 0xff;
      local_148[0xbc] = 0xff;
      local_148[0xbd] = 0xff;
      local_148[0xbe] = 0xff;
      local_148[0xbf] = 0xff;
      local_148[0xc0] = 0xff;
      local_148[0xc1] = 0xff;
      local_148[0xc2] = 0xff;
      local_148[0xc3] = 0xff;
      local_148[0xc4] = 0xff;
      local_148[0xc5] = 0xff;
      local_148[0xc6] = 0xff;
      local_148[199] = 0xff;
      local_148[200] = 0xff;
      local_148[0xc9] = 0xff;
      local_148[0xca] = 0xff;
      local_148[0xcb] = 0xff;
      local_148[0xcc] = 0xff;
      local_148[0xcd] = 0xff;
      local_148[0xce] = 0xff;
      local_148[0xcf] = 0xff;
      local_148[0xd0] = 0xff;
      local_148[0xd1] = 0xff;
      local_148[0xd2] = 0xff;
      local_148[0xd3] = 0xff;
      local_148[0xd4] = 0xff;
      local_148[0xd5] = 0xff;
      local_148[0xd6] = 0xff;
      local_148[0xd7] = 0xff;
      local_148[0xd8] = 0xff;
      local_148[0xd9] = 0xff;
      local_148[0xda] = 0xff;
      local_148[0xdb] = 0xff;
      local_148[0xdc] = 0xff;
      local_148[0xdd] = 0xff;
      local_148[0xde] = 0xff;
      local_148[0xdf] = 0xff;
      local_148[0xe0] = 0xff;
      local_148[0xe1] = 0xff;
      local_148[0xe2] = 0xff;
      local_148[0xe3] = 0xff;
      local_148[0xe4] = 0xff;
      local_148[0xe5] = 0xff;
      local_148[0xe6] = 0xff;
      local_148[0xe7] = 0xff;
      local_148[0xe8] = 0xff;
      local_148[0xe9] = 0xff;
      local_148[0xea] = 0xff;
      local_148[0xeb] = 0xff;
      local_148[0xec] = 0xff;
      local_148[0xed] = 0xff;
      local_148[0xee] = 0xff;
      local_148[0xef] = 0xff;
      local_148[0xf0] = 0xff;
      local_148[0xf1] = 0xff;
      local_148[0xf2] = 0xff;
      local_148[0xf3] = 0xff;
      local_148[0xf4] = 0xff;
      local_148[0xf5] = 0xff;
      local_148[0xf6] = 0xff;
      local_148[0xf7] = 0xff;
      local_148[0xf8] = 0xff;
      local_148[0xf9] = 0xff;
      local_148[0xfa] = 0xff;
      local_148[0x2b] = 0x3e;
      local_148[0x2c] = 0xff;
      local_148[0x2d] = 0xff;
      local_148[0x2e] = 0xff;
      local_148[0x2f] = 0x3f;
      local_148[0x30] = 0x34;
      local_148[0x31] = 0x35;
      local_148[0x32] = 0x36;
      local_148[0x33] = 0x37;
      local_148[0x34] = 0x38;
      local_148[0x35] = 0x39;
      local_148[0x36] = 0x3a;
      local_148[0x37] = 0x3b;
      local_148[0x38] = 0x3c;
      local_148[0x39] = 0x3d;
      local_148[0x3a] = 0xff;
      local_148[0x4b] = 10;
      local_148[0x4c] = 0xb;
      local_148[0x4d] = 0xc;
      local_148[0x4e] = 0xd;
      local_148[0x4f] = 0xe;
      local_148[0x50] = 0xf;
      local_148[0x51] = 0x10;
      local_148[0x52] = 0x11;
      local_148[0x53] = 0x12;
      local_148[0x54] = 0x13;
      local_148[0x55] = 0x14;
      local_148[0x56] = 0x15;
      local_148[0x57] = 0x16;
      local_148[0x58] = 0x17;
      local_148[0x59] = 0x18;
      local_148[0x5a] = 0x19;
      local_148[0x3b] = 0xff;
      local_148[0x3c] = 0xff;
      local_148[0x3d] = 0xff;
      local_148[0x3e] = 0xff;
      local_148[0x3f] = 0xff;
      local_148[0x40] = 0xff;
      local_148[0x41] = 0;
      local_148[0x42] = 1;
      local_148[0x43] = 2;
      local_148[0x44] = 3;
      local_148[0x45] = 4;
      local_148[0x46] = 5;
      local_148[0x47] = 6;
      local_148[0x48] = 7;
      local_148[0x49] = 8;
      local_148[0x4a] = 9;
      local_148[0x6b] = 0x24;
      local_148[0x6c] = 0x25;
      local_148[0x6d] = 0x26;
      local_148[0x6e] = 0x27;
      local_148[0x6f] = 0x28;
      local_148[0x70] = 0x29;
      local_148[0x71] = 0x2a;
      local_148[0x72] = 0x2b;
      local_148[0x73] = 0x2c;
      local_148[0x74] = 0x2d;
      local_148[0x75] = 0x2e;
      local_148[0x76] = 0x2f;
      local_148[0x77] = 0x30;
      local_148[0x78] = 0x31;
      local_148[0x79] = 0x32;
      local_148[0x7a] = 0x33;
      local_148[0x5b] = 0xff;
      local_148[0x5c] = 0xff;
      local_148[0x5d] = 0xff;
      local_148[0x5e] = 0xff;
      local_148[0x5f] = 0xff;
      local_148[0x60] = 0xff;
      local_148[0x61] = 0x1a;
      local_148[0x62] = 0x1b;
      local_148[99] = 0x1c;
      local_148[100] = 0x1d;
      local_148[0x65] = 0x1e;
      local_148[0x66] = 0x1f;
      local_148[0x67] = 0x20;
      local_148[0x68] = 0x21;
      local_148[0x69] = 0x22;
      local_148[0x6a] = 0x23;
      uVar6 = uVar8;
      uVar11 = uVar8;
      puVar12 = puVar5;
      uVar13 = uVar8;
      if (uVar7 != (uVar9 != 0)) {
        do {
          do {
            bVar1 = *param_1;
            param_1 = param_1 + 1;
            if (local_148[bVar1] == 0xff) goto LAB_1452b8de6;
            uVar2 = (int)uVar6 << 6;
            uVar10 = (int)uVar11 + 1;
            uVar3 = uVar2 | local_148[bVar1];
            uVar6 = (ulonglong)uVar3;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < 4);
          puVar12[2] = (char)uVar3;
          uVar13 = uVar13 + 1;
          puVar12[1] = (char)(uVar2 >> 8);
          *puVar12 = (char)(uVar2 >> 0x10);
          puVar12 = puVar12 + 3;
          uVar6 = uVar8;
          uVar11 = uVar8;
        } while (uVar13 < uVar7 - (uVar9 != 0));
      }
      uVar7 = uVar8;
      uVar6 = uVar8;
      if (uVar9 != 0) {
        do {
          bVar1 = *param_1;
          param_1 = param_1 + 1;
          if (bVar1 == 0x3d) {
            uVar2 = (int)uVar6 << 6;
            uVar8 = uVar8 + 1;
            if (uVar9 < uVar8) goto LAB_1452b8de6;
          }
          else {
            if (local_148[bVar1] == 0xff) goto LAB_1452b8de6;
            uVar2 = (int)uVar6 << 6 | (uint)local_148[bVar1];
          }
          uVar3 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar3;
          uVar6 = (ulonglong)uVar2;
        } while ((int)uVar3 < 4);
        if (uVar9 == 1) {
          puVar12[1] = (char)(uVar2 >> 8);
        }
        *puVar12 = (char)(uVar2 >> 0x10);
        puVar12 = puVar12 + (3 - uVar9);
      }
      *puVar12 = 0;
      *param_2 = puVar5;
      *param_3 = lVar14;
    }
  }
LAB_1452b8c86:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
LAB_1452b8de6:
  (*(code *)PTR_free_14c6d9f28)(puVar5);
  goto LAB_1452b8c86;
}



// FUNCTION 1452b8e50 FUN_1452b8e50 body=422 status=ok
// SIG undefined FUN_1452b8e50(void)

undefined4
FUN_1452b8e50(longlong param_1,byte *param_2,ulonglong param_3,undefined8 *param_4,longlong *param_5
             )

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = 0xffffffffffffffff;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != 0);
  }
  pcVar4 = (char *)(*(code *)PTR_malloc_14c6d9f20)(((param_3 + 2) / 3) * 4 + 1);
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    pcVar5 = pcVar4;
    if (2 < param_3) {
      uVar7 = param_3 / 3;
      param_3 = param_3 % 3;
      do {
        *pcVar5 = *(char *)((ulonglong)(*param_2 >> 2) + param_1);
        pcVar5[1] = *(char *)(((ulonglong)(*param_2 & 3) << 4 | (ulonglong)(param_2[1] >> 4)) +
                             param_1);
        pcVar5[2] = *(char *)(((ulonglong)(param_2[1] & 0xf) << 2 | (ulonglong)(param_2[2] >> 6)) +
                             param_1);
        pbVar1 = param_2 + 2;
        param_2 = param_2 + 3;
        pcVar5[3] = *(char *)((ulonglong)(*pbVar1 & 0x3f) + param_1);
        pcVar5 = pcVar5 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    pcVar6 = pcVar5;
    if (param_3 != 0) {
      pcVar2 = pcVar5 + 2;
      *pcVar5 = *(char *)((ulonglong)(*param_2 >> 2) + param_1);
      uVar7 = (ulonglong)(*param_2 & 3) * 0x10;
      if (param_3 == 1) {
        pcVar5[1] = *(char *)(uVar7 + param_1);
        pcVar6 = pcVar2;
        if (*(char *)(param_1 + 0x40) != '\0') {
          *pcVar2 = *(char *)(param_1 + 0x40);
          pcVar6 = pcVar5 + 4;
          pcVar5[3] = *(char *)(param_1 + 0x40);
        }
      }
      else {
        pcVar5[1] = *(char *)((param_2[1] >> 4 | uVar7) + param_1);
        pcVar6 = pcVar5 + 3;
        *pcVar2 = *(char *)(param_1 + (ulonglong)(param_2[1] & 0xf) * 4);
        if (*(char *)(param_1 + 0x40) != '\0') {
          *pcVar6 = *(char *)(param_1 + 0x40);
          pcVar6 = pcVar5 + 4;
        }
      }
    }
    *pcVar6 = '\0';
    *param_4 = pcVar4;
    uVar3 = 0;
    *param_5 = (longlong)pcVar6 - (longlong)pcVar4;
  }
  return uVar3;
}



// FUNCTION 1452b9000 FUN_1452b9000 body=302 status=ok
// SIG undefined FUN_1452b9000(void)

undefined8 FUN_1452b9000(longlong param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_res10 [8];
  
  *param_2 = '\0';
  uVar4 = FUN_1452b9a20();
  if ((int)uVar4 == 0) {
    if (*(longlong *)(param_1 + 0x750) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a8);
      uVar4 = FUN_1452ce930(*(longlong *)(param_1 + 0x750),0,lVar3 + 0x40,0,3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      pcVar5 = *(char **)(lVar3 + 0x40);
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        if (cVar2 == ' ') {
          uVar4 = (*(code *)PTR__strdup_14c6d9f38)(pcVar5);
          *(undefined8 *)(lVar3 + 0x48) = uVar4;
          *pcVar5 = '\0';
          if (*(longlong *)(lVar3 + 0x48) == 0) {
            return 0x1b;
          }
          break;
        }
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
    }
    *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
    FUN_144f25da0(param_1,0);
    FUN_144f25d60(param_1,0);
    FUN_144f25d20(param_1,0xffffffffffffffff);
    FUN_144f25ce0(param_1,0xffffffffffffffff);
    uVar4 = FUN_1452bb360(param_1,local_res10,param_2);
    if (((int)uVar4 == 0) && (*param_2 != (char)uVar4)) {
      if (**(int **)(param_1 + 0x1a8) != 0) {
        FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 1452b9130 FUN_1452b9130 body=376 status=ok
// SIG undefined FUN_1452b9130(void)

int FUN_1452b9130(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar3 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_144f16220(lVar2,1);
    iVar3 = param_2;
    goto LAB_1452b920c;
  }
  if ((*(char *)(param_1 + 0xab2) != '\0') || (*(longlong *)(puVar1 + 0x10) != 0))
  goto LAB_1452b920c;
  if ((*(longlong *)(puVar1 + 6) == 0) && (*(longlong *)(puVar1 + 8) == 0)) {
    if (*(char *)(param_1 + 0x13d8) == '\0') {
      if (*(int *)(param_1 + 0x368) == 0) goto LAB_1452b920c;
      goto LAB_1452b91b1;
    }
LAB_1452b91ce:
    iVar3 = FUN_14550c120(param_1,lVar2 + 0x3a0,&DAT_149972340,&DAT_14996de1b);
    if (iVar3 != 0) goto LAB_1452b920c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0xc;
  }
  else {
LAB_1452b91b1:
    if ((*(char *)(param_1 + 0x13d8) != '\0') || (*(int *)(param_1 + 0x368) != 0))
    goto LAB_1452b91ce;
    *(undefined4 *)(lVar2 + 0x480) = 10;
  }
  iVar3 = FUN_1452bb300(param_1,lVar2,0);
LAB_1452b920c:
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 2));
  *(undefined8 *)(puVar1 + 2) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 4));
  *(undefined8 *)(puVar1 + 4) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 6));
  *(undefined8 *)(puVar1 + 6) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 8));
  *(undefined8 *)(puVar1 + 8) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 10));
  *(undefined8 *)(puVar1 + 10) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 0xc));
  *(undefined8 *)(puVar1 + 0xc) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 0xe));
  *(undefined8 *)(puVar1 + 0xe) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 0x10));
  *(undefined8 *)(puVar1 + 0x10) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 0x12));
  *(undefined8 *)(puVar1 + 0x12) = 0;
  *puVar1 = 0;
  return iVar3;
}



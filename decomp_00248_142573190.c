// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142573190 FUN_142573190 body=725 status=ok
// SIG undefined FUN_142573190(void)

int * FUN_142573190(int *param_1,int *param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (*(short *)(param_3 + 8) < 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_3 + 8) >> 5;
  }
  iVar3 = param_2[2];
  if (iVar4 < iVar2) {
LAB_1425731ec:
    do {
      uVar1 = FUN_1424a8030(param_3,iVar4);
      iVar2 = 2 - (uint)(uVar1 < 0x10000);
      switch(iVar3) {
      case 0:
        switch(uVar1) {
        case 0x25:
          *param_1 = iVar2 + iVar4;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = -3;
          return param_1;
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2c:
switchD_14257322a_caseD_26:
          *param_1 = iVar2 + iVar4;
          param_1[1] = uVar1;
          param_1[2] = 0;
          param_1[3] = 0;
          return param_1;
        case 0x27:
          iVar4 = iVar4 + iVar2;
          iVar3 = 1;
          break;
        case 0x2b:
          *param_1 = iVar2 + iVar4;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = -2;
          return param_1;
        case 0x2d:
          *param_1 = iVar2 + iVar4;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = -1;
          return param_1;
        default:
          if (uVar1 != 0xa4) {
            if (uVar1 == 0x2030) {
              *param_1 = iVar4 + 1;
              param_1[1] = 0;
              param_1[2] = 0;
              param_1[3] = -4;
              return param_1;
            }
            goto switchD_14257322a_caseD_26;
          }
          iVar4 = iVar4 + 1;
          iVar3 = 4;
        }
        break;
      case 1:
        *param_1 = iVar2 + iVar4;
        if (uVar1 == 0x27) {
          param_1[1] = 0x27;
          param_1[2] = 0;
          param_1[3] = 0;
          return param_1;
        }
LAB_1425733c1:
        param_1[1] = uVar1;
        param_1[2] = 2;
        param_1[3] = 0;
        return param_1;
      case 2:
        iVar4 = iVar4 + iVar2;
        iVar3 = 3;
        if (uVar1 != 0x27) {
          *param_1 = iVar4;
          goto LAB_1425733c1;
        }
        break;
      case 3:
        iVar3 = 0;
        if (uVar1 == 0x27) {
          *param_1 = iVar4 + 1;
          param_1[1] = 0x27;
          param_1[2] = 2;
          param_1[3] = 0;
          return param_1;
        }
        break;
      case 4:
        if (uVar1 != 0xa4) goto switchD_14257330b_caseD_4;
        iVar4 = iVar4 + 1;
        iVar3 = 5;
        break;
      case 5:
        if (uVar1 != 0xa4) goto switchD_14257330b_caseD_5;
        iVar4 = iVar4 + 1;
        iVar3 = 6;
        break;
      case 6:
        if (uVar1 != 0xa4) goto switchD_14257330b_caseD_6;
        iVar4 = iVar4 + 1;
        iVar3 = 7;
        break;
      case 7:
        if (uVar1 != 0xa4) goto switchD_14257330b_caseD_7;
        iVar4 = iVar4 + 1;
        iVar3 = 8;
        break;
      case 8:
        if (uVar1 == 0xa4) goto LAB_1425732bc;
        goto switchD_14257330b_caseD_8;
      case 9:
        if (uVar1 != 0xa4) goto switchD_14257330b_caseD_9;
LAB_1425732bc:
        iVar4 = iVar4 + iVar2;
        iVar3 = 9;
        break;
      default:
        goto switchD_142573215_default;
      }
      if (-1 < *(short *)(param_3 + 8)) {
        if ((int)*(short *)(param_3 + 8) >> 5 <= iVar4) break;
        goto LAB_1425731ec;
      }
    } while (iVar4 < *(int *)(param_3 + 0xc));
  }
  switch(iVar3) {
  case 1:
  case 2:
    *param_4 = 1;
  case 0:
  case 3:
    *param_1 = -1;
    break;
  case 4:
switchD_14257330b_caseD_4:
    *param_1 = iVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -5;
    break;
  case 5:
switchD_14257330b_caseD_5:
    *param_1 = iVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -6;
    break;
  case 6:
switchD_14257330b_caseD_6:
    *param_1 = iVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -7;
    break;
  case 7:
switchD_14257330b_caseD_7:
    *param_1 = iVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -8;
    break;
  case 8:
switchD_14257330b_caseD_8:
    *param_1 = iVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -9;
    break;
  case 9:
switchD_14257330b_caseD_9:
    *param_1 = iVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -0xf;
    break;
  default:
switchD_142573215_default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return param_1;
}



// FUNCTION 142573470 FUN_142573470 body=381 status=ok
// SIG undefined FUN_142573470(void)

int FUN_142573470(longlong param_1,longlong *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_a0 [2];
  int local_98;
  longlong local_90;
  longlong *local_88;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  
  local_90 = param_1 + 10;
  iVar5 = 0;
  uVar7 = 0;
  iVar6 = 0;
  local_88 = param_2;
  do {
    if (uVar7 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar2 < 1) {
        return iVar5;
      }
    }
    else if (iVar6 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar2 <= (int)uVar7) {
        return iVar5;
      }
    }
    else if (iVar6 == 2) {
      sVar1 = *(short *)(param_1 + 8);
      if (sVar1 < 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar3 = (int)sVar1 >> 5;
      }
      if ((uVar7 < uVar3) && (uVar7 == uVar3 - 1)) {
        lVar4 = local_90;
        if (((int)sVar1 & 2U) == 0) {
          lVar4 = *(longlong *)(param_1 + 0x18);
        }
        if (*(short *)(lVar4 + (ulonglong)uVar7 * 2) == 0x27) {
          return iVar5;
        }
      }
    }
    local_a0[0] = uVar7;
    local_98 = iVar6;
    FUN_142573190(&local_80,local_a0,param_1,param_3);
    iVar6 = local_78;
    uVar7 = local_80;
    if (0 < *param_3) {
      return iVar5;
    }
    if (local_74 == -0xf) {
      iVar5 = iVar5 + 1;
    }
    else if (local_74 < 0) {
      (**(code **)(*local_88 + 8))(local_88,&local_80,local_74);
      iVar2 = local_74;
      if (-1 < (short)local_78) {
        iVar2 = (int)(short)local_78 >> 5;
      }
      iVar5 = iVar5 + iVar2;
      FUN_140859a90(&local_80);
    }
    else {
      iVar5 = (iVar5 - (uint)(local_7c < 0x10000)) + 2;
    }
  } while (-1 < (int)uVar7);
  return iVar5;
}



// FUNCTION 142573610 FUN_142573610 body=310 status=ok
// SIG undefined FUN_142573610(void)

void FUN_142573610(longlong param_1,int param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_14257374e;
  }
  else if (*(short *)(param_1 + 8) >> 5 == 0) goto LAB_14257374e;
  auVar6 = (undefined1  [16])0x0;
  while( true ) {
    uVar2 = auVar6._0_4_;
    if ((int)uVar2 < 0) break;
    if (uVar2 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        if (*(int *)(param_1 + 0xc) < 1) break;
      }
      else if (*(short *)(param_1 + 8) >> 5 < 1) break;
    }
    else if (auVar6._8_4_ == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar3 <= (int)uVar2) break;
    }
    else if (auVar6._8_4_ == 2) {
      sVar1 = *(short *)(param_1 + 8);
      if (sVar1 < 0) {
        uVar4 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar4 = (int)sVar1 >> 5;
      }
      if ((uVar2 < uVar4) && (uVar2 == uVar4 - 1)) {
        lVar5 = param_1 + 10;
        if (((int)sVar1 & 2U) == 0) {
          lVar5 = *(longlong *)(param_1 + 0x18);
        }
        if (*(short *)(lVar5 + (ulonglong)uVar2 * 2) == 0x27) break;
      }
    }
    local_58 = auVar6;
    FUN_142573190(local_48,local_58,param_1,param_3);
    if ((0 < *param_3) || (auVar6 = local_48, local_48._12_4_ == param_2)) break;
  }
LAB_14257374e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142573770 FUN_142573770 body=360 status=ok
// SIG undefined FUN_142573770(void)

void FUN_142573770(ulonglong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(short *)(param_1 + 8) < 0) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 8) >> 5;
  }
  if (iVar2 != 0) {
    uVar3 = param_1;
    uVar5 = 0;
    iVar4 = 0;
    do {
      if (uVar5 == 0) {
        if (*(short *)(param_1 + 8) < 0) {
          iVar6 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)(param_1 + 8) >> 5;
        }
        if (iVar6 < 1) break;
      }
      else if (iVar4 == 0) {
        if (*(short *)(param_1 + 8) < 0) {
          iVar6 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)(param_1 + 8) >> 5;
        }
        if (iVar6 <= (int)uVar5) break;
      }
      else if (iVar4 == 2) {
        sVar1 = *(short *)(param_1 + 8);
        if (sVar1 < 0) {
          uVar7 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar7 = (int)sVar1 >> 5;
        }
        if ((uVar5 < uVar7) && (uVar5 == uVar7 - 1)) {
          lVar8 = param_1 + 10;
          if (((int)sVar1 & 2U) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x18);
          }
          if (*(short *)(lVar8 + (ulonglong)uVar5 * 2) == 0x27) break;
        }
      }
      local_54 = (undefined4)uVar3;
      local_58 = uVar5;
      local_50 = iVar4;
      local_4c = iVar2;
      FUN_142573190(&local_48,&local_58,param_1,param_2);
      if (0 < *param_2) break;
      uVar3 = (ulonglong)local_44;
      if ((local_3c < 0) && (3 < local_3c + 4U)) {
        if ((10 < local_3c + 0xfU) || ((0x7c1U >> (local_3c + 0xfU & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        break;
      }
      iVar2 = local_3c;
      uVar5 = local_48;
      iVar4 = local_40;
    } while (-1 < (int)local_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142573910 FUN_142573910 body=371 status=ok
// SIG undefined FUN_142573910(void)

void FUN_142573910(longlong param_1,undefined8 param_2,int *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  uint local_68 [2];
  int local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(short *)(param_1 + 8) < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 8) >> 5;
  }
  local_70 = param_2;
  if (iVar3 != 0) {
    local_78 = param_1 + 10;
    uVar7 = 0;
    iVar3 = 0;
    do {
      if (uVar7 == 0) {
        if (*(short *)(param_1 + 8) < 0) {
          if (*(int *)(param_1 + 0xc) < 1) break;
        }
        else if (*(short *)(param_1 + 8) >> 5 < 1) break;
      }
      else if (iVar3 == 0) {
        if (*(short *)(param_1 + 8) < 0) {
          iVar4 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(param_1 + 8) >> 5;
        }
        if (iVar4 <= (int)uVar7) break;
      }
      else if (iVar3 == 2) {
        sVar1 = *(short *)(param_1 + 8);
        if (sVar1 < 0) {
          uVar5 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar5 = (int)sVar1 >> 5;
        }
        if ((uVar7 < uVar5) && (uVar7 == uVar5 - 1)) {
          lVar6 = local_78;
          if (((int)sVar1 & 2U) == 0) {
            lVar6 = *(longlong *)(param_1 + 0x18);
          }
          if (*(short *)(lVar6 + (ulonglong)uVar7 * 2) == 0x27) break;
        }
      }
      local_68[0] = uVar7;
      local_60 = iVar3;
      FUN_142573190(&local_58,local_68,param_1,param_3);
      iVar3 = local_50;
      uVar7 = local_58;
      if ((0 < *param_3) ||
         (((local_4c == 0 && (cVar2 = FUN_142512880(local_70,local_54), cVar2 == '\0')) ||
          ((int)uVar7 < 0)))) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 142573ac0 FUN_142573ac0 body=352 status=ok
// SIG undefined FUN_142573ac0(void)

void FUN_142573ac0(longlong param_1,longlong *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  uint local_68 [2];
  int local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_142573c18;
  }
  else if (*(short *)(param_1 + 8) >> 5 == 0) goto LAB_142573c18;
  local_70 = param_1 + 10;
  iVar5 = 0;
  uVar6 = 0;
  while (-1 < (int)uVar6) {
    if (uVar6 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar2 < 1) break;
    }
    else if (iVar5 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar2 <= (int)uVar6) break;
    }
    else if (iVar5 == 2) {
      sVar1 = *(short *)(param_1 + 8);
      if (sVar1 < 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar3 = (int)sVar1 >> 5;
      }
      if ((uVar6 < uVar3) && (uVar6 == uVar3 - 1)) {
        lVar4 = local_70;
        if (((int)sVar1 & 2U) == 0) {
          lVar4 = *(longlong *)(param_1 + 0x18);
        }
        if (*(short *)(lVar4 + (ulonglong)uVar6 * 2) == 0x27) break;
      }
    }
    local_68[0] = uVar6;
    local_60 = iVar5;
    FUN_142573190(&local_58,local_68,param_1,param_3);
    iVar5 = local_50;
    uVar6 = local_58;
    if ((0 < *param_3) ||
       ((**(code **)(*param_2 + 8))(param_2,local_4c,local_54,param_3), 0 < *param_3)) break;
  }
LAB_142573c18:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 142573c40 FUN_142573c40 body=61 status=ok
// SIG undefined FUN_142573c40(void)

void FUN_142573c40(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = icu_64::FormattedValueNumberStringBuilderImpl::vftable;
  FUN_142609430(param_1 + 1);
  *(undefined1 *)(param_1 + 0x12) = param_2;
  return;
}



// FUNCTION 142573c80 Unwind@142573c80 body=32 status=ok
// SIG undefined Unwind@142573c80(void)

void Unwind_142573c80(undefined8 param_1,longlong param_2)

{
  FUN_142620ea0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142573ca0 FUN_142573ca0 body=40 status=ok
// SIG undefined FUN_142573ca0(void)

void FUN_142573ca0(undefined8 *param_1)

{
  *param_1 = icu_64::FormattedValueNumberStringBuilderImpl::vftable;
  FUN_142609450(param_1 + 1);
  FUN_142620ea0(param_1);
  return;
}



// FUNCTION 142573cd0 FUN_142573cd0 body=26 status=ok
// SIG undefined FUN_142573cd0(void)

undefined8 FUN_142573cd0(longlong param_1,undefined8 param_2)

{
  FUN_14260a270(param_1 + 8);
  return param_2;
}



// FUNCTION 142573cf0 FUN_142573cf0 body=26 status=ok
// SIG undefined FUN_142573cf0(void)

undefined8 FUN_142573cf0(longlong param_1,undefined8 param_2)

{
  FUN_14260a2b0(param_1 + 8);
  return param_2;
}



// FUNCTION 142573d10 FUN_142573d10 body=62 status=ok
// SIG undefined FUN_142573d10(void)

longlong * FUN_142573d10(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_142609640(param_1 + 8);
  uVar2 = FUN_14260a2f0(param_1 + 8);
  (**(code **)(*param_2 + 0x20))(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 142573d50 FUN_142573d50 body=30 status=ok
// SIG undefined FUN_142573d50(void)

void FUN_142573d50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14260a560(param_1 + 8,param_2,*(undefined1 *)(param_1 + 0x90),param_3);
  return;
}



// FUNCTION 142573d70 FUN_142573d70 body=60 status=ok
// SIG undefined FUN_142573d70(void)

undefined8 * FUN_142573d70(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::FormattedValueNumberStringBuilderImpl::vftable;
  FUN_142609450(param_1 + 1);
  FUN_142620ea0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142573db0 FUN_142573db0 body=1 status=ok
// SIG undefined FUN_142573db0(void)

void FUN_142573db0(void)

{
  return;
}



// FUNCTION 142573dc0 FUN_142573dc0 body=56 status=ok
// SIG undefined FUN_142573dc0(void)

void FUN_142573dc0(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = icu_64::number::impl::MutablePatternModifier::vftable;
  param_1[1] = icu_64::number::impl::MutablePatternModifier::vftable;
  param_1[2] = icu_64::number::impl::MutablePatternModifier::vftable;
  *(undefined1 *)(param_1 + 3) = param_2;
  param_1[0xd] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe) = 2;
  return;
}



// FUNCTION 142573e00 FUN_142573e00 body=9 status=ok
// SIG undefined FUN_142573e00(void)

void FUN_142573e00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



// FUNCTION 142573e10 FUN_142573e10 body=8 status=ok
// SIG undefined FUN_142573e10(void)

void FUN_142573e10(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



// FUNCTION 142573e20 FUN_142573e20 body=22 status=ok
// SIG undefined FUN_142573e20(void)

void FUN_142573e20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined8 *)(param_1 + 0x50) = param_5;
  return;
}



// FUNCTION 142573e40 FUN_142573e40 body=8 status=ok
// SIG undefined FUN_142573e40(void)

void FUN_142573e40(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return;
}



// FUNCTION 142573e50 FUN_142573e50 body=63 status=ok
// SIG undefined FUN_142573e50(void)

void FUN_142573e50(longlong param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
            (*(longlong **)(param_1 + 0x20),0xfffffff9,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142573ea0 FUN_142573ea0 body=10 status=ok
// SIG undefined FUN_142573ea0(void)

void FUN_142573ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_142573eb0(param_1,0,param_2);
  return;
}



// FUNCTION 142573eb0 FUN_142573eb0 body=493 status=ok
// SIG undefined FUN_142573eb0(void)

undefined8 * FUN_142573eb0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 local_44;
  
  puVar3 = (undefined8 *)thunk_FUN_1424da030(0x98);
  if (puVar3 == (undefined8 *)0x0) {
    *param_3 = 7;
  }
  else {
    *puVar3 = icu_64::number::impl::AdoptingModifierStore::vftable;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    local_44 = 0;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                      (*(longlong **)(param_1 + 0x20),0xfffffff9,&local_44);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 6;
      uVar4 = FUN_1425740a0(param_1,param_3);
      puVar3[0x12] = uVar4;
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 6;
      uVar4 = FUN_1425740a0(param_1,param_3);
      puVar3[0x11] = uVar4;
      *(undefined1 *)(param_1 + 0x58) = 0xff;
      *(undefined4 *)(param_1 + 0x5c) = 6;
      uVar4 = FUN_1425740a0(param_1,param_3);
      puVar3[0x10] = uVar4;
      if (*param_3 < 1) {
        puVar5 = (undefined8 *)thunk_FUN_1424da030(0x20);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        *puVar5 = icu_64::number::impl::ImmutablePatternModifier::vftable;
        puVar5[1] = puVar3;
        puVar5[2] = 0;
        goto LAB_142574097;
      }
    }
    else {
      lVar6 = 0;
      do {
        iVar1 = *(int *)((longlong)&DAT_1499f0040 + lVar6);
        *(undefined1 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x5c) = iVar1;
        uVar4 = FUN_1425740a0(param_1,param_3);
        puVar3[(longlong)iVar1 * 3 + 3] = uVar4;
        *(undefined1 *)(param_1 + 0x58) = 0;
        *(int *)(param_1 + 0x5c) = iVar1;
        uVar4 = FUN_1425740a0(param_1,param_3);
        puVar3[(longlong)(iVar1 * 3) + 2] = uVar4;
        *(undefined1 *)(param_1 + 0x58) = 0xff;
        *(int *)(param_1 + 0x5c) = iVar1;
        uVar4 = FUN_1425740a0(param_1,param_3);
        puVar3[(longlong)(iVar1 * 3) + 1] = uVar4;
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x18);
      if (*param_3 < 1) {
        puVar5 = (undefined8 *)thunk_FUN_1424da030(0x20);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        *puVar5 = icu_64::number::impl::ImmutablePatternModifier::vftable;
        puVar5[1] = puVar3;
        puVar5[2] = uVar4;
LAB_142574097:
        puVar5[3] = param_2;
        return puVar5;
      }
    }
    (**(code **)*puVar3)(puVar3,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425740a0 FUN_1425740a0 body=499 status=ok
// SIG undefined FUN_1425740a0(void)

undefined8 * FUN_1425740a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 local_158 [136];
  undefined1 local_d0 [136];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_142609430(local_158);
  FUN_142609430(local_d0);
  lVar1 = param_1 + 0x68;
  FUN_142568d10(*(undefined8 *)(param_1 + 0x20),
                CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(param_1 + 0x5c) >> 8),1),
                *(undefined1 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x2c),
                *(undefined4 *)(param_1 + 0x5c),*(undefined1 *)(param_1 + 0x30),lVar1);
  FUN_142572f20(lVar1,local_158,0,param_1 + 0x10,*(undefined1 *)(param_1 + 0x28),param_2);
  FUN_142568d10(*(undefined8 *)(param_1 + 0x20),0,*(undefined1 *)(param_1 + 0x58),
                *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x5c),
                *(undefined1 *)(param_1 + 0x30),lVar1);
  FUN_142572f20(lVar1,local_d0,0,param_1 + 0x10,*(undefined1 *)(param_1 + 0x28),param_2);
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
  if (cVar4 == '\0') {
    puVar7 = (undefined8 *)thunk_FUN_1424da030(0x130);
    if (puVar7 != (undefined8 *)0x0) {
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      local_38 = puVar7;
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))();
      *local_38 = icu_64::number::impl::ConstantMultiFieldModifier::vftable;
      local_48 = local_38 + 1;
      FUN_142609480(local_48,local_158);
      local_40 = local_38 + 0x12;
      FUN_142609480(local_40,local_d0);
      *(byte *)(local_38 + 0x23) = bVar5 ^ 1;
      *(undefined1 *)((longlong)local_38 + 0x119) = uVar2;
      FUN_142629790(local_38 + 0x24);
      puVar7 = local_38;
      goto LAB_142574270;
    }
  }
  else {
    puVar7 = (undefined8 *)thunk_FUN_1424da030(0x340);
    if (puVar7 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      local_38 = puVar7;
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))();
      FUN_142629e70(local_38,local_158,local_d0,uVar6 ^ 1,uVar2,uVar3,param_2);
      puVar7 = local_38;
      goto LAB_142574270;
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_142574270:
  FUN_142609450(local_d0);
  FUN_142609450(local_158);
  return puVar7;
}



// FUNCTION 1425742a0 Unwind@1425742a0 body=46 status=ok
// SIG undefined Unwind@1425742a0(void)

void Unwind_1425742a0(undefined8 param_1,longlong param_2)

{
  FUN_142609450(*(undefined8 *)(param_2 + 0x158));
  return;
}



// FUNCTION 1425742d0 Unwind@1425742d0 body=46 status=ok
// SIG undefined Unwind@1425742d0(void)

void Unwind_1425742d0(undefined8 param_1,longlong param_2)

{
  FUN_142609450(*(undefined8 *)(param_2 + 0x150));
  return;
}



// FUNCTION 142574300 Unwind@142574300 body=46 status=ok
// SIG undefined Unwind@142574300(void)

void Unwind_142574300(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x160));
  return;
}



// FUNCTION 142574330 Unwind@142574330 body=46 status=ok
// SIG undefined Unwind@142574330(void)

void Unwind_142574330(undefined8 param_1,longlong param_2)

{
  FUN_142629780(*(undefined8 *)(param_2 + 0x160));
  return;
}



// FUNCTION 142574360 Unwind@142574360 body=46 status=ok
// SIG undefined Unwind@142574360(void)

void Unwind_142574360(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x160));
  return;
}



// FUNCTION 142574390 Unwind@142574390 body=43 status=ok
// SIG undefined Unwind@142574390(void)

void Unwind_142574390(undefined8 param_1,longlong param_2)

{
  FUN_142609450(param_2 + 200);
  return;
}



// FUNCTION 1425743c0 Unwind@1425743c0 body=43 status=ok
// SIG undefined Unwind@1425743c0(void)

void Unwind_1425743c0(undefined8 param_1,longlong param_2)

{
  FUN_142609450(param_2 + 0x40);
  return;
}



// FUNCTION 1425743f0 FUN_1425743f0 body=57 status=ok
// SIG undefined FUN_1425743f0(void)

void FUN_1425743f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  FUN_142574430(param_1,param_3,param_2,param_4);
  return;
}



// FUNCTION 142574430 FUN_142574430 body=228 status=ok
// SIG undefined FUN_142574430(void)

void FUN_142574430(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 local_d0 [72];
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    cVar3 = FUN_142538f20(param_3);
    uVar6 = *(undefined8 *)(lVar1 + 0x88 + (longlong)cVar3 * 8);
  }
  else {
    FUN_142537d90(local_d0,param_3);
    FUN_142621810(param_2 + 8,local_d0,param_4);
    iVar7 = 5;
    if (*param_4 < 1) {
      FUN_1424c1400(lVar1,local_88,local_d0);
      iVar4 = FUN_14262c1b0(local_88);
      iVar7 = 5;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      FUN_140859a90(local_88);
    }
    FUN_142537d50(local_d0);
    plVar2 = *(longlong **)(param_1 + 8);
    uVar5 = FUN_142538f20(param_3);
    uVar6 = (**(code **)(*plVar2 + 8))(plVar2,uVar5,iVar7);
  }
  *(undefined8 *)(param_2 + 0x78) = uVar6;
  return;
}



// FUNCTION 142574520 Unwind@142574520 body=55 status=ok
// SIG undefined Unwind@142574520(void)

void Unwind_142574520(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 142574560 Unwind@142574560 body=55 status=ok
// SIG undefined Unwind@142574560(void)

void Unwind_142574560(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x28);
  return;
}



// FUNCTION 1425745a0 FUN_1425745a0 body=34 status=ok
// SIG undefined FUN_1425745a0(void)

longlong FUN_1425745a0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001425745b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    return lVar1;
  }
  return (*(longlong **)(param_1 + 8))[(longlong)param_2 + 0x11];
}



// FUNCTION 1425745d0 FUN_1425745d0 body=8 status=ok
// SIG undefined FUN_1425745d0(void)

longlong FUN_1425745d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return param_1;
}



// FUNCTION 1425745e0 FUN_1425745e0 body=239 status=ok
// SIG undefined FUN_1425745e0(void)

void FUN_1425745e0(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_d0 [64];
  undefined4 local_90 [18];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
  local_90[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                    (*(longlong **)(param_1 + 0x20),0xfffffff9,local_90);
  iVar5 = 6;
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x50);
    FUN_142537d90(local_90,param_2);
    FUN_142621810(param_3 + 8,local_90,param_4);
    iVar5 = 5;
    if ((lVar1 != 0) && (*param_4 < 1)) {
      FUN_1424c1400(lVar1,local_d0,local_90);
      iVar4 = FUN_14262c1b0(local_d0);
      iVar5 = 5;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      FUN_140859a90(local_d0);
    }
    FUN_142537d50(local_90);
  }
  uVar3 = FUN_142538f20(param_2);
  *(undefined1 *)(param_1 + 0x58) = uVar3;
  *(int *)(param_1 + 0x5c) = iVar5;
  *(longlong *)(param_3 + 0x78) = param_1 + 8;
  return;
}



// FUNCTION 1425746d0 Unwind@1425746d0 body=55 status=ok
// SIG undefined Unwind@1425746d0(void)

void Unwind_1425746d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142574710 Unwind@142574710 body=55 status=ok
// SIG undefined Unwind@142574710(void)

void Unwind_142574710(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x68);
  return;
}



// FUNCTION 142574750 FUN_142574750 body=399 status=ok
// SIG undefined FUN_142574750(void)

int FUN_142574750(longlong param_1,undefined8 param_2,uint param_3,int param_4,ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined **local_a0;
  undefined2 local_98;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x60;
  local_60 = (ulonglong)param_3;
  FUN_142568d10(*(undefined8 *)(param_1 + 0x18),
                CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(param_1 + 0x54) >> 8),1),
                *(undefined1 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x54),*(undefined1 *)(param_1 + 0x28),lVar1);
  uVar5 = FUN_142572f20(lVar1,param_2,(ulonglong)param_3,param_1 + 8,*(undefined1 *)(param_1 + 0x20)
                        ,param_5);
  param_4 = param_4 + uVar5;
  local_4c = 0;
  FUN_142568d10(*(undefined8 *)(param_1 + 0x18),0,*(undefined1 *)(param_1 + 0x50),
                *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x54),
                *(undefined1 *)(param_1 + 0x28),lVar1);
  uVar2 = local_60;
  uVar8 = param_5;
  iVar6 = FUN_142572f20(lVar1,param_2,param_4,param_1 + 8,*(undefined1 *)(param_1 + 0x20),param_5);
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
  uVar7 = (ulonglong)uVar5;
  if (cVar4 == '\0') {
    local_a0 = &PTR_FUN_149e18960;
    local_98 = 2;
    local_58 = (ulonglong)uVar5;
    local_4c = FUN_142609bc0(param_2,(int)uVar2 + uVar5,param_4,&local_a0,0,
                             uVar8 & 0xffffffff00000000,0xd,param_5);
    FUN_140859a90(&local_a0);
    uVar7 = local_58;
  }
  iVar3 = local_4c;
  FUN_14262a880(param_2,uVar2 & 0xffffffff,uVar7 & 0xffffffff,param_4 + local_4c,iVar6,
                *(undefined8 *)(param_1 + 0x30),param_5);
  return iVar6 + (int)uVar7 + iVar3;
}



// FUNCTION 1425748e0 Unwind@1425748e0 body=55 status=ok
// SIG undefined Unwind@1425748e0(void)

void Unwind_1425748e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x48);
  return;
}



// FUNCTION 142574920 FUN_142574920 body=111 status=ok
// SIG undefined FUN_142574920(void)

void FUN_142574920(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  local_30 = *(undefined1 *)(param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x54);
  local_28 = param_1 + 0x60;
  FUN_142568d10(*(undefined8 *)(param_1 + 0x18),CONCAT71((uint7)(uint3)((uint)local_38 >> 8),1),
                *(undefined1 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x24));
  FUN_142573470(param_1 + 0x60,param_1 + 8,&local_1c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425749a0 FUN_1425749a0 body=176 status=ok
// SIG undefined FUN_1425749a0(void)

void FUN_1425749a0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  lVar1 = param_1 + 0x60;
  local_50 = *(undefined1 *)(param_1 + 0x28);
  local_58 = *(undefined4 *)(param_1 + 0x54);
  local_48 = lVar1;
  FUN_142568d10(*(undefined8 *)(param_1 + 0x18),CONCAT71((uint7)(uint3)((uint)local_58 >> 8),1),
                *(undefined1 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x24));
  FUN_142573470(lVar1,param_1 + 8,&local_34);
  local_50 = *(undefined1 *)(param_1 + 0x28);
  local_58 = *(undefined4 *)(param_1 + 0x54);
  local_48 = lVar1;
  FUN_142568d10(*(undefined8 *)(param_1 + 0x18),0,*(undefined1 *)(param_1 + 0x50),
                *(undefined4 *)(param_1 + 0x24));
  FUN_142573470(lVar1,param_1 + 8,&local_34);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 142574a60 FUN_142574a60 body=5 status=ok
// SIG undefined FUN_142574a60(void)

undefined1 FUN_142574a60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// FUNCTION 142574a70 FUN_142574a70 body=10 status=ok
// SIG undefined FUN_142574a70(void)

void FUN_142574a70(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 142574a80 FUN_142574a80 body=10 status=ok
// SIG undefined FUN_142574a80(void)

void FUN_142574a80(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 142574a90 FUN_142574a90 body=10 status=ok
// SIG undefined FUN_142574a90(void)

void FUN_142574a90(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 142574aa0 FUN_142574aa0 body=253 status=ok
// SIG undefined FUN_142574aa0(void)

void FUN_142574aa0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  switch(param_3) {
  case 0xfffffff7:
  case 0xfffffff8:
    FUN_1424a6c90(param_2,&DAT_1499f0108);
    goto LAB_142574b52;
  case 0xfffffff9:
    FUN_14262bba0(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined4 *)(param_1 + 0x4c),&local_14)
    ;
    goto LAB_142574b52;
  case 0xfffffffa:
    goto switchD_142574adb_caseD_fffffffa;
  case 0xfffffffb:
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      FUN_14262ba10(*(undefined8 *)(param_1 + 0x38),param_2,&local_14);
      goto LAB_142574b52;
    }
    if (iVar1 == 4) {
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
      goto LAB_142574b52;
    }
    if (iVar1 != 3) {
      FUN_14262bab0(*(undefined8 *)(param_1 + 0x38),param_2,&local_14);
      goto LAB_142574b52;
    }
    goto switchD_142574adb_caseD_fffffffa;
  case 0xfffffffc:
    lVar2 = 0x308;
    break;
  case 0xfffffffd:
    lVar2 = 200;
    break;
  case 0xfffffffe:
    lVar2 = 0x1c8;
    break;
  case 0xffffffff:
    lVar2 = 0x188;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_1424a6be0(param_2,lVar2 + *(longlong *)(param_1 + 0x28));
LAB_142574b52:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
switchD_142574adb_caseD_fffffffa:
  FUN_14262bb60(*(undefined8 *)(param_1 + 0x38),param_2,&local_14);
  goto LAB_142574b52;
}



// FUNCTION 142574bb0 FUN_142574bb0 body=112 status=ok
// SIG undefined FUN_142574bb0(void)

undefined8 * FUN_142574bb0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::MutablePatternModifier::vftable;
  param_1[1] = icu_64::number::impl::MutablePatternModifier::vftable;
  param_1[2] = icu_64::number::impl::MutablePatternModifier::vftable;
  FUN_140859a90(param_1 + 0xd);
  FUN_142572bc0(param_1 + 2);
  FUN_142629780(param_1 + 1);
  FUN_1426276d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142574c20 FUN_142574c20 body=112 status=ok
// SIG undefined FUN_142574c20(void)

undefined8 * FUN_142574c20(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -1;
  param_1[-1] = icu_64::number::impl::MutablePatternModifier::vftable;
  *param_1 = icu_64::number::impl::MutablePatternModifier::vftable;
  param_1[1] = icu_64::number::impl::MutablePatternModifier::vftable;
  FUN_140859a90(param_1 + 0xc);
  FUN_142572bc0(param_1 + 1);
  FUN_142629780(param_1);
  FUN_1426276d0(puVar1);
  if (param_2 != 0) {
    FUN_1401773f0(puVar1);
  }
  return puVar1;
}



// FUNCTION 142574c90 FUN_142574c90 body=112 status=ok
// SIG undefined FUN_142574c90(void)

undefined8 * FUN_142574c90(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  param_1[-2] = icu_64::number::impl::MutablePatternModifier::vftable;
  param_1[-1] = icu_64::number::impl::MutablePatternModifier::vftable;
  *param_1 = icu_64::number::impl::MutablePatternModifier::vftable;
  FUN_140859a90(param_1 + 0xb);
  FUN_142572bc0(param_1);
  FUN_142629780(param_1 + -1);
  FUN_1426276d0(puVar1);
  if (param_2 != 0) {
    FUN_1401773f0(puVar1);
  }
  return puVar1;
}



// FUNCTION 142574d00 FUN_142574d00 body=70 status=ok
// SIG undefined FUN_142574d00(void)

undefined8 * FUN_142574d00(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::number::impl::ImmutablePatternModifier::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1426276d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142574d50 FUN_142574d50 body=38 status=ok
// SIG undefined FUN_142574d50(void)

undefined8 FUN_142574d50(undefined8 param_1,int param_2)

{
  FUN_1426297c0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142574d80 FUN_142574d80 body=41 status=ok
// SIG undefined FUN_142574d80(void)

longlong FUN_142574d80(longlong param_1,char param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8 + (longlong)(param_3 * 3 + (int)param_2 + 1) * 8);
  if ((param_3 != 5) && (lVar1 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x88 + (longlong)(int)param_2 * 8);
  }
  return lVar1;
}



// FUNCTION 142574db0 FUN_142574db0 body=72 status=ok
// SIG undefined FUN_142574db0(void)

undefined8 * FUN_142574db0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::ConstantMultiFieldModifier::vftable;
  FUN_142609450(param_1 + 0x12);
  FUN_142609450(param_1 + 1);
  FUN_142629780(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142574e00 FUN_142574e00 body=39 status=ok
// SIG undefined FUN_142574e00(void)

undefined * FUN_142574e00(longlong param_1)

{
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x268) < 4) {
    return (&PTR_s_islamic_1499f0bf0)[*(int *)(param_1 + 0x268)];
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 142574e30 FUN_142574e30 body=85 status=ok
// SIG undefined FUN_142574e30(void)

void FUN_142574e30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x270);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424cc000(puVar1,param_1);
    *puVar1 = icu_64::IslamicCalendar::vftable;
    *(undefined4 *)(puVar1 + 0x4d) = *(undefined4 *)(param_1 + 0x268);
  }
  return;
}



// FUNCTION 142574e90 Unwind@142574e90 body=32 status=ok
// SIG undefined Unwind@142574e90(void)

void Unwind_142574e90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142574eb0 FUN_142574eb0 body=113 status=ok
// SIG undefined FUN_142574eb0(void)

undefined8 *
FUN_142574eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(param_1,uVar1,param_2,param_3);
  *param_1 = icu_64::IslamicCalendar::vftable;
  *(undefined4 *)(param_1 + 0x4d) = param_4;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 142574f30 Unwind@142574f30 body=40 status=ok
// SIG undefined Unwind@142574f30(void)

void Unwind_142574f30(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142574f60 FUN_142574f60 body=24 status=ok
// SIG undefined FUN_142574f60(void)

undefined4 FUN_142574f60(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_1499f0950 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 142574f80 FUN_142574f80 body=330 status=ok
// SIG undefined FUN_142574f80(void)

void FUN_142574f80(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [36];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54 = 0;
  iVar1 = FUN_142632900(&DAT_14c7936c8,param_2,&local_54);
  if (iVar1 == 0) {
    dVar2 = (double)FUN_1424d97b0((double)(int)param_2 * 29.530588853);
    dVar3 = dVar2 * 86400000.0 + -42521587200000.0;
    dVar2 = (double)FUN_142575230(dVar3,&local_54);
    if (local_54 < 1) {
      if (0.0 <= dVar2) {
        do {
          dVar3 = dVar3 + -86400000.0;
          dVar2 = (double)FUN_142575230(dVar3,&local_54);
          if (0 < local_54) goto LAB_1425750b3;
        } while (0.0 <= dVar2);
      }
      else {
        do {
          dVar3 = dVar3 + 86400000.0;
          dVar2 = (double)FUN_142575230(dVar3,&local_54);
          if (0 < local_54) goto LAB_1425750b3;
        } while (dVar2 < 0.0);
      }
      dVar2 = (double)FUN_1424d97b0((dVar3 + 42521587200000.0) / 86400000.0);
      FUN_142632b40(&DAT_14c7936c8,param_2 & 0xffffffff,(int)dVar2 + 1,&local_54);
    }
  }
LAB_1425750b3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425750f0 FUN_1425750f0 body=312 status=ok
// SIG undefined FUN_1425750f0(void)

ulonglong FUN_1425750f0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  
  switch((int)param_1[0x4d]) {
  case 0:
    uVar2 = FUN_142574f80(&switchD_142575120::switchdataD_1499f0e6c,param_3 + param_2 * 0xc + -0xc);
    return uVar2;
  case 1:
  case 3:
    dVar5 = ceil((double)param_3 * 29.5);
    iVar4 = FUN_142500cd0(param_2 * 0xb + 3,0x1e);
    uVar3 = (iVar4 + param_2 * 0x162 + (int)dVar5) - 0x162;
    goto LAB_14257521b;
  case 2:
    if (0xfffffed2 < param_2 - 0x641U) goto switchD_142575120_default;
    iVar4 = FUN_142500cd0(param_2 * 0xb + 3,0x1e);
    uVar3 = (param_2 * 0x162 + iVar4) - 0x162;
    break;
  default:
switchD_142575120_default:
    uVar3 = (int)(char)(&DAT_1499f05ac)[param_2] +
            (int)((double)(param_2 + -0x514) * 354.3672 + 460322.05 + 0.5);
  }
  if (0 < param_3) {
    iVar4 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,iVar4);
      uVar3 = uVar3 + iVar1;
      iVar4 = iVar4 + 1;
    } while (param_3 != iVar4);
  }
LAB_14257521b:
  return (ulonglong)uVar3;
}



// FUNCTION 142575230 FUN_142575230 body=392 status=ok
// SIG undefined FUN_142575230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142575230(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  double dVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793720) && (FUN_144b3d300(&DAT_14c793720), DAT_14c793720 == -1)) {
    _DAT_14c793710 = 0;
    uRam000000014c793718 = 0;
    _DAT_14c793700 = 0;
    uRam000000014c793708 = 0;
    _DAT_14c7936f0 = 0;
    uRam000000014c7936f8 = 0;
    _DAT_14c7936e0 = 0;
    uRam000000014c7936e8 = 0;
    _DAT_14c7936d0 = 0;
    uRam000000014c7936d8 = 0;
    _Mtx_init_in_situ(&DAT_14c7936d0,2);
    atexit((_func_5014 *)&LAB_1425753f0);
    _Init_thread_footer(&DAT_14c793720);
  }
  FUN_142501320(&DAT_14c7936d0);
  if (DAT_14c793728 == 0) {
    lVar1 = thunk_FUN_1424da030(0x88);
    if (lVar1 == 0) {
      DAT_14c793728 = 0;
      *param_2 = 7;
      return 0;
    }
    FUN_142631cd0(lVar1);
    DAT_14c793728 = lVar1;
    FUN_14251f960(7,FUN_142575400);
  }
  FUN_142631d60(DAT_14c793728);
  dVar2 = (double)FUN_142632850(DAT_14c793728);
  FUN_142501400(&DAT_14c7936d0);
  dVar2 = (dVar2 * 180.0) / 3.141592653589793;
  return ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
         (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
}



// FUNCTION 1425753c0 Unwind@1425753c0 body=42 status=ok
// SIG undefined Unwind@1425753c0(void)

void Unwind_1425753c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142575400 FUN_142575400 body=85 status=ok
// SIG undefined FUN_142575400(void)

undefined8 FUN_142575400(void)

{
  longlong lVar1;
  
  if (DAT_14c7936c8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c7936c8)(DAT_14c7936c8,1);
    DAT_14c7936c8 = (undefined8 *)0x0;
  }
  lVar1 = DAT_14c793728;
  if (DAT_14c793728 != 0) {
    FUN_142631d50(DAT_14c793728);
    FUN_1401773f0(lVar1);
    DAT_14c793728 = 0;
  }
  return 1;
}



// FUNCTION 142575460 FUN_142575460 body=238 status=ok
// SIG undefined FUN_142575460(void)

int FUN_142575460(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1 + 0x268)) {
  case 0:
    iVar3 = FUN_142574f80(&switchD_142575484::switchdataD_1499f0e7c,param_3 + param_2 * 0xc + -0xb);
    iVar2 = FUN_142574f80();
    return iVar3 - iVar2;
  case 2:
    if (0xfffffed2 < param_2 - 0x641U) goto switchD_142575484_default;
  case 1:
  case 3:
    uVar1 = (param_3 - (param_3 + 1 >> 0x1f)) + 1U & 0xfffffffe;
    iVar3 = (param_3 - uVar1) + 0x1e;
    if ((param_3 == 0xb) &&
       (iVar2 = (int)((ulonglong)((longlong)(param_2 * 0xb + 0xe) * -0x77777777) >> 0x20) +
                param_2 * 0xb + 0xe,
       ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1e + param_2 * 0xb + 0xe < 0xb)) {
      iVar3 = 0x2a - uVar1;
    }
    break;
  default:
switchD_142575484_default:
    iVar3 = ((*(uint *)((longlong)&PTR_FUN_1499ef040 + (longlong)param_2 * 4) >>
              ((byte)(0xb - (char)param_3) & 0x1f) & 1) != 0) + 0x1d;
  }
  return iVar3;
}



// FUNCTION 142575550 FUN_142575550 body=476 status=ok
// SIG undefined FUN_142575550(void)

uint FUN_142575550(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  switch((int)param_1[0x4d]) {
  case 0:
    iVar1 = FUN_142574f80(&switchD_14257557d::switchdataD_1499f0e8c,param_2 * 0xc);
    iVar2 = FUN_142574f80();
    return iVar1 - iVar2;
  case 2:
    if (0xfffffed2 < param_2 - 0x641U) goto switchD_14257557d_default;
  case 1:
  case 3:
    iVar1 = (int)((ulonglong)((longlong)(param_2 * 0xb + 0xe) * -0x77777777) >> 0x20) +
            param_2 * 0xb + 0xe;
    uVar13 = ((iVar1 >> 4) - (iVar1 >> 0x1f)) * -0x1e + param_2 * 0xb + 0xe < 0xb | 0x162;
    break;
  default:
switchD_14257557d_default:
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,0);
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,param_2,1);
    iVar3 = (**(code **)(*param_1 + 0x108))(param_1,param_2,2);
    iVar4 = (**(code **)(*param_1 + 0x108))(param_1,param_2,3);
    iVar5 = (**(code **)(*param_1 + 0x108))(param_1,param_2,4);
    iVar6 = (**(code **)(*param_1 + 0x108))(param_1,param_2,5);
    iVar7 = (**(code **)(*param_1 + 0x108))(param_1,param_2,6);
    iVar8 = (**(code **)(*param_1 + 0x108))(param_1,param_2,7);
    iVar9 = (**(code **)(*param_1 + 0x108))(param_1,param_2,8);
    iVar10 = (**(code **)(*param_1 + 0x108))(param_1,param_2,9);
    iVar11 = (**(code **)(*param_1 + 0x108))(param_1,param_2,10);
    iVar12 = (**(code **)(*param_1 + 0x108))(param_1,param_2,0xb);
    uVar13 = iVar12 + iVar11 + iVar10 + iVar9 + iVar8 +
                      iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1;
  }
  return uVar13;
}



// FUNCTION 142575730 FUN_142575730 body=120 status=ok
// SIG undefined FUN_142575730(void)

int FUN_142575730(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  if ((int)uVar3 < 0xc) {
    if ((int)uVar3 < 0) {
      uVar1 = ~uVar3 / 0xc;
      param_2 = (ulonglong)((int)param_2 + ~uVar1);
      param_3 = (ulonglong)((uVar1 * 0xc - ~uVar3) + 0xb);
    }
  }
  else {
    iVar2 = (int)((param_3 & 0xffffffff) / 0xc);
    param_2 = (ulonglong)(uint)((int)param_2 + iVar2);
    param_3 = (ulonglong)(uVar3 + iVar2 * -0xc);
  }
  iVar2 = FUN_1425750f0(param_1,param_2,param_3);
  return (iVar2 - (uint)(*(int *)(param_1 + 0x268) == 3)) + 0x1dbb17;
}



// FUNCTION 1425757b0 FUN_1425757b0 body=70 status=ok
// SIG undefined FUN_1425757b0(void)

undefined4 FUN_1425757b0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    if (0 < *(int *)(param_1 + 0xcc)) {
      uVar2 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  else if (0 < *(int *)(param_1 + 0x84)) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 142575800 FUN_142575800 body=1175 status=ok
// SIG undefined FUN_142575800(void)

void FUN_142575800(longlong *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double extraout_XMM0_Qa;
  
  uVar9 = *(uint *)(param_1 + 0x4d);
  if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar13 = param_2 + -0x1dbb18;
  switch(uVar9) {
  case 0:
    dVar14 = (double)FUN_1424d97b0((double)iVar13 / 29.530588853);
    dVar15 = (double)FUN_1424d97b0((double)(int)dVar14 * 29.530588853);
    dVar16 = (double)FUN_142575230(param_1[0x1c],param_3);
    if (0 < *param_3) {
      *param_3 = 7;
      return;
    }
    iVar2 = (uint)(0.0 < dVar16 && 0x18 < iVar13 - (int)dVar15) + (int)dVar14;
    do {
      iVar11 = iVar2;
      iVar3 = FUN_142574f80(dVar16,iVar11);
      dVar16 = extraout_XMM0_Qa;
      iVar2 = iVar11 + -1;
    } while (iVar13 < iVar3);
    iVar3 = iVar11 >> 0x1f;
    iVar2 = iVar11 / 0xc + iVar3;
    uVar7 = (ulonglong)((iVar2 - iVar3) + 1);
    iVar11 = iVar11 + (iVar2 - iVar3) * -0xc;
    goto LAB_142575a05;
  default:
    if (uVar9 == 3) {
      iVar13 = param_2 + -0x1dbb17;
    }
    break;
  case 2:
    if (0x24c139 < param_2) {
      iVar2 = 1;
      iVar11 = 0x37df;
      iVar3 = 0x70446;
      iVar12 = 0x3ce4;
      lVar1 = 0;
      do {
        lVar10 = lVar1;
        iVar6 = (int)lVar10;
        if (iVar2 < 1) {
          uVar9 = iVar6 + 0x513;
          iVar11 = 0;
          goto LAB_142575c51;
        }
        switch((int)param_1[0x4d]) {
        case 0:
          iVar4 = FUN_142574f80(&switchD_142575b08::switchdataD_1499f0eac,iVar12);
          break;
        case 2:
          if (0xfffffed2 < iVar6 - 0x12dU) goto switchD_142575b08_default;
        case 1:
        case 3:
          iVar4 = FUN_142500cd0(iVar11,0x1e);
          iVar4 = iVar4 + iVar3;
          break;
        default:
switchD_142575b08_default:
          iVar4 = (int)(char)(&DAT_1499f0ac0)[lVar10] +
                  (int)((double)iVar6 * 354.3672 + 460322.05 + 0.5);
        }
        uVar7 = lVar10 + 0x514;
        iVar2 = (iVar13 - iVar4) + 1;
        iVar5 = (**(code **)(*param_1 + 0x110))(param_1,uVar7 & 0xffffffff);
        if (iVar2 == iVar5) {
          uVar9 = iVar6 + 0x514;
          iVar11 = 0xb;
LAB_142575c51:
          uVar7 = (ulonglong)uVar9;
          goto LAB_142575a05;
        }
        iVar6 = (**(code **)(*param_1 + 0x110))(param_1,uVar7 & 0xffffffff);
        iVar11 = iVar11 + 0xb;
        iVar3 = iVar3 + 0x162;
        iVar12 = iVar12 + 0xc;
        lVar1 = lVar10 + 1;
      } while (iVar6 <= iVar2);
      iVar11 = 0;
      iVar3 = (**(code **)(*param_1 + 0x108))(param_1,lVar10 + 0x514U & 0xffffffff,0);
      if (iVar13 - iVar4 < iVar3) {
        iVar11 = 0;
      }
      else {
        do {
          iVar2 = iVar2 - iVar3;
          iVar11 = iVar11 + 1;
          iVar3 = (**(code **)(*param_1 + 0x108))(param_1,lVar10 + 0x514U & 0xffffffff,iVar11);
        } while (iVar3 < iVar2);
      }
      goto LAB_142575a05;
    }
    dVar16 = (double)FUN_1424d97b0((double)(iVar13 * 0x1e + 0x2996) / 10631.0);
    uVar7 = (ulonglong)(uint)(int)dVar16;
    param_2 = param_2 + -0x1dbb35;
    puVar8 = &switchD_142575960::switchdataD_1499f0ebc;
    switch((int)param_1[0x4d]) {
    case 0:
      goto switchD_1425758a1_caseD_0;
    case 1:
    case 3:
      goto switchD_1425758a1_caseD_1;
    case 2:
      goto switchD_1425758a1_caseD_2;
    default:
      goto switchD_1425758a1_default;
    }
  }
  uVar7 = FUN_142500cf0((longlong)iVar13 * 0x1e + 0x2996,0x2987);
  param_2 = iVar13 + -0x1d;
  puVar8 = &switchD_1425758a1::switchdataD_1499f0ecc;
  switch((int)param_1[0x4d]) {
  case 0:
switchD_1425758a1_caseD_0:
    iVar2 = FUN_142574f80(puVar8,(int)uVar7 * 0xc + -0xc);
    break;
  case 2:
switchD_1425758a1_caseD_2:
    if (0xfffffed2 < (int)uVar7 - 0x641U) goto switchD_1425758a1_default;
  case 1:
  case 3:
switchD_1425758a1_caseD_1:
    iVar2 = FUN_142500cd0((int)uVar7 * 0xb + 3,0x1e);
    iVar2 = iVar2 + (int)uVar7 * 0x162 + -0x162;
    break;
  default:
switchD_1425758a1_default:
    iVar2 = (int)(char)(&DAT_1499f05ac)[(int)uVar7] +
            (int)((double)((int)uVar7 + -0x514) * 354.3672 + 460322.05 + 0.5);
  }
  dVar16 = ceil((double)(param_2 - iVar2) / 29.5);
  iVar11 = 0xb;
  if ((int)dVar16 < 0xb) {
    iVar11 = (int)dVar16;
  }
  FUN_1425750f0(param_1,uVar7 & 0xffffffff,iVar11);
LAB_142575a05:
  iVar2 = FUN_1425750f0(param_1,uVar7 & 0xffffffff,iVar11);
  iVar3 = FUN_1425750f0(param_1,uVar7 & 0xffffffff,0);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_100000001;
  *(undefined2 *)((longlong)param_1 + 0x69) = 0x101;
  *(int *)(param_1 + 0xb) = (int)uVar7;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
  *(int *)((longlong)param_1 + 0x14) = iVar11;
  *(int *)(param_1 + 4) = (iVar13 + 1) - iVar2;
  *(undefined1 **)((longlong)param_1 + 0x94) = &DAT_100000001;
  *(undefined2 *)((longlong)param_1 + 0x6d) = 0x101;
  *(int *)((longlong)param_1 + 0x24) = (iVar13 + 1) - iVar3;
  return;
}



// FUNCTION 142575ca0 FUN_142575ca0 body=69 status=ok
// SIG undefined FUN_142575ca0(void)

bool FUN_142575ca0(longlong param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*param_2 < 1) {
    plVar2 = (longlong *)FUN_1424ce780();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((cVar1 != '\0') && (FUN_1424cd380(param_1,param_2), *param_2 < 1)) {
      return *(int *)(param_1 + 0x4c) != 0;
    }
  }
  return false;
}



// FUNCTION 142575cf0 FUN_142575cf0 body=3 status=ok
// SIG undefined FUN_142575cf0(void)

undefined1 FUN_142575cf0(void)

{
  return 1;
}



// FUNCTION 142575d00 FUN_142575d00 body=61 status=ok
// SIG undefined FUN_142575d00(void)

undefined8 FUN_142575d00(void)

{
  char cVar1;
  
  if (DAT_14c793734 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793734);
    if (cVar1 != '\0') {
      FUN_142575d40();
      FUN_1425019c0(&DAT_14c793734);
    }
  }
  return DAT_14c709698;
}



// FUNCTION 142575d40 FUN_142575d40 body=289 status=ok
// SIG undefined FUN_142575d40(void)

void FUN_142575d40(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined **local_368 [77];
  undefined4 local_100;
  undefined1 local_f8 [228];
  int local_14 [3];
  
  local_14[1] = -2;
  local_14[2] = -1;
  local_14[0] = 0;
  FUN_1412ae150(local_f8,"@calendar=islamic-civil",0,0,0);
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(local_368,uVar1,local_f8,local_14);
  local_368[0] = icu_64::IslamicCalendar::vftable;
  local_100 = 1;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_368,uVar2,local_14);
  FUN_1414b3f60(local_f8);
  if (local_14[0] < 1) {
    uVar2 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_368,uVar2,local_14);
    FUN_1424cf870(local_368,1,&DAT_ffffffb0,local_14);
    DAT_14c709698 = FUN_1424cd180(local_368,local_14);
    DAT_14c7096a0 = FUN_1424cd2e0(local_368,1,local_14);
  }
  FUN_1424cbfc0(local_368);
  return;
}



// FUNCTION 142575e70 Unwind@142575e70 body=33 status=ok
// SIG undefined Unwind@142575e70(void)

void Unwind_142575e70(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x30);
  return;
}



// FUNCTION 142575ea0 Unwind@142575ea0 body=33 status=ok
// SIG undefined Unwind@142575ea0(void)

void Unwind_142575ea0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x30);
  return;
}



// FUNCTION 142575ed0 Unwind@142575ed0 body=36 status=ok
// SIG undefined Unwind@142575ed0(void)

void Unwind_142575ed0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x2a0);
  return;
}



// FUNCTION 142575f00 FUN_142575f00 body=59 status=ok
// SIG undefined FUN_142575f00(void)

undefined4 FUN_142575f00(void)

{
  char cVar1;
  
  if (DAT_14c793734 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793734);
    if (cVar1 != '\0') {
      FUN_142575d40();
      FUN_1425019c0(&DAT_14c793734);
    }
  }
  return DAT_14c7096a0;
}



// FUNCTION 142575f40 FUN_142575f40 body=8 status=ok
// SIG undefined FUN_142575f40(void)

undefined * FUN_142575f40(void)

{
  return &DAT_14c793730;
}



// FUNCTION 142575f50 FUN_142575f50 body=38 status=ok
// SIG undefined FUN_142575f50(void)

undefined8 FUN_142575f50(undefined8 param_1,int param_2)

{
  FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142575f80 FUN_142575f80 body=8 status=ok
// SIG undefined FUN_142575f80(void)

undefined * FUN_142575f80(void)

{
  return &DAT_14c793740;
}



// FUNCTION 142575f90 FUN_142575f90 body=85 status=ok
// SIG undefined FUN_142575f90(void)

undefined8 *
FUN_142575f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1424a20e0();
  *param_1 = icu_64::JapaneseCalendar::vftable;
  FUN_142576020(param_3);
  uVar1 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar1,param_3,param_4,param_1,uVar2);
  return param_1;
}



// FUNCTION 142575ff0 Unwind@142575ff0 body=34 status=ok
// SIG undefined Unwind@142575ff0(void)

void Unwind_142575ff0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142576020 FUN_142576020 body=177 status=ok
// SIG undefined FUN_142576020(void)

void FUN_142576020(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*param_1 < 1) {
    if (DAT_14c793750 != 2) {
      cVar1 = FUN_142501800(&DAT_14c793750);
      if (cVar1 != '\0') {
        pcVar3 = getenv("ICU_ENABLE_TENTATIVE_ERA");
        if (pcVar3 == (char *)0x0) {
          bVar4 = false;
        }
        else {
          iVar2 = FUN_142503a40(pcVar3,&DAT_149dfbe6e);
          bVar4 = iVar2 == 0;
        }
        DAT_14c793748 = FUN_142632fc0("japanese",bVar4,param_1);
        DAT_14c793754 = *param_1;
        if (DAT_14c793754 < 1) {
          DAT_14c793744 = *(undefined4 *)(DAT_14c793748 + 0xc);
        }
        FUN_1425019c0(&DAT_14c793750);
        goto LAB_1425760bb;
      }
    }
    if (0 < DAT_14c793754) {
      *param_1 = DAT_14c793754;
    }
  }
LAB_1425760bb:
  FUN_14251f960(6,FUN_142576640);
  return;
}



// FUNCTION 1425760e0 FUN_1425760e0 body=93 status=ok
// SIG undefined FUN_1425760e0(void)

undefined8 * FUN_1425760e0(undefined8 param_1)

{
  undefined4 local_24;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (undefined8 *)thunk_FUN_1424da030(0x290);
  if (local_20 != (undefined8 *)0x0) {
    FUN_1424a21c0(local_20,param_1);
    *local_20 = icu_64::JapaneseCalendar::vftable;
    local_24 = 0;
    FUN_142576020(&local_24);
  }
  return local_20;
}



// FUNCTION 142576140 Unwind@142576140 body=32 status=ok
// SIG undefined Unwind@142576140(void)

void Unwind_142576140(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142576160 Unwind@142576160 body=32 status=ok
// SIG undefined Unwind@142576160(void)

void Unwind_142576160(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142576180 FUN_142576180 body=8 status=ok
// SIG undefined FUN_142576180(void)

char * FUN_142576180(void)

{
  return "japanese";
}



// FUNCTION 142576190 FUN_142576190 body=109 status=ok
// SIG undefined FUN_142576190(void)

void FUN_142576190(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 0x188))();
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  FUN_142633420(DAT_14c793748,uVar1,&local_28,&local_2c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 142576210 FUN_142576210 body=123 status=ok
// SIG undefined FUN_142576210(void)

void FUN_142576210(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 0x188))();
  local_28 = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_142633420(DAT_14c793748,uVar1,&local_30,&local_34);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425762a0 FUN_1425762a0 body=25 status=ok
// SIG undefined FUN_1425762a0(void)

undefined4 FUN_1425762a0(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x80) < 1) {
    puVar1 = &DAT_14c793744;
  }
  return *puVar1;
}



// FUNCTION 1425762c0 FUN_1425762c0 body=171 status=ok
// SIG undefined FUN_1425762c0(void)

void FUN_1425762c0(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if ((iVar1 != 0x13) || (iVar1 = FUN_1424d15c0(param_1,0x13,0), iVar1 != 0x13)) {
    local_1c = 0;
    puVar2 = (undefined4 *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x80) < 1) {
      puVar2 = &DAT_14c793744;
    }
    FUN_142633470(DAT_14c793748,*puVar2,&local_1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142576380 FUN_142576380 body=114 status=ok
// SIG undefined FUN_142576380(void)

void FUN_142576380(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1424a2340();
  iVar1 = *(int *)(param_1 + 0x58);
  uVar2 = FUN_1426334b0(DAT_14c793748,iVar1,*(int *)(param_1 + 0x14) + 1,
                        *(undefined4 *)(param_1 + 0x20),param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x68) = 1;
  iVar3 = FUN_142633470(DAT_14c793748,uVar2,param_3);
  *(int *)(param_1 + 0x10) = (iVar1 - iVar3) + 1;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}



// FUNCTION 142576400 FUN_142576400 body=3 status=ok
// SIG undefined FUN_142576400(void)

undefined8 FUN_142576400(void)

{
  return 0;
}



// FUNCTION 142576410 FUN_142576410 body=4 status=ok
// SIG undefined FUN_142576410(void)

undefined8 FUN_142576410(void)

{
  return 0;
}



// FUNCTION 142576420 FUN_142576420 body=3 status=ok
// SIG undefined FUN_142576420(void)

undefined8 FUN_142576420(void)

{
  return 0;
}



// FUNCTION 142576430 FUN_142576430 body=149 status=ok
// SIG undefined FUN_142576430(void)

void FUN_142576430(undefined8 param_1,int param_2,int param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 1) {
    if (param_3 - 3U < 2) {
      local_24 = 0;
      FUN_142633470(DAT_14c793748,DAT_14c793744,&local_24);
      FUN_1424a2dd0(param_1,1,3);
    }
  }
  else if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425764f0 FUN_1425764f0 body=216 status=ok
// SIG undefined FUN_1425764f0(void)

void FUN_1425764f0(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  iVar1 = FUN_1424cd2e0(param_1,0,param_3);
  if (*param_3 < 1) {
    if (iVar1 == DAT_14c793744) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    local_40 = 0;
    local_48 = 0;
    FUN_142633420(DAT_14c793748,iVar1 + 1,&local_48,param_3);
    FUN_142633470(DAT_14c793748,iVar1,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 142576610 FUN_142576610 body=38 status=ok
// SIG undefined FUN_142576610(void)

undefined8 FUN_142576610(undefined8 param_1,int param_2)

{
  thunk_FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142576640 FUN_142576640 body=70 status=ok
// SIG undefined FUN_142576640(void)

undefined8 FUN_142576640(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_14c793748;
  if (DAT_14c793748 != 0) {
    FUN_142632fb0(DAT_14c793748);
    FUN_1401773f0(lVar1);
    DAT_14c793748 = 0;
  }
  uVar2 = DAT_14c793750;
  DAT_14c793744 = 0;
  LOCK();
  DAT_14c793750 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 142576690 FUN_142576690 body=8 status=ok
// SIG undefined FUN_142576690(void)

undefined * FUN_142576690(void)

{
  return &DAT_14c793758;
}



// FUNCTION 1425766a0 FUN_1425766a0 body=77 status=ok
// SIG undefined FUN_1425766a0(void)

undefined8 *
FUN_1425766a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1424a20e0();
  *param_1 = icu_64::BuddhistCalendar::vftable;
  uVar1 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar1,param_3,param_4,param_1,uVar2);
  return param_1;
}



// FUNCTION 1425766f0 Unwind@1425766f0 body=34 status=ok
// SIG undefined Unwind@1425766f0(void)

void Unwind_1425766f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142576720 FUN_142576720 body=76 status=ok
// SIG undefined FUN_142576720(void)

undefined8 * FUN_142576720(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x290);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424a21c0(puVar1,param_1);
    *puVar1 = icu_64::BuddhistCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 142576770 Unwind@142576770 body=32 status=ok
// SIG undefined Unwind@142576770(void)

void Unwind_142576770(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142576790 FUN_142576790 body=8 status=ok
// SIG undefined FUN_142576790(void)

char * FUN_142576790(void)

{
  return "buddhist";
}



// FUNCTION 1425767a0 FUN_1425767a0 body=79 status=ok
// SIG undefined FUN_1425767a0(void)

int FUN_1425767a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    if (*(int *)(param_1 + 0xcc) < 1) {
      iVar1 = 0x7b2;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x58);
    }
  }
  else {
    iVar1 = 0x7b2;
    if (0 < *(int *)(param_1 + 0x84)) {
      iVar1 = *(int *)(param_1 + 0x10) + -0x21f;
    }
  }
  return iVar1;
}



// FUNCTION 1425767f0 thunk_FUN_1424a25f0 body=5 status=ok
// SIG undefined thunk_FUN_1424a25f0(void)

void thunk_FUN_1424a25f0(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_68 [44];
  uint uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_3c = param_3;
  if (0xb < param_3) {
    iVar3 = FUN_142500d40((double)(int)param_3,0xc,&uStack_3c);
    param_2 = param_2 + iVar3;
  }
  lVar1 = (longlong)param_2 + -1;
  FUN_142500cf0(lVar1,4);
  iVar3 = *(int *)(param_1 + 0x280);
  *(bool *)(param_1 + 0x288) = iVar3 <= param_2;
  bVar2 = iVar3 <= param_2;
  if (*(char *)(param_1 + 0x289) != '\0') {
    bVar2 = param_2 < iVar3;
    *(bool *)(param_1 + 0x288) = param_2 < iVar3;
  }
  if (bVar2) {
    FUN_142500cf0(lVar1,400);
    FUN_142500cf0(lVar1,100);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 142576800 FUN_142576800 body=60 status=ok
// SIG undefined FUN_142576800(void)

void FUN_142576800(longlong param_1)

{
  FUN_1424a2340();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 **)(param_1 + 0x80) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x68) = 0x101;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x58) + 0x21f;
  return;
}



// FUNCTION 142576840 FUN_142576840 body=11 status=ok
// SIG undefined FUN_142576840(void)

undefined4 FUN_142576840(undefined8 param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    return 0;
  }
  return *(undefined4 *)(&DAT_149938aa0 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 142576850 FUN_142576850 body=3 status=ok
// SIG undefined FUN_142576850(void)

undefined1 FUN_142576850(void)

{
  return 1;
}



// FUNCTION 142576860 FUN_142576860 body=61 status=ok
// SIG undefined FUN_142576860(void)

undefined8 FUN_142576860(void)

{
  char cVar1;
  
  if (DAT_14c79375c != 2) {
    cVar1 = FUN_142501800(&DAT_14c79375c);
    if (cVar1 != '\0') {
      FUN_1425768a0();
      FUN_1425019c0(&DAT_14c79375c);
    }
  }
  return DAT_14c709710;
}



// FUNCTION 1425768a0 FUN_1425768a0 body=306 status=ok
// SIG undefined FUN_1425768a0(void)

void FUN_1425768a0(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_3a8 [224];
  undefined **local_2c8 [82];
  int local_34 [9];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  FUN_1412ae150(local_3a8,"@calendar=buddhist",0,0,0);
  FUN_1424a20e0(local_2c8,local_3a8,local_34);
  local_2c8[0] = icu_64::BuddhistCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_2c8,uVar2,local_34);
  FUN_1414b3f60(local_3a8);
  if (local_34[0] < 1) {
    uVar2 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_2c8,uVar2,local_34);
    FUN_1424cf870(local_2c8,1,&DAT_ffffffb0,local_34);
    uVar1 = FUN_1424cd180(local_2c8,local_34);
    DAT_14c709718 = FUN_1424cd2e0(local_2c8,1,local_34);
    DAT_14c709710 = uVar1;
  }
  thunk_FUN_1424cbfc0(local_2c8);
  return;
}



// FUNCTION 1425769e0 Unwind@1425769e0 body=47 status=ok
// SIG undefined Unwind@1425769e0(void)

void Unwind_1425769e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(param_2 + 0x110);
  return;
}



// FUNCTION 142576a10 Unwind@142576a10 body=47 status=ok
// SIG undefined Unwind@142576a10(void)

void Unwind_142576a10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(param_2 + 0x110);
  return;
}



// FUNCTION 142576a40 Unwind@142576a40 body=44 status=ok
// SIG undefined Unwind@142576a40(void)

void Unwind_142576a40(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 142576a70 FUN_142576a70 body=59 status=ok
// SIG undefined FUN_142576a70(void)

undefined4 FUN_142576a70(void)

{
  char cVar1;
  
  if (DAT_14c79375c != 2) {
    cVar1 = FUN_142501800(&DAT_14c79375c);
    if (cVar1 != '\0') {
      FUN_1425768a0();
      FUN_1425019c0(&DAT_14c79375c);
    }
  }
  return DAT_14c709718;
}



// FUNCTION 142576ab0 FUN_142576ab0 body=38 status=ok
// SIG undefined FUN_142576ab0(void)

undefined8 FUN_142576ab0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142576ae0 FUN_142576ae0 body=8 status=ok
// SIG undefined FUN_142576ae0(void)

undefined * FUN_142576ae0(void)

{
  return &DAT_14c793764;
}



// FUNCTION 142576af0 FUN_142576af0 body=77 status=ok
// SIG undefined FUN_142576af0(void)

undefined8 *
FUN_142576af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1424a20e0();
  *param_1 = icu_64::TaiwanCalendar::vftable;
  uVar1 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar1,param_3,param_4,param_1,uVar2);
  return param_1;
}



// FUNCTION 142576b40 Unwind@142576b40 body=34 status=ok
// SIG undefined Unwind@142576b40(void)

void Unwind_142576b40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142576b70 FUN_142576b70 body=76 status=ok
// SIG undefined FUN_142576b70(void)

undefined8 * FUN_142576b70(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x290);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424a21c0(puVar1,param_1);
    *puVar1 = icu_64::TaiwanCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 142576bc0 Unwind@142576bc0 body=32 status=ok
// SIG undefined Unwind@142576bc0(void)

void Unwind_142576bc0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142576be0 FUN_142576be0 body=8 status=ok
// SIG undefined FUN_142576be0(void)

undefined * FUN_142576be0(void)

{
  return &DAT_14993d488;
}



// FUNCTION 142576bf0 FUN_142576bf0 body=148 status=ok
// SIG undefined FUN_142576bf0(void)

int FUN_142576bf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if ((iVar1 == 0x13) && (iVar1 = FUN_1424d15c0(param_1,0x13,0), iVar1 == 0x13)) {
    if (0 < *(int *)(param_1 + 0xcc)) {
      return *(int *)(param_1 + 0x58);
    }
    return 0x7b2;
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar3 = 0x778 - *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x84);
      iVar2 = 0x777;
      goto LAB_142576c74;
    }
    if (*(int *)(param_1 + 0xc) != 1) {
      return 0x7b2;
    }
  }
  iVar3 = *(int *)(param_1 + 0x10) + 0x777;
  iVar1 = *(int *)(param_1 + 0x84);
  iVar2 = 0x778;
LAB_142576c74:
  if (0 < iVar1) {
    iVar2 = iVar3;
  }
  return iVar2;
}



// FUNCTION 142576c90 FUN_142576c90 body=81 status=ok
// SIG undefined FUN_142576c90(void)

void FUN_142576c90(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1424a2340();
  iVar1 = *(int *)(param_1 + 0x58);
  iVar2 = iVar1 + -0x777;
  if (iVar1 < 0x778) {
    iVar2 = -(iVar1 + -0x778);
  }
  *(uint *)(param_1 + 0xc) = (uint)(0x777 < iVar1);
  *(undefined1 **)(param_1 + 0x80) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x68) = 0x101;
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 142576cf0 FUN_142576cf0 body=18 status=ok
// SIG undefined FUN_142576cf0(void)

uint FUN_142576cf0(undefined8 param_1,int param_2,uint param_3)

{
  if (param_2 == 0) {
    return (uint)(1 < param_3);
  }
  return *(uint *)(&DAT_149938aa0 + (longlong)(int)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 142576d10 FUN_142576d10 body=3 status=ok
// SIG undefined FUN_142576d10(void)

undefined1 FUN_142576d10(void)

{
  return 1;
}



// FUNCTION 142576d20 FUN_142576d20 body=61 status=ok
// SIG undefined FUN_142576d20(void)

undefined8 FUN_142576d20(void)

{
  char cVar1;
  
  if (DAT_14c793768 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793768);
    if (cVar1 != '\0') {
      FUN_142576d60();
      FUN_1425019c0(&DAT_14c793768);
    }
  }
  return DAT_14c709750;
}



// FUNCTION 142576d60 FUN_142576d60 body=290 status=ok
// SIG undefined FUN_142576d60(void)

void FUN_142576d60(void)

{
  undefined4 uVar1;
  undefined1 local_390 [224];
  undefined **local_2b0 [82];
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  local_1c[0] = 0;
  FUN_1412ae150(local_390,"@calendar=roc",0,0,0);
  FUN_1424a20e0(local_2b0,local_390,local_1c);
  local_2b0[0] = icu_64::TaiwanCalendar::vftable;
  uVar1 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_2b0,uVar1,local_1c);
  FUN_1414b3f60(local_390);
  if (local_1c[0] < 1) {
    uVar1 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_2b0,uVar1,local_1c);
    FUN_1424cf870(local_2b0,1,&DAT_ffffffb0,local_1c);
    DAT_14c709750 = FUN_1424cd180(local_2b0,local_1c);
    DAT_14c709758 = FUN_1424cd2e0(local_2b0,1,local_1c);
  }
  thunk_FUN_1424cbfc0(local_2b0);
  return;
}



// FUNCTION 142576e90 Unwind@142576e90 body=38 status=ok
// SIG undefined Unwind@142576e90(void)

void Unwind_142576e90(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(param_2 + 0x108);
  return;
}



// FUNCTION 142576ec0 Unwind@142576ec0 body=38 status=ok
// SIG undefined Unwind@142576ec0(void)

void Unwind_142576ec0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(param_2 + 0x108);
  return;
}



// FUNCTION 142576ef0 Unwind@142576ef0 body=35 status=ok
// SIG undefined Unwind@142576ef0(void)

void Unwind_142576ef0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 142576f20 FUN_142576f20 body=59 status=ok
// SIG undefined FUN_142576f20(void)

undefined4 FUN_142576f20(void)

{
  char cVar1;
  
  if (DAT_14c793768 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793768);
    if (cVar1 != '\0') {
      FUN_142576d60();
      FUN_1425019c0(&DAT_14c793768);
    }
  }
  return DAT_14c709758;
}



// FUNCTION 142576f60 FUN_142576f60 body=38 status=ok
// SIG undefined FUN_142576f60(void)

undefined8 FUN_142576f60(undefined8 param_1,int param_2)

{
  thunk_FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142576f90 FUN_142576f90 body=8 status=ok
// SIG undefined FUN_142576f90(void)

char * FUN_142576f90(void)

{
  return "persian";
}



// FUNCTION 142576fa0 FUN_142576fa0 body=76 status=ok
// SIG undefined FUN_142576fa0(void)

undefined8 * FUN_142576fa0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x268);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424cc000(puVar1,param_1);
    *puVar1 = icu_64::PersianCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 142576ff0 Unwind@142576ff0 body=32 status=ok
// SIG undefined Unwind@142576ff0(void)

void Unwind_142576ff0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142577010 FUN_142577010 body=99 status=ok
// SIG undefined FUN_142577010(void)

undefined8 * FUN_142577010(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(param_1,uVar1,param_2,param_3);
  *param_1 = icu_64::PersianCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 142577080 Unwind@142577080 body=36 status=ok
// SIG undefined Unwind@142577080(void)

void Unwind_142577080(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425770b0 FUN_1425770b0 body=24 status=ok
// SIG undefined FUN_1425770b0(void)

undefined4 FUN_1425770b0(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_1499f1580 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 1425770d0 FUN_1425770d0 body=131 status=ok
// SIG undefined FUN_1425770d0(void)

void FUN_1425770d0(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_38 [32];
  uint local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  if (0xb < param_3) {
    iVar1 = FUN_142500d40((double)(int)param_3,0xc,&local_18);
    param_2 = param_2 + iVar1;
  }
  FUN_142500d40((double)(param_2 * 0x19 + 0xb),0x21,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142577160 FUN_142577160 body=78 status=ok
// SIG undefined FUN_142577160(void)

void FUN_142577160(undefined8 param_1,int param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_142500d40((double)(param_2 * 0x19 + 0xb),0x21,local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1425771c0 FUN_1425771c0 body=126 status=ok
// SIG undefined FUN_1425771c0(void)

void FUN_1425771c0(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_3;
  if (0xb < param_3) {
    iVar1 = FUN_142500d40((double)(int)param_3,0xc,&local_1c);
    param_2 = iVar1 + param_2;
  }
  FUN_142500cd0(param_2 * 8 + 0x15,0x21);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142577250 FUN_142577250 body=70 status=ok
// SIG undefined FUN_142577250(void)

undefined4 FUN_142577250(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    if (0 < *(int *)(param_1 + 0xcc)) {
      uVar2 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  else if (0 < *(int *)(param_1 + 0x84)) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 1425772a0 FUN_1425772a0 body=258 status=ok
// SIG undefined FUN_1425772a0(void)

void FUN_1425772a0(longlong param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_142500cf0((longlong)param_2 * 0x21 + -0x3d50e9d,0x2f15);
  iVar3 = FUN_142500cd0(iVar2 * 8 + 0x1d,0x21);
  iVar3 = (param_2 - iVar3) + iVar2 * -0x16d;
  if (iVar3 + -0x1dbaa0 < 0xd8) {
    uVar4 = (iVar3 + -0x1dbaa0) / 0x1f;
  }
  else {
    uVar4 = (iVar3 - 0x1dbaa6U) / 0x1e;
  }
  sVar1 = *(short *)(&DAT_1499f1710 + (longlong)(int)uVar4 * 2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  *(undefined1 **)(param_1 + 0x84) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x69) = 0x101;
  *(int *)(param_1 + 0x58) = iVar2 + 1;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined1 *)(param_1 + 0x7b) = 1;
  *(uint *)(param_1 + 0x14) = uVar4;
  *(int *)(param_1 + 0x20) = (iVar3 + -0x1dba9f) - (int)sVar1;
  *(undefined1 **)(param_1 + 0x94) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x6d) = 0x101;
  *(int *)(param_1 + 0x24) = iVar3 + -0x1dba9f;
  return;
}



// FUNCTION 1425773b0 FUN_1425773b0 body=69 status=ok
// SIG undefined FUN_1425773b0(void)

bool FUN_1425773b0(longlong param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*param_2 < 1) {
    plVar2 = (longlong *)FUN_1424ce780();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((cVar1 != '\0') && (FUN_1424cd380(param_1,param_2), *param_2 < 1)) {
      return *(int *)(param_1 + 0x4c) != 0;
    }
  }
  return false;
}



// FUNCTION 142577400 FUN_142577400 body=3 status=ok
// SIG undefined FUN_142577400(void)

undefined1 FUN_142577400(void)

{
  return 1;
}



// FUNCTION 142577410 FUN_142577410 body=61 status=ok
// SIG undefined FUN_142577410(void)

undefined8 FUN_142577410(void)

{
  char cVar1;
  
  if (DAT_14c793774 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793774);
    if (cVar1 != '\0') {
      FUN_142577450();
      FUN_1425019c0(&DAT_14c793774);
    }
  }
  return DAT_14c709790;
}



// FUNCTION 142577450 FUN_142577450 body=279 status=ok
// SIG undefined FUN_142577450(void)

void FUN_142577450(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined **local_360 [77];
  undefined1 local_f8 [228];
  int local_14 [3];
  
  local_14[1] = -2;
  local_14[2] = -1;
  local_14[0] = 0;
  FUN_1412ae150(local_f8,"@calendar=persian",0,0,0);
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(local_360,uVar1,local_f8,local_14);
  local_360[0] = icu_64::PersianCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_360,uVar2,local_14);
  FUN_1414b3f60(local_f8);
  if (local_14[0] < 1) {
    uVar2 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_360,uVar2,local_14);
    FUN_1424cf870(local_360,1,&DAT_ffffffb0,local_14);
    DAT_14c709790 = FUN_1424cd180(local_360,local_14);
    DAT_14c709798 = FUN_1424cd2e0(local_360,1,local_14);
  }
  FUN_1424cbfc0(local_360);
  return;
}



// FUNCTION 142577570 Unwind@142577570 body=33 status=ok
// SIG undefined Unwind@142577570(void)

void Unwind_142577570(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x28);
  return;
}



// FUNCTION 1425775a0 Unwind@1425775a0 body=33 status=ok
// SIG undefined Unwind@1425775a0(void)

void Unwind_1425775a0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x28);
  return;
}



// FUNCTION 1425775d0 Unwind@1425775d0 body=36 status=ok
// SIG undefined Unwind@1425775d0(void)

void Unwind_1425775d0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x290);
  return;
}



// FUNCTION 142577600 FUN_142577600 body=59 status=ok
// SIG undefined FUN_142577600(void)

undefined4 FUN_142577600(void)

{
  char cVar1;
  
  if (DAT_14c793774 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793774);
    if (cVar1 != '\0') {
      FUN_142577450();
      FUN_1425019c0(&DAT_14c793774);
    }
  }
  return DAT_14c709798;
}



// FUNCTION 142577640 FUN_142577640 body=8 status=ok
// SIG undefined FUN_142577640(void)

undefined * FUN_142577640(void)

{
  return &DAT_14c793770;
}



// FUNCTION 142577650 FUN_142577650 body=38 status=ok
// SIG undefined FUN_142577650(void)

undefined8 FUN_142577650(undefined8 param_1,int param_2)

{
  FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142577680 FUN_142577680 body=99 status=ok
// SIG undefined FUN_142577680(void)

undefined8 * FUN_142577680(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(param_1,uVar1,param_2,param_3);
  *param_1 = icu_64::HebrewCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 1425776f0 Unwind@1425776f0 body=36 status=ok
// SIG undefined Unwind@1425776f0(void)

void Unwind_1425776f0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142577720 FUN_142577720 body=8 status=ok
// SIG undefined FUN_142577720(void)

char * FUN_142577720(void)

{
  return "hebrew";
}



// FUNCTION 142577730 FUN_142577730 body=76 status=ok
// SIG undefined FUN_142577730(void)

undefined8 * FUN_142577730(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x268);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424cc000(puVar1,param_1);
    *puVar1 = icu_64::HebrewCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 142577780 Unwind@142577780 body=32 status=ok
// SIG undefined Unwind@142577780(void)

void Unwind_142577780(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425777a0 FUN_1425777a0 body=600 status=ok
// SIG undefined FUN_1425777a0(void)

void FUN_1425777a0(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (0 < *param_4) {
    return;
  }
  if ((int)param_2 != 2) {
    FUN_1424cf870(param_1,param_2,param_3,param_4);
    return;
  }
  iVar2 = FUN_1424cd2e0(param_1,2,param_4);
  iVar3 = FUN_1424cd2e0(param_1,1,param_4);
  uVar4 = iVar2 + param_3;
  if (param_3 < 1) {
    if ((5 < iVar2) && ((int)uVar4 < 6)) {
      iVar5 = (iVar3 * 0xc + 0x11) % 0x13;
      iVar2 = 0xc;
      if (iVar5 < 0) {
        iVar2 = -7;
      }
      uVar4 = uVar4 - (iVar5 < iVar2);
    }
    if ((int)uVar4 < 0) {
      iVar2 = iVar3 * 0xc + 5;
      do {
        iVar3 = iVar3 + -1;
        uVar1 = uVar4 + 0xd;
        bVar7 = 0xfffffff8 < uVar4;
        uVar4 = uVar1;
        if (bVar7) break;
        iVar6 = iVar2 % 0x13;
        iVar5 = 0xc;
        if (iVar6 < 0) {
          iVar5 = -7;
        }
        iVar2 = iVar2 + -0xc;
        uVar4 = uVar1 - (iVar6 < iVar5);
      } while ((int)uVar4 < 0);
    }
  }
  else {
    if ((iVar2 < 5) && (4 < (int)uVar4)) {
      iVar5 = (iVar3 * 0xc + 0x11) % 0x13;
      iVar2 = 0xc;
      if (iVar5 < 0) {
        iVar2 = -7;
      }
      uVar4 = uVar4 + (iVar5 < iVar2);
    }
    if (0xc < (int)uVar4) {
      iVar2 = iVar3 * 0xc + 0x1d;
      do {
        iVar3 = iVar3 + 1;
        uVar1 = uVar4 - 0xd;
        bVar7 = uVar4 < 0x12;
        uVar4 = uVar1;
        if (bVar7) break;
        iVar5 = 0xc;
        if (iVar2 % 0x13 < 0) {
          iVar5 = -7;
        }
        uVar4 = uVar1 + (iVar2 % 0x13 < iVar5);
        iVar2 = iVar2 + 0xc;
      } while (0xc < uVar4);
    }
  }
  FUN_1424cd3f0(param_1,2,uVar4);
  FUN_1424cd3f0(param_1,1,iVar3);
                    /* WARNING: Could not recover jumptable at 0x00014257797a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
  return;
}



// FUNCTION 142577a00 FUN_142577a00 body=59 status=ok
// SIG undefined FUN_142577a00(void)

undefined4 FUN_142577a00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 * 0xc + 0x11) % 0x13;
  iVar2 = 0xc;
  if (iVar1 < 0) {
    iVar2 = -7;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar2 <= iVar1);
}



// FUNCTION 142577a40 FUN_142577a40 body=10 status=ok
// SIG undefined FUN_142577a40(void)

void FUN_142577a40(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142577a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 142577a50 FUN_142577a50 body=304 status=ok
// SIG undefined FUN_142577a50(void)

void FUN_142577a50(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < *param_4) {
    return;
  }
  if ((int)param_2 == 2) {
    iVar1 = FUN_1424cd2e0(param_1,2,param_4);
    iVar2 = FUN_1424cd2e0(param_1,1,param_4);
    iVar3 = (iVar2 * 0xc + 0x11) % 0x13;
    iVar2 = 0xc;
    if (iVar3 < 0) {
      iVar2 = -7;
    }
    iVar4 = param_3 % (int)(iVar3 < iVar2 ^ 0xd) + iVar1;
    if (iVar3 < iVar2) {
      if (((param_3 < 1) || (4 < iVar1)) || (iVar4 < 5)) {
        iVar4 = iVar4 - (uint)(iVar4 < 6 && (5 < iVar1 && param_3 < 0));
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    FUN_1424cd3f0(param_1,2,(iVar4 + 0xd) % 0xd);
                    /* WARNING: Could not recover jumptable at 0x000142577b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    return;
  }
  FUN_1424cec30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142577b80 FUN_142577b80 body=10 status=ok
// SIG undefined FUN_142577b80(void)

void FUN_142577b80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142577b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 142577b90 FUN_142577b90 body=453 status=ok
// SIG undefined FUN_142577b90(void)

int FUN_142577b90(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_14251f960(9,FUN_142577d60);
  iVar1 = FUN_142632900(&DAT_14c793780,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = (param_1 * 0xeb + -0xea) / 0x13;
    lVar5 = (longlong)iVar1 * 0x35b9 + 0x2f34;
    iVar1 = (int)(lVar5 / 0x6540) + iVar1 * 0x1d;
    lVar5 = lVar5 % 0x6540;
    uVar2 = iVar1 % 7;
    iVar6 = iVar1;
    if ((uVar2 < 7) && ((0x54U >> (uVar2 & 0x1f) & 1) != 0)) {
      iVar6 = iVar1 + 1;
      iVar3 = (int)((ulonglong)((longlong)iVar6 * -0x6db6db6d) >> 0x20) + iVar1 + 1;
      uVar2 = ((iVar3 >> 2) - (iVar3 >> 0x1f)) * -7 + iVar1 + 1;
    }
    iVar1 = iVar6;
    if ((lVar5 < 0x4015) || (uVar2 != 1)) {
      if ((0x5ae5 < lVar5) && (uVar2 == 0)) {
        iVar3 = (param_1 * 0xc + 5) % 0x13;
        iVar1 = 0xc;
        if (iVar3 < 0) {
          iVar1 = -7;
        }
        iVar1 = iVar6 + (uint)(iVar1 <= iVar3);
      }
    }
    else {
      iVar4 = (param_1 * 0xc + 0x11) % 0x13;
      iVar3 = 0xc;
      if (iVar4 < 0) {
        iVar3 = -7;
      }
      iVar1 = iVar6 + 2;
      if (iVar3 <= iVar4) {
        iVar1 = iVar6;
      }
    }
    FUN_142632b40(&DAT_14c793780,param_1,iVar1,param_2);
  }
  return iVar1;
}



// FUNCTION 142577d60 FUN_142577d60 body=44 status=ok
// SIG undefined FUN_142577d60(void)

undefined8 FUN_142577d60(void)

{
  if (DAT_14c793780 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c793780)(DAT_14c793780,1);
  }
  DAT_14c793780 = (undefined8 *)0x0;
  return 1;
}



// FUNCTION 142577d90 FUN_142577d90 body=24 status=ok
// SIG undefined FUN_142577d90(void)

undefined4 FUN_142577d90(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_1499f1940 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 142577db0 FUN_142577db0 body=301 status=ok
// SIG undefined FUN_142577db0(void)

int FUN_142577db0(longlong *param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  
  if ((int)param_3 < 0) {
    iVar1 = (int)param_2 * 0xc + 5;
    do {
      param_2 = (ulonglong)((int)param_2 - 1);
      iVar5 = iVar1 % 0x13;
      iVar2 = 0xc;
      if (iVar5 < 0) {
        iVar2 = -7;
      }
      iVar1 = iVar1 + -0xc;
      param_3 = param_3 + (iVar5 < iVar2 ^ 0xd);
    } while ((int)param_3 < 0);
  }
  else if (0xc < param_3) {
    iVar1 = (int)param_2 * 0xc + 0x11;
    do {
      param_2 = (ulonglong)((int)param_2 + 1);
      iVar2 = 0xc;
      if (iVar1 % 0x13 < 0) {
        iVar2 = -7;
      }
      param_3 = (param_3 + (iVar1 % 0x13 < iVar2)) - 0xd;
      iVar1 = iVar1 + 0xc;
    } while (0xc < param_3);
  }
  if (param_3 - 1 < 2) {
    iVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2);
    iVar1 = iVar2 + -0x1e;
    if (iVar2 < 0x17d) {
      iVar1 = iVar2;
    }
    uVar4 = 1;
    if (iVar1 - 0x161U < 3) {
      uVar4 = (ulonglong)(iVar1 - 0x161U);
    }
    puVar3 = &DAT_1499f1ab0 + uVar4;
  }
  else {
    puVar3 = &DAT_1499f1ab0;
  }
  return (int)(char)puVar3[(ulonglong)param_3 * 3];
}



// FUNCTION 142577ee0 FUN_142577ee0 body=75 status=ok
// SIG undefined FUN_142577ee0(void)

void FUN_142577ee0(undefined8 param_1,int param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_142577b90(param_2 + 1,&local_24);
  FUN_142577b90(param_2,&local_24);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142577f40 FUN_142577f40 body=129 status=ok
// SIG undefined FUN_142577f40(void)

void FUN_142577f40(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 2) {
    iVar1 = (**(code **)(*param_1 + 0x118))(param_1);
    iVar2 = (iVar1 * 0xc + 0x11) % 0x13;
    iVar1 = 0xc;
    if (iVar2 < 0) {
      iVar1 = -7;
    }
    if ((iVar2 < iVar1) && (*(int *)((longlong)param_1 + 0x14) == 5)) {
      *param_3 = 1;
      return;
    }
  }
  FUN_1424d14d0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142577fd0 FUN_142577fd0 body=771 status=ok
// SIG undefined FUN_142577fd0(void)

void FUN_142577fd0(longlong *param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  
  param_2 = param_2 + -0x54f5d;
  iVar5 = (int)(((((double)param_2 * 25920.0) / 765433.0) * 19.0 + 234.0) / 235.0 + 1.0);
  while( true ) {
    iVar2 = FUN_142577b90(iVar5,param_3);
    iVar9 = param_2 - iVar2;
    if (iVar9 != 0 && iVar2 <= param_2) break;
    iVar5 = iVar5 + -1;
  }
  iVar3 = (**(code **)(*param_1 + 0x110))(param_1,iVar5);
  iVar2 = iVar3 + -0x1e;
  if (iVar3 < 0x17d) {
    iVar2 = iVar3;
  }
  uVar4 = 1;
  if (iVar2 - 0x161U < 3) {
    uVar4 = (ulonglong)(iVar2 - 0x161U);
  }
  iVar3 = (iVar5 * 0xc + 0x11) % 0x13;
  iVar2 = 0xc;
  if (iVar3 < 0) {
    iVar2 = -7;
  }
  puVar6 = &DAT_1499f1ae0;
  puVar7 = &DAT_1499f1ae0;
  if (iVar3 < iVar2) {
    puVar7 = &DAT_1499f1b40;
  }
  if (*(short *)(puVar7 + uVar4 * 2) < iVar9) {
    puVar7 = &DAT_1499f1ae0;
    if (iVar3 < iVar2) {
      puVar7 = &DAT_1499f1b40;
    }
    lVar8 = 0;
    if (*(short *)(puVar7 + uVar4 * 2 + 6) < iVar9) {
      puVar7 = &DAT_1499f1ae0;
      if (iVar3 < iVar2) {
        puVar7 = &DAT_1499f1b40;
      }
      lVar8 = 1;
      if (*(short *)(puVar7 + uVar4 * 2 + 0xc) < iVar9) {
        puVar7 = &DAT_1499f1ae0;
        if (iVar3 < iVar2) {
          puVar7 = &DAT_1499f1b40;
        }
        lVar8 = 2;
        if (*(short *)(puVar7 + uVar4 * 2 + 0x12) < iVar9) {
          puVar7 = &DAT_1499f1ae0;
          if (iVar3 < iVar2) {
            puVar7 = &DAT_1499f1b40;
          }
          lVar8 = 3;
          if (*(short *)(puVar7 + uVar4 * 2 + 0x18) < iVar9) {
            puVar7 = &DAT_1499f1ae0;
            if (iVar3 < iVar2) {
              puVar7 = &DAT_1499f1b40;
            }
            lVar8 = 4;
            if (*(short *)(puVar7 + uVar4 * 2 + 0x1e) < iVar9) {
              puVar7 = &DAT_1499f1ae0;
              if (iVar3 < iVar2) {
                puVar7 = &DAT_1499f1b40;
              }
              lVar8 = 5;
              if (*(short *)(puVar7 + uVar4 * 2 + 0x24) < iVar9) {
                puVar7 = &DAT_1499f1ae0;
                if (iVar3 < iVar2) {
                  puVar7 = &DAT_1499f1b40;
                }
                lVar8 = 6;
                if (*(short *)(puVar7 + uVar4 * 2 + 0x2a) < iVar9) {
                  puVar7 = &DAT_1499f1ae0;
                  if (iVar3 < iVar2) {
                    puVar7 = &DAT_1499f1b40;
                  }
                  lVar8 = 7;
                  if (*(short *)(puVar7 + uVar4 * 2 + 0x30) < iVar9) {
                    puVar7 = &DAT_1499f1ae0;
                    if (iVar3 < iVar2) {
                      puVar7 = &DAT_1499f1b40;
                    }
                    lVar8 = 8;
                    if (*(short *)(puVar7 + uVar4 * 2 + 0x36) < iVar9) {
                      puVar7 = &DAT_1499f1ae0;
                      if (iVar3 < iVar2) {
                        puVar7 = &DAT_1499f1b40;
                      }
                      lVar8 = 9;
                      if (*(short *)(puVar7 + uVar4 * 2 + 0x3c) < iVar9) {
                        puVar7 = &DAT_1499f1ae0;
                        if (iVar3 < iVar2) {
                          puVar7 = &DAT_1499f1b40;
                        }
                        lVar8 = 10;
                        if (*(short *)(puVar7 + uVar4 * 2 + 0x42) < iVar9) {
                          puVar7 = &DAT_1499f1ae0;
                          if (iVar3 < iVar2) {
                            puVar7 = &DAT_1499f1b40;
                          }
                          lVar8 = 0xb;
                          if (*(short *)(puVar7 + uVar4 * 2 + 0x48) < iVar9) {
                            puVar7 = &DAT_1499f1ae0;
                            if (iVar3 < iVar2) {
                              puVar7 = &DAT_1499f1b40;
                            }
                            lVar8 = 0xc;
                            if (*(short *)(puVar7 + uVar4 * 2 + 0x4e) < iVar9) goto LAB_14257824d;
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
    if (iVar3 < iVar2) {
      puVar6 = &DAT_1499f1b40;
    }
    sVar1 = *(short *)(puVar6 + uVar4 * 2 + lVar8 * 6);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(int *)(param_1 + 2) = iVar5;
    *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_100000001;
    *(undefined2 *)((longlong)param_1 + 0x69) = 0x101;
    *(int *)(param_1 + 0xb) = iVar5;
    *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
    *(int *)((longlong)param_1 + 0x14) = (int)lVar8;
    *(int *)(param_1 + 4) = iVar9 - sVar1;
    *(undefined1 **)((longlong)param_1 + 0x94) = &DAT_100000001;
    *(undefined2 *)((longlong)param_1 + 0x6d) = 0x101;
    *(int *)((longlong)param_1 + 0x24) = iVar9;
  }
  else {
LAB_14257824d:
    *param_3 = 1;
  }
  return;
}



// FUNCTION 1425782e0 FUN_1425782e0 body=70 status=ok
// SIG undefined FUN_1425782e0(void)

undefined4 FUN_1425782e0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    if (0 < *(int *)(param_1 + 0xcc)) {
      uVar2 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  else if (0 < *(int *)(param_1 + 0x84)) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 142578330 FUN_142578330 body=440 status=ok
// SIG undefined FUN_142578330(void)

void FUN_142578330(longlong *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0;
  if ((int)param_3 < 0) {
    iVar1 = param_2 * 0xc + 5;
    do {
      param_2 = param_2 + -1;
      iVar3 = iVar1 % 0x13;
      iVar2 = 0xc;
      if (iVar3 < 0) {
        iVar2 = -7;
      }
      iVar1 = iVar1 + -0xc;
      param_3 = param_3 + (iVar3 < iVar2 ^ 0xd);
    } while ((int)param_3 < 0);
  }
  else if (0xc < param_3) {
    iVar1 = param_2 * 0xc + 0x11;
    do {
      param_2 = param_2 + 1;
      iVar2 = 0xc;
      if (iVar1 % 0x13 < 0) {
        iVar2 = -7;
      }
      param_3 = (param_3 + (iVar1 % 0x13 < iVar2)) - 0xd;
      iVar1 = iVar1 + 0xc;
    } while (0xc < param_3);
  }
  FUN_142577b90(param_2,&local_3c);
  if ((local_3c < 1) && (param_3 != 0)) {
    (**(code **)(*param_1 + 0x110))(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 142578500 FUN_142578500 body=69 status=ok
// SIG undefined FUN_142578500(void)

bool FUN_142578500(longlong param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*param_2 < 1) {
    plVar2 = (longlong *)FUN_1424ce780();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((cVar1 != '\0') && (FUN_1424cd380(param_1,param_2), *param_2 < 1)) {
      return *(int *)(param_1 + 0x4c) != 0;
    }
  }
  return false;
}



// FUNCTION 142578550 FUN_142578550 body=3 status=ok
// SIG undefined FUN_142578550(void)

undefined1 FUN_142578550(void)

{
  return 1;
}



// FUNCTION 142578560 FUN_142578560 body=61 status=ok
// SIG undefined FUN_142578560(void)

undefined8 FUN_142578560(void)

{
  char cVar1;
  
  if (DAT_14c79378c != 2) {
    cVar1 = FUN_142501800(&DAT_14c79378c);
    if (cVar1 != '\0') {
      FUN_1425785a0();
      FUN_1425019c0(&DAT_14c79378c);
    }
  }
  return DAT_14c7097d0;
}



// FUNCTION 1425785a0 FUN_1425785a0 body=288 status=ok
// SIG undefined FUN_1425785a0(void)

void FUN_1425785a0(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined **local_360 [77];
  undefined1 local_f8 [228];
  int local_14 [3];
  
  local_14[1] = -2;
  local_14[2] = -1;
  local_14[0] = 0;
  FUN_1412ae150(local_f8,"@calendar=hebrew",0,0,0);
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(local_360,uVar1,local_f8,local_14);
  local_360[0] = icu_64::HebrewCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_360,uVar2,local_14);
  FUN_1414b3f60(local_f8);
  if (local_14[0] < 1) {
    uVar2 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_360,uVar2,local_14);
    if (local_14[0] < 1) {
      FUN_1424cf870(local_360,1,&DAT_ffffffb0,local_14);
    }
    DAT_14c7097d0 = FUN_1424cd180(local_360,local_14);
    DAT_14c7097d8 = FUN_1424cd2e0(local_360,1,local_14);
  }
  FUN_1424cbfc0(local_360);
  return;
}



// FUNCTION 1425786c0 Unwind@1425786c0 body=33 status=ok
// SIG undefined Unwind@1425786c0(void)

void Unwind_1425786c0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x28);
  return;
}



// FUNCTION 1425786f0 Unwind@1425786f0 body=33 status=ok
// SIG undefined Unwind@1425786f0(void)

void Unwind_1425786f0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x28);
  return;
}



// FUNCTION 142578720 Unwind@142578720 body=36 status=ok
// SIG undefined Unwind@142578720(void)

void Unwind_142578720(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x290);
  return;
}



// FUNCTION 142578750 FUN_142578750 body=59 status=ok
// SIG undefined FUN_142578750(void)

undefined4 FUN_142578750(void)

{
  char cVar1;
  
  if (DAT_14c79378c != 2) {
    cVar1 = FUN_142501800(&DAT_14c79378c);
    if (cVar1 != '\0') {
      FUN_1425785a0();
      FUN_1425019c0(&DAT_14c79378c);
    }
  }
  return DAT_14c7097d8;
}



// FUNCTION 142578790 FUN_142578790 body=8 status=ok
// SIG undefined FUN_142578790(void)

undefined * FUN_142578790(void)

{
  return &DAT_14c793788;
}



// FUNCTION 1425787a0 FUN_1425787a0 body=38 status=ok
// SIG undefined FUN_1425787a0(void)

undefined8 FUN_1425787a0(undefined8 param_1,int param_2)

{
  FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425787d0 FUN_1425787d0 body=112 status=ok
// SIG undefined FUN_1425787d0(void)

void FUN_1425787d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x278);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424cc000(puVar1,param_1);
    *puVar1 = icu_64::ChineseCalendar::vftable;
    *(undefined1 *)(puVar1 + 0x4d) = *(undefined1 *)(param_1 + 0x268);
    *(undefined4 *)((longlong)puVar1 + 0x26c) = *(undefined4 *)(param_1 + 0x26c);
    puVar1[0x4e] = *(undefined8 *)(param_1 + 0x270);
  }
  return;
}



// FUNCTION 142578840 Unwind@142578840 body=32 status=ok
// SIG undefined Unwind@142578840(void)

void Unwind_142578840(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142578860 FUN_142578860 body=76 status=ok
// SIG undefined FUN_142578860(void)

undefined8 * FUN_142578860(undefined8 *param_1,longlong param_2)

{
  FUN_1424cc000();
  *param_1 = icu_64::ChineseCalendar::vftable;
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x268);
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  param_1[0x4e] = *(undefined8 *)(param_2 + 0x270);
  return param_1;
}



// FUNCTION 1425788b0 FUN_1425788b0 body=132 status=ok
// SIG undefined FUN_1425788b0(void)

undefined8 * FUN_1425788b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(param_1,uVar1,param_2,param_3);
  *param_1 = icu_64::ChineseCalendar::vftable;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0xfffff5b4;
  uVar1 = FUN_142578970();
  param_1[0x4e] = uVar1;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 142578940 Unwind@142578940 body=36 status=ok
// SIG undefined Unwind@142578940(void)

void Unwind_142578940(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142578970 FUN_142578970 body=186 status=ok
// SIG undefined FUN_142578970(void)

longlong FUN_142578970(void)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_60 [64];
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_14c7937bc != 2) {
    cVar1 = FUN_142501800(&DAT_14c7937bc);
    if (cVar1 != '\0') {
      lVar2 = thunk_FUN_1424da030(0xa0);
      if (lVar2 == 0) {
        DAT_14c793798 = 0;
      }
      else {
        local_20 = lVar2;
        FUN_1424a7060(local_60,1,L"CHINA_ZONE",0xffffffff);
        lVar2 = local_20;
        FUN_14251fa10(local_20,28800000,local_60);
        DAT_14c793798 = lVar2;
        FUN_140859a90(local_60);
      }
      FUN_14251f960(8,FUN_142579340);
      FUN_1425019c0(&DAT_14c7937bc);
    }
  }
  return DAT_14c793798;
}



// FUNCTION 142578a30 Unwind@142578a30 body=32 status=ok
// SIG undefined Unwind@142578a30(void)

void Unwind_142578a30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142578a50 Unwind@142578a50 body=32 status=ok
// SIG undefined Unwind@142578a50(void)

void Unwind_142578a50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 142578a70 FUN_142578a70 body=136 status=ok
// SIG undefined FUN_142578a70(void)

undefined8 *
FUN_142578a70(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(param_1,uVar1,param_2,param_5);
  *param_1 = icu_64::ChineseCalendar::vftable;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = param_3;
  param_1[0x4e] = param_4;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar2,param_5);
  return param_1;
}



// FUNCTION 142578b00 Unwind@142578b00 body=44 status=ok
// SIG undefined Unwind@142578b00(void)

void Unwind_142578b00(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142578b30 thunk_FUN_1424cbfc0 body=5 status=ok
// SIG undefined thunk_FUN_1424cbfc0(void)

void thunk_FUN_1424cbfc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Calendar::vftable;
  puVar1 = (undefined8 *)param_1[0x1e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142578b40 FUN_142578b40 body=8 status=ok
// SIG undefined FUN_142578b40(void)

char * FUN_142578b40(void)

{
  return "chinese";
}



// FUNCTION 142578b50 FUN_142578b50 body=24 status=ok
// SIG undefined FUN_142578b50(void)

undefined4 FUN_142578b50(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_1499f1dd0 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 142578b70 FUN_142578b70 body=110 status=ok
// SIG undefined FUN_142578b70(void)

int FUN_142578b70(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = FUN_1424ce0f0(param_1,0,1,0);
  if (*(int *)(param_1 + 0xcc) < iVar1) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      iVar2 = *(int *)(param_1 + 0xc) * 0x3c + -0x3c;
    }
    iVar1 = -0xa4b;
    if (0 < *(int *)(param_1 + 0x84)) {
      iVar1 = *(int *)(param_1 + 0x10) + -0xa4c;
    }
    iVar2 = (iVar1 + iVar2) - *(int *)(param_1 + 0x26c);
  }
  else if (0 < *(int *)(param_1 + 0xcc)) {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  return iVar2;
}



// FUNCTION 142578be0 FUN_142578be0 body=62 status=ok
// SIG undefined FUN_142578be0(void)

int FUN_142578be0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x100))();
  iVar2 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar1 + -0x253d72),1);
  return (iVar2 - iVar1) + 0x253d8b;
}



// FUNCTION 142578c20 FUN_142578c20 body=44 status=ok
// SIG undefined FUN_142578c20(void)

void FUN_142578c20(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x1b8))
            (param_1,param_2 + -0x253d8c,(int)param_1[0x23],
             *(undefined4 *)((longlong)param_1 + 0x11c),1);
  return;
}



// FUNCTION 142578c50 FUN_142578c50 body=8 status=ok
// SIG undefined FUN_142578c50(void)

undefined * FUN_142578c50(void)

{
  return &DAT_1499f1f40;
}



// FUNCTION 142578c60 FUN_142578c60 body=349 status=ok
// SIG undefined FUN_142578c60(void)

void FUN_142578c60(longlong *param_1,int param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0xb < param_3) {
    local_50 = (double)(int)param_3;
    dVar5 = (double)FUN_142500d90(local_50,0x4028000000000000,&local_50);
    param_2 = (int)dVar5 + param_2;
    param_3 = (uint)local_50;
  }
  iVar2 = (**(code **)(*param_1 + 0x1c0))
                    (param_1,param_2 + *(int *)((longlong)param_1 + 0x26c) + -1);
  iVar3 = (**(code **)(*param_1 + 400))(param_1,(double)(int)(param_3 * 0x1d + iVar2),1);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  iVar2 = *(int *)((longlong)param_1 + 100);
  local_50 = (double)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1424cea70(param_1,iVar3 + 0x253d8c,&local_50);
  if (local_50._0_4_ < 1) {
    iVar4 = 0;
    if (param_4 != '\0') {
      iVar4 = iVar2;
    }
    local_58 = 0;
    (**(code **)(*param_1 + 0x1b8))
              (param_1,iVar3,(int)param_1[0x23],*(undefined4 *)((longlong)param_1 + 0x11c));
    if ((param_3 != *(uint *)((longlong)param_1 + 0x14)) ||
       (iVar4 != *(int *)((longlong)param_1 + 100))) {
      (**(code **)(*param_1 + 400))(param_1,(double)(iVar3 + 0x19),1);
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x11) = 1;
    *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
    *(int *)((longlong)param_1 + 100) = iVar2;
    *(undefined4 *)(param_1 + 0x1b) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 142578de0 FUN_142578de0 body=140 status=ok
// SIG undefined FUN_142578de0(void)

void FUN_142578de0(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)param_2 != 2) {
    FUN_1424cf870(param_1,param_2,param_3,param_4);
    return;
  }
  if (param_3 != 0) {
    iVar1 = FUN_1424cd2e0(param_1,5,param_4);
    if (*param_4 < 1) {
      iVar2 = FUN_1424cd2e0(param_1,0x14,param_4);
      if (*param_4 < 1) {
                    /* WARNING: Could not recover jumptable at 0x000142578e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c8))(param_1,(iVar2 - iVar1) + -0x253d8b,iVar1,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142578e70 FUN_142578e70 body=10 status=ok
// SIG undefined FUN_142578e70(void)

void FUN_142578e70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142578e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 142578e80 FUN_142578e80 body=360 status=ok
// SIG undefined FUN_142578e80(void)

void FUN_142578e80(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if ((int)param_2 != 2) {
    FUN_1424cec30(param_1,param_2,param_3,param_4);
    return;
  }
  if ((((param_3 != 0) && (iVar2 = FUN_1424cd2e0(param_1,5,param_4), *param_4 < 1)) &&
      (iVar3 = FUN_1424cd2e0(param_1,0x14,param_4), *param_4 < 1)) &&
     (iVar4 = FUN_1424cd2e0(param_1,2,param_4), *param_4 < 1)) {
    iVar3 = (iVar3 - iVar2) + -0x253d8b;
    if ((char)param_1[0x4d] == '\0') {
      uVar7 = 0xc;
    }
    else {
      iVar5 = FUN_1424cd2e0(param_1,0x16,param_4);
      uVar7 = 1;
      if (iVar5 != 1) {
        uVar6 = (**(code **)(*param_1 + 400))
                          (param_1,(double)(iVar3 - (int)(((double)iVar4 + -0.5) * 29.530588853)),1)
        ;
        cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,uVar6,iVar3);
        uVar7 = (uint)(cVar1 != '\0');
      }
      if (0 < *param_4) {
        return;
      }
      iVar4 = iVar4 + uVar7;
      uVar7 = 0xd - ((char)param_1[0x4d] == '\0');
    }
    iVar5 = (param_3 + iVar4) % (int)uVar7;
    if ((iVar5 >> 0x1f & uVar7) + iVar5 != iVar4) {
                    /* WARNING: Could not recover jumptable at 0x000142578fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,iVar3,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142578ff0 FUN_142578ff0 body=10 status=ok
// SIG undefined FUN_142578ff0(void)

void FUN_142578ff0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142578ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 142579000 FUN_142579000 body=775 status=ok
// SIG undefined FUN_142579000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_142579000(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [9];
  
  local_44[1] = -2;
  local_44[2] = -1;
  local_48 = 0;
  iVar3 = FUN_142632900(&DAT_14c7937a0,param_2,&local_48);
  if (iVar3 != 0) goto LAB_14257920b;
  dVar6 = (double)FUN_142500e20(param_2 & 0xffffffff,0xb,1);
  dVar6 = dVar6 * 86400000.0;
  plVar1 = *(longlong **)(param_1 + 0x270);
  if (plVar1 == (longlong *)0x0) {
LAB_14257909a:
    dVar6 = dVar6 + -28800000.0;
  }
  else {
    local_44[0] = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,dVar6,0,&local_50,&local_4c,local_44);
    if (0 < local_44[0]) goto LAB_14257909a;
    dVar6 = dVar6 - (double)(local_4c + local_50);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793818) {
    FUN_144b3d300(&DAT_14c793818);
    if (DAT_14c793818 == -1) {
      _DAT_14c793808 = 0;
      uRam000000014c793810 = 0;
      _DAT_14c7937f8 = 0;
      uRam000000014c793800 = 0;
      _DAT_14c7937e8 = 0;
      uRam000000014c7937f0 = 0;
      _DAT_14c7937d8 = 0;
      uRam000000014c7937e0 = 0;
      _DAT_14c7937c8 = 0;
      uRam000000014c7937d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7937c8,2);
      atexit((_func_5014 *)&LAB_14257a250);
      _Init_thread_footer(&DAT_14c793818);
    }
  }
  FUN_142501320(&DAT_14c7937c8);
  if (DAT_14c7937a8 == 0) {
    lVar5 = thunk_FUN_1424da030(0x88);
    if (lVar5 != 0) {
      FUN_142631cd0(lVar5);
    }
    DAT_14c7937a8 = lVar5;
    FUN_14251f960(8,FUN_142579340);
  }
  FUN_142631d60(DAT_14c7937a8,dVar6);
  lVar5 = DAT_14c7937a8;
  uVar2 = FUN_142632180();
  dVar6 = (double)FUN_142632190(lVar5,uVar2,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793818) {
    FUN_144b3d300(&DAT_14c793818);
    if (DAT_14c793818 == -1) {
      _DAT_14c793808 = 0;
      uRam000000014c793810 = 0;
      _DAT_14c7937f8 = 0;
      uRam000000014c793800 = 0;
      _DAT_14c7937e8 = 0;
      uRam000000014c7937f0 = 0;
      _DAT_14c7937d8 = 0;
      uRam000000014c7937e0 = 0;
      _DAT_14c7937c8 = 0;
      uRam000000014c7937d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7937c8,2);
      atexit((_func_5014 *)&LAB_14257a250);
      _Init_thread_footer(&DAT_14c793818);
    }
  }
  FUN_142501400(&DAT_14c7937c8);
  plVar1 = *(longlong **)(param_1 + 0x270);
  if (plVar1 == (longlong *)0x0) {
LAB_1425791c6:
    dVar6 = dVar6 + 28800000.0;
  }
  else {
    local_44[0] = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,dVar6,0,&local_50,&local_4c,local_44);
    if (0 < local_44[0]) goto LAB_1425791c6;
    dVar6 = dVar6 + (double)(local_4c + local_50);
  }
  dVar6 = (double)FUN_1424d97b0(SUB84(dVar6 / 86400000.0,0));
  iVar3 = (int)dVar6;
  FUN_142632b40(&DAT_14c7937a0,param_2 & 0xffffffff,iVar3,&local_48);
LAB_14257920b:
  iVar4 = 0;
  if (local_48 < 1) {
    iVar4 = iVar3;
  }
  return iVar4;
}



// FUNCTION 142579310 Unwind@142579310 body=46 status=ok
// SIG undefined Unwind@142579310(void)

void Unwind_142579310(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142579340 FUN_142579340 body=159 status=ok
// SIG undefined FUN_142579340(void)

undefined8 FUN_142579340(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_14c7937a8;
  if (DAT_14c7937a8 != 0) {
    FUN_142631d50(DAT_14c7937a8);
    FUN_1401773f0(lVar1);
    DAT_14c7937a8 = 0;
  }
  if (DAT_14c7937a0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c7937a0)(DAT_14c7937a0,1);
    DAT_14c7937a0 = (undefined8 *)0x0;
  }
  if (DAT_14c7937b0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c7937b0)(DAT_14c7937b0,1);
    DAT_14c7937b0 = (undefined8 *)0x0;
  }
  if (DAT_14c793798 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c793798)(DAT_14c793798,1);
    DAT_14c793798 = (undefined8 *)0x0;
  }
  uVar2 = DAT_14c7937bc;
  LOCK();
  DAT_14c7937bc = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 1425793e0 FUN_1425793e0 body=707 status=ok
// SIG undefined FUN_1425793e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1425793e0(longlong param_1,double param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  int local_50 [2];
  int local_48;
  int local_44 [7];
  
  local_44[1] = -2;
  local_44[2] = -1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793818) {
    FUN_144b3d300(&DAT_14c793818);
    if (DAT_14c793818 == -1) {
      _DAT_14c793808 = 0;
      uRam000000014c793810 = 0;
      _DAT_14c7937f8 = 0;
      uRam000000014c793800 = 0;
      _DAT_14c7937e8 = 0;
      uRam000000014c7937f0 = 0;
      _DAT_14c7937d8 = 0;
      uRam000000014c7937e0 = 0;
      _DAT_14c7937c8 = 0;
      uRam000000014c7937d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7937c8,2);
      atexit((_func_5014 *)&LAB_14257a250);
      _Init_thread_footer(&DAT_14c793818);
    }
  }
  FUN_142501320(&DAT_14c7937c8);
  if (DAT_14c7937a8 == 0) {
    lVar2 = thunk_FUN_1424da030(0x88);
    if (lVar2 != 0) {
      FUN_142631cd0(lVar2);
    }
    DAT_14c7937a8 = lVar2;
    FUN_14251f960(8,FUN_142579340);
  }
  lVar2 = DAT_14c7937a8;
  param_2 = param_2 * 86400000.0;
  plVar1 = *(longlong **)(param_1 + 0x270);
  if (plVar1 == (longlong *)0x0) {
LAB_1425794c5:
    param_2 = param_2 + -28800000.0;
  }
  else {
    local_44[0] = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0,local_50,&local_48,local_44);
    if (0 < local_44[0]) goto LAB_1425794c5;
    param_2 = param_2 - (double)(local_48 + local_50[0]);
  }
  FUN_142631d60(lVar2,param_2);
  lVar2 = DAT_14c7937a8;
  FUN_1426328a0(local_50);
  dVar3 = (double)FUN_1426328b0(lVar2,local_50,param_3);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793818) {
    FUN_144b3d300(&DAT_14c793818);
    if (DAT_14c793818 == -1) {
      _DAT_14c793808 = 0;
      uRam000000014c793810 = 0;
      _DAT_14c7937f8 = 0;
      uRam000000014c793800 = 0;
      _DAT_14c7937e8 = 0;
      uRam000000014c7937f0 = 0;
      _DAT_14c7937d8 = 0;
      uRam000000014c7937e0 = 0;
      _DAT_14c7937c8 = 0;
      uRam000000014c7937d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7937c8,2);
      atexit((_func_5014 *)&LAB_14257a250);
      _Init_thread_footer(&DAT_14c793818);
    }
  }
  FUN_142501400(&DAT_14c7937c8);
  plVar1 = *(longlong **)(param_1 + 0x270);
  if (plVar1 != (longlong *)0x0) {
    local_44[0] = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,dVar3,0,local_50,&local_48,local_44);
    if (local_44[0] < 1) {
      dVar3 = dVar3 + (double)(local_48 + local_50[0]);
      goto LAB_142579599;
    }
  }
  dVar3 = dVar3 + 28800000.0;
LAB_142579599:
  dVar3 = (double)FUN_1424d97b0(SUB84(dVar3 / 86400000.0,0));
  return (int)dVar3;
}



// FUNCTION 1425796b0 Unwind@1425796b0 body=50 status=ok
// SIG undefined Unwind@1425796b0(void)

void Unwind_1425796b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425796f0 FUN_1425796f0 body=46 status=ok
// SIG undefined FUN_1425796f0(void)

int FUN_1425796f0(undefined8 param_1,int param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)(param_3 - param_2) / 29.530588853;
  return (int)(dVar1 + *(double *)(&DAT_1499f23d0 + (ulonglong)(0.0 <= dVar1) * 8));
}



// FUNCTION 142579720 FUN_142579720 body=638 status=ok
// SIG undefined FUN_142579720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_142579720(longlong param_1,int param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int local_58;
  int local_54;
  longlong local_50;
  int local_44 [9];
  
  local_44[1] = -2;
  local_44[2] = -1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793818) {
    FUN_144b3d300(&DAT_14c793818);
    if (DAT_14c793818 == -1) {
      _DAT_14c793808 = 0;
      uRam000000014c793810 = 0;
      _DAT_14c7937f8 = 0;
      uRam000000014c793800 = 0;
      _DAT_14c7937e8 = 0;
      uRam000000014c7937f0 = 0;
      _DAT_14c7937d8 = 0;
      uRam000000014c7937e0 = 0;
      _DAT_14c7937c8 = 0;
      uRam000000014c7937d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7937c8,2);
      atexit((_func_5014 *)&LAB_14257a250);
      _Init_thread_footer(&DAT_14c793818);
    }
  }
  FUN_142501320(&DAT_14c7937c8);
  if (DAT_14c7937a8 == 0) {
    local_50 = thunk_FUN_1424da030(0x88);
    if (local_50 != 0) {
      FUN_142631cd0(local_50);
    }
    DAT_14c7937a8 = local_50;
    FUN_14251f960(8,FUN_142579340);
  }
  lVar4 = DAT_14c7937a8;
  dVar2 = (double)param_2 * 86400000.0;
  plVar1 = *(longlong **)(param_1 + 0x270);
  if (plVar1 != (longlong *)0x0) {
    local_44[0] = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,dVar2,0,&local_58,&local_54,local_44);
    if (local_44[0] < 1) {
      dVar2 = dVar2 - (double)(local_54 + local_58);
      goto LAB_142579820;
    }
  }
  dVar2 = dVar2 + -28800000.0;
LAB_142579820:
  FUN_142631d60(lVar4,dVar2);
  dVar2 = (double)FUN_142631f80(DAT_14c7937a8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793818) {
    FUN_144b3d300(&DAT_14c793818);
    if (DAT_14c793818 == -1) {
      _DAT_14c793808 = 0;
      uRam000000014c793810 = 0;
      _DAT_14c7937f8 = 0;
      uRam000000014c793800 = 0;
      _DAT_14c7937e8 = 0;
      uRam000000014c7937f0 = 0;
      _DAT_14c7937d8 = 0;
      uRam000000014c7937e0 = 0;
      _DAT_14c7937c8 = 0;
      uRam000000014c7937d0 = 0;
      _Mtx_init_in_situ(&DAT_14c7937c8,2);
      atexit((_func_5014 *)&LAB_14257a250);
      _Init_thread_footer(&DAT_14c793818);
    }
  }
  FUN_142501400(&DAT_14c7937c8);
  iVar5 = (int)((dVar2 * 6.0) / 3.141592653589793) + 2;
  iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
  iVar3 = iVar5 + 0xc;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// FUNCTION 1425799a0 Unwind@1425799a0 body=45 status=ok
// SIG undefined Unwind@1425799a0(void)

void Unwind_1425799a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425799d0 FUN_1425799d0 body=73 status=ok
// SIG undefined FUN_1425799d0(void)

bool FUN_1425799d0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x1a0))();
  uVar2 = (**(code **)(*param_1 + 400))(param_1,(double)(param_2 + 0x19),1);
  iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,uVar2);
  return iVar1 == iVar3;
}



// FUNCTION 142579a20 FUN_142579a20 body=96 status=ok
// SIG undefined FUN_142579a20(void)

bool FUN_142579a20(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_3 < param_2) {
    bVar3 = false;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 400))(param_1,(double)(param_3 + -0x19),0);
    cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,param_2,uVar2);
    bVar3 = true;
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
      bVar3 = cVar1 != '\0';
    }
  }
  return bVar3;
}



// FUNCTION 142579a80 FUN_142579a80 body=641 status=ok
// SIG undefined FUN_142579a80(void)

void FUN_142579a80(longlong *param_1,uint param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_88 [44];
  int local_5c;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = param_4;
  iVar2 = (**(code **)(*param_1 + 0x188))(param_1,param_3);
  if ((int)param_2 < iVar2) {
    iVar3 = (**(code **)(*param_1 + 0x188))(param_1,param_3 + -1);
    iVar9 = iVar2;
  }
  else {
    iVar9 = (**(code **)(*param_1 + 0x188))(param_1,param_3 + 1);
    iVar3 = iVar2;
  }
  uVar4 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar3 + 1),1);
  uVar8 = 0;
  uVar5 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar9 + 1),0);
  iVar9 = param_2 + 1;
  local_58 = (ulonglong)param_2;
  iVar2 = (**(code **)(*param_1 + 400))(param_1,(double)iVar9,0);
  iVar3 = (**(code **)(*param_1 + 0x198))(param_1,uVar4,uVar5);
  *(bool *)(param_1 + 0x4d) = iVar3 == 0xc;
  iVar3 = (**(code **)(*param_1 + 0x198))(param_1,uVar4,iVar2);
  if ((char)param_1[0x4d] == '\0') {
    iVar7 = iVar3 + 0xc;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,uVar4,iVar2);
    iVar3 = iVar3 + -1 + (uint)(cVar1 == '\0');
    iVar7 = iVar3 + 0xc;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if ((char)param_1[0x4d] != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,iVar2);
      if (cVar1 != '\0') {
        uVar5 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar2 + -0x19),0);
        cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,uVar4,uVar5);
        uVar8 = (uint)(cVar1 == '\0');
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar7 + -1;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  *(uint *)((longlong)param_1 + 100) = uVar8;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
  if (param_5 != '\0') {
    bVar6 = 5 < local_5c || iVar7 < 0xb;
    *(uint *)(param_1 + 0xb) = ((uint)bVar6 + param_3) - *(int *)((longlong)param_1 + 0x26c);
    *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
    iVar3 = FUN_142500d40((double)(int)((uint)bVar6 + param_3 + 0xa4b),0x3c,&local_4c);
    *(int *)((longlong)param_1 + 0xc) = iVar3 + 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(int *)(param_1 + 2) = local_4c + 1;
    *(undefined4 *)((longlong)param_1 + 0x84) = 1;
    *(undefined1 *)((longlong)param_1 + 0x69) = 1;
    *(int *)(param_1 + 4) = iVar9 - iVar2;
    *(undefined4 *)((longlong)param_1 + 0x94) = 1;
    *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
    iVar2 = (**(code **)(*param_1 + 0x1c0))(param_1,param_3);
    if ((int)local_58 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x1c0))(param_1,param_3 + -1);
    }
    *(int *)((longlong)param_1 + 0x24) = iVar9 - iVar2;
    *(undefined4 *)(param_1 + 0x13) = 1;
    *(undefined1 *)((longlong)param_1 + 0x6e) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142579d20 FUN_142579d20 body=307 status=ok
// SIG undefined FUN_142579d20(void)

void FUN_142579d20(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  iVar2 = FUN_142632900(&DAT_14c7937b0,param_2,&local_34);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x188))(param_1,(int)param_2 + -1);
    iVar3 = (**(code **)(*param_1 + 0x188))(param_1,param_2 & 0xffffffff);
    iVar2 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar2 + 1),1);
    iVar4 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar2 + 0x19),1);
    uVar5 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar3 + 1),0);
    iVar3 = (**(code **)(*param_1 + 0x198))(param_1,iVar2,uVar5);
    if ((iVar3 == 0xc) &&
       ((cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,iVar2), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,iVar4), cVar1 != '\0')))) {
      iVar4 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar4 + 0x19),1);
    }
    FUN_142632b40(&DAT_14c7937b0,param_2 & 0xffffffff,iVar4,&local_34);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 142579e60 FUN_142579e60 body=205 status=ok
// SIG undefined FUN_142579e60(void)

void FUN_142579e60(longlong *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  dVar3 = ((double)param_4 + -0.5) * 29.530588853;
  iVar1 = (**(code **)(*param_1 + 400))(dVar3,(double)((int)dVar3 + param_2),1);
  if (0x1d < param_3) {
    FUN_1424cd3f0(param_1,0x14,param_3 + iVar1 + 0x253d8a);
    FUN_1424cd380(param_1,&local_24);
    if (local_24 < 1) {
      iVar2 = (**(code **)(*param_1 + 0xa8))(param_1,5,&local_24);
      if ((param_3 <= iVar2) && (local_24 < 1)) {
        FUN_1424cd3f0(param_1,0x14,param_3 + iVar1 + 0x253d8b);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142579f50 FUN_142579f50 body=69 status=ok
// SIG undefined FUN_142579f50(void)

bool FUN_142579f50(longlong param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*param_2 < 1) {
    plVar2 = (longlong *)FUN_1424ce780();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((cVar1 != '\0') && (FUN_1424cd380(param_1,param_2), *param_2 < 1)) {
      return *(int *)(param_1 + 0x4c) != 0;
    }
  }
  return false;
}



// FUNCTION 142579fa0 FUN_142579fa0 body=3 status=ok
// SIG undefined FUN_142579fa0(void)

undefined1 FUN_142579fa0(void)

{
  return 1;
}



// FUNCTION 142579fb0 FUN_142579fb0 body=61 status=ok
// SIG undefined FUN_142579fb0(void)

undefined8 FUN_142579fb0(void)

{
  char cVar1;
  
  if (DAT_14c79381c != 2) {
    cVar1 = FUN_142501800(&DAT_14c79381c);
    if (cVar1 != '\0') {
      FUN_14257a030();
      FUN_1425019c0(&DAT_14c79381c);
    }
  }
  return DAT_14c709810;
}



// FUNCTION 142579ff0 FUN_142579ff0 body=59 status=ok
// SIG undefined FUN_142579ff0(void)

undefined4 FUN_142579ff0(void)

{
  char cVar1;
  
  if (DAT_14c79381c != 2) {
    cVar1 = FUN_142501800(&DAT_14c79381c);
    if (cVar1 != '\0') {
      FUN_14257a030();
      FUN_1425019c0(&DAT_14c79381c);
    }
  }
  return DAT_14c709818;
}



// FUNCTION 14257a030 FUN_14257a030 body=323 status=ok
// SIG undefined FUN_14257a030(void)

void FUN_14257a030(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_370 [224];
  undefined **local_290 [77];
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  int local_14 [3];
  
  local_14[1] = -2;
  local_14[2] = -1;
  local_14[0] = 0;
  FUN_1412ae150(local_370,"@calendar=chinese",0,0,0);
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(local_290,uVar1,local_370,local_14);
  local_290[0] = icu_64::ChineseCalendar::vftable;
  local_28 = 0;
  local_24 = 0xfffff5b4;
  local_20 = FUN_142578970();
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_290,uVar2,local_14);
  FUN_1414b3f60(local_370);
  if (local_14[0] < 1) {
    uVar2 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_290,uVar2,local_14);
    FUN_1424cf870(local_290,1,&DAT_ffffffb0,local_14);
    DAT_14c709810 = FUN_1424cd180(local_290,local_14);
    DAT_14c709818 = FUN_1424cd2e0(local_290,1,local_14);
  }
  FUN_1424cbfc0(local_290);
  return;
}



// FUNCTION 14257a180 Unwind@14257a180 body=36 status=ok
// SIG undefined Unwind@14257a180(void)

void Unwind_14257a180(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x108);
  return;
}



// FUNCTION 14257a1b0 Unwind@14257a1b0 body=36 status=ok
// SIG undefined Unwind@14257a1b0(void)

void Unwind_14257a1b0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x108);
  return;
}



// FUNCTION 14257a1e0 Unwind@14257a1e0 body=33 status=ok
// SIG undefined Unwind@14257a1e0(void)

void Unwind_14257a1e0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 14257a210 FUN_14257a210 body=8 status=ok
// SIG undefined FUN_14257a210(void)

undefined * FUN_14257a210(void)

{
  return &DAT_14c7937b8;
}



// FUNCTION 14257a220 FUN_14257a220 body=38 status=ok
// SIG undefined FUN_14257a220(void)

undefined8 FUN_14257a220(undefined8 param_1,int param_2)

{
  FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257a260 FUN_14257a260 body=76 status=ok
// SIG undefined FUN_14257a260(void)

undefined8 * FUN_14257a260(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x268);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424cc000(puVar1,param_1);
    *puVar1 = icu_64::IndianCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 14257a2b0 Unwind@14257a2b0 body=32 status=ok
// SIG undefined Unwind@14257a2b0(void)

void Unwind_14257a2b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14257a2d0 FUN_14257a2d0 body=99 status=ok
// SIG undefined FUN_14257a2d0(void)

undefined8 * FUN_14257a2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(param_1,uVar1,param_2,param_3);
  *param_1 = icu_64::IndianCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 14257a340 Unwind@14257a340 body=36 status=ok
// SIG undefined Unwind@14257a340(void)

void Unwind_14257a340(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14257a370 FUN_14257a370 body=8 status=ok
// SIG undefined FUN_14257a370(void)

char * FUN_14257a370(void)

{
  return "indian";
}



// FUNCTION 14257a380 FUN_14257a380 body=24 status=ok
// SIG undefined FUN_14257a380(void)

undefined4 FUN_14257a380(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_1499f2660 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 14257a3a0 FUN_14257a3a0 body=146 status=ok
// SIG undefined FUN_14257a3a0(void)

void FUN_14257a3a0(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_38 [36];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_3;
  if (0xb < param_3) {
    iVar1 = FUN_142500d40((double)(int)param_3,0xc,&local_14);
    param_2 = param_2 + iVar1;
  }
  uVar3 = param_2 + 0x4e;
  if ((uVar3 & 3) == 0) {
    uVar2 = uVar3 * -0x3d70a3d7 + 0x51eb850;
    bVar4 = true;
    if ((uVar2 >> 2 | uVar3 * 0x40000000) < 0x28f5c29) {
      bVar4 = (uVar2 >> 4 | uVar3 * -0x70000000) < 0xa3d70b;
    }
  }
  else {
    bVar4 = false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38,local_14 == 0 & bVar4);
}



// FUNCTION 14257a440 FUN_14257a440 body=76 status=ok
// SIG undefined FUN_14257a440(void)

undefined8 FUN_14257a440(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x4e;
  if (((uVar2 & 3) != 0) ||
     ((uVar1 = 0x16e, (uVar2 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar2 * 0x40000000) < 0x28f5c29 &&
      (uVar2 != ((int)uVar2 / 400) * 400)))) {
    uVar1 = 0x16d;
  }
  return uVar1;
}



// FUNCTION 14257a490 FUN_14257a490 body=626 status=ok
// SIG undefined FUN_14257a490(void)

void FUN_14257a490(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_98 [36];
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = param_3;
  if (0xb < param_3) {
    iVar1 = FUN_142500d40((double)(int)param_3,0xc,&local_74);
    param_2 = iVar1 + param_2;
  }
  iVar1 = 1;
  if (local_74 != 0xc) {
    iVar1 = local_74 + 1;
  }
  uVar3 = param_2 + 0x4e;
  if (((uVar3 & 3) == 0) &&
     ((0x28f5c28 < (uVar3 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar3 * 0x40000000) ||
      (uVar3 == ((int)uVar3 / 400) * 400)))) {
    iVar2 = param_2 + 0x4d;
    iVar4 = param_2 + 0x50;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    dVar5 = (double)FUN_1424d97b0((double)(iVar4 >> 2));
    dVar6 = (double)FUN_1424d97b0((double)(iVar2 / 100));
    dVar7 = (double)FUN_1424d97b0((double)(iVar2 / 400));
    dVar10 = 31.0;
  }
  else {
    iVar2 = param_2 + 0x4d;
    iVar4 = param_2 + 0x50;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    dVar5 = (double)FUN_1424d97b0((double)(iVar4 >> 2));
    dVar6 = (double)FUN_1424d97b0((double)(iVar2 / 100));
    dVar7 = (double)FUN_1424d97b0((double)(iVar2 / 400));
    if ((uVar3 & 3) == 0) {
      dVar10 = 30.0;
      uVar9 = 0x4054800000000000;
      if ((0x28f5c28 < (uVar3 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar3 * 0x40000000)) ||
         (uVar3 == ((int)uVar3 / 400) * 400)) goto LAB_14257a66d;
    }
    dVar10 = 30.0;
  }
  uVar9 = 0x4054400000000000;
LAB_14257a66d:
  dVar8 = (double)FUN_1424d97b0(uVar9);
  dVar8 = dVar8 + (((double)((param_2 + 0x4d) * 0x16d) + 1721424.5 + dVar5) - dVar6) + dVar7;
  if (iVar1 != 1) {
    iVar4 = 7;
    if (iVar1 < 7) {
      iVar4 = iVar1;
    }
    if (iVar1 < 8) {
      dVar5 = -0.0;
    }
    else {
      dVar5 = (double)(iVar1 * 0x1e + -0xd2);
    }
    dVar8 = dVar5 + (double)(iVar4 * 0x1f + -0x3e) + dVar10 + dVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar8);
}



// FUNCTION 14257a730 FUN_14257a730 body=70 status=ok
// SIG undefined FUN_14257a730(void)

undefined4 FUN_14257a730(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    if (0 < *(int *)(param_1 + 0xcc)) {
      uVar2 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  else if (0 < *(int *)(param_1 + 0x84)) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 14257a780 FUN_14257a780 body=1532 status=ok
// SIG undefined FUN_14257a780(void)

void FUN_14257a780(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  
  dVar10 = (double)FUN_1424d97b0((double)param_2 + -0.5);
  dVar10 = dVar10 + 0.5;
  dVar11 = (double)FUN_1424d97b0((dVar10 + -1721425.5) / 146097.0);
  dVar12 = (double)FUN_1424d97b0(dVar10 + -1721425.5);
  dVar13 = (double)FUN_1424d97b0((double)((int)dVar12 % 0x23ab1) / 36524.0);
  dVar12 = (double)FUN_1424d97b0((double)((int)dVar12 % 0x23ab1));
  dVar14 = (double)FUN_1424d97b0((double)((int)dVar12 % 0x8eac) / 1461.0);
  dVar12 = (double)FUN_1424d97b0((double)((int)dVar12 % 0x8eac));
  dVar12 = (double)FUN_1424d97b0((double)((int)dVar12 % 0x5b5) / 365.0);
  uVar6 = (int)(dVar14 * 4.0 + dVar11 * 400.0 + dVar13 * 100.0 + dVar12) +
          (uint)(dVar12 != 4.0 && dVar13 != 4.0);
  uVar9 = uVar6 - 1;
  uVar1 = uVar6 + 2;
  if (-1 < (int)uVar9) {
    uVar1 = uVar9;
  }
  dVar14 = (double)((int)uVar1 >> 2);
  dVar15 = (double)FUN_1424d97b0(dVar14);
  dVar11 = (double)((int)uVar9 / 100);
  dVar16 = (double)FUN_1424d97b0(dVar11);
  dVar13 = (double)((int)uVar9 / 400);
  dVar17 = (double)FUN_1424d97b0(dVar13);
  dVar12 = (double)(int)(uVar9 * 0x16d) + 1721424.5;
  dVar18 = (double)FUN_1424d97b0(0x3ff0000000000000);
  dVar19 = (double)FUN_1424d97b0(dVar14);
  dVar20 = (double)FUN_1424d97b0(dVar11);
  dVar21 = (double)FUN_1424d97b0(dVar13);
  if (((uVar6 & 3) != 0) ||
     ((uVar22 = 0x404e800000000000,
      (uVar6 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar6 * 0x40000000) < 0x28f5c29 &&
      (uVar6 != ((int)uVar6 / 400) * 400)))) {
    uVar22 = 0x404e000000000000;
  }
  dVar23 = (double)FUN_1424d97b0(uVar22);
  dVar24 = 0.0;
  if (dVar23 + dVar21 + ((dVar19 + dVar12) - dVar20) <= dVar10) {
    if ((uVar6 & 3) == 0) {
      if ((uVar6 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar6 * 0x40000000) < 0x28f5c29) {
        dVar24 = 1.0;
        if (uVar6 != ((int)uVar6 / 400) * 400) goto LAB_14257aadb;
      }
      else {
        dVar24 = 1.0;
      }
    }
    else {
LAB_14257aadb:
      dVar24 = 2.0;
    }
  }
  dVar10 = (double)FUN_1424d97b0((((dVar10 - (dVar18 + dVar17 + ((dVar15 + dVar12) - dVar16))) +
                                  dVar24) * 12.0 + 373.0) / 367.0);
  FUN_14257ad80(uVar6,(int)dVar10,1);
  dVar10 = (double)FUN_1424d97b0(dVar14);
  dVar11 = (double)FUN_1424d97b0(dVar11);
  dVar13 = (double)FUN_1424d97b0(dVar13);
  dVar14 = (double)FUN_1424d97b0(0x3ff0000000000000);
  iVar2 = (int)((double)param_2 - (dVar14 + ((dVar10 + dVar12) - dVar11) + dVar13));
  if (iVar2 < 0x50) {
    if (((uVar9 & 3) != 0) ||
       ((iVar4 = 0x1f, uVar6 + ((int)uVar9 / 100) * -100 == 1 &&
        (((int)uVar9 / 400) * -400 + uVar6 != 1)))) {
      iVar4 = 0x1e;
    }
    iVar7 = uVar6 - 0x4f;
    iVar5 = iVar4 + 0xff;
  }
  else {
    iVar7 = uVar6 - 0x4e;
    if ((uVar6 & 3) == 0) {
      iVar4 = 0x1f;
      iVar5 = -0x50;
      if ((0x28f5c28 < (uVar6 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar6 * 0x40000000)) ||
         (uVar6 == ((int)uVar6 / 400) * 400)) goto LAB_14257ac1d;
    }
    iVar4 = 0x1e;
    iVar5 = -0x50;
  }
LAB_14257ac1d:
  iVar5 = iVar5 + iVar2;
  iVar3 = 0;
  iVar8 = iVar5 - iVar4;
  iVar2 = iVar5;
  if (iVar4 <= iVar5) {
    if (iVar8 < 0x9b) {
      dVar10 = (double)FUN_1424d97b0((double)(iVar8 / 0x1f));
      iVar3 = (int)dVar10 + 1;
      iVar2 = iVar8 % 0x1f;
    }
    else {
      uVar9 = (iVar8 - 0x9bU) / 0x1e;
      dVar10 = (double)FUN_1424d97b0((double)uVar9);
      iVar3 = (int)dVar10 + 6;
      iVar2 = ((iVar8 - 0x9bU) / 0x1e) * 2 + uVar9 * -0x20 + iVar8 + -0x9b;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(int *)(param_1 + 0x58) = iVar7;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined1 *)(param_1 + 0x7b) = 1;
  *(int *)(param_1 + 0x10) = iVar7;
  *(undefined1 **)(param_1 + 0x84) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x69) = 0x101;
  *(int *)(param_1 + 0x14) = iVar3;
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  *(undefined1 **)(param_1 + 0x94) = &DAT_100000001;
  *(undefined2 *)(param_1 + 0x6d) = 0x101;
  *(int *)(param_1 + 0x24) = iVar5 + 1;
  return;
}



// FUNCTION 14257ad80 FUN_14257ad80 body=242 status=ok
// SIG undefined FUN_14257ad80(void)

void FUN_14257ad80(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 - 1;
  iVar1 = param_1 + 2;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  FUN_1424d97b0((double)(iVar1 >> 2));
  FUN_1424d97b0((double)(iVar2 / 100));
  FUN_1424d97b0((double)(iVar2 / 400));
  iVar1 = 0;
  if (2 < param_2) {
    if ((param_1 & 3) == 0) {
      iVar1 = -1;
      if ((0x28f5c28 < (param_1 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_1 * 0x40000000)) ||
         (param_1 == ((int)param_1 / 400) * 400)) goto LAB_14257ae33;
    }
    iVar1 = -2;
  }
LAB_14257ae33:
  FUN_1424d97b0((double)(param_3 + iVar1 + (param_2 * 0x16f + -0x16a) / 0xc));
  return;
}



// FUNCTION 14257ae80 FUN_14257ae80 body=69 status=ok
// SIG undefined FUN_14257ae80(void)

bool FUN_14257ae80(longlong param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*param_2 < 1) {
    plVar2 = (longlong *)FUN_1424ce780();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((cVar1 != '\0') && (FUN_1424cd380(param_1,param_2), *param_2 < 1)) {
      return *(int *)(param_1 + 0x4c) != 0;
    }
  }
  return false;
}



// FUNCTION 14257aed0 FUN_14257aed0 body=3 status=ok
// SIG undefined FUN_14257aed0(void)

undefined1 FUN_14257aed0(void)

{
  return 1;
}



// FUNCTION 14257aee0 FUN_14257aee0 body=61 status=ok
// SIG undefined FUN_14257aee0(void)

undefined8 FUN_14257aee0(void)

{
  char cVar1;
  
  if (DAT_14c793828 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793828);
    if (cVar1 != '\0') {
      FUN_14257af20();
      FUN_1425019c0(&DAT_14c793828);
    }
  }
  return DAT_14c709850;
}



// FUNCTION 14257af20 FUN_14257af20 body=295 status=ok
// SIG undefined FUN_14257af20(void)

void FUN_14257af20(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined **local_370 [77];
  undefined1 local_108 [228];
  int local_24 [7];
  
  local_24[1] = -2;
  local_24[2] = -1;
  local_24[0] = 0;
  FUN_1412ae150(local_108,"@calendar=Indian",0,0,0);
  uVar1 = FUN_1424b77f0();
  FUN_1424cbd70(local_370,uVar1,local_108,local_24);
  local_370[0] = icu_64::IndianCalendar::vftable;
  uVar2 = thunk_FUN_1424d9690();
  FUN_1424ccf20(local_370,uVar2,local_24);
  FUN_1414b3f60(local_108);
  if (local_24[0] < 1) {
    uVar2 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_370,uVar2,local_24);
    FUN_1424cf870(local_370,1,&DAT_ffffffb0,local_24);
    uVar1 = FUN_1424cd180(local_370,local_24);
    DAT_14c709858 = FUN_1424cd2e0(local_370,1,local_24);
    DAT_14c709850 = uVar1;
  }
  FUN_1424cbfc0(local_370);
  return;
}



// FUNCTION 14257b050 Unwind@14257b050 body=42 status=ok
// SIG undefined Unwind@14257b050(void)

void Unwind_14257b050(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x28);
  return;
}



// FUNCTION 14257b080 Unwind@14257b080 body=42 status=ok
// SIG undefined Unwind@14257b080(void)

void Unwind_14257b080(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(param_2 + 0x28);
  return;
}



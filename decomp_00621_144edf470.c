// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144edf470 FUN_144edf470 body=692 status=ok
// SIG undefined FUN_144edf470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144edf470(undefined8 param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144edf490;
  plVar2 = (longlong *)FUN_144edfcf0();
  if (plVar2 == (longlong *)0x0) {
    uVar6 = 0x127;
    uVar5 = 0x70;
  }
  else if (*plVar2 == 0) {
    switch(param_2) {
    case 200:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 == 0) {
          param_4 = 0;
        }
      }
      FUN_144ea6530(plVar2[3],"crypto\\engine\\eng_dyn.c",0x135);
      if (param_4 == 0) {
        plVar2[3] = 0;
        return 0;
      }
      lVar4 = FUN_144ea6dc0(param_4,"crypto\\engine\\eng_dyn.c",0x137);
      plVar2[3] = lVar4;
      return (ulonglong)(lVar4 != 0);
    case 0xc9:
      *(uint *)(plVar2 + 4) = (uint)(param_3 != 0);
      return 1;
    case 0xca:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 == 0) {
          param_4 = 0;
        }
      }
      FUN_144ea6530(plVar2[5],"crypto\\engine\\eng_dyn.c",0x142);
      if (param_4 == 0) {
        plVar2[5] = 0;
        return 0;
      }
      lVar4 = FUN_144ea6dc0(param_4,"crypto\\engine\\eng_dyn.c",0x144);
      plVar2[5] = lVar4;
      return (ulonglong)(lVar4 != 0);
    case 0xcb:
      if (param_3 < 3) {
        *(uint *)(plVar2 + 6) = param_3;
        return 1;
      }
      uVar6 = 0x14a;
      uVar5 = 0x8f;
      break;
    case 0xcc:
      if (param_3 < 3) {
        *(uint *)(plVar2 + 9) = param_3;
        return 1;
      }
      uVar6 = 0x153;
      uVar5 = 0x8f;
      break;
    case 0xcd:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 != 0) {
          lVar4 = FUN_144ea6dc0(param_4,"crypto\\engine\\eng_dyn.c",0x15f);
          if (lVar4 == 0) {
            uVar6 = 0x161;
            uVar5 = 0x41;
          }
          else {
            iVar1 = FUN_144bac1c0(plVar2[10],lVar4);
            if (iVar1 != 0) {
              return 1;
            }
            FUN_144ea6530(lVar4,"crypto\\engine\\eng_dyn.c",0x165);
            uVar5 = 0x41;
            uVar6 = 0x166;
          }
          break;
        }
      }
      uVar6 = 0x15b;
      uVar5 = 0x8f;
      break;
    case 0xce:
      uVar3 = FUN_144edf740(param_1,plVar2);
      return uVar3;
    default:
      uVar6 = 0x16e;
      uVar5 = 0x77;
    }
  }
  else {
    uVar6 = 0x12d;
    uVar5 = 100;
  }
  FUN_144ba24f0(0x26,0xb4,uVar5,"crypto\\engine\\eng_dyn.c",uVar6,uVar7);
  return 0;
}



// FUNCTION 144edf740 FUN_144edf740 body=913 status=ok
// SIG undefined FUN_144edf740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edf740(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144edf750;
  if (*param_2 == 0) {
    lVar3 = FUN_144ecf690();
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_2[3] == 0) {
    if (param_2[5] == 0) {
      return 0;
    }
    FUN_144ecf7c0(*param_2,2,2,0);
    lVar3 = FUN_144ecf970(*param_2,param_2[5]);
    param_2[3] = lVar3;
  }
  iVar1 = FUN_144edfe90(param_2);
  if (iVar1 == 0) {
    FUN_144ba24f0(0x26,0xb6,0x84,"crypto\\engine\\eng_dyn.c",0x1b2);
    FUN_144ecf6b0(*param_2);
    *param_2 = 0;
    return 0;
  }
  lVar3 = FUN_144ecfbd0(*param_2,param_2[8]);
  param_2[2] = lVar3;
  if (lVar3 == 0) {
    param_2[2] = 0;
    FUN_144ecf6b0(*param_2);
    *param_2 = 0;
    FUN_144ba24f0(0x26,0xb6,0x68,"crypto\\engine\\eng_dyn.c",0x1bf);
    return 0;
  }
  if ((int)param_2[4] == 0) {
    pcVar4 = (code *)FUN_144ecfbd0(*param_2,param_2[7]);
    param_2[1] = (longlong)pcVar4;
    if ((pcVar4 != (code *)0x0) && (uVar2 = (*pcVar4)(0x30000), 0x2ffff < uVar2)) {
      FUN_144ba3130();
      lVar3 = FUN_144ecfbd0(*param_2,"EVP_PKEY_get_base_id");
      FUN_144ba3170();
      if (lVar3 == 0) goto LAB_144edf8dc;
    }
    param_2[2] = 0;
    param_2[1] = 0;
    FUN_144ecf6b0(*param_2);
    *param_2 = 0;
    FUN_144ba24f0(0x26,0xb6,0x91,"crypto\\engine\\eng_dyn.c",0x1da);
  }
  else {
LAB_144edf8dc:
    local_e8 = *param_1;
    uStack_e0 = param_1[1];
    local_d8 = param_1[2];
    uStack_d0 = param_1[3];
    local_c8 = param_1[4];
    uStack_c0 = param_1[5];
    local_b8 = param_1[6];
    uStack_b0 = param_1[7];
    local_a8 = param_1[8];
    uStack_a0 = param_1[9];
    local_98 = param_1[10];
    uStack_90 = param_1[0xb];
    local_88 = param_1[0xc];
    uStack_80 = param_1[0xd];
    local_68 = param_1[0x10];
    uStack_60 = param_1[0x11];
    local_78 = param_1[0xe];
    uStack_70 = param_1[0xf];
    local_58 = param_1[0x12];
    uStack_50 = param_1[0x13];
    local_48 = param_1[0x14];
    uStack_40 = param_1[0x15];
    local_38 = *(undefined4 *)(param_1 + 0x16);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xb4);
    uStack_30 = *(undefined4 *)(param_1 + 0x17);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xbc);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0xc4);
    uStack_20 = *(undefined4 *)(param_1 + 0x19);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xcc);
    local_18 = param_1[0x1a];
    local_108 = FUN_144ee3c40();
    FUN_144ea6640(local_100,local_f8,local_f0);
    FUN_144ee3ea0(param_1);
    iVar1 = FUN_145290b50(param_1,param_2[2],1);
    if ((iVar1 != 0) && (iVar1 = (*(code *)param_2[2])(param_1,param_2[5],&local_108), iVar1 != 0))
    {
      if ((0 < (int)param_2[6]) && (iVar1 = FUN_145290810(param_1), iVar1 == 0)) {
        if (1 < (int)param_2[6]) {
          FUN_144ba24f0(0x26,0xb6,0x67,"crypto\\engine\\eng_dyn.c",0x20c);
          return 0;
        }
        FUN_144ba26f0();
      }
      return 1;
    }
    FUN_145290c60(param_1,1);
    param_2[2] = 0;
    param_2[1] = 0;
    FUN_144ecf6b0(*param_2);
    *param_2 = 0;
    FUN_144ba24f0(0x26,0xb6,0x6d,"crypto\\engine\\eng_dyn.c",0x1fb);
    *param_1 = local_e8;
    param_1[1] = uStack_e0;
    param_1[2] = local_d8;
    param_1[3] = uStack_d0;
    param_1[4] = local_c8;
    param_1[5] = uStack_c0;
    param_1[6] = local_b8;
    param_1[7] = uStack_b0;
    param_1[8] = local_a8;
    param_1[9] = uStack_a0;
    param_1[10] = local_98;
    param_1[0xb] = uStack_90;
    param_1[0xc] = local_88;
    param_1[0xd] = uStack_80;
    param_1[0xe] = local_78;
    param_1[0xf] = uStack_70;
    param_1[0x10] = local_68;
    param_1[0x11] = uStack_60;
    param_1[0x12] = local_58;
    param_1[0x13] = uStack_50;
    param_1[0x14] = local_48;
    param_1[0x15] = uStack_40;
    param_1[0x16] = CONCAT44(uStack_34,local_38);
    param_1[0x17] = CONCAT44(uStack_2c,uStack_30);
    param_1[0x18] = CONCAT44(uStack_24,local_28);
    param_1[0x19] = CONCAT44(uStack_1c,uStack_20);
    param_1[0x1a] = local_18;
  }
  return 0;
}



// FUNCTION 144edfae0 FUN_144edfae0 body=33 status=ok
// SIG undefined FUN_144edfae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edfae0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\engine\\eng_dyn.c",0x7a);
  return;
}



// FUNCTION 144edfb10 FUN_144edfb10 body=117 status=ok
// SIG undefined FUN_144edfb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edfb10(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_144ecf6b0(*param_2);
    FUN_144ea6530(param_2[3],"crypto\\engine\\eng_dyn.c",0x8d);
    FUN_144ea6530(param_2[5],"crypto\\engine\\eng_dyn.c",0x8e);
    FUN_144babe00(param_2[10],FUN_144edfae0);
    FUN_144ea6530(param_2,"crypto\\engine\\eng_dyn.c",0x90);
  }
  return;
}



// FUNCTION 144edfb90 FUN_144edfb90 body=337 status=ok
// SIG undefined FUN_144edfb90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144edfb90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144edfbaa;
  lVar2 = FUN_144ea6670(0x58,"crypto\\engine\\eng_dyn.c",0x9c);
  iVar1 = 1;
  if (lVar2 == 0) {
    FUN_144ba24f0(0x26,0xb7,0x41,"crypto\\engine\\eng_dyn.c",0xa0,uVar4);
    iVar1 = 0;
  }
  else {
    lVar3 = FUN_144babca0();
    *(longlong *)(lVar2 + 0x50) = lVar3;
    if (lVar3 == 0) {
      FUN_144ba24f0(0x26,0xb7,0x41,"crypto\\engine\\eng_dyn.c",0xa5,uVar4);
      FUN_144ea6530(lVar2,"crypto\\engine\\eng_dyn.c",0xa6);
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(lVar2 + 0x48) = 1;
      *(char **)(lVar2 + 0x38) = "v_check";
      *(char **)(lVar2 + 0x40) = "bind_engine";
      FUN_144e98620(DAT_14c797590);
      lVar3 = FUN_144ee3c10(param_1,DAT_14c70ea20);
      *param_2 = lVar3;
      if (lVar3 == 0) {
        iVar1 = FUN_144ee3bf0(param_1,DAT_14c70ea20,lVar2);
        if (iVar1 != 0) {
          *param_2 = lVar2;
          lVar2 = 0;
        }
      }
      FUN_144e98640(DAT_14c797590);
      if (lVar2 != 0) {
        FUN_144babdb0(*(undefined8 *)(lVar2 + 0x50));
      }
      FUN_144ea6530(lVar2,"crypto\\engine\\eng_dyn.c",0xbe);
    }
  }
  return iVar1;
}



// FUNCTION 144edfcf0 FUN_144edfcf0 body=223 status=ok
// SIG undefined FUN_144edfcf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edfcf0(undefined8 param_1)

{
  int iVar1;
  longlong local_res10 [3];
  undefined4 uVar2;
  
  if (DAT_14c70ea20 < 0) {
    uVar2 = 0;
    iVar1 = FUN_144ea5ab0(10,0,0,0,0,FUN_144edfb10);
    if (iVar1 == -1) {
      FUN_144ba24f0(0x26,0xb5,0x90,"crypto\\engine\\eng_dyn.c",CONCAT44(uVar2,0xd2));
      return 0;
    }
    FUN_144e98620(DAT_14c797590);
    if (DAT_14c70ea20 < 0) {
      DAT_14c70ea20 = iVar1;
    }
    FUN_144e98640(DAT_14c797590);
  }
  local_res10[0] = FUN_144ee3c10(param_1,DAT_14c70ea20);
  if ((local_res10[0] == 0) && (iVar1 = FUN_144edfb90(param_1,local_res10), iVar1 == 0)) {
    return 0;
  }
  return local_res10[0];
}



// FUNCTION 144edfdd0 FUN_144edfdd0 body=188 status=ok
// SIG undefined FUN_144edfdd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edfdd0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ee39a0();
  if (lVar2 != 0) {
    iVar1 = FUN_144ee3af0(lVar2,PTR_s_dynamic_14c70ea10);
    if (iVar1 != 0) {
      iVar1 = FUN_144ee3b40(lVar2,PTR_s_Dynamic_engine_loading_support_14c70ea18);
      if (iVar1 != 0) {
        iVar1 = FUN_144ee3ba0(lVar2,&LAB_144edf450);
        if (iVar1 != 0) {
          iVar1 = FUN_144ee3bb0(lVar2,&LAB_144edf460);
          if (iVar1 != 0) {
            iVar1 = FUN_144ee3bc0(lVar2,FUN_144edf470);
            if (iVar1 != 0) {
              iVar1 = FUN_144ee3bd0(lVar2,4);
              if (iVar1 != 0) {
                iVar1 = FUN_144ee3be0(lVar2,&DAT_149bfe130);
                if (iVar1 != 0) {
                  return lVar2;
                }
              }
            }
          }
        }
      }
    }
    FUN_144ee3a60(lVar2);
  }
  return 0;
}



// FUNCTION 144edfe90 FUN_144edfe90 body=249 status=ok
// SIG undefined FUN_144edfe90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edfe90(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 9) != 2) && (lVar2 = FUN_144ecfaa0(*param_1,param_1[3],0,0), lVar2 != 0))
  {
    return 1;
  }
  if ((*(int *)(param_1 + 9) != 0) && (iVar1 = FUN_144babbf0(param_1[10]), 0 < iVar1)) {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_144babc00(param_1[10],iVar5);
        lVar2 = FUN_144ecfa20(*param_1,param_1[3],uVar3);
        if (lVar2 == 0) {
          return 0;
        }
        lVar4 = FUN_144ecfaa0(*param_1,lVar2,0,0);
        if (lVar4 != 0) {
          FUN_144ea6530(lVar2,"crypto\\engine\\eng_dyn.c",0x184);
          return 1;
        }
        FUN_144ea6530(lVar2,"crypto\\engine\\eng_dyn.c",0x187);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 144edff90 FUN_144edff90 body=3 status=ok
// SIG undefined FUN_144edff90(void)

void FUN_144edff90(void)

{
  return;
}



// FUNCTION 144edffa0 FUN_144edffa0 body=94 status=ok
// SIG undefined FUN_144edffa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edffa0(void)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x144edffaa;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DVar1 = GetLastError();
  FUN_144ec7760(local_28,10,&DAT_149bff08c,DVar1);
  FUN_144ba2bd0(2,"Error code= 0x",local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144ee0010 FUN_144ee0010 body=88 status=ok
// SIG undefined FUN_144ee0010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee0010(undefined4 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ee001a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144ec7760(local_28,10,&DAT_149bff08c,param_1);
  FUN_144ba2bd0(2,"Error code= 0x",local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144ee0070 FUN_144ee0070 body=49 status=ok
// SIG undefined FUN_144ee0070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee0070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144ee2cc0(param_1,2,param_2,&local_res18,0x144ee0089);
  return;
}



// FUNCTION 144ee00b0 FUN_144ee00b0 body=651 status=ok
// SIG undefined FUN_144ee00b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee00b0(undefined8 param_1,undefined8 param_2)

{
  BOOL BVar1;
  LPWSTR szProvName;
  longlong lVar2;
  DWORD DVar3;
  undefined1 auStackY_78 [32];
  DWORD local_48;
  DWORD local_44;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_78;
  FUN_144ee0070(param_1,"capi_list_providers\n");
  FUN_144ec7640(param_2,"Available CSPs:\n");
  DVar3 = 0;
  do {
    FUN_144ee0070(param_1,"capi_get_provname, index=%d\n",DVar3);
    BVar1 = CryptEnumProvidersW(DVar3,(DWORD *)0x0,0,&local_48,(LPWSTR)0x0,&local_44);
    if (BVar1 == 0) {
      DVar3 = GetLastError();
      if (DVar3 != 0x103) {
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,0x68,0x69,"engines\\e_capi.c");
        FUN_144ec7760(local_40,10,&DAT_149bff08c,DVar3);
        FUN_144ba2bd0(2,"Error code= 0x",local_40);
      }
LAB_144ee031c:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStackY_78);
    }
    szProvName = (LPWSTR)FUN_144ea64e0(local_44,"engines\\e_capi.c",0x47a);
    if (szProvName == (LPWSTR)0x0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x68,0x41,"engines\\e_capi.c");
      goto LAB_144ee031c;
    }
    BVar1 = CryptEnumProvidersW(DVar3,(DWORD *)0x0,0,&local_48,szProvName,&local_44);
    if (BVar1 == 0) {
      DVar3 = GetLastError();
      FUN_144ea6530(szProvName,"engines\\e_capi.c",0x481);
      if (DVar3 != 0x103) {
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,0x68,0x69,"engines\\e_capi.c");
        FUN_144ee0010(DVar3);
      }
      goto LAB_144ee031c;
    }
    lVar2 = FUN_144ee2d80(szProvName);
    FUN_144ea6530(szProvName,"engines\\e_capi.c",0x48a);
    if (lVar2 == 0) goto LAB_144ee031c;
    FUN_144ee0070(param_1,"capi_get_provname, returned name=%s, type=%d\n",lVar2,local_48);
    FUN_144ec7640(param_2,"%lu. %s, type %lu\n",DVar3,lVar2);
    FUN_144ea6530(lVar2,"engines\\e_capi.c",0x4a4);
    DVar3 = DVar3 + 1;
  } while( true );
}



// FUNCTION 144ee0350 FUN_144ee0350 body=868 status=ok
// SIG undefined FUN_144ee0350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee0350(longlong param_1,undefined8 param_2)

{
  LPCSTR lpMultiByteStr;
  longlong lVar1;
  uint uVar2;
  HCRYPTPROV HVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  DWORD DVar6;
  BYTE *pbData;
  ulonglong uVar7;
  int iVar8;
  LPCWSTR szProvider;
  undefined1 *puVar9;
  undefined8 uStackY_70;
  undefined1 auStackY_68 [32];
  DWORD local_38;
  uint uStack_34;
  HCRYPTPROV local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ee0360;
  puVar9 = auStackY_68;
  local_28 = DAT_14c707940 ^ (ulonglong)&local_38;
  local_38 = 0;
  szProvider = (LPCWSTR)0x0;
  uStackY_70 = 0x144ee03af;
  FUN_144ee0070(param_1,"Listing containers CSP=%s, type = %d\n",*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20));
  if (*(LPCSTR *)(param_1 + 0x18) == (LPCSTR)0x0) {
LAB_144ee0468:
    DVar6 = *(DWORD *)(param_1 + 0x20);
    *(undefined4 *)(puVar9 + 0x20) = 0xf0000000;
    *(undefined8 *)(puVar9 + -8) = 0x144ee0483;
    BVar5 = CryptAcquireContextW(&local_30,(LPCWSTR)0x0,szProvider,DVar6,*(DWORD *)(puVar9 + 0x20));
    HVar3 = local_30;
    if (BVar5 == 0) {
      if (DAT_14c797558 == 0) {
        *(undefined8 *)(puVar9 + -8) = 0x144ee0496;
        DAT_14c797558 = FUN_144ba30c0();
      }
      *(undefined4 *)(puVar9 + 0x20) = 0x4c3;
      *(undefined8 *)(puVar9 + -8) = 0x144ee04bb;
      FUN_144ba24f0(DAT_14c797558,0x6b,0x68,"engines\\e_capi.c");
      *(undefined8 *)(puVar9 + -8) = 0x144ee04c0;
      FUN_144edffa0();
    }
    else {
      *(undefined4 *)(puVar9 + 0x20) = 1;
      *(undefined8 *)(puVar9 + -8) = 0x144ee04e1;
      BVar5 = CryptGetProvParam(HVar3,2,(BYTE *)0x0,&local_38,*(DWORD *)(puVar9 + 0x20));
      DVar6 = local_38;
      if (BVar5 == 0) {
        if (DAT_14c797558 == 0) {
          *(undefined8 *)(puVar9 + -8) = 0x144ee04f4;
          DAT_14c797558 = FUN_144ba30c0();
        }
        *(undefined4 *)(puVar9 + 0x20) = 0x4c9;
        *(undefined8 *)(puVar9 + -8) = 0x144ee0519;
        FUN_144ba24f0(DAT_14c797558,0x6b,0x6c,"engines\\e_capi.c");
        *(undefined8 *)(puVar9 + -8) = 0x144ee051e;
        FUN_144edffa0();
        *(undefined8 *)(puVar9 + -8) = 0x144ee052a;
        CryptReleaseContext(local_30,0);
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x144ee0544;
        FUN_144ee0070(param_1,"Got max container len %d\n",DVar6);
        DVar6 = local_38;
        if (local_38 == 0) {
          DVar6 = 0x400;
        }
        local_38 = DVar6;
        *(undefined8 *)(puVar9 + -8) = 0x144ee0568;
        pbData = (BYTE *)FUN_144ea64e0(DVar6,"engines\\e_capi.c",0x4d1);
        if (pbData == (BYTE *)0x0) {
          if (DAT_14c797558 == 0) {
            *(undefined8 *)(puVar9 + -8) = 0x144ee057f;
            DAT_14c797558 = FUN_144ba30c0();
          }
          *(undefined4 *)(puVar9 + 0x20) = 0x4d3;
          *(undefined8 *)(puVar9 + -8) = 0x144ee05a4;
          FUN_144ba24f0(DAT_14c797558,0x6b,0x41,"engines\\e_capi.c");
        }
        else {
          iVar8 = 0;
          while( true ) {
            HVar3 = local_30;
            uStack_34 = local_38;
            *pbData = '\0';
            *(uint *)(puVar9 + 0x20) = (uint)(iVar8 == 0);
            *(undefined8 *)(puVar9 + -8) = 0x144ee05dd;
            BVar5 = CryptGetProvParam(HVar3,2,pbData,&uStack_34,*(DWORD *)(puVar9 + 0x20));
            uVar2 = uStack_34;
            if (BVar5 == 0) break;
            *(uint *)(puVar9 + 0x28) = (uint)(iVar8 == 0);
            *(int *)(puVar9 + 0x20) = iVar8;
            *(undefined8 *)(puVar9 + -8) = 0x144ee0600;
            FUN_144ee0070(param_1,"Container name %s, len=%d, index=%d, flags=%d\n",pbData,uVar2);
            if ((*pbData == '\0') && (uStack_34 == local_38)) {
              *(undefined8 *)(puVar9 + -8) = 0x144ee0635;
              FUN_144ee0070(param_1,"Enumerate bug: using workaround\n");
              goto LAB_144ee0684;
            }
            *(undefined8 *)(puVar9 + -8) = 0x144ee0622;
            FUN_144ec7640(param_2,"%lu. %s\n",iVar8,pbData);
            iVar8 = iVar8 + 1;
          }
          *(undefined8 *)(puVar9 + -8) = 0x144ee063d;
          DVar6 = GetLastError();
          if (DVar6 != 0x103) {
            if (DAT_14c797558 == 0) {
              *(undefined8 *)(puVar9 + -8) = 0x144ee0655;
              DAT_14c797558 = FUN_144ba30c0();
            }
            *(undefined4 *)(puVar9 + 0x20) = 0x4e4;
            *(undefined8 *)(puVar9 + -8) = 0x144ee067a;
            FUN_144ba24f0(DAT_14c797558,0x6b,0x6c,"engines\\e_capi.c");
            *(undefined8 *)(puVar9 + -8) = 0x144ee0681;
            FUN_144ee0010(DVar6);
          }
        }
LAB_144ee0684:
        *(undefined8 *)(puVar9 + -8) = 0x144ee0699;
        FUN_144ea6530(pbData,"engines\\e_capi.c",0x4f5);
        *(undefined8 *)(puVar9 + -8) = 0x144ee06a5;
        CryptReleaseContext(local_30,0);
      }
    }
  }
  else {
    uStackY_70 = 0x144ee03d3;
    uStack_34 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_1 + 0x18),-1,(LPWSTR)0x0,0);
    puVar4 = auStackY_68;
    if (uStack_34 != 0) {
      uVar7 = (ulonglong)uStack_34 * 2 + 0xf;
      if (uVar7 <= (ulonglong)uStack_34 * 2) {
        uVar7 = 0xffffffffffffff0;
      }
      uStackY_70 = 0x144ee0400;
      lpMultiByteStr = *(LPCSTR *)(param_1 + 0x18);
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar9 = auStackY_68 + lVar1;
      *(uint *)(&stack0xffffffffffffffc0 + lVar1) = uStack_34;
      szProvider = (LPCWSTR)((longlong)&local_38 + lVar1);
      *(LPCWSTR *)(&stack0xffffffffffffffb8 + lVar1) = szProvider;
      *(undefined8 *)(auStackY_68 + lVar1 + -8) = 0x144ee0423;
      MultiByteToWideChar(0,0,lpMultiByteStr,-1,*(LPWSTR *)(&stack0xffffffffffffffb8 + lVar1),
                          *(int *)(&stack0xffffffffffffffc0 + lVar1));
      puVar4 = auStackY_68 + lVar1;
      if (szProvider != (LPCWSTR)0x0) goto LAB_144ee0468;
    }
    puVar9 = puVar4;
    if (DAT_14c797558 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x144ee0437;
      DAT_14c797558 = FUN_144ba30c0();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4bb;
    *(undefined8 *)(puVar9 + -8) = 0x144ee045c;
    FUN_144ba24f0(DAT_14c797558,0x6b,0x41,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x144ee0461;
    FUN_144edffa0();
  }
  uVar7 = local_28 ^ (ulonglong)&local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_144ee06b4;
  FUN_144d8e3a0(uVar7);
}



// FUNCTION 144ee06d0 FUN_144ee06d0 body=285 status=ok
// SIG undefined FUN_144ee06d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ee06d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  puVar4 = &DAT_14996c804;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x28);
  }
  FUN_144ee0070(param_1,"Listing certs for store %s\n",puVar4);
  hCertStore = (HCERTSTORE)FUN_144ee35d0(param_1,puVar4);
  uVar1 = 0;
  if (hCertStore != (HCERTSTORE)0x0) {
    if (param_3 == 0) {
      iVar3 = 0;
      for (pCVar2 = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0); uVar5 = 1,
          pCVar2 != (PCCERT_CONTEXT)0x0; pCVar2 = CertEnumCertificatesInStore(hCertStore,pCVar2)) {
        FUN_144ec7640(param_2,"Certificate %d\n",iVar3);
        FUN_144ee3440(param_1,param_2,pCVar2);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      pCVar2 = (PCCERT_CONTEXT)FUN_144ee0850(param_1,param_3,hCertStore);
      if (pCVar2 == (PCCERT_CONTEXT)0x0) {
        uVar5 = 0;
      }
      else {
        FUN_144ee3440(param_1,param_2,pCVar2);
        CertFreeCertificateContext(pCVar2);
      }
    }
    CertCloseStore(hCertStore,0);
    uVar1 = uVar5;
  }
  return uVar1;
}



// FUNCTION 144ee07f0 FUN_144ee07f0 body=85 status=ok
// SIG undefined FUN_144ee07f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee07f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CryptDestroyKey(param_1[2]);
    CryptReleaseContext(param_1[1],0);
    if ((PCCERT_CONTEXT)*param_1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*param_1);
    }
    FUN_144ea6530(param_1,"engines\\e_capi.c",0x63a);
  }
  return;
}



// FUNCTION 144ee0850 FUN_144ee0850 body=506 status=ok
// SIG undefined FUN_144ee0850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

PCCERT_CONTEXT FUN_144ee0850(longlong param_1,void *param_2,HCERTSTORE param_3)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  PCCERT_CONTEXT pCVar4;
  void *pvData;
  char *pcVar5;
  char *pcVar6;
  DWORD local_res8 [2];
  
  if (*(int *)(param_1 + 0x3c) == 1) {
    pCVar4 = CertFindCertificateInStore(param_3,1,0,0x70007,param_2,(PCCERT_CONTEXT)0x0);
    return pCVar4;
  }
  if (*(int *)(param_1 + 0x3c) != 2) {
    return (PCCERT_CONTEXT)0x0;
  }
  pCVar4 = CertEnumCertificatesInStore(param_3,(PCCERT_CONTEXT)0x0);
  do {
    if (pCVar4 == (PCCERT_CONTEXT)0x0) {
      return (PCCERT_CONTEXT)0x0;
    }
    FUN_144ee0070(param_1,"capi_cert_get_fname\n");
    BVar3 = CertGetCertificateContextProperty(pCVar4,0xb,(void *)0x0,local_res8);
    if ((BVar3 != 0) &&
       (pvData = (void *)FUN_144ea64e0(local_res8[0],"engines\\e_capi.c"), pvData != (void *)0x0)) {
      BVar3 = CertGetCertificateContextProperty(pCVar4,0xb,pvData,local_res8);
      if (BVar3 == 0) {
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,99,0x6f,"engines\\e_capi.c",0x53d);
        FUN_144edffa0();
        FUN_144ea6530(pvData,"engines\\e_capi.c");
      }
      else {
        pcVar5 = (char *)FUN_144ee2d80(pvData);
        FUN_144ea6530(pvData,"engines\\e_capi.c");
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[(longlong)param_2 - (longlong)pcVar5];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_144ea6530(pcVar5,"engines\\e_capi.c");
          if (cVar1 == cVar2) {
            return pCVar4;
          }
        }
      }
    }
    pCVar4 = CertEnumCertificatesInStore(param_3,pCVar4);
  } while( true );
}



// FUNCTION 144ee0a50 FUN_144ee0a50 body=425 status=ok
// SIG undefined FUN_144ee0a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee0a50(longlong param_1,LPCSTR param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 uStackY_60;
  undefined1 auStackY_58 [32];
  ulonglong local_28 [2];
  
  local_28[1] = 0x144ee0a60;
  local_28[0] = DAT_14c707940 ^ (ulonglong)local_28;
  iVar7 = *(int *)(param_1 + 0x3c);
  puVar9 = auStackY_58;
  if (0 < iVar7) {
    if (iVar7 < 3) {
      uStackY_60 = 0x144ee0baa;
      hCertStore = (HCERTSTORE)FUN_144ee35d0(param_1,0);
      puVar9 = auStackY_58;
      if (hCertStore != (HCERTSTORE)0x0) {
        uStackY_60 = 0x144ee0bc0;
        pCertContext = (PCCERT_CONTEXT)FUN_144ee0850(param_1,param_2,hCertStore);
        if (pCertContext != (PCCERT_CONTEXT)0x0) {
          uStackY_60 = 0x144ee0bd3;
          FUN_144ee3890(param_1,pCertContext);
          uStackY_60 = 0x144ee0bdf;
          CertFreeCertificateContext(pCertContext);
        }
        uStackY_60 = 0x144ee0bea;
        CertCloseStore(hCertStore,0);
        puVar9 = auStackY_58;
      }
    }
    else {
      puVar9 = auStackY_58;
      if (iVar7 == 3) {
        uStackY_60 = 0x144ee0ac1;
        uVar6 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
        puVar9 = auStackY_58;
        if (uVar6 != 0) {
          uVar8 = (ulonglong)uVar6 * 2 + 0xf;
          if (uVar8 <= (ulonglong)uVar6 * 2) {
            uVar8 = 0xffffffffffffff0;
          }
          uStackY_60 = 0x144ee0af2;
          lVar4 = -(uVar8 & 0xfffffffffffffff0);
          *(uint *)(&stack0xffffffffffffffd0 + lVar4) = uVar6;
          *(longlong *)(&stack0xffffffffffffffc8 + lVar4) = (longlong)local_28 + lVar4;
          *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x144ee0b14;
          iVar7 = MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar4),
                                      *(int *)(&stack0xffffffffffffffd0 + lVar4));
          puVar9 = auStackY_58 + lVar4;
          if (iVar7 != 0) {
            pCVar3 = *(LPCSTR *)(param_1 + 0x18);
            *(undefined4 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
            *(undefined8 *)(&stack0xffffffffffffffc8 + lVar4) = 0;
            *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x144ee0b37;
            uVar6 = MultiByteToWideChar(0,0,pCVar3,-1,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar4),
                                        *(int *)(&stack0xffffffffffffffd0 + lVar4));
            puVar9 = auStackY_58 + lVar4;
            if (uVar6 != 0) {
              uVar8 = (ulonglong)uVar6 * 2 + 0xf;
              if (uVar8 <= (ulonglong)uVar6 * 2) {
                uVar8 = 0xffffffffffffff0;
              }
              *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x144ee0b5e;
              pCVar3 = *(LPCSTR *)(param_1 + 0x18);
              lVar5 = -(uVar8 & 0xfffffffffffffff0);
              *(uint *)(auStackY_58 + lVar5 + lVar4 + 0x28) = uVar6;
              lVar1 = (longlong)local_28 + lVar5 + lVar4;
              *(longlong *)(auStackY_58 + lVar5 + lVar4 + 0x20) = lVar1;
              *(undefined8 *)(auStackY_58 + lVar5 + lVar4 + -8) = 0x144ee0b81;
              iVar7 = MultiByteToWideChar(0,0,pCVar3,-1,
                                          *(LPWSTR *)(auStackY_58 + lVar5 + lVar4 + 0x20),
                                          *(int *)(auStackY_58 + lVar5 + lVar4 + 0x28));
              puVar9 = auStackY_58 + lVar5 + lVar4;
              if (iVar7 != 0) {
                uVar2 = *(undefined4 *)(param_1 + 0x20);
                *(undefined4 *)(auStackY_58 + lVar5 + lVar4 + 0x20) =
                     *(undefined4 *)(param_1 + 0x10);
                *(undefined8 *)(auStackY_58 + lVar5 + lVar4 + -8) = 0x144ee0b9e;
                FUN_144ee3680(param_1,(longlong)local_28 + lVar4,lVar1,uVar2);
                puVar9 = auStackY_58 + lVar5 + lVar4;
              }
            }
          }
        }
      }
    }
  }
  uVar8 = local_28[0] ^ (ulonglong)local_28;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_144ee0bf9;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 144ee0c10 FUN_144ee0c10 body=166 status=ok
// SIG undefined FUN_144ee0c10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee0c10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee0c20;
  lVar1 = FUN_144ee3c10(param_1,DAT_14c70ed80);
  if (lVar1 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x6c,0x65,"engines\\e_capi.c",0x318,uVar3);
  }
  else {
    lVar1 = FUN_144ee0a50(lVar1,param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144ee2780(param_1,lVar1);
      if (lVar2 == 0) {
        FUN_144ee07f0(lVar1);
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 144ee0cc0 FUN_144ee0cc0 body=776 status=ok
// SIG undefined FUN_144ee0cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee0cc0(int param_1,BYTE *param_2,undefined8 param_3,BYTE *param_4,uint *param_5,
                  undefined8 param_6)

{
  BYTE BVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  ALG_ID Algid;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStackY_98 [32];
  uint local_68 [2];
  HCRYPTHASH local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144ee0cd5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  uVar3 = FUN_144bad8b0(param_6);
  uVar3 = FUN_144ee3c10(uVar3,DAT_14c70ed80);
  FUN_144ee0070(uVar3,"Called CAPI_rsa_sign()\n");
  lVar4 = FUN_144bada80(param_6,DAT_14c70ed84);
  if (lVar4 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x70,0x66,"engines\\e_capi.c");
    goto LAB_144ee0fb9;
  }
  if (param_1 < 0x2a1) {
    if (param_1 == 0x2a0) {
      Algid = 0x800c;
    }
    else if (param_1 == 4) {
      Algid = 0x8003;
    }
    else if (param_1 == 0x40) {
      Algid = 0x8004;
    }
    else {
      if (param_1 != 0x72) goto LAB_144ee0dc6;
      Algid = 0x8008;
    }
  }
  else if (param_1 == 0x2a1) {
    Algid = 0x800d;
  }
  else {
    if (param_1 != 0x2a2) {
LAB_144ee0dc6:
      FUN_144ec7760(local_58,10,&DAT_149ecb182,param_1);
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x70,0x7e,"engines\\e_capi.c");
      FUN_144ba2bd0(2,"NID=0x",local_58);
      goto LAB_144ee0fb9;
    }
    Algid = 0x800e;
  }
  BVar2 = CryptCreateHash(*(HCRYPTPROV *)(lVar4 + 8),Algid,0,0,&local_60);
  if (BVar2 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x70,100,"engines\\e_capi.c");
    FUN_144edffa0();
  }
  else {
    BVar2 = CryptSetHashParam(local_60,2,param_2,0);
    if (BVar2 == 0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x70,0x67,"engines\\e_capi.c");
      FUN_144edffa0();
    }
    else {
      local_68[0] = FUN_144bae400(param_6);
      BVar2 = CryptSignHashW(local_60,*(DWORD *)(lVar4 + 0x18),(LPCWSTR)0x0,0,param_4,local_68);
      if (BVar2 == 0) {
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,0x70,0x72,"engines\\e_capi.c");
        FUN_144edffa0();
      }
      else {
        uVar7 = 0;
        if ((local_68[0] & 0xfffffffe) != 0) {
          do {
            BVar1 = param_4[uVar7];
            uVar5 = (local_68[0] - (int)uVar7) - 1;
            param_4[uVar7] = param_4[uVar5];
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            param_4[uVar5] = BVar1;
          } while (uVar6 < local_68[0] >> 1);
        }
        *param_5 = local_68[0];
      }
    }
    CryptDestroyHash(local_60);
  }
LAB_144ee0fb9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_98);
}



// FUNCTION 144ee0fe0 FUN_144ee0fe0 body=73 status=ok
// SIG undefined FUN_144ee0fe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee0fe0(void)

{
  if (DAT_14c797558 == 0) {
    DAT_14c797558 = FUN_144ba30c0();
  }
  FUN_144ba24f0(DAT_14c797558,0x6f,0x74,"engines\\e_capi.c",0x32e);
  return 0xffffffff;
}



// FUNCTION 144ee1030 FUN_144ee1030 body=650 status=ok
// SIG undefined FUN_144ee1030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee1030(DWORD param_1,longlong param_2,void *param_3,undefined8 param_4,int param_5)

{
  BYTE *pBVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  BYTE *pbData;
  longlong lVar5;
  BYTE *pBVar6;
  longlong lVar7;
  size_t _Size;
  undefined1 auStackY_78 [32];
  DWORD local_48 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_78;
  lVar7 = (longlong)(int)param_1;
  if (0 < (int)param_1) {
    uVar3 = FUN_144bad8b0(param_4);
    uVar3 = FUN_144ee3c10(uVar3,DAT_14c70ed80);
    FUN_144ee0070(uVar3,"Called capi_rsa_priv_dec()\n");
    lVar4 = FUN_144bada80(param_4,DAT_14c70ed84);
    if (lVar4 == 0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x6e,0x66,"engines\\e_capi.c");
    }
    else if (param_5 == 1) {
      pbData = (BYTE *)FUN_144ea64e0(lVar7,"engines\\e_capi.c",0x3bc);
      if (pbData == (BYTE *)0x0) {
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,0x6e,0x41,"engines\\e_capi.c");
      }
      else {
        lVar5 = 0;
        if (0 < (int)param_1) {
          pBVar6 = pbData + lVar7 + -1;
          do {
            pBVar1 = (BYTE *)(lVar5 + param_2);
            lVar5 = lVar5 + 1;
            *pBVar6 = *pBVar1;
            pBVar6 = pBVar6 + -1;
          } while (lVar5 < lVar7);
        }
        local_48[0] = param_1;
        BVar2 = CryptDecrypt(*(HCRYPTKEY *)(lVar4 + 0x10),0,1,0,pbData,local_48);
        if (BVar2 == 0) {
          if (DAT_14c797558 == 0) {
            DAT_14c797558 = FUN_144ba30c0();
          }
          FUN_144ba24f0(DAT_14c797558,0x6e,0x6a,"engines\\e_capi.c");
          FUN_144edffa0();
          FUN_14259f0c0(pbData,local_48[0]);
          FUN_144ea6530(pbData,"engines\\e_capi.c",0x3c9);
        }
        else {
          _Size = (size_t)(int)local_48[0];
          memcpy(param_3,pbData,_Size);
          FUN_14259f0c0(pbData,_Size);
          FUN_144ea6530(pbData,"engines\\e_capi.c",0x3cf);
        }
      }
    }
    else {
      FUN_144ec7760(local_40,10,&DAT_149dfc0ac);
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x6e,0x7f,"engines\\e_capi.c");
      FUN_144ba2bd0(2,"padding=",local_40);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStackY_78);
}



// FUNCTION 144ee12d0 FUN_144ee12d0 body=131 status=ok
// SIG undefined FUN_144ee12d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee12d0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144bada80(param_1,DAT_14c70ed84);
  if (puVar1 != (undefined8 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    FUN_144ea6530(puVar1,"engines\\e_capi.c",0x63a);
  }
  FUN_144bada60(param_1,DAT_14c70ed84,0);
  return 1;
}



// FUNCTION 144ee1360 FUN_144ee1360 body=831 status=ok
// SIG undefined FUN_144ee1360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee1360(BYTE *param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  BYTE BVar10;
  BOOL BVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_88 [32];
  DWORD local_58 [2];
  HCRYPTHASH local_50;
  BYTE local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  BYTE local_35;
  undefined1 local_34 [20];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  uVar13 = FUN_144ed46c0(param_3);
  uVar13 = FUN_144ee3c10(uVar13,DAT_14c70ed80);
  FUN_144ee0070(uVar13,"Called CAPI_dsa_do_sign()\n");
  lVar14 = FUN_144ed43b0(param_3,DAT_14c70ed88);
  if (lVar14 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x72,0x66,"engines\\e_capi.c");
    goto LAB_144ee1693;
  }
  if (param_2 != 0x14) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x72,0x76,"engines\\e_capi.c");
    goto LAB_144ee1693;
  }
  BVar11 = CryptCreateHash(*(HCRYPTPROV *)(lVar14 + 8),0x8004,0,0,&local_50);
  if (BVar11 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x72,100,"engines\\e_capi.c");
    FUN_144edffa0();
    goto LAB_144ee1693;
  }
  BVar11 = CryptSetHashParam(local_50,2,param_1,0);
  if (BVar11 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x72,0x67,"engines\\e_capi.c");
    FUN_144edffa0();
  }
  else {
    local_58[0] = 0x28;
    BVar11 = CryptSignHashW(local_50,*(DWORD *)(lVar14 + 0x18),(LPCWSTR)0x0,0,&local_48,local_58);
    if (BVar11 == 0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x72,0x72,"engines\\e_capi.c");
      FUN_144edffa0();
    }
    else {
      lVar14 = FUN_144ba0570();
      lVar15 = FUN_144ba0570();
      BVar10 = local_35;
      uVar9 = local_36;
      uVar8 = local_37;
      uVar7 = local_38;
      uVar6 = local_39;
      uVar5 = local_3a;
      uVar4 = local_3b;
      uVar3 = local_3c;
      uVar2 = local_3d;
      uVar1 = local_3e;
      if ((lVar14 != 0) && (lVar15 != 0)) {
        local_35 = local_48;
        local_48 = BVar10;
        local_36 = local_47;
        local_47 = uVar9;
        local_37 = local_46;
        local_46 = uVar8;
        local_38 = local_45;
        local_45 = uVar7;
        local_39 = local_44;
        local_44 = uVar6;
        local_3a = local_43;
        local_43 = uVar5;
        local_3b = local_42;
        local_42 = uVar4;
        local_3c = local_41;
        local_41 = uVar3;
        local_3d = local_40;
        local_40 = uVar2;
        local_3e = local_3f;
        local_3f = uVar1;
        lVar16 = FUN_144ba0740(&local_48,0x14,lVar14);
        if (lVar16 != 0) {
          iVar12 = FUN_144ee2710(lVar15,local_34,0x14);
          if (iVar12 != 0) {
            lVar16 = FUN_144ee76f0();
            if (lVar16 != 0) {
              FUN_144ee77e0(lVar16,lVar14,lVar15);
              goto LAB_144ee1678;
            }
          }
        }
      }
      FUN_144ba0cd0(lVar14);
      FUN_144ba0cd0(lVar15);
    }
  }
LAB_144ee1678:
  FUN_14259f0c0(&local_48,0x28);
  CryptDestroyHash(local_50);
LAB_144ee1693:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStackY_88);
}



// FUNCTION 144ee16c0 FUN_144ee16c0 body=131 status=ok
// SIG undefined FUN_144ee16c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee16c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144ed43b0(param_1,DAT_14c70ed88);
  if (puVar1 != (undefined8 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    FUN_144ea6530(puVar1,"engines\\e_capi.c",0x63a);
  }
  FUN_144ed4390(param_1,DAT_14c70ed88,0);
  return 1;
}



// FUNCTION 144ee1750 FUN_144ee1750 body=715 status=ok
// SIG undefined FUN_144ee1750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ee1750(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  longlong lVar5;
  PCCERT_CONTEXT pCVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  BYTE *local_58 [3];
  
  uVar12 = 0;
  lVar4 = FUN_144ee3c10(param_1,DAT_14c70ed80);
  *param_4 = 0;
  *param_5 = 0;
  puVar10 = &DAT_14996c804;
  if (*(undefined **)(lVar4 + 0x30) != (undefined *)0x0) {
    puVar10 = *(undefined **)(lVar4 + 0x30);
  }
  hCertStore = (HCERTSTORE)FUN_144ee35d0(lVar4,puVar10);
  if (hCertStore == (HCERTSTORE)0x0) {
    return 0;
  }
  pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
  uVar7 = uVar12;
  uVar13 = uVar12;
  for (; pCertContext != (PCCERT_CONTEXT)0x0;
      pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext)) {
    local_58[0] = pCertContext->pbCertEncoded;
    lVar5 = FUN_144bb5d50(0,local_58,pCertContext->cbCertEncoded);
    if (lVar5 == 0) {
      FUN_144ee0070(lVar4,"Can\'t Parse Certificate %d\n",uVar13);
    }
    else {
      iVar2 = FUN_144ee3900(param_3,lVar5);
      if ((iVar2 == 0) || (iVar2 = FUN_144ec5450(lVar5,1), iVar2 == 0)) {
        FUN_144b47250(lVar5);
      }
      else {
        puVar8 = (undefined8 *)FUN_144ee3890(lVar4,pCertContext);
        if (puVar8 == (undefined8 *)0x0) {
          FUN_144b47250(lVar5);
        }
        else {
          pCVar6 = CertDuplicateCertificateContext(pCertContext);
          uVar1 = DAT_14c70ed8c;
          *puVar8 = pCVar6;
          FUN_144bb5da0(lVar5,uVar1,puVar8);
          if (uVar7 == 0) {
            uVar7 = FUN_144babca0();
          }
          FUN_144bac1c0(uVar7,lVar5);
        }
      }
    }
    uVar13 = (ulonglong)((int)uVar13 + 1);
  }
  CertCloseStore(hCertStore,0);
  if (uVar7 != 0) {
    iVar2 = (**(code **)(lVar4 + 0x48))(param_1,param_2,uVar7);
    iVar3 = FUN_144babbf0(uVar7);
    if (0 < iVar3) {
      do {
        lVar4 = FUN_144babc00(uVar7,uVar12);
        if ((int)uVar12 == iVar2) {
          *param_4 = lVar4;
        }
        else {
          puVar8 = (undefined8 *)FUN_144bb5dc0(lVar4,DAT_14c70ed8c);
          if (puVar8 != (undefined8 *)0x0) {
            CryptDestroyKey(puVar8[2]);
            CryptReleaseContext(puVar8[1],0);
            if ((PCCERT_CONTEXT)*puVar8 != (PCCERT_CONTEXT)0x0) {
              CertFreeCertificateContext((PCCERT_CONTEXT)*puVar8);
            }
            FUN_144ea6530(puVar8,"engines\\e_capi.c",0x63a);
          }
          FUN_144b47250(lVar4);
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        iVar3 = FUN_144babbf0(uVar7);
      } while ((int)uVar11 < iVar3);
    }
    FUN_144babdb0(uVar7);
    if (*param_4 != 0) {
      uVar9 = FUN_144bb5dc0(*param_4,DAT_14c70ed8c);
      uVar9 = FUN_144ee2780(param_1,uVar9);
      uVar1 = DAT_14c70ed8c;
      *param_5 = uVar9;
      FUN_144bb5da0(*param_4,uVar1,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ee1a30 FUN_144ee1a30 body=82 status=ok
// SIG undefined FUN_144ee1a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee1a30(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ee39a0();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_144ee2530(lVar2);
  if (iVar1 == 0) {
    FUN_144ee3a60();
    return;
  }
  FUN_145290810(lVar2);
  FUN_144ee3a60(lVar2);
  FUN_144ba26f0();
  return;
}



// FUNCTION 144ee1a90 FUN_144ee1a90 body=149 status=ok
// SIG undefined FUN_144ee1a90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee1a90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x60,"engines\\e_capi.c",0x641);
  if (lVar1 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x65,0x41,"engines\\e_capi.c",0x644);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_144ee1a20;
  *(undefined4 *)(lVar1 + 0x40) = 3;
  *(undefined4 *)(lVar1 + 0x10) = 1;
  *(undefined4 *)(lVar1 + 0x38) = 0x1c000;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  return lVar1;
}



// FUNCTION 144ee1b30 FUN_144ee1b30 body=158 status=ok
// SIG undefined FUN_144ee1b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee1b30(longlong param_1)

{
  FUN_144ee0070(param_1,"Calling capi_ctx_free with %lx\n",param_1);
  if (param_1 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x18),"engines\\e_capi.c",0x656);
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"engines\\e_capi.c",0x657);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x28),"engines\\e_capi.c",0x658);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x30),"engines\\e_capi.c",0x659);
    FUN_144ea6530(param_1,"engines\\e_capi.c",0x65a);
    return;
  }
  return;
}



// FUNCTION 144ee1bd0 FUN_144ee1bd0 body=433 status=ok
// SIG undefined FUN_144ee1bd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee1bd0(longlong param_1,LPCSTR param_2,DWORD param_3,int param_4)

{
  LPCWSTR szProvider;
  undefined8 uVar1;
  uint uVar2;
  BOOL BVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  HCRYPTPROV local_18;
  ulonglong local_10;
  
  puVar6 = auStackY_48;
  local_10 = DAT_14c707940 ^ (ulonglong)&local_18;
  uStackY_50 = 0x144ee1c20;
  FUN_144ee0070(param_1,"capi_ctx_set_provname, name=%s, type=%d\n",param_2,param_3);
  if (param_4 == 0) {
LAB_144ee1cc0:
    *(undefined8 *)(puVar6 + -8) = 0x144ee1cd5;
    lVar5 = FUN_144ea6dc0(param_2,"engines\\e_capi.c",0x675);
    puVar7 = puVar6;
    if (lVar5 == 0) {
      if (DAT_14c797558 == 0) {
        *(undefined8 *)(puVar6 + -8) = 0x144ee1cec;
        DAT_14c797558 = FUN_144ba30c0();
      }
      *(undefined4 *)(puVar6 + 0x20) = 0x677;
      *(undefined8 *)(puVar6 + -8) = 0x144ee1d11;
      FUN_144ba24f0(DAT_14c797558,0x66,0x41,"engines\\e_capi.c");
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(puVar6 + -8) = 0x144ee1d68;
      FUN_144ea6530(uVar1,"engines\\e_capi.c",0x67a);
      *(longlong *)(param_1 + 0x18) = lVar5;
      *(DWORD *)(param_1 + 0x20) = param_3;
    }
  }
  else {
    uStackY_50 = 0x144ee1c44;
    uVar2 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
    puVar7 = auStackY_48;
    if (uVar2 != 0) {
      uVar4 = (ulonglong)uVar2 * 2 + 0xf;
      if (uVar4 <= (ulonglong)uVar2 * 2) {
        uVar4 = 0xffffffffffffff0;
      }
      uStackY_50 = 0x144ee1c6f;
      lVar5 = -(uVar4 & 0xfffffffffffffff0);
      puVar6 = auStackY_48 + lVar5;
      *(uint *)(&stack0xffffffffffffffe0 + lVar5) = uVar2;
      szProvider = (LPCWSTR)((longlong)&local_18 + lVar5);
      *(LPCWSTR *)(&stack0xffffffffffffffd8 + lVar5) = szProvider;
      *(undefined8 *)(auStackY_48 + lVar5 + -8) = 0x144ee1c91;
      MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffd8 + lVar5),
                          *(int *)(&stack0xffffffffffffffe0 + lVar5));
      puVar7 = auStackY_48 + lVar5;
      if (szProvider != (LPCWSTR)0x0) {
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar5) = 0xf0000000;
        *(undefined8 *)(auStackY_48 + lVar5 + -8) = 0x144ee1cb0;
        BVar3 = CryptAcquireContextW
                          (&local_18,(LPCWSTR)0x0,szProvider,param_3,
                           *(DWORD *)(&stack0xffffffffffffffd8 + lVar5));
        puVar7 = auStackY_48 + lVar5;
        if (BVar3 != 0) {
          *(undefined8 *)(auStackY_48 + lVar5 + -8) = 0x144ee1cc0;
          CryptReleaseContext(local_18,0);
          goto LAB_144ee1cc0;
        }
      }
    }
    if (DAT_14c797558 == 0) {
      *(undefined8 *)(puVar7 + -8) = 0x144ee1d24;
      DAT_14c797558 = FUN_144ba30c0();
    }
    *(undefined4 *)(puVar7 + 0x20) = 0x66f;
    *(undefined8 *)(puVar7 + -8) = 0x144ee1d49;
    FUN_144ba24f0(DAT_14c797558,0x66,0x68,"engines\\e_capi.c");
    *(undefined8 *)(puVar7 + -8) = 0x144ee1d4e;
    FUN_144edffa0();
  }
  uVar4 = local_10 ^ (ulonglong)&local_18;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_144ee1d81;
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 144ee1da0 FUN_144ee1da0 body=933 status=ok
// SIG undefined FUN_144ee1da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ee1da0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0x144ee1db4;
  uVar7 = 1;
  if (DAT_14c70ed80 == -1) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,100,0x6b,"engines\\e_capi.c",0x122);
    return 0;
  }
  puVar3 = (uint *)FUN_144ee3c10();
  uVar4 = __acrt_iob_func(1);
  lVar5 = FUN_144ec75c0(uVar4,0);
  if (lVar5 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,100,0x73,"engines\\e_capi.c",0x128);
    return 0;
  }
  switch(param_2) {
  case 200:
    uVar7 = FUN_144ee06d0(puVar3,lVar5,0);
    break;
  case 0xc9:
    uVar7 = FUN_144ee06d0(puVar3,lVar5,param_4);
    break;
  case 0xca:
    *puVar3 = param_3;
    FUN_144ee0070(puVar3,"Setting debug level to %d\n",param_3);
    break;
  case 0xcb:
    lVar6 = FUN_144ea6dc0(param_4,"engines\\e_capi.c",0x159);
    if (lVar6 != 0) {
      *(longlong *)(puVar3 + 2) = lVar6;
      FUN_144ee0070(puVar3,"Setting debug file to %s\n",lVar6);
      break;
    }
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    uVar7 = 0x15e;
    uVar4 = 0x41;
    goto LAB_144ee210d;
  case 0xcc:
    puVar3[4] = param_3;
    FUN_144ee0070(puVar3,"Setting key type to %d\n",param_3);
    break;
  case 0xcd:
    uVar7 = FUN_144ee00b0(puVar3,lVar5);
    break;
  case 0xce:
    iVar2 = FUN_144ee2f20(puVar3,&local_20,local_28,param_3);
    if (iVar2 == 1) {
      uVar7 = FUN_144ee1bd0(puVar3,local_20,local_28[0],0);
      FUN_144ea6530(local_20,"engines\\e_capi.c",0x688);
      break;
    }
    goto LAB_144ee2120;
  case 0xcf:
    uVar7 = FUN_144ee1bd0(puVar3,param_4,puVar3[8],1);
    break;
  case 0xd0:
    puVar3[8] = param_3;
    break;
  case 0xd1:
    uVar7 = FUN_144ee0350(puVar3,lVar5);
    break;
  case 0xd2:
    puVar3[0x10] = param_3;
    break;
  case 0xd3:
    if (2 < param_3 - 1) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,100,0x78,"engines\\e_capi.c",0x172);
      FUN_144b9e7b0(lVar5);
      return 0;
    }
    puVar3[0xf] = param_3;
    break;
  case 0xd4:
    lVar6 = FUN_144ea6dc0(param_4,"engines\\e_capi.c",0x13d);
    if (lVar6 != 0) {
      FUN_144ea6530(*(undefined8 *)(puVar3 + 10),"engines\\e_capi.c",0x13f);
      *(longlong *)(puVar3 + 10) = lVar6;
      FUN_144ee0070(puVar3,"Setting store name to %s\n",param_4);
      uVar7 = 1;
      break;
    }
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    uVar7 = 0x143;
    uVar4 = 0x41;
    goto LAB_144ee210d;
  case 0xd5:
    if ((param_3 & 1) == 0) {
      uVar1 = puVar3[0xe] & 0xfffdffff | 0x10000;
    }
    else {
      uVar1 = puVar3[0xe] & 0xfffeffff | 0x20000;
    }
    puVar3[0xe] = uVar1;
    FUN_144ee0070(puVar3,"Setting flags to %d\n",param_3);
    uVar7 = 1;
    break;
  default:
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    uVar7 = 0x182;
    uVar4 = 0x7d;
LAB_144ee210d:
    FUN_144ba24f0(DAT_14c797558,100,uVar4,"engines\\e_capi.c",uVar7);
LAB_144ee2120:
    uVar7 = 0;
  }
  FUN_144b9e7b0(lVar5);
  return uVar7;
}



// FUNCTION 144ee2180 FUN_144ee2180 body=732 status=ok
// SIG undefined FUN_144ee2180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee2180(undefined8 param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  HCRYPTPROV local_res10;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x144ee2195;
  if (DAT_14c70ed80 < 0) {
    uVar7 = 0;
    uVar6 = 0;
    DAT_14c70ed80 = FUN_144ea5ab0(10,0,0,0,0,0);
    if (DAT_14c70ed80 < 0) goto LAB_144ee23b3;
    DAT_14c70ed8c = FUN_144ea5ab0(3,0,0,0,0,0);
    uVar7 = 0;
    uVar6 = 0;
    DAT_14c70ed84 = FUN_144ea5ab0(9,0,0,0,0,0);
    uVar3 = FUN_144eecb80();
    uVar4 = FUN_14529e070(uVar3);
    iVar1 = FUN_14529e080(DAT_14c797560,uVar4);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar4 = FUN_14529e090(uVar3);
    iVar1 = FUN_14529e0a0(DAT_14c797560,uVar4);
    if (iVar1 == 0) goto LAB_144ee23b3;
    iVar1 = FUN_14529e0b0(DAT_14c797560,FUN_144ee0fe0);
    if (iVar1 == 0) goto LAB_144ee23b3;
    iVar1 = FUN_14529e0c0(DAT_14c797560,FUN_144ee1030);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar4 = FUN_14529e0d0(uVar3);
    iVar1 = FUN_14529e0e0(DAT_14c797560,uVar4);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar3 = FUN_14529e0f0(uVar3);
    iVar1 = FUN_14529e100(DAT_14c797560,uVar3);
    if (iVar1 == 0) goto LAB_144ee23b3;
    iVar1 = FUN_14529e110(DAT_14c797560,FUN_144ee12d0);
    if (iVar1 == 0) goto LAB_144ee23b3;
    iVar1 = FUN_14529e120(DAT_14c797560,FUN_144ee0cc0);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar7 = 0;
    uVar6 = 0;
    DAT_14c70ed88 = FUN_144ea5ab0(7,0,0,0,0,0);
    uVar3 = FUN_14529a260();
    iVar1 = FUN_14529e240(DAT_14c797568,FUN_144ee1360);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar4 = FUN_14529e250(uVar3);
    iVar1 = FUN_14529e260(DAT_14c797568,uVar4);
    if (iVar1 == 0) goto LAB_144ee23b3;
    iVar1 = FUN_14529e2b0(DAT_14c797568,FUN_144ee16c0);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar4 = FUN_14529e270(uVar3);
    iVar1 = FUN_14529e280(DAT_14c797568,uVar4);
    if (iVar1 == 0) goto LAB_144ee23b3;
    uVar3 = FUN_14529e290(uVar3);
    iVar1 = FUN_14529e2a0(DAT_14c797568,uVar3);
    if (iVar1 == 0) goto LAB_144ee23b3;
  }
  lVar5 = FUN_144ee1a90();
  if (lVar5 != 0) {
    FUN_144ee3bf0(param_1,DAT_14c70ed80,lVar5);
    BVar2 = CryptAcquireContextW
                      (&local_res10,(LPCWSTR)0x0,
                       L"Microsoft Enhanced RSA and AES Cryptographic Provider",0x18,0xf0000000);
    if (BVar2 != 0) {
      DAT_14c797570 = 1;
      CryptReleaseContext(local_res10,0);
    }
    return 1;
  }
LAB_144ee23b3:
  if (DAT_14c797558 == 0) {
    DAT_14c797558 = FUN_144ba30c0();
  }
  FUN_144ba24f0(DAT_14c797558,0x6a,0x41,"engines\\e_capi.c",CONCAT44(uVar6,0x1e9),uVar7);
  return 0;
}



// FUNCTION 144ee2460 FUN_144ee2460 body=124 status=ok
// SIG undefined FUN_144ee2460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ee2460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x144ee246a;
  FUN_14529e020(DAT_14c797560);
  DAT_14c797560 = 0;
  FUN_14529e1f0(DAT_14c797568);
  DAT_14c797568 = 0;
  if (DAT_14c79755c != 0) {
    FUN_144ba2de0(DAT_14c797558,&DAT_14c70ea30,param_3,param_4,uVar1);
    FUN_144ba2de0(DAT_14c797558,&DAT_14c70eb80);
    DAT_14c79755c = 0;
  }
  return 1;
}



// FUNCTION 144ee24e0 FUN_144ee24e0 body=65 status=ok
// SIG undefined FUN_144ee24e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee24e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ee3c10(param_1,DAT_14c70ed80);
  FUN_144ee1b30(uVar1);
  FUN_144ee3bf0(param_1,DAT_14c70ed80,0);
  return 1;
}



// FUNCTION 144ee2530 FUN_144ee2530 body=471 status=ok
// SIG undefined FUN_144ee2530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee2530(undefined8 param_1)

{
  int iVar1;
  
  DAT_14c797560 = FUN_14529df60("CryptoAPI RSA method",0);
  if (DAT_14c797560 != 0) {
    DAT_14c797568 = FUN_14529e130("CryptoAPI DSA method",0);
    if (DAT_14c797568 != 0) {
      iVar1 = FUN_144ee3af0(param_1,PTR_DAT_14c70ed70);
      if (iVar1 != 0) {
        iVar1 = FUN_144ee3b40(param_1,PTR_s_CryptoAPI_ENGINE_14c70ed78);
        if (iVar1 != 0) {
          iVar1 = FUN_144ee3bd0(param_1,8);
          if (iVar1 != 0) {
            iVar1 = FUN_144ee3ba0(param_1,FUN_144ee2180);
            if (iVar1 != 0) {
              iVar1 = FUN_144ee3bb0(param_1,FUN_144ee24e0);
              if (iVar1 != 0) {
                iVar1 = FUN_144ee3b90(param_1,FUN_144ee2460);
                if (iVar1 != 0) {
                  iVar1 = FUN_144eecd20(param_1,DAT_14c797560);
                  if (iVar1 != 0) {
                    iVar1 = FUN_14529a6f0(param_1,DAT_14c797568);
                    if (iVar1 != 0) {
                      iVar1 = FUN_145279550(param_1,FUN_144ee0c10);
                      if (iVar1 != 0) {
                        iVar1 = FUN_145279560(param_1,FUN_144ee1750);
                        if (iVar1 != 0) {
                          iVar1 = FUN_144ee3be0(param_1,&DAT_149bfe490);
                          if (iVar1 != 0) {
                            iVar1 = FUN_144ee3bc0(param_1,FUN_144ee1da0);
                            if (iVar1 != 0) {
                              if (DAT_14c797558 == 0) {
                                DAT_14c797558 = FUN_144ba30c0();
                              }
                              if (DAT_14c79755c == 0) {
                                FUN_144ba2d30(DAT_14c797558,&DAT_14c70ea30);
                                FUN_144ba2d30(DAT_14c797558,&DAT_14c70eb80);
                                DAT_14c79755c = 1;
                              }
                              return 1;
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
    FUN_14529e020(DAT_14c797560);
    DAT_14c797560 = 0;
    FUN_14529e1f0(DAT_14c797568);
    DAT_14c797568 = 0;
  }
  return 0;
}



// FUNCTION 144ee2710 FUN_144ee2710 body=101 status=ok
// SIG undefined FUN_144ee2710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ee2710(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 / 2);
  if (0 < param_3 / 2) {
    puVar2 = param_2 + (longlong)param_3 + -1;
    puVar3 = param_2;
    do {
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (lVar4 != 0);
  }
  lVar4 = FUN_144ba0740(param_2,param_3,param_1);
  return lVar4 != 0;
}



// FUNCTION 144ee2780 FUN_144ee2780 body=1319 status=ok
// SIG undefined FUN_144ee2780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee2780(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  int iVar2;
  BYTE *pbData;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  BYTE *pBVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_98 [32];
  DWORD local_68 [2];
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  ulonglong local_40;
  longlong lVar12;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  lVar12 = 0;
  lVar11 = 0;
  lVar5 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar13 = 0;
  local_50[0] = param_2;
  BVar1 = CryptExportKey(*(HCRYPTKEY *)(param_2 + 0x10),0,6,0,(BYTE *)0x0,local_68);
  if (BVar1 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x73,0x7c,"engines\\e_capi.c");
    FUN_144edffa0();
    goto LAB_144ee2c9a;
  }
  pbData = (BYTE *)FUN_144ea64e0(local_68[0],"engines\\e_capi.c",0x282);
  lVar6 = lVar12;
  lVar14 = lVar3;
  if (pbData == (BYTE *)0x0) goto LAB_144ee2c25;
  BVar1 = CryptExportKey(*(HCRYPTKEY *)(param_2 + 0x10),0,6,0,pbData,local_68);
  if (BVar1 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x73,0x7b,"engines\\e_capi.c");
    FUN_144edffa0();
    lVar11 = lVar12;
    lVar13 = lVar3;
  }
  else if (*pbData == '\x06') {
    if ((*(int *)(pbData + 4) - 0x2400U & 0xffff7fff) == 0) {
      if (*(int *)(pbData + 8) == 0x31415352) {
        lVar6 = FUN_144bad5d0(param_1);
        lVar5 = lVar9;
        lVar14 = lVar13;
        if (lVar6 != 0) {
          lVar5 = FUN_144ba0570();
          lVar11 = FUN_144ba0570();
          if ((lVar5 == 0) || (lVar11 == 0)) {
            FUN_144ba0cd0(lVar5);
LAB_144ee2c20:
            FUN_144ba0cd0(lVar11);
            lVar5 = lVar9;
            lVar14 = lVar3;
          }
          else {
            FUN_144bad7e0(lVar6,lVar11,lVar5,0);
            iVar2 = FUN_144ba0bb0(lVar5,*(undefined4 *)(pbData + 0x10));
            lVar5 = lVar9;
            if ((iVar2 != 0) &&
               (iVar2 = FUN_144ee2710(lVar11,pbData + 0x14,*(uint *)(pbData + 0xc) >> 3), iVar2 != 0
               )) {
              FUN_144bada60(lVar6,DAT_14c70ed84,param_2);
              lVar5 = FUN_144ba6d80();
              if (lVar5 != 0) {
                FUN_144ba69a0(lVar5,6,lVar6);
                lVar11 = 0;
                goto LAB_144ee2c5b;
              }
            }
          }
        }
LAB_144ee2c25:
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        uVar10 = 0x41;
        goto LAB_144ee2c48;
      }
      FUN_144ec7760(local_50,10,&DAT_149bfeff8);
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      uVar10 = 0x7a;
    }
    else {
      if (*(int *)(pbData + 4) != 0x2200) {
        FUN_144ec7760(local_50,10,&DAT_149bff00c);
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,0x73,0x80,"engines\\e_capi.c");
        FUN_144ba2bd0(2,"aiKeyAlg=0x",local_50);
        lVar5 = lVar9;
        goto LAB_144ee2c5b;
      }
      if (*(int *)(pbData + 8) == 0x31535344) {
        pBVar8 = pbData + 0x10;
        uVar7 = *(uint *)(pbData + 0xc) >> 3;
        lVar3 = FUN_144ed4060(param_1);
        lVar14 = lVar3;
        if (lVar3 != 0) {
          local_58 = FUN_144ba0570();
          lVar13 = FUN_144ba0570();
          lVar4 = FUN_144ba0570();
          local_60 = FUN_144ba0570();
          if ((((local_58 == 0) || (lVar13 == 0)) || (lVar4 == 0)) || (local_60 == 0)) {
            FUN_144ba0cd0();
            FUN_144ba0cd0(lVar13);
            FUN_144ba0cd0(lVar4);
            lVar11 = local_60;
            goto LAB_144ee2c20;
          }
          FUN_144ed4580(lVar3,local_58,lVar13,lVar4);
          FUN_144ed4640(lVar3,local_60,0);
          iVar2 = FUN_144ee2710(local_58,pBVar8,uVar7);
          if (iVar2 != 0) {
            pBVar8 = pBVar8 + uVar7;
            iVar2 = FUN_144ee2710(lVar13,pBVar8,0x14);
            lVar5 = lVar9;
            lVar6 = lVar11;
            if (iVar2 != 0) {
              iVar2 = FUN_144ee2710(lVar4,pBVar8 + 0x14,uVar7);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_144ee2710(local_60,pBVar8 + 0x14 + uVar7,uVar7), iVar2 != 0)) {
                FUN_144ed4390(lVar3,DAT_14c70ed88,local_50[0]);
                lVar5 = FUN_144ba6d80();
                if (lVar5 != 0) {
                  FUN_144ba69a0(lVar5,0x74,lVar3);
                  lVar13 = 0;
                  lVar11 = lVar12;
                  goto LAB_144ee2c5b;
                }
              }
            }
          }
        }
        goto LAB_144ee2c25;
      }
      FUN_144ec7760(local_50,10,&DAT_149bfeff8);
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      uVar10 = 0x77;
    }
    FUN_144ba24f0(DAT_14c797558,0x73,uVar10,"engines\\e_capi.c");
    FUN_144ba2bd0(2,"magic=0x",local_50);
    lVar11 = lVar12;
    lVar13 = lVar3;
  }
  else {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    uVar10 = 0x79;
LAB_144ee2c48:
    FUN_144ba24f0(DAT_14c797558,0x73,uVar10,"engines\\e_capi.c");
    lVar11 = lVar6;
    lVar13 = lVar14;
  }
LAB_144ee2c5b:
  FUN_144ea6530(pbData,"engines\\e_capi.c",0x2ff);
  if (lVar5 == 0) {
    FUN_144bad8c0(lVar11);
    FUN_144ed4200(lVar13);
  }
LAB_144ee2c9a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStackY_98);
}



// FUNCTION 144ee2cc0 FUN_144ee2cc0 body=182 status=ok
// SIG undefined FUN_144ee2cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee2cc0(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 != (int *)0x0) && (uVar2 = 0x144ee2cd9, param_2 <= *param_1)) &&
     (*(longlong *)(param_1 + 2) != 0)) {
    lVar1 = FUN_144ec7480(*(longlong *)(param_1 + 2),&DAT_149bf7a78);
    if (lVar1 == 0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x76,0x73,"engines\\e_capi.c",0x437,uVar2);
      return;
    }
    FUN_144ec7670(lVar1,param_3,param_4);
    FUN_144b9e7b0(lVar1);
  }
  return;
}



// FUNCTION 144ee2d80 FUN_144ee2d80 body=404 status=ok
// SIG undefined FUN_144ee2d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPSTR FUN_144ee2d80(LPCWSTR param_1)

{
  longlong lVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  longlong lVar3;
  undefined4 uVar5;
  LPSTR pCVar4;
  
  if (param_1 != (LPCWSTR)0x0) {
    lVar3 = -1;
    do {
      lVar1 = lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (param_1[lVar1] != L'\0');
    uVar5 = 0;
    iVar2 = WideCharToMultiByte(0,0,param_1,(int)lVar3 + 1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 == 0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x71,0x81,"engines\\e_capi.c",0x45c);
      lpMultiByteStr = (LPSTR)0x0;
    }
    else {
      lpMultiByteStr = (LPSTR)FUN_144ea64e0((longlong)iVar2,"engines\\e_capi.c",0x45f);
      if (lpMultiByteStr == (LPSTR)0x0) {
        if (DAT_14c797558 == 0) {
          DAT_14c797558 = FUN_144ba30c0();
        }
        FUN_144ba24f0(DAT_14c797558,0x71,0x41,"engines\\e_capi.c",CONCAT44(uVar5,0x461));
        lpMultiByteStr = (LPSTR)0x0;
      }
      else {
        pCVar4 = lpMultiByteStr;
        iVar2 = WideCharToMultiByte(0,0,param_1,(int)lVar3 + 1,lpMultiByteStr,iVar2,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        uVar5 = (undefined4)((ulonglong)pCVar4 >> 0x20);
        if (iVar2 == 0) {
          FUN_144ea6530(lpMultiByteStr,"engines\\e_capi.c",0x465);
          if (DAT_14c797558 == 0) {
            DAT_14c797558 = FUN_144ba30c0();
          }
          FUN_144ba24f0(DAT_14c797558,0x71,0x81,"engines\\e_capi.c",CONCAT44(uVar5,0x466));
          lpMultiByteStr = (LPSTR)0x0;
        }
      }
    }
    return lpMultiByteStr;
  }
  return (LPSTR)0x0;
}



// FUNCTION 144ee2f20 FUN_144ee2f20 body=514 status=ok
// SIG undefined FUN_144ee2f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee2f20(undefined8 param_1,longlong *param_2,DWORD *param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  LPWSTR szProvName;
  longlong lVar3;
  undefined4 uVar5;
  LPWSTR pWVar4;
  DWORD local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ee2f40;
  FUN_144ee0070(param_1,"capi_get_provname, index=%d\n",param_4);
  uVar5 = 0;
  BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,(LPWSTR)0x0,local_18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x103) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x68,0x69,"engines\\e_capi.c",0x476);
      FUN_144ee0010(DVar2);
      return 0;
    }
  }
  else {
    szProvName = (LPWSTR)FUN_144ea64e0(local_18[0],"engines\\e_capi.c",0x47a);
    if (szProvName == (LPWSTR)0x0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x68,0x41,"engines\\e_capi.c",CONCAT44(uVar5,0x47c));
      return 0;
    }
    pWVar4 = szProvName;
    BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,szProvName,local_18);
    uVar5 = (undefined4)((ulonglong)pWVar4 >> 0x20);
    if (BVar1 != 0) {
      lVar3 = FUN_144ee2d80(szProvName);
      *param_2 = lVar3;
      FUN_144ea6530(szProvName,"engines\\e_capi.c",0x48a);
      if (*param_2 == 0) {
        return 0;
      }
      FUN_144ee0070(param_1,"capi_get_provname, returned name=%s, type=%d\n",*param_2,*param_3);
      return 1;
    }
    DVar2 = GetLastError();
    FUN_144ea6530(szProvName,"engines\\e_capi.c",0x481);
    if (DVar2 != 0x103) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x68,0x69,"engines\\e_capi.c",CONCAT44(uVar5,0x484));
      FUN_144ee0010(DVar2);
      return 0;
    }
  }
  return 2;
}



// FUNCTION 144ee3130 FUN_144ee3130 body=281 status=ok
// SIG undefined FUN_144ee3130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_144ee3130(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  DWORD local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x144ee313c;
  BVar1 = CertGetCertificateContextProperty(param_2,2,(void *)0x0,local_res18);
  if (BVar1 == 0) {
    return (void *)0x0;
  }
  pvData = (void *)FUN_144ea64e0(local_res18[0],"engines\\e_capi.c",0x504);
  if (pvData == (void *)0x0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x69,0x41,"engines\\e_capi.c",0x506,uVar2);
    return (void *)0x0;
  }
  BVar1 = CertGetCertificateContextProperty(param_2,2,pvData,local_res18);
  if (BVar1 == 0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x69,0x70,"engines\\e_capi.c",0x50c,uVar2);
    FUN_144edffa0();
    FUN_144ea6530(pvData,"engines\\e_capi.c",0x50e);
    return (void *)0x0;
  }
  return pvData;
}



// FUNCTION 144ee3250 FUN_144ee3250 body=219 status=ok
// SIG undefined FUN_144ee3250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3250(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == (undefined8 *)0x0) {
    FUN_144ec7640(param_2,"  No Private Key\n");
    return;
  }
  lVar1 = FUN_144ee2d80(param_3[1]);
  lVar2 = FUN_144ee2d80(*param_3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_144ec7640(param_2,"  Private Key Info:\n");
    FUN_144ec7640(param_2,"    Provider Name:  %s, Provider Type %lu\n",lVar1,
                  *(undefined4 *)(param_3 + 2));
    FUN_144ec7640(param_2,"    Container Name: %s, Key Type %lu\n",lVar2,
                  *(undefined4 *)(param_3 + 5));
  }
  FUN_144ea6530(lVar1,"engines\\e_capi.c",0x527);
  FUN_144ea6530(lVar2,"engines\\e_capi.c",0x528);
  return;
}



// FUNCTION 144ee3330 FUN_144ee3330 body=265 status=ok
// SIG undefined FUN_144ee3330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3330(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  undefined8 uVar2;
  DWORD local_res18 [4];
  
  FUN_144ee0070(param_1,"capi_cert_get_fname\n");
  BVar1 = CertGetCertificateContextProperty(param_2,0xb,(void *)0x0,local_res18);
  if (BVar1 == 0) {
    return 0;
  }
  pvData = (void *)FUN_144ea64e0(local_res18[0],"engines\\e_capi.c",0x534);
  if (pvData != (void *)0x0) {
    BVar1 = CertGetCertificateContextProperty(param_2,0xb,pvData,local_res18);
    if (BVar1 != 0) {
      uVar2 = FUN_144ee2d80(pvData);
      FUN_144ea6530(pvData,"engines\\e_capi.c",0x53a);
      return uVar2;
    }
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,99,0x6f,"engines\\e_capi.c",0x53d);
    FUN_144edffa0();
    FUN_144ea6530(pvData,"engines\\e_capi.c",0x540);
  }
  return 0;
}



// FUNCTION 144ee3440 FUN_144ee3440 body=394 status=ok
// SIG undefined FUN_144ee3440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3440(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 & 2) != 0) {
    lVar2 = FUN_144ee3330(param_1,param_3);
    if (lVar2 == 0) {
      FUN_144ec7640(param_2,"  <No Friendly Name>\n");
    }
    else {
      FUN_144ec7640(param_2,"  Friendly Name \"%s\"\n",lVar2);
      FUN_144ea6530(lVar2,"engines\\e_capi.c",0x54e);
    }
  }
  local_res8 = *(undefined8 *)(param_3 + 8);
  lVar2 = FUN_144bb5d50(0,&local_res8,*(undefined4 *)(param_3 + 0x10));
  if (lVar2 == 0) {
    FUN_144ec7640(param_2,"  <Can\'t parse certificate>\n");
  }
  if ((uVar1 & 1) != 0) {
    FUN_144ec7640(param_2,"  Subject: ");
    uVar3 = FUN_144bb4f50(lVar2);
    FUN_14526c5b0(param_2,uVar3,0,0x82031f);
    FUN_144ec7640(param_2,"\n  Issuer: ");
    uVar3 = FUN_144bb4f40(lVar2);
    FUN_14526c5b0(param_2,uVar3,0,0x82031f);
    FUN_144ec7640(param_2,&DAT_149dfc0af);
  }
  if ((uVar1 & 4) != 0) {
    FUN_14529e7b0(param_2,lVar2,0x82031f,0);
  }
  if ((uVar1 & 0x20) != 0) {
    uVar3 = FUN_144ee3130(param_1,param_3);
    FUN_144ee3250(param_1,param_2,uVar3);
    FUN_144ea6530(uVar3,"engines\\e_capi.c",0x566);
  }
  if ((uVar1 & 8) != 0) {
    FUN_144bac6c0(param_2,lVar2);
  }
  FUN_144b47250(lVar2);
  return;
}



// FUNCTION 144ee35d0 FUN_144ee35d0 body=165 status=ok
// SIG undefined FUN_144ee35d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

HCERTSTORE FUN_144ee35d0(longlong param_1,undefined *param_2)

{
  HCERTSTORE pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ee35e0;
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_14996c804;
    if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
      param_2 = *(undefined **)(param_1 + 0x28);
    }
  }
  FUN_144ee0070(param_1,"Opening certificate store %s\n",param_2);
  pvVar1 = CertOpenStore(&DAT_00000009,0,0,*(DWORD *)(param_1 + 0x38),param_2);
  if (pvVar1 == (HCERTSTORE)0x0) {
    if (DAT_14c797558 == 0) {
      DAT_14c797558 = FUN_144ba30c0();
    }
    FUN_144ba24f0(DAT_14c797558,0x6d,0x71,"engines\\e_capi.c",0x57b,uVar2);
    FUN_144edffa0();
  }
  return pvVar1;
}



// FUNCTION 144ee3680 FUN_144ee3680 body=517 status=ok
// SIG undefined FUN_144ee3680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_144ee3680(int *param_1,LPCWSTR param_2,wchar_t *param_3,DWORD param_4,DWORD param_5)

{
  WCHAR WVar1;
  WCHAR WVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  LPCWSTR pWVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ee369a;
  puVar4 = (undefined8 *)FUN_144ea64e0(0x20,"engines\\e_capi.c",0x5cb);
  if (puVar4 != (undefined8 *)0x0) {
    if ((param_4 == 1) && (DAT_14c797570 != 0)) {
      pWVar5 = param_3;
      do {
        WVar1 = *pWVar5;
        WVar2 = *(WCHAR *)((longlong)pWVar5 +
                          ((longlong)L"Microsoft Enhanced Cryptographic Provider v1.0" -
                          (longlong)param_3));
        if (WVar1 != WVar2) break;
        pWVar5 = pWVar5 + 1;
      } while (WVar2 != L'\0');
      if (WVar1 == WVar2) {
        param_3 = L"Microsoft Enhanced RSA and AES Cryptographic Provider";
        param_4 = 0x18;
      }
    }
    if (((param_1 != (int *)0x0) && (1 < *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
      uVar6 = FUN_144ee2d80(param_2);
      uVar7 = FUN_144ee2d80(param_3);
      FUN_144ee0070(param_1,"capi_get_key, contname=%s, provname=%s, type=%d\n",uVar6,uVar7,param_4,
                    uVar8);
      FUN_144ea6530(uVar7,"engines\\e_capi.c",0x5df);
      FUN_144ea6530(uVar6,"engines\\e_capi.c",0x5e0);
    }
    BVar3 = CryptAcquireContextW
                      (puVar4 + 1,param_2,param_3,param_4,(uint)param_1[0xe] >> 0xc & 0x20);
    if (BVar3 == 0) {
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x67,0x68,"engines\\e_capi.c",0x5e6);
      FUN_144edffa0();
    }
    else {
      BVar3 = CryptGetUserKey(puVar4[1],param_5,puVar4 + 2);
      if (BVar3 != 0) {
        *(DWORD *)(puVar4 + 3) = param_5;
        *puVar4 = 0;
        return puVar4;
      }
      if (DAT_14c797558 == 0) {
        DAT_14c797558 = FUN_144ba30c0();
      }
      FUN_144ba24f0(DAT_14c797558,0x67,0x75,"engines\\e_capi.c",0x5eb);
      FUN_144edffa0();
      CryptReleaseContext(puVar4[1],0);
    }
    FUN_144ea6530(puVar4,"engines\\e_capi.c",0x5f5);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144ee3890 FUN_144ee3890 body=111 status=ok
// SIG undefined FUN_144ee3890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3890(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee38a5;
  uVar2 = 0;
  puVar1 = (undefined8 *)FUN_144ee3130();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_144ee3680(param_1,*puVar1,puVar1[1],*(undefined4 *)(puVar1 + 2),
                          *(undefined4 *)(puVar1 + 5),uVar3);
  }
  FUN_144ea6530(puVar1,"engines\\e_capi.c",0x604);
  return uVar2;
}



// FUNCTION 144ee3900 FUN_144ee3900 body=160 status=ok
// SIG undefined FUN_144ee3900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_144babbf0();
  if (iVar1 < 1) {
    return 1;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_144babc00(param_1,iVar4);
      uVar3 = FUN_144bb4f40(param_2);
      iVar1 = FUN_144bb54b0(uVar2,uVar3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(param_1);
    } while (iVar4 < iVar1);
  }
  return 0;
}



// FUNCTION 144ee39a0 FUN_144ee39a0 body=190 status=ok
// SIG undefined FUN_144ee39a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee39a0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ee39ac;
  iVar1 = FUN_144e986c0(&DAT_14c797584,FUN_144ee3f00);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c797588;
  }
  if (iVar2 != 0) {
    lVar3 = FUN_144ea6670(0xd8,"crypto\\engine\\eng_lib.c",0x22);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x9c) = 1;
      iVar2 = FUN_144ea5c20(10,lVar3,lVar3 + 0xa8);
      if (iVar2 == 0) {
        FUN_144ea6530(lVar3,"crypto\\engine\\eng_lib.c",0x29);
        return 0;
      }
      return lVar3;
    }
  }
  FUN_144ba24f0(0x26,0x7a,0x41,"crypto\\engine\\eng_lib.c",0x23,uVar4);
  return 0;
}



// FUNCTION 144ee3a60 FUN_144ee3a60 body=131 status=ok
// SIG undefined FUN_144ee3a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3a60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x9c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144ed5000();
      FUN_145298210(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      FUN_145290c60(param_1,1);
      FUN_144ea6040(10,param_1,param_1 + 0xa8);
      FUN_144ea6530(param_1,"crypto\\engine\\eng_lib.c",0x62);
    }
  }
  return 1;
}



// FUNCTION 144ee3af0 FUN_144ee3af0 body=68 status=ok
// SIG undefined FUN_144ee3af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3af0(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_144ba24f0(0x26,0x81,0x43,"crypto\\engine\\eng_lib.c",199);
    return 0;
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 144ee3b40 FUN_144ee3b40 body=69 status=ok
// SIG undefined FUN_144ee3b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3b40(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_144ba24f0(0x26,0x82,0x43,"crypto\\engine\\eng_lib.c",0xd1);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 144ee3b90 FUN_144ee3b90 body=10 status=ok
// SIG undefined FUN_144ee3b90(void)

undefined8 FUN_144ee3b90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}



// FUNCTION 144ee3ba0 FUN_144ee3ba0 body=10 status=ok
// SIG undefined FUN_144ee3ba0(void)

undefined8 FUN_144ee3ba0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return 1;
}



// FUNCTION 144ee3bb0 FUN_144ee3bb0 body=10 status=ok
// SIG undefined FUN_144ee3bb0(void)

undefined8 FUN_144ee3bb0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return 1;
}



// FUNCTION 144ee3bc0 FUN_144ee3bc0 body=10 status=ok
// SIG undefined FUN_144ee3bc0(void)

undefined8 FUN_144ee3bc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return 1;
}



// FUNCTION 144ee3bd0 FUN_144ee3bd0 body=12 status=ok
// SIG undefined FUN_144ee3bd0(void)

undefined8 FUN_144ee3bd0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return 1;
}



// FUNCTION 144ee3be0 FUN_144ee3be0 body=13 status=ok
// SIG undefined FUN_144ee3be0(void)

undefined8 FUN_144ee3be0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return 1;
}



// FUNCTION 144ee3bf0 FUN_144ee3bf0 body=29 status=ok
// SIG undefined FUN_144ee3bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3bf0(longlong param_1)

{
  FUN_144ea6220(param_1 + 0xa8);
  return;
}



// FUNCTION 144ee3c10 FUN_144ee3c10 body=29 status=ok
// SIG undefined FUN_144ee3c10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3c10(longlong param_1)

{
  FUN_144ea6300(param_1 + 0xa8);
  return;
}



// FUNCTION 144ee3c30 FUN_144ee3c30 body=4 status=ok
// SIG undefined FUN_144ee3c30(void)

undefined8 FUN_144ee3c30(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144ee3c40 FUN_144ee3c40 body=8 status=ok
// SIG undefined FUN_144ee3c40(void)

undefined * FUN_144ee3c40(void)

{
  return &DAT_14c797580;
}



// FUNCTION 144ee3c50 FUN_144ee3c50 body=76 status=ok
// SIG undefined FUN_144ee3c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_14c797578 != 0) {
    FUN_144babe00(DAT_14c797578,FUN_144ee3f50,param_3,param_4,0x144ee3c5a);
    DAT_14c797578 = 0;
  }
  FUN_144e98660(DAT_14c797590);
  DAT_14c797590 = 0;
  return;
}



// FUNCTION 144ee3ca0 FUN_144ee3ca0 body=149 status=ok
// SIG undefined FUN_144ee3ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3ca0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee3cac;
  if (DAT_14c797578 == 0) {
    DAT_14c797578 = FUN_144babca0();
    if (DAT_14c797578 == 0) {
      return;
    }
  }
  puVar2 = (undefined8 *)FUN_144ea64e0(8,"crypto\\engine\\eng_lib.c");
  lVar1 = DAT_14c797578;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x83,uVar3);
    return;
  }
  *puVar2 = param_1;
  FUN_144bac010(lVar1,puVar2,0);
  return;
}



// FUNCTION 144ee3d40 FUN_144ee3d40 body=184 status=ok
// SIG undefined FUN_144ee3d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3d40(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ee3d4c;
  if ((DAT_14c797578 != 0) || (DAT_14c797578 = FUN_144babca0(), DAT_14c797578 != 0)) {
    puVar3 = (undefined8 *)FUN_144ea64e0(8,"crypto\\engine\\eng_lib.c");
    lVar1 = DAT_14c797578;
    if (puVar3 == (undefined8 *)0x0) {
      FUN_144ba24f0(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x83,uVar4);
      return;
    }
    *puVar3 = param_1;
    iVar2 = FUN_144bac1c0(lVar1,puVar3);
    if (iVar2 < 1) {
      FUN_144ea6530(puVar3,"crypto\\engine\\eng_lib.c",0x9d);
    }
  }
  return;
}



// FUNCTION 144ee3e00 FUN_144ee3e00 body=158 status=ok
// SIG undefined FUN_144ee3e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3e00(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    else {
      LOCK();
      piVar1 = (int *)(param_1 + 0x9c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar2 = iVar2 + -1;
    }
    if (iVar2 < 1) {
      FUN_144ed5000();
      FUN_145298210(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      FUN_145290c60(param_1,param_2);
      FUN_144ea6040(10,param_1,param_1 + 0xa8);
      FUN_144ea6530(param_1,"crypto\\engine\\eng_lib.c",0x62);
    }
  }
  return 1;
}



// FUNCTION 144ee3ea0 FUN_144ee3ea0 body=81 status=ok
// SIG undefined FUN_144ee3ea0(void)

void FUN_144ee3ea0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  return;
}



// FUNCTION 144ee3f00 FUN_144ee3f00 body=70 status=ok
// SIG undefined FUN_144ee3f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144bab1c0(0,0,param_3,param_4,0x144ee3f0a);
  if (iVar1 == 0) {
    DAT_14c797588 = 0;
    return;
  }
  DAT_14c797590 = FUN_144e985a0();
  DAT_14c797588 = (uint)(DAT_14c797590 != 0);
  return;
}



// FUNCTION 144ee3f50 FUN_144ee3f50 body=46 status=ok
// SIG undefined FUN_144ee3f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee3f50(undefined8 *param_1)

{
  (*(code *)*param_1)();
  FUN_144ea6530(param_1,"crypto\\engine\\eng_lib.c",0xa5);
  return;
}



// FUNCTION 144ee3f80 FUN_144ee3f80 body=8 status=ok
// SIG undefined FUN_144ee3f80(void)

undefined * FUN_144ee3f80(void)

{
  return &DAT_14c70ed90;
}



// FUNCTION 144ee3f90 FUN_144ee3f90 body=3 status=ok
// SIG undefined FUN_144ee3f90(void)

void FUN_144ee3f90(void)

{
  return;
}



// FUNCTION 144ee3fa0 FUN_144ee3fa0 body=364 status=ok
// SIG undefined FUN_144ee3fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee3fa0(void)

{
  int iVar1;
  
  iVar1 = FUN_144ba2e60();
  if (iVar1 != 0) {
    iVar1 = FUN_14529edd0();
    if (iVar1 != 0) {
      iVar1 = FUN_14529ef10();
      if (iVar1 != 0) {
        iVar1 = FUN_14529ef50();
        if (iVar1 != 0) {
          iVar1 = FUN_14529efd0();
          if (iVar1 != 0) {
            iVar1 = FUN_14529ee50();
            if (iVar1 != 0) {
              iVar1 = FUN_14529f010();
              if (iVar1 != 0) {
                iVar1 = FUN_14529f050();
                if (iVar1 != 0) {
                  iVar1 = FUN_14529ef90();
                  if (iVar1 != 0) {
                    iVar1 = FUN_14529f0d0();
                    if (iVar1 != 0) {
                      iVar1 = FUN_14529ed90();
                      if (iVar1 != 0) {
                        iVar1 = FUN_14529f150();
                        if (iVar1 != 0) {
                          iVar1 = FUN_14529f210();
                          if (iVar1 != 0) {
                            iVar1 = FUN_14529eed0();
                            if (iVar1 != 0) {
                              iVar1 = FUN_14529ee10();
                              if (iVar1 != 0) {
                                iVar1 = FUN_14529ee90();
                                if (iVar1 != 0) {
                                  iVar1 = FUN_14529f090();
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_14529f110();
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_14529f190();
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_14529f1d0();
                                        if (iVar1 != 0) {
                                          iVar1 = FUN_14529f250();
                                          if (iVar1 != 0) {
                                            iVar1 = FUN_14529f350();
                                            if (iVar1 != 0) {
                                              iVar1 = FUN_14529f290();
                                              if (iVar1 != 0) {
                                                iVar1 = FUN_14529f310();
                                                if (iVar1 != 0) {
                                                  iVar1 = FUN_14529f2d0();
                                                  if (iVar1 != 0) {
                                                    iVar1 = FUN_14529f390();
                                                    if (iVar1 != 0) {
                                                      iVar1 = FUN_14529f3d0();
                                                      if (iVar1 != 0) {
                                                        iVar1 = FUN_14529f410();
                                                        if (iVar1 != 0) {
                                                          iVar1 = FUN_14529f450();
                                                          if (iVar1 != 0) {
                                                            iVar1 = FUN_14529f490();
                                                            if (iVar1 != 0) {
                                                              return 1;
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
      }
    }
  }
  return 0;
}



// FUNCTION 144ee4110 FUN_144ee4110 body=22 status=ok
// SIG undefined FUN_144ee4110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee4110(void)

{
  FUN_14529f4d0();
  return;
}



// FUNCTION 144ee4130 FUN_144ee4130 body=43 status=ok
// SIG undefined FUN_144ee4130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee4130(void)

{
  FUN_144ba1cb0("oid_section",FUN_144ee4160,&DAT_144ee43b0);
  return;
}



// FUNCTION 144ee4160 FUN_144ee4160 body=580 status=ok
// SIG undefined FUN_144ee4160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee4160(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  void *_Dst;
  char *_Str;
  void *pvVar9;
  int iVar10;
  
  uVar5 = FUN_144ba1ce0();
  lVar6 = FUN_144ecf410(param_2,uVar5);
  if (lVar6 == 0) {
    FUN_144ba24f0(0xd,0xae,0xac,"crypto\\asn1\\asn_moid.c",0x20);
    return 0;
  }
  iVar10 = 0;
  iVar4 = FUN_144babbf0(lVar6);
  if (0 < iVar4) {
    do {
      lVar7 = FUN_144babc00(lVar6,iVar10);
      _Dst = (void *)0x0;
      _Str = *(char **)(lVar7 + 0x10);
      pvVar2 = *(void **)(lVar7 + 8);
      pcVar8 = strrchr(_Str,0x2c);
      pvVar9 = pvVar2;
      if (pcVar8 != (char *)0x0) {
        if (pcVar8[1] == '\0') goto LAB_144ee437e;
        iVar4 = FUN_144ecfdd0((int)pcVar8[1],8);
        pcVar3 = pcVar8;
        while (pcVar3 = pcVar3 + 1, iVar4 != 0) {
          iVar4 = FUN_144ecfdd0((int)pcVar3[1],8);
        }
        iVar4 = FUN_144ecfdd0((int)*_Str,8);
        while (iVar4 != 0) {
          pcVar1 = _Str + 1;
          _Str = _Str + 1;
          iVar4 = FUN_144ecfdd0((int)*pcVar1,8);
        }
        iVar4 = FUN_144ecfdd0((int)pcVar8[-1],8);
        while (pcVar8 = pcVar8 + -1, iVar4 != 0) {
          if (pcVar8 == _Str) goto LAB_144ee437e;
          iVar4 = FUN_144ecfdd0((int)pcVar8[-1],8);
        }
        pcVar8 = pcVar8 + (1 - (longlong)_Str);
        _Dst = (void *)FUN_144ea64e0(pcVar8 + 1,"crypto\\asn1\\asn_moid.c",0x56);
        if (_Dst == (void *)0x0) {
          FUN_144ba24f0(0xd,0x7c,0x41,"crypto\\asn1\\asn_moid.c",0x57);
          goto LAB_144ee437e;
        }
        memcpy(_Dst,_Str,(size_t)pcVar8);
        pcVar8[(longlong)_Dst] = '\0';
        _Str = pcVar3;
        pvVar9 = _Dst;
      }
      iVar4 = FUN_144ea9ad0(_Str,pvVar2,pvVar9);
      FUN_144ea6530(_Dst,"crypto\\asn1\\asn_moid.c",0x61);
      if (iVar4 == 0) {
LAB_144ee437e:
        FUN_144ba24f0(0xd,0xae,0xab,"crypto\\asn1\\asn_moid.c",0x26);
        return 0;
      }
      iVar10 = iVar10 + 1;
      iVar4 = FUN_144babbf0(lVar6);
    } while (iVar10 < iVar4);
  }
  return 1;
}



// FUNCTION 144ee43c0 FUN_144ee43c0 body=43 status=ok
// SIG undefined FUN_144ee43c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee43c0(void)

{
  FUN_144ba1cb0("stbl_section",FUN_144ee43f0,FUN_144ee47c0);
  return;
}



// FUNCTION 144ee43f0 FUN_144ee43f0 body=976 status=ok
// SIG undefined FUN_144ee43f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee43f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int local_res18 [2];
  int local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar16;
  char *local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar5 = FUN_144ba1ce0();
  lVar6 = FUN_144ecf410(param_2,uVar5);
  local_40 = lVar6;
  if (lVar6 == 0) {
    FUN_144ba24f0(0xd,0xdf,0xac,"crypto\\asn1\\asn_mstbl.c",0x1d);
    return 0;
  }
  iVar15 = 0;
  iVar1 = FUN_144babbf0(lVar6);
  if (0 < iVar1) {
    do {
      uVar12 = 0;
      lVar6 = FUN_144babc00(lVar6,iVar15);
      uVar3 = 0xffffffff;
      uVar14 = 0;
      local_res20 = 0;
      uVar4 = 0xffffffff;
      local_res18[0] = 0;
      uVar5 = *(undefined8 *)(lVar6 + 8);
      local_48 = *(undefined8 *)(lVar6 + 0x10);
      iVar1 = FUN_144ea96a0(uVar5);
      uVar8 = uVar12;
      if (((iVar1 == 0) && (iVar1 = FUN_144ea9580(uVar5), uVar7 = uVar12, iVar1 == 0)) ||
         (uVar7 = FUN_144ef6060(local_48), uVar7 == 0)) {
LAB_144ee455c:
        FUN_144ba24f0(0xd,0xde,0xda,"crypto\\asn1\\asn_mstbl.c",99);
        if (uVar8 == 0) {
          pcVar11 = "name=";
          in_stack_ffffffffffffff98 = local_48;
        }
        else {
          pcVar11 = "field=";
          uVar5 = *(undefined8 *)(uVar8 + 8);
          in_stack_ffffffffffffff98 = *(undefined8 *)(uVar8 + 0x10);
        }
        FUN_144ba2bd0(4,pcVar11,uVar5,", value=",in_stack_ffffffffffffff98);
      }
      else {
        iVar13 = 0;
        iVar2 = FUN_144babbf0(uVar7);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if (0 < iVar2) {
LAB_144ee4502:
          uVar8 = FUN_144babc00(uVar7);
          lVar6 = *(longlong *)(uVar8 + 8);
          lVar9 = 0;
          do {
            lVar10 = lVar9 + 1;
            if (*(char *)(lVar6 + lVar9) != (&DAT_14b3f2748)[lVar9]) {
              lVar9 = 0;
              goto LAB_144ee45b0;
            }
            lVar9 = lVar10;
          } while (lVar10 != 4);
          uVar3 = strtoul(*(char **)(uVar8 + 0x10),&local_50,0);
          if (*local_50 == '\0') goto LAB_144ee46bd;
          goto LAB_144ee455c;
        }
LAB_144ee46cf:
        in_stack_ffffffffffffff98 = CONCAT44(uVar16,uVar14);
        local_res20 = FUN_1452a1520(iVar1,uVar3,uVar4,local_res18[0],in_stack_ffffffffffffff98);
        if (local_res20 == 0) {
          in_stack_ffffffffffffff98 =
               CONCAT44((int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),0x6d);
          FUN_144ba24f0(0xd,0xde,0x41,"crypto\\asn1\\asn_mstbl.c",in_stack_ffffffffffffff98);
        }
      }
      FUN_144babe00(uVar7,FUN_144ef58f0);
      lVar6 = local_40;
      if (local_res20 == 0) {
        FUN_144ba24f0(0xd,0xdf,0xdb,"crypto\\asn1\\asn_mstbl.c",0x23);
        return 0;
      }
      iVar15 = iVar15 + 1;
      iVar1 = FUN_144babbf0(local_40);
    } while (iVar15 < iVar1);
  }
  return 1;
  while (lVar9 = lVar10, lVar10 != 4) {
LAB_144ee45b0:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != (&DAT_14b3f1684)[lVar9]) {
      lVar9 = 0;
      goto LAB_144ee4600;
    }
  }
  uVar4 = strtoul(*(char **)(uVar8 + 0x10),&local_50,0);
  if (*local_50 != '\0') goto LAB_144ee455c;
LAB_144ee46bd:
  uVar14 = (undefined4)uVar12;
  iVar13 = iVar13 + 1;
  iVar2 = FUN_144babbf0(uVar7);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (iVar2 <= iVar13) goto LAB_144ee46cf;
  goto LAB_144ee4502;
  while (lVar9 = lVar10, lVar10 != 5) {
LAB_144ee4600:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != (&DAT_149bff460)[lVar9]) {
      lVar9 = 0;
      goto LAB_144ee4650;
    }
  }
  iVar2 = FUN_1452a1800(*(undefined8 *)(uVar8 + 0x10),local_res18);
  if ((iVar2 == 0) || (local_res18[0] == 0)) goto LAB_144ee455c;
  goto LAB_144ee46bd;
  while (lVar9 = lVar10, lVar10 != 6) {
LAB_144ee4650:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != "flags"[lVar9]) goto LAB_144ee455c;
  }
  lVar6 = 0;
  do {
    lVar9 = lVar6;
    if (*(char *)(*(longlong *)(uVar8 + 0x10) + lVar9) != "nomask"[lVar9]) {
      lVar6 = 0;
      goto LAB_144ee46a2;
    }
    lVar6 = lVar9 + 1;
  } while (lVar9 + 1 != 7);
  uVar12 = (ulonglong)((int)lVar9 - 4);
  goto LAB_144ee46bd;
  while (lVar6 = lVar9 + 1, lVar9 + 1 != 5) {
LAB_144ee46a2:
    lVar9 = lVar6;
    if (*(char *)(*(longlong *)(uVar8 + 0x10) + lVar9) != (&DAT_149e62dd2)[lVar9])
    goto LAB_144ee455c;
  }
  uVar12 = (ulonglong)((int)lVar9 - 3);
  goto LAB_144ee46bd;
}



// FUNCTION 144ee47c0 FUN_144ee47c0 body=22 status=ok
// SIG undefined FUN_144ee47c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee47c0(void)

{
  FUN_1452a15c0();
  return;
}



// FUNCTION 144ee47e0 FUN_144ee47e0 body=39 status=ok
// SIG undefined FUN_144ee47e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee47e0(void)

{
  FUN_144ba1cb0("alg_section",FUN_144ee4810,0);
  return;
}



// FUNCTION 144ee4810 FUN_144ee4810 body=389 status=ok
// SIG undefined FUN_144ee4810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee4810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int local_res18 [4];
  undefined8 uVar6;
  
  uVar6 = 0x144ee4820;
  uVar2 = FUN_144ba1ce0();
  lVar3 = FUN_144ecf410(param_2,uVar2);
  if (lVar3 == 0) {
    FUN_144ba24f0(6,0xb1,0xa5,"crypto\\evp\\evp_cnf.c",0x1c,uVar6);
    return 0;
  }
  iVar5 = 0;
  iVar1 = FUN_144babbf0(lVar3);
  if (0 < iVar1) {
    do {
      lVar4 = FUN_144babc00(lVar3,iVar5);
      iVar1 = strcmp(*(char **)(lVar4 + 8),"fips_mode");
      if (iVar1 == 0) {
        iVar1 = FUN_144ef5960(lVar4,local_res18);
        if (iVar1 == 0) {
          FUN_144ba24f0(6,0xb1,0xa8,"crypto\\evp\\evp_cnf.c",0x24);
          return 0;
        }
        if (0 < local_res18[0]) {
          FUN_144ba24f0(6,0xb1,0xa7,"crypto\\evp\\evp_cnf.c",0x28);
          return 0;
        }
      }
      else {
        FUN_144ba24f0(6,0xb1,0xa9,"crypto\\evp\\evp_cnf.c",0x2c);
        FUN_144ba2bd0(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",*(undefined8 *)(lVar4 + 0x10))
        ;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_144babbf0(lVar3);
    } while (iVar5 < iVar1);
  }
  return 1;
}



// FUNCTION 144ee49a0 FUN_144ee49a0 body=43 status=ok
// SIG undefined FUN_144ee49a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee49a0(void)

{
  FUN_144ba1cb0("engines",FUN_144ee4a40,FUN_144ee4eb0);
  return;
}



// FUNCTION 144ee49d0 FUN_144ee49d0 body=98 status=ok
// SIG undefined FUN_144ee49d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee49d0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ec6850();
  if (iVar1 == 0) {
    return 0;
  }
  if (((DAT_14c7975a0 != 0) || (DAT_14c7975a0 = FUN_144babca0(), DAT_14c7975a0 != 0)) &&
     (iVar1 = FUN_144bac1c0(DAT_14c7975a0,param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_144ec6930(param_1);
  return 0;
}



// FUNCTION 144ee4a40 FUN_144ee4a40 body=1128 status=ok
// SIG undefined FUN_144ee4a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000144ee4cc4) */

undefined8 FUN_144ee4a40(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar15;
  char *_Str;
  bool bVar16;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar17;
  int local_58;
  ulonglong uVar14;
  
  uVar3 = FUN_144ba1ce0();
  lVar4 = FUN_144ecf410(param_2,uVar3);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x26,0xbb,0x94,"crypto\\engine\\eng_cnf.c",0xa5);
    return 0;
  }
  local_58 = 0;
  iVar2 = FUN_144babbf0(lVar4);
  if (0 < iVar2) {
    do {
      uVar14 = 0;
      lVar5 = FUN_144babc00(lVar4,local_58);
      bVar1 = false;
      _Str = *(char **)(lVar5 + 8);
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
      pcVar6 = strchr(_Str,0x2e);
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6 + 1;
      }
      lVar5 = FUN_144ecf410(param_2,uVar3);
      if (lVar5 == 0) {
        FUN_144ba24f0(0x26,0xbc,0x95,"crypto\\engine\\eng_cnf.c",0x3d);
        return 0;
      }
      iVar2 = FUN_144babbf0(lVar5);
      uVar9 = uVar14;
      uVar15 = uVar14;
      if (iVar2 < 1) {
LAB_144ee4e08:
        bVar1 = true;
      }
      else {
        do {
          puVar7 = (undefined8 *)FUN_144babc00(lVar5,uVar14);
          pcVar6 = (char *)puVar7[1];
          pcVar8 = strchr(pcVar6,0x2e);
          if (pcVar8 != (char *)0x0) {
            pcVar6 = pcVar8 + 1;
          }
          pcVar8 = (char *)puVar7[2];
          iVar2 = strcmp(pcVar6,"engine_id");
          if (iVar2 != 0) {
            iVar2 = strcmp(pcVar6,"soft_load");
            if (iVar2 == 0) {
              uVar15 = 1;
              pcVar8 = _Str;
            }
            else {
              iVar2 = strcmp(pcVar6,"dynamic_path");
              if (iVar2 == 0) {
                uVar9 = FUN_1452908d0("dynamic");
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                if (uVar9 == 0) goto LAB_144ee4d9a;
                iVar2 = FUN_1452a2ba0(uVar9,"SO_PATH",pcVar8);
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                if (iVar2 == 0) goto LAB_144ee4d9a;
                iVar2 = FUN_1452a2ba0(uVar9,"LIST_ADD",&DAT_149e377d2);
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                if (iVar2 == 0) goto LAB_144ee4d9a;
                pcVar8 = (char *)0x0;
                pcVar6 = "LOAD";
LAB_144ee4d1f:
                iVar2 = FUN_1452a2ba0(uVar9,pcVar6,pcVar8);
              }
              else {
                if (uVar9 == 0) {
                  uVar9 = FUN_1452908d0(_Str);
                  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                  if (uVar9 == 0) {
                    if ((int)uVar15 == 0) goto LAB_144ee4d9a;
                    FUN_144ba26f0();
                    goto LAB_144ee4e25;
                  }
                }
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                pcVar11 = (char *)0x0;
                pcVar12 = pcVar11;
                do {
                  pcVar10 = pcVar12;
                  bVar16 = pcVar8[(longlong)pcVar10] == pcVar10[0x149bff4f8];
                  if (!bVar16) goto LAB_144ee4c6a;
                  pcVar12 = pcVar10 + 1;
                } while (pcVar10 + 1 != &DAT_00000006);
                bVar16 = pcVar8[(longlong)pcVar10] == pcVar10[0x149bff4f8];
LAB_144ee4c6a:
                if (bVar16) {
                  pcVar8 = pcVar11;
                }
                while (pcVar12 = pcVar11 + 1, pcVar6[(longlong)pcVar11] == pcVar11[0x14b3f27c8]) {
                  pcVar11 = pcVar12;
                  if (pcVar12 == (char *)0x5) {
                    iVar2 = FUN_144ecf530(param_2,uVar3,&DAT_14b3f27c8);
                    if (iVar2 != 0) {
                      uVar3 = CONCAT44(uVar17,0x7a);
                      FUN_144ba24f0(0x26,0xbc,0x97,"crypto\\engine\\eng_cnf.c",uVar3);
                      uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
                    }
                    goto LAB_144ee4d9a;
                  }
                }
                iVar2 = strcmp(pcVar6,"default_algorithms");
                if (iVar2 != 0) goto LAB_144ee4d1f;
                iVar2 = FUN_144ede6e0(uVar9,pcVar8);
              }
              uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
              pcVar8 = _Str;
              if (iVar2 == 0) goto LAB_144ee4d9a;
            }
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          iVar2 = FUN_144babbf0(lVar5);
          _Str = pcVar8;
        } while ((int)uVar13 < iVar2);
        if (uVar9 == 0) goto LAB_144ee4e08;
        iVar2 = FUN_144ec6850(uVar9);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
        if (iVar2 != 0) {
          if (DAT_14c7975a0 == 0) {
            DAT_14c7975a0 = FUN_144babca0();
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
            if (DAT_14c7975a0 != 0) goto LAB_144ee4d80;
          }
          else {
LAB_144ee4d80:
            iVar2 = FUN_144bac1c0(DAT_14c7975a0,uVar9);
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
            if (iVar2 != 0) goto LAB_144ee4e08;
          }
          FUN_144ec6930(uVar9);
        }
        puVar7 = (undefined8 *)0x0;
LAB_144ee4d9a:
        in_stack_ffffffffffffff88 = CONCAT44(uVar17,0x8d);
        FUN_144ba24f0(0x26,0xbc,0x66,"crypto\\engine\\eng_cnf.c",in_stack_ffffffffffffff88);
        if (puVar7 != (undefined8 *)0x0) {
          in_stack_ffffffffffffff88 = puVar7[1];
          FUN_144ba2bd0(6,"section=",*puVar7,", name=",in_stack_ffffffffffffff88,", value=",
                        puVar7[2]);
        }
      }
      FUN_144ee3a60(uVar9);
      if (!bVar1) {
        return 0;
      }
LAB_144ee4e25:
      local_58 = local_58 + 1;
      iVar2 = FUN_144babbf0(lVar4);
    } while (local_58 < iVar2);
  }
  return 1;
}



// FUNCTION 144ee4eb0 FUN_144ee4eb0 body=85 status=ok
// SIG undefined FUN_144ee4eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee4eb0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144bac250(DAT_14c7975a0);
  while (lVar1 != 0) {
    FUN_144ec6930(lVar1);
    lVar1 = FUN_144bac250(DAT_14c7975a0);
  }
  FUN_144babdb0(DAT_14c7975a0);
  DAT_14c7975a0 = 0;
  return;
}



// FUNCTION 144ee4f10 FUN_144ee4f10 body=33 status=ok
// SIG undefined FUN_144ee4f10(void)

undefined8 FUN_144ee4f10(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(DAT_14c7975a8 + param_1 * 0x18);
  *param_2 = *puVar1;
  *param_3 = puVar1[2];
  return puVar1[1];
}



// FUNCTION 144ee4f40 FUN_144ee4f40 body=131 status=ok
// SIG undefined FUN_144ee4f40(void)

undefined8 FUN_144ee4f40(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if ((param_1 != 0) && (uVar5 = 0, puVar6 = DAT_14c7975a8, DAT_14c7975b0 != 0)) {
    do {
      pcVar3 = (char *)*puVar6;
      lVar4 = param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        *param_2 = uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar5 < DAT_14c7975b0);
  }
  return 0;
}



// FUNCTION 144ee4fd0 FUN_144ee4fd0 body=19 status=ok
// SIG undefined FUN_144ee4fd0(void)

void FUN_144ee4fd0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = *(undefined8 *)(param_1 + param_2 * 0x10);
  *param_4 = *(undefined8 *)(param_1 + 8 + param_2 * 0x10);
  return;
}



// FUNCTION 144ee4ff0 FUN_144ee4ff0 body=43 status=ok
// SIG undefined FUN_144ee4ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee4ff0(void)

{
  FUN_144ba1cb0("ssl_conf",FUN_144ee5150,FUN_144ee5020);
  return;
}



// FUNCTION 144ee5020 FUN_144ee5020 body=300 status=ok
// SIG undefined FUN_144ee5020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee5020(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (DAT_14c7975a8 != 0) {
    uVar3 = 0;
    if (DAT_14c7975b0 != 0) {
      lVar5 = 0;
      do {
        lVar1 = DAT_14c7975a8;
        FUN_144ea6530(*(undefined8 *)(lVar5 + DAT_14c7975a8),"crypto\\conf\\conf_ssl.c",0x31);
        uVar4 = 0;
        if (*(longlong *)(lVar5 + 0x10 + lVar1) != 0) {
          lVar2 = 0;
          do {
            FUN_144ea6530(*(undefined8 *)(*(longlong *)(lVar5 + 8 + lVar1) + lVar2),
                          "crypto\\conf\\conf_ssl.c",0x33);
            FUN_144ea6530(*(undefined8 *)(*(longlong *)(lVar5 + 8 + lVar1) + 8 + lVar2),
                          "crypto\\conf\\conf_ssl.c",0x34);
            uVar4 = uVar4 + 1;
            lVar2 = lVar2 + 0x10;
          } while (uVar4 < *(ulonglong *)(lVar5 + 0x10 + lVar1));
        }
        FUN_144ea6530(*(undefined8 *)(lVar5 + 8 + lVar1),"crypto\\conf\\conf_ssl.c",0x36);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar3 < DAT_14c7975b0);
    }
    FUN_144ea6530(DAT_14c7975a8,"crypto\\conf\\conf_ssl.c",0x38);
    DAT_14c7975a8 = 0;
    DAT_14c7975b0 = 0;
  }
  return;
}



// FUNCTION 144ee5150 FUN_144ee5150 body=736 status=ok
// SIG undefined FUN_144ee5150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee5150(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong local_res18;
  undefined8 uVar14;
  
  uVar4 = FUN_144ba1ce0();
  lVar5 = FUN_144ecf410(param_2,uVar4);
  iVar3 = FUN_144babbf0(lVar5);
  if (iVar3 < 1) {
    if (lVar5 == 0) {
      uVar14 = 0x48;
      uVar12 = 0x78;
    }
    else {
      uVar14 = 0x4a;
      uVar12 = 0x77;
    }
    FUN_144ba24f0(0xe,0x7b,uVar12,"crypto\\conf\\conf_ssl.c",uVar14);
    FUN_144ba2bd0(2,"section=",uVar4);
  }
  else {
    iVar3 = FUN_144babbf0(lVar5);
    uVar10 = (ulonglong)iVar3;
    FUN_144ee5020(param_1);
    DAT_14c7975a8 = FUN_144ea6670(uVar10 * 0x18,"crypto\\conf\\conf_ssl.c",0x50);
    if (DAT_14c7975a8 != 0) {
      uVar13 = 0;
      DAT_14c7975b0 = uVar10;
      if (uVar10 != 0) {
        local_res18 = 0;
        do {
          plVar1 = (longlong *)(local_res18 + DAT_14c7975a8);
          lVar6 = FUN_144babc00(lVar5,uVar13 & 0xffffffff);
          lVar7 = FUN_144ecf410(param_2,*(undefined8 *)(lVar6 + 0x10));
          iVar3 = FUN_144babbf0(lVar7);
          if (iVar3 < 1) {
            if (lVar7 == 0) {
              uVar14 = 0x5c;
              uVar4 = 0x76;
            }
            else {
              uVar14 = 0x5f;
              uVar4 = 0x75;
            }
            FUN_144ba24f0(0xe,0x7b,uVar4,"crypto\\conf\\conf_ssl.c",uVar14);
            FUN_144ba2bd0(4,"name=",*(undefined8 *)(lVar6 + 8),", value=",
                          *(undefined8 *)(lVar6 + 0x10));
            goto LAB_144ee51e9;
          }
          lVar6 = FUN_144ea6dc0(*(undefined8 *)(lVar6 + 8),"crypto\\conf\\conf_ssl.c",99);
          *plVar1 = lVar6;
          if (lVar6 == 0) goto LAB_144ee51e9;
          iVar3 = FUN_144babbf0(lVar7);
          uVar10 = (ulonglong)iVar3;
          lVar6 = FUN_144ea6670(uVar10 << 4,"crypto\\conf\\conf_ssl.c",0x67);
          plVar1[1] = lVar6;
          if (lVar6 == 0) goto LAB_144ee51e9;
          uVar11 = 0;
          plVar1[2] = uVar10;
          if (uVar10 != 0) {
            lVar6 = 0;
            do {
              lVar8 = FUN_144babc00(lVar7,uVar11 & 0xffffffff);
              lVar2 = plVar1[1];
              pcVar9 = strchr(*(char **)(lVar8 + 8),0x2e);
              if (pcVar9 == (char *)0x0) {
                pcVar9 = *(char **)(lVar8 + 8);
              }
              else {
                pcVar9 = pcVar9 + 1;
              }
              uVar4 = FUN_144ea6dc0(pcVar9,"crypto\\conf\\conf_ssl.c",0x76);
              *(undefined8 *)(lVar2 + lVar6) = uVar4;
              lVar8 = FUN_144ea6dc0(*(undefined8 *)(lVar8 + 0x10),"crypto\\conf\\conf_ssl.c",0x77);
              *(longlong *)(lVar2 + 8 + lVar6) = lVar8;
              if ((*(longlong *)(lVar2 + lVar6) == 0) || (lVar8 == 0)) goto LAB_144ee51e9;
              uVar11 = uVar11 + 1;
              lVar6 = lVar6 + 0x10;
            } while (uVar11 < uVar10);
          }
          uVar13 = uVar13 + 1;
          local_res18 = local_res18 + 0x18;
        } while (uVar13 < DAT_14c7975b0);
      }
      return 1;
    }
  }
LAB_144ee51e9:
  FUN_144ee5020(param_1);
  return 0;
}



// FUNCTION 144ee54b0 FUN_144ee54b0 body=2156 status=ok
// SIG undefined FUN_144ee54b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee54b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_res8;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar18 = 0x144ee54ca;
  plVar1 = *(longlong **)(param_1 + 8);
  lVar9 = 0;
  local_res8 = 0;
  local_res18 = 0;
  lVar12 = 0;
  lVar13 = 0;
  lVar16 = 0;
  lVar15 = 0;
  if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    uVar17 = 0x255;
    uVar14 = 0x73;
LAB_144ee5569:
    FUN_144ba24f0(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar17,uVar18);
    lVar12 = lVar9;
    local_res8 = lVar9;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 == (undefined8 *)0x0) ||
        (puVar3 = (undefined4 *)*puVar2, puVar3 == (undefined4 *)0x0)) ||
       ((*(longlong *)(puVar3 + 2) == 0 || ((puVar2[1] == 0 || (*(longlong *)(puVar2[1] + 8) == 0)))
        ))) {
      uVar17 = 0x262;
      uVar14 = 0x73;
      goto LAB_144ee5569;
    }
    lVar16 = FUN_144ba0740(*(longlong *)(puVar3 + 2),*puVar3,0);
    if (lVar16 == 0) {
      uVar17 = 0x267;
      lVar15 = lVar9;
LAB_144ee5563:
      uVar14 = 3;
      lVar13 = lVar9;
      goto LAB_144ee5569;
    }
    puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
    lVar15 = FUN_144ba0740(*(undefined8 *)(puVar3 + 2),*puVar3,0);
    if (lVar15 == 0) {
      uVar17 = 0x26c;
      goto LAB_144ee5563;
    }
    iVar6 = FUN_144ea8fa0(**(undefined8 **)(param_1 + 8));
    if (iVar6 != 0x197) {
      if (iVar6 == 0x196) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        if (lVar10 == 0) {
          uVar17 = CONCAT44(uVar14,0x2d0);
          uVar14 = 0x73;
        }
        else {
          lVar13 = FUN_144ef1230(lVar10,0);
          if (lVar13 == 0) {
            uVar17 = 0x2d5;
            uVar14 = 0xd;
          }
          else {
            iVar6 = FUN_144ba0ba0(lVar13);
            if ((iVar6 == 0) && (iVar6 = FUN_144ba0340(lVar13), iVar6 == 0)) {
              iVar6 = FUN_144ba03d0(lVar13);
              if (0x295 < iVar6) {
                uVar17 = CONCAT44(uVar14,0x2e0);
                goto LAB_144ee55e2;
              }
              lVar12 = FUN_1452a34b0(lVar13,lVar16,lVar15,0);
LAB_144ee58ff:
              lVar9 = local_res8;
              if (lVar12 == 0) {
                FUN_144ba24f0(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2ec));
                goto LAB_144ee56d3;
              }
              piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
              if (piVar4 == (int *)0x0) {
LAB_144ee5a09:
                if ((((*(longlong *)(param_1 + 0x20) != 0) &&
                     (piVar4 = *(int **)(param_1 + 0x18), piVar4 != (int *)0x0)) &&
                    (*(longlong *)(piVar4 + 2) != 0)) && (*piVar4 != 0)) {
                  lVar9 = FUN_144efc690(lVar12);
                  if (lVar9 != 0) {
                    FUN_144efc220(lVar12,**(byte **)(*(longlong *)(param_1 + 0x18) + 8) & 0xfe);
                    uVar14 = 0;
                    iVar7 = FUN_145298bf0(lVar12,lVar9,
                                          *(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                                          (longlong)**(int **)(param_1 + 0x18),0);
                    if (iVar7 != 0) {
                      lVar10 = FUN_144ef1230(*(undefined8 *)(param_1 + 0x20),lVar16);
                      if (lVar10 == 0) {
                        uVar18 = CONCAT44(uVar14,0x31e);
LAB_144ee5abe:
                        uVar14 = 0xd;
                      }
                      else {
                        iVar7 = FUN_144ba0ba0(lVar16);
                        if ((iVar7 == 0) && (iVar7 = FUN_144ba0340(lVar16), iVar7 == 0)) {
                          iVar7 = FUN_144ba03d0(lVar16);
                          if (iVar6 + 1 < iVar7) {
                            FUN_144ba24f0(0x10,0x107,0x7a,"crypto\\ec\\ec_asn1.c",
                                          CONCAT44(uVar14,0x326));
                            local_res8 = 0;
                            goto LAB_144ee56d3;
                          }
                          if (*(longlong *)(param_1 + 0x28) == 0) {
                            FUN_144ba0cd0(lVar15);
                            lVar15 = 0;
                          }
                          else {
                            lVar10 = FUN_144ef1230(*(longlong *)(param_1 + 0x28),lVar15);
                            if (lVar10 == 0) {
                              uVar18 = CONCAT44(uVar14,0x32f);
                              goto LAB_144ee5abe;
                            }
                          }
                          iVar6 = FUN_144efbf00(lVar12,lVar9,lVar16,lVar15);
                          if (iVar6 == 0) {
                            uVar18 = CONCAT44(uVar14,0x334);
                            uVar14 = 0x10;
                          }
                          else {
                            local_res18 = FUN_144eedd20();
                            if (local_res18 != 0) {
                              local_res8 = FUN_144efbe70(lVar12);
                              if (((local_res8 == 0) ||
                                  (lVar10 = FUN_144efc260(local_res8,0,0), lVar10 != 1)) ||
                                 (iVar6 = FUN_144efbf00(local_res8,lVar9,lVar16,0), iVar6 == 0)) {
                                FUN_144ba24f0(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",
                                              CONCAT44(uVar14,0x34b));
                              }
                              else {
                                iVar6 = FUN_14527ffd0(local_res8,local_res18);
                                lVar10 = lVar12;
                                if (iVar6 == 0) goto LAB_144ee56dd;
                                lVar10 = FUN_14527fe90(iVar6);
                                if (lVar10 == 0) {
                                  FUN_144ba24f0(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",
                                                CONCAT44(uVar14,0x364));
                                }
                                else {
                                  FUN_144efba20(lVar12);
                                  FUN_144efc200(lVar10,0);
                                  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) ||
                                     (lVar11 = FUN_144efc260(lVar10,0,0), lVar12 = lVar10,
                                     lVar11 == 1)) goto LAB_144ee56dd;
                                }
                              }
                              goto LAB_144ee56d3;
                            }
                            uVar18 = CONCAT44(uVar14,0x345);
                            uVar14 = 3;
                          }
                        }
                        else {
                          uVar18 = CONCAT44(uVar14,0x322);
                          uVar14 = 0x7a;
                        }
                      }
                      FUN_144ba24f0(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar18);
                      local_res8 = 0;
                      goto LAB_144ee56d3;
                    }
                    FUN_144ba24f0(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x318));
                  }
                  local_res8 = 0;
                  goto LAB_144ee56d3;
                }
                uVar18 = 0x30a;
              }
              else {
                if (*piVar4 != 0) {
                  FUN_144ea6530(*(undefined8 *)(lVar12 + 0x30),"crypto\\ec\\ec_asn1.c",0x2fc);
                  _Dst = (void *)FUN_144ea64e0((longlong)
                                               **(int **)(*(longlong *)(param_1 + 0x10) + 0x10),
                                               "crypto\\ec\\ec_asn1.c",0x2fd);
                  *(void **)(lVar12 + 0x30) = _Dst;
                  if (_Dst == (void *)0x0) {
                    FUN_144ba24f0(0x10,0x107,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2fe));
                    local_res8 = 0;
                    lVar9 = local_res8;
                    goto LAB_144ee56d3;
                  }
                  piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                  memcpy(_Dst,*(void **)(piVar4 + 2),(longlong)*piVar4);
                  *(longlong *)(lVar12 + 0x38) =
                       (longlong)**(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                  goto LAB_144ee5a09;
                }
                uVar18 = CONCAT44(uVar14,0x2f9);
              }
              FUN_144ba24f0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",uVar18);
              goto LAB_144ee56d3;
            }
            uVar17 = 0x2da;
            uVar14 = 0x67;
          }
        }
      }
      else {
        uVar17 = CONCAT44(uVar14,0x2e7);
        uVar14 = 0x67;
      }
      goto LAB_144ee5569;
    }
    piVar4 = *(int **)(*(longlong *)(param_1 + 8) + 8);
    iVar6 = *piVar4;
    if (iVar6 < 0x296) {
      lVar13 = FUN_144ba0570();
      if (lVar13 == 0) {
        FUN_144ba24f0(0x10,0x107,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x285),uVar18);
        local_res8 = 0;
        lVar9 = 0;
      }
      else {
        iVar7 = FUN_144ea8fa0(*(undefined8 *)(piVar4 + 2));
        if (iVar7 == 0x2aa) {
          if (*(longlong *)(piVar4 + 4) == 0) {
            FUN_144ba24f0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x290));
            local_res8 = 0;
            lVar9 = 0;
          }
          else {
            iVar7 = FUN_144ef1170();
            if ((*piVar4 <= iVar7) || (iVar7 < 1)) {
              uVar18 = CONCAT44(uVar14,0x298);
              uVar14 = 0x89;
              goto LAB_144ee56c8;
            }
            iVar8 = FUN_144ba0f40(lVar13);
            if (iVar8 != 0) {
LAB_144ee57b8:
              iVar7 = FUN_144ba0f40(lVar13,iVar7);
              if ((iVar7 != 0) && (iVar7 = FUN_144ba0f40(lVar13,0), iVar7 != 0)) {
                lVar12 = FUN_1452a3540(lVar13,lVar16,lVar15,0);
                goto LAB_144ee58ff;
              }
            }
LAB_144ee56cd:
            local_res8 = 0;
            lVar9 = 0;
          }
        }
        else {
          if (iVar7 == 0x2ab) {
            piVar5 = *(int **)(piVar4 + 4);
            if (piVar5 == (int *)0x0) {
              uVar18 = CONCAT44(uVar14,0x2a8);
              uVar14 = 0x73;
            }
            else {
              if ((((piVar5[2] < *piVar4) && (piVar5[1] < piVar5[2])) && (*piVar5 < piVar5[1])) &&
                 (0 < *piVar5)) {
                iVar7 = FUN_144ba0f40(lVar13);
                if (((iVar7 != 0) && (iVar7 = FUN_144ba0f40(lVar13,*piVar5), iVar7 != 0)) &&
                   (iVar7 = FUN_144ba0f40(lVar13,piVar5[1]), iVar7 != 0)) {
                  iVar7 = piVar5[2];
                  goto LAB_144ee57b8;
                }
                goto LAB_144ee56cd;
              }
              uVar18 = CONCAT44(uVar14,0x2b0);
              uVar14 = 0x84;
            }
LAB_144ee56c8:
            FUN_144ba24f0(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar18);
            goto LAB_144ee56cd;
          }
          if (iVar7 == 0x2a9) {
            FUN_144ba24f0(0x10,0x107,0x7e,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2c0));
            local_res8 = 0;
            lVar9 = 0;
          }
          else {
            FUN_144ba24f0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2c4));
            local_res8 = 0;
            lVar9 = 0;
          }
        }
      }
    }
    else {
      uVar17 = CONCAT44(uVar14,0x280);
      lVar13 = lVar9;
LAB_144ee55e2:
      FUN_144ba24f0(0x10,0x107,0x8f,"crypto\\ec\\ec_asn1.c",uVar17,uVar18);
      local_res8 = 0;
    }
  }
LAB_144ee56d3:
  FUN_144efba20(lVar12);
  lVar10 = 0;
LAB_144ee56dd:
  FUN_144efba20(local_res8);
  FUN_144ba0cd0(lVar13);
  FUN_144ba0cd0(lVar16);
  FUN_144ba0cd0(lVar15);
  FUN_144efc7a0(lVar9);
  FUN_144eeddc0(local_res18);
  return lVar10;
}



// FUNCTION 144ee5d20 FUN_144ee5d20 body=561 status=ok
// SIG undefined FUN_144ee5d20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144ee5d20(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x144ee5d3a;
  local_res10 = 0;
  puVar2 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_144efec20(&DAT_149bff8f0), puVar2 == (undefined4 *)0x0)) {
    FUN_144ba24f0(0x10,0x105,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar5,0x1cb),uVar8);
    goto LAB_144ee5f26;
  }
  *puVar2 = 1;
  iVar1 = FUN_144ee6eb0(param_1,*(undefined8 *)(puVar2 + 2));
  if (iVar1 == 0) {
    uVar6 = CONCAT44(uVar5,0x1d6);
    uVar5 = 0x10;
  }
  else {
    iVar1 = FUN_144ee71a0(param_1,*(undefined8 *)(puVar2 + 4));
    if (iVar1 == 0) {
      uVar6 = CONCAT44(uVar5,0x1dc);
      uVar5 = 0x10;
    }
    else {
      lVar3 = FUN_144efc0f0(param_1);
      if (lVar3 == 0) {
        uVar6 = CONCAT44(uVar5,0x1e2);
        uVar5 = 0x71;
      }
      else {
        uVar5 = FUN_144efc230(param_1);
        uVar7 = 0;
        uVar4 = FUN_145298cb0(param_1,lVar3,uVar5,&local_res10,0);
        if (uVar4 == 0) {
          uVar6 = CONCAT44(uVar7,0x1ea);
          uVar5 = 0x10;
        }
        else {
          if (*(longlong *)(puVar2 + 6) == 0) {
            lVar3 = FUN_144efe930();
            *(longlong *)(puVar2 + 6) = lVar3;
            if (lVar3 == 0) {
              FUN_144ea6530(local_res10,"crypto\\ec\\ec_asn1.c",0x1ee);
              uVar5 = 0x41;
              uVar6 = CONCAT44(uVar7,0x1ef);
              goto LAB_144ee5f10;
            }
          }
          FUN_144f03e20(*(undefined8 *)(puVar2 + 6),local_res10,uVar4 & 0xffffffff);
          lVar3 = FUN_144efc150(param_1);
          if (lVar3 == 0) {
            uVar6 = CONCAT44(uVar7,0x1f7);
            uVar5 = 0x10;
          }
          else {
            uVar6 = *(undefined8 *)(puVar2 + 8);
            lVar3 = FUN_144ef1210(lVar3,uVar6);
            *(longlong *)(puVar2 + 8) = lVar3;
            if (lVar3 == 0) {
              *(undefined8 *)(puVar2 + 8) = uVar6;
              uVar6 = CONCAT44(uVar7,0x1fd);
            }
            else {
              lVar3 = FUN_144efc1d0(param_1);
              if (lVar3 == 0) {
                return puVar2;
              }
              uVar6 = *(undefined8 *)(puVar2 + 10);
              lVar3 = FUN_144ef1210(lVar3,uVar6);
              *(longlong *)(puVar2 + 10) = lVar3;
              if (lVar3 != 0) {
                return puVar2;
              }
              *(undefined8 *)(puVar2 + 10) = uVar6;
              uVar6 = CONCAT44(uVar7,0x207);
            }
            uVar5 = 0xd;
          }
        }
      }
    }
  }
LAB_144ee5f10:
  FUN_144ba24f0(0x10,0x105,uVar5,"crypto\\ec\\ec_asn1.c",uVar6,uVar8);
  if (param_2 != (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_144ee5f26:
  FUN_144eff330(puVar2,&DAT_149bff8f0);
  return (undefined4 *)0x0;
}



// FUNCTION 144ee5f60 FUN_144ee5f60 body=248 status=ok
// SIG undefined FUN_144ee5f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee5f60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_144ba24f0(0x10,0x108,0x7c,"crypto\\ec\\ec_asn1.c",0x398);
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 2));
    lVar3 = FUN_14527fe90(uVar2);
    if (lVar3 != 0) {
      FUN_144efc200(lVar3,1);
      return lVar3;
    }
    uVar4 = 0x3a1;
    uVar2 = 0x77;
  }
  else if (iVar1 == 1) {
    lVar3 = FUN_144ee54b0(*(undefined8 *)(param_1 + 2));
    if (lVar3 != 0) {
      FUN_144efc200(lVar3,0);
      return lVar3;
    }
    uVar4 = 0x3a9;
    uVar2 = 0x10;
  }
  else {
    if (iVar1 == 2) {
      return 0;
    }
    uVar4 = 0x3b1;
    uVar2 = 0x73;
  }
  FUN_144ba24f0(0x10,0x108,uVar2,"crypto\\ec\\ec_asn1.c",uVar4);
  return 0;
}



// FUNCTION 144ee6060 FUN_144ee6060 body=309 status=ok
// SIG undefined FUN_144ee6060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144ee6060(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ee6070;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_144efec20(&DAT_149bff980);
    if (param_2 == (int *)0x0) {
      FUN_144ba24f0(0x10,0x106,0x41,"crypto\\ec\\ec_asn1.c",0x21c,uVar4);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 0) {
    FUN_144ed0860(*(undefined8 *)(param_2 + 2));
  }
  else if ((*param_2 == 1) && (*(longlong *)(param_2 + 2) != 0)) {
    FUN_144eff330(*(longlong *)(param_2 + 2),&DAT_149bff8f0);
  }
  iVar1 = FUN_144efc210(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_144efc1f0();
    if (iVar1 != 0) {
      lVar2 = FUN_144ea8d60(iVar1);
      if ((lVar2 != 0) && (lVar3 = FUN_144ea9be0(lVar2), lVar3 != 0)) {
        *param_2 = 0;
        *(longlong *)(param_2 + 2) = lVar2;
        return param_2;
      }
      FUN_144ed0860(lVar2);
      FUN_144ba24f0(0x10,0x106,0xa7,"crypto\\ec\\ec_asn1.c",0x231);
    }
  }
  else {
    *param_2 = 1;
    lVar2 = FUN_144ee5d20(param_1,0);
    *(longlong *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      return param_2;
    }
  }
  FUN_144eff330(param_2,&DAT_149bff980);
  return (int *)0x0;
}



// FUNCTION 144ee61a0 FUN_144ee61a0 body=121 status=ok
// SIG undefined FUN_144ee61a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ee61a0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar3 = FUN_144efbee0();
  iVar2 = FUN_144efbef0(uVar3);
  if (iVar2 != 0x197) {
    return 0;
  }
  piVar4 = (int *)(param_1 + 0x48);
  iVar2 = 0;
  lVar5 = 0;
  do {
    if (*piVar4 == 0) break;
    iVar2 = iVar2 + 1;
    lVar5 = lVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (lVar5 < 6);
  if (iVar2 == 4) {
    return 0x2ab;
  }
  uVar1 = 0;
  if (iVar2 == 2) {
    uVar1 = 0x2aa;
  }
  return uVar1;
}



// FUNCTION 144ee6220 FUN_144ee6220 body=139 status=ok
// SIG undefined FUN_144ee6220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee6220(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee6230;
  if (param_1 != 0) {
    uVar2 = FUN_144efbee0();
    iVar1 = FUN_144efbef0(uVar2);
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (*(int *)(param_1 + 0x50) == 0)) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x4c);
      }
      return 1;
    }
    FUN_144ba24f0(0x10,0xc2,0x42,"crypto\\ec\\ec_asn1.c",0x34,uVar3);
  }
  return 0;
}



// FUNCTION 144ee62b0 FUN_144ee62b0 body=279 status=ok
// SIG undefined FUN_144ee62b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee62b0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 uVar3;
  
  uVar3 = 0x144ee62c6;
  local_res10 = *param_2;
  piVar1 = (int *)FUN_144eff7f0(0,&local_res10,param_3,&DAT_149bff980);
  if (piVar1 == (int *)0x0) {
    FUN_144ba24f0(0x10,0x91,0x75,"crypto\\ec\\ec_asn1.c",0x3c1,uVar3);
    FUN_144eff330(0,&DAT_149bff980);
    return 0;
  }
  lVar2 = FUN_144ee5f60(piVar1);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x10,0x91,0x7f,"crypto\\ec\\ec_asn1.c",0x3c7,uVar3);
    FUN_144eff330(piVar1,&DAT_149bff980);
    lVar2 = 0;
  }
  else {
    if (*piVar1 == 1) {
      *(undefined4 *)(lVar2 + 0x28) = 1;
    }
    if (param_1 != (longlong *)0x0) {
      FUN_144efba20(*param_1);
      *param_1 = lVar2;
    }
    FUN_144eff330(piVar1,&DAT_149bff980);
    *param_2 = local_res10;
  }
  return lVar2;
}



// FUNCTION 144ee63d0 FUN_144ee63d0 body=194 status=ok
// SIG undefined FUN_144ee63d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ee63d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee63e0;
  lVar2 = FUN_144ee6060(param_1,0);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x10,0xbf,0x78,"crypto\\ec\\ec_asn1.c",0x3de,uVar3);
    return 0;
  }
  iVar1 = FUN_144f01520(lVar2,param_2,&DAT_149bff980);
  if (iVar1 == 0) {
    FUN_144ba24f0(0x10,0xbf,0x79,"crypto\\ec\\ec_asn1.c",0x3e2,uVar3);
    FUN_144eff330(lVar2,&DAT_149bff980);
    return 0;
  }
  FUN_144eff330(lVar2,&DAT_149bff980);
  return iVar1;
}



// FUNCTION 144ee64a0 FUN_144ee64a0 body=577 status=ok
// SIG undefined FUN_144ee64a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee64a0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ee64b0;
  local_res10 = *param_2;
  puVar3 = (undefined4 *)FUN_144eff7f0(0,&local_res10,param_3,&DAT_149bffa30);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x10,0x92,0x10,"crypto\\ec\\ec_asn1.c",0x3f3,uVar9);
    return 0;
  }
  if (((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) &&
     (lVar4 = FUN_144ed2d70(), lVar4 == 0)) {
    uVar8 = 0x3f9;
    uVar7 = 0x41;
  }
  else {
    if (*(longlong *)(puVar3 + 4) != 0) {
      FUN_144efba20(*(undefined8 *)(lVar4 + 0x18));
      lVar5 = FUN_144ee5f60(*(undefined8 *)(puVar3 + 4));
      *(longlong *)(lVar4 + 0x18) = lVar5;
      if ((lVar5 != 0) && (**(int **)(puVar3 + 4) == 1)) {
        *(undefined4 *)(lVar5 + 0x28) = 1;
      }
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
      uVar8 = 0x408;
      uVar7 = 0x10;
    }
    else {
      *(undefined4 *)(lVar4 + 0x10) = *puVar3;
      lVar5 = *(longlong *)(puVar3 + 2);
      if (lVar5 == 0) {
        uVar8 = 0x414;
        uVar7 = 0x7d;
      }
      else {
        iVar2 = FUN_144f03e70(lVar5);
        uVar6 = FUN_144f03e90(lVar5);
        iVar2 = FUN_144ed3470(lVar4,uVar6,(longlong)iVar2);
        if (iVar2 == 0) goto LAB_144ee66a5;
        FUN_144efc7e0(*(undefined8 *)(lVar4 + 0x20));
        lVar5 = FUN_144efc690(*(undefined8 *)(lVar4 + 0x18));
        *(longlong *)(lVar4 + 0x20) = lVar5;
        if (lVar5 == 0) {
          uVar8 = 0x41b;
          uVar7 = 0x10;
        }
        else {
          if (*(longlong *)(puVar3 + 6) == 0) {
            pcVar1 = *(code **)(**(longlong **)(lVar4 + 0x18) + 0x168);
            if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar4), iVar2 == 0))
            goto LAB_144ee66a5;
            *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
LAB_144ee665d:
            if (param_1 != (longlong *)0x0) {
              *param_1 = lVar4;
            }
            FUN_144eff330(puVar3,&DAT_149bffa30);
            *param_2 = local_res10;
            return lVar4;
          }
          uVar6 = FUN_144f03e90();
          iVar2 = FUN_144f03e70(*(undefined8 *)(puVar3 + 6));
          iVar2 = FUN_144ed33d0(lVar4,uVar6,(longlong)iVar2,0);
          if (iVar2 != 0) goto LAB_144ee665d;
          uVar8 = 0x426;
          uVar7 = 0x10;
        }
      }
    }
  }
  FUN_144ba24f0(0x10,0x92,uVar7,"crypto\\ec\\ec_asn1.c",uVar8,uVar9);
LAB_144ee66a5:
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar4)) {
    FUN_144ed2e50(lVar4);
  }
  FUN_144eff330(puVar3,&DAT_149bffa30);
  return 0;
}



// FUNCTION 144ee66f0 FUN_144ee66f0 body=552 status=ok
// SIG undefined FUN_144ee66f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ee66f0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x144ee670c;
  uVar6 = 0;
  local_res8 = 0;
  local_res18 = 0;
  uVar9 = 0;
  bVar1 = false;
  uVar5 = 0;
  puVar7 = (undefined4 *)0x0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) & 2) == 0 && (*(longlong *)(param_1 + 0x20) == 0)))) {
    uVar10 = 0x448;
    uVar8 = 0x43;
    uVar9 = uVar6;
  }
  else {
    puVar7 = (undefined4 *)FUN_144efec20(&DAT_149bffa30);
    if (puVar7 == (undefined4 *)0x0) {
      uVar10 = 0x44d;
      uVar8 = 0x41;
      uVar5 = uVar6;
      uVar9 = uVar6;
    }
    else {
      *puVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_144ed3530(param_1,&local_res8);
      if (uVar5 == 0) {
        uVar10 = 0x456;
        uVar8 = 0x10;
      }
      else {
        FUN_144f03e20(*(undefined8 *)(puVar7 + 2),local_res8,uVar5 & 0xffffffff);
        local_res8 = 0;
        if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
          lVar3 = FUN_144ee6060(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar7 + 4));
          *(longlong *)(puVar7 + 4) = lVar3;
          if (lVar3 == 0) {
            uVar10 = 0x461;
            uVar8 = 0x10;
            goto LAB_144ee68a7;
          }
        }
        if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
          lVar3 = FUN_144efe800();
          *(longlong *)(puVar7 + 6) = lVar3;
          if (lVar3 == 0) {
            uVar10 = 0x469;
            uVar8 = 0x41;
            uVar9 = uVar6;
          }
          else {
            uVar4 = FUN_144ed3380(param_1,*(undefined4 *)(param_1 + 0x34),&local_res18,0);
            if (uVar4 != 0) {
              *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) & 0xfffffff0;
              *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) | 8;
              FUN_144f03e20(*(undefined8 *)(puVar7 + 6),local_res18,uVar4 & 0xffffffff);
              local_res18 = 0;
              goto LAB_144ee6861;
            }
            uVar10 = 0x470;
            uVar8 = 0x10;
          }
        }
        else {
LAB_144ee6861:
          uVar2 = FUN_144f01520(puVar7,param_2,&DAT_149bffa30);
          uVar9 = (ulonglong)uVar2;
          if (uVar2 != 0) {
            bVar1 = true;
            goto LAB_144ee68b8;
          }
          uVar10 = 0x47b;
          uVar8 = 0x10;
        }
      }
    }
  }
LAB_144ee68a7:
  FUN_144ba24f0(0x10,0xc0,uVar8,"crypto\\ec\\ec_asn1.c",uVar10,uVar11);
LAB_144ee68b8:
  FUN_144ea66f0(local_res8,uVar5,"crypto\\ec\\ec_asn1.c",0x480);
  FUN_144ea6530(local_res18,"crypto\\ec\\ec_asn1.c",0x481);
  FUN_144eff330(puVar7,&DAT_149bffa30);
  if (bVar1) {
    uVar6 = uVar9;
  }
  return uVar6;
}



// FUNCTION 144ee6920 FUN_144ee6920 body=274 status=ok
// SIG undefined FUN_144ee6920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee6920(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee6935;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) &&
       (lVar1 = FUN_144ed2d70(), lVar1 == 0)) {
      FUN_144ba24f0(0x10,0x90,0x41,"crypto\\ec\\ec_asn1.c",0x49a,uVar3);
    }
    else {
      lVar2 = FUN_144ee62b0(lVar1 + 0x18,param_2,param_3);
      if (lVar2 != 0) {
        if (param_1 == (longlong *)0x0) {
          return lVar1;
        }
        *param_1 = lVar1;
        return lVar1;
      }
      FUN_144ba24f0(0x10,0x90,0x10,"crypto\\ec\\ec_asn1.c",0x4a1,uVar3);
      if ((param_1 == (longlong *)0x0) || (*param_1 != lVar1)) {
        FUN_144ed2e50(lVar1);
      }
    }
    return 0;
  }
  FUN_144ba24f0(0x10,0x90,0x43,"crypto\\ec\\ec_asn1.c",0x494,0x144ee6935);
  return 0;
}



// FUNCTION 144ee6a40 FUN_144ee6a40 body=70 status=ok
// SIG undefined FUN_144ee6a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee6a40(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_144ba24f0(0x10,0xbe,0x43,"crypto\\ec\\ec_asn1.c",0x489);
    return 0;
  }
  uVar1 = FUN_144ee63d0(*(undefined8 *)(param_1 + 0x18));
  return uVar1;
}



// FUNCTION 144ee6a90 FUN_144ee6a90 body=191 status=ok
// SIG undefined FUN_144ee6a90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee6a90(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ee6aa0;
  if (((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x18) != 0)) {
    iVar2 = FUN_144ed33d0(lVar1,*param_2,(longlong)param_3,0);
    if (iVar2 == 0) {
      FUN_144ba24f0(0x10,0x98,0x10,"crypto\\ec\\ec_asn1.c",0x4ba,uVar3);
      return 0;
    }
    *param_2 = *param_2 + (longlong)param_3;
    return lVar1;
  }
  FUN_144ba24f0(0x10,0x98,0x43,"crypto\\ec\\ec_asn1.c",0x4b5,0x144ee6aa0);
  return 0;
}



// FUNCTION 144ee6b50 FUN_144ee6b50 body=351 status=ok
// SIG undefined FUN_144ee6b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ee6b50(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = false;
  if (param_1 == 0) {
    FUN_144ba24f0(0x10,0x97,0x43,"crypto\\ec\\ec_asn1.c",0x4c7,0x144ee6b6b);
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    uVar2 = FUN_145298b20(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x34),0,0,0);
    if ((param_2 != (longlong *)0x0) && (uVar2 != 0)) {
      if (*param_2 == 0) {
        lVar3 = FUN_144ea64e0(uVar2,"crypto\\ec\\ec_asn1.c",0x4d3);
        *param_2 = lVar3;
        if (lVar3 == 0) {
          FUN_144ba24f0(0x10,0x97,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar4,0x4d4));
          return 0;
        }
        bVar1 = true;
      }
      lVar3 = FUN_145298b20(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                            *(undefined4 *)(param_1 + 0x34),*param_2,uVar2,0);
      if (lVar3 == 0) {
        FUN_144ba24f0(0x10,0x97,0x10,"crypto\\ec\\ec_asn1.c",0x4db);
        if (bVar1) {
          FUN_144ea6530(*param_2,"crypto\\ec\\ec_asn1.c",0x4dd);
          *param_2 = 0;
        }
        uVar2 = 0;
      }
      else {
        if (!bVar1) {
          *param_2 = *param_2 + uVar2;
        }
        uVar2 = uVar2 & 0xffffffff;
      }
    }
  }
  return uVar2;
}



// FUNCTION 144ee6cb0 FUN_144ee6cb0 body=85 status=ok
// SIG undefined FUN_144ee6cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee6cb0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ee6cbc;
  lVar1 = FUN_144ea6670(0x10,"crypto\\ec\\ec_asn1.c",0x4f2);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x10,0x109,0x41,"crypto\\ec\\ec_asn1.c",0x4f4,uVar2);
  }
  return lVar1;
}



// FUNCTION 144ee6d10 FUN_144ee6d10 body=66 status=ok
// SIG undefined FUN_144ee6d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee6d10(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ba0630(*param_1);
    FUN_144ba0630(param_1[1]);
    FUN_144ea6530(param_1,"crypto\\ec\\ec_asn1.c",0x4fe);
  }
  return;
}



// FUNCTION 144ee6d60 FUN_144ee6d60 body=29 status=ok
// SIG undefined FUN_144ee6d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee6d60(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149bffaa0);
  return;
}



// FUNCTION 144ee6d80 FUN_144ee6d80 body=29 status=ok
// SIG undefined FUN_144ee6d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee6d80(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ee6da0 FUN_144ee6da0 body=24 status=ok
// SIG undefined FUN_144ee6da0(void)

void FUN_144ee6da0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}



// FUNCTION 144ee6dc0 FUN_144ee6dc0 body=106 status=ok
// SIG undefined FUN_144ee6dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee6dc0(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_144ba0630(*param_1);
    FUN_144ba0630(param_1[1]);
    *param_1 = param_2;
    param_1[1] = param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 144ee6e30 FUN_144ee6e30 body=127 status=ok
// SIG undefined FUN_144ee6e30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ee6e30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ee6e3a;
  if (param_1 != 0) {
    lVar2 = FUN_144ed31a0();
    if (lVar2 != 0) {
      iVar1 = FUN_144efc160(lVar2);
      if (iVar1 != 0) {
        local_28[1] = 2;
        local_res8[0] = 0xff;
        local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
        local_20 = local_res8;
        iVar1 = FUN_144efe8b0(local_28,0);
        iVar1 = FUN_144f041d0(1,iVar1 * 2,0x10);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        return iVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 144ee6eb0 FUN_144ee6eb0 body=752 status=ok
// SIG undefined FUN_144ee6eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee6eb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar13 = 0;
  lVar11 = 0;
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    return 0;
  }
  FUN_144ed0860(*param_2);
  FUN_144efe790(param_2[1]);
  uVar5 = FUN_144efbee0(param_1);
  iVar3 = FUN_144efbef0(uVar5);
  lVar6 = FUN_144ea8d60(iVar3);
  *param_2 = lVar6;
  if (lVar6 == 0) {
    uVar5 = CONCAT44(uVar12,0x109);
    uVar12 = 8;
    lVar11 = lVar13;
LAB_144ee715f:
    uVar10 = 0x9a;
  }
  else {
    if (iVar3 == 0x196) {
      lVar11 = FUN_144ba0570();
      if (lVar11 == 0) {
        uVar5 = CONCAT44(uVar12,0x10f);
        uVar12 = 0x41;
      }
      else {
        uVar12 = 0;
        iVar3 = FUN_144efc390(param_1,lVar11,0,0,0);
        if (iVar3 == 0) {
          uVar5 = CONCAT44(uVar12,0x114);
          uVar12 = 0x10;
        }
        else {
          lVar7 = FUN_144ef1210(lVar11,0);
          param_2[1] = lVar7;
          lVar6 = lVar11;
          if (lVar7 != 0) goto LAB_144ee7110;
          uVar5 = CONCAT44(uVar12,0x11a);
          uVar12 = 0xd;
        }
      }
      goto LAB_144ee715f;
    }
    if (iVar3 != 0x197) {
      uVar5 = CONCAT44(uVar12,0x169);
      uVar12 = 0x83;
      goto LAB_144ee715f;
    }
    puVar8 = (undefined4 *)FUN_144efec20(&DAT_149bff660);
    param_2[1] = (longlong)puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      uVar5 = CONCAT44(uVar12,300);
      uVar12 = 0x41;
      goto LAB_144ee715f;
    }
    uVar4 = FUN_144efc3e0(param_1);
    *puVar8 = uVar4;
    iVar3 = FUN_144ee61a0(param_1);
    if (iVar3 == 0) {
      uVar5 = CONCAT44(uVar12,0x135);
      uVar12 = 0x10;
      lVar11 = lVar13;
      goto LAB_144ee715f;
    }
    lVar6 = FUN_144ea8d60(iVar3);
    *(longlong *)(puVar8 + 2) = lVar6;
    if (lVar6 == 0) {
      uVar5 = CONCAT44(uVar12,0x13a);
      uVar12 = 8;
      goto LAB_144ee715f;
    }
    if (iVar3 == 0x2aa) {
      iVar3 = FUN_144ee6220(param_1,local_res8);
      lVar6 = lVar13;
      if (iVar3 == 0) goto LAB_144ee7170;
      lVar7 = FUN_144efe850();
      *(longlong *)(puVar8 + 4) = lVar7;
      if (lVar7 == 0) {
        uVar5 = CONCAT44(uVar12,0x146);
        uVar12 = 0x41;
      }
      else {
        iVar3 = FUN_144ef1150(lVar7,local_res8[0]);
        if (iVar3 != 0) goto LAB_144ee7110;
        uVar5 = CONCAT44(uVar12,0x14a);
        uVar12 = 0xd;
      }
      goto LAB_144ee715f;
    }
    lVar6 = lVar11;
    if (iVar3 != 0x2ab) {
      lVar7 = FUN_144efea10();
      *(longlong *)(puVar8 + 4) = lVar7;
      if (lVar7 != 0) {
LAB_144ee7110:
        lVar13 = 1;
        goto LAB_144ee7170;
      }
      uVar5 = CONCAT44(uVar12,0x162);
      uVar12 = 0x41;
      goto LAB_144ee715f;
    }
    uVar5 = FUN_144efbee0(param_1);
    iVar3 = FUN_144efbef0(uVar5);
    if ((((iVar3 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) &&
        (iVar3 = *(int *)(param_1 + 0x4c), iVar3 != 0)) &&
       (((iVar1 = *(int *)(param_1 + 0x50), iVar1 != 0 &&
         (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) && (*(int *)(param_1 + 0x58) == 0)))) {
      piVar9 = (int *)FUN_144efec20(&DAT_149bffb30);
      *(int **)(puVar8 + 4) = piVar9;
      if (piVar9 != (int *)0x0) {
        *piVar9 = iVar2;
        *(int *)(*(longlong *)(puVar8 + 4) + 4) = iVar1;
        *(int *)(*(longlong *)(puVar8 + 4) + 8) = iVar3;
        goto LAB_144ee7110;
      }
      uVar5 = CONCAT44(uVar12,0x155);
      uVar12 = 0x41;
      goto LAB_144ee715f;
    }
    uVar10 = 0xc1;
    uVar5 = CONCAT44(uVar12,0x4a);
    uVar12 = 0x42;
    lVar11 = lVar13;
  }
  FUN_144ba24f0(0x10,uVar10,uVar12,"crypto\\ec\\ec_asn1.c",uVar5);
  lVar6 = lVar11;
LAB_144ee7170:
  FUN_144ba0cd0(lVar6);
  return lVar13;
}



// FUNCTION 144ee71a0 FUN_144ee71a0 body=629 status=ok
// SIG undefined FUN_144ee71a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee71a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar10;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = 0x144ee71b7;
  lVar7 = 0;
  lVar9 = 0;
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    return 0;
  }
  lVar2 = FUN_144ba0570();
  lVar3 = lVar7;
  lVar4 = lVar7;
  if ((lVar2 == 0) || (lVar3 = FUN_144ba0570(), lVar3 == 0)) {
    uVar10 = CONCAT44(uVar8,0x17f);
LAB_144ee738d:
    uVar8 = 0x41;
  }
  else {
    uVar8 = 0;
    iVar1 = FUN_144efc390(param_1,0,lVar2,lVar3,0,uVar10);
    if (iVar1 == 0) {
      uVar10 = CONCAT44(uVar8,0x185);
      uVar8 = 0x10;
      lVar9 = lVar7;
    }
    else {
      iVar1 = FUN_144efc3e0(param_1);
      uVar6 = (longlong)iVar1 + 7U >> 3;
      lVar9 = FUN_144ea64e0(uVar6,"crypto\\ec\\ec_asn1.c",399);
      if ((lVar9 == 0) || (lVar4 = FUN_144ea64e0(uVar6,"crypto\\ec\\ec_asn1.c",400), lVar4 == 0)) {
        uVar10 = CONCAT44(uVar8,0x191);
        goto LAB_144ee738d;
      }
      iVar1 = FUN_144ba09d0(lVar2,lVar9,uVar6 & 0xffffffff);
      if ((iVar1 < 0) || (iVar1 = FUN_144ba09d0(lVar3,lVar4,uVar6 & 0xffffffff), iVar1 < 0)) {
        uVar10 = CONCAT44(uVar8,0x196);
        uVar8 = 3;
      }
      else {
        iVar1 = FUN_144ef2c50(*param_2,lVar9,uVar6 & 0xffffffff);
        if ((iVar1 != 0) && (iVar1 = FUN_144ef2c50(param_2[1],lVar4,uVar6 & 0xffffffff), iVar1 != 0)
           ) {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            FUN_144efe820(param_2[2]);
            param_2[2] = 0;
          }
          else {
            if (param_2[2] == 0) {
              lVar5 = FUN_144efe800();
              param_2[2] = lVar5;
              if (lVar5 == 0) {
                uVar10 = CONCAT44(uVar8,0x1a5);
                goto LAB_144ee738d;
              }
            }
            *(uint *)(param_2[2] + 0x10) = *(uint *)(param_2[2] + 0x10) & 0xfffffff0;
            *(uint *)(param_2[2] + 0x10) = *(uint *)(param_2[2] + 0x10) | 8;
            iVar1 = FUN_1452a3080(param_2[2],*(undefined8 *)(param_1 + 0x30),
                                  *(undefined4 *)(param_1 + 0x38));
            if (iVar1 == 0) {
              uVar10 = CONCAT44(uVar8,0x1ac);
              uVar8 = 0xd;
              goto LAB_144ee7398;
            }
          }
          lVar7 = 1;
          goto LAB_144ee73a9;
        }
        uVar10 = CONCAT44(uVar8,0x19d);
        uVar8 = 0xd;
      }
    }
  }
LAB_144ee7398:
  FUN_144ba24f0(0x10,0x99,uVar8,"crypto\\ec\\ec_asn1.c",uVar10);
LAB_144ee73a9:
  FUN_144ea6530(lVar9,"crypto\\ec\\ec_asn1.c",0x1b7);
  FUN_144ea6530(lVar4,"crypto\\ec\\ec_asn1.c",0x1b8);
  FUN_144ba0cd0(lVar2);
  FUN_144ba0cd0(lVar3);
  return lVar7;
}



// FUNCTION 144ee7420 FUN_144ee7420 body=86 status=ok
// SIG undefined FUN_144ee7420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144ee7420(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_144ed3d30();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_144ed3d50(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



// FUNCTION 144ee7490 FUN_144ee7490 body=29 status=ok
// SIG undefined FUN_144ee7490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7490(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ee74b0 FUN_144ee74b0 body=29 status=ok
// SIG undefined FUN_144ee74b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee74b0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149bffdb0);
  return;
}



// FUNCTION 144ee74d0 FUN_144ee74d0 body=279 status=ok
// SIG undefined FUN_144ee74d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee74d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_144ed3d30();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_144eff7f0(0,param_2,param_3,&DAT_149bffef0);
    if (puVar2 != (undefined8 *)0x0) {
      if (param_1 != (longlong *)0x0) {
        FUN_144ed3d50(*param_1);
        *param_1 = lVar1;
      }
      *(undefined8 *)(lVar1 + 8) = *puVar2;
      *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
      *(undefined8 *)(lVar1 + 0x48) = puVar2[3];
      if ((longlong *)puVar2[4] != (longlong *)0x0) {
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(*(longlong *)puVar2[4] + 8);
        *(undefined4 *)(lVar1 + 0x58) = **(undefined4 **)puVar2[4];
        *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(puVar2[4] + 8);
        *(undefined8 *)(*(longlong *)puVar2[4] + 8) = 0;
        FUN_144efe820(*(undefined8 *)puVar2[4]);
        FUN_144ea6530(puVar2[4],"crypto\\dh\\dh_asn1.c",0x6e);
        puVar2[4] = 0;
      }
      FUN_144ea6530(puVar2,"crypto\\dh\\dh_asn1.c",0x72);
      return lVar1;
    }
    FUN_144ed3d50(lVar1);
  }
  return 0;
}



// FUNCTION 144ee75f0 FUN_144ee75f0 body=155 status=ok
// SIG undefined FUN_144ee75f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee75f0(longlong param_1,undefined8 param_2)

{
  int *local_58;
  longlong local_50;
  int local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 **local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ee75fa;
  local_30 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  if (((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(int *)(param_1 + 0x58) < 1)) {
    local_10 = (int **)0x0;
  }
  else {
    local_58 = local_48;
    local_10 = &local_58;
    local_38 = 8;
    local_50 = *(longlong *)(param_1 + 0x60);
    local_48[0] = *(int *)(param_1 + 0x58);
    local_40 = *(longlong *)(param_1 + 0x50);
  }
  FUN_144f01520(&local_30,param_2,&DAT_149bffef0);
  return;
}



// FUNCTION 144ee7690 FUN_144ee7690 body=86 status=ok
// SIG undefined FUN_144ee7690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144ee7690(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_144ed4040();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_144ed4200(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



// FUNCTION 144ee76f0 FUN_144ee76f0 body=81 status=ok
// SIG undefined FUN_144ee76f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee76f0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ee76fc;
  lVar1 = FUN_144ea6670(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (lVar1 == 0) {
    FUN_144ba24f0(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c,uVar2);
  }
  return lVar1;
}



// FUNCTION 144ee7750 FUN_144ee7750 body=66 status=ok
// SIG undefined FUN_144ee7750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7750(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ba0630(*param_1);
    FUN_144ba0630(param_1[1]);
    FUN_144ea6530(param_1,"crypto\\dsa\\dsa_asn1.c",0x26);
  }
  return;
}



// FUNCTION 144ee77a0 FUN_144ee77a0 body=29 status=ok
// SIG undefined FUN_144ee77a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee77a0(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ee77c0 FUN_144ee77c0 body=24 status=ok
// SIG undefined FUN_144ee77c0(void)

void FUN_144ee77c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}



// FUNCTION 144ee77e0 FUN_144ee77e0 body=106 status=ok
// SIG undefined FUN_144ee77e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee77e0(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_144ba0630(*param_1);
    FUN_144ba0630(param_1[1]);
    *param_1 = param_2;
    param_1[1] = param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 144ee7850 FUN_144ee7850 body=136 status=ok
// SIG undefined FUN_144ee7850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ee7850(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_1452a35d0(param_2,param_3,param_6);
  if (puVar2 == (undefined8 *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = FUN_144f01520(puVar2,&local_res20,&DAT_149bfffc0);
  *param_5 = uVar1;
  FUN_144ba0630(*puVar2);
  FUN_144ba0630(puVar2[1]);
  FUN_144ea6530(puVar2,"crypto\\dsa\\dsa_asn1.c",0x26);
  return 1;
}



// FUNCTION 144ee78e0 FUN_144ee78e0 body=348 status=ok
// SIG undefined FUN_144ee78e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144ee78e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *local_res20;
  void *local_28;
  void *local_20;
  
  local_28 = (void *)0x0;
  iVar2 = -1;
  local_20 = param_4;
  local_res20 = (undefined8 *)FUN_144ea6670(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (local_res20 == (undefined8 *)0x0) {
    FUN_144ba24f0(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c);
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = FUN_144eff7f0(&local_res20,&local_20,param_5,&DAT_149bfffc0);
    uVar4 = 0xffffffff;
    if (lVar5 != 0) {
      iVar2 = FUN_144f01520(local_res20,&local_28,&DAT_149bfffc0);
      uVar4 = 0xffffffff;
      if ((iVar2 == param_5) && (iVar3 = memcmp(param_4,local_28,(longlong)iVar2), iVar3 == 0)) {
        uVar4 = FUN_1452a35f0(param_2,param_3,local_res20,param_6);
      }
    }
    FUN_144ea66f0(local_28,(longlong)iVar2,"crypto\\dsa\\dsa_asn1.c",0x98);
    puVar1 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      FUN_144ba0630(*local_res20);
      FUN_144ba0630(puVar1[1]);
      FUN_144ea6530(puVar1,"crypto\\dsa\\dsa_asn1.c",0x26);
    }
  }
  return uVar4;
}



// FUNCTION 144ee7a40 FUN_144ee7a40 body=29 status=ok
// SIG undefined FUN_144ee7a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7a40(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ee7a60 FUN_144ee7a60 body=29 status=ok
// SIG undefined FUN_144ee7a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7a60(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ee7a80 FUN_144ee7a80 body=29 status=ok
// SIG undefined FUN_144ee7a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7a80(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c00100);
  return;
}



// FUNCTION 144ee7aa0 FUN_144ee7aa0 body=29 status=ok
// SIG undefined FUN_144ee7aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7aa0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c00190);
  return;
}



// FUNCTION 144ee7ad0 FUN_144ee7ad0 body=126 status=ok
// SIG undefined FUN_144ee7ad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee7ad0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 10) {
    iVar1 = FUN_1452a4910(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return 0;
    }
LAB_144ee7b2a:
    lVar2 = FUN_1452a3840(*param_2,*param_4);
    param_4[1] = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_144ee7b2a;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar1 = FUN_1452a3cc0(*param_2,param_4[1]);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ee7b50 FUN_144ee7b50 body=40 status=ok
// SIG undefined FUN_144ee7b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee7b50(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    FUN_144ba6e60(*(undefined8 *)(*param_2 + 0x38));
  }
  return 1;
}



// FUNCTION 144ee7bb0 FUN_144ee7bb0 body=40 status=ok
// SIG undefined FUN_144ee7bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee7bb0(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    FUN_144b47250(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 144ee7c50 FUN_144ee7c50 body=29 status=ok
// SIG undefined FUN_144ee7c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7c50(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c004b0);
  return;
}



// FUNCTION 144ee7c70 FUN_144ee7c70 body=8 status=ok
// SIG undefined FUN_144ee7c70(void)

undefined * FUN_144ee7c70(void)

{
  return &DAT_149c00ba0;
}



// FUNCTION 144ee7c90 FUN_144ee7c90 body=54 status=ok
// SIG undefined FUN_144ee7c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee7c90(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (param_1 == 1) {
    lVar2 = FUN_144babca0();
    *(longlong *)(lVar1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144ee7cd0 FUN_144ee7cd0 body=49 status=ok
// SIG undefined FUN_144ee7cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee7cd0(longlong param_1,undefined8 param_2)

{
  FUN_144efe100(&DAT_149c011f0,param_1 + 0x50,param_1 + 0x60,param_1,param_2);
  return;
}



// FUNCTION 144ee7d10 FUN_144ee7d10 body=311 status=ok
// SIG undefined FUN_144ee7d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char FUN_144ee7d10(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ee7d25;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return '\0';
  }
  iVar1 = FUN_144bac3e0();
  if (iVar1 == 0) {
    FUN_144e98620(*(undefined8 *)(param_1 + 0xd8));
    FUN_144bac390(*(undefined8 *)(param_1 + 0x30));
    FUN_144e98640(*(undefined8 *)(param_1 + 0xd8));
  }
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *(undefined8 *)(param_3 + 4);
  iVar1 = FUN_144bac1a0(*(undefined8 *)(param_1 + 0x30),&local_58);
  if (-1 < iVar1) {
    iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x30));
    for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x30),iVar1);
      iVar3 = FUN_144ef10c0(lVar4,param_3);
      if (iVar3 != 0) {
        return '\0';
      }
      iVar3 = FUN_144ee8580(param_1,param_4,lVar4);
      if (iVar3 != 0) {
        if (param_2 != (longlong *)0x0) {
          *param_2 = lVar4;
        }
        return (*(int *)(lVar4 + 0x30) == 8) + '\x01';
      }
    }
  }
  return '\0';
}



// FUNCTION 144ee7e50 FUN_144ee7e50 body=59 status=ok
// SIG undefined FUN_144ee7e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee7e50(int param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x30), lVar1 != 0)) && (param_1 == 5)) {
    FUN_144bac280(lVar1,FUN_144ee82e0,param_3,param_4,0x144ee7e5a);
  }
  return 1;
}



// FUNCTION 144ee7e90 FUN_144ee7e90 body=815 status=ok
// SIG undefined FUN_144ee7e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee7e90(int param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int local_res8 [2];
  
  lVar1 = *param_2;
  if (param_1 == 1) {
LAB_144ee80f5:
    puVar3 = PTR_DAT_14c70ede8;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined4 *)(lVar1 + 0x7c) = 0;
    *(undefined4 *)(lVar1 + 0x90) = 0;
    *(undefined **)(lVar1 + 200) = puVar3;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0x94) = 0x807f;
    return 1;
  }
  if (param_1 == 3) {
    if (((*(longlong *)(lVar1 + 200) != 0) &&
        (pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10), pcVar2 != (code *)0x0)) &&
       (iVar4 = (*pcVar2)(lVar1), iVar4 == 0)) {
      return 0;
    }
    FUN_144f025d0(*(undefined8 *)(lVar1 + 0x80));
    FUN_144f02ca0(*(undefined8 *)(lVar1 + 0x88));
    FUN_144efe870(*(undefined8 *)(lVar1 + 0x98));
    FUN_144efe870(*(undefined8 *)(lVar1 + 0xa0));
    FUN_144babe00(*(undefined8 *)(lVar1 + 0xa8),FUN_144ef4900);
    return 1;
  }
  if (param_1 == 4) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10);
    if ((pcVar2 != (code *)0x0) && (iVar4 = (*pcVar2)(lVar1), iVar4 == 0)) {
      return 0;
    }
    FUN_144f025d0(*(undefined8 *)(lVar1 + 0x80));
    FUN_144f02ca0(*(undefined8 *)(lVar1 + 0x88));
    FUN_144efe870(*(undefined8 *)(lVar1 + 0x98));
    FUN_144efe870(*(undefined8 *)(lVar1 + 0xa0));
    FUN_144babe00(*(undefined8 *)(lVar1 + 0xa8),FUN_144ef4900);
    goto LAB_144ee80f5;
  }
  if (param_1 != 5) {
    return 1;
  }
  uVar6 = FUN_144bab020();
  iVar4 = FUN_144bb59a0(lVar1,uVar6,lVar1 + 0xb0,0);
  if (iVar4 == 0) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar7 = FUN_144eac630(lVar1,0x302,local_res8,0);
  *(longlong *)(lVar1 + 0x88) = lVar7;
  if (lVar7 == 0) {
    if (local_res8[0] != -1) goto LAB_144ee7f2a;
  }
  else {
    iVar4 = FUN_144ee8300(lVar1,lVar7);
    if (iVar4 == 0) {
LAB_144ee7f2a:
      *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
    }
  }
  lVar7 = FUN_144eac630(lVar1,0x5a,local_res8);
  *(longlong *)(lVar1 + 0x80) = lVar7;
  if ((lVar7 == 0) && (local_res8[0] != -1)) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar7 = FUN_144eac630(lVar1,0x58,local_res8);
  *(longlong *)(lVar1 + 0x98) = lVar7;
  if ((lVar7 == 0) && (local_res8[0] != -1)) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar7 = FUN_144eac630(lVar1,0x8c,local_res8,0);
  *(longlong *)(lVar1 + 0xa0) = lVar7;
  if (lVar7 == 0) {
    if (local_res8[0] == -1) goto LAB_144ee7fc8;
  }
  else if (*(longlong *)(lVar1 + 0x98) != 0) goto LAB_144ee7fc8;
  *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
LAB_144ee7fc8:
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  iVar10 = 0;
  iVar4 = FUN_144babbf0(uVar6);
  if (0 < iVar4) {
    do {
      uVar8 = FUN_144babc00(uVar6,iVar10);
      uVar9 = FUN_144ef4420(uVar8);
      iVar4 = FUN_144ea8fa0(uVar9);
      if (iVar4 == 0x359) {
        *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x1000;
      }
      iVar5 = FUN_144ef4440(uVar8);
      if ((((iVar5 != 0) && (iVar4 != 0x302)) && (iVar4 != 0x5a)) && (iVar4 != 0x8c)) {
        *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x200;
        break;
      }
      iVar10 = iVar10 + 1;
      iVar4 = FUN_144babbf0(uVar6);
    } while (iVar10 < iVar4);
  }
  iVar4 = FUN_144ee83d0(lVar1);
  if ((iVar4 != 0) &&
     ((pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 8), pcVar2 == (code *)0x0 ||
      (iVar4 = (*pcVar2)(lVar1), iVar4 != 0)))) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x100;
    return 1;
  }
  return 0;
}



// FUNCTION 144ee81e0 FUN_144ee81e0 body=43 status=ok
// SIG undefined FUN_144ee81e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee81e0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 200) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ee8201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ee8210 FUN_144ee8210 body=29 status=ok
// SIG undefined FUN_144ee8210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee8210(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c01280);
  return;
}



// FUNCTION 144ee8230 FUN_144ee8230 body=29 status=ok
// SIG undefined FUN_144ee8230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee8230(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ee8250 FUN_144ee8250 body=8 status=ok
// SIG undefined FUN_144ee8250(void)

undefined * FUN_144ee8250(void)

{
  return &DAT_149c01280;
}



// FUNCTION 144ee8260 FUN_144ee8260 body=123 status=ok
// SIG undefined FUN_144ee8260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee8260(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144bb4f40(param_3);
    uVar3 = FUN_144bb4f20(param_3);
    uVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,uVar3,uVar2);
  }
  return uVar2;
}



// FUNCTION 144ee82e0 FUN_144ee82e0 body=28 status=ok
// SIG undefined FUN_144ee82e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee82e0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_144f03cb0(*param_1,*param_2);
  return;
}



// FUNCTION 144ee8300 FUN_144ee8300 body=201 status=ok
// SIG undefined FUN_144ee8300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee8300(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  iVar1 = *(int *)(param_2 + 1);
  if (0 < iVar1) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 4;
  }
  bVar2 = 0 < iVar1;
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    bVar2 = bVar2 + 1;
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 8;
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    bVar2 = bVar2 + 1;
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x10;
  }
  if (1 < bVar2) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 2;
  }
  if (0 < *(int *)(param_2 + 3)) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x20;
  }
  if (param_2[2] != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x40;
    if (0 < *(int *)param_2[2]) {
      *(uint *)(param_1 + 0x94) = (uint)**(byte **)((int *)param_2[2] + 2);
    }
    if (1 < *(int *)param_2[2]) {
      *(uint *)(param_1 + 0x94) =
           *(uint *)(param_1 + 0x94) |
           (uint)*(byte *)(*(longlong *)((int *)param_2[2] + 2) + 1) << 8;
    }
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0x807f;
  }
  uVar3 = FUN_144ef3ad0(param_1);
  FUN_144f02cc0(*param_2,uVar3);
  return;
}



// FUNCTION 144ee83d0 FUN_144ee83d0 body=419 status=ok
// SIG undefined FUN_144ee83d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee83d0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar11;
  int local_res10 [2];
  ulonglong uVar10;
  
  uVar4 = FUN_144ef3ae0();
  uVar10 = 0;
  iVar2 = FUN_144babbf0(uVar4);
  uVar11 = uVar10;
  if (0 < iVar2) {
    do {
      lVar5 = FUN_144babc00(uVar4,uVar10);
      uVar6 = FUN_144eac650(lVar5,0x303,local_res10,0);
      if (uVar6 == 0) {
        uVar6 = uVar11;
        if (local_res10[0] != -1) goto LAB_144ee8441;
      }
      else {
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          lVar7 = FUN_144babca0();
          *(longlong *)(param_1 + 0xa8) = lVar7;
          if (lVar7 == 0) goto LAB_144ee8564;
        }
        iVar2 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0xa8),uVar6);
        if (iVar2 == 0) {
LAB_144ee8564:
          FUN_144ef4900(uVar6);
          return 0;
        }
      }
      *(ulonglong *)(lVar5 + 0x28) = uVar6;
      lVar7 = FUN_144eac650(lVar5,0x8d,local_res10,0);
      if (lVar7 == 0) {
        if (local_res10[0] != -1) {
LAB_144ee8441:
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80;
          return 1;
        }
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      else {
        uVar3 = FUN_144ef1250(lVar7);
        *(undefined4 *)(lVar5 + 0x30) = uVar3;
        FUN_144efe8e0(lVar7);
      }
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      local_res10[0] = 0;
      iVar2 = FUN_144babbf0(uVar1);
      if (local_res10[0] < iVar2) {
        do {
          uVar8 = FUN_144babc00(uVar1,local_res10[0]);
          iVar2 = FUN_144ef4440(uVar8);
          if (iVar2 != 0) {
            uVar8 = FUN_144ef4420(uVar8);
            iVar2 = FUN_144ea8fa0(uVar8);
            if (iVar2 != 0x303) {
              *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x200;
              break;
            }
          }
          local_res10[0] = local_res10[0] + 1;
          iVar2 = FUN_144babbf0(uVar1);
        } while (local_res10[0] < iVar2);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      iVar2 = FUN_144babbf0(uVar4);
      uVar11 = uVar6;
    } while ((int)uVar9 < iVar2);
  }
  return 1;
}



// FUNCTION 144ee8580 FUN_144ee8580 body=197 status=ok
// SIG undefined FUN_144ee8580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ee8580(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(longlong *)(param_3 + 0x28) == 0) {
    if (param_2 == 0) {
      return true;
    }
    uVar2 = FUN_144ef3ad0();
    iVar1 = FUN_144bb54b0(param_2,uVar2);
    return iVar1 == 0;
  }
  if (param_2 == 0) {
    param_2 = FUN_144ef3ad0();
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_3 + 0x28));
  if (0 < iVar1) {
    do {
      piVar3 = (int *)FUN_144babc00(*(undefined8 *)(param_3 + 0x28),iVar4);
      if ((*piVar3 == 4) && (iVar1 = FUN_144bb54b0(param_2,*(undefined8 *)(piVar3 + 2)), iVar1 == 0)
         ) {
        return true;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_3 + 0x28));
    } while (iVar4 < iVar1);
  }
  return false;
}



// FUNCTION 144ee8650 FUN_144ee8650 body=52 status=ok
// SIG undefined FUN_144ee8650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee8650(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 1) {
    param_2 = (undefined8 *)*param_2;
    uVar1 = FUN_144ea8d60(0x4f);
    *param_2 = uVar1;
  }
  return 1;
}



// FUNCTION 144ee8690 FUN_144ee8690 body=206 status=ok
// SIG undefined FUN_144ee8690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ee8690(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ee86a0;
  local_18 = 0;
  local_20 = 0;
  iVar1 = FUN_144ee9240(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_18 = local_20;
  lVar2 = (*param_1)(param_4,&local_18,local_28[0]);
  if (lVar2 == 0) {
    FUN_144ba24f0(9,0x67,0xd,"crypto\\pem\\pem_oth.c",CONCAT44(uVar3,0x21));
  }
  FUN_144ea6530(local_20,"crypto\\pem\\pem_oth.c",0x22);
  return lVar2;
}



// FUNCTION 144ee8760 FUN_144ee8760 body=743 status=ok
// SIG undefined FUN_144ee8760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ee8760(char *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *local_res8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ee8774;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (*param_1 == '\n')) {
    return true;
  }
  iVar2 = strncmp(param_1,"Proc-Type:",10);
  if (iVar2 != 0) {
    FUN_144ba24f0(9,0x6b,0x6b,"crypto\\pem\\pem_lib.c",0x1f0,uVar9);
    return false;
  }
  sVar3 = strspn(param_1 + 10," \t");
  pcVar5 = param_1 + 10 + sVar3;
  if (*pcVar5 == '4') {
    pcVar6 = pcVar5 + 2;
    if (pcVar5[1] != ',') {
      return false;
    }
    sVar3 = strspn(pcVar6," \t");
    iVar2 = strncmp(pcVar6 + sVar3,"ENCRYPTED",9);
    if (iVar2 == 0) {
      pcVar5 = pcVar6 + sVar3 + 9;
      sVar3 = strspn(pcVar5," \t\r\n");
      if (sVar3 != 0) {
        sVar3 = strspn(pcVar5," \t\r");
        pcVar5 = pcVar5 + sVar3;
        if (*pcVar5 != '\n') {
          FUN_144ba24f0(9,0x6b,0x70,"crypto\\pem\\pem_lib.c",0x203);
          return false;
        }
        iVar2 = strncmp(pcVar5 + 1,"DEK-Info:",9);
        if (iVar2 == 0) {
          sVar3 = strspn(pcVar5 + 10," \t");
          pcVar5 = pcVar5 + 10 + sVar3;
          sVar3 = strcspn(pcVar5," \t,");
          pcVar6 = pcVar5 + sVar3;
          cVar1 = *pcVar6;
          *pcVar6 = '\0';
          lVar4 = FUN_144baaaf0(pcVar5);
          *param_2 = lVar4;
          *pcVar6 = cVar1;
          sVar3 = strspn(pcVar6," \t");
          pcVar6 = pcVar6 + sVar3;
          local_res8 = pcVar6;
          if (lVar4 == 0) {
            uVar8 = 0x21f;
            uVar7 = 0x72;
          }
          else {
            iVar2 = FUN_144ba3d90(lVar4);
            if ((iVar2 < 1) ||
               (cVar1 = *pcVar6, pcVar6 = pcVar6 + 1, local_res8 = pcVar6, cVar1 == ',')) {
              if ((iVar2 != 0) || (*pcVar6 != ',')) {
                uVar7 = FUN_144ba3d90(lVar4);
                iVar2 = FUN_144ee9830(&local_res8,param_2 + 1,uVar7);
                return iVar2 != 0;
              }
              uVar8 = 0x227;
              uVar7 = 0x82;
            }
            else {
              uVar8 = 0x224;
              uVar7 = 0x81;
            }
          }
          FUN_144ba24f0(9,0x6b,uVar7,"crypto\\pem\\pem_lib.c",uVar8);
          return false;
        }
        FUN_144ba24f0(9,0x6b,0x69,"crypto\\pem\\pem_lib.c",0x20c);
        return false;
      }
    }
    FUN_144ba24f0(9,0x6b,0x6a,"crypto\\pem\\pem_lib.c",0x1fd);
    return false;
  }
  return false;
}



// FUNCTION 144ee8a50 FUN_144ee8a50 body=464 status=ok
// SIG undefined FUN_144ee8a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee8a50(longlong *param_1,longlong param_2,int *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_4c8 [32];
  longlong *local_4a8;
  undefined4 local_4a0;
  undefined1 *local_498;
  undefined8 local_490;
  int local_488 [4];
  undefined1 local_478 [64];
  undefined1 local_438 [1024];
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_488[0] = *param_3;
  if (*param_1 == 0) goto LAB_144ee8c10;
  if (param_4 == (code *)0x0) {
    iVar1 = FUN_144ee9670();
  }
  else {
    iVar1 = (*param_4)(local_438,0x400,0,param_5);
  }
  if (iVar1 < 0) {
    local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,0x1b2);
    FUN_144ba24f0(9,0x6a,0x68,"crypto\\pem\\pem_lib.c");
    goto LAB_144ee8c10;
  }
  uVar2 = FUN_144e98ef0();
  local_490 = 0;
  local_498 = local_478;
  local_4a0 = 1;
  local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,iVar1);
  iVar1 = FUN_1452a4b00(*param_1,uVar2,param_1 + 1,local_438);
  if ((iVar1 == 0) || (lVar3 = FUN_144ba50b0(), lVar3 == 0)) goto LAB_144ee8c10;
  local_4a8 = param_1 + 1;
  iVar1 = FUN_144ba4820(lVar3,*param_1,0,local_478);
  if (iVar1 == 0) {
LAB_144ee8bb5:
    local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,0x1cd);
    FUN_144ba24f0(9,0x6a,0x65,"crypto\\pem\\pem_lib.c");
  }
  else {
    local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,local_488[0]);
    iVar1 = FUN_144ba4850(lVar3,param_2,local_488,param_2);
    if (iVar1 == 0) goto LAB_144ee8bb5;
    *param_3 = local_488[0];
    iVar1 = FUN_144ba4b30(lVar3,local_488[0] + param_2,local_488);
    if (iVar1 == 0) goto LAB_144ee8bb5;
    *param_3 = *param_3 + local_488[0];
  }
  FUN_144ba5170(lVar3);
  FUN_14259f0c0(local_438,0x400);
  FUN_14259f0c0(local_478,0x40);
LAB_144ee8c10:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_38 ^ (ulonglong)auStack_4c8);
}



// FUNCTION 144ee8c30 FUN_144ee8c30 body=41 status=ok
// SIG undefined FUN_144ee8c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee8c30(void)

{
  FUN_144ee8c60();
  return;
}



// FUNCTION 144ee8c60 FUN_144ee8c60 body=778 status=ok
// SIG undefined FUN_144ee8c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ee8c60(undefined8 param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                       uint *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res20;
  undefined4 uVar11;
  int local_68 [2];
  uint *local_60;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar1 = param_6;
  local_50[1] = 0x144ee8c88;
  uVar9 = 0;
  local_50[0] = 0;
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if (((byte)param_6 & 6) == 6) {
    uVar11 = 0x392;
    uVar3 = 7;
    uVar4 = uVar9;
    uVar5 = uVar9;
  }
  else {
    if ((param_6 & 1) == 0) {
      uVar3 = FUN_144b9ff50();
    }
    else {
      uVar3 = FUN_144b9ff60();
    }
    uVar4 = FUN_144b9e650(uVar3);
    local_res20 = uVar4;
    uVar5 = FUN_144b9e650(uVar3);
    local_58 = uVar5;
    if ((uVar4 != 0) && (uVar5 != 0)) {
      iVar2 = FUN_144eea100(param_1,local_50,uVar1);
      uVar10 = local_50[0];
      uVar6 = 0;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_144eea2e0(param_1,&local_res20,&local_58,local_50[0],uVar1), uVar5 = local_58,
         uVar4 = local_res20, uVar6 = uVar9, iVar2 != 0)) {
        FUN_144b9efc0(local_58,0x73,0,&local_60);
        param_6 = *local_60;
        uVar4 = local_res20;
        uVar6 = 0;
        if (param_6 != 0) {
          uVar6 = FUN_1452a4da0();
          if (uVar6 == 0) {
            FUN_144ba24f0(9,0x91,0x41,"crypto\\pem\\pem_lib.c",0x3ac);
            uVar4 = local_res20;
          }
          else {
            FUN_1452a5050(uVar6);
            iVar2 = FUN_1452a5060(uVar6,*(longlong *)(local_60 + 2),&param_6,
                                  *(longlong *)(local_60 + 2),param_6);
            uVar9 = 0;
            if ((iVar2 < 0) ||
               (iVar2 = FUN_1452a5250(uVar6,(longlong)(int)param_6 + *(longlong *)(local_60 + 2),
                                      local_68), uVar4 = local_res20, iVar2 < 0)) {
              FUN_144ba24f0(9,0x91,100,"crypto\\pem\\pem_lib.c",0x3b5);
              uVar4 = local_res20;
            }
            else {
              param_6 = param_6 + local_68[0];
              *(longlong *)local_60 = (longlong)(int)param_6;
              iVar2 = FUN_144b9efc0(local_res20,3,0);
              local_res20 = CONCAT44(local_res20._4_4_,iVar2);
              lVar7 = FUN_144ee9ce0(iVar2 + 1,uVar1);
              *param_3 = lVar7;
              lVar8 = FUN_144ee9ce0(param_6,uVar1);
              *param_4 = lVar8;
              lVar7 = *param_3;
              if ((lVar7 == 0) || (lVar8 == 0)) {
                FUN_144ee9c90(lVar7,uVar1,0);
                *param_3 = 0;
                FUN_144ee9c90(*param_4,uVar1,0);
                *param_4 = 0;
              }
              else {
                FUN_144b9e930(uVar4,lVar7,local_res20 & 0xffffffff);
                *(undefined1 *)((longlong)(int)local_res20 + *param_3) = 0;
                FUN_144b9e930(uVar5,*param_4,param_6);
                *param_5 = param_6;
                *param_2 = uVar10;
                uVar10 = 0;
                uVar9 = 1;
              }
            }
          }
        }
      }
      goto LAB_144ee8f0e;
    }
    uVar11 = 0x39a;
    uVar3 = 0x41;
  }
  FUN_144ba24f0(9,0x91,uVar3,"crypto\\pem\\pem_lib.c",uVar11);
  uVar6 = uVar9;
  uVar10 = uVar9;
LAB_144ee8f0e:
  FUN_1452a4dd0(uVar6);
  if ((uVar1 & 1) == 0) {
    FUN_144ea6530(uVar10,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    FUN_144ea6f60(uVar10,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
  FUN_144b9e7b0(uVar4);
  FUN_144b9e7b0(uVar5);
  return uVar9;
}



// FUNCTION 144ee8f70 FUN_144ee8f70 body=64 status=ok
// SIG undefined FUN_144ee8f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee8f70(void)

{
  FUN_144ee9d20();
  return;
}



// FUNCTION 144ee8fb0 FUN_144ee8fb0 body=655 status=ok
// SIG undefined FUN_144ee8fb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ee8fb0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                       int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_48 [2];
  longlong local_40;
  
  local_40 = 0x144ee8fd4;
  uVar6 = 0;
  uVar11 = 0;
  uVar8 = 0;
  local_40 = FUN_1452a4da0();
  uVar9 = 7;
  uVar3 = uVar6;
  if (local_40 == 0) {
    lVar5 = local_40;
    uVar9 = 0x41;
  }
  else {
    FUN_1452a4e10(local_40);
    uVar4 = 0xffffffffffffffff;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (*(char *)(uVar7 + param_2) != '\0');
    iVar1 = FUN_144b9eb80(param_1,"-----BEGIN ",0xb);
    uVar10 = uVar9;
    if (iVar1 == 0xb) {
      iVar1 = FUN_144b9eb80(param_1,param_2,uVar7 & 0xffffffff);
      uVar3 = uVar8;
      if ((iVar1 == (int)uVar7) && (iVar1 = FUN_144b9eb80(param_1,"-----\n",6), iVar1 == 6)) {
        if (param_3 != 0) {
          do {
            uVar4 = uVar4 + 1;
          } while (*(char *)(param_3 + uVar4) != '\0');
          if ((0 < (int)uVar4) &&
             ((iVar1 = FUN_144b9eb80(param_1,param_3,uVar4 & 0xffffffff), iVar1 != (int)uVar4 ||
              (iVar1 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1), iVar1 != 1)))) goto LAB_144ee91de;
        }
        uVar3 = FUN_144ea64e0(0x2000,"crypto\\pem\\pem_lib.c",0x276);
        uVar8 = uVar6;
        lVar5 = local_40;
        if (uVar3 != 0) {
          for (; local_40 = lVar5, 0 < param_5; param_5 = param_5 - iVar1) {
            iVar1 = param_5;
            if (0x1400 < param_5) {
              iVar1 = 0x1400;
            }
            iVar2 = FUN_1452a4e20(lVar5,uVar3,local_48,(int)uVar6 + param_4,iVar1);
            uVar10 = 7;
            if ((iVar2 == 0) ||
               ((local_48[0] != 0 &&
                (iVar2 = FUN_144b9eb80(param_1,uVar3,local_48[0]), iVar2 != local_48[0]))))
            goto LAB_144ee91de;
            uVar11 = (int)uVar8 + local_48[0];
            uVar6 = (ulonglong)(uint)((int)uVar6 + iVar1);
            uVar8 = (ulonglong)uVar11;
            lVar5 = local_40;
          }
          FUN_1452a4fa0(lVar5,uVar3,local_48);
          if ((((local_48[0] < 1) || (iVar1 = FUN_144b9eb80(param_1,uVar3), iVar1 == local_48[0]))
              && (iVar1 = FUN_144b9eb80(param_1,"-----END ",9), iVar1 == 9)) &&
             ((iVar1 = FUN_144b9eb80(param_1,param_2,uVar7 & 0xffffffff), iVar1 == (int)uVar7 &&
              (iVar1 = FUN_144b9eb80(param_1,"-----\n",6), iVar1 == 6)))) {
            uVar6 = (ulonglong)(uVar11 + local_48[0]);
            if (uVar11 + local_48[0] != 0) goto LAB_144ee9202;
          }
          else {
            uVar6 = 0;
          }
          goto LAB_144ee91e3;
        }
        uVar10 = 0x41;
      }
    }
LAB_144ee91de:
    uVar6 = 0;
    lVar5 = local_40;
    uVar9 = uVar10;
  }
LAB_144ee91e3:
  FUN_144ba24f0(9,0x72,uVar9,"crypto\\pem\\pem_lib.c",0x292);
LAB_144ee9202:
  FUN_1452a4dd0(lVar5);
  FUN_144ea66f0(uVar3,0x2000,"crypto\\pem\\pem_lib.c",0x294);
  return uVar6;
}



// FUNCTION 144ee9240 FUN_144ee9240 body=64 status=ok
// SIG undefined FUN_144ee9240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee9240(void)

{
  FUN_144ee9d20();
  return;
}



// FUNCTION 144ee9280 FUN_144ee9280 body=986 status=ok
// SIG undefined FUN_144ee9280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee9280(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,char *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined4 local_510;
  undefined1 *local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  code *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [64];
  char local_458 [1024];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  longlong lVar5;
  
  uStack_48 = 0x144ee929f;
  local_58[0] = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_4c0 = param_8;
  lVar7 = 0;
  local_4e8 = param_9;
  local_4d8 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_4f4 = 0;
  local_4e0 = 0;
  local_4d0 = param_4;
  local_4b8 = param_2;
  local_4b0 = param_3;
  if (param_5 == 0) {
LAB_144ee93a2:
    uVar6 = local_4d0;
    local_4f0 = (*param_1)(local_4d0,0);
    if (local_4f0 < 1) {
      local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x150);
      FUN_144ba24f0(9,0x69,0xd,"crypto\\pem\\pem_lib.c");
      local_4f0 = 0;
    }
    else {
      lVar7 = FUN_144ea64e0(local_4f0 + 0x14,"crypto\\pem\\pem_lib.c",0x156);
      if (lVar7 == 0) {
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x158);
        FUN_144ba24f0(9,0x69,0x41,"crypto\\pem\\pem_lib.c");
      }
      else {
        local_4c8 = lVar7;
        local_4f8 = (*param_1)(uVar6,&local_4c8);
        if (param_5 == 0) {
          local_458[0] = '\0';
        }
        else {
          if (param_6 == (char *)0x0) {
            if (local_4c0 == (code *)0x0) {
              param_7 = FUN_144ee9670();
            }
            else {
              param_7 = (*local_4c0)(local_458,0x400,1,local_4e8);
            }
            if (param_7 < 1) {
              local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x165);
              FUN_144ba24f0(9,0x69,0x6f,"crypto\\pem\\pem_lib.c");
              goto LAB_144ee95fc;
            }
            param_6 = local_458;
          }
          uVar1 = FUN_144ba3d90(param_5);
          iVar2 = FUN_144bac850(local_4a8,uVar1);
          if (iVar2 < 1) goto LAB_144ee95fc;
          uVar6 = FUN_144e98ef0();
          local_500 = 0;
          local_508 = local_498;
          local_510 = 1;
          local_518 = (undefined1 *)CONCAT44(local_518._4_4_,param_7);
          iVar2 = FUN_1452a4b00(param_5,uVar6,local_4a8,param_6);
          if (iVar2 == 0) goto LAB_144ee95fc;
          if (param_6 == local_458) {
            FUN_14259f0c0(local_458,0x400);
          }
          local_458[0] = '\0';
          lVar3 = -1;
          do {
            lVar4 = lVar3;
            lVar3 = lVar4 + 1;
          } while (local_458[lVar4 + 1] != '\0');
          FUN_144ec7760(local_458 + lVar4 + 1,(longlong)local_58 - (longlong)(local_458 + lVar4 + 1)
                        ,"Proc-Type: 4,%s\n","ENCRYPTED");
          uVar1 = FUN_144ba3d90(param_5);
          FUN_144ee9760(local_458,local_4e0,uVar1,local_4a8);
          lVar3 = FUN_144ba50b0();
          local_4d8 = lVar3;
          if (lVar3 == 0) goto LAB_144ee95fc;
          local_518 = local_4a8;
          iVar2 = FUN_144ba4630(lVar3,param_5,0,local_498);
          if (iVar2 == 0) goto LAB_144ee95fc;
          local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
          iVar2 = FUN_144ba4660(lVar3,lVar7,&local_4f4,lVar7);
          if ((iVar2 == 0) ||
             (iVar2 = FUN_144ba46b0(lVar3,local_4f4 + lVar7,&local_4f8), iVar2 == 0))
          goto LAB_144ee95fc;
          local_4f8 = local_4f8 + local_4f4;
        }
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
        local_4f8 = FUN_144ee8fb0(local_4b0,local_4b8,local_458,lVar7);
      }
    }
  }
  else {
    uVar1 = FUN_144ba3d60(param_5);
    lVar3 = FUN_144ea8ee0(uVar1);
    local_4e0 = lVar3;
    if (((lVar3 != 0) && (iVar2 = FUN_144ba3d90(param_5), iVar2 != 0)) &&
       (iVar2 = FUN_144ba3d90(param_5), iVar2 < 0x11)) {
      iVar2 = FUN_144ba3d90(param_5);
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (*(char *)(lVar3 + lVar4) != '\0');
      if ((ulonglong)(lVar5 + 0x25 + (longlong)(iVar2 * 2)) < 0x401) goto LAB_144ee93a2;
    }
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x14a);
    FUN_144ba24f0(9,0x69,0x71,"crypto\\pem\\pem_lib.c");
    lVar7 = 0;
  }
LAB_144ee95fc:
  FUN_14259f0c0(local_498,0x40);
  FUN_14259f0c0(local_4a8,0x10);
  FUN_144ba5170(local_4d8);
  FUN_14259f0c0(local_458,0x400);
  FUN_144ea66f0(lVar7,local_4f0,"crypto\\pem\\pem_lib.c",0x194);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58[0] ^ (ulonglong)auStack_538);
}



// FUNCTION 144ee9670 FUN_144ee9670 body=235 status=ok
// SIG undefined FUN_144ee9670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ee9670(void *param_1,uint param_2,int param_3,void *param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ee9685;
  if (param_4 != (void *)0x0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)((longlong)param_4 + lVar4) != '\0');
    uVar3 = (uint)lVar4;
    if ((int)param_2 < (int)(uint)lVar4) {
      uVar3 = param_2;
    }
    memcpy(param_1,param_4,(longlong)(int)uVar3);
    return (ulonglong)uVar3;
  }
  pcVar2 = (char *)FUN_1452a4ae0();
  pcVar6 = "Enter PEM pass phrase:";
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2;
  }
  iVar1 = FUN_1452a49e0(param_1,-(param_3 != 0) & 4,(ulonglong)param_2,pcVar6,param_3,uVar7);
  if (iVar1 != 0) {
    FUN_144ba24f0(9,100,0x6d,"crypto\\pem\\pem_lib.c",0x3b);
    memset(param_1,0,(ulonglong)param_2);
    return 0xffffffffffffffff;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)param_1 + uVar5) != '\0');
  return uVar5 & 0xffffffff;
}



// FUNCTION 144ee9760 FUN_144ee9760 body=194 status=ok
// SIG undefined FUN_144ee9760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee9760(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  lVar2 = lVar2 + param_1;
  iVar4 = ((int)param_1 - (int)lVar2) + 0x400;
  iVar1 = FUN_144ec7760(lVar2,(longlong)iVar4,"DEK-Info: %s,",param_2);
  if (0 < iVar1) {
    iVar4 = iVar4 - iVar1;
    puVar3 = (undefined2 *)(lVar2 + iVar1);
    lVar2 = 0;
    if (0 < (longlong)param_3) {
      do {
        iVar1 = FUN_144ec7760(puVar3,(longlong)iVar4,&DAT_149e01569,*(undefined1 *)(lVar2 + param_4)
                             );
        if (iVar1 < 1) {
          return;
        }
        iVar4 = iVar4 - iVar1;
        lVar2 = lVar2 + 1;
        puVar3 = (undefined2 *)((longlong)puVar3 + (longlong)iVar1);
      } while (lVar2 < param_3);
    }
    if (1 < iVar4) {
      *puVar3 = 10;
    }
  }
  return;
}



// FUNCTION 144ee9830 FUN_144ee9830 body=195 status=ok
// SIG undefined FUN_144ee9830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ee9830(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ee9850;
  puVar5 = (undefined1 *)*param_1;
  if (0 < param_3) {
    puVar7 = param_2;
    for (lVar4 = (longlong)param_3; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  uVar6 = 0;
  if (0 < param_3 * 2) {
    do {
      iVar1 = FUN_144ea6c00(*puVar5);
      if (iVar1 < 0) {
        FUN_144ba24f0(9,0x65,0x67,"crypto\\pem\\pem_lib.c",0x23d,uVar8);
        return 0;
      }
      puVar5 = puVar5 + 1;
      uVar2 = uVar6;
      if ((int)uVar6 < 0) {
        uVar2 = uVar6 + 1;
      }
      uVar3 = ~uVar6;
      uVar6 = uVar6 + 1;
      param_2[(int)uVar2 >> 1] = param_2[(int)uVar2 >> 1] | (char)iVar1 << (sbyte)((uVar3 & 1) << 2)
      ;
    } while ((int)uVar6 < param_3 * 2);
  }
  *param_1 = puVar5;
  return 1;
}



// FUNCTION 144ee9900 FUN_144ee9900 body=770 status=ok
// SIG undefined FUN_144ee9900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ee9900(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res18;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    cVar2 = pcVar4[(longlong)param_2 - (longlong)param_1];
    if (cVar1 != cVar2) break;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (cVar1 != cVar2) {
    iVar3 = strcmp(param_2,"ANY PRIVATE KEY");
    if (iVar3 != 0) {
      iVar3 = strcmp(param_2,"PARAMETERS");
      if (iVar3 == 0) {
        iVar3 = FUN_144ee9c10(param_1,"PARAMETERS");
        if ((0 < iVar3) && (lVar5 = FUN_144ed2b20(&local_res18,param_1,iVar3), lVar5 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x70);
          FUN_144ec6930(local_res18);
          return (uint)(lVar5 != 0);
        }
        return 0;
      }
      iVar3 = strcmp(param_1,"X9.42 DH PARAMETERS");
      if (((((iVar3 != 0) || (iVar3 = strcmp(param_2,"DH PARAMETERS"), iVar3 != 0)) &&
           ((iVar3 = strcmp(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"CERTIFICATE"), iVar3 != 0)))) &&
          (((iVar3 = strcmp(param_1,"NEW CERTIFICATE REQUEST"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"CERTIFICATE REQUEST"), iVar3 != 0)) &&
           ((iVar3 = strcmp(param_1,"CERTIFICATE"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))))) &&
         ((iVar3 = strcmp(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
          (iVar3 = strcmp(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))) {
        iVar3 = strcmp(param_1,"CERTIFICATE");
        lVar8 = 0;
        lVar5 = lVar8;
        if (iVar3 == 0) {
          while (lVar7 = lVar5, param_2[lVar7] == (&DAT_14997b664)[lVar7]) {
            lVar5 = lVar7 + 1;
            if (lVar7 + 1 == 6) {
              return (int)lVar7 - 4;
            }
          }
        }
        iVar3 = strcmp(param_1,"PKCS #7 SIGNED DATA");
        lVar5 = lVar8;
        if (iVar3 == 0) {
          while (lVar7 = lVar5, param_2[lVar7] == (&DAT_14997b664)[lVar7]) {
            lVar5 = lVar7 + 1;
            if (lVar7 + 1 == 6) {
              return (int)lVar7 - 4;
            }
          }
        }
        iVar3 = strcmp(param_1,"CERTIFICATE");
        lVar5 = lVar8;
        lVar7 = lVar8;
        if (iVar3 == 0) {
          while (lVar6 = lVar7, param_2[lVar6] == (&DAT_149c0152c)[lVar6]) {
            lVar7 = lVar6 + 1;
            if (lVar6 + 1 == 4) {
              return (int)lVar6 - 2;
            }
          }
        }
        do {
          lVar7 = lVar5 + 1;
          if (param_1[lVar5] != (&DAT_14997b664)[lVar5]) {
            return 0;
          }
          lVar5 = lVar7;
        } while (lVar7 != 6);
        do {
          lVar5 = lVar8;
          if (param_2[lVar5] != (&DAT_149c0152c)[lVar5]) {
            return 0;
          }
          lVar8 = lVar5 + 1;
        } while (lVar5 + 1 != 4);
        return (int)lVar5 - 2;
      }
      return 1;
    }
    iVar3 = strcmp(param_1,"ENCRYPTED PRIVATE KEY");
    if (((iVar3 != 0) && (iVar3 = strcmp(param_1,"PRIVATE KEY"), iVar3 != 0)) &&
       ((iVar3 = FUN_144ee9c10(param_1,"PRIVATE KEY"), iVar3 < 1 ||
        ((lVar5 = FUN_144ed2b20(0,param_1,iVar3), lVar5 == 0 || (*(longlong *)(lVar5 + 0xb8) == 0)))
        ))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144ee9c10 FUN_144ee9c10 body=119 status=ok
// SIG undefined FUN_144ee9c10(void)

ulonglong FUN_144ee9c10(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar6;
  longlong lVar7;
  longlong lVar5;
  
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
    lVar4 = -1;
  } while (*(char *)(param_1 + lVar7) != '\0');
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  if ((int)lVar5 + 2 < (int)lVar7) {
    pcVar6 = (char *)(((longlong)(int)lVar7 - (longlong)(int)lVar4) + param_1);
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[param_2 - (longlong)pcVar6];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) && (pcVar6[-1] == ' ')) {
      return (longlong)(pcVar6 + -1) - param_1 & 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 144ee9c90 FUN_144ee9c90 body=68 status=ok
// SIG undefined FUN_144ee9c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee9c90(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_144ea6f60(param_1,param_3,"crypto\\pem\\pem_lib.c",0xdd);
    return;
  }
  FUN_144ea6530(param_1,"crypto\\pem\\pem_lib.c",0xdf);
  return;
}



// FUNCTION 144ee9ce0 FUN_144ee9ce0 body=58 status=ok
// SIG undefined FUN_144ee9ce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee9ce0(int param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_144ea6f00((longlong)param_1,"crypto\\pem\\pem_lib.c",0xe4);
    return;
  }
  FUN_144ea64e0((longlong)param_1,"crypto\\pem\\pem_lib.c",0xe5);
  return;
}



// FUNCTION 144ee9d20 FUN_144ee9d20 body=689 status=ok
// SIG undefined FUN_144ee9d20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ee9d20(undefined8 *param_1,uint *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint local_c0;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint *local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x144ee9d37;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  local_98 = param_5;
  local_88 = param_6;
  local_90 = param_7;
  uVar6 = param_8 & 1;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  uVar8 = uVar5;
  local_80 = param_1;
  local_78 = param_2;
  while( true ) {
    uVar2 = local_a8;
    uVar1 = local_b0;
    if (uVar6 == 0) {
      FUN_144ea6530(uVar5,"crypto\\pem\\pem_lib.c",0xdf);
      FUN_144ea6530(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
      FUN_144ea6530(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      FUN_144ea6f60(uVar5,0,"crypto\\pem\\pem_lib.c",0xdd);
      FUN_144ea6f60(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
      FUN_144ea6f60(uVar2,(longlong)(int)uVar8,"crypto\\pem\\pem_lib.c",0xdd);
    }
    local_c8 = &local_b8;
    local_c0 = param_8;
    iVar3 = FUN_144ee8c60(local_98,&local_a0,&local_b0,&local_a8);
    uVar5 = local_a0;
    if (iVar3 == 0) {
      uVar6 = FUN_144ba2690();
      if ((uVar6 & 0xfff) == 0x6c) {
        FUN_144ba2bd0(2,"Expecting: ",param_4);
      }
      goto LAB_144ee9fc1;
    }
    iVar3 = FUN_144ee9900(local_a0);
    uVar1 = local_b0;
    if (iVar3 != 0) break;
    uVar8 = (ulonglong)local_b8;
  }
  iVar4 = FUN_144ee8760(local_b0,local_70);
  uVar2 = local_a8;
  iVar3 = local_b4;
  if (iVar4 != 0) {
    local_c8 = local_90;
    iVar4 = FUN_144ee8a50(local_70,local_a8,&local_b8,local_88);
    iVar3 = local_b4;
    if (iVar4 != 0) {
      *local_80 = uVar2;
      *local_78 = local_b8;
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = uVar5;
      }
      iVar3 = 1;
      uVar7 = local_b8;
      if (param_3 != (ulonglong *)0x0) goto LAB_144ee9f32;
    }
  }
  uVar7 = local_b8;
  if (uVar6 == 0) {
    FUN_144ea6530(uVar5,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    FUN_144ea6f60(uVar5,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
LAB_144ee9f32:
  if (uVar6 == 0) {
    FUN_144ea6530(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    FUN_144ea6f60(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
  if (iVar3 == 0) {
    if (uVar6 == 0) {
      FUN_144ea6530(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      FUN_144ea6f60(uVar2,(longlong)(int)uVar7,"crypto\\pem\\pem_lib.c",0xdd);
    }
  }
LAB_144ee9fc1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144ee9ff0 FUN_144ee9ff0 body=264 status=ok
// SIG undefined FUN_144ee9ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ee9ff0(char *param_1,uint param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(int)param_2;
  if ((param_3 & 2) == 0) {
    iVar4 = 0;
    if ((param_3 & 4) == 0) {
      if (0 < (longlong)uVar5) {
        pcVar3 = param_1;
        do {
          cVar1 = *pcVar3;
          if ((cVar1 == '\n') || (cVar1 == '\r')) break;
          iVar2 = FUN_144ecfdd0((int)cVar1,0x40);
          if (iVar2 != 0) {
            *pcVar3 = ' ';
          }
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + 1;
        } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
      }
    }
    else if (0 < (longlong)uVar5) {
      pcVar3 = param_1;
      do {
        iVar2 = FUN_144ecfdd0((int)*pcVar3,0x400);
        if (((iVar2 == 0) || (*pcVar3 == '\n')) || (*pcVar3 == '\r')) break;
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + 1;
      } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
    }
  }
  else {
    if (-1 < (int)param_2) {
      pcVar3 = param_1 + uVar5;
      do {
        param_2 = (uint)uVar5;
        if (' ' < *pcVar3) break;
        pcVar3 = pcVar3 + -1;
        param_2 = param_2 - 1;
        uVar5 = (ulonglong)param_2;
      } while (-1 < (int)param_2);
    }
    iVar4 = param_2 + 1;
  }
  param_1[iVar4] = '\n';
  param_1[iVar4 + 1] = '\0';
  return iVar4 + 1;
}



// FUNCTION 144eea100 FUN_144eea100 body=467 status=ok
// SIG undefined FUN_144eea100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eea100(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  void *_Dst;
  uint uVar3;
  size_t _Size;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144eea11f;
  uVar5 = 0;
  uVar3 = param_3 & 1;
  if (uVar3 == 0) {
    _Str1 = (char *)FUN_144ea64e0(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)FUN_144ea6f00(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  if (_Str1 == (char *)0x0) {
    FUN_144ba24f0(9,0x90,0x41,"crypto\\pem\\pem_lib.c",0x2e1,uVar7);
    uVar5 = 0;
  }
  else {
    do {
      iVar1 = FUN_144b9e970(param_1,_Str1,0xff);
      if (iVar1 < 1) {
        uVar6 = 0x2e9;
        uVar4 = 0x6c;
        goto LAB_144eea26a;
      }
      iVar1 = FUN_144ee9ff0(_Str1,iVar1,param_3 & 0xfffffffb);
      iVar2 = strncmp(_Str1,"-----BEGIN ",0xb);
    } while (((iVar2 != 0) || (iVar1 < 6)) ||
            (iVar2 = strncmp(_Str1 + (longlong)iVar1 + -6,"-----\n",6), iVar2 != 0));
    _Size = (size_t)(iVar1 + -0x10);
    _Str1[iVar1 + -6] = '\0';
    if (uVar3 == 0) {
      _Dst = (void *)FUN_144ea64e0(_Size,"crypto\\pem\\pem_lib.c",0xe5);
    }
    else {
      _Dst = (void *)FUN_144ea6f00(_Size,"crypto\\pem\\pem_lib.c",0xe4);
    }
    *param_2 = _Dst;
    if (_Dst == (void *)0x0) {
      uVar6 = 0x2f8;
      uVar4 = 0x41;
LAB_144eea26a:
      FUN_144ba24f0(9,0x90,uVar4,"crypto\\pem\\pem_lib.c",uVar6);
    }
    else {
      memcpy(_Dst,_Str1 + 0xb,_Size);
      uVar5 = 1;
    }
    if (uVar3 == 0) {
      FUN_144ea6530(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      FUN_144ea6f60(_Str1,0x100,"crypto\\pem\\pem_lib.c");
    }
  }
  return uVar5;
}



// FUNCTION 144eea2e0 FUN_144eea2e0 body=706 status=ok
// SIG undefined FUN_144eea2e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144eea2e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *_Str1;
  void *pvVar7;
  size_t _MaxCount;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar11 = 0;
  uVar10 = *param_2;
  bVar3 = false;
  iVar8 = 0;
  if ((param_5 & 1) == 0) {
    _Str1 = (char *)FUN_144ea64e0(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)FUN_144ea6f00(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  bVar1 = false;
  if (_Str1 == (char *)0x0) {
    FUN_144ba24f0(9,0x8f,0x41,"crypto\\pem\\pem_lib.c",0x324);
    return 0;
  }
LAB_144eea392:
  do {
    iVar5 = FUN_144b9e970(param_1,_Str1,0xff);
    if (iVar5 < 1) {
      uVar11 = 0x32c;
LAB_144eea53c:
      FUN_144ba24f0(9,0x8f,0x66,"crypto\\pem\\pem_lib.c",uVar11);
      uVar11 = 0;
LAB_144eea556:
      if ((param_5 & 1) == 0) {
        FUN_144ea6530(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
      }
      else {
        FUN_144ea6f60(_Str1,0x100,"crypto\\pem\\pem_lib.c");
      }
      return uVar11;
    }
    if ((iVar5 != 0xfe) || (bVar2 = true, _Str1[0xfd] == '\n')) {
      bVar2 = false;
    }
    if ((iVar8 == 0) && (pvVar7 = memchr(_Str1,0x3a,(longlong)iVar5), pvVar7 != (void *)0x0)) {
      iVar8 = 1;
    }
    iVar6 = strncmp(_Str1,"-----END ",9);
    if ((iVar6 == 0) || (uVar9 = 0xffffffff, iVar8 == 1)) {
      uVar9 = 0xfffffffb;
    }
    iVar5 = FUN_144ee9ff0(_Str1,iVar5,uVar9 & param_5);
    if (*_Str1 == '\n') break;
    iVar6 = strncmp(_Str1,"-----END ",9);
    if (iVar6 == 0) {
      _MaxCount = 0xffffffffffffffff;
      do {
        _MaxCount = _MaxCount + 1;
      } while (param_4[_MaxCount] != '\0');
      iVar5 = strncmp(_Str1 + 9,param_4,_MaxCount);
      if ((iVar5 == 0) && (iVar5 = strncmp(_Str1 + 9 + _MaxCount,"-----\n",6), iVar5 == 0)) {
        if (iVar8 == 0) {
          *param_2 = *param_3;
          *param_3 = uVar10;
        }
        uVar11 = 1;
        goto LAB_144eea556;
      }
      uVar11 = 0x358;
      goto LAB_144eea53c;
    }
    if (bVar3) {
      uVar11 = 0x362;
      goto LAB_144eea53c;
    }
    iVar6 = FUN_144b9ebc0(uVar10,_Str1);
    if (iVar6 < 0) goto LAB_144eea556;
    bVar1 = bVar2;
    if (iVar8 == 2) {
      if (0x41 < iVar5) goto LAB_144eea556;
      if (iVar5 < 0x41) {
        bVar3 = true;
      }
    }
  } while( true );
  bVar4 = !bVar1;
  bVar1 = bVar2;
  if (bVar4) {
    if (iVar8 == 2) {
      uVar11 = 0x349;
      goto LAB_144eea53c;
    }
    iVar8 = 2;
    uVar10 = *param_3;
  }
  goto LAB_144eea392;
}



// FUNCTION 144eea5b0 FUN_144eea5b0 body=240 status=ok
// SIG undefined FUN_144eea5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eea5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  local_18 = (char *)0x0;
  local_20 = 0;
  local_10 = 0;
  iVar1 = FUN_144ee9240(&local_10,local_28,&local_18,"DH PARAMETERS",param_1,param_3,param_4);
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_20 = local_10;
  iVar1 = strcmp(local_18,"X9.42 DH PARAMETERS");
  if (iVar1 == 0) {
    lVar2 = FUN_144ee74d0();
  }
  else {
    lVar2 = FUN_144ee7490(param_2,&local_20,local_28[0]);
  }
  if (lVar2 == 0) {
    FUN_144ba24f0(9,0x8d,0xd,"crypto\\pem\\pem_pkey.c",CONCAT44(uVar3,0xe4));
  }
  FUN_144ea6530(local_18,"crypto\\pem\\pem_pkey.c",0xe5);
  FUN_144ea6530(local_10,"crypto\\pem\\pem_pkey.c",0xe6);
  return lVar2;
}



// FUNCTION 144eea6a0 FUN_144eea6a0 body=646 status=ok
// SIG undefined FUN_144eea6a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eea6a0(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  code *local_480;
  undefined8 local_478;
  int local_468 [2];
  undefined8 local_460;
  char *local_458;
  undefined8 local_450;
  undefined1 local_448 [1024];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_458 = (char *)0x0;
  local_460 = 0;
  local_450 = 0;
  local_488 = param_1;
  local_480 = param_3;
  local_478 = param_4;
  iVar1 = FUN_144ee8f70(&local_450,local_468,&local_458,"ANY PRIVATE KEY");
  _Str1 = local_458;
  if (iVar1 == 0) goto LAB_144eea916;
  local_460 = local_450;
  iVar1 = strcmp(local_458,"PRIVATE KEY");
  if (iVar1 == 0) {
    lVar2 = FUN_144efe460(0,&local_460,local_468[0]);
    if (lVar2 == 0) goto LAB_144eea8b0;
    lVar3 = FUN_144efe5a0(lVar2);
    if (param_2 != (longlong *)0x0) {
      FUN_144ba6e60(*param_2);
      *param_2 = lVar3;
    }
    FUN_144efe440(lVar2);
LAB_144eea8ab:
    if (lVar3 == 0) goto LAB_144eea8b0;
  }
  else {
    iVar1 = strcmp(_Str1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 == 0) {
      lVar3 = FUN_144ef1030(0,&local_460,local_468[0]);
      if (lVar3 != 0) {
        if (param_3 == (code *)0x0) {
          iVar1 = FUN_144ee9670(local_448,0x400,0,param_4);
        }
        else {
          iVar1 = (*param_3)();
        }
        if (iVar1 < 0) {
          local_488 = CONCAT44(local_488._4_4_,0x40);
          FUN_144ba24f0(9,0x7b,0x68,"crypto\\pem\\pem_pkey.c");
          FUN_144ef1010(lVar3);
          goto LAB_144eea8d0;
        }
        lVar2 = FUN_1452a5580(lVar3,local_448,iVar1);
        FUN_144ef1010(lVar3);
        FUN_14259f0c0(local_448,(longlong)iVar1);
        if (lVar2 != 0) {
          lVar3 = FUN_144efe5a0(lVar2);
          if (param_2 != (longlong *)0x0) {
            FUN_144ba6e60(*param_2);
            *param_2 = lVar3;
          }
          FUN_144efe440(lVar2);
          goto LAB_144eea8ab;
        }
      }
    }
    else {
      iVar1 = FUN_144ee9c10(_Str1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (puVar4 = (undefined4 *)FUN_144ed2b20(0,local_458,iVar1), puVar4 != (undefined4 *)0x0)) &&
         (*(longlong *)(puVar4 + 0x2e) != 0)) {
        lVar3 = FUN_144efdb30(*puVar4,param_2,&local_460,local_468[0]);
        goto LAB_144eea8ab;
      }
    }
LAB_144eea8b0:
    local_488 = CONCAT44(local_488._4_4_,0x58);
    FUN_144ba24f0(9,0x7b,0xd,"crypto\\pem\\pem_pkey.c");
  }
LAB_144eea8d0:
  FUN_144ea6f40(local_458,"crypto\\pem\\pem_pkey.c",0x5a);
  FUN_144ea6f60(local_450,(longlong)local_468[0],"crypto\\pem\\pem_pkey.c",0x5b);
LAB_144eea916:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_4a8);
}



// FUNCTION 144eea940 FUN_144eea940 body=135 status=ok
// SIG undefined FUN_144eea940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eea940(undefined8 param_1)

{
  NTSTATUS NVar1;
  longlong lVar2;
  PUCHAR pbBuffer;
  longlong lVar3;
  
  lVar2 = FUN_144bad0b0(param_1,1);
  pbBuffer = (PUCHAR)FUN_144bad290(param_1,lVar2);
  if (pbBuffer != (PUCHAR)0x0) {
    NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,pbBuffer,(ULONG)lVar2,2);
    lVar3 = 0;
    if (NVar1 == 0) {
      lVar3 = lVar2;
    }
    FUN_144bad320(param_1,lVar3,lVar3 * 8);
    lVar2 = FUN_144bad080(param_1);
    if (lVar2 != 0) {
      return;
    }
  }
  FUN_144bad080(param_1);
  return;
}



// FUNCTION 144eea9d0 FUN_144eea9d0 body=116 status=ok
// SIG undefined FUN_144eea9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eea9d0(undefined8 param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  DWORD local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144eea9dc;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_24 = (undefined1  [8])0x0;
  local_1c = 0;
  local_28 = GetCurrentProcessId();
  DVar1 = GetCurrentThreadId();
  local_24._0_4_ = DVar1;
  GetSystemTimeAsFileTime((LPFILETIME)(local_24 + 4));
  FUN_144bad1a0(param_1,&local_28,0x10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144eeaa50 FUN_144eeaa50 body=102 status=ok
// SIG undefined FUN_144eeaa50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeaa50(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  DWORD local_28 [2];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144eeaa5c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_20.QuadPart = 0;
  local_28[0] = GetCurrentThreadId();
  QueryPerformanceCounter(&local_20);
  FUN_144bad1a0(param_1,local_28,0x10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144eeaac0 FUN_144eeaac0 body=6 status=ok
// SIG undefined FUN_144eeaac0(void)

undefined8 FUN_144eeaac0(void)

{
  return 1;
}



// FUNCTION 144eeaad0 FUN_144eeaad0 body=3 status=ok
// SIG undefined FUN_144eeaad0(void)

void FUN_144eeaad0(void)

{
  return;
}



// FUNCTION 144eeaae0 FUN_144eeaae0 body=80 status=ok
// SIG undefined FUN_144eeaae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eeaae0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7975b8,FUN_144eeabc0,param_1,&DAT_149c01590,1,0,0x144eeaaea);
    return uVar1;
  }
  return 1;
}



// FUNCTION 144eeab30 FUN_144eeab30 body=10 status=ok
// SIG undefined FUN_144eeab30(void)

undefined8 FUN_144eeab30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



// FUNCTION 144eeab40 FUN_144eeab40 body=5 status=ok
// SIG undefined FUN_144eeab40(void)

undefined8 FUN_144eeab40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 144eeab50 FUN_144eeab50 body=32 status=ok
// SIG undefined FUN_144eeab50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeab50(void)

{
  FUN_145291360(&DAT_14c7975b8,1);
  return;
}



// FUNCTION 144eeab70 FUN_144eeab70 body=80 status=ok
// SIG undefined FUN_144eeab70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eeab70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7975b8,FUN_144eeabc0,param_1,&DAT_149c01590,1,1,0x144eeab7a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 144eeabc0 FUN_144eeabc0 body=29 status=ok
// SIG undefined FUN_144eeabc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeabc0(void)

{
  FUN_145291300(&DAT_14c7975b8);
  return;
}



// FUNCTION 144eeabe0 FUN_144eeabe0 body=313 status=ok
// SIG undefined FUN_144eeabe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144eeabe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144eeabfa;
  plVar3 = (longlong *)FUN_144ea6670(0x48,"crypto\\bn\\bn_blind.c",0x16);
  if (plVar3 == (longlong *)0x0) {
    FUN_144ba24f0(3,0x66,0x41,"crypto\\bn\\bn_blind.c",0x17,uVar5);
    return (longlong *)0x0;
  }
  lVar4 = FUN_144e985a0();
  plVar3[8] = lVar4;
  if (lVar4 == 0) {
    FUN_144ba24f0(3,0x66,0x41,"crypto\\bn\\bn_blind.c",0x1d,uVar5);
    FUN_144ea6530(plVar3,"crypto\\bn\\bn_blind.c",0x1e);
    return (longlong *)0x0;
  }
  uVar1 = FUN_144e98800();
  *(undefined4 *)(plVar3 + 4) = uVar1;
  if (param_1 != 0) {
    lVar4 = FUN_144ba0e20(param_1);
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_144eeaccf;
  }
  if (param_2 != 0) {
    lVar4 = FUN_144ba0e20(param_2);
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_144eeaccf;
  }
  lVar4 = FUN_144ba0e20(param_3);
  plVar3[3] = lVar4;
  if (lVar4 != 0) {
    iVar2 = FUN_144ba0230(param_3,4);
    if (iVar2 != 0) {
      FUN_144ba0220(plVar3[3],4);
    }
    *(undefined4 *)((longlong)plVar3 + 0x24) = 0xffffffff;
    return plVar3;
  }
LAB_144eeaccf:
  FUN_144eead20(plVar3);
  return (longlong *)0x0;
}



// FUNCTION 144eead20 FUN_144eead20 body=93 status=ok
// SIG undefined FUN_144eead20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eead20(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ba0cd0(*param_1);
    FUN_144ba0cd0(param_1[1]);
    FUN_144ba0cd0(param_1[2]);
    FUN_144ba0cd0(param_1[3]);
    FUN_144e98660(param_1[8]);
    FUN_144ea6530(param_1,"crypto\\bn\\bn_blind.c",0x4c);
  }
  return;
}



// FUNCTION 144eead80 FUN_144eead80 body=297 status=ok
// SIG undefined FUN_144eead80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eead80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    FUN_144ba24f0(3,0x67,0x6b,"crypto\\bn\\bn_blind.c",0x54,0x144eead9a);
    goto LAB_144eeae89;
  }
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  if (((*(int *)((longlong)param_1 + 0x24) == 0x20) && (param_1[2] != 0)) &&
     ((*(byte *)(param_1 + 5) & 2) == 0)) {
    lVar2 = FUN_144eeb1d0(param_1,0,0,param_2,0,0);
    bVar4 = lVar2 == 0;
LAB_144eeae60:
    uVar3 = 0;
    if (bVar4) goto LAB_144eeae89;
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if (param_1[6] == 0) {
      iVar1 = FUN_1452a57a0(lVar2,lVar2,lVar2,param_1[3],param_2);
      if (iVar1 == 0) goto LAB_144eeae89;
      lVar2 = *param_1;
      iVar1 = FUN_1452a57a0(lVar2,lVar2,lVar2,param_1[3],param_2);
      bVar4 = iVar1 == 0;
      goto LAB_144eeae60;
    }
    iVar1 = FUN_144ecebf0();
    if (iVar1 == 0) goto LAB_144eeae89;
    lVar2 = *param_1;
    iVar1 = FUN_144ecebf0(lVar2,lVar2,lVar2,param_1[6],param_2);
    if (iVar1 == 0) goto LAB_144eeae89;
  }
  uVar3 = 1;
LAB_144eeae89:
  if (*(int *)((longlong)param_1 + 0x24) == 0x20) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  return uVar3;
}



// FUNCTION 144eeaeb0 FUN_144eeaeb0 body=204 status=ok
// SIG undefined FUN_144eeaeb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eeaeb0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    FUN_144ba24f0(3,100,0x6b,"crypto\\bn\\bn_blind.c",0x7f,0x144eeaeca);
LAB_144eeaf65:
    uVar3 = 0;
  }
  else {
    if (*(int *)((longlong)param_3 + 0x24) == -1) {
      *(undefined4 *)((longlong)param_3 + 0x24) = 0;
    }
    else {
      iVar1 = FUN_144eead80(param_3,param_4);
      if (iVar1 == 0) goto LAB_144eeaf65;
    }
    if (param_2 != 0) {
      lVar2 = FUN_144ba06b0(param_2,param_3[1]);
      if (lVar2 == 0) goto LAB_144eeaf65;
    }
    if (param_3[6] == 0) {
      uVar3 = FUN_1452a57a0(param_1,param_1,*param_3,param_3[3],param_4);
    }
    else {
      uVar3 = FUN_144ece730();
    }
  }
  return uVar3;
}



// FUNCTION 144eeaf80 FUN_144eeaf80 body=447 status=ok
// SIG undefined FUN_144eeaf80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eeaf80(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if ((param_2 == 0) && (param_2 = *(longlong *)(param_3 + 8), param_2 == 0)) {
    FUN_144ba24f0(3,0x65,0x6b,"crypto\\bn\\bn_blind.c",0xa1);
    return 0;
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    uVar2 = *(uint *)(param_2 + 8);
    uVar7 = (ulonglong)(int)uVar2;
    if ((int)uVar2 <= *(int *)((longlong)param_1 + 0xc)) {
      uVar6 = param_1[1];
      lVar10 = (longlong)(int)(uint)uVar6;
      uVar8 = 0;
      if (uVar7 != 0) {
        if (3 < uVar7) {
          puVar3 = (ulonglong *)*param_1;
          if ((param_1 < puVar3) || (puVar3 + (uVar7 - 1) < param_1)) {
            do {
              uVar5 = (puVar3 + uVar8)[1];
              puVar3[uVar8] = (longlong)(uVar8 - lVar10) >> 0x3f & puVar3[uVar8];
              (puVar3 + uVar8)[1] = (longlong)((uVar8 + 1) - lVar10) >> 0x3f & uVar5;
              uVar5 = (puVar3 + uVar8 + 2)[1];
              puVar3[uVar8 + 2] = (longlong)((uVar8 + 2) - lVar10) >> 0x3f & puVar3[uVar8 + 2];
              (puVar3 + uVar8 + 2)[1] = (longlong)((uVar8 + 3) - lVar10) >> 0x3f & uVar5;
              uVar8 = uVar8 + 4;
            } while (uVar8 < uVar7 - (uVar2 & 3));
          }
        }
        if (uVar8 < uVar7) {
          do {
            puVar3 = (ulonglong *)(*param_1 + uVar8 * 8);
            lVar1 = uVar8 - lVar10;
            uVar8 = uVar8 + 1;
            *puVar3 = *puVar3 & lVar1 >> 0x3f;
          } while (uVar8 < uVar7);
        }
      }
      uVar4 = (uint)((longlong)(uVar7 - lVar10) >> 0x3f);
      *(uint *)(param_1 + 1) = ~uVar4 & uVar2 | (uint)uVar6 & uVar4;
    }
    uVar9 = FUN_144ece730(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x30),param_4);
    return uVar9;
  }
  uVar9 = FUN_1452a57a0(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4,0x144eeaf90)
  ;
  return uVar9;
}



// FUNCTION 144eeb140 FUN_144eeb140 body=38 status=ok
// SIG undefined FUN_144eeb140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeb140(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144e98800();
  FUN_144e98820(uVar1,*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144eeb170 FUN_144eeb170 body=32 status=ok
// SIG undefined FUN_144eeb170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeb170(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144e98800();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 144eeb190 FUN_144eeb190 body=26 status=ok
// SIG undefined FUN_144eeb190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeb190(longlong param_1)

{
  FUN_144e98620(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 144eeb1b0 FUN_144eeb1b0 body=26 status=ok
// SIG undefined FUN_144eeb1b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeb1b0(longlong param_1)

{
  FUN_144e98640(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 144eeb1d0 FUN_144eeb1d0 body=476 status=ok
// SIG undefined FUN_144eeb1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_144eeb1d0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res8 [2];
  
  plVar3 = param_1;
  if (param_1 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_144eeabe0(0,0);
  }
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 == 0) {
      lVar4 = FUN_144ba0570();
      *plVar3 = lVar4;
      if (lVar4 == 0) goto LAB_144eeb387;
    }
    if (plVar3[1] == 0) {
      lVar4 = FUN_144ba0570();
      plVar3[1] = lVar4;
      if (lVar4 == 0) goto LAB_144eeb387;
    }
    if (param_2 != 0) {
      FUN_144ba0cd0(plVar3[2]);
      lVar4 = FUN_144ba0e20(param_2);
      plVar3[2] = lVar4;
    }
    if (plVar3[2] != 0) {
      if (param_5 != 0) {
        plVar3[7] = param_5;
      }
      if (param_6 != 0) {
        plVar3[6] = param_6;
      }
      iVar1 = FUN_1452983f0(*plVar3,plVar3[3]);
      iVar2 = 0x20;
      while (iVar1 != 0) {
        lVar4 = FUN_144ef0680(plVar3[1],*plVar3,plVar3[3],param_4,local_res8);
        if (lVar4 != 0) {
          if (((code *)plVar3[7] == (code *)0x0) || (plVar3[6] == 0)) {
            iVar2 = FUN_1452a5e00(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar2 = (*(code *)plVar3[7])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4,plVar3[6]);
          }
          if (iVar2 != 0) {
            if (plVar3[6] == 0) {
              return plVar3;
            }
            iVar2 = FUN_144eced20(plVar3[1],plVar3[1],plVar3[6],param_4);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_144eced20(*plVar3,*plVar3,plVar3[6],param_4), iVar2 != 0)) {
              return plVar3;
            }
          }
          break;
        }
        if (local_res8[0] == 0) break;
        if (iVar2 == 0) {
          FUN_144ba24f0(3,0x80,0x71,"crypto\\bn\\bn_blind.c",0x10f);
          break;
        }
        iVar1 = FUN_1452983f0(*plVar3,plVar3[3]);
        iVar2 = iVar2 + -1;
      }
    }
  }
LAB_144eeb387:
  if (param_1 == (longlong *)0x0) {
    FUN_144eead20(plVar3);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 144eeb3b0 FUN_144eeb3b0 body=743 status=ok
// SIG undefined FUN_144eeb3b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144eeb3b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffffc0;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar2 = 0;
  uVar9 = 0xffffffff;
  lVar7 = 0;
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    FUN_144ba24f0(4,0x68,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar11,0x4d));
    return 0xffffffff;
  }
  iVar1 = FUN_144ba0ef0(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar5 = CONCAT44(uVar11,0x52);
LAB_144eeb434:
    FUN_144ba24f0(4,0x68,0x65,"crypto\\rsa\\rsa_ossl.c",uVar5);
    return 0xffffffff;
  }
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar5 = CONCAT44(uVar11,0x59);
    goto LAB_144eeb434;
  }
  lVar4 = FUN_144eedd20();
  uVar3 = 0xffffffff;
  if (lVar4 == 0) goto LAB_144eeb659;
  FUN_144eede20(lVar4);
  uVar5 = FUN_144eede90(lVar4);
  lVar6 = FUN_144eede90(lVar4);
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar7 = FUN_144ea64e0((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",100);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    uVar10 = CONCAT44(uVar11,0x66);
    uVar5 = 0x41;
  }
  else {
    if (param_5 == 1) {
      iVar1 = FUN_1452a8b70(lVar7,iVar2,param_2,param_1);
    }
    else if (param_5 == 2) {
      iVar1 = FUN_1452a9d60(lVar7,iVar2,param_2,param_1);
    }
    else if (param_5 == 3) {
      iVar1 = FUN_1452aa320(lVar7,iVar2,param_2,param_1);
    }
    else {
      if (param_5 != 4) {
        uVar10 = CONCAT44(uVar11,0x78);
        uVar5 = 0x76;
        goto LAB_144eeb640;
      }
      uVar11 = 0;
      iVar1 = FUN_1452a91d0(lVar7,iVar2,param_2,param_1,0,
                            in_stack_ffffffffffffffc0 & 0xffffffff00000000);
    }
    uVar3 = uVar9;
    if ((iVar1 < 1) || (lVar8 = FUN_144ba0740(lVar7,iVar2,uVar5), lVar8 == 0)) goto LAB_144eeb659;
    iVar1 = FUN_144ba0ef0(uVar5,*(undefined8 *)(param_4 + 0x18));
    if (iVar1 < 0) {
      if ((((*(byte *)(param_4 + 0x74) & 2) == 0) ||
          (lVar8 = FUN_144eceb30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                 *(undefined8 *)(param_4 + 0x18),lVar4), lVar8 != 0)) &&
         (iVar1 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                            (lVar6,uVar5,*(undefined8 *)(param_4 + 0x20),
                             *(undefined8 *)(param_4 + 0x18),lVar4,*(undefined8 *)(param_4 + 0x78)),
         iVar1 != 0)) {
        uVar3 = FUN_144ba09d0(lVar6,param_3,iVar2);
      }
      goto LAB_144eeb659;
    }
    uVar10 = CONCAT44(uVar11,0x84);
    uVar5 = 0x84;
  }
LAB_144eeb640:
  FUN_144ba24f0(4,0x68,uVar5,"crypto\\rsa\\rsa_ossl.c",uVar10);
  uVar3 = 0xffffffff;
LAB_144eeb659:
  FUN_144eedf20(lVar4);
  FUN_144eeddc0(lVar4);
  FUN_144ea66f0(lVar7,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x99);
  return uVar3;
}



// FUNCTION 144eeb6a0 FUN_144eeb6a0 body=957 status=ok
// SIG undefined FUN_144eeb6a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144eeb6a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar10;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uStack_30 = 0x144eeb6bc;
  lVar6 = 0;
  local_44 = 0xffffffff;
  iVar1 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lVar3 = FUN_144eedd20();
  if (lVar3 == 0) goto LAB_144eeba1c;
  FUN_144eede20(lVar3);
  lVar4 = FUN_144eede90(lVar3);
  lVar5 = FUN_144eede90(lVar3);
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar6 = FUN_144ea64e0((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0xff);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar10 = CONCAT44(uVar9,0x101);
LAB_144eeb9f2:
    uVar9 = 0x41;
  }
  else if (param_5 == 1) {
    iVar2 = FUN_1452a8910(lVar6,iVar1,param_2,param_1);
LAB_144eeb7c1:
    if ((iVar2 < 1) || (lVar7 = FUN_144ba0740(lVar6,iVar1,lVar4), lVar7 == 0)) goto LAB_144eeba1c;
    iVar2 = FUN_144ba0ef0(lVar4,*(undefined8 *)(param_4 + 0x18));
    if (iVar2 < 0) {
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar7 = FUN_144eceb30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                *(undefined8 *)(param_4 + 0x18),lVar3), lVar7 == 0))
      goto LAB_144eeba1c;
      lVar7 = local_38;
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        lVar7 = FUN_144eecb90(param_4,&local_48,lVar3);
        if (lVar7 == 0) {
          uVar10 = CONCAT44(uVar9,0x129);
          uVar9 = 0x44;
          goto LAB_144eeb9f8;
        }
        if ((local_48 == 0) && (local_40 = FUN_144eede90(lVar3), local_40 == 0)) {
          uVar10 = CONCAT44(uVar9,0x130);
          goto LAB_144eeb9f2;
        }
        iVar2 = FUN_144eecc50(lVar7,lVar4,local_40,lVar3);
        if (iVar2 == 0) goto LAB_144eeba1c;
      }
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         (((*(longlong *)(param_4 + 0x30) == 0 ||
           (((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)))) || (*(longlong *)(param_4 + 0x50) == 0)))) {
        lVar8 = FUN_144ba0570();
        if (lVar8 == 0) {
          uVar10 = CONCAT44(uVar9,0x141);
          goto LAB_144eeb9f2;
        }
        if (*(longlong *)(param_4 + 0x28) == 0) {
          FUN_144ba24f0(4,0x66,0xb3,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar9,0x145));
        }
        else {
          FUN_144ba0240(lVar8,*(longlong *)(param_4 + 0x28),4);
          iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                            (lVar5,lVar4,lVar8,*(undefined8 *)(param_4 + 0x18),lVar3,
                             *(undefined8 *)(param_4 + 0x78));
          if (iVar2 != 0) {
            FUN_144ba0cd0(lVar8);
            goto LAB_144eeb987;
          }
        }
        FUN_144ba0cd0(lVar8);
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(lVar5,lVar4,param_4,lVar3);
        if (iVar2 == 0) goto LAB_144eeba1c;
LAB_144eeb987:
        if ((lVar7 == 0) || (iVar2 = FUN_144eeaf80(lVar5,local_40,lVar7,lVar3), iVar2 != 0)) {
          if (param_5 == 5) {
            iVar2 = FUN_144eee270(lVar4,*(undefined8 *)(param_4 + 0x18),lVar5);
            if (iVar2 == 0) goto LAB_144eeba1c;
            iVar2 = FUN_144ba0c40(lVar5,lVar4);
            if (0 < iVar2) {
              lVar5 = lVar4;
            }
          }
          local_44 = FUN_144ba09d0(lVar5,param_3,iVar1);
        }
      }
      goto LAB_144eeba1c;
    }
    uVar10 = CONCAT44(uVar9,0x11d);
    uVar9 = 0x84;
  }
  else {
    if (param_5 == 3) {
      iVar2 = FUN_1452aa320(lVar6,iVar1,param_2,param_1);
      goto LAB_144eeb7c1;
    }
    if (param_5 == 5) {
      iVar2 = FUN_1452aa3a0(lVar6,iVar1,param_2,param_1);
      goto LAB_144eeb7c1;
    }
    uVar10 = CONCAT44(uVar9,0x111);
    uVar9 = 0x76;
  }
LAB_144eeb9f8:
  FUN_144ba24f0(4,0x66,uVar9,"crypto\\rsa\\rsa_ossl.c",uVar10);
LAB_144eeba1c:
  FUN_144eedf20(lVar3);
  FUN_144eeddc0(lVar3);
  FUN_144ea66f0(lVar6,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x16b);
  return local_44;
}



// FUNCTION 144eeba60 FUN_144eeba60 body=792 status=ok
// SIG undefined FUN_144eeba60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eeba60(int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  byte *pbVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 uVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  _Src = (void *)0x0;
  iVar2 = 0;
  iVar3 = -1;
  iVar9 = -1;
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    FUN_144ba24f0(4,0x67,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar11,0x208));
    return -1;
  }
  iVar1 = FUN_144ba0ef0(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar5 = CONCAT44(uVar11,0x20d);
LAB_144eebae0:
    FUN_144ba24f0(4,0x67,0x65,"crypto\\rsa\\rsa_ossl.c",uVar5);
    return -1;
  }
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar5 = CONCAT44(uVar11,0x214);
    goto LAB_144eebae0;
  }
  lVar4 = FUN_144eedd20();
  if (lVar4 == 0) goto LAB_144eebd3d;
  FUN_144eede20(lVar4);
  uVar5 = FUN_144eede90(lVar4);
  lVar6 = FUN_144eede90(lVar4);
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)FUN_144ea64e0((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x21f);
  if ((lVar6 == 0) || (_Src == (void *)0x0)) {
    uVar10 = 0x221;
    uVar5 = 0x41;
  }
  else if (iVar2 < param_1) {
    uVar10 = 0x22a;
    uVar5 = 0x6c;
    iVar9 = iVar3;
  }
  else {
    lVar7 = FUN_144ba0740(param_2,param_1,uVar5);
    if (lVar7 == 0) goto LAB_144eebd3d;
    iVar3 = FUN_144ba0ef0(uVar5,*(undefined8 *)(param_4 + 0x18));
    if (iVar3 < 0) {
      iVar3 = iVar9;
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar7 = FUN_144eceb30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                *(undefined8 *)(param_4 + 0x18),lVar4), lVar7 == 0))
      goto LAB_144eebd3d;
      lVar7 = lVar4;
      iVar1 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                        (lVar6,uVar5,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x18)
                         ,lVar4,*(undefined8 *)(param_4 + 0x78));
      uVar11 = (undefined4)((ulonglong)lVar7 >> 0x20);
      if ((iVar1 == 0) ||
         (((param_5 == 5 && (pbVar8 = (byte *)FUN_145299350(lVar6), (*pbVar8 & 0xf) != 0xc)) &&
          (iVar1 = FUN_144eee270(lVar6,*(undefined8 *)(param_4 + 0x18),lVar6), iVar1 == 0))))
      goto LAB_144eebd3d;
      iVar3 = FUN_144ba09d0(lVar6,_Src,iVar2);
      if (param_5 == 1) {
        iVar3 = FUN_1452a89c0(param_3,iVar2,_Src,iVar3,CONCAT44(uVar11,iVar2));
      }
      else if (param_5 == 3) {
        memcpy(param_3,_Src,(longlong)iVar3);
      }
      else {
        if (param_5 != 5) {
          uVar10 = CONCAT44(uVar11,0x251);
          uVar5 = 0x76;
          goto LAB_144eebd1c;
        }
        iVar3 = FUN_1452aa460(param_3,iVar2,_Src,iVar3,CONCAT44(uVar11,iVar2));
      }
      if (-1 < iVar3) goto LAB_144eebd3d;
      uVar10 = 0x255;
      uVar5 = 0x72;
      iVar9 = iVar3;
    }
    else {
      uVar10 = 0x233;
      uVar5 = 0x84;
    }
  }
LAB_144eebd1c:
  FUN_144ba24f0(4,0x67,uVar5,"crypto\\rsa\\rsa_ossl.c",uVar10);
  iVar3 = iVar9;
LAB_144eebd3d:
  FUN_144eedf20(lVar4);
  FUN_144eeddc0(lVar4);
  FUN_144ea66f0(_Src,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x25a);
  return iVar3;
}



// FUNCTION 144eebd80 FUN_144eebd80 body=1038 status=ok
// SIG undefined FUN_144eebd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eebd80(int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffff88;
  int local_58 [2];
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uStack_40 = 0x144eebd9e;
  pvVar7 = (void *)0x0;
  iVar1 = 0;
  local_58[0] = 0;
  local_48 = 0;
  uVar11 = 0xffffffff;
  lVar4 = FUN_144eedd20();
  _Src = pvVar7;
  uVar10 = 0xffffffff;
  if (lVar4 == 0) goto LAB_144eec154;
  FUN_144eede20(lVar4);
  uVar5 = FUN_144eede90(lVar4);
  local_50 = FUN_144eede90(lVar4);
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)FUN_144ea64e0((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x185);
  if ((local_50 == 0) || (_Src == (void *)0x0)) {
    uVar5 = CONCAT44(uVar9,0x187);
LAB_144eec132:
    uVar9 = 0x41;
  }
  else {
    if (param_1 <= iVar1) {
      lVar6 = FUN_144ba0740(param_2,param_1,uVar5);
      uVar10 = uVar11;
      if (lVar6 == 0) goto LAB_144eec154;
      iVar2 = FUN_144ba0ef0(uVar5,*(undefined8 *)(param_4 + 0x18));
      if (-1 < iVar2) {
        uVar5 = CONCAT44(uVar9,0x19b);
        uVar9 = 0x84;
        goto LAB_144eec138;
      }
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        pvVar7 = (void *)FUN_144eecb90(param_4,local_58,lVar4);
        if (pvVar7 == (void *)0x0) {
          uVar5 = CONCAT44(uVar9,0x1a2);
          uVar9 = 0x44;
          goto LAB_144eec138;
        }
        if ((local_58[0] == 0) && (local_48 = FUN_144eede90(lVar4), local_48 == 0)) {
          uVar5 = CONCAT44(uVar9,0x1a9);
          goto LAB_144eec132;
        }
        iVar2 = FUN_144eecc50(pvVar7,uVar5,local_48,lVar4);
        if (iVar2 == 0) goto LAB_144eec154;
      }
      lVar6 = local_50;
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         (((*(longlong *)(param_4 + 0x30) == 0 ||
           (((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)))) || (*(longlong *)(param_4 + 0x50) == 0)))) {
        lVar6 = FUN_144ba0570();
        if (lVar6 == 0) {
          uVar5 = CONCAT44(uVar9,0x1bb);
          goto LAB_144eec132;
        }
        if (*(longlong *)(param_4 + 0x28) == 0) {
          FUN_144ba24f0(4,0x65,0xb3,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar9,0x1bf));
        }
        else {
          FUN_144ba0240(lVar6,*(longlong *)(param_4 + 0x28),4);
          if (((*(byte *)(param_4 + 0x74) & 2) == 0) ||
             (lVar8 = FUN_144eceb30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                    *(undefined8 *)(param_4 + 0x18),lVar4), lVar8 != 0)) {
            lVar8 = lVar4;
            iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                              (local_50,uVar5,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                               *(undefined8 *)(param_4 + 0x78));
            uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
            if (iVar2 != 0) {
              FUN_144ba0cd0(lVar6);
              lVar6 = local_50;
              goto LAB_144eec014;
            }
          }
        }
        FUN_144ba0cd0(lVar6);
        goto LAB_144eec154;
      }
      iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(local_50,uVar5,param_4,lVar4);
      if (iVar2 == 0) goto LAB_144eec154;
LAB_144eec014:
      if (pvVar7 == (void *)0x0) {
        uVar11 = FUN_144ba09d0(lVar6,_Src,iVar1);
        if ((int)uVar11 < 0) goto LAB_144eec154;
      }
      else {
        lVar8 = lVar4;
        uVar11 = FUN_1452a7c00(lVar6,pvVar7,local_48,*(undefined8 *)(param_4 + 0x18),lVar4,_Src,
                               iVar1);
        uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if ((int)uVar11 == 0) goto LAB_144eec154;
      }
      uVar10 = uVar11 & 0xffffffff;
      if (param_5 == 1) {
        uVar3 = FUN_1452a8c70(param_3,iVar1,_Src,uVar10,CONCAT44(uVar9,iVar1));
LAB_144eec0f5:
        uVar10 = (ulonglong)uVar3;
      }
      else {
        if (param_5 == 2) {
          uVar3 = FUN_1452a9e70(param_3,iVar1,_Src,uVar10,CONCAT44(uVar9,iVar1));
          goto LAB_144eec0f5;
        }
        if (param_5 != 3) {
          if (param_5 != 4) {
            uVar5 = CONCAT44(uVar9,0x1f1);
            uVar9 = 0x76;
            goto LAB_144eec138;
          }
          uVar3 = FUN_1452a9210(param_3,iVar1,_Src,uVar10,CONCAT44(uVar9,iVar1),0,0);
          goto LAB_144eec0f5;
        }
        memcpy(param_3,_Src,(longlong)(int)uVar11);
      }
      FUN_144ba24f0(4,0x65,0x72,"crypto\\rsa\\rsa_ossl.c",500);
      FUN_144ba33b0((int)(uVar10 >> 0x1f) - 1U & 1);
      goto LAB_144eec154;
    }
    uVar5 = CONCAT44(uVar9,0x191);
    uVar9 = 0x6c;
  }
LAB_144eec138:
  FUN_144ba24f0(4,0x65,uVar9,"crypto\\rsa\\rsa_ossl.c",uVar5);
  uVar10 = 0xffffffff;
LAB_144eec154:
  FUN_144eedf20(lVar4);
  FUN_144eeddc0(lVar4);
  FUN_144ea66f0(_Src,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x1fa);
  return uVar10;
}



// FUNCTION 144eec190 FUN_144eec190 body=2345 status=ok
// SIG undefined FUN_144eec190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eec190(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong alStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x144eec1a7;
  alStack_68[3] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar13 = 0;
  iVar2 = 0;
  local_80 = 0;
  bVar1 = false;
  local_a4 = 0;
  local_a0 = param_2;
  FUN_144eede20(param_4);
  uVar4 = FUN_144eede90(param_4);
  local_78 = FUN_144eede90(param_4);
  uVar5 = FUN_144eede90(param_4);
  local_90 = uVar5;
  local_70 = FUN_144eede90(param_4);
  if ((local_70 == 0) ||
     ((*(int *)(param_3 + 4) == 1 &&
      (iVar2 = FUN_144babbf0(*(undefined8 *)(param_3 + 0x58)), local_a4 = iVar2, 2 < iVar2 - 1U))))
  goto LAB_144eeca9d;
  if ((*(byte *)(param_3 + 0x74) & 4) != 0) {
    lVar6 = FUN_144ba0570();
    if (lVar6 == 0) goto LAB_144eeca9d;
    FUN_144ba0240(lVar6,*(undefined8 *)(param_3 + 0x30),4);
    lVar7 = FUN_144eceb30(param_3 + 0x80,*(undefined8 *)(param_3 + 0xa8),lVar6,param_4);
    if (lVar7 != 0) {
      FUN_144ba0240(lVar6,*(undefined8 *)(param_3 + 0x38),4);
      lVar7 = FUN_144eceb30(param_3 + 0x88,*(undefined8 *)(param_3 + 0xa8),lVar6,param_4);
      if (lVar7 != 0) {
        if (0 < iVar2) {
          do {
            puVar8 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_3 + 0x58),iVar13);
            FUN_144ba0240(lVar6,*puVar8,4);
            lVar7 = FUN_144eceb30(puVar8 + 4,*(undefined8 *)(param_3 + 0xa8),lVar6,param_4);
            if (lVar7 == 0) goto LAB_144eec989;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar2);
        }
        FUN_144ba0cd0(lVar6);
        if ((iVar2 == 0) && (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == FUN_1452a5f00)) {
          iVar13 = FUN_144ba03d0(*(undefined8 *)(param_3 + 0x38));
          iVar3 = FUN_144ba03d0(*(undefined8 *)(param_3 + 0x30));
          if (iVar13 == iVar3) {
            bVar1 = true;
            uVar5 = local_90;
            goto LAB_144eec35a;
          }
        }
        bVar1 = false;
        uVar5 = local_90;
        goto LAB_144eec35a;
      }
    }
    goto LAB_144eec989;
  }
LAB_144eec35a:
  if (((*(byte *)(param_3 + 0x74) & 2) != 0) &&
     (lVar6 = FUN_144eceb30(param_3 + 0x78,*(undefined8 *)(param_3 + 0xa8),
                            *(undefined8 *)(param_3 + 0x18),param_4), lVar6 == 0))
  goto LAB_144eeca9d;
  uVar14 = local_a0;
  if (bVar1) {
    iVar2 = FUN_144eced50(uVar5,local_a0,*(undefined8 *)(param_3 + 0x88),param_4);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_144eced20(uVar5,uVar5,*(undefined8 *)(param_3 + 0x88),param_4), iVar2 == 0))
    goto LAB_144eeca9d;
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar2 = FUN_1452a6460(uVar5,uVar5,*(undefined8 *)(param_3 + 0x48),
                          *(undefined8 *)(param_3 + 0x38));
    if ((iVar2 == 0) ||
       ((iVar2 = FUN_144eced50(uVar4,uVar14,*(undefined8 *)(param_3 + 0x80),param_4), iVar2 == 0 ||
        (iVar2 = FUN_144eced20(uVar4,uVar4,*(undefined8 *)(param_3 + 0x80),param_4), iVar2 == 0))))
    goto LAB_144eeca9d;
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_b8 = param_4;
    iVar2 = FUN_1452a6460(uVar4,uVar4,*(undefined8 *)(param_3 + 0x40),
                          *(undefined8 *)(param_3 + 0x30));
    if ((iVar2 == 0) ||
       ((((iVar2 = FUN_1452a5c40(uVar4,uVar4,uVar5,*(undefined8 *)(param_3 + 0x30)), iVar2 == 0 ||
          (iVar2 = FUN_144eced20(uVar4,uVar4,*(undefined8 *)(param_3 + 0x80),param_4), iVar2 == 0))
         || (local_b8 = param_4,
            iVar2 = FUN_144ecebf0(uVar4,uVar4,*(undefined8 *)(param_3 + 0x50),
                                  *(undefined8 *)(param_3 + 0x80)), iVar2 == 0)) ||
        ((iVar2 = FUN_144eee5d0(param_1,uVar4,*(undefined8 *)(param_3 + 0x38),param_4), iVar2 == 0
         || (iVar2 = FUN_1452a5a40(param_1,param_1,uVar5,*(undefined8 *)(param_3 + 0x18)),
            iVar2 == 0)))))) goto LAB_144eeca9d;
LAB_144eec933:
    lVar6 = local_70;
    if ((*(longlong *)(param_3 + 0x20) != 0) && (*(longlong *)(param_3 + 0x18) != 0)) {
      if (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == FUN_1452a5f00) {
        local_b0 = *(undefined8 *)(param_3 + 0x78);
        local_b8 = param_4;
        iVar2 = FUN_1452a5f00(local_70,param_1);
      }
      else {
        FUN_144ba1350(param_1);
        lVar6 = local_70;
        local_b0 = *(undefined8 *)(param_3 + 0x78);
        local_b8 = param_4;
        iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                          (local_70,param_1,*(undefined8 *)(param_3 + 0x20),
                           *(undefined8 *)(param_3 + 0x18));
      }
      if ((iVar2 == 0) || (iVar2 = FUN_144eee270(lVar6,lVar6,uVar14), iVar2 == 0))
      goto LAB_144eeca9d;
      iVar2 = FUN_144ba0340(lVar6);
      if (iVar2 == 0) {
        local_b8 = param_4;
        iVar2 = FUN_144eef830(0,lVar6,lVar6,*(undefined8 *)(param_3 + 0x18));
        if ((iVar2 == 0) ||
           ((iVar2 = FUN_144ba0ba0(lVar6), iVar2 != 0 &&
            (iVar2 = FUN_144eee4f0(lVar6,lVar6,*(undefined8 *)(param_3 + 0x18)), iVar2 == 0))))
        goto LAB_144eeca9d;
        iVar2 = FUN_144ba0340(lVar6);
        if (iVar2 == 0) {
          lVar6 = FUN_144ba0570();
          if (lVar6 == 0) goto LAB_144eeca9d;
          FUN_144ba0240(lVar6,*(undefined8 *)(param_3 + 0x28),4);
          local_b0 = *(undefined8 *)(param_3 + 0x78);
          local_b8 = param_4;
          iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                            (param_1,uVar14,lVar6,*(undefined8 *)(param_3 + 0x18));
          if (iVar2 == 0) goto LAB_144eec52d;
          FUN_144ba0cd0(lVar6);
        }
      }
    }
    FUN_144ba1350(param_1);
    local_80 = CONCAT44(local_80._4_4_,1);
    goto LAB_144eeca9d;
  }
  lVar6 = FUN_144ba0570();
  if (lVar6 == 0) goto LAB_144eeca9d;
  FUN_144ba0240(lVar6,local_a0,4);
  local_b8 = param_4;
  iVar13 = FUN_144eef830(0,uVar4,lVar6,*(undefined8 *)(param_3 + 0x38));
  if ((iVar13 == 0) || (lVar7 = FUN_144ba0570(), lVar7 == 0)) {
LAB_144eec52d:
    FUN_144ba0cd0(lVar6);
  }
  else {
    FUN_144ba0240(lVar7,*(undefined8 *)(param_3 + 0x48),4);
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar13 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                       (uVar5,uVar4,lVar7,*(undefined8 *)(param_3 + 0x38));
    if (iVar13 == 0) {
      FUN_144ba0cd0(lVar6);
      lVar6 = lVar7;
LAB_144eec588:
      FUN_144ba0cd0(lVar6);
      goto LAB_144eeca9d;
    }
    FUN_144ba0cd0(lVar7);
    local_b8 = param_4;
    iVar13 = FUN_144eef830(0,uVar4,lVar6,*(undefined8 *)(param_3 + 0x30));
    if (iVar13 != 0) {
      FUN_144ba0cd0(lVar6);
      lVar6 = FUN_144ba0570();
      if (lVar6 == 0) goto LAB_144eeca9d;
      FUN_144ba0240(lVar6,*(undefined8 *)(param_3 + 0x40),4);
      local_b0 = *(undefined8 *)(param_3 + 0x80);
      local_b8 = param_4;
      iVar13 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                         (param_1,uVar4,lVar6,*(undefined8 *)(param_3 + 0x30));
      if (iVar13 != 0) {
        FUN_144ba0cd0(lVar6);
        lVar7 = (longlong)iVar2;
        local_88 = lVar7;
        if (0 < iVar2) {
          lVar6 = FUN_144ba0570();
          lVar9 = FUN_144ba0570();
          if ((lVar9 == 0) || (lVar6 == 0)) {
LAB_144eec97e:
            FUN_144ba0cd0(lVar9);
            goto LAB_144eec989;
          }
          local_a8 = 0;
          lVar10 = 0;
          if (0 < lVar7) {
            do {
              lVar7 = FUN_144eede90(param_4);
              alStack_68[lVar10] = lVar7;
              if (lVar7 == 0) goto LAB_144eec97e;
              local_98 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_3 + 0x58),local_a8);
              FUN_144ba0240(lVar9,local_a0,4);
              FUN_144ba0240(lVar6,local_98[1],4);
              local_b8 = param_4;
              iVar2 = FUN_144eef830(0,uVar4,lVar9,*local_98);
              if (iVar2 == 0) goto LAB_144eec97e;
              local_b0 = local_98[4];
              local_b8 = param_4;
              iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))(lVar7,uVar4,lVar6,*local_98);
              if (iVar2 == 0) goto LAB_144eec97e;
              local_a8 = local_a8 + 1;
              lVar10 = lVar10 + 1;
            } while (lVar10 < local_88);
          }
          FUN_144ba0cd0(lVar9);
          FUN_144ba0cd0(lVar6);
          uVar5 = local_90;
          iVar2 = local_a4;
        }
        iVar13 = FUN_144eee270(param_1,param_1,uVar5);
        if (((iVar13 == 0) ||
            (((iVar13 = FUN_144ba0ba0(param_1), iVar13 != 0 &&
              (iVar13 = FUN_144eee4f0(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar13 == 0)
              ) || (iVar13 = FUN_144eee590(uVar4,param_1,*(undefined8 *)(param_3 + 0x50),param_4),
                   iVar13 == 0)))) || (lVar6 = FUN_144ba0570(), lVar6 == 0)) goto LAB_144eeca9d;
        FUN_144ba0240(lVar6,uVar4,4);
        local_b8 = param_4;
        iVar13 = FUN_144eef830(0,param_1,lVar6,*(undefined8 *)(param_3 + 0x30));
        if (iVar13 != 0) {
          FUN_144ba0cd0(lVar6);
          iVar13 = FUN_144ba0ba0(param_1);
          if (((iVar13 != 0) &&
              (iVar13 = FUN_144eee4f0(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar13 == 0)
              ) || ((iVar13 = FUN_144eee590(uVar4,param_1,*(undefined8 *)(param_3 + 0x38),param_4),
                    iVar13 == 0 || (iVar13 = FUN_144eee4f0(param_1,uVar4,uVar5), iVar13 == 0))))
          goto LAB_144eeca9d;
          uVar14 = local_a0;
          if (0 < iVar2) {
            lVar6 = FUN_144ba0570();
            if (lVar6 == 0) goto LAB_144eeca9d;
            uVar11 = 0;
            uVar12 = uVar11;
            if (0 < local_88) {
              do {
                puVar8 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_3 + 0x58),uVar12);
                iVar2 = FUN_144eee270(uVar4,alStack_68[uVar11],param_1);
                if (iVar2 == 0) goto LAB_144eec588;
                iVar2 = FUN_144eee590(local_78,uVar4,puVar8[2],param_4);
                if (iVar2 == 0) goto LAB_144eec52d;
                FUN_144ba0240(lVar6,local_78,4);
                local_b8 = param_4;
                iVar2 = FUN_144eef830(0,uVar4,lVar6,*puVar8);
                if (((iVar2 == 0) ||
                    ((iVar2 = FUN_144ba0ba0(uVar4), iVar2 != 0 &&
                     (iVar2 = FUN_144eee4f0(uVar4,uVar4,*puVar8), iVar2 == 0)))) ||
                   ((iVar2 = FUN_144eee590(uVar4,uVar4,puVar8[3],param_4), iVar2 == 0 ||
                    (iVar2 = FUN_144eee4f0(param_1,param_1,uVar4), iVar2 == 0))))
                goto LAB_144eec588;
                uVar12 = (ulonglong)((int)uVar12 + 1);
                uVar11 = uVar11 + 1;
              } while ((longlong)uVar11 < local_88);
            }
            FUN_144ba0cd0(lVar6);
            uVar14 = local_a0;
          }
          goto LAB_144eec933;
        }
        goto LAB_144eec52d;
      }
    }
LAB_144eec989:
    FUN_144ba0cd0(lVar6);
  }
LAB_144eeca9d:
  FUN_144eedf20(param_4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(alStack_68[3] ^ (ulonglong)auStack_d8);
}



// FUNCTION 144eecae0 FUN_144eecae0 body=131 status=ok
// SIG undefined FUN_144eecae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eecae0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x78));
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x80));
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x88));
  iVar3 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    do {
      lVar2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x58),iVar3);
      FUN_144ece7b0(*(undefined8 *)(lVar2 + 0x20));
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x58));
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 144eecb70 FUN_144eecb70 body=8 status=ok
// SIG undefined FUN_144eecb70(void)

undefined * FUN_144eecb70(void)

{
  return PTR_PTR_14c70ee68;
}



// FUNCTION 144eecb80 FUN_144eecb80 body=8 status=ok
// SIG undefined FUN_144eecb80(void)

undefined ** FUN_144eecb80(void)

{
  return &PTR_s_OpenSSL_PKCS_1_RSA_14c70edf0;
}



// FUNCTION 144eecb90 FUN_144eecb90 body=187 status=ok
// SIG undefined FUN_144eecb90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eecb90(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_144e98620(*(undefined8 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar2 = FUN_144bae4c0(param_1,param_3);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (lVar3 != 0) {
    iVar1 = FUN_144eeb140(lVar3);
    if (iVar1 == 0) {
      *param_2 = 0;
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        uVar2 = FUN_144bae4c0(param_1,param_3);
        *(undefined8 *)(param_1 + 0xa0) = uVar2;
      }
      lVar3 = *(longlong *)(param_1 + 0xa0);
    }
    else {
      *param_2 = 1;
    }
  }
  FUN_144e98640(*(undefined8 *)(param_1 + 0xa8));
  return lVar3;
}



// FUNCTION 144eecc50 FUN_144eecc50 body=116 status=ok
// SIG undefined FUN_144eecc50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eecc50(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    uVar2 = FUN_144eeaeb0(param_2,0,param_1);
  }
  else {
    FUN_144eeb190();
    uVar1 = FUN_144eeaeb0(param_2,param_3,param_1,param_4);
    uVar2 = (ulonglong)uVar1;
    FUN_144eeb1b0(param_1);
  }
  return uVar2;
}



// FUNCTION 144eeccd0 FUN_144eeccd0 body=80 status=ok
// SIG undefined FUN_144eeccd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eeccd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7975c0,FUN_144eecdb0,param_1,&DAT_149c015e0,1,0,0x144eeccda);
    return uVar1;
  }
  return 1;
}



// FUNCTION 144eecd20 FUN_144eecd20 body=10 status=ok
// SIG undefined FUN_144eecd20(void)

undefined8 FUN_144eecd20(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 144eecd30 FUN_144eecd30 body=5 status=ok
// SIG undefined FUN_144eecd30(void)

undefined8 FUN_144eecd30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144eecd40 FUN_144eecd40 body=32 status=ok
// SIG undefined FUN_144eecd40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eecd40(void)

{
  FUN_145291360(&DAT_14c7975c0,1);
  return;
}



// FUNCTION 144eecd60 FUN_144eecd60 body=80 status=ok
// SIG undefined FUN_144eecd60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eecd60(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7975c0,FUN_144eecdb0,param_1,&DAT_149c015e0,1,1,0x144eecd6a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 144eecdb0 FUN_144eecdb0 body=29 status=ok
// SIG undefined FUN_144eecdb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eecdb0(void)

{
  FUN_145291300(&DAT_14c7975c0);
  return;
}



// FUNCTION 144eecdd0 FUN_144eecdd0 body=79 status=ok
// SIG undefined FUN_144eecdd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eecdd0(undefined8 *param_1)

{
  FUN_144ba0630(*param_1);
  FUN_144ba0630(param_1[1]);
  FUN_144ba0630(param_1[2]);
  FUN_144ba0630(param_1[3]);
  FUN_144ea6530(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}



// FUNCTION 144eece20 FUN_144eece20 body=210 status=ok
// SIG undefined FUN_144eece20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144eece20(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144eece2c;
  plVar1 = (longlong *)FUN_144ea6670(0x28,"crypto\\rsa\\rsa_mp.c",0x24);
  if (plVar1 == (longlong *)0x0) {
    FUN_144ba24f0(4,0xa6,0x41,"crypto\\rsa\\rsa_mp.c",0x25,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = FUN_144ba05d0();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_144ba05d0();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_144ba05d0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_144ba05d0();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
  }
  FUN_144ba0cd0(*plVar1);
  FUN_144ba0cd0(plVar1[1]);
  FUN_144ba0cd0(plVar1[2]);
  FUN_144ba0cd0(plVar1[3]);
  FUN_144ea6530(plVar1,"crypto\\rsa\\rsa_mp.c",0x38);
  return (longlong *)0x0;
}



// FUNCTION 144eecf00 FUN_144eecf00 body=232 status=ok
// SIG undefined FUN_144eecf00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eecf00(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x58));
  uVar3 = uVar10;
  if ((0 < iVar1) && (uVar3 = FUN_144eedd20(), uVar3 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = uVar10;
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0x58),uVar9);
        if (puVar4[3] == 0) {
          lVar5 = FUN_144ba05d0();
          puVar4[3] = lVar5;
          if (lVar5 == 0) goto LAB_144eecfd0;
        }
        iVar2 = FUN_144eee590(puVar4[3],uVar7,uVar6,uVar3);
        if (iVar2 == 0) goto LAB_144eecfd0;
        uVar7 = puVar4[3];
        uVar8 = (int)uVar9 + 1;
        uVar6 = *puVar4;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar1);
    }
    uVar10 = 1;
  }
LAB_144eecfd0:
  FUN_144eeddc0(uVar3);
  return uVar10;
}



// FUNCTION 144eecff0 FUN_144eecff0 body=48 status=ok
// SIG undefined FUN_144eecff0(void)

undefined8 FUN_144eecff0(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x400) {
    return 2;
  }
  if (param_1 < 0x1000) {
    return 3;
  }
  uVar1 = 5;
  if (param_1 < 0x2000) {
    uVar1 = 4;
  }
  return uVar1;
}



// FUNCTION 144eed020 FUN_144eed020 body=94 status=ok
// SIG undefined FUN_144eed020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eed020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 1) {
      if (*param_1 != 2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000144eed05b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 4))(param_2,param_3,param_1);
      return uVar1;
    }
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      (**(code **)(param_1 + 4))(param_2,param_3,*(undefined8 *)(param_1 + 2),param_1,0x144eed02a);
    }
  }
  return 1;
}



// FUNCTION 144eed080 FUN_144eed080 body=775 status=ok
// SIG undefined FUN_144eed080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eed080(undefined8 param_1,int param_2,int param_3,longlong param_4,undefined8 param_5,
             int *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  
  local_48 = 0;
  if (param_2 < 0xea3) {
    if (param_2 < 0x541) {
      if (param_2 < 0x1dc) {
        if (param_2 < 400) {
          if (param_2 < 0x15b) {
            if (param_2 < 0x134) {
              iVar6 = 0x22;
              if (0x36 < param_2) {
                iVar6 = 0x1b;
              }
            }
            else {
              iVar6 = 8;
            }
          }
          else {
            iVar6 = 7;
          }
        }
        else {
          iVar6 = 6;
        }
      }
      else {
        iVar6 = 5;
      }
    }
    else {
      iVar6 = 4;
    }
  }
  else {
    iVar6 = 3;
  }
  if (param_2 < 2) {
    uVar9 = 0x42;
  }
  else {
    if ((((param_4 != 0) || (param_3 == 0)) || (5 < param_2)) || (param_2 == 3)) {
      lVar3 = FUN_144ea6670(0x1000,"crypto\\bn\\bn_prime.c",0x4e);
      uVar4 = 0;
      if ((lVar3 != 0) && (uVar4 = FUN_144eedd20(), uVar4 != 0)) {
        FUN_144eede20(uVar4);
        lVar5 = FUN_144eede90(uVar4);
        uVar8 = 0;
        if (lVar5 != 0) {
LAB_144eed200:
          do {
            uVar7 = uVar8;
            if (param_4 == 0) {
              iVar1 = FUN_144eed870(param_1);
            }
            else {
              iVar1 = FUN_144eeda20(param_1,param_2,param_3,lVar3,param_4,param_5,uVar4);
            }
            if (iVar1 == 0) goto LAB_144eed2d5;
            if (param_6 == (int *)0x0) {
LAB_144eed283:
              iVar1 = 1;
            }
            else {
              if (*param_6 == 1) {
                if (*(code **)(param_6 + 4) != (code *)0x0) {
                  (**(code **)(param_6 + 4))(0,uVar7,*(undefined8 *)(param_6 + 2));
                }
                goto LAB_144eed283;
              }
              if (*param_6 == 2) {
                iVar1 = (**(code **)(param_6 + 4))(0,uVar7,param_6);
              }
              else {
                iVar1 = 0;
              }
            }
            uVar8 = (ulonglong)((int)uVar7 + 1);
            if (iVar1 == 0) goto LAB_144eed2d5;
            if (param_3 != 0) {
              iVar1 = FUN_144eeff20(lVar5,param_1);
              if (iVar1 == 0) goto LAB_144eed2d5;
              iVar1 = 0;
              while( true ) {
                if (iVar6 <= iVar1) goto LAB_144eed2bb;
                iVar2 = FUN_144eed3b0(param_1,1,uVar4,0,param_6);
                if (iVar2 == -1) goto LAB_144eed2d5;
                if (iVar2 == 0) break;
                iVar2 = FUN_144eed3b0(lVar5,1,uVar4,0,param_6);
                if (iVar2 == -1) goto LAB_144eed2d5;
                if (iVar2 == 0) break;
                iVar2 = FUN_144eed020(param_6,2,uVar7);
                if (iVar2 == 0) goto LAB_144eed2d5;
                iVar1 = iVar1 + 1;
              }
              goto LAB_144eed200;
            }
            iVar1 = FUN_144eed3b0(param_1,iVar6,uVar4,0,param_6);
            if (iVar1 == -1) goto LAB_144eed2d5;
          } while (iVar1 == 0);
LAB_144eed2bb:
          local_48 = 1;
        }
      }
LAB_144eed2d5:
      FUN_144ea6530(lVar3,"crypto\\bn\\bn_prime.c",0x8a);
      FUN_144eedf20(uVar4);
      FUN_144eeddc0(uVar4);
      return local_48;
    }
    uVar9 = 0x4a;
  }
  FUN_144ba24f0(3,0x8d,0x76,"crypto\\bn\\bn_prime.c",uVar9);
  return 0;
}



// FUNCTION 144eed390 FUN_144eed390 body=31 status=ok
// SIG undefined FUN_144eed390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eed390(void)

{
  FUN_144eed3b0();
  return;
}



// FUNCTION 144eed3b0 FUN_144eed3b0 body=966 status=ok
// SIG undefined FUN_144eed3b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eed3b0(undefined8 param_1,int param_2,longlong param_3,int param_4,
                       undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  uint local_48;
  longlong local_40;
  
  local_48 = 0xffffffff;
  local_40 = 0;
  iVar1 = FUN_144ba0370(param_1,2);
  if ((iVar1 != 0) || (iVar1 = FUN_144ba0370(param_1,3), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_144ba03a0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = FUN_144ba03c0();
  iVar1 = FUN_144ba0c40(param_1,uVar4);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = FUN_144ba03d0(param_1);
    if (iVar1 < 0xea3) {
      iVar1 = FUN_144ba03d0(param_1);
      if (iVar1 < 0x541) {
        iVar1 = FUN_144ba03d0(param_1);
        if (iVar1 < 0x1dc) {
          iVar1 = FUN_144ba03d0(param_1);
          if (iVar1 < 400) {
            iVar1 = FUN_144ba03d0(param_1);
            if (iVar1 < 0x15b) {
              iVar1 = FUN_144ba03d0(param_1);
              if (iVar1 < 0x134) {
                iVar1 = FUN_144ba03d0(param_1);
                param_2 = 0x22;
                if (0x36 < iVar1) {
                  param_2 = 0x1b;
                }
              }
              else {
                param_2 = 8;
              }
            }
            else {
              param_2 = 7;
            }
          }
          else {
            param_2 = 6;
          }
        }
        else {
          param_2 = 5;
        }
      }
      else {
        param_2 = 4;
      }
    }
    else {
      param_2 = 3;
    }
  }
  if (param_4 != 0) {
    iVar1 = 1;
    puVar11 = &DAT_149c01602;
    do {
      lVar5 = FUN_14526af80(param_1,*puVar11);
      if (lVar5 == -1) goto LAB_144eed740;
      if (lVar5 == 0) {
        uVar6 = FUN_144ba0370(param_1,*(undefined2 *)(&DAT_149c01600 + (longlong)iVar1 * 2));
        return uVar6;
      }
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
    } while ((longlong)puVar11 < 0x149c02600);
    iVar1 = FUN_144eed020(param_5,1);
    if (iVar1 == 0) goto LAB_144eed740;
  }
  lVar5 = param_3;
  if ((param_3 != 0) || (lVar5 = FUN_144eedd20(), lVar5 != 0)) {
    FUN_144eede20(lVar5);
    uVar4 = FUN_144eede90(lVar5);
    uVar7 = FUN_144eede90(lVar5);
    uVar8 = FUN_144eede90(lVar5);
    lVar9 = FUN_144eede90(lVar5);
    if ((lVar9 != 0) &&
       ((((lVar10 = FUN_144ba06b0(uVar4,param_1), lVar10 != 0 &&
          (iVar1 = FUN_14526b300(uVar4,1), iVar1 != 0)) &&
         (lVar10 = FUN_144ba06b0(uVar7,param_1), lVar10 != 0)) &&
        (iVar1 = FUN_14526b300(uVar7,3), iVar1 != 0)))) {
      iVar1 = 1;
      iVar2 = FUN_144ba0d50(uVar4,1);
      while (iVar2 == 0) {
        iVar1 = iVar1 + 1;
        iVar2 = FUN_144ba0d50(uVar4,iVar1);
      }
      iVar2 = FUN_144eefec0(uVar8,uVar4,iVar1);
      if (((iVar2 != 0) && (local_40 = FUN_144ece690(), local_40 != 0)) &&
         (iVar2 = FUN_144ece810(local_40,param_1,lVar5), iVar2 != 0)) {
        iVar2 = 0;
        if (0 < param_2) {
          do {
            iVar3 = FUN_1452983f0(lVar9,uVar7);
            if (((iVar3 == 0) || (iVar3 = FUN_14526b1f0(lVar9,2), iVar3 == 0)) ||
               (iVar3 = FUN_144eed780(lVar9,param_1,uVar4,uVar8,iVar1,lVar5,local_40), iVar3 == -1))
            goto LAB_144eed711;
            if (iVar3 != 0) {
              local_48 = 0;
              goto LAB_144eed711;
            }
            iVar3 = FUN_144eed020(param_5,1,iVar2);
            if (iVar3 == 0) goto LAB_144eed711;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_2);
        }
        local_48 = 1;
      }
    }
LAB_144eed711:
    if ((lVar5 != 0) && (FUN_144eedf20(lVar5), param_3 == 0)) {
      FUN_144eeddc0(lVar5);
    }
  }
LAB_144eed740:
  FUN_144ece7b0(local_40);
  return (ulonglong)local_48;
}



// FUNCTION 144eed780 FUN_144eed780 body=229 status=ok
// SIG undefined FUN_144eed780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eed780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1452a5f00(param_1,param_1,param_4,param_2,param_6,param_7);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_144ba0350(param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_144ba0c40(param_1,param_3), iVar1 != 0)) {
      do {
        param_5 = param_5 + -1;
        if (param_5 == 0) {
          return 1;
        }
        iVar1 = FUN_1452a57a0(param_1,param_1,param_1,param_2,param_6);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        iVar1 = FUN_144ba0350(param_1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_144ba0c40(param_1,param_3);
      } while (iVar1 != 0);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 144eed870 FUN_144eed870 body=422 status=ok
// SIG undefined FUN_144eed870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eed870(undefined8 param_1,int param_2,int param_3,undefined2 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
LAB_144eed8a1:
  do {
    iVar1 = FUN_1452983c0(param_1,param_2,1);
    if ((iVar1 == 0) || ((param_3 != 0 && (iVar1 = FUN_144ba0f40(param_1,1), iVar1 == 0)))) {
      return 0;
    }
    lVar6 = 1;
    puVar4 = param_4;
    do {
      puVar4 = puVar4 + 1;
      lVar2 = FUN_14526af80(param_1);
      if (lVar2 == -1) {
        return 0;
      }
      *puVar4 = (short)lVar2;
      lVar6 = lVar6 + 1;
    } while (lVar6 < 0x800);
    uVar7 = 0;
    do {
      iVar1 = 1;
      puVar5 = &DAT_149c01602;
      while( true ) {
        if ((0x7ff < iVar1) ||
           (((param_2 < 0x20 && (uVar7 < 0x80000000)) &&
            (lVar6 = FUN_144ba0c20(param_1), uVar3 = (ulonglong)*puVar5 * (ulonglong)*puVar5,
            lVar6 + uVar7 <= uVar3 && uVar3 - (lVar6 + uVar7) != 0)))) {
          iVar1 = FUN_14526b1f0(param_1,uVar7);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = FUN_144ba03d0(param_1);
          if (iVar1 == param_2) {
            return 1;
          }
          goto LAB_144eed8a1;
        }
        uVar3 = (*(ushort *)((longlong)(param_4 + -0xa4e00b00) + (longlong)puVar5) + uVar7) %
                (ulonglong)*puVar5;
        if (param_3 == 0) {
          bVar8 = uVar3 == 0;
        }
        else {
          bVar8 = uVar3 < 2;
        }
        if (bVar8) break;
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar6 = 2;
      if (param_3 != 0) {
        lVar6 = 4;
      }
      uVar7 = uVar7 + lVar6;
    } while (uVar7 < 0xffffffffffffba39);
  } while( true );
}



// FUNCTION 144eeda20 FUN_144eeda20 body=761 status=ok
// SIG undefined FUN_144eeda20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eeda20(undefined8 param_1,int param_2,int param_3,undefined2 *param_4,
                       undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_38 = 0xffffffffffffba38;
  uVar11 = 0;
  uVar10 = 0;
  FUN_144eede20(param_7);
  lVar3 = FUN_144eede90(param_7);
  uVar12 = uVar11;
  if (lVar3 != 0) {
    lVar4 = FUN_144ba0c20(param_5);
    if (-lVar4 - 1U < 0xffffffffffffba38) {
      lVar4 = FUN_144ba0c20(param_5);
      local_38 = -lVar4 - 1;
    }
    iVar2 = FUN_145298390(param_1,param_2,0,1);
    if (iVar2 != 0) {
      while ((iVar2 = FUN_144eef830(0,lVar3,param_1,param_5,param_7), uVar12 = uVar11, iVar2 != 0 &&
             (iVar2 = FUN_144eee270(param_1,param_1,lVar3), iVar2 != 0))) {
        if (param_6 == 0) {
          uVar8 = 1;
          if (param_3 != 0) {
            uVar8 = 3;
          }
          iVar2 = FUN_14526b1f0(param_1,uVar8);
        }
        else {
          iVar2 = FUN_144eee4f0(param_1,param_1,param_6);
        }
        uVar12 = uVar10;
        if (iVar2 == 0) break;
        uVar6 = 3;
        lVar4 = 1;
        iVar2 = FUN_144ba03d0(param_1);
        puVar1 = param_4;
        if (iVar2 < param_2) {
LAB_144eedb9b:
          iVar2 = FUN_144eee4f0(param_1,param_1,param_5);
          if (iVar2 == 0) break;
        }
        else {
          uVar5 = FUN_144ba0c20(param_1);
          if (param_3 != 0) {
            uVar6 = 5;
          }
          if (uVar5 < uVar6) goto LAB_144eedb9b;
        }
        do {
          lVar7 = FUN_14526af80(param_1);
          if (lVar7 == -1) goto LAB_144eedcee;
          puVar1[1] = (short)lVar7;
          lVar4 = lVar4 + 1;
          uVar6 = uVar11;
          puVar1 = puVar1 + 1;
        } while (lVar4 < 0x800);
        do {
          iVar2 = 1;
          puVar9 = &DAT_149c01602;
          while( true ) {
            if ((0x7ff < iVar2) ||
               (((param_2 < 0x20 && (uVar6 < 0x80000000)) &&
                (lVar4 = FUN_144ba0c20(param_1), uVar5 = (ulonglong)*puVar9 * (ulonglong)*puVar9,
                lVar4 + uVar6 <= uVar5 && uVar5 - (lVar4 + uVar6) != 0)))) {
              iVar2 = FUN_14526b1f0(param_1,uVar6);
              uVar12 = 0;
              if (iVar2 != 0) {
                uVar12 = 1;
              }
              goto LAB_144eedcee;
            }
            uVar5 = (*(ushort *)((longlong)(param_4 + -0xa4e00b00) + (longlong)puVar9) + uVar6) %
                    (ulonglong)*puVar9;
            if (param_3 == 0) {
              bVar13 = uVar5 == 0;
            }
            else {
              bVar13 = uVar5 < 2;
            }
            if (bVar13) break;
            iVar2 = iVar2 + 1;
            puVar9 = puVar9 + 1;
          }
          lVar4 = FUN_144ba0c20(param_5);
          uVar6 = uVar6 + lVar4;
        } while (uVar6 <= local_38);
        iVar2 = FUN_145298390(param_1,param_2,0,1);
        if (iVar2 == 0) break;
      }
    }
  }
LAB_144eedcee:
  FUN_144eedf20(param_7);
  return uVar12;
}



// FUNCTION 144eedd20 FUN_144eedd20 body=104 status=ok
// SIG undefined FUN_144eedd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144eedd20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144ea6670(0x40,"crypto\\bn\\bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_144ba24f0(3,0x6a,0x41,"crypto\\bn\\bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}



// FUNCTION 144eedd90 FUN_144eedd90 body=35 status=ok
// SIG undefined FUN_144eedd90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eedd90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144eedd20();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x3c) = 8;
  }
  return;
}



// FUNCTION 144eeddc0 FUN_144eeddc0 body=87 status=ok
// SIG undefined FUN_144eeddc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeddc0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x20),"crypto\\bn\\bn_ctx.c",0xfb);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_144eedfa0(param_1);
    FUN_144ea6530(param_1,"crypto\\bn\\bn_ctx.c",0xb2);
  }
  return;
}



// FUNCTION 144eede20 FUN_144eede20 body=98 status=ok
// SIG undefined FUN_144eede20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eede20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144eede2c;
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
    iVar1 = FUN_144eee190(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
    if (iVar1 == 0) {
      FUN_144ba24f0(3,0x81,0x6d,"crypto\\bn\\bn_ctx.c",0xbd,uVar2);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}



// FUNCTION 144eede90 FUN_144eede90 body=140 status=ok
// SIG undefined FUN_144eede90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eede90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144eede9c;
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
    lVar1 = FUN_144eee030(param_1,*(undefined4 *)(param_1 + 0x3c));
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      FUN_144ba24f0(3,0x74,0x6d,"crypto\\bn\\bn_ctx.c",0xe3,uVar2);
      return 0;
    }
    FUN_144ba0bb0(lVar1,0);
    *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) & 0xfffffffb;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return lVar1;
  }
  return 0;
}



// FUNCTION 144eedf20 FUN_144eedf20 body=120 status=ok
// SIG undefined FUN_144eedf20(void)

void FUN_144eedf20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4);
    if (uVar1 < *(uint *)(param_1 + 0x30)) {
      iVar3 = *(uint *)(param_1 + 0x30) - uVar1;
      uVar2 = *(int *)(param_1 + 0x18) - 1U & 0xf;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar3;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        if (uVar2 == 0) {
          uVar2 = 0xf;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x180);
        }
        else {
          uVar2 = uVar2 - 1;
        }
      }
    }
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 144eedfa0 FUN_144eedfa0 body=135 status=ok
// SIG undefined FUN_144eedfa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eedfa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while (lVar2 != 0) {
    plVar1 = (longlong *)*param_1;
    lVar2 = 0x10;
    do {
      if (*plVar1 != 0) {
        FUN_144ba0630(plVar1);
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_1[1] = *(longlong *)(*param_1 + 0x188);
    FUN_144ea6530(*param_1,"crypto\\bn\\bn_ctx.c",0x12f);
    lVar2 = param_1[1];
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 144eee030 FUN_144eee030 body=341 status=ok
// SIG undefined FUN_144eee030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eee030(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144eee041;
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 != *(uint *)((longlong)param_1 + 0x1c)) {
    if (uVar1 == 0) {
      param_1[1] = *param_1;
    }
    else if ((uVar1 & 0xf) == 0) {
      param_1[1] = *(longlong *)(param_1[1] + 0x188);
    }
    *(uint *)(param_1 + 3) = uVar1 + 1;
    return param_1[1] + (ulonglong)(uVar1 & 0xf) * 0x18;
  }
  lVar2 = FUN_144ea64e0(400,"crypto\\bn\\bn_ctx.c");
  if (lVar2 == 0) {
    FUN_144ba24f0(3,0x93,0x41,"crypto\\bn\\bn_ctx.c",0x13f,uVar5);
    return 0;
  }
  lVar3 = 0x10;
  lVar4 = lVar2;
  do {
    FUN_144ba1390(lVar4);
    if ((param_2 & 8) != 0) {
      FUN_144ba0220(lVar4,8);
    }
    lVar4 = lVar4 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar4 = param_1[2];
  *(undefined8 *)(lVar2 + 0x188) = 0;
  *(longlong *)(lVar2 + 0x180) = lVar4;
  if (*param_1 == 0) {
    *param_1 = lVar2;
  }
  else {
    *(longlong *)(param_1[2] + 0x188) = lVar2;
  }
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 0x10;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  return lVar2;
}



// FUNCTION 144eee190 FUN_144eee190 body=220 status=ok
// SIG undefined FUN_144eee190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eee190(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  void *_Dst;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144eee1aa;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    if (iVar1 == 0) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = (uint)(iVar1 * 3) >> 1;
    }
    _Dst = (void *)FUN_144ea64e0((ulonglong)uVar2 << 2,"crypto\\bn\\bn_ctx.c",0x108);
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(3,0x94,0x41,"crypto\\bn\\bn_ctx.c",0x109,uVar3);
      return 0;
    }
    if (*(uint *)(param_1 + 1) != 0) {
      memcpy(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 1) << 2);
    }
    FUN_144ea6530(*param_1,"crypto\\bn\\bn_ctx.c",0x10e);
    *param_1 = (longlong)_Dst;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}



// FUNCTION 144eee270 FUN_144eee270 body=147 status=ok
// SIG undefined FUN_144eee270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eee270(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if (uVar3 == *(uint *)(param_3 + 0x10)) {
    iVar1 = FUN_144ba0ef0(param_2,param_3);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        uVar3 = (uint)(*(int *)(param_3 + 0x10) == 0);
        uVar2 = FUN_144eee310(param_1,param_3,param_2);
      }
      else {
        uVar3 = 0;
        FUN_144ba0bb0(param_1,0);
        uVar2 = 1;
      }
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x10);
      uVar2 = FUN_144eee310(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = FUN_144eee420();
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  return uVar2;
}



// FUNCTION 144eee310 FUN_144eee310 body=272 status=ok
// SIG undefined FUN_144eee310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eee310(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar7 = (int)param_2[1];
  iVar1 = *(int *)(param_3 + 1);
  iVar6 = iVar7 - iVar1;
  if (iVar6 < 0) {
    FUN_144ba24f0(3,0x73,100,"crypto\\bn\\bn_add.c",0x8b,0x144eee32f);
  }
  else {
    lVar3 = FUN_144ba1290(param_1,iVar7);
    if (lVar3 != 0) {
      lVar3 = *param_2;
      lVar2 = *param_1;
      uVar4 = FUN_145283b80(lVar2,lVar3,*param_3,iVar1);
      plVar8 = (longlong *)(lVar3 + (longlong)iVar1 * 8);
      plVar5 = (longlong *)(lVar2 + (longlong)iVar1 * 8);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar3 = *plVar8;
        plVar8 = plVar8 + 1;
        *plVar5 = lVar3 - uVar4;
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 & lVar3 == 0;
      }
      while ((iVar7 != 0 && (plVar8 = plVar5 + -1, plVar5 = plVar5 + -1, *plVar8 == 0))) {
        iVar7 = iVar7 + -1;
      }
      *(int *)(param_1 + 1) = iVar7;
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eee420 FUN_144eee420 body=206 status=ok
// SIG undefined FUN_144eee420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eee420(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  
  plVar8 = param_2;
  if ((int)param_2[1] < (int)param_3[1]) {
    plVar8 = param_3;
    param_3 = param_2;
  }
  iVar1 = (int)plVar8[1];
  iVar2 = (int)param_3[1];
  iVar7 = iVar1 - iVar2;
  lVar4 = FUN_144ba1290(param_1,iVar1 + 1);
  uVar6 = 0;
  if (lVar4 != 0) {
    *(int *)(param_1 + 1) = iVar1;
    lVar4 = *plVar8;
    lVar3 = *param_1;
    uVar5 = FUN_145283a40(lVar3,lVar4,*param_3,iVar2);
    puVar9 = (ulonglong *)(lVar3 + (longlong)iVar2 * 8);
    plVar8 = (longlong *)(lVar4 + (longlong)iVar2 * 8);
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      lVar4 = *plVar8;
      plVar8 = plVar8 + 1;
      *puVar9 = lVar4 + uVar5;
      puVar9 = puVar9 + 1;
      uVar5 = uVar5 & lVar4 + uVar5 == 0;
    }
    *puVar9 = uVar5;
    uVar6 = 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + (int)uVar5;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar6;
}



// FUNCTION 144eee4f0 FUN_144eee4f0 body=155 status=ok
// SIG undefined FUN_144eee4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eee4f0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == *(int *)(param_3 + 0x10)) {
    uVar3 = FUN_144eee420();
    *(int *)(param_1 + 0x10) = iVar2;
  }
  else {
    iVar2 = FUN_144ba0ef0(param_2,param_3);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uVar1 = *(undefined4 *)(param_3 + 0x10);
        uVar3 = FUN_144eee310(param_1,param_3,param_2);
        *(undefined4 *)(param_1 + 0x10) = uVar1;
      }
      else {
        FUN_144ba0bb0(param_1,0);
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = FUN_144eee310(param_1,param_2,param_3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
  }
  return uVar3;
}



// FUNCTION 144eee590 FUN_144eee590 body=50 status=ok
// SIG undefined FUN_144eee590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eee590(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144eee5d0();
  FUN_144ba1350(param_1);
  return uVar1;
}



// FUNCTION 144eee5d0 FUN_144eee5d0 body=686 status=ok
// SIG undefined FUN_144eee5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eee5d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_2 + 1);
  cVar3 = '\0';
  iVar2 = *(int *)(param_3 + 1);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_144ba0bb0(param_1,0);
    return 1;
  }
  iVar4 = iVar2 + iVar1;
  FUN_144eede20(param_4);
  if (((param_1 != param_2) && (puVar5 = param_1, param_1 != param_3)) ||
     (puVar5 = (undefined8 *)FUN_144eede90(param_4), puVar5 != (undefined8 *)0x0)) {
    iVar9 = iVar1 - iVar2;
    if ((iVar9 == 0) && (iVar1 == 8)) {
      lVar6 = FUN_144ba1290(puVar5,0x10);
      if (lVar6 != 0) {
        *(undefined4 *)(puVar5 + 1) = 0x10;
        FUN_145283cc0(*puVar5,*param_2,*param_3);
        goto LAB_144eee811;
      }
    }
    else if ((iVar1 < 0x10) || ((iVar2 < 0x10 || (2 < iVar9 + 1U)))) {
      lVar6 = FUN_144ba1290(puVar5,iVar4);
      if (lVar6 != 0) {
        *(int *)(puVar5 + 1) = iVar4;
        FUN_144eee880(*puVar5,*param_2,iVar1,*param_3,iVar2);
        goto LAB_144eee811;
      }
    }
    else {
      if (-1 < iVar9) {
        cVar3 = FUN_144ba0420((longlong)iVar1);
      }
      if (iVar9 == -1) {
        cVar3 = FUN_144ba0420((longlong)iVar2);
      }
      iVar9 = 1 << (cVar3 - 1U & 0x1f);
      puVar7 = (undefined8 *)FUN_144eede90(param_4);
      if (puVar7 != (undefined8 *)0x0) {
        if ((iVar9 < iVar1) || (iVar9 < iVar2)) {
          lVar6 = FUN_144ba1290(puVar7,iVar9 << 3);
          if ((lVar6 != 0) && (lVar6 = FUN_144ba1290(puVar5,iVar9 << 3), lVar6 != 0)) {
            FUN_144eeef70(*puVar5,*param_2,*param_3,iVar9,iVar1 - iVar9,iVar2 - iVar9,*puVar7);
            *(int *)(puVar5 + 1) = iVar4;
            goto LAB_144eee811;
          }
        }
        else {
          lVar6 = FUN_144ba1290(puVar7,iVar9 << 2);
          if ((lVar6 != 0) && (lVar6 = FUN_144ba1290(puVar5,iVar9 << 2), lVar6 != 0)) {
            FUN_144eee9b0(*puVar5,*param_2,*param_3,iVar9,iVar1 - iVar9,iVar2 - iVar9,*puVar7);
            *(int *)(puVar5 + 1) = iVar4;
LAB_144eee811:
            *(uint *)(puVar5 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
            if ((param_1 == puVar5) || (lVar6 = FUN_144ba06b0(param_1,puVar5), lVar6 != 0)) {
              uVar8 = 1;
              goto LAB_144eee83b;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_144eee83b:
  FUN_144eedf20(param_4);
  return uVar8;
}



// FUNCTION 144eee880 FUN_144eee880 body=294 status=ok
// SIG undefined FUN_144eee880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eee880(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = param_4;
  iVar2 = param_5;
  if (param_3 < param_5) {
    puVar4 = param_2;
    param_2 = param_4;
    iVar2 = param_3;
    param_3 = param_5;
  }
  puVar3 = (undefined8 *)((longlong)param_3 * 8 + param_1);
  if (iVar2 < 1) {
    FUN_145283700(param_1,param_2,param_3,0);
  }
  else {
    uVar1 = FUN_145283700(param_1,param_2,param_3,*puVar4);
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    if (0 < iVar2) {
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      param_1 = param_1 + 0x10;
      do {
        uVar1 = FUN_1452835a0(param_1 + -8,param_2,param_3,puVar4[-1]);
        puVar3[-1] = uVar1;
        if (iVar2 + -1 < 1) {
          return;
        }
        uVar1 = FUN_1452835a0(param_1,param_2,param_3,*puVar4);
        *puVar3 = uVar1;
        if (iVar2 + -2 < 1) {
          return;
        }
        uVar1 = FUN_1452835a0(param_1 + 8,param_2,param_3,puVar4[1]);
        puVar3[1] = uVar1;
        if (iVar2 + -3 < 1) {
          return;
        }
        uVar1 = FUN_1452835a0(param_1 + 0x10,param_2,param_3,puVar4[2]);
        puVar3[2] = uVar1;
        puVar4 = puVar4 + 4;
        puVar3 = puVar3 + 4;
        param_1 = param_1 + 0x20;
        iVar2 = iVar2 + -4;
      } while (0 < iVar2);
    }
  }
  return;
}



// FUNCTION 144eee9b0 FUN_144eee9b0 body=1422 status=ok
// SIG undefined FUN_144eee9b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eee9b0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  size_t _Size;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *_Dst;
  longlong lVar14;
  ulonglong *puVar15;
  longlong local_48;
  
  lVar14 = (longlong)param_4;
  iVar5 = param_4 / 2;
  iVar13 = iVar5 + param_5;
  iVar9 = iVar5 + param_6;
  if (param_4 == 8) {
    if ((param_5 == 0) && (param_6 == 0)) {
      FUN_145283cc0(param_1,param_2);
      return;
    }
LAB_144eeea24:
    FUN_144eee880(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (param_5 + param_6 < 0) {
      memset((void *)((longlong)(param_5 + param_4 * 2 + param_6) * 8 + param_1),0,
             (longlong)-(param_5 + param_6) << 3);
    }
    return;
  }
  if (param_4 < 0x10) goto LAB_144eeea24;
  iVar10 = iVar5 - iVar13;
  lVar2 = (longlong)iVar5 * 8;
  lVar8 = lVar2 + param_2;
  iVar6 = FUN_144ba1420(param_2,lVar8,iVar13,iVar10);
  lVar11 = lVar2 + param_3;
  bVar4 = false;
  bVar3 = false;
  iVar7 = FUN_144ba1420(lVar11,param_3,iVar9,param_6);
  switch(iVar6 * 3 + iVar7 + 4) {
  case 0:
    FUN_144eef600(param_7,lVar8,param_2,iVar13,param_5);
    FUN_144eef600(lVar2 + param_7,param_3,lVar11,iVar9,iVar5 - iVar9);
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    bVar3 = true;
    break;
  case 2:
    FUN_144eef600(param_7,lVar8,param_2,iVar13,param_5);
    FUN_144eef600(lVar2 + param_7,lVar11,param_3,iVar9,param_6);
    bVar3 = false;
    bVar4 = true;
    break;
  case 6:
    FUN_144eef600(param_7,param_2,lVar8,iVar13,iVar10);
    FUN_144eef600(lVar2 + param_7,param_3,lVar11,iVar9,iVar5 - iVar9);
    bVar4 = true;
    break;
  case 8:
    FUN_144eef600(param_7,param_2,lVar8,iVar13,iVar10);
    FUN_144eef600(lVar2 + param_7,lVar11,param_3,iVar9,param_6);
  }
  if (iVar5 == 4) {
    if ((param_5 == 0) && (param_6 == 0)) {
      _Dst = (undefined8 *)(lVar14 * 8 + param_7);
      if (bVar3) {
        *_Dst = 0;
        _Dst[1] = 0;
        _Dst[2] = 0;
        _Dst[3] = 0;
        _Dst[4] = 0;
        _Dst[5] = 0;
        _Dst[6] = 0;
        _Dst[7] = 0;
      }
      else {
        FUN_1452843c0(_Dst,param_7,param_7 + 0x20);
      }
      FUN_1452843c0(param_1,param_2,param_3);
      local_48 = lVar14 * 8 + param_1;
      FUN_1452843c0(local_48,param_2 + 0x20,param_3 + 0x20);
      goto LAB_144eeee91;
    }
  }
  else if (((iVar5 == 8) && (param_5 == 0)) && (param_6 == 0)) {
    _Dst = (undefined8 *)(lVar14 * 8 + param_7);
    if (bVar3) {
      memset(_Dst,0,0x80);
    }
    else {
      FUN_145283cc0(_Dst,param_7,param_7 + 0x40);
    }
    FUN_145283cc0(param_1,param_2,param_3);
    local_48 = lVar14 * 8 + param_1;
    FUN_145283cc0(local_48,param_2 + 0x40,param_3 + 0x40);
    goto LAB_144eeee91;
  }
  _Size = lVar14 * 8;
  _Dst = (undefined8 *)(_Size + param_7);
  lVar14 = param_7 + (longlong)(param_4 * 2) * 8;
  if (bVar3) {
    memset(_Dst,0,_Size);
  }
  else {
    FUN_144eee9b0(_Dst,param_7,lVar2 + param_7,iVar5,0,0,lVar14);
  }
  FUN_144eee9b0(param_1,param_2,param_3,iVar5,0,0,lVar14);
  local_48 = _Size + param_1;
  FUN_144eee9b0(local_48,lVar8,lVar11,iVar5,param_5,param_6,lVar14);
LAB_144eeee91:
  iVar9 = FUN_145283a40(param_7,param_1,local_48,param_4);
  if (bVar4) {
    iVar13 = FUN_145283b80(_Dst,param_7,_Dst);
    iVar13 = -iVar13;
  }
  else {
    iVar13 = FUN_145283a40(_Dst,_Dst,param_7,param_4);
  }
  iVar6 = FUN_145283a40(lVar2 + param_1,lVar2 + param_1,_Dst,param_4);
  iVar6 = iVar9 + iVar13 + iVar6;
  if (iVar6 == 0) {
    return;
  }
  puVar15 = (ulonglong *)((longlong)(iVar5 + param_4) * 8 + param_1);
  uVar12 = *puVar15 + (longlong)iVar6;
  *puVar15 = uVar12;
  if ((ulonglong)(longlong)iVar6 <= uVar12) {
    return;
  }
  do {
    puVar1 = puVar15 + 1;
    *puVar1 = *puVar1 + 1;
    puVar15 = puVar15 + 1;
  } while (*puVar1 == 0);
  return;
}



// FUNCTION 144eeef70 FUN_144eeef70 body=1636 status=ok
// SIG undefined FUN_144eeef70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eeef70(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong local_38;
  
  if (param_4 < 8) {
    FUN_144eee880(param_1,param_2,param_5 + param_4,param_3);
    return;
  }
  lVar3 = (longlong)param_4 * 8;
  lVar7 = lVar3 + param_2;
  iVar8 = param_4 - param_5;
  iVar5 = FUN_144ba1420(param_2,lVar7,param_5,iVar8);
  lVar9 = lVar3 + param_3;
  iVar11 = param_6 - param_4;
  bVar4 = false;
  iVar6 = FUN_144ba1420(lVar9,param_3,param_6,iVar11);
  switch(iVar5 * 3 + iVar6 + 4) {
  case 0:
    FUN_144eef600(param_7,lVar7,param_2,param_5,param_5 - param_4);
    FUN_144eef600(lVar3 + param_7,param_3,lVar9,param_6,param_4 - param_6);
    break;
  case 1:
  case 2:
    FUN_144eef600(param_7,lVar7,param_2,param_5,param_5 - param_4);
    FUN_144eef600(lVar3 + param_7,lVar9,param_3,param_6,iVar11);
    bVar4 = true;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_144eef600(param_7,param_2,lVar7,param_5,iVar8);
    FUN_144eef600(lVar3 + param_7,param_3,lVar9,param_6,param_4 - param_6);
    bVar4 = true;
    break;
  case 7:
  case 8:
    FUN_144eef600(param_7,param_2,lVar7,param_5,iVar8);
    FUN_144eef600(lVar3 + param_7,lVar9,param_3,param_6,iVar11);
  }
  if (param_4 == 8) {
    local_38 = param_7 + 0x80;
    FUN_145283cc0(local_38,param_7,param_7 + 0x40);
    FUN_145283cc0(param_1,param_2,param_3);
    _Dst = (void *)(param_1 + 0x80);
    FUN_144eee880(_Dst,lVar7,param_5,lVar9,param_6);
    memset((void *)(param_1 + (longlong)(param_5 + 0x10 + param_6) * 8),0,
           (longlong)((0x10 - param_5) - param_6) << 3);
  }
  else {
    lVar2 = param_7 + (longlong)(param_4 * 4) * 8;
    _Size = (longlong)(param_4 * 2) * 8;
    local_38 = _Size + param_7;
    FUN_144eee9b0(local_38,param_7,lVar3 + param_7,param_4,0,0,lVar2);
    FUN_144eee9b0(param_1,param_2,param_3,param_4,0,0,lVar2);
    iVar5 = param_4 / 2;
    iVar6 = param_5;
    if (param_5 <= param_6) {
      iVar6 = param_6;
    }
    if (iVar6 == iVar5) {
      _Dst = (void *)(param_1 + _Size);
      FUN_144eee9b0(_Dst,lVar7,lVar9,iVar5,param_5 - iVar5,param_6 - iVar5,lVar2);
      memset((void *)(param_1 + (longlong)(iVar5 * 2 + param_4 * 2) * 8),0,
             (longlong)(param_4 * 2 + iVar5 * -2) << 3);
    }
    else if (iVar6 - iVar5 < 1) {
      _Dst = (void *)(param_1 + _Size);
      memset(_Dst,0,_Size);
      if ((param_5 < 0x10) && (param_6 < 0x10)) {
        FUN_144eee880(_Dst,lVar7,param_5,lVar9,param_6);
      }
      else {
        do {
          iVar5 = iVar5 / 2;
          if ((iVar5 < param_5) || (iVar5 < param_6)) {
            FUN_144eeef70(_Dst,lVar7,lVar9,iVar5,param_5 - iVar5,param_6 - iVar5,lVar2);
            goto LAB_144eef4d0;
          }
        } while ((iVar5 != param_5) && (iVar5 != param_6));
        FUN_144eee9b0(_Dst,lVar7,lVar9,iVar5,param_5 - iVar5,param_6 - iVar5,lVar2);
      }
    }
    else {
      _Dst = (void *)(_Size + param_1);
      FUN_144eeef70(_Dst,lVar7,lVar9,iVar5,param_5 - iVar5,param_6 - iVar5,lVar2);
      memset((void *)(param_1 + (longlong)(param_4 * 2 + param_5 + param_6) * 8),0,
             (longlong)((param_4 * 2 - param_5) - param_6) << 3);
    }
  }
LAB_144eef4d0:
  iVar6 = param_4 * 2;
  iVar5 = FUN_145283a40(param_7,param_1,_Dst,iVar6);
  if (bVar4) {
    iVar8 = FUN_145283b80(local_38,param_7,local_38);
    iVar8 = -iVar8;
  }
  else {
    iVar8 = FUN_145283a40(local_38,local_38,param_7,iVar6);
  }
  iVar6 = FUN_145283a40(lVar3 + param_1,lVar3 + param_1,local_38,iVar6);
  iVar6 = iVar5 + iVar8 + iVar6;
  if (iVar6 != 0) {
    puVar12 = (ulonglong *)(param_1 + (longlong)(param_4 * 3) * 8);
    uVar10 = *(longlong *)(param_1 + (longlong)(param_4 * 3) * 8) + (longlong)iVar6;
    *puVar12 = uVar10;
    if (uVar10 < (ulonglong)(longlong)iVar6) {
      do {
        puVar1 = puVar12 + 1;
        *puVar1 = *puVar1 + 1;
        puVar12 = puVar12 + 1;
      } while (*puVar1 == 0);
    }
  }
  return;
}



// FUNCTION 144eef600 FUN_144eef600 body=559 status=ok
// SIG undefined FUN_144eef600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eef600(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar1 = FUN_145283b80();
  if (param_5 != 0) {
    lVar2 = (longlong)param_4 * 8;
    plVar4 = (longlong *)(param_1 + lVar2);
    plVar6 = (longlong *)(param_2 + lVar2);
    plVar5 = (longlong *)(param_3 + lVar2);
    if (param_5 < 0) {
      while( true ) {
        lVar2 = *plVar5;
        *plVar4 = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 1) break;
        lVar2 = plVar5[1];
        plVar4[1] = -(lVar2 + lVar1);
        lVar7 = 1;
        if (lVar2 == 0) {
          lVar7 = lVar1;
        }
        if (-1 < param_5 + 2) {
          return lVar7;
        }
        lVar1 = plVar5[2];
        plVar4[2] = -(lVar7 + lVar1);
        if (lVar1 != 0) {
          lVar7 = 1;
        }
        if (-1 < param_5 + 3) {
          return lVar7;
        }
        lVar2 = plVar5[3];
        plVar4[3] = -(lVar2 + lVar7);
        lVar1 = 1;
        if (lVar2 == 0) {
          lVar1 = lVar7;
        }
        param_5 = param_5 + 4;
        if (-1 < param_5) {
          return lVar1;
        }
        plVar5 = plVar5 + 4;
        plVar4 = plVar4 + 4;
      }
    }
    else {
      while (lVar1 != 0) {
        lVar2 = *plVar6;
        *plVar4 = lVar2 - lVar1;
        lVar7 = 0;
        if (lVar2 == 0) {
          lVar7 = lVar1;
        }
        if (param_5 + -1 < 1) {
          return lVar7;
        }
        lVar1 = plVar6[1];
        plVar4[1] = lVar1 - lVar7;
        lVar2 = 0;
        if (lVar1 == 0) {
          lVar2 = lVar7;
        }
        if (param_5 + -2 < 1) {
          return lVar2;
        }
        lVar1 = plVar6[2];
        plVar4[2] = lVar1 - lVar2;
        lVar7 = 0;
        if (lVar1 == 0) {
          lVar7 = lVar2;
        }
        if (param_5 + -3 < 1) {
          return lVar7;
        }
        lVar2 = plVar6[3];
        plVar4[3] = lVar2 - lVar7;
        lVar1 = 0;
        if (lVar2 == 0) {
          lVar1 = lVar7;
        }
        param_5 = param_5 + -4;
        if (param_5 < 1) {
          return lVar1;
        }
        plVar6 = plVar6 + 4;
        plVar4 = plVar4 + 4;
      }
      lVar1 = 0;
      if (0 < param_5) {
        param_5 = param_5 + -1;
        *plVar4 = *plVar6;
        if (0 < param_5) {
          plVar5 = plVar6 + 2;
          plVar3 = plVar4 + 2;
          do {
            plVar3[-1] = plVar5[-1];
            if (param_5 + -1 < 1) {
              return 0;
            }
            *plVar3 = *plVar5;
            if (param_5 + -2 < 1) {
              return 0;
            }
            plVar3[1] = plVar5[1];
            if (param_5 + -3 < 1) {
              return 0;
            }
            plVar5 = plVar5 + 4;
            param_5 = param_5 + -4;
            plVar3[2] = *(longlong *)
                         ((longlong)plVar3 + (longlong)plVar6 + (0x10 - (longlong)plVar4));
            plVar3 = plVar3 + 4;
          } while (0 < param_5);
        }
      }
    }
  }
  return lVar1;
}



// FUNCTION 144eef830 FUN_144eef830 body=224 status=ok
// SIG undefined FUN_144eef830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eef830(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x144eef84a;
  iVar1 = FUN_144ba0340(param_4);
  if (iVar1 == 0) {
    if (*(longlong *)(*param_4 + (longlong)((int)param_4[1] + -1) * 8) == 0) {
      FUN_144ba24f0(3,0x6b,0x6b,"crypto\\bn\\bn_div.c",CONCAT44(uVar2,0xe1));
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_144eef910(param_1,param_2,param_3,param_4,param_5,uVar3);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          FUN_144ba1350(param_1);
        }
        if (param_2 != 0) {
          FUN_144ba1350(param_2);
        }
      }
    }
  }
  else {
    FUN_144ba24f0(3,0x6b,0x67,"crypto\\bn\\bn_div.c",CONCAT44(uVar2,0xd7));
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 144eef910 FUN_144eef910 body=1015 status=ok
// SIG undefined FUN_144eef910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eef910(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  ulonglong local_res8;
  ulonglong *local_78;
  longlong *local_60;
  
  FUN_144eede20(param_5);
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)FUN_144eede90(param_5);
  }
  plVar12 = (longlong *)FUN_144eede90(param_5);
  plVar13 = (longlong *)FUN_144eede90(param_5);
  plVar14 = (longlong *)FUN_144eede90(param_5);
  if ((plVar14 != (longlong *)0x0) && (lVar15 = FUN_144ba06b0(plVar14,param_4), lVar15 != 0)) {
    uVar10 = FUN_144eefd10(plVar14);
    *(undefined4 *)(plVar14 + 2) = 0;
    iVar11 = FUN_144ef0010(plVar13,param_3,uVar10);
    if (iVar11 != 0) {
      uVar2 = *(uint *)(plVar14 + 1);
      iVar11 = (int)plVar13[1];
      if (iVar11 <= (int)uVar2) {
        lVar15 = FUN_144ba1290(plVar13);
        if (lVar15 == 0) goto LAB_144eefcd9;
        memset((void *)(*plVar13 + (longlong)iVar11 * 8),0,
               (longlong)(int)((uVar2 - iVar11) + 1) << 3);
        iVar11 = uVar2 + 1;
        *(int *)(plVar13 + 1) = iVar11;
      }
      uVar22 = iVar11 - uVar2;
      local_78 = (ulonglong *)((longlong)(int)uVar22 * 8 + *plVar13);
      puVar23 = (ulonglong *)(*plVar13 + (longlong)(iVar11 + -1) * 8);
      lVar15 = (longlong)(int)(uVar2 - 1);
      uVar4 = *(ulonglong *)(*plVar14 + lVar15 * 8);
      if (uVar2 == 1) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(ulonglong *)(*plVar14 + (longlong)(int)(uVar2 - 2) * 8);
      }
      lVar16 = FUN_144ba1290(param_1,uVar22);
      if (lVar16 != 0) {
        uVar3 = *(uint *)(param_3 + 0x10);
        local_60 = (longlong *)(*param_1 + (longlong)(int)uVar22 * 8);
        *(uint *)(param_1 + 2) = *(uint *)(param_4 + 0x10) ^ uVar3;
        *(uint *)(param_1 + 1) = uVar22;
        lVar16 = FUN_144ba1290(plVar12,uVar2 + 1);
        if (lVar16 != 0) {
          if (0 < (int)uVar22) {
            local_res8 = (ulonglong)uVar22;
            do {
              uVar26 = puVar23[-1];
              if (*puVar23 == uVar4) {
                uVar25 = 0xffffffffffffffff;
              }
              else {
                if (puVar23 == local_78) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = puVar23[-2];
                }
                uVar25 = FUN_1452838b0(*puVar23,uVar26,uVar4);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar25;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar27;
                auVar9 = auVar7 * auVar8;
                uVar26 = uVar26 - uVar25 * uVar4;
                bVar28 = auVar9._8_8_ == uVar26;
                if (uVar26 <= auVar9._8_8_) {
                  do {
                    uVar20 = auVar9._8_8_;
                    uVar17 = auVar9._0_8_;
                    if ((bVar28) && (uVar17 <= uVar24)) break;
                    uVar25 = uVar25 - 1;
                    uVar26 = uVar26 + uVar4;
                    if (uVar26 < uVar4) break;
                    if (uVar17 < uVar27) {
                      uVar20 = uVar20 - 1;
                    }
                    auVar9._8_8_ = uVar20;
                    auVar9._0_8_ = uVar17 - uVar27;
                    bVar28 = uVar20 == uVar26;
                  } while (uVar26 <= uVar20);
                }
              }
              uVar18 = FUN_145283700(*plVar12,*plVar14,uVar2,uVar25);
              *(undefined8 *)(*plVar12 + (longlong)(int)uVar2 * 8) = uVar18;
              local_78 = local_78 + -1;
              lVar19 = FUN_145283b80(local_78,local_78,*plVar12,uVar2 + 1);
              uVar26 = -lVar19;
              lVar21 = 0;
              lVar16 = lVar21;
              if ((0 < (int)uVar2) && (3 < uVar2)) {
                plVar5 = (longlong *)*plVar12;
                plVar6 = (longlong *)*plVar14;
                plVar1 = plVar5 + lVar15;
                if ((((plVar6 + lVar15 < plVar5) || (plVar1 < plVar6)) &&
                    ((lVar16 = 0, plVar12 < plVar5 || (plVar1 < plVar12)))) &&
                   ((plVar14 < plVar5 || (plVar1 < plVar14)))) {
                  uVar22 = uVar2 & 0x80000003;
                  if ((int)uVar22 < 0) {
                    uVar22 = (uVar22 - 1 | 0xfffffffc) + 1;
                  }
                  do {
                    uVar24 = (plVar6 + lVar21)[1];
                    plVar5[lVar21] = plVar6[lVar21] & uVar26;
                    (plVar5 + lVar21)[1] = uVar24 & uVar26;
                    uVar24 = (plVar6 + lVar21 + 2)[1];
                    plVar5[lVar21 + 2] = plVar6[lVar21 + 2] & uVar26;
                    (plVar5 + lVar21 + 2)[1] = uVar24 & uVar26;
                    lVar21 = lVar21 + 4;
                    lVar16 = lVar21;
                  } while (lVar21 < (int)(uVar2 - uVar22));
                }
              }
              for (; lVar16 < (int)uVar2; lVar16 = lVar16 + 1) {
                *(ulonglong *)(*plVar12 + lVar16 * 8) =
                     *(ulonglong *)(*plVar14 + lVar16 * 8) & uVar26;
              }
              lVar16 = FUN_145283a40(local_78,local_78,*plVar12,uVar2);
              *puVar23 = *puVar23 + lVar16;
              puVar23 = puVar23 + -1;
              local_60 = local_60 + -1;
              local_res8 = local_res8 - 1;
              *local_60 = uVar25 - lVar19;
            } while (local_res8 != 0);
          }
          *(uint *)(plVar13 + 2) = uVar3;
          *(uint *)(plVar13 + 1) = uVar2;
          if ((param_2 == 0) || (iVar11 = FUN_144ef0170(param_2,plVar13,uVar10), iVar11 != 0)) {
            FUN_144eedf20(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_144eefcd9:
  FUN_144eedf20(param_5);
  return 0;
}



// FUNCTION 144eefd10 FUN_144eefd10 body=154 status=ok
// SIG undefined FUN_144eefd10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eefd10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  lVar2 = *param_1;
  uVar4 = FUN_144ba0420(*(undefined8 *)(lVar2 + (longlong)(iVar1 + -1) * 8));
  uVar5 = uVar4 & 0x8000003f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (longlong)iVar1) {
    do {
      uVar3 = *(ulonglong *)(lVar2 + uVar7 * 8);
      *(ulonglong *)(lVar2 + uVar7 * 8) = uVar3 << ((byte)(0x40 - uVar4) & 0x3f) | uVar6;
      uVar6 = uVar3 >> ((byte)uVar5 & 0x3f) &
              (-(longlong)(int)uVar5 | (ulonglong)-(longlong)(int)uVar5 >> 8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  return 0x40 - uVar4;
}



// FUNCTION 144eefdb0 FUN_144eefdb0 body=94 status=ok
// SIG undefined FUN_144eefdb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eefdb0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    FUN_144ba24f0(3,0x91,0x77,"crypto\\bn\\bn_shift.c",0x56,0x144eefdbc);
    return 0;
  }
  uVar1 = FUN_144ef0010();
  FUN_144ba1350(param_1);
  return uVar1;
}



// FUNCTION 144eefe10 FUN_144eefe10 body=171 status=ok
// SIG undefined FUN_144eefe10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eefe10(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_1 == param_2) {
    lVar2 = FUN_144ba1290();
    if (lVar2 != 0) goto LAB_144eefe67;
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    lVar2 = FUN_144ba1290();
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
LAB_144eefe67:
      puVar5 = (ulonglong *)*param_2;
      uVar3 = 0;
      puVar4 = (ulonglong *)*param_1;
      uVar7 = uVar3;
      if (0 < *(int *)(param_2 + 1)) {
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          uVar6 = (int)uVar7 + 1;
          *puVar4 = uVar1 * 2 | uVar3;
          puVar4 = puVar4 + 1;
          uVar3 = uVar1 >> 0x3f;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)(param_2 + 1));
      }
      *puVar4 = uVar3;
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + (int)uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eefec0 FUN_144eefec0 body=94 status=ok
// SIG undefined FUN_144eefec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eefec0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    FUN_144ba24f0(3,0x92,0x77,"crypto\\bn\\bn_shift.c",0x9b,0x144eefecc);
    return 0;
  }
  uVar1 = FUN_144ef0170();
  FUN_144ba1350(param_1);
  return uVar1;
}



// FUNCTION 144eeff20 FUN_144eeff20 body=236 status=ok
// SIG undefined FUN_144eeff20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eeff20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144ba0340(param_2);
  if (iVar3 != 0) {
    FUN_144ba0bb0(param_1,0);
    return 1;
  }
  iVar3 = (int)param_2[1];
  lVar1 = *param_2;
  if (param_2 != param_1) {
    lVar4 = FUN_144ba1290(param_1,iVar3);
    if (lVar4 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  lVar4 = *param_1;
  lVar7 = (longlong)(iVar3 + -1);
  *(int *)(param_1 + 1) = iVar3;
  puVar5 = (ulonglong *)(lVar4 + lVar7 * 8);
  uVar2 = *(ulonglong *)(lVar1 + lVar7 * 8);
  *puVar5 = uVar2 >> 1;
  *(uint *)(param_1 + 1) = (int)param_1[1] - (uint)(uVar2 == 1);
  if (0 < lVar7) {
    do {
      uVar6 = uVar2 << 0x3f;
      uVar2 = *(ulonglong *)((lVar1 - lVar4) + -8 + (longlong)puVar5);
      puVar5 = puVar5 + -1;
      lVar7 = lVar7 + -1;
      *puVar5 = uVar2 >> 1 | uVar6;
    } while (0 < lVar7);
  }
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}



// FUNCTION 144ef0010 FUN_144ef0010 body=340 status=ok
// SIG undefined FUN_144ef0010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef0010(longlong *param_1,longlong *param_2,uint param_3)

{
  size_t _Size;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  sbyte sVar5;
  sbyte sVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  iVar1 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  lVar2 = FUN_144ba1290();
  if (lVar2 == 0) {
    return 0;
  }
  iVar7 = (int)param_2[1];
  _Size = (longlong)iVar1 * 8;
  if (iVar7 == 0) {
    *(undefined8 *)(_Size + *param_1) = 0;
  }
  else {
    lVar2 = *param_2;
    uVar10 = -(param_3 & 0x3f) & 0x3f;
    plVar11 = (longlong *)(*param_1 + _Size);
    uVar12 = -(ulonglong)uVar10;
    uVar12 = uVar12 | uVar12 >> 8;
    uVar4 = *(ulonglong *)(lVar2 + (longlong)(iVar7 + -1) * 8);
    sVar5 = (sbyte)uVar10;
    plVar11[iVar7] = uVar4 >> sVar5 & uVar12;
    iVar7 = (int)param_2[1] + -1;
    lVar9 = (longlong)iVar7;
    sVar6 = (sbyte)(param_3 & 0x3f);
    if (0 < iVar7) {
      puVar8 = (ulonglong *)(plVar11 + lVar9);
      do {
        uVar3 = uVar4 << sVar6;
        lVar9 = lVar9 + -1;
        uVar4 = *(ulonglong *)((lVar2 - (longlong)plVar11) + (longlong)(puVar8 + -1));
        *puVar8 = uVar4 >> sVar5 & uVar12 | uVar3;
        puVar8 = puVar8 + -1;
      } while (0 < lVar9);
    }
    *plVar11 = uVar4 << sVar6;
  }
  if (iVar1 != 0) {
    memset((void *)*param_1,0,_Size);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = (int)param_2[1] + 1 + iVar1;
  return 1;
}



// FUNCTION 144ef0170 FUN_144ef0170 body=287 status=ok
// SIG undefined FUN_144ef0170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef0170(longlong *param_1,longlong *param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  sbyte sVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar3 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  if ((int)param_2[1] <= iVar3) {
    FUN_144ba0bb0(param_1,0);
    return 1;
  }
  iVar7 = (int)param_2[1] - iVar3;
  uVar6 = -(param_3 & 0x3f) & 0x3f;
  uVar12 = -(ulonglong)uVar6;
  if ((param_1 != param_2) && (lVar4 = FUN_144ba1290(param_1,iVar7), lVar4 == 0)) {
    return 0;
  }
  puVar2 = (ulonglong *)*param_1;
  puVar1 = (ulonglong *)(*param_2 + (longlong)iVar3 * 8);
  uVar9 = *puVar1;
  iVar3 = iVar7 + -1;
  lVar4 = (longlong)iVar3;
  sVar5 = (sbyte)(param_3 & 0x3f);
  iVar11 = 0;
  if (0 < iVar3) {
    uVar8 = uVar9;
    puVar10 = puVar2;
    do {
      uVar9 = *(ulonglong *)((longlong)puVar1 + (8 - (longlong)puVar2) + (longlong)puVar10);
      *puVar10 = uVar9 << (sbyte)uVar6 & (uVar12 | uVar12 >> 8) | uVar8 >> sVar5;
      lVar4 = lVar4 + -1;
      uVar8 = uVar9;
      puVar10 = puVar10 + 1;
      iVar11 = iVar3;
    } while (lVar4 != 0);
  }
  puVar2[iVar11] = uVar9 >> sVar5;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = iVar7;
  return 1;
}



// FUNCTION 144ef0290 FUN_144ef0290 body=786 status=ok
// SIG undefined FUN_144ef0290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef0290(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar19;
  uint uVar20;
  uint local_38;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar14;
  ulonglong uVar18;
  ulonglong uVar21;
  
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 1;
  local_38 = 1;
  uVar16 = 0;
  iVar1 = FUN_144ba0340(param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_144ba0340(param_2);
    if (iVar1 == 0) {
      FUN_144eede20(param_4);
      uVar5 = FUN_144eede90(param_4);
      plVar6 = (longlong *)FUN_144eede90(param_4);
      uVar15 = uVar14;
      if (((plVar6 != (longlong *)0x0) && (iVar1 = FUN_144eefe10(plVar6,param_3), iVar1 != 0)) &&
         (iVar1 = FUN_144eefe10(param_1,param_2), iVar1 != 0)) {
        if (0 < *(int *)((longlong)param_1 + 0xc)) {
          uVar19 = uVar14;
          uVar21 = uVar14;
          do {
            uVar16 = (uint)uVar15;
            if ((longlong)*(int *)((longlong)plVar6 + 0xc) <= (longlong)uVar19) break;
            lVar4 = 0x10;
            uVar7 = ~(*(ulonglong *)(*param_1 + uVar19 * 8) | *(ulonglong *)(*plVar6 + uVar19 * 8));
            uVar9 = uVar14;
            uVar11 = uVar14;
            uVar18 = uVar14;
            do {
              uVar12 = uVar12 & (uint)uVar7;
              uVar16 = (int)uVar15 + uVar12;
              uVar15 = (ulonglong)uVar16;
              uVar12 = uVar12 & (uint)(uVar7 >> 1);
              uVar17 = (int)uVar18 + uVar12;
              uVar18 = (ulonglong)uVar17;
              uVar12 = uVar12 & (uint)(uVar7 >> 2);
              uVar10 = (int)uVar11 + uVar12;
              uVar11 = (ulonglong)uVar10;
              uVar12 = uVar12 & (uint)(uVar7 >> 3);
              uVar8 = (int)uVar9 + uVar12;
              uVar9 = (ulonglong)uVar8;
              uVar7 = uVar7 >> 4;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            uVar20 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar20;
            uVar19 = uVar19 + 1;
            uVar16 = uVar16 + uVar8 + uVar10 + uVar17;
            uVar15 = (ulonglong)uVar16;
          } while ((int)uVar20 < *(int *)((longlong)param_1 + 0xc));
        }
        iVar1 = FUN_144eefec0(param_1,param_1,uVar16);
        uVar15 = uVar13;
        if ((iVar1 != 0) && (iVar1 = FUN_144eefec0(plVar6,plVar6,uVar16), iVar1 != 0)) {
          iVar1 = (int)plVar6[1];
          if ((int)plVar6[1] <= (int)param_1[1]) {
            iVar1 = (int)param_1[1];
          }
          iVar1 = iVar1 + 1;
          lVar4 = FUN_144ba1290(param_1,iVar1);
          uVar15 = uVar14;
          if (((lVar4 != 0) && (lVar4 = FUN_144ba1290(plVar6,iVar1), lVar4 != 0)) &&
             (lVar4 = FUN_144ba1290(uVar5,iVar1), lVar4 != 0)) {
            FUN_144ba1070(~(uint)*(undefined8 *)*param_1 & 1,param_1,plVar6,iVar1);
            iVar2 = FUN_144ba03d0(param_1);
            iVar3 = FUN_144ba03d0(plVar6);
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            iVar3 = iVar3 * 3 + 4;
            if (0 < iVar3) {
              do {
                uVar12 = ~((int)plVar6[1] + -1 >> 0x1f) & (int)-local_38 >> 0x1f & *(uint *)*plVar6
                         & 1;
                *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) ^ uVar12;
                FUN_144ba1070(uVar12,param_1,plVar6,iVar1);
                local_38 = (-uVar12 & -local_38 | uVar12 - 1 & local_38) + 1;
                iVar2 = FUN_144eee4f0(uVar5,plVar6,param_1);
                uVar15 = uVar13;
                if (iVar2 == 0) goto LAB_144ef057f;
                FUN_144ba1070((ulonglong)(~((int)plVar6[1] + -1 >> 0x1f) & 1) &
                              *(ulonglong *)*plVar6,plVar6,uVar5,iVar1);
                iVar2 = FUN_144eeff20(plVar6,plVar6);
                if (iVar2 == 0) goto LAB_144ef057f;
                uVar12 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar12;
              } while ((int)uVar12 < iVar3);
            }
            *(undefined4 *)(param_1 + 2) = 0;
            iVar1 = FUN_144eefdb0(param_1,param_1,uVar16);
            uVar15 = uVar13;
            if (iVar1 != 0) {
              iVar1 = FUN_144eeff20(param_1,param_1);
              uVar15 = 0;
              if (iVar1 != 0) {
                uVar15 = 1;
              }
            }
          }
        }
      }
LAB_144ef057f:
      FUN_144eedf20(param_4);
    }
    else {
      lVar4 = FUN_144ba06b0(param_1,param_3);
      *(undefined4 *)(param_1 + 2) = 0;
      uVar15 = (ulonglong)(lVar4 != 0);
    }
  }
  else {
    lVar4 = FUN_144ba06b0(param_1,param_2);
    *(undefined4 *)(param_1 + 2) = 0;
    uVar15 = (ulonglong)(lVar4 != 0);
  }
  return uVar15;
}



// FUNCTION 144ef05b0 FUN_144ef05b0 body=197 status=ok
// SIG undefined FUN_144ef05b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef05b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x144ef05ca;
  lVar1 = 0;
  local_res20[0] = 0;
  if ((param_4 == 0) && (lVar1 = FUN_144eedd20(), param_4 = lVar1, lVar1 == 0)) {
    FUN_144ba24f0(3,0x6e,0x41,"crypto\\bn\\bn_gcd.c",CONCAT44(uVar2,0x20d));
    return 0;
  }
  uVar3 = FUN_144ef0680(param_1,param_2,param_3,param_4,local_res20,uVar3);
  if (local_res20[0] != 0) {
    FUN_144ba24f0(3,0x6e,0x6c,"crypto\\bn\\bn_gcd.c",0x214);
  }
  FUN_144eeddc0(lVar1);
  return uVar3;
}



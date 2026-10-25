// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14528a5a0 FUN_14528a5a0 body=247 status=ok
// SIG undefined FUN_14528a5a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14528a5a0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_144ba24f0(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0,0x14528a5b5);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    }
    if (param_2 == 0) {
      uVar2 = FUN_144ed31a0(lVar3);
      iVar1 = FUN_144efc3e0(uVar2);
      *param_3 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
      return 1;
    }
    uVar2 = FUN_144ed3230(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
    iVar1 = FUN_145298f40(param_2,*param_3,uVar2,lVar3,0);
    if (0 < iVar1) {
      *param_3 = (longlong)iVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14528a6a0 FUN_14528a6a0 body=95 status=ok
// SIG undefined FUN_14528a6a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528a6a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528a6ac;
  lVar1 = FUN_144ea6670(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 14528a700 FUN_14528a700 body=101 status=ok
// SIG undefined FUN_14528a700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528a700(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_144efba20(*puVar1);
    FUN_144ea6530(puVar1[2],"crypto\\sm2\\sm2_pmeth.c",0x33);
    FUN_144ea6530(puVar1,"crypto\\sm2\\sm2_pmeth.c",0x34);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14528a770 FUN_14528a770 body=287 status=ok
// SIG undefined FUN_14528a770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528a770(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x14528a785;
  plVar2 = (longlong *)FUN_144ea6670(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar4);
    return 0;
  }
  *(longlong **)(param_1 + 0x28) = plVar2;
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    lVar3 = FUN_144efbe70();
    *plVar2 = lVar3;
    if (lVar3 == 0) goto LAB_14528a83a;
  }
  if (plVar1[2] != 0) {
    _Dst = (void *)FUN_144ea64e0(plVar1[3],"crypto\\sm2\\sm2_pmeth.c",0x49);
    plVar2[2] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(0x35,0x73,0x41,"crypto\\sm2\\sm2_pmeth.c",0x4b,uVar4);
LAB_14528a83a:
      FUN_14528a700(param_1);
      return 0;
    }
    memcpy(_Dst,(void *)plVar1[2],plVar1[3]);
  }
  plVar2[3] = plVar1[3];
  *(int *)(plVar2 + 4) = (int)plVar1[4];
  plVar2[1] = plVar1[1];
  return 1;
}



// FUNCTION 14528a890 FUN_14528a890 body=168 status=ok
// SIG undefined FUN_14528a890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528a890(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x14528a8aa;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar1 = FUN_144ee6e30(uVar3);
  if (iVar1 < 1) {
LAB_14528a8f6:
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)iVar1;
    if (param_2 != 0) {
      if (*param_3 < uVar2) {
        FUN_144ba24f0(0x35,0x70,0x6b,"crypto\\sm2\\sm2_pmeth.c",CONCAT44(uVar4,0x6a));
        goto LAB_14528a8f6;
      }
      uVar3 = FUN_1454daaf0(param_4,param_5,param_2,local_res8,uVar3,uVar5);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      uVar2 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14528a940 FUN_14528a940 body=51 status=ok
// SIG undefined FUN_14528a940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528a940(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_1454dabc0(param_4,param_5,param_2,param_3);
  return;
}



// FUNCTION 14528a980 FUN_14528a980 body=149 status=ok
// SIG undefined FUN_14528a980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528a980(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    lVar3 = FUN_14529dd70();
  }
  if (param_2 == 0) {
    iVar2 = FUN_1454db290(uVar1,lVar3,param_5,param_3);
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = FUN_1454db3d0(uVar1,lVar3,param_4,param_5,param_2,param_3);
  }
  return uVar4;
}



// FUNCTION 14528aa20 FUN_14528aa20 body=152 status=ok
// SIG undefined FUN_14528aa20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528aa20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    lVar3 = FUN_14529dd70();
  }
  if (param_2 == 0) {
    iVar2 = FUN_1454db350(param_4,param_5,param_3);
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = FUN_1454dbaa0(uVar1,lVar3,param_4,param_5,param_2,param_3);
  }
  return uVar4;
}



// FUNCTION 14528aac0 FUN_14528aac0 body=605 status=ok
// SIG undefined FUN_14528aac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528aac0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  size_t _Size;
  undefined8 uVar3;
  
  uVar3 = 0x14528aad5;
  plVar1 = *(longlong **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 < 0x1003) {
    if (param_2 == 0x1002) {
      if (*plVar1 != 0) {
        FUN_144efc200(*plVar1,param_3);
        return 1;
      }
      FUN_144ba24f0(0x35,0x6d,0x6d,"crypto\\sm2\\sm2_pmeth.c",0xb6,0x14528aad5);
      return 0;
    }
    if (param_2 == 1) {
      plVar1[1] = (longlong)param_4;
      return 1;
    }
    if (param_2 != 7) {
      if (param_2 == 0xd) {
        *param_4 = plVar1[1];
        return 1;
      }
      if (param_2 != 0x1001) {
        return 0xfffffffe;
      }
      lVar2 = FUN_14527fe90(param_3);
      if (lVar2 == 0) {
        FUN_144ba24f0(0x35,0x6d,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xad,uVar3);
        return 0;
      }
      FUN_144efba20(*plVar1);
      *plVar1 = lVar2;
    }
    return 1;
  }
  if (param_2 == 0x100b) {
    if (param_3 < 1) {
      FUN_144ea6530(plVar1[2],"crypto\\sm2\\sm2_pmeth.c",0xd0);
      plVar1[2] = 0;
    }
    else {
      _Dst = (void *)FUN_144ea64e0(_Size,"crypto\\sm2\\sm2_pmeth.c",0xc6);
      if (_Dst == (void *)0x0) {
        FUN_144ba24f0(0x35,0x6d,0x41,"crypto\\sm2\\sm2_pmeth.c",200);
        return 0;
      }
      memcpy(_Dst,param_4,_Size);
      FUN_144ea6530(plVar1[2],"crypto\\sm2\\sm2_pmeth.c",0xcc);
      plVar1[2] = (longlong)_Dst;
    }
    plVar1[3] = _Size;
    *(undefined4 *)(plVar1 + 4) = 1;
    return 1;
  }
  if (param_2 == 0x100c) {
    memcpy(param_4,(void *)plVar1[2],plVar1[3]);
    return 1;
  }
  if (param_2 != 0x100d) {
    return 0xfffffffe;
  }
  *param_4 = plVar1[3];
  return 1;
}



// FUNCTION 14528ad20 FUN_14528ad20 body=331 status=ok
// SIG undefined FUN_14528ad20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528ad20(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14528ad35;
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"ec_param_enc");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = strcmp(param_3,"explicit");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = 1;
    }
    uVar3 = FUN_144ed1710(param_1,0x198,6,0x1002,uVar2,0);
    return uVar3;
  }
  iVar1 = FUN_14527ff60(param_3);
  if (((iVar1 == 0) && (iVar1 = FUN_144ea96a0(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_144ea9580(param_3), iVar1 == 0)) {
    FUN_144ba24f0(0x35,0x6e,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xf1,uVar3);
    return 0;
  }
  uVar3 = FUN_144ed1710(param_1,0x198,6,0x1001,iVar1,0);
  return uVar3;
}



// FUNCTION 14528ae70 FUN_14528ae70 body=220 status=ok
// SIG undefined FUN_14528ae70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528ae70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14528ae88;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar5 = FUN_144ba3d20(param_2);
  iVar3 = FUN_144ba3cd0(uVar5);
  if (*(int *)(lVar1 + 0x20) == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x112);
    FUN_144ba24f0(0x35,0x72,0x70,"crypto\\sm2\\sm2_pmeth.c");
  }
  else if (iVar3 < 0) {
    local_78 = CONCAT44(local_78._4_4_,0x117);
    FUN_144ba24f0(0x35,0x72,0x66,"crypto\\sm2\\sm2_pmeth.c");
  }
  else {
    local_78 = uVar2;
    iVar4 = FUN_1454da6e0(local_68,uVar5,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18)
                         );
    if (iVar4 != 0) {
      FUN_144ba5c70(param_2,local_68,(longlong)iVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 14528af70 FUN_14528af70 body=336 status=ok
// SIG undefined FUN_14528af70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528af70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  longlong lVar6;
  ulonglong uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x14528af80;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    FUN_144ba24f0(0x10,0x10c,0x74,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar7,0x83),0x14528af80);
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x10);
  if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar1 != 0x40b) + '8';
  }
  lVar2 = FUN_144ea6d10(*(longlong *)(param_2 + 0x28),cVar4,"crypto\\ec\\ecx_meth.c",0x87);
  if (lVar2 == 0) {
    uVar3 = CONCAT44(uVar7,0x89);
  }
  else {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = (iVar1 != 0x40b) + 0x38;
    }
    uVar3 = FUN_144ea8d60();
    uVar8 = (ulonglong)uVar5;
    lVar6 = lVar2;
    iVar1 = FUN_144bb67b0(param_1,uVar3,0xffffffff,0,lVar2,uVar8);
    uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144ea6530(lVar2,"crypto\\ec\\ecx_meth.c",0x8f);
    uVar3 = CONCAT44(uVar7,0x90);
  }
  FUN_144ba24f0(0x10,0x10c,0x41,"crypto\\ec\\ecx_meth.c",uVar3,uVar8);
  return 0;
}



// FUNCTION 14528b0c0 FUN_14528b0c0 body=101 status=ok
// SIG undefined FUN_14528b0c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528b0c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14528b0cc;
  iVar1 = FUN_144bb6830(0,&local_res20,local_res18,&local_18,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_14528c0c0(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,local_res18[0],0);
  return;
}



// FUNCTION 14528b130 FUN_14528b130 body=120 status=ok
// SIG undefined FUN_14528b130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528b130(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    iVar1 = FUN_14259f120(*(longlong *)(param_1 + 0x28),*(longlong *)(param_2 + 0x28),cVar2);
    return (ulonglong)(iVar1 == 0);
  }
  return 0xfffffffe;
}



// FUNCTION 14528b1b0 FUN_14528b1b0 body=182 status=ok
// SIG undefined FUN_14528b1b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528b1b0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14528b1bc;
  uVar2 = FUN_144efe520(0,&local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144efe970(0,&local_res20,local_res18[0]);
  if (lVar3 == 0) {
    local_res20 = 0;
    local_res18[0] = 0;
  }
  else {
    local_res20 = FUN_144f03e90(lVar3);
    local_res18[0] = FUN_144f03e70(lVar3);
  }
  uVar1 = FUN_14528c0c0(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,
                        CONCAT44(uVar4,local_res18[0]),1);
  FUN_144f03af0(lVar3);
  return (ulonglong)uVar1;
}



// FUNCTION 14528b270 FUN_14528b270 body=371 status=ok
// SIG undefined FUN_14528b270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528b270(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  int local_28 [2];
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_10 = 0x14528b280;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) != 0) &&
     (local_20 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x40), local_20 != 0)) {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      local_28[0] = 0x20;
    }
    else {
      local_28[0] = (iVar1 != 0x40b) + 0x38;
    }
    local_18 = 0;
    iVar1 = FUN_144efe990(local_28,&local_res10);
    if (iVar1 < 0) {
      uVar3 = CONCAT44(uVar4,0xd8);
    }
    else {
      uVar3 = FUN_144ea8d60(**(undefined4 **)(param_2 + 0x10));
      uVar4 = 0;
      iVar2 = FUN_144efe490(param_1,uVar3,0,0xffffffff,0,local_res10,iVar1);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_144ea66f0(local_res10,(longlong)iVar1,"crypto\\ec\\ecx_meth.c",0xde);
      uVar3 = CONCAT44(uVar4,0xdf);
    }
    FUN_144ba24f0(0x10,0x10b,0x41,"crypto\\ec\\ecx_meth.c",uVar3);
    return 0;
  }
  FUN_144ba24f0(0x10,0x10b,0x7b,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar4,0xce));
  return 0;
}



// FUNCTION 14528b480 FUN_14528b480 body=124 status=ok
// SIG undefined FUN_14528b480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528b480(longlong param_1)

{
  int iVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    FUN_144ea6f60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),cVar2,
                  "crypto\\ec\\ecx_meth.c",0x102);
  }
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x28),"crypto\\ec\\ecx_meth.c",0x103);
  return;
}



// FUNCTION 14528b510 FUN_14528b510 body=31 status=ok
// SIG undefined FUN_14528b510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528b510(void)

{
  FUN_14528c390();
  return;
}



// FUNCTION 14528b530 FUN_14528b530 body=31 status=ok
// SIG undefined FUN_14528b530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528b530(void)

{
  FUN_14528c390();
  return;
}



// FUNCTION 14528b550 FUN_14528b550 body=403 status=ok
// SIG undefined FUN_14528b550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14528b550(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14528b569;
  if (param_2 != 9) {
    if (param_2 != 10) {
      return -2;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar1 = **(int **)(param_1 + 0x10);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar3 = ' ';
      }
      else {
        cVar3 = (iVar1 != 0x40b) + '8';
      }
      lVar2 = FUN_144ea6d10(*(longlong *)(param_1 + 0x28),cVar3,"crypto\\ec\\ecx_meth.c",0x149);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        iVar1 = **(int **)(param_1 + 0x10);
        if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
          return (iVar1 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_4 != (longlong *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar4) {
      _Dst = (void *)FUN_144ea6670(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_4,(longlong)param_3);
        FUN_144ba69a0(param_1,iVar1,_Dst);
        return 1;
      }
      uVar6 = 0x48;
      uVar5 = 0x41;
      goto LAB_14528b6b2;
    }
  }
  uVar6 = 0x41;
  uVar5 = 0x66;
LAB_14528b6b2:
  FUN_144ba24f0(0x10,0x10a,uVar5,"crypto\\ec\\ecx_meth.c",uVar6,uVar7);
  return 0;
}



// FUNCTION 14528b710 FUN_14528b710 body=48 status=ok
// SIG undefined FUN_14528b710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528b710(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14528c0c0(param_1,**(undefined4 **)(param_1 + 0x10),0,param_2,param_3,1,0x14528b71a);
  return;
}



// FUNCTION 14528b740 FUN_14528b740 body=267 status=ok
// SIG undefined FUN_14528b740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_14528b740(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0x14528b75b;
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_2 != (void *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar2) {
      _Dst = (void *)FUN_144ea6670(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst == (void *)0x0) {
        FUN_144ba24f0(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x48,uVar3);
        return 0;
      }
      memcpy(_Dst,param_2,(longlong)param_3);
      FUN_144ba69a0(param_1,iVar1,_Dst);
      return 1;
    }
  }
  FUN_144ba24f0(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",0x41,0x14528b75b);
  return 0;
}



// FUNCTION 14528b850 FUN_14528b850 body=232 status=ok
// SIG undefined FUN_14528b850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14528b850(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t _Size;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar3 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,*(void **)(lVar2 + 0x40),_Size);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14528b940 FUN_14528b940 body=221 status=ok
// SIG undefined FUN_14528b940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14528b940(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  size_t _Size;
  
  _Src = *(void **)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if (_Src != (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar2 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,_Src,_Size);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14528ba40 FUN_14528ba40 body=145 status=ok
// SIG undefined FUN_14528ba40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14528ba40(undefined8 param_1)

{
  int iVar1;
  undefined8 in_stack_00000030;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18 [2];
  undefined8 local_10;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_10 = 0x14528ba4c;
  FUN_144efded0(&local_10,local_18,0);
  iVar1 = FUN_144ea8fa0(local_10);
  if ((iVar1 - 0x43fU < 2) && (local_18[0] == -1)) {
    iVar1 = FUN_144ba6360(param_1,0,0,0,in_stack_00000030);
    return -(iVar1 != 0) & 2;
  }
  FUN_144ba24f0(0x10,0x10e,0x66,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar2,0x205));
  return 0;
}



// FUNCTION 14528bae0 FUN_14528bae0 body=95 status=ok
// SIG undefined FUN_14528bae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528bae0(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = FUN_144ea8d60(0x43f);
  FUN_144efde30(in_R9,uVar1,0xffffffff,0);
  if (in_stack_00000028 != 0) {
    uVar1 = FUN_144ea8d60(0x43f);
    FUN_144efde30(in_stack_00000028,uVar1,0xffffffff,0);
  }
  return 3;
}



// FUNCTION 14528bb40 FUN_14528bb40 body=48 status=ok
// SIG undefined FUN_14528bb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528bb40(undefined8 param_1)

{
  FUN_144bb5f10(param_1,0,0x43f,0x80,2);
  return 1;
}



// FUNCTION 14528bb70 FUN_14528bb70 body=95 status=ok
// SIG undefined FUN_14528bb70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528bb70(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = FUN_144ea8d60(0x440);
  FUN_144efde30(in_R9,uVar1,0xffffffff,0);
  if (in_stack_00000028 != 0) {
    uVar1 = FUN_144ea8d60(0x440);
    FUN_144efde30(in_stack_00000028,uVar1,0xffffffff,0);
  }
  return 3;
}



// FUNCTION 14528bbd0 FUN_14528bbd0 body=50 status=ok
// SIG undefined FUN_14528bbd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528bbd0(undefined8 param_1)

{
  FUN_144bb5f10(param_1,0,0x440,0xe0,2);
  return 1;
}



// FUNCTION 14528bc10 FUN_14528bc10 body=56 status=ok
// SIG undefined FUN_14528bc10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528bc10(undefined8 *param_1,undefined8 param_2)

{
  FUN_14528c0c0(param_2,*(undefined4 *)*param_1,0,0,0,2,0x14528bc1a);
  return;
}



// FUNCTION 14528bc50 FUN_14528bc50 body=177 status=ok
// SIG undefined FUN_14528bc50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528bc50(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 != 0) && (iVar2 = FUN_1454dcad0(param_2), iVar2 == 0)) {
          return 0;
        }
        *param_3 = 0x20;
        return 1;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  FUN_144ba24f0(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x14528bc5c);
  return 0;
}



// FUNCTION 14528bd10 FUN_14528bd10 body=177 status=ok
// SIG undefined FUN_14528bd10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528bd10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 != 0) && (iVar2 = FUN_1454e6c90(param_2), iVar2 == 0)) {
          return 0;
        }
        *param_3 = 0x38;
        return 1;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  FUN_144ba24f0(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x14528bd1c);
  return 0;
}



// FUNCTION 14528bdf0 FUN_14528bdf0 body=167 status=ok
// SIG undefined FUN_14528bdf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528bdf0(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14528be05;
  lVar2 = FUN_144ba3d40();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      FUN_144ba24f0(0x10,0x114,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x2ed));
    }
    else {
      iVar1 = FUN_1454dc550(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),uVar4);
      if (iVar1 != 0) goto LAB_14528be7b;
    }
    return 0;
  }
LAB_14528be7b:
  *param_3 = 0x40;
  return 1;
}



// FUNCTION 14528bea0 FUN_14528bea0 body=179 status=ok
// SIG undefined FUN_14528bea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528bea0(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar4 = 0x14528beb5;
  lVar2 = FUN_144ba3d40();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      FUN_144ba24f0(0x10,0x115,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x302));
    }
    else {
      iVar1 = FUN_1454e82a0(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),0,0,uVar4);
      if (iVar1 != 0) goto LAB_14528bf37;
    }
    return 0;
  }
LAB_14528bf37:
  *param_3 = 0x72;
  return 1;
}



// FUNCTION 14528bf60 FUN_14528bf60 body=101 status=ok
// SIG undefined FUN_14528bf60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528bf60(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144ba3d40();
  if (param_3 != 0x40) {
    return 0;
  }
  uVar2 = FUN_1454dc770(param_4,param_5,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28))
  ;
  return uVar2;
}



// FUNCTION 14528bfd0 FUN_14528bfd0 body=114 status=ok
// SIG undefined FUN_14528bfd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528bfd0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144ba3d40();
  if (param_3 != 0x72) {
    return 0;
  }
  uVar2 = FUN_1454e82f0(param_4,param_5,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28),
                        0,0);
  return uVar2;
}



// FUNCTION 14528c050 FUN_14528c050 body=107 status=ok
// SIG undefined FUN_14528c050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c050(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528c05c;
  if (param_2 == 1) {
    if (param_4 != 0) {
      lVar1 = FUN_1454dc540();
      if (param_4 != lVar1) {
        FUN_144ba24f0(0x10,0x10f,0x8a,"crypto\\ec\\ecx_meth.c",0x32c,uVar2);
        return 0;
      }
    }
  }
  else if (param_2 != 7) {
    return 0xfffffffe;
  }
  return 1;
}



// FUNCTION 14528c0c0 FUN_14528c0c0 body=720 status=ok
// SIG undefined FUN_14528c0c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528c0c0(undefined8 param_1,int param_2,longlong param_3,void *param_4,int param_5,int param_6)

{
  void *_Dst;
  byte *_Dst_00;
  size_t sVar1;
  size_t _Size;
  int iVar2;
  undefined4 uVar3;
  int local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14528c0df;
  iVar2 = 0x20;
  _Size = 0x20;
  if (param_6 != 2) {
    if ((param_3 != 0) && (FUN_144efded0(0,local_28,0,param_3), local_28[0] != -1)) {
      uVar3 = 0x3b;
      goto LAB_14528c128;
    }
    if (param_4 != (void *)0x0) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        iVar2 = (param_2 != 0x40b) + 0x38;
      }
      if (param_5 == iVar2) goto LAB_14528c17f;
    }
    uVar3 = 0x41;
LAB_14528c128:
    FUN_144ba24f0(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",uVar3);
    return 0;
  }
LAB_14528c17f:
  _Dst = (void *)FUN_144ea6670(0x48,"crypto\\ec\\ecx_meth.c");
  if (_Dst == (void *)0x0) {
    FUN_144ba24f0(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x48);
    return 0;
  }
  if (param_6 == 0) {
    memcpy(_Dst,param_4,(longlong)param_5);
  }
  else {
    sVar1 = _Size;
    if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
      sVar1 = (ulonglong)(param_2 != 0x40b) + 0x38;
    }
    _Dst_00 = (byte *)FUN_144ea6f00(sVar1,"crypto\\ec\\ecx_meth.c",0x50);
    *(byte **)((longlong)_Dst + 0x40) = _Dst_00;
    if (_Dst_00 == (byte *)0x0) {
      FUN_144ba24f0(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x52);
LAB_14528c2a1:
      FUN_144ea6530(_Dst,"crypto\\ec\\ecx_meth.c",0x79);
      return 0;
    }
    if (param_6 == 2) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        _Size = (size_t)((param_2 != 0x40b) + 0x38);
      }
      iVar2 = FUN_144bac8c0(_Dst_00,_Size);
      if (iVar2 < 1) {
        FUN_144ea6f40(_Dst_00,"crypto\\ec\\ecx_meth.c",0x57);
        *(undefined8 *)((longlong)_Dst + 0x40) = 0;
        goto LAB_14528c2a1;
      }
      if (param_2 == 0x40a) {
        *_Dst_00 = *_Dst_00 & 0xf8;
        _Dst_00[0x1f] = _Dst_00[0x1f] & 0x3f;
        _Dst_00[0x1f] = _Dst_00[0x1f] | 0x40;
      }
      else if (param_2 == 0x40b) {
        *_Dst_00 = *_Dst_00 & 0xfc;
        _Dst_00[0x37] = _Dst_00[0x37] | 0x80;
      }
    }
    else {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        _Size = (ulonglong)(param_2 != 0x40b) + 0x38;
      }
      memcpy(_Dst_00,param_4,_Size);
    }
    if (param_2 == 0x40a) {
      FUN_1454dcb10(_Dst,_Dst_00);
    }
    else if (param_2 == 0x40b) {
      FUN_1454e6cc0(_Dst,_Dst_00);
    }
    else if (param_2 == 0x43f) {
      FUN_1454dc9d0(_Dst,_Dst_00);
    }
    else if (param_2 == 0x440) {
      FUN_1454e8340(_Dst,_Dst_00);
    }
  }
  FUN_144ba69a0(param_1,param_2,_Dst);
  return 1;
}



// FUNCTION 14528c390 FUN_14528c390 body=441 status=ok
// SIG undefined FUN_14528c390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14528c390(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14528c3ae;
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar3 = FUN_144ea8e20(**(undefined4 **)(param_2 + 0x10));
  cVar4 = ' ';
  if (param_5 == 1) {
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      iVar2 = FUN_144ec7640(param_1,"%*s<INVALID PRIVATE KEY>\n",param_3,&DAT_149e02088);
      return 0 < iVar2;
    }
    iVar2 = FUN_144ec7640(param_1,"%*s%s Private-Key:\n",param_3,&DAT_149e02088,uVar3,uVar6);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = FUN_144ec7640(param_1,"%*spriv:\n",param_3,&DAT_149e02088,uVar3,uVar6);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = **(int **)(param_2 + 0x10);
    cVar5 = cVar4;
    if ((iVar2 != 0x40a) && (iVar2 != 0x43f)) {
      cVar5 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = FUN_1454dc210(param_1,*(undefined8 *)(lVar1 + 0x40),cVar5,param_3 + 4);
    if (iVar2 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      iVar2 = FUN_144ec7640(param_1,"%*s<INVALID PUBLIC KEY>\n",param_3,&DAT_149e02088);
      return 0 < iVar2;
    }
    iVar2 = FUN_144ec7640(param_1,"%*s%s Public-Key:\n",param_3,&DAT_149e02088,uVar3,uVar6);
    if (iVar2 < 1) {
      return false;
    }
  }
  iVar2 = FUN_144ec7640(param_1,"%*spub:\n",param_3,&DAT_149e02088,uVar3,uVar6);
  if (iVar2 < 1) {
    return false;
  }
  iVar2 = **(int **)(param_2 + 0x10);
  if ((iVar2 != 0x40a) && (iVar2 != 0x43f)) {
    cVar4 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = FUN_1454dc210(param_1,lVar1,cVar4,param_3 + 4);
  return iVar2 != 0;
}



// FUNCTION 14528c550 FUN_14528c550 body=172 status=ok
// SIG undefined FUN_14528c550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c550(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14528c560;
  lVar1 = FUN_144ea6670(0x28,"crypto\\hmac\\hm_pmeth.c",0x1f);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xf,0x7b,0x41,"crypto\\hmac\\hm_pmeth.c",0x20,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = 4;
  lVar2 = FUN_14527f710();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    FUN_144ea6530(lVar1,"crypto\\hmac\\hm_pmeth.c",0x26);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}



// FUNCTION 14528c600 FUN_14528c600 body=112 status=ok
// SIG undefined FUN_14528c600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528c600(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ed19c0();
  if (lVar1 != 0) {
    FUN_14527f7e0(*(undefined8 *)(lVar1 + 0x20));
    FUN_144ea66f0(*(undefined8 *)(lVar1 + 0x10),(longlong)*(int *)(lVar1 + 8),
                  "crypto\\hmac\\hm_pmeth.c",0x50);
    FUN_144ea6530(lVar1,"crypto\\hmac\\hm_pmeth.c",0x51);
    FUN_144ed19b0(param_1,0);
  }
  return;
}



// FUNCTION 14528c670 FUN_14528c670 body=168 status=ok
// SIG undefined FUN_14528c670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c670(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_14528c550();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  puVar3 = (undefined8 *)FUN_144ed19c0(param_2);
  puVar4 = (undefined8 *)FUN_144ed19c0(param_1);
  *puVar4 = *puVar3;
  iVar1 = FUN_14527fd30(puVar4[4],puVar3[4]);
  if (iVar1 != 0) {
    if (puVar3[2] != 0) {
      iVar1 = FUN_144ef2c50(puVar4 + 1,puVar3[2],*(undefined4 *)(puVar3 + 1));
      if (iVar1 == 0) goto LAB_14528c6fe;
    }
    return 1;
  }
LAB_14528c6fe:
  FUN_14528c600(param_1);
  return 0;
}



// FUNCTION 14528c720 FUN_14528c720 body=78 status=ok
// SIG undefined FUN_14528c720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c720(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
    lVar1 = FUN_144ef2c10(*(longlong *)(param_1 + 0x28) + 8);
    if (lVar1 != 0) {
      FUN_144ba69a0(param_2,0x357,lVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14528c770 FUN_14528c770 body=94 status=ok
// SIG undefined FUN_14528c770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_144ba3ee0(param_2,0xfffffeff);
  FUN_14527fdd0(*(undefined8 *)(lVar1 + 0x20),uVar2);
  FUN_144ba3ec0(param_2,0x100);
  FUN_144ba3d30(param_2,FUN_14528c980);
  return 1;
}



// FUNCTION 14528c7d0 FUN_14528c7d0 body=131 status=ok
// SIG undefined FUN_14528c7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c7d0(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar3 = FUN_144ba3d20(param_4);
  iVar2 = FUN_144ba3cd0(uVar3);
  if (iVar2 < 0) {
    return 0;
  }
  *param_3 = (longlong)iVar2;
  if (param_2 != 0) {
    iVar2 = FUN_14527fb60(*(undefined8 *)(lVar1 + 0x20),param_2,local_res8);
    if (iVar2 == 0) {
      return 0;
    }
    *param_3 = (ulonglong)local_res8[0];
  }
  return 1;
}



// FUNCTION 14528c860 FUN_14528c860 body=142 status=ok
// SIG undefined FUN_14528c860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c860(longlong param_1,int param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_2 == 1) {
    *plVar1 = param_4;
  }
  else {
    if (param_2 == 6) {
      if ((((param_4 != 0) || (param_3 < 1)) && (-2 < param_3)) &&
         (iVar3 = FUN_144ef2c50(plVar1 + 1,param_4), iVar3 != 0)) {
        return 1;
      }
      return 0;
    }
    if (param_2 != 7) {
      return 0xfffffffe;
    }
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x28);
    uVar4 = FUN_14527f850(plVar1[4],*(undefined8 *)(puVar2 + 2),*puVar2,*plVar1,
                          *(undefined8 *)(param_1 + 8));
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  return 1;
}



// FUNCTION 14528c8f0 FUN_14528c8f0 body=141 status=ok
// SIG undefined FUN_14528c8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528c8f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    uVar1 = 0;
    if (*(char *)(param_2 + uVar3) != (&DAT_14b474526)[uVar3]) {
      do {
        uVar3 = uVar1;
        if (*(char *)(param_2 + uVar3) != (&DAT_149d0a0a0)[uVar3]) {
          return 0xfffffffe;
        }
        uVar1 = uVar3 + 1;
      } while (uVar3 + 1 != 7);
      uVar2 = FUN_144ed1870(param_1,uVar3 & 0xffffffff);
      return uVar2;
    }
    uVar3 = uVar4;
  } while (uVar4 != 4);
  uVar2 = FUN_144ed1830(param_1,6);
  return uVar2;
}



// FUNCTION 14528c980 FUN_14528c980 body=69 status=ok
// SIG undefined FUN_14528c980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14528c980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba3d40();
  iVar1 = FUN_14527fb30(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20),param_2,param_3);
  return iVar1 != 0;
}



// FUNCTION 14528c9d0 FUN_14528c9d0 body=244 status=ok
// SIG undefined FUN_14528c9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14528c9d0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar1 + 0x1c);
  if (iVar3 == 4) {
    uVar2 = FUN_144bae400(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
    iVar3 = FUN_14528e0e0(lVar1,param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_1452a9260(*(undefined8 *)(lVar1 + 0x38),uVar2,param_4,param_5,
                            *(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),
                            *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
      if (iVar3 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x10);
        param_4 = *(undefined8 *)(lVar1 + 0x38);
        iVar3 = 3;
        param_5 = uVar2;
        goto LAB_14528ca91;
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10);
LAB_14528ca91:
    uVar4 = FUN_144bae430(param_5,param_4,param_2,*(undefined8 *)(lVar5 + 0x28),iVar3);
    if (-1 < (int)uVar4) {
      *param_3 = (longlong)(int)uVar4;
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 14528cad0 FUN_14528cad0 body=322 status=ok
// SIG undefined FUN_14528cad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528cad0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x1c) == 4) {
    iVar2 = FUN_14528e0e0(lVar1,param_1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_144bae490(param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),3);
    if ((int)uVar4 < 1) {
      return uVar4;
    }
    uVar3 = FUN_1452a9660(param_2,uVar4 & 0xffffffff,*(undefined8 *)(lVar1 + 0x38),
                          uVar4 & 0xffffffff,(int)uVar4,*(undefined8 *)(lVar1 + 0x40),
                          *(undefined4 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x20),
                          *(undefined8 *)(lVar1 + 0x28));
  }
  else {
    uVar3 = FUN_144bae490(param_5,param_4,param_2,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                          *(int *)(lVar1 + 0x1c));
  }
  uVar4 = (longlong)(int)uVar3 >> 0x3f;
  *param_3 = uVar4 & *param_3 | ~uVar4 & (longlong)(int)uVar3;
  return (ulonglong)(~((int)uVar3 >> 0x1f) & 1U | (int)uVar3 >> 0x1f & uVar3);
}



// FUNCTION 14528cc20 FUN_14528cc20 body=1205 status=ok
// SIG undefined FUN_14528cc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14528cc20(undefined8 *param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14528cc3b;
  piVar1 = (int *)param_1[5];
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (param_3 - 1U < 6) {
        iVar3 = FUN_14528e160(*(undefined8 *)(piVar1 + 8),param_3);
        if (iVar3 == 0) {
          return 0;
        }
        if (param_3 == 6) {
          bVar6 = (*(byte *)(param_1 + 4) & 0x18) == 0;
        }
        else {
          if (*(int *)*param_1 == 0x390) goto LAB_14528cd91;
          if (param_3 != 4) goto LAB_14528cd87;
          bVar6 = (*(uint *)(param_1 + 4) & 0x300) == 0;
        }
        if (!bVar6) {
          if (*(longlong *)(piVar1 + 8) == 0) {
            uVar8 = FUN_144bab020();
            *(undefined8 *)(piVar1 + 8) = uVar8;
          }
LAB_14528cd87:
          piVar1[7] = param_3;
          return 1;
        }
      }
LAB_14528cd91:
      uVar7 = 0x1ac;
      uVar5 = 0x90;
    }
    else {
      switch(param_2) {
      case 1:
        iVar3 = FUN_14528e160(param_4,piVar1[7]);
        if (iVar3 == 0) {
          return 0;
        }
        if (piVar1[0xd] != -1) {
          iVar3 = FUN_144ba3cb0(*(undefined8 *)(piVar1 + 8));
          iVar2 = FUN_144ba3cb0(param_4);
          if (iVar3 == iVar2) {
            return 1;
          }
          FUN_144ba24f0(4,0x8f,0x91,"crypto\\rsa\\rsa_pmeth.c",0x1fa,uVar8);
          return 0;
        }
        goto LAB_14528cfa4;
      case 3:
      case 4:
      case 9:
      case 10:
        if (*(int *)*param_1 != 0x390) {
          return 1;
        }
      case 2:
        uVar7 = 0x244;
        uVar5 = 0x94;
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      default:
        goto LAB_14528cd20;
      case 0xd:
        *param_4 = *(longlong *)(piVar1 + 8);
        return 1;
      }
    }
    goto LAB_14528cd16;
  }
  switch(param_2) {
  case 0x1002:
  case 0x1007:
    if (piVar1[7] == 6) {
      if (param_2 == 0x1007) {
        *(int *)param_4 = piVar1[0xc];
        return 1;
      }
      if (param_3 < -3) {
        return -2;
      }
      if (piVar1[0xd] == -1) {
LAB_14528ce61:
        piVar1[0xc] = param_3;
        return 1;
      }
      if (param_3 != -2) {
        if (param_3 == -1) {
          iVar3 = FUN_144ba3cd0(*(undefined8 *)(piVar1 + 8));
          if (iVar3 < piVar1[0xd]) {
LAB_14528ce77:
            FUN_144ba24f0(4,0x8f,0xa4,"crypto\\rsa\\rsa_pmeth.c",0x1c7,uVar8);
            return 0;
          }
        }
        else if ((-1 < param_3) && (param_3 < piVar1[0xd])) goto LAB_14528ce77;
        goto LAB_14528ce61;
      }
      if (*(int *)(param_1 + 4) != 0x10) goto LAB_14528ce61;
      uVar7 = 0x1c1;
    }
    else {
      uVar7 = 0x1b6;
    }
    uVar5 = 0x92;
    break;
  case 0x1003:
    if (0x1ff < param_3) {
      *piVar1 = param_3;
      return 1;
    }
    uVar7 = 0x1d1;
    uVar5 = 0x78;
    break;
  case 0x1004:
    if (((param_4 != (longlong *)0x0) && (iVar3 = FUN_144ba03a0(param_4), iVar3 != 0)) &&
       (iVar3 = FUN_144ba0350(param_4), iVar3 == 0)) {
      FUN_144ba0cd0(*(undefined8 *)(piVar1 + 2));
      *(longlong **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar7 = 0x1d9;
    uVar5 = 0x65;
    break;
  case 0x1005:
  case 0x1008:
    if ((piVar1[7] - 4U & 0xfffffffd) == 0) {
      if (param_2 == 0x1008) {
        lVar4 = *(longlong *)(piVar1 + 10);
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(piVar1 + 8);
        }
        *param_4 = lVar4;
        return 1;
      }
      if (piVar1[0xd] != -1) {
        iVar3 = FUN_144ba3cb0(*(undefined8 *)(piVar1 + 10));
        iVar2 = FUN_144ba3cb0(param_4);
        if (iVar3 == iVar2) {
          return 1;
        }
        FUN_144ba24f0(4,0x8f,0x98,"crypto\\rsa\\rsa_pmeth.c",0x214);
        return 0;
      }
      *(longlong **)(piVar1 + 10) = param_4;
      return 1;
    }
    uVar7 = 0x208;
    uVar5 = 0x9c;
    break;
  case 0x1006:
    *(int *)param_4 = piVar1[7];
    return 1;
  case 0x1009:
  case 0x100b:
    if (piVar1[7] == 4) {
      if (param_2 == 0x100b) {
        *param_4 = *(longlong *)(piVar1 + 8);
        return 1;
      }
LAB_14528cfa4:
      *(longlong **)(piVar1 + 8) = param_4;
      return 1;
    }
    uVar7 = 0x1eb;
    goto LAB_14528cf71;
  case 0x100a:
    if (piVar1[7] == 4) {
      FUN_144ea6530(*(undefined8 *)(piVar1 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x220);
      if ((param_4 != (longlong *)0x0) && (0 < param_3)) {
        *(longlong **)(piVar1 + 0x10) = param_4;
        *(longlong *)(piVar1 + 0x12) = (longlong)param_3;
        return 1;
      }
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      return 1;
    }
    uVar7 = 0x21d;
    goto LAB_14528cf71;
  case 0x100c:
    if (piVar1[7] == 4) {
      *param_4 = *(longlong *)(piVar1 + 0x10);
      return piVar1[0x12];
    }
    uVar7 = 0x22c;
LAB_14528cf71:
    uVar5 = 0x8d;
    break;
  case 0x100d:
    if (param_3 - 2U < 4) {
      piVar1[4] = param_3;
      return 1;
    }
    uVar7 = 0x1e2;
    uVar5 = 0xa5;
    break;
  default:
    goto LAB_14528cd20;
  }
LAB_14528cd16:
  FUN_144ba24f0(4,0x8f,uVar5,"crypto\\rsa\\rsa_pmeth.c",uVar7,uVar8);
LAB_14528cd20:
  return -2;
}



// FUNCTION 14528d140 FUN_14528d140 body=1417 status=ok
// SIG undefined FUN_14528d140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528d140(undefined8 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x14528d155;
  if (param_3 == (char *)0x0) {
    FUN_144ba24f0(4,0x90,0x93,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x251),0x14528d155);
  }
  else {
    iVar1 = strcmp(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&DAT_149bf1438)[lVar4]) {
          lVar4 = 0;
          goto LAB_14528d1f0;
        }
        lVar4 = lVar5;
      } while (lVar5 != 6);
      uVar7 = 1;
      goto LAB_14528d2d9;
    }
    iVar1 = strcmp(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != "digest"[lVar4]) {
          lVar4 = 0;
          goto LAB_14528d390;
        }
        lVar4 = lVar5;
      } while (lVar5 != 7);
      iVar1 = -1;
      goto LAB_14528d3d4;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      iVar1 = atoi(param_3);
      uVar3 = FUN_144bada00(param_1,4,0x1003,iVar1,0);
      return uVar3;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_res18[0] = 0;
      iVar1 = FUN_14526bce0(local_res18,param_3);
      if (iVar1 != 0) {
        uVar2 = FUN_144bada00(param_1,4,0x1004,0,local_res18[0]);
        if ((int)uVar2 < 1) {
          FUN_144ba0cd0(local_res18[0]);
        }
        return (ulonglong)uVar2;
      }
    }
    else {
      iVar1 = strcmp(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar3 = FUN_144bada00(param_1,4,0x100d,iVar1,0);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        uVar3 = FUN_144ed1900(param_1,0x3f8,0x1005,param_3);
        return uVar3;
      }
      if (*(int *)*param_1 == 0x390) {
        iVar1 = strcmp(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          uVar3 = FUN_144ed1900(param_1,4,0x1005,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          uVar3 = FUN_144ed1900(param_1,4,1,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          iVar1 = atoi(param_3);
          uVar3 = FUN_144ed1710(param_1,0x390,4,0x1002,CONCAT44(uVar6,iVar1),0);
          return uVar3;
        }
      }
      iVar1 = strcmp(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        uVar3 = FUN_144ed1900(param_1,0x300,0x1009,param_3);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_oaep_label");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      lVar4 = FUN_144ea6a80(param_3,local_res18);
      if (lVar4 != 0) {
        uVar2 = FUN_144ed1710(param_1,6,0x300,0x100a,CONCAT44(uVar6,(undefined4)local_res18[0]),
                              lVar4);
        if ((int)uVar2 < 1) {
          FUN_144ea6530(lVar4,"crypto\\rsa\\rsa_pmeth.c",0x2b6);
        }
        return (ulonglong)uVar2;
      }
    }
  }
  return 0;
  while (lVar4 = lVar5, lVar5 != 7) {
LAB_14528d1f0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_149d0b43c)[lVar4]) {
      lVar4 = 0;
      goto LAB_14528d220;
    }
  }
  uVar7 = 2;
  goto LAB_14528d2d9;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14528d220:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_149e62dd2)[lVar4]) {
      lVar4 = 0;
      goto LAB_14528d250;
    }
  }
  uVar7 = 3;
  goto LAB_14528d2d9;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14528d250:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_149d0b444)[lVar4]) {
      lVar4 = 0;
      goto LAB_14528d273;
    }
  }
  uVar7 = 4;
  goto LAB_14528d2d9;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14528d273:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_149d0b44c)[lVar4]) {
      lVar4 = 0;
      goto LAB_14528d2a0;
    }
  }
  uVar7 = 4;
  goto LAB_14528d2d9;
  while (lVar4 = lVar5, lVar5 != 4) {
LAB_14528d390:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_14b3f1684)[lVar4]) {
      lVar4 = 0;
      goto LAB_14528d3b3;
    }
  }
  iVar1 = -3;
  goto LAB_14528d3d4;
  while (lVar4 = lVar5 + 1, lVar5 + 1 != 5) {
LAB_14528d3b3:
    lVar5 = lVar4;
    if (param_3[lVar5] != (&DAT_149d0972c)[lVar5]) {
      iVar1 = atoi(param_3);
      goto LAB_14528d3d4;
    }
  }
  iVar1 = (int)lVar5 + -6;
LAB_14528d3d4:
  uVar3 = FUN_144bada00(param_1,0x18,0x1002,iVar1,0);
  return uVar3;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14528d2a0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_149d0b454)[lVar4]) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&DAT_149bf4190)[lVar4]) {
          FUN_144ba24f0(4,0x90,0x76,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x266),uVar7);
          return 0xfffffffe;
        }
        lVar4 = lVar5;
      } while (lVar5 != 4);
      uVar7 = 6;
      goto LAB_14528d2d9;
    }
  }
  uVar7 = 5;
LAB_14528d2d9:
  uVar3 = FUN_144bada00(param_1,0xffffffff,0x1001,uVar7,0);
  return uVar3;
}



// FUNCTION 14528d6d0 FUN_14528d6d0 body=354 status=ok
// SIG undefined FUN_14528d6d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14528d6d0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14528d6e0;
  puVar1 = (undefined4 *)param_1[5];
  if (*(longlong *)(puVar1 + 2) == 0) {
    lVar3 = FUN_144ba0570();
    *(longlong *)(puVar1 + 2) = lVar3;
    if ((lVar3 == 0) || (iVar2 = FUN_144ba0bb0(lVar3,0x10001), iVar2 == 0)) {
      return 0;
    }
  }
  lVar3 = FUN_144bad5b0();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  if (param_1[7] != 0) {
    uVar4 = FUN_144ba0270();
    if (uVar4 == 0) {
      FUN_144bad8c0(lVar3);
      return 0;
    }
    FUN_145282e70(uVar4,param_1);
  }
  iVar2 = FUN_144badaa0(lVar3,*puVar1,puVar1[4],*(undefined8 *)(puVar1 + 2),uVar4,uVar6);
  FUN_144ba02c0(uVar4);
  if (iVar2 < 1) {
    FUN_144bad8c0(lVar3);
  }
  else {
    lVar5 = param_1[5];
    if ((*(int *)*param_1 == 0x390) &&
       (((*(longlong *)(lVar5 + 0x20) != 0 || (*(longlong *)(lVar5 + 0x28) != 0)) ||
        (*(int *)(lVar5 + 0x30) != -2)))) {
      uVar4 = (ulonglong)*(uint *)(lVar5 + 0x30);
      if (*(uint *)(lVar5 + 0x30) == 0xfffffffe) {
        uVar4 = 0;
      }
      lVar5 = FUN_145296780(*(longlong *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),uVar4);
      *(longlong *)(lVar3 + 0x60) = lVar5;
      if (lVar5 == 0) {
        FUN_144bad8c0(lVar3);
        return 0;
      }
    }
    FUN_144ba69a0(param_2,*(undefined4 *)*param_1,lVar3);
  }
  return iVar2;
}



// FUNCTION 14528d840 FUN_14528d840 body=249 status=ok
// SIG undefined FUN_14528d840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528d840(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = param_1[5];
  if (*(int *)*param_1 != 0x390) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1[2] + 0x28);
  if (*(longlong *)(lVar2 + 0x60) == 0) {
    return 1;
  }
  iVar4 = FUN_145296830(*(longlong *)(lVar2 + 0x60),&local_res10,&local_res18,local_res8);
  if (iVar4 != 0) {
    iVar5 = FUN_144ba3cd0(local_res10);
    iVar6 = FUN_144bae400(lVar2);
    bVar3 = FUN_144bae3e0(lVar2);
    iVar4 = (iVar6 - iVar5) + -1;
    if ((bVar3 & 7) != 1) {
      iVar4 = iVar6 - iVar5;
    }
    if (local_res8[0] <= iVar4) {
      *(int *)(lVar1 + 0x34) = local_res8[0];
      *(undefined8 *)(lVar1 + 0x20) = local_res10;
      *(undefined8 *)(lVar1 + 0x28) = local_res18;
      *(int *)(lVar1 + 0x30) = local_res8[0];
      return 1;
    }
    FUN_144ba24f0(4,0xa5,0x96,"crypto\\rsa\\rsa_pmeth.c",0x335);
  }
  return 0;
}



// FUNCTION 14528d940 FUN_14528d940 body=125 status=ok
// SIG undefined FUN_14528d940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528d940(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_144ea6670(0x50,"crypto\\rsa\\rsa_pmeth.c",0x37);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0x800;
  puVar2[4] = 2;
  iVar1 = *(int *)*param_1;
  *(undefined8 *)(puVar2 + 0xc) = 0xfffffffffffffffe;
  uVar3 = 1;
  if (iVar1 == 0x390) {
    uVar3 = 6;
  }
  puVar2[7] = uVar3;
  param_1[5] = puVar2;
  param_1[8] = puVar2 + 5;
  *(undefined4 *)(param_1 + 9) = 2;
  return 1;
}



// FUNCTION 14528d9c0 FUN_14528d9c0 body=196 status=ok
// SIG undefined FUN_14528d9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528d9c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_14528d940();
  if (iVar3 == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  puVar2 = *(undefined4 **)(param_1 + 0x28);
  *puVar2 = *puVar1;
  if (*(longlong *)(puVar1 + 2) != 0) {
    lVar4 = FUN_144ba0e20();
    *(longlong *)(puVar2 + 2) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  puVar2[7] = puVar1[7];
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
  if (*(longlong *)(puVar1 + 0x10) != 0) {
    FUN_144ea6530(*(undefined8 *)(puVar2 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x5d);
    lVar4 = FUN_144ea6d10(*(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x12),
                          "crypto\\rsa\\rsa_pmeth.c",0x5e);
    *(longlong *)(puVar2 + 0x10) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
  }
  return 1;
}



// FUNCTION 14528da90 FUN_14528da90 body=109 status=ok
// SIG undefined FUN_14528da90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528da90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_144ba0cd0(*(undefined8 *)(lVar1 + 8));
    FUN_144ea6530(*(undefined8 *)(lVar1 + 0x38),"crypto\\rsa\\rsa_pmeth.c",0x76);
    FUN_144ea6530(*(undefined8 *)(lVar1 + 0x40),"crypto\\rsa\\rsa_pmeth.c",0x77);
    FUN_144ea6530(lVar1,"crypto\\rsa\\rsa_pmeth.c",0x78);
    return;
  }
  return;
}



// FUNCTION 14528db00 FUN_14528db00 body=609 status=ok
// SIG undefined FUN_14528db00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528db00(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar7 = 0x14528db1c;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    uVar6 = CONCAT44(uVar5,*(undefined4 *)(lVar1 + 0x1c));
LAB_14528dd30:
    uVar7 = FUN_144bae450((int)param_5,param_4,param_2,uVar2,uVar6,uVar7);
LAB_14528dd3b:
    if (-1 < (int)uVar7) {
      *param_3 = (longlong)(int)uVar7;
      uVar7 = 1;
    }
  }
  else {
    iVar4 = FUN_144ba3cd0();
    if (param_5 == (longlong)iVar4) {
      iVar4 = FUN_144ba3cb0(*(undefined8 *)(lVar1 + 0x20));
      if (iVar4 == 0x5f) {
        if (*(int *)(lVar1 + 0x1c) == 1) {
          uVar7 = FUN_1454e8c10(0,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar7 < 1) {
            return uVar7;
          }
          uVar7 = (ulonglong)local_res8[0];
          goto LAB_14528dd3b;
        }
      }
      else {
        iVar4 = *(int *)(lVar1 + 0x1c);
        if (iVar4 == 5) {
          iVar4 = FUN_144ba6830(*(undefined8 *)(param_1 + 0x10));
          if ((ulonglong)(longlong)iVar4 < param_5 + 1) {
            FUN_144ba24f0(4,0x8e,0x78,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar5,0x96));
            return 0xffffffff;
          }
          iVar4 = FUN_14528e0e0(lVar1,param_1);
          if (iVar4 == 0) {
            FUN_144ba24f0(4,0x8e,0x41,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar5,0x9a));
            return 0xffffffff;
          }
          memcpy(*(void **)(lVar1 + 0x38),param_4,param_5);
          uVar5 = FUN_144ba3cb0(*(undefined8 *)(lVar1 + 0x20));
          uVar3 = FUN_1452aa570(uVar5);
          uVar6 = 5;
          *(undefined1 *)(param_5 + *(longlong *)(lVar1 + 0x38)) = uVar3;
          param_5._0_4_ = (int)param_5 + 1;
          param_4 = *(void **)(lVar1 + 0x38);
          goto LAB_14528dd30;
        }
        if (iVar4 == 1) {
          uVar5 = FUN_144ba3cb0(*(undefined8 *)(lVar1 + 0x20));
          uVar7 = FUN_144bae790(uVar5,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar7 < 1) {
            return uVar7;
          }
          uVar7 = (ulonglong)local_res8[0];
          goto LAB_14528dd3b;
        }
        if ((iVar4 == 6) && (iVar4 = FUN_14528e0e0(lVar1,param_1), iVar4 != 0)) {
          uVar7 = (ulonglong)*(uint *)(lVar1 + 0x30);
          iVar4 = FUN_1454e9160(uVar2,*(undefined8 *)(lVar1 + 0x38),param_4,
                                *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),uVar7);
          if (iVar4 != 0) {
            param_5._0_4_ = FUN_144bae400(uVar2);
            param_4 = *(void **)(lVar1 + 0x38);
            uVar6 = 3;
            goto LAB_14528dd30;
          }
        }
      }
    }
    else {
      FUN_144ba24f0(4,0x8e,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar5,0x86));
    }
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 14528dd70 FUN_14528dd70 body=441 status=ok
// SIG undefined FUN_14528dd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14528dd70(longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(lVar1 + 0x1c);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    local_res8[0] =
         FUN_144bae470((undefined4)param_5,param_4,param_2,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),CONCAT44(uVar6,iVar2));
LAB_14528df03:
    if (-1 < local_res8[0]) {
      *param_3 = (longlong)local_res8[0];
      return 1;
    }
    return local_res8[0];
  }
  if (iVar2 == 5) {
    iVar2 = FUN_14528e0e0(lVar1,param_1);
    if (iVar2 != 0) {
      uVar7 = CONCAT44(uVar6,5);
      iVar2 = FUN_144bae470((undefined4)param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),uVar7);
      uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (0 < iVar2) {
        iVar2 = iVar2 + -1;
        uVar3 = FUN_144ba3cb0(*(undefined8 *)(lVar1 + 0x20));
        uVar4 = FUN_1452aa570(uVar3);
        if (*(byte *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2) == uVar4) {
          iVar5 = FUN_144ba3cd0(*(undefined8 *)(lVar1 + 0x20));
          if (iVar2 != iVar5) {
            FUN_144ba24f0(4,0x8d,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd7));
            return 0;
          }
          local_res8[0] = iVar2;
          if (param_2 != (void *)0x0) {
            memcpy(param_2,*(void **)(lVar1 + 0x38),(longlong)iVar2);
          }
          goto LAB_14528df03;
        }
        FUN_144ba24f0(4,0x8d,100,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd2));
      }
      return 0;
    }
  }
  else if (iVar2 == 1) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar6 = FUN_144ba3cb0();
    iVar2 = FUN_144bae940(uVar6,0,0,param_2,local_res8,param_4,param_5,*(undefined8 *)(lVar1 + 0x28)
                         );
    if (iVar2 < 1) {
      return 0;
    }
    goto LAB_14528df03;
  }
  return -1;
}



// FUNCTION 14528df30 FUN_14528df30 body=421 status=ok
// SIG undefined FUN_14528df30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528df30(longlong param_1,undefined8 param_2,ulonglong param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  size_t local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar3 = 1;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    iVar4 = FUN_14528e0e0(lVar1,param_1);
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_144bae470(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2,
                          CONCAT44(uVar6,*(undefined4 *)(lVar1 + 0x1c)));
    local_res8 = (size_t)iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + 0x1c) == 1) {
      uVar3 = FUN_144ba3cb0();
      uVar5 = FUN_144bae8f0(uVar3,param_4,(undefined4)param_5,param_2,CONCAT44(uVar6,(int)param_3),
                            uVar2);
      return uVar5;
    }
    iVar4 = FUN_144ba3cd0();
    if (param_5 != (longlong)iVar4) {
      FUN_144ba24f0(4,0x95,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xfe));
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x1c) != 5) {
      if (*(int *)(lVar1 + 0x1c) != 6) {
        return 0xffffffff;
      }
      iVar4 = FUN_14528e0e0(lVar1,param_1);
      if (iVar4 != 0) {
        iVar4 = FUN_144bae470(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2,
                              CONCAT44(uVar6,3));
        if (iVar4 < 1) {
          return 0;
        }
        iVar4 = FUN_1454e8d50(uVar2,param_4,*(undefined8 *)(lVar1 + 0x20),
                              *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x38),
                              CONCAT44(uVar3,*(undefined4 *)(lVar1 + 0x30)));
        return (ulonglong)(0 < iVar4);
      }
      return 0xffffffff;
    }
    iVar4 = FUN_14528dd70(param_1,0,&local_res8,param_2,param_3);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((local_res8 == param_5) &&
     (iVar4 = memcmp(param_4,*(void **)(lVar1 + 0x38),local_res8), iVar4 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14528e0e0 FUN_14528e0e0 body=115 status=ok
// SIG undefined FUN_14528e0e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e0e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14528e0ec;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    iVar1 = FUN_144ba6830(*(undefined8 *)(param_2 + 0x10));
    lVar2 = FUN_144ea64e0((longlong)iVar1,"crypto\\rsa\\rsa_pmeth.c",0x6a);
    *(longlong *)(param_1 + 0x38) = lVar2;
    if (lVar2 == 0) {
      FUN_144ba24f0(4,0xa7,0x41,"crypto\\rsa\\rsa_pmeth.c",0x6b,uVar3);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14528e160 FUN_14528e160 body=226 status=ok
// SIG undefined FUN_14528e160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e160(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14528e16c;
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_144ba3cb0();
  if (param_2 == 3) {
    FUN_144ba24f0(4,0x8c,0x8d,"crypto\\rsa\\rsa_pmeth.c",0x168,uVar4);
    return 0;
  }
  if (param_2 == 5) {
    iVar1 = FUN_1452aa570();
    if (iVar1 != -1) {
      return 1;
    }
    uVar3 = 0x16e;
    uVar2 = 0x8e;
  }
  else {
    if ((iVar1 - 0x40U < 0x36) &&
       ((0x24000080000001U >> ((ulonglong)(iVar1 - 0x40U) & 0x3f) & 1) != 0)) {
      return 1;
    }
    if (iVar1 - 3U < 2) {
      return 1;
    }
    if (iVar1 == 0x101) {
      return 1;
    }
    if (iVar1 - 0x2a0U < 4) {
      return 1;
    }
    if (iVar1 - 0x448U < 4) {
      return 1;
    }
    uVar3 = 0x186;
    uVar2 = 0x9d;
  }
  FUN_144ba24f0(4,0x8c,uVar2,"crypto\\rsa\\rsa_pmeth.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 14528e250 FUN_14528e250 body=127 status=ok
// SIG undefined FUN_14528e250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e250(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528e25c;
  lVar1 = FUN_144ea6670(0x40,"crypto\\kdf\\scrypt.c",0x3c);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x34,0x6a,0x41,"crypto\\kdf\\scrypt.c",0x3e,uVar2);
    return 0;
  }
  *(undefined8 *)(lVar1 + 0x20) = 0x100000;
  *(undefined8 *)(lVar1 + 0x28) = 8;
  *(undefined8 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x38) = 0x40100000;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 14528e2d0 FUN_14528e2d0 body=94 status=ok
// SIG undefined FUN_14528e2d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528e2d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  FUN_144ea66f0(puVar1[2],puVar1[3],"crypto\\kdf\\scrypt.c",0x54);
  FUN_144ea66f0(*puVar1,puVar1[1],"crypto\\kdf\\scrypt.c",0x55);
  FUN_144ea6530(puVar1,"crypto\\kdf\\scrypt.c",0x56);
  return;
}



// FUNCTION 14528e330 FUN_14528e330 body=220 status=ok
// SIG undefined FUN_14528e330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e330(longlong param_1,undefined4 param_2,undefined4 param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  switch(param_2) {
  case 0x1008:
    uVar3 = FUN_14528e740(lVar1,lVar1 + 8,param_4,param_3);
    return uVar3;
  case 0x1009:
    uVar3 = FUN_14528e740(lVar1 + 0x10,lVar1 + 0x18,param_4,param_3);
    return uVar3;
  case 0x100a:
    uVar2 = *param_4;
    if ((1 < uVar2) && ((uVar2 & uVar2 - 1) == 0)) {
      *(ulonglong *)(lVar1 + 0x20) = uVar2;
      return 1;
    }
    break;
  case 0x100b:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x28) = *param_4;
      return 1;
    }
    break;
  case 0x100c:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x30) = *param_4;
      return 1;
    }
    break;
  case 0x100d:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x38) = *param_4;
      return 1;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0;
}



// FUNCTION 14528e430 FUN_14528e430 body=580 status=ok
// SIG undefined FUN_14528e430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e430(undefined8 param_1,char *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14528e440;
  if (param_3 == 0) {
    FUN_144ba24f0(0x34,0x68,0x66,"crypto\\kdf\\scrypt.c",0xb7,0x14528e440);
    return 0;
  }
  lVar2 = 0;
  lVar3 = lVar2;
  while (lVar4 = lVar3 + 1, lVar5 = lVar2, param_2[lVar3] == (&DAT_149d0b644)[lVar3]) {
    lVar3 = lVar4;
    if (lVar4 == 5) {
      uVar6 = FUN_144ed1830(param_1,0x1008,param_3);
      return uVar6;
    }
  }
  while (lVar4 = lVar5 + 1, lVar3 = lVar2, param_2[lVar5] == "hexpass"[lVar5]) {
    lVar5 = lVar4;
    if (lVar4 == 8) {
      uVar6 = FUN_144ed1870(param_1,0x1008,param_3);
      return uVar6;
    }
  }
  while (lVar5 = lVar3 + 1, param_2[lVar3] == (&DAT_149d0b658)[lVar3]) {
    lVar3 = lVar5;
    if (lVar5 == 5) {
      uVar6 = FUN_144ed1830(param_1,0x1009,param_3);
      return uVar6;
    }
  }
  while (lVar3 = lVar2 + 1, param_2[lVar2] == "hexsalt"[lVar2]) {
    lVar2 = lVar3;
    if (lVar3 == 8) {
      uVar6 = FUN_144ed1870(param_1,0x1009,param_3);
      return uVar6;
    }
  }
  if ((*param_2 == 'N') && (param_2[1] == '\0')) {
    uVar6 = FUN_14528e810(param_1,0x100a,param_3);
    return uVar6;
  }
  if ((*param_2 == 'r') && (param_2[1] == '\0')) {
    uVar6 = FUN_14528e810(param_1,0x100b,param_3);
    return uVar6;
  }
  if ((*param_2 == 'p') && (param_2[1] == '\0')) {
    uVar6 = FUN_14528e810(param_1,0x100c,param_3);
    return uVar6;
  }
  iVar1 = strcmp(param_2,"maxmem_bytes");
  if (iVar1 != 0) {
    FUN_144ba24f0(0x34,0x68,0x67,"crypto\\kdf\\scrypt.c",0xd4,uVar6);
    return 0xfffffffe;
  }
  uVar6 = FUN_14528e810(param_1,0x100d,param_3);
  return uVar6;
}



// FUNCTION 14528e680 FUN_14528e680 body=182 status=ok
// SIG undefined FUN_14528e680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e680(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_144ba24f0(0x34,0x6d,0x6e,"crypto\\kdf\\scrypt.c",0xde);
    return 0;
  }
  if (plVar1[2] == 0) {
    FUN_144ba24f0(0x34,0x6d,0x6f,"crypto\\kdf\\scrypt.c",0xe3);
    return 0;
  }
  uVar2 = FUN_1454e94d0(*plVar1,plVar1[1],plVar1[2],plVar1[3],plVar1[4],plVar1[5],plVar1[6],
                        plVar1[7],param_2,*param_3,0x14528e68a);
  return uVar2;
}



// FUNCTION 14528e740 FUN_14528e740 body=205 status=ok
// SIG undefined FUN_14528e740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e740(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528e75a;
  if (param_3 == 0) {
LAB_14528e7f3:
    uVar2 = 1;
  }
  else {
    if (-1 < param_4) {
      if (*param_1 != 0) {
        FUN_144ea66f0(*param_1,*param_2,"crypto\\kdf\\scrypt.c",100);
      }
      if (param_4 < 1) {
        lVar1 = FUN_144ea64e0(1,"crypto\\kdf\\scrypt.c");
      }
      else {
        lVar1 = FUN_144ea6d10(param_3,(longlong)param_4,"crypto\\kdf\\scrypt.c",0x67);
      }
      *param_1 = lVar1;
      if (lVar1 != 0) {
        *param_2 = (longlong)param_4;
        goto LAB_14528e7f3;
      }
      FUN_144ba24f0(0x34,0x6b,0x41,"crypto\\kdf\\scrypt.c",0x6c,uVar2);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14528e810 FUN_14528e810 body=183 status=ok
// SIG undefined FUN_14528e810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e810(undefined8 param_1,undefined4 param_2,char *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong local_res18 [2];
  
  cVar2 = *param_3;
  local_res18[0] = 0;
  while( true ) {
    if (cVar2 == '\0') {
      uVar3 = FUN_14528e330(param_1,param_2,0,local_res18);
      return uVar3;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) break;
    uVar1 = (ulonglong)((int)cVar2 - 0x30) + local_res18[0] * 10;
    if ((uVar1 < (int)cVar2 - 0x30) || ((local_res18[0] * 10) / 10 != local_res18[0])) break;
    cVar2 = param_3[1];
    param_3 = param_3 + 1;
    local_res18[0] = uVar1;
  }
  FUN_144ba24f0(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,0x14528e81c);
  return 0;
}



// FUNCTION 14528e8d0 FUN_14528e8d0 body=97 status=ok
// SIG undefined FUN_14528e8d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e8d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528e8dc;
  lVar1 = FUN_144ea6670(0x420,"crypto\\kdf\\tls1_prf.c",0x28);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x34,0x6e,0x41,"crypto\\kdf\\tls1_prf.c",0x29,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 14528e940 FUN_14528e940 body=85 status=ok
// SIG undefined FUN_14528e940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528e940(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_144ea66f0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),"crypto\\kdf\\tls1_prf.c",
                0x34);
  FUN_14259f0c0(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x418));
  FUN_144ea6530(lVar1,"crypto\\kdf\\tls1_prf.c",0x36);
  return;
}



// FUNCTION 14528e9a0 FUN_14528e9a0 body=290 status=ok
// SIG undefined FUN_14528e9a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528e9a0(longlong param_1,int param_2,int param_3,void *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t _Size;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1000) {
    *puVar1 = param_4;
  }
  else {
    if (param_2 == 0x1001) {
      if (-1 < param_3) {
        if (puVar1[1] != 0) {
          FUN_144ea66f0(puVar1[1],puVar1[2],"crypto\\kdf\\tls1_prf.c",0x45);
        }
        FUN_14259f0c0(puVar1 + 3,puVar1[0x83]);
        puVar1[0x83] = 0;
        lVar2 = FUN_144ea6d10(param_4,_Size,"crypto\\kdf\\tls1_prf.c",0x48);
        puVar1[1] = lVar2;
        if (lVar2 != 0) {
          puVar1[2] = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 != 0x1002) {
      return 0xfffffffe;
    }
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (0x400 - *(int *)(puVar1 + 0x83) < param_3) {
        return 0;
      }
      memcpy((void *)((longlong)puVar1 + puVar1[0x83] + 0x18),param_4,_Size);
      puVar1[0x83] = puVar1[0x83] + _Size;
    }
  }
  return 1;
}



// FUNCTION 14528ead0 FUN_14528ead0 body=447 status=ok
// SIG undefined FUN_14528ead0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528ead0(longlong param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14528eae5;
  if (param_3 == 0) {
    FUN_144ba24f0(0x34,100,0x66,"crypto\\kdf\\tls1_prf.c",0x61,0x14528eae5);
    return 0;
  }
  if (((*param_2 == 'm') && (param_2[1] == 'd')) && (param_2[2] == '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    lVar3 = FUN_144baab30(param_3);
    if (lVar3 == 0) {
      FUN_144ba24f0(0x34,100,100,"crypto\\kdf\\tls1_prf.c",0x69,uVar6);
      return 0;
    }
    *plVar1 = lVar3;
    return 1;
  }
  lVar5 = 0;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    if (param_2[lVar3] != "secret"[lVar3]) {
      iVar2 = strcmp(param_2,"hexsecret");
      lVar3 = lVar5;
      if (iVar2 == 0) {
        uVar6 = FUN_144ed1870(param_1,0x1001,param_3);
        return uVar6;
      }
      do {
        lVar4 = lVar3 + 1;
        if (param_2[lVar3] != (&DAT_149bfdef4)[lVar3]) {
          do {
            lVar3 = lVar5 + 1;
            if (param_2[lVar5] != "hexseed"[lVar5]) {
              FUN_144ba24f0(0x34,100,0x67,"crypto\\kdf\\tls1_prf.c",0x78);
              return 0xfffffffe;
            }
            lVar5 = lVar3;
          } while (lVar3 != 8);
          uVar6 = FUN_144ed1870(param_1,0x1002,param_3);
          return uVar6;
        }
        lVar3 = lVar4;
      } while (lVar4 != 5);
      uVar6 = FUN_144ed1830(param_1,0x1002,param_3);
      return uVar6;
    }
    lVar3 = lVar4;
  } while (lVar4 != 7);
  uVar6 = FUN_144ed1830(param_1,0x1001);
  return uVar6;
}



// FUNCTION 14528ec90 FUN_14528ec90 body=205 status=ok
// SIG undefined FUN_14528ec90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528ec90(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_144ba24f0(0x34,0x65,0x69,"crypto\\kdf\\tls1_prf.c",0x81);
    return 0;
  }
  if (plVar1[1] == 0) {
    FUN_144ba24f0(0x34,0x65,0x6b,"crypto\\kdf\\tls1_prf.c",0x85);
    return 0;
  }
  if (plVar1[0x83] == 0) {
    FUN_144ba24f0(0x34,0x65,0x6a,"crypto\\kdf\\tls1_prf.c",0x89);
    return 0;
  }
  uVar2 = FUN_14528ed60(*plVar1,plVar1[1],plVar1[2],plVar1 + 3,plVar1[0x83],param_2,*param_3);
  return uVar2;
}



// FUNCTION 14528ed60 FUN_14528ed60 body=591 status=ok
// SIG undefined FUN_14528ed60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14528ed60(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 param_5,ulonglong *param_6,ulonglong param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  iVar3 = FUN_144ba3cb0();
  if (iVar3 != 0x72) {
    iVar3 = FUN_14528efb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return (ulonglong)(iVar3 != 0);
  }
  lVar10 = (ulonglong)((uint)param_3 & 1) + (param_3 >> 1);
  uVar4 = FUN_144e98ef0();
  uVar6 = param_5;
  uVar5 = FUN_14528efb0(uVar4,param_2,lVar10,param_4,param_5,param_6,param_7);
  uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar5 != 0) {
    uVar5 = FUN_144ea64e0(param_7,"crypto\\kdf\\tls1_prf.c",0x104);
    if (uVar5 == 0) {
      FUN_144ba24f0(0x34,0x6f,0x41,"crypto\\kdf\\tls1_prf.c",CONCAT44(uVar11,0x105));
    }
    else {
      uVar6 = FUN_144bab020();
      iVar3 = FUN_14528efb0(uVar6,(param_3 >> 1) + param_2,lVar10,param_4,param_5,uVar5,param_7);
      if (iVar3 != 0) {
        uVar9 = 0;
        if (param_7 != 0) {
          if ((0x1f < param_7) &&
             (((ulonglong *)((param_7 - 1) + uVar5) < param_6 ||
              ((longlong)param_6 + (param_7 - 1) < uVar5)))) {
            puVar7 = param_6;
            do {
              uVar9 = uVar9 + 0x20;
              puVar1 = (ulonglong *)((uVar5 - (longlong)param_6) + (longlong)puVar7);
              uVar2 = puVar1[1];
              *puVar7 = *puVar1 ^ *puVar7;
              puVar7[1] = uVar2 ^ puVar7[1];
              puVar1 = (ulonglong *)((uVar5 - (longlong)param_6) + -0x10 + (longlong)(puVar7 + 4));
              uVar2 = puVar1[1];
              puVar7[2] = *puVar1 ^ puVar7[2];
              puVar7[3] = uVar2 ^ puVar7[3];
              puVar7 = puVar7 + 4;
            } while (uVar9 < (param_7 & 0xffffffffffffffe0));
          }
          if (uVar9 < param_7) {
            pbVar8 = (byte *)(uVar9 + (longlong)param_6);
            lVar10 = param_7 - uVar9;
            do {
              *pbVar8 = *pbVar8 ^ pbVar8[uVar5 - (longlong)param_6];
              pbVar8 = pbVar8 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        FUN_144ea66f0(uVar5,param_7,"crypto\\kdf\\tls1_prf.c",0x10f);
        return 1;
      }
      FUN_144ea66f0(uVar5,param_7,"crypto\\kdf\\tls1_prf.c",0x10a);
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14528efb0 FUN_14528efb0 body=604 status=ok
// SIG undefined FUN_14528efb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,void *param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14528efc7;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b4 = FUN_144ba3cd0();
  lVar3 = lVar2;
  lVar4 = lVar2;
  if (0 < local_b4) {
    lVar2 = FUN_144ba5700();
    lVar3 = FUN_144ba5700();
    lVar4 = FUN_144ba5700();
    if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
      FUN_144ba3ec0(lVar4,8);
      local_a8 = FUN_144ba7260(0x357,0,param_2,param_3);
      if (((((local_a8 != 0) &&
            (local_c8 = local_a8, iVar1 = FUN_144ba6150(lVar4,0,param_1,0), iVar1 != 0)) &&
           ((iVar1 = FUN_144ba5840(lVar2,lVar4), iVar1 != 0 &&
            ((param_4 == 0 || (iVar1 = FUN_144ba5c70(lVar2,param_4,param_5), iVar1 != 0)))))) &&
          (iVar1 = FUN_144ba6180(lVar2,local_98,&local_b0), iVar1 != 0)) &&
         (iVar1 = FUN_144ba5840(lVar2,lVar4), iVar1 != 0)) {
        while( true ) {
          iVar1 = FUN_144ba5c70(lVar2,local_98,local_b0);
          if (((iVar1 == 0) ||
              ((uVar5 = (ulonglong)local_b4, uVar5 < param_7 &&
               (iVar1 = FUN_144ba5840(lVar3,lVar2), iVar1 == 0)))) ||
             ((param_4 != 0 && (iVar1 = FUN_144ba5c70(lVar2,param_4,param_5), iVar1 == 0))))
          goto LAB_14528f1c7;
          if (param_7 <= uVar5) break;
          iVar1 = FUN_144ba6180(lVar2,param_6,&local_a0);
          if (iVar1 == 0) goto LAB_14528f1c7;
          param_6 = (void *)((longlong)param_6 + local_a0);
          param_7 = param_7 - local_a0;
          iVar1 = FUN_144ba6180(lVar3,local_98,&local_b0);
          if ((iVar1 == 0) || (iVar1 = FUN_144ba5840(lVar2,lVar4), iVar1 == 0)) goto LAB_14528f1c7;
        }
        iVar1 = FUN_144ba6180(lVar2,local_98,&local_b0);
        if (iVar1 != 0) {
          memcpy(param_6,local_98,param_7);
          local_b8 = 1;
        }
      }
    }
  }
LAB_14528f1c7:
  FUN_144ba6e60(local_a8);
  FUN_144ba5800(lVar2);
  FUN_144ba5800(lVar3);
  FUN_144ba5800(lVar4);
  FUN_14259f0c0(local_98,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14528f220 FUN_14528f220 body=114 status=ok
// SIG undefined FUN_14528f220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528f220(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x28);
  FUN_144ea66f0(*(undefined8 *)((longlong)_Dst + 0x20),*(undefined8 *)((longlong)_Dst + 0x28),
                "crypto\\kdf\\hkdf.c",0xb6);
  FUN_144ea66f0(*(undefined8 *)((longlong)_Dst + 0x10),*(undefined8 *)((longlong)_Dst + 0x18),
                "crypto\\kdf\\hkdf.c",0xb7);
  FUN_14259f0c0((longlong)_Dst + 0x30);
  memset(_Dst,0,0x438);
  return 1;
}



// FUNCTION 14528f2a0 FUN_14528f2a0 body=356 status=ok
// SIG undefined FUN_14528f2a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14528f2a0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  lVar4 = *(longlong *)(piVar1 + 2);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x34,0x66,0x69,"crypto\\kdf\\hkdf.c",0xc4);
    return false;
  }
  lVar2 = *(longlong *)(piVar1 + 8);
  if (lVar2 != 0) {
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      lVar4 = FUN_14528f960(lVar4,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),lVar2,
                            *(undefined8 *)(piVar1 + 10),piVar1 + 0xc,
                            *(undefined8 *)(piVar1 + 0x10c),param_2,*param_3,0x14528f2b0);
    }
    else if (iVar3 == 1) {
      if (param_2 == 0) {
        iVar3 = FUN_144ba3cd0();
        *param_3 = (longlong)iVar3;
        return true;
      }
      lVar4 = FUN_14528fa30(lVar4,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),lVar2,
                            *(undefined8 *)(piVar1 + 10),param_2,param_3);
    }
    else {
      if (iVar3 != 2) {
        return false;
      }
      lVar4 = FUN_14528fa90(lVar4,lVar2,*(undefined8 *)(piVar1 + 10),piVar1 + 0xc,
                            *(undefined8 *)(piVar1 + 0x10c),param_2,*param_3);
    }
    return lVar4 != 0;
  }
  FUN_144ba24f0(0x34,0x66,0x68,"crypto\\kdf\\hkdf.c",200);
  return false;
}



// FUNCTION 14528f410 FUN_14528f410 body=97 status=ok
// SIG undefined FUN_14528f410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528f410(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528f41c;
  lVar1 = FUN_144ea6670(0x438,"crypto\\kdf\\hkdf.c",0x33);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x34,0x6c,0x41,"crypto\\kdf\\hkdf.c",0x34,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 14528f480 FUN_14528f480 body=111 status=ok
// SIG undefined FUN_14528f480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528f480(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_144ea66f0(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),"crypto\\kdf\\hkdf.c",
                0x40);
  FUN_144ea66f0(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),"crypto\\kdf\\hkdf.c",
                0x41);
  FUN_14259f0c0(lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x430));
  FUN_144ea6530(lVar1,"crypto\\kdf\\hkdf.c",0x43);
  return;
}



// FUNCTION 14528f4f0 FUN_14528f4f0 body=390 status=ok
// SIG undefined FUN_14528f4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528f4f0(longlong param_1,int param_2,int param_3,void *param_4)

{
  int *piVar1;
  longlong lVar2;
  size_t _Size;
  
  piVar1 = *(int **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1003) {
    if (param_4 == (void *)0x0) {
      return 0;
    }
    *(void **)(piVar1 + 2) = param_4;
  }
  else if (param_2 == 0x1004) {
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (*(longlong *)(piVar1 + 4) != 0) {
        FUN_144ea66f0(*(longlong *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),"crypto\\kdf\\hkdf.c",
                      0x5e);
      }
      lVar2 = FUN_144ea6d10(param_4,_Size,"crypto\\kdf\\hkdf.c",0x60);
      *(longlong *)(piVar1 + 4) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      *(size_t *)(piVar1 + 6) = _Size;
      return 1;
    }
  }
  else {
    if (param_2 == 0x1005) {
      if (-1 < param_3) {
        if (*(longlong *)(piVar1 + 8) != 0) {
          FUN_144ea66f0(*(longlong *)(piVar1 + 8),*(undefined8 *)(piVar1 + 10),"crypto\\kdf\\hkdf.c"
                        ,0x6c);
        }
        lVar2 = FUN_144ea6d10(param_4,_Size,"crypto\\kdf\\hkdf.c",0x6e);
        *(longlong *)(piVar1 + 8) = lVar2;
        if (lVar2 != 0) {
          *(size_t *)(piVar1 + 10) = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 == 0x1006) {
      if ((param_3 != 0) && (param_4 != (void *)0x0)) {
        if (param_3 < 0) {
          return 0;
        }
        if (0x400 - piVar1[0x10c] < param_3) {
          return 0;
        }
        memcpy((void *)((longlong)piVar1 + *(longlong *)(piVar1 + 0x10c) + 0x30),param_4,_Size);
        *(size_t *)(piVar1 + 0x10c) = *(longlong *)(piVar1 + 0x10c) + _Size;
      }
    }
    else {
      if (param_2 != 0x1007) {
        return 0xfffffffe;
      }
      *piVar1 = param_3;
    }
  }
  return 1;
}



// FUNCTION 14528f680 FUN_14528f680 body=726 status=ok
// SIG undefined FUN_14528f680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528f680(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = 0;
  lVar6 = lVar5;
  while (lVar7 = lVar6 + 1, param_2[lVar6] == (&DAT_14bd48798)[lVar6]) {
    lVar6 = lVar7;
    if (lVar7 == 5) {
      iVar1 = strcmp(param_3,"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = strcmp(param_3,"EXTRACT_ONLY");
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          iVar1 = strcmp(param_3,"EXPAND_ONLY");
          if (iVar1 != 0) {
            return 0;
          }
          uVar2 = 2;
        }
      }
      uVar3 = FUN_144ed1710(param_1,0xffffffff,0x400,0x1007,uVar2,0);
      return uVar3;
    }
  }
  lVar6 = lVar5;
  if (((*param_2 == 'm') && (param_2[1] == 'd')) && (param_2[2] == '\0')) {
    uVar3 = FUN_144ed1900(param_1,0x400,0x1003,param_3);
    return uVar3;
  }
  do {
    lVar4 = lVar6 + 1;
    lVar7 = lVar5;
    if (param_2[lVar6] != (&DAT_149d0b658)[lVar6]) {
      do {
        lVar4 = lVar7 + 1;
        lVar6 = lVar5;
        if (param_2[lVar7] != "hexsalt"[lVar7]) {
          do {
            lVar4 = lVar6 + 1;
            lVar7 = lVar5;
            if (param_2[lVar6] != (&DAT_14b474526)[lVar6]) {
              do {
                lVar4 = lVar7 + 1;
                lVar6 = lVar5;
                if (param_2[lVar7] != (&DAT_149d0a0a0)[lVar7]) {
                  do {
                    lVar7 = lVar6 + 1;
                    if (param_2[lVar6] != (&DAT_14a184c9c)[lVar6]) {
                      do {
                        lVar6 = lVar5 + 1;
                        if (param_2[lVar5] != "hexinfo"[lVar5]) {
                          FUN_144ba24f0(0x34,0x67,0x67,"crypto\\kdf\\hkdf.c",0xae,0x14528f695);
                          return 0xfffffffe;
                        }
                        lVar5 = lVar6;
                      } while (lVar6 != 8);
                      uVar3 = FUN_144ed1870(param_1,0x1006,param_3);
                      return uVar3;
                    }
                    lVar6 = lVar7;
                  } while (lVar7 != 5);
                  uVar3 = FUN_144ed1830(param_1,0x1006,param_3);
                  return uVar3;
                }
                lVar7 = lVar4;
              } while (lVar4 != 7);
              uVar3 = FUN_144ed1870(param_1,0x1005,param_3);
              return uVar3;
            }
            lVar6 = lVar4;
          } while (lVar4 != 4);
          uVar3 = FUN_144ed1830(param_1,0x1005,param_3);
          return uVar3;
        }
        lVar7 = lVar4;
      } while (lVar4 != 8);
      uVar3 = FUN_144ed1870(param_1,0x1004,param_3);
      return uVar3;
    }
    lVar6 = lVar4;
  } while (lVar4 != 5);
  uVar3 = FUN_144ed1830(param_1,0x1004,param_3);
  return uVar3;
}



// FUNCTION 14528f960 FUN_14528f960 body=189 status=ok
// SIG undefined FUN_14528f960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528f960(undefined8 param_1)

{
  longlong lVar1;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined4 *in_stack_00000048;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 *local_88;
  undefined4 local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14528f96e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = local_78;
  local_90 = local_68;
  local_98 = in_stack_00000028;
  lVar1 = FUN_14527fc10(param_1);
  if (lVar1 != 0) {
    local_88 = in_stack_00000048;
    local_90 = in_stack_00000040;
    local_98 = in_stack_00000038;
    FUN_14528fa90(param_1,local_68,local_78[0],in_stack_00000030);
    FUN_14259f0c0(local_68,0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14528fa30 FUN_14528fa30 body=91 status=ok
// SIG undefined FUN_14528fa30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528fa30(void)

{
  longlong lVar1;
  undefined8 in_stack_00000030;
  ulonglong *in_stack_00000038;
  undefined4 local_18;
  
  lVar1 = FUN_14527fc10();
  if (lVar1 == 0) {
    return 0;
  }
  *in_stack_00000038 = (ulonglong)local_18;
  return in_stack_00000030;
}



// FUNCTION 14528fa90 FUN_14528fa90 body=457 status=ok
// SIG undefined FUN_14528fa90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528fa90(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t _Size;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  iVar1 = FUN_144ba3cd0();
  uVar6 = (ulonglong)iVar1;
  uVar5 = param_7 / uVar6 + 1;
  if (param_7 % uVar6 == 0) {
    uVar5 = param_7 / uVar6;
  }
  local_a8 = uVar5;
  if (((uVar5 < 0x100) && (param_6 != 0)) && (lVar2 = FUN_14527f710(), lVar2 != 0)) {
    local_d8 = 0;
    iVar1 = FUN_14527f850(lVar2,local_b8,local_c0 & 0xffffffff,param_1);
    if ((iVar1 != 0) && (uVar4 = 1, uVar5 != 0)) {
      do {
        local_c8[0] = (undefined1)uVar4;
        if (1 < (uint)uVar4) {
          local_d8 = 0;
          iVar1 = FUN_14527f850(lVar2,0,0,0);
          if ((iVar1 == 0) || (iVar1 = FUN_14527fb30(lVar2,local_98,uVar6), iVar1 == 0)) break;
        }
        iVar1 = FUN_14527fb30(lVar2,local_b0,param_5);
        if ((iVar1 == 0) ||
           ((iVar1 = FUN_14527fb30(lVar2,local_c8,1), iVar1 == 0 ||
            (iVar1 = FUN_14527fb60(lVar2,local_98,0), iVar1 == 0)))) break;
        _Size = param_7 - lVar3;
        if (uVar6 + lVar3 <= param_7) {
          _Size = uVar6;
        }
        memcpy((void *)(param_6 + lVar3),local_98,_Size);
        uVar4 = (ulonglong)((uint)uVar4 + 1);
        lVar3 = lVar3 + _Size;
        if (local_a8 < uVar4) break;
      } while( true );
    }
    FUN_14259f0c0(local_98,0x40);
    FUN_14527f7e0(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14528fc70 FUN_14528fc70 body=124 status=ok
// SIG undefined FUN_14528fc70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528fc70(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14528fc7c;
  lVar1 = FUN_144ea6670(0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x1f);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xf,0x7c,0x41,"crypto\\poly1305\\poly1305_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  FUN_144ed19b0(param_1,lVar1);
  FUN_144ed19a0(param_1,0,0);
  return 1;
}



// FUNCTION 14528fcf0 FUN_14528fcf0 body=107 status=ok
// SIG undefined FUN_14528fcf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14528fcf0(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144ed19c0();
  if (piVar1 != (int *)0x0) {
    FUN_144ea66f0(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,"crypto\\poly1305\\poly1305_pmeth.c"
                  ,0x2f);
    FUN_144ea66f0(piVar1,0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x30);
    FUN_144ed19b0(param_1,0);
  }
  return;
}



// FUNCTION 14528fd60 FUN_14528fd60 body=290 status=ok
// SIG undefined FUN_14528fd60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528fd60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = FUN_14528fc70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144ed19c0(param_2);
  lVar4 = FUN_144ed19c0(param_1);
  lVar5 = FUN_144f03e90(lVar3);
  if (lVar5 != 0) {
    iVar1 = FUN_144f03b30(lVar4,lVar3);
    if (iVar1 == 0) {
      FUN_14528fcf0(param_1);
      return 0;
    }
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar4 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
  *(undefined8 *)(lVar4 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar4 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar4 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar4 + 0x80) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x90);
  *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar4 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xa0);
  *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar4 + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar4 + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xc0);
  *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xd0);
  *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar3 + 200);
  *(undefined8 *)(lVar4 + 0xd0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar3 + 0xd8);
  *(undefined8 *)(lVar4 + 0xe0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xf0);
  *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar3 + 0xe8);
  *(undefined8 *)(lVar4 + 0xf0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x100);
  *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)(lVar3 + 0xf8);
  *(undefined8 *)(lVar4 + 0x100) = uVar2;
  *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(lVar3 + 0x108);
  return 1;
}



// FUNCTION 14528fe90 FUN_14528fe90 body=95 status=ok
// SIG undefined FUN_14528fe90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528fe90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ed19c0();
  lVar2 = FUN_144f03e90(uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_144ef2c10(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_144ba69a0(param_2,0x425,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 14528fef0 FUN_14528fef0 body=124 status=ok
// SIG undefined FUN_14528fef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528fef0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*piVar2 != 0x20) {
    return 0;
  }
  FUN_144ba3ec0(param_2,0x100);
  FUN_144ba3d30(param_2,FUN_145290110);
  FUN_1452682c0(lVar1 + 0x18,*(undefined8 *)(piVar2 + 2));
  return 1;
}



// FUNCTION 14528ff70 FUN_14528ff70 body=48 status=ok
// SIG undefined FUN_14528ff70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528ff70(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *param_3 = 0x10;
  if (param_2 != 0) {
    FUN_1452684b0(lVar1 + 0x18);
  }
  return 1;
}



// FUNCTION 14528ffa0 FUN_14528ffa0 body=209 status=ok
// SIG undefined FUN_14528ffa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528ffa0(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  local_18[1] = 0x14528ffc0;
  lVar3 = FUN_144ed19c0();
  if (param_2 != 1) {
    if (1 < param_2 - 6U) {
      return 0xfffffffe;
    }
    lVar1 = (longlong)param_3;
    if (param_2 != 6) {
      uVar4 = FUN_144ed19d0(param_1);
      param_4 = FUN_144ba6a00(uVar4,local_18);
      lVar1 = local_18[0];
    }
    local_18[0] = lVar1;
    if (((param_4 == 0) || (local_18[0] != 0x20)) ||
       (iVar2 = FUN_144ef2c50(lVar3,param_4,0x20), iVar2 == 0)) {
      return 0;
    }
    uVar4 = FUN_144f03e90(lVar3);
    FUN_1452682c0(lVar3 + 0x18,uVar4);
  }
  return 1;
}



// FUNCTION 145290080 FUN_145290080 body=141 status=ok
// SIG undefined FUN_145290080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290080(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    uVar1 = 0;
    if (*(char *)(param_2 + uVar3) != (&DAT_14b474526)[uVar3]) {
      do {
        uVar3 = uVar1;
        if (*(char *)(param_2 + uVar3) != (&DAT_149d0a0a0)[uVar3]) {
          return 0xfffffffe;
        }
        uVar1 = uVar3 + 1;
      } while (uVar3 + 1 != 7);
      uVar2 = FUN_144ed1870(param_1,uVar3 & 0xffffffff);
      return uVar2;
    }
    uVar3 = uVar4;
  } while (uVar4 != 4);
  uVar2 = FUN_144ed1830(param_1,6);
  return uVar2;
}



// FUNCTION 145290110 FUN_145290110 body=69 status=ok
// SIG undefined FUN_145290110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba3d40();
  lVar2 = FUN_144ed19c0(uVar1);
  FUN_1452683c0(lVar2 + 0x18,param_2,param_3);
  return 1;
}



// FUNCTION 145290160 FUN_145290160 body=122 status=ok
// SIG undefined FUN_145290160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290160(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14529016c;
  lVar1 = FUN_144ea6670(0x58,"crypto\\siphash\\siphash_pmeth.c",0x1f);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xf,0x7d,0x41,"crypto\\siphash\\siphash_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  FUN_144ed19b0(param_1,lVar1);
  FUN_144ed19a0(param_1,0,0);
  return 1;
}



// FUNCTION 1452901e0 FUN_1452901e0 body=106 status=ok
// SIG undefined FUN_1452901e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452901e0(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144ed19c0();
  if (piVar1 != (int *)0x0) {
    FUN_144ea66f0(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,"crypto\\siphash\\siphash_pmeth.c",
                  0x2f);
    FUN_144ea66f0(piVar1,0x58,"crypto\\siphash\\siphash_pmeth.c");
    FUN_144ed19b0(param_1,0);
  }
  return;
}



// FUNCTION 145290250 FUN_145290250 body=179 status=ok
// SIG undefined FUN_145290250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290250(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = FUN_145290160();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144ed19c0(param_2);
  lVar4 = FUN_144ed19c0(param_1);
  lVar5 = FUN_144f03e90(lVar3);
  if (lVar5 != 0) {
    iVar1 = FUN_144f03b30(lVar4,lVar3);
    if (iVar1 == 0) {
      FUN_1452901e0(param_1);
      return 0;
    }
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar4 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
  *(undefined8 *)(lVar4 + 0x50) = uVar2;
  return 1;
}



// FUNCTION 145290310 FUN_145290310 body=95 status=ok
// SIG undefined FUN_145290310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290310(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ed19c0();
  lVar2 = FUN_144f03e90(uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_144ef2c10(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_144ba69a0(param_2,0x426,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 145290370 FUN_145290370 body=155 status=ok
// SIG undefined FUN_145290370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290370(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  lVar1 = FUN_144ed19c0();
  uVar2 = FUN_144ed19d0(param_1);
  lVar3 = FUN_144ba6a50(uVar2,local_res18);
  if ((lVar3 != 0) && (local_res18[0] == 0x10)) {
    FUN_144ba3ec0(param_2,0x100);
    FUN_144ba3d30(param_2,FUN_145290690);
    uVar2 = FUN_1454e9f40(lVar1 + 0x18,lVar3,0,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145290410 FUN_145290410 body=102 status=ok
// SIG undefined FUN_145290410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290410(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_1454e9ee0(lVar1 + 0x18);
  *param_3 = uVar2;
  if (param_2 != 0) {
    uVar2 = FUN_1454ea2c0(lVar1 + 0x18,param_2,uVar2);
    return uVar2;
  }
  return 1;
}



// FUNCTION 145290480 FUN_145290480 body=240 status=ok
// SIG undefined FUN_145290480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290480(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  local_18[1] = 0x1452904a0;
  lVar3 = FUN_144ed19c0();
  if (param_2 == 1) {
    return 1;
  }
  if (5 < param_2) {
    if (param_2 < 8) {
      lVar1 = (longlong)param_3;
      if (param_2 != 6) {
        uVar4 = FUN_144ed19d0(param_1);
        param_4 = FUN_144ba6a50(uVar4,local_18);
        lVar1 = local_18[0];
      }
      local_18[0] = lVar1;
      if (((param_4 != 0) && (local_18[0] == 0x10)) &&
         (iVar2 = FUN_144ef2c50(lVar3,param_4,0x10), iVar2 != 0)) {
        uVar4 = FUN_144f03e90(lVar3);
        uVar4 = FUN_1454e9f40(lVar3 + 0x18,uVar4,0,0);
        return uVar4;
      }
      return 0;
    }
    if (param_2 == 0xe) {
      uVar4 = FUN_1454e9ef0(lVar3 + 0x18,(longlong)param_3);
      return uVar4;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 145290570 FUN_145290570 body=277 status=ok
// SIG undefined FUN_145290570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290570(undefined8 param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  iVar2 = strcmp(param_2,"digestsize");
  if (iVar2 != 0) {
    lVar3 = 0;
    do {
      lVar6 = lVar3 + 1;
      uVar1 = 0;
      if (param_2[lVar3] != (&DAT_14b474526)[lVar3]) {
        do {
          uVar5 = uVar1;
          if (param_2[uVar5] != (&DAT_149d0a0a0)[uVar5]) {
            return 0xfffffffe;
          }
          uVar1 = uVar5 + 1;
        } while (uVar5 + 1 != 7);
        uVar4 = FUN_144ed1870(param_1,uVar5 & 0xffffffff,param_3);
        return uVar4;
      }
      lVar3 = lVar6;
    } while (lVar6 != 4);
    uVar4 = FUN_144ed1830(param_1,6,param_3);
    return uVar4;
  }
  iVar2 = atoi(param_3);
  lVar3 = FUN_144ed19c0(param_1);
  uVar4 = FUN_1454e9ef0(lVar3 + 0x18,(longlong)iVar2);
  return uVar4;
}



// FUNCTION 145290690 FUN_145290690 body=69 status=ok
// SIG undefined FUN_145290690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba3d40();
  lVar2 = FUN_144ed19c0(uVar1);
  FUN_1454ea090(lVar2 + 0x18,param_2,param_3);
  return 1;
}



// FUNCTION 1452906e0 FUN_1452906e0 body=155 status=ok
// SIG undefined FUN_1452906e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452906e0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_144e986c0(&DAT_14c797584,FUN_144ee3f00);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_14c797588;
  }
  if (iVar3 == 0) {
    FUN_144ba24f0(0x26,0xc3,0x41,"crypto\\engine\\eng_list.c",0xdc);
    return 0;
  }
  FUN_144e98620(DAT_14c797590);
  lVar1 = DAT_14c7fc588;
  if (DAT_14c7fc588 != 0) {
    *(int *)(DAT_14c7fc588 + 0x9c) = *(int *)(DAT_14c7fc588 + 0x9c) + 1;
  }
  FUN_144e98640(DAT_14c797590);
  return lVar1;
}



// FUNCTION 145290780 FUN_145290780 body=130 status=ok
// SIG undefined FUN_145290780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145290780(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    FUN_144ba24f0(0x26,0x73,0x43,"crypto\\engine\\eng_list.c",0x102,0x14529078c);
    return 0;
  }
  FUN_144e98620(DAT_14c797590);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  }
  FUN_144e98640(DAT_14c797590);
  FUN_144ee3a60(param_1);
  return lVar1;
}



// FUNCTION 145290810 FUN_145290810 body=185 status=ok
// SIG undefined FUN_145290810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145290810(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x145290820;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 299;
    uVar3 = 0x43;
  }
  else {
    if ((*param_1 != 0) && (param_1[1] != 0)) {
      FUN_144e98620(DAT_14c797590);
      iVar1 = FUN_145290db0(param_1);
      if (iVar1 == 0) {
        FUN_144ba24f0(0x26,0x69,0x6e,"crypto\\engine\\eng_list.c",0x134,uVar3);
      }
      FUN_144e98640(DAT_14c797590);
      return iVar1 != 0;
    }
    uVar2 = 0x12f;
    uVar3 = 0x6c;
  }
  FUN_144ba24f0(0x26,0x69,uVar3,"crypto\\engine\\eng_list.c",uVar2,0x145290820);
  return false;
}



// FUNCTION 1452908d0 FUN_1452908d0 body=628 status=ok
// SIG undefined FUN_1452908d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1452908d0(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  
  uVar11 = 0x1452908dc;
  if (param_1 == (char *)0x0) {
    FUN_144ba24f0(0x26,0x6a,0x43,"crypto\\engine\\eng_list.c",0x171,0x1452908dc);
    return (longlong *)0x0;
  }
  iVar3 = FUN_144e986c0(&DAT_14c797584,FUN_144ee3f00);
  plVar9 = (longlong *)0x0;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_14c797588;
  }
  if (iVar4 == 0) {
    FUN_144ba24f0(0x26,0x6a,0x41,"crypto\\engine\\eng_list.c",0x175,uVar11);
    return (longlong *)0x0;
  }
  FUN_144e98620(DAT_14c797590);
  for (plVar10 = DAT_14c7fc588; plVar8 = plVar10, plVar10 != (longlong *)0x0;
      plVar10 = (longlong *)plVar10[0x17]) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[*plVar10 - (longlong)param_1];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if ((*(byte *)(plVar10 + 0x13) & 4) == 0) {
        *(int *)((longlong)plVar10 + 0x9c) = *(int *)((longlong)plVar10 + 0x9c) + 1;
      }
      else {
        plVar6 = (longlong *)FUN_144ee39a0();
        plVar8 = plVar9;
        if (plVar6 != (longlong *)0x0) {
          FUN_145290fe0(plVar6,plVar10);
          plVar8 = plVar6;
        }
      }
      break;
    }
  }
  FUN_144e98640(DAT_14c797590);
  if (plVar8 != (longlong *)0x0) {
    return plVar8;
  }
  do {
    plVar10 = (longlong *)((longlong)plVar9 + 1);
    if (param_1[(longlong)plVar9] != (char)plVar9[0x2937fc46]) {
      pcVar7 = (char *)FUN_144ecf180("OPENSSL_ENGINES");
      pcVar5 = "C:\\Windows\\lib\\engines-1_1";
      if (pcVar7 != (char *)0x0) {
        pcVar5 = pcVar7;
      }
      plVar8 = (longlong *)FUN_1452908d0("dynamic");
      if ((((plVar8 != (longlong *)0x0) &&
           (iVar4 = FUN_1452a2ba0(plVar8,&DAT_149e3b9ad,param_1,0), iVar4 != 0)) &&
          (iVar4 = FUN_1452a2ba0(plVar8,"DIR_LOAD",&DAT_149e377d2,0), iVar4 != 0)) &&
         (((iVar4 = FUN_1452a2ba0(plVar8,"DIR_ADD",pcVar5,0), iVar4 != 0 &&
           (iVar4 = FUN_1452a2ba0(plVar8,"LIST_ADD",&DAT_149e377d0,0), iVar4 != 0)) &&
          (iVar4 = FUN_1452a2ba0(plVar8,&DAT_149bfe40c,0,0), iVar4 != 0)))) {
        return plVar8;
      }
      break;
    }
    plVar8 = (longlong *)0x0;
    plVar9 = plVar10;
  } while (plVar10 != (longlong *)&DAT_00000008);
  FUN_144ee3a60(plVar8);
  FUN_144ba24f0(0x26,0x6a,0x74,"crypto\\engine\\eng_list.c",0x1a5);
  FUN_144ba2bd0(2,&DAT_149d0bbbc,param_1);
  return (longlong *)0x0;
}



// FUNCTION 145290b50 FUN_145290b50 body=272 status=ok
// SIG undefined FUN_145290b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290b50(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (((param_1 == 0) || ((*(longlong *)(param_1 + 0xd0) == 0 && (param_2 == 0)))) ||
     ((param_3 != 0 && (iVar3 = FUN_144e98620(DAT_14c797590), iVar3 == 0)))) {
    return 0;
  }
  lVar2 = DAT_14c7fc598;
  lVar1 = DAT_14c7fc598;
  if (param_2 != 0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (*(longlong *)(lVar1 + 0xd0) == param_2) goto LAB_145290c39;
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) goto LAB_145290c39;
    *(longlong *)(param_1 + 0xd0) = param_2;
  }
  if (lVar2 == 0) {
    if (DAT_14c7fc5a0 != 0) goto LAB_145290c39;
    DAT_14c7fc598 = param_1;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    uVar4 = 0;
    if ((DAT_14c7fc5a0 == 0) || (*(longlong *)(DAT_14c7fc5a0 + 200) != 0)) goto LAB_145290c39;
    *(longlong *)(DAT_14c7fc5a0 + 200) = param_1;
    *(longlong *)(param_1 + 0xc0) = DAT_14c7fc5a0;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  uVar4 = 1;
  DAT_14c7fc5a0 = param_1;
LAB_145290c39:
  if (param_3 != 0) {
    FUN_144e98640(DAT_14c797590);
  }
  return uVar4;
}



// FUNCTION 145290c60 FUN_145290c60 body=203 status=ok
// SIG undefined FUN_145290c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145290c60(longlong param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) &&
     ((param_2 == 0 || (iVar1 = FUN_144e98620(DAT_14c797590), iVar1 != 0)))) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 200) = *(undefined8 *)(param_1 + 200);
    }
    if (DAT_14c7fc598 == param_1) {
      DAT_14c7fc598 = *(longlong *)(param_1 + 200);
    }
    if (DAT_14c7fc5a0 == param_1) {
      DAT_14c7fc5a0 = *(longlong *)(param_1 + 0xc0);
    }
    if (param_2 != 0) {
      FUN_144e98640(DAT_14c797590);
    }
  }
  return;
}



// FUNCTION 145290d30 FUN_145290d30 body=117 status=ok
// SIG undefined FUN_145290d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145290d30(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x145290d3c;
  lVar1 = DAT_14c7fc588;
  while (lVar1 != 0) {
    DAT_14c7fc588 = lVar1;
    FUN_144e98620(DAT_14c797590);
    iVar2 = FUN_145290f00(lVar1);
    if (iVar2 == 0) {
      FUN_144ba24f0(0x26,0x7b,0x6e,"crypto\\engine\\eng_list.c",0x145,uVar3);
    }
    FUN_144e98640(DAT_14c797590);
    lVar1 = DAT_14c7fc588;
  }
  DAT_14c7fc588 = lVar1;
  return;
}



// FUNCTION 145290db0 FUN_145290db0 body=335 status=ok
// SIG undefined FUN_145290db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290db0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  
  bVar6 = false;
  if (param_1 == (longlong *)0x0) {
    FUN_144ba24f0(0x26,0x78,0x43,"crypto\\engine\\eng_list.c",0x3c,0x145290dbc);
    return 0;
  }
  plVar5 = DAT_14c7fc588;
  if (DAT_14c7fc588 == (longlong *)0x0) {
    if (DAT_14c7fc590 != (longlong *)0x0) {
      uVar7 = 0x4b;
      goto LAB_145290ea2;
    }
    param_1[0x16] = 0;
    DAT_14c7fc588 = param_1;
    FUN_144ee3d40(FUN_145290d30);
  }
  else {
    do {
      if (bVar6) goto LAB_145290e69;
      pcVar3 = (char *)*plVar5;
      lVar4 = *param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      plVar5 = (longlong *)plVar5[0x17];
      bVar6 = cVar1 == cVar2;
    } while (plVar5 != (longlong *)0x0);
    if (bVar6) {
LAB_145290e69:
      FUN_144ba24f0(0x26,0x78,0x67,"crypto\\engine\\eng_list.c",0x45,0x145290dbc);
      return 0;
    }
    if ((DAT_14c7fc590 == (longlong *)0x0) || (*(longlong *)((longlong)DAT_14c7fc590 + 0xb8) != 0))
    {
      uVar7 = 0x57;
LAB_145290ea2:
      FUN_144ba24f0(0x26,0x78,0x6e,"crypto\\engine\\eng_list.c",uVar7,0x145290dbc);
      return 0;
    }
    *(longlong **)((longlong)DAT_14c7fc590 + 0xb8) = param_1;
    param_1[0x16] = (longlong)DAT_14c7fc590;
  }
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
  DAT_14c7fc590 = param_1;
  param_1[0x17] = 0;
  return 1;
}



// FUNCTION 145290f00 FUN_145290f00 body=222 status=ok
// SIG undefined FUN_145290f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145290f00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_14c7fc588;
  lVar1 = DAT_14c7fc588;
  if (param_1 == 0) {
    uVar4 = 0x6d;
    uVar3 = 0x43;
  }
  else {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (lVar1 == param_1) {
        if (lVar1 != 0) {
          if (*(longlong *)(param_1 + 0xb8) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
          }
          if (*(longlong *)(param_1 + 0xb0) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
          }
          if (lVar2 == param_1) {
            DAT_14c7fc588 = *(longlong *)(param_1 + 0xb8);
          }
          if (DAT_14c7fc590 == param_1) {
            DAT_14c7fc590 = *(longlong *)(param_1 + 0xb0);
          }
          FUN_144ee3e00(param_1,0);
          return 1;
        }
        break;
      }
    }
    uVar4 = 0x76;
    uVar3 = 0x69;
  }
  FUN_144ba24f0(0x26,0x79,uVar3,"crypto\\engine\\eng_list.c",uVar4);
  return 0;
}



// FUNCTION 145290fe0 FUN_145290fe0 body=276 status=ok
// SIG undefined FUN_145290fe0(void)

void FUN_145290fe0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  lVar1 = param_2[0x1a];
  param_1[0x1a] = lVar1;
  if (lVar1 != 0) {
    if (DAT_14c7fc598 == (undefined8 *)0x0) {
      if (DAT_14c7fc5a0 == (undefined8 *)0x0) {
        DAT_14c7fc598 = param_1;
        param_1[0x18] = 0;
        DAT_14c7fc5a0 = param_1;
        param_1[0x19] = 0;
        return;
      }
    }
    else if ((DAT_14c7fc5a0 != (undefined8 *)0x0) && (DAT_14c7fc5a0[0x19] == 0)) {
      DAT_14c7fc5a0[0x19] = param_1;
      param_1[0x18] = DAT_14c7fc5a0;
      param_1[0x19] = 0;
      DAT_14c7fc5a0 = param_1;
    }
  }
  return;
}



// FUNCTION 145291100 FUN_145291100 body=508 status=ok
// SIG undefined FUN_145291100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145291100(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             int param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x14529111e;
  uVar5 = 0;
  FUN_144e98620(DAT_14c797590);
  if (*param_1 == 0) {
    lVar2 = FUN_144ea8530(&LAB_1452914d0,&LAB_1452914e0);
    if (lVar2 == 0) goto LAB_145291275;
    *param_1 = lVar2;
    FUN_144ee3ca0(param_2);
  }
  while (param_5 != 0) {
    local_38[0] = *param_4;
    param_5 = param_5 + -1;
    puVar3 = (undefined4 *)FUN_144ea8820(*param_1,local_38);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_144ea64e0(0x20,"crypto\\engine\\eng_table.c",100);
      if (puVar3 == (undefined4 *)0x0) goto LAB_145291275;
      puVar3[6] = 1;
      *puVar3 = *param_4;
      lVar2 = FUN_144babca0();
      *(longlong *)(puVar3 + 2) = lVar2;
      if (lVar2 == 0) {
        FUN_144ea6530(puVar3,"crypto\\engine\\eng_table.c",0x6b);
        uVar5 = 0;
        goto LAB_145291275;
      }
      *(undefined8 *)(puVar3 + 4) = 0;
      FUN_144ea86c0(*param_1,puVar3);
      puVar4 = (undefined4 *)FUN_144ea8820(*param_1,local_38);
      if (puVar4 != puVar3) {
        FUN_144babdb0(*(undefined8 *)(puVar3 + 2));
        FUN_144ea6530(puVar3,"crypto\\engine\\eng_table.c",0x72);
        uVar5 = 0;
        goto LAB_145291275;
      }
    }
    FUN_144bac120(*(undefined8 *)(puVar3 + 2),param_3);
    iVar1 = FUN_144bac1c0(*(undefined8 *)(puVar3 + 2),param_3);
    if (iVar1 == 0) goto LAB_145291275;
    puVar3[6] = 0;
    if (param_6 != 0) {
      iVar1 = FUN_144ec6a20(param_3);
      if (iVar1 == 0) {
        FUN_144ba24f0(0x26,0xb8,0x6d,"crypto\\engine\\eng_table.c",0x82);
        goto LAB_145291275;
      }
      if (*(longlong *)(puVar3 + 4) != 0) {
        FUN_144ec6a70(*(longlong *)(puVar3 + 4),0);
      }
      *(undefined8 *)(puVar3 + 4) = param_3;
      puVar3[6] = 1;
    }
    param_4 = param_4 + 1;
  }
  uVar5 = 1;
LAB_145291275:
  FUN_144e98640(DAT_14c797590);
  return uVar5;
}



// FUNCTION 145291300 FUN_145291300 body=82 status=ok
// SIG undefined FUN_145291300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291300(longlong *param_1)

{
  FUN_144e98620(DAT_14c797590);
  if (*param_1 != 0) {
    FUN_144ea8870(*param_1,FUN_1452914f0);
    FUN_144ea8620(*param_1);
    *param_1 = 0;
  }
  FUN_144e98640(DAT_14c797590);
  return;
}



// FUNCTION 145291360 FUN_145291360 body=296 status=ok
// SIG undefined FUN_145291360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145291360(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28 [6];
  undefined8 uStack_10;
  
  uStack_10 = 0x145291375;
  lVar3 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  FUN_144ba3130();
  FUN_144e98620(DAT_14c797590);
  if ((*param_1 != 0) &&
     (local_28[0] = param_2, lVar2 = FUN_144ea8820(*param_1,local_28), lVar2 != 0)) {
    if (((*(longlong *)(lVar2 + 0x10) == 0) || (iVar1 = FUN_144ec6a20(), iVar1 == 0)) &&
       (*(int *)(lVar2 + 0x18) == 0)) {
      lVar3 = FUN_144babc00(*(undefined8 *)(lVar2 + 8),0);
      while (lVar3 != 0) {
        if (((0 < *(int *)(lVar3 + 0xa0)) || ((DAT_14c7fc5a8 & 1) == 0)) &&
           (iVar1 = FUN_144ec6a20(lVar3), iVar1 != 0)) {
          if ((*(longlong *)(lVar2 + 0x10) != lVar3) && (iVar1 = FUN_144ec6a20(lVar3), iVar1 != 0))
          {
            if (*(longlong *)(lVar2 + 0x10) != 0) {
              FUN_144ec6a70(*(longlong *)(lVar2 + 0x10),0);
            }
            *(longlong *)(lVar2 + 0x10) = lVar3;
          }
          break;
        }
        lVar3 = FUN_144babc00(*(undefined8 *)(lVar2 + 8));
      }
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x10);
    }
    *(undefined4 *)(lVar2 + 0x18) = 1;
  }
  FUN_144e98640(DAT_14c797590);
  FUN_144ba3170();
  return lVar3;
}



// FUNCTION 145291490 FUN_145291490 body=50 status=ok
// SIG undefined FUN_145291490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_1 != 0) {
    uStack_8 = 0x14529149f;
    local_18 = param_2;
    local_10 = param_3;
    FUN_144ea88e0(param_1,FUN_145291540,&local_18);
  }
  return;
}



// FUNCTION 1452914f0 FUN_1452914f0 body=74 status=ok
// SIG undefined FUN_1452914f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452914f0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144babdb0(*(undefined8 *)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_144ec6a70(*(longlong *)(param_1 + 0x10),0);
    }
    FUN_144ea6530(param_1,"crypto\\engine\\eng_table.c",0xb1);
  }
  return;
}



// FUNCTION 145291540 FUN_145291540 body=37 status=ok
// SIG undefined FUN_145291540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291540(undefined4 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145291562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),param_2[1])
  ;
  return;
}



// FUNCTION 145291580 FUN_145291580 body=30 status=ok
// SIG undefined FUN_145291580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291580(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba69f0();
  FUN_144ed4900(uVar1);
  return;
}



// FUNCTION 1452915a0 FUN_1452915a0 body=26 status=ok
// SIG undefined FUN_1452915a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452915a0(longlong param_1)

{
  FUN_144ed3d50(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1452915c0 FUN_1452915c0 body=353 status=ok
// SIG undefined FUN_1452915c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452915c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_10 = 0x1452915d5;
  lVar3 = 0;
  iVar1 = FUN_144bb6830(0,&local_10,local_res20,&local_20,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    FUN_144efded0(0,local_res18,&local_18,local_20);
    if (local_res18[0] == 0x10) {
      local_28 = *(undefined8 *)(local_18 + 2);
      if (*(undefined **)(param_1 + 0x10) == &DAT_149d0be30) {
        lVar2 = FUN_144ee74d0();
      }
      else {
        lVar2 = FUN_144ee7490(0,&local_28,*local_18);
      }
      if (lVar2 == 0) {
        uVar6 = CONCAT44(uVar5,0x47);
        uVar5 = 0x68;
      }
      else {
        lVar3 = FUN_144efe890(0,&local_10,local_res20[0]);
        if (lVar3 == 0) {
          uVar6 = CONCAT44(uVar5,0x4c);
          uVar5 = 0x68;
        }
        else {
          lVar4 = FUN_144ef1230(lVar3,0);
          *(longlong *)(lVar2 + 0x20) = lVar4;
          if (lVar4 != 0) {
            FUN_144efe870(lVar3);
            FUN_144ba69a0(param_1,**(undefined4 **)(param_1 + 0x10),lVar2);
            return 1;
          }
          uVar6 = CONCAT44(uVar5,0x52);
          uVar5 = 0x6d;
        }
      }
    }
    else {
      uVar6 = CONCAT44(uVar5,0x3e);
      uVar5 = 0x69;
      lVar2 = lVar3;
    }
    FUN_144ba24f0(5,0x6c,uVar5,"crypto\\dh\\dh_ameth.c",uVar6);
    FUN_144efe870(lVar3);
    FUN_144ed3d50(lVar2);
  }
  return 0;
}



// FUNCTION 145291730 FUN_145291730 body=313 status=ok
// SIG undefined FUN_145291730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291730(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x145291748;
  lVar3 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  piVar2 = (int *)FUN_144f03a20();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0x6e);
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &DAT_149d0be30) {
      iVar1 = FUN_144ee75f0();
    }
    else {
      iVar1 = FUN_144ee74b0(lVar3,piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0x73);
    }
    else {
      lVar3 = FUN_144ef1210(*(undefined8 *)(lVar3 + 0x20),0);
      if (lVar3 == 0) goto LAB_14529178b;
      iVar1 = FUN_144efe8b0(lVar3,&local_res10);
      FUN_144efe870(lVar3);
      if (0 < iVar1) {
        uVar6 = FUN_144ea8d60(**(undefined4 **)(param_2 + 0x10));
        iVar1 = FUN_144bb67b0(param_1,uVar6,0x10,piVar2,local_res10,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_14529178b;
      }
      uVar4 = CONCAT44(uVar5,0x81);
    }
  }
  FUN_144ba24f0(5,0x6d,0x41,"crypto\\dh\\dh_ameth.c",uVar4,uVar6);
LAB_14529178b:
  FUN_144ea6530(local_res10,"crypto\\dh\\dh_ameth.c",0x8a);
  FUN_144f03a80(piVar2);
  return 0;
}



// FUNCTION 145291870 FUN_145291870 body=357 status=ok
// SIG undefined FUN_145291870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291870(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined4 *local_10;
  undefined4 uVar7;
  
  local_10 = (undefined4 *)0x145291885;
  lVar2 = 0;
  iVar1 = FUN_144efe520(0,local_18,local_res20,&local_20,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_144efded0(0,local_res18,&local_10,local_20);
  lVar3 = lVar2;
  if ((local_res18[0] == 0x10) &&
     (lVar2 = FUN_144efe890(0,local_18,local_res20[0]), lVar3 = 0, lVar2 != 0)) {
    local_28 = *(undefined8 *)(local_10 + 2);
    if (*(undefined **)(param_1 + 0x10) == &DAT_149d0be30) {
      lVar3 = FUN_144ee74d0();
    }
    else {
      lVar3 = FUN_144ee7490(0,&local_28,*local_10);
    }
    if (lVar3 == 0) goto LAB_145291991;
    lVar4 = FUN_144ba05d0();
    *(longlong *)(lVar3 + 0x28) = lVar4;
    if ((lVar4 != 0) && (lVar4 = FUN_144ef1230(lVar2,lVar4), lVar4 != 0)) {
      iVar1 = FUN_1452998a0(lVar3);
      if (iVar1 != 0) {
        FUN_144ba69a0(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
        FUN_144f03af0(lVar2);
        return 1;
      }
      goto LAB_1452919b3;
    }
    uVar6 = CONCAT44(uVar7,0xb5);
    uVar5 = 0x6a;
  }
  else {
LAB_145291991:
    uVar6 = CONCAT44(uVar7,0xc3);
    uVar5 = 0x72;
  }
  FUN_144ba24f0(5,0x6e,uVar5,"crypto\\dh\\dh_ameth.c",uVar6);
LAB_1452919b3:
  FUN_144ed3d50(lVar3);
  FUN_144f03af0(lVar2);
  return 0;
}



// FUNCTION 1452919e0 FUN_1452919e0 body=342 status=ok
// SIG undefined FUN_1452919e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452919e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_res18[0] = 0;
  piVar2 = (int *)FUN_144f03a20();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0xd4);
LAB_145291a1a:
    uVar5 = 0x41;
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &DAT_149d0be30) {
      iVar1 = FUN_144ee75f0();
    }
    else {
      iVar1 = FUN_144ee74b0(*(undefined8 *)(param_2 + 0x28),piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0xda);
      goto LAB_145291a1a;
    }
    piVar2[1] = 0x10;
    lVar3 = FUN_144ef1210(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
    if (lVar3 != 0) {
      uVar5 = FUN_144efe8b0(lVar3,local_res18);
      FUN_144f03af0(lVar3);
      uVar4 = FUN_144ea8d60(**(undefined4 **)(param_2 + 0x10));
      iVar1 = FUN_144efe490(param_1,uVar4,0,0x10,piVar2,local_res18[0],uVar5);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_145291aed;
    }
    uVar4 = CONCAT44(uVar5,0xe3);
    uVar5 = 0x6a;
  }
  FUN_144ba24f0(5,0x6f,uVar5,"crypto\\dh\\dh_ameth.c",uVar4);
LAB_145291aed:
  FUN_144ea6530(local_res18[0],"crypto\\dh\\dh_ameth.c",0xf3);
  FUN_144f03a80(piVar2);
  FUN_144f03af0(0);
  return 0;
}



// FUNCTION 145291b40 FUN_145291b40 body=119 status=ok
// SIG undefined FUN_145291b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291b40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145291b4c;
  if (*(undefined **)(param_1 + 0x10) == &DAT_149d0be30) {
    lVar1 = FUN_144ee74d0(0);
  }
  else {
    lVar1 = FUN_144ee7490(0);
  }
  if (lVar1 == 0) {
    FUN_144ba24f0(5,0x6b,5,"crypto\\dh\\dh_ameth.c",0xff,uVar2);
    return 0;
  }
  FUN_144ba69a0(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}



// FUNCTION 145291bc0 FUN_145291bc0 body=51 status=ok
// SIG undefined FUN_145291bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291bc0(longlong param_1)

{
  if (*(undefined **)(param_1 + 0x10) == &DAT_149d0be30) {
    FUN_144ee75f0();
    return;
  }
  FUN_144ee74b0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145291c00 FUN_145291c00 body=26 status=ok
// SIG undefined FUN_145291c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291c00(longlong param_1)

{
  FUN_144ed3e50(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145291c20 FUN_145291c20 body=30 status=ok
// SIG undefined FUN_145291c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291c20(longlong param_1)

{
  FUN_144ba03d0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
  return;
}



// FUNCTION 145291c40 FUN_145291c40 body=26 status=ok
// SIG undefined FUN_145291c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291c40(longlong param_1)

{
  FUN_144ed3e80(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145291c60 FUN_145291c60 body=142 status=ok
// SIG undefined FUN_145291c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291c60(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if ((iVar1 != 0) ||
     (iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)), iVar1 != 0)) {
    return 0;
  }
  if ((*(undefined **)(param_1 + 0x10) == &DAT_149d0be30) &&
     (iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 145291cf0 FUN_145291cf0 body=98 status=ok
// SIG undefined FUN_145291cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291cf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = FUN_144ed3d30();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_145292310(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                *(undefined **)(param_2 + 0x10) == &DAT_149d0be30);
  return;
}



// FUNCTION 145291d80 FUN_145291d80 body=86 status=ok
// SIG undefined FUN_145291d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145291d80(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_145291c60();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20));
  return (ulonglong)(iVar1 == 0);
}



// FUNCTION 145291de0 FUN_145291de0 body=29 status=ok
// SIG undefined FUN_145291de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291de0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145291f60(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}



// FUNCTION 145291e00 FUN_145291e00 body=30 status=ok
// SIG undefined FUN_145291e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291e00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145291f60(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}



// FUNCTION 145291e20 FUN_145291e20 body=30 status=ok
// SIG undefined FUN_145291e20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291e20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145291f60(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}



// FUNCTION 145291e40 FUN_145291e40 body=78 status=ok
// SIG undefined FUN_145291e40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291e40(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 7) {
    if (param_3 == 1) {
      uVar1 = FUN_145292410(param_4);
      return uVar1;
    }
    if (param_3 == 0) {
      uVar1 = FUN_145292500(param_4);
      return uVar1;
    }
  }
  else if (param_2 == 8) {
    *param_4 = 1;
    return 1;
  }
  return 0xfffffffe;
}



// FUNCTION 145291e90 FUN_145291e90 body=72 status=ok
// SIG undefined FUN_145291e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291e90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) == 0) {
    FUN_144ba24f0(5,0x7c,0x7d,"crypto\\dh\\dh_ameth.c",0x205);
    return 0;
  }
  uVar1 = FUN_1454d5da0();
  return uVar1;
}



// FUNCTION 145291ee0 FUN_145291ee0 body=26 status=ok
// SIG undefined FUN_145291ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145291ee0(longlong param_1)

{
  FUN_1454d5c50(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145291f00 FUN_145291f00 body=89 status=ok
// SIG undefined FUN_145291f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145291f00(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ed3d30();
  if (lVar2 != 0) {
    iVar1 = FUN_145292310(lVar2,param_1,0xffffffff);
    if (iVar1 != 0) {
      return lVar2;
    }
    FUN_144ed3d50(lVar2);
  }
  return 0;
}



// FUNCTION 145291f60 FUN_145291f60 body=805 status=ok
// SIG undefined FUN_145291f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145291f60(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined4 uVar9;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 uVar10;
  
  uVar13 = 0x145291f7c;
  uVar6 = 0;
  uVar9 = 7;
  uVar10 = 7;
  if (param_4 == 2) {
    lVar8 = *(longlong *)(param_2 + 0x20);
    uVar12 = *(ulonglong *)(param_2 + 0x28);
  }
  else {
    uVar12 = 0;
    if (param_4 < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_2 + 0x20);
      uVar12 = uVar6;
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    if (param_4 != 2) {
      if (0 < param_4) {
LAB_14529200d:
        if (lVar8 == 0) goto LAB_145291fc5;
      }
      if (param_4 == 2) {
        pcVar11 = "DH Private-Key";
      }
      else {
        pcVar11 = "DH Public-Key";
        if (param_4 != 1) {
          pcVar11 = "DH Parameters";
        }
      }
      FUN_144b9edb0(param_1,param_3,0x80);
      uVar1 = FUN_144ba03d0(*(undefined8 *)(param_2 + 8));
      iVar2 = FUN_144ec7640(param_1,"%s: (%d bit)\n",pcVar11,uVar1);
      if (0 < iVar2) {
        iVar4 = param_3 + 4;
        iVar2 = FUN_1454dc320(param_1,"private-key:",uVar12,0,iVar4);
        if (((((iVar2 != 0) &&
              (iVar2 = FUN_1454dc320(param_1,"public-key:",lVar8,0,iVar4), iVar2 != 0)) &&
             (iVar2 = FUN_1454dc320(param_1,"prime:",*(undefined8 *)(param_2 + 8),0,iVar4),
             uVar9 = uVar10, iVar2 != 0)) &&
            (iVar2 = FUN_1454dc320(param_1,"generator:",*(undefined8 *)(param_2 + 0x10),0,iVar4),
            iVar2 != 0)) &&
           (((*(longlong *)(param_2 + 0x40) == 0 ||
             (iVar2 = FUN_1454dc320(param_1,"subgroup order:",*(longlong *)(param_2 + 0x40),0,iVar4)
             , iVar2 != 0)) &&
            ((*(longlong *)(param_2 + 0x48) == 0 ||
             (iVar2 = FUN_1454dc320(param_1,"subgroup factor:",*(longlong *)(param_2 + 0x48),0,iVar4
                                   ), iVar2 != 0)))))) {
          if (*(longlong *)(param_2 + 0x50) != 0) {
            FUN_144b9edb0(param_1,iVar4,0x80);
            FUN_144b9ebc0(param_1,"seed:");
            uVar12 = uVar6;
            if (0 < *(int *)(param_2 + 0x58)) {
              do {
                iVar2 = (int)uVar6;
                if ((iVar2 == (iVar2 / 0xf) * 0xf) &&
                   ((iVar3 = FUN_144b9ebc0(param_1,&DAT_149dfc0af), iVar3 < 1 ||
                    (iVar3 = FUN_144b9edb0(param_1,param_3 + 8,0x80), iVar3 == 0))))
                goto LAB_145291fcb;
                pwVar7 = L":Asset";
                uVar5 = iVar2 + 1;
                uVar6 = (ulonglong)uVar5;
                if (uVar5 == *(uint *)(param_2 + 0x58)) {
                  pwVar7 = L"";
                }
                iVar2 = FUN_144ec7640(param_1,"%02x%s",
                                      *(undefined1 *)(*(longlong *)(param_2 + 0x50) + uVar12),pwVar7
                                     );
                if (iVar2 < 1) goto LAB_145291fcb;
                uVar12 = uVar12 + 1;
              } while ((int)uVar5 < *(int *)(param_2 + 0x58));
            }
            iVar2 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
            if (iVar2 < 1) {
              return 0;
            }
          }
          if ((*(longlong *)(param_2 + 0x60) == 0) ||
             (iVar2 = FUN_1454dc320(param_1,"counter:",*(longlong *)(param_2 + 0x60),0,iVar4),
             iVar2 != 0)) {
            if (*(int *)(param_2 + 0x18) == 0) {
              return 1;
            }
            FUN_144b9edb0(param_1,iVar4,0x80);
            iVar2 = FUN_144ec7640(param_1,"recommended-private-length: %d bits\n",
                                  *(undefined4 *)(param_2 + 0x18));
            if (0 < iVar2) {
              return 1;
            }
          }
        }
      }
      goto LAB_145291fcb;
    }
    if (uVar12 != 0) goto LAB_14529200d;
  }
LAB_145291fc5:
  uVar9 = 0x43;
LAB_145291fcb:
  FUN_144ba24f0(5,100,uVar9,"crypto\\dh\\dh_ameth.c",0x157,uVar13);
  return 0;
}



// FUNCTION 145292290 FUN_145292290 body=118 status=ok
// SIG undefined FUN_145292290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145292290(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_144ba0230(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_144ba0230(param_2,1);
      if (iVar1 == 0) goto LAB_1452922ae;
    }
    param_2 = FUN_144ba0e20(param_2);
    if (param_2 == 0) {
      return 0;
    }
  }
LAB_1452922ae:
  FUN_144ba0630(*param_1);
  *param_1 = param_2;
  return 1;
}



// FUNCTION 145292310 FUN_145292310 body=255 status=ok
// SIG undefined FUN_145292310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145292310(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(longlong *)(param_2 + 0x40) != 0);
  }
  iVar1 = FUN_145292290(param_1 + 8,*(undefined8 *)(param_2 + 8));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_145292290(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      return 1;
    }
    iVar1 = FUN_145292290(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40));
    if ((iVar1 != 0) &&
       (iVar1 = FUN_145292290(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48)), iVar1 != 0)) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_ameth.c",0x197);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(longlong *)(param_2 + 0x50) != 0) {
        lVar2 = FUN_144ea6d10(*(longlong *)(param_2 + 0x50),(longlong)*(int *)(param_2 + 0x58),
                              "crypto\\dh\\dh_ameth.c",0x19b);
        *(longlong *)(param_1 + 0x50) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145292410 FUN_145292410 body=232 status=ok
// SIG undefined FUN_145292410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145292410(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  lVar5 = 0x145292420;
  lVar2 = FUN_1454ea540();
  if (lVar2 != 0) {
    lVar3 = FUN_144ed19e0(lVar2);
    if (lVar3 != 0) {
LAB_1452924ae:
      iVar1 = FUN_145292ad0(lVar2,param_1);
      if (iVar1 == 0) {
        FUN_144ba24f0(5,0x72,0x71,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar4,0x303),lVar5);
        return 0;
      }
      return 1;
    }
    lVar5 = lVar3;
    iVar1 = FUN_1454ead90(param_1,&local_res10,local_res18,0,0,0);
    uVar4 = (undefined4)((ulonglong)lVar3 >> 0x20);
    if (((iVar1 != 0) && (local_res10 != 0)) && (local_res18[0] != 0)) {
      iVar1 = FUN_145292910(lVar2);
      if (iVar1 != 0) goto LAB_1452924ae;
      FUN_144ba24f0(5,0x72,0x6f,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar4,0x2fd));
    }
  }
  return 0;
}



// FUNCTION 145292500 FUN_145292500 body=1035 status=ok
// SIG undefined FUN_145292500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_145292500(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  puVar12 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  iVar5 = 0;
  puVar15 = (undefined8 *)0x0;
  local_res10 = 0;
  puVar16 = (undefined8 *)0x0;
  lVar6 = FUN_1454ea540();
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  lVar7 = FUN_144ed19d0(lVar6);
  uVar3 = 0;
  iVar1 = FUN_1454ead90(param_1,&local_res18,&local_res20,0,0,0);
  puVar14 = puVar12;
  puVar11 = puVar12;
  puVar17 = puVar12;
  if (iVar1 == 0) goto LAB_1452928c4;
  FUN_144efded0(local_48,0,0,local_res18);
  lVar8 = FUN_144ea8d60(0);
  if (local_48[0] == lVar8) {
    lVar7 = FUN_144ef1210(*(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x20),0);
    if (lVar7 == 0) goto LAB_1452928c4;
    iVar1 = FUN_144efe8b0(lVar7,&local_res10);
    FUN_144efe870(lVar7);
    puVar11 = puVar15;
    puVar17 = puVar16;
    if (iVar1 < 1) goto LAB_1452928c4;
    FUN_144f03e20(local_res20,local_res10,iVar1);
    *(uint *)(local_res20 + 0x10) = *(uint *)(local_res20 + 0x10) & 0xfffffff0;
    *(uint *)(local_res20 + 0x10) = *(uint *)(local_res20 + 0x10) | 8;
    local_res10 = 0;
    uVar9 = FUN_144ea8d60(0x398);
    FUN_144efde30(local_res18,uVar9,0xffffffff,0);
  }
  uVar18 = CONCAT44(uVar3,0xfffffffe);
  iVar1 = FUN_144ed1710(lVar6,0x398,0x400,0x1006,uVar18,0);
  puVar11 = puVar15;
  puVar17 = puVar16;
  if (0 < iVar1) {
    uVar18 = uVar18 & 0xffffffff00000000;
    iVar2 = FUN_144ed1710(lVar6,0x398,0x400,0x1008,uVar18,&local_58);
    puVar14 = puVar13;
    if (iVar2 != 0) {
      if (iVar1 == 1) {
        uVar18 = CONCAT44((int)(uVar18 >> 0x20),2);
        iVar1 = FUN_144ed1710(lVar6,0x398,0x400,0x1006,uVar18,0);
        if (iVar1 < 1) goto LAB_1452928c4;
      }
      else if (iVar1 != 2) goto LAB_1452928c4;
      if (local_58 == 0) {
        local_58 = FUN_144bab020();
        uVar18 = uVar18 & 0xffffffff00000000;
        iVar1 = FUN_144ed1710(lVar6,0x398,0x400,0x1007,uVar18,local_58);
        if (iVar1 < 1) goto LAB_1452928c4;
      }
      else {
        iVar1 = FUN_144ba3cb0();
        if (iVar1 != 0x40) goto LAB_1452928c4;
      }
      iVar1 = FUN_1454ead20(param_1,&local_res18,&local_50);
      if (iVar1 != 0) {
        uVar9 = FUN_1454eae90(param_1);
        uVar10 = FUN_144ba3db0(uVar9);
        uVar3 = FUN_144ba3f10(uVar10);
        uVar10 = FUN_144ea8d60(uVar3);
        uVar18 = uVar18 & 0xffffffff00000000;
        iVar1 = FUN_144ed1710(lVar6,0x398,0x400,0x100d,uVar18,uVar10);
        uVar19 = (undefined4)(uVar18 >> 0x20);
        if (0 < iVar1) {
          uVar4 = FUN_144ba3de0(uVar9);
          puVar11 = (undefined8 *)FUN_144efdfd0();
          if (puVar11 != (undefined8 *)0x0) {
            uVar10 = FUN_144ea8d60(uVar3);
            *puVar11 = uVar10;
            lVar7 = FUN_144efe770();
            puVar11[1] = lVar7;
            if ((lVar7 != 0) && (iVar1 = FUN_144ba41b0(uVar9,lVar7), 0 < iVar1)) {
              iVar1 = FUN_144ed0570(puVar11[1]);
              if (iVar1 == 0) {
                FUN_144efe790(puVar11[1]);
                puVar11[1] = 0;
              }
              uVar9 = CONCAT44(uVar19,uVar4);
              iVar1 = FUN_144ed1710(lVar6,0x398,0x400,0x1009,uVar9,0);
              uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
              if (0 < iVar1) {
                if (local_50 != 0) {
                  iVar5 = FUN_144f03e70();
                  uVar9 = FUN_144f03e90(local_50);
                  puVar12 = (undefined8 *)
                            FUN_144ea6d10(uVar9,(longlong)iVar5,"crypto\\dh\\dh_ameth.c",0x36d);
                  puVar17 = puVar12;
                  if (puVar12 == (undefined8 *)0x0) goto LAB_1452928c4;
                }
                iVar5 = FUN_144ed1710(lVar6,0x398,0x400,0x100b,CONCAT44(uVar3,iVar5),puVar12);
                puVar17 = puVar12;
                if (0 < iVar5) {
                  local_res10 = 0;
                  puVar17 = (undefined8 *)0x0;
                  iVar5 = FUN_144efe030(puVar11,&local_res10);
                  if (((local_res10 != 0) && (iVar5 != 0)) && (lVar6 = FUN_144f03a20(), lVar6 != 0))
                  {
                    FUN_144f03e20(lVar6,local_res10,iVar5);
                    local_res10 = 0;
                    uVar9 = FUN_144ea8d60(0xf5);
                    FUN_144efde30(local_res18,uVar9,0x10,lVar6);
                    puVar14 = (undefined8 *)&DAT_00000001;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1452928c4:
  FUN_144ea6530(local_res10,"crypto\\dh\\dh_ameth.c",0x389);
  FUN_144efdff0(puVar11);
  FUN_144ea6530(puVar17,"crypto\\dh\\dh_ameth.c",0x38b);
  return puVar14;
}



// FUNCTION 145292910 FUN_145292910 body=444 status=ok
// SIG undefined FUN_145292910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145292910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  uStack_30 = 0x145292927;
  lVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  FUN_144efded0(&local_48,local_res20,local_38,param_2);
  iVar1 = FUN_144ea8fa0(local_48);
  lVar5 = lVar6;
  lVar3 = lVar6;
  lVar4 = lVar6;
  if ((((iVar1 == 0x398) && (lVar5 = lVar7, lVar3 = 0, lVar4 = lVar8, local_res20[0] != 5)) &&
      (piVar2 = (int *)FUN_144ed19d0(param_1), lVar5 = lVar6, lVar3 = lVar6, lVar4 = lVar6,
      piVar2 != (int *)0x0)) &&
     ((lVar5 = lVar7, lVar3 = 0, lVar4 = lVar8, *piVar2 == 0x398 &&
      (lVar3 = FUN_145291f00(*(undefined8 *)(piVar2 + 10)), lVar3 != 0)))) {
    iVar1 = FUN_144f03e70(param_3);
    local_40 = FUN_144f03e90(param_3);
    lVar5 = lVar6;
    lVar4 = lVar6;
    if ((local_40 != 0) && (lVar5 = lVar7, lVar4 = lVar8, iVar1 != 0)) {
      lVar4 = FUN_144efe890(0,&local_40,iVar1);
      if (lVar4 == 0) {
        FUN_144ba24f0(5,0x73,0x68,"crypto\\dh\\dh_ameth.c",0x287);
      }
      else {
        lVar5 = FUN_144ef1230(lVar4,0);
        *(longlong *)(lVar3 + 0x20) = lVar5;
        lVar6 = 0;
        if (lVar5 == 0) {
          FUN_144ba24f0(5,0x73,0x6d,"crypto\\dh\\dh_ameth.c",0x28d);
          lVar5 = lVar7;
        }
        else {
          lVar5 = FUN_144ba6d80();
          if (lVar5 != 0) {
            FUN_144ba69a0(lVar5,**(undefined4 **)(piVar2 + 4),lVar3);
            lVar3 = 0;
            iVar1 = FUN_144ed2610(param_1,lVar5);
            lVar6 = 0;
            if (0 < iVar1) {
              lVar6 = 1;
            }
          }
        }
      }
    }
  }
  FUN_144efe870(lVar4);
  FUN_144ba6e60(lVar5);
  FUN_144ed3d50(lVar3);
  return lVar6;
}



// FUNCTION 145292ad0 FUN_145292ad0 body=688 status=ok
// SIG undefined FUN_145292ad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_145292ad0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  ulonglong uVar16;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_30 = 0x145292ae7;
  puVar10 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  puVar15 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  iVar5 = 0;
  iVar1 = FUN_1454ead20(param_2,&local_res18,&local_res20);
  puVar12 = puVar10;
  puVar14 = puVar10;
  puVar7 = puVar10;
  if (iVar1 != 0) {
    iVar1 = FUN_144ea8fa0(*local_res18);
    puVar14 = puVar13;
    puVar7 = puVar15;
    if (iVar1 == 0xf5) {
      uVar16 = CONCAT44(uVar2,2);
      iVar1 = FUN_144ed1710(param_1,0x398,0x400,0x1006,uVar16,0);
      if (0 < iVar1) {
        uVar6 = FUN_144bab020();
        iVar1 = FUN_144ed1710(param_1,0x398,0x400,0x1007,uVar16 & 0xffffffff00000000,uVar6);
        puVar12 = puVar11;
        if ((0 < iVar1) && (*(int *)local_res18[1] == 0x10)) {
          local_38 = *(undefined8 *)(*(longlong *)((int *)local_res18[1] + 2) + 8);
          puVar7 = (undefined8 *)FUN_144efe010(0,&local_38,**(undefined4 **)(local_res18[1] + 8));
          if ((puVar7 != (undefined8 *)0x0) && (lVar8 = FUN_1454eae90(param_2), lVar8 != 0)) {
            uVar2 = FUN_144ea8fa0(*puVar7);
            uVar6 = FUN_144ea8ee0(uVar2);
            lVar9 = FUN_144baaaf0(uVar6);
            puVar12 = puVar10;
            puVar14 = puVar10;
            if ((lVar9 != 0) &&
               (uVar3 = FUN_144ba3da0(lVar9), puVar14 = puVar13, (uVar3 & 0xf0007) == 0x10002)) {
              uVar2 = 0;
              iVar1 = FUN_144ba4630(lVar8,lVar9,0,0,0);
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_144ba4290(lVar8,puVar7[1]), puVar12 = puVar11, 0 < iVar1)) {
                uVar4 = FUN_144ba3de0(lVar8);
                uVar16 = CONCAT44(uVar2,uVar4);
                iVar1 = FUN_144ed1710(param_1,0x398,0x400,0x1009,uVar16,0);
                if (0 < iVar1) {
                  uVar2 = FUN_144ba3f10(lVar9);
                  uVar6 = FUN_144ea8d60(uVar2);
                  uVar16 = uVar16 & 0xffffffff00000000;
                  iVar1 = FUN_144ed1710(param_1,0x398,0x400,0x100d,uVar16,uVar6);
                  uVar2 = (undefined4)(uVar16 >> 0x20);
                  if (0 < iVar1) {
                    if (local_res20 != 0) {
                      iVar5 = FUN_144f03e70();
                      uVar6 = FUN_144f03e90(local_res20);
                      puVar10 = (undefined8 *)
                                FUN_144ea6d10(uVar6,(longlong)iVar5,"crypto\\dh\\dh_ameth.c",0x2dd);
                      puVar14 = puVar10;
                      if (puVar10 == (undefined8 *)0x0) goto LAB_145292d4f;
                    }
                    iVar1 = FUN_144ed1710(param_1,0x398,0x400,0x100b,CONCAT44(uVar2,iVar5),puVar10);
                    puVar14 = puVar10;
                    if (0 < iVar1) {
                      puVar14 = (undefined8 *)0x0;
                      puVar12 = (undefined8 *)&DAT_00000001;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      FUN_144ba24f0(5,0x74,0x70,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar2,0x2b5));
    }
  }
LAB_145292d4f:
  FUN_144efdff0(puVar7);
  FUN_144ea6530(puVar14,"crypto\\dh\\dh_ameth.c",0x2e9);
  return puVar12;
}



// FUNCTION 145292d80 FUN_145292d80 body=370 status=ok
// SIG undefined FUN_145292d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145292d80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar6;
  undefined8 local_28;
  undefined4 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x145292d95;
  lVar4 = 0;
  iVar1 = FUN_144bb6830(0,&local_10,local_res20,&local_28,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_144efded0(0,local_res18,&local_20,local_28);
  if (local_res18[0] == 0x10) {
    local_18 = *(undefined8 *)(local_20 + 2);
    lVar2 = FUN_144ee7a60(0,&local_18,*local_20);
    if (lVar2 == 0) {
      uVar6 = CONCAT44(uVar5,0x2a);
      uVar5 = 0x68;
      lVar4 = 0;
      goto LAB_145292e8f;
    }
  }
  else {
    if ((local_res18[0] != 5) && (local_res18[0] != -1)) {
      uVar6 = CONCAT44(uVar5,0x34);
      uVar5 = 0x69;
      lVar2 = 0;
      goto LAB_145292e8f;
    }
    lVar2 = FUN_144ed4040();
    if (lVar2 == 0) {
      uVar6 = CONCAT44(uVar5,0x30);
      uVar5 = 0x41;
      goto LAB_145292e8f;
    }
  }
  lVar4 = FUN_144efe890(0,&local_10,local_res20[0]);
  if (lVar4 == 0) {
    uVar6 = CONCAT44(uVar5,0x39);
    uVar5 = 0x68;
  }
  else {
    lVar3 = FUN_144ef1230(lVar4,0);
    *(longlong *)(lVar2 + 0x20) = lVar3;
    if (lVar3 != 0) {
      FUN_144efe870(lVar4);
      FUN_144ba69a0(param_1,0x74,lVar2);
      return 1;
    }
    uVar6 = CONCAT44(uVar5,0x3e);
    uVar5 = 0x6c;
  }
LAB_145292e8f:
  FUN_144ba24f0(10,0x75,uVar5,"crypto\\dsa\\dsa_ameth.c",uVar6);
  FUN_144efe870(lVar4);
  FUN_144ed4200(lVar2);
  return 0;
}



// FUNCTION 145292f00 FUN_145292f00 body=355 status=ok
// SIG undefined FUN_145292f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145292f00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar7 = 0x145292f18;
  lVar3 = *(longlong *)(param_2 + 0x28);
  piVar2 = (int *)0x0;
  local_res10 = 0;
  if ((((*(int *)(param_2 + 0x30) == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
      (*(longlong *)(lVar3 + 0x10) == 0)) || (*(longlong *)(lVar3 + 0x18) == 0)) {
    uVar4 = 0xffffffff;
LAB_145292fd7:
    lVar3 = FUN_144ef1210(*(undefined8 *)(lVar3 + 0x20),0);
    if (lVar3 == 0) {
      uVar5 = CONCAT44(uVar6,0x6a);
    }
    else {
      iVar1 = FUN_144efe8b0(lVar3,&local_res10);
      FUN_144efe870(lVar3);
      if (0 < iVar1) {
        lVar3 = FUN_144ea8d60(0x74);
        if ((lVar3 != 0) &&
           (iVar1 = FUN_144bb67b0(param_1,lVar3,uVar4,piVar2,local_res10,iVar1), iVar1 != 0)) {
          return 1;
        }
        goto LAB_145292f7d;
      }
      uVar5 = CONCAT44(uVar6,0x72);
    }
  }
  else {
    piVar2 = (int *)FUN_144f03a20();
    if (piVar2 == (int *)0x0) {
      uVar5 = CONCAT44(uVar6,0x5b);
    }
    else {
      iVar1 = FUN_144ee7aa0(lVar3,piVar2 + 2);
      *piVar2 = iVar1;
      if (0 < iVar1) {
        uVar4 = 0x10;
        goto LAB_145292fd7;
      }
      uVar5 = CONCAT44(uVar6,0x60);
    }
  }
  FUN_144ba24f0(10,0x76,0x41,"crypto\\dsa\\dsa_ameth.c",uVar5,uVar7);
LAB_145292f7d:
  FUN_144ea6530(local_res10,"crypto\\dsa\\dsa_ameth.c",0x7e);
  FUN_144f03a80(piVar2);
  return 0;
}



// FUNCTION 145293070 FUN_145293070 body=481 status=ok
// SIG undefined FUN_145293070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145293070(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined8 uVar8;
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined4 *local_28;
  undefined8 local_20;
  
  local_20 = 0x145293083;
  lVar5 = 0;
  lVar6 = 0;
  lVar2 = FUN_144efe520(0,local_30,local_res18,&local_38,param_2);
  if ((int)lVar2 == 0) {
    return lVar2;
  }
  FUN_144efded0(0,local_res20,&local_28,local_38);
  lVar3 = FUN_144efe890(0,local_30,local_res18[0]);
  lVar2 = lVar5;
  if (((lVar3 == 0) || (lVar2 = 0, *(int *)(lVar3 + 4) == 0x102)) || (local_res20[0] != 0x10)) {
LAB_145293202:
    uVar8 = 0xc2;
    uVar7 = 0x68;
  }
  else {
    local_20 = *(undefined8 *)(local_28 + 2);
    lVar2 = FUN_144ee7a60(0,&local_20,*local_28);
    if (lVar2 == 0) goto LAB_145293202;
    lVar4 = FUN_144ba05d0();
    *(longlong *)(lVar2 + 0x28) = lVar4;
    if (lVar4 == 0) {
LAB_1452931f2:
      uVar8 = 0xa9;
      uVar7 = 0x6d;
    }
    else {
      lVar4 = FUN_144ef1230(lVar3,lVar4);
      if (lVar4 == 0) goto LAB_1452931f2;
      lVar6 = FUN_144ba0570();
      *(longlong *)(lVar2 + 0x20) = lVar6;
      if (lVar6 == 0) {
        uVar8 = 0xae;
        uVar7 = 0x41;
        lVar6 = lVar5;
      }
      else {
        lVar6 = FUN_144eedd20();
        if (lVar6 == 0) {
          uVar8 = 0xb2;
          uVar7 = 0x41;
        }
        else {
          FUN_144ba0220(*(undefined8 *)(lVar2 + 0x28),4);
          iVar1 = FUN_1452a5e00(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x18),
                                *(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 8),lVar6);
          if (iVar1 != 0) {
            FUN_144ba69a0(param_1,0x74,lVar2);
            lVar5 = 1;
            goto LAB_14529322c;
          }
          uVar8 = 0xb8;
          uVar7 = 0x6d;
        }
      }
    }
  }
  FUN_144ba24f0(10,0x73,uVar7,"crypto\\dsa\\dsa_ameth.c",uVar8);
  FUN_144ed4200(lVar2);
LAB_14529322c:
  FUN_144eeddc0(lVar6);
  FUN_144f03af0(lVar3);
  return lVar5;
}



// FUNCTION 145293260 FUN_145293260 body=355 status=ok
// SIG undefined FUN_145293260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293260(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  
  piVar4 = (int *)0x0;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28) == 0)) {
    uVar3 = 0xd3;
    uVar5 = 0x65;
  }
  else {
    piVar4 = (int *)FUN_144f03a20();
    if (piVar4 == (int *)0x0) {
      uVar3 = 0xda;
      uVar5 = 0x41;
    }
    else {
      iVar1 = FUN_144ee7aa0(*(undefined8 *)(param_2 + 0x28),piVar4 + 2);
      *piVar4 = iVar1;
      if (iVar1 < 1) {
        uVar3 = 0xe0;
        uVar5 = 0x41;
      }
      else {
        piVar4[1] = 0x10;
        lVar2 = FUN_144ef1210(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
        if (lVar2 != 0) {
          uVar5 = FUN_144efe8b0(lVar2,&local_res10);
          FUN_144f03af0(lVar2);
          uVar3 = FUN_144ea8d60(0x74);
          iVar1 = FUN_144efe490(param_1,uVar3,0,0x10,piVar4,local_res10,uVar5);
          if (iVar1 != 0) {
            return 1;
          }
          goto LAB_145293386;
        }
        uVar3 = 0xe9;
        uVar5 = 0x6d;
      }
    }
  }
  FUN_144ba24f0(10,0x74,uVar5,"crypto\\dsa\\dsa_ameth.c",uVar3);
LAB_145293386:
  FUN_144ea6530(local_res10,"crypto\\dsa\\dsa_ameth.c",0xf9);
  FUN_144f03a80(piVar4);
  FUN_144f03af0(0);
  return 0;
}



// FUNCTION 1452933d0 FUN_1452933d0 body=26 status=ok
// SIG undefined FUN_1452933d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452933d0(longlong param_1)

{
  FUN_144ed42b0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1452933f0 FUN_1452933f0 body=26 status=ok
// SIG undefined FUN_1452933f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452933f0(longlong param_1)

{
  FUN_144ed4310(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145293410 FUN_145293410 body=26 status=ok
// SIG undefined FUN_145293410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293410(longlong param_1)

{
  FUN_144ed4330(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145293460 FUN_145293460 body=227 status=ok
// SIG undefined FUN_145293460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = FUN_144ed4040();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_144ba0e20(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if (lVar1 != 0) {
    FUN_144ba0cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) = lVar1;
    lVar1 = FUN_144ba0e20(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (lVar1 != 0) {
      FUN_144ba0cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
      *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = lVar1;
      lVar1 = FUN_144ba0e20(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
      if (lVar1 != 0) {
        FUN_144ba0cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = lVar1;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145293550 FUN_145293550 body=129 status=ok
// SIG undefined FUN_145293550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293550(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if (iVar1 == 0) {
    iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                          *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (iVar1 == 0) {
      iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1452935e0 FUN_1452935e0 body=51 status=ok
// SIG undefined FUN_1452935e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452935e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20),param_3,param_4,
                        0x1452935ea);
  return iVar1 == 0;
}



// FUNCTION 145293620 FUN_145293620 body=26 status=ok
// SIG undefined FUN_145293620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293620(longlong param_1)

{
  FUN_144ed4200(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145293640 FUN_145293640 body=97 status=ok
// SIG undefined FUN_145293640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293640(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14529364c;
  lVar1 = FUN_144ee7a60(0);
  if (lVar1 == 0) {
    FUN_144ba24f0(10,0x77,10,"crypto\\dsa\\dsa_ameth.c",0x17d,uVar2);
    return 0;
  }
  FUN_144ba69a0(param_1,0x74,lVar1);
  return 1;
}



// FUNCTION 1452936b0 FUN_1452936b0 body=26 status=ok
// SIG undefined FUN_1452936b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452936b0(longlong param_1)

{
  FUN_144ee7aa0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1452936d0 FUN_1452936d0 body=29 status=ok
// SIG undefined FUN_1452936d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452936d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145293a60(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}



// FUNCTION 1452936f0 FUN_1452936f0 body=30 status=ok
// SIG undefined FUN_1452936f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452936f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145293a60(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}



// FUNCTION 145293710 FUN_145293710 body=30 status=ok
// SIG undefined FUN_145293710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293710(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145293a60(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}



// FUNCTION 145293730 FUN_145293730 body=97 status=ok
// SIG undefined FUN_145293730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293730(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14529373c;
  lVar1 = FUN_144ee7a40(0);
  if (lVar1 == 0) {
    FUN_144ba24f0(10,0x7a,10,"crypto\\dsa\\dsa_ameth.c",0x1a1,uVar2);
    return 0;
  }
  FUN_144ba69a0(param_1,0x74,lVar1);
  return 1;
}



// FUNCTION 1452937a0 FUN_1452937a0 body=26 status=ok
// SIG undefined FUN_1452937a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452937a0(longlong param_1)

{
  FUN_144ee7a80(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1452937c0 FUN_1452937c0 body=272 status=ok
// SIG undefined FUN_1452937c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452937c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4
                       )

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0x1452937ce;
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = FUN_144b9ebc0(param_1,&DAT_149dfc0af);
    return (ulonglong)(0 < iVar1);
  }
  local_res18[0] = *(undefined8 *)(param_3 + 2);
  lVar2 = FUN_144ee77a0(0,local_res18,*param_3);
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_144ee77c0(lVar2,&local_28,&local_20);
    iVar1 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
    if (iVar1 == 1) {
      iVar1 = FUN_1454dc320(param_1,"r:   ",local_28,0,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_1454dc320(param_1,"s:   ",local_20,0,param_4);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = 1;
        }
      }
    }
    FUN_144ee7750(lVar2);
    return uVar3;
  }
  uVar3 = FUN_14529e2c0(param_1,param_3,param_4);
  return uVar3;
}



// FUNCTION 1452938d0 FUN_1452938d0 body=393 status=ok
// SIG undefined FUN_1452938d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452938d0(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [6];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x1452938e0;
  if (param_2 == 1) {
    if (param_3 != 0) {
      return 1;
    }
    FUN_1452a48d0(param_4,0,&local_10,&local_18);
    if (local_10 == (longlong *)0x0) {
      return 0xffffffff;
    }
    if (*local_10 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_144ea8fa0();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FUN_144ba6750(param_1);
    iVar1 = FUN_144edad60(local_res10,iVar1,uVar2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = FUN_144ea8d60(local_res10[0]);
  }
  else {
    if (param_2 == 3) {
      *param_4 = 0x2a0;
      return 1;
    }
    if (param_2 != 5) {
      if (param_2 == 8) {
        *param_4 = 0xffffffff;
        return 1;
      }
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    FUN_1454eb250(param_4,0,0,&local_18,&local_10);
    if ((local_18 == (longlong *)0x0) || (*local_18 == 0)) {
      return 0xffffffff;
    }
    iVar1 = FUN_144ea8fa0();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FUN_144ba6750(param_1);
    iVar1 = FUN_144edad60(local_res10,iVar1,uVar2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = FUN_144ea8d60(local_res10[0]);
    local_18 = local_10;
  }
  FUN_144efde30(local_18,uVar3,0xffffffff,0);
  return 1;
}



// FUNCTION 145293a60 FUN_145293a60 body=369 status=ok
// SIG undefined FUN_145293a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145293a60(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x145293a7e;
  lVar3 = 0;
  if (param_4 == 2) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    lVar4 = *(longlong *)(param_2 + 0x28);
  }
  else {
    lVar4 = 0;
    if (param_4 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar4 = 0;
    }
  }
  if (param_4 == 2) {
    pcVar6 = "Private-Key";
  }
  else {
    pcVar6 = "Public-Key";
    if (param_4 != 1) {
      pcVar6 = "DSA-Parameters";
    }
  }
  if (lVar4 != 0) {
    iVar1 = FUN_144b9edb0(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_144ba03d0(*(undefined8 *)(param_2 + 8));
    iVar1 = FUN_144ec7640(param_1,"%s: (%d bit)\n",pcVar6,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
  }
  iVar1 = FUN_1454dc320(param_1,"priv:",lVar4,0,param_3,uVar7);
  lVar4 = 0;
  if ((((iVar1 != 0) &&
       (iVar1 = FUN_1454dc320(param_1,"pub: ",uVar5,0,param_3,uVar7), lVar4 = lVar3, iVar1 != 0)) &&
      (iVar1 = FUN_1454dc320(param_1,"P:   ",*(undefined8 *)(param_2 + 8),0,param_3,uVar7),
      iVar1 != 0)) &&
     (iVar1 = FUN_1454dc320(param_1,"Q:   ",*(undefined8 *)(param_2 + 0x10),0,param_3,uVar7),
     iVar1 != 0)) {
    iVar1 = FUN_1454dc320(param_1,"G:   ",*(undefined8 *)(param_2 + 0x18),0,param_3);
    lVar4 = 0;
    if (iVar1 != 0) {
      lVar4 = 1;
    }
  }
  return lVar4;
}



// FUNCTION 145293be0 FUN_145293be0 body=99 status=ok
// SIG undefined FUN_145293be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293be0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145293bec;
  lVar1 = FUN_144ee6920(0);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x10,0xd4,0x10,"crypto\\ec\\ec_ameth.c",0x1ac,uVar2);
    return 0;
  }
  FUN_144ba69a0(param_1,0x198,lVar1);
  return 1;
}



// FUNCTION 145293c50 FUN_145293c50 body=26 status=ok
// SIG undefined FUN_145293c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293c50(longlong param_1)

{
  FUN_144ee6a40(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145293c70 FUN_145293c70 body=30 status=ok
// SIG undefined FUN_145293c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293c70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145295090(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}



// FUNCTION 145293c90 FUN_145293c90 body=30 status=ok
// SIG undefined FUN_145293c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293c90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145295090(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}



// FUNCTION 145293cb0 FUN_145293cb0 body=29 status=ok
// SIG undefined FUN_145293cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293cb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_145295090(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}



// FUNCTION 145293cd0 FUN_145293cd0 body=97 status=ok
// SIG undefined FUN_145293cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293cd0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145293cdc;
  lVar1 = FUN_144ee64a0(0);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x10,0xde,0x8e,"crypto\\ec\\ec_ameth.c",0x1d0,uVar2);
    return 0;
  }
  FUN_144ba69a0(param_1,0x198,lVar1);
  return 1;
}



// FUNCTION 145293d40 FUN_145293d40 body=26 status=ok
// SIG undefined FUN_145293d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145293d40(longlong param_1)

{
  FUN_144ee66f0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145293d60 FUN_145293d60 body=603 status=ok
// SIG undefined FUN_145293d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293d60(undefined8 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x145293d75;
  switch(param_2) {
  case 1:
    if (param_3 == 0) {
      FUN_1452a48d0(param_4,0,&local_18,&local_10);
      if (((local_18 != (longlong *)0x0) && (*local_18 != 0)) &&
         (iVar1 = FUN_144ea8fa0(), iVar1 != 0)) {
        uVar2 = FUN_144ba6750(param_1);
        iVar1 = FUN_144edad60(local_res10,iVar1,uVar2);
        if (iVar1 != 0) {
          uVar3 = FUN_144ea8d60(local_res10[0]);
          FUN_144efde30(local_10,uVar3,0xffffffff,0);
          return 1;
        }
      }
      return 0xffffffff;
    }
    break;
  default:
    return 0xfffffffe;
  case 3:
    iVar1 = FUN_144ba6750(param_1);
    uVar2 = 0x2a0;
    if (iVar1 == 0x494) {
      uVar2 = 0x477;
    }
    *param_4 = uVar2;
    return 1;
  case 5:
    if (param_3 == 0) {
      FUN_1454eb250(param_4,0,0,&local_10,&local_18);
      if (local_10 == (longlong *)0x0) {
        return 0xffffffff;
      }
      if (*local_10 == 0) {
        return 0xffffffff;
      }
      iVar1 = FUN_144ea8fa0();
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar2 = FUN_144ba6750(param_1);
      iVar1 = FUN_144edad60(local_res10,iVar1,uVar2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar3 = FUN_144ea8d60(local_res10[0]);
      FUN_144efde30(local_18,uVar3,0xffffffff,0);
      return 1;
    }
    break;
  case 7:
    if (param_3 == 1) {
      uVar3 = FUN_145294950(param_4);
      return uVar3;
    }
    if (param_3 != 0) {
      return 0xfffffffe;
    }
    uVar3 = FUN_145294a40(param_4);
    return uVar3;
  case 8:
    *param_4 = 1;
    break;
  case 9:
    uVar3 = FUN_144ba6cd0(param_1);
    uVar3 = FUN_144ed33d0(uVar3,param_4,(longlong)param_3,0);
    return uVar3;
  case 10:
    uVar3 = FUN_144ba6cd0(param_1);
    uVar3 = FUN_144ed3380(uVar3,4,param_4);
    return uVar3;
  }
  return 1;
}



// FUNCTION 145293ff0 FUN_145293ff0 body=72 status=ok
// SIG undefined FUN_145293ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145293ff0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) == 0) {
    FUN_144ba24f0(0x10,0x111,0x7d,"crypto\\ec\\ec_ameth.c",0x228);
    return 0;
  }
  uVar1 = FUN_144ed32e0();
  return uVar1;
}



// FUNCTION 145294040 FUN_145294040 body=26 status=ok
// SIG undefined FUN_145294040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145294040(longlong param_1)

{
  FUN_144ed32e0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145294060 FUN_145294060 body=77 status=ok
// SIG undefined FUN_145294060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145294060(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x10,0x112,0x7c,"crypto\\ec\\ec_ameth.c",0x245);
    return 0;
  }
  uVar2 = FUN_1454ebc30(lVar1,0);
  return uVar2;
}



// FUNCTION 1452940b0 FUN_1452940b0 body=279 status=ok
// SIG undefined FUN_1452940b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452940b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x1452940bf;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = 0;
  local_res18 = 0;
  iVar1 = FUN_145294e50(local_res10,&local_res18,uVar3);
  if (iVar1 == 0) {
    FUN_144ba24f0(0x10,0xd8,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x54),uVar5);
    return 0;
  }
  iVar1 = FUN_144ee6b50(uVar3,0);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (0 < iVar1) {
    lVar2 = FUN_144ea64e0((longlong)iVar1,"crypto\\ec\\ec_ameth.c",0x5a);
    if (lVar2 != 0) {
      local_res20 = lVar2;
      iVar1 = FUN_144ee6b50(uVar3,&local_res20);
      if (0 < iVar1) {
        uVar3 = FUN_144ea8d60(0x198);
        iVar1 = FUN_144bb67b0(param_1,uVar3,local_res10[0],local_res18,lVar2,CONCAT44(uVar4,iVar1));
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  if (local_res10[0] == 6) {
    FUN_144ed0860();
  }
  else {
    FUN_144f03a80(local_res18);
  }
  FUN_144ea6530(lVar2,"crypto\\ec\\ec_ameth.c",0x69);
  return 0;
}



// FUNCTION 1452941d0 FUN_1452941d0 body=253 status=ok
// SIG undefined FUN_1452941d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1452941d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar3;
  longlong local_28 [3];
  undefined8 local_10;
  
  local_10 = 0x1452941dc;
  local_28[1] = 0;
  local_28[0] = 0;
  iVar1 = FUN_144bb6830(0,local_28 + 1,local_res20,local_28 + 2,param_2);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    FUN_144efded0(0,local_res18,&local_10,local_28[2]);
    local_28[0] = FUN_145294f80(local_res18[0],local_10);
    if (local_28[0] != 0) {
      lVar2 = FUN_144ee6a90(local_28,local_28 + 1,local_res20[0]);
      if (lVar2 == 0) {
        FUN_144ba24f0(0x10,0xd7,0x8e,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0xae));
        FUN_144ed2e50(local_28[0]);
        return 0;
      }
      FUN_144ba69a0(param_1,0x198,local_28[0]);
      return 1;
    }
    FUN_144ba24f0(0x10,0xd7,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0xa8));
  }
  return 0;
}



// FUNCTION 1452942d0 FUN_1452942d0 body=170 status=ok
// SIG undefined FUN_1452942d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1452942d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_144ed31a0(*(undefined8 *)(param_2 + 0x28));
  lVar4 = FUN_144ed3230(*(undefined8 *)(param_1 + 0x28));
  lVar5 = FUN_144ed3230(*(undefined8 *)(param_2 + 0x28));
  if (((lVar3 != 0) && (lVar4 != 0)) && (lVar5 != 0)) {
    iVar1 = FUN_144efcf30(lVar3,lVar4,lVar5,0);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = 0xfffffffe;
    if (iVar1 == 1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffffe;
}



// FUNCTION 145294380 FUN_145294380 body=236 status=ok
// SIG undefined FUN_145294380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_145294380(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar4;
  undefined4 uVar5;
  longlong local_28 [3];
  undefined8 local_10;
  
  local_10 = 0x14529438c;
  local_28[1] = 0;
  local_28[0] = 0;
  iVar1 = FUN_144efe520(0,local_28 + 1,local_res20,local_28 + 2,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    FUN_144efded0(0,local_res18,&local_10,local_28[2]);
    local_28[0] = FUN_145294f80(local_res18[0],local_10);
    if (local_28[0] == 0) {
      uVar3 = 0x10;
      uVar4 = CONCAT44(uVar5,0xe5);
    }
    else {
      lVar2 = FUN_144ee64a0(local_28,local_28 + 1,local_res20[0]);
      if (lVar2 != 0) {
        FUN_144ba69a0(param_1,0x198,local_28[0]);
        return 1;
      }
      uVar4 = CONCAT44(uVar5,0xdd);
      uVar3 = 0x8e;
    }
    FUN_144ba24f0(0x10,0xd5,uVar3,"crypto\\ec\\ec_ameth.c",uVar4);
    FUN_144ed2e50(local_28[0]);
  }
  return 0;
}



// FUNCTION 145294470 FUN_145294470 body=685 status=ok
// SIG undefined FUN_145294470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145294470(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar10;
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
  undefined8 uStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  local_58 = puVar1[2];
  uStack_50 = puVar1[3];
  local_48 = puVar1[4];
  uStack_40 = puVar1[5];
  local_38 = *(undefined4 *)(puVar1 + 6);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uStack_30 = *(undefined4 *)(puVar1 + 7);
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x3c);
  local_28 = *(undefined4 *)(puVar1 + 8);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_20 = puVar1[9];
  lVar5 = FUN_144ed31a0(&local_68);
  if (lVar5 == 0) {
    uVar10 = CONCAT44(uVar9,0x1f);
    uVar7 = 0x7c;
  }
  else {
    iVar2 = FUN_144efc210(lVar5);
    if ((iVar2 == 0) || (iVar2 = FUN_144efc1f0(lVar5), iVar2 == 0)) {
      piVar6 = (int *)FUN_144f03a20();
      if (piVar6 == (int *)0x0) goto LAB_1452946ed;
      iVar2 = FUN_144ee6a40(&local_68,piVar6 + 2);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        uVar8 = 0x10;
        goto LAB_14529456b;
      }
      FUN_144f03a80(piVar6);
      uVar10 = CONCAT44(uVar9,0x42);
      uVar7 = 0x10;
    }
    else {
      piVar6 = (int *)FUN_144ea8d60(iVar2);
      if ((piVar6 != (int *)0x0) && (lVar5 = FUN_144ea9be0(piVar6), lVar5 != 0)) {
        uVar8 = 6;
LAB_14529456b:
        uVar3 = FUN_144ed3240(&local_68);
        FUN_144ed3250(&local_68,uVar3 | 1);
        iVar2 = FUN_144ee66f0(&local_68,0);
        if (iVar2 == 0) {
          FUN_144ba24f0(0x10,0xd6,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar9,0x103));
          return 0;
        }
        lVar5 = FUN_144ea64e0((longlong)iVar2,"crypto\\ec\\ec_ameth.c",0x106);
        if (lVar5 == 0) {
          uVar7 = CONCAT44(uVar9,0x108);
          uVar9 = 0x41;
        }
        else {
          local_res10 = lVar5;
          iVar4 = FUN_144ee66f0(&local_68,&local_res10);
          if (iVar4 != 0) {
            uVar7 = FUN_144ea8d60(0x198);
            iVar2 = FUN_144efe490(param_1,uVar7,0,uVar8,piVar6,lVar5,iVar2);
            if (iVar2 == 0) {
              FUN_144ea6530(lVar5,"crypto\\ec\\ec_ameth.c",0x114);
              return 0;
            }
            return 1;
          }
          FUN_144ea6530(lVar5,"crypto\\ec\\ec_ameth.c",0x10d);
          uVar7 = CONCAT44(uVar9,0x10e);
          uVar9 = 0x10;
        }
        FUN_144ba24f0(0x10,0xd6,uVar9,"crypto\\ec\\ec_ameth.c",uVar7);
        return 0;
      }
      FUN_144ed0860(piVar6);
      uVar7 = 0xa7;
      uVar10 = CONCAT44(uVar9,0x2a);
    }
  }
  FUN_144ba24f0(0x10,0xdf,uVar7,"crypto\\ec\\ec_ameth.c",uVar10);
  uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
LAB_1452946ed:
  FUN_144ba24f0(0x10,0xd6,0x8e,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar9,0xf4));
  return 0;
}



// FUNCTION 145294720 FUN_145294720 body=26 status=ok
// SIG undefined FUN_145294720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145294720(longlong param_1)

{
  FUN_144ee6e30(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145294740 FUN_145294740 body=34 status=ok
// SIG undefined FUN_145294740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145294740(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ed31a0(*(undefined8 *)(param_1 + 0x28));
  FUN_144efc160(uVar1);
  return;
}



// FUNCTION 145294770 FUN_145294770 body=125 status=ok
// SIG undefined FUN_145294770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145294770(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144ed31a0(*(undefined8 *)(param_1 + 0x28));
  iVar1 = FUN_144efc160(uVar2);
  if (0x1ff < iVar1) {
    return 0x100;
  }
  if (0x17f < iVar1) {
    return 0xc0;
  }
  if (0xff < iVar1) {
    return 0x80;
  }
  if (0xdf < iVar1) {
    return 0x70;
  }
  if (0x9f < iVar1) {
    return 0x50;
  }
  return iVar1 / 2;
}



// FUNCTION 1452947f0 FUN_1452947f0 body=49 status=ok
// SIG undefined FUN_1452947f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452947f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = FUN_144ed31a0();
    if (lVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 145294830 FUN_145294830 body=129 status=ok
// SIG undefined FUN_145294830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145294830(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUN_144ed31a0(*(undefined8 *)(param_2 + 0x28));
  lVar3 = FUN_144efbe70(uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar4 = FUN_144ed2d70();
    *(longlong *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) goto LAB_145294884;
  }
  iVar1 = FUN_144ed31b0(*(undefined8 *)(param_1 + 0x28),lVar3);
  if (iVar1 != 0) {
    FUN_144efba20(lVar3);
    return 1;
  }
LAB_145294884:
  FUN_144efba20(lVar3);
  return 0;
}



// FUNCTION 1452948c0 FUN_1452948c0 body=103 status=ok
// SIG undefined FUN_1452948c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452948c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144ed31a0(*(undefined8 *)(param_1 + 0x28));
  lVar3 = FUN_144ed31a0(*(undefined8 *)(param_2 + 0x28));
  if ((lVar2 != 0) && (lVar3 != 0)) {
    iVar1 = FUN_144efc480(lVar2,lVar3,0);
    return (ulonglong)(iVar1 == 0);
  }
  return 0xfffffffe;
}



// FUNCTION 145294930 FUN_145294930 body=26 status=ok
// SIG undefined FUN_145294930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145294930(longlong param_1)

{
  FUN_144ed2e50(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145294950 FUN_145294950 body=236 status=ok
// SIG undefined FUN_145294950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145294950(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  lVar5 = 0x145294960;
  lVar2 = FUN_1454ea540();
  if (lVar2 != 0) {
    lVar3 = FUN_144ed19e0(lVar2);
    if (lVar3 != 0) {
LAB_1452949f0:
      iVar1 = FUN_145295540(lVar2,param_1);
      if (iVar1 == 0) {
        FUN_144ba24f0(0x10,0xee,0x96,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x331),lVar5);
        return 0;
      }
      return 1;
    }
    lVar5 = lVar3;
    iVar1 = FUN_1454ead90(param_1,&local_res10,local_res18,0,0,0);
    uVar4 = (undefined4)((ulonglong)lVar3 >> 0x20);
    if (((iVar1 != 0) && (local_res10 != 0)) && (local_res18[0] != 0)) {
      iVar1 = FUN_1452952e0(lVar2);
      if (iVar1 != 0) goto LAB_1452949f0;
      FUN_144ba24f0(0x10,0xee,0x95,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x32b));
    }
  }
  return 0;
}



// FUNCTION 145294a40 FUN_145294a40 body=1033 status=ok
// SIG undefined FUN_145294a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_145294a40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined4 uVar16;
  ulonglong uVar15;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48 [2];
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
  local_res18 = 0;
  lVar5 = FUN_1454ea540();
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  lVar6 = FUN_144ed19d0(lVar5);
  uVar16 = 0;
  iVar1 = FUN_1454ead90(param_1,&local_res20,&local_68,0,0,0);
  puVar13 = puVar12;
  puVar10 = puVar12;
  if (iVar1 != 0) {
    FUN_144efded0(&local_58,0,0,local_res20);
    lVar7 = FUN_144ea8d60(0);
    if (local_58 == lVar7) {
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      iVar1 = FUN_144ee6b50(uVar8,0);
      puVar10 = puVar14;
      if (((iVar1 < 1) ||
          (local_res18 = FUN_144ea64e0((longlong)iVar1,"crypto\\ec\\ec_ameth.c",0x35a),
          puVar10 = puVar12, local_res18 == 0)) ||
         (local_50 = local_res18, iVar1 = FUN_144ee6b50(uVar8,&local_50), puVar10 = puVar14,
         iVar1 < 1)) goto LAB_145294e14;
      FUN_144f03e20(local_68,local_res18,iVar1);
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) & 0xfffffff0;
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 8;
      local_res18 = 0;
      uVar8 = FUN_144ea8d60(0x198);
      FUN_144efde30(local_res20,uVar8,0xffffffff,0);
    }
    uVar15 = CONCAT44(uVar16,0xfffffffe);
    iVar1 = FUN_144ed1710(lVar5,0x198,0x400,0x1004,uVar15,0);
    puVar13 = puVar11;
    puVar10 = puVar14;
    if (0 < iVar1) {
      uVar15 = uVar15 & 0xffffffff00000000;
      iVar2 = FUN_144ed1710(lVar5,0x198,0x400,0x1006,uVar15,&local_60);
      if (iVar2 != 0) {
        uVar8 = CONCAT44((int)(uVar15 >> 0x20),0xfffffffe);
        iVar2 = FUN_144ed1710(lVar5,0x198,0x400,0x1003,uVar8,0);
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            iVar2 = 0x3b2;
          }
          else if (iVar2 == 1) {
            iVar2 = 0x3b3;
          }
          if (iVar1 == 1) {
            uVar15 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),2);
            iVar1 = FUN_144ed1710(lVar5,0x198,0x400,0x1004,uVar15,0);
            uVar16 = (undefined4)(uVar15 >> 0x20);
            if (0 < iVar1) {
              if (local_60 == 0) {
                local_60 = FUN_144bab020();
                uVar15 = uVar15 & 0xffffffff00000000;
                iVar1 = FUN_144ed1710(lVar5,0x198,0x400,0x1005,uVar15,local_60);
                uVar16 = (undefined4)(uVar15 >> 0x20);
                if (iVar1 < 1) goto LAB_145294e14;
              }
              iVar1 = FUN_1454ead20(param_1,&local_res20,local_48);
              if (iVar1 != 0) {
                uVar3 = FUN_144ba3cb0(local_60);
                iVar1 = FUN_144edad60(local_res10,uVar3,iVar2);
                if (iVar1 != 0) {
                  uVar8 = FUN_1454eae90(param_1);
                  uVar9 = FUN_144ba3db0(uVar8);
                  uVar3 = FUN_144ba3f10(uVar9);
                  uVar4 = FUN_144ba3de0(uVar8);
                  puVar10 = (undefined8 *)FUN_144efdfd0();
                  if (puVar10 != (undefined8 *)0x0) {
                    uVar9 = FUN_144ea8d60(uVar3);
                    *puVar10 = uVar9;
                    lVar6 = FUN_144efe770();
                    puVar10[1] = lVar6;
                    if ((lVar6 != 0) && (iVar1 = FUN_144ba41b0(uVar8,lVar6), 0 < iVar1)) {
                      iVar1 = FUN_144ed0570(puVar10[1]);
                      if (iVar1 == 0) {
                        FUN_144efe790(puVar10[1]);
                        puVar10[1] = 0;
                      }
                      uVar8 = CONCAT44(uVar16,uVar4);
                      iVar1 = FUN_144ed1710(lVar5,0x198,0x400,0x1007,uVar8,0);
                      uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
                      if (((0 < iVar1) &&
                          (iVar1 = FUN_1454ec900(&local_res18,puVar10,local_48[0],uVar4), iVar1 != 0
                          )) && (iVar1 = FUN_144ed1710(lVar5,0x198,0x400,0x1009,
                                                       CONCAT44(uVar16,iVar1),local_res18),
                                0 < iVar1)) {
                        local_res18 = 0;
                        iVar1 = FUN_144efe030(puVar10,&local_res18);
                        puVar13 = puVar12;
                        if (((local_res18 != 0) && (iVar1 != 0)) &&
                           (lVar5 = FUN_144f03a20(), puVar13 = puVar11, lVar5 != 0)) {
                          FUN_144f03e20(lVar5,local_res18,iVar1);
                          local_res18 = 0;
                          uVar8 = FUN_144ea8d60(local_res10[0]);
                          FUN_144efde30(local_res20,uVar8,0x10,lVar5);
                          puVar13 = (undefined8 *)&DAT_00000001;
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
LAB_145294e14:
  FUN_144ea6530(local_res18,"crypto\\ec\\ec_ameth.c",0x3bf);
  FUN_144efdff0(puVar10);
  return puVar13;
}



// FUNCTION 145294e50 FUN_145294e50 body=298 status=ok
// SIG undefined FUN_145294e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145294e50(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x145294e6b;
  if ((param_3 == 0) || (lVar2 = FUN_144ed31a0(param_3), lVar2 == 0)) {
    uVar6 = 0x1f;
    uVar5 = 0x7c;
  }
  else {
    iVar1 = FUN_144efc210(lVar2);
    if ((iVar1 == 0) || (iVar1 = FUN_144efc1f0(lVar2), iVar1 == 0)) {
      piVar4 = (int *)FUN_144f03a20();
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      iVar1 = FUN_144ee6a40(param_3,piVar4 + 2);
      *piVar4 = iVar1;
      if (0 < iVar1) {
        *param_2 = (longlong)piVar4;
        *param_1 = 0x10;
        return 1;
      }
      FUN_144f03a80(piVar4);
      uVar6 = 0x42;
      uVar5 = 0x10;
    }
    else {
      lVar2 = FUN_144ea8d60(iVar1);
      if ((lVar2 != 0) && (lVar3 = FUN_144ea9be0(lVar2), lVar3 != 0)) {
        *param_2 = lVar2;
        *param_1 = 6;
        return 1;
      }
      FUN_144ed0860(lVar2);
      uVar5 = 0xa7;
      uVar6 = 0x2a;
    }
  }
  FUN_144ba24f0(0x10,0xdf,uVar5,"crypto\\ec\\ec_ameth.c",uVar6,uVar7);
  return 0;
}



// FUNCTION 145294f80 FUN_145294f80 body=258 status=ok
// SIG undefined FUN_145294f80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145294f80(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x145294f95;
  lVar3 = 0;
  if (param_1 == 0x10) {
    local_res18[0] = *(undefined8 *)(param_2 + 2);
    lVar2 = FUN_144ee6920(0,local_res18,*param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar5 = 0x78;
LAB_145295044:
    lVar2 = 0;
    uVar4 = 0x8e;
  }
  else {
    if (param_1 != 6) {
      uVar5 = 0x8d;
      goto LAB_145295044;
    }
    lVar2 = FUN_144ed2d70();
    if (lVar2 != 0) {
      uVar5 = FUN_144ea8fa0(param_2);
      lVar3 = FUN_14527fe90(uVar5);
      if (lVar3 != 0) {
        FUN_144efc200(lVar3,1);
        iVar1 = FUN_144ed31b0(lVar2,lVar3);
        if (iVar1 != 0) {
          FUN_144efba20(lVar3);
          return lVar2;
        }
      }
      goto LAB_145295060;
    }
    uVar5 = 0x82;
    uVar4 = 0x41;
  }
  FUN_144ba24f0(0x10,0xdc,uVar4,"crypto\\ec\\ec_ameth.c",uVar5,uVar6);
LAB_145295060:
  FUN_144ed2e50(lVar2);
  FUN_144efba20(lVar3);
  return 0;
}



// FUNCTION 145295090 FUN_145295090 body=581 status=ok
// SIG undefined FUN_145295090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145295090(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1452950b2;
  lVar8 = 0;
  local_res10 = 0;
  local_38 = 0;
  if ((param_2 == 0) || (lVar3 = FUN_144ed31a0(param_2), lVar3 == 0)) {
    FUN_144ba24f0(0x10,0xdd,0x43,"crypto\\ec\\ec_ameth.c",0x170);
    return 0;
  }
  lVar5 = lVar8;
  lVar6 = lVar8;
  if ((param_4 == 2) || (lVar4 = FUN_144ed3230(param_2), lVar5 = 0, lVar4 == 0)) {
LAB_145295128:
    if (param_4 == 0) {
      lVar4 = FUN_144ed3220(param_2);
      if ((lVar4 != 0) && (lVar6 = FUN_144ed3530(param_2,&local_res10), lVar6 == 0))
      goto LAB_14529523c;
      pcVar7 = "Private-Key";
    }
    else {
      pcVar7 = "Public-Key";
      if (param_4 != 1) {
        pcVar7 = "ECDSA-Parameters";
      }
    }
    iVar2 = FUN_144b9edb0(param_1,param_3,0x80);
    if (iVar2 != 0) {
      uVar1 = FUN_144efc160(lVar3);
      iVar2 = FUN_144ec7640(param_1,"%s: (%d bit)\n",pcVar7,uVar1);
      if ((((0 < iVar2) &&
           ((lVar6 == 0 ||
            ((iVar2 = FUN_144ec7640(param_1,"%*spriv:\n",param_3,&DAT_149e02088), 0 < iVar2 &&
             (iVar2 = FUN_1454dc210(param_1,local_res10,lVar6,param_3 + 4), iVar2 != 0)))))) &&
          ((lVar5 == 0 ||
           ((iVar2 = FUN_144ec7640(param_1,"%*spub:\n",param_3,&DAT_149e02088), 0 < iVar2 &&
            (iVar2 = FUN_1454dc210(param_1,local_38,lVar5,param_3 + 4), iVar2 != 0)))))) &&
         (iVar2 = FUN_1454ebe20(param_1,lVar3,param_3), iVar2 != 0)) {
        lVar8 = 1;
        goto LAB_14529525d;
      }
    }
  }
  else {
    uVar1 = FUN_144ed3260(param_2);
    lVar5 = FUN_144ed3380(param_2,uVar1,&local_38,0);
    if (lVar5 != 0) goto LAB_145295128;
  }
LAB_14529523c:
  FUN_144ba24f0(0x10,0xdd,0x10,"crypto\\ec\\ec_ameth.c",0x1a0);
LAB_14529525d:
  FUN_144ea66f0(local_res10,lVar6,"crypto\\ec\\ec_ameth.c",0x1a1);
  FUN_144ea6530(local_38,"crypto\\ec\\ec_ameth.c",0x1a2);
  return lVar8;
}



// FUNCTION 1452952e0 FUN_1452952e0 body=328 status=ok
// SIG undefined FUN_1452952e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452952e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0x1452952f8;
  lVar4 = 0;
  lVar7 = 0;
  local_38 = 0;
  lVar6 = 0;
  FUN_144efded0(&local_30,local_res20,&local_28,param_2);
  iVar1 = FUN_144ea8fa0(local_30);
  lVar5 = lVar4;
  lVar8 = lVar4;
  if (iVar1 != 0x198) goto LAB_145295403;
  lVar5 = lVar6;
  if ((local_res20[0] == -1) || (local_res20[0] == 5)) {
    lVar2 = FUN_144ed19d0(param_1);
    lVar8 = lVar7;
    if (lVar2 == 0) goto LAB_145295403;
    uVar3 = FUN_144ed31a0(*(undefined8 *)(lVar2 + 0x28));
    local_38 = FUN_144ed2d70();
    lVar8 = lVar4;
    if ((local_38 == 0) || (iVar1 = FUN_144ed31b0(local_38,uVar3), lVar8 = lVar7, iVar1 == 0))
    goto LAB_145295403;
  }
  else {
    local_38 = FUN_145294f80(local_res20[0],local_28);
    lVar5 = lVar4;
    if (local_38 == 0) goto LAB_145295403;
  }
  iVar1 = FUN_144f03e70(param_3);
  local_20 = FUN_144f03e90(param_3);
  lVar5 = lVar6;
  lVar8 = lVar4;
  if ((((local_20 != 0) && (iVar1 != 0)) &&
      (lVar4 = FUN_144ee6a90(&local_38,&local_20,iVar1), lVar8 = lVar7, lVar4 != 0)) &&
     (lVar5 = FUN_144ba6d80(), lVar5 != 0)) {
    FUN_144ba6c70(lVar5,local_38);
    iVar1 = FUN_144ed2610(param_1,lVar5);
    lVar8 = 0;
    if (0 < iVar1) {
      lVar8 = 1;
    }
  }
LAB_145295403:
  FUN_144ed2e50(local_38);
  FUN_144ba6e60(lVar5);
  return lVar8;
}



// FUNCTION 145295430 FUN_145295430 body=258 status=ok
// SIG undefined FUN_145295430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145295430(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  if ((param_2 != 0) && (iVar1 = FUN_144edaca0(param_2,local_res18,local_res10), iVar1 != 0)) {
    uVar4 = 0;
    if (local_res10[0] != 0x3b2) {
      if (local_res10[0] != 0x3b3) {
        return false;
      }
      uVar4 = 1;
    }
    iVar1 = FUN_144ed1710(param_1,0x198,0x400,0x1003,uVar4,0);
    if ((0 < iVar1) && (iVar1 = FUN_144ed1710(param_1,0x198,0x400,0x1004,2,0), 0 < iVar1)) {
      uVar2 = FUN_144ea8ee0(local_res18[0]);
      lVar3 = FUN_144baab30(uVar2);
      if (lVar3 != 0) {
        iVar1 = FUN_144ed1710(param_1,0x198,0x400,0x1005,0,lVar3);
        return 0 < iVar1;
      }
    }
    return false;
  }
  return false;
}



// FUNCTION 145295540 FUN_145295540 body=498 status=ok
// SIG undefined FUN_145295540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145295540(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_20 = 0x14529554f;
  uVar10 = 0;
  uVar9 = 0;
  local_res18 = 0;
  iVar1 = FUN_1454ead20(param_2,&local_res20,&local_20);
  if (iVar1 != 0) {
    uVar2 = FUN_144ea8fa0(*local_res20);
    iVar1 = FUN_145295430(param_1,uVar2);
    if (iVar1 == 0) {
      FUN_144ba24f0(0x10,0xef,0x94,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0x2f0));
    }
    else if (*(int *)local_res20[1] == 0x10) {
      local_28 = *(undefined8 *)(*(longlong *)((int *)local_res20[1] + 2) + 8);
      puVar5 = (undefined8 *)FUN_144efe010(0,&local_28,**(undefined4 **)(local_res20[1] + 8));
      if ((puVar5 != (undefined8 *)0x0) && (lVar6 = FUN_1454eae90(param_2), lVar6 != 0)) {
        uVar3 = FUN_144ea8fa0(*puVar5);
        uVar7 = FUN_144ea8ee0(uVar3);
        lVar8 = FUN_144baaaf0(uVar7);
        if ((lVar8 != 0) && (uVar4 = FUN_144ba3da0(lVar8), (uVar4 & 0xf0007) == 0x10002)) {
          uVar3 = 0;
          iVar1 = FUN_144ba4630(lVar6,lVar8,0,0,0);
          if ((iVar1 != 0) && (iVar1 = FUN_144ba4290(lVar6,puVar5[1]), uVar10 = uVar9, 0 < iVar1)) {
            uVar2 = FUN_144ba3de0(lVar6);
            uVar9 = CONCAT44(uVar3,uVar2);
            iVar1 = FUN_144ed1710(param_1,0x198,0x400,0x1007,uVar9,0);
            uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if ((0 < iVar1) &&
               ((iVar1 = FUN_1454ec900(&local_res18,puVar5,local_20,uVar2), iVar1 != 0 &&
                (iVar1 = FUN_144ed1710(param_1,0x198,0x400,0x1009,CONCAT44(uVar3,iVar1),local_res18)
                , 0 < iVar1)))) {
              local_res18 = 0;
              uVar10 = 1;
            }
          }
        }
      }
      FUN_144efdff0(puVar5);
      FUN_144ea6530(local_res18,"crypto\\ec\\ec_ameth.c",0x317);
      return uVar10;
    }
  }
  return 0;
}



// FUNCTION 145295750 FUN_145295750 body=64 status=ok
// SIG undefined FUN_145295750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295750(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144ba69f0();
  if (piVar1 != (int *)0x0) {
    if (*(longlong *)(piVar1 + 2) != 0) {
      FUN_14259f0c0(*(longlong *)(piVar1 + 2),(longlong)*piVar1);
    }
    FUN_144efe950(piVar1);
    return;
  }
  return;
}



// FUNCTION 1452957a0 FUN_1452957a0 body=72 status=ok
// SIG undefined FUN_1452957a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452957a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_144ba69f0(param_2);
  uVar3 = FUN_144ba69f0(param_1);
  iVar1 = FUN_144ef2c30(uVar3,uVar2);
  return iVar1 == 0;
}



// FUNCTION 1452957f0 FUN_1452957f0 body=140 status=ok
// SIG undefined FUN_1452957f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452957f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) && (param_3 == 0x20)) {
    lVar2 = FUN_144efe930();
    if (lVar2 != 0) {
      iVar1 = FUN_144ef2c50(lVar2,param_2,0x20);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar2;
        return 1;
      }
      FUN_144efe950(lVar2);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 145295880 FUN_145295880 body=160 status=ok
// SIG undefined FUN_145295880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145295880(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    *param_3 = 0x20;
    return 1;
  }
  if ((lVar1 != 0) && (0x1f < *param_3)) {
    iVar2 = FUN_144f03e70(lVar1);
    _Src = (void *)FUN_144f03e90(lVar1);
    memcpy(param_2,_Src,(longlong)iVar2);
    *param_3 = 0x20;
    return 1;
  }
  return 0;
}



// FUNCTION 145295930 FUN_145295930 body=64 status=ok
// SIG undefined FUN_145295930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295930(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144ba69f0();
  if (piVar1 != (int *)0x0) {
    if (*(longlong *)(piVar1 + 2) != 0) {
      FUN_14259f0c0(*(longlong *)(piVar1 + 2),(longlong)*piVar1);
    }
    FUN_144efe950(piVar1);
    return;
  }
  return;
}



// FUNCTION 145295990 FUN_145295990 body=72 status=ok
// SIG undefined FUN_145295990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145295990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_144ba69f0(param_2);
  uVar3 = FUN_144ba69f0(param_1);
  iVar1 = FUN_144ef2c30(uVar3,uVar2);
  return iVar1 == 0;
}



// FUNCTION 1452959e0 FUN_1452959e0 body=136 status=ok
// SIG undefined FUN_1452959e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452959e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return 0;
  }
  lVar2 = FUN_144efe930();
  if (lVar2 != 0) {
    iVar1 = FUN_144ef2c50(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = lVar2;
      return 1;
    }
    FUN_144efe950(lVar2);
  }
  return 0;
}



// FUNCTION 145295a70 FUN_145295a70 body=178 status=ok
// SIG undefined FUN_145295a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145295a70(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar2 = FUN_144f03e70(lVar1);
    *param_3 = (longlong)iVar2;
    return 1;
  }
  if (lVar1 != 0) {
    iVar2 = FUN_144f03e70(lVar1);
    if ((ulonglong)(longlong)iVar2 <= *param_3) {
      iVar2 = FUN_144f03e70(lVar1);
      *param_3 = (longlong)iVar2;
      _Src = (void *)FUN_144f03e90(lVar1);
      memcpy(param_2,_Src,(longlong)iVar2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145295b30 FUN_145295b30 body=130 status=ok
// SIG undefined FUN_145295b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145295b30(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_144bae4b0(*(undefined8 *)(param_1 + 0x28));
  if (((uVar2 & 1) != 0) ||
     (uVar2 = FUN_144bae4b0(*(undefined8 *)(param_2 + 0x28)), (uVar2 & 1) != 0)) {
    return 1;
  }
  iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  if ((iVar1 == 0) &&
     (iVar1 = FUN_144ba0c40(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20)), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145295bc0 FUN_145295bc0 body=99 status=ok
// SIG undefined FUN_145295bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145295bc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145295bcc;
  lVar1 = FUN_144bb6310(0);
  if (lVar1 == 0) {
    FUN_144ba24f0(4,0x93,4,"crypto\\rsa\\rsa_ameth.c",0x8e,uVar2);
    return 0;
  }
  FUN_144ba69a0(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}



// FUNCTION 145295c30 FUN_145295c30 body=26 status=ok
// SIG undefined FUN_145295c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295c30(longlong param_1)

{
  FUN_144bb6330(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145295c50 FUN_145295c50 body=356 status=ok
// SIG undefined FUN_145295c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145295c50(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar7 = 0x145295c5e;
  lVar3 = *(longlong *)(param_2 + 0x28);
  local_res18[0] = 0;
  local_res10 = 0;
  if (**(int **)(param_2 + 0x10) == 0x390) {
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar4 = FUN_144bb6390();
      lVar3 = FUN_145281fa0(*(undefined8 *)(lVar3 + 0x60),uVar4,&local_res10);
      if (lVar3 == 0) {
        return 0;
      }
      uVar5 = 0x10;
    }
  }
  else {
    uVar5 = 5;
  }
  iVar1 = FUN_144bb6330(*(undefined8 *)(param_2 + 0x28),local_res18);
  if (iVar1 < 1) {
    FUN_144ba24f0(4,0x8a,0x41,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar6,0xa6));
    FUN_144f03a80(local_res10);
    return 0;
  }
  uVar4 = FUN_144ea8d60(**(undefined4 **)(param_2 + 0x10));
  iVar2 = FUN_144efe490(param_1,uVar4,0,uVar5,local_res10,local_res18[0],iVar1,uVar7);
  if (iVar2 == 0) {
    FUN_144ba24f0(4,0x8a,0x41,"crypto\\rsa\\rsa_ameth.c",0xad);
    FUN_144f03a80(local_res10);
    FUN_144ea66f0(local_res18[0],(longlong)iVar1,"crypto\\rsa\\rsa_ameth.c",0xaf);
    return 0;
  }
  return 1;
}



// FUNCTION 145295dc0 FUN_145295dc0 body=202 status=ok
// SIG undefined FUN_145295dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145295dc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145295dcc;
  uVar2 = FUN_144efe520(0,local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144bb6310(0,local_res20,local_res18[0]);
  if (lVar3 == 0) {
    FUN_144ba24f0(4,0x96,4,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0xc1));
    return 0;
  }
  iVar1 = FUN_145297030(lVar3,local_18);
  if (iVar1 == 0) {
    FUN_144bad8c0(lVar3);
    return 0;
  }
  FUN_144ba69a0(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
  return 1;
}



// FUNCTION 145295e90 FUN_145295e90 body=26 status=ok
// SIG undefined FUN_145295e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295e90(longlong param_1)

{
  FUN_144bae400(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145295eb0 FUN_145295eb0 body=30 status=ok
// SIG undefined FUN_145295eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295eb0(longlong param_1)

{
  FUN_144ba03d0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  return;
}



// FUNCTION 145295ed0 FUN_145295ed0 body=26 status=ok
// SIG undefined FUN_145295ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295ed0(longlong param_1)

{
  FUN_144bad770(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145295ef0 FUN_145295ef0 body=26 status=ok
// SIG undefined FUN_145295ef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295ef0(longlong param_1)

{
  FUN_144bad8c0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145295f10 FUN_145295f10 body=25 status=ok
// SIG undefined FUN_145295f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295f10(void)

{
  FUN_145297410();
  return;
}



// FUNCTION 145295f30 FUN_145295f30 body=26 status=ok
// SIG undefined FUN_145295f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145295f30(void)

{
  FUN_145297410();
  return;
}



// FUNCTION 145295f50 FUN_145295f50 body=184 status=ok
// SIG undefined FUN_145295f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145295f50(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144ea8fa0(*param_2);
  if (iVar1 == 0x390) {
    uVar2 = FUN_145296fa0(param_2);
    iVar1 = FUN_145297120(param_1,0,uVar2,param_4);
    FUN_144bb6370(uVar2);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        return 1;
      }
LAB_145295fc5:
      uVar2 = FUN_14529e2c0(param_1,param_3,param_4);
      return uVar2;
    }
  }
  else {
    if (param_3 != 0) goto LAB_145295fc5;
    iVar1 = FUN_144b9ebc0(param_1,&DAT_149dfc0af);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145296010 FUN_145296010 body=566 status=ok
// SIG undefined FUN_145296010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296010(longlong param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong local_18 [2];
  
  local_18[1] = 0x14529601c;
  local_18[0] = 0;
  switch(param_2) {
  case 1:
    if (param_3 != 0) {
      return 1;
    }
    FUN_1452a48d0(param_4,0,0,local_18);
    goto LAB_145296092;
  case 2:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    FUN_1452a4900(param_4,local_18);
LAB_145296092:
    if (local_18[0] != 0) {
      uVar3 = FUN_144ea8d60(6);
      FUN_144efde30(local_18[0],uVar3,5);
      return 1;
    }
    break;
  case 3:
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x60);
    if (puVar1 == (undefined8 *)0x0) {
      *param_4 = 0x2a0;
      return 1;
    }
    lVar4 = FUN_1452978e0(*puVar1);
    if ((lVar4 != 0) && (lVar5 = FUN_1452978e0(puVar1[4]), lVar5 != 0)) {
      if ((puVar1[2] == 0) || (iVar2 = FUN_144ef1170(), -1 < iVar2)) {
        if ((puVar1[3] == 0) || (iVar2 = FUN_144ef1170(), iVar2 == 1)) {
          uVar6 = FUN_144ba3cb0(lVar4);
          *param_4 = uVar6;
          return 2;
        }
        uVar7 = 0x2e8;
        uVar6 = 0x8b;
      }
      else {
        uVar7 = 0x2dc;
        uVar6 = 0x96;
      }
      FUN_144ba24f0(4,0x97,uVar6,"crypto\\rsa\\rsa_ameth.c",uVar7);
    }
    FUN_144ba24f0(4,0,0x44,"crypto\\rsa\\rsa_ameth.c",0x204);
    return 0;
  default:
    return 0xfffffffe;
  case 5:
    if (param_3 == 0) {
      uVar3 = FUN_145296920(param_4);
      return uVar3;
    }
    if (param_3 == 1) {
      uVar3 = FUN_145296a00(param_4);
      return uVar3;
    }
    break;
  case 7:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_3 == 0) {
      uVar3 = FUN_145296d40(param_4);
      return uVar3;
    }
    if (param_3 == 1) {
      uVar3 = FUN_145296ae0(param_4);
      return uVar3;
    }
    break;
  case 8:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    *param_4 = 0;
  }
  return 1;
}



// FUNCTION 145296270 FUN_145296270 body=132 status=ok
// SIG undefined FUN_145296270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145296270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145296280;
  iVar1 = FUN_144ea8fa0(*param_4);
  if (iVar1 != 0x390) {
    FUN_144ba24f0(4,0x94,0x9b,"crypto\\rsa\\rsa_ameth.c",0x315,uVar2);
    return 0xffffffff;
  }
  iVar1 = FUN_145297ae0(param_1,0,param_4,param_6);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 145296300 FUN_145296300 body=261 status=ok
// SIG undefined FUN_145296300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296300(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_R9;
  longlong in_stack_00000028;
  int local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x145296310;
  uVar2 = FUN_144ba3d40();
  iVar1 = FUN_144bada00(uVar2,0xffffffff,0x1006,0,local_18);
  if (0 < iVar1) {
    if ((local_18[0] == 1) || (local_18[0] != 6)) {
      return 2;
    }
    lVar3 = FUN_145297a80(uVar2);
    if (lVar3 != 0) {
      if (in_stack_00000028 != 0) {
        lVar4 = FUN_144f03ba0(lVar3);
        if (lVar4 == 0) {
          FUN_144f03a80(lVar3);
          return 0;
        }
        uVar2 = FUN_144ea8d60(0x390);
        FUN_144efde30(in_stack_00000028,uVar2,0x10,lVar4);
      }
      uVar2 = FUN_144ea8d60(0x390);
      FUN_144efde30(in_R9,uVar2,0x10,lVar3);
      return 3;
    }
  }
  return 0;
}



// FUNCTION 145296410 FUN_145296410 body=383 status=ok
// SIG undefined FUN_145296410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296410(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  iVar1 = FUN_144ea8fa0(*param_2);
  if (iVar1 != 0x390) {
    return 0;
  }
  puVar4 = (undefined8 *)FUN_145296fa0(param_2);
  if (((puVar4 != (undefined8 *)0x0) && (lVar5 = FUN_1452978e0(*puVar4), lVar5 != 0)) &&
     (lVar6 = FUN_1452978e0(puVar4[4]), lVar6 != 0)) {
    if (puVar4[2] == 0) {
      iVar1 = 0x14;
    }
    else {
      iVar1 = FUN_144ef1170();
      if (iVar1 < 0) {
        FUN_144ba24f0(4,0x97,0x96,"crypto\\rsa\\rsa_ameth.c",0x2dc);
        goto LAB_14529657c;
      }
    }
    if ((puVar4[3] == 0) || (iVar2 = FUN_144ef1170(), iVar2 == 1)) {
      iVar2 = FUN_144ba3cb0(lVar5);
      if (((iVar2 - 0x2a0U < 3) && (iVar3 = FUN_144ba3cb0(lVar6), iVar2 == iVar3)) &&
         (iVar3 = FUN_144ba3cd0(lVar5), iVar1 == iVar3)) {
        uVar7 = 2;
      }
      iVar1 = FUN_144ba3cd0(lVar5);
      FUN_144bb5f10(param_1,iVar2,0x390,iVar1 << 2,uVar7);
      uVar8 = 1;
    }
    else {
      FUN_144ba24f0(4,0x97,0x8b,"crypto\\rsa\\rsa_ameth.c",0x2e8);
    }
  }
LAB_14529657c:
  FUN_144bb6370(puVar4);
  return uVar8;
}



// FUNCTION 145296590 FUN_145296590 body=28 status=ok
// SIG undefined FUN_145296590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145296590(longlong param_1)

{
  FUN_1454ecae0(*(undefined8 *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 1452965b0 FUN_1452965b0 body=243 status=ok
// SIG undefined FUN_1452965b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452965b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar2 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  local_res18[0] = 0;
  if (**(int **)(param_2 + 0x10) == 0x390) {
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar5 = 1;
      uVar3 = FUN_144bb6390();
      lVar2 = FUN_145281fa0(*(undefined8 *)(lVar2 + 0x60),uVar3,local_res18);
      if (lVar2 == 0) {
        return 0;
      }
      uVar4 = 0x10;
    }
  }
  else {
    uVar4 = 5;
  }
  iVar1 = FUN_144bb62f0(*(undefined8 *)(param_2 + 0x28),&local_res10);
  if (0 < iVar1) {
    uVar3 = FUN_144ea8d60(**(undefined4 **)(param_2 + 0x10));
    iVar1 = FUN_144bb67b0(param_1,uVar3,uVar4,local_res18[0],local_res10,CONCAT44(uVar5,iVar1));
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144ea6530(local_res10,"crypto\\rsa\\rsa_ameth.c",0x5b);
  }
  return 0;
}



// FUNCTION 1452966b0 FUN_1452966b0 body=206 status=ok
// SIG undefined FUN_1452966b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452966b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452966bc;
  uVar2 = FUN_144bb6830(0,local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144bb62d0(0,local_res20,local_res18[0]);
  if (lVar3 == 0) {
    FUN_144ba24f0(4,0x8b,4,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0x69));
    return 0;
  }
  iVar1 = FUN_145297030(lVar3,local_18);
  if (iVar1 != 0) {
    iVar1 = FUN_144ba69a0(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_144bad8c0(lVar3);
  return 0;
}



// FUNCTION 145296780 FUN_145296780 body=174 status=ok
// SIG undefined FUN_145296780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145296780(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144bb6350();
  if (lVar2 != 0) {
    if (param_3 != 0x14) {
      lVar3 = FUN_144efe850();
      *(longlong *)(lVar2 + 0x10) = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_144ef1150(lVar3,param_3), iVar1 == 0)) goto LAB_14529680f;
    }
    iVar1 = FUN_145297780(lVar2,param_1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        param_1 = param_2;
      }
      iVar1 = FUN_1452977e0(lVar2 + 8,param_1);
      if ((iVar1 != 0) && (iVar1 = FUN_145297780(lVar2 + 0x20,param_1), iVar1 != 0)) {
        return lVar2;
      }
    }
  }
LAB_14529680f:
  FUN_144bb6370(lVar2);
  return 0;
}



// FUNCTION 145296830 FUN_145296830 body=228 status=ok
// SIG undefined FUN_145296830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296830(undefined8 *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14529684b;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_1452978e0(*param_1);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_1452978e0(param_1[4]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        if (param_1[2] == 0) {
          *param_4 = 0x14;
        }
        else {
          iVar1 = FUN_144ef1170();
          *param_4 = iVar1;
          if (iVar1 < 0) {
            FUN_144ba24f0(4,0x97,0x96,"crypto\\rsa\\rsa_ameth.c",0x2dc,uVar3);
            return 0;
          }
        }
        if ((param_1[3] != 0) && (iVar1 = FUN_144ef1170(), iVar1 != 1)) {
          FUN_144ba24f0(4,0x97,0x8b,"crypto\\rsa\\rsa_ameth.c",0x2e8,uVar3);
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145296920 FUN_145296920 body=213 status=ok
// SIG undefined FUN_145296920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296920(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 uVar4;
  
  uVar4 = 0x145296930;
  local_res10[0] = 1;
  lVar2 = FUN_1454eb240();
  FUN_1454eb250(param_1,0,0,0,local_res18,uVar4);
  if ((lVar2 != 0) && (iVar1 = FUN_144bada00(lVar2,0xffffffff,0x1006,0,local_res10), iVar1 < 1)) {
    return 0;
  }
  if (local_res10[0] == 1) {
    uVar4 = FUN_144ea8d60(6);
    lVar2 = 0;
    uVar3 = 5;
  }
  else {
    if ((local_res10[0] != 6) || (lVar2 = FUN_145297a80(lVar2), lVar2 == 0)) {
      return 0;
    }
    uVar4 = FUN_144ea8d60(0x390);
    uVar3 = 0x10;
  }
  FUN_144efde30(local_res18[0],uVar4,uVar3,lVar2);
  return 1;
}



// FUNCTION 145296a00 FUN_145296a00 body=222 status=ok
// SIG undefined FUN_145296a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296a00(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined8 *local_res18 [2];
  undefined8 **ppuVar3;
  undefined8 uVar5;
  undefined4 uVar4;
  
  uVar5 = 0x145296a10;
  puVar2 = (undefined8 *)FUN_1454eb240();
  ppuVar3 = local_res18;
  FUN_1454eb250(param_1,0,0,0,ppuVar3,uVar5);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  iVar1 = FUN_144ea8fa0(*local_res18[0]);
  if (iVar1 == 0x390) {
    uVar5 = FUN_145297ae0(0,puVar2,local_res18[0],0);
    return uVar5;
  }
  if (*(int *)*puVar2 == 0x390) {
    FUN_144ba24f0(4,0x9e,0x90,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0x2fc));
    return 0;
  }
  if (iVar1 != 6) {
    iVar1 = FUN_144edaca0(iVar1,0,local_res10);
    if ((iVar1 == 0) || (local_res10[0] != 6)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 145296ae0 FUN_145296ae0 body=597 status=ok
// SIG undefined FUN_145296ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145296ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar13;
  ulonglong uVar12;
  undefined8 uVar14;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar14 = 0x145296af2;
  uVar9 = 0xffffffff;
  uVar8 = 0xffffffff;
  uVar10 = 0;
  uVar11 = 0;
  lVar4 = FUN_1454ea540();
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = FUN_1454ea560(param_1,0,0,&local_res10);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_144ea8fa0(*local_res10);
  if (iVar3 == 6) {
    return 1;
  }
  if (iVar3 != 0x397) {
    FUN_144ba24f0(4,0x9f,0xa2,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3a8),uVar14);
    return 0xffffffff;
  }
  puVar5 = (undefined8 *)FUN_145297d50(local_res10);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_144ba24f0(4,0x9f,0xa1,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3af),uVar14);
  }
  else {
    lVar6 = FUN_1452978e0(puVar5[3]);
    if ((lVar6 != 0) && (lVar7 = FUN_1452978e0(*puVar5), lVar7 != 0)) {
      puVar1 = (undefined8 *)puVar5[2];
      if (puVar1 != (undefined8 *)0x0) {
        iVar3 = FUN_144ea8fa0(*puVar1);
        if (iVar3 != 0x3a7) {
          FUN_144ba24f0(4,0x9f,0xa3,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3be));
          goto LAB_145296d1f;
        }
        if (*(int *)puVar1[1] != 4) {
          FUN_144ba24f0(4,0x9f,0xa0,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3c2));
          uVar9 = uVar8;
          goto LAB_145296d1f;
        }
        lVar2 = *(longlong *)((int *)puVar1[1] + 2);
        uVar10 = *(undefined8 *)(lVar2 + 8);
        *(undefined8 *)(lVar2 + 8) = 0;
        uVar11 = **(undefined4 **)(puVar1[1] + 8);
      }
      uVar12 = 0;
      iVar3 = FUN_144bada00(lVar4,0xffffffff,0x1001,4,0);
      uVar9 = uVar8;
      if (((0 < iVar3) &&
          (iVar3 = FUN_144ed1710(lVar4,6,0x300,0x1009,uVar12 & 0xffffffff00000000,lVar7), 0 < iVar3)
          ) && (iVar3 = FUN_144bada00(lVar4,0x3f8,0x1005,0,lVar6), 0 < iVar3)) {
        iVar3 = FUN_144ed1710(lVar4,6,0x300,0x100a,uVar11,uVar10);
        uVar9 = 0xffffffff;
        if (0 < iVar3) {
          uVar9 = 1;
        }
      }
    }
  }
LAB_145296d1f:
  FUN_144bb63c0(puVar5);
  return uVar9;
}



// FUNCTION 145296d40 FUN_145296d40 body=608 status=ok
// SIG undefined FUN_145296d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145296d40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  int *in_stack_ffffffffffffffb8;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145296d52;
  lVar7 = 0;
  lVar6 = 0;
  local_res18 = 0;
  lVar3 = FUN_1454ea540();
  local_res10[0] = 1;
  iVar1 = FUN_1454ea560(param_1,0,0,&local_res20);
  if (0 < iVar1) {
    if (lVar3 != 0) {
      in_stack_ffffffffffffffb8 = local_res10;
      iVar1 = FUN_144bada00(lVar3,0xffffffff,0x1006,0,in_stack_ffffffffffffffb8);
      if (iVar1 < 1) {
        return 0;
      }
    }
    if (local_res10[0] == 1) {
      uVar4 = FUN_144ea8d60(6);
      FUN_144efde30(local_res20,uVar4,5);
      return 1;
    }
    if (local_res10[0] == 4) {
      iVar1 = FUN_144ed1710(lVar3,6,0x300,0x100b,
                            (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000,&local_38);
      lVar5 = lVar7;
      if (0 < iVar1) {
        puVar8 = &local_30;
        iVar1 = FUN_144bada00(lVar3,0x3f8,0x1008,0,puVar8);
        lVar5 = 0;
        if ((((0 < iVar1) &&
             (iVar1 = FUN_144ed1710(lVar3,6,0x300,0x100c,(ulonglong)puVar8 & 0xffffffff00000000,
                                    &local_28), -1 < iVar1)) &&
            (lVar5 = FUN_144bb63a0(), lVar7 = lVar6, lVar5 != 0)) &&
           ((iVar2 = FUN_145297780(lVar5,local_38), iVar2 != 0 &&
            (iVar2 = FUN_1452977e0(lVar5 + 8,local_30), iVar2 != 0)))) {
          if (0 < iVar1) {
            lVar3 = FUN_144efdfd0();
            *(longlong *)(lVar5 + 0x10) = lVar3;
            if ((lVar3 == 0) || (lVar3 = FUN_144efe930(), lVar3 == 0)) goto LAB_145296f7c;
            iVar1 = FUN_144ef2c50(lVar3,local_28,iVar1);
            if (iVar1 == 0) {
              FUN_144efe950(lVar3);
              goto LAB_145296f7c;
            }
            uVar4 = FUN_144ea8d60(0x3a7);
            FUN_144efde30(*(undefined8 *)(lVar5 + 0x10),uVar4,4,lVar3);
          }
          uVar4 = FUN_144bb63e0();
          lVar3 = FUN_145281fa0(lVar5,uVar4,&local_res18);
          if (lVar3 != 0) {
            uVar4 = FUN_144ea8d60(0x397);
            FUN_144efde30(local_res20,uVar4,0x10,local_res18);
            local_res18 = 0;
            lVar7 = 1;
          }
        }
      }
LAB_145296f7c:
      FUN_144bb63c0(lVar5);
      FUN_144f03a80(local_res18);
      return lVar7;
    }
  }
  return 0;
}



// FUNCTION 145296fa0 FUN_145296fa0 body=143 status=ok
// SIG undefined FUN_145296fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145296fa0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_144bb6390();
  lVar4 = FUN_144ed07c0(uVar3,*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(lVar4 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = FUN_144ea8fa0(*puVar1);
    if (iVar2 == 0x38f) {
      uVar3 = FUN_144efde20();
      lVar5 = FUN_144ed07c0(uVar3,puVar1[1]);
    }
    else {
      lVar5 = 0;
    }
    *(longlong *)(lVar4 + 0x20) = lVar5;
    if (lVar5 == 0) {
      FUN_144bb6370(lVar4);
      return 0;
    }
  }
  return lVar4;
}



// FUNCTION 145297030 FUN_145297030 body=175 status=ok
// SIG undefined FUN_145297030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145297030(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res18 [2];
  undefined8 local_res20;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x145297040;
  FUN_144efded0(&local_res20,local_res18,local_18,param_2);
  iVar1 = FUN_144ea8fa0(local_res20);
  if ((iVar1 == 0x390) && (local_res18[0] != -1)) {
    if (local_res18[0] != 0x10) {
      FUN_144ba24f0(4,0xa4,0x95,"crypto\\rsa\\rsa_ameth.c",0x42);
      return false;
    }
    lVar2 = FUN_145296fa0(param_2);
    *(longlong *)(param_1 + 0x60) = lVar2;
    return lVar2 != 0;
  }
  return true;
}



// FUNCTION 1452970e0 FUN_1452970e0 body=63 status=ok
// SIG undefined FUN_1452970e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452970e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144ea8fa0(*param_1);
  if (iVar1 != 0x38f) {
    return 0;
  }
  uVar2 = FUN_144efde20();
  uVar2 = FUN_144ed07c0(uVar2,param_1[1]);
  return uVar2;
}



// FUNCTION 145297120 FUN_145297120 body=738 status=ok
// SIG undefined FUN_145297120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_145297120(undefined8 param_1,int param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar3 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  iVar1 = FUN_144b9edb0(param_1,param_4,0x80);
  puVar5 = puVar3;
  puVar8 = puVar3;
  if (iVar1 == 0) goto LAB_1452973df;
  if (param_2 == 0) {
    if (param_3 == (longlong *)0x0) {
      iVar1 = FUN_144b9ebc0(param_1,"(INVALID PSS PARAMETERS)\n");
      return (undefined8 *)(ulonglong)(0 < iVar1);
    }
  }
  else {
    if (param_3 == (longlong *)0x0) {
      iVar1 = FUN_144b9ebc0(param_1,"No PSS parameter restrictions\n");
      return (undefined8 *)(ulonglong)(0 < iVar1);
    }
    iVar1 = FUN_144b9ebc0(param_1,"PSS parameter restrictions:");
    if (iVar1 < 1) {
      return (undefined8 *)0x0;
    }
  }
  iVar1 = FUN_144b9ebc0(param_1,&DAT_149dfc0af);
  puVar8 = puVar7;
  if (iVar1 < 1) goto LAB_1452973df;
  iVar1 = param_4 + 2;
  if (param_2 == 0) {
    iVar1 = param_4;
  }
  iVar2 = FUN_144b9edb0(param_1,iVar1,0x80);
  puVar8 = puVar3;
  if ((iVar2 == 0) ||
     (iVar2 = FUN_144b9ebc0(param_1,"Hash Algorithm: "), puVar8 = puVar7, iVar2 < 1))
  goto LAB_1452973df;
  if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    iVar2 = FUN_144b9ebc0(param_1,"sha1 (default)");
  }
  else {
    iVar2 = FUN_144ed09c0(param_1,*(undefined8 *)*param_3);
  }
  if ((((iVar2 < 1) || (iVar2 = FUN_144b9ebc0(param_1,&DAT_149dfc0af), puVar5 = puVar4, iVar2 < 1))
      || (iVar2 = FUN_144b9edb0(param_1,iVar1,0x80), iVar2 == 0)) ||
     (iVar2 = FUN_144b9ebc0(param_1,"Mask Algorithm: "), iVar2 < 1)) goto LAB_1452973df;
  if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
    pcVar6 = "mgf1 with sha1 (default)";
LAB_1452972e8:
    iVar2 = FUN_144b9ebc0(param_1,pcVar6);
  }
  else {
    iVar2 = FUN_144ed09c0(param_1,*(undefined8 *)param_3[1]);
    if ((iVar2 < 1) || (iVar2 = FUN_144b9ebc0(param_1," with "), iVar2 < 1)) goto LAB_1452973df;
    puVar3 = (undefined8 *)FUN_1452970e0(param_3[1]);
    if (puVar3 == (undefined8 *)0x0) {
      pcVar6 = "INVALID";
      goto LAB_1452972e8;
    }
    iVar2 = FUN_144ed09c0(param_1,*puVar3);
  }
  puVar8 = puVar3;
  if (0 < iVar2) {
    FUN_144b9ebc0(param_1,&DAT_149dfc0af);
    iVar2 = FUN_144b9edb0(param_1,iVar1,0x80);
    if (iVar2 != 0) {
      pcVar6 = "";
      if (param_2 != 0) {
        pcVar6 = "Minimum";
      }
      iVar2 = FUN_144ec7640(param_1,"%s Salt Length: 0x",pcVar6);
      if (0 < iVar2) {
        if (param_3[2] == 0) {
          iVar2 = FUN_144b9ebc0(param_1,"14 (default)");
        }
        else {
          iVar2 = FUN_1454ec9a0();
        }
        if (0 < iVar2) {
          FUN_144b9ebc0(param_1,&DAT_149dfc0af);
          iVar1 = FUN_144b9edb0(param_1,iVar1,0x80);
          if ((iVar1 != 0) && (iVar1 = FUN_144b9ebc0(param_1,"Trailer Field: 0x"), 0 < iVar1)) {
            if (param_3[3] == 0) {
              iVar1 = FUN_144b9ebc0(param_1,"BC (default)");
            }
            else {
              iVar1 = FUN_1454ec9a0();
            }
            if (0 < iVar1) {
              FUN_144b9ebc0(param_1,&DAT_149dfc0af);
              puVar5 = (undefined8 *)&DAT_00000001;
            }
          }
        }
      }
    }
  }
LAB_1452973df:
  FUN_144efdff0(puVar8);
  return puVar5;
}



// FUNCTION 145297410 FUN_145297410 body=879 status=ok
// SIG undefined FUN_145297410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145297410(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar13 = 0;
  uVar2 = uVar13;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    uVar2 = FUN_144ba03d0();
  }
  iVar3 = FUN_144babbf0(*(undefined8 *)(lVar1 + 0x58));
  iVar4 = FUN_144b9edb0(param_1,param_3,0x80);
  if (iVar4 != 0) {
    puVar12 = &DAT_14997781c;
    if (**(int **)(param_2 + 0x10) == 0x390) {
      puVar12 = &DAT_149bf6b68;
    }
    iVar4 = FUN_144ec7640(param_1,&DAT_14bd49f77,puVar12);
    if (0 < iVar4) {
      if ((param_4 == 0) || (*(longlong *)(lVar1 + 0x28) == 0)) {
        iVar3 = FUN_144ec7640(param_1,"Public-Key: (%d bit)\n",uVar2);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar8 = "Modulus:";
        pcVar9 = "Exponent:";
      }
      else {
        iVar4 = 2;
        if (0 < iVar3) {
          iVar4 = iVar3 + 2;
        }
        iVar3 = FUN_144ec7640(param_1,"Private-Key: (%d bit, %d primes)\n",uVar2,iVar4);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar8 = "modulus:";
        pcVar9 = "publicExponent:";
      }
      iVar3 = FUN_1454dc320(param_1,pcVar8,*(undefined8 *)(lVar1 + 0x18),0,param_3);
      uVar13 = 0;
      if ((iVar3 != 0) &&
         (iVar3 = FUN_1454dc320(param_1,pcVar9,*(undefined8 *)(lVar1 + 0x20),0,param_3), iVar3 != 0)
         ) {
        if (param_4 != 0) {
          iVar3 = FUN_1454dc320(param_1,"privateExponent:",*(undefined8 *)(lVar1 + 0x28),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_1454dc320(param_1,"prime1:",*(undefined8 *)(lVar1 + 0x30),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_1454dc320(param_1,"prime2:",*(undefined8 *)(lVar1 + 0x38),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_1454dc320(param_1,"exponent1:",*(undefined8 *)(lVar1 + 0x40),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_1454dc320(param_1,"exponent2:",*(undefined8 *)(lVar1 + 0x48),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_1454dc320(param_1,"coefficient:",*(undefined8 *)(lVar1 + 0x50),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar4 = 0;
          iVar3 = FUN_144babbf0(*(undefined8 *)(lVar1 + 0x58));
          if (0 < iVar3) {
            iVar3 = 3;
            do {
              uVar10 = 0;
              puVar7 = (ulonglong *)FUN_144babc00(*(undefined8 *)(lVar1 + 0x58),iVar4);
              uVar11 = uVar10;
              do {
                iVar5 = FUN_144b9edb0(param_1,param_3,0x80);
                if (iVar5 == 0) {
                  return 0;
                }
                iVar5 = (int)uVar10;
                if (iVar5 == 0) {
                  iVar6 = FUN_144ec7640(param_1,"prime%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = *puVar7;
                }
                else if (iVar5 == 1) {
                  iVar6 = FUN_144ec7640(param_1,"exponent%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = puVar7[1];
                }
                else if (iVar5 == 2) {
                  iVar6 = FUN_144ec7640(param_1,"coefficient%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = puVar7[2];
                }
                iVar6 = FUN_1454dc320(param_1,&DAT_149e02088,uVar11,0,param_3);
                if (iVar6 == 0) {
                  return 0;
                }
                uVar10 = (ulonglong)(iVar5 + 1U);
              } while ((int)(iVar5 + 1U) < 3);
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 1;
              iVar5 = FUN_144babbf0(*(undefined8 *)(lVar1 + 0x58));
            } while (iVar4 < iVar5);
          }
        }
        uVar13 = 0;
        if ((**(int **)(param_2 + 0x10) != 0x390) ||
           (iVar3 = FUN_145297120(param_1,1,*(undefined8 *)(lVar1 + 0x60),param_3), iVar3 != 0)) {
          uVar13 = 1;
        }
      }
    }
  }
  return uVar13;
}



// FUNCTION 145297780 FUN_145297780 body=94 status=ok
// SIG undefined FUN_145297780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145297780(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_144ba3cb0(param_2);
    if (iVar1 != 0x40) {
      lVar2 = FUN_144efdfd0();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      FUN_144efdf10(lVar2,param_2);
    }
  }
  return 1;
}



// FUNCTION 1452977e0 FUN_1452977e0 body=247 status=ok
// SIG undefined FUN_1452977e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452977e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar2 = 0;
  local_res8 = 0;
  *param_1 = 0;
  if ((param_2 == 0) || (iVar1 = FUN_144ba3cb0(param_2), iVar1 == 0x40)) {
    return true;
  }
  iVar1 = FUN_144ba3cb0(param_2);
  if (iVar1 != 0x40) {
    lVar2 = FUN_144efdfd0();
    if (lVar2 == 0) goto LAB_1452978a5;
    FUN_144efdf10(lVar2,param_2);
  }
  uVar3 = FUN_144efde20();
  lVar4 = FUN_145281fa0(lVar2,uVar3,&local_res8);
  if (lVar4 != 0) {
    lVar4 = FUN_144efdfd0();
    *param_1 = lVar4;
    if (lVar4 != 0) {
      uVar3 = FUN_144ea8d60(0x38f);
      FUN_144efde30(*param_1,uVar3,0x10,local_res8);
      local_res8 = 0;
    }
  }
LAB_1452978a5:
  FUN_144f03a80(local_res8);
  FUN_144efdff0(lVar2);
  return *param_1 != 0;
}



// FUNCTION 1452978e0 FUN_1452978e0 body=108 status=ok
// SIG undefined FUN_1452978e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452978e0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar2 = FUN_144bab020();
    return lVar2;
  }
  uVar1 = FUN_144ea8fa0(*param_1);
  uVar3 = FUN_144ea8ee0(uVar1);
  lVar2 = FUN_144baab30(uVar3);
  if (lVar2 == 0) {
    FUN_144ba24f0(4,0x9c,0xa6,"crypto\\rsa\\rsa_ameth.c",0x24a);
  }
  return lVar2;
}



// FUNCTION 145297950 FUN_145297950 body=291 status=ok
// SIG undefined FUN_145297950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145297950(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffe8;
  uint uVar4;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = FUN_144ed19d0();
  iVar2 = FUN_144ed1710(param_1,0xffffffff,0xf8,0xd,(ulonglong)uVar4 << 0x20,&local_res18);
  if (((iVar2 < 1) || (iVar2 = FUN_144bada00(param_1,0x3f8,0x1008,0,&local_res20), iVar2 < 1)) ||
     (iVar2 = FUN_144bada00(param_1,0x18,0x1007,0,local_res10), iVar2 == 0)) {
    return 0;
  }
  if (local_res10[0] == -1) {
    local_res10[0] = FUN_144ba3cd0(local_res18);
  }
  else if (local_res10[0] + 3U < 2) {
    iVar2 = FUN_144ba3cd0(local_res18);
    local_res10[0] = FUN_144ba6830(uVar3);
    local_res10[0] = local_res10[0] + (-2 - iVar2);
    bVar1 = FUN_144ba67b0(uVar3);
    if ((bVar1 & 7) == 1) {
      local_res10[0] = local_res10[0] + -1;
    }
    if (local_res10[0] < 0) {
      return 0;
    }
  }
  uVar3 = FUN_145296780(local_res18,local_res20,local_res10[0]);
  return uVar3;
}



// FUNCTION 145297a80 FUN_145297a80 body=83 status=ok
// SIG undefined FUN_145297a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145297a80(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145297950();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_144bb6390();
  uVar2 = FUN_145281fa0(lVar1,uVar2,0);
  FUN_144bb6370(lVar1);
  return uVar2;
}



// FUNCTION 145297ae0 FUN_145297ae0 body=609 status=ok
// SIG undefined FUN_145297ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145297ae0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar9;
  uint uVar11;
  longlong lVar10;
  
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar7 = 0xffffffff;
  local_res10 = param_2;
  iVar1 = FUN_144ea8fa0(*param_3);
  if (iVar1 != 0x390) {
    FUN_144ba24f0(4,0x9b,0x9b,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar11,0x2a5));
    return 0xffffffff;
  }
  puVar4 = (undefined8 *)FUN_145296fa0(param_3);
  if (((puVar4 == (undefined8 *)0x0) || (lVar5 = FUN_1452978e0(*puVar4), lVar5 == 0)) ||
     (lVar6 = FUN_1452978e0(puVar4[4]), lVar6 == 0)) {
LAB_145297bba:
    uVar9 = CONCAT44(uVar11,0x2ac);
    uVar7 = 0x95;
  }
  else {
    if (puVar4[2] != 0) {
      iVar1 = FUN_144ef1170();
      if (-1 < iVar1) goto LAB_145297c0c;
      uVar7 = CONCAT44(uVar11,0x2dc);
      uVar8 = 0x96;
LAB_145297bb5:
      FUN_144ba24f0(4,0x97,uVar8,"crypto\\rsa\\rsa_ameth.c",uVar7);
      uVar11 = (uint)((ulonglong)uVar7 >> 0x20);
      goto LAB_145297bba;
    }
    iVar1 = 0x14;
LAB_145297c0c:
    if ((puVar4[3] != 0) && (iVar2 = FUN_144ef1170(), iVar2 != 1)) {
      uVar7 = CONCAT44(uVar11,0x2e8);
      uVar8 = 0x8b;
      goto LAB_145297bb5;
    }
    if (param_4 != 0) {
      iVar2 = FUN_144ba6360(param_1,&local_res10,lVar5,0,param_4);
      if (iVar2 == 0) goto LAB_145297bde;
LAB_145297ccb:
      iVar2 = FUN_144bada00(local_res10,0xffffffff,0x1001,6,0);
      if (((0 < iVar2) && (iVar1 = FUN_144bada00(local_res10,0x18,0x1002,iVar1,0), 0 < iVar1)) &&
         (iVar1 = FUN_144bada00(local_res10,0x3f8,0x1005,0,lVar6), uVar7 = 0xffffffff, 0 < iVar1)) {
        uVar7 = 1;
      }
      goto LAB_145297bde;
    }
    lVar10 = (ulonglong)uVar11 << 0x20;
    iVar2 = FUN_144ed1710(local_res10,0xffffffff,0xf8,0xd,lVar10,local_res18);
    uVar8 = (undefined4)((ulonglong)lVar10 >> 0x20);
    if (iVar2 < 1) goto LAB_145297bde;
    iVar2 = FUN_144ba3cb0(local_res18[0]);
    iVar3 = FUN_144ba3cb0(lVar5);
    if (iVar3 == iVar2) goto LAB_145297ccb;
    uVar9 = CONCAT44(uVar8,0x2b9);
    uVar7 = 0x9e;
  }
  FUN_144ba24f0(4,0x9b,uVar7,"crypto\\rsa\\rsa_ameth.c",uVar9);
  uVar7 = 0xffffffff;
LAB_145297bde:
  FUN_144bb6370(puVar4);
  return uVar7;
}



// FUNCTION 145297d50 FUN_145297d50 body=143 status=ok
// SIG undefined FUN_145297d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145297d50(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_144bb63e0();
  lVar4 = FUN_144ed07c0(uVar3,*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(lVar4 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = FUN_144ea8fa0(*puVar1);
    if (iVar2 == 0x38f) {
      uVar3 = FUN_144efde20();
      lVar5 = FUN_144ed07c0(uVar3,puVar1[1]);
    }
    else {
      lVar5 = 0;
    }
    *(longlong *)(lVar4 + 0x18) = lVar5;
    if (lVar5 == 0) {
      FUN_144bb63c0(lVar4);
      return 0;
    }
  }
  return lVar4;
}



// FUNCTION 145297df0 FUN_145297df0 body=64 status=ok
// SIG undefined FUN_145297df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145297df0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144ba69f0();
  if (piVar1 != (int *)0x0) {
    if (*(longlong *)(piVar1 + 2) != 0) {
      FUN_14259f0c0(*(longlong *)(piVar1 + 2),(longlong)*piVar1);
    }
    FUN_144efe950(piVar1);
    return;
  }
  return;
}



// FUNCTION 145297e40 FUN_145297e40 body=72 status=ok
// SIG undefined FUN_145297e40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145297e40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_144ba69f0(param_2);
  uVar3 = FUN_144ba69f0(param_1);
  iVar1 = FUN_144ef2c30(uVar3,uVar2);
  return iVar1 == 0;
}



// FUNCTION 145297e90 FUN_145297e90 body=141 status=ok
// SIG undefined FUN_145297e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145297e90(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) && (param_3 == 0x10)) {
    lVar2 = FUN_144efe930();
    if (lVar2 != 0) {
      iVar1 = FUN_144ef2c50(lVar2,param_2,0x10);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar2;
        return 1;
      }
      FUN_144efe950(lVar2);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 145297f20 FUN_145297f20 body=165 status=ok
// SIG undefined FUN_145297f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145297f20(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    *param_3 = 0x10;
    return 1;
  }
  if ((lVar1 != 0) && (0xf < *param_3)) {
    iVar2 = FUN_144f03e70(lVar1);
    _Src = (void *)FUN_144f03e90(lVar1);
    memcpy(param_2,_Src,(longlong)iVar2);
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}



// FUNCTION 145297fd0 FUN_145297fd0 body=99 status=ok
// SIG undefined FUN_145297fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145297fd0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x145297fdc;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c7fc5b0,FUN_145298290,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 145298040 FUN_145298040 body=5 status=ok
// SIG undefined FUN_145298040(void)

undefined8 FUN_145298040(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



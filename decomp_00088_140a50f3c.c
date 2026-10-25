// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a50f3c FUN_140a50f3c body=121 status=ok
// SIG undefined FUN_140a50f3c(void)

void FUN_140a50f3c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1b0);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x204) < iVar1) {
      FUN_140a5356c(param_1 + 0x1f8);
      iVar1 = *(int *)(param_2 + 0x1b0);
    }
    if (iVar1 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x1a8);
      lVar2 = (longlong)iVar1 * 0xc0;
      do {
        FUN_140a50fb6(param_1 + 0x1e0,lVar3);
        lVar3 = lVar3 + 0xc0;
        lVar2 = lVar2 + -0xc0;
      } while (lVar2 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 140a50fb6 FUN_140a50fb6 body=92 status=ok
// SIG undefined FUN_140a50fb6(void)

int FUN_140a50fb6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140a564aa(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_140a51012(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 140a51012 FUN_140a51012 body=390 status=ok
// SIG undefined FUN_140a51012(void)

void FUN_140a51012(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140a5119a();
  if (*(char *)(param_3 + 0x94) == '\x01') {
    local_34 = *(undefined1 *)(param_3 + 0x94);
    local_38 = *(undefined4 *)(param_3 + 0x90);
    local_30 = *(undefined8 *)(param_3 + 0x98);
    *(undefined8 *)(param_3 + 0x98) = 0;
    local_28 = *(undefined4 *)(param_3 + 0xa0);
    *(undefined4 *)(param_3 + 0xa0) = 0;
    FUN_140a513ea(param_1 + 0x4c,param_1 + 0x20,&local_38);
    FUN_1449db362(&local_30);
  }
  if (*(char *)(param_3 + 0xac) == '\x01') {
    local_4c = *(undefined1 *)(param_3 + 0xac);
    local_50 = *(undefined4 *)(param_3 + 0xa8);
    local_48 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_3 + 0xb0) = 0;
    local_40 = *(undefined4 *)(param_3 + 0xb8);
    *(undefined4 *)(param_3 + 0xb8) = 0;
    FUN_140a513ea(param_1 + 0x50,param_1 + 0x20,&local_50);
    FUN_1449db362(&local_48);
  }
  if (*(char *)(param_3 + 0x88) == '\x01') {
    local_88 = *(undefined4 *)(param_3 + 0x50);
    local_80 = *(undefined4 *)(param_3 + 0x58);
    local_7c = *(undefined1 *)(param_3 + 0x5c);
    local_78 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = 0;
    local_70 = *(undefined4 *)(param_3 + 0x68);
    *(undefined4 *)(param_3 + 0x68) = 0;
    local_64 = *(undefined1 *)(param_3 + 0x74);
    local_68 = *(undefined4 *)(param_3 + 0x70);
    local_60 = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(param_3 + 0x78) = 0;
    local_58 = *(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_3 + 0x80) = 0;
    FUN_140a512a8(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5119a FUN_140a5119a body=91 status=ok
// SIG undefined FUN_140a5119a(void)

void FUN_140a5119a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  FUN_140a511f6();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    FUN_140a55872(param_1 + 0x28,param_1 + 0x20,param_3 + 0x18);
  }
  puVar1 = (undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_3 + 0x44) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = *puVar1;
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  return;
}



// FUNCTION 140a511f6 FUN_140a511f6 body=178 status=ok
// SIG undefined FUN_140a511f6(void)

void FUN_140a511f6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (*(longlong *)(param_1 + 0x10) != DAT_14c98dec8) {
      if (*(longlong *)(param_1 + 8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      }
      FUN_14066af28(*(longlong *)(param_1 + 0x10),uVar6);
    }
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 140a512a8 FUN_140a512a8 body=320 status=ok
// SIG undefined FUN_140a512a8(void)

void FUN_140a512a8(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *param_2;
  *(int *)(param_1 + 0x40) = iVar3;
  lVar1 = param_1 + 0x20;
  if (iVar3 == 2) {
    if ((char)param_2[9] == '\x01') {
      FUN_140a513ea(param_1 + 0x48,lVar1,param_2 + 8);
    }
    else {
      FUN_14697cee2(param_1 + 0x48,lVar1,param_2 + 2);
    }
  }
  else {
    local_24 = 0x3f800000;
    FUN_140a51568(param_1 + 0x48,lVar1);
  }
  FUN_140a513ea(param_1 + 0x44,lVar1,param_2 + 2);
  plVar2 = (longlong *)(param_2 + 10);
  if (param_2[0xc] == 0) {
LAB_140a5130b:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar2;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      param_2[0xc] = 0;
      goto LAB_140a5130b;
    }
  }
  plVar2 = (longlong *)(param_2 + 4);
  if (param_2[6] != 0) {
    puVar4 = (undefined8 *)*plVar2;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a5132d;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    param_2[6] = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_140a5132d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a513ea FUN_140a513ea body=378 status=ok
// SIG undefined FUN_140a513ea(void)

undefined4 FUN_140a513ea(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_140a5141f:
    if (*(char *)(param_3 + 1) != '\x01') {
      uVar3 = (**(code **)*param_2)(param_2);
      FUN_1400b73c8(uVar3,param_1);
      uVar2 = 0;
      goto LAB_140a5147b;
    }
    *(undefined1 *)(param_3 + 1) = 0;
    if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_140a51446:
      local_38 = CONCAT44(local_38._4_4_,*param_3);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
      if (cVar1 == '\0') goto LAB_140a51446;
      local_38 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = 0;
      local_30 = param_3[4];
      param_3[4] = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140a51568(param_1,param_2,&local_38);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5141f;
    *(undefined1 *)(param_3 + 1) = 0;
    if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_140a5153e:
      local_38 = CONCAT44(local_38._4_4_,*param_3);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
      if (cVar1 == '\0') goto LAB_140a5153e;
      local_38 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = 0;
      local_30 = param_3[4];
      param_3[4] = 0;
      local_28 = 1;
    }
    uVar2 = FUN_14697ccd0(param_1,param_2,&local_38);
  }
  (*(code *)(&PTR_caseD_2_149ef0840)[local_28])(&local_38);
LAB_140a5147b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a51566 caseD_2 body=1 status=ok
// SIG undefined caseD_2(void)

void switchD_143c3d4dc::caseD_2(void)

{
  return;
}



// FUNCTION 140a51568 FUN_140a51568 body=126 status=ok
// SIG undefined FUN_140a51568(void)

byte FUN_140a51568(float *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)*param_2)(param_2);
  FUN_1400b73c8(uVar3,param_1);
  (**(code **)*param_2)(param_2);
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    *param_1 = fVar2;
    (**(code **)*param_2)(param_2);
    FUN_140a52700(param_2,param_1,0);
  }
  return -(fVar1 != fVar2) & 1;
}



// FUNCTION 140a515e6 FUN_140a515e6 body=1415 status=ok
// SIG undefined FUN_140a515e6(void)

void FUN_140a515e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined1 auStack_158 [40];
  longlong *local_130 [2];
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108 [11];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 *local_90;
  int local_88;
  undefined2 local_80 [4];
  undefined8 *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char local_50;
  undefined1 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_80[0] = *(undefined2 *)(param_2 + 0x88);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_14096c7c0(&local_78,param_2 + 0x90);
  FUN_140a52028(param_1 + 0x3a,param_1,local_80);
  if (local_70 == 0) {
LAB_140a5165e:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_140a5165e;
  }
  lVar1 = param_1 + 0x39;
  if (*(longlong **)(param_2 + 0x78) == (longlong *)0x0 || *(int *)(param_2 + 0x80) == 0) {
LAB_140a5168f:
    if (*(char *)(param_2 + 0x71) == '\x01') {
      pcVar6 = (char *)FUN_140a51b6e(param_2 + 0x70);
      FUN_1400b73c8(param_1,lVar1);
      if (*(char *)(param_1 + 0x39) != *pcVar6) {
        *(char *)(param_1 + 0x39) = *pcVar6;
        FUN_14094e0ca(param_1,lVar1,0,0);
      }
    }
    else {
      FUN_1400b73c8(param_1,lVar1);
    }
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x30))();
    if (cVar5 == '\0') goto LAB_140a5168f;
    FUN_140c8fe9c(local_130,param_1,lVar1);
    plVar7 = (longlong *)0x0;
    if ((*(int *)(param_2 + 0x80) != 0) &&
       (plVar4 = *(longlong **)(param_2 + 0x78), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x38))(plVar4,local_108);
      plVar7 = local_108[0];
    }
    if (local_130[0] != plVar7) {
      plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
      *plVar7 = (longlong)&PTR_FUN_149ef1450;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      FUN_140fe25fc(plVar7 + 1,param_2 + 0x78);
      plVar7[3] = lVar1;
      local_108[0] = plVar7;
      FUN_140eee99e(param_1,lVar1,0,local_108);
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x20))(local_108[0],1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0xa8);
  local_50 = *(char *)(param_2 + 200);
  if (local_50 == '\x01') {
    local_58 = *(undefined8 *)(param_2 + 0xc0);
    local_68 = *(undefined4 *)(param_2 + 0xb0);
    uStack_64 = *(undefined4 *)(param_2 + 0xb4);
    uStack_60 = *(undefined4 *)(param_2 + 0xb8);
    uStack_5c = *(undefined4 *)(param_2 + 0xbc);
  }
  local_4c = *(undefined1 *)(param_2 + 0xcc);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_140a51ef4(&local_48,param_2 + 0xd0);
  FUN_140a521e6(param_1 + 0x180,param_1,&local_68);
  if (local_40 == 0) {
LAB_140a51744:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140a51744;
  }
  if (local_50 == '\x01') {
    local_50 = '\0';
  }
  local_98 = *(undefined1 *)(param_2 + 0xf0);
  local_a8 = *(undefined4 *)(param_2 + 0xe0);
  uStack_a4 = *(undefined4 *)(param_2 + 0xe4);
  uStack_a0 = *(undefined4 *)(param_2 + 0xe8);
  uStack_9c = *(undefined4 *)(param_2 + 0xec);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_140a51be2(&local_90,param_2 + 0xf8);
  FUN_140a51d16(param_1 + 0x170,param_1,&local_a8);
  if (local_88 != 0) {
    if (local_90 == (undefined8 *)0x0) goto LAB_140a517d2;
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a517d2:
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x108);
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xef | *(char *)(param_2 + 0xa0) << 4;
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0xa4);
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xfd | *(char *)(param_2 + 0xa1) * '\x02';
  uVar2 = *(uint *)(param_2 + 0x1a0);
  if (uVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1b8);
    *(uint *)(param_1 + 0x1b8) = iVar3 + uVar2;
    if ((uint)(*(int *)(param_1 + 0x1bc) - iVar3) < uVar2) {
      FUN_140eeec1c((longlong *)(param_1 + 0x1b0),iVar3);
    }
    FUN_145766a9f((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x1b0),
                  *(undefined8 *)(param_2 + 0x198),uVar2);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14697d4de(param_1,param_2 + 0x28);
  }
  else if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145766e8e(param_1,param_2);
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140a5f03c(param_1,param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x180) == '\0') {
    if (*(char *)(param_2 + 0x168) != '\0') {
      local_b0 = param_1;
      FUN_140a5707e(&local_b0,param_2 + 0x110);
    }
  }
  else {
    local_b0 = param_1;
    FUN_144a5dc74(local_130);
    local_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    FUN_145766ac8(local_108,param_2 + 0x170,local_130);
    FUN_140a5707e(&local_b0,local_108);
    FUN_145766a5a(local_108);
    FUN_1449db362(&local_118);
    if (local_130[0] != (longlong *)0x0) {
      (**(code **)(*local_130[0] + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a51b6e FUN_140a51b6e body=115 status=ok
// SIG undefined FUN_140a51b6e(void)

undefined1 * FUN_140a51b6e(undefined1 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_19);
      *param_1 = local_19;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a51be2 FUN_140a51be2 body=306 status=ok
// SIG undefined FUN_140a51be2(void)

void FUN_140a51be2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a51c6b;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a51c44:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a51c44;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a51c6b;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a51c6b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a51d16 FUN_140a51d16 body=363 status=ok
// SIG undefined FUN_140a51d16(void)

undefined4 FUN_140a51d16(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a51d4f:
    if (*(char *)(param_3 + 2) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a51da5;
    }
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a51d72:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a51d72;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140a51e84(param_1,param_2,&local_38);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a51d4f;
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a51e5d:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a51e5d;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_1469832ee(param_1,param_2,&local_38);
  }
  (*(code *)(&PTR_LAB_149ef1c00)[local_28])(&local_38);
LAB_140a51da5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a51e84 FUN_140a51e84 body=112 status=ok
// SIG undefined FUN_140a51e84(void)

ulonglong FUN_140a51e84(double *param_1,undefined8 param_2,double *param_3)

{
  ulonglong uVar1;
  double dVar2;
  
  FUN_1400b73c8(param_2,param_1);
  uVar1 = -(ulonglong)(param_3[1] != param_1[1] || *param_1 != *param_3);
  if ((uVar1 & 1) != 0) {
    dVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = dVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 140a51ef4 FUN_140a51ef4 body=306 status=ok
// SIG undefined FUN_140a51ef4(void)

void FUN_140a51ef4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a51f7d;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a51f56:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a51f56;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a51f7d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a51f7d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a52028 FUN_140a52028 body=443 status=ok
// SIG undefined FUN_140a52028(void)

ulonglong FUN_140a52028(char *param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined4 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      param_3[1] = 0;
      if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a521ac:
        local_48 = CONCAT71(local_48._1_7_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
        if (cVar1 == '\0') goto LAB_140a521ac;
        local_48 = *(ulonglong *)(param_3 + 8);
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        local_40 = *(undefined4 *)(param_3 + 0x10);
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        local_38 = 1;
      }
      uVar2 = FUN_146982d76(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_caseD_3_149ef1c40)[local_38])(&local_48);
      goto LAB_140a520c3;
    }
  }
  if (param_3[1] != 1) {
    FUN_1400b73c8(param_2,param_1);
    uVar3 = 0;
    goto LAB_140a520c3;
  }
  param_3[1] = 0;
  if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5208c:
    uVar3 = (ulonglong)*param_3;
    local_48 = CONCAT71(local_48._1_7_,*param_3);
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5208c;
    uVar3 = *(ulonglong *)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    local_40 = *(undefined4 *)(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_38 = 1;
    lVar4 = 1;
    local_48 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != cVar1);
  if (*param_1 != cVar1) {
    *param_1 = cVar1;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_caseD_3_149ef1c40)[lVar4])(&local_48);
LAB_140a520c3:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a521e4 caseD_3 body=1 status=ok
// SIG undefined caseD_3(void)

void switchD_143c3d4dc::caseD_3(void)

{
  return;
}



// FUNCTION 140a521e6 FUN_140a521e6 body=412 status=ok
// SIG undefined FUN_140a521e6(void)

undefined4 FUN_140a521e6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)param_3[4] == (longlong *)0x0 || *(int *)(param_3 + 5) == 0) {
LAB_140a5221f:
    if (*(char *)((longlong)param_3 + 0x1c) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a52232;
    }
    *(undefined1 *)((longlong)param_3 + 0x1c) = 0;
    if ((longlong *)param_3[4] == (longlong *)0x0 || *(int *)(param_3 + 5) == 0) {
LAB_140a52270:
      local_30 = *(char *)(param_3 + 3);
      if (local_30 == '\x01') {
        local_38 = param_3[2];
        local_48 = *param_3;
        uStack_40 = *(undefined4 *)(param_3 + 1);
        uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
      }
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[4] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a52270;
      local_48 = param_3[4];
      param_3[4] = 0;
      uStack_40 = *(undefined4 *)(param_3 + 5);
      *(undefined4 *)(param_3 + 5) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140a528c8(param_1,param_2,&local_48);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[4] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5221f;
    *(undefined1 *)((longlong)param_3 + 0x1c) = 0;
    if ((longlong *)param_3[4] == (longlong *)0x0 || *(int *)(param_3 + 5) == 0) {
LAB_140a5234a:
      local_30 = *(char *)(param_3 + 3);
      if (local_30 == '\x01') {
        local_38 = param_3[2];
        local_48 = *param_3;
        uStack_40 = *(undefined4 *)(param_3 + 1);
        uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
      }
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[4] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a5234a;
      local_48 = param_3[4];
      param_3[4] = 0;
      uStack_40 = *(undefined4 *)(param_3 + 5);
      *(undefined4 *)(param_3 + 5) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_146982f7e(param_1,param_2,&local_48);
  }
  (*(code *)(&PTR_LAB_149ef1bf0)[local_28])(&local_48);
LAB_140a52232:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a52392 FUN_140a52392 body=376 status=ok
// SIG undefined FUN_140a52392(void)

longlong FUN_140a52392(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
    FUN_140a533d6((longlong *)(param_1 + 0x1a8),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  lVar9 = (longlong)iVar4 * 0xc0;
  lVar1 = lVar5 + lVar9;
  *(undefined8 *)(lVar5 + lVar9) = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar5 + 8 + lVar9) = param_2[1];
  *(undefined8 *)(lVar5 + 0x10 + lVar9) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(lVar5 + 0x28 + lVar9) = *(undefined1 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  puVar2 = (undefined4 *)(lVar5 + 0x18 + lVar9);
  *puVar2 = *(undefined4 *)(param_2 + 3);
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined8 *)(lVar5 + 0x30 + lVar9) = 0;
  *(undefined4 *)(lVar5 + 0x38 + lVar9) = 0;
  *(undefined8 *)(lVar5 + 0x30 + lVar9) = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(lVar5 + 0x38 + lVar9) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_2 + 7) = 0;
  cVar3 = *(char *)((longlong)param_2 + 0x44);
  *(char *)(lVar5 + 0x44 + lVar9) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 8);
  }
  cVar3 = *(char *)((longlong)param_2 + 0x4c);
  *(char *)(lVar1 + 0x4c) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 9);
  }
  FUN_140a5250a(lVar1 + 0x50,param_2 + 10);
  *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)(lVar1 + 0x94) = *(undefined1 *)((longlong)param_2 + 0x94);
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined4 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0x98) = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(lVar1 + 0xa0) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(lVar1 + 0xac) = *(undefined1 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(lVar1 + 0xa8) = *(undefined4 *)(param_2 + 0x15);
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined4 *)(lVar1 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = param_2[0x16];
  param_2[0x16] = 0;
  *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)(param_2 + 0x17) = 0;
  return param_1;
}



// FUNCTION 140a5250a FUN_140a5250a body=109 status=ok
// SIG undefined FUN_140a5250a(void)

void FUN_140a5250a(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = param_2[8];
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[0xc] = 0;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_2[0xc] = 0;
  }
  return;
}



// FUNCTION 140a52578 FUN_140a52578 body=253 status=ok
// SIG undefined FUN_140a52578(void)

longlong FUN_140a52578(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 *local_40;
  int local_38;
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a529f8(local_50);
  if (local_50 != (undefined1 *)(param_1 + 0x50)) {
    FUN_140a52676((undefined1 *)(param_1 + 0x50),local_50);
  }
  if (local_20 == 0) {
LAB_140a525b7:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_140a525b7;
  }
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_140a525da;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a525da:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a52676 FUN_140a52676 body=138 status=ok
// SIG undefined FUN_140a52676(void)

undefined4 * FUN_140a52676(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_1449db362(param_1 + 10);
    FUN_1449db362(param_1 + 4);
  }
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



// FUNCTION 140a52700 FUN_140a52700 body=338 status=ok
// SIG undefined FUN_140a52700(void)

void FUN_140a52700(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  param_3 = param_3 & 0xffffffff;
  lVar4 = (**(code **)*param_1)();
  if ((*(byte *)(lVar4 + 0x31) & 4) == 0) {
    return;
  }
  if (((*(byte *)(lVar4 + 0x31) & 1) == 0) || (lVar1 = **(longlong **)(lVar4 + 0x1b0), lVar1 == 0))
  {
    uVar3 = FUN_140a553b2(param_1,lVar4,param_2,param_3);
    uVar9 = (ulonglong)uVar3;
  }
  else {
    lVar5 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x88);
    }
    if ((longlong)*(int *)(lVar1 + 0x90) != 0) {
      uVar9 = 0;
      lVar7 = 0;
      do {
        if (*(longlong *)(lVar5 + uVar9) == param_2) {
          if ((int)(~uVar9 >> 5) != 0) {
            lVar8 = (lVar7 >> 0x20) * 0x20;
            lVar7 = *(longlong *)(lVar5 + 0x10 + lVar8);
            if (lVar7 == 0) goto LAB_140a527c0;
            if ((*(int *)(lVar7 + 0x48) != 0) &&
               (plVar6 = *(longlong **)(lVar7 + 0x40), plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0x60))(plVar6,lVar4);
              lVar7 = *(longlong *)(lVar5 + lVar8 + 0x10);
            }
            if ((*(int *)(lVar7 + 0x38) != 0) && (*(longlong **)(lVar7 + 0x30) != (longlong *)0x0))
            {
              cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x30))();
              if (cVar2 != '\0') {
                if (*(int *)(lVar7 + 0x38) == 0) {
                  plVar6 = (longlong *)0x0;
                }
                else {
                  plVar6 = *(longlong **)(lVar7 + 0x30);
                }
                uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,lVar4);
                goto LAB_140a527be;
              }
            }
            param_3 = CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(lVar7 + 0x28));
            goto LAB_140a527c0;
          }
          break;
        }
        lVar7 = lVar7 + 0x100000000;
        uVar9 = uVar9 + 0x20;
      } while ((longlong)*(int *)(lVar1 + 0x90) * 0x20 != uVar9);
    }
    uVar3 = FUN_140a553b2(param_1,lVar4,param_2,param_3);
LAB_140a527be:
    param_3 = (ulonglong)uVar3;
LAB_140a527c0:
    uVar9 = CONCAT71((int7)(param_3 >> 8),(byte)param_3 | *(byte *)(lVar1 + 0x98));
    *(undefined1 *)(lVar1 + 0x98) = 0;
  }
  FUN_140163244(lVar4,uVar9);
  return;
}



// FUNCTION 140a52852 FUN_140a52852 body=117 status=ok
// SIG undefined FUN_140a52852(void)

longlong * FUN_140a52852(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a5b100(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140a528c8 FUN_140a528c8 body=161 status=ok
// SIG undefined FUN_140a528c8(void)

undefined8 FUN_140a528c8(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  
  FUN_1400b73c8(param_2,param_1);
  bVar1 = *(byte *)(param_1 + 6);
  if ((bVar1 == *(byte *)(param_3 + 6) & bVar1) == 1) {
    cVar5 = FUN_146983284(param_1,param_3);
    if (cVar5 != '\0') {
      if (((float)param_1[4] == (float)param_3[4]) &&
         (!NAN((float)param_1[4]) && !NAN((float)param_3[4]))) {
        if (((float)param_1[5] == (float)param_3[5]) &&
           (!NAN((float)param_1[5]) && !NAN((float)param_3[5]))) {
          return 0;
        }
      }
    }
  }
  else if (bVar1 == *(byte *)(param_3 + 6)) {
    return 0;
  }
  if (param_3 != param_1) {
    if (*(char *)(param_3 + 6) == '\x01') {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 6) != '\x01') goto LAB_140a5294a;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 6) = uVar6;
  }
LAB_140a5294a:
  FUN_14094e0ca(param_2,param_1,0,0);
  return 1;
}



// FUNCTION 140a5296a FUN_140a5296a body=142 status=ok
// SIG undefined FUN_140a5296a(void)

longlong FUN_140a5296a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a529a7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a529a7:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140a529f8 FUN_140a529f8 body=323 status=ok
// SIG undefined FUN_140a529f8(void)

undefined4 * FUN_140a529f8(undefined4 *param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 *local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_3c = 1;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  local_58 = 0;
  local_54 = 1;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  FUN_140a52b3c(param_1 + 4,&local_50);
  *(undefined1 *)(param_1 + 9) = local_3c;
  param_1[8] = local_40;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  FUN_140a52b3c(param_1 + 10,&local_38);
  if ((int)uStack_48 == 0) {
LAB_140a52a82:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
    goto LAB_140a52a82;
  }
  if ((int)uStack_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_140a52aa5;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    uStack_30 = uStack_30 & 0xffffffff00000000;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a52aa5:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a52b3c FUN_140a52b3c body=306 status=ok
// SIG undefined FUN_140a52b3c(void)

void FUN_140a52b3c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a52bc5;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a52b9e:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a52b9e;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a52bc5;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a52bc5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a52c70 FUN_140a52c70 body=117 status=ok
// SIG undefined FUN_140a52c70(void)

longlong * FUN_140a52c70(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a53c04(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140a52ce6 FUN_140a52ce6 body=401 status=ok
// SIG undefined FUN_140a52ce6(void)

longlong *
FUN_140a52ce6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x208,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f05710;
  plVar1 = plVar4 + 2;
  FUN_140a5303e(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_140a52f9c(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140a52d9c;
    param_1[1] = 0;
LAB_140a52e09:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140a52d9c;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_140a52d9c;
      goto LAB_140a52e09;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140a52d9c;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140a52d9c:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x1f8;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a52e78 FUN_140a52e78 body=291 status=ok
// SIG undefined FUN_140a52e78(void)

void FUN_140a52e78(longlong param_1,char *param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    iVar4 = (int)sVar1;
    if (iVar4 != 0) {
      lVar5 = (longlong)iVar4;
      pcVar9 = param_2 + lVar5 + -1;
      uVar3 = 0;
      if (pcVar9 < param_2) {
        lVar8 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar9 - 0x30U)) break;
          uVar3 = uVar3 + 1;
          pcVar9 = pcVar9 + -1;
        } while (param_2 <= pcVar9);
        if (uVar3 == 0 || iVar4 <= (int)uVar3) {
LAB_140a52eed:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((uVar3 < 0xb) && (lVar10 = -(ulonglong)uVar3, param_2[lVar10 + lVar5 + -1] == '_')) {
            if ((uVar3 == 1) || (param_2[lVar10 + lVar5] != '0')) {
              lVar7 = 0;
              do {
                lVar8 = (longlong)param_2[lVar10 + lVar5] + lVar7 * 10;
                lVar7 = lVar8 + -0x30;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 0);
              if (lVar7 < 0x7fffffff) {
                iVar4 = ~uVar3 + iVar4;
                lVar8 = lVar8 + -0x2f;
                goto LAB_140a52eef;
              }
            }
            goto LAB_140a52eed;
          }
        }
LAB_140a52eef:
        if (iVar4 == 0) goto LAB_140a52f3b;
      }
      local_24 = 0;
      local_30 = param_2;
      local_28 = iVar4;
      uVar3 = FUN_14001a6c0(&local_30,1);
      uVar6 = lVar8 << 0x20;
      uVar2 = (ulonglong)uVar3;
      goto LAB_140a52f12;
    }
  }
LAB_140a52f3b:
  uVar2 = 0;
  uVar6 = 0;
LAB_140a52f12:
  *(ulonglong *)(param_1 + 0x1d8) = uVar2 | uVar6;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a52f9c FUN_140a52f9c body=162 status=ok
// SIG undefined FUN_140a52f9c(void)

void FUN_140a52f9c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a52fdb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a52fdb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a52fdb:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a5303a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a5303e FUN_140a5303e body=166 status=ok
// SIG undefined FUN_140a5303e(void)

undefined8 * FUN_140a5303e(undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_149f15ec0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x3c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar2;
  *(undefined4 *)(param_1 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar4;
  FUN_140a5808e(param_1 + 0x3c,param_1);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar5 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar5 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 140a530e4 FUN_140a530e4 body=117 status=ok
// SIG undefined FUN_140a530e4(void)

longlong * FUN_140a530e4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a5a2ee(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140a5315a FUN_140a5315a body=103 status=ok
// SIG undefined FUN_140a5315a(void)

longlong FUN_140a5315a(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a53178;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a53178:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a531c2 FUN_140a531c2 body=369 status=ok
// SIG undefined FUN_140a531c2(void)

void FUN_140a531c2(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x58;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a53247;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a53247:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 140a53334 FUN_140a53334 body=161 status=ok
// SIG undefined FUN_140a53334(void)

longlong FUN_140a53334(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_140a5071c();
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  uVar2 = (**(code **)(*plVar1 + 0x78))();
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 **)(param_1 + 0x1c8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x1d0) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  return param_1;
}



// FUNCTION 140a533d6 FUN_140a533d6 body=272 status=ok
// SIG undefined FUN_140a533d6(void)

void FUN_140a533d6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140a534e6 FUN_140a534e6 body=134 status=ok
// SIG undefined FUN_140a534e6(void)

undefined8 * FUN_140a534e6(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000140a53546;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000140a53546:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 140a5356c FUN_140a5356c body=315 status=ok
// SIG undefined FUN_140a5356c(void)

void FUN_140a5356c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a535d6;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140a535d6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140a536a8 FUN_140a536a8 body=608 status=ok
// SIG undefined FUN_140a536a8(void)

longlong *
FUN_140a536a8(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  size_t sVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar5 = (longlong *)FUN_14001cc68(0x218,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ef1eb0;
  plVar10 = plVar5 + 2;
  FUN_140a539ac(plVar10);
  local_40 = plVar10;
  local_38 = plVar5;
  FUN_140a5390a(&local_40,plVar10);
  plVar10 = local_38;
  if (local_38 == (longlong *)0x0) {
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      param_1[1] = 0;
LAB_140a5389c:
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000140a538d5:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (local_38 == plVar5) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar10;
        goto joined_r0x000140a538d5;
      }
    }
    else {
      param_1[1] = (longlong)local_38;
      if (plVar5 != (longlong *)0x0) goto LAB_140a5389c;
    }
  }
  plVar10 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar3 = *param_1;
  if (param_2 != (longlong *)0x0) {
    sVar6 = strlen((char *)param_2);
    uVar4 = (uint)sVar6;
    if (uVar4 != 0) {
      lVar9 = (longlong)(int)uVar4;
      plVar10 = (longlong *)((longlong)param_2 + lVar9 + -1);
      uVar8 = 0;
      if (plVar10 < param_2) {
        lVar14 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*plVar10 - 0x30U)) break;
          uVar8 = uVar8 + 1;
          plVar10 = (longlong *)((longlong)plVar10 + -1);
        } while (param_2 <= plVar10);
        if (uVar8 == 0 || (int)uVar4 <= (int)uVar8) {
LAB_140a537c9:
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          if ((uVar8 < 0xb) &&
             (lVar11 = -(ulonglong)uVar8, *(char *)((longlong)param_2 + lVar11 + lVar9 + -1) == '_')
             ) {
            if ((uVar8 == 1) || (*(char *)((longlong)param_2 + lVar11 + lVar9) != '0')) {
              lVar13 = 0;
              do {
                lVar14 = (longlong)*(char *)((longlong)param_2 + lVar11 + lVar9) + lVar13 * 10;
                lVar13 = lVar14 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar13 < 0x7fffffff) {
                uVar4 = ~uVar8 + uVar4;
                lVar14 = lVar14 + -0x2f;
                goto LAB_140a537cc;
              }
            }
            goto LAB_140a537c9;
          }
        }
LAB_140a537cc:
        if (uVar4 == 0) goto LAB_140a5381f;
      }
      local_38._0_5_ = (uint5)uVar4;
      local_40 = param_2;
      uVar4 = FUN_14001a6c0(&local_40,1);
      uVar12 = lVar14 << 0x20;
      uVar7 = (ulonglong)uVar4;
      goto LAB_140a537ef;
    }
  }
LAB_140a5381f:
  uVar7 = 0;
  uVar12 = 0;
LAB_140a537ef:
  *(ulonglong *)(lVar3 + 0x1d8) = uVar7 | uVar12;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a5390a FUN_140a5390a body=162 status=ok
// SIG undefined FUN_140a5390a(void)

void FUN_140a5390a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a53949;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a53949;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a53949:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a539a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a539ac FUN_140a539ac body=232 status=ok
// SIG undefined FUN_140a539ac(void)

undefined8 * FUN_140a539ac(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149eeed90;
  FUN_1446f470e(&local_20,L"Children",1);
  param_1[0x3d] = param_1;
  param_1[0x3e] = local_20;
  param_1[0x3c] = &PTR_LAB_149eefef0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar2 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar2 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a53a96 FUN_140a53a96 body=365 status=ok
// SIG undefined FUN_140a53a96(void)

longlong FUN_140a53a96(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = DAT_14c98dec8;
  lVar4 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1e0) = DAT_14c98ded0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x204) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x234) = 1;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x24c) = 1;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x264) = 1;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar2 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140a53bb2;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_140a53bb2:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140a53c04 FUN_140a53c04 body=223 status=ok
// SIG undefined FUN_140a53c04(void)

void FUN_140a53c04(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5acbc(param_1 + 0x1e0,param_1,param_2 + 0x1a8);
  FUN_140a5abdc(param_1 + 0x1e8,param_1,param_2 + 0x1c8);
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x220);
  FUN_140a53ce4(param_1 + 0x200,param_1,param_2 + 0x1f0);
  if (*(longlong **)(param_2 + 0x228) != (longlong *)0x0 && *(int *)(param_2 + 0x230) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x228) + 0x30))();
    if (cVar1 != '\0') {
      local_30 = 0;
      local_28 = 0;
      FUN_145767132(&local_30,param_2 + 0x228);
      FUN_1457670ac(param_1,&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a53ce4 FUN_140a53ce4 body=129 status=ok
// SIG undefined FUN_140a53ce4(void)

undefined8 FUN_140a53ce4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x20) != (longlong *)0x0 && *(int *)(param_3 + 0x28) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x30))();
    if (cVar1 != '\0') {
      uVar2 = FUN_14697c360(param_1,param_2,param_3 + 0x20);
      return uVar2;
    }
  }
  if (*(char *)(param_3 + 0x18) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return 0;
  }
  uVar2 = FUN_14697c486(param_3);
  uVar2 = FUN_14697c3fe(param_1,param_2,uVar2);
  return uVar2;
}



// FUNCTION 140a53d66 FUN_140a53d66 body=401 status=ok
// SIG undefined FUN_140a53d66(void)

longlong *
FUN_140a53d66(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x260,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efe200;
  plVar1 = plVar4 + 2;
  FUN_140a53f9a(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_140a53ef8(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140a53e1c;
    param_1[1] = 0;
LAB_140a53e89:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140a53e1c;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_140a53e1c;
      goto LAB_140a53e89;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140a53e1c;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140a53e1c:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x250;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a53ef8 FUN_140a53ef8 body=162 status=ok
// SIG undefined FUN_140a53ef8(void)

void FUN_140a53ef8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a53f37;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a53f37;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a53f37:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a53f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a53f9a FUN_140a53f9a body=344 status=ok
// SIG undefined FUN_140a53f9a(void)

undefined8 * FUN_140a53f9a(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f14520;
  FUN_140a540f2(param_1 + 0x3c,param_1);
  param_1[0x3c] = &PTR_LAB_149f170a0;
  param_1[0x3f] = &PTR_FUN_149f170e8;
  *(undefined4 *)(param_1 + 0x46) = 0xbf800000;
  FUN_140a5808e(param_1 + 0x46,param_1);
  *(undefined4 *)((longlong)param_1 + 0x234) = 0xbf800000;
  FUN_140a5808e((longlong)param_1 + 0x234,param_1);
  *(undefined4 *)(param_1 + 0x47) = 0xbf800000;
  FUN_140a5808e(param_1 + 0x47,param_1);
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0xbf800000;
  FUN_140a5808e((longlong)param_1 + 0x23c,param_1);
  *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
  FUN_140a5808e(param_1 + 0x48,param_1);
  *(undefined4 *)((longlong)param_1 + 0x244) = 0xbf800000;
  FUN_140a5808e((longlong)param_1 + 0x244,param_1);
  *(undefined4 *)(param_1 + 0x49) = 0xbf800000;
  FUN_140a5808e(param_1 + 0x49,param_1);
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0xbf800000;
  FUN_140a5808e((longlong)param_1 + 0x24c,param_1);
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar2 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar2 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 140a540f2 FUN_140a540f2 body=233 status=ok
// SIG undefined FUN_140a540f2(void)

undefined8 * FUN_140a540f2(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR__purecall_149ef0700;
  param_1[1] = param_2;
  local_28 = "Children";
  local_20 = 8;
  local_1c = 0;
  uVar3 = FUN_14001a6c0(&local_28,1);
  param_1[2] = (ulonglong)uVar3;
  *param_1 = &PTR_LAB_149ef0620;
  param_1[3] = &PTR_FUN_149edb640;
  param_1[4] = param_1;
  param_1[5] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  param_1[6] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = &PTR_LAB_149ef0620;
  param_1[3] = &PTR_FUN_149ef0668;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140a5808e(param_1 + 7,param_2);
  param_1[9] = 0;
  *param_1 = &PTR_LAB_149ef05d0;
  param_1[3] = &PTR_FUN_149ef0618;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a541dc FUN_140a541dc body=401 status=ok
// SIG undefined FUN_140a541dc(void)

longlong *
FUN_140a541dc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x220,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f05280;
  plVar1 = plVar4 + 2;
  FUN_140a5436e(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_140a54484(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140a54292;
    param_1[1] = 0;
LAB_140a542ff:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140a54292;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_140a54292;
      goto LAB_140a542ff;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140a54292;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140a54292:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x210;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5436e FUN_140a5436e body=128 status=ok
// SIG undefined FUN_140a5436e(void)

undefined8 * FUN_140a5436e(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  
  FUN_140a543ee(param_1,0);
  *param_1 = &PTR_FUN_149f052a0;
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar2 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar2 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 140a543ee FUN_140a543ee body=148 status=ok
// SIG undefined FUN_140a543ee(void)

undefined8 * FUN_140a543ee(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149ef0850;
  FUN_1446f470e(&local_28,L"Children",1);
  param_1[0x3d] = param_1;
  param_1[0x3e] = local_28;
  param_1[0x3c] = &PTR_LAB_149eefe00;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a54484 FUN_140a54484 body=162 status=ok
// SIG undefined FUN_140a54484(void)

void FUN_140a54484(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a544c3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a544c3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a544c3:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a54522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a54526 FUN_140a54526 body=401 status=ok
// SIG undefined FUN_140a54526(void)

longlong *
FUN_140a54526(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x5f0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f051f0;
  plVar1 = plVar4 + 2;
  FUN_140a57c18(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_140a546b8(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140a545dc;
    param_1[1] = 0;
LAB_140a54649:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140a545dc;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_140a545dc;
      goto LAB_140a54649;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140a545dc;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140a545dc:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x5e0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a546b8 FUN_140a546b8 body=162 status=ok
// SIG undefined FUN_140a546b8(void)

void FUN_140a546b8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a546f7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a546f7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a546f7:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a54756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a5475a FUN_140a5475a body=426 status=ok
// SIG undefined FUN_140a5475a(void)

longlong FUN_140a5475a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 *local_60;
  int local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = 1;
  local_68 = *param_2;
  local_64 = *(undefined1 *)(param_2 + 1);
  plVar1 = (longlong *)(param_2 + 2);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_140a52b3c(&local_60,plVar1);
  local_4c = *(undefined1 *)(param_2 + 1);
  local_50 = *param_2;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_140a52b3c(&local_48,plVar1);
  if (local_70 != (undefined4 *)(param_1 + 0x50)) {
    FUN_140a52676((undefined4 *)(param_1 + 0x50),local_70);
  }
  if (local_40 == 0) {
LAB_140a547f2:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140a547f2;
  }
  if (local_58 == 0) {
LAB_140a54807:
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_140a54807;
  }
  if (param_2[4] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a5482b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    param_2[4] = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a5482b:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a54906 FUN_140a54906 body=262 status=ok
// SIG undefined FUN_140a54906(void)

longlong FUN_140a54906(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_140008f88(param_1 + 0x1a8);
  *(char *)(param_1 + 0x1b8) = (char)param_2[2];
  plVar1 = (longlong *)(param_1 + 0x1c0);
  lVar2 = param_2[3];
  param_2[3] = 0;
  lVar4 = param_2[4];
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)(param_1 + 0x1c8) == 0) {
LAB_140a54951:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      goto LAB_140a54951;
    }
  }
  plVar1 = param_2 + 3;
  *(longlong *)(param_1 + 0x1c0) = lVar2;
  *(int *)(param_1 + 0x1c8) = (int)lVar4;
  if ((int)param_2[4] != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140a54980;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a54980:
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 140a54a0c FUN_140a54a0c body=990 status=ok
// SIG undefined FUN_140a54a0c(void)

void FUN_140a54a0c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_108 [44];
  uint local_dc;
  undefined8 *local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  uint local_c0;
  uint local_bc;
  undefined8 *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0 [11];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar20 = *(int *)(param_2 + 0x1b0);
  uVar21 = (ulonglong)iVar20;
  puVar7 = *(undefined8 **)(param_2 + 0x1a8);
  if (0 < (longlong)uVar21) {
    uVar19 = 0;
    puVar4 = puVar7;
    do {
      if (uVar19 + 1 < uVar21) {
        iVar8 = 0;
        iVar6 = 0;
        if (*(char *)((longlong)puVar4 + 0xac) != '\0') {
          iVar6 = *(int *)(puVar4 + 0x15);
        }
        if (*(char *)((longlong)puVar4 + 0x54) != '\0') {
          iVar8 = *(int *)(puVar4 + 10);
        }
        if (iVar6 < iVar8) {
          puVar9 = puVar4;
          puVar13 = local_a0;
          for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar9 = puVar4 + 0xb;
          puVar13 = puVar4;
          for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar9 = local_a0;
          puVar13 = puVar4 + 0xb;
          for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
        }
      }
      uVar19 = uVar19 + 2;
      puVar4 = puVar4 + 0x16;
    } while (uVar19 < uVar21);
    if (2 < iVar20) {
      uVar19 = 2;
      do {
        local_b0 = uVar19;
        iVar6 = (int)local_b0;
        local_bc = iVar6 * 2;
        local_a8 = (longlong)(int)local_bc;
        lVar12 = 0;
        do {
          local_c0 = iVar20 - (int)lVar12;
          if ((int)local_bc <= (int)local_c0) {
            local_c0 = local_bc;
          }
          if ((iVar6 < (int)local_c0) && (0 < iVar6)) {
            local_b8 = puVar7 + lVar12 * 0xb;
            iVar8 = 0;
            uVar19 = local_b0;
            while( true ) {
              local_dc = (uint)uVar19;
              local_d0 = local_b8 + (longlong)(int)local_dc * 0xb;
              iVar18 = 0;
              uVar11 = local_dc - iVar8;
              if (uVar11 != 0 && iVar8 <= (int)local_dc) {
                iVar18 = 0;
                iVar15 = 0;
                if (*(char *)((longlong)local_d0 + 0x54) != '\0') {
                  iVar15 = *(int *)(local_d0 + 10);
                }
                uVar19 = (ulonglong)uVar11;
                do {
                  uVar19 = uVar19 >> 1;
                  iVar17 = (uint)uVar19 + iVar18;
                  iVar3 = 0;
                  if (*(char *)((longlong)local_b8 +
                               (longlong)iVar17 * 0x58 + (longlong)iVar8 * 0x58 + 0x54) != '\0') {
                    iVar3 = *(int *)(local_b8 + (longlong)iVar8 * 0xb + (longlong)iVar17 * 0xb + 10)
                    ;
                  }
                  if (iVar3 <= iVar15) {
                    iVar18 = iVar17 + (uVar11 & 1);
                  }
                  bVar2 = 1 < uVar11;
                  uVar11 = (uint)uVar19;
                } while (bVar2);
              }
              iVar18 = iVar18 + iVar8;
              iVar8 = local_dc - iVar18;
              if (iVar8 == 0 || (int)local_dc < iVar18) break;
              uVar11 = local_c0 - local_dc;
              if (uVar11 == 0 || (int)local_c0 < (int)local_dc) {
                local_c8 = 0;
              }
              else {
                local_d8 = local_b8 + (longlong)iVar18 * 0xb;
                local_c8 = 0;
                iVar15 = 0;
                if (*(char *)((longlong)local_d8 + 0x54) != '\0') {
                  iVar15 = *(int *)(local_d8 + 10);
                }
                uVar19 = (ulonglong)uVar11;
                do {
                  uVar19 = uVar19 >> 1;
                  uVar16 = (int)local_c8 + (uint)uVar19;
                  iVar3 = 0;
                  if (*(char *)((longlong)local_d0 + (ulonglong)uVar16 * 0x58 + 0x54) != '\0') {
                    iVar3 = *(int *)(local_d0 + (ulonglong)uVar16 * 0xb + 10);
                  }
                  if (iVar3 < iVar15) {
                    local_c8 = (ulonglong)(uVar16 + (uVar11 & 1));
                  }
                  bVar2 = 1 < uVar11;
                  uVar11 = (uint)uVar19;
                } while (bVar2);
                local_dc = local_dc + (int)local_c8;
                if (0 < (int)local_c8) {
                  local_d0 = local_d8 + (longlong)(int)(local_dc - iVar18) * 0xb;
                  puVar4 = local_d8 + (longlong)iVar8 * 0xb;
                  puVar9 = local_d8 + (longlong)iVar8 * 0xb;
                  do {
                    while( true ) {
                      puVar13 = puVar4 + 0xb;
                      puVar1 = local_d8 + 0xb;
                      puVar10 = local_d8;
                      puVar14 = local_a0;
                      for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
                        *puVar14 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar14 = puVar14 + 1;
                      }
                      puVar10 = puVar4;
                      for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
                        *local_d8 = *puVar10;
                        puVar10 = puVar10 + 1;
                        local_d8 = local_d8 + 1;
                      }
                      puVar10 = local_a0;
                      for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
                        *puVar4 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar4 = puVar4 + 1;
                      }
                      local_d8 = puVar1;
                      if (puVar13 == local_d0) break;
                      puVar4 = puVar13;
                      if (puVar1 == puVar9) {
                        puVar9 = puVar13;
                      }
                    }
                    puVar4 = puVar9;
                  } while (puVar1 != puVar9);
                }
              }
              uVar19 = (ulonglong)local_dc;
              if (((int)local_c0 <= (int)local_dc) ||
                 (iVar8 = iVar18 + (int)local_c8 + 1, (int)local_dc <= iVar8)) break;
            }
          }
          lVar12 = lVar12 + local_a8;
        } while (lVar12 < (longlong)uVar21);
        uVar19 = (ulonglong)local_bc;
      } while ((int)local_bc < iVar20);
    }
    iVar20 = *(int *)(param_2 + 0x1b0);
    puVar7 = *(undefined8 **)(param_2 + 0x1a8);
  }
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  iVar6 = *(int *)(param_1 + 0x200) + iVar20;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)(param_1 + 0x204) < iVar6) {
    FUN_140a55110(param_1 + 0x1f8);
  }
  if (iVar20 != 0) {
    lVar12 = (longlong)iVar20 * 0x58;
    puVar4 = puVar7;
    do {
      FUN_140a54e06(param_1 + 0x1e0,puVar4);
      puVar4 = puVar4 + 0xb;
      lVar12 = lVar12 + -0x58;
    } while (lVar12 != 0);
  }
  FUN_140a54e77(puVar7,iVar20);
  if (puVar7 == (undefined8 *)0x0) {
    if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 140a54e06 FUN_140a54e06 body=113 status=ok
// SIG undefined FUN_140a54e06(void)

int FUN_140a54e06(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140a55250(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8);
  puVar4 = (undefined8 *)(lVar3 + 0x40);
  if (*(char *)((longlong)param_2 + 0x54) != '\0') {
    puVar4 = param_2 + 10;
  }
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)puVar4;
  FUN_140a54f44(lVar3,param_1,param_2);
  return iVar1;
}



// FUNCTION 140a54e77 FUN_140a54e77 body=205 status=ok
// SIG undefined FUN_140a54e77(void)

void FUN_140a54e77(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar5 = (longlong *)(param_1 + 0x30);
    do {
      if (*(char *)((longlong)plVar5 + 0x24) == '\x01') {
        *(undefined1 *)((longlong)plVar5 + 0x24) = 0;
      }
      if (*(char *)((longlong)plVar5 + 0x1c) == '\x01') {
        *(undefined1 *)((longlong)plVar5 + 0x1c) = 0;
      }
      if (*(char *)((longlong)plVar5 + 0x14) == '\x01') {
        *(undefined1 *)((longlong)plVar5 + 0x14) = 0;
      }
      if ((int)plVar5[1] == 0) {
LAB_140a54ea3:
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar4 = (undefined8 *)*plVar5;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar5,0,0,0x10);
          *(undefined4 *)(plVar5 + 1) = 0;
          goto LAB_140a54ea3;
        }
      }
      plVar3 = (longlong *)plVar5[-4];
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
      if ((undefined8 *)plVar5[-6] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar5[-6])();
      }
      plVar5 = plVar5 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a54f44 FUN_140a54f44 body=247 status=ok
// SIG undefined FUN_140a54f44(void)

void FUN_140a54f44(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (*(longlong *)(param_1 + 0x10) != DAT_14c98dec8) {
      if (*(longlong *)(param_1 + 8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      }
      FUN_14066af28(*(longlong *)(param_1 + 0x10),uVar7);
    }
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
  }
  if (*(char *)(param_3 + 0x28) == '\x01') {
    FUN_140a55872(param_1 + 0x28,param_1 + 0x20,param_3 + 0x18);
  }
  puVar6 = (undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_3 + 0x44) != '\0') {
    puVar6 = (undefined4 *)(param_3 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = *puVar6;
  puVar6 = (undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    puVar6 = (undefined4 *)(param_3 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar6;
  return;
}



// FUNCTION 140a5503c FUN_140a5503c body=194 status=ok
// SIG undefined FUN_140a5503c(void)

void FUN_140a5503c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *puStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8), lVar3 != 0)) &&
     (*(longlong *)(param_1 + 0x10) != DAT_14c98dec8)) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if (puVar4 == (undefined8 *)0x0) {
LAB_140a550e1:
      local_28 = 0;
      puStack_20 = (undefined8 *)0x0;
      FUN_1407630f8();
    }
    else {
      iVar5 = *(int *)(puVar4 + 1);
      do {
        if (iVar5 == 0) goto LAB_140a550e1;
        LOCK();
        iVar2 = *(int *)(puVar4 + 1);
        bVar6 = iVar5 == iVar2;
        if (bVar6) {
          *(int *)(puVar4 + 1) = iVar5 + 1;
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
        UNLOCK();
      } while (!bVar6);
      local_28 = *(undefined8 *)(lVar3 + 8);
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      puStack_20 = puVar4;
      FUN_1407630f8();
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a55110 FUN_140a55110 body=320 status=ok
// SIG undefined FUN_140a55110(void)

void FUN_140a55110(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a55179;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140a55179:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140a55250 FUN_140a55250 body=353 status=ok
// SIG undefined FUN_140a55250(void)

void FUN_140a55250(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a552d7;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a552d7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a553b2 FUN_140a553b2 body=245 status=ok
// SIG undefined FUN_140a553b2(void)

undefined1 FUN_140a553b2(longlong *param_1,longlong *param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if ((longlong)(int)plVar2[1] != 0) {
    lVar4 = *plVar2;
    lVar3 = (longlong)(int)plVar2[1] * 0x58;
    do {
      if (((*(int *)(lVar4 + 8) == param_3 - (int)param_1) && (*(char *)(lVar4 + 0x50) == '\x02'))
         && (*(longlong *)(lVar4 + 0x14) == local_38)) {
        if (lVar4 != 0) {
          if ((*(int *)(lVar4 + 0x48) != 0) &&
             (plVar2 = *(longlong **)(lVar4 + 0x40), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
          }
          if (((*(int *)(lVar4 + 0x38) == 0) || (*(longlong **)(lVar4 + 0x30) == (longlong *)0x0))
             || (cVar1 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x30))(), cVar1 == '\0')) {
            param_4 = *(undefined1 *)(lVar4 + 0x28);
          }
          else {
            if (*(int *)(lVar4 + 0x38) == 0) {
              plVar2 = (longlong *)0x0;
            }
            else {
              plVar2 = *(longlong **)(lVar4 + 0x30);
            }
            param_4 = (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
          }
        }
        break;
      }
      lVar4 = lVar4 + 0x58;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_4;
}



// FUNCTION 140a554b8 FUN_140a554b8 body=401 status=ok
// SIG undefined FUN_140a554b8(void)

longlong *
FUN_140a554b8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efe1c0;
  plVar1 = plVar4 + 2;
  FUN_140a556ec(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_140a5564a(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140a5556e;
    param_1[1] = 0;
LAB_140a555db:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140a5556e;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_140a5556e;
      goto LAB_140a555db;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140a5556e;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140a5556e:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x220;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5564a FUN_140a5564a body=162 status=ok
// SIG undefined FUN_140a5564a(void)

void FUN_140a5564a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a55689;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a55689;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a55689:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a556e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a556ec FUN_140a556ec body=196 status=ok
// SIG undefined FUN_140a556ec(void)

longlong * FUN_140a556ec(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = (longlong)&PTR_FUN_149eee890;
  param_1[0x3c] = 0;
  FUN_140a557b6();
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 500) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  (**(code **)(*param_1 + 8))(param_1);
  *(undefined1 *)(param_1 + 0x42) = 0;
  (**(code **)(*param_1 + 8))(param_1);
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar2 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar2 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 140a557b0 thunk_FUN_140a557b6 body=5 status=ok
// SIG undefined thunk_FUN_140a557b6(void)

void thunk_FUN_140a557b6(void)

{
  FUN_140a557b6();
  return;
}



// FUNCTION 140a557b6 FUN_140a557b6 body=186 status=ok
// SIG undefined FUN_140a557b6(void)

undefined8 * FUN_140a557b6(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98d9e8) {
    FUN_144b3d300(&DAT_14c98d9e8);
    if (DAT_14c98d9e8 == -1) {
      FUN_1446ddc76(local_18,"SImage",1);
      FUN_145766b7c(&DAT_14c98d9b0);
      atexit(FUN_142879c28);
      _Init_thread_footer(&DAT_14c98d9e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98d9b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a55872 FUN_140a55872 body=374 status=ok
// SIG undefined FUN_140a55872(void)

undefined4 FUN_140a55872(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a558a7:
    if (*(char *)(param_3 + 2) != '\x01') {
      uVar3 = (**(code **)*param_2)(param_2);
      FUN_1400b73c8(uVar3,param_1);
      uVar2 = 0;
      goto LAB_140a55901;
    }
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a558ce:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a558ce;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140a559ec(param_1,param_2,&local_38);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a558a7;
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a559c4:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a559c4;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_14697ca52(param_1,param_2,&local_38);
  }
  (*(code *)(&PTR_FUN_149ef0800)[local_28])(&local_38);
LAB_140a55901:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a559ea FUN_140a559ea body=1 status=ok
// SIG undefined FUN_140a559ea(void)

void FUN_140a559ea(void)

{
  return;
}



// FUNCTION 140a559ec FUN_140a559ec body=135 status=ok
// SIG undefined FUN_140a559ec(void)

undefined8 FUN_140a559ec(float *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  uVar4 = (**(code **)*param_2)(param_2);
  FUN_1400b73c8(uVar4,param_1);
  (**(code **)*param_2)(param_2);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[2] != param_3[2]))
      || ((NAN(param_1[2]) || NAN(param_3[2]) || (param_1[1] != param_3[1])))) ||
     ((NAN(param_1[1]) || NAN(param_3[1]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    (**(code **)*param_2)(param_2);
    FUN_140a52700(param_2,param_1,0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140a55a86 FUN_140a55a86 body=428 status=ok
// SIG undefined FUN_140a55a86(void)

void FUN_140a55a86(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x228);
  if (*(int *)(param_1 + 0x230) == 0) {
LAB_140a55aa3:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x230) = 0;
      goto LAB_140a55aa3;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x210);
  if (*(int *)(param_1 + 0x218) == 0) {
LAB_140a55ac3:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x218) = 0;
      goto LAB_140a55ac3;
    }
  }
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x1e0);
  if (*(int *)(param_1 + 0x1e8) == 0) {
LAB_140a55af0:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      goto LAB_140a55af0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x1c0) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a55b1c;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a55b1c:
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 140a55c32 FUN_140a55c32 body=401 status=ok
// SIG undefined FUN_140a55c32(void)

longlong *
FUN_140a55c32(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x2b0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efe220;
  plVar1 = plVar4 + 2;
  FUN_140a55e66(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_140a55dc4(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140a55ce8;
    param_1[1] = 0;
LAB_140a55d55:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140a55ce8;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_140a55ce8;
      goto LAB_140a55d55;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140a55ce8;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140a55ce8:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x2a0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a55dc4 FUN_140a55dc4 body=162 status=ok
// SIG undefined FUN_140a55dc4(void)

void FUN_140a55dc4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140a55e03;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140a55e03;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140a55e03:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a55e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a55e66 FUN_140a55e66 body=289 status=ok
// SIG undefined FUN_140a55e66(void)

undefined8 * FUN_140a55e66(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f141f0;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  local_38 = "Border";
  local_30 = 6;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar1,0,0);
  param_1[0x4d] = uVar3;
  FUN_140a5808e(param_1 + 0x4d,param_1);
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_140a5808e(param_1 + 0x4e,param_1);
  param_1[0x51] = 0x3ff0000000000000;
  param_1[0x52] = 0x3ff0000000000000;
  FUN_140a5808e(param_1 + 0x51,param_1);
  *(undefined1 *)(param_1 + 0x53) = 1;
  FUN_140a5808e(param_1 + 0x53,param_1);
  *(undefined1 *)((longlong)param_1 + 0x299) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a55f88 FUN_140a55f88 body=163 status=ok
// SIG undefined FUN_140a55f88(void)

longlong * FUN_140a55f88(longlong *param_1)

{
  FUN_140a560dc();
  *param_1 = (longlong)&PTR_FUN_149eeeb00;
  FUN_140a561e8(param_1 + 0x3c,param_1);
  param_1[0x3c] = (longlong)&PTR_LAB_149eefe50;
  param_1[0x3f] = (longlong)&PTR_FUN_149eefe98;
  param_1[0x46] = 0x3ff0000000000000;
  param_1[0x47] = 0x3ff0000000000000;
  (**(code **)(*param_1 + 8))(param_1);
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  (**(code **)(*param_1 + 8))(param_1);
  *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x4c) = 2;
  (**(code **)(*param_1 + 8))(param_1);
  return param_1;
}



// FUNCTION 140a5602c thunk_FUN_140a56032 body=5 status=ok
// SIG undefined thunk_FUN_140a56032(void)

void thunk_FUN_140a56032(void)

{
  FUN_140a56032();
  return;
}



// FUNCTION 140a56032 FUN_140a56032 body=169 status=ok
// SIG undefined FUN_140a56032(void)

undefined8 * FUN_140a56032(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98df90) {
    FUN_144b3d300(&DAT_14c98df90);
    if (DAT_14c98df90 == -1) {
      FUN_1446ddc76(&local_18,"SCompoundWidget",1);
      FUN_145767838(local_18);
      atexit(FUN_142879e5d);
      _Init_thread_footer(&DAT_14c98df90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98df58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a560dc FUN_140a560dc body=268 status=ok
// SIG undefined FUN_140a560dc(void)

undefined8 * FUN_140a560dc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149ef0d00;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = DAT_14c967f78;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 0x283;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xf8 | 4;
  *(undefined4 *)((longlong)param_1 + 0x33) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0x37) = 0x400;
  *(undefined1 *)((longlong)param_1 + 0x39) = DAT_14c96b238;
  FUN_140a5808e((longlong)param_1 + 0x39,param_1);
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  FUN_140a5808e((longlong)param_1 + 0x3a,param_1);
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  FUN_140a5808e((longlong)param_1 + 0x3b,param_1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  FUN_14286206c(param_1 + 8);
  param_1[0x2d] = 0;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x2e) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar3;
  FUN_140a5808e(param_1 + 0x2e,param_1);
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_140a5808e(param_1 + 0x30,param_1);
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



// FUNCTION 140a561e8 FUN_140a561e8 body=230 status=ok
// SIG undefined FUN_140a561e8(void)

undefined8 * FUN_140a561e8(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR__purecall_149ef0700;
  param_1[1] = param_2;
  local_28 = "Children";
  local_20 = 8;
  local_1c = 0;
  uVar3 = FUN_14001a6c0(&local_28,1);
  param_1[2] = (ulonglong)uVar3;
  *param_1 = &PTR_LAB_149ef0620;
  param_1[3] = &PTR_FUN_149edb640;
  param_1[4] = param_1;
  param_1[5] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  param_1[6] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = &PTR_LAB_149ef0620;
  param_1[3] = &PTR_FUN_149ef0668;
  param_1[7] = 0;
  param_1[8] = 0;
  (**(code **)(*param_2 + 8))(param_2);
  param_1[9] = 0;
  *param_1 = &PTR_LAB_149ef05d0;
  param_1[3] = &PTR_FUN_149ef0618;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a562d0 FUN_140a562d0 body=472 status=ok
// SIG undefined FUN_140a562d0(void)

longlong FUN_140a562d0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1c4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1c8) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1cc) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  local_50 = "Border";
  local_48 = 6;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar3,0,0);
  *(undefined8 *)(param_1 + 0x228) = uVar5;
  *(undefined1 *)(param_1 + 0x230) = 1;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x250) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 600) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x278) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x280) = 1;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined1 **)(param_1 + 0x298) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x2a0) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined1 **)(param_1 + 0x2c0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x2c8) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2f8) = 2;
  *(undefined1 *)(param_1 + 0x2fc) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined2 *)(param_1 + 0x310) = 0x101;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a564aa FUN_140a564aa body=353 status=ok
// SIG undefined FUN_140a564aa(void)

void FUN_140a564aa(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a5652f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a5652f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a5660c FUN_140a5660c body=932 status=ok
// SIG undefined FUN_140a5660c(void)

void FUN_140a5660c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)(param_1 + 0x298);
  if (*(int *)(param_1 + 0x2a0) == 0) {
LAB_140a56629:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      goto LAB_140a56629;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x280);
  if (*(int *)(param_1 + 0x288) == 0) {
LAB_140a56649:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x288) = 0;
      goto LAB_140a56649;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x268);
  if (*(int *)(param_1 + 0x270) == 0) {
LAB_140a56669:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x270) = 0;
      goto LAB_140a56669;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x250);
  if (*(int *)(param_1 + 600) == 0) {
LAB_140a56689:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 600) = 0;
      goto LAB_140a56689;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x238);
  if (*(int *)(param_1 + 0x240) == 0) {
LAB_140a566a9:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x240) = 0;
      goto LAB_140a566a9;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x228) == 0) {
LAB_140a566c9:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x228) = 0;
      goto LAB_140a566c9;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x210) == 0) {
LAB_140a566e9:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x210) = 0;
      goto LAB_140a566e9;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x1f0);
  if (*(int *)(param_1 + 0x1f8) == 0) {
LAB_140a56709:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      goto LAB_140a56709;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x1e0);
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
  plVar3 = (longlong *)(param_1 + 0x1c8);
  if (*(int *)(param_1 + 0x1d0) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a5674b;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140a5674b:
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 140a569b0 FUN_140a569b0 body=428 status=ok
// SIG undefined FUN_140a569b0(void)

longlong * FUN_140a569b0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_140a56a90:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01cc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_140a56a90;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01cc0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 140a56b5c FUN_140a56b5c body=428 status=ok
// SIG undefined FUN_140a56b5c(void)

longlong * FUN_140a56b5c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_140a56c3c:
    *puVar5 = &PTR_LAB_149f05a70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01c50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_140a56c3c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01c50;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 140a56d08 FUN_140a56d08 body=457 status=ok
// SIG undefined FUN_140a56d08(void)

longlong FUN_140a56d08(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  int local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  undefined1 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_58 = *(undefined4 *)(param_3 + 1);
  local_60 = *param_3;
  FUN_140a56ed2(&local_70,param_2,&local_60);
  local_60 = 0x3f800000;
  uStack_58 = 0x3f800000;
  uStack_54 = 0x3f800000;
  local_50 = local_50 & 0xffffff00;
  local_4c = 1;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_140a5aaa0(&local_48,&local_70);
  iVar4 = local_40;
  puVar3 = local_48;
  *(uint *)(param_1 + 0x1d8) = local_50;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)local_60;
  *(undefined4 *)(param_1 + 0x1cc) = local_60._4_4_;
  *(undefined4 *)(param_1 + 0x1d0) = uStack_58;
  *(undefined4 *)(param_1 + 0x1d4) = uStack_54;
  *(undefined1 *)(param_1 + 0x1dc) = local_4c;
  plVar1 = (longlong *)(param_1 + 0x1e0);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x1e8) == 0) {
LAB_140a56db2:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      goto LAB_140a56db2;
    }
  }
  *(undefined8 **)(param_1 + 0x1e0) = puVar3;
  *(int *)(param_1 + 0x1e8) = iVar4;
  if (local_40 == 0) {
LAB_140a56dd7:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140a56dd7;
  }
  if (local_68 != 0) {
    if (local_70 == (undefined8 *)0x0) goto LAB_140a56df5;
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a56df5:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a56ed2 FUN_140a56ed2 body=428 status=ok
// SIG undefined FUN_140a56ed2(void)

longlong * FUN_140a56ed2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_140a56fb2:
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01da0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_140a56fb2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01da0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 140a5707e FUN_140a5707e body=90 status=ok
// SIG undefined FUN_140a5707e(void)

void FUN_140a5707e(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_1;
  FUN_14697f64a(uVar1,CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2) & 0xffffffffffffff01);
  uVar2 = param_2[1];
  if (param_2[0x18] != '\0') {
    uVar2 = 3;
  }
  FUN_141338120(uVar1,uVar2,param_2 + 8,0);
  uVar2 = param_2[2];
  if (param_2[0x40] != '\0') {
    uVar2 = 3;
  }
  FUN_141338120(uVar1,uVar2,param_2 + 0x30,1);
  return;
}



// FUNCTION 140a570d8 FUN_140a570d8 body=1085 status=ok
// SIG undefined FUN_140a570d8(void)

longlong FUN_140a570d8(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x1a8) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  local_40 = "NormalText";
  local_38 = 10;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  uVar4 = FUN_140a57516(lVar3,uVar2,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar4;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e7) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined2 *)(param_1 + 0x22c) = 2;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x249) = 0;
  *(undefined8 *)(param_1 + 0x251) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x284) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x309) = 0;
  *(undefined8 *)(param_1 + 0x311) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x330) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined1 *)(param_1 + 0x35c) = 1;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x100;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined2 *)(param_1 + 0x388) = 0x100;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined2 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined1 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3e4) = 1;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined2 *)(param_1 + 0x3f8) = 0x101;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x414) = 1;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined1 *)(param_1 + 0x42c) = 1;
  *(undefined1 *)(param_1 + 0x441) = 0;
  *(undefined1 *)(param_1 + 0x443) = 0;
  *(undefined2 *)(param_1 + 0x459) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a57516 FUN_140a57516 body=113 status=ok
// SIG undefined FUN_140a57516(void)

void FUN_140a57516(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  lVar1 = (**(code **)(*param_1 + 0x98))(param_1,DAT_14c979cd8,local_28,param_4);
  if (lVar1 == 0) {
    FUN_140a5e2a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a57588 FUN_140a57588 body=1637 status=ok
// SIG undefined FUN_140a57588(void)

longlong *
FUN_140a57588(longlong *param_1,wchar_t *param_2,longlong param_3,longlong *param_4,byte param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_1b8 [32];
  byte local_198;
  undefined1 local_18c [4];
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178 [2];
  longlong *local_168 [2];
  undefined1 local_158 [8];
  longlong *local_150 [2];
  undefined1 local_13c [4];
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118 [2];
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong local_e8;
  wchar_t *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_e8 = param_3;
  local_e0 = param_2;
  if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    plVar4 = param_1 + 0xd;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xe];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0xf] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = param_1[6] + (longlong)iVar6 * 0x20;
        if (*(longlong *)(param_1[6] + (longlong)iVar6 * 0x20) == param_3) {
          if ((lVar7 != 0) && (lVar7 != -8)) {
            plVar4 = *(longlong **)(lVar7 + 8);
            plVar2 = *(longlong **)(lVar7 + 0x10);
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar4 + 0x10))(plVar4,&local_a8);
            plVar8 = (longlong *)0x0;
            if (local_a8 == local_e0) {
              plVar8 = plVar4;
            }
            if ((local_a8 != local_e0 & param_5) == 1) {
              (**(code **)(*plVar4 + 0x10))(plVar4,local_158);
              FUN_145715fae(local_150,local_158);
              FUN_145715fae(local_168,&local_e0);
              FUN_145715fae(local_178,&local_e8);
              local_a8 = L"WrongWidgetStyleType";
              local_a0[0] = 0x14;
              FUN_1446e940c(local_13c,&local_a8);
              local_a8 = L"SlateStyleSet";
              local_a0[0] = 0xd;
              FUN_1446e940c(local_18c,&local_a8);
              FUN_140208bae(local_138,local_18c,local_13c,
                            L"The Slate Widget Style \'{0}\' is not of the desired type. Desired: \'{1}\', Actual: \'{2}\'"
                           );
              FUN_14023409e(&local_188,local_138,1);
              local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
              FUN_14023423e(local_98,local_178);
              local_88 = 4;
              FUN_14023423e(local_78,local_168);
              local_68[0] = 4;
              FUN_14023423e(local_58,local_150);
              local_c0 = &local_48;
              local_c8 = &local_a8;
              FUN_14010d304(&local_b8);
              local_d8 = local_188;
              local_d0 = local_180;
              if (local_180 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_180 + 1) = (int)local_180[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_f8,&local_d8,&local_b8);
              FUN_14007f2db(local_b8,local_b0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              lVar7 = 0x50;
              do {
                plVar4 = *(longlong **)((longlong)local_a0 + lVar7 + -8);
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x10))();
                  *(undefined8 *)((longlong)local_a0 + lVar7 + -8) = 0;
                  *(undefined4 *)((longlong)local_a0 + lVar7) = 0;
                }
                lVar7 = lVar7 + -0x20;
              } while (lVar7 != -0x10);
              if (local_180 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_180 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*local_180)(local_180);
                  LOCK();
                  piVar1 = (int *)((longlong)local_180 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_180 + 0x10))(local_180);
                  }
                }
              }
              if (local_178[0] != (longlong *)0x0) {
                (**(code **)(*local_178[0] + 0x10))();
              }
              if (local_168[0] != (longlong *)0x0) {
                (**(code **)(*local_168[0] + 0x10))();
              }
              if (local_150[0] != (longlong *)0x0) {
                (**(code **)(*local_150[0] + 0x10))();
              }
              (**(code **)(*param_1 + 0xa0))(param_1,1,local_f8);
              if (local_f8[0] != (longlong *)0x0) {
                (**(code **)(*local_f8[0] + 0x10))();
              }
              if (local_138[0] != (longlong *)0x0) {
                (**(code **)(*local_138[0] + 0x10))();
              }
              plVar8 = (longlong *)0x0;
            }
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar2 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            goto LAB_140a576b4;
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((param_1[0x75] == 0) ||
     (plVar4 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar4 == (longlong *)0x0)) {
    plVar8 = param_4;
    if (param_5 == 0) goto LAB_140a576b4;
  }
  else {
    local_198 = param_5;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x98))(plVar4,param_2,param_3,param_4);
    plVar8 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      plVar8 = param_4;
    }
    if ((plVar4 == (longlong *)0x0 & param_5) != 1) goto LAB_140a576b4;
  }
  FUN_145715fae(local_108,&local_e0);
  FUN_145715fae(local_118,&local_e8);
  local_a8 = L"UnknownWidgetStyle";
  local_a0[0] = 0x12;
  FUN_1446e940c(local_158,&local_a8);
  local_a8 = L"SlateStyleSet";
  local_a0[0] = 0xd;
  FUN_1446e940c(local_13c,&local_a8);
  FUN_140208bae(local_138,local_13c,local_158,
                L"Unable to find Slate Widget Style \'{0}\'. Using {1} defaults instead.");
  FUN_14023409e(&local_128,local_138,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_118);
  local_88 = 4;
  FUN_14023423e(local_78,local_108);
  local_c0 = (ulonglong *)local_68;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_128;
  local_d0 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_f8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0x30;
  do {
    plVar4 = *(longlong **)((longlong)local_a0 + lVar7 + -8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      *(undefined8 *)((longlong)local_a0 + lVar7 + -8) = 0;
      *(undefined4 *)((longlong)local_a0 + lVar7) = 0;
    }
    lVar7 = lVar7 + -0x20;
  } while (lVar7 != -0x10);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_120 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
      }
    }
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  (**(code **)(*param_1 + 0xa0))(param_1,3,local_f8);
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  plVar8 = param_4;
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
LAB_140a576b4:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 140a57c18 FUN_140a57c18 body=1142 status=ok
// SIG undefined FUN_140a57c18(void)

undefined8 * FUN_140a57c18(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_149f1d040;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0x3c] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  FUN_140a5808e(param_1 + 0x3c,param_1);
  param_1[0x3e] = 0;
  FUN_140a581a0(param_1 + 0x40);
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ef) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x3f800000;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0x41c00000;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x534) = 2;
  *(undefined1 *)((longlong)param_1 + 0x536) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f800000;
  FUN_140a5808e(param_1 + 0x9c,param_1);
  param_1[0xa8] = 0;
  FUN_140a5808e(param_1 + 0xa8,param_1);
  *(undefined4 *)(param_1 + 0xa9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xab) = 0;
  FUN_140a5808e(param_1 + 0xa9,param_1);
  uVar5 = DAT_14c8463f8._4_4_;
  uVar4 = (undefined4)DAT_14c8463f8;
  uVar3 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0xac) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x564) = uVar3;
  *(undefined4 *)(param_1 + 0xad) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x56c) = uVar5;
  FUN_140a5808e(param_1 + 0xac,param_1);
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  FUN_140a5808e(param_1 + 0xae,param_1);
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  FUN_140a5808e(param_1 + 0xb0,param_1);
  param_1[0xb2] = 0;
  FUN_140a5808e(param_1 + 0xb2,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0xb3] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_140a5808e(param_1 + 0xb3,param_1);
  *(undefined4 *)(param_1 + 0xb5) = 0;
  FUN_140a5808e(param_1 + 0xb5,param_1);
  *(undefined1 *)((longlong)param_1 + 0x5ac) = 0;
  FUN_140a5808e((longlong)param_1 + 0x5ac,param_1);
  *(undefined1 *)((longlong)param_1 + 0x5ad) = 0;
  FUN_140a5808e((longlong)param_1 + 0x5ad,param_1);
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 0;
  FUN_140a5808e((longlong)param_1 + 0x5ae,param_1);
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  FUN_140a5808e(param_1 + 0xb6,param_1);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_140a5808e(param_1 + 0xb8,param_1);
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0x3f800000;
  FUN_140a5808e((longlong)param_1 + 0x5c4,param_1);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  FUN_140a5808e(param_1 + 0xb9,param_1);
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  FUN_140a5808e((longlong)param_1 + 0x5cc,param_1);
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5de) = 0;
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar6 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar6 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  *(byte *)((longlong)param_1 + 0x5dd) = *(byte *)((longlong)param_1 + 0x5dd) | 0xc;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfb;
  return param_1;
}



// FUNCTION 140a5808e FUN_140a5808e body=79 status=ok
// SIG undefined FUN_140a5808e(void)

undefined8 FUN_140a5808e(int param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  if ((longlong)(int)plVar1[1] == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *plVar1;
    lVar4 = (longlong)(int)plVar1[1] * 0x58;
    do {
      if ((*(int *)(lVar2 + 8) == param_1 - (int)param_2) && (*(char *)(lVar2 + 0x50) == '\0'))
      goto LAB_140a580cc;
      lVar2 = lVar2 + 0x58;
      lVar4 = lVar4 + -0x58;
    } while (lVar4 != 0);
    lVar2 = 0;
LAB_140a580cc:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0);
  }
  return uVar3;
}



// FUNCTION 140a580e4 FUN_140a580e4 body=186 status=ok
// SIG undefined FUN_140a580e4(void)

undefined8 * FUN_140a580e4(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98df10) {
    FUN_144b3d300(&DAT_14c98df10);
    if (DAT_14c98df10 == -1) {
      FUN_1446ddc76(local_18,"SWidget",1);
      FUN_1457675c8(&DAT_14c98ded8);
      atexit(FUN_142879c6c);
      _Init_thread_footer(&DAT_14c98df10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98ded8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a581a0 FUN_140a581a0 body=200 status=ok
// SIG undefined FUN_140a581a0(void)

undefined8 * FUN_140a581a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee3200;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x41c00000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = DAT_14c84635c;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 2;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  *(undefined2 *)(param_1 + 0x5a) = 0;
  return param_1;
}



// FUNCTION 140a58268 FUN_140a58268 body=1581 status=ok
// SIG undefined FUN_140a58268(void)

void FUN_140a58268(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 *local_e0;
  int local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 *local_98;
  int local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 *local_80;
  int local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 *local_68;
  int local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 *local_50;
  int local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_40 = *(undefined4 *)(param_2 + 0x1e8);
  local_3c = *(undefined1 *)(param_2 + 0x1ec);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_140a58922(&local_38,param_2 + 0x1f0);
  FUN_140a58a98(param_1 + 0x230,param_1,&local_40);
  if (local_30 == 0) {
LAB_140a582e8:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_140a582e8;
  }
  local_54 = *(undefined1 *)(param_2 + 0x204);
  local_58 = *(undefined4 *)(param_2 + 0x200);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_140a58922(&local_50,param_2 + 0x208);
  FUN_140a58a98(param_1 + 0x234,param_1,&local_58);
  if (local_48 == 0) {
LAB_140a58355:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_140a58355;
  }
  local_6c = *(undefined1 *)(param_2 + 0x21c);
  local_70 = *(undefined4 *)(param_2 + 0x218);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_140a58922(&local_68,param_2 + 0x220);
  FUN_140a58a98(param_1 + 0x238,param_1,&local_70);
  if (local_60 == 0) {
LAB_140a583c2:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_140a583c2;
  }
  local_84 = *(undefined1 *)(param_2 + 0x234);
  local_88 = *(undefined4 *)(param_2 + 0x230);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_140a58922(&local_80,param_2 + 0x238);
  FUN_140a58a98(param_1 + 0x23c,param_1,&local_88);
  if (local_78 == 0) {
LAB_140a5842f:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_140a5842f;
  }
  local_9c = *(undefined1 *)(param_2 + 0x24c);
  local_a0 = *(undefined4 *)(param_2 + 0x248);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_140a58922(&local_98,param_2 + 0x250);
  FUN_140a58a98(param_1 + 0x240,param_1,&local_a0);
  if (local_90 == 0) {
LAB_140a5849c:
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_140a5849c;
  }
  local_b4 = *(undefined1 *)(param_2 + 0x264);
  local_b8 = *(undefined4 *)(param_2 + 0x260);
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  FUN_140a58922(&local_b0,param_2 + 0x268);
  FUN_140a58a98(param_1 + 0x244,param_1,&local_b8);
  if (local_a8 == 0) {
LAB_140a58509:
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b0 != (undefined8 *)0x0) {
    (**(code **)*local_b0)(local_b0,0);
    FUN_1446efa72(&local_b0,0,0,0x10);
    local_a8 = 0;
    goto LAB_140a58509;
  }
  local_cc = *(undefined1 *)(param_2 + 0x27c);
  local_d0 = *(undefined4 *)(param_2 + 0x278);
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_140a58922(&local_c8,param_2 + 0x280);
  FUN_140a58a98(param_1 + 0x248,param_1,&local_d0);
  if (local_c0 == 0) {
LAB_140a58570:
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c8 != (undefined8 *)0x0) {
    (**(code **)*local_c8)(local_c8,0);
    FUN_1446efa72(&local_c8,0,0,0x10);
    local_c0 = 0;
    goto LAB_140a58570;
  }
  local_e4 = *(undefined1 *)(param_2 + 0x294);
  local_e8 = *(undefined4 *)(param_2 + 0x290);
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  FUN_140a58922(&local_e0,param_2 + 0x298);
  FUN_140a58a98(param_1 + 0x24c,param_1,&local_e8);
  if (local_d8 != 0) {
    if (local_e0 == (undefined8 *)0x0) goto LAB_140a585e2;
    (**(code **)*local_e0)(local_e0,0);
    FUN_1446efa72(&local_e0,0,0,0x10);
    local_d8 = 0;
  }
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a585e2:
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x1ac);
  local_108 = *(undefined1 *)(param_2 + 0x1c0);
  local_118 = *(undefined4 *)(param_2 + 0x1b0);
  uStack_114 = *(undefined4 *)(param_2 + 0x1b4);
  uStack_110 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_10c = *(undefined4 *)(param_2 + 0x1bc);
  local_100 = 0;
  local_f8 = 0;
  FUN_140a58be0(&local_100,param_2 + 0x1c8);
  uVar1 = FUN_140a58d14(param_1 + 0x218,&local_118);
  FUN_140a58896(uVar1,param_2 + 0x1d8);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a58896 FUN_140a58896 body=130 status=ok
// SIG undefined FUN_140a58896(void)

longlong FUN_140a58896(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x28) != DAT_14c98dec8) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    FUN_14066af28(*(longlong *)(param_1 + 0x28),uVar5);
  }
  uVar5 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(longlong *)(param_1 + 0x30) = lVar3;
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
  FUN_140a5503c(param_1 + 0x18);
  return param_1;
}



// FUNCTION 140a58918 FUN_140a58918 body=9 status=ok
// SIG undefined FUN_140a58918(void)

void FUN_140a58918(longlong param_1)

{
  FUN_140a58a56(param_1 + 0x10);
  return;
}



// FUNCTION 140a58922 FUN_140a58922 body=306 status=ok
// SIG undefined FUN_140a58922(void)

void FUN_140a58922(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a589ab;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a58984:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a58984;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a589ab;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a589ab:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a58a56 FUN_140a58a56 body=66 status=ok
// SIG undefined FUN_140a58a56(void)

void FUN_140a58a56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeed90;
  FUN_140cc7497(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 140a58a98 FUN_140a58a98 body=258 status=ok
// SIG undefined FUN_140a58a98(void)

void FUN_140a58a98(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0.0) {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    if ((param_3[4] != 0.0) && (*(longlong **)(param_3 + 2) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
      if (cVar2 != '\0') {
        if (param_3[4] == 0.0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_3 + 2);
        }
        (**(code **)(*plVar3 + 0x58))(plVar3,&local_2c);
        *param_3 = local_2c;
      }
    }
    FUN_1400b73c8(param_2,param_1);
    fVar1 = *param_3;
    if ((*param_1 == fVar1) && (!NAN(*param_1) && !NAN(fVar1))) {
      if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    *param_1 = fVar1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 140a58be0 FUN_140a58be0 body=306 status=ok
// SIG undefined FUN_140a58be0(void)

void FUN_140a58be0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a58c69;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a58c42:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a58c42;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a58c69;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a58c69:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a58d14 FUN_140a58d14 body=309 status=ok
// SIG undefined FUN_140a58d14(void)

longlong FUN_140a58d14(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined1 *)(param_2 + 4);
  local_30 = *(undefined8 **)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_28 = param_2[8];
  param_2[8] = 0;
  if (*(longlong *)(param_1 + -0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + -0x18) + 8);
  }
  FUN_140a58e4a(param_1,uVar3,&local_48);
  if (local_28 == 0) {
LAB_140a58d85:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_140a58d85;
  }
  plVar1 = (longlong *)(param_2 + 6);
  if (param_2[8] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a58da9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    param_2[8] = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a58da9:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1 + -0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a58e4a FUN_140a58e4a body=363 status=ok
// SIG undefined FUN_140a58e4a(void)

undefined4 FUN_140a58e4a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a58e83:
    if (*(char *)(param_3 + 2) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a58ed9;
    }
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a58ea6:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a58ea6;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140a58fb6(param_1,param_2,&local_38);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a58e83;
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a58f91:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a58f91;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_1469e6752(param_1,param_2,&local_38);
  }
  (*(code *)(&PTR_FUN_149ef0800)[local_28])(&local_38);
LAB_140a58ed9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a58fb6 FUN_140a58fb6 body=114 status=ok
// SIG undefined FUN_140a58fb6(void)

undefined8 FUN_140a58fb6(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[2] != param_3[2]))
      || ((NAN(param_1[2]) || NAN(param_3[2]) || (param_1[1] != param_3[1])))) ||
     ((NAN(param_1[1]) || NAN(param_3[1]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140a59028 FUN_140a59028 body=1217 status=ok
// SIG undefined FUN_140a59028(void)

void FUN_140a59028(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)(param_1 + 0x318);
  if (*(int *)(param_1 + 800) == 0) {
LAB_140a59045:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 800) = 0;
      goto LAB_140a59045;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x300);
  if (*(int *)(param_1 + 0x308) == 0) {
LAB_140a59065:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x308) = 0;
      goto LAB_140a59065;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x2d8);
  if (*(int *)(param_1 + 0x2e0) == 0) {
LAB_140a59085:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      goto LAB_140a59085;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x2b0);
  if (*(int *)(param_1 + 0x2b8) == 0) {
LAB_140a590a5:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      goto LAB_140a590a5;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x288);
  if (*(int *)(param_1 + 0x290) == 0) {
LAB_140a590c5:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x290) = 0;
      goto LAB_140a590c5;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x260);
  if (*(int *)(param_1 + 0x268) == 0) {
LAB_140a590e5:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x268) = 0;
      goto LAB_140a590e5;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x238);
  if (*(int *)(param_1 + 0x240) == 0) {
LAB_140a59105:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x240) = 0;
      goto LAB_140a59105;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x220) == 0) {
LAB_140a59125:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x220) = 0;
      goto LAB_140a59125;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x210) == 0) {
LAB_140a59145:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x210) = 0;
      goto LAB_140a59145;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x1f8);
  if (*(int *)(param_1 + 0x200) == 0) {
LAB_140a59165:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x200) = 0;
      goto LAB_140a59165;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x1e8);
  if (*(int *)(param_1 + 0x1f0) == 0) {
LAB_140a59185:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      goto LAB_140a59185;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x1d8);
  if (*(int *)(param_1 + 0x1e0) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a591b1;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140a591b1:
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 140a594ea FUN_140a594ea body=93 status=ok
// SIG undefined FUN_140a594ea(void)

undefined8 * FUN_140a594ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a59604(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140a596b2(param_1,iVar1);
      FUN_140a597fc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140a59548 FUN_140a59548 body=106 status=ok
// SIG undefined FUN_140a59548(void)

void * FUN_140a59548(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
    }
    else {
      FUN_140a595b2(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140a595b2 FUN_140a595b2 body=82 status=ok
// SIG undefined FUN_140a595b2(void)

void FUN_140a595b2(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_1469797f0(param_1,0,uVar3);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 140a59604 FUN_140a59604 body=174 status=ok
// SIG undefined FUN_140a59604(void)

void FUN_140a59604(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    do {
      plVar1 = plVar3 + 2;
      if ((int)plVar3[3] == 0) {
LAB_140a59626:
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar2 = (undefined8 *)*plVar1;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(plVar1,0,0,0x10);
          *(undefined4 *)(plVar3 + 3) = 0;
          goto LAB_140a59626;
        }
      }
      if ((int)plVar3[1] == 0) {
LAB_140a59634:
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
      }
      else if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar3)();
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(plVar3 + 1) = 0;
        goto LAB_140a59634;
      }
      plVar3 = plVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a596b2 FUN_140a596b2 body=330 status=ok
// SIG undefined FUN_140a596b2(void)

void FUN_140a596b2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a59720;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140a59720:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140a597fc FUN_140a597fc body=437 status=ok
// SIG undefined FUN_140a597fc(void)

void FUN_140a597fc(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    plVar10 = (longlong *)(param_1 + 0x30);
    do {
      *(char *)(plVar10 + -2) = (char)param_2[4];
      lVar6 = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      lVar7 = param_2[1];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar8 = param_2[3];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(plVar10 + -4) = (int)param_2[2];
      *(undefined4 *)((longlong)plVar10 + -0x1c) = uVar4;
      *(int *)(plVar10 + -3) = (int)lVar8;
      *(undefined4 *)((longlong)plVar10 + -0x14) = uVar5;
      *(int *)(plVar10 + -6) = (int)lVar6;
      *(undefined4 *)((longlong)plVar10 + -0x2c) = uVar2;
      *(int *)(plVar10 + -5) = (int)lVar7;
      *(undefined4 *)((longlong)plVar10 + -0x24) = uVar3;
      *(char *)(plVar10 + -1) = (char)param_2[5];
      *plVar10 = 0;
      *(undefined4 *)(plVar10 + 1) = 0;
      if (param_2 != plVar10 + -6) {
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        plVar1 = (longlong *)param_2[6];
        if (plVar1 == (longlong *)0x0 || (int)param_2[7] == 0) {
          puVar12 = (undefined8 *)0x0;
          iVar11 = 0;
LAB_140a5988a:
          local_40 = 0;
          local_48 = (undefined8 *)0x0;
          *plVar10 = (longlong)puVar12;
          *(int *)(plVar10 + 1) = iVar11;
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,&local_48);
          iVar11 = local_40;
          puVar12 = local_48;
          puVar9 = (undefined8 *)*plVar10;
          local_48 = (undefined8 *)0x0;
          local_40 = 0;
          if ((int)plVar10[1] != 0) {
            if (puVar9 == (undefined8 *)0x0) goto LAB_140a5988a;
            (**(code **)*puVar9)(puVar9,0);
            FUN_1446efa72(plVar10,0,0,0x10);
            *(undefined4 *)(plVar10 + 1) = 0;
            puVar9 = (undefined8 *)*plVar10;
          }
          if (puVar9 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          *plVar10 = (longlong)puVar12;
          *(int *)(plVar10 + 1) = iVar11;
          if (local_40 != 0) {
            if (local_48 == (undefined8 *)0x0) goto LAB_140a5989e;
            (**(code **)*local_48)(local_48,0);
            FUN_1446efa72(&local_48,0,0,0x10);
            local_40 = 0;
          }
        }
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_140a5989e:
      plVar10[2] = 0;
      *(undefined4 *)(plVar10 + 3) = 0;
      FUN_140a599b2(plVar10 + 2,param_2 + 8);
      *(short *)(plVar10 + 4) = (short)param_2[10];
      plVar10 = plVar10 + 0xb;
      param_2 = param_2 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a599b2 FUN_140a599b2 body=306 status=ok
// SIG undefined FUN_140a599b2(void)

void FUN_140a599b2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a59a3b;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a59a14:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a59a14;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a59a3b;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a59a3b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a59ae6 FUN_140a59ae6 body=2055 status=ok
// SIG undefined FUN_140a59ae6(void)

void FUN_140a59ae6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)(param_1 + 0x460);
  if (*(int *)(param_1 + 0x468) == 0) {
LAB_140a59b03:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x468) = 0;
      goto LAB_140a59b03;
    }
  }
  if (*(char *)(param_1 + 0x459) == '\x01') {
    *(undefined1 *)(param_1 + 0x459) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x450);
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
  if (*(char *)(param_1 + 0x443) == '\x01') {
    *(undefined1 *)(param_1 + 0x443) = 0;
  }
  if (*(char *)(param_1 + 0x441) == '\x01') {
    *(undefined1 *)(param_1 + 0x441) = 0;
  }
  plVar3 = (longlong *)(param_1 + 0x430);
  if (*(int *)(param_1 + 0x438) == 0) {
LAB_140a59b5a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x438) = 0;
      goto LAB_140a59b5a;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x418);
  if (*(int *)(param_1 + 0x420) == 0) {
LAB_140a59b7a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x420) = 0;
      goto LAB_140a59b7a;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x400);
  if (*(int *)(param_1 + 0x408) == 0) {
LAB_140a59b9a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x408) = 0;
      goto LAB_140a59b9a;
    }
  }
  plVar3 = (longlong *)(param_1 + 1000);
  if (*(int *)(param_1 + 0x3f0) == 0) {
LAB_140a59bba:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      goto LAB_140a59bba;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x3d0);
  if (*(int *)(param_1 + 0x3d8) == 0) {
LAB_140a59bda:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      goto LAB_140a59bda;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x3a8);
  if (*(int *)(param_1 + 0x3b0) == 0) {
LAB_140a59bfa:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      goto LAB_140a59bfa;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x390);
  if (*(int *)(param_1 + 0x398) == 0) {
LAB_140a59c1a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x398) = 0;
      goto LAB_140a59c1a;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x378);
  if (*(int *)(param_1 + 0x380) == 0) {
LAB_140a59c3a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x380) = 0;
      goto LAB_140a59c3a;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x368) == 0) {
LAB_140a59c5a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x368) = 0;
      goto LAB_140a59c5a;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x348);
  if (*(int *)(param_1 + 0x350) == 0) {
LAB_140a59c7a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x350) = 0;
      goto LAB_140a59c7a;
    }
  }
  if (*(longlong **)(param_1 + 0x330) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x330) + 0x10))();
  }
  plVar3 = (longlong *)(param_1 + 800);
  if (*(int *)(param_1 + 0x328) == 0) {
LAB_140a59cac:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x328) = 0;
      goto LAB_140a59cac;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x300);
  if (*(int *)(param_1 + 0x308) == 0) {
LAB_140a59ccc:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x308) = 0;
      goto LAB_140a59ccc;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x2d8);
  if (*(int *)(param_1 + 0x2e0) == 0) {
LAB_140a59cec:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      goto LAB_140a59cec;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x2b0);
  if (*(int *)(param_1 + 0x2b8) == 0) {
LAB_140a59d0c:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      goto LAB_140a59d0c;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x288);
  if (*(int *)(param_1 + 0x290) == 0) {
LAB_140a59d2c:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x290) = 0;
      goto LAB_140a59d2c;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x260);
  if (*(int *)(param_1 + 0x268) == 0) {
LAB_140a59d4c:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x268) = 0;
      goto LAB_140a59d4c;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x248) == 0) {
LAB_140a59d6c:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x248) = 0;
      goto LAB_140a59d6c;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x210);
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
  plVar3 = (longlong *)(param_1 + 0x1c0);
  if (*(int *)(param_1 + 0x1c8) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a59da8;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140a59da8:
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 140a5a2ee FUN_140a5a2ee body=1968 status=ok
// SIG undefined FUN_140a5a2ee(void)

void FUN_140a5a2ee(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined5 uStack_138;
  undefined8 *local_130;
  int local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined5 uStack_108;
  undefined8 *local_100;
  int local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined2 local_d0 [4];
  undefined8 *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 *local_70;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x1d8) == DAT_14c98f138) {
    bVar1 = *(byte *)(param_1 + 0x38);
    *(byte *)(param_1 + 0x38) = bVar1 & 0xfb;
    if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
      cVar3 = FUN_1400d1184(param_1 + 0x18,param_1);
      if (cVar3 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        FUN_146932214(lVar2,(ulonglong)((*(uint *)(param_1 + 0x28) >> 0x10) * 0x18) +
                            *(longlong *)
                             (*(longlong *)(lVar2 + 0x10) + 0x10 +
                             (ulonglong)((*(uint *)(param_1 + 0x28) & 0xffff) << 6)));
      }
    }
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  }
  local_48 = *(undefined1 *)(param_2 + 600);
  local_58 = *(undefined4 *)(param_2 + 0x248);
  uStack_54 = *(undefined4 *)(param_2 + 0x24c);
  uStack_50 = *(undefined4 *)(param_2 + 0x250);
  uStack_4c = *(undefined4 *)(param_2 + 0x254);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_140a51be2(&local_40,param_2 + 0x260);
  FUN_140a51d16(param_1 + 0x230,param_1,&local_58);
  if (local_38 == 0) {
LAB_140a5a399:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_140a5a399;
  }
  local_78 = *(undefined1 *)(param_2 + 0x2a8);
  local_88 = *(undefined4 *)(param_2 + 0x298);
  uStack_84 = *(undefined4 *)(param_2 + 0x29c);
  uStack_80 = *(undefined4 *)(param_2 + 0x2a0);
  uStack_7c = *(undefined4 *)(param_2 + 0x2a4);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_140a5c51c(&local_70,param_2 + 0x2b0);
  FUN_140a5c650(param_1 + 0x240,param_1,&local_88);
  if (local_68 == 0) {
LAB_140a5a408:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_140a5a408;
  }
  local_a8 = *(undefined1 *)(param_2 + 0x280);
  local_b8 = *(undefined4 *)(param_2 + 0x270);
  uStack_b4 = *(undefined4 *)(param_2 + 0x274);
  uStack_b0 = *(undefined4 *)(param_2 + 0x278);
  uStack_ac = *(undefined4 *)(param_2 + 0x27c);
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_140a51be2(&local_a0,param_2 + 0x288);
  FUN_140a50dd4(param_1 + 0x288,param_1,&local_b8);
  if (local_98 == 0) {
LAB_140a5a479:
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,0);
    FUN_1446efa72(&local_a0,0,0,0x10);
    local_98 = 0;
    goto LAB_140a5a479;
  }
  local_d0[0] = *(undefined2 *)(param_2 + 0x310);
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_14096c7c0(&local_c8,param_2 + 0x318);
  FUN_140a5ad86(param_1 + 0x298,param_1,local_d0);
  if (local_c0 == 0) {
LAB_140a5a4df:
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c8 != (undefined8 *)0x0) {
    (**(code **)*local_c8)(local_c8,0);
    FUN_1446efa72(&local_c8,0,0,0x10);
    local_c0 = 0;
    goto LAB_140a5a4df;
  }
  *(undefined1 *)(param_1 + 0x299) = *(undefined1 *)(param_2 + 0x328);
  local_e8 = *(undefined1 *)(param_2 + 0x230);
  local_f0 = *(undefined8 *)(param_2 + 0x228);
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  FUN_140a5c3e8(&local_e0,param_2 + 0x238);
  FUN_140a5acbc(param_1 + 0x268,param_1,&local_f0);
  if (local_d8 == 0) {
LAB_140a5a55a:
    if (local_e0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e0 != (undefined8 *)0x0) {
    (**(code **)*local_e0)(local_e0,0);
    FUN_1446efa72(&local_e0,0,0,0x10);
    local_d8 = 0;
    goto LAB_140a5a55a;
  }
  uStack_108 = (undefined5)((ulonglong)*(undefined8 *)(param_2 + 0x2cd) >> 0x18);
  local_118 = *(undefined4 *)(param_2 + 0x2c0);
  uStack_114 = *(undefined4 *)(param_2 + 0x2c4);
  uStack_110 = *(undefined4 *)(param_2 + 0x2c8);
  uStack_10c = *(undefined4 *)(param_2 + 0x2cc);
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  FUN_140a5aaa0(&local_100,param_2 + 0x2d8);
  FUN_140a5abdc(param_1 + 0x270,param_1,&local_118);
  if (local_f8 == 0) {
LAB_140a5a5cb:
    if (local_100 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_100 != (undefined8 *)0x0) {
    (**(code **)*local_100)(local_100,0);
    FUN_1446efa72(&local_100,0,0,0x10);
    local_f8 = 0;
    goto LAB_140a5a5cb;
  }
  uStack_138 = (undefined5)((ulonglong)*(undefined8 *)(param_2 + 0x2f5) >> 0x18);
  local_148 = *(undefined4 *)(param_2 + 0x2e8);
  uStack_144 = *(undefined4 *)(param_2 + 0x2ec);
  uStack_140 = *(undefined4 *)(param_2 + 0x2f0);
  uStack_13c = *(undefined4 *)(param_2 + 0x2f4);
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_140a5aaa0(&local_130,param_2 + 0x300);
  FUN_140a5c8a2(param_1 + 0x250,param_1,&local_148);
  if (local_128 != 0) {
    if (local_130 == (undefined8 *)0x0) goto LAB_140a5a64d;
    (**(code **)*local_130)(local_130,0);
    FUN_1446efa72(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5a64d:
  if (*(longlong **)(param_2 + 0x1e8) != (longlong *)0x0 && *(int *)(param_2 + 0x1f0) != 0) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x1e8) + 0x30))();
    if (cVar3 != '\0') {
      local_158 = 0;
      local_150 = 0;
      FUN_145767132(&local_158,param_2 + 0x1e8);
      FUN_1457670ac(param_1,&local_158);
    }
  }
  if (*(longlong **)(param_2 + 0x1f8) != (longlong *)0x0 && *(int *)(param_2 + 0x200) != 0) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x1f8) + 0x30))();
    if (cVar3 != '\0') {
      local_168 = 0;
      local_160 = 0;
      FUN_145767132(&local_168,param_2 + 0x1f8);
      FUN_14697f334(param_1,&local_168);
    }
  }
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0 && *(int *)(param_2 + 0x210) != 0) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0x30))();
    if (cVar3 != '\0') {
      local_178 = 0;
      local_170 = 0;
      FUN_145767132(&local_178,param_2 + 0x208);
      FUN_14697f3b8(param_1,&local_178);
    }
  }
  if (*(longlong **)(param_2 + 0x218) != (longlong *)0x0 && *(int *)(param_2 + 0x220) != 0) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x218) + 0x30))();
    if (cVar3 != '\0') {
      local_188 = 0;
      local_180 = 0;
      FUN_145767132(&local_188,param_2 + 0x218);
      FUN_14697f43c(param_1,&local_188);
    }
  }
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x1bc);
  local_1a8 = *(undefined1 *)(param_2 + 0x1d0);
  local_1b8 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_1b4 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_1b0 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_1ac = *(undefined4 *)(param_2 + 0x1cc);
  local_1a0 = 0;
  local_198 = 0;
  FUN_140a58be0(&local_1a0,param_2 + 0x1d8);
  uVar4 = FUN_140a58d14(param_1 + 0x218,&local_1b8);
  FUN_140a58896(uVar4,param_2 + 0x1a8);
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5aaa0 FUN_140a5aaa0 body=314 status=ok
// SIG undefined FUN_140a5aaa0(void)

void FUN_140a5aaa0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5ab2d;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5ab06:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5ab06;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5ab2d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5ab2d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5abdc FUN_140a5abdc body=129 status=ok
// SIG undefined FUN_140a5abdc(void)

undefined8 FUN_140a5abdc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      uVar2 = FUN_140a5af14(param_1,param_2,param_3 + 0x18);
      return uVar2;
    }
  }
  if (*(char *)(param_3 + 0x14) == '\x01') {
    uVar2 = FUN_1400c0682(param_3);
    uVar2 = FUN_140a5ac5e(param_1,param_2,uVar2);
    return uVar2;
  }
  FUN_1400b73c8(param_2,param_1);
  return 0;
}



// FUNCTION 140a5ac5e FUN_140a5ac5e body=94 status=ok
// SIG undefined FUN_140a5ac5e(void)

uint FUN_140a5ac5e(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  uVar4 = FUN_140a5ca7a(param_1,param_3);
  if ((char)uVar4 == '\0') {
    param_1[4] = param_3[4];
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return uVar4 ^ 1;
}



// FUNCTION 140a5acbc FUN_140a5acbc body=202 status=ok
// SIG undefined FUN_140a5acbc(void)

undefined8 FUN_140a5acbc(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((longlong *)param_3[2] != (longlong *)0x0 && (int)param_3[3] != 0) &&
     (cVar1 = (**(code **)(*(longlong *)param_3[2] + 0x30))(), cVar1 != '\0')) {
    uVar2 = FUN_140a5ae80(param_1,param_2,param_3 + 2);
    return uVar2;
  }
  if ((char)param_3[1] == '\x01') {
    if (((longlong *)param_3[2] != (longlong *)0x0 && (int)param_3[3] != 0) &&
       (cVar1 = (**(code **)(*(longlong *)param_3[2] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_3[3] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_3[2];
      }
      lVar3 = (**(code **)(*plVar4 + 0x58))();
      *param_3 = lVar3;
    }
    FUN_1400b73c8(param_2,param_1);
    if (*param_1 != *param_3) {
      *param_1 = *param_3;
      FUN_14094e0ca(param_2,param_1,0,0);
      return 1;
    }
  }
  else {
    FUN_1400b73c8(param_2,param_1);
  }
  return 0;
}



// FUNCTION 140a5ad86 FUN_140a5ad86 body=176 status=ok
// SIG undefined FUN_140a5ad86(void)

undefined8 FUN_140a5ad86(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      uVar3 = FUN_146a767f4(param_1,param_2,param_3 + 8);
      return uVar3;
    }
  }
  if (param_3[1] == '\x01') {
    if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
      if (cVar1 != '\0') {
        if (*(int *)(param_3 + 0x10) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_3 + 8);
        }
        uVar2 = (**(code **)(*plVar4 + 0x58))();
        *param_3 = uVar2;
      }
    }
    uVar3 = FUN_140a5ae36(param_1,param_2,param_3);
    return uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  return 0;
}



// FUNCTION 140a5ae36 FUN_140a5ae36 body=74 status=ok
// SIG undefined FUN_140a5ae36(void)

bool FUN_140a5ae36(char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_1400b73c8(param_2,param_1);
  cVar1 = *param_1;
  cVar2 = *param_3;
  if (cVar1 != cVar2) {
    *param_1 = cVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return cVar1 != cVar2;
}



// FUNCTION 140a5ae80 FUN_140a5ae80 body=146 status=ok
// SIG undefined FUN_140a5ae80(void)

bool FUN_140a5ae80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  lVar2 = 0;
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    lVar2 = local_40;
  }
  if (local_38 != lVar2) {
    FUN_140a5afa8(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5af14 FUN_140a5af14 body=146 status=ok
// SIG undefined FUN_140a5af14(void)

bool FUN_140a5af14(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  lVar2 = 0;
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    lVar2 = local_40;
  }
  if (local_38 != lVar2) {
    FUN_140a5b054(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5afa8 FUN_140a5afa8 body=171 status=ok
// SIG undefined FUN_140a5afa8(void)

void FUN_140a5afa8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149ef0b10;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a5c3e8(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5b054 FUN_140a5b054 body=171 status=ok
// SIG undefined FUN_140a5b054(void)

void FUN_140a5b054(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149ef0790;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a5aaa0(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5b100 FUN_140a5b100 body=4839 status=ok
// SIG undefined FUN_140a5b100(void)

void FUN_140a5b100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 auStack_668 [32];
  undefined1 *local_648;
  undefined8 **local_640;
  undefined8 *local_638;
  undefined8 **local_630;
  undefined8 *local_628;
  ulonglong uStack_620;
  undefined8 local_610;
  longlong *local_608;
  longlong *local_600;
  undefined4 local_5f8;
  undefined1 local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined8 local_5c8;
  byte local_5c0;
  undefined8 *local_5b8;
  int local_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  byte local_598;
  undefined8 *local_590;
  int local_588;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  byte local_568;
  undefined8 *local_560;
  int local_558;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  byte local_538;
  undefined8 *local_530;
  int local_528;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  byte bStack_504;
  undefined8 *local_500;
  int local_4f8;
  undefined8 local_4f0;
  byte local_4e8;
  undefined8 *local_4e0;
  int local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined4 uStack_4c0;
  undefined3 uStack_4bc;
  longlong local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  longlong *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  byte local_470;
  undefined8 *local_468;
  int local_460;
  undefined4 local_458;
  undefined1 local_454;
  undefined8 *local_450;
  int local_448;
  undefined4 local_440;
  undefined1 local_43c;
  undefined8 *local_438;
  int local_430;
  undefined2 local_428 [4];
  undefined8 *local_420;
  int local_418;
  undefined4 local_410;
  undefined1 local_40c;
  undefined8 *local_408;
  int local_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8;
  undefined8 *local_3e0;
  int local_3d8;
  ushort local_3c8 [4];
  undefined8 *local_3c0;
  int local_3b8;
  undefined2 local_3b0 [4];
  undefined8 *local_3a8;
  int local_3a0;
  undefined2 local_398 [4];
  undefined8 *local_390;
  int local_388;
  undefined4 local_380;
  undefined1 local_37c;
  undefined8 *local_378;
  int local_370;
  longlong *local_368;
  undefined4 local_360;
  undefined1 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 *local_330;
  ulonglong local_328;
  undefined1 local_31c;
  char local_31b;
  undefined1 local_31a;
  char local_319;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308;
  undefined8 *local_300;
  int local_2f8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_668;
  FUN_140a5e6b8(param_1 + 0x200,*(undefined8 *)(param_2 + 0x1d0));
  local_368 = *(longlong **)(param_2 + 0x330);
  if (local_368 != (longlong *)0x0) {
    (**(code **)(*local_368 + 8))();
  }
  local_360 = *(undefined4 *)(param_2 + 0x338);
  local_358 = *(undefined1 *)(param_2 + 0x340);
  local_350 = 0;
  local_348 = 0;
  FUN_1413a4324(&local_350,param_2 + 0x348);
  FUN_140a5ccc6(param_1,&local_368);
  local_37c = *(undefined1 *)(param_2 + 0x35c);
  local_380 = *(undefined4 *)(param_2 + 0x358);
  local_378 = (undefined8 *)0x0;
  local_370 = 0;
  FUN_140a52b3c(&local_378,param_2 + 0x360);
  local_318 = (ulonglong)local_318._4_4_ << 0x20;
  FUN_140a5d1dc(param_1 + 0x5a8,param_1,&local_380);
  if (local_370 == 0) {
LAB_140a5b1f3:
    if (local_378 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_378 != (undefined8 *)0x0) {
    (**(code **)*local_378)(local_378,0);
    FUN_1446efa72(&local_378,0,0,0x10);
    local_370 = 0;
    goto LAB_140a5b1f3;
  }
  local_398[0] = *(undefined2 *)(param_2 + 0x370);
  local_390 = (undefined8 *)0x0;
  local_388 = 0;
  FUN_14096c7c0(&local_390,param_2 + 0x378);
  local_318 = local_318 & 0xffffffffffffff00;
  FUN_140a5df06(param_1 + 0x5ac,param_1,local_398);
  if (local_388 == 0) {
LAB_140a5b265:
    if (local_390 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_390 != (undefined8 *)0x0) {
    (**(code **)*local_390)(local_390,0);
    FUN_1446efa72(&local_390,0,0,0x10);
    local_388 = 0;
    goto LAB_140a5b265;
  }
  local_3b0[0] = *(undefined2 *)(param_2 + 0x388);
  local_3a8 = (undefined8 *)0x0;
  local_3a0 = 0;
  FUN_140a5d77c(&local_3a8,param_2 + 0x390);
  FUN_140a5dd48(param_1 + 0x5ad,param_1,local_3b0);
  if (local_3a0 == 0) {
LAB_140a5b2cb:
    if (local_3a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a8 != (undefined8 *)0x0) {
    (**(code **)*local_3a8)(local_3a8,0);
    FUN_1446efa72(&local_3a8,0,0,0x10);
    local_3a0 = 0;
    goto LAB_140a5b2cb;
  }
  local_3c8[0] = *(ushort *)(param_2 + 0x3a0);
  local_3c0 = (undefined8 *)0x0;
  local_3b8 = 0;
  FUN_140a5d8b0(&local_3c0,param_2 + 0x3a8);
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfdff | (local_3c8[0] >> 8) << 9;
  FUN_140a5db94(param_1 + 0x5ae,param_1,local_3c8);
  if (local_3b8 == 0) {
LAB_140a5b34c:
    if (local_3c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3c0 != (undefined8 *)0x0) {
    (**(code **)*local_3c0)(local_3c0,0);
    FUN_1446efa72(&local_3c0,0,0,0x10);
    local_3b8 = 0;
    goto LAB_140a5b34c;
  }
  local_3e8 = *(undefined1 *)(param_2 + 0x3c8);
  local_3f8 = *(undefined4 *)(param_2 + 0x3b8);
  uStack_3f4 = *(undefined4 *)(param_2 + 0x3bc);
  uStack_3f0 = *(undefined4 *)(param_2 + 0x3c0);
  uStack_3ec = *(undefined4 *)(param_2 + 0x3c4);
  local_3e0 = (undefined8 *)0x0;
  local_3d8 = 0;
  FUN_140a58be0(&local_3e0,param_2 + 0x3d0);
  FUN_140a58e4a(param_1 + 0x5b0,param_1,&local_3f8);
  if (local_3d8 == 0) {
LAB_140a5b3bb:
    if (local_3e0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3e0 != (undefined8 *)0x0) {
    (**(code **)*local_3e0)(local_3e0,0);
    FUN_1446efa72(&local_3e0,0,0,0x10);
    local_3d8 = 0;
    goto LAB_140a5b3bb;
  }
  local_40c = *(undefined1 *)(param_2 + 0x3e4);
  local_410 = *(undefined4 *)(param_2 + 0x3e0);
  local_408 = (undefined8 *)0x0;
  local_400 = 0;
  FUN_140a52b3c(&local_408,param_2 + 1000);
  FUN_140a5e0d2(param_1 + 0x5c4,param_1,&local_410);
  if (local_400 == 0) {
LAB_140a5b428:
    if (local_408 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_408 != (undefined8 *)0x0) {
    (**(code **)*local_408)(local_408,0);
    FUN_1446efa72(&local_408,0,0,0x10);
    local_400 = 0;
    goto LAB_140a5b428;
  }
  local_428[0] = *(undefined2 *)(param_2 + 0x3f8);
  local_420 = (undefined8 *)0x0;
  local_418 = 0;
  FUN_14096c7c0(&local_420,param_2 + 0x400);
  FUN_140a52028(param_1 + 0x5c8,param_1,local_428);
  if (local_418 == 0) {
LAB_140a5b48e:
    if (local_420 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_420 != (undefined8 *)0x0) {
    (**(code **)*local_420)(local_420,0);
    FUN_1446efa72(&local_420,0,0,0x10);
    local_418 = 0;
    goto LAB_140a5b48e;
  }
  local_43c = *(undefined1 *)(param_2 + 0x414);
  local_440 = *(undefined4 *)(param_2 + 0x410);
  local_438 = (undefined8 *)0x0;
  local_430 = 0;
  FUN_140a5d648(&local_438,param_2 + 0x418);
  FUN_140a5d9e4(param_1 + 0x5c0,param_1,&local_440);
  if (local_430 == 0) {
LAB_140a5b4fb:
    if (local_438 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_438 != (undefined8 *)0x0) {
    (**(code **)*local_438)(local_438,0);
    FUN_1446efa72(&local_438,0,0,0x10);
    local_430 = 0;
    goto LAB_140a5b4fb;
  }
  local_454 = *(undefined1 *)(param_2 + 0x42c);
  local_458 = *(undefined4 *)(param_2 + 0x428);
  local_450 = (undefined8 *)0x0;
  local_448 = 0;
  FUN_140a52b3c(&local_450,param_2 + 0x430);
  local_318 = local_318 & 0xffffffff00000000;
  FUN_140a5d1dc(param_1 + 0x5cc,param_1,&local_458);
  if (local_448 == 0) {
LAB_140a5b570:
    if (local_450 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_450 != (undefined8 *)0x0) {
    (**(code **)*local_450)(local_450,0);
    FUN_1446efa72(&local_450,0,0,0x10);
    local_448 = 0;
    goto LAB_140a5b570;
  }
  local_4d0 = *(longlong *)(param_2 + 0x1d8);
  if ((local_4d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_4c8 = *(longlong *)(param_2 + 0x1e0);
  if ((local_4c8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uStack_4c0 = *(undefined4 *)(param_2 + 0x1e8);
  uStack_4bc = (undefined3)((uint)*(undefined4 *)(param_2 + 0x1eb) >> 8);
  local_4b8 = *(longlong *)(param_2 + 0x1f0);
  if ((local_4b8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_4b0 = *(undefined8 *)(param_2 + 0x1f8);
  uStack_4a8 = *(undefined8 *)(param_2 + 0x200);
  local_4a0 = *(undefined8 *)(param_2 + 0x208);
  local_498 = *(longlong **)(param_2 + 0x210);
  if (local_498 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_498 + 1) = (int)local_498[1] + 1;
    UNLOCK();
  }
  uStack_490 = *(undefined4 *)(param_2 + 0x218);
  uStack_48c = *(undefined4 *)(param_2 + 0x21c);
  uStack_488 = *(undefined4 *)(param_2 + 0x220);
  local_484 = *(undefined4 *)(param_2 + 0x224);
  uStack_480 = *(undefined4 *)(param_2 + 0x228);
  uStack_47c = *(undefined4 *)(param_2 + 0x22c);
  uStack_478 = *(undefined4 *)(param_2 + 0x230);
  local_470 = *(byte *)(param_2 + 0x238);
  local_468 = (undefined8 *)0x0;
  local_460 = 0;
  FUN_140a5d470(&local_468,param_2 + 0x240);
  *(ushort *)(param_1 + 0x5dc) =
       ((ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfffd) + (ushort)local_470 * 2;
  FUN_140a5cd42(param_1 + 0x4e0,param_1,&local_4d0);
  if (local_460 == 0) {
LAB_140a5b6b7:
    if (local_468 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_468 != (undefined8 *)0x0) {
    (**(code **)*local_468)(local_468,0);
    FUN_1446efa72(&local_468,0,0,0x10);
    local_460 = 0;
    goto LAB_140a5b6b7;
  }
  plVar5 = local_498;
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_498 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_498)(local_498);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_4e8 = *(byte *)(param_2 + 600);
  local_4f0 = *(undefined8 *)(param_2 + 0x250);
  local_4e0 = (undefined8 *)0x0;
  local_4d8 = 0;
  FUN_140a5c3e8(&local_4e0,param_2 + 0x260);
  *(ushort *)(param_1 + 0x5dc) =
       ((ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfffb) + (ushort)local_4e8 * 4;
  FUN_140a5cfd6(param_1 + 0x540,param_1,&local_4f0);
  if (local_4d8 == 0) {
LAB_140a5b74e:
    if (local_4e0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_4e0 != (undefined8 *)0x0) {
    (**(code **)*local_4e0)(local_4e0,0);
    FUN_1446efa72(&local_4e0,0,0,0x10);
    local_4d8 = 0;
    goto LAB_140a5b74e;
  }
  uStack_508 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x27d) >> 0x18);
  bStack_504 = (byte)((ulonglong)*(undefined8 *)(param_2 + 0x27d) >> 0x38);
  local_518 = *(undefined4 *)(param_2 + 0x270);
  uStack_514 = *(undefined4 *)(param_2 + 0x274);
  uStack_510 = *(undefined4 *)(param_2 + 0x278);
  uStack_50c = *(undefined4 *)(param_2 + 0x27c);
  local_500 = (undefined8 *)0x0;
  local_4f8 = 0;
  FUN_140a5aaa0(&local_500,param_2 + 0x288);
  *(ushort *)(param_1 + 0x5dc) =
       ((ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfff7) + (ushort)bStack_504 * 8;
  FUN_140a5c8a2(param_1 + 0x548,param_1,&local_518);
  if (local_4f8 == 0) {
LAB_140a5b7d6:
    if (local_500 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_500 != (undefined8 *)0x0) {
    (**(code **)*local_500)(local_500,0);
    FUN_1446efa72(&local_500,0,0,0x10);
    local_4f8 = 0;
    goto LAB_140a5b7d6;
  }
  local_538 = *(byte *)(param_2 + 0x2a8);
  local_548 = *(undefined4 *)(param_2 + 0x298);
  uStack_544 = *(undefined4 *)(param_2 + 0x29c);
  uStack_540 = *(undefined4 *)(param_2 + 0x2a0);
  uStack_53c = *(undefined4 *)(param_2 + 0x2a4);
  local_530 = (undefined8 *)0x0;
  local_528 = 0;
  FUN_140a51be2(&local_530,param_2 + 0x2b0);
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xffef | (ushort)local_538 << 4;
  FUN_140a51d16(param_1 + 0x560,param_1,&local_548);
  if (local_528 == 0) {
LAB_140a5b85e:
    if (local_530 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_530 != (undefined8 *)0x0) {
    (**(code **)*local_530)(local_530,0);
    FUN_1446efa72(&local_530,0,0,0x10);
    local_528 = 0;
    goto LAB_140a5b85e;
  }
  local_568 = *(byte *)(param_2 + 0x2d0);
  local_578 = *(undefined4 *)(param_2 + 0x2c0);
  uStack_574 = *(undefined4 *)(param_2 + 0x2c4);
  uStack_570 = *(undefined4 *)(param_2 + 0x2c8);
  uStack_56c = *(undefined4 *)(param_2 + 0x2cc);
  local_560 = (undefined8 *)0x0;
  local_558 = 0;
  FUN_140a5c51c(&local_560,param_2 + 0x2d8);
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xffdf | (ushort)local_568 << 5;
  FUN_140a5c650(param_1 + 0x570,param_1,&local_578);
  if (local_558 == 0) {
LAB_140a5b8e6:
    if (local_560 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_560 != (undefined8 *)0x0) {
    (**(code **)*local_560)(local_560,0);
    FUN_1446efa72(&local_560,0,0,0x10);
    local_558 = 0;
    goto LAB_140a5b8e6;
  }
  local_598 = *(byte *)(param_2 + 0x2f8);
  local_5a8 = *(undefined4 *)(param_2 + 0x2e8);
  uStack_5a4 = *(undefined4 *)(param_2 + 0x2ec);
  uStack_5a0 = *(undefined4 *)(param_2 + 0x2f0);
  uStack_59c = *(undefined4 *)(param_2 + 0x2f4);
  local_590 = (undefined8 *)0x0;
  local_588 = 0;
  FUN_140a5c51c(&local_590,param_2 + 0x300);
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xffbf | (ushort)local_598 << 6;
  FUN_140a5c650(param_1 + 0x580,param_1,&local_5a8);
  if (local_588 == 0) {
LAB_140a5b96e:
    if (local_590 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_590 != (undefined8 *)0x0) {
    (**(code **)*local_590)(local_590,0);
    FUN_1446efa72(&local_590,0,0,0x10);
    local_588 = 0;
    goto LAB_140a5b96e;
  }
  local_5c0 = *(byte *)(param_2 + 0x318);
  local_5c8 = *(undefined8 *)(param_2 + 0x310);
  local_5b8 = (undefined8 *)0x0;
  local_5b0 = 0;
  FUN_140a5c3e8(&local_5b8,param_2 + 800);
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xff7f | (ushort)local_5c0 << 7;
  FUN_140a5cfd6(param_1 + 0x590,param_1,&local_5c8);
  if (local_5b0 == 0) {
LAB_140a5b9f8:
    if (local_5b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_5b8 != (undefined8 *)0x0) {
    (**(code **)*local_5b8)(local_5b8,0);
    FUN_1446efa72(&local_5b8,0,0,0x10);
    local_5b0 = 0;
    goto LAB_140a5b9f8;
  }
  *(undefined1 *)(param_1 + 0x5de) = *(undefined1 *)(param_2 + 0x45a);
  if (*(longlong **)(param_2 + 0x460) != (longlong *)0x0 && *(int *)(param_2 + 0x468) != 0) {
    cVar8 = (**(code **)(**(longlong **)(param_2 + 0x460) + 0x30))();
    if (cVar8 != '\0') {
      local_5d8 = 0;
      local_5d0 = 0;
      FUN_145767132(&local_5d8,param_2 + 0x460);
      FUN_14697f43c(param_1,&local_5d8);
    }
  }
  local_600 = *(longlong **)(param_2 + 0x1a8);
  if (local_600 != (longlong *)0x0) {
    (**(code **)(*local_600 + 8))();
  }
  local_5f8 = *(undefined4 *)(param_2 + 0x1b0);
  local_5f0 = *(undefined1 *)(param_2 + 0x1b8);
  local_5e8 = 0;
  local_5e0 = 0;
  FUN_1413a4324(&local_5e8,param_2 + 0x1c0);
  FUN_140a5cace(param_1,&local_600);
  FUN_140a5c830(&local_610);
  local_628 = (undefined8 *)0x0;
  uStack_620 = 0;
  uVar9 = FUN_140a5e2a8();
  uVar10 = FUN_14001cc68(0x70,0x10);
  local_330 = *(undefined8 **)(param_2 + 0x448);
  local_328 = *(ulonglong *)(param_2 + 0x450);
  if (local_328 != 0) {
    LOCK();
    *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
    UNLOCK();
  }
  local_340 = local_610;
  local_338 = local_608;
  if (local_608 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_608 + 1) = (int)local_608[1] + 1;
    UNLOCK();
  }
  local_319 = *(char *)(param_2 + 0x443);
  if (local_319 == '\x01') {
    local_31a = *(undefined1 *)(param_2 + 0x442);
  }
  local_31b = *(char *)(param_2 + 0x441);
  if (local_31b == '\x01') {
    local_31c = *(undefined1 *)(param_2 + 0x440);
  }
  FUN_140e9ea3a(&local_318,uVar9);
  local_630 = &local_330;
  local_638 = &local_340;
  local_640 = &local_628;
  local_648 = &local_31a;
  FUN_140a5eb46(uVar10,param_1,&local_318,&local_31c);
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  if (lVar4 != 0) {
    FUN_140f1f828(lVar4);
    FUN_1400020a8(lVar4);
  }
  if ((int)uStack_620 == 0) {
LAB_140a5bbad:
    if (local_628 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_628 != (undefined8 *)0x0) {
    (**(code **)*local_628)(local_628,0);
    FUN_1446efa72(&local_628,0,0,0x10);
    uStack_620 = uStack_620 & 0xffffffff00000000;
    goto LAB_140a5bbad;
  }
  if (local_608 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_608 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_608)(local_608);
      LOCK();
      piVar2 = (int *)((longlong)local_608 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_608 + 0x10))(local_608);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1f0);
  local_330 = (undefined8 *)0x0;
  local_328 = local_328 & 0xffffffff00000000;
  FUN_1446efa72(&local_330,0,2,0x10);
  local_328 = CONCAT44(local_328._4_4_,2);
  *local_330 = &PTR_LAB_149f134c0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_330[2] = lVar13;
  *local_330 = &PTR_FUN_149f1eca0;
  local_330[3] = param_1;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 1;
  local_300 = (undefined8 *)0x0;
  local_2f8 = 0;
  FUN_140a5cea4(&local_300,&local_330);
  lVar4 = *plVar5;
  iVar6 = (int)uStack_310 + -1;
  if ((int)uStack_310 == 0) {
    iVar6 = 0;
  }
  FUN_1402980a2(lVar4 + 0x128,local_318,iVar6);
  *(undefined1 *)(lVar4 + 0x138) = local_308;
  FUN_140a5cea4(lVar4 + 0x140,&local_300);
  if (local_2f8 == 0) {
LAB_140a5bcb3:
    if (local_300 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_300 != (undefined8 *)0x0) {
    (**(code **)*local_300)(local_300,0);
    FUN_1446efa72(&local_300,0,0,0x10);
    local_2f8 = 0;
    goto LAB_140a5bcb3;
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if ((int)local_328 == 0) {
LAB_140a5bce3:
    if (local_330 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_330 != (undefined8 *)0x0) {
    (**(code **)*local_330)(local_330,0);
    FUN_1446efa72(&local_330,0,0,0x10);
    local_328 = local_328 & 0xffffffff00000000;
    goto LAB_140a5bce3;
  }
  bVar11 = *(byte *)(param_2 + 0x459);
  if (bVar11 == 0) {
    pcVar14 = (char *)(param_1 + 0x4d1);
    bVar11 = 1;
  }
  else {
    pcVar14 = (char *)(param_2 + 0x458);
  }
  lVar4 = **(longlong **)(param_1 + 0x1f0);
  bVar3 = *(byte *)(lVar4 + 0x151);
  bVar7 = *(char *)(lVar4 + 0x150) == *pcVar14;
  if ((bVar3 & 1) == 0) {
    bVar7 = bVar3 == bVar11;
  }
  if ((bool)(bVar3 == bVar11 & bVar7)) goto LAB_140a5bd5f;
  if (bVar11 == 0) {
    if ((bVar3 & 1) != 0) {
      uVar12 = 0;
      goto LAB_140a5bd52;
    }
  }
  else {
    *(char *)(lVar4 + 0x150) = *pcVar14;
    uVar12 = 1;
LAB_140a5bd52:
    *(undefined1 *)(lVar4 + 0x151) = uVar12;
  }
  *(byte *)(lVar4 + 0x90) = *(byte *)(lVar4 + 0x90) | 1;
LAB_140a5bd5f:
  if ((local_38 ^ (ulonglong)auStack_668) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5c3e8 FUN_140a5c3e8 body=307 status=ok
// SIG undefined FUN_140a5c3e8(void)

void FUN_140a5c3e8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5c471;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5c44a:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5c44a;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5c471;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5c471:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5c51c FUN_140a5c51c body=306 status=ok
// SIG undefined FUN_140a5c51c(void)

void FUN_140a5c51c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5c5a5;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5c57e:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5c57e;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5c5a5;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5c5a5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5c650 FUN_140a5c650 body=363 status=ok
// SIG undefined FUN_140a5c650(void)

undefined4 FUN_140a5c650(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a5c689:
    if (*(char *)(param_3 + 2) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a5c69c;
    }
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a5c6da:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a5c6da;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140a5c7be(param_1,param_2,&local_38);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5c689;
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a5c797:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a5c797;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_1469e4c22(param_1,param_2,&local_38);
  }
  (*(code *)(&PTR_LAB_149f051e0)[local_28])(&local_38);
LAB_140a5c69c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5c7be FUN_140a5c7be body=114 status=ok
// SIG undefined FUN_140a5c7be(void)

undefined8 FUN_140a5c7be(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[1] != param_3[1]))
      || ((NAN(param_1[1]) || NAN(param_3[1]) || (param_1[2] != param_3[2])))) ||
     ((NAN(param_1[2]) || NAN(param_3[2]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140a5c830 FUN_140a5c830 body=114 status=ok
// SIG undefined FUN_140a5c830(void)

undefined8 * FUN_140a5c830(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_149f091d0;
  *(undefined2 *)(puVar1 + 2) = 0x100;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f0df80;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 140a5c8a2 FUN_140a5c8a2 body=377 status=ok
// SIG undefined FUN_140a5c8a2(void)

undefined4 FUN_140a5c8a2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a5c8db:
    if (*(char *)((longlong)param_3 + 0x14) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a5c938;
    }
    *(undefined1 *)((longlong)param_3 + 0x14) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a5c8fe:
      local_38 = *(undefined4 *)(param_3 + 2);
      local_48 = *param_3;
      uStack_40 = *(undefined4 *)(param_3 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_30 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a5c8fe;
      local_48 = param_3[3];
      param_3[3] = 0;
      uStack_40 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_30 = 1;
    }
    uVar2 = FUN_140a5ca1e(param_1,param_2,&local_48);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5c8db;
    *(undefined1 *)((longlong)param_3 + 0x14) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140a5c9f0:
      local_38 = *(undefined4 *)(param_3 + 2);
      local_48 = *param_3;
      uStack_40 = *(undefined4 *)(param_3 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_30 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140a5c9f0;
      local_48 = param_3[3];
      param_3[3] = 0;
      uStack_40 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_30 = 1;
    }
    uVar2 = FUN_146979486(param_1,param_2,&local_48);
  }
  (*(code *)(&PTR_LAB_149ef07c0)[local_30])(&local_48);
LAB_140a5c938:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5ca1e FUN_140a5ca1e body=92 status=ok
// SIG undefined FUN_140a5ca1e(void)

uint FUN_140a5ca1e(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  uVar4 = FUN_140a5ca7a(param_1,param_3);
  if ((char)uVar4 == '\0') {
    param_1[4] = param_3[4];
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return uVar4 ^ 1;
}



// FUNCTION 140a5ca7a FUN_140a5ca7a body=84 status=ok
// SIG undefined FUN_140a5ca7a(void)

bool FUN_140a5ca7a(float *param_1,float *param_2)

{
  bool bVar1;
  
  if ((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) || (param_1[1] != param_2[1]))
       || ((NAN(param_1[1]) || NAN(param_2[1]) || (param_1[2] != param_2[2])))) ||
      ((NAN(param_1[2]) || NAN(param_2[2]) ||
       ((param_1[3] != param_2[3] || (NAN(param_1[3]) || NAN(param_2[3]))))))) ||
     (*(char *)(param_1 + 4) != *(char *)(param_2 + 4))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(char *)(param_1 + 4) == '\x01') {
      bVar1 = *(char *)((longlong)param_1 + 0x11) == *(char *)((longlong)param_2 + 0x11);
    }
  }
  return bVar1;
}



// FUNCTION 140a5cace FUN_140a5cace body=182 status=ok
// SIG undefined FUN_140a5cace(void)

void FUN_140a5cace(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  
  if (((int)param_2[4] == 0) || ((longlong *)param_2[3] == (longlong *)0x0)) {
    uVar4 = 0;
  }
  else {
    bVar3 = (**(code **)(*(longlong *)param_2[3] + 0x30))();
    uVar4 = (ushort)bVar3;
  }
  *(ushort *)(param_1 + 0x5dc) = uVar4 | (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfffe;
  FUN_140a5cb84(param_1 + 0x1e0,param_1,param_2);
  plVar1 = param_2 + 3;
  if ((int)param_2[4] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a5cb1b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a5cb1b:
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a5cb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140a5cb84 FUN_140a5cb84 body=205 status=ok
// SIG undefined FUN_140a5cb84(void)

undefined4 FUN_140a5cb84(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 0x18) == (longlong *)0x0 || *(int *)(param_3 + 0x20) == 0) {
LAB_140a5cbbb:
    if (*(char *)(param_3 + 0x10) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a5cbce;
    }
    FUN_140a5cc62(param_3,local_40);
    uVar2 = FUN_140a5d180(param_1,param_2,local_40);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5cbbb;
    FUN_140a5cc62(param_3,local_40);
    uVar2 = FUN_140a5d3d0(param_1,param_2,local_40);
  }
  (*(code *)(&PTR_LAB_149f1ed40)[local_30])(local_40);
LAB_140a5cbce:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5cc62 FUN_140a5cc62 body=99 status=ok
// SIG undefined FUN_140a5cc62(void)

undefined8 * FUN_140a5cc62(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    if (cVar2 != '\0') {
      *param_2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = 0;
      uVar1 = 1;
      goto LAB_140a5ccb8;
    }
  }
  FUN_14023423e(param_2,param_1);
  uVar1 = 0;
LAB_140a5ccb8:
  *(undefined1 *)(param_2 + 2) = uVar1;
  return param_2;
}



// FUNCTION 140a5ccc6 FUN_140a5ccc6 body=123 status=ok
// SIG undefined FUN_140a5ccc6(void)

void FUN_140a5ccc6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5cb84(param_1 + 0x598,param_1,param_2);
  plVar1 = param_2 + 3;
  if ((int)param_2[4] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a5ccf3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a5ccf3:
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a5cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140a5cd42 FUN_140a5cd42 body=214 status=ok
// SIG undefined FUN_140a5cd42(void)

undefined4 FUN_140a5cd42(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [96];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong **)(param_3 + 0x68) == (longlong *)0x0 || *(int *)(param_3 + 0x70) == 0) {
LAB_140a5cd7f:
    if (*(char *)(param_3 + 0x60) != '\x01') {
      FUN_1400b73c8(param_2,param_1);
      uVar2 = 0;
      goto LAB_140a5cd92;
    }
    FUN_140a5e44a(param_3,local_90);
    uVar2 = FUN_140a5e566(param_1,param_2,local_90);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x68) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5cd7f;
    FUN_140a5e44a(param_3,local_90);
    uVar2 = FUN_146afacf8(param_1,param_2,local_90);
  }
  (*(code *)(&PTR_FUN_149f1ed80)[local_30])(local_90);
LAB_140a5cd92:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5ce1a FUN_140a5ce1a body=55 status=ok
// SIG undefined FUN_140a5ce1a(void)

void FUN_140a5ce1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000140a5ce4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a5ce52 FUN_140a5ce52 body=81 status=ok
// SIG undefined FUN_140a5ce52(void)

void FUN_140a5ce52(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a5cea4 FUN_140a5cea4 body=305 status=ok
// SIG undefined FUN_140a5cea4(void)

void FUN_140a5cea4(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5cf3e;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5cf17:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5cf17;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5cf3e;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5cf3e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5cfd6 FUN_140a5cfd6 body=422 status=ok
// SIG undefined FUN_140a5cfd6(void)

ulonglong FUN_140a5cfd6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)param_3[2] != (longlong *)0x0 && (int)param_3[3] != 0) {
    cVar1 = (**(code **)(*(longlong *)param_3[2] + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 1) = 0;
      if ((longlong *)param_3[2] == (longlong *)0x0 || (int)param_3[3] == 0) {
LAB_140a5d143:
        local_48 = *param_3;
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(*(longlong *)param_3[2] + 0x30))();
        if (cVar1 == '\0') goto LAB_140a5d143;
        local_48 = param_3[2];
        param_3[2] = 0;
        local_40 = (undefined4)param_3[3];
        *(undefined4 *)(param_3 + 3) = 0;
        local_38 = 1;
      }
      uVar2 = FUN_14697c790(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_FUN_149ef0b40)[local_38])(&local_48);
      goto LAB_140a5d026;
    }
  }
  if ((char)param_3[1] != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    uVar3 = 0;
    goto LAB_140a5d026;
  }
  *(undefined1 *)(param_3 + 1) = 0;
  if ((longlong *)param_3[2] == (longlong *)0x0 || (int)param_3[3] == 0) {
LAB_140a5d068:
    lVar5 = *param_3;
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[2] + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5d068;
    lVar5 = param_3[2];
    param_3[2] = 0;
    local_40 = (undefined4)param_3[3];
    *(undefined4 *)(param_3 + 3) = 0;
    lVar4 = 1;
    local_38 = 1;
  }
  local_48 = lVar5;
  FUN_1400b73c8(param_2,param_1);
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != lVar5);
  if (*param_1 != lVar5) {
    *param_1 = lVar5;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_FUN_149ef0b40)[lVar4])(&local_48);
LAB_140a5d026:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d17e FUN_140a5d17e body=1 status=ok
// SIG undefined FUN_140a5d17e(void)

void FUN_140a5d17e(void)

{
  return;
}



// FUNCTION 140a5d180 FUN_140a5d180 body=92 status=ok
// SIG undefined FUN_140a5d180(void)

uint FUN_140a5d180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_1400b73c8(param_2,param_1);
  uVar1 = FUN_14010cee6(param_1,param_3,3);
  if ((char)uVar1 == '\0') {
    FUN_140008f88(param_1,param_3);
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return uVar1 ^ 1;
}



// FUNCTION 140a5d1dc FUN_140a5d1dc body=471 status=ok
// SIG undefined FUN_140a5d1dc(void)

uint FUN_140a5d1dc(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0.0) {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar2 != '\0') {
      *(undefined1 *)(param_3 + 1) = 0;
      if ((param_3[4] == 0.0) || (*(longlong **)(param_3 + 2) == (longlong *)0x0)) {
LAB_140a5d3bf:
        local_58 = CONCAT44(local_58._4_4_,*param_3);
        local_48 = 0;
      }
      else {
        cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
        if (cVar2 == '\0') goto LAB_140a5d3bf;
        local_58 = *(undefined8 *)(param_3 + 2);
        param_3[2] = 0.0;
        param_3[3] = 0.0;
        local_50 = param_3[4];
        param_3[4] = 0.0;
        local_48 = 1;
      }
      uVar4 = FUN_145766c16(param_1,param_2,&local_58);
      (*(code *)(&PTR_caseD_2_149ef0840)[local_48])(&local_58);
      goto LAB_140a5d28e;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  *(undefined1 *)(param_3 + 1) = 0;
  if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0.0) {
LAB_140a5d246:
    fVar3 = *param_3;
    local_58 = CONCAT44(local_58._4_4_,fVar3);
    local_48 = 0;
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar2 == '\0') goto LAB_140a5d246;
    local_58 = *(undefined8 *)(param_3 + 2);
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    local_50 = param_3[4];
    param_3[4] = 0.0;
    local_48 = 1;
    fVar3 = (float)local_58;
    lVar5 = 1;
  }
  FUN_1400b73c8(param_2,param_1);
  fVar1 = *param_1;
  uVar4 = -(uint)(fVar3 != fVar1) & 1;
  if ((fVar1 != fVar3) || (NAN(fVar1) || NAN(fVar3))) {
    *param_1 = fVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_caseD_2_149ef0840)[lVar5])(&local_58);
LAB_140a5d28e:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d3d0 FUN_140a5d3d0 body=146 status=ok
// SIG undefined FUN_140a5d3d0(void)

bool FUN_140a5d3d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  lVar2 = 0;
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    lVar2 = local_40;
  }
  if (local_38 != lVar2) {
    FUN_140a5d5a4(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d470 FUN_140a5d470 body=306 status=ok
// SIG undefined FUN_140a5d470(void)

void FUN_140a5d470(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5d4f9;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5d4d2:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5d4d2;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5d4f9;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5d4f9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d5a4 FUN_140a5d5a4 body=163 status=ok
// SIG undefined FUN_140a5d5a4(void)

void FUN_140a5d5a4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149f1ed10;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d648 FUN_140a5d648 body=306 status=ok
// SIG undefined FUN_140a5d648(void)

void FUN_140a5d648(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5d6d1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5d6aa:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5d6aa;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5d6d1;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5d6d1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d77c FUN_140a5d77c body=306 status=ok
// SIG undefined FUN_140a5d77c(void)

void FUN_140a5d77c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5d805;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5d7de:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5d7de;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5d805;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5d805:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d8b0 FUN_140a5d8b0 body=306 status=ok
// SIG undefined FUN_140a5d8b0(void)

void FUN_140a5d8b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5d939;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5d912:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5d912;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5d939;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5d939:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5d9e4 FUN_140a5d9e4 body=428 status=ok
// SIG undefined FUN_140a5d9e4(void)

ulonglong FUN_140a5d9e4(int *param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  uint local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 1) = 0;
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_140a5db59:
        local_48 = CONCAT44(local_48._4_4_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
        if (cVar1 == '\0') goto LAB_140a5db59;
        local_48 = *(ulonglong *)(param_3 + 2);
        param_3[2] = 0;
        param_3[3] = 0;
        local_40 = param_3[4];
        param_3[4] = 0;
        local_38 = 1;
      }
      uVar2 = FUN_146afb396(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_FUN_149f1ee40)[local_38])(&local_48);
      goto LAB_140a5da7b;
    }
  }
  if ((char)param_3[1] != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    uVar3 = 0;
    goto LAB_140a5da7b;
  }
  *(undefined1 *)(param_3 + 1) = 0;
  if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_140a5da48:
    uVar3 = (ulonglong)*param_3;
    local_48 = CONCAT44(local_48._4_4_,*param_3);
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5da48;
    uVar3 = *(ulonglong *)(param_3 + 2);
    param_3[2] = 0;
    param_3[3] = 0;
    local_40 = param_3[4];
    param_3[4] = 0;
    local_38 = 1;
    lVar4 = 1;
    local_48 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  iVar5 = (int)uVar3;
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != iVar5);
  if (*param_1 != iVar5) {
    *param_1 = iVar5;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_FUN_149f1ee40)[lVar4])(&local_48);
LAB_140a5da7b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5db92 FUN_140a5db92 body=1 status=ok
// SIG undefined FUN_140a5db92(void)

void FUN_140a5db92(void)

{
  return;
}



// FUNCTION 140a5db94 FUN_140a5db94 body=432 status=ok
// SIG undefined FUN_140a5db94(void)

ulonglong FUN_140a5db94(char *param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined4 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      param_3[1] = 0;
      if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5dd0d:
        local_48 = CONCAT71(local_48._1_7_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
        if (cVar1 == '\0') goto LAB_140a5dd0d;
        local_48 = *(ulonglong *)(param_3 + 8);
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        local_40 = *(undefined4 *)(param_3 + 0x10);
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        local_38 = 1;
      }
      uVar2 = FUN_146afb18e(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_FUN_149f1ee00)[local_38])(&local_48);
      goto LAB_140a5dbe4;
    }
  }
  if (param_3[1] != 1) {
    FUN_1400b73c8(param_2,param_1);
    uVar3 = 0;
    goto LAB_140a5dbe4;
  }
  param_3[1] = 0;
  if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5dc26:
    uVar3 = (ulonglong)*param_3;
    local_48 = CONCAT71(local_48._1_7_,*param_3);
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5dc26;
    uVar3 = *(ulonglong *)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    local_40 = *(undefined4 *)(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_38 = 1;
    lVar4 = 1;
    local_48 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != cVar1);
  if (*param_1 != cVar1) {
    *param_1 = cVar1;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_FUN_149f1ee00)[lVar4])(&local_48);
LAB_140a5dbe4:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5dd46 FUN_140a5dd46 body=1 status=ok
// SIG undefined FUN_140a5dd46(void)

void FUN_140a5dd46(void)

{
  return;
}



// FUNCTION 140a5dd48 FUN_140a5dd48 body=443 status=ok
// SIG undefined FUN_140a5dd48(void)

ulonglong FUN_140a5dd48(char *param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined4 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      param_3[1] = 0;
      if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5decc:
        local_48 = CONCAT71(local_48._1_7_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
        if (cVar1 == '\0') goto LAB_140a5decc;
        local_48 = *(ulonglong *)(param_3 + 8);
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        local_40 = *(undefined4 *)(param_3 + 0x10);
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        local_38 = 1;
      }
      uVar2 = FUN_146afaf86(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_FUN_149f1edc0)[local_38])(&local_48);
      goto LAB_140a5dde3;
    }
  }
  if (param_3[1] != 1) {
    FUN_1400b73c8(param_2,param_1);
    uVar3 = 0;
    goto LAB_140a5dde3;
  }
  param_3[1] = 0;
  if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5ddac:
    uVar3 = (ulonglong)*param_3;
    local_48 = CONCAT71(local_48._1_7_,*param_3);
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5ddac;
    uVar3 = *(ulonglong *)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    local_40 = *(undefined4 *)(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_38 = 1;
    lVar4 = 1;
    local_48 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != cVar1);
  if (*param_1 != cVar1) {
    *param_1 = cVar1;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_FUN_149f1edc0)[lVar4])(&local_48);
LAB_140a5dde3:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5df04 FUN_140a5df04 body=1 status=ok
// SIG undefined FUN_140a5df04(void)

void FUN_140a5df04(void)

{
  return;
}



// FUNCTION 140a5df06 FUN_140a5df06 body=434 status=ok
// SIG undefined FUN_140a5df06(void)

ulonglong FUN_140a5df06(char *param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined4 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      param_3[1] = 0;
      if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5e09a:
        local_48 = CONCAT71(local_48._1_7_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
        if (cVar1 == '\0') goto LAB_140a5e09a;
        local_48 = *(ulonglong *)(param_3 + 8);
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        local_40 = *(undefined4 *)(param_3 + 0x10);
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        local_38 = 1;
      }
      uVar2 = FUN_146982d76(param_1,param_2,&local_48);
      uVar3 = (ulonglong)uVar2;
      (*(code *)(&PTR_caseD_3_149ef1c40)[local_38])(&local_48);
      goto LAB_140a5dfa0;
    }
  }
  if (param_3[1] != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  param_3[1] = 0;
  if (*(longlong **)(param_3 + 8) == (longlong *)0x0 || *(int *)(param_3 + 0x10) == 0) {
LAB_140a5df6d:
    uVar3 = (ulonglong)*param_3;
    local_48 = CONCAT71(local_48._1_7_,*param_3);
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 == '\0') goto LAB_140a5df6d;
    uVar3 = *(ulonglong *)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    local_40 = *(undefined4 *)(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_38 = 1;
    lVar4 = 1;
    local_48 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_1 != cVar1);
  if (*param_1 != cVar1) {
    *param_1 = cVar1;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_caseD_3_149ef1c40)[lVar4])(&local_48);
LAB_140a5dfa0:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5e0d2 FUN_140a5e0d2 body=468 status=ok
// SIG undefined FUN_140a5e0d2(void)

uint FUN_140a5e0d2(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0.0) {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar2 != '\0') {
      *(undefined1 *)(param_3 + 1) = 0;
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0.0) {
LAB_140a5e26b:
        local_58 = CONCAT44(local_58._4_4_,*param_3);
        local_48 = 0;
      }
      else {
        cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
        if (cVar2 == '\0') goto LAB_140a5e26b;
        local_58 = *(undefined8 *)(param_3 + 2);
        param_3[2] = 0.0;
        param_3[3] = 0.0;
        local_50 = param_3[4];
        param_3[4] = 0.0;
        local_48 = 1;
      }
      uVar4 = FUN_145766c16(param_1,param_2,&local_58);
      (*(code *)(&PTR_caseD_2_149ef0840)[local_48])(&local_58);
      goto LAB_140a5e181;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    uVar4 = 0;
    goto LAB_140a5e181;
  }
  *(undefined1 *)(param_3 + 1) = 0;
  if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0.0) {
LAB_140a5e139:
    fVar3 = *param_3;
    local_58 = CONCAT44(local_58._4_4_,fVar3);
    local_48 = 0;
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar2 == '\0') goto LAB_140a5e139;
    local_58 = *(undefined8 *)(param_3 + 2);
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    local_50 = param_3[4];
    param_3[4] = 0.0;
    local_48 = 1;
    fVar3 = (float)local_58;
    lVar5 = 1;
  }
  FUN_1400b73c8(param_2,param_1);
  fVar1 = *param_1;
  uVar4 = -(uint)(fVar3 != fVar1) & 1;
  if ((fVar1 != fVar3) || (NAN(fVar1) || NAN(fVar3))) {
    *param_1 = fVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_caseD_2_149ef0840)[lVar5])(&local_58);
LAB_140a5e181:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5e2a8 FUN_140a5e2a8 body=416 status=ok
// SIG undefined FUN_140a5e2a8(void)

longlong FUN_140a5e2a8(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c96c128) && (FUN_144b3d300(&DAT_14c96c128), DAT_14c96c128 == -1)) {
    DAT_14c96c118 = 0;
    DAT_14c96c120 = (longlong *)0x0;
    atexit(FUN_142874342);
    _Init_thread_footer(&DAT_14c96c128);
  }
  if (DAT_14c96c118 != 0) goto LAB_140a5e2f0;
  lVar6 = FUN_14001cc68(0x2e0,0x10);
  FUN_140a581a0(lVar6);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ee9b70;
  plVar7[2] = lVar6;
  plVar1 = DAT_14c96c120;
  DAT_14c96c118 = lVar6;
  if (plVar7 == DAT_14c96c120) {
    plVar5 = DAT_14c96c120;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar5 = DAT_14c96c120;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar7;
        goto joined_r0x000140a5e40d;
      }
    }
  }
  else {
    plVar5 = plVar7;
    if (DAT_14c96c120 != (longlong *)0x0) {
      LOCK();
      plVar2 = DAT_14c96c120 + 1;
      DAT_14c96c120 = plVar7;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar5 = DAT_14c96c120;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000140a5e40d:
        plVar5 = DAT_14c96c120;
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar5 = DAT_14c96c120;
        }
      }
    }
  }
  DAT_14c96c120 = plVar5;
  FUN_1412cd6d6(local_78,10);
  FUN_1412cc59c(DAT_14c96c118 + 8,local_78);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_140a5e2f0:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c96c118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5e44a FUN_140a5e44a body=284 status=ok
// SIG undefined FUN_140a5e44a(void)

longlong * FUN_140a5e44a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (((int)param_1[0xe] != 0) && ((longlong *)param_1[0xd] != (longlong *)0x0)) {
    cVar6 = (**(code **)(*(longlong *)param_1[0xd] + 0x30))();
    if (cVar6 != '\0') {
      *param_2 = param_1[0xd];
      param_1[0xd] = 0;
      *(int *)(param_2 + 1) = (int)param_1[0xe];
      *(undefined4 *)(param_1 + 0xe) = 0;
      uVar5 = 1;
      goto LAB_140a5e4ee;
    }
  }
  lVar1 = *param_1;
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar1 = param_1[2];
  *(undefined4 *)((longlong)param_2 + 0x13) = *(undefined4 *)((longlong)param_1 + 0x13);
  *(int *)(param_2 + 2) = (int)lVar1;
  lVar1 = param_1[3];
  param_2[3] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = lVar1;
  param_2[6] = param_1[6];
  lVar1 = param_1[7];
  param_2[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_1[8];
  lVar2 = param_1[9];
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x54);
  *(undefined8 *)((longlong)param_2 + 0x4c) = *(undefined8 *)((longlong)param_1 + 0x4c);
  *(undefined8 *)((longlong)param_2 + 0x54) = uVar3;
  param_2[8] = lVar1;
  param_2[9] = lVar2;
  uVar5 = 0;
LAB_140a5e4ee:
  *(undefined1 *)(param_2 + 0xc) = uVar5;
  return param_2;
}



// FUNCTION 140a5e566 FUN_140a5e566 body=337 status=ok
// SIG undefined FUN_140a5e566(void)

uint FUN_140a5e566(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  
  FUN_1400b73c8(param_2,param_1);
  uVar11 = FUN_1408640d6(param_1,param_3);
  if ((char)uVar11 == '\0') {
    lVar12 = *param_3;
    if (DAT_14c950c29 == 1) {
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar12 = *param_3;
      }
    }
    bVar10 = DAT_14c950c29;
    *param_1 = lVar12;
    lVar12 = param_3[1];
    if ((bVar10 & 1) != 0) {
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar12 = param_3[1];
        bVar10 = DAT_14c950c29;
      }
    }
    param_1[1] = lVar12;
    lVar12 = param_3[2];
    *(undefined4 *)((longlong)param_1 + 0x13) = *(undefined4 *)((longlong)param_3 + 0x13);
    *(int *)(param_1 + 2) = (int)lVar12;
    lVar12 = param_3[3];
    if ((bVar10 & 1) != 0) {
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar12 = param_3[3];
      }
    }
    param_1[3] = lVar12;
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar12 = param_3[5];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(int *)(param_1 + 4) = (int)param_3[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
    *(int *)(param_1 + 5) = (int)lVar12;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
    lVar12 = param_3[6];
    lVar3 = param_3[7];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[7];
    param_1[6] = lVar12;
    param_1[7] = lVar3;
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
    lVar12 = param_3[8];
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x44);
    lVar3 = param_3[9];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x4c);
    lVar8 = param_3[10];
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x54);
    lVar9 = param_3[0xb];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_3 + 0x4c);
    *(int *)(param_1 + 10) = (int)lVar8;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
    *(int *)(param_1 + 0xb) = (int)lVar9;
    *(int *)(param_1 + 8) = (int)lVar12;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
    *(int *)(param_1 + 9) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return uVar11 ^ 1;
}



// FUNCTION 140a5e6b8 FUN_140a5e6b8 body=1165 status=ok
// SIG undefined FUN_140a5e6b8(void)

longlong FUN_140a5e6b8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  
  lVar19 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 8);
    }
  }
  bVar18 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar19;
  lVar19 = *(longlong *)(param_2 + 0x10);
  if ((bVar18 & 1) != 0) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0x10);
      bVar18 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar19;
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  lVar19 = *(longlong *)(param_2 + 0x20);
  if ((bVar18 & 1) != 0) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar19;
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  lVar19 = *(longlong *)(param_2 + 0x40);
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(longlong *)(param_1 + 0x40) = lVar19;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  uVar17 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x5c) = uVar17;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  puVar20 = (undefined8 *)(param_2 + 0x68);
  puVar21 = (undefined8 *)(param_1 + 0x68);
  for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0xd0);
  uVar8 = *(undefined4 *)(param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0xd8);
  uVar10 = *(undefined4 *)(param_2 + 0xdc);
  uVar11 = *(undefined4 *)(param_2 + 0xe0);
  uVar12 = *(undefined4 *)(param_2 + 0xe4);
  uVar13 = *(undefined4 *)(param_2 + 0xec);
  uVar14 = *(undefined4 *)(param_2 + 0xf0);
  uVar15 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  *(undefined4 *)(param_1 + 0xf0) = uVar14;
  *(undefined4 *)(param_1 + 0xf4) = uVar15;
  *(undefined4 *)(param_1 + 0xd8) = uVar9;
  *(undefined4 *)(param_1 + 0xdc) = uVar10;
  *(undefined4 *)(param_1 + 0xe0) = uVar11;
  *(undefined4 *)(param_1 + 0xe4) = uVar12;
  *(undefined4 *)(param_1 + 200) = uVar3;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  lVar19 = *(longlong *)(param_2 + 0xf8);
  if (DAT_14c950c29 == 1) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0xf8);
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar19;
  puVar20 = (undefined8 *)(param_2 + 0x100);
  puVar21 = (undefined8 *)(param_1 + 0x100);
  for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  lVar19 = *(longlong *)(param_2 + 0x160);
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar4;
  *(longlong *)(param_1 + 0x160) = lVar19;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined4 *)(param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x180);
  uVar8 = *(undefined4 *)(param_2 + 0x184);
  uVar9 = *(undefined4 *)(param_2 + 0x188);
  uVar10 = *(undefined4 *)(param_2 + 0x18c);
  uVar11 = *(undefined4 *)(param_2 + 400);
  uVar12 = *(undefined4 *)(param_2 + 0x194);
  uVar13 = *(undefined4 *)(param_2 + 0x19c);
  uVar14 = *(undefined4 *)(param_2 + 0x1a0);
  uVar15 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar13;
  *(undefined4 *)(param_1 + 0x1a0) = uVar14;
  *(undefined4 *)(param_1 + 0x1a4) = uVar15;
  *(undefined4 *)(param_1 + 0x188) = uVar9;
  *(undefined4 *)(param_1 + 0x18c) = uVar10;
  *(undefined4 *)(param_1 + 400) = uVar11;
  *(undefined4 *)(param_1 + 0x194) = uVar12;
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = uVar7;
  *(undefined4 *)(param_1 + 0x184) = uVar8;
  lVar19 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == 1) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar19;
  puVar20 = (undefined8 *)(param_2 + 0x1b0);
  puVar21 = (undefined8 *)(param_1 + 0x1b0);
  for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  uVar4 = *(undefined8 *)(param_2 + 0x208);
  lVar19 = *(longlong *)(param_2 + 0x210);
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = uVar4;
  *(longlong *)(param_1 + 0x210) = lVar19;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar3 = *(undefined4 *)(param_2 + 0x228);
  uVar6 = *(undefined4 *)(param_2 + 0x22c);
  uVar7 = *(undefined4 *)(param_2 + 0x230);
  uVar8 = *(undefined4 *)(param_2 + 0x234);
  uVar9 = *(undefined4 *)(param_2 + 0x238);
  uVar10 = *(undefined4 *)(param_2 + 0x23c);
  uVar11 = *(undefined4 *)(param_2 + 0x240);
  uVar12 = *(undefined4 *)(param_2 + 0x244);
  uVar13 = *(undefined4 *)(param_2 + 0x24c);
  uVar14 = *(undefined4 *)(param_2 + 0x250);
  uVar15 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar13;
  *(undefined4 *)(param_1 + 0x250) = uVar14;
  *(undefined4 *)(param_1 + 0x254) = uVar15;
  *(undefined4 *)(param_1 + 0x238) = uVar9;
  *(undefined4 *)(param_1 + 0x23c) = uVar10;
  *(undefined4 *)(param_1 + 0x240) = uVar11;
  *(undefined4 *)(param_1 + 0x244) = uVar12;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  *(undefined4 *)(param_1 + 0x22c) = uVar6;
  *(undefined4 *)(param_1 + 0x230) = uVar7;
  *(undefined4 *)(param_1 + 0x234) = uVar8;
  lVar19 = *(longlong *)(param_2 + 600);
  if (DAT_14c950c29 == 1) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 600);
    }
  }
  *(longlong *)(param_1 + 600) = lVar19;
  puVar20 = (undefined8 *)(param_2 + 0x260);
  puVar21 = (undefined8 *)(param_1 + 0x260);
  for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  uVar4 = *(undefined8 *)(param_2 + 0x2b8);
  lVar19 = *(longlong *)(param_2 + 0x2c0);
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar4;
  *(longlong *)(param_1 + 0x2c0) = lVar19;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined2 *)(param_1 + 0x2d0) = *(undefined2 *)(param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 140a5eb46 FUN_140a5eb46 body=745 status=ok
// SIG undefined FUN_140a5eb46(void)

undefined8 *
FUN_140a5eb46(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined1 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined1 local_318 [736];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((longlong *)*param_6 != (longlong *)0x0 && (int)param_6[1] != 0) {
    cVar5 = (**(code **)(*(longlong *)*param_6 + 0x30))();
    if (cVar5 != '\0') {
      if ((int)param_6[1] == 0) {
        param_6 = (longlong *)0x0;
      }
      else {
        param_6 = (longlong *)*param_6;
      }
      (**(code **)(*param_6 + 0x58))(param_6,&local_328,param_2,param_3);
      goto LAB_140a5ebb5;
    }
  }
  FUN_140e9ea3a(local_318,param_3);
  FUN_140a5eee8(&local_328,param_2,local_318);
LAB_140a5ebb5:
  *param_1 = local_328;
  param_1[1] = local_320;
  if (local_320 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_320 + 1) = (int)local_320[1] + 1;
    UNLOCK();
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_320 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar2 = (int *)((longlong)local_320 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_320 + 0x10))(local_320);
        }
      }
    }
  }
  param_1[2] = *param_7;
  lVar3 = param_7[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar6 = &PTR_FUN_149f0f2c8;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f116a0;
  plVar7[2] = (longlong)puVar6;
  param_1[4] = puVar6;
  param_1[5] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x35) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_4[1] == '\x01') {
    FUN_1428ff0d4(*param_1,*param_4);
  }
  if (param_5[1] == '\x01') {
    FUN_1428ff10e(*param_1,*param_5);
  }
  uVar4 = *param_1;
  local_338 = *param_8;
  local_330 = param_8[1];
  *param_8 = 0;
  param_8[1] = 0;
  FUN_140a5ee30(uVar4);
  FUN_140e9e952(param_3);
  if (param_4[1] == '\x01') {
    param_4[1] = 0;
  }
  if (param_5[1] == '\x01') {
    param_5[1] = 0;
  }
  plVar7 = (longlong *)param_7[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_8[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5ee30 FUN_140a5ee30 body=184 status=ok
// SIG undefined FUN_140a5ee30(void)

void FUN_140a5ee30(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  uVar5 = *param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  *(longlong *)(param_1 + 0xf8) = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  iVar4 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar8 = 0;
    do {
      pbVar3 = (byte *)(lVar6 + 0x68 + lVar8);
      *pbVar3 = *pbVar3 | 1;
      lVar8 = lVar8 + 0x70;
    } while ((longlong)iVar4 * 0x70 - lVar8 != 0);
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a5eee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a5eee8 FUN_140a5eee8 body=339 status=ok
// SIG undefined FUN_140a5eee8(void)

longlong * FUN_140a5eee8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_338 [32];
  undefined1 local_318 [744];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar2 = FUN_14001cc68(0x490,0x10);
  FUN_140e9ea3a(local_318,param_3);
  FUN_140e9e87a(lVar2,param_2,local_318);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f116c0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 8) != 0 && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))))) goto LAB_140a5efff;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_140a5efff;
LAB_140a5efce:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_140a5efff;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) goto LAB_140a5efce;
      *(longlong **)(lVar2 + 0x10) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140a5efff:
  (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_140e9e952(param_3);
  if ((local_30 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a5f03c FUN_140a5f03c body=684 status=ok
// SIG undefined FUN_140a5f03c(void)

void FUN_140a5f03c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((longlong *)param_2[2] == (longlong *)0x0 || (int)param_2[3] == 0) ||
      (cVar5 = (**(code **)(*(longlong *)param_2[2] + 0x30))(), cVar5 == '\0')) &&
     (FUN_140a5f308(param_2), *(char *)((longlong)param_2 + 4) != '\x01')) {
    if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_14697ec30(param_1);
    return;
  }
  FUN_140a5f39a(param_1,&local_38);
  if (local_38 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_14001cc68(0x38,0x10);
    plVar1 = local_30;
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149ef1550;
    local_38 = plVar6 + 2;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[2] = (longlong)&PTR_FUN_149ef1568;
    plVar6[5] = 0;
    plVar6[6] = 0;
    if (plVar6 == (longlong *)0x0) {
      if (local_30 != (longlong *)0x0) {
        local_30 = (longlong *)0x0;
LAB_140a5f25e:
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
        if (plVar6 != (longlong *)0x0) goto LAB_140a5f16c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (plVar6 == local_30) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      else {
        bVar7 = local_30 != (longlong *)0x0;
        local_30 = plVar6;
        if (bVar7) goto LAB_140a5f25e;
      }
LAB_140a5f16c:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    plVar1 = local_30;
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 == (longlong *)0x0) {
      FUN_140a5f60c(param_1,&local_48);
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      FUN_140a5f60c(param_1);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar1 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
  }
  if (local_38 + 1 != param_2) {
    if (*(char *)((longlong)param_2 + 4) == '\x01') {
      *(int *)(local_38 + 1) = (int)*param_2;
      uVar4 = 1;
    }
    else {
      if (*(char *)((longlong)local_38 + 0xc) != '\x01') goto LAB_140a5f0bf;
      uVar4 = 0;
    }
    *(undefined1 *)((longlong)local_38 + 0xc) = uVar4;
  }
LAB_140a5f0bf:
  *(char *)(local_38 + 2) = (char)param_2[1];
  FUN_140a5f4d8(local_38 + 3,param_2 + 2);
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 140a5f308 FUN_140a5f308 body=144 status=ok
// SIG undefined FUN_140a5f308(void)

undefined4 * FUN_140a5f308(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[6] != 0) && (*(longlong **)(param_1 + 4) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 4) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[6] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 4);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_20);
      if (&local_20 != param_1) {
        if ((local_1c & 1) == 0) {
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_140a5f326;
          uVar2 = 0;
        }
        else {
          *param_1 = local_20;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar2;
      }
    }
  }
LAB_140a5f326:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5f39a FUN_140a5f39a body=181 status=ok
// SIG undefined FUN_140a5f39a(void)

undefined8 * FUN_140a5f39a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      FUN_140a5f470();
      cVar7 = (**(code **)(*plVar5 + 8))(plVar5,&DAT_14c98e158);
      if (cVar7 != '\0') {
        uVar6 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar6;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140a5f450 FUN_140a5f450 body=32 status=ok
// SIG undefined FUN_140a5f450(void)

bool FUN_140a5f450(undefined8 param_1,longlong *param_2)

{
  FUN_140a5f470();
  return DAT_14c98e158 == *param_2;
}



// FUNCTION 140a5f470 FUN_140a5f470 body=104 status=ok
// SIG undefined FUN_140a5f470(void)

void FUN_140a5f470(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e160) {
    FUN_144b3d300(&DAT_14c98e160);
    if (DAT_14c98e160 == -1) {
      FUN_1446f470e(&DAT_14c98e158,L"FSlateCursorMetaData",1);
      _Init_thread_footer(&DAT_14c98e160);
      return;
    }
  }
  return;
}



// FUNCTION 140a5f4d8 FUN_140a5f4d8 body=306 status=ok
// SIG undefined FUN_140a5f4d8(void)

void FUN_140a5f4d8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140a5f561;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140a5f53a:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140a5f53a;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140a5f561;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a5f561:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a5f60c FUN_140a5f60c body=141 status=ok
// SIG undefined FUN_140a5f60c(void)

void FUN_140a5f60c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x1b0),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a5f68a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a5f69a FUN_140a5f69a body=4769 status=ok
// SIG undefined FUN_140a5f69a(void)

void FUN_140a5f69a(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  byte bVar27;
  uint uVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_598 [40];
  longlong **local_570;
  int local_564;
  longlong *local_560;
  longlong *local_558;
  longlong local_550;
  longlong *local_548;
  uint local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  longlong *local_3b8;
  uint local_3b0;
  uint uStack_3ac;
  longlong *local_3a8;
  longlong *local_3a0;
  undefined4 local_398 [190];
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98d81c) && (FUN_144b3d300(&DAT_14c98d81c), DAT_14c98d81c == -1)) {
    FUN_1446ddc76(&DAT_14c98d814,"Visibility",1);
    _Init_thread_footer(&DAT_14c98d81c);
  }
  plVar20 = (longlong *)*param_1;
  lVar11 = plVar20[5];
  if (0 < (longlong)(int)lVar11) {
    plVar10 = plVar20 + 2;
    if ((longlong *)plVar20[4] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar20[4];
    }
    lVar7 = 0;
    do {
      *(int *)((longlong)plVar10 + lVar7 + 0xc) = *(int *)((longlong)plVar10 + lVar7 + 8) * 100;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar11 * 0x10 != lVar7);
    plVar20 = (longlong *)*param_1;
    iVar6 = (int)plVar20[5];
    if (1 < (longlong)iVar6) {
      plVar10 = plVar20 + 2;
      if ((longlong *)plVar20[4] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar20[4];
      }
      memset(local_398,0,0x2f0);
      local_3a0 = plVar10 + (longlong)iVar6 * 2 + -2;
      local_3a8 = plVar10;
      fVar30 = logf((float)iVar6);
      local_398[0] = (int)(longlong)(fVar30 + fVar30);
      pplVar8 = &local_3a8;
      do {
        plVar10 = *pplVar8;
        plVar15 = pplVar8[1];
        iVar6 = *(int *)(pplVar8 + 2);
        iVar5 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar10) >> 4);
        uVar19 = (ulonglong)(iVar5 + 1);
        plVar23 = plVar10;
        plVar12 = plVar10;
        plVar20 = plVar15;
        if (iVar6 != 0) {
LAB_140a5f9f3:
          if (8 < (int)(uint)uVar19) {
            uVar19 = (ulonglong)((uint)uVar19 >> 1);
            lVar11 = plVar12[uVar19 * 2];
            lVar7 = (plVar12 + uVar19 * 2)[1];
            lVar3 = plVar12[1];
            plVar12[uVar19 * 2] = *plVar12;
            (plVar12 + uVar19 * 2)[1] = lVar3;
            *plVar12 = lVar11;
            plVar12[1] = lVar7;
            plVar9 = plVar20 + 2;
            plVar10 = plVar12;
            do {
              plVar18 = plVar10 + 2;
              plVar21 = plVar10 + 2;
              do {
                plVar10 = plVar21;
                plVar26 = plVar18;
                if (plVar20 < plVar10) break;
                plVar18 = plVar26 + 2;
                plVar21 = plVar10 + 2;
              } while (*(uint *)((longlong)plVar10 + 0xc) <= *(uint *)((longlong)plVar12 + 0xc));
              plVar18 = plVar9 + -4;
              do {
                plVar21 = plVar9;
                plVar16 = plVar18;
                plVar9 = plVar21 + -2;
                if (plVar9 <= plVar12) break;
                plVar18 = plVar16 + -2;
              } while (*(uint *)((longlong)plVar12 + 0xc) <= *(uint *)((longlong)plVar21 + -4));
              if (plVar9 < plVar10) goto LAB_140a5fa94;
              lVar11 = *plVar10;
              lVar7 = plVar10[1];
              lVar3 = plVar21[-1];
              *plVar10 = *plVar9;
              plVar10[1] = lVar3;
              *plVar9 = lVar11;
              plVar21[-1] = lVar7;
            } while( true );
          }
          for (; plVar10 = plVar12, plVar15 = plVar12, plVar12 < plVar20; plVar20 = plVar20 + -2) {
            while (plVar23 = plVar10, plVar10 = plVar15 + 2, plVar10 <= plVar20) {
              puVar1 = (uint *)((longlong)plVar15 + 0x1c);
              plVar15 = plVar10;
              if (*puVar1 <= *(uint *)((longlong)plVar23 + 0xc)) {
                plVar10 = plVar23;
              }
            }
            local_538 = *plVar23;
            uStack_530 = plVar23[1];
            lVar7 = local_538;
            lVar3 = uStack_530;
            lVar11 = plVar20[1];
            *plVar23 = *plVar20;
            plVar23[1] = lVar11;
            local_538._4_4_ = (undefined4)((ulonglong)local_538 >> 0x20);
            uStack_530._4_4_ = (undefined4)((ulonglong)uStack_530 >> 0x20);
            *(undefined4 *)plVar20 = (undefined4)local_538;
            *(undefined4 *)((longlong)plVar20 + 4) = local_538._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_530;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_530._4_4_;
            local_538 = lVar7;
            uStack_530 = lVar3;
          }
          goto LAB_140a5fd31;
        }
LAB_140a5fb38:
        iVar6 = (int)uVar19;
        if (iVar6 != 0) {
          iVar5 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
          iVar14 = iVar5;
joined_r0x000140a5fb5f:
          do {
            iVar13 = iVar5 * 2 + 1;
            if (iVar13 < iVar6) {
              iVar24 = iVar5 * 2 + 2;
              if ((iVar24 < iVar6) &&
                 (*(uint *)((longlong)plVar10 + (longlong)iVar13 * 0x10 + 0xc) <=
                  *(uint *)((longlong)plVar10 + (longlong)iVar24 * 0x10 + 0xc))) {
                iVar13 = iVar24;
              }
              if (*(uint *)((longlong)plVar10 + (longlong)iVar5 * 0x10 + 0xc) <
                  *(uint *)((longlong)plVar10 + (longlong)iVar13 * 0x10 + 0xc)) {
                plVar20 = plVar10 + (longlong)iVar5 * 2;
                plVar15 = plVar10 + (longlong)iVar13 * 2;
                local_538 = *plVar20;
                uStack_530 = plVar20[1];
                lVar7 = local_538;
                lVar3 = uStack_530;
                lVar11 = plVar15[1];
                *plVar20 = *plVar15;
                plVar20[1] = lVar11;
                local_538._4_4_ = (undefined4)((ulonglong)local_538 >> 0x20);
                uStack_530._4_4_ = (undefined4)((ulonglong)uStack_530 >> 0x20);
                *(undefined4 *)plVar15 = (undefined4)local_538;
                *(undefined4 *)((longlong)plVar15 + 4) = local_538._4_4_;
                *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_530;
                *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_530._4_4_;
                iVar5 = iVar13;
                local_538 = lVar7;
                uStack_530 = lVar3;
                goto joined_r0x000140a5fb5f;
              }
            }
            bVar29 = iVar14 != 0;
            iVar5 = iVar14 + -1;
            iVar14 = iVar5;
          } while (bVar29);
          if (1 < iVar6) {
            uVar19 = uVar19 - 1;
            local_538 = *plVar10;
            uStack_530 = plVar10[1];
            lVar7 = local_538;
            lVar3 = uStack_530;
            lVar11 = (plVar10 + uVar19 * 2)[1];
            *plVar10 = plVar10[uVar19 * 2];
            plVar10[1] = lVar11;
            local_538._4_4_ = (undefined4)((ulonglong)local_538 >> 0x20);
            uStack_530._4_4_ = (undefined4)((ulonglong)uStack_530 >> 0x20);
            plVar20 = plVar10 + uVar19 * 2;
            *(undefined4 *)plVar20 = (undefined4)local_538;
            *(undefined4 *)((longlong)plVar20 + 4) = local_538._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_530;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_530._4_4_;
            local_538 = lVar7;
            uStack_530 = lVar3;
            if (iVar6 != 2) {
              do {
                iVar6 = 0;
                iVar14 = 1;
                iVar5 = 0;
                do {
                  iVar6 = iVar6 + 2;
                  iVar13 = iVar14;
                  if (((longlong)iVar6 < (longlong)uVar19) &&
                     (*(uint *)((longlong)plVar10 + (longlong)iVar14 * 0x10 + 0xc) <=
                      *(uint *)((longlong)plVar10 + (longlong)iVar6 * 0x10 + 0xc))) {
                    iVar13 = iVar6;
                  }
                  if (*(uint *)((longlong)plVar10 + (longlong)iVar13 * 0x10 + 0xc) <=
                      *(uint *)((longlong)plVar10 + (longlong)iVar5 * 0x10 + 0xc)) break;
                  plVar20 = plVar10 + (longlong)iVar5 * 2;
                  plVar15 = plVar10 + (longlong)iVar13 * 2;
                  lVar11 = *plVar20;
                  lVar7 = plVar20[1];
                  lVar3 = plVar15[1];
                  *plVar20 = *plVar15;
                  plVar20[1] = lVar3;
                  *plVar15 = lVar11;
                  plVar15[1] = lVar7;
                  iVar6 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  iVar5 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar19);
                uVar2 = uVar19 - 1;
                local_538 = *plVar10;
                uStack_530 = plVar10[1];
                lVar7 = local_538;
                lVar3 = uStack_530;
                lVar11 = (plVar10 + uVar2 * 2)[1];
                *plVar10 = plVar10[uVar2 * 2];
                plVar10[1] = lVar11;
                local_538._4_4_ = (undefined4)((ulonglong)local_538 >> 0x20);
                uStack_530._4_4_ = (undefined4)((ulonglong)uStack_530 >> 0x20);
                plVar20 = plVar10 + uVar2 * 2;
                *(undefined4 *)plVar20 = (undefined4)local_538;
                *(undefined4 *)((longlong)plVar20 + 4) = local_538._4_4_;
                *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_530;
                *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_530._4_4_;
                bVar29 = 2 < uVar19;
                uVar19 = uVar2;
                local_538 = lVar7;
                uStack_530 = lVar3;
              } while (bVar29);
            }
          }
        }
LAB_140a5fd31:
        pplVar8 = pplVar8 + -3;
      } while (&local_3a8 <= pplVar8);
      plVar20 = (longlong *)*param_1;
    }
  }
  local_3b8 = (longlong *)0x0;
  local_3b0 = 0;
  uStack_3ac = 0x20;
  uVar28 = *(uint *)(plVar20 + 1);
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar28);
  }
  if (0x20 < uVar28) {
    FUN_142879fce(&local_538);
    plVar20 = (longlong *)*param_1;
    uVar28 = *(uint *)(plVar20 + 1);
  }
  if (0 < (int)uVar28) {
    lVar11 = 0;
    bVar27 = 0;
LAB_140a5f73d:
    do {
      uVar28 = local_3b0;
      lVar7 = *plVar20 + lVar11 * 0x58;
      lVar3 = *(longlong *)(*plVar20 + 0x14 + lVar11 * 0x58);
      if (lVar3 == 0) {
        *(undefined1 *)(lVar7 + 0x20) = 0xff;
        iVar6 = *(int *)(lVar7 + 8) * 100;
      }
      else {
        plVar10 = plVar20 + 2;
        if ((longlong *)plVar20[4] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar20[4];
        }
        iVar6 = -1;
        if ((longlong)(int)plVar20[5] != 0) {
          lVar25 = 0;
          iVar5 = 0;
          do {
            iVar6 = iVar5;
            if (*(longlong *)((longlong)plVar10 + lVar25) == lVar3) break;
            iVar5 = iVar5 + 1;
            lVar25 = lVar25 + 0x10;
            iVar6 = -1;
          } while ((longlong)(int)plVar20[5] * 0x10 != lVar25);
        }
        *(char *)(lVar7 + 0x20) = (char)iVar6;
        lVar3 = *(longlong *)(*param_1 + 0x20);
        lVar25 = *param_1 + 0x10;
        if (lVar3 != 0) {
          lVar25 = lVar3;
        }
        iVar6 = *(int *)(lVar7 + 8) * 10 + *(int *)(lVar25 + 0xc + (longlong)iVar6 * 0x10);
      }
      *(int *)(lVar7 + 0x1c) = iVar6;
      if (*(longlong *)(lVar7 + 0xc) == 0) {
        if (lVar11 == 0) {
          iVar6 = -1;
        }
        else {
          bVar27 = bVar27 | *(byte *)(lVar7 + 0x51);
          iVar6 = *(byte *)(lVar7 + 0x51) - 1;
        }
      }
      else {
        iVar6 = (int)((longlong *)*param_1)[1];
        if ((longlong)iVar6 != 0) {
          uVar19 = 0;
          do {
            if (*(longlong *)(*(longlong *)*param_1 + uVar19) == *(longlong *)(lVar7 + 0xc)) {
              iVar5 = (int)(uVar19 >> 3) * -0x45d1745d;
              if ((-1 < iVar5) && (iVar5 < iVar6)) {
                lVar7 = (longlong)(int)local_3b0;
                local_3b0 = local_3b0 + 1;
                if (uStack_3ac < local_3b0) {
                  FUN_14287a1a2(&local_538);
                }
                plVar20 = local_3b8;
                if (local_3b8 == (longlong *)0x0) {
                  plVar20 = &local_538;
                }
                *(int *)((longlong)plVar20 + lVar7 * 0xc) = (int)lVar11;
                *(int *)((longlong)plVar20 + lVar7 * 0xc + 4) = iVar5;
                *(undefined4 *)((longlong)plVar20 + lVar7 * 0xc + 8) = 0xffffffff;
                lVar11 = lVar11 + 1;
                plVar20 = (longlong *)*param_1;
                bVar27 = 1;
                if ((int)plVar20[1] <= lVar11) goto LAB_140a5fd4a;
                goto LAB_140a5f73d;
              }
              break;
            }
            uVar19 = uVar19 + 0x58;
          } while ((longlong)iVar6 * 0x58 - uVar19 != 0);
        }
        iVar6 = -1;
      }
      local_3b0 = local_3b0 + 1;
      if (uStack_3ac < uVar28 + 1) {
        FUN_14287a1a2(&local_538);
      }
      plVar20 = local_3b8;
      if (local_3b8 == (longlong *)0x0) {
        plVar20 = &local_538;
      }
      lVar7 = (longlong)(int)uVar28;
      *(int *)((longlong)plVar20 + lVar7 * 0xc) = (int)lVar11;
      *(int *)((longlong)plVar20 + lVar7 * 0xc + 4) = iVar6;
      *(undefined4 *)((longlong)plVar20 + lVar7 * 0xc + 8) = 0;
      lVar11 = lVar11 + 1;
      plVar20 = (longlong *)*param_1;
    } while (lVar11 < (int)plVar20[1]);
    if ((bVar27 & 1) != 0) {
LAB_140a5fd4a:
      plVar20 = local_3b8;
      if (local_3b8 == (longlong *)0x0) {
        plVar20 = &local_538;
      }
      if ((longlong)(int)local_3b0 != 0) {
        lVar11 = (longlong)(int)local_3b0 * 0xc;
        do {
          local_548 = local_3b8;
          if (local_3b8 == (longlong *)0x0) {
            local_548 = &local_538;
          }
          local_540 = local_3b0;
          FUN_140a609d2(plVar20);
          uVar28 = local_3b0;
          plVar20 = (longlong *)((longlong)plVar20 + 0xc);
          lVar11 = lVar11 + -0xc;
        } while (lVar11 != 0);
        local_550 = *param_1;
        lVar11 = (longlong)(int)local_3b0;
        if (1 < lVar11) {
          plVar20 = local_3b8;
          if (local_3b8 == (longlong *)0x0) {
            plVar20 = &local_538;
          }
          local_558 = param_1;
          memset(local_398,0,0x2f0);
          local_3a0 = (longlong *)((longlong)plVar20 + lVar11 * 0xc + -0xc);
          local_3a8 = plVar20;
          fVar30 = logf((float)(int)uVar28);
          local_398[0] = (int)(longlong)(fVar30 + fVar30);
          pplVar8 = &local_3a8;
          do {
            plVar10 = *pplVar8;
            plVar15 = pplVar8[1];
            iVar6 = *(int *)(pplVar8 + 2);
            iVar5 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar10) >> 2) * -0x55555555;
            uVar28 = iVar5 + 1;
            plVar20 = plVar15;
            plVar23 = plVar10;
            plVar12 = plVar10;
            if (iVar6 != 0) {
LAB_140a5fe4f:
              if (8 < (int)uVar28) {
                uVar19 = (ulonglong)(uVar28 >> 1);
                local_98 = *(undefined4 *)((longlong)plVar23 + uVar19 * 0xc + 8);
                local_a0 = *(longlong *)((longlong)plVar23 + uVar19 * 0xc);
                *(int *)((longlong)plVar23 + uVar19 * 0xc + 8) = (int)plVar23[1];
                *(longlong *)((longlong)plVar23 + uVar19 * 0xc) = *plVar23;
                *(undefined4 *)(plVar23 + 1) = local_98;
                *plVar23 = local_a0;
                plVar9 = (longlong *)((longlong)plVar20 + 0xc);
                plVar12 = plVar23;
                local_570 = pplVar8;
                local_564 = iVar6;
                local_560 = plVar10;
                do {
                  plVar18 = (longlong *)((longlong)plVar12 + 0xc);
                  plVar21 = (longlong *)((longlong)plVar12 + 0xc);
                  do {
                    plVar12 = plVar21;
                    plVar10 = plVar18;
                    if (plVar20 < plVar12) break;
                    cVar4 = FUN_140a6093c(&local_550,plVar23,plVar12);
                    plVar18 = (longlong *)((longlong)plVar10 + 0xc);
                    plVar21 = (longlong *)((longlong)plVar12 + 0xc);
                  } while (cVar4 == '\0');
                  plVar18 = plVar9 + -3;
                  do {
                    plVar21 = plVar9;
                    plVar26 = plVar18;
                    plVar9 = (longlong *)((longlong)plVar21 + -0xc);
                    if (plVar9 <= plVar23) break;
                    cVar4 = FUN_140a6093c(&local_550,plVar9,plVar23);
                    plVar18 = (longlong *)((longlong)plVar26 + -0xc);
                  } while (cVar4 == '\0');
                  if (plVar9 < plVar12) goto LAB_140a5ff59;
                  local_98 = (undefined4)plVar12[1];
                  local_a0 = *plVar12;
                  *(undefined4 *)(plVar12 + 1) = *(undefined4 *)((longlong)plVar21 + -4);
                  *plVar12 = *plVar9;
                  *(undefined4 *)((longlong)plVar21 + -4) = local_98;
                  *plVar9 = local_a0;
                } while( true );
              }
              if (plVar23 < plVar20) {
                plVar15 = plVar23;
                plVar10 = plVar23;
                do {
                  while (plVar12 = plVar15, plVar10 = (longlong *)((longlong)plVar10 + 0xc),
                        plVar10 <= plVar20) {
                    cVar4 = FUN_140a6093c(&local_550,plVar12,plVar10);
                    plVar15 = plVar10;
                    if (cVar4 == '\0') {
                      plVar15 = plVar12;
                    }
                  }
                  lVar11 = plVar12[1];
                  local_98 = (int)lVar11;
                  local_a0 = *plVar12;
                  *(int *)(plVar12 + 1) = (int)plVar20[1];
                  *plVar12 = *plVar20;
                  *(int *)(plVar20 + 1) = (int)lVar11;
                  *plVar20 = local_a0;
                  plVar20 = (longlong *)((longlong)plVar20 - 0xc);
                  plVar15 = plVar23;
                  plVar10 = plVar23;
                } while (plVar23 < plVar20);
              }
              goto LAB_140a6009b;
            }
LAB_140a606e1:
            local_570 = pplVar8;
            if (uVar28 != 0) {
              iVar6 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
              iVar5 = iVar6;
joined_r0x000140a60707:
              do {
                iVar14 = iVar6 * 2 + 1;
                if (iVar14 < (int)uVar28) {
                  iVar13 = iVar6 * 2 + 2;
                  if ((iVar13 < (int)uVar28) &&
                     (cVar4 = FUN_140a6093c(&local_550,(longlong)plVar12 + (longlong)iVar13 * 0xc,
                                            (longlong)plVar12 + (longlong)iVar14 * 0xc),
                     cVar4 == '\0')) {
                    iVar14 = iVar13;
                  }
                  plVar20 = (longlong *)((longlong)plVar12 + (longlong)iVar6 * 0xc);
                  plVar10 = (longlong *)((longlong)plVar12 + (longlong)iVar14 * 0xc);
                  cVar4 = FUN_140a6093c(&local_550,plVar20,plVar10);
                  if (cVar4 != '\0') {
                    lVar11 = plVar20[1];
                    local_98 = (int)lVar11;
                    local_a0 = *plVar20;
                    *(int *)(plVar20 + 1) = (int)plVar10[1];
                    *plVar20 = *plVar10;
                    *(int *)(plVar10 + 1) = (int)lVar11;
                    *plVar10 = local_a0;
                    iVar6 = iVar14;
                    goto joined_r0x000140a60707;
                  }
                }
                bVar29 = iVar5 != 0;
                iVar6 = iVar5 + -1;
                iVar5 = iVar6;
              } while (bVar29);
              pplVar8 = local_570;
              if (1 < (int)uVar28) {
                uVar19 = (ulonglong)uVar28 - 1;
                lVar11 = plVar12[1];
                local_98 = (int)lVar11;
                local_a0 = *plVar12;
                *(undefined4 *)(plVar12 + 1) = *(undefined4 *)((longlong)plVar12 + uVar19 * 0xc + 8)
                ;
                *plVar12 = *(longlong *)((longlong)plVar12 + uVar19 * 0xc);
                *(int *)((longlong)plVar12 + uVar19 * 0xc + 8) = (int)lVar11;
                *(longlong *)((longlong)plVar12 + uVar19 * 0xc) = local_a0;
                if (uVar28 != 2) {
                  do {
                    iVar6 = 0;
                    iVar14 = 1;
                    iVar5 = 0;
                    do {
                      iVar6 = iVar6 + 2;
                      iVar13 = iVar14;
                      if (((longlong)iVar6 < (longlong)uVar19) &&
                         (cVar4 = FUN_140a6093c(&local_550,(longlong)plVar12 + (longlong)iVar6 * 0xc
                                                ,(longlong)plVar12 + (longlong)iVar14 * 0xc),
                         cVar4 == '\0')) {
                        iVar13 = iVar6;
                      }
                      plVar20 = (longlong *)((longlong)plVar12 + (longlong)iVar5 * 0xc);
                      plVar10 = (longlong *)((longlong)plVar12 + (longlong)iVar13 * 0xc);
                      cVar4 = FUN_140a6093c(&local_550,plVar20,plVar10);
                      if (cVar4 == '\0') break;
                      local_98 = (undefined4)plVar20[1];
                      local_a0 = *plVar20;
                      *(int *)(plVar20 + 1) = (int)plVar10[1];
                      *plVar20 = *plVar10;
                      *(undefined4 *)(plVar10 + 1) = local_98;
                      *plVar10 = local_a0;
                      iVar6 = iVar13 * 2;
                      iVar14 = iVar13 * 2 + 1;
                      iVar5 = iVar13;
                    } while ((longlong)iVar14 < (longlong)uVar19);
                    uVar2 = uVar19 - 1;
                    lVar11 = plVar12[1];
                    local_98 = (int)lVar11;
                    local_a0 = *plVar12;
                    *(undefined4 *)(plVar12 + 1) =
                         *(undefined4 *)((longlong)plVar12 + uVar2 * 0xc + 8);
                    *plVar12 = *(longlong *)((longlong)plVar12 + uVar2 * 0xc);
                    *(int *)((longlong)plVar12 + uVar2 * 0xc + 8) = (int)lVar11;
                    *(longlong *)((longlong)plVar12 + uVar2 * 0xc) = local_a0;
                    bVar29 = 2 < uVar19;
                    uVar19 = uVar2;
                    pplVar8 = local_570;
                  } while (bVar29);
                }
              }
            }
LAB_140a6009b:
            pplVar8 = pplVar8 + -3;
            param_1 = local_558;
          } while (&local_3a8 <= pplVar8);
        }
        plVar20 = &local_538;
        if (local_3b8 != (longlong *)0x0) {
          plVar20 = local_3b8;
        }
        if (local_3b0 != 0) {
          iVar6 = -1;
          iVar5 = 1;
          lVar11 = 0;
          do {
            iVar14 = *(int *)((longlong)plVar20 + lVar11 + 4);
            if ((longlong)iVar14 == -1) {
              iVar6 = -1;
            }
            else {
              iVar5 = iVar5 + (uint)(iVar6 == iVar14);
              *(int *)(*(longlong *)*param_1 + 0x1c +
                      (longlong)*(int *)((longlong)plVar20 + lVar11) * 0x58) =
                   *(int *)(*(longlong *)*param_1 + 0x1c + (longlong)iVar14 * 0x58) + iVar5;
              iVar6 = *(int *)((longlong)plVar20 + lVar11 + 4);
            }
            lVar11 = lVar11 + 0xc;
          } while ((longlong)(int)local_3b0 * 0xc != lVar11);
        }
      }
      iVar6 = *(int *)((undefined8 *)*param_1 + 1);
      if (1 < (longlong)iVar6) {
        plVar20 = *(longlong **)*param_1;
        memset(local_398,0,0x2f0);
        local_3a0 = plVar20 + (longlong)iVar6 * 0xb + -0xb;
        local_3a8 = plVar20;
        fVar30 = logf((float)iVar6);
        local_398[0] = (int)(longlong)(fVar30 + fVar30);
        pplVar8 = &local_3a8;
        do {
          plVar20 = *pplVar8;
          plVar10 = pplVar8[1];
          iVar6 = *(int *)(pplVar8 + 2);
          iVar5 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar20) >> 3) * -0x45d1745d;
          uVar28 = iVar5 + 1;
          plVar12 = plVar20;
          plVar15 = plVar10;
          plVar23 = plVar20;
          if (iVar6 != 0) {
LAB_140a601d5:
            if (8 < (int)uVar28) {
              plVar20 = plVar12 + (ulonglong)(uVar28 >> 1) * 0xb;
              plVar9 = &local_a0;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar9 = *plVar20;
                plVar20 = plVar20 + 1;
                plVar9 = plVar9 + 1;
              }
              plVar20 = plVar12;
              plVar9 = plVar12 + (ulonglong)(uVar28 >> 1) * 0xb;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar9 = *plVar20;
                plVar20 = plVar20 + 1;
                plVar9 = plVar9 + 1;
              }
              plVar20 = &local_a0;
              plVar9 = plVar12;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar9 = *plVar20;
                plVar20 = plVar20 + 1;
                plVar9 = plVar9 + 1;
              }
              plVar9 = plVar15 + 0xb;
              plVar20 = plVar12;
              do {
                plVar18 = plVar20 + 0xb;
                plVar21 = plVar20 + 0xb;
                do {
                  plVar20 = plVar21;
                  plVar26 = plVar18;
                  if (plVar15 < plVar20) break;
                  plVar18 = plVar26 + 0xb;
                  plVar21 = plVar20 + 0xb;
                } while (*(uint *)((longlong)plVar20 + 0x1c) <= *(uint *)((longlong)plVar12 + 0x1c))
                ;
                plVar18 = plVar9 + -0x16;
                do {
                  plVar21 = plVar9;
                  plVar16 = plVar18;
                  plVar9 = plVar21 + -0xb;
                  if (plVar9 <= plVar12) break;
                  plVar18 = plVar16 + -0xb;
                } while (*(uint *)((longlong)plVar12 + 0x1c) <= *(uint *)((longlong)plVar21 + -0x3c)
                        );
                lVar11 = 0xb;
                plVar18 = plVar12;
                plVar17 = plVar20;
                plVar22 = &local_a0;
                if (plVar9 < plVar20) goto code_r0x000140a602a2;
                for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *plVar22 = *plVar17;
                  plVar17 = plVar17 + 1;
                  plVar22 = plVar22 + 1;
                }
                plVar18 = plVar9;
                plVar21 = plVar20;
                for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *plVar21 = *plVar18;
                  plVar18 = plVar18 + 1;
                  plVar21 = plVar21 + 1;
                }
                plVar18 = &local_a0;
                plVar21 = plVar9;
                for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *plVar21 = *plVar18;
                  plVar18 = plVar18 + 1;
                  plVar21 = plVar21 + 1;
                }
              } while( true );
            }
            while (plVar20 = plVar12, plVar10 = plVar12, plVar12 < plVar15) {
              while (plVar23 = plVar20, plVar20 = plVar10 + 0xb, plVar20 <= plVar15) {
                puVar1 = (uint *)((longlong)plVar10 + 0x74);
                plVar10 = plVar20;
                if (*puVar1 <= *(uint *)((longlong)plVar23 + 0x1c)) {
                  plVar20 = plVar23;
                }
              }
              plVar20 = plVar15 + -0xb;
              plVar10 = plVar23;
              plVar9 = &local_a0;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar9 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar9 = plVar9 + 1;
              }
              plVar10 = plVar15;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar23 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar23 = plVar23 + 1;
              }
              plVar10 = &local_a0;
              plVar23 = plVar15;
              for (lVar11 = 0xb; plVar15 = plVar20, lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar23 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar23 = plVar23 + 1;
              }
            }
            goto LAB_140a60396;
          }
LAB_140a604d0:
          if (uVar28 != 0) {
            iVar5 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
            iVar6 = iVar5;
joined_r0x000140a60500:
            do {
              iVar14 = iVar6 * 2 + 1;
              if (iVar14 < (int)uVar28) {
                iVar13 = iVar6 * 2 + 2;
                if ((iVar13 < (int)uVar28) &&
                   (*(uint *)((longlong)plVar20 + (longlong)iVar14 * 0x58 + 0x1c) <=
                    *(uint *)((longlong)plVar20 + (longlong)iVar13 * 0x58 + 0x1c))) {
                  iVar14 = iVar13;
                }
                if (*(uint *)((longlong)plVar20 + (longlong)iVar6 * 0x58 + 0x1c) <
                    *(uint *)((longlong)plVar20 + (longlong)iVar14 * 0x58 + 0x1c)) {
                  plVar10 = plVar20 + (longlong)iVar6 * 0xb;
                  plVar15 = &local_a0;
                  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar15 = *plVar10;
                    plVar10 = plVar10 + 1;
                    plVar15 = plVar15 + 1;
                  }
                  plVar10 = plVar20 + (longlong)iVar14 * 0xb;
                  plVar15 = plVar20 + (longlong)iVar6 * 0xb;
                  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar15 = *plVar10;
                    plVar10 = plVar10 + 1;
                    plVar15 = plVar15 + 1;
                  }
                  plVar10 = &local_a0;
                  plVar15 = plVar20 + (longlong)iVar14 * 0xb;
                  for (lVar11 = 0xb; iVar6 = iVar14, lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar15 = *plVar10;
                    plVar10 = plVar10 + 1;
                    plVar15 = plVar15 + 1;
                  }
                  goto joined_r0x000140a60500;
                }
              }
              bVar29 = iVar5 != 0;
              iVar5 = iVar5 + -1;
              iVar6 = iVar5;
            } while (bVar29);
            if (1 < (int)uVar28) {
              plVar10 = plVar20;
              plVar15 = &local_a0;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar15 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar15 = plVar15 + 1;
              }
              plVar10 = plVar20 + ((ulonglong)uVar28 - 1) * 0xb;
              plVar15 = plVar20;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar15 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar15 = plVar15 + 1;
              }
              plVar10 = &local_a0;
              plVar15 = plVar20 + ((ulonglong)uVar28 - 1) * 0xb;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar15 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar15 = plVar15 + 1;
              }
              uVar19 = (ulonglong)uVar28 - 1;
              if (uVar28 != 2) {
                do {
                  iVar6 = 0;
                  iVar14 = 1;
                  iVar5 = 0;
                  do {
                    iVar6 = iVar6 + 2;
                    iVar13 = iVar14;
                    if (((longlong)iVar6 < (longlong)uVar19) &&
                       (*(uint *)((longlong)plVar20 + (longlong)iVar14 * 0x58 + 0x1c) <=
                        *(uint *)((longlong)plVar20 + (longlong)iVar6 * 0x58 + 0x1c))) {
                      iVar13 = iVar6;
                    }
                    if (*(uint *)((longlong)plVar20 + (longlong)iVar13 * 0x58 + 0x1c) <=
                        *(uint *)((longlong)plVar20 + (longlong)iVar5 * 0x58 + 0x1c)) break;
                    plVar10 = plVar20 + (longlong)iVar5 * 0xb;
                    plVar15 = &local_a0;
                    for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *plVar15 = *plVar10;
                      plVar10 = plVar10 + 1;
                      plVar15 = plVar15 + 1;
                    }
                    plVar10 = plVar20 + (longlong)iVar13 * 0xb;
                    plVar15 = plVar20 + (longlong)iVar5 * 0xb;
                    for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *plVar15 = *plVar10;
                      plVar10 = plVar10 + 1;
                      plVar15 = plVar15 + 1;
                    }
                    plVar10 = &local_a0;
                    plVar15 = plVar20 + (longlong)iVar13 * 0xb;
                    for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *plVar15 = *plVar10;
                      plVar10 = plVar10 + 1;
                      plVar15 = plVar15 + 1;
                    }
                    iVar6 = iVar13 * 2;
                    iVar14 = iVar13 * 2 + 1;
                    iVar5 = iVar13;
                  } while ((longlong)iVar14 < (longlong)uVar19);
                  plVar10 = plVar20;
                  plVar15 = &local_a0;
                  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar15 = *plVar10;
                    plVar10 = plVar10 + 1;
                    plVar15 = plVar15 + 1;
                  }
                  plVar10 = plVar20 + (uVar19 - 1) * 0xb;
                  plVar15 = plVar20;
                  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar15 = *plVar10;
                    plVar10 = plVar10 + 1;
                    plVar15 = plVar15 + 1;
                  }
                  plVar10 = &local_a0;
                  plVar15 = plVar20 + (uVar19 - 1) * 0xb;
                  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar15 = *plVar10;
                    plVar10 = plVar10 + 1;
                    plVar15 = plVar15 + 1;
                  }
                  bVar29 = 2 < uVar19;
                  uVar19 = uVar19 - 1;
                } while (bVar29);
              }
            }
          }
LAB_140a60396:
          pplVar8 = pplVar8 + -3;
        } while (&local_3a8 <= pplVar8);
      }
    }
  }
  if (local_3b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140a5fa94:
  local_538 = *plVar12;
  uStack_530 = plVar12[1];
  lVar7 = local_538;
  lVar3 = uStack_530;
  lVar11 = plVar21[-1];
  *plVar12 = *plVar9;
  plVar12[1] = lVar11;
  local_538._4_4_ = (undefined4)((ulonglong)local_538 >> 0x20);
  uStack_530._4_4_ = (undefined4)((ulonglong)uStack_530 >> 0x20);
  *(undefined4 *)plVar9 = (undefined4)local_538;
  *(undefined4 *)((longlong)plVar21 + -0xc) = local_538._4_4_;
  *(undefined4 *)(plVar21 + -1) = (undefined4)uStack_530;
  *(undefined4 *)((longlong)plVar21 + -4) = uStack_530._4_4_;
  iVar6 = iVar6 + -1;
  plVar21 = plVar21 + -4;
  local_538 = lVar7;
  uStack_530 = lVar3;
  if ((longlong)plVar16 - (longlong)plVar23 < (longlong)plVar15 - (longlong)plVar26) {
    if (plVar10 < plVar20) {
      *pplVar8 = plVar10;
      pplVar8[1] = plVar20;
      *(int *)(pplVar8 + 2) = iVar6;
      pplVar8 = pplVar8 + 3;
    }
    plVar10 = plVar12;
    plVar15 = plVar16;
    if (plVar9 <= plVar12 + 2) goto LAB_140a5fd31;
  }
  else {
    if (plVar12 + 2 < plVar9) {
      *pplVar8 = plVar12;
      pplVar8[1] = plVar21;
      *(int *)(pplVar8 + 2) = iVar6;
      pplVar8 = pplVar8 + 3;
    }
    plVar12 = plVar26;
    plVar21 = plVar20;
    plVar15 = plVar20;
    if (plVar20 <= plVar10) goto LAB_140a5fd31;
  }
  iVar5 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar12) >> 4);
  uVar19 = (ulonglong)(iVar5 + 1);
  plVar23 = plVar12;
  plVar12 = plVar10;
  plVar20 = plVar21;
  if (iVar6 == 0) goto LAB_140a5fb38;
  goto LAB_140a5f9f3;
LAB_140a5ff59:
  lVar11 = plVar23[1];
  local_98 = (int)lVar11;
  local_a0 = *plVar23;
  *(undefined4 *)(plVar23 + 1) = *(undefined4 *)((longlong)plVar21 + -4);
  *plVar23 = *plVar9;
  *(int *)((longlong)plVar21 + -4) = (int)lVar11;
  *plVar9 = local_a0;
  iVar6 = local_564 + -1;
  if ((longlong)plVar26 - (longlong)local_560 < (longlong)plVar15 - (longlong)plVar10) {
    if (plVar12 < plVar20) {
      *local_570 = plVar12;
      local_570[1] = plVar20;
      *(int *)(local_570 + 2) = iVar6;
      local_570 = local_570 + 3;
    }
    plVar10 = plVar23;
    plVar15 = plVar26;
    pplVar8 = local_570;
    plVar20 = plVar21 + -3;
    plVar12 = plVar23;
    if (plVar9 <= (longlong *)((longlong)plVar23 + 0xcU)) goto LAB_140a6009b;
  }
  else {
    if ((longlong *)((longlong)plVar23 + 0xcU) < plVar9) {
      *local_570 = plVar23;
      local_570[1] = plVar21 + -3;
      *(int *)(local_570 + 2) = iVar6;
      local_570 = local_570 + 3;
    }
    plVar15 = plVar20;
    pplVar8 = local_570;
    if (plVar20 <= plVar12) goto LAB_140a6009b;
  }
  iVar5 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar10) >> 2) * -0x55555555;
  uVar28 = iVar5 + 1;
  pplVar8 = local_570;
  plVar23 = plVar12;
  if (iVar6 == 0) goto LAB_140a606e1;
  goto LAB_140a5fe4f;
code_r0x000140a602a2:
  for (; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar22 = *plVar18;
    plVar18 = plVar18 + 1;
    plVar22 = plVar22 + 1;
  }
  plVar18 = plVar9;
  plVar17 = plVar12;
  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar17 = *plVar18;
    plVar18 = plVar18 + 1;
    plVar17 = plVar17 + 1;
  }
  plVar18 = &local_a0;
  plVar17 = plVar9;
  for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar17 = *plVar18;
    plVar18 = plVar18 + 1;
    plVar17 = plVar17 + 1;
  }
  iVar6 = iVar6 + -1;
  if ((longlong)plVar16 - (longlong)plVar23 < (longlong)plVar10 - (longlong)plVar26) {
    if (plVar20 < plVar15) {
      *pplVar8 = plVar20;
      pplVar8[1] = plVar15;
      *(int *)(pplVar8 + 2) = iVar6;
      pplVar8 = pplVar8 + 3;
    }
    plVar20 = plVar12;
    plVar15 = plVar21 + -0x16;
    plVar26 = plVar12;
    plVar10 = plVar16;
    if (plVar9 <= plVar12 + 0xb) goto LAB_140a60396;
  }
  else {
    if (plVar12 + 0xb < plVar9) {
      *pplVar8 = plVar12;
      pplVar8[1] = plVar21 + -0x16;
      *(int *)(pplVar8 + 2) = iVar6;
      pplVar8 = pplVar8 + 3;
    }
    plVar10 = plVar15;
    if (plVar15 <= plVar20) goto LAB_140a60396;
  }
  iVar5 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar26) >> 3) * -0x45d1745d;
  uVar28 = iVar5 + 1;
  plVar12 = plVar20;
  plVar23 = plVar26;
  if (iVar6 == 0) goto LAB_140a604d0;
  goto LAB_140a601d5;
}



// FUNCTION 140a6093c FUN_140a6093c body=150 status=ok
// SIG undefined FUN_140a6093c(void)

ulonglong FUN_140a6093c(undefined8 *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  bool bVar12;
  
  lVar6 = *(longlong *)*param_1;
  lVar8 = (longlong)*param_2 * 0x58;
  lVar11 = lVar6 + lVar8;
  lVar1 = lVar6 + (longlong)*param_3 * 0x58;
  bVar2 = *(byte *)(lVar6 + 0x20 + lVar8);
  uVar10 = (undefined7)((ulonglong)lVar8 >> 8);
  bVar3 = *(byte *)(lVar6 + 0x20 + (longlong)*param_3 * 0x58);
  if (bVar2 != bVar3) {
    if (*(longlong *)(lVar11 + 0x14) != 0) {
      return CONCAT71(uVar10,bVar2 < bVar3 && *(longlong *)(lVar1 + 0x14) != 0);
    }
    return CONCAT71(uVar10,1);
  }
  uVar9 = CONCAT71(uVar10,*(char *)(lVar11 + 0x51));
  if (*(char *)(lVar11 + 0x51) == *(char *)(lVar1 + 0x51)) {
    iVar4 = param_3[2];
    iVar5 = param_2[2];
    bVar12 = SBORROW4(iVar5,iVar4);
    iVar7 = iVar5 - iVar4;
    if (iVar5 == iVar4) {
      iVar5 = param_2[1];
      iVar4 = param_3[1];
      if (iVar5 == iVar4) {
        return (ulonglong)
               CONCAT31((int3)(*(uint *)(lVar11 + 0x1c) >> 8),
                        *(uint *)(lVar11 + 0x1c) < *(uint *)(lVar1 + 0x1c));
      }
      lVar8 = (longlong)iVar5 * 0x58 + lVar6;
      if (iVar5 == -1) {
        lVar8 = lVar11;
      }
      lVar11 = (longlong)iVar4 * 0x58 + lVar6;
      if (iVar4 == -1) {
        lVar11 = lVar1;
      }
      iVar4 = *(int *)(lVar8 + 0x1c);
      bVar12 = SBORROW4(iVar4,*(int *)(lVar11 + 0x1c));
      iVar7 = iVar4 - *(int *)(lVar11 + 0x1c);
    }
    uVar9 = (ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),bVar12 != iVar7 < 0);
  }
  return uVar9;
}



// FUNCTION 140a609d2 FUN_140a609d2 body=120 status=ok
// SIG undefined FUN_140a609d2(void)

void FUN_140a609d2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 8) < 0) {
    lVar2 = (longlong)*(int *)(param_1 + 4);
    lVar1 = *param_2;
    if (*(int *)(lVar1 + 8 + lVar2 * 0xc) < 0) {
      local_28 = (undefined4)*param_2;
      uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_20 = (undefined4)param_2[1];
      uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140a609d2(lVar1 + lVar2 * 0xc);
      lVar2 = (longlong)*(int *)(param_1 + 4);
      lVar1 = *param_2;
    }
    *(int *)(param_1 + 8) = *(int *)(lVar1 + 8 + lVar2 * 0xc) + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a60a4c FUN_140a60a4c body=8389 status=ok
// SIG undefined FUN_140a60a4c(void)

void FUN_140a60a4c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_c68 [32];
  code **local_c48;
  longlong local_c38;
  undefined8 *local_c30;
  undefined8 local_c28;
  code *local_c20;
  longlong *local_c18;
  longlong *local_c08;
  longlong *local_c00;
  undefined8 local_bf0;
  longlong *local_be8;
  undefined8 local_be0;
  longlong *local_bd8;
  code *local_bd0;
  longlong *local_bc8;
  undefined8 local_bc0;
  longlong *local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined1 local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined2 local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined4 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  code *local_b58;
  longlong *local_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined1 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  longlong *local_b20;
  undefined4 local_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined4 local_b00;
  longlong *local_af8;
  undefined4 local_af0;
  undefined1 local_ae8;
  undefined8 local_ae0;
  undefined4 local_ad8;
  undefined8 local_ad0;
  undefined1 local_ac8 [16];
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined1 local_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined2 local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined1 local_a68 [16];
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined1 local_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined2 local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a12;
  undefined1 local_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined1 local_9e8 [16];
  undefined1 local_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined1 local_9b8 [16];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined1 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined2 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined4 local_968;
  undefined1 local_964;
  undefined1 local_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined4 local_948;
  undefined1 local_944;
  undefined1 local_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined4 local_928;
  undefined1 local_924;
  undefined1 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  longlong *local_900;
  undefined4 local_8c0;
  undefined1 local_8bc;
  undefined8 local_848;
  longlong *local_840;
  undefined4 local_800;
  undefined1 local_7fc;
  code *local_788;
  undefined4 local_780;
  undefined4 uStack_77c;
  undefined4 local_740;
  undefined1 local_73c;
  code *local_6c8;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined1 local_3d0 [112];
  undefined2 local_360;
  undefined1 local_358 [16];
  undefined2 local_348;
  undefined1 local_340 [288];
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 local_210;
  undefined7 uStack_20f;
  int local_208 [2];
  undefined8 local_200;
  undefined8 uStack_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [56];
  undefined1 local_1b0 [256];
  undefined1 local_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c68;
  plVar5 = *(longlong **)(param_1 + 0x278);
  if (plVar5 == (longlong *)0x0) goto LAB_140a60cae;
  iVar8 = (int)plVar5[1];
  do {
    if (iVar8 == 0) goto LAB_140a60cae;
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar17 = iVar8 == iVar7;
    if (bVar17) {
      *(int *)(plVar5 + 1) = iVar8 + 1;
      iVar7 = iVar8;
    }
    iVar8 = iVar7;
    UNLOCK();
  } while (!bVar17);
  lVar10 = *(longlong *)(param_1 + 0x270);
  local_c30 = param_3;
  if (lVar10 != 0) {
    bVar4 = *(byte *)(lVar10 + 0x369);
    if ((bVar4 & 0x1c) == 0) {
LAB_140a60aca:
      *(undefined8 *)(param_1 + 0x388) = 0;
      FUN_140a50678(local_3d0);
      local_c48 = &local_788;
      FUN_140a52ce6(local_608,"SSpacer",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xe4);
      FUN_140a50c6a(local_608,&local_6c8,local_3d0);
      plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
      if (plVar6 == (longlong *)0x0) {
        *param_2 = local_6c8;
        plVar14 = (longlong *)param_2[1];
        if (plVar14 != (longlong *)0x0) {
          param_2[1] = 0;
LAB_140a621e6:
          LOCK();
          plVar6 = plVar14 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
joined_r0x000140a62224:
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *param_2 = local_6c8;
        plVar14 = (longlong *)param_2[1];
        if (plVar6 == plVar14) {
          LOCK();
          plVar14 = plVar6 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
            plVar14 = plVar6;
            goto joined_r0x000140a62224;
          }
        }
        else {
          param_2[1] = plVar6;
          if (plVar14 != (longlong *)0x0) goto LAB_140a621e6;
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_600;
      if (local_600 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_600 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_600)(local_600);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_208[0] == 0) {
LAB_140a60b97:
        if (CONCAT71(uStack_20f,local_210) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar11 = (undefined8 *)CONCAT71(uStack_20f,local_210);
        if (puVar11 != (undefined8 *)0x0) {
          (**(code **)*puVar11)(puVar11,0);
          FUN_1446efa72(&local_210,0,0,0x10);
          local_208[0] = 0;
          goto LAB_140a60b97;
        }
      }
      FUN_140a4ff8c(local_3d0);
      if ((bVar4 & 0x1c) == 0) {
        *(undefined8 *)(param_1 + 0x390) = 0;
        FUN_140a50678(local_3d0);
        local_c48 = &local_788;
        FUN_140a52ce6(local_608,"SSpacer",
                      ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x112);
        FUN_140a50c6a(local_608,&local_6c8,local_3d0);
        plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
        if (plVar6 == (longlong *)0x0) {
          *local_c30 = local_6c8;
          plVar14 = (longlong *)local_c30[1];
          if (plVar14 != (longlong *)0x0) {
            local_c30[1] = 0;
LAB_140a622a7:
            LOCK();
            plVar6 = plVar14 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar3 = (int *)((longlong)plVar14 + 0xc);
              *piVar3 = *piVar3 + -1;
              iVar8 = *piVar3;
              UNLOCK();
joined_r0x000140a622e0:
              if (iVar8 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          *local_c30 = local_6c8;
          plVar14 = (longlong *)local_c30[1];
          if (plVar6 == plVar14) {
            LOCK();
            plVar14 = plVar6 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              *piVar3 = *piVar3 + -1;
              iVar8 = *piVar3;
              UNLOCK();
              plVar14 = plVar6;
              goto joined_r0x000140a622e0;
            }
          }
          else {
            local_c30[1] = plVar6;
            if (plVar14 != (longlong *)0x0) goto LAB_140a622a7;
          }
        }
        plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar6 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_600 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_600 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_600)(local_600);
            LOCK();
            piVar3 = (int *)((longlong)local_600 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_600 + 0x10))(local_600);
            }
          }
        }
        if (local_208[0] == 0) {
LAB_140a60c86:
          if (CONCAT71(uStack_20f,local_210) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar11 = (undefined8 *)CONCAT71(uStack_20f,local_210);
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11,0);
            FUN_1446efa72(&local_210,0,0,0x10);
            local_208[0] = 0;
            goto LAB_140a60c86;
          }
        }
        FUN_140a4ff8c(local_3d0);
        goto LAB_140a60ca4;
      }
    }
    else {
      FUN_145ab3d24(local_3d0);
      local_b0 = 0;
      local_980 = CONCAT11(1,*(byte *)(lVar10 + 0x369) >> 3 & 1);
      local_978 = 0;
      uStack_970 = 0;
      local_348 = local_980;
      FUN_144a450dc(local_340,&local_978);
      FUN_1449db362(&local_978);
      local_9a8 = 0;
      uStack_9a0 = 0;
      local_998 = 1;
      local_990 = 0;
      uStack_988 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = (longlong *)CONCAT71(local_1f0._1_7_,1);
      FUN_144a450dc(local_1e8,&local_990);
      FUN_1449db362(&local_990);
      local_6c8 = FUN_1469b8b46;
      local_6c0 = 0;
      FUN_14576741c(local_608,param_1);
      FUN_144a450dc(local_1b0,local_608);
      FUN_1449db362(local_608);
      local_928 = 1;
      local_924 = 1;
      local_920 = 1;
      local_918 = 0;
      uStack_910 = 0;
      local_c38 = FUN_145ab3468(local_3d0);
      FUN_1446ddc76(&local_b58,"Window.MinMaxRestoreButtonHover",1);
      lVar9 = FUN_140a2b044(&DAT_14c96b348);
      if (lVar9 == 0) {
        lVar9 = DAT_14c96b350;
      }
      uVar12 = FUN_141492734(lVar9,local_b58,0,0);
      lVar9 = local_c38;
      *(undefined8 *)(local_c38 + 0x1b8) = uVar12;
      FUN_1446ddc76(&local_9c0,"launcher-minimizeWindowButton",1);
      FUN_1457671b0(local_9b8,local_9c0);
      FUN_145767264(lVar9,local_9b8);
      FUN_140a53334(local_608);
      local_6c8 = FUN_145d401b8;
      local_6c0 = 0;
      FUN_1457672f2(local_608,param_1,&local_6c8);
      local_6c8 = FUN_1459b82b6;
      local_6c0 = 0;
      FUN_140a56d08(local_608,param_1,&local_6c8);
      local_6c8 = (code *)0x149f04f08;
      local_6c0 = 8;
      FUN_1446e940c(&local_bc0,&local_6c8);
      local_6c8 = (code *)0x149f04f1a;
      local_6c0 = 0xe;
      FUN_1446e940c(&local_bd0,&local_6c8);
      FUN_140208bae(&local_c08,&local_bd0,&local_bc0,L"Minimize");
      FUN_14023423e(local_9e8,&local_c08);
      local_9d8 = 1;
      local_9d0 = 0;
      uStack_9c8 = 0;
      local_c28 = FUN_145ab3412(local_608,local_9e8);
      local_6c8 = (code *)0x149f04f08;
      local_6c0 = 8;
      FUN_1446e940c(&local_be0,&local_6c8);
      local_6c8 = (code *)0x149f04f1a;
      local_6c0 = 0xe;
      FUN_1446e940c(&local_bf0,&local_6c8);
      FUN_140208bae(&local_c20,&local_bf0,&local_be0,L"Minimize");
      FUN_14023423e((longlong)&local_a12 + 2,&local_c20);
      local_a00 = 1;
      local_9f8 = 0;
      uStack_9f0 = 0;
      uVar12 = FUN_14576721a(local_c28,(longlong)&local_a12 + 2);
      local_c48 = (code **)((longlong)&local_a12 + 1);
      FUN_140a554b8(&local_6c8,"SImage",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x91);
      FUN_140a52c70(&local_6c8,&local_908,uVar12);
      plVar6 = local_900;
      if (local_900 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_900 + 1) = (int)local_900[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_900 + 1) = (int)local_900[1] + 1;
        UNLOCK();
      }
      plVar14 = *(longlong **)(local_c38 + 0x1b0);
      *(undefined8 *)(local_c38 + 0x1a8) = local_908;
      *(longlong **)(local_c38 + 0x1b0) = local_900;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      local_c48 = (code **)&local_a12;
      FUN_145ab3730(&local_788,"SButton",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x88);
      FUN_145ab34ca(&local_788,&local_848,local_c38);
      plVar14 = local_840;
      if (local_840 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x308) = local_848;
        plVar15 = *(longlong **)(param_1 + 0x310);
        if (plVar15 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x310) = 0;
LAB_140a62398:
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
joined_r0x000140a623d7:
            if (iVar8 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_840 + 1) = (int)local_840[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x308) = local_848;
        plVar15 = *(longlong **)(param_1 + 0x310);
        if (local_840 == plVar15) {
          LOCK();
          plVar15 = local_840 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_840)(local_840);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
            plVar15 = plVar14;
            goto joined_r0x000140a623d7;
          }
        }
        else {
          *(longlong **)(param_1 + 0x310) = local_840;
          if (plVar15 != (longlong *)0x0) goto LAB_140a62398;
        }
      }
      plVar14 = local_840;
      if (local_840 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_840 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_840)(local_840);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      plVar14 = (longlong *)CONCAT44(uStack_77c,local_780);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_900;
      if (local_900 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_900 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_900)(local_900);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_c20 != (code *)0x0) {
        (**(code **)(*(longlong *)local_c20 + 0x10))();
      }
      if (local_c08 != (longlong *)0x0) {
        (**(code **)(*local_c08 + 0x10))();
      }
      FUN_140a55a86(local_608);
      FUN_145ab35f4(local_3d0);
      FUN_145ab3d24(local_3d0);
      local_b0 = 0;
      local_a30 = CONCAT11(1,*(byte *)(lVar10 + 0x369) >> 4 & 1);
      local_a28 = 0;
      uStack_a20 = 0;
      local_348 = local_a30;
      FUN_144a450dc(local_340,&local_a28);
      FUN_1449db362(&local_a28);
      local_a58 = 0;
      uStack_a50 = 0;
      local_a48 = 1;
      local_a40 = 0;
      uStack_a38 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = (longlong *)CONCAT71(local_1f0._1_7_,1);
      FUN_144a450dc(local_1e8,&local_a40);
      FUN_1449db362(&local_a40);
      local_6c8 = FUN_1469b8c26;
      local_6c0 = 0;
      FUN_14576741c(local_608,param_1);
      FUN_144a450dc(local_1b0,local_608);
      FUN_1449db362(local_608);
      local_948 = 1;
      local_944 = 1;
      local_940 = 1;
      local_938 = 0;
      uStack_930 = 0;
      local_c38 = FUN_145ab3468(local_3d0);
      FUN_1446ddc76(&local_c08,"Window.MinMaxRestoreButtonHover",1);
      lVar9 = FUN_140a2b044(&DAT_14c96b348);
      if (lVar9 == 0) {
        lVar9 = DAT_14c96b350;
      }
      uVar12 = FUN_141492734(lVar9,local_c08,0,0);
      lVar9 = local_c38;
      *(undefined8 *)(local_c38 + 0x1b8) = uVar12;
      FUN_1446ddc76(&local_a70,"launcher-maximizeRestoreWindowButton",1);
      FUN_1457671b0(local_a68,local_a70);
      FUN_145767264(lVar9,local_a68);
      FUN_140a53334(local_608);
      local_6c8 = FUN_145d402a6;
      local_6c0 = 0;
      FUN_1457672f2(local_608,param_1,&local_6c8);
      local_6c8 = FUN_1459b82b6;
      local_6c0 = 0;
      FUN_140a56d08(local_608,param_1,&local_6c8);
      local_6c8 = FUN_1469b8d1a;
      local_6c0 = 0;
      FUN_145767b48(local_608,param_1,&local_6c8);
      local_6c8 = FUN_1469b8d1a;
      local_6c0 = 0;
      FUN_1457679aa(local_608,param_1,&local_6c8);
      local_c48 = &local_c20;
      FUN_140a554b8(&local_6c8,"SImage",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xa1);
      FUN_140a52c70(&local_6c8,&local_908,local_608);
      plVar6 = local_900;
      if (local_900 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_900 + 1) = (int)local_900[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_900 + 1) = (int)local_900[1] + 1;
        UNLOCK();
      }
      plVar14 = *(longlong **)(local_c38 + 0x1b0);
      *(undefined8 *)(local_c38 + 0x1a8) = local_908;
      *(longlong **)(local_c38 + 0x1b0) = local_900;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      local_c48 = &local_b58;
      FUN_145ab3730(&local_788,"SButton",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x98);
      FUN_145ab34ca(&local_788,&local_848,local_c38);
      plVar14 = local_840;
      if (local_840 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x318) = local_848;
        plVar15 = *(longlong **)(param_1 + 800);
        if (plVar15 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 800) = 0;
LAB_140a624f4:
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
joined_r0x000140a62533:
            if (iVar8 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_840 + 1) = (int)local_840[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x318) = local_848;
        plVar15 = *(longlong **)(param_1 + 800);
        if (local_840 == plVar15) {
          LOCK();
          plVar15 = local_840 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_840)(local_840);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
            plVar15 = plVar14;
            goto joined_r0x000140a62533;
          }
        }
        else {
          *(longlong **)(param_1 + 800) = local_840;
          if (plVar15 != (longlong *)0x0) goto LAB_140a624f4;
        }
      }
      plVar14 = local_840;
      if (local_840 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_840 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_840)(local_840);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      plVar14 = (longlong *)CONCAT44(uStack_77c,local_780);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_900;
      if (local_900 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_900 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_900)(local_900);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_140a55a86(local_608);
      FUN_145ab35f4(local_3d0);
      FUN_145ab3d24(local_3d0);
      local_b0 = 0;
      local_a88 = CONCAT11(1,*(byte *)(lVar10 + 0x369) >> 2 & 1);
      local_a80 = 0;
      uStack_a78 = 0;
      local_348 = local_a88;
      FUN_144a450dc(local_340,&local_a80);
      FUN_1449db362(&local_a80);
      local_ab8 = 0;
      uStack_ab0 = 0;
      local_aa8 = 1;
      local_aa0 = 0;
      uStack_a98 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = (longlong *)CONCAT71(local_1f0._1_7_,1);
      FUN_144a450dc(local_1e8,&local_aa0);
      FUN_1449db362(&local_aa0);
      local_6c8 = FUN_1469b8e8c;
      local_6c0 = 0;
      FUN_14576741c(local_608,param_1);
      FUN_144a450dc(local_1b0,local_608);
      FUN_1449db362(local_608);
      local_968 = 1;
      local_964 = 1;
      local_960 = 1;
      local_958 = 0;
      uStack_950 = 0;
      lVar9 = FUN_145ab3468(local_3d0);
      FUN_1446ddc76(&local_c08,"Window.CloseButtonHover",1);
      lVar10 = FUN_140a2b044(&DAT_14c96b348);
      if (lVar10 == 0) {
        lVar10 = DAT_14c96b350;
      }
      uVar12 = FUN_141492734(lVar10,local_c08,0,0);
      *(undefined8 *)(lVar9 + 0x1b8) = uVar12;
      FUN_1446ddc76(&local_ad0,"launcher-closeWindowButton",1);
      FUN_1457671b0(local_ac8,local_ad0);
      FUN_145767264(lVar9,local_ac8);
      FUN_140a53334(local_608);
      local_6c8 = FUN_145d400d8;
      local_6c0 = 0;
      FUN_1457672f2(local_608,param_1,&local_6c8);
      local_6c8 = FUN_1459b82b6;
      local_6c0 = 0;
      FUN_140a56d08(local_608,param_1,&local_6c8);
      local_af8 = *(longlong **)(param_1 + 0x360);
      if (local_af8 != (longlong *)0x0) {
        (**(code **)(*local_af8 + 8))();
      }
      local_af0 = *(undefined4 *)(param_1 + 0x368);
      local_ae8 = *(undefined1 *)(param_1 + 0x370);
      local_ae0 = 0;
      local_ad8 = 0;
      FUN_1413a4324(&local_ae0,param_1 + 0x378);
      uVar12 = FUN_145ab3412(local_608,&local_af8);
      local_b20 = *(longlong **)(param_1 + 0x360);
      if (local_b20 != (longlong *)0x0) {
        (**(code **)(*local_b20 + 8))();
      }
      local_b18 = *(undefined4 *)(param_1 + 0x368);
      local_b10 = *(undefined1 *)(param_1 + 0x370);
      local_b08 = 0;
      local_b00 = 0;
      FUN_1413a4324(&local_b08,param_1 + 0x378);
      uVar12 = FUN_14576721a(uVar12,&local_b20);
      local_c48 = &local_c20;
      FUN_140a554b8(&local_6c8,"SImage",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xb1);
      FUN_140a52c70(&local_6c8,&local_908,uVar12);
      plVar6 = local_900;
      if (local_900 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_900 + 1) = (int)local_900[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_900 + 1) = (int)local_900[1] + 1;
        UNLOCK();
      }
      plVar14 = *(longlong **)(lVar9 + 0x1b0);
      *(undefined8 *)(lVar9 + 0x1a8) = local_908;
      *(longlong **)(lVar9 + 0x1b0) = local_900;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      local_c48 = &local_b58;
      FUN_145ab3730(&local_788,"SButton",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xa8);
      FUN_145ab34ca(&local_788,&local_848,lVar9);
      plVar14 = local_840;
      if (local_840 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x328) = local_848;
        plVar15 = *(longlong **)(param_1 + 0x330);
        if (plVar15 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x330) = 0;
LAB_140a62650:
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
joined_r0x000140a6268f:
            if (iVar8 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_840 + 1) = (int)local_840[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x328) = local_848;
        plVar15 = *(longlong **)(param_1 + 0x330);
        if (local_840 == plVar15) {
          LOCK();
          plVar15 = local_840 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_840)(local_840);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
            plVar15 = plVar14;
            goto joined_r0x000140a6268f;
          }
        }
        else {
          *(longlong **)(param_1 + 0x330) = local_840;
          if (plVar15 != (longlong *)0x0) goto LAB_140a62650;
        }
      }
      plVar14 = local_840;
      if (local_840 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_840 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_840)(local_840);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      plVar14 = (longlong *)CONCAT44(uStack_77c,local_780);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_900;
      if (local_900 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_900 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_900)(local_900);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_140a55a86(local_608);
      FUN_145ab35f4(local_3d0);
      if (*(char *)(param_1 + 0x3a8) != '\x01') goto LAB_140a60aca;
      FUN_140a5296a(local_608);
      FUN_140a50426(&local_6c8);
      lVar10 = FUN_140a52578(&local_6c8);
      *(undefined4 *)(lVar10 + 0x40) = 1;
      *(undefined1 *)(lVar10 + 0x44) = 1;
      *(undefined4 *)(lVar10 + 0x48) = 1;
      *(undefined1 *)(lVar10 + 0x4c) = 1;
      local_b48 = 0;
      uStack_b40 = 0x4080000000000000;
      local_b38 = 1;
      local_b30 = 0;
      uStack_b28 = 0;
      *(undefined1 *)(lVar10 + 0x28) = 1;
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(undefined4 *)(lVar10 + 0x1c) = 0;
      *(undefined4 *)(lVar10 + 0x20) = 0;
      *(undefined4 *)(lVar10 + 0x24) = 0x40800000;
      FUN_144a450dc(lVar10 + 0x30,&local_b30);
      FUN_1449db362(&local_b30);
      FUN_145767c20(local_3d0);
      local_788 = FUN_1459b82b6;
      local_780 = 0;
      FUN_1457678e0(local_3d0,param_1);
      FUN_145767f20(&local_848,&local_bc0);
      if (local_840 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_840 + 1) = (int)local_840[1] + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_1 + 0x3a0);
      *(undefined8 *)(param_1 + 0x398) = local_848;
      *(longlong **)(param_1 + 0x3a0) = local_840;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_1457673a6(&local_848,&local_b58,local_3d0);
      local_c20 = local_b58;
      local_c18 = local_b50;
      if (local_b50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b50 + 1) = (int)local_b50[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140a4fe8e(lVar10,&local_c20);
      uVar12 = FUN_140a52392(local_608,uVar12);
      FUN_140a50426(&local_788);
      local_740 = 1;
      local_73c = 1;
      local_b70 = 0x3f800000;
      local_b6c = 1;
      local_b68 = 0;
      uStack_b60 = 0;
      puVar11 = (undefined8 *)FUN_140a5475a(&local_788);
      *(undefined8 *)(param_1 + 0x388) = *puVar11;
      uVar12 = FUN_140a52392(uVar12,puVar11);
      local_c48 = &local_bd0;
      FUN_140a541dc(&local_908,"SHorizontalBox",
                    ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xbd);
      FUN_140a50ec6(&local_908,&local_c08,uVar12);
      plVar6 = local_c00;
      if (local_c00 == (longlong *)0x0) {
        *param_2 = local_c08;
        plVar14 = (longlong *)param_2[1];
        if (plVar14 != (longlong *)0x0) {
          param_2[1] = 0;
LAB_140a627ae:
          LOCK();
          plVar6 = plVar14 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
joined_r0x000140a627ec:
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_c00 + 1) = (int)local_c00[1] + 1;
        UNLOCK();
        *param_2 = local_c08;
        plVar14 = (longlong *)param_2[1];
        if (local_c00 == plVar14) {
          LOCK();
          plVar14 = local_c00 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_c00)(local_c00);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar8 = *piVar3;
            UNLOCK();
            plVar14 = plVar6;
            goto joined_r0x000140a627ec;
          }
        }
        else {
          param_2[1] = local_c00;
          if (plVar14 != (longlong *)0x0) goto LAB_140a627ae;
        }
      }
      plVar6 = local_c00;
      if (local_c00 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_c00 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_c00)(local_c00);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_900 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_900 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_900)(local_900);
          LOCK();
          piVar3 = (int *)((longlong)local_900 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_900 + 0x10))(local_900);
          }
        }
      }
      FUN_140a509a6(&local_788);
      plVar6 = local_c18;
      if (local_c18 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_c18 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_c18)(local_c18);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_b50;
      if (local_b50 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_b50 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_b50)(local_b50);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_840 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_840 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_840)(local_840);
          LOCK();
          piVar3 = (int *)((longlong)local_840 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_840 + 0x10))(local_840);
          }
        }
      }
      FUN_1449db362(&local_210);
      FUN_140a4ff8c(local_3d0);
      FUN_140a509a6(&local_6c8);
      FUN_145ab33da(local_608);
      (**(code **)(*(longlong *)(param_1 + 0x268) + 0x18))(param_1 + 0x268,0);
    }
    FUN_140a53a96(local_3d0);
    local_b88 = CONCAT11(1,DAT_14c96b23c);
    local_b80 = 0;
    uStack_b78 = 0;
    local_360 = local_b88;
    FUN_144a450dc(local_358,&local_b80);
    FUN_1449db362(&local_b80);
    local_bb0 = 0x40000000;
    uStack_ba8 = 0;
    local_ba0 = 1;
    local_b98 = 0;
    uStack_b90 = 0;
    local_210 = 1;
    local_220 = 0x40000000;
    uStack_21c = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    FUN_144a450dc(local_208,&local_b98);
    FUN_1449db362(&local_b98);
    FUN_140a5296a(local_608);
    FUN_140a50426(&local_6c8);
    *(code **)(param_1 + 0x390) = local_6c8;
    uVar12 = FUN_140a52392(local_608,&local_6c8);
    FUN_140a50426(&local_788);
    local_740 = 1;
    local_73c = 1;
    uVar13 = FUN_140a52578(&local_788);
    local_bd0 = *(code **)(param_1 + 0x308);
    plVar6 = *(longlong **)(param_1 + 0x310);
    if (plVar6 == (longlong *)0x0) {
      local_bc8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_bc8 = plVar6;
    }
    uVar13 = FUN_140a4fe8e(uVar13,&local_bd0);
    uVar12 = FUN_140a52392(uVar12,uVar13);
    FUN_140a50426(&local_848);
    local_800 = 1;
    local_7fc = 1;
    uVar13 = FUN_140a52578(&local_848);
    local_be0 = *(undefined8 *)(param_1 + 0x318);
    plVar14 = *(longlong **)(param_1 + 800);
    if (plVar14 == (longlong *)0x0) {
      local_bd8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      local_bd8 = plVar14;
    }
    uVar13 = FUN_140a4fe8e(uVar13,&local_be0);
    uVar12 = FUN_140a52392(uVar12,uVar13);
    FUN_140a50426(&local_908);
    local_8c0 = 1;
    local_8bc = 1;
    uVar13 = FUN_140a52578(&local_908);
    local_bf0 = *(undefined8 *)(param_1 + 0x328);
    plVar15 = *(longlong **)(param_1 + 0x330);
    if (plVar15 == (longlong *)0x0) {
      local_be8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      local_be8 = plVar15;
    }
    uVar13 = FUN_140a4fe8e(uVar13,&local_bf0);
    uVar12 = FUN_140a52392(uVar12,uVar13);
    local_c48 = (code **)((longlong)&local_a12 + 1);
    FUN_140a541dc(&local_c08,"SHorizontalBox",
                  ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xee);
    FUN_140a50ec6(&local_c08,&local_bc0,uVar12);
    plVar1 = local_1f0;
    plVar2 = local_bb8;
    if (local_bb8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_bb8 + 1) = (int)local_bb8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_bb8 + 1) = (int)local_bb8[1] + 1;
      UNLOCK();
    }
    uStack_1f8 = local_bc0;
    local_1f0 = local_bb8;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar1 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_c48 = (code **)&local_a12;
    FUN_140a53d66(&local_c20,&DAT_149efe19f,
                  ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xe9);
    FUN_140a50bf4(&local_c20,&local_b58,local_3d0);
    plVar1 = local_b50;
    if (local_b50 == (longlong *)0x0) {
      *local_c30 = local_b58;
      plVar16 = (longlong *)local_c30[1];
      if (plVar16 != (longlong *)0x0) {
        local_c30[1] = 0;
LAB_140a62948:
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar3 = (int *)((longlong)plVar16 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar8 = *piVar3;
          UNLOCK();
joined_r0x000140a62983:
          if (iVar8 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_b50 + 1) = (int)local_b50[1] + 1;
      UNLOCK();
      *local_c30 = local_b58;
      plVar16 = (longlong *)local_c30[1];
      if (local_b50 == plVar16) {
        LOCK();
        plVar16 = local_b50 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_b50)(local_b50);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar8 = *piVar3;
          UNLOCK();
          plVar16 = plVar1;
          goto joined_r0x000140a62983;
        }
      }
      else {
        local_c30[1] = local_b50;
        if (plVar16 != (longlong *)0x0) goto LAB_140a62948;
      }
    }
    if (local_b50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b50)(local_b50);
        LOCK();
        piVar3 = (int *)((longlong)local_b50 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_b50 + 0x10))(local_b50);
        }
      }
    }
    plVar1 = local_c18;
    if (local_c18 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_c18 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_c18)(local_c18);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_bb8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_bb8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_bb8)(local_bb8);
        LOCK();
        piVar3 = (int *)((longlong)local_bb8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_bb8 + 0x10))(local_bb8);
        }
      }
    }
    if (local_c00 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_c00 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_c00)(local_c00);
        LOCK();
        piVar3 = (int *)((longlong)local_c00 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_c00 + 0x10))(local_c00);
        }
      }
    }
    plVar2 = local_be8;
    if (local_be8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_be8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_be8)(local_be8);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar3 = (int *)((longlong)plVar15 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    FUN_140a509a6(&local_908);
    plVar15 = local_bd8;
    if (local_bd8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_bd8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_bd8)(local_bd8);
        LOCK();
        piVar3 = (int *)((longlong)plVar15 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    FUN_140a509a6(&local_848);
    plVar14 = local_bc8;
    if (local_bc8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_bc8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_bc8)(local_bc8);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar6 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_140a509a6(&local_788);
    FUN_140a509a6(&local_6c8);
    FUN_145ab33da(local_608);
    FUN_140a5660c(local_3d0);
  }
LAB_140a60ca4:
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar3 = (int *)((longlong)plVar5 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_140a60cae:
  if ((local_60 ^ (ulonglong)auStack_c68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a62b12 FUN_140a62b12 body=141 status=ok
// SIG undefined FUN_140a62b12(void)

void FUN_140a62b12(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x1b0),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a62b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a62ba0 FUN_140a62ba0 body=141 status=ok
// SIG undefined FUN_140a62ba0(void)

void FUN_140a62ba0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x1b0),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a62c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a62c2e FUN_140a62c2e body=128 status=ok
// SIG undefined FUN_140a62c2e(void)

undefined8 *
FUN_140a62c2e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_144976d68(param_1,param_3,1);
  if (((lVar1 != 0) && (lVar1 = FUN_1403a09ea(param_1,lVar1,param_4,1), lVar1 != 0)) &&
     (lVar1 = FUN_140a62dba(param_1,lVar1,param_5,1), lVar1 != 0)) {
    puVar2 = (undefined8 *)FUN_140a62cae(lVar1);
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140a62cae FUN_140a62cae body=267 status=ok
// SIG undefined FUN_140a62cae(void)

longlong FUN_140a62cae(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    return lVar1;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4004e0;
  *(undefined1 *)(plVar4 + 2) = 1;
  plVar4[3] = param_1;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x80);
    if (plVar5 == (longlong *)0x0) {
      return lVar1;
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x78) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x80);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_140a62d2d;
    }
    *(longlong **)(param_1 + 0x80) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_140a62d2d;
  }
  LOCK();
  plVar3 = plVar5 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (plVar4 == (longlong *)0x0) {
    return lVar1;
  }
LAB_140a62d2d:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return lVar1;
}



// FUNCTION 140a62dba FUN_140a62dba body=677 status=ok
// SIG undefined FUN_140a62dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140a62dba(longlong param_1,longlong param_2,int *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_2 + 0x80) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x78);
    lVar10 = (longlong)*(int *)(param_2 + 0x80) << 3;
    do {
      lVar8 = *plVar12;
      if ((*(int *)(lVar8 + 0x10) == *param_3) && (*(int *)(lVar8 + 0x18) == param_3[2])) {
        if (plVar12 != (longlong *)0x0) goto LAB_140a62e18;
        break;
      }
      plVar12 = plVar12 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  if (param_4 != '\0') {
    local_70 = *(undefined8 *)(param_2 + 0x10);
    local_68 = *(undefined4 *)(param_2 + 0x18);
    FUN_1448075d0(local_60);
    lVar10 = FUN_14060eaf6(local_60);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (lVar10 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_1406b1d14(lVar10,param_3);
    }
    if (*(int *)(param_1 + 0x14c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x148);
      lVar8 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140a62e18;
      plVar12 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar12 != (longlong *)0x0) &&
         (((int)plVar12[2] == *(int *)(param_1 + 0x14c) &&
          ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
        lVar8 = 0;
        if ((lVar10 == 0) || ((lVar6 == 0 || (lVar3 = *plVar12, lVar8 = 0, lVar3 == 0))))
        goto LAB_140a62e18;
        uVar7 = FUN_140bc52d2(param_2);
        cVar5 = FUN_140a63060(lVar10,lVar6,uVar7,lVar3);
        if (cVar5 != '\0') {
          iVar2 = *(int *)(param_2 + 0x80);
          lVar10 = (longlong)iVar2;
          *(uint *)(param_2 + 0x80) = iVar2 + 1U;
          if (*(uint *)(param_2 + 0x84) < iVar2 + 1U) {
            FUN_140a631ae((longlong *)(param_2 + 0x78),iVar2);
          }
          lVar8 = *(longlong *)(param_2 + 0x78);
          *(undefined8 *)(lVar8 + lVar10 * 8) = 0;
          puVar9 = DAT_14cb7c9d0;
          if (DAT_14cb7c9d0 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)FUN_140595974(0x26000,0);
            lVar6 = 0x3ff;
            puVar4 = puVar9;
            do {
              puVar11 = puVar4 + 0x13;
              *puVar4 = puVar11;
              lVar6 = lVar6 + -1;
              puVar4 = puVar11;
            } while (lVar6 != 0);
            *puVar11 = DAT_14cb7c9d0;
            _DAT_14cb7c9d8 = _DAT_14cb7c9d8 + 0x400;
          }
          DAT_14cb7c9d0 = (undefined8 *)*puVar9;
          _DAT_14cb7c9dc = _DAT_14cb7c9dc + 1;
          puVar9[1] = param_1;
          puVar9[2] = 0;
          *(undefined4 *)(puVar9 + 3) = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[10] = 0;
          *puVar9 = &PTR_FUN_14b3fe330;
          puVar9[0xb] = param_2;
          puVar9[0xc] = 0;
          puVar9[0xd] = 0;
          puVar9[0xe] = 0;
          puVar9[0xf] = 0;
          puVar9[0x10] = 0;
          puVar9[0x11] = 0;
          puVar9[0x12] = 0;
          *(undefined8 **)(lVar8 + lVar10 * 8) = puVar9;
          *(int *)(puVar9 + 3) = param_3[2];
          puVar9[2] = *(undefined8 *)param_3;
          lVar8 = *(longlong *)(lVar8 + lVar10 * 8);
          goto LAB_140a62e18;
        }
      }
    }
  }
  lVar8 = 0;
LAB_140a62e18:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 140a63060 FUN_140a63060 body=241 status=ok
// SIG undefined FUN_140a63060(void)

undefined8 FUN_140a63060(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  int local_2c [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140a63152(param_4);
  uVar4 = 0;
  if ((cVar1 == '\0') || (*param_3 == 0)) goto LAB_140a630a9;
  cVar1 = *(char *)(param_2 + 0x3ad);
  if (cVar1 == '\0') {
LAB_140a6309c:
    uVar4 = 1;
    if (*(longlong *)(param_2 + 0x3d0) == 0) goto LAB_140a630a9;
    plVar2 = (longlong *)FUN_1488430d0();
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_2 + 8);
    }
    FUN_144a7660c(puVar3,local_2c,1);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(*plVar2 + lVar5) == local_2c[0]) &&
           (*(int *)(*plVar2 + 8 + lVar5) == local_24)) goto LAB_140a630a9;
        lVar5 = lVar5 + 0xc;
      } while ((longlong)(int)plVar2[1] * 0xc != lVar5);
    }
  }
  else if (*(char *)(*(longlong *)(*param_3 + 8) + 0x100) == '\0') {
    if (cVar1 != '\x01') goto LAB_140a6309c;
  }
  else if (cVar1 != '\x02') goto LAB_140a6309c;
  uVar4 = 0;
LAB_140a630a9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140a63152 FUN_140a63152 body=92 status=ok
// SIG undefined FUN_140a63152(void)

undefined8 FUN_140a63152(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_2 + 0x458) != 0) && ((longlong)*(int *)(param_2 + 0x468) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x460) + lVar2) != 0) goto LAB_140a63196;
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_2 + 0x468) * 8 != lVar2);
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return 1;
  }
LAB_140a63196:
  uVar1 = FUN_1407df772(param_2 + 0x450,param_1 + 0xd8);
  return uVar1;
}



// FUNCTION 140a631ae FUN_140a631ae body=353 status=ok
// SIG undefined FUN_140a631ae(void)

void FUN_140a631ae(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a63233;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a63233:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a63310 FUN_140a63310 body=286 status=ok
// SIG undefined FUN_140a63310(void)

void FUN_140a63310(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  code **local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3b0))) {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b414c70;
    local_60 = local_88;
    local_88[0] = FUN_143dcc7c8;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (ulonglong)param_2 * 8);
    lVar7 = (longlong)*(int *)(lVar1 + 0x28);
    if (lVar7 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if ((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 0xd) == param_2)) {
          (**(code **)(*plVar2 + 0x2f0))(plVar2);
          pcVar3 = local_88[0];
          pppuVar5 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar5 = &local_68;
          }
          local_90 = plVar2;
          uVar4 = (*(code *)(*pppuVar5)[1])();
          (*pcVar3)(uVar4,&local_90);
        }
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
      if (local_88[0] == (code *)0x0) goto LAB_140a63401;
    }
    pppuVar5 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar5 = local_78;
    }
    (*(code *)(*pppuVar5)[2])(pppuVar5);
  }
LAB_140a63401:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a63430 FUN_140a63430 body=85 status=ok
// SIG undefined FUN_140a63430(void)

void FUN_140a63430(longlong *param_1)

{
  if ((char)param_1[0x12f] == '\0') {
    if ((*(byte *)((longlong)param_1 + 0x2ea) & 0x80) != 0) {
      (**(code **)(*param_1 + 0x360))(param_1);
    }
    (**(code **)(*param_1 + 0x368))(param_1,*(undefined4 *)((longlong)param_1 + 0x96c));
                    /* WARNING: Could not recover jumptable at 0x000140a63469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x348))(param_1);
    return;
  }
  return;
}



// FUNCTION 140a63486 FUN_140a63486 body=965 status=ok
// SIG undefined FUN_140a63486(void)

void FUN_140a63486(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128 [3];
  undefined2 local_10c;
  undefined1 local_10a;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f8 = param_1[0xf7];
  local_108 = param_1[0xf5];
  lStack_100 = param_1[0xf6];
  local_168 = param_1[0xfa];
  local_178 = param_1[0xf8];
  uStack_170 = param_1[0xf9];
  memset(param_1 + 0xe7,0,0x100);
  *(undefined4 *)(param_1 + 0x101) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x3f800000;
  param_1[0xf7] = local_f8;
  param_1[0xf5] = local_108;
  param_1[0xf6] = lStack_100;
  param_1[0xfa] = local_168;
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_178;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = local_178._4_4_;
  *(undefined4 *)(param_1 + 0xf9) = (undefined4)uStack_170;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = uStack_170._4_4_;
  plVar1 = param_1 + 0x107;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)((longlong)param_1 + 0x844) < 0) {
    FUN_1447c0da8(plVar1,0);
  }
  local_128[0] = 0;
  local_128[1] = 0;
  (**(code **)(*param_1 + 0x3a8))(param_1);
  local_180 = plVar1;
  if ((longlong)(int)param_1[0x108] < 1) {
    uVar7 = 0;
    memset(&local_108,0,0x9c);
    local_138 = 0;
    lStack_130 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    lStack_160 = 0;
    local_158 = 0;
    local_10c = 0;
    local_10a = 0;
    local_148 = 0;
    lStack_140 = 0;
    uVar4 = 0xffffffff;
    uVar9 = 0x3f800000;
    lVar3 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0;
  }
  else {
    lVar2 = *plVar1 + (longlong)(int)param_1[0x108] * 0x100;
    uVar7 = *(undefined4 *)(lVar2 + -0x100);
    uVar9 = *(undefined4 *)(lVar2 + -0xfc);
    memcpy(&local_108,(void *)(lVar2 + -0xf8),0x9c);
    uVar4 = *(undefined4 *)(lVar2 + -0x5c);
    local_138 = *(longlong *)(lVar2 + -0x58);
    lStack_130 = *(longlong *)(lVar2 + -0x50);
    lVar3 = *(longlong *)(lVar2 + -0x48);
    local_148 = *(longlong *)(lVar2 + -0x40);
    lStack_140 = *(longlong *)(lVar2 + -0x38);
    uVar6 = *(undefined4 *)(lVar2 + -0x30);
    uVar5 = *(undefined1 *)(lVar2 + -0x2c);
    local_158 = *(longlong *)(lVar2 + -8);
    local_168 = *(longlong *)(lVar2 + -0x18);
    lStack_160 = *(longlong *)(lVar2 + -0x10);
    local_178 = *(longlong *)(lVar2 + -0x28);
    uStack_170 = *(longlong *)(lVar2 + -0x20);
  }
  *(undefined4 *)(param_1 + 0xe7) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x73c) = uVar9;
  memcpy(param_1 + 0xe8,&local_108,0x9c);
  *(undefined4 *)((longlong)param_1 + 0x7dc) = uVar4;
  param_1[0xfc] = local_138;
  param_1[0xfd] = lStack_130;
  param_1[0xfe] = lVar3;
  param_1[0xff] = local_148;
  param_1[0x100] = lStack_140;
  *(undefined4 *)(param_1 + 0x101) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x80c) = uVar5;
  *(undefined2 *)((longlong)param_1 + 0x80d) = local_10c;
  *(undefined1 *)((longlong)param_1 + 0x80f) = local_10a;
  param_1[0x102] = local_178;
  param_1[0x103] = uStack_170;
  param_1[0x104] = local_168;
  param_1[0x105] = lStack_160;
  param_1[0x106] = local_158;
  memcpy(param_1 + 0xb2,param_1 + 0xe7,0x100);
  plVar1 = local_180;
  if ((*(byte *)((longlong)param_1 + 0x63d) & 1) == 0) {
    bVar8 = false;
  }
  else if ((*(byte *)((longlong)param_1 + 0x2ea) & 2) == 0) {
    bVar8 = true;
  }
  else {
    lVar3 = FUN_14485cccc(param_1 + 0xc9);
    bVar8 = lVar3 != param_1[0x25];
  }
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfe | bVar8;
  if ((*(byte *)(param_1[0xf] + 0x1a0) & 1) != 0) {
    if (*(float *)((longlong)param_1 + 0x32c) + *(float *)(param_1 + 0x12) <=
        *(float *)((longlong)param_1 + 0x31c)) {
      (**(code **)(*param_1 + 0x3b0))(param_1,plVar1,local_128);
      *(undefined4 *)((longlong)param_1 + 0x32c) = *(undefined4 *)((longlong)param_1 + 0x31c);
    }
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6384c FUN_140a6384c body=2865 status=ok
// SIG undefined FUN_140a6384c(void)

void FUN_140a6384c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  double *pdVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  void *pvVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  uint local_160;
  undefined8 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  code *local_128;
  code *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar4 = *(ushort *)((longlong)param_1 + 0x2ea);
  if (((uVar4 & 2) == 0) || (*(float *)(param_1 + 0x66) <= *(float *)((longlong)param_1 + 0x31c))) {
    cVar11 = (**(code **)(*param_1 + 0x3a0))(param_1);
    if ((uVar4 & 2) != 0) goto LAB_140a63a67;
LAB_140a63a78:
    if (cVar11 == '\0') {
      local_168 = *(undefined4 *)(param_1[0xf] + 0x14c);
      local_128 = (code *)((ulonglong)local_128 & 0xffffffff00000000);
      local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffffff00);
      local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
      local_148 = (wchar_t *)((ulonglong)local_148 & 0xffffffffffffff00);
      local_160 = (uint)*(byte *)(param_1[0xf] + 0x148);
      local_138 = (undefined1 *)CONCAT44(local_138._4_4_,0x3f800000);
      local_158 = 0;
      local_150 = param_3;
      cVar11 = (**(code **)(*param_1 + 0x3c8))(param_1,param_2,param_1 + 0x71,param_1 + 0x91);
      if (cVar11 == '\0') {
        lVar18 = param_2[1];
        uVar12 = (int)lVar18 + 1;
        *(uint *)(param_2 + 1) = uVar12;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar12) {
          FUN_144a3a3ee(param_2);
        }
        lVar20 = *param_2;
        lVar15 = (longlong)(int)lVar18 * 0x100;
        pvVar17 = (void *)(lVar20 + lVar15);
        memset(pvVar17,0,0x100);
        *(undefined4 *)(lVar20 + 0xd0 + lVar15) = 0xffffffff;
        *(undefined4 *)(lVar20 + 4 + lVar15) = 0x3f800000;
        *(undefined4 *)(lVar20 + 0xa4 + lVar15) = 0xffffffff;
        lVar18 = param_1[0x91];
        lVar5 = param_1[0x92];
        *(longlong *)(lVar20 + 0x38 + lVar15) = param_1[0x93];
        plVar1 = (longlong *)(lVar20 + 0x28 + lVar15);
        *plVar1 = lVar18;
        plVar1[1] = lVar5;
        *(undefined8 *)(lVar20 + 0x20 + lVar15) = *(undefined8 *)(lVar20 + 0x38 + lVar15);
        puVar2 = (undefined8 *)(lVar20 + 0x28 + lVar15);
        uVar10 = puVar2[1];
        puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar15);
        *puVar3 = *puVar2;
        puVar3[1] = uVar10;
        dVar25 = (double)param_1[0x73] - (double)param_1[0x93];
        dVar22 = (double)param_1[0x72] - (double)param_1[0x92];
        dVar6 = (double)param_1[0x71] - (double)param_1[0x91];
        dVar24 = dVar25 * dVar25 + dVar6 * dVar6 + dVar22 * dVar22;
        if (((dVar24 != 1.0) || (dVar23 = dVar22, dVar7 = dVar25, dVar8 = dVar6, NAN(dVar24))) &&
           (dVar23 = DAT_14c8464e8, dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar24)) {
          dVar24 = 1.0 / SQRT(dVar24);
          dVar23 = dVar22 * dVar24;
          dVar7 = dVar25 * dVar24;
          dVar8 = dVar6 * dVar24;
        }
        *(double *)((longlong)pvVar17 + 0x58) = dVar8;
        *(double *)((longlong)pvVar17 + 0x60) = dVar23;
        *(double *)((longlong)pvVar17 + 0x68) = dVar7;
        *(undefined8 *)((longlong)pvVar17 + 0x40) = *(undefined8 *)((longlong)pvVar17 + 0x58);
        *(undefined8 *)((longlong)pvVar17 + 0x48) = *(undefined8 *)((longlong)pvVar17 + 0x60);
        *(undefined8 *)((longlong)pvVar17 + 0x50) = *(undefined8 *)((longlong)pvVar17 + 0x68);
        goto LAB_140a63c0b;
      }
    }
    else {
      lVar18 = param_1[0xf];
      iVar19 = 2;
      if (2 < *(int *)(lVar18 + 0x154)) {
        iVar19 = *(int *)(lVar18 + 0x154);
      }
      bVar21 = (uVar4 & 2) == 0;
      local_118 = 0;
      uStack_110 = 0;
      pdVar13 = (double *)(param_1 + 0x77);
      if (bVar21) {
        pdVar13 = (double *)(param_1 + 0x71);
      }
      local_f8 = pdVar13[2];
      local_108 = (code *)*pdVar13;
      uStack_100 = pdVar13[1];
      pdVar13 = (double *)(param_1 + 0x74);
      if (!bVar21) {
        pdVar13 = (double *)(param_1 + 0x7a);
      }
      local_b0 = (double)param_1[0x93];
      local_c0 = (double)param_1[0x91];
      dStack_b8 = (double)param_1[0x92];
      fVar26 = (float)SQRT((local_b0 - local_f8) * (local_b0 - local_f8) +
                           (local_c0 - (double)local_108) * (local_c0 - (double)local_108) +
                           (dStack_b8 - uStack_100) * (dStack_b8 - uStack_100));
      dVar25 = (double)(*(float *)(lVar18 + 0x100) * fVar26);
      local_e0 = pdVar13[2] * dVar25 * 0.3330000042915344 + local_f8;
      dStack_e8 = pdVar13[1] * dVar25 * 0.3330000042915344 + uStack_100;
      uStack_f0 = dVar25 * *pdVar13 * 0.3330000042915344 + (double)local_108;
      dVar25 = (double)(fVar26 * *(float *)(lVar18 + 0x104));
      local_c8 = (double)param_1[0x99] * dVar25 * 0.3330000042915344 + local_b0;
      dStack_d0 = (double)param_1[0x98] * dVar25 * 0.3330000042915344 + dStack_b8;
      local_d8 = dVar25 * (double)param_1[0x97] * 0.3330000042915344 + local_c0;
      FUN_140a665bc(&local_108);
      fVar26 = 1.0 / (float)(int)(iVar19 - 1U);
      lVar18 = 0x18;
      uVar16 = 0;
      do {
        if (iVar19 - 1U == uVar16) {
          lVar18 = param_2[1];
          uVar12 = (int)lVar18 + 1;
          *(uint *)(param_2 + 1) = uVar12;
          if (*(uint *)((longlong)param_2 + 0xc) < uVar12) {
            FUN_144a3a3ee(param_2);
          }
          lVar20 = *param_2;
          lVar18 = (longlong)(int)lVar18 * 0x100;
          pvVar17 = (void *)(lVar20 + lVar18);
          memset(pvVar17,0,0x100);
          *(undefined4 *)(lVar20 + 0xd0 + lVar18) = 0xffffffff;
          *(undefined4 *)(lVar20 + 4 + lVar18) = 0x3f800000;
          *(undefined4 *)(lVar20 + 0xa4 + lVar18) = 0xffffffff;
          *(double *)(lVar20 + 0x38 + lVar18) = local_b0;
          pdVar13 = (double *)(lVar20 + 0x28 + lVar18);
          *pdVar13 = local_c0;
          pdVar13[1] = dStack_b8;
          *(undefined8 *)(lVar20 + 0x20 + lVar18) = *(undefined8 *)(lVar20 + 0x38 + lVar18);
          puVar2 = (undefined8 *)(lVar20 + 0x28 + lVar18);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          dVar25 = local_c8 - local_b0;
          dVar22 = dStack_d0 - dStack_b8;
          dVar6 = local_d8 - local_c0;
          dVar24 = dVar25 * dVar25 + dVar6 * dVar6 + dVar22 * dVar22;
          if (((dVar24 != 1.0) || (dVar23 = dVar22, dVar7 = dVar25, dVar8 = dVar6, NAN(dVar24))) &&
             (dVar23 = DAT_14c8464e8, dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar24)) {
            dVar24 = 1.0 / SQRT(dVar24);
            dVar23 = dVar22 * dVar24;
            dVar7 = dVar25 * dVar24;
            dVar8 = dVar6 * dVar24;
          }
          *(double *)((longlong)pvVar17 + 0x58) = dVar8;
          *(double *)((longlong)pvVar17 + 0x60) = dVar23;
          *(double *)((longlong)pvVar17 + 0x68) = dVar7;
          *(undefined4 *)((longlong)pvVar17 + 0x40) = *(undefined4 *)((longlong)pvVar17 + 0x58);
          *(undefined4 *)((longlong)pvVar17 + 0x44) = *(undefined4 *)((longlong)pvVar17 + 0x5c);
          *(undefined4 *)((longlong)pvVar17 + 0x48) = *(undefined4 *)((longlong)pvVar17 + 0x60);
          *(undefined4 *)((longlong)pvVar17 + 0x4c) = *(undefined4 *)((longlong)pvVar17 + 100);
          *(undefined8 *)((longlong)pvVar17 + 0x50) = *(undefined8 *)((longlong)pvVar17 + 0x68);
          *(undefined4 *)((longlong)pvVar17 + 4) = 0x3f800000;
          break;
        }
        iVar14 = (int)uVar16;
        local_168 = *(undefined4 *)(param_1[0xf] + 0x14c);
        uVar16 = uVar16 + 1;
        local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffffff00);
        local_138 = (undefined1 *)CONCAT44(local_138._4_4_,fVar26);
        local_140 = (undefined1 *)CONCAT44(local_140._4_4_,(float)iVar14 * fVar26);
        local_148 = (wchar_t *)((ulonglong)local_148 & 0xffffffffffffff00);
        local_160 = (uint)*(byte *)(param_1[0xf] + 0x148);
        local_128 = (code *)((ulonglong)local_128 & 0xffffffff00000000);
        local_158 = 0;
        local_150 = param_3;
        cVar11 = (**(code **)(*param_1 + 0x3c8))
                           (param_1,param_2,local_118 + lVar18 + -0x18,local_118 + lVar18);
        lVar18 = lVar18 + 0x18;
      } while (cVar11 == '\0');
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x62) & 1) == 0) {
      iVar19 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar19 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
        FUN_144a3a3ee(param_2,iVar19);
      }
      lVar18 = *param_2;
      lVar15 = (longlong)iVar19 * 0x100;
      pvVar17 = (void *)(lVar18 + lVar15);
      memcpy(pvVar17,param_1 + 0xb2,0x100);
      lVar20 = param_1[0x91];
      lVar5 = param_1[0x92];
      *(longlong *)(lVar18 + 0x38 + lVar15) = param_1[0x93];
      plVar1 = (longlong *)(lVar18 + 0x28 + lVar15);
      *plVar1 = lVar20;
      plVar1[1] = lVar5;
      *(undefined8 *)(lVar18 + 0x20 + lVar15) = *(undefined8 *)(lVar18 + 0x38 + lVar15);
      puVar2 = (undefined8 *)(lVar18 + 0x28 + lVar15);
      uVar10 = puVar2[1];
      puVar3 = (undefined8 *)(lVar18 + 0x10 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      dVar25 = (double)param_1[0x79] - (double)param_1[0x93];
      dVar22 = (double)param_1[0x78] - (double)param_1[0x92];
      dVar6 = (double)param_1[0x77] - (double)param_1[0x91];
      dVar24 = dVar25 * dVar25 + dVar6 * dVar6 + dVar22 * dVar22;
      if (((dVar24 != 1.0) || (dVar23 = dVar22, dVar7 = dVar25, dVar8 = dVar6, NAN(dVar24))) &&
         (dVar23 = DAT_14c8464e8, dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar24)) {
        dVar24 = 1.0 / SQRT(dVar24);
        dVar23 = dVar22 * dVar24;
        dVar7 = dVar25 * dVar24;
        dVar8 = dVar6 * dVar24;
      }
      *(double *)((longlong)pvVar17 + 0x58) = dVar8;
      *(double *)((longlong)pvVar17 + 0x60) = dVar23;
      *(double *)((longlong)pvVar17 + 0x68) = dVar7;
      *(undefined4 *)((longlong)pvVar17 + 0x40) = *(undefined4 *)((longlong)pvVar17 + 0x58);
      *(undefined4 *)((longlong)pvVar17 + 0x44) = *(undefined4 *)((longlong)pvVar17 + 0x5c);
      *(undefined4 *)((longlong)pvVar17 + 0x48) = *(undefined4 *)((longlong)pvVar17 + 0x60);
      *(undefined4 *)((longlong)pvVar17 + 0x4c) = *(undefined4 *)((longlong)pvVar17 + 100);
      *(undefined8 *)((longlong)pvVar17 + 0x50) = *(undefined8 *)((longlong)pvVar17 + 0x68);
      *(undefined4 *)((longlong)pvVar17 + 4) = 0x3f800000;
      goto LAB_140a639ee;
    }
    cVar11 = (**(code **)(*param_1 + 0x3a0))(param_1);
LAB_140a63a67:
    if (*(char *)(param_1[0xf] + 0x1da) != '\x01') goto LAB_140a63a78;
    lVar18 = param_2[1];
    uVar12 = (int)lVar18 + 1;
    *(uint *)(param_2 + 1) = uVar12;
    if (*(uint *)((longlong)param_2 + 0xc) < uVar12) {
      FUN_144a3a3ee(param_2);
    }
    lVar18 = (longlong)(int)lVar18 * 0x100;
    pvVar17 = (void *)(*param_2 + lVar18);
    lVar18 = *param_2 + lVar18;
    memset(pvVar17,0,0x100);
    *(undefined4 *)(lVar18 + 0xd0) = 0xffffffff;
    *(undefined4 *)(lVar18 + 4) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xa4) = 0xffffffff;
    lVar20 = param_1[0x91];
    lVar5 = param_1[0x92];
    *(longlong *)(lVar18 + 0x38) = param_1[0x93];
    *(longlong *)(lVar18 + 0x28) = lVar20;
    *(longlong *)(lVar18 + 0x30) = lVar5;
    *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar18 + 0x38);
    *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x28);
    *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(lVar18 + 0x30);
    uVar16 = param_1[0x99];
    uVar9 = param_1[0x98];
    *(ulonglong *)(lVar18 + 0x40) = param_1[0x97] ^ 0x8000000000000000;
    *(ulonglong *)(lVar18 + 0x48) = uVar9 ^ 0x8000000000000000;
    *(ulonglong *)(lVar18 + 0x50) = uVar16 ^ 0x8000000000000000;
    if (param_1[0x25] == 0) {
      if (DAT_14cad83b0 == '\x01') {
        FUN_144a61b4f();
      }
      *(undefined8 *)(lVar18 + 0xb8) = 0;
      *(undefined8 *)(lVar18 + 0xc0) = 0;
      lVar20 = 0;
      *(undefined8 *)(lVar18 + 200) = 0;
      *(undefined4 *)((longlong)pvVar17 + 0xd0) = 0xffffffff;
      *(undefined1 *)((longlong)pvVar17 + 0xd4) = 1;
      *(undefined8 *)((longlong)pvVar17 + 0xd8) = 0;
    }
    else {
      FUN_140871de8(&local_108);
      *(undefined4 *)(lVar18 + 0xb8) = (undefined4)local_108;
      *(undefined4 *)(lVar18 + 0xbc) = local_108._4_4_;
      *(undefined4 *)(lVar18 + 0xc0) = (undefined4)uStack_100;
      *(undefined4 *)(lVar18 + 0xc4) = uStack_100._4_4_;
      *(undefined4 *)(lVar18 + 200) = (undefined4)local_f8;
      *(undefined4 *)(lVar18 + 0xcc) = local_f8._4_4_;
      *(undefined4 *)(lVar18 + 0xd0) = (undefined4)uStack_f0;
      *(undefined4 *)(lVar18 + 0xd4) = uStack_f0._4_4_;
      lVar20 = param_1[0x26];
      if (lVar20 == 0) {
LAB_140a642d4:
        *(undefined4 *)((longlong)pvVar17 + 0xd8) = 0;
        iVar19 = 0;
      }
      else {
        if (DAT_14cac6e60 == 0) {
          local_108 = FUN_144a7958c;
          local_120 = FUN_14081d0ea;
          local_128 = FUN_142b47bc4;
          local_138 = &LAB_1478989f1;
          local_140 = &LAB_146391124;
          local_148 = L"Engine";
          local_150 = 0x10000000000;
          local_158 = CONCAT44(local_158._4_4_,0x10000005);
          local_160 = 0x10;
          local_168 = 0x620;
          local_130 = &local_108;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          lVar20 = param_1[0x26];
          if (lVar20 == 0) goto LAB_140a642d4;
        }
        if ((((DAT_14cac6e60 == 0) || (lVar5 = *(longlong *)(lVar20 + 0x10), lVar5 == 0)) ||
            (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cac6e60 + 0x38))) ||
           (*(longlong *)
             (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) !=
            DAT_14cac6e60 + 0x30)) goto LAB_140a642d4;
        uVar12 = *(uint *)(lVar20 + 0xc);
        *(uint *)((longlong)pvVar17 + 0xd8) = uVar12;
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar19 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar19 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar19;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar19 = *(int *)(lVar20 + 0x10);
          bVar21 = iVar19 == 0;
          if (bVar21) {
            *(int *)(lVar20 + 0x10) = iVar14;
            iVar19 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar19 = iVar14;
          }
        }
      }
      *(int *)((longlong)pvVar17 + 0xdc) = iVar19;
      lVar20 = param_1[0x9a];
    }
    *(longlong *)((longlong)pvVar17 + 0xf0) = lVar20;
    *(undefined8 *)((longlong)pvVar17 + 0x68) = *(undefined8 *)(lVar18 + 0x50);
    *(undefined8 *)((longlong)pvVar17 + 0x58) = *(undefined8 *)(lVar18 + 0x40);
    *(undefined8 *)((longlong)pvVar17 + 0x60) = *(undefined8 *)(lVar18 + 0x48);
    *(byte *)((longlong)pvVar17 + 0xad) = *(byte *)((longlong)pvVar17 + 0xad) | 1;
LAB_140a63c0b:
    *(undefined4 *)((longlong)pvVar17 + 4) = 0x3f800000;
  }
  *(float *)(param_1 + 0x66) =
       *(float *)((longlong)param_1 + 0x31c) + *(float *)(param_1[0xf] + 0x150);
LAB_140a639ee:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a643c4 FUN_140a643c4 body=3837 status=ok
// SIG undefined FUN_140a643c4(void)

void FUN_140a643c4(longlong *param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_1b8 [32];
  float local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar9 = param_1[4];
  }
  else {
    lVar9 = 0;
  }
  if (((*(char *)(lVar9 + 0x178) == '\x03') && (0.0 <= *(float *)((longlong)param_1 + 0x33c))) &&
     (*(float *)((longlong)param_1 + 0x33c) <= *(float *)((longlong)param_1 + 0x31c))) {
    *(undefined4 *)((longlong)param_1 + 0x33c) = 0xc2c80000;
  }
  pdVar1 = (double *)(param_1 + 0x94);
  local_d8 = param_1[0x96];
  local_e8 = param_1[0x94];
  lStack_e0 = param_1[0x95];
  pdVar2 = (double *)(param_1 + 0x97);
  local_f8 = param_1[0x99];
  local_108 = param_1[0x97];
  lStack_100 = param_1[0x98];
  bVar3 = *(byte *)(param_1 + 0x62);
  if ((*(ushort *)((longlong)param_1 + 0x2ea) & 2) != 0) {
    if ((char)param_1[0x9b] == '\x01') {
      param_1[0x96] = param_1[0x9e];
      *pdVar1 = (double)param_1[0x9c];
      param_1[0x95] = param_1[0x9d];
      param_1[0x9a] = param_1[0xa2];
      if (((*(char *)((longlong)param_1 + 0x312) != '\0') ||
          (*(char *)((longlong)param_1 + 0x313) == '\x01')) &&
         ((*(byte *)((longlong)param_1 + 0x311) & 4) != 0)) {
        dVar13 = (double)param_1[0x96] - (double)param_1[0x79];
        dVar16 = (double)param_1[0x95] - (double)param_1[0x78];
        dVar11 = (double)param_1[0x94] - (double)param_1[0x77];
        fVar10 = (float)SQRT(dVar13 * dVar13 + dVar11 * dVar11 + dVar16 * dVar16);
        if (*(float *)((longlong)param_1 + 0xa4) < fVar10) {
          dVar4 = 1.0 / (double)fVar10;
          dVar15 = (double)*(float *)((longlong)param_1 + 0xa4);
          param_1[0x94] = (longlong)((double)param_1[0x77] + dVar11 * dVar4 * dVar15);
          param_1[0x95] = (longlong)((double)param_1[0x78] + dVar16 * dVar4 * dVar15);
          param_1[0x96] = (longlong)((double)param_1[0x79] + dVar13 * dVar4 * dVar15);
        }
      }
      if ((*(byte *)(param_1[0xf] + 0x1db) & 2) != 0) {
        lVar9 = param_1[0xa0];
        dVar16 = (double)FUN_144719204(0,0);
        dVar15 = (double)FUN_144719204((int)lVar9,0);
        dVar13 = sin(dVar16 * 0.017453292519943295);
        dVar16 = cos(dVar16 * 0.017453292519943295);
        dVar11 = sin(dVar15 * 0.017453292519943295);
        dVar15 = cos(dVar15 * 0.017453292519943295);
        param_1[0x97] = (longlong)(-dVar16 * dVar15);
        param_1[0x98] = (longlong)(dVar11 * -dVar16);
        param_1[0x99] = (longlong)-dVar13;
        goto LAB_140a645d4;
      }
      dVar13 = (double)param_1[0x96] - (double)param_1[0x79];
      dVar11 = (double)param_1[0x95] - (double)param_1[0x78];
      dVar16 = (double)param_1[0x94] - (double)param_1[0x77];
    }
    else {
      param_1[0x96] = param_1[0x4f];
      *pdVar1 = (double)param_1[0x4d];
      param_1[0x95] = param_1[0x4e];
      dVar13 = (double)param_1[0x4f] - (double)param_1[0x4c];
      dVar11 = (double)param_1[0x4e] - (double)param_1[0x4b];
      dVar16 = (double)param_1[0x4d] - (double)param_1[0x4a];
    }
    dVar15 = dVar13 * dVar13 + dVar16 * dVar16 + dVar11 * dVar11;
    if (((dVar15 != 1.0) || (dVar14 = dVar11, dVar4 = dVar13, dVar5 = dVar16, NAN(dVar15))) &&
       (dVar14 = DAT_14c8464e8, dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar15)) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar14 = dVar11 * dVar15;
      dVar4 = dVar13 * dVar15;
      dVar5 = dVar16 * dVar15;
    }
    param_1[0x97] = (longlong)dVar5;
    param_1[0x98] = (longlong)dVar14;
    param_1[0x99] = (longlong)dVar4;
    goto LAB_140a645d4;
  }
  if ((*(ushort *)((longlong)param_1 + 0x2ea) & 4) == 0) {
    fVar10 = *(float *)((longlong)param_1 + 0xa4);
LAB_140a64939:
    dVar13 = (double)fVar10;
    param_1[0x94] = (longlong)(dVar13 * (double)param_1[0x74] + (double)param_1[0x71]);
    param_1[0x95] = (longlong)((double)param_1[0x75] * dVar13 + (double)param_1[0x72]);
    param_1[0x96] = (longlong)((double)param_1[0x76] * dVar13 + (double)param_1[0x73]);
  }
  else {
    fVar10 = *(float *)((longlong)param_1 + 0xa4);
    if (ABS(fVar10 - *(float *)(param_1[0xf] + 0x158)) <= 1e-08) goto LAB_140a64939;
    dVar13 = (double)*(float *)(param_1[0xf] + 0x158);
    dVar16 = (double)param_1[0x76] * dVar13 + (double)param_1[0x73];
    dVar11 = (double)param_1[0x75] * dVar13 + (double)param_1[0x72];
    dVar13 = dVar13 * (double)param_1[0x74] + (double)param_1[0x71];
    param_1[0x94] = (longlong)dVar13;
    param_1[0x95] = (longlong)dVar11;
    param_1[0x96] = (longlong)dVar16;
    dVar16 = dVar16 - (double)param_1[0x79];
    dVar11 = dVar11 - (double)param_1[0x78];
    dVar13 = dVar13 - (double)param_1[0x77];
    fVar17 = (float)SQRT(dVar16 * dVar16 + dVar13 * dVar13 + dVar11 * dVar11);
    if (fVar10 < fVar17) {
      dVar4 = 1.0 / (double)fVar17;
      dVar15 = (double)fVar10;
      param_1[0x94] = (longlong)((double)param_1[0x77] + dVar13 * dVar4 * dVar15);
      param_1[0x95] = (longlong)((double)param_1[0x78] + dVar11 * dVar4 * dVar15);
      param_1[0x96] = (longlong)((double)param_1[0x79] + dVar16 * dVar4 * dVar15);
    }
  }
  param_1[0x99] = param_1[0x76];
  *pdVar2 = (double)param_1[0x74];
  param_1[0x98] = param_1[0x75];
LAB_140a645d4:
  if ((0.0 < (float)param_2) && ((bVar3 & 0x40) == 0)) {
    fVar10 = *(float *)(param_1[0xf] + 0x1dc);
    if ((0.0 < fVar10) &&
       (((*(byte *)((longlong)param_1 + 0x2ea) & 2) == 0 || (-1 < *(char *)(param_1[0xf] + 0x1db))))
       ) {
      local_118 = (double)param_1[0x96];
      local_128 = *pdVar1;
      dStack_120 = (double)param_1[0x95];
      local_138 = (double)param_1[0x99];
      local_148 = *pdVar2;
      dStack_140 = (double)param_1[0x98];
      local_198 = fVar10;
      FUN_140b81d26(&local_168,&local_e8,&local_128,param_2);
      param_1[0x96] = (longlong)local_158;
      *pdVar1 = local_168;
      param_1[0x95] = (longlong)dStack_160;
      local_198 = *(float *)(param_1[0xf] + 0x1dc);
      FUN_140b81d26(&local_168,&local_108,&local_148,param_2);
      param_1[0x99] = (longlong)local_158;
      *pdVar2 = local_168;
      param_1[0x98] = (longlong)dStack_160;
      fVar10 = *(float *)(param_1[0xf] + 0x1e0);
      if (fVar10 <= 0.0) {
        dVar13 = *pdVar2;
      }
      else {
        dVar11 = (double)param_1[0x96] - local_118;
        dVar16 = (double)param_1[0x95] - dStack_120;
        dVar15 = (double)param_1[0x94] - local_128;
        fVar17 = (float)SQRT(dVar11 * dVar11 + dVar15 * dVar15 + dVar16 * dVar16);
        dVar13 = (double)param_1[0x97];
        if (fVar10 < fVar17) {
          dVar5 = 1.0 / (double)fVar17;
          dVar4 = (double)fVar10;
          param_1[0x94] = (longlong)(local_128 + dVar15 * dVar5 * dVar4);
          param_1[0x95] = (longlong)(dStack_120 + dVar16 * dVar5 * dVar4);
          param_1[0x96] = (longlong)(local_118 + dVar11 * dVar5 * dVar4);
          dVar16 = (double)(*(float *)(param_1[0xf] + 0x1e0) / fVar17);
          dVar13 = (dVar13 - local_148) * dVar16 + local_148;
          param_1[0x98] = (longlong)(((double)param_1[0x98] - dStack_140) * dVar16 + dStack_140);
          param_1[0x99] = (longlong)(((double)param_1[0x99] - local_138) * dVar16 + local_138);
        }
      }
      dVar16 = (double)param_1[0x98];
      dVar11 = (double)param_1[0x99];
      dVar15 = dVar11 * dVar11 + dVar13 * dVar13 + dVar16 * dVar16;
      if (((dVar15 != 1.0) || (dVar14 = dVar11, dVar4 = dVar13, dVar5 = dVar16, NAN(dVar15))) &&
         (dVar14 = DAT_14c8464f0, dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar15)) {
        dVar15 = 1.0 / SQRT(dVar15);
        dVar14 = dVar11 * dVar15;
        dVar4 = dVar13 * dVar15;
        dVar5 = dVar16 * dVar15;
      }
      param_1[0x97] = (longlong)dVar4;
      param_1[0x98] = (longlong)dVar5;
      param_1[0x99] = (longlong)dVar14;
    }
  }
  param_1[0x93] = param_1[0x96];
  param_1[0x91] = (longlong)*pdVar1;
  param_1[0x92] = param_1[0x95];
  if (0.0 < *(float *)(param_1 + 0x33)) {
    lVar9 = param_1[0xf];
    if (0 < (longlong)*(int *)(lVar9 + 0x1f0)) {
      fVar10 = *(float *)((longlong)param_1 + 0x31c);
      fVar17 = *(float *)(lVar9 + 0x1f8);
      lVar8 = *(longlong *)(lVar9 + 0x1e8);
      lVar9 = (longlong)*(int *)(lVar9 + 0x1f0) * 0x18;
      dVar13 = 0.0;
      dVar16 = 0.0;
      do {
        FUN_142b404f4(lVar8,&local_128,fVar10 * fVar17);
        dVar13 = dVar13 + local_128;
        dVar16 = dVar16 + dStack_120;
        lVar8 = lVar8 + 0x18;
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != 0);
      fVar10 = (float)(**(code **)(*param_1 + 0x3b8))(param_1);
      lVar9 = param_1[0xf];
      if ((*(byte *)((longlong)param_1 + 0x2ea) & 2) != 0) {
        fVar10 = fVar10 * *(float *)(lVar9 + 0x1fc);
      }
      dVar15 = 1.0 / (double)*(int *)(lVar9 + 0x1f0);
      dVar11 = dVar13 * dVar15 * (double)fVar10;
      dVar13 = (double)param_1[0x93] - (double)param_1[0x79];
      dVar16 = dVar16 * dVar15 * (double)fVar10;
      dStack_120 = (double)param_1[0x92] - (double)param_1[0x78];
      local_128 = (double)param_1[0x91] - (double)param_1[0x77];
      local_188 = (double)(float)SQRT(dVar13 * dVar13 +
                                      local_128 * local_128 + dStack_120 * dStack_120);
      local_118 = 1.0 / local_188;
      local_128 = local_128 * local_118;
      dStack_120 = dStack_120 * local_118;
      local_118 = local_118 * dVar13;
      if ((*(byte *)(lVar9 + 0x1db) & 0x20) == 0) {
        FUN_144a79a9c(&local_128,&local_148);
        dVar13 = local_148 * 0.01745329238474369;
        dVar7 = dStack_140 * 0.01745329238474369;
        dVar12 = local_138 * 0.01745329238474369;
        dVar15 = sin(dVar13);
        dVar4 = sin(dVar7);
        dVar5 = sin(dVar12);
        sin(0.0);
        dVar14 = cos(dVar13);
        dVar7 = cos(dVar7);
        dVar6 = cos(dVar12);
        cos(0.0);
        dVar13 = (double)param_1[0x91] +
                 DAT_14c8464e0 * 0.0 +
                 dVar14 * dVar7 * 0.0 + dVar11 * (dVar15 * dVar5 * dVar7 - dVar4 * dVar6) +
                 dVar16 * -(dVar15 * dVar6 * dVar7 + dVar4 * dVar5);
        dVar12 = DAT_14c8464e8 * 0.0 +
                 dVar4 * dVar14 * 0.0 + dVar11 * (dVar15 * dVar5 * dVar4 + dVar7 * dVar6) +
                 dVar16 * (dVar7 * dVar5 - dVar4 * dVar15 * dVar6) + (double)param_1[0x92];
        dVar14 = (dVar15 * 0.0 - dVar14 * dVar5 * dVar11) + dVar14 * dVar6 * dVar16 +
                 DAT_14c8464f0 * 0.0 + (double)param_1[0x93];
      }
      else {
        local_138 = 0.0;
        local_148 = dVar16;
        dStack_140 = dVar11;
        FUN_144a79a9c(&local_128,&local_168);
        dVar13 = sin(local_168 * 0.01745329238474369);
        dVar16 = sin(dStack_160 * 0.01745329238474369);
        dVar11 = sin(local_158 * 0.01745329238474369);
        sin(0.0);
        dVar15 = cos(local_168 * 0.01745329238474369);
        dVar4 = cos(dStack_160 * 0.01745329238474369);
        dVar5 = cos(local_158 * 0.01745329238474369);
        cos(0.0);
        dVar12 = DAT_14c8464e8;
        dVar7 = DAT_14c8464e0;
        dVar14 = DAT_14c8464f0 * 0.0;
        FUN_144a76660(&local_148,&local_180);
        dVar14 = ((dVar13 * local_180 - dVar15 * dVar11 * local_178) + dVar15 * dVar5 * local_170 +
                 dVar14) * local_188 + (double)param_1[0x79];
        dVar12 = (dVar12 * 0.0 +
                 local_170 * (dVar4 * dVar11 - dVar16 * dVar13 * dVar5) +
                 local_178 * (dVar13 * dVar11 * dVar16 + dVar4 * dVar5) +
                 local_180 * dVar16 * dVar15) * local_188 + (double)param_1[0x78];
        dVar13 = (dVar7 * 0.0 +
                 local_170 * -(dVar13 * dVar5 * dVar4 + dVar16 * dVar11) +
                 local_178 * (dVar13 * dVar11 * dVar4 - dVar16 * dVar5) + local_180 * dVar15 * dVar4
                 ) * local_188 + (double)param_1[0x77];
      }
      param_1[0x91] = (longlong)dVar13;
      param_1[0x92] = (longlong)dVar12;
      param_1[0x93] = (longlong)dVar14;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a652c2 FUN_140a652c2 body=4856 status=ok
// SIG undefined FUN_140a652c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a652c2(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       float param_5,undefined4 param_6,longlong *param_7,longlong *param_8,
                       byte param_9,float param_10,float param_11,char param_12,int param_13)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  longlong *plVar28;
  char cVar29;
  byte bVar30;
  char cVar31;
  uint uVar32;
  longlong lVar33;
  undefined8 uVar34;
  undefined4 *puVar35;
  longlong lVar36;
  longlong *plVar37;
  int iVar38;
  longlong lVar39;
  byte bVar40;
  longlong lVar41;
  void *_Src;
  void *pvVar42;
  ulonglong uVar43;
  longlong lVar44;
  float fVar45;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  undefined8 *local_2f8;
  undefined1 *local_2f0;
  float local_2e8;
  undefined1 local_2e0;
  int local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong local_2c0;
  uint local_2b4;
  void *local_2b0;
  longlong *local_2a8;
  uint *local_2a0;
  undefined8 local_298;
  longlong lStack_290;
  longlong local_288;
  undefined4 local_1f4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  uint local_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_149;
  undefined8 local_148;
  longlong lStack_140;
  longlong local_138;
  undefined1 local_121;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined2 local_10f;
  byte local_10d;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined2 local_109;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [4];
  undefined4 *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb850b0) && (FUN_144b3d300(&DAT_14cb850b0), DAT_14cb850b0 == -1)) {
    FUN_1446f470e(&DAT_14cb850a8,L"LightBeamTrace",1);
    _Init_thread_footer(&DAT_14cb850b0);
  }
  if (DAT_14c7639a0 <= param_13) {
    uVar43 = CONCAT71((int7)((ulonglong)param_3 >> 8),(int)param_2[1] != 0);
    goto LAB_140a664e0;
  }
  lVar33 = param_1[0x31];
  local_fc = 0;
  local_118 = 0;
  local_f8 = 0x101;
  local_d0 = 0;
  local_c8 = 0x800000000;
  local_b0 = (undefined4 *)0x0;
  local_a8 = 0x400000000;
  local_110 = 1;
  local_104 = 0;
  local_120 = DAT_14cb850a8;
  local_10f = 1;
  local_100 = 0;
  local_10c = 0;
  local_10a = 0;
  if (lVar33 != 0) {
    local_a8 = 0x400000001;
    local_c0[0] = *(undefined4 *)(lVar33 + 0xc);
    local_118 = *(undefined8 *)(lVar33 + 0x18);
  }
  local_109 = 0x101;
  local_10d = param_9 ^ 1;
  if ((param_9 == 0) && ((*(byte *)((longlong)param_1 + 0x2ea) & 0x20) != 0)) {
    local_fc = (int)param_1[100];
  }
  local_168 = _DAT_14cad0ee0;
  uStack_160 = uRam000000014cad0ee8;
  local_178 = _DAT_14cad0ed0;
  uStack_170 = _DAT_14cad0ed8;
  lVar33 = 0;
  do {
    cVar29 = *(char *)((longlong)&uStack_170 + lVar33);
    cVar31 = *(char *)((longlong)&uStack_170 + lVar33 + 1);
    cVar5 = *(char *)((longlong)&uStack_170 + lVar33 + 2);
    cVar6 = *(char *)((longlong)&uStack_170 + lVar33 + 3);
    cVar7 = *(char *)((longlong)&uStack_170 + lVar33 + 4);
    cVar8 = *(char *)((longlong)&uStack_170 + lVar33 + 5);
    cVar9 = *(char *)((longlong)&uStack_170 + lVar33 + 6);
    cVar10 = *(char *)((longlong)&uStack_170 + lVar33 + 7);
    if ((*(char *)((longlong)&local_178 + lVar33) == DAT_149c360b0) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 1) == DAT_149c360b0._1_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 1) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 2) == DAT_149c360b0._2_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 2) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 3) == DAT_149c360b0._3_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 3) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 4) == DAT_149c360b0._4_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 4) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 5) == DAT_149c360b0._5_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 5) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 6) == DAT_149c360b0._6_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 6) = 2;
    }
    if ((*(char *)((longlong)&local_178 + lVar33 + 7) == DAT_149c360b0._7_1_) != true) {
      *(undefined1 *)((longlong)&local_178 + lVar33 + 7) = 2;
    }
    if ((cVar29 == DAT_149c360b0._8_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33) = 2;
    }
    if ((cVar31 == DAT_149c360b0._9_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 1) = 2;
    }
    if ((cVar5 == DAT_149c360b0._10_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 2) = 2;
    }
    if ((cVar6 == DAT_149c360b0._11_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 3) = 2;
    }
    if ((cVar7 == DAT_149c360b0._12_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 4) = 2;
    }
    if ((cVar8 == DAT_149c360b0._13_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 5) = 2;
    }
    if ((cVar9 == DAT_149c360b0._14_1_) != true) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 6) = 2;
    }
    if ((bool)(~(cVar10 == DAT_149c360b0._15_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_170 + lVar33 + 7) = 2;
    }
    lVar33 = lVar33 + 0x10;
  } while (lVar33 != 0x20);
  uVar43 = (ulonglong)*(byte *)((longlong)param_1 + 0x344);
  if (uVar43 != 6) {
    if (((*(char *)((longlong)param_1 + 0x345) != '\0') &&
        (*(byte *)((longlong)param_1 + 0x344) < 6)) &&
       (cVar29 = (*(char *)((longlong)param_1 + 0x345) != '\x01') * '\x02',
       cVar29 != *(char *)((longlong)&uStack_160 + uVar43 + 2))) {
      *(char *)((longlong)&uStack_160 + uVar43 + 2) = cVar29;
    }
    local_100 = *(undefined1 *)((longlong)param_1 + 0x346);
  }
  lVar33 = param_1[0xe6];
  local_2c8 = param_3;
  local_2a8 = param_4;
  if ((longlong)(int)lVar33 != 0) {
    lVar41 = param_1[0xe5];
    lVar44 = 0;
    do {
      uVar4 = *(undefined4 *)(lVar41 + lVar44);
      lVar39 = (longlong)(int)local_a8;
      uVar32 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar32);
      if (local_a8._4_4_ < uVar32) {
        FUN_1447de67e(local_c0);
      }
      puVar35 = local_b0;
      if (local_b0 == (undefined4 *)0x0) {
        puVar35 = local_c0;
      }
      puVar35[lVar39] = uVar4;
      lVar44 = lVar44 + 4;
    } while ((longlong)(int)lVar33 * 4 != lVar44);
  }
  lVar33 = param_1[0x19];
  if ((lVar33 != 0) && (lVar33 != param_1[0x31])) {
    uVar4 = *(undefined4 *)(lVar33 + 0xc);
    lVar33 = (longlong)(int)local_a8;
    uVar32 = (int)local_a8 + 1;
    local_a8 = CONCAT44(local_a8._4_4_,uVar32);
    if (local_a8._4_4_ < uVar32) {
      FUN_1447de67e(local_c0);
    }
    puVar35 = local_c0;
    if (local_b0 != (undefined4 *)0x0) {
      puVar35 = local_b0;
    }
    puVar35[lVar33] = uVar4;
  }
  if (param_7 != (longlong *)0x0) {
    uVar4 = *(undefined4 *)((longlong)param_7 + 0xc);
    lVar33 = (longlong)(int)local_a8;
    uVar32 = (int)local_a8 + 1;
    local_a8 = CONCAT44(local_a8._4_4_,uVar32);
    if (local_a8._4_4_ < uVar32) {
      FUN_1447de67e(local_c0);
    }
    puVar35 = local_b0;
    if (local_b0 == (undefined4 *)0x0) {
      puVar35 = local_c0;
    }
    puVar35[lVar33] = uVar4;
    lVar33 = FUN_140717404(param_7);
    if (lVar33 != 0) {
      uVar4 = *(undefined4 *)(lVar33 + 0xc);
      lVar33 = (longlong)(int)local_a8;
      uVar32 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar32);
      if (local_a8._4_4_ < uVar32) {
        FUN_1447de67e(local_c0);
      }
      puVar35 = local_c0;
      if (local_b0 != (undefined4 *)0x0) {
        puVar35 = local_b0;
      }
      puVar35[lVar33] = uVar4;
    }
  }
  local_2d0 = param_1;
  uVar34 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar33 = FUN_140877338(uVar34);
  local_188 = (undefined1  [16])0x0;
  local_2c0 = lVar33;
  if ((longlong)(int)param_2[1] != 0) {
    lVar41 = (longlong)(int)param_2[1] << 8;
    lVar44 = *param_2 + 0xb8;
    do {
      lVar39 = FUN_14485cccc(lVar44);
      if ((lVar39 == lVar33) && ((*(byte *)(lVar44 + -0xb) & 1) != 0)) {
        lVar39 = (longlong)(int)local_188._8_4_;
        uVar32 = local_188._8_4_ + 1;
        local_188._8_4_ = uVar32;
        if ((uint)local_188._12_4_ < uVar32) {
          FUN_1446f48e2(local_188);
        }
        *(undefined4 *)(local_188._0_8_ + lVar39 * 4) = *(undefined4 *)(lVar44 + -0x10);
      }
      else if ((lVar39 != 0) &&
              (((*(byte *)(lVar44 + -0xb) & 1) != 0 && (*(int *)(lVar44 + -0x14) == -1)))) {
        uVar4 = *(undefined4 *)(lVar39 + 0xc);
        lVar33 = (longlong)(int)local_a8;
        uVar32 = (int)local_a8 + 1;
        local_a8 = CONCAT44(local_a8._4_4_,uVar32);
        if (local_a8._4_4_ < uVar32) {
          FUN_1447de67e(local_c0);
        }
        puVar35 = local_b0;
        if (local_b0 == (undefined4 *)0x0) {
          puVar35 = local_c0;
        }
        puVar35[lVar33] = uVar4;
        lVar39 = FUN_140717404(lVar39);
        lVar33 = local_2c0;
        if (lVar39 != 0) {
          uVar4 = *(undefined4 *)(lVar39 + 0xc);
          lVar33 = (longlong)(int)local_a8;
          uVar32 = (int)local_a8 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,uVar32);
          if (local_a8._4_4_ < uVar32) {
            FUN_1447de67e(local_c0);
          }
          puVar35 = local_b0;
          if (local_b0 == (undefined4 *)0x0) {
            puVar35 = local_c0;
          }
          puVar35[lVar33] = uVar4;
          lVar33 = local_2c0;
        }
      }
      lVar44 = lVar44 + 0x100;
      lVar41 = lVar41 + -0x100;
    } while (lVar41 != 0);
  }
  lVar33 = param_8[1];
  if ((longlong)(int)lVar33 != 0) {
    lVar41 = 0;
    do {
      FUN_1406942b2(&local_120);
      lVar41 = lVar41 + 4;
    } while ((longlong)(int)lVar33 * 4 != lVar41);
  }
  plVar28 = local_2a8;
  plVar37 = local_2c8;
  if (param_9 == 0) {
    if (param_12 == '\0') {
      local_198 = (void *)0x0;
      uStack_190 = 0;
      if (param_5 <= 0.0) {
        local_298 = *local_2a8;
        lStack_290 = local_2a8[1];
        local_318 = &local_298;
        local_288 = local_2a8[2];
        local_148 = *local_2c8;
        lStack_140 = local_2c8[1];
        local_138 = local_2c8[2];
        local_2f0 = &local_121;
        local_2f8 = (undefined8 *)&DAT_14cad0f08;
        local_300 = &local_178;
        local_308 = &local_120;
        local_310 = (longlong *)CONCAT44(local_310._4_4_,param_6);
        uVar32 = FUN_1401e2596(uVar34,&local_198,&local_149);
      }
      else {
        local_308 = &local_298;
        local_298 = CONCAT44(param_5,2);
        local_2f8 = &local_178;
        local_300 = &local_120;
        local_310 = (longlong *)CONCAT44(local_310._4_4_,param_6);
        local_318 = &DAT_14c8463d0;
        uVar32 = FUN_14038e76e(uVar34,&local_198,local_2c8,local_2a8);
      }
      if (local_2c0 != 0) {
        local_300 = (longlong *)local_2d0[0x31];
        local_2f0 = local_188;
        local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,(int)local_2d0[100]);
        local_308 = local_2d0;
        local_310 = (longlong *)
                    CONCAT71(local_310._1_7_,*(undefined1 *)((longlong)local_2d0 + 0x346));
        local_318 = (longlong *)CONCAT44(local_318._4_4_,param_5);
        bVar30 = FUN_143dcfbe8(local_2c0,&local_198,plVar37,plVar28);
        uVar32 = CONCAT31((int3)(uVar32 >> 8),(byte)uVar32 | bVar30);
      }
      uVar43 = (ulonglong)uVar32;
      if (0 < (longlong)(int)uStack_190) {
        pvVar42 = (void *)((longlong)(int)uStack_190 * 0x100 + (longlong)local_198);
        fVar45 = 0.0;
        bVar30 = 0;
        _Src = local_198;
        local_2c8 = param_2;
        local_2b4 = uVar32;
        local_2b0 = pvVar42;
        do {
          lVar41 = FUN_14485cccc((longlong)_Src + 0xb8);
          lVar33 = local_2c0;
          puVar1 = (uint *)((longlong)_Src + 0xd8);
          if ((*(int *)((longlong)_Src + 0xdc) == 0) || (uVar32 = *puVar1, (int)uVar32 < 0)) {
LAB_140a661b2:
            lVar44 = 0;
          }
          else {
            lVar44 = 0;
            if ((int)uVar32 < DAT_14c9647dc) {
              plVar37 = (longlong *)
                        ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8));
              if (((plVar37 == (longlong *)0x0) ||
                  ((int)plVar37[2] != *(int *)((longlong)_Src + 0xdc))) ||
                 ((*(uint *)(plVar37 + 1) & 0x10200000) != 0)) goto LAB_140a661b2;
              lVar44 = *plVar37;
            }
          }
          if (lVar41 != 0 || lVar44 != 0) {
            if ((*(byte *)((longlong)_Src + 0xad) & 1) == 0) {
              bVar40 = 0;
            }
            else {
              cVar29 = (**(code **)(*local_2d0 + 0x328))(local_2d0,lVar41,lVar44);
              bVar40 = *(byte *)((longlong)_Src + 0xad) & 1;
              if (cVar29 != '\0') {
                pvVar42 = local_2b0;
                if (bVar40 == 0) goto LAB_140a6619b;
                iVar38 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar38 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
                  FUN_144a3a3ee(param_2,iVar38);
                }
                lVar33 = *param_2;
                lVar41 = (longlong)iVar38 * 0x100;
                memcpy((void *)(lVar33 + lVar41),_Src,0xb8);
                puVar2 = (undefined8 *)(lVar33 + 0xb8 + lVar41);
                *puVar2 = 0;
                puVar2[1] = 0;
                *(undefined8 *)(lVar33 + 200 + lVar41) = 0;
                *(undefined4 *)(lVar33 + 0xd0 + lVar41) = 0xffffffff;
                *(undefined1 *)(lVar33 + 0xd4 + lVar41) = 0;
                *(undefined8 *)(lVar33 + 0xb8 + lVar41) = *(undefined8 *)((longlong)_Src + 0xb8);
                uVar34 = *(undefined8 *)((longlong)_Src + 200);
                puVar2 = (undefined8 *)(lVar33 + 0xc0 + lVar41);
                *puVar2 = *(undefined8 *)((longlong)_Src + 0xc0);
                puVar2[1] = uVar34;
                *(undefined4 *)(lVar33 + 0xd0 + lVar41) = *(undefined4 *)((longlong)_Src + 0xd0);
                *(undefined1 *)(lVar33 + 0xd4 + lVar41) = *(undefined1 *)((longlong)_Src + 0xd4);
                *(undefined8 *)(lVar33 + 0xf8 + lVar41) = *(undefined8 *)((longlong)_Src + 0xf8);
                uVar34 = *(undefined8 *)puVar1;
                uVar23 = *(undefined8 *)((longlong)_Src + 0xe0);
                uVar24 = *(undefined8 *)((longlong)_Src + 0xf0);
                puVar2 = (undefined8 *)(lVar33 + 0xe8 + lVar41);
                *puVar2 = *(undefined8 *)((longlong)_Src + 0xe8);
                puVar2[1] = uVar24;
                puVar2 = (undefined8 *)(lVar33 + 0xd8 + lVar41);
                *puVar2 = uVar34;
                puVar2[1] = uVar23;
                *(float *)(*param_2 + 4 + lVar41) =
                     *(float *)((longlong)_Src + 4) * param_11 + param_10;
                if (lVar44 != 0) {
                  uVar4 = *(undefined4 *)(lVar44 + 0xc);
                  iVar38 = (int)param_8[1];
                  *(uint *)(param_8 + 1) = iVar38 + 1U;
                  if (*(uint *)((longlong)param_8 + 0xc) < iVar38 + 1U) {
                    FUN_1447808da(param_8,iVar38);
                  }
                  *(undefined4 *)(*param_8 + (longlong)iVar38 * 4) = uVar4;
                }
                break;
              }
            }
            bVar30 = bVar40 | bVar30;
            fVar45 = *(float *)((longlong)_Src + 4);
            if ((lVar41 != lVar33 && lVar41 != 0) && ((longlong)(int)param_2[1] != 0)) {
              lVar33 = *param_2;
              lVar39 = (longlong)(int)param_2[1] << 8;
              do {
                lVar36 = FUN_14485cccc(lVar33 + 0xb8);
                if ((lVar36 == lVar41) &&
                   (cVar29 = FUN_140f9880e(lVar33 + 0xd8,lVar44), cVar29 != '\0')) {
                  pvVar42 = local_2b0;
                  if (lVar33 != 0) goto LAB_140a6619b;
                  break;
                }
                lVar33 = lVar33 + 0x100;
                lVar39 = lVar39 + -0x100;
              } while (lVar39 != 0);
            }
            bVar25 = false;
            local_2a0 = puVar1;
            if ((lVar41 != 0) && ((*(byte *)(local_2d0[0xf] + 0x16d) & 2) != 0)) {
              if (lVar41 == local_2d0[0x25]) {
                bVar25 = true;
                if ((longlong)(int)param_2[1] != 0) {
                  lVar39 = (longlong)(int)param_2[1] << 8;
                  lVar33 = *param_2 + 0xb8;
                  uVar32 = 0;
                  do {
                    lVar36 = FUN_14485cccc(lVar33);
                    param_2 = local_2c8;
                    if ((lVar36 == lVar41) && (*(int *)(lVar33 + -0x14) != -1)) {
                      iVar38 = (int)local_2c8[1];
                      if (iVar38 <= (int)uVar32 || (int)uVar32 < 0) {
                        bVar25 = true;
                        goto LAB_140a65fd4;
                      }
                      uVar43 = (ulonglong)(uVar32 & 0x7fffffff);
                      lVar33 = uVar43 * 0x100;
                      memcpy((void *)(*local_2c8 + lVar33),_Src,0x100);
                      *(float *)(*param_2 + 4 + lVar33) =
                           *(float *)(*param_2 + 4 + lVar33) * param_11 + param_10;
                      goto LAB_140a660cd;
                    }
                    uVar32 = uVar32 + 1;
                    lVar33 = lVar33 + 0x100;
                    lVar39 = lVar39 + -0x100;
                  } while (lVar39 != 0);
                  bVar25 = true;
                }
              }
              else {
                bVar25 = false;
              }
            }
            iVar38 = (int)param_2[1];
LAB_140a65fd4:
            *(uint *)(param_2 + 1) = iVar38 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
              FUN_144a3a3ee(param_2,iVar38);
            }
            lVar33 = *local_2c8;
            uVar43 = (ulonglong)iVar38;
            lVar39 = uVar43 * 0x100;
            memcpy((void *)(lVar39 + lVar33),_Src,0xb8);
            puVar2 = (undefined8 *)(lVar33 + 0xb8 + lVar39);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar33 + 200 + lVar39) = 0;
            *(undefined4 *)(lVar33 + 0xd0 + lVar39) = 0xffffffff;
            *(undefined1 *)(lVar33 + 0xd4 + lVar39) = 0;
            *(undefined8 *)(lVar33 + 0xb8 + lVar39) = *(undefined8 *)((longlong)_Src + 0xb8);
            uVar34 = *(undefined8 *)((longlong)_Src + 200);
            puVar2 = (undefined8 *)(lVar33 + 0xc0 + lVar39);
            *puVar2 = *(undefined8 *)((longlong)_Src + 0xc0);
            puVar2[1] = uVar34;
            *(undefined4 *)(lVar33 + 0xd0 + lVar39) = *(undefined4 *)((longlong)_Src + 0xd0);
            *(undefined1 *)(lVar33 + 0xd4 + lVar39) = *(undefined1 *)((longlong)_Src + 0xd4);
            *(undefined8 *)(lVar33 + 0xf8 + lVar39) = *(undefined8 *)(local_2a0 + 8);
            uVar34 = *(undefined8 *)local_2a0;
            uVar23 = *(undefined8 *)(local_2a0 + 2);
            uVar11 = *(undefined1 *)((longlong)local_2a0 + 0x11);
            uVar12 = *(undefined1 *)((longlong)local_2a0 + 0x12);
            uVar13 = *(undefined1 *)((longlong)local_2a0 + 0x13);
            uVar32 = local_2a0[5];
            uVar14 = *(undefined1 *)((longlong)local_2a0 + 0x15);
            uVar15 = *(undefined1 *)((longlong)local_2a0 + 0x16);
            uVar16 = *(undefined1 *)((longlong)local_2a0 + 0x17);
            uVar26 = local_2a0[6];
            uVar17 = *(undefined1 *)((longlong)local_2a0 + 0x19);
            uVar18 = *(undefined1 *)((longlong)local_2a0 + 0x1a);
            uVar19 = *(undefined1 *)((longlong)local_2a0 + 0x1b);
            uVar27 = local_2a0[7];
            uVar20 = *(undefined1 *)((longlong)local_2a0 + 0x1d);
            uVar21 = *(undefined1 *)((longlong)local_2a0 + 0x1e);
            uVar22 = *(undefined1 *)((longlong)local_2a0 + 0x1f);
            puVar3 = (undefined1 *)(lVar33 + 0xe8 + lVar39);
            *puVar3 = (char)local_2a0[4];
            puVar3[1] = uVar11;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            puVar3[4] = (char)uVar32;
            puVar3[5] = uVar14;
            puVar3[6] = uVar15;
            puVar3[7] = uVar16;
            puVar3[8] = (char)uVar26;
            puVar3[9] = uVar17;
            puVar3[10] = uVar18;
            puVar3[0xb] = uVar19;
            puVar3[0xc] = (char)uVar27;
            puVar3[0xd] = uVar20;
            puVar3[0xe] = uVar21;
            puVar3[0xf] = uVar22;
            puVar2 = (undefined8 *)(lVar33 + 0xd8 + lVar39);
            *puVar2 = uVar34;
            puVar2[1] = uVar23;
            *(float *)(*local_2c8 + 4 + lVar39) =
                 *(float *)(*local_2c8 + 4 + lVar39) * param_11 + param_10;
            param_2 = local_2c8;
            if (bVar25) {
LAB_140a660cd:
              cVar29 = (**(code **)(*local_2d0 + 0x330))(local_2d0,lVar41,lVar44);
              if (cVar29 != '\0') {
                *(undefined4 *)(*param_2 + 0xa4 + uVar43 * 0x100) = 1;
              }
            }
            pvVar42 = local_2b0;
            if (lVar44 != 0) {
              uVar4 = *(undefined4 *)(lVar44 + 0xc);
              iVar38 = (int)param_8[1];
              *(uint *)(param_8 + 1) = iVar38 + 1U;
              if (*(uint *)((longlong)param_8 + 0xc) < iVar38 + 1U) {
                FUN_1447808da(param_8,iVar38);
              }
              *(undefined4 *)(*param_8 + (longlong)iVar38 * 4) = uVar4;
            }
          }
LAB_140a6619b:
          _Src = (void *)((longlong)_Src + 0x100);
        } while (_Src != pvVar42);
        uVar43 = (ulonglong)local_2b4;
        if (bVar30 != 0) {
          local_2e8 = (1.0 - fVar45) * param_11;
          local_2d8 = param_13 + 1;
          local_2e0 = 0;
          local_2f0 = (undefined1 *)CONCAT44(local_2f0._4_4_,fVar45 * param_11 + param_10);
          local_2f8 = (undefined8 *)((ulonglong)local_2f8 & 0xffffffffffffff00);
          local_300 = param_8;
          local_308 = param_7;
          local_310 = (longlong *)CONCAT44(local_310._4_4_,param_6);
          local_318 = (longlong *)CONCAT44(local_318._4_4_,param_5);
          uVar32 = (**(code **)(*local_2d0 + 0x3c8))
                             (local_2d0,param_2,
                              (longlong)local_198 + (longlong)(int)uStack_190 * 0x100 + -0xf0,
                              local_2a8);
          uVar43 = (ulonglong)uVar32;
        }
      }
      if (local_198 != (void *)0x0) {
        FUN_1400020a8(local_198);
      }
    }
    else {
      memset(&local_298,0,0x100);
      local_1c8 = 0xffffffff;
      local_298 = CONCAT44(0x3f800000,(undefined4)local_298);
      local_1f4 = 0xffffffff;
      if (param_5 <= 0.0) {
        local_308 = &local_178;
        local_310 = &local_120;
        local_318 = (longlong *)CONCAT44(local_318._4_4_,param_6);
        cVar29 = FUN_1400b50cc(uVar34,&local_298,plVar37,plVar28);
      }
      else {
        local_308 = &local_148;
        local_148 = CONCAT44(param_5,2);
        local_2f8 = &local_178;
        local_300 = &local_120;
        local_310 = (longlong *)CONCAT44(local_310._4_4_,param_6);
        local_318 = &DAT_14c8463d0;
        cVar29 = FUN_14021655c(uVar34,&local_298,plVar37,plVar28);
      }
      if (local_2c0 == 0) {
        if (cVar29 == '\0') {
LAB_140a663d2:
          uVar43 = 0;
          goto LAB_140a664aa;
        }
      }
      else {
        local_300 = (longlong *)local_2d0[0x31];
        local_2f0 = local_188;
        local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,(int)local_2d0[100]);
        local_308 = local_2d0;
        local_310 = (longlong *)
                    CONCAT71(local_310._1_7_,*(undefined1 *)((longlong)local_2d0 + 0x346));
        local_318 = (longlong *)CONCAT44(local_318._4_4_,param_5);
        cVar31 = FUN_1488e5d46(local_2c0,&local_298,plVar37,plVar28);
        if (cVar29 == '\0' && cVar31 == '\0') goto LAB_140a663d2;
      }
      local_298 = CONCAT44(param_11 * local_298._4_4_ + param_10,(undefined4)local_298);
      iVar38 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar38 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar38 + 1U) {
        FUN_144a3a3ee(param_2,iVar38);
      }
      lVar33 = *param_2;
      lVar41 = (longlong)iVar38 * 0x100;
      memcpy((void *)(lVar33 + lVar41),&local_298,0xb8);
      puVar2 = (undefined8 *)(lVar33 + 0xb8 + lVar41);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar33 + 200 + lVar41) = 0;
      *(undefined4 *)(lVar33 + 0xd0 + lVar41) = 0xffffffff;
      *(undefined1 *)(lVar33 + 0xd4 + lVar41) = 0;
      *(undefined8 *)(lVar33 + 0xb8 + lVar41) = local_1e0;
      puVar2 = (undefined8 *)(lVar33 + 0xc0 + lVar41);
      *puVar2 = local_1d8;
      puVar2[1] = uStack_1d0;
      *(undefined4 *)(lVar33 + 0xd0 + lVar41) = local_1c8;
      *(undefined1 *)(lVar33 + 0xd4 + lVar41) = local_1c4;
      *(undefined8 *)(lVar33 + 0xf8 + lVar41) = local_1a0;
      puVar2 = (undefined8 *)(lVar33 + 0xe8 + lVar41);
      *puVar2 = local_1b0;
      puVar2[1] = uStack_1a8;
      puVar2 = (undefined8 *)(lVar33 + 0xd8 + lVar41);
      *puVar2 = CONCAT44(iStack_1bc,local_1c0);
      puVar2[1] = uStack_1b8;
      uVar43 = CONCAT71((int7)((ulonglong)&local_1c0 >> 8),1);
      if (((((iStack_1bc != 0) && (-1 < (int)local_1c0)) && ((int)local_1c0 < DAT_14c9647dc)) &&
          ((plVar37 = (longlong *)
                      ((ulonglong)((local_1c0 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_1c0 >> 0x10) * 8)),
           plVar37 != (longlong *)0x0 && ((int)plVar37[2] == iStack_1bc)))) &&
         (((*(uint *)(plVar37 + 1) & 0x10200000) == 0 && (*plVar37 != 0)))) {
        uVar4 = *(undefined4 *)(*plVar37 + 0xc);
        iVar38 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar38 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar38 + 1U) {
          FUN_1447808da(param_8,iVar38);
        }
        *(undefined4 *)(*param_8 + (longlong)iVar38 * 4) = uVar4;
      }
    }
  }
  else {
    if (param_5 <= 0.0) {
      local_298 = *local_2a8;
      lStack_290 = local_2a8[1];
      local_288 = local_2a8[2];
      local_148 = *local_2c8;
      lStack_140 = local_2c8[1];
      local_138 = local_2c8[2];
      local_308 = (longlong *)&DAT_14cad0f08;
      local_310 = &local_178;
      local_318 = &local_120;
      uVar32 = FUN_140386a8e(uVar34,&local_148,&local_298,param_6);
    }
    else {
      local_310 = &local_298;
      local_298 = CONCAT44(param_5,2);
      local_300 = &local_178;
      local_308 = &local_120;
      local_318 = (longlong *)CONCAT44(local_318._4_4_,param_6);
      uVar32 = FUN_140386f30(uVar34,local_2c8,local_2a8,&DAT_14c8463d0);
    }
    uVar43 = (ulonglong)uVar32;
  }
LAB_140a664aa:
  if (local_188._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
LAB_140a664e0:
  if ((local_a0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar43 & 0xffffffff;
}



// FUNCTION 140a665bc FUN_140a665bc body=1098 status=ok
// SIG undefined FUN_140a665bc(void)

double FUN_140a665bc(double *param_1,int param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[2];
  dVar5 = param_1[5];
  dVar6 = param_1[4];
  dVar7 = param_1[3];
  dVar8 = param_1[8];
  dVar9 = param_1[7];
  dVar10 = param_1[6];
  dVar11 = param_1[0xb];
  dVar12 = param_1[10];
  dVar20 = param_1[9];
  iVar13 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar13 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
    FUN_1403e3958(param_3,iVar13);
  }
  lVar15 = *param_3;
  *(double *)(lVar15 + 0x10 + (longlong)iVar13 * 0x18) = param_1[2];
  dVar17 = param_1[1];
  pdVar1 = (double *)(lVar15 + (longlong)iVar13 * 0x18);
  *pdVar1 = *param_1;
  pdVar1[1] = dVar17;
  if (param_2 < 2) {
    dVar5 = 0.0;
  }
  else {
    param_2 = param_2 + -1;
    dVar16 = 1.0 / (double)param_2;
    dVar19 = ((dVar8 - (dVar5 + dVar5)) + dVar4) * 3.0;
    dVar17 = ((dVar9 - (dVar6 + dVar6)) + dVar3) * 3.0;
    dVar18 = ((dVar10 - (dVar7 + dVar7)) + dVar2) * 3.0;
    dVar21 = (dVar5 * 3.0 + (dVar11 - dVar8 * 3.0)) - dVar4;
    dVar9 = (dVar6 * 3.0 + (dVar12 - dVar9 * 3.0)) - dVar3;
    dVar8 = (dVar7 * 3.0 + (dVar20 - dVar10 * 3.0)) - dVar2;
    dVar10 = dVar16 * dVar21 * dVar16 * dVar16 +
             dVar16 * dVar19 * dVar16 + (dVar5 - dVar4) * 3.0 * dVar16;
    dVar11 = dVar16 * dVar9 * dVar16 * dVar16 +
             dVar16 * dVar17 * dVar16 + (dVar6 - dVar3) * 3.0 * dVar16;
    dVar12 = dVar16 * dVar8 * dVar16 * dVar16 +
             dVar16 * dVar18 * dVar16 + (dVar7 - dVar2) * 3.0 * dVar16;
    dVar20 = (dVar19 + dVar19) * dVar16 * dVar16;
    dVar6 = (dVar17 + dVar17) * dVar16 * dVar16;
    dVar7 = (dVar18 + dVar18) * dVar16 * dVar16;
    dVar5 = 0.0;
    do {
      iVar13 = (int)param_3[1];
      lVar15 = (longlong)iVar13;
      *(uint *)(param_3 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
        FUN_1403e3958(param_3,iVar13);
      }
      dVar20 = dVar20 + dVar21 * 6.0 * dVar16 * dVar16 * dVar16;
      dVar6 = dVar6 + dVar9 * 6.0 * dVar16 * dVar16 * dVar16;
      dVar7 = dVar7 + dVar8 * 6.0 * dVar16 * dVar16 * dVar16;
      dVar17 = dVar2 + dVar12;
      dVar18 = dVar3 + dVar11;
      dVar19 = dVar4 + dVar10;
      dVar12 = dVar12 + dVar7;
      dVar11 = dVar11 + dVar6;
      dVar10 = dVar10 + dVar20;
      dVar5 = dVar5 + SQRT((dVar4 - dVar19) * (dVar4 - dVar19) +
                           (dVar3 - dVar18) * (dVar3 - dVar18) + (dVar2 - dVar17) * (dVar2 - dVar17)
                          );
      lVar14 = *param_3;
      *(double *)(lVar14 + lVar15 * 0x18) = dVar17;
      *(double *)(lVar14 + 8 + lVar15 * 0x18) = dVar18;
      *(double *)(lVar14 + 0x10 + lVar15 * 0x18) = dVar19;
      param_2 = param_2 + -1;
      dVar4 = dVar19;
      dVar3 = dVar18;
      dVar2 = dVar17;
    } while (param_2 != 0);
  }
  return dVar5;
}



// FUNCTION 140a66a06 FUN_140a66a06 body=2789 status=ok
// SIG undefined FUN_140a66a06(void)

void FUN_140a66a06(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  float fVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  void *pvVar13;
  ulonglong uVar14;
  longlong lVar15;
  void *pvVar16;
  double *pdVar17;
  longlong lVar18;
  void *pvVar19;
  void *pvVar20;
  uint uVar21;
  longlong lVar22;
  void *pvVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_628 [32];
  float local_608;
  uint local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  float local_5e0;
  float local_5d8;
  undefined1 local_5d0;
  undefined4 local_5c8;
  void *local_5c0;
  void *local_5b8;
  void *local_5b0;
  undefined1 local_5a8 [4];
  float local_5a4;
  undefined4 local_504;
  undefined4 local_4d8;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_460;
  double dStack_458;
  double local_450;
  longlong local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_628;
  if (((*(byte *)((longlong)param_1 + 0x2ea) & 2) == 0) ||
     (*(char *)(param_1[0xf] + 0x1da) != '\x01')) {
    cVar4 = (**(code **)(*param_1 + 0x3a0))(param_1);
    uVar6 = 0;
    memset(local_5a8,0,0x100);
    local_4d8 = 0xffffffff;
    local_5a4 = 1.0;
    local_504 = 0xffffffff;
    lVar22 = param_2[1];
    lVar15 = (longlong)(int)lVar22;
    if (0 < lVar15) {
      if ((*(byte *)(*param_2 + -0x53 + lVar15 * 0x100) & 1) == 0) {
        uVar6 = 0;
      }
      else {
        memcpy(local_5a8,(void *)(*param_2 + lVar15 * 0x100 + -0x100),0x100);
        uVar6 = FUN_14485cccc();
      }
    }
    lVar18 = param_1[0xf];
    if ((cVar4 == '\0') && (*(longlong *)(lVar18 + 0x1b8) == 0)) {
      local_608 = *(float *)(lVar18 + 0x1a4);
      local_5c8 = 0;
      local_5d0 = 0;
      local_5e0 = 0.0;
      local_5e8 = 0;
      local_600 = (uint)*(byte *)(lVar18 + 0x1a8);
      local_5d8 = 1.0;
      local_5f8 = uVar6;
      local_5f0 = param_3;
      (**(code **)(*param_1 + 0x3c8))(param_1,param_2,param_1 + 0x77,param_1 + 0x91);
    }
    else {
      iVar10 = 2;
      if (2 < *(int *)(lVar18 + 0x154)) {
        iVar10 = *(int *)(lVar18 + 0x154);
      }
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_498 = (double)param_1[0x79];
      local_4a8 = (double)param_1[0x77];
      dStack_4a0 = (double)param_1[0x78];
      local_450 = (double)param_1[0x93];
      local_460 = (double)param_1[0x91];
      dStack_458 = (double)param_1[0x92];
      fVar25 = (float)SQRT((local_450 - local_498) * (local_450 - local_498) +
                           (local_460 - local_4a8) * (local_460 - local_4a8) +
                           (dStack_458 - dStack_4a0) * (dStack_458 - dStack_4a0));
      dVar27 = (double)(*(float *)(lVar18 + 0x100) * fVar25);
      local_480 = (double)param_1[0x7c] * dVar27 * 0.3330000042915344 + local_498;
      dStack_488 = (double)param_1[0x7b] * dVar27 * 0.3330000042915344 + dStack_4a0;
      local_490 = dVar27 * (double)param_1[0x7a] * 0.3330000042915344 + local_4a8;
      dVar27 = (double)(fVar25 * *(float *)(lVar18 + 0x104));
      local_468 = (double)param_1[0x99] * dVar27 * 0.3330000042915344 + local_450;
      dStack_470 = (double)param_1[0x98] * dVar27 * 0.3330000042915344 + dStack_458;
      local_478 = dVar27 * (double)param_1[0x97] * 0.3330000042915344 + local_460;
      FUN_140a665bc();
      fVar25 = 1.0 / (float)(int)(iVar10 - 1U);
      uVar14 = 0;
      do {
        if (uVar14 == iVar10 - 1U) break;
        fVar28 = (float)(int)uVar14 * fVar25;
        if (local_5a4 < fVar28) break;
        fVar2 = *(float *)(param_1[0xf] + 0x1a4);
        lVar7 = FUN_1447e736e(param_1[0xf] + 0x1b0);
        lVar18 = param_1[0xf];
        fVar26 = fVar2;
        if (lVar7 != 0) {
          uVar8 = FUN_1447e736e(lVar18 + 0x1b0);
          fVar26 = (float)FUN_1449e6cbc(uVar8,(float)((int)uVar14 + 1) * fVar25);
          lVar18 = param_1[0xf];
          if ((*(byte *)(lVar18 + 0x1a0) & 2) != 0) {
            fVar26 = fVar26 * fVar2;
          }
        }
        local_5d0 = 0;
        local_5e8 = 0;
        local_600 = (uint)*(byte *)(lVar18 + 0x1a8);
        local_5c8 = 0;
        local_608 = fVar26;
        local_5f8 = uVar6;
        local_5f0 = param_3;
        local_5e0 = fVar28;
        local_5d8 = fVar25;
        cVar4 = (**(code **)(*param_1 + 0x3c8))
                          (param_1,param_2,local_1a8 + uVar14 * 0x18,local_1a8 + (uVar14 + 1) * 0x18
                          );
        uVar14 = uVar14 + 1;
      } while (cVar4 == '\0');
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
    }
    iVar10 = (int)param_2[1];
    if (((int)lVar22 <= iVar10) && (local_5a4 < 1.0)) {
      lVar22 = (longlong)iVar10 + 1;
      iVar12 = -iVar10;
      lVar18 = (longlong)iVar10 << 8;
      iVar5 = iVar10;
      do {
        lVar18 = lVar18 + -0x100;
        lVar7 = *param_2;
        if (local_5a4 < *(float *)(lVar7 + 4 + lVar18)) {
          if (iVar10 != iVar5) {
            memmove((void *)(lVar7 + lVar18),(void *)(lVar7 + lVar18 + 0x100),
                    (longlong)(iVar5 + iVar12) << 8);
            iVar5 = (int)param_2[1];
          }
          iVar5 = iVar5 + -1;
          *(int *)(param_2 + 1) = iVar5;
        }
        lVar22 = lVar22 + -1;
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + -1;
      } while (lVar15 < lVar22);
      iVar10 = (int)param_1[0x108];
      if (1 < (longlong)iVar10) {
        dVar27 = (double)param_1[0x107];
        memset(&local_498,0,0x2f0);
        dStack_4a0 = (double)((longlong)iVar10 * 0x100 + (longlong)dVar27 + -0x100);
        local_4a8 = dVar27;
        fVar25 = logf((float)iVar10);
        local_498 = (double)CONCAT44(local_498._4_4_,(int)(longlong)(fVar25 + fVar25));
        pdVar17 = &local_4a8;
        do {
          pvVar11 = (void *)*pdVar17;
          pvVar16 = (void *)pdVar17[1];
          iVar10 = *(int *)(pdVar17 + 2);
          iVar5 = (int)((ulonglong)((longlong)pvVar16 - (longlong)pvVar11) >> 8);
          uVar21 = iVar5 + 1;
          pvVar13 = pvVar11;
          pvVar19 = pvVar16;
          if (iVar10 != 0) {
LAB_140a66cbe:
            if (8 < (int)uVar21) {
              pvVar23 = (void *)((ulonglong)(uVar21 >> 1) * 0x100 + (longlong)pvVar11);
              memcpy(&local_1a8,pvVar23,0x100);
              memcpy(pvVar23,pvVar11,0x100);
              memcpy(pvVar11,&local_1a8,0x100);
              pvVar23 = (void *)((longlong)pvVar19 + 0x100);
              local_5c0 = pvVar11;
              do {
                pvVar3 = (void *)((longlong)local_5c0 + 0x100);
                pvVar20 = (void *)((longlong)local_5c0 + 0x100);
                do {
                  local_5c0 = pvVar20;
                  local_5b0 = pvVar3;
                  if (pvVar19 < local_5c0) break;
                  pvVar3 = (void *)((longlong)local_5b0 + 0x100);
                  pvVar20 = (void *)((longlong)local_5c0 + 0x100);
                } while (*(float *)((longlong)local_5c0 + 4) < *(float *)((longlong)pvVar11 + 4) ||
                         *(float *)((longlong)local_5c0 + 4) == *(float *)((longlong)pvVar11 + 4));
                pvVar3 = (void *)((longlong)pvVar23 + -0x200);
                do {
                  pvVar20 = pvVar23;
                  local_5b8 = pvVar3;
                  pvVar23 = (void *)((longlong)pvVar20 + -0x100);
                  if (pvVar23 <= pvVar11) break;
                  pvVar3 = (void *)((longlong)local_5b8 + -0x100);
                } while (*(float *)((longlong)pvVar11 + 4) < *(float *)((longlong)pvVar20 + -0xfc)
                         || *(float *)((longlong)pvVar11 + 4) ==
                            *(float *)((longlong)pvVar20 + -0xfc));
                if (pvVar23 < local_5c0) goto LAB_140a673d7;
                memcpy(&local_1a8,local_5c0,0x100);
                memcpy(local_5c0,pvVar23,0x100);
                memcpy(pvVar23,&local_1a8,0x100);
              } while( true );
            }
            for (; pvVar16 = pvVar11, pvVar13 = pvVar11, pvVar11 < pvVar19;
                pvVar19 = (void *)((longlong)pvVar19 + -0x100)) {
              while (pvVar23 = pvVar16, pvVar16 = (void *)((longlong)pvVar13 + 0x100),
                    pvVar16 <= pvVar19) {
                pfVar1 = (float *)((longlong)pvVar13 + 0x104);
                pvVar13 = pvVar16;
                if (*pfVar1 < *(float *)((longlong)pvVar23 + 4) ||
                    *pfVar1 == *(float *)((longlong)pvVar23 + 4)) {
                  pvVar16 = pvVar23;
                }
              }
              memcpy(&local_1a8,pvVar23,0x100);
              memcpy(pvVar23,pvVar19,0x100);
              memcpy(pvVar19,&local_1a8,0x100);
            }
            goto LAB_140a66d49;
          }
LAB_140a67060:
          local_5c0 = pvVar11;
          if (uVar21 != 0) {
            iVar10 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
            pvVar19 = local_5c0;
            iVar5 = iVar10;
joined_r0x000140a67081:
            do {
              iVar12 = iVar10 * 2 + 1;
              local_5c0 = pvVar19;
              if (iVar12 < (int)uVar21) {
                iVar9 = iVar10 * 2 + 2;
                if ((iVar9 < (int)uVar21) &&
                   (fVar25 = *(float *)((longlong)pvVar19 + (longlong)iVar12 * 0x100 + 4),
                   pfVar1 = (float *)((longlong)pvVar19 + (longlong)iVar9 * 0x100 + 4),
                   fVar25 < *pfVar1 || fVar25 == *pfVar1)) {
                  iVar12 = iVar9;
                }
                fVar25 = *(float *)((longlong)pvVar19 + (longlong)iVar12 * 0x100 + 4);
                pfVar1 = (float *)((longlong)pvVar19 + (longlong)iVar10 * 0x100 + 4);
                if (*pfVar1 <= fVar25 && fVar25 != *pfVar1) {
                  pvVar11 = (void *)((longlong)iVar10 * 0x100 + (longlong)pvVar19);
                  pvVar19 = (void *)((longlong)iVar12 * 0x100 + (longlong)pvVar19);
                  memcpy(&local_1a8,pvVar11,0x100);
                  memcpy(pvVar11,pvVar19,0x100);
                  memcpy(pvVar19,&local_1a8,0x100);
                  iVar10 = iVar12;
                  pvVar19 = local_5c0;
                  goto joined_r0x000140a67081;
                }
              }
              bVar24 = iVar5 != 0;
              iVar10 = iVar5 + -1;
              iVar5 = iVar10;
            } while (bVar24);
            if (1 < (int)uVar21) {
              pvVar11 = (void *)(((ulonglong)uVar21 - 1) * 0x100 + (longlong)pvVar19);
              memcpy(&local_1a8,pvVar19,0x100);
              memcpy(pvVar19,pvVar11,0x100);
              memcpy(pvVar11,&local_1a8,0x100);
              uVar14 = (ulonglong)uVar21 - 1;
              if (uVar21 != 2) {
                do {
                  iVar10 = 0;
                  iVar12 = 1;
                  iVar5 = 0;
                  do {
                    iVar10 = iVar10 + 2;
                    iVar9 = iVar12;
                    if (((longlong)iVar10 < (longlong)uVar14) &&
                       (fVar25 = *(float *)((longlong)local_5c0 + (longlong)iVar12 * 0x100 + 4),
                       pfVar1 = (float *)((longlong)local_5c0 + (longlong)iVar10 * 0x100 + 4),
                       fVar25 < *pfVar1 || fVar25 == *pfVar1)) {
                      iVar9 = iVar10;
                    }
                    fVar25 = *(float *)((longlong)local_5c0 + (longlong)iVar9 * 0x100 + 4);
                    pfVar1 = (float *)((longlong)local_5c0 + (longlong)iVar5 * 0x100 + 4);
                    if (fVar25 < *pfVar1 || fVar25 == *pfVar1) break;
                    pvVar11 = (void *)((longlong)iVar5 * 0x100 + (longlong)local_5c0);
                    pvVar19 = (void *)((longlong)iVar9 * 0x100 + (longlong)local_5c0);
                    memcpy(&local_1a8,pvVar11,0x100);
                    memcpy(pvVar11,pvVar19,0x100);
                    memcpy(pvVar19,&local_1a8,0x100);
                    iVar10 = iVar9 * 2;
                    iVar12 = iVar9 * 2 + 1;
                    iVar5 = iVar9;
                  } while ((longlong)iVar12 < (longlong)uVar14);
                  pvVar19 = local_5c0;
                  pvVar11 = (void *)((uVar14 - 1) * 0x100 + (longlong)local_5c0);
                  memcpy(&local_1a8,local_5c0,0x100);
                  memcpy(pvVar19,pvVar11,0x100);
                  memcpy(pvVar11,&local_1a8,0x100);
                  bVar24 = 2 < uVar14;
                  uVar14 = uVar14 - 1;
                } while (bVar24);
              }
            }
          }
LAB_140a66d49:
          pdVar17 = pdVar17 + -3;
        } while (&local_4a8 <= pdVar17);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140a673d7:
  memcpy(&local_1a8,pvVar11,0x100);
  memcpy(pvVar11,pvVar23,0x100);
  memcpy(pvVar23,&local_1a8,0x100);
  iVar10 = iVar10 + -1;
  pvVar20 = (void *)((longlong)pvVar20 + -0x200);
  if ((longlong)local_5b8 - (longlong)pvVar13 < (longlong)pvVar16 - (longlong)local_5b0) {
    if (local_5c0 < pvVar19) {
      *pdVar17 = (double)local_5c0;
      pdVar17[1] = (double)pvVar19;
      *(int *)(pdVar17 + 2) = iVar10;
      pdVar17 = pdVar17 + 3;
    }
    pvVar19 = local_5b8;
    pvVar16 = pvVar11;
    if (pvVar23 <= (void *)((longlong)pvVar11 + 0x100U)) goto LAB_140a66d49;
  }
  else {
    if ((void *)((longlong)pvVar11 + 0x100U) < pvVar23) {
      *pdVar17 = (double)pvVar11;
      pdVar17[1] = (double)pvVar20;
      *(int *)(pdVar17 + 2) = iVar10;
      pdVar17 = pdVar17 + 3;
    }
    pvVar20 = pvVar19;
    pvVar11 = local_5c0;
    pvVar16 = local_5b0;
    if (pvVar19 <= local_5c0) goto LAB_140a66d49;
  }
  local_5b0 = pvVar16;
  local_5b8 = pvVar19;
  local_5c0 = pvVar11;
  iVar5 = (int)((ulonglong)((longlong)local_5b8 - (longlong)local_5b0) >> 8);
  uVar21 = iVar5 + 1;
  pvVar11 = local_5c0;
  pvVar13 = local_5b0;
  pvVar16 = local_5b8;
  pvVar19 = pvVar20;
  if (iVar10 == 0) goto LAB_140a67060;
  goto LAB_140a66cbe;
}



// FUNCTION 140a674ec FUN_140a674ec body=831 status=ok
// SIG undefined FUN_140a674ec(void)

void FUN_140a674ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined8 local_160;
  undefined8 local_158;
  code *local_150;
  undefined1 local_140 [128];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c0 = 0;
  local_b8 = 0x40000000000;
  local_90 = 0;
  local_88 = 0x400000000;
  local_60 = 0;
  local_58 = 0x400000000;
  local_40 = 0;
  local_38 = 0x400000000;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_158 = FUN_1446ddbd2();
      local_150 = FUN_1403a682c;
      local_160 = 0;
      local_168 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_140);
            goto LAB_140a67632;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_140) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_140,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_140,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_160 = CONCAT44(local_160._4_4_,(int)plVar1[6]);
        local_168 = local_168 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_140,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_140,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_140);
  }
LAB_140a67632:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140a6782c(*(undefined8 *)(param_1 + 0x430),local_140);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6782c FUN_140a6782c body=226 status=ok
// SIG undefined FUN_140a6782c(void)

void FUN_140a6782c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if (((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) &&
     (*(int *)(param_2 + 0x88) <= DAT_14c76139c)) {
    lVar4 = *(longlong *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lVar4 = param_2;
    }
    FUN_14170c290(param_1 + 0x199,lVar4);
    uVar3 = (**(code **)(*(longlong *)param_1[0x3e] + 0x498))();
    lVar4 = FUN_14343b5c9(uVar3,param_2);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_2 + 0x110);
      param_1[0x1af] = lVar4;
      if (lVar4 == 0) {
        return;
      }
    }
    else {
      param_1[0x1af] = lVar4;
    }
    plVar1 = (longlong *)param_1[0x17f];
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_1 + 0x199,lVar4);
    if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0xcf1) & 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140a67902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xae0))(param_1,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140a6790e FUN_140a6790e body=632 status=ok
// SIG undefined FUN_140a6790e(void)

void FUN_140a6790e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x7013;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14170fd90;
      local_60 = 0x8000000000000000;
      local_68 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140a67a04;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_140a67a04:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xf38))(param_1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a67b88 FUN_140a67b88 body=56 status=ok
// SIG undefined FUN_140a67b88(void)

void FUN_140a67b88(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x960) + 0xd0))(param_1 + 0x960);
  if (lVar1 != 0) {
    FUN_140a67bc0(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140a67bc0 FUN_140a67bc0 body=436 status=ok
// SIG undefined FUN_140a67bc0(void)

void FUN_140a67bc0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  int local_54;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (longlong *)(**(code **)(*param_1 + 0x18))();
  iVar1 = (int)local_70[5];
  local_60 = (uint *)(local_70 + 2);
  local_64 = 1;
  if (iVar1 == 0) {
    local_50 = 0;
    local_68 = 0;
    local_54 = 0;
  }
  else {
    puVar3 = (uint *)local_70[4];
    if ((uint *)local_70[4] == (uint *)0x0) {
      puVar3 = local_60;
    }
    uVar5 = *puVar3;
    if (uVar5 == 0) {
      iVar6 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar6 = iVar1 + -1;
      }
      uVar7 = 0;
      uVar4 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar4 = uVar7;
      }
      local_68 = (int)uVar4 + 1;
      local_50 = (int)uVar4 * 0x20 + 0x20;
      iVar6 = 0;
      do {
        local_54 = iVar1;
        if (uVar4 == uVar7) goto LAB_140a67c7c;
        iVar6 = iVar6 + 0x20;
        uVar5 = puVar3[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar5 == 0);
      local_68 = (int)uVar7;
      local_50 = iVar6;
    }
    else {
      local_50 = 0;
      local_68 = 0;
    }
    local_64 = -uVar5 & uVar5;
    uVar4 = (ulonglong)local_64 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_54 = (local_50 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar1 <= local_54) {
      local_54 = iVar1;
    }
  }
LAB_140a67c7c:
  local_58 = 0xffffffff;
  local_38 = 0;
  local_48 = local_70;
  local_40 = local_70;
  if (local_54 < iVar1) {
    do {
      if ((*(longlong *)(*local_70 + (longlong)local_54 * 0x50) == *param_2) &&
         (*(int *)(*local_70 + 8 + (longlong)local_54 * 0x50) == (int)param_2[1])) {
        FUN_1456d2ba2(local_48);
        local_38 = CONCAT11(local_38._1_1_,1);
      }
      local_58 = local_58 & ~local_64;
      FUN_1449c0562(&local_68);
    } while (local_54 < (int)local_60[6]);
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_148858fce(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a67d76 FUN_140a67d76 body=108 status=ok
// SIG undefined FUN_140a67d76(void)

void FUN_140a67d76(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*(longlong *)param_1[0x21] + 0x2a0))();
  if (lVar1 == 0) {
    FUN_140a67f50(local_30,param_2);
    (**(code **)(*param_1 + 0x2c8))(param_1,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a67e32 FUN_140a67e32 body=144 status=ok
// SIG undefined FUN_140a67e32(void)

undefined8 FUN_140a67e32(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x108);
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,&local_28);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a67ec4 FUN_140a67ec4 body=140 status=ok
// SIG undefined FUN_140a67ec4(void)

longlong FUN_140a67ec4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*param_2 == 0) || (iVar3 = *(int *)(param_1 + 0x30), (longlong)iVar3 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(lVar5 + lVar9);
      if (((lVar8 != 0) && (puVar6 = *(undefined8 **)(lVar8 + 0x28), puVar6 != (undefined8 *)0x0))
         && (cVar7 = (**(code **)*puVar6)(puVar6,*param_2), cVar7 != '\0')) break;
      lVar9 = lVar9 + 8;
      lVar8 = 0;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  plVar4 = (longlong *)param_2[1];
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
  return lVar8;
}



// FUNCTION 140a67f50 FUN_140a67f50 body=231 status=ok
// SIG undefined FUN_140a67f50(void)

undefined8 * FUN_140a67f50(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_140a68038(1);
  if (plVar2 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    plVar2 = (longlong *)FUN_1401e3228();
    if (plVar2 != (longlong *)0x0) goto LAB_140a67f77;
  }
  else {
LAB_140a67f77:
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x110))(local_30,param_1,param_2);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_140a67fb3;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_140a67fb3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a68038 FUN_140a68038 body=417 status=ok
// SIG undefined FUN_140a68038(void)

undefined8 FUN_140a68038(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e464) {
    FUN_144b3d300(&DAT_14cb8e464);
    if (DAT_14cb8e464 == -1) {
      FUN_1446f470e(&DAT_14cb8e45c,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_14cb8e464);
    }
  }
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if ((char)param_1 == '\0') {
    if (iVar2 < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    cVar1 = FUN_14011feae(&DAT_14c874628,DAT_14cb8e45c);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
  }
  uVar4 = DAT_14cb8e45c;
  if (iVar2 < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar3 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000140a680b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,*(code **)(*plVar3 + 0x58));
  return uVar4;
}



// FUNCTION 140a681da FUN_140a681da body=56 status=ok
// SIG undefined FUN_140a681da(void)

undefined8 FUN_140a681da(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if ((param_2 == '\0') && (cVar1 = FUN_140a68212(param_1 + 0x10), cVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN_1401e3228(param_1 + 0x10);
  return uVar2;
}



// FUNCTION 140a68212 FUN_140a68212 body=397 status=ok
// SIG undefined FUN_140a68212(void)

undefined8 FUN_140a68212(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_28 = "OnlineSubsystem";
  local_20 = 0xf;
  local_1c = 0;
  uVar2 = FUN_14001a6c0(&local_28,1);
  cVar1 = FUN_14011feae(&DAT_14c874628,uVar2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    local_28 = "OnlineSubsystem";
    local_20 = 0xf;
    local_1c = 0;
    uVar2 = FUN_14001a6c0(&local_28,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar3 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar2);
    uVar4 = (**(code **)(*plVar3 + 0x70))(plVar3,*param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a683a0 FUN_140a683a0 body=282 status=ok
// SIG undefined FUN_140a683a0(void)

undefined4 FUN_140a683a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 0;
  local_30 = 0;
  local_58 = &local_38;
  local_38 = 0;
  local_28 = param_2;
  FUN_140a6868c(param_1,local_50,&local_28,&local_30);
  if (local_30 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    FUN_1400021e4(&local_30,local_50);
    FUN_140a684bb(&local_40,local_50,param_1 + 0x180);
    uVar1 = FUN_14011feae(&DAT_14c874628,local_40);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a684bb FUN_140a684bb body=463 status=ok
// SIG undefined FUN_140a684bb(void)

undefined8 * FUN_140a684bb(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  wchar_t *_Str2;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *_Str1;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&local_48);
  *param_1 = 0;
  uVar1 = local_40 - 1;
  if (local_40 == 0) {
    uVar1 = 0;
  }
  if ((int)uVar1 < 1) {
    iVar3 = *(int *)(param_2 + 1);
  }
  else {
    _Str1 = L"";
    _Str2 = L"";
    if (local_40 != 0) {
      _Str2 = local_48;
    }
    iVar3 = *(int *)(param_2 + 1);
    if (iVar3 != 0) {
      _Str1 = (wchar_t *)*param_2;
    }
    iVar2 = wcsncmp(_Str1,_Str2,(ulonglong)uVar1);
    if (iVar2 == 0) {
      FUN_1446f470e(param_1,_Str1,1);
      goto LAB_140a6864d;
    }
  }
  uVar5 = 0;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    if (iVar3 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar1 = ((uint)(0x19 < (ushort)puVar4[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar1) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar1 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar2 != (int)lVar6);
  }
  iVar3 = FUN_14128acc0(param_3,uVar5,param_2);
  lVar6 = (longlong)iVar3 * 0x20 + *param_3;
  if (lVar6 == 0 || iVar3 == -1) {
    FUN_140474144(&local_60,&local_48,param_2);
    puVar4 = local_60;
    if (local_58 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar4,1);
    *param_1 = local_50;
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_1 = *(undefined8 *)(lVar6 + 0x10);
  }
LAB_140a6864d:
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a6868c FUN_140a6868c body=881 status=ok
// SIG undefined FUN_140a6868c(void)

longlong *
FUN_140a6868c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(param_1 + 0x1d0);
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar2 = *param_3;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar9 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x210);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x218) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar3 = (longlong *)(*plVar4 + (longlong)iVar8 * 0x28);
        if (*plVar3 == lVar2) {
          if (plVar3 != (longlong *)0x0) {
            *param_4 = plVar3[1];
            *param_5 = plVar3[2];
            goto LAB_140a6875c;
          }
          break;
        }
        iVar8 = (int)plVar3[4];
      } while (iVar8 != -1);
    }
  }
  *param_4 = *(longlong *)(param_1 + 8);
  *param_5 = DAT_14cb8e370;
  if (*param_3 != 0) {
    FUN_1400021e4(param_3,&local_50);
    if ((longlong)local_48 == 0) {
      plVar3 = (longlong *)&DAT_149dfb77a;
    }
    else {
      lVar2 = (longlong)local_48 * 2;
      lVar9 = 0;
      do {
        plVar3 = local_50;
        if (*(short *)((longlong)local_50 + lVar9 * 2) == 0x3a) {
          iVar8 = (int)lVar9;
          if (iVar8 != -1) {
            if (0 < iVar8) {
              iVar6 = local_48 + -1;
              if (local_48 == 0) {
                iVar6 = 0;
              }
              if (iVar8 < iVar6) {
                iVar6 = iVar8;
              }
              if (iVar6 < 1) {
                iVar6 = 0;
              }
              FUN_14006620a(&local_60,local_50,iVar6);
              if (local_58 == 0) {
                puVar10 = &DAT_149dfb77a;
              }
              else {
                puVar10 = (undefined2 *)CONCAT44(uStack_5c,local_60);
              }
              FUN_1446f470e(&local_78,puVar10,1);
              *param_4 = (longlong)local_78;
              if (CONCAT44(uStack_5c,local_60) != 0) {
                FUN_1400020a8();
              }
            }
            iVar6 = local_48 + -1;
            if (local_48 == 0) {
              iVar6 = 0;
            }
            if (iVar8 + 1 < iVar6) {
              FUN_144a49bb4(&local_50,&local_60,iVar8 + 1);
              if (local_58 == 0) {
                puVar10 = &DAT_149dfb77a;
              }
              else {
                puVar10 = (undefined2 *)CONCAT44(uStack_5c,local_60);
              }
              FUN_1446f470e(&local_78,puVar10,1);
              *param_5 = (longlong)local_78;
              if (CONCAT44(uStack_5c,local_60) != 0) {
                FUN_1400020a8();
              }
            }
            goto LAB_140a68809;
          }
          break;
        }
        lVar9 = lVar9 + 1;
        lVar2 = lVar2 + -2;
      } while (lVar2 != 0);
    }
    FUN_1446f470e(&local_60,plVar3,1);
    *param_4 = CONCAT44(uStack_5c,local_60);
LAB_140a68809:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_50 = param_3;
  FUN_145768a46(plVar4,&local_60);
  lVar9 = (longlong)local_60;
  lVar2 = *plVar4;
  *(longlong *)(lVar2 + 8 + lVar9 * 0x28) = *param_4;
  *(longlong *)(lVar2 + 0x10 + lVar9 * 0x28) = *param_5;
  FUN_1400021e4(param_5,&local_60);
  puVar10 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar10 = (undefined2 *)CONCAT44(uStack_5c,local_60);
  }
  FUN_1400021e4(param_4,&local_78);
  puVar7 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar7 = local_78;
  }
  FUN_140002266(&local_50,L"%s:%s",puVar7,puVar10);
  plVar4 = (longlong *)&DAT_149dfb77a;
  if (local_48 != 0) {
    plVar4 = local_50;
  }
  FUN_1446f470e(&local_68,plVar4,1);
  *(undefined8 *)(lVar2 + 0x18 + lVar9 * 0x28) = local_68;
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)(lVar2 + lVar9 * 0x28);
LAB_140a6875c:
  *param_2 = plVar3[3];
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a689fe FUN_140a689fe body=1000 status=ok
// SIG undefined FUN_140a689fe(void)

void FUN_140a689fe(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  undefined ***local_2a0;
  code *local_298;
  code *local_290;
  undefined **local_280 [5];
  byte local_258;
  byte local_257;
  byte local_256;
  byte local_249;
  undefined8 local_240;
  longlong *local_228;
  longlong local_208;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined **local_1d8;
  undefined ***local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x60) != 0)) &&
      (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
     ((*(longlong *)(lVar4 + 0x30) != 0 && (lVar2 = param_2[2], lVar2 != 0)))) {
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x40) + 0x78;
      lVar5 = (longlong)*(int *)(param_1 + 0x48) * 0x88;
      do {
        if ((*(char *)(lVar6 + -0x10) == '\0') && (*(longlong *)(lVar6 + -0x78) == lVar2)) {
          if (0 < *(int *)(lVar6 + -0x68)) {
            memset(local_280,0,0x90);
            FUN_144869430(local_280);
            local_1f0 = 0;
            local_258 = local_258 | 1;
            local_257 = local_257 & 0xfe;
            local_256 = local_256 & 0x7b;
            local_280[0] = &PTR_FUN_14b3e6dd0;
            if (*(char *)(lVar6 + -4) == '\x01') {
              local_240 = *(undefined8 *)(lVar6 + -0xc);
            }
            local_1e8 = lVar6 + -0x70;
            local_1e0 = lVar6 + -0x78;
            if (0 < *(int *)(lVar6 + 8)) {
              FUN_14072bd0a(local_280,lVar6);
            }
            local_249 = local_249 | 0x20;
            if (0 < *(int *)(lVar6 + -0x68)) {
              plVar3 = (longlong *)param_2[2];
              local_2d8 = FUN_144938c96(param_2);
              local_1c0 = &local_1c8;
              local_1d8 = &PTR_FUN_149e37810;
              local_1c8 = &local_1d8;
              local_2d0 = 0;
              local_1d0 = local_280;
              (**(code **)(*plVar3 + 0x2d0))(plVar3,local_1c0,param_2,plVar3);
            }
            local_280[0] = &PTR__purecall_149e35f70;
            if (local_228 != (longlong *)0x0) {
              if (*local_228 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_228);
            }
            if (local_208 != 0) {
              if (*(longlong *)(local_208 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_208);
            }
          }
          *(undefined1 *)(lVar6 + -0x10) = 1;
          break;
        }
        lVar6 = lVar6 + 0x88;
        lVar5 = lVar5 + -0x88;
      } while (lVar5 != 0);
    }
    bVar1 = *(byte *)(lVar4 + 0x152);
    if (DAT_14cae8b20 == 0) {
      local_2a0 = &local_1d8;
      local_1d8 = (undefined **)&LAB_14355090c;
      local_290 = FUN_14081d0ea;
      local_298 = FUN_14081d0ea;
      local_2a8 = &LAB_147b8e16d;
      local_2b0 = (code *)&LAB_140810a38;
      local_2b8 = L"Engine";
      local_2c0 = 0x800000000;
      local_2c8 = 0x10000000;
      local_2d0 = CONCAT44(local_2d0._4_4_,8);
      local_2d8 = CONCAT44(local_2d8._4_4_,0x3f0);
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    if (DAT_14c951858 == 0) {
      local_2a0 = &local_1d8;
      local_1d8 = (undefined **)FUN_1449e2820;
      local_290 = FUN_14081d0ea;
      local_298 = FUN_14081d0ea;
      local_2a8 = &LAB_1468c5283;
      local_2b0 = FUN_142809da0;
      local_2b8 = L"Engine";
      local_2c0 = 0x400000000;
      local_2c8 = 0x10000000;
      local_2d0 = CONCAT44(local_2d0._4_4_,8);
      local_2d8 = CONCAT44(local_2d8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    if ((bVar1 < 7 & 0x6aU >> (bVar1 & 0x1f)) == 0) {
      (**(code **)(*param_2 + 0x2c0))(param_2,*(undefined8 *)(param_1 + 0x60));
    }
    else {
      if ((char)param_2[8] == '\x01') {
        (**(code **)(*param_2 + 0x2c0))(param_2,*(undefined8 *)(param_1 + 0x60));
      }
      FUN_140a68de8(lVar2,param_2);
      (**(code **)(*param_2 + 0x2d0))(param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a68de8 FUN_140a68de8 body=153 status=ok
// SIG undefined FUN_140a68de8(void)

void FUN_140a68de8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  while( true ) {
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(param_1 + 0x38)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(param_1 + 0x38) * 8) != param_1 + 0x30) break;
    lVar3 = FUN_14043ab18();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (iVar1 = *(int *)(param_1 + 0x268), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x260);
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    param_1 = *(longlong *)(param_1 + 0x40);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}



// FUNCTION 140a68e82 FUN_140a68e82 body=403 status=ok
// SIG undefined FUN_140a68e82(void)

void FUN_140a68e82(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  DWORD DVar2;
  char cVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  LPVOID lpTlsValue;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    uVar5 = FUN_140d4a144();
    lVar6 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_140d4a144();
      lVar7 = FUN_144718840(lVar6,uVar5);
      if (lVar6 != lVar7) goto LAB_140a68ee8;
    }
  }
  lVar7 = 0;
LAB_140a68ee8:
  FUN_140a69016(&local_48,lVar7);
  *(undefined4 *)(param_1 + 9) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_40._4_4_;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar8 = DAT_14c75ec34 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar8) {
      DVar4 = DAT_14c75ec34;
      DVar2 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar2;
    UNLOCK();
    if (bVar8) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (*(char *)((longlong)lpTlsValue + 0x20) == '\0') {
    local_48 = param_2;
    uVar5 = FUN_14477b072(param_1,DAT_14cb58b60);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_48);
  }
  local_48 = 0;
  uStack_40 = 0;
  cVar3 = FUN_14493c216(&local_48,0);
  if (cVar3 == '\0') {
    uStack_40 = 0;
  }
  param_1[9] = local_48;
  param_1[10] = uStack_40;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a69016 FUN_140a69016 body=204 status=ok
// SIG undefined FUN_140a69016(void)

uint * FUN_140a69016(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140a690e2 FUN_140a690e2 body=602 status=ok
// SIG undefined FUN_140a690e2(void)

undefined8 FUN_140a690e2(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d0;
  longlong *local_1c8;
  undefined ***local_1c0;
  undefined ****local_1b8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((*(byte *)(param_2 + 5) & 5) != 0) {
    if (DAT_14cb129a8 == (longlong *)0x0) {
      uVar6 = FUN_14125ebb0();
      DAT_14cb129a8 = (longlong *)FUN_140002ddd(FUN_1464151af,uVar6,L"ClothTetherData");
    }
    local_1b8 = &local_1c0;
    local_1d0 = &PTR_FUN_149e37810;
    local_1c0 = &local_1d0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1c8 = param_2;
    (**(code **)(*DAT_14cb129a8 + 0x2d0))(0,local_1b8,param_3,DAT_14cb129a8);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_3[1] << 4,(longlong)*(int *)((longlong)param_3 + 0xc) << 4
            );
  uVar5 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar5 = (undefined4)param_3[1];
  }
  local_1d0 = (undefined **)CONCAT44(local_1d0._4_4_,uVar5);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1d0,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1d0);
    }
    uVar7 = (uint)local_1d0;
  }
  else {
    uVar7 = *(uint *)*puVar4;
    local_1d0 = (undefined **)CONCAT44(local_1d0._4_4_,uVar7);
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar7 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_140d7adea(*param_3,(int)param_3[1]);
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        FUN_140a6933e(param_3,0);
      }
    }
  }
  else if ((((int)uVar7 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x100000 < uVar7 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_3 + 1) = uVar7;
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_140a69412(param_2,*param_3 + lVar8);
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < (int)param_3[1]);
  }
  else {
    FUN_140d7adea(*param_3,(int)param_3[1]);
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(uint *)((longlong)param_3 + 0xc) != uVar7) {
      FUN_140a6933e(param_3,uVar7);
    }
    if (0 < (int)(uint)local_1d0) {
      iVar9 = 0;
      do {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_147dfa6f0(param_3,iVar3);
        }
        lVar8 = *param_3;
        puVar2 = (undefined8 *)(lVar8 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_140a69412(param_2,lVar8 + (longlong)iVar3 * 0x10);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)local_1d0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140a6933e FUN_140a6933e body=212 status=ok
// SIG undefined FUN_140a6933e(void)

void FUN_140a6933e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140a69412 FUN_140a69412 body=928 status=ok
// SIG undefined FUN_140a69412(void)

longlong * FUN_140a69412(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140a697c2(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar8 = 8;
    lVar9 = 0;
    do {
      lVar5 = *param_2;
      puVar6 = (undefined4 *)(lVar5 + lVar8 + -8);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        *puVar6 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar6 = (undefined4 *)(lVar5 + lVar8 + -4);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        *puVar6 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar6 = (undefined4 *)(lVar5 + lVar8);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar6);
        }
      }
      else {
        *puVar6 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0xc;
    } while (lVar9 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_140a697c2(param_2), 0 < (int)local_3c)) {
      iVar7 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147dfa65c(param_2,iVar2);
        }
        puVar6 = (undefined4 *)((longlong)iVar2 * 0xc + *param_2);
        FUN_140a697b3(puVar6);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6 + 1,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          puVar6[1] = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar6 = puVar6 + 2;
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a697b3 FUN_140a697b3 body=15 status=ok
// SIG undefined FUN_140a697b3(void)

void FUN_140a697b3(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 140a697c2 FUN_140a697c2 body=337 status=ok
// SIG undefined FUN_140a697c2(void)

void FUN_140a697c2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a6982f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140a6982f:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 140a69914 FUN_140a69914 body=40 status=ok
// SIG undefined FUN_140a69914(void)

undefined8 FUN_140a69914(undefined8 param_1,int param_2)

{
  FUN_140a6993c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a6993c FUN_140a6993c body=168 status=ok
// SIG undefined FUN_140a6993c(void)

void FUN_140a6993c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab815a0;
  param_1[5] = &PTR_FUN_14ab81fa0;
  param_1[6] = &PTR_LAB_14ab81fe0;
  param_1[0x55] = &PTR_FUN_14ab82030;
  param_1[0x56] = &PTR_FUN_14ab820b0;
  param_1[0x57] = &PTR_FUN_14ab820c0;
  param_1[0xc4] = &PTR_FUN_14ab820f0;
  FUN_140a699e4(param_1 + 0xe9,1);
  if (param_1[0xdf] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc4] = &PTR_LAB_14ab74bb0;
  FUN_14028f6a8(param_1 + 0xc6,1);
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140a699e4 FUN_140a699e4 body=124 status=ok
// SIG undefined FUN_140a699e4(void)

void FUN_140a699e4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140a69a60 FUN_140a69a60 body=53 status=ok
// SIG undefined FUN_140a69a60(void)

undefined8 FUN_140a69a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140230a63();
  FUN_140a69a96(&DAT_14c8731a8,param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 140a69a96 FUN_140a69a96 body=163 status=ok
// SIG undefined FUN_140a69a96(void)

undefined8 * FUN_140a69a96(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_140a69b3a(param_1,&local_38);
  uVar1 = (ulonglong)local_28;
  if ((&DAT_149e346c0)[uVar1] == '\x01') {
    *param_2 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  else {
    FUN_140056680(param_2,param_3);
    uVar1 = (ulonglong)local_28;
  }
  (*(code *)(&PTR_FUN_149e346d0)[uVar1])(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a69b3a FUN_140a69b3a body=1774 status=ok
// SIG undefined FUN_140a69b3a(void)

longlong *
FUN_140a69b3a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,char param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  int iVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined1 auStack_168 [32];
  int local_148;
  uint local_144;
  longlong *local_140;
  longlong *local_138;
  uint *local_130;
  ulonglong local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  int *local_80;
  int local_78;
  byte local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = param_1 + 0x30;
  if (param_5 == '\0') {
    lVar6 = param_1;
  }
  FUN_1449078e7(&local_80,param_3,lVar6);
  if ((&DAT_149e19eee)[local_70] == '\0') {
    FUN_14023423e(&local_68,&local_80);
    (*(code *)(&PTR_FUN_149e19f00)[local_70])(&local_80);
    local_70 = 2;
    FUN_14023423e(param_2,&local_68);
    *(undefined1 *)(param_2 + 2) = 1;
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    goto LAB_140a69e9d;
  }
  lVar6 = (longlong)local_78;
  if (lVar6 == 0) {
    FUN_140056680(param_2,param_3);
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    iVar20 = (int)((ulonglong)
                   (*(longlong *)(local_80 + (longlong)(local_78 + -1) * 0x18 + 0x12) - param_3) >>
                  1);
    piVar21 = local_80;
    if (iVar20 < 1) {
LAB_140a69c0a:
      piVar18 = piVar21 + lVar6 * 0x18;
      puVar8 = (uint *)(param_4 + 2);
      do {
        iVar20 = *piVar21;
        iVar2 = piVar21[1];
        iVar10 = piVar21[2];
        iVar12 = piVar21[3];
        if (iVar12 == -0x2339c809 &&
            (iVar10 == -0x757ffe5f && (iVar2 == -0x7a26b99c && iVar20 == 0x3ed3a25))) {
          FUN_1400020e8(&local_c8,*(undefined8 *)(piVar21 + 6),piVar21[0xc]);
        }
        else if (iVar12 == -0x3539ec9e &&
                 (iVar10 == -0x62abb801 && (iVar2 == 0x508941bb && iVar20 == 0x48ff0754))) {
          FUN_140002184(&local_c8,(short)piVar21[6]);
        }
        else if ((((iVar20 == -0x554b71a5) && (iVar2 == -0x1256b7ad)) && (iVar10 == -0x56ae12d3)) &&
                ((iVar12 == 0xa8e795d &&
                 (plVar3 = *(longlong **)(piVar21 + 6), plVar3 != (longlong *)0x0)))) {
          uVar11 = *(uint *)(param_4 + 5);
          local_140 = param_4;
          local_138 = param_2;
          local_130 = puVar8;
          if (uVar11 == 0) {
            uVar17 = 1;
            uVar19 = 0;
            uVar5 = 0;
            iVar20 = 0;
          }
          else {
            puVar7 = (uint *)param_4[4];
            if ((uint *)param_4[4] == (uint *)0x0) {
              puVar7 = puVar8;
            }
            uVar5 = *puVar7;
            if (uVar5 == 0) {
              iVar20 = uVar11 + 0x1e;
              if (-1 < (int)(uVar11 - 1)) {
                iVar20 = uVar11 - 1;
              }
              uVar19 = 0;
              uVar17 = (ulonglong)(uint)(iVar20 >> 5);
              if (iVar20 >> 5 < 1) {
                uVar17 = uVar19;
              }
              iVar20 = 0;
              do {
                if (uVar17 == uVar19) goto LAB_140a69fea;
                iVar20 = iVar20 + 0x20;
                uVar5 = puVar7[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar5 == 0);
            }
            else {
              uVar19 = 0;
              iVar20 = 0;
            }
            uVar17 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar17 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            uVar5 = (iVar20 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if ((int)uVar11 <= (int)uVar5) {
              uVar5 = uVar11;
            }
          }
          if (uVar5 != uVar11) {
            lVar6 = *param_4;
            lVar4 = plVar3[6];
            local_144 = 0xffffffff;
            local_128 = (ulonglong)uVar11;
            do {
              iVar2 = *(int *)(lVar6 + 8 + (longlong)(int)uVar5 * 0x38);
              iVar10 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar10 = 0;
              }
              local_148 = iVar20;
              if (iVar10 == (int)lVar4) {
                puVar22 = (undefined8 *)((longlong)(int)uVar5 * 0x38 + lVar6);
                puVar15 = &DAT_149dfb77a;
                if (iVar2 != 0) {
                  puVar15 = (undefined2 *)*puVar22;
                }
                iVar20 = FUN_144a54874(*plVar3,puVar15);
                if (iVar20 == 0) {
                  puVar22 = puVar22 + 2;
                  if (puVar22 != (undefined8 *)0x0) {
                    FUN_140231068(puVar22,&local_c8);
                    puVar8 = local_130;
                    param_2 = local_138;
                    param_4 = local_140;
                    goto LAB_140a69c79;
                  }
                  break;
                }
              }
              puVar8 = (uint *)local_140[4];
              if ((uint *)local_140[4] == (uint *)0x0) {
                puVar8 = local_130;
              }
              uVar14 = local_144 & ~(uint)uVar17;
              iVar10 = (int)uVar19;
              lVar16 = (longlong)iVar10;
              uVar11 = puVar8[lVar16] & uVar14;
              iVar2 = (int)local_128;
              iVar20 = local_148;
              if (uVar11 == 0) {
                iVar12 = iVar2 + 0x1e;
                if (-1 < iVar2 + -1) {
                  iVar12 = iVar2 + -1;
                }
                iVar12 = iVar12 >> 5;
                iVar13 = iVar12;
                if (iVar12 < iVar10) {
                  iVar13 = iVar10;
                }
                if (iVar12 <= iVar10) break;
                lVar9 = 0;
                while( true ) {
                  iVar20 = iVar20 + 0x20;
                  uVar11 = puVar8[lVar16 + lVar9 + 1];
                  if (uVar11 != 0) break;
                  lVar9 = lVar9 + 1;
                  if (iVar13 - lVar16 == lVar9) goto LAB_140a69fea;
                }
                uVar19 = (ulonglong)(iVar10 + (int)lVar9 + 1);
                uVar14 = 0xffffffff;
              }
              uVar17 = (ulonglong)(-uVar11 & uVar11);
              uVar1 = uVar17 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar5 = (iVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              local_144 = uVar14;
            } while ((int)uVar5 < iVar2);
          }
LAB_140a69fea:
          if (param_5 != '\0') {
            FUN_14006620a(local_f8,*plVar3,(ulonglong)(plVar3[1] - *plVar3) >> 1);
            FUN_140233b1a(local_e8,local_f8);
            local_68 = L"UndefinedFormatSpecifier";
            local_60 = 0x18;
            FUN_1446e940c(local_11c,&local_68);
            local_68 = L"StringFormatter";
            local_60 = 0xf;
            FUN_1446e940c(local_120,&local_68);
            FUN_140208bae(local_118,local_120,local_11c,L"Undefined format token: {0}");
            FUN_14023409e(&local_108,local_118,1);
            local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
            FUN_14023423e(local_58,local_e8);
            local_98 = &local_48;
            local_a0 = &local_68;
            FUN_14010d304(&local_90);
            param_2 = local_138;
            local_b0 = local_108;
            local_a8 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_100 + 1) = (int)local_100[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_d8,&local_b0,&local_90);
            FUN_14007f2db(local_90,local_88);
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            if (local_58[0] != (longlong *)0x0) {
              (**(code **)(*local_58[0] + 0x10))();
            }
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_100 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar21 = (int *)((longlong)local_100 + 0xc);
                *piVar21 = *piVar21 + -1;
                UNLOCK();
                if (*piVar21 == 0) {
                  (**(code **)(*local_100 + 0x10))(local_100);
                }
              }
            }
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            *param_2 = (longlong)local_d8;
            if (local_d8 == (longlong *)0x0) {
              *(undefined4 *)(param_2 + 1) = local_d0;
              *(undefined1 *)(param_2 + 2) = 1;
            }
            else {
              (**(code **)(*local_d8 + 8))();
              *(undefined4 *)(param_2 + 1) = local_d0;
              *(undefined1 *)(param_2 + 2) = 1;
              if (local_d8 != (longlong *)0x0) {
                (**(code **)(*local_d8 + 0x10))();
              }
            }
            if (local_118[0] != (longlong *)0x0) {
              (**(code **)(*local_118[0] + 0x10))();
            }
            if (local_f8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            goto LAB_140a69e9d;
          }
          FUN_1400020e8(&local_c8,plVar3[3],(ulonglong)(plVar3[4] - plVar3[3]) >> 1);
          puVar8 = local_130;
          param_2 = local_138;
          param_4 = local_140;
        }
LAB_140a69c79:
        piVar21 = piVar21 + 0x18;
      } while (piVar21 != piVar18);
    }
    else {
      FUN_1446f8c06(&local_c8,iVar20 + 1);
      lVar6 = (longlong)local_78;
      piVar21 = local_80;
      if (lVar6 != 0) goto LAB_140a69c0a;
    }
    *param_2 = local_c8;
    local_c8 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_c0._4_4_;
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_140a69e9d:
  (*(code *)(&PTR_FUN_149e19f00)[local_70])();
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6a22a FUN_140a6a22a body=375 status=ok
// SIG undefined FUN_140a6a22a(void)

void FUN_140a6a22a(longlong param_1)

{
  FUN_140a6a3a2();
  if (*(char *)(param_1 + 0x248) == '\x01') {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 0x80;
    *(undefined1 *)(param_1 + 0x248) = 0;
  }
  if (*(char *)(param_1 + 0x201) == '\x01') {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 4;
    *(undefined1 *)(param_1 + 0x201) = 0;
  }
  if (*(char *)(param_1 + 0x202) == '\x01') {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 0x20;
    *(undefined1 *)(param_1 + 0x202) = 0;
  }
  if (*(char *)(param_1 + 0x205) == '\x01') {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 0x40;
    *(undefined1 *)(param_1 + 0x205) = 0;
  }
  if (*(char *)(param_1 + 0x206) == '\x01') {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 8;
    *(undefined1 *)(param_1 + 0x206) = 0;
  }
  if (*(char *)(param_1 + 0x207) == '\x01') {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 0x10;
    *(undefined1 *)(param_1 + 0x207) = 0;
  }
  if (*(char *)(param_1 + 0x203) == '\x01') {
    *(byte *)(param_1 + 0x24d) = *(byte *)(param_1 + 0x24d) | 8;
    *(undefined1 *)(param_1 + 0x203) = 0;
  }
  if (*(char *)(param_1 + 0x204) == '\x01') {
    *(byte *)(param_1 + 0x24d) = *(byte *)(param_1 + 0x24d) | 0x10;
    *(undefined1 *)(param_1 + 0x204) = 0;
  }
  if ((*(char *)(param_1 + 0x213) != '\0') || (*(char *)(param_1 + 0x214) == '\x01')) {
    *(undefined1 *)(param_1 + 0x211) = 1;
    *(undefined2 *)(param_1 + 0x213) = 0;
  }
  if (*(char *)(param_1 + 0x233) == '\x01') {
    *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) | 2;
    *(undefined1 *)(param_1 + 0x233) = 0;
  }
  if (*(char *)(param_1 + 0x220) == '\x01') {
    *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) | 8;
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  return;
}



// FUNCTION 140a6a3a2 FUN_140a6a3a2 body=280 status=ok
// SIG undefined FUN_140a6a3a2(void)

void FUN_140a6a3a2(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_20);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1[0xc] != 0) {
    FUN_1446ddc76(&local_20,"Default",1);
    param_1[0xd] = local_20;
    lVar4 = param_1[0xc];
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = param_1[0xc];
      }
    }
    param_1[0xe] = lVar4;
    param_1[0xc] = 0;
  }
  local_38 = 0x86974e05;
  uStack_34 = 0xa9934a67;
  uStack_30 = 0xac2d378a;
  uStack_2c = 0xe8cfd6e;
  iVar3 = FUN_1448a256a(param_1);
  if (iVar3 < 0) {
    if (*(char *)((longlong)param_1 + 0x2b) == '\x01') {
      uVar2 = 2;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x2b) != '\x02') goto LAB_140a6a400;
      *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
      uVar2 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x2c) = uVar2;
  }
LAB_140a6a400:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6a4bc FUN_140a6a4bc body=104 status=ok
// SIG undefined FUN_140a6a4bc(void)

undefined8 FUN_140a6a4bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_140a6a526(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6a526 FUN_140a6a526 body=187 status=ok
// SIG undefined FUN_140a6a526(void)

undefined8 FUN_140a6a526(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  undefined1 local_24 [12];
  ulonglong local_18;
  
  lVar2 = DAT_14cb84f20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb84f20 == 0) {
    uVar3 = 0;
    goto LAB_140a6a5a7;
  }
  FUN_1400f0e12(param_1,local_24,1);
  if (((*param_1 == 0) || (iVar1 = param_1[1], iVar1 == 0)) || (*param_1 == DAT_14c948000)) {
LAB_140a6a5c5:
    local_28 = DAT_14c948620;
    local_30 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (param_1[9] < 1)) {
      param_1 = param_1 + 2;
    }
    else {
      param_1 = *(int **)(param_1 + 6);
    }
    if (iVar1 < 1) goto LAB_140a6a5c5;
    local_28 = param_1[2];
    local_30 = *(undefined8 *)param_1;
  }
  uVar3 = FUN_140a6a5e2(lVar2,&local_30,local_24);
LAB_140a6a5a7:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6a5e2 FUN_140a6a5e2 body=176 status=ok
// SIG undefined FUN_140a6a5e2(void)

longlong * FUN_140a6a5e2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1402796c0();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_1402796c0();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_140a6a670;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140a6a670:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6a694 FUN_140a6a694 body=465 status=ok
// SIG undefined FUN_140a6a694(void)

undefined8
FUN_140a6a694(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_e8 = CONCAT71(local_e8._1_7_,param_8);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
            (*(longlong **)(param_1 + 0x20),param_3,param_4,param_5);
  lVar1 = local_88;
  local_98 = 0;
  uStack_90 = 0;
  lVar2 = (longlong)(int)uStack_80;
  if (lVar2 == 0) {
    local_a4 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_a0 = param_4;
  }
  else {
    lVar3 = 0;
    local_bc = param_4;
    local_b8 = param_2;
    do {
      local_d8 = *(undefined1 *)(lVar1 + 8 + lVar3);
      local_d0 = param_9;
      local_e0 = (longlong *)CONCAT44(local_e0._4_4_,param_7);
      local_e8 = param_6;
      local_c8 = &local_98;
      FUN_1406d6b62(param_1,param_3,*(undefined4 *)(lVar1 + lVar3),
                    *(undefined4 *)(lVar1 + 4 + lVar3));
      lVar3 = lVar3 + 0xc;
    } while (lVar2 * 0xc != lVar3);
    local_b0 = local_98;
    param_2 = local_b8;
    local_a0 = local_bc;
    local_a8 = (undefined4)uStack_90;
    local_a4 = uStack_90._4_4_;
  }
  local_e0 = (longlong *)&local_a0;
  local_9c = param_5;
  local_98 = 0;
  uStack_90 = 0;
  local_e8 = CONCAT44(local_e8._4_4_,param_7);
  FUN_140af7964(param_1,param_2,&local_b0,param_6);
  FUN_140af7df7(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6a866 FUN_140a6a866 body=69 status=ok
// SIG undefined FUN_140a6a866(void)

undefined8 FUN_140a6a866(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x120))();
  lVar2 = (**(code **)(*param_2 + 0x120))(param_2);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    uVar3 = FUN_140a6a8ba(lVar1,lVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140a6a8ba FUN_140a6a8ba body=115 status=ok
// SIG undefined FUN_140a6a8ba(void)

bool FUN_140a6a8ba(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_140a6a92e(param_1 + 0x48,param_2 + 0x48);
  if (((cVar1 == '\0') || (0.1 < ABS(*(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18)))) ||
     (0.1 < ABS(*(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c)))) {
    bVar2 = false;
  }
  else {
    bVar2 = ABS(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) <= 0.1;
  }
  return bVar2;
}



// FUNCTION 140a6a92e FUN_140a6a92e body=166 status=ok
// SIG undefined FUN_140a6a92e(void)

bool FUN_140a6a92e(float *param_1,float *param_2)

{
  bool bVar1;
  
  if ((((1.0 < ABS(*param_1 - *param_2)) || (1.0 < ABS(param_1[1] - param_2[1]))) ||
      (*(char *)(param_1 + 2) != *(char *)(param_2 + 2))) ||
     ((*(char *)((longlong)param_1 + 9) != *(char *)((longlong)param_2 + 9) ||
      (*(char *)((longlong)param_1 + 10) != *(char *)((longlong)param_2 + 10))))) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((ABS(*(double *)(param_1 + 4) - *(double *)(param_2 + 4)) <= 50.0) &&
       (ABS(*(double *)(param_1 + 6) - *(double *)(param_2 + 6)) <= 50.0)) {
      bVar1 = ABS(*(double *)(param_1 + 8) - *(double *)(param_2 + 8)) <= 50.0;
    }
  }
  return bVar1;
}



// FUNCTION 140a6a9d4 FUN_140a6a9d4 body=452 status=ok
// SIG undefined FUN_140a6a9d4(void)

void FUN_140a6a9d4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1 == param_2) {
    FUN_140a6ab98(param_1 + 6,param_2 + 6);
    *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
    FUN_140a6abe8(param_1 + 8,param_2 + 8);
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    FUN_140a6ab98(param_1 + 6,param_2 + 6);
    param_1[0x12] = param_2[0x12];
    param_2[0x12] = 0;
    plVar2 = (longlong *)param_2[0x13];
    plVar3 = (longlong *)param_1[0x13];
    if (plVar2 != plVar3) {
      param_2[0x13] = 0;
      param_1[0x13] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
    FUN_140a6abe8(param_1 + 8,param_2 + 8);
    FUN_1401d9a90(param_1 + 0x14);
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar6;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_2[0x16] = 0;
    param_2[0x17] = 0xf;
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((longlong)param_2 + 0xc1) = 0;
  return;
}



// FUNCTION 140a6ab98 FUN_140a6ab98 body=80 status=ok
// SIG undefined FUN_140a6ab98(void)

longlong * FUN_140a6ab98(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b9920(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140a6abe8 FUN_140a6abe8 body=93 status=ok
// SIG undefined FUN_140a6abe8(void)

longlong FUN_140a6abe8(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140d8edac(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 140a6ac46 FUN_140a6ac46 body=99 status=ok
// SIG undefined FUN_140a6ac46(void)

void FUN_140a6ac46(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_140a6acaa(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6acaa FUN_140a6acaa body=555 status=ok
// SIG undefined FUN_140a6acaa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140a6acaa(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  switchD_143c3d4dc::caseD_20();
  plVar9 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_14a1c8bcc);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_149e39474);
  if (((*(byte *)(plVar9 + 5) & 1) == 0) || (*(int *)(param_1 + 0x48) < 1)) {
    plVar9 = *(longlong **)(param_1 + 0x30);
    plVar5 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9);
    plVar8 = local_58;
    iVar1 = *(int *)((longlong)plVar5 + 0x5c);
    uVar4 = ((int)plVar5[0xb] + iVar1) - 1U & -iVar1;
    if (uVar4 == -iVar1) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      lVar3 = -((longlong)(int)(uVar4 + iVar1 + 0xf) + 0xfU & 0xfffffffffffffff0);
      plVar8 = (longlong *)((longlong)local_58 + lVar3);
      puVar7 = (undefined1 *)((longlong)local_58 + lVar3);
    }
    uVar11 = -(longlong)iVar1 & (ulonglong)(puVar7 + (longlong)iVar1 + -1);
    pcVar2 = *(code **)(*plVar5 + 0x2e8);
    *(undefined8 *)((longlong)plVar8 + -0x28) = 0x140a6ada0;
    (*pcVar2)(plVar5,uVar11,1);
    *(undefined8 *)((longlong)plVar8 + -0x28) = 0x140a6adb1;
    FUN_14483b62e(plVar5,param_2,plVar9,uVar11);
    pcVar2 = *(code **)(*plVar5 + 0x2f0);
    *(undefined8 *)((longlong)plVar8 + -0x28) = 0x140a6adce;
    (*pcVar2)(plVar5,uVar11,1);
    plVar9 = plVar8;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 + 0x18 != param_1 + 0x40) {
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    FUN_140b3ddec(lVar3);
    iVar1 = *(int *)(lVar3 + 0x30);
    plVar9 = local_58;
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x28);
      lVar10 = 0;
      do {
        plVar9 = *(longlong **)(lVar3 + lVar10);
        uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_1400021e4(plVar9 + 2,local_58);
        FUN_14483b62e(uVar6,param_2,plVar9,0);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 8;
        plVar9 = local_58;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar9 + -0x28) = &UNK_140a6adfc;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6aeda thunk_FUN_140a6aedf body=5 status=ok
// SIG undefined thunk_FUN_140a6aedf(void)

void thunk_FUN_140a6aedf(longlong *param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  ulonglong *puStack_58;
  uint uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    iVar9 = (int)param_1[1];
    uVar6 = param_3 + (iVar9 == 0);
    *(uint *)(param_1 + 1) = uVar6 + iVar9;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar9) < uVar6) {
      FUN_144a2dbb8(param_1,iVar9);
    }
    iVar9 = iVar9 + -1 + (uint)(iVar9 == 0);
    lVar2 = (longlong)iVar9 * 2;
    lVar8 = *param_1 + lVar2;
    puVar5 = (undefined2 *)FUN_1446e71a3(lVar8,param_3,param_2,param_3);
    if (puVar5 == (undefined2 *)0x0) {
      iVar9 = 0;
      puStack_58 = param_2;
      uStack_4c = param_3;
      if (0 < (int)param_3) {
        uVar6 = 0x7fffffff;
        uVar7 = param_3;
        do {
          if (uVar6 == 0) {
            iVar9 = -1;
            break;
          }
          iVar3 = iVar9;
          if (((((ulonglong)puStack_58 & 7) == 0) && (uStack_4c = uVar7, 7 < uVar7)) &&
             (uVar4 = uVar6, 7 < (int)uVar6)) {
            while (uVar6 = uVar4, iVar3 = iVar9, uVar7 = uStack_4c,
                  (*puStack_58 & 0x8080808080808080) == 0) {
              puStack_58 = puStack_58 + 1;
              iVar9 = iVar9 + 8;
              uVar7 = uStack_4c - 8;
              uVar6 = uVar4 - 8;
              bVar1 = (int)uStack_4c < 0x10;
              iVar3 = iVar9;
              uStack_4c = uVar7;
              if ((bVar1) || (bVar1 = uVar4 < 0x10, uVar4 = uVar6, bVar1)) break;
            }
          }
LAB_140a6b014:
          do {
            iVar9 = iVar3;
            if (((int)uVar7 < 1) || ((int)uVar6 < 1)) break;
            uVar4 = FUN_14003e942(&puStack_58,&uStack_4c);
            uVar7 = uStack_4c;
            if (uVar4 < 0x10000) {
              uVar6 = uVar6 - 1;
              iVar3 = iVar9 + 1;
              if (0x7f < uVar4) goto LAB_140a6b014;
            }
            else {
              if (1 < uVar6) {
                uVar6 = uVar6 - 2;
                iVar3 = iVar9 + 2;
                goto LAB_140a6b014;
              }
              uVar6 = 0;
            }
            iVar9 = iVar9 + 1;
            iVar3 = iVar9;
          } while (((ulonglong)puStack_58 & 7) != 0);
        } while (0 < (int)uVar7);
      }
      lVar8 = param_1[1];
      *(uint *)(param_1 + 1) = (int)lVar8 + (iVar9 - param_3);
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar8) < iVar9 - param_3) {
        FUN_144a2dbb8(param_1);
      }
      puVar5 = (undefined2 *)FUN_1446e71a3(lVar2 + *param_1,iVar9,param_2,param_3);
    }
    else {
      iVar3 = (int)((ulonglong)((longlong)puVar5 - lVar8) >> 1);
      if (iVar3 < (int)param_3) {
        FUN_1409ee492(param_1,iVar9 + iVar3 + 1,0);
      }
    }
    *puVar5 = 0;
  }
  if ((uStack_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6aedf FUN_140a6aedf body=506 status=ok
// SIG undefined FUN_140a6aedf(void)

void FUN_140a6aedf(longlong *param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    iVar9 = (int)param_1[1];
    uVar6 = param_3 + (iVar9 == 0);
    *(uint *)(param_1 + 1) = uVar6 + iVar9;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar9) < uVar6) {
      FUN_144a2dbb8(param_1,iVar9);
    }
    iVar9 = iVar9 + -1 + (uint)(iVar9 == 0);
    lVar2 = (longlong)iVar9 * 2;
    lVar8 = *param_1 + lVar2;
    puVar5 = (undefined2 *)FUN_1446e71a3(lVar8,param_3,param_2,param_3);
    if (puVar5 == (undefined2 *)0x0) {
      iVar9 = 0;
      local_58 = param_2;
      local_4c = param_3;
      if (0 < (int)param_3) {
        uVar6 = 0x7fffffff;
        uVar7 = param_3;
        do {
          if (uVar6 == 0) {
            iVar9 = -1;
            break;
          }
          iVar3 = iVar9;
          if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar7, 7 < uVar7)) &&
             (uVar4 = uVar6, 7 < (int)uVar6)) {
            while (uVar6 = uVar4, iVar3 = iVar9, uVar7 = local_4c,
                  (*local_58 & 0x8080808080808080) == 0) {
              local_58 = local_58 + 1;
              iVar9 = iVar9 + 8;
              uVar7 = local_4c - 8;
              uVar6 = uVar4 - 8;
              bVar1 = (int)local_4c < 0x10;
              iVar3 = iVar9;
              local_4c = uVar7;
              if ((bVar1) || (bVar1 = uVar4 < 0x10, uVar4 = uVar6, bVar1)) break;
            }
          }
LAB_140a6b014:
          do {
            iVar9 = iVar3;
            if (((int)uVar7 < 1) || ((int)uVar6 < 1)) break;
            uVar4 = FUN_14003e942(&local_58,&local_4c);
            uVar7 = local_4c;
            if (uVar4 < 0x10000) {
              uVar6 = uVar6 - 1;
              iVar3 = iVar9 + 1;
              if (0x7f < uVar4) goto LAB_140a6b014;
            }
            else {
              if (1 < uVar6) {
                uVar6 = uVar6 - 2;
                iVar3 = iVar9 + 2;
                goto LAB_140a6b014;
              }
              uVar6 = 0;
            }
            iVar9 = iVar9 + 1;
            iVar3 = iVar9;
          } while (((ulonglong)local_58 & 7) != 0);
        } while (0 < (int)uVar7);
      }
      lVar8 = param_1[1];
      *(uint *)(param_1 + 1) = (int)lVar8 + (iVar9 - param_3);
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar8) < iVar9 - param_3) {
        FUN_144a2dbb8(param_1);
      }
      puVar5 = (undefined2 *)FUN_1446e71a3(lVar2 + *param_1,iVar9,param_2,param_3);
    }
    else {
      iVar3 = (int)((ulonglong)((longlong)puVar5 - lVar8) >> 1);
      if (iVar3 < (int)param_3) {
        FUN_1409ee492(param_1,iVar9 + iVar3 + 1,0);
      }
    }
    *puVar5 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a6b0da FUN_140a6b0da body=80 status=ok
// SIG undefined FUN_140a6b0da(void)

void FUN_140a6b0da(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_140a6b12c(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6b12c FUN_140a6b12c body=53 status=ok
// SIG undefined FUN_140a6b12c(void)

undefined8 FUN_140a6b12c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cb1c7e0,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 140a6b162 FUN_140a6b162 body=25 status=ok
// SIG undefined FUN_140a6b162(void)

char FUN_140a6b162(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  return (cVar1 != '\x02') * '\x02';
}



// FUNCTION 140a6b17c FUN_140a6b17c body=485 status=ok
// SIG undefined FUN_140a6b17c(void)

undefined8 FUN_140a6b17c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x4c) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x48), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0)) &&
      (((int)plVar8[2] == *(int *)(lVar2 + 0x4c) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar2 = *plVar8, lVar2 != 0)))))))) {
    if (DAT_14cb652c0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148715fe1;
      local_50 = FUN_146508b0f;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar8 = (longlong *)FUN_144718840(lVar2,DAT_14cb652c0);
    if (plVar8 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar5 = FUN_140a6b362(*(longlong *)(param_1 + 0x48) + 0x80);
      if (((*(byte *)(lVar4 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar9);
          if (((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
             (*(longlong *)(lVar3 + 0xa8) == lVar5)) {
            uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(byte *)(lVar3 + 0x248) >> 1) &
                    0xffffffffffffff01;
            goto LAB_140a6b287;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar9);
      }
      uVar6 = 0;
LAB_140a6b287:
      if (*(char *)(lVar2 + 0x98) != (char)uVar6) {
        uVar7 = CONCAT71((int7)(uVar6 >> 8),2);
        goto LAB_140a6b291;
      }
    }
  }
  uVar7 = 0;
LAB_140a6b291:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6b362 FUN_140a6b362 body=138 status=ok
// SIG undefined FUN_140a6b362(void)

longlong FUN_140a6b362(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb8b8f8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb8b8f8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a6b3ed FUN_140a6b3ed body=49 status=ok
// SIG undefined FUN_140a6b3ed(void)

longlong FUN_140a6b3ed(void)

{
  if (DAT_14cc24998 == 0) {
    FUN_140f50038(&DAT_14cc24998,&PTR_s__Script_GeometryCollectionNodes_14be248e8);
  }
  return DAT_14cc24998;
}



// FUNCTION 140a6b41e FUN_140a6b41e body=125 status=ok
// SIG undefined FUN_140a6b41e(void)

undefined8 *
FUN_140a6b41e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x10))(DAT_14c8407a8,param_2,*param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_149e142b8;
  uVar1 = (**(code **)(*(longlong *)param_1[1] + 0x70))();
  param_1[2] = uVar1;
  return param_1;
}



// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1452b92b0 FUN_1452b92b0 body=496 status=ok
// SIG undefined FUN_1452b92b0(void)

ulonglong FUN_1452b92b0(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  FUN_144f16220(lVar3,0);
  *(undefined8 *)(lVar3 + 0x3f0) = 120000;
  *(code **)(lVar3 + 0x418) = FUN_1452bae20;
  *(code **)(lVar3 + 0x420) = FUN_1452b9de0;
  *(undefined1 *)(lVar3 + 0x489) = 3;
  FUN_14550cb30(lVar3 + 0x428,param_1,&PTR_DAT_149d26770);
  FUN_144f07cf0(lVar3 + 0x450,0x10000);
  FUN_14550c040(lVar3 + 0x3a0);
  FUN_14550c000(param_1,lVar3 + 0x3a0);
  bVar4 = false;
  uVar7 = 0;
  pcVar9 = *(char **)(lVar3 + 0x160);
  do {
    if ((pcVar9 == (char *)0x0) || (cVar5 = *pcVar9, pcVar10 = pcVar9, cVar5 == '\0')) break;
    do {
      if (cVar5 == '=') break;
      cVar5 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    pcVar1 = pcVar10 + 1;
    while ((cVar5 != '\0' && (cVar5 != ';'))) {
      pcVar2 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar5 = *pcVar2;
    }
    iVar6 = FUN_144f195b0(pcVar9,"AUTH=+LOGIN",0xb);
    if (iVar6 == 0) {
      iVar6 = FUN_144f195b0(pcVar9,"AUTH=",5);
      bVar4 = false;
      if (iVar6 == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = FUN_14550c9f0(lVar3 + 0x428,pcVar1,(longlong)pcVar10 - (longlong)pcVar1);
      }
    }
    else {
      bVar4 = true;
      *(undefined2 *)(lVar3 + 0x442) = 0;
    }
    if (*pcVar10 == ';') {
      pcVar10 = pcVar10 + 1;
    }
    pcVar9 = pcVar10;
  } while (uVar7 == 0);
  if (bVar4) {
    *(undefined1 *)(lVar3 + 0x489) = 1;
  }
  else if (*(short *)(lVar3 + 0x442) == 0) {
    *(undefined1 *)(lVar3 + 0x489) = 0;
  }
  else {
    *(char *)(lVar3 + 0x489) = (*(short *)(lVar3 + 0x442) == -0x21) + '\x02';
  }
  if (uVar7 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 1;
    *(undefined2 *)(lVar3 + 0x484) = 0x2a;
    uVar8 = FUN_1452b9560(param_1,param_2);
  }
  else {
    uVar8 = (ulonglong)uVar7;
  }
  return uVar8;
}



// FUNCTION 1452b94a0 FUN_1452b94a0 body=181 status=ok
// SIG undefined FUN_1452b94a0(void)

undefined8 FUN_1452b94a0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  
  if ((param_3 == '\0') && (*(char *)(param_2 + 0x2d6) != '\0')) {
    iVar1 = FUN_1452b9940(param_1,"LOGOUT");
    if (iVar1 == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0xe;
      FUN_1452bb300(param_1,param_2,1);
    }
  }
  FUN_14550c730(param_2 + 0x3a0);
  FUN_144f07d10(param_2 + 0x450);
  FUN_14550c900(param_2,*(undefined2 *)(param_2 + 0x444));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x470));
  *(undefined8 *)(param_2 + 0x470) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x478));
  *(undefined8 *)(param_2 + 0x478) = 0;
  return 0;
}



// FUNCTION 1452b9560 FUN_1452b9560 body=141 status=ok
// SIG undefined FUN_1452b9560(void)

void FUN_1452b9560(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 1) != 0) &&
     (*(char *)(lVar1 + 0x48b) == '\0')) {
    local_res8[0] = '\0';
    iVar2 = FUN_144f13f00(param_1,0,0,local_res8);
    *(char *)(lVar1 + 0x48b) = local_res8[0];
    if (iVar2 != 0) {
      return;
    }
    if (local_res8[0] == '\0') {
      return;
    }
  }
  FUN_14550be10(param_1,lVar1 + 0x3a0,0,0);
  *(bool *)param_2 = *(int *)(lVar1 + 0x480) == 0;
  return;
}



// FUNCTION 1452b9600 FUN_1452b9600 body=81 status=ok
// SIG undefined FUN_1452b9600(void)

undefined8 FUN_1452b9600(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1452b9560();
  if (((int)uVar1 == 0) && (*param_2 != (char)uVar1)) {
    if (**(int **)(param_1 + 0x1a8) != 0) {
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1452b9660 FUN_1452b9660 body=78 status=ok
// SIG undefined FUN_1452b9660(void)

undefined8 FUN_1452b9660(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x50);
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(undefined1 *)(param_2 + 0x2e4) = 0;
  return 0;
}



// FUNCTION 1452b96b0 FUN_1452b96b0 body=82 status=ok
// SIG undefined FUN_1452b96b0(void)

void FUN_1452b96b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14550c820(param_3);
  if (lVar1 != 0) {
    FUN_1452b9940(param_1,"AUTHENTICATE %s %s",param_2,lVar1);
    return;
  }
  FUN_1452b9940(param_1,"AUTHENTICATE %s",param_2);
  return;
}



// FUNCTION 1452b9710 FUN_1452b9710 body=60 status=ok
// SIG undefined FUN_1452b9710(void)

void FUN_1452b9710(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = FUN_14550c820(param_3);
  FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,uVar2);
  return;
}



// FUNCTION 1452b9770 FUN_1452b9770 body=163 status=ok
// SIG undefined FUN_1452b9770(void)

undefined8 FUN_1452b9770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0xcd8) + uVar3) != '\0');
  if (uVar3 < 3) {
    FUN_14550c7c0(param_2,&DAT_14996de1b,0,0);
    return 0;
  }
  pcVar2 = (char *)(*(longlong *)(param_1 + 0xcd8) + 2);
  while( true ) {
    uVar4 = uVar4 - 1;
    if ((*pcVar2 != ' ') && (*pcVar2 != '\t')) break;
    pcVar2 = pcVar2 + 1;
  }
  while (uVar4 != 0) {
    lVar1 = uVar4 - 1;
    uVar4 = uVar4 - 1;
    if ((0x20 < (byte)pcVar2[lVar1]) ||
       ((0x100002600U >> ((longlong)pcVar2[lVar1] & 0x3fU) & 1) == 0)) goto LAB_1452b97dd;
  }
  uVar4 = 0xffffffffffffffff;
LAB_1452b97dd:
  pcVar2[uVar4 + 1] = '\0';
  FUN_14550c7c0(param_2,pcVar2,uVar4 + 1,0);
  return 0;
}



// FUNCTION 1452b9820 FUN_1452b9820 body=282 status=ok
// SIG undefined FUN_1452b9820(void)

undefined8 FUN_1452b9820(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined1 local_28 [32];
  
  if (param_1 != (char *)0x0) {
    sVar6 = 0xffffffffffffffff;
    do {
      sVar6 = sVar6 + 1;
    } while (param_1[sVar6] != '\0');
    sVar4 = strcspn(param_1,"() {%*]\\\"");
    if (sVar6 == sVar4) {
      uVar5 = (*(code *)PTR__strdup_14c6d9f38)(param_1);
      return uVar5;
    }
    FUN_144f07cf0(local_28,2000);
    if ((param_2 != '\0') || (iVar3 = thunk_FUN_144f07eb0(local_28,&DAT_149981f00,1), iVar3 == 0)) {
      cVar2 = *param_1;
      while (cVar2 != '\0') {
        if (((cVar2 == '\\') || (cVar2 == '\"')) &&
           (iVar3 = thunk_FUN_144f07eb0(local_28,&DAT_149d26c24,1), iVar3 != 0)) {
          return 0;
        }
        iVar3 = thunk_FUN_144f07eb0(local_28,param_1,1);
        if (iVar3 != 0) {
          return 0;
        }
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        cVar2 = *pcVar1;
      }
      if ((param_2 != '\0') || (iVar3 = thunk_FUN_144f07eb0(local_28,&DAT_149981f00,1), iVar3 == 0))
      {
        uVar5 = FUN_144f07e80(local_28);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1452b9940 FUN_1452b9940 body=219 status=ok
// SIG undefined FUN_1452b9940(void)

void FUN_1452b9940(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(char *)(lVar2 + 0x48a) = *(char *)(lVar2 + 0x48a) + '\x01';
  uVar1 = *(undefined1 *)(lVar2 + 0x48a);
  local_res18 = param_3;
  local_res20 = param_4;
  iVar3 = FUN_144f16fd0(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) % 0x1a);
  FUN_144f2b7e0(lVar2 + 0x484,5,"%c%03d",iVar3 + 0x41,uVar1);
  FUN_144f07dc0(lVar2 + 0x450);
  iVar3 = FUN_144f07d70(lVar2 + 0x450,"%s %s",lVar2 + 0x484,param_2);
  if (iVar3 == 0) {
    uVar4 = FUN_144f07e80(lVar2 + 0x450);
    FUN_14550c260(param_1,lVar2 + 0x3a0,uVar4,&local_res18);
  }
  return;
}



// FUNCTION 1452b9a20 FUN_1452b9a20 body=789 status=ok
// SIG undefined FUN_1452b9a20(void)

ulonglong FUN_1452b9a20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  pcVar8 = (char *)(*(longlong *)(param_1 + 0x1260) + 1);
  pcVar9 = pcVar8;
  cVar2 = FUN_1452bb6c0(*pcVar8);
  pcVar6 = pcVar8;
  if (cVar2 != '\0') {
    do {
      pcVar6 = pcVar8 + 1;
      pcVar7 = pcVar8;
      cVar2 = FUN_1452bb6c0(pcVar8[1]);
      pcVar8 = pcVar6;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar9) {
      if ((pcVar9 < pcVar6) && (*pcVar7 == '/')) {
        pcVar8 = pcVar7;
      }
      uVar5 = FUN_1452ce930(pcVar9,(longlong)pcVar8 - (longlong)pcVar9,lVar1 + 8,0,3);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_1452b9abb;
    }
  }
  *(undefined8 *)(lVar1 + 8) = 0;
LAB_1452b9abb:
  cVar2 = *pcVar6;
  while( true ) {
    if (cVar2 != ';') {
      if (((*(longlong *)(lVar1 + 8) != 0) && (*(longlong *)(lVar1 + 0x18) == 0)) &&
         (*(longlong *)(lVar1 + 0x20) == 0)) {
        FUN_1452cbab0(*(undefined8 *)(param_1 + 0x1228),8,lVar1 + 0x38,0x40);
      }
      return (ulonglong)(-(uint)(*pcVar6 != '\0') & 3);
    }
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar6;
    if (cVar2 == '\0') {
      return 3;
    }
    while (cVar2 != '=') {
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      if (cVar2 == '\0') {
        return 3;
      }
    }
    uVar5 = FUN_1452ce930(pcVar6,(longlong)pcVar8 - (longlong)pcVar6,&local_res10,0,3);
    if ((int)uVar5 != 0) break;
    pcVar6 = pcVar8 + 1;
    pcVar9 = pcVar6;
    cVar2 = FUN_1452bb6c0(pcVar8[1]);
    while (cVar2 != '\0') {
      pcVar8 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar2 = FUN_1452bb6c0(*pcVar8);
    }
    uVar3 = FUN_1452ce930(pcVar9,(longlong)pcVar6 - (longlong)pcVar9,&local_res8,local_res18,3);
    if (uVar3 != 0) {
      (*(code *)PTR_free_14c6d9f28)(local_res10);
      return (ulonglong)uVar3;
    }
    iVar4 = FUN_144f19540(local_res10,"UIDVALIDITY");
    if ((iVar4 == 0) || (*(longlong *)(lVar1 + 0x10) != 0)) {
      iVar4 = FUN_144f19540(local_res10,&DAT_149d26818);
      if ((iVar4 == 0) || (*(longlong *)(lVar1 + 0x18) != 0)) {
        iVar4 = FUN_144f19540(local_res10,"MAILINDEX");
        if ((iVar4 == 0) || (*(longlong *)(lVar1 + 0x20) != 0)) {
          iVar4 = FUN_144f19540(local_res10,"SECTION");
          if ((iVar4 == 0) || (*(longlong *)(lVar1 + 0x28) != 0)) {
            iVar4 = FUN_144f19540(local_res10,"PARTIAL");
            if ((iVar4 == 0) || (*(longlong *)(lVar1 + 0x30) != 0)) {
              (*(code *)PTR_free_14c6d9f28)(local_res10);
              (*(code *)PTR_free_14c6d9f28)(local_res8);
              return 3;
            }
            if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
              *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
            }
            *(longlong *)(lVar1 + 0x30) = local_res8;
          }
          else {
            if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
              *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
            }
            *(longlong *)(lVar1 + 0x28) = local_res8;
          }
        }
        else {
          if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
            *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
          }
          *(longlong *)(lVar1 + 0x20) = local_res8;
        }
      }
      else {
        if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
          *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
        }
        *(longlong *)(lVar1 + 0x18) = local_res8;
      }
    }
    else {
      if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
        *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
      }
      *(longlong *)(lVar1 + 0x10) = local_res8;
    }
    local_res8 = 0;
    (*(code *)PTR_free_14c6d9f28)(local_res10);
    (*(code *)PTR_free_14c6d9f28)(local_res8);
    cVar2 = *pcVar6;
  }
  return uVar5;
}



// FUNCTION 1452b9d40 FUN_1452b9d40 body=155 status=ok
// SIG undefined FUN_1452b9d40(void)

bool FUN_1452b9d40(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  
  pcVar1 = (char *)(param_1 + param_2);
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  pcVar3 = (char *)(param_1 + 2);
  if ((pcVar3 < pcVar1) && ((byte)(*pcVar3 - 0x30U) < 10)) {
    do {
      pcVar4 = pcVar3 + 1;
      if (pcVar1 <= pcVar4) {
        if (pcVar4 == pcVar1) {
          return false;
        }
LAB_1452b9d97:
        if (*pcVar4 != ' ') {
          return false;
        }
        pcVar3 = pcVar3 + 2;
        goto LAB_1452b9d9f;
      }
      if (*pcVar4 < '0') goto LAB_1452b9d97;
      pcVar3 = pcVar4;
    } while (*pcVar4 < ':');
  }
  else {
LAB_1452b9d9f:
    pcVar4 = pcVar3 + lVar5;
    if ((pcVar4 <= pcVar1) && (iVar2 = FUN_144f195b0(pcVar3,param_3), iVar2 != 0)) {
      if (*pcVar4 == ' ') {
        return true;
      }
      return pcVar4 + 2 == pcVar1;
    }
  }
  return false;
}



// FUNCTION 1452b9de0 FUN_1452b9de0 body=1231 status=ok
// SIG undefined FUN_1452b9de0(void)

undefined8
FUN_1452b9de0(longlong param_1,longlong param_2,short *param_3,ulonglong param_4,undefined4 *param_5
             )

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  char *pcVar7;
  size_t _Size;
  short *psVar9;
  undefined8 uVar10;
  size_t sVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  _Size = 0xffffffffffffffff;
  do {
    sVar8 = _Size;
    _Size = sVar8 + 1;
  } while (*(char *)(param_2 + 0x484 + _Size) != '\0');
  if (((sVar8 + 2 <= param_4) &&
      (iVar3 = memcmp((void *)(param_2 + 0x484),param_3,_Size), iVar3 == 0)) &&
     (*(char *)(_Size + (longlong)param_3) == ' ')) {
    param_4 = param_4 + (-1 - _Size);
    if ((1 < param_4) && (*(short *)((longlong)param_3 + sVar8 + 2) == 0x4b4f)) {
      *param_5 = 1;
      return 1;
    }
    if (((6 < param_4) && (*(int *)((longlong)param_3 + sVar8 + 2) == 0x41455250)) &&
       ((*(short *)((longlong)param_3 + sVar8 + 6) == 0x5455 &&
        (*(char *)((longlong)param_3 + sVar8 + 8) == 'H')))) {
      *param_5 = 3;
      return 1;
    }
    *param_5 = 2;
    return 1;
  }
  if ((param_4 < 2) || (*param_3 != 0x202a)) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      return 0;
    }
    if (param_4 == 3) {
      if ((char)*param_3 == '+') goto LAB_1452ba26e;
    }
    else if (param_4 < 2) {
      return 0;
    }
    if (*param_3 == 0x202b) {
LAB_1452ba26e:
      if ((*(int *)(param_2 + 0x480) != 5) && (*(int *)(param_2 + 0x480) != 0xb)) {
        FUN_144f14b70(param_1,"Unexpected continuation response");
        *param_5 = 0xffffffff;
        return 1;
      }
      *param_5 = 0x2b;
      return 1;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x480);
    if (iVar3 == 2) {
      psVar9 = (short *)((longlong)param_3 + param_4);
      psVar5 = param_3 + 1;
      if ((psVar5 < psVar9) && ((byte)((char)*psVar5 - 0x30U) < 10)) {
        while( true ) {
          psVar4 = (short *)((longlong)psVar5 + 1);
          if (psVar9 <= psVar4) break;
          if (*(char *)psVar4 < '0') goto LAB_1452ba1de;
          psVar5 = psVar4;
          if ('9' < *(char *)psVar4) {
            return 0;
          }
        }
        if (psVar4 == psVar9) {
          return 0;
        }
LAB_1452ba1de:
        if (*(char *)psVar4 != ' ') {
          return 0;
        }
        psVar5 = psVar5 + 1;
      }
      psVar4 = psVar5 + 5;
      if (psVar9 < psVar4) {
        return 0;
      }
      uVar10 = 10;
      pcVar7 = "CAPABILITY";
    }
    else {
      if (iVar3 == 7) {
        psVar5 = param_3 + 1;
        if (*(longlong *)(lVar1 + 0x40) == 0) {
          psVar9 = (short *)((longlong)param_3 + param_4);
          psVar4 = psVar5;
          if ((psVar5 < psVar9) && ((byte)((char)*psVar5 - 0x30U) < 10)) {
            while( true ) {
              psVar6 = (short *)((longlong)psVar4 + 1);
              if (psVar9 <= psVar6) break;
              if (*(char *)psVar6 < '0') goto LAB_1452b9ff3;
              psVar4 = psVar6;
              if ('9' < *(char *)psVar6) {
                return 0;
              }
            }
            if (psVar6 == psVar9) {
              return 0;
            }
LAB_1452b9ff3:
            if (*(char *)psVar6 != ' ') {
              return 0;
            }
            psVar4 = psVar4 + 1;
          }
          if (psVar9 < psVar4 + 2) {
            return 0;
          }
          iVar3 = FUN_144f195b0(psVar4,&DAT_149d267d4,4);
          if (iVar3 == 0) {
            return 0;
          }
          if (((char)psVar4[2] != ' ') && (psVar4 + 3 != psVar9)) {
            return 0;
          }
        }
        psVar9 = (short *)((longlong)param_3 + param_4);
        if ((*(longlong *)(lVar1 + 0x40) != 0) &&
           (cVar2 = FUN_1452b9d40(param_3,param_4), cVar2 == '\0')) {
          iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),"STORE");
          if (iVar3 != 0) {
            if ((psVar5 < psVar9) && ((byte)((char)*psVar5 - 0x30U) < 10)) {
              do {
                psVar4 = (short *)((longlong)psVar5 + 1);
                if (psVar9 <= psVar4) {
                  if (psVar4 != psVar9) {
LAB_1452ba098:
                    if (*(char *)psVar4 == ' ') {
                      psVar5 = psVar5 + 1;
                      goto LAB_1452ba0a0;
                    }
                  }
                  break;
                }
                if (*(char *)psVar4 < '0') goto LAB_1452ba098;
                psVar5 = psVar4;
              } while (*(char *)psVar4 < ':');
            }
            else {
LAB_1452ba0a0:
              if ((((short *)((longlong)psVar5 + 5U) <= psVar9) &&
                  (iVar3 = FUN_144f195b0(psVar5,"FETCH",5), iVar3 != 0)) &&
                 ((*(char *)((longlong)psVar5 + 5U) == ' ' ||
                  ((short *)((longlong)psVar5 + 7U) == psVar9)))) goto LAB_1452ba223;
            }
          }
          iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),"SELECT");
          if (((((iVar3 == 0) &&
                (iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),"EXAMINE"), iVar3 == 0)) &&
               (iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),"SEARCH"), iVar3 == 0)) &&
              ((iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),"EXPUNGE"), iVar3 == 0 &&
               (iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),&DAT_149d26810), iVar3 == 0))))
             && ((iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),&DAT_149d26818), iVar3 == 0 &&
                 (iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),"GETQUOTAROOT"), iVar3 == 0)))
             ) {
            iVar3 = FUN_144f19540(*(undefined8 *)(lVar1 + 0x40),&DAT_149d26830);
            if (iVar3 == 0) {
              return 0;
            }
            *param_5 = 0x2a;
            return 1;
          }
        }
        goto LAB_1452ba223;
      }
      if (iVar3 == 8) goto LAB_1452ba223;
      if (iVar3 == 9) {
        psVar9 = (short *)((longlong)param_3 + param_4);
        psVar5 = param_3 + 1;
        if ((psVar5 < psVar9) && ((byte)((char)*psVar5 - 0x30U) < 10)) {
          while( true ) {
            psVar4 = (short *)((longlong)psVar5 + 1);
            if (psVar9 <= psVar4) break;
            if (*(char *)psVar4 < '0') goto LAB_1452b9f8e;
            psVar5 = psVar4;
            if ('9' < *(char *)psVar4) {
              return 0;
            }
          }
          if (psVar4 == psVar9) {
            return 0;
          }
LAB_1452b9f8e:
          if (*(char *)psVar4 != ' ') {
            return 0;
          }
          psVar5 = psVar5 + 1;
        }
        psVar4 = (short *)((longlong)psVar5 + 5);
        if (psVar9 < psVar4) {
          return 0;
        }
        uVar10 = 5;
        pcVar7 = "FETCH";
      }
      else {
        if (iVar3 != 0xd) {
          return 0;
        }
        psVar9 = (short *)((longlong)param_3 + param_4);
        psVar5 = param_3 + 1;
        if ((psVar5 < psVar9) && ((byte)((char)*psVar5 - 0x30U) < 10)) {
          while( true ) {
            psVar4 = (short *)((longlong)psVar5 + 1);
            if (psVar9 <= psVar4) break;
            if (*(char *)psVar4 < '0') goto LAB_1452b9f3e;
            psVar5 = psVar4;
            if ('9' < *(char *)psVar4) {
              return 0;
            }
          }
          if (psVar4 == psVar9) {
            return 0;
          }
LAB_1452b9f3e:
          if (*(char *)psVar4 != ' ') {
            return 0;
          }
          psVar5 = psVar5 + 1;
        }
        psVar4 = psVar5 + 3;
        if (psVar9 < psVar4) {
          return 0;
        }
        uVar10 = 6;
        pcVar7 = "SEARCH";
      }
    }
    iVar3 = FUN_144f195b0(psVar5,pcVar7,uVar10);
    if ((iVar3 != 0) &&
       (((char)*psVar4 == ' ' || (psVar4 + 1 == (short *)((longlong)param_3 + param_4))))) {
LAB_1452ba223:
      *param_5 = 0x2a;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452ba2b0 FUN_1452ba2b0 body=209 status=ok
// SIG undefined FUN_1452ba2b0(void)

void FUN_1452ba2b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  cVar1 = FUN_144f14080(param_2,0);
  if ((cVar1 == '\0') && (iVar2 = FUN_144f0d480(param_1,param_2,0), iVar2 != 0)) {
    return;
  }
  iVar2 = FUN_144f13f00(param_1,0,0,local_res10);
  if (iVar2 == 0) {
    *(undefined1 *)(param_2 + 0x48b) = local_res10[0];
    if (*(int *)(param_2 + 0x480) != 4) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 4;
    }
    if (*(char *)(param_2 + 0x48b) != '\0') {
      *(undefined1 *)(param_2 + 0x2e4) = 1;
      *(undefined ***)(param_2 + 0x2e8) = &PTR_s_IMAPS_149d266e0;
      *(undefined2 *)(param_2 + 0x440) = 0;
      *(undefined2 *)(param_2 + 0x444) = 0;
      *(undefined1 *)(param_2 + 0x48d) = 0;
      iVar2 = FUN_1452b9940(param_1,"CAPABILITY");
      if (iVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 2;
      }
    }
  }
  return;
}



// FUNCTION 1452ba390 FUN_1452ba390 body=197 status=ok
// SIG undefined FUN_1452ba390(void)

int FUN_1452ba390(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (*(longlong *)(param_1 + 0x13a0) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
    return 0;
  }
  puVar2 = (undefined1 *)FUN_1452b9820(*(undefined8 *)(param_2 + 0x150),0);
  puVar3 = (undefined1 *)FUN_1452b9820(*(undefined8 *)(param_2 + 0x158),0);
  puVar5 = &DAT_14996de1b;
  if (puVar3 != (undefined1 *)0x0) {
    puVar5 = puVar3;
  }
  puVar4 = &DAT_14996de1b;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  iVar1 = FUN_1452b9940(param_1,"LOGIN %s %s",puVar4,puVar5);
  (*(code *)PTR_free_14c6d9f28)(puVar2);
  (*(code *)PTR_free_14c6d9f28)(puVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 6;
  }
  return iVar1;
}



// FUNCTION 1452ba460 FUN_1452ba460 body=243 status=ok
// SIG undefined FUN_1452ba460(void)

undefined8 FUN_1452ba460(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_res10 [2];
  
  if ((*(char *)(param_2 + 0x48c) != '\0') ||
     (cVar1 = FUN_14550cbc0(param_2 + 0x428,param_1), cVar1 == '\0')) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
    return 0;
  }
  uVar2 = FUN_14550cbe0(param_2 + 0x428,param_1,*(undefined1 *)(param_2 + 0x48f),local_res10);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (local_res10[0] != 1) {
    if ((*(char *)(param_2 + 0x48e) == '\0') && ((*(byte *)(param_2 + 0x489) & 1) != 0)) {
      uVar2 = FUN_1452ba390(param_1,param_2);
      return uVar2;
    }
    FUN_144f14ad0(param_1,"No known authentication mechanisms supported");
    return 0x43;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 5;
  return uVar2;
}



// FUNCTION 1452ba560 FUN_1452ba560 body=348 status=ok
// SIG undefined FUN_1452ba560(void)

int FUN_1452ba560(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  char *_Str;
  size_t sVar6;
  undefined1 *puVar7;
  undefined1 local_28 [32];
  
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  if (*(longlong *)(lVar5 + 0x40) != 0) {
    puVar7 = &DAT_14996de1b;
    if (*(undefined1 **)(lVar5 + 0x48) != (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(lVar5 + 0x48);
    }
    iVar3 = FUN_1452b9940(param_1,&DAT_149c07c50,*(longlong *)(lVar5 + 0x40),puVar7);
    goto LAB_1452ba698;
  }
  _Str = *(char **)(lVar5 + 8);
  if (_Str == (char *)0x0) {
    _Str = "";
LAB_1452ba658:
    lVar5 = (*(code *)PTR__strdup_14c6d9f38)(_Str);
  }
  else {
    sVar6 = 0xffffffffffffffff;
    do {
      sVar6 = sVar6 + 1;
    } while (_Str[sVar6] != '\0');
    sVar4 = strcspn(_Str,"() {%*]\\\"");
    if (sVar6 == sVar4) goto LAB_1452ba658;
    FUN_144f07cf0(local_28,2000);
    cVar2 = *_Str;
    while (cVar2 != '\0') {
      if (((cVar2 == '\\') || (cVar2 == '\"')) &&
         (iVar3 = thunk_FUN_144f07eb0(local_28,&DAT_149d26c24,1), iVar3 != 0)) {
        return 0x1b;
      }
      iVar3 = thunk_FUN_144f07eb0(local_28,_Str,1);
      if (iVar3 != 0) {
        return 0x1b;
      }
      pcVar1 = _Str + 1;
      _Str = _Str + 1;
      cVar2 = *pcVar1;
    }
    lVar5 = FUN_144f07e80(local_28);
  }
  if (lVar5 == 0) {
    return 0x1b;
  }
  iVar3 = FUN_1452b9940(param_1,"LIST \"%s\" *",lVar5);
  (*(code *)PTR_free_14c6d9f28)(lVar5);
LAB_1452ba698:
  if (iVar3 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 7;
  }
  return iVar3;
}



// FUNCTION 1452ba6c0 FUN_1452ba6c0 body=214 status=ok
// SIG undefined FUN_1452ba6c0(void)

int FUN_1452ba6c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  lVar5 = *(longlong *)(lVar1 + 0x18);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar1 + 0x20);
    if (lVar5 == 0) {
      FUN_144f14b70(param_1,"Cannot FETCH without a UID.");
      return 3;
    }
    puVar3 = *(undefined1 **)(lVar1 + 0x28);
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      puVar6 = &DAT_14996de1b;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
      iVar2 = FUN_1452b9940(param_1,"FETCH %s BODY[%s]<%s>",lVar5,puVar6,*(longlong *)(lVar1 + 0x30)
                           );
      goto LAB_1452ba763;
    }
    pcVar4 = "FETCH %s BODY[%s]";
  }
  else {
    puVar3 = *(undefined1 **)(lVar1 + 0x28);
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      puVar6 = &DAT_14996de1b;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
      iVar2 = FUN_1452b9940(param_1,"UID FETCH %s BODY[%s]<%s>",lVar5,puVar6,
                            *(longlong *)(lVar1 + 0x30));
      goto LAB_1452ba763;
    }
    pcVar4 = "UID FETCH %s BODY[%s]";
  }
  puVar6 = &DAT_14996de1b;
  if (puVar3 != (undefined1 *)0x0) {
    puVar6 = puVar3;
  }
  iVar2 = FUN_1452b9940(param_1,pcVar4,lVar5,puVar6);
LAB_1452ba763:
  if (iVar2 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 9;
  }
  return iVar2;
}



// FUNCTION 1452ba7a0 FUN_1452ba7a0 body=84 status=ok
// SIG undefined FUN_1452ba7a0(void)

undefined8 FUN_1452ba7a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x38) == 0) {
    FUN_144f14b70(param_1,"Cannot SEARCH without a query string.");
    return 3;
  }
  uVar1 = FUN_1452b9940(param_1,"SEARCH %s");
  if ((int)uVar1 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0xd;
  }
  return uVar1;
}



// FUNCTION 1452ba800 FUN_1452ba800 body=531 status=ok
// SIG undefined FUN_1452ba800(void)

undefined8 FUN_1452ba800(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (param_2 != 0x2a) {
    if ((*(char *)(param_1 + 0xab1) != '\0') && (cVar3 = FUN_144f14080(lVar1,0), cVar3 == '\0')) {
      if ((param_2 == 1) &&
         ((*(char *)(lVar1 + 0x48d) != '\0' && (*(char *)(lVar1 + 0x48c) == '\0')))) {
        uVar5 = FUN_1452b9940(param_1,"STARTTLS");
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 3;
        return uVar5;
      }
      if (1 < *(byte *)(param_1 + 0xab1)) {
        FUN_144f14b70(param_1,"STARTTLS not available.");
        return 0x40;
      }
    }
    uVar5 = FUN_1452ba460(param_1,lVar1);
    return uVar5;
  }
  pbVar6 = (byte *)(*(longlong *)(param_1 + 0xcd8) + 2);
LAB_1452ba861:
  do {
    bVar2 = *pbVar6;
    if (bVar2 == 0) {
      return 0;
    }
    do {
      if (((0x20 < bVar2) || ((0x100002200U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) &&
         (bVar2 != 10)) break;
      bVar2 = pbVar6[1];
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
    if (bVar2 == 0) {
      return 0;
    }
    bVar2 = *pbVar6;
    uVar7 = 0;
    do {
      if ((bVar2 < 0x21) && ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) break;
      bVar2 = pbVar6[uVar7 + 1];
      uVar7 = uVar7 + 1;
    } while (bVar2 != 0);
    if (uVar7 == 8) {
      if (*(longlong *)pbVar6 == 0x534c545452415453) {
        *(undefined1 *)(lVar1 + 0x48d) = 1;
        pbVar6 = pbVar6 + 8;
      }
      else {
LAB_1452ba927:
        if ((*(int *)pbVar6 == 0x48545541) && (pbVar6[4] == 0x3d)) {
          pbVar6 = pbVar6 + 5;
          uVar7 = uVar7 - 5;
          uVar4 = FUN_14550c920(pbVar6,uVar7,&local_res8);
          if ((uVar4 != 0) && (local_res8 == uVar7)) {
            *(ushort *)(lVar1 + 0x440) = *(ushort *)(lVar1 + 0x440) | uVar4;
          }
        }
LAB_1452ba960:
        pbVar6 = pbVar6 + uVar7;
      }
      goto LAB_1452ba861;
    }
    if (uVar7 == 0xd) {
      if (((*(longlong *)pbVar6 != 0x5349444e49474f4c) || (*(int *)(pbVar6 + 8) != 0x454c4241)) ||
         (pbVar6[0xc] != 0x44)) goto LAB_1452ba927;
      *(undefined1 *)(lVar1 + 0x48e) = 1;
      pbVar6 = pbVar6 + 0xd;
    }
    else {
      if (uVar7 != 7) {
        if (5 < uVar7) goto LAB_1452ba927;
        goto LAB_1452ba960;
      }
      if (((*(int *)pbVar6 != 0x4c534153) || (*(short *)(pbVar6 + 4) != 0x492d)) ||
         (pbVar6[6] != 0x52)) goto LAB_1452ba927;
      *(undefined1 *)(lVar1 + 0x48f) = 1;
      pbVar6 = pbVar6 + 7;
    }
  } while( true );
}



// FUNCTION 1452baa20 FUN_1452baa20 body=476 status=ok
// SIG undefined FUN_1452baa20(void)

undefined4 FUN_1452baa20(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  uVar9 = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (param_2 == 0x2a) {
    lVar2 = *(longlong *)(param_1 + 0xcd8);
    iVar4 = FUN_144f195b0(lVar2 + 2,"OK [UIDVALIDITY ",0x10);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar6 = (char *)(lVar2 + 0x14);
    do {
      if ((pcVar6[-2] == '\0') || (9 < (byte)(pcVar6[-2] - 0x30U))) {
LAB_1452baaf2:
        if (uVar9 == 0) {
          return 0;
        }
        break;
      }
      cVar1 = pcVar6[-1];
      if ((cVar1 == '\0') || ((cVar1 < '0' || ('9' < cVar1)))) {
        uVar9 = uVar9 + 1;
        goto LAB_1452baaf2;
      }
      cVar1 = *pcVar6;
      if (((cVar1 == '\0') || (cVar1 < '0')) || ('9' < cVar1)) {
        uVar9 = uVar9 + 2;
        goto LAB_1452baaf2;
      }
      cVar1 = pcVar6[1];
      if (((cVar1 == '\0') || (cVar1 < '0')) || ('9' < cVar1)) {
        uVar9 = uVar9 + 3;
        goto LAB_1452baaf2;
      }
      cVar1 = pcVar6[2];
      if (((cVar1 == '\0') || (cVar1 < '0')) || ('9' < cVar1)) {
        uVar9 = uVar9 + 4;
        goto LAB_1452baaf2;
      }
      uVar9 = uVar9 + 5;
      pcVar6 = pcVar6 + 5;
    } while (uVar9 < 0x14);
    if (*(char *)(lVar2 + 0x12 + uVar9) != ']') {
      return 0;
    }
    FUN_144f07cf0(local_28,0x14);
    iVar4 = thunk_FUN_144f07eb0(local_28,lVar2 + 0x12,uVar9);
    if (iVar4 == 0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar3 + 0x478));
      *(undefined8 *)(lVar3 + 0x478) = 0;
      uVar7 = FUN_144f07e80(local_28);
      *(undefined8 *)(lVar3 + 0x478) = uVar7;
      return 0;
    }
  }
  else {
    if (param_2 != 1) {
      FUN_144f14b70(param_1,"Select failed");
      return 0x43;
    }
    if (((*(longlong *)(lVar2 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x478) != 0)) &&
       (iVar4 = FUN_144f19540(), iVar4 == 0)) {
      FUN_144f14b70(param_1,"Mailbox UIDVALIDITY has changed");
      return 0x4e;
    }
    lVar8 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar2 + 8));
    *(longlong *)(lVar3 + 0x470) = lVar8;
    if (lVar8 != 0) {
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        uVar5 = FUN_1452ba560();
        return uVar5;
      }
      if (*(longlong *)(lVar2 + 0x38) != 0) {
        uVar5 = FUN_1452ba7a0();
        return uVar5;
      }
      uVar5 = FUN_1452ba6c0(param_1);
      return uVar5;
    }
  }
  return 0x1b;
}



// FUNCTION 1452bac00 FUN_1452bac00 body=536 status=ok
// SIG undefined FUN_1452bac00(void)

ulonglong FUN_1452bac00(longlong param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  char *local_res10;
  
  pcVar5 = *(char **)(param_1 + 0xcd8);
  uVar7 = 0;
  local_res8 = 0;
  if (param_3 != 0x2a) {
    FUN_144f25ce0(param_1,0xffffffffffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
    return 0x4e;
  }
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && (cVar2 != '{'))) {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  if ((((cVar2 == '{') &&
       (iVar3 = FUN_1452b1ac0(pcVar5 + 1,&local_res10,10,&local_res8), iVar3 == 0)) &&
      (1 < (longlong)local_res10 - (longlong)pcVar5)) &&
     (((*local_res10 == '}' && (local_res10[1] == '\r')) && (local_res10[2] == '\0')))) {
    FUN_144f14ad0(param_1,"Found %I64d bytes to download",local_res8);
    FUN_144f25ce0(param_1,local_res8);
    if (*(longlong *)(param_2 + 0x3a0) != 0) {
      uVar6 = *(ulonglong *)(param_2 + 0x3a8);
      if (local_res8 < *(ulonglong *)(param_2 + 0x3a8)) {
        uVar6 = local_res8;
      }
      if (uVar6 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
        return 0;
      }
      uVar4 = FUN_144f14dc0(param_1,1,*(longlong *)(param_2 + 0x3a0),uVar6);
      uVar7 = uVar4 & 0xffffffff;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + uVar6;
      FUN_144f14ad0(param_1,"Written %zu bytes, %I64u bytes are left for transfer",uVar6,
                    local_res8 - uVar6);
      if (uVar6 < *(ulonglong *)(param_2 + 0x3a8)) {
        memmove(*(void **)(param_2 + 0x3a0),(void *)((longlong)*(void **)(param_2 + 0x3a0) + uVar6),
                *(ulonglong *)(param_2 + 0x3a8) - uVar6);
        *(longlong *)(param_2 + 0x3a8) = *(longlong *)(param_2 + 0x3a8) - uVar6;
      }
      else {
        (*(code *)PTR_free_14c6d9f28)();
        *(undefined8 *)(param_2 + 0x3a0) = 0;
        *(undefined8 *)(param_2 + 0x3a8) = 0;
      }
    }
    if (*(ulonglong *)(param_1 + 0x100) == local_res8) {
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
    }
    else {
      *(ulonglong *)(param_1 + 0xf8) = local_res8;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x4d4) = 1;
      FUN_144f24c20(param_1,0,local_res8,0,0xffffffff);
    }
  }
  else {
    FUN_144f14b70(param_1,"Failed to parse FETCH response.");
    uVar7 = 8;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
  return uVar7;
}



// FUNCTION 1452bae20 FUN_1452bae20 body=1182 status=ok
// SIG undefined FUN_1452bae20(void)

ulonglong FUN_1452bae20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *puVar11;
  undefined8 local_48 [2];
  
  uVar4 = *(undefined8 *)(param_2 + 0x1a8);
  lVar2 = param_2 + 0x3a0;
  local_48[0] = 0;
  if (*(int *)(param_2 + 0x480) == 4) {
    uVar8 = FUN_1452ba2b0();
    return uVar8;
  }
  if (*(longlong *)(param_2 + 0x3d0) != 0) {
    uVar8 = FUN_14550c6b0(param_1,lVar2);
    return uVar8;
  }
  do {
    puVar11 = local_48;
    uVar9 = FUN_14550c3a0(param_1,uVar4,lVar2,local_res10,puVar11);
    uVar8 = uVar9 & 0xffffffff;
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (local_res10[0] == -1) {
      return 8;
    }
    if (local_res10[0] == 0) {
      return uVar8;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x480);
    switch(uVar3) {
    case 1:
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (local_res10[0] == 3) {
        *(undefined1 *)(lVar1 + 0x48c) = 1;
        FUN_144f14ad0(param_1,"PREAUTH connection, already authenticated");
      }
      else if (local_res10[0] != 1) {
        FUN_144f14b70(param_1,"Got unexpected imap-server response");
        return 8;
      }
      *(undefined2 *)(lVar1 + 0x440) = 0;
      *(undefined2 *)(lVar1 + 0x444) = 0;
      *(undefined1 *)(lVar1 + 0x48d) = 0;
      uVar7 = FUN_1452b9940(param_1,"CAPABILITY");
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 2;
      }
      break;
    case 2:
      uVar7 = FUN_1452ba800(param_1,local_res10[0],uVar3);
      uVar8 = (ulonglong)uVar7;
      break;
    case 3:
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(lVar1 + 0x3a8) != 0) {
        return 8;
      }
      if (local_res10[0] == 1) {
        uVar7 = FUN_1452ba2b0(param_1,lVar1);
        uVar8 = (ulonglong)uVar7;
      }
      else if (*(char *)(param_1 + 0xab1) == '\x01') {
        if ((*(char *)(lVar1 + 0x48c) == '\0') &&
           (cVar6 = FUN_14550cbc0(lVar1 + 0x428,param_1), cVar6 != '\0')) {
          uVar7 = FUN_14550cbe0(lVar1 + 0x428,param_1,*(undefined1 *)(lVar1 + 0x48f),local_res18);
          uVar8 = (ulonglong)uVar7;
          if (uVar7 == 0) {
            if (local_res18[0] == 1) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 5;
            }
            else if ((*(char *)(lVar1 + 0x48e) == '\0') && ((*(byte *)(lVar1 + 0x489) & 1) != 0)) {
              uVar7 = FUN_1452ba390(param_1,lVar1);
              uVar8 = (ulonglong)uVar7;
            }
            else {
              FUN_144f14ad0(param_1,"No known authentication mechanisms supported");
              uVar8 = 0x43;
            }
          }
        }
        else {
          uVar8 = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
        }
      }
      else {
        FUN_144f14b70(param_1,"STARTTLS denied");
        uVar8 = 0x40;
      }
      break;
    default:
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
      goto LAB_1452bb264;
    case 5:
      uVar7 = FUN_14550d000(param_2 + 0x428,param_1,local_res10[0],local_res20);
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        if (local_res20[0] == 0) {
          if ((*(char *)(param_2 + 0x48e) == '\0') && ((*(byte *)(param_2 + 0x489) & 1) != 0)) {
            uVar7 = FUN_1452ba390(param_1,param_2);
            uVar8 = (ulonglong)uVar7;
          }
          else {
            FUN_144f14b70(param_1,"Authentication cancelled");
            uVar8 = 0x43;
          }
        }
        else if (local_res20[0] == 2) goto LAB_1452bb0df;
      }
      break;
    case 6:
      uVar8 = 0;
      if (local_res10[0] == 1) {
LAB_1452bb0df:
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
      }
      else {
        FUN_144f14b70(param_1,"Access denied. %c",local_res10[0]);
        uVar8 = 0x43;
      }
      break;
    case 7:
    case 0xd:
      lVar5 = *(longlong *)(param_1 + 0xcd8);
      lVar1 = -1;
      do {
        lVar10 = lVar1;
        lVar1 = lVar10 + 1;
      } while (*(char *)(lVar10 + 1 + lVar5) != '\0');
      if (local_res10[0] == 0x2a) {
        *(undefined1 *)(lVar1 + lVar5) = 10;
        uVar7 = FUN_144f14dc0(param_1,1,lVar5,lVar10 + 2);
        *(undefined1 *)(lVar1 + lVar5) = 0;
        uVar8 = (ulonglong)uVar7;
      }
      else if (local_res10[0] == 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = 0x15;
      }
      break;
    case 8:
      uVar7 = FUN_1452baa20(param_1,local_res10[0],uVar3);
      uVar8 = (ulonglong)uVar7;
      break;
    case 9:
      uVar7 = FUN_1452bac00(param_1,param_2,local_res10[0]);
      uVar8 = (ulonglong)uVar7;
      break;
    case 10:
      uVar8 = 0;
      if (local_res10[0] == 1) goto LAB_1452bb0df;
      uVar8 = 8;
      break;
    case 0xb:
      uVar8 = 0;
      if (local_res10[0] == 0x2b) {
        FUN_144f25d20(param_1,*(undefined8 *)(param_1 + 0x11f8));
        FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,
                      (ulonglong)puVar11 & 0xffffffff00000000);
        goto LAB_1452bb0df;
      }
      uVar8 = 0x19;
      break;
    case 0xc:
      uVar8 = 0;
      if (local_res10[0] == 1) goto LAB_1452bb0df;
      uVar8 = 0x19;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
LAB_1452bb264:
    if (*(int *)(param_2 + 0x480) == 0) {
      return uVar8;
    }
    cVar6 = FUN_14550c790(lVar2);
    if (cVar6 == '\0') {
      return uVar8;
    }
  } while( true );
}



// FUNCTION 1452bb300 FUN_1452bb300 body=86 status=ok
// SIG undefined FUN_1452bb300(void)

void FUN_1452bb300(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_2 + 0x480);
  while ((iVar1 != 0 && (iVar2 == 0))) {
    iVar2 = FUN_14550be10(param_1,param_2 + 0x3a0,1,param_3);
    iVar1 = *(int *)(param_2 + 0x480);
  }
  return;
}



// FUNCTION 1452bb360 FUN_1452bb360 body=860 status=ok
// SIG undefined FUN_1452bb360(void)

int FUN_1452bb360(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  bVar4 = false;
  puVar2 = *(undefined4 **)(param_1 + 0x1a8);
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    *puVar2 = 1;
  }
  *param_3 = 0;
  if ((((*(longlong *)(puVar2 + 2) != 0) && (*(longlong *)(lVar1 + 0x470) != 0)) &&
      (iVar6 = FUN_144f19540(), iVar6 != 0)) &&
     (((*(longlong *)(puVar2 + 4) == 0 || (*(longlong *)(lVar1 + 0x478) == 0)) ||
      (iVar6 = FUN_144f19540(), iVar6 != 0)))) {
    bVar4 = true;
  }
  if ((*(char *)(param_1 + 0x13d8) != '\0') || (*(int *)(param_1 + 0x368) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(lVar7 + 8) == 0) {
      FUN_144f14b70(param_1,"Cannot APPEND without a mailbox.");
      return 3;
    }
    if (*(int *)(param_1 + 0x368) != 0) {
      lVar3 = param_1 + 0x358;
      *(uint *)(param_1 + 0x36c) = *(uint *)(param_1 + 0x36c) & 0xfffffffd;
      FUN_144f08bc0(lVar3,*(undefined8 *)(param_1 + 0x348),0);
      iVar6 = FUN_144f093b0(param_1,lVar3,0,0,0);
      if ((iVar6 != 0) ||
         (((lVar8 = FUN_144f23930(param_1,"Mime-Version",0xc), lVar8 == 0 &&
           (iVar6 = FUN_144f08c40(param_1 + 0x3a0,"Mime-Version: 1.0"), iVar6 != 0)) ||
          (iVar6 = FUN_144f09ad0(lVar3), iVar6 != 0)))) goto LAB_1452bb67c;
      uVar9 = FUN_144f09970(lVar3);
      *(undefined8 *)(param_1 + 0x11f8) = uVar9;
      *(code **)(param_1 + 0x1218) = FUN_144f09a80;
      *(longlong *)(param_1 + 0x1220) = lVar3;
    }
    if (*(longlong *)(param_1 + 0x11f8) < 0) {
      FUN_144f14b70(param_1,"Cannot APPEND with unknown input file size");
      return 0x19;
    }
    lVar7 = FUN_1452b9820(*(undefined8 *)(lVar7 + 8),0);
    if (lVar7 == 0) {
      return 0x1b;
    }
    iVar6 = FUN_1452b9940(param_1,"APPEND %s (\\Seen) {%I64d}",lVar7,
                          *(undefined8 *)(param_1 + 0x11f8));
    (*(code *)PTR_free_14c6d9f28)(lVar7);
    if (iVar6 != 0) {
      return iVar6;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 0xb;
    iVar6 = 0;
    goto LAB_1452bb67c;
  }
  if (*(longlong *)(puVar2 + 0x10) == 0) {
    if (bVar4) {
      if ((*(longlong *)(puVar2 + 6) != 0) || (*(longlong *)(puVar2 + 8) != 0)) {
        iVar6 = FUN_1452ba6c0(param_1);
        goto LAB_1452bb67c;
      }
      if (*(longlong *)(puVar2 + 0xe) != 0) {
        iVar6 = FUN_1452ba7a0(param_1);
        goto LAB_1452bb67c;
      }
    }
    lVar7 = *(longlong *)(puVar2 + 2);
joined_r0x0001452bb461:
    if (((lVar7 != 0) && (!bVar4)) &&
       ((*(longlong *)(puVar2 + 0x10) != 0 ||
        (((*(longlong *)(puVar2 + 6) != 0 || (*(longlong *)(puVar2 + 8) != 0)) ||
         (*(longlong *)(puVar2 + 0xe) != 0)))))) {
      lVar7 = *(longlong *)(param_1 + 0x20);
      lVar3 = *(longlong *)(param_1 + 0x1a8);
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar7 + 0x470));
      *(undefined8 *)(lVar7 + 0x470) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar7 + 0x478));
      *(undefined8 *)(lVar7 + 0x478) = 0;
      lVar7 = *(longlong *)(lVar3 + 8);
      if (lVar7 == 0) {
        FUN_144f14b70(param_1,"Cannot SELECT without a mailbox.");
        return 3;
      }
      lVar7 = FUN_1452b9820(lVar7,0);
      if (lVar7 == 0) {
        return 0x1b;
      }
      iVar6 = FUN_1452b9940(param_1,"SELECT %s",lVar7);
      (*(code *)PTR_free_14c6d9f28)(lVar7);
      if (iVar6 != 0) {
        return iVar6;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x480) = 8;
      iVar6 = 0;
      goto LAB_1452bb67c;
    }
  }
  else if (!bVar4) {
    lVar7 = *(longlong *)(puVar2 + 2);
    goto joined_r0x0001452bb461;
  }
  iVar6 = FUN_1452ba560(param_1);
LAB_1452bb67c:
  if (iVar6 == 0) {
    iVar6 = FUN_1452b9560(param_1,param_3);
    uVar5 = FUN_144f14020(lVar1,0);
    *param_2 = uVar5;
  }
  return iVar6;
}



// FUNCTION 1452bb6c0 FUN_1452bb6c0 body=67 status=ok
// SIG undefined FUN_1452bb6c0(void)

undefined8 FUN_1452bb6c0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(param_1 - 0x30U);
  if (((9 < (byte)(param_1 - 0x30U)) &&
      (uVar1 = (ulonglong)(param_1 - 0x61U), 0x19 < (byte)(param_1 - 0x61U))) &&
     (uVar1 = (ulonglong)(param_1 - 0x41U), 0x19 < (byte)(param_1 - 0x41U))) {
    uVar1 = 0;
    switch((char)param_1 + -0x21) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x19:
    case 0x1c:
    case 0x1f:
    case 0x3e:
    case 0x5d:
      break;
    default:
      return 0;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1452bb770 FUN_1452bb770 body=419 status=ok
// SIG undefined FUN_1452bb770(void)

ulonglong FUN_1452bb770(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  
  *param_2 = '\0';
  uVar5 = FUN_1452ce930(*(longlong *)(param_1 + 0x1260) + 1,0,*(longlong *)(param_1 + 0x1a8) + 8,0,3
                       );
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(longlong *)(param_1 + 0x750) != 0) &&
     (uVar5 = FUN_1452ce930(*(longlong *)(param_1 + 0x750),0,*(longlong *)(param_1 + 0x1a8) + 0x10,0
                            ,3), (int)uVar5 != 0)) {
    return uVar5;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  FUN_144f25da0(param_1,0);
  FUN_144f25d60(param_1,0);
  FUN_144f25d20(param_1,0xffffffffffffffff);
  FUN_144f25ce0(param_1,0xffffffffffffffff);
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    **(undefined4 **)(param_1 + 0x1a8) = 1;
  }
  *param_2 = '\0';
  puVar1 = *(undefined4 **)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(char **)(puVar1 + 2);
  if (*pcVar3 != '\0') {
    if (*(char *)(param_1 + 0xabe) == '\0') {
      pcVar6 = "RETR";
      goto LAB_1452bb872;
    }
    *puVar1 = 1;
  }
  pcVar6 = "LIST";
LAB_1452bb872:
  pcVar7 = *(char **)(puVar1 + 4);
  if (*pcVar3 == '\0') {
    if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
      pcVar7 = pcVar6;
    }
    uVar4 = FUN_14550c120(param_1,lVar2 + 0x3a0,&DAT_149972340,pcVar7);
  }
  else {
    if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
      pcVar7 = pcVar6;
    }
    uVar4 = FUN_14550c120(param_1,lVar2 + 0x3a0,"%s %s",pcVar7,pcVar3);
  }
  uVar5 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 9;
    uVar4 = FUN_1452bbc60(param_1,param_2);
    uVar5 = (ulonglong)uVar4;
    FUN_144f14020(*(undefined8 *)(param_1 + 0x20),0);
    if ((uVar4 == 0) && (*param_2 != '\0')) {
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 1452bb920 FUN_1452bb920 body=129 status=ok
// SIG undefined FUN_1452bb920(void)

int FUN_1452bb920(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    FUN_144f16220(*(undefined8 *)(param_1 + 0x20),1);
    iVar2 = param_2;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 2));
  *(undefined8 *)(puVar1 + 2) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 4));
  *(undefined8 *)(puVar1 + 4) = 0;
  *puVar1 = 0;
  return iVar2;
}



// FUNCTION 1452bb9b0 FUN_1452bb9b0 body=482 status=ok
// SIG undefined FUN_1452bb9b0(void)

ulonglong FUN_1452bb9b0(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  FUN_144f16220(lVar3,0);
  *(undefined8 *)(lVar3 + 0x3f0) = 120000;
  *(code **)(lVar3 + 0x418) = FUN_1452bc710;
  *(undefined1 **)(lVar3 + 0x420) = &LAB_1452bc0c0;
  *(undefined1 *)(lVar3 + 0x471) = 7;
  FUN_14550cb30(lVar3 + 0x440,param_1,&PTR_DAT_149d26d90);
  FUN_14550c040(lVar3 + 0x3a0);
  FUN_14550c000(param_1,lVar3 + 0x3a0);
  uVar7 = 0;
  pcVar9 = *(char **)(lVar3 + 0x160);
  do {
    if ((pcVar9 == (char *)0x0) || (cVar4 = *pcVar9, pcVar10 = pcVar9, cVar4 == '\0')) break;
    do {
      if (cVar4 == '=') break;
      cVar4 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    pcVar1 = pcVar10 + 1;
    while ((cVar4 != '\0' && (cVar4 != ';'))) {
      pcVar2 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar4 = *pcVar2;
    }
    iVar6 = FUN_144f195b0(pcVar9,"AUTH=",5);
    if (iVar6 == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = FUN_14550c9f0(lVar3 + 0x440,pcVar1,(longlong)pcVar10 - (longlong)pcVar1);
      if ((uVar7 != 0) &&
         (iVar6 = FUN_144f195b0(pcVar1,"+APOP",(longlong)pcVar10 - (longlong)pcVar1), iVar6 != 0)) {
        *(undefined1 *)(lVar3 + 0x471) = 2;
        *(undefined2 *)(lVar3 + 0x45a) = 0;
        uVar7 = 0;
      }
    }
    if (*pcVar10 == ';') {
      pcVar10 = pcVar10 + 1;
    }
    pcVar9 = pcVar10;
  } while (uVar7 == 0);
  if (*(char *)(lVar3 + 0x471) != '\x02') {
    if (*(short *)(lVar3 + 0x45a) == 0) {
      *(undefined1 *)(lVar3 + 0x471) = 0;
    }
    else {
      uVar5 = 7;
      if (*(short *)(lVar3 + 0x45a) != -0x21) {
        uVar5 = 4;
      }
      *(undefined1 *)(lVar3 + 0x471) = uVar5;
    }
  }
  if (uVar7 != 0) {
    return (ulonglong)uVar7;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 1;
  uVar8 = FUN_1452bbc60(param_1,param_2);
  return uVar8;
}



// FUNCTION 1452bbba0 FUN_1452bbba0 body=192 status=ok
// SIG undefined FUN_1452bbba0(void)

undefined8 FUN_1452bbba0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_2 + 0x3a0;
  if (((param_3 == '\0') && (*(char *)(param_2 + 0x2d6) != '\0')) &&
     (iVar2 = FUN_14550c120(param_1,lVar1,&DAT_149972340,&DAT_149d26e30), iVar2 == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 10;
    iVar3 = 0;
    iVar2 = *(int *)(param_2 + 0x428);
    while ((iVar2 != 0 && (iVar3 == 0))) {
      iVar3 = FUN_14550be10(param_1,lVar1,1);
      iVar2 = *(int *)(param_2 + 0x428);
    }
  }
  FUN_14550c730(lVar1);
  FUN_14550c900(param_2,*(undefined2 *)(param_2 + 0x45c));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x468));
  *(undefined8 *)(param_2 + 0x468) = 0;
  return 0;
}



// FUNCTION 1452bbc60 FUN_1452bbc60 body=141 status=ok
// SIG undefined FUN_1452bbc60(void)

void FUN_1452bbc60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 1) != 0) &&
     (*(char *)(lVar1 + 0x472) == '\0')) {
    local_res8[0] = '\0';
    iVar2 = FUN_144f13f00(param_1,0,0,local_res8);
    *(char *)(lVar1 + 0x472) = local_res8[0];
    if (iVar2 != 0) {
      return;
    }
    if (local_res8[0] == '\0') {
      return;
    }
  }
  FUN_14550be10(param_1,lVar1 + 0x3a0,0,0);
  *(bool *)param_2 = *(int *)(lVar1 + 0x428) == 0;
  return;
}



// FUNCTION 1452bbd00 FUN_1452bbd00 body=31 status=ok
// SIG undefined FUN_1452bbd00(void)

ulonglong FUN_1452bbd00(undefined8 param_1,char *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1452bbc60();
  if ((int)uVar1 == 0) {
    uVar1 = uVar1 & 0xffffffff;
    if (*param_2 != '\0') {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 1452bbd20 FUN_1452bbd20 body=78 status=ok
// SIG undefined FUN_1452bbd20(void)

undefined8 FUN_1452bbd20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x18);
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(undefined1 *)(param_2 + 0x2e4) = 0;
  return 0;
}



// FUNCTION 1452bbd70 FUN_1452bbd70 body=111 status=ok
// SIG undefined FUN_1452bbd70(void)

void FUN_1452bbd70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = FUN_14550c820(param_3);
  lVar1 = lVar1 + 0x3a0;
  if (lVar2 != 0) {
    FUN_14550c120(param_1,lVar1,"AUTH %s %s",param_2,lVar2);
    return;
  }
  FUN_14550c120(param_1,lVar1,"AUTH %s",param_2);
  return;
}



// FUNCTION 1452bbde0 FUN_1452bbde0 body=60 status=ok
// SIG undefined FUN_1452bbde0(void)

void FUN_1452bbde0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = FUN_14550c820(param_3);
  FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,uVar2);
  return;
}



// FUNCTION 1452bbe40 FUN_1452bbe40 body=163 status=ok
// SIG undefined FUN_1452bbe40(void)

undefined8 FUN_1452bbe40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0xcd8) + uVar3) != '\0');
  if (uVar3 < 3) {
    FUN_14550c7c0(param_2,&DAT_14996de1b,0,0);
    return 0;
  }
  pcVar2 = (char *)(*(longlong *)(param_1 + 0xcd8) + 2);
  while( true ) {
    uVar4 = uVar4 - 1;
    if ((*pcVar2 != ' ') && (*pcVar2 != '\t')) break;
    pcVar2 = pcVar2 + 1;
  }
  while (uVar4 != 0) {
    lVar1 = uVar4 - 1;
    uVar4 = uVar4 - 1;
    if ((0x20 < (byte)pcVar2[lVar1]) ||
       ((0x100002600U >> ((longlong)pcVar2[lVar1] & 0x3fU) & 1) == 0)) goto LAB_1452bbead;
  }
  uVar4 = 0xffffffffffffffff;
LAB_1452bbead:
  pcVar2[uVar4 + 1] = '\0';
  FUN_14550c7c0(param_2,pcVar2,uVar4 + 1,0);
  return 0;
}



// FUNCTION 1452bbef0 FUN_1452bbef0 body=461 status=ok
// SIG undefined FUN_1452bbef0(void)

ulonglong FUN_1452bbef0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar11 = 0;
  bVar4 = false;
  puVar1 = (ulonglong *)(lVar3 + 0x430);
  uVar9 = uVar11;
  uVar8 = uVar11;
  uVar7 = uVar11;
  if (param_3 != 0) {
    do {
      cVar2 = *(char *)(uVar9 + param_2);
      uVar10 = *puVar1;
      if (cVar2 == '\n') {
        if ((uVar10 == 1) || (uVar10 == 4)) {
          *puVar1 = uVar10 + 1;
        }
        else {
          *puVar1 = 0;
        }
LAB_1452bbfdc:
        if (uVar10 != 0) {
LAB_1452bbfe1:
          if (*puVar1 <= uVar10) {
            do {
              if (*(longlong *)(lVar3 + 0x438) == 0) {
                if ((!bVar4) || (uVar8 = uVar11, uVar10 != 1)) {
                  uVar7 = FUN_144f14dc0(param_1,1,&DAT_149d26ea8);
                  uVar8 = uVar7 & 0xffffffff;
                  if ((int)uVar7 != 0) {
                    return uVar7;
                  }
                }
                bVar4 = false;
                uVar7 = uVar9;
                break;
              }
              *(longlong *)(lVar3 + 0x438) = *(longlong *)(lVar3 + 0x438) + -1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
      }
      else {
        if (cVar2 != '\r') {
          if (cVar2 != '.') {
            *puVar1 = 0;
            goto LAB_1452bbfdc;
          }
          if (uVar10 == 2) {
            *puVar1 = 3;
          }
          else {
            *puVar1 = 0;
            if (uVar10 != 3) goto LAB_1452bbfdc;
            bVar4 = true;
          }
          goto LAB_1452bbfe1;
        }
        if (uVar10 != 0) {
          uVar6 = 1;
          if (uVar10 == 3) {
            uVar6 = 4;
          }
          *puVar1 = uVar6;
          goto LAB_1452bbfe1;
        }
        *puVar1 = 1;
        if (uVar9 != 0) {
          uVar10 = FUN_144f14dc0(param_1,1,uVar7 + param_2,uVar9 - uVar7);
          uVar8 = uVar10 & 0xffffffff;
          uVar7 = uVar9;
          if ((int)uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (*puVar1 == 5) {
    uVar8 = FUN_144f14dc0(param_1,1,&DAT_149d26ea8,2);
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
    *puVar1 = 0;
  }
  else if (*puVar1 == 0) {
    if (param_3 - uVar7 != 0) {
      uVar5 = FUN_144f14dc0(param_1,1,uVar7 + param_2,param_3 - uVar7);
      uVar8 = (ulonglong)uVar5;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 1452bc150 FUN_1452bc150 body=81 status=ok
// SIG undefined FUN_1452bc150(void)

void FUN_1452bc150(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x458) = 0;
  *(undefined2 *)(param_2 + 0x45c) = 0;
  *(undefined1 *)(param_2 + 0x473) = 0;
  iVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,&DAT_149d26de4);
  if (iVar1 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 2;
  }
  return;
}



// FUNCTION 1452bc1b0 FUN_1452bc1b0 body=161 status=ok
// SIG undefined FUN_1452bc1b0(void)

void FUN_1452bc1b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  cVar1 = FUN_144f14080(param_2,0);
  if ((cVar1 == '\0') && (iVar2 = FUN_144f0d480(param_1,param_2,0), iVar2 != 0)) {
    return;
  }
  iVar2 = FUN_144f13f00(param_1,0,0,local_res10);
  if (iVar2 == 0) {
    *(undefined1 *)(param_2 + 0x472) = local_res10[0];
    if (*(int *)(param_2 + 0x428) != 4) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 4;
    }
    if (*(char *)(param_2 + 0x472) != '\0') {
      *(undefined1 *)(param_2 + 0x2e4) = 1;
      *(undefined ***)(param_2 + 0x2e8) = &PTR_s_POP3S_149d26d00;
      FUN_1452bc150(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1452bc260 FUN_1452bc260 body=105 status=ok
// SIG undefined FUN_1452bc260(void)

undefined8 FUN_1452bc260(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  if (*(longlong *)(param_1 + 0x13a0) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 0;
    return 0;
  }
  puVar2 = &DAT_14996de1b;
  if (*(undefined1 **)(param_2 + 0x150) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x150);
  }
  uVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,"USER %s",puVar2);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 7;
  }
  return uVar1;
}



// FUNCTION 1452bc2d0 FUN_1452bc2d0 body=341 status=ok
// SIG undefined FUN_1452bc2d0(void)

void FUN_1452bc2d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x13a0) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 0;
  }
  else {
    lVar3 = FUN_14550d670(&PTR_FUN_149d9b758);
    if (lVar3 != 0) {
      lVar5 = -1;
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*(longlong *)(param_2 + 0x468) + lVar4) != '\0');
      uVar1 = FUN_144f16fc0();
      FUN_14550d6e0(lVar3,*(undefined8 *)(param_2 + 0x468),uVar1);
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(*(longlong *)(param_2 + 0x158) + lVar5) != '\0');
      uVar1 = FUN_144f16fc0(lVar5);
      FUN_14550d6e0(lVar3,*(undefined8 *)(param_2 + 0x158),uVar1);
      FUN_14550d700(lVar3,local_58);
      uVar6 = 0;
      puVar7 = local_48;
      do {
        FUN_144f2b7e0(puVar7,3,&DAT_149d25a30,local_58[uVar6]);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (uVar6 < 0x10);
      local_68 = local_48;
      iVar2 = FUN_14550c120(param_1,param_2 + 0x3a0,"APOP %s %s",*(undefined8 *)(param_2 + 0x150));
      if (iVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452bc440 FUN_1452bc440 body=230 status=ok
// SIG undefined FUN_1452bc440(void)

int FUN_1452bc440(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  cVar1 = FUN_14550cbc0(param_2 + 0x440,param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 0;
    iVar3 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x471) & *(byte *)(param_2 + 0x470) & 4) != 0) {
      iVar3 = FUN_14550cbe0(param_2 + 0x440,param_1,0,local_res10);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (local_res10[0] == 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 5;
      }
    }
    iVar3 = 0;
    if (local_res10[0] == 0) {
      bVar2 = *(byte *)(param_2 + 0x470) & *(byte *)(param_2 + 0x471);
      if ((bVar2 & 2) == 0) {
        if ((bVar2 & 1) == 0) {
          FUN_144f14ad0(param_1,"No known authentication mechanisms supported");
          iVar3 = 0x43;
        }
        else {
          iVar3 = FUN_1452bc260(param_1,param_2);
        }
      }
      else {
        iVar3 = FUN_1452bc2d0(param_1,param_2);
      }
    }
  }
  return iVar3;
}



// FUNCTION 1452bc530 FUN_1452bc530 body=471 status=ok
// SIG undefined FUN_1452bc530(void)

int FUN_1452bc530(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0xcd8);
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (*(char *)((longlong)piVar2 + uVar6) != '\0');
  if (param_2 != 0x2a) {
    if (param_2 != 0x2b) {
      *(byte *)(lVar1 + 0x470) = *(byte *)(lVar1 + 0x470) | 1;
    }
    if ((*(char *)(param_1 + 0xab1) != '\0') && (cVar3 = FUN_144f14080(lVar1,0), cVar3 == '\0')) {
      if ((param_2 == 0x2b) && (*(char *)(lVar1 + 0x473) != '\0')) {
        iVar5 = FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,&DAT_149d26dec);
        if (iVar5 == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 3;
        }
        return iVar5;
      }
      if (1 < *(byte *)(param_1 + 0xab1)) {
        FUN_144f14b70(param_1,"STLS not supported.");
        return 0x40;
      }
    }
    iVar5 = FUN_1452bc440(param_1,lVar1);
    return iVar5;
  }
  if (3 < uVar6) {
    if (*piVar2 == 0x534c5453) {
      *(undefined1 *)(lVar1 + 0x473) = 1;
      return 0;
    }
    if (*piVar2 == 0x52455355) {
      *(byte *)(lVar1 + 0x470) = *(byte *)(lVar1 + 0x470) | 1;
      return 0;
    }
  }
  if (uVar6 < 5) {
    return 0;
  }
  if (*piVar2 != 0x4c534153) {
    return 0;
  }
  if ((char)piVar2[1] != ' ') {
    return 0;
  }
  *(byte *)(lVar1 + 0x470) = *(byte *)(lVar1 + 0x470) | 4;
  pbVar8 = (byte *)((longlong)piVar2 + 5);
  uVar7 = uVar7 - 4;
  do {
    if (uVar7 == 0) {
      return 0;
    }
    while ((*pbVar8 < 0x21 && ((0x100002600U >> ((longlong)(char)*pbVar8 & 0x3fU) & 1) != 0))) {
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    uVar6 = 0;
    if (uVar7 != 0) {
      do {
        if ((pbVar8[uVar6] < 0x21) &&
           ((0x100002600U >> ((longlong)(char)pbVar8[uVar6] & 0x3fU) & 1) != 0)) break;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    uVar4 = FUN_14550c920(pbVar8,uVar6,&local_res8);
    if ((uVar4 != 0) && (local_res8 == uVar6)) {
      *(ushort *)(lVar1 + 0x458) = *(ushort *)(lVar1 + 0x458) | uVar4;
    }
    pbVar8 = pbVar8 + uVar6;
    uVar7 = uVar7 - uVar6;
  } while( true );
}



// FUNCTION 1452bc710 FUN_1452bc710 body=1224 status=ok
// SIG undefined FUN_1452bc710(void)

ulonglong FUN_1452bc710(longlong param_1,longlong param_2)

{
  size_t _Size;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int *piVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *_Dst;
  char *pcVar13;
  undefined1 *puVar14;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  lVar1 = param_2 + 0x3a0;
  local_res20 = 0;
  if (*(int *)(param_2 + 0x428) == 4) {
    uVar10 = FUN_1452bc1b0();
    return uVar10;
  }
  if (*(longlong *)(param_2 + 0x3d0) != 0) {
    uVar10 = FUN_14550c6b0(param_1,lVar1);
    return uVar10;
  }
  do {
    uVar10 = 0;
    uVar11 = FUN_14550c3a0(param_1,uVar2,lVar1,local_res10,&local_res20);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    if (local_res10[0] == 0) {
      return uVar11 & 0xffffffff;
    }
    switch(*(undefined4 *)(param_2 + 0x428)) {
    case 1:
      lVar6 = *(longlong *)(param_1 + 0x20);
      lVar3 = *(longlong *)(param_1 + 0xcd8);
      uVar10 = 0xffffffffffffffff;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (*(char *)(lVar3 + uVar10) != '\0');
      if (local_res10[0] == 0x2b) {
        if ((3 < uVar10) && (*(char *)((uVar11 - 1) + lVar3) == '>')) {
          uVar12 = 3;
          if (3 < uVar11 - 1) {
            do {
              if (*(char *)(uVar12 + lVar3) == '<') {
                _Size = (uVar10 - uVar12) - 1;
                if (_Size != 0) {
                  _Dst = (void *)(*(code *)PTR_calloc_14c6d9f40)(1);
                  *(void **)(lVar6 + 0x468) = _Dst;
                  if (_Dst != (void *)0x0) {
                    memcpy(_Dst,(void *)(uVar12 + lVar3),_Size);
                    *(undefined1 *)(_Size + *(longlong *)(lVar6 + 0x468)) = 0;
                    pcVar13 = strchr(*(char **)(lVar6 + 0x468),0x40);
                    if (pcVar13 == (char *)0x0) {
                      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar6 + 0x468));
                      *(undefined8 *)(lVar6 + 0x468) = 0;
                    }
                    else {
                      *(byte *)(lVar6 + 0x470) = *(byte *)(lVar6 + 0x470) | 2;
                    }
                  }
                }
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar11 - 1);
          }
        }
        *(undefined2 *)(lVar6 + 0x458) = 0;
        *(undefined2 *)(lVar6 + 0x45c) = 0;
        *(undefined1 *)(lVar6 + 0x473) = 0;
        uVar9 = FUN_14550c120(param_1,lVar6 + 0x3a0,&DAT_149972340,&DAT_149d26de4);
        uVar10 = (ulonglong)uVar9;
        if (uVar9 == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 2;
        }
      }
      else {
        FUN_144f14b70(param_1,"Got unexpected pop3-server response");
        uVar10 = 8;
      }
      break;
    case 2:
      uVar9 = FUN_1452bc530(param_1,local_res10[0]);
      uVar10 = (ulonglong)uVar9;
      break;
    case 3:
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x3a8) != 0) {
        return 8;
      }
      if (local_res10[0] == 0x2b) {
        uVar9 = FUN_1452bc1b0(param_1,param_2);
        uVar10 = (ulonglong)uVar9;
      }
      else if (*(char *)(param_1 + 0xab1) == '\x01') {
        uVar9 = FUN_1452bc440(param_1,param_2);
        uVar10 = (ulonglong)uVar9;
      }
      else {
        FUN_144f14b70(param_1,"STARTTLS denied");
        uVar10 = 0x40;
      }
      break;
    default:
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 0;
      uVar10 = uVar11 & 0xffffffff;
      goto LAB_1452bcb93;
    case 5:
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar9 = FUN_14550d000(lVar6 + 0x440,param_1,local_res10[0],local_res18);
      uVar10 = (ulonglong)uVar9;
      if (uVar9 == 0) {
        if (local_res18[0] == 0) {
          bVar7 = *(byte *)(lVar6 + 0x471) & *(byte *)(lVar6 + 0x470);
          if ((bVar7 & 2) == 0) {
            if ((bVar7 & 1) == 0) {
              FUN_144f14b70(param_1,"Authentication cancelled");
              uVar10 = 0x43;
            }
            else {
              uVar9 = FUN_1452bc260(param_1,lVar6);
              uVar10 = (ulonglong)uVar9;
            }
          }
          else {
            uVar9 = FUN_1452bc2d0(param_1,lVar6);
            uVar10 = (ulonglong)uVar9;
          }
        }
        else if (local_res18[0] == 2) goto LAB_1452bcb70;
      }
      break;
    case 6:
      uVar10 = 0;
      if (local_res10[0] == 0x2b) goto LAB_1452bcb70;
      FUN_144f14b70(param_1,"Authentication failed: %d",local_res10[0]);
      uVar10 = 0x43;
      break;
    case 7:
      if (local_res10[0] == 0x2b) {
        puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 0x20) + 0x158);
        puVar14 = &DAT_14996de1b;
        if (puVar4 != (undefined1 *)0x0) {
          puVar14 = puVar4;
        }
        uVar9 = FUN_14550c120(param_1,*(longlong *)(param_1 + 0x20) + 0x3a0,"PASS %s",puVar14);
        uVar10 = (ulonglong)uVar9;
        if (uVar9 == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 8;
        }
      }
      else {
        FUN_144f14b70(param_1,"Access denied. %c",local_res10[0]);
        uVar10 = 0x43;
      }
      break;
    case 8:
      uVar10 = 0;
      if (local_res10[0] == 0x2b) goto LAB_1452bcb70;
      FUN_144f14b70(param_1,"Access denied. %c",local_res10[0]);
      uVar10 = 0x43;
      break;
    case 9:
      piVar5 = *(int **)(param_1 + 0x1a8);
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (local_res10[0] != 0x2b) {
        *(undefined4 *)(lVar6 + 0x428) = 0;
        return 8;
      }
      *(undefined8 *)(lVar6 + 0x430) = 2;
      *(undefined8 *)(lVar6 + 0x438) = 2;
      if (*piVar5 == 0) {
        FUN_144f24c20(param_1,0,0xffffffffffffffff,0,0xffffffff);
        if (*(longlong *)(lVar6 + 0x3a0) != 0) {
          if (*(char *)(param_1 + 0x1d4) == '\0') {
            uVar9 = FUN_1452bbef0(param_1,*(longlong *)(lVar6 + 0x3a0),
                                  *(undefined8 *)(lVar6 + 0x3a8));
            uVar10 = (ulonglong)uVar9;
            if (uVar9 != 0) {
              return uVar10;
            }
          }
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar6 + 0x3a0));
          *(undefined8 *)(lVar6 + 0x3a0) = 0;
          *(undefined8 *)(lVar6 + 0x3a8) = 0;
        }
      }
LAB_1452bcb70:
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x428) = 0;
    }
    if ((int)uVar10 != 0) {
      return uVar10;
    }
LAB_1452bcb93:
    if (*(int *)(param_2 + 0x428) == 0) {
      return uVar10;
    }
    cVar8 = FUN_14550c790(lVar1);
    if (cVar8 == '\0') {
      return uVar10;
    }
  } while( true );
}



// FUNCTION 1452bcc00 FUN_1452bcc00 body=333 status=ok
// SIG undefined FUN_1452bcc00(void)

ulonglong FUN_1452bcc00(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_2 = '\0';
  if ((*(longlong *)(param_1 + 0x750) == 0) ||
     (uVar3 = FUN_1452ce930(*(longlong *)(param_1 + 0x750),0,*(longlong *)(param_1 + 0x1a8) + 8,0,3)
     , (int)uVar3 == 0)) {
    *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
    FUN_144f25da0(param_1,0);
    FUN_144f25d60(param_1,0);
    FUN_144f25d20(param_1,0xffffffffffffffff);
    FUN_144f25ce0(param_1,0xffffffffffffffff);
    puVar1 = *(undefined4 **)(param_1 + 0x1a8);
    if (*(char *)(param_1 + 0x1d4) != '\0') {
      *puVar1 = 1;
    }
    *param_2 = '\0';
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_1 + 0xaa8);
    *(undefined2 *)(puVar1 + 10) = 0x100;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 2;
    if (((*(char *)(param_1 + 0x13d8) == '\0') && (*(int *)(param_1 + 0x368) == 0)) ||
       (*(longlong *)(param_1 + 0xaa8) == 0)) {
      uVar2 = FUN_1452bd910(param_1);
    }
    else {
      uVar2 = FUN_1452bdb50(param_1);
    }
    uVar3 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      uVar2 = FUN_1452bd150(param_1,param_2);
      uVar3 = (ulonglong)uVar2;
      FUN_144f14020(*(undefined8 *)(param_1 + 0x20),0);
      if ((uVar2 == 0) && (*param_2 != '\0')) {
        if (**(int **)(param_1 + 0x1a8) != 0) {
          FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1452bcd50 FUN_1452bcd50 body=386 status=ok
// SIG undefined FUN_1452bcd50(void)

int FUN_1452bcd50(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong local_res8;
  undefined1 local_28 [16];
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 2));
  *(undefined8 *)(puVar1 + 2) = 0;
  if (param_2 == 0) {
    param_2 = 0;
    if (((*(char *)(param_1 + 0xab2) == '\0') && (*(longlong *)(param_1 + 0xaa8) != 0)) &&
       ((*(char *)(param_1 + 0x13d8) != '\0' || (param_2 = 0, *(int *)(param_1 + 0x368) != 0)))) {
      if ((*(char *)((longlong)puVar1 + 0x29) == '\0') && (*(longlong *)(param_1 + 0x11f8) != 0)) {
        lVar7 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_149d26ea8);
        lVar9 = 5;
      }
      else {
        lVar7 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_149d26eaa);
        lVar9 = 3;
      }
      if (lVar7 == 0) {
        return 0x1b;
      }
      iVar6 = FUN_144f15100(param_1,*(undefined8 *)(lVar2 + 0x310),lVar7,lVar9,&local_res8);
      if (iVar6 != 0) {
        (*(code *)PTR_free_14c6d9f28)(lVar7);
        return iVar6;
      }
      if (local_res8 == lVar9) {
        puVar8 = (undefined4 *)FUN_144f07150(local_28);
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *(undefined4 *)(lVar2 + 0x3e0) = *puVar8;
        *(undefined4 *)(lVar2 + 0x3e4) = uVar3;
        *(undefined4 *)(lVar2 + 1000) = uVar4;
        *(undefined4 *)(lVar2 + 0x3ec) = uVar5;
        (*(code *)PTR_free_14c6d9f28)(lVar7);
      }
      else {
        *(longlong *)(lVar2 + 0x3c8) = lVar7;
        *(longlong *)(lVar2 + 0x3d8) = lVar9;
        *(longlong *)(lVar2 + 0x3d0) = lVar9 - local_res8;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 0xb;
      param_2 = FUN_1452be8c0(param_1,lVar2,0);
    }
  }
  else {
    FUN_144f16220(lVar2,1);
  }
  *puVar1 = 0;
  return param_2;
}



// FUNCTION 1452bcee0 FUN_1452bcee0 body=417 status=ok
// SIG undefined FUN_1452bcee0(void)

void FUN_1452bcee0(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  char local_438 [1040];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar3 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  FUN_144f16220(lVar3,0);
  *(undefined8 *)(lVar3 + 0x3f0) = 120000;
  *(code **)(lVar3 + 0x418) = FUN_1452be3e0;
  *(code **)(lVar3 + 0x420) = FUN_1452bd660;
  FUN_14550cb30(lVar3 + 0x428,param_1,&PTR_DAT_149d26fd0);
  FUN_14550c040(lVar3 + 0x3a0);
  FUN_14550c000(param_1,lVar3 + 0x3a0);
  iVar5 = 0;
  pcVar6 = *(char **)(lVar3 + 0x160);
  do {
    if (pcVar6 == (char *)0x0) goto LAB_1452bd007;
    cVar4 = *pcVar6;
    pcVar7 = pcVar6;
    if (cVar4 == '\0') break;
    do {
      if (cVar4 == '=') break;
      cVar4 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    pcVar1 = pcVar7 + 1;
    while ((cVar4 != '\0' && (cVar4 != ';'))) {
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar4 = *pcVar2;
    }
    iVar5 = FUN_144f195b0(pcVar6,"AUTH=",5);
    if (iVar5 == 0) {
      iVar5 = 3;
    }
    else {
      iVar5 = FUN_14550c9f0(lVar3 + 0x428,pcVar1,(longlong)pcVar7 - (longlong)pcVar1);
    }
    if (*pcVar7 == ';') {
      pcVar7 = pcVar7 + 1;
    }
    pcVar6 = pcVar7;
  } while (iVar5 == 0);
  if (iVar5 == 0) {
LAB_1452bd007:
    lVar3 = *(longlong *)(param_1 + 0x20);
    pcVar6 = (char *)(*(longlong *)(param_1 + 0x1260) + 1);
    if (*pcVar6 == '\0') {
      iVar5 = FUN_14550d740(local_438,0x401);
      pcVar6 = local_438;
      if (iVar5 != 0) {
        pcVar6 = "localhost";
      }
    }
    local_448 = 3;
    iVar5 = FUN_1452ce930(pcVar6,0,lVar3 + 0x458,0);
    if (iVar5 == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 1;
      FUN_1452bd150(param_1,param_2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_468);
}



// FUNCTION 1452bd0a0 FUN_1452bd0a0 body=162 status=ok
// SIG undefined FUN_1452bd0a0(void)

undefined8 FUN_1452bd0a0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  
  if ((param_3 == '\0') && (*(char *)(param_2 + 0x2d6) != '\0')) {
    iVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,&DAT_149d26e30);
    if (iVar1 == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 0xc;
      FUN_1452be8c0(param_1,param_2,1);
    }
  }
  FUN_14550c730(param_2 + 0x3a0);
  FUN_14550c900(param_2,*(undefined2 *)(param_2 + 0x444));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x458));
  *(undefined8 *)(param_2 + 0x458) = 0;
  return 0;
}



// FUNCTION 1452bd150 FUN_1452bd150 body=141 status=ok
// SIG undefined FUN_1452bd150(void)

void FUN_1452bd150(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 1) != 0) &&
     (*(char *)(lVar1 + 0x460) == '\0')) {
    local_res8[0] = '\0';
    iVar2 = FUN_144f13f00(param_1,0,0,local_res8);
    *(char *)(lVar1 + 0x460) = local_res8[0];
    if (iVar2 != 0) {
      return;
    }
    if (local_res8[0] == '\0') {
      return;
    }
  }
  FUN_14550be10(param_1,lVar1 + 0x3a0,0,0);
  *(bool *)param_2 = *(int *)(lVar1 + 0x450) == 0;
  return;
}



// FUNCTION 1452bd1f0 FUN_1452bd1f0 body=81 status=ok
// SIG undefined FUN_1452bd1f0(void)

undefined8 FUN_1452bd1f0(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1452bd150();
  if (((int)uVar1 == 0) && (*param_2 != (char)uVar1)) {
    if (**(int **)(param_1 + 0x1a8) != 0) {
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1452bd250 FUN_1452bd250 body=61 status=ok
// SIG undefined FUN_1452bd250(void)

undefined8 FUN_1452bd250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x2e4) = 0;
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x30);
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  if (lVar1 == 0) {
    return 0x1b;
  }
  return 0;
}



// FUNCTION 1452bd290 FUN_1452bd290 body=111 status=ok
// SIG undefined FUN_1452bd290(void)

void FUN_1452bd290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = FUN_14550c820(param_3);
  lVar1 = lVar1 + 0x3a0;
  if (lVar2 != 0) {
    FUN_14550c120(param_1,lVar1,"AUTH %s %s",param_2,lVar2);
    return;
  }
  FUN_14550c120(param_1,lVar1,"AUTH %s",param_2);
  return;
}



// FUNCTION 1452bd300 FUN_1452bd300 body=60 status=ok
// SIG undefined FUN_1452bd300(void)

void FUN_1452bd300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = FUN_14550c820(param_3);
  FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,uVar2);
  return;
}



// FUNCTION 1452bd360 FUN_1452bd360 body=163 status=ok
// SIG undefined FUN_1452bd360(void)

undefined8 FUN_1452bd360(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar5;
  ulonglong uVar4;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0xcd8) + uVar3) != '\0');
  if (uVar3 < 5) {
    FUN_14550c7c0(param_2,&DAT_14996de1b,0,0);
    return 0;
  }
  lVar5 = uVar4 - 3;
  for (pcVar2 = (char *)(*(longlong *)(param_1 + 0xcd8) + 4); (*pcVar2 == ' ' || (*pcVar2 == '\t'));
      pcVar2 = pcVar2 + 1) {
    lVar5 = lVar5 + -1;
  }
  while (lVar5 != 0) {
    lVar1 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    if ((0x20 < (byte)pcVar2[lVar1]) ||
       ((0x100002600U >> ((longlong)pcVar2[lVar1] & 0x3fU) & 1) == 0)) goto LAB_1452bd3cd;
  }
  lVar5 = -1;
LAB_1452bd3cd:
  pcVar2[lVar5 + 1] = '\0';
  FUN_14550c7c0(param_2,pcVar2,lVar5 + 1,0);
  return 0;
}



// FUNCTION 1452bd410 FUN_1452bd410 body=580 status=ok
// SIG undefined FUN_1452bd410(void)

undefined4 FUN_1452bd410(longlong param_1,size_t param_2,size_t param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  void *_Dst;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *local_res8;
  void *local_res20;
  
  pvVar2 = *(void **)(param_1 + 0xd98);
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  local_res8 = (void *)0x0;
  local_res20 = (void *)0x0;
  if (((pvVar2 == (void *)0x0) || (_Dst = pvVar2, *(char *)(param_1 + 0xab7) != '\0')) &&
     (_Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(*(int *)(param_1 + 0x6d0) * 2),
     local_res8 = _Dst, local_res20 = pvVar2, _Dst == (void *)0x0)) {
    FUN_144f14b70(param_1,"Failed to alloc scratch buffer");
    return 0x1b;
  }
  uVar6 = *(ulonglong *)(lVar3 + 0x20);
  uVar5 = uVar6;
  sVar4 = param_3;
  if (param_3 != 0) {
    memcpy(_Dst,*(void **)(param_1 + 0x1a0),param_3);
    uVar5 = *(ulonglong *)(lVar3 + 0x20);
  }
  for (; (longlong)param_3 < (longlong)param_2; param_3 = param_3 + 1) {
    if ((&DAT_149d26ea8)[uVar5] == *(char *)(param_3 + *(longlong *)(param_1 + 0x1a0))) {
      uVar1 = uVar5 + 1;
      *(ulonglong *)(lVar3 + 0x20) = uVar1;
      if ((uVar5 == 1) || (uVar5 == 4)) {
        *(undefined1 *)(lVar3 + 0x29) = 1;
        uVar5 = uVar1;
      }
      else {
        *(undefined1 *)(lVar3 + 0x29) = 0;
        uVar5 = uVar1;
      }
    }
    else if (uVar5 != 0) {
      memcpy((void *)(sVar4 + (longlong)_Dst),&DAT_149d26ea8 + uVar6,uVar5 - uVar6);
      sVar4 = sVar4 + (*(longlong *)(lVar3 + 0x20) - uVar6);
      uVar5 = (ulonglong)(*(char *)(param_3 + *(longlong *)(param_1 + 0x1a0)) == '\r');
      uVar6 = 0;
      *(ulonglong *)(lVar3 + 0x20) = uVar5;
      *(undefined1 *)(lVar3 + 0x29) = 0;
    }
    if (uVar5 == 3) {
      memcpy((void *)(sVar4 + (longlong)_Dst),&DAT_149d271e8 + uVar6,4 - uVar6);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      sVar4 = sVar4 + (4 - uVar6);
      uVar6 = 0;
      uVar5 = 0;
    }
    else if (uVar5 == 0) {
      *(undefined1 *)(sVar4 + (longlong)_Dst) =
           *(undefined1 *)(param_3 + *(longlong *)(param_1 + 0x1a0));
      sVar4 = sVar4 + 1;
      uVar5 = *(ulonglong *)(lVar3 + 0x20);
    }
  }
  if (uVar5 - uVar6 != 0) {
    memcpy((void *)(sVar4 + (longlong)_Dst),&DAT_149d26ea8 + uVar6,uVar5 - uVar6);
    sVar4 = sVar4 + (*(longlong *)(lVar3 + 0x20) - uVar6);
  }
  if (sVar4 == param_2) {
    (*(code *)PTR_free_14c6d9f28)(local_res8);
  }
  else {
    *(void **)(param_1 + 0x1a0) = _Dst;
    *(void **)(param_1 + 0xd98) = _Dst;
    (*(code *)PTR_free_14c6d9f28)(local_res20);
    *(size_t *)(param_1 + 0x198) = sVar4;
  }
  return 0;
}



// FUNCTION 1452bd660 FUN_1452bd660 body=238 status=ok
// SIG undefined FUN_1452bd660(void)

void FUN_1452bd660(undefined8 param_1,longlong param_2,char *param_3,ulonglong param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  size_t _Size;
  undefined1 auStack_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((((3 < param_4) && ((byte)(*param_3 - 0x30U) < 10)) && ((byte)(param_3[1] - 0x30U) < 10)) &&
     ((byte)(param_3[2] - 0x30U) < 10)) {
    if ((param_3[3] == ' ') || (param_4 == 5)) {
      local_18[0] = '\0';
      local_18[1] = '\0';
      local_18[2] = '\0';
      local_18[3] = '\0';
      local_18[4] = '\0';
      local_18[5] = '\0';
      _Size = 3;
      if (param_4 == 5) {
        _Size = 5;
      }
      memcpy(local_18,param_3,_Size);
      lVar1 = strtol(local_18,(char **)0x0,10);
      iVar2 = FUN_144f16fd0(lVar1);
      *param_5 = iVar2;
      if (iVar2 == 1) {
        *param_5 = 0;
      }
    }
    else if ((param_3[3] == '-') &&
            ((*(int *)(param_2 + 0x450) == 2 || (*(int *)(param_2 + 0x450) == 7)))) {
      *param_5 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1452bd760 FUN_1452bd760 body=91 status=ok
// SIG undefined FUN_1452bd760(void)

void FUN_1452bd760(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined2 *)(lVar1 + 0x440) = 0;
  *(undefined2 *)(lVar1 + 0x444) = 0;
  *(undefined1 *)(lVar1 + 0x461) = 0;
  *(undefined1 *)(lVar1 + 0x464) = 0;
  iVar2 = FUN_14550c120(param_1,lVar1 + 0x3a0,"EHLO %s",*(undefined8 *)(lVar1 + 0x458));
  if (iVar2 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 2;
  }
  return;
}



// FUNCTION 1452bd7c0 FUN_1452bd7c0 body=159 status=ok
// SIG undefined FUN_1452bd7c0(void)

void FUN_1452bd7c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res8[0] = 0;
  cVar2 = FUN_144f14080(lVar1,0);
  if ((cVar2 == '\0') && (iVar3 = FUN_144f0d480(param_1,lVar1,0), iVar3 != 0)) {
    return;
  }
  iVar3 = FUN_144f13f00(param_1,0,0,local_res8);
  if (iVar3 == 0) {
    *(undefined1 *)(lVar1 + 0x460) = local_res8[0];
    if (*(int *)(lVar1 + 0x450) != 5) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 5;
    }
    if (*(char *)(lVar1 + 0x460) != '\0') {
      *(undefined1 *)(lVar1 + 0x2e4) = 1;
      *(undefined ***)(lVar1 + 0x2e8) = &PTR_s_SMTPS_149d26f40;
      FUN_1452bd760(param_1);
    }
  }
  return;
}



// FUNCTION 1452bd860 FUN_1452bd860 body=161 status=ok
// SIG undefined FUN_1452bd860(void)

undefined8 FUN_1452bd860(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int local_res8 [2];
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x464) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20) + 0x428;
    cVar2 = FUN_14550cbc0(lVar1,param_1);
    if (cVar2 != '\0') {
      uVar3 = FUN_14550cbe0(lVar1,param_1,0,local_res8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (local_res8[0] != 1) {
        FUN_144f14ad0(param_1,"No known authentication mechanisms supported");
        return 0x43;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 6;
      return uVar3;
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 0;
  return 0;
}



// FUNCTION 1452bd910 FUN_1452bd910 body=570 status=ok
// SIG undefined FUN_1452bd910(void)

int FUN_1452bd910(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined8 local_28;
  longlong lStack_20;
  char *local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + 0x10);
  pcVar7 = *(char **)(*(longlong *)(param_1 + 0x1a8) + 8);
  if (puVar2 == (undefined8 *)0x0) {
    if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
      pcVar7 = "HELP";
    }
    iVar6 = FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,pcVar7);
  }
  else if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    local_28 = 0;
    lStack_20 = 0;
    local_18 = (char *)0x0;
    uStack_10 = 0;
    pcVar7 = (char *)*puVar2;
    pcVar10 = pcVar7 + 1;
    if (*pcVar7 != '<') {
      pcVar10 = pcVar7;
    }
    pcVar7 = (char *)(*(code *)PTR__strdup_14c6d9f38)(pcVar10);
    if (pcVar7 == (char *)0x0) {
      return 0x1b;
    }
    lVar8 = -1;
    do {
      lVar9 = lVar8;
      lVar8 = lVar9 + 1;
    } while (pcVar7[lVar8] != '\0');
    if ((lVar8 != 0) && (pcVar7[lVar9] == '>')) {
      pcVar7[lVar9] = '\0';
    }
    local_18 = strpbrk(pcVar7,"@");
    if (local_18 != (char *)0x0) {
      *local_18 = '\0';
      local_18 = local_18 + 1;
      FUN_1452cef00(&local_28);
    }
    if ((*(char *)(lVar1 + 0x463) == '\0') ||
       (((lStack_20 == 0 && (cVar5 = FUN_1452ceed0(pcVar7), cVar5 != '\0')) &&
        (cVar5 = FUN_1452ceed0(local_18), cVar5 != '\0')))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    puVar11 = &DAT_14996de1b;
    pcVar10 = "";
    if (bVar4) {
      pcVar10 = " SMTPUTF8";
    }
    pcVar3 = "";
    if (local_18 != (char *)0x0) {
      puVar11 = &DAT_149c08428;
      pcVar3 = local_18;
    }
    iVar6 = FUN_14550c120(param_1,lVar1 + 0x3a0,"VRFY %s%s%s%s",pcVar7,puVar11,pcVar3,pcVar10);
    (*(code *)PTR_free_14c6d9f28)(pcVar7);
  }
  else {
    lVar8 = 0;
    bVar4 = false;
    if (*(char *)(lVar1 + 0x463) != '\0') {
      do {
        lVar9 = lVar8 + 1;
        if (pcVar7[lVar8] != (&DAT_149d27050)[lVar8]) goto LAB_1452bd97a;
        lVar8 = lVar9;
      } while (lVar9 != 5);
      bVar4 = true;
    }
LAB_1452bd97a:
    pcVar10 = "";
    if (bVar4) {
      pcVar10 = " SMTPUTF8";
    }
    iVar6 = FUN_14550c120(param_1,lVar1 + 0x3a0,"%s %s%s",pcVar7,*puVar2,pcVar10);
  }
  if (iVar6 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 7;
  }
  return iVar6;
}



// FUNCTION 1452bdb50 FUN_1452bdb50 body=1203 status=ok
// SIG undefined FUN_1452bdb50(void)

int FUN_1452bdb50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 *puVar15;
  char *pcVar16;
  ulonglong in_stack_ffffffffffffff68;
  undefined8 local_68;
  longlong lStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  char *local_38;
  undefined8 uStack_30;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar10 = (undefined1 *)0x0;
  bVar3 = false;
  pcVar12 = *(char **)(param_1 + 0x8f0);
  if (pcVar12 == (char *)0x0) {
    lVar6 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_149d27078);
  }
  else {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = (char *)0x0;
    uStack_50 = 0;
    if (*pcVar12 == '<') {
      pcVar12 = pcVar12 + 1;
    }
    pcVar12 = (char *)(*(code *)PTR__strdup_14c6d9f38)(pcVar12);
    lVar6 = -1;
    if (pcVar12 == (char *)0x0) {
      return 0x1b;
    }
    do {
      lVar14 = lVar6;
      lVar6 = lVar14 + 1;
    } while (pcVar12[lVar6] != '\0');
    if ((lVar6 != 0) && (pcVar12[lVar14] == '>')) {
      pcVar12[lVar14] = '\0';
    }
    local_58 = strpbrk(pcVar12,"@");
    if (local_58 != (char *)0x0) {
      *local_58 = '\0';
      local_58 = local_58 + 1;
      FUN_1452cef00(&local_68);
    }
    if ((*(char *)(lVar1 + 0x463) != '\0') &&
       (((lStack_60 != 0 || (cVar4 = FUN_1452ceed0(pcVar12), cVar4 == '\0')) ||
        (cVar4 = FUN_1452ceed0(local_58), cVar4 == '\0')))) {
      bVar3 = true;
    }
    if (local_58 == (char *)0x0) {
      lVar6 = FUN_144f2b8b0(&DAT_149d27070,pcVar12);
      (*(code *)PTR_free_14c6d9f28)(pcVar12);
    }
    else {
      lVar6 = FUN_144f2b8b0("<%s@%s>",pcVar12,local_58);
      (*(code *)PTR_free_14c6d9f28)(pcVar12);
    }
  }
  if (lVar6 == 0) {
    return 0x1b;
  }
  pcVar12 = *(char **)(param_1 + 0x8f8);
  puVar7 = puVar10;
  if ((pcVar12 != (char *)0x0) && (puVar7 = (undefined1 *)0x0, *(short *)(lVar1 + 0x444) != 0)) {
    if (*pcVar12 == '\0') {
      puVar7 = (undefined1 *)(*(code *)PTR__strdup_14c6d9f38)(&DAT_149d27078);
    }
    else {
      local_48 = 0;
      lStack_40 = 0;
      local_38 = (char *)0x0;
      uStack_30 = 0;
      if (*pcVar12 == '<') {
        pcVar12 = pcVar12 + 1;
      }
      pcVar12 = (char *)(*(code *)PTR__strdup_14c6d9f38)(pcVar12);
      lVar14 = -1;
      if (pcVar12 == (char *)0x0) goto LAB_1452bdce9;
      do {
        lVar8 = lVar14;
        lVar14 = lVar8 + 1;
      } while (pcVar12[lVar14] != '\0');
      if ((lVar14 != 0) && (pcVar12[lVar8] == '>')) {
        pcVar12[lVar8] = '\0';
      }
      local_38 = strpbrk(pcVar12,"@");
      if (local_38 != (char *)0x0) {
        *local_38 = '\0';
        local_38 = local_38 + 1;
        FUN_1452cef00(&local_48);
      }
      if (((!bVar3) && (*(char *)(lVar1 + 0x463) != '\0')) &&
         ((lStack_40 != 0 ||
          ((cVar4 = FUN_1452ceed0(pcVar12), cVar4 == '\0' ||
           (cVar4 = FUN_1452ceed0(local_38), cVar4 == '\0')))))) {
        bVar3 = true;
      }
      if (local_38 == (char *)0x0) {
        puVar7 = (undefined1 *)FUN_144f2b8b0(&DAT_149d27070,pcVar12);
        (*(code *)PTR_free_14c6d9f28)(pcVar12);
      }
      else {
        puVar7 = (undefined1 *)FUN_144f2b8b0("<%s@%s>",pcVar12,local_38);
        (*(code *)PTR_free_14c6d9f28)(pcVar12);
      }
    }
    if (puVar7 == (undefined1 *)0x0) {
LAB_1452bdce9:
      (*(code *)PTR_free_14c6d9f28)(lVar6);
      return 0x1b;
    }
  }
  if (*(int *)(param_1 + 0x368) != 0) {
    lVar14 = param_1 + 0x358;
    *(uint *)(param_1 + 0x36c) = *(uint *)(param_1 + 0x36c) & 0xfffffffd;
    FUN_144f08bc0(lVar14,*(undefined8 *)(param_1 + 0x348),0);
    iVar5 = FUN_144f093b0(param_1,lVar14,0,0,in_stack_ffffffffffffff68 & 0xffffffff00000000);
    if ((iVar5 != 0) ||
       (((lVar8 = FUN_144f23930(param_1,"Mime-Version",0xc), lVar8 == 0 &&
         (iVar5 = FUN_144f08c40(param_1 + 0x3a0,"Mime-Version: 1.0"), iVar5 != 0)) ||
        (iVar5 = FUN_144f09ad0(lVar14), iVar5 != 0)))) {
      (*(code *)PTR_free_14c6d9f28)(lVar6);
      (*(code *)PTR_free_14c6d9f28)(puVar7);
      return iVar5;
    }
    uVar9 = FUN_144f09970(lVar14);
    *(undefined8 *)(param_1 + 0x11f8) = uVar9;
    *(code **)(param_1 + 0x1218) = FUN_144f09a80;
    *(longlong *)(param_1 + 0x1220) = lVar14;
  }
  if (((*(char *)(lVar1 + 0x462) != '\0') && (0 < *(longlong *)(param_1 + 0x11f8))) &&
     (puVar10 = (undefined1 *)FUN_144f2b8b0("%I64d"), puVar10 == (undefined1 *)0x0)) {
    (*(code *)PTR_free_14c6d9f28)(lVar6);
    (*(code *)PTR_free_14c6d9f28)(puVar7);
    return 0x1b;
  }
  if ((*(char *)(lVar1 + 0x463) != '\0') && (!bVar3)) {
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + 0x10);
    while ((puVar2 != (undefined8 *)0x0 && (!bVar3))) {
      cVar4 = FUN_1452ceed0(*puVar2);
      puVar2 = (undefined8 *)puVar2[1];
      if (cVar4 == '\0') {
        bVar3 = true;
      }
    }
  }
  pcVar12 = "";
  pcVar16 = "";
  if (bVar3) {
    pcVar16 = " SMTPUTF8";
  }
  pcVar13 = "";
  puVar15 = &DAT_14996de1b;
  if (puVar10 != (undefined1 *)0x0) {
    pcVar13 = " SIZE=";
    puVar15 = puVar10;
  }
  puVar11 = &DAT_14996de1b;
  if (puVar7 != (undefined1 *)0x0) {
    pcVar12 = " AUTH=";
    puVar11 = puVar7;
  }
  iVar5 = FUN_14550c120(param_1,lVar1 + 0x3a0,"MAIL FROM:%s%s%s%s%s%s",lVar6,pcVar12,puVar11,pcVar13
                        ,puVar15,pcVar16);
  (*(code *)PTR_free_14c6d9f28)(lVar6);
  (*(code *)PTR_free_14c6d9f28)(puVar7);
  (*(code *)PTR_free_14c6d9f28)(puVar10);
  if (iVar5 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 8;
    return 0;
  }
  return iVar5;
}



// FUNCTION 1452be010 FUN_1452be010 body=283 status=ok
// SIG undefined FUN_1452be010(void)

int FUN_1452be010(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  char *local_18;
  undefined8 uStack_10;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = (char *)0x0;
  uStack_10 = 0;
  pcVar3 = (char *)**(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + 0x10);
  pcVar6 = pcVar3 + 1;
  if (*pcVar3 != '<') {
    pcVar6 = pcVar3;
  }
  pcVar3 = (char *)(*(code *)PTR__strdup_14c6d9f38)(pcVar6);
  if (pcVar3 == (char *)0x0) {
    return 0x1b;
  }
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (pcVar3[lVar4] != '\0');
  if ((lVar4 != 0) && (pcVar3[lVar5] == '>')) {
    pcVar3[lVar5] = '\0';
  }
  local_18 = strpbrk(pcVar3,"@");
  if (local_18 != (char *)0x0) {
    *local_18 = '\0';
    local_18 = local_18 + 1;
    FUN_1452cef00(&local_28);
  }
  lVar1 = lVar1 + 0x3a0;
  if (local_18 == (char *)0x0) {
    iVar2 = FUN_14550c120(param_1,lVar1,"RCPT TO:<%s>",pcVar3);
  }
  else {
    iVar2 = FUN_14550c120(param_1,lVar1,"RCPT TO:<%s@%s>",pcVar3,local_18);
  }
  (*(code *)PTR_free_14c6d9f28)(pcVar3);
  if (iVar2 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 9;
  }
  return iVar2;
}



// FUNCTION 1452be130 FUN_1452be130 body=680 status=ok
// SIG undefined FUN_1452be130(void)

undefined8 FUN_1452be130(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0xcd8);
  uVar5 = 0xffffffffffffffff;
  do {
    uVar6 = uVar5;
    uVar5 = uVar6 + 1;
  } while (*(char *)(lVar1 + uVar5) != '\0');
  if ((99 < param_3 - 200U) && (param_3 != 1)) {
    if ((1 < *(byte *)(param_1 + 0xab1)) && (cVar2 = FUN_144f14080(param_2,0), cVar2 == '\0')) {
      FUN_144f14b70(param_1,"Remote access denied: %d",param_3);
      return 9;
    }
    *(undefined2 *)(param_2 + 0x444) = 0;
    uVar4 = FUN_14550c120(param_1,param_2 + 0x3a0,"HELO %s",*(undefined8 *)(param_2 + 0x458));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 3;
    return uVar4;
  }
  if (uVar5 < 4) {
    FUN_144f14b70(param_1,"Unexpectedly short EHLO response");
    return 8;
  }
  uVar5 = uVar6 - 3;
  if (uVar5 < 8) {
    if (3 < uVar5) goto LAB_1452be225;
LAB_1452be259:
    if (uVar5 < 5) goto LAB_1452be2cd;
  }
  else {
    if (*(longlong *)(lVar1 + 4) == 0x534c545452415453) {
      *(undefined1 *)(param_2 + 0x461) = 1;
      goto LAB_1452be2cd;
    }
LAB_1452be225:
    if (*(int *)(lVar1 + 4) == 0x455a4953) {
      *(undefined1 *)(param_2 + 0x462) = 1;
      goto LAB_1452be2cd;
    }
    if (uVar5 < 8) goto LAB_1452be259;
    if (*(longlong *)(lVar1 + 4) == 0x3846545550544d53) {
      *(undefined1 *)(param_2 + 0x463) = 1;
      goto LAB_1452be2cd;
    }
  }
  if ((*(int *)(lVar1 + 4) == 0x48545541) && (*(char *)(lVar1 + 8) == ' ')) {
    pbVar7 = (byte *)(lVar1 + 9);
    *(undefined1 *)(param_2 + 0x464) = 1;
    for (uVar6 = uVar6 - 8; uVar6 != 0; uVar6 = uVar6 - uVar5) {
      while ((*pbVar7 < 0x21 && ((0x100002600U >> ((longlong)(char)*pbVar7 & 0x3fU) & 1) != 0))) {
        pbVar7 = pbVar7 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_1452be2cd;
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          if ((pbVar7[uVar5] < 0x21) &&
             ((0x100002600U >> ((longlong)(char)pbVar7[uVar5] & 0x3fU) & 1) != 0)) break;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      uVar3 = FUN_14550c920(pbVar7,uVar5,&local_res8);
      if ((uVar3 != 0) && (local_res8 == uVar5)) {
        *(ushort *)(param_2 + 0x440) = *(ushort *)(param_2 + 0x440) | uVar3;
      }
      pbVar7 = pbVar7 + uVar5;
    }
  }
LAB_1452be2cd:
  if (param_3 == 1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0xab1) != '\0') && (cVar2 = FUN_144f14080(param_2,0), cVar2 == '\0')) {
    if (*(char *)(param_2 + 0x461) != '\0') {
      uVar4 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,"STARTTLS");
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 4;
      return uVar4;
    }
    if (*(char *)(param_1 + 0xab1) != '\x01') {
      FUN_144f14b70(param_1,"STARTTLS not supported.");
      return 0x40;
    }
  }
  uVar4 = FUN_1452bd860(param_1);
  return uVar4;
}



// FUNCTION 1452be3e0 FUN_1452be3e0 body=1200 status=ok
// SIG undefined FUN_1452be3e0(void)

ulonglong FUN_1452be3e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 *puVar12;
  
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  lVar1 = param_2 + 0x3a0;
  local_res20 = 0;
  if (*(int *)(param_2 + 0x450) == 5) {
    uVar9 = FUN_1452bd7c0();
    return uVar9;
  }
  if (*(longlong *)(param_2 + 0x3d0) != 0) {
    uVar9 = FUN_14550c6b0(param_1,lVar1);
    return uVar9;
  }
  do {
    uVar9 = 0;
    puVar12 = &local_res20;
    uVar10 = FUN_14550c3a0(param_1,uVar2,lVar1,local_res10,puVar12);
    iVar6 = local_res10[0];
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    if ((*(int *)(param_2 + 0x450) != 0xc) && (local_res10[0] != 1)) {
      *(int *)(param_1 + 0x13e8) = local_res10[0];
    }
    if (local_res10[0] == 0) {
      return uVar10 & 0xffffffff;
    }
    switch(*(undefined4 *)(param_2 + 0x450)) {
    case 1:
      if (local_res10[0] - 200U < 100) {
        uVar8 = FUN_1452bd760(param_1);
        uVar9 = (ulonglong)uVar8;
      }
      else {
        FUN_144f14b70(param_1,"Got unexpected smtp-server response: %d",local_res10[0]);
        uVar9 = 8;
      }
      break;
    case 2:
      uVar8 = FUN_1452be130(param_1,param_2,local_res10[0]);
      uVar9 = (ulonglong)uVar8;
      break;
    case 3:
      uVar9 = 0;
      if (local_res10[0] - 200U < 100) goto LAB_1452be82f;
      FUN_144f14b70(param_1,"Remote access denied: %d",local_res10[0]);
      uVar9 = 9;
      break;
    case 4:
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x3a8) != 0) {
        return 8;
      }
      if (local_res10[0] == 0xdc) {
        uVar8 = FUN_1452bd7c0(param_1);
        uVar9 = (ulonglong)uVar8;
      }
      else if (*(char *)(param_1 + 0xab1) == '\x01') {
        uVar8 = FUN_1452bd860();
        uVar9 = (ulonglong)uVar8;
      }
      else {
        FUN_144f14b70(param_1,"STARTTLS denied, code %d",local_res10[0]);
        uVar9 = 0x40;
      }
      break;
    default:
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 0;
      uVar9 = uVar10 & 0xffffffff;
      goto LAB_1452be849;
    case 6:
      uVar8 = FUN_14550d000(*(longlong *)(param_1 + 0x20) + 0x428,param_1,local_res10[0],local_res18
                           );
      uVar9 = (ulonglong)uVar8;
      if (uVar8 == 0) {
        if (local_res18[0] == 0) {
          FUN_144f14b70(param_1,"Authentication cancelled");
          uVar9 = 0x43;
        }
        else if (local_res18[0] == 2) goto LAB_1452be82f;
      }
      break;
    case 7:
      lVar5 = *(longlong *)(param_1 + 0x1a8);
      lVar3 = *(longlong *)(param_1 + 0xcd8);
      lVar4 = -1;
      do {
        lVar11 = lVar4;
        lVar4 = lVar11 + 1;
      } while (*(char *)(lVar3 + 1 + lVar11) != '\0');
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        if (99 < local_res10[0] - 200U) goto joined_r0x0001452be6b5;
      }
      else if ((99 < local_res10[0] - 200U) && (local_res10[0] != 0x229)) {
joined_r0x0001452be6b5:
        if (local_res10[0] != 1) {
          FUN_144f14b70(param_1,"Command failed: %d",local_res10[0]);
          uVar9 = 8;
          break;
        }
      }
      if (*(char *)(param_1 + 0x1d4) == '\0') {
        *(undefined1 *)(lVar4 + lVar3) = 10;
        uVar8 = FUN_144f14dc0(param_1,1,lVar3,lVar11 + 2);
        uVar9 = (ulonglong)uVar8;
        *(undefined1 *)(lVar4 + lVar3) = 0;
      }
      if (iVar6 != 1) {
        if ((*(longlong *)(lVar5 + 0x10) == 0) ||
           (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8),
           *(longlong *)(lVar5 + 0x10) = lVar4, lVar4 == 0)) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 0;
        }
        else {
          uVar8 = FUN_1452bd910(param_1);
          uVar9 = (ulonglong)uVar8;
        }
      }
      break;
    case 8:
      if (local_res10[0] - 200U < 100) {
LAB_1452be782:
        uVar8 = FUN_1452be010(param_1);
        uVar9 = (ulonglong)uVar8;
      }
      else {
        FUN_144f14b70(param_1,"MAIL failed: %d",local_res10[0]);
        uVar9 = 0x37;
      }
      break;
    case 9:
      lVar4 = *(longlong *)(param_1 + 0x1a8);
      if (local_res10[0] - 200U < 100) {
LAB_1452be767:
        *(undefined1 *)(lVar4 + 0x28) = 1;
      }
      else {
        if (*(char *)(param_1 + 0xab0) == '\0') {
          *(int *)(lVar4 + 0x18) = local_res10[0];
          FUN_144f14b70(param_1,"RCPT failed: %d",local_res10[0]);
          uVar9 = 0x37;
          break;
        }
        if (local_res10[0] - 200U < 100) goto LAB_1452be767;
        *(int *)(lVar4 + 0x18) = local_res10[0];
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 8);
      *(longlong *)(lVar4 + 0x10) = lVar5;
      if (lVar5 != 0) goto LAB_1452be782;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_144f14b70(param_1,"RCPT failed: %d (last error)",*(undefined4 *)(lVar4 + 0x18));
        uVar9 = 0x37;
      }
      else {
        uVar8 = FUN_14550c120(param_1,lVar1,&DAT_149972340,&DAT_149d271d0);
        uVar9 = (ulonglong)uVar8;
        if (uVar8 == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 10;
        }
      }
      break;
    case 10:
      uVar9 = 0;
      if (local_res10[0] == 0x162) {
        FUN_144f25d20(param_1,*(undefined8 *)(param_1 + 0x11f8));
        FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,
                      (ulonglong)puVar12 & 0xffffffff00000000);
        goto LAB_1452be82f;
      }
      FUN_144f14b70(param_1,"DATA failed: %d",local_res10[0]);
      uVar9 = 0x37;
      break;
    case 0xb:
      if (local_res10[0] != 0xfa) {
        uVar9 = 8;
      }
LAB_1452be82f:
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x450) = 0;
    }
    if ((int)uVar9 != 0) {
      return uVar9;
    }
LAB_1452be849:
    if (*(int *)(param_2 + 0x450) == 0) {
      return uVar9;
    }
    cVar7 = FUN_14550c790(lVar1);
    if (cVar7 == '\0') {
      return uVar9;
    }
  } while( true );
}



// FUNCTION 1452be8c0 FUN_1452be8c0 body=86 status=ok
// SIG undefined FUN_1452be8c0(void)

void FUN_1452be8c0(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_2 + 0x450);
  while ((iVar1 != 0 && (iVar2 == 0))) {
    iVar2 = FUN_14550be10(param_1,param_2 + 0x3a0,1,param_3);
    iVar1 = *(int *)(param_2 + 0x450);
  }
  return;
}



// FUNCTION 1452be920 FUN_1452be920 body=125 status=ok
// SIG undefined FUN_1452be920(void)

undefined8 FUN_1452be920(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  *(undefined1 *)(lVar1 + 0x49f) = 0;
  if (*(char *)(param_1 + 0x13ca) == '\0') {
    uVar2 = FUN_1452bfa80();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_1452c0600();
    if ((*(char *)(*(longlong *)(param_1 + 0x13e0) + 0x40) - 5U & 0xfd) == 0) {
      return 0;
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_1452bfe30(param_1,param_2);
  return uVar2;
}



// FUNCTION 1452be9a0 FUN_1452be9a0 body=1253 status=ok
// SIG undefined FUN_1452be9a0(void)

int FUN_1452be9a0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int local_res8 [2];
  int local_res10;
  char *local_res20;
  longlong local_58;
  longlong local_50 [3];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar6 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x1a8);
  local_res20 = (char *)0x0;
  local_58 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  local_res10 = param_2;
  switch(param_2) {
  case 0:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x19:
  case 0x1e:
  case 0x24:
  case 0x3f:
  case 0x4e:
    if (param_3 != '\0') goto switchD_1452bea0b_caseD_1;
    break;
  default:
switchD_1452bea0b_caseD_1:
    *(undefined1 *)(lVar1 + 0x49c) = 0;
    *(undefined1 *)(lVar1 + 0x49e) = 1;
    FUN_144f16220(lVar1,1);
    iVar6 = param_2;
  }
  lVar9 = -1;
  if (*(char *)(param_1 + 0x13ca) != '\0') {
    if ((*(longlong *)(param_1 + 0xa08) != 0) && (*(longlong *)(lVar1 + 0x440) != 0)) {
      FUN_144bbace0(param_1,1);
      (**(code **)(param_1 + 0xa08))(*(undefined8 *)(param_1 + 0xa20));
      FUN_144bbace0(param_1,0);
    }
    *(undefined8 *)(lVar1 + 0x478) = 0xffffffffffffffff;
  }
  if ((iVar6 == 0) && (iVar6 = FUN_1452ce930(*puVar2,0,&local_res20,&local_58,3), iVar6 == 0)) {
    if ((*(char *)(param_1 + 0x6f8) == '\x02') && (*local_res20 == '/')) {
      (*(code *)PTR_free_14c6d9f28)();
    }
    else {
      (*(code *)PTR_free_14c6d9f28)();
      if (*(char *)(lVar1 + 0x49e) == '\0') {
        if (*(char *)(param_1 + 0x6f8) == '\x02') {
          local_58 = 0;
        }
        else {
          if (*(longlong *)(lVar1 + 0x440) == 0) {
            lVar9 = 0;
          }
          else {
            do {
              lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 0x440) + lVar9) != '\0');
          }
          local_58 = local_58 - lVar9;
        }
        local_res20[local_58] = '\0';
        *(undefined8 *)(lVar1 + 0x458) = local_res20;
      }
      else {
        (*(code *)PTR_free_14c6d9f28)(local_res20);
        *(undefined8 *)(lVar1 + 0x458) = 0;
      }
    }
    param_2 = local_res10;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_144f14ad0(param_1,"Remembering we are in dir \"%s\"");
      param_2 = local_res10;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x49c) = 0;
    FUN_144f16220(lVar1,1);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar1 + 0x458));
    *(undefined8 *)(lVar1 + 0x458) = 0;
  }
  FUN_1452c0ab0(lVar1 + 0x3a0);
  if (*(longlong *)(lVar1 + 0x1b0) != -1) {
    if ((((iVar6 == 0) && (*(char *)(lVar1 + 0x49b) != '\0')) && (0 < *(longlong *)(param_1 + 0xf8))
        ) && (iVar6 = FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,&DAT_149d27d80), iVar6 != 0
             )) {
      uVar7 = FUN_144bbdb50(iVar6);
      FUN_144f14b70(param_1,"Failure sending ABOR command: %s",uVar7);
      *(undefined1 *)(lVar1 + 0x49c) = 0;
      FUN_144f16220(lVar1,1);
    }
    FUN_144f14100(param_1,1);
    FUN_144f13cf0(param_1,lVar1,1);
  }
  if (iVar6 == 0) {
    if (((*(int *)(puVar2 + 2) == 0) && (*(char *)(lVar1 + 0x49c) != '\0')) &&
       (*(char *)(lVar1 + 0x3c0) != '\0')) {
      if (param_3 == '\0') {
        uVar7 = *(undefined8 *)(lVar1 + 0x3f0);
        *(undefined8 *)(lVar1 + 0x3f0) = 60000;
        puVar8 = (undefined4 *)FUN_144f07150(local_50);
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *(undefined4 *)(lVar1 + 0x3e0) = *puVar8;
        *(undefined4 *)(lVar1 + 0x3e4) = uVar3;
        *(undefined4 *)(lVar1 + 1000) = uVar4;
        *(undefined4 *)(lVar1 + 0x3ec) = uVar5;
        iVar6 = FUN_1452bf670(param_1,local_50,local_res8);
        *(undefined8 *)(lVar1 + 0x3f0) = uVar7;
        if ((local_50[0] == 0) && (iVar6 == 0x1c)) {
          FUN_144f14b70(param_1,"control connection looks dead");
          *(undefined1 *)(lVar1 + 0x49c) = 0;
          FUN_144f16220(lVar1,1);
          goto LAB_1452bee59;
        }
        if (iVar6 != 0) goto LAB_1452bee59;
        if (*(char *)(lVar1 + 0x49b) == '\0') {
          if ((local_res8[0] != 0xe2) && (local_res8[0] != 0xfa)) {
            if (local_res8[0] == 0x228) {
              FUN_144f14b70(param_1,"Exceeded storage allocation");
              iVar6 = 0x46;
            }
            else {
              FUN_144f14b70(param_1,"server did not report OK, got %d");
              iVar6 = 0x12;
            }
            goto LAB_1452bee23;
          }
        }
        else if (0 < *(longlong *)(param_1 + 0xf8)) {
          FUN_144f14ad0(param_1,"partial download completed, closing connection");
          FUN_144f16220(lVar1,1);
          return 0;
        }
LAB_1452bed67:
        if (*(char *)(param_1 + 0x13d8) == '\0') {
          lVar9 = *(longlong *)(param_1 + 0xf0);
          if (((lVar9 == -1) || (lVar9 == *(longlong *)(param_1 + 0x100))) ||
             (*(longlong *)(param_1 + 0xf8) == *(longlong *)(param_1 + 0x100))) {
            if (((*(char *)(lVar1 + 0x49b) == '\0') && (*(longlong *)(param_1 + 0x100) == 0)) &&
               (0 < lVar9)) {
              FUN_144f14b70(param_1,"No data was received");
              iVar6 = 0x13;
            }
          }
          else {
            FUN_144f14b70(param_1,"Received only partial file: %I64d bytes");
            iVar6 = 0x12;
          }
        }
        else if (((*(longlong *)(param_1 + 0x11f8) != -1) &&
                 (*(longlong *)(param_1 + 0x11f8) != *(longlong *)(param_1 + 0x108))) &&
                ((*(char *)(param_1 + 0xab7) == '\0' && (*(int *)(puVar2 + 2) == 0)))) {
          FUN_144f14b70(param_1,"Uploaded unaligned file size (%I64d out of %I64d bytes)");
          iVar6 = 0x12;
        }
      }
    }
    else if (param_3 == '\0') goto LAB_1452bed67;
  }
LAB_1452bee23:
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(lVar1 + 0x49b) = 0;
  if ((((param_2 == 0) && (iVar6 == 0)) && (param_3 == '\0')) &&
     (*(longlong *)(param_1 + 0x708) != 0)) {
    iVar6 = FUN_1452bf820(param_1,lVar1);
  }
LAB_1452bee59:
  (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
  puVar2[1] = 0;
  return iVar6;
}



// FUNCTION 1452beee0 FUN_1452beee0 body=224 status=ok
// SIG undefined FUN_1452beee0(void)

void FUN_1452beee0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  FUN_144f16220(lVar1,0);
  *(undefined8 *)(lVar1 + 0x3f0) = 120000;
  *(code **)(lVar1 + 0x418) = FUN_1452c2d10;
  *(code **)(lVar1 + 0x420) = FUN_1452c10c0;
  if ((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 1) != 0) {
    iVar2 = FUN_144f13f00(param_1,0,1,param_2);
    if (iVar2 != 0) {
      return;
    }
    *(undefined1 *)(lVar1 + 0x2dc) = 1;
  }
  FUN_14550c040(lVar1 + 0x3a0);
  FUN_14550c000(param_1,lVar1 + 0x3a0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 1;
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_14550be10(param_1,lVar1 + 0x3a0,0,0);
  *param_2 = *(char *)(lVar1 + 0x496) == '\0';
  return;
}



// FUNCTION 1452befc0 FUN_1452befc0 body=354 status=ok
// SIG undefined FUN_1452befc0(void)

undefined8 FUN_1452befc0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = param_2 + 0x3a0;
  if (param_3 != '\0') {
    *(undefined1 *)(param_2 + 0x49c) = 0;
  }
  if (*(char *)(param_2 + 0x49c) != '\0') {
    iVar3 = FUN_14550c120(param_1,lVar1,&DAT_149972340,&DAT_149d26e30);
    if (iVar3 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x22;
      cVar2 = *(char *)(param_2 + 0x496);
      while ((cVar2 != '\0' && (iVar3 = FUN_14550be10(param_1,lVar1,1), iVar3 == 0))) {
        cVar2 = *(char *)(param_2 + 0x496);
      }
    }
    else {
      uVar4 = FUN_144bbdb50(iVar3);
      FUN_144f14b70(param_1,"Failure sending QUIT command: %s",uVar4);
      *(undefined1 *)(param_2 + 0x49c) = 0;
      FUN_144f16220(param_2,1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
    }
  }
  if (*(longlong *)(param_2 + 0x438) != 0) {
    if (*(longlong *)(param_1 + 0x11b0) == *(longlong *)(param_2 + 0x438)) {
      *(undefined8 *)(param_1 + 0x11b0) = 0;
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x438));
    *(undefined8 *)(param_2 + 0x438) = 0;
  }
  FUN_1452c0ab0(lVar1);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x428));
  *(undefined8 *)(param_2 + 0x428) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x430));
  *(undefined8 *)(param_2 + 0x430) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x458));
  *(undefined8 *)(param_2 + 0x458) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x470));
  *(undefined8 *)(param_2 + 0x470) = 0;
  FUN_14550c730(lVar1);
  return 0;
}



// FUNCTION 1452bf130 FUN_1452bf130 body=547 status=ok
// SIG undefined FUN_1452bf130(void)

ulonglong FUN_1452bf130(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  char local_res18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res8[0] = 0;
  if (*(longlong *)(lVar1 + 0x1e0) != 0) {
    uVar5 = FUN_144f13f00(param_1,1,0,local_res8);
    if (uVar5 != 0) {
      if (*(int *)(lVar1 + 0x488) != 0) {
        return (ulonglong)uVar5;
      }
      *param_2 = 0xffffffff;
      uVar7 = FUN_1452c1e10(param_1,lVar1);
      return uVar7;
    }
    cVar4 = FUN_144f14040(param_1,1);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if (*(char *)(lVar1 + 0x496) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar7 = FUN_14550be10(param_1,lVar3 + 0x3a0,0,0);
    *param_2 = (uint)(*(char *)(lVar3 + 0x496) == '\0');
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(char *)(lVar1 + 0x49f) == '\0') {
      return uVar7;
    }
    *param_2 = 0;
  }
  if (1 < *(int *)(lVar2 + 0x10)) {
    FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
    if (*(char *)(lVar1 + 0x49f) == '\0') {
      *param_2 = 1;
    }
    return 0;
  }
  if (*(char *)(lVar1 + 0x49f) != '\0') {
    uVar7 = FUN_1452c0d80(param_1,local_res18);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (local_res18[0] == '\0') {
      return uVar7;
    }
    uVar7 = FUN_1452c0b70(param_1);
    *(undefined1 *)(lVar1 + 0x49f) = 0;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar7 = FUN_1452c0f00(param_1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *param_2 = 1;
    return uVar7;
  }
  if (*(char *)(param_1 + 0x13d8) == '\0') {
    *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
    iVar6 = FUN_14550d830();
    if (iVar6 != 0) goto LAB_1452bf2ec;
    if (-1 < *(longlong *)(param_1 + 0xf8)) {
      *(undefined1 *)(lVar1 + 0x49b) = 1;
    }
    if ((*(char *)(param_1 + 0x13d3) != '\0') || (*(longlong *)(lVar1 + 0x440) == 0)) {
      if (*(int *)(lVar2 + 0x10) != 0) goto LAB_1452bf2ec;
      uVar9 = 0x14;
      uVar8 = 1;
      goto LAB_1452bf2e0;
    }
    uVar7 = FUN_1452c03b0(param_1,lVar1,*(undefined1 *)(param_1 + 0x13d2),0x15);
    iVar6 = (int)uVar7;
  }
  else {
    uVar8 = *(undefined1 *)(param_1 + 0x13d2);
    uVar9 = 0x16;
LAB_1452bf2e0:
    uVar7 = FUN_1452c03b0(param_1,lVar1,uVar8,uVar9);
    iVar6 = (int)uVar7;
  }
  if (iVar6 != 0) {
    return uVar7;
  }
LAB_1452bf2ec:
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar7 = FUN_14550be10(param_1,lVar1 + 0x3a0,0,0);
  *param_2 = (uint)(*(char *)(lVar1 + 0x496) == '\0');
  return uVar7;
}



// FUNCTION 1452bf360 FUN_1452bf360 body=58 status=ok
// SIG undefined FUN_1452bf360(void)

void FUN_1452bf360(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_14550be10((char)param_1,lVar1 + 0x3a0,0,0);
  *(bool *)param_2 = *(char *)(lVar1 + 0x496) == '\0';
  return;
}



// FUNCTION 1452bf3b0 FUN_1452bf3b0 body=169 status=ok
// SIG undefined FUN_1452bf3b0(void)

undefined8 FUN_1452bf3b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(param_2 + 0x1e0) == 0) || (cVar1 = FUN_144f14020(param_2,1), cVar1 != '\0')) {
    if (*(char *)(param_2 + 0x496) == '\0') {
      *param_3 = *(undefined8 *)(param_2 + 0x1a8);
      if (*(longlong *)(param_2 + 0x1b0) != -1) {
        param_3[1] = *(longlong *)(param_2 + 0x1b0);
        uVar2 = 0x20003;
      }
    }
    else {
      uVar2 = FUN_14550c760(param_1,param_2 + 0x3a0,param_3);
    }
  }
  else {
    uVar2 = FUN_144f141f0(param_1,1,param_3);
  }
  return uVar2;
}



// FUNCTION 1452bf460 FUN_1452bf460 body=184 status=ok
// SIG undefined FUN_1452bf460(void)

int FUN_1452bf460(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar3 = FUN_14550be10(param_1,lVar2 + 0x3a0,0,0);
  cVar1 = *(char *)(lVar2 + 0x496);
  *(bool *)param_2 = cVar1 == '\0';
  if ((iVar3 == 0) && (cVar1 == '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10) != 0) {
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      *(undefined1 *)(lVar2 + 0x49c) = 1;
      return 0;
    }
    *(undefined1 *)(lVar2 + 0x2d5) = 1;
    *(undefined1 *)(lVar2 + 0x49c) = 1;
    return 0;
  }
  return iVar3;
}



// FUNCTION 1452bf520 FUN_1452bf520 body=322 status=ok
// SIG undefined FUN_1452bf520(void)

undefined8 FUN_1452bf520(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char *pcVar4;
  
  puVar2 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    return 0x1b;
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
    *(longlong *)(param_2 + 0x428) = lVar3;
    if (lVar3 == 0) goto LAB_1452bf59d;
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
    *(longlong *)(param_2 + 0x430) = lVar3;
    if (lVar3 == 0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x428));
      *(undefined8 *)(param_2 + 0x428) = 0;
LAB_1452bf59d:
      (*(code *)PTR_free_14c6d9f28)(puVar2);
      return 0x1b;
    }
  }
  pcVar4 = (char *)(*(longlong *)(param_1 + 0x1260) + 1);
  *(undefined8 **)(param_1 + 0x1a8) = puVar2;
  *puVar2 = pcVar4;
  pcVar4 = strstr(pcVar4,";type=");
  if ((pcVar4 != (char *)0x0) ||
     (pcVar4 = strstr(*(char **)(param_2 + 0x60),";type="), pcVar4 != (char *)0x0)) {
    *pcVar4 = '\0';
    cVar1 = FUN_144f19630(pcVar4[6]);
    if (cVar1 == 'A') {
      *(undefined1 *)(param_1 + 0x13d2) = 1;
    }
    else if (cVar1 == 'D') {
      *(undefined1 *)(param_1 + 0x13d3) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x13d2) = 0;
    }
  }
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  *(undefined8 *)(param_2 + 0x478) = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 0x498) = *(undefined1 *)(param_1 + 0xab1);
  *(undefined1 *)(param_2 + 0x499) = *(undefined1 *)(param_1 + 0x6fa);
  return 0;
}



// FUNCTION 1452bf670 FUN_1452bf670 body=427 status=ok
// SIG undefined FUN_1452bf670(void)

int FUN_1452bf670(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar9 = 0;
  local_res8[0] = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x1a8);
  plVar1 = (longlong *)(lVar2 + 0x3a0);
  if (param_3 == (int *)0x0) {
    param_3 = local_res8;
  }
  else {
    *param_3 = 0;
  }
  *param_2 = 0;
  iVar5 = *param_3;
  iVar6 = iVar9;
  do {
    if (iVar5 != 0) {
LAB_1452bf7a5:
      *(undefined1 *)(lVar2 + 0x3c0) = 0;
      return iVar6;
    }
    lVar8 = FUN_14550c050(param_1,plVar1,0);
    if (lVar8 < 1) {
      FUN_144f14b70(param_1,"FTP response timeout");
      return 0x1c;
    }
    lVar10 = 1000;
    if (lVar8 < 1000) {
      lVar10 = lVar8;
    }
    if (((*plVar1 == 0) || (1 < iVar9)) && (cVar4 = FUN_144f14130(param_1,0), cVar4 == '\0')) {
      iVar5 = FUN_144f26bb0(uVar3,0xffffffffffffffff,0xffffffffffffffff,lVar10);
      if (iVar5 == -1) {
        uVar7 = Ordinal_111();
        FUN_144f14b70(param_1,"FTP response aborted due to select/poll error: %d",uVar7);
        return 0x38;
      }
      if (iVar5 != 0) goto LAB_1452bf742;
      iVar5 = FUN_144f25e70(param_1);
      if (iVar5 != 0) {
        return 0x2a;
      }
    }
    else {
LAB_1452bf742:
      iVar6 = FUN_14550c3a0(param_1,uVar3,plVar1,local_res10,&local_res18);
      iVar5 = local_res10[0];
      *(int *)(param_1 + 0x13e8) = local_res10[0];
      *param_3 = local_res10[0];
      if (iVar5 == 0x1a5) {
        FUN_144f14ad0(param_1,"We got a 421 - timeout");
        iVar6 = 0x1c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
        goto LAB_1452bf7a5;
      }
      if (iVar6 != 0) goto LAB_1452bf7a5;
      if ((local_res18 == 0) && (*plVar1 != 0)) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar9 = 0;
      }
      *param_2 = *param_2 + local_res18;
    }
    iVar5 = *param_3;
  } while( true );
}



// FUNCTION 1452bf820 FUN_1452bf820 body=594 status=ok
// SIG undefined FUN_1452bf820(void)

int FUN_1452bf820(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int local_res18 [2];
  undefined8 local_res20;
  longlong local_50;
  undefined1 local_48 [16];
  
  do {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    pcVar14 = (char *)*param_3;
    if (pcVar14 != (char *)0x0) {
      cVar2 = *pcVar14;
      if (cVar2 == '*') {
        pcVar14 = pcVar14 + 1;
      }
      iVar7 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,pcVar14);
      if (iVar7 != 0) {
        return iVar7;
      }
      puVar10 = (undefined4 *)FUN_144f07150(local_48);
      iVar13 = 0;
      iVar15 = 0;
      uVar9 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)(param_2 + 0x3e0) = *puVar10;
      *(undefined4 *)(param_2 + 0x3e4) = uVar9;
      *(undefined4 *)(param_2 + 1000) = uVar4;
      *(undefined4 *)(param_2 + 0x3ec) = uVar5;
      lVar3 = *(longlong *)(param_1 + 0x20);
      local_res20 = *(undefined8 *)(lVar3 + 0x1a8);
      plVar1 = (longlong *)(lVar3 + 0x3a0);
      iVar7 = 0;
      do {
        lVar11 = FUN_14550c050(param_1,plVar1,0);
        if (lVar11 < 1) {
          FUN_144f14b70(param_1,"FTP response timeout");
          return 0x1c;
        }
        lVar12 = 1000;
        if (lVar11 < 1000) {
          lVar12 = lVar11;
        }
        if (((*plVar1 == 0) || (1 < iVar13)) && (cVar6 = FUN_144f14130(param_1,0), cVar6 == '\0')) {
          iVar8 = FUN_144f26bb0(local_res20,0xffffffffffffffff,0xffffffffffffffff,lVar12);
          if (iVar8 == -1) {
            uVar9 = Ordinal_111();
            FUN_144f14b70(param_1,"FTP response aborted due to select/poll error: %d",uVar9);
            return 0x38;
          }
          if (iVar8 != 0) goto LAB_1452bf93e;
          iVar8 = FUN_144f25e70(param_1);
          if (iVar8 != 0) {
            return 0x2a;
          }
        }
        else {
LAB_1452bf93e:
          iVar7 = FUN_14550c3a0(param_1,local_res20,plVar1,local_res18,&local_50);
          *(int *)(param_1 + 0x13e8) = local_res18[0];
          if (local_res18[0] == 0x1a5) {
            FUN_144f14ad0(param_1,"We got a 421 - timeout");
            *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
            *(undefined1 *)(lVar3 + 0x3c0) = 0;
            return 0x1c;
          }
          iVar15 = local_res18[0];
          if (iVar7 != 0) break;
          if ((local_50 == 0) && (*plVar1 != 0)) {
            iVar13 = iVar13 + 1;
          }
          else {
            iVar13 = 0;
          }
        }
      } while (iVar15 == 0);
      *(undefined1 *)(lVar3 + 0x3c0) = 0;
      if (iVar7 != 0) {
        return iVar7;
      }
      if ((cVar2 != '*') && (399 < iVar15)) {
        FUN_144f14b70(param_1,"QUOT string not accepted: %s",pcVar14);
        return 0x15;
      }
    }
    param_3 = (undefined8 *)param_3[1];
  } while( true );
}



// FUNCTION 1452bfa80 FUN_1452bfa80 body=936 status=ok
// SIG undefined FUN_1452bfa80(void)

int FUN_1452bfa80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t sVar6;
  size_t sVar7;
  char *_Dest;
  size_t _MaxCount;
  char cVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 *puVar11;
  bool bVar12;
  char *local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  
  puVar11 = *(undefined8 **)(param_1 + 0x1a8);
  lVar1 = *(longlong *)(param_1 + 0x20);
  _MaxCount = 0;
  local_res8 = (char *)0x0;
  local_res10 = 0;
  *(undefined1 *)(lVar1 + 0x49c) = 0;
  *(undefined1 *)(lVar1 + 0x49e) = 0;
  local_res18 = puVar11;
  iVar2 = FUN_1452ce930(*puVar11,0,&local_res8,&local_res10,3);
  pcVar9 = local_res8;
  if (iVar2 != 0) {
    FUN_144f14b70(param_1,"path contains control characters");
    return iVar2;
  }
  cVar8 = *(char *)(param_1 + 0x6f8);
  sVar6 = _MaxCount;
  if (cVar8 == '\x01') {
LAB_1452bfc4b:
    cVar8 = *local_res8;
    sVar10 = _MaxCount;
    pcVar3 = local_res8;
    if (cVar8 != '\0') {
      do {
        bVar12 = cVar8 != '/';
        cVar8 = pcVar3[1];
        sVar7 = sVar10 + 1;
        if (bVar12) {
          sVar7 = sVar10;
        }
        sVar10 = sVar7;
        pcVar3 = pcVar3 + 1;
      } while (cVar8 != '\0');
      if (sVar7 != 0) {
        lVar4 = (*(code *)PTR_calloc_14c6d9f40)(sVar7,8);
        *(longlong *)(lVar1 + 0x448) = lVar4;
        if (lVar4 == 0) {
LAB_1452bfd46:
          (*(code *)PTR_free_14c6d9f28)(local_res8);
          return 0x1b;
        }
        pcVar3 = strchr(pcVar9,0x2f);
        while (pcVar3 != (char *)0x0) {
          sVar10 = (longlong)pcVar3 - (longlong)pcVar9;
          if (sVar10 == 0) {
            if (*(int *)(lVar1 + 0x480) == 0) {
              sVar10 = 1;
              goto LAB_1452bfce4;
            }
          }
          else {
LAB_1452bfce4:
            _Dest = (char *)(*(code *)PTR_calloc_14c6d9f40)(1,sVar10 + 1);
            if (_Dest == (char *)0x0) goto LAB_1452bfd46;
            strncpy(_Dest,pcVar9,sVar10);
            *(char **)(*(longlong *)(lVar1 + 0x448) + (longlong)*(int *)(lVar1 + 0x480) * 8) = _Dest
            ;
            *(int *)(lVar1 + 0x480) = *(int *)(lVar1 + 0x480) + 1;
          }
          pcVar9 = pcVar3 + 1;
          pcVar3 = strchr(pcVar9,0x2f);
          puVar11 = local_res18;
        }
      }
    }
LAB_1452bfbc0:
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      sVar6 = (*(code *)PTR__strdup_14c6d9f38)(pcVar9);
    }
  }
  else {
    if (cVar8 != '\x02') {
      if (cVar8 != '\x03') goto LAB_1452bfc4b;
      pcVar3 = strrchr(local_res8,0x2f);
      pcVar9 = local_res8;
      if (pcVar3 != (char *)0x0) {
        sVar10 = (longlong)pcVar3 - (longlong)local_res8;
        if (sVar10 == 0) {
          sVar10 = 1;
        }
        lVar4 = (*(code *)PTR_calloc_14c6d9f40)(1,8);
        *(longlong *)(lVar1 + 0x448) = lVar4;
        if (lVar4 == 0) goto LAB_1452bfd46;
        uVar5 = (*(code *)PTR_calloc_14c6d9f40)(1,sVar10 + 1);
        **(undefined8 **)(lVar1 + 0x448) = uVar5;
        if ((char *)**(undefined8 **)(lVar1 + 0x448) == (char *)0x0) goto LAB_1452bfd46;
        strncpy((char *)**(undefined8 **)(lVar1 + 0x448),local_res8,sVar10);
        *(undefined4 *)(lVar1 + 0x480) = 1;
        pcVar9 = pcVar3 + 1;
      }
      goto LAB_1452bfbc0;
    }
    if ((local_res10 != 0) && (local_res8[local_res10 + -1] != '/')) goto LAB_1452bfbc0;
  }
  *(size_t *)(lVar1 + 0x440) = sVar6;
  if (((*(char *)(param_1 + 0x13d8) != '\0') && (sVar6 == 0)) && (*(int *)(puVar11 + 2) == 0)) {
    FUN_144f14b70(param_1,"Uploading to a URL without a file name");
    (*(code *)PTR_free_14c6d9f28)(local_res8);
    return 3;
  }
  *(undefined1 *)(lVar1 + 0x49d) = 0;
  if ((*(char *)(param_1 + 0x6f8) != '\x02') || (*local_res8 != '/')) {
    if (*(char *)(lVar1 + 0x2cf) == '\0') {
      pcVar9 = "";
    }
    else {
      pcVar9 = *(char **)(lVar1 + 0x458);
      if (pcVar9 == (char *)0x0) goto LAB_1452bfdfc;
    }
    sVar6 = 0xffffffffffffffff;
    if (*(char *)(param_1 + 0x6f8) != '\x02') {
      sVar10 = *(size_t *)(lVar1 + 0x440);
      if (sVar10 != 0) {
        _MaxCount = 0xffffffffffffffff;
        do {
          _MaxCount = _MaxCount + 1;
        } while (*(char *)(sVar10 + _MaxCount) != '\0');
      }
      _MaxCount = local_res10 - _MaxCount;
    }
    do {
      sVar6 = sVar6 + 1;
    } while (pcVar9[sVar6] != '\0');
    if ((sVar6 != _MaxCount) || (iVar2 = strncmp(local_res8,pcVar9,_MaxCount), iVar2 != 0))
    goto LAB_1452bfdfc;
    FUN_144f14ad0(param_1,"Request has same path as previous transfer");
  }
  *(undefined1 *)(lVar1 + 0x49d) = 1;
LAB_1452bfdfc:
  (*(code *)PTR_free_14c6d9f28)(local_res8);
  return 0;
}



// FUNCTION 1452bfe30 FUN_1452bfe30 body=416 status=ok
// SIG undefined FUN_1452bfe30(void)

int FUN_1452bfe30(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  FUN_144f25da0(param_1,0);
  FUN_144f25d60(param_1,0);
  FUN_144f25d20(param_1,0xffffffffffffffff);
  FUN_144f25ce0(param_1,0xffffffffffffffff);
  *(undefined1 *)(lVar1 + 0x49c) = 1;
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0x10) = 1;
  }
  *param_2 = '\0';
  iVar4 = FUN_1452c0120(param_1,1,0xc);
  if (iVar4 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    iVar4 = FUN_14550be10(param_1,lVar2 + 0x3a0,0,0);
    *param_2 = *(char *)(lVar2 + 0x496) == '\0';
    cVar3 = FUN_144f14020(*(undefined8 *)(param_1 + 0x20),1);
    FUN_144f14ad0(param_1,"ftp_perform ends with SECONDARY: %d",cVar3);
    if (iVar4 == 0) {
      if (*param_2 == '\0') {
        return 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = *(longlong *)(param_1 + 0x1a8);
      if ((cVar3 != '\0') && (iVar4 = FUN_1452bf130(param_1,local_res8), iVar4 != 0)) {
        FUN_144f14100(param_1,1);
        FUN_144f13cf0(param_1,lVar1,1);
        return iVar4;
      }
      if (*(int *)(lVar2 + 0x10) != 0) {
        FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
        *(undefined1 *)(lVar1 + 0x49c) = 1;
        return 0;
      }
      if (cVar3 == '\0') {
        *(undefined1 *)(lVar1 + 0x2d5) = 1;
      }
      *(undefined1 *)(lVar1 + 0x49c) = 1;
      return 0;
    }
  }
  FUN_1452c0ab0(lVar1 + 0x3a0);
  return iVar4;
}



// FUNCTION 1452bffd0 FUN_1452bffd0 body=211 status=ok
// SIG undefined FUN_1452bffd0(void)

void FUN_1452bffd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10) != 0) {
    *(undefined1 *)(lVar1 + 0x496) = 0xd;
    FUN_1452c0120(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),0xd);
    return;
  }
  if (*(char *)(param_1 + 0xabf) != '\0') {
    FUN_1452c11c0(param_1,0);
    return;
  }
  if (*(char *)(param_1 + 0xac2) == '\0') {
    FUN_1452c19f0();
    return;
  }
  puVar4 = *(undefined **)(lVar1 + 0x440);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x750);
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = &DAT_149d267d4, *(char *)(param_1 + 0x13d3) != '\0')) {
      puVar4 = &DAT_149d27658;
    }
    pcVar3 = "PRET %s";
  }
  else {
    pcVar3 = "PRET STOR %s";
    if (*(char *)(param_1 + 0x13d8) == '\0') {
      pcVar3 = "PRET RETR %s";
    }
  }
  iVar2 = FUN_14550c120(param_1,lVar1 + 0x3a0,pcVar3,puVar4);
  if (iVar2 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1d;
    return;
  }
  return;
}



// FUNCTION 1452c00b0 FUN_1452c00b0 body=99 status=ok
// SIG undefined FUN_1452c00b0(void)

void FUN_1452c00b0(longlong param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0xaba) != '\0') || (*(char *)(param_1 + 0x530) != '\0')) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x440) != 0)) {
    iVar1 = FUN_14550c120(param_1,*(longlong *)(param_1 + 0x20) + 0x3a0,"MDTM %s");
    if (iVar1 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x12;
      return;
    }
    return;
  }
  FUN_1452c1ba0();
  return;
}



// FUNCTION 1452c0120 FUN_1452c0120 body=643 status=ok
// SIG undefined FUN_1452c0120(void)

ulonglong FUN_1452c0120(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar10 = *(longlong *)(param_1 + 0x1a8);
  iVar4 = 0;
  lVar1 = lVar2 + 0x3a0;
  if (param_3 == '\f') {
LAB_1452c017b:
    puVar7 = *(undefined8 **)(param_1 + 0x700);
  }
  else if ((param_3 == '\r') || (param_3 == '\x0e')) {
    puVar7 = *(undefined8 **)(param_1 + 0x710);
  }
  else {
    if (param_3 != '\x0f') goto LAB_1452c017b;
    puVar7 = *(undefined8 **)(param_1 + 0x708);
  }
  if (param_2 == '\0') {
    iVar8 = *(int *)(lVar2 + 0x488) + 1;
    *(int *)(lVar2 + 0x488) = iVar8;
  }
  else {
    *(undefined4 *)(lVar2 + 0x488) = 0;
    iVar8 = iVar4;
  }
  if (puVar7 != (undefined8 *)0x0) {
    if (iVar8 < 1) {
LAB_1452c01c4:
      pcVar3 = (char *)*puVar7;
      pcVar9 = pcVar3 + 1;
      if (*pcVar3 != '*') {
        pcVar9 = pcVar3;
      }
      *(uint *)(lVar2 + 0x48c) = (uint)(*pcVar3 == '*');
      uVar6 = FUN_14550c120(param_1,lVar1,&DAT_149972340,pcVar9);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(char *)(*(longlong *)(param_1 + 0x20) + 0x496) = param_3;
      return uVar6 & 0xffffffff;
    }
    do {
      if (puVar7 == (undefined8 *)0x0) goto LAB_1452c020a;
      puVar7 = (undefined8 *)puVar7[1];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar8);
    if (puVar7 != (undefined8 *)0x0) goto LAB_1452c01c4;
  }
LAB_1452c020a:
  if (param_3 != '\f') {
    if (param_3 == '\r') {
      if (*(int *)(lVar10 + 0x10) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
        return 0;
      }
      if (*(longlong *)(lVar2 + 0x478) == -1) {
        if ((*(char *)(param_1 + 0xad5) == '\0') && (*(char *)(param_1 + 0x13d2) == '\0')) {
          uVar5 = FUN_14550c120(param_1,lVar1,"SIZE %s",*(undefined8 *)(lVar2 + 0x440));
          if (uVar5 != 0) {
            return (ulonglong)uVar5;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x18;
          return 0;
        }
        uVar5 = FUN_14550c120(param_1,lVar1,"RETR %s",*(undefined8 *)(lVar2 + 0x440));
        if (uVar5 != 0) {
          return (ulonglong)uVar5;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x20;
        return 0;
      }
      FUN_144f25ce0(param_1);
      uVar5 = FUN_1452c08c0(param_1,*(undefined8 *)(lVar2 + 0x478));
      goto LAB_1452c0388;
    }
    if (param_3 == '\x0e') {
      uVar5 = FUN_1452c1c00(param_1,0);
      goto LAB_1452c0388;
    }
    if (param_3 == '\x0f') {
      return 0;
    }
  }
  if (*(char *)(lVar2 + 0x49d) == '\0') {
    *(undefined4 *)(lVar2 + 0x48c) = 0;
    if (((*(char *)(lVar2 + 0x2cf) != '\0') && (lVar10 = *(longlong *)(lVar2 + 0x438), lVar10 != 0))
       && ((*(int *)(lVar2 + 0x480) == 0 || (*(char *)**(undefined8 **)(lVar2 + 0x448) != '/')))) {
      *(undefined4 *)(lVar2 + 0x484) = 0;
LAB_1452c035a:
      uVar5 = FUN_14550c120(param_1,lVar1,"CWD %s",lVar10);
      if (uVar5 != 0) {
        return (ulonglong)uVar5;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x10;
      return 0;
    }
    if (*(int *)(lVar2 + 0x480) != 0) {
      *(undefined4 *)(lVar2 + 0x484) = 1;
      lVar10 = **(longlong **)(lVar2 + 0x448);
      goto LAB_1452c035a;
    }
  }
  uVar5 = FUN_1452c00b0(param_1);
LAB_1452c0388:
  return (ulonglong)uVar5;
}



// FUNCTION 1452c03b0 FUN_1452c03b0 body=148 status=ok
// SIG undefined FUN_1452c03b0(void)

void FUN_1452c03b0(longlong param_1,longlong param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  
  cVar2 = 'I';
  if (param_3 != '\0') {
    cVar2 = 'A';
  }
  if (*(char *)(param_2 + 0x460) == cVar2) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = param_4;
    FUN_1452c2750(param_1,200,param_4);
  }
  else {
    iVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,"TYPE %c",cVar2);
    if (iVar1 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = param_4;
      *(char *)(param_2 + 0x460) = cVar2;
    }
  }
  return;
}



// FUNCTION 1452c0450 FUN_1452c0450 body=417 status=ok
// SIG undefined FUN_1452c0450(void)

ulonglong FUN_1452c0450(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char *_Str;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  plVar2 = *(longlong **)(param_1 + 0x13e0);
  _Str = (char *)*puVar1;
  pcVar3 = strrchr(_Str,0x2f);
  if (pcVar3 == (char *)0x0) {
    if (*_Str == '\0') goto LAB_1452c0493;
    lVar5 = (*(code *)PTR__strdup_14c6d9f38)(_Str);
    plVar2[1] = lVar5;
    if (lVar5 == 0) {
      return 0x1b;
    }
    *_Str = '\0';
  }
  else {
    if (pcVar3[1] == '\0') {
LAB_1452c0493:
      *(undefined1 *)(plVar2 + 8) = 4;
      uVar4 = FUN_1452bfa80(param_1);
      return uVar4;
    }
    lVar5 = (*(code *)PTR__strdup_14c6d9f38)(pcVar3 + 1);
    plVar2[1] = lVar5;
    if (lVar5 == 0) {
      return 0x1b;
    }
    pcVar3[1] = '\0';
  }
  plVar6 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1);
  if (plVar6 == (longlong *)0x0) {
    uVar7 = 0x1b;
    goto LAB_1452c0539;
  }
  lVar5 = FUN_144f236b0();
  *plVar6 = lVar5;
  if (lVar5 == 0) {
LAB_1452c0523:
    uVar7 = 0x1b;
  }
  else {
    plVar2[6] = (longlong)plVar6;
    plVar2[7] = (longlong)FUN_1452c0890;
    if (*(char *)(param_1 + 0x6f8) == '\x02') {
      *(undefined1 *)(param_1 + 0x6f8) = 1;
    }
    uVar7 = FUN_1452bfa80(param_1);
    if (uVar7 == 0) {
      lVar5 = (*(code *)PTR__strdup_14c6d9f38)(*puVar1);
      *plVar2 = lVar5;
      if (lVar5 != 0) {
        plVar6[1] = *(longlong *)(param_1 + 0x238);
        *(code **)(param_1 + 0x238) = FUN_144f229b0;
        plVar6[2] = *(longlong *)(param_1 + 0x1f0);
        *(longlong *)(param_1 + 0x1f0) = param_1;
        FUN_144f14ad0(param_1,"Wildcard - Parsing started");
        return 0;
      }
      goto LAB_1452c0523;
    }
  }
  FUN_144f236c0(plVar6);
  (*(code *)PTR_free_14c6d9f28)(plVar6);
LAB_1452c0539:
  (*(code *)PTR_free_14c6d9f28)(plVar2[1]);
  plVar2[1] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  return (ulonglong)uVar7;
}



// FUNCTION 1452c0600 FUN_1452c0600 body=612 status=ok
// SIG undefined FUN_1452c0600(void)

ulonglong FUN_1452c0600(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar1 = *(undefined8 **)(param_1 + 0x13e0);
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar9 = 0;
  do {
    switch(*(undefined1 *)(puVar1 + 8)) {
    case 0:
    case 6:
    case 7:
      if ((code *)puVar1[7] != (code *)0x0) {
        (*(code *)puVar1[7])(puVar1[6]);
        puVar1[6] = 0;
      }
      return 0;
    case 1:
      uVar9 = FUN_1452c0450(param_1);
      if (*(char *)(puVar1 + 8) != '\x04') {
        uVar5 = 2;
        if ((int)uVar9 != 0) {
          uVar5 = 6;
        }
        *(undefined1 *)(puVar1 + 8) = uVar5;
        return uVar9 & 0xffffffff;
      }
      return uVar9;
    case 2:
      puVar4 = (undefined8 *)puVar1[6];
      *(undefined8 *)(param_1 + 0x238) = puVar4[1];
      *(undefined8 *)(param_1 + 0x1f0) = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined1 *)(puVar1 + 8) = 3;
      iVar6 = FUN_144f236a0(*puVar4);
      if (iVar6 == 0) {
        if (puVar1[5] == 0) {
          *(undefined1 *)(puVar1 + 8) = 4;
          return 0x4e;
        }
      }
      else {
        *(undefined1 *)(puVar1 + 8) = 4;
      }
      break;
    case 3:
      plVar3 = *(longlong **)(param_1 + 0x1a8);
      puVar4 = *(undefined8 **)puVar1[2];
      lVar8 = FUN_144f2b8b0(&DAT_149c07c50,*puVar1,*puVar4);
      if (lVar8 == 0) {
        return 0x1b;
      }
      (*(code *)PTR_free_14c6d9f28)(plVar3[1]);
      *plVar3 = lVar8;
      plVar3[1] = lVar8;
      FUN_144f14ad0(param_1,"Wildcard - START of \"%s\"");
      if (*(longlong *)(param_1 + 0xa00) != 0) {
        FUN_144bbace0(param_1,1);
        iVar6 = (**(code **)(param_1 + 0xa00))(puVar4,*(undefined8 *)(param_1 + 0xa20));
        FUN_144bbace0(param_1,0);
        if (iVar6 == 1) {
          return 0x58;
        }
        if (iVar6 == 2) {
          FUN_144f14ad0(param_1,"Wildcard - \"%s\" skipped by user");
          *(undefined1 *)(puVar1 + 8) = 5;
          break;
        }
      }
      if (*(int *)(puVar4 + 1) == 0) {
        if ((*(byte *)(puVar4 + 0xc) & 0x40) != 0) {
          *(undefined8 *)(lVar2 + 0x478) = puVar4[5];
        }
        uVar9 = FUN_1452bfa80(param_1);
        if ((int)uVar9 == 0) {
          FUN_144f1a7d0(puVar1 + 2,puVar1[2],0);
          if (puVar1[5] != 0) {
            return 0;
          }
          *(undefined1 *)(puVar1 + 8) = 4;
          return 0;
        }
        return uVar9;
      }
      *(undefined1 *)(puVar1 + 8) = 5;
      break;
    case 4:
      if ((undefined8 *)puVar1[6] != (undefined8 *)0x0) {
        uVar7 = FUN_144f236a0(*(undefined8 *)puVar1[6]);
        uVar9 = (ulonglong)uVar7;
      }
      *(char *)(puVar1 + 8) = ((int)uVar9 == 0) + '\x06';
      return uVar9;
    case 5:
      if (*(longlong *)(param_1 + 0xa08) != 0) {
        FUN_144bbace0(param_1,0x140000001);
        (**(code **)(param_1 + 0xa08))(*(undefined8 *)(param_1 + 0xa20));
        FUN_144bbace0(param_1,0);
      }
      FUN_144f1a7d0(puVar1 + 2,puVar1[2],0);
      *(char *)(puVar1 + 8) = (puVar1[5] == 0) + '\x03';
    }
  } while( true );
}



// FUNCTION 1452c0890 FUN_1452c0890 body=40 status=ok
// SIG undefined FUN_1452c0890(void)

void FUN_1452c0890(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FUN_144f236c0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001452c08b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(param_1);
  return;
}



// FUNCTION 1452c08c0 FUN_1452c08c0 body=432 status=ok
// SIG undefined FUN_1452c08c0(void)

ulonglong FUN_1452c08c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (*(longlong *)(param_1 + 0x6f0) < param_2)) {
    FUN_144f14b70(param_1,"Maximum file size exceeded");
    return 0x3f;
  }
  *(longlong *)(lVar1 + 0x18) = param_2;
  lVar3 = *(longlong *)(param_1 + 0x11c0);
  if (lVar3 == 0) {
    uVar4 = FUN_14550c120(param_1,lVar2 + 0x3a0,"RETR %s",*(undefined8 *)(lVar2 + 0x440));
    uVar6 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x20;
    }
  }
  else {
    if (param_2 == -1) {
      FUN_144f14ad0(param_1,"ftp server doesn\'t support SIZE");
    }
    else if (lVar3 < 0) {
      if (param_2 < -lVar3) {
LAB_1452c095c:
        FUN_144f14b70(param_1,"Offset (%I64d) was beyond file size (%I64d)",lVar3,param_2);
        return 0x24;
      }
      *(longlong *)(lVar1 + 0x18) = -lVar3;
      *(longlong *)(param_1 + 0x11c0) = param_2 + lVar3;
    }
    else {
      if (param_2 < lVar3) goto LAB_1452c095c;
      *(longlong *)(lVar1 + 0x18) = param_2 - lVar3;
    }
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      FUN_144f14ad0(param_1,"File already completely downloaded");
      *(undefined4 *)(lVar1 + 0x10) = 2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
      return 0;
    }
    FUN_144f14ad0(param_1,"Instructs server to resume from offset %I64d",
                  *(undefined8 *)(param_1 + 0x11c0));
    uVar5 = FUN_14550c120(param_1,lVar2 + 0x3a0,"REST %I64d",*(undefined8 *)(param_1 + 0x11c0));
    uVar6 = uVar5 & 0xffffffff;
    if ((int)uVar5 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1b;
      return uVar5;
    }
  }
  return uVar6;
}



// FUNCTION 1452c0a70 FUN_1452c0a70 body=53 status=ok
// SIG undefined FUN_1452c0a70(void)

void FUN_1452c0a70(undefined8 param_1,undefined8 param_2)

{
  FUN_144f14100(param_1,1);
  FUN_144f13cf0(param_1,param_2,1);
  return;
}



// FUNCTION 1452c0ab0 FUN_1452c0ab0 body=178 status=ok
// SIG undefined FUN_1452c0ab0(void)

void FUN_1452c0ab0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar3 = uVar1;
    if (0 < *(int *)(param_1 + 0xe0)) {
      do {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0xa8)));
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
        *(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0xa8)) = 0;
        uVar3 = uVar3 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0xe0));
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 1452c0b70 FUN_1452c0b70 body=316 status=ok
// SIG undefined FUN_1452c0b70(void)

void FUN_1452c0b70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x1b0);
  local_a0 = -1;
  local_a8[0] = 0x80;
  iVar3 = Ordinal_6(uVar2,local_98,local_a8);
  if (iVar3 == 0) {
    local_a8[0] = 0x80;
    local_a0 = Ordinal_1(uVar2,local_98,local_a8);
  }
  if (local_a0 == -1) {
    FUN_144f14b70(param_1,"Error accept()ing server connect");
  }
  else {
    FUN_144f14ad0(param_1,"Connection accepted from server");
    *(undefined1 *)(lVar1 + 0x2d5) = 0;
    FUN_14550a4f0(local_a0,1);
    iVar3 = FUN_1452d0ad0(param_1,lVar1,1,&local_a0);
    if ((iVar3 == 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
      FUN_144bbace0(param_1,1);
      iVar3 = (**(code **)(param_1 + 0x278))(*(undefined8 *)(param_1 + 0x280),local_a0,1);
      FUN_144bbace0(param_1,0);
      if (iVar3 != 0) {
        FUN_1452c0a70(param_1,lVar1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1452c0cd0 FUN_1452c0cd0 body=160 status=ok
// SIG undefined FUN_1452c0cd0(void)

void FUN_1452c0cd0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 60000;
  if (*(uint *)(param_1 + 0x6fc) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x6fc);
  }
  puVar1 = (undefined4 *)FUN_144f07150(&local_48);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  lVar2 = FUN_144f15e70(param_1,&local_28,0);
  if ((lVar2 == 0) || ((longlong)uVar3 <= lVar2)) {
    local_38 = *(undefined4 *)(param_1 + 3000);
    uStack_34 = *(undefined4 *)(param_1 + 0xbbc);
    uStack_30 = *(undefined4 *)(param_1 + 0xbc0);
    uStack_2c = *(undefined4 *)(param_1 + 0xbc4);
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    FUN_144f071e0(&local_48,&local_38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 1452c0d80 FUN_1452c0d80 body=372 status=ok
// SIG undefined FUN_1452c0d80(void)

undefined8 FUN_1452c0d80(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar1 + 0x1a8);
  uVar2 = *(undefined8 *)(lVar1 + 0x1b0);
  *param_2 = 0;
  lVar4 = FUN_1452c0cd0();
  FUN_144f14ad0(param_1,"Checking for server connect");
  if (lVar4 < 0) {
    FUN_144f14b70(param_1,"Accept timeout occurred while waiting server connect");
    return 0xc;
  }
  if (((*(longlong *)(lVar1 + 0x3a8) == 0) || (*(char **)(lVar1 + 0x3a0) == (char *)0x0)) ||
     (**(char **)(lVar1 + 0x3a0) < '4')) {
    uVar3 = FUN_144f26bb0(uVar5,uVar2,0xffffffffffffffff);
    if (uVar3 != 0xffffffff) {
      if (uVar3 != 0) {
        if ((uVar3 & 8) == 0) {
          if ((uVar3 & 1) != 0) {
            FUN_144f14ad0(param_1,"Ctrl conn has data while waiting for data conn");
            FUN_1452bf670(param_1,local_res10,local_res8);
            uVar5 = 8;
            if (3 < local_res8[0] / 100) {
              uVar5 = 10;
            }
            return uVar5;
          }
        }
        else {
          FUN_144f14ad0(param_1,"Ready to accept data connection from server");
          *param_2 = 1;
        }
      }
      return 0;
    }
    FUN_144f14b70(param_1,"Error while waiting for server connect");
  }
  else {
    FUN_144f14ad0(param_1,"There is negative response in cache while serv connect");
    FUN_1452bf670(param_1,local_res10,local_res8);
  }
  return 10;
}



// FUNCTION 1452c0f00 FUN_1452c0f00 body=225 status=ok
// SIG undefined FUN_1452c0f00(void)

undefined8 FUN_1452c0f00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar5 = 1;
  if ((((*(char *)(lVar1 + 0x2db) != '\0') && (*(char *)(param_1 + 0xabf) != '\0')) &&
      (cVar2 = FUN_144f14080(lVar1,1), cVar2 == '\0')) &&
     (uVar3 = FUN_144f0d480(param_1,lVar1,1), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar3 = FUN_144f13f00(param_1,1,1,local_res8);
  if (((int)uVar3 == 0) && (local_res8[0] != (char)uVar3)) {
    if (*(char *)(lVar1 + 0x497) == '!') {
      FUN_144f25d20(param_1,*(undefined8 *)(param_1 + 0x11f8));
      FUN_1452d06b0(*(undefined8 *)(lVar1 + 0x1b0));
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x468);
      uVar4 = 1;
      uVar5 = 0xffffffff;
    }
    FUN_144f24c20(param_1,uVar4,uVar3,0,uVar5);
    *(undefined1 *)(lVar1 + 0x3c0) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1452c0ff0 FUN_1452c0ff0 body=200 status=ok
// SIG undefined FUN_1452c0ff0(void)

ulonglong FUN_1452c0ff0(longlong param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 local_18 [16];
  
  *param_2 = '\0';
  FUN_144f14ad0(param_1,"Preparing for accepting server on data port");
  FUN_144f25fd0(local_18,param_1,9);
  lVar1 = FUN_1452c0cd0(param_1);
  if (lVar1 < 0) {
    FUN_144f14b70(param_1,"Accept timeout occurred while waiting server connect");
    return 0xc;
  }
  uVar2 = FUN_1452c0d80(param_1,param_2);
  if ((int)uVar2 == 0) {
    if (*param_2 == (char)uVar2) {
      iVar3 = 60000;
      if (*(int *)(param_1 + 0x6fc) != 0) {
        iVar3 = *(int *)(param_1 + 0x6fc);
      }
      FUN_144bba820(param_1,iVar3,0xd);
      uVar2 = uVar2 & 0xffffffff;
    }
    else {
      uVar2 = FUN_1452c0b70(param_1);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1452c0f00(param_1);
        return uVar2;
      }
    }
  }
  return uVar2;
}



// FUNCTION 1452c10c0 FUN_1452c10c0 body=95 status=ok
// SIG undefined FUN_1452c10c0(void)

undefined8
FUN_1452c10c0(undefined8 param_1,undefined8 param_2,char *param_3,ulonglong param_4,
             undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((((3 < param_4) && ((byte)(*param_3 - 0x30U) < 10)) && ((byte)(param_3[1] - 0x30U) < 10)) &&
     (((byte)(param_3[2] - 0x30U) < 10 && (param_3[3] == ' ')))) {
    lVar1 = strtol(param_3,(char **)0x0,10);
    uVar2 = FUN_144f16fd0(lVar1);
    *param_5 = uVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1452c1120 FUN_1452c1120 body=88 status=ok
// SIG undefined FUN_1452c1120(void)

void FUN_1452c1120(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_14996de1b;
  if (*(undefined1 **)(param_2 + 0x150) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x150);
  }
  iVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,"USER %s",puVar2);
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x49a) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 3;
  }
  return;
}



// FUNCTION 1452c1180 FUN_1452c1180 body=56 status=ok
// SIG undefined FUN_1452c1180(void)

void FUN_1452c1180(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,&DAT_149d274dc);
  if (iVar1 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 9;
  }
  return;
}



// FUNCTION 1452c11c0 FUN_1452c11c0 body=2057 status=ok
// SIG undefined FUN_1452c11c0(void)

void FUN_1452c11c0(longlong param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong **pplVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  size_t _Count;
  undefined1 auStack_6c8 [32];
  undefined8 local_6a8;
  char *local_6a0;
  uint local_698;
  undefined4 local_688 [2];
  longlong local_680;
  uint local_678;
  longlong *local_670;
  longlong **local_668;
  longlong *local_660;
  short local_658;
  undefined2 local_656;
  undefined1 local_654 [4];
  undefined1 local_650 [120];
  char local_5d8;
  undefined8 local_5d7;
  undefined8 uStack_5cf;
  undefined8 local_5c7;
  undefined8 uStack_5bf;
  undefined8 local_5b7;
  undefined4 local_5af;
  undefined2 local_5ab;
  longlong *local_5a8 [10];
  undefined1 local_558 [256];
  longlong *local_458 [130];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  lVar16 = *(longlong *)(param_1 + 0x20);
  pcVar13 = *(char **)(param_1 + 0x780);
  local_670 = (longlong *)0xffffffffffffffff;
  local_5d8 = '\0';
  local_5b7 = 0;
  uVar6 = 0;
  local_5af = 0;
  bVar1 = true;
  local_5ab = 0;
  local_660 = (longlong *)0x0;
  local_678 = local_678 & 0xffff0000;
  local_668 = (longlong **)0x0;
  local_5d7 = 0;
  uStack_5cf = 0;
  local_5c7 = 0;
  uStack_5bf = 0;
  local_680 = lVar16;
  if (pcVar13 == (char *)0x0) {
LAB_1452c148e:
    local_688[0] = 0x80;
    iVar9 = Ordinal_6(*(undefined8 *)(lVar16 + 0x1a8),&local_658,local_688);
    if (iVar9 == 0) {
      if (local_658 == 0x17) {
        puVar17 = local_650;
        sVar5 = 0x17;
      }
      else {
        puVar17 = local_654;
        sVar5 = local_658;
      }
      lVar14 = inet_ntop(sVar5,puVar17,local_458,0x401);
      if (lVar14 == 0) goto LAB_1452c198c;
      pplVar11 = local_458;
      bVar1 = false;
      goto LAB_1452c151b;
    }
LAB_1452c14b1:
    uVar8 = Ordinal_111();
    pplVar11 = (longlong **)FUN_144bbe240(uVar8,local_558,0x100);
    pcVar13 = "getsockname() failed: %s";
  }
  else {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (pcVar13[uVar10] != '\0');
    if (uVar10 < 2) goto LAB_1452c148e;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (pcVar13[uVar10] != '\0');
    if (uVar10 < 0x41) {
      lVar16 = 0x41;
    }
    else {
      lVar16 = -1;
      do {
        lVar16 = lVar16 + 1;
      } while (pcVar13[lVar16] != '\0');
    }
    pplVar11 = (longlong **)(*(code *)PTR_calloc_14c6d9f40)(lVar16 + 1,1);
    lVar16 = local_680;
    local_668 = pplVar11;
    if (pplVar11 == (longlong **)0x0) goto LAB_1452c198c;
    if (*pcVar13 == '[') {
      pcVar12 = strchr(pcVar13,0x5d);
      if (pcVar12 == (char *)0x0) {
LAB_1452c13ee:
        uVar3 = 0;
        uVar4 = uVar3;
      }
      else {
        _Count = (longlong)pcVar12 - (longlong)(pcVar13 + 1);
        pplVar11 = local_668;
        pcVar13 = pcVar13 + 1;
LAB_1452c1365:
        strncpy((char *)pplVar11,pcVar13,_Count);
        pcVar13 = pcVar12;
LAB_1452c136b:
        pcVar13 = strchr(pcVar13,0x3a);
        uVar3 = 0;
        uVar4 = uVar3;
        if (pcVar13 != (char *)0x0) {
          uVar7 = strtoul(pcVar13 + 1,(char **)0x0,10);
          uVar3 = FUN_144f16fa0(uVar7);
          pcVar13 = strchr(pcVar13,0x2d);
          uVar4 = uVar3;
          if (pcVar13 != (char *)0x0) {
            uVar7 = strtoul(pcVar13 + 1,(char **)0x0,10);
            uVar4 = FUN_144f16fa0(uVar7);
          }
        }
      }
    }
    else {
      if (*pcVar13 == ':') goto LAB_1452c136b;
      pcVar12 = strchr(pcVar13,0x3a);
      if (pcVar12 == (char *)0x0) {
        lVar16 = (longlong)pplVar11 - (longlong)pcVar13;
        do {
          cVar2 = *pcVar13;
          pcVar13[lVar16] = cVar2;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        goto LAB_1452c13ee;
      }
      iVar9 = inet_pton(0x17,pcVar13,local_650);
      if (iVar9 != 1) {
        _Count = (longlong)pcVar12 - (longlong)pcVar13;
        goto LAB_1452c1365;
      }
      lVar16 = (longlong)pplVar11 - (longlong)pcVar13;
      do {
        cVar2 = *pcVar13;
        pcVar13[lVar16] = cVar2;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      uVar3 = 0;
      uVar4 = uVar3;
    }
    lVar16 = local_680;
    local_678 = 0;
    uVar6 = 0;
    if (uVar3 <= uVar4) {
      local_678 = (uint)uVar4;
      uVar6 = uVar3;
    }
    if (*(char *)local_668 == '\0') goto LAB_1452c148e;
    uVar8 = FUN_14550d790(*(longlong *)(local_680 + 0x58) + 0x10);
    pplVar11 = local_668;
    local_6a8 = local_458;
    local_6a0 = (char *)CONCAT44(local_6a0._4_4_,0x401);
    iVar9 = FUN_14550d820(**(undefined4 **)(lVar16 + 0x58),uVar8,*(undefined4 *)(lVar16 + 0x4cc),
                          local_668);
    if (iVar9 != 0) {
      if (iVar9 == 1) goto LAB_1452c198c;
      pplVar11 = (longlong **)0x0;
      if (iVar9 == 2) {
        pplVar11 = local_458;
      }
    }
    if (pplVar11 == (longlong **)0x0) goto LAB_1452c148e;
LAB_1452c151b:
    local_6a8 = &local_660;
    iVar9 = FUN_144f1af60(param_1,pplVar11,0,0);
    if (iVar9 == 1) {
      FUN_144f07610(param_1,&local_660);
    }
    if (local_660 != (longlong *)0x0) {
      lVar14 = *local_660;
      FUN_144f1b540(param_1);
      if (lVar14 != 0) {
        do {
          local_6a8 = &local_670;
          iVar9 = FUN_1452d05c0(param_1,lVar14,0,*(undefined1 *)(lVar16 + 0x4d7));
          if (iVar9 == 0) {
            memcpy(&local_658,*(void **)(lVar14 + 0x20),(longlong)*(int *)(lVar14 + 0x10));
            local_688[0] = *(undefined4 *)(lVar14 + 0x10);
            uVar3 = (ushort)local_678;
            uVar4 = uVar6;
            goto joined_r0x0001452c15e9;
          }
          uVar8 = Ordinal_111();
          lVar14 = *(longlong *)(lVar14 + 0x28);
        } while (lVar14 != 0);
        pplVar11 = (longlong **)FUN_144bbe240(uVar8,local_558,0x100);
        pcVar13 = "socket failure: %s";
        goto LAB_1452c197f;
      }
    }
    pcVar13 = "failed to resolve the address provided to PORT: %s";
  }
LAB_1452c197f:
  FUN_144f14b70(param_1,pcVar13,pplVar11);
  goto LAB_1452c198c;
joined_r0x0001452c15e9:
  if (uVar3 < uVar4) goto LAB_1452c16a5;
  while( true ) {
    local_656 = Ordinal_9(uVar4);
    iVar9 = Ordinal_2(local_670,&local_658,local_688[0]);
    if (iVar9 == 0) {
      if (uVar3 < uVar4) goto LAB_1452c16a5;
      local_688[0] = 0x80;
      iVar9 = Ordinal_6(local_670,&local_658,local_688);
      if (iVar9 != 0) {
        uVar8 = Ordinal_111();
        uVar15 = FUN_144bbe240(uVar8,local_558,0x100);
        FUN_144f14b70(param_1,"getsockname() failed: %s",uVar15);
        lVar16 = local_680;
        goto LAB_1452c198c;
      }
      iVar9 = Ordinal_13(local_670,1);
      if (iVar9 == 0) {
        FUN_144f1b750(lVar14,&local_5d8,0x2f);
        lVar16 = local_680;
        sVar5 = local_658;
        if ((*(char *)(local_680 + 0x2da) == '\0') && (*(char *)(local_680 + 0x2d4) != '\0')) {
          *(undefined1 *)(local_680 + 0x2da) = 1;
        }
        goto joined_r0x0001452c17c3;
      }
      uVar8 = Ordinal_111();
      uVar15 = FUN_144bbe240(uVar8,local_558,0x100);
      FUN_144f14b70(param_1,"socket failure: %s",uVar15);
      lVar16 = local_680;
      goto LAB_1452c198c;
    }
    iVar9 = Ordinal_111();
    if ((!bVar1) || (iVar9 != 0x2741)) break;
    uVar15 = FUN_144bbe240(0x2741,local_558,0x100);
    FUN_144f14ad0(param_1,"bind(port=%hu) on non-local address failed: %s",uVar4,uVar15);
    lVar16 = local_680;
    local_688[0] = 0x80;
    iVar9 = Ordinal_6(*(undefined8 *)(local_680 + 0x1a8),&local_658,local_688);
    if (iVar9 != 0) goto LAB_1452c14b1;
    bVar1 = false;
    uVar4 = uVar6;
  }
  if ((iVar9 != 0x2740) && (iVar9 != 0xd)) {
    uVar15 = FUN_144bbe240(iVar9,local_558,0x100);
    FUN_144f14b70(param_1,"bind(port=%hu) failed: %s",uVar4,uVar15);
    lVar16 = local_680;
    goto LAB_1452c198c;
  }
  uVar4 = uVar4 + 1;
  goto joined_r0x0001452c15e9;
LAB_1452c16a5:
  FUN_144f14b70(param_1,"bind() failed, we ran out of ports");
  lVar16 = local_680;
  goto LAB_1452c198c;
joined_r0x0001452c17c3:
  if (param_2 == 2) goto LAB_1452c1824;
  if ((((*(char *)(lVar16 + 0x2da) != '\0') || (param_2 != 0)) && ((param_2 != 1 || (sVar5 == 2))))
     && ((sVar5 == 2 || (sVar5 == 0x17)))) {
    uVar6 = Ordinal_15(local_656);
    if (param_2 == 0) {
      local_698 = (uint)uVar6;
      local_6a0 = &local_5d8;
      local_6a8 = (longlong **)CONCAT44(local_6a8._4_4_,(local_658 != 2) + 1);
      iVar9 = FUN_14550c120(param_1,lVar16 + 0x3a0,"%s |%d|%s|%hu|",&DAT_149d27310);
      if (iVar9 != 0) {
        uVar15 = FUN_144bbdb50(iVar9);
        FUN_144f14b70(param_1,"Failure sending EPRT command: %s",uVar15);
        goto LAB_1452c198c;
      }
      goto LAB_1452c1824;
    }
    sVar5 = local_658;
    if (param_2 == 1) {
      pplVar11 = local_5a8;
      pcVar13 = &local_5d8;
      goto LAB_1452c1872;
    }
  }
  param_2 = param_2 + 1;
  goto joined_r0x0001452c17c3;
  while( true ) {
    if (cVar2 == '.') {
      cVar2 = ',';
    }
    *(char *)pplVar11 = cVar2;
    pplVar11 = (longlong **)((longlong)pplVar11 + 1);
    pcVar13 = pcVar13 + 1;
    if (pcVar13 == (char *)0x0) break;
LAB_1452c1872:
    cVar2 = *pcVar13;
    if (cVar2 == '\0') break;
  }
  local_6a8 = (longlong **)(CONCAT44(local_6a8._4_4_,(uint)uVar6) & 0xffffffff000000ff);
  *(char *)pplVar11 = '\0';
  FUN_144f2b7e0(pplVar11,0x14,",%d,%d",uVar6 >> 8);
  local_6a8 = local_5a8;
  iVar9 = FUN_14550c120(param_1,lVar16 + 0x3a0,"%s %s",&DAT_149d27315);
  if (iVar9 == 0) {
LAB_1452c1824:
    *(int *)(lVar16 + 0x488) = param_2;
    iVar9 = FUN_1452d0990(param_1,lVar16,1,&local_670);
    if (iVar9 == 0) {
      local_670 = (longlong *)0xffffffffffffffff;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1c;
      goto LAB_1452c1997;
    }
  }
  else {
    uVar15 = FUN_144bbdb50(iVar9);
    FUN_144f14b70(param_1,"Failure sending PORT command: %s",uVar15);
  }
LAB_1452c198c:
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
LAB_1452c1997:
  if (local_670 != (longlong *)0xffffffffffffffff) {
    FUN_1452d0680(param_1,lVar16);
  }
  (*(code *)PTR_free_14c6d9f28)(local_668);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_6c8);
}



// FUNCTION 1452c19f0 FUN_1452c19f0 body=162 status=ok
// SIG undefined FUN_1452c19f0(void)

ulonglong FUN_1452c19f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x2d9);
  if ((cVar2 == '\0') && (*(char *)(param_2 + 0x2d4) != '\0')) {
    *(undefined1 *)(param_2 + 0x2d9) = 1;
    cVar2 = '\x01';
  }
  uVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,
                        &DAT_149d27320 + (ulonglong)(cVar2 == '\0') * 5);
  if ((int)uVar1 == 0) {
    *(uint *)(param_2 + 0x488) = (uint)(cVar2 == '\0');
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1e;
    FUN_144f14ad0(param_1,"Connect data stream passively");
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1452c1aa0 FUN_1452c1aa0 body=91 status=ok
// SIG undefined FUN_1452c1aa0(void)

void FUN_1452c1aa0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10) != 0) &&
     (*(longlong *)(param_2 + 0x440) != 0)) {
    iVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,"REST %d",0);
    if (iVar1 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1a;
      return;
    }
    return;
  }
  FUN_1452bffd0();
  return;
}



// FUNCTION 1452c1b00 FUN_1452c1b00 body=154 status=ok
// SIG undefined FUN_1452c1b00(void)

ulonglong FUN_1452c1b00(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10);
  if ((iVar1 == 1) && (*(longlong *)(param_2 + 0x440) != 0)) {
    uVar3 = FUN_14550c120(param_1,param_2 + 0x3a0,"SIZE %s");
    if ((int)uVar3 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x17;
      return uVar3;
    }
  }
  else {
    if ((iVar1 == 0) || (*(longlong *)(param_2 + 0x440) == 0)) {
      uVar2 = FUN_1452bffd0(param_1);
    }
    else {
      uVar2 = FUN_14550c120(param_1,param_2 + 0x3a0,"REST %d",0);
      if (uVar2 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1a;
        return 0;
      }
    }
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 1452c1ba0 FUN_1452c1ba0 body=92 status=ok
// SIG undefined FUN_1452c1ba0(void)

void FUN_1452c1ba0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x1d4) != '\0') && (*(longlong *)(lVar1 + 0x440) != 0)) {
    cVar2 = 'I';
    if (*(char *)(param_1 + 0x13d2) != '\0') {
      cVar2 = 'A';
    }
    if (*(char *)(lVar1 + 0x460) != cVar2) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0x10) = 1;
      FUN_1452c03b0(param_1,lVar1,*(undefined1 *)(param_1 + 0x13d2),0x13);
      return;
    }
  }
  FUN_1452c1b00();
  return;
}



// FUNCTION 1452c1c00 FUN_1452c1c00 body=508 status=ok
// SIG undefined FUN_1452c1c00(void)

undefined8 FUN_1452c1c00(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char cVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x11c0);
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  cVar9 = *(char *)(param_1 + 0xabd);
  if (lVar7 != 0) {
    if (param_2 == '\0') {
      if (lVar7 < 0) {
        uVar6 = FUN_14550c120(param_1,lVar1 + 0x3a0,"SIZE %s",*(undefined8 *)(lVar1 + 0x440));
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x19;
        return uVar6;
      }
    }
    else if (lVar7 < 1) goto LAB_1452c1db5;
    cVar9 = '\x01';
    if (*(longlong *)(lVar1 + 0x338) != 0) {
      FUN_144bbace0(param_1,1);
      iVar3 = (**(code **)(lVar1 + 0x338))
                        (*(undefined8 *)(lVar1 + 0x340),*(undefined8 *)(param_1 + 0x11c0),0);
      FUN_144bbace0(param_1,0);
      if (iVar3 != 0) {
        lVar7 = 0;
        if (iVar3 != 2) {
          FUN_144f14b70(param_1,"Could not seek stream");
          return 0x1f;
        }
        do {
          uVar4 = (ulonglong)*(uint *)(param_1 + 0x6cc);
          if (*(longlong *)(param_1 + 0x11c0) - lVar7 <= (longlong)uVar4) {
            uVar4 = FUN_144f17010();
          }
          uVar5 = (**(code **)(param_1 + 0x1218))
                            (*(undefined8 *)(param_1 + 0xcd8),1,uVar4,
                             *(undefined8 *)(param_1 + 0x1220));
          lVar7 = lVar7 + uVar5;
          if ((uVar5 == 0) || (uVar4 < uVar5)) {
            FUN_144f14b70(param_1,"Failed to read data");
            return 0x1f;
          }
        } while (lVar7 < *(longlong *)(param_1 + 0x11c0));
      }
    }
    if ((0 < *(longlong *)(param_1 + 0x11f8)) &&
       (lVar7 = *(longlong *)(param_1 + 0x11f8) - *(longlong *)(param_1 + 0x11c0),
       *(longlong *)(param_1 + 0x11f8) = lVar7, lVar7 < 1)) {
      FUN_144f14ad0(param_1,"File already completely uploaded");
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      *(undefined4 *)(lVar2 + 0x10) = 2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
      return 0;
    }
  }
LAB_1452c1db5:
  pcVar8 = "STOR %s";
  if (cVar9 != '\0') {
    pcVar8 = "APPE %s";
  }
  uVar6 = FUN_14550c120(param_1,lVar1 + 0x3a0,pcVar8,*(undefined8 *)(lVar1 + 0x440));
  if ((int)uVar6 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x21;
  }
  return uVar6;
}



// FUNCTION 1452c1e10 FUN_1452c1e10 body=188 status=ok
// SIG undefined FUN_1452c1e10(void)

undefined8 FUN_1452c1e10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_2 + 0x2d4) != '\0') && (*(char *)(param_2 + 0x2cb) == '\0')) &&
     (*(char *)(param_2 + 0x2c9) == '\0')) {
    FUN_144f14b70(param_1,"Failed EPSV attempt, exiting");
    return 8;
  }
  FUN_144f14ad0(param_1,"Failed EPSV attempt. Disabling EPSV");
  *(undefined1 *)(param_2 + 0x2d9) = 0;
  FUN_144f14100(param_1,1);
  FUN_144f13cf0(param_1,param_2,1);
  *(undefined1 *)(param_1 + 0x13c7) = 0;
  uVar1 = FUN_14550c120(param_1,param_2 + 0x3a0,&DAT_149972340,&DAT_149d27714);
  if ((int)uVar1 == 0) {
    *(int *)(param_2 + 0x488) = *(int *)(param_2 + 0x488) + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1e;
  }
  return uVar1;
}



// FUNCTION 1452c1ed0 FUN_1452c1ed0 body=1289 status=ok
// SIG undefined FUN_1452c1ed0(void)

void FUN_1452c1ed0(longlong param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ulong uVar4;
  int iVar5;
  longlong lVar6;
  char *_Str;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 auStack_1b8 [32];
  undefined8 **local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 *local_178;
  char *local_170;
  ulong local_168 [4];
  short local_158;
  short local_154;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = *(longlong *)(param_1 + 0x20);
  local_178 = (undefined8 *)0x0;
  pcVar8 = (char *)(*(longlong *)(param_1 + 0xcd8) + 4);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar3 + 0x450));
  *(undefined8 *)(lVar3 + 0x450) = 0;
  if (*(int *)(lVar3 + 0x488) != 0) {
    if ((*(int *)(lVar3 + 0x488) == 1) && (param_2 == 0xe3)) {
      cVar1 = *pcVar8;
joined_r0x0001452c2039:
      _Str = pcVar8;
      lVar6 = 0;
      if (cVar1 != '\0') {
        do {
          if (lVar6 != 0) {
            if (*_Str != ',') goto LAB_1452c20f3;
            _Str = _Str + 1;
          }
          if ((9 < (byte)(*_Str - 0x30U)) || (uVar4 = strtoul(_Str,&local_170,10), 0xff < uVar4))
          goto LAB_1452c20f3;
          local_168[lVar6] = uVar4;
          lVar6 = lVar6 + 1;
          _Str = local_170;
          if (5 < lVar6) {
            if (*pcVar8 == '\0') break;
            if (*(char *)(param_1 + 0xac3) == '\0') {
              local_198 = (undefined8 **)CONCAT44(local_198._4_4_,local_168[3]);
              lVar6 = FUN_144f2b8b0("%u.%u.%u.%u",local_168[0],local_168[1],local_168[2]);
            }
            else {
              local_188 = *(undefined8 *)(lVar3 + 0x70);
              local_190 = local_168[3];
              local_198 = (undefined8 **)CONCAT44(local_198._4_4_,local_168[2]);
              FUN_144f14ad0(param_1,"Skip %u.%u.%u.%u for data connection, reuse %s instead",
                            local_168[0],local_168[1]);
              if ((*(char *)(lVar3 + 0x2cb) != '\0') ||
                 (lVar6 = lVar3 + 0x120, *(char *)(lVar3 + 0x2c9) != '\0')) {
                lVar6 = *(longlong *)(lVar3 + 0x70);
              }
              lVar6 = (*(code *)PTR__strdup_14c6d9f38)(lVar6);
            }
            *(longlong *)(lVar3 + 0x450) = lVar6;
            if (lVar6 == 0) goto LAB_1452c23cd;
            *(short *)(lVar3 + 0x494) = local_158 * 0x100 + local_154;
            goto LAB_1452c215f;
          }
        } while( true );
      }
      FUN_144f14b70(param_1,"Couldn\'t interpret the 227-response");
      goto LAB_1452c23cd;
    }
    FUN_144f14b70(param_1,"Bad PASV/EPSV response: %03d",param_2);
    goto LAB_1452c23cd;
  }
  if (param_2 == 0xe5) {
    pcVar8 = strchr(pcVar8,0x28);
    if ((((pcVar8 == (char *)0x0) || (cVar1 = pcVar8[1], pcVar8[2] != cVar1)) ||
        (pcVar8[3] != cVar1)) ||
       ((9 < (byte)(pcVar8[4] - 0x30U) ||
        (uVar4 = strtoul(pcVar8 + 4,&local_170,10), *local_170 != cVar1)))) {
      FUN_144f14b70(param_1,"Weirdly formatted EPSV reply");
      goto LAB_1452c23cd;
    }
    if (0xffff < uVar4) {
      FUN_144f14b70(param_1,"Illegal port number in EPSV reply");
      goto LAB_1452c23cd;
    }
    *(short *)(lVar3 + 0x494) = (short)uVar4;
    if ((*(char *)(lVar3 + 0x2cb) != '\0') ||
       (lVar6 = lVar3 + 0x120, *(char *)(lVar3 + 0x2c9) != '\0')) {
      lVar6 = *(longlong *)(lVar3 + 0x70);
    }
    lVar6 = (*(code *)PTR__strdup_14c6d9f38)(lVar6);
    *(longlong *)(lVar3 + 0x450) = lVar6;
    if (lVar6 == 0) goto LAB_1452c23cd;
LAB_1452c215f:
    if (*(char *)(lVar3 + 0x2cd) == '\0') {
      if (((*(char *)(lVar3 + 0x2e0) != '\0') && (*(char *)(lVar3 + 0x2cf) == '\0')) &&
         (**(char **)(lVar3 + 0x450) == '\0')) {
        FUN_144f14770(param_1,lVar3);
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar3 + 0x450));
        *(undefined8 *)(lVar3 + 0x450) = 0;
        if ((*(char *)(lVar3 + 0x2cb) != '\0') ||
           (lVar6 = lVar3 + 0x120, *(char *)(lVar3 + 0x2c9) != '\0')) {
          lVar6 = *(longlong *)(lVar3 + 0x70);
        }
        lVar6 = (*(code *)PTR__strdup_14c6d9f38)(lVar6);
        *(longlong *)(lVar3 + 0x450) = lVar6;
        if (lVar6 == 0) goto LAB_1452c23cd;
      }
      local_198 = &local_178;
      iVar5 = FUN_144f1af60(param_1,*(undefined8 *)(lVar3 + 0x450),*(undefined2 *)(lVar3 + 0x494),0)
      ;
      if (iVar5 == 1) {
        FUN_144f07610(param_1,&local_178);
      }
      uVar2 = *(ushort *)(lVar3 + 0x494);
      if (local_178 == (undefined8 *)0x0) {
        FUN_144f14b70(param_1,"Can\'t resolve new host %s:%hu",*(undefined8 *)(lVar3 + 0x450),uVar2)
        ;
        goto LAB_1452c23cd;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x2c9) == '\0') {
        uVar7 = *(undefined8 *)(lVar3 + 0xf8);
      }
      else {
        uVar7 = *(undefined8 *)(lVar3 + 0xc0);
      }
      local_198 = &local_178;
      iVar5 = FUN_144f1af60(param_1,uVar7,*(undefined4 *)(lVar3 + 0x4c0),0);
      if (iVar5 == 1) {
        FUN_144f07610(param_1,&local_178);
      }
      uVar2 = *(ushort *)(lVar3 + 0x4c0);
      if (local_178 == (undefined8 *)0x0) {
        FUN_144f14b70(param_1,"Can\'t resolve proxy host %s:%hu",uVar7,uVar2);
        goto LAB_1452c23cd;
      }
    }
    local_198 = (undefined8 **)CONCAT44(local_198._4_4_,(uint)(*(char *)(lVar3 + 0x2db) != '\0'));
    iVar5 = FUN_144f16330(param_1,lVar3,1);
    if (iVar5 == 0) {
      if (*(char *)(param_1 + 0xacf) != '\0') {
        uVar7 = *(undefined8 *)(lVar3 + 0x450);
        FUN_144f1b750(*local_178,local_148,0x100);
        local_198 = (undefined8 **)CONCAT44(local_198._4_4_,(uint)uVar2);
        FUN_144f14ad0(param_1,"Connecting to %s (%s) port %d",uVar7,local_148);
      }
      FUN_144f1b540(param_1,local_178);
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar3 + 0x88));
      *(undefined8 *)(lVar3 + 0x88) = 0;
      *(undefined2 *)(lVar3 + 0x4d2) = *(undefined2 *)(lVar3 + 0x494);
      lVar6 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar3 + 0x450));
      *(longlong *)(lVar3 + 0x88) = lVar6;
      if (lVar6 != 0) {
        *(undefined1 *)(lVar3 + 0x2d5) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
      }
      goto LAB_1452c23cd;
    }
    FUN_144f1b540(param_1,local_178);
    if ((*(int *)(lVar3 + 0x488) != 0) || (param_2 != 0xe5)) goto LAB_1452c23cd;
  }
  FUN_1452c1e10(param_1,lVar3);
LAB_1452c23cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
LAB_1452c20f3:
  pcVar8 = pcVar8 + 1;
  cVar1 = *pcVar8;
  goto joined_r0x0001452c2039;
}



// FUNCTION 1452c2400 FUN_1452c2400 body=814 status=ok
// SIG undefined FUN_1452c2400(void)

void FUN_1452c2400(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  char *pcVar12;
  undefined1 auStack_128 [32];
  int local_108;
  undefined *local_100;
  int local_f8;
  int local_f0;
  int local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (param_2 == 0xd5) {
    lVar7 = *(longlong *)(param_1 + 0xcd8);
    uVar9 = 0xffffffffffffffff;
    do {
      uVar9 = uVar9 + 1;
    } while (*(char *)(lVar7 + 4 + uVar9) != '\0');
    if (0xd < uVar9) {
      iVar8 = (int)*(char *)(lVar7 + 9) + (*(char *)(lVar7 + 8) * 5 + -0x108) * 2;
      iVar1 = (int)*(char *)(lVar7 + 0xb) + (*(char *)(lVar7 + 10) * 5 + -0x108) * 2;
      iVar2 = (int)*(char *)(lVar7 + 0xd) + *(char *)(lVar7 + 0xc) * 10 + -0x210;
      iVar11 = (int)*(char *)(lVar7 + 0xf) + *(char *)(lVar7 + 0xe) * 10 + -0x210;
      iVar3 = *(char *)(lVar7 + 0x11) + -0x210 + *(char *)(lVar7 + 0x10) * 10;
      if ((((iVar8 < 0xd) && (iVar1 < 0x20)) && (iVar2 < 0x18)) &&
         ((iVar11 < 0x3c && (iVar3 < 0x3d)))) {
        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar1);
        local_108 = iVar8;
        local_f8 = iVar2;
        local_f0 = iVar11;
        local_e8 = iVar3;
        FUN_144f2b7e0(&local_d8,0x18,"%04d%02d%02d %02d:%02d:%02d GMT",
                      (int)*(char *)(lVar7 + 7) +
                      ((int)*(char *)(lVar7 + 6) +
                      ((int)*(char *)(lVar7 + 5) + *(char *)(lVar7 + 4) * 10) * 10) * 10 + -0xd050);
        uVar10 = FUN_1452b1ce0(&local_d8);
        *(undefined8 *)(param_1 + 0x13f8) = uVar10;
      }
    }
    if (((*(char *)(param_1 + 0x1d4) != '\0') && (*(longlong *)(lVar6 + 0x440) != 0)) &&
       ((*(char *)(param_1 + 0xaba) != '\0' && (-1 < *(longlong *)(param_1 + 0x13f8))))) {
      iVar8 = FUN_1452b1c90(*(longlong *)(param_1 + 0x13f8),&local_d8);
      if (iVar8 != 0) goto LAB_1452c271e;
      iVar8 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar8 = 6;
      }
      local_e0 = local_d8;
      local_f8 = local_c4 + 0x76c;
      local_e8 = local_d4;
      local_f0 = local_d0;
      local_100 = (&PTR_DAT_149d24a00)[local_c8];
      local_108 = local_cc;
      iVar8 = FUN_144f2b7e0(local_a8,0x80,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                            (&PTR_DAT_149d249c0)[iVar8]);
      cVar4 = *(char *)(param_1 + 0xacb);
      *(undefined1 *)(param_1 + 0xacb) = 1;
      iVar8 = FUN_144f14dc0(param_1,4,local_a8,(longlong)iVar8);
      *(bool *)(param_1 + 0xacb) = cVar4 != '\0';
      if (iVar8 != 0) goto LAB_1452c271e;
    }
  }
  else if (param_2 == 0x226) {
    FUN_144f14ad0(param_1,"MDTM failed: file does not exist or permission problem, continuing");
  }
  else {
    FUN_144f14ad0(param_1,"unsupported MDTM reply format");
  }
  cVar4 = *(char *)(param_1 + 0x530);
  if (cVar4 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x13f8);
    if ((lVar6 < 1) || (lVar7 = *(longlong *)(param_1 + 0x528), lVar7 < 1)) {
      FUN_144f14ad0(param_1,"Skipping time comparison");
    }
    else if ((cVar4 == '\x01') || (cVar4 != '\x02')) {
      if (lVar6 <= lVar7) {
        pcVar12 = "The requested document is not new enough";
        goto LAB_1452c26da;
      }
    }
    else if (lVar7 < lVar6) {
      pcVar12 = "The requested document is not old enough";
LAB_1452c26da:
      FUN_144f14ad0(param_1,pcVar12);
      *(undefined4 *)(lVar5 + 0x10) = 2;
      *(undefined1 *)(param_1 + 0x14c4) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
      goto LAB_1452c271e;
    }
  }
  FUN_1452c1ba0(param_1);
LAB_1452c271e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_128);
}



// FUNCTION 1452c2750 FUN_1452c2750 body=442 status=ok
// SIG undefined FUN_1452c2750(void)

undefined1 * FUN_1452c2750(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  char *local_res8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (99 < param_2 - 200U) {
    FUN_144f14b70(param_1,"Couldn\'t set desired mode");
    return &DAT_00000011;
  }
  if (param_2 != 200) {
    FUN_144f14ad0(param_1,"Got a %03d response code instead of the assumed 200",param_2);
  }
  if (param_3 == '\x13') {
    uVar3 = FUN_1452c1b00(param_1,uVar8);
  }
  else {
    if (param_3 == '\x14') {
      lVar1 = *(longlong *)(param_1 + 0x20);
      pcVar4 = (char *)0x0;
      if ((*(char *)(param_1 + 0x6f8) == '\x02') && (**(longlong **)(param_1 + 0x1a8) != 0)) {
        local_res8 = (char *)0x0;
        uVar3 = FUN_1452ce930(**(longlong **)(param_1 + 0x1a8),0,&local_res8,0,3);
        if (uVar3 != 0) goto LAB_1452c28f1;
        pcVar4 = strrchr(local_res8,0x2f);
        if (pcVar4 == (char *)0x0) {
          (*(code *)PTR_free_14c6d9f28)(local_res8);
          pcVar4 = (char *)0x0;
        }
        else {
          lVar5 = 1;
          if ((longlong)pcVar4 - (longlong)local_res8 != 0) {
            lVar5 = (longlong)pcVar4 - (longlong)local_res8;
          }
          local_res8[lVar5] = '\0';
          pcVar4 = local_res8;
        }
      }
      puVar6 = *(undefined **)(param_1 + 0x750);
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = &DAT_149d267d4, *(char *)(param_1 + 0x13d3) != '\0')) {
        puVar6 = &DAT_149d27658;
      }
      puVar7 = &DAT_14996de1b;
      pcVar2 = "";
      if (pcVar4 != (char *)0x0) {
        puVar7 = &DAT_149982a34;
        pcVar2 = pcVar4;
      }
      lVar5 = FUN_144f2b8b0("%s%s%s",puVar6,puVar7,pcVar2);
      (*(code *)PTR_free_14c6d9f28)(pcVar4);
      if (lVar5 == 0) {
        return &DAT_0000001b;
      }
      uVar3 = FUN_14550c120(param_1,lVar1 + 0x3a0,&DAT_149972340,lVar5);
      (*(code *)PTR_free_14c6d9f28)(lVar5);
      if (uVar3 != 0) {
        return (undefined1 *)(ulonglong)uVar3;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x1f;
      return (undefined1 *)0x0;
    }
    if (param_3 == '\x15') {
      uVar8 = 0xd;
    }
    else {
      if (param_3 != '\x16') {
        return (undefined1 *)0x0;
      }
      uVar8 = 0xe;
    }
    uVar3 = FUN_1452c0120(param_1,1,uVar8);
  }
LAB_1452c28f1:
  return (undefined1 *)(ulonglong)uVar3;
}



// FUNCTION 1452c2910 FUN_1452c2910 body=551 status=ok
// SIG undefined FUN_1452c2910(void)

undefined8 FUN_1452c2910(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *_Str;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_res8;
  char local_res10 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((param_2 != 0x96) && (param_2 != 0x7d)) {
    if ((param_3 == '\x1f') && (param_2 == 0x1c2)) {
      *(undefined4 *)(lVar1 + 0x10) = 2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
      return 0;
    }
    FUN_144f14b70(param_1,"RETR response: %03d",param_2);
    if ((param_3 == ' ') && (param_2 == 0x226)) {
      return 0x4e;
    }
    return 0x13;
  }
  local_res8 = -1;
  if ((((param_3 == '\x1f') || (*(char *)(param_1 + 0x13d2) != '\0')) ||
      (*(char *)(param_1 + 0xad5) != '\0')) || (0 < *(longlong *)(lVar1 + 0x18))) {
    local_res8 = -1;
    if (-1 < *(longlong *)(lVar1 + 0x18)) {
      local_res8 = *(longlong *)(lVar1 + 0x18);
    }
  }
  else {
    _Str = *(char **)(param_1 + 0xcd8);
    pcVar3 = strstr(_Str," bytes");
    if (pcVar3 != (char *)0x0) {
      pcVar3 = pcVar3 + -1;
      iVar5 = (int)pcVar3 - (int)_Str;
      for (; (iVar5 = iVar5 + -1, iVar5 != 0 && (*pcVar3 != '(')); pcVar3 = pcVar3 + -1) {
        if (9 < (byte)(*pcVar3 - 0x30U)) goto LAB_1452c2a3e;
      }
      if (pcVar3 != (char *)0x0) {
        FUN_1452b1ac0(pcVar3 + 1,0,10,&local_res8);
      }
    }
  }
LAB_1452c2a3e:
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 < local_res8) && (0 < lVar1)) {
    *(longlong *)(param_1 + 0xf0) = lVar1;
    local_res8 = lVar1;
LAB_1452c2a65:
    FUN_144f14ad0(param_1,"Maxdownload = %I64d");
    if (param_3 == '\x1f') goto LAB_1452c2a8e;
  }
  else {
    if ((param_3 == '\x1f') || (*(char *)(param_1 + 0x13d2) == '\0')) goto LAB_1452c2a65;
    local_res8 = -1;
    FUN_144f14ad0(param_1,"Maxdownload = %I64d");
  }
  FUN_144f14ad0(param_1,"Getting file with size: %I64d",local_res8);
LAB_1452c2a8e:
  *(longlong *)(lVar2 + 0x468) = local_res8;
  *(char *)(lVar2 + 0x497) = param_3;
  if (*(char *)(param_1 + 0xabf) == '\0') {
    uVar4 = FUN_1452c0f00(param_1);
  }
  else {
    uVar4 = FUN_1452c0ff0(param_1,local_res10);
    if ((int)uVar4 == 0) {
      if (local_res10[0] == (char)uVar4) {
        FUN_144f14ad0(param_1,"Data conn was not available immediately");
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
        *(undefined1 *)(lVar2 + 0x49f) = 1;
      }
      return 0;
    }
  }
  return uVar4;
}



// FUNCTION 1452c2b40 FUN_1452c2b40 body=105 status=ok
// SIG undefined FUN_1452c2b40(void)

void FUN_1452c2b40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20) + 0x3a0;
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x2dc) == '\0') {
    iVar2 = FUN_14550c120(param_1,lVar1,&DAT_149972340,&DAT_149d274dc);
    if (iVar2 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 9;
    }
  }
  else {
    iVar2 = FUN_14550c120(param_1,lVar1,"PBSZ %d",0);
    if (iVar2 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 6;
      return;
    }
  }
  return;
}



// FUNCTION 1452c2bb0 FUN_1452c2bb0 body=347 status=ok
// SIG undefined FUN_1452c2bb0(void)

ulonglong FUN_1452c2bb0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar1 = lVar2 + 0x3a0;
  if (param_2 == 0x14b) {
    if (*(char *)(lVar2 + 0x496) == '\x03') {
      puVar5 = &DAT_14996de1b;
      if (*(undefined1 **)(lVar2 + 0x158) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(lVar2 + 0x158);
      }
      uVar4 = FUN_14550c120(param_1,lVar1,"PASS %s",puVar5);
      if ((int)uVar4 != 0) {
        return uVar4 & 0xffffffff;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 4;
      return uVar4;
    }
  }
  else {
    if (param_2 - 200U < 100) {
      uVar4 = FUN_1452c2b40();
      return uVar4;
    }
    if (param_2 == 0x14c) {
      if (*(longlong *)(param_1 + 0x770) == 0) {
        FUN_144f14b70(param_1,"ACCT requested but none available");
        return 0x43;
      }
      uVar3 = FUN_14550c120(param_1,lVar1,"ACCT %s");
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 5;
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x778) == 0) || (*(char *)(lVar2 + 0x49a) != '\0')) {
    FUN_144f14b70(param_1,"Access denied: %03d",param_2);
    uVar4 = 0x43;
  }
  else {
    uVar3 = FUN_14550c120(param_1,lVar1,&DAT_149972340);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      *(undefined1 *)(lVar2 + 0x49a) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 3;
      return 0;
    }
  }
  return uVar4;
}



// FUNCTION 1452c2d10 FUN_1452c2d10 body=3262 status=ok
// SIG undefined FUN_1452c2d10(void)

void FUN_1452c2d10(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  byte *pbVar12;
  byte *pbVar13;
  char *_Str;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  char local_e8 [8];
  ulonglong local_e0;
  longlong local_d8;
  char local_d0 [152];
  ulonglong local_38;
  longlong lVar11;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar15 = 0;
  lVar11 = param_2 + 0x3a0;
  local_d8 = 0;
  if (*(longlong *)(param_2 + 0x3d0) != 0) {
    FUN_14550c6b0(param_1,lVar11);
    goto LAB_1452c33a1;
  }
  local_f8 = &local_d8;
  iVar4 = FUN_14550c3a0(param_1,*(undefined8 *)(param_2 + 0x1a8),lVar11,&local_e0);
  iVar6 = (int)local_e0;
  *(int *)(param_1 + 0x13e8) = (int)local_e0;
  if ((int)local_e0 == 0x1a5) {
    FUN_144f14ad0(param_1,"We got a 421 - timeout");
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
    goto LAB_1452c33a1;
  }
  if ((iVar4 != 0) || ((int)local_e0 == 0)) goto LAB_1452c33a1;
  cVar2 = *(char *)(param_2 + 0x496);
  switch(cVar2) {
  case '\x01':
    if ((int)local_e0 == 0xe6) {
      if ((*(byte *)(param_1 + 0xab1) < 2) || (*(char *)(param_2 + 0x2dc) != '\0')) {
        FUN_1452c2bb0(param_1,0xe6);
        break;
      }
    }
    else if ((int)local_e0 != 0xdc) {
      FUN_144f14b70(param_1,"Got a %03d ftp-server response when 220 was expected",
                    local_e0 & 0xffffffff);
      break;
    }
    if ((*(char *)(param_1 + 0xab1) != '\0') && (*(char *)(param_2 + 0x2dc) == '\0')) {
      *(undefined4 *)(param_2 + 0x490) = 0;
      cVar2 = *(char *)(param_1 + 0x6f9);
      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
        uVar5 = 1;
      }
      else {
        if (cVar2 != '\x02') {
          FUN_144f14b70(param_1,"unsupported parameter to CURLOPT_FTPSSLAUTH: %d");
          break;
        }
        uVar5 = 0xffffffff;
        lVar15 = 1;
      }
      *(undefined4 *)(param_2 + 0x48c) = uVar5;
      *(int *)(param_2 + 0x488) = (int)lVar15;
      iVar6 = FUN_14550c120(param_1,lVar11,"AUTH %s",(&PTR_DAT_149d27330)[lVar15]);
      if (iVar6 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 2;
      }
      break;
    }
    goto LAB_1452c2fbb;
  case '\x02':
    if (*(longlong *)(param_2 + 0x3a8) != 0) break;
    if (((int)local_e0 == 0xea) || ((int)local_e0 == 0x14e)) {
      cVar2 = FUN_144f14080(param_2,0);
      if (((cVar2 == '\0') && (iVar6 = FUN_144f0d480(param_1,param_2,0), iVar6 != 0)) ||
         (iVar6 = FUN_144f13f00(param_1,0,1,local_e8), iVar6 != 0)) break;
      *(undefined2 *)(param_2 + 0x2db) = 0x100;
    }
    else {
      if (*(int *)(param_2 + 0x490) < 1) {
        *(int *)(param_2 + 0x490) = *(int *)(param_2 + 0x490) + 1;
        *(int *)(param_2 + 0x488) = *(int *)(param_2 + 0x488) + *(int *)(param_2 + 0x48c);
        FUN_14550c120(param_1,lVar11,"AUTH %s",(&PTR_DAT_149d27330)[*(int *)(param_2 + 0x488)]);
        break;
      }
      if (1 < *(byte *)(param_1 + 0xab1)) break;
    }
LAB_1452c2fbb:
    FUN_1452c1120(param_1,param_2);
    break;
  case '\x03':
  case '\x04':
    FUN_1452c2bb0(param_1,local_e0 & 0xffffffff);
    break;
  case '\x05':
    if ((int)local_e0 == 0xe6) {
      FUN_1452c2b40(param_1);
    }
    else {
      FUN_144f14b70(param_1,"ACCT rejected by server: %03d",local_e0 & 0xffffffff);
    }
    break;
  case '\x06':
    uVar14 = 0x50;
    if (*(char *)(param_1 + 0xab1) == '\x02') {
      uVar14 = 0x43;
    }
    iVar6 = FUN_14550c120(param_1,lVar11,"PROT %c",uVar14);
    if (iVar6 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 7;
    }
    break;
  case '\a':
    if ((int)local_e0 / 100 == 2) {
      *(bool *)(param_2 + 0x2db) = *(byte *)(param_1 + 0xab1) != 2;
    }
    else if (2 < *(byte *)(param_1 + 0xab1)) break;
    if (*(char *)(param_1 + 0x6fa) == '\0') {
      FUN_1452c1180(param_1,param_2);
    }
    else {
      iVar6 = FUN_14550c120(param_1,lVar11,&DAT_149972340,&DAT_149d27c38);
      if (iVar6 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 8;
      }
    }
    break;
  case '\b':
    if (((int)local_e0 < 500) && (iVar6 = FUN_144f0d520(param_1,0), iVar6 != 0)) {
      FUN_144f14b70(param_1,"Failed to clear the command channel (CCC)");
    }
    else {
      FUN_1452c1180(param_1,param_2);
    }
    break;
  case '\t':
    if ((int)local_e0 == 0x101) {
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0xcd8) + 4);
      uVar1 = *(uint *)(param_1 + 0x6cc);
      pbVar7 = (byte *)(*(code *)PTR_malloc_14c6d9f20)(local_d8 + 1);
      if (pbVar7 == (byte *)0x0) break;
      while ((pbVar13 < (byte *)(*(longlong *)(param_1 + 0xcd8) + (ulonglong)uVar1) &&
             ((0x22 < *pbVar13 || ((0x400000401U >> ((longlong)(char)*pbVar13 & 0x3fU) & 1) == 0))))
            ) {
        pbVar13 = pbVar13 + 1;
      }
      if (*pbVar13 == 0x22) {
        bVar3 = pbVar13[1];
        pbVar13 = pbVar13 + 1;
        pbVar12 = pbVar7;
        if (bVar3 == 0) {
          *pbVar7 = 0;
        }
        else {
          do {
            if ((bVar3 == 0x22) && (pbVar13 = pbVar13 + 1, *pbVar13 != 0x22)) {
              *pbVar12 = 0;
              if ((*(longlong *)(param_2 + 0x470) == 0) && (*pbVar7 != 0x2f)) {
                iVar6 = FUN_14550c120(param_1,lVar11,&DAT_149972340,&DAT_149d27c6c);
                if (iVar6 != 0) goto LAB_1452c31eb;
                (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x438));
                *(byte **)(param_2 + 0x438) = pbVar7;
                FUN_144f14ad0(param_1,"Entry path is \'%s\'",pbVar7);
                *(undefined8 *)(param_1 + 0x11b0) = *(undefined8 *)(param_2 + 0x438);
                *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 10;
              }
              else {
                (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x438));
                *(byte **)(param_2 + 0x438) = pbVar7;
                FUN_144f14ad0(param_1,"Entry path is \'%s\'",pbVar7);
                *(undefined8 *)(param_1 + 0x11b0) = *(undefined8 *)(param_2 + 0x438);
                *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
              }
              goto LAB_1452c33a1;
            }
            pbVar13 = pbVar13 + 1;
            *pbVar12 = bVar3;
            pbVar12 = pbVar12 + 1;
            bVar3 = *pbVar13;
          } while (bVar3 != 0);
          *pbVar12 = 0;
        }
      }
      (*(code *)PTR_free_14c6d9f28)(pbVar7);
      FUN_144f14ad0(param_1,"Failed to figure out path");
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
    break;
  case '\n':
    if ((int)local_e0 == 0xd7) {
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0xcd8) + 4);
      pbVar7 = (byte *)(*(code *)PTR_malloc_14c6d9f20)(local_d8 + 1);
      if (pbVar7 == (byte *)0x0) break;
      bVar3 = *pbVar13;
      while (bVar3 == 0x20) {
        pbVar12 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        bVar3 = *pbVar12;
      }
      pbVar12 = pbVar7;
      if (bVar3 != 0) {
        do {
          if (bVar3 == 0x20) break;
          *pbVar12 = bVar3;
          pbVar12 = pbVar12 + 1;
          bVar3 = pbVar12[(longlong)pbVar13 - (longlong)pbVar7];
        } while (bVar3 != 0);
      }
      *pbVar12 = 0;
      iVar6 = FUN_144f19540(pbVar7,"OS/400");
      if (iVar6 != 0) {
        iVar6 = FUN_14550c120(param_1,lVar11,&DAT_149972340,"SITE NAMEFMT 1");
        if (iVar6 == 0) {
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x470));
          *(byte **)(param_2 + 0x470) = pbVar7;
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0xb;
        }
        else {
LAB_1452c31eb:
          (*(code *)PTR_free_14c6d9f28)(pbVar7);
        }
        break;
      }
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x470));
      *(byte **)(param_2 + 0x470) = pbVar7;
    }
  default:
switchD_1452c2dfe_caseD_22:
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
    break;
  case '\v':
    if ((int)local_e0 == 0xfa) {
      FUN_1452c1180(param_1,param_2);
      break;
    }
    goto switchD_1452c2dfe_caseD_22;
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
    if (((int)local_e0 < 400) || (*(int *)(param_2 + 0x48c) != 0)) {
      FUN_1452c0120(param_1,0,cVar2);
    }
    else {
      FUN_144f14b70(param_1,"QUOT command failed with %03d",local_e0 & 0xffffffff);
    }
    break;
  case '\x10':
    if ((int)local_e0 / 100 == 2) {
      iVar6 = *(int *)(param_2 + 0x484);
      *(undefined4 *)(param_2 + 0x48c) = 0;
      iVar4 = iVar6 + 1;
      *(int *)(param_2 + 0x484) = iVar4;
      if (*(int *)(param_2 + 0x480) < iVar4) {
        FUN_1452c00b0(param_1);
      }
      else {
        FUN_14550c120(param_1,lVar11,"CWD %s",
                      *(undefined8 *)(*(longlong *)(param_2 + 0x448) + (longlong)iVar6 * 8));
      }
    }
    else if (((*(char *)(param_1 + 0x718) == '\0') || (*(int *)(param_2 + 0x484) == 0)) ||
            (*(int *)(param_2 + 0x48c) != 0)) {
      FUN_144f14b70(param_1,"Server denied you to change to the given directory");
      *(undefined1 *)(param_2 + 0x49e) = 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x48c) = 1;
      *(uint *)(param_2 + 0x490) = (uint)(*(char *)(param_1 + 0x718) == '\x02');
      iVar6 = FUN_14550c120(param_1,lVar11,"MKD %s",
                            *(undefined8 *)
                             (*(longlong *)(param_2 + 0x448) + -8 +
                             (longlong)*(int *)(param_2 + 0x484) * 8));
      if (iVar6 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x11;
      }
    }
    break;
  case '\x11':
    if (((int)local_e0 / 100 == 2) ||
       (iVar6 = *(int *)(param_2 + 0x490), *(int *)(param_2 + 0x490) = iVar6 + -1, iVar6 != 0)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x10;
      FUN_14550c120(param_1,lVar11,"CWD %s",
                    *(undefined8 *)
                     (*(longlong *)(param_2 + 0x448) + -8 + (longlong)*(int *)(param_2 + 0x484) * 8)
                   );
    }
    else {
      FUN_144f14b70(param_1,"Failed to MKD dir: %03d",local_e0 & 0xffffffff);
    }
    break;
  case '\x12':
    FUN_1452c2400(param_1,local_e0 & 0xffffffff);
    break;
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
    FUN_1452c2750(param_1,local_e0 & 0xffffffff,cVar2);
    break;
  case '\x17':
  case '\x18':
  case '\x19':
    local_e0 = 0xffffffffffffffff;
    if (iVar6 == 0xd5) {
      _Str = (char *)(*(longlong *)(param_1 + 0xcd8) + 4);
      pcVar8 = strchr(_Str,0xd);
      if (pcVar8 != (char *)0x0) {
        do {
          pcVar9 = pcVar8;
          pcVar8 = pcVar9 + -1;
          if (9 < (byte)(pcVar9[-1] - 0x30U)) break;
        } while (_Str < pcVar8);
        _Str = pcVar8;
        if (9 < (byte)(pcVar9[-1] - 0x30U)) {
          _Str = pcVar9;
        }
      }
      FUN_1452b1ac0(_Str,0,10,&local_e0);
LAB_1452c362f:
      if (cVar2 == '\x17') {
        if (local_e0 != 0xffffffffffffffff) {
          iVar6 = FUN_144f2b7e0(local_d0 + 0x18,0x80,"Content-Length: %I64d\r\n",local_e0);
          cVar2 = *(char *)(param_1 + 0xacb);
          *(undefined1 *)(param_1 + 0xacb) = 1;
          iVar6 = FUN_144f14dc0(param_1,4,local_d0 + 0x18,(longlong)iVar6);
          *(bool *)(param_1 + 0xacb) = cVar2 != '\0';
          if (iVar6 != 0) break;
        }
        FUN_144f25ce0(param_1,local_e0);
        FUN_1452c1aa0(param_1,*(undefined8 *)(param_1 + 0x20));
        break;
      }
      if (cVar2 == '\x18') {
        FUN_144f25ce0(param_1,local_e0);
        FUN_1452c08c0(param_1,local_e0);
        break;
      }
      if (cVar2 != '\x19') break;
    }
    else {
      if (iVar6 != 0x226) goto LAB_1452c362f;
      if (cVar2 != '\x19') {
        FUN_144f14b70(param_1,"The file does not exist");
        break;
      }
    }
    *(ulonglong *)(param_1 + 0x11c0) = local_e0;
    FUN_1452c1c00(param_1,1);
    break;
  case '\x1a':
  case '\x1b':
    if ((cVar2 == '\x1a') || (cVar2 != '\x1b')) {
      if ((int)local_e0 == 0x15e) {
        builtin_strncpy(local_d0,"Accept-ranges: bytes\r\n",0x17);
        local_d0[0x17] = 0;
        lVar11 = -1;
        do {
          lVar10 = lVar11 + 1;
          lVar15 = lVar11 + 1;
          lVar11 = lVar10;
        } while (local_d0[lVar15] != '\0');
        cVar2 = *(char *)(param_1 + 0xacb);
        *(undefined1 *)(param_1 + 0xacb) = 1;
        iVar6 = FUN_144f14dc0(param_1,4,local_d0,lVar10);
        *(bool *)(param_1 + 0xacb) = cVar2 != '\0';
        if (iVar6 != 0) break;
      }
      FUN_1452bffd0(param_1);
    }
    else if ((int)local_e0 == 0x15e) {
      iVar6 = FUN_14550c120(param_1,lVar11,"RETR %s",*(undefined8 *)(param_2 + 0x440));
      if (iVar6 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0x20;
      }
    }
    else {
      FUN_144f14b70(param_1,"Couldn\'t use REST");
    }
    break;
  case '\x1c':
    lVar11 = *(longlong *)(param_1 + 0x20);
    iVar6 = *(int *)(lVar11 + 0x488);
    if ((int)local_e0 / 100 == 2) {
      FUN_144f14ad0(param_1,"Connect data stream actively");
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
      lVar11 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10) == 0) {
        *(undefined1 *)(lVar11 + 0x2d5) = 1;
        *(undefined1 *)(lVar11 + 0x49c) = 1;
      }
      else {
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0xffffffff);
        FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff,0);
        *(undefined1 *)(lVar11 + 0x49c) = 1;
      }
    }
    else {
      iVar4 = iVar6 + 1;
      if (iVar6 == 0) {
        FUN_144f14ad0(param_1,"disabling EPRT usage");
        *(undefined1 *)(lVar11 + 0x2da) = 0;
      }
      else if (iVar4 == 2) {
        FUN_144f14b70(param_1,"Failed to do PORT");
        break;
      }
      FUN_1452c11c0(param_1,iVar4);
    }
    break;
  case '\x1d':
    if ((int)local_e0 == 200) {
      FUN_1452c19f0(param_1,param_2);
    }
    else {
      FUN_144f14b70(param_1,"PRET command not accepted: %03d",local_e0 & 0xffffffff);
    }
    break;
  case '\x1e':
    FUN_1452c1ed0(param_1,local_e0 & 0xffffffff);
    break;
  case '\x1f':
  case ' ':
    FUN_1452c2910(param_1,local_e0 & 0xffffffff,cVar2);
    break;
  case '!':
    lVar11 = *(longlong *)(param_1 + 0x20);
    if ((int)local_e0 < 400) {
      *(char *)(lVar11 + 0x497) = cVar2;
      if (*(char *)(param_1 + 0xabf) == '\0') {
        FUN_1452c0f00(param_1);
      }
      else {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x496) = 0;
        iVar6 = FUN_1452c0ff0(param_1,local_e8);
        if ((iVar6 == 0) && (local_e8[0] == '\0')) {
          FUN_144f14ad0(param_1,"Data conn was not available immediately");
          *(undefined1 *)(lVar11 + 0x49f) = 1;
        }
      }
      break;
    }
    FUN_144f14b70(param_1,"Failed FTP upload: %0d",local_e0 & 0xffffffff);
    goto switchD_1452c2dfe_caseD_22;
  }
LAB_1452c33a1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
}



// FUNCTION 1452c3a70 FUN_1452c3a70 body=999 status=ok
// SIG undefined FUN_1452c3a70(void)

void FUN_1452c3a70(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined *local_170;
  int local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined1 *local_148;
  int local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined1 local_f0 [6];
  ushort local_ea;
  longlong local_d8;
  undefined8 local_c8;
  char local_b8 [32];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *(longlong *)(param_1 + 0xcd8);
  lVar9 = -1;
  lVar12 = -1;
  *param_2 = 1;
  bVar2 = false;
  lVar11 = 0;
  FUN_144f25bd0();
  if (*(char *)(param_1 + 0x13d8) != '\0') {
    FUN_1452c40e0(param_1);
    goto LAB_1452c3e42;
  }
  local_138 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10);
  iVar5 = _fstat64(local_138,local_f0);
  if (iVar5 != -1) {
    bVar2 = true;
    *(undefined8 *)(param_1 + 0x13f8) = local_c8;
    if ((local_ea & 0xf000) != 0x4000) {
      lVar12 = local_d8;
    }
    if (((*(longlong *)(param_1 + 0x11b8) == 0) && (*(char *)(param_1 + 0x530) != '\0')) &&
       (cVar4 = FUN_144f24b40(param_1,local_c8), cVar4 == '\0')) {
      *param_2 = 1;
      goto LAB_1452c3e42;
    }
    builtin_strncpy(local_b8,"Accept-ranges: bytes\r\n",0x17);
    local_b8[0x17] = 0;
    if (-1 < lVar12) {
      iVar5 = FUN_144f2b7e0(local_98,0x50,"Content-Length: %I64d\r\n",lVar12);
      iVar5 = FUN_144f14dc0(param_1,4,local_98,(longlong)iVar5);
      if (iVar5 != 0) goto LAB_1452c3e42;
      do {
        lVar10 = lVar9 + 1;
        lVar3 = lVar9 + 1;
        lVar9 = lVar10;
      } while (local_b8[lVar3] != '\0');
      iVar5 = FUN_144f14dc0(param_1,4,local_b8,lVar10);
      if (iVar5 != 0) goto LAB_1452c3e42;
    }
    iVar5 = FUN_1452b1c90(local_c8,&local_118);
    if (iVar5 != 0) goto LAB_1452c3e42;
    iVar5 = local_100 + -1;
    if (local_100 == 0) {
      iVar5 = 6;
    }
    local_148 = &DAT_149c058e8;
    if (*(char *)(param_1 + 0x1d4) != '\0') {
      local_148 = &DAT_14996de1b;
    }
    local_168 = local_104 + 0x76c;
    local_150 = local_118;
    local_158 = local_114;
    local_160 = local_110;
    local_170 = (&PTR_DAT_149d24a00)[local_108];
    local_178 = local_10c;
    iVar5 = FUN_144f2b7e0(local_98,0x50,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n%s",
                          (&PTR_DAT_149d249c0)[iVar5]);
    iVar5 = FUN_144f14dc0(param_1,4,local_98,(longlong)iVar5);
    if ((iVar5 != 0) || (FUN_144f25ce0(param_1,lVar12), *(char *)(param_1 + 0x1d4) != '\0'))
    goto LAB_1452c3e42;
  }
  iVar5 = FUN_14550d830(param_1);
  if (iVar5 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x11c0);
    bVar13 = false;
    if (lVar9 < 0) {
      if (!bVar2) {
        FUN_144f14b70(param_1,"Can\'t get the size of file.");
        goto LAB_1452c3e42;
      }
      lVar9 = lVar9 + local_d8;
      *(longlong *)(param_1 + 0x11c0) = lVar9;
      bVar13 = lVar9 < 0;
    }
    if (lVar9 != 0 && !bVar13) {
      if (lVar12 < lVar9) {
        FUN_144f14b70(param_1,"failed to resume file:// transfer");
        goto LAB_1452c3e42;
      }
      lVar12 = lVar12 - lVar9;
    }
    lVar9 = *(longlong *)(param_1 + 0xf8);
    if (*(longlong *)(param_1 + 0xf8) < 1) {
      lVar9 = lVar12;
    }
    if ((bVar2) && (0 < lVar9)) {
      bVar2 = true;
      FUN_144f25ce0(param_1,lVar9);
    }
    else {
      bVar2 = false;
    }
    iVar5 = local_138;
    if ((*(longlong *)(param_1 + 0x11c0) == 0) ||
       (lVar12 = _lseeki64(local_138,*(longlong *)(param_1 + 0x11c0),0),
       *(longlong *)(param_1 + 0x11c0) == lVar12)) {
      FUN_144f25fd0(&local_128,param_1,7);
      do {
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x6cc);
        if (bVar2) {
          if (lVar9 < (longlong)uVar7) {
            uVar7 = FUN_144f17010(lVar9);
          }
        }
        else {
          uVar7 = (ulonglong)(*(uint *)(param_1 + 0x6cc) - 1);
        }
        lVar12 = FUN_144f17030(iVar5,lVar1,uVar7);
        if ((lVar12 < 1) || ((*(undefined1 *)(lVar12 + lVar1) = 0, bVar2 && (lVar9 == 0)))) break;
        lVar11 = lVar11 + lVar12;
        lVar12 = lVar9 - lVar12;
        if (!bVar2) {
          lVar12 = lVar9;
        }
        iVar6 = FUN_144f14dc0(param_1,1,lVar1);
        if ((iVar6 != 0) || (iVar6 = FUN_144f25d60(param_1,lVar11), iVar6 != 0)) goto LAB_1452c3e42;
        iVar6 = FUN_144f25e70(param_1);
        if (iVar6 != 0) break;
        puVar8 = (undefined4 *)FUN_144f07150(local_b8);
        local_128 = *puVar8;
        uStack_124 = puVar8[1];
        uStack_120 = puVar8[2];
        uStack_11c = puVar8[3];
        iVar6 = FUN_144f27170(param_1,&local_128);
        lVar9 = lVar12;
      } while (iVar6 == 0);
      FUN_144f25e70(param_1);
    }
  }
LAB_1452c3e42:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
}



// FUNCTION 1452c3e80 FUN_1452c3e80 body=66 status=ok
// SIG undefined FUN_1452c3e80(void)

undefined8 FUN_1452c3e80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR_free_14c6d9f28)(puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      _close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 1452c3ed0 FUN_1452c3ed0 body=376 status=ok
// SIG undefined FUN_1452c3ed0(void)

undefined8 FUN_1452c3ed0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong local_res8;
  char *local_res18;
  
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  if (*plVar1 == 0) {
    uVar4 = FUN_1452ce930(*(undefined8 *)(param_1 + 0x1260),0,&local_res18,&local_res8,4);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    pcVar6 = local_res18;
    if (((*local_res18 == '/') && (local_res18[1] != (char)uVar4)) &&
       ((local_res18[2] == ':' || (local_res18[2] == '|')))) {
      local_res18[2] = ':';
      local_res8 = local_res8 - 1;
      pcVar6 = local_res18 + 1;
    }
    pcVar5 = pcVar6;
    if (local_res8 != 0) {
      do {
        if (*pcVar5 == '/') {
          *pcVar5 = '\\';
        }
        else if (*pcVar5 == '\0') {
          (*(code *)PTR_free_14c6d9f28)(local_res18);
          return 3;
        }
        pcVar5 = pcVar5 + 1;
      } while ((ulonglong)((longlong)pcVar5 - (longlong)pcVar6) < local_res8);
    }
    iVar3 = FUN_1452b19b0(pcVar6,0x8000);
    *plVar1 = (longlong)pcVar6;
    (*(code *)PTR_free_14c6d9f28)(plVar1[1]);
    plVar1[1] = 0;
    plVar1[1] = (longlong)local_res18;
    *(int *)(plVar1 + 2) = iVar3;
    if ((*(char *)(param_1 + 0x13d8) == '\0') && (iVar3 == -1)) {
      FUN_144f14b70(param_1,"Couldn\'t open file %s",*(undefined8 *)(param_1 + 0x1260));
      puVar2 = *(undefined8 **)(param_1 + 0x1a8);
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
        puVar2[1] = 0;
        *puVar2 = 0;
        if (*(int *)(puVar2 + 2) != -1) {
          _close(*(int *)(puVar2 + 2));
        }
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      }
      return 0x25;
    }
  }
  *param_2 = 1;
  return 0;
}



// FUNCTION 1452c4050 FUN_1452c4050 body=66 status=ok
// SIG undefined FUN_1452c4050(void)

undefined8 FUN_1452c4050(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR_free_14c6d9f28)(puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      _close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 1452c40a0 FUN_1452c40a0 body=51 status=ok
// SIG undefined FUN_1452c40a0(void)

undefined8 FUN_1452c40a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  uVar2 = 0;
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  return uVar2;
}



// FUNCTION 1452c40e0 FUN_1452c40e0 body=540 status=ok
// SIG undefined FUN_1452c40e0(void)

void FUN_1452c40e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int _FileHandle;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  pcVar4 = strchr((char *)*puVar1,0x5c);
  lVar2 = *(longlong *)(param_1 + 0xcd8);
  lVar10 = 0;
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  if ((pcVar4 == (char *)0x0) || (pcVar4[1] == '\0')) goto LAB_1452c418e;
  uVar7 = 0x8109;
  if (*(longlong *)(param_1 + 0x11c0) == 0) {
    uVar7 = 0x8301;
  }
  _FileHandle = FUN_1452b19b0(*puVar1,uVar7,*(undefined4 *)(param_1 + 0x71c));
  if (_FileHandle < 0) {
    uVar7 = *puVar1;
    pcVar4 = "Can\'t open %s for writing";
LAB_1452c4179:
    FUN_144f14b70(param_1,pcVar4,uVar7);
  }
  else {
    if (*(longlong *)(param_1 + 0x11f8) != -1) {
      FUN_144f25d20(param_1);
    }
    if (*(longlong *)(param_1 + 0x11c0) < 0) {
      iVar3 = _fstat64(_FileHandle,local_58);
      if (iVar3 != 0) {
        _close(_FileHandle);
        uVar7 = *puVar1;
        pcVar4 = "Can\'t get the size of %s";
        goto LAB_1452c4179;
      }
      *(undefined8 *)(param_1 + 0x11c0) = local_40;
    }
    do {
      iVar3 = FUN_144f24620(param_1,*(undefined4 *)(param_1 + 0x6cc),local_88);
      if (iVar3 != 0) break;
      if (local_88[0] == 0) {
        FUN_144f25e70(param_1);
        break;
      }
      lVar5 = *(longlong *)(param_1 + 0x11c0);
      lVar8 = lVar2;
      lVar9 = local_88[0];
      if (lVar5 != 0) {
        if (lVar5 < local_88[0]) {
          *(undefined8 *)(param_1 + 0x11c0) = 0;
          lVar8 = lVar5 + lVar2;
          lVar9 = local_88[0] - lVar5;
        }
        else {
          *(longlong *)(param_1 + 0x11c0) = lVar5 - local_88[0];
          lVar9 = 0;
        }
      }
      lVar5 = FUN_144f17050(_FileHandle,lVar8,lVar9);
      if (lVar5 != lVar9) break;
      lVar10 = lVar10 + lVar9;
      FUN_144f25da0(param_1,lVar10);
      iVar3 = FUN_144f25e70(param_1);
      if (iVar3 != 0) break;
      puVar6 = (undefined4 *)FUN_144f07150(local_68);
      local_78 = *puVar6;
      uStack_74 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_6c = puVar6[3];
      iVar3 = FUN_144f27170(param_1,&local_78);
    } while (iVar3 == 0);
    _close(_FileHandle);
  }
LAB_1452c418e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452c4310 FUN_1452c4310 body=2106 status=ok
// SIG undefined FUN_1452c4310(void)

ulonglong FUN_1452c4310(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined1 *local_res8;
  undefined1 *local_res10;
  undefined1 *local_res18;
  char *local_res20;
  undefined *puVar23;
  undefined4 uVar24;
  ulonglong in_stack_ffffffffffffff50;
  undefined1 local_68 [40];
  
  lVar10 = *(longlong *)(param_1 + 0x20);
  pcVar15 = (char *)0x0;
  uVar4 = *(uint *)(param_1 + 0x9f8);
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  *param_2 = 1;
  *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(param_1 + 0x11c8);
  *(undefined4 *)(lVar1 + 0x74) = 0;
  local_res20 = (char *)0x0;
  local_res18 = (undefined1 *)0x0;
  local_res10 = (undefined1 *)0x0;
  local_res8 = (undefined1 *)0x0;
  if (*(longlong *)(param_1 + 0xcf0) == 0) {
    lVar6 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar10 + 0x70));
    *(longlong *)(param_1 + 0xcf0) = lVar6;
    if (lVar6 == 0) {
      return 0x1b;
    }
    *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(lVar10 + 0x4c4);
    *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(*(longlong *)(lVar10 + 0x2e8) + 0x84);
  }
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  switch(uVar4) {
  case 1:
    pcVar17 = "OPTIONS";
    break;
  case 2:
    pcVar17 = "DESCRIBE";
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    break;
  case 3:
    pcVar17 = "ANNOUNCE";
    break;
  case 4:
    pcVar17 = "SETUP";
    break;
  case 5:
    pcVar17 = "PLAY";
    break;
  case 6:
    pcVar17 = "PAUSE";
    break;
  case 7:
    pcVar17 = "TEARDOWN";
    break;
  case 8:
    pcVar17 = "GET_PARAMETER";
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    break;
  case 9:
    pcVar17 = "SET_PARAMETER";
    break;
  case 10:
    pcVar17 = "RECORD";
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    FUN_144f24c20(param_1,0,0xffffffffffffffff,1,0xffffffff);
    return 0;
  case 0xc:
    pcVar15 = "Got invalid RTSP request: RTSPREQ_LAST";
    goto LAB_1452c4b29;
  default:
    pcVar15 = "Got invalid RTSP request";
    goto LAB_1452c4b29;
  }
  lVar6 = *(longlong *)(param_1 + 0x8a0);
  if ((lVar6 == 0) && ((uVar4 & 0xfffffff8) != 0)) {
    FUN_144f14b70(param_1,"Refusing to issue an RTSP request [%s] without a session ID.",pcVar17);
    return 0x2b;
  }
  puVar22 = &DAT_149982a3c;
  if (*(undefined **)(param_1 + 0x8a8) != (undefined *)0x0) {
    puVar22 = *(undefined **)(param_1 + 0x8a8);
  }
  puVar7 = (undefined1 *)FUN_144f23930(param_1,"Transport",9);
  if (uVar4 == 4) {
    if (puVar7 == (undefined1 *)0x0) {
      if (*(longlong *)(param_1 + 0x8b0) == 0) {
        pcVar15 = "Refusing to issue an RTSP SETUP without a Transport: header.";
        goto LAB_1452c4b29;
      }
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1390));
      *(undefined8 *)(param_1 + 0x1390) = 0;
      puVar7 = (undefined1 *)FUN_144f2b8b0("Transport: %s\r\n",*(undefined8 *)(param_1 + 0x8b0));
      *(undefined1 **)(param_1 + 0x1390) = puVar7;
      puVar19 = puVar7;
joined_r0x0001452c45da:
      if (puVar19 == (undefined1 *)0x0) {
        return 0x1b;
      }
    }
  }
  else if (uVar4 == 2) {
    lVar8 = FUN_144f23930(param_1,"Accept",6);
    local_res20 = "Accept: application/sdp\r\n";
    if (lVar8 != 0) {
      local_res20 = pcVar15;
    }
    lVar8 = FUN_144f23930(param_1,"Accept-Encoding",0xf);
    if ((lVar8 == 0) && (*(longlong *)(param_1 + 0x768) != 0)) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1360));
      *(undefined8 *)(param_1 + 0x1360) = 0;
      local_res18 = (undefined1 *)
                    FUN_144f2b8b0("Accept-Encoding: %s\r\n",*(undefined8 *)(param_1 + 0x768));
      *(undefined1 **)(param_1 + 0x1360) = local_res18;
      puVar19 = local_res18;
      goto joined_r0x0001452c45da;
    }
  }
  lVar8 = FUN_144f23930(param_1,"User-Agent",10);
  if ((lVar8 == 0) || (*(longlong *)(param_1 + 0x1358) == 0)) {
    lVar8 = FUN_144f23930(param_1,"User-Agent",10);
    if ((lVar8 == 0) && (*(longlong *)(param_1 + 0x840) != 0)) {
      local_res8 = *(undefined1 **)(param_1 + 0x1358);
    }
  }
  else {
    (*(code *)PTR_free_14c6d9f28)();
    *(undefined8 *)(param_1 + 0x1358) = 0;
  }
  puVar23 = puVar22;
  uVar9 = FUN_144f21490(param_1,lVar10,pcVar17,0,puVar22,
                        in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  uVar24 = (undefined4)((ulonglong)puVar23 >> 0x20);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  puVar19 = *(undefined1 **)(param_1 + 0x1350);
  puVar20 = *(undefined1 **)(param_1 + 0x1368);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1378));
  *(undefined8 *)(param_1 + 0x1378) = 0;
  if ((*(longlong *)(param_1 + 0x1278) != 0) &&
     (lVar10 = FUN_144f23930(param_1,"Referer",7), lVar10 == 0)) {
    uVar11 = FUN_144f2b8b0("Referer: %s\r\n",*(undefined8 *)(param_1 + 0x1278));
    *(undefined8 *)(param_1 + 0x1378) = uVar11;
  }
  puVar13 = *(undefined1 **)(param_1 + 0x1378);
  if ((((*(char *)(param_1 + 0x13cd) != '\0') && ((uVar4 & 0xf) != 0)) &&
      (lVar10 = FUN_144f23930(param_1,"Range",5), lVar10 == 0)) &&
     (*(longlong *)(param_1 + 0x11b8) != 0)) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1370));
    *(undefined8 *)(param_1 + 0x1370) = 0;
    local_res10 = (undefined1 *)FUN_144f2b8b0("Range: %s\r\n",*(undefined8 *)(param_1 + 0x11b8));
    *(undefined1 **)(param_1 + 0x1370) = local_res10;
  }
  lVar10 = FUN_144f23930(param_1,&DAT_149d28494,4);
  if (lVar10 != 0) {
    FUN_144f14b70(param_1,"CSeq cannot be set as a custom header.");
    return 0x55;
  }
  lVar10 = FUN_144f23930(param_1,"Session",7);
  if (lVar10 != 0) {
    pcVar15 = "Session ID cannot be set as a custom header.";
LAB_1452c4b29:
    FUN_144f14b70(param_1,pcVar15);
    return 0x2b;
  }
  FUN_144f07cf0(local_68,0x10000);
  uVar9 = FUN_144f07d70(local_68,"%s %s RTSP/1.0\r\nCSeq: %ld\r\n",pcVar17,puVar22,
                        CONCAT44(uVar24,*(undefined4 *)(lVar1 + 0x70)));
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if ((lVar6 != 0) && (uVar9 = FUN_144f07d70(local_68,"Session: %s\r\n"), (int)uVar9 != 0)) {
    return uVar9;
  }
  puVar21 = &DAT_14996de1b;
  if (puVar20 != (undefined1 *)0x0) {
    puVar21 = puVar20;
  }
  puVar20 = &DAT_14996de1b;
  if (puVar19 != (undefined1 *)0x0) {
    puVar20 = puVar19;
  }
  puVar19 = &DAT_14996de1b;
  if (local_res8 != (undefined1 *)0x0) {
    puVar19 = local_res8;
  }
  puVar14 = &DAT_14996de1b;
  if (puVar13 != (undefined1 *)0x0) {
    puVar14 = puVar13;
  }
  puVar13 = &DAT_14996de1b;
  if (local_res10 != (undefined1 *)0x0) {
    puVar13 = local_res10;
  }
  puVar12 = &DAT_14996de1b;
  if (local_res18 != (undefined1 *)0x0) {
    puVar12 = local_res18;
  }
  pcVar17 = "";
  if (local_res20 != (char *)0x0) {
    pcVar17 = local_res20;
  }
  puVar18 = &DAT_14996de1b;
  if (puVar7 != (undefined1 *)0x0) {
    puVar18 = puVar7;
  }
  uVar3 = FUN_144f07d70(local_68,"%s%s%s%s%s%s%s%s",puVar18,pcVar17,puVar12,puVar13,puVar14,puVar19,
                        puVar20,puVar21);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1368));
  pcVar17 = (char *)0x0;
  *(undefined8 *)(param_1 + 0x1368) = 0;
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (((uVar4 - 2 & 0xfffffffd) == 0) && (uVar9 = FUN_144f1db50(param_1,local_68), (int)uVar9 != 0))
  {
    return uVar9;
  }
  uVar9 = FUN_144f1dcd0(param_1,0,local_68);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if ((uVar4 != 3) && (pcVar16 = pcVar15, 1 < uVar4 - 8)) goto LAB_1452c49cf;
  pcVar2 = *(char **)(param_1 + 0x11f8);
  pcVar16 = pcVar17;
  if (*(char *)(param_1 + 0x13d8) == '\0') {
    pcVar16 = pcVar2;
    if (pcVar2 == (char *)0xffffffffffffffff) {
      pcVar16 = pcVar17;
      pcVar17 = (char *)0xffffffffffffffff;
      if (*(longlong *)(param_1 + 0x218) != 0) {
        do {
          pcVar16 = pcVar17 + 1;
          pcVar17 = pcVar16;
        } while (pcVar16[*(longlong *)(param_1 + 0x218)] != '\0');
      }
    }
    *(undefined1 *)(param_1 + 0x13c2) = 1;
LAB_1452c4a85:
    if ((longlong)pcVar16 < 1) {
      if (uVar4 == 8) {
        *(undefined1 *)(param_1 + 0x13c2) = 5;
        *(undefined1 *)(param_1 + 0x1d4) = 1;
      }
      goto LAB_1452c49cf;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x13c2) = 4;
    pcVar15 = pcVar2;
    if ((longlong)pcVar2 < 1) goto LAB_1452c4a85;
  }
  lVar10 = FUN_144f23930(param_1,"Content-Length",0xe);
  if (lVar10 == 0) {
    pcVar17 = pcVar16;
    if (*(char *)(param_1 + 0x13d8) != '\0') {
      pcVar17 = pcVar15;
    }
    uVar9 = FUN_144f07d70(local_68,"Content-Length: %I64d\r\n",pcVar17);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
  }
  if (((uVar4 - 8 < 2) && (lVar10 = FUN_144f23930(param_1,"Content-Type",0xc), lVar10 == 0)) &&
     (uVar9 = thunk_FUN_144f07eb0(local_68,"Content-Type: text/parameters\r\n",0x1f),
     (int)uVar9 != 0)) {
    return uVar9;
  }
  if (((uVar4 == 3) && (lVar10 = FUN_144f23930(param_1,"Content-Type",0xc), lVar10 == 0)) &&
     (uVar9 = thunk_FUN_144f07eb0(local_68,"Content-Type: application/sdp\r\n",0x1f),
     (int)uVar9 != 0)) {
    return uVar9;
  }
  *(undefined1 *)(param_1 + 0x13cb) = 0;
LAB_1452c49cf:
  *(undefined1 *)(param_1 + 0x1d3) = 1;
  uVar9 = thunk_FUN_144f07eb0(local_68,&DAT_149c058e8,2);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if ((0 < (longlong)pcVar16) &&
     (uVar9 = thunk_FUN_144f07eb0(local_68,*(undefined8 *)(param_1 + 0x218),pcVar16),
     (int)uVar9 != 0)) {
    return uVar9;
  }
  uVar24 = 0;
  uVar4 = FUN_144f1d8d0(local_68,param_1,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1400,0,
                        (ulonglong)puVar13 & 0xffffffff00000000);
  if (uVar4 != 0) {
    FUN_144f14b70(param_1,"Failed sending RTSP request");
    return (ulonglong)uVar4;
  }
  FUN_144f24c20(param_1,0,0xffffffffffffffff,1,CONCAT44(uVar24,(pcVar15 != (char *)0x0) - 1));
  *(int *)(param_1 + 0x11c8) = *(int *)(param_1 + 0x11c8) + 1;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_144f25da0(param_1);
    iVar5 = FUN_144f25e70(param_1);
    if (iVar5 != 0) {
      return 0x2a;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1452c4b80 FUN_1452c4b80 body=171 status=ok
// SIG undefined FUN_1452c4b80(void)

int FUN_1452c4b80(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  uVar3 = 1;
  if (*(int *)(param_1 + 0x9f8) != 0xb) {
    uVar3 = param_3;
  }
  iVar2 = FUN_144f1d430(param_1,param_2,uVar3);
  if (((lVar1 != 0) && ((int)param_2 == 0)) && (iVar2 == 0)) {
    if (*(int *)(param_1 + 0x9f8) == 0xb) {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x3c0) == -1) {
        FUN_144f14ad0(param_1,"Got an RTP Receive with a CSeq of %ld");
      }
    }
    else if (*(int *)(lVar1 + 0x70) != *(int *)(lVar1 + 0x74)) {
      FUN_144f14b70(param_1,"The CSeq of this request %ld did not match the response %ld",
                    *(int *)(lVar1 + 0x70),*(int *)(lVar1 + 0x74));
      iVar2 = 0x55;
    }
  }
  return iVar2;
}



// FUNCTION 1452c4c30 FUN_1452c4c30 body=76 status=ok
// SIG undefined FUN_1452c4c30(void)

undefined4 FUN_1452c4c30(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144f1d510();
  if (*(int *)(param_1 + 0x11c8) == 0) {
    *(undefined4 *)(param_1 + 0x11c8) = 1;
  }
  if (*(int *)(param_1 + 0x11cc) == 0) {
    *(undefined4 *)(param_1 + 0x11cc) = 1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3c0) = 0xffffffff;
  return uVar1;
}



// FUNCTION 1452c4c80 FUN_1452c4c80 body=23 status=ok
// SIG undefined FUN_1452c4c80(void)

undefined8 FUN_1452c4c80(undefined8 param_1,longlong param_2)

{
  FUN_144f07d10(param_2 + 0x3a0);
  return 0;
}



// FUNCTION 1452c4cb0 FUN_1452c4cb0 body=617 status=ok
// SIG undefined FUN_1452c4cb0(void)

undefined8 FUN_1452c4cb0(longlong param_1,longlong param_2,size_t *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  size_t sVar7;
  longlong lVar8;
  size_t _MaxCount;
  code *pcVar9;
  undefined8 uVar10;
  
  lVar1 = param_2 + 0x3a0;
  bVar3 = false;
  lVar5 = FUN_144f07ea0(lVar1);
  if (lVar5 == 0) {
    pcVar6 = *(char **)(param_1 + 0x140);
    sVar7 = *param_3;
  }
  else {
    iVar4 = thunk_FUN_144f07eb0(lVar1,*(undefined8 *)(param_1 + 0x140),*param_3);
    if (iVar4 != 0) {
      return 0x1b;
    }
    pcVar6 = (char *)FUN_144f07e80(lVar1);
    sVar7 = FUN_144f07ea0(lVar1);
  }
  do {
    if ((longlong)sVar7 < 1) {
LAB_1452c4eac:
      if (sVar7 != 0) {
LAB_1452c4eae:
        if (*pcVar6 == '$') {
          lVar5 = FUN_144f07ea0(lVar1);
          if (lVar5 == 0) {
            iVar4 = thunk_FUN_144f07eb0(lVar1,pcVar6,sVar7);
            if (iVar4 != 0) {
              return 0x1b;
            }
          }
          else {
            FUN_144f07de0(lVar1,sVar7);
          }
          *param_3 = 0;
          return 0;
        }
      }
      *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + (*param_3 - sVar7);
      *param_3 = sVar7;
      FUN_144f07d10(lVar1);
      return 0;
    }
    while (*pcVar6 != '$') {
      _MaxCount = 5;
      if ((longlong)sVar7 < 5) {
        _MaxCount = sVar7;
      }
      if (((0 < *(int *)(param_1 + 0x138)) && (!bVar3)) ||
         (iVar4 = strncmp(pcVar6,"RTSP/",_MaxCount), iVar4 == 0)) goto LAB_1452c4eac;
      do {
        pcVar6 = pcVar6 + 1;
        sVar7 = sVar7 - 1;
        if ((longlong)sVar7 < 1) goto LAB_1452c4eac;
      } while ((*pcVar6 != '$') && (*pcVar6 != 'R'));
    }
    if ((longlong)sVar7 < 5) {
      *param_4 = 1;
      goto LAB_1452c4eac;
    }
    bVar2 = pcVar6[1];
    if ((*(byte *)((ulonglong)(bVar2 >> 3) + 0x11d4 + param_1) & (byte)(1 << (bVar2 & 7))) == 0) {
      pcVar6 = pcVar6 + 1;
      sVar7 = sVar7 - 1;
    }
    else {
      *(uint *)(param_2 + 0x3c0) = (uint)bVar2;
      lVar5 = (ulonglong)CONCAT11(pcVar6[2],pcVar6[3]) + 4;
      if ((longlong)sVar7 < lVar5) {
        *param_4 = 1;
        goto LAB_1452c4eae;
      }
      pcVar9 = *(code **)(param_1 + 0x248);
      bVar3 = true;
      if (pcVar9 == (code *)0x0) {
        pcVar9 = *(code **)(param_1 + 0x238);
        uVar10 = *(undefined8 *)(param_1 + 0x1f0);
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x9f0);
      }
      FUN_144bbace0(param_1,1);
      lVar8 = (*pcVar9)(pcVar6,1,lVar5,uVar10);
      FUN_144bbace0(param_1,0);
      if (lVar8 == 0x10000001) {
        pcVar6 = "Cannot pause RTP";
LAB_1452c4e74:
        FUN_144f14b70(param_1,pcVar6);
        *param_4 = 0;
        return 0x17;
      }
      if (lVar8 != lVar5) {
        pcVar6 = "Failed writing RTP data";
        goto LAB_1452c4e74;
      }
      sVar7 = sVar7 - lVar5;
      pcVar6 = pcVar6 + lVar5;
      if (*(int *)(param_1 + 0x9f8) == 0xb) {
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
      }
    }
  } while( true );
}



// FUNCTION 1452c4f20 FUN_1452c4f20 body=88 status=ok
// SIG undefined FUN_1452c4f20(void)

undefined8 FUN_1452c4f20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  if (lVar1 == 0) {
    return 0x1b;
  }
  FUN_144f07cf0(param_2 + 0x3a0,1000000);
  return 0;
}



// FUNCTION 1452c4f80 FUN_1452c4f80 body=42 status=ok
// SIG undefined FUN_1452c4f80(void)

undefined4 FUN_1452c4f80(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_res18 [16];
  
  uVar2 = 0;
  if ((param_3 & 1) != 0) {
    cVar1 = FUN_144f14800(param_1,param_2,local_res18);
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 1452c4fb0 FUN_1452c4fb0 body=860 status=ok
// SIG undefined FUN_1452c4fb0(void)

undefined8 FUN_1452c4fb0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  void *_Dst;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  size_t _Size;
  char *local_res18 [2];
  
  iVar3 = FUN_144f195b0(param_2,"CSeq:",5);
  if (iVar3 != 0) {
    for (pcVar11 = (char *)(param_2 + 5); (*pcVar11 == ' ' || (*pcVar11 == '\t'));
        pcVar11 = pcVar11 + 1) {
    }
    lVar4 = strtol(pcVar11,local_res18,10);
    if (pcVar11 != local_res18[0]) {
      *(long *)(*(longlong *)(param_1 + 0x1a8) + 0x74) = lVar4;
      *(long *)(param_1 + 0x11d0) = lVar4;
      return 0;
    }
    FUN_144f14b70(param_1,"Unable to read the CSeq header: [%s]",param_2);
    return 0x55;
  }
  iVar3 = FUN_144f195b0(param_2,"Session:",8);
  if (iVar3 == 0) {
    iVar3 = FUN_144f195b0(param_2,"Transport:",10);
    if ((iVar3 != 0) &&
       (pcVar11 = (char *)(param_2 + 10), pcVar12 = pcVar11, pcVar11 != (char *)0x0)) {
      while (cVar2 = *pcVar12, cVar2 != '\0') {
        do {
          if ((cVar2 != ' ') && (cVar2 != '\t')) break;
          cVar2 = pcVar12[1];
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        pcVar9 = strchr(pcVar12,0x3b);
        iVar3 = FUN_144f195b0(pcVar12,"interleaved=",0xc);
        if (iVar3 != 0) {
          uVar5 = strtol(pcVar12 + 0xc,local_res18,10);
          if ((pcVar12 + 0xc != local_res18[0]) && (uVar5 < 0x100)) {
            uVar6 = uVar5;
            if ((*local_res18[0] == '-') &&
               ((pcVar12 = local_res18[0] + 1, uVar6 = strtol(pcVar12,local_res18,10),
                pcVar12 == local_res18[0] || (0xff < uVar6)))) {
              FUN_144f14ad0(param_1,
                            "Unable to read the interleaved parameter from Transport header: [%s]",
                            pcVar11);
              uVar6 = uVar5;
            }
            else if ((int)uVar6 < (int)uVar5) {
              return 0;
            }
            do {
              uVar10 = uVar5 & 7;
              uVar7 = uVar5;
              if ((int)uVar5 < 0) {
                uVar7 = uVar5 + 7;
                uVar10 = uVar10 - 8;
              }
              uVar5 = uVar5 + 1;
              *(byte *)((longlong)((int)uVar7 >> 3) + 0x11d4 + param_1) =
                   *(byte *)((longlong)((int)uVar7 >> 3) + 0x11d4 + param_1) |
                   (byte)(1 << (uVar10 & 0x1f));
            } while ((int)uVar5 <= (int)uVar6);
            return 0;
          }
          FUN_144f14ad0(param_1,
                        "Unable to read the interleaved parameter from Transport header: [%s]",
                        pcVar11);
          return 0;
        }
        if (pcVar9 == (char *)0x0) {
          return 0;
        }
        pcVar12 = pcVar9 + 1;
        if (pcVar12 == (char *)0x0) {
          return 0;
        }
      }
    }
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 8);
  pcVar11 = (char *)(param_2 + 8);
  if (bVar1 != 0) {
    do {
      if ((bVar1 != 0x20) && (bVar1 != 9)) break;
      bVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 1;
    } while (bVar1 != 0);
    pcVar12 = pcVar11;
    if (bVar1 != 0) {
      do {
        if ((bVar1 < 0x3c) && ((0x800000100003e00U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) break;
        bVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 1;
      } while (bVar1 != 0);
      pcVar9 = *(char **)(param_1 + 0x8a0);
      _Size = (longlong)pcVar12 - (longlong)pcVar11;
      if (pcVar9 == (char *)0x0) {
        _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(_Size + 1);
        *(void **)(param_1 + 0x8a0) = _Dst;
        if (_Dst == (void *)0x0) {
          return 0x1b;
        }
        memcpy(_Dst,pcVar11,_Size);
        *(undefined1 *)(_Size + *(longlong *)(param_1 + 0x8a0)) = 0;
        return 0;
      }
      sVar8 = 0xffffffffffffffff;
      do {
        sVar8 = sVar8 + 1;
      } while (pcVar9[sVar8] != '\0');
      if ((sVar8 == _Size) && (iVar3 = strncmp(pcVar11,pcVar9,_Size), iVar3 == 0)) {
        return 0;
      }
      FUN_144f14b70(param_1,"Got RTSP Session ID Line [%s], but wanted ID [%s]",pcVar11,
                    *(undefined8 *)(param_1 + 0x8a0));
      return 0x56;
    }
  }
  FUN_144f14b70(param_1,"Got a blank Session ID");
  return 0x56;
}



// FUNCTION 1452c5310 FUN_1452c5310 body=311 status=ok
// SIG undefined FUN_1452c5310(void)

undefined8 FUN_1452c5310(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *local_res8;
  
  lVar3 = (*(code *)PTR_calloc_14c6d9f40)(1);
  *(longlong *)(param_1 + 0x1a8) = lVar3;
  if (lVar3 == 0) {
    return 0x1b;
  }
  uVar4 = FUN_1452ce930(*(undefined8 *)(param_1 + 0x1260),0,&local_res8,0,3);
  if ((int)uVar4 == 0) {
    if ((*local_res8 == '/') || (pcVar5 = local_res8, *local_res8 == '\\')) {
      pcVar5 = local_res8 + 1;
    }
    uVar4 = (*(code *)PTR__strdup_14c6d9f38)(pcVar5);
    *(undefined8 *)(param_2 + 0x3b8) = uVar4;
    (*(code *)PTR_free_14c6d9f28)(local_res8);
    if (*(char **)(param_2 + 0x3b8) == (char *)0x0) {
      return 0x1b;
    }
    pcVar5 = strchr(*(char **)(param_2 + 0x3b8),0x2f);
    if ((pcVar5 == (char *)0x0) &&
       (pcVar5 = strchr(*(char **)(param_2 + 0x3b8),0x5c), pcVar5 == (char *)0x0)) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x3b8));
      *(undefined8 *)(param_2 + 0x3b8) = 0;
      FUN_144f14b70(param_1,"missing share in URL path for SMB");
      return 3;
    }
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
    *(char **)(lVar3 + 8) = pcVar5;
    cVar2 = *pcVar5;
    while (cVar2 != '\0') {
      if (cVar2 == '/') {
        *pcVar5 = '\\';
      }
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar1;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1452c5450 FUN_1452c5450 body=266 status=ok
// SIG undefined FUN_1452c5450(void)

undefined8 FUN_1452c5450(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x13a0) == 0) {
    return 0x43;
  }
  *(undefined4 *)(lVar1 + 0x3a0) = 1;
  lVar2 = (*(code *)PTR_malloc_14c6d9f20)(0x9000);
  *(longlong *)(lVar1 + 0x3d0) = lVar2;
  if (lVar2 != 0) {
    FUN_144f16220(lVar1,0);
    pcVar3 = strchr(*(char **)(lVar1 + 0x150),0x2f);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = strchr(*(char **)(lVar1 + 0x150),0x5c);
    }
    if (pcVar3 == (char *)0x0) {
      *(undefined8 *)(lVar1 + 0x3a8) = *(undefined8 *)(lVar1 + 0x150);
      uVar4 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar1 + 0x70));
      *(undefined8 *)(lVar1 + 0x3b0) = uVar4;
      uVar4 = 0;
      if (*(longlong *)(lVar1 + 0x3b0) == 0) {
        uVar4 = 0x1b;
      }
      return uVar4;
    }
    *(char **)(lVar1 + 0x3a8) = pcVar3 + 1;
    lVar2 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar1 + 0x150));
    *(longlong *)(lVar1 + 0x3b0) = lVar2;
    if (lVar2 != 0) {
      pcVar3[lVar2 - *(longlong *)(lVar1 + 0x150)] = '\0';
      return 0;
    }
  }
  return 0x1b;
}



// FUNCTION 1452c5560 FUN_1452c5560 body=528 status=ok
// SIG undefined FUN_1452c5560(void)

ulonglong FUN_1452c5560(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  char local_res8 [8];
  longlong local_res18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res18[0] = 0;
  if (*(int *)(lVar1 + 0x3a0) == 1) {
    if ((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 1) != 0) {
      local_res8[0] = '\0';
      uVar4 = FUN_144f13f00(param_1,0,0,local_res8);
      if (((int)uVar4 != 0) && ((int)uVar4 != 0x51)) {
        return uVar4;
      }
      if (local_res8[0] == '\0') {
        return 0;
      }
    }
    uVar3 = FUN_144f24bb0(param_1);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 != 0) goto LAB_1452c5633;
    FUN_1452c6170(param_1,*(undefined8 *)(param_1 + 0xce0),0x72,0xf);
    lVar2 = *(longlong *)(param_1 + 0xce0);
    *(undefined8 *)(lVar2 + 0x24) = 0x4c20544e02000c00;
    *(undefined4 *)(lVar2 + 0x2c) = 0x2e30204d;
    *(undefined2 *)(lVar2 + 0x30) = 0x3231;
    *(undefined1 *)(lVar2 + 0x32) = 0;
    uVar3 = FUN_1452c6210(param_1,0x33,0);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 != 0) goto LAB_1452c5633;
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3a0) = 2;
  }
  uVar3 = FUN_1452c6510(param_1,local_res18);
  uVar4 = (ulonglong)uVar3;
  if ((uVar3 != 0) && (uVar3 != 0x51)) {
LAB_1452c5633:
    FUN_144f16220(lVar1,1);
    return uVar4;
  }
  if (local_res18[0] != 0) {
    if (*(int *)(lVar1 + 0x3a0) == 2) {
      if ((*(ulonglong *)(lVar1 + 0x3f0) < 0x51) || (*(int *)(local_res18[0] + 9) != 0)) {
        FUN_144f16220(lVar1,1);
        return 7;
      }
      *(undefined8 *)(lVar1 + 0x3c0) = *(undefined8 *)(local_res18[0] + 0x49);
      *(undefined4 *)(lVar1 + 0x3c8) = *(undefined4 *)(local_res18[0] + 0x34);
      uVar3 = FUN_1452c6280(param_1);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 != 0) goto LAB_1452c5633;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3a0) = 3;
    }
    else if (*(int *)(lVar1 + 0x3a0) == 3) {
      if (*(int *)(local_res18[0] + 9) == 0) {
        *(undefined2 *)(lVar1 + 0x3cc) = *(undefined2 *)(local_res18[0] + 0x20);
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3a0) = 4;
        *param_2 = 1;
        *(undefined8 *)(lVar1 + 0x3f0) = 0;
        return 0;
      }
      FUN_144f16220(lVar1);
      return 0x43;
    }
    *(undefined8 *)(lVar1 + 0x3f0) = 0;
  }
  return 0;
}



// FUNCTION 1452c5790 FUN_1452c5790 body=1985 status=ok
// SIG undefined FUN_1452c5790(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1452c5790(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_4f8 [32];
  ushort local_4d8;
  int *local_4d0;
  undefined8 local_4c8;
  longlong local_498 [2];
  undefined2 local_488 [3];
  uint3 uStack_482;
  short local_47f;
  undefined2 local_47d;
  char local_47b;
  undefined2 uStack_47a;
  undefined1 auStack_478 [5];
  undefined4 auStack_473 [2];
  undefined4 local_468;
  undefined4 local_464;
  short local_457;
  char local_455 [19];
  undefined1 auStack_442 [1018];
  ulonglong local_48;
  longlong lVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  local_4d0 = *(int **)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  local_498[0] = 0;
  local_4c8 = param_2;
  if ((*(char *)(param_1 + 0x13d8) != '\0') && (*(longlong *)(param_1 + 0x11f8) < 0)) {
    FUN_144f14b70(param_1,"SMB upload needs to know the size up front");
    goto LAB_1452c60a4;
  }
  if (*local_4d0 == 0) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x70) + lVar9) != '\0');
    lVar7 = -1;
    do {
      lVar8 = lVar7;
      lVar7 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x3b8) + lVar7) != '\0');
    if (0x400 < (ulonglong)(lVar8 + 0xb + lVar9)) {
      FUN_144f16220(lVar2,1);
      goto LAB_1452c60a4;
    }
    memset(local_488,0,0x40b);
    pcVar11 = &local_47b;
    local_47d = 0x5c5c;
    local_47b = '\0';
    local_488[0] = 0xff04;
    uStack_482 = uStack_482 & 0xff;
    pcVar10 = *(char **)(lVar2 + 0x70);
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      *pcVar11 = cVar1;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    lVar9 = -1;
    do {
      lVar7 = lVar9;
      lVar9 = lVar7 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x70) + lVar9) != '\0');
    *(undefined2 *)(auStack_478 + lVar7 + 0xfffffffffffffffe) = 0x5c;
    pcVar10 = auStack_478 + lVar7 + 0xffffffffffffffff;
    pcVar11 = *(char **)(lVar2 + 0x3b8);
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar10 = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x3b8) + lVar7) != '\0');
    puVar12 = (undefined4 *)(auStack_478 + lVar7 + lVar9 + 0xffffffffffffffff);
    *puVar12 = 0x3f3f3f3f;
    *(undefined2 *)(puVar12 + 1) = 0x3f;
    lVar9 = (longlong)puVar12 - (longlong)&local_47d;
    local_47f = (short)lVar9 + 6;
    iVar5 = FUN_144f24bb0(param_1);
    if (iVar5 != 0) {
      FUN_144f16220(lVar2,1);
      goto LAB_1452c60a4;
    }
    FUN_1452c6170(param_1,*(undefined8 *)(param_1 + 0xce0),0x75,lVar9 + 0x11U);
    memcpy((void *)(*(longlong *)(param_1 + 0xce0) + 0x24),local_488,lVar9 + 0x11U);
    iVar5 = FUN_1452c6210(param_1,lVar9 + 0x35,0);
    if (iVar5 == 0) {
      **(undefined4 **)(param_1 + 0x1a8) = 1;
      goto LAB_1452c59b9;
    }
LAB_1452c59d1:
    FUN_144f16220(lVar2,1);
    goto LAB_1452c60a4;
  }
LAB_1452c59b9:
  iVar5 = FUN_1452c6510(param_1,local_498);
  lVar9 = local_498[0];
  if ((iVar5 != 0) && (iVar5 != 0x51)) goto LAB_1452c59d1;
  if (local_498[0] == 0) goto LAB_1452c60a4;
  iVar13 = 5;
  switch(*local_4d0) {
  case 1:
    if (*(int *)(local_498[0] + 9) != 0) {
      local_4d0[5] = 0x4e;
      iVar5 = local_4d0[5];
      if (*(int *)(local_498[0] + 9) == 0x50001) {
        iVar5 = 9;
      }
      local_4d0[5] = iVar5;
      goto switchD_1452c5a32_caseD_6;
    }
    iVar13 = 2;
    *(undefined2 *)(local_4d0 + 4) = *(undefined2 *)(local_498[0] + 0x1c);
    *(undefined8 *)(lVar2 + 0x3f0) = 0;
    pcVar10 = *(char **)(*(longlong *)(param_1 + 0x1a8) + 8);
    lVar9 = -1;
    do {
      lVar7 = lVar9;
      lVar9 = lVar7 + 1;
    } while (pcVar10[lVar9] != '\0');
    if (0x400 < lVar7 + 2U) {
      FUN_144f16220(lVar2,1);
      goto LAB_1452c60a4;
    }
    memset(local_488,0,0x433);
    local_488[0] = 0xff18;
    lVar9 = -1;
    do {
      lVar7 = lVar9;
      lVar9 = lVar7 + 1;
    } while (pcVar10[lVar9] != '\0');
    uStack_482 = CONCAT12(uStack_482._2_1_,(short)lVar9);
    local_468 = 7;
    if (*(char *)(param_1 + 0x13d8) == '\0') {
      auStack_478._0_4_ = 0x80000000;
      local_464 = 1;
    }
    else {
      auStack_478._0_4_ = 0xc0000000;
      local_464 = 5;
    }
    local_457 = (short)lVar7 + 2;
    lVar9 = -(longlong)pcVar10;
    do {
      cVar1 = *pcVar10;
      pcVar10[(longlong)(local_455 + lVar9)] = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_144f24bb0(param_1);
    if (iVar5 == 0) {
      FUN_1452c6170(param_1,*(undefined8 *)(param_1 + 0xce0),0xa2,lVar7 + 0x35);
      memcpy((void *)(*(longlong *)(param_1 + 0xce0) + 0x24),local_488,lVar7 + 0x35);
      iVar5 = FUN_1452c6210(param_1,lVar7 + 0x59,0);
    }
    break;
  case 2:
    if ((*(int *)(local_498[0] + 9) == 0) && (99 < *(ulonglong *)(lVar2 + 0x3f0))) {
      *(undefined2 *)((longlong)local_4d0 + 0x12) = *(undefined2 *)(local_498[0] + 0x2a);
      *(undefined8 *)(param_1 + 0x148) = 0;
      if (*(char *)(param_1 + 0x13d8) != '\0') {
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x11f8);
        FUN_144f25d20(param_1);
        *(undefined8 *)(lVar2 + 0x3f0) = 0;
        uVar6 = 2;
        goto LAB_1452c5db2;
      }
      lVar7 = *(longlong *)(local_498[0] + 0x5c);
      *(longlong *)(param_1 + 0xf0) = lVar7;
      if (lVar7 < 0) {
        local_4d0[5] = 8;
        uVar6 = 3;
        *(undefined8 *)(lVar2 + 0x3f0) = 0;
        goto LAB_1452c5db2;
      }
      FUN_144f25ce0(param_1,lVar7);
      if (*(char *)(param_1 + 0xaba) != '\0') {
        lVar9 = *(longlong *)(lVar9 + 0x48) + -0x19db1ded53e8000;
        lVar9 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar9),8) + lVar9;
        *(longlong *)(param_1 + 0x13f8) = (lVar9 >> 0x17) - (lVar9 >> 0x3f);
      }
      iVar13 = 3;
LAB_1452c5d8e:
      uVar6 = iVar13 - 2;
      *(undefined8 *)(lVar2 + 0x3f0) = 0;
      if (uVar6 < 6) {
LAB_1452c5db2:
                    /* WARNING: Could not recover jumptable at 0x0001452c5dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_1452c60dc + (longlong)(int)uVar6 * 4)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_1452c60dc + (longlong)(int)uVar6 * 4),local_4d0);
        return;
      }
      break;
    }
    local_4d0[5] = 0x4e;
    iVar5 = local_4d0[5];
    if (*(int *)(local_498[0] + 9) == 0x50001) {
      iVar5 = 9;
    }
    local_4d0[5] = iVar5;
  case 5:
    *(undefined8 *)(lVar2 + 0x3f0) = 0;
    iVar13 = 6;
    iVar5 = FUN_144f24bb0(param_1);
    if (iVar5 == 0) {
      FUN_1452c6170(param_1,*(undefined8 *)(param_1 + 0xce0),0x71,3);
      lVar9 = *(longlong *)(param_1 + 0xce0);
      *(undefined2 *)(lVar9 + 0x24) = 0;
      *(undefined1 *)(lVar9 + 0x26) = 0;
      iVar5 = FUN_1452c6210(param_1,0x27,0);
    }
    break;
  case 3:
    if ((*(int *)(local_498[0] + 9) == 0) && (0x31 < *(ulonglong *)(lVar2 + 0x3f0))) {
      uVar4 = FUN_14550e120(local_498[0] + 0x2f);
      uVar14 = (ulonglong)uVar4;
      local_4d8 = uVar4;
      uVar3 = FUN_14550e120(lVar9 + 0x31);
      if (uVar4 == 0) {
LAB_1452c5cd8:
        *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + uVar14;
        *(ulonglong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + uVar14;
        iVar5 = FUN_144f25d60(param_1);
        if (iVar5 == 0) {
          iVar5 = 3;
          if (local_4d8 < 0x8000) {
            iVar5 = iVar13;
          }
          iVar13 = iVar5;
          iVar5 = 0;
          goto LAB_1452c5d8e;
        }
        local_4d0[5] = iVar5;
      }
      else if (*(ulonglong *)(lVar2 + 0x3f0) < (ulonglong)uVar3 + 4 + uVar14) {
        FUN_144f14b70(param_1,"Invalid input packet");
        local_4d0[5] = 0x38;
      }
      else {
        iVar5 = FUN_144f14dc0(param_1,1,lVar9 + 4 + (ulonglong)uVar3,uVar14);
        if (iVar5 == 0) goto LAB_1452c5cd8;
        local_4d0[5] = iVar5;
      }
    }
    else {
      local_4d0[5] = 0x38;
    }
    goto LAB_1452c5ff8;
  case 4:
    if ((*(int *)(local_498[0] + 9) == 0) && (0x29 < *(ulonglong *)(lVar2 + 0x3f0))) {
      uVar4 = FUN_14550e120(local_498[0] + 0x29);
      *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + (ulonglong)uVar4;
      *(ulonglong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + (ulonglong)uVar4;
      FUN_144f25da0(param_1);
      iVar13 = (*(longlong *)(param_1 + 0xf0) <= *(longlong *)(param_1 + 0x100)) + 4;
      goto LAB_1452c5d8e;
    }
    local_4d0[5] = 0x19;
LAB_1452c5ff8:
    *(undefined8 *)(lVar2 + 0x3f0) = 0;
    local_4c8 = (undefined1 *)
                (ulonglong)CONCAT21(*(undefined2 *)(*(longlong *)(param_1 + 0x1a8) + 0x12),3);
    iVar5 = FUN_144f24bb0(param_1);
    if (iVar5 == 0) {
      FUN_1452c6170(param_1,*(undefined8 *)(param_1 + 0xce0),4,9);
      lVar9 = *(longlong *)(param_1 + 0xce0);
      *(undefined1 **)(lVar9 + 0x24) = local_4c8;
      *(undefined1 *)(lVar9 + 0x2c) = 0;
      iVar5 = FUN_1452c6210(param_1,0x2d,0);
    }
    break;
  case 6:
switchD_1452c5a32_caseD_6:
    *(undefined8 *)(lVar2 + 0x3f0) = 0;
    iVar5 = local_4d0[5];
    *local_4c8 = 1;
    iVar13 = 7;
    break;
  default:
    *(undefined8 *)(lVar2 + 0x3f0) = 0;
    goto LAB_1452c60a4;
  }
  if (iVar5 == 0) {
    **(int **)(param_1 + 0x1a8) = iVar13;
  }
  else {
    FUN_144f16220(lVar2,1);
  }
LAB_1452c60a4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_4f8);
}



// FUNCTION 1452c6100 FUN_1452c6100 body=89 status=ok
// SIG undefined FUN_1452c6100(void)

undefined8 FUN_1452c6100(undefined8 param_1,longlong param_2)

{
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x3b8));
  *(undefined8 *)(param_2 + 0x3b8) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x3b0));
  *(undefined8 *)(param_2 + 0x3b0) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x3d0));
  *(undefined8 *)(param_2 + 0x3d0) = 0;
  return 0;
}



// FUNCTION 1452c6170 FUN_1452c6170 body=149 status=ok
// SIG undefined FUN_1452c6170(void)

void FUN_1452c6170(longlong param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 uVar3;
  DWORD DVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uVar3 = Ordinal_9(param_4 + 0x20);
  *(undefined2 *)((longlong)param_2 + 2) = uVar3;
  *(undefined2 *)((longlong)param_2 + 0xe) = 0x41;
  *(undefined4 *)((longlong)param_2 + 4) = 0x424d53ff;
  *(undefined1 *)(param_2 + 1) = param_3;
  *(undefined1 *)((longlong)param_2 + 0xd) = 0x18;
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(lVar1 + 0x3cc);
  *(undefined2 *)((longlong)param_2 + 0x1c) = *(undefined2 *)(lVar2 + 0x10);
  DVar4 = GetCurrentProcessId();
  *(short *)(param_2 + 2) = (short)(DVar4 >> 0x10);
  *(short *)((longlong)param_2 + 0x1e) = (short)DVar4;
  return;
}



// FUNCTION 1452c6210 FUN_1452c6210 body=107 status=ok
// SIG undefined FUN_1452c6210(void)

undefined8 FUN_1452c6210(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = FUN_144f15180(param_1,0,*(undefined8 *)(param_1 + 0xce0),param_2,&local_res8);
  if ((int)uVar2 == 0) {
    if (local_res8 != param_2) {
      *(longlong *)(lVar1 + 0x3e0) = param_2;
      *(longlong *)(lVar1 + 1000) = local_res8;
    }
    *(undefined8 *)(lVar1 + 0x3d8) = param_3;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1452c6280 FUN_1452c6280 body=623 status=ok
// SIG undefined FUN_1452c6280(void)

void FUN_1452c6280(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_4c8 [32];
  undefined2 local_4a8 [2];
  undefined4 local_4a3;
  undefined2 local_49f;
  undefined4 local_49d;
  undefined4 local_499;
  undefined4 local_491;
  short local_48d;
  undefined8 local_48b;
  undefined8 uStack_483;
  undefined8 local_47b;
  undefined4 local_473;
  undefined4 uStack_46f;
  undefined4 uStack_46b;
  undefined4 uStack_467;
  undefined8 local_463;
  char local_45b [12];
  char acStack_44f [4];
  char acStack_44b [30];
  undefined1 auStack_42d [36];
  undefined1 auStack_409 [897];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  longlong lVar4;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  lVar7 = *(longlong *)(param_1 + 0x20);
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(*(longlong *)(lVar7 + 0x3b0) + lVar5) != '\0');
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(char *)(*(longlong *)(lVar7 + 0x3a8) + lVar3) != '\0');
  if ((ulonglong)(lVar4 + 0x40 + lVar5) < 0x401) {
    FUN_14550da20(*(undefined8 *)(lVar7 + 0x158),local_58);
    FUN_14550d970(local_58,lVar7 + 0x3c0,&local_88);
    FUN_14550db90(*(undefined8 *)(lVar7 + 0x158),local_40);
    FUN_14550d970(local_40,lVar7 + 0x3c0,&local_70);
    memset(local_4a8,0,0x41d);
    pcVar8 = local_45b;
    local_49f = 1;
    local_4a8[0] = 0xff0d;
    local_4a3 = 0x19000;
    local_49d = *(undefined4 *)(lVar7 + 0x3c8);
    local_48b = local_88;
    uStack_483 = uStack_80;
    local_491 = 8;
    local_47b = local_78;
    local_473 = local_70;
    uStack_46f = uStack_6c;
    uStack_46b = uStack_68;
    uStack_467 = uStack_64;
    local_499 = 0x180018;
    local_463 = local_60;
    pcVar6 = *(char **)(lVar7 + 0x3a8);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    lVar5 = -1;
    do {
      lVar3 = lVar5;
      lVar5 = lVar3 + 1;
    } while (*(char *)(*(longlong *)(lVar7 + 0x3a8) + lVar3 + 1) != '\0');
    pcVar6 = *(char **)(lVar7 + 0x3b0);
    pcVar9 = local_45b + lVar3 + 2;
    pcVar8 = pcVar9;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (*(char *)(*(longlong *)(lVar7 + 0x3b0) + 1 + lVar4) != '\0');
    builtin_strncpy(local_45b + lVar4 + lVar3 + 4,"Windows",8);
    builtin_strncpy(local_45b + lVar4 + lVar3 + 0xc,"curl",5);
    lVar7 = (longlong)(pcVar9 + lVar4 + 10) - (longlong)&local_48b;
    local_48d = (short)lVar7 + 5;
    iVar2 = FUN_144f24bb0(param_1);
    if (iVar2 == 0) {
      FUN_1452c6170(param_1,*(undefined8 *)(param_1 + 0xce0),0x73,lVar7 + 0x22U);
      memcpy((void *)(*(longlong *)(param_1 + 0xce0) + 0x24),local_4a8,lVar7 + 0x22U);
      FUN_1452c6210(param_1,lVar7 + 0x46,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_4c8);
}



// FUNCTION 1452c6510 FUN_1452c6510 body=491 status=ok
// SIG undefined FUN_1452c6510(void)

undefined8 FUN_1452c6510(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  if (*(longlong *)(lVar2 + 0x3e0) == 0) {
    uVar6 = *(ulonglong *)(lVar2 + 0x3d8);
    if (uVar6 == 0) goto LAB_1452c6616;
    local_res8 = (ulonglong)*(uint *)(param_1 + 0x6d0);
    if (uVar6 <= *(uint *)(param_1 + 0x6d0)) {
      local_res8 = uVar6;
    }
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0xce0);
    uVar4 = FUN_144f24620(param_1,local_res8,&local_res8);
    if (((int)uVar4 != 0) && ((int)uVar4 != 0x51)) {
      return uVar4;
    }
    if (local_res8 == 0) {
      return 0;
    }
    *(longlong *)(lVar2 + 0x3d8) = *(longlong *)(lVar2 + 0x3d8) - local_res8;
    *(ulonglong *)(lVar2 + 0x3e0) = local_res8;
    *(undefined8 *)(lVar2 + 1000) = 0;
    if (local_res8 == 0) goto LAB_1452c6616;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar6 = *(longlong *)(lVar3 + 0x3e0) - *(longlong *)(lVar3 + 1000);
  if (*(longlong *)(lVar3 + 0x3e0) != 0) {
    uVar4 = FUN_144f15180(param_1,0,*(longlong *)(param_1 + 0xce0) + *(longlong *)(lVar3 + 1000),
                          uVar6,&local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (local_res8 == uVar6) {
      *(undefined8 *)(lVar3 + 0x3e0) = 0;
    }
    else {
      *(longlong *)(lVar3 + 1000) = *(longlong *)(lVar3 + 1000) + local_res8;
    }
  }
LAB_1452c6616:
  if ((*(longlong *)(lVar2 + 0x3e0) != 0) || (*(longlong *)(lVar2 + 0x3d8) != 0)) {
    return 0x51;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 0x3d0);
  uVar4 = FUN_144f15080(param_1,*(undefined8 *)(lVar2 + 0x1a8),*(longlong *)(lVar2 + 0x3f0) + lVar3,
                        0x9000 - *(longlong *)(lVar2 + 0x3f0),&local_res8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((local_res8 != 0) &&
     (*(longlong *)(lVar2 + 0x3f0) = *(longlong *)(lVar2 + 0x3f0) + local_res8,
     3 < *(ulonglong *)(lVar2 + 0x3f0))) {
    uVar6 = FUN_14550e150(lVar3 + 2);
    uVar6 = (uVar6 & 0xffff) + 4;
    if (uVar6 <= *(ulonglong *)(lVar2 + 0x3f0)) {
      if (((0x24 < uVar6) &&
          (lVar2 = (ulonglong)*(byte *)(lVar3 + 0x24) * 2, lVar1 = lVar2 + 0x25,
          lVar2 + 0x27U <= uVar6)) &&
         (uVar5 = FUN_14550e120(lVar1 + lVar3), uVar6 < (uVar5 & 0xffff) + 2 + lVar1)) {
        return 0x1a;
      }
      *param_2 = lVar3;
    }
  }
  return 0;
}



// FUNCTION 1452c6700 FUN_1452c6700 body=95 status=ok
// SIG undefined FUN_1452c6700(void)

int FUN_1452c6700(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = FUN_1452c6c70();
  if (iVar2 != 0) {
    FUN_144f14b70(param_1,"Error %d sending MQTT CONNECT request",iVar2);
    return iVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + 0x3a0) = 0;
  *(undefined4 *)(lVar1 + 0x3a4) = 2;
  return 0;
}



// FUNCTION 1452c6760 FUN_1452c6760 body=46 status=ok
// SIG undefined FUN_1452c6760(void)

undefined8 FUN_1452c6760(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  (*(code *)PTR_free_14c6d9f28)(*puVar1);
  *puVar1 = 0;
  FUN_144f07d10(puVar1 + 5);
  return 0;
}



// FUNCTION 1452c6790 FUN_1452c6790 body=939 status=ok
// SIG undefined FUN_1452c6790(void)

ulonglong FUN_1452c6790(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar14;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar7 = *(longlong *)(param_1 + 0x20);
  uVar9 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x1a8);
  local_res18 = *(longlong *)(param_1 + 0xcd8);
  uVar3 = *(undefined8 *)(lVar7 + 0x1a8);
  *param_2 = 0;
  local_res20 = lVar7;
  if (puVar2[1] != 0) {
    uVar4 = *puVar2;
    uVar5 = FUN_1452c6bd0(param_1,uVar4);
    (*(code *)PTR_free_14c6d9f28)(uVar4);
    if (uVar5 != 0) {
      return (ulonglong)uVar5;
    }
  }
  uVar5 = 0;
  FUN_144f14ad0(param_1,"mqtt_doing: state [%d]",*(undefined4 *)(lVar7 + 0x3a0));
  lVar12 = 1;
  switch(*(undefined4 *)(lVar7 + 0x3a0)) {
  case 0:
    uVar5 = FUN_144f15080(param_1,uVar3,puVar2 + 3,1,&local_res10);
    if (uVar5 != 0) break;
    if (local_res10 == 0) {
      FUN_144f14b70(param_1,"Connection disconnected");
      *param_2 = 1;
      uVar5 = 0x38;
      break;
    }
    FUN_144f149e0(param_1,1,puVar2 + 3,1);
    puVar2[2] = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3a0) = 1;
  case 1:
    do {
      uVar5 = FUN_144f15080(param_1,uVar3,local_res8,1,&local_res10);
      if (local_res10 == 0) goto LAB_1452c694d;
      FUN_144f149e0(param_1,1,local_res8,1);
      *(byte *)(local_res18 + puVar2[2]) = local_res8[0];
      uVar6 = puVar2[2] + 1;
      puVar2[2] = uVar6;
    } while (((local_res8[0] & 0x80) != 0) && (uVar6 < 4));
    if ((local_res10 == 0) || ((local_res8[0] & 0x80) == 0)) {
LAB_1452c694d:
      if (uVar5 == 0) {
        uVar6 = puVar2[2];
        uVar11 = 0x80;
        uVar10 = uVar9;
        uVar13 = uVar9;
        if (uVar6 != 0) {
          do {
            if (-1 < (char)uVar11) break;
            uVar11 = (uint)*(byte *)(uVar10 + local_res18);
            uVar10 = uVar10 + 1;
            lVar7 = (ulonglong)(uVar11 & 0x7f) * lVar12;
            lVar12 = lVar12 << 7;
            uVar13 = uVar13 + lVar7;
          } while (uVar10 < uVar6);
        }
        puVar2[4] = uVar13;
        puVar2[2] = 0;
        if (uVar13 == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x3a0) = 0;
          if (*(char *)(puVar2 + 3) == -0x20) {
            FUN_144f14ad0(param_1,"Got DISCONNECT");
LAB_1452c6b1b:
            *param_2 = 1;
          }
        }
        else {
          lVar7 = *(longlong *)(param_1 + 0x20);
          iVar1 = *(int *)(local_res20 + 0x3a4);
          *(int *)(lVar7 + 0x3a0) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(lVar7 + 0x3a4) = 7;
          }
        }
      }
    }
    else {
      uVar5 = 8;
    }
    break;
  case 2:
    lVar7 = *(longlong *)(param_1 + 0x1a8);
    uVar5 = FUN_1452c6fc0(param_1,2);
    if (uVar5 == 0) {
      lVar7 = lVar7 + 0x28;
      pcVar8 = (char *)FUN_144f07e80(lVar7);
      FUN_144f149e0(param_1,1,pcVar8,2);
      if ((*pcVar8 == '\0') && (pcVar8[1] == '\0')) {
        FUN_1452c7080(param_1,2);
        if (*(char *)(param_1 + 0x13c2) == '\x01') {
          uVar5 = FUN_1452c7280();
          if (uVar5 == 0) {
            puVar2 = *(undefined8 **)(param_1 + 0x1a8);
            uVar5 = FUN_1452c6bd0(param_1,&DAT_149d289c8,2);
            (*(code *)PTR_free_14c6d9f28)(*puVar2);
            *puVar2 = 0;
            FUN_144f07d10(puVar2 + 5);
            *param_2 = 1;
          }
          *(undefined4 *)(local_res20 + 0x3a4) = 0;
        }
        else {
          uVar5 = FUN_1452c70d0(param_1);
          if (uVar5 == 0) {
            lVar7 = *(longlong *)(param_1 + 0x20);
            *(undefined4 *)(lVar7 + 0x3a0) = 0;
            *(undefined4 *)(lVar7 + 0x3a4) = 3;
          }
        }
      }
      else {
        FUN_144f14b70(param_1,"Expected %02x%02x but got %02x%02x",0,0,CONCAT44(uVar14,(int)*pcVar8)
                      ,(int)pcVar8[1]);
        FUN_144f07dc0(lVar7);
        uVar5 = 8;
      }
    }
    break;
  case 3:
  case 5:
  case 6:
    uVar5 = FUN_1452c7440(param_1,param_2);
    break;
  default:
    FUN_144f14b70(param_1,"State not handled yet");
    goto LAB_1452c6b1b;
  }
  if (uVar5 != 0x51) {
    uVar9 = (ulonglong)uVar5;
  }
  return uVar9;
}



// FUNCTION 1452c6b70 FUN_1452c6b70 body=83 status=ok
// SIG undefined FUN_1452c6b70(void)

undefined4 FUN_1452c6b70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  if (lVar1 == 0) {
    return 0x1b;
  }
  FUN_144f07cf0(lVar1 + 0x28,0x10000);
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  return 0;
}



// FUNCTION 1452c6bd0 FUN_1452c6bd0 body=153 status=ok
// SIG undefined FUN_1452c6bd0(void)

undefined8 FUN_1452c6bd0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  uVar2 = FUN_144f15180(param_1,0,param_2,param_3,&local_res8);
  if ((int)uVar2 == 0) {
    FUN_144f149e0(param_1,2,param_2,local_res8);
    if (param_3 == local_res8) {
      lVar3 = 0;
      lVar4 = lVar3;
    }
    else {
      lVar3 = FUN_144f13940(local_res8 + param_2,param_3 - local_res8);
      lVar4 = param_3 - local_res8;
      if (lVar3 == 0) {
        return 0x1b;
      }
    }
    *plVar1 = lVar3;
    uVar2 = 0;
    plVar1[1] = lVar4;
  }
  return uVar2;
}



// FUNCTION 1452c6c70 FUN_1452c6c70 body=818 status=ok
// SIG undefined FUN_1452c6c70(void)

void FUN_1452c6c70(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined1 *_Dst;
  longlong lVar4;
  byte bVar5;
  ulonglong _Size;
  size_t sVar6;
  longlong lVar7;
  ulonglong _Size_00;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *_Src;
  int iVar11;
  undefined1 auStack_88 [32];
  byte local_68 [8];
  size_t local_60;
  size_t local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x6c727563;
  lVar7 = -1;
  _Size = 0xffffffffffffffff;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_50 = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x13a0) != (undefined1 *)0x0) {
    local_50 = *(undefined1 **)(param_1 + 0x13a0);
  }
  do {
    _Size = _Size + 1;
  } while (local_50[_Size] != '\0');
  _Size_00 = 0xffffffffffffffff;
  _Src = &DAT_14996de1b;
  if (*(undefined1 **)(param_1 + 0x13a8) != (undefined1 *)0x0) {
    _Src = *(undefined1 **)(param_1 + 0x13a8);
  }
  do {
    _Size_00 = _Size_00 + 1;
  } while (_Src[_Size_00] != '\0');
  lVar10 = 0x10;
  if (_Size == 0) {
    lVar10 = 0xe;
  }
  lVar10 = lVar10 + _Size_00 + _Size;
  if (_Size_00 != 0) {
    lVar10 = lVar10 + 2;
  }
  uVar8 = lVar10 + 10;
  iVar11 = 0;
  if (uVar8 != 0) {
    lVar9 = 0;
    do {
      if (3 < lVar9) break;
      bVar2 = (byte)uVar8;
      uVar8 = uVar8 >> 7;
      bVar2 = bVar2 & 0x7f;
      bVar5 = bVar2 | 0x80;
      if (uVar8 == 0) {
        bVar5 = bVar2;
      }
      iVar11 = iVar11 + 1;
      local_68[lVar9] = bVar5;
      lVar9 = lVar9 + 1;
    } while (uVar8 != 0);
  }
  sVar6 = (size_t)iVar11;
  local_58 = sVar6 + 0xb + lVar10;
  local_60 = sVar6;
  if ((0xfffffff < local_58) ||
     (_Dst = (undefined1 *)(*(code *)PTR_malloc_14c6d9f20)(local_58), _Dst == (undefined1 *)0x0))
  goto LAB_1452c6f95;
  memset(_Dst,0,local_58);
  *_Dst = 0x10;
  memcpy(_Dst + 1,local_68,sVar6);
  *(undefined4 *)(_Dst + sVar6 + 1) = 0x514d0400;
  *(undefined4 *)(_Dst + sVar6 + 5) = 0x2045454;
  *(undefined2 *)(_Dst + sVar6 + 9) = 0x3c00;
  iVar3 = FUN_1452b32b0(param_1,&uStack_44,9);
  lVar9 = (longlong)(iVar11 + 0xb);
  lVar10 = -1;
  do {
    lVar4 = lVar10 + 1;
    lVar1 = lVar10 + 1;
    lVar10 = lVar4;
  } while (*(char *)((longlong)&local_48 + lVar1) != '\0');
  if (lVar4 == 0xc) {
    *(undefined2 *)(_Dst + lVar9) = 0xc00;
    *(ulonglong *)(_Dst + lVar9 + 2) = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(_Dst + lVar9 + 10) = uStack_40;
    FUN_144f14ad0(param_1,"Using client id \'%s\'",&local_48);
    sVar6 = local_60;
    lVar10 = (longlong)(iVar11 + 0x19);
    lVar7 = _Size + lVar10;
    if (_Size != 0) {
      lVar7 = lVar7 + 2;
      if (0xffff < _Size) {
        FUN_144f14b70(param_1,"Username is too large: [%zu]");
        goto LAB_1452c6f58;
      }
      _Dst[local_60 + 8] = _Dst[local_60 + 8] | 0x80;
      _Dst[lVar10] = (char)(_Size >> 8);
      _Dst[lVar10 + 1] = (char)_Size;
      memcpy(_Dst + lVar10 + 2,local_50,_Size);
    }
    if (_Size_00 != 0) {
      if (0xffff < _Size_00) {
        FUN_144f14b70(param_1,"Password is too large: [%zu]");
        goto LAB_1452c6f58;
      }
      _Dst[sVar6 + 8] = _Dst[sVar6 + 8] | 0x40;
      _Dst[lVar7 + 1] = (char)_Size_00;
      _Dst[lVar7] = (char)(_Size_00 >> 8);
      memcpy(_Dst + lVar7 + 2,_Src,_Size_00);
    }
    if (iVar3 == 0) {
      FUN_1452c6bd0(param_1,_Dst,local_58);
    }
  }
  else {
    do {
      lVar9 = lVar7 + 1;
      lVar10 = lVar7 + 1;
      lVar7 = lVar9;
    } while (*(char *)((longlong)&local_48 + lVar10) != '\0');
    FUN_144f14b70(param_1,"Client ID length mismatched: [%zu]",lVar9);
  }
LAB_1452c6f58:
  (*(code *)PTR_free_14c6d9f28)(_Dst);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x13a0));
  *(undefined8 *)(param_1 + 0x13a0) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x13a8));
  *(undefined8 *)(param_1 + 0x13a8) = 0;
LAB_1452c6f95:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452c6fc0 FUN_1452c6fc0 body=171 status=ok
// SIG undefined FUN_1452c6fc0(void)

void FUN_1452c6fc0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  undefined8 local_428 [2];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar3 = *(longlong *)(param_1 + 0x1a8) + 0x28;
  uVar2 = FUN_144f07ea0(lVar3);
  if (uVar2 < param_2) {
    local_438 = local_428;
    iVar1 = FUN_144f15080(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8),local_418,
                          param_2 - uVar2);
    if ((iVar1 == 0) && (iVar1 = thunk_FUN_144f07eb0(lVar3,local_418,local_428[0]), iVar1 == 0)) {
      FUN_144f07ea0(lVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_458);
}



// FUNCTION 1452c7080 FUN_1452c7080 body=76 status=ok
// SIG undefined FUN_1452c7080(void)

void FUN_1452c7080(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1a8) + 0x28;
  uVar1 = FUN_144f07ea0(lVar2);
  if (uVar1 <= param_2) {
    FUN_144f07dc0();
    return;
  }
  FUN_144f07de0(lVar2,uVar1 - param_2);
  return;
}



// FUNCTION 1452c70d0 FUN_1452c70d0 body=422 status=ok
// SIG undefined FUN_1452c70d0(void)

int FUN_1452c70d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;
  size_t _Size;
  undefined1 *puVar9;
  ulonglong uVar10;
  byte local_res8 [8];
  undefined1 local_res10;
  undefined7 uStackX_11;
  void *local_res18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar9 = (undefined1 *)0x0;
  uVar7 = 0;
  puVar8 = (undefined1 *)0x0;
  local_res18[0] = (void *)0x0;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0x1260) + uVar4) != '\0');
  if (uVar4 < 2) {
    FUN_144f14b70(param_1,"No MQTT topic found. Forgot to URL encode it?");
    iVar3 = 3;
  }
  else {
    iVar3 = FUN_1452ce930(*(longlong *)(param_1 + 0x1260) + 1,0,local_res18,&local_res10,2);
    if ((iVar3 == 0) && (0xffff < CONCAT71(uStackX_11,local_res10))) {
      FUN_144f14b70(param_1,"Too long MQTT topic");
      iVar3 = 3;
    }
    puVar8 = puVar9;
    if (iVar3 == 0) {
      *(int *)(lVar2 + 0x3a8) = *(int *)(lVar2 + 0x3a8) + 1;
      uVar10 = CONCAT71(uStackX_11,local_res10) + 5;
      uVar4 = uVar10;
      for (; (uVar4 != 0 && (uVar7 = (uint)puVar8, (longlong)puVar9 < 4)); puVar9 = puVar9 + 1) {
        bVar5 = (byte)uVar4;
        uVar4 = uVar4 >> 7;
        bVar5 = bVar5 & 0x7f;
        bVar6 = bVar5 | 0x80;
        if (uVar4 == 0) {
          bVar6 = bVar5;
        }
        uVar7 = uVar7 + 1;
        puVar8 = (undefined1 *)(ulonglong)uVar7;
        local_res8[(longlong)puVar9] = bVar6;
      }
      _Size = (size_t)(int)uVar7;
      lVar1 = uVar10 + _Size;
      puVar8 = (undefined1 *)(*(code *)PTR_malloc_14c6d9f20)(lVar1 + 1);
      if (puVar8 == (undefined1 *)0x0) {
        iVar3 = 0x1b;
      }
      else {
        *puVar8 = 0x82;
        memcpy(puVar8 + 1,local_res8,_Size);
        puVar8[_Size + 1] = *(undefined1 *)(lVar2 + 0x3a9);
        puVar8[_Size + 2] = *(undefined1 *)(lVar2 + 0x3a8);
        puVar8[_Size + 3] = (char)uStackX_11;
        puVar8[_Size + 4] = local_res10;
        memcpy(puVar8 + _Size + 5,local_res18[0],CONCAT71(uStackX_11,local_res10));
        puVar8[CONCAT71(uStackX_11,local_res10) + _Size + 5] = 0;
        iVar3 = FUN_1452c6bd0(param_1,puVar8,lVar1 + 1);
      }
    }
  }
  (*(code *)PTR_free_14c6d9f28)(local_res18[0]);
  (*(code *)PTR_free_14c6d9f28)(puVar8);
  return iVar3;
}



// FUNCTION 1452c7280 FUN_1452c7280 body=446 status=ok
// SIG undefined FUN_1452c7280(void)

int FUN_1452c7280(longlong param_1)

{
  void *_Src;
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  size_t _Size;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  size_t _Size_00;
  undefined1 *puVar8;
  ulonglong uVar9;
  byte local_res8 [8];
  undefined1 local_res10;
  undefined7 uStackX_11;
  void *local_res18 [2];
  
  _Src = *(void **)(param_1 + 0x218);
  puVar8 = (undefined1 *)0x0;
  uVar6 = 0;
  puVar7 = (undefined1 *)0x0;
  _Size_00 = *(size_t *)(param_1 + 0x228);
  local_res18[0] = (void *)0x0;
  if (_Src != (void *)0x0) {
    uVar3 = 0xffffffffffffffff;
    if ((longlong)_Size_00 < 0) {
      _Size_00 = 0xffffffffffffffff;
      do {
        _Size_00 = _Size_00 + 1;
      } while (*(char *)((longlong)_Src + _Size_00) != '\0');
    }
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)(*(longlong *)(param_1 + 0x1260) + uVar3) != '\0');
    if (uVar3 < 2) {
      FUN_144f14b70(param_1,"No MQTT topic found. Forgot to URL encode it?");
      iVar2 = 3;
    }
    else {
      iVar2 = FUN_1452ce930(*(longlong *)(param_1 + 0x1260) + 1,0,local_res18,&local_res10,2);
      if ((iVar2 == 0) && (0xffff < CONCAT71(uStackX_11,local_res10))) {
        FUN_144f14b70(param_1,"Too long MQTT topic");
        iVar2 = 3;
      }
      puVar7 = puVar8;
      if (iVar2 == 0) {
        uVar9 = CONCAT71(uStackX_11,local_res10) + 2 + _Size_00;
        uVar3 = uVar9;
        for (; (uVar3 != 0 && (uVar6 = (uint)puVar7, (longlong)puVar8 < 4)); puVar8 = puVar8 + 1) {
          bVar1 = (byte)uVar3;
          uVar3 = uVar3 >> 7;
          bVar1 = bVar1 & 0x7f;
          bVar4 = bVar1 | 0x80;
          if (uVar3 == 0) {
            bVar4 = bVar1;
          }
          uVar6 = uVar6 + 1;
          puVar7 = (undefined1 *)(ulonglong)uVar6;
          local_res8[(longlong)puVar8] = bVar4;
        }
        _Size = (size_t)(int)uVar6;
        puVar7 = (undefined1 *)(*(code *)PTR_malloc_14c6d9f20)(uVar9 + 1 + _Size);
        if (puVar7 == (undefined1 *)0x0) {
          iVar2 = 0x1b;
        }
        else {
          *puVar7 = 0x30;
          memcpy(puVar7 + 1,local_res8,_Size);
          puVar7[_Size + 1] = (char)uStackX_11;
          puVar7[_Size + 2] = local_res10;
          memcpy(puVar7 + _Size + 3,local_res18[0],CONCAT71(uStackX_11,local_res10));
          lVar5 = _Size + 3 + CONCAT71(uStackX_11,local_res10);
          memcpy(puVar7 + lVar5,_Src,_Size_00);
          iVar2 = FUN_1452c6bd0(param_1,puVar7,_Size_00 + lVar5);
        }
      }
    }
    (*(code *)PTR_free_14c6d9f28)(puVar7);
    (*(code *)PTR_free_14c6d9f28)(local_res18[0]);
    return iVar2;
  }
  return 0x2b;
}



// FUNCTION 1452c7440 FUN_1452c7440 body=650 status=ok
// SIG undefined FUN_1452c7440(void)

int FUN_1452c7440(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0xcd8);
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  iVar6 = *(int *)(lVar1 + 0x3a0);
  uVar4 = *(undefined8 *)(lVar1 + 0x1a8);
  if (iVar6 == 3) {
LAB_1452c74bc:
    bVar5 = *(byte *)(lVar3 + 0x18) & 0xf0;
    if (bVar5 == 0x30) {
      *(undefined4 *)(lVar1 + 0x3a0) = 6;
      lVar1 = *(longlong *)(lVar3 + 0x20);
      FUN_144f14ad0(param_1,"Remaining length: %zu bytes",lVar1);
      if ((*(longlong *)(param_1 + 0x6f0) != 0) && (*(longlong *)(param_1 + 0x6f0) < lVar1)) {
        FUN_144f14b70(param_1,"Maximum file size exceeded");
        return 0x3f;
      }
      FUN_144f25ce0(param_1,lVar1);
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(longlong *)(param_1 + 0xf0) = lVar1;
      *(longlong *)(lVar3 + 0x10) = lVar1;
LAB_1452c7533:
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x6cc);
      if (*(ulonglong *)(lVar3 + 0x10) <= (ulonglong)*(uint *)(param_1 + 0x6cc)) {
        uVar8 = *(ulonglong *)(lVar3 + 0x10);
      }
      iVar6 = FUN_144f15080(param_1,uVar4,uVar2,uVar8,&local_res8);
      if (iVar6 != 0) {
        if (iVar6 == 0x51) {
          FUN_144f14ad0(param_1,"EEEE AAAAGAIN");
          return 0x51;
        }
        return iVar6;
      }
      if (local_res8 == 0) {
        FUN_144f14ad0(param_1,"server disconnected");
        return 0x12;
      }
      FUN_144f149e0(param_1,3,uVar2);
      *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) - local_res8;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + local_res8;
      iVar6 = FUN_144f25d60(param_1,*(undefined8 *)(param_1 + 0x100));
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_144f14dc0(param_1,1,uVar2,local_res8);
      if (iVar6 != 0) {
        return iVar6;
      }
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        return 0;
      }
      goto LAB_1452c767f;
    }
    if (bVar5 != 0x90) {
      if (bVar5 != 0xe0) {
        return 8;
      }
      FUN_144f14ad0(param_1,"Got DISCONNECT");
      *param_2 = 1;
      return 0;
    }
    *(undefined4 *)(lVar1 + 0x3a0) = 4;
  }
  else if (iVar6 != 4) {
    if (iVar6 == 5) goto LAB_1452c74bc;
    if (iVar6 != 6) {
      return 8;
    }
    goto LAB_1452c7533;
  }
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar6 = FUN_1452c6fc0(param_1,3);
  if (iVar6 != 0) {
    return iVar6;
  }
  pcVar7 = (char *)FUN_144f07e80(lVar1 + 0x28);
  FUN_144f149e0(param_1,1,pcVar7,3);
  if (((*pcVar7 != *(char *)(lVar3 + 0x3a9)) || (pcVar7[1] != (char)*(undefined4 *)(lVar3 + 0x3a8)))
     || (pcVar7[2] != '\0')) {
    FUN_144f07dc0(lVar1 + 0x28);
    return 8;
  }
  FUN_1452c7080(param_1,3);
LAB_1452c767f:
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + 0x3a0) = 0;
  *(undefined4 *)(lVar1 + 0x3a4) = 5;
  return 0;
}



// FUNCTION 1452c76d0 FUN_1452c76d0 body=877 status=ok
// SIG undefined FUN_1452c76d0(void)

ulonglong FUN_1452c76d0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  char *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar11;
  undefined4 uVar12;
  
  uVar11 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20),3);
  pcVar9 = (char *)0x0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8);
  *param_2 = 1;
  uVar5 = FUN_1452ce930(*(undefined8 *)(param_1 + 0x1260),0,&local_res8,0,uVar11);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar10 = uVar5 & 0xffffffff;
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  iVar3 = FUN_144f195b0(local_res8,"/MATCH:",7);
  if (((iVar3 == 0) && (iVar3 = FUN_144f195b0(local_res8,&DAT_149d28bb0,3), iVar3 == 0)) &&
     (iVar3 = FUN_144f195b0(local_res8,"/FIND:",6), iVar3 == 0)) {
    iVar3 = FUN_144f195b0(local_res8,"/DEFINE:",8);
    if (((iVar3 == 0) && (iVar3 = FUN_144f195b0(local_res8,&DAT_149d28c3c,3), iVar3 == 0)) &&
       (iVar3 = FUN_144f195b0(local_res8,"/LOOKUP:",8), iVar3 == 0)) {
      pcVar6 = strchr(local_res8,0x2f);
      pcVar7 = pcVar9;
      if (pcVar6 == (char *)0x0) goto LAB_1452c7a0e;
      cVar1 = pcVar6[1];
      pcVar9 = pcVar6;
      while (cVar1 != '\0') {
        if (cVar1 == ':') {
          pcVar9[1] = ' ';
        }
        cVar1 = pcVar9[2];
        pcVar9 = pcVar9 + 1;
      }
      uVar4 = FUN_1452c7af0(uVar2,param_1,"CLIENT libcurl 8.4.0\r\n%s\r\nQUIT\r\n",pcVar6 + 1);
      uVar10 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        FUN_144f14b70(param_1,"Failed sending DICT request");
        goto LAB_1452c7a0e;
      }
    }
    else {
      pcVar6 = strchr(local_res8,0x3a);
      if (pcVar6 == (char *)0x0) {
LAB_1452c7891:
        FUN_144f14ad0(param_1,"lookup word is missing");
        pcVar6 = "default";
      }
      else {
        pcVar6 = pcVar6 + 1;
        pcVar7 = strchr(pcVar6,0x3a);
        pcVar9 = pcVar7;
        if (pcVar7 != (char *)0x0) {
          pcVar9 = pcVar7 + 1;
          *pcVar7 = '\0';
          pcVar7 = strchr(pcVar9,0x3a);
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
        }
        if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) goto LAB_1452c7891;
      }
      if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
        pcVar9 = "!";
      }
      pcVar7 = (char *)FUN_1452c7a40(pcVar6);
      if (pcVar7 == (char *)0x0) goto LAB_1452c79bb;
      pcVar6 = pcVar7;
      uVar4 = FUN_1452c7af0(uVar2,param_1,"CLIENT libcurl 8.4.0\r\nDEFINE %s %s\r\nQUIT\r\n",pcVar9,
                            pcVar7);
      uVar12 = (undefined4)((ulonglong)pcVar6 >> 0x20);
      uVar10 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        FUN_144f14b70(param_1,"Failed sending DICT request");
        goto LAB_1452c7a0e;
      }
    }
  }
  else {
    pcVar7 = strchr(local_res8,0x3a);
    pcVar6 = pcVar9;
    if (pcVar7 == (char *)0x0) {
LAB_1452c7973:
      FUN_144f14ad0(param_1,"lookup word is missing");
      pcVar7 = "default";
    }
    else {
      pcVar7 = pcVar7 + 1;
      pcVar8 = strchr(pcVar7,0x3a);
      pcVar6 = pcVar8;
      if (pcVar8 != (char *)0x0) {
        pcVar6 = pcVar8 + 1;
        *pcVar8 = '\0';
        pcVar8 = strchr(pcVar6,0x3a);
        pcVar9 = pcVar8;
        if (pcVar8 != (char *)0x0) {
          pcVar9 = pcVar8 + 1;
          *pcVar8 = '\0';
          pcVar8 = strchr(pcVar9,0x3a);
          if (pcVar8 != (char *)0x0) {
            *pcVar8 = '\0';
          }
        }
      }
      if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) goto LAB_1452c7973;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      pcVar6 = "!";
    }
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      pcVar9 = ".";
    }
    pcVar7 = (char *)FUN_1452c7a40(pcVar7);
    if (pcVar7 == (char *)0x0) {
LAB_1452c79bb:
      uVar10 = 0x1b;
      goto LAB_1452c7a0e;
    }
    uVar4 = FUN_1452c7af0(uVar2,param_1,"CLIENT libcurl 8.4.0\r\nMATCH %s %s %s\r\nQUIT\r\n",pcVar6,
                          pcVar9,pcVar7);
    uVar12 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    uVar10 = (ulonglong)uVar4;
    if (uVar4 != 0) {
      FUN_144f14b70(param_1,"Failed sending DICT request");
      goto LAB_1452c7a0e;
    }
  }
  FUN_144f24c20(param_1,0,0xffffffffffffffff,0,CONCAT44(uVar12,0xffffffff));
LAB_1452c7a0e:
  (*(code *)PTR_free_14c6d9f28)(pcVar7);
  (*(code *)PTR_free_14c6d9f28)(local_res8);
  return uVar10;
}



// FUNCTION 1452c7a40 FUN_1452c7a40 body=163 status=ok
// SIG undefined FUN_1452c7a40(void)

undefined8 FUN_1452c7a40(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  FUN_144f07cf0(local_28,10000);
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      uVar3 = FUN_144f07e80(local_28);
      return uVar3;
    }
    if (((((0x3a < (byte)(bVar1 - 0x21)) ||
          ((0x7ffffffffffffbdU >> ((ulonglong)(bVar1 - 0x21) & 0x3f) & 1) == 0)) &&
         (0x21 < (byte)(bVar1 + 0xa3))) &&
        (iVar2 = thunk_FUN_144f07eb0(local_28,&DAT_149d26c24,1), iVar2 != 0)) ||
       (iVar2 = thunk_FUN_144f07eb0(local_28,param_1,1), iVar2 != 0)) break;
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 1452c7af0 FUN_1452c7af0 body=250 status=ok
// SIG undefined FUN_1452c7af0(void)

int FUN_1452c7af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res20;
  longlong local_48 [3];
  
  local_res20 = param_4;
  lVar2 = FUN_144f2b950(param_3,&local_res20);
  if (lVar2 != 0) {
    lVar3 = -1;
    local_48[0] = 0;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    iVar1 = FUN_144f15100(param_2,param_1,lVar2,lVar3,local_48);
    lVar4 = lVar2;
    while ((iVar1 == 0 && (FUN_144f149e0(param_2,4,lVar4,local_48[0]), local_48[0] != lVar3))) {
      lVar3 = lVar3 - local_48[0];
      lVar4 = lVar4 + local_48[0];
      iVar1 = FUN_144f15100(param_2,param_1,lVar4,lVar3,local_48);
    }
    (*(code *)PTR_free_14c6d9f28)(lVar2);
    return iVar1;
  }
  return 0x1b;
}



// FUNCTION 1452c7bf0 FUN_1452c7bf0 body=1491 status=ok
// SIG undefined FUN_1452c7bf0(void)

void FUN_1452c7bf0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  LPVOID lpBuffer;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  BOOL BVar10;
  longlong lVar11;
  HANDLE pvVar12;
  HANDLE hFile;
  undefined4 *puVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStackY_128 [32];
  DWORD local_f8;
  DWORD local_f4;
  DWORD local_f0;
  undefined8 local_e8;
  longlong local_e0;
  HANDLE local_d8;
  int *local_d0;
  HANDLE local_c8;
  longlong local_c0;
  HANDLE local_b8;
  HANDLE local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_128;
  local_c0 = *(longlong *)(param_1 + 0x20);
  lpBuffer = *(LPVOID *)(param_1 + 0xcd8);
  bVar5 = true;
  bVar4 = true;
  uVar2 = *(undefined8 *)(local_c0 + 0x1a8);
  *param_2 = 1;
  local_e8 = uVar2;
  lVar11 = (*(code *)PTR_calloc_14c6d9f40)(1,0x1ec8);
  if (lVar11 != 0) {
    *(longlong *)(param_1 + 0x1a8) = lVar11;
    *(undefined4 *)(lVar11 + 0x1cac) = 0;
    *(longlong *)(lVar11 + 0x1eb8) = lVar11 + 0x1cb8;
    *(undefined4 *)(lVar11 + 0x814) = 1;
    *(undefined4 *)(lVar11 + 0x1414) = 1;
    *(undefined4 *)(lVar11 + 0x808) = 1;
    *(undefined4 *)(lVar11 + 0x1408) = 1;
    *(undefined4 *)(lVar11 + 0x140c) = 1;
    *(undefined4 *)(lVar11 + 0x1884) = 1;
    piVar15 = *(int **)(param_1 + 0x1a8);
    local_d0 = piVar15;
    iVar6 = FUN_1452c9620(param_1);
    if (iVar6 == 0) {
      pvVar12 = (HANDLE)WSACreateEvent();
      local_c8 = pvVar12;
      if (pvVar12 == (HANDLE)0x0) {
        uVar7 = Ordinal_111();
        FUN_144f14b70(param_1,"WSACreateEvent failed (%d)",uVar7);
      }
      else {
        iVar6 = WSAEventSelect(uVar2,pvVar12,0x21);
        if (iVar6 == -1) {
          WSACloseEvent(pvVar12);
        }
        else {
          hFile = GetStdHandle(0xfffffff6);
          local_d8 = hFile;
          local_b8 = pvVar12;
          local_b0 = hFile;
          DVar8 = GetFileType(hFile);
          if ((DVar8 == 3) || (*(char *)(param_1 + 0xab3) != '\0')) {
            local_f4 = 1;
            local_f0 = 100;
          }
          else {
            local_f4 = 2;
            local_f0 = 1000;
          }
          do {
            DVar8 = *(DWORD *)(param_1 + 0x6cc);
            DVar9 = WaitForMultipleObjects(local_f4,&local_b8,0,local_f0);
            uVar2 = local_e8;
            if (DVar9 == 0) {
              local_78 = 0;
              iVar6 = WSAEnumNetworkEvents(local_e8,pvVar12);
              if (iVar6 == -1) {
                iVar6 = Ordinal_111();
                if (iVar6 != 0x2734) {
                  FUN_144f14ad0(param_1,"WSAEnumNetworkEvents failed (%d)");
                  bVar5 = false;
                  bVar4 = false;
                }
              }
              else if ((local_78 & 1) == 0) {
LAB_1452c80c1:
                bVar4 = bVar5;
                if ((local_78 & 0x20) != 0) {
                  bVar5 = false;
                  bVar4 = false;
                }
              }
              else {
                iVar6 = FUN_144f15080(param_1,uVar2,lpBuffer,*(undefined4 *)(param_1 + 0x6cc));
                if (iVar6 != 0x51) {
                  if (iVar6 == 0) {
                    if (local_e0 < 1) {
                      bVar5 = false;
                      bVar4 = false;
                    }
                    else {
                      iVar6 = FUN_1452c8220(param_1,lpBuffer);
                      if (iVar6 == 0) {
                        if ((*piVar15 != 0) && (piVar15[1] == 0)) {
                          lVar11 = *(longlong *)(param_1 + 0x1a8);
                          iVar6 = 0;
                          lVar14 = 0x408;
                          do {
                            if (iVar6 != 1) {
                              if (*(int *)(lVar11 + 0x400 + lVar14) == 1) {
                                lVar3 = *(longlong *)(param_1 + 0x1a8);
                                iVar1 = *(int *)(lVar3 + -0x400 + lVar14);
                                if (iVar1 == 0) {
                                  *(undefined4 *)(lVar3 + -0x400 + lVar14) = 2;
                                  FUN_1452c8c10(param_1,0xfb);
                                }
                                else if (iVar1 == 2) {
                                  if (*(int *)(lVar14 + lVar3) == 1) {
                                    *(undefined4 *)(lVar14 + lVar3) = 0;
                                  }
                                }
                                else if ((iVar1 == 3) && (*(int *)(lVar14 + lVar3) == 0)) {
                                  *(undefined4 *)(lVar14 + lVar3) = 1;
                                }
                              }
                              if (*(int *)(lVar11 + 0x1000 + lVar14) == 1) {
                                lVar3 = *(longlong *)(param_1 + 0x1a8);
                                iVar1 = *(int *)(lVar3 + 0x800 + lVar14);
                                if (iVar1 == 0) {
                                  *(undefined4 *)(lVar3 + 0x800 + lVar14) = 2;
                                  FUN_1452c8c10(param_1,0xfd);
                                }
                                else if (iVar1 == 2) {
                                  if (*(int *)(lVar3 + 0xc00 + lVar14) == 1) {
                                    *(undefined4 *)(lVar3 + 0xc00 + lVar14) = 0;
                                  }
                                }
                                else if ((iVar1 == 3) && (*(int *)(lVar3 + 0xc00 + lVar14) == 0)) {
                                  *(undefined4 *)(lVar3 + 0xc00 + lVar14) = 1;
                                }
                              }
                            }
                            iVar6 = iVar6 + 1;
                            lVar14 = lVar14 + 4;
                          } while (iVar6 < 0x28);
                          local_d0[1] = 1;
                          pvVar12 = local_c8;
                          hFile = local_d8;
                          piVar15 = local_d0;
                        }
                        goto LAB_1452c80c1;
                      }
                      bVar5 = false;
                      bVar4 = false;
                    }
                  }
                  else {
                    bVar5 = false;
                    bVar4 = false;
                  }
                }
              }
            }
            else if (DVar9 == 1) {
              BVar10 = ReadFile(hFile,lpBuffer,DVar8,&local_f8,(LPOVERLAPPED)0x0);
              if (BVar10 == 0) {
LAB_1452c7eb0:
                bVar5 = false;
                bVar4 = false;
              }
              else {
                iVar6 = FUN_1452c94b0(param_1,lpBuffer);
                if (iVar6 != 0) {
                  bVar5 = false;
                  bVar4 = false;
                }
              }
            }
            else if (DVar9 == 0x102) {
              do {
                if (*(char *)(param_1 + 0xab3) == '\0') {
                  BVar10 = PeekNamedPipe(hFile,(LPVOID)0x0,0,(LPDWORD)0x0,&local_f8,(LPDWORD)0x0);
                  if (BVar10 == 0) goto LAB_1452c7eb0;
                  if (local_f8 == 0) goto LAB_1452c80d6;
                  BVar10 = ReadFile(hFile,lpBuffer,DVar8,&local_f8,(LPOVERLAPPED)0x0);
                  if (BVar10 == 0) goto LAB_1452c7eb0;
                }
                else {
                  lVar11 = (**(code **)(param_1 + 0x1218))(lpBuffer,1);
                  if (lVar11 == 0x10000000) goto LAB_1452c7eb0;
                  if ((lVar11 == 0x10000001) || (lVar11 == 0)) goto LAB_1452c80d6;
                  local_f8 = (DWORD)lVar11;
                }
                iVar6 = FUN_1452c94b0(param_1);
              } while (iVar6 == 0);
              bVar5 = false;
              bVar4 = false;
            }
LAB_1452c80d6:
            if (*(int *)(param_1 + 0x300) != 0) {
              puVar13 = (undefined4 *)FUN_144f07150(local_88);
              local_98 = *puVar13;
              uStack_94 = puVar13[1];
              uStack_90 = puVar13[2];
              uStack_8c = puVar13[3];
              local_a8 = *(undefined4 *)(local_c0 + 0x188);
              uStack_a4 = *(undefined4 *)(local_c0 + 0x18c);
              uStack_a0 = *(undefined4 *)(local_c0 + 400);
              uStack_9c = *(undefined4 *)(local_c0 + 0x194);
              lVar11 = FUN_144f071e0(&local_98,&local_a8);
              if ((longlong)(ulonglong)*(uint *)(param_1 + 0x300) <= lVar11) {
                FUN_144f14b70(param_1,"Time-out");
                break;
              }
            }
          } while (bVar4);
          iVar6 = WSACloseEvent(pvVar12);
          if (iVar6 == 0) {
            uVar7 = Ordinal_111();
            FUN_144f14ad0(param_1,"WSACloseEvent failed (%d)",uVar7);
          }
          FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_128);
}



// FUNCTION 1452c81e0 FUN_1452c81e0 body=49 status=ok
// SIG undefined FUN_1452c81e0(void)

undefined8 FUN_1452c81e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if (lVar1 != 0) {
    FUN_144b472a0(*(undefined8 *)(lVar1 + 0x1cb0));
    *(undefined8 *)(lVar1 + 0x1cb0) = 0;
  }
  return 0;
}



// FUNCTION 1452c8220 FUN_1452c8220 body=2141 status=ok
// SIG undefined FUN_1452c8220(void)

undefined8 FUN_1452c8220(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong local_res8;
  
  puVar5 = *(undefined4 **)(param_1 + 0x1a8);
  iVar14 = 0;
  iVar15 = -1;
  if (param_3 != 0) {
    local_res8 = 0;
    do {
      bVar3 = *(byte *)(local_res8 + param_2);
      uVar13 = (ulonglong)bVar3;
      param_3 = param_3 + -1;
      iVar4 = iVar15;
      if (8 < (uint)puVar5[0x72b]) goto LAB_1452c8a2b;
      uVar12 = (uint)bVar3;
      iVar4 = iVar14;
      switch(puVar5[0x72b]) {
      case 0:
        if (bVar3 != 0xff) {
          if (bVar3 == 0xd) {
            puVar5[0x72b] = 6;
          }
          goto LAB_1452c82ed;
        }
        puVar5[0x72b] = 1;
LAB_1452c8297:
        if ((-1 < iVar15) &&
           (uVar8 = FUN_144f14dc0(param_1,1,iVar15 + param_2,(longlong)(iVar14 - iVar15)),
           (int)uVar8 != 0)) {
          return uVar8;
        }
        iVar4 = -1;
        break;
      case 1:
code_r0x0001452c88f6:
        switch(bVar3) {
        default:
          puVar5[0x72b] = 0;
          iVar4 = iVar15;
          if (*(char *)(param_1 + 0xacf) != '\0') {
            if (bVar3 < 0xec) {
              FUN_144f14ad0(param_1,"%s IAC %d",&DAT_149d291d4);
            }
            else {
              FUN_144f14ad0(param_1,"%s IAC %s",&DAT_149d291d4,(&PTR_LAB_149d28720)[uVar13]);
            }
          }
          break;
        case 0xfa:
          puVar5[0x72b] = 7;
          *(undefined4 **)(puVar5 + 0x7ae) = puVar5 + 0x72e;
          iVar4 = iVar15;
          break;
        case 0xfb:
          puVar5[0x72b] = 2;
          iVar4 = iVar15;
          break;
        case 0xfc:
          puVar5[0x72b] = 3;
          iVar4 = iVar15;
          break;
        case 0xfd:
          puVar5[0x72b] = 4;
          iVar4 = iVar15;
          break;
        case 0xfe:
          puVar5[0x72b] = 5;
          iVar4 = iVar15;
          break;
        case 0xff:
          puVar5[0x72b] = 0;
          if (-1 < iVar15) {
            iVar4 = iVar15;
          }
        }
        break;
      case 2:
        if (*(char *)(param_1 + 0xacf) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_149d28d40)[(int)uVar12];
            if (pcVar9 != (char *)0x0) goto LAB_1452c83b2;
LAB_1452c8325:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          else {
            if (uVar12 != 0xff) goto LAB_1452c8325;
            pcVar9 = "EXOPL";
LAB_1452c83b2:
            pcVar11 = "%s %s %s";
          }
          FUN_144f14ad0(param_1,pcVar11,&DAT_149d291d4,&DAT_149d2912c,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 0xc08 + uVar13 * 4);
        if (iVar4 == 0) {
          if (*(int *)(lVar10 + 0x1408 + uVar13 * 4) != 1) goto LAB_1452c8538;
          *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 1;
          uVar8 = 0xfd;
          goto LAB_1452c853d;
        }
        if (iVar4 == 2) {
          iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
          if (iVar4 == 0) {
            *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 1;
            puVar5[0x72b] = 0;
            iVar4 = iVar15;
            break;
          }
          if (iVar4 == 1) {
            *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 3;
            *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
            goto LAB_1452c8538;
          }
        }
        else if (iVar4 == 3) {
          iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
          if (iVar4 == 0) goto LAB_1452c83c3;
          if (iVar4 == 1) {
            *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 1;
            *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
            puVar5[0x72b] = 0;
            iVar4 = iVar15;
            break;
          }
        }
        goto LAB_1452c8548;
      case 3:
        if (*(char *)(param_1 + 0xacf) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_149d28d40)[(int)uVar12];
            if (pcVar9 != (char *)0x0) goto LAB_1452c84f2;
LAB_1452c8461:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          else {
            if (uVar12 != 0xff) goto LAB_1452c8461;
            pcVar9 = "EXOPL";
LAB_1452c84f2:
            pcVar11 = "%s %s %s";
          }
          FUN_144f14ad0(param_1,pcVar11,&DAT_149d291d4,&DAT_149d29134,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 0xc08 + uVar13 * 4);
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
            if (iVar4 == 0) {
LAB_1452c83c3:
              *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              iVar4 = iVar15;
              break;
            }
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 0;
              *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              iVar4 = iVar15;
              break;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
            if (iVar4 == 0) goto LAB_1452c83c3;
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 2;
              *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
              uVar8 = 0xfd;
              goto LAB_1452c853d;
            }
          }
          goto LAB_1452c8548;
        }
        *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 0;
LAB_1452c8538:
        uVar8 = 0xfe;
        goto LAB_1452c853d;
      case 4:
        if (*(char *)(param_1 + 0xacf) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_149d28d40)[(int)uVar12];
            if (pcVar9 != (char *)0x0) goto LAB_1452c860c;
LAB_1452c857a:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          else {
            if (uVar12 != 0xff) goto LAB_1452c857a;
            pcVar9 = "EXOPL";
LAB_1452c860c:
            pcVar11 = "%s %s %s";
          }
          FUN_144f14ad0(param_1,pcVar11,&DAT_149d291d4,&DAT_149d2913c,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 8 + uVar13 * 4);
        if (iVar4 == 0) {
          if (*(int *)(lVar10 + 0x808 + uVar13 * 4) == 1) {
            *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
            FUN_1452c8c10(param_1,0xfb,uVar13);
LAB_1452c86aa:
            if (*(int *)(lVar10 + 0x1808 + uVar13 * 4) != 1) goto LAB_1452c866b;
            FUN_1452c9300(param_1,uVar13);
            puVar5[0x72b] = 0;
            iVar4 = iVar15;
          }
          else {
            if (*(int *)(lVar10 + 0x1808 + uVar13 * 4) != 1) {
LAB_1452c865b:
              FUN_1452c8c10(param_1,0xfc,uVar13);
              goto LAB_1452c866b;
            }
            *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
            FUN_1452c8c10(param_1,0xfb,uVar13);
            FUN_1452c9300(param_1,uVar13);
            puVar5[0x72b] = 0;
            iVar4 = iVar15;
          }
        }
        else {
          if (iVar4 == 2) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
              goto LAB_1452c86aa;
            }
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 3;
              *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
              goto LAB_1452c865b;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              iVar4 = iVar15;
            }
            else {
              if (iVar4 != 1) goto LAB_1452c866b;
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
              *(undefined4 *)(lVar10 + 0x408 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              iVar4 = iVar15;
            }
            break;
          }
LAB_1452c866b:
          puVar5[0x72b] = 0;
          iVar4 = iVar15;
        }
        break;
      case 5:
        if (*(char *)(param_1 + 0xacf) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_149d28d40)[(int)uVar12];
            if (pcVar9 != (char *)0x0) goto LAB_1452c87bc;
LAB_1452c8736:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          else {
            if (uVar12 != 0xff) goto LAB_1452c8736;
            pcVar9 = "EXOPL";
LAB_1452c87bc:
            pcVar11 = "%s %s %s";
          }
          FUN_144f14ad0(param_1,pcVar11,&DAT_149d291d4,&DAT_149d29140,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 8 + uVar13 * 4);
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) {
LAB_1452c87f8:
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              iVar4 = iVar15;
              break;
            }
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
              *(undefined4 *)(lVar10 + 0x408 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              iVar4 = iVar15;
              break;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) goto LAB_1452c87f8;
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 2;
              *(undefined4 *)(lVar10 + 0x408 + uVar13 * 4) = 0;
              uVar8 = 0xfb;
              goto LAB_1452c853d;
            }
          }
          goto LAB_1452c8548;
        }
        *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
        uVar8 = 0xfc;
LAB_1452c853d:
        FUN_1452c8c10(param_1,uVar8,uVar13);
LAB_1452c8548:
        puVar5[0x72b] = 0;
        iVar4 = iVar15;
        break;
      case 6:
        puVar5[0x72b] = 0;
        if (bVar3 == 0) goto LAB_1452c8297;
LAB_1452c82ed:
        if (-1 < iVar15) {
          iVar4 = iVar15;
        }
        break;
      case 7:
        if (bVar3 == 0xff) {
          puVar5[0x72b] = 8;
          iVar4 = iVar15;
        }
        else {
          pbVar1 = (byte *)(puVar5 + 0x7ae);
          iVar4 = iVar15;
          if (*(byte **)pbVar1 < pbVar1) {
            **(byte **)pbVar1 = bVar3;
            *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
          }
        }
        break;
      case 8:
        if (bVar3 == 0xf0) {
          plVar2 = (longlong *)(puVar5 + 0x7ae);
          plVar7 = (longlong *)*plVar2;
          if (plVar7 < plVar2) {
            *(undefined1 *)plVar7 = 0xff;
            *plVar2 = *plVar2 + 1;
            plVar7 = (longlong *)*plVar2;
            if (plVar7 < plVar2) {
              *(undefined1 *)plVar7 = 0xf0;
              plVar7 = (longlong *)(*plVar2 + 1);
            }
          }
          *(longlong *)(puVar5 + 0x7b0) = (longlong)plVar7 + -2;
          *plVar2 = (longlong)(puVar5 + 0x72e);
          FUN_1452c8fd0(param_1);
          puVar5[0x72b] = 0;
          iVar4 = iVar15;
        }
        else {
          if (bVar3 != 0xff) {
            pbVar1 = (byte *)(puVar5 + 0x7ae);
            pbVar6 = *(byte **)pbVar1;
            if (pbVar6 < pbVar1) {
              *pbVar6 = 0xff;
              *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
              pbVar6 = *(byte **)pbVar1;
              if (pbVar6 < pbVar1) {
                *pbVar6 = bVar3;
                pbVar6 = (byte *)(*(longlong *)pbVar1 + 1);
              }
            }
            *(byte **)(puVar5 + 0x7b0) = pbVar6 + -2;
            *(undefined4 **)pbVar1 = puVar5 + 0x72e;
            if (*(char *)(param_1 + 0xacf) != '\0') {
              if (bVar3 < 0xec) {
                FUN_144f14ad0(param_1,"%s IAC %d","In SUBOPTION processing, RCVD");
              }
              else {
                FUN_144f14ad0(param_1,"%s IAC %s","In SUBOPTION processing, RCVD",
                              (&PTR_LAB_149d28720)[uVar13]);
              }
            }
            FUN_1452c8fd0(param_1);
            goto code_r0x0001452c88f6;
          }
          plVar2 = (longlong *)(puVar5 + 0x7ae);
          if ((longlong *)*plVar2 < plVar2) {
            *(undefined1 *)*plVar2 = 0xff;
            *plVar2 = *plVar2 + 1;
          }
          puVar5[0x72b] = 7;
          iVar4 = iVar15;
        }
      }
LAB_1452c8a2b:
      iVar15 = iVar4;
      iVar14 = iVar14 + 1;
      local_res8 = local_res8 + 1;
    } while (param_3 != 0);
    if (-1 < iVar15) {
      uVar8 = FUN_144f14dc0(param_1,1,iVar15 + param_2,(longlong)(iVar14 - iVar15));
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 1452c8ae0 FUN_1452c8ae0 body=297 status=ok
// SIG undefined FUN_1452c8ae0(void)

void FUN_1452c8ae0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0xacf) == '\0') {
    return;
  }
  if (param_3 == 0xff) {
    if (0x13 < param_4 - 0xecU) {
      FUN_144f14ad0(param_1,"%s IAC %d",param_2,param_4);
      return;
    }
    FUN_144f14ad0(param_1,"%s IAC %s",param_2,(&PTR_LAB_149d28720)[param_4]);
    return;
  }
  if (param_3 == 0xfb) {
    puVar2 = &DAT_149d2912c;
  }
  else if (param_3 == 0xfc) {
    puVar2 = &DAT_149d29134;
  }
  else if (param_3 == 0xfd) {
    puVar2 = &DAT_149d2913c;
  }
  else {
    puVar2 = (undefined *)0x0;
    if (param_3 == 0xfe) {
      puVar2 = &DAT_149d29140;
    }
    if (puVar2 == (undefined *)0x0) {
      FUN_144f14ad0(param_1,"%s %d %d",param_2,param_3,param_4);
      return;
    }
  }
  if (param_4 < 0x28) {
    pcVar1 = (&PTR_s_BINARY_149d28d40)[param_4];
    if (pcVar1 != (char *)0x0) {
LAB_1452c8bd4:
      FUN_144f14ad0(param_1,"%s %s %s",param_2,puVar2,pcVar1);
      return;
    }
  }
  else if (param_4 == 0xff) {
    pcVar1 = "EXOPL";
    goto LAB_1452c8bd4;
  }
  FUN_144f14ad0(param_1,"%s %s %d",param_2,puVar2,param_4);
  return;
}



// FUNCTION 1452c8c10 FUN_1452c8c10 body=132 status=ok
// SIG undefined FUN_1452c8c10(void)

void FUN_1452c8c10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res10 = 0xff;
  local_res12 = (undefined1)param_3;
  local_res11 = (undefined1)param_2;
  iVar1 = Ordinal_19(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8),&local_res10,3);
  if (iVar1 < 0) {
    uVar2 = Ordinal_111();
    FUN_144f14b70(param_1,"Sending data failed (%d)",uVar2);
  }
  FUN_1452c8ae0(param_1,&DAT_149d291cc,param_2,param_3);
  return;
}



// FUNCTION 1452c8ca0 FUN_1452c8ca0 body=806 status=ok
// SIG undefined FUN_1452c8ca0(void)

void FUN_1452c8ca0(longlong param_1,int param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  
  if (*(char *)(param_1 + 0xacf) == '\0') {
    return;
  }
  uVar3 = 0;
  pcVar6 = "%s";
  if (param_2 != 0) {
    puVar4 = &DAT_149d291cc;
    if (param_2 == 0x3c) {
      puVar4 = &DAT_149d291d4;
    }
    FUN_144f14ad0(param_1,"%s IAC SB ",puVar4);
    if (2 < param_4) {
      bVar1 = param_3[param_4 - 2];
      uVar3 = (ulonglong)bVar1;
      bVar2 = param_3[param_4 - 1];
      uVar5 = (uint)bVar2;
      if ((bVar1 != 0xff) || (uVar5 != 0xf0)) {
        FUN_144f14ad0(param_1,"(terminated by ");
        if (bVar1 < 0x28) {
          FUN_144f14ad0(param_1,&DAT_149c07ea8,(&PTR_s_BINARY_149d28d40)[uVar3]);
        }
        else if (bVar1 < 0xec) {
          FUN_144f14ad0(param_1,&DAT_149d29200,bVar1);
        }
        else {
          FUN_144f14ad0(param_1,&DAT_149c07ea8,(&PTR_DAT_149d28e80)[bVar1 - 0xec]);
        }
        if (bVar2 < 0x28) {
          FUN_144f14ad0(param_1,&DAT_149972340,(&PTR_s_BINARY_149d28d40)[(int)uVar5]);
        }
        else if (uVar5 < 0xec) {
          FUN_144f14ad0(param_1,&DAT_1499c1968,(ulonglong)bVar2);
        }
        else {
          FUN_144f14ad0(param_1,&DAT_149972340,(&PTR_LAB_149d28720)[bVar2]);
        }
        FUN_144f14ad0(param_1,", not IAC SE) ");
      }
    }
    param_4 = param_4 - 2;
  }
  if (param_4 == 0) {
    FUN_144f14ad0(param_1,"(Empty suboption?)");
    return;
  }
  bVar1 = *param_3;
  if (bVar1 < 0x28) {
    if ((0x8881000000U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0) {
      pcVar6 = "%s (unsupported)";
    }
    FUN_144f14ad0(param_1,pcVar6,(&PTR_s_BINARY_149d28d40)[bVar1]);
  }
  else {
    FUN_144f14ad0(param_1,"%d (unknown)",param_3[uVar3]);
  }
  if (*param_3 == 0x1f) {
    if (param_4 < 5) {
      return;
    }
    FUN_144f14ad0(param_1,"Width: %d ; Height: %d",CONCAT11(param_3[1],param_3[2]),
                  CONCAT11(param_3[3],param_3[4]));
    return;
  }
  bVar1 = param_3[1];
  if (bVar1 == 0) {
    pcVar6 = " IS";
  }
  else if (bVar1 == 1) {
    pcVar6 = " SEND";
  }
  else if (bVar1 == 2) {
    pcVar6 = " INFO/REPLY";
  }
  else {
    if (bVar1 != 3) goto LAB_1452c8ea2;
    pcVar6 = " NAME";
  }
  FUN_144f14ad0(param_1,pcVar6);
LAB_1452c8ea2:
  bVar1 = *param_3;
  if ((bVar1 == 0x18) || (bVar1 == 0x23)) {
    param_3[param_4] = 0;
    FUN_144f14ad0(param_1," \"%s\"",param_3 + 2);
  }
  else if (bVar1 == 0x27) {
    if (param_3[1] == 0) {
      FUN_144f14ad0(param_1,&DAT_149982a34);
      uVar3 = 3;
      if (3 < param_4) {
        do {
          if (param_3[uVar3] == 0) {
            puVar4 = &DAT_14997153c;
LAB_1452c8f51:
            FUN_144f14ad0(param_1,puVar4);
          }
          else {
            if (param_3[uVar3] == 1) {
              puVar4 = &DAT_149d2929c;
              goto LAB_1452c8f51;
            }
            FUN_144f14ad0(param_1,&DAT_149d292a0);
          }
          uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < param_4);
      }
    }
  }
  else {
    uVar3 = 2;
    if (2 < param_4) {
      do {
        FUN_144f14ad0(param_1," %.2x",param_3[uVar3]);
        uVar3 = (ulonglong)((int)uVar3 + 1);
      } while (uVar3 < param_4);
    }
  }
  return;
}



// FUNCTION 1452c8fd0 FUN_1452c8fd0 body=785 status=ok
// SIG undefined FUN_1452c8fd0(void)

void FUN_1452c8fd0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_878 [32];
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  char *local_840;
  undefined4 local_838;
  undefined4 local_830;
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_878;
  lVar6 = *(longlong *)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  FUN_1452c8ca0(param_1,0x3c,lVar6 + 0x1cb8,
                (*(longlong *)(lVar6 + 0x1ec0) - *(longlong *)(lVar6 + 0x1eb8)) + 2);
  cVar1 = **(char **)(lVar6 + 0x1eb8);
  *(char **)(lVar6 + 0x1eb8) = *(char **)(lVar6 + 0x1eb8) + 1;
  if (cVar1 == '\x18') {
    local_840 = (char *)(lVar6 + 0x1c08);
    lVar8 = -1;
    do {
      pcVar7 = (char *)(lVar6 + 0x1c09 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar7 != '\0');
    local_850 = CONCAT44(local_850._4_4_,0x18);
  }
  else {
    if (cVar1 != '#') {
      if (cVar1 == '\'') {
        local_848 = 0;
        local_850 = CONCAT44(local_850._4_4_,0x27);
        local_858 = CONCAT44(local_858._4_4_,0xfa);
        FUN_144f2b7e0(local_828,0x800,"%c%c%c%c",0xff);
        lVar8 = 4;
        for (puVar3 = *(undefined8 **)(lVar6 + 0x1cb0); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)puVar3[1]) {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (((char *)*puVar3)[lVar6] != '\0');
          if ((ulonglong)(lVar8 + 1 + lVar6) < 0x7fa) {
            pcVar7 = strchr((char *)*puVar3,0x2c);
            if (pcVar7 == (char *)0x0) {
              local_858 = *puVar3;
              iVar4 = FUN_144f2b7e0(local_828 + lVar8,0x800 - lVar8,&DAT_149d29334);
            }
            else {
              local_850 = *puVar3;
              local_840 = pcVar7 + 1;
              local_848 = CONCAT44(local_848._4_4_,1);
              local_858 = CONCAT44(local_858._4_4_,(int)pcVar7 - (int)local_850);
              iVar4 = FUN_144f2b7e0(local_828 + lVar8,0x800 - lVar8,"%c%.*s%c%s",0);
            }
            lVar8 = lVar8 + iVar4;
          }
        }
        local_858._4_4_ = (undefined4)((ulonglong)local_858 >> 0x20);
        local_858 = CONCAT44(local_858._4_4_,0xf0);
        FUN_144f2b7e0(local_828 + lVar8,0x800 - lVar8,&DAT_149d2934c,0xff);
        iVar4 = Ordinal_19(*(undefined8 *)(lVar2 + 0x1a8),local_828,(int)lVar8 + 2,0);
        if (iVar4 < 0) {
          uVar5 = Ordinal_111();
          FUN_144f14b70(param_1,"Sending data failed (%d)",uVar5);
        }
        FUN_1452c8ca0(param_1,0x3e,local_828 + 2,lVar8);
      }
      goto LAB_1452c92d1;
    }
    local_840 = (char *)(lVar6 + 0x1c28);
    lVar8 = -1;
    do {
      pcVar7 = (char *)(lVar6 + 0x1c29 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar7 != '\0');
    local_850 = CONCAT44(local_850._4_4_,0x23);
  }
  local_830 = 0xf0;
  local_838 = 0xff;
  local_848 = 0;
  local_858 = CONCAT44(local_858._4_4_,0xfa);
  FUN_144f2b7e0(local_828,0x800,"%c%c%c%c%s%c%c",0xff);
  iVar4 = Ordinal_19(*(undefined8 *)(lVar2 + 0x1a8),local_828,(int)lVar8 + 6,0);
  if (iVar4 < 0) {
    uVar5 = Ordinal_111();
    FUN_144f14b70(param_1,"Sending data failed (%d)",uVar5);
  }
  FUN_1452c8ca0(param_1,0x3e,local_828 + 2,lVar8 + 4);
LAB_1452c92d1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_878);
}



// FUNCTION 1452c9300 FUN_1452c9300 body=430 status=ok
// SIG undefined FUN_1452c9300(void)

void FUN_1452c9300(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 uStackX_11;
  
  if (param_2 == 0x1f) {
    lVar3 = *(longlong *)(param_1 + 0x1a8);
    lVar4 = *(longlong *)(param_1 + 0x20);
    plVar1 = (longlong *)(lVar3 + 0x1eb8);
    plVar2 = (longlong *)(lVar3 + 0x1cb8);
    *plVar1 = (longlong)plVar2;
    plVar9 = plVar2;
    if (plVar2 < plVar1) {
      plVar9 = (longlong *)(lVar3 + 0x1cb9);
      *(undefined1 *)plVar2 = 0xff;
      *plVar1 = (longlong)plVar9;
    }
    if (plVar9 < plVar1) {
      *(undefined1 *)plVar9 = 0xfa;
      *plVar1 = *plVar1 + 1;
      if ((longlong *)*plVar1 < plVar1) {
        *(undefined1 *)*plVar1 = 0x1f;
        *plVar1 = *plVar1 + 1;
      }
    }
    uVar5 = Ordinal_9(*(undefined2 *)(lVar3 + 0x1ca8));
    uVar6 = Ordinal_9(*(undefined2 *)(&DAT_00001caa + lVar3));
    plVar9 = (longlong *)*plVar1;
    if (plVar9 < plVar1) {
      *(char *)plVar9 = (char)uVar5;
      *plVar1 = *plVar1 + 1;
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 < plVar1) {
      uStackX_11 = (undefined1)((ushort)uVar5 >> 8);
      *(undefined1 *)plVar9 = uStackX_11;
      *plVar1 = *plVar1 + 1;
      plVar9 = (longlong *)*plVar1;
      if (plVar9 < plVar1) {
        *(char *)plVar9 = (char)uVar6;
        *plVar1 = *plVar1 + 1;
        plVar9 = (longlong *)*plVar1;
        if (plVar9 < plVar1) {
          *(char *)plVar9 = (char)((ushort)uVar6 >> 8);
          *plVar1 = *plVar1 + 1;
          plVar9 = (longlong *)*plVar1;
          if (plVar9 < plVar1) {
            *(undefined1 *)plVar9 = 0xff;
            *plVar1 = *plVar1 + 1;
            plVar9 = (longlong *)*plVar1;
            if (plVar9 < plVar1) {
              *(undefined1 *)plVar9 = 0xf0;
              plVar9 = (longlong *)(*plVar1 + 1);
            }
          }
        }
      }
    }
    *(longlong **)(lVar3 + 0x1ec0) = plVar9;
    *plVar1 = (longlong)plVar2;
    FUN_1452c8ca0(param_1,0x3e,&DAT_00001cba + lVar3,(longlong)plVar9 + (-2 - (longlong)plVar2));
    iVar7 = Ordinal_19(*(undefined8 *)(lVar4 + 0x1a8),plVar2,3);
    if (iVar7 < 0) {
      uVar8 = Ordinal_111();
      FUN_144f14b70(param_1,"Sending data failed (%d)",uVar8);
    }
    FUN_1452c94b0(param_1,lVar3 + 0x1cbb,4);
    iVar7 = Ordinal_19(*(undefined8 *)(lVar4 + 0x1a8),lVar3 + 0x1cbf,2);
    if (iVar7 < 0) {
      uVar8 = Ordinal_111();
      FUN_144f14b70(param_1,"Sending data failed (%d)",uVar8);
    }
  }
  return;
}



// FUNCTION 1452c94b0 FUN_1452c94b0 body=344 status=ok
// SIG undefined FUN_1452c94b0(void)

void FUN_1452c94b0(longlong param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar7 = 0;
  lVar5 = lVar7;
  lVar3 = lVar7;
  lVar8 = lVar7;
  if (0 < param_3) {
    do {
      lVar3 = lVar5 + 1;
      if (param_2[lVar8] != -1) {
        lVar3 = lVar5;
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar3;
    } while (lVar8 < param_3);
  }
  lVar3 = param_3 + lVar3;
  pcVar4 = param_2;
  if (lVar3 != param_3) {
    pcVar4 = (char *)(*(code *)PTR_malloc_14c6d9f20)(lVar3 + 1);
    if (pcVar4 == (char *)0x0) goto LAB_1452c95f3;
    lVar5 = lVar7;
    lVar8 = lVar7;
    pcVar6 = param_2;
    if (0 < param_3) {
      do {
        pcVar4[lVar8] = *pcVar6;
        lVar5 = lVar8 + 1;
        if (*pcVar6 == -1) {
          pcVar4[lVar5] = -1;
          lVar5 = lVar8 + 2;
        }
        param_3 = param_3 + -1;
        lVar8 = lVar5;
        pcVar6 = pcVar6 + 1;
      } while (param_3 != 0);
    }
    pcVar4[lVar5] = '\0';
  }
  do {
    if (lVar3 <= lVar7) break;
    local_50 = *(undefined8 *)(lVar1 + 0x1a8);
    local_48 = 0x10;
    iVar2 = FUN_144f26d10(&local_50,1,0xffffffffffffffff);
    if (iVar2 + 1U < 2) break;
    local_68 = &local_58;
    local_58 = 0;
    iVar2 = FUN_144f15180(param_1,0,pcVar4 + lVar7,lVar3 - lVar7);
    lVar7 = lVar7 + local_58;
  } while (iVar2 == 0);
  if (pcVar4 != param_2) {
    (*(code *)PTR_free_14c6d9f28)(pcVar4);
  }
LAB_1452c95f3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452c9620 FUN_1452c9620 body=904 status=ok
// SIG undefined FUN_1452c9620(void)

void FUN_1452c9620(longlong param_1)

{
  char *_Str;
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_168 [32];
  char *local_148 [2];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  iVar9 = 0;
  if (*(longlong *)(param_1 + 0x13a0) != 0) {
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x150);
    cVar3 = *pcVar2;
    while (cVar3 != '\0') {
      pcVar2 = pcVar2 + 1;
      if (cVar3 < '\0') goto LAB_1452c9998;
      cVar3 = *pcVar2;
    }
    FUN_144f2b7e0(local_138,0x100,"USER,%s");
    lVar7 = FUN_144bbed20(*(undefined8 *)(lVar1 + 0x1cb0),local_138);
    if (lVar7 == 0) {
      FUN_144b472a0(*(undefined8 *)(lVar1 + 0x1cb0));
      *(undefined8 *)(lVar1 + 0x1cb0) = 0;
      goto LAB_1452c9998;
    }
    *(longlong *)(lVar1 + 0x1cb0) = lVar7;
    *(undefined4 *)(lVar1 + 0x8a4) = 1;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x510);
  if (puVar10 != (undefined8 *)0x0) {
    do {
      if (iVar9 != 0) goto LAB_1452c996b;
      pcVar2 = (char *)*puVar10;
      pcVar8 = strchr(pcVar2,0x3d);
      if (pcVar8 == (char *)0x0) {
LAB_1452c9943:
        FUN_144f14b70(param_1,"Syntax error in telnet option: %s",*puVar10);
        iVar9 = 0x31;
      }
      else {
        _Str = pcVar8 + 1;
        lVar7 = (longlong)pcVar8 - (longlong)pcVar2;
        cVar3 = *_Str;
        pcVar8 = _Str;
        while (cVar3 != '\0') {
          pcVar8 = pcVar8 + 1;
          if (cVar3 < '\0') goto LAB_1452c995a;
          cVar3 = *pcVar8;
        }
        if (lVar7 == 2) {
          iVar4 = FUN_144f195b0(pcVar2,&DAT_149d292c8,2);
          if (iVar4 != 0) {
            uVar5 = strtoul(_Str,local_148,10);
            if ((uVar5 - 1 < 0xffff) && (cVar3 = FUN_144f19640(*local_148[0]), cVar3 == 'x')) {
              local_148[0] = local_148[0] + 1;
              uVar6 = strtoul(local_148[0],(char **)0x0,10);
              if (uVar6 != 0) {
                if (uVar6 < 0x10000) {
                  *(short *)(lVar1 + 0x1ca8) = (short)uVar5;
                  *(short *)(&DAT_00001caa + lVar1) = (short)uVar6;
                  *(undefined4 *)(lVar1 + 0x884) = 1;
                }
                goto LAB_1452c995a;
              }
            }
            goto LAB_1452c9943;
          }
        }
        else if (lVar7 == 5) {
          iVar4 = FUN_144f195b0(pcVar2,"TTYPE",5);
          if (iVar4 != 0) {
            strncpy((char *)(lVar1 + 0x1c08),_Str,0x1f);
            *(undefined1 *)(lVar1 + 0x1c27) = 0;
            *(undefined4 *)(lVar1 + 0x868) = 1;
            goto LAB_1452c995a;
          }
        }
        else if (lVar7 == 6) {
          iVar4 = FUN_144f195b0(pcVar2,"BINARY",6);
          if (iVar4 != 0) {
            iVar4 = atoi(_Str);
            if (iVar4 != 1) {
              *(undefined4 *)(lVar1 + 0x808) = 0;
              *(undefined4 *)(lVar1 + 0x1408) = 0;
            }
            goto LAB_1452c995a;
          }
        }
        else if (lVar7 == 7) {
          iVar4 = FUN_144f195b0(pcVar2,"NEW_ENV",7);
          if (iVar4 != 0) {
            lVar7 = FUN_144bbed20(*(undefined8 *)(lVar1 + 0x1cb0),_Str);
            if (lVar7 == 0) {
              iVar9 = 0x1b;
            }
            else {
              *(longlong *)(lVar1 + 0x1cb0) = lVar7;
              *(undefined4 *)(lVar1 + 0x8a4) = 1;
            }
            goto LAB_1452c995a;
          }
        }
        else if (lVar7 == 8) {
          iVar4 = FUN_144f195b0(pcVar2,"XDISPLOC",8);
          if (iVar4 != 0) {
            strncpy((char *)(lVar1 + 0x1c28),_Str,0x7f);
            *(undefined1 *)(lVar1 + 0x1ca7) = 0;
            *(undefined4 *)(lVar1 + 0x894) = 1;
            goto LAB_1452c995a;
          }
        }
        else {
          FUN_144f14b70(param_1,"Unknown telnet option %s",*puVar10);
        }
        iVar9 = 0x30;
      }
LAB_1452c995a:
      puVar10 = (undefined8 *)puVar10[1];
    } while (puVar10 != (undefined8 *)0x0);
    if (iVar9 != 0) {
LAB_1452c996b:
      FUN_144b472a0(*(undefined8 *)(lVar1 + 0x1cb0));
      *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    }
  }
LAB_1452c9998:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 1452c99c0 FUN_1452c99c0 body=428 status=ok
// SIG undefined FUN_1452c99c0(void)

void FUN_1452c99c0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar5 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x160);
  *(undefined4 **)(lVar1 + 0x3a0) = puVar5;
  if ((puVar5 != (undefined4 *)0x0) &&
     ((uVar2 = *(uint *)(param_1 + 0x318), uVar8 = 0x200, uVar2 == 0 ||
      (uVar8 = uVar2, uVar2 - 8 < 0xffb1)))) {
    uVar2 = uVar8;
    if (uVar8 < 0x200) {
      uVar2 = 0x200;
    }
    if (*(longlong *)(puVar5 + 0x54) == 0) {
      lVar6 = (*(code *)PTR_calloc_14c6d9f40)(1,(longlong)(int)(uVar2 + 4));
      *(longlong *)(puVar5 + 0x54) = lVar6;
      if (lVar6 == 0) goto LAB_1452c9b5c;
    }
    if (*(longlong *)(puVar5 + 0x56) == 0) {
      lVar6 = (*(code *)PTR_calloc_14c6d9f40)(1,(longlong)(int)(uVar2 + 4));
      *(longlong *)(puVar5 + 0x56) = lVar6;
      if (lVar6 == 0) goto LAB_1452c9b5c;
    }
    FUN_144f16220(lVar1,1);
    *(longlong *)(puVar5 + 4) = param_1;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(lVar1 + 0x1a8);
    *puVar5 = 0;
    puVar5[2] = 0xffffff9c;
    puVar5[0x51] = 0x200;
    puVar5[0x52] = uVar8;
    *(undefined2 *)(puVar5 + 0xe) = **(undefined2 **)(lVar1 + 0x58);
    FUN_1452ca8e0(puVar5);
    if (*(char *)(lVar1 + 0x2de) == '\0') {
      iVar3 = Ordinal_2(*(undefined8 *)(puVar5 + 6),puVar5 + 0xe,
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x58) + 0xc));
      if (iVar3 != 0) {
        uVar4 = Ordinal_111();
        uVar7 = FUN_144bbe240(uVar4,local_138,0x100);
        FUN_144f14b70(param_1,"bind() failed; %s",uVar7);
        goto LAB_1452c9b5c;
      }
      *(undefined1 *)(lVar1 + 0x2de) = 1;
    }
    FUN_144f25bd0(param_1);
    *param_2 = 1;
  }
LAB_1452c9b5c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_158);
}



// FUNCTION 1452c9b90 FUN_1452c9b90 body=83 status=ok
// SIG undefined FUN_1452c9b90(void)

undefined8 FUN_1452c9b90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x3a0);
  if (lVar1 != 0) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar1 + 0x150));
    *(undefined8 *)(lVar1 + 0x150) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar1 + 0x158));
    *(undefined8 *)(lVar1 + 0x158) = 0;
    (*(code *)PTR_free_14c6d9f28)(lVar1);
  }
  return 0;
}



// FUNCTION 1452c9bf0 FUN_1452c9bf0 body=506 status=ok
// SIG undefined FUN_1452c9bf0(void)

void FUN_1452c9bf0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  if (*(longlong *)(lVar1 + 0x3a0) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    puVar7 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x160);
    *(undefined4 **)(lVar2 + 0x3a0) = puVar7;
    if ((puVar7 == (undefined4 *)0x0) ||
       ((uVar4 = *(uint *)(param_1 + 0x318), uVar10 = 0x200, uVar4 != 0 &&
        (uVar10 = uVar4, 0xffb0 < uVar4 - 8)))) goto LAB_1452c9dda;
    uVar4 = uVar10;
    if (uVar10 < 0x200) {
      uVar4 = 0x200;
    }
    if (*(longlong *)(puVar7 + 0x54) == 0) {
      lVar8 = (*(code *)PTR_calloc_14c6d9f40)(1,(longlong)(int)(uVar4 + 4));
      *(longlong *)(puVar7 + 0x54) = lVar8;
      if (lVar8 == 0) goto LAB_1452c9dda;
    }
    if (*(longlong *)(puVar7 + 0x56) == 0) {
      lVar8 = (*(code *)PTR_calloc_14c6d9f40)(1,(longlong)(int)(uVar4 + 4));
      *(longlong *)(puVar7 + 0x56) = lVar8;
      if (lVar8 == 0) goto LAB_1452c9dda;
    }
    FUN_144f16220(lVar2,1);
    *(longlong *)(puVar7 + 4) = param_1;
    *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(lVar2 + 0x1a8);
    *puVar7 = 0;
    puVar7[2] = 0xffffff9c;
    puVar7[0x51] = 0x200;
    puVar7[0x52] = uVar10;
    *(undefined2 *)(puVar7 + 0xe) = **(undefined2 **)(lVar2 + 0x58);
    FUN_1452ca8e0(puVar7);
    if (*(char *)(lVar2 + 0x2de) == '\0') {
      iVar5 = Ordinal_2(*(undefined8 *)(puVar7 + 6),puVar7 + 0xe,
                        *(undefined4 *)(*(longlong *)(lVar2 + 0x58) + 0xc));
      if (iVar5 != 0) {
        uVar6 = Ordinal_111();
        uVar9 = FUN_144bbe240(uVar6,local_148,0x100);
        FUN_144f14b70(param_1,"bind() failed; %s",uVar9);
        goto LAB_1452c9dda;
      }
      *(undefined1 *)(lVar2 + 0x2de) = 1;
    }
    FUN_144f25bd0(param_1);
    *param_2 = 1;
  }
  lVar1 = *(longlong *)(lVar1 + 0x3a0);
  if (lVar1 != 0) {
    piVar3 = *(int **)(*(longlong *)(param_1 + 0x20) + 0x3a0);
    *param_2 = 0;
    iVar5 = FUN_1452cb330(piVar3,0);
    if (*piVar3 == 3) {
      if (iVar5 != 0) goto LAB_1452c9dda;
    }
    else {
      if (iVar5 != 0) goto LAB_1452c9dda;
      FUN_1452c9ef0(param_1,param_2);
    }
    FUN_1452ca7e0(*(undefined4 *)(lVar1 + 8));
  }
LAB_1452c9dda:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 1452c9e10 FUN_1452c9e10 body=74 status=ok
// SIG undefined FUN_1452c9e10(void)

undefined4 FUN_1452c9e10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x3a0);
  iVar2 = FUN_144f25a50();
  if (iVar2 != 0) {
    return 0x2a;
  }
  if (lVar1 != 0) {
    uVar3 = FUN_1452ca7e0(*(undefined4 *)(lVar1 + 8));
  }
  return uVar3;
}



// FUNCTION 1452c9e60 FUN_1452c9e60 body=138 status=ok
// SIG undefined FUN_1452c9e60(void)

undefined8 FUN_1452c9e60(longlong param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined1 *)(param_2 + 0x4d7) = 4;
  pcVar2 = strstr(*(char **)(param_1 + 0x1260),";mode=");
  if ((pcVar2 == (char *)0x0) &&
     (pcVar2 = strstr(*(char **)(param_2 + 0x60),";mode="), pcVar2 == (char *)0x0)) {
    return 0;
  }
  *pcVar2 = '\0';
  cVar1 = FUN_144f19630(pcVar2[6]);
  if ((cVar1 != 'A') && ((cVar1 == 'I' || (cVar1 != 'N')))) {
    *(undefined1 *)(param_1 + 0x13d2) = 0;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x13d2) = 1;
  return 0;
}



// FUNCTION 1452c9ef0 FUN_1452c9ef0 body=303 status=ok
// SIG undefined FUN_1452c9ef0(void)

void FUN_1452c9ef0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_128 [2];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  piVar1 = *(int **)(*(longlong *)(param_1 + 0x20) + 0x3a0);
  lVar4 = FUN_144f15e70(*(undefined8 *)(piVar1 + 4),0,*piVar1 == 0);
  if (lVar4 < 0) {
    piVar1[2] = -99;
    *piVar1 = 3;
LAB_1452c9f49:
    *param_2 = 0;
    iVar2 = FUN_144f26bb0(*(undefined8 *)(piVar1 + 6),0xffffffffffffffff,0xffffffffffffffff,0);
    if (iVar2 == -1) {
      uVar3 = Ordinal_111();
      uVar5 = FUN_144bbe240(uVar3,local_118,0x100);
      FUN_144f14b70(param_1,&DAT_149972340,uVar5);
      piVar1[3] = 5;
      goto LAB_1452ca00f;
    }
    if ((iVar2 == 0) || (iVar2 = FUN_1452cb3a0(param_1), iVar2 != 0)) goto LAB_1452ca00f;
    iVar2 = piVar1[3];
  }
  else {
    _time64(local_128);
    if (local_128[0] <= (longlong)piVar1[9] + *(longlong *)(piVar1 + 0xc)) goto LAB_1452c9f49;
    _time64((__time64_t *)(piVar1 + 0xc));
    iVar2 = 7;
    *param_2 = 0;
  }
  iVar2 = FUN_1452cb330(piVar1,iVar2);
  if ((iVar2 == 0) && (iVar2 = *piVar1, *param_2 = iVar2 == 3, iVar2 == 3)) {
    local_138 = 0xffffffff;
    FUN_144f24c20(param_1,0xffffffff);
  }
LAB_1452ca00f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_158);
}



// FUNCTION 1452ca040 FUN_1452ca040 body=100 status=ok
// SIG undefined FUN_1452ca040(void)

undefined8 FUN_1452ca040(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  uVar2 = FUN_1452c9ef0();
  if ((*param_2 == '\0') && ((int)uVar2 == 0)) {
    iVar1 = FUN_144f25e70(param_1);
    if (iVar1 != 0) {
      return 0x2a;
    }
    puVar3 = (undefined4 *)FUN_144f07150(local_18);
    local_28 = *puVar3;
    uStack_24 = puVar3[1];
    uStack_20 = puVar3[2];
    uStack_1c = puVar3[3];
    uVar2 = FUN_144f27170(param_1,&local_28);
  }
  return uVar2;
}



// FUNCTION 1452ca0c0 FUN_1452ca0c0 body=805 status=ok
// SIG undefined FUN_1452ca0c0(void)

void FUN_1452ca0c0(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = *(undefined8 *)(param_1 + 4);
  if (param_2 == 3) {
    sVar3 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x54) + 2),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x54) + 3));
    if ((short)(*(short *)(param_1 + 0x53) + 1) == sVar3) {
      param_1[8] = 0;
    }
    else {
      if (*(short *)(param_1 + 0x53) != sVar3) {
        FUN_144f14ad0(uVar2,"Received unexpected DATA packet block %d, expecting block %d",sVar3);
        goto LAB_1452ca3d5;
      }
      FUN_144f14ad0(uVar2,"Received last DATA packet block %d again.",sVar3);
    }
    *(short *)(param_1 + 0x53) = sVar3;
    **(undefined1 **)(param_1 + 0x56) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x53);
    *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
    local_128 = param_1 + 0x2e;
    *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
    local_120 = param_1[0x4e];
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
    if (-1 < iVar4) {
      uVar5 = 3;
      if ((longlong)(int)param_1[0x51] + 4 <= (longlong)(int)param_1[0x4f]) {
        uVar5 = 1;
      }
      *param_1 = uVar5;
      _time64((__time64_t *)(param_1 + 0xc));
      goto LAB_1452ca3d5;
    }
  }
  else {
    if (param_2 == 5) {
      **(undefined1 **)(param_1 + 0x56) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 5;
      uVar1 = *(undefined2 *)(param_1 + 0x53);
      *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
      local_128 = param_1 + 0x2e;
      *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
      local_120 = param_1[0x4e];
      Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
      *param_1 = 3;
      goto LAB_1452ca3d5;
    }
    if (param_2 == 6) {
      *(undefined2 *)(param_1 + 0x53) = 0;
      param_1[8] = 0;
      **(undefined1 **)(param_1 + 0x56) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 4;
      uVar1 = *(undefined2 *)(param_1 + 0x53);
      *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
      local_128 = param_1 + 0x2e;
      *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
      local_120 = param_1[0x4e];
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
      if (-1 < iVar4) {
        *param_1 = 1;
        _time64((__time64_t *)(param_1 + 0xc));
        goto LAB_1452ca3d5;
      }
    }
    else {
      if (param_2 != 7) {
        FUN_144f14b70(uVar2,&DAT_149972340,"tftp_rx: internal error");
        goto LAB_1452ca3d5;
      }
      param_1[8] = param_1[8] + 1;
      FUN_144f14ad0(uVar2,"Timeout waiting for block %d ACK.  Retries = %d",
                    *(short *)(param_1 + 0x53) + 1);
      if ((int)param_1[10] < (int)param_1[8]) {
        param_1[2] = 0xffffff9d;
        *param_1 = 3;
        goto LAB_1452ca3d5;
      }
      local_120 = param_1[0x4e];
      local_128 = param_1 + 0x2e;
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
      if (-1 < iVar4) goto LAB_1452ca3d5;
    }
  }
  uVar5 = Ordinal_111();
  uVar6 = FUN_144bbe240(uVar5,local_118,0x100);
  FUN_144f14b70(uVar2,&DAT_149972340,uVar6);
LAB_1452ca3d5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 1452ca400 FUN_1452ca400 body=966 status=ok
// SIG undefined FUN_1452ca400(void)

void FUN_1452ca400(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 local_130;
  longlong local_128 [2];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar2 = *(longlong *)(param_1 + 4);
  if (param_2 == 4) {
LAB_1452ca58b:
    if (param_2 == 4) {
      sVar3 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x54) + 2),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x54) + 3));
      if ((sVar3 != *(short *)(param_1 + 0x53)) &&
         ((*(short *)(param_1 + 0x53) != 0 || (sVar3 != -1)))) {
        FUN_144f14ad0(lVar2,"Received ACK for block %d, expecting %d");
        param_1[8] = param_1[8] + 1;
        if ((int)param_1[10] < (int)param_1[8]) {
          FUN_144f14b70(lVar2,"tftp_tx: giving up waiting for block %d ack",
                        *(undefined2 *)(param_1 + 0x53));
        }
        else {
          local_130 = param_1[0x4e];
          local_138 = param_1 + 0x2e;
          iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                             param_1[0x50] + 4,0);
          if (iVar4 < 0) {
            uVar5 = Ordinal_111();
            uVar6 = FUN_144bbe240(uVar5,local_118,0x100);
            FUN_144f14b70(lVar2,&DAT_149972340,uVar6);
          }
        }
        goto LAB_1452ca7b6;
      }
      _time64((__time64_t *)(param_1 + 0xc));
      *(short *)(param_1 + 0x53) = *(short *)(param_1 + 0x53) + 1;
    }
    else {
      *(undefined2 *)(param_1 + 0x53) = 1;
    }
    param_1[8] = 0;
    **(undefined1 **)(param_1 + 0x56) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 3;
    uVar1 = *(undefined2 *)(param_1 + 0x53);
    *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
    if ((1 < *(ushort *)(param_1 + 0x53)) && ((int)param_1[0x50] < (int)param_1[0x51])) {
LAB_1452ca580:
      *param_1 = 3;
      goto LAB_1452ca7b6;
    }
    param_1[0x50] = 0;
    *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) = *(longlong *)(param_1 + 0x56) + 4;
    do {
      iVar4 = FUN_144f24620(lVar2,(longlong)(int)(param_1[0x51] - param_1[0x50]),local_128);
      if (iVar4 != 0) goto LAB_1452ca7b6;
      param_1[0x50] = param_1[0x50] + (int)local_128[0];
      *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) =
           *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) + local_128[0];
    } while (((int)param_1[0x50] < (int)param_1[0x51]) && (local_128[0] != 0));
    local_130 = param_1[0x4e];
    local_138 = param_1 + 0x2e;
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                       param_1[0x50] + 4,0);
    if (-1 < iVar4) {
      *(longlong *)(lVar2 + 0x108) = *(longlong *)(lVar2 + 0x108) + (longlong)(int)param_1[0x50];
LAB_1452ca7a5:
      FUN_144f25da0(lVar2,*(undefined8 *)(lVar2 + 0x108));
      goto LAB_1452ca7b6;
    }
  }
  else {
    if (param_2 == 5) {
      *param_1 = 3;
      **(undefined1 **)(param_1 + 0x56) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 5;
      uVar1 = *(undefined2 *)(param_1 + 0x53);
      *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
      local_138 = param_1 + 0x2e;
      *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
      local_130 = param_1[0x4e];
      Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
      goto LAB_1452ca580;
    }
    if (param_2 == 6) goto LAB_1452ca58b;
    if (param_2 != 7) {
      FUN_144f14b70(lVar2,"tftp_tx: internal error, event: %i",param_2);
      goto LAB_1452ca7b6;
    }
    param_1[8] = param_1[8] + 1;
    FUN_144f14ad0(lVar2,"Timeout waiting for block %d ACK.  Retries = %d",
                  *(short *)(param_1 + 0x53) + 1);
    if ((int)param_1[10] < (int)param_1[8]) {
      param_1[2] = 0xffffff9d;
      *param_1 = 3;
      goto LAB_1452ca7b6;
    }
    local_130 = param_1[0x4e];
    local_138 = param_1 + 0x2e;
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                       param_1[0x50] + 4,0);
    if (-1 < iVar4) goto LAB_1452ca7a5;
  }
  uVar5 = Ordinal_111();
  uVar6 = FUN_144bbe240(uVar5,local_118,0x100);
  FUN_144f14b70(lVar2,&DAT_149972340,uVar6);
LAB_1452ca7b6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_158);
}



// FUNCTION 1452ca7e0 FUN_1452ca7e0 body=106 status=ok
// SIG undefined FUN_1452ca7e0(void)

undefined8 FUN_1452ca7e0(int param_1)

{
  if (param_1 != -100) {
    switch(param_1) {
    case 0:
    case 4:
      return 0x47;
    case 1:
      return 0x44;
    case 2:
      return 0x45;
    case 3:
      return 0x46;
    case 5:
      return 0x48;
    case 6:
      return 0x49;
    case 7:
      return 0x4a;
    case -99:
      return 0x1c;
    case -0x62:
      return 7;
    default:
      return 0x2a;
    }
  }
  return 0;
}



// FUNCTION 1452ca8e0 FUN_1452ca8e0 body=249 status=ok
// SIG undefined FUN_1452ca8e0(void)

undefined8 FUN_1452ca8e0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar2 = FUN_144f15e70(*(undefined8 *)(param_1 + 4),0,*param_1 == 0);
  if (lVar2 < 0) {
    FUN_144f14b70(*(undefined8 *)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (lVar2 < 1) {
    lVar4 = 0xe10;
  }
  else {
    lVar4 = (lVar2 + 500) / 1000;
  }
  uVar3 = (int)lVar4 / 5;
  param_1[10] = uVar3;
  if ((int)uVar3 < 3) {
    uVar3 = 3;
  }
  else {
    if ((int)uVar3 < 0x33) goto LAB_1452ca989;
    uVar3 = 0x32;
  }
  param_1[10] = uVar3;
LAB_1452ca989:
  iVar1 = (int)(lVar4 / (longlong)(ulonglong)uVar3);
  param_1[9] = iVar1;
  if (iVar1 < 1) {
    param_1[9] = 1;
    iVar1 = 1;
  }
  FUN_144f14ad0(*(undefined8 *)(param_1 + 4),
                "set timeouts for state %d; Total % I64d, retry %d maxtry %d",*param_1,lVar2,iVar1,
                uVar3);
  _time64((__time64_t *)(param_1 + 0xc));
  return 0;
}



// FUNCTION 1452ca9e0 FUN_1452ca9e0 body=53 status=ok
// SIG undefined FUN_1452ca9e0(void)

size_t FUN_1452ca9e0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = memchr(param_1,0,param_2);
  if (pvVar1 != (void *)0x0) {
    param_2 = (longlong)pvVar1 - (longlong)param_1;
  }
  return param_2;
}



// FUNCTION 1452caa20 FUN_1452caa20 body=690 status=ok
// SIG undefined FUN_1452caa20(void)

undefined8 FUN_1452caa20(longlong param_1,void *param_2,int param_3)

{
  longlong lVar1;
  void *_Buf;
  int iVar2;
  long lVar3;
  void *pvVar4;
  longlong lVar5;
  size_t sVar7;
  char *_Str;
  ulonglong _MaxCount;
  ulonglong uVar8;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x144) = 0x200;
  _Buf = param_2;
  while( true ) {
    if ((void *)((longlong)param_3 + (longlong)param_2) <= _Buf) {
      return 0;
    }
    _MaxCount = ((longlong)param_3 - (longlong)_Buf) + (longlong)param_2;
    pvVar4 = memchr(_Buf,0,_MaxCount);
    uVar8 = _MaxCount;
    if (pvVar4 != (void *)0x0) {
      uVar8 = (longlong)pvVar4 - (longlong)_Buf;
    }
    uVar8 = uVar8 + 1;
    if (_MaxCount <= uVar8) break;
    pvVar4 = memchr((void *)(uVar8 + (longlong)_Buf),0,_MaxCount - uVar8);
    sVar7 = _MaxCount - uVar8;
    if (pvVar4 != (void *)0x0) {
      sVar7 = (longlong)pvVar4 - (longlong)(uVar8 + (longlong)_Buf);
    }
    uVar8 = sVar7 + 1 + uVar8;
    if (_MaxCount < uVar8) break;
    lVar5 = -1;
    do {
      lVar6 = lVar5;
      lVar5 = lVar6 + 1;
    } while (*(char *)((longlong)_Buf + lVar5) != '\0');
    _Str = (char *)((longlong)_Buf + lVar6 + 2);
    pvVar4 = (void *)((longlong)_Buf + uVar8);
    if (pvVar4 == (void *)0x0) break;
    FUN_144f14ad0(lVar1,"got option=(%s) value=(%s)",_Buf,_Str);
    iVar2 = FUN_144f195b0(_Buf,"blksize",7);
    if (iVar2 == 0) {
      iVar2 = FUN_144f195b0(_Buf,"tsize",5);
      _Buf = pvVar4;
      if (iVar2 != 0) {
        lVar3 = strtol(_Str,(char **)0x0,10);
        FUN_144f14ad0(lVar1,"%s (%ld)","tsize parsed from OACK",lVar3);
        if (*(char *)(lVar1 + 0x13d8) == '\0') {
          if (lVar3 == 0) {
            FUN_144f14b70(lVar1,"invalid tsize -:%s:- value in OACK packet",_Str);
            return 0x47;
          }
          FUN_144f25ce0(lVar1,(longlong)lVar3);
        }
      }
    }
    else {
      lVar3 = strtol(_Str,(char **)0x0,10);
      if (lVar3 == 0) {
        FUN_144f14b70(lVar1,"invalid blocksize value in OACK packet");
        return 0x47;
      }
      if (0xffb8 < lVar3) {
        FUN_144f14b70(lVar1,"%s (%d)","blksize is larger than max supported",0xffb8);
        return 0x47;
      }
      if (lVar3 < 8) {
        FUN_144f14b70(lVar1,"%s (%d)","blksize is smaller than min supported",8);
        return 0x47;
      }
      if (*(int *)(param_1 + 0x148) < lVar3) {
        FUN_144f14b70(lVar1,"%s (%ld)","server requested blksize larger than allocated",lVar3);
        return 0x47;
      }
      *(long *)(param_1 + 0x144) = lVar3;
      FUN_144f14ad0(lVar1,"%s (%d) %s (%d)","blksize parsed from OACK",lVar3,"requested",
                    *(int *)(param_1 + 0x148));
      _Buf = pvVar4;
    }
  }
  FUN_144f14b70(lVar1,"Malformed ACK packet, rejecting");
  return 0x47;
}



// FUNCTION 1452cace0 FUN_1452cace0 body=77 status=ok
// SIG undefined FUN_1452cace0(void)

void FUN_1452cace0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_144f14ad0(*(undefined8 *)(param_1 + 4),&DAT_149972340,"Connected for transmit");
  *param_1 = 2;
  iVar1 = FUN_1452ca8e0(param_1);
  if (iVar1 == 0) {
    FUN_1452ca400(param_1,param_2);
  }
  return;
}



// FUNCTION 1452cad30 FUN_1452cad30 body=77 status=ok
// SIG undefined FUN_1452cad30(void)

void FUN_1452cad30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_144f14ad0(*(undefined8 *)(param_1 + 4),&DAT_149972340,"Connected for receive");
  *param_1 = 1;
  iVar1 = FUN_1452ca8e0(param_1);
  if (iVar1 == 0) {
    FUN_1452ca0c0(param_1,param_2);
  }
  return;
}



// FUNCTION 1452cad80 FUN_1452cad80 body=1398 status=ok
// SIG undefined FUN_1452cad80(void)

void FUN_1452cad80(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  char *local_1a0;
  undefined8 local_198;
  longlong local_188 [2];
  char local_178 [64];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = *(longlong *)(param_1 + 4);
  pcVar12 = "netascii";
  if (*(char *)(lVar3 + 0x13d2) == '\0') {
    pcVar12 = "octet";
  }
  switch(param_2) {
  case 0:
  case 7:
    param_1[8] = param_1[8] + 1;
    if ((int)param_1[10] < (int)param_1[8]) {
      param_1[2] = 0xffffff9e;
      *param_1 = 3;
      break;
    }
    cVar2 = *(char *)(lVar3 + 0x13d8);
    **(undefined1 **)(param_1 + 0x56) = 0;
    if (cVar2 == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 1;
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 2;
      *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) = *(longlong *)(param_1 + 0x56) + 4;
      if (*(longlong *)(lVar3 + 0x11f8) != -1) {
        FUN_144f25d20(lVar3);
      }
    }
    local_1a8 = CONCAT44(local_1a8._4_4_,4);
    iVar4 = FUN_1452ce930(*(longlong *)(*(longlong *)(param_1 + 4) + 0x1260) + 1,0,local_188,0);
    if (iVar4 != 0) break;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar12[lVar6] != '\0');
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (*(char *)(local_188[0] + uVar7) != '\0');
    if (((int)param_1[0x51] - lVar6) - 4U < uVar7) {
      pcVar12 = "TFTP file name too long";
    }
    else {
      local_198 = 0;
      local_1a8 = 0;
      local_1a0 = pcVar12;
      FUN_144f2b7e0(*(longlong *)(param_1 + 0x56) + 2,(longlong)(int)param_1[0x51],"%s%c%s%c");
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pcVar12[lVar6] != '\0');
      lVar9 = -1;
      do {
        lVar8 = lVar9;
        lVar9 = lVar8 + 1;
      } while (*(char *)(local_188[0] + 1 + lVar8) != '\0');
      uVar7 = lVar8 + 5 + lVar6;
      if (*(char *)(lVar3 + 0xab4) != '\0') {
LAB_1452cb234:
        lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x58);
        local_1a8 = lVar6 + 0x10;
        local_1a0 = (char *)CONCAT44(local_1a0._4_4_,*(undefined4 *)(lVar6 + 0xc));
        iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                           uVar7 & 0xffffffff,0);
        if ((longlong)iVar4 != uVar7) {
          uVar5 = Ordinal_111();
          uVar10 = FUN_144bbe240(uVar5,local_138,0x100);
          FUN_144f14b70(lVar3,&DAT_149972340,uVar10);
        }
        (*(code *)PTR_free_14c6d9f28)(local_188[0]);
        break;
      }
      if ((*(char *)(lVar3 + 0x13d8) == '\0') || (*(longlong *)(lVar3 + 0x11f8) == -1)) {
        local_178[0] = '0';
        local_178[1] = '\0';
      }
      else {
        FUN_144f2b7e0(local_178,0x40,"%I64d");
      }
      uVar1 = uVar7 + 6;
      if ((ulonglong)(longlong)(int)param_1[0x51] < uVar1) {
LAB_1452cb003:
        FUN_144f2b7e0(local_178,0x40,&DAT_1499c1968,param_1[0x52]);
LAB_1452cb01b:
        FUN_144f2b7e0(local_178,0x40,&DAT_1499c1968,param_1[9]);
      }
      else {
        pcVar12 = "tsize";
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar7);
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar11 = cVar2;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        lVar6 = -1;
        do {
          lVar9 = lVar6;
          lVar6 = lVar9 + 1;
        } while (local_178[lVar9 + 1] != '\0');
        pcVar12 = local_178;
        if ((ulonglong)(longlong)(int)param_1[0x51] < lVar9 + 2 + uVar1) goto LAB_1452cb003;
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar1);
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar11 = cVar2;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        lVar6 = -1;
        do {
          lVar9 = lVar6;
          lVar6 = lVar9 + 1;
        } while (local_178[lVar9 + 1] != '\0');
        lVar6 = lVar9 + 2 + uVar1;
        FUN_144f2b7e0(local_178,0x40,&DAT_1499c1968,param_1[0x52]);
        uVar7 = lVar6 + 8;
        if ((ulonglong)(longlong)(int)param_1[0x51] < uVar7) goto LAB_1452cb01b;
        pcVar12 = "blksize";
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + lVar6);
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar11 = cVar2;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        lVar6 = -1;
        do {
          lVar9 = lVar6;
          lVar6 = lVar9 + 1;
        } while (local_178[lVar9 + 1] != '\0');
        pcVar12 = local_178;
        if ((ulonglong)(longlong)(int)param_1[0x51] < lVar9 + 2 + uVar7) {
          FUN_144f2b7e0(pcVar12,0x40,&DAT_1499c1968,param_1[9]);
          pcVar12 = "TFTP buffer too small for options";
          goto LAB_1452caed6;
        }
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar7);
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar11 = cVar2;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        lVar6 = -1;
        do {
          lVar9 = lVar6;
          lVar6 = lVar9 + 1;
        } while (local_178[lVar9 + 1] != '\0');
        lVar6 = lVar9 + 2 + uVar7;
        FUN_144f2b7e0(local_178,0x40,&DAT_1499c1968,param_1[9]);
        uVar7 = lVar6 + 8;
        if (uVar7 <= (ulonglong)(longlong)(int)param_1[0x51]) {
          pcVar12 = "timeout";
          pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + lVar6);
          do {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            *pcVar11 = cVar2;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          lVar6 = -1;
          do {
            lVar9 = lVar6;
            lVar6 = lVar9 + 1;
          } while (local_178[lVar9 + 1] != '\0');
          if (lVar9 + 2 + uVar7 <= (ulonglong)(longlong)(int)param_1[0x51]) {
            pcVar12 = local_178;
            pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar7);
            do {
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              *pcVar11 = cVar2;
              pcVar11 = pcVar11 + 1;
              lVar6 = -1;
            } while (cVar2 != '\0');
            do {
              lVar9 = lVar6;
              lVar6 = lVar9 + 1;
            } while (local_178[lVar9 + 1] != '\0');
            uVar7 = lVar9 + 2 + uVar7;
            goto LAB_1452cb234;
          }
        }
      }
      pcVar12 = "TFTP buffer too small for options";
    }
LAB_1452caed6:
    FUN_144f14b70(lVar3,pcVar12);
    (*(code *)PTR_free_14c6d9f28)(local_188[0]);
    break;
  default:
    FUN_144f14b70(lVar3,"tftp_send_first: internal error");
    break;
  case 3:
    goto LAB_1452cb2c5;
  case 4:
    FUN_1452cace0(param_1);
    break;
  case 5:
    *param_1 = 3;
    break;
  case 6:
    if (*(char *)(lVar3 + 0x13d8) != '\0') {
      FUN_1452cace0(param_1);
      break;
    }
LAB_1452cb2c5:
    FUN_1452cad30(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 1452cb330 FUN_1452cb330 body=112 status=ok
// SIG undefined FUN_1452cb330(void)

undefined8 FUN_1452cb330(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_1452cad80();
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_1452ca0c0();
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_1452ca400();
    return uVar2;
  }
  if (iVar1 != 3) {
    FUN_144f14b70(*(undefined8 *)(param_1 + 4),&DAT_149972340,"Internal state machine error");
    return 0x47;
  }
  FUN_144f14ad0(*(undefined8 *)(param_1 + 4),&DAT_149972340,"TFTP finished");
  return 0;
}



// FUNCTION 1452cb3a0 FUN_1452cb3a0 body=576 status=ok
// SIG undefined FUN_1452cb3a0(void)

void FUN_1452cb3a0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  int *local_c0;
  int local_b8 [4];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x3a0);
  local_c0 = local_b8;
  local_b8[0] = 0x80;
  local_c8 = local_a8;
  uVar5 = Ordinal_17(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x150),
                     *(int *)(lVar3 + 0x144) + 4,0);
  *(undefined4 *)(lVar3 + 0x13c) = uVar5;
  if (*(int *)(lVar3 + 0x138) == 0) {
    memcpy((void *)(lVar3 + 0xb8),local_a8,(longlong)local_b8[0]);
    *(int *)(lVar3 + 0x138) = local_b8[0];
  }
  iVar6 = *(int *)(lVar3 + 0x13c);
  if (iVar6 < 4) {
    FUN_144f14b70(param_1,"Received too short packet");
    *(undefined4 *)(lVar3 + 0xc) = 7;
    goto LAB_1452cb463;
  }
  puVar4 = *(undefined1 **)(lVar3 + 0x150);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *(uint *)(lVar3 + 0xc) = (uint)CONCAT11(uVar1,uVar2);
  switch((uint)CONCAT11(uVar1,uVar2)) {
  default:
    FUN_144f14b70(param_1,&DAT_149972340,"Internal error: Unexpected packet");
    break;
  case 3:
    if ((4 < iVar6) && ((short)(*(short *)(lVar3 + 0x14c) + 1) == CONCAT11(puVar4[2],puVar4[3]))) {
      iVar6 = FUN_144f14dc0(param_1,1,puVar4 + 4,(longlong)(iVar6 + -4));
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0x100) =
             *(longlong *)(param_1 + 0x100) + (longlong)(*(int *)(lVar3 + 0x13c) + -4);
        iVar6 = FUN_144f25d60(param_1,*(undefined8 *)(param_1 + 0x100));
        if (iVar6 == 0) break;
      }
      FUN_1452cb330(lVar3,5);
      goto LAB_1452cb463;
    }
    break;
  case 4:
    break;
  case 5:
    *(uint *)(lVar3 + 8) = (uint)CONCAT11(puVar4[2],puVar4[3]);
    uVar7 = FUN_1452ca9e0(puVar4 + 4,(longlong)(iVar6 + -4));
    if (uVar7 < (ulonglong)(longlong)(iVar6 + -4)) {
      FUN_144f14ad0(param_1,"TFTP error: %s",puVar4 + 4);
    }
    break;
  case 6:
    iVar6 = FUN_1452caa20(lVar3,puVar4 + 2,iVar6 + -2);
    if (iVar6 != 0) goto LAB_1452cb463;
  }
  iVar6 = FUN_144f25e70(param_1);
  if (iVar6 != 0) {
    FUN_1452cb330(lVar3,5);
  }
LAB_1452cb463:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1452cb610 FUN_1452cb610 body=665 status=ok
// SIG undefined FUN_1452cb610(void)

ulonglong FUN_1452cb610(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar11;
  longlong *plVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x1260);
  lVar6 = *(longlong *)(param_1 + 0x1268);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8);
  local_res8 = (undefined1 *)0x0;
  *param_2 = 1;
  if (lVar6 == 0) {
    lVar6 = (*(code *)PTR__strdup_14c6d9f38)();
  }
  else {
    lVar6 = FUN_144f2b8b0("%s?%s",uVar2);
  }
  if (lVar6 == 0) {
    return 0x1b;
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)(lVar6 + uVar7) != '\0');
  if (uVar7 < 3) {
    local_res8 = &DAT_14996de1b;
    lVar8 = -1;
    do {
      local_res18 = lVar8 + 1;
      pcVar1 = "reset" + lVar8;
      lVar8 = local_res18;
    } while (*pcVar1 != '\0');
    (*(code *)PTR_free_14c6d9f28)(lVar6);
    puVar9 = (undefined1 *)0x0;
  }
  else {
    uVar4 = FUN_1452ce930(lVar6 + 2,0,&local_res8,&local_res18,CONCAT44(uVar11,4));
    (*(code *)PTR_free_14c6d9f28)(lVar6);
    puVar9 = local_res8;
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
  }
  lVar6 = FUN_144f17000(local_res18);
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_res8[lVar8] != '\0');
  while (lVar8 != 0) {
    uVar4 = FUN_144f15180(param_1,0,local_res8,lVar6,&local_res10);
    uVar7 = (ulonglong)uVar4;
    if (uVar4 != 0) {
LAB_1452cb852:
      (*(code *)PTR_free_14c6d9f28)(puVar9);
      goto LAB_1452cb82a;
    }
    uVar4 = FUN_144f14dc0(param_1,4,local_res8,local_res10);
    uVar7 = (ulonglong)uVar4;
    if (uVar4 != 0) goto LAB_1452cb852;
    local_res8 = local_res8 + local_res10;
    lVar6 = lVar6 - local_res10;
    if (lVar6 < 1) break;
    lVar8 = FUN_144f15e70(param_1,0,0);
    if (lVar8 < 0) {
LAB_1452cb84d:
      uVar7 = 0x1c;
      goto LAB_1452cb852;
    }
    if (lVar8 == 0) {
      lVar8 = 0x7fffffffffffffff;
    }
    iVar5 = FUN_144f26bb0(0xffffffffffffffff,0xffffffffffffffff,uVar3,lVar8);
    if (iVar5 < 0) {
      uVar7 = 0x37;
      (*(code *)PTR_free_14c6d9f28)(puVar9);
      goto LAB_1452cb82a;
    }
    if (iVar5 == 0) goto LAB_1452cb84d;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (local_res8[lVar8] != '\0');
  }
  (*(code *)PTR_free_14c6d9f28)(puVar9);
  plVar10 = &local_res10;
  uVar4 = FUN_144f15180(param_1,0,&DAT_149c058e8,2,plVar10);
  uVar11 = (undefined4)((ulonglong)plVar10 >> 0x20);
  uVar7 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    uVar7 = FUN_144f14dc0(param_1,4,&DAT_149c058e8);
    if ((int)uVar7 == 0) {
      FUN_144f24c20(param_1,0,0xffffffffffffffff,0,CONCAT44(uVar11,0xffffffff));
      uVar7 = 0;
    }
  }
  else {
LAB_1452cb82a:
    FUN_144f14b70(param_1,"Failed sending Gopher request");
  }
  return uVar7;
}



// FUNCTION 1452cb8c0 FUN_1452cb8c0 body=75 status=ok
// SIG undefined FUN_1452cb8c0(void)

ulonglong FUN_1452cb8c0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_144f13f00(param_1,0,1,param_2);
  if ((int)uVar2 != 0) {
    FUN_144f16220(uVar1,1);
    uVar2 = uVar2 & 0xffffffff;
  }
  *param_2 = 1;
  return uVar2;
}



// FUNCTION 1452cb910 FUN_1452cb910 body=15 status=ok
// SIG undefined FUN_1452cb910(void)

void FUN_1452cb910(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001452cb918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_14c6d9f40)(0x58);
  return;
}



// FUNCTION 1452cb920 FUN_1452cb920 body=33 status=ok
// SIG undefined FUN_1452cb920(void)

void FUN_1452cb920(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1452ccb40();
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return;
}



// FUNCTION 1452cb950 FUN_1452cb950 body=343 status=ok
// SIG undefined FUN_1452cb950(void)

longlong * FUN_1452cb950(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(0x58);
  if (plVar1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      *plVar1 = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[1] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[2] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[3] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[3] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[4] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[6] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[6] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[7] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[7] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[8] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[8] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[9] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[9] = lVar2;
      if (lVar2 == 0) goto LAB_1452cba75;
    }
    if (param_1[5] != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)();
      plVar1[5] = lVar2;
      if (lVar2 == 0) {
LAB_1452cba75:
        FUN_1452ccb40(plVar1);
        (*(code *)PTR_free_14c6d9f28)(plVar1);
        return (longlong *)0x0;
      }
    }
    *(int *)(plVar1 + 10) = (int)param_1[10];
  }
  return plVar1;
}



// FUNCTION 1452cbab0 FUN_1452cbab0 body=1989 status=ok
// SIG undefined FUN_1452cbab0(void)

void FUN_1452cbab0(longlong *param_1,undefined4 param_2,longlong *param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte bVar15;
  undefined1 *puVar16;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  char *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  char *local_78;
  longlong local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,param_2);
  bVar14 = (byte)(param_4 >> 6) & 1;
  uVar3 = (ulonglong)local_88 >> 0x20;
  local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
  local_80 = (undefined1 *)(CONCAT44(local_80._4_4_,(int)(param_4 >> 7)) & 0xffffffff01ffff01);
  uVar4 = (ulonglong)local_98 >> 0x20;
  local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
  if ((param_1 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) goto switchD_1452cbb6c_default;
  puVar16 = (undefined1 *)0x0;
  *param_3 = 0;
  lVar10 = -1;
  switch(param_2) {
  case 0:
    local_98 = (undefined1 *)param_1[3];
    puVar11 = (undefined1 *)param_1[6];
    local_90 = (undefined1 *)(CONCAT44(local_90._4_4_,(int)(param_4 >> 0xd)) & 0xffffffff0007ff01);
    if ((*param_1 == 0) || (iVar6 = FUN_144f19540(&DAT_14997dd50), iVar6 == 0)) {
      if (param_1[4] == 0) goto switchD_1452cbb6c_default;
      local_78 = (char *)*param_1;
      if (local_78 == (char *)0x0) {
        if ((param_4 & 4) == 0) goto switchD_1452cbb6c_default;
        local_78 = "https";
      }
      lVar7 = FUN_144f0f160(local_78,0xffffffffffffffff);
      if (puVar11 == (undefined1 *)0x0) {
        if ((param_4 & 1) == 0) {
          if (lVar7 != 0) goto LAB_1452cc058;
        }
        else if (lVar7 != 0) {
          FUN_144f2b7e0(local_48,7,&DAT_149982378,*(undefined4 *)(lVar7 + 0x80));
          puVar11 = local_48;
LAB_1452cc058:
          if ((*(uint *)(lVar7 + 0x8c) & 0x400) == 0) {
            local_98 = (undefined1 *)0x0;
          }
        }
      }
      else if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x80) == (int)param_1[10]) && ((param_4 & 2) != 0)) {
          puVar11 = (undefined1 *)0x0;
        }
        goto LAB_1452cc058;
      }
      puVar12 = local_98;
      pcVar8 = (char *)param_1[4];
      if (*pcVar8 == '[') {
        puVar16 = (undefined1 *)0x0;
        if (param_1[5] != 0) {
          do {
            lVar7 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (pcVar8[lVar7] != '\0');
          FUN_144f07cf0(local_68,8000000);
          local_f8 = (undefined1 *)param_1[5];
          iVar6 = FUN_144f07d70(local_68,"%.*s%%25%s]",(int)lVar10 + -1,param_1[4]);
          if (iVar6 != 0) goto switchD_1452cbb6c_default;
          puVar16 = (undefined1 *)FUN_144f07e80(local_68);
        }
      }
      else if ((char)local_80 == '\0') {
        if (((param_4 & 0xffffffff) >> 0xc & 1) == 0) {
          if ((((char)local_90 != '\0') && (cVar5 = FUN_1452ceed0(), cVar5 != '\0')) &&
             (iVar6 = strncmp("xn--",(char *)param_1[4],4), iVar6 == 0))
          goto switchD_1452cbb6c_default;
        }
        else {
          cVar5 = FUN_1452ceed0();
          if (cVar5 == '\0') goto switchD_1452cbb6c_default;
        }
      }
      else {
        puVar16 = (undefined1 *)FUN_1452ce7e0(0,pcVar8,0);
        if (puVar16 == (undefined1 *)0x0) goto switchD_1452cbb6c_default;
      }
      puVar1 = (undefined1 *)param_1[9];
      puVar9 = &DAT_14996de1b;
      pcVar8 = (char *)param_1[8];
      local_a0 = &DAT_14996de1b;
      if (puVar1 != (undefined1 *)0x0) {
        local_a0 = puVar1;
      }
      if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
        local_b0 = "";
        if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
          local_90 = &DAT_14996de1b;
        }
        else {
          local_90 = &DAT_149d29b64;
        }
      }
      else {
        local_90 = &DAT_149d29b64;
        local_b0 = pcVar8;
      }
      local_c0 = &DAT_149981d20;
      if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
        local_c0 = (undefined1 *)param_1[7];
      }
      local_80 = puVar16;
      if (puVar16 == (undefined1 *)0x0) {
        local_80 = (undefined1 *)param_1[4];
      }
      puVar2 = (undefined1 *)param_1[1];
      if (((puVar2 == (undefined1 *)0x0) && (param_1[2] == 0)) && (puVar12 == (undefined1 *)0x0)) {
        puVar12 = (undefined1 *)param_1[2];
        local_e0 = &DAT_14996de1b;
LAB_1452cc187:
        local_88 = &DAT_14996de1b;
      }
      else {
        puVar12 = (undefined1 *)param_1[2];
        local_e0 = &DAT_149c08428;
        local_88 = puVar12;
        if (puVar12 == (undefined1 *)0x0) goto LAB_1452cc187;
      }
      local_a8 = &DAT_14996de1b;
      puVar13 = &DAT_14996de1b;
      if (puVar2 != (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      local_e8 = &DAT_14996de1b;
      if (puVar1 != (undefined1 *)0x0) {
        local_a8 = &DAT_149d29b38;
      }
      local_d0 = &DAT_14996de1b;
      local_c8 = &DAT_14996de1b;
      if (puVar11 != (undefined1 *)0x0) {
        local_d0 = &DAT_149c05284;
        local_c8 = puVar11;
      }
      local_f0 = &DAT_14996de1b;
      local_b8 = local_90;
      if (local_98 != (undefined1 *)0x0) {
        local_f0 = &DAT_149cdcb14;
        local_e8 = local_98;
      }
      local_d8 = local_80;
      if (puVar12 != (undefined1 *)0x0) {
        puVar9 = &DAT_149c05284;
      }
      local_f8 = local_88;
      lVar10 = FUN_144f2b8b0("%s://%s%s%s%s%s%s%s%s%s%s%s%s%s%s",local_78,puVar13,puVar9);
      (*(code *)PTR_free_14c6d9f28)(puVar16);
    }
    else {
      puVar16 = &DAT_14996de1b;
      puVar11 = &DAT_14996de1b;
      if ((undefined1 *)param_1[9] != (undefined1 *)0x0) {
        puVar16 = &DAT_149d29b38;
        puVar11 = (undefined1 *)param_1[9];
      }
      lVar10 = FUN_144f2b8b0("file://%s%s%s",param_1[7],puVar16,puVar11);
    }
    if (lVar10 != 0) {
      *param_3 = lVar10;
    }
    goto switchD_1452cbb6c_default;
  case 1:
    puVar16 = (undefined1 *)*param_1;
    bVar14 = 0;
    break;
  case 2:
    puVar16 = (undefined1 *)param_1[1];
    break;
  case 3:
    puVar16 = (undefined1 *)param_1[2];
    break;
  case 4:
    puVar16 = (undefined1 *)param_1[3];
    break;
  case 5:
    puVar16 = (undefined1 *)param_1[4];
    local_88 = (undefined1 *)
               (CONCAT44((int)uVar3,(int)((param_4 & 0xffffffff) >> 0xc)) & 0xffffffff000fff01);
    local_98 = (undefined1 *)(CONCAT44((int)uVar4,(int)(param_4 >> 0xd)) & 0xffffffff0007ff01);
    break;
  case 6:
    puVar16 = (undefined1 *)param_1[6];
    bVar14 = 0;
    if (puVar16 == (undefined1 *)0x0) {
      if ((((param_4 & 1) == 0) || (*param_1 == 0)) ||
         (lVar7 = FUN_144f0f160(*param_1,0xffffffffffffffff), lVar7 == 0))
      goto switchD_1452cbb6c_default;
      FUN_144f2b7e0(local_48,7,&DAT_149982378,*(undefined4 *)(lVar7 + 0x80));
      puVar16 = local_48;
      bVar14 = 0;
    }
    else if (((*param_1 != 0) && (lVar7 = FUN_144f0f160(*param_1,0xffffffffffffffff), lVar7 != 0))
            && ((*(int *)(lVar7 + 0x80) == (int)param_1[10] && ((param_4 & 2) != 0))))
    goto switchD_1452cbb6c_default;
    goto LAB_1452cbc49;
  case 7:
    puVar16 = (undefined1 *)param_1[7];
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &DAT_149981d20;
    }
LAB_1452cbc49:
    bVar15 = 0;
    goto LAB_1452cbc50;
  case 8:
    puVar16 = (undefined1 *)param_1[8];
    bVar15 = bVar14;
    goto LAB_1452cbd83;
  case 9:
    puVar16 = (undefined1 *)param_1[9];
    break;
  case 10:
    puVar16 = (undefined1 *)param_1[5];
    break;
  default:
    goto switchD_1452cbb6c_default;
  }
  bVar15 = 0;
LAB_1452cbd83:
  if (puVar16 != (undefined1 *)0x0) {
LAB_1452cbc50:
    do {
      lVar7 = lVar10;
      lVar10 = lVar7 + 1;
    } while (puVar16[lVar10] != '\0');
    pcVar8 = (char *)FUN_144f13940(puVar16,lVar7 + 2);
    *param_3 = (longlong)pcVar8;
    if (pcVar8 != (char *)0x0) {
      lVar7 = lVar10;
      if (bVar15 != 0) {
        for (; lVar7 != 0; lVar7 = lVar7 + -1) {
          if (*pcVar8 == '+') {
            *pcVar8 = ' ';
          }
          pcVar8 = pcVar8 + 1;
        }
      }
      if (bVar14 != 0) {
        local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,3);
        iVar6 = FUN_1452ce930(*param_3,0,&local_78,&local_70);
        (*(code *)PTR_free_14c6d9f28)(*param_3);
        if (iVar6 != 0) {
          *param_3 = 0;
          goto switchD_1452cbb6c_default;
        }
        *param_3 = (longlong)local_78;
        lVar10 = local_70;
      }
      if ((char)local_80 == '\0') {
        if ((char)local_88 == '\0') {
          if (((char)local_98 != '\0') && (cVar5 = FUN_1452ceed0(param_1[4]), cVar5 != '\0')) {
            strncmp("xn--",(char *)param_1[4],4);
          }
        }
        else {
          FUN_1452ceed0(param_1[4]);
        }
      }
      else {
        FUN_144f07cf0(local_68,8000000);
        local_f8 = (undefined1 *)CONCAT71(local_f8._1_7_,(int)local_90 == 8);
        iVar6 = FUN_1452ccbc0(local_68,*param_3,lVar10,1);
        if (iVar6 == 0) {
          (*(code *)PTR_free_14c6d9f28)(*param_3);
          lVar10 = FUN_144f07e80(local_68);
          *param_3 = lVar10;
        }
      }
    }
  }
switchD_1452cbb6c_default:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
}



// FUNCTION 1452cc2c0 FUN_1452cc2c0 body=1648 status=ok
// SIG undefined FUN_1452cc2c0(void)

ulonglong FUN_1452cc2c0(longlong *param_1,int param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte local_res8;
  char cStackX_9;
  char cStackX_a;
  undefined5 uStackX_b;
  int local_res10;
  byte local_98;
  char local_94;
  long local_90;
  char *local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  
  local_90 = 0;
  local_94 = '\0';
  local_98 = 0;
  local_res8 = 0;
  uVar10 = param_4 & 0xffffffff;
  bVar16 = (byte)(param_4 >> 7) & 1;
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  local_res10 = param_2;
  if (param_3 != (byte *)0x0) {
    lVar17 = -1;
    uVar18 = 0xffffffffffffffff;
    do {
      uVar18 = uVar18 + 1;
    } while (param_3[uVar18] != 0);
    if (8000000 < uVar18) {
      return 3;
    }
    switch(param_2) {
    case 0:
      if (uVar18 == 0) {
        return 3;
      }
      lVar17 = FUN_1452cc990(param_3,0,0,(param_4 & 0x204) != 0);
      if ((lVar17 == 0) && (iVar6 = FUN_1452cbab0(param_1,0,&local_res8,uVar10), iVar6 == 0)) {
        lVar17 = FUN_1452ccd60(CONCAT53(uStackX_b,CONCAT12(cStackX_a,CONCAT11(cStackX_9,local_res8))
                                       ),param_3);
        (*(code *)PTR_free_14c6d9f28)
                  (CONCAT53(uStackX_b,CONCAT12(cStackX_a,CONCAT11(cStackX_9,local_res8))));
        if (lVar17 == 0) {
          return 7;
        }
        uVar7 = FUN_1452ce1c0(lVar17,param_1,uVar10);
        (*(code *)PTR_free_14c6d9f28)(lVar17);
        return (ulonglong)uVar7;
      }
      uVar10 = FUN_1452ce1c0(param_3,param_1,uVar10);
      return uVar10;
    case 1:
      uVar10 = 0xffffffffffffffff;
      do {
        uVar14 = uVar10;
        uVar10 = uVar14 + 1;
      } while (param_3[uVar14 + 1] != 0);
      if (0x27 < uVar14) {
        return 0x1b;
      }
      if (((param_4 & 8) == 0) && (lVar9 = FUN_144f0f160(param_3,0xffffffffffffffff), lVar9 == 0)) {
        return 5;
      }
      bVar16 = 0;
      pbVar11 = param_3;
      if ((0x19 < (byte)(*param_3 + 0x9f)) && (0x19 < (byte)(*param_3 + 0xbf))) {
        return 0x1b;
      }
      for (; plVar12 = param_1, uVar14 != 0; uVar14 = uVar14 - 1) {
        bVar1 = *pbVar11;
        if (9 < (byte)(bVar1 - 0x30)) {
          if ((char)bVar1 < 'a') {
            if (0x2f < (byte)(bVar1 - 0x2b)) {
              return 0x1b;
            }
            if ((0xffffffc0000dU >> ((ulonglong)(byte)(bVar1 - 0x2b) & 0x3f) & 1) == 0) {
              return 0x1b;
            }
          }
          else if ('z' < (char)bVar1) {
            return 0x1b;
          }
        }
        pbVar11 = pbVar11 + 1;
      }
      break;
    case 2:
      plVar12 = param_1 + 1;
      break;
    case 3:
      plVar12 = param_1 + 2;
      break;
    case 4:
      plVar12 = param_1 + 3;
      break;
    case 5:
      (*(code *)PTR_free_14c6d9f28)(param_1[5]);
      param_1[5] = 0;
      plVar12 = param_1 + 4;
      break;
    case 6:
      bVar16 = 0;
      local_90 = strtol((char *)param_3,&local_88,10);
      if ((0xfffe < local_90 - 1U) || (*local_88 != '\0')) {
        return 4;
      }
      plVar12 = param_1 + 6;
      break;
    case 7:
      local_res8 = 1;
      plVar12 = param_1 + 7;
      break;
    case 8:
      plVar12 = param_1 + 8;
      uVar10 = uVar10 >> 8 & 0xffff01;
      local_94 = (char)uVar10;
      local_98 = bVar16;
      goto LAB_1452cc4cc;
    case 9:
      plVar12 = param_1 + 9;
      break;
    case 10:
      plVar12 = param_1 + 5;
      break;
    default:
      goto LAB_1452cc910;
    }
    uVar10 = 0;
LAB_1452cc4cc:
    bVar1 = local_res8;
    FUN_144f07cf0(local_80,(ulonglong)local_res8 + 1 + uVar18 * 3);
    if (((bVar1 != 0) && (*param_3 != 0x2f)) &&
       (iVar6 = thunk_FUN_144f07eb0(local_80,&DAT_149981d20,1), iVar6 != 0)) {
      return 7;
    }
    if (bVar16 == 0) {
      iVar6 = FUN_144f07d50(local_80,param_3);
      if (iVar6 != 0) {
        return 7;
      }
      pcVar8 = (char *)FUN_144f07e80(local_80);
      cVar5 = *pcVar8;
      while (cVar5 != '\0') {
        if ((((cVar5 == '%') &&
             (((cVar5 = pcVar8[1], (byte)(cVar5 - 0x30U) < 10 || ((byte)(cVar5 + 0x9fU) < 6)) ||
              ((byte)(cVar5 + 0xbfU) < 6)))) &&
            (((cVar2 = pcVar8[2], (byte)(cVar2 - 0x30U) < 10 || ((byte)(cVar2 + 0x9fU) < 6)) ||
             ((byte)(cVar2 + 0xbfU) < 6)))) &&
           (((byte)(cVar5 + 0xbfU) < 0x1a || ((byte)(cVar2 + 0xbfU) < 0x1a)))) {
          cVar5 = FUN_144f19640();
          pcVar8[1] = cVar5;
          cVar5 = FUN_144f19640(pcVar8[2]);
          pcVar8[2] = cVar5;
          lVar9 = 3;
        }
        else {
          lVar9 = 1;
        }
        pcVar8 = pcVar8 + lVar9;
        cVar5 = *pcVar8;
      }
    }
    else {
      bVar16 = *param_3;
      while (bVar16 != 0) {
        if (bVar16 == 0x20) {
          if (local_98 == 0) goto LAB_1452cc61f;
          pbVar11 = &DAT_149d29a90;
LAB_1452cc66e:
          uVar15 = 1;
        }
        else {
          uVar7 = bVar16 - 0x2d;
          pbVar11 = param_3;
          if (((((byte)uVar7 < 0x33) &&
               ((0x43ffffff01ffbU >> ((ulonglong)(uVar7 & 0xff) & 0x3f) & 1) != 0)) ||
              ((byte)(bVar16 + 0x9f) < 0x1a)) || (bVar16 == 0x7e)) goto LAB_1452cc66e;
          if (bVar16 != 0x2f) {
            if ((bVar16 != 0x3d) || ((char)uVar10 == '\0')) goto LAB_1452cc61f;
            uVar10 = 0;
            goto LAB_1452cc66e;
          }
          if (bVar1 != 0) goto LAB_1452cc66e;
LAB_1452cc61f:
          local_res8 = 0x25;
          uVar15 = 3;
          cStackX_9 = "0123456789abcdef"[bVar16 >> 4];
          cStackX_a = "0123456789abcdef"[bVar16 & 0xf];
          pbVar11 = &local_res8;
        }
        iVar6 = thunk_FUN_144f07eb0(local_80,pbVar11,uVar15);
        if (iVar6 != 0) {
          return 7;
        }
        pbVar11 = param_3 + 1;
        param_3 = param_3 + 1;
        bVar16 = *pbVar11;
      }
    }
    lVar9 = FUN_144f07e80(local_80);
    if (local_94 != '\0') {
      lVar3 = param_1[8];
      if (lVar3 == 0) {
        lVar13 = 0;
        bVar4 = false;
      }
      else {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (*(char *)(lVar3 + lVar13) != '\0');
        if ((lVar13 == 0) || (*(char *)(lVar3 + -1 + lVar13) == '&')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      if (lVar13 != 0) {
        FUN_144f07cf0(local_60,8000000);
        iVar6 = thunk_FUN_144f07eb0(local_60,param_1[8],lVar13);
        if ((iVar6 == 0) &&
           (((!bVar4 || (iVar6 = thunk_FUN_144f07eb0(local_60,&DAT_149993038,1), iVar6 == 0)) &&
            (iVar6 = FUN_144f07d50(local_60,lVar9), iVar6 == 0)))) {
          FUN_144f07d10(local_80);
          (*(code *)PTR_free_14c6d9f28)(*plVar12);
          lVar17 = FUN_144f07e80(local_60);
          *plVar12 = lVar17;
          return 0;
        }
        FUN_144f07d10(local_80);
        return 7;
      }
    }
    if (local_res10 == 5) {
      do {
        lVar17 = lVar17 + 1;
      } while (*(char *)(lVar9 + lVar17) != '\0');
      if (lVar17 == 0) {
        if ((param_4 & 0x400) == 0) {
LAB_1452cc867:
          FUN_144f07d10(local_80);
          return 0x15;
        }
      }
      else {
        iVar6 = FUN_1452cd120(param_1,lVar9,lVar17);
        if (iVar6 != 0) goto LAB_1452cc867;
      }
    }
    (*(code *)PTR_free_14c6d9f28)(*plVar12);
    *plVar12 = lVar9;
    if (local_90 != 0) {
      *(long *)(param_1 + 10) = local_90;
    }
    return 0;
  }
  switch(param_2) {
  case 0:
    goto switchD_1452cc352_caseD_0;
  case 1:
    plVar12 = param_1;
    goto LAB_1452cc3a2;
  case 2:
    lVar17 = 8;
    break;
  case 3:
    lVar17 = 0x10;
    break;
  case 4:
    lVar17 = 0x18;
    break;
  case 5:
    lVar17 = 0x20;
    break;
  case 6:
    *(undefined4 *)(param_1 + 10) = 0;
    lVar17 = 0x30;
    break;
  case 7:
    lVar17 = 0x38;
    break;
  case 8:
    lVar17 = 0x40;
    break;
  case 9:
    lVar17 = 0x48;
    break;
  case 10:
    lVar17 = 0x28;
    break;
  default:
LAB_1452cc910:
    return 9;
  }
  plVar12 = (longlong *)(lVar17 + (longlong)param_1);
  if ((longlong *)(lVar17 + (longlong)param_1) == (longlong *)0x0) {
switchD_1452cc352_caseD_0:
    FUN_1452ccb40(param_1);
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
  }
  else {
LAB_1452cc3a2:
    if (*plVar12 != 0) {
      (*(code *)PTR_free_14c6d9f28)();
      *plVar12 = 0;
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1452cc990 FUN_1452cc990 body=251 status=ok
// SIG undefined FUN_1452cc990(void)

longlong FUN_1452cc990(char *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (((param_4 == '\0') ||
      (((0x19 < (byte)(*param_1 + 0x9fU) && (0x19 < (byte)(*param_1 + 0xbfU))) ||
       (param_1[1] != ':')))) &&
     (((byte)(*param_1 + 0x9fU) < 0x1a || ((byte)(*param_1 + 0xbfU) < 0x1a)))) {
    iVar7 = 1;
    lVar4 = 1;
    do {
      uVar3 = (byte)param_1[lVar4] - 0x2b;
      if (((0x2f < (byte)uVar3) || ((0xffffffc07fedU >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) &&
         (0x19 < (byte)(param_1[lVar4] + 0x9fU))) break;
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < 0x28);
    if (((iVar7 != 0) && (lVar4 = (longlong)iVar7, param_1[lVar4] == ':')) &&
       ((param_1[lVar4 + 1] == '/' || (param_4 == '\0')))) {
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = param_2 + lVar4;
        *puVar5 = 0;
        lVar6 = lVar4;
        do {
          puVar1 = puVar5 + (longlong)(param_1 + (-1 - (longlong)param_2));
          puVar5 = puVar5 + -1;
          uVar2 = FUN_144f19640(*puVar1);
          *puVar5 = uVar2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 1452cca90 FUN_1452cca90 body=167 status=ok
// SIG undefined FUN_1452cca90(void)

int FUN_1452cca90(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  FUN_144f07cf0(local_28,8000000);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  iVar1 = FUN_1452cd3a0(param_1,param_2,lVar2,param_3,local_28,*param_1 != 0);
  if (iVar1 != 0) {
    FUN_144f07d10(local_28);
    return iVar1;
  }
  (*(code *)PTR_free_14c6d9f28)(param_1[4]);
  lVar2 = FUN_144f07e80(local_28);
  param_1[4] = lVar2;
  return 0;
}



// FUNCTION 1452ccb40 FUN_1452ccb40 body=114 status=ok
// SIG undefined FUN_1452ccb40(void)

void FUN_1452ccb40(undefined8 *param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  (*(code *)PTR_free_14c6d9f28)(param_1[1]);
  (*(code *)PTR_free_14c6d9f28)(param_1[2]);
  (*(code *)PTR_free_14c6d9f28)(param_1[3]);
  (*(code *)PTR_free_14c6d9f28)(param_1[4]);
  (*(code *)PTR_free_14c6d9f28)(param_1[5]);
  (*(code *)PTR_free_14c6d9f28)(param_1[6]);
  (*(code *)PTR_free_14c6d9f28)(param_1[7]);
  (*(code *)PTR_free_14c6d9f28)(param_1[8]);
                    /* WARNING: Could not recover jumptable at 0x0001452ccbab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(param_1[9]);
  return;
}



// FUNCTION 1452ccbc0 FUN_1452ccbc0 body=408 status=ok
// SIG undefined FUN_1452ccbc0(void)

undefined8
FUN_1452ccbc0(undefined8 param_1,byte *param_2,longlong param_3,char param_4,undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  
  bVar9 = (byte)param_5 == 0;
  pbVar5 = param_2;
  if (param_4 == '\0') {
    pcVar4 = strstr((char *)param_2,"//");
    pbVar6 = param_2;
    if (pcVar4 != (char *)0x0) {
      pbVar6 = (byte *)(pcVar4 + 2);
    }
    pbVar5 = (byte *)strchr((char *)pbVar6,0x3f);
    pbVar6 = (byte *)strchr((char *)pbVar6,0x2f);
    if (pbVar6 == (byte *)0x0) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      pbVar6 = param_2 + lVar7;
    }
    if (pbVar5 == (byte *)0x0) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      pbVar5 = param_2 + lVar7;
    }
    if (pbVar6 < pbVar5) {
      pbVar5 = pbVar6;
    }
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    pbVar6 = param_2;
    bVar2 = bVar9;
    if (param_2 < pbVar5) {
      uVar8 = 1;
    }
    else {
      bVar1 = *param_2;
      if (bVar1 == 0x20) {
        if (bVar9) {
          uVar8 = 3;
          pbVar6 = &DAT_149d29a8c;
        }
        else {
          uVar8 = 1;
          pbVar6 = &DAT_149d29a90;
        }
      }
      else {
        bVar2 = false;
        if (bVar1 != 0x3f) {
          bVar2 = bVar9;
        }
        if (((char)bVar1 < '\0') || (bVar1 == 0x20)) {
          param_5._0_1_ = 0x25;
          uVar8 = 3;
          pbVar6 = (byte *)&param_5;
          param_5._1_2_ = CONCAT11("0123456789abcdef"[bVar1 & 0xf],"0123456789abcdef"[bVar1 >> 4]);
        }
        else {
          uVar8 = 1;
        }
      }
    }
    iVar3 = thunk_FUN_144f07eb0(param_1,pbVar6,uVar8);
    if (iVar3 != 0) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    bVar9 = bVar2;
  }
  return 7;
}



// FUNCTION 1452ccd60 FUN_1452ccd60 body=508 status=ok
// SIG undefined FUN_1452ccd60(void)

undefined8 FUN_1452ccd60(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *_Str;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_28 [32];
  
  pcVar3 = strstr(param_1,"//");
  _Str = param_1;
  if (pcVar3 != (char *)0x0) {
    _Str = pcVar3 + 2;
  }
  if (*param_2 == '/') {
    if (param_2[1] == '/') {
      param_2 = param_2 + 2;
      *_Str = '\0';
      uVar6 = 0;
    }
    else {
      pcVar3 = strchr(_Str,0x2f);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = strchr(_Str,0x3f);
        uVar6 = 1;
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      else {
        pcVar4 = strchr(_Str,0x3f);
        if ((pcVar4 != (char *)0x0) && (pcVar4 < pcVar3)) {
          pcVar3 = pcVar4;
        }
        *pcVar3 = '\0';
        uVar6 = 1;
      }
    }
  }
  else {
    pcVar3 = (char *)0x0;
    pcVar4 = strchr(_Str,0x3f);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    if ((*param_2 != '?') && (pcVar4 = strrchr(_Str,0x2f), pcVar4 != (char *)0x0)) {
      *pcVar4 = '\0';
    }
    pcVar4 = strchr(_Str,0x2f);
    _Str = pcVar4 + 1;
    if (pcVar4 == (char *)0x0) {
      _Str = pcVar3;
    }
    if (*param_2 == '.') {
      if (param_2[1] != '/') goto LAB_1452cce03;
      param_2 = param_2 + 2;
      cVar1 = *param_2;
      while (cVar1 == '.') {
LAB_1452cce03:
        if ((param_2[1] != '.') || (param_2[2] != '/')) break;
        param_2 = param_2 + 3;
        pcVar3 = (char *)(ulonglong)((int)pcVar3 + 1);
        cVar1 = *param_2;
      }
    }
    if ((_Str == (char *)0x0) || ((int)pcVar3 == 0)) {
LAB_1452cce53:
      uVar6 = 1;
    }
    else {
      do {
        uVar7 = (int)pcVar3 - 1;
        pcVar3 = (char *)(ulonglong)uVar7;
        pcVar4 = strrchr(_Str,0x2f);
        if (pcVar4 == (char *)0x0) {
          *_Str = '\0';
          goto LAB_1452cce53;
        }
        *pcVar4 = '\0';
      } while (uVar7 != 0);
      uVar6 = 1;
    }
  }
  FUN_144f07cf0(local_28,8000000);
  iVar2 = FUN_144f07d50(local_28,param_1);
  if ((iVar2 == 0) &&
     (((*param_2 == '/' || (((_Str != (char *)0x0 && (*_Str == '\0')) || (*param_2 == '?')))) ||
      (iVar2 = thunk_FUN_144f07eb0(local_28,&DAT_149981d20,1), iVar2 == 0)))) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != '\0');
    FUN_1452ccbc0(local_28,param_2,lVar8,uVar6,0);
    uVar5 = FUN_144f07e80(local_28);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1452ccf60 FUN_1452ccf60 body=421 status=ok
// SIG undefined FUN_1452ccf60(void)

void FUN_1452ccf60(longlong param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar9;
  uint uVar10;
  char *_Str;
  undefined1 auStack_a8 [32];
  char local_88 [16];
  char local_78 [48];
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 < 4) goto LAB_1452cd0f3;
  _Str = (char *)(param_2 + 1);
  sVar3 = strspn(_Str,"0123456789abcdefABCDEF:.");
  uVar5 = param_3 - 2;
  if (param_3 - 2 != sVar3) {
    pcVar6 = _Str + sVar3;
    if (_Str[sVar3] != '%') goto LAB_1452cd0f3;
    uVar5 = 0;
    pcVar9 = pcVar6 + 1;
    iVar2 = strncmp(pcVar6 + 1,"25",2);
    if (iVar2 == 0) {
      if ((pcVar6[3] != '\0') && (pcVar6[3] != ']')) {
        pcVar9 = pcVar6 + 3;
      }
    }
    cVar1 = *pcVar9;
    uVar7 = uVar5;
    if (cVar1 == '\0') goto LAB_1452cd0f3;
    do {
      uVar10 = (uint)uVar7;
      if ((cVar1 == ']') || (0xe < (longlong)uVar5)) break;
      pcVar9 = pcVar9 + 1;
      local_88[uVar5] = cVar1;
      uVar10 = uVar10 + 1;
      uVar5 = uVar5 + 1;
      cVar1 = *pcVar9;
      uVar7 = (ulonglong)uVar10;
    } while (cVar1 != '\0');
    if ((uVar10 == 0) || (*pcVar9 != ']')) goto LAB_1452cd0f3;
    if (0xf < (ulonglong)(longlong)(int)uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_88[(int)uVar10] = '\0';
    lVar4 = (*(code *)PTR__strdup_14c6d9f38)(local_88);
    *(longlong *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) goto LAB_1452cd0f3;
    pcVar6[0] = ']';
    pcVar6[1] = '\0';
    uVar5 = sVar3;
  }
  _Str[uVar5] = '\0';
  iVar2 = inet_pton(0x17,_Str,local_88);
  if (iVar2 == 1) {
    lVar4 = inet_ntop(0x17,local_88,local_78,0x2e);
    if (lVar4 != 0) {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
      } while (local_78[uVar8 + 1] != '\0');
      if (uVar7 < uVar5) {
        pcVar6 = local_78;
        do {
          cVar1 = *pcVar6;
          pcVar6[(longlong)_Str - (longlong)local_78] = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        _Str[uVar8 + 2] = '\0';
        uVar5 = uVar7;
      }
    }
    _Str[uVar5] = ']';
  }
LAB_1452cd0f3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452cd120 FUN_1452cd120 body=79 status=ok
// SIG undefined FUN_1452cd120(void)

undefined8 FUN_1452cd120(undefined8 param_1,char *param_2,size_t param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  
  if (param_3 == 0) {
    return 0xe;
  }
  if (*param_2 == '[') {
    uVar1 = FUN_1452ccf60();
    return uVar1;
  }
  sVar2 = strcspn(param_2," \r\n\t/:#?!@{}[]\\$\'\"^`*<>=;,+&()%");
  uVar1 = 0;
  if (param_3 != sVar2) {
    uVar1 = 0x15;
  }
  return uVar1;
}



// FUNCTION 1452cd170 FUN_1452cd170 body=532 status=ok
// SIG undefined FUN_1452cd170(void)

void FUN_1452cd170(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char *_Str;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = false;
  uVar8 = 0;
  _Str = (char *)FUN_144f07e80();
  local_30 = 0;
  local_28 = 0;
  uVar9 = uVar8;
  if (*_Str == '[') goto LAB_1452cd377;
  do {
    if (9 < (byte)(*_Str - 0x30U)) goto LAB_1452cd377;
    uVar5 = strtoul(_Str,&local_38,0);
    *(ulong *)((longlong)&local_30 + uVar9 * 4) = uVar5;
    if (*local_38 == '\0') {
      bVar1 = true;
      _Str = local_38;
    }
    else {
      if ((*local_38 != '.') || (uVar9 == 3)) goto LAB_1452cd377;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar9 = uVar9 + 1;
      _Str = local_38 + 1;
    }
    if ((uVar5 == 0xffffffff) && (piVar6 = _errno(), *piVar6 == 0x22)) goto LAB_1452cd377;
    uVar10 = local_30;
  } while (!bVar1);
  iVar7 = (int)uVar8;
  if (iVar7 == 0) {
    FUN_144f07dc0(param_1);
    uVar2 = (uint)local_30;
    local_48 = (uint)local_30._1_1_;
    uVar9 = local_30 >> 0x10 & 0xff;
    local_40 = uVar2 & 0xff;
    uVar10 = (ulonglong)(uVar2 >> 0x18);
  }
  else {
    uVar2 = local_30._4_4_;
    if (iVar7 == 1) {
      if ((0xff < (uint)local_30) || (0xffffff < local_30._4_4_)) goto LAB_1452cd377;
      FUN_144f07dc0(param_1);
      local_48 = (uint)local_30._5_1_;
      uVar10 = uVar10 & 0xffffffff;
      uVar9 = local_30 >> 0x30 & 0xff;
      local_40 = uVar2 & 0xff;
    }
    else {
      uVar3 = (uint)local_28;
      if (iVar7 == 2) {
        if (((0xff < (uint)local_30) || (0xff < local_30._4_4_)) || (0xffff < (uint)local_28))
        goto LAB_1452cd377;
        FUN_144f07dc0(param_1);
        local_48 = (uint)local_28._1_1_;
        uVar9 = (ulonglong)uVar2;
        local_40 = uVar3 & 0xff;
        uVar10 = uVar10 & 0xffffffff;
      }
      else {
        if ((((iVar7 != 3) || (0xff < (uint)local_30)) || (0xff < local_30._4_4_)) ||
           ((0xff < (uint)local_28 || (uVar4 = local_28._4_4_, 0xff < local_28._4_4_))))
        goto LAB_1452cd377;
        FUN_144f07dc0(param_1);
        local_40 = uVar4;
        uVar9 = (ulonglong)uVar2;
        local_48 = uVar3;
        uVar10 = uVar10 & 0xffffffff;
      }
    }
  }
  FUN_144f07d70(param_1,"%u.%u.%u.%u",uVar10,uVar9);
LAB_1452cd377:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1452cd3a0 FUN_1452cd3a0 body=895 status=ok
// SIG undefined FUN_1452cd3a0(void)

ulonglong FUN_1452cd3a0(longlong *param_1,void *param_2,size_t param_3,uint param_4,
                       undefined8 param_5,char param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong local_38;
  longlong local_30;
  char *local_28 [2];
  
  uVar11 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28[0] = (char *)0x0;
  pvVar4 = memchr(param_2,0x40,param_3);
  uVar13 = uVar11;
  if (pvVar4 == (void *)0x0) {
LAB_1452cd44c:
    (*(code *)PTR_free_14c6d9f28)(uVar13);
    (*(code *)PTR_free_14c6d9f28)(local_30);
    (*(code *)PTR_free_14c6d9f28)(local_28[0]);
    lVar5 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((int)uVar11 != 0) {
      return uVar11;
    }
  }
  else {
    if (((*param_1 == 0) || (lVar5 = FUN_144f0f160(*param_1,0xffffffffffffffff), lVar5 == 0)) ||
       ((*(uint *)(lVar5 + 0x8c) & 0x400) == 0)) {
      ppcVar6 = (char **)0x0;
    }
    else {
      ppcVar6 = local_28;
    }
    lVar5 = (longlong)pvVar4 + (1 - (longlong)param_2);
    iVar1 = FUN_144f0ef50(param_2,lVar5 + -1,&local_38,&local_30,ppcVar6);
    uVar13 = local_38;
    if (iVar1 != 0) {
      uVar11 = 0x17;
      goto LAB_1452cd44c;
    }
    if (local_38 != 0) {
      if ((param_4 & 0x20) != 0) {
        uVar11 = 8;
        goto LAB_1452cd44c;
      }
      (*(code *)PTR_free_14c6d9f28)(param_1[1]);
      param_1[1] = local_38;
    }
    if (local_30 != 0) {
      (*(code *)PTR_free_14c6d9f28)(param_1[2]);
      param_1[2] = local_30;
    }
    if (local_28[0] != (char *)0x0) {
      (*(code *)PTR_free_14c6d9f28)(param_1[3]);
      param_1[3] = (longlong)local_28[0];
    }
  }
  iVar1 = thunk_FUN_144f07eb0(param_5,lVar5 + (longlong)param_2,param_3 - lVar5);
  if (iVar1 != 0) {
    return 7;
  }
  pcVar7 = (char *)FUN_144f07e80(param_5);
  if (*pcVar7 == '[') {
    pcVar8 = strchr(pcVar7,0x5d);
    if (pcVar8 == (char *)0x0) {
      return 0x16;
    }
    pcVar12 = pcVar8 + 1;
    if (pcVar8[1] == '\0') goto LAB_1452cd5fc;
    if (pcVar8[1] != ':') {
      return 4;
    }
  }
  else {
    pcVar12 = strchr(pcVar7,0x3a);
  }
  if (pcVar12 != (char *)0x0) {
    FUN_144f07e60(param_5,(longlong)pcVar12 - (longlong)pcVar7);
    if (pcVar12[1] == '\0') {
      if (param_6 == '\0') {
        return 4;
      }
    }
    else {
      if (((9 < (byte)(pcVar12[1] - 0x30U)) ||
          (lVar2 = strtol(pcVar12 + 1,local_28,10), 0xffff < lVar2)) || (*local_28[0] != '\0')) {
        return 4;
      }
      *(long *)(param_1 + 10) = lVar2;
      (*(code *)PTR_free_14c6d9f28)(param_1[6]);
      lVar5 = FUN_144f2b8b0(&DAT_149c09ed8,lVar2);
      param_1[6] = lVar5;
      if (lVar5 == 0) {
        return 7;
      }
    }
  }
LAB_1452cd5fc:
  lVar5 = FUN_144f07ea0(param_5);
  if (lVar5 == 0) {
    return 0xe;
  }
  iVar1 = FUN_1452cd170(param_5);
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      return 7;
    }
    if (iVar1 == 1) {
      pcVar7 = (char *)FUN_144f07e80(param_5);
      pcVar8 = strchr(pcVar7,0x25);
      if (pcVar8 != (char *)0x0) {
        iVar1 = FUN_1452ce930(pcVar7,0,local_28,&local_30,3);
        if (iVar1 != 0) {
          return 0x15;
        }
        FUN_144f07dc0(param_5);
        iVar1 = thunk_FUN_144f07eb0(param_5,local_28[0],local_30);
        (*(code *)PTR_free_14c6d9f28)(local_28[0]);
        if (iVar1 != 0) {
          return 7;
        }
      }
      uVar9 = FUN_144f07ea0(param_5);
      uVar10 = FUN_144f07e80(param_5);
      uVar3 = FUN_1452cd120(param_1,uVar10,uVar9);
      return (ulonglong)uVar3;
    }
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 3) {
      uVar9 = FUN_144f07ea0(param_5);
      uVar10 = FUN_144f07e80(param_5);
      uVar3 = FUN_1452ccf60(param_1,uVar10,uVar9);
      return (ulonglong)uVar3;
    }
  }
  return 0x15;
}



// FUNCTION 1452cd720 FUN_1452cd720 body=646 status=ok
// SIG undefined FUN_1452cd720(void)

undefined4 FUN_1452cd720(char *param_1,ulonglong param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  
  pcVar1 = param_1 + param_2;
  *param_3 = 0;
  if ((param_2 < 2) || (pvVar4 = memchr(param_1,0x2e,param_2), pvVar4 == (void *)0x0)) {
    return 0;
  }
  pcVar5 = (char *)(*(code *)PTR_malloc_14c6d9f20)(param_2 + 1);
  if (pcVar5 == (char *)0x0) {
    return 1;
  }
  *pcVar5 = '\0';
  pcVar8 = pcVar5;
  do {
    if (*param_1 == '.') {
      iVar3 = strncmp("./",param_1,2);
      if (iVar3 == 0) {
        param_1 = param_1 + 2;
      }
      else {
        iVar3 = strncmp("../",param_1,3);
        if (iVar3 != 0) {
          if (((*param_1 == '.') &&
              ((param_1[1] == '\0' ||
               (((*param_1 == '.' && (param_1[1] == '.')) && (param_1[2] == '\0')))))) ||
             ((iVar3 = strncmp(".?",param_1,2), iVar3 == 0 ||
              (iVar3 = strncmp("..?",param_1,3), iVar3 == 0)))) {
            *pcVar5 = '\0';
            *param_3 = pcVar5;
            return 0;
          }
          goto LAB_1452cd95b;
        }
        param_1 = param_1 + 3;
      }
    }
    else {
      if (*param_1 == '/') {
        iVar3 = strncmp("/./",param_1,3);
        if (iVar3 == 0) {
          param_1 = param_1 + 2;
          goto LAB_1452cd97a;
        }
        if ((((*param_1 == '/') && (param_1[1] == '.')) && (param_1[2] == '\0')) ||
           (iVar3 = strncmp("/.?",param_1,3), iVar3 == 0)) goto LAB_1452cd92d;
        iVar3 = strncmp("/../",param_1,4);
        lVar6 = 0;
        if (iVar3 != 0) {
          while (lVar7 = lVar6 + 1, (&DAT_149d29ad4)[lVar6] == param_1[lVar6]) {
            lVar6 = lVar7;
            if (lVar7 == 4) goto joined_r0x0001452cd919;
          }
          iVar3 = strncmp("/..?",param_1,4);
          if (iVar3 != 0) goto LAB_1452cd95b;
          break;
        }
        param_1 = param_1 + 3;
        do {
          if (pcVar8 <= pcVar5) break;
          pcVar8 = pcVar8 + -1;
        } while (*pcVar8 != '/');
      }
      else {
LAB_1452cd95b:
        cVar2 = *param_1;
        do {
          param_1 = param_1 + 1;
          *pcVar8 = cVar2;
          pcVar8 = pcVar8 + 1;
          cVar2 = *param_1;
          if ((cVar2 == '\0') || (cVar2 == '/')) break;
        } while (cVar2 != '?');
      }
      *pcVar8 = '\0';
    }
LAB_1452cd97a:
    if (pcVar1 <= param_1) {
      *param_3 = pcVar5;
      return 0;
    }
  } while( true );
  while (pcVar8 = pcVar8 + -1, *pcVar8 != '/') {
joined_r0x0001452cd919:
    if (pcVar8 <= pcVar5) break;
  }
LAB_1452cd92d:
  pcVar8[0] = '/';
  pcVar8[1] = '\0';
  *param_3 = pcVar5;
  return 0;
}



// FUNCTION 1452cd9b0 FUN_1452cd9b0 body=2041 status=ok
// SIG undefined FUN_1452cd9b0(void)

void FUN_1452cd9b0(char *param_1,longlong *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  size_t sVar6;
  undefined8 uVar7;
  void *pvVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  char *pcVar12;
  char cVar13;
  char cVar14;
  longlong lVar15;
  char *pcVar16;
  char *pcVar17;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_e0;
  uint local_d8;
  char *local_d0;
  char *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [31];
  char acStack_71 [49];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = param_3;
  local_b8 = param_2;
  FUN_144f07cf0(local_90,8000000);
  pcVar16 = (char *)0xffffffffffffffff;
  do {
    pcVar12 = pcVar16;
    pcVar16 = pcVar12 + 1;
  } while (param_1[(longlong)pcVar16] != '\0');
  if ((((char *)0x7a1200 < pcVar16) ||
      (pcVar4 = (char *)strcspn(param_1,
                                "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x7f"
                               ), pcVar4 != pcVar16)) ||
     (((param_3 >> 0xb & 1) == 0 && (pcVar4 = strchr(param_1,0x20), pcVar4 != (char *)0x0))))
  goto LAB_1452ce171;
  pcVar4 = (char *)0x0;
  acStack_71[1] = 0;
  uVar11 = 0;
  cVar13 = '\0';
  local_d0 = pcVar16;
  if (((param_3 & 0x204) != 0) &&
     ((((byte)(*param_1 + 0x9fU) < 0x1a || ((byte)(*param_1 + 0xbfU) < 0x1a)) && (param_1[1] == ':')
      ))) {
LAB_1452cdaa6:
    local_c0 = 0;
    pcVar16 = "https";
    if ((param_3 & 4) == 0) {
      pcVar16 = pcVar4;
    }
    pcVar17 = param_1;
    if (pcVar16 != (char *)0x0) goto LAB_1452cdabc;
    goto LAB_1452cdad2;
  }
  if ((0x19 < (byte)(*param_1 + 0x9fU)) && (0x19 < (byte)(*param_1 + 0xbfU))) {
LAB_1452cde53:
    local_c0 = 0;
    if ((param_3 & 0x204) != 0) goto LAB_1452cdaa6;
    goto LAB_1452ce171;
  }
  iVar2 = 1;
  lVar5 = 1;
  do {
    uVar3 = (byte)param_1[lVar5] - 0x2b;
    if (((0x2f < (byte)uVar3) || ((0xffffffc07fedU >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) &&
       (0x19 < (byte)(param_1[lVar5] + 0x9fU))) break;
    iVar2 = iVar2 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 0x28);
  if (((iVar2 == 0) || (local_c0 = (longlong)iVar2, param_1[local_c0] != ':')) ||
     ((param_1[local_c0 + 1] != '/' && ((param_3 & 0x204) != 0)))) goto LAB_1452cde53;
  acStack_71[local_c0 + 1] = '\0';
  lVar5 = local_c0;
  do {
    lVar15 = lVar5 + -1;
    local_d0 = (char *)((ulonglong)local_d0 & 0xffffffff00000000);
    local_c8 = pcVar16;
    cVar1 = FUN_144f19640((acStack_71 + lVar5)[(longlong)param_1 - (longlong)(acStack_71 + 1)]);
    acStack_71[lVar5] = cVar1;
    lVar5 = lVar15;
  } while (lVar15 != 0);
  pcVar17 = pcVar4;
  do {
    pcVar9 = pcVar17 + 1;
    if ((acStack_71 + 1)[(longlong)pcVar17] != pcVar17[0x14997dd50]) {
      pcVar17 = param_1 + local_c0 + 1;
      if (*pcVar17 == '/') goto LAB_1452cde01;
      goto LAB_1452cde11;
    }
    pcVar17 = pcVar9;
  } while (pcVar9 != (char *)0x5);
  if (pcVar16 < &DAT_00000007) goto LAB_1452ce171;
  pcVar9 = param_1 + 5;
  pcVar12 = pcVar12 + -4;
  local_c8 = pcVar9;
  lVar5 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14997dd50);
  param_2 = local_b8;
  *local_b8 = lVar5;
  if (lVar5 == 0) goto LAB_1452ce171;
  if ((*pcVar9 == '/') && (param_1[6] == '/')) {
    cVar1 = param_1[7];
    pcVar9 = param_1 + 7;
    cVar14 = '\0';
    if ((cVar1 != '/') &&
       ((((0x19 < (byte)(cVar1 + 0x9fU) && (0x19 < (byte)(cVar1 + 0xbfU))) ||
         ((param_1[8] != ':' && (param_1[8] != '|')))) ||
        (((cVar1 = param_1[9], cVar14 = cVar13, cVar1 != '/' && (cVar1 != '\\')) && (cVar1 != '\0'))
        )))) {
      iVar2 = FUN_144f195b0(pcVar9,"localhost/",10);
      if ((iVar2 != 0) || (iVar2 = FUN_144f195b0(pcVar9,"127.0.0.1/",10), iVar2 != 0)) {
        pcVar9 = param_1 + 0x10;
        pcVar12 = param_1 + ((longlong)pcVar16 - (longlong)pcVar9);
        goto LAB_1452cdd84;
      }
      pcVar12 = strpbrk(pcVar9,"/\\:*?\"<>|");
      if ((pcVar12 == (char *)0x0) || (*pcVar12 != '/')) goto LAB_1452ce171;
      if ((longlong)pcVar12 - (longlong)pcVar9 != 0) {
        iVar2 = thunk_FUN_144f07eb0(local_90,pcVar9,(longlong)pcVar12 - (longlong)pcVar9);
        if (iVar2 != 0) goto LAB_1452ce171;
        pcVar4 = &DAT_00000001;
      }
      cVar14 = (char)pcVar4;
      pcVar9 = local_c8;
    }
    pcVar12 = param_1 + ((longlong)pcVar16 - (longlong)pcVar9);
    if (cVar14 == '\0') goto LAB_1452cdd84;
  }
  else {
LAB_1452cdd84:
    FUN_144f07dc0(local_90);
  }
  if ((((*pcVar9 == '/') &&
       (((byte)(pcVar9[1] + 0x9fU) < 0x1a || ((byte)(pcVar9[1] + 0xbfU) < 0x1a)))) &&
      ((pcVar9[2] == ':' || (pcVar9[2] == '|')))) &&
     (((cVar13 = pcVar9[3], cVar13 == '/' || (cVar13 == '\\')) || (cVar13 == '\0')))) {
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + -1;
  }
  goto LAB_1452cdf57;
  while( true ) {
    pcVar17 = pcVar17 + 1;
    uVar11 = uVar11 + 1;
    pcVar4 = (char *)(ulonglong)uVar11;
    if (*pcVar17 != '/') break;
LAB_1452cde01:
    uVar11 = (uint)pcVar4;
    if (3 < (int)uVar11) break;
  }
LAB_1452cde11:
  local_d0 = local_c8;
  pcVar16 = acStack_71 + 1;
  lVar5 = FUN_144f0f160(acStack_71 + 1,0xffffffffffffffff);
  if (((lVar5 == 0) && ((local_d8 & 8) == 0)) || (param_2 = local_b8, 2 < uVar11 - 1))
  goto LAB_1452ce171;
LAB_1452cdabc:
  lVar5 = (*(code *)PTR__strdup_14c6d9f38)(pcVar16);
  *param_2 = lVar5;
  if (lVar5 != 0) {
LAB_1452cdad2:
    sVar6 = strcspn(pcVar17,"/?#");
    uVar11 = local_d8;
    pcVar9 = pcVar17 + sVar6;
    pcVar12 = local_d0 + ((longlong)param_1 - (longlong)pcVar9);
    if (sVar6 == 0) {
      if (((local_d8 & 0x400) != 0) && (iVar2 = FUN_144f07d50(local_90,&DAT_14996de1b), iVar2 == 0))
      goto LAB_1452cdf57;
    }
    else {
      local_e0 = local_c0 != 0;
      local_e8 = local_90;
      iVar2 = FUN_1452cd3a0(param_2,pcVar17,sVar6,local_d8);
      if (iVar2 == 0) {
        if (((uVar11 >> 9 & 1) != 0) && (pcVar16 == (char *)0x0)) {
          uVar7 = FUN_144f07e80(local_90);
          iVar2 = FUN_144f195b0(uVar7,&DAT_149d29b00,4);
          if (iVar2 == 0) {
            iVar2 = FUN_144f195b0(uVar7,"dict.",5);
            if (iVar2 == 0) {
              iVar2 = FUN_144f195b0(uVar7,"ldap.",5);
              if (iVar2 == 0) {
                iVar2 = FUN_144f195b0(uVar7,"imap.",5);
                if (iVar2 == 0) {
                  iVar2 = FUN_144f195b0(uVar7,"smtp.",5);
                  if (iVar2 == 0) {
                    iVar2 = FUN_144f195b0(uVar7,"pop3.",5);
                    puVar10 = &DAT_14997dda0;
                    if (iVar2 == 0) {
                      puVar10 = &DAT_14997dd78;
                    }
                  }
                  else {
                    puVar10 = &DAT_14997ddc4;
                  }
                }
                else {
                  puVar10 = &DAT_14997dd88;
                }
              }
              else {
                puVar10 = &DAT_149d29b18;
              }
            }
            else {
              puVar10 = &DAT_14997dd48;
            }
          }
          else {
            puVar10 = &DAT_14997dd58;
          }
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)(puVar10);
          *param_2 = lVar5;
          if (lVar5 == 0) goto LAB_1452ce171;
        }
LAB_1452cdf57:
        pcVar16 = strchr(pcVar9,0x23);
        if (pcVar16 != (char *)0x0) {
          pcVar4 = pcVar9 + ((longlong)pcVar12 - (longlong)pcVar16);
          if (&DAT_00000001 < pcVar4) {
            if ((local_d8 & 0x80) == 0) {
              lVar5 = FUN_144f13940(pcVar16 + 1,pcVar4);
              param_2[9] = lVar5;
              if (lVar5 != 0) goto LAB_1452cdfd3;
            }
            else {
              FUN_144f07cf0(local_b0,8000000);
              local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
              iVar2 = FUN_1452ccbc0(local_b0,pcVar16 + 1,pcVar4,1);
              if (iVar2 == 0) {
                lVar5 = FUN_144f07e80(local_b0);
                param_2[9] = lVar5;
                goto LAB_1452cdfd3;
              }
            }
            goto LAB_1452ce171;
          }
LAB_1452cdfd3:
          pcVar12 = pcVar12 + -(longlong)pcVar4;
        }
        pvVar8 = memchr(pcVar9,0x3f,(size_t)pcVar12);
        uVar11 = local_d8;
        if (pvVar8 != (void *)0x0) {
          if (pcVar16 == (char *)0x0) {
            pcVar16 = pcVar9 + ((longlong)pcVar12 - (longlong)pvVar8);
          }
          else {
            pcVar16 = pcVar16 + -(longlong)pvVar8;
          }
          pcVar12 = pcVar12 + -(longlong)pcVar16;
          if (&DAT_00000001 < pcVar16) {
            if ((char)local_d8 < '\0') {
              FUN_144f07cf0(local_b0,8000000);
              local_e8 = (undefined1 *)CONCAT71(local_e8._1_7_,1);
              iVar2 = FUN_1452ccbc0(local_b0,(longlong)pvVar8 + 1,pcVar16 + -1,1);
              if (iVar2 == 0) {
                lVar5 = FUN_144f07e80(local_b0);
                param_2[8] = lVar5;
                goto LAB_1452ce094;
              }
            }
            else {
              lVar5 = FUN_144f13940((longlong)pvVar8 + 1,pcVar16);
              param_2[8] = lVar5;
              if (lVar5 != 0) {
                pcVar16[lVar5 + -1] = '\0';
                goto LAB_1452ce094;
              }
            }
            goto LAB_1452ce171;
          }
          lVar5 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
          param_2[8] = lVar5;
          uVar11 = local_d8;
          if (lVar5 == 0) goto LAB_1452ce171;
        }
LAB_1452ce094:
        if ((pcVar12 != (char *)0x0) && ((char)uVar11 < '\0')) {
          FUN_144f07cf0(local_b0,8000000);
          local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
          iVar2 = FUN_1452ccbc0(local_b0,pcVar9,pcVar12,1);
          if (iVar2 != 0) goto LAB_1452ce171;
          pcVar12 = (char *)FUN_144f07ea0(local_b0);
          pcVar9 = (char *)FUN_144f07e80(local_b0);
          param_2[7] = (longlong)pcVar9;
        }
        if (&DAT_00000001 < pcVar12) {
          if (param_2[7] == 0) {
            lVar5 = FUN_144f13940(pcVar9,pcVar12 + 1);
            param_2[7] = lVar5;
            if (lVar5 == 0) goto LAB_1452ce171;
            pcVar12[lVar5] = '\0';
            pcVar9 = (char *)param_2[7];
          }
          else if ((char)uVar11 < '\0') {
            pcVar12[param_2[7]] = '\0';
          }
          if ((uVar11 & 0x10) == 0) {
            iVar2 = FUN_1452cd720(pcVar9,pcVar12,&local_c8);
            pcVar16 = local_c8;
            if (iVar2 != 0) goto LAB_1452ce171;
            if (local_c8 != (char *)0x0) {
              (*(code *)PTR_free_14c6d9f28)(param_2[7]);
              param_2[7] = (longlong)pcVar16;
            }
          }
        }
        lVar5 = FUN_144f07e80(local_90);
        param_2[4] = lVar5;
        goto LAB_1452ce183;
      }
    }
  }
LAB_1452ce171:
  FUN_144f07d10(local_90);
  FUN_1452ccb40(local_b8);
LAB_1452ce183:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 1452ce1c0 FUN_1452ce1c0 body=149 status=ok
// SIG undefined FUN_1452ce1c0(void)

ulonglong FUN_1452ce1c0(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
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
  undefined8 local_18;
  
  local_68 = 0;
  uStack_60 = 0;
  local_18 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_1452cd9b0(0,&local_68);
  if ((int)uVar1 == 0) {
    FUN_1452ccb40(param_2);
    *param_2 = local_68;
    param_2[1] = uStack_60;
    param_2[2] = local_58;
    param_2[3] = uStack_50;
    param_2[4] = local_48;
    param_2[5] = uStack_40;
    param_2[6] = local_38;
    param_2[7] = uStack_30;
    param_2[8] = local_28;
    param_2[9] = uStack_20;
    param_2[10] = local_18;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1452ce260 FUN_1452ce260 body=272 status=ok
// SIG undefined FUN_1452ce260(void)

int FUN_1452ce260(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    iVar1 = FUN_1452ce370();
    return iVar1;
  }
  lVar2 = FUN_1452b8aa0(&DAT_149d29bb4);
  if ((lVar2 == 0) && (lVar2 = FUN_1452b8aa0("USERPROFILE"), lVar2 == 0)) {
    return 1;
  }
  lVar3 = FUN_144f2b8b0("%s%s.netrc",lVar2,&DAT_149d26c24);
  if (lVar3 == 0) {
LAB_1452ce33e:
    (*(code *)PTR_free_14c6d9f28)(lVar2);
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_1452ce370(param_1,param_2,param_3,lVar3);
    (*(code *)PTR_free_14c6d9f28)(lVar3);
    if (iVar1 == 1) {
      lVar3 = FUN_144f2b8b0("%s%s_netrc",lVar2,&DAT_149d26c24);
      if (lVar3 == 0) goto LAB_1452ce33e;
      iVar1 = FUN_1452ce370(param_1,param_2,param_3,lVar3);
      (*(code *)PTR_free_14c6d9f28)(lVar3);
    }
    (*(code *)PTR_free_14c6d9f28)(lVar2);
  }
  return iVar1;
}



// FUNCTION 1452ce370 FUN_1452ce370 body=1101 status=ok
// SIG undefined FUN_1452ce370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ce370(undefined8 param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char cVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  undefined1 auStack_10a8 [32];
  char local_1088;
  uint local_1084;
  int local_1080;
  char local_107c;
  FILE *local_1078;
  undefined8 local_1070;
  longlong *local_1068;
  longlong *local_1060;
  char local_1058;
  char local_1057 [4095];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1452ce387;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_10a8;
  pcVar9 = (char *)*param_2;
  pcVar10 = (char *)*param_3;
  local_1080 = 1;
  if ((pcVar9 == (char *)0x0) || (local_107c = '\x01', *pcVar9 == '\0')) {
    local_107c = '\0';
  }
  local_1084 = 1;
  local_1088 = '\0';
  bVar2 = false;
  iVar14 = 0;
  bVar3 = false;
  bVar4 = false;
  local_1070 = param_1;
  local_1068 = param_2;
  local_1060 = param_3;
  local_1078 = fopen(param_4,"rt");
  cVar12 = '\0';
  if (local_1078 != (FILE *)0x0) {
LAB_1452ce410:
    lVar8 = FUN_1452b1ba0(&local_1058,0x1000,local_1078);
    if (lVar8 != 0) {
      if (iVar14 == 3) goto code_r0x0001452ce430;
      goto LAB_1452ce444;
    }
LAB_1452ce787:
    plVar5 = local_1068;
    if (local_1080 == 0) {
      if (bVar2) {
        if (*local_1068 != 0) {
          (*(code *)PTR_free_14c6d9f28)();
        }
        *plVar5 = (longlong)pcVar9;
      }
      plVar5 = local_1060;
      if (cVar12 != '\0') {
        if (*local_1060 != 0) {
          (*(code *)PTR_free_14c6d9f28)();
        }
        *plVar5 = (longlong)pcVar10;
      }
    }
    else {
LAB_1452ce4e7:
      if (bVar2) {
        (*(code *)PTR_free_14c6d9f28)(pcVar9);
      }
      if (cVar12 != '\0') {
        (*(code *)PTR_free_14c6d9f28)(pcVar10);
      }
    }
    fclose(local_1078);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_10a8);
code_r0x0001452ce430:
  if ((local_1058 == '\n') || (local_1058 == '\r')) {
    iVar14 = 0;
LAB_1452ce444:
    pcVar13 = &local_1058;
    do {
      for (; (cVar6 = *pcVar13, cVar6 == ' ' || (cVar6 == '\t')); pcVar13 = pcVar13 + 1) {
      }
      cVar12 = local_1088;
      if ((cVar6 == '\0') || (cVar6 == '#')) break;
      pcVar15 = pcVar13;
      if (cVar6 == '\"') {
        cVar6 = pcVar13[1];
        bVar1 = false;
        pcVar11 = pcVar13;
joined_r0x0001452ce49c:
        if (cVar6 == '\0') {
          *pcVar11 = '\0';
          goto LAB_1452ce4e7;
        }
        if (bVar1) {
          if (cVar6 == 'n') {
            cVar6 = '\n';
          }
          else if (cVar6 == 'r') {
            cVar6 = '\r';
          }
          else if (cVar6 == 't') {
            cVar6 = '\t';
          }
LAB_1452ce4ca:
          bVar1 = false;
          *pcVar11 = cVar6;
          pcVar11 = pcVar11 + 1;
LAB_1452ce4cf:
          cVar6 = pcVar15[2];
          pcVar15 = pcVar15 + 1;
          goto joined_r0x0001452ce49c;
        }
        if (cVar6 == '\\') {
          bVar1 = true;
          goto LAB_1452ce4cf;
        }
        if (cVar6 != '\"') goto LAB_1452ce4ca;
        pcVar15 = pcVar15 + 2;
        *pcVar11 = '\0';
      }
      else {
        do {
          if ((byte)(cVar6 - 9U) < 5) break;
          cVar6 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        } while (cVar6 != ' ');
        *pcVar15 = '\0';
      }
      if ((((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) && (pcVar10 != (char *)0x0)) &&
         (*pcVar10 != '\0')) goto LAB_1452ce787;
      if (iVar14 == 0) {
        iVar7 = FUN_144f19540("macdef",pcVar13);
        if (iVar7 == 0) {
          iVar7 = FUN_144f19540("machine",pcVar13);
          if (iVar7 == 0) {
            iVar7 = FUN_144f19540("default",pcVar13);
            if (iVar7 != 0) {
              iVar14 = 2;
              local_1080 = 0;
            }
          }
          else {
            iVar14 = 1;
          }
        }
        else {
          iVar14 = 3;
        }
      }
      else if (iVar14 == 1) {
        iVar14 = FUN_144f19540(local_1070,pcVar13);
        if (iVar14 == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = 2;
          local_1080 = 0;
        }
      }
      else if (iVar14 == 2) {
        if (bVar3) {
          if (local_107c == '\0') {
            if ((pcVar9 == (char *)0x0) || (iVar7 = FUN_144f196f0(pcVar9,pcVar13), iVar7 != 0)) {
              if (bVar2) {
                (*(code *)PTR_free_14c6d9f28)(pcVar9);
                bVar2 = false;
              }
              pcVar9 = (char *)(*(code *)PTR__strdup_14c6d9f38)(pcVar13);
              cVar12 = local_1088;
              if (pcVar9 == (char *)0x0) goto LAB_1452ce4e7;
              bVar2 = true;
            }
          }
          else {
            iVar7 = FUN_144f196f0(pcVar9,pcVar13);
            local_1084 = (uint)(iVar7 == 0);
          }
          bVar3 = false;
        }
        else if (bVar4) {
          if (((local_1084 != 0) || (local_107c == '\0')) &&
             ((pcVar10 == (char *)0x0 || (iVar7 = FUN_144f196f0(pcVar10,pcVar13), iVar7 != 0)))) {
            if (local_1088 != '\0') {
              (*(code *)PTR_free_14c6d9f28)(pcVar10);
              local_1088 = '\0';
            }
            pcVar10 = (char *)(*(code *)PTR__strdup_14c6d9f38)(pcVar13);
            cVar12 = local_1088;
            if (pcVar10 == (char *)0x0) goto LAB_1452ce4e7;
            local_1088 = '\x01';
          }
          bVar4 = false;
        }
        else {
          iVar7 = FUN_144f19540("login",pcVar13);
          if (iVar7 == 0) {
            iVar7 = FUN_144f19540("password",pcVar13);
            if (iVar7 == 0) {
              iVar7 = FUN_144f19540("machine",pcVar13);
              if (iVar7 != 0) {
                iVar14 = 1;
                local_1084 = 0;
              }
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar3 = true;
          }
        }
      }
      else if (iVar14 == 3) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (pcVar13[lVar8] != '\0');
        if (lVar8 == 0) {
          iVar14 = 0;
        }
      }
      pcVar13 = pcVar15 + 1;
      cVar12 = local_1088;
    } while (pcVar13 != (char *)0x0);
  }
  goto LAB_1452ce410;
}



// FUNCTION 1452ce7e0 FUN_1452ce7e0 body=299 status=ok
// SIG undefined FUN_1452ce7e0(void)

void FUN_1452ce7e0(undefined8 param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  byte local_58 [4];
  byte local_54;
  char local_53;
  char cStack_52;
  undefined1 local_50 [32];
  char local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (longlong)param_3;
  if (-1 < param_3) {
    FUN_144f07cf0(local_50,24000000);
    if (param_3 == 0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_2[lVar3] != 0);
    }
    if (lVar3 == 0) {
      (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
    }
    else {
      do {
        local_58[0] = *param_2;
        param_2 = param_2 + 1;
        lVar3 = lVar3 + -1;
        if ((((local_58[0] < 0x30) || (0x39 < local_58[0])) && (0x19 < (byte)(local_58[0] + 0x9f)))
           && (((0x32 < (byte)(local_58[0] - 0x2d) ||
                ((0x43ffffff00003U >> ((ulonglong)(local_58[0] - 0x2d) & 0x3f) & 1) == 0)) &&
               (local_58[0] != 0x7e)))) {
          pbVar2 = &local_54;
          builtin_strncpy(local_30,"0123456789ABCDEF",0x11);
          uVar4 = 3;
          local_54 = 0x25;
          _local_53 = CONCAT11(local_30[local_58[0] & 0xf],local_30[local_58[0] >> 4]);
        }
        else {
          uVar4 = 1;
          pbVar2 = local_58;
        }
        iVar1 = thunk_FUN_144f07eb0(local_50,pbVar2,uVar4);
        if (iVar1 != 0) goto LAB_1452ce8fe;
      } while (lVar3 != 0);
      FUN_144f07e80(local_50);
    }
  }
LAB_1452ce8fe:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 1452ce930 FUN_1452ce930 body=323 status=ok
// SIG undefined FUN_1452ce930(void)

undefined4
FUN_1452ce930(byte *param_1,ulonglong param_2,longlong *param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    param_2 = 0xffffffffffffffff;
    do {
      param_2 = param_2 + 1;
    } while (param_1[param_2] != 0);
  }
  pbVar4 = (byte *)(*(code *)PTR_malloc_14c6d9f20)(param_2 + 1);
  if (pbVar4 == (byte *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    *param_3 = (longlong)pbVar4;
    while (param_2 != 0) {
      bVar6 = *param_1;
      if ((bVar6 == 0x25) && (2 < param_2)) {
        bVar1 = param_1[1];
        if ((9 < (byte)(bVar1 - 0x30)) && ((5 < (byte)(bVar1 + 0x9f) && (5 < (byte)(bVar1 + 0xbf))))
           ) goto LAB_1452ce9ff;
        bVar2 = param_1[2];
        if ((9 < (byte)(bVar2 - 0x30)) && ((5 < (byte)(bVar2 + 0x9f) && (5 < (byte)(bVar2 + 0xbf))))
           ) goto LAB_1452ce9ff;
        lVar5 = -3;
        bVar6 = "USERPROFILE"[(char)bVar1] << 4 | "USERPROFILE"[(char)bVar2];
        lVar7 = 3;
      }
      else {
LAB_1452ce9ff:
        lVar5 = -1;
        lVar7 = 1;
      }
      param_1 = param_1 + lVar7;
      param_2 = param_2 + lVar5;
      if (param_5 == 3) {
        if (bVar6 < 0x20) {
LAB_1452cea1c:
          (*(code *)PTR_free_14c6d9f28)(*param_3);
          *param_3 = 0;
          return 3;
        }
      }
      else if ((param_5 == 4) && (bVar6 == 0)) goto LAB_1452cea1c;
      *pbVar4 = bVar6;
      pbVar4 = pbVar4 + 1;
    }
    *pbVar4 = 0;
    if (param_4 != (longlong *)0x0) {
      *param_4 = (longlong)pbVar4 - *param_3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1452cea80 FUN_1452cea80 body=92 status=ok
// SIG undefined FUN_1452cea80(void)

void FUN_1452cea80(byte *param_1,longlong param_2,char *param_3,ulonglong param_4)

{
  byte bVar1;
  
  if (((param_1 == (byte *)0x0) || (param_2 == 0)) || (param_4 < 3)) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    while (param_2 = param_2 + -1, 2 < param_4) {
      param_4 = param_4 - 2;
      *param_3 = "0123456789abcdef"[*param_1 >> 4];
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3[1] = "0123456789abcdef"[bVar1 & 0xf];
      param_3 = param_3 + 2;
      if (param_2 == 0) {
        *param_3 = '\0';
        return;
      }
    }
  }
  *param_3 = '\0';
  return;
}



// FUNCTION 1452ceae0 FUN_1452ceae0 body=981 status=ok
// SIG undefined FUN_1452ceae0(void)

/* WARNING: Removing unreachable block (ram,0x0001452cee86) */

void FUN_1452ceae0(char *param_1,byte *param_2,undefined1 *param_3)

{
  ulonglong _Size;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong _Size_00;
  byte *pbVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_198 [32];
  int local_178 [2];
  int local_170 [2];
  byte local_168 [16];
  byte local_158 [16];
  char local_148 [128];
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_3 = 0;
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (byte *)0x0)) &&
     (*param_2 != 0)) {
    uVar9 = 0;
    iVar10 = 0;
    if ((*param_2 != 0x2a) || (param_2[1] != 0)) {
      if (*param_1 == '[') {
        pcVar4 = strchr(param_1,0x5d);
        if (pcVar4 == (char *)0x0) goto LAB_1452ceea5;
        _Size_00 = (longlong)pcVar4 - (longlong)(param_1 + 1);
        if (0x7f < _Size_00) goto LAB_1452ceea5;
        memcpy(local_c8,param_1 + 1,_Size_00);
        local_c8[_Size_00] = '\0';
        param_1 = local_c8;
        iVar10 = 2;
      }
      else {
        _Size_00 = 0xffffffffffffffff;
        do {
          uVar6 = _Size_00;
          _Size_00 = uVar6 + 1;
        } while (param_1[_Size_00] != '\0');
        iVar2 = inet_pton(2,param_1,local_170);
        if (iVar2 == 1) {
          iVar10 = 1;
        }
        else if (param_1[uVar6] == '.') {
          _Size_00 = uVar6;
        }
      }
      bVar5 = *param_2;
      while (bVar5 != 0) {
        do {
          if ((bVar5 != 0x20) && (bVar5 != 9)) break;
          bVar5 = param_2[1];
          param_2 = param_2 + 1;
        } while (bVar5 != 0);
        uVar6 = uVar9;
        pbVar8 = param_2;
        if (bVar5 != 0) {
          do {
            if ((bVar5 < 0x2d) && ((0x100100000200U >> ((longlong)(char)bVar5 & 0x3fU) & 1) != 0))
            break;
            bVar5 = pbVar8[1];
            pbVar8 = pbVar8 + 1;
            uVar6 = uVar6 + 1;
          } while (bVar5 != 0);
          if (uVar6 != 0) {
            if (iVar10 == 0) {
              if (((param_2[uVar6 - 1] != 0x2e) || (uVar6 = uVar6 - 1, uVar6 != 0)) &&
                 (*param_2 == 0x2e)) {
                param_2 = param_2 + 1;
                uVar6 = uVar6 - 1;
              }
              if (uVar6 == _Size_00) {
                iVar2 = FUN_144f195b0(param_2,param_1,_Size_00);
                bVar11 = iVar2 != 0;
              }
              else {
                if (_Size_00 <= uVar6) goto LAB_1452cee60;
                if (((param_1 + (_Size_00 - uVar6))[-1] == '.') &&
                   (iVar2 = FUN_144f195b0(param_2,param_1 + (_Size_00 - uVar6),uVar6), iVar2 != 0))
                {
                  bVar11 = true;
                }
                else {
                  bVar11 = false;
                }
              }
LAB_1452cee4e:
              bVar11 = !bVar11;
LAB_1452cee50:
              if (!bVar11) break;
            }
            else if (((iVar10 == 1) || (iVar10 == 2)) && (uVar6 < 0x80)) {
              memcpy(local_148,param_2,uVar6);
              local_148[uVar6] = '\0';
              pcVar4 = strchr(local_148,0x2f);
              uVar6 = uVar9;
              if (pcVar4 != (char *)0x0) {
                uVar1 = atoi(pcVar4 + 1);
                uVar6 = (ulonglong)uVar1;
                *pcVar4 = '\0';
              }
              if (iVar10 == 2) {
                if ((uint)uVar6 == 0) {
                  uVar6 = 0x80;
                }
                _Size = uVar6 >> 3;
                iVar2 = inet_pton(0x17,param_1,local_158);
                if ((iVar2 == 1) && (iVar2 = inet_pton(0x17,local_148,local_168), iVar2 == 1)) {
                  uVar1 = (uint)_Size;
                  if (((uVar1 < 0x11) && ((uVar1 != 0x10 || ((uVar6 & 7) == 0)))) &&
                     ((uVar7 = uVar9, uVar1 == 0 ||
                      (iVar2 = memcmp(local_158,local_168,_Size), uVar7 = _Size, iVar2 == 0)))) {
                    if ((uVar6 & 7) != 0) {
                      bVar11 = (0xff << (8 - ((byte)uVar6 & 7) & 0x1f) &
                               (uint)(local_168[uVar7] ^ local_158[uVar7])) == 0;
                      goto LAB_1452cee50;
                    }
                    break;
                  }
                }
              }
              else {
                local_170[0] = 0;
                local_178[0] = 0;
                if ((((uint)uVar6 < 0x21) && (iVar2 = inet_pton(2,param_1,local_170), iVar2 == 1))
                   && (iVar2 = inet_pton(2,local_148,local_178), iVar2 == 1)) {
                  if ((uVar6 & 0xffffffdf) == 0) {
                    bVar11 = local_170[0] == local_178[0];
                    goto LAB_1452cee4e;
                  }
                  uVar1 = Ordinal_8(local_170[0]);
                  uVar3 = Ordinal_8(local_178[0]);
                  if ((-1 << (0x20U - (char)uVar6 & 0x1f) & (uVar3 ^ uVar1)) == 0) break;
                }
              }
            }
          }
        }
LAB_1452cee60:
        for (; (bVar5 = *pbVar8, bVar5 == 0x20 || (bVar5 == 9)); pbVar8 = pbVar8 + 1) {
        }
        param_2 = pbVar8;
        if (bVar5 == 0) {
          bVar5 = 0;
        }
        else if (bVar5 == 0x2c) {
          do {
            bVar5 = pbVar8[1];
            pbVar8 = pbVar8 + 1;
            param_2 = pbVar8;
          } while (bVar5 == 0x2c);
        }
        else {
          *param_3 = 1;
          bVar5 = *pbVar8;
        }
      }
    }
  }
LAB_1452ceea5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
}



// FUNCTION 1452ceed0 FUN_1452ceed0 body=37 status=ok
// SIG undefined FUN_1452ceed0(void)

undefined8 FUN_1452ceed0(char *param_1)

{
  char cVar1;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      if (cVar1 < '\0') {
        return 0;
      }
      cVar1 = *param_1;
    }
  }
  return 1;
}



// FUNCTION 1452cef00 FUN_1452cef00 body=11 status=ok
// SIG undefined FUN_1452cef00(void)

undefined8 FUN_1452cef00(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return 0;
}



// FUNCTION 1452cef10 FUN_1452cef10 body=413 status=ok
// SIG undefined FUN_1452cef10(void)

int FUN_1452cef10(longlong param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 local_38 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar6 = 0x368;
  if (param_2 == '\0') {
    lVar6 = 0x350;
  }
  lVar4 = 0x34c;
  if (param_2 == '\0') {
    lVar4 = 0x348;
  }
  piVar5 = (int *)(lVar4 + lVar1);
  iVar2 = FUN_144f195b0(param_3,&DAT_14997de3c,4);
  if (iVar2 != 0) {
    cVar3 = *(char *)(param_3 + 4);
    param_3 = param_3 + 4;
    if (cVar3 != '\0') {
      do {
        if ((cVar3 != ' ') && (cVar3 != '\t')) {
          if (cVar3 < '\n') break;
          if ('\r' < cVar3) goto LAB_1452cefa7;
        }
        cVar3 = *(char *)(param_3 + 1);
        param_3 = param_3 + 1;
      } while (cVar3 != '\0');
      if (cVar3 != '\0') {
LAB_1452cefa7:
        iVar2 = FUN_1452b8bb0(param_3,&local_res20,&local_res8);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_14550c7b0(local_38);
        FUN_14550c7c0(local_38,local_res20,local_res8,&DAT_1452ce920);
        iVar2 = FUN_1452db9f0(param_1,local_38,lVar6 + lVar1);
        FUN_14550c8d0(local_38);
        if (iVar2 == 0) {
          *piVar5 = 2;
          return 0;
        }
        return iVar2;
      }
    }
    iVar2 = *piVar5;
    if (iVar2 == 4) {
      FUN_144f14ad0(param_1,"NTLM auth restarted");
      FUN_1452dc200(lVar1 + 0x350);
      FUN_1452dc200(lVar1 + 0x368);
    }
    else {
      if (iVar2 == 3) {
        FUN_144f14ad0(param_1,"NTLM handshake rejected");
        FUN_1452dc200(lVar1 + 0x350);
        FUN_1452dc200(lVar1 + 0x368);
        *piVar5 = 0;
        return 9;
      }
      if (0 < iVar2) {
        FUN_144f14ad0(param_1,"NTLM handshake failure (internal error)");
        return 9;
      }
    }
    *piVar5 = 1;
  }
  return 0;
}



// FUNCTION 1452cf0b0 FUN_1452cf0b0 body=774 status=ok
// SIG undefined FUN_1452cf0b0(void)

int FUN_1452cf0b0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  iVar4 = 0;
  local_res8 = 0;
  lVar10 = *(longlong *)(param_1 + 0x20);
  local_58 = 0;
  puVar12 = &DAT_149c07660;
  if (param_2 == '\0') {
    lVar14 = 0x1368;
    puVar7 = *(undefined1 **)(param_1 + 0x13a0);
    puVar13 = *(undefined1 **)(param_1 + 0x13a8);
    lVar15 = 0x348;
    if (*(undefined **)(param_1 + 0x8e8) != (undefined *)0x0) {
      puVar12 = *(undefined **)(param_1 + 0x8e8);
    }
    lVar16 = 0xe2c;
    local_res20 = *(undefined8 *)(lVar10 + 0x70);
    lVar5 = 0x350;
  }
  else {
    lVar14 = 0x1350;
    puVar7 = *(undefined1 **)(param_1 + 0x13b0);
    puVar13 = *(undefined1 **)(param_1 + 0x13b8);
    lVar16 = 0xe3c;
    if (*(undefined **)(param_1 + 0x8e0) != (undefined *)0x0) {
      puVar12 = *(undefined **)(param_1 + 0x8e0);
    }
    local_res20 = *(undefined8 *)(lVar10 + 0xf8);
    lVar5 = 0x368;
    lVar15 = 0x34c;
  }
  *(undefined1 *)(lVar16 + param_1) = 0;
  pcVar11 = "";
  piVar1 = (int *)(lVar15 + lVar10);
  puVar6 = &DAT_14996de1b;
  if (puVar7 != (undefined1 *)0x0) {
    puVar6 = puVar7;
  }
  plVar2 = (longlong *)(lVar14 + param_1);
  puVar7 = &DAT_14996de1b;
  if (puVar13 != (undefined1 *)0x0) {
    puVar7 = puVar13;
  }
  FUN_14550c7b0(local_50);
  iVar3 = *piVar1;
  if (iVar3 == 3) {
    *piVar1 = 4;
LAB_1452cf1de:
    (*(code *)PTR_free_14c6d9f28)(*plVar2);
    *plVar2 = 0;
    *(undefined1 *)(lVar16 + param_1) = 1;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        iVar4 = FUN_1452dbb70(param_1,puVar6,puVar7,lVar5 + lVar10,local_50);
        if (iVar4 == 0) {
          lVar10 = FUN_14550c830(local_50);
          if (lVar10 != 0) {
            uVar8 = FUN_14550c830(local_50);
            uVar9 = FUN_14550c820(local_50);
            iVar4 = FUN_1452b8b50(uVar9,uVar8,&local_res8,&local_58);
            if (iVar4 == 0) {
              (*(code *)PTR_free_14c6d9f28)(*plVar2);
              if (param_2 != '\0') {
                pcVar11 = "Proxy-";
              }
              lVar10 = FUN_144f2b8b0("%sAuthorization: NTLM %s\r\n",pcVar11,local_res8);
              *plVar2 = lVar10;
              (*(code *)PTR_free_14c6d9f28)(local_res8);
              if (*plVar2 == 0) {
                iVar4 = 0x1b;
              }
              else {
                *piVar1 = 3;
                *(undefined1 *)(lVar16 + param_1) = 1;
              }
            }
          }
        }
        goto LAB_1452cf392;
      }
      if (iVar3 == 4) goto LAB_1452cf1de;
    }
    iVar4 = FUN_1452db8e0(param_1,puVar6,puVar7,puVar12,local_res20,lVar5 + lVar10,local_50);
    if (iVar4 == 0) {
      uVar8 = FUN_14550c830(local_50);
      uVar9 = FUN_14550c820(local_50);
      iVar4 = FUN_1452b8b50(uVar9,uVar8,&local_res8,&local_58);
      if (iVar4 == 0) {
        (*(code *)PTR_free_14c6d9f28)(*plVar2);
        if (param_2 != '\0') {
          pcVar11 = "Proxy-";
        }
        lVar10 = FUN_144f2b8b0("%sAuthorization: NTLM %s\r\n",pcVar11,local_res8);
        *plVar2 = lVar10;
        (*(code *)PTR_free_14c6d9f28)(local_res8);
        if (*plVar2 == 0) {
          iVar4 = 0x1b;
        }
      }
    }
  }
LAB_1452cf392:
  FUN_14550c8d0(local_50);
  return iVar4;
}



// FUNCTION 1452cf3c0 FUN_1452cf3c0 body=38 status=ok
// SIG undefined FUN_1452cf3c0(void)

void FUN_1452cf3c0(longlong param_1)

{
  FUN_1452dc200(param_1 + 0x350);
  FUN_1452dc200(param_1 + 0x368);
  return;
}



// FUNCTION 1452cf3f0 FUN_1452cf3f0 body=741 status=ok
// SIG undefined FUN_1452cf3f0(void)

undefined4 FUN_1452cf3f0(longlong param_1,char *param_2,char param_3)

{
  char *_Dst;
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar6;
  
  if ((*param_2 == '\r') || (*param_2 == '\n')) {
    return 0;
  }
  pcVar3 = strchr(param_2,0xd);
  if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr(param_2,10), pcVar3 == (char *)0x0)) {
    return 0x2b;
  }
  cVar1 = *param_2;
  pcVar3 = pcVar3 + (1 - (longlong)param_2);
  if ((cVar1 == ' ') || (cVar1 == '\t')) {
    lVar4 = *(longlong *)(param_1 + 0x1340);
    if (lVar4 != 0) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (*(char *)(*(longlong *)(lVar4 + 0x20) + lVar5) != '\0');
      lVar9 = *(longlong *)(lVar4 + 0x20) - lVar4;
      while ((pcVar3 != (char *)0x0 &&
             (((cVar2 = param_2[(longlong)(pcVar3 + -1)], cVar2 == ' ' || (cVar2 == '\t')) ||
              ((byte)(cVar2 - 10U) < 4))))) {
        pcVar3 = pcVar3 + -1;
      }
      for (; (((char *)0x1 < pcVar3 && ((cVar1 == ' ' || (cVar1 == '\t')))) &&
             ((cVar1 = param_2[1], cVar1 == ' ' || (cVar1 == '\t')))); param_2 = param_2 + 1) {
        pcVar3 = pcVar3 + -1;
      }
      FUN_144f1a7d0(param_1 + 0x12c0,lVar4,0);
      lVar4 = FUN_144f139a0(lVar4,pcVar3 + lVar6 + lVar9 + 6);
      if (lVar4 != 0) {
        *(longlong *)(lVar4 + 0x18) = lVar4 + 0x2d;
        lVar9 = lVar9 + lVar4;
        *(longlong *)(lVar4 + 0x20) = lVar9;
        memcpy((void *)(lVar9 + lVar5),param_2,(size_t)pcVar3);
        pcVar3[*(longlong *)(lVar4 + 0x20) + lVar5] = '\0';
        FUN_144f1a750(param_1 + 0x12c0,*(undefined8 *)(param_1 + 0x12c8),lVar4,lVar4);
        *(longlong *)(param_1 + 0x1340) = lVar4;
        return 0;
      }
      return 0x1b;
    }
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        return 8;
      }
      if ((*param_2 != ' ') && (*param_2 != '\t')) break;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + -1;
    }
    if (pcVar3 == (char *)0x0) {
      return 8;
    }
  }
  lVar4 = (*(code *)PTR_calloc_14c6d9f40)(1,pcVar3 + 0x30);
  if (lVar4 == 0) {
    return 0x1b;
  }
  _Dst = (char *)(lVar4 + 0x2d);
  memcpy(_Dst,param_2,(size_t)pcVar3);
  pcVar3[lVar4 + 0x2d] = '\0';
  pcVar3 = pcVar3 + lVar4 + 0x2c;
  pcVar7 = _Dst;
  if (param_3 == '\x10') {
    if (*_Dst != ':') goto LAB_1452cf633;
    pcVar7 = (char *)(lVar4 + 0x2e);
  }
  cVar1 = *pcVar7;
  while (cVar1 != '\0') {
    pcVar8 = pcVar7 + 1;
    if (cVar1 == ':') {
      *pcVar7 = '\0';
      cVar1 = *pcVar8;
      while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
        pcVar7 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar7;
      }
      for (; (pcVar8 < pcVar3 &&
             (((cVar1 = *pcVar3, cVar1 == ' ' || (cVar1 == '\t')) || ((byte)(cVar1 - 10U) < 4))));
          pcVar3 = pcVar3 + -1) {
        *pcVar3 = '\0';
      }
      *(char **)(lVar4 + 0x18) = _Dst;
      *(char **)(lVar4 + 0x20) = pcVar8;
      *(char *)(lVar4 + 0x2c) = param_3;
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(param_1 + 0xda4);
      FUN_144f1a750(param_1 + 0x12c0,*(undefined8 *)(param_1 + 0x12c8),lVar4,lVar4);
      *(longlong *)(param_1 + 0x1340) = lVar4;
      return 0;
    }
    pcVar7 = pcVar8;
    cVar1 = *pcVar8;
  }
LAB_1452cf633:
  (*(code *)PTR_free_14c6d9f28)(lVar4);
  return 0x2b;
}



// FUNCTION 1452cf6e0 FUN_1452cf6e0 body=96 status=ok
// SIG undefined FUN_1452cf6e0(void)

undefined8 FUN_1452cf6e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x12c0);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    (*(code *)PTR_free_14c6d9f28)(*puVar2);
    puVar2 = puVar1;
  }
  FUN_144f1a730(param_1 + 0x12c0,0);
  *(undefined8 *)(param_1 + 0x1340) = 0;
  return 0;
}



// FUNCTION 1452cf740 FUN_1452cf740 body=347 status=ok
// SIG undefined FUN_1452cf740(void)

void FUN_1452cf740(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x98) != -1)) {
    if (*(char *)(lVar1 + 0x17e) == '\0') {
      FUN_144f14c60(param_2,param_1,"cf_socket_close(%qd, not active)");
      FUN_1452d0dc0(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                    *(undefined8 *)(lVar1 + 0x98));
      *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
    }
    else {
      if (*(longlong *)(lVar1 + 0x98) ==
          *(longlong *)
           (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8)) {
        FUN_144f14c60(param_2,param_1,"cf_socket_close(%qd, active)");
        FUN_1452d0dc0(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                      *(undefined8 *)(lVar1 + 0x98));
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
             0xffffffffffffffff;
      }
      else {
        FUN_144f14c60(param_2,param_1,"cf_socket_close(%qd) no longer at conn->sock[], discarding");
      }
      *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58) = 0;
      }
    }
    FUN_1452e7290(lVar1 + 0xa0);
    *(undefined2 *)(lVar1 + 0x17e) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 1452cf8a0 FUN_1452cf8a0 body=365 status=ok
// SIG undefined FUN_1452cf8a0(void)

void FUN_1452cf8a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x98) != -1)) {
    if (*(char *)(lVar1 + 0x17e) == '\0') {
      FUN_144f14c60(param_2,param_1,"cf_socket_close(%qd, not active)");
      FUN_1452d0dc0(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                    *(undefined8 *)(lVar1 + 0x98));
      *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
    }
    else {
      if (*(longlong *)(lVar1 + 0x98) ==
          *(longlong *)
           (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8)) {
        FUN_144f14c60(param_2,param_1,"cf_socket_close(%qd, active)");
        FUN_1452d0dc0(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                      *(undefined8 *)(lVar1 + 0x98));
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
             0xffffffffffffffff;
      }
      else {
        FUN_144f14c60(param_2,param_1,"cf_socket_close(%qd) no longer at conn->sock[], discarding");
      }
      *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58) = 0;
      }
    }
    FUN_1452e7290(lVar1 + 0xa0);
    *(undefined2 *)(lVar1 + 0x17e) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_144f14c60(param_2,param_1,"destroy");
  FUN_1452e72d0(lVar1 + 0xa0);
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1452cfa10 FUN_1452cfa10 body=555 status=ok
// SIG undefined FUN_1452cfa10(void)

void FUN_1452cfa10(longlong param_1,longlong param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar6 = 7;
  if (*(char *)(param_1 + 0x24) != '\0') {
LAB_1452cfc25:
    *param_4 = 1;
    goto LAB_1452cfc2b;
  }
  if (param_3 != '\0') goto LAB_1452cfc2b;
  *param_4 = 0;
  if (*(longlong *)(lVar1 + 0x98) == -1) {
    iVar6 = FUN_1452d17f0();
    if (iVar6 == 0) {
      if (*(char *)(param_1 + 0x24) != '\0') goto LAB_1452cfc25;
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2e0) == '\0') {
        iVar7 = Ordinal_4(*(undefined8 *)(lVar2 + 0x98),lVar2 + 0x18,*(undefined4 *)(lVar2 + 0x14));
        iVar6 = 0;
        if (iVar7 != -1) goto LAB_1452cfb5e;
      }
      uVar8 = Ordinal_111();
      iVar6 = FUN_1452d1410(param_2,lVar1 + 0xe0,uVar8);
      goto LAB_1452cfacd;
    }
  }
  else {
LAB_1452cfb5e:
    uVar9 = FUN_144f26bb0(0xffffffffffffffff,0xffffffffffffffff,*(undefined8 *)(lVar1 + 0x98),0);
    if (uVar9 == 0) {
      FUN_144f14c60(param_2,param_1,"not connected yet");
      goto LAB_1452cfc2b;
    }
    if ((uVar9 == 2) || (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2e0) != '\0')) {
      cVar5 = FUN_1452d1380(*(undefined8 *)(lVar1 + 0x98),lVar1 + 0x178);
      if (cVar5 != '\0') {
        puVar10 = (undefined4 *)FUN_144f07150(local_148);
        uVar8 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *(undefined4 *)(lVar1 + 0x158) = *puVar10;
        *(undefined4 *)(lVar1 + 0x15c) = uVar8;
        *(undefined4 *)(lVar1 + 0x160) = uVar3;
        *(undefined4 *)(lVar1 + 0x164) = uVar4;
        FUN_1452d1680(param_1,param_2);
        *param_4 = 1;
        *(undefined1 *)(param_1 + 0x24) = 1;
        FUN_144f14c60(param_2,param_1,"connected");
        goto LAB_1452cfc2b;
      }
    }
    else if ((uVar9 & 4) != 0) {
      FUN_1452d1380(*(undefined8 *)(lVar1 + 0x98),lVar1 + 0x178);
      goto LAB_1452cfad5;
    }
LAB_1452cfacd:
    if (iVar6 == 0) goto LAB_1452cfc2b;
  }
LAB_1452cfad5:
  if (*(int *)(lVar1 + 0x178) != 0) {
    *(int *)(param_2 + 0xd94) = *(int *)(lVar1 + 0x178);
    Ordinal_112(*(undefined4 *)(lVar1 + 0x178));
    local_158 = FUN_144bbe240(*(undefined4 *)(lVar1 + 0x178),local_138,0x100);
    FUN_144f14ad0(param_2,"connect to %s port %u failed: %s",lVar1 + 0xe0,
                  *(undefined4 *)(lVar1 + 0x110));
  }
  if (*(longlong *)(lVar1 + 0x98) != -1) {
    FUN_1452d0dc0(param_2,*(undefined8 *)(param_1 + 0x18),1);
    *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
  }
  *param_4 = 0;
LAB_1452cfc2b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_178);
}



// FUNCTION 1452cfcc0 FUN_1452cfcc0 body=75 status=ok
// SIG undefined FUN_1452cfcc0(void)

undefined4 FUN_1452cfcc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_1452e7360(lVar1 + 0xa0);
  if (cVar2 != '\0') {
    uVar3 = FUN_144f26bb0(*(undefined8 *)(lVar1 + 0x98),0xffffffffffffffff,0xffffffffffffffff,0);
    if (((int)uVar3 < 1) || ((uVar3 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1452cfd10 FUN_1452cfd10 body=283 status=ok
// SIG undefined FUN_1452cfd10(void)

void FUN_1452cfd10(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_5 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8;
  uVar3 = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(lVar1 + 0x1a8) = *(undefined8 *)(lVar2 + 0x98);
  iVar4 = Ordinal_19(*(undefined8 *)(lVar2 + 0x98),param_3,param_4 & 0xffffffff,0);
  if (iVar4 == -1) {
    iVar5 = Ordinal_111();
    if (iVar5 == 0x2733) {
      *param_5 = 0x51;
    }
    else {
      uVar6 = FUN_144bbe240(iVar5,local_148,0x100);
      FUN_144f14b70(param_2,"Send failure: %s",uVar6);
      *(int *)(param_2 + 0xd94) = iVar5;
      *param_5 = 0x37;
    }
  }
  local_150 = *param_5;
  local_158 = iVar4;
  FUN_144f14c60(param_2,param_1,"send(len=%zu) -> %d, err=%d",param_4);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
       uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_178);
}



// FUNCTION 1452cfe40 FUN_1452cfe40 body=462 status=ok
// SIG undefined FUN_1452cfe40(void)

longlong FUN_1452cfe40(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar7 = 0;
  lVar1 = lVar2 + 0xa0;
  *param_5 = 0;
  lVar8 = *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8;
  uVar3 = *(undefined8 *)(lVar8 + 0x1a8);
  *(undefined8 *)(lVar8 + 0x1a8) = *(undefined8 *)(lVar2 + 0x98);
  if ((*(char *)(lVar2 + 0x17f) == '\0') || (cVar6 = FUN_1452e7360(lVar1), cVar6 != '\0')) {
    local_38 = param_1;
    local_30 = param_2;
    if ((*(char *)(lVar2 + 0x17f) == '\0') || (0x3ff < param_4)) {
      lVar7 = FUN_1452d15a0(&local_38,param_3,param_4,param_5);
      goto LAB_1452cff8b;
    }
    lVar8 = FUN_1452e77d0(lVar1,FUN_1452d15a0,&local_38,param_5);
    if (lVar8 < 0) {
      cVar6 = FUN_1452e7360(lVar1);
      if (cVar6 == '\0') {
        FUN_144f14c60(param_2,param_1,"partial read: empty buffer first");
        lVar7 = FUN_1452e74a0(lVar1,param_3,param_4,param_5);
      }
      else {
        lVar7 = -1;
      }
      goto LAB_1452cff8b;
    }
    if (lVar8 == 0) {
      *param_5 = 0;
      goto LAB_1452cff8b;
    }
    FUN_144f14c60(param_2,param_1,"buffered %zd additional bytes",lVar8);
  }
  else {
    FUN_144f14c60(param_2,param_1,"recv from buffer");
  }
  lVar7 = FUN_1452e74a0(lVar1,param_3,param_4,param_5);
LAB_1452cff8b:
  FUN_144f14c60(param_2,param_1,"recv(len=%zu) -> %d, err=%d",param_4,(int)lVar7,*param_5);
  if ((0 < lVar7) && (*(char *)(lVar2 + 0x17c) == '\0')) {
    puVar9 = (undefined8 *)FUN_144f07150(&local_38);
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    *(undefined1 *)(lVar2 + 0x17c) = 1;
    *(undefined8 *)(lVar2 + 0x168) = uVar4;
    *(undefined8 *)(lVar2 + 0x170) = uVar5;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
       uVar3;
  return lVar7;
}



// FUNCTION 1452d0010 FUN_1452d0010 body=516 status=ok
// SIG undefined FUN_1452d0010(void)

void FUN_1452d0010(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined1 local_1b4 [12];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (param_3 == 4) {
    FUN_144f16130(param_2,*(undefined8 *)(param_1 + 0x18),lVar1 + 0x114,
                  *(undefined4 *)(lVar1 + 0x144));
  }
  else if (param_3 == 0x100) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8)
         = *(undefined8 *)(lVar1 + 0x98);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(int **)(*(longlong *)(param_1 + 0x18) + 0x58) = (int *)(lVar1 + 8);
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x2d4) = *(int *)(lVar1 + 8) == 0x17;
      if ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x2e8) + 0x84) & 0x800) == 0) {
        local_1b8 = 0x80;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        iVar3 = Ordinal_5(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x98),&local_1a8,
                          &local_1b8);
        if (iVar3 == 0) {
          cVar2 = FUN_144f16060(&local_1a8,local_1b8,*(longlong *)(param_1 + 0x18) + 0x120,local_1b4
                               );
          if (cVar2 == '\0') {
            piVar6 = _errno();
            iVar3 = *piVar6;
            piVar6 = _errno();
            uVar5 = FUN_144bbe240(iVar3,local_128,0x100);
            FUN_144f14b70(param_2,"ssrem inet_ntop() failed with errno %d: %s",*piVar6,uVar5);
          }
        }
        else {
          uVar4 = Ordinal_111();
          uVar5 = FUN_144bbe240(uVar4,local_128,0x100);
          FUN_144f14b70(param_2,"getpeername() failed with errno %d: %s",uVar4,uVar5);
        }
      }
      FUN_1452d1680(param_1,param_2);
      FUN_144f16130(param_2,*(undefined8 *)(param_1 + 0x18),lVar1 + 0x114,
                    *(undefined4 *)(lVar1 + 0x144));
      *(undefined1 *)(lVar1 + 0x17f) = 0;
    }
    *(undefined1 *)(lVar1 + 0x17e) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 1452d0220 FUN_1452d0220 body=183 status=ok
// SIG undefined FUN_1452d0220(void)

void FUN_1452d0220(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x10);
  *param_3 = 0;
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x98), lVar1 == -1)) goto LAB_1452d0290;
  local_30 = 0x700;
  local_38 = lVar1;
  iVar2 = FUN_144f26d10(&local_38,1);
  if (iVar2 < 0) {
    pcVar3 = "is_alive: poll error, assume dead";
  }
  else {
    if (iVar2 == 0) {
      FUN_144f14c60(param_2,param_1,"is_alive: poll timeout, assume alive");
      goto LAB_1452d0290;
    }
    if ((local_30 & 0x4070000) == 0) {
      FUN_144f14c60(param_2,param_1,"is_alive: valid events, looks alive");
      *param_3 = 1;
      goto LAB_1452d0290;
    }
    pcVar3 = "is_alive: err/hup/etc events, assume dead";
  }
  FUN_144f14c60(param_2,param_1,pcVar3);
LAB_1452d0290:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1452d02e0 FUN_1452d02e0 body=260 status=ok
// SIG undefined FUN_1452d02e0(void)

undefined8
FUN_1452d02e0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (param_3 == 2) {
    if ((char)piVar1[0x5f] != '\0') {
      local_28 = piVar1[0x52];
      iStack_24 = piVar1[0x53];
      iStack_20 = piVar1[0x54];
      iStack_1c = piVar1[0x55];
      local_18 = piVar1[0x5a];
      iStack_14 = piVar1[0x5b];
      iStack_10 = piVar1[0x5c];
      iStack_c = piVar1[0x5d];
      lVar3 = FUN_144f071e0(&local_18,&local_28);
      uVar4 = 0x7fffffff;
      if (lVar3 < 0x7fffffff) {
        uVar4 = (undefined4)lVar3;
      }
      *param_4 = uVar4;
      return 0;
    }
    *param_4 = 0xffffffff;
    return 0;
  }
  if (param_3 == 3) {
    *param_5 = *(undefined8 *)(piVar1 + 0x26);
    return 0;
  }
  if (param_3 != 4) {
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001452d0317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
      return uVar2;
    }
    return 0x30;
  }
  if (((*piVar1 == 4) || (*piVar1 == 5)) && ((char)piVar1[0x5f] != '\0')) {
    uVar2 = *(undefined8 *)(piVar1 + 0x5c);
    *param_5 = *(undefined8 *)(piVar1 + 0x5a);
    param_5[1] = uVar2;
    return 0;
  }
  uVar2 = *(undefined8 *)(piVar1 + 0x58);
  *param_5 = *(undefined8 *)(piVar1 + 0x56);
  param_5[1] = uVar2;
  return 0;
}



// FUNCTION 1452d03f0 FUN_1452d03f0 body=420 status=ok
// SIG undefined FUN_1452d03f0(void)

int FUN_1452d03f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 in_stack_ffffffffffffffc0;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  piVar1 = *(int **)(param_1 + 0x10);
  iVar3 = 7;
  if (*(char *)(param_1 + 0x24) == '\0') {
    *param_4 = 0;
    if (*(longlong *)(piVar1 + 0x26) == -1) {
      iVar3 = FUN_1452d17f0();
      if (iVar3 == 0) {
        if (*piVar1 == 5) {
          piVar2 = *(int **)(param_1 + 0x10);
          iVar3 = Ordinal_4(*(undefined8 *)(piVar2 + 0x26),piVar2 + 6,piVar2[5]);
          if (iVar3 == -1) {
            uVar4 = Ordinal_111();
            iVar3 = FUN_1452d1410(param_2,piVar2 + 0x38,uVar4);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          else {
            FUN_1452d1680(param_1,param_2);
            piVar6 = piVar2 + 0x45;
            puVar5 = &DAT_149d2a200;
            if (*piVar2 == 5) {
              puVar5 = &DAT_149d2a1f8;
            }
            FUN_144f14c60(param_2,param_1,"%s socket %qd connected: [%s:%d] -> [%s:%d]",puVar5,
                          *(undefined8 *)(piVar2 + 0x26),piVar6,piVar2[0x51],piVar2 + 0x38,
                          piVar2[0x44]);
            uVar7 = (undefined4)((ulonglong)piVar6 >> 0x20);
            FUN_14550a4f0(*(undefined8 *)(piVar2 + 0x26),1);
          }
          iVar3 = 0;
          FUN_144f14c60(param_2,param_1,"cf_udp_connect(), opened socket=%qd (%s:%d)",
                        *(undefined8 *)(piVar1 + 0x26),piVar1 + 0x45,CONCAT44(uVar7,piVar1[0x51]));
        }
        else {
          FUN_144f14c60(param_2,param_1,"cf_udp_connect(), opened socket=%qd (unconnected)",
                        *(undefined8 *)(piVar1 + 0x26));
        }
        *param_4 = 1;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else {
        FUN_144f14c60(param_2,param_1,"cf_udp_connect(), open failed -> %d",iVar3);
      }
    }
  }
  else {
    *param_4 = 1;
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 1452d05c0 FUN_1452d05c0 body=180 status=ok
// SIG undefined FUN_1452d05c0(void)

void FUN_1452d05c0(undefined8 param_1,longlong param_2,undefined4 *param_3,int param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [36];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = local_b8;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
  }
  *puVar2 = *(undefined4 *)(param_2 + 4);
  if (param_4 == 3) {
    puVar2[1] = 1;
    puVar2[2] = 6;
  }
  else if (param_4 == 6) {
    *(undefined8 *)(puVar2 + 1) = 1;
  }
  else {
    puVar2[1] = 2;
    puVar2[2] = 0x11;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  puVar2[3] = uVar1;
  if (0x80 < uVar1) {
    puVar2[3] = 0x80;
    uVar1 = 0x80;
  }
  memcpy(puVar2 + 4,*(void **)(param_2 + 0x20),(ulonglong)uVar1);
  FUN_1452d0d20(param_1,puVar2,param_5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452d0680 FUN_1452d0680 body=39 status=ok
// SIG undefined FUN_1452d0680(void)

undefined8 FUN_1452d0680(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_144bbae00(param_1,param_3);
  }
  Ordinal_3(param_3);
  return 0;
}



// FUNCTION 1452d06b0 FUN_1452d06b0 body=193 status=ok
// SIG undefined FUN_1452d06b0(void)

void FUN_1452d06b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = 0x4020;
  local_res10[0] = 0;
  local_res20[0] = 4;
  if (DAT_14c7fc658 == 0) {
    cVar1 = FUN_1452d90f0(6,0,0,2,3);
    if (cVar1 != '\0') {
      DAT_14c7fc658 = 2;
      return;
    }
    DAT_14c7fc658 = 1;
  }
  else if (DAT_14c7fc658 == 2) {
    return;
  }
  iVar2 = Ordinal_7(param_1,0xffff,0x1001,local_res10,local_res20);
  if ((iVar2 != 0) || (local_res10[0] <= local_res18[0])) {
    Ordinal_21(param_1,0xffff,0x1001,local_res18,4);
  }
  return;
}



// FUNCTION 1452d0780 FUN_1452d0780 body=165 status=ok
// SIG undefined FUN_1452d0780(void)

ulonglong FUN_1452d0780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x180,1);
  if (lVar1 == 0) {
    uVar4 = 0x1b;
    *param_1 = 0;
  }
  else {
    FUN_1452d14a0(lVar1,param_4,param_5);
    uVar2 = FUN_144f13b40(local_18,&PTR_DAT_14c732170,lVar1);
    uVar4 = (uint)uVar2;
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = local_18[0];
    }
    *param_1 = uVar3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  (*(code *)PTR_free_14c6d9f28)(local_18[0]);
  local_18[0] = 0;
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  return (ulonglong)uVar4;
}



// FUNCTION 1452d0830 FUN_1452d0830 body=165 status=ok
// SIG undefined FUN_1452d0830(void)

ulonglong FUN_1452d0830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x180,1);
  if (lVar1 == 0) {
    uVar4 = 0x1b;
    *param_1 = 0;
  }
  else {
    FUN_1452d14a0(lVar1,param_4,param_5);
    uVar2 = FUN_144f13b40(local_18,&PTR_DAT_14c7321e0,lVar1);
    uVar4 = (uint)uVar2;
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = local_18[0];
    }
    *param_1 = uVar3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  (*(code *)PTR_free_14c6d9f28)(local_18[0]);
  local_18[0] = 0;
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  return (ulonglong)uVar4;
}



// FUNCTION 1452d08e0 FUN_1452d08e0 body=165 status=ok
// SIG undefined FUN_1452d08e0(void)

ulonglong FUN_1452d08e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x180,1);
  if (lVar1 == 0) {
    uVar4 = 0x1b;
    *param_1 = 0;
  }
  else {
    FUN_1452d14a0(lVar1,param_4,param_5);
    uVar2 = FUN_144f13b40(local_18,&PTR_DAT_14c732250,lVar1);
    uVar4 = (uint)uVar2;
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = local_18[0];
    }
    *param_1 = uVar3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  (*(code *)PTR_free_14c6d9f28)(local_18[0]);
  local_18[0] = 0;
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  return (ulonglong)uVar4;
}



// FUNCTION 1452d0990 FUN_1452d0990 body=307 status=ok
// SIG undefined FUN_1452d0990(void)

int FUN_1452d0990(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  longlong local_28;
  undefined1 local_20 [24];
  
  local_28 = 0;
  FUN_144f13cf0(param_1,param_2,param_3);
  puVar4 = (uint *)(*(code *)PTR_calloc_14c6d9f40)(0x180,1);
  if (puVar4 == (uint *)0x0) {
    iVar6 = 0x1b;
  }
  else {
    *puVar4 = (uint)*(byte *)(param_2 + 0x4d7);
    *(undefined8 *)(puVar4 + 0x26) = *param_4;
    *(undefined1 *)((longlong)puVar4 + 0x17d) = 0;
    iVar6 = FUN_144f13b40(&local_28,&PTR_s_TCP_ACCEPT_14c7322c0,puVar4);
    if (iVar6 == 0) {
      FUN_144f13ba0(param_1,param_2,param_3,local_28);
      *(undefined8 *)(param_2 + 0x1a8 + (longlong)param_3 * 8) = *(undefined8 *)(puVar4 + 0x26);
      FUN_1452d1680(local_28,param_1);
      *(undefined1 *)((longlong)puVar4 + 0x17e) = 1;
      puVar5 = (uint *)FUN_144f07150(local_20);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4[0x56] = *puVar5;
      puVar4[0x57] = uVar1;
      puVar4[0x58] = uVar2;
      puVar4[0x59] = uVar3;
      *(undefined1 *)(local_28 + 0x24) = 1;
      FUN_144f14c60(param_1,local_28,"Curl_conn_tcp_listen_set(%qd)",*(undefined8 *)(puVar4 + 0x26))
      ;
      return 0;
    }
  }
  (*(code *)PTR_free_14c6d9f28)(local_28);
  local_28 = 0;
  (*(code *)PTR_free_14c6d9f28)(puVar4);
  return iVar6;
}



// FUNCTION 1452d0ad0 FUN_1452d0ad0 body=563 status=ok
// SIG undefined FUN_1452d0ad0(void)

void FUN_1452d0ad0(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [2];
  undefined1 local_1e0 [24];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0x1d8 + (longlong)param_3 * 8);
  if ((plVar1 == (longlong *)0x0) || ((undefined **)*plVar1 != &PTR_s_TCP_ACCEPT_14c7322c0))
  goto LAB_1452d0cf3;
  lVar2 = plVar1[2];
  uVar9 = *(undefined8 *)(lVar2 + 0x98);
  if (param_2 == 0) {
LAB_1452d0b6c:
    Ordinal_3(uVar9);
  }
  else {
    if (*(longlong *)(param_2 + 0x38) == 0) {
      FUN_144bbae00(param_1,uVar9);
      goto LAB_1452d0b6c;
    }
    FUN_144bbae00(param_1,uVar9);
    FUN_144bbace0(param_1,1);
    (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),uVar9);
    FUN_144bbace0(param_1,0);
  }
  uVar9 = *param_4;
  *(undefined8 *)(lVar2 + 0x98) = uVar9;
  *(undefined8 *)(param_2 + 0x1a8 + (longlong)param_3 * 8) = uVar9;
  lVar3 = plVar1[2];
  *(undefined1 *)(lVar3 + 0xe0) = 0;
  *(undefined4 *)(lVar3 + 0x110) = 0;
  local_1e8[0] = 0x80;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  iVar8 = Ordinal_5(*(undefined8 *)(lVar3 + 0x98),&local_1c8,local_1e8);
  if (iVar8 == 0) {
    cVar7 = FUN_144f16060(&local_1c8,local_1e8[0],(undefined1 *)(lVar3 + 0xe0),
                          (undefined4 *)(lVar3 + 0x110));
    if (cVar7 == '\0') {
      piVar10 = _errno();
      iVar8 = *piVar10;
      piVar10 = _errno();
      uVar9 = FUN_144bbe240(iVar8,local_148,0x100);
      iVar8 = *piVar10;
      pcVar12 = "ssrem inet_ntop() failed with errno %d: %s";
      goto LAB_1452d0c71;
    }
  }
  else {
    iVar8 = Ordinal_111();
    uVar9 = FUN_144bbe240(iVar8,local_148,0x100);
    pcVar12 = "getpeername() failed with errno %d: %s";
LAB_1452d0c71:
    FUN_144f14b70(param_1,pcVar12,iVar8,uVar9);
  }
  FUN_1452d1680(plVar1,param_1);
  *(undefined2 *)(lVar2 + 0x17d) = 0x101;
  puVar11 = (undefined4 *)FUN_144f07150(local_1e0);
  local_1f8 = lVar2 + 0xe0;
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  *(undefined4 *)(lVar2 + 0x158) = *puVar11;
  *(undefined4 *)(lVar2 + 0x15c) = uVar4;
  *(undefined4 *)(lVar2 + 0x160) = uVar5;
  *(undefined4 *)(lVar2 + 0x164) = uVar6;
  *(undefined1 *)((longlong)plVar1 + 0x24) = 1;
  local_1f0 = *(undefined4 *)(lVar2 + 0x110);
  FUN_144f14c60(param_1,plVar1,"accepted_set(sock=%qd, remote=%s port=%d)",
                *(undefined8 *)(lVar2 + 0x98));
LAB_1452d0cf3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_218);
}



// FUNCTION 1452d0d20 FUN_1452d0d20 body=159 status=ok
// SIG undefined FUN_1452d0d20(void)

undefined8 FUN_1452d0d20(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x288) == 0) {
    lVar2 = Ordinal_23(*param_2,param_2[1],param_2[2]);
    *param_3 = lVar2;
  }
  else {
    FUN_144bbace0(param_1,1);
    lVar2 = (**(code **)(param_1 + 0x288))(*(undefined8 *)(param_1 + 0x290),0,param_2);
    *param_3 = lVar2;
    FUN_144bbace0(param_1,0);
  }
  if (*param_3 == -1) {
    return 7;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x4cc);
  if ((iVar1 != 0) && (*param_2 == 0x17)) {
    param_2[10] = iVar1;
  }
  return 0;
}



// FUNCTION 1452d0dc0 FUN_1452d0dc0 body=134 status=ok
// SIG undefined FUN_1452d0dc0(void)

undefined4 FUN_1452d0dc0(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if ((param_3 != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
      FUN_144bbae00(param_1,param_4);
      FUN_144bbace0(param_1,1);
      uVar1 = (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),param_4);
      FUN_144bbace0(param_1,0);
      return uVar1;
    }
    FUN_144bbae00(param_1,param_4);
  }
  Ordinal_3(param_4);
  return 0;
}



// FUNCTION 1452d0e50 FUN_1452d0e50 body=1299 status=ok
// SIG undefined FUN_1452d0e50(void)

void FUN_1452d0e50(longlong param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  ushort uVar11;
  size_t sVar12;
  uint uVar13;
  undefined1 auStack_328 [32];
  longlong **local_308;
  undefined4 local_300;
  longlong *local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_328;
  pcVar10 = *(char **)(param_1 + 0x760);
  uVar6 = 0;
  uVar11 = *(ushort *)(param_1 + 0x230);
  uVar13 = (uint)*(ushort *)(param_1 + 0x232);
  local_2f8 = (longlong *)0x0;
  local_2f0 = param_2;
  local_2e8 = param_3;
  if ((pcVar10 == (char *)0x0) && (uVar11 == 0)) goto LAB_1452d1354;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  if (pcVar10 == (char *)0x0) {
LAB_1452d11bc:
    if (param_4 == 0x17) {
      local_2d8 = 0x17;
      uVar3 = Ordinal_9(uVar11);
      uVar6 = 0x1c;
LAB_1452d11f7:
      local_2d8._0_4_ = CONCAT22(uVar3,(undefined2)local_2d8);
    }
    else if (param_4 == 2) goto LAB_1452d11e3;
  }
  else {
    lVar9 = -1;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar10[uVar7] != '\0');
    if (0xfe < uVar7) goto LAB_1452d11bc;
    local_258 = (longlong *)((ulonglong)local_258 & 0xffffffffffffff00);
    memset((void *)((longlong)&local_258 + 1),0,0xff);
    sVar12 = 0xffffffffffffffff;
    do {
      sVar12 = sVar12 + 1;
    } while (PTR_DAT_14c732330[sVar12] != '\0');
    iVar4 = strncmp(PTR_DAT_14c732330,pcVar10,sVar12);
    if (iVar4 == 0) {
      do {
        lVar9 = lVar9 + 1;
      } while (PTR_DAT_14c732330[lVar9] != '\0');
      pcVar10 = pcVar10 + lVar9;
      bVar2 = true;
LAB_1452d0fc0:
      local_308 = (longlong **)&local_258;
      local_300 = 0x100;
      iVar4 = FUN_14550d820(param_4,param_5,*(undefined4 *)(local_2f0 + 0x4cc),pcVar10);
      if (iVar4 == 0) {
        if (bVar2) {
          FUN_144f14b70(param_1,"Couldn\'t bind to interface \'%s\'",pcVar10);
          goto LAB_1452d1354;
        }
        goto LAB_1452d0f9c;
      }
      if (iVar4 == 1) goto LAB_1452d1354;
      if (iVar4 != 2) {
        if (!bVar2) goto LAB_1452d0f9c;
        goto LAB_1452d1008;
      }
      local_308 = (longlong **)CONCAT44(local_308._4_4_,param_4);
      FUN_144f14ad0(param_1,"Local Interface %s is ip %s using address family %i",pcVar10,&local_258
                   );
    }
    else {
      sVar12 = 0xffffffffffffffff;
      do {
        sVar12 = sVar12 + 1;
      } while (PTR_DAT_14c732338[sVar12] != '\0');
      iVar4 = strncmp(PTR_DAT_14c732338,pcVar10,sVar12);
      if (iVar4 != 0) {
        bVar2 = false;
        goto LAB_1452d0fc0;
      }
      do {
        lVar9 = lVar9 + 1;
      } while (PTR_DAT_14c732338[lVar9] != '\0');
      pcVar10 = pcVar10 + lVar9;
LAB_1452d0f9c:
      uVar1 = *(undefined1 *)(local_2f0 + 0x4d8);
      if (param_4 == 2) {
        *(undefined1 *)(local_2f0 + 0x4d8) = 1;
      }
      else if (param_4 == 0x17) {
        *(undefined1 *)(local_2f0 + 0x4d8) = 2;
      }
      local_308 = &local_2f8;
      iVar4 = FUN_144f1af60(param_1,pcVar10,0x50);
      if (iVar4 == 1) {
        FUN_144f07610(param_1,&local_2f8);
      }
      *(undefined1 *)(local_2f0 + 0x4d8) = uVar1;
      if (local_2f8 == (longlong *)0x0) {
LAB_1452d1008:
        *(undefined1 *)(param_1 + 0x13c7) = 0;
        FUN_144f14b70(param_1,"Couldn\'t bind to \'%s\'",pcVar10);
        goto LAB_1452d1354;
      }
      FUN_144f1b750(*local_2f8,&local_258,0x100);
      local_300 = *(undefined4 *)(*local_2f8 + 4);
      local_308 = (longlong **)&local_258;
      FUN_144f14ad0(param_1,"Name \'%s\' family %i resolved to \'%s\' family %i",pcVar10,param_4);
      FUN_144f1b540(param_1,local_2f8);
      if (param_4 != *(int *)(*local_2f8 + 4)) goto LAB_1452d1354;
    }
    if (param_4 != 0x17) {
      if ((param_4 != 2) || (iVar4 = inet_pton(2,&local_258,(longlong)&local_2d8 + 4), iVar4 < 1))
      goto LAB_1452d11fc;
LAB_1452d11e3:
      local_2d8 = CONCAT62(local_2d8._2_6_,(short)param_4);
      uVar3 = Ordinal_9(uVar11);
      uVar6 = 0x10;
      goto LAB_1452d11f7;
    }
    pcVar10 = strchr((char *)&local_258,0x25);
    if (pcVar10 != (char *)0x0) {
      *pcVar10 = '\0';
      pcVar10 = pcVar10 + 1;
    }
    iVar4 = inet_pton(0x17,&local_258,&uStack_2d0);
    if (0 < iVar4) {
      local_2d8 = CONCAT62(local_2d8._2_6_,0x17);
      uVar3 = Ordinal_9(uVar11);
      local_2d8._0_4_ = CONCAT22(uVar3,(undefined2)local_2d8);
      if (pcVar10 != (char *)0x0) {
        uVar5 = strtoul(pcVar10,(char **)0x0,10);
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar5);
      }
    }
    uVar6 = 0x1c;
  }
LAB_1452d11fc:
  uVar8 = local_2e8;
  iVar4 = Ordinal_2(local_2e8,&local_2d8,uVar6);
  while (iVar4 < 0) {
    uVar13 = uVar13 - 1;
    if (((int)uVar13 < 1) || (uVar11 = uVar11 + 1, uVar11 == 0)) {
      uVar6 = Ordinal_111();
      *(undefined4 *)(param_1 + 0xd94) = uVar6;
      uVar8 = FUN_144bbe240(uVar6,&local_258,0x100);
      FUN_144f14b70(param_1,"bind failed with errno %d: %s",uVar6,uVar8);
      goto LAB_1452d1354;
    }
    FUN_144f14ad0(param_1,"Bind to local port %d failed, trying next",uVar11 - 1);
    uVar3 = Ordinal_15(uVar11);
    local_2d8._0_4_ = CONCAT22(uVar3,(undefined2)local_2d8);
    iVar4 = Ordinal_2(uVar8,&local_2d8,uVar6);
  }
  uVar7 = (ulonglong)local_2e8 >> 0x20;
  local_2e8 = CONCAT44((int)uVar7,0x80);
  local_258 = (longlong *)0x0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  iVar4 = Ordinal_6(uVar8,&local_258,&local_2e8);
  if (iVar4 < 0) {
    uVar6 = Ordinal_111();
    *(undefined4 *)(param_1 + 0xd94) = uVar6;
    uVar8 = FUN_144bbe240(uVar6,local_158,0x100);
    FUN_144f14b70(param_1,"getsockname() failed with errno %d: %s",uVar6,uVar8);
  }
  else {
    FUN_144f14ad0(param_1,"Local port: %hu",uVar11);
    *(undefined1 *)(local_2f0 + 0x2de) = 1;
  }
LAB_1452d1354:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_328);
}



// FUNCTION 1452d1380 FUN_1452d1380 body=131 status=ok
// SIG undefined FUN_1452d1380(void)

undefined8 FUN_1452d1380(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0;
  local_res18[0] = 4;
  SleepEx(0,0);
  iVar1 = Ordinal_7(param_1,0xffff,0x1007,local_res10,local_res18);
  if (iVar1 != 0) {
    local_res10[0] = Ordinal_111();
  }
  if ((local_res10[0] == 0) || (local_res10[0] == 0x2748)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_res10[0];
  }
  return uVar2;
}



// FUNCTION 1452d1410 FUN_1452d1410 body=129 status=ok
// SIG undefined FUN_1452d1410(void)

void FUN_1452d1410(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((param_3 != 0xb) && (param_3 != 0x2733)) && (param_3 != 0x2734)) {
    uVar1 = FUN_144bbe240(param_3,local_128,0x100);
    FUN_144f14ad0(param_1,"Immediate connect fail for %s: %s",param_2,uVar1);
    *(int *)(param_1 + 0xd94) = param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_148);
}



// FUNCTION 1452d14a0 FUN_1452d14a0 body=242 status=ok
// SIG undefined FUN_1452d14a0(void)

void FUN_1452d14a0(int *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  
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
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  memset(param_1 + 0x28,0,0xe0);
  param_1[0x26] = -1;
  param_1[0x27] = -1;
  *param_1 = param_3;
  param_1[2] = *(int *)(param_2 + 4);
  if (param_3 == 3) {
    param_1[3] = 1;
    param_1[4] = 6;
  }
  else if (param_3 == 6) {
    param_1[3] = 1;
    param_1[4] = 0;
  }
  else {
    param_1[3] = 2;
    param_1[4] = 0x11;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  param_1[5] = uVar1;
  if (0x80 < uVar1) {
    param_1[5] = 0x80;
    uVar1 = 0x80;
  }
  memcpy(param_1 + 6,*(void **)(param_2 + 0x20),(ulonglong)uVar1);
  FUN_1452e7200(param_1 + 0x28,0x10000,1);
  return;
}



// FUNCTION 1452d15a0 FUN_1452d15a0 body=212 status=ok
// SIG undefined FUN_1452d15a0(void)

void FUN_1452d15a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(*param_1 + 0x10);
  *param_4 = 0;
  local_148 = Ordinal_16(*(undefined8 *)(lVar1 + 0x98),param_2,param_3,0);
  if (local_148 == -1) {
    iVar2 = Ordinal_111();
    if (iVar2 == 0x2733) {
      *param_4 = 0x51;
    }
    else {
      uVar3 = FUN_144bbe240(iVar2,local_138,0x100);
      FUN_144f14b70(param_1[1],"Recv failure: %s",uVar3);
      *(int *)(param_1[1] + 0xd94) = iVar2;
      *param_4 = 0x38;
    }
    local_148 = -1;
  }
  local_140 = *param_4;
  FUN_144f14c60(param_1[1],*param_1,"nw_in_read(len=%zu) -> %d, err=%d",param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 1452d1680 FUN_1452d1680 body=341 status=ok
// SIG undefined FUN_1452d1680(void)

void FUN_1452d1680(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x2e8) + 0x84) & 0x800) == 0) {
    local_1a8[0] = 0x80;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    iVar3 = Ordinal_6(*(undefined8 *)(lVar1 + 0x98),&local_198,local_1a8);
    if (iVar3 == 0) {
      cVar2 = FUN_144f16060(&local_198,local_1a8[0],lVar1 + 0x114,lVar1 + 0x144);
      if (cVar2 == '\0') {
        piVar6 = _errno();
        iVar3 = *piVar6;
        piVar6 = _errno();
        uVar5 = FUN_144bbe240(iVar3,local_118,0x100);
        FUN_144f14b70(param_2,"ssloc inet_ntop() failed with errno %d: %s",*piVar6,uVar5);
      }
    }
    else {
      uVar4 = Ordinal_111();
      uVar5 = FUN_144bbe240(uVar4,local_118,0x100);
      FUN_144f14b70(param_2,"getsockname() failed with errno %d: %s",uVar4,uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 1452d17f0 FUN_1452d17f0 body=1200 status=ok
// SIG undefined FUN_1452d17f0(void)

void FUN_1452d17f0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  int local_178 [2];
  int local_170 [2];
  undefined4 local_168 [2];
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar12 = (undefined4 *)FUN_144f07150(&local_160);
  puVar1 = (ulonglong *)(lVar2 + 0x98);
  uVar11 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  *(undefined4 *)(lVar2 + 0x148) = *puVar12;
  *(undefined4 *)(lVar2 + 0x14c) = uVar11;
  *(undefined4 *)(lVar2 + 0x150) = uVar5;
  *(undefined4 *)(lVar2 + 0x154) = uVar6;
  iVar9 = FUN_1452d0d20(param_2,lVar2 + 8,puVar1);
  if (iVar9 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    cVar8 = FUN_144f16060(lVar3 + 0x18,*(undefined4 *)(lVar3 + 0x14),lVar3 + 0xe0,lVar3 + 0x110);
    if (cVar8 != '\0') {
      iVar9 = 0;
      if (*(int *)(lVar2 + 8) == 0x17) {
        local_170[0] = 0;
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
        Ordinal_21(*puVar1,0x29,0x1b,local_170);
        pcVar15 = "  Trying [%s]:%d...";
      }
      else {
        pcVar15 = "  Trying %s:%d...";
      }
      FUN_144f14ad0(param_2,pcVar15,lVar2 + 0xe0,*(undefined4 *)(lVar2 + 0x110));
      if (((*(int *)(lVar2 + 8) == 2) || (*(int *)(lVar2 + 8) == 0x17)) &&
         (*(int *)(lVar2 + 0xc) == 1)) {
        bVar7 = true;
        if (*(char *)(param_2 + 0xad4) != '\0') {
          local_170[0] = 1;
          local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
          iVar10 = Ordinal_21(*puVar1,6,1,local_170);
          if (iVar10 < 0) {
            uVar11 = Ordinal_111();
            uVar14 = FUN_144bbe240(uVar11,local_148,0x100);
            FUN_144f14ad0(param_2,"Could not set TCP_NODELAY: %s",uVar14);
          }
        }
      }
      else {
        bVar7 = false;
      }
      uVar4 = *puVar1;
      local_170[0] = 0x4020;
      local_178[0] = 0;
      local_168[0] = 4;
      if (DAT_14c7fc658 == 0) {
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,3);
        cVar8 = FUN_1452d90f0(6,0,0,2);
        if (cVar8 == '\0') {
          DAT_14c7fc658 = 1;
LAB_1452d1a4f:
          local_1a8 = local_168;
          iVar10 = Ordinal_7(uVar4,0xffff,0x1001,local_178);
          if ((iVar10 != 0) || (local_178[0] <= local_170[0])) {
            local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
            Ordinal_21(uVar4,0xffff,0x1001,local_170);
          }
        }
        else {
          DAT_14c7fc658 = 2;
        }
      }
      else if (DAT_14c7fc658 != 2) goto LAB_1452d1a4f;
      if ((bVar7) && (*(char *)(param_2 + 0xada) != '\0')) {
        uVar4 = *puVar1;
        local_178[0] = 1;
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
        iVar10 = Ordinal_21(uVar4,0xffff,8,local_178);
        if (iVar10 < 0) {
          FUN_144f14ad0(param_2,"Failed to set SO_KEEPALIVE on fd %d",uVar4);
        }
        else {
          local_160 = 1;
          local_178[0] = FUN_144f16fd0(*(undefined4 *)(param_2 + 0xa2c));
          local_178[0] = local_178[0] * 1000;
          local_15c = local_178[0];
          local_178[0] = FUN_144f16fd0(*(undefined4 *)(param_2 + 0xa30));
          local_178[0] = local_178[0] * 1000;
          local_198 = local_168;
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1a8 = (undefined4 *)0x0;
          local_158 = local_178[0];
          iVar10 = WSAIoctl(uVar4,0x98000004,&local_160,0xc);
          if (iVar10 != 0) {
            uVar11 = Ordinal_111();
            FUN_144f14ad0(param_2,"Failed to set SIO_KEEPALIVE_VALS on fd %d: %d",uVar4 & 0xffffffff
                          ,uVar11);
          }
        }
      }
      if (*(longlong *)(param_2 + 0x278) == 0) {
LAB_1452d1bd8:
        bVar7 = false;
      }
      else {
        FUN_144bbace0(param_2,1);
        iVar10 = (**(code **)(param_2 + 0x278))(*(undefined8 *)(param_2 + 0x280),*puVar1,0);
        FUN_144bbace0(param_2,0);
        if (iVar10 != 2) {
          if (iVar10 != 0) {
            iVar9 = 0x2a;
            goto LAB_1452d18ce;
          }
          goto LAB_1452d1bd8;
        }
        bVar7 = true;
      }
      if ((*(int *)(lVar2 + 8) == 2) || (*(int *)(lVar2 + 8) == 0x17)) {
        uVar11 = FUN_14550d790(lVar2 + 0x18);
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar11);
        iVar9 = FUN_1452d0e50(param_2,*(undefined8 *)(param_1 + 0x18),*puVar1,
                              *(undefined4 *)(lVar2 + 8));
        if (iVar9 != 0) {
          if (iVar9 == 1) {
            iVar9 = 7;
          }
          goto LAB_1452d18ce;
        }
      }
      FUN_14550a4f0(*puVar1,1);
      if (bVar7) {
        FUN_1452d1680(param_1,param_2);
        puVar12 = (undefined4 *)FUN_144f07150(&local_160);
        uVar11 = puVar12[1];
        uVar5 = puVar12[2];
        uVar6 = puVar12[3];
        *(undefined4 *)(lVar2 + 0x158) = *puVar12;
        *(undefined4 *)(lVar2 + 0x15c) = uVar11;
        *(undefined4 *)(lVar2 + 0x160) = uVar5;
        *(undefined4 *)(lVar2 + 0x164) = uVar6;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      goto LAB_1452d1c72;
    }
    piVar13 = _errno();
    *(int *)(lVar3 + 0x178) = *piVar13;
    piVar13 = _errno();
    iVar9 = *piVar13;
    piVar13 = _errno();
    uVar14 = FUN_144bbe240(iVar9,local_148,0x100);
    FUN_144f14b70(param_2,"sa_addr inet_ntop() failed with errno %d: %s",*piVar13,uVar14);
    iVar9 = 2;
  }
LAB_1452d18ce:
  uVar4 = *puVar1;
  if (uVar4 == 0xffffffffffffffff) goto LAB_1452d1c72;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
LAB_1452d1c62:
    Ordinal_3(uVar4);
  }
  else {
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_144bbae00(param_2,uVar4);
      goto LAB_1452d1c62;
    }
    FUN_144bbae00(param_2,uVar4);
    FUN_144bbace0(param_2,1);
    (**(code **)(lVar2 + 0x38))(*(undefined8 *)(lVar2 + 0x40),uVar4);
    FUN_144bbace0(param_2,0);
  }
  *puVar1 = 0xffffffffffffffff;
LAB_1452d1c72:
  local_1a8 = (undefined4 *)*puVar1;
  FUN_144f14c60(param_2,param_1,"cf_socket_open() -> %d, fd=%qd",iVar9);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 1452d1d00 FUN_1452d1d00 body=385 status=ok
// SIG undefined FUN_1452d1d00(void)

undefined8 FUN_1452d1d00(longlong param_1,undefined8 param_2,undefined1 param_3,char *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) == '\0') {
    FUN_144f14c60(param_2,param_1,"connect");
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    iVar3 = (int)uVar4;
    while( true ) {
      if (iVar3 != 0) {
        return uVar4;
      }
      if (*param_4 == '\0') {
        return uVar4;
      }
      *param_4 = '\0';
      if (*plVar1 != 0) break;
      cVar2 = FUN_144f13e90(*(undefined8 *)(param_1 + 8));
      if (cVar2 == '\0') {
        cVar2 = '\x02';
LAB_1452d1dea:
        FUN_144f14c60(param_2,param_1,"installing subfilter for HTTP/1.1");
        FUN_144f14ad0(param_2,"CONNECT tunnel: HTTP/1.%d negotiated",cVar2 != '\x01');
        uVar4 = FUN_1452d2660(param_1,param_2);
      }
      else {
        cVar2 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x4d6);
        if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) goto LAB_1452d1dea;
        if (cVar2 != '\x03') {
          FUN_144f14ad0(param_2,"CONNECT tunnel: unsupported ALPN(%d) negotiated",cVar2);
          return 7;
        }
        FUN_144f14c60(param_2,param_1,"installing subfilter for HTTP/2");
        FUN_144f14ad0(param_2,"CONNECT tunnel: HTTP/2 negotiated");
        uVar4 = FUN_1452d3ed0(param_1,param_2);
      }
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *plVar1 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
      iVar3 = (int)uVar4;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
    *param_4 = '\x01';
  }
  else {
    *param_4 = '\x01';
  }
  return 0;
}



// FUNCTION 1452d1e90 FUN_1452d1e90 body=46 status=ok
// SIG undefined FUN_1452d1e90(void)

void FUN_1452d1e90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"destroy");
                    /* WARNING: Could not recover jumptable at 0x0001452d1eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(uVar1);
  return;
}



// FUNCTION 1452d1ec0 FUN_1452d1ec0 body=147 status=ok
// SIG undefined FUN_1452d1ec0(void)

void FUN_1452d1ec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"close");
  *(undefined1 *)(param_1 + 0x24) = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    for (lVar3 = *(longlong *)(param_1 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
      if (lVar3 == lVar2) {
        FUN_144f13c00(param_1,lVar2,param_2,0);
        break;
      }
    }
    *plVar1 = 0;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1452d1f60 FUN_1452d1f60 body=164 status=ok
// SIG undefined FUN_1452d1f60(void)

undefined8 FUN_1452d1f60(longlong param_1,undefined8 *param_2,uint *param_3,undefined1 *param_4)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x2d1) == '\0') {
    if (*(int *)(param_1 + 0x20) == 1) {
      uVar4 = *(undefined8 *)(lVar1 + 0x88);
    }
    else {
      uVar4 = *(undefined8 *)(lVar1 + 0x70);
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0xa0);
  }
  *param_2 = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) == 1) {
    uVar2 = (uint)*(ushort *)(lVar1 + 0x4d2);
  }
  else if (*(char *)(lVar1 + 0x2d2) == '\0') {
    uVar2 = *(uint *)(lVar1 + 0x4c4);
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x4c8);
  }
  *param_3 = uVar2;
  if ((char *)*param_2 != *(char **)(*(longlong *)(param_1 + 0x18) + 0x70)) {
    pcVar3 = strchr((char *)*param_2,0x3a);
    *param_4 = pcVar3 != (char *)0x0;
    return 0;
  }
  *param_4 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x2d3);
  return 0;
}



// FUNCTION 1452d2010 FUN_1452d2010 body=712 status=ok
// SIG undefined FUN_1452d2010(void)

int FUN_1452d2010(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  char *_Str;
  uint uVar6;
  undefined1 *puVar7;
  char cVar8;
  longlong local_res8 [2];
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar2 = *(longlong *)(param_2 + 0x18);
  local_res8[0] = 0;
  if (*(char *)(lVar2 + 0x2d1) == '\0') {
    if (*(int *)(param_2 + 0x20) != 1) {
      _Str = *(char **)(lVar2 + 0x70);
      goto LAB_1452d207a;
    }
    _Str = *(char **)(lVar2 + 0x88);
    uVar6 = (uint)*(ushort *)(lVar2 + 0x4d2);
  }
  else {
    _Str = *(char **)(lVar2 + 0xa0);
    if (*(int *)(param_2 + 0x20) == 1) {
      uVar6 = (uint)*(ushort *)(lVar2 + 0x4d2);
    }
    else {
LAB_1452d207a:
      if (*(char *)(lVar2 + 0x2d2) == '\0') {
        uVar6 = *(uint *)(lVar2 + 0x4c4);
      }
      else {
        uVar6 = *(uint *)(lVar2 + 0x4c8);
      }
    }
  }
  if (_Str == *(char **)(lVar2 + 0x70)) {
    cVar8 = *(char *)(lVar2 + 0x2d3);
  }
  else {
    pcVar1 = strchr(_Str,0x3a);
    cVar8 = pcVar1 != (char *)0x0;
  }
  puVar4 = &DAT_14996de1b;
  puVar7 = &DAT_14996de1b;
  if (cVar8 != '\0') {
    puVar7 = &DAT_149c06564;
    puVar4 = &DAT_149c06568;
  }
  lVar2 = FUN_144f2b8b0("%s%s%s:%d",puVar4,_Str,puVar7,CONCAT44(uVar9,uVar6));
  if (lVar2 == 0) {
    iVar5 = 0x1b;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    iVar5 = FUN_144f21650(local_res8,"CONNECT",7,0,0,lVar2,lVar3,0,0);
    if ((((iVar5 == 0) &&
         (iVar5 = FUN_144f21490(param_3,*(undefined8 *)(param_2 + 0x18),local_res8[0],0,
                                *(undefined8 *)(local_res8[0] + 0x18),1), iVar5 == 0)) &&
        ((param_4 != 1 ||
         ((lVar3 = FUN_144f1d840(param_3,*(undefined8 *)(param_2 + 0x18),&DAT_149c07670,4),
          lVar3 != 0 ||
          (iVar5 = FUN_1452db540(local_res8[0] + 0x28,&DAT_149c07670,lVar2), iVar5 == 0)))))) &&
       ((*(longlong *)(param_3 + 0x1350) == 0 ||
        (iVar5 = FUN_1452db580(local_res8[0] + 0x28), iVar5 == 0)))) {
      lVar3 = FUN_144f1d840(param_3,*(undefined8 *)(param_2 + 0x18),"User-Agent",10);
      if ((lVar3 == 0) && (*(longlong *)(param_3 + 0x840) != 0)) {
        iVar5 = FUN_1452db540(local_res8[0] + 0x28,"User-Agent");
        if (iVar5 != 0) goto LAB_1452d228f;
      }
      if (param_4 == 1) {
        lVar3 = FUN_144f1d840(param_3,*(undefined8 *)(param_2 + 0x18),"Proxy-Connection",0x10);
        if (lVar3 == 0) {
          iVar5 = FUN_1452db540(local_res8[0] + 0x28,"Proxy-Connection","Keep-Alive");
          if (iVar5 != 0) goto LAB_1452d228f;
        }
      }
      iVar5 = FUN_144f1e010(param_3,1,local_res8[0] + 0x28);
      if (iVar5 == 0) goto LAB_1452d22a9;
    }
  }
LAB_1452d228f:
  if (local_res8[0] != 0) {
    FUN_144f21a30();
    local_res8[0] = 0;
  }
LAB_1452d22a9:
  (*(code *)PTR_free_14c6d9f28)(lVar2);
  *param_1 = local_res8[0];
  return iVar5;
}



// FUNCTION 1452d22e0 FUN_1452d22e0 body=113 status=ok
// SIG undefined FUN_1452d22e0(void)

int FUN_1452d22e0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  if (lVar1 == 0) {
    iVar2 = 0x1b;
  }
  else {
    iVar2 = FUN_144f13b40(local_res18,&PTR_s_HTTP_PROXY_14c732340,lVar1);
    if (iVar2 == 0) {
      lVar1 = 0;
      FUN_144f13bd0(param_1,local_res18[0]);
    }
  }
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  return iVar2;
}



// FUNCTION 1452d2360 FUN_1452d2360 body=428 status=ok
// SIG undefined FUN_1452d2360(void)

ulonglong FUN_1452d2360(longlong param_1,longlong param_2,undefined1 param_3,char *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) == '\0') {
    FUN_144f14c60(param_2,param_1,"connect");
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    if (((int)uVar3 == 0) && (*param_4 != (char)uVar3)) {
      *param_4 = (char)uVar3;
      if (lVar4 == 0) {
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x2e8);
        if ((*(uint *)((longlong)puVar1 + 0x8c) & 0x4000) != 0) {
          FUN_144f14b70(param_2,"%s cannot be done over CONNECT",*puVar1);
          return 1;
        }
        uVar3 = FUN_144f24bb0(param_2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        lVar4 = (*(code *)PTR_calloc_14c6d9f40)(1,0xd8);
        if (lVar4 == 0) {
          return 0x1b;
        }
        FUN_144f14ad0(param_2,"allocate connect buffer");
        FUN_144f07cf0(lVar4 + 0x70,0x4000);
        FUN_144f07cf0(lVar4 + 0x90,0x100000);
        FUN_144f16220(*(undefined8 *)(param_1 + 0x18),0);
        uVar3 = FUN_1452d26b0(param_1,param_2,lVar4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *(longlong *)(param_1 + 0x10) = lVar4;
      }
      uVar2 = FUN_1452d2e10(param_1,param_2,lVar4);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
        *(undefined8 *)(param_2 + 0x1350) = 0;
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
           (*(int *)(*(longlong *)(param_1 + 0x10) + 0xd0) == 4)) {
          *param_4 = '\x01';
          *(undefined1 *)(param_1 + 0x24) = 1;
          FUN_1452d2700(param_1,param_2);
          return 0;
        }
      }
      *param_4 = '\0';
    }
  }
  else {
    *param_4 = '\x01';
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1452d2510 FUN_1452d2510 body=117 status=ok
// SIG undefined FUN_1452d2510(void)

undefined8 FUN_1452d2510(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if ((((int)uVar2 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != (char)uVar2)) &&
     (*(char *)(param_1 + 0x24) == (char)uVar2)) {
    uVar2 = FUN_144f13ec0(param_1,param_2);
    *param_3 = uVar2;
    if ((lVar1 == 0) || (uVar2 = 1, *(int *)(lVar1 + 0x38) == 1)) {
      uVar2 = 0x10000;
    }
  }
  return uVar2;
}



// FUNCTION 1452d2590 FUN_1452d2590 body=55 status=ok
// SIG undefined FUN_1452d2590(void)

void FUN_1452d2590(undefined8 param_1,undefined8 param_2)

{
  FUN_144f14c60(param_2,param_1,"destroy");
  FUN_1452d2700(param_1,param_2);
  return;
}



// FUNCTION 1452d25d0 FUN_1452d25d0 body=143 status=ok
// SIG undefined FUN_1452d25d0(void)

void FUN_1452d25d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_144f14c60(param_2,param_1,"close");
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0xd0) != 0) {
      if (*(int *)(lVar1 + 0xd0) == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_144f14c60(param_2,param_1,"new tunnel state \'init\'");
      FUN_1452d26b0(param_1,param_2,lVar1);
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1452d2660 FUN_1452d2660 body=65 status=ok
// SIG undefined FUN_1452d2660(void)

ulonglong FUN_1452d2660(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 local_res18 [2];
  
  uVar1 = FUN_144f13b40(local_res18,&PTR_s_H1_PROXY_14c7323b0,0);
  if ((int)uVar1 == 0) {
    FUN_144f13bd0(param_1,local_res18[0]);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1452d26b0 FUN_1452d26b0 body=67 status=ok
// SIG undefined FUN_1452d26b0(void)

void FUN_1452d26b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_144f07dc0(param_3 + 0x70);
  FUN_144f07dc0(param_3 + 0x90);
  *(undefined4 *)(param_3 + 0xc0) = 1;
  *(undefined4 *)(param_3 + 0xd0) = 0;
  *(undefined8 *)(param_3 + 200) = 0;
  *(undefined1 *)(param_3 + 0xd5) = 0;
  return;
}



// FUNCTION 1452d2700 FUN_1452d2700 body=215 status=ok
// SIG undefined FUN_1452d2700(void)

void FUN_1452d2700(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0xd0) != 5) {
      if (*(int *)(lVar1 + 0xd0) == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_144f14c60(param_2,param_1,"new tunnel state \'failed\'");
      *(undefined4 *)(lVar1 + 0xd0) = 5;
      FUN_144f07dc0(lVar1 + 0x70);
      FUN_144f07dc0(lVar1 + 0x90);
      *(undefined4 *)(param_2 + 0x13e8) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
      *(undefined8 *)(param_2 + 0x1350) = 0;
    }
    FUN_144f07d10(lVar1 + 0x70);
    FUN_144f07d10(lVar1 + 0x90);
    (*(code *)PTR_free_14c6d9f28)(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1452d27e0 FUN_1452d27e0 body=682 status=ok
// SIG undefined FUN_1452d27e0(void)

int FUN_1452d27e0(undefined8 param_1,longlong param_2,longlong param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_144f195b0(param_4,"WWW-Authenticate:",0x11);
  if (((iVar2 == 0) || (iVar2 = *(int *)(param_2 + 0x150), iVar2 != 0x191)) &&
     ((iVar2 = FUN_144f195b0(param_4,"Proxy-authenticate:",0x13), iVar2 == 0 ||
      (iVar2 = *(int *)(param_2 + 0x150), iVar2 != 0x197)))) {
    iVar2 = FUN_144f195b0(param_4,"Content-Length:",0xf);
    if (iVar2 == 0) {
      cVar1 = FUN_144f1d660(param_4,"Connection:",0xb,"close",5);
      if (cVar1 == '\0') {
        iVar2 = FUN_144f195b0(param_4,"Transfer-Encoding:",0x12);
        if (iVar2 != 0) {
          if (*(int *)(param_2 + 0x150) - 200U < 100) {
            FUN_144f14ad0(param_2,"Ignoring Transfer-Encoding in CONNECT %03d response");
            return 0;
          }
          cVar1 = FUN_144f1d660(param_4,"Transfer-Encoding:",0x12,"chunked",7);
          if (cVar1 == '\0') {
            return 0;
          }
          FUN_144f14ad0(param_2,"CONNECT responded chunked");
          *(undefined1 *)(param_3 + 0xd4) = 1;
          FUN_1452d93b0(param_2);
          return 0;
        }
        cVar1 = FUN_144f1d660(param_4,"Proxy-Connection:",0x11,"close",5);
        if (cVar1 == '\0') {
          iVar2 = strncmp(param_4,"HTTP/1.",7);
          if (iVar2 != 0) {
            return 0;
          }
          if (1 < (byte)(param_4[7] - 0x30U)) {
            return 0;
          }
          if (param_4[8] != ' ') {
            return 0;
          }
          if (9 < (byte)(param_4[9] - 0x30U)) {
            return 0;
          }
          if (9 < (byte)(param_4[10] - 0x30U)) {
            return 0;
          }
          if (9 < (byte)(param_4[0xb] - 0x30U)) {
            return 0;
          }
          if ((byte)(param_4[0xc] - 0x30U) < 10) {
            return 0;
          }
          iVar2 = (int)param_4[0xb] + (((int)param_4[10] + param_4[9] * 10) * 5 + -0xa68) * 2;
          *(int *)(param_2 + 0x150) = iVar2;
          *(int *)(param_2 + 0x13ec) = iVar2;
          return 0;
        }
      }
      *(undefined1 *)(param_3 + 0xd5) = 1;
    }
    else if (*(int *)(param_2 + 0x150) - 200U < 100) {
      FUN_144f14ad0(param_2,"Ignoring Content-Length in CONNECT %03d response");
    }
    else {
      FUN_1452b1ac0(param_4 + 0xf,0,10,param_3 + 200);
    }
  }
  else {
    lVar3 = FUN_144f1d730(param_4);
    if (lVar3 == 0) {
      return 0x1b;
    }
    FUN_144f14c60(param_2,param_1,"CONNECT: fwd auth header \'%s\'",param_4);
    iVar2 = FUN_144f20010(param_2,iVar2 == 0x197,lVar3);
    (*(code *)PTR_free_14c6d9f28)(lVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}



// FUNCTION 1452d2a90 FUN_1452d2a90 body=896 status=ok
// SIG undefined FUN_1452d2a90(void)

ulonglong FUN_1452d2a90(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char local_res8 [16];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  longlong local_50 [3];
  
  uVar5 = FUN_144f13ec0();
  *param_4 = 0;
  bVar1 = false;
  cVar2 = FUN_144f14130(param_2,*(undefined4 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
LAB_1452d2df6:
    uVar10 = 0;
  }
  else {
    if (*(int *)(param_3 + 0xc0) == 0) {
LAB_1452d2dc6:
      uVar10 = 0;
      if (bVar1) {
        *param_4 = 1;
        return 0x38;
      }
    }
    else {
      do {
        uVar3 = FUN_144f15080(param_2,uVar5,local_res8,1,local_50);
        if (uVar3 == 0x51) goto LAB_1452d2df6;
        iVar4 = FUN_144f25e70(param_2);
        if (iVar4 != 0) {
          return 0x2a;
        }
        if (uVar3 != 0) {
          *(undefined4 *)(param_3 + 0xc0) = 0;
          *param_4 = 1;
          return (ulonglong)uVar3;
        }
        uVar10 = 0;
        if (local_50[0] < 1) {
          if (((*(int *)(param_2 + 0x210) == 0) || (*(int *)(param_2 + 0xe38) == 0)) ||
             (*(longlong *)(param_2 + 0x1350) == 0)) {
            bVar1 = true;
            FUN_144f14b70(param_2,"Proxy CONNECT aborted");
          }
          else {
            *(undefined1 *)(param_3 + 0xd5) = 1;
            FUN_144f14ad0(param_2,"Proxy CONNECT connection closed");
            bVar1 = false;
          }
          *(undefined4 *)(param_3 + 0xc0) = 0;
          goto LAB_1452d2dc6;
        }
        if (*(int *)(param_3 + 0xc0) == 2) {
          if (*(longlong *)(param_3 + 200) == 0) {
            local_50[1] = 0;
            puVar7 = local_res20;
            plVar13 = local_50 + 1;
            pcVar8 = local_res8;
LAB_1452d2b85:
            iVar4 = FUN_1452d93d0(param_2,pcVar8,1,plVar13,puVar7);
            if (iVar4 == -1) {
              FUN_144f14ad0(param_2,"chunk reading DONE");
              goto LAB_1452d2d1a;
            }
          }
          else {
            lVar6 = *(longlong *)(param_3 + 200) + -1;
            *(longlong *)(param_3 + 200) = lVar6;
            if (lVar6 < 1) {
              *(undefined4 *)(param_3 + 0xc0) = 0;
              *param_4 = 1;
              goto LAB_1452d2d3b;
            }
          }
        }
        else {
          iVar4 = thunk_FUN_144f07eb0(param_3 + 0x70,local_res8,1);
          if (iVar4 != 0) {
            FUN_144f14b70(param_2,"CONNECT response too large");
            return 0x38;
          }
          if (local_res8[0] == '\n') {
            *(longlong *)(param_3 + 0xb8) = *(longlong *)(param_3 + 0xb8) + 1;
            pcVar8 = (char *)FUN_144f07e80(param_3 + 0x70);
            uVar9 = FUN_144f07ea0(param_3 + 0x70);
            FUN_144f149e0(param_2,1,pcVar8,uVar9);
            if (*(char *)(param_2 + 0xadf) == '\0') {
              uVar12 = 0x14;
              if (*(longlong *)(param_3 + 0xb8) == 1) {
                uVar12 = 0x1c;
              }
              uVar10 = FUN_144f14dc0(param_2,uVar12,pcVar8,uVar9);
              if ((int)uVar10 != 0) {
                return uVar10;
              }
            }
            uVar11 = FUN_144f1d5e0(param_2,uVar9,1);
            uVar10 = uVar11 & 0xffffffff;
            if ((int)uVar11 != 0) {
              return uVar11;
            }
            if ((*pcVar8 == '\r') || (*pcVar8 == '\n')) {
              if ((*(int *)(param_2 + 0x150) == 0x197) && (*(char *)(param_2 + 0x13c9) == '\0')) {
                *(undefined4 *)(param_3 + 0xc0) = 2;
                if (*(longlong *)(param_3 + 200) != 0) {
                  FUN_144f14ad0(param_2,"Ignore %I64d bytes of response-body");
                  goto LAB_1452d2d20;
                }
                if (*(char *)(param_3 + 0xd4) != '\0') {
                  FUN_144f14ad0(param_2,"Ignore chunked response-body");
                  *(undefined1 *)(param_2 + 0x1cd) = 1;
                  plVar13 = local_50;
                  if (pcVar8[1] == '\n') {
                    pcVar8 = pcVar8 + 1;
                  }
                  puVar7 = local_58;
                  pcVar8 = pcVar8 + 1;
                  goto LAB_1452d2b85;
                }
                FUN_144f14c60(param_2,param_1,"CONNECT: no content-length or chunked");
              }
LAB_1452d2d1a:
              *(undefined4 *)(param_3 + 0xc0) = 0;
            }
            else {
              uVar11 = FUN_1452d27e0(param_1,param_2,param_3,pcVar8);
              uVar10 = uVar11 & 0xffffffff;
              if ((int)uVar11 != 0) {
                return uVar11;
              }
              FUN_144f07dc0(param_3 + 0x70);
            }
          }
        }
LAB_1452d2d20:
      } while (*(int *)(param_3 + 0xc0) != 0);
    }
    *param_4 = 1;
    if ((int)uVar10 == 0) {
LAB_1452d2d3b:
      if (99 < *(int *)(param_2 + 0x13ec) - 200U) {
        uVar3 = FUN_144f20280(param_2);
        uVar10 = (ulonglong)uVar3;
      }
    }
  }
  return uVar10;
}



// FUNCTION 1452d2e10 FUN_1452d2e10 body=1522 status=ok
// SIG undefined FUN_1452d2e10(void)

int FUN_1452d2e10(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char local_res8 [8];
  int local_res18 [2];
  longlong local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  piVar1 = (int *)(param_3 + 0xd0);
  if ((param_3 != 0) && (*piVar1 == 4)) {
    return 0;
  }
  if ((param_3 != 0) && (*piVar1 == 5)) {
    return 0x38;
  }
  do {
    lVar6 = FUN_144f15e70(param_2,0,1);
    if (lVar6 < 1) {
      FUN_144f14b70(param_2,"Proxy CONNECT aborted due to timeout");
      iVar5 = 0x1c;
      goto LAB_1452d3387;
    }
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      FUN_144f14c60(param_2,param_1,"CONNECT start");
      local_res20 = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 400));
      *(undefined8 *)(param_2 + 400) = 0;
      iVar5 = FUN_1452d2010(&local_res20,param_1,param_2,1);
      if (iVar5 == 0) {
        FUN_144f14ad0(param_2,"Establish HTTP proxy tunnel to %s",
                      *(undefined8 *)(local_res20 + 0x18));
        FUN_144f07dc0(param_3 + 0x90);
        *(undefined8 *)(param_3 + 0xb0) = 0;
        *(undefined8 *)(param_3 + 0xb8) = 0;
        iVar5 = FUN_1452e7e70(local_res20,*(char *)(*(longlong *)(param_1 + 0x18) + 0x10c) != '\x01'
                              ,param_3 + 0x90);
        if (iVar5 != 0) goto LAB_1452d2f69;
      }
      else {
LAB_1452d2f69:
        FUN_144f14b70(param_2,"Failed sending CONNECT to proxy");
      }
      if (local_res20 != 0) {
        FUN_144f21a30();
      }
      if (iVar5 != 0) goto LAB_1452d3387;
      if (*piVar1 != 1) {
        FUN_144f14c60(param_2,param_1,"new tunnel state \'connect\'");
        *piVar1 = 1;
        *(undefined4 *)(param_3 + 0xc0) = 1;
        FUN_144f07dc0(param_3 + 0x70);
      }
LAB_1452d2fc2:
      FUN_144f14c60(param_2,param_1,"CONNECT send");
      lVar6 = FUN_144f07e80(param_3 + 0x90);
      uVar7 = FUN_144f07ea0(param_3 + 0x90);
      uVar3 = *(ulonglong *)(param_3 + 0xb0);
      local_res18[0] = 0;
      if (uVar3 < uVar7) {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                          (*(longlong **)(param_1 + 8),param_2,lVar6 + uVar3,uVar7 - uVar3,
                           local_res18);
        if (lVar8 < 0) {
          if (local_res18[0] == 0x51) {
            local_res18[0] = 0;
            goto LAB_1452d308d;
          }
        }
        else {
          *(longlong *)(param_3 + 0xb0) = *(longlong *)(param_3 + 0xb0) + lVar8;
          FUN_144f149e0(param_2,2,lVar6 + uVar3,lVar8);
        }
        if ((local_res18[0] == 0) ||
           (FUN_144f14b70(param_2,"Failed sending CONNECT to proxy"), local_res18[0] == 0))
        goto LAB_1452d308d;
LAB_1452d309a:
        local_res8[0] = '\0';
      }
      else {
LAB_1452d308d:
        if (*(ulonglong *)(param_3 + 0xb0) < uVar7) goto LAB_1452d309a;
        local_res8[0] = '\x01';
      }
      iVar5 = local_res18[0];
      if (local_res18[0] != 0) goto LAB_1452d3387;
      if (local_res8[0] == '\0') {
        return 0;
      }
      if (*piVar1 != 2) {
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_144f14c60(param_2,param_1,"new tunnel state \'receive\'");
        *piVar1 = 2;
      }
LAB_1452d30e1:
      FUN_144f14c60(param_2,param_1,"CONNECT receive");
      iVar5 = FUN_1452d2a90(param_1,param_2,param_3,local_res8);
      iVar4 = FUN_144f25e70(param_2);
      if (iVar4 != 0) {
        iVar5 = 0x2a;
        goto LAB_1452d3387;
      }
      if (iVar5 != 0) goto LAB_1452d3387;
      if (local_res8[0] == '\0') {
        return 0;
      }
      if (*piVar1 != 3) {
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_144f14c60(param_2,param_1,"new tunnel state \'response\'");
        *piVar1 = 3;
      }
LAB_1452d3161:
      FUN_144f14c60(param_2,param_1,"CONNECT response");
      if (*(longlong *)(param_2 + 400) == 0) break;
      if ((*(char *)(param_3 + 0xd5) != '\0') || (*(char *)(lVar2 + 0x2ce) != '\0')) {
        FUN_144f14c60(param_2,param_1,"CONNECT need to close+open");
        FUN_144f14ad0(param_2,"Connect me again please");
        FUN_144f13d80(param_1,param_2);
        FUN_144f16220(lVar2,0);
        iVar5 = FUN_144f13d60(*(undefined8 *)(param_1 + 8),param_2,0,local_res8);
        if (iVar5 == 0) {
          return 0;
        }
LAB_1452d3387:
        if (*piVar1 == 5) {
          return iVar5;
        }
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_144f14c60(param_2,param_1,"new tunnel state \'failed\'");
        *piVar1 = 5;
        FUN_144f07dc0(param_3 + 0x70);
        FUN_144f07dc0(param_3 + 0x90);
        *(undefined4 *)(param_2 + 0x13e8) = 0;
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
        *(undefined8 *)(param_2 + 0x1350) = 0;
        return iVar5;
      }
      if (*piVar1 != 0) {
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_144f14c60(param_2,param_1,"new tunnel state \'init\'");
        FUN_1452d26b0(param_1,param_2,param_3);
      }
    }
    else {
      if (iVar5 == 1) goto LAB_1452d2fc2;
      if (iVar5 == 2) goto LAB_1452d30e1;
      if (iVar5 == 3) goto LAB_1452d3161;
    }
  } while (*(longlong *)(param_2 + 400) != 0);
  if (*(int *)(param_2 + 0x13ec) - 200U < 100) {
    if (*piVar1 != 4) {
      if (*piVar1 == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_144f14c60(param_2,param_1,"new tunnel state \'established\'");
      FUN_144f14ad0(param_2,"CONNECT phase completed");
      *(undefined2 *)(param_2 + 0xe3c) = 1;
      *piVar1 = 4;
      FUN_144f07dc0(param_3 + 0x70);
      FUN_144f07dc0(param_3 + 0x90);
      *(undefined4 *)(param_2 + 0x13e8) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
      *(undefined8 *)(param_2 + 0x1350) = 0;
    }
    FUN_144f14ad0(param_2,"CONNECT tunnel established, response %d",
                  *(undefined4 *)(param_2 + 0x13ec));
    iVar5 = 0;
  }
  else {
    (*(code *)PTR_free_14c6d9f28)(0);
    *(undefined8 *)(param_2 + 400) = 0;
    FUN_144f16220(lVar2,2);
    if (*piVar1 != 5) {
      if (*piVar1 == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_144f14c60(param_2,param_1,"new tunnel state \'failed\'");
      *piVar1 = 5;
      FUN_144f07dc0(param_3 + 0x70);
      FUN_144f07dc0(param_3 + 0x90);
      *(undefined4 *)(param_2 + 0x13e8) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x1350));
      *(undefined8 *)(param_2 + 0x1350) = 0;
    }
    FUN_144f14b70(param_2,"CONNECT tunnel failed, response %d",*(undefined4 *)(param_2 + 0x150));
    iVar5 = 0x38;
  }
  return iVar5;
}



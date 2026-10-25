// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149564829 FUN_149564829 body=123 status=ok
// SIG undefined FUN_149564829(void)

bool FUN_149564829(longlong param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if ((param_2 != 0) && (**(longlong **)(param_1 + 0x48) != 0)) {
      plVar1 = *(longlong **)(param_1 + 0x118);
      iVar3 = *(int *)((longlong)plVar1 + 0x1c);
      if ((longlong)iVar3 < 0) {
        iVar3 = (int)(((longlong)iVar3 * -0x400) /
                     ((longlong)(int)plVar1[5] + (longlong)*(int *)((longlong)plVar1 + 0x24)));
      }
      bVar2 = false;
      lVar4 = 0;
      for (lVar5 = *plVar1; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x38)) {
        lVar4 = lVar4 + 100;
      }
      if (iVar3 != 0) {
        bVar2 = 0x18 < (int)(lVar4 / (longlong)iVar3);
      }
    }
  }
  return bVar2;
}



// FUNCTION 1495648a4 FUN_1495648a4 body=287 status=ok
// SIG undefined FUN_1495648a4(void)

undefined8 FUN_1495648a4(undefined1 *param_1)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar6 = *(longlong *)(param_1 + 0x50);
  bVar1 = param_1[9];
  iVar4 = FUN_1495649c3(param_1,*(undefined1 *)(lVar6 + (ulonglong)bVar1));
  if (iVar4 == 0) {
    lVar6 = lVar6 + (ulonglong)bVar1;
    *(short *)(param_1 + 0x1a) = (short)*(undefined4 *)(lVar2 + 0x30) + -1;
    param_1[0xc] = 0;
    bVar1 = param_1[10];
    *(ushort *)(param_1 + 0x12) = (byte)param_1[9] + 8 + (ushort)bVar1;
    *(ulonglong *)(param_1 + 0x60) = lVar6 + 8 + (ulonglong)bVar1;
    *(ulonglong *)(param_1 + 0x58) =
         (ulonglong)*(uint *)(lVar2 + 0x34) + *(longlong *)(param_1 + 0x50);
    *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x50) + (ulonglong)bVar1;
    uVar3 = *(ushort *)(lVar6 + 3);
    uVar3 = uVar3 << 8 | uVar3 >> 8;
    *(ushort *)(param_1 + 0x18) = uVar3;
    if ((uint)uVar3 <= (*(int *)(lVar2 + 0x30) - 8U) / 6) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *param_1 = 1;
      if ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x32) & 0x20) == 0) {
        return 0;
      }
      uVar5 = FUN_149564aac(param_1);
      return uVar5;
    }
    uVar5 = 0x10244;
  }
  else {
    uVar5 = 0x10236;
  }
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar5,
                "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  return 0xb;
}



// FUNCTION 1495649c3 FUN_1495649c3 body=233 status=ok
// SIG undefined FUN_1495649c3(void)

undefined8 FUN_1495649c3(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  *(char *)(param_1 + 8) = (char)(param_2 >> 3);
  *(char *)(param_1 + 10) = '\x04' - (char)((param_2 >> 3) << 2);
  *(code **)(param_1 + 0x78) = FUN_149564b71;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((param_2 & 0xfffffff7) == 2) {
    *(undefined1 *)(param_1 + 2) = 0;
    lVar3 = 0x2a;
    lVar4 = 0x28;
    pcVar2 = FUN_149564d5b;
  }
  else {
    if ((param_2 & 0xfffffff7) != 5) {
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x101a0,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
      return 0xb;
    }
    *(undefined1 *)(param_1 + 2) = 1;
    lVar3 = 0x2e;
    lVar4 = 0x2c;
    if (7 < param_2) {
      pcVar2 = FUN_149564c2f;
      uVar5 = 1;
      goto LAB_149564a42;
    }
    *(undefined1 **)(param_1 + 0x78) = &LAB_149564d0a;
    pcVar2 = FUN_149564d23;
  }
  uVar5 = 0;
LAB_149564a42:
  *(undefined1 *)(param_1 + 3) = uVar5;
  *(code **)(param_1 + 0x80) = pcVar2;
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(lVar1 + lVar4);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(lVar1 + lVar3);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(lVar1 + 0x25);
  return 0;
}



// FUNCTION 149564aac FUN_149564aac body=197 status=ok
// SIG undefined FUN_149564aac(void)

undefined8 FUN_149564aac(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar2 = *(ushort *)(param_1 + 0x18);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x34);
  cVar1 = *(char *)(param_1 + 8);
  if (uVar2 != 0) {
    uVar3 = *(ushort *)(param_1 + 0x12);
    lVar5 = *(longlong *)(param_1 + 0x50);
    uVar8 = 0;
    do {
      uVar6 = *(ushort *)(lVar5 + (ulonglong)uVar3 + uVar8 * 2);
      uVar6 = uVar6 << 8 | uVar6 >> 8;
      uVar7 = 0x10211;
      if (((uint)uVar6 < (uint)uVar3 + (uint)uVar2 * 2) ||
         (uVar9 = (uint)uVar6, (int)((iVar4 - (uint)(cVar1 == '\0')) + -4) < (int)uVar9)) {
LAB_149564b46:
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar7,
                      "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
        return 0xb;
      }
      uVar6 = (**(code **)(param_1 + 0x78))(param_1,(ulonglong)uVar9 + lVar5);
      if (iVar4 < (int)(uVar6 + uVar9)) {
        uVar7 = 0x10216;
        goto LAB_149564b46;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(param_1 + 0x18));
  }
  return 0;
}



// FUNCTION 149564b71 FUN_149564b71 body=190 status=ok
// SIG undefined FUN_149564b71(void)

uint FUN_149564b71(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = param_2 + (ulonglong)*(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_2 + (ulonglong)*(byte *)(param_1 + 10));
  uVar5 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar5 = bVar2 & 0x7f;
    uVar6 = 0;
    do {
      bVar2 = *(byte *)(lVar9 + 1 + uVar6);
      uVar7 = uVar6 + 1;
      uVar5 = bVar2 & 0x7f | uVar5 << 7;
      if (6 < uVar6) break;
      uVar6 = uVar7;
    } while ((char)bVar2 < '\0');
    lVar9 = lVar9 + uVar7;
  }
  if (*(char *)(param_1 + 2) == '\0') {
    iVar8 = (int)lVar9 + 1;
  }
  else {
    uVar6 = 1;
    do {
      uVar7 = uVar6 + 1;
      if (8 < uVar6) break;
      pcVar1 = (char *)(lVar9 + uVar6);
      uVar6 = uVar7;
    } while (*pcVar1 < '\0');
    iVar8 = (int)lVar9 + (int)uVar7;
  }
  if (*(ushort *)(param_1 + 0xe) < uVar5) {
    uVar3 = *(ushort *)(param_1 + 0x10);
    uVar5 = (uVar5 - uVar3) % (*(int *)(*(longlong *)(param_1 + 0x48) + 0x34) - 4U) + (uint)uVar3;
    if (*(ushort *)(param_1 + 0xe) < uVar5) {
      uVar5 = (uint)uVar3;
    }
    uVar4 = (iVar8 - (int)param_2) + uVar5 + 4;
  }
  else {
    uVar5 = uVar5 + (iVar8 - (int)param_2);
    uVar4 = 4;
    if (4 < uVar5) {
      uVar4 = uVar5;
    }
  }
  return uVar4;
}



// FUNCTION 149564c2f FUN_149564c2f body=219 status=ok
// SIG undefined FUN_149564c2f(void)

void FUN_149564c2f(longlong param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar4 = (int)param_2;
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar2 = bVar1 & 0x7f;
    uVar8 = 0;
    do {
      lVar9 = uVar8 + 1;
      uVar7 = uVar8 + 1;
      uVar2 = param_2[lVar9] & 0x7f | uVar2 << 7;
      if (6 < uVar8) break;
      uVar8 = uVar7;
    } while ((char)param_2[lVar9] < '\0');
    param_2 = param_2 + uVar7;
  }
  bVar1 = param_2[1];
  uVar8 = (ulonglong)bVar1;
  if ((char)bVar1 < '\0') {
    uVar8 = (ulonglong)(bVar1 & 0x7f);
    lVar9 = 0;
    do {
      uVar8 = (ulonglong)(param_2[lVar9 + 2] & 0x7f) | uVar8 << 7;
      if (-1 < (char)param_2[lVar9 + 2]) {
        pbVar6 = param_2 + lVar9 + 2;
        goto LAB_149564c48;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 7);
    pbVar6 = param_2 + 9;
    uVar8 = uVar8 << 8 | (ulonglong)param_2[9];
  }
  else {
    pbVar6 = param_2 + 1;
  }
LAB_149564c48:
  *param_3 = uVar8;
  *(uint *)(param_3 + 2) = uVar2;
  param_3[1] = (ulonglong)(pbVar6 + 1);
  if (*(ushort *)(param_1 + 0xe) < uVar2) {
    FUN_149564de4();
    return;
  }
  uVar5 = ((int)(pbVar6 + 1) - iVar4) + uVar2;
  uVar3 = 4;
  if ((uVar5 & 0xfffc) != 0) {
    uVar3 = (short)uVar5;
  }
  *(undefined2 *)((longlong)param_3 + 0x16) = uVar3;
  *(short *)((longlong)param_3 + 0x14) = (short)uVar2;
  return;
}



// FUNCTION 149564d23 FUN_149564d23 body=56 status=ok
// SIG undefined FUN_149564d23(void)

void FUN_149564d23(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_149564e25(param_2 + 4,param_3);
  *(ushort *)(param_3 + 0x16) = (ushort)(byte)(cVar1 + 4);
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined2 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  return;
}



// FUNCTION 149564d5b FUN_149564d5b body=137 status=ok
// SIG undefined FUN_149564d5b(void)

void FUN_149564d5b(longlong param_1,longlong param_2,ulonglong *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar3 = param_2 + (ulonglong)*(byte *)(param_1 + 10);
  bVar1 = *(byte *)(param_2 + (ulonglong)*(byte *)(param_1 + 10));
  uVar5 = (ulonglong)bVar1;
  if ((char)bVar1 < '\0') {
    uVar5 = (ulonglong)(bVar1 & 0x7f);
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(lVar3 + 1 + uVar6);
      uVar7 = uVar6 + 1;
      uVar5 = (ulonglong)(bVar1 & 0x7f | (int)uVar5 << 7);
      if (6 < uVar6) break;
      uVar6 = uVar7;
    } while ((char)bVar1 < '\0');
    lVar3 = lVar3 + uVar7;
  }
  uVar2 = (uint)uVar5;
  *param_3 = uVar5;
  *(uint *)(param_3 + 2) = uVar2;
  param_3[1] = lVar3 + 1U;
  if (uVar2 <= *(ushort *)(param_1 + 0xe)) {
    uVar2 = ((int)(lVar3 + 1U) - (int)param_2) + uVar2;
    uVar4 = 4;
    if ((uVar2 & 0xfffc) != 0) {
      uVar4 = (short)uVar2;
    }
    *(undefined2 *)((longlong)param_3 + 0x16) = uVar4;
    *(short *)((longlong)param_3 + 0x14) = (short)uVar5;
    return;
  }
  FUN_149564de4();
  return;
}



// FUNCTION 149564de4 FUN_149564de4 body=65 status=ok
// SIG undefined FUN_149564de4(void)

ulonglong FUN_149564de4(longlong param_1,short param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = *(int *)(param_3 + 0x10) - (uint)uVar1;
  uVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x34) - 4;
  uVar4 = uVar2 % uVar3 + (uint)uVar1;
  if ((int)(uint)*(ushort *)(param_1 + 0xe) < (int)uVar4) {
    uVar4 = (uint)uVar1;
  }
  *(short *)(param_3 + 0x14) = (short)uVar4;
  *(short *)(param_3 + 0x16) = (((short)uVar4 + (short)*(undefined4 *)(param_3 + 8)) - param_2) + 4;
  return (ulonglong)uVar2 / (ulonglong)uVar3;
}



// FUNCTION 149564e25 FUN_149564e25 body=376 status=ok
// SIG undefined FUN_149564e25(void)

undefined8 FUN_149564e25(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  bVar1 = *param_1;
  uVar6 = (ulonglong)(char)bVar1;
  if ((longlong)uVar6 < 0) {
    bVar2 = param_1[1];
    if ((longlong)(char)bVar2 < 0) {
      uVar5 = ((uint)bVar1 << 0xe | (uint)param_1[2]) & 0x1fc07f;
      if ((char)param_1[2] < '\0') {
        uVar7 = ((uint)bVar2 << 0xe | (uint)param_1[3]) & 0x1fc07f;
        if ((char)param_1[3] < '\0') {
          bVar1 = param_1[4];
          uVar3 = uVar5 << 0xe | (uint)bVar1;
          if ((char)bVar1 < '\0') {
            uVar5 = uVar5 << 7 | uVar7;
            uVar7 = uVar7 << 0xe | (uint)param_1[5];
            if ((char)param_1[5] < '\0') {
              uVar3 = uVar3 << 0xe | (uint)param_1[6];
              if ((char)param_1[6] < '\0') {
                uVar3 = uVar3 & 0x1fc07f;
                uVar7 = uVar7 << 0xe | (uint)param_1[7];
                if ((char)param_1[7] < '\0') {
                  uVar6 = CONCAT44(bVar1 >> 3 & 0xf | uVar5 << 4,
                                   (uVar7 & 0x1fc07f) << 8 | (uint)param_1[8] | uVar3 << 0xf);
                  uVar4 = 9;
                }
                else {
                  uVar6 = CONCAT44(uVar5 >> 4,uVar3 << 7 | uVar7 & 0xf01fc07f);
                  uVar4 = 8;
                }
              }
              else {
                uVar6 = CONCAT44(uVar5 >> 0xb,(uVar7 & 0x1fc07f) << 7 | uVar3 & 0xf01fc07f);
                uVar4 = 7;
              }
            }
            else {
              uVar6 = CONCAT44(uVar5 >> 0x12,uVar7 | (uVar3 & 0x1fc07f) << 7);
              uVar4 = 6;
            }
          }
          else {
            uVar6 = CONCAT44(uVar5 >> 0x12,uVar3 | uVar7 << 7);
            uVar4 = 5;
          }
        }
        else {
          uVar6 = (ulonglong)(uVar5 << 7 | uVar7);
          uVar4 = 4;
        }
      }
      else {
        uVar6 = (ulonglong)(uVar5 | (bVar2 & 0x7f) << 7);
        uVar4 = 3;
      }
    }
    else {
      uVar6 = (ulonglong)(((int)(char)bVar1 & 0x7fU) << 7) | (longlong)(char)bVar2;
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  *param_2 = uVar6;
  return uVar4;
}



// FUNCTION 149564f9d FUN_149564f9d body=146 status=ok
// SIG undefined FUN_149564f9d(void)

void FUN_149564f9d(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (((int *)*plVar1 != (int *)0x0) && (2 < *(int *)*plVar1)) {
    local_10 = *(longlong *)(param_1 + 0xa0);
    *(bool *)(param_1 + 0x1a) = 0 < local_10;
    pcVar3 = FUN_149562686;
    if (0 < local_10) {
      pcVar3 = FUN_149562436;
    }
    pcVar2 = (code *)&LAB_14956242b;
    if (*(int *)(param_1 + 0x2c) == 0) {
      pcVar2 = pcVar3;
    }
    *(code **)(param_1 + 0x108) = pcVar2;
    if (*plVar1 != 0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,0x12,&local_10);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149565030 FUN_149565030 body=304 status=ok
// SIG undefined FUN_149565030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149565030(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 <= DAT_14cc1eddc) {
    if (DAT_14cc1edf8 != 0) {
      (*DAT_14c765d78)();
    }
    puVar3 = DAT_14cc1ee00;
    if (DAT_14cc1ee00 != (undefined8 *)0x0) {
      DAT_14cc1ee00 = (undefined8 *)*DAT_14cc1ee00;
      iVar2 = DAT_14cc1ee08 + -1;
      DAT_14cc1ee0c = (uint)(DAT_14cc1ee08 <= DAT_14cc1ede4);
      if (DAT_14cc1eb80 < param_1) {
        DAT_14cc1eb80 = (longlong)param_1;
      }
      lVar4 = DAT_14cc1eb48 + 1;
      bVar1 = DAT_14cc1eb68 <= DAT_14cc1eb48;
      DAT_14cc1eb48 = lVar4;
      DAT_14cc1ee08 = iVar2;
      if (bVar1) {
        DAT_14cc1eb68 = lVar4;
      }
    }
    if (DAT_14cc1edf8 != 0) {
      (*DAT_14c765d88)();
    }
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
  }
  lVar4 = (longlong)param_1;
  puVar3 = (undefined8 *)FUN_145e3bd67(lVar4);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    iVar2 = (*DAT_14c765d30)(puVar3);
    if (DAT_14cc1edf8 != 0) {
      (*DAT_14c765d78)();
    }
    if (DAT_14cc1eb80 < lVar4) {
      DAT_14cc1eb80 = lVar4;
    }
    _DAT_14cc1eb50 = iVar2 + _DAT_14cc1eb50;
    if (DAT_14cc1eb70 < _DAT_14cc1eb50) {
      DAT_14cc1eb70 = _DAT_14cc1eb50;
    }
    if (DAT_14cc1edf8 != 0) {
      (*DAT_14c765d88)();
    }
  }
  return puVar3;
}



// FUNCTION 149565160 FUN_149565160 body=122 status=ok
// SIG undefined FUN_149565160(void)

int FUN_149565160(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  iVar3 = 0;
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    lVar1 = **(longlong **)(param_1 + 0x48);
    if ((lVar1 != 0) &&
       (iVar2 = (**(code **)(lVar1 + 0x50))(*(longlong **)(param_1 + 0x48),0x14,&local_14),
       iVar3 = 0, iVar2 != 0xc)) {
      iVar3 = 0x408;
      if (local_14 == 0) {
        iVar3 = iVar2;
      }
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1495651db FUN_1495651db body=359 status=ok
// SIG undefined FUN_1495651db(void)

int FUN_1495651db(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = 0;
  if (param_1 == (longlong *)0x0) goto LAB_1495651ff;
  iVar4 = 0;
  if (param_5 == 0) {
LAB_149565239:
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],4);
    if (iVar3 == 0) {
      if (*(char *)((longlong)param_1 + 0x3f) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x3f) = 1;
      }
      local_58 = 0;
      uStack_50 = 0;
      local_60 = param_5;
      local_78 = 0;
      local_70 = param_3;
      local_68 = param_4;
      iVar3 = FUN_149565343(param_1,param_2,0,0);
      if (iVar3 == 0) {
        local_44 = -1;
        lVar2 = *(longlong *)param_1[1];
        iVar4 = 1;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x50))((longlong *)param_1[1],10,&local_44);
          if ((local_44 == 1) && (iVar4 = 0, -1 < param_1[4])) {
            iVar4 = 0;
            FUN_149560c18(param_1,0);
          }
        }
        goto LAB_149565239;
      }
    }
    iVar4 = 0;
  }
  FUN_149561c01(param_1,iVar4);
  plVar1 = (longlong *)param_1[2];
  if (*plVar1 != 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    *plVar1 = 0;
  }
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x30))(*param_1,param_1[0x10],0);
  }
  FUN_145e3b961(param_1[6]);
  FUN_145e3b961(param_1);
LAB_1495651ff:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149565343 FUN_149565343 body=3625 status=ok
// SIG undefined FUN_149565343(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_149565343(longlong param_1,longlong param_2,int param_3,code *param_4,
                       undefined8 param_5,uint param_6,uint param_7,undefined8 param_8,
                       undefined4 *param_9,undefined4 *param_10)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint *puVar20;
  short sVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong *puVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar46 [16];
  longlong lVar47;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_2a8 [32];
  uint *local_288;
  ulonglong local_280;
  int local_26c;
  longlong local_268;
  ulonglong local_260;
  uint *local_258;
  uint local_24c;
  uint *local_248;
  uint local_23c;
  undefined8 local_238;
  int local_22c;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  longlong local_210;
  uint local_204;
  uint *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  int local_1d4;
  longlong local_1d0;
  uint *local_1c8;
  uint local_1c0;
  ulonglong local_1b8;
  uint local_1ac;
  ulonglong local_1a8 [27];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_1d4 = 0;
  uVar18 = 8;
  if ((*(char *)(param_1 + 0x42) != '\0') ||
     ((*(char *)(param_1 + 0x3f) == '\0' &&
      (uVar18 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                          (*(longlong **)(param_1 + 8),1,1,10), (int)uVar18 != 0))))
  goto LAB_1495653cc;
  *(undefined1 *)(param_1 + 0x41) = 1;
  local_22c = param_3;
  local_1e0 = param_2;
  if (param_3 != 0) {
    do {
      if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_1495655bd:
        *(undefined1 *)(param_1 + 0x40) = 1;
        goto LAB_1495654ae;
      }
      uVar14 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                         (*(longlong **)(param_1 + 8),0,1,10);
      if ((param_4 == (code *)0x0) || (uVar14 != 5)) {
        if (uVar14 != 5) {
          if (uVar14 == 0) goto LAB_1495655bd;
          goto LAB_1495654f3;
        }
        break;
      }
      iVar15 = (*param_4)(param_5);
    } while (iVar15 != 0);
    param_4 = (code *)0x0;
  }
  param_3 = 0;
LAB_1495654ae:
  uVar14 = FUN_14956145a();
  if (local_1d4 != 0) {
    piVar4 = (int *)**(undefined8 **)(param_1 + 8);
    if (2 < *piVar4) {
      (**(code **)(piVar4 + 0x24))(*(undefined8 **)(param_1 + 8),0,0);
    }
  }
LAB_1495654f3:
  if (uVar14 == 0) {
    uVar27 = *(uint *)(param_1 + 0x58);
    uVar14 = CONCAT22(*(undefined2 *)(param_1 + 0x56),*(undefined2 *)(param_1 + 0x56)) & 0x1fe00;
    if ((uVar27 != 0) && (uVar14 != param_7)) {
      local_288 = (uint *)0x14bd4063a;
      uVar14 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xf57d);
      goto LAB_1495654fb;
    }
    lVar30 = **(longlong **)(param_1 + 0x30);
    local_268 = lVar30;
    if (*(uint *)(lVar30 + 0x60) < uVar27) {
      local_1f8 = (ulonglong)*(uint *)(param_1 + 0x5c);
      uVar17 = 0;
      lVar23 = 1;
      local_26c = param_3;
      local_23c = uVar14;
      do {
        uVar2 = *(uint *)(lVar30 + 100 + lVar23 * 4);
        if (uVar2 < uVar27) {
          iVar15 = (int)lVar23 + 3;
          do {
            if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_1495656c4:
              uVar14 = 0xffffffff;
              if (lVar23 == 1) {
                uVar14 = uVar27;
              }
              *(uint *)(local_268 + 100 + lVar23 * 4) = uVar14;
              uVar17 = 0;
              lVar30 = local_268;
              if (*(char *)(param_1 + 0x3f) == '\0') {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                          (*(longlong **)(param_1 + 8),iVar15,1,9);
                lVar30 = local_268;
              }
              goto LAB_1495656a9;
            }
            uVar14 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                               (*(longlong **)(param_1 + 8),iVar15,1,10);
            if ((param_4 == (code *)0x0) || (uVar14 != 5)) {
              if (uVar14 == 5) goto LAB_14956569f;
              param_3 = local_26c;
              if (uVar14 == 0) goto LAB_1495656c4;
              goto LAB_149565da3;
            }
            iVar16 = (*param_4)(param_5);
          } while (iVar16 != 0);
          uVar14 = 5;
LAB_14956569f:
          param_4 = (code *)0x0;
          lVar30 = local_268;
          uVar27 = uVar2;
          uVar17 = uVar14;
        }
LAB_1495656a9:
        lVar23 = lVar23 + 1;
      } while (lVar23 != 5);
      if (*(uint *)(lVar30 + 0x60) < uVar27) {
        local_258 = (uint *)(ulonglong)*(uint *)(lVar30 + 0x60);
        local_238 = (ulonglong)*(uint *)(param_1 + 0x58);
        uVar26 = (ulonglong)(*(uint *)(param_1 + 0x58) + 0x1000) + 0xffffffff021 >> 0xc;
        uVar18 = uVar26 << 0x20;
        local_260 = ((longlong)uVar18 >> 0x1b) + local_238 * 2 + 0x28;
        puVar19 = (uint *)FUN_145e3bd67();
        puVar20 = local_258;
        uVar14 = 7;
        param_3 = local_26c;
        if (puVar19 == (uint *)0x0) goto LAB_1495654fb;
        iVar15 = (int)uVar26;
        local_24c = uVar27;
        local_218 = uVar18;
        memset(puVar19,0,local_260);
        puVar19[1] = iVar15 + 1;
        uVar14 = 0x1000;
        if ((uint)local_238 < 0x1000) {
          uVar14 = (uint)local_238;
        }
        uVar18 = FUN_145e3bd67(uVar14 * 2);
        auVar12 = _DAT_149931e80;
        local_248 = puVar19;
        if ((uVar18 == 0) ||
           (iVar16 = (int)((ulonglong)((int)puVar20 + 0x1001) + 0xffffffff021 >> 0xc),
           iVar15 < iVar16)) {
          FUN_145e3b961(uVar18);
          uVar17 = 7;
          if (uVar18 == 0) {
LAB_149565e6d:
            FUN_145e3b961(puVar19);
            puVar19 = (uint *)0x0;
            lVar30 = local_268;
            goto LAB_149565d8f;
          }
        }
        else {
          local_200 = puVar19 + 2;
          uVar26 = (ulonglong)iVar16;
          local_218 = (longlong)local_218 >> 0x20;
          local_1f0 = (longlong)puVar19 + 0x16;
          auVar42 = pmovsxbq(unaff_XMM6,0x706);
          auVar43 = pmovsxbq(unaff_XMM7,0x504);
          auVar44 = pmovsxbq(unaff_XMM8,0x302);
          auVar45 = pmovsxbq(unaff_XMM9,0x100);
          auVar46 = pmovsxbq(unaff_XMM12,0x808);
          local_260 = uVar18;
          do {
            uVar18 = local_218;
            uVar17 = FUN_149561ea4(param_1,uVar26 & 0xffffffff,&local_1d0);
            if (uVar17 != 0) {
              FUN_145e3b961(local_260);
              puVar19 = local_248;
              goto LAB_149565e6d;
            }
            local_258 = local_1c8 + 1;
            if (uVar26 == uVar18) {
              local_228 = (ulonglong)((int)local_238 - local_1c0);
            }
            else {
              local_228 = (ulonglong)(local_1d0 - (longlong)local_258) >> 2;
            }
            lVar30 = (longlong)local_200 +
                     (ulonglong)local_1c0 * 2 + (longlong)(int)local_248[1] * 0x20;
            local_204 = local_1c0 + 1;
            local_1e8 = uVar26;
            local_1c8 = local_258;
            if ((int)local_228 < 1) {
              local_1ac = 0;
              local_1b8 = 0;
              local_1c0 = local_204;
              memset(local_1a8,0,0xd0);
              uVar14 = 1;
              puVar20 = local_258;
LAB_149565c82:
              uVar18 = local_260;
              uVar24 = (ulonglong)uVar14;
              puVar29 = local_1a8 + uVar24 * 2 + 1;
              uVar26 = local_228;
              do {
                if (((uint)uVar26 >> ((uint)uVar24 & 0x1f) & 1) != 0) {
                  local_280 = uVar18;
                  local_288 = &local_1ac;
                  FUN_14956616d(puVar20,*puVar29,(int)puVar29[-1],&local_1b8);
                  uVar26 = local_228;
                  puVar20 = local_258;
                }
                uVar24 = uVar24 + 1;
                puVar29 = puVar29 + 2;
              } while ((int)uVar24 != 0xd);
            }
            else {
              uVar18 = local_228 & 0xffffffff;
              lVar23 = uVar18 - 1;
              auVar32._8_4_ = (int)lVar23;
              auVar32._0_8_ = lVar23;
              auVar32._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
              lVar23 = (longlong)(int)local_248[1] * 0x20 + (ulonglong)local_1c0 * 2 + local_1f0;
              uVar26 = 0;
              auVar34 = auVar45;
              auVar35 = auVar44;
              auVar36 = auVar43;
              auVar37 = auVar42;
              do {
                lVar31 = SUB168(auVar32 ^ auVar12,0);
                auVar38._0_8_ = -(ulonglong)(lVar31 < SUB168(auVar34 ^ auVar12,0));
                lVar33 = SUB168(auVar32 ^ auVar12,8);
                auVar38._8_8_ = -(ulonglong)(lVar33 < SUB168(auVar34 ^ auVar12,8));
                auVar48 = pshuflw(unaff_XMM13,auVar38,0xe8);
                auVar49._8_4_ = 0xffffffff;
                auVar49._0_8_ = 0xffffffffffffffff;
                auVar49._12_4_ = 0xffffffff;
                auVar49 = packssdw(auVar48 ^ auVar49,auVar48 ^ auVar49);
                sVar21 = (short)uVar26;
                if ((auVar49._0_4_ & 1) != 0) {
                  *(short *)(lVar23 + -0xe + uVar26 * 2) = sVar21;
                }
                auVar38 = packssdw(auVar38,auVar38);
                auVar48._8_4_ = 0xffffffff;
                auVar48._0_8_ = 0xffffffffffffffff;
                auVar48._12_4_ = 0xffffffff;
                auVar38 = packssdw(auVar38 ^ auVar48,auVar38 ^ auVar48);
                if ((auVar38[2] & 1) != 0) {
                  *(short *)(lVar23 + -0xc + uVar26 * 2) = sVar21 + 1;
                }
                auVar39._0_8_ = -(ulonglong)(lVar31 < SUB168(auVar35 ^ auVar12,0));
                auVar39._8_8_ = -(ulonglong)(lVar33 < SUB168(auVar35 ^ auVar12,8));
                auVar49 = packssdw(auVar49,auVar39);
                auVar6._8_4_ = 0xffffffff;
                auVar6._0_8_ = 0xffffffffffffffff;
                auVar6._12_4_ = 0xffffffff;
                auVar49 = packssdw(auVar49 ^ auVar6,auVar49 ^ auVar6);
                if ((auVar49[4] & 1) != 0) {
                  *(short *)(lVar23 + -10 + uVar26 * 2) = sVar21 + 2;
                }
                auVar38 = pshufhw(auVar39,auVar39,0x84);
                auVar7._8_4_ = 0xffffffff;
                auVar7._0_8_ = 0xffffffffffffffff;
                auVar7._12_4_ = 0xffffffff;
                auVar38 = packssdw(auVar38 ^ auVar7,auVar38 ^ auVar7);
                if ((auVar38[6] & 1) != 0) {
                  *(short *)(lVar23 + -8 + uVar26 * 2) = sVar21 + 3;
                }
                auVar40._0_8_ = -(ulonglong)(lVar31 < SUB168(auVar36 ^ auVar12,0));
                auVar40._8_8_ = -(ulonglong)(lVar33 < SUB168(auVar36 ^ auVar12,8));
                auVar49 = pshuflw(auVar49,auVar40,0xe8);
                auVar8._8_4_ = 0xffffffff;
                auVar8._0_8_ = 0xffffffffffffffff;
                auVar8._12_4_ = 0xffffffff;
                auVar49 = packssdw(auVar49 ^ auVar8,auVar49 ^ auVar8);
                if ((auVar49[8] & 1) != 0) {
                  *(short *)(lVar23 + -6 + uVar26 * 2) = sVar21 + 4;
                }
                auVar38 = packssdw(auVar40,auVar40);
                auVar9._8_4_ = 0xffffffff;
                auVar9._0_8_ = 0xffffffffffffffff;
                auVar9._12_4_ = 0xffffffff;
                auVar38 = packssdw(auVar38 ^ auVar9,auVar38 ^ auVar9);
                if ((auVar38[10] & 1) != 0) {
                  *(short *)(lVar23 + -4 + uVar26 * 2) = sVar21 + 5;
                }
                auVar41._0_8_ = -(ulonglong)(lVar31 < SUB168(auVar37 ^ auVar12,0));
                auVar41._8_8_ = -(ulonglong)(lVar33 < SUB168(auVar37 ^ auVar12,8));
                auVar49 = packssdw(auVar49,auVar41);
                auVar10._8_4_ = 0xffffffff;
                auVar10._0_8_ = 0xffffffffffffffff;
                auVar10._12_4_ = 0xffffffff;
                unaff_XMM13 = packssdw(auVar49 ^ auVar10,auVar49 ^ auVar10);
                if ((unaff_XMM13[0xc] & 1) != 0) {
                  *(short *)(lVar23 + -2 + uVar26 * 2) = sVar21 + 6;
                }
                auVar49 = pshufhw(auVar41,auVar41,0x84);
                auVar11._8_4_ = 0xffffffff;
                auVar11._0_8_ = 0xffffffffffffffff;
                auVar11._12_4_ = 0xffffffff;
                auVar49 = packssdw(auVar49 ^ auVar11,auVar49 ^ auVar11);
                if ((auVar49[0xe] & 1) != 0) {
                  *(short *)(lVar23 + uVar26 * 2) = sVar21 + 7;
                }
                uVar26 = uVar26 + 8;
                lVar31 = auVar34._8_8_;
                lVar33 = auVar46._0_8_;
                auVar34._0_8_ = auVar34._0_8_ + lVar33;
                lVar47 = auVar46._8_8_;
                auVar34._8_8_ = lVar31 + lVar47;
                lVar31 = auVar35._8_8_;
                auVar35._0_8_ = auVar35._0_8_ + lVar33;
                auVar35._8_8_ = lVar31 + lVar47;
                lVar31 = auVar36._8_8_;
                auVar36._0_8_ = auVar36._0_8_ + lVar33;
                auVar36._8_8_ = lVar31 + lVar47;
                lVar31 = auVar37._8_8_;
                auVar37._0_8_ = auVar37._0_8_ + lVar33;
                auVar37._8_8_ = lVar31 + lVar47;
              } while (((int)local_228 + 7U & 0xfffffff8) != uVar26);
              local_1c0 = local_204;
              memset(local_1a8,0,0xd0);
              uVar26 = 0;
              puVar20 = local_258;
              local_220 = uVar18;
              local_210 = lVar30;
              do {
                uVar24 = local_260;
                local_1ac = 1;
                local_1b8 = uVar26 * 2 + lVar30;
                uVar22 = 0;
                if ((uVar26 & 1) != 0) {
                  do {
                    local_280 = uVar24;
                    local_288 = &local_1ac;
                    FUN_14956616d(puVar20,local_1a8[uVar22 * 2 + 1],(int)local_1a8[uVar22 * 2],
                                  &local_1b8);
                    uVar14 = (int)uVar22 + 1;
                    uVar22 = (ulonglong)uVar14;
                    puVar20 = local_258;
                    lVar30 = local_210;
                    uVar18 = local_220;
                  } while (((uint)uVar26 >> (uVar14 & 0x1f) & 1) != 0);
                }
                local_1a8[uVar22 * 2 + 1] = local_1b8;
                *(uint *)(local_1a8 + uVar22 * 2) = local_1ac;
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar18);
              uVar14 = (int)uVar22 + 1;
              if (uVar14 < 0xd) goto LAB_149565c82;
            }
            local_200[local_1e8 * 8 + 7] = local_204;
            local_200[local_1e8 * 8 + 6] = local_1ac;
            *(longlong *)(local_200 + local_1e8 * 8 + 2) = lVar30;
            *(uint **)(local_200 + local_1e8 * 8 + 4) = puVar20;
            uVar26 = local_1e8 + 1;
          } while ((longlong)local_1e8 < (longlong)local_218);
          FUN_145e3b961(local_260);
          puVar19 = local_248;
        }
        do {
          if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_149565e8c:
            local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(local_268 + 0x60));
            *(uint *)(local_268 + 0x80) = local_24c;
            local_238 = CONCAT44(local_238._4_4_,param_6 >> 2) & 0xffffffff00000003;
            if (((param_6 >> 2 & 3) != 0) &&
               (uVar17 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(), uVar17 != 0))
            goto LAB_14956610e;
            local_220 = (ulonglong)local_23c;
            local_1a8[0] = local_1f8 * local_220;
            uVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
            if (uVar17 != 0) goto LAB_14956610e;
            if (local_1d0 < (longlong)local_1a8[0]) {
              lVar30 = **(longlong **)(param_1 + 8);
              if (lVar30 != 0) {
                (**(code **)(lVar30 + 0x50))(*(longlong **)(param_1 + 8),5,local_1a8);
              }
            }
            uVar14 = local_248[1];
            puVar20 = local_248;
            if ((int)uVar14 < 1) goto LAB_1495660a3;
            puVar25 = local_248 + 2;
            local_228 = (ulonglong)(local_23c | 0x18);
            local_260 = 0;
            puVar19 = local_248;
            local_258 = puVar25;
            goto LAB_149565f6a;
          }
          uVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                             (*(longlong **)(param_1 + 8),3,1,10);
          if ((param_4 == (code *)0x0) || (uVar17 != 5)) {
            lVar30 = local_268;
            if (uVar17 == 0) goto LAB_149565e8c;
            goto LAB_149565d8f;
          }
          iVar15 = (*param_4)(param_5);
          param_3 = local_26c;
        } while (iVar15 != 0);
        goto LAB_149565706;
      }
      puVar19 = (uint *)0x0;
      goto LAB_149565d8f;
    }
    puVar19 = (uint *)0x0;
LAB_149565706:
    lVar30 = local_268;
    uVar14 = 0;
    goto LAB_14956570b;
  }
  goto LAB_1495654fb;
  while( true ) {
    uVar14 = (uint)local_260;
    if (((((uint)local_210 < uVar14) && (uVar14 <= local_24c)) && (uVar28 <= (uint)local_1f8)) &&
       ((uVar17 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                            (*(longlong **)(param_1 + 0x10),param_8,local_23c,
                             (uVar14 - 1) * local_228 + 0x38), uVar17 != 0 ||
        (uVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                            (*(longlong **)(param_1 + 8),param_8,uVar2,(uVar28 - 1) * local_220),
        puVar25 = local_258, uVar17 != 0)))) goto LAB_14956610e;
    uVar14 = puVar20[1];
    puVar19 = puVar20;
    if ((int)uVar14 < 1) break;
LAB_149565f6a:
    uVar2 = local_23c;
    puVar20 = local_248;
    uVar27 = *puVar19;
    uVar28 = 0xffffffff;
    uVar18 = (ulonglong)uVar14;
    do {
      uVar26 = uVar18 - 1;
      uVar14 = puVar25[uVar26 * 8];
      uVar17 = puVar25[uVar26 * 8 + 6];
      if ((int)uVar14 < (int)uVar17) {
        puVar19 = puVar25 + uVar26 * 8;
        lVar30 = 0;
        do {
          uVar1 = *(ushort *)((longlong)(int)uVar14 * 2 + *(longlong *)(puVar19 + 2) + lVar30 * 2);
          uVar3 = *(uint *)(*(longlong *)(puVar19 + 4) + (ulonglong)uVar1 * 4);
          puVar25 = local_258;
          if (uVar27 < uVar3) {
            if (uVar3 < uVar28) {
              local_260 = (ulonglong)((uint)uVar1 + puVar19[7]);
              uVar28 = uVar3;
            }
            break;
          }
          *puVar19 = uVar14 + 1 + (int)lVar30;
          lVar30 = lVar30 + 1;
        } while ((longlong)(int)uVar17 - (longlong)(int)uVar14 != lVar30);
      }
      bVar5 = 1 < (longlong)uVar18;
      uVar18 = uVar26;
    } while (bVar5);
    *local_248 = uVar28;
    if (uVar28 == 0xffffffff) goto LAB_1495660a9;
    if (*(int *)(local_1e0 + 0x170) != 0) {
      uVar17 = (uint)(*(char *)(local_1e0 + 0x61) == '\0') * 2 + 7;
      goto LAB_14956610e;
    }
  }
LAB_1495660a3:
  *puVar20 = 0xffffffff;
LAB_1495660a9:
  if (local_24c == *(uint *)(**(longlong **)(param_1 + 0x30) + 0x10)) {
    uVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (((int)local_238 != 0) && (uVar17 == 0)) {
      uVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    }
    if (uVar17 == 0) goto LAB_1495660f0;
  }
  else {
LAB_1495660f0:
    lVar30 = **(longlong **)(param_1 + 8);
    if (((lVar30 == 0) ||
        (uVar17 = (**(code **)(lVar30 + 0x50))(*(longlong **)(param_1 + 8),0x25,0), uVar17 == 0xc))
       || (uVar17 == 0)) {
      *(uint *)(local_268 + 0x60) = local_24c;
      uVar17 = 0;
    }
  }
LAB_14956610e:
  lVar30 = local_268;
  puVar19 = local_248;
  if (*(char *)(param_1 + 0x3f) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),3,1,9);
    lVar30 = local_268;
    puVar19 = local_248;
  }
LAB_149565d8f:
  param_3 = local_26c;
  uVar14 = 0;
  if (uVar17 != 5) {
    uVar14 = uVar17;
  }
LAB_14956570b:
  if ((param_3 == 0) || (uVar14 != 0)) {
LAB_149565da3:
    FUN_145e3b961();
    if ((uVar14 != 0) && (uVar14 != 5)) goto LAB_1495654fb;
  }
  else {
    uVar14 = 5;
    if ((*(uint *)(param_1 + 0x58) <= *(uint *)(lVar30 + 0x60)) && (uVar14 = 0, 1 < param_3)) {
      FUN_149555acc(4,local_1a8);
      do {
        if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_149565dbd:
          uVar14 = 0;
          if (param_3 == 3) {
            FUN_149560e5f(param_1,local_1a8[0] & 0xffffffff);
            uVar14 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                               (*(longlong **)(param_1 + 0x10),0);
          }
          if (*(char *)(param_1 + 0x3f) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),4,4,9);
          }
          goto LAB_149565da3;
        }
        uVar14 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                           (*(longlong **)(param_1 + 8),4,4,10);
        if ((param_4 == (code *)0x0) || (uVar14 != 5)) {
          if (uVar14 == 0) goto LAB_149565dbd;
          goto LAB_149565da3;
        }
        iVar15 = (*param_4)(param_5);
      } while (iVar15 != 0);
      uVar14 = 5;
      goto LAB_149565da3;
    }
    FUN_145e3b961(puVar19);
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = *(undefined4 *)(param_1 + 0x58);
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = *(undefined4 *)(**(longlong **)(param_1 + 0x30) + 0x60);
  }
LAB_1495654fb:
  iVar15 = local_22c;
  if (local_1d4 != 0) {
    *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x48) = (undefined1  [16])0x0;
  }
  cVar13 = *(char *)(param_1 + 0x3f);
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (cVar13 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),0,1,9);
      cVar13 = *(char *)(param_1 + 0x3f);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (cVar13 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),1,1,9);
  }
  uVar18 = 5;
  if (uVar14 != 0) {
    uVar18 = (ulonglong)uVar14;
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  if (param_3 == iVar15) {
    uVar18 = (ulonglong)uVar14;
  }
LAB_1495653cc:
  if ((local_d0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 14956616d FUN_14956616d body=221 status=ok
// SIG undefined FUN_14956616d(void)

void FUN_14956616d(longlong param_1,void *param_2,int param_3,longlong *param_4,int *param_5,
                  void *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  bool bVar9;
  longlong lVar10;
  
  iVar1 = *param_5;
  bVar4 = 0 < iVar1;
  bVar9 = 0 < param_3;
  lVar7 = 0;
  if (bVar9 || bVar4) {
    lVar3 = *param_4;
    lVar7 = 0;
    iVar6 = 0;
    iVar5 = 0;
    do {
      if ((!bVar9) ||
         ((lVar10 = (longlong)iVar6, bVar4 &&
          (*(uint *)(param_1 + (ulonglong)*(ushort *)(lVar3 + (longlong)iVar5 * 2) * 4) <=
           *(uint *)(param_1 + (ulonglong)*(ushort *)((longlong)param_2 + lVar10 * 2) * 4))))) {
        lVar10 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        puVar8 = (ushort *)(lVar3 + lVar10 * 2);
      }
      else {
        iVar6 = iVar6 + 1;
        puVar8 = (ushort *)((longlong)param_2 + lVar10 * 2);
      }
      iVar2 = *(int *)(param_1 + (ulonglong)*puVar8 * 4);
      *(ushort *)((longlong)param_6 + lVar7 * 2) = *puVar8;
      if (iVar6 < param_3) {
        iVar6 = iVar6 + (uint)(*(int *)(param_1 +
                                       (ulonglong)
                                       *(ushort *)((longlong)param_2 + (longlong)iVar6 * 2) * 4) ==
                              iVar2);
      }
      bVar9 = iVar6 < param_3;
      lVar7 = lVar7 + 1;
      bVar4 = iVar5 < iVar1;
    } while ((iVar5 < iVar1) || (iVar6 < param_3));
  }
  *param_4 = (longlong)param_2;
  *param_5 = (int)lVar7;
  memcpy(param_2,param_6,(ulonglong)(uint)((int)lVar7 * 2));
  return;
}



// FUNCTION 14956624a FUN_14956624a body=136 status=ok
// SIG undefined FUN_14956624a(void)

void FUN_14956624a(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (*(longlong *)(lVar2 + 0x50) != 0) {
    iVar1 = (*DAT_14c765d80)();
    if (iVar1 != 0) {
      for (lVar2 = param_1[4]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
        if (*(char *)(lVar2 + 0x12) != '\0') {
          FUN_1495662d2(lVar2);
        }
      }
      do {
        lVar2 = param_1[1];
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          (*DAT_14c765d78)();
          lVar2 = param_1[1];
        }
        *(undefined8 *)(lVar2 + 8) = *param_1;
        *(undefined1 *)((longlong)param_1 + 0x12) = 1;
        do {
          param_1 = (undefined8 *)param_1[4];
          if (param_1 == (undefined8 *)0x0) {
            return;
          }
        } while (*(int *)((longlong)param_1 + 0x14) == 0);
      } while( true );
    }
    lVar2 = param_1[1];
  }
  *(undefined8 *)(lVar2 + 8) = *param_1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}



// FUNCTION 1495662d2 FUN_1495662d2 body=37 status=ok
// SIG undefined FUN_1495662d2(void)

void FUN_1495662d2(longlong param_1)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x50) != 0) {
    (*DAT_14c765d88)();
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 1495662f7 FUN_1495662f7 body=172 status=ok
// SIG undefined FUN_1495662f7(void)

undefined8 FUN_1495662f7(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    pcVar2 = *(char **)(lVar1 + 0x50);
    uVar3 = FUN_1495580c6(*(undefined8 *)(lVar1 + 0x70));
    if ((int)uVar3 == 0) {
      pcVar2[0] = 'S';
      pcVar2[1] = 'Q';
      pcVar2[2] = 'L';
      pcVar2[3] = 'i';
      pcVar2[4] = 't';
      pcVar2[5] = 'e';
      pcVar2[6] = ' ';
      pcVar2[7] = 'f';
      pcVar2[8] = 'o';
      pcVar2[9] = 'r';
      pcVar2[10] = 'm';
      pcVar2[0xb] = 'a';
      pcVar2[0xc] = 't';
      pcVar2[0xd] = ' ';
      pcVar2[0xe] = '3';
      pcVar2[0xf] = '\0';
      pcVar2[0x10] = *(char *)(param_1 + 0x31);
      pcVar2[0x11] = *(char *)(param_1 + 0x32);
      pcVar2[0x12] = '\x01';
      pcVar2[0x13] = '\x01';
      pcVar2[0x14] = (char)*(undefined4 *)(param_1 + 0x30) - (char)*(undefined4 *)(param_1 + 0x34);
      pcVar2[0x15] = '@';
      pcVar2[0x16] = ' ';
      pcVar2[0x17] = ' ';
      pcVar2[0x18] = '\0';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x20] = '\0';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = '\0';
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\0';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = '\0';
      pcVar2[0x30] = '\0';
      pcVar2[0x31] = '\0';
      pcVar2[0x32] = '\0';
      pcVar2[0x33] = '\0';
      pcVar2[0x34] = '\0';
      pcVar2[0x35] = '\0';
      pcVar2[0x36] = '\0';
      pcVar2[0x37] = '\0';
      pcVar2[0x38] = '\0';
      pcVar2[0x39] = '\0';
      pcVar2[0x3a] = '\0';
      pcVar2[0x3b] = '\0';
      pcVar2[0x3c] = '\0';
      pcVar2[0x3d] = '\0';
      pcVar2[0x3e] = '\0';
      pcVar2[0x3f] = '\0';
      pcVar2[0x40] = '\0';
      pcVar2[0x41] = '\0';
      pcVar2[0x42] = '\0';
      pcVar2[0x43] = '\0';
      pcVar2[0x44] = '\0';
      pcVar2[0x45] = '\0';
      pcVar2[0x46] = '\0';
      pcVar2[0x47] = '\0';
      pcVar2[0x48] = '\0';
      pcVar2[0x49] = '\0';
      pcVar2[0x4a] = '\0';
      pcVar2[0x4b] = '\0';
      pcVar2[0x4c] = '\0';
      pcVar2[0x4d] = '\0';
      pcVar2[0x4e] = '\0';
      pcVar2[0x4f] = '\0';
      pcVar2[0x50] = '\0';
      pcVar2[0x51] = '\0';
      pcVar2[0x52] = '\0';
      pcVar2[0x53] = '\0';
      pcVar2[0x54] = '\0';
      pcVar2[0x55] = '\0';
      pcVar2[0x56] = '\0';
      pcVar2[0x57] = '\0';
      pcVar2[0x54] = '\0';
      pcVar2[0x55] = '\0';
      pcVar2[0x56] = '\0';
      pcVar2[0x57] = '\0';
      pcVar2[0x58] = '\0';
      pcVar2[0x59] = '\0';
      pcVar2[0x5a] = '\0';
      pcVar2[0x5b] = '\0';
      pcVar2[0x5c] = '\0';
      pcVar2[0x5d] = '\0';
      pcVar2[0x5e] = '\0';
      pcVar2[0x5f] = '\0';
      pcVar2[0x60] = '\0';
      pcVar2[0x61] = '\0';
      pcVar2[0x62] = '\0';
      pcVar2[99] = '\0';
      FUN_149566d5d(lVar1,0xd);
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 2;
      *(uint *)(pcVar2 + 0x34) = (uint)*(byte *)(param_1 + 0x21) << 0x18;
      *(uint *)(pcVar2 + 0x40) = (uint)*(byte *)(param_1 + 0x22) << 0x18;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      pcVar2[0x1f] = '\x01';
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1495663a3 FUN_1495663a3 body=73 status=ok
// SIG undefined FUN_1495663a3(void)

void FUN_1495663a3(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x24) == '\0') && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x28);
    FUN_14955dbdc();
    if (*(int *)(*(longlong *)(lVar1 + 0x118) + 0x18) == 0) {
      FUN_149562b50(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1495663ec FUN_1495663ec body=1456 status=ok
// SIG undefined FUN_1495663ec(void)

uint FUN_1495663ec(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  uint *local_68;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x24] == 0) {
    uVar4 = 0;
    if (*(char *)((longlong)param_1 + 0x14) != '\0') goto LAB_149566422;
    uVar4 = FUN_1495622e4(param_1,1);
    if (uVar4 == 0) {
      if (1 < *(byte *)((longlong)param_1 + 0x15)) {
LAB_14956673b:
        if (*(char *)((longlong)param_1 + 0x12) != '\0') {
          uVar4 = 0x308;
          goto LAB_14956683d;
        }
        if ((*(byte *)((longlong)param_1 + 0x15) < 4) || (*(byte *)((longlong)param_1 + 0x15) == 5))
        {
          if ((*(char *)((longlong)param_1 + 0x11) == '\0') &&
             (uVar4 = (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],4),
             uVar4 != 0)) goto LAB_14956683d;
          *(undefined1 *)((longlong)param_1 + 0x15) = 4;
        }
        plVar7 = (longlong *)param_1[10];
        lVar5 = *plVar7;
        if (lVar5 == 0) {
          lVar5 = *param_1;
          uVar4 = (**(code **)(lVar5 + 0x38))(lVar5,param_1[0x1b],0,&local_48);
          plVar7 = (longlong *)param_1[10];
          if ((uVar4 == 0) && (local_48 != 0)) {
            local_68 = &local_4c;
            local_4c = 0;
            uVar4 = (**(code **)(lVar5 + 0x28))(lVar5,param_1[0x1b],plVar7,0x802);
            if ((uVar4 == 0) && (uVar4 = 0, (local_4c & 1) != 0)) {
              local_68 = (uint *)0x14bd4063a;
              uVar4 = 0xe;
              FUN_14955599e(0xe,"%s at line %d of [%.10s]","cannot open file",0xdd97);
              plVar7 = (longlong *)param_1[10];
              if (*plVar7 != 0) {
                (**(code **)(*plVar7 + 8))(plVar7);
                *plVar7 = 0;
              }
            }
            plVar7 = (longlong *)param_1[10];
          }
          lVar5 = *plVar7;
          if (lVar5 != 0) goto LAB_14956684a;
          if ((char)param_1[1] == '\0') {
            lVar5 = *(longlong *)param_1[9];
            if (lVar5 != 0) {
              if (*(char *)((longlong)param_1 + 0x11) == '\0') {
                (**(code **)(lVar5 + 0x40))((longlong *)param_1[9],1);
              }
              if (*(char *)((longlong)param_1 + 0x15) != '\x05') {
                *(undefined1 *)((longlong)param_1 + 0x15) = 1;
              }
            }
            *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
          }
LAB_1495667f4:
          if (uVar4 == 0) goto LAB_1495664e2;
        }
        else {
LAB_14956684a:
          if (*(char *)((longlong)param_1 + 0xb) == '\0') {
            uVar4 = (**(code **)(lVar5 + 0x28))(plVar7,2);
            if (uVar4 == 0) {
              plVar7 = (longlong *)param_1[10];
              lVar5 = *plVar7;
              goto LAB_149566866;
            }
          }
          else {
LAB_149566866:
            uVar4 = (**(code **)(lVar5 + 0x30))(plVar7,param_1 + 0xd);
            if (uVar4 == 0) {
              uVar4 = FUN_1495636b3(param_1,(char)param_1[2] == '\0');
              *(undefined1 *)((longlong)param_1 + 0x14) = 0;
              goto LAB_1495667f4;
            }
          }
        }
        if (((char)uVar4 == '\r') || ((uVar4 & 0xff) == 10)) {
          *(uint *)((longlong)param_1 + 0x2c) = uVar4;
          *(undefined1 *)((longlong)param_1 + 0x14) = 6;
          param_1[0x21] = (longlong)&LAB_14956242b;
        }
        goto LAB_14956683d;
      }
      lVar5 = *param_1;
      local_48 = 1;
      lVar1 = *(longlong *)param_1[10];
      if ((lVar1 == 0) &&
         ((uVar4 = (**(code **)(lVar5 + 0x38))(lVar5,param_1[0x1b],0,&local_48), uVar4 != 0 ||
          (local_48 == 0)))) {
LAB_1495664da:
        if (uVar4 != 0) goto LAB_14956683d;
      }
      else {
        local_4c = 0;
        uVar4 = (**(code **)(*(longlong *)param_1[9] + 0x48))((longlong *)param_1[9],&local_4c);
        if (local_4c != 0 || uVar4 != 0) goto LAB_1495664da;
        uVar4 = FUN_149566abb(param_1,&local_50);
        if (uVar4 != 0) goto LAB_14956683d;
        if ((lVar1 == 0) && (local_50 == 0)) {
          bVar3 = *(byte *)((longlong)param_1 + 0x15);
          if ((bVar3 < 6) && ((0x23U >> (bVar3 & 0x1f) & 1) != 0)) {
            if (*(char *)((longlong)param_1 + 0x11) == '\0') {
              iVar6 = (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],2);
              bVar8 = false;
              if (iVar6 != 0) goto LAB_149566733;
              bVar3 = *(byte *)((longlong)param_1 + 0x15);
            }
            if (bVar3 != 5) {
              *(undefined1 *)((longlong)param_1 + 0x15) = 2;
            }
          }
          bVar8 = false;
          (**(code **)(lVar5 + 0x30))(lVar5,param_1[0x1b],0);
          if ((char)param_1[1] == '\0') {
            lVar5 = *(longlong *)param_1[9];
            if (lVar5 != 0) {
              if (*(char *)((longlong)param_1 + 0x11) == '\0') {
                (**(code **)(lVar5 + 0x40))((longlong *)param_1[9],1);
              }
              if (*(char *)((longlong)param_1 + 0x15) != '\x05') {
                *(undefined1 *)((longlong)param_1 + 0x15) = 1;
              }
            }
            *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
          }
        }
        else {
          if (lVar1 == 0) {
            local_68 = &local_54;
            local_54 = 0x801;
            uVar4 = (**(code **)(lVar5 + 0x28))(lVar5,param_1[0x1b],param_1[10],0x801);
            if (uVar4 == 0xe) {
              bVar8 = true;
              goto LAB_149566733;
            }
            if (uVar4 == 0) goto LAB_1495666f0;
            bVar8 = false;
          }
          else {
LAB_1495666f0:
            local_54 = local_54 & 0xffffff00;
            uVar4 = (**(code **)(*(longlong *)param_1[10] + 0x10))
                              ((longlong *)param_1[10],&local_54,1,0);
            if (uVar4 == 0x20a) {
              uVar4 = 0;
            }
            if (lVar1 == 0) {
              plVar7 = (longlong *)param_1[10];
              if (*plVar7 != 0) {
                (**(code **)(*plVar7 + 8))(plVar7);
                *plVar7 = 0;
              }
            }
            bVar8 = (char)local_54 != '\0';
          }
          if (uVar4 != 0) goto LAB_14956683d;
        }
LAB_149566733:
        if (bVar8) goto LAB_14956673b;
      }
LAB_1495664e2:
      if (((char)param_1[2] != '\0') || (*(char *)((longlong)param_1 + 0x1b) == '\0')) {
LAB_14956653b:
        uVar4 = FUN_149566a18(param_1);
        if (param_1[0x24] != 0) goto LAB_149566556;
        goto LAB_149566422;
      }
      uVar4 = (**(code **)(*(longlong *)param_1[9] + 0x10))
                        ((longlong *)param_1[9],&local_48,0x10,0x18);
      if (uVar4 == 0) {
LAB_149566522:
        auVar2._4_4_ = uStack_44;
        auVar2._0_4_ = local_48;
        auVar2._8_8_ = uStack_40;
        if (*(undefined1 (*) [16])(param_1 + 0x11) != auVar2) {
          *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + 1;
          for (lVar5 = param_1[0xe]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
            *(undefined4 *)(lVar5 + 0x18) = 1;
          }
          FUN_149564708(param_1[0x23],0);
          if (*(char *)((longlong)param_1 + 0x1a) != '\0') {
            (**(code **)(*(longlong *)param_1[9] + 0x90))((longlong *)param_1[9],0,0);
          }
        }
        goto LAB_14956653b;
      }
      if (uVar4 == 0x20a) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        goto LAB_149566522;
      }
      goto LAB_149566428;
    }
  }
  else {
LAB_149566556:
    local_48 = 0;
    FUN_149561e35();
    lVar5 = param_1[0x24];
    iVar6 = 1;
    do {
      uVar4 = FUN_149560eb3(lVar5,&local_48,0,iVar6);
      iVar6 = iVar6 + 1;
    } while (uVar4 == 0xffffffff);
    if (local_48 != 0 || uVar4 != 0) {
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + 1;
      for (lVar5 = param_1[0xe]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
        *(undefined4 *)(lVar5 + 0x18) = 1;
      }
      FUN_149564708(param_1[0x23],0);
      if (*(char *)((longlong)param_1 + 0x1a) != '\0') {
        (**(code **)(*(longlong *)param_1[9] + 0x90))((longlong *)param_1[9],0,0);
      }
    }
LAB_149566422:
    if ((((char)param_1[2] == '\0') && (*(char *)((longlong)param_1 + 0x14) == '\0')) &&
       (uVar4 == 0)) {
      uVar4 = FUN_149566abb(param_1,(longlong)param_1 + 0x1c);
    }
LAB_149566428:
    if (uVar4 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
      uVar4 = 0;
      goto LAB_14956643a;
    }
  }
LAB_14956683d:
  FUN_149563041(param_1);
LAB_14956643a:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14956699d FUN_14956699d body=123 status=ok
// SIG undefined FUN_14956699d(void)

undefined8 FUN_14956699d(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(longlong *)(param_1 + 0x120) == 0)) {
    if (*(char *)(param_1 + 0x11) != '\0') {
      return 0xe;
    }
    if (*(char *)(param_1 + 8) == '\0') {
      if (*(int *)**(undefined8 **)(param_1 + 0x48) < 2) {
        return 0xe;
      }
      if (*(longlong *)((int *)**(undefined8 **)(param_1 + 0x48) + 0x1a) == 0) {
        return 0xe;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (*plVar1 != 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      *plVar1 = 0;
    }
    uVar2 = FUN_149566b5c(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(undefined1 *)(param_1 + 9) = 5;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}



// FUNCTION 149566a18 FUN_149566a18 body=162 status=ok
// SIG undefined FUN_149566a18(void)

undefined8 FUN_149566a18(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = 0;
  if ((char)param_1[2] == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x38))(*param_1,param_1[0x25],0,&local_14);
    if ((int)uVar1 == 0) {
      if (local_14 == 0) {
        uVar1 = 0;
        if (*(char *)((longlong)param_1 + 9) == '\x05') {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
        }
      }
      else {
        uVar1 = FUN_149566abb(param_1,&local_18);
        if ((int)uVar1 == 0) {
          if (local_18 == 0) {
            uVar1 = (**(code **)(*param_1 + 0x30))(*param_1,param_1[0x25],0);
          }
          else {
            uVar1 = FUN_14956699d(param_1,0);
          }
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149566abb FUN_149566abb body=160 status=ok
// SIG undefined FUN_149566abb(void)

undefined8 FUN_149566abb(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (((lVar1 == 0) || (*(short *)(lVar1 + 0x3c) < 0)) ||
     (uVar2 = *(uint *)(lVar1 + 0x5c), uVar2 == 0)) {
    if (**(longlong **)(param_1 + 0x48) != 0) {
      local_20 = 0;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
      if ((int)uVar3 != 0) goto LAB_149566b3e;
      uVar2 = (uint)((local_20 + *(int *)(param_1 + 0xbc) + -1) / (longlong)*(int *)(param_1 + 0xbc)
                    );
      goto LAB_149566af0;
    }
    uVar2 = 0;
  }
  else {
LAB_149566af0:
    if (*(uint *)(param_1 + 0xc0) < uVar2) {
      *(uint *)(param_1 + 0xc0) = uVar2;
    }
  }
  *param_2 = uVar2;
  uVar3 = 0;
LAB_149566b3e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149566b5c FUN_149566b5c body=397 status=ok
// SIG undefined FUN_149566b5c(void)

int FUN_149566b5c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *_Dst;
  size_t _Size;
  char cVar6;
  undefined1 auStack_88 [32];
  uint *local_68;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[1] == '\0') {
    cVar6 = '\0';
  }
  else {
    iVar4 = FUN_149566cea(param_1);
    if (iVar4 != 0) goto LAB_149566bc9;
    cVar6 = ((char)param_1[1] != '\0') * '\x02';
  }
  local_58 = param_1[0x19];
  lVar1 = param_1[0x25];
  lVar2 = *param_1;
  plVar3 = (longlong *)param_1[9];
  param_1[0x24] = 0;
  _Size = (longlong)*(int *)(lVar2 + 4) + 0x90;
  _Dst = (longlong *)FUN_145e3bd67(_Size);
  iVar4 = 7;
  if (_Dst != (longlong *)0x0) {
    memset(_Dst,0,_Size);
    *_Dst = lVar2;
    _Dst[2] = (longlong)(_Dst + 0x12);
    _Dst[1] = (longlong)plVar3;
    *(undefined2 *)((longlong)_Dst + 0x3c) = 0xffff;
    _Dst[4] = local_58;
    _Dst[0x10] = lVar1;
    *(undefined2 *)((longlong)_Dst + 0x44) = 0x101;
    *(char *)((longlong)_Dst + 0x3f) = cVar6;
    local_68 = &local_4c;
    local_4c = 0x80006;
    iVar4 = (**(code **)(lVar2 + 0x28))(lVar2,lVar1,_Dst + 0x12,0x80006);
    if (iVar4 == 0) {
      if ((local_4c & 1) != 0) {
        *(undefined1 *)((longlong)_Dst + 0x42) = 1;
      }
      uVar5 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if ((uVar5 >> 10 & 1) != 0) {
        *(undefined1 *)((longlong)_Dst + 0x44) = 0;
      }
      if ((uVar5 >> 0xc & 1) != 0) {
        *(undefined1 *)((longlong)_Dst + 0x45) = 0;
      }
      param_1[0x24] = (longlong)_Dst;
      iVar4 = 0;
    }
    else {
      FUN_149561c01(_Dst,0);
      plVar3 = (longlong *)_Dst[2];
      if (*plVar3 != 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        *plVar3 = 0;
      }
      FUN_145e3b961(_Dst);
    }
  }
LAB_149566bc9:
  FUN_149564f9d(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149566cea FUN_149566cea body=115 status=ok
// SIG undefined FUN_149566cea(void)

int FUN_149566cea(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(byte *)(param_1 + 0x15) < 4) || (*(byte *)(param_1 + 0x15) == 5)) {
    if ((*(char *)(param_1 + 0x11) == '\0') &&
       (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
                          (*(longlong **)(param_1 + 0x48),4), iVar2 != 0)) {
      lVar1 = **(longlong **)(param_1 + 0x48);
      if (lVar1 != 0) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          (**(code **)(lVar1 + 0x40))(*(longlong **)(param_1 + 0x48),1);
        }
        if (*(char *)(param_1 + 0x15) != '\x05') {
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
      iVar3 = iVar2;
    }
    else {
      *(undefined1 *)(param_1 + 0x15) = 4;
    }
  }
  return iVar3;
}



// FUNCTION 149566d5d FUN_149566d5d body=214 status=ok
// SIG undefined FUN_149566d5d(void)

void FUN_149566d5d(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x50);
  bVar1 = param_1[9];
  uVar5 = (ulonglong)bVar1;
  if ((*(byte *)(lVar2 + 0x26) & 0xc) != 0) {
    memset((void *)(lVar3 + uVar5),0,(ulonglong)(*(int *)(lVar2 + 0x34) - (uint)bVar1));
  }
  *(char *)(lVar3 + uVar5) = (char)param_2;
  bVar6 = (param_2 & 8) == 0;
  iVar4 = (uint)bVar1 + (uint)bVar6 * 4 + 8;
  *(undefined4 *)(lVar3 + 1 + uVar5) = 0;
  *(undefined1 *)(lVar3 + 7 + uVar5) = 0;
  *(undefined1 *)(lVar3 + 5 + uVar5) = *(undefined1 *)(lVar2 + 0x35);
  *(undefined1 *)(lVar3 + 6 + uVar5) = *(undefined1 *)(lVar2 + 0x34);
  *(uint *)(param_1 + 0x14) = *(int *)(lVar2 + 0x34) - iVar4 & 0xffff;
  FUN_1495649c3(param_1,param_2);
  *(short *)(param_1 + 0x12) = (short)iVar4;
  *(ulonglong *)(param_1 + 0x58) = (ulonglong)*(uint *)(lVar2 + 0x34) + lVar3;
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)((uint)bVar1 + (uint)bVar6 * 4) + lVar3 + 8;
  *(ulonglong *)(param_1 + 0x68) = (ulonglong)(byte)param_1[10] + lVar3;
  param_1[0xc] = 0;
  *(short *)(param_1 + 0x1a) = (short)*(undefined4 *)(lVar2 + 0x30) + -1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *param_1 = 1;
  return;
}



// FUNCTION 149566e33 FUN_149566e33 body=320 status=ok
// SIG undefined FUN_149566e33(void)

undefined4 FUN_149566e33(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = *(int *)(param_1 + 0x80);
  lVar1 = FUN_1495539bb(*(undefined8 *)(param_1 + 0x78));
  uVar4 = 7;
  if (lVar1 != 0) {
    uVar4 = 0;
    memset((void *)(lVar1 + (longlong)iVar5 * 0x30),0,(longlong)(param_2 - iVar5) * 0x30);
    *(longlong *)(param_1 + 0x78) = lVar1;
    if (iVar5 < param_2) {
      puVar6 = (undefined4 *)((longlong)iVar5 * 0x30 + lVar1 + 0x2c);
      do {
        iVar5 = iVar5 + 1;
        puVar6[-5] = *(undefined4 *)(param_1 + 0x1c);
        if ((**(longlong **)(param_1 + 0x50) == 0) ||
           (uVar2 = *(ulonglong *)(param_1 + 0x60), (longlong)uVar2 < 1)) {
          uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
        }
        *(ulonglong *)(puVar6 + -0xb) = uVar2;
        puVar6[-4] = *(undefined4 *)(param_1 + 0x38);
        uVar4 = *(undefined4 *)(param_1 + 0x1c);
        puVar3 = (undefined4 *)FUN_145e3bd67(0x200);
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined8 *)(puVar6 + -7) = 0;
          return 7;
        }
        memset(puVar3 + 1,0,0x1fc);
        *puVar3 = uVar4;
        *(undefined4 **)(puVar6 + -7) = puVar3;
        lVar1 = *(longlong *)(param_1 + 0x120);
        if (lVar1 != 0) {
          puVar6[-3] = *(undefined4 *)(lVar1 + 0x58);
          puVar6[-2] = *(undefined4 *)(lVar1 + 0x60);
          puVar6[-1] = *(undefined4 *)(lVar1 + 100);
          *puVar6 = *(undefined4 *)(lVar1 + 0x88);
        }
        *(int *)(param_1 + 0x80) = iVar5;
        puVar6 = puVar6 + 0xc;
        uVar4 = 0;
      } while (iVar5 != param_2);
    }
  }
  return uVar4;
}



// FUNCTION 149566f73 FUN_149566f73 body=427 status=ok
// SIG undefined FUN_149566f73(void)

int FUN_149566f73(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar1 = *(uint *)(lVar2 + 0x1c);
  uVar4 = *(uint *)(lVar2 + 0xb8) / *(uint *)(lVar2 + 0xbc);
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | 4;
  uVar8 = *(uint *)(param_1 + 0x30);
  uVar9 = -uVar4 & uVar8 - 1;
  if (uVar1 < uVar8) {
    uVar8 = uVar8 - uVar9;
  }
  else {
    uVar8 = uVar1 - uVar9;
    if (uVar4 + uVar9 <= uVar1) {
      uVar8 = uVar4;
    }
  }
  if ((int)uVar8 < 1) {
    iVar5 = 0;
  }
  else {
    local_54 = uVar9 + 1;
    bVar3 = false;
    iVar7 = 1;
    do {
      iVar10 = iVar7 + uVar9;
      if (((iVar10 == *(int *)(param_1 + 0x30)) || (*(longlong *)(lVar2 + 0x40) == 0)) ||
         (iVar5 = FUN_1495602ed(), iVar5 == 0)) {
        iVar5 = 0;
        if (iVar10 != (int)(0x40000000 / (longlong)*(int *)(lVar2 + 0xbc)) + 1) {
          iVar5 = (**(code **)(lVar2 + 0x108))(lVar2,iVar10,&local_50,0);
          if (iVar5 == 0) {
            iVar5 = FUN_14956711f(local_50);
            if ((*(ushort *)(local_50 + 0x34) & 8) != 0) {
              bVar3 = true;
            }
            goto LAB_14956706c;
          }
          goto LAB_149567075;
        }
      }
      else {
        local_50 = FUN_14956295c(lVar2);
        iVar5 = 0;
        if (local_50 != 0) {
          if ((*(ushort *)(local_50 + 0x34) & 8) != 0) {
            bVar3 = true;
          }
LAB_14956706c:
          FUN_14955db91(local_50);
        }
      }
    } while ((iVar7 < (int)uVar8) && (iVar7 = iVar7 + 1, iVar5 == 0));
    if ((iVar5 == 0) && (bVar3)) {
      iVar5 = 0;
      iVar7 = local_54;
      do {
        lVar6 = FUN_14956295c(lVar2,iVar7);
        if (lVar6 != 0) {
          *(byte *)(lVar6 + 0x34) = *(byte *)(lVar6 + 0x34) | 8;
          FUN_14955db91(lVar6);
        }
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
LAB_149567075:
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfb;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14956711f FUN_14956711f body=552 status=ok
// SIG undefined FUN_14956711f(void)

int FUN_14956711f(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar2 + 0x14) != '\x02') goto LAB_149567166;
  if (*(int *)((longlong)plVar2 + 0x2c) != 0) {
    return *(int *)((longlong)plVar2 + 0x2c);
  }
  if ((plVar2[0x24] == 0) && (*(char *)((longlong)plVar2 + 9) != '\x02')) {
    lVar3 = *plVar2;
    uVar10 = *(undefined4 *)((longlong)plVar2 + 0x1c);
    puVar9 = (undefined4 *)FUN_145e3bd67(0x200);
    if (puVar9 == (undefined4 *)0x0) {
      plVar2[8] = 0;
      return 7;
    }
    memset(puVar9 + 1,0,0x1fc);
    *puVar9 = uVar10;
    plVar2[8] = (longlong)puVar9;
    iVar7 = DAT_14c765d14;
    plVar4 = (longlong *)plVar2[10];
    if (*plVar4 == 0) {
      if (*(char *)((longlong)plVar2 + 9) == '\x04') {
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[8] = 0;
        plVar4[1] = -0xfffffc08;
        *plVar4 = (longlong)&DAT_14bd407b8;
        plVar4[9] = 0;
        plVar4[10] = 0;
      }
      else {
        bVar12 = (char)plVar2[2] == '\0';
        uVar10 = 0x100e;
        if (bVar12) {
          uVar10 = 0x806;
        }
        iVar11 = 0;
        if (!bVar12) {
          iVar11 = DAT_14c765d14;
        }
        iVar8 = FUN_149565160(plVar2);
        if (iVar8 == 0) {
          puVar5 = (undefined8 *)plVar2[10];
          lVar6 = plVar2[0x1b];
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[10] = 0;
          if (iVar11 != 0) {
            iVar8 = 0x3f8;
            if (0 < iVar11) {
              iVar8 = iVar7;
            }
            *(int *)(puVar5 + 1) = iVar8;
            *puVar5 = &DAT_14bd407b8;
            *(int *)((longlong)puVar5 + 0xc) = iVar11;
            *(undefined4 *)(puVar5 + 8) = uVar10;
            puVar5[10] = lVar6;
            puVar5[9] = lVar3;
            goto LAB_149567247;
          }
          iVar8 = (**(code **)(lVar3 + 0x28))(lVar3,lVar6,puVar5,uVar10,0);
        }
        if (iVar8 != 0) goto LAB_14956726b;
      }
    }
LAB_149567247:
    *(undefined4 *)(plVar2 + 6) = 0;
    *(undefined1 *)((longlong)plVar2 + 0x17) = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    iVar8 = FUN_149562193(plVar2);
    if (iVar8 != 0) {
LAB_14956726b:
      FUN_149563c27(plVar2[8]);
      plVar2[8] = 0;
      return iVar8;
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x14) = 3;
LAB_149567166:
  FUN_149564475(param_1);
  if (plVar2[8] != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    iVar7 = FUN_1495602ed(plVar2[8],uVar1);
    if (iVar7 == 0) {
      if (*(uint *)(plVar2 + 4) < uVar1) {
        if (*(char *)((longlong)plVar2 + 0x14) != '\x04') {
          *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 8;
        }
      }
      else {
        iVar7 = FUN_149567347(param_1);
        if (iVar7 != 0) {
          return iVar7;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 4;
  iVar7 = 0;
  if (0 < (int)plVar2[0x10]) {
    iVar7 = FUN_14955f4ab(param_1);
  }
  if (*(uint *)((longlong)plVar2 + 0x1c) < *(uint *)(param_1 + 0x30)) {
    *(uint *)((longlong)plVar2 + 0x1c) = *(uint *)(param_1 + 0x30);
  }
  return iVar7;
}



// FUNCTION 149567347 FUN_149567347 body=371 status=ok
// SIG undefined FUN_149567347(void)

uint FUN_149567347(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar7 = *(longlong *)(lVar2 + 0x60);
  uVar8 = *(uint *)(lVar2 + 0x34);
  if (200 < (longlong)*(int *)(lVar2 + 0xbc)) {
    uVar6 = (longlong)*(int *)(lVar2 + 0xbc) + 200;
    do {
      uVar8 = uVar8 + *(byte *)(lVar9 + -400 + uVar6);
      uVar6 = uVar6 - 200;
    } while (400 < uVar6);
  }
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 8;
  uVar3 = *(uint *)(param_1 + 0x30);
  local_44 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x18))
                    (*(longlong **)(lVar2 + 0x50),&local_44,4,lVar7);
  if (uVar3 == 0) {
    lVar7 = lVar7 + 4;
    uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x18))
                      (*(longlong **)(lVar2 + 0x50),lVar9,*(undefined4 *)(lVar2 + 0xbc),lVar7);
    if (uVar3 == 0) {
      local_44 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x18))
                        (*(longlong **)(lVar2 + 0x50),&local_44,4,lVar7 + *(int *)(lVar2 + 0xbc));
      if (uVar3 == 0) {
        *(longlong *)(lVar2 + 0x60) =
             (longlong)*(int *)(lVar2 + 0xbc) + *(longlong *)(lVar2 + 0x60) + 8;
        *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
        uVar8 = FUN_1495607d9(*(undefined8 *)(lVar2 + 0x40),*(undefined4 *)(param_1 + 0x30));
        iVar4 = *(int *)(lVar2 + 0x80);
        if (iVar4 < 1) {
          uVar3 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x30);
          lVar7 = 0;
          lVar9 = 0x18;
          uVar3 = 0;
          do {
            if (uVar1 <= *(uint *)(*(longlong *)(lVar2 + 0x78) + lVar9)) {
              uVar5 = FUN_1495607d9(*(undefined8 *)(*(longlong *)(lVar2 + 0x78) + -8 + lVar9),uVar1)
              ;
              uVar3 = uVar3 | uVar5;
              iVar4 = *(int *)(lVar2 + 0x80);
            }
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + 0x30;
          } while (lVar7 < iVar4);
        }
        uVar3 = uVar3 | uVar8;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1495674bb FUN_1495674bb body=180 status=ok
// SIG undefined FUN_1495674bb(void)

int FUN_1495674bb(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = 0;
  if ((*(char *)(param_1 + 0x16) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    iVar1 = (**(code **)(param_1 + 0x108))(param_1,1,&local_28,0);
    if ((iVar1 == 0) && (iVar1 = FUN_1495580c6(), iVar1 == 0)) {
      uVar2 = *(uint *)(*(longlong *)(local_28 + 0x28) + 0x88);
      uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) + 1;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
      *(uint *)(*(longlong *)(local_28 + 8) + 0x18) = uVar2;
      *(uint *)(*(longlong *)(local_28 + 8) + 0x5c) = uVar2;
      *(undefined4 *)(*(longlong *)(local_28 + 8) + 0x60) = 0xd93f2e00;
      *(undefined1 *)(param_1 + 0x16) = 1;
      iVar1 = 0;
    }
    if (local_28 != 0) {
      FUN_14955db91();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 149567570 FUN_149567570 body=467 status=ok
// SIG undefined FUN_149567570(void)

undefined8 FUN_149567570(longlong param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  uint local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  if (((param_2 != (char *)0x0) && (*(char *)(param_1 + 9) != '\x04')) &&
     (plVar1 = *(longlong **)(param_1 + 0x50), *plVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x17) = 1;
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      uVar6 = 0;
      uVar5 = 0;
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar5 = uVar5 + (int)cVar2;
        cVar2 = param_2[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (cVar2 != '\0');
      uVar6 = (uint)lVar8;
    }
    lVar7 = *(longlong *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0xc) != '\0') {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = ((lVar7 + -1) / (longlong)(ulonglong)*(uint *)(param_1 + 0xb8) + 1) *
                (ulonglong)*(uint *)(param_1 + 0xb8);
      }
      *(longlong *)(param_1 + 0x60) = lVar7;
    }
    uVar3 = (int)(0x40000000 / (longlong)*(int *)(param_1 + 0xbc)) + 1;
    local_40 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
    uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,4,lVar7);
    if ((int)uVar4 == 0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                        (*(longlong **)(param_1 + 0x50),param_2,uVar6,lVar7 + 4);
      if ((int)uVar4 == 0) {
        lVar8 = lVar7 + 4 + lVar8;
        local_40 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                          (*(longlong **)(param_1 + 0x50),&local_40,4,lVar8);
        if ((int)uVar4 == 0) {
          local_40 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
          ;
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                            (*(longlong **)(param_1 + 0x50),&local_40,4,lVar8 + 4);
          if ((int)uVar4 == 0) {
            uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                              (*(longlong **)(param_1 + 0x50),&DAT_14bd408a3,8,lVar8 + 8);
            if ((int)uVar4 == 0) {
              *(ulonglong *)(param_1 + 0x60) =
                   (ulonglong)uVar6 + *(longlong *)(param_1 + 0x60) + 0x14;
              uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))
                                (*(longlong **)(param_1 + 0x50),&local_40);
              if ((int)uVar4 == 0) {
                uVar4 = 0;
                if (*(longlong *)(param_1 + 0x60) < CONCAT44(uStack_3c,local_40)) {
                  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149567744 FUN_149567744 body=215 status=ok
// SIG undefined FUN_149567744(void)

void FUN_149567744(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = *param_1;
  lVar2 = param_1[1];
  *(undefined1 *)(lVar2 + 0x23) = 0;
  if ((char)param_1[2] == '\0') goto LAB_1495677c9;
  lVar3 = param_1[1];
  if (1 < *(int *)(lVar5 + 0xcc)) {
    if (*(longlong **)(lVar3 + 0x78) == param_1) {
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(byte *)(lVar3 + 0x26) = *(byte *)(lVar3 + 0x26) & 0x3f;
      for (lVar5 = *(longlong *)(lVar3 + 0x70); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
        *(undefined1 *)(lVar5 + 0xc) = 1;
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x70) != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(lVar3 + 0x70);
    puVar7 = *(undefined8 **)(lVar3 + 0x70);
    do {
      if ((longlong *)*puVar7 == param_1) {
        puVar6 = (undefined8 *)puVar7[2];
        *puVar8 = puVar6;
        if (*(int *)(puVar7 + 1) != 1) {
          FUN_145e3b961();
          goto LAB_1495677ee;
        }
      }
      else {
        puVar8 = puVar7 + 2;
LAB_1495677ee:
        puVar6 = (undefined8 *)*puVar8;
      }
      puVar7 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
  }
  if (*(longlong **)(lVar3 + 0x78) == param_1) {
    *(undefined8 *)(lVar3 + 0x78) = 0;
    uVar4 = 0xff3f;
LAB_1495677bc:
    *(ushort *)(lVar3 + 0x26) = *(ushort *)(lVar3 + 0x26) & uVar4;
  }
  else {
    uVar4 = 0xff7f;
    if (*(int *)(lVar3 + 0x38) == 2) goto LAB_1495677bc;
  }
  piVar1 = (int *)(lVar2 + 0x38);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined1 *)(lVar2 + 0x24) = 0;
  }
LAB_1495677c9:
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1495663a3(lVar2);
  return;
}



// FUNCTION 14956781b FUN_14956781b body=210 status=ok
// SIG undefined FUN_14956781b(void)

uint FUN_14956781b(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(uint *)(param_1 + 0x34);
  if (param_2 < 2) {
    iVar6 = 0;
    uVar2 = (uint)(0x40000000 / (ulonglong)*(uint *)(param_1 + 0x30));
    uVar5 = uVar3 / 5 + 1;
  }
  else {
    uVar5 = uVar3 / 5 + 1;
    iVar6 = (param_2 - 2) - (param_2 - 2) % uVar5;
    uVar2 = (uint)(0x40000000 / (ulonglong)*(uint *)(param_1 + 0x30));
    iVar6 = iVar6 + (uint)(iVar6 + 1U == uVar2) + 2;
  }
  uVar3 = param_2 - (((param_3 - param_2) + uVar3 / 5 + iVar6) / (uVar3 / 5) + param_3);
  uVar3 = uVar3 - (uVar3 <= uVar2 && uVar2 + 1 < param_2);
  do {
    uVar4 = uVar3;
    uVar1 = 0;
    if (1 < uVar4) {
      iVar6 = (uVar4 - 2) - (uVar4 - 2) % uVar5;
      uVar1 = iVar6 + (uint)(iVar6 + 1U == uVar2) + 2;
    }
    uVar3 = uVar4 - 1;
  } while ((uVar4 == uVar1) || (uVar4 == uVar2 + 1));
  return uVar4;
}



// FUNCTION 1495678ed FUN_1495678ed body=50 status=ok
// SIG undefined FUN_1495678ed(void)

undefined8 FUN_1495678ed(longlong param_1,int param_2,byte *param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  while( true ) {
    if (pbVar2 == (byte *)0x0) {
      if (param_3 != (byte *)0x0) {
        param_3[1] = param_3[1] & 0xdf;
      }
      return 0;
    }
    if ((pbVar2 != param_3) && ((param_2 == 0 || (*(int *)(pbVar2 + 0x50) == param_2)))) break;
    pbVar2 = *(byte **)(pbVar2 + 0x28);
  }
  do {
    if ((pbVar2 != param_3) && ((param_2 == 0 || (*(int *)(pbVar2 + 0x50) == param_2)))) {
      if ((*pbVar2 & 0xfd) == 0) {
        uVar1 = FUN_149567c65();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        FUN_149567cb4(pbVar2);
      }
    }
    pbVar2 = *(byte **)(pbVar2 + 0x28);
  } while (pbVar2 != (byte *)0x0);
  return 0;
}



// FUNCTION 14956791f FUN_14956791f body=759 status=ok
// SIG undefined FUN_14956791f(void)

int FUN_14956791f(longlong *param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  char *local_78;
  int local_70;
  longlong local_68;
  uint local_5c;
  undefined4 local_58;
  char local_51;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  if (1 < param_3) {
    iVar5 = (param_3 - 2) - (param_3 - 2) % (*(uint *)((longlong)param_1 + 0x34) / 5 + 1);
    uVar2 = iVar5 + (uint)(iVar5 + 1 == (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6))) + 2;
  }
  if ((uVar2 != param_3) && ((int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6)) + 1U != param_3))
  {
    iVar5 = 0x65;
    if ((*(int *)(*(longlong *)(param_1[3] + 0x50) + 0x24) == 0) ||
       (iVar5 = FUN_149568244(param_1,param_3,&local_51,&local_58), iVar5 != 0)) goto LAB_1495679ad;
    if (local_51 == '\x02') {
      if (param_4 == 0) {
        local_78 = (char *)CONCAT71(local_78._1_7_,1);
        iVar5 = FUN_149568377(param_1,&local_50,&local_5c,param_3);
        if (iVar5 != 0) goto LAB_1495679ad;
        if (local_50 != 0) {
          FUN_14955db91(*(undefined8 *)(local_50 + 0x70));
        }
      }
    }
    else {
      if (local_51 == '\x01') {
        local_78 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
        iVar5 = 0xb;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x10911);
        goto LAB_1495679ad;
      }
      iVar5 = (**(code **)(*param_1 + 0x108))(*param_1,param_3,&local_50,0);
      if (iVar5 != 0) goto LAB_1495679ad;
      local_68 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_68 + 4) != param_3) {
        *(undefined8 *)(local_68 + 0x50) = *(undefined8 *)(local_50 + 8);
        *(longlong *)(local_68 + 0x70) = local_50;
        *(longlong **)(local_68 + 0x48) = param_1;
        *(uint *)(local_68 + 4) = param_3;
        uVar4 = 100;
        if (param_3 != 1) {
          uVar4 = 0;
        }
        *(undefined1 *)(local_68 + 9) = uVar4;
      }
      uVar2 = 0;
      if (param_4 == 0) {
        uVar2 = param_2;
      }
      do {
        local_78 = (char *)CONCAT71(local_78._1_7_,(param_4 == 0) * '\x02');
        iVar5 = FUN_149568377(param_1,&local_50,&local_5c,uVar2);
        if (iVar5 != 0) {
          if (local_68 != 0) {
            FUN_14955db91(*(undefined8 *)(local_68 + 0x70));
          }
          goto LAB_1495679ad;
        }
        if (local_50 != 0) {
          FUN_14955db91(*(undefined8 *)(local_50 + 0x70));
        }
        lVar1 = local_68;
      } while ((param_4 != 0) && (param_2 < local_5c));
      local_78 = (char *)CONCAT44(local_78._4_4_,local_5c);
      local_70 = param_4;
      iVar5 = FUN_149568c78(param_1,local_68,local_51,local_58);
      if (lVar1 != 0) {
        FUN_14955db91(*(undefined8 *)(local_68 + 0x70));
      }
      if (iVar5 != 0) goto LAB_1495679ad;
    }
  }
  iVar5 = 0;
  if (param_4 == 0) {
    iVar5 = (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6));
    do {
      do {
        uVar2 = param_3;
        param_3 = uVar2 - 1;
      } while ((-2 - iVar5) + param_3 == -1);
      uVar3 = 0;
      if (1 < param_3) {
        uVar2 = uVar2 - 3;
        iVar6 = uVar2 - uVar2 % (*(uint *)((longlong)param_1 + 0x34) / 5 + 1);
        uVar3 = iVar6 + (uint)(iVar6 + 1 == iVar5) + 2;
      }
    } while (param_3 == uVar3);
    *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    *(uint *)((longlong)param_1 + 0x3c) = param_3;
    iVar5 = 0;
  }
LAB_1495679ad:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 149567c17 FUN_149567c17 body=78 status=ok
// SIG undefined FUN_149567c17(void)

undefined8 FUN_149567c17(byte *param_1,int param_2,byte *param_3)

{
  undefined8 uVar1;
  
  do {
    if ((param_1 != param_3) && ((param_2 == 0 || (*(int *)(param_1 + 0x50) == param_2)))) {
      if ((*param_1 & 0xfd) == 0) {
        uVar1 = FUN_149567c65();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        FUN_149567cb4(param_1);
      }
    }
    param_1 = *(byte **)(param_1 + 0x28);
  } while (param_1 != (byte *)0x0);
  return 0;
}



// FUNCTION 149567c65 FUN_149567c65 body=79 status=ok
// SIG undefined FUN_149567c65(void)

int FUN_149567c65(char *param_1)

{
  int iVar1;
  
  iVar1 = 0xb13;
  if ((param_1[1] & 0x40U) == 0) {
    if (*param_1 == '\x02') {
      *param_1 = '\0';
    }
    else {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
    }
    iVar1 = FUN_149567d02(param_1);
    if (iVar1 == 0) {
      FUN_149567cb4(param_1);
      *param_1 = '\x03';
    }
    param_1[1] = param_1[1] & 0xf1;
  }
  return iVar1;
}



// FUNCTION 149567cb4 FUN_149567cb4 body=78 status=ok
// SIG undefined FUN_149567cb4(void)

void FUN_149567cb4(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(char *)(param_1 + 0x54)) {
    if (*(char *)(param_1 + 0x54) != '\0') {
      lVar1 = 0;
      do {
        FUN_14955db91(*(undefined8 *)(*(longlong *)(param_1 + 0x90 + lVar1 * 8) + 0x70));
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(char *)(param_1 + 0x54));
    }
    FUN_14955db91(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x70));
    *(undefined1 *)(param_1 + 0x54) = 0xff;
  }
  return;
}



// FUNCTION 149567d02 FUN_149567d02 body=132 status=ok
// SIG undefined FUN_149567d02(void)

int FUN_149567d02(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  cVar2 = *(char *)(param_1 + 0x55);
  FUN_149567d86();
  if (cVar2 == '\0') {
    *(ulonglong *)(param_1 + 0x48) = (ulonglong)*(uint *)(param_1 + 0x40);
    lVar5 = FUN_145e3bd67((ulonglong)*(uint *)(param_1 + 0x40) + 0x11);
    iVar4 = 7;
    if (lVar5 != 0) {
      iVar4 = FUN_149567dc1(param_1,0,*(undefined4 *)(param_1 + 0x48),lVar5);
      if (iVar4 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x48);
        puVar1 = (undefined8 *)(lVar5 + lVar3);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(lVar5 + 0x10 + lVar3) = 0;
        *(longlong *)(param_1 + 0x18) = lVar5;
        iVar4 = 0;
      }
      else {
        FUN_145e3b961(lVar5);
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
    iVar4 = 0;
  }
  return iVar4;
}



// FUNCTION 149567d86 FUN_149567d86 body=59 status=ok
// SIG undefined FUN_149567d86(void)

void FUN_149567d86(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  if (*(short *)(param_1 + 0x46) != 0) {
    return;
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  lVar2 = *(longlong *)(param_1 + 0x88);
  uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)*(ushort *)(param_1 + 0x56) * 2);
                    /* WARNING: Could not recover jumptable at 0x000149567dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x80))
            (lVar2,(ulonglong)((uVar1 << 8 | uVar1 >> 8) & *(ushort *)(lVar2 + 0x1a)) +
                   *(longlong *)(lVar2 + 0x50),param_1 + 0x30);
  return;
}



// FUNCTION 149567dc1 FUN_149567dc1 body=740 status=ok
// SIG undefined FUN_149567dc1(void)

int FUN_149567dc1(longlong param_1,uint param_2,int param_3,void *param_4)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_88 [32];
  char *local_68;
  longlong *local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x20);
  lVar10 = *(longlong *)(param_1 + 0x88);
  FUN_149567d86();
  lVar3 = *(longlong *)(param_1 + 0x38);
  uVar1 = *(ushort *)(param_1 + 0x44);
  uVar5 = (uint)uVar1;
  local_60 = plVar2;
  if ((ulonglong)(*(int *)((longlong)plVar2 + 0x34) - uVar5) <
      (ulonglong)(lVar3 - *(longlong *)(lVar10 + 0x50))) {
    uVar9 = 0x10d22;
  }
  else {
    if (uVar5 < param_2 || uVar5 - param_2 == 0) {
      param_2 = param_2 - uVar1;
    }
    else {
      iVar6 = uVar5 - param_2;
      if (param_3 + param_2 <= (uint)uVar1) {
        iVar6 = param_3;
      }
      memcpy(param_4,(void *)((ulonglong)param_2 + lVar3),(longlong)iVar6);
      param_4 = (void *)((longlong)param_4 + (longlong)iVar6);
      param_3 = param_3 - iVar6;
      param_2 = 0;
    }
    if (param_3 == 0) {
LAB_149567fe8:
      iVar6 = 0;
      goto LAB_149567fea;
    }
    uVar5 = *(int *)((longlong)local_60 + 0x34) - 4;
    uVar8 = *(uint *)(lVar3 + (ulonglong)*(ushort *)(param_1 + 0x44));
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    local_4c = uVar8;
    if ((*(byte *)(param_1 + 1) & 4) == 0) {
      _Dst = (void *)0x0;
      uVar4 = (((*(int *)((longlong)local_60 + 0x34) - (uint)*(ushort *)(param_1 + 0x44)) +
               *(int *)(param_1 + 0x40)) - 5) / uVar5;
      if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_14956807b:
        _Dst = (void *)FUN_1495539bb(_Dst);
        if (_Dst == (void *)0x0) {
          iVar6 = 7;
          goto LAB_149567fea;
        }
        *(void **)(param_1 + 0x10) = _Dst;
      }
      else {
        iVar6 = (*DAT_14c765d30)(*(longlong *)(param_1 + 0x10));
        _Dst = *(void **)(param_1 + 0x10);
        if (iVar6 < (int)(uVar4 * 4)) goto LAB_14956807b;
      }
      lVar10 = 0;
      memset(_Dst,0,(longlong)(int)uVar4 << 2);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
    }
    else {
      lVar10 = 0;
      if (*(int *)(*(longlong *)(param_1 + 0x10) + ((ulonglong)param_2 / (ulonglong)uVar5) * 4) != 0
         ) {
        lVar10 = (longlong)(int)((ulonglong)param_2 / (ulonglong)uVar5);
        local_4c = *(uint *)(*(longlong *)(param_1 + 0x10) + lVar10 * 4);
        param_2 = param_2 % uVar5;
        uVar8 = local_4c;
      }
    }
    if (uVar8 != 0) {
      lVar10 = lVar10 << 2;
      do {
        *(uint *)(*(longlong *)(param_1 + 0x10) + lVar10) = uVar8;
        if (param_2 < uVar5) {
          iVar11 = uVar5 - param_2;
          if (param_2 + param_3 <= uVar5) {
            iVar11 = param_3;
          }
          iVar6 = (**(code **)(*local_60 + 0x108))(*local_60,uVar8,&local_58,2);
          if (iVar6 == 0) {
            uVar8 = **(uint **)(local_58 + 8);
            local_4c = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
            memcpy(param_4,(void *)((ulonglong)(param_2 + 4) + (longlong)*(uint **)(local_58 + 8)),
                   (longlong)iVar11);
            param_2 = 0;
            if (local_58 != 0) {
              FUN_14955db91();
            }
          }
          iVar7 = iVar11;
          if (param_3 == iVar11) {
            iVar7 = 0;
          }
          param_3 = param_3 - iVar11;
          if (param_3 == 0) goto LAB_149567fea;
          param_4 = (void *)((longlong)param_4 + (longlong)iVar7);
        }
        else {
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + lVar10);
          if (uVar4 == 0) {
            iVar6 = FUN_1495680a6(local_60,uVar8,0,&local_4c);
            param_2 = param_2 - uVar5;
          }
          else {
            iVar6 = 0;
            param_2 = param_2 - uVar5;
            local_4c = uVar4;
          }
        }
        if (iVar6 != 0) goto LAB_149567fea;
        lVar10 = lVar10 + 4;
        uVar8 = local_4c;
      } while (local_4c != 0);
      if (param_3 == 0) goto LAB_149567fe8;
    }
    uVar9 = 0x10db4;
  }
  local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
  iVar6 = 0xb;
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar9);
LAB_149567fea:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 1495680a6 FUN_1495680a6 body=413 status=ok
// SIG undefined FUN_1495680a6(void)

int FUN_1495680a6(longlong *param_1,uint param_2,longlong *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_68 [39];
  char local_41;
  uint local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = param_2;
  if (*(char *)((longlong)param_1 + 0x21) == '\0') {
LAB_149568149:
    iVar5 = (**(code **)(*param_1 + 0x108))
                      (*param_1,param_2,&local_40,(param_3 == (longlong *)0x0) * '\x02');
    if (iVar5 == 0) {
      lVar1 = CONCAT44(uStack_3c,local_40);
      lVar4 = *(longlong *)(lVar1 + 0x10);
      if (*(uint *)(lVar4 + 4) == param_2) {
        puVar6 = *(uint **)(lVar4 + 0x50);
      }
      else {
        puVar6 = *(uint **)(lVar1 + 8);
        *(uint **)(lVar4 + 0x50) = puVar6;
        *(longlong *)(lVar4 + 0x70) = lVar1;
        *(longlong **)(lVar4 + 0x48) = param_1;
        *(uint *)(lVar4 + 4) = param_2;
        uVar7 = 100;
        if (param_2 != 1) {
          uVar7 = 0;
        }
        *(undefined1 *)(lVar4 + 9) = uVar7;
      }
      uVar8 = *puVar6;
      uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      iVar5 = 0;
      goto LAB_149568171;
    }
  }
  else {
    do {
      uVar9 = uVar8;
      uVar8 = uVar9 + 1;
      uVar2 = 0;
      if (1 < uVar8) {
        iVar5 = (uVar9 - 1) - (uVar9 - 1) % (*(uint *)((longlong)param_1 + 0x34) / 5 + 1);
        uVar2 = iVar5 + (uint)(iVar5 + 1 == (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6))) +
                2;
      }
    } while ((uVar8 == uVar2) || (uVar9 == (uint)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6))));
    uVar9 = uVar9 + 1;
    if (*(uint *)((longlong)param_1 + 0x3c) < uVar9) goto LAB_149568149;
    iVar5 = FUN_149568244(param_1,uVar9,&local_41,&local_40);
    if ((iVar5 == 0) && (local_41 == '\x04')) {
      if (local_40 == param_2) {
        iVar5 = 0x65;
        lVar4 = 0;
        goto LAB_149568171;
      }
      goto LAB_149568149;
    }
    if (iVar5 == 0) goto LAB_149568149;
  }
  lVar4 = 0;
  uVar9 = 0;
LAB_149568171:
  *param_4 = uVar9;
  if (param_3 == (longlong *)0x0) {
    if (lVar4 != 0) {
      FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
    }
  }
  else {
    *param_3 = lVar4;
  }
  iVar3 = 0;
  if (iVar5 != 0x65) {
    iVar3 = iVar5;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 149568244 FUN_149568244 body=306 status=ok
// SIG undefined FUN_149568244(void)

int FUN_149568244(longlong *param_1,uint param_2,char *param_3,uint *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  char *local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  if (1 < param_2) {
    iVar3 = (param_2 - 2) - (param_2 - 2) % (*(uint *)((longlong)param_1 + 0x34) / 5 + 1);
    uVar4 = iVar3 + (uint)(iVar3 + 1 == (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6))) + 2;
  }
  iVar3 = (**(code **)(*param_1 + 0x108))(*param_1,uVar4,&local_38,0);
  if (iVar3 == 0) {
    uVar4 = (~uVar4 + param_2) * 5;
    if ((int)uVar4 < 0) {
      uVar2 = 0xfe86;
      if (local_38 != 0) {
        FUN_14955db91();
      }
    }
    else {
      lVar1 = *(longlong *)(local_38 + 8);
      *param_3 = *(char *)(lVar1 + (ulonglong)uVar4);
      if (param_4 != (uint *)0x0) {
        uVar4 = *(uint *)(lVar1 + 1 + (ulonglong)uVar4);
        *param_4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      if (local_38 != 0) {
        FUN_14955db91();
      }
      iVar3 = 0;
      if (0xfa < (byte)(*param_3 - 6U)) goto LAB_1495682c9;
      uVar2 = 0xfe8e;
    }
    local_48 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar3 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar2);
  }
LAB_1495682c9:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149568377 FUN_149568377 body=2304 status=ok
// SIG undefined FUN_149568377(void)

int FUN_149568377(longlong param_1,longlong *param_2,uint *param_3,uint param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  char *local_98;
  uint local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint *local_70;
  longlong *local_68;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = 0;
  lVar16 = *(longlong *)(param_1 + 0x18);
  uVar12 = *(uint *)(param_1 + 0x3c);
  uVar6 = *(uint *)(*(longlong *)(lVar16 + 0x50) + 0x24);
  uVar17 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (uVar12 <= uVar17) {
    local_98 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar5 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11182);
    goto LAB_149568416;
  }
  if (uVar6 == 0) {
    bVar18 = *(char *)(param_1 + 0x23) == '\0';
    iVar5 = FUN_1495580c6(*(undefined8 *)(lVar16 + 0x70));
    if (iVar5 != 0) goto LAB_149568416;
    iVar5 = *(int *)(param_1 + 0x3c);
    uVar12 = iVar5 + 1;
    *(uint *)(param_1 + 0x3c) = uVar12;
    iVar8 = (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 0x30));
    if (iVar5 == iVar8) {
      uVar12 = iVar5 + 2;
      *(uint *)(param_1 + 0x3c) = uVar12;
    }
    if (*(char *)(param_1 + 0x21) != '\0') {
      uVar6 = 0;
      if (1 < uVar12) {
        iVar5 = (uVar12 - 2) - (uVar12 - 2) % (*(uint *)(param_1 + 0x34) / 5 + 1);
        uVar6 = iVar5 + (uint)(iVar5 + 1 == iVar8) + 2;
      }
      if (uVar6 == uVar12) {
        local_58 = 0;
        iVar5 = FUN_149568ffc(param_1,uVar12,&local_58,bVar18);
        lVar16 = local_58;
        if (iVar5 != 0) goto LAB_149568416;
        iVar5 = FUN_1495580c6(*(undefined8 *)(local_58 + 0x70));
        if (lVar16 != 0) {
          FUN_14955db91(*(undefined8 *)(lVar16 + 0x70));
        }
        if (iVar5 != 0) goto LAB_149568416;
        iVar5 = *(int *)(param_1 + 0x3c);
        uVar12 = iVar5 + 1;
        *(uint *)(param_1 + 0x3c) = uVar12;
        if (iVar5 == (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 0x30))) {
          uVar12 = iVar5 + 2;
          *(uint *)(param_1 + 0x3c) = uVar12;
        }
      }
    }
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x50) + 0x1c) =
         uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    uVar12 = *(uint *)(param_1 + 0x3c);
    *param_3 = uVar12;
    iVar5 = FUN_149568ffc(param_1,uVar12,param_2,bVar18);
    if (iVar5 == 0) {
      iVar5 = FUN_1495580c6(*(undefined8 *)(*param_2 + 0x70));
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        if (*param_2 != 0) {
          FUN_14955db91(*(undefined8 *)(*param_2 + 0x70));
        }
        *param_2 = 0;
      }
    }
    goto LAB_149568416;
  }
  local_68 = param_2;
  local_5c = param_4;
  if (param_5 == '\x02') {
    bVar18 = true;
  }
  else if ((param_5 == '\x01') && (param_4 <= uVar12)) {
    iVar5 = FUN_149568244(param_1,param_4,&local_58,0);
    bVar18 = (char)local_58 == '\x02';
    if (iVar5 != 0) goto LAB_149568416;
  }
  else {
    bVar18 = false;
  }
  iVar5 = FUN_1495580c6(*(undefined8 *)(lVar16 + 0x70));
  if (iVar5 != 0) goto LAB_149568416;
  uVar6 = uVar17 - 1;
  *(uint *)(*(longlong *)(lVar16 + 0x50) + 0x24) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
  uVar6 = 0;
  lVar11 = local_50;
  local_8c = uVar12;
  local_78 = lVar16;
  local_70 = param_3;
  while( true ) {
    if (lVar11 == 0) {
      puVar7 = (uint *)(*(longlong *)(lVar16 + 0x50) + 0x20);
    }
    else {
      puVar7 = *(uint **)(lVar11 + 0x50);
    }
    uVar15 = *puVar7;
    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    if ((uVar12 < uVar15) || (uVar17 < uVar6)) break;
    local_90 = uVar6;
    iVar5 = FUN_149568ffc(param_1,uVar15,&local_50,0);
    lVar10 = local_50;
    if (iVar5 != 0) goto LAB_1495686a5;
    lVar2 = *(longlong *)(local_50 + 0x50);
    uVar12 = *(uint *)(lVar2 + 4);
    if ((!bVar18) && (uVar12 == 0)) {
      iVar5 = FUN_1495580c6(*(undefined8 *)(local_50 + 0x70));
      if (iVar5 == 0) {
        *local_70 = uVar15;
        *(undefined4 *)(*(longlong *)(local_78 + 0x50) + 0x20) = **(undefined4 **)(lVar10 + 0x50);
        *local_68 = lVar10;
        local_50 = 0;
        bVar18 = false;
LAB_1495685b3:
        iVar5 = 0;
        lVar10 = local_50;
        lVar16 = local_78;
        bVar3 = bVar18;
        goto LAB_149568680;
      }
      goto LAB_14956869c;
    }
    uVar6 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    local_80 = lVar11;
    if ((*(uint *)(param_1 + 0x34) >> 2) - 2 < uVar6) {
      local_98 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      iVar5 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x111d7);
      lVar11 = local_80;
      goto LAB_14956869c;
    }
    if (bVar18) {
      if ((uVar15 != local_5c) && (param_5 != '\x02' || local_5c <= uVar15)) goto LAB_149568551;
      *local_70 = uVar15;
      *local_68 = local_50;
      local_88 = local_50;
      iVar5 = FUN_1495580c6(*(undefined8 *)(local_50 + 0x70));
      lVar16 = local_78;
      lVar11 = local_80;
      lVar10 = local_88;
      if (iVar5 == 0) {
        if (uVar12 == 0) {
          if (local_80 == 0) {
            *(undefined4 *)(*(longlong *)(local_78 + 0x50) + 0x20) =
                 **(undefined4 **)(local_88 + 0x50);
          }
          else {
            iVar5 = FUN_1495580c6(*(undefined8 *)(local_80 + 0x70));
            lVar10 = local_88;
            if (iVar5 != 0) goto LAB_14956869c;
            **(undefined4 **)(lVar11 + 0x50) = **(undefined4 **)(local_88 + 0x50);
          }
LAB_14956893e:
          local_50 = 0;
          iVar5 = 0;
          lVar10 = 0;
          bVar3 = false;
          goto LAB_149568680;
        }
        uVar12 = *(uint *)(*(longlong *)(local_88 + 0x50) + 8);
        uVar15 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
        ;
        if (local_8c < uVar15) {
          uVar14 = 0x111f9;
LAB_149568bab:
          local_98 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
          iVar5 = 0xb;
          FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar14);
          lVar10 = local_88;
          lVar11 = local_80;
        }
        else {
          iVar5 = FUN_149568ffc(param_1,uVar15,&local_58,0);
          lVar2 = local_58;
          lVar10 = local_88;
          lVar11 = local_80;
          if (iVar5 == 0) {
            iVar5 = FUN_1495580c6(*(undefined8 *)(local_58 + 0x70));
            if (iVar5 == 0) {
              **(undefined4 **)(lVar2 + 0x50) = **(undefined4 **)(local_88 + 0x50);
              uVar15 = uVar6 - 1;
              *(uint *)(*(longlong *)(lVar2 + 0x50) + 4) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 * 0x1000000;
              memcpy((void *)(*(longlong *)(lVar2 + 0x50) + 8),
                     (void *)(*(longlong *)(local_88 + 0x50) + 0xc),(ulonglong)(uVar6 * 4 - 4));
              if (lVar2 != 0) {
                FUN_14955db91(*(undefined8 *)(lVar2 + 0x70));
              }
              if (local_80 == 0) {
                puVar7 = (uint *)(*(longlong *)(lVar16 + 0x50) + 0x20);
              }
              else {
                iVar5 = FUN_1495580c6(*(undefined8 *)(local_80 + 0x70));
                lVar10 = local_88;
                lVar11 = local_80;
                if (iVar5 != 0) goto LAB_14956869c;
                puVar7 = *(uint **)(local_80 + 0x50);
              }
              *puVar7 = uVar12;
              lVar11 = local_80;
              goto LAB_14956893e;
            }
            lVar10 = local_88;
            lVar11 = local_80;
            if (lVar2 != 0) {
              FUN_14955db91(*(undefined8 *)(lVar2 + 0x70));
              lVar10 = local_88;
              lVar11 = local_80;
            }
          }
        }
      }
      goto LAB_14956869c;
    }
LAB_149568551:
    if (uVar12 == 0) goto LAB_1495685b3;
    uVar12 = 0;
    local_88 = local_50;
    if (local_5c != 0) {
      if (param_5 == '\x02') {
        uVar15 = 8;
        uVar9 = 0;
        do {
          uVar1 = *(uint *)(lVar2 + (ulonglong)uVar15);
          if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <=
              local_5c) {
            uVar12 = (uint)uVar9;
            break;
          }
          uVar9 = uVar9 + 1;
          uVar15 = uVar15 + 4;
        } while (uVar6 + (uVar6 == 0) != uVar9);
      }
      else {
        uVar12 = 0;
        if (1 < uVar6) {
          uVar12 = *(uint *)(lVar2 + 8);
          iVar8 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                  uVar12 << 0x18) - local_5c;
          iVar5 = -iVar8;
          if (SBORROW4(0,iVar8)) {
            iVar5 = 0x7fffffff;
          }
          if (-1 < iVar8) {
            iVar5 = iVar8;
          }
          uVar12 = 0;
          uVar9 = 1;
          uVar15 = 0xc;
          do {
            uVar1 = *(uint *)(lVar2 + (ulonglong)uVar15);
            iVar13 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18) - local_5c;
            iVar8 = -iVar13;
            if (SBORROW4(0,iVar13)) {
              iVar8 = 0x7fffffff;
            }
            if (-1 < iVar13) {
              iVar8 = iVar13;
            }
            if (iVar8 < iVar5) {
              uVar12 = (uint)uVar9;
              iVar5 = iVar8;
            }
            uVar9 = uVar9 + 1;
            uVar15 = uVar15 + 4;
          } while (uVar6 != uVar9);
        }
      }
    }
    uVar9 = (ulonglong)(uVar12 * 4 + 8);
    uVar15 = *(uint *)(lVar2 + uVar9);
    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    if (local_8c < uVar15) {
      uVar14 = 0x1123a;
      goto LAB_149568bab;
    }
    if (((bVar18) && (uVar15 != local_5c)) && (param_5 != '\x02' || local_5c <= uVar15)) {
      bVar3 = true;
      lVar16 = local_78;
LAB_149568673:
      iVar5 = 0;
      lVar10 = local_88;
    }
    else {
      *local_70 = uVar15;
      iVar5 = FUN_1495580c6(*(undefined8 *)(local_50 + 0x70));
      plVar4 = local_68;
      lVar16 = local_78;
      lVar10 = local_88;
      lVar11 = local_80;
      if (iVar5 != 0) goto LAB_14956869c;
      uVar15 = uVar6 - 1;
      if (uVar12 < uVar15) {
        *(undefined4 *)(lVar2 + uVar9) = *(undefined4 *)(lVar2 + (ulonglong)(uVar6 * 4 + 4));
      }
      *(uint *)(lVar2 + 4) =
           uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 * 0x1000000;
      uVar12 = *local_70;
      puVar7 = *(uint **)(param_1 + 0x58);
      uVar6 = 0;
      if ((puVar7 != (uint *)0x0) && (uVar6 = 1, uVar12 <= *puVar7)) {
        uVar6 = FUN_1495602ed(puVar7,uVar12);
      }
      iVar5 = FUN_149568ffc(param_1,uVar12,plVar4,uVar6 ^ 1);
      lVar11 = local_80;
      if (iVar5 == 0) {
        iVar5 = FUN_1495580c6(*(undefined8 *)(*plVar4 + 0x70));
        lVar10 = local_88;
        if (iVar5 == 0) {
          bVar3 = false;
          goto LAB_149568673;
        }
        if (*plVar4 != 0) {
          FUN_14955db91(*(undefined8 *)(*plVar4 + 0x70));
        }
        *plVar4 = 0;
        bVar3 = false;
      }
      else {
        bVar3 = false;
        lVar10 = local_88;
      }
    }
LAB_149568680:
    uVar12 = local_8c;
    if (lVar11 != 0) {
      FUN_14955db91(*(undefined8 *)(lVar11 + 0x70));
    }
    uVar6 = local_90 + 1;
    bVar18 = true;
    lVar11 = lVar10;
    if (!bVar3) goto code_r0x00014956869a;
  }
  local_98 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
  iVar5 = 0xb;
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x111ba);
  goto LAB_1495686a5;
code_r0x00014956869a:
  lVar11 = 0;
LAB_14956869c:
  if (lVar10 != 0) {
    FUN_14955db91(*(undefined8 *)(lVar10 + 0x70));
  }
LAB_1495686a5:
  if (lVar11 != 0) {
    FUN_14955db91(*(undefined8 *)(lVar11 + 0x70));
  }
LAB_149568416:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149568c78 FUN_149568c78 body=899 status=ok
// SIG undefined FUN_149568c78(void)

int FUN_149568c78(longlong *param_1,longlong param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [32];
  int *local_68;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 < 3) {
    uVar10 = 0x108af;
LAB_149568cca:
    local_68 = (int *)0x14bd4063a;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar10);
    iVar7 = 0xb;
  }
  else {
    lVar4 = *param_1;
    lVar5 = *(longlong *)(param_2 + 0x70);
    if ((*(char *)(lVar4 + 0x10) != '\0') && (iVar7 = FUN_1495580c6(lVar5), iVar7 != 0))
    goto LAB_149568ccf;
    uVar1 = *(ushort *)(lVar5 + 0x34);
    if ((uVar1 & 2) != 0) {
      iVar7 = FUN_14955f4ab(lVar5);
      if (iVar7 != 0) goto LAB_149568ccf;
      uVar1 = *(ushort *)(lVar5 + 0x34);
    }
    local_60 = 0;
    if ((param_6 == 0) && ((uVar1 & 8) != 0)) {
      local_60 = *(uint *)(lVar5 + 0x30);
    }
    *(ushort *)(lVar5 + 0x34) = uVar1 & 0xfff7;
    local_58 = param_4;
    lVar8 = FUN_14956295c(lVar4,param_5);
    if (lVar8 != 0) {
      if (1 < *(short *)(lVar8 + 0x36)) {
        FUN_14955db91(lVar8);
        uVar10 = 0xe518;
        goto LAB_149568cca;
      }
      *(ushort *)(lVar5 + 0x34) = *(ushort *)(lVar5 + 0x34) | *(ushort *)(lVar8 + 0x34) & 8;
      if (*(char *)(lVar4 + 0x10) == '\0') {
        FUN_149562b0f(lVar8);
      }
      else {
        FUN_1495695d2(lVar8,*(int *)(lVar4 + 0x1c) + 1);
      }
    }
    local_5c = *(undefined4 *)(lVar5 + 0x30);
    FUN_1495695d2(lVar5,param_5);
    FUN_149564475(lVar5);
    if ((lVar8 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
      FUN_1495695d2(lVar8,local_5c);
      FUN_14955db91(lVar8);
    }
    iVar6 = local_58;
    uVar3 = local_60;
    if (local_60 != 0) {
      iVar7 = (**(code **)(lVar4 + 0x108))(lVar4,local_60,&local_50,0);
      if (iVar7 != 0) {
        if (uVar3 <= *(uint *)(lVar4 + 0x20)) {
          FUN_149569618(*(undefined8 *)(lVar4 + 0x40),uVar3,*(undefined8 *)(lVar4 + 0x110));
        }
        goto LAB_149568ccf;
      }
      *(ushort *)(local_50 + 0x34) = *(ushort *)(local_50 + 0x34) | 8;
      FUN_149564475();
      FUN_14955db91(local_50);
    }
    local_54 = 0;
    *(undefined4 *)(param_2 + 4) = param_5;
    if (((byte)param_3 & 0xfb) == 1) {
      iVar7 = FUN_1495690e5(param_2);
      if ((iVar7 != 0) || (iVar7 = 0, (byte)param_3 == 1)) goto LAB_149568ccf;
    }
    else {
      uVar3 = **(uint **)(param_2 + 0x50);
      if (uVar3 != 0) {
        local_68 = &local_54;
        FUN_1495691f2(param_1,uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18,4,param_5);
        iVar7 = local_54;
        if (local_54 != 0) goto LAB_149568ccf;
      }
    }
    iVar7 = (**(code **)(*param_1 + 0x108))(*param_1,iVar6,&local_50,0);
    if (iVar7 == 0) {
      lVar4 = *(longlong *)(local_50 + 0x10);
      if (*(int *)(lVar4 + 4) == iVar6) {
        local_50 = *(longlong *)(lVar4 + 0x70);
      }
      else {
        *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(local_50 + 8);
        *(longlong *)(lVar4 + 0x70) = local_50;
        *(longlong **)(lVar4 + 0x48) = param_1;
        *(int *)(lVar4 + 4) = iVar6;
        uVar9 = 100;
        if (iVar6 != 1) {
          uVar9 = 0;
        }
        *(undefined1 *)(lVar4 + 9) = uVar9;
      }
      iVar7 = FUN_1495580c6(local_50);
      if (iVar7 == 0) {
        iVar7 = FUN_1495693b7(lVar4,uVar2,param_5,param_3);
        local_54 = iVar7;
        if (lVar4 != 0) {
          FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
        }
        if (iVar7 == 0) {
          local_68 = &local_54;
          FUN_1495691f2(param_1,param_5,param_3,iVar6);
          iVar7 = local_54;
        }
      }
      else if (lVar4 != 0) {
        FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
      }
    }
  }
LAB_149568ccf:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 149568ffc FUN_149568ffc body=232 status=ok
// SIG undefined FUN_149568ffc(void)

int FUN_149568ffc(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (**(code **)(*param_1 + 0x108))(*param_1,param_2,&local_30);
  if (iVar2 == 0) {
    puVar1 = *(undefined1 **)(local_30 + 0x10);
    iVar2 = (int)param_2;
    if (*(int *)(puVar1 + 4) != iVar2) {
      *(undefined8 *)(puVar1 + 0x50) = *(undefined8 *)(local_30 + 8);
      *(longlong *)(puVar1 + 0x70) = local_30;
      *(longlong **)(puVar1 + 0x48) = param_1;
      *(int *)(puVar1 + 4) = iVar2;
      uVar3 = 100;
      if (iVar2 != 1) {
        uVar3 = 0;
      }
      puVar1[9] = uVar3;
    }
    *param_3 = puVar1;
    if (*(short *)(*(longlong *)(puVar1 + 0x70) + 0x36) < 2) {
      *puVar1 = 0;
      iVar2 = 0;
    }
    else {
      if (puVar1 != (undefined1 *)0x0) {
        FUN_14955db91();
      }
      *param_3 = 0;
      local_38 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      iVar2 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x10337);
    }
  }
  else {
    *param_3 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495690e5 FUN_1495690e5 body=268 status=ok
// SIG undefined FUN_1495690e5(void)

ulonglong FUN_1495690e5(char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined1 auStack_78 [32];
  uint *local_58;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 4);
  if (*param_1 == '\0') {
    uVar6 = FUN_1495648a4(param_1);
    local_44 = (uint)uVar6;
    if (local_44 != 0) goto LAB_14956918e;
  }
  else {
    local_44 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x18);
  if ((ulonglong)uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x60) + uVar6 * 2);
      puVar7 = (uint *)((ulonglong)((uVar2 << 8 | uVar2 >> 8) & *(ushort *)(param_1 + 0x1a)) +
                       *(longlong *)(param_1 + 0x50));
      FUN_1495696fa(param_1,param_1,puVar7,&local_44);
      if (param_1[8] == '\0') {
        uVar4 = *puVar7;
        local_58 = &local_44;
        FUN_1495691f2(uVar5,uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18,5,uVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if (param_1[8] == '\0') {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)(byte)param_1[9]);
    local_58 = &local_44;
    FUN_1495691f2(uVar5,uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18,5,uVar3);
  }
  uVar6 = (ulonglong)local_44;
LAB_14956918e:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1495691f2 FUN_1495691f2 body=452 status=ok
// SIG undefined FUN_1495691f2(void)

void FUN_1495691f2(longlong *param_1,int param_2,char param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  char *local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_5 != 0) goto LAB_14956921a;
  uVar4 = 0;
  if (param_2 != 1) {
    if (param_2 == 0) {
      local_48 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xfe47);
      *param_5 = 0xb;
      goto LAB_14956921a;
    }
    iVar2 = (param_2 - 2U) - (param_2 - 2U) % (*(uint *)((longlong)param_1 + 0x34) / 5 + 1);
    uVar4 = iVar2 + (uint)(iVar2 + 1 == (int)(0x40000000 / (ulonglong)*(uint *)(param_1 + 6))) + 2;
  }
  iVar2 = (**(code **)(*param_1 + 0x108))(*param_1,uVar4,&local_38,0);
  if (iVar2 != 0) {
    *param_5 = iVar2;
    goto LAB_14956921a;
  }
  if (**(char **)(local_38 + 0x10) == '\0') {
    uVar4 = (~uVar4 + param_2) * 5;
    if ((int)uVar4 < 0) {
      uVar3 = 0xfe59;
      goto LAB_14956937f;
    }
    lVar1 = *(longlong *)(local_38 + 8);
    uVar5 = (ulonglong)uVar4;
    if ((*(char *)(lVar1 + uVar5) != param_3) ||
       (uVar4 = *(uint *)(lVar1 + 1 + uVar5),
       (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) != param_4)
       ) {
      iVar2 = FUN_1495580c6();
      *param_5 = iVar2;
      if (iVar2 == 0) {
        *(char *)(lVar1 + uVar5) = param_3;
        *(uint *)(lVar1 + 1 + uVar5) =
             param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 | param_4 << 0x18
        ;
      }
    }
  }
  else {
    uVar3 = 0xfe54;
LAB_14956937f:
    local_48 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar3);
    *param_5 = 0xb;
  }
  if (local_38 != 0) {
    FUN_14955db91();
  }
LAB_14956921a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495693b7 FUN_1495693b7 body=538 status=ok
// SIG undefined FUN_1495693b7(void)

int FUN_1495693b7(char *param_1,uint param_2,uint param_3,char param_4)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  char *local_78;
  int local_68;
  uint local_64;
  undefined1 local_60 [16];
  uint local_50;
  ushort local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == '\x04') {
    uVar2 = **(uint **)(param_1 + 0x50);
    if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) == param_2
       ) {
      **(uint **)(param_1 + 0x50) =
           param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18;
LAB_1495693f8:
      local_68 = 0;
      goto LAB_149569400;
    }
    uVar4 = 0x10867;
  }
  else {
    if ((*param_1 == '\0') && (local_68 = FUN_1495648a4(param_1), local_68 != 0))
    goto LAB_149569400;
    uVar1 = *(ushort *)(param_1 + 0x18);
    local_68 = 0;
    uVar3 = 0;
    uVar2 = (uint)uVar1;
    if (uVar1 == 0) {
LAB_14956950b:
      if ((uint)uVar3 != uVar2) goto LAB_149569400;
    }
    else {
      local_64 = (uint)uVar1;
      uVar7 = (ulonglong)local_64;
      uVar3 = 0;
      do {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x60) + uVar3 * 2);
        puVar5 = (uint *)((ulonglong)((uVar1 << 8 | uVar1 >> 8) & *(ushort *)(param_1 + 0x1a)) +
                         *(longlong *)(param_1 + 0x50));
        if (param_4 == '\x03') {
          (**(code **)(param_1 + 0x80))(param_1,puVar5,local_60);
          if (local_4c < local_50) {
            uVar6 = (longlong)puVar5 + (ulonglong)local_4a;
            if ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + 0x34) +
                *(longlong *)(param_1 + 0x50) < uVar6) {
              uVar4 = 0x1087a;
              goto LAB_14956954e;
            }
            uVar2 = *(uint *)(uVar6 - 4);
            if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
                param_2) {
              *(uint *)(uVar6 - 4) =
                   param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                   param_3 << 0x18;
              goto LAB_1495693f8;
            }
          }
        }
        else {
          uVar2 = *puVar5;
          if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
              param_2) {
            *puVar5 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                      param_3 << 0x18;
            uVar2 = local_64;
            goto LAB_14956950b;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
    if (param_4 == '\x05') {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)(byte)param_1[9]);
      if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
          param_2) {
        *(uint *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)(byte)param_1[9]) =
             param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18
        ;
        goto LAB_1495693f8;
      }
    }
    uVar4 = 0x1088c;
  }
LAB_14956954e:
  local_68 = 0xb;
  local_78 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar4);
LAB_149569400:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_68;
}



// FUNCTION 1495695d2 FUN_1495695d2 body=70 status=ok
// SIG undefined FUN_1495695d2(void)

void FUN_1495695d2(undefined8 *param_1,undefined4 param_2)

{
  (*DAT_14c765de8)(*(undefined8 *)(param_1[3] + 0x40),*param_1,*(undefined4 *)(param_1 + 6),param_2)
  ;
  *(undefined4 *)(param_1 + 6) = param_2;
  if ((~*(uint *)((longlong)param_1 + 0x34) & 10) != 0) {
    return;
  }
  FUN_14955dc15(param_1,3);
  return;
}



// FUNCTION 149569618 FUN_149569618 body=226 status=ok
// SIG undefined FUN_149569618(void)

void FUN_149569618(uint *param_1,int param_2,void *param_3)

{
  uint *_Src;
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_1 != (uint *)0x0) {
    uVar6 = param_2 - 1;
    do {
      uVar4 = param_1[2];
      if (uVar4 == 0) {
        if (*param_1 < 0xf81) {
          pbVar1 = (byte *)((longlong)param_1 + (ulonglong)(uVar6 >> 3) + 0x10);
          *pbVar1 = *pbVar1 & ~(byte)(1 << ((byte)uVar6 & 7));
          return;
        }
        _Src = param_1 + 4;
        memcpy(param_3,_Src,0x1f0);
        memset(_Src,0,0x1f0);
        param_1[1] = 0;
        lVar3 = 0;
        do {
          iVar2 = *(int *)((longlong)param_3 + lVar3 * 4);
          if ((iVar2 != 0) && (iVar2 != uVar6 + 1)) {
            param_1[1] = param_1[1] + 1;
            uVar5 = (ulonglong)((iVar2 - 1U) % 0x7c);
            uVar4 = param_1[uVar5 + 4];
            while (uVar4 != 0) {
              uVar4 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar4;
              if (0x7b < uVar4) {
                uVar5 = 0;
              }
              uVar4 = _Src[uVar5];
            }
            _Src[uVar5] = *(uint *)((longlong)param_3 + lVar3 * 4);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x7c);
        return;
      }
      uVar5 = (ulonglong)uVar6;
      uVar6 = uVar6 % uVar4;
      param_1 = *(uint **)(param_1 + (uVar5 / uVar4) * 2 + 4);
    } while (param_1 != (uint *)0x0);
  }
  return;
}



// FUNCTION 1495696fa FUN_1495696fa body=210 status=ok
// SIG undefined FUN_1495696fa(void)

void FUN_1495696fa(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 local_48 [16];
  uint local_38;
  ushort local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_4 == 0) {
    (**(code **)(param_1 + 0x80))(param_1,param_3,local_48);
    if (local_34 < local_38) {
      if ((*(ulonglong *)(param_2 + 0x58) < param_3) ||
         (local_34 + param_3 <= *(ulonglong *)(param_2 + 0x58))) {
        uVar1 = *(uint *)((param_3 - 4) + (ulonglong)local_32);
        local_58 = param_4;
        FUN_1495691f2(*(undefined8 *)(param_1 + 0x48),
                      uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18,3,*(undefined4 *)(param_1 + 4));
      }
      else {
        local_58 = (int *)0x14bd4063a;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xffc8);
        *param_4 = 0xb;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495697cd FUN_1495697cd body=196 status=ok
// SIG undefined FUN_1495697cd(void)

int FUN_1495697cd(longlong param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0'))
    {
      FUN_14956624a(param_1);
    }
    for (pbVar3 = *(byte **)(*(longlong *)(param_1 + 8) + 0x10); iVar2 = 0, pbVar3 != (byte *)0x0;
        pbVar3 = *(byte **)(pbVar3 + 0x28)) {
      if ((param_3 == 0) || ((pbVar3[1] & 1) != 0)) {
        FUN_145e3b961(*(undefined8 *)(pbVar3 + 0x18));
        pbVar3[0x18] = 0;
        pbVar3[0x19] = 0;
        pbVar3[0x1a] = 0;
        pbVar3[0x1b] = 0;
        pbVar3[0x1c] = 0;
        pbVar3[0x1d] = 0;
        pbVar3[0x1e] = 0;
        pbVar3[0x1f] = 0;
        *pbVar3 = 4;
        *(undefined4 *)(pbVar3 + 4) = param_2;
      }
      else if ((*pbVar3 & 0xfd) == 0) {
        iVar2 = FUN_149567c65(pbVar3);
        if (iVar2 != 0) {
          FUN_1495697cd(param_1,iVar2,0);
          break;
        }
      }
      FUN_149567cb4(pbVar3);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      piVar1 = (int *)(param_1 + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1495662d2(param_1);
      }
    }
  }
  return iVar2;
}



// FUNCTION 149569891 FUN_149569891 body=151 status=ok
// SIG undefined FUN_149569891(void)

void FUN_149569891(ulonglong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 != 0 && param_1 != 0) {
    uVar2 = (longlong)param_2 * 0x38 + param_1;
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar1 + 0x2d8) == 0) {
      do {
        if ((*(byte *)(param_1 + 9) & 0x24) == 0) {
          if (*(int *)(param_1 + 0x20) != 0) {
            FUN_14955d65a(lVar1,*(undefined8 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x20) = 0;
          }
        }
        else {
          FUN_14956b588(param_1);
        }
        *(undefined2 *)(param_1 + 8) = 0x80;
        param_1 = param_1 + 0x38;
      } while (param_1 < uVar2);
    }
    else {
      do {
        if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
          FUN_14955d65a(lVar1);
        }
        param_1 = param_1 + 0x38;
      } while (param_1 < uVar2);
    }
  }
  return;
}



// FUNCTION 149569928 FUN_149569928 body=93 status=ok
// SIG undefined FUN_149569928(void)

void FUN_149569928(undefined8 param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar2 = param_2 + (longlong)param_3 * 0x18;
    while (uVar1 = uVar2, uVar2 = uVar1 - 0x18, param_2 <= uVar2) {
      if (*(char *)(uVar1 - 0x17) < -6) {
        FUN_149569985(param_1,(int)*(char *)(uVar1 - 0x17),*(undefined8 *)(uVar1 - 8));
      }
    }
    FUN_14955d65a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 149569985 FUN_149569985 body=123 status=ok
// SIG undefined FUN_149569985(void)

void FUN_149569985(longlong param_1,undefined4 param_2,int *param_3)

{
  switch(param_2) {
  case 0xffffffef:
  case 0xfffffff1:
  case 0xfffffff2:
  case 0xfffffff3:
  case 0xfffffff9:
    if (param_3 != (int *)0x0) {
LAB_1495699c4:
      FUN_14955d65a(param_1,param_3);
      return;
    }
    break;
  case 0xfffffff0:
    FUN_149569a00(param_1,param_3);
    return;
  case 0xfffffff4:
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      FUN_149569a63(param_3);
      return;
    }
    break;
  case 0xfffffff5:
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      FUN_149559090(param_3);
      return;
    }
    FUN_149569a2f(param_1,param_3);
    return;
  case 0xfffffff7:
    if (((param_3 != (int *)0x0) && (*(longlong *)(param_1 + 0x2d8) == 0)) &&
       (*param_3 = *param_3 + -1, *param_3 == 0)) {
      param_1 = *(longlong *)(param_3 + 4);
      goto LAB_1495699c4;
    }
    break;
  case 0xfffffff8:
    if ((*(byte *)(param_3 + 1) & 0x10) != 0) goto LAB_1495699c4;
  }
  return;
}



// FUNCTION 149569a00 FUN_149569a00 body=47 status=ok
// SIG undefined FUN_149569a00(void)

void FUN_149569a00(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(*(longlong *)(param_2 + 8) + 4) & 0x10) != 0) {
    FUN_14955d65a(param_1);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149569a2f FUN_149569a2f body=52 status=ok
// SIG undefined FUN_149569a2f(void)

void FUN_149569a2f(undefined8 param_1,longlong param_2)

{
  if ((*(int *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    FUN_14955d65a(param_1);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149569a63 FUN_149569a63 body=116 status=ok
// SIG undefined FUN_149569a63(void)

void FUN_149569a63(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_1;
  piVar1 = (int *)(param_1 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    lVar3 = param_1[1];
    plVar4 = (longlong *)param_1[2];
    piVar1 = (int *)(lVar3 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
        (**(code **)(lVar3 + 0x20))(*(undefined8 *)(lVar3 + 0x18));
      }
      if (lVar3 != 0) {
        FUN_14955d65a(uVar2,lVar3);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (param_1 != (undefined8 *)0x0) {
      FUN_14955d65a(uVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149569ad7 FUN_149569ad7 body=93 status=ok
// SIG undefined FUN_149569ad7(void)

void FUN_149569ad7(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  FUN_14955373d(lVar1,param_1);
  lVar2 = param_1[2];
  plVar3 = (longlong *)(param_1[1] + 0x10);
  if (param_1[1] == 0) {
    plVar3 = (longlong *)(lVar1 + 8);
  }
  *plVar3 = lVar2;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 8) = param_1[1];
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x5606c3c8;
  *param_1 = 0;
  FUN_14955d65a(lVar1,param_1);
  return;
}



// FUNCTION 149569b34 FUN_149569b34 body=72 status=ok
// SIG undefined FUN_149569b34(void)

void FUN_149569b34(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  
  if ((*(char *)(param_1 + 0x61) != '\0') && (*(int *)(param_1 + 0xd4) == 0)) {
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    piVar1 = (int *)(param_1 + 0x178);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar2 = *(undefined2 *)(param_1 + 0x17e);
    }
    else {
      uVar2 = 0;
    }
    *(undefined2 *)(param_1 + 0x17c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x50) = 7;
  FUN_14955de40(param_1,7);
  return;
}



// FUNCTION 149569b7c FUN_149569b7c body=1487 status=ok
// SIG undefined FUN_149569b7c(void)

char FUN_149569b7c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  char cVar12;
  longlong lVar13;
  undefined8 uVar14;
  
  cVar12 = '\0';
  if (*(int *)((longlong)param_1 + 0x24) != 0x2df20da3) {
    return '\0';
  }
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x61) != '\0') {
    *(undefined4 *)(param_1 + 7) = 7;
  }
  lVar13 = param_1[0x20];
  if (param_1[0x20] != 0) {
    do {
      lVar9 = lVar13;
      lVar13 = *(longlong *)(lVar9 + 8);
    } while (lVar13 != 0);
    FUN_14956a92e(lVar9);
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  if ((param_1[0xf] != 0) && (iVar11 = *(int *)((longlong)param_1 + 0x2c), 0 < iVar11)) {
    lVar13 = 0;
    do {
      if (*(longlong *)(param_1[0xf] + lVar13 * 8) != 0) {
        FUN_14956aa2a(param_1);
        *(undefined8 *)(param_1[0xf] + lVar13 * 8) = 0;
        iVar11 = *(int *)((longlong)param_1 + 0x2c);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar11);
  }
  if (param_1[0xd] != 0) {
    FUN_149569891(param_1[0xd],(int)param_1[5]);
  }
  while (puVar3 = (undefined8 *)param_1[0x21], puVar3 != (undefined8 *)0x0) {
    param_1[0x21] = puVar3[1];
    uVar10 = (ulonglong)*(int *)(puVar3 + 0xc);
    if (0 < *(int *)((longlong)puVar3 + 100)) {
      lVar13 = 0;
      do {
        FUN_14956aa2a(*puVar3,puVar3[uVar10 * 7 + lVar13 + 0xe]);
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)((longlong)puVar3 + 100));
      uVar10 = (ulonglong)*(uint *)(puVar3 + 0xc);
    }
    FUN_149569891(puVar3 + 0xe,uVar10);
    lVar13 = puVar3[9];
    uVar14 = *(undefined8 *)*puVar3;
    if (lVar13 != 0) {
      do {
        if (*(code **)(lVar13 + 0x10) != (code *)0x0) {
          (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8));
        }
        puVar3[9] = *(undefined8 *)(lVar13 + 0x18);
        FUN_14955d65a(uVar14,lVar13);
        lVar13 = puVar3[9];
      } while (lVar13 != 0);
      uVar14 = *(undefined8 *)*puVar3;
    }
    FUN_14955d65a(uVar14,puVar3);
  }
  lVar13 = param_1[0x24];
  if (lVar13 != 0) {
    lVar9 = *param_1;
    do {
      if (*(code **)(lVar13 + 0x10) != (code *)0x0) {
        (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8));
      }
      param_1[0x24] = *(longlong *)(lVar13 + 0x18);
      FUN_14955d65a(lVar9,lVar13);
      lVar13 = param_1[0x24];
    } while (lVar13 != 0);
  }
  if (*(int *)((longlong)param_1 + 0x34) < 0) goto LAB_149569d65;
  if ((*(byte *)((longlong)param_1 + 0xc9) & 2) != 0) {
    FUN_14956a1da(param_1);
    uVar7 = *(uint *)(param_1 + 7);
    bVar5 = false;
    bVar4 = true;
    bVar6 = (byte)uVar7;
    if ((bVar6 < 0xe) && ((0x2680U >> (uVar7 & 0x1f) & 1) != 0)) {
      if ((bVar6 == 9 & (byte)((uint)(int)param_1[0x19] >> 8) & 1) == 0) {
        if (((bVar6 == 0xd) || ((uVar7 & 0xff) == 7)) && ((char)(int)param_1[0x19] < '\0')) {
          iVar11 = 2;
          bVar5 = true;
          bVar4 = false;
        }
        else {
          FUN_14956a24e(lVar2,0x204);
          while (*(longlong *)(lVar2 + 0x2b0) != 0) {
            *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(*(longlong *)(lVar2 + 0x2b0) + 0x18);
            FUN_14955d65a(lVar2);
          }
          *(undefined8 *)(lVar2 + 700) = 0;
          *(undefined1 *)(lVar2 + 0x67) = 0;
          *(undefined1 *)(lVar2 + 0x5f) = 1;
          *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
          uVar7 = *(uint *)(param_1 + 7);
          iVar11 = 0;
          bVar5 = true;
          bVar4 = true;
        }
        goto LAB_149569dfe;
      }
      bVar4 = true;
      iVar11 = 0;
      bVar5 = true;
    }
    else {
      iVar11 = 0;
LAB_149569dfe:
      if (((uVar7 == 0) || (*(char *)((longlong)param_1 + 0xc2) == '\x03' && !bVar5)) &&
         (0 < param_1[10])) {
        *(undefined4 *)(param_1 + 7) = 0x313;
        *(undefined1 *)((longlong)param_1 + 0xc2) = 2;
        FUN_14956b132(param_1,"FOREIGN KEY constraint failed");
      }
    }
    if (((*(int *)(lVar2 + 500) < 1) || (*(longlong *)(lVar2 + 0x218) != 0)) &&
       ((*(char *)(lVar2 + 0x5f) != '\0' &&
        ((*(uint *)(param_1 + 0x19) >> 8 & 1 ^ *(uint *)(lVar2 + 0xd0)) == 1)))) {
      if (((int)param_1[7] == 0) || (!bVar5 && *(char *)((longlong)param_1 + 0xc2) == '\x03')) {
        lVar13 = *(longlong *)(*param_1 + 0x2d0);
        plVar1 = (longlong *)(*param_1 + 0x2c8);
        lVar9 = lVar13 + *plVar1;
        if (lVar9 != 0 && SCARRY8(lVar13,*plVar1) == lVar9 < 0) {
          *(undefined4 *)(param_1 + 7) = 0x313;
          *(undefined1 *)((longlong)param_1 + 0xc2) = 2;
          FUN_14956b132(param_1,"FOREIGN KEY constraint failed");
          if ((*(byte *)((longlong)param_1 + 0xc9) & 1) != 0) {
            cVar12 = '\x01';
LAB_14956a08b:
            if ((int)param_1[0x1a] == 0) {
              return cVar12;
            }
            FUN_14956b1a5(param_1);
            return cVar12;
          }
          iVar8 = 0x313;
LAB_14956a13c:
          *(int *)(param_1 + 7) = iVar8;
          goto LAB_149569f2a;
        }
        iVar8 = FUN_14956a382(lVar2,param_1);
        if (iVar8 != 0) {
          if (iVar8 == 5) {
            if ((*(byte *)((longlong)param_1 + 0xc9) & 1) != 0) {
              cVar12 = '\x05';
              goto LAB_14956a08b;
            }
            iVar8 = 5;
          }
          goto LAB_14956a13c;
        }
        *(undefined8 *)(lVar2 + 0x2c8) = 0;
        *(undefined8 *)(lVar2 + 0x2d0) = 0;
        *(byte *)(lVar2 + 0x32) = *(byte *)(lVar2 + 0x32) & 0xf7;
        *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) & 0xfe;
      }
      else {
LAB_149569f2a:
        FUN_14956a24e(lVar2,0);
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      }
      *(undefined4 *)(lVar2 + 0x2c0) = 0;
LAB_149569f45:
      if (iVar11 == 0) {
        if ((*(byte *)(param_1 + 0x19) & 0x20) != 0) {
LAB_149569f7b:
          iVar11 = *(int *)((longlong)param_1 + 0x3c);
          goto LAB_149569f7e;
        }
      }
      else {
LAB_149569f49:
        if (((*(int *)(*param_1 + 0x2c0) != 0) && ((int)param_1[8] != 0)) &&
           (iVar8 = FUN_14956b2fb(param_1,iVar11), iVar8 != 0)) {
          if ((int)param_1[7] == 0 || (char)(int)param_1[7] == '\x13') {
            *(int *)(param_1 + 7) = iVar8;
            if (param_1[0x15] != 0) {
              FUN_14955d65a(lVar2);
            }
            param_1[0x15] = 0;
          }
          FUN_14956a24e(lVar2,0x204);
          while (*(longlong *)(lVar2 + 0x2b0) != 0) {
            *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(*(longlong *)(lVar2 + 0x2b0) + 0x18);
            FUN_14955d65a(lVar2);
          }
          *(undefined8 *)(lVar2 + 700) = 0;
          *(undefined1 *)(lVar2 + 0x67) = 0;
          *(undefined1 *)(lVar2 + 0x5f) = 1;
          *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        }
        if ((*(byte *)(param_1 + 0x19) & 0x20) != 0) {
          if (iVar11 != 2) goto LAB_149569f7b;
          *(undefined4 *)(lVar2 + 0x74) = 0;
          goto LAB_149569f84;
        }
      }
    }
    else {
      if (!bVar4) goto LAB_149569f45;
      iVar11 = 1;
      if (((int)param_1[7] == 0) || (*(char *)((longlong)param_1 + 0xc2) == '\x03'))
      goto LAB_149569f49;
      if (*(char *)((longlong)param_1 + 0xc2) == '\x02') {
        iVar11 = 2;
        goto LAB_149569f49;
      }
      FUN_14956a24e(lVar2,0x204);
      while (*(longlong *)(lVar2 + 0x2b0) != 0) {
        *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(*(longlong *)(lVar2 + 0x2b0) + 0x18);
        FUN_14955d65a(lVar2);
      }
      *(undefined8 *)(lVar2 + 700) = 0;
      *(undefined1 *)(lVar2 + 0x67) = 0;
      *(undefined1 *)(lVar2 + 0x5f) = 1;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      iVar11 = 0;
      if ((*(byte *)(param_1 + 0x19) & 0x20) == 0) goto LAB_149569f8b;
LAB_149569f7e:
      *(int *)(lVar2 + 0x74) = iVar11;
      *(int *)(lVar2 + 0x78) = *(int *)(lVar2 + 0x78) + iVar11;
LAB_149569f84:
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
LAB_149569f8b:
    if ((int)param_1[0x1a] != 0) {
      FUN_14956b1a5(param_1);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0x34)) {
    *(int *)(lVar2 + 200) = *(int *)(lVar2 + 200) + -1;
    uVar7 = *(uint *)(param_1 + 0x19);
    if ((uVar7 >> 8 & 1) == 0) {
      *(int *)(lVar2 + 0xd0) = *(int *)(lVar2 + 0xd0) + -1;
      uVar7 = *(uint *)(param_1 + 0x19);
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(int *)(lVar2 + 0xcc) = *(int *)(lVar2 + 0xcc) + -1;
    }
  }
LAB_149569d65:
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x319c2973;
  if (*(char *)(lVar2 + 0x61) == '\0') {
    cVar12 = ((int)param_1[7] == 5) * '\x05';
  }
  else {
    *(undefined4 *)(param_1 + 7) = 7;
  }
  return cVar12;
}



// FUNCTION 14956a14b FUN_14956a14b body=143 status=ok
// SIG undefined FUN_14956a14b(void)

undefined4 FUN_14956a14b(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[7];
  if (param_1[0x15] == 0) {
    lVar3 = *(longlong *)(lVar1 + 0x168);
    if (lVar3 != 0) {
      if ((*(byte *)(lVar3 + 9) & 0x24) == 0) {
        *(undefined2 *)(lVar3 + 8) = 1;
      }
      else {
        FUN_14956b5ca();
      }
    }
    goto LAB_14956a17a;
  }
  *(char *)(lVar1 + 0x62) = *(char *)(lVar1 + 0x62) + '\x01';
  lVar3 = *(longlong *)(lVar1 + 0x168);
  if (lVar3 == 0) {
    lVar3 = FUN_14955c570(lVar1);
    *(longlong *)(lVar1 + 0x168) = lVar3;
    if (lVar3 != 0) goto LAB_14956a1b0;
  }
  else {
LAB_14956a1b0:
    FUN_14955916b(lVar3,param_1[0x15],0xffffffff,1,0xffffffffffffffff);
  }
  *(char *)(lVar1 + 0x62) = *(char *)(lVar1 + 0x62) + -1;
LAB_14956a17a:
  *(int *)(lVar1 + 0x50) = (int)lVar2;
  return (int)lVar2;
}



// FUNCTION 14956a1da FUN_14956a1da body=116 status=ok
// SIG undefined FUN_14956a1da(void)

void FUN_14956a1da(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((int)param_1[0x1a] != 0) {
    lVar3 = (longlong)*(int *)(*param_1 + 0x28);
    if (0 < lVar3) {
      plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 8);
      lVar4 = 0;
      do {
        if ((((lVar4 != 1) && ((*(uint *)(param_1 + 0x1a) >> ((uint)lVar4 & 0x1f) & 1) != 0)) &&
            (lVar1 = *plVar2, lVar1 != 0)) &&
           ((*(char *)(lVar1 + 0x11) != '\0' &&
            (*(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1, *(char *)(lVar1 + 0x12) == '\0')))
           ) {
          FUN_14956624a();
        }
        lVar4 = lVar4 + 1;
        plVar2 = plVar2 + 4;
      } while (lVar3 != lVar4);
    }
  }
  return;
}



// FUNCTION 14956a24e FUN_14956a24e body=308 status=ok
// SIG undefined FUN_14956a24e(void)

void FUN_14956a24e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14955dca3(param_1);
  }
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(char *)(param_1 + 0xb5) == '\0';
  }
  iVar3 = *(int *)(param_1 + 0x28);
  bVar2 = true;
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 8;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x10) == '\x02') {
          bVar2 = true;
        }
        FUN_1495587fc(lVar1,param_2,bVar6 ^ 1);
        iVar3 = *(int *)(param_1 + 0x28);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < iVar3);
    bVar2 = !bVar2;
  }
  FUN_14956b0a2(param_1,0x88);
  if (bVar6 != false) {
    for (lVar4 = *(longlong *)(param_1 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
      *(uint *)(lVar4 + 200) = (*(uint *)(lVar4 + 200) & 0xfffffffc) + 1;
    }
    FUN_149557f5c(param_1);
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14955dd00(param_1);
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xf7;
  if ((*(code **)(param_1 + 0x120) != (code *)0x0) &&
     ((!bVar2 || (*(char *)(param_1 + 0x5f) == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x00014956a348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x120))(*(undefined8 *)(param_1 + 0x118));
    return;
  }
  return;
}



// FUNCTION 14956a382 FUN_14956a382 body=1451 status=ok
// SIG undefined FUN_14956a382(void)

int FUN_14956a382(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar13 = param_1[0x43];
  param_1[0x43] = 0;
  lVar17 = 0;
  do {
    if (*(int *)((longlong)param_1 + 500) <= lVar17) {
      param_1[0x43] = lVar13;
      lVar13 = 0;
      lVar17 = -1;
      iVar9 = 0;
      bVar4 = false;
      goto LAB_14956a41f;
    }
    plVar12 = *(longlong **)(*(longlong *)(lVar13 + lVar17 * 8) + 0x10);
    iVar5 = 0;
    if ((plVar12 != (longlong *)0x0) && (*(code **)(*plVar12 + 0x78) != (code *)0x0)) {
      iVar5 = (**(code **)(*plVar12 + 0x78))(plVar12);
      FUN_14956b29d(param_2);
    }
    lVar17 = lVar17 + 1;
  } while (iVar5 == 0);
  param_1[0x43] = lVar13;
  goto LAB_14956a4c9;
  while( true ) {
    lVar11 = *(longlong *)(param_1[4] + 8 + lVar13);
    iVar5 = 0;
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) == '\x02')) {
      if ((*(char *)(lVar11 + 0x11) != '\0') &&
         (*(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1, *(char *)(lVar11 + 0x12) == '\0'))
      {
        FUN_14956624a(lVar11);
      }
      lVar15 = **(longlong **)(lVar11 + 8);
      if ((*(char *)(param_1[4] + 0x10 + lVar13) != '\x01') &&
         ((0x34UL >> ((ulonglong)*(byte *)(lVar15 + 9) & 0x3f) & 1) == 0)) {
        iVar9 = iVar9 + (uint)(*(char *)(lVar15 + 0x10) == '\0');
      }
      iVar5 = *(int *)(lVar15 + 0x2c);
      if ((iVar5 == 0) && (iVar5 = 0, *(longlong *)(lVar15 + 0x120) == 0)) {
        iVar5 = FUN_1495622e4();
      }
      bVar4 = true;
      if (*(char *)(lVar11 + 0x11) != '\0') {
        piVar1 = (int *)(lVar11 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2(lVar11);
        }
      }
    }
    lVar13 = lVar13 + 0x20;
    if (iVar5 != 0) break;
LAB_14956a41f:
    lVar17 = lVar17 + 1;
    if ((int)param_1[5] <= lVar17) {
      if ((bVar4) && ((code *)param_1[0x22] != (code *)0x0)) {
        iVar6 = (*(code *)param_1[0x22])(param_1[0x21]);
        iVar5 = 0x213;
        if (iVar6 != 0) break;
      }
      lVar13 = **(longlong **)(*(longlong *)(param_1[4] + 8) + 8);
      cVar2 = *(char *)(lVar13 + 0x13);
      if (cVar2 == '\0') {
        pcVar8 = *(char **)(lVar13 + 0xd0);
        if (pcVar8 != (char *)0x0) goto LAB_14956a539;
      }
      else {
        pcVar8 = "";
LAB_14956a539:
        sVar7 = strlen(pcVar8);
        if (((sVar7 & 0x3fffffff) != 0) && (1 < iVar9)) {
          lVar17 = *param_1;
          if (cVar2 == '\0') {
            pcVar8 = *(char **)(lVar13 + 0xd0);
            local_50 = (longlong *)0x0;
            pcVar10 = (char *)0x0;
            uVar14 = 0;
            if (pcVar8 != (char *)0x0) goto LAB_14956a62d;
          }
          else {
            pcVar8 = "";
LAB_14956a62d:
            local_50 = (longlong *)0x0;
            sVar7 = strlen(pcVar8);
            uVar14 = (ulonglong)((uint)sVar7 & 0x3fffffff);
            pcVar10 = pcVar8;
          }
          local_68 = 0;
          uVar16 = 0;
          lVar13 = FUN_14955a402(param_1,"%s-mjXXXXXX9XXz%c%c",pcVar10,0);
          iVar5 = 7;
          if (lVar13 != 0) {
            goto LAB_14956a680;
          }
          break;
        }
      }
      lVar17 = 8;
      lVar13 = -1;
      goto LAB_14956a559;
    }
  }
  goto LAB_14956a4c9;
  while( true ) {
    FUN_149555acc(4,&local_58);
    local_68 = CONCAT44(local_68._4_4_,local_58) & 0xffffffff000000ff;
    FUN_14955591f(0xd,uVar14 + lVar13,"-mj%06X9%02X",local_58 >> 8);
    iVar5 = (**(code **)(lVar17 + 0x38))(lVar17,lVar13,0,&local_54);
    if ((iVar5 != 0) || (uVar16 = uVar16 + 1, local_54 == 0)) break;
LAB_14956a680:
    if (uVar16 != 0) {
      if (100 < uVar16) {
        FUN_14955599e(0xd,"MJ delete: %s",lVar13);
        (**(code **)(lVar17 + 0x30))(lVar17,lVar13,0);
        goto LAB_14956a721;
      }
      if (uVar16 == 1) {
        FUN_14955599e(0xd,"MJ collide: %s",lVar13);
      }
    }
  }
  if (iVar5 == 0) {
LAB_14956a721:
    local_68 = 0;
    iVar5 = FUN_14956b20c(lVar17,lVar13,&local_50,0x4016);
    if (iVar5 == 0) {
      iVar9 = (int)param_1[5];
      local_60 = local_50;
      if (0 < iVar9) {
        lVar11 = 8;
        lVar15 = 0;
        lVar18 = 0;
        do {
          lVar3 = *(longlong *)(param_1[4] + lVar11);
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '\x02')) &&
             (pcVar8 = *(char **)(**(longlong **)(lVar3 + 8) + 0xd8), pcVar8 != (char *)0x0)) {
            sVar7 = strlen(pcVar8);
            iVar5 = (**(code **)(*local_60 + 0x18))
                              (local_60,pcVar8,((uint)sVar7 & 0x3fffffff) + 1,lVar18);
            plVar12 = local_60;
            if (iVar5 != 0) goto LAB_14956a8f5;
            sVar7 = strlen(pcVar8);
            lVar18 = lVar18 + (ulonglong)((uint)sVar7 & 0x3fffffff) + 1;
            iVar9 = (int)param_1[5];
          }
          lVar15 = lVar15 + 1;
          lVar11 = lVar11 + 0x20;
        } while (lVar15 < iVar9);
      }
      plVar12 = local_60;
      uVar16 = (**(code **)(*local_60 + 0x60))(local_60);
      if (((uVar16 >> 10 & 1) == 0) &&
         (iVar5 = (**(code **)(*plVar12 + 0x28))(plVar12,2), iVar5 != 0)) {
LAB_14956a8f5:
        if (*plVar12 != 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
          *plVar12 = 0;
        }
        FUN_145e3b961(plVar12);
        (**(code **)(lVar17 + 0x30))(lVar17,lVar13,0);
      }
      else {
        lVar11 = 8;
        lVar15 = -1;
        do {
          lVar18 = param_1[5];
          lVar15 = lVar15 + 1;
          if ((int)lVar18 <= lVar15) {
            iVar5 = 0;
            break;
          }
          iVar5 = 0;
          if (*(longlong *)(param_1[4] + lVar11) != 0) {
            iVar5 = FUN_1495584a5(*(longlong *)(param_1[4] + lVar11),lVar13);
          }
          lVar11 = lVar11 + 0x20;
        } while (iVar5 == 0);
        if (*plVar12 != 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
          *plVar12 = 0;
        }
        FUN_145e3b961(plVar12);
        if ((int)lVar18 <= lVar15) {
          iVar5 = (**(code **)(lVar17 + 0x30))(lVar17,lVar13,1);
          FUN_14955d65a(param_1,lVar13);
          if (iVar5 == 0) {
            iVar9 = (int)param_1[5];
            if (0 < iVar9) {
              lVar17 = 8;
              lVar13 = 0;
              do {
                if (*(longlong *)(param_1[4] + lVar17) != 0) {
                  FUN_149558366(*(longlong *)(param_1[4] + lVar17),1);
                  iVar9 = (int)param_1[5];
                }
                lVar13 = lVar13 + 1;
                lVar17 = lVar17 + 0x20;
              } while (lVar13 < iVar9);
            }
LAB_14956a8df:
            FUN_14956b0a2(param_1,0x80);
            iVar5 = 0;
          }
          goto LAB_14956a4c9;
        }
      }
    }
  }
  FUN_14955d65a(param_1,lVar13);
  goto LAB_14956a4c9;
  while( true ) {
    iVar5 = 0;
    if (*(longlong *)(param_1[4] + lVar17) != 0) {
      iVar5 = FUN_1495584a5();
    }
    lVar17 = lVar17 + 0x20;
    if (iVar5 != 0) break;
LAB_14956a559:
    lVar13 = lVar13 + 1;
    if ((int)param_1[5] <= lVar13) {
      lVar17 = 8;
      lVar13 = -1;
      goto LAB_14956a598;
    }
  }
  goto LAB_14956a4c9;
  while( true ) {
    iVar5 = 0;
    if (*(longlong *)(param_1[4] + lVar17) != 0) {
      iVar5 = FUN_149558366(*(longlong *)(param_1[4] + lVar17),0);
    }
    lVar17 = lVar17 + 0x20;
    if (iVar5 != 0) break;
LAB_14956a598:
    lVar13 = lVar13 + 1;
    if ((int)param_1[5] <= lVar13) goto LAB_14956a8df;
  }
LAB_14956a4c9:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14956a92e FUN_14956a92e body=252 status=ok
// SIG undefined FUN_14956a92e(void)

undefined4 FUN_14956a92e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1[0xf] != 0) && (iVar3 = *(int *)((longlong)plVar1 + 0x2c), 0 < iVar3)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(plVar1[0xf] + lVar4 * 8) != 0) {
        FUN_14956aa2a(plVar1);
        *(undefined8 *)(plVar1[0xf] + lVar4 * 8) = 0;
        iVar3 = *(int *)((longlong)plVar1 + 0x2c);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  plVar1[0x11] = param_1[2];
  *(int *)(plVar1 + 0x12) = (int)param_1[0xb];
  plVar1[0xd] = param_1[4];
  *(undefined4 *)(plVar1 + 5) = *(undefined4 *)((longlong)param_1 + 0x5c);
  plVar1[0xf] = param_1[5];
  *(int *)((longlong)plVar1 + 0x2c) = (int)param_1[10];
  *(longlong *)(*plVar1 + 0x38) = param_1[8];
  *(int *)((longlong)plVar1 + 0x3c) = (int)param_1[0xd];
  *(undefined4 *)(*plVar1 + 0x74) = *(undefined4 *)((longlong)param_1 + 0x6c);
  lVar4 = plVar1[0x24];
  if (lVar4 != 0) {
    lVar2 = *plVar1;
    do {
      if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8));
      }
      plVar1[0x24] = *(longlong *)(lVar4 + 0x18);
      FUN_14955d65a(lVar2,lVar4);
      lVar4 = plVar1[0x24];
    } while (lVar4 != 0);
  }
  plVar1[0x24] = param_1[9];
  param_1[9] = 0;
  return *(undefined4 *)((longlong)param_1 + 0x54);
}



// FUNCTION 14956aa2a FUN_14956aa2a body=161 status=ok
// SIG undefined FUN_14956aa2a(void)

void FUN_14956aa2a(undefined8 *param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      if ((param_2[8] & 1U) == 0) {
        FUN_14956ac76(*(undefined8 *)(param_2 + 0x38));
        return;
      }
      if (*(longlong *)(param_2 + 0x10) != 0) {
        FUN_14956aacb();
        return;
      }
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)**(longlong **)(param_2 + 0x38);
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x00014956aa93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x38))();
        return;
      }
      if ((cVar2 == '\x01') && (lVar3 = *(longlong *)(param_2 + 0x38), lVar3 != 0)) {
        uVar4 = *param_1;
        FUN_14956ad1a(uVar4,lVar3);
        FUN_145e3b961(*(undefined8 *)(lVar3 + 0x40));
        FUN_14955d65a(uVar4,lVar3);
        param_2[0x38] = '\0';
        param_2[0x39] = '\0';
        param_2[0x3a] = '\0';
        param_2[0x3b] = '\0';
        param_2[0x3c] = '\0';
        param_2[0x3d] = '\0';
        param_2[0x3e] = '\0';
        param_2[0x3f] = '\0';
      }
    }
  }
  return;
}



// FUNCTION 14956aacb FUN_14956aacb body=427 status=ok
// SIG undefined FUN_14956aacb(void)

void FUN_14956aacb(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((*(char *)((longlong)param_1 + 0x11) != '\0') &&
     (*(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1,
     *(char *)((longlong)param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  lVar7 = puVar4[2];
  while (lVar7 != 0) {
    lVar5 = *(longlong *)(lVar7 + 0x28);
    puVar1 = (undefined8 *)(lVar7 + 8);
    lVar7 = lVar5;
    if ((undefined8 *)*puVar1 == param_1) {
      FUN_14956ac76();
    }
  }
  FUN_1495587fc(param_1,0,0);
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    piVar2 = (int *)((longlong)param_1 + 0x14);
    *piVar2 = *piVar2 + -1;
    if ((*piVar2 != 0) || (FUN_1495662d2(param_1), *(char *)((longlong)param_1 + 0x11) != '\0')) {
      bVar6 = true;
      if ((DAT_14c765cfc == '\0') || (lVar7 = (*DAT_14c765d68)(2), lVar7 == 0)) {
        lVar7 = 0;
      }
      else {
        (*DAT_14c765d78)(lVar7);
        bVar6 = false;
      }
      iVar3 = *(int *)(puVar4 + 0xc);
      *(int *)(puVar4 + 0xc) = iVar3 + -1;
      if (iVar3 < 2) {
        puVar1 = DAT_14cc1ee10;
        if (DAT_14cc1ee10 == puVar4) {
          puVar8 = &DAT_14cc1ee10;
        }
        else {
          do {
            puVar8 = puVar1;
            if (puVar8 == (undefined8 *)0x0) goto LAB_14956ac3e;
            puVar1 = (undefined8 *)puVar8[0xd];
          } while ((undefined8 *)puVar8[0xd] != puVar4);
          puVar8 = puVar8 + 0xd;
        }
        *puVar8 = puVar4[0xd];
LAB_14956ac3e:
        if (puVar4[10] != 0) {
          (*DAT_14c765d70)();
        }
      }
      if (!bVar6) {
        (*DAT_14c765d88)(lVar7);
      }
      if (1 < iVar3) goto LAB_14956ab73;
    }
  }
  FUN_14955f0dd(*puVar4,*param_1);
  if (((code *)puVar4[9] != (code *)0x0) && (puVar4[8] != 0)) {
    (*(code *)puVar4[9])();
  }
  if (puVar4[8] != 0) {
    FUN_145e3b961();
  }
  if (puVar4[0x10] != 0) {
    puVar4[0x10] = puVar4[0x10] + -4;
    FUN_14956234e();
    puVar4[0x10] = 0;
  }
  FUN_145e3b961(puVar4);
LAB_14956ab73:
  lVar7 = param_1[4];
  if (param_1[5] != 0) {
    *(longlong *)(param_1[5] + 0x20) = lVar7;
  }
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x28) = param_1[5];
  }
  FUN_145e3b961(param_1);
  return;
}



// FUNCTION 14956ac76 FUN_14956ac76 body=164 status=ok
// SIG undefined FUN_14956ac76(void)

void FUN_14956ac76(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if ((*(char *)(lVar2 + 0x11) != '\0') &&
       (*(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1, *(char *)(lVar2 + 0x12) == '\0')) {
      FUN_14956624a(lVar2);
    }
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == param_1) {
      puVar6 = (undefined8 *)(lVar3 + 0x10);
LAB_14956acb9:
      *puVar6 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      do {
        lVar4 = *(longlong *)(lVar5 + 0x28);
        if (lVar4 == param_1) {
          puVar6 = (undefined8 *)(lVar5 + 0x28);
          goto LAB_14956acb9;
        }
        lVar5 = lVar4;
      } while (lVar4 != 0);
    }
    FUN_149567cb4(param_1);
    FUN_1495663a3(lVar3);
    FUN_145e3b961(*(undefined8 *)(param_1 + 0x10));
    FUN_145e3b961(*(undefined8 *)(param_1 + 0x18));
    if (*(char *)(lVar2 + 0x11) != '\0') {
      piVar1 = (int *)(lVar2 + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1495662d2(lVar2);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14956ad1a FUN_14956ad1a body=440 status=ok
// SIG undefined FUN_14956ad1a(void)

void FUN_14956ad1a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  FUN_14956aed2(param_2,0);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_14956af54();
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_14955d65a(param_1);
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  FUN_14956afab(*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (*(char *)(param_2 + 0x5b) != '\0') {
    uVar4 = 0;
    do {
      if (*(longlong *)(param_2 + 0x78 + uVar4 * 0x68) != 0) {
        FUN_14955d65a(param_1);
      }
      puVar3 = (undefined8 *)(uVar4 * 0x68 + param_2 + 0x60);
      if (puVar3[5] == 0) {
        lVar1 = puVar3[4];
        while (lVar1 != 0) {
          lVar1 = *(longlong *)(lVar1 + 8);
          FUN_145e3b961();
        }
      }
      else {
        FUN_145e3b961();
      }
      plVar2 = (longlong *)puVar3[9];
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
          *plVar2 = 0;
        }
        FUN_145e3b961(plVar2);
      }
      plVar2 = (longlong *)puVar3[0xb];
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
          *plVar2 = 0;
        }
        FUN_145e3b961(plVar2);
      }
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[0xc] = 0;
      puVar3[2] = param_2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_2 + 0x5b));
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    while (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      FUN_145e3b961();
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined1 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_14955d65a(param_1);
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



// FUNCTION 14956aed2 FUN_14956aed2 body=130 status=ok
// SIG undefined FUN_14956aed2(void)

int FUN_14956aed2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x5b);
  if (uVar3 != 0) {
    uVar4 = uVar3 + 1;
    plVar5 = (longlong *)(uVar3 * 0x68 + param_1 + -8);
    do {
      puVar1 = (undefined8 *)*plVar5;
      iVar2 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        if ((code *)*puVar1 == (code *)0x0) {
          iVar2 = (int)puVar1[2];
        }
        else {
          iVar2 = (*(code *)*puVar1)(puVar1[1]);
        }
        FUN_145e3b961(puVar1);
        *(undefined4 *)(plVar5 + 1) = 0;
        *plVar5 = 0;
      }
      if (param_2 == 0) {
        param_2 = iVar2;
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + -0xd;
    } while (1 < uVar4);
  }
  return param_2;
}



// FUNCTION 14956af54 FUN_14956af54 body=87 status=ok
// SIG undefined FUN_14956af54(void)

void FUN_14956af54(undefined8 *param_1)

{
  FUN_145e3b961(param_1[4]);
  FUN_145e3b961(param_1[6]);
  if (param_1[8] != 0) {
    (**(code **)(*(longlong *)param_1[3] + 0x90))((longlong *)param_1[3],0);
  }
  FUN_14956afed(param_1[9]);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14956afab FUN_14956afab body=66 status=ok
// SIG undefined FUN_14956afab(void)

void FUN_14956afab(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != (int *)0x0) && (0 < *param_1)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      FUN_14956af54(*(longlong *)(param_1 + 6) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x50;
    } while (lVar1 < *param_1);
  }
  FUN_145e3b961(param_1);
  return;
}



// FUNCTION 14956afed FUN_14956afed body=181 status=ok
// SIG undefined FUN_14956afed(void)

void FUN_14956afed(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    plVar1 = (longlong *)*param_1;
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(puVar2[1]);
      }
      FUN_145e3b961(puVar2);
      *(undefined4 *)(plVar1 + 1) = 0;
      *plVar1 = 0;
    }
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        *plVar1 = 0;
      }
      FUN_145e3b961(plVar1);
    }
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        *plVar1 = 0;
      }
      FUN_145e3b961(plVar1);
    }
  }
  FUN_14956afab(param_1[1]);
  FUN_145e3b961(param_1);
  return;
}



// FUNCTION 14956b0a2 FUN_14956b0a2 body=144 status=ok
// SIG undefined FUN_14956b0a2(void)

void FUN_14956b0a2(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x218);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    if (0 < *(int *)(param_1 + 500)) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
        if ((*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) &&
           (pcVar3 = *(code **)(**(longlong **)(lVar2 + 0x10) + (ulonglong)param_2),
           pcVar3 != (code *)0x0)) {
          (*pcVar3)();
        }
        *(undefined4 *)(lVar2 + 0x20) = 0;
        FUN_149569a63(lVar2);
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 500));
    }
    FUN_14955d65a(param_1,lVar1);
    *(undefined4 *)(param_1 + 500) = 0;
  }
  return;
}



// FUNCTION 14956b132 FUN_14956b132 body=114 status=ok
// SIG undefined FUN_14956b132(void)

void FUN_14956b132(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1[0x15] != 0) {
    FUN_14955d65a(*param_1);
  }
  local_20 = &local_res18;
  uVar1 = FUN_14955dd50(*param_1,param_2);
  param_1[0x15] = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14956b1a5 FUN_14956b1a5 body=103 status=ok
// SIG undefined FUN_14956b1a5(void)

void FUN_14956b1a5(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x28);
  if (0 < lVar4) {
    plVar3 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 8);
    lVar5 = 0;
    do {
      if ((((lVar5 != 1) && ((*(uint *)(param_1 + 0x1a) >> ((uint)lVar5 & 0x1f) & 1) != 0)) &&
          (lVar2 = *plVar3, lVar2 != 0)) && (*(char *)(lVar2 + 0x11) != '\0')) {
        piVar1 = (int *)(lVar2 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2();
        }
      }
      lVar5 = lVar5 + 1;
      plVar3 = plVar3 + 4;
    } while (lVar4 != lVar5);
  }
  return;
}



// FUNCTION 14956b20c FUN_14956b20c body=145 status=ok
// SIG undefined FUN_14956b20c(void)

int FUN_14956b20c(longlong param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = *(int *)(param_1 + 4);
  _Dst = (void *)FUN_145e3bd67((longlong)iVar1);
  if (_Dst == (void *)0x0) {
    iVar1 = 7;
  }
  else {
    memset(_Dst,0,(longlong)iVar1);
    iVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,_Dst,param_4 & 0x1087f7f,param_5);
    if (iVar1 == 0) {
      *param_3 = _Dst;
      iVar1 = 0;
    }
    else {
      FUN_145e3b961(_Dst);
    }
  }
  return iVar1;
}



// FUNCTION 14956b29d FUN_14956b29d body=94 status=ok
// SIG undefined FUN_14956b29d(void)

void FUN_14956b29d(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *param_1;
    if (param_1[0x15] != 0) {
      FUN_14955d65a(uVar1,param_1[0x15]);
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
    uVar1 = FUN_149559683(uVar1,lVar2);
    param_1[0x15] = uVar1;
    FUN_145e3b961(*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14956b2fb FUN_14956b2fb body=262 status=ok
// SIG undefined FUN_14956b2fb(void)

int FUN_14956b2fb(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *param_1;
  iVar5 = (int)param_1[8] + -1;
  iVar3 = *(int *)(lVar1 + 0x28);
  if (iVar3 < 1) {
    *(int *)(lVar1 + 0x2c0) = *(int *)(lVar1 + 0x2c0) + -1;
    *(undefined4 *)(param_1 + 8) = 0;
LAB_14956b3d0:
    if ((param_2 == 2) && (iVar4 = FUN_14956b4ca(lVar1,2,iVar5), iVar4 != 0)) goto LAB_14956b399;
    iVar4 = FUN_14956b4ca(lVar1,1,iVar5);
  }
  else {
    lVar6 = 0;
    lVar7 = 8;
    iVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + lVar7);
      if (lVar2 != 0) {
        if ((param_2 != 2) || (iVar3 = FUN_14956b401(lVar2,2,iVar5), iVar3 == 0)) {
          iVar3 = FUN_14956b401(lVar2,1,iVar5);
        }
        if (iVar4 == 0) {
          iVar4 = iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x28);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar6 < iVar3);
    *(int *)(lVar1 + 0x2c0) = *(int *)(lVar1 + 0x2c0) + -1;
    *(undefined4 *)(param_1 + 8) = 0;
    if (iVar4 == 0) goto LAB_14956b3d0;
  }
  if (param_2 != 2) {
    return iVar4;
  }
LAB_14956b399:
  *(longlong *)(lVar1 + 0x2c8) = param_1[0xb];
  *(longlong *)(lVar1 + 0x2d0) = param_1[0xc];
  return iVar4;
}



// FUNCTION 14956b401 FUN_14956b401 body=201 status=ok
// SIG undefined FUN_14956b401(void)

int FUN_14956b401(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) == '\x02')) {
    plVar2 = *(longlong **)(param_1 + 8);
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0'))
    {
      FUN_14956624a(param_1);
    }
    if ((((param_2 != 2) || (plVar2[2] == 0)) || (iVar3 = FUN_149567c17(plVar2[2],0,0), iVar3 == 0))
       && (iVar3 = FUN_1495631be(*plVar2,param_2,param_3), iVar3 == 0)) {
      if ((param_3 < 0) && ((*(byte *)((longlong)plVar2 + 0x26) & 0x10) != 0)) {
        *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
      }
      iVar3 = FUN_1495662f7(plVar2);
      uVar4 = *(uint *)(*(longlong *)(plVar2[3] + 0x50) + 0x1c);
      if (uVar4 == 0) {
        uVar4 = *(uint *)(*plVar2 + 0x1c);
      }
      else {
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      *(uint *)((longlong)plVar2 + 0x3c) = uVar4;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      piVar1 = (int *)(param_1 + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1495662d2(param_1);
      }
    }
  }
  return iVar3;
}



// FUNCTION 14956b4ca FUN_14956b4ca body=190 status=ok
// SIG undefined FUN_14956b4ca(void)

int FUN_14956b4ca(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x218) == 0) {
LAB_14956b56d:
    iVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if (*(int *)(param_1 + 500) <= lVar5) goto LAB_14956b56d;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x218) + lVar5 * 8);
      iVar3 = 0;
      if ((*(longlong *)(lVar1 + 0x10) != 0) &&
         (piVar2 = (int *)**(undefined8 **)(lVar1 + 8), 1 < *piVar2)) {
        *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
        if (param_2 == 2) {
          pcVar4 = *(code **)(piVar2 + 0x2c);
        }
        else if (param_2 == 0) {
          pcVar4 = *(code **)(piVar2 + 0x28);
          *(int *)(lVar1 + 0x20) = param_3 + 1;
        }
        else {
          pcVar4 = *(code **)(piVar2 + 0x2a);
        }
        iVar3 = 0;
        if ((pcVar4 != (code *)0x0) && (param_3 < *(int *)(lVar1 + 0x20))) {
          iVar3 = (*pcVar4)(*(longlong *)(lVar1 + 0x10),param_3);
        }
        FUN_149569a63(lVar1);
      }
      lVar5 = lVar5 + 1;
    } while (iVar3 == 0);
  }
  return iVar3;
}



// FUNCTION 14956b588 FUN_14956b588 body=66 status=ok
// SIG undefined FUN_14956b588(void)

void FUN_14956b588(longlong param_1)

{
  if ((*(byte *)(param_1 + 9) & 0x24) != 0) {
    FUN_14956b5ca(param_1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_14955d65a(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14956b5ca FUN_14956b5ca body=59 status=ok
// SIG undefined FUN_14956b5ca(void)

void FUN_14956b5ca(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 >> 0xd & 1) != 0) {
    FUN_14956b605(param_1,*param_1);
    uVar1 = (uint)*(ushort *)(param_1 + 1);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    (*(code *)param_1[6])(param_1[2]);
  }
  *(undefined2 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 14956b605 FUN_14956b605 body=194 status=ok
// SIG undefined FUN_14956b605(void)

undefined4 FUN_14956b605(undefined4 *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  longlong local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_48 = &local_88;
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_58 = 0;
  uStack_80 = 1;
  uStack_60 = *(undefined8 *)(param_1 + 10);
  local_40 = param_2;
  local_38 = param_1;
  (**(code **)(param_2 + 0x20))();
  if (0 < (int)param_1[8]) {
    FUN_14955d65a(*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 6));
  }
  *(undefined8 *)(param_1 + 0xc) = local_58;
  param_1[8] = (undefined4)local_68;
  param_1[9] = local_68._4_4_;
  param_1[10] = (undefined4)uStack_60;
  param_1[0xb] = uStack_60._4_4_;
  param_1[4] = (undefined4)local_78;
  param_1[5] = local_78._4_4_;
  param_1[6] = (undefined4)uStack_70;
  param_1[7] = uStack_70._4_4_;
  *param_1 = (undefined4)local_88;
  param_1[1] = local_88._4_4_;
  param_1[2] = (undefined4)uStack_80;
  param_1[3] = uStack_80._4_4_;
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uStack_28._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14956b6c8 FUN_14956b6c8 body=420 status=ok
// SIG undefined FUN_14956b6c8(void)

undefined8 FUN_14956b6c8(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_3 == 0 || *(int *)(param_1 + 0x20) < 1) {
    if (0 < *(int *)(param_1 + 0x20)) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      goto LAB_14956b73d;
    }
LAB_14956b746:
    if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar4 = FUN_145e3bd67((longlong)param_2);
    }
    else {
      uVar4 = FUN_14955d750();
    }
    *(ulonglong *)(param_1 + 0x18) = uVar4;
    bVar6 = param_3 == 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != lVar5) {
LAB_14956b73d:
      FUN_14955d65a(*(undefined8 *)(param_1 + 0x28),lVar5);
      goto LAB_14956b746;
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (lVar5 == 0) {
      uVar4 = FUN_1495539bb(lVar1,(longlong)param_2);
      *(ulonglong *)(param_1 + 0x18) = uVar4;
      if (uVar4 == 0) {
        FUN_145e3b961(*(undefined8 *)(param_1 + 0x10));
        uVar4 = *(ulonglong *)(param_1 + 0x18);
      }
    }
    else {
      uVar4 = FUN_14955d6fd(lVar5,lVar1);
      if (lVar1 != 0 && uVar4 == 0) {
        FUN_14955d65a(lVar5,lVar1);
      }
      *(ulonglong *)(param_1 + 0x18) = uVar4;
    }
    *(ulonglong *)(param_1 + 0x10) = uVar4;
    bVar6 = true;
  }
  if (uVar4 == 0) {
    if ((*(byte *)(param_1 + 9) & 0x24) == 0) {
      *(undefined2 *)(param_1 + 8) = 1;
    }
    else {
      FUN_14956b5ca(param_1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 7;
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((lVar5 != 0) && (uVar4 < *(ulonglong *)(lVar5 + 0x1c8))) {
    uVar3 = 0x80;
    if (*(ulonglong *)(lVar5 + 0x1b8) <= uVar4) goto LAB_14956b7ac;
    if (*(ulonglong *)(lVar5 + 0x1c0) <= uVar4) {
      uVar3 = (uint)*(ushort *)(lVar5 + 0x17e);
      goto LAB_14956b7ac;
    }
  }
  uVar3 = (*DAT_14c765d30)(uVar4);
LAB_14956b7ac:
  *(uint *)(param_1 + 0x20) = uVar3;
  if ((!bVar6) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0xc));
  }
  uVar2 = (ushort)*(uint *)(param_1 + 8);
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x10));
    uVar2 = *(ushort *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(ushort *)(param_1 + 8) = uVar2 & 0xe3ff;
  return 0;
}



// FUNCTION 14956b86c FUN_14956b86c body=33 status=ok
// SIG undefined FUN_14956b86c(void)

undefined4 FUN_14956b86c(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14956b88d(param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



// FUNCTION 14956b88d FUN_14956b88d body=169 status=ok
// SIG undefined FUN_14956b88d(void)

undefined8 FUN_14956b88d(longlong param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x12) == 0) {
    FUN_14956b936(param_1,param_2,0);
  }
  else {
    if ((uVar1 >> 0xe & 1) != 0) {
      iVar2 = FUN_149558ecc(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      uVar1 = *(ushort *)(param_1 + 8);
    }
    *(ushort *)(param_1 + 8) = uVar1 | 2;
    if ((param_2 & 0xf7) != (uint)*(byte *)(param_1 + 10)) {
      FUN_14956ba6f(param_1);
    }
    if ((((param_2 & 8) != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) &&
       (iVar2 = FUN_14955903b(param_1), iVar2 != 0)) {
      return 0;
    }
    if ((*(ushort *)(param_1 + 8) & 0x202) == 2) {
      FUN_14956c03a(param_1);
    }
  }
  if (*(byte *)(param_1 + 10) != ((byte)param_2 & 0xf7)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 14956b936 FUN_14956b936 body=312 status=ok
// SIG undefined FUN_14956b936(void)

undefined4 FUN_14956b936(double *param_1,undefined4 param_2,char param_3)

{
  ushort uVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  double local_40;
  undefined4 local_38;
  ulonglong local_34;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 4) < 0x20) {
    iVar2 = FUN_14956b6c8(param_1,0x20,0);
    if (iVar2 != 0) {
      *(undefined1 *)((longlong)param_1 + 10) = 0;
      uVar4 = 7;
      goto LAB_14956ba33;
    }
    dVar5 = param_1[2];
    uVar1 = *(ushort *)(param_1 + 1);
  }
  else {
    dVar5 = param_1[3];
    param_1[2] = dVar5;
    uVar1 = *(ushort *)(param_1 + 1) & 0x2d;
    *(ushort *)(param_1 + 1) = uVar1;
  }
  local_48 = 0;
  local_38 = 0x20;
  local_34 = 0;
  local_2c = 0;
  local_40 = dVar5;
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 0x20) == 0) {
      dVar6 = *param_1;
    }
    else {
      dVar6 = (double)(longlong)*param_1;
    }
    FUN_149555a84(&local_48,"%!.15g",dVar6);
  }
  else {
    FUN_149555a84(&local_48,&DAT_149e1d7c3,*param_1);
  }
  *(undefined1 *)((longlong)dVar5 + (local_34 >> 0x20)) = 0;
  sVar3 = strlen((char *)param_1[2]);
  *(uint *)((longlong)param_1 + 0xc) = (uint)sVar3 & 0x3fffffff;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  uVar1 = (ushort)*(undefined4 *)(param_1 + 1) & 0xffd3;
  if (param_3 == '\0') {
    uVar1 = (ushort)*(undefined4 *)(param_1 + 1);
  }
  *(ushort *)(param_1 + 1) = uVar1 | 0x202;
  uVar4 = 0;
  if ((char)param_2 != '\x01') {
    FUN_14956ba6f(param_1,param_2);
  }
LAB_14956ba33:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14956ba6f FUN_14956ba6f body=1483 status=ok
// SIG undefined FUN_14956ba6f(void)

undefined8 FUN_14956ba6f(longlong param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *puVar11;
  uint uVar12;
  byte *pbVar13;
  longlong lVar14;
  ushort *puVar15;
  
  if ((param_2 != '\x01') && (*(char *)(param_1 + 10) != '\x01')) {
    iVar5 = FUN_14955903b(param_1);
    if (iVar5 == 0) {
      uVar7 = (longlong)*(int *)(param_1 + 0xc) & 0xfffffffffffffffe;
      if (0 < (int)uVar7) {
        puVar11 = *(ushort **)(param_1 + 0x10);
        puVar8 = (ushort *)(uVar7 + (longlong)puVar11);
        do {
          *puVar11 = *puVar11 << 8 | *puVar11 >> 8;
          puVar11 = puVar11 + 1;
        } while (puVar11 < puVar8);
      }
      *(char *)(param_1 + 10) = param_2;
      return 0;
    }
    return 7;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  uVar7 = (ulonglong)iVar5;
  if (param_2 == '\x01') {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    iVar5 = (int)uVar7;
    *(int *)(param_1 + 0xc) = iVar5;
    lVar14 = uVar7 * 2 + 1;
  }
  else {
    lVar14 = uVar7 * 2 + 2;
  }
  puVar11 = *(ushort **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    pbVar9 = (byte *)FUN_145e3bd67(lVar14);
  }
  else {
    pbVar9 = (byte *)FUN_14955d750();
  }
  if (pbVar9 == (byte *)0x0) {
    return 7;
  }
  puVar8 = (ushort *)(uVar7 + (longlong)puVar11);
  if (*(char *)(param_1 + 10) == '\x01') {
    pbVar10 = pbVar9;
    if (param_2 == '\x02') {
      if (0 < iVar5) {
        do {
          bVar2 = (byte)*puVar11;
          puVar15 = (ushort *)((longlong)puVar11 + 1);
          puVar11 = puVar15;
          uVar6 = (uint)bVar2;
          if (bVar2 < 0xc0) {
LAB_14956bd07:
            *(short *)pbVar10 = (short)uVar6;
            pbVar10 = pbVar10 + 2;
          }
          else {
            uVar12 = (uint)(byte)(&DAT_14bd40990)[bVar2 - 0xc0];
            while ((puVar11 = puVar8, puVar15 != puVar8 &&
                   (uVar3 = *puVar15, puVar11 = puVar15, ((byte)uVar3 & 0xffffffc0) == 0x80))) {
              puVar15 = (ushort *)((longlong)puVar15 + 1);
              uVar12 = (byte)uVar3 & 0x3f | uVar12 << 6;
            }
            uVar6 = 0xfffd;
            if ((((uVar12 & 0xfffffffe) == 0xfffe) || (uVar12 < 0x80)) ||
               (((uVar12 & 0xfffff800) == 0xd800 || (uVar6 = uVar12, uVar12 < 0x10000))))
            goto LAB_14956bd07;
            *pbVar10 = (byte)(uVar12 - 0x10000 >> 10) & 0xc0 | (byte)(uVar12 >> 10) & 0x3f;
            pbVar10[1] = (byte)(uVar12 - 0x10000 >> 0x12) & 3 | 0xd8;
            pbVar10[2] = (byte)uVar12;
            pbVar10[3] = (byte)(uVar12 >> 8) & 3 | 0xdc;
            pbVar10 = pbVar10 + 4;
          }
        } while (puVar11 < puVar8);
      }
    }
    else if (0 < iVar5) {
      do {
        bVar2 = (byte)*puVar11;
        puVar15 = (ushort *)((longlong)puVar11 + 1);
        puVar11 = puVar15;
        uVar6 = (uint)bVar2;
        if (bVar2 < 0xc0) {
LAB_14956bfa4:
          uVar12 = uVar6;
          pbVar13 = pbVar10 + 1;
          *pbVar10 = (byte)(uVar12 >> 8);
          lVar14 = 2;
        }
        else {
          uVar12 = (uint)(byte)(&DAT_14bd40990)[bVar2 - 0xc0];
          while ((puVar11 = puVar8, puVar15 != puVar8 &&
                 (uVar3 = *puVar15, puVar11 = puVar15, ((byte)uVar3 & 0xffffffc0) == 0x80))) {
            puVar15 = (ushort *)((longlong)puVar15 + 1);
            uVar12 = (byte)uVar3 & 0x3f | uVar12 << 6;
          }
          uVar6 = 0xfffd;
          if (((((uVar12 & 0xfffffffe) == 0xfffe) || (uVar12 < 0x80)) ||
              ((uVar12 & 0xfffff800) == 0xd800)) || (uVar6 = uVar12, uVar12 < 0x10000))
          goto LAB_14956bfa4;
          *pbVar10 = (byte)(uVar12 - 0x10000 >> 0x12) & 3 | 0xd8;
          pbVar10[1] = (byte)(uVar12 - 0x10000 >> 10) & 0xc0 | (byte)(uVar12 >> 10) & 0x3f;
          pbVar13 = pbVar10 + 3;
          pbVar10[2] = (byte)(uVar12 >> 8) & 3 | 0xdc;
          lVar14 = 4;
        }
        pbVar10 = pbVar10 + lVar14;
        *pbVar13 = (byte)uVar12;
      } while (puVar11 < puVar8);
    }
    *(int *)(param_1 + 0xc) = (int)pbVar10 - (int)pbVar9;
    *pbVar10 = 0;
    pbVar10 = pbVar10 + 1;
  }
  else {
    pbVar10 = pbVar9;
    if (*(char *)(param_1 + 10) == '\x02') {
      if (0 < iVar5) {
        do {
          bVar2 = (byte)*puVar11;
          puVar15 = puVar11 + 1;
          bVar1 = *(byte *)((longlong)puVar11 + 1);
          uVar3 = *puVar11;
          if (((bVar1 & 0xf8) == 0xd8) && (puVar15 < puVar8)) {
            uVar4 = puVar11[1];
            bVar1 = *(byte *)((longlong)puVar11 + 3);
            puVar15 = puVar11 + 2;
            iVar5 = (uVar3 & 0x3c0) * 0x400;
            *pbVar10 = (byte)(iVar5 + 0x10000U >> 0x12) | 0xf0;
            pbVar10[1] = (byte)(iVar5 + ((uint)bVar2 << 10 & 0xf000) + 0x10000 >> 0xc) & 0x3f | 0x80
            ;
            pbVar10[2] = (byte)(((bVar1 & 3) << 8 | (uint)(byte)uVar4 | (uint)bVar2 << 10) >> 6) &
                         0x3f | 0x80;
            pbVar10[3] = (byte)uVar4 & 0x3f | 0x80;
            pbVar10 = pbVar10 + 4;
          }
          else if (uVar3 < 0x80) {
            *pbVar10 = bVar2;
            pbVar10 = pbVar10 + 1;
          }
          else if (bVar1 < 8) {
            *pbVar10 = (byte)(uVar3 >> 6) | 0xc0;
            pbVar10[1] = bVar2 & 0x3f | 0x80;
            pbVar10 = pbVar10 + 2;
          }
          else {
            *pbVar10 = bVar1 >> 4 | 0xe0;
            pbVar10[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            pbVar10[2] = bVar2 & 0x3f | 0x80;
            pbVar10 = pbVar10 + 3;
          }
          puVar11 = puVar15;
        } while (puVar15 < puVar8);
      }
    }
    else if (0 < iVar5) {
      do {
        bVar2 = (byte)*puVar11;
        puVar15 = puVar11 + 1;
        bVar1 = *(byte *)((longlong)puVar11 + 1);
        uVar3 = CONCAT11(bVar2,bVar1);
        if (((bVar2 & 0xf8) == 0xd8) && (puVar15 < puVar8)) {
          uVar4 = puVar11[1];
          bVar2 = *(byte *)((longlong)puVar11 + 3);
          puVar15 = puVar11 + 2;
          iVar5 = (uVar3 & 0x3c0) * 0x400;
          *pbVar10 = (byte)(iVar5 + 0x10000U >> 0x12) | 0xf0;
          pbVar10[1] = (byte)(iVar5 + ((uint)bVar1 << 10 & 0xf000) + 0x10000 >> 0xc) & 0x3f | 0x80;
          pbVar10[2] = (byte)((((byte)uVar4 & 3) << 8 | (uint)bVar2 | (uint)bVar1 << 10) >> 6) &
                       0x3f | 0x80;
          pbVar10[3] = bVar2 & 0x3f | 0x80;
          pbVar10 = pbVar10 + 4;
        }
        else if (uVar3 < 0x80) {
          *pbVar10 = bVar1;
          pbVar10 = pbVar10 + 1;
        }
        else if (bVar2 < 8) {
          *pbVar10 = (byte)(uVar3 >> 6) | 0xc0;
          pbVar10[1] = bVar1 & 0x3f | 0x80;
          pbVar10 = pbVar10 + 2;
        }
        else {
          *pbVar10 = bVar2 >> 4 | 0xe0;
          pbVar10[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          pbVar10[2] = bVar1 & 0x3f | 0x80;
          pbVar10 = pbVar10 + 3;
        }
        puVar11 = puVar15;
      } while (puVar15 < puVar8);
    }
    *(int *)(param_1 + 0xc) = (int)pbVar10 - (int)pbVar9;
  }
  *pbVar10 = 0;
  uVar3 = *(ushort *)(param_1 + 8);
  if (((uVar3 & 0x2400) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
    FUN_14956b588(param_1);
  }
  *(ushort *)(param_1 + 8) = uVar3 & 0x803d | 0x202;
  *(char *)(param_1 + 10) = param_2;
  *(byte **)(param_1 + 0x10) = pbVar9;
  *(byte **)(param_1 + 0x18) = pbVar9;
  lVar14 = *(longlong *)(param_1 + 0x28);
  if ((lVar14 != 0) && (pbVar9 < *(byte **)(lVar14 + 0x1c8))) {
    uVar6 = 0x80;
    if (*(byte **)(lVar14 + 0x1b8) <= pbVar9) goto LAB_14956befc;
    if (*(byte **)(lVar14 + 0x1c0) <= pbVar9) {
      uVar6 = (uint)*(ushort *)(lVar14 + 0x17e);
      goto LAB_14956befc;
    }
  }
  uVar6 = (*DAT_14c765d30)(pbVar9);
LAB_14956befc:
  *(uint *)(param_1 + 0x20) = uVar6;
  return 0;
}



// FUNCTION 14956c03a FUN_14956c03a body=83 status=ok
// SIG undefined FUN_14956c03a(void)

void FUN_14956c03a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14956b6c8(param_1,*(int *)(param_1 + 0xc) + 3,1);
  if (iVar1 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0xc)) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 1 + (longlong)*(int *)(param_1 + 0xc)) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 2 + (longlong)*(int *)(param_1 + 0xc)) = 0;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
  }
  return;
}



// FUNCTION 14956c08d FUN_14956c08d body=84 status=ok
// SIG undefined FUN_14956c08d(void)

void FUN_14956c08d(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_14956c0e2(*(undefined8 *)(param_1 + 0x10),&local_18,*(undefined4 *)(param_1 + 0xc),
                *(undefined1 *)(param_1 + 10));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18);
}



// FUNCTION 14956c0e2 FUN_14956c0e2 body=1216 status=ok
// SIG undefined FUN_14956c0e2(void)

int FUN_14956c0e2(byte *param_1,double *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  byte *pbVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  
  *param_2 = 0.0;
  if (param_3 != 0) {
    if ((char)param_4 == '\x01') {
      iVar14 = 1;
      lVar9 = 1;
      pbVar11 = param_1;
    }
    else {
      uVar8 = 3 - (param_4 & 0xff);
      uVar7 = (ulonglong)uVar8;
      iVar14 = 1;
      if ((int)uVar8 < (int)(param_3 & 0xfffffffe)) {
        uVar7 = (ulonglong)(int)uVar8;
        do {
          if (param_1[uVar7] != 0) {
            iVar14 = -100;
            goto LAB_14956c15a;
          }
          uVar7 = uVar7 + 2;
        } while ((longlong)uVar7 < (longlong)(int)(param_3 & 0xfffffffe));
        iVar14 = 1;
      }
LAB_14956c15a:
      param_3 = (uint)uVar7 ^ 1;
      pbVar11 = param_1 + (param_4 & 1);
      lVar9 = 2;
    }
    param_1 = param_1 + (int)param_3;
    for (; pbVar11 < param_1; pbVar11 = pbVar11 + lVar9) {
      bVar1 = *pbVar11;
      if (((&DAT_14bd400b0)[bVar1] & 1) == 0) {
        iVar12 = 0;
        lVar13 = 0;
        if ((bVar1 - 0x2b & 0xfd) == 0) {
          lVar13 = lVar9;
        }
        pbVar11 = pbVar11 + lVar13;
        bVar4 = true;
        if (param_1 <= pbVar11) goto LAB_14956c2d2;
        iVar12 = 0;
        iVar6 = 0;
        lVar13 = 0;
        goto LAB_14956c1d9;
      }
    }
  }
  return 0;
LAB_14956c1d9:
  bVar2 = *pbVar11;
  if (0xfffffffffffffff5 < (ulonglong)bVar2 - 0x3a) {
    lVar13 = (longlong)(char)bVar2 + lVar13 * 10 + -0x30;
    pbVar11 = pbVar11 + lVar9;
    if (0xcccccccccccccca < lVar13) {
      for (; (pbVar11 < param_1 && (0xfffffffffffffff5 < (ulonglong)*pbVar11 - 0x3a));
          pbVar11 = pbVar11 + lVar9) {
        iVar6 = iVar6 + 1;
      }
    }
    iVar12 = iVar12 + 1;
    if (param_1 <= pbVar11) goto LAB_14956c226;
    goto LAB_14956c1d9;
  }
  if (bVar2 == 0x2e) {
    iVar14 = iVar14 + 1;
    while ((pbVar11 = pbVar11 + lVar9, pbVar11 < param_1 &&
           (0xfffffffffffffff5 < (ulonglong)*pbVar11 - 0x3a))) {
      if (lVar13 < 0xccccccccccccccb) {
        lVar13 = (longlong)(char)*pbVar11 + lVar13 * 10 + -0x30;
        iVar6 = iVar6 + -1;
        iVar12 = iVar12 + 1;
      }
    }
  }
  if (pbVar11 < param_1) {
    if ((*pbVar11 | 0x20) == 0x65) {
      pbVar11 = pbVar11 + lVar9;
      iVar14 = iVar14 + 1;
      if (param_1 <= pbVar11) {
        iVar18 = 0;
        iVar15 = 1;
        bVar4 = false;
        goto LAB_14956c234;
      }
      iVar15 = 1;
      if (*pbVar11 == 0x2b) {
        pbVar11 = pbVar11 + lVar9;
      }
      else if (*pbVar11 == 0x2d) {
        pbVar11 = pbVar11 + lVar9;
        iVar15 = -1;
      }
      iVar18 = 0;
      if (pbVar11 < param_1) {
        uVar7 = (ulonglong)*pbVar11;
        if (uVar7 - 0x3a < 0xfffffffffffffff6) {
          bVar4 = false;
        }
        else {
          iVar17 = 0;
          do {
            pbVar11 = pbVar11 + lVar9;
            iVar18 = (char)uVar7 + -0x30 + iVar17 * 10;
            if (9999 < iVar17) {
              iVar18 = 10000;
            }
            bVar4 = true;
          } while ((pbVar11 < param_1) &&
                  (uVar7 = (ulonglong)*pbVar11, iVar17 = iVar18, 0xfffffffffffffff5 < uVar7 - 0x3a))
          ;
        }
      }
      else {
        bVar4 = false;
      }
    }
    else {
      iVar18 = 0;
      iVar15 = 1;
      bVar4 = true;
    }
    while ((pbVar11 < param_1 && (((&DAT_14bd400b0)[*pbVar11] & 1) != 0))) {
      pbVar11 = pbVar11 + lVar9;
    }
  }
  else {
LAB_14956c226:
    iVar18 = 0;
    iVar15 = 1;
    bVar4 = true;
  }
LAB_14956c234:
  if (lVar13 == 0) {
LAB_14956c2d2:
    if (bVar1 == 0x2d) {
      dVar19 = -0.0;
    }
    else {
      dVar19 = 0.0;
    }
    goto LAB_14956c2e5;
  }
  uVar16 = iVar18 * iVar15 + iVar6;
  uVar8 = -uVar16;
  if ((int)-uVar16 < 0) {
    uVar8 = uVar16;
  }
  uVar5 = uVar8;
  if (uVar16 == 0) {
LAB_14956c3c6:
    lVar9 = -lVar13;
    if (bVar1 != 0x2d) {
      lVar9 = lVar13;
    }
    uVar5 = uVar8;
    if (uVar8 == 0) {
      dVar19 = (double)lVar9;
      goto LAB_14956c2e5;
    }
  }
  else {
    while (-1 < (int)uVar16) {
      if (0xccccccccccccccb < lVar13) goto LAB_14956c491;
      lVar13 = lVar13 * 10;
LAB_14956c291:
      uVar8 = uVar5 - 1;
      bVar3 = (int)uVar5 < 2;
      uVar5 = uVar8;
      if (bVar3) goto LAB_14956c3c6;
    }
    uVar7 = lVar13 * -0x3333333333333333 + 0x1999999999999998;
    if ((uVar7 >> 1 | (ulonglong)((uVar7 & 1) != 0) << 0x3f) < 0x1999999999999999) {
      lVar13 = lVar13 / 10;
      goto LAB_14956c291;
    }
LAB_14956c491:
    lVar9 = -lVar13;
    if (bVar1 != 0x2d) {
      lVar9 = lVar13;
    }
  }
  if ((int)uVar5 < 0x134) {
    dVar19 = 1.0;
    if (uVar5 != 0) {
      pdVar10 = (double *)&DAT_14bd409e0;
      do {
        if ((uVar5 & 1) != 0) {
          dVar19 = dVar19 * *pdVar10;
        }
        pdVar10 = pdVar10 + 1;
        bVar3 = 1 < uVar5;
        uVar5 = (int)uVar5 >> 1;
      } while (bVar3);
    }
    if ((int)uVar16 < 0) {
      dVar19 = (double)lVar9 / dVar19;
    }
    else {
      dVar19 = (double)lVar9 * dVar19;
    }
  }
  else if (uVar5 < 0x156) {
    dVar19 = 1.0;
    if (uVar5 - 0x134 != 0) {
      pdVar10 = (double *)&DAT_14bd409e0;
      uVar8 = uVar5 - 0x134;
      do {
        if ((uVar8 & 1) != 0) {
          dVar19 = dVar19 * *pdVar10;
        }
        pdVar10 = pdVar10 + 1;
        bVar3 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar3);
    }
    if ((int)uVar16 < 0) {
      dVar19 = ((double)lVar9 / dVar19) / 1e+308;
    }
    else {
      dVar19 = dVar19 * (double)lVar9 * 1e+308;
    }
  }
  else if ((int)uVar16 < 0) {
    dVar19 = (double)((ulonglong)(double)lVar9 & 0x8000000000000000);
  }
  else {
    dVar19 = (double)((float)lVar9 * INFINITY);
  }
LAB_14956c2e5:
  *param_2 = dVar19;
  if ((((bVar4) && (pbVar11 == param_1)) && (0 < iVar12)) && (0 < iVar14)) {
    return iVar14;
  }
  if (((1 < iVar14) && (iVar14 == 3 || bVar4)) && (0 < iVar12)) {
    return -1;
  }
  return 0;
}



// FUNCTION 14956c5a2 FUN_14956c5a2 body=44 status=ok
// SIG undefined FUN_14956c5a2(void)

longlong FUN_14956c5a2(double param_1)

{
  longlong lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (-9.223372036854776e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      lVar1 = (longlong)param_1;
    }
    return lVar1;
  }
  return -0x8000000000000000;
}



// FUNCTION 14956c5ce FUN_14956c5ce body=83 status=ok
// SIG undefined FUN_14956c5ce(void)

undefined8 FUN_14956c5ce(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_14956c622(*(undefined8 *)(param_1 + 0x10),&local_18,*(undefined4 *)(param_1 + 0xc),
                *(undefined1 *)(param_1 + 10));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14956c622 FUN_14956c622 body=562 status=ok
// SIG undefined FUN_14956c622(void)

ulonglong FUN_14956c622(byte *param_1,longlong *param_2,uint param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  bool bVar14;
  
  if (param_4 == 1) {
    lVar10 = 1;
    bVar12 = 0;
    pbVar4 = param_1;
  }
  else {
    uVar13 = 3 - param_4;
    uVar5 = (ulonglong)uVar13;
    if ((int)uVar13 < (int)param_3) {
      uVar5 = (ulonglong)(int)uVar13;
      do {
        if (param_1[uVar5] != 0) {
          bVar12 = 1;
          goto LAB_14956c66c;
        }
        uVar5 = uVar5 + 2;
      } while ((longlong)uVar5 < (longlong)(int)param_3);
    }
    bVar12 = 0;
LAB_14956c66c:
    param_3 = (uint)uVar5 ^ 1;
    pbVar4 = param_1 + (param_4 & 1);
    lVar10 = 2;
  }
  param_1 = param_1 + (int)param_3;
  bVar3 = true;
  for (; pbVar8 = pbVar4, pbVar4 < param_1; pbVar4 = pbVar4 + lVar10) {
    bVar1 = *pbVar4;
    if (((&DAT_14bd400b0)[bVar1] & 1) == 0) {
      if (bVar1 == 0x2b) {
        pbVar4 = pbVar4 + lVar10;
        pbVar8 = pbVar4;
      }
      else if (bVar1 == 0x2d) {
        pbVar4 = pbVar4 + lVar10;
        bVar3 = false;
        pbVar8 = pbVar4;
      }
      break;
    }
  }
  for (; (pbVar4 < param_1 && (*pbVar4 == 0x30)); pbVar4 = pbVar4 + lVar10) {
  }
  if (pbVar4 < param_1) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      bVar14 = (byte)(pbVar4[lVar7] - 0x30) < 10;
      if (!bVar14) break;
      lVar9 = (ulonglong)pbVar4[lVar7] + lVar9 * 10 + -0x30;
      lVar7 = lVar7 + lVar10;
    } while (pbVar4 + lVar7 < param_1);
    uVar13 = (uint)lVar7;
    if (lVar9 < 0) {
      lVar9 = 0x7fffffffffffffff;
      lVar7 = -0x8000000000000000;
      goto LAB_14956c71e;
    }
  }
  else {
    uVar13 = 0;
    bVar14 = true;
    lVar9 = 0;
  }
  lVar7 = -lVar9;
LAB_14956c71e:
  if (bVar3) {
    lVar7 = lVar9;
  }
  *param_2 = lVar7;
  if ((pbVar8 != pbVar4) || (uVar5 = 0xffffffff, uVar13 != 0)) {
    if (bVar14 || bVar12 != 0) {
      uVar5 = (ulonglong)bVar12;
    }
    else {
      pbVar8 = pbVar4 + uVar13;
      do {
        if (((&DAT_14bd400b0)[*pbVar8] & 1) == 0) {
          uVar5 = 1;
          goto LAB_14956c736;
        }
        pbVar8 = pbVar8 + lVar10;
      } while (pbVar8 < param_1);
      uVar5 = 0;
    }
  }
LAB_14956c736:
  uVar2 = (int)lVar10 * 0x13;
  if (uVar2 <= uVar13) {
    if (uVar2 < uVar13) {
      lVar10 = -0x8000000000000000;
      if (bVar3) {
        lVar10 = 0x7fffffffffffffff;
      }
      *param_2 = lVar10;
      uVar5 = 2;
    }
    else {
      uVar11 = 0;
      pbVar8 = pbVar4;
      do {
        bVar12 = *pbVar8;
        bVar1 = (&DAT_14bd40a28)[uVar11];
        if (0x10 < uVar11) break;
        uVar11 = uVar11 + 1;
        pbVar8 = pbVar8 + lVar10;
      } while (bVar12 == bVar1);
      if (bVar12 == bVar1) {
        iVar6 = (char)pbVar4[lVar10 * 0x12] + -0x38;
      }
      else {
        iVar6 = ((int)(char)bVar12 - (int)(char)bVar1) * 10;
      }
      if (-1 < iVar6) {
        lVar10 = -0x8000000000000000;
        if (bVar3) {
          lVar10 = 0x7fffffffffffffff;
        }
        *param_2 = lVar10;
        if (bVar3) {
          uVar5 = 3;
        }
        if (iVar6 != 0) {
          uVar5 = 2;
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 14956c854 FUN_14956c854 body=44 status=ok
// SIG undefined FUN_14956c854(void)

void FUN_14956c854(undefined8 *param_1,undefined8 param_2)

{
  if ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0) {
    FUN_14956b5ca(param_1);
  }
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 4;
  return;
}



// FUNCTION 14956c880 FUN_14956c880 body=37310 status=ok
// SIG undefined FUN_14956c880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14956c880(undefined1 (*param_1) [16],undefined8 param_2,uint *param_3)

{
  longlong *plVar1;
  byte bVar2;
  double dVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [14];
  byte bVar19;
  undefined1 uVar20;
  char cVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  longlong *plVar35;
  size_t sVar36;
  int *piVar37;
  code *pcVar38;
  longlong *plVar39;
  undefined1 *puVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  ulonglong uVar44;
  void *pvVar45;
  undefined1 auVar46 [8];
  undefined8 uVar47;
  uint uVar48;
  undefined *puVar49;
  byte *pbVar50;
  longlong lVar51;
  undefined1 (*pauVar52) [16];
  char *pcVar53;
  int iVar54;
  undefined1 (*pauVar55) [16];
  longlong lVar56;
  short sVar57;
  double *pdVar58;
  ulonglong *puVar59;
  double *pdVar60;
  int *piVar61;
  byte *pbVar62;
  undefined1 *puVar63;
  undefined8 *puVar64;
  undefined1 (*pauVar65) [16];
  char cVar66;
  uint uVar67;
  uint7 uVar70;
  code *pcVar68;
  char *pcVar69;
  longlong lVar71;
  ulonglong uVar72;
  uint uVar73;
  byte *pbVar74;
  longlong lVar75;
  ulonglong uVar76;
  double *pdVar77;
  undefined8 *puVar78;
  undefined1 (*pauVar79) [16];
  bool bVar80;
  bool bVar81;
  double dVar82;
  double dVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  char local_1e1;
  undefined1 (*local_1e0) [16];
  ulonglong local_1d8;
  undefined1 (*local_1d0) [16];
  undefined1 (*local_1c8) [16];
  undefined1 (*local_1c0) [16];
  uint local_1b4;
  undefined1 (*local_1b0) [16];
  undefined1 (*local_1a8) [16];
  undefined1 (*local_1a0) [16];
  undefined1 (*local_198) [16];
  undefined1 (*local_190) [16];
  undefined8 local_188;
  undefined1 (*local_180) [16];
  undefined1 (*local_178) [16];
  longlong local_170;
  undefined1 (*local_168) [16];
  longlong local_160;
  char *local_158;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined2 local_128;
  char local_126;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [12];
  int iStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 (*local_a0) [16];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  uint local_78;
  undefined2 local_74;
  longlong local_70;
  undefined1 (*local_68) [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  pauVar65 = *(undefined1 (**) [16])((longlong)param_1[8] + 8);
  pauVar41 = *(undefined1 (**) [16])*param_1;
  pauVar52 = *(undefined1 (**) [16])((longlong)param_1[6] + 8);
  local_1e1 = *(char *)((longlong)pauVar41[5] + 0xe);
  FUN_14956a1da();
  if (*(longlong *)pauVar41[0x1e] == 0) {
    uVar73 = 0xffffffff;
  }
  else {
    uVar73 = *(uint *)pauVar41[0x1f] -
             *(uint *)((longlong)param_1[0xe] + 4) % *(uint *)pauVar41[0x1f];
  }
  local_198 = pauVar65;
  if (*(int *)((longlong)param_1[3] + 8) == 7) {
    uVar76 = 0;
    pauVar43 = (undefined1 (*) [16])0x0;
    goto LAB_14957030b;
  }
  uVar76 = 0;
  *(undefined8 *)((longlong)param_1[4] + 8) = 0;
  *(undefined8 *)param_1[10] = 0;
  *(undefined4 *)((longlong)pauVar41[0x26] + 8) = 0;
  if (*(int *)pauVar41[0x17] != 0) {
    pauVar43 = (undefined1 (*) [16])0x0;
LAB_149570411:
    uVar27 = (uint)(*(char *)((longlong)pauVar41[6] + 1) == '\0') * 2 + 7;
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    *(uint *)((longlong)param_1[3] + 8) = uVar27;
    FUN_14956b132(param_1,&DAT_149dfbe46,(&PTR_s_not_an_error_14bd49c10)[(longlong)pauVar79]);
    goto LAB_14957580f;
  }
  local_180 = (undefined1 (*) [16])((longlong)param_1[10] + 8);
  uVar76 = 0;
  local_188 = local_188 & 0xffffffff00000000;
  local_1e0 = (undefined1 (*) [16])0x0;
  local_1d0 = (undefined1 (*) [16])0x0;
  pauVar65 = (undefined1 (*) [16])
             ((longlong)pauVar65 + (longlong)*(int *)((longlong)param_1[3] + 4) * 0x18);
  local_1c8 = param_1;
  local_1c0 = pauVar41;
LAB_14956c983:
  auVar89 = _auStack_a8;
  auVar87 = _auStack_b8;
  pauVar55 = local_1c8;
  pauVar43 = local_1e0;
  uVar47 = auStack_b8._0_8_;
  uVar76 = (ulonglong)((int)uVar76 + 1);
  bVar19 = (*pauVar65)[0];
  uVar44 = (ulonglong)bVar19;
  uVar70 = (uint7)((ulonglong)param_3 >> 8);
  auVar18 = stack0xffffffffffffff4a;
  uVar34 = stack0xffffffffffffff50;
  auVar17 = stack0xffffffffffffff3c;
  pauVar42 = local_1d0;
  switch(uVar44) {
  case 0:
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    pcVar69 = *(char **)pauVar65[1];
    if (iVar26 == 0) {
      if (*(int *)pauVar41[0xd] < 1) {
        uVar27 = 0;
        local_1d8 = uVar76;
        local_1b0 = pauVar52;
        if (pcVar69 != (char *)0x0) {
          sVar36 = strlen(pcVar69);
          uVar27 = (uint)sVar36 & 0x3fffffff;
        }
        param_3 = (uint *)(ulonglong)
                          (uint)(*(int *)((longlong)pauVar41[0x2b] + 0xc) + *(int *)pauVar41[0x2c]);
        local_1d0 = (undefined1 (*) [16])0x0;
        uVar32 = FUN_14956b4ca(pauVar41,0);
        if (uVar32 == 0) {
          puVar33 = (undefined8 *)FUN_14955d750();
          uVar76 = local_1d8;
          pauVar52 = local_1b0;
          pauVar42 = local_1d0;
          if (puVar33 != (undefined8 *)0x0) {
            *puVar33 = puVar33 + 4;
            param_3 = (uint *)(ulonglong)(uVar27 + 1);
            memcpy(puVar33 + 4,pcVar69,(size_t)param_3);
            if (*(char *)((longlong)pauVar41[5] + 0xf) == '\0') {
              piVar61 = (int *)((longlong)pauVar41[0x2b] + 0xc);
              *piVar61 = *piVar61 + 1;
            }
            else {
              *(undefined1 *)((longlong)pauVar41[5] + 0xf) = 0;
              *(undefined1 *)((longlong)pauVar41[6] + 7) = 1;
            }
            puVar33[3] = *(undefined8 *)pauVar41[0x2b];
            *(undefined8 **)pauVar41[0x2b] = puVar33;
            puVar33[1] = *(undefined8 *)((longlong)pauVar41[0x2c] + 8);
            puVar33[2] = *(undefined8 *)pauVar41[0x2d];
            uVar76 = local_1d8;
            pauVar52 = local_1b0;
            pauVar42 = local_1d0;
          }
          break;
        }
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar32;
        uVar76 = local_1d8;
      }
      else {
        local_1d8 = uVar76;
        FUN_14956b132(param_1,"cannot open savepoint - SQL statements in progress");
        pauVar79 = (undefined1 (*) [16])0x5;
        uVar76 = local_1d8;
      }
    }
    else {
      plVar39 = *(longlong **)pauVar41[0x2b];
      if (plVar39 != (longlong *)0x0) {
        param_3 = (uint *)0x0;
LAB_14956dec2:
        lVar51 = 0;
        do {
          bVar19 = *(byte *)(*plVar39 + lVar51);
          pauVar42 = (undefined1 (*) [16])(ulonglong)(byte)pcVar69[lVar51];
          if (bVar19 == pcVar69[lVar51]) {
            if ((ulonglong)bVar19 == 0) {
              if ((iVar26 == 1) && (0 < *(int *)pauVar41[0xd])) {
                local_1d8 = uVar76;
                local_1b4 = uVar73;
                local_1a8 = pauVar65;
                FUN_14956b132(param_1,"cannot release savepoint - SQL statements in progress");
                pauVar79 = (undefined1 (*) [16])0x5;
                uVar76 = local_1d8;
                pauVar65 = local_1a8;
                pauVar43 = local_1e0;
                uVar73 = local_1b4;
                goto LAB_14957580f;
              }
              uVar27 = 0;
              uVar44 = (ulonglong)local_1a0 >> 0x20;
              local_1a0 = (undefined1 (*) [16])((ulonglong)local_1a0 & 0xffffffff00000000);
              if ((plVar39[3] != 0) ||
                 (bVar80 = *(char *)((longlong)pauVar41[6] + 7) == '\0',
                 local_1a0 = (undefined1 (*) [16])
                             CONCAT44((int)uVar44,
                                      (int)CONCAT71((int7)((ulonglong)lVar51 >> 8),!bVar80)),
                 bVar80 || iVar26 != 1)) {
                param_3 = (uint *)(ulonglong)
                                  (~(uint)param_3 + *(int *)((longlong)pauVar41[0x2b] + 0xc));
                iVar31 = *(int *)((longlong)pauVar41[2] + 8);
                local_1d8 = uVar76;
                local_1b4 = uVar73;
                local_1a8 = pauVar65;
                if (iVar26 != 2) goto LAB_1495700cc;
                uVar27 = *(uint *)((longlong)pauVar41[2] + 0xc) & 1;
                if (iVar31 < 1) goto LAB_14956f26b;
                lVar56 = 8;
                lVar51 = 0;
                local_1b0 = pauVar52;
                goto LAB_149570089;
              }
              lVar51 = *(longlong *)(*(longlong *)*local_1c8 + 0x2d0);
              plVar1 = (longlong *)(*(longlong *)*local_1c8 + 0x2c8);
              lVar56 = lVar51 + *plVar1;
              param_1 = pauVar55;
              if (lVar56 != 0 && SCARRY8(lVar51,*plVar1) == lVar56 < 0) {
                *(undefined4 *)((longlong)local_1c8[3] + 8) = 0x313;
                *(undefined1 *)((longlong)local_1c8[0xc] + 2) = 2;
                local_1d8 = uVar76;
                local_1b4 = uVar73;
                local_1a8 = pauVar65;
                FUN_14956b132(local_1c8,"FOREIGN KEY constraint failed");
                pauVar79 = (undefined1 (*) [16])&DAT_00000001;
                uVar76 = local_1d8;
                pauVar65 = local_1a8;
                pauVar43 = local_1e0;
                uVar73 = local_1b4;
                goto LAB_149575917;
              }
              *(undefined1 *)((longlong)pauVar41[5] + 0xf) = 1;
              local_1d8 = uVar76;
              local_1b4 = uVar73;
              local_1a8 = pauVar65;
              uVar47 = FUN_149569b7c(local_1c8);
              pauVar43 = local_1e0;
              uVar76 = local_1d8;
              uVar73 = local_1b4;
              pauVar65 = local_1a8;
              if ((int)uVar47 == 5) {
                *(int *)((longlong)pauVar55[3] + 4) =
                     (int)((ulonglong)((longlong)local_1a8 - (longlong)local_198) >> 3) *
                     -0x55555555;
                *(undefined1 *)((longlong)pauVar41[5] + 0xf) = 0;
                *(undefined4 *)((longlong)pauVar55[3] + 8) = 5;
                pauVar79 = (undefined1 (*) [16])0x5;
                goto LAB_149575917;
              }
              pauVar79 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)pauVar55[3] + 8);
              if (*(uint *)((longlong)pauVar55[3] + 8) != 0) {
                *(undefined1 *)((longlong)pauVar41[5] + 0xf) = 0;
                goto LAB_14957580f;
              }
              *(undefined1 *)((longlong)pauVar41[6] + 7) = 0;
              local_1a0 = (undefined1 (*) [16])
                          CONCAT44(local_1a0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar47 >> 8),1));
              goto LAB_14956f290;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar19] != pauVar42[0x14bd3ff3][0]) goto LAB_14956def6;
          lVar51 = lVar51 + 1;
        } while( true );
      }
LAB_149574cc3:
      local_1d8 = uVar76;
      local_1b4 = uVar73;
      local_1a8 = pauVar65;
      FUN_14956b132(param_1,"no such savepoint: %s",pcVar69);
      pauVar79 = (undefined1 (*) [16])&DAT_00000001;
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar43 = local_1e0;
      uVar73 = local_1b4;
    }
    goto LAB_14957580f;
  case 1:
    goto switchD_14956c99d_caseD_1;
  case 2:
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar17;
    _local_c8 = auVar7 << 0x20;
    if ((*(int *)((longlong)*pauVar65 + 8) != 0) &&
       ((*(byte *)((longlong)pauVar41[3] + 2) & 0x10) != 0)) {
      pauVar79 = (undefined1 (*) [16])&DAT_00000008;
      goto LAB_14957580f;
    }
    lVar51 = *(longlong *)
              (*(longlong *)pauVar41[2] + 8 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20);
    if (lVar51 != 0) {
      param_3 = (uint *)local_c8;
      uVar27 = FUN_1495574f2();
      if (uVar27 != 0) {
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
        pauVar43 = local_1e0;
        if ((char)uVar27 == '\x05') {
          *(int *)((longlong)param_1[3] + 4) =
               (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555;
          *(uint *)((longlong)param_1[3] + 8) = uVar27;
          goto LAB_149575917;
        }
        goto LAB_14957580f;
      }
      local_1d0 = (undefined1 (*) [16])0x0;
      if ((((*(byte *)((longlong)param_1[0xc] + 8) & 0x80) != 0) &&
          (*(int *)((longlong)*pauVar65 + 8) != 0)) &&
         ((*(char *)((longlong)pauVar41[5] + 0xf) == '\0' ||
          (1 < *(int *)((longlong)pauVar41[0xc] + 0xc))))) {
        iVar26 = *(int *)param_1[4];
        if (iVar26 == 0) {
          iVar26 = *(int *)pauVar41[0x2c] + 1;
          *(int *)pauVar41[0x2c] = iVar26;
          iVar26 = iVar26 + *(int *)((longlong)pauVar41[0x2b] + 0xc);
          *(int *)param_1[4] = iVar26;
        }
        param_3 = (uint *)(ulonglong)(iVar26 - 1);
        local_1d0 = (undefined1 (*) [16])FUN_14956b4ca(pauVar41,0);
        if ((int)local_1d0 == 0) {
          local_1d0 = (undefined1 (*) [16])FUN_149576131(lVar51,*(undefined4 *)param_1[4]);
        }
        *(undefined8 *)((longlong)param_1[5] + 8) = *(undefined8 *)((longlong)local_1c0[0x2c] + 8);
        *(undefined8 *)param_1[6] = *(undefined8 *)local_1c0[0x2d];
      }
    }
    pauVar43 = local_1e0;
    if ((*(short *)((longlong)*pauVar65 + 2) != 0) &&
       ((local_c8._0_4_ != *(int *)((longlong)*pauVar65 + 0xc) ||
        (*(int *)(*(longlong *)
                   (*(longlong *)pauVar41[2] + 0x18 +
                   (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20) + 4) != *(int *)pauVar65[1]))
       )) {
      if (*(longlong *)*local_180 != 0) {
        FUN_14955d65a(pauVar41);
      }
      uVar47 = FUN_149559683(pauVar41,"database schema has changed");
      *(undefined8 *)*local_180 = uVar47;
      if (**(int **)(*(longlong *)pauVar41[2] + 0x18 +
                    (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20) != local_c8._0_4_) {
        FUN_149576197(pauVar41);
      }
      *(uint *)((longlong)param_1[0xc] + 8) =
           (*(uint *)((longlong)param_1[0xc] + 8) & 0xfffffffc) + 1;
      pauVar79 = (undefined1 (*) [16])&DAT_00000011;
      goto LAB_14957580f;
    }
    if ((int)local_1d0 != 0) {
      pauVar79 = (undefined1 (*) [16])((ulonglong)local_1d0 & 0xffffffff);
      goto LAB_14957580f;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 3:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    lVar56 = *(longlong *)(lVar51 + 0x38);
    if (*(char *)(lVar56 + 0x58) == '\0') {
      lVar75 = *(longlong *)(lVar56 + 0x38);
      *(undefined8 *)(lVar56 + 0x38) = *(undefined8 *)(lVar75 + 8);
      *(undefined8 *)(lVar75 + 8) = 0;
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      if ((lVar75 != 0) && (*(longlong *)(lVar56 + 0x40) == 0)) {
        do {
          lVar75 = *(longlong *)(lVar75 + 8);
          FUN_14955d65a();
        } while (lVar75 != 0);
      }
      lVar56 = *(longlong *)(lVar56 + 0x38);
      uVar76 = local_1d8;
LAB_14956e12d:
      if (lVar56 != 0) {
        *(undefined4 *)(lVar51 + 0x28) = 0;
        goto LAB_14956d60d;
      }
    }
    else {
      if (*(char *)(lVar56 + 0x59) != '\0') {
        local_1b0 = pauVar52;
        uVar27 = FUN_149581080();
        if (uVar27 != 0) goto LAB_14956d5eb;
        lVar56 = *(longlong *)(*(longlong *)(lVar56 + 0x10) + 0x18);
        goto LAB_14956e12d;
      }
      auVar13._12_4_ = 0;
      auVar13._0_12_ = auVar17;
      _local_c8 = auVar13 << 0x20;
      local_1b0 = pauVar52;
      uVar27 = FUN_1495815a5();
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      if ((uVar27 != 0) || (local_c8._0_4_ == 0)) goto LAB_14956d5f3;
    }
    *(undefined4 *)(lVar51 + 0x28) = 0;
    goto LAB_14956dd4c;
  case 4:
  case 5:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    local_1b0 = pauVar52;
    uVar27 = (**(code **)pauVar65[1])();
LAB_14956d5eb:
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
LAB_14956d5f3:
    *(undefined4 *)(lVar51 + 0x28) = 0;
    if ((int)pauVar79 == 0x65) {
LAB_14956dd4c:
      *(undefined1 *)(lVar51 + 2) = 1;
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar52 = local_1b0;
      pauVar43 = local_1e0;
      goto LAB_14956d64d;
    }
    pauVar43 = local_1e0;
    if ((int)pauVar79 == 0) {
LAB_14956d60d:
      *(undefined1 *)(lVar51 + 2) = 0;
      piVar61 = (int *)((longlong)param_1[0xd] +
                       (ulonglong)*(ushort *)((longlong)*pauVar65 + 2) * 4 + 4);
      *piVar61 = *piVar61 + 1;
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar52 = local_1b0;
      pauVar43 = local_1e0;
      goto LAB_14956d635;
    }
    goto LAB_14957580f;
  case 6:
    local_1f8 = (code *)&uStack_c0;
    uStack_c0._0_4_ = 0xffffffff;
    local_c8 = (undefined1  [8])0xffffffff00000000;
    param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 8);
    uVar27 = FUN_14955cd7f(pauVar41,*(undefined4 *)((longlong)*pauVar65 + 4));
    if (uVar27 != 0) {
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
      if (uVar27 != 5) goto LAB_14957580f;
      local_c8._0_4_ = 1;
    }
    plVar39 = (longlong *)
              ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    lVar51 = 0;
    do {
      if ((*(byte *)((longlong)plVar39 + 9) & 0x24) == 0) {
        *plVar39 = (longlong)*(int *)(local_c8 + lVar51 * 4);
        *(undefined2 *)(plVar39 + 1) = 4;
      }
      else {
        FUN_14956c854();
      }
      lVar51 = lVar51 + 1;
      plVar39 = plVar39 + 7;
    } while (lVar51 != 3);
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    break;
  case 7:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = *(longlong *)((longlong)param_1[6] + 8) + lVar56;
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar56) & 0x24) == 0) {
      *(undefined2 *)(lVar51 + 8) = 4;
      pauVar42 = (undefined1 (*) [16])param_3;
      local_1d8 = uVar76;
    }
    else {
      local_1d8 = uVar76;
      FUN_14957a10c(lVar51);
      pauVar42 = (undefined1 (*) [16])param_3;
    }
    uVar27 = *(uint *)((longlong)*pauVar65 + 0xc);
    lVar56 = *(longlong *)
              (*(longlong *)pauVar41[2] + 8 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20);
    lVar75 = **(longlong **)(lVar56 + 8);
    bVar19 = *(byte *)(lVar75 + 9);
    if (uVar27 == 0xffffffff) {
      uVar27 = (uint)bVar19;
    }
    uVar48 = (uint)bVar19;
    uVar32 = (uint)bVar19;
    if ((*(byte *)(lVar75 + 0x14) < 3) &&
       ((**(longlong **)(lVar75 + 0x50) == 0 || (uVar32 = uVar48, *(longlong *)(lVar75 + 0x60) < 1))
       )) {
      uVar32 = uVar27;
    }
    if (*(char *)(lVar75 + 0x13) == '\0') {
      local_1a8 = pauVar65;
      if (uVar32 != 5) goto LAB_149573490;
      pcVar69 = *(char **)(lVar75 + 0xd0);
      if (pcVar69 != (char *)0x0) goto LAB_14957345f;
    }
    else {
      local_1a8 = pauVar65;
      if (uVar32 == 5) {
        pcVar69 = "";
LAB_14957345f:
        local_1a8 = pauVar65;
        sVar36 = strlen(pcVar69);
        if ((((sVar36 & 0x3fffffff) == 0) || (*(char *)(lVar75 + 0x11) != '\0')) ||
           ((uVar32 = 5, *(char *)(lVar75 + 8) == '\0' &&
            ((*(int *)**(undefined8 **)(lVar75 + 0x48) < 2 ||
             (*(longlong *)((int *)**(undefined8 **)(lVar75 + 0x48) + 0x1a) == 0))))))
        goto LAB_14957349a;
      }
LAB_149573490:
      pauVar41 = local_1c0;
      param_1 = local_1c8;
      if ((uVar32 != uVar48) && ((bVar19 == 5 || (uVar32 == 5)))) {
        if ((*(char *)((longlong)local_1c0[5] + 0xf) == '\0') ||
           (1 < *(int *)((longlong)local_1c0[0xc] + 0xc))) {
          pcVar69 = "out of";
          if (uVar32 == 5) {
            pcVar69 = "into";
          }
          FUN_14956b132(local_1c8,"cannot change %s wal mode from within a transaction",pcVar69);
          pauVar79 = (undefined1 (*) [16])&DAT_00000001;
          uVar76 = local_1d8;
          pauVar65 = local_1a8;
          pauVar43 = local_1e0;
          goto LAB_14957580f;
        }
        if (bVar19 == 5) {
          local_1d0 = (undefined1 (*) [16])FUN_149579652(lVar75,local_1c0);
          if ((int)local_1d0 == 0) {
            FUN_1495797aa(lVar75,uVar32);
LAB_149574b78:
            local_1d0 = (undefined1 (*) [16])FUN_149558033(lVar56,(uVar32 == 5) + '\x01');
          }
        }
        else {
          if (uVar48 == 4) {
            FUN_1495797aa(lVar75,2);
          }
          if ((int)local_1d0 == 0) goto LAB_149574b78;
        }
      }
    }
LAB_14957349a:
    uVar27 = FUN_1495797aa();
    pauVar41 = local_1c0;
    pauVar55 = local_1c8;
    *(undefined2 *)(lVar51 + 8) = 0xa02;
    if (uVar27 == 6) {
      *(undefined8 *)(lVar51 + 0x10) = 0;
      uVar27 = 0;
    }
    else {
      pcVar69 = (&PTR_s_delete_14bd41d60)[uVar27];
      *(char **)(lVar51 + 0x10) = pcVar69;
      sVar36 = strlen(pcVar69);
      uVar27 = (uint)sVar36 & 0x3fffffff;
    }
    pauVar65 = local_1a8;
    *(uint *)(lVar51 + 0xc) = uVar27;
    *(undefined1 *)(lVar51 + 10) = 1;
    if (local_1e1 != '\x01') {
      FUN_14956ba6f();
    }
    if ((int)local_1d0 == 0) goto LAB_14956f2d3;
    pauVar79 = (undefined1 (*) [16])((ulonglong)local_1d0 & 0xffffffff);
    uVar76 = local_1d8;
    pauVar43 = local_1e0;
    param_1 = pauVar55;
    goto LAB_14957580f;
  case 8:
    param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 4);
    uVar27 = FUN_149579903();
    goto LAB_149571dcf;
  case 9:
    lVar75 = (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38;
    local_1f8 = *(code **)param_1[7];
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    puVar33 = *(undefined8 **)(lVar51 + 0x38);
    lVar56 = *(longlong *)*puVar33;
    uVar30 = *(undefined4 *)((longlong)pauVar52 + lVar75);
    uVar27 = (uint)*(undefined8 *)((longlong)pauVar52 + lVar75 + 0x38);
    if (0 < (int)uVar27) {
      lVar71 = (ulonglong)(uVar27 & 0x7fffffff) - 1;
      auVar84._8_4_ = (int)lVar71;
      auVar84._0_8_ = lVar71;
      auVar84._12_4_ = (int)((ulonglong)lVar71 >> 0x20);
      in_XMM1 = pmovsxbq(in_XMM1,0x100);
      uVar44 = 0;
      do {
        auVar89 = auVar84 ^ _DAT_149931e80;
        auVar87 = _DAT_149931e80 ^ in_XMM1;
        auVar90._8_4_ = 0xffffffff;
        auVar90._0_8_ = 0xffffffffffffffff;
        auVar90._12_4_ = 0xffffffff;
        lVar71 = in_XMM1._8_8_;
        if ((bool)(~(auVar89._0_8_ < auVar87._0_8_) & 1)) {
          *(longlong *)(local_1f8 + uVar44 * 8) =
               (longlong)pauVar52 + (in_XMM1._0_8_ + 1) * 0x38 + lVar75 + 0x38;
        }
        if (auVar87._8_8_ <= auVar89._8_8_) {
          *(longlong *)(local_1f8 + (uVar44 + 1) * 8) =
               (longlong)pauVar52 + (lVar71 - auVar90._8_8_) * 0x38 + lVar75 + 0x38;
        }
        uVar44 = uVar44 + 2;
        in_XMM1._0_8_ = (double)(in_XMM1._0_8_ + 2);
        in_XMM1._8_8_ = lVar71 + 2;
      } while ((uVar27 + 1 & 0xfffffffe) != uVar44);
    }
    param_3 = *(uint **)pauVar65[1];
    local_1d8 = uVar76;
    uVar27 = (**(code **)(lVar56 + 0x40))(puVar33,uVar30);
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    FUN_14956b29d(local_1c8);
    uVar76 = local_1d8;
    pauVar41 = local_1c0;
    pauVar43 = local_1e0;
    param_1 = local_1c8;
    if (uVar27 == 0) {
      iVar26 = (**(code **)(lVar56 + 0x50))();
      *(undefined1 *)(lVar51 + 2) = 0;
      local_1d0 = (undefined1 (*) [16])0x0;
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      goto joined_r0x0001495721c6;
    }
    goto LAB_14957580f;
  case 10:
    if (*(char *)((longlong)pauVar41[6] + 1) == '\0') {
      plVar39 = *(longlong **)(*(longlong *)pauVar65[1] + 0x10);
      pauVar79 = (undefined1 (*) [16])&DAT_00000006;
      if ((plVar39 != (longlong *)0x0) && (lVar51 = *plVar39, lVar51 != 0)) {
        if (*(longlong *)(lVar51 + 0x68) == 0) break;
        uVar27 = *(uint *)((longlong)*pauVar65 + 8);
        local_1d0 = (undefined1 (*) [16])
                    CONCAT71(local_1d0._1_7_,*(undefined1 *)((longlong)pauVar41[6] + 6));
        param_3 = *(uint **)param_1[7];
        if (0 < (int)uVar27) {
          puVar33 = (undefined8 *)
                    ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
          lVar56 = (ulonglong)uVar27 - 1;
          auVar85._8_4_ = (int)lVar56;
          auVar85._0_8_ = lVar56;
          auVar85._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
          in_XMM1 = pmovsxbq(in_XMM1,0x100);
          lVar56 = 0;
          do {
            auVar88._8_4_ = (int)puVar33;
            auVar88._0_8_ = puVar33;
            auVar88._12_4_ = (int)((ulonglong)puVar33 >> 0x20);
            auVar89 = auVar85 ^ _DAT_149931e80;
            auVar87 = _DAT_149931e80 ^ in_XMM1;
            if ((bool)(~(auVar89._0_8_ < auVar87._0_8_) & 1)) {
              *(undefined8 **)((longlong)*(undefined1 (*) [16])param_3 + lVar56) = puVar33;
            }
            if (auVar87._8_8_ <= auVar89._8_8_) {
              *(longlong *)((longlong)*(undefined1 (*) [16])param_3 + lVar56 + 8) =
                   auVar88._8_8_ + 0x38;
            }
            lVar75 = in_XMM1._8_8_;
            in_XMM1._0_8_ = (double)(in_XMM1._0_8_ + 2);
            in_XMM1._8_8_ = lVar75 + 2;
            puVar33 = puVar33 + 0xe;
            lVar56 = lVar56 + 0x10;
          } while ((ulonglong)(uVar27 + 1 >> 1) << 4 != lVar56);
        }
        *(undefined1 *)((longlong)pauVar41[6] + 6) = *(undefined1 *)((longlong)*pauVar65 + 2);
        local_1d8 = uVar76;
        local_1b0 = pauVar52;
        uVar27 = (**(code **)(lVar51 + 0x68))(plVar39);
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
        *(undefined1 *)((longlong)pauVar41[6] + 6) = local_1d0._0_1_;
        FUN_14956b29d();
        uVar76 = local_1d8;
        pauVar52 = local_1b0;
        if (uVar27 == 0) {
          if (*(int *)((longlong)*pauVar65 + 4) != 0) {
            *(undefined1 (*) [8])((longlong)pauVar41[3] + 8) = local_c8;
          }
          piVar61 = (int *)((longlong)param_1[3] + 0xc);
          *piVar61 = *piVar61 + 1;
          goto LAB_14956f5c1;
        }
        pauVar43 = local_1e0;
        if (((char)uVar27 == '\x13') && (*(char *)(*(longlong *)pauVar65[1] + 0x1c) != '\0')) {
          sVar57 = *(short *)((longlong)*pauVar65 + 2);
          local_1d0 = (undefined1 (*) [16])0x0;
          pauVar42 = local_1d0;
          if (sVar57 == 4) break;
          if (sVar57 == 5) {
            sVar57 = 2;
          }
          *(char *)((longlong)param_1[0xc] + 2) = (char)sVar57;
        }
        else {
          piVar61 = (int *)((longlong)param_1[3] + 0xc);
          *piVar61 = *piVar61 + 1;
        }
      }
      goto LAB_14957580f;
    }
    goto LAB_14957030b;
  case 0xb:
    goto LAB_14956d635;
  case 0xc:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    *(undefined2 *)((longlong)pauVar52 + lVar51 + 8) = 4;
    *(longlong *)((longlong)pauVar52 + lVar51) =
         (longlong)((int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555)
    ;
    goto LAB_14956d2de;
  case 0xd:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    *(longlong *)((longlong)pauVar52 + lVar51) = (longlong)*(int *)((longlong)*pauVar65 + 0xc) + -1;
    *(undefined2 *)((longlong)pauVar52 + lVar51 + 8) = 4;
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    goto joined_r0x0001495721c6;
  case 0xe:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    *(undefined2 *)((longlong)pauVar52 + lVar51 + 8) = 4;
    iVar26 = *(int *)((longlong)pauVar52 + lVar51);
    *(longlong *)((longlong)pauVar52 + lVar51) =
         (longlong)((int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555)
    ;
    pauVar65 = (undefined1 (*) [16])((longlong)local_198 + (longlong)iVar26 * 0x18);
    param_3 = (uint *)local_198;
    break;
  case 0xf:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    pauVar43 = (undefined1 (*) [16])((longlong)pauVar52 + lVar51);
    uVar23 = *(ushort *)((longlong)pauVar52 + lVar51 + 8);
    if ((uVar23 & 4) == 0) {
      param_3 = (uint *)((ulonglong)uVar70 << 8);
      FUN_149575ae7();
      uVar23 = *(ushort *)((longlong)*pauVar43 + 8);
      if ((uVar23 & 4) == 0) {
        if (*(int *)((longlong)*pauVar65 + 8) != 0) goto LAB_14956d2de;
        pauVar79 = (undefined1 (*) [16])&DAT_00000014;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        goto LAB_14957580f;
      }
    }
    uVar23 = uVar23 & 0x3e40 | 4;
LAB_14956edfb:
    *(ushort *)((longlong)*pauVar43 + 8) = uVar23;
    pauVar42 = local_1d0;
    break;
  case 0x10:
    if ((int)local_188 < 0) {
      iVar26 = *(int *)((longlong)*pauVar65 + 4);
    }
    else {
      if ((int)local_188 == 0) {
        pauVar65 = (undefined1 (*) [16])
                   ((longlong)local_198 + (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x18 + -0x18
                   );
        goto LAB_149570866;
      }
      iVar26 = *(int *)((longlong)*pauVar65 + 0xc);
    }
    pauVar65 = (undefined1 (*) [16])((longlong)local_198 + (longlong)iVar26 * 0x18 + -0x18);
    break;
  case 0x11:
    if (*(longlong *)param_1[0x10] == 0) {
      iVar26 = *(int *)(*(longlong *)((longlong)param_1[8] + 8) + 4);
      if (iVar26 != *(int *)((longlong)*pauVar65 + 4)) {
LAB_14956f7a5:
        *(int *)((longlong)*pauVar65 + 4) = iVar26;
        break;
      }
    }
    else {
      uVar72 = ((longlong)pauVar65 - *(longlong *)((longlong)param_1[8] + 8) >> 3) *
               -0x5555555555555555;
      lVar51 = *(longlong *)(*(longlong *)param_1[0x10] + 0x30);
      uVar27 = 1 << ((byte)uVar72 & 7);
      param_3 = (uint *)(ulonglong)uVar27;
      uVar44 = uVar72 >> 3 & 0x1fffffff;
      bVar19 = *(byte *)(lVar51 + uVar44);
      if ((bVar19 >> ((uint)uVar72 & 7) & 1) == 0) {
        bVar19 = (byte)uVar27 | bVar19;
        param_3 = (uint *)(ulonglong)CONCAT31((int3)(uVar27 >> 8),bVar19);
        *(byte *)(lVar51 + uVar44) = bVar19;
        iVar26 = *(int *)(*(longlong *)((longlong)param_1[8] + 8) + 4);
        goto LAB_14956f7a5;
      }
    }
    goto LAB_14956d2de;
  case 0x12:
    iVar26 = FUN_149575ea4();
    goto joined_r0x0001495721c6;
  case 0x13:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    puVar59 = (ulonglong *)((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52)
    ;
    if ((*(byte *)((longlong)pauVar52 + lVar51 + 8) & 1) == 0) {
      iVar26 = FUN_149575ea4((undefined8 *)(lVar51 + (longlong)pauVar52),0);
      if ((*(byte *)((longlong)puVar59 + 9) & 0x24) == 0) {
        *puVar59 = (ulonglong)(iVar26 == 0);
        *(undefined2 *)(puVar59 + 1) = 4;
        pauVar42 = local_1d0;
      }
      else {
        FUN_14956c854();
        pauVar42 = local_1d0;
      }
    }
    else if ((*(byte *)((longlong)puVar59 + 9) & 0x24) == 0) {
      *(undefined2 *)(puVar59 + 1) = 1;
    }
    else {
      FUN_14956b5ca();
      pauVar42 = local_1d0;
    }
    break;
  case 0x14:
    iVar26 = FUN_149575ea4();
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    if (iVar26 == 0) goto LAB_14956d2de;
    break;
  case 0x15:
    if (*(char *)(*(longlong *)
                   (*(longlong *)((longlong)param_1[7] + 8) +
                   (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 2) != '\0') {
      lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38;
      if ((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x24) == 0) {
        *(undefined2 *)((longlong)pauVar52 + lVar51 + 8) = 1;
      }
      else {
        FUN_14956b5ca();
      }
      goto LAB_14956d2de;
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    *(undefined2 *)(lVar51 + 2) = 0;
    *(undefined4 *)(lVar51 + 0x28) = 0;
    if (*(char *)(lVar51 + 4) == '\0') {
      bVar2 = *(byte *)(*(longlong *)(lVar51 + 0x38) + 3);
      auStack_b8._0_3_ = CONCAT12(-(bVar19 & 1),*(undefined2 *)pauVar65[1]) | 0x10000;
      auVar89 = _auStack_b8;
      uStack_c0 = (ulonglong)
                  ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
      local_c8 = (undefined1  [8])*(undefined8 *)(lVar51 + 0x40);
      stack0xffffffffffffff4f = auVar87._7_9_;
      auStack_b8._0_6_ = auVar89._0_6_;
      auStack_b8[6] = 0;
      local_1f8 = (code *)&local_138;
      param_3 = (uint *)0x0;
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      uVar27 = FUN_149576ba8();
      if (uVar27 == 0) {
        uVar48 = (bVar2 & 2) >> 1;
        if ((bVar2 & 2) == 0) {
LAB_149573a98:
          if (bVar19 < 0x18) {
            if ((0 < (int)(uint)local_138) || (bVar19 == 0x16 && (uint)local_138 == 0)) {
              uVar27 = FUN_149577148();
              goto LAB_149574b31;
            }
            uVar27 = (uint)(**(char **)(lVar51 + 0x38) != '\0');
            goto LAB_1495706a7;
          }
          if ((-1 < (int)(uint)local_138) && (bVar19 != 0x19 || (uint)local_138 != 0))
          goto LAB_149573ac3;
          uVar27 = FUN_149577104();
LAB_149574b31:
          if (uVar27 == 0) goto LAB_149573ac3;
          pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
          uVar76 = local_1d8;
          pauVar43 = local_1e0;
          param_1 = local_1c8;
          if (uVar27 != 0x65) goto LAB_14957580f;
        }
        else {
          uVar27 = 1;
          if (auStack_b8[6] != '\0') goto LAB_149573a98;
LAB_14957069e:
          uVar48 = uVar27;
          uVar27 = (uint)local_138;
LAB_1495706a7:
          if (uVar27 == 0) {
LAB_149573ac3:
            if (uVar48 != 0) {
              pauVar65 = (undefined1 (*) [16])((longlong)pauVar65[1] + 8);
            }
            local_1d0 = (undefined1 (*) [16])0x0;
            uVar76 = local_1d8;
            pauVar52 = local_1b0;
            param_1 = local_1c8;
            pauVar42 = local_1d0;
            break;
          }
        }
        local_1d0 = (undefined1 (*) [16])0x0;
        uVar76 = local_1d8;
        pauVar52 = local_1b0;
        goto LAB_14956d2de;
      }
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
    }
    else {
      lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38;
      pdVar77 = (double *)((longlong)pauVar52 + lVar56);
      uVar23 = *(ushort *)((longlong)pauVar52 + lVar56 + 8);
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      if ((uVar23 & 0x2e) == 2) {
        FUN_149559f51(pdVar77);
      }
      pauVar41 = (undefined1 (*) [16])FUN_149558f85(pdVar77);
      dVar3 = pdVar77[1];
      *(ushort *)(pdVar77 + 1) = uVar23;
      if (((ulonglong)dVar3 & 0x24) == 0) {
        if (((ulonglong)dVar3 & 8) != 0) {
          in_XMM1._0_8_ = (double)(longlong)pauVar41;
          in_XMM1._8_8_ = 0;
          if (in_XMM1._0_8_ <= *pdVar77) {
            bVar19 = ((bVar19 & 1) == 0 && in_XMM1._0_8_ < *pdVar77) | bVar19;
          }
          else {
            bVar19 = bVar19 & 0x7e;
          }
          goto LAB_149574887;
        }
        uVar76 = local_1d8;
        pauVar41 = local_1c0;
        pauVar52 = local_1b0;
        if ((0x17 < bVar19) || (((ulonglong)dVar3 & 1) != 0)) goto LAB_14956d2de;
        uVar32 = FUN_149576b44(*(undefined8 *)(lVar51 + 0x38));
        pauVar41 = local_1c0;
        uVar27 = 0;
        if (uVar32 == 0) goto LAB_14957069e;
      }
      else {
LAB_149574887:
        local_1f8 = (code *)&local_138;
        uVar48 = 0;
        param_3 = (uint *)pauVar41;
        uVar32 = FUN_149576ba8();
        *(undefined1 (**) [16])(lVar51 + 0x58) = pauVar41;
        pauVar41 = local_1c0;
        if (uVar32 == 0) goto LAB_149573a98;
      }
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar32;
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
    }
    goto LAB_14957580f;
  case 0x1a:
    if (*(longlong *)
         (*(longlong *)((longlong)param_1[7] + 8) + (longlong)*(int *)((longlong)*pauVar65 + 4) * 8)
        == 0) goto LAB_14956d635;
    break;
  case 0x1b:
    if ((*(byte *)(*(longlong *)
                    (*(longlong *)((longlong)param_1[7] + 8) +
                    (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 8) & 8) == 0)
    goto switchD_14956c99d_caseD_1c;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
switchD_14956c99d_caseD_1c:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    puVar33 = (undefined8 *)
              ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if (*(int *)pauVar65[1] < 1) {
      local_1d8 = uVar76;
      if ((((*(byte *)((longlong)puVar33 + 9) & 0x40) != 0) &&
          (iVar26 = FUN_149558ecc(puVar33), uVar76 = local_1d8, pauVar43 = local_1e0, iVar26 != 0))
         || (puVar40 = (undefined1 *)FUN_149577182(*(undefined8 *)(lVar51 + 0x40)),
            uVar76 = local_1d8, pauVar43 = local_1e0, puVar40 == (undefined1 *)0x0))
      goto LAB_14957030b;
      FUN_1495771ce(*(undefined8 *)(lVar51 + 0x40));
      puVar63 = puVar40;
    }
    else {
      auStack_b8._0_2_ = (short)*(int *)pauVar65[1];
      _auStack_b8 = CONCAT142(auVar18,auStack_b8._0_2_);
      uStack_c0 = (ulonglong)puVar33;
      local_c8 = (undefined1  [8])*(undefined8 *)(lVar51 + 0x40);
      puVar40 = (undefined1 *)0x0;
      puVar63 = local_c8;
      local_1d8 = uVar76;
    }
    puVar63[0x12] = 0;
    bVar80 = true;
    if (((*pauVar65)[0] == '\x1c') && ((ulonglong)*(ushort *)(puVar63 + 0x10) != 0)) {
      lVar56 = 0;
      do {
        bVar80 = (*(ushort *)(*(longlong *)(puVar63 + 8) + 8 + lVar56) & 1) == 0;
        if (!bVar80) break;
        bVar81 = (ulonglong)*(ushort *)(puVar63 + 0x10) * 0x38 + -0x38 != lVar56;
        lVar56 = lVar56 + 0x38;
      } while (bVar81);
    }
    local_1f8 = (code *)&local_138;
    param_3 = (uint *)0x0;
    uVar27 = FUN_149576ba8();
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    if (puVar40 != (undefined1 *)0x0) {
      FUN_14955d65a();
    }
    uVar76 = local_1d8;
    pauVar43 = local_1e0;
    param_1 = local_1c8;
    if (uVar27 != 0) goto LAB_14957580f;
    *(uint *)(lVar51 + 0x2c) = (uint)local_138;
    *(bool *)(lVar51 + 2) = (uint)local_138 != 0;
    *(undefined1 *)(lVar51 + 3) = 0;
    *(undefined4 *)(lVar51 + 0x28) = 0;
    if ((*pauVar65)[0] == '\x1e') {
      if ((uint)local_138 == 0) {
LAB_149571146:
        local_1d0 = (undefined1 (*) [16])0x0;
        goto LAB_14956d2de;
      }
    }
    else if (!(bool)(bVar80 & (uint)local_138 == 0)) goto LAB_149571146;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 0x1f:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 0xc);
    if ((*(byte *)((longlong)pauVar52 + lVar51 * 0x38 + 8) & 0x24) != 0) goto LAB_1495713d0;
    pauVar41 = (undefined1 (*) [16])(lVar51 * 0x38 + (longlong)pauVar52);
    uStack_98 = *(undefined8 *)pauVar41[3];
    _local_c8 = *pauVar41;
    in_XMM1 = pauVar41[1];
    _auStack_a8 = pauVar41[2];
    param_3 = (uint *)((ulonglong)uVar70 << 8);
    _auStack_b8 = in_XMM1;
    FUN_149575ae7(local_c8);
    pauVar41 = local_1c0;
    if (((ushort)uStack_c0 & 4) == 0) goto LAB_14956d2de;
    auVar46 = local_c8;
    goto LAB_1495713de;
  case 0x20:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 0xc);
LAB_1495713d0:
    auVar46 = (undefined1  [8])*(undefined1 (**) [16])((longlong)pauVar52 + lVar51 * 0x38);
LAB_1495713de:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)local_1c8[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    local_1f8 = (code *)&local_14c;
    local_14c = 0;
    param_3 = (uint *)auVar46;
    pauVar79 = (undefined1 (*) [16])FUN_149576ba8(*(undefined8 *)(lVar51 + 0x38));
    pauVar41 = local_1c0;
    *(undefined1 (*) [8])(lVar51 + 0x58) = auVar46;
    *(undefined2 *)(lVar51 + 2) = 0;
    *(undefined4 *)(lVar51 + 0x28) = 0;
    *(int *)(lVar51 + 0x2c) = local_14c;
    if (local_14c != 0) {
      local_1d0 = pauVar79;
      if (*(int *)((longlong)*pauVar65 + 8) != 0) goto LAB_14956d2de;
      local_1f8 = (code *)0x14bd4063a;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x15dab);
      pauVar79 = (undefined1 (*) [16])&DAT_0000000b;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      goto LAB_14957580f;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    uVar27 = (uint)pauVar79;
    param_1 = local_1c8;
joined_r0x0001495744da:
    pauVar43 = local_1e0;
    pauVar42 = local_1d0;
    if (uVar27 != 0) goto LAB_14957580f;
    break;
  case 0x21:
  case 0x81:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar17;
    _local_c8 = auVar5 << 0x20;
    if ((bVar19 != 0x81) ||
       (*(undefined4 *)(lVar51 + 0x2c) = 0xffffffff, **(char **)(lVar51 + 0x38) != '\0')) {
      local_1b0 = pauVar52;
      uVar27 = FUN_149576b44();
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      *(char *)(lVar51 + 2) = local_c8[0];
      *(undefined1 *)(lVar51 + 3) = 0;
      *(undefined4 *)(lVar51 + 0x28) = 0;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      if (uVar27 != 0) goto LAB_14957580f;
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar52 = local_1b0;
      pauVar42 = local_1d0;
      if (0 < *(int *)((longlong)*pauVar65 + 8) && local_c8._0_4_ != 0) {
        local_1d0 = (undefined1 (*) [16])0x0;
        goto LAB_14956d2de;
      }
    }
    break;
  case 0x22:
    pcVar69 = *(char **)(*(longlong *)
                          (*(longlong *)((longlong)param_1[7] + 8) +
                          (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 0x38);
    uVar27 = FUN_14957a8fb(pcVar69);
    if (uVar27 == 0x10) {
      local_1d0 = (undefined1 (*) [16])0x0;
      goto LAB_14956d2de;
    }
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    pauVar43 = local_1e0;
    if (uVar27 != 0) goto LAB_14957580f;
    uVar27 = FUN_14957c1b3();
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    pauVar43 = local_1e0;
    if (uVar27 != 0) goto LAB_14957580f;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    if ((*pcVar69 != '\0') || (*(char *)(*(longlong *)(pcVar69 + 0x88) + 8) == '\0')) break;
    uVar44 = (ulonglong)*(ushort *)(*(longlong *)(pcVar69 + 0x88) + 0x18);
    if (0 < (longlong)pcVar69[0x54]) {
      lVar51 = 0;
      do {
        param_3 = (uint *)(ulonglong)*(ushort *)(*(longlong *)(pcVar69 + lVar51 * 8 + 0x90) + 0x18);
        uVar44 = uVar44 * (longlong)param_3;
        lVar51 = lVar51 + 1;
      } while (pcVar69[0x54] != lVar51);
    }
    if (uVar44 < 8) {
      if (1 < uVar44) {
        sVar57 = 0x28;
        uVar72 = uVar44;
        do {
          sVar57 = sVar57 + -10;
          uVar44 = uVar72 * 2;
          bVar80 = uVar72 < 4;
          uVar72 = uVar44;
        } while (bVar80);
        goto LAB_149575646;
      }
      sVar57 = 0;
    }
    else {
      sVar57 = 0x28;
      if (0xff < uVar44) {
        sVar57 = 0x28;
        uVar72 = uVar44;
        do {
          sVar57 = sVar57 + 0x28;
          uVar44 = uVar72 >> 4;
          bVar80 = 0xfff < uVar72;
          uVar72 = uVar44;
        } while (bVar80);
      }
      uVar72 = uVar44;
      if (0xf < uVar44) {
        do {
          sVar57 = sVar57 + 10;
          uVar44 = uVar72 >> 1;
          bVar80 = 0x1f < uVar72;
          uVar72 = uVar44;
        } while (bVar80);
      }
LAB_149575646:
      param_3 = (uint *)(ulonglong)((uint)uVar44 & 7);
      sVar57 = sVar57 + (&DAT_14bd41890)[(longlong)param_3] + -10;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar41 = local_1c0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    if (*(int *)((longlong)*pauVar65 + 0xc) <= (int)sVar57) break;
    goto LAB_14956d2de;
  case 0x23:
  case 0x24:
    piVar61 = (int *)((longlong)param_1[0xd] + 0xc);
    *piVar61 = *piVar61 + 1;
  case 0x25:
    pcVar69 = *(char **)(*(longlong *)((longlong)param_1[7] + 8) +
                        (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    pauVar55 = *(undefined1 (**) [16])(pcVar69 + 0x38);
    local_1a0 = pauVar55;
    if (*pcVar69 == '\x01') {
      if (*(char *)((longlong)pauVar55[5] + 8) == '\0') {
        if (*(longlong *)((longlong)pauVar55[3] + 8) != 0) {
          uVar27 = FUN_14957fd11();
          goto LAB_149570b20;
        }
        pcVar69[2] = '\x01';
        local_1d0 = (undefined1 (*) [16])0x0;
        goto LAB_14956d2de;
      }
      local_158 = pcVar69;
      uVar30 = FUN_14957fe8f();
      uVar27 = FUN_14956aed2(pauVar55,uVar30);
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
      if (uVar27 == 0) {
        local_160 = *(longlong *)(*(longlong *)pauVar55[7] + 0x20);
        cVar21 = *(char *)((longlong)pauVar55[5] + 0xc);
        pcVar68 = FUN_149580373;
        if (cVar21 == '\x02') {
          pcVar68 = FUN_14958023f;
        }
        pcVar38 = FUN_14958011d;
        if (cVar21 != '\x01') {
          pcVar38 = pcVar68;
        }
        bVar19 = *(byte *)((longlong)pauVar55[5] + 0xb);
        if (bVar19 == 0) {
LAB_149570ab7:
          local_1d0 = (undefined1 (*) [16])0x0;
LAB_149570ac3:
          pauVar43 = pauVar55 + 6;
          uVar44 = 0;
          local_1d8 = uVar76;
          local_1b4 = uVar73;
          local_1b0 = pauVar52;
          local_1a8 = pauVar65;
          local_168 = pauVar43;
          while (pauVar65 = local_1a8, pauVar52 = local_1d0,
                uVar72 = (ulonglong)*(byte *)((longlong)pauVar55[5] + 0xb), uVar44 < uVar72) {
            iVar26 = *(int *)((longlong)pauVar43 + uVar44 * 0x68 + 0x38);
            pauVar79 = (undefined1 (*) [16])0x0;
            if ((longlong)iVar26 != 0) {
              puVar33 = (undefined8 *)(uVar44 * 0x68 + (longlong)pauVar43);
              local_138 = (undefined1 (*) [16])0x0;
              if (iVar26 < 0x11) {
                local_140 = 0;
                pauVar79 = (undefined1 (*) [16])FUN_149580d2b(puVar33);
LAB_14956cd03:
                pauVar65 = local_138;
                pauVar55 = local_1a0;
                if ((int)pauVar79 != 0) {
LAB_14956cda3:
                  FUN_14956afab(pauVar65);
                  pauVar41 = local_1c0;
                  pauVar55 = local_1a0;
                  param_1 = local_1c8;
                  pauVar43 = local_168;
                  goto LAB_14956caca;
                }
              }
              else {
                lVar51 = 0x10;
                iVar31 = 0;
                do {
                  iVar28 = iVar31;
                  lVar51 = lVar51 * 0x10;
                  iVar31 = iVar28 + -1;
                } while (lVar51 < iVar26);
                local_140 = 0;
                local_138 = (undefined1 (*) [16])FUN_149580c9e(0x10);
                pauVar65 = (undefined1 (*) [16])0x0;
                pauVar79 = (undefined1 (*) [16])&DAT_00000007;
                if (local_138 != (undefined1 (*) [16])0x0) {
                  pauVar79 = pauVar65;
                }
                iVar26 = *(int *)(puVar33 + 7);
                if (iVar26 < 1 || local_138 == (undefined1 (*) [16])0x0) goto LAB_14956cd03;
                iVar28 = -iVar28;
                iVar29 = 0;
                local_178 = local_138;
                do {
                  local_148 = 0;
                  iVar54 = 0x10;
                  if (iVar26 - iVar29 < 0x10) {
                    iVar54 = iVar26 - iVar29;
                  }
                  local_190 = pauVar65;
                  pauVar79 = (undefined1 (*) [16])FUN_149580d2b(puVar33,iVar54);
                  pauVar65 = local_178;
                  if ((int)pauVar79 != 0) goto LAB_14956cda3;
                  pauVar79 = (undefined1 (*) [16])FUN_1495808bd(puVar33,local_148,local_c8);
                  local_170 = CONCAT44(local_170._4_4_,iVar29);
                  pauVar65 = local_178;
                  pauVar41 = local_190;
                  pauVar55 = local_1a0;
                  if (iVar31 == -1) {
                    if ((int)pauVar79 != 0) goto LAB_14956cd81;
                  }
                  else {
                    iVar29 = 1;
                    iVar26 = iVar28;
                    do {
                      iVar29 = iVar29 << 4;
                      iVar26 = iVar26 + -1;
                    } while (iVar26 != 0);
                    iVar26 = iVar28;
                    if ((int)pauVar79 != 0) {
LAB_14956cd81:
                      FUN_14956afed(local_c8);
                      pauVar65 = local_178;
                      uVar76 = local_1d8;
                      uVar73 = local_1b4;
                      goto LAB_14956cda3;
                    }
                    do {
                      uVar73 = (uint)((longlong)
                                      ((ulonglong)(uint)((int)pauVar41 >> 0x1f) << 0x20 |
                                      (ulonglong)pauVar41 & 0xffffffff) / (longlong)iVar29);
                      uVar27 = uVar73 + 0xf;
                      if (-1 < (int)uVar73) {
                        uVar27 = uVar73;
                      }
                      lVar51 = *(longlong *)(pauVar65[1] + 8);
                      lVar75 = (longlong)(int)(uVar73 - (uVar27 & 0xfffffff0)) * 0x50;
                      lVar56 = *(longlong *)(lVar51 + 0x48 + lVar75);
                      if (lVar56 == 0) {
                        lVar56 = FUN_149580c9e(0x10);
                        if (lVar56 == 0) {
                          pauVar79 = (undefined1 (*) [16])&DAT_00000007;
                          goto LAB_14956cd81;
                        }
                        pauVar79 = (undefined1 (*) [16])FUN_1495808bd(puVar33,lVar56);
                        if ((int)pauVar79 != 0) goto LAB_14956cd81;
                        lVar56 = *(longlong *)(lVar51 + lVar75 + 0x48);
                        pauVar41 = local_190;
                        pauVar55 = local_1a0;
                      }
                      pauVar65 = *(undefined1 (**) [16])(lVar56 + 8);
                      iVar29 = iVar29 >> 4;
                      iVar26 = iVar26 + -1;
                    } while (iVar26 != 0);
                  }
                  *(undefined1 (*) [8])
                   (*(longlong *)(pauVar65[1] + 8) + 0x48 +
                   (ulonglong)(((uint)pauVar41 & 0xf) * 0x50)) = local_c8;
                  iVar29 = (int)local_170 + 0x10;
                  iVar26 = *(int *)(puVar33 + 7);
                  pauVar65 = (undefined1 (*) [16])(ulonglong)((uint)pauVar41 + 1);
                  uVar76 = local_1d8;
                  pauVar43 = local_168;
                  uVar73 = local_1b4;
                } while (iVar29 < iVar26);
              }
              if (local_1d0 == (undefined1 (*) [16])0x0) {
                pauVar79 = (undefined1 (*) [16])0x0;
                local_1d0 = local_138;
                pauVar41 = local_1c0;
                param_1 = local_1c8;
              }
              else {
                uVar27 = FUN_1495808bd(puVar33,local_138);
                pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
                pauVar41 = local_1c0;
                pauVar55 = local_1a0;
                param_1 = local_1c8;
              }
            }
LAB_14956caca:
            uVar44 = uVar44 + 1;
            pauVar65 = local_1a8;
            if ((int)pauVar79 != 0) goto LAB_149572e42;
          }
          if (*(char *)((longlong)pauVar55[5] + 9) == '\0') {
            param_3 = (uint *)0x0;
            pauVar79 = (undefined1 (*) [16])FUN_149580b1b();
            *(undefined1 (**) [16])((longlong)pauVar55[1] + 8) = pauVar52;
LAB_149572eb6:
            local_1d0 = (undefined1 (*) [16])0x0;
            if ((int)pauVar79 == 0) {
              local_158[2] = '\0';
              pauVar52 = local_1b0;
              pauVar42 = local_1d0;
              break;
            }
            pauVar52 = (undefined1 (*) [16])0x0;
          }
          else {
            if (*(longlong *)((longlong)pauVar43 + uVar72 * 0x68 + -0x50) == 0) {
              lVar51 = FUN_149577182(*(undefined8 *)
                                      (*(longlong *)((longlong)pauVar43 + uVar72 * 0x68 + -0x58) +
                                      0x28));
              *(longlong *)((longlong)pauVar43 + uVar72 * 0x68 + -0x50) = lVar51;
              if (lVar51 == 0) {
                pauVar79 = (undefined1 (*) [16])&DAT_00000007;
                pauVar52 = local_1d0;
                pauVar65 = local_1a8;
                goto LAB_149572e56;
              }
              *(undefined2 *)(lVar51 + 0x10) =
                   *(undefined2 *)
                    (*(longlong *)(*(longlong *)((longlong)pauVar43 + uVar72 * 0x68 + -0x58) + 0x28)
                    + 6);
              *(undefined1 *)(*(longlong *)((longlong)pauVar43 + uVar72 * 0x68 + -0x50) + 0x13) = 0;
            }
            if (local_160 == 0) {
              pauVar65 = (undefined1 (*) [16])FUN_145e3bd67(0x50);
            }
            else {
              pauVar65 = (undefined1 (*) [16])FUN_14955d750(local_160,0x50);
            }
            pauVar55 = local_1a0;
            pauVar52 = local_1d0;
            if (pauVar65 == (undefined1 (*) [16])0x0) {
              *(undefined8 *)local_1a0[1] = 0;
              pauVar79 = (undefined1 (*) [16])&DAT_00000007;
              pauVar65 = local_1a8;
              param_1 = local_1c8;
            }
            else {
              pauVar65[4] = (undefined1  [16])0x0;
              pauVar65[3] = (undefined1  [16])0x0;
              pauVar65[2] = (undefined1  [16])0x0;
              pauVar65[1] = (undefined1  [16])0x0;
              *pauVar65 = (undefined1  [16])0x0;
              *(undefined1 (**) [16])local_1a0[1] = pauVar65;
              param_3 = (uint *)(pauVar65[4] + 8);
              pauVar79 = (undefined1 (*) [16])
                         FUN_1495808bd((longlong)pauVar43 + uVar72 * 0x68 + -0x68);
              if ((int)pauVar79 == 0) {
                plVar39 = *(longlong **)*(undefined1 (*) [16])(pauVar65[4] + 8);
                *(undefined4 *)(plVar39 + 4) = 1;
                *(longlong *)(*plVar39 + 0x60) =
                     *(longlong *)(*plVar39 + 0x60) - (longlong)(int)plVar39[3];
                bVar19 = *(byte *)((longlong)pauVar55[5] + 0xb);
                uVar44 = (ulonglong)bVar19;
                if (1 < bVar19) {
                  lVar51 = 0x48;
                  lVar56 = 0;
                  do {
                    plVar39 = *(longlong **)(*(longlong *)(pauVar52[1] + 8) + lVar51);
                    if (plVar39 != (longlong *)0x0) {
                      *(undefined4 *)(plVar39 + 4) = 1;
                      *(longlong *)(*plVar39 + 0x60) =
                           *(longlong *)(*plVar39 + 0x60) - (longlong)(int)plVar39[3];
                      uVar44 = (ulonglong)*(byte *)((longlong)pauVar55[5] + 0xb);
                    }
                    lVar56 = lVar56 + 1;
                    param_3 = (uint *)(uVar44 - 1);
                    lVar51 = lVar51 + 0x50;
                  } while (lVar56 < (longlong)param_3);
                }
                uVar44 = 0xffffffffffffffff;
                lVar51 = 0;
                while (uVar44 = uVar44 + 1, uVar44 < *(byte *)((longlong)pauVar55[5] + 0xb)) {
                  pauVar79 = (undefined1 (*) [16])
                             FUN_149580960(lVar51 + *(longlong *)(local_1d0[1] + 8),1);
                  lVar51 = lVar51 + 0x50;
                  pauVar55 = local_1a0;
                  if ((int)pauVar79 != 0) {
                    pauVar52 = (undefined1 (*) [16])0x0;
                    pauVar65 = local_1a8;
                    param_1 = local_1c8;
                    goto LAB_149572e56;
                  }
                }
                pauVar79 = (undefined1 (*) [16])FUN_149580a1c(pauVar65);
                pauVar65 = local_1a8;
                param_1 = local_1c8;
                goto LAB_149572eb6;
              }
              pauVar52 = (undefined1 (*) [16])0x0;
              pauVar65 = local_1a8;
              param_1 = local_1c8;
            }
          }
        }
        else {
          lVar51 = (ulonglong)(uint)bVar19 - 1;
          auVar86._8_4_ = (int)lVar51;
          auVar86._0_8_ = lVar51;
          auVar86._12_4_ = (int)((ulonglong)lVar51 >> 0x20);
          in_XMM1 = pmovsxbq(in_XMM1,0x100);
          lVar51 = 0;
          do {
            auVar89 = auVar86 ^ _DAT_149931e80;
            auVar87 = _DAT_149931e80 ^ in_XMM1;
            if ((bool)(~(auVar89._0_8_ < auVar87._0_8_) & 1)) {
              *(code **)((longlong)pauVar55[10] + lVar51) = pcVar38;
            }
            if (auVar87._8_8_ <= auVar89._8_8_) {
              *(code **)((longlong)pauVar55[0x10] + lVar51 + 8) = pcVar38;
            }
            lVar56 = in_XMM1._8_8_;
            in_XMM1._0_8_ = (double)(in_XMM1._0_8_ + 2);
            in_XMM1._8_8_ = lVar56 + 2;
            lVar51 = lVar51 + 0xd0;
          } while ((ulonglong)(bVar19 + 1 >> 1) * 0xd0 - lVar51 != 0);
          if (bVar19 == 1) goto LAB_149570ab7;
          local_1d0 = (undefined1 (*) [16])FUN_149580c9e();
          pauVar55 = local_1a0;
          if (local_1d0 != (undefined1 (*) [16])0x0) goto LAB_149570ac3;
          pauVar79 = (undefined1 (*) [16])&DAT_00000007;
          local_1d0 = (undefined1 (*) [16])0x0;
LAB_149572e42:
          FUN_14956afab(local_1d0);
          pauVar52 = (undefined1 (*) [16])0x0;
        }
LAB_149572e56:
        pauVar43 = local_1e0;
        FUN_14956afab(pauVar52);
      }
    }
    else {
      uVar27 = FUN_14957a8fb();
      if (uVar27 == 0x10) {
        pcVar69[0x28] = '\0';
        pcVar69[0x29] = '\0';
        pcVar69[0x2a] = '\0';
        pcVar69[0x2b] = '\0';
        pcVar69[2] = '\x01';
        pcVar69[3] = '\0';
        local_1d0 = (undefined1 (*) [16])0x0;
        goto LAB_14956d2de;
      }
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      if (uVar27 == 0) {
        uVar27 = FUN_14957c1b3();
        pcVar69[3] = '\0';
        pcVar69[0x28] = '\0';
        pcVar69[0x29] = '\0';
        pcVar69[0x2a] = '\0';
        pcVar69[0x2b] = '\0';
LAB_149570b20:
        if (uVar27 == 0) {
          pcVar69[2] = '\0';
          goto LAB_149571dd7;
        }
        goto LAB_149571f04;
      }
      pcVar69[3] = '\0';
      pcVar69[0x28] = '\0';
      pcVar69[0x29] = '\0';
      pcVar69[0x2a] = '\0';
      pcVar69[0x2b] = '\0';
      pauVar43 = local_1e0;
    }
    goto LAB_14957580f;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    local_138 = *(undefined1 (**) [16])(lVar51 + 0x40);
    local_128 = *(undefined2 *)pauVar65[1];
    local_126 = -(bVar19 < 0x28);
    local_130 = (undefined8 *)
                ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    lVar51 = *(longlong *)(lVar51 + 0x38);
    FUN_149567d86(lVar51);
    uVar27 = *(uint *)(lVar51 + 0x40);
    if ((int)uVar27 < 1) {
      local_1f8 = (code *)0x14bd4063a;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x14157);
      pauVar79 = (undefined1 (*) [16])&DAT_0000000b;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      goto LAB_14957580f;
    }
    uStack_c0._0_2_ = 0;
    local_a0 = pauVar41;
    auVar9._12_4_ = 0;
    auVar9._0_12_ = stack0xffffffffffffff5c;
    _auStack_a8 = auVar9 << 0x20;
    uVar48 = *(int *)(*(longlong *)(lVar51 + 0x88) + 0x58) - (int)*(undefined8 *)(lVar51 + 0x38);
    uVar32 = 0;
    if (0 < (int)uVar48) {
      uVar32 = uVar48;
    }
    if ((int)(uint)*(ushort *)(lVar51 + 0x44) <= (int)uVar48) {
      uVar32 = (uint)*(ushort *)(lVar51 + 0x44);
    }
    if (uVar32 < uVar27) {
      uVar27 = FUN_14957a77f(lVar51,0,uVar27);
      if (uVar27 != 0) {
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        goto LAB_14957580f;
      }
    }
    else {
      auStack_b8._0_8_ = *(undefined8 *)(lVar51 + 0x38);
      uStack_c0._0_2_ = 0x1010;
      uStack_c0._4_4_ = uVar27;
    }
    param_3 = (uint *)&local_138;
    iVar26 = FUN_14957b86a();
    if (((uStack_c0._1_1_ & 0x24) != 0) || (auStack_a8._0_4_ != 0)) {
      FUN_14956b588();
    }
    iVar31 = iVar26 + 1;
    if (((*pauVar65)[0] & 1) == 0) {
      iVar31 = -iVar26;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    if (0 < iVar31) goto LAB_14956d2de;
    break;
  case 0x2a:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    puVar33 = (undefined8 *)((longlong)pauVar52 + lVar51);
    uVar23 = *(ushort *)((longlong)pauVar52 + lVar51 + 8);
    if ((uVar23 & 0x10) != 0) {
      local_1b0 = pauVar52;
      iVar26 = FUN_14957940b(puVar33[2]);
      pauVar52 = local_1b0;
      if (iVar26 != 0) {
        lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38;
        puVar33 = (undefined8 *)((longlong)local_1b0 + lVar51);
        if ((*(byte *)((longlong)local_1b0 + lVar51 + 9) & 0x24) == 0) {
          *puVar33 = local_c8;
          *(undefined2 *)(puVar33 + 1) = 4;
        }
        else {
          FUN_14956c854();
          pauVar52 = local_1b0;
        }
        goto LAB_14956d64d;
      }
      uVar23 = *(ushort *)(puVar33 + 1);
    }
    if ((uVar23 & 0x2400) == 0) {
      *(undefined2 *)(puVar33 + 1) = 1;
    }
    else {
      FUN_14956b5ca(puVar33);
    }
LAB_14956d635:
    pauVar65 = (undefined1 (*) [16])
               ((longlong)local_198 + (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x18 + -0x18);
    goto LAB_14956d64d;
  case 0x2b:
  case 0x2c:
    iVar26 = FUN_149575ea4((undefined8 *)
                           ((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52)
                           ,2);
    iVar31 = FUN_149575ea4((undefined8 *)
                           ((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52)
                           ,2);
    puVar49 = &DAT_14bd415a1;
    if ((*pauVar65)[0] == ',') {
      puVar49 = &DAT_14bd41598;
    }
    puVar59 = (ulonglong *)
              ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if ((ulonglong)(byte)puVar49[iVar26 * 3 + iVar31] == 2) {
      uVar23 = ((ushort)puVar59[1] & 0x3e40) + 1;
    }
    else {
      *puVar59 = (ulonglong)(byte)puVar49[iVar26 * 3 + iVar31];
      uVar23 = (ushort)puVar59[1] & 0x3e40 | 4;
    }
    *(ushort *)(puVar59 + 1) = uVar23;
    pauVar42 = local_1d0;
    break;
  case 0x2d:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    iVar26 = *(int *)((longlong)*pauVar65 + 0xc);
    iVar31 = *(int *)pauVar65[1];
    if (((*(byte *)((longlong)pauVar52 + lVar51 + 8) & 0x10) == 0) &&
       (iVar28 = FUN_1495792e2((undefined8 *)((longlong)pauVar52 + lVar51)), pauVar41 = local_1c0,
       pauVar43 = local_1e0, param_1 = local_1c8, iVar28 != 0)) goto LAB_14957030b;
    if (iVar31 != 0) {
      param_3 = *(uint **)((longlong)iVar26 * 0x38 + (longlong)pauVar52);
      iVar26 = FUN_1495794b8();
      pauVar41 = local_1c0;
      if (iVar26 != 0) goto LAB_14956d2de;
      param_1 = local_1c8;
      pauVar42 = local_1d0;
      if (iVar31 < 0) break;
    }
    FUN_1495793c0();
    pauVar41 = local_1c0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    break;
  case 0x2e:
    puVar33 = *(undefined8 **)pauVar65[1];
    if ((*(short *)((longlong)*pauVar65 + 2) != 0) &&
       (lVar51 = *(longlong *)param_1[0x10], lVar51 != 0)) {
      do {
        if (*(longlong *)(lVar51 + 0x38) == puVar33[4]) goto switchD_14956c99d_caseD_55;
        lVar51 = *(longlong *)(lVar51 + 8);
      } while (lVar51 != 0);
    }
    if (*(int *)((longlong)pauVar41[10] + 4) <= *(int *)param_1[0x11]) {
      pcVar69 = "too many levels of trigger recursion";
      goto LAB_149575072;
    }
    puVar64 = (undefined8 *)
              ((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38);
    if ((*(byte *)(puVar64 + 1) & 0x10) == 0) {
      iVar31 = *(int *)(puVar33 + 2);
      iVar29 = iVar31 + *(int *)((longlong)puVar33 + 0xc) + (uint)(iVar31 == 0);
      iVar26 = *(int *)(puVar33 + 1) + 7;
      iVar28 = *(int *)(puVar33 + 1) + 0xe;
      if (-1 < iVar26) {
        iVar28 = iVar26;
      }
      iVar26 = iVar29 * 0x38 + (iVar28 >> 3) + iVar31 * 8 + 0x70;
      if (pauVar41 == (undefined1 (*) [16])0x0) {
        local_1d8 = uVar76;
        local_1a8 = pauVar65;
        puVar78 = (undefined8 *)FUN_145e3bd67((longlong)iVar26);
      }
      else {
        local_1d8 = uVar76;
        local_1a8 = pauVar65;
        puVar78 = (undefined8 *)FUN_14955d750(pauVar41);
      }
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      if (puVar78 == (undefined8 *)0x0) goto LAB_14957030b;
      memset(puVar78,0,(longlong)iVar26);
      if (((*(byte *)((longlong)puVar64 + 9) & 0x24) != 0) || (*(int *)(puVar64 + 4) != 0)) {
        FUN_14956b588(puVar64);
      }
      *(undefined2 *)(puVar64 + 1) = 0x410;
      puVar64[2] = puVar78;
      *(int *)((longlong)puVar64 + 0xc) = iVar26;
      puVar64[6] = &LAB_14957963c;
      *puVar78 = local_1c8;
      *(int *)(puVar78 + 0xc) = iVar29;
      *(undefined4 *)((longlong)puVar78 + 100) = *(undefined4 *)(puVar33 + 2);
      *(int *)((longlong)puVar78 + 0x54) =
           (int)((ulonglong)((longlong)local_1a8 - (longlong)local_198) >> 3) * -0x55555555;
      puVar78[4] = *(undefined8 *)((longlong)local_1c8[6] + 8);
      *(undefined4 *)((longlong)puVar78 + 0x5c) = *(undefined4 *)((longlong)local_1c8[2] + 8);
      puVar78[5] = *(undefined8 *)((longlong)local_1c8[7] + 8);
      *(undefined4 *)(puVar78 + 10) = *(undefined4 *)((longlong)local_1c8[2] + 0xc);
      puVar78[2] = *(undefined8 *)((longlong)local_1c8[8] + 8);
      *(undefined4 *)(puVar78 + 0xb) = *(undefined4 *)local_1c8[9];
      puVar78[7] = puVar33[4];
      uVar76 = local_1d8;
      param_1 = local_1c8;
      if (iVar29 != 0) {
        lVar51 = 0;
        do {
          *(undefined2 *)((longlong)puVar78 + lVar51 + 0x78) = 0x80;
          *(undefined1 (**) [16])((longlong)puVar78 + lVar51 + 0x98) = pauVar41;
          lVar51 = lVar51 + 0x38;
        } while ((longlong)iVar29 * 0x38 - lVar51 != 0);
      }
    }
    else {
      puVar78 = (undefined8 *)puVar64[2];
    }
    *(int *)param_1[0x11] = *(int *)param_1[0x11] + 1;
    puVar78[1] = *(undefined8 *)param_1[0x10];
    puVar78[8] = *(undefined8 *)((longlong)pauVar41[3] + 8);
    *(undefined4 *)(puVar78 + 0xd) = *(undefined4 *)((longlong)param_1[3] + 0xc);
    *(undefined4 *)((longlong)puVar78 + 0x6c) = *(undefined4 *)(*(longlong *)*param_1 + 0x74);
    puVar78[9] = *(undefined8 *)param_1[0x12];
    *(undefined8 *)param_1[0x12] = 0;
    *(undefined4 *)((longlong)param_1[3] + 0xc) = 0;
    *(undefined8 **)param_1[0x10] = puVar78;
    *(undefined1 (**) [16])((longlong)param_1[6] + 8) = (undefined1 (*) [16])(puVar78 + 0xe);
    iVar26 = *(int *)(puVar78 + 0xc);
    *(int *)((longlong)param_1[2] + 8) = iVar26;
    *(uint *)((longlong)param_1[2] + 0xc) = (uint)*(ushort *)((longlong)puVar78 + 100);
    puVar64 = puVar78 + (longlong)iVar26 * 7 + 0xe;
    *(undefined8 **)((longlong)param_1[7] + 8) = puVar64;
    iVar31 = *(int *)(puVar33 + 2);
    puVar78[6] = puVar64 + iVar31;
    iVar26 = *(int *)(puVar33 + 1) + 7;
    iVar28 = *(int *)(puVar33 + 1) + 0xe;
    if (-1 < iVar26) {
      iVar28 = iVar26;
    }
    param_3 = (uint *)(longlong)(iVar28 >> 3);
    memset(puVar64 + iVar31,0,(size_t)param_3);
    local_198 = (undefined1 (*) [16])*puVar33;
    *(undefined1 (**) [16])((longlong)param_1[8] + 8) = local_198;
    *(undefined4 *)param_1[9] = *(undefined4 *)(puVar33 + 1);
    pauVar65 = (undefined1 (*) [16])((longlong)local_198[-2] + 8);
    pauVar52 = (undefined1 (*) [16])(puVar78 + 0xe);
    pauVar43 = local_1e0;
    goto LAB_14956d64d;
  case 0x2f:
    if (*(int *)((longlong)*pauVar65 + 4) == 0) {
      lVar51 = *(longlong *)param_1[5];
    }
    else {
      lVar51 = *(longlong *)((longlong)pauVar41[0x2c] + 8);
    }
    if (lVar51 == 0) {
      lVar56 = *(longlong *)pauVar41[0x2d];
      goto joined_r0x00014956e530;
    }
    break;
  case 0x30:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    if (0 < *(longlong *)((longlong)pauVar52 + lVar56)) {
      lVar51 = *(longlong *)((longlong)pauVar52 + lVar56) -
               (longlong)*(int *)((longlong)*pauVar65 + 0xc);
LAB_14956de07:
      *(longlong *)((longlong)*pauVar52 + lVar56) = lVar51;
      goto LAB_14956d2de;
    }
    break;
  case 0x31:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    lVar51 = *(longlong *)((longlong)pauVar52 + lVar56);
    if (lVar51 != 0) {
      if (0 < lVar51) {
        lVar51 = lVar51 + -1;
        goto LAB_14956de07;
      }
      goto LAB_14956d2de;
    }
    break;
  case 0x32:
    param_1 = local_1c8;
    if ((*(byte *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + 8) & 1)
        != 0) goto LAB_14956d2de;
    break;
  case 0x33:
    param_1 = local_1c8;
    if ((*(byte *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + 8) & 1)
        == 0) goto LAB_14956d2de;
    break;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    lVar51 = (longlong)iVar26 * 0x38;
    pauVar41 = (undefined1 (*) [16])((longlong)pauVar52 + lVar51);
    iVar31 = *(int *)((longlong)*pauVar65 + 0xc);
    lVar56 = (longlong)iVar31 * 0x38;
    plVar39 = (longlong *)((longlong)pauVar52 + lVar56);
    uVar23 = *(ushort *)((longlong)pauVar52 + lVar51 + 8);
    uVar24 = *(ushort *)((longlong)pauVar52 + lVar56 + 8);
    uVar27 = (uint)uVar24;
    uVar22 = uVar24 | uVar23;
    uVar25 = *(ushort *)((longlong)*pauVar65 + 2);
    if ((uVar22 & 1) == 0) {
      if ((uVar25 & 0x47) < 0x43) {
        local_1d8 = uVar76;
        if ((uVar25 & 0x47) == 0x42) {
          uVar32 = (uVar23 & 2) >> 1;
          if ((uVar23 & 0x2c) != 0 && (char)uVar32 == '\0') {
            local_1a0 = pauVar41;
            FUN_14956b936(pauVar41,local_1e1,CONCAT71((uint7)(byte)(uVar22 >> 8),1));
            uVar48 = *(ushort *)((longlong)*local_1a0 + 8) & 0x3e40;
            uVar32 = uVar48 + (uVar23 & 0xffffc1bd);
            uVar27 = (uint)uVar24;
            if (iVar26 == iVar31) {
              uVar27 = uVar48 + (uVar23 & 0xffffc1bd) + 2;
            }
            uVar24 = (ushort)uVar27;
            uVar23 = (ushort)uVar32;
            pauVar41 = local_1a0;
          }
          if ((uVar27 & 0x2c) != 0 && (char)((uVar27 & 2) >> 1) == '\0') {
            FUN_14956b936(plVar39,CONCAT31((int3)(uVar32 >> 8),local_1e1),1);
            uVar24 = uVar24 & 0xc1bd | *(ushort *)(plVar39 + 1) & 0x3e40;
          }
        }
LAB_149570aed:
        iVar26 = FUN_149575d1d(plVar39,pauVar41,*(undefined8 *)pauVar65[1]);
LAB_14956dd75:
        if (iVar26 < 0) {
          uVar44 = (ulonglong)(byte)(*pauVar65)[0];
          puVar49 = &DAT_14bd41586;
        }
        else {
          uVar44 = (ulonglong)(byte)(*pauVar65)[0];
          if (iVar26 != 0) goto LAB_14956dcaa;
          iVar26 = 0;
          puVar49 = &DAT_14bd4158c;
        }
      }
      else {
        uVar25 = uVar24;
        local_1d8 = uVar76;
        if ((uVar22 & 2) != 0) {
          if ((uVar23 & 0x2e) == 2) {
            FUN_149559f51(pauVar41,0);
            uVar25 = *(ushort *)(plVar39 + 1);
          }
          uVar24 = uVar25;
          if ((uVar25 & 0x2e) == 2) {
            FUN_149559f51(plVar39,0);
            uVar24 = *(ushort *)(plVar39 + 1);
          }
        }
        uVar22 = uVar24 & *(ushort *)((longlong)*pauVar41 + 8);
        uVar24 = uVar25;
        if ((uVar22 & 4) == 0) goto LAB_149570aed;
        if (*plVar39 <= *(longlong *)*pauVar41) {
          iVar26 = -(uint)(*plVar39 < *(longlong *)*pauVar41);
          goto LAB_14956dd75;
        }
        uVar44 = (ulonglong)(byte)(*pauVar65)[0];
        iVar26 = 1;
LAB_14956dcaa:
        puVar49 = &DAT_14bd41592;
      }
    }
    else {
      if (-1 < (char)uVar25) {
        param_3 = &switchD_14956c99d::switchdataD_14bd4a2cc;
        if ((uVar25 & 0x20) == 0) {
          pauVar41 = local_1c0;
          param_1 = local_1c8;
          local_1d8 = uVar76;
          if ((uVar25 & 0x10) != 0) goto LAB_14956d2de;
        }
        else {
          lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
          *(ushort *)((longlong)pauVar52 + lVar51 + 8) =
               (*(ushort *)((longlong)pauVar52 + lVar51 + 8) & 0x3e40) + 1;
          local_188 = CONCAT44(local_188._4_4_,1);
          pauVar41 = local_1c0;
          param_1 = local_1c8;
          local_1d8 = uVar76;
        }
        break;
      }
      if (((uVar24 >> 8 & 1) == 0) && ((uVar23 & uVar24 & 1) != 0)) {
        iVar26 = 0;
        puVar49 = &DAT_14bd4158c;
        local_1d8 = uVar76;
      }
      else {
        iVar26 = 1;
        local_1d8 = uVar76;
        if ((uVar24 & 1) == 0) goto LAB_14956dcaa;
        iVar26 = -1;
        puVar49 = &DAT_14bd41586;
      }
    }
    bVar19 = puVar49[uVar44 - 0x34];
    *(ushort *)(plVar39 + 1) = uVar24;
    *(ushort *)((longlong)*pauVar41 + 8) = uVar23;
    uVar23 = *(ushort *)((longlong)*pauVar65 + 2);
    param_3 = (uint *)(ulonglong)uVar23;
    uVar76 = local_1d8;
    param_1 = local_1c8;
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    if ((uVar23 & 0x20) == 0) {
      if ((ulonglong)bVar19 != 0) goto LAB_14956d2de;
    }
    else {
      if (((uVar23 & 8) == 0) ||
         (bVar80 = (*pauVar65)[0] == '5',
         param_3 = (uint *)(ulonglong)CONCAT11((char)(uVar23 >> 8),bVar80), (bool)bVar19 != bVar80))
      {
        puVar59 = (ulonglong *)
                  ((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52);
        uVar27 = (ushort)puVar59[1] & 0x3e40 | 4;
        param_3 = (uint *)(ulonglong)uVar27;
        *(short *)(puVar59 + 1) = (short)uVar27;
        *puVar59 = (ulonglong)bVar19;
      }
      local_188 = CONCAT44(local_188._4_4_,iVar26);
    }
    break;
  case 0x3a:
    if ((int)local_188 != 0) goto LAB_14956d2de;
LAB_149570866:
    local_188 = (ulonglong)local_188._4_4_ << 0x20;
    break;
  case 0x3b:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    lVar56 = *(longlong *)((longlong)pauVar52 + lVar51);
    if (lVar56 != -0x8000000000000000) {
      lVar56 = lVar56 + -1;
      *(longlong *)(lVar51 + (longlong)pauVar52) = lVar56;
      goto joined_r0x00014956e530;
    }
    break;
  case 0x3c:
    lVar51 = *(longlong *)
              (*(longlong *)pauVar41[2] + 8 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20);
    lVar56 = *(longlong *)(lVar51 + 8);
    pcVar69 = (char *)param_3;
    if ((*(char *)(lVar51 + 0x11) != '\0') &&
       (*(int *)(lVar51 + 0x14) = *(int *)(lVar51 + 0x14) + 1, *(char *)(lVar51 + 0x12) == '\0')) {
      FUN_14956624a();
      pcVar69 = (char *)param_3;
    }
    local_1d0 = (undefined1 (*) [16])&DAT_00000065;
    if (*(char *)(lVar56 + 0x21) != '\0') {
      uVar27 = *(uint *)(lVar56 + 0x3c);
      uVar32 = *(uint *)(*(longlong *)(*(longlong *)(lVar56 + 0x18) + 0x50) + 0x24);
      local_1a0 = (undefined1 (*) [16])CONCAT44(local_1a0._4_4_,uVar32);
      pcVar69 = (char *)(ulonglong)
                        ((uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18);
      uVar32 = FUN_14956781b();
      if (uVar27 < uVar32) {
        local_1f8 = (code *)0x14bd4063a;
        pcVar69 = "database corruption";
        local_1d0 = (undefined1 (*) [16])&DAT_0000000b;
        FUN_14955599e();
      }
      else if ((int)local_1a0 != 0) {
        if (*(longlong *)(lVar56 + 0x10) != 0) {
          local_1a0 = (undefined1 (*) [16])CONCAT44(local_1a0._4_4_,uVar32);
          pcVar69 = (char *)0x0;
          local_1d0 = (undefined1 (*) [16])FUN_149567c17();
          if ((int)local_1d0 != 0) goto LAB_14956e25e;
          for (lVar75 = *(longlong *)(lVar56 + 0x10); lVar75 != 0;
              lVar75 = *(longlong *)(lVar75 + 0x28)) {
            *(byte *)(lVar75 + 1) = *(byte *)(lVar75 + 1) & 0xfb;
          }
        }
        pcVar69 = (char *)(ulonglong)uVar27;
        local_1d0 = (undefined1 (*) [16])FUN_14956791f();
        if ((int)local_1d0 == 0) {
          local_1d0 = (undefined1 (*) [16])
                      FUN_1495580c6(*(undefined8 *)(*(longlong *)(lVar56 + 0x18) + 0x70));
          uVar27 = *(uint *)(lVar56 + 0x3c);
          *(uint *)(*(longlong *)(*(longlong *)(lVar56 + 0x18) + 0x50) + 0x1c) =
               uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
        }
      }
    }
LAB_14956e25e:
    param_3 = (uint *)pcVar69;
    if (*(char *)(lVar51 + 0x11) != '\0') {
      piVar61 = (int *)(lVar51 + 0x14);
      *piVar61 = *piVar61 + -1;
      if (*piVar61 == 0) {
        FUN_1495662d2();
        param_3 = (uint *)pcVar69;
      }
    }
    uVar27 = (uint)local_1d0;
    if (uVar27 == 0x65) {
      local_1d0 = (undefined1 (*) [16])0x0;
      goto LAB_14956d2de;
    }
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    if (uVar27 == 0) break;
    goto LAB_14956fcca;
  case 0x3d:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    if (*(char *)(lVar51 + 2) == '\0') {
      lVar51 = *(longlong *)**(undefined8 **)(lVar51 + 0x38);
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      uVar27 = (**(code **)(lVar51 + 0x48))();
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      FUN_14956b29d(param_1);
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      if (uVar27 == 0) {
        iVar26 = (**(code **)(lVar51 + 0x50))();
        local_1d0 = (undefined1 (*) [16])0x0;
        uVar76 = local_1d8;
        pauVar41 = local_1c0;
        pauVar52 = local_1b0;
        pauVar43 = local_1e0;
        if (iVar26 == 0) goto LAB_14956d635;
        goto LAB_14956d64d;
      }
      goto LAB_14957580f;
    }
    break;
  case 0x3e:
  case 0xaa:
    if ((((*(byte *)((longlong)pauVar41[6] + 8) & 0x41) != 0) &&
        ((*(byte *)((longlong)param_1[0xc] + 8) & 0x10) == 0)) &&
       ((lVar51 = *(longlong *)pauVar65[1], lVar51 != 0 ||
        (lVar51 = *(longlong *)param_1[0xf], lVar51 != 0)))) {
      if ((*(byte *)((longlong)pauVar41[6] + 8) & 0x40) == 0) {
        param_3 = (uint *)param_1;
        if (*(int *)((longlong)pauVar41[0xd] + 4) < 2) {
          (**(code **)((longlong)pauVar41[0xe] + 8))();
        }
        else {
          lVar51 = FUN_14955a402(pauVar41,"-- %s",lVar51);
          (**(code **)((longlong)pauVar41[0xe] + 8))();
          if (lVar51 != 0) {
            FUN_14955d65a();
          }
        }
      }
      else {
        local_1a0 = *(undefined1 (**) [16])((longlong)pauVar41[0xe] + 8);
        local_1b0 = pauVar52;
        FUN_14955998f(param_1,lVar51);
        (*(code *)local_1a0)(*(undefined8 *)pauVar41[0xf]);
        pauVar52 = local_1b0;
        FUN_145e3b961();
      }
    }
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    if (DAT_14c765e94 <= iVar26) {
      pauVar42 = local_1d0;
      if ((*pauVar65)[0] == -0x56) break;
      iVar26 = *(int *)param_1[9];
      if (1 < iVar26) {
        lVar51 = 1;
        lVar56 = 0x1c;
        do {
          if (*(char *)(*(longlong *)((longlong)param_1[8] + 8) + -4 + lVar56) == '\x11') {
            *(undefined4 *)(*(longlong *)((longlong)param_1[8] + 8) + lVar56) = 0;
            iVar26 = *(int *)param_1[9];
          }
          lVar51 = lVar51 + 1;
          param_3 = (uint *)(longlong)iVar26;
          lVar56 = lVar56 + 0x18;
        } while (lVar51 < (longlong)param_3);
      }
      *(undefined4 *)((longlong)*pauVar65 + 4) = 0;
      iVar26 = 0;
    }
    *(int *)((longlong)*pauVar65 + 4) = iVar26 + 1;
    piVar61 = (int *)((longlong)param_1[0xe] + 0xc);
    *piVar61 = *piVar61 + 1;
LAB_14956d2de:
    pauVar65 = (undefined1 (*) [16])
               ((longlong)local_198 + (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x18 + -0x18);
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    break;
  case 0x3f:
  case 0x40:
    puVar33 = *(undefined8 **)pauVar65[1];
    piVar61 = (int *)((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if ((int *)*puVar33 != piVar61) {
      puVar33[3] = param_1;
      *puVar33 = piVar61;
      uVar44 = (ulonglong)*(byte *)((longlong)puVar33 + 0x29);
      if (uVar44 != 0) {
        do {
          puVar33[uVar44 + 5] =
               (undefined8 *)
               (((longlong)*(int *)((longlong)*pauVar65 + 8) + (uVar44 - 1)) * 0x38 +
               (longlong)pauVar52);
          bVar80 = 1 < uVar44;
          uVar44 = uVar44 - 1;
        } while (bVar80);
      }
    }
    *(ushort *)(piVar61 + 2) = (*(ushort *)(piVar61 + 2) & 0x3e40) + 1;
    param_3 = (uint *)(puVar33 + 6);
    local_1d8 = uVar76;
    (**(code **)(puVar33[1] + 0x18))(puVar33);
    if (*(int *)((longlong)puVar33 + 0x24) == 0) {
      pauVar42 = (undefined1 (*) [16])((ulonglong)local_1d0 & 0xffffffff);
    }
    else {
      local_1b0 = pauVar52;
      if (0 < *(int *)((longlong)puVar33 + 0x24)) {
        param_3 = (uint *)FUN_149558f28(piVar61);
        FUN_14956b132(param_1,&DAT_149dfbe46);
        local_1d0 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)puVar33 + 0x24);
      }
      param_1 = param_1 + 0x12;
      piVar37 = *(int **)*param_1;
      if (piVar37 != (int *)0x0) {
        uVar27 = *(uint *)((longlong)*pauVar65 + 4);
        iVar26 = *(int *)(puVar33 + 4);
        do {
          if ((iVar26 < 0) ||
             (((*piVar37 == iVar26 && (uVar32 = piVar37[1], -1 < (int)uVar32)) &&
              ((0x1f < uVar32 || ((uVar27 >> (uVar32 & 0x1f) & 1) == 0)))))) {
            if (*(code **)(piVar37 + 4) != (code *)0x0) {
              (**(code **)(piVar37 + 4))(*(undefined8 *)(piVar37 + 2));
            }
            *(undefined8 *)*param_1 = *(undefined8 *)(piVar37 + 6);
            FUN_14955d65a(local_1c0,piVar37);
          }
          else {
            param_1 = (undefined1 (*) [16])(piVar37 + 6);
          }
          piVar37 = *(int **)*param_1;
        } while (piVar37 != (int *)0x0);
      }
      *(undefined4 *)((longlong)puVar33 + 0x24) = 0;
      pauVar42 = (undefined1 (*) [16])0x0;
      pauVar52 = local_1b0;
      if ((int)local_1d0 != 0) {
        pauVar79 = (undefined1 (*) [16])((ulonglong)local_1d0 & 0xffffffff);
        uVar76 = local_1d8;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        goto LAB_14957580f;
      }
    }
    param_1 = local_1c8;
    uVar23 = *(ushort *)(piVar61 + 2);
    uVar76 = local_1d8;
    pauVar41 = local_1c0;
    if ((uVar23 & 0x12) != 0) {
      if (((uVar23 & 2) != 0) && (*(char *)((longlong)piVar61 + 10) != local_1e1)) {
        FUN_14956ba6f(piVar61);
        uVar23 = *(ushort *)(piVar61 + 2);
      }
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      if ((uVar23 & 0x12) != 0) {
        iVar26 = piVar61[3];
        if ((uVar23 >> 0xe & 1) != 0) {
          iVar26 = iVar26 + *piVar61;
        }
        param_1 = local_1c8;
        local_1b4 = uVar73;
        local_1a8 = pauVar65;
        if (*(int *)(*(longlong *)(piVar61 + 10) + 0x7c) < iVar26) goto LAB_149575787;
      }
    }
    break;
  case 0x41:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    lVar51 = *(longlong *)((longlong)pauVar52 + lVar56) * 0x18;
    goto LAB_14956ed28;
  case 0x42:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    lVar51 = (longlong)
             *(int *)((longlong)local_198 + *(longlong *)((longlong)pauVar52 + lVar56) * 0x18 + 8) *
             0x18 + -0x18;
LAB_14956ed28:
    *(undefined2 *)((longlong)*pauVar52 + lVar56 + 8) = 0x80;
    pauVar65 = (undefined1 (*) [16])((longlong)*local_198 + lVar51);
    break;
  case 0x43:
    if ((*(byte *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + 8) &
        1) != 0) goto switchD_14956c99d_caseD_44;
    break;
  case 0x44:
switchD_14956c99d_caseD_44:
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    if (iVar26 != 0) {
      iVar31 = (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555;
      *(int *)((longlong)param_1[3] + 8) = iVar26;
      *(undefined1 *)((longlong)param_1[0xc] + 2) = *(undefined1 *)((longlong)*pauVar65 + 8);
      *(int *)((longlong)param_1[3] + 4) = iVar31;
      uVar23 = *(ushort *)((longlong)*pauVar65 + 2);
      if (uVar23 == 0) {
        FUN_14956b132(param_1,&DAT_149dfbe46,*(undefined8 *)pauVar65[1]);
        pcVar68 = *(code **)((longlong)param_1[10] + 8);
      }
      else {
        FUN_14956b132(param_1,"%s constraint failed",
                      &DAT_14bd41520 + *(int *)(&DAT_14bd41520 + (ulonglong)(uVar23 - 1) * 4));
        pcVar68 = *(code **)((longlong)param_1[10] + 8);
        if (*(longlong *)pauVar65[1] != 0) {
          pcVar68 = (code *)FUN_14955a402(pauVar41,"%z: %s",pcVar68);
          *(code **)*local_180 = pcVar68;
        }
      }
      local_1f8 = pcVar68;
      FUN_14955599e(*(undefined4 *)((longlong)*pauVar65 + 4),"abort at %d in [%s]: %s",iVar31,
                    *(undefined8 *)param_1[0xf]);
LAB_1495750fb:
      iVar26 = FUN_149569b7c(param_1);
      if (iVar26 != 5) {
        pauVar79 = (undefined1 (*) [16])&DAT_00000001;
        if (*(int *)((longlong)param_1[3] + 8) != 0) goto LAB_149575917;
        pauVar79 = (undefined1 (*) [16])&DAT_00000065;
        goto LAB_149575917;
      }
      *(undefined4 *)((longlong)param_1[3] + 8) = 5;
      pauVar79 = (undefined1 (*) [16])0x5;
      goto LAB_149575917;
    }
    if (*(longlong *)param_1[0x10] == 0) {
      *(undefined4 *)((longlong)param_1[3] + 8) = 0;
      *(undefined1 *)((longlong)param_1[0xc] + 2) = *(undefined1 *)((longlong)*pauVar65 + 8);
      *(int *)((longlong)param_1[3] + 4) =
           (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555;
      goto LAB_1495750fb;
    }
    *(undefined8 *)param_1[0x10] = *(undefined8 *)(*(longlong *)param_1[0x10] + 8);
    *(int *)param_1[0x11] = *(int *)param_1[0x11] + -1;
    iVar26 = *(int *)((longlong)param_1[3] + 0xc);
    *(int *)((longlong)pauVar41[7] + 4) = iVar26;
    *(int *)((longlong)pauVar41[7] + 8) = *(int *)((longlong)pauVar41[7] + 8) + iVar26;
    iVar26 = FUN_14956a92e();
    local_198 = *(undefined1 (**) [16])((longlong)param_1[8] + 8);
    if (*(int *)((longlong)*pauVar65 + 8) == 4) {
      iVar26 = *(int *)((longlong)local_198 + (longlong)iVar26 * 0x18 + 8) + -1;
    }
    pauVar65 = (undefined1 (*) [16])((longlong)local_198 + (longlong)iVar26 * 0x18);
    pauVar52 = *(undefined1 (**) [16])((longlong)param_1[6] + 8);
    pauVar42 = local_1d0;
    break;
  case 0x45:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar59 = (ulonglong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(puVar59 + 1) = 4;
    }
    else {
      FUN_14957a10c();
    }
    uVar44 = (ulonglong)*(int *)((longlong)*pauVar65 + 4);
    goto LAB_14956ee81;
  case 0x46:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar59 = (ulonglong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(puVar59 + 1) = 4;
    }
    else {
      FUN_14957a10c();
    }
    uVar44 = **(ulonglong **)pauVar65[1];
    goto LAB_14956ee81;
  case 0x47:
    local_1b4 = uVar73;
    goto LAB_14956eed4;
  case 0x48:
    lVar56 = *(longlong *)((longlong)param_1[6] + 8);
    lVar75 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = lVar56 + lVar75;
    if ((*(byte *)(lVar56 + 9 + lVar75) & 0x24) == 0) {
      *(undefined2 *)(lVar51 + 8) = 4;
      local_1b0 = pauVar52;
    }
    else {
      local_1b0 = pauVar52;
      FUN_14957a10c();
    }
    param_1 = local_1c8;
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    iVar31 = *(int *)((longlong)*pauVar65 + 0xc);
    sVar57 = (ushort)(*(int *)((longlong)*pauVar65 + 4) != 0) * 0x100 + 1;
    *(short *)(lVar51 + 8) = sVar57;
    *(undefined4 *)(lVar51 + 0xc) = 0;
    iVar28 = iVar31 - iVar26;
    pauVar41 = local_1c0;
    pauVar52 = local_1b0;
    pauVar42 = local_1d0;
    if (iVar28 != 0 && iVar26 <= iVar31) {
      iVar28 = iVar28 + 1;
      lVar51 = lVar56 + lVar75;
      do {
        if ((*(byte *)(lVar51 + 0x41) & 0x24) == 0) {
          *(undefined2 *)(lVar51 + 0x40) = 1;
        }
        else {
          FUN_14956b5ca();
        }
        *(short *)(lVar51 + 0x40) = sVar57;
        *(undefined4 *)(lVar51 + 0x44) = 0;
        iVar28 = iVar28 + -1;
        pauVar41 = local_1c0;
        pauVar52 = local_1b0;
        lVar51 = lVar51 + 0x38;
        pauVar42 = local_1d0;
      } while (1 < iVar28);
    }
    break;
  case 0x49:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    *(ushort *)((longlong)pauVar52 + lVar51 + 8) =
         ((ushort)*(undefined4 *)((longlong)pauVar52 + lVar51 + 8) & 0xff40) + 1;
    break;
  case 0x4a:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = *(longlong *)((longlong)param_1[6] + 8) + lVar56;
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar56) & 0x24) == 0) {
      *(undefined2 *)(lVar51 + 8) = 4;
    }
    else {
      FUN_14957a10c(lVar51);
    }
    param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 4);
    local_1f8 = (code *)0x0;
    FUN_14955916b();
    *(char *)(lVar51 + 10) = local_1e1;
    pauVar42 = local_1d0;
    break;
  case 0x4b:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    lVar51 = *(longlong *)param_1[8] + lVar56;
    if ((*(ushort *)(lVar51 + -0x30) & 0x12) != 0) {
      lVar56 = *(longlong *)param_1[8] + lVar56;
      iVar26 = *(int *)(lVar56 + -0x2c);
      if ((*(ushort *)(lVar51 + -0x30) >> 0xe & 1) != 0) {
        iVar26 = iVar26 + *(int *)*(undefined1 (*) [16])(lVar51 + -0x38);
      }
      local_1d8 = uVar76;
      if (*(int *)(*(longlong *)(lVar56 + -0x10) + 0x7c) < iVar26) goto LAB_149575787;
    }
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    pauVar41 = (undefined1 (*) [16])((longlong)pauVar52 + lVar56);
    local_1d8 = uVar76;
    local_1b4 = uVar73;
    local_1a8 = pauVar65;
    if ((*(byte *)((longlong)pauVar52 + lVar56 + 9) & 0x24) != 0) {
      FUN_14956b5ca();
    }
    *pauVar41 = *(undefined1 (*) [16])(lVar51 + -0x38);
    *(undefined8 *)pauVar41[1] = *(undefined8 *)(lVar51 + -0x28);
    *(ushort *)((longlong)*pauVar41 + 8) =
         (ushort)*(undefined4 *)((longlong)*pauVar41 + 8) & 0xe3bf | 0x840;
    uVar76 = local_1d8;
    pauVar41 = local_1c0;
    param_1 = local_1c8;
    uVar73 = local_1b4;
    pauVar42 = local_1d0;
    break;
  case 0x4c:
    iVar26 = *(int *)((longlong)*pauVar65 + 0xc);
    pauVar55 = (undefined1 (*) [16])
               ((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52);
    pauVar79 = (undefined1 (*) [16])
               ((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52);
    do {
      if (((*(byte *)((longlong)*pauVar79 + 9) & 0x24) != 0) || (*(int *)pauVar79[2] != 0)) {
        FUN_14956b588();
      }
      *(undefined8 *)pauVar79[3] = *(undefined8 *)pauVar55[3];
      auVar87 = *pauVar55;
      in_XMM1 = pauVar55[1];
      uVar47 = *(undefined8 *)((longlong)pauVar55[2] + 8);
      *(undefined8 *)pauVar79[2] = *(undefined8 *)pauVar55[2];
      *(undefined8 *)((longlong)pauVar79[2] + 8) = uVar47;
      pauVar79[1] = in_XMM1;
      *pauVar79 = auVar87;
      *(undefined2 *)((longlong)*pauVar55 + 8) = 1;
      *(undefined4 *)pauVar55[2] = 0;
      if (((*(byte *)((longlong)*pauVar79 + 9) & 0x10) != 0) &&
         (iVar31 = FUN_14955903b(), pauVar41 = local_1c0, pauVar43 = local_1e0, param_1 = local_1c8,
         iVar31 != 0)) goto LAB_14957030b;
      pauVar55 = (undefined1 (*) [16])((longlong)pauVar55[3] + 8);
      pauVar79 = (undefined1 (*) [16])((longlong)pauVar79[3] + 8);
      iVar26 = iVar26 + -1;
      pauVar41 = local_1c0;
      param_1 = local_1c8;
      pauVar42 = local_1d0;
    } while (iVar26 != 0);
    break;
  case 0x4d:
    iVar26 = *(int *)((longlong)*pauVar65 + 0xc);
    pauVar79 = (undefined1 (*) [16])
               ((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52);
    pauVar55 = (undefined1 (*) [16])
               ((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52);
    while( true ) {
      if ((*(byte *)((longlong)*pauVar55 + 9) & 0x24) == 0) {
        *(undefined8 *)pauVar55[1] = *(undefined8 *)pauVar79[1];
        *pauVar55 = *pauVar79;
        uVar27 = (uint)*(ushort *)((longlong)*pauVar55 + 8);
        if ((*(byte *)((longlong)*pauVar79 + 9) & 8) == 0) {
          uVar27 = *(ushort *)((longlong)*pauVar55 + 8) & 0xffffe3ff | 0x1000;
          *(short *)((longlong)*pauVar55 + 8) = (short)uVar27;
        }
      }
      else {
        param_3 = (uint *)0x1000;
        FUN_14957a133();
        uVar27 = (uint)*(ushort *)((longlong)*pauVar55 + 8);
      }
      if (((uVar27 >> 0xc & 1) != 0) &&
         (iVar31 = FUN_14955903b(), pauVar41 = local_1c0, pauVar43 = local_1e0, param_1 = local_1c8,
         iVar31 != 0)) goto LAB_14957030b;
      bVar80 = iVar26 == 0;
      iVar26 = iVar26 + -1;
      pauVar41 = local_1c0;
      param_1 = local_1c8;
      pauVar42 = local_1d0;
      if (bVar80) break;
      pauVar55 = (undefined1 (*) [16])((longlong)pauVar55[3] + 8);
      pauVar79 = (undefined1 (*) [16])((longlong)pauVar79[3] + 8);
    }
    break;
  case 0x4e:
    pauVar55 = (undefined1 (*) [16])
               ((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52);
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    pauVar43 = (undefined1 (*) [16])((longlong)pauVar52 + lVar51);
    if ((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x24) == 0) {
      *(undefined8 *)pauVar43[1] = *(undefined8 *)pauVar55[1];
      *pauVar43 = *pauVar55;
      if ((*(byte *)((longlong)*pauVar55 + 9) & 8) == 0) {
        *(ushort *)((longlong)*pauVar43 + 8) =
             (ushort)*(undefined4 *)((longlong)*pauVar43 + 8) & 0xe3ff | 0x1000;
      }
    }
    else {
      param_3 = (uint *)0x1000;
      FUN_14957a133();
      pauVar42 = local_1d0;
    }
    break;
  case 0x4f:
    param_3 = (uint *)((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38);
    lVar51 = *(longlong *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38);
    pauVar43 = (undefined1 (*) [16])param_3;
    if ((*(byte *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + 9) &
        0x24) != 0) goto LAB_149573278;
LAB_14956e59a:
    plVar39 = (longlong *)((longlong)*pauVar43 + (longlong)*pauVar52);
    *plVar39 = lVar51;
LAB_14956e59d:
    *(undefined2 *)(plVar39 + 1) = 4;
    pauVar42 = local_1d0;
    break;
  case 0x50:
    if (0 < *(longlong *)param_1[5]) {
      *(undefined4 *)((longlong)param_1[3] + 8) = 0x313;
      *(undefined1 *)((longlong)param_1[0xc] + 2) = 2;
      pcVar69 = "FOREIGN KEY constraint failed";
LAB_149575072:
      FUN_14956b132(param_1,pcVar69);
      pauVar79 = (undefined1 (*) [16])&DAT_00000001;
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    if ((*(int *)(*(longlong *)*param_1 + 0x2c0) != 0) && (*(int *)param_1[4] != 0)) {
      FUN_14956b2fb(param_1,1);
    }
    *(uint *)param_1[3] = (*(uint *)param_1[3] | 1) + 2;
    puVar33 = (undefined8 *)
              ((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38);
    *(undefined8 **)param_1[10] = puVar33;
    if (*(int *)((longlong)*pauVar65 + 8) < 1) goto LAB_1495739ea;
    lVar51 = 0;
    goto LAB_149573317;
  case 0x51:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4);
    if (lVar51 != 0) {
      lVar51 = lVar51 * 0x38;
      plVar39 = (longlong *)((longlong)pauVar52 + lVar51);
      if ((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x24) != 0) goto LAB_149573278;
      *plVar39 = 0;
      goto LAB_14956e59d;
    }
    break;
  case 0x52:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    lVar51 = FUN_149558f85((undefined8 *)((longlong)pauVar52 + lVar56));
    *(longlong *)((longlong)pauVar52 + lVar56) = lVar51;
    *(ushort *)((longlong)pauVar52 + lVar56 + 8) =
         *(ushort *)((longlong)pauVar52 + lVar56 + 8) & 0x3e40 | 4;
    *(longlong *)((longlong)pauVar52 + lVar56) = *(int *)((longlong)*pauVar65 + 8) + lVar51;
    pauVar42 = local_1d0;
    break;
  case 0x53:
    if ((*(byte *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + 8) &
        0x24) != 0) {
      FUN_149575bb6();
      pauVar42 = local_1d0;
    }
    break;
  case 0x54:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    if (((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x40) == 0) ||
       (uVar27 = FUN_149558ecc((undefined8 *)((longlong)pauVar52 + lVar51)), uVar27 == 0)) {
      param_3 = (uint *)((ulonglong)param_3 & 0xffffffffffffff00);
      uVar27 = FUN_149575c07();
      if (uVar27 == 0) goto LAB_149573550;
    }
    goto LAB_149574248;
  case 0x56:
    if ((*(byte *)((longlong)*pauVar65 + 2) & 1) == 0) {
      lVar51 = 0;
    }
    else {
      lVar51 = *(longlong *)((longlong)pauVar65[-1] + 8) + 4;
    }
    local_1a0 = (undefined1 (*) [16])(longlong)*(int *)((longlong)*pauVar65 + 0xc);
    pauVar41 = local_1c0;
    param_1 = local_1c8;
    if (0 < (longlong)local_1a0) {
      local_188 = (ulonglong)*(int *)((longlong)*pauVar65 + 4);
      local_190 = (undefined1 (*) [16])(longlong)*(int *)((longlong)*pauVar65 + 8);
      lVar56 = *(longlong *)pauVar65[1];
      pauVar43 = (undefined1 (*) [16])0x0;
      local_1b4 = uVar73;
      local_1a8 = pauVar65;
      do {
        if (lVar51 == 0) {
          iVar26 = (int)pauVar43;
        }
        else {
          iVar26 = *(int *)(lVar51 + (longlong)pauVar43 * 4);
        }
        param_3 = *(uint **)(lVar56 + 0x20 + (longlong)pauVar43 * 8);
        bVar19 = *(byte *)((longlong)*pauVar43 + *(longlong *)(lVar56 + 0x18));
        puVar33 = (undefined8 *)*local_190;
        puVar64 = (undefined8 *)(((longlong)iVar26 + local_188) * 0x38 + (longlong)pauVar52);
        iVar31 = FUN_149575d1d(puVar64);
        param_1 = local_1c8;
        pauVar41 = local_1c0;
        uVar73 = local_1b4;
        pauVar65 = local_1a8;
        pauVar42 = local_1d0;
        if (iVar31 != 0) {
          if (((*(byte *)((longlong)*pauVar43 + *(longlong *)(lVar56 + 0x18)) & 2) != 0) &&
             (((*(byte *)(puVar64 + 1) & 1) != 0 ||
              ((*(byte *)((longlong)pauVar52 + ((longlong)puVar33 + (longlong)iVar26) * 0x38 + 8) &
               1) != 0)))) {
            iVar31 = -iVar31;
          }
          iVar26 = -iVar31;
          if ((bVar19 & 1) == 0) {
            iVar26 = iVar31;
          }
          local_188 = CONCAT44(local_188._4_4_,iVar26);
          param_3 = (uint *)pauVar52;
          goto switchD_14956c99d_caseD_55;
        }
        pauVar43 = (undefined1 (*) [16])((longlong)*pauVar43 + 1);
      } while (local_1a0 != pauVar43);
      local_188 = (ulonglong)local_188._4_4_ << 0x20;
    }
    break;
  case 0x57:
    uVar27 = FUN_149575ea4((undefined8 *)
                           ((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52)
                           ,*(undefined4 *)((longlong)*pauVar65 + 0xc));
    lVar51 = (longlong)(int)(uVar27 ^ *(uint *)pauVar65[1]);
    pauVar43 = (undefined1 (*) [16])((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38);
    if ((*(byte *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + 9) &
        0x24) == 0) goto LAB_14956e59a;
LAB_149573278:
    FUN_14956c854();
    pauVar42 = local_1d0;
    break;
  case 0x59:
    pcVar69 = *(char **)(*(longlong *)((longlong)param_1[7] + 8) +
                        (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    if (pcVar69[3] == '\0') {
      local_1d8 = uVar76;
      local_1b4 = uVar73;
      if (**(char **)(pcVar69 + 0x38) != '\0') {
        uVar27 = FUN_14957a585();
LAB_149571389:
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
        uVar76 = local_1d8;
        pauVar43 = local_1e0;
        uVar73 = local_1b4;
        if (uVar27 != 0) goto LAB_14957580f;
      }
    }
    else {
      if ((*(longlong *)(pcVar69 + 0x20) == 0) ||
         (iVar31 = *(int *)(*(longlong *)(pcVar69 + 0x20) + 4 + (longlong)iVar26 * 4), iVar31 < 1))
      {
        local_1d8 = uVar76;
        local_1b4 = uVar73;
        uVar27 = FUN_149578502();
        goto LAB_149571389;
      }
      pcVar69 = *(char **)(pcVar69 + 0x30);
      iVar26 = iVar31 + -1;
      local_1d8 = uVar76;
      local_1b4 = uVar73;
    }
    pauVar42 = (undefined1 (*) [16])
               ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    puVar4 = *(uint **)(pcVar69 + 0x60);
    if (*(int *)(pcVar69 + 0x28) == *(int *)param_1[3]) {
      uVar23 = *(ushort *)(pcVar69 + 0x52);
LAB_14956fdf9:
      if ((int)(uint)uVar23 <= iVar26) {
        uVar76 = (ulonglong)*(uint *)(pcVar69 + 0x48);
        uVar73 = *puVar4;
        if (uVar73 <= *(uint *)(pcVar69 + 0x48)) {
          local_138 = (undefined1 (*) [16])((ulonglong)local_138._4_4_ << 0x20);
          goto LAB_149570b95;
        }
        local_1d0 = (undefined1 (*) [16])CONCAT44(local_1d0._4_4_,iVar26);
        pauVar43 = *(undefined1 (**) [16])(pcVar69 + 0x68);
        local_1a8 = pauVar65;
        local_190 = pauVar42;
        if (pauVar43 != (undefined1 (*) [16])0x0) goto LAB_149570c6f;
        _local_c8 = ZEXT816(0);
        _auStack_a8 = _local_c8;
        uStack_98 = 0;
        uVar73 = *puVar4;
        lVar51 = *(longlong *)(pcVar69 + 0x38);
        auStack_b8._0_8_ = *(undefined8 *)(lVar51 + 0x38);
        uVar32 = *(int *)(*(longlong *)(lVar51 + 0x88) + 0x58) - (int)auStack_b8._0_8_;
        uVar27 = 0;
        if (0 < (int)uVar32) {
          uVar27 = uVar32;
        }
        if ((int)(uint)*(ushort *)(lVar51 + 0x44) <= (int)uVar32) {
          uVar27 = (uint)*(ushort *)(lVar51 + 0x44);
        }
        if (uVar73 <= uVar27) {
          stack0xffffffffffffff50 = 0;
          _local_c8 = (unkuint10)0x1010 << 0x40;
          uStack_c0._2_2_ = 0;
          uStack_c0._4_4_ = uVar73;
          pauVar43 = (undefined1 (*) [16])auStack_b8._0_8_;
LAB_14957309a:
          uVar73 = *puVar4;
          goto LAB_149570c6f;
        }
        _auStack_b8 = _local_c8;
        uVar73 = FUN_14957a77f(lVar51,0,uVar73,local_c8);
        pauVar55 = param_1;
        if (uVar73 == 0) {
          uVar23 = *(ushort *)(pcVar69 + 0x52);
          uVar76 = (ulonglong)*(uint *)(pcVar69 + 0x48);
          pauVar43 = (undefined1 (*) [16])auStack_b8._0_8_;
          goto LAB_14957309a;
        }
        goto LAB_149574f2b;
      }
      local_138 = (undefined1 (*) [16])
                  CONCAT44(local_138._4_4_,*(undefined4 *)(pcVar69 + (longlong)iVar26 * 4 + 0x78));
LAB_14956fe13:
      local_1b0 = pauVar52;
      if ((*(byte *)((longlong)*pauVar42 + 9) & 0x24) != 0) {
        FUN_14956b5ca(pauVar42);
      }
      lVar51 = (longlong)iVar26;
      if (*(uint *)(pcVar69 + 0x74) < puVar4[lVar51 + 1]) {
        *(char *)((longlong)*pauVar42 + 10) = local_1e1;
        uVar23 = *(ushort *)((longlong)*pauVar65 + 2);
        if (((uVar23 & 0xc0) == 0) ||
           ((-1 < (char)uVar23 && ((uint)local_138 < 0xc || ((ulonglong)local_138 & 1) != 0)))) {
          if ((uint)local_138 < 0x80) {
            uVar73 = (uint)(byte)(&DAT_14bd41800)[(ulonglong)local_138 & 0xffffffff];
            if ((&DAT_14bd41800)[(ulonglong)local_138 & 0xffffffff] == 0) goto LAB_1495747f7;
          }
          else {
            uVar73 = (uint)local_138 - 0xc >> 1;
          }
          lVar56 = *(longlong *)(pcVar69 + 0x38);
          uVar32 = *(int *)(*(longlong *)(lVar56 + 0x88) + 0x58) - (int)*(longlong *)(lVar56 + 0x38)
          ;
          uVar27 = 0;
          if (0 < (int)uVar32) {
            uVar27 = uVar32;
          }
          if ((int)(uint)*(ushort *)(lVar56 + 0x44) <= (int)uVar32) {
            uVar27 = (uint)*(ushort *)(lVar56 + 0x44);
          }
          if (uVar27 < puVar4[lVar51] + uVar73) {
            uVar73 = FUN_14957a77f(lVar56);
            pauVar55 = param_1;
            if (uVar73 != 0) goto LAB_149574f2b;
          }
          else {
            *(ulonglong *)pauVar42[1] = *(longlong *)(lVar56 + 0x38) + (ulonglong)puVar4[lVar51];
            *(undefined2 *)((longlong)*pauVar42 + 8) = 0x1010;
            *(uint *)((longlong)*pauVar42 + 0xc) = uVar73;
          }
          uVar76 = local_1d8;
          param_3 = (uint *)pauVar42;
          FUN_149575f88();
          pbVar62 = (byte *)((longlong)*pauVar42 + 9);
          *pbVar62 = *pbVar62 & 0xef;
          pauVar52 = local_1b0;
          uVar73 = local_1b4;
        }
        else {
LAB_1495747f7:
          FUN_149575f88();
          uVar76 = local_1d8;
          param_3 = (uint *)pauVar42;
          pauVar52 = local_1b0;
          uVar73 = local_1b4;
        }
      }
      else {
        uVar27 = puVar4[lVar51];
        lVar51 = *(longlong *)(pcVar69 + 0x68);
        if (0xb < (uint)local_138) {
          uVar73 = (uint)local_138 - 0xc >> 1;
          pauVar52 = (undefined1 (*) [16])(ulonglong)uVar73;
          *(uint *)((longlong)*pauVar42 + 0xc) = uVar73;
          *(char *)((longlong)*pauVar42 + 10) = local_1e1;
          if (*(int *)pauVar42[2] < (int)(uVar73 + 2)) {
            *(undefined2 *)((longlong)*pauVar42 + 8) = 1;
            iVar26 = FUN_14956b6c8(pauVar42,uVar73 + 2,0);
            uVar76 = local_1d8;
            pauVar43 = local_1e0;
            uVar73 = local_1b4;
            if (iVar26 != 0) goto LAB_14957030b;
            pvVar45 = *(void **)pauVar42[1];
          }
          else {
            pvVar45 = *(void **)((longlong)pauVar42[1] + 8);
            *(void **)pauVar42[1] = pvVar45;
          }
          uVar73 = local_1b4;
          param_3 = (uint *)pauVar52;
          memcpy(pvVar45,(void *)((ulonglong)uVar27 + lVar51),(size_t)pauVar52);
          *(undefined1 *)((longlong)*pauVar52 + *(longlong *)pauVar42[1]) = 0;
          *(undefined1 *)((longlong)*pauVar52 + *(longlong *)pauVar42[1] + 1) = 0;
          *(undefined2 *)((longlong)*pauVar42 + 8) =
               *(undefined2 *)(&DAT_14bd415aa + (ulonglong)((uint)local_138 & 1) * 2);
          uVar76 = local_1d8;
          pauVar52 = local_1b0;
          goto LAB_14956dafc;
        }
        FUN_149575f88();
        uVar76 = local_1d8;
        param_3 = (uint *)pauVar42;
        pauVar52 = local_1b0;
        uVar73 = local_1b4;
      }
    }
    else {
      if (pcVar69[2] == '\0') {
        lVar51 = *(longlong *)(pcVar69 + 0x38);
        local_1d0 = (undefined1 (*) [16])CONCAT44(local_1d0._4_4_,iVar26);
        FUN_149567d86(lVar51);
        uVar27 = *(uint *)(lVar51 + 0x40);
        *(uint *)(pcVar69 + 0x70) = uVar27;
        uVar32 = *(int *)(*(longlong *)(lVar51 + 0x88) + 0x58) - *(int *)(lVar51 + 0x38);
        uVar73 = 0;
        if (0 < (int)uVar32) {
          uVar73 = uVar32;
        }
        if ((int)(uint)*(ushort *)(lVar51 + 0x44) <= (int)uVar32) {
          uVar73 = (uint)*(ushort *)(lVar51 + 0x44);
        }
        param_3 = (uint *)(ulonglong)uVar73;
        *(uint *)(pcVar69 + 0x74) = uVar73;
        pcVar53 = *(char **)(lVar51 + 0x38);
        *(char **)(pcVar69 + 0x68) = pcVar53;
        pauVar41 = local_1c0;
        iVar26 = (int)local_1d0;
        uVar73 = local_1b4;
        if (*(uint *)((longlong)local_1c0[7] + 0xc) < uVar27) goto LAB_149575787;
      }
      else {
        if (*pcVar69 != '\x03') {
          if ((*(byte *)((longlong)*pauVar42 + 9) & 0x24) == 0) {
            *(undefined2 *)((longlong)*pauVar42 + 8) = 1;
            uVar76 = local_1d8;
            uVar73 = local_1b4;
          }
          else {
            FUN_14956b5ca();
            uVar76 = local_1d8;
            uVar73 = local_1b4;
          }
          goto LAB_14956dafc;
        }
        uVar30 = *(undefined4 *)
                  ((longlong)pauVar52 + (longlong)*(int *)(pcVar69 + 0x2c) * 0x38 + 0xc);
        *(undefined4 *)(pcVar69 + 0x74) = uVar30;
        *(undefined4 *)(pcVar69 + 0x70) = uVar30;
        pcVar53 = *(char **)((longlong)pauVar52 + (longlong)*(int *)(pcVar69 + 0x2c) * 0x38 + 0x10);
        *(char **)(pcVar69 + 0x68) = pcVar53;
      }
      *(undefined4 *)(pcVar69 + 0x28) = *(undefined4 *)param_1[3];
      if (*pcVar53 < 0) {
        local_1d0 = (undefined1 (*) [16])CONCAT44(local_1d0._4_4_,iVar26);
        bVar19 = FUN_149575ef2(pcVar53,puVar4);
        iVar26 = (int)local_1d0;
      }
      else {
        *puVar4 = (int)*pcVar53;
        bVar19 = 1;
      }
      uVar76 = (ulonglong)bVar19;
      *(uint *)(pcVar69 + 0x48) = (uint)bVar19;
      pcVar69[0x52] = '\0';
      pcVar69[0x53] = '\0';
      uVar73 = *puVar4;
      if (*(uint *)(pcVar69 + 0x74) < uVar73) {
        pcVar69[0x68] = '\0';
        pcVar69[0x69] = '\0';
        pcVar69[0x6a] = '\0';
        pcVar69[0x6b] = '\0';
        pcVar69[0x6c] = '\0';
        pcVar69[0x6d] = '\0';
        pcVar69[0x6e] = '\0';
        pcVar69[0x6f] = '\0';
        pcVar69[0x74] = '\0';
        pcVar69[0x75] = '\0';
        pcVar69[0x76] = '\0';
        pcVar69[0x77] = '\0';
        if ((*puVar4 < 0x18004) && (*puVar4 <= *(uint *)(pcVar69 + 0x70))) {
          uVar23 = 0;
          goto LAB_14956fdf9;
        }
LAB_149570c30:
        iVar26 = *(int *)((longlong)*local_198 + 0xc);
        if (0 < iVar26) {
          pauVar65 = (undefined1 (*) [16])((longlong)local_198 + (ulonglong)(iVar26 - 1) * 0x18);
          uVar76 = local_1d8;
          uVar73 = local_1b4;
          goto LAB_14956dafc;
        }
        local_1f8 = (code *)0x14bd4063a;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x1569f);
        pauVar79 = (undefined1 (*) [16])&DAT_0000000b;
        uVar76 = local_1d8;
        pauVar43 = local_1e0;
        uVar73 = local_1b4;
        goto LAB_14957580f;
      }
      local_1d0 = (undefined1 (*) [16])CONCAT44(local_1d0._4_4_,iVar26);
      pauVar43 = *(undefined1 (**) [16])(pcVar69 + 0x68);
      uVar23 = 0;
      local_1a8 = pauVar65;
      local_190 = pauVar42;
LAB_149570c6f:
      uVar44 = (ulonglong)puVar4[uVar23];
      pbVar62 = (byte *)((longlong)*pauVar43 + uVar76);
      pbVar74 = (byte *)((longlong)*pauVar43 + (ulonglong)uVar73);
      lVar51 = (longlong)(int)local_1d0;
      uVar76 = (ulonglong)uVar23;
      local_1b0 = pauVar52;
      local_1a0 = pauVar43;
      do {
        bVar19 = *pbVar62;
        local_138 = (undefined1 (*) [16])CONCAT44(local_138._4_4_,(uint)bVar19);
        *(uint *)(pcVar69 + uVar76 * 4 + 0x78) = (uint)bVar19;
        if ((longlong)(char)bVar19 < 0) {
          bVar19 = FUN_149575ef2(pbVar62,&local_138);
          *(uint *)(pcVar69 + uVar76 * 4 + 0x78) = (uint)local_138;
          if (((ulonglong)local_138 & 0xffffffff) < 0x80) {
            uVar72 = (ulonglong)(byte)(&DAT_14bd41800)[(ulonglong)local_138 & 0xffffffff];
          }
          else {
            uVar72 = (ulonglong)((uint)local_138 - 0xc >> 1);
          }
          pbVar62 = pbVar62 + bVar19;
          pauVar41 = local_1c0;
          pauVar52 = local_1b0;
        }
        else {
          pbVar62 = pbVar62 + 1;
          uVar72 = (ulonglong)(byte)(&DAT_14bd41800)[(char)bVar19];
        }
        pauVar42 = local_190;
        pauVar65 = local_1a8;
        param_1 = local_1c8;
        uVar44 = uVar44 + uVar72;
        uVar72 = uVar76 + 1;
        puVar4[uVar76 + 1] = (uint)uVar44;
      } while (((longlong)uVar76 < lVar51) && (uVar76 = uVar72, pbVar62 < pbVar74));
      param_3 = (uint *)pauVar41;
      if (pbVar62 < pbVar74) {
        if (*(uint *)(pcVar69 + 0x70) < uVar44) {
LAB_149570c0a:
          if (*puVar4 != 0) {
            if ((*(longlong *)(pcVar69 + 0x68) == 0) &&
               (((uStack_c0._1_1_ & 0x24) != 0 || (auStack_a8._0_4_ != 0)))) {
              FUN_14956b588(local_c8);
            }
            goto LAB_149570c30;
          }
          uVar72 = 0;
          pbVar62 = pbVar74;
        }
      }
      else if ((pbVar74 < pbVar62) || (uVar44 != *(uint *)(pcVar69 + 0x70))) goto LAB_149570c0a;
      uVar23 = (ushort)uVar72;
      *(ushort *)(pcVar69 + 0x52) = uVar23;
      *(int *)(pcVar69 + 0x48) = (int)pbVar62 - (int)local_1a0;
      iVar26 = (int)local_1d0;
      if ((*(longlong *)(pcVar69 + 0x68) == 0) &&
         (((uStack_c0._1_1_ & 0x24) != 0 || (auStack_a8._0_4_ != 0)))) {
        FUN_14956b588();
        uVar23 = *(ushort *)(pcVar69 + 0x52);
        iVar26 = (int)local_1d0;
      }
LAB_149570b95:
      uVar73 = local_1b4;
      uVar76 = local_1d8;
      if (iVar26 < (int)(uint)uVar23) goto LAB_14956fe13;
      if (*(char *)((longlong)*pauVar65 + 1) == -0xb) {
        pauVar43 = *(undefined1 (**) [16])pauVar65[1];
        if ((*(byte *)((longlong)*pauVar42 + 9) & 0x24) == 0) {
          *(undefined8 *)pauVar42[1] = *(undefined8 *)pauVar43[1];
          *pauVar42 = *pauVar43;
          if (((*pauVar43)[9] & 8) == 0) {
            *(ushort *)((longlong)*pauVar42 + 8) =
                 (ushort)*(undefined4 *)((longlong)*pauVar42 + 8) & 0xe3ff | 0x800;
          }
        }
        else {
          param_3 = (uint *)0x800;
          FUN_14957a133();
        }
      }
      else if ((*(byte *)((longlong)*pauVar42 + 9) & 0x24) == 0) {
        *(undefined2 *)((longlong)*pauVar42 + 8) = 1;
      }
      else {
        FUN_14956b5ca();
      }
    }
    goto LAB_14956dafc;
  case 0x5a:
    pdVar77 = (double *)((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52);
    cVar21 = **(char **)pauVar65[1];
    pcVar69 = *(char **)pauVar65[1];
    do {
      param_3 = (uint *)((ulonglong)param_3 & 0xffffffffffffff00);
      FUN_149575ae7(pdVar77,cVar21);
      if ((*pcVar69 == 'E') && ((*(ushort *)(pdVar77 + 1) & 4) != 0)) {
        if ((longlong)*pdVar77 + 0x800000000000U >> 0x30 == 0) {
          uVar23 = 0x20;
          uVar24 = 0xffdb;
        }
        else {
          *pdVar77 = (double)(longlong)*pdVar77;
          uVar23 = 8;
          uVar24 = 0xfff3;
        }
        *(ushort *)(pdVar77 + 1) = uVar23 | uVar24 & *(ushort *)(pdVar77 + 1);
      }
      cVar21 = pcVar69[1];
      pdVar77 = pdVar77 + 7;
      pauVar41 = local_1c0;
      pcVar69 = pcVar69 + 1;
      pauVar42 = local_1d0;
    } while (cVar21 != '\0');
    break;
  case 0x5b:
    pcVar69 = *(char **)pauVar65[1];
    pdVar77 = (double *)((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52);
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    param_3 = (uint *)CONCAT71(uVar70,*(undefined1 *)((longlong)param_1[0xc] + 3));
    iVar31 = *(int *)((longlong)*pauVar65 + 0xc);
    local_1d8 = uVar76;
    local_1b0 = pauVar52;
    if (pcVar69 != (char *)0x0) {
      cVar21 = *pcVar69;
      pdVar60 = pdVar77;
      pauVar41 = (undefined1 (*) [16])param_3;
      do {
        param_3 = (uint *)((ulonglong)pauVar41 & 0xffffffff);
        FUN_149575ae7(pdVar60,cVar21,CONCAT71((int7)((ulonglong)pauVar41 >> 8),local_1e1));
        if ((*pcVar69 == 'E') && ((*(ushort *)(pdVar60 + 1) & 4) != 0)) {
          *(ushort *)(pdVar60 + 1) = *(ushort *)(pdVar60 + 1) & 0xffdb | 0x20;
        }
        pdVar60 = pdVar60 + 7;
        cVar21 = pcVar69[1];
        pauVar41 = (undefined1 (*) [16])param_3;
        pcVar69 = pcVar69 + 1;
      } while (cVar21 != '\0');
    }
    pdVar58 = pdVar77 + (longlong)iVar26 * 7 + -7;
    puVar33 = (undefined8 *)((longlong)iVar31 * 0x38 + (longlong)local_1b0);
    pauVar55 = (undefined1 (*) [16])0x0;
    lVar51 = 0;
    pdVar60 = pdVar58;
    uVar27 = 0;
    local_1b4 = uVar73;
    local_1a8 = pauVar65;
    do {
      uVar23 = *(ushort *)(pdVar60 + 1);
      if ((uVar23 & 1) == 0) {
        if ((uVar23 & 0x24) == 0) {
          if ((uVar23 & 8) == 0) {
            uVar32 = *(uint *)((longlong)pdVar60 + 0xc);
            uVar48 = (uVar23 >> 1 & 1) + uVar32 * 2 + 0xc;
            if ((uVar23 >> 0xe & 1) != 0) {
              uVar48 = uVar48 + *(int *)pdVar60 * 2;
              if (lVar51 == 0) {
                pauVar55 = (undefined1 (*) [16])((longlong)*pauVar55 + (longlong)*(int *)pdVar60);
              }
              else {
                local_190 = (undefined1 (*) [16])CONCAT71(local_190._1_7_,(byte)param_3);
                local_1a0 = pauVar55;
                iVar26 = FUN_149558ecc(pdVar60);
                uVar76 = local_1d8;
                pauVar65 = local_1a8;
                pauVar41 = local_1c0;
                pauVar43 = local_1e0;
                param_1 = local_1c8;
                uVar73 = local_1b4;
                if (iVar26 != 0) goto LAB_14957030b;
                uVar32 = uVar32 + *(int *)pdVar60;
                param_3 = (uint *)CONCAT71((int7)((ulonglong)param_3 >> 8),local_190._0_1_);
                pauVar55 = local_1a0;
              }
            }
            iVar26 = 1;
            if (0x7f < uVar48) {
              uVar76 = (ulonglong)uVar48;
              do {
                iVar26 = iVar26 + 1;
                bVar80 = 0x3fff < uVar76;
                uVar76 = uVar76 >> 7;
              } while (bVar80);
            }
            lVar51 = lVar51 + (ulonglong)uVar32;
            uVar32 = uVar27 + iVar26;
            *(uint *)((longlong)pdVar60 + 0x24) = uVar48;
          }
          else {
LAB_14956d9e5:
            uVar32 = uVar27 + 1;
            *(int *)((longlong)pdVar60 + 0x24) = 7;
            lVar51 = lVar51 + 8;
          }
        }
        else {
          dVar3 = *pdVar60;
          uVar76 = (longlong)dVar3 >> 0x3f ^ (ulonglong)dVar3;
          uVar32 = uVar27 + 1;
          if (uVar76 < 0x80) {
            if (((ulonglong)dVar3 < 2) && (3 < (byte)param_3)) {
              *(uint *)((longlong)pdVar60 + 0x24) = SUB84(dVar3,0) | 8;
            }
            else {
              *(int *)((longlong)pdVar60 + 0x24) = 1;
              lVar51 = lVar51 + 1;
            }
          }
          else if (uVar76 < 0x8000) {
            *(int *)((longlong)pdVar60 + 0x24) = 2;
            lVar51 = lVar51 + 2;
          }
          else if (uVar76 < 0x800000) {
            *(int *)((longlong)pdVar60 + 0x24) = 3;
            lVar51 = lVar51 + 3;
          }
          else if (uVar76 < 0x80000000) {
            *(int *)((longlong)pdVar60 + 0x24) = 4;
            lVar51 = lVar51 + 4;
          }
          else if (uVar76 >> 0x2f == 0) {
            *(int *)((longlong)pdVar60 + 0x24) = 5;
            lVar51 = lVar51 + 6;
          }
          else {
            if ((uVar23 & 0x20) != 0) {
              *pdVar60 = (double)(longlong)dVar3;
              *(ushort *)(pdVar60 + 1) = uVar23 & 0xffd7 | 8;
              goto LAB_14956d9e5;
            }
            *(int *)((longlong)pdVar60 + 0x24) = 6;
            lVar51 = lVar51 + 8;
          }
        }
      }
      else {
        *(uint *)((longlong)pdVar60 + 0x24) = (int)((uint)uVar23 << 0x11) >> 0x1f & 10;
        uVar32 = uVar27 + 1;
      }
      bVar80 = pdVar60 != pdVar77;
      pdVar60 = pdVar60 + -7;
      uVar27 = uVar32;
    } while (bVar80);
    if ((int)uVar32 < 0x7f) {
      uVar32 = uVar32 + 1;
    }
    else {
      uVar73 = 1;
      uVar27 = 1;
      if (uVar32 != 0x7f) {
        pauVar65 = (undefined1 (*) [16])(ulonglong)uVar32;
        do {
          param_3 = (uint *)((ulonglong)pauVar65 >> 7);
          uVar27 = uVar27 + 1;
          bVar80 = (undefined1 (*) [16])0x3fff < pauVar65;
          pauVar65 = (undefined1 (*) [16])param_3;
        } while (bVar80);
      }
      uVar32 = uVar32 + uVar27;
      if (0x7f < uVar32) {
        uVar73 = 1;
        pauVar65 = (undefined1 (*) [16])(ulonglong)uVar32;
        do {
          param_3 = (uint *)((ulonglong)pauVar65 >> 7);
          uVar73 = uVar73 + 1;
          bVar80 = (undefined1 (*) [16])0x3fff < pauVar65;
          pauVar65 = (undefined1 (*) [16])param_3;
        } while (bVar80);
      }
      uVar32 = uVar32 + (uVar27 < uVar73);
    }
    lVar56 = (longlong)(int)uVar32;
    uVar44 = lVar51 + lVar56;
    lVar51 = (longlong)*pauVar55 + uVar44;
    if (*(int *)(puVar33 + 4) < lVar51) {
      uVar73 = local_1b4;
      pauVar65 = local_1a8;
      if (*(int *)((longlong)local_1c0[7] + 0xc) < lVar51) goto LAB_149575787;
      if (*(int *)(puVar33 + 4) < (int)uVar44) {
        param_3 = (uint *)0x0;
        iVar26 = FUN_14956b6c8(puVar33,uVar44 & 0xffffffff);
        uVar76 = local_1d8;
        pauVar65 = local_1a8;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        uVar73 = local_1b4;
        if (iVar26 != 0) goto LAB_14957030b;
      }
      else {
        puVar33[2] = puVar33[3];
        *(ushort *)(puVar33 + 1) = *(ushort *)(puVar33 + 1) & 0x2d;
      }
    }
    else {
      puVar33[2] = puVar33[3];
    }
    pauVar52 = local_1b0;
    *(int *)((longlong)puVar33 + 0xc) = (int)uVar44;
    *(undefined2 *)(puVar33 + 1) = 0x10;
    if (pauVar55 != (undefined1 (*) [16])0x0) {
      *(int *)puVar33 = (int)pauVar55;
      *(undefined2 *)(puVar33 + 1) = 0x4010;
    }
    pbVar62 = (byte *)puVar33[2];
    if (uVar32 < 0x80) {
      *pbVar62 = (byte)uVar32;
      bVar19 = 1;
    }
    else if (uVar32 < 0x4000) {
      *pbVar62 = (byte)(uVar32 >> 7) | 0x80;
      pbVar62[1] = (byte)uVar32 & 0x7f;
      bVar19 = 2;
    }
    else {
      bVar19 = FUN_14957a85b(pbVar62,lVar56);
    }
    param_1 = local_1c8;
    pbVar74 = pbVar62 + lVar56;
    pbVar62 = pbVar62 + bVar19;
    do {
      uVar73 = *(uint *)((longlong)pdVar77 + 0x24);
      if ((ulonglong)uVar73 < 0x80) {
        *pbVar62 = (byte)uVar73;
        pbVar62 = pbVar62 + 1;
        if (6 < uVar73 - 1) {
          if (0xb < uVar73) goto LAB_14956f0a0;
          goto LAB_14956f0d7;
        }
        pauVar65 = (undefined1 (*) [16])(ulonglong)(byte)(&DAT_14bd41800)[uVar73];
        pbVar50 = pbVar74 + ((byte)(&DAT_14bd41800)[uVar73] - 1);
        pauVar41 = pauVar65;
        pauVar43 = (undefined1 (*) [16])*pdVar77;
        do {
          param_3 = (uint *)((ulonglong)pauVar43 >> 8);
          *pbVar50 = (byte)pauVar43;
          pbVar50 = pbVar50 + -1;
          uVar73 = (int)pauVar41 - 1;
          pauVar41 = (undefined1 (*) [16])(ulonglong)uVar73;
          pauVar43 = (undefined1 (*) [16])param_3;
        } while (uVar73 != 0);
      }
      else {
        if (uVar73 < 0x4000) {
          *pbVar62 = (byte)(uVar73 >> 7) | 0x80;
          pbVar62[1] = (byte)uVar73 & 0x7f;
          bVar19 = 2;
        }
        else {
          bVar19 = FUN_14957a85b();
        }
        pbVar62 = pbVar62 + bVar19;
LAB_14956f0a0:
        pauVar65 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)pdVar77 + 0xc);
        if (pauVar65 == (undefined1 (*) [16])0x0) {
LAB_14956f0d7:
          pauVar65 = (undefined1 (*) [16])0x0;
        }
        else {
          param_3 = (uint *)pauVar65;
          memcpy(pbVar74,(void *)pdVar77[2],(size_t)pauVar65);
        }
      }
      pbVar74 = pbVar74 + (longlong)pauVar65;
      pdVar77 = pdVar77 + 7;
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar41 = local_1c0;
      uVar73 = local_1b4;
      pauVar42 = local_1d0;
    } while (pdVar77 <= pdVar58);
    break;
  case 0x5c:
    lVar51 = *(longlong *)
              (*(longlong *)
                (*(longlong *)((longlong)param_1[7] + 8) +
                (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 0x38);
    local_1b0 = pauVar52;
    uVar27 = FUN_14957a8fb(lVar51);
    if (uVar27 != 0x10) {
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      if (uVar27 != 0) goto LAB_14957580f;
      lVar56 = 0;
      while (*(int *)local_1c0[0x17] == 0) {
        lVar75 = *(longlong *)(lVar51 + 0x88);
        if (*(char *)(lVar75 + 8) == '\0') {
          if (*(char *)(lVar75 + 2) == '\0') {
            lVar56 = lVar56 + (ulonglong)*(ushort *)(lVar75 + 0x18);
          }
        }
        else {
          lVar56 = lVar56 + (ulonglong)*(ushort *)(lVar75 + 0x18);
          do {
            cVar21 = *(char *)(lVar51 + 0x54);
            if ((longlong)cVar21 == 0) {
              uVar27 = FUN_14957a8fb(lVar51);
              if (uVar27 == 0) goto LAB_149572fbe;
              goto LAB_1495747c6;
            }
            *(undefined2 *)(lVar51 + 0x46) = 0;
            *(byte *)(lVar51 + 1) = *(byte *)(lVar51 + 1) & 0xf9;
            *(undefined2 *)(lVar51 + 0x56) = *(undefined2 *)(lVar51 + 0x56 + (longlong)cVar21 * 2);
            *(char *)(lVar51 + 0x54) = cVar21 + -1;
            *(undefined8 *)(lVar51 + 0x88) =
                 *(undefined8 *)(lVar51 + 0x90 + (longlong)(char)(cVar21 + -1) * 8);
            FUN_14955db91(*(undefined8 *)(lVar75 + 0x70));
            lVar75 = *(longlong *)(lVar51 + 0x88);
          } while (*(ushort *)(lVar75 + 0x18) <= *(ushort *)(lVar51 + 0x56));
          *(ushort *)(lVar51 + 0x56) = *(ushort *)(lVar51 + 0x56) + 1;
        }
        uVar27 = FUN_14957aa8f(lVar51);
        if (uVar27 != 0) goto LAB_1495747c6;
      }
    }
    lVar56 = 0;
LAB_149572fbe:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
    }
    else {
      FUN_14957a10c();
    }
    *plVar39 = lVar56;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar41 = local_1c0;
    pauVar52 = local_1b0;
    pauVar43 = local_1e0;
    goto LAB_14956d64d;
  case 0x5d:
    param_3 = (uint *)local_c8;
    FUN_14957620f(*(undefined8 *)
                   (*(longlong *)pauVar41[2] + 8 +
                   (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20));
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
    }
    else {
      FUN_14957a10c();
    }
    *plVar39 = (longlong)(int)local_c8._0_4_;
    pauVar42 = local_1d0;
    break;
  case 0x5e:
    lVar51 = *(longlong *)pauVar41[2] + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20;
    param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 0xc);
    uVar27 = FUN_149557edb();
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    if (*(int *)((longlong)*pauVar65 + 8) == 2) {
      *(undefined1 *)(*(longlong *)(lVar51 + 0x18) + 0x70) =
           *(undefined1 *)((longlong)*pauVar65 + 0xc);
    }
    else if (*(int *)((longlong)*pauVar65 + 8) == 1) {
      **(undefined4 **)(lVar51 + 0x18) = *(undefined4 *)((longlong)*pauVar65 + 0xc);
      pbVar62 = (byte *)((longlong)pauVar41[2] + 0xc);
      *pbVar62 = *pbVar62 | 1;
    }
    if (*(int *)((longlong)*pauVar65 + 4) == 1) {
      for (lVar51 = *(longlong *)((longlong)*pauVar41 + 8); lVar51 != 0;
          lVar51 = *(longlong *)(lVar51 + 0x10)) {
        *(uint *)(lVar51 + 200) = (*(uint *)(lVar51 + 200) & 0xfffffffc) + 1;
      }
      *(byte *)((longlong)param_1[0xc] + 8) = *(byte *)((longlong)param_1[0xc] + 8) & 0xfc;
    }
    goto LAB_149574196;
  case 0x5f:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    if ((lVar51 == 0) || (*(int *)(lVar51 + 0x4c) != *(int *)((longlong)*pauVar65 + 8)))
    goto switchD_14956c99d_caseD_60;
    goto LAB_14956dae3;
  case 0x60:
  case 0x61:
switchD_14956c99d_caseD_60:
    if ((*(uint *)((longlong)param_1[0xc] + 8) & 3) == 1) {
      pauVar79 = (undefined1 (*) [16])&DAT_00000204;
    }
    else {
      iVar26 = *(int *)((longlong)*pauVar65 + 8);
      iVar31 = *(int *)((longlong)*pauVar65 + 0xc);
      lVar51 = (longlong)iVar31 * 0x20;
      uVar47 = *(undefined8 *)(*(longlong *)pauVar41[2] + 8 + lVar51);
      if ((bVar19 == 0x61) &&
         (bVar19 = *(byte *)(*(longlong *)(*(longlong *)pauVar41[2] + lVar51 + 0x18) + 0x70),
         bVar19 < *(byte *)((longlong)param_1[0xc] + 3))) {
        *(byte *)((longlong)param_1[0xc] + 3) = bVar19;
      }
      local_1d8 = uVar76;
      if ((*(byte *)((longlong)*pauVar65 + 2) & 0x10) != 0) {
        lVar51 = (longlong)iVar26 * 0x38;
        uVar34 = FUN_149558f85((undefined8 *)((longlong)pauVar52 + lVar51));
        iVar26 = (int)uVar34;
        *(undefined8 *)((longlong)pauVar52 + lVar51) = uVar34;
        *(ushort *)((longlong)pauVar52 + lVar51 + 8) =
             *(ushort *)((longlong)pauVar52 + lVar51 + 8) & 0x3e40 | 4;
      }
      cVar21 = *(char *)((longlong)*pauVar65 + 1);
      if (cVar21 == -3) {
        uVar27 = *(uint *)pauVar65[1];
        lVar56 = 0;
      }
      else if (cVar21 == -9) {
        lVar56 = *(longlong *)pauVar65[1];
        uVar27 = (uint)*(ushort *)(lVar56 + 8);
      }
      else {
        lVar56 = 0;
        uVar27 = 0;
      }
      local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
      lVar51 = FUN_149576289(local_1c8,*(undefined4 *)((longlong)*pauVar65 + 4),uVar27,iVar31);
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      if (lVar51 == 0) goto LAB_14957030b;
      *(undefined1 *)(lVar51 + 2) = 1;
      *(byte *)(lVar51 + 8) = *(byte *)(lVar51 + 8) | 4;
      param_3 = (uint *)0x0;
      *(int *)(lVar51 + 0x4c) = iVar26;
      local_1f8 = *(code **)(lVar51 + 0x38);
      local_1d0 = (undefined1 (*) [16])FUN_1495763b6(uVar47);
      *(longlong *)(lVar51 + 0x40) = lVar56;
      *(bool *)(lVar51 + 4) = *(char *)((longlong)*pauVar65 + 1) != -9;
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      param_1 = local_1c8;
LAB_14956dae3:
      *(byte *)(*(longlong *)(lVar51 + 0x38) + 3) = *(byte *)((longlong)*pauVar65 + 2) & 3;
      uVar27 = (uint)local_1d0;
      if (uVar27 == 0) goto LAB_14956dafc;
LAB_14956fcca:
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
    }
    goto LAB_14957580f;
  case 0x62:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 8) * 8);
    local_1f8 = (code *)((ulonglong)local_1f8._1_7_ << 8);
    lVar56 = FUN_149576289(param_1,*(undefined4 *)((longlong)*pauVar65 + 4),
                           (int)*(short *)(lVar51 + 0x50),0xffffffff);
    pauVar43 = local_1e0;
    if (lVar56 == 0) goto LAB_14957030b;
    *(undefined1 *)(lVar56 + 2) = 1;
    uVar27 = *(uint *)(lVar56 + 8);
    *(uint *)(lVar56 + 8) = uVar27 | 1;
    *(undefined8 *)(lVar56 + 0x40) = *(undefined8 *)(lVar51 + 0x40);
    *(undefined1 *)(lVar56 + 4) = *(undefined1 *)(lVar51 + 4);
    *(undefined4 *)(lVar56 + 0x4c) = *(undefined4 *)(lVar51 + 0x4c);
    *(uint *)(lVar56 + 8) = uVar27 & 0xfffffffb | 1 | *(uint *)(lVar51 + 8) & 4;
    local_1f8 = *(code **)(lVar56 + 0x38);
    param_3 = (uint *)0x0;
    pauVar42 = (undefined1 (*) [16])FUN_1495763b6();
    break;
  case 99:
  case 100:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4);
    lVar51 = *(longlong *)(*(longlong *)((longlong)param_1[7] + 8) + lVar56 * 8);
    if ((lVar51 == 0) || (*(longlong *)(lVar51 + 0x10) == 0)) {
      local_1f8 = (code *)((ulonglong)local_1f8._1_7_ << 8);
      lVar51 = FUN_149576289(param_1,lVar56,*(undefined4 *)((longlong)*pauVar65 + 8),0xffffffff);
      pauVar43 = local_1e0;
      if (lVar51 == 0) goto LAB_14957030b;
      *(byte *)(lVar51 + 8) = *(byte *)(lVar51 + 8) | 1;
      local_1f8 = (code *)(CONCAT44(local_1f8._4_4_,(uint)*(ushort *)((longlong)*pauVar65 + 2)) | 5)
      ;
      local_1f0 = 0x41e;
      param_3 = (uint *)pauVar41;
      local_1d8 = uVar76;
      uVar76 = FUN_14955dfa8(*(undefined8 *)*pauVar41);
      if ((int)uVar76 == 0) {
        param_3 = (uint *)0x0;
        uVar76 = FUN_1495574f2(*(undefined8 *)(lVar51 + 0x10));
        if ((int)uVar76 != 0) goto LAB_149570e8c;
        lVar56 = *(longlong *)pauVar65[1];
        *(longlong *)(lVar51 + 0x40) = lVar56;
        if (lVar56 == 0) {
          *(undefined4 *)(lVar51 + 0x4c) = 1;
          local_1f8 = *(code **)(lVar51 + 0x38);
          param_3 = (uint *)0x0;
          local_1b0 = pauVar52;
          uVar76 = FUN_1495763b6(*(undefined8 *)(lVar51 + 0x10));
          pauVar79 = (undefined1 (*) [16])(uVar76 & 0xffffffff);
          uVar20 = 1;
        }
        else {
          param_3 = (uint *)(ulonglong)*(ushort *)((longlong)*pauVar65 + 2);
          local_1b0 = pauVar52;
          pauVar79 = (undefined1 (*) [16])FUN_1495764fc(*(undefined8 *)(lVar51 + 0x10));
          if ((int)pauVar79 == 0) {
            local_1f8 = *(code **)(lVar51 + 0x38);
            param_3 = (uint *)0x0;
            uVar27 = FUN_1495763b6(*(undefined8 *)(lVar51 + 0x10));
            pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
          }
          uVar20 = 0;
        }
        *(undefined1 *)(lVar51 + 4) = uVar20;
        pauVar52 = local_1b0;
        param_1 = local_1c8;
        pauVar41 = local_1c0;
      }
      else {
LAB_149570e8c:
        pauVar79 = (undefined1 (*) [16])(uVar76 & 0xffffffff);
      }
      *(uint *)(lVar51 + 8) =
           (*(uint *)(lVar51 + 8) & 0xfffffffb) +
           (uint)(*(short *)((longlong)*pauVar65 + 2) != 8) * 4;
      uVar76 = local_1d8;
    }
    else {
      *(undefined8 *)(lVar51 + 0x18) = 0;
      *(undefined4 *)(lVar51 + 0x28) = 0;
      param_3 = (uint *)0x0;
      uVar27 = FUN_14957643d();
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    }
    pauVar43 = local_1e0;
    if ((int)pauVar79 != 0) goto LAB_14957580f;
    *(undefined1 *)(lVar51 + 2) = 1;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar59 = (ulonglong *)
              ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if (((*(ushort *)((longlong)pauVar52 + lVar51 + 8) |
         *(ushort *)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + 8)) &
        1) == 0) {
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      uVar76 = FUN_149558f85((undefined8 *)(lVar51 + (longlong)pauVar52));
      uVar44 = FUN_149558f85();
      cVar21 = (*pauVar65)[0];
      if (cVar21 == 'f') {
        uVar76 = uVar44 | uVar76;
      }
      else if (cVar21 == 'e') {
        uVar76 = uVar44 & uVar76;
      }
      else if (uVar44 != 0) {
        cVar66 = -0x31 - cVar21;
        uVar72 = 0x40;
        if (-0x40 < (longlong)uVar44) {
          uVar72 = -uVar44;
        }
        param_3 = (uint *)0x0;
        if (-1 < (longlong)uVar44) {
          uVar72 = uVar44;
          cVar66 = cVar21;
        }
        if ((longlong)uVar72 < 0x40) {
          bVar19 = (byte)uVar72;
          if (cVar66 == 'g') {
            uVar76 = uVar76 << (bVar19 & 0x3f);
          }
          else {
            uVar44 = uVar76 >> (bVar19 & 0x3f);
            bVar80 = (longlong)uVar76 < 0;
            uVar76 = uVar44;
            if (bVar80) {
              uVar76 = uVar44 | -1L << (-bVar19 & 0x3f);
            }
          }
        }
        else {
          uVar76 = -(ulonglong)(cVar66 != 'g' && (longlong)uVar76 < 0);
        }
      }
      *puVar59 = uVar76;
      *(ushort *)(puVar59 + 1) = (ushort)puVar59[1] & 0x3e40 | 4;
      uVar76 = local_1d8;
      pauVar52 = local_1b0;
      pauVar42 = local_1d0;
    }
    else if ((*(byte *)((longlong)puVar59 + 9) & 0x24) == 0) {
      *(undefined2 *)(puVar59 + 1) = 1;
    }
    else {
      FUN_14956b5ca();
      pauVar42 = local_1d0;
    }
    break;
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    pdVar77 = (double *)((longlong)pauVar52 + lVar51);
    uVar23 = *(ushort *)((longlong)pauVar52 + lVar51 + 8);
    uVar24 = uVar23 & 0x2c;
    if ((uVar23 & 0x2c) == 0) {
      if ((uVar23 & 0x12) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = FUN_14957a17b(pdVar77);
      }
    }
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    pdVar60 = (double *)((longlong)pauVar52 + lVar51);
    uVar23 = *(ushort *)((longlong)pauVar52 + lVar51 + 8);
    uVar25 = uVar23 & 0x2c;
    if ((uVar23 & 0x2c) == 0) {
      if ((uVar23 & 0x12) == 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = FUN_14957a17b(pdVar60);
      }
    }
    pdVar58 = (double *)((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if ((uVar25 & uVar24 & 4) == 0) {
      if (((*(ushort *)(pdVar60 + 1) | *(ushort *)(pdVar77 + 1)) & 1) == 0) goto LAB_14956d88f;
LAB_14956db9f:
      if ((*(byte *)((longlong)pdVar58 + 9) & 0x24) == 0) {
        *(undefined2 *)(pdVar58 + 1) = 1;
        pauVar41 = local_1c0;
        param_1 = local_1c8;
        pauVar42 = local_1d0;
      }
      else {
        FUN_14956b5ca();
        pauVar41 = local_1c0;
        param_1 = local_1c8;
        pauVar42 = local_1d0;
      }
      break;
    }
    param_3 = (uint *)*pdVar77;
    dVar3 = *pdVar60;
    local_c8 = (undefined1  [8])dVar3;
    switch((*pauVar65)[0]) {
    case 0x69:
      if ((longlong)param_3 < 0) {
        if (((longlong)dVar3 < 0) &&
           ((longlong)*(undefined1 (*) [16])param_3 + 1 < -0x7fffffffffffffff - (longlong)dVar3))
        goto LAB_14956d88f;
      }
      else if ((0 < (longlong)dVar3) &&
              ((undefined1 (*) [16])(0x7fffffffffffffff - (longlong)dVar3) < param_3))
      goto LAB_14956d88f;
      local_c8 = (undefined1  [8])((longlong)*(undefined1 (*) [16])param_3 + (longlong)dVar3);
LAB_14956ddc7:
      auVar46 = local_c8;
      break;
    case 0x6a:
      if ((undefined1 (*) [16])param_3 == (undefined1 (*) [16])&DAT_8000000000000000) {
        if (-1 < (longlong)dVar3) goto LAB_14956d88f;
        local_c8 = (undefined1  [8])ABS(dVar3);
        goto LAB_14956ddc7;
      }
      if ((longlong)param_3 < 1) {
        if (((longlong)dVar3 < 1) ||
           ((ulonglong)-(longlong)param_3 <= 0x7fffffffffffffffU - (longlong)dVar3))
        goto LAB_149570148;
      }
      else if ((-1 < (longlong)dVar3) ||
              (-0x7fffffffffffffff - (longlong)dVar3 <= 1 - (longlong)param_3)) {
LAB_149570148:
        local_c8 = (undefined1  [8])((longlong)dVar3 - (longlong)param_3);
        goto LAB_14956ddc7;
      }
LAB_14956d88f:
      dVar3 = pdVar77[1];
      if (((ulonglong)dVar3 & 8) == 0) {
        if (((ulonglong)dVar3 & 0x24) == 0) {
          dVar82 = 0.0;
          if (((ulonglong)dVar3 & 0x12) != 0) {
            dVar82 = (double)FUN_14956c08d(pdVar77);
          }
        }
        else {
          dVar82 = (double)(longlong)*pdVar77;
        }
      }
      else {
        dVar82 = *pdVar77;
      }
      dVar3 = pdVar60[1];
      if (((ulonglong)dVar3 & 8) == 0) {
        if (((ulonglong)dVar3 & 0x24) == 0) {
          dVar83 = 0.0;
          if (((ulonglong)dVar3 & 0x12) != 0) {
            dVar83 = (double)FUN_14956c08d(pdVar60);
          }
        }
        else {
          dVar83 = (double)(longlong)*pdVar60;
        }
      }
      else {
        dVar83 = *pdVar60;
      }
      switch((*pauVar65)[0]) {
      case 0x69:
        dVar83 = dVar82 + dVar83;
        break;
      case 0x6a:
        dVar83 = dVar83 - dVar82;
        break;
      case 0x6b:
        dVar83 = dVar82 * dVar83;
        break;
      case 0x6c:
        in_XMM1 = ZEXT816(0);
        if ((dVar82 == 0.0) && (!NAN(dVar82))) goto LAB_14956db9f;
        dVar83 = dVar83 / dVar82;
        break;
      default:
        lVar51 = FUN_149558f85(pdVar77);
        lVar56 = FUN_149558f85();
        local_c8 = (undefined1  [8])lVar56;
        if (lVar51 == 0) goto LAB_14956db9f;
        lVar75 = 1;
        if (lVar51 != -1) {
          lVar75 = lVar51;
        }
        dVar83 = (double)(lVar56 % lVar75);
      }
      if ((~(ulonglong)dVar83 & 0x7ff0000000000000) == 0 &&
          ((ulonglong)dVar83 & 0xfffffffffffff) != 0) goto LAB_14956db9f;
      *pdVar58 = dVar83;
      uVar23 = *(ushort *)(pdVar58 + 1) & 0x3e40 | 8;
      goto LAB_14956ddde;
    case 0x6b:
      iVar26 = FUN_149575a3f();
      if (iVar26 != 0) goto LAB_14956d88f;
      auVar46 = local_c8;
      break;
    case 0x6c:
      if ((undefined1 (*) [16])param_3 != (undefined1 (*) [16])0x0) {
        if (((undefined1 (*) [16])param_3 != (undefined1 (*) [16])0xffffffffffffffff) ||
           (dVar3 != -0.0)) {
          local_c8 = (undefined1  [8])((longlong)dVar3 / (longlong)param_3);
          goto LAB_14956ddc7;
        }
        goto LAB_14956d88f;
      }
      goto LAB_14956db9f;
    default:
      if ((undefined1 (*) [16])param_3 == (undefined1 (*) [16])0x0) goto LAB_14956db9f;
      pauVar41 = (undefined1 (*) [16])&DAT_00000001;
      if ((undefined1 (*) [16])param_3 != (undefined1 (*) [16])0xffffffffffffffff) {
        pauVar41 = (undefined1 (*) [16])param_3;
      }
      local_c8 = (undefined1  [8])((longlong)dVar3 % (longlong)pauVar41);
      auVar46 = (undefined1  [8])((longlong)dVar3 % (longlong)pauVar41);
    }
    *pdVar58 = (double)auVar46;
    uVar23 = *(ushort *)(pdVar58 + 1) & 0x3e40 | 4;
LAB_14956ddde:
    *(ushort *)(pdVar58 + 1) = uVar23;
    pauVar41 = local_1c0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    break;
  case 0x6e:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    iVar31 = *(int *)((longlong)*pauVar65 + 0xc);
    puVar33 = (undefined8 *)((longlong)iVar31 * 0x38 + (longlong)pauVar52);
    uVar27 = *(uint *)((longlong)pauVar52 + lVar51 + 8);
    uVar23 = (ushort)uVar27;
    uVar32 = *(uint *)((longlong)pauVar52 + (longlong)iVar26 * 0x38 + 8);
    if (((uVar32 | uVar27) & 1) == 0) {
      puVar64 = (undefined8 *)(lVar51 + (longlong)pauVar52);
      puVar78 = (undefined8 *)((longlong)iVar26 * 0x38 + (longlong)pauVar52);
      if ((uVar27 & 0x12) == 0) {
        local_1d8 = uVar76;
        local_1b0 = pauVar52;
        local_1a8 = pauVar65;
        iVar28 = FUN_14956b936(puVar64,local_1e1,0);
LAB_149572a2c:
        uVar76 = local_1d8;
        pauVar65 = local_1a8;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        if (iVar28 != 0) goto LAB_14957030b;
        uVar23 = *(ushort *)(puVar64 + 1) & 0xfffd;
        uVar32 = (uint)*(ushort *)(puVar78 + 1);
      }
      else {
        local_1d8 = uVar76;
        local_1b0 = pauVar52;
        local_1a8 = pauVar65;
        if (((uVar27 & 0xffff) >> 0xe & 1) != 0) {
          iVar28 = FUN_149558ecc(puVar64);
          goto LAB_149572a2c;
        }
      }
      uVar24 = (ushort)uVar32;
      if ((uVar32 & 0x12) == 0) {
        iVar28 = FUN_14956b936(puVar78,local_1e1,0);
LAB_149572a5b:
        uVar76 = local_1d8;
        pauVar65 = local_1a8;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        if (iVar28 != 0) goto LAB_14957030b;
        uVar24 = *(ushort *)(puVar78 + 1) & 0xfffd;
      }
      else if (((uVar32 & 0xffff) >> 0xe & 1) != 0) {
        iVar28 = FUN_149558ecc(puVar78);
        goto LAB_149572a5b;
      }
      lVar51 = (longlong)*(int *)((longlong)puVar78 + 0xc) +
               (longlong)*(int *)((longlong)puVar64 + 0xc);
      iVar28 = (int)lVar51;
      pauVar65 = local_1a8;
      if (*(int *)((longlong)local_1c0[7] + 0xc) < iVar28) goto LAB_149575787;
      local_1b4 = uVar73;
      iVar29 = FUN_14956b6c8(puVar33,iVar28 + 3,iVar31 == iVar26);
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      uVar73 = local_1b4;
      if (iVar29 != 0) goto LAB_14957030b;
      *(ushort *)(puVar33 + 1) = *(ushort *)(puVar33 + 1) & 0x3e40 | 2;
      if (iVar31 != iVar26) {
        memcpy((void *)puVar33[2],(void *)puVar78[2],(longlong)*(int *)((longlong)puVar78 + 0xc));
        *(ushort *)(puVar78 + 1) = uVar24;
      }
      param_3 = (uint *)(longlong)*(int *)((longlong)puVar64 + 0xc);
      memcpy((void *)((longlong)*(int *)((longlong)puVar78 + 0xc) + puVar33[2]),(void *)puVar64[2],
             (size_t)param_3);
      *(ushort *)(puVar64 + 1) = uVar23;
      *(undefined1 *)(puVar33[2] + lVar51) = 0;
      *(undefined1 *)(puVar33[2] + 1 + lVar51) = 0;
      *(undefined1 *)(puVar33[2] + 2 + lVar51) = 0;
      *(byte *)((longlong)puVar33 + 9) = *(byte *)((longlong)puVar33 + 9) | 2;
      *(int *)((longlong)puVar33 + 0xc) = iVar28;
      *(char *)((longlong)puVar33 + 10) = local_1e1;
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar41 = local_1c0;
      pauVar52 = local_1b0;
      param_1 = local_1c8;
      uVar73 = local_1b4;
      pauVar42 = local_1d0;
    }
    else if ((*(byte *)((longlong)puVar33 + 9) & 0x24) == 0) {
      *(undefined2 *)(puVar33 + 1) = 1;
      pauVar41 = local_1c0;
      param_1 = local_1c8;
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      local_1a8 = pauVar65;
    }
    else {
      local_1d8 = uVar76;
      local_1b0 = pauVar52;
      local_1a8 = pauVar65;
      FUN_14956b5ca();
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar41 = local_1c0;
      pauVar52 = local_1b0;
      param_1 = local_1c8;
      pauVar42 = local_1d0;
    }
    break;
  case 0x6f:
    local_1f8 = (code *)CONCAT71(local_1f8._1_7_,1);
    param_3 = (uint *)FUN_149576289(param_1,*(undefined4 *)((longlong)*pauVar65 + 4),
                                    *(undefined4 *)((longlong)*pauVar65 + 8));
    pauVar43 = local_1e0;
    if ((undefined1 (*) [16])param_3 == (undefined1 (*) [16])0x0) goto LAB_14957030b;
    *(undefined8 *)*(undefined1 (*) [16])((longlong)param_3 + 0x40) = *(undefined8 *)pauVar65[1];
    uVar27 = FUN_14957691b();
    if (uVar27 == 0) goto LAB_149571dd7;
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    goto LAB_14957580f;
  case 0x70:
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar59 = (ulonglong *)((longlong)pauVar52 + lVar51);
    if ((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x24) == 0) {
      *(undefined2 *)(puVar59 + 1) = 1;
    }
    else {
      local_1b0 = pauVar52;
      FUN_14956b5ca(puVar59);
      pauVar52 = local_1b0;
    }
    pauVar42 = local_1d0;
    if ((*(byte *)((longlong)pauVar52 + (longlong)iVar26 * 0x38 + 8) & 1) == 0) {
      *(undefined2 *)(puVar59 + 1) = 4;
      uVar44 = FUN_149558f85();
      *puVar59 = ~uVar44;
      pauVar42 = local_1d0;
    }
    break;
  case 0x71:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    lVar56 = *(longlong *)(lVar51 + 0x18);
    *(longlong *)(lVar51 + 0x18) = lVar56 + 1;
joined_r0x00014956e530:
    param_1 = local_1c8;
    if (lVar56 == 0) goto LAB_14956d2de;
    break;
  case 0x72:
    param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 0xc);
    local_1f8 = (code *)CONCAT71(local_1f8._1_7_,3);
    lVar51 = FUN_149576289(param_1,*(undefined4 *)((longlong)*pauVar65 + 4));
    pauVar43 = local_1e0;
    if (lVar51 == 0) goto LAB_14957030b;
    *(undefined1 *)(lVar51 + 2) = 1;
    *(undefined4 *)(lVar51 + 0x2c) = *(undefined4 *)((longlong)*pauVar65 + 8);
    *(undefined1 *)(lVar51 + 4) = 1;
    *(undefined **)(lVar51 + 0x38) = &DAT_14cc1ee18;
    pauVar42 = local_1d0;
    break;
  case 0x73:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = *(longlong *)((longlong)param_1[6] + 8) + lVar56;
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar56) & 0x24) == 0) {
      *(undefined2 *)(lVar51 + 8) = 4;
      local_1d8 = uVar76;
    }
    else {
      local_1d8 = uVar76;
      FUN_14957a10c(lVar51);
    }
    if (*(char **)pauVar65[1] == (char *)0x0) {
      uVar27 = 0;
      local_1b4 = uVar73;
    }
    else {
      local_1b4 = uVar73;
      sVar36 = strlen(*(char **)pauVar65[1]);
      uVar27 = (uint)sVar36 & 0x3fffffff;
    }
    *(uint *)((longlong)*pauVar65 + 4) = uVar27;
    local_1a8 = pauVar65;
    if (local_1e1 != '\x01') {
      local_1f8 = (code *)0x0;
      param_3 = (uint *)&DAT_ffffffff;
      iVar26 = FUN_14955916b(lVar51);
      pauVar65 = local_1a8;
      pauVar41 = local_1c0;
      uVar73 = local_1b4;
      if (iVar26 != 0) goto LAB_149575787;
      uVar23 = *(ushort *)(lVar51 + 8);
      if (((uVar23 & 2) != 0) && (*(char *)(lVar51 + 10) != local_1e1)) {
        iVar26 = FUN_14956ba6f(lVar51);
        uVar76 = local_1d8;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        uVar73 = local_1b4;
        if (iVar26 != 0) goto LAB_14957030b;
        uVar23 = *(ushort *)(lVar51 + 8);
      }
      *(undefined4 *)(lVar51 + 0x20) = 0;
      *(ushort *)(lVar51 + 8) = uVar23 | 0x800;
      if ((*(char *)((longlong)*pauVar65 + 1) == -7) && (*(longlong *)pauVar65[1] != 0)) {
        FUN_14955d65a(pauVar41);
      }
      *(undefined1 *)((longlong)*pauVar65 + 1) = 0xf9;
      *(undefined8 *)pauVar65[1] = *(undefined8 *)(lVar51 + 0x10);
      uVar27 = *(uint *)(lVar51 + 0xc);
      *(uint *)((longlong)*pauVar65 + 4) = uVar27;
      local_1d0 = (undefined1 (*) [16])0x0;
    }
    uVar73 = local_1b4;
    pauVar65 = local_1a8;
    if (*(int *)((longlong)pauVar41[7] + 0xc) < (int)uVar27) {
LAB_149575787:
      local_1a8 = pauVar65;
      local_1b4 = uVar73;
      param_1 = local_1c8;
      FUN_14956b132(local_1c8,"string or blob too big");
      pauVar79 = (undefined1 (*) [16])&DAT_00000012;
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      uVar73 = local_1b4;
      goto LAB_14957580f;
    }
    (*local_1a8)[0] = 0x47;
    uVar76 = local_1d8;
    pauVar41 = local_1c0;
    param_1 = local_1c8;
LAB_14956eed4:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = *(longlong *)((longlong)param_1[6] + 8) + lVar56;
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar56) & 0x24) == 0) {
      *(undefined2 *)(lVar51 + 8) = 4;
    }
    else {
      FUN_14957a10c();
    }
    *(undefined2 *)(lVar51 + 8) = 0xa02;
    *(undefined8 *)(lVar51 + 0x10) = *(undefined8 *)pauVar65[1];
    *(undefined4 *)(lVar51 + 0xc) = *(undefined4 *)((longlong)*pauVar65 + 4);
    *(char *)(lVar51 + 10) = local_1e1;
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 0xc);
    uVar73 = local_1b4;
    pauVar42 = local_1d0;
    if ((0 < lVar56) &&
       (*(ulonglong *)((longlong)pauVar52 + lVar56 * 0x38) ==
        (ulonglong)*(ushort *)((longlong)*pauVar65 + 2))) {
      *(undefined2 *)(lVar51 + 8) = 0xa10;
    }
    break;
  case 0x74:
    FUN_14956aa2a(param_1);
    *(undefined8 *)
     (*(longlong *)((longlong)param_1[7] + 8) + (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) = 0
    ;
    pauVar42 = local_1d0;
    break;
  case 0x76:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    *(uint *)(lVar51 + 8) =
         (*(uint *)(lVar51 + 8) & 0xfffffff7) + (*(uint *)((longlong)*pauVar65 + 8) & 1) * 8;
    break;
  case 0x77:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
    }
    else {
      FUN_14957a10c(plVar39);
    }
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    lVar56 = *(longlong *)(lVar51 + 0x18);
    *(longlong *)(lVar51 + 0x18) = lVar56 + 1;
    *plVar39 = lVar56;
    pauVar42 = local_1d0;
    break;
  case 0x78:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_c0;
    _local_c8 = auVar6 << 0x40;
    local_138 = (undefined1 (*) [16])((ulonglong)local_138 & 0xffffffff00000000);
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar33 = (undefined8 *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(puVar33 + 1) = 4;
      local_1d8 = uVar76;
    }
    else {
      local_1d8 = uVar76;
      FUN_14957a10c(puVar33);
    }
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    if ((*(byte *)(lVar51 + 8) & 2) == 0) {
      uVar27 = FUN_149576b44(*(undefined8 *)(lVar51 + 0x38),&local_138);
      if (uVar27 != 0) {
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
        uVar76 = local_1d8;
        pauVar43 = local_1e0;
        goto LAB_14957580f;
      }
      if ((uint)local_138 == 0) {
        lVar56 = *(longlong *)(lVar51 + 0x38);
        FUN_149567d86(lVar56);
        lVar56 = *(longlong *)(lVar56 + 0x30);
        if (lVar56 == 0x7fffffffffffffff) {
          *(byte *)(lVar51 + 8) = *(byte *)(lVar51 + 8) | 2;
          local_c8 = (undefined1  [8])0x7fffffffffffffff;
        }
        else {
          local_c8 = (undefined1  [8])(lVar56 + 1);
        }
        local_1d0 = (undefined1 (*) [16])0x0;
      }
      else {
        local_c8 = (undefined1  [8])0x1;
        local_1d0 = (undefined1 (*) [16])0x0;
      }
    }
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 0xc);
    if (lVar56 != 0) {
      lVar75 = *(longlong *)param_1[0x10];
      pauVar55 = pauVar52;
      if (*(longlong *)param_1[0x10] != 0) {
        do {
          lVar71 = lVar75;
          lVar75 = *(longlong *)(lVar71 + 8);
        } while (lVar75 != 0);
        pauVar55 = *(undefined1 (**) [16])(lVar71 + 0x20);
      }
      lVar56 = lVar56 * 0x38;
      local_1b0 = pauVar52;
      lVar75 = FUN_149558f85((longlong *)((longlong)pauVar55 + lVar56));
      *(longlong *)((longlong)pauVar55 + lVar56) = lVar75;
      *(ushort *)((longlong)pauVar55 + lVar56 + 8) =
           *(ushort *)((longlong)pauVar55 + lVar56 + 8) & 0x3e40 | 4;
      pauVar79 = (undefined1 (*) [16])0xd;
      uVar76 = local_1d8;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      if ((lVar75 == 0x7fffffffffffffff) || ((*(byte *)(lVar51 + 8) & 2) != 0)) goto LAB_14957580f;
      auVar46 = local_c8;
      if ((longlong)local_c8 <= lVar75) {
        auVar46 = (undefined1  [8])(lVar75 + 1);
        local_c8 = auVar46;
      }
      *(longlong *)((longlong)pauVar55 + lVar56) = (longlong)auVar46;
      param_3 = (uint *)pauVar52;
      pauVar52 = local_1b0;
    }
    if ((*(byte *)(lVar51 + 8) & 2) != 0) {
      uVar27 = 0;
      do {
        FUN_149555acc(8,local_c8);
        lVar56 = ((ulonglong)local_c8 & 0x3fffffffffffffff) + 1;
        local_c8 = (undefined1  [8])lVar56;
        local_1f8 = (code *)&local_138;
        uVar32 = FUN_149576ba8(*(undefined8 *)(lVar51 + 0x38),0,lVar56,0);
        bVar80 = uVar27 < 99;
        uVar27 = uVar27 + 1;
        param_3 = (uint *)(ulonglong)uVar27;
      } while ((uVar32 == 0 && (uint)local_138 == 0) && bVar80);
      local_1d0 = (undefined1 (*) [16])0x0;
      param_1 = local_1c8;
      if ((uVar32 != 0) || ((uint)local_138 == 0)) {
        pauVar79 = (undefined1 (*) [16])0xd;
        uVar76 = local_1d8;
        pauVar43 = local_1e0;
        if (uVar32 != 0) {
          pauVar79 = (undefined1 (*) [16])(ulonglong)uVar32;
        }
        goto LAB_14957580f;
      }
    }
    *(undefined1 *)(lVar51 + 3) = 0;
    *(undefined4 *)(lVar51 + 0x28) = 0;
    *puVar33 = local_c8;
    uVar76 = local_1d8;
    pauVar42 = local_1d0;
    break;
  case 0x79:
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    pcVar68 = *(code **)((longlong)pauVar52 + (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38);
    if ((*(char *)((longlong)*pauVar65 + 1) == -6) && (*(longlong *)pauVar41[0x13] != 0)) {
      pauVar43 = *(undefined1 (**) [16])
                  (*(longlong *)pauVar41[2] + (longlong)*(char *)(lVar51 + 1) * 0x20);
      lVar56 = *(longlong *)pauVar65[1];
    }
    else {
      lVar56 = 0;
      pauVar43 = (undefined1 (*) [16])0x0;
    }
    uVar23 = *(ushort *)((longlong)*pauVar65 + 2);
    if ((uVar23 & 1) != 0) {
      piVar61 = (int *)((longlong)local_1c8[3] + 0xc);
      *piVar61 = *piVar61 + 1;
      uVar23 = *(ushort *)((longlong)*pauVar65 + 2);
    }
    if ((uVar23 & 0x20) != 0) {
      *(code **)((longlong)pauVar41[3] + 8) = pcVar68;
    }
    puVar33 = (undefined8 *)((longlong)iVar26 * 0x38 + (longlong)pauVar52);
    auStack_b8._0_8_ = puVar33[2];
    _auStack_b8 = CONCAT88(uVar34,auStack_b8._0_8_);
    auStack_a8._4_4_ = *(undefined4 *)((longlong)puVar33 + 0xc);
    local_a0._0_4_ = 0;
    if ((*(byte *)((longlong)puVar33 + 9) & 0x40) != 0) {
      local_a0._0_4_ = *(undefined4 *)puVar33;
    }
    local_a0._4_4_ = auVar89._12_4_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = pcVar68;
    _local_c8 = auVar16 << 0x40;
    param_3 = (uint *)0x0;
    local_1d8 = uVar76;
    uVar27 = FUN_149577303();
    uVar76 = local_1d8;
    *(undefined1 *)(lVar51 + 3) = 0;
    *(undefined4 *)(lVar51 + 0x28) = 0;
    if (uVar27 != 0) {
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      goto LAB_14957580f;
    }
    if (lVar56 != 0) {
      local_1f8 = pcVar68;
      (**(code **)pauVar41[0x13])();
      param_3 = (uint *)pauVar43;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    break;
  case 0x7a:
    uVar27 = *(uint *)((longlong)*pauVar65 + 8);
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    if ((*(char *)((longlong)*pauVar65 + 1) == -6) && (*(longlong *)pauVar41[0x13] != 0)) {
      local_1a0 = *(undefined1 (**) [16])
                   (*(longlong *)pauVar41[2] + (longlong)*(char *)(lVar51 + 1) * 0x20);
      lVar56 = *(longlong *)pauVar65[1];
      if (((*(byte *)((longlong)*pauVar65 + 2) & 2) != 0) && (*(char *)(lVar51 + 4) != '\0')) {
        lVar75 = *(longlong *)(lVar51 + 0x38);
        local_1d8 = uVar76;
        FUN_149567d86(lVar75);
        *(undefined8 *)(lVar51 + 0x58) = *(undefined8 *)(lVar75 + 0x30);
        uVar76 = local_1d8;
      }
    }
    else {
      lVar56 = 0;
      local_1a0 = (undefined1 (*) [16])0x0;
    }
    uVar32 = FUN_149577cab();
    *(undefined8 *)(lVar51 + 0x28) = 0;
    param_1 = local_1c8;
    if (uVar32 != 0) {
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar32;
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    if ((uVar27 & 1) != 0) {
      piVar61 = (int *)((longlong)local_1c8[3] + 0xc);
      *piVar61 = *piVar61 + 1;
      if ((*(code **)pauVar41[0x13] != (code *)0x0) &&
         (local_1b0 = pauVar52, (*(byte *)(lVar56 + 0x40) & 0x80) == 0)) {
        local_1f8 = *(code **)(lVar51 + 0x58);
        param_3 = (uint *)local_1a0;
        (**(code **)pauVar41[0x13])();
        pauVar52 = local_1b0;
        param_1 = local_1c8;
        pauVar42 = local_1d0;
      }
    }
    break;
  case 0x7b:
    iVar26 = *(int *)((longlong)param_1[3] + 0xc);
    *(int *)((longlong)pauVar41[7] + 4) = iVar26;
    *(int *)((longlong)pauVar41[7] + 8) = *(int *)((longlong)pauVar41[7] + 8) + iVar26;
    *(undefined4 *)((longlong)param_1[3] + 0xc) = 0;
    break;
  case 0x7c:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    local_1a0 = (undefined1 (*) [16])(longlong)*(int *)((longlong)*pauVar65 + 0xc);
    uVar27 = *(uint *)pauVar65[1];
    lVar56 = *(longlong *)(lVar51 + 0x38);
    uVar47 = *(undefined8 *)(lVar51 + 0x40);
    pauVar43 = *(undefined1 (**) [16])(lVar56 + 0x30);
    if (pauVar43 == (undefined1 (*) [16])0x0) {
      pauVar43 = (undefined1 (*) [16])FUN_149577182(uVar47);
      *(undefined1 (**) [16])(lVar56 + 0x30) = pauVar43;
      if (pauVar43 == (undefined1 (*) [16])0x0) {
        pauVar79 = (undefined1 (*) [16])&DAT_00000007;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        goto LAB_14957580f;
      }
      *(short *)pauVar43[1] = (short)uVar27;
    }
    if (*(char *)(lVar56 + 0x58) == '\0') {
      param_3 = (uint *)(*(longlong *)(lVar56 + 0x38) + 0x10);
    }
    else {
      if (*(char *)(lVar56 + 0x59) == '\0') {
        lVar51 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar56 + 0x18) + 0x10) + 4) * 0x50 +
                 *(longlong *)(*(longlong *)(lVar56 + 0x18) + 0x18);
      }
      else {
        lVar51 = *(longlong *)(lVar56 + 0x10);
      }
      param_3 = *(uint **)(lVar51 + 0x28);
    }
    FUN_1495771ce(uVar47);
    if (0 < (int)uVar27) {
      local_1d0 = (undefined1 (*) [16])0x0;
      lVar51 = 0;
      do {
        pauVar41 = local_1c0;
        if ((*(byte *)(*(longlong *)((longlong)*pauVar43 + 8) + 8 + lVar51) & 1) != 0)
        goto LAB_14956d2de;
        lVar51 = lVar51 + 0x38;
      } while ((ulonglong)uVar27 * 0x38 - lVar51 != 0);
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    iVar26 = FUN_14957b86a();
    pauVar41 = local_1c0;
    param_3 = (uint *)pauVar43;
joined_r0x0001495721c6:
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    if (iVar26 != 0) goto LAB_14956d2de;
    break;
  case 0x7d:
    lVar51 = *(longlong *)
              (*(longlong *)
                (*(longlong *)((longlong)param_1[7] + 8) +
                (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 0x38);
    if (*(char *)(lVar51 + 0x58) == '\0') {
      piVar37 = *(int **)(lVar51 + 0x38);
      piVar61 = piVar37 + 4;
    }
    else {
      if (*(char *)(lVar51 + 0x59) == '\0') {
        lVar51 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x10) + 4) * 0x50 +
                 *(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x18);
      }
      else {
        lVar51 = *(longlong *)(lVar51 + 0x10);
      }
      piVar61 = *(int **)(lVar51 + 0x28);
      piVar37 = (int *)(lVar51 + 0x14);
    }
    puVar33 = (undefined8 *)
              ((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52);
    iVar26 = *piVar37;
    if (*(int *)(puVar33 + 4) < iVar26) {
      local_1d8 = uVar76;
      iVar31 = FUN_14956b6c8(puVar33,iVar26,0);
      if (iVar31 != 0) {
        pauVar79 = (undefined1 (*) [16])&DAT_00000007;
        uVar76 = local_1d8;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        goto LAB_14957580f;
      }
      uVar23 = *(ushort *)(puVar33 + 1);
      pvVar45 = (void *)puVar33[2];
    }
    else {
      pvVar45 = (void *)puVar33[3];
      puVar33[2] = pvVar45;
      uVar23 = *(ushort *)(puVar33 + 1) & 0x2d;
      *(ushort *)(puVar33 + 1) = uVar23;
      local_1d8 = uVar76;
    }
    param_3 = (uint *)(longlong)iVar26;
    *(int *)((longlong)puVar33 + 0xc) = iVar26;
    *(ushort *)(puVar33 + 1) = uVar23 & 0x3e40 | 0x10;
    memcpy(pvVar45,piVar61,(size_t)param_3);
    *(undefined4 *)
     (*(longlong *)
       (*(longlong *)((longlong)param_1[7] + 8) + (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 8)
     + 0x28) = 0;
    local_1d0 = (undefined1 (*) [16])0x0;
    uVar76 = local_1d8;
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    break;
  case 0x7e:
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = *(longlong *)((longlong)param_1[6] + 8) + lVar56;
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar56) & 0x24) == 0) {
      *(undefined2 *)(lVar51 + 8) = 4;
      local_1d8 = uVar76;
      local_1b4 = uVar73;
    }
    else {
      local_1d8 = uVar76;
      local_1b4 = uVar73;
      FUN_14957a10c(lVar51);
    }
    lVar56 = *(longlong *)
              (*(longlong *)
                (*(longlong *)((longlong)param_1[7] + 8) +
                (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 0x38);
    local_1a8 = pauVar65;
    FUN_149567d86(lVar56);
    uVar27 = *(uint *)(lVar56 + 0x40);
    param_3 = (uint *)(ulonglong)uVar27;
    uVar73 = local_1b4;
    pauVar65 = local_1a8;
    if (*(uint *)((longlong)pauVar41[7] + 0xc) < uVar27) goto LAB_149575787;
    uVar32 = *(int *)(*(longlong *)(lVar56 + 0x88) + 0x58) - (int)*(undefined8 *)(lVar56 + 0x38);
    uVar73 = 0;
    if (0 < (int)uVar32) {
      uVar73 = uVar32;
    }
    if ((int)(uint)*(ushort *)(lVar56 + 0x44) <= (int)uVar32) {
      uVar73 = (uint)*(ushort *)(lVar56 + 0x44);
    }
    if (uVar73 < uVar27) {
      uVar73 = FUN_14957a77f();
      if (uVar73 != 0) {
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar73;
        uVar76 = local_1d8;
        pauVar65 = local_1a8;
        pauVar41 = local_1c0;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        uVar73 = local_1b4;
        goto LAB_14957580f;
      }
    }
    else {
      *(undefined8 *)(lVar51 + 0x10) = *(undefined8 *)(lVar56 + 0x38);
      *(undefined2 *)(lVar51 + 8) = 0x1010;
      *(uint *)(lVar51 + 0xc) = uVar27;
    }
    pauVar65 = local_1a8;
    uVar73 = local_1b4;
    param_1 = local_1c8;
    uVar76 = local_1d8;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    if (((*(int *)((longlong)*local_1a8 + 0xc) == 0) && ((*(byte *)(lVar51 + 9) & 0x10) != 0)) &&
       (iVar26 = FUN_14955903b(), pauVar41 = local_1c0, pauVar43 = local_1e0, pauVar42 = local_1d0,
       iVar26 != 0)) goto LAB_14957030b;
    break;
  case 0x7f:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar33 = (undefined8 *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(puVar33 + 1) = 4;
    }
    else {
      FUN_14957a10c(puVar33);
    }
    pcVar69 = *(char **)(*(longlong *)((longlong)param_1[7] + 8) +
                        (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    if (pcVar69[2] == '\0') {
      if (pcVar69[3] == '\0') {
        pcVar53 = *(char **)(pcVar69 + 0x38);
        if (*pcVar69 == '\x02') {
          pcVar69 = local_c8;
          local_1b4 = uVar73;
          uVar27 = (**(code **)(**(longlong **)pcVar53 + 0x60))(pcVar53,pcVar69);
          uVar73 = local_1b4;
          FUN_14956b29d();
          local_1d0 = (undefined1 (*) [16])0x0;
          if (uVar27 != 0) {
LAB_1495740f8:
            pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
            pauVar41 = local_1c0;
            pauVar43 = local_1e0;
            goto LAB_14957580f;
          }
        }
        else {
          if (*pcVar53 != '\0') {
            uVar27 = FUN_14957a585();
            if (uVar27 != 0) goto LAB_1495740f8;
            if (pcVar69[2] != '\0') {
              *(undefined2 *)(puVar33 + 1) = 1;
              local_1d0 = (undefined1 (*) [16])0x0;
              pauVar41 = local_1c0;
              pauVar42 = local_1d0;
              break;
            }
            pcVar53 = *(char **)(pcVar69 + 0x38);
          }
          FUN_149567d86();
          pcVar69 = pcVar53 + 0x30;
          local_1d0 = (undefined1 (*) [16])0x0;
        }
      }
      else {
        pcVar69 = pcVar69 + 0x58;
      }
      *puVar33 = *(undefined8 *)pcVar69;
      pauVar41 = local_1c0;
      pauVar42 = local_1d0;
    }
    else {
      *(undefined2 *)(puVar33 + 1) = 1;
      pauVar41 = local_1c0;
      pauVar42 = local_1d0;
    }
    break;
  case 0x80:
    pcVar69 = *(char **)(*(longlong *)((longlong)param_1[7] + 8) +
                        (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    pcVar69[2] = '\x01';
    pcVar69[0x28] = '\0';
    pcVar69[0x29] = '\0';
    pcVar69[0x2a] = '\0';
    pcVar69[0x2b] = '\0';
    if (*pcVar69 == '\0') {
      puVar40 = *(undefined1 **)(pcVar69 + 0x38);
      FUN_145e3b961();
      *(undefined8 *)(puVar40 + 0x18) = 0;
      *puVar40 = 1;
      pauVar42 = local_1d0;
    }
    break;
  case 0x82:
  case 0x83:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    iVar26 = *(int *)((longlong)*pauVar65 + 8);
    if ((*(byte *)((longlong)*pauVar65 + 2) & 1) != 0) {
      piVar61 = (int *)((longlong)param_1[3] + 0xc);
      *piVar61 = *piVar61 + 1;
    }
    puVar33 = (undefined8 *)((longlong)iVar26 * 0x38 + (longlong)pauVar52);
    if (((*(byte *)((longlong)puVar33 + 9) & 0x40) != 0) &&
       (uVar27 = FUN_149558ecc(puVar33), uVar27 != 0)) {
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    if ((*pauVar65)[0] == -0x7e) {
      uVar27 = FUN_1495780dc();
    }
    else {
      uStack_c0 = (longlong)*(int *)((longlong)puVar33 + 0xc);
      local_c8 = (undefined1  [8])puVar33[2];
      stack0xffffffffffffff50 =
           (ulonglong)((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
      auStack_a8._0_2_ = *(undefined2 *)pauVar65[1];
      param_3 = (uint *)0x0;
      uVar27 = FUN_149577303();
      *(undefined4 *)(lVar51 + 0x28) = 0;
    }
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    pauVar41 = local_1c0;
    pauVar43 = local_1e0;
    if (uVar27 != 0) goto LAB_14957580f;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 0x84:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    auStack_b8[2] = 0;
    auStack_b8._0_2_ = *(ushort *)((longlong)*pauVar65 + 0xc);
    uStack_c0 = (ulonglong)((longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38 + (longlong)pauVar52)
    ;
    local_c8 = (undefined1  [8])*(undefined8 *)(lVar51 + 0x40);
    local_1f8 = (code *)&local_138;
    param_3 = (uint *)0x0;
    uVar27 = FUN_149576ba8();
    if ((uVar27 != 0) || (((uint)local_138 == 0 && (uVar27 = FUN_149577cab(), uVar27 != 0)))) {
LAB_1495747c6:
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    *(undefined8 *)(lVar51 + 0x28) = 0;
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    break;
  case 0x85:
  case 0x86:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    if ((**(char **)(lVar51 + 0x38) != '\0') && (uVar27 = FUN_14957a585(lVar51), uVar27 != 0)) {
LAB_149574248:
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    if (*(char *)(lVar51 + 2) != '\0') {
      lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
      if ((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x24) == 0) {
        *(undefined2 *)((longlong)pauVar52 + lVar51 + 8) = 1;
      }
      else {
        FUN_14956b5ca();
      }
      goto LAB_14956dafc;
    }
    param_3 = (uint *)local_c8;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uStack_c0;
    _local_c8 = auVar10 << 0x40;
    uVar27 = FUN_149578317(pauVar41);
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    pauVar43 = local_1e0;
    if (uVar27 != 0) goto LAB_14957580f;
    if ((*pauVar65)[0] == -0x7b) {
      lVar56 = *(longlong *)
                (*(longlong *)((longlong)param_1[7] + 8) +
                (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 8);
      *(undefined1 *)(lVar56 + 2) = 0;
      *(undefined1 (*) [8])(lVar56 + 0x58) = local_c8;
      *(undefined1 *)(lVar56 + 3) = 1;
      *(undefined8 *)(lVar56 + 0x20) = *(undefined8 *)pauVar65[1];
      *(longlong *)(lVar56 + 0x30) = lVar51;
    }
    else {
      lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
      puVar33 = (undefined8 *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
      if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
        *(undefined2 *)(puVar33 + 1) = 4;
      }
      else {
        FUN_14957a10c();
      }
      *puVar33 = local_c8;
    }
    goto LAB_14956dafc;
  case 0x87:
    if (*(char *)(*(longlong *)
                   (*(longlong *)((longlong)param_1[7] + 8) +
                   (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 3) != '\0') {
      uVar27 = FUN_149578502();
      goto LAB_149571dcf;
    }
    break;
  case 0x88:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
    }
    else {
      FUN_14957a10c(plVar39);
    }
    *(undefined2 *)(plVar39 + 1) = 1;
    if (*(int *)((longlong)pauVar41[0xd] + 8) + 1 < *(int *)((longlong)pauVar41[0xc] + 0xc)) {
      *(undefined1 *)((longlong)param_1[0xc] + 2) = 2;
      pauVar79 = (undefined1 (*) [16])&DAT_00000006;
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    iVar26 = *(int *)((longlong)*pauVar65 + 0xc);
    param_3 = (uint *)local_c8;
    auVar8._12_4_ = 0;
    auVar8._0_12_ = stack0xffffffffffffff3c;
    _local_c8 = auVar8 << 0x20;
    local_1b0 = pauVar52;
    uVar27 = FUN_1495785a3();
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    *(undefined2 *)(plVar39 + 1) = 4;
    *plVar39 = (longlong)(int)local_c8._0_4_;
    pauVar43 = local_1e0;
    param_1 = local_1c8;
    if (uVar27 != 0) goto LAB_14957580f;
    if (local_c8._0_4_ != 0) {
      uVar30 = *(undefined4 *)((longlong)*pauVar65 + 4);
      lVar51 = *(longlong *)pauVar41[2];
      param_3 = *(uint **)(lVar51 + 0x18 + (longlong)iVar26 * 0x20);
      plVar39 = *(longlong **)*(undefined1 (*) [16])((longlong)param_3 + 0x10);
      if (plVar39 != (longlong *)0x0) {
        do {
          if (*(int *)(plVar39[2] + 0x38) == local_c8._0_4_) {
            *(undefined4 *)(plVar39[2] + 0x38) = uVar30;
          }
          plVar39 = (longlong *)*plVar39;
        } while (plVar39 != (longlong *)0x0);
        param_3 = *(uint **)(lVar51 + (longlong)iVar26 * 0x20 + 0x18);
      }
      for (puVar33 = *(undefined8 **)
                      ((longlong)*(undefined1 (*) [16])((longlong)param_3 + 0x20) + 8);
          puVar33 != (undefined8 *)0x0; puVar33 = (undefined8 *)*puVar33) {
        param_3 = (uint *)puVar33[2];
        if (*(int *)((longlong)*(undefined1 (*) [16])((longlong)param_3 + 0x50) + 8) ==
            local_c8._0_4_) {
          *(undefined4 *)((longlong)*(undefined1 (*) [16])((longlong)param_3 + 0x50) + 8) = uVar30;
        }
      }
      local_1e0 = (undefined1 (*) [16])
                  CONCAT71((int7)(int3)((uint)iVar26 >> 8),(char)iVar26 + '\x01');
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar52 = local_1b0;
    pauVar42 = local_1d0;
    break;
  case 0x89:
    auVar12._12_4_ = 0;
    auVar12._0_12_ = auVar17;
    _local_c8 = auVar12 << 0x20;
    local_1d0 = (undefined1 (*) [16])0x0;
    param_3 = (uint *)(undefined1 (*) [16])0x0;
    if (*(int *)((longlong)*pauVar65 + 0xc) != 0) {
      param_3 = (uint *)local_c8;
    }
    uVar27 = FUN_14957643d();
    if (*(int *)((longlong)*pauVar65 + 0xc) != 0) {
      piVar61 = (int *)((longlong)param_1[3] + 0xc);
      *piVar61 = *piVar61 + local_c8._0_4_;
      lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 0xc);
      if (0 < lVar51) {
        plVar39 = (longlong *)((longlong)pauVar52 + lVar51 * 0x38);
        *plVar39 = *plVar39 + (longlong)(int)local_c8._0_4_;
      }
    }
joined_r0x0001495744da:
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    goto joined_r0x0001495744da;
  case 0x8a:
    if (**(char **)(*(longlong *)((longlong)param_1[7] + 8) +
                   (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) != '\x01') {
      local_1d0 = (undefined1 (*) [16])0x0;
      param_3 = (uint *)0x0;
      uVar27 = FUN_14957643d();
      goto LAB_149571efc;
    }
    FUN_14956ad1a();
    pauVar42 = local_1d0;
    break;
  case 0x8b:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
    }
    else {
      FUN_14957a10c(plVar39);
    }
    auVar15._12_4_ = 0;
    auVar15._0_12_ = stack0xffffffffffffff3c;
    _local_c8 = auVar15 << 0x20;
    param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 0xc);
    uVar27 = FUN_1495764fc();
    if (uVar27 != 0) goto LAB_149574248;
    *plVar39 = (longlong)(int)local_c8._0_4_;
LAB_149573550:
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 0x8c:
    pcVar69 = (char *)((longlong)pauVar41[6] + 10);
    *pcVar69 = *pcVar69 + '\x01';
    local_1d0 = (undefined1 (*) [16])0x0;
    param_3 = (uint *)0x0;
    uVar27 = FUN_14955b41c();
    pcVar69 = (char *)((longlong)pauVar41[6] + 10);
    *pcVar69 = *pcVar69 + -1;
LAB_149571efc:
    pauVar42 = local_1d0;
    if (uVar27 == 0) break;
    goto LAB_149571f04;
  case 0x8d:
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    if (*(longlong *)pauVar65[1] == 0) {
      local_1b0 = pauVar52;
      FUN_149578912(*(undefined8 *)(*(longlong *)pauVar41[2] + 0x18 + (longlong)iVar26 * 0x20));
      pbVar62 = (byte *)((longlong)pauVar41[2] + 0xc);
      *pbVar62 = *pbVar62 & 0xef;
      param_3 = (uint *)local_180;
      pauVar79 = (undefined1 (*) [16])FUN_149578a25(pauVar41,iVar26);
      pbVar62 = (byte *)((longlong)pauVar41[2] + 0xc);
      *pbVar62 = *pbVar62 | 1;
      *(byte *)((longlong)local_1c8[0xc] + 8) = *(byte *)((longlong)local_1c8[0xc] + 8) & 0xfc;
    }
    else {
      auStack_b8._0_4_ = iVar26;
      auVar89 = _auStack_b8;
      uStack_c0 = (ulonglong)local_180;
      local_c8 = (undefined1  [8])pauVar41;
      iStack_ac = auVar87._12_4_;
      auStack_b8._0_8_ = auVar89._0_8_;
      auStack_b8._8_4_ = 0;
      local_1f8 = *(code **)pauVar65[1];
      local_1b0 = pauVar52;
      lVar51 = FUN_14955a402(pauVar41,"SELECT*FROM\"%w\".%s WHERE %s ORDER BY rowid",
                             *(undefined8 *)(*(longlong *)pauVar41[2] + (longlong)iVar26 * 0x20),
                             "sqlite_master");
      pauVar43 = local_1e0;
      if (lVar51 == 0) {
        FUN_149557f5c(pauVar41);
        param_1 = local_1c8;
        goto LAB_14957030b;
      }
      *(undefined1 *)((longlong)pauVar41[0xb] + 5) = 1;
      auStack_b8._4_4_ = 0;
      iStack_ac = 0;
      pcVar68 = FUN_149578ecb;
      pauVar79 = (undefined1 (*) [16])FUN_14955b41c(pauVar41,lVar51);
      if ((int)pauVar79 == 0) {
        pauVar79 = (undefined1 (*) [16])(ulonglong)(uint)auStack_b8._4_4_;
      }
      param_3 = (uint *)pcVar68;
      if (iStack_ac == 0 && (int)pauVar79 == 0) {
        local_1f8 = (code *)0x14bd4063a;
        pcVar69 = "database corruption";
        pauVar79 = (undefined1 (*) [16])&DAT_0000000b;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]");
        param_3 = (uint *)pcVar69;
      }
      FUN_14955d65a(pauVar41,lVar51);
      *(undefined1 *)((longlong)pauVar41[0xb] + 5) = 0;
    }
    if ((int)pauVar79 != 0) {
      FUN_149557f5c(pauVar41);
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      if ((int)pauVar79 != 7) goto LAB_14957580f;
      goto LAB_14957030b;
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar52 = local_1b0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    break;
  case 0x8e:
    uVar27 = FUN_14957917f();
LAB_149571dcf:
    if (uVar27 == 0) goto LAB_149571dd7;
LAB_149571f04:
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    pauVar43 = local_1e0;
    goto LAB_14957580f;
  case 0x8f:
    param_3 = (uint *)0x0;
    lVar51 = FUN_14958256b();
    if (lVar51 != 0) {
      if ((pauVar41 == (undefined1 (*) [16])0x0) ||
         (*(longlong *)((longlong)pauVar41[0x2d] + 8) == 0)) {
        piVar61 = (int *)(lVar51 + 0x3c);
        *piVar61 = *piVar61 + -1;
        if (*piVar61 != 0) goto LAB_149572248;
      }
      FUN_149585e6d();
    }
    goto LAB_149572248;
  case 0x90:
    param_3 = (uint *)0x0;
    lVar51 = FUN_14958256b();
    if (lVar51 != 0) {
      lVar56 = *(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x10);
      if (lVar56 == lVar51) {
        puVar33 = (undefined8 *)(*(longlong *)(lVar51 + 0x18) + 0x10);
      }
      else {
        do {
          lVar75 = lVar56;
          if (lVar75 == 0) goto LAB_149574d61;
          lVar56 = *(longlong *)(lVar75 + 0x28);
        } while (*(longlong *)(lVar75 + 0x28) != lVar51);
        puVar33 = (undefined8 *)(lVar75 + 0x28);
      }
      *puVar33 = *(undefined8 *)(lVar51 + 0x28);
LAB_149574d61:
      FUN_149582813();
    }
LAB_149572248:
    pbVar62 = (byte *)((longlong)pauVar41[2] + 0xc);
    *pbVar62 = *pbVar62 | 1;
    pauVar42 = local_1d0;
    break;
  case 0x91:
    param_3 = (uint *)0x0;
    lVar51 = FUN_14958256b();
    pauVar42 = local_1d0;
    if (lVar51 != 0) {
      if (*(longlong *)(lVar51 + 0x28) == *(longlong *)(lVar51 + 0x30)) {
        param_3 = (uint *)0x0;
        lVar56 = FUN_14958201d(*(longlong *)(lVar51 + 0x30) + 8,*(undefined8 *)(lVar51 + 8));
        lVar56 = *(longlong *)(lVar56 + 0x10);
        if ((lVar56 != 0) && (lVar75 = *(longlong *)(lVar56 + 0x68), lVar75 != 0)) {
          if (lVar75 == lVar51) {
            puVar33 = (undefined8 *)(lVar56 + 0x68);
          }
          else {
            do {
              lVar56 = lVar75;
              lVar75 = *(longlong *)(lVar56 + 0x40);
              if (lVar75 == 0) goto LAB_149571846;
            } while (lVar75 != lVar51);
            puVar33 = (undefined8 *)(lVar56 + 0x40);
          }
          *puVar33 = *(undefined8 *)(lVar75 + 0x40);
        }
      }
LAB_149571846:
      FUN_1495536cd();
      pbVar62 = (byte *)((longlong)pauVar41[2] + 0xc);
      *pbVar62 = *pbVar62 | 1;
      pauVar42 = local_1d0;
    }
    break;
  case 0x92:
    uVar27 = *(uint *)((longlong)*pauVar65 + 8);
    lVar51 = *(longlong *)pauVar65[1];
    local_170 = (longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38;
    local_1a0 = (undefined1 (*) [16])(longlong)*(int *)((longlong)*pauVar65 + 4);
    iVar26 = *(int *)((longlong)pauVar52 + local_170);
    pauVar41 = *(undefined1 (**) [16])
                (*(longlong *)pauVar41[2] + 8 +
                (ulonglong)*(ushort *)((longlong)*pauVar65 + 2) * 0x20);
    puVar33 = *(undefined8 **)((longlong)*pauVar41 + 8);
    uVar34 = *(undefined8 *)(puVar33[1] + 0x30);
    local_1d8 = uVar76;
    local_1b0 = pauVar52;
    local_1a8 = pauVar65;
    auStack_b8._0_8_ = uVar47;
    if ((*(char *)((longlong)pauVar41[1] + 1) != '\0') &&
       (piVar61 = (int *)((longlong)pauVar41[1] + 4), *piVar61 = *piVar61 + 1,
       *(char *)((longlong)pauVar41[1] + 2) == '\0')) {
      FUN_14956624a(pauVar41);
    }
    local_68 = local_1c0;
    uStack_c0 = *puVar33;
    local_c8 = (undefined1  [8])puVar33;
    uVar32 = *(uint *)((longlong)puVar33 + 0x3c);
    auStack_b8._8_4_ = uVar32;
    iStack_ac = iVar26 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = stack0xffffffffffffff50;
    _auStack_b8 = auVar11 << 0x40;
    local_70 = 0;
    uStack_98 = 0;
    _auStack_a8 = (undefined1  [16])0x0;
    local_88 = &local_138;
    local_90 = 0;
    local_80 = 0x3b9aca0000000064;
    local_78 = 0;
    local_74 = 0x100;
    local_190 = pauVar41;
    if (uVar32 != 0) {
      pauVar65 = (undefined1 (*) [16])((ulonglong)(uVar32 >> 3) + 1);
      pvVar45 = (void *)FUN_145e3bd67(pauVar65);
      if (pvVar45 == (void *)0x0) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = stack0xffffffffffffff50;
        _auStack_b8 = auVar14 << 0x40;
      }
      else {
        memset(pvVar45,0,(size_t)pauVar65);
        auStack_b8._0_8_ = pvVar45;
        local_70 = FUN_149565030(*(undefined4 *)(puVar33 + 6));
        param_3 = (uint *)pauVar65;
        if (local_70 != 0) {
          uVar32 = (uint)(0x40000000 / (ulonglong)*(uint *)(puVar33 + 6));
          if (uVar32 < (uint)auStack_b8._8_4_) {
            uVar32 = uVar32 + 1;
            pbVar62 = (byte *)(auStack_b8._0_8_ + (ulonglong)(uVar32 >> 3));
            *pbVar62 = *pbVar62 | (byte)(1 << ((byte)uVar32 & 7));
          }
          local_a0 = (undefined1 (*) [16])"Main freelist: ";
          uVar32 = *(uint *)(*(longlong *)(puVar33[3] + 0x50) + 0x20);
          param_3 = (uint *)(ulonglong)
                            ((uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18);
          FUN_149582d86(local_c8,1);
          local_a0 = (undefined1 (*) [16])0x0;
          if (*(char *)((longlong)puVar33 + 0x21) == '\0') {
            if (*(int *)(*(longlong *)(puVar33[3] + 0x50) + 0x40) != 0) {
              FUN_149582f8c(local_c8,"incremental_vacuum enabled with a max rootpage of zero");
            }
          }
          else {
            param_3 = (uint *)0x0;
            if (0 < (int)uVar27) {
              uVar76 = 0;
              param_3 = (uint *)0x0;
              do {
                uVar32 = *(uint *)(lVar51 + 4 + uVar76 * 4);
                if ((int)param_3 <= (int)uVar32) {
                  param_3 = (uint *)(ulonglong)uVar32;
                }
                uVar76 = uVar76 + 1;
              } while (uVar27 != uVar76);
            }
            uVar32 = *(uint *)(*(longlong *)(puVar33[3] + 0x50) + 0x34);
            if ((uint)param_3 !=
                (uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18
                )) {
              FUN_149582f8c(local_c8,"max rootpage (%d) disagrees with header (%d)");
            }
          }
          *(ulonglong *)(puVar33[1] + 0x30) = *(ulonglong *)(puVar33[1] + 0x30) & 0xffffffffffdfffff
          ;
          iVar26 = iStack_ac;
          if (iStack_ac != 0 && 0 < (int)uVar27) {
            uVar76 = 1;
            do {
              iVar31 = *(int *)(lVar51 + uVar76 * 4);
              if (iVar31 != 0) {
                if ((1 < iVar31) && (*(char *)((longlong)puVar33 + 0x21) != '\0')) {
                  FUN_14958305a(local_c8,iVar31,1,0);
                }
                param_3 = (uint *)&local_140;
                FUN_14958310f(local_c8);
                iVar26 = iStack_ac;
              }
            } while ((uVar76 < uVar27) && (uVar76 = uVar76 + 1, iVar26 != 0));
          }
          *(undefined8 *)(puVar33[1] + 0x30) = uVar34;
          if (iVar26 != 0 && auStack_b8._8_4_ != 0) {
            uVar27 = 0xffffffff;
            do {
              uVar32 = uVar27 + 2;
              if ((*(byte *)(auStack_b8._0_8_ + (ulonglong)(uVar32 >> 3)) >> (uVar32 & 7) & 1) == 0)
              {
                uVar48 = 0;
                if (1 < uVar32) {
                  uVar48 = uVar27 % (*(uint *)((longlong)puVar33 + 0x34) / 5 + 1);
                  uVar67 = uVar27 - uVar48;
                  param_3 = (uint *)(ulonglong)uVar67;
                  uVar48 = ((uVar27 - uVar48) + 1 ==
                           (int)(0x40000000 / (ulonglong)*(uint *)(puVar33 + 6))) + uVar67 + 2;
                }
                if ((uVar32 != uVar48) || (*(char *)((longlong)puVar33 + 0x21) == '\0')) {
                  param_3 = (uint *)(ulonglong)uVar32;
                  FUN_149582f8c(local_c8);
                  if ((1 << ((byte)uVar32 & 7) &
                      (uint)*(byte *)(auStack_b8._0_8_ + (ulonglong)(uVar32 >> 3))) != 0)
                  goto LAB_14956d754;
                }
              }
              else {
LAB_14956d754:
                uVar48 = 0;
                if (1 < uVar32) {
                  uVar48 = uVar27 % (*(uint *)((longlong)puVar33 + 0x34) / 5 + 1);
                  uVar67 = uVar27 - uVar48;
                  param_3 = (uint *)(ulonglong)uVar67;
                  uVar48 = ((uVar27 - uVar48) + 1 ==
                           (int)(0x40000000 / (ulonglong)*(uint *)(puVar33 + 6))) + uVar67 + 2;
                }
                if ((uVar32 == uVar48) && (*(char *)((longlong)puVar33 + 0x21) != '\0')) {
                  param_3 = (uint *)(ulonglong)uVar32;
                  FUN_149582f8c(local_c8);
                }
              }
              if ((uint)auStack_b8._8_4_ < uVar27 + 3) break;
              uVar27 = uVar27 + 1;
            } while (iStack_ac != 0);
          }
          goto LAB_14957193d;
        }
      }
      auStack_a8._4_4_ = 1;
    }
LAB_14957193d:
    FUN_14956234e(local_70);
    FUN_145e3b961();
    pauVar65 = local_1a8;
    if (auStack_a8._4_4_ == 0) {
      iVar26 = auStack_a8._0_4_;
    }
    else {
      if ((local_74 & 0x400) != 0) {
        if (local_88 != (undefined8 *)0x0) {
          FUN_14955d65a();
        }
        local_74 = CONCAT11(local_74._1_1_,(undefined1)local_74) & 0xfbff;
      }
      local_80 = local_80 & 0xffffffff00000000;
      local_78 = 0;
      local_88 = (undefined8 *)0x0;
      iVar26 = auStack_a8._0_4_ + 1;
      auStack_a8._0_4_ = iVar26;
    }
    pauVar41 = local_190;
    param_1 = local_1c8;
    if (iVar26 == 0) {
      if ((local_74 & 0x400) != 0) {
        if (local_88 != (undefined8 *)0x0) {
          FUN_14955d65a();
        }
        local_74 = CONCAT11(local_74._1_1_,(undefined1)local_74) & 0xfbff;
      }
      local_80 = local_80 & 0xffffffff00000000;
      local_78 = 0;
      local_88 = (undefined8 *)0x0;
    }
    if (*(char *)((longlong)pauVar41[1] + 1) != '\0') {
      piVar61 = (int *)((longlong)pauVar41[1] + 4);
      *piVar61 = *piVar61 + -1;
      if (*piVar61 == 0) {
        FUN_1495662d2();
      }
    }
    puVar33 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      *(undefined1 *)((longlong)local_88 + (ulonglong)local_78) = 0;
      if ((local_80._4_4_ != 0) && ((local_74 & 0x400) == 0)) {
        puVar33 = (undefined8 *)FUN_14955d93a();
      }
    }
    pauVar42 = local_1a0;
    pauVar55 = local_1b0;
    if ((*(byte *)((longlong)local_1b0 + (longlong)local_1a0 * 0x38 + 9) & 0x24) == 0) {
      *(undefined2 *)((longlong)local_1b0 + (longlong)local_1a0 * 0x38 + 8) = 1;
    }
    else {
      FUN_14956b5ca();
    }
    pauVar52 = local_1b0;
    if (iVar26 != 0) {
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      if (puVar33 == (undefined8 *)0x0) goto LAB_14957030b;
      plVar39 = (longlong *)((longlong)*local_1b0 + local_170);
      *plVar39 = *plVar39 - (longlong)(iVar26 + -1);
      local_1f8 = FUN_145e3b961;
      param_3 = (uint *)&DAT_ffffffff;
      FUN_14955916b();
    }
    uVar76 = local_1d8;
    pauVar43 = local_1e0;
    pauVar41 = local_1c0;
    if (((*(byte *)((longlong)pauVar55 + (longlong)pauVar42 * 0x38 + 8) & 2) != 0) &&
       (*(char *)((longlong)pauVar55 + (longlong)pauVar42 * 0x38 + 10) != local_1e1)) {
      FUN_14956ba6f();
      pauVar41 = local_1c0;
    }
LAB_14956d64d:
    if (*(int *)pauVar41[0x17] != 0) goto LAB_149570411;
    while ((pauVar42 = local_1d0, uVar73 <= (uint)uVar76 &&
           (*(code **)pauVar41[0x1e] != (code *)0x0))) {
      uVar73 = uVar73 + *(int *)pauVar41[0x1f];
      iVar26 = (**(code **)pauVar41[0x1e])();
      if (iVar26 != 0) {
        pauVar79 = (undefined1 (*) [16])&DAT_00000009;
        uVar73 = 0xffffffff;
        goto LAB_14957580f;
      }
    }
    break;
  case 0x93:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    if (((*(byte *)((longlong)pauVar52 + lVar51 + 8) & 0x10) == 0) &&
       (iVar26 = FUN_1495792e2((undefined8 *)((longlong)pauVar52 + lVar51)), pauVar41 = local_1c0,
       pauVar43 = local_1e0, iVar26 != 0)) goto LAB_14957030b;
    FUN_1495793c0();
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    break;
  case 0x94:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    pauVar43 = (undefined1 (*) [16])(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)((longlong)*pauVar43 + 8) = 4;
      uVar23 = 0;
    }
    else {
      FUN_14957a10c(pauVar43);
      uVar23 = *(ushort *)((longlong)*pauVar43 + 8);
    }
    lVar51 = *(longlong *)param_1[0x10];
    param_3 = (uint *)((longlong)
                       *(int *)(*(longlong *)(lVar51 + 0x10) + 4 +
                               (longlong)*(int *)(lVar51 + 0x54) * 0x18) +
                      (longlong)*(int *)((longlong)*pauVar65 + 4));
    pauVar55 = (undefined1 (*) [16])((longlong)param_3 * 0x38 + *(longlong *)(lVar51 + 0x20));
    if ((uVar23 & 0x2400) == 0) {
      *(undefined8 *)pauVar43[1] = *(undefined8 *)pauVar55[1];
      *pauVar43 = *pauVar55;
      pauVar42 = local_1d0;
      if (((*pauVar55)[9] & 8) == 0) {
        uVar23 = (ushort)*(undefined4 *)((longlong)*pauVar43 + 8) & 0xe3ff | 0x1000;
        goto LAB_14956edfb;
      }
    }
    else {
      param_3 = (uint *)0x1000;
      FUN_14957a133();
      pauVar42 = local_1d0;
    }
    break;
  case 0x95:
    if ((*(byte *)((longlong)pauVar41[3] + 2) & 8) == 0) {
      if (*(int *)((longlong)*pauVar65 + 4) == 0) {
        *(longlong *)param_1[5] =
             *(longlong *)param_1[5] + (longlong)*(int *)((longlong)*pauVar65 + 8);
      }
      else {
        *(longlong *)((longlong)pauVar41[0x2c] + 8) =
             *(longlong *)((longlong)pauVar41[0x2c] + 8) +
             (longlong)*(int *)((longlong)*pauVar65 + 8);
      }
    }
    else {
      *(longlong *)pauVar41[0x2d] =
           *(longlong *)pauVar41[0x2d] + (longlong)*(int *)((longlong)*pauVar65 + 8);
    }
    break;
  case 0x96:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar33 = (undefined8 *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(puVar33 + 1) = 4;
    }
    else {
      FUN_14957a10c();
    }
    *(undefined2 *)(puVar33 + 1) = 8;
    *puVar33 = **(undefined8 **)pauVar65[1];
    pauVar42 = local_1d0;
    break;
  case 0x97:
    lVar51 = *(longlong *)param_1[0x10];
    pauVar43 = pauVar52;
    if (*(longlong *)param_1[0x10] != 0) {
      do {
        lVar56 = lVar51;
        lVar51 = *(longlong *)(lVar56 + 8);
      } while (lVar51 != 0);
      pauVar43 = *(undefined1 (**) [16])(lVar56 + 0x20);
    }
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    local_1d8 = uVar76;
    local_1b0 = pauVar52;
    uVar47 = FUN_149558f85((longlong *)((longlong)pauVar43 + lVar56));
    pauVar41 = local_1b0;
    *(undefined8 *)((longlong)pauVar43 + lVar56) = uVar47;
    *(ushort *)((longlong)pauVar43 + lVar56 + 8) =
         *(ushort *)((longlong)pauVar43 + lVar56 + 8) & 0x3e40 | 4;
    lVar75 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    lVar51 = FUN_149558f85((undefined8 *)((longlong)local_1b0 + lVar75));
    *(longlong *)((longlong)pauVar41 + lVar75) = lVar51;
    *(ushort *)((longlong)pauVar41 + lVar75 + 8) =
         *(ushort *)((longlong)pauVar41 + lVar75 + 8) & 0x3e40 | 4;
    uVar76 = local_1d8;
    pauVar41 = local_1c0;
    pauVar52 = local_1b0;
    param_1 = local_1c8;
    pauVar42 = local_1d0;
    if (*(longlong *)((longlong)pauVar43 + lVar56) < lVar51) {
      *(longlong *)((longlong)pauVar43 + lVar56) = lVar51;
    }
    break;
  case 0x98:
    iVar26 = *(int *)((longlong)*pauVar65 + 4);
    iVar31 = *(int *)((longlong)*pauVar65 + 0xc);
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
    }
    else {
      FUN_14957a10c();
    }
    lVar51 = *(longlong *)((longlong)iVar26 * 0x38 + (longlong)pauVar52);
    if (lVar51 < 1) {
      lVar71 = -1;
    }
    else {
      lVar56 = *(longlong *)((longlong)pauVar52 + (longlong)iVar31 * 0x38);
      lVar75 = 0;
      if (0 < lVar56) {
        lVar75 = lVar56;
      }
      param_3 = (uint *)(0x7fffffffffffffff - lVar51);
      lVar71 = -1;
      if (lVar56 <= (longlong)param_3) {
        lVar71 = lVar75 + lVar51;
      }
    }
    *plVar39 = lVar71;
    pauVar41 = local_1c0;
    pauVar42 = local_1d0;
    break;
  case 0x99:
  case 0x9a:
    uVar23 = *(ushort *)((longlong)*pauVar65 + 2);
    uVar44 = (ulonglong)uVar23;
    local_1b0 = pauVar52;
    plVar39 = (longlong *)FUN_14955d750(pauVar41,uVar44 * 8 + 0x68);
    pauVar43 = local_1e0;
    if (plVar39 != (longlong *)0x0) {
      plVar39[2] = 0;
      *plVar39 = (longlong)(plVar39 + uVar44 + 6);
      *(undefined2 *)(plVar39 + uVar44 + 7) = 1;
      plVar39[uVar44 + 0xb] = (longlong)pauVar41;
      *(undefined4 *)(plVar39 + uVar44 + 10) = 0;
      plVar39[1] = *(longlong *)pauVar65[1];
      *(int *)(plVar39 + 4) =
           (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555;
      plVar39[3] = (longlong)param_1;
      *(undefined1 *)(plVar39 + 5) = 0;
      *(undefined4 *)((longlong)plVar39 + 0x24) = 0;
      *(char *)((longlong)plVar39 + 0x29) = (char)uVar23;
      *(longlong **)pauVar65[1] = plVar39;
      *(undefined2 *)*pauVar65 = 0xf09b;
      pauVar52 = local_1b0;
      goto LAB_14956e4ac;
    }
    goto LAB_14957030b;
  case 0x9b:
    plVar39 = *(longlong **)pauVar65[1];
LAB_14956e4ac:
    puVar33 = (undefined8 *)
              ((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if ((undefined8 *)plVar39[2] != puVar33) {
      plVar39[2] = (longlong)puVar33;
      uVar44 = (ulonglong)*(byte *)((longlong)plVar39 + 0x29);
      if (uVar44 != 0) {
        do {
          plVar39[uVar44 + 5] =
               (longlong)
               (((longlong)*(int *)((longlong)*pauVar65 + 8) + (uVar44 - 1)) * 0x38 +
               (longlong)pauVar52);
          bVar80 = 1 < uVar44;
          uVar44 = uVar44 - 1;
        } while (bVar80);
      }
    }
    *(int *)((longlong)puVar33 + 0xc) = *(int *)((longlong)puVar33 + 0xc) + 1;
    param_3 = (uint *)(plVar39 + 6);
    lVar51 = 0x30;
    if (*(int *)((longlong)*pauVar65 + 4) == 0) {
      lVar51 = 0x18;
    }
    (**(code **)(plVar39[1] + lVar51))();
    pauVar42 = local_1d0;
    if (*(int *)((longlong)plVar39 + 0x24) != 0) {
      if (0 < *(int *)((longlong)plVar39 + 0x24)) {
        param_3 = (uint *)FUN_149558f28(*plVar39);
        FUN_14956b132(param_1);
        local_1d0 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)plVar39 + 0x24);
      }
      if ((char)plVar39[5] != '\0') {
        lVar51 = (longlong)*(int *)((longlong)pauVar65[-2] + 0xc);
        if (lVar51 != 0) {
          lVar51 = lVar51 * 0x38;
          puVar33 = (undefined8 *)((longlong)pauVar52 + lVar51);
          if ((*(byte *)((longlong)pauVar52 + lVar51 + 9) & 0x24) == 0) {
            *puVar33 = 1;
            *(undefined2 *)(puVar33 + 1) = 4;
          }
          else {
            FUN_14956c854();
          }
        }
        *(undefined1 *)(plVar39 + 5) = 0;
      }
      lVar51 = *plVar39;
      if (((*(byte *)(lVar51 + 9) & 0x24) != 0) || (*(int *)(lVar51 + 0x20) != 0)) {
        FUN_14956b588();
        lVar51 = *plVar39;
      }
      *(undefined2 *)(lVar51 + 8) = 1;
      *(undefined4 *)((longlong)plVar39 + 0x24) = 0;
      if ((int)local_1d0 != 0) {
        pauVar79 = (undefined1 (*) [16])((ulonglong)local_1d0 & 0xffffffff);
        pauVar43 = local_1e0;
        goto LAB_14957580f;
      }
LAB_14956f5c1:
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar42 = local_1d0;
    }
    break;
  case 0x9c:
  case 0x9d:
    piVar61 = (int *)((longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38 + (longlong)pauVar52);
    lVar56 = (longlong)*(int *)((longlong)*pauVar65 + 0xc);
    lVar51 = *(longlong *)pauVar65[1];
    if (lVar56 == 0) {
      local_1d8 = uVar76;
      pauVar79 = (undefined1 (*) [16])FUN_14956b605(piVar61);
    }
    else {
      lVar56 = lVar56 * 0x38;
      puVar33 = (undefined8 *)((longlong)pauVar52 + lVar56);
      _auStack_a8 = ZEXT816(0);
      _auStack_b8 = ZEXT816(0);
      _local_c8 = ZEXT816(0);
      uStack_98 = 0;
      if ((*(byte *)((longlong)pauVar52 + lVar56 + 9) & 0x24) == 0) {
        *(undefined2 *)(puVar33 + 1) = 1;
        local_1d8 = uVar76;
      }
      else {
        local_1d8 = uVar76;
        FUN_14956b5ca(puVar33);
      }
      auStack_b8._0_8_ = piVar61;
      uStack_c0 = lVar51;
      local_c8 = (undefined1  [8])puVar33;
      (**(code **)(lVar51 + 0x28))(local_c8);
      pauVar79 = (undefined1 (*) [16])(ulonglong)(uint)auStack_a8._4_4_;
      piVar61 = (int *)((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
      pauVar41 = local_1c0;
    }
    uVar76 = local_1d8;
    if ((int)pauVar79 != 0) {
      uVar47 = FUN_149558f28(piVar61);
      FUN_14956b132(param_1,&DAT_149dfbe46,uVar47);
      pauVar43 = local_1e0;
      goto LAB_14957580f;
    }
    uVar23 = *(ushort *)(piVar61 + 2);
    if (((uVar23 & 2) != 0) && (*(char *)((longlong)piVar61 + 10) != local_1e1)) {
      FUN_14956ba6f(piVar61);
      uVar23 = *(ushort *)(piVar61 + 2);
    }
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    if ((uVar23 & 0x12) != 0) {
      iVar26 = piVar61[3];
      if ((uVar23 >> 0xe & 1) != 0) {
        iVar26 = iVar26 + *piVar61;
      }
      uVar76 = local_1d8;
      pauVar41 = local_1c0;
      param_1 = local_1c8;
      local_1b4 = uVar73;
      local_1a8 = pauVar65;
      if (*(int *)(*(longlong *)(piVar61 + 10) + 0x7c) < iVar26) goto LAB_149575787;
    }
    break;
  case 0x9e:
    if (*(int *)((longlong)*pauVar65 + 4) == 0) {
      lVar51 = *(longlong *)((longlong)*pauVar41 + 8);
      if (lVar51 != 0) {
        iVar26 = *(int *)((longlong)*pauVar65 + 8);
        do {
          *(uint *)(lVar51 + 200) = *(uint *)(lVar51 + 200) & 0xfffffffc | iVar26 + 1U & 3;
          lVar51 = *(longlong *)(lVar51 + 0x10);
        } while (lVar51 != 0);
      }
    }
    else {
      *(uint *)((longlong)param_1[0xc] + 8) =
           *(uint *)((longlong)param_1[0xc] + 8) & 0xfffffffc |
           *(int *)((longlong)*pauVar65 + 8) + 1U & 3;
    }
    break;
  case 0x9f:
    pbVar62 = (byte *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)((longlong)param_1[7] + 8) +
                          (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 0x38) + 1);
    *pbVar62 = *pbVar62 | 0x40;
    break;
  case 0xa0:
    pbVar62 = (byte *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)((longlong)param_1[7] + 8) +
                          (longlong)*(int *)((longlong)*pauVar65 + 4) * 8) + 0x38) + 1);
    *pbVar62 = *pbVar62 & 0xbf;
    break;
  case 0xa1:
    uVar27 = *(uint *)((longlong)*pauVar65 + 0xc);
    param_3 = (uint *)(ulonglong)uVar27;
    if (((char)uVar27 != '\0') || ((*(byte *)((longlong)pauVar41[3] + 1) & 4) == 0)) {
      uVar27 = FUN_149579ea3();
      if (uVar27 == 0) goto LAB_149571dd7;
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      pauVar43 = local_1e0;
      if ((char)uVar27 == '\x06') {
        FUN_14956b132(param_1,"database table is locked: %s",*(undefined8 *)pauVar65[1]);
        pauVar43 = local_1e0;
      }
      goto LAB_14957580f;
    }
    break;
  case 0xa2:
    lVar51 = *(longlong *)pauVar65[1];
    iVar26 = *(int *)((longlong)pauVar41[0x1f] + 4);
    lVar56 = (longlong)iVar26;
    if ((lVar56 < 1) || (*(longlong *)((longlong)pauVar41[0x21] + 8) != 0)) {
      if (lVar51 != 0) {
        lVar75 = **(longlong **)(lVar51 + 0x10);
        param_3 = *(uint **)(lVar75 + 0x70);
        if ((undefined1 (*) [16])param_3 != (undefined1 (*) [16])0x0) {
          if (0 < iVar26) {
            lVar71 = 0;
            do {
              pauVar79 = (undefined1 (*) [16])0x0;
              if (*(longlong *)(*(longlong *)((longlong)pauVar41[0x21] + 8) + lVar71 * 8) == lVar51)
              goto LAB_149570899;
              lVar71 = lVar71 + 1;
            } while (lVar56 != lVar71);
          }
          local_1b0 = pauVar52;
          if (iVar26 * -0x33333333 + 0x19999999U < 0x33333333) {
            param_3 = (uint *)(lVar56 * 8 + 0x28);
            lVar56 = FUN_14955d6fd();
            if (lVar56 == 0) {
              pauVar79 = (undefined1 (*) [16])&DAT_00000007;
              pauVar52 = local_1b0;
              goto LAB_149570899;
            }
            lVar71 = (longlong)*(int *)((longlong)local_1c0[0x1f] + 4);
            *(undefined1 (*) [16])(lVar56 + 0x10 + lVar71 * 8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar56 + lVar71 * 8) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar56 + 0x20 + lVar71 * 8) = 0;
            *(longlong *)((longlong)local_1c0[0x21] + 8) = lVar56;
            param_3 = *(uint **)(lVar75 + 0x70);
          }
          uVar27 = (*(code *)param_3)();
          pauVar52 = local_1b0;
          pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
          if (uVar27 == 0) {
            iVar26 = *(int *)((longlong)pauVar41[0x2b] + 0xc);
            lVar56 = *(longlong *)((longlong)pauVar41[0x21] + 8);
            iVar31 = *(int *)((longlong)pauVar41[0x1f] + 4);
            param_3 = (uint *)(longlong)iVar31;
            *(int *)((longlong)pauVar41[0x1f] + 4) = iVar31 + 1;
            iVar31 = *(int *)pauVar41[0x2c];
            *(longlong *)(lVar56 + (longlong)param_3 * 8) = lVar51;
            *(int *)(lVar51 + 0x18) = *(int *)(lVar51 + 0x18) + 1;
            iVar31 = iVar31 + iVar26;
            pauVar79 = (undefined1 (*) [16])0x0;
            if ((iVar31 != 0) &&
               (pauVar79 = (undefined1 (*) [16])0x0, *(longlong *)(lVar75 + 0xa0) != 0)) {
              *(int *)(lVar51 + 0x20) = iVar31;
              uVar27 = (**(code **)(lVar75 + 0xa0))();
              pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
              pauVar52 = local_1b0;
            }
          }
          goto LAB_149570899;
        }
        local_1d0 = (undefined1 (*) [16])0x0;
        pauVar79 = local_1d0;
        goto LAB_1495731d6;
      }
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar42 = local_1d0;
    }
    else {
      pauVar79 = (undefined1 (*) [16])&DAT_00000006;
LAB_149570899:
      if (lVar51 != 0) {
LAB_1495731d6:
        local_1d0 = pauVar79;
        FUN_14956b29d();
        pauVar79 = local_1d0;
      }
      pauVar43 = local_1e0;
      if ((int)pauVar79 != 0) goto LAB_14957580f;
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar42 = local_1d0;
    }
    break;
  case 0xa3:
    _auStack_b8 = ZEXT816(0);
    _local_c8 = ZEXT816(0);
    uStack_98 = 0;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = pauVar41;
    _auStack_a8 = auVar89 << 0x40;
    uVar27 = FUN_1495594c1(local_c8);
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    uVar27 = (uint)uStack_c0;
    if (((~(uint)uStack_c0 & 0x202) == 0) && (uStack_c0._2_1_ == '\x01')) {
      param_3 = (uint *)auStack_b8._0_8_;
LAB_1495720cb:
      if ((undefined1 (*) [16])param_3 != (undefined1 (*) [16])0x0) {
        uVar27 = FUN_149579faf();
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      }
    }
    else if ((uVar27 & 1) == 0) {
      param_3 = (uint *)FUN_14956b88d();
      goto LAB_1495720cb;
    }
    if (((uStack_c0._1_1_ & 0x24) != 0) || (auStack_a8._0_4_ != 0)) {
      FUN_14956b588();
    }
LAB_149574196:
    pauVar43 = local_1e0;
    if ((int)pauVar79 != 0) goto LAB_14957580f;
LAB_14956dafc:
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 0xa4:
    *(int *)((longlong)pauVar41[0xd] + 8) = *(int *)((longlong)pauVar41[0xd] + 8) + 1;
    param_3 = *(uint **)(*(longlong *)pauVar41[2] +
                        (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20);
    lVar51 = FUN_14955d004();
    if ((lVar51 == 0) ||
       (puVar33 = *(undefined8 **)(lVar51 + 0x60), puVar64 = puVar33, puVar33 == (undefined8 *)0x0))
    {
      *(int *)((longlong)pauVar41[0xd] + 8) = *(int *)((longlong)pauVar41[0xd] + 8) + -1;
    }
    else {
      do {
        if (0 < *(int *)(puVar64[2] + 8)) {
          *(int *)((longlong)pauVar41[0xd] + 8) = *(int *)((longlong)pauVar41[0xd] + 8) + -1;
          pauVar79 = (undefined1 (*) [16])&DAT_00000006;
          pauVar43 = local_1e0;
          goto LAB_14957580f;
        }
        puVar78 = puVar64 + 5;
        puVar64 = (undefined8 *)*puVar78;
      } while ((undefined8 *)*puVar78 != (undefined8 *)0x0);
      *(undefined8 *)(lVar51 + 0x60) = 0;
      puVar64 = (undefined8 *)0x0;
      param_3 = (uint *)local_1e0;
      do {
        pauVar43 = (undefined1 (*) [16])*puVar33;
        puVar78 = (undefined8 *)puVar33[5];
        if (pauVar43 == pauVar41) {
          *(undefined8 **)(lVar51 + 0x60) = puVar33;
          puVar33[5] = 0;
          puVar64 = puVar33;
        }
        else {
          param_3 = *(uint **)pauVar43[0x22];
          puVar33[5] = param_3;
          *(undefined8 **)pauVar43[0x22] = puVar33;
        }
        puVar33 = puVar78;
      } while (puVar78 != (undefined8 *)0x0);
      pcVar68 = *(code **)(*(longlong *)puVar64[1] + 0x28);
      if (pcVar68 == (code *)0x0) {
        pcVar68 = *(code **)(*(longlong *)puVar64[1] + 0x20);
      }
      *(int *)(lVar51 + 0x3c) = *(int *)(lVar51 + 0x3c) + 1;
      local_1d8 = uVar76;
      uVar27 = (*pcVar68)();
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
      if (uVar27 == 0) {
        puVar64[2] = 0;
        *(undefined8 *)(lVar51 + 0x60) = 0;
        FUN_149569a63();
      }
      if ((pauVar41 == (undefined1 (*) [16])0x0) ||
         (*(longlong *)((longlong)pauVar41[0x2d] + 8) == 0)) {
        piVar61 = (int *)(lVar51 + 0x3c);
        *piVar61 = *piVar61 + -1;
        if (*piVar61 == 0) goto LAB_1495752ae;
      }
      else {
LAB_1495752ae:
        FUN_149585e6d();
      }
      *(int *)((longlong)pauVar41[0xd] + 8) = *(int *)((longlong)pauVar41[0xd] + 8) + -1;
      uVar76 = local_1d8;
      pauVar43 = local_1e0;
      if (uVar27 != 0) goto LAB_14957580f;
    }
LAB_149571dd7:
    local_1d0 = (undefined1 (*) [16])0x0;
    pauVar42 = local_1d0;
    break;
  case 0xa5:
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uStack_c0;
    _local_c8 = auVar87 << 0x40;
    plVar39 = *(longlong **)(*(longlong *)pauVar65[1] + 0x10);
    pauVar79 = (undefined1 (*) [16])&DAT_00000006;
    pauVar41 = local_1c0;
    if ((plVar39 == (longlong *)0x0) || (lVar51 = *plVar39, lVar51 == 0)) goto LAB_14957580f;
    local_1b0 = pauVar52;
    uVar27 = (**(code **)(lVar51 + 0x30))(plVar39,local_c8);
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    FUN_14956b29d(param_1,plVar39);
    pauVar41 = local_1c0;
    pauVar43 = local_1e0;
    if (uVar27 != 0) goto LAB_14957580f;
    *(longlong **)local_c8 = plVar39;
    local_1f8 = (code *)CONCAT71(local_1f8._1_7_,2);
    local_1d0 = (undefined1 (*) [16])0x0;
    param_3 = (uint *)0x0;
    lVar56 = FUN_149576289(param_1);
    if (lVar56 == 0) {
      (**(code **)(lVar51 + 0x38))(local_c8);
      pauVar41 = local_1c0;
      pauVar43 = local_1e0;
      goto LAB_14957030b;
    }
    *(undefined1 (*) [8])(lVar56 + 0x38) = local_c8;
    *(int *)(plVar39 + 1) = (int)plVar39[1] + 1;
    pauVar41 = local_1c0;
    pauVar52 = local_1b0;
    pauVar42 = local_1d0;
    break;
  case 0xa6:
    lVar51 = *(longlong *)
              (*(longlong *)((longlong)param_1[7] + 8) +
              (longlong)*(int *)((longlong)*pauVar65 + 4) * 8);
    piVar61 = (int *)((longlong)*(int *)((longlong)*pauVar65 + 0xc) * 0x38 + (longlong)pauVar52);
    if (*(char *)(lVar51 + 2) == '\0') {
      lVar56 = *(longlong *)**(undefined8 **)(lVar51 + 0x38);
      uStack_98 = 0;
      _auStack_a8 = ZEXT816(0);
      _auStack_b8 = ZEXT816(0);
      uStack_c0 = 0;
      local_c8 = (undefined1  [8])piVar61;
      if ((*(byte *)((longlong)*pauVar65 + 2) & 1) == 0) {
        *(ushort *)(piVar61 + 2) = (*(ushort *)(piVar61 + 2) & 0x3e40) + 1;
        local_1d8 = uVar76;
        local_1b0 = pauVar52;
      }
      else {
        if ((*(ushort *)(piVar61 + 2) & 0x2400) == 0) {
          *(undefined2 *)(piVar61 + 2) = 1;
          local_1d8 = uVar76;
          local_1b0 = pauVar52;
        }
        else {
          local_1d8 = uVar76;
          local_1b0 = pauVar52;
          FUN_14956b5ca(piVar61);
        }
        *(undefined2 *)(piVar61 + 2) = 0x4001;
        *piVar61 = 0;
      }
      param_3 = (uint *)(ulonglong)*(uint *)((longlong)*pauVar65 + 8);
      uVar27 = (**(code **)(lVar56 + 0x58))(*(undefined8 *)(lVar51 + 0x38),local_c8);
      param_1 = local_1c8;
      FUN_14956b29d();
      if (0 < (int)auStack_a8._4_4_) {
        param_3 = (uint *)FUN_149558f28(piVar61);
        FUN_14956b132(param_1);
        uVar27 = auStack_a8._4_4_;
      }
      uVar76 = local_1d8;
      uVar23 = *(ushort *)(piVar61 + 2);
      if (((uVar23 & 2) != 0) && (*(char *)((longlong)piVar61 + 10) != local_1e1)) {
        FUN_14956ba6f(piVar61);
        uVar23 = *(ushort *)(piVar61 + 2);
      }
      if ((uVar23 & 0x12) != 0) {
        iVar26 = piVar61[3];
        if ((uVar23 >> 0xe & 1) != 0) {
          iVar26 = iVar26 + *piVar61;
        }
        if (*(int *)(*(longlong *)(piVar61 + 10) + 0x7c) < iVar26) goto LAB_149575787;
      }
      local_1d0 = (undefined1 (*) [16])0x0;
      pauVar52 = local_1b0;
      goto joined_r0x0001495744da;
    }
    if ((*(byte *)((longlong)piVar61 + 9) & 0x24) == 0) {
      *(undefined2 *)(piVar61 + 2) = 1;
    }
    else {
      FUN_14956b5ca();
      pauVar42 = local_1d0;
    }
    break;
  case 0xa7:
    uVar44 = *(ulonglong *)pauVar41[3];
    *(ulonglong *)pauVar41[3] = uVar44 | 0x4000000;
    plVar39 = *(longlong **)(*(longlong *)pauVar65[1] + 0x10);
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x38;
    puVar33 = (undefined8 *)((longlong)pauVar52 + lVar51);
    local_1d8 = uVar76;
    if ((((*(byte *)((longlong)pauVar52 + lVar51 + 8) & 2) == 0) ||
        (*(char *)((longlong)puVar33 + 10) == '\x01')) ||
       (uVar27 = FUN_14956ba6f(puVar33,1), uVar27 == 0)) {
      uVar27 = (**(code **)(*plVar39 + 0x98))(plVar39,puVar33[2]);
      if (((uint)uVar44 >> 0x1a & 1) == 0) {
        pbVar62 = (byte *)((longlong)pauVar41[3] + 3);
        *pbVar62 = *pbVar62 & 0xfb;
      }
      FUN_14956b29d();
      *(byte *)((longlong)param_1[0xc] + 8) = *(byte *)((longlong)param_1[0xc] + 8) & 0xfc;
      if (uVar27 == 0) {
        local_1d0 = (undefined1 (*) [16])0x0;
        uVar76 = local_1d8;
        pauVar42 = local_1d0;
        break;
      }
    }
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar27;
    uVar76 = local_1d8;
    pauVar43 = local_1e0;
    goto LAB_14957580f;
  case 0xa8:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    puVar59 = (ulonglong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(puVar59 + 1) = 4;
    }
    else {
      FUN_14957a10c(puVar59);
    }
    uVar44 = (ulonglong)
             (*(uint *)(*(longlong *)
                         (*(longlong *)
                           (*(longlong *)pauVar41[2] + 8 +
                           (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20) + 8) + 0x3c) &
             0x7fffffff);
LAB_14956ee81:
    *puVar59 = uVar44;
    pauVar42 = local_1d0;
    break;
  case 0xa9:
    lVar51 = (longlong)*(int *)((longlong)*pauVar65 + 8) * 0x38;
    plVar39 = (longlong *)(*(longlong *)((longlong)param_1[6] + 8) + lVar51);
    if ((*(byte *)(*(longlong *)((longlong)param_1[6] + 8) + 9 + lVar51) & 0x24) == 0) {
      *(undefined2 *)(plVar39 + 1) = 4;
      local_1b0 = pauVar52;
    }
    else {
      local_1b0 = pauVar52;
      FUN_14957a10c(plVar39);
    }
    lVar51 = *(longlong *)
              (*(longlong *)pauVar41[2] + 8 + (longlong)*(int *)((longlong)*pauVar65 + 4) * 0x20);
    uVar27 = *(uint *)((longlong)*pauVar65 + 0xc);
    if (uVar27 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(uint *)(*(longlong *)(lVar51 + 8) + 0x3c) & 0x7fffffff;
      if (uVar32 <= uVar27) {
        uVar32 = uVar27;
      }
    }
    if ((*(char *)(lVar51 + 0x11) != '\0') &&
       (*(int *)(lVar51 + 0x14) = *(int *)(lVar51 + 0x14) + 1, *(char *)(lVar51 + 0x12) == '\0')) {
      FUN_14956624a();
    }
    if ((int)uVar32 < 1) {
      uVar32 = *(uint *)(**(longlong **)(lVar51 + 8) + 0xc0);
    }
    else {
      *(uint *)(**(longlong **)(lVar51 + 8) + 0xc0) = uVar32;
    }
    if (*(char *)(lVar51 + 0x11) != '\0') {
      piVar61 = (int *)(lVar51 + 0x14);
      *piVar61 = *piVar61 + -1;
      if (*piVar61 == 0) {
        FUN_1495662d2();
      }
    }
    *plVar39 = (longlong)(int)uVar32;
    pauVar52 = local_1b0;
    pauVar42 = local_1d0;
  }
switchD_14956c99d_caseD_55:
  local_1d0 = pauVar42;
  pauVar65 = (undefined1 (*) [16])((longlong)pauVar65[1] + 8);
  goto LAB_14956c983;
  while( true ) {
    if ((uVar23 & 0x202) == 2) {
      FUN_14956c03a(puVar33);
    }
    lVar51 = lVar51 + 1;
    puVar33 = puVar33 + 7;
    if (*(int *)((longlong)*pauVar65 + 8) <= lVar51) break;
LAB_149573317:
    uVar23 = (ushort)*(uint *)(puVar33 + 1);
    if ((*(uint *)(puVar33 + 1) >> 0xc & 1) != 0) {
      iVar26 = FUN_14955903b(puVar33);
      pauVar43 = local_1e0;
      if (iVar26 != 0) goto LAB_14957030b;
      uVar23 = *(ushort *)(puVar33 + 1);
    }
  }
LAB_1495739ea:
  pauVar43 = local_1e0;
  if (*(char *)((longlong)pauVar41[6] + 1) == '\0') {
    if ((*(byte *)((longlong)pauVar41[6] + 8) & 4) != 0) {
      (**(code **)((longlong)pauVar41[0xe] + 8))(4,*(undefined8 *)pauVar41[0xf],param_1,0);
    }
    *(int *)((longlong)param_1[3] + 4) =
         (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555 + 1;
    pauVar79 = (undefined1 (*) [16])&DAT_00000064;
    pauVar43 = local_1e0;
    goto LAB_149575917;
  }
LAB_14957030b:
  if ((*(char *)((longlong)pauVar41[6] + 1) == '\0') &&
     (*(char *)((longlong)pauVar41[6] + 2) == '\0')) {
    *(undefined1 *)((longlong)pauVar41[6] + 1) = 1;
    if (0 < *(int *)((longlong)pauVar41[0xd] + 4)) {
      *(undefined4 *)pauVar41[0x17] = 1;
    }
    *(int *)((longlong)pauVar41[0x17] + 8) = *(int *)((longlong)pauVar41[0x17] + 8) + 1;
    *(undefined2 *)((longlong)pauVar41[0x17] + 0xc) = 0;
    if (*(longlong *)((longlong)pauVar41[0x13] + 8) != 0) {
      *(undefined4 *)(*(longlong *)((longlong)pauVar41[0x13] + 8) + 0x18) = 7;
    }
  }
  FUN_14956b132(param_1,"out of memory");
  pauVar79 = (undefined1 (*) [16])&DAT_00000007;
LAB_14957580f:
  do {
    uVar27 = 7;
    if (*(char *)((longlong)pauVar41[6] + 1) == '\0') {
      uVar27 = (uint)pauVar79;
    }
    if ((*(longlong *)((longlong)param_1[10] + 8) == 0) && (uVar27 != 0xc0a)) {
      pcVar69 = "abort due to ROLLBACK";
      if (uVar27 != 0x204) {
        if (uVar27 == 0x65) {
          pcVar69 = "no more rows available";
        }
        else if (uVar27 == 100) {
          pcVar69 = "another row available";
        }
        else {
          uVar32 = uVar27 & 0xff;
          pcVar69 = "unknown error";
          if ((uVar32 < 0x1d) && ((0x1410004UL >> ((ulonglong)uVar32 & 0x3f) & 1) == 0)) {
            pcVar69 = (&PTR_s_not_an_error_14bd49c10)[uVar32];
          }
        }
      }
      FUN_14956b132(param_1,&DAT_149dfbe46,pcVar69);
    }
    *(uint *)((longlong)param_1[3] + 8) = uVar27;
    if ((uVar27 & 0xfb) == 10 && uVar27 != 0xc0a) {
      pcVar68 = *(code **)(*(longlong *)*pauVar41 + 0x80);
      uVar30 = 0;
      if (pcVar68 != (code *)0x0) {
        uVar30 = (*pcVar68)(*(longlong *)*pauVar41,0,0);
      }
      *(undefined4 *)((longlong)pauVar41[5] + 8) = uVar30;
    }
    local_1f8 = *(code **)((longlong)param_1[10] + 8);
    FUN_14955599e(uVar27,"statement aborts at %d: [%s] %s",
                  (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555,
                  *(undefined8 *)param_1[0xf]);
    FUN_149569b7c(param_1);
    if (((uVar27 == 0xc0a) && (*(char *)((longlong)pauVar41[6] + 1) == '\0')) &&
       (*(char *)((longlong)pauVar41[6] + 2) == '\0')) {
      *(undefined1 *)((longlong)pauVar41[6] + 1) = 1;
      if (0 < *(int *)((longlong)pauVar41[0xd] + 4)) {
        *(undefined4 *)pauVar41[0x17] = 1;
      }
      *(int *)((longlong)pauVar41[0x17] + 8) = *(int *)((longlong)pauVar41[0x17] + 8) + 1;
      *(undefined2 *)((longlong)pauVar41[0x17] + 0xc) = 0;
      if (*(longlong *)((longlong)pauVar41[0x13] + 8) != 0) {
        *(undefined4 *)(*(longlong *)((longlong)pauVar41[0x13] + 8) + 0x18) = 7;
      }
    }
    pauVar79 = (undefined1 (*) [16])&DAT_00000001;
    if ((char)pauVar43 == '\0') {
      pauVar43 = (undefined1 (*) [16])0x0;
    }
    else {
      FUN_149576197(pauVar41);
    }
LAB_149575917:
    do {
      if (((uint)uVar76 < uVar73) || (*(code **)pauVar41[0x1e] == (code *)0x0)) {
        piVar61 = (int *)((longlong)param_1[0xe] + 4);
        *piVar61 = *piVar61 + (uint)uVar76;
        if (*(int *)param_1[0xd] != 0) {
          FUN_14956b1a5(param_1);
        }
        if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return pauVar79;
      }
      iVar26 = *(int *)pauVar41[0x1f];
      iVar31 = (**(code **)pauVar41[0x1e])(*(undefined8 *)((longlong)pauVar41[0x1e] + 8));
      uVar73 = uVar73 + iVar26;
    } while (iVar31 == 0);
    pauVar79 = (undefined1 (*) [16])&DAT_00000009;
    uVar73 = 0xffffffff;
  } while( true );
switchD_14956c99d_caseD_1:
  uVar27 = *(uint *)((longlong)*pauVar65 + 4);
  if (uVar27 == *(byte *)((longlong)pauVar41[5] + 0xf)) {
    pcVar53 = "cannot rollback - no transaction is active";
    if (*(int *)((longlong)*pauVar65 + 8) == 0) {
      pcVar53 = "cannot commit - no transaction is active";
    }
    pcVar69 = "cannot start a transaction within a transaction";
    if (uVar27 != 0) {
      pcVar69 = pcVar53;
    }
    pauVar79 = (undefined1 (*) [16])&DAT_00000001;
  }
  else {
    if (*(int *)((longlong)*pauVar65 + 8) != 0) {
      FUN_14956a24e(pauVar41,0x204);
      cVar21 = '\x01';
LAB_149575484:
      *(char *)((longlong)pauVar41[5] + 0xf) = cVar21;
      iVar26 = FUN_149569b7c(param_1);
      if (iVar26 == 5) {
        *(int *)((longlong)param_1[3] + 4) =
             (int)((ulonglong)((longlong)pauVar65 - (longlong)local_198) >> 3) * -0x55555555;
        *(char *)((longlong)pauVar41[5] + 0xf) = '\x01' - (char)uVar27;
        *(undefined4 *)((longlong)param_1[3] + 8) = 5;
        pauVar79 = (undefined1 (*) [16])0x5;
        pauVar43 = local_1e0;
        goto LAB_149575917;
      }
      lVar51 = *(longlong *)pauVar41[0x2b];
      while (lVar51 != 0) {
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
        *(undefined8 *)pauVar41[0x2b] = *(undefined8 *)(lVar51 + 0x18);
        FUN_14955d65a(pauVar41);
        lVar51 = *(longlong *)pauVar41[0x2b];
      }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
      *(undefined8 *)((longlong)pauVar41[0x2b] + 0xc) = 0;
      *(undefined1 *)((longlong)pauVar41[6] + 7) = 0;
      pauVar79 = (undefined1 (*) [16])&DAT_00000001;
      pauVar43 = local_1e0;
      if (*(int *)((longlong)param_1[3] + 8) != 0) goto LAB_149575917;
      pauVar79 = (undefined1 (*) [16])&DAT_00000065;
      goto LAB_149575917;
    }
    if ((uVar27 == 0) || (*(int *)pauVar41[0xd] < 1)) {
      lVar51 = *(longlong *)(*(longlong *)*param_1 + 0x2d0);
      plVar39 = (longlong *)(*(longlong *)*param_1 + 0x2c8);
      lVar56 = lVar51 + *plVar39;
      cVar21 = (char)uVar27;
      if (lVar56 != 0 && SCARRY8(lVar51,*plVar39) == lVar56 < 0) {
        *(undefined4 *)((longlong)param_1[3] + 8) = 0x313;
        *(undefined1 *)((longlong)param_1[0xc] + 2) = 2;
        FUN_14956b132(param_1,"FOREIGN KEY constraint failed");
        pauVar79 = (undefined1 (*) [16])&DAT_00000001;
        pauVar43 = local_1e0;
        goto LAB_149575917;
      }
      goto LAB_149575484;
    }
    pauVar79 = (undefined1 (*) [16])0x5;
    pcVar69 = "cannot commit transaction - SQL statements in progress";
  }
  FUN_14956b132(param_1,pcVar69);
  goto LAB_14957580f;
LAB_14956def6:
  param_3 = (uint *)(ulonglong)((uint)param_3 + 1);
  plVar39 = (longlong *)plVar39[3];
  if (plVar39 == (longlong *)0x0) goto LAB_149574cc3;
  goto LAB_14956dec2;
  while( true ) {
    lVar51 = lVar51 + 1;
    iVar31 = *(int *)((longlong)pauVar41[2] + 8);
    lVar56 = lVar56 + 0x20;
    if (iVar31 <= lVar51) break;
LAB_149570089:
    pauVar42 = (undefined1 (*) [16])0x0;
    uVar73 = FUN_1495697cd(*(undefined8 *)(*(longlong *)pauVar41[2] + lVar56),0x204);
    if (uVar73 != 0) {
      pauVar79 = (undefined1 (*) [16])(ulonglong)uVar73;
      uVar76 = local_1d8;
      pauVar65 = local_1a8;
      pauVar43 = local_1e0;
      param_1 = local_1c8;
      uVar73 = local_1b4;
      goto LAB_14957580f;
    }
  }
  local_1d0 = (undefined1 (*) [16])0x0;
  pauVar52 = local_1b0;
LAB_1495700cc:
  if (0 < iVar31) {
    lVar51 = 8;
    lVar56 = 0;
    do {
      pauVar42 = (undefined1 (*) [16])param_3;
      uVar73 = FUN_14956b401(*(undefined8 *)(*(longlong *)pauVar41[2] + lVar51),iVar26);
      if (uVar73 != 0) {
        pauVar79 = (undefined1 (*) [16])(ulonglong)uVar73;
        uVar76 = local_1d8;
        pauVar65 = local_1a8;
        pauVar43 = local_1e0;
        param_1 = local_1c8;
        uVar73 = local_1b4;
        goto LAB_14957580f;
      }
      lVar56 = lVar56 + 1;
      lVar51 = lVar51 + 0x20;
    } while (lVar56 < *(int *)((longlong)pauVar41[2] + 8));
    local_1d0 = (undefined1 (*) [16])0x0;
  }
LAB_14956f26b:
  pauVar55 = local_1c8;
  if (uVar27 != 0) {
    for (lVar51 = *(longlong *)((longlong)*pauVar41 + 8); lVar51 != 0;
        lVar51 = *(longlong *)(lVar51 + 0x10)) {
      *(uint *)(lVar51 + 200) = (*(uint *)(lVar51 + 200) & 0xfffffffc) + 1;
    }
    FUN_149557f5c(pauVar41);
    pbVar62 = (byte *)((longlong)pauVar41[2] + 0xc);
    *pbVar62 = *pbVar62 | 1;
  }
  if ((int)local_1d0 != 0) {
    pauVar79 = (undefined1 (*) [16])((ulonglong)local_1d0 & 0xffffffff);
    uVar76 = local_1d8;
    pauVar65 = local_1a8;
    pauVar43 = local_1e0;
    param_1 = pauVar55;
    uVar73 = local_1b4;
    goto LAB_14957580f;
  }
LAB_14956f290:
  plVar1 = *(longlong **)pauVar41[0x2b];
  while (plVar1 != plVar39) {
    plVar35 = (longlong *)plVar1[3];
    *(longlong **)pauVar41[0x2b] = plVar35;
    if (plVar1 != (longlong *)0x0) {
      FUN_14955d65a(pauVar41);
      plVar35 = *(longlong **)pauVar41[0x2b];
    }
    piVar61 = (int *)((longlong)pauVar41[0x2b] + 0xc);
    *piVar61 = *piVar61 + -1;
    plVar1 = plVar35;
  }
  if (iVar26 == 1) {
    *(longlong *)pauVar41[0x2b] = plVar39[3];
    FUN_14955d65a(pauVar41);
    if ((byte)local_1a0 != 0) goto LAB_14956f2e7;
    piVar61 = (int *)((longlong)pauVar41[0x2b] + 0xc);
    *piVar61 = *piVar61 + -1;
  }
  else {
    *(longlong *)((longlong)pauVar41[0x2c] + 8) = plVar39[1];
    *(longlong *)pauVar41[0x2d] = plVar39[2];
LAB_14956f2e7:
    pauVar65 = local_1a8;
    uVar73 = local_1b4;
    if ((iVar26 != 2 & (byte)local_1a0) != 0) {
LAB_14956f2d3:
      local_1d0 = (undefined1 (*) [16])0x0;
      uVar76 = local_1d8;
      param_3 = (uint *)pauVar42;
      param_1 = pauVar55;
      pauVar42 = local_1d0;
      goto switchD_14956c99d_caseD_55;
    }
  }
  pauVar65 = local_1a8;
  uVar73 = FUN_14956b4ca();
  if (uVar73 != 0) {
LAB_149574f2b:
    pauVar79 = (undefined1 (*) [16])(ulonglong)uVar73;
    uVar76 = local_1d8;
    pauVar43 = local_1e0;
    param_1 = pauVar55;
    uVar73 = local_1b4;
    goto LAB_14957580f;
  }
  local_1d0 = (undefined1 (*) [16])0x0;
  uVar76 = local_1d8;
  param_1 = pauVar55;
  uVar73 = local_1b4;
  pauVar42 = local_1d0;
  goto switchD_14956c99d_caseD_55;
}



// FUNCTION 149575a3f FUN_149575a3f body=168 status=ok
// SIG undefined FUN_149575a3f(void)

undefined8 FUN_149575a3f(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  
  uVar1 = *param_1;
  if ((longlong)param_2 < 1) {
    if ((longlong)param_2 < 0) {
      if ((longlong)uVar1 < 1) {
        if ((longlong)uVar1 < 0) {
          if (SBORROW8(0,uVar1) || SBORROW8(0,param_2)) {
            return 1;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = -param_2;
          if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar5,0) < -uVar1) {
            return 1;
          }
        }
      }
      else {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar1;
        lVar6 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x8000000000000000)) / auVar4,0);
        if (param_2 <= (ulonglong)-lVar6 && -param_2 != lVar6) {
          return 1;
        }
      }
    }
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar2,0) < (longlong)uVar1) {
      return 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    if ((longlong)uVar1 < -SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x8000000000000000)) / auVar3,0)) {
      return 1;
    }
  }
  *param_1 = uVar1 * param_2;
  return 0;
}



// FUNCTION 149575ae7 FUN_149575ae7 body=207 status=ok
// SIG undefined FUN_149575ae7(void)

void FUN_149575ae7(double *param_1,char param_2,undefined4 param_3)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  
  if (param_2 < 'C') {
    if (param_2 == 'B') {
      uVar2 = *(ushort *)(param_1 + 1);
      if ((uVar2 & 0x2c) != 0 && (char)((uVar2 & 2) >> 1) == '\0') {
        FUN_14956b936(param_1,param_3,1);
        uVar2 = *(ushort *)(param_1 + 1);
      }
      *(ushort *)(param_1 + 1) = uVar2 & 0xffd3;
    }
  }
  else {
    uVar2 = *(ushort *)(param_1 + 1);
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 2) != 0) {
          FUN_149559f51(param_1,1);
          return;
        }
      }
      else {
        dVar1 = *param_1;
        dVar3 = (double)FUN_14956c5a2(dVar1);
        if ((longlong)dVar3 + 0x7fffffffffffffffU < 0xfffffffffffffffe &&
            (double)(longlong)dVar3 == dVar1) {
          *param_1 = dVar3;
          *(ushort *)(param_1 + 1) = uVar2 & 0x3e40 | 4;
        }
      }
    }
  }
  return;
}



// FUNCTION 149575bb6 FUN_149575bb6 body=81 status=ok
// SIG undefined FUN_149575bb6(void)

void FUN_149575bb6(double *param_1)

{
  ushort uVar1;
  double dVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x24) == 0) {
      dVar2 = 0.0;
      if ((uVar1 & 0x12) != 0) {
        dVar2 = (double)FUN_14956c08d(param_1);
        uVar1 = *(ushort *)(param_1 + 1);
      }
    }
    else {
      dVar2 = (double)(longlong)*param_1;
    }
  }
  else {
    dVar2 = *param_1;
  }
  *param_1 = dVar2;
  *(ushort *)(param_1 + 1) = uVar1 & 0x3e40 | 8;
  return;
}



// FUNCTION 149575c07 FUN_149575c07 body=278 status=ok
// SIG undefined FUN_149575c07(void)

undefined8 FUN_149575c07(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  switch(param_2) {
  case 0x41:
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x2c) != 0 && (char)((uVar1 & 2) >> 1) == '\0') {
        FUN_14956b936(param_1,param_3,1);
        uVar1 = *(ushort *)(param_1 + 1);
      }
      *(ushort *)(param_1 + 1) = uVar1 & 0xffd3;
      if ((uVar1 & 2) == 0) {
        return 0;
      }
      uVar1 = uVar1 & 0x3e40 | 0x10;
    }
    else {
      uVar1 = uVar1 & 0x3e50;
    }
    goto LAB_149575cba;
  default:
    uVar3 = uVar1 >> 3 & 2;
    uVar4 = uVar3 | uVar1;
    *(short *)(param_1 + 1) = (short)uVar4;
    if ((uVar1 & 0x2c) != 0 && (char)((uVar3 | uVar1 & 2) >> 1) == '\0') {
      FUN_14956b936(param_1,param_3,1);
      uVar4 = (uint)*(ushort *)(param_1 + 1);
    }
    *(ushort *)(param_1 + 1) = (ushort)uVar4 & 0xbfc3;
    if (((uVar4 & 2) != 0) && (*(char *)((longlong)param_1 + 10) != (char)param_3)) {
      uVar2 = FUN_14956ba6f(param_1,param_3);
      return uVar2;
    }
    break;
  case 0x43:
    FUN_14957a229(param_1);
    break;
  case 0x44:
    uVar2 = FUN_149558f85(param_1);
    *param_1 = uVar2;
    uVar1 = *(ushort *)(param_1 + 1) & 0x3e40 | 4;
LAB_149575cba:
    *(ushort *)(param_1 + 1) = uVar1;
    break;
  case 0x45:
    FUN_149575bb6(param_1);
  }
  return 0;
}



// FUNCTION 149575d1d FUN_149575d1d body=391 status=ok
// SIG undefined FUN_149575d1d(void)

ulonglong FUN_149575d1d(double *param_1,double *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_2 + 1);
  uVar4 = uVar2 | uVar1;
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 0x2c) == 0) {
      if ((uVar4 & 2) == 0) {
        uVar6 = *(uint *)((longlong)param_1 + 0xc);
        uVar3 = *(uint *)((longlong)param_2 + 0xc);
        uVar1 = *(ushort *)(param_1 + 1);
        if (((*(ushort *)(param_2 + 1) | uVar1) >> 0xe & 1) == 0) {
          uVar5 = uVar3;
          if ((int)uVar6 < (int)uVar3) {
            uVar5 = uVar6;
          }
          uVar5 = memcmp((void *)param_1[2],(void *)param_2[2],(longlong)(int)uVar5);
          uVar3 = uVar6 - uVar3;
          if (uVar5 != 0) {
            uVar3 = uVar5;
          }
        }
        else {
          if ((uVar1 & 0x4000 & *(ushort *)(param_2 + 1)) == 0) {
            if ((uVar1 & 0x4000) != 0) {
              if (0 < (int)uVar3) {
                uVar7 = 0;
                do {
                  if (*(char *)((longlong)param_2[2] + uVar7) != '\0') {
                    return 0xffffffff;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar3 != uVar7);
              }
              return (ulonglong)(*(int *)param_1 - uVar3);
            }
            if (0 < (int)uVar6) {
              uVar7 = 0;
              do {
                if (*(char *)((longlong)param_1[2] + uVar7) != '\0') {
                  return 1;
                }
                uVar7 = uVar7 + 1;
              } while (uVar6 != uVar7);
            }
          }
          else {
            uVar6 = *(uint *)param_1;
          }
          uVar3 = uVar6 - *(int *)param_2;
        }
        return (ulonglong)uVar3;
      }
      uVar7 = 1;
      if (((uVar1 & 2) != 0) && (uVar7 = 0xffffffff, (uVar2 & 2) != 0)) {
        if (param_3 != 0) {
          uVar7 = FUN_14957a30c(param_1,param_2,param_3,0);
          return uVar7;
        }
        uVar7 = FUN_14957a4db();
        return uVar7;
      }
    }
    else {
      if ((uVar2 & uVar1 & 0x24) == 0) {
        if ((uVar2 & uVar1 & 8) != 0) {
          dVar8 = *param_1;
          dVar11 = *param_2;
          if (dVar8 < dVar11) {
            return 0xffffffff;
          }
          bVar10 = dVar8 == dVar11;
          bVar9 = dVar8 < dVar11;
LAB_149575dc7:
          return (ulonglong)(!bVar9 && !bVar10);
        }
        if ((uVar1 & 0x24) == 0) {
          if ((uVar1 & 8) != 0) {
            if ((uVar2 & 0x24) == 0) {
              return 0xffffffff;
            }
            dVar8 = *param_1;
            if (dVar8 < -9.223372036854776e+18) {
              return 0xffffffff;
            }
            if (dVar8 < 9.223372036854776e+18) {
              dVar11 = *param_2;
              if ((longlong)dVar8 <= (longlong)dVar11) {
                if ((longlong)dVar8 < (longlong)dVar11) {
                  return 0xffffffff;
                }
                if (dVar8 <= (double)(longlong)dVar11) {
                  return (ulonglong)-(uint)(dVar8 < (double)(longlong)dVar11);
                }
                return 1;
              }
            }
          }
          return 1;
        }
        if ((uVar2 & 8) != 0) {
          dVar8 = *param_2;
          if (dVar8 < -9.223372036854776e+18) {
            return 1;
          }
          if (dVar8 < 9.223372036854776e+18) {
            dVar11 = *param_1;
            if ((longlong)dVar8 <= (longlong)dVar11) {
              if ((longlong)dVar8 < (longlong)dVar11) {
                return 1;
              }
              dVar11 = (double)(longlong)dVar11;
              if (dVar11 < dVar8) {
                return 0xffffffff;
              }
              bVar10 = dVar11 == dVar8;
              bVar9 = dVar11 < dVar8;
              goto LAB_149575dc7;
            }
          }
          return 0xffffffff;
        }
        if ((uVar2 & 0x24) == 0) {
          return 0xffffffff;
        }
        dVar8 = *param_2;
      }
      else {
        dVar8 = *param_2;
      }
      uVar7 = 0xffffffff;
      if ((longlong)dVar8 <= (longlong)*param_1) {
        return (ulonglong)((longlong)dVar8 < (longlong)*param_1);
      }
    }
  }
  else {
    uVar7 = (ulonglong)((uVar2 & 1) - (uVar1 & 1));
  }
  return uVar7;
}



// FUNCTION 149575ea4 FUN_149575ea4 body=78 status=ok
// SIG undefined FUN_149575ea4(void)

uint FUN_149575ea4(double *param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1[1];
  if (((ulonglong)dVar1 & 0x24) == 0) {
    if (((ulonglong)dVar1 & 1) == 0) {
      if (((ulonglong)dVar1 & 8) == 0) {
        dVar2 = 0.0;
        if (((ulonglong)dVar1 & 0x12) != 0) {
          dVar2 = (double)FUN_14956c08d();
        }
      }
      else {
        dVar2 = *param_1;
      }
      param_2 = -(uint)(dVar2 != 0.0) & 1;
    }
  }
  else {
    param_2 = (uint)(*param_1 != 0.0);
  }
  return param_2;
}



// FUNCTION 149575ef2 FUN_149575ef2 body=149 status=ok
// SIG undefined FUN_149575ef2(void)

undefined8 FUN_149575ef2(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = param_1[1];
  if ((char)bVar1 < '\0') {
    if ((char)param_1[2] < 0) {
      uVar2 = FUN_149564e25(param_1,&local_20);
      uVar4 = -(local_20 >> 0x20);
      *param_2 = -(uint)(local_20 >> 0x20 != 0) | (uint)local_20;
    }
    else {
      uVar3 = (*param_1 & 0x7f) << 0xe;
      uVar4 = (ulonglong)uVar3;
      uVar3 = (bVar1 & 0x7f) << 7 | uVar3 | (int)(char)param_1[2];
      *param_2 = uVar3;
      uVar2 = CONCAT71((uint7)(uint3)(uVar3 >> 8),3);
    }
  }
  else {
    uVar3 = (*param_1 & 0x7f) << 7 | (uint)bVar1;
    uVar4 = (ulonglong)uVar3;
    *param_2 = uVar3;
    uVar2 = 2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,uVar4);
}



// FUNCTION 149575f88 FUN_149575f88 body=425 status=ok
// SIG undefined FUN_149575f88(void)

uint FUN_149575f88(byte *param_1,uint param_2,ulonglong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  
  switch(param_2) {
  case 0:
  case 0xb:
    *(undefined2 *)(param_3 + 1) = 1;
    break;
  case 1:
    *param_3 = (longlong)(char)*param_1;
    *(undefined2 *)(param_3 + 1) = 4;
    return 1;
  case 2:
    *param_3 = (longlong)CONCAT11(*param_1,param_1[1]);
    *(undefined2 *)(param_3 + 1) = 4;
    return 2;
  case 3:
    *param_3 = (ulonglong)param_1[2] | (ulonglong)param_1[1] << 8 | (longlong)(char)*param_1 << 0x10
    ;
    *(undefined2 *)(param_3 + 1) = 4;
    return 3;
  case 4:
    *param_3 = (ulonglong)param_1[3] |
               (ulonglong)param_1[2] << 8 |
               (ulonglong)param_1[1] << 0x10 | (longlong)(char)*param_1 << 0x18;
    *(undefined2 *)(param_3 + 1) = 4;
    return 4;
  case 5:
    uVar4 = *(uint *)(param_1 + 2);
    *param_3 = CONCAT44((int)CONCAT11(*param_1,param_1[1]),
                        uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18);
    *(undefined2 *)(param_3 + 1) = 4;
    return 6;
  case 6:
  case 7:
    bVar1 = param_1[1];
    uVar6 = (uint)bVar1 << 0x10 | (uint)*param_1 << 0x18;
    uVar4 = (uint)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8);
    uVar7 = (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18;
    bVar2 = param_1[6];
    bVar3 = param_1[7];
    *param_3 = CONCAT44(uVar4 | uVar6,uVar7) | (ulonglong)bVar3 | (ulonglong)bVar2 << 8;
    if (param_2 != 6) {
      uVar5 = 1;
      if ((((uVar4 == 0 && ((uint)bVar1 << 0x10 & 0xfffff) == 0) && uVar7 == 0) &&
          (ulonglong)bVar3 == 0) && (ulonglong)bVar2 == 0) {
        uVar5 = 8;
      }
      if ((~uVar6 & 0x7ff00000) != 0) {
        uVar5 = 8;
      }
      *(undefined2 *)(param_3 + 1) = uVar5;
      return 8;
    }
    *(undefined2 *)(param_3 + 1) = 4;
    return 8;
  case 8:
  case 9:
    *param_3 = (ulonglong)(param_2 - 8);
    *(undefined2 *)(param_3 + 1) = 4;
    break;
  case 10:
    *(undefined2 *)(param_3 + 1) = 0x4001;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *(undefined4 *)param_3 = 0;
    return 0;
  default:
    param_3[2] = (ulonglong)param_1;
    uVar4 = param_2 - 0xc >> 1;
    *(uint *)((longlong)param_3 + 0xc) = uVar4;
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(&DAT_14bd41880 + (ulonglong)(param_2 & 1) * 2);
    return uVar4;
  }
  return 0;
}



// FUNCTION 149576131 FUN_149576131 body=102 status=ok
// SIG undefined FUN_149576131(void)

undefined4 FUN_149576131(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  lVar3 = *plVar2;
  uVar4 = 0;
  if ((*(int *)(lVar3 + 0x80) < param_2) && (*(char *)(lVar3 + 10) != '\0')) {
    uVar4 = FUN_149566e33(lVar3,param_2);
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return uVar4;
}



// FUNCTION 149576197 FUN_149576197 body=120 status=ok
// SIG undefined FUN_149576197(void)

void FUN_149576197(longlong param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (-1 < (int)param_2) {
    puVar1 = (ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + (ulonglong)param_2 * 0x20) + 0x72
             );
    *puVar1 = *puVar1 | 8;
    puVar1 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x72);
    *puVar1 = *puVar1 | 8;
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xef;
  }
  if ((*(int *)(param_1 + 0x48) == 0) && (iVar2 = *(int *)(param_1 + 0x28), 0 < iVar2)) {
    lVar4 = 0x18;
    lVar3 = 0;
    do {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4) + 0x72) & 8) != 0) {
        FUN_149578912();
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 14957620f FUN_14957620f body=122 status=ok
// SIG undefined FUN_14957620f(void)

void FUN_14957620f(longlong param_1,int param_2,uint *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if (param_2 == 0xf) {
    uVar3 = *(int *)(param_1 + 0x1c) + *(int *)(*plVar2 + 0x84);
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(plVar2[3] + 0x50) + 0x24 + (longlong)param_2 * 4);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  *param_3 = uVar3;
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149576289 FUN_149576289 body=301 status=ok
// SIG undefined FUN_149576289(void)

char * FUN_149576289(longlong param_1,int param_2,int param_3,char param_4,char param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = (longlong)param_2;
  if (0 < param_2) {
    lVar5 = lVar5 + (*(int *)(param_1 + 0x28) - lVar6) * 0x38;
  }
  lVar1 = (longlong)param_3 * 8 + 0x80;
  iVar3 = (int)lVar1 + 0x128;
  if (param_5 != '\0') {
    iVar3 = (int)lVar1;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar6 * 8);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0xfe;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar6 * 8);
    }
    FUN_14956aa2a(param_1,lVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar6 * 8) = 0;
  }
  if (*(int *)(lVar5 + 0x20) < iVar3) {
    iVar3 = FUN_14956b6c8(lVar5,iVar3,0);
    if (iVar3 != 0) {
      return (char *)0x0;
    }
    pcVar7 = *(char **)(lVar5 + 0x10);
  }
  else {
    pcVar7 = *(char **)(lVar5 + 0x18);
    *(char **)(lVar5 + 0x10) = pcVar7;
    *(ushort *)(lVar5 + 8) = *(ushort *)(lVar5 + 8) & 0x2d;
  }
  *(char **)(*(longlong *)(param_1 + 0x78) + lVar6 * 8) = pcVar7;
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  pcVar7[3] = '\0';
  pcVar7[4] = '\0';
  pcVar7[5] = '\0';
  pcVar7[6] = '\0';
  pcVar7[7] = '\0';
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  pcVar7[0x20] = '\0';
  pcVar7[0x21] = '\0';
  pcVar7[0x22] = '\0';
  pcVar7[0x23] = '\0';
  pcVar7[0x24] = '\0';
  pcVar7[0x25] = '\0';
  pcVar7[0x26] = '\0';
  pcVar7[0x27] = '\0';
  pcVar7[0x28] = '\0';
  pcVar7[0x29] = '\0';
  pcVar7[0x2a] = '\0';
  pcVar7[0x2b] = '\0';
  pcVar7[0x2c] = '\0';
  pcVar7[0x2d] = '\0';
  pcVar7[0x2e] = '\0';
  pcVar7[0x2f] = '\0';
  pcVar7[0x10] = '\0';
  pcVar7[0x11] = '\0';
  pcVar7[0x12] = '\0';
  pcVar7[0x13] = '\0';
  pcVar7[0x14] = '\0';
  pcVar7[0x15] = '\0';
  pcVar7[0x16] = '\0';
  pcVar7[0x17] = '\0';
  pcVar7[0x18] = '\0';
  pcVar7[0x19] = '\0';
  pcVar7[0x1a] = '\0';
  pcVar7[0x1b] = '\0';
  pcVar7[0x1c] = '\0';
  pcVar7[0x1d] = '\0';
  pcVar7[0x1e] = '\0';
  pcVar7[0x1f] = '\0';
  *pcVar7 = param_5;
  pcVar7[1] = param_4;
  *(short *)(pcVar7 + 0x50) = (short)param_3;
  *(char **)(pcVar7 + 0x60) = pcVar7 + (longlong)param_3 * 4 + 0x78;
  if (param_5 == '\0') {
    lVar5 = *(longlong *)(lVar5 + 0x10);
    *(longlong *)(pcVar7 + 0x38) = lVar5 + lVar1;
    puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar1);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar5 + lVar1) = 0;
    ((undefined8 *)(lVar5 + lVar1))[1] = 0;
  }
  return pcVar7;
}



// FUNCTION 1495763b6 FUN_1495763b6 body=135 status=ok
// SIG undefined FUN_1495763b6(void)

ulonglong FUN_1495763b6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = FUN_14957ac9d(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_14956624a(param_1);
  }
  uVar2 = FUN_14957ac9d(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return (ulonglong)uVar2;
}



// FUNCTION 14957643d FUN_14957643d body=191 status=ok
// SIG undefined FUN_14957643d(void)

int FUN_14957643d(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  lVar5 = *(longlong *)(lVar2 + 0x10);
  if (lVar5 != 0) {
    if (param_2 == 0) {
LAB_1495764a7:
      iVar3 = FUN_149567c17(lVar5,param_2,0);
      if (iVar3 != 0) goto LAB_14957648b;
    }
    else {
      do {
        if (*(int *)(lVar5 + 0x50) == param_2) goto LAB_1495764a7;
        lVar5 = *(longlong *)(lVar5 + 0x28);
      } while (lVar5 != 0);
    }
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    for (puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 8) + 0x10); puVar4 != (undefined1 *)0x0;
        puVar4 = *(undefined1 **)(puVar4 + 0x28)) {
      if (((puVar4[1] & 0x10) != 0) &&
         (*(undefined1 *)(param_1 + 0x13) = 1, *(int *)(puVar4 + 0x50) == param_2)) {
        *puVar4 = 1;
      }
    }
  }
  iVar3 = FUN_14957adb2(lVar2,param_2,0,param_3);
LAB_14957648b:
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return iVar3;
}



// FUNCTION 1495764fc FUN_1495764fc body=1054 status=ok
// SIG undefined FUN_1495764fc(void)

int FUN_1495764fc(longlong param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_b8 [32];
  int *local_98;
  undefined4 local_90;
  longlong local_80;
  undefined4 local_78;
  char local_71;
  longlong local_70;
  int local_64;
  int local_60;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (*(char *)((longlong)plVar2 + 0x21) == '\0') {
    local_98 = (int *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_60 = FUN_149568377(plVar2,&local_58,&local_5c,1);
    lVar4 = local_58;
    iVar6 = local_60;
    if (local_60 != 0) goto LAB_149576572;
LAB_1495766eb:
    FUN_149566d5d(lVar4,(param_3 & 1) * 3 + 10);
    if (*(longlong *)(lVar4 + 0x70) != 0) {
      FUN_14955db91();
    }
    *param_2 = local_5c;
    iVar6 = 0;
  }
  else {
    for (lVar4 = plVar2[2]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
      *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) & 0xfb;
    }
    FUN_14957620f(param_1,4,&local_5c);
    do {
      uVar8 = local_5c;
      local_5c = uVar8 + 1;
      uVar3 = 0;
      if (1 < local_5c) {
        iVar6 = (uVar8 - 1) - (uVar8 - 1) % (*(uint *)((longlong)plVar2 + 0x34) / 5 + 1);
        uVar3 = iVar6 + (uint)(iVar6 + 1 == (int)(0x40000000 / (ulonglong)*(uint *)(plVar2 + 6))) +
                2;
      }
    } while ((local_5c == uVar3) || (uVar8 == (uint)(0x40000000 / (ulonglong)*(uint *)(plVar2 + 6)))
            );
    uVar3 = uVar8 + 1;
    local_98 = (int *)CONCAT71(local_98._1_7_,1);
    local_5c = uVar3;
    local_60 = FUN_149568377(plVar2,&local_70,&local_64,uVar3);
    iVar6 = local_60;
    if (local_60 != 0) goto LAB_149576572;
    if (local_64 - 1U == uVar8) {
      local_58 = local_70;
      lVar4 = local_70;
LAB_149576722:
      local_98 = &local_60;
      FUN_1495691f2(plVar2,uVar3,1,0);
      if ((local_60 == 0) && (local_60 = FUN_149557edb(param_1,4,uVar3), local_60 == 0))
      goto LAB_1495766eb;
LAB_149576748:
      iVar6 = local_60;
      if (lVar4 == 0) goto LAB_149576572;
      uVar7 = *(undefined8 *)(lVar4 + 0x70);
    }
    else {
      local_71 = '\0';
      local_78 = 0;
      iVar6 = 0;
      if (plVar2[2] != 0) {
        iVar6 = FUN_149567c17(plVar2[2],0,0);
      }
      if (local_70 != 0) {
        FUN_14955db91(*(undefined8 *)(local_70 + 0x70));
      }
      if ((iVar6 != 0) ||
         (iVar6 = (**(code **)(*plVar2 + 0x108))(*plVar2,uVar3,&local_50,0), iVar6 != 0))
      goto LAB_149576572;
      local_80 = *(longlong *)(local_50 + 0x10);
      if (*(int *)(local_80 + 4) - 1U != uVar8) {
        *(undefined8 *)(local_80 + 0x50) = *(undefined8 *)(local_50 + 8);
        *(longlong *)(local_80 + 0x70) = local_50;
        *(longlong **)(local_80 + 0x48) = plVar2;
        *(uint *)(local_80 + 4) = uVar3;
        uVar5 = 100;
        if (uVar8 != 0) {
          uVar5 = 0;
        }
        *(undefined1 *)(local_80 + 9) = uVar5;
      }
      iVar6 = FUN_149568244(plVar2,uVar3,&local_71,&local_78);
      lVar4 = local_80;
      if ((byte)(local_71 - 1U) < 2) {
        local_98 = (int *)0x14bd4063a;
        iVar6 = 0xb;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11e27);
      }
      else if (iVar6 == 0) {
        local_98 = (int *)CONCAT44(local_98._4_4_,local_64);
        local_90 = 0;
        iVar6 = FUN_149568c78(plVar2,local_80,local_71,local_78);
        if (lVar4 != 0) {
          FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
        }
        if (iVar6 != 0) goto LAB_149576572;
        iVar6 = (**(code **)(*plVar2 + 0x108))(*plVar2,uVar3,&local_50,0);
        if (iVar6 != 0) goto LAB_149576572;
        lVar4 = *(longlong *)(local_50 + 0x10);
        if (*(int *)(lVar4 + 4) - 1U == uVar8) {
          local_50 = *(longlong *)(lVar4 + 0x70);
        }
        else {
          *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(local_50 + 8);
          *(longlong *)(lVar4 + 0x70) = local_50;
          *(longlong **)(lVar4 + 0x48) = plVar2;
          *(uint *)(lVar4 + 4) = uVar3;
          uVar5 = 100;
          if (uVar8 != 0) {
            uVar5 = 0;
          }
          *(undefined1 *)(lVar4 + 9) = uVar5;
        }
        local_58 = lVar4;
        local_60 = FUN_1495580c6(local_50);
        if (local_60 == 0) goto LAB_149576722;
        goto LAB_149576748;
      }
      if (local_80 == 0) goto LAB_149576572;
      uVar7 = *(undefined8 *)(local_80 + 0x70);
    }
    FUN_14955db91(uVar7);
  }
LAB_149576572:
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 14957691b FUN_14957691b body=553 status=ok
// SIG undefined FUN_14957691b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14957691b(longlong param_1,int param_2,longlong param_3)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int *_Dst_00;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  size_t _Size;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  
  iVar10 = 0;
  if ((*(char *)(param_1 + 0x60) != '\x02') && (iVar10 = 0, DAT_14c765cfc != '\0')) {
    iVar10 = *(int *)(param_1 + 0xa8);
  }
  uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_3 + 0x40) + 6);
  lVar8 = (longlong)(iVar10 * 0x68 + 200);
  _Size = lVar8 + uVar4 * 8 + 0x20;
  if (param_1 == 0) {
    _Dst_00 = (int *)FUN_145e3bd67(_Size);
  }
  else {
    _Dst_00 = (int *)FUN_14955d750(param_1);
  }
  if (_Dst_00 == (int *)0x0) {
    *(undefined8 *)(param_3 + 0x38) = 0;
    uVar5 = 7;
  }
  else {
    memset(_Dst_00,0,_Size);
    *(int **)(param_3 + 0x38) = _Dst_00;
    _Dst = (void *)((longlong)_Dst_00 + lVar8);
    *(void **)(_Dst_00 + 10) = _Dst;
    memcpy(_Dst,*(void **)(param_3 + 0x40),uVar4 * 8 + 0x20);
    *(undefined8 *)((longlong)_Dst_00 + lVar8 + 0x10) = 0;
    if (iVar10 == 0 && param_2 != 0) {
      *(short *)((longlong)_Dst + 6) = (short)param_2;
    }
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8) + 0x30);
    cVar2 = (char)iVar10;
    *(bool *)((longlong)_Dst_00 + 0x59) = 1 < (byte)(cVar2 + 1U);
    _Dst_00[3] = iVar1;
    bVar9 = cVar2 + 1;
    *(byte *)((longlong)_Dst_00 + 0x5b) = bVar9;
    *(char *)((longlong)_Dst_00 + 0x5a) = cVar2 + -1;
    *(longlong *)(_Dst_00 + 8) = param_1;
    auVar3 = _DAT_149931e80;
    if (bVar9 != 0) {
      lVar8 = (ulonglong)bVar9 - 1;
      uVar4 = (ulonglong)(bVar9 + 1 & 0xfffffffe);
      auVar11._8_4_ = (int)lVar8;
      auVar11._0_8_ = lVar8;
      auVar11._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
      piVar7 = _Dst_00 + 0x1c;
      auVar12 = pmovsxbq(in_XMM1,0x100);
      auVar11 = auVar11 ^ _DAT_149931e80;
      auVar13 = pmovsxbq(in_XMM4,0x202);
      do {
        if ((bool)(~(auVar11._0_8_ < SUB168(auVar12 ^ auVar3,0)) & 1)) {
          *(int **)piVar7 = _Dst_00;
        }
        if (SUB168(auVar12 ^ auVar3,8) <= auVar11._8_8_) {
          *(int **)(piVar7 + 0x1a) = _Dst_00;
        }
        lVar8 = auVar12._8_8_;
        auVar12._0_8_ = auVar12._0_8_ + auVar13._0_8_;
        auVar12._8_8_ = lVar8 + auVar13._8_8_;
        piVar7 = piVar7 + 0x34;
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    uVar5 = 0;
    if (*(char *)(param_1 + 0x60) != '\x02') {
      iVar6 = DAT_14c765e48 * iVar1;
      *_Dst_00 = iVar6;
      lVar8 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) + 0x74);
      iVar10 = -0x400;
      if (-1 < lVar8) {
        iVar10 = iVar1;
      }
      lVar8 = iVar10 * lVar8;
      if (0x1fffffff < lVar8) {
        lVar8 = 0x20000000;
      }
      if (iVar6 <= (int)lVar8) {
        iVar6 = (int)lVar8;
      }
      _Dst_00[1] = iVar6;
      if (DAT_14c765d00 == '\0') {
        _Dst_00[0x15] = iVar1;
        lVar8 = FUN_145e3bd67((longlong)iVar1);
        *(longlong *)(_Dst_00 + 0x10) = lVar8;
        uVar5 = 7;
        if (lVar8 != 0) {
          uVar5 = 0;
        }
      }
    }
    if ((*(ushort *)((longlong)_Dst + 8) < 0xd) &&
       (((*(longlong *)((longlong)_Dst + 0x20) == 0 ||
         (*(longlong *)((longlong)_Dst + 0x20) == *(longlong *)(param_1 + 0x10))) &&
        ((**(byte **)((longlong)_Dst + 0x18) & 2) == 0)))) {
      *(undefined1 *)(_Dst_00 + 0x17) = 3;
    }
  }
  return uVar5;
}



// FUNCTION 149576b44 FUN_149576b44 body=100 status=ok
// SIG undefined FUN_149576b44(void)

undefined8 FUN_149576b44(char *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == '\0') && ((param_1[1] & 8U) != 0)) {
    *param_2 = 0;
  }
  else {
    uVar1 = FUN_14957a8fb(param_1);
    if ((int)uVar1 == 0x10) {
      *param_2 = 1;
    }
    else {
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *param_2 = 0;
      uVar1 = FUN_14957b5e6(param_1);
      if ((int)uVar1 != 0) {
        param_1[1] = param_1[1] & 0xf7;
        return uVar1;
      }
      param_1[1] = param_1[1] | 8;
    }
  }
  return 0;
}



// FUNCTION 149576ba8 FUN_149576ba8 body=1371 status=ok
// SIG undefined FUN_149576ba8(void)

int FUN_149576ba8(char *param_1,longlong *param_2,longlong param_3,int param_4,int *param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint uVar21;
  code *pcVar22;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char local_91;
  code *local_90;
  int local_84;
  longlong local_80;
  ulonglong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) {
    if ((*param_1 != '\0') || ((param_1[1] & 2U) == 0)) goto LAB_149576cf5;
    lVar6 = *(longlong *)(param_1 + 0x30);
    if (lVar6 != param_3) {
      if (param_3 <= lVar6) {
LAB_149576cf5:
        local_90 = (code *)0x0;
        goto LAB_149576cfe;
      }
      if ((param_1[1] & 8U) == 0) {
        if (lVar6 + 1 == param_3) {
          *param_5 = 0;
          iVar9 = FUN_149577104(param_1);
          if (iVar9 != 0x65) {
            if (iVar9 != 0) goto LAB_149576c28;
            FUN_149567d86(param_1);
            local_90 = (code *)0x0;
            if (*(longlong *)(param_1 + 0x30) == param_3) goto LAB_149576c26;
            goto LAB_149576cfe;
          }
        }
        goto LAB_149576cf5;
      }
      goto LAB_149576c1f;
    }
    *param_5 = 0;
  }
  else {
    lVar6 = *param_2;
    local_90 = (code *)&LAB_14957b630;
    if (*(ushort *)(lVar6 + 8) < 0xe) {
      uVar4 = *(ushort *)(param_2[1] + 8);
      if (**(byte **)(lVar6 + 0x18) == 0) {
        uVar14 = 1;
        uVar18 = 0xff;
      }
      else {
        if ((**(byte **)(lVar6 + 0x18) & 2) != 0) goto LAB_149577049;
        uVar14 = 0xff;
        uVar18 = 1;
      }
      *(undefined1 *)((longlong)param_2 + 0x14) = uVar18;
      *(undefined1 *)((longlong)param_2 + 0x15) = uVar14;
      if ((uVar4 & 4) == 0) {
        if (((uVar4 & 0x39) == 0) &&
           (local_90 = (code *)&LAB_14957b630, *(longlong *)(lVar6 + 0x20) == 0)) {
          local_90 = FUN_14957b736;
        }
      }
      else {
        local_90 = (code *)&LAB_14957b638;
      }
    }
LAB_149577049:
    *(undefined1 *)((longlong)param_2 + 0x13) = 0;
LAB_149576cfe:
    iVar9 = FUN_14957a8fb(param_1);
    if (iVar9 != 0x10) {
      if (iVar9 == 0) {
        local_84 = 1 - param_4;
        local_78 = (ulonglong *)(param_1 + 0x30);
        pcVar22 = local_90;
        local_70 = param_3;
LAB_149576d39:
        lVar6 = *(longlong *)(param_1 + 0x88);
        iVar17 = *(ushort *)(lVar6 + 0x18) - 1;
        uVar16 = iVar17 >> ((byte)local_84 & 0x1f);
        *(short *)(param_1 + 0x56) = (short)uVar16;
        if (pcVar22 == (code *)0x0) {
          lVar15 = *(longlong *)(lVar6 + 0x68);
          uVar4 = *(ushort *)(lVar6 + 0x1a);
          local_80 = *(longlong *)(lVar6 + 0x60);
          local_91 = *(char *)(lVar6 + 3);
          uVar21 = 0;
          do {
            uVar5 = *(ushort *)(local_80 + (longlong)(int)uVar16 * 2);
            pcVar13 = (char *)((ulonglong)((uVar5 << 8 | uVar5 >> 8) & uVar4) + lVar15);
            if (local_91 != '\0') {
              while (*pcVar13 < '\0') {
                pcVar13 = pcVar13 + 1;
                if (*(char **)(lVar6 + 0x58) <= pcVar13) {
                  local_a8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
                  iVar9 = 0xb;
                  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x10fdc);
                  goto LAB_149576c28;
                }
              }
              pcVar13 = pcVar13 + 1;
            }
            FUN_149564e25(pcVar13,&local_68);
            pcVar22 = local_90;
            if (local_68 < local_70) {
              uVar21 = uVar16 + 1;
              if (iVar17 <= (int)uVar16) goto LAB_149577052;
            }
            else {
              if (local_68 <= local_70) {
                *(short *)(param_1 + 0x56) = (short)uVar16;
                uVar21 = uVar16;
                if (*(char *)(lVar6 + 8) == '\0') goto LAB_149576f2d;
                param_1[1] = param_1[1] | 2;
                *(longlong *)(param_1 + 0x30) = local_68;
                param_1[0x46] = '\0';
                param_1[0x47] = '\0';
                *param_5 = 0;
                goto LAB_149576c26;
              }
              if ((int)uVar16 <= (int)uVar21) {
                iVar9 = 1;
                goto LAB_149576f22;
              }
              iVar17 = uVar16 - 1;
            }
            uVar16 = (int)(iVar17 + uVar21) >> 1;
          } while( true );
        }
        uVar21 = 0;
        do {
          puVar8 = local_78;
          uVar4 = *(ushort *)(*(longlong *)(lVar6 + 0x60) + (longlong)(int)uVar16 * 2);
          uVar19 = (ulonglong)((uVar4 << 8 | uVar4 >> 8) & *(ushort *)(lVar6 + 0x1a));
          pbVar1 = (byte *)(*(longlong *)(lVar6 + 0x68) + uVar19);
          pbVar10 = pbVar1 + 1;
          bVar3 = *pbVar1;
          uVar12 = (uint)bVar3;
          if (*(byte *)(lVar6 + 0xb) < bVar3) {
            lVar15 = *(longlong *)(lVar6 + 0x68) + uVar19;
            if ((-1 < (char)*pbVar10) &&
               (uVar12 = (bVar3 & 0x7f) << 7 | (int)(char)*pbVar10,
               uVar12 <= *(ushort *)(lVar6 + 0xe))) {
              pbVar10 = (byte *)(lVar15 + 2);
              goto LAB_149576dad;
            }
            (**(code **)(lVar6 + 0x80))(lVar6,lVar15 - (ulonglong)*(byte *)(lVar6 + 10),local_78);
            uVar19 = *puVar8;
            uVar12 = (uint)uVar19;
            if (((int)uVar12 < 2) ||
               (uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x34),
               *(uint *)(*(longlong *)(param_1 + 0x20) + 0x3c) <
               (uint)((uVar19 & 0xffffffff) / uVar7))) {
              uVar20 = 0x11027;
LAB_149577092:
              local_a8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
              iVar9 = 0xb;
              FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar20);
            }
            else {
              lVar15 = FUN_145e3bd67(uVar12 + 0x12,(uVar19 & 0xffffffff) % uVar7);
              if (lVar15 == 0) {
                iVar9 = 7;
              }
              else {
                *(short *)(param_1 + 0x56) = (short)uVar16;
                iVar9 = FUN_149567dc1(param_1,0,uVar19 & 0xffffffff,lVar15);
                puVar2 = (undefined8 *)(lVar15 + (ulonglong)(uVar12 & 0x7fffffff));
                *puVar2 = 0;
                puVar2[1] = 0;
                *(undefined2 *)(lVar15 + 0x10 + (ulonglong)(uVar12 & 0x7fffffff)) = 0;
                param_1[1] = param_1[1] & 0xfb;
                if (iVar9 == 0) {
                  iVar9 = FUN_14957b86a(uVar19 & 0xffffffff,lVar15,param_2,0);
                  FUN_145e3b961(lVar15);
                  pcVar22 = local_90;
                  goto LAB_149576db6;
                }
                FUN_145e3b961(lVar15);
              }
            }
            goto LAB_149577010;
          }
LAB_149576dad:
          iVar9 = (*pcVar22)(uVar12,pbVar10,param_2);
LAB_149576db6:
          if (iVar9 < 0) {
            uVar21 = uVar16 + 1;
          }
          else {
            if (iVar9 == 0) {
              *param_5 = 0;
              *(short *)(param_1 + 0x56) = (short)uVar16;
              iVar9 = 0;
              if (*(char *)((longlong)param_2 + 0x13) != '\0') {
                uVar20 = 0x11047;
                goto LAB_149577092;
              }
              goto LAB_149577010;
            }
            iVar17 = uVar16 - 1;
          }
          if (iVar17 < (int)uVar21) goto LAB_149576f22;
          uVar16 = iVar17 + uVar21 >> 1;
        } while( true );
      }
      goto LAB_149576c28;
    }
LAB_149576c1f:
    *param_5 = -1;
  }
LAB_149576c26:
  iVar9 = 0;
LAB_149576c28:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_149577052:
  iVar9 = -1;
LAB_149576f22:
  if (*(char *)(lVar6 + 8) != '\0') {
    *(short *)(param_1 + 0x56) = (short)uVar16;
    *param_5 = iVar9;
    iVar9 = 0;
    goto LAB_149577010;
  }
LAB_149576f2d:
  if ((int)uVar21 < (int)(uint)*(ushort *)(lVar6 + 0x18)) {
    uVar4 = *(ushort *)(*(longlong *)(lVar6 + 0x60) + (longlong)(int)uVar21 * 2);
    puVar11 = (uint *)(*(longlong *)(lVar6 + 0x50) +
                      (ulonglong)((uVar4 << 8 | uVar4 >> 8) & *(ushort *)(lVar6 + 0x1a)));
  }
  else {
    puVar11 = (uint *)(*(longlong *)(lVar6 + 0x50) + (ulonglong)*(byte *)(lVar6 + 9) + 8);
  }
  uVar16 = *puVar11;
  *(short *)(param_1 + 0x56) = (short)uVar21;
  iVar9 = FUN_14957aa8f(param_1,uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                                uVar16 << 0x18);
  if (iVar9 != 0) goto LAB_149577010;
  goto LAB_149576d39;
LAB_149577010:
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  goto LAB_149576c28;
}



// FUNCTION 149577104 FUN_149577104 body=68 status=ok
// SIG undefined FUN_149577104(void)

ulonglong FUN_149577104(byte *param_1)

{
  short sVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[1] = param_1[1] & 0xf9;
  if (*param_1 == 0) {
    sVar1 = *(short *)(param_1 + 0x56);
    uVar7 = sVar1 + 1;
    *(ushort *)(param_1 + 0x56) = uVar7;
    if (*(ushort *)(*(longlong *)(param_1 + 0x88) + 0x18) <= uVar7) {
      *(short *)(param_1 + 0x56) = sVar1;
      uVar6 = FUN_14957c068();
      return uVar6;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x88) + 8) != '\0') {
      return 0;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x88);
      if (*(char *)(lVar2 + 8) != '\0') {
        return 0;
      }
      uVar7 = *(ushort *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)*(ushort *)(param_1 + 0x56) * 2);
      uVar4 = *(uint *)(*(longlong *)(lVar2 + 0x50) +
                       (ulonglong)((uVar7 << 8 | uVar7 >> 8) & *(ushort *)(lVar2 + 0x1a)));
      uVar6 = FUN_14957aa8f(param_1,uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                    | uVar4 << 0x18);
    } while ((int)uVar6 == 0);
    return uVar6;
  }
  bVar3 = *param_1;
  if (bVar3 != 0) {
    if (2 < bVar3) {
      uVar4 = FUN_14957a5ca(param_1);
      if (uVar4 != 0) goto LAB_14957c180;
      bVar3 = *param_1;
    }
    if (bVar3 == 1) {
      return 0x65;
    }
    if ((bVar3 == 2) && (*param_1 = 0, 0 < *(int *)(param_1 + 4))) {
      return 0;
    }
  }
  pcVar5 = *(char **)(param_1 + 0x88);
  sVar1 = *(short *)(param_1 + 0x56);
  *(ushort *)(param_1 + 0x56) = sVar1 + 1U;
  if (*pcVar5 == '\0') {
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x110c4,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    return 0xb;
  }
  if ((ushort)(sVar1 + 1U) < *(ushort *)(pcVar5 + 0x18)) {
    if (pcVar5[8] == '\0') {
LAB_14957c19e:
      uVar6 = FUN_14957c1b3(param_1);
      return uVar6;
    }
  }
  else {
    if (pcVar5[8] == '\0') {
      uVar4 = *(uint *)(*(longlong *)(pcVar5 + 0x50) + 8 + (ulonglong)(byte)pcVar5[9]);
      uVar4 = FUN_14957aa8f(param_1,uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                    | uVar4 << 0x18);
      if (uVar4 != 0) {
LAB_14957c180:
        return (ulonglong)uVar4;
      }
      goto LAB_14957c19e;
    }
    do {
      bVar3 = param_1[0x54];
      if ((longlong)(char)bVar3 == 0) {
        *param_1 = 1;
        return 0x65;
      }
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[1] = param_1[1] & 0xf9;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + (longlong)(char)bVar3 * 2 + 0x56);
      param_1[0x54] = bVar3 - 1;
      *(undefined8 *)(param_1 + 0x88) =
           *(undefined8 *)(param_1 + (longlong)(char)(bVar3 - 1) * 8 + 0x90);
      FUN_14955db91(*(undefined8 *)(pcVar5 + 0x70));
      pcVar5 = *(char **)(param_1 + 0x88);
    } while (*(ushort *)(pcVar5 + 0x18) <= *(ushort *)(param_1 + 0x56));
    if (pcVar5[2] != '\0') {
      uVar6 = FUN_149577104(param_1);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 149577148 FUN_149577148 body=58 status=ok
// SIG undefined FUN_149577148(void)

undefined8 FUN_149577148(byte *param_1)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  param_1[1] = param_1[1] & 0xf1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  if (((*param_1 == 0) && (*(short *)(param_1 + 0x56) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x88) + 8) != '\0')) {
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -1;
    return 0;
  }
  bVar3 = *param_1;
  if (bVar3 != 0) {
    if (2 < bVar3) {
      uVar4 = FUN_14957a5ca(param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      bVar3 = *param_1;
    }
    if (bVar3 == 1) {
      return 0x65;
    }
    if ((bVar3 == 2) && (*param_1 = 0, *(int *)(param_1 + 4) < 0)) {
      return 0;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x88);
  uVar1 = *(ushort *)(param_1 + 0x56);
  if (*(char *)(lVar5 + 8) == '\0') {
    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x60) + (ulonglong)uVar1 * 2);
    uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x50) +
                     (ulonglong)((uVar1 << 8 | uVar1 >> 8) & *(ushort *)(lVar5 + 0x1a)));
    uVar4 = FUN_14957aa8f(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18);
    if ((int)uVar4 == 0) {
      uVar4 = FUN_14957b5e6(param_1);
      return uVar4;
    }
  }
  else {
    if (uVar1 == 0) {
      do {
        bVar3 = param_1[0x54];
        if ((longlong)(char)bVar3 == 0) {
          *param_1 = 1;
          return 0x65;
        }
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[1] = param_1[1] & 0xf9;
        *(undefined2 *)(param_1 + 0x56) =
             *(undefined2 *)(param_1 + (longlong)(char)bVar3 * 2 + 0x56);
        lVar5 = *(longlong *)(param_1 + 0x88);
        param_1[0x54] = bVar3 - 1;
        *(undefined8 *)(param_1 + 0x88) =
             *(undefined8 *)(param_1 + (longlong)(char)(bVar3 - 1) * 8 + 0x90);
        FUN_14955db91(*(undefined8 *)(lVar5 + 0x70));
        uVar1 = *(ushort *)(param_1 + 0x56);
      } while (uVar1 == 0);
      lVar5 = *(longlong *)(param_1 + 0x88);
    }
    *(ushort *)(param_1 + 0x56) = uVar1 - 1;
    uVar4 = 0;
    if ((*(char *)(lVar5 + 2) != '\0') && (*(char *)(lVar5 + 8) == '\0')) {
      uVar4 = FUN_149577148(param_1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 149577182 FUN_149577182 body=76 status=ok
// SIG undefined FUN_149577182(void)

void FUN_149577182(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar1 = (longlong *)FUN_145e3bd67((ulonglong)*(ushort *)(param_1 + 6) * 0x38 + 0x50);
  }
  else {
    plVar1 = (longlong *)FUN_14955d750();
  }
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = (longlong)(plVar1 + 3);
    *plVar1 = param_1;
    *(short *)(plVar1 + 2) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



// FUNCTION 1495771ce FUN_1495771ce body=308 status=ok
// SIG undefined FUN_1495771ce(void)

void FUN_1495771ce(longlong param_1,uint param_2,char *param_3,longlong param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [36];
  uint local_54;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_4 + 8);
  *(undefined1 *)(param_4 + 0x12) = 0;
  local_54 = param_2;
  if (*param_3 < '\0') {
    bVar2 = FUN_149575ef2(param_3,&local_4c);
    uVar4 = (uint)bVar2;
  }
  else {
    uVar4 = 1;
    local_4c = (int)*param_3;
  }
  uVar1 = local_4c;
  uVar5 = 0;
  uVar7 = local_4c;
  do {
    if ((uVar1 <= uVar4) || (local_54 < uVar7)) break;
    if (param_3[uVar4] < 0) {
      bVar2 = FUN_149575ef2(param_3 + uVar4,&local_50);
      iVar3 = local_50;
    }
    else {
      bVar2 = 1;
      iVar3 = (int)param_3[uVar4];
    }
    uVar4 = uVar4 + bVar2;
    *(undefined1 *)(lVar6 + 10) = *(undefined1 *)(param_1 + 4);
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    iVar3 = FUN_149575f88(param_3 + uVar7,iVar3,lVar6);
    uVar7 = uVar7 + iVar3;
    lVar6 = lVar6 + 0x38;
    uVar5 = uVar5 + 1;
  } while (uVar5 < *(ushort *)(param_4 + 0x10));
  if (uVar5 != 0 && local_54 < uVar7) {
    if ((*(byte *)(lVar6 + -0x2f) & 0x24) == 0) {
      *(undefined2 *)(lVar6 + -0x30) = 1;
    }
    else {
      FUN_14956b5ca(lVar6 + -0x38);
    }
  }
  *(ushort *)(param_4 + 0x10) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149577303 FUN_149577303 body=2441 status=ok
// SIG undefined FUN_149577303(void)

int FUN_149577303(char *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined4 *_Dst;
  void *_Dst_00;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined4 local_e0;
  int *local_d8;
  undefined8 *local_d0;
  uint local_c4;
  longlong local_c0;
  longlong local_b8;
  uint local_ac;
  undefined4 *local_a8;
  char *local_a0;
  uint *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [6];
  ushort uStack_72;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = param_4;
  if (*param_1 == '\x04') {
    iVar8 = *(int *)(param_1 + 4);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 8);
    lVar13 = *(longlong *)(lVar14 + 8);
    local_d0 = param_2;
    local_ac = param_3;
    if (((param_1[1] & 0x20U) == 0) ||
       (local_54 = FUN_1495678ed(lVar13,*(undefined4 *)(param_1 + 0x50),param_1), iVar8 = local_54,
       local_54 == 0)) {
      if (*(longlong *)(param_1 + 0x80) == 0) {
        if (*(char *)(lVar14 + 0x13) != '\0') {
          lVar4 = local_d0[1];
          iVar8 = *(int *)(param_1 + 0x50);
          *(undefined1 *)(lVar14 + 0x13) = 0;
          for (puVar10 = *(undefined1 **)(*(longlong *)(lVar14 + 8) + 0x10);
              puVar10 != (undefined1 *)0x0; puVar10 = *(undefined1 **)(puVar10 + 0x28)) {
            if ((((puVar10[1] & 0x10) != 0) &&
                (*(undefined1 *)(lVar14 + 0x13) = 1, *(int *)(puVar10 + 0x50) == iVar8)) &&
               (*(longlong *)(puVar10 + 0x30) == lVar4)) {
              *puVar10 = 1;
            }
          }
        }
        if (((param_1[1] & 2U) == 0) || (local_d0[1] != *(longlong *)(param_1 + 0x30))) {
          if (param_4 == 0) {
            local_e8 = &local_58;
            iVar8 = FUN_149576ba8(param_1,0,local_d0[1],local_ac != 0);
            if (iVar8 != 0) goto LAB_14957733d;
          }
        }
        else if ((*(short *)(param_1 + 0x46) != 0) &&
                (*(int *)(param_1 + 0x40) ==
                 *(int *)(local_d0 + 5) + *(int *)((longlong)local_d0 + 0x24))) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
        }
      }
      else {
        if ((local_ac & 2) == 0 && param_4 == 0) {
          if (*(ushort *)(local_d0 + 4) == 0) {
            local_e8 = &local_58;
            iVar8 = FUN_14957a688(param_1,*local_d0,local_d0[1],local_ac != 0);
          }
          else {
            local_80 = local_d0[3];
            _local_78 = (uint7)*(ushort *)(local_d0 + 4);
            local_e8 = &local_58;
            local_88 = *(longlong *)(param_1 + 0x80);
            iVar8 = FUN_149576ba8(param_1,&local_88,0,local_ac != 0);
          }
          param_4 = local_58;
          if (iVar8 != 0) goto LAB_14957733d;
        }
        if (param_4 == 0) {
          FUN_149567d86(param_1);
          if (*(longlong *)(param_1 + 0x30) == local_d0[1]) {
            _local_78 = *local_d0;
            local_64 = (undefined4)*(longlong *)(param_1 + 0x30);
            local_60 = 0;
            iVar8 = FUN_14957c324(param_1);
            goto LAB_14957733d;
          }
        }
      }
      local_c0 = *(longlong *)(param_1 + 0x88);
      if ((-1 < *(int *)(local_c0 + 0x14)) || (iVar8 = FUN_14957c50d(local_c0), iVar8 == 0)) {
        puVar3 = *(undefined4 **)(lVar13 + 0x80);
        bVar1 = *(byte *)(local_c0 + 10);
        uVar11 = (ulonglong)bVar1;
        local_a8 = puVar3;
        local_90 = lVar13;
        if (*(char *)(local_c0 + 2) == '\0') {
          pvVar17 = (void *)*local_d0;
          uVar22 = local_d0[1];
          uVar12 = (uint)uVar22;
          bVar6 = (byte)uVar22;
          if (uVar12 < 0x80) {
            *(byte *)((longlong)puVar3 + uVar11) = bVar6;
            uVar12 = 1;
          }
          else {
            pbVar9 = (byte *)(uVar11 + (longlong)puVar3);
            if (uVar12 < 0x80) {
              *pbVar9 = bVar6;
              bVar6 = 1;
            }
            else if (uVar12 < 0x4000) {
              *pbVar9 = (byte)(uVar22 >> 7) | 0x80;
              pbVar9[1] = bVar6 & 0x7f;
              bVar6 = 2;
            }
            else {
              bVar6 = FUN_14957a85b();
            }
            uVar12 = (uint)bVar6;
          }
          iVar8 = uVar12 + bVar1;
          uVar20 = uVar22 & 0xffffffff;
        }
        else {
          uVar22 = (ulonglong)*(int *)((longlong)local_d0 + 0x24);
          uVar20 = (longlong)*(int *)(local_d0 + 5) + uVar22;
          pvVar17 = (void *)local_d0[2];
          if ((uint)uVar20 < 0x80) {
            *(byte *)((longlong)puVar3 + uVar11) = (byte)uVar20;
            uVar12 = 1;
          }
          else {
            pbVar9 = (byte *)(uVar11 + (longlong)puVar3);
            if ((uint)uVar20 < 0x4000) {
              *pbVar9 = (byte)(uVar20 >> 7) | 0x80;
              pbVar9[1] = (byte)uVar20 & 0x7f;
              bVar6 = 2;
            }
            else {
              bVar6 = FUN_14957a85b(pbVar9,uVar20);
            }
            uVar12 = (uint)bVar6;
          }
          uVar11 = local_d0[1];
          pbVar9 = (byte *)((ulonglong)(uVar12 + bVar1) + (longlong)puVar3);
          if (uVar11 < 0x80) {
            *pbVar9 = (byte)uVar11;
            iVar8 = 1;
          }
          else if (uVar11 < 0x4000) {
            *pbVar9 = (byte)(uVar11 >> 7) | 0x80;
            pbVar9[1] = (byte)uVar11 & 0x7f;
            iVar8 = 2;
          }
          else {
            iVar8 = FUN_14957a85b();
          }
          iVar8 = iVar8 + uVar12 + bVar1;
        }
        _Dst_00 = (void *)((longlong)iVar8 + (longlong)local_a8);
        iVar18 = (int)uVar20;
        if ((int)(uint)*(ushort *)(local_c0 + 0xe) < iVar18) {
          uVar2 = *(ushort *)(local_c0 + 0x10);
          lVar14 = *(longlong *)(local_c0 + 0x48);
          uVar12 = (iVar18 - (uint)uVar2) % (*(int *)(lVar14 + 0x34) - 4U) + (uint)uVar2;
          if ((int)(uint)*(ushort *)(local_c0 + 0xe) < (int)uVar12) {
            uVar12 = (uint)uVar2;
          }
          local_c4 = iVar8 + uVar12 + 4;
          local_98 = (uint *)((longlong)(int)(uVar12 + iVar8) + (longlong)local_a8);
          local_50 = 0;
          local_b8 = 0;
          local_a0 = param_1;
          while( true ) {
            uVar19 = (uint)uVar20;
            uVar16 = uVar12;
            if ((int)uVar19 < (int)uVar12) {
              uVar16 = uVar19;
            }
            uVar21 = (uint)uVar22;
            if ((int)uVar21 < (int)uVar16) {
              if ((int)uVar21 < 1) {
                memset(_Dst_00,0,(longlong)(int)uVar16);
              }
              else {
                memcpy(_Dst_00,pvVar17,uVar22 & 0xffffffff);
                uVar16 = uVar21;
              }
            }
            else {
              memcpy(_Dst_00,pvVar17,(longlong)(int)uVar16);
            }
            uVar5 = local_50;
            uVar20 = (ulonglong)(uVar19 - uVar16);
            if (uVar19 - uVar16 == 0 || (int)uVar19 < (int)uVar16) break;
            _Dst_00 = (void *)((longlong)_Dst_00 + (longlong)(int)uVar16);
            pvVar17 = (void *)((longlong)pvVar17 + (longlong)(int)uVar16);
            uVar22 = (ulonglong)(uVar21 - uVar16);
            uVar12 = uVar12 - uVar16;
            if (uVar12 == 0) {
              local_88 = 0;
              if (*(char *)(lVar14 + 0x21) != '\0') {
                do {
                  uVar16 = local_50;
                  local_50 = uVar16 + 1;
                  uVar12 = 0;
                  if (1 < local_50) {
                    iVar8 = (uVar16 - 1) - (uVar16 - 1) % (*(uint *)(lVar14 + 0x34) / 5 + 1);
                    uVar12 = iVar8 + (uint)(iVar8 + 1 ==
                                           (int)(0x40000000 / (ulonglong)*(uint *)(lVar14 + 0x30)))
                             + 2;
                  }
                } while ((local_50 == uVar12) ||
                        (uVar16 == (uint)(0x40000000 / (ulonglong)*(uint *)(lVar14 + 0x30))));
                local_50 = uVar16 + 1;
              }
              local_e8 = (int *)((ulonglong)local_e8 & 0xffffffffffffff00);
              iVar8 = FUN_149568377(lVar14,&local_88,&local_50,local_50);
              uVar12 = local_50;
              local_4c = iVar8;
              if ((*(char *)(lVar14 + 0x21) == '\0') || (iVar8 != 0)) {
                lVar13 = local_b8;
                if (iVar8 != 0) goto LAB_14957791a;
              }
              else {
                local_e8 = &local_4c;
                FUN_1495691f2(lVar14,local_50,'\x04' - (uVar5 == 0),uVar5);
                iVar8 = local_4c;
                lVar13 = local_b8;
                if (local_4c != 0) {
                  if (local_88 != 0) {
                    FUN_14955db91(*(undefined8 *)(local_88 + 0x70));
                  }
LAB_14957791a:
                  if (lVar13 != 0) {
                    FUN_14955db91(*(undefined8 *)(lVar13 + 0x70));
                  }
                  goto LAB_14957733d;
                }
              }
              *local_98 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                          uVar12 << 0x18;
              if (local_b8 != 0) {
                FUN_14955db91(*(undefined8 *)(local_b8 + 0x70));
              }
              local_b8 = local_88;
              local_98 = *(uint **)(local_88 + 0x50);
              *local_98 = 0;
              _Dst_00 = (void *)(*(longlong *)(local_88 + 0x50) + 4);
              uVar12 = *(int *)(lVar14 + 0x34) - 4;
            }
          }
          param_1 = local_a0;
          if (local_b8 != 0) {
            FUN_14955db91(*(undefined8 *)(local_b8 + 0x70));
            param_1 = local_a0;
          }
        }
        else {
          local_c4 = 4;
          if (4 < iVar8 + iVar18) {
            local_c4 = iVar8 + iVar18;
          }
          iVar8 = (int)uVar22;
          memcpy(_Dst_00,pvVar17,(longlong)iVar8);
          memset((void *)((longlong)_Dst_00 + (longlong)iVar8),0,(longlong)(iVar18 - iVar8));
        }
        lVar14 = local_c0;
        local_54 = 0;
        uVar11 = (ulonglong)*(ushort *)(param_1 + 0x56);
        if (local_58 == 0) {
          iVar8 = FUN_1495580c6(*(undefined8 *)(local_c0 + 0x70));
          puVar3 = local_a8;
          if (iVar8 != 0) goto LAB_14957733d;
          uVar2 = *(ushort *)(*(longlong *)(lVar14 + 0x60) + uVar11 * 2);
          _Dst = (undefined4 *)
                 ((ulonglong)((uVar2 << 8 | uVar2 >> 8) & *(ushort *)(lVar14 + 0x1a)) +
                 *(longlong *)(lVar14 + 0x50));
          if (*(char *)(lVar14 + 8) == '\0') {
            *local_a8 = *_Dst;
          }
          local_54 = FUN_14957afa2(lVar14,_Dst,&local_88);
          lVar14 = local_c0;
          param_1[1] = param_1[1] & 0xfb;
          if (local_c4 == uStack_72) {
            if ((local_78._0_4_ == (uint)(ushort)local_78._4_2_) &&
               ((*(char *)(local_90 + 0x21) == '\0' || (local_c4 < *(ushort *)(local_c0 + 0x10)))))
            {
              if (_Dst < (undefined4 *)
                         (*(longlong *)(local_c0 + 0x50) + (ulonglong)*(byte *)(local_c0 + 9) + 10))
              {
                uVar15 = 0x11cc4;
              }
              else {
                if ((longlong)_Dst + (ulonglong)local_c4 <= *(ulonglong *)(local_c0 + 0x58)) {
                  memcpy(_Dst,puVar3,(ulonglong)local_c4);
                  iVar8 = 0;
                  goto LAB_14957733d;
                }
                uVar15 = 0x11cc7;
              }
              local_e8 = (int *)0x14bd4063a;
              FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar15);
              iVar8 = 0xb;
              goto LAB_14957733d;
            }
          }
          FUN_14957c6cd(local_c0,uVar11,uStack_72,&local_54);
          iVar8 = local_54;
          if (local_54 != 0) goto LAB_14957733d;
        }
        else if ((local_58 < 0) && (*(short *)(local_c0 + 0x18) != 0)) {
          uVar12 = *(ushort *)(param_1 + 0x56) + 1;
          *(short *)(param_1 + 0x56) = (short)uVar12;
          uVar11 = (ulonglong)(uVar12 & 0xffff);
          param_1[1] = param_1[1] & 0xfd;
        }
        local_d8 = &local_54;
        local_e0 = 0;
        local_e8 = (int *)0x0;
        FUN_14957c7e3(lVar14,uVar11,local_a8,local_c4);
        param_1[0x46] = '\0';
        param_1[0x47] = '\0';
        iVar8 = local_54;
        if (*(char *)(lVar14 + 0xc) != '\0') {
          param_1[1] = param_1[1] & 0xfd;
          iVar8 = FUN_14957cb0c(param_1);
          *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0xc) = 0;
          *param_1 = '\x01';
          if ((iVar8 == 0 & (byte)local_ac >> 1) == 1) {
            FUN_149567cb4(param_1);
            iVar8 = 0;
            puVar7 = local_d0;
            if (*(longlong *)(param_1 + 0x80) != 0) {
              pvVar17 = (void *)FUN_145e3bd67(local_d0[1]);
              puVar7 = local_d0;
              *(void **)(param_1 + 0x18) = pvVar17;
              if (pvVar17 == (void *)0x0) {
                iVar8 = 7;
              }
              else {
                memcpy(pvVar17,(void *)*local_d0,local_d0[1]);
              }
            }
            *param_1 = '\x03';
            *(undefined8 *)(param_1 + 0x48) = puVar7[1];
          }
        }
      }
    }
  }
LAB_14957733d:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 149577cab FUN_149577cab body=1072 status=ok
// SIG undefined FUN_149577cab(void)

int FUN_149577cab(char *param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  char cVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  int *local_98;
  undefined4 local_90;
  int local_8c;
  longlong local_88;
  undefined4 local_7c;
  ulonglong local_78;
  longlong local_70;
  undefined1 local_68 [22];
  undefined2 local_52;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar11 + 8);
  if ((*param_1 != '\x03') || (iVar7 = FUN_14957a5ca(param_1), iVar7 == 0)) {
    local_8c = (int)param_1[0x54];
    uVar1 = *(ushort *)(param_1 + 0x56);
    lVar3 = *(longlong *)(param_1 + 0x88);
    uVar9 = (ulonglong)*(ushort *)(lVar3 + 0x1a);
    uVar6 = *(ushort *)(*(longlong *)(lVar3 + 0x60) + (ulonglong)uVar1 * 2);
    lVar13 = (ulonglong)((uVar6 << 8 | uVar6 >> 8) & *(ushort *)(lVar3 + 0x1a)) +
             *(longlong *)(lVar3 + 0x50);
    if (*(int *)(lVar3 + 0x14) < 0) {
      uVar9 = FUN_14957c50d(lVar3);
      iVar7 = 0xb;
      if ((int)uVar9 != 0) goto LAB_149577cf0;
    }
    local_90 = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
    if ((param_2 & 2) != 0) {
      if (((*(char *)(lVar3 + 8) == '\0') ||
          (iVar7 = *(int *)(lVar3 + 0x14), uVar6 = FUN_149564b71(lVar3,lVar13),
          (int)((uint)(*(int *)(lVar2 + 0x34) * 2) / 3) < (int)((uint)uVar6 + iVar7 + 2))) ||
         (*(short *)(lVar3 + 0x18) == 1)) {
        local_4c = FUN_149567d02(param_1);
        iVar7 = local_4c;
        if (local_4c != 0) goto LAB_149577cf0;
      }
      else {
        local_90 = 0;
      }
    }
    if (((*(char *)(lVar3 + 8) != '\0') || (iVar7 = FUN_149577148(param_1), iVar7 == 0)) &&
       (((param_1[1] & 0x20U) == 0 ||
        (iVar7 = FUN_1495678ed(lVar2,*(undefined4 *)(param_1 + 0x50),param_1), iVar7 == 0)))) {
      if ((*(longlong *)(param_1 + 0x80) == 0) && (*(char *)(lVar11 + 0x13) != '\0')) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        iVar7 = *(int *)(param_1 + 0x50);
        *(undefined1 *)(lVar11 + 0x13) = 0;
        for (puVar12 = *(undefined1 **)(*(longlong *)(lVar11 + 8) + 0x10);
            puVar12 != (undefined1 *)0x0; puVar12 = *(undefined1 **)(puVar12 + 0x28)) {
          if ((((puVar12[1] & 0x10) != 0) &&
              (*(undefined1 *)(lVar11 + 0x13) = 1, *(int *)(puVar12 + 0x50) == iVar7)) &&
             (*(longlong *)(puVar12 + 0x30) == lVar4)) {
            *puVar12 = 1;
          }
        }
      }
      iVar7 = FUN_1495580c6(*(undefined8 *)(lVar3 + 0x70));
      if (iVar7 == 0) {
        local_4c = FUN_14957afa2(lVar3,lVar13,local_68);
        FUN_14957c6cd(lVar3,(ulonglong)uVar1,local_52,&local_4c);
        iVar7 = local_4c;
        if (local_4c == 0) {
          local_88 = (longlong)local_8c;
          if (*(char *)(lVar3 + 8) == '\0') {
            lVar11 = *(longlong *)(param_1 + 0x88);
            if ((*(int *)(lVar11 + 0x14) < 0) && (iVar7 = FUN_14957c50d(), iVar7 != 0))
            goto LAB_149577cf0;
            plVar14 = (longlong *)(param_1 + 0x88);
            if ((int)local_88 < param_1[0x54] + -1) {
              plVar14 = (longlong *)(param_1 + local_88 * 8 + 0x98);
            }
            uVar6 = *(ushort *)
                     (*(longlong *)(lVar11 + 0x60) + -2 + (ulonglong)*(ushort *)(lVar11 + 0x18) * 2)
            ;
            uVar6 = (uVar6 << 8 | uVar6 >> 8) & *(ushort *)(lVar11 + 0x1a);
            local_70 = lVar11;
            if (uVar6 < 4) {
              local_a8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
              FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11d8d);
              iVar7 = 0xb;
              goto LAB_149577cf0;
            }
            local_7c = *(undefined4 *)(*plVar14 + 4);
            lVar13 = (ulonglong)uVar6 + *(longlong *)(lVar11 + 0x50);
            uVar6 = (**(code **)(lVar11 + 0x78))(lVar11,lVar13);
            local_78 = (ulonglong)uVar6;
            pcVar5 = *(char **)(lVar2 + 0x80);
            local_4c = FUN_1495580c6(*(undefined8 *)(lVar11 + 0x70));
            if (local_4c == 0) {
              local_a0 = local_7c;
              local_a8 = pcVar5;
              local_98 = &local_4c;
              FUN_14957c7e3(lVar3,uVar1,lVar13 + -4,(int)local_78 + 4);
            }
            FUN_14957c6cd(local_70,*(ushort *)(local_70 + 0x18) - 1,local_78,&local_4c);
            iVar7 = local_4c;
            if (local_4c != 0) goto LAB_149577cf0;
          }
          iVar7 = FUN_14957cb0c(param_1);
          if (iVar7 == 0) {
            if ((char)local_88 < param_1[0x54]) {
              FUN_14955db91(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x70));
              iVar7 = local_8c;
              cVar10 = param_1[0x54] + -1;
              param_1[0x54] = cVar10;
              if ((char)local_88 < cVar10) {
                do {
                  param_1[0x54] = cVar10 + -1;
                  lVar11 = (longlong)cVar10;
                  cVar10 = cVar10 + -1;
                  if (*(longlong *)(param_1 + lVar11 * 8 + 0x90) != 0) {
                    FUN_14955db91(*(undefined8 *)(*(longlong *)(param_1 + lVar11 * 8 + 0x90) + 0x70)
                                 );
                    cVar10 = param_1[0x54];
                  }
                } while ((char)iVar7 < cVar10);
              }
              *(undefined8 *)(param_1 + 0x88) =
                   *(undefined8 *)(param_1 + (longlong)cVar10 * 8 + 0x90);
              iVar7 = FUN_14957cb0c(param_1);
              if (iVar7 != 0) goto LAB_149577cf0;
            }
            if ((char)local_90 == '\0') {
              *param_1 = '\x02';
              if (uVar1 < *(ushort *)(lVar3 + 0x18)) {
                param_1[4] = '\x01';
                param_1[5] = '\0';
                param_1[6] = '\0';
                param_1[7] = '\0';
              }
              else {
                param_1[4] = -1;
                param_1[5] = -1;
                param_1[6] = -1;
                param_1[7] = -1;
                *(short *)(param_1 + 0x56) = (short)*(undefined4 *)(lVar3 + 0x18) + -1;
              }
              iVar7 = 0;
            }
            else {
              iVar8 = FUN_14957a8fb(param_1);
              if ((param_2 & 2) != 0) {
                FUN_149567cb4(param_1);
                *param_1 = '\x03';
              }
              iVar7 = 0;
              if (iVar8 != 0x10) {
                iVar7 = iVar8;
              }
            }
          }
        }
      }
    }
  }
LAB_149577cf0:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1495780dc FUN_1495780dc body=570 status=ok
// SIG undefined FUN_1495780dc(void)

undefined4 FUN_1495780dc(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar4 = *(int **)(param_1 + 0x38);
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x10) + 1);
  uVar14 = (int)cVar1;
  if (cVar1 < '\0') {
    FUN_149575ef2(*(longlong *)(param_2 + 0x10) + 1,&local_44);
    uVar14 = local_44;
  }
  if (uVar14 == 7 || 8 < uVar14 - 1) {
    if ((uVar14 & 1) == 0 || (int)uVar14 < 0xb) {
      *(undefined1 *)(piVar4 + 0x17) = 0;
    }
    else {
      *(byte *)(piVar4 + 0x17) = *(byte *)(piVar4 + 0x17) & 2;
    }
  }
  else {
    *(byte *)(piVar4 + 0x17) = *(byte *)(piVar4 + 0x17) & 1;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  iVar6 = 1;
  if (0x7f < (ulonglong)(longlong)iVar2) {
    iVar6 = 1;
    uVar10 = (longlong)iVar2;
    do {
      iVar6 = iVar6 + 1;
      bVar5 = 0x3fff < uVar10;
      uVar10 = uVar10 >> 7;
    } while (bVar5);
  }
  iVar13 = iVar2 + 0x10;
  iVar6 = iVar2 + iVar6;
  iVar3 = piVar4[1];
  uVar7 = 0;
  if (iVar3 != 0) {
    if (*(longlong *)(piVar4 + 0x10) == 0) {
      if ((iVar3 < piVar4[0x12]) || ((uVar7 = 0, *piVar4 < piVar4[0x12] && (DAT_14cc1ebb0 != 0))))
      goto LAB_14957825f;
    }
    else if (piVar4[0x14] != 0 && iVar3 < piVar4[0x14] + iVar13) {
LAB_14957825f:
      uVar7 = FUN_14957fe8f(piVar4);
      piVar4[0x12] = 0;
      piVar4[0x14] = 0;
    }
  }
  piVar4[0x12] = piVar4[0x12] + iVar6;
  if (piVar4[2] < iVar6) {
    piVar4[2] = iVar6;
  }
  lVar9 = *(longlong *)(piVar4 + 0x10);
  if (lVar9 == 0) {
    puVar8 = (undefined4 *)FUN_145e3bd67((longlong)iVar13);
    if (puVar8 == (undefined4 *)0x0) {
LAB_149578307:
      uVar7 = 7;
      goto LAB_1495781fa;
    }
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(piVar4 + 0xe);
  }
  else {
    iVar6 = piVar4[0x14];
    lVar12 = (longlong)piVar4[0x15];
    lVar11 = *(longlong *)(piVar4 + 0xe);
    if (piVar4[0x15] < iVar13 + iVar6) {
      iVar3 = (int)lVar9;
      lVar15 = (longlong)(iVar13 + iVar6);
      do {
        lVar12 = lVar12 * 2;
      } while (lVar12 < lVar15);
      lVar16 = (longlong)piVar4[1];
      if (lVar12 < piVar4[1]) {
        lVar16 = lVar12;
      }
      if (lVar16 <= lVar15) {
        lVar16 = lVar15;
      }
      lVar9 = FUN_1495539bb(lVar9,lVar16);
      if (lVar9 == 0) goto LAB_149578307;
      uVar14 = -(uint)(lVar11 == 0) | (int)lVar11 - iVar3;
      if ((int)uVar14 < 0) {
        lVar11 = *(longlong *)(piVar4 + 0xe);
      }
      else {
        lVar11 = lVar9 + (ulonglong)uVar14;
        *(longlong *)(piVar4 + 0xe) = lVar11;
      }
      *(longlong *)(piVar4 + 0x10) = lVar9;
      piVar4[0x15] = (int)lVar16;
      iVar6 = piVar4[0x14];
    }
    puVar8 = (undefined4 *)(lVar9 + iVar6);
    piVar4[0x14] = iVar6 + (iVar2 + 0x17U & 0xfffffff8);
    if (lVar11 != 0) {
      puVar8[2] = (int)lVar11 - (int)lVar9;
    }
  }
  memcpy(puVar8 + 4,*(void **)(param_2 + 0x10),(longlong)*(int *)(param_2 + 0xc));
  *puVar8 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 **)(piVar4 + 0xe) = puVar8;
LAB_1495781fa:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149578317 FUN_149578317 body=490 status=ok
// SIG undefined FUN_149578317(void)

int FUN_149578317(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined8 local_a8 [7];
  undefined1 local_70 [8];
  ushort local_68;
  uint local_64;
  char *local_60;
  int local_50;
  undefined8 local_48;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149567d86(param_2);
  uVar1 = *(uint *)(param_2 + 0x40);
  local_68 = 0;
  local_50 = 0;
  uVar5 = *(int *)(*(longlong *)(param_2 + 0x88) + 0x58) - (int)*(char **)(param_2 + 0x38);
  uVar3 = 0;
  if (0 < (int)uVar5) {
    uVar3 = uVar5;
  }
  if ((int)(uint)*(ushort *)(param_2 + 0x44) <= (int)uVar5) {
    uVar3 = (uint)*(ushort *)(param_2 + 0x44);
  }
  local_48 = param_1;
  if (uVar3 < uVar1) {
    iVar4 = FUN_14957a77f(param_2,0,uVar1,local_70);
    if (iVar4 != 0) goto LAB_14957843b;
  }
  else {
    local_68 = 0x1010;
    local_64 = uVar1;
    local_60 = *(char **)(param_2 + 0x38);
  }
  pcVar2 = local_60;
  uVar1 = (int)*local_60;
  if (*local_60 < '\0') {
    FUN_149575ef2(local_60,&local_34);
    uVar1 = local_34;
  }
  local_34 = uVar1;
  uVar3 = local_34;
  uVar1 = local_64;
  if ((2 < local_34) && (local_34 <= local_64)) {
    uVar5 = (int)pcVar2[local_34 - 1];
    if (pcVar2[local_34 - 1] < 0) {
      FUN_149575ef2(pcVar2 + (local_34 - 1),&local_38);
      uVar5 = local_38;
    }
    local_38 = uVar5;
    if ((local_38 != 7 && 0xfffffff6 < local_38 - 10) &&
       (uVar3 + (byte)(&DAT_14bd41800)[local_38] <= uVar1)) {
      FUN_149575f88(pcVar2 + (uVar1 - (byte)(&DAT_14bd41800)[local_38]),(ulonglong)local_38,local_a8
                   );
      *param_3 = local_a8[0];
      iVar4 = 0;
      if (((local_68 & 0x2400) != 0) || (local_50 != 0)) {
        FUN_14956b588(local_70);
      }
      goto LAB_14957843b;
    }
  }
  if (((local_68 & 0x2400) != 0) || (local_50 != 0)) {
    FUN_14956b588(local_70);
  }
  local_b8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
  iVar4 = 0xb;
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x14136);
LAB_14957843b:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 149578502 FUN_149578502 body=160 status=ok
// SIG undefined FUN_149578502(void)

int FUN_149578502(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_1c;
  iVar1 = FUN_149576ba8(*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x58),0);
  if (iVar1 == 0) {
    if (local_1c == 0) {
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      iVar1 = 0;
    }
    else {
      local_28 = (int *)0x14bd4063a;
      iVar1 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x13b8c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495785a3 FUN_1495785a3 body=878 status=ok
// SIG undefined FUN_1495785a3(void)

int FUN_1495785a3(longlong param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined4 local_60;
  uint local_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (*(uint *)((longlong)plVar3 + 0x3c) < param_2) {
    local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar5 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11eee);
  }
  else {
    iVar5 = (**(code **)(*plVar3 + 0x108))(*plVar3,param_2,&local_48,0);
    if (iVar5 == 0) {
      lVar4 = *(longlong *)(local_48 + 0x10);
      if (*(uint *)(lVar4 + 4) != param_2) {
        *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(local_48 + 8);
        *(longlong *)(lVar4 + 0x70) = local_48;
        *(longlong **)(lVar4 + 0x48) = plVar3;
        *(uint *)(lVar4 + 4) = param_2;
        uVar7 = 100;
        if (param_2 != 1) {
          uVar7 = 0;
        }
        *(undefined1 *)(lVar4 + 9) = uVar7;
      }
      iVar5 = FUN_14957643d(param_1,param_2,0);
      if (iVar5 == 0) {
        *param_3 = 0;
        if (*(char *)((longlong)plVar3 + 0x21) != '\0') {
          FUN_14957620f(param_1,4,&local_4c);
          if (local_4c == param_2) {
            iVar5 = FUN_14957b1d6(*(undefined8 *)(lVar4 + 0x48),lVar4,*(undefined4 *)(lVar4 + 4));
            if (lVar4 != 0) {
              FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
            }
            if (iVar5 != 0) goto LAB_149578600;
          }
          else {
            if (lVar4 != 0) {
              FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
            }
            iVar5 = (**(code **)(*plVar3 + 0x108))(*plVar3,local_4c,&local_48,0);
            if (iVar5 != 0) goto LAB_149578600;
            lVar4 = *(longlong *)(local_48 + 0x10);
            if (*(uint *)(lVar4 + 4) != local_4c) {
              *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(local_48 + 8);
              *(longlong *)(lVar4 + 0x70) = local_48;
              *(longlong **)(lVar4 + 0x48) = plVar3;
              *(uint *)(lVar4 + 4) = local_4c;
              uVar7 = 100;
              if (local_4c != 1) {
                uVar7 = 0;
              }
              *(undefined1 *)(lVar4 + 9) = uVar7;
            }
            local_68 = (char *)CONCAT44(local_68._4_4_,param_2);
            local_60 = 0;
            iVar5 = FUN_149568c78(plVar3,lVar4,1,0);
            if (lVar4 != 0) {
              FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
            }
            if ((iVar5 != 0) ||
               (iVar5 = (**(code **)(*plVar3 + 0x108))(*plVar3,local_4c,&local_48,0), iVar5 != 0))
            goto LAB_149578600;
            lVar4 = *(longlong *)(local_48 + 0x10);
            if (*(uint *)(lVar4 + 4) == local_4c) {
              plVar8 = *(longlong **)(lVar4 + 0x48);
            }
            else {
              *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(local_48 + 8);
              *(longlong *)(lVar4 + 0x70) = local_48;
              *(longlong **)(lVar4 + 0x48) = plVar3;
              *(uint *)(lVar4 + 4) = local_4c;
              uVar7 = 100;
              if (local_4c != 1) {
                uVar7 = 0;
              }
              *(undefined1 *)(lVar4 + 9) = uVar7;
              plVar8 = plVar3;
            }
            iVar5 = FUN_14957b1d6(plVar8,lVar4,*(undefined4 *)(lVar4 + 4));
            if (lVar4 != 0) {
              FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
            }
            if (iVar5 != 0) goto LAB_149578600;
            *param_3 = local_4c;
          }
          iVar5 = (int)(0x40000000 / (ulonglong)*(uint *)(plVar3 + 6));
          do {
            do {
              uVar1 = local_4c;
              local_4c = uVar1 - 1;
            } while ((-2 - iVar5) + local_4c == -1);
            uVar6 = 0;
            if (1 < local_4c) {
              uVar1 = uVar1 - 3;
              iVar9 = uVar1 - uVar1 % (*(uint *)((longlong)plVar3 + 0x34) / 5 + 1);
              uVar6 = iVar9 + (uint)(iVar9 + 1 == iVar5) + 2;
            }
          } while (local_4c == uVar6);
          iVar5 = FUN_149557edb(param_1,4,local_4c);
          goto LAB_149578600;
        }
        iVar5 = FUN_14957b1d6(*(undefined8 *)(lVar4 + 0x48),lVar4,*(undefined4 *)(lVar4 + 4));
      }
      if (lVar4 != 0) {
        FUN_14955db91(*(undefined8 *)(lVar4 + 0x70));
      }
    }
  }
LAB_149578600:
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar2 = (int *)(param_1 + 0x14);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 149578912 FUN_149578912 body=275 status=ok
// SIG undefined FUN_149578912(void)

void FUN_149578912(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  plVar6 = *(longlong **)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_149581789(param_1 + 0x20);
  plVar5 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    FUN_145e3b961(uVar3);
  }
  else {
    do {
      FUN_1495536cd(0,plVar5[2]);
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)0x0);
    FUN_145e3b961(uVar3);
    do {
      plVar5 = (longlong *)*plVar6;
      FUN_145e3b961(plVar6);
      plVar6 = plVar5;
    } while (plVar5 != (longlong *)0x0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar6 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_145e3b961(uVar2);
  }
  else {
    do {
      if (plVar6[2] != 0) {
        piVar1 = (int *)(plVar6[2] + 0x3c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_149585e6d(0);
        }
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)0x0);
    FUN_145e3b961(uVar2);
    do {
      plVar6 = (longlong *)*plVar4;
      FUN_145e3b961(plVar4);
      plVar4 = plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  FUN_149581789(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((*(ushort *)(param_1 + 0x72) & 1) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  *(ushort *)(param_1 + 0x72) = *(ushort *)(param_1 + 0x72) & 0xfff6;
  return;
}



// FUNCTION 149578a25 FUN_149578a25 body=1189 status=ok
// SIG undefined FUN_149578a25(void)

uint FUN_149578a25(longlong param_1,int param_2,longlong *param_3,undefined4 param_4)

{
  ushort *puVar1;
  int *piVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  char cVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined1 auStack_e8 [47];
  char local_b9;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined1 *local_60;
  char *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  pcVar12 = "sqlite_master";
  if (param_2 == 1) {
    pcVar12 = "sqlite_temp_master";
  }
  local_78 = "table";
  local_60 = &DAT_149e377d0;
  local_58 = "CREATE TABLE x(type text,name text,tbl_name text,rootpage int,sql text)";
  local_50 = 0;
  local_a4 = 0;
  local_9c = 0;
  local_b8 = param_1;
  local_b0 = param_3;
  local_a8 = param_2;
  local_a0 = param_4;
  local_70 = pcVar12;
  local_68 = pcVar12;
  FUN_149578ecb(&local_b8);
  uVar8 = local_a4;
  if (local_a4 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x20);
    lVar11 = (longlong)param_2 * 0x20;
    lVar6 = *(longlong *)(lVar10 + 8 + lVar11);
    if (lVar6 == 0) {
      puVar1 = (ushort *)(*(longlong *)(lVar10 + 0x38) + 0x72);
      *puVar1 = *puVar1 | 1;
      uVar8 = 0;
      goto LAB_149578ad5;
    }
    lVar10 = lVar10 + lVar11;
    if ((*(char *)(lVar6 + 0x11) != '\0') &&
       (*(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1, *(char *)(lVar6 + 0x12) == '\0')) {
      FUN_14956624a();
    }
    cVar13 = *(char *)(*(longlong *)(lVar10 + 8) + 0x10);
    if (cVar13 == '\0') {
      uVar8 = FUN_1495574f2(*(longlong *)(lVar10 + 8),0,0);
      if ((int)uVar8 < 0x65) {
        if (uVar8 == 0) goto LAB_149578be3;
        if (uVar8 == 100) {
          pcVar12 = "another row available";
        }
        else {
LAB_149578de7:
          uVar5 = uVar8 & 0xff;
          pcVar12 = "unknown error";
          if ((uVar5 < 0x1d) && ((0x1410004UL >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) {
            pcVar12 = (&PTR_s_not_an_error_14bd49c10)[uVar5];
          }
        }
      }
      else if (uVar8 == 0x65) {
        pcVar12 = "no more rows available";
      }
      else {
        if (uVar8 != 0x204) goto LAB_149578de7;
        pcVar12 = "abort due to ROLLBACK";
      }
      if (*param_3 != 0) {
        FUN_14955d65a(param_1);
      }
      lVar6 = FUN_149559683(param_1,pcVar12);
      *param_3 = lVar6;
    }
    else {
LAB_149578be3:
      lVar6 = -5;
      puVar14 = &local_98;
      local_b9 = cVar13;
      do {
        FUN_14957620f(*(undefined8 *)(lVar10 + 8),(int)lVar6 + 6,puVar14);
        puVar14 = (undefined8 *)((longlong)puVar14 + 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0);
      if ((*(byte *)(param_1 + 0x33) & 2) == 0) {
        **(undefined4 **)(lVar10 + 0x18) = (undefined4)local_98;
        if (local_88 == 0) goto LAB_149578c64;
        if (param_2 == 0) {
          bVar4 = 1;
          if ((local_88 & 3) != 0) {
            bVar4 = (byte)local_88 & 3;
          }
          *(byte *)(param_1 + 0x5e) = bVar4;
          goto LAB_149578c75;
        }
        bVar4 = *(byte *)(param_1 + 0x5e);
        if (local_88 == bVar4) goto LAB_149578c75;
        if (*param_3 != 0) {
          FUN_14955d65a(param_1);
        }
        lVar6 = FUN_149559683(param_1,
                              "attached databases must use the same text encoding as main database")
        ;
        *param_3 = lVar6;
        uVar8 = 1;
        cVar13 = local_b9;
      }
      else {
        local_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        **(undefined4 **)(lVar10 + 0x18) = 0;
LAB_149578c64:
        puVar1 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + lVar11) + 0x72);
        *puVar1 = *puVar1 | 4;
        bVar4 = *(byte *)(param_1 + 0x5e);
LAB_149578c75:
        plVar15 = (longlong *)(lVar10 + 0x18);
        *(byte *)(*plVar15 + 0x71) = bVar4;
        lVar6 = *plVar15;
        if (*(int *)(lVar6 + 0x74) == 0) {
          iVar9 = 0x7fffffff;
          if (!SBORROW4(0,(int)uStack_90)) {
            iVar9 = -(int)uStack_90;
          }
          if (-1 < (int)uStack_90) {
            iVar9 = (int)uStack_90;
          }
          iVar7 = -2000;
          if (iVar9 != 0) {
            iVar7 = iVar9;
          }
          *(int *)(lVar6 + 0x74) = iVar7;
          FUN_1495817d7(*(undefined8 *)(lVar10 + 8),
                        *(undefined4 *)(*(longlong *)(lVar10 + 0x18) + 0x74));
          lVar6 = *(longlong *)(lVar10 + 0x18);
        }
        cVar13 = local_b9;
        *(char *)(lVar6 + 0x70) = (char)((ulonglong)local_98 >> 0x20);
        bVar4 = *(byte *)(*plVar15 + 0x70);
        if (bVar4 == 0) {
          *(undefined1 *)(*plVar15 + 0x70) = 1;
          bVar4 = *(byte *)(*plVar15 + 0x70);
        }
        if (bVar4 < 5) {
          if (3 < local_98._4_4_ && param_2 == 0) {
            *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd;
          }
          lVar6 = FUN_14955a402(param_1,"SELECT*FROM\"%w\".%s ORDER BY rowid",
                                *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar11),pcVar12);
          uVar3 = *(undefined8 *)(param_1 + 0x1d0);
          *(undefined8 *)(param_1 + 0x1d0) = 0;
          uVar8 = FUN_14955b41c(param_1,lVar6,FUN_149578ecb,&local_b8);
          *(undefined8 *)(param_1 + 0x1d0) = uVar3;
          if (uVar8 == 0) {
            uVar8 = local_a4;
          }
          if (lVar6 != 0) {
            FUN_14955d65a(param_1,lVar6);
          }
          if (uVar8 == 0) {
            FUN_14957917f(param_1,param_2);
            if (*(char *)(param_1 + 0x61) != '\0') goto LAB_149578eb9;
          }
          else {
            if (*(char *)(param_1 + 0x61) != '\0') {
LAB_149578eb9:
              FUN_149557f5c(param_1);
              uVar8 = 7;
            }
            if ((*(byte *)(param_1 + 0x33) & 8) == 0) goto LAB_149578d0d;
          }
          puVar1 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + lVar11) + 0x72);
          *puVar1 = *puVar1 | 1;
          uVar8 = 0;
        }
        else {
          if (*param_3 != 0) {
            FUN_14955d65a(param_1);
          }
          lVar6 = FUN_149559683(param_1,"unsupported file format");
          *param_3 = lVar6;
          uVar8 = 1;
        }
      }
LAB_149578d0d:
      if (cVar13 == '\0') {
        FUN_149581860(*(undefined8 *)(lVar10 + 8));
      }
    }
    if (*(char *)(*(longlong *)(lVar10 + 8) + 0x11) != '\0') {
      piVar2 = (int *)(*(longlong *)(lVar10 + 8) + 0x14);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_1495662d2();
      }
    }
  }
  if (uVar8 != 0) {
    if ((((uVar8 == 0xc0a) || (uVar8 == 7)) && (*(char *)(param_1 + 0x61) == '\0')) &&
       (*(char *)(param_1 + 0x62) == '\0')) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (0 < *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
      }
    }
    FUN_149576197(param_1,param_2);
  }
LAB_149578ad5:
  *(undefined1 *)(param_1 + 0xb5) = 0;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149578ecb FUN_149578ecb body=691 status=ok
// SIG undefined FUN_149578ecb(void)

undefined8 FUN_149578ecb(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  undefined8 uVar11;
  char *pcVar12;
  char cVar13;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  lVar8 = param_1[2];
  lVar5 = (longlong)(int)lVar8 * 0x20;
  puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x18 + lVar5) + 0x72);
  *puVar1 = *puVar1 & 0xfffb;
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  if (*(char *)(lVar6 + 0x61) != '\0') {
    FUN_1495818bc(param_1,*(undefined8 *)(param_3 + 8),0);
    uVar11 = 1;
    goto LAB_149578f1a;
  }
  uVar11 = 0;
  if (param_3 == 0) goto LAB_149578f1a;
  if (*(longlong *)(param_3 + 0x18) == 0) {
    lVar8 = *(longlong *)(param_3 + 8);
LAB_149578f63:
    pcVar12 = (char *)0x0;
  }
  else {
    pcVar12 = *(char **)(param_3 + 0x20);
    if (pcVar12 != (char *)0x0) {
      lVar9 = 0;
      do {
        if ((ulonglong)(byte)pcVar12[lVar9] == 0) {
          cVar10 = (&DAT_14bd3ff30)[(byte)"create "[lVar9]];
          cVar13 = '\0';
LAB_149578fca:
          if (cVar13 != cVar10) {
            lVar8 = *(longlong *)(param_3 + 8);
            if (lVar8 == 0) goto LAB_149578f88;
            if (*pcVar12 != '\0') goto LAB_149578f63;
            goto LAB_1495790e2;
          }
          break;
        }
        cVar13 = (&DAT_14bd3ff30)[(byte)pcVar12[lVar9]];
        cVar10 = (&DAT_14bd3ff30)[(byte)"create "[lVar9]];
        if (cVar13 != cVar10) goto LAB_149578fca;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 7);
      uVar2 = *(undefined1 *)(lVar6 + 0xb4);
      *(char *)(lVar6 + 0xb4) = (char)(int)lVar8;
      local_48 = local_48 & 0xffffffff00000000;
      uVar3 = 0;
      if (*(longlong *)(param_3 + 0x18) != 0) {
        FUN_149581ec6(*(longlong *)(param_3 + 0x18),&local_48);
        uVar3 = (undefined4)local_48;
      }
      *(undefined4 *)(lVar6 + 0xb0) = uVar3;
      *(byte *)(lVar6 + 0xb8) = *(byte *)(lVar6 + 0xb8) & 0xfe;
      *(longlong *)(lVar6 + 0xc0) = param_3;
      uVar11 = 0;
      local_58 = &local_48;
      local_48 = 0;
      local_50 = 0;
      FUN_1495819bd(lVar6,*(undefined8 *)(param_3 + 0x20),0,0);
      iVar4 = *(int *)(lVar6 + 0x50);
      *(undefined1 *)(lVar6 + 0xb4) = uVar2;
      if ((iVar4 != 0) && ((*(byte *)(lVar6 + 0xb8) & 1) == 0)) {
        if (*(int *)((longlong)param_1 + 0x14) < iVar4) {
          *(int *)((longlong)param_1 + 0x14) = iVar4;
        }
        if (iVar4 != 9) {
          if (iVar4 == 7) {
            if ((*(char *)(lVar6 + 0x61) == '\0') && (*(char *)(lVar6 + 0x62) == '\0')) {
              *(undefined1 *)(lVar6 + 0x61) = 1;
              if (0 < *(int *)(lVar6 + 0xd4)) {
                *(undefined4 *)(lVar6 + 0x170) = 1;
              }
              *(int *)(lVar6 + 0x178) = *(int *)(lVar6 + 0x178) + 1;
              *(undefined2 *)(lVar6 + 0x17c) = 0;
              if (*(longlong *)(lVar6 + 0x138) != 0) {
                *(undefined4 *)(*(longlong *)(lVar6 + 0x138) + 0x18) = 7;
              }
            }
          }
          else if ((char)iVar4 != '\x06') {
            uVar7 = FUN_14955b92e(lVar6);
            FUN_1495818bc(param_1,*(undefined8 *)(param_3 + 8),uVar7);
          }
        }
      }
      FUN_149556ce4(local_48);
      goto LAB_149578f1a;
    }
    lVar8 = *(longlong *)(param_3 + 8);
    if (lVar8 == 0) {
LAB_149578f88:
      lVar8 = 0;
      goto LAB_149578f63;
    }
LAB_1495790e2:
    lVar6 = FUN_149581e2b(lVar6,lVar8,*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + lVar5));
    if (lVar6 == 0) {
      pcVar12 = "orphan index";
    }
    else {
      iVar4 = FUN_149581ec6(*(undefined8 *)(param_3 + 0x18),(int *)(lVar6 + 0x58));
      pcVar12 = "invalid rootpage";
      if ((iVar4 != 0) && (iVar4 = *(int *)(lVar6 + 0x58), 1 < iVar4)) {
        for (lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x10); lVar8 != 0;
            lVar8 = *(longlong *)(lVar8 + 0x28)) {
          if ((lVar8 != lVar6) && (*(int *)(lVar8 + 0x58) == iVar4)) goto LAB_149579102;
        }
        goto LAB_149578f1a;
      }
    }
LAB_149579102:
    lVar8 = *(longlong *)(param_3 + 8);
  }
  uVar11 = 0;
  FUN_1495818bc(param_1,lVar8,pcVar12);
LAB_149578f1a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14957917f FUN_14957917f body=354 status=ok
// SIG undefined FUN_14957917f(void)

int FUN_14957917f(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + (longlong)param_2 * 0x20);
  for (puVar5 = *(undefined8 **)(lVar1 + 0x10); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    *(uint *)(puVar5[2] + 0x40) = *(uint *)(puVar5[2] + 0x40) & 0xffffffef;
  }
  for (puVar5 = *(undefined8 **)(lVar1 + 0x28); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    *(uint *)(puVar5[2] + 100) = *(uint *)(puVar5[2] + 100) & 0xffffff7f;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x20);
  local_38 = param_1;
  local_30 = uVar2;
  lVar4 = FUN_14955d004(param_1,"sqlite_stat1",uVar2);
  iVar3 = 0;
  if (lVar4 != 0) {
    lVar4 = FUN_14955a402(param_1,"SELECT tbl,idx,stat FROM %Q.sqlite_stat1",uVar2);
    iVar3 = 7;
    if (lVar4 != 0) {
      iVar3 = FUN_14955b41c(param_1,lVar4,FUN_1495820d6,&local_38);
      FUN_14955d65a(param_1,lVar4);
    }
  }
  for (puVar5 = *(undefined8 **)(lVar1 + 0x28); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    if ((*(byte *)(puVar5[2] + 100) & 0x80) == 0) {
      FUN_149582231();
    }
  }
  if (((iVar3 == 7) && (*(char *)(param_1 + 0x61) == '\0')) && (*(char *)(param_1 + 0x62) == '\0'))
  {
    *(undefined1 *)(param_1 + 0x61) = 1;
    if (0 < *(int *)(param_1 + 0xd4)) {
      *(undefined4 *)(param_1 + 0x170) = 1;
    }
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
    *(undefined2 *)(param_1 + 0x17c) = 0;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495792e2 FUN_1495792e2 body=222 status=ok
// SIG undefined FUN_1495792e2(void)

undefined8 FUN_1495792e2(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 9) & 0x24) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
    FUN_14956b588(param_1);
  }
  puVar4 = (undefined8 *)FUN_14955d750(lVar1,0x38);
  if (puVar4 == (undefined8 *)0x0) {
    return 7;
  }
  if ((lVar1 != 0) && (puVar4 < *(undefined8 **)(lVar1 + 0x1c8))) {
    uVar3 = 0x80;
    if (*(undefined8 **)(lVar1 + 0x1b8) <= puVar4) goto LAB_14957934b;
    if (*(undefined8 **)(lVar1 + 0x1c0) <= puVar4) {
      uVar3 = (uint)*(ushort *)(lVar1 + 0x17e);
      goto LAB_14957934b;
    }
  }
  uVar3 = (*DAT_14c765d30)();
LAB_14957934b:
  *puVar4 = 0;
  puVar4[1] = lVar1;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = puVar4 + 7;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)uVar3 - 0x38;
  *(short *)(puVar4 + 6) = (short)(SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4);
  *(undefined2 *)((longlong)puVar4 + 0x32) = 1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  *(undefined2 *)(param_1 + 8) = 0x410;
  *(code **)(param_1 + 0x30) = FUN_149583a5b;
  return 0;
}



// FUNCTION 1495793c0 FUN_1495793c0 body=75 status=ok
// SIG undefined FUN_1495793c0(void)

void FUN_1495793c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_149583ab5();
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
    plVar1[1] = 0;
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x10);
    }
    else {
      if (param_2 <= *plVar2) {
        *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe;
      }
      plVar2 = plVar2 + 1;
    }
    *plVar2 = (longlong)plVar1;
    *(longlong **)(param_1 + 0x18) = plVar1;
  }
  return;
}



// FUNCTION 14957940b FUN_14957940b body=173 status=ok
// SIG undefined FUN_14957940b(void)

undefined8 FUN_14957940b(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  
  uVar4 = *(ushort *)((longlong)param_1 + 0x32);
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_149583b08(param_1[2]);
      param_1[2] = uVar5;
      uVar4 = *(ushort *)((longlong)param_1 + 0x32);
    }
    *(ushort *)((longlong)param_1 + 0x32) = uVar4 | 3;
  }
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    plVar1 = param_1 + 2;
    *param_2 = *(undefined8 *)param_1[2];
    lVar2 = *(longlong *)(*plVar1 + 8);
    *plVar1 = lVar2;
    uVar5 = 1;
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)*param_1;
      while (puVar3 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar3;
        FUN_14955d65a(param_1[1]);
      }
      *param_1 = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      param_1[5] = 0;
      *plVar1 = 0;
      param_1[3] = 0;
      *(undefined2 *)((longlong)param_1 + 0x32) = 1;
    }
  }
  return uVar5;
}



// FUNCTION 1495794b8 FUN_1495794b8 body=387 status=ok
// SIG undefined FUN_1495794b8(void)

undefined8 FUN_1495794b8(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x34) != param_2) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      puVar9 = (undefined8 *)(param_1 + 0x28);
      if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
        plVar3 = (longlong *)FUN_149583b08(plVar3);
      }
      local_78 = (undefined8 *)(param_1 + 0x10);
      puVar4 = (undefined8 *)*puVar9;
      if (puVar4 != (undefined8 *)0x0) {
        do {
          if (puVar4[2] == 0) goto LAB_14957962b;
          puVar9 = puVar4 + 1;
          FUN_149583cf3(puVar4[2],&local_50,local_58);
          puVar4[2] = 0;
          plVar5 = local_50;
          plVar8 = &local_70;
          do {
            while( true ) {
              if (*plVar3 < *plVar5) break;
              if (*plVar5 < *plVar3) {
                plVar8[1] = (longlong)plVar5;
                plVar8 = plVar5;
              }
              plVar1 = plVar5 + 1;
              plVar6 = plVar3;
              plVar5 = (longlong *)*plVar1;
              if ((longlong *)*plVar1 == (longlong *)0x0) goto LAB_14957960b;
            }
            plVar8[1] = (longlong)plVar3;
            plVar1 = plVar3 + 1;
            plVar6 = plVar5;
            plVar8 = plVar3;
            plVar3 = (longlong *)*plVar1;
          } while ((longlong *)*plVar1 != (longlong *)0x0);
LAB_14957960b:
          plVar8[1] = (longlong)plVar6;
          puVar4 = (undefined8 *)*puVar9;
          plVar3 = local_68;
        } while (puVar4 != (undefined8 *)0x0);
      }
      puVar4 = (undefined8 *)FUN_149583ab5(param_1);
      *puVar9 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
LAB_14957962b:
        uVar2 = FUN_149583c6f(plVar3);
        puVar4[2] = uVar2;
      }
      *local_78 = 0;
      local_78[1] = 0;
      *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
    }
    *(int *)(param_1 + 0x34) = param_2;
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  uVar2 = 0;
  do {
    if (lVar7 == 0) {
LAB_149579528:
      if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar2;
    }
    for (plVar3 = *(longlong **)(lVar7 + 0x10); plVar3 != (longlong *)0x0;
        plVar3 = *(longlong **)((longlong)plVar3 + lVar10)) {
      lVar10 = 8;
      if ((param_3 <= *plVar3) && (lVar10 = 0x10, *plVar3 <= param_3)) {
        uVar2 = 1;
        goto LAB_149579528;
      }
    }
    lVar7 = *(longlong *)(lVar7 + 8);
  } while( true );
}



// FUNCTION 149579652 FUN_149579652 body=343 status=ok
// SIG undefined FUN_149579652(void)

int FUN_149579652(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x24] == 0) {
    local_24 = 0;
    cVar2 = *(char *)((longlong)param_1 + 0x15);
    if ((cVar2 == '\x05') || (cVar2 == '\0')) {
      if (*(char *)((longlong)param_1 + 0x11) == '\0') {
        iVar3 = (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],1);
        if (iVar3 != 0) goto LAB_1495796c9;
        cVar2 = *(char *)((longlong)param_1 + 0x15);
      }
      if (cVar2 != '\x05') {
        *(undefined1 *)((longlong)param_1 + 0x15) = 1;
      }
    }
    iVar3 = (**(code **)(*param_1 + 0x38))(*param_1,param_1[0x25],0,&local_24);
    if ((iVar3 == 0) && (local_24 != 0)) {
      iVar3 = FUN_149566b5c(param_1);
    }
    if (iVar3 != 0) goto LAB_1495796c9;
    if (param_1[0x24] != 0) goto LAB_149579714;
  }
  else {
LAB_149579714:
    iVar3 = FUN_149566cea(param_1);
    if (iVar3 != 0) goto LAB_1495796c9;
    local_38 = param_1[0x22];
    iVar3 = FUN_1495651db(param_1[0x24],param_2,*(undefined1 *)((longlong)param_1 + 0xf),
                          *(undefined4 *)((longlong)param_1 + 0xbc));
    param_1[0x24] = 0;
    FUN_149564f9d(param_1);
    if (iVar3 != 0) {
      if ((char)param_1[1] == '\0') {
        lVar1 = *(longlong *)param_1[9];
        if (lVar1 != 0) {
          if (*(char *)((longlong)param_1 + 0x11) == '\0') {
            (**(code **)(lVar1 + 0x40))((longlong *)param_1[9],1);
          }
          if (*(char *)((longlong)param_1 + 0x15) != '\x05') {
            *(undefined1 *)((longlong)param_1 + 0x15) = 1;
          }
        }
        *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
      }
      goto LAB_1495796c9;
    }
  }
  iVar3 = 0;
LAB_1495796c9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1495797aa FUN_1495797aa body=345 status=ok
// SIG undefined FUN_1495797aa(void)

undefined1 FUN_1495797aa(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = *(byte *)((longlong)param_1 + 9);
  if ((((*(char *)((longlong)param_1 + 0x13) != '\0') && (param_2 != 4)) && (param_2 != 2)) ||
     (bVar4 == param_2)) goto LAB_1495797cc;
  *(char *)((longlong)param_1 + 9) = (char)param_2;
  if ((((param_2 & 1) != 0) || ((bVar4 & 5) != 1)) || ((char)param_1[1] != '\0')) {
    if (param_2 == 2) {
      plVar2 = (longlong *)param_1[10];
      if (*plVar2 != 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        *plVar2 = 0;
      }
    }
    goto LAB_1495797cc;
  }
  plVar2 = (longlong *)param_1[10];
  if (*plVar2 != 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *plVar2 = 0;
  }
  bVar4 = *(byte *)((longlong)param_1 + 0x15);
  if (1 < bVar4) {
    (**(code **)(*param_1 + 0x30))(*param_1,param_1[0x1b],0);
    goto LAB_1495797cc;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x14);
  if (cVar1 == '\0') {
    iVar5 = FUN_1495663ec(param_1);
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      bVar4 = *(byte *)((longlong)param_1 + 0x15);
      goto LAB_149579850;
    }
    if (iVar5 == 0) goto LAB_14957986f;
  }
  else {
    if (cVar1 == '\x01') {
LAB_149579850:
      if ((5 < bVar4) || ((0x23U >> (bVar4 & 0x1f) & 1) == 0)) goto LAB_14957986f;
      if (*(char *)((longlong)param_1 + 0x11) != '\0') {
LAB_149579867:
        if (bVar4 != 5) {
          *(undefined1 *)((longlong)param_1 + 0x15) = 2;
        }
        goto LAB_14957986f;
      }
      iVar5 = (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],2);
      if (iVar5 == 0) {
        bVar4 = *(byte *)((longlong)param_1 + 0x15);
        goto LAB_149579867;
      }
    }
    else {
LAB_14957986f:
      (**(code **)(*param_1 + 0x30))(*param_1,param_1[0x1b],0);
      if (cVar1 == '\x01') {
        lVar3 = *(longlong *)param_1[9];
        if (lVar3 != 0) {
          if (*(char *)((longlong)param_1 + 0x11) == '\0') {
            (**(code **)(lVar3 + 0x40))((longlong *)param_1[9],1);
          }
          if (*(char *)((longlong)param_1 + 0x15) != '\x05') {
            *(undefined1 *)((longlong)param_1 + 0x15) = 1;
          }
        }
        *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
        goto LAB_1495797cc;
      }
    }
    if (cVar1 != '\0') goto LAB_1495797cc;
  }
  FUN_149563041(param_1);
LAB_1495797cc:
  return *(undefined1 *)((longlong)param_1 + 9);
}



// FUNCTION 149579903 FUN_149579903 body=1439 status=ok
// SIG undefined FUN_149579903(void)

int FUN_149579903(longlong *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [43];
  undefined1 local_8d;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  char local_71;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_2 + 0x5f) == '\0') {
    if (*param_1 != 0) {
      FUN_14955d65a(param_2);
    }
    pcVar13 = "cannot VACUUM from within a transaction";
  }
  else {
    if (*(int *)(param_2 + 200) < 2) {
      uVar2 = *(uint *)(param_2 + 0x4c);
      if (param_4 == 0) {
        puVar17 = &DAT_149e02088;
      }
      else {
        uVar3 = *(uint *)(param_4 + 8);
        if ((0x4000400040004U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0) {
          if (*param_1 != 0) {
            FUN_14955d65a(param_2);
          }
          pcVar13 = "non-text filename";
          goto LAB_149579945;
        }
        uVar10 = uVar2;
        if (((~uVar3 & 0x202) == 0) && (*(char *)(param_4 + 10) == '\x01')) {
          puVar17 = *(undefined1 **)(param_4 + 0x10);
        }
        else if ((uVar3 & 1) == 0) {
          puVar17 = (undefined1 *)FUN_14956b88d(param_4,1);
          uVar10 = *(uint *)(param_2 + 0x4c);
        }
        else {
          puVar17 = (undefined1 *)0x0;
        }
        *(uint *)(param_2 + 0x4c) = uVar10 & 0xfffffff8 | 6;
      }
      uVar20 = *(ulonglong *)(param_2 + 0x30);
      local_8c = *(uint *)(param_2 + 0x2c);
      local_84 = *(undefined4 *)(param_2 + 0x74);
      local_88 = *(undefined4 *)(param_2 + 0x78);
      local_8d = *(undefined1 *)(param_2 + 0x68);
      *(uint *)(param_2 + 0x2c) = local_8c | 6;
      *(ulonglong *)(param_2 + 0x30) = uVar20 & 0xfffffffeefffadfe | 0x201;
      *(undefined1 *)(param_2 + 0x68) = 0;
      lVar18 = (longlong)param_3 * 0x20;
      local_58 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + lVar18);
      local_68 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8 + lVar18);
      local_71 = *(char *)(**(longlong **)(local_68 + 8) + 0x10);
      lVar16 = (longlong)*(int *)(param_2 + 0x28);
      iVar7 = FUN_149583dce(param_2,param_1,"ATTACH %Q AS vacuum_db",puVar17);
      lVar11 = local_68;
      *(uint *)(param_2 + 0x4c) = uVar2;
      if (iVar7 == 0) {
        lVar14 = *(longlong *)(param_2 + 0x20) + lVar16 * 0x20;
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8 + lVar16 * 0x20);
        local_80 = uVar20;
        if (param_4 != 0) {
          plVar12 = *(longlong **)(**(longlong **)(lVar4 + 8) + 0x48);
          local_50 = 0;
          lVar5 = *plVar12;
          if ((lVar5 != 0) &&
             ((iVar7 = (**(code **)(lVar5 + 0x30))(plVar12,&local_50), iVar7 != 0 || (0 < local_50))
             )) {
            if (*param_1 != 0) {
              FUN_14955d65a(param_2);
            }
            lVar11 = FUN_149559683(param_2,"output file already exists");
            *param_1 = lVar11;
            iVar7 = 1;
            uVar20 = local_80;
            goto LAB_149579e36;
          }
          *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 8;
        }
        local_60 = lVar16;
        if (*(char *)(lVar11 + 0x11) == '\0') {
          local_70 = *(int *)(*(longlong *)(lVar11 + 8) + 0x30);
          local_6c = *(int *)(*(longlong *)(lVar11 + 8) + 0x34);
        }
        else {
          iVar7 = *(int *)(lVar11 + 0x14);
          *(int *)(lVar11 + 0x14) = iVar7 + 1;
          if (*(char *)(lVar11 + 0x12) == '\0') {
            FUN_14956624a(lVar11);
            local_70 = *(int *)(*(longlong *)(lVar11 + 8) + 0x30);
            local_6c = *(int *)(*(longlong *)(lVar11 + 8) + 0x34);
            if (*(char *)(lVar11 + 0x11) == '\0') goto LAB_149579a95;
            iVar7 = *(int *)(lVar11 + 0x14) + -1;
          }
          else {
            local_70 = *(int *)(*(longlong *)(lVar11 + 8) + 0x30);
            local_6c = *(int *)(*(longlong *)(lVar11 + 8) + 0x34);
          }
          *(int *)(lVar11 + 0x14) = iVar7;
          if (iVar7 == 0) {
            FUN_1495662d2(lVar11);
          }
        }
LAB_149579a95:
        FUN_1495817d7(lVar4,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18 + lVar18) + 0x74));
        uVar8 = FUN_149583e54(lVar11,0);
        FUN_149583e54(lVar4,uVar8);
        FUN_149583efa(lVar4,0x21);
        iVar7 = FUN_149583fe9(param_2,param_1,"BEGIN");
        uVar20 = local_80;
        if ((iVar7 == 0) &&
           (iVar7 = FUN_1495574f2(lVar11,(param_4 == 0) * '\x02',0), uVar20 = local_80, iVar7 == 0))
        {
          iVar15 = local_70 - local_6c;
          plVar12 = *(longlong **)(lVar11 + 8);
          if (*(char *)(*plVar12 + 9) == '\x05') {
            *(undefined4 *)(param_2 + 0x6c) = 0;
            plVar12 = *(longlong **)(lVar11 + 8);
          }
          iVar9 = FUN_14955d2a6(lVar4,(int)plVar12[6],iVar15,0);
          iVar7 = 7;
          uVar20 = local_80;
          if ((iVar9 == 0) &&
             (((local_71 != '\0' ||
               (iVar9 = FUN_14955d2a6(lVar4,*(undefined4 *)(param_2 + 0x6c),iVar15,0),
               uVar20 = local_80, iVar9 == 0)) &&
              (uVar20 = local_80, *(char *)(param_2 + 0x61) == '\0')))) {
            iVar7 = (int)*(char *)(param_2 + 100);
            if (iVar7 < 0) {
              iVar7 = FUN_14958418e(local_68);
            }
            FUN_14958411e(lVar4,iVar7);
            uVar6 = local_58;
            *(char *)(param_2 + 0xb4) = (char)local_60;
            iVar7 = FUN_149583dce(param_2,param_1,
                                  "SELECT sql FROM \"%w\".sqlite_master WHERE type=\'table\'AND name<>\'sqlite_sequence\' AND coalesce(rootpage,1)>0"
                                  ,local_58);
            uVar20 = local_80;
            if ((iVar7 == 0) &&
               (iVar7 = FUN_149583dce(param_2,param_1,
                                      "SELECT sql FROM \"%w\".sqlite_master WHERE type=\'index\'",
                                      uVar6), uVar20 = local_80, iVar7 == 0)) {
              *(undefined1 *)(param_2 + 0xb4) = 0;
              iVar7 = FUN_149583dce(param_2,param_1,
                                    "SELECT\'INSERT INTO vacuum_db.\'||quote(name)||\' SELECT*FROM\"%w\".\'||quote(name)FROM vacuum_db.sqlite_master WHERE type=\'table\'AND coalesce(rootpage,1)>0"
                                    ,uVar6);
              *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) & 0xfb;
              uVar20 = local_80;
              if ((iVar7 == 0) &&
                 (iVar7 = FUN_149583dce(param_2,param_1,
                                        "INSERT INTO vacuum_db.sqlite_master SELECT*FROM \"%w\".sqlite_master WHERE type IN(\'view\',\'trigger\') OR(type=\'table\'AND rootpage=0)"
                                        ,uVar6), uVar20 = local_80, iVar7 == 0)) {
                uVar19 = 0xfffffffffffffffe;
                local_70 = iVar15;
                do {
                  uVar1 = (&DAT_14bd4200d)[uVar19];
                  FUN_14957620f(local_68,uVar1,&local_50);
                  iVar7 = FUN_149557edb(lVar4,uVar1,
                                        (uint)(byte)(&UNK_14bd4200e)[uVar19] + (int)local_50);
                  uVar20 = local_80;
                  if (iVar7 != 0) goto LAB_149579e36;
                  uVar19 = uVar19 + 2;
                } while (uVar19 < 8);
                if (param_4 == 0) {
                  iVar7 = FUN_1495841e8(local_68,lVar4);
                  uVar20 = local_80;
                  if ((iVar7 == 0) && (iVar7 = FUN_149581860(lVar4), uVar20 = local_80, iVar7 == 0))
                  {
                    uVar8 = FUN_14958418e(lVar4);
                    lVar11 = local_68;
                    FUN_14958411e(local_68,uVar8);
                    iVar7 = FUN_14955d2a6(lVar11,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x30),
                                          local_70,1);
                    uVar20 = local_80;
                  }
                }
                else {
                  iVar7 = FUN_149581860(lVar4);
                  uVar20 = local_80;
                }
              }
            }
          }
        }
      }
      else {
        lVar14 = 0;
      }
LAB_149579e36:
      *(undefined1 *)(param_2 + 0xb4) = 0;
      *(uint *)(param_2 + 0x2c) = local_8c;
      *(ulonglong *)(param_2 + 0x30) = uVar20;
      *(undefined4 *)(param_2 + 0x74) = local_84;
      *(undefined4 *)(param_2 + 0x78) = local_88;
      *(undefined1 *)(param_2 + 0x68) = local_8d;
      FUN_14955d2a6(local_68,0xffffffff,0xffffffff,1);
      *(undefined1 *)(param_2 + 0x5f) = 1;
      if (lVar14 != 0) {
        FUN_14956aacb(*(undefined8 *)(lVar14 + 8));
        *(undefined8 *)(lVar14 + 8) = 0;
        *(undefined8 *)(lVar14 + 0x18) = 0;
      }
      FUN_149557f5c(param_2);
      goto LAB_149579956;
    }
    if (*param_1 != 0) {
      FUN_14955d65a(param_2);
    }
    pcVar13 = "cannot VACUUM - SQL statements in progress";
  }
LAB_149579945:
  lVar11 = FUN_149559683(param_2,pcVar13);
  *param_1 = lVar11;
  iVar7 = 1;
LAB_149579956:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 149579ea3 FUN_149579ea3 body=268 status=ok
// SIG undefined FUN_149579ea3(void)

undefined8 FUN_149579ea3(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  bVar5 = param_3 + 1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_14956624a(param_1);
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(param_1 + 0x11) != '\0') goto LAB_149579eca;
    plVar3 = *(longlong **)(lVar7 + 0x70);
LAB_149579f08:
    for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[2]) {
      if (((int)plVar3[1] == param_2) && (*plVar3 == param_1)) goto LAB_149579f7c;
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 8);
LAB_149579eca:
    if ((*(longlong *)(lVar7 + 0x78) != param_1) &&
       (uVar6 = 0x106, (*(byte *)(lVar7 + 0x26) & 0x40) != 0)) goto LAB_149579f86;
    plVar3 = *(longlong **)(lVar7 + 0x70);
    plVar4 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      do {
        if (((*plVar4 != param_1) && ((int)plVar4[1] == param_2)) &&
           (*(byte *)((longlong)plVar4 + 0xc) != bVar5)) {
          uVar6 = 0x106;
          if (bVar5 == 2) {
            *(byte *)(lVar7 + 0x26) = *(byte *)(lVar7 + 0x26) | 0x80;
          }
          goto LAB_149579f86;
        }
        plVar1 = plVar4 + 2;
        plVar4 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
      goto LAB_149579f08;
    }
  }
  plVar3 = (longlong *)FUN_145e3bd67(0x18);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 7;
  }
  else {
    *(undefined4 *)((longlong)plVar3 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar3 + 0xc) = 0;
    *(int *)(plVar3 + 1) = param_2;
    *plVar3 = param_1;
    plVar3[2] = *(longlong *)(lVar7 + 0x70);
    *(longlong *)(lVar7 + 0x70) = (longlong)plVar3;
LAB_149579f7c:
    uVar6 = 0;
    if (*(byte *)((longlong)plVar3 + 0xc) < bVar5) {
      *(byte *)((longlong)plVar3 + 0xc) = bVar5;
    }
  }
LAB_149579f86:
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar2 = (int *)(param_1 + 0x14);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return uVar6;
}



// FUNCTION 149579faf FUN_149579faf body=349 status=ok
// SIG undefined FUN_149579faf(void)

undefined8 FUN_149579faf(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = FUN_14955d004(param_1,param_3,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x20));
  uVar6 = **(undefined8 **)(lVar4 + 0x58);
  lVar5 = FUN_14958201d(param_1 + 0x1f8,uVar6,0);
  plVar3 = *(longlong **)(lVar5 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = *(longlong *)(*plVar3 + 8);
    if ((lVar5 != 0) && (*(longlong *)(*plVar3 + 0x28) != 0)) {
      uVar6 = FUN_149584380(param_1,lVar4,plVar3,lVar5,param_4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      plVar7 = *(longlong **)(lVar4 + 0x60);
      plVar3 = plVar7;
      while( true ) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        if (*plVar3 == param_1) break;
        plVar3 = (longlong *)plVar3[5];
      }
      if (*(int *)(param_1 + 500) * -0x33333333 + 0x19999999U < 0x33333333) {
        lVar5 = FUN_14955d6fd(param_1,*(undefined8 *)(param_1 + 0x218),
                              (longlong)*(int *)(param_1 + 500) * 8 + 0x28);
        if (lVar5 == 0) {
          return 7;
        }
        lVar8 = (longlong)*(int *)(param_1 + 500);
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar8 * 8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + lVar8 * 8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar5 + 0x20 + lVar8 * 8) = 0;
        *(longlong *)(param_1 + 0x218) = lVar5;
        plVar7 = *(longlong **)(lVar4 + 0x60);
      }
      for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[5]) {
        if (*plVar7 == param_1) goto LAB_14957a098;
      }
      plVar7 = (longlong *)0x0;
LAB_14957a098:
      iVar2 = *(int *)(param_1 + 500);
      *(int *)(param_1 + 500) = iVar2 + 1;
      *(longlong **)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 8) = plVar7;
      *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
      return 0;
    }
  }
  uVar6 = FUN_14955a402(param_1,"no such module: %s",uVar6);
  *param_4 = uVar6;
  return 1;
}



// FUNCTION 14957a10c FUN_14957a10c body=39 status=ok
// SIG undefined FUN_14957a10c(void)

longlong FUN_14957a10c(longlong param_1)

{
  if ((*(byte *)(param_1 + 9) & 0x24) != 0) {
    FUN_14956b5ca(param_1);
  }
  *(undefined2 *)(param_1 + 8) = 4;
  return param_1;
}



// FUNCTION 14957a133 FUN_14957a133 body=72 status=ok
// SIG undefined FUN_14957a133(void)

void FUN_14957a133(undefined8 *param_1,undefined8 *param_2,ushort param_3)

{
  undefined8 uVar1;
  
  do {
    FUN_14956b5ca(param_1);
  } while ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0);
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  if ((*(byte *)((longlong)param_2 + 9) & 8) == 0) {
    *(ushort *)(param_1 + 1) = (ushort)*(undefined4 *)(param_1 + 1) & 0xe3ff | param_3;
  }
  return;
}



// FUNCTION 14957a17b FUN_14957a17b body=173 status=ok
// SIG undefined FUN_14957a17b(void)

ulonglong FUN_14957a17b(undefined8 *param_1)

{
  int iVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  undefined6 uVar3;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 9) & 0x40) != 0) {
    FUN_149558ecc(param_1);
  }
  iVar1 = FUN_14956c0e2(param_1[2],param_1,*(undefined4 *)((longlong)param_1 + 0xc),
                        *(undefined1 *)((longlong)param_1 + 10));
  uVar3 = (undefined6)((ulonglong)unaff_RDI >> 0x10);
  uVar2 = CONCAT62(uVar3,8);
  if (iVar1 < 1) {
    if ((iVar1 != 0) ||
       (iVar1 = FUN_14956c622(param_1[2],&local_20,*(undefined4 *)((longlong)param_1 + 0xc),
                              *(undefined1 *)((longlong)param_1 + 10)), 1 < iVar1))
    goto LAB_14957a1e0;
  }
  else if ((iVar1 != 1) ||
          (iVar1 = FUN_14956c622(param_1[2],&local_20,*(undefined4 *)((longlong)param_1 + 0xc),
                                 *(undefined1 *)((longlong)param_1 + 10)), iVar1 != 0))
  goto LAB_14957a1e0;
  *param_1 = local_20;
  uVar2 = CONCAT62(uVar3,4);
LAB_14957a1e0:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14957a229 FUN_14957a229 body=226 status=ok
// SIG undefined FUN_14957a229(void)

void FUN_14957a229(double *param_1)

{
  double dVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *(ushort *)(param_1 + 1);
  if ((uVar2 & 0x2d) != 0) goto LAB_14957a248;
  uVar3 = FUN_14956c0e2(param_1[2],param_1,*(undefined4 *)((longlong)param_1 + 0xc),
                        *(undefined1 *)((longlong)param_1 + 10));
  if ((uVar3 < 2) &&
     (iVar4 = FUN_14956c622(param_1[2],&local_18,*(undefined4 *)((longlong)param_1 + 0xc),
                            *(undefined1 *)((longlong)param_1 + 10)), iVar4 < 2)) {
LAB_14957a29c:
    *param_1 = local_18;
    uVar2 = 4;
  }
  else {
    dVar1 = *param_1;
    local_18 = (double)(longlong)dVar1;
    if (((dVar1 == 0.0) && (!NAN(dVar1))) ||
       ((uVar2 = 8, 0xffe < (uint)((ulonglong)((longlong)local_18 + -0x8000000000000) >> 0x34) &&
        (dVar1 == (double)(longlong)local_18)))) goto LAB_14957a29c;
  }
  uVar2 = uVar2 | *(ushort *)(param_1 + 1) & 0x3e40;
LAB_14957a248:
  *(ushort *)(param_1 + 1) = uVar2 & 0xbfed;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14957a30c FUN_14957a30c body=462 status=ok
// SIG undefined FUN_14957a30c(void)

undefined4
FUN_14957a30c(undefined8 *param_1,undefined4 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = *(char *)(param_3 + 8);
  if (*(char *)((longlong)param_1 + 10) == cVar4) {
    local_a8 = *(longlong *)(param_2 + 4);
    (**(code **)(param_3 + 0x18))
              (*(undefined8 *)(param_3 + 0x10),*(undefined4 *)((longlong)param_1 + 0xc),param_1[2],
               param_2[3]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
  }
  local_70 = param_1[5];
  local_38 = 0;
  local_78 = 0;
  local_48 = param_1[2];
  local_58 = *param_1;
  uStack_50 = param_1[1];
  if ((*(byte *)((longlong)param_1 + 9) & 8) == 0) {
    uStack_50 = uStack_50 & 0xffffffffffffe3ff | 0x1000;
  }
  local_88 = *(longlong *)(param_2 + 4);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  if ((*(byte *)((longlong)param_2 + 9) & 8) == 0) {
    uStack_90 = uStack_90 & 0xffffe3ff | 0x1000;
  }
  local_30 = local_70;
  if (((~(uint)uStack_50 & 0x202) != 0) || (lVar2 = local_48, uStack_50._2_1_ != cVar4)) {
    if ((uStack_50 & 1) == 0) {
      lVar2 = FUN_14956b88d(&local_58);
      cVar4 = *(char *)(param_3 + 8);
    }
    else {
      lVar2 = 0;
    }
  }
  if (((~uStack_90 & 0x202) == 0) && (lVar3 = local_88, uStack_90._2_1_ == cVar4)) {
LAB_14957a426:
    if ((lVar2 != 0) && (lVar3 != 0)) {
      local_a8 = lVar3;
      uVar1 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x10),uStack_50._4_4_,lVar2,uStack_8c);
      goto LAB_14957a462;
    }
  }
  else if ((uStack_90 & 1) == 0) {
    lVar3 = FUN_14956b88d(&local_98);
    goto LAB_14957a426;
  }
  uVar1 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 7;
  }
LAB_14957a462:
  if (((uStack_50 & 0x2400) != 0) || (local_38 != 0)) {
    FUN_14956b588(&local_58);
  }
  if (((uStack_90 & 0x2400) != 0) || (local_78 != 0)) {
    FUN_14956b588(&local_98);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14957a4db FUN_14957a4db body=170 status=ok
// SIG undefined FUN_14957a4db(void)

int FUN_14957a4db(uint *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1[3];
  uVar2 = param_2[3];
  uVar1 = (ushort)param_1[2];
  if (((*(ushort *)(param_2 + 2) | uVar1) >> 0xe & 1) == 0) {
    uVar6 = uVar2;
    if ((int)uVar5 < (int)uVar2) {
      uVar6 = uVar5;
    }
    iVar3 = memcmp(*(void **)(param_1 + 4),*(void **)(param_2 + 4),(longlong)(int)uVar6);
    iVar4 = uVar5 - uVar2;
    if (iVar3 != 0) {
      iVar4 = iVar3;
    }
  }
  else {
    if ((uVar1 & 0x4000 & *(ushort *)(param_2 + 2)) == 0) {
      if ((uVar1 & 0x4000) != 0) {
        if (0 < (int)uVar2) {
          uVar7 = 0;
          do {
            if (*(char *)(*(longlong *)(param_2 + 4) + uVar7) != '\0') {
              return -1;
            }
            uVar7 = uVar7 + 1;
          } while (uVar2 != uVar7);
        }
        return *param_1 - uVar2;
      }
      if (0 < (int)uVar5) {
        uVar7 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 4) + uVar7) != '\0') {
            return 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
    else {
      uVar5 = *param_1;
    }
    iVar4 = uVar5 - *param_2;
  }
  return iVar4;
}



// FUNCTION 14957a585 FUN_14957a585 body=69 status=ok
// SIG undefined FUN_14957a585(void)

undefined8 FUN_14957a585(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x38);
  bVar3 = *pbVar1;
  if (2 < bVar3) {
    uVar2 = FUN_14957a5ca(pbVar1);
    if ((int)uVar2 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_14957a5a6;
    }
    bVar3 = *pbVar1;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (bVar3 == 0) {
    return 0;
  }
LAB_14957a5a6:
  *(undefined1 *)(param_1 + 2) = 1;
  return uVar2;
}



// FUNCTION 14957a5ca FUN_14957a5ca body=189 status=ok
// SIG undefined FUN_14957a5ca(void)

ulonglong FUN_14957a5ca(char *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  if (*param_1 == '\x04') {
    uVar2 = (ulonglong)*(uint *)(param_1 + 4);
  }
  else {
    *param_1 = '\x01';
    if (DAT_14c765e88 != (code *)0x0) {
      iVar1 = (*DAT_14c765e88)(0x19a);
      uVar2 = 10;
      if (iVar1 != 0) goto LAB_14957a5f1;
    }
    local_28 = &local_14;
    uVar2 = FUN_14957a688(param_1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x48),0)
    ;
    if ((int)uVar2 == 0) {
      FUN_145e3b961(*(undefined8 *)(param_1 + 0x18));
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      if (local_14 == 0) {
        if (*(int *)(param_1 + 4) == 0) {
          uVar2 = 0;
          goto LAB_14957a5f1;
        }
      }
      else {
        *(int *)(param_1 + 4) = local_14;
      }
      uVar2 = 0;
      if (*param_1 == '\0') {
        *param_1 = '\x02';
      }
    }
  }
LAB_14957a5f1:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14957a688 FUN_14957a688 body=247 status=ok
// SIG undefined FUN_14957a688(void)

ulonglong FUN_14957a688(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    uVar3 = FUN_149576ba8(param_1,0,param_3,param_4);
    return uVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  lVar4 = FUN_149577182(lVar1);
  uVar3 = 7;
  if (lVar4 != 0) {
    FUN_1495771ce(lVar1,param_3 & 0xffffffff,param_2,lVar4);
    if ((*(ushort *)(lVar4 + 0x10) == 0) || (*(ushort *)(lVar1 + 8) < *(ushort *)(lVar4 + 0x10))) {
      uVar3 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xfd90,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    }
    else {
      uVar2 = FUN_149576ba8(param_1,lVar4,param_3,param_4,param_5);
      uVar3 = (ulonglong)uVar2;
    }
    FUN_14955d65a(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10),lVar4);
  }
  return uVar3;
}



// FUNCTION 14957a77f FUN_14957a77f body=220 status=ok
// SIG undefined FUN_14957a77f(void)

int FUN_14957a77f(longlong param_1,int param_2,uint param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_4 + 8) = 1;
  if ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x3c) *
      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x30) < (ulonglong)(param_3 + param_2)) {
    iVar1 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x12b40,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  }
  else {
    if (*(int *)(param_4 + 0x20) < (int)(param_3 + 1)) {
      iVar1 = FUN_14956b6c8(param_4,param_3 + 1,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = *(undefined8 *)(param_4 + 0x10);
    }
    else {
      uVar2 = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(param_4 + 0x10) = uVar2;
      *(undefined2 *)(param_4 + 8) = 1;
    }
    iVar1 = FUN_149567dc1(param_1,param_2,param_3,uVar2);
    if (iVar1 == 0) {
      *(undefined1 *)(*(longlong *)(param_4 + 0x10) + (ulonglong)param_3) = 0;
      *(undefined2 *)(param_4 + 8) = 0x10;
      *(uint *)(param_4 + 0xc) = param_3;
      iVar1 = 0;
    }
    else if (((*(byte *)(param_4 + 9) & 0x24) != 0) || (*(int *)(param_4 + 0x20) != 0)) {
      FUN_14956b588(param_4);
    }
  }
  return iVar1;
}



// FUNCTION 14957a85b FUN_14957a85b body=159 status=ok
// SIG undefined FUN_14957a85b(void)

longlong FUN_14957a85b(byte *param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_38 [36];
  byte abStack_14 [12];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 >> 0x38 == 0) {
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      abStack_14[lVar3 + 2] = (byte)param_2 | 0x80;
      lVar2 = lVar3 + 1;
      bVar1 = 0x7f < param_2;
      param_2 = param_2 >> 7;
    } while (bVar1);
    abStack_14[2] = abStack_14[2] & 0x7f;
    lVar3 = lVar3 + 2;
    lVar4 = lVar2;
    do {
      *param_1 = abStack_14[lVar3];
      param_1 = param_1 + 1;
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  else {
    param_1[8] = (byte)param_2;
    param_2 = param_2 >> 8;
    lVar2 = 8;
    do {
      param_1[lVar2 + -1] = (byte)param_2 | 0x80;
      param_2 = param_2 >> 7;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar2 = 9;
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14957a8fb FUN_14957a8fb body=404 status=ok
// SIG undefined FUN_14957a8fb(void)

ulonglong FUN_14957a8fb(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((char)param_1[0x54] < '\0') {
    iVar5 = *(int *)(param_1 + 0x50);
    if (iVar5 != 0) {
      if (2 < *param_1) {
        if (*param_1 == 4) {
          uVar2 = *(uint *)(param_1 + 4);
          goto LAB_14957a975;
        }
        FUN_145e3b961(*(undefined8 *)(param_1 + 0x18));
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        *param_1 = 1;
        iVar5 = *(int *)(param_1 + 0x50);
      }
      uVar2 = FUN_14957ab26(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),iVar5,param_1 + 0x88,0,
                            param_1[2]);
      if (uVar2 != 0) {
        *param_1 = 1;
        goto LAB_14957a975;
      }
      param_1[0x54] = 0;
      pcVar3 = *(char **)(param_1 + 0x88);
      param_1[0x55] = pcVar3[2];
      goto LAB_14957a917;
    }
LAB_14957a96d:
    *param_1 = 1;
    uVar2 = 0x10;
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x88);
    if (param_1[0x54] == 0) {
LAB_14957a917:
      if ((*pcVar3 != '\0') && ((bool)pcVar3[2] == (*(longlong *)(param_1 + 0x80) == 0)))
      goto LAB_14957a92c;
      uVar6 = 0x10eca;
    }
    else {
      while( true ) {
        FUN_14955db91(*(undefined8 *)(pcVar3 + 0x70));
        bVar1 = param_1[0x54] - 1;
        param_1[0x54] = bVar1;
        if (bVar1 == 0) break;
        pcVar3 = *(char **)(param_1 + (longlong)(char)bVar1 * 8 + 0x90);
      }
      pcVar3 = *(char **)(param_1 + 0x90);
      *(char **)(param_1 + 0x88) = pcVar3;
LAB_14957a92c:
      uVar2 = 0;
      param_1[0x56] = 0;
      param_1[0x57] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[1] = param_1[1] & 0xf1;
      if (*(short *)(pcVar3 + 0x18) != 0) {
        *param_1 = 0;
        goto LAB_14957a975;
      }
      if (pcVar3[8] != '\0') goto LAB_14957a96d;
      if (*(int *)(pcVar3 + 4) == 1) {
        uVar2 = *(uint *)(*(longlong *)(pcVar3 + 0x50) + 8 + (ulonglong)(byte)pcVar3[9]);
        *param_1 = 0;
        uVar4 = FUN_14957aa8f(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                      (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
        return uVar4;
      }
      uVar6 = 0x10ed7;
    }
    uVar2 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar6,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  }
LAB_14957a975:
  return (ulonglong)uVar2;
}



// FUNCTION 14957aa8f FUN_14957aa8f body=151 status=ok
// SIG undefined FUN_14957aa8f(void)

undefined8 FUN_14957aa8f(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((longlong)*(char *)(param_1 + 0x54) < 0x13) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0x46) = 0;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf9;
    *(undefined2 *)(param_1 + 0x58 + (longlong)*(char *)(param_1 + 0x54) * 2) =
         *(undefined2 *)(param_1 + 0x56);
    *(undefined8 *)(param_1 + 0x90 + (longlong)*(char *)(param_1 + 0x54) * 8) =
         *(undefined8 *)(param_1 + 0x88);
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
    uVar1 = FUN_14957ab26(uVar1,param_2,param_1 + 0x88,param_1,*(undefined1 *)(param_1 + 2));
  }
  else {
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x10e40,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    uVar1 = 0xb;
  }
  return uVar1;
}



// FUNCTION 14957ab26 FUN_14957ab26 body=374 status=ok
// SIG undefined FUN_14957ab26(void)

int FUN_14957ab26(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  char *local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (uint)param_2;
  if (*(uint *)((longlong)param_1 + 0x3c) < uVar4) {
    local_48 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar2 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x102e0);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x108))(*param_1,param_2,&local_38,param_5);
    if (iVar2 == 0) {
      pcVar3 = *(char **)(local_38 + 0x10);
      *param_3 = (longlong)pcVar3;
      if (*pcVar3 == '\0') {
        if (*(uint *)(pcVar3 + 4) != uVar4) {
          *(undefined8 *)(pcVar3 + 0x50) = *(undefined8 *)(local_38 + 8);
          *(longlong *)(pcVar3 + 0x70) = local_38;
          *(longlong **)(pcVar3 + 0x48) = param_1;
          *(uint *)(pcVar3 + 4) = uVar4;
          cVar1 = 'd';
          if (uVar4 != 1) {
            cVar1 = '\0';
          }
          pcVar3[9] = cVar1;
          pcVar3 = (char *)*param_3;
        }
        iVar2 = FUN_1495648a4(pcVar3);
        if (iVar2 == 0) goto LAB_14957abc8;
      }
      else {
LAB_14957abc8:
        iVar2 = 0;
        if ((param_4 == 0) ||
           ((*(short *)(*param_3 + 0x18) != 0 &&
            (*(char *)(*param_3 + 2) == *(char *)(param_4 + 0x55))))) goto LAB_14957ab8f;
        local_48 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
        iVar2 = 0xb;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x102f5);
      }
      if (*param_3 != 0) {
        FUN_14955db91(*(undefined8 *)(*param_3 + 0x70));
      }
    }
  }
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + 0x54) + -1;
    *(char *)(param_4 + 0x54) = cVar1;
    *(undefined8 *)(param_4 + 0x88) = *(undefined8 *)(param_4 + 0x90 + (longlong)cVar1 * 8);
  }
LAB_14957ab8f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 14957ac9d FUN_14957ac9d body=277 status=ok
// SIG undefined FUN_14957ac9d(void)

undefined8
FUN_14957ac9d(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined1 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((param_3 != 0) && (*(longlong *)(lVar2 + 0x80) == 0)) {
    puVar3 = (undefined8 *)FUN_149565030(*(undefined4 *)(lVar2 + 0x30));
    *(undefined8 **)(lVar2 + 0x80) = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      return 7;
    }
    *puVar3 = 0;
    plVar1 = (longlong *)(lVar2 + 0x80);
    *plVar1 = *plVar1 + 4;
    if (*plVar1 == 0) {
      return 7;
    }
  }
  if ((int)param_2 < 2) {
    if (param_2 != 1) {
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x10b8b,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
      return 0xb;
    }
    param_2 = (uint)(*(int *)(lVar2 + 0x3c) != 0);
  }
  *(uint *)(param_5 + 0x50) = param_2;
  param_5[0x54] = 0xff;
  *(undefined8 *)(param_5 + 0x80) = param_4;
  *(longlong *)(param_5 + 8) = param_1;
  *(longlong *)(param_5 + 0x20) = lVar2;
  param_5[1] = param_3 != 0;
  param_5[2] = (param_3 == 0) * '\x02';
  lVar4 = *(longlong *)(lVar2 + 0x10);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      if (*(uint *)(lVar4 + 0x50) == param_2) {
        *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 0x20;
        param_5[1] = param_5[1] | 0x20;
      }
      lVar4 = *(longlong *)(lVar4 + 0x28);
    } while (lVar4 != 0);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
  }
  *(undefined8 *)(param_5 + 0x28) = uVar5;
  *(undefined1 **)(lVar2 + 0x10) = param_5;
  *param_5 = 1;
  return 0;
}



// FUNCTION 14957adb2 FUN_14957adb2 body=495 status=ok
// SIG undefined FUN_14957adb2(void)

int FUN_14957adb2(longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  char *local_78;
  ulonglong local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(uint *)(param_1 + 0x3c) < (uint)param_2) {
    local_78 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar2 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11e81);
    goto LAB_14957ae05;
  }
  local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
  iVar2 = FUN_14957ab26(param_1,param_2,&local_50,0);
  if (iVar2 != 0) goto LAB_14957ae05;
  if (*(char *)(local_50 + 1) == '\0') {
    *(undefined1 *)(local_50 + 1) = 1;
    if (*(short *)(local_50 + 0x18) == 0) {
      uVar3 = 0;
      uVar6 = (ulonglong)*(byte *)(local_50 + 9);
    }
    else {
      uVar5 = 0;
      local_70 = (ulonglong)*(byte *)(local_50 + 9);
      do {
        uVar1 = *(ushort *)(*(longlong *)(local_50 + 0x60) + uVar5 * 2);
        puVar4 = (uint *)((ulonglong)((uVar1 << 8 | uVar1 >> 8) & *(ushort *)(local_50 + 0x1a)) +
                         *(longlong *)(local_50 + 0x50));
        if (*(char *)(local_50 + 8) == '\0') {
          uVar3 = *puVar4;
          iVar2 = FUN_14957adb2(param_1,uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                        (uVar3 & 0xff00) << 8 | uVar3 << 0x18,1,param_4);
          if (iVar2 != 0) goto LAB_14957af45;
        }
        iVar2 = FUN_14957afa2(local_50,puVar4,local_68);
        if (iVar2 != 0) goto LAB_14957af45;
        uVar5 = uVar5 + 1;
        uVar3 = (uint)*(ushort *)(local_50 + 0x18);
        uVar6 = local_70;
      } while (uVar5 < *(ushort *)(local_50 + 0x18));
    }
    if (*(char *)(local_50 + 8) == '\0') {
      uVar3 = *(uint *)(*(longlong *)(local_50 + 0x50) + 8 + uVar6);
      iVar2 = FUN_14957adb2(param_1,uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                    | uVar3 << 0x18,1,param_4);
      if (iVar2 != 0) goto LAB_14957af45;
    }
    else if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + uVar3;
    }
    if (param_3 == 0) {
      iVar2 = FUN_1495580c6(*(undefined8 *)(local_50 + 0x70));
      if (iVar2 == 0) {
        FUN_149566d5d(local_50,*(byte *)(*(longlong *)(local_50 + 0x50) + uVar6) | 8);
        iVar2 = 0;
      }
    }
    else {
      iVar2 = FUN_14957b1d6(*(undefined8 *)(local_50 + 0x48),local_50,*(undefined4 *)(local_50 + 4))
      ;
    }
  }
  else {
    local_78 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar2 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11e86);
  }
LAB_14957af45:
  *(undefined1 *)(local_50 + 1) = 0;
  if (local_50 != 0) {
    FUN_14955db91(*(undefined8 *)(local_50 + 0x70));
  }
LAB_14957ae05:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 14957afa2 FUN_14957afa2 body=493 status=ok
// SIG undefined FUN_14957afa2(void)

int FUN_14957afa2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  char *local_68;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(param_1 + 0x80))();
  iVar3 = 0;
  if (*(uint *)(param_3 + 0x10) != (uint)*(ushort *)(param_3 + 0x14)) {
    uVar5 = param_2 + (ulonglong)*(ushort *)(param_3 + 0x16);
    if (*(ulonglong *)(param_1 + 0x58) < uVar5) {
      uVar8 = 0x1134c;
LAB_14957b17c:
      local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      iVar3 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar8);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x48);
      uVar7 = *(int *)(lVar1 + 0x34) - 4;
      uVar2 = *(uint *)(param_3 + 0x10) + ~(uint)*(ushort *)(param_3 + 0x14);
      if (!CARRY4(uVar2,uVar7)) {
        uVar6 = (ulonglong)(uVar2 + uVar7) / (ulonglong)uVar7;
        uVar2 = *(uint *)(uVar5 - 4);
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        do {
          local_4c = 0;
          local_58 = 0;
          if ((uVar2 < 2) || (*(uint *)(lVar1 + 0x3c) < uVar2)) {
            uVar8 = 0x1135d;
            goto LAB_14957b17c;
          }
          uVar7 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar7;
          if (uVar7 == 0) {
LAB_14957b07a:
            local_58 = FUN_14957b190(lVar1,uVar2);
            if (local_58 != 0) goto LAB_14957b0ef;
            lVar4 = 0;
LAB_14957b091:
            iVar3 = FUN_14957b1d6(lVar1,lVar4,uVar2);
          }
          else {
            iVar3 = FUN_1495680a6(lVar1,uVar2,&local_58,&local_4c);
            if (iVar3 != 0) break;
            if (local_58 == 0) goto LAB_14957b07a;
LAB_14957b0ef:
            lVar4 = local_58;
            if (*(short *)(*(longlong *)(local_58 + 0x70) + 0x36) == 1) goto LAB_14957b091;
            local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
            iVar3 = 0xb;
            FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11371);
          }
          if ((local_58 != 0) && (*(longlong *)(local_58 + 0x70) != 0)) {
            FUN_14955db91();
          }
          if ((iVar3 != 0) || (iVar3 = 0, uVar2 = local_4c, uVar7 == 0)) break;
        } while( true );
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14957b190 FUN_14957b190 body=70 status=ok
// SIG undefined FUN_14957b190(void)

longlong FUN_14957b190(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14956295c(*param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(int *)(lVar2 + 4) != param_2) {
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(lVar2 + 0x70) = lVar1;
      *(undefined8 **)(lVar2 + 0x48) = param_1;
      *(int *)(lVar2 + 4) = param_2;
      *(undefined1 *)(lVar2 + 9) = 0;
    }
  }
  return lVar2;
}



// FUNCTION 14957b1d6 FUN_14957b1d6 body=920 status=ok
// SIG undefined FUN_14957b1d6(void)

int FUN_14957b1d6(longlong *param_1,undefined1 *param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 < 2) || (*(uint *)((longlong)param_1 + 0x3c) < param_3)) {
    local_58 = (int *)0x14bd4063a;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x112b9);
    iVar4 = local_4c;
    iVar5 = 0xb;
    goto LAB_14957b234;
  }
  lVar3 = param_1[3];
  if (param_2 == (undefined1 *)0x0) {
    param_2 = (undefined1 *)FUN_14957b190(param_1);
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x70);
    psVar1 = (short *)(lVar11 + 0x36);
    *psVar1 = *psVar1 + 1;
    piVar2 = (int *)(*(longlong *)(lVar11 + 0x18) + 0x18);
    *piVar2 = *piVar2 + 1;
  }
  local_4c = FUN_1495580c6(*(undefined8 *)(lVar3 + 0x70));
  iVar4 = local_4c;
  if (local_4c == 0) {
    uVar6 = *(uint *)(*(longlong *)(lVar3 + 0x50) + 0x24);
    uVar8 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) + 1;
    *(uint *)(*(longlong *)(lVar3 + 0x50) + 0x24) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    if ((*(byte *)((longlong)param_1 + 0x26) & 4) != 0) {
      if (param_2 == (undefined1 *)0x0) {
        iVar5 = (**(code **)(*param_1 + 0x108))(*param_1,param_3,&local_48,0);
        iVar4 = iVar5;
        if (iVar5 != 0) goto LAB_14957b234;
        param_2 = *(undefined1 **)(local_48 + 0x10);
        if (*(uint *)(param_2 + 4) != param_3) {
          *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(local_48 + 8);
          *(longlong *)(param_2 + 0x70) = local_48;
          *(longlong **)(param_2 + 0x48) = param_1;
          *(uint *)(param_2 + 4) = param_3;
          param_2[9] = 0;
        }
      }
      local_4c = FUN_1495580c6(*(undefined8 *)(param_2 + 0x70));
      iVar4 = local_4c;
      if (local_4c != 0) goto LAB_14957b297;
      memset(*(void **)(param_2 + 0x50),0,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x48) + 0x30)
            );
    }
    if (*(char *)((longlong)param_1 + 0x21) != '\0') {
      local_58 = &local_4c;
      lVar11 = 0;
      FUN_1495691f2(param_1,param_3,2,0);
      if (local_4c == 0) goto LAB_14957b2d4;
      goto LAB_14957b29a;
    }
LAB_14957b2d4:
    if (uVar6 != 0) {
      uVar6 = *(uint *)(*(longlong *)(lVar3 + 0x50) + 0x20);
      uVar8 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      iVar4 = (**(code **)(*param_1 + 0x108))(*param_1,uVar8,&local_48,0);
      if (iVar4 != 0) goto LAB_14957b297;
      lVar11 = *(longlong *)(local_48 + 0x10);
      if (*(uint *)(lVar11 + 4) == uVar8) {
        lVar7 = *(longlong *)(lVar11 + 0x50);
      }
      else {
        lVar7 = *(longlong *)(local_48 + 8);
        *(longlong *)(lVar11 + 0x50) = lVar7;
        *(longlong *)(lVar11 + 0x70) = local_48;
        *(longlong **)(lVar11 + 0x48) = param_1;
        *(uint *)(lVar11 + 4) = uVar8;
        uVar9 = 100;
        if (uVar6 != 0x1000000) {
          uVar9 = 0;
        }
        *(undefined1 *)(lVar11 + 9) = uVar9;
      }
      uVar6 = *(uint *)(lVar7 + 4);
      uVar10 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = *(uint *)((longlong)param_1 + 0x34) >> 2;
      if (uVar6 - 2 < uVar10) {
        local_58 = (int *)0x14bd4063a;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x112ef);
        local_4c = 0xb;
      }
      else {
        if (uVar6 - 8 <= uVar10) goto LAB_14957b331;
        local_4c = FUN_1495580c6(*(undefined8 *)(lVar11 + 0x70));
        if (local_4c == 0) {
          uVar6 = uVar10 + 1;
          *(uint *)(*(longlong *)(lVar11 + 0x50) + 4) =
               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
          *(uint *)(*(longlong *)(lVar11 + 0x50) + (ulonglong)(uVar10 * 4 + 8)) =
               param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
               param_3 << 0x18;
          if ((param_2 != (undefined1 *)0x0) && ((*(byte *)((longlong)param_1 + 0x26) & 4) == 0)) {
            lVar3 = *(longlong *)(param_2 + 0x70);
            if ((*(char *)(*(longlong *)(lVar3 + 0x28) + 0x10) == '\0') &&
               (((*(ushort *)(lVar3 + 0x34) & 2) != 0 &&
                (*(int *)(*(longlong *)(lVar3 + 0x28) + 0x80) == 0)))) {
              *(ushort *)(lVar3 + 0x34) = *(ushort *)(lVar3 + 0x34) & 0xffeb | 0x10;
            }
          }
          local_4c = FUN_14957b56f(param_1,param_3);
        }
      }
      goto LAB_14957b29a;
    }
    lVar11 = 0;
    uVar8 = 0;
LAB_14957b331:
    if (param_2 != (undefined1 *)0x0) {
LAB_14957b502:
      local_4c = FUN_1495580c6(*(undefined8 *)(param_2 + 0x70));
      if (local_4c == 0) {
        **(uint **)(param_2 + 0x50) =
             uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        *(undefined4 *)(*(longlong *)(param_2 + 0x50) + 4) = 0;
        *(uint *)(*(longlong *)(lVar3 + 0x50) + 0x20) =
             param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18
        ;
      }
      goto LAB_14957b29a;
    }
    iVar4 = (**(code **)(*param_1 + 0x108))(*param_1,param_3,&local_48,0);
    if (iVar4 == 0) {
      param_2 = *(undefined1 **)(local_48 + 0x10);
      if (*(uint *)(param_2 + 4) != param_3) {
        *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(local_48 + 8);
        *(longlong *)(param_2 + 0x70) = local_48;
        *(longlong **)(param_2 + 0x48) = param_1;
        *(uint *)(param_2 + 4) = param_3;
        param_2[9] = 0;
      }
      goto LAB_14957b502;
    }
  }
  else {
LAB_14957b297:
    local_4c = iVar4;
    lVar11 = 0;
LAB_14957b29a:
    iVar4 = local_4c;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
      FUN_14955db91(*(undefined8 *)(param_2 + 0x70));
      iVar4 = local_4c;
    }
  }
  local_4c = iVar4;
  iVar4 = local_4c;
  iVar5 = local_4c;
  if (lVar11 != 0) {
    FUN_14955db91(*(undefined8 *)(lVar11 + 0x70));
    iVar4 = local_4c;
    iVar5 = local_4c;
  }
LAB_14957b234:
  local_4c = iVar4;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14957b56f FUN_14957b56f body=119 status=ok
// SIG undefined FUN_14957b56f(void)

undefined8 FUN_14957b56f(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  if (puVar2 == (uint *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x3c);
    puVar2 = (uint *)FUN_145e3bd67(0x200);
    if (puVar2 == (uint *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 7;
    }
    memset(puVar2 + 1,0,0x1fc);
    *puVar2 = uVar1;
    *(uint **)(param_1 + 0x58) = puVar2;
  }
  if (*puVar2 < param_2) {
    return 0;
  }
  uVar3 = FUN_1495607d9(puVar2,param_2);
  return uVar3;
}



// FUNCTION 14957b5e6 FUN_14957b5e6 body=74 status=ok
// SIG undefined FUN_14957b5e6(void)

undefined8 FUN_14957b5e6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  do {
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (*(char *)(lVar2 + 8) != '\0') {
      *(short *)(param_1 + 0x56) = (short)*(undefined4 *)(lVar2 + 0x18) + -1;
      return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x50) + 8 + (ulonglong)*(byte *)(lVar2 + 9));
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(lVar2 + 0x18);
    uVar3 = FUN_14957aa8f(param_1,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                  uVar1 << 0x18);
  } while ((int)uVar3 == 0);
  return uVar3;
}



// FUNCTION 14957b736 FUN_14957b736 body=278 status=ok
// SIG undefined FUN_14957b736(void)

int FUN_14957b736(int param_1,byte *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  char *local_48;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (int)(char)param_2[1];
  if ((char)param_2[1] < '\0') {
    FUN_149575ef2(param_2 + 1,&local_34);
    uVar4 = local_34;
  }
  if ((int)uVar4 < 0xc) goto LAB_14957b76b;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 - 0xc >> 1;
    if (param_1 < (int)(uVar4 + *param_2)) {
      local_48 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x1409b);
      *(undefined1 *)(param_3 + 0x13) = 0xb;
      iVar2 = 0;
      goto LAB_14957b76f;
    }
    uVar1 = *(uint *)(*(longlong *)(param_3 + 8) + 0xc);
    uVar3 = uVar4;
    if ((int)uVar1 < (int)uVar4) {
      uVar3 = uVar1;
    }
    iVar2 = memcmp(param_2 + *param_2,*(void **)(*(longlong *)(param_3 + 8) + 0x10),
                   (longlong)(int)uVar3);
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        if (uVar4 == uVar1) {
          if (1 < *(ushort *)(param_3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
          }
          iVar2 = (int)*(char *)(param_3 + 0x12);
          *(undefined1 *)(param_3 + 0x16) = 1;
          goto LAB_14957b76f;
        }
        if ((int)uVar1 < (int)uVar4) goto LAB_14957b791;
      }
LAB_14957b76b:
      iVar2 = (int)*(char *)(param_3 + 0x14);
      goto LAB_14957b76f;
    }
  }
LAB_14957b791:
  iVar2 = (int)*(char *)(param_3 + 0x15);
LAB_14957b76f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 14957b86a FUN_14957b86a body=2045 status=ok
// SIG undefined FUN_14957b86a(void)

uint FUN_14957b86a(uint param_1,byte *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_f8 [32];
  char *local_d8;
  uint local_cc;
  longlong *local_c8;
  undefined1 *local_c0;
  uint local_b4;
  double local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  uint local_a4;
  byte *local_a0;
  undefined8 local_88;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pdVar11 = (double *)param_3[1];
  local_c8 = param_3;
  if (param_4 == 0) {
    if ((char)*param_2 < '\0') {
      bVar5 = FUN_149575ef2(param_2);
      uVar10 = (ulonglong)bVar5;
      uVar14 = local_74;
    }
    else {
      uVar10 = 1;
      uVar14 = (int)(char)*param_2;
    }
    uVar15 = 0;
    uVar18 = uVar14;
    goto LAB_14957b8ec;
  }
  if ((char)param_2[1] < '\0') {
    cVar4 = FUN_149575ef2(param_2 + 1);
    uVar10 = (ulonglong)(byte)(cVar4 + 1);
    uVar14 = (uint)*param_2;
    uVar18 = local_b0._0_4_;
    if (local_b0._0_4_ < 0x80) goto LAB_14957b8d0;
    uVar18 = local_b0._0_4_ - 0xc >> 1;
  }
  else {
    uVar14 = (uint)*param_2;
    uVar10 = 2;
    uVar18 = (int)(char)param_2[1];
LAB_14957b8d0:
    uVar18 = (uint)(byte)(&DAT_14bd41800)[uVar18];
  }
  pdVar11 = pdVar11 + 7;
  uVar15 = 1;
  uVar18 = uVar18 + uVar14;
LAB_14957b8ec:
  if (param_1 < uVar18) {
    local_d8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x13f70);
    *(undefined1 *)((longlong)local_c8 + 0x13) = 0xb;
LAB_14957bec7:
    uVar17 = 0;
  }
  else {
    local_c0 = (undefined1 *)((longlong)local_c8 + 0x13);
    while( true ) {
      dVar3 = pdVar11[1];
      if (((ulonglong)dVar3 & 0x24) == 0) break;
      bVar5 = param_2[uVar10];
      uVar6 = (uint)bVar5;
      uVar17 = 1;
      uVar16 = uVar6;
      if (9 < bVar5) goto LAB_14957bda6;
      if (bVar5 == 7) {
        uVar17 = (uint)param_2[(ulonglong)uVar18 + 1] << 0x10 | (uint)param_2[uVar18] << 0x18;
        uVar16 = (uint)(ushort)(*(ushort *)(param_2 + (ulonglong)uVar18 + 2) << 8 |
                               *(ushort *)(param_2 + (ulonglong)uVar18 + 2) >> 8);
        uVar12 = (uint)param_2[(ulonglong)uVar18 + 5] << 0x10 |
                 (uint)param_2[(ulonglong)uVar18 + 4] << 0x18;
        local_b0 = (double)(CONCAT44(uVar16 | uVar17,uVar12) |
                            (ulonglong)param_2[(ulonglong)uVar18 + 7] |
                           (ulonglong)param_2[(ulonglong)uVar18 + 6] << 8);
        uVar6 = 1;
        local_a8 = 8;
        if ((((uVar16 != 0 || ((uint)param_2[(ulonglong)uVar18 + 1] << 0x10 & 0xfffff) != 0) ||
             uVar12 != 0) || (ulonglong)param_2[(ulonglong)uVar18 + 7] != 0) ||
            (ulonglong)param_2[(ulonglong)uVar18 + 6] != 0) {
          local_a8 = 1;
        }
        if ((~uVar17 & 0x7ff00000) != 0) {
          local_a8 = 8;
        }
        if (-9.223372036854776e+18 <= local_b0) {
          uVar6 = 1;
          if (local_b0 < 9.223372036854776e+18) {
            dVar3 = *pdVar11;
            if ((longlong)local_b0 <= (longlong)dVar3) {
              if ((longlong)dVar3 <= (longlong)local_b0) {
                uVar17 = 1;
                uVar16 = uVar6;
                if (local_b0 <= (double)(longlong)dVar3) {
                  uVar6 = 7;
                  uVar17 = -(uint)(local_b0 < (double)(longlong)dVar3);
                  goto LAB_14957ba79;
                }
                goto LAB_14957bda6;
              }
              goto LAB_14957be25;
            }
          }
LAB_14957bfc1:
          uVar17 = 1;
          uVar16 = 1;
          goto LAB_14957bda6;
        }
        goto LAB_14957be25;
      }
      if (bVar5 == 0) goto LAB_14957be25;
      switch(bVar5) {
      case 1:
        uVar8 = (ulonglong)(char)param_2[uVar18];
        break;
      case 2:
        uVar9 = (longlong)(char)param_2[uVar18] << 8;
        uVar8 = (ulonglong)param_2[(ulonglong)uVar18 + 1];
        goto LAB_14957bd65;
      case 3:
        uVar8 = (ulonglong)param_2[(ulonglong)uVar18 + 1] << 8 |
                (longlong)(char)param_2[uVar18] << 0x10;
        bVar5 = param_2[(ulonglong)uVar18 + 2];
        goto LAB_14957bd52;
      case 4:
        uVar8 = (ulonglong)param_2[(ulonglong)uVar18 + 2] << 8 |
                (longlong)(int)((uint)param_2[uVar18] << 0x18) |
                (ulonglong)param_2[(ulonglong)uVar18 + 1] << 0x10;
        bVar5 = param_2[(ulonglong)uVar18 + 3];
LAB_14957bd52:
        uVar8 = bVar5 | uVar8;
        break;
      case 5:
        uVar12 = *(uint *)(param_2 + (ulonglong)uVar18 + 2);
        uVar9 = (ulonglong)
                (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
                );
        uVar8 = (ulonglong)(uint)(int)CONCAT11(param_2[uVar18],param_2[(ulonglong)uVar18 + 1]) <<
                0x20;
LAB_14957bd65:
        uVar8 = uVar8 | uVar9;
        break;
      case 6:
        uVar8 = *(ulonglong *)(param_2 + uVar18);
        uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 |
                uVar8 << 0x38;
        break;
      default:
        uVar8 = (ulonglong)(uVar6 - 8);
      }
      if ((longlong)uVar8 < (longlong)*pdVar11) {
LAB_14957be25:
        uVar17 = 0xffffffff;
        uVar16 = uVar6;
LAB_14957bda6:
        bVar19 = uVar16 == 0;
LAB_14957bdab:
        bVar5 = *(byte *)(*(longlong *)(*local_c8 + 0x18) + (uVar15 & 0xffffffff));
        if (bVar5 == 0) goto LAB_14957bdc9;
        if ((bVar5 & 2) != 0) {
          if (bVar19) {
            if ((bVar5 & 1) != 0) goto LAB_14957bdc9;
          }
          else if ((*(byte *)(pdVar11 + 1) & 1) == (bVar5 & 1)) goto LAB_14957bdc9;
        }
        uVar17 = -uVar17;
        goto LAB_14957bdc9;
      }
      if ((longlong)*pdVar11 < (longlong)uVar8) goto LAB_14957bda6;
LAB_14957ba85:
      if (uVar15 + 1 == (ulonglong)*(ushort *)(local_c8 + 2)) goto LAB_14957be15;
      if (uVar6 < 0x80) {
LAB_14957bb7a:
        uVar6 = (uint)(byte)(&DAT_14bd41800)[uVar6];
        iVar7 = 1;
      }
      else {
        iVar7 = 1;
        uVar8 = (ulonglong)uVar6;
        do {
          iVar7 = iVar7 + 1;
          bVar19 = 0x3fff < uVar8;
          uVar8 = uVar8 >> 7;
        } while (bVar19);
        uVar6 = uVar6 - 0xc >> 1;
      }
      uVar18 = uVar6 + uVar18;
      uVar15 = uVar15 + 1;
      pdVar11 = pdVar11 + 7;
      uVar6 = (int)uVar10 + iVar7;
      uVar10 = (ulonglong)uVar6;
      if ((uVar14 <= uVar6) || (param_1 < uVar18)) goto LAB_14957be15;
    }
    if (((ulonglong)dVar3 & 8) == 0) {
      if (((ulonglong)dVar3 & 2) == 0) {
        bVar5 = param_2[uVar10];
        uVar6 = (uint)bVar5;
        if (((ulonglong)dVar3 & 0x10) == 0) {
          uVar17 = (uint)(bVar5 != 0);
        }
        else {
          if ((char)bVar5 < '\0') {
            FUN_149575ef2(param_2 + uVar10);
            uVar6 = local_b4;
          }
          uVar17 = 0xffffffff;
          uVar16 = uVar6;
          if ((uVar6 < 0xc) || ((uVar6 & 1) != 0)) goto LAB_14957bda6;
          uVar16 = uVar6 - 0xc >> 1;
          if (param_1 < uVar18 + uVar16) {
            uVar13 = 0x13fdb;
LAB_14957c02f:
            local_d8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
            FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar13);
            *local_c0 = 0xb;
            goto LAB_14957bec7;
          }
          if ((*(byte *)((longlong)pdVar11 + 9) & 0x40) == 0) {
            uVar17 = *(uint *)((longlong)pdVar11 + 0xc);
            uVar12 = uVar17;
            if ((int)uVar16 < (int)uVar17) {
              uVar12 = uVar16;
            }
            local_cc = param_1;
            uVar12 = memcmp(param_2 + uVar18,(void *)pdVar11[2],(longlong)(int)uVar12);
            param_1 = local_cc;
            uVar17 = uVar16 - uVar17;
            if (uVar12 != 0) {
              uVar17 = uVar12;
            }
          }
          else {
            if (uVar6 - 0xc != 0) {
              uVar8 = 0;
              do {
                if (param_2[uVar8 + uVar18] != 0) {
                  uVar17 = 1;
                  bVar19 = false;
                  goto LAB_14957bdab;
                }
                uVar8 = uVar8 + 1;
              } while (uVar16 + (uVar16 == 0) != uVar8);
            }
            uVar17 = uVar16 - *(int *)pdVar11;
          }
        }
      }
      else {
        uVar6 = (int)(char)param_2[uVar10];
        if ((char)param_2[uVar10] < '\0') {
          FUN_149575ef2(param_2 + uVar10,&local_b4);
          uVar6 = local_b4;
        }
        if (uVar6 < 0xc) {
          uVar17 = 0xffffffff;
          uVar16 = uVar6;
          goto LAB_14957bda6;
        }
        if ((uVar6 & 1) == 0) goto LAB_14957bfc1;
        local_a4 = uVar6 - 0xc >> 1;
        if ((param_1 < local_a4 + uVar18) || (lVar1 = *local_c8, *(ushort *)(lVar1 + 8) <= uVar15))
        {
          uVar13 = 0x13fbd;
          goto LAB_14957c02f;
        }
        lVar2 = *(longlong *)(lVar1 + 0x20 + uVar15 * 8);
        local_cc = uVar14;
        if (lVar2 == 0) {
          uVar14 = *(uint *)((longlong)pdVar11 + 0xc);
          uVar17 = local_a4 - uVar14;
          if ((int)local_a4 < (int)uVar14) {
            uVar14 = local_a4;
          }
          uVar16 = memcmp(param_2 + uVar18,(void *)pdVar11[2],(longlong)(int)uVar14);
          uVar14 = local_cc;
          if (uVar16 != 0) {
            uVar17 = uVar16;
          }
        }
        else {
          local_a6 = *(undefined1 *)(lVar1 + 4);
          local_88 = *(undefined8 *)(lVar1 + 0x10);
          local_a8 = 2;
          local_a0 = param_2 + uVar18;
          uVar17 = FUN_14957a30c(&local_b0,pdVar11,lVar2,local_c0);
          uVar14 = local_cc;
        }
      }
LAB_14957ba79:
      uVar16 = uVar6;
      if (uVar17 != 0) goto LAB_14957bda6;
      goto LAB_14957ba85;
    }
    uVar6 = (uint)param_2[uVar10];
    if (9 < uVar6) {
      uVar17 = 1;
      uVar16 = uVar6;
      goto LAB_14957bda6;
    }
    uVar17 = 0xffffffff;
    if (param_2[uVar10] == 0) {
      uVar16 = 0;
      goto LAB_14957bda6;
    }
    local_cc = param_1;
    FUN_149575f88(param_2 + uVar18,uVar6,&local_b0);
    param_1 = local_cc;
    if (uVar6 != 7) {
      dVar3 = *pdVar11;
      uVar16 = 1;
      if (dVar3 < -9.223372036854776e+18) goto LAB_14957bfc1;
      if ((dVar3 < 9.223372036854776e+18) && ((longlong)dVar3 <= (longlong)local_b0)) {
        if ((longlong)dVar3 < (longlong)local_b0) goto LAB_14957bfc1;
        if (dVar3 <= (double)(longlong)local_b0) {
          uVar17 = (uint)(dVar3 < (double)(longlong)local_b0);
          goto LAB_14957ba79;
        }
      }
      goto LAB_14957bda6;
    }
    if (local_b0 < *pdVar11) {
      uVar16 = 1;
      goto LAB_14957bda6;
    }
    if (*pdVar11 < local_b0) goto LAB_14957bfc1;
    if (uVar15 + 1 != (ulonglong)*(ushort *)(local_c8 + 2)) {
      uVar6 = 7;
      goto LAB_14957bb7a;
    }
LAB_14957be15:
    *(undefined1 *)((longlong)local_c8 + 0x16) = 1;
    uVar17 = (uint)*(char *)((longlong)local_c8 + 0x12);
  }
LAB_14957bdc9:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 14957c068 FUN_14957c068 body=331 status=ok
// SIG undefined FUN_14957c068(void)

ulonglong FUN_14957c068(byte *param_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  bVar2 = *param_1;
  if (bVar2 != 0) {
    if (2 < bVar2) {
      uVar3 = FUN_14957a5ca(param_1);
      if (uVar3 != 0) goto LAB_14957c180;
      bVar2 = *param_1;
    }
    if (bVar2 == 1) {
      return 0x65;
    }
    if ((bVar2 == 2) && (*param_1 = 0, 0 < *(int *)(param_1 + 4))) {
      return 0;
    }
  }
  pcVar4 = *(char **)(param_1 + 0x88);
  sVar1 = *(short *)(param_1 + 0x56);
  *(ushort *)(param_1 + 0x56) = sVar1 + 1U;
  if (*pcVar4 == '\0') {
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x110c4,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    return 0xb;
  }
  if ((ushort)(sVar1 + 1U) < *(ushort *)(pcVar4 + 0x18)) {
    if (pcVar4[8] == '\0') {
LAB_14957c19e:
      uVar5 = FUN_14957c1b3(param_1);
      return uVar5;
    }
  }
  else {
    if (pcVar4[8] == '\0') {
      uVar3 = *(uint *)(*(longlong *)(pcVar4 + 0x50) + 8 + (ulonglong)(byte)pcVar4[9]);
      uVar3 = FUN_14957aa8f(param_1,uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                    | uVar3 << 0x18);
      if (uVar3 != 0) {
LAB_14957c180:
        return (ulonglong)uVar3;
      }
      goto LAB_14957c19e;
    }
    do {
      bVar2 = param_1[0x54];
      if ((longlong)(char)bVar2 == 0) {
        *param_1 = 1;
        return 0x65;
      }
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[1] = param_1[1] & 0xf9;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + (longlong)(char)bVar2 * 2 + 0x56);
      param_1[0x54] = bVar2 - 1;
      *(undefined8 *)(param_1 + 0x88) =
           *(undefined8 *)(param_1 + (longlong)(char)(bVar2 - 1) * 8 + 0x90);
      FUN_14955db91(*(undefined8 *)(pcVar4 + 0x70));
      pcVar4 = *(char **)(param_1 + 0x88);
    } while (*(ushort *)(pcVar4 + 0x18) <= *(ushort *)(param_1 + 0x56));
    if (pcVar4[2] != '\0') {
      uVar5 = FUN_149577104(param_1);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 14957c1b3 FUN_14957c1b3 body=76 status=ok
// SIG undefined FUN_14957c1b3(void)

undefined8 FUN_14957c1b3(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  do {
    lVar3 = *(longlong *)(param_1 + 0x88);
    if (*(char *)(lVar3 + 8) != '\0') {
      return 0;
    }
    uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x60) + (ulonglong)*(ushort *)(param_1 + 0x56) * 2);
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x50) +
                     (ulonglong)((uVar1 << 8 | uVar1 >> 8) & *(ushort *)(lVar3 + 0x1a)));
    uVar4 = FUN_14957aa8f(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18);
  } while ((int)uVar4 == 0);
  return uVar4;
}



// FUNCTION 14957c1ff FUN_14957c1ff body=293 status=ok
// SIG undefined FUN_14957c1ff(void)

undefined8 FUN_14957c1ff(byte *param_1)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  bVar3 = *param_1;
  if (bVar3 != 0) {
    if (2 < bVar3) {
      uVar4 = FUN_14957a5ca(param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      bVar3 = *param_1;
    }
    if (bVar3 == 1) {
      return 0x65;
    }
    if ((bVar3 == 2) && (*param_1 = 0, *(int *)(param_1 + 4) < 0)) {
      return 0;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x88);
  uVar1 = *(ushort *)(param_1 + 0x56);
  if (*(char *)(lVar5 + 8) == '\0') {
    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x60) + (ulonglong)uVar1 * 2);
    uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x50) +
                     (ulonglong)((uVar1 << 8 | uVar1 >> 8) & *(ushort *)(lVar5 + 0x1a)));
    uVar4 = FUN_14957aa8f(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18);
    if ((int)uVar4 == 0) {
      uVar4 = FUN_14957b5e6(param_1);
      return uVar4;
    }
  }
  else {
    if (uVar1 == 0) {
      do {
        bVar3 = param_1[0x54];
        if ((longlong)(char)bVar3 == 0) {
          *param_1 = 1;
          return 0x65;
        }
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[1] = param_1[1] & 0xf9;
        *(undefined2 *)(param_1 + 0x56) =
             *(undefined2 *)(param_1 + (longlong)(char)bVar3 * 2 + 0x56);
        lVar5 = *(longlong *)(param_1 + 0x88);
        param_1[0x54] = bVar3 - 1;
        *(undefined8 *)(param_1 + 0x88) =
             *(undefined8 *)(param_1 + (longlong)(char)(bVar3 - 1) * 8 + 0x90);
        FUN_14955db91(*(undefined8 *)(lVar5 + 0x70));
        uVar1 = *(ushort *)(param_1 + 0x56);
      } while (uVar1 == 0);
      lVar5 = *(longlong *)(param_1 + 0x88);
    }
    *(ushort *)(param_1 + 0x56) = uVar1 - 1;
    uVar4 = 0;
    if ((*(char *)(lVar5 + 2) != '\0') && (*(char *)(lVar5 + 8) == '\0')) {
      uVar4 = FUN_149577148(param_1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 14957c324 FUN_14957c324 body=488 status=ok
// SIG undefined FUN_14957c324(void)

int FUN_14957c324(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_78 [32];
  char *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x88);
  if ((*(ulonglong *)(lVar3 + 0x58) < uVar2 + *(ushort *)(param_1 + 0x44)) ||
     (uVar2 < (ulonglong)*(ushort *)(lVar3 + 0x12) + *(longlong *)(lVar3 + 0x50))) {
    local_58 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar5 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11bc3);
  }
  else {
    uVar12 = *(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x24);
    local_58 = (char *)CONCAT44(local_58._4_4_,(uint)*(ushort *)(param_1 + 0x44));
    iVar5 = FUN_14957e9b8(lVar3,uVar2,param_2,0);
    if (iVar5 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x44);
      uVar10 = (uint)uVar1;
      iVar5 = 0;
      if (uVar12 != uVar1) {
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uint)uVar1);
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        plVar4 = *(longlong **)(lVar3 + 0x48);
        iVar11 = *(int *)((longlong)plVar4 + 0x34) + -4;
        do {
          iVar5 = (**(code **)(*plVar4 + 0x108))(*plVar4,uVar9,&local_50,0);
          if (iVar5 != 0) break;
          lVar3 = *(longlong *)(local_50 + 0x10);
          if (*(uint *)(lVar3 + 4) == uVar9) {
            lVar6 = *(longlong *)(lVar3 + 0x70);
          }
          else {
            *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(local_50 + 8);
            *(longlong *)(lVar3 + 0x70) = local_50;
            *(longlong **)(lVar3 + 0x48) = plVar4;
            *(uint *)(lVar3 + 4) = uVar9;
            uVar7 = 0;
            if (uVar9 == 1) {
              uVar7 = 100;
            }
            *(undefined1 *)(lVar3 + 9) = uVar7;
            lVar6 = local_50;
          }
          if (*(short *)(lVar6 + 0x36) == 1) {
            if (iVar11 + uVar10 < uVar12) {
              puVar8 = *(uint **)(lVar3 + 0x50);
              uVar9 = *puVar8;
              uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            }
            else {
              iVar11 = uVar12 - uVar10;
              puVar8 = *(uint **)(lVar3 + 0x50);
            }
            local_58 = (char *)CONCAT44(local_58._4_4_,iVar11);
            iVar5 = FUN_14957e9b8(lVar3,puVar8 + 1,param_2);
          }
          else {
            local_58 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
            iVar5 = 0xb;
            FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption");
          }
          if (*(longlong *)(lVar3 + 0x70) != 0) {
            FUN_14955db91();
          }
          if (iVar5 != 0) break;
          uVar10 = uVar10 + iVar11;
          iVar5 = 0;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14957c50d FUN_14957c50d body=448 status=ok
// SIG undefined FUN_14957c50d(void)

undefined4 FUN_14957c50d(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x34);
  uVar4 = (ulonglong)*(byte *)(param_1 + 9);
  uVar7 = ((uint)*(byte *)(lVar2 + 5 + uVar4) * 0x100 + (uint)*(byte *)(lVar2 + 6 + uVar4)) - 1 &
          0xffff;
  uVar8 = *(ushort *)(lVar2 + 1 + uVar4);
  uVar8 = uVar8 << 8 | uVar8 >> 8;
  iVar9 = *(byte *)(lVar2 + 7 + uVar4) + uVar7 + 1;
  if (uVar8 != 0) {
    if (uVar8 <= uVar7) {
      uVar10 = 0x101d3;
      goto LAB_14957c610;
    }
    uVar7 = (uint)uVar8;
    do {
      uVar5 = uVar7;
      if ((int)(uVar1 - 4) < (int)uVar5) {
        uVar10 = 0x101d8;
        goto LAB_14957c610;
      }
      uVar8 = *(ushort *)(lVar2 + (ulonglong)uVar5);
      uVar6 = uVar8 << 8 | uVar8 >> 8;
      uVar8 = *(ushort *)(lVar2 + 2 + (ulonglong)uVar5);
      uVar11 = (uint)(ushort)(uVar8 << 8 | uVar8 >> 8);
      iVar9 = iVar9 + uVar11;
      uVar7 = (uint)uVar6;
    } while (uVar11 + uVar5 + 3 < (uint)uVar6);
    if (uVar6 != 0) {
      uVar10 = 0x101e2;
      goto LAB_14957c610;
    }
    if (uVar1 < uVar11 + uVar5) {
      uVar10 = 0x101e6;
      goto LAB_14957c610;
    }
  }
  if ((iVar9 <= (int)uVar1) &&
     (iVar3 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 10) +
              (uint)*(ushort *)(param_1 + 0x18) * 2 + 8, iVar3 <= iVar9)) {
    *(uint *)(param_1 + 0x14) = iVar9 - iVar3 & 0xffff;
    return 0;
  }
  uVar10 = 0x101f2;
LAB_14957c610:
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar10,
                "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  return 0xb;
}



// FUNCTION 14957c6cd FUN_14957c6cd body=278 status=ok
// SIG undefined FUN_14957c6cd(void)

void FUN_14957c6cd(longlong param_1,int param_2,int param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (*param_4 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    uVar3 = *(ushort *)(lVar1 + (longlong)param_2 * 2);
    if (*(uint *)(*(longlong *)(param_1 + 0x48) + 0x34) <
        (uint)(ushort)(uVar3 << 8 | uVar3 >> 8) + param_3) {
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x1145d,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
      *param_4 = 0xb;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x50);
      uVar5 = (ulonglong)*(byte *)(param_1 + 9);
      iVar4 = FUN_14957eaa3(param_1);
      if (iVar4 == 0) {
        uVar3 = *(short *)(param_1 + 0x18) - 1;
        *(ushort *)(param_1 + 0x18) = uVar3;
        if (uVar3 == 0) {
          *(undefined4 *)(lVar2 + 1 + uVar5) = 0;
          *(undefined1 *)(lVar2 + 7 + uVar5) = 0;
          *(undefined1 *)(lVar2 + 5 + uVar5) = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x35)
          ;
          *(undefined1 *)(lVar2 + 6 + uVar5) = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x34)
          ;
          *(uint *)(param_1 + 0x14) =
               (*(int *)(*(longlong *)(param_1 + 0x48) + 0x34) -
               ((uint)*(byte *)(param_1 + 10) + (uint)*(byte *)(param_1 + 9))) + -8;
        }
        else {
          _Dst = (void *)(lVar1 + (longlong)param_2 * 2);
          memmove(_Dst,(void *)((longlong)_Dst + 2),(longlong)(int)(((uint)uVar3 - param_2) * 2));
          *(undefined1 *)(lVar2 + 3 + uVar5) = *(undefined1 *)(param_1 + 0x19);
          *(undefined1 *)(lVar2 + 4 + uVar5) = *(undefined1 *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
        }
      }
      else {
        *param_4 = iVar4;
      }
    }
  }
  return;
}



// FUNCTION 14957c7e3 FUN_14957c7e3 body=775 status=ok
// SIG undefined FUN_14957c7e3(void)

void FUN_14957c7e3(longlong param_1,int param_2,uint *param_3,int param_4,uint *param_5,uint param_6
                  ,int *param_7)

{
  ushort *puVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *_Dst;
  uint uVar12;
  undefined1 auStack_98 [32];
  char *local_78;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0xc) != '\0') ||
     (uVar11 = param_4 + 2, *(int *)(param_1 + 0x14) < (int)uVar11)) {
    if (param_5 != (uint *)0x0) {
      memcpy(param_5,param_3,(longlong)param_4);
      param_3 = param_5;
    }
    if (param_6 != 0) {
      *param_3 = param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 |
                 param_6 << 0x18;
    }
    bVar3 = *(byte *)(param_1 + 0xc);
    *(byte *)(param_1 + 0xc) = bVar3 + 1;
    *(uint **)(param_1 + 0x28 + (ulonglong)bVar3 * 8) = param_3;
    *(short *)(param_1 + 0x1c + (ulonglong)bVar3 * 2) = (short)param_2;
    goto LAB_14957c867;
  }
  iVar5 = FUN_1495580c6(*(undefined8 *)(param_1 + 0x70));
  if (iVar5 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x50);
    uVar9 = (ulonglong)*(byte *)(param_1 + 9);
    local_4c = 0;
    uVar7 = (uint)*(ushort *)(param_1 + 0x12) + (uint)*(ushort *)(param_1 + 0x18) * 2;
    uVar4 = *(ushort *)(lVar8 + 5 + uVar9);
    uVar4 = uVar4 << 8 | uVar4 >> 8;
    uVar12 = (uint)uVar4;
    if ((uVar7 <= uVar4) ||
       ((uVar4 == 0 && (uVar12 = 0x10000, *(int *)(*(longlong *)(param_1 + 0x48) + 0x34) == 0x10000)
        ))) {
      local_68 = lVar8;
      if (((*(char *)(lVar8 + 2 + uVar9) == '\0') && (*(char *)(lVar8 + 1 + uVar9) == '\0')) ||
         (uVar12 < uVar7 + 2)) {
LAB_14957c911:
        if ((int)uVar12 < (int)(uVar7 + uVar11)) {
          iVar6 = *(int *)(param_1 + 0x14) - uVar11;
          iVar5 = 4;
          if (iVar6 < 4) {
            iVar5 = iVar6;
          }
          iVar5 = FUN_14957ef4a(param_1,iVar5);
          if (iVar5 != 0) goto LAB_14957c8a1;
          uVar12 = (((uint)*(byte *)(local_68 + 5 + uVar9) * 0x100 +
                    (uint)*(byte *)(local_68 + 6 + uVar9)) - 1 & 0xffff) + 1;
        }
        iVar5 = uVar12 - param_4;
        *(ushort *)(local_68 + 5 + uVar9) = (ushort)iVar5 << 8 | (ushort)iVar5 >> 8;
      }
      else {
        local_60 = (ulonglong)uVar7;
        local_58 = uVar9;
        lVar8 = FUN_14957ee13(param_1,param_4,&local_4c);
        if (lVar8 == 0) {
          uVar9 = local_58;
          iVar5 = local_4c;
          uVar7 = (uint)local_60;
          if (local_4c != 0) goto LAB_14957c8a1;
          goto LAB_14957c911;
        }
        iVar5 = (int)lVar8 - (int)local_68;
        if (iVar5 <= (int)(uint)local_60) {
          uVar10 = 0x100d9;
          goto LAB_14957ca37;
        }
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (uVar11 & 0xffff);
      _Dst = (uint *)(iVar5 + local_68);
      if (param_6 == 0) {
        memcpy(_Dst,param_3,(longlong)param_4);
      }
      else {
        memcpy(_Dst + 1,param_3 + 1,(longlong)(param_4 + -4));
        *_Dst = param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 |
                param_6 << 0x18;
      }
      lVar8 = (longlong)param_2;
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x60) + lVar8 * 2);
      memmove(puVar1 + 1,(void *)(*(longlong *)(param_1 + 0x60) + lVar8 * 2),
              ((ulonglong)*(ushort *)(param_1 + 0x18) - lVar8) * 2);
      *puVar1 = (ushort)iVar5 << 8 | (ushort)iVar5 >> 8;
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
      pcVar2 = (char *)(local_68 + 4 + (ulonglong)*(byte *)(param_1 + 9));
      *pcVar2 = *pcVar2 + '\x01';
      if (*pcVar2 == '\0') {
        pcVar2 = (char *)(local_68 + 3 + (ulonglong)*(byte *)(param_1 + 9));
        *pcVar2 = *pcVar2 + '\x01';
      }
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x21) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
      goto LAB_14957c867;
    }
    uVar10 = 0x100c7;
LAB_14957ca37:
    local_78 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar10);
    iVar5 = 0xb;
  }
LAB_14957c8a1:
  *param_7 = iVar5;
LAB_14957c867:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14957cb0c FUN_14957cb0c body=7851 status=ok
// SIG undefined FUN_14957cb0c(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_14957cb0c(char *param_1)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  char *pcVar19;
  uint uVar20;
  ulonglong uVar21;
  char **ppcVar22;
  ushort *puVar23;
  longlong lVar24;
  char **ppcVar25;
  void *pvVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  undefined8 uVar31;
  uint uVar32;
  char *pcVar33;
  char **ppcVar34;
  char **ppcVar35;
  char *pcVar36;
  char cVar37;
  bool bVar38;
  undefined1 auStack_2f8 [32];
  char **local_2d8;
  undefined4 local_2d0;
  undefined8 *local_2c8;
  char **local_2c0;
  char **local_2b8;
  char **local_2b0;
  void *local_2a8;
  char **local_2a0;
  char **local_298;
  longlong local_290;
  ulonglong local_288;
  char **local_280;
  char *local_278;
  char **local_270;
  ulonglong local_268;
  longlong local_260;
  char **local_258;
  uint local_24c;
  ulonglong local_248;
  char **local_240;
  longlong local_238;
  uint local_22c;
  char **local_228;
  longlong local_220;
  char **local_218;
  ulonglong local_210;
  char *local_208;
  ulonglong local_200;
  int local_1f8;
  undefined4 uStack_1f4;
  uint local_1dc;
  int local_1d8;
  char local_1d4 [7];
  char local_1cd [4];
  char acStack_1c9 [9];
  char *local_1c0;
  char *local_1b8;
  char **local_1b0;
  char **local_1a8;
  undefined8 local_1a0 [5];
  uint auStack_174 [8];
  undefined2 auStack_152 [5];
  uint auStack_148 [8];
  uint auStack_128 [7];
  uint auStack_10c [8];
  int iStack_ec;
  char *local_e8 [3];
  uint auStack_cc [9];
  longlong alStack_a8 [2];
  undefined8 local_98;
  char *local_90 [4];
  char acStack_70 [8];
  char *local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x34);
  lVar30 = 0;
  pcVar33 = *(char **)(param_1 + 0x88);
LAB_14957cb54:
  if ((*(int *)(pcVar33 + 0x14) < 0) && (iVar8 = FUN_14957c50d(pcVar33), iVar8 != 0)) {
    iVar8 = 0;
  }
  else if (pcVar33[0xc] == '\0') {
    iVar8 = 0;
    if (((int)((uint)(iVar2 * 2) / 3) < *(int *)(pcVar33 + 0x14)) &&
       (cVar37 = param_1[0x54], cVar37 != '\0')) {
LAB_14957cb87:
      lVar3 = *(longlong *)(param_1 + (longlong)cVar37 * 8 + 0x88);
      uVar6 = *(ushort *)(param_1 + (longlong)cVar37 * 2 + 0x56);
      iVar8 = FUN_1495580c6(*(undefined8 *)(lVar3 + 0x70));
      if ((iVar8 == 0) &&
         ((-1 < *(int *)(lVar3 + 0x14) || (iVar8 = FUN_14957c50d(lVar3), iVar8 == 0)))) {
        if ((pcVar33[3] != '\0') &&
           ((((pcVar33[0xc] == '\x01' && (*(short *)(pcVar33 + 0x1c) == *(short *)(pcVar33 + 0x18)))
             && (*(int *)(lVar3 + 4) != 1)) && (*(ushort *)(lVar3 + 0x18) == uVar6)))) {
          if (*(short *)(pcVar33 + 0x1c) == 0) {
            local_2d8 = (char **)0x14bd4063a;
            FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption");
            iVar8 = 0xb;
          }
          else {
            lVar12 = *(longlong *)(pcVar33 + 0x48);
            local_2d8 = (char **)((ulonglong)local_2d8 & 0xffffffffffffff00);
            local_1f8 = FUN_149568377(lVar12,&local_98,auStack_cc + 1,0);
            iVar8 = local_1f8;
            if (local_1f8 == 0) {
              local_68[0] = *(char **)(pcVar33 + 0x28);
              local_238 = lVar30;
              local_e8[0]._0_2_ = (**(code **)(pcVar33 + 0x78))(pcVar33);
              lVar24 = CONCAT44(local_98._4_4_,(int)local_98);
              FUN_149566d5d(lVar24);
              local_1c0 = (char *)CONCAT44(local_1c0._4_4_,1);
              local_1b0 = local_68;
              local_1a0[0] = *(undefined8 *)(pcVar33 + 0x58);
              auStack_174[1] = 2;
              local_1b8 = pcVar33;
              local_1a8 = local_e8;
              iVar8 = FUN_14957f4d3(&local_1c0,0,1);
              local_1f8 = iVar8;
              if (iVar8 == 0) {
                *(uint *)(lVar24 + 0x14) =
                     (*(int *)(lVar12 + 0x34) -
                     ((uint)(ushort)local_e8[0] + (uint)*(ushort *)(lVar24 + 0x12))) + -2;
                if (*(char *)(lVar12 + 0x21) != '\0') {
                  local_2d8 = (char **)&local_1f8;
                  FUN_1495691f2(lVar12,auStack_cc[1],5,*(undefined4 *)(lVar3 + 4));
                  if (*(ushort *)(lVar24 + 0x10) < (ushort)local_e8[0]) {
                    FUN_1495696fa(lVar24,lVar24,local_68[0],&local_1f8);
                  }
                }
                uVar6 = *(ushort *)
                         (*(longlong *)(pcVar33 + 0x60) + -2 +
                         (ulonglong)*(ushort *)(pcVar33 + 0x18) * 2);
                uVar21 = (ulonglong)((uVar6 << 8 | uVar6 >> 8) & *(ushort *)(pcVar33 + 0x1a));
                uVar28 = 0;
                pcVar11 = (char *)(*(longlong *)(pcVar33 + 0x50) + uVar21);
                pcVar36 = (char *)(*(longlong *)(pcVar33 + 0x50) + uVar21 + 2);
                do {
                  pcVar17 = pcVar36;
                  pcVar19 = pcVar11;
                  if (7 < uVar28) break;
                  uVar28 = uVar28 + 1;
                  pcVar11 = pcVar19 + 1;
                  pcVar36 = pcVar17 + 1;
                } while (*pcVar19 < '\0');
                lVar30 = 4;
                do {
                  cVar37 = pcVar17[-1];
                  local_68[0] = pcVar17;
                  local_1cd[lVar30] = cVar37;
                  lVar30 = lVar30 + 1;
                  if (-1 < cVar37) break;
                  bVar38 = pcVar17 < pcVar19 + 10;
                  pcVar17 = pcVar17 + 1;
                } while (bVar38);
                if (local_1f8 == 0) {
                  local_2d0 = *(undefined4 *)(pcVar33 + 4);
                  local_2c8 = (undefined8 *)&local_1f8;
                  local_2d8 = (char **)0x0;
                  FUN_14957c7e3(lVar3,*(undefined2 *)(lVar3 + 0x18),local_1cd);
                  lVar24 = CONCAT44(local_98._4_4_,(int)local_98);
                }
                *(uint *)(*(longlong *)(lVar3 + 0x50) + 8 + (ulonglong)*(byte *)(lVar3 + 9)) =
                     auStack_cc[1] >> 0x18 | (auStack_cc[1] & 0xff0000) >> 8 |
                     (auStack_cc[1] & 0xff00) << 8 | auStack_cc[1] << 0x18;
                lVar30 = local_238;
                iVar8 = local_1f8;
                if (lVar24 != 0) {
                  FUN_14955db91(*(undefined8 *)(lVar24 + 0x70));
                  lVar30 = local_238;
                  iVar8 = local_1f8;
                }
              }
              else {
                lVar30 = local_238;
                if (lVar24 != 0) {
                  FUN_14955db91(*(undefined8 *)(lVar24 + 0x70));
                  lVar30 = local_238;
                }
              }
            }
          }
          goto LAB_14957cbac;
        }
        lVar12 = FUN_149565030();
        local_1d8 = 0;
        local_1d4[0] = '\0';
        local_1d4[1] = '\0';
        local_1d4[2] = '\0';
        local_1d4[3] = '\0';
        local_1d4[4] = 0;
        local_1c0 = (char *)((ulonglong)local_1c0 & 0xffffffff00000000);
        local_1b0 = (char **)0x0;
        iVar8 = 7;
        lVar24 = lVar30;
        if (lVar12 != 0) {
          uVar29 = (byte)param_1[3] & 1;
          local_278 = (char *)(ulonglong)uVar29;
          uVar27 = (uint)*(ushort *)(lVar3 + 0x18) + (uint)*(byte *)(lVar3 + 0xc);
          local_210 = 0;
          if (1 < uVar27) {
            local_210 = 0;
            uVar20 = (uint)uVar6;
            if (uVar20 != 0) {
              if (uVar27 == uVar20) {
                local_210 = (ulonglong)((uVar6 + uVar29) - 2);
              }
              else {
                local_210 = (ulonglong)(uVar20 - 1);
              }
            }
            uVar27 = 2 - uVar29;
          }
          local_280 = (char **)(ulonglong)uVar27;
          uVar29 = ((int)local_210 - (uint)*(byte *)(lVar3 + 0xc)) + uVar27;
          if (uVar29 == *(ushort *)(lVar3 + 0x18)) {
            local_258 = (char **)(*(longlong *)(lVar3 + 0x50) + (ulonglong)*(byte *)(lVar3 + 9) + 8)
            ;
          }
          else {
            uVar6 = *(ushort *)(*(longlong *)(lVar3 + 0x60) + (longlong)(int)uVar29 * 2);
            local_258 = (char **)(*(longlong *)(lVar3 + 0x50) +
                                 (ulonglong)((uVar6 << 8 | uVar6 >> 8) & *(ushort *)(lVar3 + 0x1a)))
            ;
          }
          lVar24 = *(longlong *)(lVar3 + 0x48);
          uVar29 = *(uint *)local_258;
          local_1dc = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                      uVar29 << 0x18;
          local_2d8 = (char **)((ulonglong)local_2d8 & 0xffffffff00000000);
          local_260 = lVar12;
          local_218 = local_280;
          iVar8 = FUN_14957ab26(lVar24,local_1dc,local_68 + (longlong)local_280,0);
          local_228 = (char **)(ulonglong)(uVar27 + 1);
          ppcVar34 = local_280;
          local_238 = lVar30;
          if (iVar8 == 0) {
            local_2c0 = (char **)(ulonglong)(uint)((int)local_280 * 8);
            local_2b8 = (char **)((longlong)(int)local_210 + -1);
            local_290 = lVar24;
            local_24c = uVar27 + 1;
            local_1d8 = iVar8;
            do {
              if ((*(int *)(local_68[(longlong)ppcVar34] + 0x14) < 0) &&
                 (local_1d8 = FUN_14957c50d(), local_1d8 != 0)) {
LAB_14957d3b1:
                iVar8 = local_1d8;
                memset(local_68,0,(size_t)local_2c0);
                ppcVar22 = (char **)0x0;
                iVar9 = local_1d8;
                goto LAB_14957d03c;
              }
              ppcVar22 = (char **)((longlong)ppcVar34 + -1);
              if (ppcVar34 == (char **)0x0) {
                uVar27 = ((*(int *)(local_290 + 0x30) - 8U) / 6 + 4) * local_24c + 3 & 0xfffffffc;
                local_298 = (char **)FUN_145e3bd67((longlong)
                                                   (int)(*(int *)(local_290 + 0x30) + uVar27 * 10));
                local_1b0 = local_298;
                if (local_298 == (char **)0x0) {
                  local_1d8 = 7;
                  ppcVar22 = (char **)0x0;
                  iVar8 = 7;
                  ppcVar34 = local_228;
                  goto LAB_14957d05d;
                }
                lVar30 = (longlong)(int)uVar27;
                local_2a0 = local_298 + lVar30;
                local_1a8 = local_2a0;
                local_220 = (longlong)local_2a0 + lVar30 * 2;
                local_1b8 = local_68[0];
                local_22c = (uint)(byte)local_68[0][8];
                local_240 = (char **)((ulonglong)(byte)local_68[0][8] << 2);
                local_208 = local_68[0];
                local_270 = (char **)(ulonglong)(byte)local_68[0][3];
                uVar21 = (ulonglong)local_1c0 & 0xffffffff;
                local_248 = (longlong)local_298 + lVar30 * 10;
                ppcVar34 = (char **)0x0;
                local_2a8 = (void *)0x0;
                goto LAB_14957d4b0;
              }
              local_270 = ppcVar22;
              if (*(byte *)(lVar3 + 0xc) == 0) {
                ppcVar25 = (char **)(ulonglong)(uint)((int)local_210 + (int)ppcVar22);
LAB_14957d14d:
                lVar30 = *(longlong *)(lVar3 + 0x50);
                uVar6 = *(ushort *)
                         (*(longlong *)(lVar3 + 0x60) +
                         (longlong)(int)((int)ppcVar25 - (uint)*(byte *)(lVar3 + 0xc)) * 2);
                uVar21 = (ulonglong)((uVar6 << 8 | uVar6 >> 8) & *(ushort *)(lVar3 + 0x1a));
                pvVar26 = (void *)(lVar30 + uVar21);
                alStack_a8[(longlong)ppcVar22] = (longlong)pvVar26;
                uVar27 = *(uint *)(lVar30 + uVar21);
                local_1dc = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                            uVar27 << 0x18;
                local_2a8 = (void *)CONCAT44(local_2a8._4_4_,local_1dc);
                local_2b0 = ppcVar25;
                uVar6 = (**(code **)(lVar3 + 0x78))(lVar3,pvVar26);
                uVar21 = (ulonglong)uVar6;
                auStack_10c[(longlong)ppcVar34] = (uint)uVar6;
                if ((*(byte *)(local_290 + 0x26) & 0xc) != 0) {
                  iVar8 = (int)pvVar26 - *(int *)(lVar3 + 0x50);
                  if (*(int *)(local_290 + 0x34) < (int)(iVar8 + (uint)uVar6)) {
                    local_2d8 = (char **)0x14bd4063a;
                    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x1182d);
                    local_1d8 = 0xb;
                    goto LAB_14957d3b1;
                  }
                  local_288 = uVar21;
                  memcpy((void *)(iVar8 + local_260),pvVar26,uVar21);
                  alStack_a8[(longlong)ppcVar22] =
                       (longlong)pvVar26 + (local_260 - *(longlong *)(lVar3 + 0x50));
                  uVar21 = local_288;
                }
                FUN_14957c6cd(lVar3,(int)local_2b0 - (uint)*(byte *)(lVar3 + 0xc),uVar21,&local_1d8)
                ;
                uVar27 = (uint)local_2a8;
              }
              else {
                ppcVar25 = (char **)((longlong)ppcVar34 + (longlong)local_2b8);
                if ((uint)ppcVar25 != (uint)*(ushort *)(lVar3 + 0x1c)) goto LAB_14957d14d;
                puVar4 = *(uint **)(lVar3 + 0x28);
                alStack_a8[(longlong)ppcVar22] = (longlong)puVar4;
                uVar27 = *puVar4;
                uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                         uVar27 << 0x18;
                local_1dc = uVar27;
                uVar6 = (**(code **)(lVar3 + 0x78))(lVar3);
                auStack_10c[(longlong)ppcVar34] = (uint)uVar6;
                *(undefined1 *)(lVar3 + 0xc) = 0;
              }
              ppcVar34 = local_2c0;
              local_2d8 = (char **)((ulonglong)local_2d8 & 0xffffffff00000000);
              iVar8 = FUN_14957ab26(local_290,uVar27,acStack_70 + (longlong)local_2c0,0);
              local_2c0 = ppcVar34 + -1;
              ppcVar34 = local_270;
              local_1d8 = iVar8;
            } while (iVar8 == 0);
          }
          local_1d8 = iVar8;
          memset(local_68,0,((longlong)ppcVar34 << 0x20) + 0x100000000 >> 0x1d);
          goto LAB_14957d039;
        }
        goto LAB_14957ce3e;
      }
      goto LAB_14957cbac;
    }
  }
  else {
    cVar37 = param_1[0x54];
    if (cVar37 != '\0') goto LAB_14957cb87;
    for (pcVar11 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x10); pcVar11 != (char *)0x0;
        pcVar11 = *(char **)(pcVar11 + 0x28)) {
      if (((pcVar11 != param_1) && (*pcVar11 == '\0')) &&
         (*(longlong *)(pcVar11 + 0x88) == *(longlong *)(param_1 + 0x88))) {
        local_2d8 = (char **)0x14bd4063a;
        iVar8 = 0xb;
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11afe);
        goto LAB_14957ce5d;
      }
    }
    local_1c0 = (char *)0x0;
    local_68[0] = (char *)((ulonglong)local_68[0] & 0xffffffff00000000);
    lVar3 = *(longlong *)(pcVar33 + 0x48);
    iVar8 = FUN_1495580c6(*(undefined8 *)(pcVar33 + 0x70));
    if (iVar8 == 0) {
      local_2d8 = (char **)((ulonglong)local_2d8 & 0xffffffffffffff00);
      local_98._0_4_ = FUN_149568377(lVar3,&local_1c0,local_68,*(undefined4 *)(pcVar33 + 4));
      pcVar11 = local_1c0;
      FUN_14957f41a(pcVar33,local_1c0,&local_98);
      if (*(char *)(lVar3 + 0x21) != '\0') {
        local_2d8 = (char **)&local_98;
        FUN_1495691f2(lVar3,(ulonglong)local_68[0] & 0xffffffff,5,*(undefined4 *)(pcVar33 + 4));
      }
      iVar8 = (int)local_98;
      if ((int)local_98 == 0) {
        memcpy(pcVar11 + 0x1c,pcVar33 + 0x1c,(ulonglong)((uint)(byte)pcVar33[0xc] * 2));
        memcpy(pcVar11 + 0x28,pcVar33 + 0x28,(ulonglong)(byte)pcVar33[0xc] << 3);
        pcVar11[0xc] = pcVar33[0xc];
        FUN_149566d5d(pcVar33,**(byte **)(pcVar11 + 0x50) & 0xf7);
        *(uint *)(*(longlong *)(pcVar33 + 0x50) + 8 + (ulonglong)(byte)pcVar33[9]) =
             (uint)local_68[0] >> 0x18 | ((uint)local_68[0] & 0xff0000) >> 8 |
             ((uint)local_68[0] & 0xff00) << 8 | (uint)local_68[0] << 0x18;
        *(char **)(param_1 + 0x98) = pcVar11;
        param_1[0x54] = '\x01';
        param_1[0x56] = '\0';
        param_1[0x57] = '\0';
        param_1[0x58] = '\0';
        param_1[0x59] = '\0';
        *(char **)(param_1 + 0x90) = pcVar33;
        iVar8 = 0;
        goto LAB_14957cbcf;
      }
      param_1[0x98] = '\0';
      param_1[0x99] = '\0';
      param_1[0x9a] = '\0';
      param_1[0x9b] = '\0';
      param_1[0x9c] = '\0';
      param_1[0x9d] = '\0';
      param_1[0x9e] = '\0';
      param_1[0x9f] = '\0';
      if (pcVar11 != (char *)0x0) {
        FUN_14955db91(*(undefined8 *)(pcVar11 + 0x70));
      }
    }
    else {
      param_1[0x98] = '\0';
      param_1[0x99] = '\0';
      param_1[0x9a] = '\0';
      param_1[0x9b] = '\0';
      param_1[0x9c] = '\0';
      param_1[0x9d] = '\0';
      param_1[0x9e] = '\0';
      param_1[0x9f] = '\0';
    }
  }
  goto LAB_14957ce5d;
LAB_14957d4b0:
  do {
    ppcVar22 = (char **)local_68[(longlong)ppcVar34];
    ppcVar25 = (char **)ppcVar22[10];
    local_2b8 = ppcVar34;
    if (*(char *)ppcVar25 != **(char **)(local_208 + 0x50)) {
      uVar31 = 0x11870;
      goto LAB_14957e0e5;
    }
    local_268 = (ulonglong)*(ushort *)(ppcVar22 + 3);
    local_288 = CONCAT44(local_288._4_4_,(uint)*(ushort *)((longlong)ppcVar22 + 0x1a));
    puVar23 = (ushort *)((ulonglong)*(ushort *)((longlong)ppcVar22 + 0x12) + (longlong)ppcVar25);
    uVar28 = (ulonglong)(int)uVar21;
    local_2c0 = ppcVar22;
    local_2b0 = ppcVar25;
    memset((void *)((longlong)local_2a0 + uVar28 * 2),0,
           (ulonglong)
           (((uint)*(ushort *)(ppcVar22 + 3) + (uint)*(byte *)((longlong)ppcVar22 + 0xc)) * 2));
    ppcVar34 = local_2b8;
    if (*(char *)((longlong)local_2c0 + 0xc) != '\0') {
      uVar6 = *(ushort *)((longlong)local_2c0 + 0x1c);
      uVar27 = (uint)uVar6;
      if ((ushort)local_268 < uVar6) {
        uVar31 = 0x11888;
        goto LAB_14957e0e5;
      }
      if (uVar6 == 0) {
LAB_14957d594:
        uVar21 = 0;
        do {
          local_298[uVar28 + uVar21] = local_2c0[uVar21 + 5];
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(byte *)((longlong)local_2c0 + 0xc));
        uVar28 = uVar28 + uVar21;
      }
      else {
        lVar30 = uVar28 << 0x20;
        do {
          local_298[uVar28] =
               (char *)((ulonglong)((ushort)(*puVar23 << 8 | *puVar23 >> 8) & (uint)local_288) +
                       (longlong)local_2b0);
          puVar23 = puVar23 + 1;
          uVar28 = uVar28 + 1;
          lVar30 = lVar30 + 0x100000000;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
        if (*(char *)((longlong)local_2c0 + 0xc) != '\0') {
          uVar28 = lVar30 >> 0x20;
          goto LAB_14957d594;
        }
      }
      local_1c0 = (char *)CONCAT44(local_1c0._4_4_,(int)uVar28);
      uVar21 = uVar28 & 0xffffffff;
    }
    puVar1 = (ushort *)
             ((longlong)local_2b0 +
             (ulonglong)*(ushort *)(local_2c0 + 3) * 2 +
             (ulonglong)*(ushort *)((longlong)local_2c0 + 0x12));
    if (puVar23 < puVar1) {
      ppcVar22 = local_298 + (int)uVar21;
      do {
        *ppcVar22 = (char *)((ulonglong)((ushort)(*puVar23 << 8 | *puVar23 >> 8) & (uint)local_288)
                            + (longlong)local_2b0);
        puVar23 = puVar23 + 1;
        uVar27 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar27;
        local_1c0 = (char *)CONCAT44(local_1c0._4_4_,uVar27);
        ppcVar22 = ppcVar22 + 1;
      } while (puVar23 < puVar1);
    }
    iVar8 = (int)uVar21;
    *(int *)((longlong)local_e8 + (longlong)local_2b8 * 4) = iVar8;
    pvVar26 = local_2a8;
    if ((local_2b8 < local_280) && ((char)local_270 == '\0')) {
      uVar29 = auStack_10c[(longlong)((longlong)local_2b8 + 1)] & 0xffff;
      local_2b0 = (char **)CONCAT44(local_2b0._4_4_,iVar8);
      lVar30 = (longlong)iVar8;
      *(short *)((longlong)local_2a0 + lVar30 * 2) =
           (short)auStack_10c[(longlong)((longlong)local_2b8 + 1)];
      iVar8 = (int)local_2a8;
      local_2a8 = (void *)(local_220 + iVar8);
      uVar27 = iVar8 + uVar29;
      pvVar26 = (void *)(ulonglong)uVar27;
      memcpy(local_2a8,(void *)alStack_a8[(longlong)local_2b8],(ulonglong)uVar29);
      local_298[lVar30] = (char *)((longlong)local_2a8 + (longlong)local_240);
      uVar6 = *(short *)((longlong)local_2a0 + lVar30 * 2) - (short)local_240;
      *(ushort *)((longlong)local_2a0 + lVar30 * 2) = uVar6;
      if (*(char *)(local_2c0 + 1) == '\0') {
        *(undefined4 *)local_298[lVar30] = *(undefined4 *)(local_2c0[10] + 8);
      }
      else if (uVar6 < 4) {
        puVar13 = (undefined1 *)((longlong)(int)uVar27 + local_248);
        do {
          *puVar13 = 0;
          uVar6 = *(short *)((longlong)local_2a0 + lVar30 * 2) + 1;
          *(ushort *)((longlong)local_2a0 + lVar30 * 2) = uVar6;
          puVar13 = puVar13 + 1;
          pvVar26 = (void *)(ulonglong)((int)pvVar26 + 1);
        } while (uVar6 < 4);
      }
      uVar21 = (ulonglong)((uint)local_2b0 + 1);
      local_1c0 = (char *)CONCAT44(local_1c0._4_4_,(uint)local_2b0 + 1);
    }
    ppcVar34 = (char **)((longlong)ppcVar34 + 1);
    local_2a8 = pvVar26;
  } while (ppcVar34 != local_228);
  local_200 = (ulonglong)local_240 & 0xffff;
  local_288 = CONCAT44(local_288._4_4_,*(int *)(local_290 + 0x34) + (uint)(ushort)local_240 + -0xc);
  ppcVar34 = (char **)0x0;
  iVar8 = 0;
  do {
    pcVar11 = local_68[(longlong)ppcVar34];
    local_1a0[iVar8] = *(undefined8 *)(pcVar11 + 0x58);
    uVar27 = *(uint *)((longlong)local_e8 + (longlong)ppcVar34 * 4);
    local_2a8 = (void *)(ulonglong)uVar27;
    auStack_174[(longlong)iVar8 + 1] = uVar27;
    iVar9 = 0;
    if ((iVar8 != 0) && (iVar9 = iVar8 + -1, uVar27 != auStack_174[iVar8])) {
      iVar9 = iVar8;
    }
    if ((int)local_270 == 0) {
      local_1a0[(longlong)iVar9 + 1] = *(undefined8 *)(lVar3 + 0x58);
      auStack_174[(longlong)iVar9 + 2] = uVar27 + 1;
      iVar9 = iVar9 + 1;
    }
    local_2b0 = (char **)CONCAT44(local_2b0._4_4_,iVar9);
    uVar27 = (uint)local_288 - *(int *)(pcVar11 + 0x14);
    auStack_10c[(longlong)((longlong)ppcVar34 + 1)] = uVar27;
    if (pcVar11[0xc] != '\0') {
      uVar21 = 0;
      local_2c0 = ppcVar34;
      do {
        uVar6 = (**(code **)(pcVar11 + 0x78))(pcVar11,*(undefined8 *)(pcVar11 + uVar21 * 8 + 0x28));
        uVar27 = uVar27 + uVar6 + 2;
        auStack_10c[(longlong)((longlong)local_2c0 + 1)] = uVar27;
        uVar21 = uVar21 + 1;
        ppcVar34 = local_2c0;
      } while (uVar21 < (byte)pcVar11[0xc]);
    }
    auStack_cc[(longlong)ppcVar34 + 1] = (int)local_2a8;
    ppcVar34 = (char **)((longlong)ppcVar34 + 1);
    iVar8 = (uint)local_2b0 + 1;
  } while (ppcVar34 != local_228);
  local_268 = (ulonglong)(int)local_1c0;
  local_2b8 = (char **)-local_268;
  ppcVar22 = (char **)0x0;
  uVar21 = (ulonglong)local_24c;
  local_298 = local_1a8;
  local_2a8 = (void *)CONCAT44(local_2a8._4_4_,(int)local_1c0);
  ppcVar34 = local_1a8;
  iVar8 = (uint)local_288;
  do {
    ppcVar25 = (char **)(ulonglong)auStack_10c[(longlong)((longlong)ppcVar22 + 1)];
    if (iVar8 < (int)auStack_10c[(longlong)((longlong)ppcVar22 + 1)]) {
      local_2b0 = (char **)((longlong)ppcVar22 + 1);
      uVar27 = (int)ppcVar22 + 2;
      uVar28 = (ulonglong)uVar27;
      local_2a0 = (char **)CONCAT44(local_2a0._4_4_,uVar27);
      local_240 = ppcVar22;
      do {
        if ((longlong)(int)uVar21 <= (longlong)local_2b0) {
          if (&DAT_00000003 < ppcVar22) {
            auStack_10c[(longlong)((longlong)ppcVar22 + 1)] = (uint)ppcVar25;
            uVar31 = 0x118ed;
            goto LAB_14957e0e5;
          }
          auStack_10c[(longlong)((longlong)ppcVar22 + 2)] = 0;
          auStack_cc[(longlong)ppcVar22 + 2] = (uint)local_2a8;
          uVar21 = uVar28;
        }
        iVar9 = auStack_cc[(longlong)ppcVar22 + 1];
        lVar30 = (longlong)iVar9;
        local_2c0 = (char **)(lVar30 + -1);
        uVar6 = *(ushort *)((longlong)ppcVar34 + lVar30 * 2 + -2);
        if (uVar6 == 0) {
          uVar6 = FUN_14957fa55(&local_1c0,local_2c0);
          uVar28 = (ulonglong)local_2a0 & 0xffffffff;
          ppcVar34 = local_298;
          ppcVar22 = local_240;
          iVar8 = (uint)local_288;
        }
        iVar15 = uVar6 + 2;
        if ((int)local_270 == 0) {
          iVar15 = 0;
          if (iVar9 < (int)(uint)local_2a8) {
            uVar7 = *(ushort *)((longlong)ppcVar34 + lVar30 * 2);
            if (uVar7 == 0) {
              local_248 = uVar21;
              uVar7 = FUN_14957fa55(&local_1c0,iVar9);
              uVar28 = (ulonglong)local_2a0 & 0xffffffff;
              uVar21 = local_248;
              ppcVar34 = local_298;
              iVar8 = (uint)local_288;
            }
            iVar15 = uVar7 + 2;
          }
        }
        auStack_10c[(longlong)((longlong)ppcVar22 + 2)] =
             auStack_10c[(longlong)((longlong)ppcVar22 + 2)] + iVar15;
        uVar27 = (uint)ppcVar25 - (uVar6 + 2);
        ppcVar25 = (char **)(ulonglong)uVar27;
        auStack_cc[(longlong)ppcVar22 + 1] = (int)local_2c0;
        ppcVar35 = local_2b0;
      } while (iVar8 < (int)uVar27);
    }
    else {
      local_2c0 = (char **)(ulonglong)auStack_cc[(longlong)ppcVar22 + 1];
      ppcVar35 = (char **)((longlong)ppcVar22 + 1);
    }
    auStack_10c[(longlong)((longlong)ppcVar22 + 1)] = (uint)ppcVar25;
    if ((int)local_2c0 < (int)(uint)local_2a8) {
      lVar30 = (longlong)(int)local_2c0;
      local_2b0 = ppcVar35;
      do {
        lVar30 = lVar30 + 1;
        uVar6 = *(ushort *)((longlong)ppcVar34 + lVar30 * 2 + -2);
        if (uVar6 == 0) {
          local_2a0 = ppcVar25;
          uVar6 = FUN_14957fa55(&local_1c0,local_2c0);
          ppcVar25 = local_2a0;
          ppcVar34 = local_298;
          ppcVar35 = local_2b0;
          iVar8 = (uint)local_288;
        }
        uVar27 = (int)ppcVar25 + (uint)uVar6 + 2;
        ppcVar25 = (char **)(ulonglong)uVar27;
        if (iVar8 < (int)uVar27) {
          if (ppcVar22 == (char **)0x0) {
            uVar27 = 0;
          }
          else {
            uVar27 = auStack_cc[(longlong)ppcVar22];
          }
          ppcVar22 = ppcVar35;
          if ((int)uVar27 < (int)local_2c0) goto LAB_14957dafb;
          uVar31 = 0x1190e;
          goto LAB_14957e0e5;
        }
        uVar29 = (int)local_2c0 + 1;
        local_2c0 = (char **)(ulonglong)uVar29;
        auStack_10c[(longlong)((longlong)ppcVar22 + 1)] = uVar27;
        auStack_cc[(longlong)ppcVar22 + 1] = uVar29;
        if ((int)local_270 == 0) {
          iVar9 = 0;
          if (lVar30 < (longlong)local_268) {
            uVar6 = *(ushort *)((longlong)ppcVar34 + lVar30 * 2);
            if (uVar6 == 0) {
              local_2a0 = ppcVar25;
              uVar6 = FUN_14957fa55(&local_1c0,local_2c0);
              ppcVar25 = local_2a0;
              ppcVar34 = local_298;
              ppcVar35 = local_2b0;
              iVar8 = (uint)local_288;
            }
            goto LAB_14957da46;
          }
        }
        else {
LAB_14957da46:
          iVar9 = uVar6 + 2;
        }
        auStack_10c[(longlong)((longlong)ppcVar35 + 1)] =
             auStack_10c[(longlong)((longlong)ppcVar35 + 1)] - iVar9;
      } while ((char *)((longlong)local_2b8 + lVar30) != (char *)0x0);
    }
    uVar21 = (ulonglong)ppcVar35 & 0xffffffff;
    ppcVar22 = ppcVar35;
LAB_14957dafb:
  } while ((longlong)ppcVar22 < (longlong)(int)uVar21);
  local_2b8 = (char **)(ulonglong)((int)uVar21 - 1);
  lVar30 = (longlong)ppcVar34 - (ulonglong)(uint)((int)local_270 * 2);
  local_248 = uVar21;
  local_240 = local_2b8;
  local_220 = lVar30;
  do {
    pcVar11 = local_278;
    if ((int)(uint)local_2b8 < 1) {
      local_2b0 = (char **)CONCAT44(local_2b0._4_4_,(uint)**(byte **)(local_208 + 0x50));
      if ((int)local_248 < 1) {
        local_2b8 = (char **)0x0;
        goto LAB_14957e103;
      }
      local_2c0 = (char **)(local_248 & 0xffffffff);
      ppcVar34 = (char **)0x0;
      local_2b8 = (char **)0x0;
      goto LAB_14957ddad;
    }
    uVar27 = auStack_10c[(longlong)local_2b8];
    uVar29 = auStack_cc[(longlong)local_2b8];
    local_2c0 = (char **)(ulonglong)uVar29;
    ppcVar22 = local_2c0;
    ppcVar25 = (char **)(ulonglong)auStack_10c[(longlong)((longlong)local_2b8 + 1)];
    if (*(short *)((longlong)ppcVar34 + ((longlong)(int)uVar29 - (longlong)local_270) * 2) == 0) {
      local_2a0 = (char **)(ulonglong)auStack_10c[(longlong)((longlong)local_2b8 + 1)];
      FUN_14957fa55(&local_1c0);
      ppcVar22 = local_2c0;
      ppcVar34 = local_298;
      ppcVar25 = local_2a0;
    }
    local_2c0 = (char **)((longlong)local_2b8 + -1);
    local_2b0 = (char **)(ulonglong)((uint)(local_2b8 == local_240) * 2 - 2);
    lVar12 = (longlong)(int)uVar29 + 1;
    do {
      uVar29 = (uint)ppcVar22;
      uVar20 = uVar29 - 1;
      if (*(short *)((longlong)ppcVar34 + lVar12 * 2 + -4) == 0) {
        local_268 = CONCAT44(local_268._4_4_,uVar29 - 1);
        local_2a0 = ppcVar25;
        FUN_14957fa55(&local_1c0);
        lVar30 = local_220;
        ppcVar34 = local_298;
        ppcVar25 = local_2a0;
        uVar20 = (uint)local_268;
      }
      uVar32 = (uint)ppcVar25;
      if (uVar32 == 0) {
        uVar6 = *(ushort *)((longlong)ppcVar34 + lVar12 * 2 + -4);
        uVar10 = *(ushort *)(lVar30 + (lVar12 + -1) * 2) + 2;
      }
      else {
        if ((char)local_278 != '\0') break;
        uVar10 = *(ushort *)(lVar30 + (lVar12 + -1) * 2) + uVar32 + 2;
        uVar6 = *(ushort *)((longlong)ppcVar34 + lVar12 * 2 + -4);
        if ((int)(((int)local_2b0 + uVar27) - (uint)uVar6) < (int)uVar10) break;
      }
      uVar27 = (uVar27 - uVar6) - 2;
      auStack_cc[(longlong)local_2c0 + 1] = uVar20;
      lVar12 = lVar12 + -1;
      ppcVar22 = (char **)(ulonglong)uVar20;
      ppcVar25 = (char **)(ulonglong)uVar10;
      uVar29 = uVar20;
      uVar32 = uVar10;
    } while (1 < lVar12);
    auStack_10c[(longlong)((longlong)local_2b8 + 1)] = uVar32;
    auStack_10c[(longlong)((longlong)local_2c0 + 1)] = uVar27;
    iVar8 = 0;
    if (local_2b8 != (char **)&DAT_00000001) {
      iVar8 = auStack_cc[(ulonglong)((int)local_2b8 - 2) + 1];
    }
    local_2b8 = local_2c0;
  } while (iVar8 < (int)uVar29);
  uVar31 = 0x11938;
LAB_14957e0e5:
  local_2d8 = (char **)0x14bd4063a;
  iVar8 = 0xb;
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar31);
  local_1d8 = 0xb;
LAB_14957d039:
  ppcVar22 = (char **)0x0;
  iVar9 = local_1d8;
LAB_14957d03c:
  local_1d8 = iVar9;
  ppcVar34 = local_228;
  if (local_1b0 != (char **)0x0) {
    FUN_145e3b961();
  }
LAB_14957d05d:
  ppcVar25 = (char **)0x0;
  lVar12 = local_260;
  do {
    if (local_68[(longlong)ppcVar25] != (char *)0x0) {
      FUN_14955db91(*(undefined8 *)(local_68[(longlong)ppcVar25] + 0x70));
      lVar12 = local_260;
    }
    ppcVar25 = (char **)((longlong)ppcVar25 + 1);
  } while (ppcVar34 != ppcVar25);
  lVar24 = local_238;
  if (0 < (int)ppcVar22) {
    uVar21 = 0;
    do {
      if (local_90[uVar21 - 1] != (char *)0x0) {
        FUN_14955db91(*(undefined8 *)(local_90[uVar21 - 1] + 0x70));
        lVar12 = local_260;
      }
      uVar21 = uVar21 + 1;
      lVar24 = local_238;
    } while (((ulonglong)ppcVar22 & 0xffffffff) != uVar21);
  }
LAB_14957ce3e:
  lVar30 = lVar12;
  if (lVar24 != 0) {
    FUN_14956234e(lVar24);
  }
LAB_14957cbac:
  pcVar33[0xc] = '\0';
  if (pcVar33 != (char *)0x0) {
    FUN_14955db91(*(undefined8 *)(pcVar33 + 0x70));
  }
  cVar37 = param_1[0x54];
  param_1[0x54] = cVar37 + -1;
  pcVar11 = *(char **)(param_1 + (longlong)(char)(cVar37 + -1) * 8 + 0x90);
LAB_14957cbcf:
  *(char **)(param_1 + 0x88) = pcVar11;
  pcVar33 = pcVar11;
  if (iVar8 != 0) {
LAB_14957ce5d:
    if (lVar30 != 0) {
      FUN_14956234e(lVar30);
    }
    if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return iVar8;
  }
  goto LAB_14957cb54;
LAB_14957ddad:
  do {
    if (local_280 < ppcVar34) {
      uVar27 = 1;
      if ((char)pcVar11 == '\0') {
        uVar27 = local_1dc;
      }
      local_2d8 = (char **)((ulonglong)local_2d8 & 0xffffffffffffff00);
      local_1d8 = FUN_149568377(local_290,&local_1f8,&local_1dc,uVar27);
      ppcVar22 = local_2b8;
      iVar9 = local_1d8;
      iVar8 = local_1d8;
      if (local_1d8 != 0) goto LAB_14957d03c;
      pcVar36 = (char *)CONCAT44(uStack_1f4,local_1f8);
      FUN_149566d5d(pcVar36);
      local_90[(longlong)((longlong)ppcVar34 + -1)] = pcVar36;
      local_2b8 = (char **)(ulonglong)((int)local_2b8 + 1);
      *(uint *)((longlong)local_e8 + (longlong)ppcVar34 * 4) = (uint)local_2a8;
      if (*(char *)(local_290 + 0x21) != '\0') {
        local_2d8 = (char **)&local_1d8;
        FUN_1495691f2(local_290,*(undefined4 *)(pcVar36 + 4),5,*(undefined4 *)(lVar3 + 4));
        goto LAB_14957de77;
      }
    }
    else {
      pcVar36 = local_68[(longlong)ppcVar34];
      local_90[(longlong)((longlong)ppcVar34 + -1)] = pcVar36;
      local_68[(longlong)ppcVar34] = (char *)0x0;
      local_1d8 = FUN_1495580c6(*(undefined8 *)(pcVar36 + 0x70));
      local_2b8 = (char **)(ulonglong)((int)local_2b8 + 1);
LAB_14957de77:
      ppcVar22 = local_2b8;
      iVar9 = local_1d8;
      iVar8 = local_1d8;
      if (local_1d8 != 0) goto LAB_14957d03c;
    }
    ppcVar34 = (char **)((longlong)ppcVar34 + 1);
  } while (local_2c0 != ppcVar34);
  if ((int)(uint)local_2b8 < 1) {
LAB_14957e103:
    local_2c0 = (char **)CONCAT44(local_2c0._4_4_,local_1dc);
    local_2a0 = (char **)((ulonglong)local_2a0 & 0xffffffff00000000);
  }
  else {
    uVar28 = (ulonglong)local_2b8 & 0xffffffff;
    uVar21 = 0;
    do {
      pcVar11 = local_90[uVar21 - 1];
      uVar27 = *(uint *)(pcVar11 + 4);
      auStack_128[uVar21] = uVar27;
      auStack_148[uVar21] = uVar27;
      auStack_152[uVar21] = *(undefined2 *)(*(longlong *)(pcVar11 + 0x70) + 0x34);
      if (uVar21 != 0) {
        uVar18 = 0;
        do {
          if (auStack_128[uVar18] == uVar27) {
            local_2d8 = (char **)0x14bd4063a;
            FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11982);
            local_1d8 = 0xb;
            ppcVar22 = local_2b8;
            iVar9 = local_1d8;
            iVar8 = local_1d8;
            goto LAB_14957d03c;
          }
          uVar18 = uVar18 + 1;
        } while (uVar21 != uVar18);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar28);
    uVar21 = 0;
    do {
      uVar27 = 0;
      if ((uint)local_2b8 != 1) {
        uVar14 = 1;
        uVar18 = 0;
        do {
          uVar16 = uVar14 & 0xffffffff;
          if (auStack_148[(int)uVar18] <= auStack_148[uVar14]) {
            uVar16 = uVar18;
          }
          uVar14 = uVar14 + 1;
          uVar27 = (uint)uVar16;
          uVar18 = uVar16;
        } while (uVar28 != uVar14);
      }
      lVar30 = (longlong)(int)uVar27;
      local_2c0 = (char **)CONCAT44(local_2c0._4_4_,auStack_148[lVar30]);
      auStack_148[lVar30] = 0xffffffff;
      if (uVar21 != uVar27) {
        if ((longlong)uVar21 < lVar30) {
          iVar8 = *(int *)(local_290 + 0x3c);
          lVar12 = *(longlong *)(local_90[lVar30 + -1] + 0x70);
          *(undefined2 *)(lVar12 + 0x34) = 0;
          FUN_1495695d2(lVar12,iVar8 + uVar27 + 1);
        }
        local_278 = local_90[uVar21 - 1];
        *(undefined2 *)(*(longlong *)(local_278 + 0x70) + 0x34) = auStack_152[lVar30];
        uVar5 = (uint)local_2c0;
        FUN_1495695d2();
        *(undefined4 *)(local_278 + 4) = uVar5;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar28);
    local_2a0 = (char **)CONCAT44(local_2a0._4_4_,(int)CONCAT71((int7)(uVar21 >> 8),1));
  }
  local_1dc = (uint)local_2c0;
  local_298 = (char **)(longlong)(int)(uint)local_2b8;
  lVar30 = alStack_a8[(longlong)local_298 + 1];
  uVar27 = *(uint *)(lVar30 + 4);
  *(uint *)local_258 =
       uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
  if ((((ulonglong)local_2b0 & 8) == 0) && (local_24c != (uint)local_2b8)) {
    ppcVar34 = local_68;
    if ((int)local_24c < (int)(uint)local_2b8) {
      ppcVar34 = (char **)&local_98;
    }
    *(undefined4 *)(*(longlong *)(lVar30 + 0x50) + 8) =
         *(undefined4 *)(*(longlong *)(ppcVar34[(longlong)local_280] + 0x50) + 8);
  }
  if (0 < (int)(uint)local_2a8 && *(char *)(local_290 + 0x21) != '\0') {
    local_2c0 = (char **)CONCAT44(local_2c0._4_4_,(uint)((int)local_270 == 0));
    local_280 = (char **)CONCAT44(local_98._4_4_,(int)local_98);
    pcVar11 = (char *)(ulonglong)
                      ((uint)*(ushort *)(local_280 + 3) + (uint)*(byte *)((longlong)local_280 + 0xc)
                      );
    pcVar36 = (char *)0x0;
    local_2b0 = (char **)((ulonglong)local_2b0 & 0xffffffff00000000);
    local_268 = local_268 & 0xffffffff00000000;
    iVar8 = (uint)local_2a8;
    local_258 = local_280;
    do {
      local_2a8 = (void *)CONCAT44(local_2a8._4_4_,iVar8);
      uVar27 = (uint)local_2b0;
      if (pcVar36 == pcVar11) {
        uVar21 = (ulonglong)local_2b0 & 0xffffffff;
        lVar30 = (longlong)(int)(uint)local_2b0;
        ppcVar34 = local_68 + lVar30 + 1;
        ppcVar22 = local_90 + lVar30;
        do {
          lVar30 = lVar30 + 1;
          local_280 = ppcVar34;
          if (lVar30 < (longlong)local_298) {
            local_280 = ppcVar22;
          }
          local_280 = (char **)*local_280;
          pcVar11 = (char *)(ulonglong)
                            ((int)pcVar11 + (uint)local_2c0 + (uint)*(ushort *)(local_280 + 3) +
                            (uint)*(byte *)((longlong)local_280 + 0xc));
          uVar27 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar27;
          ppcVar34 = ppcVar34 + 1;
          ppcVar22 = ppcVar22 + 1;
        } while (pcVar36 == pcVar11);
      }
      local_2b0 = (char **)CONCAT44(local_2b0._4_4_,uVar27);
      puVar4 = (uint *)local_1b0[(longlong)pcVar36];
      lVar30 = (longlong)(int)(uint)local_268;
      local_278 = pcVar36;
      if (pcVar36 == (char *)(ulonglong)auStack_cc[lVar30 + 1]) {
        local_268 = CONCAT44(local_268._4_4_,(uint)local_268 + 1);
        local_258 = (char **)local_90[lVar30];
        if ((int)local_270 != 0) goto LAB_14957e2b0;
      }
      else {
LAB_14957e2b0:
        if (((((int)(uint)local_2b8 <= (int)uVar27) ||
             (*(uint *)((longlong)local_258 + 4) != auStack_128[(int)uVar27])) ||
            (puVar4 < local_280[10])) || (local_280[0xb] <= puVar4)) {
          if ((char)local_22c == '\0') {
            uVar27 = *puVar4;
            local_2d8 = (char **)&local_1d8;
            FUN_1495691f2(local_290,
                          uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                          uVar27 << 0x18,5,*(uint *)((longlong)local_258 + 4));
          }
          uVar6 = *(ushort *)((longlong)local_1a8 + (longlong)local_278 * 2);
          if (uVar6 == 0) {
            uVar6 = FUN_14957fa55(&local_1c0);
          }
          if (*(ushort *)(local_258 + 2) < uVar6) {
            FUN_1495696fa(local_258,local_280,puVar4,&local_1d8);
          }
          ppcVar22 = local_2b8;
          iVar9 = local_1d8;
          iVar8 = local_1d8;
          if (local_1d8 != 0) goto LAB_14957d03c;
          iVar8 = (int)local_1c0;
        }
      }
      pcVar36 = local_278 + 1;
    } while ((longlong)pcVar36 < (longlong)iVar8);
  }
  if (1 < (int)(uint)local_2b8) {
    local_280 = (char **)(ulonglong)((uint)local_2b8 - 1);
    local_278 = (char *)(local_210 & 0xffffffff);
    ppcVar34 = (char **)0x0;
    local_2a8 = (void *)((ulonglong)local_2a8 & 0xffffffff00000000);
    do {
      pcVar11 = local_90[(longlong)((longlong)ppcVar34 + -1)];
      lVar30 = (longlong)(int)auStack_cc[(longlong)ppcVar34 + 1];
      ppcVar22 = (char **)local_1b0[lVar30];
      uVar6 = *(ushort *)((longlong)local_1a8 + lVar30 * 2);
      local_2c0 = (char **)CONCAT44(local_2c0._4_4_,(int)local_200 + (uint)uVar6);
      local_2b0 = (char **)((int)(uint)local_2a8 + local_260);
      if (pcVar11[8] == '\0') {
        *(uint *)(*(longlong *)(pcVar11 + 0x50) + 8) = *(uint *)ppcVar22;
      }
      else if ((int)local_270 == 0) {
        ppcVar22 = (char **)((longlong)ppcVar22 + -4);
        if (uVar6 == 4) {
          uVar6 = (**(code **)(lVar3 + 0x78))(lVar3,ppcVar22);
          local_2c0 = (char **)CONCAT44(local_2c0._4_4_,(uint)uVar6);
        }
      }
      else {
        (**(code **)(pcVar11 + 0x80))(pcVar11,local_1b0[lVar30 + -1],&local_1f8);
        uVar21 = CONCAT44(uStack_1f4,local_1f8);
        if (uVar21 < 0x80) {
          *(byte *)((longlong)local_2b0 + 4) = (byte)local_1f8;
          local_2c0._0_4_ = 1;
        }
        else if (uVar21 < 0x4000) {
          *(byte *)((longlong)local_2b0 + 4) = (byte)(uVar21 >> 7) | 0x80;
          *(byte *)((longlong)local_2b0 + 5) = (byte)local_1f8 & 0x7f;
          local_2c0._0_4_ = 2;
        }
        else {
          iVar8 = FUN_14957a85b();
          local_2c0._0_4_ = iVar8;
        }
        ppcVar22 = local_2b0;
        local_2c0 = (char **)CONCAT44(local_2c0._4_4_,(uint)local_2c0 + 4);
        local_2b0 = (char **)0x0;
      }
      local_2d0 = *(undefined4 *)(pcVar11 + 4);
      local_2c8 = (undefined8 *)&local_1d8;
      local_2d8 = local_2b0;
      FUN_14957c7e3(lVar3,(int)local_278 + (int)ppcVar34,ppcVar22,(ulonglong)local_2c0 & 0xffffffff)
      ;
      ppcVar22 = local_2b8;
      iVar9 = local_1d8;
      iVar8 = local_1d8;
      if (local_1d8 != 0) goto LAB_14957d03c;
      local_2a8 = (void *)CONCAT44(local_2a8._4_4_,(uint)local_2a8 + (uint)local_2c0);
      ppcVar34 = (char **)((longlong)ppcVar34 + 1);
    } while (local_280 != ppcVar34);
  }
  iVar8 = (int)local_2b8;
  uVar27 = 1 - iVar8;
  if ((int)uVar27 < iVar8) {
    local_278 = (char *)CONCAT44(local_278._4_4_,(int)local_1c0);
    local_2a8 = (void *)CONCAT44(local_2a8._4_4_,auStack_cc[1]);
    iVar8 = iVar8 * 2 + -1;
    do {
      uVar29 = -uVar27;
      if ((int)-uVar27 < 0) {
        uVar29 = uVar27;
      }
      if (local_1d4[uVar29] == '\0') {
        local_2c0 = (char **)CONCAT44(local_2c0._4_4_,iVar8);
        if ((int)uVar27 < 0) {
          if ((&iStack_ec)[(int)uVar29] < (int)auStack_cc[(int)uVar29]) goto LAB_14957e5a7;
LAB_14957e5d7:
          if ((uint)local_218 < uVar29) {
            uVar21 = (ulonglong)(uVar29 - 1);
            iVar8 = (int)local_278;
          }
          else {
            uVar21 = (ulonglong)(int)(uVar29 - 1);
            iVar8 = *(int *)((longlong)local_e8 + uVar21 * 4) + (uint)((int)local_270 == 0);
          }
          iVar15 = (uint)((int)local_270 == 0) + auStack_cc[uVar21 + 1];
          iVar9 = auStack_cc[(ulonglong)uVar29 + 1] - iVar15;
        }
        else {
          iVar15 = 0;
          iVar8 = 0;
          iVar9 = (uint)local_2a8;
          if (uVar27 != 0) goto LAB_14957e5d7;
        }
        local_2b0 = (char **)local_90[(ulonglong)uVar29 - 1];
        local_2d8 = &local_1c0;
        iVar8 = FUN_14957f6ff(local_2b0,iVar8,iVar15,iVar9);
        ppcVar22 = local_2b8;
        iVar9 = iVar8;
        if (iVar8 != 0) goto LAB_14957d03c;
        local_1d4[uVar29] = 1;
        *(uint *)((longlong)local_2b0 + 0x14) = (uint)local_288 - auStack_10c[(ulonglong)uVar29 + 1]
        ;
        iVar8 = (uint)local_2c0;
      }
LAB_14957e5a7:
      uVar27 = uVar27 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_1d8 = 0;
  if (((cVar37 == '\x01') && (*(short *)(lVar3 + 0x18) == 0)) &&
     (lVar30 = CONCAT44(local_98._4_4_,(int)local_98),
     (int)(uint)*(byte *)(lVar3 + 9) <= *(int *)(lVar30 + 0x14))) {
    local_1d8 = FUN_14957ef4a(lVar30,0xffffffff);
    FUN_14957f41a(lVar30,lVar3,&local_1d8);
    iVar8 = local_1d8;
    if (local_1d8 == 0) {
      iVar8 = FUN_14957b1d6(*(undefined8 *)(lVar30 + 0x48),lVar30,*(undefined4 *)(lVar30 + 4));
    }
  }
  else {
    iVar8 = 0;
    if (((byte)local_2a0 & (char)local_22c == '\0' & *(char *)(local_290 + 0x21) != '\0') == 1) {
      uVar21 = (ulonglong)local_2b8 & 0xffffffff;
      uVar28 = 0;
      do {
        uVar27 = *(uint *)(*(longlong *)(local_90[uVar28 - 1] + 0x50) + 8);
        local_2d8 = (char **)&local_1d8;
        FUN_1495691f2(local_290,
                      uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                      uVar27 << 0x18,5,*(undefined4 *)(local_90[uVar28 - 1] + 4));
        uVar28 = uVar28 + 1;
        iVar8 = local_1d8;
      } while (uVar21 != uVar28);
    }
  }
  ppcVar34 = local_298;
  ppcVar22 = local_2b8;
  iVar9 = iVar8;
  if ((int)local_2b8 <= (int)(uint)local_218) {
    iVar15 = (uint)local_218 - (int)local_2b8;
    lVar30 = 0;
    do {
      if (iVar8 == 0) {
        pcVar11 = local_68[(longlong)ppcVar34 + lVar30];
        iVar8 = FUN_14957b1d6(*(undefined8 *)(pcVar11 + 0x48),pcVar11,*(undefined4 *)(pcVar11 + 4));
      }
      lVar30 = lVar30 + 1;
      ppcVar22 = local_2b8;
      iVar9 = iVar8;
    } while (iVar15 + 1 != (int)lVar30);
  }
  goto LAB_14957d03c;
}



// FUNCTION 14957e9b8 FUN_14957e9b8 body=235 status=ok
// SIG undefined FUN_14957e9b8(void)

int FUN_14957e9b8(longlong param_1,void *param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_3 + 0x24);
  uVar4 = iVar2 - param_4;
  if (uVar4 == 0 || iVar2 < param_4) {
    if (0 < (int)param_5) {
      uVar3 = 0;
      do {
        if (*(char *)((longlong)param_2 + uVar3) != '\0') {
          iVar2 = FUN_1495580c6(*(undefined8 *)(param_1 + 0x70));
          if (iVar2 != 0) {
            return iVar2;
          }
          memset((void *)((longlong)param_2 + uVar3),0,(longlong)(int)param_5 - uVar3);
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (param_5 != uVar3);
    }
    iVar2 = 0;
  }
  else if ((param_5 - uVar4 == 0 || (int)param_5 < (int)uVar4) ||
          (iVar2 = FUN_14957e9b8(param_1,(ulonglong)uVar4 + (longlong)param_2,param_3,iVar2,
                                 param_5 - uVar4), param_5 = uVar4, iVar2 == 0)) {
    iVar1 = memcmp(param_2,(void *)(*(longlong *)(param_3 + 0x10) + (longlong)param_4),
                   (longlong)(int)param_5);
    iVar2 = 0;
    if ((iVar1 != 0) && (iVar2 = FUN_1495580c6(*(undefined8 *)(param_1 + 0x70)), iVar2 == 0)) {
      memmove(param_2,(void *)((longlong)param_4 + *(longlong *)(param_3 + 0x10)),
              (longlong)(int)param_5);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// FUNCTION 14957eaa3 FUN_14957eaa3 body=880 status=ok
// SIG undefined FUN_14957eaa3(void)

undefined8 FUN_14957eaa3(longlong param_1,uint param_2,ushort param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  
  uVar12 = param_2 & 0xffff;
  uVar14 = (uint)param_3;
  uVar6 = uVar14 + uVar12;
  lVar3 = *(longlong *)(param_1 + 0x50);
  uVar5 = (ulonglong)*(byte *)(param_1 + 9);
  uVar8 = uVar5 + 1;
  uVar4 = uVar8;
  if ((*(char *)(lVar3 + 2 + uVar5) == '\0') && (*(char *)(lVar3 + uVar8) == '\0')) {
    uVar9 = 0;
    uVar10 = uVar8;
  }
  else {
    do {
      uVar10 = uVar4;
      uVar15 = *(ushort *)(lVar3 + uVar10);
      uVar9 = uVar15 << 8 | uVar15 >> 8;
      uVar16 = (uint)uVar9;
      uVar13 = (uint)uVar10;
      if ((ushort)param_2 <= uVar9) goto LAB_14957eb0e;
      uVar4 = (ulonglong)uVar9;
    } while (uVar13 + 4 <= uVar16);
    if (uVar9 != 0) {
      uVar11 = 0x10127;
      goto LAB_14957ecc6;
    }
LAB_14957eb0e:
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x34);
    if (uVar2 - 4 < uVar16) {
      uVar11 = 0x1012c;
      goto LAB_14957ecc6;
    }
    if (uVar6 + 3 < uVar16 || uVar9 == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (char)(uVar15 >> 8) - (char)uVar6;
      if (uVar9 < uVar6) {
        uVar11 = 0x10138;
        goto LAB_14957ecc6;
      }
      uVar15 = *(ushort *)(lVar3 + 2 + (ulonglong)uVar9);
      uVar6 = (ushort)(uVar15 << 8 | uVar15 >> 8) + uVar16;
      if (uVar2 < uVar6) {
        uVar11 = 0x1013b;
        goto LAB_14957ecc6;
      }
      param_3 = (short)uVar6 - (ushort)param_2;
      uVar15 = *(ushort *)(lVar3 + (ulonglong)uVar9);
      uVar9 = uVar15 << 8 | uVar15 >> 8;
    }
    if (((uint)uVar8 < uVar13) &&
       (uVar15 = *(ushort *)(lVar3 + 2 + uVar10), uVar15 = uVar15 << 8 | uVar15 >> 8,
       uVar12 <= uVar15 + uVar13 + 3)) {
      uVar16 = uVar15 + uVar13;
      if (uVar12 < uVar16) {
        uVar11 = 0x10148;
        goto LAB_14957ecc6;
      }
      bVar7 = bVar7 + ((char)uVar12 - (char)uVar16);
      param_3 = (short)uVar6 - (short)uVar10;
      param_2 = uVar13;
    }
    bVar1 = *(byte *)(lVar3 + 7 + uVar5);
    if (bVar1 < bVar7) {
      uVar11 = 0x1014e;
      goto LAB_14957ecc6;
    }
    *(byte *)(lVar3 + 7 + uVar5) = bVar1 - bVar7;
    uVar12 = param_2 & 0xffff;
  }
  uVar15 = *(ushort *)(lVar3 + 5 + uVar5);
  uVar13 = (uint)(ushort)(uVar15 << 8 | uVar15 >> 8);
  if (uVar12 <= uVar13) {
    if (uVar12 < uVar13) {
      uVar11 = 0x10156;
    }
    else {
      if ((uint)uVar8 == (uint)uVar10) {
        *(ushort *)(lVar3 + uVar8) = uVar9 << 8 | uVar9 >> 8;
        *(char *)(lVar3 + 5 + uVar5) = (char)(uVar6 >> 8);
        *(char *)(lVar3 + 6 + uVar5) = (char)uVar6;
        goto LAB_14957ebbc;
      }
      uVar11 = 0x10157;
    }
LAB_14957ecc6:
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar11,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    return 0xb;
  }
  *(ushort *)(lVar3 + uVar10) = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
LAB_14957ebbc:
  uVar8 = (ulonglong)(param_2 & 0xffff);
  if ((*(byte *)(*(longlong *)(param_1 + 0x48) + 0x26) & 0xc) != 0) {
    memset((void *)(lVar3 + uVar8),0,(ulonglong)param_3);
  }
  *(char *)(lVar3 + uVar8) = (char)(uVar9 >> 8);
  *(char *)(lVar3 + 1 + uVar8) = (char)uVar9;
  *(char *)(lVar3 + 2 + uVar8) = (char)(param_3 >> 8);
  *(char *)(lVar3 + 3 + uVar8) = (char)param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar14;
  return 0;
}



// FUNCTION 14957ee13 FUN_14957ee13 body=311 status=ok
// SIG undefined FUN_14957ee13(void)

longlong FUN_14957ee13(longlong param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulonglong uVar12;
  
  uVar8 = (ulonglong)*(byte *)(param_1 + 9);
  lVar3 = *(longlong *)(param_1 + 0x50);
  uVar12 = uVar8 + 1;
  uVar4 = *(ushort *)(lVar3 + 1 + uVar8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x34);
  uVar9 = iVar2 - param_2;
  uVar6 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
  while( true ) {
    if ((int)uVar9 < (int)uVar6) {
      if ((int)uVar6 <= iVar2 + -4) {
        return 0;
      }
      uVar10 = 0x10098;
      goto LAB_14957ef16;
    }
    uVar7 = (ulonglong)uVar6;
    uVar4 = *(ushort *)(lVar3 + 2 + uVar7);
    uVar4 = uVar4 << 8 | uVar4 >> 8;
    uVar5 = (uint)uVar4 - param_2;
    if (-1 < (int)uVar5) break;
    uVar11 = *(ushort *)(lVar3 + uVar7) << 8 | *(ushort *)(lVar3 + uVar7) >> 8;
    uVar5 = uVar4 + uVar6;
    uVar12 = (ulonglong)uVar6;
    uVar6 = (uint)uVar11;
    if (uVar11 <= uVar5) {
      if (uVar11 != 0) {
        uVar10 = 0x10091;
LAB_14957ef16:
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar10,
                      "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
        *param_3 = 0xb;
      }
      return 0;
    }
  }
  if (uVar5 < 4) {
    if (0x39 < *(byte *)(lVar3 + 7 + uVar8)) {
      return 0;
    }
    *(undefined2 *)(lVar3 + uVar12) = *(undefined2 *)(lVar3 + uVar7);
    pcVar1 = (char *)(lVar3 + 7 + uVar8);
    *pcVar1 = *pcVar1 + (char)uVar5;
  }
  else {
    if (uVar9 < uVar6 + uVar5) {
      uVar10 = 0x10083;
      goto LAB_14957ef16;
    }
    *(ushort *)(lVar3 + 2 + uVar7) = (ushort)uVar5 << 8 | (ushort)uVar5 >> 8;
  }
  return lVar3 + (ulonglong)(uVar6 + uVar5);
}



// FUNCTION 14957ef4a FUN_14957ef4a body=1232 status=ok
// SIG undefined FUN_14957ef4a(void)

undefined8 FUN_14957ef4a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint local_74;
  longlong local_68;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar10 = (ulonglong)*(byte *)(param_1 + 9);
  uVar3 = *(ushort *)(param_1 + 0x12);
  uVar6 = *(ushort *)(param_1 + 0x18);
  uVar12 = (uint)uVar3 + (uint)uVar6 * 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x34);
  if (param_2 < (int)(uint)*(byte *)(lVar2 + 7 + uVar10)) {
LAB_14957efa5:
    local_74 = uVar9 - 4;
    uVar14 = uVar9;
    if ((ulonglong)uVar6 != 0) {
      lVar1 = (ulonglong)uVar3 + lVar2;
      uVar16 = 0;
      local_68 = 0;
      lVar18 = lVar2;
      uVar11 = uVar9;
      do {
        uVar3 = *(ushort *)(lVar1 + uVar16 * 2);
        uVar3 = uVar3 << 8 | uVar3 >> 8;
        if ((uVar3 < uVar12) ||
           (uVar17 = (uint)uVar3, uVar17 != local_74 && (int)local_74 <= (int)(uint)uVar3)) {
          uVar13 = 0x10032;
          goto LAB_14957f290;
        }
        uVar4 = (**(code **)(param_1 + 0x78))(param_1,lVar18 + (ulonglong)uVar17);
        uVar14 = uVar11 - uVar4;
        if (((int)uVar14 < (int)uVar12) || ((int)uVar9 < (int)((uint)uVar4 + (uint)uVar3))) {
          uVar13 = 0x10038;
          goto LAB_14957f290;
        }
        *(ushort *)(lVar1 + uVar16 * 2) = (ushort)uVar14 << 8 | (ushort)uVar14 >> 8;
        if (local_68 == 0) {
          if (uVar14 != uVar17) {
            lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x48) + 0x110);
            uVar3 = *(ushort *)(lVar2 + 5 + uVar10);
            uVar3 = uVar3 << 8 | uVar3 >> 8;
            memcpy((void *)(lVar18 + (ulonglong)uVar3),(void *)((ulonglong)uVar3 + lVar2),
                   (longlong)(int)(uVar11 - uVar3));
            local_68 = lVar18;
            goto LAB_14957f03b;
          }
          local_68 = 0;
        }
        else {
LAB_14957f03b:
          memcpy((void *)((ulonglong)uVar14 + lVar2),(void *)((ulonglong)uVar17 + lVar18),
                 (ulonglong)uVar4);
        }
        uVar16 = uVar16 + 1;
        uVar11 = uVar14;
      } while (uVar6 != uVar16);
    }
    *(undefined1 *)(lVar2 + 7 + uVar10) = 0;
  }
  else {
    uVar4 = *(ushort *)(lVar2 + 1 + uVar10);
    uVar4 = uVar4 << 8 | uVar4 >> 8;
    if ((int)(uVar9 - 4) < (int)(uint)uVar4) {
      uVar13 = 0x10002;
      goto LAB_14957f290;
    }
    uVar11 = (uint)uVar4;
    if (uVar4 == 0) goto LAB_14957efa5;
    uVar5 = *(ushort *)(lVar2 + (ulonglong)uVar4);
    uVar5 = uVar5 << 8 | uVar5 >> 8;
    uVar16 = (ulonglong)uVar5;
    if (uVar9 - 4 < (uint)uVar5) {
      uVar13 = 0x10005;
      goto LAB_14957f290;
    }
    if ((uVar5 != 0) &&
       ((*(char *)(lVar2 + uVar16) != '\0' || (*(char *)(lVar2 + 1 + uVar16) != '\0'))))
    goto LAB_14957efa5;
    uVar6 = *(ushort *)(lVar2 + 5 + uVar10);
    uVar6 = uVar6 << 8 | uVar6 >> 8;
    iVar15 = uVar11 - uVar6;
    if (uVar11 < uVar6 || iVar15 == 0) {
      uVar13 = 0x1000d;
      goto LAB_14957f290;
    }
    uVar7 = *(ushort *)(lVar2 + 2 + (ulonglong)uVar4);
    uVar7 = uVar7 << 8 | uVar7 >> 8;
    uVar17 = (uint)uVar7;
    uVar14 = (uint)uVar7 + (uint)uVar4;
    if (uVar5 == 0) {
      uVar19 = 0;
      if ((int)uVar9 < (int)uVar14) {
        uVar13 = 0x10016;
        goto LAB_14957f290;
      }
    }
    else {
      if (uVar5 < uVar14) {
        uVar13 = 0x10010;
        goto LAB_14957f290;
      }
      uVar4 = *(ushort *)(lVar2 + 2 + uVar16);
      uVar4 = uVar4 << 8 | uVar4 >> 8;
      uVar19 = (uint)uVar4;
      if ((int)uVar9 < (int)((uint)uVar4 + (uint)uVar5)) {
        uVar13 = 0x10012;
        goto LAB_14957f290;
      }
      memmove((void *)((ulonglong)(uVar4 + uVar14) + lVar2),(void *)((ulonglong)uVar14 + lVar2),
              (longlong)(int)(uVar5 - uVar14));
      uVar17 = (uint)uVar7 + (uint)uVar4;
    }
    uVar14 = uVar17 + uVar6;
    memmove((void *)((ulonglong)uVar14 + lVar2),(void *)((ulonglong)(uint)uVar6 + lVar2),
            (longlong)iVar15);
    if (uVar3 < uVar12) {
      puVar8 = (ushort *)((ulonglong)uVar3 + lVar2);
      do {
        uVar3 = *puVar8 << 8 | *puVar8 >> 8;
        uVar9 = uVar17;
        if ((uVar3 < uVar11) || (uVar9 = uVar19, (uint)uVar3 < (uint)uVar5)) {
          uVar3 = (short)uVar9 + uVar3;
          *puVar8 = uVar3 * 0x100 | uVar3 >> 8;
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 < (ushort *)((ulonglong)uVar12 + lVar2));
    }
  }
  if ((uint)*(byte *)(lVar2 + 7 + uVar10) + (uVar14 - uVar12) == *(int *)(param_1 + 0x14)) {
    *(ushort *)(lVar2 + 5 + uVar10) = (ushort)uVar14 << 8 | (ushort)uVar14 >> 8;
    *(undefined2 *)(lVar2 + 1 + uVar10) = 0;
    memset((void *)((ulonglong)uVar12 + lVar2),0,(longlong)(int)(uVar14 - uVar12));
    return 0;
  }
  uVar13 = 0x1004d;
LAB_14957f290:
  FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar13,
                "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  return 0xb;
}



// FUNCTION 14957f41a FUN_14957f41a body=185 status=ok
// SIG undefined FUN_14957f41a(void)

void FUN_14957f41a(longlong param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  ushort uVar5;
  int iVar6;
  void *_Dst;
  
  if (*param_3 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    pvVar4 = *(void **)(param_2 + 0x50);
    bVar1 = *(byte *)(param_1 + 9);
    iVar6 = *(int *)(param_2 + 4);
    uVar5 = *(ushort *)(lVar3 + 5 + (ulonglong)bVar1);
    uVar5 = uVar5 << 8 | uVar5 >> 8;
    memcpy((void *)((longlong)pvVar4 + (ulonglong)uVar5),(void *)(lVar3 + (ulonglong)uVar5),
           (ulonglong)(*(int *)(lVar2 + 0x34) - (uint)uVar5));
    _Dst = (void *)((longlong)pvVar4 + 100);
    if (iVar6 != 1) {
      _Dst = pvVar4;
    }
    memcpy(_Dst,(void *)(lVar3 + (ulonglong)bVar1),
           (ulonglong)*(ushort *)(param_1 + 0x12) + (ulonglong)*(ushort *)(param_1 + 0x18) * 2);
    *param_2 = 0;
    iVar6 = FUN_1495648a4(param_2);
    if ((iVar6 == 0) && (iVar6 = FUN_14957c50d(param_2), iVar6 == 0)) {
      if (*(char *)(lVar2 + 0x21) == '\0') {
        return;
      }
      iVar6 = FUN_1495690e5(param_2);
    }
    *param_3 = iVar6;
  }
  return;
}



// FUNCTION 14957f4d3 FUN_14957f4d3 body=556 status=ok
// SIG undefined FUN_14957f4d3(void)

undefined8 FUN_14957f4d3(longlong param_1,int param_2,int param_3,longlong param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  ushort *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *_Src;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  ushort *puVar12;
  ushort *_Dst;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar8 = (ulonglong)*(byte *)(param_4 + 9);
  puVar3 = *(ushort **)(param_4 + 0x50);
  uVar2 = *(uint *)((longlong)*(longlong **)(param_4 + 0x48) + 0x34);
  puVar9 = *(ushort **)(param_4 + 0x60);
  lVar4 = *(longlong *)(**(longlong **)(param_4 + 0x48) + 0x110);
  uVar1 = *(ushort *)((longlong)puVar3 + uVar8 + 5);
  uVar6 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
  uVar7 = (ulonglong)uVar6;
  if (uVar2 < uVar6) {
    uVar7 = 0;
  }
  memcpy((void *)(lVar4 + uVar7),(void *)((longlong)puVar3 + uVar7),(ulonglong)(uVar2 - (int)uVar7))
  ;
  uVar7 = 0;
  do {
    uVar14 = uVar7;
    if (5 < uVar14) break;
    uVar7 = uVar14 + 1;
  } while (*(int *)(param_1 + 0x50 + uVar14 * 4) <= param_2);
  puVar12 = (ushort *)((longlong)(int)uVar2 + (longlong)puVar3);
  lVar10 = (longlong)param_2;
  _Dst = puVar12;
  do {
    puVar5 = *(ushort **)(param_1 + 0x20 + uVar14 * 8);
    do {
      _Src = *(ushort **)(*(longlong *)(param_1 + 0x10) + lVar10 * 8);
      uVar7 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x18) + lVar10 * 2);
      if ((_Src < puVar3) || (puVar12 <= _Src)) {
        if ((_Src < puVar5) && (puVar5 < (ushort *)((longlong)_Src + uVar7))) {
          uVar11 = 0x1158f;
          goto LAB_14957f6a0;
        }
      }
      else {
        if (puVar12 < (ushort *)((longlong)_Src + uVar7)) {
          uVar11 = 0x1158a;
          goto LAB_14957f6a0;
        }
        _Src = (ushort *)((longlong)_Src + (lVar4 - (longlong)puVar3));
      }
      _Dst = (ushort *)((longlong)_Dst - uVar7);
      lVar13 = (longlong)_Dst - (longlong)puVar3;
      *puVar9 = (ushort)lVar13 << 8 | (ushort)lVar13 >> 8;
      puVar9 = puVar9 + 1;
      if (_Dst < puVar9) {
        uVar11 = 0x11595;
LAB_14957f6a0:
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar11,
                      "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
        return 0xb;
      }
      memcpy(_Dst,_Src,uVar7);
      lVar10 = lVar10 + 1;
      if (param_3 + param_2 <= lVar10) {
        *(short *)(param_4 + 0x18) = (short)param_3;
        *(undefined1 *)(param_4 + 0xc) = 0;
        *(undefined2 *)((longlong)puVar3 + uVar8 + 1) = 0;
        *(undefined1 *)((longlong)puVar3 + uVar8 + 3) = *(undefined1 *)(param_4 + 0x19);
        *(undefined1 *)((longlong)puVar3 + uVar8 + 4) = *(undefined1 *)(param_4 + 0x18);
        *(char *)((longlong)puVar3 + uVar8 + 5) = (char)((ulonglong)lVar13 >> 8);
        *(char *)((longlong)puVar3 + uVar8 + 6) = (char)lVar13;
        *(undefined1 *)((longlong)puVar3 + uVar8 + 7) = 0;
        return 0;
      }
    } while (lVar10 < *(int *)(param_1 + 0x50 + (longlong)(int)uVar14 * 4));
    uVar14 = (ulonglong)((int)uVar14 + 1);
  } while( true );
}



// FUNCTION 14957f6ff FUN_14957f6ff body=820 status=ok
// SIG undefined FUN_14957f6ff(void)

undefined8
FUN_14957f6ff(longlong param_1,int param_2,undefined8 param_3,int param_4,longlong param_5)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  char *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(longlong *)(param_1 + 0x50);
  local_60 = (ulonglong)*(byte *)(param_1 + 9);
  local_68 = (longlong)(param_4 * 2) + *(longlong *)(param_1 + 0x60);
  uVar3 = *(ushort *)(param_1 + 0x18);
  uVar11 = (uint)uVar3;
  bVar1 = *(byte *)(param_1 + 0xc);
  iVar5 = (int)param_3;
  uVar6 = uVar11;
  local_70 = param_3;
  if (param_2 < iVar5) {
    iVar4 = FUN_14957fa87(param_1,param_2,iVar5 - param_2,param_5);
    uVar6 = (uint)uVar3 - iVar4;
    if ((int)(uint)uVar3 < iVar4) {
      local_88 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      uVar7 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x11658);
      goto LAB_14957f980;
    }
    memmove(*(void **)(param_1 + 0x60),
            (void *)((longlong)(iVar4 * 2) + (longlong)*(void **)(param_1 + 0x60)),
            (ulonglong)(uVar11 * 2));
  }
  iVar12 = uVar11 + param_2 + (uint)bVar1;
  iVar4 = param_4 + (int)local_70;
  iVar13 = iVar12 - iVar4;
  if (iVar13 != 0 && iVar4 <= iVar12) {
    iVar4 = FUN_14957fa87(param_1,iVar4,iVar13,param_5);
    uVar6 = uVar6 - iVar4;
  }
  uVar3 = *(ushort *)(local_58 + 5 + local_60);
  local_50 = (ulonglong)((ushort)(uVar3 << 8 | uVar3 >> 8) - 1 & 0xffff) + local_58 + 1;
  if (local_68 <= local_50) {
    iVar4 = (int)local_70;
    if (iVar4 < param_2) {
      iVar12 = param_2 - iVar5;
      if (param_4 <= param_2 - iVar5) {
        iVar12 = param_4;
      }
      pvVar9 = *(void **)(param_1 + 0x60);
      memmove((void *)((longlong)(iVar12 * 2) + (longlong)pvVar9),pvVar9,(longlong)(int)(uVar6 * 2))
      ;
      local_78 = param_5;
      local_88 = (char *)CONCAT44(local_88._4_4_,iVar4);
      local_80 = iVar12;
      iVar5 = FUN_14957fb70(param_1,local_68,&local_50,pvVar9);
      if (iVar5 != 0) goto LAB_14957f81c;
      uVar6 = iVar12 + uVar6;
    }
    bVar1 = *(byte *)(param_1 + 0xc);
    iVar5 = (int)local_70;
    if (bVar1 != 0) {
      uVar14 = 0;
      uVar7 = local_70;
      do {
        uVar8 = (ulonglong)*(ushort *)(param_1 + 0x1c + uVar14 * 2) + (longlong)param_2;
        iVar5 = (int)uVar8 - (int)uVar7;
        if (iVar5 < param_4 && -1 < iVar5) {
          pvVar9 = (void *)((ulonglong)(uint)(iVar5 * 2) + *(longlong *)(param_1 + 0x60));
          if (uVar6 - iVar5 != 0 && iVar5 <= (int)uVar6) {
            memmove((void *)((longlong)pvVar9 + 2),pvVar9,(longlong)(int)((uVar6 - iVar5) * 2));
          }
          if (*(short *)(*(longlong *)(param_5 + 0x18) + uVar8 * 2) == 0) {
            FUN_14957fa55(param_5,uVar8 & 0xffffffff);
          }
          local_78 = param_5;
          local_88 = (char *)CONCAT44(local_88._4_4_,(int)uVar8);
          local_80 = 1;
          iVar5 = FUN_14957fb70(param_1,local_68,&local_50,pvVar9);
          if (iVar5 != 0) goto LAB_14957f81c;
          uVar6 = uVar6 + 1;
          bVar1 = *(byte *)(param_1 + 0xc);
          uVar7 = local_70;
        }
        iVar5 = (int)uVar7;
        uVar14 = uVar14 + 1;
      } while (uVar14 < bVar1);
    }
    local_80 = param_4 - uVar6;
    local_78 = param_5;
    local_88 = (char *)CONCAT44(local_88._4_4_,uVar6 + iVar5);
    iVar5 = FUN_14957fb70(param_1,local_68,&local_50,
                          (longlong)(int)(uVar6 * 2) + *(longlong *)(param_1 + 0x60));
    if (iVar5 == 0) {
      *(short *)(param_1 + 0x18) = (short)param_4;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *(char *)(local_58 + 3 + local_60) = (char)((uint)param_4 >> 8);
      *(undefined1 *)(local_58 + 4 + local_60) = *(undefined1 *)(param_1 + 0x18);
      uVar3 = (short)local_50 - (short)local_58;
      *(ushort *)(local_58 + 5 + local_60) = uVar3 * 0x100 | uVar3 >> 8;
      uVar7 = 0;
LAB_14957f980:
      if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_14957f81c:
  if (0 < param_4) {
    lVar10 = (longlong)(int)local_70 * 2;
    param_4 = param_4 + 1;
    do {
      if (*(short *)(*(longlong *)(param_5 + 0x18) + lVar10) == 0) {
        uVar2 = (**(code **)(*(longlong *)(param_5 + 8) + 0x78))
                          (*(longlong *)(param_5 + 8),
                           *(undefined8 *)(*(longlong *)(param_5 + 0x10) + lVar10 * 4));
        *(undefined2 *)(*(longlong *)(param_5 + 0x18) + lVar10) = uVar2;
      }
      lVar10 = lVar10 + 2;
      param_4 = param_4 + -1;
    } while (1 < param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14957fa55 FUN_14957fa55 body=50 status=ok
// SIG undefined FUN_14957fa55(void)

undefined2 FUN_14957fa55(longlong param_1,int param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x78))
                    (*(longlong *)(param_1 + 8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar2 * 8));
  *(undefined2 *)(*(longlong *)(param_1 + 0x18) + lVar2 * 2) = uVar1;
  return *(undefined2 *)(*(longlong *)(param_1 + 0x18) + lVar2 * 2);
}



// FUNCTION 14957fa87 FUN_14957fa87 body=233 status=ok
// SIG undefined FUN_14957fa87(void)

int FUN_14957fa87(longlong param_1,int param_2,int param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (param_3 < 1) {
LAB_14957fb48:
    iVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x50);
    uVar11 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + 0x34) + lVar4;
    bVar1 = *(byte *)(param_1 + 9);
    bVar2 = *(byte *)(param_1 + 10);
    lVar10 = (longlong)param_2;
    iVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar5 = *(ulonglong *)(*(longlong *)(param_4 + 0x10) + lVar10 * 8);
      uVar9 = uVar8;
      if (((ulonglong)bVar2 + (ulonglong)bVar1 + lVar4 + 8 <= uVar5) && (uVar5 < uVar11)) {
        uVar3 = *(ushort *)(*(longlong *)(param_4 + 0x18) + lVar10 * 2);
        uVar9 = (uint)uVar3;
        if (uVar7 == uVar3 + uVar5) {
          uVar9 = uVar8 + uVar3;
        }
        else {
          if (uVar7 != 0) {
            FUN_14957eaa3(param_1,(int)uVar7 - (int)lVar4,uVar8);
          }
          if (uVar11 < uVar3 + uVar5) goto LAB_14957fb48;
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar5;
      }
      lVar10 = lVar10 + 1;
      uVar8 = uVar9;
    } while (lVar10 < param_3 + param_2);
    if (uVar7 != 0) {
      FUN_14957eaa3(param_1,(int)uVar7 - (int)lVar4,uVar9);
    }
  }
  return iVar6;
}



// FUNCTION 14957fb70 FUN_14957fb70 body=416 status=ok
// SIG undefined FUN_14957fb70(void)

undefined8
FUN_14957fb70(longlong param_1,longlong param_2,undefined8 *param_3,ushort *param_4,int param_5,
             int param_6,longlong param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  void *_Dst;
  void *pvVar9;
  undefined1 auStack_a8 [32];
  char *local_88;
  int local_74;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = param_2;
  if (0 < param_6) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    pvVar9 = (void *)*param_3;
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1;
      if (5 < uVar6) break;
      lVar8 = uVar6 * 4;
      uVar6 = uVar1;
    } while (*(int *)(param_7 + 0x50 + lVar8) <= param_5);
    local_74 = (int)uVar1 + -1;
    pvVar5 = *(void **)(param_7 + 0x18 + uVar1 * 8);
    lVar8 = (longlong)param_5;
    local_58 = (longlong)(param_6 + param_5);
    local_70 = param_3;
    local_68 = param_1;
    do {
      lVar8 = lVar8 + 1;
      uVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_7 + 0x18) + -2 + lVar8 * 2);
      if (((*(char *)(lVar2 + 1) == '\0') && (*(char *)(lVar2 + 2) == '\0')) ||
         (_Dst = (void *)FUN_14957ee13(local_68,uVar6,local_4c), _Dst == (void *)0x0)) {
        if ((longlong)uVar6 <= (longlong)pvVar9 - local_60) {
          _Dst = (void *)((longlong)pvVar9 - uVar6);
          pvVar9 = _Dst;
          goto LAB_14957fc2e;
        }
LAB_14957fd0a:
        uVar4 = 1;
        goto LAB_14957fcb8;
      }
LAB_14957fc2e:
      _Src = *(void **)(*(longlong *)(param_7 + 0x10) + -8 + lVar8 * 8);
      if ((_Src < pvVar5) && (pvVar5 < (void *)((longlong)_Src + uVar6))) {
        local_88 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
        FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x115eb);
        goto LAB_14957fd0a;
      }
      memmove(_Dst,_Src,uVar6);
      uVar7 = (short)_Dst - (short)lVar2;
      *param_4 = uVar7 * 0x100 | uVar7 >> 8;
      if (local_58 <= lVar8) goto LAB_14957fcae;
      lVar3 = (longlong)local_74;
      if (*(int *)(param_7 + 0x50 + lVar3 * 4) <= lVar8) {
        local_74 = local_74 + 1;
        pvVar5 = *(void **)(param_7 + 0x28 + lVar3 * 8);
      }
      param_4 = param_4 + 1;
    } while( true );
  }
LAB_14957fcb6:
  uVar4 = 0;
LAB_14957fcb8:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_14957fcae:
  *local_70 = pvVar9;
  goto LAB_14957fcb6;
}



// FUNCTION 14957fd11 FUN_14957fd11 body=381 status=ok
// SIG undefined FUN_14957fd11(void)

undefined1 FUN_14957fd11(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_258 [32];
  longlong local_238 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = FUN_149577182(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
    *(longlong *)(param_1 + 0x18) = lVar5;
    if (lVar5 == 0) {
      uVar3 = 7;
      goto LAB_14957fe2a;
    }
    *(undefined2 *)(lVar5 + 0x10) =
         *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) + 6);
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13) = 0;
  }
  lVar5 = *param_2;
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x5c);
  pcVar7 = FUN_149580373;
  if (cVar2 == '\x02') {
    pcVar7 = FUN_14958023f;
  }
  pcVar4 = FUN_14958011d;
  if (cVar2 != '\x01') {
    pcVar4 = pcVar7;
  }
  *(code **)(param_1 + 0x40) = pcVar4;
  memset(local_238,0,0x200);
  lVar8 = local_238[0];
  while (lVar5 != 0) {
    lVar6 = param_2[1];
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(lVar5 + 8);
    }
    else if (lVar5 == lVar6) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar6 + *(int *)(lVar5 + 8);
    }
    *(undefined8 *)(lVar5 + 8) = 0;
    plVar9 = local_238;
    local_238[0] = lVar8;
    while (lVar8 != 0) {
      lVar5 = FUN_14958004d(param_1,lVar5);
      *plVar9 = 0;
      plVar1 = plVar9 + 1;
      plVar9 = plVar9 + 1;
      lVar8 = *plVar1;
    }
    *plVar9 = lVar5;
    lVar5 = lVar6;
    lVar8 = local_238[0];
  }
  lVar8 = 0;
  lVar5 = 0;
  do {
    lVar6 = lVar5;
    if ((local_238[lVar8] != 0) && (lVar6 = local_238[lVar8], lVar5 != 0)) {
      lVar6 = FUN_14958004d(param_1,lVar5);
    }
    lVar8 = lVar8 + 1;
    lVar5 = lVar6;
  } while (lVar8 != 0x40);
  *param_2 = lVar6;
  uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13);
LAB_14957fe2a:
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14957fe8f FUN_14957fe8f body=446 status=ok
// SIG undefined FUN_14957fe8f(void)

ulonglong FUN_14957fe8f(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  
  lVar7 = (ulonglong)*(byte *)(param_1 + 0x5b) - 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  iVar4 = (int)lVar7;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x5b)) {
    iVar11 = 0;
    do {
      lVar5 = ((longlong)(int)(*(byte *)(param_1 + 0x5a) + 1 + iVar11) % (longlong)iVar4 &
              0xffffffffU) * 0x68;
      plVar10 = (longlong *)(param_1 + 0x60 + lVar5);
      if (*(int *)(param_1 + 0x68 + lVar5) != 0) {
        puVar8 = (undefined8 *)*plVar10;
        if (puVar8 == (undefined8 *)0x0) goto LAB_14957feef;
        if ((code *)*puVar8 == (code *)0x0) {
          uVar6 = puVar8[2];
        }
        else {
          uVar6 = (*(code *)*puVar8)(puVar8[1]);
        }
        FUN_145e3b961(puVar8);
        *(undefined4 *)(plVar10 + 1) = 0;
        *plVar10 = 0;
        if ((int)uVar6 == 0) goto LAB_14957feef;
        goto LAB_14957ffcd;
      }
      if (*plVar10 == 0) goto LAB_14957feef;
      iVar11 = iVar11 + 1;
    } while (iVar4 != iVar11);
LAB_14957fef4:
    uVar6 = FUN_14958041e(param_1 + lVar7 * 0x68 + 0x60,param_1 + 0x38);
    return uVar6;
  }
  iVar11 = 0;
  plVar10 = (longlong *)0x0;
LAB_14957feef:
  if (iVar11 == iVar4) goto LAB_14957fef4;
  lVar7 = plVar10[5];
  *(char *)(param_1 + 0x5a) = (char)(((int)plVar10 - (int)param_1) - 0x60U >> 3) * -0x3b;
  plVar10[6] = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(plVar10 + 4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)plVar10 + 0x24) = uVar3;
  *(undefined4 *)(plVar10 + 5) = uVar1;
  *(undefined4 *)((longlong)plVar10 + 0x2c) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar7 = FUN_145e3bd67((longlong)*(int *)(param_1 + 0x54));
      *(longlong *)(param_1 + 0x40) = lVar7;
      uVar6 = 7;
      if (lVar7 == 0) goto LAB_14957ffcd;
    }
  }
  else {
    *(longlong *)(param_1 + 0x40) = lVar7;
    uVar3 = (*DAT_14c765d30)();
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  *plVar10 = 0;
  puVar8 = (undefined8 *)FUN_145e3bd67(0x18);
  if (puVar8 == (undefined8 *)0x0) {
    uVar6 = 7;
  }
  else {
    if (((uint)((ulonglong)((longlong)(int)puVar8 * 0x78787879) >> 0x23) - ((int)puVar8 >> 0x1f) & 1
        ) == 0) {
      *puVar8 = 0;
      iVar4 = FUN_14958041e(plVar10,plVar10 + 4);
      *(undefined4 *)(plVar10 + 1) = 1;
      plVar9 = (longlong *)(longlong)iVar4;
      lVar7 = 0x10;
    }
    else {
      *puVar8 = FUN_149580583;
      lVar7 = 8;
      plVar9 = plVar10;
    }
    *(longlong **)((longlong)puVar8 + lVar7) = plVar9;
    *plVar10 = (longlong)puVar8;
    uVar6 = 0;
  }
LAB_14957ffcd:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14958004d FUN_14958004d body=207 status=ok
// SIG undefined FUN_14958004d(void)

undefined8 FUN_14958004d(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = &local_48;
  local_48 = 0;
  local_3c = 0;
  do {
    while( true ) {
      local_50 = *param_3;
      local_58 = param_3 + 4;
      iVar2 = (**(code **)(param_1 + 0x40))(param_1,&local_3c,param_2 + 4,*param_2);
      if (iVar2 < 1) break;
      *puVar3 = param_3;
      puVar1 = (undefined8 *)(param_3 + 2);
      puVar3 = (undefined8 *)(param_3 + 2);
      local_3c = 0;
      param_3 = (undefined4 *)*puVar1;
      if ((undefined4 *)*puVar1 == (undefined4 *)0x0) {
        *puVar3 = param_2;
        goto LAB_1495800f3;
      }
    }
    *puVar3 = param_2;
    puVar1 = (undefined8 *)(param_2 + 2);
    puVar3 = (undefined8 *)(param_2 + 2);
    param_2 = (undefined4 *)*puVar1;
    if ((undefined4 *)*puVar1 == (undefined4 *)0x0) {
      *puVar3 = param_3;
LAB_1495800f3:
      if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return local_48;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14958011d FUN_14958011d body=290 status=ok
// SIG undefined FUN_14958011d(void)

ulonglong FUN_14958011d(longlong param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                       byte *param_5)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = param_3[1];
  bVar2 = param_5[1];
  param_3 = param_3 + *param_3;
  param_5 = param_5 + *param_5;
  if (bVar1 == bVar2) {
    if (0xfffffffffffffff9 < (ulonglong)bVar1 - 7) {
      uVar4 = 0;
      do {
        if ((uint)param_3[uVar4] - (uint)param_5[uVar4] != 0) {
          uVar6 = (uint)param_3[uVar4] - (uint)param_5[uVar4];
          if (-1 < (char)(*param_5 ^ *param_3)) goto LAB_149580182;
          uVar4 = (ulonglong)((uint)(-1 < (char)*param_3) * 2 - 1);
          goto LAB_14958018a;
        }
        uVar4 = uVar4 + 1;
      } while ((byte)((&DAT_14bd418a0)[bVar1] + ((&DAT_14bd418a0)[bVar1] == '\0')) != uVar4);
    }
LAB_14958014d:
    uVar3 = 0;
    if (1 < *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) + 6)) {
      uVar4 = FUN_1495803c7();
      return uVar4;
    }
  }
  else {
    uVar6 = (uint)bVar1 - (uint)bVar2;
    if (bVar1 < 8 || bVar2 < 8) {
      if (7 < bVar1) {
        uVar6 = 0xffffffff;
      }
      uVar4 = 1;
      uVar5 = uVar6;
      if (7 < bVar2) {
        uVar5 = 1;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0xffffffff;
        if (-1 < (char)*param_3) {
          uVar6 = uVar5;
        }
        goto LAB_149580182;
      }
      if (-1 < (char)*param_5) goto LAB_149580182;
    }
    else {
LAB_149580182:
      uVar4 = (ulonglong)uVar6;
      if (uVar6 == 0) goto LAB_14958014d;
    }
LAB_14958018a:
    uVar3 = (ulonglong)(uint)-(int)uVar4;
    if (**(char **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) + 0x18) == '\0') {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}



// FUNCTION 14958023f FUN_14958023f body=274 status=ok
// SIG undefined FUN_14958023f(void)

int FUN_14958023f(longlong param_1,undefined8 param_2,byte *param_3,undefined8 param_4,byte *param_5
                 )

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *param_3;
  bVar2 = *param_5;
  iVar4 = (int)(char)param_3[1];
  if ((char)param_3[1] < '\0') {
    FUN_149575ef2(param_3 + 1,&local_4c);
    iVar4 = local_4c;
  }
  local_4c = iVar4;
  iVar4 = (int)(char)param_5[1];
  if ((char)param_5[1] < '\0') {
    FUN_149575ef2(param_5 + 1,&local_50);
    iVar4 = local_50;
  }
  iVar5 = local_4c - iVar4;
  if (local_4c < iVar4) {
    iVar4 = local_4c;
  }
  iVar4 = memcmp(param_3 + bVar1,param_5 + bVar2,
                 (longlong)((iVar4 - (iVar4 + -0xd >> 0x1f)) + -0xd >> 1));
  if (iVar4 != 0) {
    iVar5 = iVar4;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (iVar5 == 0) {
    iVar4 = 0;
    if (1 < *(ushort *)(lVar3 + 6)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
  }
  else {
    iVar4 = -iVar5;
    if (**(char **)(lVar3 + 0x18) == '\0') {
      iVar4 = iVar5;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 149580373 FUN_149580373 body=84 status=ok
// SIG undefined FUN_149580373(void)

void FUN_149580373(longlong param_1,int *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (*param_2 == 0) {
    FUN_1495771ce(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),param_6,param_5,uVar1);
    *param_2 = 1;
  }
  FUN_14957b86a(param_4,param_3,uVar1,0);
  return;
}



// FUNCTION 1495803c7 FUN_1495803c7 body=87 status=ok
// SIG undefined FUN_1495803c7(void)

void FUN_1495803c7(longlong param_1,int *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (*param_2 == 0) {
    FUN_1495771ce(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),param_6,param_5,uVar1);
    *param_2 = 1;
  }
  FUN_14957b86a(param_4,param_3,uVar1,1);
  return;
}



// FUNCTION 14958041e FUN_14958041e body=356 status=ok
// SIG undefined FUN_14958041e(void)

void FUN_14958041e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20);
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 == 0) {
    iVar3 = FUN_1495805a3(uVar1,0,(longlong *)(param_1 + 0x48));
    if (iVar3 != 0) goto LAB_14958048e;
    lVar5 = *(longlong *)(param_1 + 0x48);
  }
  FUN_149580663(uVar1,lVar5,*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_2 + 2) + 9);
  iVar3 = FUN_14957fd11(param_1,param_2);
  if (iVar3 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xc);
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    lStack_60 = 0;
    lStack_60 = FUN_145e3bd67((longlong)iVar3);
    if (lStack_60 == 0) {
      local_68 = CONCAT44(local_68._4_4_,7);
    }
    else {
      local_48 = lVar5 % (longlong)iVar3;
      uVar4 = (undefined4)local_48;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      local_48 = lVar5 - local_48;
      local_58 = CONCAT44(uVar4,iVar3);
      uStack_40 = uVar1;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    FUN_14958072d(&local_68,(longlong)*(int *)(param_2 + 2));
    if ((int *)*param_2 != (int *)0x0) {
      piVar6 = (int *)*param_2;
      do {
        piVar2 = *(int **)(piVar6 + 2);
        FUN_14958072d(&local_68,(longlong)*piVar6);
        FUN_1495807b0(&local_68,piVar6 + 4,*piVar6);
        if (param_2[1] == 0) {
          FUN_145e3b961(piVar6);
        }
        piVar6 = piVar2;
      } while (piVar2 != (int *)0x0);
    }
    *param_2 = 0;
    FUN_149580852(&local_68,param_1 + 0x50);
  }
LAB_14958048e:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149580583 FUN_149580583 body=32 status=ok
// SIG undefined FUN_149580583(void)

longlong FUN_149580583(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14958041e(param_1,param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = 1;
  return (longlong)iVar1;
}



// FUNCTION 1495805a3 FUN_1495805a3 body=191 status=ok
// SIG undefined FUN_1495805a3(void)

ulonglong FUN_1495805a3(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined8 local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c765e88 != (code *)0x0) {
    iVar2 = (*DAT_14c765e88)(0xca);
    uVar3 = 0xd0a;
    if (iVar2 != 0) goto LAB_1495805e2;
  }
  local_48 = &local_2c;
  uVar3 = FUN_14956b20c(*param_1,0,param_3,0x101e);
  local_2c = (uint)uVar3;
  if (local_2c == 0) {
    local_38 = 0x7fff0000;
    lVar1 = *(longlong *)*param_3;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x50))((longlong *)*param_3,0x12,&local_38);
    }
    if (0 < param_2) {
      FUN_149580663(param_1,*param_3,param_2);
    }
    uVar3 = (ulonglong)local_2c;
  }
LAB_1495805e2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149580663 FUN_149580663 body=201 status=ok
// SIG undefined FUN_149580663(void)

void FUN_149580663(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  if ((*(int *)(param_1 + 0xac) < param_3) || (piVar1 = (int *)*param_2, *piVar1 < 3))
  goto LAB_14958070e;
  uVar3 = (undefined4)param_3;
  local_30 = 0;
  local_34 = 0x1000;
  if (piVar1 == (int *)0x0) {
LAB_1495806e5:
    lVar2 = 0;
  }
  else {
    (**(code **)(piVar1 + 0x14))(param_2,6,&local_34);
    if (*param_2 == 0) goto LAB_1495806e5;
    (**(code **)(*param_2 + 0x50))(param_2,5,&local_28);
    uVar3 = (undefined4)local_28;
    lVar2 = *param_2;
  }
  (**(code **)(lVar2 + 0x88))(param_2,0,uVar3,&local_30);
  (**(code **)(*param_2 + 0x90))(param_2,0,local_30);
LAB_14958070e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958072d FUN_14958072d body=130 status=ok
// SIG undefined FUN_14958072d(void)

void FUN_14958072d(undefined8 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [46];
  byte local_1a;
  byte local_19;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 0x80) {
    uVar1 = 1;
    local_1a = (byte)param_2;
  }
  else if (param_2 < 0x4000) {
    local_1a = (byte)(param_2 >> 7) | 0x80;
    local_19 = (byte)param_2 & 0x7f;
    uVar1 = 2;
  }
  else {
    uVar1 = FUN_14957a85b(&local_1a);
  }
  FUN_1495807b0(param_1,&local_1a,uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495807b0 FUN_1495807b0 body=162 status=ok
// SIG undefined FUN_1495807b0(void)

void FUN_1495807b0(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_3;
  if (0 < param_3) {
    do {
      if (*param_1 != 0) {
        return;
      }
      iVar5 = param_1[4] - param_1[6];
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      memcpy((void *)((longlong)param_1[6] + *(longlong *)(param_1 + 2)),
             (void *)((param_3 - iVar3) + param_2),(longlong)iVar5);
      iVar4 = iVar5 + param_1[6];
      param_1[6] = iVar4;
      if (iVar4 == param_1[4]) {
        iVar1 = param_1[5];
        iVar4 = (**(code **)(**(longlong **)(param_1 + 10) + 0x18))
                          (*(longlong **)(param_1 + 10),(longlong)iVar1 + *(longlong *)(param_1 + 2)
                           ,iVar4 - iVar1,*(longlong *)(param_1 + 8) + (longlong)iVar1);
        *param_1 = iVar4;
        param_1[5] = 0;
        param_1[6] = 0;
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)param_1[4];
      }
      iVar4 = iVar3 - iVar5;
      bVar2 = iVar5 <= iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar2);
  }
  return;
}



// FUNCTION 149580852 FUN_149580852 body=107 status=ok
// SIG undefined FUN_149580852(void)

int FUN_149580852(int *param_1,longlong *param_2)

{
  int iVar1;
  
  if ((*param_1 == 0) && (*(longlong *)(param_1 + 2) != 0)) {
    iVar1 = param_1[5];
    if (iVar1 < param_1[6]) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 10) + 0x18))
                        (*(longlong **)(param_1 + 10),*(longlong *)(param_1 + 2) + (longlong)iVar1,
                         param_1[6] - iVar1,(longlong)iVar1 + *(longlong *)(param_1 + 8));
      *param_1 = iVar1;
    }
  }
  *param_2 = (longlong)param_1[6] + *(longlong *)(param_1 + 8);
  FUN_145e3b961(*(undefined8 *)(param_1 + 2));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return *param_1;
}



// FUNCTION 1495808bd FUN_1495808bd body=163 status=ok
// SIG undefined FUN_1495808bd(void)

undefined8 FUN_1495808bd(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((DAT_14c765e88 == (code *)0x0) || (iVar1 = (*DAT_14c765e88)(100), iVar1 == 0)) &&
     (plVar2 = (longlong *)FUN_145e3bd67(0x48), plVar2 != (longlong *)0x0)) {
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[8] = 0;
    *param_3 = (longlong)plVar2;
    plVar2[1] = param_2;
    *plVar2 = param_1;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 8) + 9;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 4) / 2;
    if (iVar1 < iVar3) {
      iVar1 = iVar3;
    }
    *(int *)(plVar2 + 3) = iVar1;
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (longlong)iVar1;
    return 0;
  }
  *param_3 = 0;
  FUN_14956afab(param_2);
  return 7;
}



// FUNCTION 149580960 FUN_149580960 body=188 status=ok
// SIG undefined FUN_149580960(void)

undefined8 FUN_149580960(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  uVar4 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(int *)(puVar2 + 4) == 0) {
      uVar4 = FUN_149580a1c(param_1);
      return uVar4;
    }
    puVar2 = (undefined8 *)*puVar2;
    *puVar2 = 0;
    puVar5 = (undefined8 *)FUN_145e3bd67(0x18);
    if (puVar5 == (undefined8 *)0x0) {
      uVar4 = 7;
    }
    else {
      if (((uint)((ulonglong)((longlong)(int)puVar5 * 0x78787879) >> 0x23) - ((int)puVar5 >> 0x1f) &
          1) == 0) {
        *puVar5 = 0;
        iVar3 = FUN_149580a1c(param_1,1);
        puVar1 = (undefined8 *)(param_1 + 0x48);
        param_1 = (longlong)iVar3;
        *(undefined4 *)(*(longlong *)*puVar1 + 8) = 1;
        lVar6 = 0x10;
      }
      else {
        *puVar5 = FUN_149581761;
        lVar6 = 8;
      }
      *(longlong *)((longlong)puVar5 + lVar6) = param_1;
      *puVar2 = puVar5;
    }
  }
  return uVar4;
}



// FUNCTION 149580a1c FUN_149580a1c body=255 status=ok
// SIG undefined FUN_149580a1c(void)

void FUN_149580a1c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  lVar2 = *plVar1;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x20);
  iVar4 = FUN_149580b1b(lVar2,plVar1[1],param_2);
  if (iVar4 == 0) {
    lVar6 = (longlong)(int)plVar1[3];
    if ((int)plVar1[4] == 0) {
      lVar5 = *(longlong *)(lVar2 + 0x58);
      if (lVar5 == 0) {
        iVar4 = FUN_1495805a3(uVar3,*(undefined8 *)(lVar2 + 0x60),(longlong *)(lVar2 + 0x58));
        *(undefined8 *)(lVar2 + 0x60) = 0;
        if (iVar4 != 0) {
          return;
        }
        lVar5 = *(longlong *)(lVar2 + 0x58);
      }
      plVar1[7] = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x60);
      plVar1[2] = lVar5;
      *(longlong *)(lVar2 + 0x60) = lVar6 + lVar5;
    }
    else {
      iVar4 = FUN_1495805a3(uVar3,lVar6,plVar1 + 5);
      if (iVar4 != 0) {
        return;
      }
      iVar4 = FUN_1495805a3(uVar3,lVar6,plVar1 + 7);
      if (iVar4 != 0) {
        return;
      }
    }
    iVar4 = 0;
    if ((int)plVar1[4] != 0) {
      iVar4 = FUN_1495813fe(plVar1);
    }
    if (param_2 != 1 && iVar4 == 0) {
      FUN_149581080(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149580b1b FUN_149580b1b body=386 status=ok
// SIG undefined FUN_149580b1b(void)

ulonglong FUN_149580b1b(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(longlong *)(param_2 + 2) = param_1;
  iVar4 = *param_2;
  lVar2 = (longlong)iVar4;
  if (0 < lVar2) {
    lVar9 = 0;
    do {
      iVar4 = iVar4 + -1;
      if (param_3 == 2) {
        uVar3 = FUN_149581080(*(longlong *)(param_2 + 6) + (longlong)iVar4 * 0x50);
      }
      else {
        uVar3 = FUN_149580960(*(longlong *)(param_2 + 6) + lVar9,0);
      }
      if ((int)uVar3 != 0) goto LAB_149580c76;
      lVar9 = lVar9 + 0x50;
    } while (lVar2 * 0x50 != lVar9);
    iVar4 = *param_2;
    if (1 < (longlong)iVar4) {
      iVar5 = iVar4 * 2;
      uVar3 = (longlong)iVar4 + 1;
      do {
        iVar5 = iVar5 + -2;
        uVar8 = uVar3 - 1;
        if ((longlong)(*param_2 / 2) < (longlong)uVar8) {
          iVar7 = iVar5 + (*param_2 / 2) * -2;
          iVar4 = iVar7 + 1;
        }
        else {
          iVar7 = *(int *)(*(longlong *)(param_2 + 4) + -0x10 + uVar3 * 8);
          iVar4 = *(int *)(*(longlong *)(param_2 + 4) + -0xc + uVar3 * 8);
        }
        lVar2 = *(longlong *)(param_2 + 6);
        iVar6 = iVar4;
        if ((*(longlong *)(lVar2 + 0x18 + (longlong)iVar7 * 0x50) != 0) &&
           (lVar9 = (longlong)iVar4 * 0x50 + lVar2, iVar6 = iVar7, *(longlong *)(lVar9 + 0x18) != 0)
           ) {
          lVar2 = lVar2 + (longlong)iVar7 * 0x50;
          local_4c = 0;
          local_60 = *(undefined4 *)(lVar9 + 0x14);
          local_68 = *(undefined8 *)(lVar9 + 0x28);
          iVar1 = (**(code **)(*(longlong *)(param_2 + 2) + 0x40))
                            (*(longlong *)(param_2 + 2),&local_4c,*(undefined8 *)(lVar2 + 0x28),
                             *(undefined4 *)(lVar2 + 0x14));
          iVar6 = iVar4;
          if (iVar1 < 1) {
            iVar6 = iVar7;
          }
        }
        *(int *)(*(longlong *)(param_2 + 4) + -8 + uVar3 * 4) = iVar6;
        uVar3 = uVar8;
      } while (2 < uVar8);
    }
  }
  uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x13);
LAB_149580c76:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 149580c9e FUN_149580c9e body=141 status=ok
// SIG undefined FUN_149580c9e(void)

int * FUN_149580c9e(int param_1)

{
  int iVar1;
  int iVar2;
  int *_Dst;
  size_t _Size;
  
  iVar2 = 2;
  do {
    iVar1 = iVar2;
    iVar2 = iVar1 * 2;
  } while (iVar1 < param_1);
  if ((DAT_14c765e88 == (code *)0x0) || (iVar2 = (*DAT_14c765e88)(100), iVar2 == 0)) {
    _Size = (size_t)(iVar1 * 0x54 + 0x20);
    _Dst = (int *)FUN_145e3bd67(_Size);
    if (_Dst != (int *)0x0) {
      memset(_Dst,0,_Size);
      *_Dst = iVar1;
      _Dst[2] = 0;
      _Dst[3] = 0;
      *(int **)(_Dst + 6) = _Dst + 8;
      *(int **)(_Dst + 4) = _Dst + (longlong)iVar1 * 0x14 + 8;
      return _Dst;
    }
  }
  return (int *)0x0;
}



// FUNCTION 149580d2b FUN_149580d2b body=322 status=ok
// SIG undefined FUN_149580d2b(void)

int FUN_149580d2b(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *param_3;
  local_58 = param_3;
  lVar4 = FUN_149580c9e(param_2);
  *param_4 = lVar4;
  bVar8 = lVar4 != 0;
  iVar3 = 7;
  if (bVar8) {
    iVar3 = 0;
  }
  local_70 = param_4;
  if (0 < (int)param_2 && bVar8) {
    local_60 = param_1 + 0x48;
    uVar6 = 1;
    lVar5 = 0;
    local_68 = (ulonglong)param_2;
    do {
      lVar2 = *(longlong *)(lVar4 + 0x18);
      lVar1 = lVar2 + lVar5;
      iVar3 = FUN_149580e6e(param_1,lVar1,local_60,lVar7);
      if (iVar3 != 0) {
        lVar7 = *(longlong *)(lVar2 + 8 + lVar5);
        goto LAB_149580e58;
      }
      local_50 = 0;
      iVar3 = FUN_149580fb5(lVar1,&local_50);
      lVar7 = local_50 + *(longlong *)(lVar2 + lVar5);
      *(longlong *)(lVar2 + 8 + lVar5) = lVar7;
      if (iVar3 != 0) goto LAB_149580e58;
      iVar3 = FUN_149581080(lVar1);
      lVar7 = *(longlong *)(lVar2 + 8 + lVar5);
      bVar8 = iVar3 == 0;
      if (local_68 <= uVar6) break;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (iVar3 == 0);
  }
  if (!bVar8) {
LAB_149580e58:
    FUN_14956afab(lVar4);
    *local_70 = 0;
  }
  *local_58 = lVar7;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 149580e6e FUN_149580e6e body=327 status=ok
// SIG undefined FUN_149580e6e(void)

undefined8 FUN_149580e6e(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((DAT_14c765e88 != (code *)0x0) && (iVar2 = (*DAT_14c765e88)(0xc9), iVar2 != 0)) {
    return 0x10a;
  }
  if (param_2[8] != 0) {
    (**(code **)(*(longlong *)param_2[3] + 0x90))((longlong *)param_2[3],0);
    param_2[8] = 0;
  }
  *param_2 = param_4;
  param_2[1] = param_3[1];
  puVar1 = (undefined8 *)*param_3;
  param_2[3] = (longlong)puVar1;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (((longlong)param_3[1] <= (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + 0xac)) &&
     (2 < *(int *)*puVar1)) {
    uVar3 = (**(code **)((int *)*puVar1 + 0x22))(puVar1,0,param_3[1],param_2 + 8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (param_2[8] != 0) {
      return 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    param_4 = *param_2;
  }
  iVar2 = *(int *)(lVar4 + 0xc);
  param_4 = param_4 % (longlong)iVar2;
  lVar4 = param_2[6];
  uVar3 = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_145e3bd67();
    param_2[6] = lVar4;
    uVar3 = 7;
    if (lVar4 != 0) {
      uVar3 = 0;
    }
    *(int *)(param_2 + 7) = iVar2;
  }
  if (param_4 == 0 || (int)uVar3 != 0) {
    return uVar3;
  }
  iVar2 = iVar2 - (int)param_4;
  if (param_2[1] < *param_2 + (longlong)iVar2) {
    iVar2 = (int)param_2[1] - (int)*param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000149580f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)param_2[3] + 0x10))
                    ((longlong *)param_2[3],lVar4 + param_4,iVar2);
  return uVar3;
}



// FUNCTION 149580fb5 FUN_149580fb5 body=202 status=ok
// SIG undefined FUN_149580fb5(void)

undefined8 FUN_149580fb5(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  char *local_40;
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[8] == 0) {
    lVar4 = *param_1 % (longlong)(int)param_1[7];
    if ((int)param_1[7] - (int)lVar4 < 9 || lVar4 == 0) {
      uVar5 = 0;
      do {
        uVar3 = FUN_14958127e(param_1,1,&local_40);
        if ((int)uVar3 != 0) goto LAB_149581056;
        cVar1 = *local_40;
        local_38[uVar5 & 0xf] = cVar1;
        uVar5 = uVar5 + 1;
      } while (cVar1 < '\0');
      FUN_149564e25(local_38,param_2);
      goto LAB_149581054;
    }
    lVar4 = lVar4 + param_1[6];
  }
  else {
    lVar4 = param_1[8] + *param_1;
  }
  bVar2 = FUN_149564e25(lVar4,param_2);
  *param_1 = *param_1 + (ulonglong)bVar2;
LAB_149581054:
  uVar3 = 0;
LAB_149581056:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149581080 FUN_149581080 body=485 status=ok
// SIG undefined FUN_149581080(void)

ulonglong FUN_149581080(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (*param_1 < param_1[1]) {
LAB_1495810af:
    uVar4 = FUN_149580fb5(param_1,&local_50);
    if (uVar4 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)local_50;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
LAB_1495810c4:
    uVar9 = (ulonglong)uVar4;
  }
  else {
    plVar1 = (longlong *)param_1[9];
    uVar9 = 0;
    if (plVar1 != (longlong *)0x0) {
      if ((int)plVar1[4] == 0) {
        uVar4 = FUN_1495813fe(plVar1);
        uVar9 = (ulonglong)uVar4;
        *(int *)(plVar1 + 5) = (int)plVar1[7];
        *(undefined4 *)((longlong)plVar1 + 0x2c) = *(undefined4 *)((longlong)plVar1 + 0x3c);
        *(int *)(plVar1 + 6) = (int)plVar1[8];
        *(undefined4 *)((longlong)plVar1 + 0x34) = *(undefined4 *)((longlong)plVar1 + 0x44);
        if (plVar1[6] == plVar1[2]) {
          *(undefined4 *)((longlong)plVar1 + 0x1c) = 1;
        }
        if (uVar4 != 0) goto LAB_1495810f0;
      }
      else {
        plVar7 = (longlong *)*plVar1;
        puVar2 = (undefined8 *)*plVar7;
        if (puVar2 != (undefined8 *)0x0) {
          if ((code *)*puVar2 == (code *)0x0) {
            uVar9 = puVar2[2];
          }
          else {
            uVar9 = (*(code *)*puVar2)(puVar2[1]);
          }
          FUN_145e3b961(puVar2);
          *(undefined4 *)(plVar7 + 1) = 0;
          *plVar7 = 0;
          if ((int)uVar9 != 0) goto LAB_1495810f0;
        }
        lVar8 = plVar1[5];
        lVar3 = plVar1[6];
        plVar1[5] = plVar1[7];
        plVar1[6] = plVar1[8];
        local_48._0_4_ = (undefined4)lVar8;
        local_48._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar3;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        *(undefined4 *)(plVar1 + 7) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar1 + 0x3c) = local_48._4_4_;
        *(undefined4 *)(plVar1 + 8) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_40._4_4_;
        local_48 = lVar8;
        uStack_40 = lVar3;
        if (plVar1[6] == plVar1[2]) {
          *(undefined4 *)((longlong)plVar1 + 0x1c) = 1;
        }
        else {
          puVar2 = (undefined8 *)*plVar1;
          *puVar2 = 0;
          puVar6 = (undefined8 *)FUN_145e3bd67(0x18);
          uVar9 = 7;
          if (puVar6 == (undefined8 *)0x0) goto LAB_1495810f0;
          if (((uint)((ulonglong)((longlong)(int)puVar6 * 0x78787879) >> 0x23) -
               ((int)puVar6 >> 0x1f) & 1) == 0) {
            *puVar6 = 0;
            iVar5 = FUN_1495813fe(plVar1);
            *(undefined4 *)(*plVar1 + 8) = 1;
            lVar8 = 0x10;
            plVar7 = (longlong *)(longlong)iVar5;
          }
          else {
            *puVar6 = FUN_149581586;
            lVar8 = 8;
            plVar7 = plVar1;
          }
          *(longlong **)((longlong)puVar6 + lVar8) = plVar7;
          *puVar2 = puVar6;
        }
      }
      uVar9 = 0;
      if (*(int *)((longlong)plVar1 + 0x1c) == 0) {
        uVar4 = FUN_149580e6e(*plVar1,param_1,plVar1 + 5,plVar1[2]);
        if (uVar4 == 0) goto LAB_1495810af;
        goto LAB_1495810c4;
      }
    }
LAB_1495810f0:
    FUN_14956af54(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14958127e FUN_14958127e body=383 status=ok
// SIG undefined FUN_14958127e(void)

undefined8 FUN_14958127e(longlong *param_1,int param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [40];
  void *local_40;
  ulonglong local_38;
  uint uVar8;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (param_1[8] == 0) {
    uVar8 = *(uint *)(param_1 + 7);
    lVar6 = lVar3 % (longlong)(int)uVar8;
    if (lVar6 == 0) {
      uVar9 = (ulonglong)uVar8;
      if (param_1[1] - lVar3 <= (longlong)(int)uVar8) {
        uVar9 = param_1[1] - lVar3 & 0xffffffff;
      }
      uVar4 = (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],param_1[6],uVar9)
      ;
      if ((int)uVar4 != 0) goto LAB_1495812bb;
      uVar8 = *(uint *)(param_1 + 7);
    }
    iVar7 = uVar8 - (int)lVar6;
    if (param_2 <= iVar7) {
      lVar3 = param_1[6] + lVar6;
      goto LAB_1495812b0;
    }
    iVar2 = (int)param_1[2];
    if (iVar2 < param_2) {
      lVar3 = 0x80;
      if (0x3f < iVar2) {
        lVar3 = (longlong)iVar2 * 2;
      }
      do {
        lVar5 = lVar3;
        lVar3 = lVar5 * 2;
      } while (lVar5 < param_2);
      _Dst = (void *)FUN_1495539bb(param_1[4],lVar5);
      if (_Dst == (void *)0x0) {
        uVar4 = 7;
        goto LAB_1495812bb;
      }
      *(int *)(param_1 + 2) = (int)lVar5;
      param_1[4] = (longlong)_Dst;
    }
    else {
      _Dst = (void *)param_1[4];
    }
    memcpy(_Dst,(void *)(param_1[6] + lVar6),(longlong)iVar7);
    *param_1 = *param_1 + (longlong)iVar7;
    if (param_2 - iVar7 != 0 && iVar7 <= param_2) {
      iVar7 = param_2 - iVar7;
      do {
        iVar2 = (int)param_1[7];
        if (iVar7 < (int)param_1[7]) {
          iVar2 = iVar7;
        }
        uVar4 = FUN_14958127e(param_1,iVar2,&local_40);
        if ((int)uVar4 != 0) goto LAB_1495812bb;
        memcpy((void *)((longlong)(param_2 - iVar7) + param_1[4]),local_40,(longlong)iVar2);
        iVar10 = iVar7 - iVar2;
        bVar1 = iVar2 <= iVar7;
        iVar7 = iVar10;
      } while (iVar10 != 0 && bVar1);
    }
    *param_3 = param_1[4];
  }
  else {
    lVar3 = param_1[8] + lVar3;
LAB_1495812b0:
    *param_3 = lVar3;
    *param_1 = *param_1 + (longlong)param_2;
  }
  uVar4 = 0;
LAB_1495812bb:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495813fe FUN_1495813fe body=391 status=ok
// SIG undefined FUN_1495813fe(void)

int FUN_1495813fe(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1[2];
  lVar3 = param_1[1];
  iVar6 = *(int *)(*(longlong *)(*param_1 + 0x10) + 0xc);
  lVar4 = param_1[7];
  local_58 = 0;
  lStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  lStack_70 = FUN_145e3bd67((longlong)iVar6);
  if (lStack_70 == 0) {
    local_78 = CONCAT44(local_78._4_4_,7);
  }
  else {
    local_58 = lVar2 % (longlong)iVar6;
    uVar9 = (undefined4)local_58;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
    local_58 = lVar2 - local_58;
    local_68 = CONCAT44(uVar9,iVar6);
    lStack_50 = lVar4;
  }
  do {
    lVar4 = *(longlong *)(lVar3 + 0x18);
    lVar7 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x10) + 4) * 0x50;
    if (*(longlong *)(lVar4 + 0x18 + lVar7) == 0) {
LAB_149581549:
      iVar6 = FUN_149580852(&local_78,param_1 + 8);
      goto LAB_14958155c;
    }
    uVar1 = *(uint *)(lVar4 + 0x14 + lVar7);
    uVar11 = (ulonglong)(int)uVar1;
    uVar8 = 1;
    uVar10 = uVar11;
    if (0x7f < uVar1) {
      do {
        uVar8 = uVar8 + 1;
        bVar5 = 0x3fff < uVar10;
        uVar10 = uVar10 >> 7;
      } while (bVar5);
    }
    if ((int)param_1[3] + lVar2 <
        (longlong)(local_58 + uVar11 + (longlong)(int)uStack_60 + (ulonglong)uVar8))
    goto LAB_149581549;
    FUN_14958072d(&local_78,uVar11);
    FUN_1495807b0(&local_78,*(undefined8 *)(lVar4 + lVar7 + 0x28),uVar1);
    iVar6 = FUN_1495815a5(param_1[1],local_7c);
  } while (iVar6 == 0);
  FUN_149580852(&local_78,param_1 + 8);
LAB_14958155c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 149581586 FUN_149581586 body=31 status=ok
// SIG undefined FUN_149581586(void)

longlong FUN_149581586(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1495813fe();
  *(undefined4 *)(*param_1 + 8) = 1;
  return (longlong)iVar1;
}



// FUNCTION 1495815a5 FUN_1495815a5 body=443 status=ok
// SIG undefined FUN_1495815a5(void)

ulonglong FUN_1495815a5(int *param_1,uint *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  uint *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  uint uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 2);
  uVar8 = *(uint *)(*(longlong *)(param_1 + 4) + 4);
  uVar4 = FUN_149581080((longlong)(int)uVar8 * 0x50 + *(longlong *)(param_1 + 6));
  if ((int)uVar4 == 0) {
    local_4c = 0;
    lVar5 = *(longlong *)(param_1 + 6);
    local_58 = param_2;
    if ((int)(*param_1 + uVar8) < 2) {
      lVar6 = *(longlong *)(param_1 + 4);
    }
    else {
      uVar9 = ((longlong)(int)uVar8 | 1U) * 0x50 + lVar5;
      uVar4 = (ulonglong)((uVar8 & 0xfffe) * 0x50) + lVar5;
      uVar8 = *param_1 + uVar8;
      do {
        uVar7 = uVar8 >> 1;
        if (*(longlong *)(uVar4 + 0x18) == 0) {
LAB_1495816ef:
          *(int *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) =
               (int)(uVar9 - *(longlong *)(param_1 + 6) >> 4) * -0x33333333;
          lVar6 = *(longlong *)(param_1 + 4);
          lVar5 = *(longlong *)(param_1 + 6);
          uVar4 = (longlong)*(int *)(lVar6 + (ulonglong)(uVar7 ^ 1) * 4) * 0x50 + lVar5;
        }
        else {
          if (*(longlong *)(uVar9 + 0x18) != 0) {
            local_60 = *(undefined4 *)(uVar9 + 0x14);
            local_68 = *(undefined8 *)(uVar9 + 0x28);
            iVar3 = (**(code **)(lVar1 + 0x40))
                              (lVar1,&local_4c,*(undefined8 *)(uVar4 + 0x28),
                               *(undefined4 *)(uVar4 + 0x14));
            if ((-1 < iVar3) && ((iVar3 != 0 || (uVar9 <= uVar4)))) {
              if (*(longlong *)(uVar4 + 0x18) != 0) {
                local_4c = 0;
              }
              goto LAB_1495816ef;
            }
          }
          *(int *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) =
               (int)(uVar4 - *(longlong *)(param_1 + 6) >> 4) * -0x33333333;
          lVar6 = *(longlong *)(param_1 + 4);
          lVar5 = *(longlong *)(param_1 + 6);
          uVar9 = (longlong)*(int *)(lVar6 + (ulonglong)(uVar7 ^ 1) * 4) * 0x50 + lVar5;
          local_4c = 0;
        }
        bVar2 = 3 < uVar8;
        uVar8 = uVar7;
      } while (bVar2);
    }
    *local_58 = (uint)(*(longlong *)(lVar5 + 0x18 + (longlong)*(int *)(lVar6 + 4) * 0x50) == 0);
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x18) + 0x13);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 149581761 FUN_149581761 body=40 status=ok
// SIG undefined FUN_149581761(void)

longlong FUN_149581761(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149580a1c(param_1,1);
  *(undefined4 *)(**(longlong **)(param_1 + 0x48) + 8) = 1;
  return (longlong)iVar1;
}



// FUNCTION 149581789 FUN_149581789 body=78 status=ok
// SIG undefined FUN_149581789(void)

void FUN_149581789(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_145e3b961(*(undefined8 *)(param_1 + 4));
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_145e3b961(puVar1);
    puVar1 = puVar2;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1495817d7 FUN_1495817d7 body=137 status=ok
// SIG undefined FUN_1495817d7(void)

void FUN_1495817d7(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = param_2 & 0xffffffff;
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  lVar3 = *(longlong *)(*plVar2 + 0x118);
  iVar5 = (int)param_2;
  *(int *)(lVar3 + 0x1c) = iVar5;
  if (iVar5 < 0) {
    uVar4 = ((longlong)iVar5 * -0x400) /
            ((longlong)*(int *)(lVar3 + 0x28) + (longlong)*(int *)(lVar3 + 0x24));
  }
  (*DAT_14c765dc8)(*(undefined8 *)(lVar3 + 0x40),uVar4 & 0xffffffff);
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149581860 FUN_149581860 body=92 status=ok
// SIG undefined FUN_149581860(void)

int FUN_149581860(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  iVar2 = FUN_1495584a5(param_1,0);
  if (iVar2 == 0) {
    iVar2 = FUN_149558366(param_1,0);
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return iVar2;
}



// FUNCTION 1495818bc FUN_1495818bc body=257 status=ok
// SIG undefined FUN_1495818bc(void)

void FUN_1495818bc(longlong *param_1,undefined *param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  lVar1 = *param_1;
  uVar3 = 7;
  if (*(char *)(lVar1 + 0x61) == '\0') {
    if (*(longlong *)param_1[1] != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      if ((*(byte *)(lVar1 + 0x30) & 1) == 0) {
        puVar4 = &DAT_149eb5f2e;
        if (param_2 != (undefined *)0x0) {
          puVar4 = param_2;
        }
        uVar2 = FUN_14955a402(lVar1,"malformed database schema (%s)",puVar4);
        if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
          uVar2 = FUN_14955a402(lVar1,"%z - %s",uVar2,param_3);
        }
        *(undefined8 *)param_1[1] = uVar2;
        uVar2 = 0x1f000;
      }
      else {
        uVar2 = 0x1eff9;
      }
      uVar3 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar2,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    }
    else {
      uVar2 = FUN_149559683(lVar1,param_3);
      *(undefined8 *)param_1[1] = uVar2;
      uVar3 = 1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  return;
}



// FUNCTION 1495819bd FUN_1495819bd body=1133 status=ok
// SIG undefined FUN_1495819bd(void)

int FUN_1495819bd(longlong param_1,void *param_2,byte param_3,undefined8 param_4,undefined8 *param_5
                 ,undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  undefined1 auStack_228 [40];
  void *local_200;
  longlong local_1f8;
  int local_1ec;
  longlong local_1e8 [2];
  undefined8 *local_1d8;
  int local_1d0;
  char local_1cb;
  undefined1 local_1c4;
  byte local_1c3;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = 0;
  memset(local_1e8,0,0xcc);
  memset(local_e8,0,0xa0);
  if ((param_3 & 1) != 0) {
    local_1c4 = 1;
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
    *(undefined2 *)(param_1 + 0x17c) = 0;
  }
  local_1c3 = param_3 >> 2 & 1;
  local_b8 = param_4;
  if ((*(char *)(param_1 + 0x69) == '\0') && (0 < *(int *)(param_1 + 0x28))) {
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar10 * 0x20);
      if (((lVar8 != 0) && (*(char *)(lVar8 + 0x11) != '\0')) &&
         ((*(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1, *(char *)(lVar8 + 0x12) != '\0' ||
          (FUN_14956624a(lVar8), *(char *)(lVar8 + 0x11) != '\0')))) {
        lVar9 = *(longlong *)(lVar8 + 8);
        if ((*(longlong *)(lVar9 + 0x78) == lVar8) || ((*(byte *)(lVar9 + 0x26) & 0x40) == 0)) {
          bVar4 = true;
          iVar6 = 0;
          for (plVar7 = *(longlong **)(lVar9 + 0x70); plVar7 != (longlong *)0x0;
              plVar7 = (longlong *)plVar7[2]) {
            if (((*plVar7 != lVar8) && ((int)plVar7[1] == 1)) &&
               (*(char *)((longlong)plVar7 + 0xc) != '\x01')) goto LAB_149581abc;
          }
        }
        else {
LAB_149581abc:
          iVar6 = 0x106;
          bVar4 = false;
        }
        piVar1 = (int *)(lVar8 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2(lVar8);
        }
        if (!bVar4) {
          FUN_149556dbf(param_1,iVar6,"database schema is locked: %s",
                        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar10 * 0x20));
          goto LAB_149581df1;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x28));
  }
  lVar10 = *(longlong *)(param_1 + 0x220);
  if (lVar10 != 0) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    for (lVar8 = *(longlong *)(param_1 + 8); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10)) {
      *(uint *)(lVar8 + 200) = (*(uint *)(lVar8 + 200) & 0xfffffffc) + 1;
    }
    do {
      lVar10 = *(longlong *)(lVar10 + 0x28);
      FUN_149569a63();
    } while (lVar10 != 0);
  }
  local_1e8[0] = param_1;
  FUN_14955bebe(local_1e8,param_2,&local_1f8);
  lVar10 = local_1e8[0];
  if (local_1d0 == 0x65) {
    local_1d0 = 0;
  }
  if ((local_1cb != '\0') && (local_200 = param_2, 0 < *(int *)(local_1e8[0] + 0x28))) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 8 + lVar8);
      if (lVar3 != 0) {
        cVar2 = *(char *)(lVar3 + 0x10);
        if ((cVar2 == '\0') && (iVar6 = FUN_1495574f2(lVar3,0,0), iVar6 != 0)) {
          param_2 = local_200;
          if (((iVar6 == 0xc0a) || (iVar6 == 7)) &&
             ((*(char *)(lVar10 + 0x61) == '\0' && (*(char *)(lVar10 + 0x62) == '\0')))) {
            *(undefined1 *)(lVar10 + 0x61) = 1;
            if (0 < *(int *)(lVar10 + 0xd4)) {
              *(undefined4 *)(lVar10 + 0x170) = 1;
            }
            *(int *)(lVar10 + 0x178) = *(int *)(lVar10 + 0x178) + 1;
            *(undefined2 *)(lVar10 + 0x17c) = 0;
            if (*(longlong *)(lVar10 + 0x138) != 0) {
              *(undefined4 *)(*(longlong *)(lVar10 + 0x138) + 0x18) = 7;
            }
          }
          break;
        }
        FUN_14957620f(lVar3);
        if (local_1ec != **(int **)(*(longlong *)(lVar10 + 0x20) + 0x18 + lVar8)) {
          FUN_149576197(lVar10);
          local_1d0 = 0x11;
        }
        if (cVar2 == '\0') {
          FUN_149581860(lVar3);
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x20;
      param_2 = local_200;
    } while (lVar9 < *(int *)(lVar10 + 0x28));
  }
  puVar5 = local_1d8;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = local_b0;
  }
  if ((*(char *)(param_1 + 0xb5) == '\0') && (local_1d8 != (undefined8 *)0x0)) {
    *(byte *)((longlong)local_1d8 + 0xc4) = param_3;
    if (-1 < (char)param_3) {
      *(undefined4 *)((longlong)local_1d8 + 0x114) = 0;
    }
    if (param_2 == (void *)0x0) {
LAB_149581ce2:
      _Dst = (void *)0x0;
    }
    else {
      _Size = (size_t)((int)local_b0 - (int)param_2);
      _Dst = (void *)FUN_14955d750(*local_1d8,_Size + 1);
      if (_Dst == (void *)0x0) goto LAB_149581ce2;
      memcpy(_Dst,param_2,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    puVar5[0x1e] = _Dst;
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    if (local_1d0 != 0) goto LAB_149581d3a;
    *param_5 = local_1d8;
    iVar6 = 0;
    if (local_1f8 != 0) goto LAB_149581d7e;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar6 = 0;
    if (*(longlong *)(param_1 + 0x168) == 0) goto LAB_149581de4;
  }
  else {
    local_1d0 = 7;
LAB_149581d3a:
    iVar6 = local_1d0;
    if (local_1d8 != (undefined8 *)0x0) {
      if ((*(int *)((longlong)local_1d8 + 0x24) == 0x319c2973) ||
         (*(int *)((longlong)local_1d8 + 0x24) == 0x2df20da3)) {
        FUN_149558ddf(local_1d8);
      }
      FUN_149569ad7(local_1d8);
    }
    if (local_1f8 != 0) {
LAB_149581d7e:
      lVar10 = local_1f8;
      FUN_149556dbf(param_1,iVar6,&DAT_149dfbe46,local_1f8);
      goto LAB_149581ddf;
    }
    *(int *)(param_1 + 0x50) = iVar6;
  }
  FUN_14955de40(param_1,iVar6);
LAB_149581de4:
  while (local_68 != 0) {
    lVar10 = local_68;
    local_68 = *(longlong *)(local_68 + 8);
LAB_149581ddf:
    FUN_14955d65a(param_1,lVar10);
  }
LAB_149581df1:
  FUN_14955aa59(local_1e8);
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 149581e2b FUN_149581e2b body=155 status=ok
// SIG undefined FUN_149581e2b(void)

longlong FUN_149581e2b(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      lVar4 = (ulonglong)(uVar5 < 2 ^ uVar5) * 0x20;
      if (param_3 != 0) {
        lVar6 = 0;
        do {
          bVar1 = *(byte *)(param_3 + lVar6);
          bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4) + lVar6);
          if (bVar1 == bVar2) {
            if ((ulonglong)bVar1 == 0) break;
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) goto LAB_149581eb3;
          lVar6 = lVar6 + 1;
        } while( true );
      }
      lVar4 = FUN_14958201d(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + lVar4) + 0x20,
                            param_2,0);
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        return *(longlong *)(lVar4 + 0x10);
      }
      iVar3 = *(int *)(param_1 + 0x28);
LAB_149581eb3:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
  }
  return 0;
}



// FUNCTION 149581ec6 FUN_149581ec6 body=343 status=ok
// SIG undefined FUN_149581ec6(void)

undefined8 FUN_149581ec6(byte *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  bVar1 = *param_1;
  if (bVar1 == 0x2d) {
    param_1 = param_1 + 1;
    lVar3 = -1;
  }
  else {
    if (bVar1 == 0x30) {
      if (((param_1[1] | 0x20) == 0x78) && (((&DAT_14bd400b0)[param_1[2]] & 8) != 0)) {
        param_1 = param_1 + 2;
        do {
          uVar5 = (ulonglong)*param_1;
          param_1 = param_1 + 1;
        } while (uVar5 == 0x30);
        bVar9 = true;
        uVar6 = 0;
        if (((&DAT_14bd400b0)[uVar5] & 8) != 0) {
          uVar8 = 0;
          uVar6 = 0;
          do {
            uVar6 = (uint)(((char)((char)uVar5 * '\x02') >> 7 & 9U) + (char)uVar5 & 0xf) |
                    uVar6 << 4;
            uVar5 = (ulonglong)param_1[uVar8];
            if (6 < uVar8) break;
            uVar8 = uVar8 + 1;
          } while (((&DAT_14bd400b0)[uVar5] & 8) != 0);
          bVar9 = ((&DAT_14bd400b0)[uVar5] & 8) == 0;
        }
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (!bVar9) {
          return 0;
        }
LAB_149581f61:
        *param_2 = uVar6;
        return 1;
      }
    }
    else {
      if (bVar1 != 0x2b) {
        lVar3 = 0;
        bVar4 = bVar1;
        goto LAB_149581edd;
      }
      param_1 = param_1 + 1;
    }
    lVar3 = 0;
  }
  bVar4 = *param_1;
LAB_149581edd:
  if (0xfffffffffffffff5 < (ulonglong)bVar4 - 0x3a) {
    while (bVar4 == 0x30) {
      bVar4 = param_1[1];
      param_1 = param_1 + 1;
    }
    lVar7 = 0;
    lVar2 = 0;
    do {
      if (9 < (byte)(param_1[lVar7] - 0x30)) {
        if (0x7fffffff < lVar3 + lVar2) {
          return 0;
        }
        uVar6 = -(uint)lVar2;
        if (bVar1 != 0x2d) {
          uVar6 = (uint)lVar2;
        }
        goto LAB_149581f61;
      }
      lVar2 = (ulonglong)(param_1[lVar7] & 0xf) + lVar2 * 10;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xb);
  }
  return 0;
}



// FUNCTION 14958201d FUN_14958201d body=185 status=ok
// SIG undefined FUN_14958201d(void)

undefined8 * FUN_14958201d(uint *param_1,byte *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  uint *puVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 4) == 0) {
    puVar6 = param_1 + 1;
    uVar3 = 0;
  }
  else {
    bVar5 = *param_2;
    if (bVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      pbVar4 = param_2;
      do {
        pbVar4 = pbVar4 + 1;
        uVar2 = ((byte)(&DAT_14bd3ff30)[bVar5] + uVar2) * -0x61c8864f;
        bVar5 = *pbVar4;
      } while (bVar5 != 0);
    }
    uVar3 = (undefined4)((ulonglong)uVar2 % (ulonglong)*param_1);
    param_1 = (uint *)(*(longlong *)(param_1 + 4) + ((ulonglong)uVar2 % (ulonglong)*param_1) * 0x10)
    ;
    puVar6 = param_1;
  }
  uVar2 = *puVar6;
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
joined_r0x00014958208f:
  if (uVar2 == 0) {
    return (undefined8 *)&DAT_14cc1ee20;
  }
  uVar2 = uVar2 - 1;
  lVar7 = 0;
  do {
    bVar5 = *(byte *)(puVar1[3] + lVar7);
    if (bVar5 == param_2[lVar7]) {
      if ((ulonglong)bVar5 == 0) {
        return puVar1;
      }
    }
    else if ((&DAT_14bd3ff30)[bVar5] != (&DAT_14bd3ff30)[param_2[lVar7]]) break;
    lVar7 = lVar7 + 1;
  } while( true );
  puVar1 = (undefined8 *)*puVar1;
  goto joined_r0x00014958208f;
}



// FUNCTION 1495820d6 FUN_1495820d6 body=346 status=ok
// SIG undefined FUN_1495820d6(void)

undefined8 FUN_1495820d6(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [92];
  undefined2 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_3 == (longlong *)0x0) || (*param_3 == 0)) || (param_3[2] == 0)) goto LAB_149582109;
  lVar3 = FUN_14955d004(*param_1,*param_3,param_1[1]);
  if (lVar3 == 0) goto LAB_149582109;
  lVar4 = param_3[1];
  if (lVar4 == 0) goto LAB_149582150;
  if (*param_3 != 0) {
    lVar5 = 0;
    do {
      bVar1 = *(byte *)(*param_3 + lVar5);
      if (bVar1 == *(byte *)(lVar4 + lVar5)) {
        if ((ulonglong)bVar1 == 0) goto LAB_149582208;
      }
      else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar4 + lVar5)]) break;
      lVar5 = lVar5 + 1;
    } while( true );
  }
  lVar4 = FUN_149581e2b(*param_1,lVar4,param_1[1]);
  lVar5 = param_3[2];
  if (lVar4 == 0) goto LAB_149582154;
  uVar2 = *(uint *)(lVar4 + 100);
LAB_1495821a6:
  *(uint *)(lVar4 + 100) = uVar2 & 0xfffffffb;
  FUN_1495822c9(lVar5,*(ushort *)(lVar4 + 0x5e) + 1,*(undefined8 *)(lVar4 + 0x10),lVar4);
  *(byte *)(lVar4 + 100) = *(byte *)(lVar4 + 100) | 0x80;
  if (*(longlong *)(lVar4 + 0x48) != 0) goto LAB_149582109;
  *(undefined2 *)(lVar3 + 0x4a) = **(undefined2 **)(lVar4 + 0x10);
  goto LAB_14958217d;
LAB_149582208:
  for (lVar4 = *(longlong *)(lVar3 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
    uVar2 = *(uint *)(lVar4 + 100);
    if ((uVar2 & 3) == 2) {
      lVar5 = param_3[2];
      goto LAB_1495821a6;
    }
  }
LAB_149582150:
  lVar5 = param_3[2];
LAB_149582154:
  local_34 = *(undefined2 *)(lVar3 + 0x4c);
  FUN_1495822c9(lVar5,1,lVar3 + 0x4a,local_90);
  *(undefined2 *)(lVar3 + 0x4c) = local_34;
LAB_14958217d:
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 0x10;
LAB_149582109:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149582231 FUN_149582231 body=152 status=ok
// SIG undefined FUN_149582231(void)

void FUN_149582231(longlong param_1)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  short sVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  psVar1 = *(short **)(param_1 + 0x10);
  uVar6 = 5;
  if (*(ushort *)(param_1 + 0x5e) < 5) {
    uVar6 = *(ushort *)(param_1 + 0x5e);
  }
  sVar4 = *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a);
  *psVar1 = sVar4;
  sVar2 = sVar4 + -10;
  if ((*(longlong *)(param_1 + 0x48) != 0) || (sVar2 = sVar4, sVar4 < 0x21)) {
    sVar4 = 0x21;
    if (0x21 < sVar2) {
      sVar4 = sVar2;
    }
    *psVar1 = sVar4;
  }
  memcpy(psVar1 + 1,&DAT_14bd41a4c,(ulonglong)(ushort)(uVar6 * 2));
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0x5e);
  if (uVar6 < *(ushort *)(param_1 + 0x5e)) {
    uVar5 = (ulonglong)uVar6;
    do {
      psVar1[uVar5 + 1] = 0x17;
      uVar5 = uVar5 + 1;
      uVar3 = (ulonglong)*(ushort *)(param_1 + 0x5e);
    } while (uVar5 < uVar3);
  }
  if (*(char *)(param_1 + 0x62) != '\0') {
    psVar1[uVar3] = 0;
  }
  return;
}



// FUNCTION 1495822c9 FUN_1495822c9 body=673 status=ok
// SIG undefined FUN_1495822c9(void)

void FUN_1495822c9(byte *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *param_1;
  if (bVar1 != 0) {
    uVar5 = 0;
    do {
      uVar6 = 0;
      if ((byte)(bVar1 - 0x30) < 10) {
        do {
          uVar6 = ((uint)bVar1 + uVar6 * 10) - 0x30;
          bVar1 = param_1[1];
          param_1 = param_1 + 1;
        } while ((byte)(bVar1 - 0x30) < 10);
        uVar7 = (ulonglong)uVar6;
        if (uVar6 < 8) {
          if (uVar6 < 2) {
            uVar6 = 0;
            goto LAB_1495823bd;
          }
          sVar2 = 0x28;
          uVar8 = uVar7;
          do {
            sVar2 = sVar2 + -10;
            uVar7 = uVar8 * 2;
            bVar9 = uVar8 < 4;
            uVar8 = uVar7;
          } while (bVar9);
        }
        else {
          sVar2 = 0x28;
          if (0xff < uVar6) {
            sVar2 = 0x28;
            uVar8 = uVar7;
            do {
              sVar2 = sVar2 + 0x28;
              uVar7 = uVar8 >> 4;
              bVar9 = 0xfff < uVar8;
              uVar8 = uVar7;
            } while (bVar9);
          }
          uVar8 = uVar7;
          if (0xf < uVar7) {
            do {
              sVar2 = sVar2 + 10;
              uVar7 = uVar8 >> 1;
              bVar9 = 0x1f < uVar8;
              uVar8 = uVar7;
            } while (bVar9);
          }
        }
        uVar6 = (ushort)(sVar2 + (&DAT_14bd41890)[(uint)uVar7 & 7]) - 10;
      }
LAB_1495823bd:
      *(short *)(param_3 + uVar5 * 2) = (short)uVar6;
      bVar1 = param_1[*param_1 == 0x20];
      param_1 = param_1 + (*param_1 == 0x20);
    } while ((bVar1 != 0) && (uVar5 = uVar5 + 1, uVar5 < (param_2 & 0xffffffff)));
  }
  uVar6 = *(uint *)(param_4 + 100) & 0xffffffbb;
  *(uint *)(param_4 + 100) = uVar6;
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    iVar3 = FUN_14955aab9("unordered*",param_1,&DAT_14bd4009c,0x5b);
    if (iVar3 == 0) {
      uVar6 = uVar6 | 4;
LAB_149582430:
      *(uint *)(param_4 + 100) = uVar6;
    }
    else {
      iVar3 = FUN_14955aab9("sz=[0-9]*",param_1,&DAT_14bd4009c,0x5b);
      if (iVar3 == 0) {
        local_4c = 0;
        if (param_1 + 3 == (byte *)0x0) {
          uVar5 = 2;
LAB_1495824c5:
          sVar2 = 0x28;
          uVar7 = uVar5;
          do {
            sVar2 = sVar2 + -10;
            uVar5 = uVar7 * 2;
            bVar9 = uVar7 < 4;
            uVar7 = uVar5;
          } while (bVar9);
        }
        else {
          FUN_149581ec6(param_1 + 3,&local_4c);
          uVar5 = 2;
          if (2 < (int)local_4c) {
            uVar5 = (ulonglong)local_4c;
          }
          if ((int)local_4c < 8) goto LAB_1495824c5;
          sVar2 = 0x28;
          if (0xff < local_4c) {
            sVar2 = 0x28;
            uVar7 = uVar5;
            do {
              sVar2 = sVar2 + 0x28;
              uVar5 = uVar7 >> 4;
              bVar9 = 0xfff < uVar7;
              uVar7 = uVar5;
            } while (bVar9);
          }
          uVar7 = uVar5;
          if (0xf < uVar5) {
            do {
              sVar2 = sVar2 + 10;
              uVar5 = uVar7 >> 1;
              bVar9 = 0x1f < uVar7;
              uVar7 = uVar5;
            } while (bVar9);
          }
        }
        *(short *)(param_4 + 0x5c) = sVar2 + (&DAT_14bd41890)[(uint)uVar5 & 7] + -10;
      }
      else {
        iVar3 = FUN_14955aab9("noskipscan*",param_1,&DAT_14bd4009c,0x5b);
        if (iVar3 == 0) {
          uVar6 = uVar6 | 0x40;
          goto LAB_149582430;
        }
      }
    }
    pbVar4 = param_1 + -1;
    for (; (*param_1 & 0xdf) != 0; param_1 = param_1 + 1) {
      pbVar4 = pbVar4 + 1;
    }
    do {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
      param_1 = pbVar4;
    } while (bVar1 == 0x20);
  } while( true );
}



// FUNCTION 14958256b FUN_14958256b body=571 status=ok
// SIG undefined FUN_14958256b(void)

longlong FUN_14958256b(uint *param_1,byte *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  void *_Dst;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = (longlong *)FUN_14958201d(param_1,param_2,&local_4c);
  lVar8 = plVar7[2];
  if (lVar8 == 0) {
    if (param_3 != 0) {
      lVar8 = FUN_145e3bd67(0x20);
      if (lVar8 == 0) goto LAB_1495825b3;
      *(byte **)(lVar8 + 0x18) = param_2;
      *(longlong *)(lVar8 + 0x10) = param_3;
      uVar5 = param_1[1] + 1;
      param_1[1] = uVar5;
      if ((9 < uVar5) && (*param_1 * 2 < uVar5)) {
        uVar9 = 0x40;
        if (uVar5 * 2 < 0x40) {
          uVar9 = uVar5 * 2;
        }
        if ((uVar9 != *param_1) && (_Dst = (void *)FUN_145e3bd67(uVar9 << 4), _Dst != (void *)0x0))
        {
          FUN_145e3b961(*(undefined8 *)(param_1 + 4));
          *(void **)(param_1 + 4) = _Dst;
          iVar6 = (*DAT_14c765d30)(_Dst);
          *param_1 = iVar6 >> 4;
          uVar5 = 0;
          memset(_Dst,0,(ulonglong)(uint)(iVar6 >> 4) << 4);
          puVar3 = *(undefined8 **)(param_1 + 2);
          param_1[2] = 0;
          param_1[3] = 0;
          while (puVar3 != (undefined8 *)0x0) {
            pcVar10 = (char *)puVar3[3];
            cVar2 = *pcVar10;
            while (cVar2 != '\0') {
              pcVar10 = pcVar10 + 1;
              cVar2 = *pcVar10;
            }
            puVar3 = (undefined8 *)*puVar3;
            FUN_1495827a7(param_1);
          }
          bVar4 = *param_2;
          if (bVar4 != 0) {
            uVar5 = 0;
            do {
              param_2 = param_2 + 1;
              uVar5 = ((byte)(&DAT_14bd3ff30)[bVar4] + uVar5) * -0x61c8864f;
              bVar4 = *param_2;
            } while (bVar4 != 0);
          }
          local_4c = uVar5 % *param_1;
        }
      }
      lVar11 = (ulonglong)local_4c * 0x10 + *(longlong *)(param_1 + 4);
      if (*(longlong *)(param_1 + 4) == 0) {
        lVar11 = 0;
      }
      FUN_1495827a7(param_1,lVar11,lVar8);
    }
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = *plVar7;
    puVar12 = param_1 + 2;
    if ((uint *)plVar7[1] != (uint *)0x0) {
      puVar12 = (uint *)plVar7[1];
    }
    *(longlong *)puVar12 = lVar11;
    if (lVar11 != 0) {
      *(longlong *)(lVar11 + 8) = plVar7[1];
    }
    lVar11 = *(longlong *)(param_1 + 4);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + (ulonglong)local_4c * 0x10);
      if (*(longlong **)(lVar11 + 8 + (ulonglong)local_4c * 0x10) == plVar7) {
        *(longlong *)(piVar1 + 2) = *plVar7;
      }
      *piVar1 = *piVar1 + -1;
    }
    FUN_145e3b961(plVar7);
    puVar12 = param_1 + 1;
    *puVar12 = *puVar12 - 1;
    param_3 = lVar8;
    if (*puVar12 == 0) {
      FUN_149581789(param_1);
    }
  }
  else {
    plVar7[2] = param_3;
    plVar7[3] = (longlong)param_2;
    param_3 = lVar8;
  }
LAB_1495825b3:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495827a7 FUN_1495827a7 body=108 status=ok
// SIG undefined FUN_1495827a7(void)

void FUN_1495827a7(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      *param_2 = 1;
      *(longlong **)(param_2 + 2) = param_3;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 2);
      *param_2 = *param_2 + 1;
      *(longlong **)(param_2 + 2) = param_3;
      if (lVar1 != 0) {
        *param_3 = lVar1;
        puVar2 = *(undefined8 **)(lVar1 + 8);
        param_3[1] = (longlong)puVar2;
        puVar3 = (undefined8 *)(param_1 + 8);
        if (puVar2 != (undefined8 *)0x0) {
          puVar3 = puVar2;
        }
        *puVar3 = param_3;
        param_1 = lVar1;
        goto LAB_14958280f;
      }
    }
  }
  lVar1 = *(longlong *)(param_1 + 8);
  *param_3 = lVar1;
  if (lVar1 != 0) {
    *(longlong **)(lVar1 + 8) = param_3;
  }
  param_3[1] = 0;
LAB_14958280f:
  *(longlong **)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 149582813 FUN_149582813 body=123 status=ok
// SIG undefined FUN_149582813(void)

void FUN_149582813(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_14958288e(param_1);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_149582d29(param_1);
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_14955d65a(param_1);
  }
  if (((*(byte *)(param_2 + 100) & 0x10) != 0) && (*(longlong *)(param_2 + 0x40) != 0)) {
    FUN_14955d65a(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 14958288e FUN_14958288e body=202 status=ok
// SIG undefined FUN_14958288e(void)

void FUN_14958288e(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*(ushort *)(param_2 + 5) & 0x8040) == 0) {
    if ((*(longlong *)(param_2 + 0x10) != 0) && (*param_2 != -0x51)) {
      FUN_14958288e(param_1);
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      uVar2 = *(uint *)(param_2 + 4);
      lVar1 = *(longlong *)(param_2 + 0x20);
      if ((uVar2 >> 0xb & 1) == 0) {
        if (lVar1 != 0) {
          FUN_149582d29(param_1);
          uVar2 = *(uint *)(param_2 + 4);
        }
        if ((uVar2 >> 0x18 & 1) != 0) {
          FUN_149582958(param_1,*(undefined8 *)(param_2 + 0x40));
        }
      }
      else if (lVar1 != 0) {
        FUN_149582a1c(param_1,lVar1,1);
      }
    }
    else {
      FUN_14958288e(param_1);
    }
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (((uVar2 >> 0x10 & 1) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    FUN_14955d65a(param_1);
    uVar2 = *(uint *)(param_2 + 4);
  }
  if ((uVar2 >> 0x1b & 1) != 0) {
    return;
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149582958 FUN_149582958 body=196 status=ok
// SIG undefined FUN_149582958(void)

void FUN_149582958(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((longlong *)param_2[7] != (longlong *)0x0) {
    lVar1 = param_2[8];
    *(longlong *)param_2[7] = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x38) = param_2[7];
    }
    param_2[7] = 0;
  }
  if (param_2[9] != 0) {
    FUN_14958288e(param_1);
  }
  if (param_2[2] != 0) {
    FUN_149582d29(param_1);
  }
  if (param_2[3] != 0) {
    FUN_149582d29(param_1);
  }
  if (param_2[6] != 0) {
    FUN_14958288e(param_1);
  }
  if (param_2[5] != 0) {
    FUN_14958288e(param_1);
  }
  if (*param_2 != 0) {
    FUN_14955d65a(param_1);
  }
  if (param_2[1] != 0) {
    FUN_14955d65a(param_1);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149582a1c FUN_149582a1c body=254 status=ok
// SIG undefined FUN_149582a1c(void)

void FUN_149582a1c(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    bVar3 = param_3 == 0;
    do {
      lVar1 = *(longlong *)(param_2 + 0x50);
      if (*(longlong *)(param_2 + 0x20) != 0) {
        FUN_149582d29(param_1);
      }
      FUN_149582b1a(param_1,*(undefined8 *)(param_2 + 0x28));
      if (*(longlong *)(param_2 + 0x30) != 0) {
        FUN_14958288e(param_1);
      }
      if (*(longlong *)(param_2 + 0x38) != 0) {
        FUN_149582d29(param_1);
      }
      if (*(longlong *)(param_2 + 0x40) != 0) {
        FUN_14958288e(param_1);
      }
      if (*(longlong *)(param_2 + 0x48) != 0) {
        FUN_149582d29(param_1);
      }
      if (*(longlong *)(param_2 + 0x60) != 0) {
        FUN_14958288e(param_1);
      }
      lVar2 = *(longlong *)(param_2 + 0x78);
      while (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x40);
        FUN_149582958(param_1);
      }
      if (*(longlong *)(param_2 + 0x68) != 0) {
        FUN_149582c24(param_1);
      }
      if (!bVar3) {
        FUN_14955d65a(param_1,param_2);
      }
      bVar3 = false;
      param_2 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 149582b1a FUN_149582b1a body=266 status=ok
// SIG undefined FUN_149582b1a(void)

void FUN_149582b1a(longlong param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (0 < *param_2) {
    plVar3 = (longlong *)(param_2 + 0x1a);
    iVar4 = 0;
    do {
      if (plVar3[-0xb] != 0) {
        FUN_14955d65a(param_1);
      }
      if (plVar3[-10] != 0) {
        FUN_14955d65a(param_1);
      }
      if (plVar3[-9] != 0) {
        FUN_14955d65a(param_1);
      }
      uVar2 = *(uint *)(plVar3 + -4);
      if (((uVar2 & 2) != 0) && (*plVar3 != 0)) {
        FUN_14955d65a(param_1);
        uVar2 = *(uint *)(plVar3 + -4);
      }
      if (((uVar2 & 4) != 0) && (*plVar3 != 0)) {
        FUN_149582d29(param_1);
      }
      if (plVar3[-8] != 0) {
        if ((param_1 == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
          piVar1 = (int *)(plVar3[-8] + 0x3c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) goto LAB_149582baf;
        }
        FUN_149585e6d(param_1);
      }
LAB_149582baf:
      if (plVar3[-7] != 0) {
        FUN_149582a1c(param_1,plVar3[-7],1);
      }
      if (plVar3[-3] != 0) {
        FUN_14958288e(param_1);
      }
      FUN_149582cb1(param_1,plVar3[-2]);
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 0xe;
    } while (iVar4 < *param_2);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149582c24 FUN_149582c24 body=141 status=ok
// SIG undefined FUN_149582c24(void)

void FUN_149582c24(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    if (0 < (int)*param_2) {
      lVar3 = 0;
      plVar2 = param_2;
      do {
        if (plVar2[3] != 0) {
          FUN_149582d29(param_1);
        }
        lVar1 = plVar2[4];
        if (lVar1 != 0) {
          FUN_149582a1c(param_1,lVar1,1);
        }
        if (plVar2[2] != 0) {
          FUN_14955d65a(param_1);
        }
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 4;
      } while (lVar3 < (int)*param_2);
    }
    FUN_14955d65a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 149582cb1 FUN_149582cb1 body=120 status=ok
// SIG undefined FUN_149582cb1(void)

void FUN_149582cb1(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = (int)param_2[1];
    if (0 < iVar1) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        if (*(longlong *)(*param_2 + lVar2) != 0) {
          FUN_14955d65a(param_1);
          iVar1 = (int)param_2[1];
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x10;
      } while (lVar3 < iVar1);
    }
    if (*param_2 != 0) {
      FUN_14955d65a(param_1);
    }
    FUN_14955d65a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 149582d29 FUN_149582d29 body=93 status=ok
// SIG undefined FUN_149582d29(void)

void FUN_149582d29(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_2 + 2);
  iVar1 = *param_2 + 1;
  do {
    if (*plVar2 != 0) {
      FUN_14958288e(param_1);
    }
    if (plVar2[1] != 0) {
      FUN_14955d65a(param_1);
    }
    plVar2 = plVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (1 < iVar1);
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149582d86 FUN_149582d86 body=517 status=ok
// SIG undefined FUN_149582d86(void)

void FUN_149582d86(longlong *param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_88 [32];
  int local_68;
  int local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar9 = (int)param_1[4];
  iVar2 = iVar9;
  iVar11 = param_4;
  iVar3 = local_58;
  uVar8 = param_3;
  while( true ) {
    local_58 = iVar2;
    if (((uVar8 == 0) || (iVar3 = local_58, *(int *)((longlong)param_1 + 0x1c) == 0)) ||
       (iVar2 = FUN_1495839d1(param_1,param_3), iVar3 = local_58, iVar2 != 0)) goto LAB_149582efb;
    iVar10 = iVar11 + -1;
    iVar3 = (**(code **)(param_1[1] + 0x108))(param_1[1],param_3,&local_50,0);
    if (iVar3 != 0) break;
    puVar1 = *(uint **)(local_50 + 8);
    if (param_2 == 0) {
      if ((*(char *)(*param_1 + 0x21) != '\0') && (iVar10 != 0)) {
        uVar8 = *puVar1;
        FUN_14958305a(param_1,uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18,4);
      }
    }
    else {
      uVar8 = puVar1[1];
      lVar4 = *param_1;
      if (*(char *)(lVar4 + 0x21) != '\0') {
        FUN_14958305a(param_1,param_3,2);
        lVar4 = *param_1;
      }
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      if ((*(uint *)(lVar4 + 0x34) >> 2) - 2 < uVar8) {
        FUN_149582f8c(param_1,"freelist leaf count too big on page %d",param_3);
        iVar10 = iVar11 + -2;
        iVar9 = local_58;
      }
      else {
        local_54 = param_4;
        if (0 < (int)uVar8) {
          uVar5 = 0;
          do {
            uVar6 = puVar1[uVar5 + 2];
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            if (*(char *)(*param_1 + 0x21) != '\0') {
              FUN_14958305a(param_1,uVar6,2);
            }
            FUN_1495839d1(param_1,uVar6);
            uVar5 = uVar5 + 1;
          } while (uVar8 != uVar5);
        }
        iVar10 = iVar10 - uVar8;
        iVar9 = local_58;
        param_4 = local_54;
      }
    }
    uVar8 = *puVar1;
    if (local_50 != 0) {
      FUN_14955db91();
    }
    param_3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    iVar2 = local_58;
    iVar11 = iVar10;
    iVar3 = local_58;
  }
  FUN_149582f8c(param_1,"failed to get page %d",param_3);
  iVar11 = iVar10;
  iVar3 = local_58;
LAB_149582efb:
  local_58 = iVar3;
  if ((iVar11 != 0) && (iVar9 == (int)param_1[4])) {
    pcVar7 = "size";
    if (param_2 == 0) {
      pcVar7 = "overflow list length";
    }
    local_68 = param_4;
    FUN_149582f8c(param_1,"%s is %d but should be %d",pcVar7,param_4 - iVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149582f8c FUN_149582f8c body=205 status=ok
// SIG undefined FUN_149582f8c(void)

void FUN_149582f8c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    local_28 = &local_res18;
    lVar1 = param_1 + 0x38;
    uVar2 = *(uint *)(param_1 + 0x50);
    if ((ulonglong)uVar2 != 0) {
      if (uVar2 + 1 < *(uint *)(param_1 + 0x48)) {
        *(uint *)(param_1 + 0x50) = uVar2 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2) = 10;
      }
      else {
        FUN_1495557b3(lVar1,&DAT_149dfc0af,1);
      }
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_149555a84(lVar1,*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x34));
    }
    FUN_149553b5b(lVar1,param_2,local_28);
    if (*(char *)(param_1 + 0x54) == '\a') {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958305a FUN_14958305a body=180 status=ok
// SIG undefined FUN_14958305a(void)

void FUN_14958305a(undefined8 *param_1,ulonglong param_2,byte param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  int local_48;
  uint local_40;
  int local_38;
  int local_30;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_149568244(*param_1,param_2,&local_29,&local_30);
  if (iVar1 == 0) {
    if ((local_29 != param_3) || (local_30 != param_4)) {
      local_38 = local_30;
      local_40 = (uint)local_29;
      local_48 = param_4;
      FUN_149582f8c(param_1,"Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)",
                    param_2 & 0xffffffff,param_3);
    }
  }
  else {
    if ((iVar1 == 0xc0a) || (iVar1 == 7)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    }
    FUN_149582f8c(param_1,"Failed to read ptrmap key=%d",param_2 & 0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958310f FUN_14958310f body=2241 status=ok
// SIG undefined FUN_14958310f(void)

int FUN_14958310f(longlong *param_1,uint param_2,longlong *param_3,undefined8 *param_4)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  ushort *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  uint *puVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined4 local_e4;
  longlong *local_e0;
  undefined1 local_d1;
  undefined1 *local_d0;
  ushort *local_c8;
  longlong local_c0;
  int local_b8;
  uint local_b4;
  int local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  uint local_90;
  int local_8c;
  ulonglong local_88;
  longlong local_80;
  uint *local_78;
  longlong local_70;
  undefined8 *local_68 [2];
  uint local_58;
  ushort local_54;
  ushort local_52;
  undefined8 *local_50;
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar5 = 0;
  local_50 = param_4;
  if (param_2 == 0) goto LAB_149583142;
  plVar18 = (longlong *)*param_1;
  local_c0 = param_1[5];
  local_e4 = (undefined4)param_1[6];
  uVar23 = *(undefined4 *)((longlong)param_1 + 0x34);
  uVar21 = *(uint *)((longlong)plVar18 + 0x34);
  iVar4 = FUN_1495839d1();
  if (iVar4 != 0) goto LAB_149583142;
  param_1[5] = (longlong)"Page %d: ";
  *(uint *)(param_1 + 6) = param_2;
  local_ac = uVar23;
  local_a8 = (ulonglong)uVar21;
  iVar5 = (**(code **)(*plVar18 + 0x108))(*plVar18,param_2,local_68,0);
  uVar23 = local_e4;
  if (iVar5 == 0) {
    puVar10 = (undefined1 *)local_68[0][2];
    if (*(uint *)(puVar10 + 4) != param_2) {
      *(undefined8 *)(puVar10 + 0x50) = local_68[0][1];
      *(undefined8 **)(puVar10 + 0x70) = local_68[0];
      *(longlong **)(puVar10 + 0x48) = plVar18;
      *(uint *)(puVar10 + 4) = param_2;
      uVar9 = 100;
      if (param_2 != 1) {
        uVar9 = 0;
      }
      puVar10[9] = uVar9;
    }
    uVar9 = *puVar10;
    *puVar10 = 0;
    local_e0 = param_1;
    iVar5 = FUN_1495648a4(puVar10);
    if (iVar5 == 0) {
      iVar5 = FUN_14957c50d(puVar10);
      if (iVar5 != 0) {
        FUN_149582f8c(local_e0,"free space corruption",iVar5);
        uVar23 = local_e4;
        goto LAB_14958362a;
      }
      lVar16 = *(longlong *)(puVar10 + 0x50);
      local_a0 = (ulonglong)(byte)puVar10[9];
      local_e0[5] = (longlong)"On tree page %d cell %d: ";
      uVar21 = ((uint)*(byte *)(lVar16 + 5 + local_a0) * 0x100 +
               (uint)*(byte *)(lVar16 + 6 + local_a0)) - 1;
      uVar2 = *(ushort *)(lVar16 + 3 + local_a0);
      uVar2 = uVar2 << 8 | uVar2 >> 8;
      local_88 = (ulonglong)uVar2;
      uVar19 = (uint)uVar2;
      lVar12 = local_a0 - (uint)(byte)puVar10[8] * 4;
      local_d0 = puVar10;
      local_98 = plVar18;
      if (puVar10[8] == 0) {
        local_c8 = (ushort *)CONCAT44(local_c8._4_4_,uVar21);
        uVar21 = *(uint *)(lVar16 + 8 + local_a0);
        uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18
        ;
        if (*(char *)((longlong)plVar18 + 0x21) != '\0') {
          local_e0[5] = (longlong)"On page %d at right child: ";
          FUN_14958305a(local_e0,uVar21,5,param_2);
        }
        plVar18 = local_e0;
        iVar5 = FUN_14958310f(local_e0,uVar21,&local_50,param_4);
        puVar17 = (uint *)0x0;
        iVar4 = 0;
        uVar19 = (uint)local_88;
        uVar21 = (uint)local_c8;
      }
      else {
        puVar17 = (uint *)local_e0[0xb];
        *puVar17 = 0;
        iVar5 = -1;
        iVar4 = 1;
        plVar18 = local_e0;
      }
      local_80 = lVar12 + 0xc;
      uVar21 = uVar21 & 0xffff;
      uVar23 = local_e4;
      puVar10 = local_d0;
      local_70 = lVar16;
      if (uVar19 == 0) {
        *param_3 = (longlong)local_50;
        plVar18[5] = 0;
LAB_149583675:
        lVar16 = local_70;
        if (0 < *(int *)((longlong)plVar18 + 0x1c)) {
          if (puVar10[8] == '\0') {
            puVar17 = (uint *)local_e0[0xb];
            *puVar17 = 0;
            if ((int)local_88 != 0) {
              local_80 = local_80 + local_70;
              uVar7 = local_88 & 0xffffffff;
              do {
                uVar2 = *(ushort *)(local_80 + -2 + uVar7 * 2);
                uVar2 = uVar2 << 8 | uVar2 >> 8;
                uVar3 = (**(code **)(puVar10 + 0x78))(puVar10,lVar16 + (ulonglong)uVar2);
                uVar19 = *puVar17 + 1;
                *puVar17 = uVar19;
                puVar17[uVar19] = ((uint)uVar2 + (uint)uVar3) - 1 | (uint)uVar2 << 0x10;
                uVar8 = (ulonglong)uVar19;
                if (1 < uVar19) {
                  do {
                    uVar14 = uVar8 >> 1;
                    uVar19 = puVar17[uVar14];
                    if (uVar19 <= puVar17[uVar8]) break;
                    puVar17[uVar14] = puVar17[uVar8];
                    puVar17[uVar8] = uVar19;
                    uVar19 = (uint)uVar8;
                    uVar8 = uVar14;
                  } while (3 < uVar19);
                }
                bVar1 = 1 < (longlong)uVar7;
                puVar10 = local_d0;
                uVar7 = uVar7 - 1;
              } while (bVar1);
            }
          }
          uVar2 = *(ushort *)(lVar16 + 1 + local_a0);
          for (uVar2 = uVar2 << 8 | uVar2 >> 8; uVar2 != 0; uVar2 = uVar2 << 8 | uVar2 >> 8) {
            uVar3 = *(ushort *)(lVar16 + 2 + (ulonglong)uVar2);
            uVar19 = *puVar17 + 1;
            *puVar17 = uVar19;
            puVar17[uVar19] =
                 ((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) + (uint)uVar2) - 1 | (uint)uVar2 << 0x10;
            uVar7 = (ulonglong)uVar19;
            if (1 < uVar19) {
              do {
                uVar8 = uVar7 >> 1;
                uVar19 = puVar17[uVar8];
                if (uVar19 <= puVar17[uVar7]) break;
                puVar17[uVar8] = puVar17[uVar7];
                puVar17[uVar7] = uVar19;
                uVar19 = (uint)uVar7;
                uVar7 = uVar8;
              } while (3 < uVar19);
            }
            uVar2 = *(ushort *)(lVar16 + (ulonglong)uVar2);
          }
          iVar4 = 0;
          uVar19 = *puVar17;
          while (uVar19 != 0) {
            uVar22 = puVar17[1];
            puVar17[1] = puVar17[uVar19];
            puVar17[uVar19] = 0xffffffff;
            uVar6 = uVar19 - 1;
            *puVar17 = uVar6;
            if (2 < uVar19) {
              uVar19 = puVar17[1];
              uVar7 = (ulonglong)((puVar17[3] < puVar17[2]) + 2);
              uVar11 = puVar17[uVar7];
              if (uVar11 <= uVar19) {
                puVar20 = puVar17 + uVar7;
                uVar8 = 1;
                do {
                  uVar14 = uVar7;
                  puVar17[uVar8] = uVar11;
                  *puVar20 = uVar19;
                  uVar11 = (int)uVar14 * 2;
                  uVar6 = *puVar17;
                  if (uVar6 < uVar11) break;
                  uVar7 = (ulonglong)(uVar11 | 1);
                  if (puVar17[uVar11] <= puVar17[uVar7]) {
                    uVar7 = (ulonglong)uVar11;
                  }
                  puVar20 = puVar17 + uVar7;
                  uVar11 = *puVar20;
                  uVar8 = uVar14;
                } while (uVar11 <= uVar19);
              }
            }
            uVar19 = uVar22 >> 0x10;
            if (uVar19 <= (uVar21 & 0xffff)) {
              FUN_149582f8c(local_e0,"Multiple uses for byte %u of page %d",uVar19,param_2);
              puVar10 = local_d0;
              uVar23 = local_e4;
              if (*puVar17 != 0) goto LAB_149583632;
              break;
            }
            iVar4 = iVar4 + ~(uVar21 & 0xffff) + uVar19;
            uVar21 = uVar22;
            uVar19 = uVar6;
          }
          uVar23 = local_e4;
          if ((int)local_a8 + (~uVar21 | 0xffff0000) + iVar4 !=
              (uint)*(byte *)(lVar16 + 7 + local_a0)) {
            local_f8 = param_2;
            FUN_149582f8c(local_e0,"Fragmentation of %d bytes reported as %d on page %d");
            puVar10 = local_d0;
            uVar23 = local_e4;
          }
        }
      }
      else {
        local_8c = uVar21 + 1;
        puVar13 = (ushort *)((int)((int)local_80 + uVar19 * 2 + -2) + lVar16);
        local_b4 = (int)local_a8 - 4;
        local_b8 = 1;
        local_d1 = uVar9;
        local_b0 = iVar4;
        do {
          uVar19 = uVar19 - 1;
          if (*(int *)((longlong)plVar18 + 0x1c) == 0) break;
          *(uint *)((longlong)plVar18 + 0x34) = uVar19;
          uVar2 = *puVar13 << 8 | *puVar13 >> 8;
          uVar22 = (uint)uVar2;
          local_c8 = puVar13;
          if ((uVar21 < uVar2) && (uVar2 <= local_b4)) {
            local_78 = (uint *)((ulonglong)uVar22 + local_70);
            (**(code **)(puVar10 + 0x80))(puVar10,local_78,local_68);
            plVar18 = local_e0;
            if ((uint)local_a8 < local_52 + uVar22) {
              FUN_149582f8c(local_e0,"Extends off end of page");
              local_b8 = 0;
              uVar23 = local_e4;
            }
            else {
              if (puVar10[2] != '\0') {
                if (local_b0 == 0) {
                  if ((longlong)local_50 <= (longlong)local_68[0]) goto LAB_14958347e;
                }
                else if ((longlong)local_50 < (longlong)local_68[0]) {
LAB_14958347e:
                  FUN_149582f8c(local_e0,"Rowid %lld out of order");
                  puVar10 = local_d0;
                }
                local_b0 = 0;
                local_50 = local_68[0];
              }
              if (local_54 < local_58) {
                iVar4 = local_58 + (uint)local_a8;
                uVar11 = (uint)local_54;
                uVar7 = (ulonglong)local_b4;
                uVar6 = *(uint *)((longlong)local_78 + ((ulonglong)local_52 - 4));
                uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
                if (*(char *)((longlong)local_98 + 0x21) != '\0') {
                  local_90 = uVar6;
                  FUN_14958305a(local_e0,uVar6,CONCAT71((uint7)(uint3)(uVar6 >> 8),3),param_2);
                  uVar6 = local_90;
                }
                FUN_149582d86(local_e0,0,uVar6,((iVar4 - uVar11) - 5) / uVar7);
                puVar10 = local_d0;
              }
              if (puVar10[8] == '\0') {
                uVar22 = *local_78;
                uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                         uVar22 << 0x18;
                if (*(char *)((longlong)local_98 + 0x21) != '\0') {
                  FUN_14958305a(local_e0,uVar22,5,param_2);
                }
                iVar4 = FUN_14958310f(local_e0,uVar22,&local_50,local_50);
                plVar18 = local_e0;
                uVar23 = local_e4;
                local_b0 = 0;
                puVar10 = local_d0;
                if (iVar4 != iVar5) {
                  FUN_149582f8c(local_e0,"Child page depth differs");
                  puVar10 = local_d0;
                  iVar5 = iVar4;
                }
              }
              else {
                uVar6 = *puVar17 + 1;
                uVar7 = (ulonglong)uVar6;
                *puVar17 = uVar6;
                puVar17[uVar7] = ((uint)uVar2 + (uint)local_52) - 1 | uVar22 << 0x10;
                plVar18 = local_e0;
                uVar23 = local_e4;
                if (1 < uVar6) {
                  do {
                    uVar8 = uVar7 >> 1;
                    uVar22 = puVar17[uVar8];
                    if (uVar22 <= puVar17[uVar7]) break;
                    puVar17[uVar8] = puVar17[uVar7];
                    puVar17[uVar7] = uVar22;
                    uVar22 = (uint)uVar7;
                    uVar7 = uVar8;
                  } while (3 < uVar22);
                }
              }
            }
          }
          else {
            local_f8 = local_b4;
            FUN_149582f8c(plVar18,"Offset %d out of range %d..%d",uVar22,local_8c);
            local_b8 = 0;
            puVar10 = local_d0;
            plVar18 = local_e0;
          }
          puVar13 = local_c8 + -1;
        } while (0 < (int)uVar19);
        *param_3 = (longlong)local_50;
        plVar18[5] = 0;
        if (local_b8 != 0) goto LAB_149583675;
        *puVar10 = local_d1;
      }
    }
    else {
      FUN_149582f8c(local_e0,"btreeInitPage() returns error code %d",iVar5);
LAB_14958362a:
      iVar5 = -1;
    }
LAB_149583632:
    uVar15 = local_ac;
    lVar16 = local_c0;
    param_1 = local_e0;
    if (puVar10 != (undefined1 *)0x0) {
      FUN_14955db91(*(undefined8 *)(puVar10 + 0x70));
      param_1 = local_e0;
    }
  }
  else {
    FUN_149582f8c(param_1,"unable to get the page. error code=%d",iVar5);
    iVar5 = -1;
    lVar16 = local_c0;
    uVar15 = local_ac;
    uVar23 = local_e4;
  }
  param_1[5] = lVar16;
  *(undefined4 *)(param_1 + 6) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar15;
  iVar5 = iVar5 + 1;
LAB_149583142:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495839d1 FUN_1495839d1 body=138 status=ok
// SIG undefined FUN_1495839d1(void)

undefined8 FUN_1495839d1(longlong param_1,uint param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (param_2 - 1 < *(uint *)(param_1 + 0x18)) {
    uVar2 = 1;
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 3)) >> (param_2 & 7) & 1)
        == 0) {
      if (*(int *)(*(longlong *)(param_1 + 0x60) + 0x170) == 0) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)param_2 & 7));
        uVar2 = 0;
      }
    }
    else {
      FUN_149582f8c(param_1,"2nd reference to page %d");
    }
  }
  else {
    FUN_149582f8c(param_1,"invalid page number %d");
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 149583a5b FUN_149583a5b body=90 status=ok
// SIG undefined FUN_149583a5b(void)

void FUN_149583a5b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_14955d65a(param_1[1]);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 6) = 0x10000;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1 != (undefined8 *)0x0) {
    FUN_14955d65a(param_1[1],param_1);
    return;
  }
  return;
}



// FUNCTION 149583ab5 FUN_149583ab5 body=83 status=ok
// SIG undefined FUN_149583ab5(void)

undefined8 * FUN_149583ab5(undefined8 *param_1)

{
  undefined8 *puVar1;
  short sVar2;
  
  if (*(short *)(param_1 + 6) == 0) {
    puVar1 = (undefined8 *)FUN_14955d750(param_1[1],0x3f8);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = *param_1;
    *param_1 = puVar1;
    puVar1 = puVar1 + 1;
    sVar2 = 0x29;
  }
  else {
    puVar1 = (undefined8 *)param_1[4];
    sVar2 = *(short *)(param_1 + 6) + -1;
  }
  *(short *)(param_1 + 6) = sVar2;
  param_1[4] = puVar1 + 3;
  return puVar1;
}



// FUNCTION 149583b08 FUN_149583b08 body=358 status=ok
// SIG undefined FUN_149583b08(void)

longlong * FUN_149583b08(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong *local_178;
  longlong *local_168 [41];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  memset(local_168,0,0x140);
  plVar4 = (longlong *)0x0;
  if (param_1 != (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
    do {
      plVar9 = (longlong *)param_1[1];
      param_1[1] = 0;
      pplVar7 = local_168;
      if (plVar4 != (longlong *)0x0) {
        uVar3 = 0;
        plVar6 = &local_180;
        do {
          do {
            if (*param_1 < *plVar4) {
              plVar6[1] = (longlong)param_1;
              plVar5 = (longlong *)param_1[1];
              plVar1 = plVar4;
              plVar6 = param_1;
              plVar8 = (longlong *)param_1[1];
            }
            else {
              if (*plVar4 < *param_1) {
                plVar6[1] = (longlong)plVar4;
                plVar6 = plVar4;
              }
              plVar4 = (longlong *)plVar4[1];
              plVar5 = param_1;
              plVar1 = param_1;
              plVar8 = plVar4;
            }
            param_1 = plVar5;
          } while (plVar8 != (longlong *)0x0);
          plVar6[1] = (longlong)plVar1;
          *pplVar7 = (longlong *)0x0;
          uVar3 = (ulonglong)((int)uVar3 + 1);
          pplVar7 = local_168 + uVar3;
          plVar4 = *pplVar7;
          param_1 = local_178;
          plVar6 = &local_180;
        } while (plVar4 != (longlong *)0x0);
      }
      *pplVar7 = param_1;
      param_1 = plVar9;
      plVar4 = local_168[0];
    } while (plVar9 != (longlong *)0x0);
  }
  lVar2 = 1;
  do {
    plVar9 = local_168[lVar2];
    plVar6 = plVar4;
    if ((plVar9 != (longlong *)0x0) &&
       (plVar6 = plVar9, plVar8 = &local_180, plVar4 != (longlong *)0x0)) {
      do {
        while( true ) {
          if (*plVar9 < *plVar4) break;
          if (*plVar4 < *plVar9) {
            plVar8[1] = (longlong)plVar4;
            plVar8 = plVar4;
          }
          plVar4 = (longlong *)plVar4[1];
          plVar5 = plVar9;
          if (plVar4 == (longlong *)0x0) goto LAB_149583c2e;
        }
        plVar8[1] = (longlong)plVar9;
        plVar6 = plVar9 + 1;
        plVar5 = plVar4;
        plVar8 = plVar9;
        plVar9 = (longlong *)*plVar6;
      } while ((longlong *)*plVar6 != (longlong *)0x0);
LAB_149583c2e:
      plVar8[1] = (longlong)plVar5;
      plVar6 = local_178;
    }
    lVar2 = lVar2 + 1;
    plVar4 = plVar6;
    if (lVar2 == 0x28) {
      if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
        return plVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 149583c6f FUN_149583c6f body=131 status=ok
// SIG undefined FUN_149583c6f(void)

longlong FUN_149583c6f(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    iVar4 = 1;
    lVar3 = param_1;
    do {
      param_1 = lVar1;
      local_28 = *(longlong *)(param_1 + 8);
      *(longlong *)(param_1 + 0x10) = lVar3;
      uVar2 = FUN_149583d64(&local_28,iVar4);
      *(undefined8 *)(param_1 + 8) = uVar2;
      iVar4 = iVar4 + 1;
      lVar1 = local_28;
      lVar3 = param_1;
    } while (local_28 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149583cf3 FUN_149583cf3 body=112 status=ok
// SIG undefined FUN_149583cf3(void)

void FUN_149583cf3(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  do {
    lVar1 = param_1;
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      *param_2 = lVar1;
    }
    else {
      FUN_149583cf3(*(longlong *)(lVar1 + 0x10),param_2,&local_28);
      *(longlong *)(local_28 + 8) = lVar1;
    }
    param_2 = (longlong *)(lVar1 + 8);
    param_1 = *(longlong *)(lVar1 + 8);
  } while (*(longlong *)(lVar1 + 8) != 0);
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149583d64 FUN_149583d64 body=106 status=ok
// SIG undefined FUN_149583d64(void)

longlong FUN_149583d64(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (param_2 < 2) {
    *param_1 = *(longlong *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  else {
    lVar2 = FUN_149583d64(param_1,param_2 + -1);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x10) = lVar2;
      *param_1 = *(longlong *)(lVar1 + 8);
      uVar3 = FUN_149583d64(param_1,param_2 + -1);
      *(undefined8 *)(lVar1 + 8) = uVar3;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 149583dce FUN_149583dce body=133 status=ok
// SIG undefined FUN_149583dce(void)

undefined4
FUN_149583dce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_30 = &local_res20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res20 = param_4;
  lVar2 = FUN_14955dd50(param_1,param_3);
  uVar1 = 7;
  if (lVar2 != 0) {
    uVar1 = FUN_149583fe9(param_1,param_2,lVar2);
    FUN_14955d65a(param_1,lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149583e54 FUN_149583e54 body=166 status=ok
// SIG undefined FUN_149583e54(void)

int FUN_149583e54(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  lVar4 = *(longlong *)(*plVar3 + 0x118);
  if (param_2 != 0) {
    if (param_2 < 0) {
      param_2 = (int)(((longlong)param_2 * -0x400) /
                     ((longlong)*(int *)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x24)));
    }
    *(int *)(lVar4 + 0x20) = param_2;
  }
  iVar5 = *(int *)(lVar4 + 0x1c);
  if ((longlong)iVar5 < 0) {
    iVar5 = (int)(((longlong)iVar5 * -0x400) /
                 ((longlong)*(int *)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x24)));
  }
  iVar2 = *(int *)(lVar4 + 0x20);
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  if (iVar2 < iVar5) {
    iVar2 = iVar5;
  }
  return iVar2;
}



// FUNCTION 149583efa FUN_149583efa body=239 status=ok
// SIG undefined FUN_149583efa(void)

void FUN_149583efa(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a();
  }
  lVar3 = *plVar2;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    uVar7 = param_2 & 7;
    bVar9 = 2 < uVar7;
    *(bool *)(lVar3 + 0xc) = bVar9;
    *(bool *)(lVar3 + 0xd) = uVar7 == 4;
    *(bool *)(lVar3 + 0xb) = uVar7 == 1;
    if (uVar7 != 1) {
      if ((param_2 & 8) == 0) {
        *(undefined1 *)(lVar3 + 0xe) = 2;
        bVar8 = 2;
      }
      else {
        *(undefined1 *)(lVar3 + 0xe) = 3;
        bVar8 = 3;
      }
      bVar4 = false;
      goto LAB_149583f3b;
    }
  }
  else {
    *(undefined2 *)(lVar3 + 0xb) = 1;
    *(undefined1 *)(lVar3 + 0xd) = 0;
    bVar9 = false;
  }
  *(undefined1 *)(lVar3 + 0xe) = 0;
  bVar4 = true;
  bVar8 = 0;
LAB_149583f3b:
  bVar5 = bVar8;
  if (!bVar9) {
    bVar5 = 0;
  }
  bVar6 = 0xc;
  if (bVar4) {
    bVar6 = bVar8 * '\x04';
  }
  if ((param_2 & 0x10) == 0) {
    bVar6 = bVar8 * '\x04';
  }
  *(byte *)(lVar3 + 0xf) = bVar6 | bVar5;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) & 0xfe | (param_2 & 0x20) == 0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149583fe9 FUN_149583fe9 body=308 status=ok
// SIG undefined FUN_149583fe9(void)

int FUN_149583fe9(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_38;
  local_40 = 0;
  iVar1 = FUN_14955ba6b(param_1,param_3,0x80,0);
  if (iVar1 == 0) {
LAB_14958405b:
    do {
      do {
        iVar2 = FUN_149555dda(local_38);
        if (iVar2 != 100) goto LAB_1495840dc;
        uVar3 = FUN_14955975f(local_38,0);
        pbVar4 = (byte *)FUN_149558f28(uVar3);
        FUN_1495597cd(local_38);
      } while (pbVar4 == (byte *)0x0);
      iVar1 = *pbVar4 - 0x43;
      if ((iVar1 == 0) && (iVar1 = pbVar4[1] - 0x52, iVar1 == 0)) {
        iVar1 = pbVar4[2] - 0x45;
      }
      if (iVar1 != 0) {
        iVar1 = *pbVar4 - 0x49;
        if ((iVar1 == 0) && (iVar1 = pbVar4[1] - 0x4e, iVar1 == 0)) {
          iVar1 = pbVar4[2] - 0x53;
        }
        if (iVar1 != 0) goto LAB_14958405b;
      }
      iVar2 = FUN_149583fe9(param_1,param_2,pbVar4);
    } while (iVar2 == 0);
LAB_1495840dc:
    iVar1 = 0;
    if (iVar2 != 0x65) {
      iVar1 = iVar2;
    }
    if (iVar1 != 0) {
      uVar3 = FUN_14955b92e(param_1);
      if (*param_2 != 0) {
        FUN_14955d65a(param_1);
      }
      lVar5 = FUN_149559683(param_1,uVar3);
      *param_2 = lVar5;
    }
    FUN_149556ce4(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 14958411e FUN_14958411e body=112 status=ok
// SIG undefined FUN_14958411e(void)

undefined4 FUN_14958411e(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if (((*(byte *)(lVar2 + 0x26) & 2) == 0) ||
     (uVar3 = 8, (bool)*(char *)(lVar2 + 0x21) == (param_2 != '\0'))) {
    *(bool *)(lVar2 + 0x21) = param_2 != '\0';
    *(bool *)(lVar2 + 0x22) = param_2 == '\x02';
    uVar3 = 0;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return uVar3;
}



// FUNCTION 14958418e FUN_14958418e body=90 status=ok
// SIG undefined FUN_14958418e(void)

int FUN_14958418e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x21) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 2 - (uint)(*(char *)(*(longlong *)(param_1 + 8) + 0x22) == '\0');
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return iVar2;
}



// FUNCTION 1495841e8 FUN_1495841e8 body=407 status=ok
// SIG undefined FUN_1495841e8(void)

int FUN_1495841e8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if ((*(char *)((longlong)param_2 + 0x11) != '\0') &&
     (*(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1,
     *(char *)((longlong)param_2 + 0x12) == '\0')) {
    FUN_14956624a(param_2);
  }
  plVar3 = *(longlong **)(**(longlong **)(param_1 + 8) + 0x48);
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    local_68 = (ulonglong)(*(uint *)(param_2[1] + 0x3c) & 0x7fffffff) *
               (longlong)*(int *)(param_2[1] + 0x30);
    iVar5 = (**(code **)(lVar4 + 0x50))(plVar3,0xb);
    if ((iVar5 != 0xc) && (iVar5 != 0)) goto LAB_14958426d;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_68 = 0;
  local_28 = 0;
  local_48 = *param_2;
  uStack_50 = 1;
  lStack_60 = param_1;
  puStack_40 = param_2;
  FUN_149556ed1(&local_68);
  iVar5 = FUN_1495586e8(&local_68);
  if (iVar5 == 0) {
    puVar2 = (ushort *)(*(longlong *)(param_1 + 8) + 0x26);
    *puVar2 = *puVar2 & 0xfffd;
    iVar5 = 0;
  }
  else {
    lVar4 = **(longlong **)(lStack_60 + 8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + 1;
      for (lVar6 = *(longlong *)(lVar4 + 0x70); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
        *(undefined4 *)(lVar6 + 0x18) = 1;
      }
      FUN_149564708(*(undefined8 *)(lVar4 + 0x118),0);
    }
  }
LAB_14958426d:
  if (*(char *)((longlong)param_2 + 0x11) != '\0') {
    piVar1 = (int *)((longlong)param_2 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_2);
    }
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f3c040 FUN_144f3c040 body=198 status=ok
// SIG undefined FUN_144f3c040(void)

undefined8 FUN_144f3c040(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  iVar3 = 0;
  uVar4 = (ulonglong)
          (((uint)((ulonglong)param_2 >> 0x10) ^ (uint)((ulonglong)param_2 >> 8) ^ (uint)param_2) &
          0x1f);
  piVar7 = (int *)((uVar4 + 0x18) * 0x10 + param_1);
  iVar1 = *piVar7;
  if (0 < iVar1) {
    lVar6 = 0;
    param_1 = param_1 + uVar4 * 0x10;
    plVar5 = *(longlong **)(param_1 + 0x178);
    do {
      if (*(longlong *)(*plVar5 + 0x178) == param_2) {
        if (iVar3 < iVar1) {
          lVar6 = lVar6 * 8;
          do {
            lVar2 = *(longlong *)(param_1 + 0x178);
            lVar6 = lVar6 + 8;
            iVar3 = iVar3 + 1;
            *(undefined8 *)(lVar2 + -8 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          } while (iVar3 < *piVar7);
        }
        *piVar7 = *piVar7 + -1;
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_144bd5aa0(1,"Failed to find fd %d requested for delete in hashtable\n",param_2);
  return 1;
}



// FUNCTION 144f3c110 FUN_144f3c110 body=321 status=ok
// SIG undefined FUN_144f3c110(void)

void FUN_144f3c110(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 1;
  if (*(int *)(param_1 + 0x234) != 0) {
    local_38 = 1;
    local_68 = CONCAT44(local_68._4_4_,4);
    iVar1 = Ordinal_21(param_2,0xffff,8,&local_38);
    if (iVar1 < 0) goto LAB_144f3c244;
    local_24 = *(undefined4 *)(param_1 + 0x234);
    local_20 = *(undefined4 *)(param_1 + 0x23c);
    local_48 = 0;
    local_50 = 0;
    local_58 = local_30;
    local_28 = 1;
    local_60 = 0;
    local_68 = 0;
    iVar1 = WSAIoctl(param_2,0x98000004,&local_28,0xc);
    if (iVar1 != 0) goto LAB_144f3c244;
  }
  local_38 = 1;
  lVar3 = Ordinal_53(&DAT_149c0b1d8);
  if (lVar3 == 0) {
    uVar2 = Ordinal_111();
    FUN_144bd5aa0(1,"getprotobyname() failed with error %d\n",uVar2);
    iVar1 = 6;
  }
  else {
    iVar1 = (int)*(short *)(lVar3 + 0x10);
  }
  local_68 = CONCAT44(local_68._4_4_,4);
  Ordinal_21(param_2,iVar1,1,&local_38);
  Ordinal_10(param_2,0x8004667e,&local_34);
LAB_144f3c244:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 144f3c270 FUN_144f3c270 body=100 status=ok
// SIG undefined FUN_144f3c270(void)

undefined8 FUN_144f3c270(longlong param_1)

{
  int iVar1;
  undefined4 local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = 4;
  iVar1 = Ordinal_7(*(undefined8 *)(param_1 + 0x178),0xffff,0x1007,local_res10,local_res8);
  if ((((iVar1 != -1) && (local_res10[0] != 0)) && (2 < local_res10[0] - 0x2733U)) &&
     (local_res10[0] != 0x2726)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144f3c2e0 FUN_144f3c2e0 body=6 status=ok
// SIG undefined FUN_144f3c2e0(void)

undefined8 FUN_144f3c2e0(void)

{
  return 1;
}



// FUNCTION 144f3c2f0 FUN_144f3c2f0 body=50 status=ok
// SIG undefined FUN_144f3c2f0(void)

undefined8 FUN_144f3c2f0(longlong param_1)

{
  WSASetEvent(**(undefined8 **)
                ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xf8 + *(longlong *)(param_1 + 0x78))
             );
  return 0;
}



// FUNCTION 144f3c330 FUN_144f3c330 body=3 status=ok
// SIG undefined FUN_144f3c330(void)

void FUN_144f3c330(void)

{
  return;
}



// FUNCTION 144f3c340 FUN_144f3c340 body=3 status=ok
// SIG undefined FUN_144f3c340(void)

void FUN_144f3c340(void)

{
  return;
}



// FUNCTION 144f3c350 FUN_144f3c350 body=55 status=ok
// SIG undefined FUN_144f3c350(void)

void FUN_144f3c350(longlong param_1,longlong param_2,int param_3)

{
  param_1 = (longlong)*(char *)(param_2 + 0x1c7) * 0xa8 + param_1;
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (longlong)(param_3 + 1) * 8) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x13c) * 8);
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
  return;
}



// FUNCTION 144f3c390 FUN_144f3c390 body=101 status=ok
// SIG undefined FUN_144f3c390(void)

void FUN_144f3c390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0xa0 + (longlong)*(char *)(param_2 + 0x1c7) * 0xa8;
  *(undefined2 *)(*(longlong *)(lVar1 + 0x48) + 10 + (ulonglong)*(uint *)(lVar1 + 0x9c) * 0x10) = 0;
  *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  (*(undefined8 **)(lVar1 + 0x58))[*(uint *)(lVar1 + 0x9c)] = **(undefined8 **)(lVar1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000144f3c3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAEventSelect(*(undefined8 *)(param_2 + 0x178),**(undefined8 **)(lVar1 + 0x58),0x39);
  return;
}



// FUNCTION 144f3c400 FUN_144f3c400 body=3 status=ok
// SIG undefined FUN_144f3c400(void)

void FUN_144f3c400(void)

{
  return;
}



// FUNCTION 144f3c410 FUN_144f3c410 body=128 status=ok
// SIG undefined FUN_144f3c410(void)

undefined8 FUN_144f3c410(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0x30;
  if ((*(ushort *)(param_3 + 8) & 9) != 0) {
    uVar3 = 0x39;
  }
  if ((*(ushort *)(param_3 + 8) & 2) != 0) {
    uVar3 = uVar3 | 2;
  }
  iVar1 = WSAEventSelect(*(undefined8 *)(param_2 + 0x178),
                         **(undefined8 **)
                           ((longlong)*(char *)(param_2 + 0x1c7) * 0xa8 + param_1 + 0xf8),uVar3);
  if (iVar1 != -1) {
    return 0;
  }
  uVar2 = Ordinal_111();
  FUN_144bd5aa0(1,"WSAEventSelect() failed with error %d\n",uVar2);
  return 1;
}



// FUNCTION 144f3c490 FUN_144f3c490 body=102 status=ok
// SIG undefined FUN_144f3c490(void)

void FUN_144f3c490(void)

{
  int iVar1;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar1 = Ordinal_115(0x202,local_1b8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1d8);
  }
  FUN_144bd5aa0(1,"WSAStartup failed with error: %d\n",iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 144f3c510 FUN_144f3c510 body=90 status=ok
// SIG undefined FUN_144f3c510(void)

void FUN_144f3c510(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 0x4dc);
  if (*(short *)(param_1 + 0x4dc) != 0) {
    plVar1 = (longlong *)(param_1 + 0xf8);
    do {
      iVar2 = iVar2 + -1;
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        WSACloseEvent(*(undefined8 *)*plVar1);
        thunk_FUN_144f3cee0(*plVar1,0,"lws_free");
      }
      plVar1 = plVar1 + 0x15;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 144f3c570 FUN_144f3c570 body=71 status=ok
// SIG undefined FUN_144f3c570(void)

void FUN_144f3c570(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  lVar2 = 0x20;
  do {
    if (*plVar1 != 0) {
      thunk_FUN_144f3cee0(*plVar1,0,"lws_free");
    }
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x000144f3c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_116();
  return;
}



// FUNCTION 144f3c5c0 FUN_144f3c5c0 body=94 status=ok
// SIG undefined FUN_144f3c5c0(void)

void FUN_144f3c5c0(undefined8 *param_1)

{
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 local_238 [2];
  undefined4 local_228 [2];
  undefined8 local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_228[0] = 1;
  local_238[0] = 0;
  local_220 = *param_1;
  local_248 = local_238;
  Ordinal_18((int)local_220 + 1,local_228,0,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_268);
}



// FUNCTION 144f3c630 FUN_144f3c630 body=8 status=ok
// SIG undefined FUN_144f3c630(void)

void FUN_144f3c630(undefined8 param_1,undefined8 param_2)

{
  FUN_144f3c640(param_1,param_2,0);
  return;
}



// FUNCTION 144f3c640 FUN_144f3c640 body=1047 status=ok
// SIG undefined FUN_144f3c640(void)

void FUN_144f3c640(longlong param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_278 [32];
  ulonglong local_258;
  longlong local_248;
  uint local_240;
  undefined8 *local_238;
  undefined1 local_228 [120];
  longlong local_1b0;
  uint local_58 [5];
  int local_44;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  uVar10 = (ulonglong)(int)param_3;
  local_238 = (undefined8 *)(ulonglong)param_2;
  local_248 = param_1;
  local_240 = param_3;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x378) == 0)) goto LAB_144f3ca21;
  uVar7 = 0;
  plVar9 = (longlong *)(param_1 + 0xa0 + uVar10 * 0xa8);
  if (*(int *)(param_1 + 0x4d8) == 0) {
    memset(local_228,0,0x1d0);
    local_258 = 0;
    local_1b0 = param_1;
    uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x378) + 0x170) + 8))
                      (local_228,0x1f,0,0);
    uVar10 = (ulonglong)local_240;
    *(undefined4 *)(param_1 + 0x4d8) = uVar2;
    *(undefined4 *)(param_1 + 0x4d4) = uVar2;
    *(undefined4 *)(param_1 + 0x4d8) = 1;
  }
  iVar3 = 0;
  if ((int)param_2 < 0) {
    iVar3 = FUN_144bd8630(param_1,uVar10 & 0xffffffff);
    lVar6 = local_248;
    if ((iVar3 != 0) && (uVar10 = uVar7, 0 < *(int *)((longlong)plVar9 + 0x9c))) {
      do {
        iVar3 = (int)uVar10;
        if (*(short *)(uVar7 + 10 + plVar9[9]) != 0) {
          iVar4 = FUN_144bd81e0(lVar6,(longlong)iVar3 * 0x10 + plVar9[9],local_240);
          if (iVar4 < 0) break;
          if (iVar4 != 0) {
            iVar3 = iVar3 + -1;
            uVar7 = uVar7 - 0x10;
          }
        }
        uVar7 = uVar7 + 0x10;
        uVar10 = (ulonglong)(iVar3 + 1U);
      } while ((int)(iVar3 + 1U) < *(int *)((longlong)plVar9 + 0x9c));
    }
    goto LAB_144f3ca21;
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,uVar10 & 0xffffffff);
  }
  uVar10 = uVar7;
  if (*(int *)((longlong)plVar9 + 0x9c) != 0) {
    do {
      iVar4 = (int)uVar10;
      puVar8 = (undefined8 *)(uVar10 * 0x10 + plVar9[9]);
      param_1 = local_248;
      if (((((*(byte *)(puVar8 + 1) & 2) != 0) &&
           (lVar6 = FUN_144f3bf50(local_248,*puVar8), param_1 = local_248, lVar6 != 0)) &&
          ((*(byte *)(lVar6 + 0x1b8) & 0x20) == 0)) && ((*(uint *)(lVar6 + 0x1bc) & 0x1000) == 0)) {
        *(undefined2 *)((longlong)puVar8 + 10) = 2;
        iVar5 = FUN_144bd81d0(local_248,puVar8);
        if (iVar5 < 0) goto LAB_144f3ca21;
        local_238 = (undefined8 *)((ulonglong)local_238 & 0xffffffff00000000);
        if (iVar5 != 0) {
          iVar4 = iVar4 + -1;
        }
      }
      uVar10 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)((longlong)plVar9 + 0x9c));
  }
  iVar4 = FUN_144bd8350(param_1,1,local_240);
  if (iVar4 == 0) {
    FUN_144f3c640(param_1,0xffffffff,*(undefined1 *)((longlong)plVar9 + 0xa2));
    iVar4 = FUN_144bd8350(param_1,1,*(undefined1 *)((longlong)plVar9 + 0xa2));
    if (iVar4 != 0) goto LAB_144f3c867;
  }
  else {
LAB_144f3c867:
    iVar3 = (int)local_238;
    if ((iVar3 != 0) &&
       (lVar6 = FUN_144bd7e50(plVar9),
       (longlong)iVar3 * 1000 - lVar6 != 0 && lVar6 <= (longlong)iVar3 * 1000)) {
      iVar3 = (int)(lVar6 / 1000);
    }
  }
  local_258 = local_258 & 0xffffffff00000000;
  iVar3 = WSAWaitForMultipleEvents(1,plVar9[0xb],0,iVar3);
  local_248 = CONCAT44(local_248._4_4_,iVar3);
  if (iVar3 == 0) {
    WSAResetEvent(*(undefined8 *)plVar9[0xb]);
    if ((*(undefined8 **)(*plVar9 + 0x98) != (undefined8 *)0x0) &&
       (pcVar1 = (code *)**(undefined8 **)(*plVar9 + 0x98), pcVar1 != (code *)0x0)) {
      (*pcVar1)(plVar9);
    }
    if (*(int *)((longlong)plVar9 + 0x9c) != 0) {
      do {
        iVar4 = (int)uVar7;
        local_238 = (undefined8 *)(uVar7 * 0x10);
        iVar3 = WSAEnumNetworkEvents(*(undefined8 *)((longlong)local_238 + plVar9[9]),0,local_58);
        if (iVar3 == -1) {
          uVar2 = Ordinal_111();
          FUN_144bd5aa0(1,"WSAEnumNetworkEvents() failed with error %d\n",uVar2);
          goto LAB_144f3ca21;
        }
        local_238 = (undefined8 *)((longlong)local_238 + plVar9[9]);
        *(ushort *)((longlong)local_238 + 10) = (ushort)local_58[0];
        if (((((local_58[0] & 0x10) != 0) && (local_44 != 0)) && (2 < local_44 - 0x2733U)) &&
           (local_44 != 0x2726)) {
          *(ushort *)((longlong)local_238 + 10) = (ushort)local_58[0] | 0x20;
        }
        if (((*(byte *)((longlong)local_238 + 10) & 2) != 0) &&
           (lVar6 = FUN_144f3bf50(param_1), lVar6 != 0)) {
          *(uint *)(lVar6 + 0x1bc) = *(uint *)(lVar6 + 0x1bc) & 0xffffefff;
        }
        if ((*(ushort *)((longlong)local_238 + 10) & 0x20) != 0) {
          iVar4 = iVar4 + -1;
        }
        if (*(ushort *)((longlong)local_238 + 10) != 0) {
          Ordinal_16(*local_238,0,0,0);
          FUN_144bd81e0(param_1,local_238,local_240);
        }
        uVar7 = (ulonglong)(iVar4 + 1U);
      } while (iVar4 + 1U < *(uint *)((longlong)plVar9 + 0x9c));
    }
    iVar3 = (int)local_248;
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  if (iVar3 == 0x102) {
    FUN_144bd81d0(param_1,0);
  }
LAB_144f3ca21:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_278);
}



// FUNCTION 144f3ca70 FUN_144f3ca70 body=250 status=ok
// SIG undefined FUN_144f3ca70(void)

undefined8 FUN_144f3ca70(longlong param_1)

{
  short sVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  sVar1 = *(short *)(param_1 + 0x4dc);
  iVar7 = (int)sVar1;
  plVar6 = (longlong *)(param_1 + 0x178);
  lVar5 = 0;
  do {
    lVar3 = FUN_144f3cf20((longlong)*(int *)(param_1 + 0x490) << 3,"win hashtable");
    *plVar6 = lVar3;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 2;
  } while (lVar5 < 0x20);
  if (sVar1 != 0) {
    plVar6 = (longlong *)(param_1 + 0xf8);
    do {
      iVar7 = iVar7 + -1;
      lVar5 = thunk_FUN_144f3cee0(0,(ulonglong)(*(int *)(param_1 + 0x4b4) + 1) << 3,"event table");
      *plVar6 = lVar5;
      if (lVar5 == 0) {
        FUN_144bd5aa0(1,"Unable to allocate events array for %d connections\n",
                      *(int *)(param_1 + 0x4b4) + 1);
        return 1;
      }
      *(undefined4 *)((longlong)plVar6 + 0x44) = 0;
      uVar4 = WSACreateEvent();
      puVar2 = (undefined8 *)*plVar6;
      plVar6 = plVar6 + 0x15;
      *puVar2 = uVar4;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  return 0;
}



// FUNCTION 144f3cb70 FUN_144f3cb70 body=3 status=ok
// SIG undefined FUN_144f3cb70(void)

void FUN_144f3cb70(void)

{
  return;
}



// FUNCTION 144f3cb80 FUN_144f3cb80 body=55 status=ok
// SIG undefined FUN_144f3cb80(void)

longlong FUN_144f3cb80(void)

{
  _FILETIME local_res8 [4];
  
  GetSystemTimeAsFileTime(local_res8);
  return (ulonglong)local_res8[0] / 10 + 0xffd6a169b779c000;
}



// FUNCTION 144f3cbc0 FUN_144f3cbc0 body=337 status=ok
// SIG undefined FUN_144f3cbc0(void)

void FUN_144f3cbc0(int param_1,undefined8 *param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  LPCWSTR lpWideCharStr;
  undefined4 uVar2;
  undefined1 auStackY_a8 [32];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  lpWideCharStr = (LPCWSTR)thunk_FUN_144f3cee0(0,param_4 * 2,"inet_ntop");
  if (lpWideCharStr == (LPCWSTR)0x0) {
    FUN_144bd5aa0(1,"Out of memory\n");
    goto LAB_144f3cd04;
  }
  if (param_1 == 2) {
    uVar2 = 0x10;
    local_58 = 0;
    local_60 = CONCAT44(*(undefined4 *)param_2,2);
LAB_144f3cc75:
    iVar1 = WSAAddressToStringW(&local_60,uVar2,0,lpWideCharStr);
    if (iVar1 != 0) goto LAB_144f3ccd0;
    WideCharToMultiByte(0,0,lpWideCharStr,param_4,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    if (param_1 == 0x17) {
      local_58 = *param_2;
      uStack_50 = *(undefined4 *)(param_2 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar2 = 0x1c;
      local_48 = 0;
      local_60 = 0x17;
      goto LAB_144f3cc75;
    }
    FUN_144bd5aa0(1,"Unsupported type\n");
LAB_144f3ccd0:
    uVar2 = Ordinal_111();
    FUN_144bd5aa0(1,"WSAAddressToString() : %d\n",uVar2);
  }
  thunk_FUN_144f3cee0(lpWideCharStr,0,"lws_free");
LAB_144f3cd04:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStackY_a8);
}



// FUNCTION 144f3cd20 FUN_144f3cd20 body=428 status=ok
// SIG undefined FUN_144f3cd20(void)

void FUN_144f3cd20(int param_1,LPCSTR param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  longlong lVar3;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_2[lVar3] != '\0');
  iVar2 = (int)lVar3 + 1;
  lpWideCharStr = (LPWSTR)thunk_FUN_144f3cee0(0,iVar2 * 2,"inet_pton");
  if (lpWideCharStr == (LPWSTR)0x0) {
    FUN_144bd5aa0(1,"Out of memory\n");
    goto LAB_144f3cebf;
  }
  iVar2 = MultiByteToWideChar(0,0,param_2,iVar2,lpWideCharStr,iVar2);
  if (iVar2 < 1) {
    FUN_144bd5aa0(1,"Failed to convert multi byte to wide char\n");
    thunk_FUN_144f3cee0(lpWideCharStr,0,"lws_free");
    goto LAB_144f3cebf;
  }
  if (param_1 == 2) {
    local_48 = 0;
    local_50 = 2;
    iVar2 = WSAStringToAddressW(lpWideCharStr,2,0,&local_50);
    if (iVar2 != 0) goto LAB_144f3ce8d;
    *param_3 = local_50._4_4_;
  }
  else {
    if (param_1 == 0x17) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = 0x17;
      iVar2 = WSAStringToAddressW(lpWideCharStr,0x17,0,&local_50);
      if (iVar2 == 0) {
        *param_3 = (undefined4)local_48;
        param_3[1] = local_48._4_4_;
        param_3[2] = (undefined4)uStack_40;
        param_3[3] = uStack_40._4_4_;
        goto LAB_144f3cea7;
      }
    }
    else {
      FUN_144bd5aa0(1,"Unsupported type\n");
    }
LAB_144f3ce8d:
    uVar1 = Ordinal_111();
    FUN_144bd5aa0(1,"WSAAddressToString() : %d\n",uVar1);
  }
LAB_144f3cea7:
  thunk_FUN_144f3cee0(lpWideCharStr,0,"lws_free");
LAB_144f3cebf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStackY_88);
}



// FUNCTION 144f3cee0 FUN_144f3cee0 body=38 status=ok
// SIG undefined FUN_144f3cee0(void)

void * FUN_144f3cee0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144f3ceed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return (void *)0x0;
}



// FUNCTION 144f3cf10 thunk_FUN_144f3cee0 body=7 status=ok
// SIG undefined thunk_FUN_144f3cee0(void)

void thunk_FUN_144f3cee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000144f3cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_14c70f430)();
  return;
}



// FUNCTION 144f3cf20 FUN_144f3cf20 body=62 status=ok
// SIG undefined FUN_144f3cf20(void)

void * FUN_144f3cf20(size_t param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR_FUN_14c70f430)(0,param_1,param_2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}



// FUNCTION 144f3cf60 FUN_144f3cf60 body=274 status=ok
// SIG undefined FUN_144f3cf60(void)

ulonglong FUN_144f3cf60(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_2 + 0x1ca) != '\0') {
    return 4;
  }
  if ((*(uint *)(param_2 + 0x70) & 0x10000000) == 0) {
    uVar2 = FUN_144f3d460(param_2,param_3);
    if ((int)uVar2 == 4) {
      if (*(short *)(param_2 + 0x70) == 0x207) {
        return 4;
      }
      iVar1 = FUN_144f42270(param_2,0xffffffffffffffff);
      if (iVar1 == 0) {
        return 4;
      }
      return 5;
    }
  }
  else {
    if (((*(ushort *)(param_3 + 10) & 9) != 0) && ((*(uint *)(param_2 + 0x1b8) & 0x40001) == 1)) {
      *(uint *)(param_2 + 0x1bc) = *(uint *)(param_2 + 0x1bc) | 0x10;
      thunk_FUN_144bd0b20(param_2,9,0);
      iVar1 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x2e,
                            *(undefined8 *)(param_2 + 0x130),0,0);
      return (ulonglong)((iVar1 != 0) + 4);
    }
    if (((*(ushort *)(param_3 + 10) & 2) != 0) &&
       (iVar1 = FUN_144bd83d0(param_2,param_3), iVar1 != 0)) {
      return 5;
    }
    iVar1 = FUN_144f45070(param_2,param_3,0);
    uVar2 = (ulonglong)(4 - (iVar1 != 0));
  }
  return uVar2;
}



// FUNCTION 144f3d0d0 FUN_144f3d0d0 body=181 status=ok
// SIG undefined FUN_144f3d0d0(void)

undefined8 FUN_144f3d0d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  FUN_144f43630(param_1,0);
  puVar2 = *(undefined8 **)(lVar3 + 0x118);
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_144f3d159:
      thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0x60),0,&DAT_1499809d8);
      *(undefined8 *)(param_1 + 0x60) = 0;
      return 0;
    }
    if ((*(char *)((longlong)puVar2 + 0x3b2) != '\0') && (puVar2[1] == param_1)) {
      FUN_144bd5aa0(1,"%s: ah leak: wsi %p\n","rops_destroy_role_h1",param_1);
      *(undefined1 *)((longlong)puVar2 + 0x3b2) = 0;
      puVar2[1] = 0;
      piVar1 = (int *)(lVar3 + 0x130);
      *piVar1 = *piVar1 + -1;
      goto LAB_144f3d159;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 144f3d190 FUN_144f3d190 body=716 status=ok
// SIG undefined FUN_144f3d190(void)

longlong FUN_144f3d190(longlong param_1,longlong param_2,ulonglong param_3)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong local_res10;
  
  uVar5 = *(uint *)(param_1 + 0x70) & 0xffff;
  local_res10 = param_2;
  if (uVar5 < 0x1f) {
    if (uVar5 == 0x1e) {
      FUN_144bd5aa0(1,"%s: Unhandled state LRS_DEAD_SOCKET\n","lws_read_h1");
      goto LAB_144f3d210;
    }
    if (uVar5 == 0x14) {
      return 0;
    }
    if (uVar5 == 0x15) {
LAB_144f3d2db:
      if (*(longlong *)(param_1 + 8) == 0) {
        FUN_144bd5aa0(1,"%s: LRS_HEADERS: NULL ah\n","lws_read_h1");
      }
      iVar4 = FUN_144f43d10(param_1,&local_res10,param_3);
      lVar3 = local_res10;
      if ((iVar4 != 0) || (iVar4 = FUN_144f3ff60(param_1,&local_res10,param_3), iVar4 != 0))
      goto LAB_144f3d210;
      if ((((*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_skt_14c70f620) ||
           ((*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_file_14c70f6d0 ||
            (param_3 = param_3 + (lVar3 - local_res10), (*(byte *)(param_1 + 0x1b8) & 1) == 0)))) ||
          (sVar1 = *(short *)(param_1 + 0x70), sVar1 == 0x14)) ||
         ((sVar1 == 0x15 || (sVar1 != 0x16)))) goto LAB_144f3d2b3;
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) != 0) goto LAB_144f3d394;
    }
    else {
      if (uVar5 != 0x16) {
        if (uVar5 == 0x1d) goto LAB_144f3d27b;
        goto LAB_144f3d25b;
      }
LAB_144f3d394:
      if ((param_3 == 0) || (uVar2 = *(ulonglong *)(param_1 + 0x50), uVar2 == 0))
      goto LAB_144f3d2b3;
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
      *(ulonglong *)(param_1 + 0x50) = uVar2 - param_3;
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                        (param_1,0xd,*(undefined8 *)(param_1 + 0x130),local_res10,param_3);
      if (iVar4 != 0) goto LAB_144f3d210;
      local_res10 = local_res10 + param_3;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_144bd6160(param_1,10,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x4b8));
        goto LAB_144f3d2b3;
      }
    }
    FUN_144bd6160(param_1,0,0);
    iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0xe,*(undefined8 *)(param_1 + 0x130),0,0);
    if (iVar4 == 0) {
      if ((*(byte *)(param_1 + 0x1b8) & 2) != 0) {
        *(undefined2 *)(param_1 + 0x70) = 0x117;
      }
      goto LAB_144f3d2b3;
    }
    goto LAB_144f3d210;
  }
  if (uVar5 == 0x10f) goto LAB_144f3d2b3;
  if (uVar5 == 0x117) {
    if (*(undefined ***)(param_1 + 0x68) != &PTR_DAT_14c6da110) {
      if ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) != 0) goto LAB_144f3d2b3;
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
      goto LAB_144f3d2db;
    }
LAB_144f3d27b:
    iVar4 = FUN_144f43d10(param_1,&local_res10);
    if ((iVar4 == 0) &&
       (((*(undefined ***)(param_1 + 0x68) != &PTR_DAT_14c6da110 ||
         ((*(uint *)(param_1 + 0x70) & 0x20000000) == 0)) ||
        (iVar4 = FUN_1452f5c90(param_1,&local_res10,param_3), -1 < iVar4)))) {
LAB_144f3d2b3:
      return local_res10 - param_2;
    }
  }
  else {
    if (0x118 < uVar5) {
      if (uVar5 < 0x11c) goto LAB_144f3d27b;
      if (uVar5 == 0x208) goto LAB_144f3d2b3;
    }
LAB_144f3d25b:
    FUN_144bd5aa0(1,"%s: Unhandled state %d\n","lws_read_h1");
  }
LAB_144f3d210:
  if ((*(byte *)(param_1 + 0x1bc) & 2) == 0) {
    thunk_FUN_144bd6da0(param_1,0,"lws_read_h1 bail");
  }
  return 0xffffffff;
}



// FUNCTION 144f3d460 FUN_144f3d460 body=695 status=ok
// SIG undefined FUN_144f3d460(void)

undefined8 FUN_144f3d460(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  undefined8 local_18;
  int local_10;
  
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar3 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (uVar3 == 0x10f) {
LAB_144f3d4cf:
    if ((*(byte *)(param_2 + 10) & 2) != 0) {
      iVar4 = thunk_FUN_144bd0b20(param_1,2);
      if (iVar4 != 0) {
        FUN_144bd5aa0(4,"%s a\n","lws_h1_server_socket_service");
LAB_144f3d6ff:
        thunk_FUN_144bd6da0(param_1,0,"server socket svc fail");
        goto LAB_144f3d710;
      }
      *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) & 0xfffffffe;
      if (*(short *)(param_1 + 0x70) == 0x10f) {
        *(undefined2 *)(param_1 + 0x70) = 0x117;
        iVar4 = thunk_FUN_144bd0b20(param_1,2);
        if (iVar4 != 0) goto LAB_144f3d6ff;
      }
      if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
        if (*(short *)(param_1 + 0x70) == 0x14) {
          iVar4 = FUN_144f3e700(param_1);
        }
        else if (*(int *)(param_1 + 0x1ac) == 0) {
          iVar4 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,0x10,
                                *(undefined8 *)(param_1 + 0x130),0,0);
        }
        else {
          iVar4 = FUN_144bd8e90(param_1,(ulonglong)*(uint *)(param_1 + 0x1a8) +
                                        *(longlong *)(param_1 + 0x148),*(int *)(param_1 + 0x1ac));
        }
        if (iVar4 < 0) goto LAB_144f3d6ff;
      }
    }
LAB_144f3d6ad:
    uVar6 = 4;
  }
  else {
    uVar8 = *(ushort *)(param_2 + 8) & *(ushort *)(param_2 + 10);
    if ((uVar8 & 9) == 0) goto LAB_144f3d4cf;
    uVar7 = *(uint *)(param_1 + 0x1b8);
    if (((uVar7 >> 0xe & 1) != 0) && ((uVar8 & 2) != 0)) {
      uVar7 = uVar7 & 0xffffbfff;
LAB_144f3d4c9:
      *(uint *)(param_1 + 0x1b8) = uVar7;
      goto LAB_144f3d4cf;
    }
    if (uVar3 == 0x208) goto LAB_144f3d6ad;
    if ((uVar3 != 0x117) && (2 < uVar3 - 0x14)) {
      if ((*(ushort *)(param_2 + 10) & 2) != 0) {
        uVar7 = uVar7 | 0x4000;
        goto LAB_144f3d4c9;
      }
      goto LAB_144f3d4cf;
    }
    if ((*(longlong *)(param_1 + 8) == 0) && (iVar4 = FUN_144f43530(param_1,0), iVar4 != 0))
    goto LAB_144f3d4cf;
    uVar5 = FUN_144bd8750(lVar2 + (longlong)cVar1 * 0xa8 + 0xa0,param_1,&local_18);
    if (local_10 == -4) goto LAB_144f3d4cf;
    if (local_10 == -1) goto LAB_144f3d6ff;
    if (local_10 == 0) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x4000000;
      thunk_FUN_144bd0b20(param_1,9);
      goto LAB_144f3d6ff;
    }
    uVar3 = *(uint *)(param_1 + 0x70) & 0xffff;
    if (uVar3 == 0x11c) {
      FUN_144bd5aa0(4,"%s: just ignoring\n","lws_h1_server_socket_service");
      goto LAB_144f3d4cf;
    }
    if (uVar3 == 0x14) {
      iVar4 = FUN_144bd8820(param_1,&local_18,0,uVar5);
      if (iVar4 != 0) {
        return 5;
      }
      goto LAB_144f3d4cf;
    }
    iVar4 = FUN_144f3d190(param_1,local_18,(longlong)local_10);
    if (-1 < iVar4) {
      iVar4 = FUN_144bd8820(param_1,&local_18,iVar4,uVar5);
      if (iVar4 != 0) {
        return 5;
      }
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (*(undefined ***)(param_1 + 0x68) != &PTR_DAT_14c70f4c0)) {
        thunk_FUN_144f43630(param_1,0);
      }
      if ((*(byte *)(param_2 + 10) & 2) != 0) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x4000;
      }
      goto LAB_144f3d6ad;
    }
LAB_144f3d710:
    uVar6 = 3;
  }
  return uVar6;
}



// FUNCTION 144f3d720 FUN_144f3d720 body=23 status=ok
// SIG undefined FUN_144f3d720(void)

undefined * FUN_144f3d720(uint param_1)

{
  if (0x57 < param_1) {
    return (undefined *)0x0;
  }
  return (&PTR_DAT_149c0b470)[(int)param_1];
}



// FUNCTION 144f3d740 FUN_144f3d740 body=516 status=ok
// SIG undefined FUN_144f3d740(void)

void FUN_144f3d740(longlong param_1,uint param_2,longlong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  size_t _Size;
  longlong *plVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  ulonglong local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = param_2 & 0xffff;
  plVar3 = (longlong *)&DAT_149e02088;
  if (uVar5 - 400 < 0x12) {
    plVar3 = (longlong *)(&PTR_s_Bad_Request_149c0b730)[uVar5 - 400];
  }
  if (uVar5 - 500 < 6) {
    plVar3 = (longlong *)(&PTR_s_Internal_Server_Error_149c0b7c0)[uVar5 - 500];
  }
  if (uVar5 == 100) {
    local_88 = (longlong *)"Continue";
  }
  else if (uVar5 == 200) {
    local_88 = (longlong *)&DAT_14b40a962;
  }
  else if (uVar5 == 0x130) {
    local_88 = (longlong *)"Not Modified";
  }
  else {
    local_88 = (longlong *)"Redirect";
    if (99 < uVar5 - 300) {
      local_88 = plVar3;
    }
  }
  if (*(uint *)(param_1 + 0x30) < 3) {
    pcVar4 = (&PTR_s_HTTP_1_0_149c0b7f0)[(int)*(uint *)(param_1 + 0x30)];
  }
  else {
    pcVar4 = "HTTP/1.0";
  }
  iVar2 = FUN_1424c2e40(local_78,"%s %u %s",pcVar4);
  _Size = (size_t)iVar2;
  if (*param_3 + _Size + 3 < param_4) {
    memcpy((void *)*param_3,local_78,_Size);
    *param_3 = *param_3 + _Size;
    *(undefined1 *)*param_3 = 0xd;
    *param_3 = *param_3 + 1;
    *(undefined1 *)*param_3 = 10;
    *param_3 = *param_3 + 1;
    for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 0x188);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(puVar1[3] + lVar6) != '\0');
      local_88 = param_3;
      local_80 = param_4;
      iVar2 = FUN_144f3d960(param_1,puVar1[2]);
      if (iVar2 != 0) goto LAB_144f3d937;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x488);
    if ((((lVar6 == 0) || ((param_2 >> 0x1e & 1) != 0)) ||
        (local_88 = param_3, local_80 = param_4,
        iVar2 = FUN_144f3d960(param_1,"server:",lVar6,
                              (int)*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e2)), iVar2 == 0))
       && ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x22c) & 0x8000) != 0)) {
      local_88 = param_3;
      local_80 = param_4;
      FUN_144f3d960(param_1,"Strict-Transport-Security:","max-age=15768000 ; includeSubDomains",0x24
                   );
    }
  }
LAB_144f3d937:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144f3d960 FUN_144f3d960 body=164 status=ok
// SIG undefined FUN_144f3d960(void)

undefined8
FUN_144f3d960(undefined8 param_1,char *param_2,void *param_3,int param_4,longlong *param_5,
             undefined1 *param_6)

{
  undefined1 *puVar1;
  size_t _Size;
  
  if (param_2 != (char *)0x0) {
    puVar1 = (undefined1 *)*param_5;
    for (; (puVar1 < param_6 && (*param_2 != '\0')); param_2 = param_2 + 1) {
      *(char *)*param_5 = *param_2;
      *param_5 = *param_5 + 1;
      puVar1 = (undefined1 *)*param_5;
    }
    if ((undefined1 *)*param_5 == param_6) {
      return 1;
    }
    *(undefined1 *)*param_5 = 0x20;
    *param_5 = *param_5 + 1;
  }
  _Size = (size_t)param_4;
  if ((undefined1 *)(*param_5 + _Size + 3) < param_6) {
    memcpy((void *)*param_5,param_3,_Size);
    *param_5 = *param_5 + _Size;
    *(undefined1 *)*param_5 = 0xd;
    *param_5 = *param_5 + 1;
    *(undefined1 *)*param_5 = 10;
    *param_5 = *param_5 + 1;
    return 0;
  }
  return 1;
}



// FUNCTION 144f3da10 FUN_144f3da10 body=34 status=ok
// SIG undefined FUN_144f3da10(void)

undefined8
FUN_144f3da10(undefined8 param_1,uint param_2,void *param_3,int param_4,longlong *param_5,
             undefined1 *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  size_t _Size;
  
  if ((0x57 < param_2) || (pcVar2 = (&PTR_DAT_149c0b470)[(int)param_2], pcVar2 == (char *)0x0)) {
    return 1;
  }
  if (pcVar2 != (char *)0x0) {
    puVar1 = (undefined1 *)*param_5;
    for (; (puVar1 < param_6 && (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
      *(char *)*param_5 = *pcVar2;
      *param_5 = *param_5 + 1;
      puVar1 = (undefined1 *)*param_5;
    }
    if ((undefined1 *)*param_5 == param_6) {
      return 1;
    }
    *(undefined1 *)*param_5 = 0x20;
    *param_5 = *param_5 + 1;
  }
  _Size = (size_t)param_4;
  if ((undefined1 *)(*param_5 + _Size + 3) < param_6) {
    memcpy((void *)*param_5,param_3,_Size);
    *param_5 = *param_5 + _Size;
    *(undefined1 *)*param_5 = 0xd;
    *param_5 = *param_5 + 1;
    *(undefined1 *)*param_5 = 10;
    *param_5 = *param_5 + 1;
    return 0;
  }
  return 1;
}



// FUNCTION 144f3da40 FUN_144f3da40 body=229 status=ok
// SIG undefined FUN_144f3da40(void)

void FUN_144f3da40(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  size_t _Size;
  char *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_1424c2e40(local_48,&DAT_149e1d7be,param_2);
  _Size = (size_t)iVar2;
  puVar1 = (undefined1 *)*param_3;
  for (pcVar3 = "content-length:"; (puVar1 < param_4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    *(char *)*param_3 = *pcVar3;
    *param_3 = *param_3 + 1;
    puVar1 = (undefined1 *)*param_3;
  }
  if ((undefined1 *)*param_3 == param_4) {
    bVar4 = true;
  }
  else {
    *(undefined1 *)*param_3 = 0x20;
    *param_3 = *param_3 + 1;
    bVar4 = (undefined1 *)(*param_3 + _Size + 3) < param_4;
    if (bVar4) {
      memcpy((void *)*param_3,local_48,_Size);
      *param_3 = *param_3 + _Size;
      *(undefined1 *)*param_3 = 0xd;
      *param_3 = *param_3 + 1;
      *(undefined1 *)*param_3 = 10;
      *param_3 = *param_3 + 1;
    }
    bVar4 = !bVar4;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 144f3db30 FUN_144f3db30 body=36 status=ok
// SIG undefined FUN_144f3db30(void)

undefined8 FUN_144f3db30(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if (param_3 - *param_2 < 3) {
    return 1;
  }
  *(undefined1 *)*param_2 = 0xd;
  *param_2 = *param_2 + 1;
  *(undefined1 *)*param_2 = 10;
  *param_2 = *param_2 + 1;
  return 0;
}



// FUNCTION 144f3db60 FUN_144f3db60 body=711 status=ok
// SIG undefined FUN_144f3db60(void)

void FUN_144f3db60(longlong param_1,int param_2,char **param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  char *pcVar10;
  undefined1 auStack_98 [32];
  char **local_78;
  char *local_70;
  char *local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_144bd68d0();
  lVar7 = *(longlong *)(((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + lVar3);
  pcVar10 = (char *)(lVar7 + 0x10);
  pcVar8 = (char *)(lVar7 + (ulonglong)*(uint *)(lVar3 + 0x4bc));
  local_68 = pcVar10;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_144bd5aa0(1,"%s: wsi not bound to vhost\n","lws_return_http_status");
  }
  else {
    lVar7 = -1;
    if ((((*(uint *)(param_1 + 0x1b8) & 0x40000000) == 0) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x108), lVar3 != 0)) &&
       (param_2 == 0x194)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(lVar3 + lVar9) != '\0');
      local_78 = &local_68;
      local_70 = pcVar8;
      iVar2 = FUN_144f3de40(param_1,0x12e);
      if (0 < iVar2) goto LAB_144f3de1a;
    }
    ppcVar6 = (char **)&DAT_149e02088;
    if (param_3 != (char **)0x0) {
      ppcVar6 = param_3;
    }
    local_68 = pcVar10;
    iVar2 = FUN_144f3d740(param_1,param_2,&local_68,pcVar8);
    if (iVar2 == 0) {
      pcVar4 = local_68;
      if (local_68 < pcVar8) {
        do {
          if (pcVar4[(longlong)"content-type:" - (longlong)local_68] == '\0') break;
          *pcVar4 = pcVar4[(longlong)"content-type:" - (longlong)local_68];
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar8);
      }
      if (pcVar4 == pcVar8) {
        bVar1 = true;
        pcVar5 = pcVar4;
      }
      else {
        *pcVar4 = ' ';
        pcVar5 = pcVar4 + 1;
        if (pcVar4 + 0xd < pcVar8) {
          builtin_strncpy(pcVar4 + 1,"text/html\r\n",0xb);
          bVar1 = false;
          pcVar5 = pcVar4 + 0xc;
        }
        else {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        iVar2 = FUN_1424c2e40(local_60,&DAT_149dfc0ac,param_2);
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(lVar7 + (longlong)ppcVar6) != '\0');
        iVar2 = FUN_1424c2e40(local_60,&DAT_149dfc0ac,iVar2 + 0x23 + (int)lVar7);
        if (pcVar5 < pcVar8) {
          lVar7 = (longlong)"content-length:" - (longlong)pcVar5;
          do {
            if (pcVar5[lVar7] == '\0') break;
            *pcVar5 = pcVar5[lVar7];
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 < pcVar8);
        }
        if (pcVar5 == pcVar8) {
          bVar1 = true;
        }
        else {
          *pcVar5 = ' ';
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar5 + iVar2;
          if (pcVar4 + 3 < pcVar8) {
            memcpy(pcVar5,local_60,(longlong)iVar2);
            bVar1 = false;
            pcVar4[0] = '\r';
            pcVar4[1] = '\n';
            pcVar5 = pcVar4 + 2;
          }
          else {
            bVar1 = true;
          }
        }
        if ((!bVar1) && (2 < (longlong)pcVar8 - (longlong)pcVar5)) {
          pcVar5[0] = '\r';
          pcVar5[1] = '\n';
          pcVar5 = pcVar5 + 2;
          local_78 = ppcVar6;
          iVar2 = FUN_144bd6620(pcVar5,pcVar8 + (-1 - (longlong)pcVar5),
                                "<html><body><h1>%u</h1>%s</body></html>",param_2);
          FUN_144bd8dc0(param_1,pcVar10,(longlong)(((int)pcVar5 + iVar2) - (int)pcVar10),3);
        }
      }
    }
  }
LAB_144f3de1a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 144f3de40 FUN_144f3de40 body=287 status=ok
// SIG undefined FUN_144f3de40(void)

undefined8
FUN_144f3de40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5,longlong param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_5;
  iVar2 = FUN_144f3d740(param_1,param_2,param_5,param_6);
  if ((((iVar2 == 0) &&
       (iVar2 = FUN_144f3d960(param_1,"location:",param_3,param_4,param_5,param_6), iVar2 == 0)) &&
      (iVar2 = FUN_144f3d960(param_1,"content-type:","text/html",9,param_5,param_6), iVar2 == 0)) &&
     ((iVar2 = FUN_144f3d960(param_1,"content-length:",&DAT_149dfd150,1,param_5,param_6), iVar2 == 0
      && (2 < param_6 - *param_5)))) {
    *(undefined1 *)*param_5 = 0xd;
    *param_5 = *param_5 + 1;
    *(undefined1 *)*param_5 = 10;
    *param_5 = *param_5 + 1;
    uVar3 = FUN_144bd8dc0(param_1,lVar1,*param_5 - lVar1,0x88);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 144f3df60 FUN_144f3df60 body=931 status=ok
// SIG undefined FUN_144f3df60(void)

char * FUN_144f3df60(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = -1;
  do {
    lVar9 = lVar13;
    lVar13 = lVar9 + 1;
  } while (*(char *)(param_1 + lVar13) != '\0');
  puVar10 = (undefined8 *)0x0;
  puVar11 = puVar10;
  if (param_2 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x30);
  }
  if ((int)lVar13 < 5) {
    return (char *)0x0;
  }
  iVar4 = (int)lVar9;
  lVar9 = (iVar4 + -3) + param_1;
  puVar7 = puVar10;
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)(puVar7 + 0x2938183c)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/x-icon";
    }
  }
  while (puVar7 = (undefined8 *)((longlong)puVar8 + 1),
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)(puVar8 + 0x2938183f)) {
    puVar8 = puVar7;
    if (puVar7 == (undefined8 *)0x5) {
      return "image/gif";
    }
  }
  lVar12 = (iVar4 + -2) + param_1;
  puVar7 = puVar10;
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar12 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x149c0c20c)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)&DAT_00000004) {
      return "text/javascript";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)(puVar8 + 0x29502f14)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/png";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x149c0c22c)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/jpeg";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar12 + (longlong)puVar8) == *(char *)((longlong)puVar8 + 0x149c0c244)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)&DAT_00000004) {
      return "application/gzip";
    }
  }
  while (puVar8 = (undefined8 *)((longlong)puVar7 + 1),
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x149c0c25c)) {
    puVar7 = puVar8;
    if (puVar8 == (undefined8 *)0x5) {
      return "image/jpeg";
    }
  }
  lVar12 = (iVar4 + -4) + param_1;
  puVar7 = puVar10;
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar12 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x149c0c264)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)&DAT_00000006) {
      return "text/html";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)((longlong)puVar8 + 0x149c0c26c)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "text/css";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x149c0c284)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "text/plain";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)((longlong)puVar8 + 0x149c0c29c)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/svg+xml";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)(puVar7 + 0x29381857)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "application/x-font-ttf";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)(puVar8 + 0x2938185b)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "application/font-woff";
    }
  }
  while (puVar8 = (undefined8 *)((longlong)puVar7 + 1),
        *(char *)(lVar12 + (longlong)puVar7) == *(char *)(puVar7 + 0x2938185f)) {
    puVar7 = puVar8;
    if (puVar8 == (undefined8 *)&DAT_00000006) {
      return "application/font-woff";
    }
  }
  while (puVar7 = (undefined8 *)((longlong)puVar10 + 1),
        *(char *)(lVar9 + (longlong)puVar10) == *(char *)(puVar10 + 0x29381860)) {
    puVar10 = puVar7;
    if (puVar7 == (undefined8 *)0x5) {
      return "application/xml";
    }
  }
  while( true ) {
    if (puVar11 == (undefined8 *)0x0) {
      return (char *)0x0;
    }
    pcVar3 = (char *)puVar11[2];
    if (*pcVar3 == '*') break;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar3[lVar9] != '\0');
    pcVar5 = (char *)(((int)lVar13 + param_1) - lVar9);
    lVar9 = (longlong)pcVar3 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar9];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) break;
    puVar11 = (undefined8 *)*puVar11;
  }
  return (char *)puVar11[3];
}



// FUNCTION 144f3e310 FUN_144f3e310 body=978 status=ok
// SIG undefined FUN_144f3e310(void)

void FUN_144f3e310(longlong param_1,undefined8 param_2,char *param_3,void *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  void *pvVar8;
  size_t _Size;
  longlong lVar9;
  char *pcVar10;
  undefined1 auStack_e8 [32];
  void **local_c8;
  longlong local_c0;
  void *local_b8;
  uint local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined8 local_a0;
  void *local_98;
  char local_90 [56];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = param_5;
  local_98 = param_4;
  lVar3 = FUN_144bd68d0();
  pcVar10 = "no-store";
  local_ac = 8;
  lVar9 = *(longlong *)(((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + lVar3);
  pvVar8 = (void *)(lVar9 + 0x10);
  local_b0 = 0;
  lVar9 = lVar9 + (ulonglong)*(uint *)(lVar3 + 0x4bc);
  uVar2 = 0x194;
  if ((*(uint *)(param_1 + 0x1b8) & 0x40000000) == 0) {
    uVar2 = 200;
  }
  local_b8 = pvVar8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar4 = (undefined8 *)
             FUN_144bd7bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),param_2,&local_a0);
    iVar1 = FUN_144f429b0(param_1,0x15);
    if (iVar1 == 0) {
      uVar7 = 0;
    }
    else {
      pcVar5 = (char *)FUN_144f438d0(param_1,0x15);
      pcVar5 = strstr(pcVar5,"gzip");
      uVar7 = 0;
      if (pcVar5 != (char *)0x0) {
        uVar7 = 0x1000000;
      }
    }
    local_b0 = local_b0 | uVar7;
    lVar3 = (*(code *)*puVar4)(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),param_2,
                               local_a0,&local_b0);
    *(longlong *)(param_1 + 0x28) = lVar3;
    param_4 = local_98;
    if (lVar3 == 0) {
      FUN_144f3db60(param_1,0x194,0);
      goto LAB_144f3e6d2;
    }
  }
  uVar6 = FUN_144bd6910(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  iVar1 = FUN_144f3d740(param_1,uVar2,&local_b8);
  if (iVar1 == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x28) + 0x28) & 0x3000000) == 0x3000000) {
      local_c8 = &local_b8;
      local_c0 = lVar9;
      iVar1 = FUN_144f3da10(param_1,0x2e,&DAT_149c0c318);
      if (iVar1 != 0) goto LAB_144f3e6d2;
    }
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_3[lVar3] != '\0');
      local_c8 = &local_b8;
      local_c0 = lVar9;
      iVar1 = FUN_144f3da10(param_1,0x1c,param_3);
      if (iVar1 != 0) goto LAB_144f3e6d2;
    }
    if ((*(uint *)(param_1 + 0x1b8) & 2) == 0) {
      if ((*(uint *)(param_1 + 0x1b8) >> 0xf & 1) == 0) {
        iVar1 = FUN_144f3da40(param_1,uVar6,&local_b8,lVar9);
      }
      else {
        local_c8 = &local_b8;
        local_c0 = lVar9;
        iVar1 = FUN_144f3da10(param_1,0x44,"chunked");
      }
      if (iVar1 != 0) goto LAB_144f3e6d2;
    }
    uVar2 = local_ac;
    if ((*(int *)(param_1 + 0x1b4) != 0) &&
       (uVar7 = *(uint *)(param_1 + 0x1b8), (uVar7 >> 0xb & 1) != 0)) {
      if ((uVar7 >> 0xc & 1) == 0) {
        pcVar10 = "no-cache";
        uVar2 = 8;
      }
      else {
        pcVar10 = local_90;
        uVar2 = FUN_1424c2e40(local_90,"%s max-age: %u",(&PTR_s_private_149c0c0a8)[uVar7 >> 0xd & 1]
                             );
      }
    }
    local_c8 = &local_b8;
    local_c0 = lVar9;
    iVar1 = FUN_144f3da10(param_1,0x18,pcVar10,uVar2);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x34) == 1) {
        local_c8 = &local_b8;
        local_c0 = lVar9;
        iVar1 = FUN_144f3da10(param_1,4,"keep-alive");
        if (iVar1 != 0) goto LAB_144f3e6d2;
      }
      if (param_4 != (void *)0x0) {
        _Size = (size_t)local_a8;
        if (lVar9 - (longlong)local_b8 < (longlong)_Size) goto LAB_144f3e6d2;
        memcpy(local_b8,param_4,_Size);
        local_b8 = (void *)((longlong)local_b8 + _Size);
      }
      iVar1 = FUN_144f3db30(param_1,&local_b8,lVar9);
      if (iVar1 == 0) {
        iVar1 = FUN_144bd8dc0(param_1,pvVar8,(longlong)local_b8 - (longlong)pvVar8,8);
        if ((longlong)iVar1 == (longlong)local_b8 - (longlong)pvVar8) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined2 *)(param_1 + 0x70) = 0x14;
          FUN_144bd0240(param_1);
        }
        else {
          FUN_144bd5aa0(1,"_write returned %d from %ld\n",iVar1,(int)local_b8 - (int)pvVar8);
        }
      }
    }
  }
LAB_144f3e6d2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144f3e700 FUN_144f3e700 body=739 status=ok
// SIG undefined FUN_144f3e700(void)

undefined8 FUN_144f3e700(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_res8;
  undefined4 uStackX_c;
  longlong local_38;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  lVar6 = *(longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x20)) {
      lVar1 = *(longlong *)((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xa8 + lVar6);
      lVar7 = lVar1 + 9;
      uVar8 = (ulonglong)(*(int *)(lVar6 + 0x4bc) - 9);
      if ((*(longlong *)(param_1 + 0x38) != 0) && (*(ulonglong *)(param_1 + 0x40) < uVar8)) {
        uVar8 = *(ulonglong *)(param_1 + 0x40);
      }
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x30);
      if ((uVar5 != 0) && (uVar5 < uVar8)) {
        uVar8 = uVar5;
      }
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x60);
      if (pcVar2 != (code *)0x0) {
        uVar5 = (*pcVar2)(param_1);
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar5 < uVar8) {
          uVar8 = uVar5;
        }
      }
      lVar10 = lVar7;
      if ((*(uint *)(param_1 + 0x1b8) & 0x8000) != 0) {
        lVar10 = lVar1 + 0x13;
        uVar8 = uVar8 - 0x8a;
      }
      iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x18))
                        (*(longlong *)(param_1 + 0x28),&local_res8,lVar10,uVar8);
      if (iVar3 < 0) {
LAB_144f3e93c:
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))(param_1 + 0x28);
        return 0xffffffff;
      }
      iVar3 = local_res8;
      if ((*(uint *)(param_1 + 0x1b8) & 0x8000) == 0) {
        iVar3 = ((int)lVar10 - (int)lVar7) + local_res8;
      }
      if (iVar3 != 0) {
        FUN_144bd6160(param_1,10,*(undefined4 *)(lVar6 + 0x4b8));
        if ((*(uint *)(param_1 + 0x1b8) >> 0x10 & 1) != 0) {
          local_2c = (int)uVar8 + 0x80;
          local_24 = *(uint *)(param_1 + 0x1b8) >> 0xf & 1;
          local_28 = (uint)((longlong)iVar3 + *(longlong *)(param_1 + 0x18) ==
                           *(longlong *)(param_1 + 0x20));
          local_38 = lVar10;
          local_30 = iVar3;
          iVar4 = FUN_144bd7680(*(undefined8 *)
                                 ((longlong)*(char *)(param_1 + 0x1c8) * 0x38 + 8 +
                                 *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170)),param_1,0x34,
                                *(undefined8 *)(param_1 + 0x130),&local_38,0);
          lVar7 = local_38;
          iVar3 = local_30;
          if (iVar4 < 0) goto LAB_144f3e93c;
        }
        uVar9 = 3;
        if (CONCAT44(uStackX_c,local_res8) + *(longlong *)(param_1 + 0x18) ==
            *(longlong *)(param_1 + 0x20)) {
          uVar9 = 7;
        }
        iVar4 = FUN_144bd8dc0(param_1,lVar7,(longlong)iVar3,uVar9);
        if ((iVar4 < 0) ||
           ((*(longlong *)(param_1 + 0x18) =
                  *(longlong *)(param_1 + 0x18) + CONCAT44(uStackX_c,local_res8), iVar4 != iVar3 &&
            (lVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x10))
                               (*(longlong *)(param_1 + 0x28),(longlong)(iVar4 - iVar3)),
            lVar6 == -1)))) goto LAB_144f3e93c;
      }
    }
    if ((*(int *)(param_1 + 0x1ac) == 0) &&
       (*(ulonglong *)(param_1 + 0x20) <= *(ulonglong *)(param_1 + 0x18))) {
      *(undefined2 *)(param_1 + 0x70) = 0x117;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))();
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
      if ((lVar6 != 0) &&
         (iVar3 = FUN_144bd7680(lVar6,param_1,0xf,*(undefined8 *)(param_1 + 0x130),0,0), iVar3 < 0))
      {
        if ((*(byte *)(param_1 + 0x1b8) & 2) != 0) {
          return 1;
        }
        return 0xffffffff;
      }
      return 1;
    }
  }
  else {
    iVar3 = FUN_144bd8e90(param_1,(ulonglong)*(uint *)(param_1 + 0x1a8) +
                                  *(longlong *)(param_1 + 0x148),*(int *)(param_1 + 0x1ac));
    if (iVar3 < 0) goto LAB_144f3e93c;
  }
  FUN_144bd0240(param_1);
  return 0;
}



// FUNCTION 144f3e9f0 FUN_144f3e9f0 body=426 status=ok
// SIG undefined FUN_144f3e9f0(void)

undefined8 FUN_144f3e9f0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_144bd5aa0(4,"%s: deferring due to partial\n","lws_http_transaction_completed");
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 2) != 0) {
      return 0;
    }
    if ((uVar1 >> 0x1a & 1) == 0) {
      if (*(int *)(param_1 + 0x34) == 1) {
        iVar2 = FUN_144bd7950();
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
          *(undefined2 *)(param_1 + 0x70) = 0x10f;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
          FUN_144bd6160(param_1);
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar3 = FUN_144bd64e0(param_1 + 0x140);
            if (lVar3 != 0) {
              FUN_144f43530(param_1,0);
            }
          }
          else {
            lVar3 = FUN_144bd64e0(param_1 + 0x140);
            if (lVar3 == 0) {
              thunk_FUN_144f43630(param_1,1);
              if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x208) != 0) {
                iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x4c8);
                if ((iVar2 != 0) && (*(int *)(*(longlong *)(param_1 + 0x78) + 0x4cc) == iVar2)) {
                  return 1;
                }
              }
            }
            else {
              thunk_FUN_144f437c0(param_1,0);
              FUN_144bd6160(param_1,0x19,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x240));
            }
            if (*(longlong *)(param_1 + 8) != 0) {
              *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3b5) = 0;
              FUN_144bd0240(param_1);
              return 0;
            }
          }
          FUN_144bd0240(param_1);
          return 0;
        }
      }
      else {
        FUN_144bd5aa0(4,"%s: %p: close connection\n","lws_http_transaction_completed",param_1);
      }
    }
    return 1;
  }
  FUN_144bd5aa0(4,"%s: ignoring, ah parsing incomplete\n","lws_http_transaction_completed");
  return 0;
}



// FUNCTION 144f3eba0 FUN_144f3eba0 body=1005 status=ok
// SIG undefined FUN_144f3eba0(void)

longlong FUN_144f3eba0(longlong param_1,byte param_2,undefined8 param_3,longlong param_4,
                      longlong param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x148);
  iVar8 = -1;
  bVar2 = false;
  if (param_5 != 0) {
    iVar8 = (int)*(char *)(param_5 + 0x1c7);
  }
  lVar4 = FUN_144f3f800(param_1,iVar8);
  if (lVar4 == 0) {
    if ((param_2 & 10) == 2) {
      Ordinal_3(param_3);
    }
    return 0;
  }
  if (param_5 != 0) {
    *(longlong *)(lVar4 + 0x88) = param_5;
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_5 + 0x90);
    *(longlong *)(param_5 + 0x90) = lVar4;
    if ((param_2 & 8) != 0) {
      *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) | 0x800000;
    }
  }
  *(undefined8 *)(lVar4 + 0x178) = param_3;
  if (param_4 != 0) {
    lVar5 = FUN_144bd5ee0(*(undefined8 *)(lVar4 + 0x80),param_4);
    *(longlong *)(lVar4 + 0xa0) = lVar5;
    if (lVar5 == 0) {
      FUN_144bd5aa0(1,"Protocol %s not enabled on vhost %s\n",param_4,
                    *(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x160));
      goto LAB_144f3ed1a;
    }
    iVar8 = FUN_144bd76e0(lVar4);
    if (iVar8 == 0) {
      if ((param_2 & 8) == 0) goto LAB_144f3ede6;
      *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
      FUN_144bd7950(lVar4,*(undefined8 *)(lVar4 + 0xa0));
      FUN_144bd7670(lVar4,0x20000000,0x117,&PTR_DAT_14c6da110);
      lVar6 = FUN_144f3cf20(200,"ws struct");
      *(longlong *)(lVar4 + 0x60) = lVar6;
      if (lVar6 != 0) {
        FUN_144bd4c80(lVar4);
        return lVar4;
      }
      pcVar9 = "OOM\n";
    }
    else {
      pcVar9 = "OOM trying to get user_space\n";
    }
    FUN_144bd5aa0(4,pcVar9);
LAB_144f3ed1a:
    FUN_144bd5aa0(4,"%s: exiting on bail\n","lws_adopt_descriptor_vhost");
    if (param_5 != 0) {
      *(undefined8 *)(param_5 + 0x90) = *(undefined8 *)(lVar4 + 0x98);
    }
    if (*(longlong *)(lVar4 + 0x130) != 0) {
      thunk_FUN_144f3cee0(*(longlong *)(lVar4 + 0x130),0,"lws_free");
    }
    thunk_FUN_144f3cee0(lVar4,0,"lws_free");
    Ordinal_3(param_3);
    return 0;
  }
  if ((param_2 & 1) == 0) {
    FUN_144bd7950(lVar4,(ulonglong)*(byte *)(param_1 + 0x24d) * 0x38 +
                        *(longlong *)(param_1 + 0x170));
    FUN_144bd7670(lVar4,0,0x117,&PTR_s_raw_skt_14c70f620);
  }
  else {
    *(ulonglong *)(lVar4 + 0xa0) =
         (ulonglong)*(byte *)(param_1 + 0x24c) * 0x38 + *(longlong *)(param_1 + 0x170);
    *(undefined ***)(lVar4 + 0x68) = &PTR_DAT_14c70f4c0;
  }
LAB_144f3ede6:
  bVar10 = param_2 & 2;
  if (bVar10 != 0) {
    if ((param_2 & 0x10) != 0) {
      uVar7 = thunk_FUN_144f3cee0(0,0x28,"udp struct");
      *(undefined8 *)(lVar4 + 0xe8) = uVar7;
    }
    if ((param_2 & 1) != 0) {
      FUN_144bd6160(lVar4,3,*(undefined4 *)(lVar6 + 0x4b8));
    }
  }
  iVar8 = 0x13;
  bVar11 = param_2 & 1;
  if (bVar11 == 0) {
    iVar8 = 0x3f - (uint)(bVar10 != 0);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x80) + 0x208) == 0) || ((param_2 & 6) != 6)) {
    if (bVar11 == 0) {
      uVar7 = 0;
      uVar12 = 0x117;
      if (bVar10 == 0) {
        ppuVar13 = &PTR_s_raw_file_14c70f6d0;
      }
      else {
        ppuVar13 = &PTR_s_raw_skt_14c70f620;
      }
    }
    else {
      ppuVar13 = &PTR_DAT_14c70f4c0;
      uVar7 = 0x20000000;
      uVar12 = 0x15;
    }
    FUN_144bd7670(lVar4,uVar7,uVar12,ppuVar13);
  }
  else if (bVar11 == 0) {
    FUN_144bd7670(lVar4,0,0x207,&PTR_s_raw_skt_14c70f620);
    bVar2 = true;
  }
  else {
    FUN_144bd7670(lVar4,0x20000000,0x207,&PTR_DAT_14c70f4c0);
    bVar2 = true;
  }
  pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x3d0) + 0x48);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(lVar4);
  }
  if (bVar2) {
    iVar3 = FUN_144f42270(lVar4,param_3);
    if (iVar3 != 0) goto LAB_144f3ef07;
  }
  else {
    iVar3 = FUN_144bd0520(lVar6,lVar4);
    if (iVar3 != 0) {
      FUN_144bd5aa0(1,"%s: fail inserting socket\n","lws_adopt_descriptor_vhost");
      goto LAB_144f3ef07;
    }
  }
  iVar8 = (**(code **)(*(longlong *)(lVar4 + 0xa0) + 8))
                    (lVar4,iVar8,*(undefined8 *)(lVar4 + 0x130),0,0);
  if (iVar8 == 0) {
    if (bVar11 != 0) {
      FUN_144f43530(lVar4,0);
    }
    thunk_FUN_144f3c2f0(lVar4);
    return lVar4;
  }
LAB_144f3ef07:
  if (bVar10 != 0) {
    thunk_FUN_144bd6da0(lVar4,0,"adopt skt fail");
  }
  return 0;
}



// FUNCTION 144f3ef90 FUN_144f3ef90 body=2121 status=ok
// SIG undefined FUN_144f3ef90(void)

void FUN_144f3ef90(longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  char **ppcVar13;
  longlong lVar14;
  undefined1 auStack_208 [32];
  char **local_1e8;
  char *local_1e0;
  char *local_1d8;
  int local_1d0;
  int local_1c8 [2];
  char *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined1 local_1a8 [5];
  char local_1a3;
  char local_1a1;
  char local_198 [19];
  undefined1 local_185;
  undefined1 local_180 [40];
  char local_158 [5];
  undefined1 local_153;
  undefined1 local_152 [154];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar14 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  local_1d8 = (char *)0x0;
  local_1c8[0] = 0;
  uVar3 = FUN_144f40cf0(param_1,&local_1d8,local_1c8);
  pcVar9 = local_1d8;
  if (uVar3 < 8) {
    if ((local_1d8 == (char *)0x0) || (*local_1d8 != '/')) {
      uVar7 = 0x193;
LAB_144f3f7ae:
      FUN_144f3db60(param_1,uVar7,0);
    }
    else {
      if ((*(longlong *)(param_1 + 0x68) != 0) &&
         (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x10), pcVar2 != (code *)0x0)) {
        iVar4 = (*pcVar2)(param_1);
        if (iVar4 == 6) goto LAB_144f3f7ca;
        if (iVar4 == 8) goto LAB_144f3f7b9;
      }
      iVar4 = FUN_144bd76e0(param_1);
      if (iVar4 == 0) {
        *(undefined8 *)(param_1 + 0x48) = 0;
        iVar4 = FUN_144f429b0(param_1,1);
        if (((iVar4 != 0) || (iVar4 = FUN_144f429b0(param_1,0x49), iVar4 != 0)) ||
           (iVar4 = FUN_144f429b0(param_1,0x4a), iVar4 != 0)) {
          *(undefined8 *)(param_1 + 0x48) = 0x6400000;
        }
        iVar4 = FUN_144f429b0(param_1,0x1b);
        if (iVar4 != 0) {
          FUN_144f429f0(param_1,local_180,0x1f);
          uVar7 = atoll(local_180);
          *(undefined8 *)(param_1 + 0x48) = uVar7;
        }
        if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
          iVar4 = FUN_144f429b0(param_1,0xf);
          uVar6 = 0;
          if (((7 < iVar4) && (FUN_144f429f0(param_1,local_1a8,9), uVar6 = 0, local_1a3 == '1')) &&
             (uVar6 = 0, local_1a1 == '1')) {
            uVar6 = 1;
          }
          *(undefined4 *)(param_1 + 0x30) = uVar6;
          iVar4 = FUN_144f429b0(param_1,4);
          uVar11 = uVar6;
          if (iVar4 != 0) {
            FUN_144f429f0(param_1,local_198,0x13);
            local_185 = 0;
            iVar4 = _stricmp(local_198,"keep-alive");
            uVar11 = 1;
            if ((iVar4 != 0) && (iVar4 = _stricmp(local_198,"close"), uVar11 = uVar6, iVar4 == 0)) {
              uVar11 = 0;
            }
          }
          *(undefined4 *)(param_1 + 0x34) = uVar11;
        }
        else {
          *(undefined4 *)(param_1 + 0x30) = 2;
        }
        iVar4 = local_1c8[0];
        ppcVar13 = (char **)(longlong)local_1c8[0];
        local_1e8 = ppcVar13;
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                          (param_1,0x12,*(undefined8 *)(param_1 + 0x130),pcVar9);
        if (iVar5 != 0) goto LAB_144f3f7ca;
        FUN_144bd6160(param_1,10,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x4b8));
        if ((*(byte *)(param_1 + 0x174) & 1) != 0) {
          lVar14 = *(longlong *)(lVar14 + 0xa8);
          local_1d8 = (char *)(lVar14 + 0x10);
          pcVar12 = (char *)(lVar14 + 0x210);
          iVar4 = FUN_144f429b0(param_1,3);
          if (iVar4 != 0) {
            uVar7 = FUN_144f438d0(param_1,3);
            uVar6 = FUN_1424c2e40(pcVar12,"https://%s/",uVar7);
LAB_144f3f22c:
            local_1e8 = &local_1d8;
            local_1e0 = pcVar12;
            iVar4 = FUN_144f3de40(param_1,0x12d,pcVar12,uVar6);
            if (-1 < iVar4) {
              FUN_144f3e9f0(param_1);
              goto LAB_144f3f7ca;
            }
          }
          goto LAB_144f3f7b9;
        }
        lVar8 = FUN_144f40330(param_1,pcVar9,iVar4);
        if (lVar8 == 0) {
          iVar4 = FUN_144bd7950(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x170));
          if (iVar4 != 0) goto LAB_144f3f7ca;
          *(undefined2 *)(param_1 + 0x70) = 0x118;
LAB_144f3f28c:
          local_1e8 = ppcVar13;
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                            (param_1,0xc,*(undefined8 *)(param_1 + 0x130),pcVar9);
          goto LAB_144f3f2ad;
        }
        pcVar12 = pcVar9 + *(byte *)(lVar8 + 0x51);
        if (((1 < *(byte *)(lVar8 + 0x51)) || ((byte)(*(char *)(lVar8 + 0x50) - 4U) < 2)) &&
           (((*pcVar12 != '/' || ((byte)(*(char *)(lVar8 + 0x50) - 4U) < 2)) &&
            ((bVar1 = *(byte *)(lVar8 + 0x50), bVar1 != 3 && (bVar1 != 6)))))) {
          lVar14 = *(longlong *)(lVar14 + 0xa8);
          local_1d8 = (char *)(lVar14 + 0x10);
          pcVar12 = (char *)(lVar14 + 0x210);
          if ((byte)(bVar1 - 4) < 2) {
            local_1e8 = *(char ***)(lVar8 + 0x10);
            uVar6 = FUN_144bd6620(pcVar12,0x100,&DAT_14ab676e8,(&PTR_s_http____149c0c098)[bVar1 & 1]
                                 );
          }
          else {
            iVar4 = FUN_144f429b0(param_1,3);
            if (iVar4 == 0) {
              iVar4 = FUN_144f429b0(param_1,0x23);
              if (iVar4 == 0) goto LAB_144f3f7b9;
              uVar7 = 0x23;
            }
            else {
              uVar7 = 3;
            }
            uVar7 = FUN_144f438d0(param_1,uVar7);
            iVar4 = FUN_144bd6900(param_1);
            local_1e0 = pcVar9;
            local_1e8 = (char **)uVar7;
            uVar6 = FUN_144bd6620(pcVar12,0x100,"%s%s%s/",(&PTR_s_http____149c0c098)[iVar4 != 0]);
          }
          FUN_144f40c60(pcVar12);
          goto LAB_144f3f22c;
        }
        if (*(longlong *)(lVar8 + 0x58) != 0) {
          iVar5 = FUN_144f429b0(param_1,0x19);
          if (iVar5 == 0) {
LAB_144f3f570:
            FUN_144f40b50(param_1);
            goto LAB_144f3f7ca;
          }
          iVar5 = FUN_144f429f0(param_1,local_158,0xa0,0x19);
          if (iVar5 < 7) {
            pcVar9 = "b64 auth too long\n";
LAB_144f3f523:
            FUN_144bd5aa0(1,pcVar9);
          }
          else {
            local_153 = 0;
            iVar5 = _stricmp(local_158,"Basic");
            if (iVar5 == 0) {
              iVar5 = FUN_144f455f0(local_152,local_b8,0x78);
              if (-1 < iVar5) {
                iVar5 = FUN_144f40a30(*(undefined8 *)(lVar8 + 0x58),local_b8,iVar5);
                if (iVar5 != 0) goto LAB_144f3f57a;
                FUN_144bd5aa0(1,"basic auth lookup failed\n");
                goto LAB_144f3f570;
              }
              pcVar9 = "plain auth too long\n";
              goto LAB_144f3f523;
            }
            FUN_144bd5aa0(1,"auth missing basic: %s\n",local_158);
          }
          FUN_144f3db60(param_1,0x193,0);
          FUN_144f3e9f0(param_1);
          goto LAB_144f3f7ca;
        }
LAB_144f3f57a:
        if ((*(char *)(lVar8 + 0x50) == '\x06') || (*(longlong *)(lVar8 + 0x20) != 0)) {
          lVar14 = *(longlong *)(lVar8 + 0x10);
          if (*(longlong *)(lVar8 + 0x20) != 0) {
            lVar14 = *(longlong *)(lVar8 + 0x20);
          }
          lVar14 = FUN_144bd5ee0(*(undefined8 *)(param_1 + 0x80),lVar14);
          if (lVar14 == 0) {
            FUN_144bd5aa0(1,"Unable to find plugin \'%s\'\n",*(undefined8 *)(lVar8 + 0x10));
            goto LAB_144f3f7ca;
          }
          iVar5 = FUN_144bd7950(param_1,lVar14);
          if (iVar5 != 0) goto LAB_144f3f7ca;
          local_1c0 = pcVar9;
          local_1b8 = iVar4;
          local_1b4 = *(undefined4 *)(lVar8 + 0x48);
          local_1b0 = 0;
          local_1e8 = (char **)0x0;
          iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                            (param_1,0x33,*(undefined8 *)(param_1 + 0x130),&local_1c0);
          if (iVar5 != 0) {
            uVar7 = 0x191;
            goto LAB_144f3f7ae;
          }
          if ((int)local_1b0 != 0) goto LAB_144f3f7ca;
          if (*(longlong *)(lVar8 + 0x28) != 0) {
            local_1e8 = (char **)0x0;
            iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                              (param_1,0x38,*(undefined8 *)(param_1 + 0x130));
            if (iVar5 != 0) goto LAB_144f3f7ca;
          }
          iVar5 = FUN_144f429b0(param_1,1);
          if (iVar5 == 0) goto LAB_144f3f6a4;
          local_1e8 = (char **)(longlong)(int)(iVar4 - (uint)*(byte *)(lVar8 + 0x51));
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                            (param_1,0xc,*(undefined8 *)(param_1 + 0x130),
                             pcVar9 + *(byte *)(lVar8 + 0x51));
LAB_144f3f2ad:
          if (iVar4 != 0) goto LAB_144f3f7ca;
        }
        else {
LAB_144f3f6a4:
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (pcVar12[lVar14] != '\0');
          if ((*pcVar12 == '\0') || (((int)lVar14 == 1 && (*pcVar12 == '/')))) {
            pcVar12 = *(char **)(lVar8 + 0x18);
          }
          *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar8 + 0x44);
          pcVar10 = "index.html";
          if (pcVar12 != (char *)0x0) {
            pcVar10 = pcVar12;
          }
          *(uint *)(param_1 + 0x1b8) =
               *(uint *)(param_1 + 0x1b8) ^
               (*(int *)(lVar8 + 0x4c) << 0xb ^ *(uint *)(param_1 + 0x1b8)) & 0x800;
          uVar3 = (*(int *)(lVar8 + 0x4c) << 0xb ^ *(uint *)(param_1 + 0x1b8)) & 0x1000 ^
                  *(uint *)(param_1 + 0x1b8);
          *(uint *)(param_1 + 0x1b8) = uVar3;
          *(uint *)(param_1 + 0x1b8) = (*(int *)(lVar8 + 0x4c) << 0xb ^ uVar3) & 0x2000 ^ uVar3;
          if ((*(char *)(lVar8 + 0x50) != '\x02') ||
             (iVar5 = FUN_144f40420(param_1,pcVar10,*(undefined8 *)(lVar8 + 0x10),lVar8), iVar5 != 0
             )) {
            if (*(longlong *)(lVar8 + 0x20) == 0) goto LAB_144f3f28c;
            lVar14 = FUN_144bd5ee0(*(undefined8 *)(param_1 + 0x80));
            iVar5 = FUN_144bd7950(param_1,lVar14);
            if (iVar5 != 0) goto LAB_144f3f7ca;
            local_1e8 = (char **)(longlong)(int)(iVar4 - (uint)*(byte *)(lVar8 + 0x51));
            iVar4 = (**(code **)(lVar14 + 8))
                              (param_1,0xc,*(undefined8 *)(param_1 + 0x130),
                               pcVar9 + *(byte *)(lVar8 + 0x51));
            goto LAB_144f3f2ad;
          }
        }
        if ((*(short *)(param_1 + 0x70) != 0x14) && (*(longlong *)(param_1 + 0x48) != 0)) {
          *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x48);
          *(undefined2 *)(param_1 + 0x70) = 0x16;
          local_1d0 = FUN_144bd64e0(param_1 + 0x140,&local_1d8);
          while (local_1d0 != 0) {
            FUN_144bd5aa0(4,"%s: consuming %d\n","lws_http_action",local_1d0);
            iVar4 = FUN_144f3d190(param_1,local_1d8,(longlong)local_1d0);
            if ((iVar4 < 0) || (iVar4 = FUN_144bd8820(param_1,&local_1d8,iVar4,1), iVar4 != 0))
            break;
            local_1d0 = FUN_144bd64e0(param_1 + 0x140,&local_1d8);
          }
        }
        goto LAB_144f3f7ca;
      }
    }
  }
LAB_144f3f7b9:
  thunk_FUN_144f43630(param_1,1);
LAB_144f3f7ca:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_208);
}



// FUNCTION 144f3f800 FUN_144f3f800 body=376 status=ok
// SIG undefined FUN_144f3f800(void)

longlong FUN_144f3f800(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_2 < 0) {
    lVar4 = *(longlong *)(param_1 + 0x148);
    uVar6 = 0xffffffff;
    param_2 = -1;
    iVar3 = 0;
    if (0 < *(short *)(lVar4 + 0x4dc)) {
      puVar5 = (uint *)(lVar4 + 0x13c);
      do {
        uVar2 = *puVar5;
        if ((uVar2 != *(int *)(lVar4 + 0x4b4) - 1U) && (uVar2 < uVar6)) {
          param_2 = iVar3;
          uVar6 = uVar2;
        }
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 0x2a;
      } while (iVar3 < *(short *)(lVar4 + 0x4dc));
    }
    if (param_2 < 0) {
      FUN_144bd5aa0(1,"no space for new conn\n");
      return 0;
    }
  }
  lVar4 = FUN_144f3cf20(0x1d0,"new server wsi");
  if (lVar4 == 0) {
    FUN_144bd5aa0(1,"Out of memory for new connection\n");
    return 0;
  }
  *(char *)(lVar4 + 0x1c7) = (char)param_2;
  *(longlong *)(lVar4 + 0x80) = param_1;
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_1 + 0x148);
  *(undefined2 *)(lVar4 + 0x70) = 0x200;
  *(undefined1 *)(lVar4 + 0x1c6) = 0;
  *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) & 0xfffffdfe | 0x100;
  *(undefined4 *)(lVar4 + 0x170) = *(undefined4 *)(param_1 + 0x208);
  *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(lVar4 + 0x130) = 0;
  *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
  *(undefined4 *)(lVar4 + 0x1a0) = 0xffffffff;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x148) + 0x4a8);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*(longlong *)(param_1 + 0x170) + 8))(lVar4,0x1d,0,0,0);
  return lVar4;
}



// FUNCTION 144f3f980 FUN_144f3f980 body=1141 status=ok
// SIG undefined FUN_144f3f980(void)

undefined8 FUN_144f3f980(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0] = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_1 + 2);
    *(undefined4 *)(param_2 + 0x228) = *param_1;
  }
  iVar7 = *(int *)(param_2 + 0x228);
  if (iVar7 + 2U < 2) {
    return 0;
  }
  for (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x148) + 0x378); lVar9 != 0;
      lVar9 = *(longlong *)(lVar9 + 0x150)) {
    if (*(int *)(lVar9 + 0x228) == iVar7) {
      pcVar12 = *(char **)(param_2 + 0x168);
      if (pcVar12 == (char *)0x0) {
        if (*(longlong *)(lVar9 + 0x168) == 0) {
LAB_144f3fa1b:
          if (*(longlong *)(lVar9 + 0x158) != 0) {
            FUN_144bd5aa0(4," using listen skt from vhost %s\n",*(undefined8 *)(lVar9 + 0x160));
            return 0;
          }
        }
      }
      else if (*(longlong *)(lVar9 + 0x168) != 0) {
        lVar10 = *(longlong *)(lVar9 + 0x168) - (longlong)pcVar12;
        do {
          cVar3 = *pcVar12;
          cVar4 = pcVar12[lVar10];
          if (cVar3 != cVar4) break;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        if (cVar3 == cVar4) goto LAB_144f3fa1b;
      }
    }
  }
  iVar13 = 0;
  if (*(longlong *)(param_2 + 0x168) == 0) goto LAB_144f3fa90;
  iVar7 = FUN_144bd69e0(param_2,0xffffffffffffffff,iVar7);
LAB_144f3fc6d:
  lVar9 = *(longlong *)(param_2 + 0x148);
  plVar2 = (longlong *)(lVar9 + 0x380);
  lVar10 = *(longlong *)(lVar9 + 0x380);
  while (lVar10 != 0) {
    lVar10 = *plVar2;
    if (iVar7 < 0) {
      if (lVar10 == param_2) goto LAB_144f3fccd;
    }
    else if (lVar10 == param_2) {
      *plVar2 = *(longlong *)(param_2 + 0x198);
      *(undefined8 *)(param_2 + 0x198) = 0;
      goto LAB_144f3fccd;
    }
    plVar2 = (longlong *)(lVar10 + 0x198);
    lVar10 = *plVar2;
  }
  if (iVar7 < 0) {
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(lVar9 + 0x380);
    *(longlong *)(lVar9 + 0x380) = param_2;
  }
LAB_144f3fccd:
  if (iVar7 == -2) {
    if (param_1 == (undefined4 *)0x0) {
      return 1;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x228);
    pcVar12 = "VH %s: iface %s port %d NOT USABLE\n";
    uVar11 = *(undefined8 *)(param_2 + 0x168);
    uVar15 = *(undefined8 *)(param_2 + 0x160);
  }
  else {
    iVar13 = 0;
    if (iVar7 != -1) {
LAB_144f3fa90:
      do {
        if (0 < iVar13) {
          return 0;
        }
        if (((*(byte *)(*(longlong *)(param_2 + 0x148) + 0x4b0) & 0x20) != 0) ||
           (uVar11 = 0x17, (*(byte *)(param_2 + 0x22c) & 0x20) != 0)) {
          uVar11 = 2;
        }
        lVar9 = Ordinal_23(uVar11,1);
        if (lVar9 == -1) {
          FUN_144bd5aa0(1,"ERROR opening socket\n");
          return 1;
        }
        puVar14 = &DAT_fffffffb;
        if ((*(uint *)(param_2 + 0x22c) & 0x800000) != 0) {
          puVar14 = (undefined1 *)0x4;
        }
        iVar7 = Ordinal_21(lVar9,0xffff,puVar14,local_res8,4);
        if (iVar7 < 0) {
          pcVar12 = "reuseaddr failed\n";
LAB_144f3fdbd:
          uVar11 = 1;
LAB_144f3fdc2:
          FUN_144bd5aa0(uVar11,pcVar12);
LAB_144f3fdc7:
          Ordinal_3(lVar9);
          return 0xffffffff;
        }
        if ((((*(byte *)(*(longlong *)(param_2 + 0x148) + 0x4b0) & 0x20) == 0) &&
            (uVar5 = *(uint *)(param_2 + 0x22c), (uVar5 & 0x20) == 0)) && ((uVar5 >> 0x10 & 1) != 0)
           ) {
          local_res10[0] = uVar5 >> 0x11 & 1;
          iVar7 = Ordinal_21(lVar9,0x29,0x1b,local_res10,4);
          if (iVar7 < 0) goto LAB_144f3fdc7;
        }
        FUN_144f3c110(param_2,lVar9);
        iVar7 = FUN_144bd69e0(param_2,lVar9,*(undefined4 *)(param_2 + 0x228),
                              *(undefined8 *)(param_2 + 0x168));
        if (iVar7 < 0) goto LAB_144f3fc64;
        *(int *)(param_2 + 0x228) = iVar7;
        lVar10 = FUN_144f3cf20(0x1d0,"listen wsi");
        if (lVar10 == 0) {
          pcVar12 = "Out of mem\n";
          goto LAB_144f3fdbd;
        }
        *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(param_2 + 0x148);
        *(longlong *)(lVar10 + 0x178) = lVar9;
        FUN_144bd7670(lVar10,0,0x200,&PTR_s_listen_14c7328f0);
        uVar11 = *(undefined8 *)(param_2 + 0x170);
        *(uint *)(lVar10 + 0x1b8) = *(uint *)(lVar10 + 0x1b8) | 0x20;
        *(undefined8 *)(lVar10 + 0xa0) = uVar11;
        *(char *)(lVar10 + 0x1c7) = (char)iVar13;
        *(longlong *)(lVar10 + 0x80) = param_2;
        pcVar6 = *(code **)(*(longlong *)(*(longlong *)(lVar10 + 0x78) + 0x3d0) + 0x20);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(lVar10);
        }
        iVar7 = FUN_144bd0520(*(undefined8 *)(param_2 + 0x148),lVar10);
        if (iVar7 != 0) {
          pcVar12 = "inserting wsi socket into fds failed\n";
          uVar11 = 4;
          goto LAB_144f3fdc2;
        }
        piVar1 = (int *)(*(longlong *)(param_2 + 0x148) + 0x4a8);
        *piVar1 = *piVar1 + 1;
        *(longlong *)(param_2 + 0x158) = lVar10;
        iVar7 = Ordinal_13(*(undefined8 *)(lVar10 + 0x178),0x7fffffff);
        if (iVar7 < 0) {
          uVar8 = Ordinal_111();
          FUN_144bd5aa0(1,"listen failed with error %d\n",uVar8);
          *(undefined8 *)(param_2 + 0x158) = 0;
          piVar1 = (int *)(*(longlong *)(param_2 + 0x148) + 0x4a8);
          *piVar1 = *piVar1 + -1;
          FUN_144bd02e0(lVar10);
          Ordinal_3(lVar9);
          return 0xffffffff;
        }
        iVar13 = iVar13 + 1;
      } while( true );
    }
    if (param_1 == (undefined4 *)0x0) {
      return 1;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x228);
    pcVar12 = "VH %s: iface %s port %d DOESN\'T EXIST\n";
    uVar11 = *(undefined8 *)(param_2 + 0x168);
    uVar15 = *(undefined8 *)(param_2 + 0x160);
  }
  FUN_144bd5aa0(1,pcVar12,uVar15,uVar11,uVar8);
  return 1;
LAB_144f3fc64:
  Ordinal_3(lVar9);
  goto LAB_144f3fc6d;
}



// FUNCTION 144f3fe00 FUN_144f3fe00 body=310 status=ok
// SIG undefined FUN_144f3fe00(void)

longlong FUN_144f3fe00(longlong param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (param_3[uVar6] != '\0');
  pcVar3 = strchr(param_3,0x3a);
  if (pcVar3 != (char *)0x0) {
    uVar6 = (ulonglong)(uint)((int)pcVar3 - (int)param_3);
  }
  iVar5 = (int)uVar6;
  while( true ) {
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x378);
      while( true ) {
        if (lVar1 == 0) {
          lVar1 = *(longlong *)(param_1 + 0x378);
          while( true ) {
            if (lVar1 == 0) {
              return 0;
            }
            if (param_2 == *(int *)(lVar1 + 0x228)) break;
            lVar1 = *(longlong *)(lVar1 + 0x150);
          }
          return lVar1;
        }
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while ((*(char **)(lVar1 + 0x160))[lVar4] != '\0');
        if ((((param_2 == *(int *)(lVar1 + 0x228)) && (iVar2 = (int)lVar4, iVar2 <= iVar5 + -2)) &&
            (param_3[(iVar5 - iVar2) + -1] == '.')) &&
           (iVar2 = strncmp(*(char **)(lVar1 + 0x160),param_3 + ((longlong)iVar5 - (longlong)iVar2),
                            (longlong)iVar2), iVar2 == 0)) break;
        lVar1 = *(longlong *)(lVar1 + 0x150);
      }
      return lVar1;
    }
    if ((param_2 == *(int *)(lVar1 + 0x228)) &&
       (iVar2 = strncmp(*(char **)(lVar1 + 0x160),param_3,(longlong)iVar5), iVar2 == 0)) break;
    lVar1 = *(longlong *)(lVar1 + 0x150);
  }
  return lVar1;
}



// FUNCTION 144f3ff40 FUN_144f3ff40 body=26 status=ok
// SIG undefined FUN_144f3ff40(void)

void FUN_144f3ff40(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 100) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144f3ff52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Ordinal_57(param_1 + 0x408,0x7f);
    return;
  }
  return;
}



// FUNCTION 144f3ff60 FUN_144f3ff60 body=942 status=ok
// SIG undefined FUN_144f3ff60(void)

void FUN_144f3ff60(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  int local_1d8 [4];
  char local_1c8 [383];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar6 = FUN_144bd68d0();
  lVar2 = *param_2;
  if (9999999 < param_3) {
    FUN_144bd5aa0(1,"%s: assert: len %ld\n","lws_handshake_server",param_3 & 0xffffffff);
  }
  uVar10 = param_3;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_144bd5aa0(1,"%s: assert: NULL ah\n","lws_handshake_server");
  }
  do {
    if (uVar10 == 0) goto LAB_144f401e2;
    if (((*(uint *)(param_1 + 0x70) & 0x20000000) == 0) ||
       (*(undefined ***)(param_1 + 0x68) != &PTR_DAT_14c70f4c0)) {
      FUN_144bd5aa0(1,"%s: bad wsi role 0x%x\n","lws_handshake_server",
                    *(uint *)(param_1 + 0x70) & 0xffff0000);
      goto LAB_144f4030a;
    }
    local_1d8[0] = (int)uVar10;
    iVar4 = FUN_144f42b90(param_1,*param_2,local_1d8);
    *param_2 = *param_2 + (longlong)((int)uVar10 - local_1d8[0]);
    if (iVar4 != 0) {
      if (iVar4 == 2) goto LAB_144f40230;
      goto LAB_144f4030a;
    }
    uVar10 = (longlong)local_1d8[0];
  } while (*(char *)(*(longlong *)(param_1 + 8) + 0x3b8) != 'c');
  iVar4 = FUN_144f429b0(param_1,3);
  if (iVar4 != 0) {
    uVar7 = FUN_144f438d0(param_1,3);
    lVar8 = FUN_144f3fe00(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x228),uVar7);
    if (lVar8 != 0) {
      *(longlong *)(param_1 + 0x80) = lVar8;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 300);
  *piVar1 = *piVar1 + 1;
  if ((*(uint *)(param_1 + 0x1b8) & 0x400) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x128);
    *piVar1 = *piVar1 + 1;
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x400;
  }
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x78) + 0x3b8);
  if ((puVar3 != (undefined8 *)0x0) &&
     (iVar4 = FUN_144f429f0(param_1,local_1c8,0x17f,0x45), 0 < iVar4)) {
    local_49 = 0;
    for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
      pcVar9 = strstr(local_1c8,(char *)puVar3[2]);
      if (pcVar9 != (char *)0x0) {
        pcVar9 = strchr((char *)puVar3[3],0x20);
        if (pcVar9 != (char *)0x0) {
          pcVar9 = pcVar9 + 1;
        }
        iVar4 = atoi((char *)puVar3[3]);
        FUN_144f3db60(param_1,iVar4,pcVar9);
        piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x144);
        *piVar1 = *piVar1 + 1;
        goto LAB_144f4030a;
      }
    }
  }
  iVar4 = FUN_144f429b0(param_1,0x51);
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 0x70) = 0x209;
    FUN_144bd6160(param_1,0,0);
    iVar4 = FUN_144f429b0(param_1,5);
    if (iVar4 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined2 *)(param_1 + 0x70) = 0x117;
      FUN_144f3ef90(param_1);
      goto LAB_144f401e2;
    }
    pcVar9 = (char *)FUN_144f438d0(param_1,5);
    iVar4 = _stricmp(pcVar9,"websocket");
    if (iVar4 == 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x134);
      *piVar1 = *piVar1 + 1;
      iVar4 = FUN_1452f5900(param_1);
      if (iVar4 == 0) goto LAB_144f401e2;
    }
  }
  else {
    iVar4 = 0;
LAB_144f40230:
    FUN_144bd6160(param_1,0,0);
    FUN_144bd7950(param_1,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x24d) * 0x38 +
                          *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170));
    local_1e8 = 0;
    iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x3e,*(undefined8 *)(param_1 + 0x130));
    if (iVar5 == 0) {
      FUN_144bd7670(param_1,0,0x117,&PTR_s_raw_skt_14c70f620);
      thunk_FUN_144f43630(param_1,1);
      if (iVar4 == 2) {
        local_1e8 = param_3;
        (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                  (param_1,0x3b,*(undefined8 *)(param_1 + 0x130),lVar2);
      }
      goto LAB_144f401e2;
    }
  }
LAB_144f4030a:
  thunk_FUN_144f43630(param_1,1);
LAB_144f401e2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_208);
}



// FUNCTION 144f40330 FUN_144f40330 body=228 status=ok
// SIG undefined FUN_144f40330(void)

undefined8 * FUN_144f40330(longlong param_1,char *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 0x100); puVar1 != (undefined8 *)0x0
      ; puVar1 = (undefined8 *)*puVar1) {
    if (((int)(uint)*(byte *)((longlong)puVar1 + 0x51) <= param_3) &&
       (iVar2 = strncmp(param_2,(char *)puVar1[1],
                        (ulonglong)(uint)*(byte *)((longlong)puVar1 + 0x51)), iVar2 == 0)) {
      puVar3 = (undefined8 *)(ulonglong)*(byte *)((longlong)puVar1 + 0x51);
      if (((*(char *)((longlong)puVar3 + (longlong)param_2) == '\0') ||
          ((*(char *)((longlong)puVar3 + (longlong)param_2) == '/' ||
           (*(byte *)((longlong)puVar1 + 0x51) == 1)))) &&
         ((*(char *)(puVar1 + 10) == '\x06' ||
          (((((*(char *)(puVar1 + 10) == '\x03' || (iVar2 = FUN_144f429b0(param_1,0), iVar2 != 0))
             || (((*(byte *)(param_1 + 0x1b8) & 2) != 0 &&
                 (iVar2 = FUN_144f429b0(param_1,0x25), iVar2 != 0)))) || (puVar1[4] != 0)) &&
           (puVar3 = (undefined8 *)(ulonglong)*(byte *)((longlong)puVar1 + 0x51),
           (uint)puVar4 < (uint)*(byte *)((longlong)puVar1 + 0x51))))))) {
        puVar4 = puVar3;
        puVar5 = puVar1;
      }
    }
  }
  return puVar5;
}



// FUNCTION 144f40420 FUN_144f40420 body=1534 status=ok
// SIG undefined FUN_144f40420(void)

void FUN_144f40420(longlong param_1,undefined1 **param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 auStack_3f8 [32];
  undefined1 **local_3d8;
  ulonglong *local_3d0;
  uint local_3c8 [2];
  undefined1 *local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined1 *local_3a8;
  int local_39c;
  undefined1 local_390 [6];
  ushort local_38a;
  undefined4 local_36c;
  char local_358 [256];
  char local_258 [48];
  undefined1 local_228 [464];
  ulonglong local_58 [3];
  
  local_58[0] = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  plVar16 = *(longlong **)(param_4 + 0x38);
  local_3c0 = local_228;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xbfffffff;
  local_3c8[0] = 0;
  local_3b0 = param_4;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x108);
    if (lVar8 != 0) {
      ppuVar6 = param_2;
      do {
        cVar1 = *(char *)ppuVar6;
        cVar2 = *(char *)((longlong)ppuVar6 + (lVar8 - (longlong)param_2));
        if (cVar1 != cVar2) break;
        ppuVar6 = (undefined1 **)((longlong)ppuVar6 + 1);
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40000000;
      }
    }
    local_3d8 = param_2;
    FUN_144bd6620(local_358,0xff,"%s/%s",param_3);
    iVar3 = FUN_144f429b0(param_1,0x15);
    if (iVar3 == 0) {
      uVar12 = 0;
    }
    else {
      pcVar13 = (char *)FUN_144f438d0(param_1,0x15);
      pcVar13 = strstr(pcVar13,"gzip");
      uVar12 = 0;
      if (pcVar13 != (char *)0x0) {
        uVar12 = 0x1000000;
      }
    }
    local_3c8[0] = local_3c8[0] | uVar12;
    iVar3 = 0;
    while( true ) {
      iVar17 = iVar3;
      iVar3 = iVar17 + 1;
      puVar7 = (undefined8 *)
               FUN_144bd7bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),local_358,
                             &local_3b8);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))(param_1 + 0x28);
      }
      lVar8 = (*(code *)*puVar7)(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),local_358,
                                 local_3b8,local_3c8);
      *(longlong *)(param_1 + 0x28) = lVar8;
      if (lVar8 == 0) goto LAB_144f407d9;
      if ((local_3c8[0] & 0x8000000) != 0) break;
      iVar4 = _stat32i64(local_358,local_390);
      if (iVar4 != 0) goto LAB_144f407d9;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x2c) = local_36c;
      local_3c8[0] = local_3c8[0] | 0x4000000;
      if ((local_38a & 0xf000) == 0x4000) {
        local_3d8 = param_2;
        FUN_144bd6620(local_358,0xff,"%s/%s/index.html",param_3);
      }
      if (((local_38a & 0xf000) == 0x8000) || (4 < iVar3)) break;
    }
    if (iVar3 == 5) {
      FUN_144bd5aa0(iVar17 + -3,"symlink loop %s \n",local_358);
    }
    uVar5 = FUN_144bd6920(*(undefined8 *)(param_1 + 0x28));
    uVar9 = FUN_144bd6910(*(undefined8 *)(param_1 + 0x28));
    uVar5 = FUN_1424c2e40(local_258,"%08llX%08lX",uVar9,uVar5);
    iVar3 = FUN_144f429b0(param_1,0x37);
    if (iVar3 != 0) {
      lVar8 = FUN_144f438d0(param_1,0x37);
      pcVar13 = local_258;
      lVar8 = lVar8 - (longlong)pcVar13;
      do {
        cVar1 = *pcVar13;
        cVar2 = pcVar13[lVar8];
        if (cVar1 != cVar2) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      if (cVar1 != cVar2) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x33e) = 0;
      }
    }
    iVar3 = FUN_144f429b0(param_1,0x14);
    if (iVar3 != 0) {
      lVar8 = FUN_144f438d0(param_1,0x14);
      pcVar13 = local_258;
      lVar8 = lVar8 - (longlong)pcVar13;
      do {
        cVar1 = *pcVar13;
        cVar2 = pcVar13[lVar8];
        if (cVar1 != cVar2) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        iVar3 = FUN_144f3d740(param_1,0x130,&local_3c0,local_58);
        if (iVar3 == 0) {
          local_3d0 = local_58;
          local_3d8 = &local_3c0;
          iVar3 = FUN_144f3da10(param_1,0x32,local_258,uVar5);
          if ((iVar3 == 0) && (iVar3 = FUN_144f3db30(param_1,&local_3c0,local_58), iVar3 == 0)) {
            iVar3 = FUN_144bd8dc0(param_1,local_228,(longlong)local_3c0 - (longlong)local_228,0x88);
            if ((longlong)iVar3 == (longlong)local_3c0 - (longlong)local_228) {
              (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))(param_1 + 0x28);
              FUN_144f3e9f0(param_1);
            }
            else {
              FUN_144bd5aa0(1,"_write returned %d from %ld\n",iVar3,(int)local_3c0 - (int)local_228)
              ;
            }
          }
        }
        goto LAB_144f407d9;
      }
    }
    local_3d0 = local_58;
    local_3d8 = &local_3c0;
    iVar3 = FUN_144f3da10(param_1,0x32,local_258);
    lVar8 = local_3b0;
    if (iVar3 == 0) {
      lVar10 = FUN_144f3df60(local_358,local_3b0);
      if (lVar10 == 0) {
        FUN_144bd5aa0(1,"unknown mimetype for %s\n",local_358);
      }
      else {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffff7fff;
        uVar12 = *(uint *)(param_1 + 0x1b8);
        if (plVar16 != (longlong *)0x0) {
          lVar14 = -1;
          do {
            lVar15 = lVar14 + 1;
            lVar11 = lVar14 + 1;
            lVar14 = lVar15;
          } while (local_358[lVar11] != '\0');
          do {
            lVar14 = plVar16[2];
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (*(char *)(lVar14 + lVar11) != '\0');
            iVar3 = (int)lVar15;
            if ((int)lVar11 < iVar3) {
              lVar11 = -1;
              do {
                lVar11 = lVar11 + 1;
              } while (*(char *)(lVar14 + lVar11) != '\0');
              pcVar13 = local_358 + (iVar3 - lVar11);
              lVar14 = lVar14 - (longlong)pcVar13;
              do {
                cVar1 = *pcVar13;
                cVar2 = pcVar13[lVar14];
                if (cVar1 != cVar2) break;
                pcVar13 = pcVar13 + 1;
              } while (cVar2 != '\0');
              if (cVar1 == cVar2) {
                *(uint *)(param_1 + 0x1b8) = uVar12 | 0x10000;
                if ((uVar12 & 2) == 0) {
                  *(uint *)(param_1 + 0x1b8) = uVar12 | 0x18000;
                }
                *(char *)(param_1 + 0x1c8) = (char)plVar16[3];
                *(longlong *)(param_1 + 0xa0) =
                     (longlong)(int)plVar16[3] * 0x38 +
                     *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
                iVar3 = FUN_144bd76e0(param_1);
                if (iVar3 != 0) goto LAB_144f407d9;
                break;
              }
            }
            plVar16 = (longlong *)*plVar16;
          } while (plVar16 != (longlong *)0x0);
        }
        if (*(longlong *)(lVar8 + 0x20) != 0) {
          lVar8 = FUN_144bd5ee0(*(undefined8 *)(param_1 + 0x80));
          iVar3 = FUN_144bd7950(param_1,lVar8);
          if (iVar3 != 0) goto LAB_144f407d9;
          local_39c = (int)local_58 - (int)local_3c0;
          local_3a8 = local_3c0;
          local_3d8 = (undefined1 **)0x0;
          iVar3 = (**(code **)(lVar8 + 8))(param_1,0x35,*(undefined8 *)(param_1 + 0x130),&local_3a8)
          ;
          if (iVar3 != 0) goto LAB_144f407d9;
          local_3c0 = local_3a8;
        }
        local_3d8 = (undefined1 **)CONCAT44(local_3d8._4_4_,(int)local_3c0 - (int)local_228);
        iVar3 = FUN_144f3e310(param_1,local_358,lVar10,local_228);
        if ((-1 < iVar3) && (0 < iVar3)) {
          FUN_144f3e9f0(param_1);
        }
      }
    }
  }
LAB_144f407d9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58[0] ^ (ulonglong)auStack_3f8);
}



// FUNCTION 144f40a30 FUN_144f40a30 body=247 status=ok
// SIG undefined FUN_144f40a30(void)

void FUN_144f40a30(undefined8 param_1,longlong param_2,int param_3)

{
  int _FileHandle;
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [48];
  char local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = 0;
  _FileHandle = FUN_144bd7b60(param_1,0);
  uVar2 = uVar3;
  uVar5 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  if (-1 < _FileHandle) {
    do {
      iVar4 = (int)uVar5;
      if ((int)uVar5 == (int)uVar7) {
        uVar1 = _read(_FileHandle,local_b8,0x80);
        uVar7 = (ulonglong)uVar1;
        uVar2 = uVar3;
        iVar4 = 0;
        if ((int)uVar1 < 1) goto LAB_144f40b0c;
      }
      if ((uVar6 == (longlong)param_3) &&
         ((local_b8[uVar2] == '\r' || (uVar6 = uVar3, local_b8[uVar2] == '\n'))))
      goto LAB_144f40b0c;
      if (local_b8[uVar2] == *(char *)(uVar6 + param_2)) {
        uVar2 = uVar2 + 1;
        uVar5 = (ulonglong)(iVar4 + 1);
        uVar6 = uVar6 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        uVar5 = (ulonglong)(iVar4 + 1);
        uVar6 = uVar3;
      }
    } while( true );
  }
  FUN_144bd5aa0(1,"can\'t open auth file: %s\n",param_1);
LAB_144f40b17:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
LAB_144f40b0c:
  _close(_FileHandle);
  goto LAB_144f40b17;
}



// FUNCTION 144f40b50 FUN_144f40b50 body=246 status=ok
// SIG undefined FUN_144f40b50(void)

void FUN_144f40b50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong local_68 [2];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)
           (((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + *(longlong *)(param_1 + 0x78));
  lVar4 = lVar1 + 0x10;
  lVar1 = lVar1 + 0x210;
  local_68[0] = lVar4;
  iVar2 = FUN_144f3d740(param_1,0x191,local_68,lVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_144bd6620(local_58,0x40,"Basic realm=\"lwsws\"");
    local_78 = local_68;
    local_70 = lVar1;
    iVar2 = FUN_144f3da10(param_1,0x48,local_58,uVar3);
    if (((iVar2 == 0) && (iVar2 = FUN_144f3db30(param_1,local_68,lVar1), iVar2 == 0)) &&
       (iVar2 = FUN_144bd8dc0(param_1,lVar4,local_68[0] - lVar4,0x88), -1 < iVar2)) {
      FUN_144f3e9f0(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144f40c60 FUN_144f40c60 body=130 status=ok
// SIG undefined FUN_144f40c60(void)

undefined8 FUN_144f40c60(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if ((((*param_1 == 'h') && (param_1[1] == 't')) && (param_1[2] == 't')) && (param_1[3] == 'p')) {
    pcVar3 = param_1 + 5;
    if (param_1[4] != 's') {
      pcVar3 = param_1 + 4;
    }
    param_1 = pcVar3;
    if ((*pcVar3 == ':') && (param_1 = pcVar3 + 1, *param_1 == '/')) {
      param_1 = pcVar3 + 2;
    }
  }
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if ((cVar2 == '/') && (pcVar3 = param_1, param_1[1] == '/')) {
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  }
  return 0;
}



// FUNCTION 144f40cf0 FUN_144f40cf0 body=277 status=ok
// SIG undefined FUN_144f40cf0(void)

ulonglong FUN_144f40cf0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar5 = uVar6;
  uVar7 = uVar6;
  do {
    iVar2 = FUN_144f429b0(param_1,(&DAT_149c0c090)[uVar5]);
    if (iVar2 != 0) {
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    uVar5 = uVar5 + 1;
  } while ((longlong)uVar5 < 8);
  if ((int)uVar7 == 0) {
    FUN_144bd5aa0(2,"Missing URI in HTTP request\n");
  }
  else {
    uVar5 = uVar6;
    if (((int)uVar7 == 1) ||
       (((*(byte *)(param_1 + 0x1b8) & 2) != 0 && (iVar2 = FUN_144f429b0(param_1,0x25), iVar2 != 0))
       )) {
      do {
        iVar2 = FUN_144f429b0(param_1,(&DAT_149c0c090)[uVar6]);
        iVar8 = (int)uVar5;
        if (iVar2 != 0) {
          uVar4 = FUN_144f438d0(param_1,(&DAT_149c0c090)[iVar8]);
          uVar1 = (&DAT_149c0c090)[iVar8];
          *param_2 = uVar4;
          uVar3 = FUN_144f429b0(param_1,uVar1);
          *param_3 = uVar3;
          return uVar5;
        }
        uVar6 = uVar6 + 1;
        uVar5 = (ulonglong)(iVar8 + 1);
      } while ((longlong)uVar6 < 8);
    }
    else {
      FUN_144bd5aa0(2,"multiple methods?\n");
    }
  }
  return 0xffffffff;
}



// FUNCTION 144f40e20 FUN_144f40e20 body=77 status=ok
// SIG undefined FUN_144f40e20(void)

undefined8 FUN_144f40e20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144bd68b0(param_1,param_2,*(undefined8 *)(param_1 + 0x400));
  if ((*(longlong *)(param_1 + 0x400) == 0) || (0x15180 < iVar1)) {
    iVar1 = FUN_144f41d80(param_1);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x400) = param_2;
    }
  }
  return 0;
}



// FUNCTION 144f40e70 FUN_144f40e70 body=149 status=ok
// SIG undefined FUN_144f40e70(void)

undefined4 FUN_144f40e70(undefined8 param_1,int param_2,uint *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0;
  lVar3 = FUN_144bd68e0();
  lVar4 = FUN_144b98c60(*(undefined8 *)(lVar3 + 0x150));
  if (lVar4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == 5) {
      iVar2 = FUN_144b9aa40(*(undefined8 *)(lVar3 + 0x150));
      *param_3 = (uint)(iVar2 == 0);
    }
    else {
      uVar1 = FUN_144f41530(lVar4,param_2,param_3,param_4);
    }
    FUN_144b47250(lVar4);
  }
  return uVar1;
}



// FUNCTION 144f40f10 FUN_144f40f10 body=66 status=ok
// SIG undefined FUN_144f40f10(void)

void FUN_144f40f10(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b9a860(*(undefined8 *)(param_1 + 0x1b0));
  FUN_144f41530(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144f40f60 FUN_144f40f60 body=366 status=ok
// SIG undefined FUN_144f40f60(void)

ulonglong FUN_144f40f60(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar7 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar5 = FUN_144bd91e0();
    return uVar5;
  }
  piVar6 = _errno();
  *piVar6 = 0;
  uVar3 = FUN_144b997b0(*(undefined8 *)(param_1 + 0x150),param_2,param_3);
  if (uVar3 != 0) {
    if (uVar3 == 0xffffffff) {
      piVar6 = _errno();
      if (*piVar6 == 0x7e) goto LAB_144f40fd6;
    }
    else if (-1 < (int)uVar3) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x118);
        *plVar1 = *plVar1 + (longlong)(int)uVar3;
      }
      if (((uVar3 == param_3) && (*(longlong *)(param_1 + 0x150) != 0)) &&
         (iVar4 = FUN_144b98850(), iVar4 != 0)) {
        if (((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(param_1 + 0x160) == 0)) &&
           (lVar2 = *(longlong *)(lVar7 + 0xe0), lVar2 != param_1)) {
          if (lVar2 != 0) {
            *(longlong *)(lVar2 + 0x160) = param_1;
          }
          *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar7 + 0xe0);
          *(undefined8 *)(param_1 + 0x160) = 0;
          *(longlong *)(lVar7 + 0xe0) = param_1;
        }
        return (ulonglong)uVar3;
      }
      thunk_FUN_144f41bd0(param_1);
      return (ulonglong)uVar3;
    }
    if ((*(longlong *)(param_1 + 0x150) != 0) &&
       (iVar4 = FUN_144b9a050(*(longlong *)(param_1 + 0x150),uVar3), iVar4 - 5U < 2)) {
      return 0xffffffff;
    }
    iVar4 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150));
    if ((iVar4 == 3) || (iVar4 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150)), iVar4 == 2)) {
      return 0xfffffffc;
    }
  }
LAB_144f40fd6:
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  return 0xffffffff;
}



// FUNCTION 144f410d0 FUN_144f410d0 body=250 status=ok
// SIG undefined FUN_144f410d0(void)

ulonglong FUN_144f410d0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar2 = FUN_144bd92b0(param_1);
    return uVar2;
  }
  uVar2 = FUN_144b99810();
  if (0 < (int)uVar2) {
    return uVar2;
  }
  if (*(longlong *)(param_1 + 0x150) == 0) {
    iVar3 = 99;
  }
  else {
    iVar3 = FUN_144b9a050(*(longlong *)(param_1 + 0x150),uVar2 & 0xffffffff);
    if (iVar3 == 5) goto LAB_144f411ad;
    if (iVar3 == 2) goto LAB_144f41185;
  }
  iVar1 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 3) {
LAB_144f41185:
    FUN_144bd5aa0(4,"%s: want read\n","lws_ssl_capable_write");
    return 0xfffffffc;
  }
  if ((iVar3 == 3) || (iVar3 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150)), iVar3 == 2)) {
    *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 0x1000;
    FUN_144bd5aa0(4,"%s: want write\n","lws_ssl_capable_write");
    return 0xfffffffc;
  }
LAB_144f411ad:
  FUN_144f413d0();
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  return 0xffffffff;
}



// FUNCTION 144f411d0 FUN_144f411d0 body=20 status=ok
// SIG undefined FUN_144f411d0(void)

undefined8 FUN_144f411d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 0;
  }
  uVar1 = FUN_144b98850();
  return uVar1;
}



// FUNCTION 144f411f0 FUN_144f411f0 body=186 status=ok
// SIG undefined FUN_144f411f0(void)

undefined8 FUN_144f411f0(longlong param_1)

{
  if ((*(uint *)(param_1 + 100) & 0x1000) == 0) {
    FUN_144bd5aa0(4,
                  " SSL will not be initialized by libwebsockets: no LWS_SERVER_OPTION_DO_SSL_GLOBAL_INIT\n"
                 );
    DAT_14c783a54 = FUN_144ea5ab0(0,0,&DAT_149c0c7d8,0,0,0);
    DAT_14c797a10 = FUN_144ea5ab0(1,0,0,0,0,0);
  }
  FUN_144b973d0(0x200000,0);
  DAT_14c783a54 = FUN_144ea5ab0(0,0,&DAT_149c0c7d8,0,0,0);
  DAT_14c797a10 = FUN_144ea5ab0(1,0,0,0,0,0);
  return 0;
}



// FUNCTION 144f412b0 FUN_144f412b0 body=193 status=ok
// SIG undefined FUN_144f412b0(void)

undefined8 FUN_144f412b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x210) != 0) {
    FUN_144b9aa30(*(longlong *)(param_1 + 0x150),0);
  }
  iVar2 = FUN_144b98800(*(undefined8 *)(param_1 + 0x150));
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) {
    FUN_144b9a5b0(*(undefined8 *)(param_1 + 0x150));
  }
  Ordinal_3((longlong)iVar2);
  FUN_144b993a0(*(undefined8 *)(param_1 + 0x150));
  lVar1 = *(longlong *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if ((*(int *)(lVar1 + 0x4c8) != 0) &&
     (iVar2 = *(int *)(lVar1 + 0x4cc), *(int *)(lVar1 + 0x4cc) = iVar2 + -1,
     iVar2 == *(int *)(lVar1 + 0x4c8))) {
    FUN_144f41ce0(*(undefined8 *)(param_1 + 0x78),1);
  }
  return 1;
}



// FUNCTION 144f41380 FUN_144f41380 body=63 status=ok
// SIG undefined FUN_144f41380(void)

void FUN_144f41380(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_144b98360();
  }
  if (((*(byte *)(param_1 + 0x214) & 1) == 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    FUN_144b98360();
    return;
  }
  return;
}



// FUNCTION 144f413c0 FUN_144f413c0 body=3 status=ok
// SIG undefined FUN_144f413c0(void)

void FUN_144f413c0(void)

{
  return;
}



// FUNCTION 144f413d0 FUN_144f413d0 body=77 status=ok
// SIG undefined FUN_144f413d0(void)

void FUN_144f413d0(void)

{
  int iVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar1 = FUN_144ba2630();
  while (iVar1 != 0) {
    FUN_144ba27f0(iVar1,local_118,0x100);
    iVar1 = FUN_144ba2630();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 144f41430 FUN_144f41430 body=47 status=ok
// SIG undefined FUN_144f41430(void)

void FUN_144f41430(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_144b98d00();
    FUN_144b98cf0(param_1,FUN_144f41870);
    return;
  }
  return;
}



// FUNCTION 144f41460 FUN_144f41460 body=197 status=ok
// SIG undefined FUN_144f41460(void)

void FUN_144f41460(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_res20;
  undefined4 local_res24;
  
  uVar2 = FUN_144b9a8f0();
  lVar3 = FUN_144b9ab00(uVar2,DAT_14c797a10);
  if (lVar3 != 0) {
    iVar1 = FUN_144b98800(param_1);
    lVar3 = FUN_144f3bf50(lVar3,(longlong)iVar1);
    if ((lVar3 != 0) && ((*(uint *)(*(longlong *)(lVar3 + 0x80) + 0x210) & param_2) != 0)) {
      local_res20 = param_2;
      local_res24 = param_3;
      iVar1 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(lVar3 + 0xa0) + 8),lVar3,0x43,
                            *(undefined8 *)(lVar3 + 0x130),&local_res20,0);
      if (iVar1 != 0) {
        FUN_144bd6160(lVar3,0x16);
      }
    }
  }
  return;
}



// FUNCTION 144f41530 FUN_144f41530 body=532 status=ok
// SIG undefined FUN_144f41530(void)

undefined8 FUN_144f41530(longlong param_1,undefined4 param_2,longlong *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  longlong lVar6;
  ulonglong _Size;
  longlong lVar7;
  void *local_res8;
  
  if (param_1 == 0) {
    return 0xffffffffffffffff;
  }
  switch(param_2) {
  case 0:
    uVar5 = FUN_144bb6020(param_1);
    goto LAB_144f4158d;
  case 1:
    uVar5 = FUN_144bb6040(param_1);
LAB_144f4158d:
    lVar4 = FUN_144f418c0(uVar5);
    *param_3 = lVar4;
    if (lVar4 != -1) {
      return 0;
    }
    break;
  case 2:
    lVar4 = FUN_144bb4f50(param_1);
    if (lVar4 != 0) {
      FUN_144baf340(lVar4,(int *)((longlong)param_3 + 4),(int)param_4 + -2);
      pcVar3 = strstr((char *)((longlong)param_3 + 4),"/CN=");
      lVar4 = -1;
      if (pcVar3 != (char *)0x0) {
        lVar4 = -1;
        do {
          lVar7 = lVar4;
          lVar4 = lVar7 + 1;
        } while ((pcVar3 + 4)[lVar4] != '\0');
        memmove((int *)((longlong)param_3 + 4),pcVar3 + 4,lVar7 + 2);
        lVar4 = -1;
      }
      do {
        lVar6 = lVar4 + 1;
        lVar7 = lVar4 + 5;
        lVar4 = lVar6;
      } while (*(char *)((longlong)param_3 + lVar7) != '\0');
      *(int *)param_3 = (int)lVar6;
      return 0;
    }
    break;
  case 3:
    lVar4 = FUN_144bb4f40(param_1);
    if (lVar4 != 0) {
      FUN_144baf340(lVar4,(int *)((longlong)param_3 + 4),(int)param_4 + -1);
      lVar4 = -1;
      do {
        lVar6 = lVar4 + 1;
        lVar7 = lVar4 + 5;
        lVar4 = lVar6;
      } while (*(char *)((longlong)param_3 + lVar7) != '\0');
      *(int *)param_3 = (int)lVar6;
      return 0;
    }
    break;
  case 4:
    iVar1 = FUN_144ec5690(param_1);
    *(int *)param_3 = iVar1;
    return 0;
  case 6:
    uVar5 = FUN_144bb6070(param_1);
    iVar1 = FUN_144bb64a0(uVar5,0);
    _Size = (ulonglong)iVar1;
    if (((iVar1 != 0) && (_Size <= param_4)) &&
       (_Src = (void *)FUN_144ea64e0(_Size,
                                     "D:\\Perforce\\ian.fox-third-party\\3rdParty\\libwebsocket\\source\\3.0\\libwebsockets-3.0-stable\\lib\\tls\\openssl\\ssl.c"
                                     ,0x275), _Src != (void *)0x0)) {
      local_res8 = _Src;
      uVar5 = FUN_144bb6070(param_1);
      iVar2 = FUN_144bb64a0(uVar5,&local_res8);
      if (iVar2 == iVar1) {
        if (local_res8 == (void *)0x0) {
          return 0xffffffffffffffff;
        }
        if ((int)local_res8 - (int)_Src == iVar1) {
          *(int *)param_3 = iVar1;
          memcpy((int *)((longlong)param_3 + 4),_Src,_Size);
          FUN_144ea6530(_Src,
                        "D:\\Perforce\\ian.fox-third-party\\3rdParty\\libwebsocket\\source\\3.0\\libwebsockets-3.0-stable\\lib\\tls\\openssl\\ssl.c"
                        ,0x287);
          return 0;
        }
      }
      if (local_res8 != (void *)0x0) {
        FUN_144ea6530(_Src,
                      "D:\\Perforce\\ian.fox-third-party\\3rdParty\\libwebsocket\\source\\3.0\\libwebsockets-3.0-stable\\lib\\tls\\openssl\\ssl.c"
                      ,0x280);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 144f41760 FUN_144f41760 body=200 status=ok
// SIG undefined FUN_144f41760(void)

undefined1 * FUN_144f41760(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144b9a5b0(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 0) {
    FUN_144bd0b20(param_1,0,9);
    return (undefined1 *)0xfffffffc;
  }
  if (iVar1 == 1) {
    Ordinal_22(*(undefined8 *)(param_1 + 0x178),1);
    return (undefined1 *)0x0;
  }
  iVar1 = FUN_144b9a050(*(undefined8 *)(param_1 + 0x150),iVar1);
  if ((iVar1 - 1U & 0xfffffffb) != 0) {
    iVar1 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150));
    if (iVar1 == 3) {
      FUN_144bd0b20(param_1,0,9);
      return (undefined1 *)0xfffffffe;
    }
    iVar1 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150));
    if (iVar1 == 2) {
      FUN_144bd0b20(param_1,0,2);
      return &DAT_fffffffd;
    }
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 144f41830 FUN_144f41830 body=20 status=ok
// SIG undefined FUN_144f41830(void)

undefined8 FUN_144f41830(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 0;
  }
  uVar1 = FUN_144b9a8f0();
  return uVar1;
}



// FUNCTION 144f41850 FUN_144f41850 body=21 status=ok
// SIG undefined FUN_144f41850(void)

undefined8 FUN_144f41850(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 99;
  }
  uVar1 = FUN_144b9a050();
  return uVar1;
}



// FUNCTION 144f41870 FUN_144f41870 body=68 status=ok
// SIG undefined FUN_144f41870(void)

void FUN_144f41870(char *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  strncpy(param_1,*(char **)(param_4 + 0x28),(longlong)param_2);
  lVar1 = -1;
  param_1[param_2 + -1] = '\0';
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != '\0');
  return;
}



// FUNCTION 144f418c0 FUN_144f418c0 body=295 status=ok
// SIG undefined FUN_144f418c0(void)

void FUN_144f418c0(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  tm local_38;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(char **)(param_1 + 8);
  local_38.tm_wday = 0;
  local_38.tm_yday = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar1[lVar3] != '\0');
  iVar2 = (int)pcVar1[1];
  if (lVar3 == 0xd) {
    iVar4 = *pcVar1 * 5 + -0xd6;
    lVar3 = 2;
  }
  else {
    iVar4 = iVar2 + *pcVar1 * 10;
    lVar3 = 4;
    iVar2 = (int)pcVar1[3];
    iVar4 = ((int)pcVar1[2] + iVar4 * 10) * 5 + -0x6828;
  }
  local_38.tm_year = iVar2 + iVar4 * 2;
  local_38.tm_mon = pcVar1[lVar3] * 10 + -0x211 + (int)pcVar1[lVar3 + 1];
  local_38.tm_mday = pcVar1[lVar3 + 2] * 10 + -0x211 + (int)pcVar1[lVar3 + 3];
  local_38.tm_hour = (int)pcVar1[lVar3 + 5] + (pcVar1[lVar3 + 4] * 5 + -0x108) * 2;
  local_38.tm_isdst = 0;
  local_38.tm_min = (int)pcVar1[lVar3 + 7] + (pcVar1[lVar3 + 6] * 5 + -0x108) * 2;
  local_38.tm_sec = (int)pcVar1[lVar3 + 9] + (pcVar1[lVar3 + 8] * 5 + -0x108) * 2;
  _mktime64(&local_38);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 144f419f0 FUN_144f419f0 body=448 status=ok
// SIG undefined FUN_144f419f0(void)

void FUN_144f419f0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_158 [32];
  int local_138;
  undefined1 local_128 [16];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144bd6620(local_118,0xff,"%s.upd",param_1);
  iVar1 = _open(local_118,0);
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar2 = _read(iVar1,local_128,1);
    _close(iVar1);
    if (iVar2 == 1) {
      iVar1 = _open(param_1,0);
      if (-1 < iVar1) {
        iVar2 = _read(iVar1,local_128,1);
        _close(iVar1);
        if (iVar2 == 1) {
          do {
            local_138 = iVar3;
            FUN_144bd6620(local_118,0xff,"%s.old.%d",param_1);
            iVar1 = rename(param_1,local_118);
            if (iVar1 == 0) break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x32);
          if (iVar3 == 0x32) {
            FUN_144bd5aa0(4,"unable to rename %s\n",param_1);
            goto LAB_144f41ba0;
          }
          FUN_144bd6620(local_118,0xff,"%s.upd",param_1);
        }
      }
      iVar1 = rename(local_118,param_1);
      if (iVar1 != 0) {
        FUN_144bd5aa0(4,"unable to rename %s to %s\n",local_118,param_1);
        goto LAB_144f41ba0;
      }
    }
  }
  iVar1 = _open(param_1,0);
  if (-1 < iVar1) {
    _read(iVar1,local_128,1);
    _close(iVar1);
  }
LAB_144f41ba0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_158);
}



// FUNCTION 144f41bd0 FUN_144f41bd0 body=127 status=ok
// SIG undefined FUN_144f41bd0(void)

void FUN_144f41bd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    if ((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(lVar1 + 0xe0) != param_1)) {
      return;
    }
    *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(param_1 + 0x168);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 0x168) = *(undefined8 *)(param_1 + 0x168);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x160) = *(undefined8 *)(param_1 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 144f41c50 thunk_FUN_144f41bd0 body=5 status=ok
// SIG undefined thunk_FUN_144f41bd0(void)

void thunk_FUN_144f41bd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    if ((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(lVar1 + 0xe0) != param_1)) {
      return;
    }
    *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(param_1 + 0x168);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 0x168) = *(undefined8 *)(param_1 + 0x168);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x160) = *(undefined8 *)(param_1 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 144f41c60 FUN_144f41c60 body=121 status=ok
// SIG undefined FUN_144f41c60(void)

bool FUN_144f41c60(longlong param_1)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar6 = 0;
  while (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x1a0);
    iVar3 = *piVar2;
    if (iVar3 == -1) break;
    lVar4 = *(longlong *)(lVar4 + 0x168);
    lVar5 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x48);
    puVar1 = (ushort *)(lVar5 + 10);
    *puVar1 = *puVar1 | *(ushort *)(lVar5 + 8) & 9;
    uVar6 = uVar6 | *(ushort *)(*(longlong *)(param_1 + 0x48) + 10 + (longlong)*piVar2 * 0x10) & 9;
  }
  return uVar6 != 0;
}



// FUNCTION 144f41ce0 FUN_144f41ce0 body=155 status=ok
// SIG undefined FUN_144f41ce0(void)

undefined8 FUN_144f41ce0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  FUN_144bd5aa0(4,"%s: on = %d\n","lws_gate_accepts",param_2);
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x150)) {
    if ((*(int *)(lVar1 + 0x208) != 0) && (*(longlong *)(lVar1 + 0x158) != 0)) {
      uVar3 = 0;
      if (param_2 == 0) {
        uVar3 = 9;
      }
      iVar2 = thunk_FUN_144bd0b20(*(longlong *)(lVar1 + 0x158),uVar3,param_2 * 9);
      if (iVar2 != 0) {
        FUN_144bd5aa0(4,"Unable to set accept POLLIN %d\n",param_2);
      }
    }
  }
  return 0;
}



// FUNCTION 144f41d80 FUN_144f41d80 body=309 status=ok
// SIG undefined FUN_144f41d80(void)

void FUN_144f41d80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8 [12];
  longlong local_68 [10];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  for (lVar1 = *(longlong *)(param_1 + 0x378); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x150)) {
    uVar2 = FUN_144bd6890();
    if ((*(longlong *)(lVar1 + 0x1b0) == 0) || ((*(byte *)(lVar1 + 0x214) & 2) != 0)) {
      FUN_144bd5aa0(4,"   vhost %s: no cert\n",*(undefined8 *)(lVar1 + 0x160));
LAB_144f41e60:
      memset(local_c8,0,0x58);
      local_c8[0] = lVar1;
      FUN_144bd7d50(*(undefined8 *)(lVar1 + 0x148),0x48,local_c8);
    }
    else {
      if ((ulonglong)uVar2 < 0x57442252) break;
      iVar3 = FUN_144f40f10(lVar1,1,local_68,0);
      if (iVar3 == 0) {
        FUN_144bd5aa0(4,"   vhost %s: cert expiry: %dd\n",*(undefined8 *)(lVar1 + 0x160),
                      (longlong)(local_68[0] - (ulonglong)uVar2) / 0x15180 & 0xffffffff);
        goto LAB_144f41e60;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144f41ed0 FUN_144f41ed0 body=172 status=ok
// SIG undefined FUN_144f41ed0(void)

undefined8 FUN_144f41ed0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  iVar1 = FUN_144f419f0(param_2);
  if ((iVar1 != 2) && (iVar2 = FUN_144f419f0(param_3), iVar2 != 2)) {
    if (((iVar1 == 0) || (iVar2 == 0)) && ((*(uint *)(param_1 + 0x22c) & 0x4000000) != 0)) {
      FUN_144bd5aa0(4,"Ignoring missing %s or %s\n",param_2,param_3);
      *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) | 2;
      return 0;
    }
    return 1;
  }
  return 2;
}



// FUNCTION 144f41f80 FUN_144f41f80 body=265 status=ok
// SIG undefined FUN_144f41f80(void)

undefined8
FUN_144f41f80(undefined8 param_1,longlong param_2,char *param_3,ulonglong param_4,
             undefined8 *param_5,longlong *param_6)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong local_res10;
  char *local_18 [2];
  
  if ((param_2 != 0) &&
     (uVar2 = FUN_144f42090(param_1,param_2,local_18,&local_res10), param_4 = local_res10,
     param_3 = local_18[0], (int)uVar2 != 0)) {
    return uVar2;
  }
  pcVar3 = param_3 + param_4;
  iVar1 = strncmp(param_3,"-----",5);
  if (iVar1 == 0) {
    for (pcVar4 = param_3 + 5; (pcVar4 < pcVar3 && (*pcVar4 != '\n')); pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '-') goto joined_r0x000144f41ffd;
    }
    if (*pcVar4 == '-') {
joined_r0x000144f41ffd:
      do {
        if (pcVar3 <= pcVar4) break;
        if (*pcVar4 == '\n') {
          if (pcVar4 < pcVar3) {
            pcVar3 = pcVar3 + -2;
            goto joined_r0x000144f42042;
          }
          break;
        }
        pcVar4 = pcVar4 + 1;
      } while( true );
    }
  }
  goto LAB_144f4200d;
joined_r0x000144f42042:
  if (pcVar3 <= param_3) goto LAB_144f42051;
  if (*pcVar3 == '\n') goto LAB_144f42056;
  pcVar3 = pcVar3 + -1;
  goto joined_r0x000144f42042;
LAB_144f42051:
  if (*pcVar3 == '\n') {
LAB_144f42056:
    *pcVar3 = '\0';
    iVar1 = FUN_144f455f0(pcVar4 + 1,param_3,param_4 & 0xffffffff);
    *param_6 = (longlong)iVar1;
    *param_5 = param_3;
    return 0;
  }
LAB_144f4200d:
  thunk_FUN_144f3cee0(param_3,0,"lws_free");
  return 4;
}



// FUNCTION 144f42090 FUN_144f42090 body=253 status=ok
// SIG undefined FUN_144f42090(void)

undefined4 FUN_144f42090(undefined8 param_1,char *param_2,undefined8 *param_3,size_t *param_4)

{
  int iVar1;
  long lVar2;
  FILE *_File;
  void *_DstBuf;
  size_t sVar3;
  undefined4 uVar4;
  size_t _ElementSize;
  
  uVar4 = 0;
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  iVar1 = fseek(_File,0,2);
  if (iVar1 != 0) {
    uVar4 = 1;
    goto LAB_144f4216c;
  }
  lVar2 = ftell(_File);
  _ElementSize = (size_t)lVar2;
  if ((_ElementSize != 0xffffffffffffffff) && (iVar1 = fseek(_File,0,0), iVar1 == 0)) {
    _DstBuf = (void *)thunk_FUN_144f3cee0(0,_ElementSize,"alloc_file");
    *param_3 = _DstBuf;
    if (_DstBuf == (void *)0x0) {
      uVar4 = 2;
      goto LAB_144f4216c;
    }
    sVar3 = fread(_DstBuf,_ElementSize,1,_File);
    if (sVar3 == 1) {
      *param_4 = _ElementSize;
      goto LAB_144f4216c;
    }
    thunk_FUN_144f3cee0(*param_3,0,"lws_free");
  }
  uVar4 = 1;
LAB_144f4216c:
  fclose(_File);
  return uVar4;
}



// FUNCTION 144f42190 FUN_144f42190 body=102 status=ok
// SIG undefined FUN_144f42190(void)

ulonglong FUN_144f42190(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  pcVar2 = param_2;
  if (*param_1 != '\0') {
    do {
      if (param_3 < 2) break;
      pcVar1 = pcVar2;
      if (pcVar3 == (char *)0x0) {
        if (*param_1 != ' ') {
          param_3 = param_3 + -1;
          pcVar1 = pcVar2 + 1;
          pcVar3 = pcVar2;
          goto LAB_144f421b9;
        }
      }
      else {
LAB_144f421b9:
        pcVar2 = pcVar1;
        if (*param_1 == ',') {
          *pcVar3 = ((char)pcVar2 - (char)pcVar3) + -1;
          pcVar3 = (char *)0x0;
        }
        else {
          *pcVar2 = *param_1;
          pcVar2 = pcVar2 + 1;
          param_3 = param_3 + -1;
        }
      }
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((char)pcVar2 - (char)pcVar3) + -1;
    }
  }
  return (longlong)pcVar2 - (longlong)param_2 & 0xffffffff;
}



// FUNCTION 144f42200 FUN_144f42200 body=101 status=ok
// SIG undefined FUN_144f42200(void)

void FUN_144f42200(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x3f8);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c0);
  }
  uVar1 = FUN_144f42190(lVar2,param_1 + 0x1f0,0x16);
  *(undefined1 *)(param_1 + 0x207) = uVar1;
  FUN_144b97d70(*(undefined8 *)(param_1 + 0x1b0),FUN_144f42740,param_1 + 0x1f0);
  return;
}



// FUNCTION 144f42270 FUN_144f42270 body=719 status=ok
// SIG undefined FUN_144f42270(void)

int FUN_144f42270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar5 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x208) == 0) {
LAB_144f42517:
    iVar2 = 0;
  }
  else {
    if (*(short *)(param_1 + 0x70) == 0x207) {
      if (*(longlong *)(param_1 + 0x150) != 0) {
        FUN_144bd5aa0(1,"%s: leaking ssl\n","lws_server_socket_service_ssl");
      }
      if ((*(int *)(lVar1 + 0x4c8) == 0) || (*(int *)(lVar1 + 0x4cc) < *(int *)(lVar1 + 0x4c8))) {
        iVar2 = FUN_1452f68e0(param_1,param_2);
        if (iVar2 == 0) {
          if ((*(int *)(lVar1 + 0x4c8) != 0) &&
             (*(int *)(lVar1 + 0x4cc) = *(int *)(lVar1 + 0x4cc) + 1,
             *(int *)(lVar1 + 0x4cc) == *(int *)(lVar1 + 0x4c8))) {
            FUN_144f41ce0(lVar1,0);
          }
          *(undefined2 *)(param_1 + 0x70) = 0x208;
          iVar2 = FUN_144bd0520(lVar1,param_1);
          if (iVar2 == 0) {
            FUN_144bd6160(param_1,9,*(undefined4 *)(lVar1 + 0x4b8));
            goto LAB_144f423a9;
          }
          FUN_144bd5aa0(1,"%s: failed to insert into fds\n","lws_server_socket_service_ssl");
        }
        else if (param_2 != -1) {
          Ordinal_3(param_2);
        }
      }
      else {
        FUN_144bd5aa0(4,"unable to deal with SSL connection\n");
      }
    }
    else {
      if (*(short *)(param_1 + 0x70) != 0x208) {
        return 0;
      }
LAB_144f423a9:
      iVar2 = thunk_FUN_144bd0b20(param_1,2);
      if (iVar2 == 0) {
        if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x20c) == 0) {
LAB_144f4248e:
          piVar3 = _errno();
          *piVar3 = 0;
          iVar2 = FUN_1452f6a30(param_1);
          if (iVar2 == -1) {
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
            goto LAB_144f42525;
          }
          if (iVar2 != 0) goto LAB_144f42517;
        }
        else {
          iVar2 = Ordinal_16(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(lVar5 + 0xa8 + lVar1),
                             *(undefined4 *)(lVar1 + 0x4bc),2);
          if ((iVar2 < 1) || (**(byte **)(lVar5 + 0xa8 + lVar1) < 0x20)) {
            if (iVar2 == 0) goto LAB_144f42525;
            if ((iVar2 < 0) &&
               ((iVar2 = Ordinal_111(), iVar2 == 0x2733 || (iVar2 = Ordinal_111(), iVar2 == 0x2733))
               )) {
              iVar2 = thunk_FUN_144bd0b20(param_1,0,9);
              return -(uint)(iVar2 != 0);
            }
            goto LAB_144f4248e;
          }
          *(undefined4 *)(param_1 + 0x170) = 0;
          FUN_1452f6b40(param_1);
          *(undefined8 *)(param_1 + 0x150) = 0;
          if ((*(uint *)(lVar1 + 0x4b0) & 0x1800) == 0x1800) {
            *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) | 1;
          }
        }
        for (lVar5 = *(longlong *)(lVar1 + 0x378); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x150))
        {
          if ((((*(byte *)(lVar5 + 0x248) & 2) == 0) && (*(longlong *)(param_1 + 0x150) != 0)) &&
             (lVar4 = FUN_144f41830(param_1), *(longlong *)(lVar5 + 0x1b0) == lVar4)) {
            *(longlong *)(param_1 + 0x80) = lVar5;
            break;
          }
        }
        FUN_144bd6160(param_1,3,*(undefined4 *)(lVar1 + 0x4b8));
        *(undefined2 *)(param_1 + 0x70) = 0x117;
        iVar2 = FUN_144f42680(param_1);
        if (iVar2 == 0) goto LAB_144f42517;
      }
      else {
        FUN_144bd5aa0(1,"%s: lws_change_pollfd failed\n","lws_server_socket_service_ssl");
      }
    }
LAB_144f42525:
    iVar2 = 1;
  }
  return iVar2;
}



// FUNCTION 144f42540 FUN_144f42540 body=313 status=ok
// SIG undefined FUN_144f42540(void)

undefined8 FUN_144f42540(int *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_1d8 [120];
  undefined8 local_160;
  longlong local_158;
  
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  if (*(longlong *)(param_1 + 0xc) != 0) {
    *(uint *)(param_2 + 0x22c) = *(uint *)(param_2 + 0x22c) | 0x1000000;
  }
  if (*param_1 != -1) {
    *(uint *)(param_2 + 0x208) = *(byte *)(param_2 + 0x22f) & 1;
    if (((*(byte *)(param_2 + 0x22f) & 1) != 0) && (*(longlong *)(param_1 + 0x12) != 0)) {
      FUN_144bd5aa0(4," SSL ciphers: \'%s\'\n");
    }
    FUN_144bd5aa0(4);
  }
  memset(local_1d8,0,0x1d0);
  if ((param_1[0x19] & 0x1008U) == 0x1008) {
    *(undefined4 *)(param_2 + 0x20c) = 1;
  }
  if (*(int *)(param_2 + 0x208) == 0) {
LAB_144f42662:
    uVar2 = 0;
  }
  else {
    local_160 = uVar2;
    local_158 = param_2;
    iVar1 = FUN_1452f66b0(param_1,param_2,local_1d8);
    if (iVar1 == 0) {
      FUN_1452f6640(param_2);
      iVar1 = (**(code **)(*(longlong *)(param_2 + 0x170) + 8))
                        (local_1d8,0x16,*(undefined8 *)(param_2 + 0x1b0),param_2,0);
      if (iVar1 == 0) {
        if (*(int *)(param_2 + 0x208) != 0) {
          FUN_144f42200(param_2);
        }
        goto LAB_144f42662;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144f42680 FUN_144f42680 body=169 status=ok
// SIG undefined FUN_144f42680(void)

void FUN_144f42680(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  void *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (void *)0x0;
  FUN_144b97d80(*(undefined8 *)(param_1 + 0x150),&local_30,local_38);
  if (local_38[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if (9 < local_38[0]) {
    local_38[0] = 9;
  }
  uVar1 = (ulonglong)local_38[0];
  memcpy(local_28,local_30,(ulonglong)local_38[0]);
  if (uVar1 < 10) {
    *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 1;
    local_28[uVar1] = 0;
    FUN_144bd2750(param_1,local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144e2bb84();
}



// FUNCTION 144f42740 FUN_144f42740 body=67 status=ok
// SIG undefined FUN_144f42740(void)

undefined8
FUN_144f42740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144b97a00(param_2,param_3,param_6,*(undefined1 *)(param_6 + 0x17),param_4,param_5);
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = 3;
  }
  return uVar2;
}



// FUNCTION 144f42790 FUN_144f42790 body=78 status=ok
// SIG undefined FUN_144f42790(void)

undefined8 FUN_144f42790(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1452f6f60();
  if (iVar1 == -3) {
    FUN_144bd0240(param_1);
  }
  else if (iVar1 != -2) {
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      return 0;
    }
    return 1;
  }
  *(undefined2 *)(param_1 + 0x70) = 0x203;
  return 0;
}



// FUNCTION 144f427e0 FUN_144f427e0 body=156 status=ok
// SIG undefined FUN_144f427e0(void)

undefined4 FUN_144f427e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x70) == 0x203) {
    iVar1 = FUN_1452f6f60();
    if (iVar1 != -4) {
      if (iVar1 == -3) {
        FUN_144bd0240(param_1);
      }
      else if (iVar1 != -2) {
        if (iVar1 == -1) {
          FUN_144bd6620(param_2,(longlong)param_3,"client connect failed");
          return 0xffffffff;
        }
        goto LAB_144f4284a;
      }
      *(undefined2 *)(param_1 + 0x70) = 0x203;
    }
    uVar2 = 0;
  }
  else {
LAB_144f4284a:
    iVar1 = FUN_1452f7080(param_1,param_2,param_3);
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 144f42880 FUN_144f42880 body=293 status=ok
// SIG undefined FUN_144f42880(void)

undefined8 FUN_144f42880(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_1d8 [120];
  undefined8 local_160;
  longlong local_158;
  
  if ((*(uint *)(param_2 + 0x22c) & 0x400000) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x128);
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x118);
    }
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
    }
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (lVar1 != 0) {
      *(uint *)(param_2 + 0x214) = *(uint *)(param_2 + 0x214) | 1;
      *(longlong *)(param_2 + 0x1b8) = lVar1;
      return 0;
    }
    iVar2 = FUN_1452f7150(param_2,param_1,lVar4,lVar6,lVar3,lVar5);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_144bd5aa0(4,"created client ssl context for %s\n",*(undefined8 *)(param_2 + 0x160));
    memset(local_1d8,0,0x1d0);
    local_160 = *(undefined8 *)(param_2 + 0x148);
    local_158 = param_2;
    (**(code **)(*(longlong *)(param_2 + 0x170) + 8))
              (local_1d8,0x15,*(undefined8 *)(param_2 + 0x1b8),0,0);
  }
  return 0;
}



// FUNCTION 144f429b0 FUN_144f429b0 body=57 status=ok
// SIG undefined FUN_144f429b0(void)

int FUN_144f429b0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar3 = 0;
  if ((lVar2 != 0) && (bVar1 = *(byte *)((longlong)param_2 + 800 + lVar2), bVar1 != 0)) {
    do {
      iVar3 = iVar3 + (uint)*(ushort *)(lVar2 + 0x20 + (ulonglong)bVar1 * 8);
      bVar1 = *(byte *)(lVar2 + 0x22 + (ulonglong)bVar1 * 8);
    } while (bVar1 != 0);
    return iVar3;
  }
  return 0;
}



// FUNCTION 144f429f0 FUN_144f429f0 body=223 status=ok
// SIG undefined FUN_144f429f0(void)

int FUN_144f429f0(longlong param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar5 = 0;
  if (lVar3 != 0) {
    iVar5 = 0;
    for (bVar1 = *(byte *)((longlong)param_4 + 800 + lVar3); bVar1 != 0;
        bVar1 = *(byte *)(lVar3 + 0x22 + (ulonglong)bVar1 * 8)) {
      iVar5 = iVar5 + (uint)*(ushort *)(lVar3 + 0x20 + (ulonglong)bVar1 * 8);
    }
  }
  if ((iVar5 < param_3) && (lVar3 != 0)) {
    bVar1 = *(byte *)((longlong)param_4 + 800 + lVar3);
    if (bVar1 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        uVar4 = (ulonglong)bVar1;
        lVar3 = *(longlong *)(param_1 + 8);
        uVar2 = *(ushort *)(lVar3 + 0x20 + uVar4 * 8);
        if (param_3 <= (int)(uint)uVar2) {
          return -1;
        }
        strncpy(param_2,(char *)((ulonglong)*(uint *)(lVar3 + 0x1c + uVar4 * 8) +
                                *(longlong *)(lVar3 + 0x10)),(ulonglong)uVar2);
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 8);
        param_2 = param_2 + uVar2;
        param_3 = param_3 - (uint)uVar2;
        bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x22 + uVar4 * 8);
      } while (bVar1 != 0);
      *param_2 = '\0';
    }
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}



// FUNCTION 144f42ad0 FUN_144f42ad0 body=80 status=ok
// SIG undefined FUN_144f42ad0(void)

void FUN_144f42ad0(longlong param_1)

{
  memset((void *)(param_1 + 800),0,0x5f);
  memset((void *)(param_1 + 0x1c),0,0x2f8);
  *(undefined1 *)(param_1 + 0x3b3) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined2 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0x60;
  return;
}



// FUNCTION 144f42b20 FUN_144f42b20 body=108 status=ok
// SIG undefined FUN_144f42b20(void)

undefined8 FUN_144f42b20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  plVar3 = (longlong *)(param_1 + 0x78);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 == param_2) break;
    lVar1 = *plVar2;
    plVar3 = plVar2;
  }
  *plVar3 = *param_2;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
  if (param_2[2] != 0) {
    thunk_FUN_144f3cee0(param_2[2],0,"lws_free");
  }
  thunk_FUN_144f3cee0(param_2,0,"lws_free");
  return 0;
}



// FUNCTION 144f42b90 FUN_144f42b90 body=1480 status=ok
// SIG undefined FUN_144f42b90(void)

undefined4 FUN_144f42b90(longlong param_1,byte *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  byte local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x78);
  iVar12 = 0;
  do {
    *param_3 = *param_3 + -1;
    local_res8[0] = *param_2;
    param_2 = param_2 + 1;
    bVar9 = *(byte *)(lVar4 + 0x3b8);
    if (bVar9 == 0x60) {
      bVar9 = local_res8[0];
      if ((byte)(local_res8[0] + 0xbf) < 0x1a) {
        bVar9 = local_res8[0] + 0x20;
      }
      uVar14 = (ulonglong)*(short *)(lVar4 + 0x3b0);
      bVar2 = (&DAT_149c0cac0)[uVar14];
      while (iVar7 = (int)uVar14, -1 < (char)bVar2) {
        if (bVar2 == 8) goto LAB_144f42e86;
        if (bVar2 < 8) goto LAB_144f42e49;
        if (bVar2 == bVar9) {
          *(ushort *)(lVar4 + 0x3b0) =
               (ushort)(byte)(&DAT_149c0cac0)[iVar7 + 2] * 0x100 +
               (ushort)(byte)(&DAT_149c0cac0)[iVar7 + 1] + (short)uVar14;
          goto LAB_144f42e8e;
        }
        uVar14 = (ulonglong)(iVar7 + 3U);
        bVar2 = (&DAT_149c0cac0)[(int)(iVar7 + 3U)];
      }
      if ((((&DAT_149c0cac0)[iVar7] & 0x7f) == bVar9) &&
         (uVar14 = (ulonglong)(iVar7 + 1U), (&DAT_149c0cac0)[(int)(iVar7 + 1U)] != '\b')) {
LAB_144f42e49:
        *(short *)(lVar4 + 0x3b0) = (short)uVar14;
      }
      else {
LAB_144f42e86:
        *(undefined2 *)(lVar4 + 0x3b0) = 0xffff;
      }
LAB_144f42e8e:
      sVar3 = *(short *)(lVar4 + 0x3b0);
      if (sVar3 < 0) {
        if ((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c70f4c0) &&
           ((*(uint *)(param_1 + 0x70) & 0x20000000) != 0)) {
          uVar6 = 0;
          pbVar8 = &DAT_149c0cf58;
          do {
            if (*(char *)((ulonglong)*pbVar8 + 800 + lVar4) != '\0') {
              *(undefined1 *)(lVar4 + 0x3b8) = 0x61;
              break;
            }
            uVar6 = uVar6 + 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar6 < 8);
          if (uVar6 == 8) {
            if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x22c) & 0x100000) != 0) {
              return 2;
            }
            goto LAB_144f42d94;
          }
        }
        else {
          if (-1 < sVar3) goto LAB_144f42f0b;
LAB_144f42eff:
          *(undefined1 *)(lVar4 + 0x3b8) = 0x61;
        }
      }
      else {
LAB_144f42f0b:
        if ((byte)(&DAT_149c0cac0)[sVar3] < 8) {
          uVar6 = 0;
          pbVar8 = &DAT_149c0cf58;
          uVar13 = (uint)CONCAT11((&DAT_149c0cac0)[sVar3],(&DAT_149c0cac0)[sVar3 + 1]);
          uVar14 = (ulonglong)uVar13;
          do {
            if ((uVar13 == *pbVar8) && (*(char *)((ulonglong)*pbVar8 + 800 + lVar4) != '\0')) {
              FUN_144bd5aa0(2,"Duplicated method\n");
              return 0xffffffff;
            }
            uVar6 = uVar6 + 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar6 < 8);
          *(undefined1 *)(lVar4 + 0x3b4) = 0;
          if (uVar13 == 0x22) {
            uVar14 = 6;
          }
          *(char *)(lVar4 + 0x3b8) = (char)uVar14;
          lVar10 = *(longlong *)(lVar5 + 0x3a8);
          if (lVar10 == 0) {
            uVar6 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4c0);
          }
          else {
            uVar6 = (uint)*(ushort *)(lVar10 + (uVar14 & 0xff) * 2);
          }
          *(uint *)(lVar4 + 0x3a8) = uVar6;
          if ((char)uVar14 == '\b') {
LAB_144f42d87:
            if (*(char *)(lVar4 + 0x3b5) == '\0') {
              lVar5 = *(longlong *)(param_1 + 8);
              iVar7 = 0;
              if ((lVar5 != 0) && (bVar9 = *(byte *)(lVar5 + 0x325), bVar9 != 0)) {
                do {
                  iVar7 = iVar7 + (uint)*(ushort *)(lVar5 + 0x20 + (ulonglong)bVar9 * 8);
                  bVar9 = *(byte *)(lVar5 + 0x22 + (ulonglong)bVar9 * 8);
                } while (bVar9 != 0);
                if ((iVar7 != 0) &&
                   (bVar9 = *(byte *)(lVar5 + 0x341), uVar14 = (ulonglong)bVar9, bVar9 != 0)) {
                  do {
                    iVar12 = iVar12 + (uint)*(ushort *)(lVar5 + 0x20 + uVar14 * 8);
                    bVar2 = *(byte *)(lVar5 + 0x22 + uVar14 * 8);
                    uVar14 = (ulonglong)bVar2;
                  } while (bVar2 != 0);
                  if (iVar12 != 0) {
                    iVar12 = atoi((char *)((ulonglong)*(uint *)(lVar5 + 0x1c + (ulonglong)bVar9 * 8)
                                          + *(longlong *)(lVar5 + 0x10)));
                    *(char *)(param_1 + 0x1c5) = (char)iVar12;
                  }
                }
              }
              *(undefined1 *)(lVar4 + 0x3b8) = 99;
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
              return 0;
            }
LAB_144f42d94:
            FUN_144bd5aa0(4," forbidding on uri sanitation\n");
            FUN_144f3db60(param_1,0x193,0);
            return 0xffffffff;
          }
LAB_144f42fa6:
          *(char *)(lVar4 + 0x3b3) = *(char *)(lVar4 + 0x3b3) + '\x01';
LAB_144f42fac:
          if (*(byte *)(lVar4 + 0x3b3) == 0x5f) {
            FUN_144bd5aa0(2,"More hdr frags than we can deal with\n");
            return 0xffffffff;
          }
          *(undefined4 *)(lVar4 + 0x1c + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) =
               *(undefined4 *)(lVar4 + 0x3a0);
          *(undefined2 *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) = 0;
          *(undefined1 *)(lVar4 + 0x22 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) = 0;
          *(undefined1 *)(lVar4 + 0x23 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) = 2;
          bVar9 = *(byte *)((ulonglong)*(byte *)(lVar4 + 0x3b8) + 800 + lVar4);
          uVar14 = (ulonglong)bVar9;
          if (bVar9 == 0) {
            *(undefined1 *)((ulonglong)*(byte *)(lVar4 + 0x3b8) + 800 + lVar4) =
                 *(undefined1 *)(lVar4 + 0x3b3);
            *(uint *)(lVar4 + 0x3ac) = (uint)*(byte *)(lVar4 + 0x3b8);
          }
          else {
            pbVar8 = (byte *)(lVar4 + 0x22 + uVar14 * 8);
            cVar1 = *(char *)(lVar4 + 0x22 + uVar14 * 8);
            while (cVar1 != '\0') {
              uVar14 = (ulonglong)*pbVar8;
              pbVar8 = (byte *)(lVar4 + 0x22 + uVar14 * 8);
              cVar1 = *(char *)(lVar4 + 0x22 + uVar14 * 8);
            }
            *(undefined1 *)(lVar4 + 0x22 + uVar14 * 8) = *(undefined1 *)(lVar4 + 0x3b3);
            iVar7 = FUN_144f43c00(param_1,0x20);
            if (iVar7 < 0) {
              return 0xffffffff;
            }
          }
        }
      }
    }
    else if (bVar9 == 0x61) {
      if (local_res8[0] == 0xd) {
        *(undefined1 *)(lVar4 + 0x3b8) = 0x62;
      }
    }
    else if (bVar9 == 0x62) {
      if (*(char *)(lVar4 + 0x3b5) != '\0') goto LAB_144f42d94;
      if (local_res8[0] != 10) goto LAB_144f42eff;
      *(undefined1 *)(lVar4 + 0x3b8) = 0x60;
      *(undefined2 *)(lVar4 + 0x3b0) = 0;
    }
    else if ((bVar9 != 99) &&
            ((*(short *)(lVar4 + 0x20 + (ulonglong)*(byte *)((ulonglong)bVar9 + 800 + lVar4) * 8) !=
              0 || (local_res8[0] != 0x20)))) {
      uVar6 = 0;
      pbVar8 = &DAT_149c0cf58;
      do {
        if (bVar9 == *pbVar8) break;
        uVar6 = uVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 < 8);
      if (uVar6 != 8) {
        if (local_res8[0] == 0x20) {
          if ((*(short *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) == 0) &&
             (iVar7 = FUN_144f43c00(param_1,0x2f), iVar7 < 0)) {
            return 0xffffffff;
          }
          if ((*(char *)(lVar4 + 0x3b4) == '\x03') &&
             (2 < *(ushort *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8))) {
            *(int *)(lVar4 + 0x3a0) = *(int *)(lVar4 + 0x3a0) + -1;
            psVar11 = (short *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8);
            *psVar11 = *psVar11 + -1;
            lVar10 = (ulonglong)*(byte *)(lVar4 + 0x3b3) + 4;
            do {
              psVar11 = (short *)(lVar4 + lVar10 * 8);
              *(int *)(lVar4 + 0x3a0) = *(int *)(lVar4 + 0x3a0) + -1;
              *psVar11 = *psVar11 + -1;
              lVar10 = (ulonglong)*(byte *)(lVar4 + 0x3b3) + 4;
              if (*(ushort *)(lVar4 + lVar10 * 8) < 2) break;
            } while (*(char *)((ulonglong)*(uint *)(lVar4 + 0x3a0) + *(longlong *)(lVar4 + 0x10)) !=
                     '/');
          }
          iVar7 = FUN_144f43c00(param_1,0);
          if (iVar7 < 0) {
            return 0xffffffff;
          }
          *(undefined1 *)(lVar4 + 0x3b8) = 0xf;
          goto LAB_144f42fa6;
        }
        iVar7 = FUN_144f43160(param_1,local_res8);
        if (iVar7 == 0) goto LAB_144f42d3c;
        if (iVar7 == 1) goto LAB_144f42d7a;
        if (iVar7 == 2) goto LAB_144f42d94;
        if (iVar7 != 3) {
          return 0xffffffff;
        }
        goto LAB_144f42fac;
      }
LAB_144f42d3c:
      bVar9 = local_res8[0];
      if ((*(char *)(lVar4 + 0x3b8) != '\b') && (local_res8[0] == 0xd)) {
        if (*(char *)(lVar4 + 0x3b5) != '\0') goto LAB_144f42d94;
        bVar9 = 0;
        *(undefined1 *)(lVar4 + 0x3b8) = 0x62;
      }
      iVar7 = FUN_144f43c00(param_1,bVar9);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      if (iVar7 == 0) {
LAB_144f42d7a:
        if (*(char *)(lVar4 + 0x3b8) == '\b') goto LAB_144f42d87;
      }
      else {
        *(undefined1 *)(lVar4 + 0x3b8) = 0x61;
      }
    }
    if (*param_3 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144f43160 FUN_144f43160 body=961 status=ok
// SIG undefined FUN_144f43160(void)

undefined4 FUN_144f43160(longlong param_1,byte *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  short *psVar8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  bVar4 = *param_2;
  bVar2 = false;
  cVar3 = *(char *)(lVar1 + 0x3b5);
  if (cVar3 == '\0') {
    if (bVar4 == 0x25) {
      *(undefined1 *)(lVar1 + 0x3b5) = 1;
      return 1;
    }
  }
  else {
    if (cVar3 == '\x01') {
      cVar3 = FUN_144bd69b0(bVar4);
      if (cVar3 < '\0') {
        return 2;
      }
      *(byte *)(lVar1 + 0x3b6) = bVar4;
      *(undefined1 *)(lVar1 + 0x3b5) = 2;
      return 1;
    }
    if (cVar3 == '\x02') {
      cVar3 = FUN_144bd69b0(bVar4);
      if (cVar3 < '\0') {
        return 2;
      }
      cVar3 = FUN_144bd69b0(*(undefined1 *)(lVar1 + 0x3b6));
      bVar4 = FUN_144bd69b0(bVar4);
      bVar4 = bVar4 | cVar3 << 4;
      bVar2 = true;
      *param_2 = bVar4;
      *(undefined1 *)(lVar1 + 0x3b5) = 0;
    }
  }
  cVar3 = *(char *)(lVar1 + 0x3b4);
  if (cVar3 == '\0') {
    if (bVar4 == 0) {
      return 0xffffffff;
    }
    if (((bVar4 == 0x26) || (bVar4 == 0x3b)) && (!bVar2)) {
      iVar5 = FUN_144f43c00(param_1,0);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      *(byte *)(lVar1 + 0x22 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) =
           *(byte *)(lVar1 + 0x3b3) + 1;
      *(char *)(lVar1 + 0x3b3) = *(char *)(lVar1 + 0x3b3) + '\x01';
      if (0x5e < *(byte *)(lVar1 + 0x3b3)) {
        return 3;
      }
      *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + 1;
      *(undefined1 *)(lVar1 + 0x3b7) = 0;
      *(undefined4 *)(lVar1 + 0x1c + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) =
           *(undefined4 *)(lVar1 + 0x3a0);
      *(undefined2 *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      *(undefined1 *)(lVar1 + 0x22 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      return 1;
    }
    if (bVar4 == 0x3d) {
      if (bVar2) {
        if ((*(char *)(lVar1 + 0x36c) != '\0') && (*(char *)(lVar1 + 0x3b7) == '\0')) {
          *param_2 = 0x5f;
        }
      }
      else {
        *(undefined1 *)(lVar1 + 0x3b7) = 1;
      }
    }
    else if (bVar4 == 0x2b) {
      if (!bVar2) {
        *param_2 = 0x20;
      }
    }
    else {
      if (bVar4 != 0x2f) goto LAB_144f43249;
      if (*(char *)(lVar1 + 0x36c) == '\0') {
        *(undefined1 *)(lVar1 + 0x3b4) = 1;
      }
    }
LAB_144f43456:
    uVar6 = 0;
  }
  else {
    if (cVar3 == '\x01') {
      if (bVar4 != 0x2f) {
        if (bVar4 == 0x2e) {
          *(undefined1 *)(lVar1 + 0x3b4) = 2;
          return 1;
        }
LAB_144f43242:
        *(undefined1 *)(lVar1 + 0x3b4) = 0;
        goto LAB_144f43249;
      }
    }
    else {
      if (cVar3 == '\x02') {
        if (bVar4 == 0x2e) {
          *(undefined1 *)(lVar1 + 0x3b4) = 3;
          return 1;
        }
        if (bVar4 == 0x2f) {
          *(undefined1 *)(lVar1 + 0x3b4) = 1;
          return 1;
        }
        *(undefined1 *)(lVar1 + 0x3b4) = 0;
        iVar5 = FUN_144f43c00(param_1,0x2e);
        if (iVar5 < 0) {
          return 0xffffffff;
        }
      }
      else if (cVar3 == '\x03') {
        if ((bVar4 - 0x2f & 0xef) != 0) {
          iVar5 = FUN_144f43c00(param_1,0x2e);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          iVar5 = FUN_144f43c00(param_1,0x2e);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          goto LAB_144f43242;
        }
        if (2 < *(ushort *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8)) {
          *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + -1;
          psVar8 = (short *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8);
          *psVar8 = *psVar8 + -1;
          lVar7 = (ulonglong)*(byte *)(lVar1 + 0x3b3) + 4;
          do {
            psVar8 = (short *)(lVar1 + lVar7 * 8);
            *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + -1;
            *psVar8 = *psVar8 + -1;
            lVar7 = (ulonglong)*(byte *)(lVar1 + 0x3b3) + 4;
            if (*(ushort *)(lVar1 + lVar7 * 8) < 2) break;
          } while (*(char *)((ulonglong)*(uint *)(lVar1 + 0x3a0) + *(longlong *)(lVar1 + 0x10)) !=
                   '/');
        }
        *(undefined1 *)(lVar1 + 0x3b4) = 1;
        if (*(ushort *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) < 2) {
          return 1;
        }
      }
LAB_144f43249:
      if (((bVar4 != 0x3f) || (bVar2)) || (*(char *)(lVar1 + 0x36c) != '\0')) goto LAB_144f43456;
      if (*(char *)(lVar1 + 0x3b5) != '\0') {
        return 2;
      }
      iVar5 = FUN_144f43c00(param_1,0);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      *(char *)(lVar1 + 0x3b3) = *(char *)(lVar1 + 0x3b3) + '\x01';
      if (0x5e < *(byte *)(lVar1 + 0x3b3)) {
        return 3;
      }
      *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + 1;
      *(undefined4 *)(lVar1 + 0x1c + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) =
           *(undefined4 *)(lVar1 + 0x3a0);
      *(undefined2 *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      *(undefined1 *)(lVar1 + 0x22 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      *(undefined1 *)(lVar1 + 0x3b7) = 0;
      *(undefined1 *)(lVar1 + 0x36c) = *(undefined1 *)(lVar1 + 0x3b3);
      *(undefined1 *)(lVar1 + 0x3b4) = 0;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 144f43530 FUN_144f43530 body=222 status=ok
// SIG undefined FUN_144f43530(void)

void FUN_144f43530(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar2 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + lVar1;
  if (*(longlong *)(param_1 + 8) == 0) {
    if (*(int *)(lVar2 + 0x130) != *(int *)(lVar1 + 0x4c4)) {
      FUN_144f43b30();
      lVar1 = FUN_144f43a20(lVar2 + 0xa0,*(undefined4 *)(lVar1 + 0x4c0));
      *(longlong *)(param_1 + 8) = lVar1;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x3b2) = 1;
        *(longlong *)(*(longlong *)(param_1 + 8) + 8) = param_1;
        *(int *)(lVar2 + 0x130) = *(int *)(lVar2 + 0x130) + 1;
        FUN_144bd0740(param_1,0,9,local_28);
        goto LAB_144f435d4;
      }
    }
    FUN_144f43ab0();
  }
  else {
LAB_144f435d4:
    FUN_144f437c0(param_1,param_2);
    if (((*(uint *)(param_1 + 0x70) >> 0x1c & 1) != 0) &&
       ((short)*(uint *)(param_1 + 0x70) == 0x200)) {
      FUN_144bd3cc0(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144f43620 thunk_FUN_144f43630 body=5 status=ok
// SIG undefined thunk_FUN_144f43630(void)

void thunk_FUN_144f43630(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  __time64_t _Stack_38;
  undefined1 auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x78) + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  plVar1 = (longlong *)(lVar6 + 0x80);
  for (lVar3 = *plVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
    lVar3 = *plVar1;
    if (lVar3 == param_1) {
      *plVar1 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
      break;
    }
    plVar1 = (longlong *)(lVar3 + 0x10);
  }
  if (lVar2 != 0) {
    _time64(&_Stack_38);
    *(undefined8 *)(lVar2 + 0x318) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    lVar3 = *(longlong *)(lVar6 + 0x80);
    plVar1 = (longlong *)(lVar6 + 0x80);
    if (lVar3 != 0) {
      do {
        plVar5 = plVar1;
        lVar4 = lVar3;
        lVar3 = *(longlong *)(lVar4 + 0x10);
        plVar1 = (longlong *)(lVar4 + 0x10);
      } while (*(longlong *)(lVar4 + 0x10) != 0);
      if (lVar4 != 0) {
        *(longlong *)(lVar4 + 8) = lVar2;
        *(longlong *)(lVar2 + 8) = lVar4;
        FUN_144f437c0(lVar4,param_2);
        if (*(int *)(lVar4 + 0x1a0) != -1) {
          FUN_144bd0740(lVar4,0,9,auStack_30);
        }
        *plVar5 = *(longlong *)(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
        if (((*(uint *)(lVar4 + 0x70) >> 0x1c & 1) != 0) &&
           ((short)*(uint *)(lVar4 + 0x70) == 0x200)) {
          FUN_144bd3cc0(lVar4);
        }
        goto LAB_144f43781;
      }
    }
    FUN_144f42b20(lVar6,lVar2);
    *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + -1;
  }
LAB_144f43781:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 144f43630 FUN_144f43630 body=350 status=ok
// SIG undefined FUN_144f43630(void)

void FUN_144f43630(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  __time64_t local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x78) + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  plVar1 = (longlong *)(lVar6 + 0x80);
  for (lVar3 = *plVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
    lVar3 = *plVar1;
    if (lVar3 == param_1) {
      *plVar1 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
      break;
    }
    plVar1 = (longlong *)(lVar3 + 0x10);
  }
  if (lVar2 != 0) {
    _time64(&local_38);
    *(undefined8 *)(lVar2 + 0x318) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    lVar3 = *(longlong *)(lVar6 + 0x80);
    plVar1 = (longlong *)(lVar6 + 0x80);
    if (lVar3 != 0) {
      do {
        plVar5 = plVar1;
        lVar4 = lVar3;
        lVar3 = *(longlong *)(lVar4 + 0x10);
        plVar1 = (longlong *)(lVar4 + 0x10);
      } while (*(longlong *)(lVar4 + 0x10) != 0);
      if (lVar4 != 0) {
        *(longlong *)(lVar4 + 8) = lVar2;
        *(longlong *)(lVar2 + 8) = lVar4;
        FUN_144f437c0(lVar4,param_2);
        if (*(int *)(lVar4 + 0x1a0) != -1) {
          FUN_144bd0740(lVar4,0,9,local_30);
        }
        *plVar5 = *(longlong *)(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
        if (((*(uint *)(lVar4 + 0x70) >> 0x1c & 1) != 0) &&
           ((short)*(uint *)(lVar4 + 0x70) == 0x200)) {
          FUN_144bd3cc0(lVar4);
        }
        goto LAB_144f43781;
      }
    }
    FUN_144f42b20(lVar6,lVar2);
    *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + -1;
  }
LAB_144f43781:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 144f437b0 thunk_FUN_144f437c0 body=5 status=ok
// SIG undefined thunk_FUN_144f437c0(void)

void thunk_FUN_144f437c0(longlong param_1,int param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  memset((void *)(lVar2 + 800),0,0x5f);
  memset((void *)(lVar2 + 0x1c),0,0x2f8);
  *(undefined1 *)(lVar2 + 0x3b3) = 0;
  *(undefined8 *)(lVar2 + 0x3a0) = 0;
  *(undefined2 *)(lVar2 + 0x3b0) = 0;
  *(undefined1 *)(lVar2 + 0x3b8) = 0x60;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
  FUN_144bd7fb0(param_1,0x19,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x244));
  _time64((__time64_t *)(lVar2 + 0x318));
  if (*(int *)(param_1 + 0x1a0) != -1) {
    lVar2 = FUN_144bd64e0(param_1 + 0x140,0);
    if ((lVar2 != 0) && (param_2 != 0)) {
      lVar2 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 +
              *(longlong *)
               ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xe8 + *(longlong *)(param_1 + 0x78));
      puVar1 = (ushort *)(lVar2 + 10);
      *puVar1 = *puVar1 | 9;
      FUN_144bd5aa0(1,"%s: calling service\n","__lws_header_table_reset");
      FUN_144bd81e0(*(undefined8 *)(param_1 + 0x78),lVar2,(int)*(char *)(param_1 + 0x1c7));
    }
  }
  return;
}



// FUNCTION 144f437c0 FUN_144f437c0 body=271 status=ok
// SIG undefined FUN_144f437c0(void)

void FUN_144f437c0(longlong param_1,int param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  memset((void *)(lVar2 + 800),0,0x5f);
  memset((void *)(lVar2 + 0x1c),0,0x2f8);
  *(undefined1 *)(lVar2 + 0x3b3) = 0;
  *(undefined8 *)(lVar2 + 0x3a0) = 0;
  *(undefined2 *)(lVar2 + 0x3b0) = 0;
  *(undefined1 *)(lVar2 + 0x3b8) = 0x60;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
  FUN_144bd7fb0(param_1,0x19,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x244));
  _time64((__time64_t *)(lVar2 + 0x318));
  if (*(int *)(param_1 + 0x1a0) != -1) {
    lVar2 = FUN_144bd64e0(param_1 + 0x140,0);
    if ((lVar2 != 0) && (param_2 != 0)) {
      lVar2 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 +
              *(longlong *)
               ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xe8 + *(longlong *)(param_1 + 0x78));
      puVar1 = (ushort *)(lVar2 + 10);
      *puVar1 = *puVar1 | 9;
      FUN_144bd5aa0(1,"%s: calling service\n","__lws_header_table_reset");
      FUN_144bd81e0(*(undefined8 *)(param_1 + 0x78),lVar2,(int)*(char *)(param_1 + 0x1c7));
    }
  }
  return;
}



// FUNCTION 144f438d0 FUN_144f438d0 body=33 status=ok
// SIG undefined FUN_144f438d0(void)

longlong FUN_144f438d0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)((longlong)param_2 + 800 + lVar2);
  if (bVar1 == 0) {
    return 0;
  }
  return (ulonglong)*(uint *)(lVar2 + 0x1c + (ulonglong)bVar1 * 8) + *(longlong *)(lVar2 + 0x10);
}



// FUNCTION 144f43900 FUN_144f43900 body=279 status=ok
// SIG undefined FUN_144f43900(void)

undefined8 FUN_144f43900(longlong param_1,int param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 8) + 0x3b3);
  *pcVar1 = *pcVar1 + '\x01';
  cVar4 = *(char *)(*(longlong *)(param_1 + 8) + 0x3b3);
  if (cVar4 == '_') {
    FUN_144bd5aa0(2,"More hdr frags than we can deal with, dropping\n");
    return 0xffffffff;
  }
  *(char *)((longlong)param_2 + 800 + *(longlong *)(param_1 + 8)) = cVar4;
  lVar7 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0x1c + (ulonglong)*(byte *)(lVar7 + 0x3b3) * 8) =
       *(undefined4 *)(lVar7 + 0x3a0);
  *(undefined2 *)
   (*(longlong *)(param_1 + 8) + 0x20 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8
   ) = 0;
  *(undefined1 *)
   (*(longlong *)(param_1 + 8) + 0x22 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8
   ) = 0;
  do {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3a0);
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4c0);
    if (uVar6 <= uVar5) {
      if (uVar5 == uVar6) {
        FUN_144bd5aa0(1,"Ran out of header data space\n");
        return 0xffffffff;
      }
      FUN_144bd5aa0(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds",uVar5,uVar6);
      return 0xffffffff;
    }
    *(char *)((ulonglong)uVar5 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) = *param_3;
    piVar2 = (int *)(*(longlong *)(param_1 + 8) + 0x3a0);
    *piVar2 = *piVar2 + 1;
    if (*param_3 != '\0') {
      psVar3 = (short *)(*(longlong *)(param_1 + 8) + 0x20 +
                        (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8);
      *psVar3 = *psVar3 + 1;
    }
    cVar4 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar4 != '\0');
  return 0;
}



// FUNCTION 144f43a20 FUN_144f43a20 body=144 status=ok
// SIG undefined FUN_144f43a20(void)

undefined8 * FUN_144f43a20(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_144f3cf20(0x3c0,"ah struct");
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = thunk_FUN_144f3cee0(0,param_2,"ah data");
    puVar1[2] = lVar2;
    if (lVar2 != 0) {
      *puVar1 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 **)(param_1 + 0x78) = puVar1;
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      return puVar1;
    }
    thunk_FUN_144f3cee0(puVar1,0,"lws_free");
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144f43ab0 FUN_144f43ab0 body=118 status=ok
// SIG undefined FUN_144f43ab0(void)

void FUN_144f43ab0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  for (lVar1 = *(longlong *)(lVar2 + 0x120); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    if (lVar1 == param_1) goto LAB_144f43b19;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x120);
  *(int *)(lVar2 + 0x128) = *(int *)(lVar2 + 0x128) + 1;
  *(longlong *)(lVar2 + 0x120) = param_1;
  FUN_144bd0740(param_1,9,0,local_28);
LAB_144f43b19:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144f43b30 FUN_144f43b30 body=85 status=ok
// SIG undefined FUN_144f43b30(void)

undefined8 FUN_144f43b30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  plVar1 = (longlong *)(lVar5 + 0x120);
  lVar3 = *plVar1;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = *plVar1;
    if (lVar4 == param_1) break;
    lVar3 = *(longlong *)(lVar4 + 0x10);
    plVar1 = (longlong *)(lVar4 + 0x10);
  }
  *plVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  piVar2 = (int *)(lVar5 + 0x128);
  *piVar2 = *piVar2 + -1;
  return 1;
}



// FUNCTION 144f43b90 FUN_144f43b90 body=104 status=ok
// SIG undefined FUN_144f43b90(void)

undefined8 FUN_144f43b90(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3a0);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4c0);
  if (uVar1 < uVar2) {
    return 0;
  }
  if (uVar1 == uVar2) {
    FUN_144bd5aa0(1,"Ran out of header data space\n");
    return 1;
  }
  FUN_144bd5aa0(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds",uVar1,uVar2);
  return 1;
}



// FUNCTION 144f43c00 FUN_144f43c00 body=217 status=ok
// SIG undefined FUN_144f43c00(void)

undefined8 FUN_144f43c00(longlong param_1,char param_2)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_144f43b90();
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  uVar5 = (uint)*(ushort *)(lVar3 + 0x20 + (ulonglong)*(byte *)(lVar3 + 0x3b3) * 8);
  if (*(uint *)(lVar3 + 0x3a8) <= uVar5) {
    if (uVar5 == *(uint *)(lVar3 + 0x3a8)) {
      iVar4 = FUN_144f43b90(param_1);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      *(undefined1 *)
       ((ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x3a0) +
       *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) = 0;
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x3a0);
      *piVar1 = *piVar1 + 1;
      FUN_144bd5aa0(2,"header %i exceeds limit %d\n",
                    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3b8),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3a8));
    }
    return 1;
  }
  *(char *)((ulonglong)*(uint *)(lVar3 + 0x3a0) + *(longlong *)(lVar3 + 0x10)) = param_2;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x3a0);
  *piVar1 = *piVar1 + 1;
  if (param_2 != '\0') {
    psVar2 = (short *)(*(longlong *)(param_1 + 8) + 0x20 +
                      (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8);
    *psVar2 = *psVar2 + 1;
  }
  return 0;
}



// FUNCTION 144f43ce0 FUN_144f43ce0 body=38 status=ok
// SIG undefined FUN_144f43ce0(void)

char FUN_144f43ce0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_144bd7d50(*(undefined8 *)(param_2 + 0x78),0x47,0);
  return (iVar1 != 0) + '\x04';
}



// FUNCTION 144f43d10 FUN_144f43d10 body=200 status=ok
// SIG undefined FUN_144f43d10(void)

undefined8 FUN_144f43d10(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (((((uVar2 == 0x202) || (uVar2 == 0x11)) || (uVar2 == 0x20a)) ||
      ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) != 0)) && (param_3 != 0)) {
    while (*(char *)(param_1 + 0x1ca) == '\0') {
      uVar1 = *(undefined1 *)*param_2;
      *param_2 = (longlong)((undefined1 *)*param_2 + 1);
      uVar3 = FUN_1452f7fe0(param_1,uVar1);
      if ((int)uVar3 != 0) {
        FUN_144bd5aa0(4,"%s: client_rx_sm exited, DROPPING %d\n","lws_ws_handshake_client",
                      param_3 & 0xffffffff);
        return 0xffffffff;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return uVar3;
      }
    }
    FUN_144bd8570(param_1,*param_2,0,param_3 & 0xffffffff);
    *param_2 = *param_2 + param_3;
  }
  return 0;
}



// FUNCTION 144f43de0 FUN_144f43de0 body=405 status=ok
// SIG undefined FUN_144f43de0(void)

void FUN_144f43de0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  char local_c0 [39];
  undefined1 local_99;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = FUN_144f3bc80(*(undefined8 *)(param_1 + 0x78),local_d8,0x10);
  if (iVar3 == 0x10) {
    FUN_144f455c0(local_d8,0x10,local_c0);
    iVar3 = FUN_1424c2e40(param_2,"Upgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Key: "
                         );
    pcVar7 = local_c0;
    do {
      cVar1 = *pcVar7;
      pcVar7[(param_2 + iVar3) - (longlong)local_c0] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar2 = lVar5 + 1;
      lVar5 = lVar4;
    } while (local_c0[lVar2] != '\0');
    lVar4 = param_2 + iVar3 + lVar4;
    iVar3 = FUN_1424c2e40(lVar4,&DAT_149e01eb0);
    lVar4 = lVar4 + iVar3;
    lVar5 = FUN_144f438d0(param_1,0x57);
    if (lVar5 != 0) {
      uVar6 = FUN_144f438d0(param_1,0x57);
      iVar3 = FUN_1424c2e40(lVar4,"Sec-WebSocket-Protocol: %s\r\n",uVar6);
      lVar4 = lVar4 + iVar3;
    }
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
    if (cVar1 != '\0') {
      FUN_1424c2e40(lVar4,"Sec-WebSocket-Version: %d\r\n",cVar1);
    }
    local_99 = 0;
    iVar3 = FUN_1424c2e40(local_98,"%s258EAFA5-E914-47DA-95CA-C5AB0DC85B11",local_c0);
    FUN_1452f75a0(local_98,(longlong)iVar3,local_d8);
    FUN_144f455c0(local_d8,0x14,*(longlong *)(param_1 + 8) + 0x37f,0x1e);
  }
  else {
    FUN_144bd5aa0(1,"Unable to read from random dev %s\n","/dev/urandom");
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144f43f90 FUN_144f43f90 body=1783 status=ok
// SIG undefined FUN_144f43f90(void)

undefined4 FUN_144f43f90(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined4 uVar14;
  
  lVar5 = *(longlong *)(param_1 + 0x78);
  bVar6 = false;
  if ((*(uint *)(param_1 + 0x1bc) & 0x800) == 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x3a4);
    if (iVar7 == 0x191) {
      FUN_144bd5aa0(2,"lws_client_handshake: got bad HTTP response \'%d\'\n");
      *param_2 = "HS: ws upgrade unauthorized";
    }
    else if (iVar7 == 0x65) {
      iVar7 = FUN_144f429b0(param_1,0xd);
      if (iVar7 == 0) {
        *param_2 = "HS: ACCEPT missing";
      }
      else {
        pcVar8 = (char *)FUN_144f438d0(param_1,5);
        if (pcVar8 == (char *)0x0) {
          *param_2 = "HS: UPGRADE missing";
        }
        else {
          cVar3 = *pcVar8;
          pcVar9 = pcVar8;
          while (cVar3 != '\0') {
            iVar7 = tolower((int)*pcVar9);
            *pcVar9 = (char)iVar7;
            pcVar9 = pcVar9 + 1;
            cVar3 = *pcVar9;
          }
          iVar7 = strcmp(pcVar8,"websocket");
          if (iVar7 == 0) {
            pcVar8 = (char *)FUN_144f438d0(param_1,4);
            if (pcVar8 == (char *)0x0) {
              *param_2 = "HS: CONNECTION missing";
            }
            else {
              cVar3 = *pcVar8;
              pcVar9 = pcVar8;
              while (cVar3 != '\0') {
                iVar7 = tolower((int)*pcVar9);
                *pcVar9 = (char)iVar7;
                pcVar9 = pcVar9 + 1;
                cVar3 = *pcVar9;
              }
              lVar11 = 0;
              do {
                lVar13 = lVar11;
                if (pcVar8[lVar13] != "upgrade"[lVar13]) {
                  FUN_144bd5aa0(2,"lws_client_int_s_hs: bad header %s\n",pcVar8);
                  *param_2 = "HS: UPGRADE malformed";
                  return 3;
                }
                lVar11 = lVar13 + 1;
              } while (lVar13 + 1 != 8);
              pcVar8 = (char *)FUN_144f438d0(param_1,(int)lVar13 + 0x50);
              iVar7 = FUN_144f429b0(param_1,0xc);
              if (iVar7 == 0) {
                lVar11 = *(longlong *)(param_1 + 0x80);
                local_res8[0] = 0;
                *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar11 + 0x170);
              }
              else {
                pcVar9 = (char *)FUN_144f438d0(param_1,0xc);
                lVar11 = -1;
                do {
                  lVar11 = lVar11 + 1;
                } while (pcVar9[lVar11] != '\0');
                if (pcVar8 == (char *)0x0) {
LAB_144f4463c:
                  *param_2 = "HS: PROTOCOL malformed";
                  return 2;
                }
LAB_144f44265:
                if (*pcVar8 != '\0') {
                  if (bVar6) goto LAB_144f442c9;
                  iVar7 = strncmp(pcVar8,pcVar9,(longlong)(int)lVar11);
                  if ((iVar7 == 0) &&
                     ((pcVar8[(int)lVar11] == ',' || (pcVar8[(int)lVar11] == '\0')))) {
                    bVar6 = true;
                  }
                  else {
                    do {
                      cVar3 = *pcVar8;
                      if (cVar3 == '\0') goto LAB_144f44265;
                      pcVar8 = pcVar8 + 1;
                    } while (cVar3 != ',');
                    cVar3 = *pcVar8;
                    while ((cVar3 != '\0' && (cVar3 == ' '))) {
                      pcVar1 = pcVar8 + 1;
                      pcVar8 = pcVar8 + 1;
                      cVar3 = *pcVar1;
                    }
                  }
                  goto LAB_144f44265;
                }
                if (!bVar6) goto LAB_144f4463c;
LAB_144f442c9:
                local_res8[0] = 0;
                uVar12 = *(uint *)(param_1 + 0x70) & 0x10000000;
                if (uVar12 == 0) {
                  *(undefined8 *)(param_1 + 0xa0) = 0;
                }
                lVar11 = *(longlong *)(param_1 + 0x80);
                if (*(longlong *)(*(longlong *)(lVar11 + 0x170) + 8) != 0) {
                  do {
                    if (*(longlong *)(param_1 + 0xa0) == 0) {
                      pcVar8 = pcVar9;
                      do {
                        cVar3 = *pcVar8;
                        cVar4 = pcVar8[*(longlong *)
                                        ((longlong)local_res8[0] * 0x38 +
                                        *(longlong *)(lVar11 + 0x170)) - (longlong)pcVar9];
                        if (cVar3 != cVar4) break;
                        pcVar8 = pcVar8 + 1;
                      } while (cVar4 != '\0');
                      if (cVar3 == cVar4) {
                        *(longlong *)(param_1 + 0xa0) =
                             (longlong)local_res8[0] * 0x38 + *(longlong *)(lVar11 + 0x170);
                        break;
                      }
                    }
                    local_res8[0] = local_res8[0] + 1;
                  } while (*(longlong *)
                            ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170)) !=
                           0);
                }
                if (*(longlong *)
                     ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170)) == 0) {
                  if (uVar12 == 0) {
                    *param_2 = "HS: Cannot match protocol";
                    return 2;
                  }
                  local_res8[0] = 0;
                  if (*(longlong *)(*(longlong *)(lVar11 + 0x170) + 8) != 0) {
                    do {
                      if (*(undefined8 **)(param_1 + 0xa0) != (undefined8 *)0x0) {
                        pcVar8 = (char *)**(undefined8 **)(param_1 + 0xa0);
                        lVar13 = *(longlong *)
                                  ((longlong)local_res8[0] * 0x38 + *(longlong *)(lVar11 + 0x170)) -
                                 (longlong)pcVar8;
                        do {
                          cVar3 = *pcVar8;
                          cVar4 = pcVar8[lVar13];
                          if (cVar3 != cVar4) break;
                          pcVar8 = pcVar8 + 1;
                        } while (cVar4 != '\0');
                        if (cVar3 == cVar4) {
                          *(longlong *)(param_1 + 0xa0) =
                               (longlong)local_res8[0] * 0x38 + *(longlong *)(lVar11 + 0x170);
                          break;
                        }
                      }
                      local_res8[0] = local_res8[0] + 1;
                    } while (*(longlong *)
                              ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170))
                             != 0);
                  }
                  if (*(longlong *)
                       ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170)) == 0) {
                    if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) {
                      FUN_144bd5aa0(1,"No protocol on client\n");
                      return 2;
                    }
                    FUN_144bd5aa0(1,"Failed to match protocol %s\n",
                                  **(undefined8 **)(param_1 + 0xa0));
                    return 2;
                  }
                }
              }
              plVar2 = (longlong *)(param_1 + 0xb0);
              lVar13 = (longlong)local_res8[0] * 8;
              *(longlong *)(param_1 + 0xa8) = *(longlong *)(lVar11 + 400) + lVar13;
              *plVar2 = *(longlong *)(lVar13 + *(longlong *)(lVar11 + 400));
              *(longlong *)(lVar13 + *(longlong *)(lVar11 + 400)) = param_1;
              if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0xa8) = plVar2;
              }
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000000;
              pcVar9 = (char *)FUN_144f438d0(param_1,0xd);
              pcVar8 = pcVar9;
              do {
                cVar3 = *pcVar8;
                cVar4 = pcVar8[(*(longlong *)(param_1 + 8) + 0x37f) - (longlong)pcVar9];
                if (cVar3 != cVar4) break;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              if (cVar3 != cVar4) {
                FUN_144bd5aa0(2,"lws_client_int_s_hs: accept \'%s\' wrong vs \'%s\'\n",pcVar9);
                *param_2 = "HS: Accept hash wrong";
                return 2;
              }
              iVar7 = FUN_144bd76e0(param_1);
              if (iVar7 != 0) {
                FUN_144bd5aa0(1,"Problem allocating wsi user mem\n");
                *param_2 = "HS: OOM";
                return 2;
              }
              uVar14 = 0;
              iVar7 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                                (param_1,2,*(undefined8 *)(param_1 + 0x130),0,0);
              if (iVar7 != 0) {
                *param_2 = "HS: Rejected by filter cb";
                return 2;
              }
              FUN_144bd6160(param_1,0,0);
              thunk_FUN_144f43630(param_1,0);
              FUN_144bd7670(param_1,0x10000000,0x117,&PTR_DAT_14c6da110);
              FUN_144bd4dd0(param_1);
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffdff | 0x100;
              iVar7 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x18);
              if (iVar7 == 0) {
                iVar7 = *(int *)(lVar5 + 0x4bc);
              }
              local_res8[0] = iVar7 + 0x10;
              uVar10 = thunk_FUN_144f3cee0(0,(longlong)(iVar7 + 0x14),"client frame buffer");
              **(undefined8 **)(param_1 + 0x60) = uVar10;
              if (**(longlong **)(param_1 + 0x60) == 0) {
                FUN_144bd5aa0(1,"Out of Mem allocating rx buffer %d\n",local_res8[0]);
                *param_2 = "HS: OOM";
                return 2;
              }
              *(int *)((longlong)*(longlong **)(param_1 + 0x60) + 0xb4) = local_res8[0];
              iVar7 = Ordinal_21(*(undefined8 *)(param_1 + 0x178),0xffff,0x1001,local_res8,
                                 CONCAT44(uVar14,4));
              if (iVar7 == 0) {
                iVar7 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                                  (param_1,3,*(undefined8 *)(param_1 + 0x130),0,0);
                if (iVar7 == 0) {
                  return 0;
                }
                *param_2 = "HS: Rejected at CLIENT_ESTABLISHED";
              }
              else {
                FUN_144bd5aa0(2,"Failed to set SNDBUF to %d",local_res8[0]);
                *param_2 = "HS: SO_SNDBUF failed";
              }
            }
          }
          else {
            FUN_144bd5aa0(2,"lws_client_handshake: got bad Upgrade header \'%s\'\n",pcVar8);
            *param_2 = "HS: Upgrade to something other than websocket";
          }
        }
      }
    }
    else {
      FUN_144bd5aa0(2,"lws_client_handshake: got bad HTTP response \'%d\'\n");
      *param_2 = "HS: ws upgrade response not 101";
    }
  }
  else {
    FUN_144bd5aa0(2,"%s: client ws-over-h2 upgrade not supported yet\n","lws_client_ws_upgrade");
    *param_2 = "HS: h2 / ws upgrade unsupported";
  }
  return 3;
}



// FUNCTION 144f44690 FUN_144f44690 body=126 status=ok
// SIG undefined FUN_144f44690(void)

undefined8 FUN_144f44690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_144f3cf20(200,"client ws struct");
  *(longlong *)(param_2 + 0x60) = lVar1;
  if (lVar1 == 0) {
    FUN_144bd5aa0(4,&DAT_1499807a4);
    return 1;
  }
  iVar2 = 0xd;
  if (1 < *(int *)(param_1 + 0x38) + 1U) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  *(char *)(lVar1 + 0xc1) = (char)iVar2;
  return 0;
}



// FUNCTION 144f44710 FUN_144f44710 body=649 status=ok
// SIG undefined FUN_144f44710(void)

longlong FUN_144f44710(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong local_res10;
  
  local_res10 = param_2;
  lVar2 = FUN_144f438d0(param_1,0x57);
  puVar3 = (undefined1 *)FUN_144f438d0(param_1);
  if (puVar3 == (undefined1 *)0x0) {
    *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 4;
    puVar3 = &DAT_14b4fcdd9;
  }
  else {
    *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) & 0xfffffffb;
  }
  lVar4 = 0;
  do {
    lVar6 = lVar4 + 1;
    if (puVar3[lVar4] != (&DAT_149c0d764)[lVar4]) {
      uVar5 = FUN_144f438d0(param_1,0x59);
      iVar1 = FUN_1424c2e40(local_res10,"%s %s HTTP/1.1\r\n",puVar3,uVar5);
      local_res10 = local_res10 + iVar1;
      iVar1 = FUN_1424c2e40(local_res10,"Pragma: no-cache\r\nCache-Control: no-cache\r\n");
      local_res10 = local_res10 + iVar1;
      uVar5 = FUN_144f438d0(param_1,0x5a);
      iVar1 = FUN_1424c2e40(local_res10,"Host: %s\r\n",uVar5);
      local_res10 = local_res10 + iVar1;
      lVar2 = FUN_144f438d0(param_1,0x5b);
      if (lVar2 != 0) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4b0) & 0x80000) == 0) {
          uVar5 = FUN_144f438d0(param_1,0x5b);
          pcVar7 = "Origin: http://%s\r\n";
        }
        else {
          uVar5 = FUN_144f438d0(param_1,0x5b);
          pcVar7 = "Origin: %s\r\n";
        }
        iVar1 = FUN_1424c2e40(local_res10,pcVar7,uVar5);
        local_res10 = local_res10 + iVar1;
      }
      if ((*(byte *)(param_1 + 0x1bc) & 4) != 0) {
        local_res10 = FUN_144f43de0(param_1);
      }
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                        (param_1,0x18,*(undefined8 *)(param_1 + 0x130),&local_res10,
                         param_2 + -0xc +
                         ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4bc) - local_res10)
                        );
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_1424c2e40(local_res10,&DAT_149e01eb0);
      return local_res10 + iVar1;
    }
    lVar4 = lVar6;
  } while (lVar6 != 4);
  FUN_144bd6160(param_1,0,0);
  FUN_144bd5aa0(4,"client transition to raw\n");
  if (lVar2 != 0) {
    lVar4 = FUN_144bd5ee0(*(undefined8 *)(param_1 + 0x80),lVar2);
    if (lVar4 == 0) {
      FUN_144bd5aa0(1,"protocol %s not enabled on vhost\n",lVar2);
      return 0;
    }
    FUN_144bd7950(param_1,lVar4);
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                    (param_1,0x3e,*(undefined8 *)(param_1 + 0x130),0,0);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144bd7670(param_1,0,0x117,&PTR_s_raw_skt_14c70f620);
  thunk_FUN_144f43630(param_1,1);
  return 0;
}



// FUNCTION 144f449a0 FUN_144f449a0 body=1708 status=ok
// SIG undefined FUN_144f449a0(void)

void FUN_144f449a0(longlong param_1)

{
  longlong lVar1;
  char *****pppppcVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  char *****pppppcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *****pppppcVar9;
  uint uVar10;
  longlong lVar11;
  char *****pppppcVar12;
  bool bVar13;
  undefined1 auStack_1b8 [32];
  char ****local_198;
  undefined8 local_190;
  longlong local_188;
  char *local_180;
  uint local_178 [2];
  undefined8 local_170;
  char ****local_168;
  longlong local_160;
  char local_158;
  char ***local_157 [37];
  undefined1 local_2d [5];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  pppppcVar9 = (char *****)0x0;
  uVar10 = 0;
  local_178[0] = 0;
  local_170 = 0;
  pppppcVar12 = (char *****)0x3ea;
  local_180 = (char *)0x0;
  lVar11 = param_1;
  if (((*(byte *)(param_1 + 0x1bc) & 0x40) != 0) &&
     (lVar5 = *(longlong *)(param_1 + 0x118), *(longlong *)(param_1 + 0x118) != 0)) {
    do {
      lVar11 = lVar5;
      lVar5 = *(longlong *)(lVar11 + 8);
    } while (lVar5 != 0);
    lVar11 = lVar11 + -0x120;
  }
  local_188 = param_1;
  FUN_144bd3de0();
  lVar5 = *(longlong *)(local_188 + 8);
  if ((*(byte *)(local_188 + 0x1bc) & 4) == 0) {
    FUN_144bd7670(local_188,0x10000000,0x117,&PTR_DAT_14c70f4c0);
    *(longlong *)(local_188 + 8) = lVar5;
    *(undefined4 *)(lVar5 + 0x3a4) = 0;
  }
  *(undefined4 *)(local_188 + 0x34) = 1;
  if ((*(uint *)(local_188 + 0x1bc) & 0x800) == 0) {
    pcVar4 = (char *)FUN_144f438d0(local_188,0xf);
    if ((*(byte *)(local_188 + 0x1bc) & 4) == 0) {
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)FUN_144f438d0(local_188,0x4f);
        *(undefined4 *)(local_188 + 0x34) = 0;
        if (pcVar4 == (char *)0x0) {
          local_180 = "HS: URI missing";
          pppppcVar12 = pppppcVar9;
          goto LAB_144f44ff9;
        }
      }
    }
    else if (pcVar4 == (char *)0x0) {
      local_180 = "HS: URI missing";
      pppppcVar12 = pppppcVar9;
      goto LAB_144f44ff9;
    }
LAB_144f44b0c:
    iVar3 = atoi(pcVar4);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x3a4) = iVar3;
    }
    if ((iVar3 - 0x12dU < 3) || (iVar3 - 0x133U < 2)) {
      pppppcVar12 = (char *****)FUN_144f438d0(local_188,0x3b);
      if (pppppcVar12 == (char *****)0x0) {
        local_180 = "HS: Redirect code but no Location";
        pppppcVar12 = pppppcVar9;
      }
      else {
        if (*(char *)pppppcVar12 == '/') {
          uVar10 = *(uint *)(local_188 + 0x170) & 1;
          local_170 = FUN_144f438d0(local_188,0x58);
          local_178[0] = (uint)*(ushort *)(local_188 + 0x1c0);
          pppppcVar12 = (char *****)((longlong)pppppcVar12 + 1);
        }
        else {
          pcVar4 = strchr((char *)pppppcVar12,0x3a);
          if (pcVar4 == (char *)0x0) {
            uVar10 = *(uint *)(local_188 + 0x170) & 1;
            local_170 = FUN_144f438d0(local_188,0x58);
            local_178[0] = (uint)*(ushort *)(local_188 + 0x1c0);
            local_168 = local_157;
            uVar7 = FUN_144f438d0(local_188,0x59);
            FUN_144bd66a0(&local_158,uVar7,300);
            pcVar4 = strrchr(&local_158,0x2f);
            if (pcVar4 != (char *)0x0) {
              FUN_144bd66a0(pcVar4 + 1,pppppcVar12,local_2d + -(longlong)pcVar4);
              pppppcVar12 = (char *****)local_168;
            }
          }
          else {
            local_198 = (char ****)&local_168;
            iVar3 = FUN_144bd66e0(pppppcVar12,&local_160,&local_170,local_178);
            pppppcVar2 = pppppcVar9;
            if (iVar3 != 0) {
              local_180 = "HS: URI did not parse";
              pppppcVar12 = pppppcVar9;
              goto LAB_144f44ff9;
            }
            do {
              pppppcVar6 = pppppcVar2;
              pppppcVar2 = pppppcVar9;
              pppppcVar12 = (char *****)local_168;
              if (*(char *)((longlong)pppppcVar6 + local_160) != *(char *)(pppppcVar6 + 0x29687818))
              goto LAB_144f44ee0;
              pppppcVar2 = (char *****)((longlong)pppppcVar6 + 1);
            } while ((char *****)((longlong)pppppcVar6 + 1) != (char *****)&DAT_00000004);
            uVar10 = (int)pppppcVar6 - 2;
          }
        }
LAB_144f44f86:
        local_168 = (char ****)pppppcVar12;
        if (((*(byte *)(local_188 + 0x170) & 1) == 0) || (uVar10 != 0)) {
          local_190 = local_170;
          local_198 = local_168;
          lVar5 = FUN_144bd3940(&local_188,uVar10,local_170,local_178[0]);
          if (lVar5 != 0) goto LAB_144f44d89;
          FUN_144bd5aa0(1,"Redirect failed\n");
          local_180 = "HS: Redirect failed";
          pppppcVar12 = pppppcVar9;
          if (local_188 == 0) goto LAB_144f44d89;
        }
        else {
          local_180 = "HS: Redirect attempted SSL downgrade";
          pppppcVar12 = pppppcVar9;
        }
      }
    }
    else {
      uVar10 = *(uint *)(local_188 + 0x1bc);
      if ((uVar10 & 4) == 0) {
        if (((uVar10 & 0xc00) == 0) && (lVar11 == local_188)) {
          if (*(int *)(local_188 + 0x34) == 1) {
            *(uint *)(local_188 + 0x1bc) = uVar10 | 0x80;
          }
          else {
            *(uint *)(local_188 + 0x1bc) = uVar10 | 0x100;
            lVar5 = *(longlong *)(local_188 + 0x118);
            while (lVar5 != 0) {
              lVar1 = *(longlong *)(lVar5 + 8);
              FUN_144bd63c0(lVar5);
              *(uint *)(lVar5 + 0x9c) = *(uint *)(lVar5 + 0x9c) & 0xfffffdff;
              FUN_144bd7670(lVar5 + -0x120,0x10000000,0x200,&PTR_DAT_14c70f4c0);
              *(undefined8 *)(lVar5 + 0x10) = 0;
              lVar5 = lVar1;
            }
          }
        }
        iVar3 = FUN_144bd76e0(local_188);
        if (iVar3 == 0) {
          *(uint *)(local_188 + 0x1bc) = *(uint *)(local_188 + 0x1bc) & 0xfffffff7;
          *(undefined4 *)(local_188 + 0x1b0) = 0;
          iVar3 = FUN_144f429b0(local_188,0x44);
          if (iVar3 != 0) {
            lVar5 = FUN_144f438d0(local_188,0x44);
            pppppcVar2 = pppppcVar9;
            do {
              pppppcVar6 = pppppcVar2;
              bVar13 = *(char *)((longlong)pppppcVar6 + lVar5) == *(char *)(pppppcVar6 + 0x293818e9)
              ;
              if (!bVar13) goto LAB_144f44c6a;
              pppppcVar2 = (char *****)((longlong)pppppcVar6 + 1);
            } while ((char *****)((longlong)pppppcVar6 + 1) != (char *****)&DAT_00000008);
            bVar13 = *(char *)((longlong)pppppcVar6 + lVar5) == *(char *)(pppppcVar6 + 0x293818e9);
LAB_144f44c6a:
            *(uint *)(local_188 + 0x1bc) =
                 (uint)bVar13 << 3 | *(uint *)(local_188 + 0x1bc) & 0xfffffff7;
            *(undefined1 *)(local_188 + 0x1cb) = 0;
          }
          iVar3 = FUN_144f429b0(local_188,0x1b);
          if (iVar3 == 0) {
            if ((*(byte *)(local_188 + 0x1bc) & 8) == 0) {
              *(undefined4 *)(local_188 + 0x34) = 0;
            }
          }
          else {
            uVar7 = FUN_144f438d0(local_188,0x1b);
            uVar7 = atoll(uVar7);
            *(undefined8 *)(local_188 + 0x48) = uVar7;
            *(undefined8 *)(local_188 + 0x50) = uVar7;
          }
          local_198 = (char ****)0x0;
          iVar3 = (**(code **)(*(longlong *)(lVar11 + 0xa0) + 8))
                            (lVar11,2,*(undefined8 *)(lVar11 + 0x130));
          if (iVar3 == 0) {
            FUN_144bd6160(local_188,0,0);
            local_198 = (char ****)0x0;
            *(uint *)(local_188 + 0x1b8) = *(uint *)(local_188 + 0x1b8) & 0xfffffdff | 0x100;
            iVar3 = (**(code **)(*(longlong *)(lVar11 + 0xa0) + 8))
                              (lVar11,0x2c,*(undefined8 *)(lVar11 + 0x130));
            if (iVar3 == 0) {
              if (lVar11 != local_188) {
                thunk_FUN_144f43630(lVar11,0);
              }
              goto LAB_144f44d89;
            }
            local_180 = "HS: disallowed at ESTABLISHED";
            pppppcVar12 = pppppcVar9;
          }
          else {
            local_180 = "HS: disallowed by client filter";
          }
        }
        else {
          FUN_144bd5aa0(1,"Problem allocating wsi user mem\n");
          local_180 = "HS: OOM";
        }
      }
      else {
        iVar3 = FUN_144f43f90(local_188,&local_180);
        if ((iVar3 != 2) && (pppppcVar12 = pppppcVar9, iVar3 != 3)) goto LAB_144f44d89;
      }
    }
  }
  else {
    pcVar4 = (char *)FUN_144f438d0(local_188,0x27);
    if (pcVar4 != (char *)0x0) goto LAB_144f44b0c;
    local_180 = "HS: :status missing";
    pppppcVar12 = pppppcVar9;
  }
LAB_144f44ff9:
  if (*(longlong *)(local_188 + 0xa0) != 0) {
    if (local_180 != (char *)0x0) {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar8 = uVar8 + 1;
      } while (local_180[uVar8] != '\0');
      pppppcVar9 = (char *****)(uVar8 & 0xffffffff);
    }
    local_198 = (char ****)pppppcVar9;
    (**(code **)(*(longlong *)(lVar11 + 0xa0) + 8))(lVar11,1,*(undefined8 *)(lVar11 + 0x130));
  }
  *(uint *)(local_188 + 0x1b8) = *(uint *)(local_188 + 0x1b8) | 0x20000;
  thunk_FUN_144bd6da0(local_188,pppppcVar12,"c hs interp");
LAB_144f44d89:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1b8);
  while (pppppcVar2 = (char *****)((longlong)pppppcVar6 + 1),
        (char *****)((longlong)pppppcVar6 + 1) != (char *****)&DAT_00000006) {
LAB_144f44ee0:
    pppppcVar6 = pppppcVar2;
    if (*(char *)((longlong)pppppcVar6 + local_160) != *(char *)((longlong)pppppcVar6 + 0x14998131c)
       ) goto LAB_144f44f86;
  }
  uVar10 = (int)pppppcVar6 - 4;
  goto LAB_144f44f86;
}



// FUNCTION 144f45070 FUN_144f45070 body=1337 status=ok
// SIG undefined FUN_144f45070(void)

void FUN_144f45070(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  char *_Str1;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  char local_a8 [128];
  ulonglong local_28;
  char *pcVar14;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_1[0xf];
  pcVar14 = (char *)0x0;
  pcVar13 = (char *)0x0;
  uVar4 = *(ushort *)((longlong)param_2 + 10);
  lVar12 = (longlong)*(char *)((longlong)param_1 + 0x1c7) * 0xa8 + local_b0;
  _Str1 = *(char **)(lVar12 + 0xa8);
  if ((((uVar4 & 2) != 0) && ((*(byte *)((longlong)param_1 + 0x1bc) & 0x80) != 0)) &&
     (lVar10 = param_1[0x23], param_1[0x23] != 0)) {
    do {
      plVar1 = (longlong *)(lVar10 + 8);
      pcVar13 = (char *)(lVar10 + -0x120);
      if (*(short *)(lVar10 + -0xb0) != 0x12) {
        pcVar13 = pcVar14;
      }
      pcVar14 = pcVar13;
      lVar10 = *plVar1;
    } while (*plVar1 != 0);
    if (pcVar14 != (char *)0x0) {
      FUN_144f45070(pcVar14,param_2,param_1);
      FUN_144bd0240(param_1);
    }
    goto LAB_144f45183;
  }
  uVar9 = *(uint *)(param_1 + 0xe) & 0xffff;
  if (uVar9 < 0x202) {
    if (uVar9 == 0x201) {
      FUN_144bd3010(param_1);
      goto LAB_144f45183;
    }
    if (uVar9 == 0x11) {
LAB_144f45357:
      iVar8 = thunk_FUN_144bd0b20(param_1,2);
      if (iVar8 != 0) goto LAB_144f45183;
      if ((*(byte *)(param_1 + 0x2e) & 1) == 0) {
LAB_144f453b9:
        param_1[0x2a] = 0;
        goto LAB_144f453c0;
      }
      if ((param_1[0x2a] == 0) && (iVar8 = FUN_1452f6d00(), iVar8 < 0)) {
        pcVar13 = "bio_create failed";
      }
      else {
        if ((*(byte *)(param_1 + 0x2e) & 1) == 0) goto LAB_144f453b9;
        iVar8 = FUN_144f42790();
        if (iVar8 == 0) goto LAB_144f45183;
        if (-1 < iVar8) goto LAB_144f453c0;
        pcVar13 = "lws_ssl_client_connect1 failed";
      }
LAB_144f453eb:
      local_c8 = (char *)0xffffffffffffffff;
      do {
        local_c8 = local_c8 + 1;
      } while (pcVar13[(longlong)local_c8] != '\0');
      goto LAB_144f453f9;
    }
    if (uVar9 == 0x12) goto LAB_144f45466;
    if ((uVar9 != 0x13) || ((*(byte *)((longlong)param_1 + 0x1bc) & 0x20) != 0)) goto LAB_144f45183;
LAB_144f45153:
    uVar11 = 4;
    *(undefined1 *)(param_1[1] + 0x3b8) = 0x60;
    *(undefined2 *)(param_1[1] + 0x3b0) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0x20a;
    uVar5 = *(undefined4 *)(local_b0 + 0x4b8);
  }
  else {
    if (uVar9 == 0x202) {
      if ((uVar4 & 0x20) == 0) {
        iVar8 = Ordinal_16(param_1[0x2f],_Str1,*(undefined4 *)(local_b0 + 0x4bc),0);
        if (iVar8 < 0) {
          iVar8 = Ordinal_111();
          if (iVar8 == 0x2733) goto LAB_144f45183;
          FUN_144bd5aa0(1,"ERROR reading from proxy socket\n");
          local_c8 = (char *)0x0;
          pcVar13 = pcVar14;
        }
        else {
          *(undefined1 *)(*(longlong *)(lVar12 + 0xa8) + 0xd) = 0;
          iVar8 = strcmp(_Str1,"HTTP/1.0 200 ");
          if ((iVar8 == 0) || (iVar8 = strcmp(_Str1,"HTTP/1.1 200 "), iVar8 == 0)) {
            FUN_144bd6160(param_1,0,0);
            goto LAB_144f45357;
          }
          FUN_144bd5aa0(1,"ERROR proxy: %s\n",_Str1);
          local_c8 = (char *)0x0;
        }
      }
      else {
        FUN_144bd5aa0(2,"Proxy connection %p (fd=%d) dead\n",param_1,*param_2);
        local_c8 = pcVar14;
        pcVar13 = pcVar14;
      }
LAB_144f453f9:
      (**(code **)(param_1[0x14] + 8))(param_1,1,param_1[0x26],pcVar13);
      *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x20000;
      thunk_FUN_144bd6da0(param_1,0,"cbail3");
      goto LAB_144f45183;
    }
    if (uVar9 != 0x203) {
      if (uVar9 != 0x20a) goto LAB_144f45183;
      if (((byte)uVar4 & 0x29) != 0x20) {
        if ((uVar4 & 9) != 0) {
          cVar3 = *(char *)(param_1[1] + 0x3b8);
          while (cVar3 != 'c') {
            uVar7 = (ulonglong)local_b0 >> 0x20;
            local_b0 = CONCAT44((int)uVar7,1);
            iVar8 = FUN_144f40f60(param_1,local_b8,1);
            if (iVar8 == -4) goto LAB_144f45183;
            if (iVar8 + 1U < 2) {
              pcVar13 = "read failed";
              goto LAB_144f453eb;
            }
            iVar8 = FUN_144f42b90(param_1,local_b8,&local_b0);
            if (iVar8 != 0) {
              FUN_144bd5aa0(2,"problems parsing header\n");
              local_c8 = pcVar14;
              pcVar13 = pcVar14;
              goto LAB_144f453f9;
            }
            cVar3 = *(char *)(param_1[1] + 0x3b8);
          }
          if (*(char *)(param_1[1] + 0x3b8) == 'c') {
            FUN_144f449a0(param_1);
          }
        }
        goto LAB_144f45183;
      }
      pcVar13 = "Peer hung up";
      goto LAB_144f453eb;
    }
LAB_144f453c0:
    if ((*(byte *)(param_1 + 0x2e) & 1) == 0) {
      param_1[0x2a] = 0;
    }
    else {
      iVar8 = FUN_144f427e0(param_1,local_a8,0x80);
      if (iVar8 == 0) goto LAB_144f45183;
      if (iVar8 < 0) {
        pcVar13 = local_a8;
        goto LAB_144f453eb;
      }
    }
    *(undefined2 *)(param_1 + 0xe) = 0x12;
    FUN_144bd6160(param_1,0xb,*(undefined4 *)(local_b0 + 0x4b8));
LAB_144f45466:
    lVar12 = FUN_144f44710(param_1,_Str1);
    if (lVar12 == 0) {
      if (((undefined **)param_1[0xd] != &PTR_s_raw_skt_14c70f620) &&
         ((undefined **)param_1[0xd] != &PTR_s_raw_file_14c70f6d0)) {
        FUN_144bd5aa0(1,"Failed to generate handshake for client\n");
        thunk_FUN_144bd6da0(param_1,0,&DAT_149c0d604);
      }
      goto LAB_144f45183;
    }
    puVar2 = param_1;
    for (puVar6 = (undefined8 *)param_1[0x24]; puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      puVar2 = puVar6 + -0x22;
    }
    iVar8 = FUN_144f410d0(puVar2,_Str1,(int)lVar12 - (int)_Str1);
    if (iVar8 == -4) {
      FUN_144bd0240(param_1);
    }
    else if (iVar8 == -1) {
      thunk_FUN_144bd6da0(param_1,0,&DAT_149c0d608);
      goto LAB_144f45183;
    }
    if ((*(byte *)((longlong)param_1 + 0x1bc) & 0x20) == 0) {
      *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe;
      *(undefined2 *)(param_1 + 0xe) = 0x20a;
      if (*(short *)(puVar2 + 0xe) == 0x10) {
        *(uint *)(puVar2 + 0x37) = *(uint *)(puVar2 + 0x37) & 0xfffffffe;
        *(undefined2 *)(puVar2 + 0xe) = 0x20a;
        *(undefined1 *)(puVar2[1] + 0x3b8) = 0x60;
        *(undefined2 *)(puVar2[1] + 0x3b0) = 0;
        *(undefined1 *)(param_1[1] + 0x3b5) = 0;
      }
      FUN_144bd6160(param_1,4,*(undefined4 *)(param_1[0xf] + 0x4b8));
      FUN_144bd0240(puVar2);
      goto LAB_144f45153;
    }
    uVar11 = 0x12;
    *(undefined2 *)(param_1 + 0xe) = 0x13;
    uVar5 = *(undefined4 *)(local_b0 + 0x4b8);
  }
  FUN_144bd6160(param_1,uVar11,uVar5);
LAB_144f45183:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144f455c0 FUN_144f455c0 body=35 status=ok
// SIG undefined FUN_144f455c0(void)

void FUN_144f455c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144f45600("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",param_1,param_2,
                param_3,param_4);
  return;
}



// FUNCTION 144f455f0 FUN_144f455f0 body=14 status=ok
// SIG undefined FUN_144f455f0(void)

void FUN_144f455f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144f45730(param_1,0xffffffff,param_2,param_3);
  return;
}



// FUNCTION 144f45600 FUN_144f45600 body=294 status=ok
// SIG undefined FUN_144f45600(void)

int FUN_144f45600(longlong param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_res18 [16];
  
  iVar4 = 0;
  if (param_3 != 0) {
    iVar5 = 4;
    do {
      iVar6 = 0;
      uVar3 = 0;
      do {
        if (param_3 == 0) {
          if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_144e2bb84();
          }
          local_res18[uVar3] = 0;
        }
        else {
          bVar1 = *param_2;
          iVar6 = iVar6 + 1;
          param_2 = param_2 + 1;
          local_res18[uVar3] = bVar1;
          param_3 = param_3 + -1;
        }
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 3);
      if (param_5 <= iVar5) goto LAB_144f4571c;
      *param_4 = *(undefined1 *)((ulonglong)(local_res18[0] >> 2) + param_1);
      param_4[1] = *(undefined1 *)
                    (((ulonglong)(local_res18[1] >> 4) | (ulonglong)(local_res18[0] & 3) << 4) +
                    param_1);
      if (iVar6 < 2) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = *(undefined1 *)
                 (((ulonglong)(local_res18[1] & 0xf) << 2 | (ulonglong)(local_res18[2] >> 6)) +
                 param_1);
      }
      param_4[2] = uVar2;
      if (iVar6 < 3) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = *(undefined1 *)((ulonglong)(local_res18[2] & 0x3f) + param_1);
      }
      param_4[3] = uVar2;
      iVar4 = iVar4 + 4;
      param_4 = param_4 + 4;
      iVar5 = iVar5 + 4;
    } while (param_3 != 0);
  }
  if (iVar4 + 1 < param_5) {
    *param_4 = 0;
  }
  else {
LAB_144f4571c:
    iVar4 = -1;
  }
  return iVar4;
}



// FUNCTION 144f45730 FUN_144f45730 body=398 status=ok
// SIG undefined FUN_144f45730(void)

int FUN_144f45730(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  char local_res10 [8];
  
  bVar7 = 0;
  iVar3 = 0;
  while ((param_2 != 0 && (*param_1 != 0))) {
    iVar5 = 0;
    uVar4 = 0;
    do {
      if ((param_2 == 0) || (*param_1 == 0)) break;
      cVar2 = '\0';
      bVar7 = 0;
      do {
        bVar6 = *param_1;
        uVar1 = (uint)bVar6;
        if ((bVar6 == 0) || (cVar2 != '\0')) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        if (bVar6 == 0x2d) {
          uVar1 = 0x2b;
          bVar6 = 0x2b;
LAB_144f457c1:
          cVar2 = "|$$$}rstuvwxyz{$$$$$$$>?@ABCDEFGHIJKLMNOPQRSTUVW$$$$$$XYZ[\\]^_`abcdefghijklmnopq"
                  [(int)(uVar1 - 0x2b)];
          if (cVar2 != '\0') {
            if (cVar2 == '$') goto LAB_144f457dc;
            cVar2 = cVar2 + -0x3d;
          }
        }
        else {
          if (bVar6 == 0x5f) {
            uVar1 = 0x2f;
            bVar6 = 0x2f;
            goto LAB_144f457c1;
          }
          if ((byte)(bVar6 - 0x2b) < 0x50) goto LAB_144f457c1;
LAB_144f457dc:
          cVar2 = '\0';
        }
        bVar7 = bVar6;
      } while (param_2 != 0);
      if (bVar7 == 0) {
        if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
        local_res10[uVar4] = '\0';
      }
      else {
        iVar5 = iVar5 + 1;
        if (cVar2 != '\0') {
          local_res10[uVar4] = cVar2 + -1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < 4);
    if (param_4 < iVar3 + -1 + iVar5) goto LAB_144f458b4;
    if (((param_2 == 0) || (*param_1 == 0)) && (bVar7 == 0x3d)) {
      iVar5 = iVar5 + -1;
    }
    if (1 < iVar5) {
      *param_3 = (byte)local_res10[1] >> 4 | local_res10[0] << 2;
      param_3 = param_3 + 1;
    }
    if (2 < iVar5) {
      *param_3 = (byte)local_res10[2] >> 2 | local_res10[1] << 4;
      param_3 = param_3 + 1;
    }
    if (3 < iVar5) {
      *param_3 = local_res10[2] << 6 | local_res10[3];
      param_3 = param_3 + 1;
    }
    iVar3 = iVar3 + -1 + iVar5;
  }
  if (iVar3 + 1 < param_4) {
    *param_3 = 0;
  }
  else {
LAB_144f458b4:
    iVar3 = -1;
  }
  return iVar3;
}



// FUNCTION 144f458c0 FUN_144f458c0 body=192 status=ok
// SIG undefined FUN_144f458c0(void)

undefined8 FUN_144f458c0(int *param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  _FILETIME local_res8;
  
  if (param_1 != (int *)0x0) {
    GetSystemTimeAsFileTime(&local_res8);
    uVar4 = (ulonglong)local_res8 / 10 + 0xffd6a169b779c000;
    iVar3 = (int)(uVar4 / 1000000);
    *param_1 = iVar3;
    param_1[1] = (int)uVar4 + iVar3 * -1000000;
  }
  if (param_2 != (int *)0x0) {
    if (DAT_14c797a70 == 0) {
      _tzset();
      DAT_14c797a70 = DAT_14c797a70 + 1;
    }
    plVar1 = __timezone();
    *param_2 = *plVar1 / 0x3c;
    piVar2 = __daylight();
    param_2[1] = *piVar2;
  }
  return 0;
}



// FUNCTION 144f45980 FUN_144f45980 body=499 status=ok
// SIG undefined FUN_144f45980(void)

undefined8 FUN_144f45980(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 local_18;
  int local_10;
  
  if (*(int *)(param_2 + 0x1ac) == 0) {
    uVar3 = *(ushort *)(param_3 + 8) & *(ushort *)(param_3 + 10);
    if ((((uVar3 & 9) == 0) || (*(short *)(param_2 + 0x70) == 0x208)) ||
       (((*(uint *)(param_2 + 0x1b8) & 0x4000) != 0 && ((uVar3 & 2) != 0)))) {
      if (((*(uint *)(param_2 + 0x1b8) >> 0xe & 1) != 0) && ((uVar3 & 2) != 0)) {
        *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) & 0xffffbfff;
      }
    }
    else {
      uVar2 = FUN_144bd8750(param_1,param_2,&local_18);
      if (local_10 != -4) {
        if (local_10 == -1) goto LAB_144f45b4d;
        if (local_10 == 0) {
          *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x4000000;
          thunk_FUN_144bd0b20(param_2,9);
          goto LAB_144f45b4d;
        }
        iVar1 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x3b,
                              *(undefined8 *)(param_2 + 0x130),local_18,(longlong)local_10);
        if (iVar1 < 0) goto LAB_144f45b4d;
        iVar1 = FUN_144bd8820(param_2,&local_18,local_10,uVar2);
        if (iVar1 != 0) {
          return 5;
        }
      }
    }
    if ((*(byte *)(param_3 + 10) & 2) != 0) {
      iVar1 = thunk_FUN_144bd0b20(param_2,2);
      if (iVar1 == 0) {
        *(uint *)(param_2 + 0x1bc) = *(uint *)(param_2 + 0x1bc) & 0xfffffffe;
        iVar1 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x3d,
                              *(undefined8 *)(param_2 + 0x130),0,0);
        if (-1 < iVar1) {
          return 4;
        }
      }
      else {
        FUN_144bd5aa0(4,"%s a\n","rops_handle_POLLIN_raw_skt");
      }
LAB_144f45b4d:
      thunk_FUN_144bd6da0(param_2,0,"raw svc fail");
      return 3;
    }
  }
  else if (((*(byte *)(param_3 + 10) & 2) != 0) &&
          (iVar1 = FUN_144bd8e90(param_2,(ulonglong)*(uint *)(param_2 + 0x1a8) +
                                         *(longlong *)(param_2 + 0x148),*(int *)(param_2 + 0x1ac)),
          iVar1 < 0)) goto LAB_144f45b4d;
  return 4;
}



// FUNCTION 144f45b80 FUN_144f45b80 body=185 status=ok
// SIG undefined FUN_144f45b80(void)

uint FUN_144f45b80(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_3 + 10) & 2) != 0) {
    iVar1 = FUN_144bd8700(param_2);
    iVar2 = thunk_FUN_144bd0b20(param_2,2);
    if (iVar2 != 0) {
      return 3;
    }
    if (iVar1 != 0) {
      return 5;
    }
  }
  if (((*(byte *)(param_3 + 10) & 9) != 0) &&
     (iVar1 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x40,
                            *(undefined8 *)(param_2 + 0x130),0,0), iVar1 != 0)) {
    return 5;
  }
  return (*(byte *)(param_3 + 10) & 0x20 | 0x80) >> 5;
}



// FUNCTION 144f45c40 FUN_144f45c40 body=98 status=ok
// SIG undefined FUN_144f45c40(void)

void FUN_144f45c40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 != 0) && (lVar1 = FUN_144f465e0(param_1,param_2,local_f8), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_118);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_118);
}



// FUNCTION 144f45cc0 FUN_144f45cc0 body=795 status=ok
// SIG undefined FUN_144f45cc0(void)

void FUN_144f45cc0(undefined8 param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong *puVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined1 auStack_243 [220];
  undefined1 auStack_167 [23];
  undefined *puStack_150;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  uint local_114;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ushort local_78;
  byte abStack_76 [62];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (0x7f < param_2) {
    puStack_150 = (undefined *)0x144f45d07;
    lVar4 = FUN_144f465e0(param_1,param_2,&local_118);
    if (lVar4 != 0) {
      lVar11 = 0;
      lVar5 = lVar11;
      do {
        if (0xc < abStack_76[lVar5]) goto LAB_144f45fcf;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 4);
      if (0x21f < param_4) {
        puStack_150 = (undefined *)0x144f45d51;
        memset(param_3,0,0x220);
        uVar6 = (longlong)param_3 + 0x23fU & 0xffffffffffffffe0;
        if (0 < (int)local_114) {
          puVar8 = (ulonglong *)(param_3 + 0x82);
          uVar10 = (ulonglong)local_114;
          do {
            *puVar8 = uVar6;
            puVar8 = puVar8 + 1;
            uVar6 = uVar6 + 0x400;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar6 - (longlong)param_3 <= param_4) {
          param_3[2] = 1;
          *param_3 = local_118;
          param_3[5] = local_114;
          param_3[6] = 0;
          local_128 = 0;
          puStack_150 = (undefined *)0x144f45dad;
          FUN_1452f8990();
          uVar3 = DAT_14c7fc6b0;
          param_3[0x2f] = 1;
          pbVar13 = (byte *)((longlong)param_3 + 0xf5);
          *(undefined8 *)(param_3 + 0x28) = local_90;
          *(undefined8 *)(param_3 + 0x2a) = uStack_88;
          lVar5 = -0xf5 - (longlong)param_3;
          *(undefined8 *)(param_3 + 0x2c) = local_80;
          local_128 = CONCAT71(local_128._1_7_,(char)(uVar3 >> 1)) & 0xffffffffffffff01;
          local_128 = CONCAT62(local_128._2_6_,CONCAT11((char)(uVar3 >> 2),(undefined1)local_128)) &
                      0xffffffffffff01ff;
          local_128 = CONCAT53(local_128._3_5_,CONCAT12((char)(uVar3 >> 3),(undefined2)local_128)) &
                      0xffffffffff01ffff;
          local_128 = CONCAT44(local_128._4_4_,CONCAT13((char)(uVar3 >> 0xd),(undefined3)local_128))
                      & 0xffffffff01ffffff;
          local_128 = CONCAT35(local_128._5_3_,CONCAT14((char)(uVar3 >> 8),(undefined4)local_128)) &
                      0xffffff01ffffffff;
          *(ulonglong *)(param_3 + 0x34) = local_128;
          param_3[7] = local_10c;
          param_3[4] = local_110;
          *(undefined **)(param_3 + 0x36) = &DAT_14c70f790 + (longlong)local_110 * 0x49c;
          *(undefined **)(param_3 + 0x38) = &DAT_14c710a00 + (longlong)local_110 * 0x49c;
          *(undefined8 *)(param_3 + 10) = local_a8;
          *(undefined8 *)(param_3 + 0xc) = uStack_a0;
          *(undefined8 *)(param_3 + 0x10) = local_108;
          *(undefined8 *)(param_3 + 0x12) = uStack_100;
          *(undefined8 *)(param_3 + 0xe) = local_98;
          *(undefined8 *)(param_3 + 0x14) = local_f8;
          *(undefined8 *)(param_3 + 0x16) = uStack_f0;
          *(undefined8 *)(param_3 + 0x18) = local_e8;
          *(undefined8 *)(param_3 + 0x1a) = uStack_e0;
          *(undefined8 *)(param_3 + 0x1c) = local_d8;
          *(undefined8 *)(param_3 + 0x1e) = uStack_d0;
          param_3[0x20] = local_c8;
          param_3[0x21] = uStack_c4;
          param_3[0x22] = uStack_c0;
          param_3[0x23] = uStack_bc;
          param_3[0x24] = local_b8;
          param_3[0x25] = uStack_b4;
          param_3[0x26] = uStack_b0;
          param_3[0x27] = uStack_ac;
          *(ushort *)(param_3 + 0x32) = local_78;
          *(ushort *)((longlong)param_3 + 0xc6) = local_78 >> 1;
          puVar12 = auStack_167 + -(longlong)param_3;
          *(undefined2 *)(param_3 + 0x31) = 0;
          param_3[0x33] = 0;
          *(undefined2 *)((longlong)param_3 + 0xca) = 0;
          do {
            bVar1 = abStack_76[lVar11];
            pbVar13[-0xd] = bVar1;
            pbVar7 = pbVar13;
            if (0xc < bVar1) goto LAB_144f45fcf;
            do {
              bVar1 = pbVar7[(longlong)puVar12];
              bVar9 = bVar1 & 0xf7;
              pbVar7[-0xc] = bVar9;
              *pbVar7 = (byte)((uint)(int)(char)bVar1 >> 3) & 1;
              if (5 < bVar9) goto LAB_144f45fcf;
              pbVar7 = pbVar7 + 1;
            } while ((longlong)(pbVar7 + lVar5) < 0xc);
            lVar11 = lVar11 + 1;
            puVar12 = puVar12 + -0x37;
            pbVar13 = pbVar13 + 0x43;
            lVar5 = lVar5 + -0x43;
          } while (lVar11 < 4);
          lVar5 = 4;
          puVar12 = (undefined1 *)((longlong)param_3 + 0x1f5);
          do {
            uVar2 = puVar12[(longlong)(auStack_243 + (4 - (longlong)param_3))];
            puVar12[-1] = puVar12[(longlong)(auStack_243 + -(longlong)param_3)];
            *puVar12 = puVar12[(longlong)(auStack_243 + (1 - (longlong)param_3))];
            puVar12[1] = puVar12[(longlong)(auStack_243 + (2 - (longlong)param_3))];
            puVar12[2] = puVar12[(longlong)(auStack_243 + (3 - (longlong)param_3))];
            puVar12[3] = uVar2;
            puVar12 = puVar12 + 5;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          puStack_150 = (undefined *)0x144f45fc0;
          FUN_144f46200(param_3 + 0x3a);
          if (param_5 != (longlong *)0x0) {
            *param_5 = lVar4;
          }
        }
      }
    }
  }
LAB_144f45fcf:
                    /* WARNING: Subroutine does not return */
  puStack_150 = &UNK_144f45fdb;
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_148);
}



// FUNCTION 144f46000 FUN_144f46000 body=104 status=ok
// SIG undefined FUN_144f46000(void)

void FUN_144f46000(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  undefined4 local_ec;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = FUN_144f465e0(param_1,param_2,local_f8);
  if (lVar1 != 0) {
    *(undefined4 *)(param_3 + 2) = local_ec;
    *(undefined4 *)(param_3 + 4) = local_f4;
    *(char *)((longlong)param_3 + 3) = local_f8[3];
    *(char *)(param_3 + 1) = local_f8[2];
    *param_3 = local_f8._0_2_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_118,lVar1);
}



// FUNCTION 144f46080 FUN_144f46080 body=160 status=ok
// SIG undefined FUN_144f46080(void)

undefined8
FUN_144f46080(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  *param_4 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    return 0xffffffff;
  }
  if (param_3 < 7) {
    return 0xfffffffe;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  uVar1 = FUN_144f49480(param_1,param_5,lVar2 + param_2,param_3 - lVar2,&local_res8);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (-1 < (int)uVar1) {
    *param_4 = local_res8 + lVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)uVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return uVar1;
}



// FUNCTION 144f46120 FUN_144f46120 body=177 status=ok
// SIG undefined FUN_144f46120(void)

undefined1 * FUN_144f46120(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int local_48 [2];
  int local_40;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    return (undefined1 *)0xffffffff;
  }
  if (3 < param_3) {
    puVar2 = (undefined1 *)FUN_144f46390(param_2,param_1 + 0xc4,local_48,param_3);
    iVar1 = (int)puVar2;
    if (iVar1 == -4) {
      return puVar2;
    }
    if (iVar1 != -2) {
      if ((((iVar1 != -3) && (uVar4 = local_1c + iVar1, uVar4 < 0x4000)) &&
          ((uint)(local_14 + iVar1) <= uVar4)) && ((local_48[0] == 0 || (local_10 < 0x81)))) {
        uVar3 = 0x802;
        if (local_40 != 0) {
          uVar3 = 0x102;
        }
        if (uVar3 < local_18) {
          uVar4 = 0xfffffffd;
        }
        return (undefined1 *)(ulonglong)uVar4;
      }
      return &DAT_fffffffd;
    }
  }
  return (undefined1 *)0xfffffffe;
}



// FUNCTION 144f461e0 FUN_144f461e0 body=21 status=ok
// SIG undefined FUN_144f461e0(void)

void FUN_144f461e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 144f46200 FUN_144f46200 body=384 status=ok
// SIG undefined FUN_144f46200(void)

void FUN_144f46200(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte local_18 [4];
  char local_14;
  char local_13;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)local_18;
  lVar2 = 3;
  do {
    iVar3 = 0;
    bVar5 = 0;
    pbVar4 = param_1;
    if (*param_1 != 0) {
      do {
        iVar3 = iVar3 + 1;
        param_1[(ulonglong)pbVar4[1] + 0x19] = param_1[(ulonglong)pbVar4[1] + 0x19] + 1;
        bVar5 = *param_1;
        pbVar4 = pbVar4 + 1;
      } while (iVar3 < (int)(uint)bVar5);
    }
    local_18[0] = 0;
    iVar3 = 0;
    local_18[1] = param_1[0x19];
    local_18[2] = param_1[0x19] + param_1[0x1a];
    local_18[3] = local_18[2] + param_1[0x1b];
    local_14 = local_18[3] + param_1[0x1c];
    local_13 = local_14 + param_1[0x1d];
    bVar1 = 0;
    if (bVar5 != 0) {
      pbVar4 = param_1 + 0x1f;
      do {
        iVar3 = iVar3 + 1;
        bVar5 = local_18[pbVar4[-0x1e]];
        *pbVar4 = bVar5;
        bVar1 = *param_1;
        local_18[pbVar4[-0x1e]] = bVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar3 < (int)(uint)bVar1);
    }
    iVar3 = 0;
    local_18[1] = param_1[0x19] * '\x02';
    local_18[2] = param_1[0x1a] * '\x02' + param_1[0x19] * '\x02';
    local_18[0] = 0;
    local_18[3] = param_1[0x1b] * '\x02' + local_18[2];
    local_14 = param_1[0x1c] * '\x02' + local_18[3];
    local_13 = param_1[0x1d] * '\x02' + local_14;
    bVar5 = 0;
    pbVar4 = param_1 + 1;
    if (bVar1 != 0) {
      do {
        iVar3 = iVar3 + 1;
        bVar1 = local_18[*pbVar4];
        pbVar4[0x2a] = bVar1;
        bVar5 = *param_1;
        local_18[*pbVar4] = bVar1 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar3 < (int)(uint)bVar5);
    }
    iVar3 = 0;
    pbVar4 = param_1 + 1;
    if (bVar5 != 0) {
      do {
        iVar3 = iVar3 + 1;
        bVar5 = local_18[*pbVar4];
        pbVar4[0x36] = bVar5;
        local_18[*pbVar4] = bVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar3 < (int)(uint)*param_1);
    }
    param_1 = param_1 + 0x43;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)local_18);
}



// FUNCTION 144f46390 FUN_144f46390 body=586 status=ok
// SIG undefined FUN_144f46390(void)

undefined1 * FUN_144f46390(byte *param_1,longlong param_2,int *param_3,ulonglong param_4)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  if (3 < param_4) {
    bVar2 = *param_1;
    uVar13 = (ulonglong)bVar2;
    iVar8 = 1;
    uVar5 = 1;
    if (bVar2 == 0x60) {
      return (undefined1 *)0xfffffffc;
    }
    uVar6 = (bVar2 >> 1 & 0x5555) + (bVar2 & 0x5555);
    uVar6 = (uVar6 >> 2 & 0x3333) + (uVar6 & 0x3333);
    if (((char)(uVar6 >> 4) + (char)uVar6 & 1U) == 0) {
LAB_144f465c5:
      return &DAT_fffffffd;
    }
    if ((char)bVar2 < '\0') {
      uVar5 = 2;
      uVar13 = (ulonglong)CONCAT11(param_1[1],bVar2);
    }
    uVar14 = (ulonglong)uVar5;
    if ((ulonglong)((uVar13 & 0x4000) != 0) +
        ((uVar13 & 0x2000) != 0) + uVar14 +
        (ulonglong)((uint)(uVar13 >> 0xe) & 2) + (ulonglong)((uVar13 & 0x1000) != 0) + 3 <= param_4)
    {
      param_3[3] = (uint)(uVar13 >> 2) & 1;
      iVar7 = 1;
      uVar15 = (uint)(uVar13 >> 1) & 1;
      param_3[2] = uVar15;
      uVar6 = ((uVar13 & 8) != 0) + 1;
      param_3[7] = (uint)(uVar13 >> 5) & 1;
      param_3[5] = uVar6;
      param_3[8] = (uint)(uVar13 >> 6) & 1;
      param_3[10] = (uint)(uVar13 >> 8) & 3;
      iVar3 = (int)(uVar13 >> 0xf);
      *param_3 = iVar3;
      param_3[6] = (uint)(uVar13 >> 10) & 1;
      param_3[4] = (uint)(uVar13 >> 0xb) & 1;
      param_3[9] = (uint)uVar13 >> 4 & 1;
      if ((uVar13 & 0x4000) == 0) {
        uVar12 = (ushort)param_1[uVar14];
        iVar4 = iVar7;
      }
      else {
        uVar12 = *(ushort *)(param_1 + uVar14);
        if (uVar12 < 0x100) goto LAB_144f465c5;
        iVar4 = 2;
      }
      uVar5 = iVar4 + uVar5;
      if ((uVar13 & 0x1000) == 0) {
        uVar9 = (ushort)param_1[uVar5];
      }
      else {
        uVar9 = *(ushort *)(param_1 + uVar5);
        if (uVar9 < 0x100) goto LAB_144f465c5;
        iVar7 = 2;
      }
      uVar5 = uVar5 + iVar7;
      if ((uVar13 & 0x2000) == 0) {
        uVar10 = (ushort)param_1[uVar5];
      }
      else {
        uVar10 = *(ushort *)(param_1 + uVar5);
        if (uVar10 < 0x100) goto LAB_144f465c5;
        iVar8 = 2;
      }
      puVar11 = (undefined1 *)(ulonglong)(uVar5 + iVar8);
      if (iVar3 != 0) {
        puVar1 = (ushort *)(param_1 + (longlong)puVar11);
        puVar11 = (undefined1 *)(ulonglong)(uVar5 + iVar8 + 2);
        param_3[0xe] = (uint)*puVar1;
      }
      param_3[0xb] = (uint)(ushort)(uVar12 + *(short *)(param_2 +
                                                       ((ulonglong)uVar15 * 3 + (ulonglong)uVar6) *
                                                       2));
      param_3[0xc] = (uint)uVar9;
      param_3[0xd] = (uint)uVar10;
      return puVar11;
    }
  }
  return (undefined1 *)0xfffffffe;
}



// FUNCTION 144f465e0 FUN_144f465e0 body=770 status=ok
// SIG undefined FUN_144f465e0(void)

undefined8 FUN_144f465e0(longlong *param_1,ulonglong param_2,uint *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  
  if (((7 < param_2) && (uVar12 = 0, *param_1 == 0x1a64754164615260)) && (0x59 < param_2)) {
    if (*(ushort *)((longlong)param_1 + 0xc) != 0) {
      puVar3 = &DAT_14c70f780;
      uVar5 = uVar12;
      do {
        if (*puVar3 == (uint)*(ushort *)((longlong)param_1 + 0xc)) {
          param_3[2] = uVar5;
          if ((int)uVar5 < 0) {
            return 0;
          }
          param_3[3] = (uint)*(ushort *)((longlong)param_1 + 0xc);
          lVar10 = 6;
          param_3[1] = (uint)*(byte *)(param_1 + 2);
          *param_3 = *(uint *)(param_1 + 1);
          *(undefined2 *)(param_3 + 0x28) = *(undefined2 *)((longlong)param_1 + 0xe);
          uVar2 = *(undefined8 *)((longlong)param_1 + 0x32);
          *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)((longlong)param_1 + 0x2a);
          *(undefined8 *)(param_3 + 0x1e) = uVar2;
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x3a);
          uVar2 = *(undefined8 *)((longlong)param_1 + 0x4a);
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)((longlong)param_1 + 0x42);
          *(undefined8 *)(param_3 + 6) = uVar2;
          *(undefined8 *)(param_3 + 8) = *(undefined8 *)((longlong)param_1 + 0x52);
          puVar6 = (undefined1 *)((longlong)param_1 + 0x43);
          puVar7 = (undefined1 *)((longlong)param_3 + 0x11);
          do {
            puVar7[-1] = puVar6[-1];
            *puVar7 = *puVar6;
            puVar7[0x2f] = puVar6[0xb];
            puVar7[0x30] = puVar6[0xc];
            puVar7[1] = puVar6[-1];
            puVar7[2] = *puVar6;
            puVar7[0x31] = puVar6[0xb];
            puVar7[0x32] = puVar6[0xc];
            puVar7[3] = puVar6[-1];
            puVar7[4] = *puVar6;
            puVar7[0x33] = puVar6[0xb];
            puVar7[0x34] = puVar6[0xc];
            puVar7[5] = puVar6[-1];
            puVar7[6] = *puVar6;
            puVar7[0x35] = puVar6[0xb];
            puVar7[0x36] = puVar6[0xc];
            lVar10 = lVar10 + -1;
            puVar6 = puVar6 + 2;
            puVar7 = puVar7 + 8;
          } while (lVar10 != 0);
          *(byte *)((longlong)param_3 + 0xa2) = *(byte *)((longlong)param_1 + 0x11) & 0xf;
          lVar10 = 5;
          *(byte *)((longlong)param_3 + 0xa3) = *(byte *)((longlong)param_1 + 0x11) >> 4;
          *(byte *)(param_3 + 0x29) = *(byte *)((longlong)param_1 + 0x12) & 0xf;
          *(byte *)((longlong)param_3 + 0xa5) = *(byte *)((longlong)param_1 + 0x12) >> 4;
          puVar3 = param_3 + 0x35;
          do {
            bVar1 = *(byte *)((longlong)param_1 + (-0xc1 - (longlong)param_3) + (longlong)puVar3);
            *(byte *)((longlong)puVar3 + -10) = bVar1 & 3;
            *(byte *)((longlong)puVar3 + -5) = bVar1 >> 2 & 3;
            *(byte *)puVar3 = bVar1 >> 4 & 3;
            *(byte *)((longlong)puVar3 + 5) = bVar1 >> 6;
            lVar10 = lVar10 + -1;
            puVar3 = (uint *)((longlong)puVar3 + 1);
          } while (lVar10 != 0);
          lVar10 = 3;
          pbVar8 = (byte *)((longlong)param_3 + 0xa7);
          pbVar9 = (byte *)((longlong)param_1 + 0x19);
          do {
            bVar1 = pbVar9[-1];
            pbVar8[-1] = bVar1 & 0xf;
            *pbVar8 = bVar1 >> 4;
            bVar1 = *pbVar9;
            pbVar8[1] = bVar1 & 0xf;
            pbVar8[2] = bVar1 >> 4;
            bVar1 = pbVar9[1];
            pbVar8[3] = bVar1 & 0xf;
            pbVar8[4] = bVar1 >> 4;
            bVar1 = pbVar9[2];
            pbVar8[5] = bVar1 & 0xf;
            pbVar8[6] = bVar1 >> 4;
            bVar1 = pbVar9[3];
            pbVar8[7] = bVar1 & 0xf;
            pbVar8[8] = bVar1 >> 4;
            bVar1 = pbVar9[4];
            pbVar8[9] = bVar1 & 0xf;
            pbVar8[10] = bVar1 >> 4;
            lVar10 = lVar10 + -1;
            pbVar8 = pbVar8 + 0xc;
            pbVar9 = pbVar9 + 6;
          } while (lVar10 != 0);
          lVar10 = (longlong)(int)param_3[2] * 0x49c;
          if (0 < *(int *)(&DAT_14c70f794 + lVar10)) {
            piVar11 = (int *)(&DAT_14c70f80c + lVar10);
            puVar3 = param_3 + 0x22;
            do {
              if (*piVar11 == 1) {
                cVar4 = -1;
              }
              else {
                cVar4 = '\f' - (char)((longlong)(ulonglong)(byte)puVar3[-6] / (longlong)*piVar11);
              }
              *(char *)puVar3 = cVar4;
              uVar12 = uVar12 + 1;
              puVar3 = (uint *)((longlong)puVar3 + 1);
              piVar11 = piVar11 + 1;
            } while ((int)uVar12 < *(int *)(&DAT_14c70f794 + lVar10));
          }
          if (1 < param_3[1] - 1) {
            return 0;
          }
          if (1 < *param_3) {
            return 0;
          }
          return 0x80;
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while ((longlong)puVar3 < 0x14c70f790);
    }
    param_3[2] = 0xffffffff;
  }
  return 0;
}



// FUNCTION 144f468f0 FUN_144f468f0 body=164 status=ok
// SIG undefined FUN_144f468f0(void)

uint FUN_144f468f0(longlong *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 3) < uVar1 + param_2) {
    *param_3 = 1;
  }
  else if (param_2 != 0) {
    bVar3 = 8;
    uVar4 = (uint)*(byte *)(*param_1 + (ulonglong)(uVar1 >> 3));
    for (pbVar2 = (byte *)(*param_1 + 1 + (ulonglong)(uVar1 >> 3)); pbVar2 < (byte *)param_1[1];
        pbVar2 = pbVar2 + 1) {
      uVar4 = uVar4 + ((uint)*pbVar2 << (bVar3 & 0x1f));
      bVar3 = bVar3 + 8;
    }
    *(uint *)(param_1 + 2) = uVar1 + param_2;
    return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar4 >> ((byte)uVar1 & 7);
  }
  return 0;
}



// FUNCTION 144f469a0 FUN_144f469a0 body=945 status=ok
// SIG undefined FUN_144f469a0(void)

undefined8 FUN_144f469a0(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  
  puVar13 = (uint *)param_1[2];
  puVar14 = (uint *)param_1[4];
  puVar12 = (uint *)param_1[3];
  uVar11 = *(uint *)(param_1 + 5);
  uVar15 = *(uint *)((longlong)param_1 + 0x34);
  uVar18 = *(uint *)((longlong)param_1 + 0x2c);
  uVar17 = *(uint *)(param_1 + 7);
  uVar19 = *(uint *)(param_1 + 6);
  uVar10 = *(uint *)((longlong)param_1 + 0x3c);
  if (puVar13 <= puVar14) {
    pbVar5 = (byte *)param_1[1];
    pbVar6 = (byte *)*param_1;
    uVar9 = uVar15;
    if ((3 < (longlong)puVar12 - (longlong)puVar14) && (5 < (longlong)pbVar5 - (longlong)pbVar6)) {
      puVar12 = puVar12 + -1;
      for (; ((pbVar6 < pbVar5 + -5 && (puVar13 <= puVar14)) && (puVar14 <= puVar12));
          puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(uVar9 >> 3))) {
        uVar11 = uVar11 | *puVar13 << ((byte)uVar15 & 0x1f);
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(0x1f - uVar15 >> 3));
        uVar9 = *puVar12;
        uVar18 = uVar18 | (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18) << ((byte)uVar17 & 0x1f);
        puVar12 = (uint *)((longlong)puVar12 - (ulonglong)(0x1f - uVar17 >> 3));
        uVar19 = uVar19 | *puVar14 << ((byte)uVar10 & 0x1f);
        pbVar7 = (byte *)(param_2 + (ulonglong)(uVar11 & 0x7ff) * 2);
        uVar9 = 0x1f - uVar10;
        bVar1 = *pbVar7;
        uVar11 = uVar11 >> (bVar1 & 0x1f);
        *pbVar6 = pbVar7[1];
        uVar8 = (ulonglong)(uVar18 & 0x7ff);
        bVar2 = *(byte *)(param_2 + uVar8 * 2);
        uVar18 = uVar18 >> (bVar2 & 0x1f);
        pbVar6[1] = *(byte *)(param_2 + uVar8 * 2 + 1);
        uVar8 = (ulonglong)(uVar19 & 0x7ff);
        bVar3 = *(byte *)(param_2 + uVar8 * 2);
        uVar19 = uVar19 >> (bVar3 & 0x1f);
        pbVar6[2] = *(byte *)(param_2 + uVar8 * 2 + 1);
        uVar8 = (ulonglong)(uVar11 & 0x7ff);
        bVar4 = *(byte *)(param_2 + uVar8 * 2);
        uVar15 = ((uVar15 | 0x18) - (uint)bVar1) - (uint)bVar4;
        uVar11 = uVar11 >> (bVar4 & 0x1f);
        pbVar6[3] = *(byte *)(param_2 + uVar8 * 2 + 1);
        uVar8 = (ulonglong)(uVar18 & 0x7ff);
        bVar1 = *(byte *)(param_2 + uVar8 * 2);
        uVar17 = ((uVar17 | 0x18) - (uint)bVar2) - (uint)bVar1;
        uVar18 = uVar18 >> (bVar1 & 0x1f);
        pbVar6[4] = *(byte *)(param_2 + uVar8 * 2 + 1);
        pbVar7 = (byte *)(param_2 + (ulonglong)(uVar19 & 0x7ff) * 2);
        bVar1 = *pbVar7;
        uVar10 = ((uVar10 | 0x18) - (uint)bVar3) - (uint)bVar1;
        uVar19 = uVar19 >> (bVar1 & 0x1f);
        pbVar6[5] = pbVar7[1];
        pbVar6 = pbVar6 + 6;
      }
      uVar9 = uVar15 & 7;
      puVar13 = (uint *)((longlong)puVar13 - (ulonglong)(uVar15 >> 3));
      uVar15 = uVar17 >> 3;
      uVar17 = uVar17 & 7;
      puVar12 = (uint *)((longlong)puVar12 + (ulonglong)uVar15 + 4);
      puVar14 = (uint *)((longlong)puVar14 - (ulonglong)(uVar10 >> 3));
      uVar10 = uVar10 & 7;
    }
    while (bVar20 = pbVar6 == pbVar5, pbVar6 < pbVar5) {
      if ((longlong)puVar14 - (longlong)puVar13 < 2) {
        if ((longlong)puVar14 - (longlong)puVar13 == 1) {
          uVar15 = (uint)(byte)*puVar13;
          goto LAB_144f46bd6;
        }
      }
      else {
        uVar15 = (uint)(ushort)*puVar13;
LAB_144f46bd6:
        uVar11 = uVar11 | uVar15 << ((byte)uVar9 & 0x1f);
      }
      uVar15 = uVar11 & 0x7ff;
      bVar1 = *(byte *)(param_2 + (ulonglong)uVar15 * 2);
      uVar16 = uVar9 - bVar1;
      uVar11 = uVar11 >> (bVar1 & 0x1f);
      uVar9 = uVar16 & 7;
      *pbVar6 = *(byte *)(param_2 + (ulonglong)uVar15 * 2 + 1);
      puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(7 - uVar16 >> 3));
      pbVar7 = pbVar6 + 1;
      bVar20 = pbVar7 == pbVar5;
      if (pbVar5 <= pbVar7) break;
      if ((longlong)puVar12 - (longlong)puVar14 < 2) {
        if ((longlong)puVar12 - (longlong)puVar14 == 1) {
          uVar18 = uVar18 | (uint)(byte)*puVar14 << ((byte)uVar17 & 0x1f);
          uVar19 = uVar19 | (uint)(byte)*puVar14 << ((byte)uVar10 & 0x1f);
        }
      }
      else {
        uVar18 = uVar18 | (uint)(ushort)(*(ushort *)((longlong)puVar12 + -2) >> 8 |
                                        *(ushort *)((longlong)puVar12 + -2) << 8) <<
                          ((byte)uVar17 & 0x1f);
        uVar19 = uVar19 | (uint)(ushort)*puVar14 << ((byte)uVar10 & 0x1f);
      }
      uVar15 = uVar18 & 0x7ff;
      bVar1 = *(byte *)(param_2 + (ulonglong)uVar15 * 2);
      uVar16 = uVar17 - bVar1;
      uVar18 = uVar18 >> (bVar1 & 0x1f);
      uVar17 = uVar16 & 7;
      *pbVar7 = *(byte *)(param_2 + (ulonglong)uVar15 * 2 + 1);
      puVar12 = (uint *)((longlong)puVar12 - (ulonglong)(7 - uVar16 >> 3));
      pbVar7 = pbVar6 + 2;
      bVar20 = pbVar7 == pbVar5;
      if (pbVar5 <= pbVar7) break;
      uVar15 = uVar19 & 0x7ff;
      bVar1 = *(byte *)(param_2 + (ulonglong)uVar15 * 2);
      uVar16 = uVar10 - bVar1;
      uVar19 = uVar19 >> (bVar1 & 0x1f);
      uVar10 = uVar16 & 7;
      *pbVar7 = *(byte *)(param_2 + (ulonglong)uVar15 * 2 + 1);
      puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(7 - uVar16 >> 3));
      pbVar6 = pbVar6 + 3;
      if (puVar14 < puVar13) {
        return 0;
      }
      if (puVar12 < puVar14) {
        return 0;
      }
    }
    if (bVar20) {
      param_1[2] = puVar13;
      *(uint *)(param_1 + 5) = uVar11;
      *(uint *)((longlong)param_1 + 0x34) = uVar9;
      param_1[3] = puVar12;
      *(uint *)((longlong)param_1 + 0x2c) = uVar18;
      *(uint *)(param_1 + 7) = uVar17;
      param_1[4] = puVar14;
      *(uint *)(param_1 + 6) = uVar19;
      *(uint *)((longlong)param_1 + 0x3c) = uVar10;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144f46d60 FUN_144f46d60 body=1230 status=ok
// SIG undefined FUN_144f46d60(void)

void FUN_144f46d60(ulonglong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  
  puVar18 = (undefined1 *)*param_1;
  puVar26 = (ulonglong *)param_1[2];
  puVar17 = (ulonglong *)param_1[4];
  if ((0xe < (longlong)(param_1[1] - (longlong)puVar18)) &&
     (8 < (longlong)(param_1[3] - (longlong)puVar17))) {
    puVar23 = (undefined1 *)(param_1[1] - 0xe);
    uVar19 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    puVar25 = (ulonglong *)(param_1[3] - 8);
    uVar21 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
    uVar22 = (uint)param_1[5];
    uVar20 = (ulonglong)uVar22;
    uVar29 = *(uint *)((longlong)param_1 + 0x2c);
    uVar24 = (ulonglong)uVar29;
    uVar27 = (ulonglong)(uint)param_1[7];
    uVar30 = (uint)param_1[6];
    uVar28 = (ulonglong)uVar30;
    if (puVar18 < puVar23) {
      do {
        if ((puVar17 < puVar26) || (puVar25 < puVar17)) break;
        uVar16 = *puVar25;
        uVar20 = *puVar26 << ((byte)uVar19 & 0x3f) | uVar20;
        puVar26 = (ulonglong *)((longlong)puVar26 + (0x3f - uVar19 >> 3));
        uVar24 = (uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                  (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                  (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                  (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38) << ((byte)uVar27 & 0x3f) | uVar24;
        puVar25 = (ulonglong *)((longlong)puVar25 - (0x3f - uVar27 >> 3));
        uVar28 = *puVar17 << ((byte)uVar21 & 0x3f) | uVar28;
        puVar17 = (ulonglong *)((longlong)puVar17 + (0x3f - uVar21 >> 3));
        uVar1 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar1 & 0x3f);
        *puVar18 = (char)(uVar1 >> 8);
        uVar2 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar2 & 0x3f);
        puVar18[1] = (char)(uVar2 >> 8);
        uVar3 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar3 & 0x3f);
        puVar18[2] = (char)(uVar3 >> 8);
        uVar4 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar4 & 0x3f);
        puVar18[3] = (char)(uVar4 >> 8);
        uVar5 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar5 & 0x3f);
        puVar18[4] = (char)(uVar5 >> 8);
        uVar6 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar6 & 0x3f);
        puVar18[5] = (char)(uVar6 >> 8);
        uVar7 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar7 & 0x3f);
        puVar18[6] = (char)(uVar7 >> 8);
        uVar8 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar8 & 0x3f);
        puVar18[7] = (char)(uVar8 >> 8);
        uVar9 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar9 & 0x3f);
        puVar18[8] = (char)(uVar9 >> 8);
        uVar10 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar10 & 0x3f);
        puVar18[9] = (char)(uVar10 >> 8);
        uVar11 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar11 & 0x3f);
        puVar18[10] = (char)(uVar11 >> 8);
        uVar12 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar12 & 0x3f);
        puVar18[0xb] = (char)(uVar12 >> 8);
        uVar13 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar13 & 0x3f);
        puVar18[0xc] = (char)(uVar13 >> 8);
        uVar14 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar14 & 0x3f);
        puVar18[0xd] = (char)(uVar14 >> 8);
        uVar15 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar15 & 0x3f);
        puVar18[0xe] = (char)(uVar15 >> 8);
        puVar18 = puVar18 + 0xf;
        uVar19 = (ulonglong)
                 (((((((uint)uVar19 | 0xfffffff8) - (uint)uVar1) - (uint)uVar4) - (uint)uVar7) -
                  (uint)uVar10) - (uint)uVar13 & 0x3f);
        uVar27 = (ulonglong)
                 (((((((uint)uVar27 | 0xfffffff8) - (uint)uVar2) - (uint)uVar5) - (uint)uVar8) -
                  (uint)uVar11) - (uint)uVar14 & 0x3f);
        uVar21 = (ulonglong)
                 (((((((uint)uVar21 | 0xfffffff8) - (uint)uVar3) - (uint)uVar6) - (uint)uVar9) -
                  (uint)uVar12) - (uint)uVar15 & 0x3f);
      } while (puVar18 < puVar23);
      uVar30 = (uint)uVar28;
      uVar29 = (uint)uVar24;
      uVar22 = (uint)uVar20;
    }
    *param_1 = (ulonglong)puVar18;
    *(uint *)((longlong)param_1 + 0x34) = (uint)uVar19 & 7;
    *(uint *)(param_1 + 5) = uVar22 & 0xff;
    param_1[2] = (longlong)puVar26 - (uVar19 >> 3);
    *(uint *)(param_1 + 7) = (uint)uVar27 & 7;
    param_1[3] = (uVar27 >> 3) + 8 + (longlong)puVar25;
    *(uint *)((longlong)param_1 + 0x2c) = uVar29 & 0xff;
    *(uint *)((longlong)param_1 + 0x3c) = (uint)uVar21 & 7;
    param_1[4] = (longlong)puVar17 - (uVar21 >> 3);
    *(uint *)(param_1 + 6) = uVar30 & 0xff;
  }
  FUN_144f469a0(param_1,param_2);
  return;
}



// FUNCTION 144f47230 FUN_144f47230 body=315 status=ok
// SIG undefined FUN_144f47230(void)

void FUN_144f47230(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined4 *param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  uint local_50 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = 2;
  local_70 = param_4 + param_3;
  plVar4 = &local_68;
  puVar5 = local_50;
  plVar6 = param_1;
  do {
    uVar2 = -*(uint *)(plVar6 + 2) & 7;
    *plVar4 = (ulonglong)(*(uint *)(plVar6 + 2) >> 3) + *plVar6;
    puVar5[3] = uVar2;
    if (uVar2 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = (uint)(*(byte *)*plVar4 >> (8U - (char)uVar2 & 0x1f));
      *plVar4 = *plVar4 + 1;
    }
    plVar6 = plVar6 + 8;
    puVar5 = puVar5 + 2;
    plVar4 = plVar4 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_60 = (longlong)(int)-(*(uint *)(param_1 + 6) >> 3) + param_1[4];
  local_50[4] = -*(uint *)(param_1 + 6) & 7;
  if (local_50[4] == 0) {
    local_50[1] = 0;
  }
  else {
    pbVar1 = (byte *)(local_60 + -1);
    local_60 = local_60 + -1;
    local_50[1] = (uint)(*pbVar1 >> (8U - (char)local_50[4] & 0x1f));
  }
  local_78 = param_3;
  iVar3 = FUN_144f46d60(&local_78,param_2);
  if (iVar3 == 0) {
    *param_5 = 1;
  }
  *(uint *)(param_1 + 2) = ((int)local_68 - (int)*param_1) * 8 - local_50[3];
  *(uint *)(param_1 + 10) = (local_58 - (int)param_1[8]) * 8 - local_50[5];
  *(uint *)(param_1 + 6) = ((int)param_1[4] - (int)local_60) * 8 - local_50[4];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144f47380 FUN_144f47380 body=953 status=ok
// SIG undefined FUN_144f47380(void)

void FUN_144f47380(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,int param_7,float param_8,longlong param_9)

{
  short *psVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar12 = (longlong)param_3;
  param_5 = param_5 + (longlong)param_7 * 2;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    if (*(char *)(param_1 + 0xd4) == '\0') {
      FUN_1452f8b10(param_2,param_3,param_4,param_5,param_8,param_9);
      return;
    }
    FUN_1452fa6e0();
    return;
  }
  lVar14 = 0;
  lVar10 = lVar12 >> 1;
  lVar9 = lVar14;
  if (lVar10 < 4) {
    if (0 < lVar10) {
      lVar13 = param_9 - param_2;
      goto LAB_144f47536;
    }
LAB_144f47587:
    if (lVar10 < 4) {
      lVar12 = param_9 - param_2;
      goto LAB_144f476b8;
    }
  }
  else {
    pfVar7 = (float *)(param_4 + -8 + lVar10 * 4);
    lVar13 = param_9 - param_2;
    psVar11 = (short *)(param_5 + 4);
    pfVar8 = (float *)(param_2 + 4);
    do {
      lVar5 = lVar12 - lVar9;
      lVar9 = lVar9 + 4;
      pfVar8[-1] = (float)(int)psVar11[-2] * param_8 * *(float *)(param_9 + -4 + lVar5 * 4) -
                   *(float *)(lVar13 + -4 + (longlong)pfVar8) * pfVar7[1];
      *pfVar8 = (float)(int)psVar11[-1] * param_8 * *(float *)(param_9 + -8 + lVar5 * 4) -
                *(float *)(lVar13 + (longlong)pfVar8) * *pfVar7;
      pfVar8[1] = (float)(int)*psVar11 * param_8 * *(float *)(param_9 + -0xc + lVar5 * 4) -
                  *(float *)(lVar13 + 4 + (longlong)pfVar8) * pfVar7[-1];
      psVar1 = psVar11 + 1;
      psVar11 = psVar11 + 4;
      pfVar2 = pfVar7 + -2;
      pfVar7 = pfVar7 + -4;
      pfVar8[2] = (float)(int)*psVar1 * param_8 * *(float *)(param_9 + -0x10 + lVar5 * 4) -
                  *(float *)(lVar13 + 8 + (longlong)pfVar8) * *pfVar2;
      pfVar8 = pfVar8 + 4;
    } while (lVar9 < lVar10 + -3);
    if (lVar9 < lVar10) {
LAB_144f47536:
      pfVar8 = (float *)(param_2 + lVar9 * 4);
      pfVar7 = (float *)(param_4 + ((lVar10 - lVar9) + -1) * 4);
      do {
        lVar5 = lVar9 * 2;
        lVar6 = lVar12 - lVar9;
        fVar3 = *pfVar7;
        lVar9 = lVar9 + 1;
        pfVar7 = pfVar7 + -1;
        *pfVar8 = (float)(int)*(short *)(param_5 + lVar5) * param_8 *
                  *(float *)(param_9 + -4 + lVar6 * 4) -
                  *(float *)((longlong)pfVar8 + lVar13) * fVar3;
        pfVar8 = pfVar8 + 1;
      } while (lVar9 < lVar10);
      goto LAB_144f47587;
    }
  }
  pfVar8 = (float *)(param_9 + -8 + lVar10 * 4);
  psVar11 = (short *)(param_5 + -4 + lVar10 * 2);
  pfVar7 = (float *)(param_2 + 4 + lVar10 * 4);
  lVar12 = param_9 - param_2;
  lVar9 = (param_4 + lVar10 * -4) - param_2;
  lVar13 = (lVar10 - 4U >> 2) + 1;
  lVar14 = lVar13 * 4;
  do {
    pfVar7[-1] = (float)(int)psVar11[1] * param_8 * pfVar8[1] +
                 *(float *)((longlong)pfVar7 + lVar9 + -4) *
                 *(float *)((longlong)pfVar7 + lVar12 + -4);
    *pfVar7 = *(float *)(lVar9 + (longlong)pfVar7) * *(float *)((longlong)pfVar7 + lVar12) +
              (float)(int)*psVar11 * param_8 * *pfVar8;
    pfVar7[1] = (float)(int)psVar11[-1] * param_8 * pfVar8[-1] +
                *(float *)((longlong)pfVar7 + lVar9 + 4) * *(float *)((longlong)pfVar7 + lVar12 + 4)
    ;
    psVar1 = psVar11 + -2;
    psVar11 = psVar11 + -4;
    pfVar2 = pfVar8 + -2;
    pfVar8 = pfVar8 + -4;
    pfVar7[2] = (float)(int)*psVar1 * param_8 * *pfVar2 +
                *(float *)((longlong)pfVar7 + ((2 - lVar10) * 4 - param_2) + param_4) *
                *(float *)((longlong)pfVar7 + lVar12 + 8);
    pfVar7 = pfVar7 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
LAB_144f476b8:
  if (lVar14 < lVar10) {
    lVar9 = lVar10 - lVar14;
    pfVar8 = (float *)(param_2 + (lVar14 + lVar10) * 4);
    pfVar7 = (float *)(param_9 + -4 + lVar9 * 4);
    psVar11 = (short *)(param_5 + -2 + lVar9 * 2);
    do {
      sVar4 = *psVar11;
      psVar11 = psVar11 + -1;
      fVar3 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      *pfVar8 = *(float *)(lVar12 + (longlong)pfVar8) *
                *(float *)((longlong)pfVar8 + ((param_4 + lVar10 * -4) - param_2)) +
                (float)(int)sVar4 * param_8 * fVar3;
      pfVar8 = pfVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144f47740 FUN_144f47740 body=872 status=ok
// SIG undefined FUN_144f47740(void)

void FUN_144f47740(longlong param_1,longlong param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)(param_3 + 5000) * -0x3b314601e57a13ad;
  local_40 = param_3 ^ 0x55555555;
  uVar4 = uVar3 >> 0x21;
  local_44 = (uint)(uVar3 >> 0x21);
  local_3c = local_44 ^ 0x55555555;
  local_48 = param_3;
  if (*(char *)(param_1 + 0xd2) == '\0') {
    iVar7 = 0;
    iVar6 = 0;
    if (*param_5 == 4) {
      puVar2 = (undefined1 *)(param_2 + 2);
      piVar8 = param_5;
      do {
        if (*(longlong *)(puVar2 + -2) == 0) {
          puVar2[-2] = (&DAT_14c726f00)[param_3 >> 4 & 0xf];
          puVar2[-1] = (&DAT_14c726f00)[param_3 >> 0xc & 0xf];
          *puVar2 = (&DAT_14c726f00)[param_3 >> 0x14 & 0xf];
          puVar2[1] = (&DAT_14c726f00)[param_3 >> 0x1c];
          param_3 = param_3 * 0x7ff8a3ed + 0x2aa01d31;
        }
        piVar8 = piVar8 + 1;
        iVar7 = iVar7 + 4;
        puVar2 = puVar2 + 4;
        iVar6 = iVar6 + 1;
      } while (*piVar8 == 4);
    }
    piVar8 = param_5 + iVar6;
    if (param_5[iVar6] == 8) {
      puVar2 = (undefined1 *)((longlong)iVar7 + 6 + param_2);
      do {
        if (*(longlong *)(puVar2 + -6) == 0) {
          puVar2[-6] = (&DAT_14c726f00)[param_3 >> 4 & 0xf];
          puVar2[-5] = (&DAT_14c726f00)[param_3 >> 0xc & 0xf];
          puVar2[-4] = (&DAT_14c726f00)[param_3 >> 0x14 & 0xf];
          puVar2[-3] = (&DAT_14c726f00)[param_3 >> 0x1c];
          uVar5 = (uint)(uVar4 >> 4);
          uVar4 = (ulonglong)((int)uVar4 * 0x7ff8a3ed + 0x2aa01d31);
          puVar2[-2] = (&DAT_14c726f00)[uVar5 & 0xf];
          puVar2[-1] = (&DAT_14c726f00)[uVar5 >> 8 & 0xf];
          *puVar2 = (&DAT_14c726f00)[uVar5 >> 0x10 & 0xf];
          puVar2[1] = (&DAT_14c726f00)[uVar5 >> 0x18];
          param_3 = param_3 * 0x7ff8a3ed + 0x2aa01d31;
        }
        piVar8 = piVar8 + 1;
        iVar7 = iVar7 + 8;
        puVar2 = puVar2 + 8;
        iVar6 = iVar6 + 1;
      } while (*piVar8 == 8);
    }
    if (iVar6 < param_4) {
      puVar2 = (undefined1 *)((longlong)iVar7 + 6 + param_2);
      uVar3 = (ulonglong)(uint)(param_4 - iVar6);
      uVar5 = local_40;
      uVar9 = local_3c;
      do {
        if (*(longlong *)(puVar2 + -6) == 0 && *(longlong *)(puVar2 + 2) == 0) {
          puVar2[-6] = (&DAT_14c726f00)[param_3 >> 4 & 0xf];
          puVar2[-5] = (&DAT_14c726f00)[param_3 >> 0xc & 0xf];
          puVar2[-4] = (&DAT_14c726f00)[param_3 >> 0x14 & 0xf];
          puVar2[-3] = (&DAT_14c726f00)[param_3 >> 0x1c];
          uVar1 = (uint)(uVar4 >> 4);
          uVar4 = (ulonglong)((int)uVar4 * 0x7ff8a3ed + 0x2aa01d31);
          puVar2[-2] = (&DAT_14c726f00)[uVar1 & 0xf];
          puVar2[-1] = (&DAT_14c726f00)[uVar1 >> 8 & 0xf];
          *puVar2 = (&DAT_14c726f00)[uVar1 >> 0x10 & 0xf];
          puVar2[1] = (&DAT_14c726f00)[uVar1 >> 0x18];
          puVar2[2] = (&DAT_14c726f00)[uVar5 >> 4 & 0xf];
          puVar2[3] = (&DAT_14c726f00)[uVar5 >> 0xc & 0xf];
          puVar2[4] = (&DAT_14c726f00)[uVar5 >> 0x14 & 0xf];
          puVar2[5] = (&DAT_14c726f00)[uVar5 >> 0x1c];
          puVar2[6] = (&DAT_14c726f00)[uVar9 >> 4 & 0xf];
          puVar2[7] = (&DAT_14c726f00)[uVar9 >> 0xc & 0xf];
          puVar2[8] = (&DAT_14c726f00)[uVar9 >> 0x14 & 0xf];
          puVar2[9] = (&DAT_14c726f00)[uVar9 >> 0x1c];
          param_3 = param_3 * 0x7ff8a3ed + 0x2aa01d31;
          uVar5 = uVar5 * 0x7ff8a3ed + 0x2aa01d31;
          uVar9 = uVar9 * 0x7ff8a3ed + 0x2aa01d31;
        }
        puVar2 = puVar2 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    FUN_1452f9e70(param_2,&local_48,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 144f47ac0 FUN_144f47ac0 body=1205 status=ok
// SIG undefined FUN_144f47ac0(void)

void FUN_144f47ac0(char *param_1,uint param_2,int param_3,longlong param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar10 = param_2 * 0x7ff8a3ed + 0x2aa01d31;
  if (*param_1 == '\0') {
    *param_1 = (&DAT_14c726f10)[param_2 >> 10 & 1];
  }
  if (param_1[1] == '\0') {
    param_1[1] = (&DAT_14c726f10)[param_2 >> 0xe & 1];
  }
  if (param_1[2] == '\0') {
    param_1[2] = (&DAT_14c726f10)[param_2 >> 0x12 & 1];
  }
  if (param_1[3] == '\0') {
    param_1[3] = (&DAT_14c726f10)[param_2 >> 0x16 & 1];
  }
  if (*(short *)(param_1 + 4) == 0) {
    uVar11 = uVar10 >> 0x14;
    uVar8 = uVar10 >> 0x18;
    uVar10 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[4] = (&DAT_14c726f10)[uVar11 & 0xf];
    param_1[5] = (&DAT_14c726f10)[uVar8 & 0xf];
  }
  if (*(short *)(param_1 + 6) == 0) {
    uVar11 = uVar10 >> 0x14;
    uVar8 = uVar10 >> 0x18;
    uVar10 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[6] = (&DAT_14c726f10)[uVar11 & 0xf];
    param_1[7] = (&DAT_14c726f10)[uVar8 & 0xf];
  }
  if (*(short *)(param_1 + 8) == 0) {
    uVar11 = uVar10 >> 0x14;
    uVar8 = uVar10 >> 0x18;
    uVar10 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[8] = (&DAT_14c726f10)[uVar11 & 0xf];
    param_1[9] = (&DAT_14c726f10)[uVar8 & 0xf];
  }
  if (*(short *)(param_1 + 10) == 0) {
    uVar11 = uVar10 >> 0x14;
    uVar8 = uVar10 >> 0x18;
    uVar10 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[10] = (&DAT_14c726f10)[uVar11 & 0xf];
    param_1[0xb] = (&DAT_14c726f10)[uVar8 & 0xf];
  }
  uVar11 = uVar10;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0xc] = (&DAT_14c726f10)[uVar10 >> 0xc & 0xf];
    param_1[0xd] = (&DAT_14c726f10)[uVar10 >> 0x10 & 0xf];
    param_1[0xe] = (&DAT_14c726f10)[uVar10 >> 0x14 & 0xf];
    param_1[0xf] = (&DAT_14c726f10)[uVar10 >> 0x18 & 0xf];
  }
  uVar10 = uVar11;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar10 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x10] = (&DAT_14c726f10)[uVar11 >> 0xc & 0xf];
    param_1[0x11] = (&DAT_14c726f10)[uVar11 >> 0x10 & 0xf];
    param_1[0x12] = (&DAT_14c726f10)[uVar11 >> 0x14 & 0xf];
    param_1[0x13] = (&DAT_14c726f10)[uVar11 >> 0x18 & 0xf];
  }
  uVar11 = uVar10;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x14] = (&DAT_14c726f10)[uVar10 >> 0xc & 0xf];
    param_1[0x15] = (&DAT_14c726f10)[uVar10 >> 0x10 & 0xf];
    param_1[0x16] = (&DAT_14c726f10)[uVar10 >> 0x14 & 0xf];
    param_1[0x17] = (&DAT_14c726f10)[uVar10 >> 0x18 & 0xf];
  }
  uVar10 = uVar11;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar10 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x18] = (&DAT_14c726f10)[uVar11 >> 0xc & 0xf];
    param_1[0x19] = (&DAT_14c726f10)[uVar11 >> 0x10 & 0xf];
    param_1[0x1a] = (&DAT_14c726f10)[uVar11 >> 0x14 & 0xf];
    param_1[0x1b] = (&DAT_14c726f10)[uVar11 >> 0x18 & 0xf];
  }
  uVar11 = uVar10;
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x1c] = (&DAT_14c726f10)[uVar10 >> 0xc & 0xf];
    param_1[0x1d] = (&DAT_14c726f10)[uVar10 >> 0x10 & 0xf];
    param_1[0x1e] = (&DAT_14c726f10)[uVar10 >> 0x14 & 0xf];
    param_1[0x1f] = (&DAT_14c726f10)[uVar10 >> 0x18 & 0xf];
  }
  iVar12 = 0x20;
  if (0xd < (longlong)param_3) {
    lVar7 = 0xd;
    do {
      iVar1 = *(int *)(param_4 + lVar7 * 4);
      uVar8 = 0;
      uVar10 = 0;
      if (0 < iVar1) {
        puVar2 = (uint *)(param_1 + iVar12);
        lVar3 = ((longlong)iVar1 - 1U >> 3) + 1;
        do {
          uVar8 = uVar8 | *puVar2;
          uVar10 = uVar10 | puVar2[1];
          puVar2 = puVar2 + 2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (uVar10 == 0 && uVar8 == 0) {
        iVar9 = 0;
        if (7 < iVar1) {
          iVar6 = 7;
          pcVar4 = param_1 + (longlong)iVar12 + 2;
          uVar10 = uVar11;
          do {
            iVar9 = iVar9 + 8;
            iVar6 = iVar6 + 8;
            uVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
            pcVar4[-2] = (&DAT_14c726f10)[uVar10 & 0xf];
            pcVar4[-1] = (&DAT_14c726f10)[uVar10 >> 4 & 0xf];
            *pcVar4 = (&DAT_14c726f10)[uVar10 >> 8 & 0xf];
            pcVar4[1] = (&DAT_14c726f10)[uVar10 >> 0xc & 0xf];
            pcVar4[2] = (&DAT_14c726f10)[uVar10 >> 0x10 & 0xf];
            pcVar4[3] = (&DAT_14c726f10)[uVar10 >> 0x14 & 0xf];
            pcVar4[4] = (&DAT_14c726f10)[uVar10 >> 0x18 & 0xf];
            pcVar4[5] = (&DAT_14c726f10)[uVar10 >> 0x1c];
            pcVar4 = pcVar4 + 8;
            uVar10 = uVar11;
          } while (iVar6 < iVar1);
        }
        uVar5 = (ulonglong)uVar11;
        uVar11 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
        for (lVar3 = (longlong)iVar9; lVar3 < iVar1; lVar3 = lVar3 + 1) {
          param_1[lVar3 + iVar12] = (&DAT_14c726f10)[(uint)uVar5 & 0xf];
          uVar5 = uVar5 >> 4;
        }
      }
      iVar12 = iVar12 + *(int *)(param_4 + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_3);
  }
  return;
}



// FUNCTION 144f47f80 FUN_144f47f80 body=673 status=ok
// SIG undefined FUN_144f47f80(void)

void FUN_144f47f80(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    FUN_1452f8d00(param_2,param_3,param_4,param_5);
    return;
  }
  lVar6 = 0;
  iVar7 = 0;
  if (param_3 < 4) {
    if (param_3 < 1) {
      return;
    }
    param_4 = param_4 - param_6;
    param_2 = param_2 - param_6;
  }
  else {
    param_4 = param_4 - param_6;
    puVar8 = (ushort *)(param_5 + 4);
    param_2 = param_2 - param_6;
    pfVar5 = (float *)(param_6 + 4);
    uVar4 = (param_3 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar4;
    iVar7 = uVar4 * 4;
    lVar6 = (ulonglong)uVar4 * 4;
    do {
      iVar3 = *(int *)((longlong)pfVar5 + param_4 + -4);
      if (iVar3 == -0x11) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)(1 << ((char)iVar3 + 0x10U & 0x1f));
      }
      *(float *)((longlong)pfVar5 + param_2 + -4) =
           fVar10 * (((float)puVar8[-2] * 1.5258789e-05 * 0.34375 + 0.65625) *
                     (float)puVar8[-2] * 1.5258789e-05 + 1.0) * pfVar5[-1];
      if (*(int *)((longlong)pfVar5 + param_4) == -0x11) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)(1 << ((char)*(int *)((longlong)pfVar5 + param_4) + 0x10U & 0x1f));
      }
      *(float *)((longlong)pfVar5 + param_2) =
           fVar10 * (((float)puVar8[-1] * 1.5258789e-05 * 0.34375 + 0.65625) *
                     (float)puVar8[-1] * 1.5258789e-05 + 1.0) * *pfVar5;
      iVar3 = *(int *)((longlong)pfVar5 + param_4 + 4);
      if (iVar3 == -0x11) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)(1 << ((char)iVar3 + 0x10U & 0x1f));
      }
      *(float *)((longlong)pfVar5 + param_2 + 4) =
           fVar10 * (((float)*puVar8 * 1.5258789e-05 * 0.34375 + 0.65625) *
                     (float)*puVar8 * 1.5258789e-05 + 1.0) * pfVar5[1];
      puVar1 = puVar8 + 1;
      iVar3 = *(int *)((longlong)pfVar5 + param_4 + 8);
      if (iVar3 == -0x11) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)(1 << ((char)iVar3 + 0x10U & 0x1f));
      }
      puVar8 = puVar8 + 4;
      *(float *)((longlong)pfVar5 + param_2 + 8) =
           fVar10 * (((float)*puVar1 * 1.5258789e-05 * 0.34375 + 0.65625) *
                     (float)*puVar1 * 1.5258789e-05 + 1.0) * pfVar5[2];
      pfVar5 = pfVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (param_3 <= iVar7) {
      return;
    }
  }
  pfVar5 = (float *)(param_6 + lVar6 * 4);
  uVar9 = (ulonglong)(uint)(param_3 - iVar7);
  puVar8 = (ushort *)(param_5 + lVar6 * 2);
  do {
    uVar2 = *puVar8;
    if (*(int *)(param_4 + (longlong)pfVar5) == -0x11) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)(1 << ((char)*(int *)(param_4 + (longlong)pfVar5) + 0x10U & 0x1f));
    }
    puVar8 = puVar8 + 1;
    *(float *)(param_2 + (longlong)pfVar5) =
         fVar10 * (((float)uVar2 * 1.5258789e-05 * 0.34375 + 0.65625) * (float)uVar2 * 1.5258789e-05
                  + 1.0) * *pfVar5;
    pfVar5 = pfVar5 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  return;
}



// FUNCTION 144f48230 FUN_144f48230 body=706 status=ok
// SIG undefined FUN_144f48230(void)

void FUN_144f48230(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,int *param_6,longlong param_7)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  if (*(char *)(param_1 + 0xd2) != '\0') {
    FUN_1452f9160(param_2,param_3,param_4,param_6);
    return;
  }
  iVar12 = 0;
  iVar10 = *param_6;
  piVar1 = param_6;
  while (iVar10 == 1) {
    iVar12 = iVar12 + 1;
    piVar1 = piVar1 + 1;
    iVar10 = *piVar1;
  }
  lVar4 = (longlong)iVar12;
  if (lVar4 < param_4) {
    pfVar11 = (float *)(param_3 + lVar4 * 4);
    lVar4 = param_4 - lVar4;
    do {
      uVar3 = *(uint *)((longlong)pfVar11 + ((longlong)param_6 - param_3));
      lVar13 = (longlong)(int)uVar3;
      iVar18 = 0;
      iVar10 = 0;
      lVar15 = (longlong)iVar12;
      if (((0 < (int)uVar3) && (7 < uVar3)) && (1 < DAT_14c707900)) {
        iVar22 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
        iVar21 = 0;
        uVar6 = uVar3 & 0x80000007;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
        }
        lVar7 = 0;
        puVar5 = (undefined8 *)(param_7 + lVar15 * 2);
        do {
          auVar17 = pmovzxwd(in_XMM1,*puVar5);
          auVar17 = pmulld(auVar17,auVar17);
          iVar22 = iVar22 + auVar17._0_4_;
          iVar23 = iVar23 + auVar17._4_4_;
          iVar24 = iVar24 + auVar17._8_4_;
          iVar25 = iVar25 + auVar17._12_4_;
          iVar10 = iVar10 + 8;
          lVar7 = lVar7 + 8;
          auVar17 = pmovzxwd(auVar17,puVar5[1]);
          puVar5 = puVar5 + 2;
          in_XMM1 = pmulld(auVar17,auVar17);
          iVar18 = iVar18 + in_XMM1._0_4_;
          iVar19 = iVar19 + in_XMM1._4_4_;
          iVar20 = iVar20 + in_XMM1._8_4_;
          iVar21 = iVar21 + in_XMM1._12_4_;
        } while (lVar7 < (int)(uVar3 - uVar6));
        iVar18 = iVar18 + iVar22 + iVar20 + iVar24 + iVar19 + iVar23 + iVar21 + iVar25;
      }
      lVar7 = (longlong)iVar10;
      if (lVar7 < lVar13) {
        puVar8 = (ushort *)(param_7 + (lVar7 + lVar15) * 2);
        lVar7 = lVar13 - lVar7;
        do {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          iVar18 = iVar18 + (uint)uVar2 * (uint)uVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      fVar16 = (float)iVar18;
      in_XMM1 = ZEXT416((uint)fVar16);
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      lVar7 = 0;
      fVar16 = *pfVar11 / fVar16;
      if (3 < lVar13) {
        lVar14 = (lVar13 - 4U >> 2) + 1;
        lVar7 = lVar14 * 4;
        pfVar9 = (float *)(param_2 + 8 + lVar15 * 4);
        puVar8 = (ushort *)(param_7 + 4 + lVar15 * 2);
        do {
          pfVar9[-2] = (float)puVar8[-2] * fVar16;
          pfVar9[-1] = (float)puVar8[-1] * fVar16;
          *pfVar9 = (float)*puVar8 * fVar16;
          in_XMM1 = ZEXT416((uint)((float)puVar8[1] * fVar16));
          pfVar9[1] = (float)puVar8[1] * fVar16;
          lVar14 = lVar14 + -1;
          pfVar9 = pfVar9 + 4;
          puVar8 = puVar8 + 4;
        } while (lVar14 != 0);
      }
      if (lVar7 < lVar13) {
        lVar13 = lVar13 - lVar7;
        puVar8 = (ushort *)(param_7 + (lVar15 + lVar7) * 2);
        pfVar9 = (float *)(param_2 + (lVar15 + lVar7) * 4);
        do {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          *pfVar9 = (float)uVar2 * fVar16;
          lVar13 = lVar13 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar13 != 0);
      }
      iVar12 = iVar12 + uVar3;
      pfVar11 = pfVar11 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144f48500 FUN_144f48500 body=1421 status=ok
// SIG undefined FUN_144f48500(void)

void FUN_144f48500(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  int local_res8;
  
  if (*(char *)(param_1 + 0xd2) == '\0') {
    iVar13 = 0;
    iVar9 = 0;
    iVar4 = *param_6;
    local_res8 = 0;
    if (iVar4 < 0x10) {
      lVar15 = 0;
      lVar16 = 0;
      piVar14 = param_6;
      do {
        lVar7 = (longlong)iVar4;
        lVar12 = 0;
        lVar8 = (longlong)iVar9;
        fVar17 = 1e-20;
        if (3 < lVar7) {
          lVar11 = (lVar7 - 4U >> 2) + 1;
          pcVar5 = (char *)(lVar8 + param_3 + 2);
          lVar12 = lVar11 * 4;
          do {
            pcVar6 = pcVar5 + -2;
            pcVar1 = pcVar5 + -1;
            cVar3 = *pcVar5;
            pcVar2 = pcVar5 + 1;
            pcVar5 = pcVar5 + 4;
            fVar17 = fVar17 + (float)(int)*pcVar6 * (float)(int)*pcVar6 +
                     (float)(int)*pcVar1 * (float)(int)*pcVar1 +
                     (float)(int)cVar3 * (float)(int)cVar3 +
                     (float)(int)*pcVar2 * (float)(int)*pcVar2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        pcVar5 = (char *)(lVar8 + param_3);
        if (lVar12 < lVar7) {
          pcVar6 = (char *)(lVar12 + lVar8 + param_3);
          lVar7 = lVar7 - lVar12;
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            fVar17 = fVar17 + (float)(int)cVar3 * (float)(int)cVar3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (fVar17 < 0.0) {
          fVar17 = sqrtf(fVar17);
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        lVar15 = lVar15 + 1;
        iVar13 = local_res8 + 1;
        pfVar10 = (float *)(lVar16 + param_4);
        lVar16 = lVar15 * 4;
        fVar17 = *pfVar10 / fVar17;
        *(float *)(param_2 + lVar8 * 4) = (float)(int)*pcVar5 * fVar17;
        *(float *)(param_2 + 4 + lVar8 * 4) = (float)(int)pcVar5[1] * fVar17;
        *(float *)(param_2 + 8 + lVar8 * 4) = (float)(int)pcVar5[2] * fVar17;
        *(float *)(param_2 + 0xc + lVar8 * 4) = (float)(int)pcVar5[3] * fVar17;
        *(float *)(param_2 + 0x10 + lVar8 * 4) = (float)(int)pcVar5[4] * fVar17;
        *(float *)(param_2 + 0x14 + lVar8 * 4) = (float)(int)pcVar5[5] * fVar17;
        *(float *)(param_2 + 0x18 + lVar8 * 4) = (float)(int)pcVar5[6] * fVar17;
        *(float *)(param_2 + 0x1c + lVar8 * 4) = (float)(int)pcVar5[7] * fVar17;
        iVar9 = iVar9 + *piVar14;
        piVar14 = param_6 + lVar15;
        iVar4 = *piVar14;
        local_res8 = iVar13;
      } while (iVar4 < 0x10);
    }
    lVar16 = (longlong)iVar13;
    if (lVar16 < param_5) {
      pcVar5 = (char *)(param_3 + 2 + (longlong)iVar9);
      pfVar10 = (float *)(param_2 + 8 + (longlong)iVar9 * 4);
      iVar9 = iVar9 + (param_5 - iVar13) * 0x10;
      do {
        fVar18 = (float)(int)pcVar5[-2];
        fVar17 = fVar18 * fVar18 + 1e-20 + (float)(int)pcVar5[-1] * (float)(int)pcVar5[-1] +
                 (float)(int)*pcVar5 * (float)(int)*pcVar5 +
                 (float)(int)pcVar5[1] * (float)(int)pcVar5[1] +
                 (float)(int)pcVar5[2] * (float)(int)pcVar5[2] +
                 (float)(int)pcVar5[3] * (float)(int)pcVar5[3] +
                 (float)(int)pcVar5[4] * (float)(int)pcVar5[4] +
                 (float)(int)pcVar5[5] * (float)(int)pcVar5[5] +
                 (float)(int)pcVar5[6] * (float)(int)pcVar5[6] +
                 (float)(int)pcVar5[7] * (float)(int)pcVar5[7] +
                 (float)(int)pcVar5[8] * (float)(int)pcVar5[8] +
                 (float)(int)pcVar5[9] * (float)(int)pcVar5[9] +
                 (float)(int)pcVar5[10] * (float)(int)pcVar5[10] +
                 (float)(int)pcVar5[0xb] * (float)(int)pcVar5[0xb] +
                 (float)(int)pcVar5[0xc] * (float)(int)pcVar5[0xc] +
                 (float)(int)pcVar5[0xd] * (float)(int)pcVar5[0xd];
        if (fVar17 < 0.0) {
          fVar17 = sqrtf(fVar17);
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        fVar17 = *(float *)(param_4 + lVar16 * 4) / fVar17;
        pfVar10[-2] = fVar18 * fVar17;
        pfVar10[-1] = (float)(int)pcVar5[-1] * fVar17;
        *pfVar10 = (float)(int)*pcVar5 * fVar17;
        pfVar10[1] = (float)(int)pcVar5[1] * fVar17;
        pfVar10[2] = (float)(int)pcVar5[2] * fVar17;
        pfVar10[3] = (float)(int)pcVar5[3] * fVar17;
        pfVar10[4] = (float)(int)pcVar5[4] * fVar17;
        pfVar10[5] = (float)(int)pcVar5[5] * fVar17;
        pfVar10[6] = (float)(int)pcVar5[6] * fVar17;
        pfVar10[7] = (float)(int)pcVar5[7] * fVar17;
        pfVar10[8] = (float)(int)pcVar5[8] * fVar17;
        pfVar10[9] = (float)(int)pcVar5[9] * fVar17;
        pfVar10[10] = (float)(int)pcVar5[10] * fVar17;
        pfVar10[0xb] = (float)(int)pcVar5[0xb] * fVar17;
        pfVar10[0xc] = (float)(int)pcVar5[0xc] * fVar17;
        pfVar10[0xd] = (float)(int)pcVar5[0xd] * fVar17;
        pfVar10 = pfVar10 + 0x10;
        pcVar5 = pcVar5 + 0x10;
        lVar16 = lVar16 + 1;
      } while (lVar16 < param_5);
    }
    if (iVar9 < 0x400) {
      memset((void *)(param_2 + (longlong)iVar9 * 4),0,(longlong)(0x400 - iVar9) << 2);
    }
    return;
  }
  FUN_1452f9690(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 144f48a90 FUN_144f48a90 body=1261 status=ok
// SIG undefined FUN_144f48a90(void)

void FUN_144f48a90(float *param_1,char *param_2,float *param_3,int param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *param_1 = (float)(int)*param_2 * *param_3;
  param_1[1] = (float)(int)param_2[1] * param_3[1];
  param_1[2] = (float)(int)param_2[2] * param_3[2];
  param_1[3] = (float)(int)param_2[3] * param_3[3];
  fVar14 = (float)(int)param_2[4];
  fVar15 = (float)(int)param_2[5];
  fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + 1e-20;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  fVar4 = param_3[4];
  param_1[5] = (fVar4 / fVar13) * fVar15;
  param_1[4] = (fVar4 / fVar13) * fVar14;
  fVar14 = (float)(int)param_2[6];
  fVar15 = (float)(int)param_2[7];
  fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + 1e-20;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  fVar4 = param_3[5];
  param_1[6] = (fVar4 / fVar13) * fVar14;
  param_1[7] = (fVar4 / fVar13) * fVar15;
  fVar14 = (float)(int)param_2[8];
  fVar15 = (float)(int)param_2[9];
  fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + 1e-20;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  fVar4 = param_3[6];
  param_1[8] = (fVar4 / fVar13) * fVar14;
  param_1[9] = (fVar4 / fVar13) * fVar15;
  fVar14 = (float)(int)param_2[10];
  fVar15 = (float)(int)param_2[0xb];
  fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + 1e-20;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  fVar4 = param_3[7];
  pcVar10 = param_2 + 0xe;
  lVar11 = 8;
  pfVar12 = param_1 + 0xe;
  param_1[10] = (fVar4 / fVar13) * fVar14;
  param_1[0xb] = (fVar4 / fVar13) * fVar15;
  do {
    fVar14 = (float)(int)pcVar10[-2];
    fVar13 = fVar14 * fVar14 + 1e-20 + (float)(int)pcVar10[-1] * (float)(int)pcVar10[-1] +
             (float)(int)*pcVar10 * (float)(int)*pcVar10 +
             (float)(int)pcVar10[1] * (float)(int)pcVar10[1];
    if (fVar13 < 0.0) {
      fVar13 = sqrtf(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    pfVar8 = param_3 + lVar11;
    lVar11 = lVar11 + 1;
    fVar13 = *pfVar8 / fVar13;
    pfVar12[-2] = fVar14 * fVar13;
    pfVar12[-1] = (float)(int)pcVar10[-1] * fVar13;
    *pfVar12 = (float)(int)*pcVar10 * fVar13;
    pcVar1 = pcVar10 + 1;
    pcVar10 = pcVar10 + 4;
    pfVar12[1] = (float)(int)*pcVar1 * fVar13;
    pfVar12 = pfVar12 + 4;
  } while (lVar11 < 0xc);
  iVar9 = 0x1c;
  if (0xc < (longlong)param_4) {
    pfVar12 = param_3 + 0xc;
    lVar11 = (longlong)param_4 + -0xc;
    do {
      iVar6 = *(int *)((param_5 - (longlong)param_3) + (longlong)pfVar12);
      fVar13 = 1e-20;
      if (0 < iVar6) {
        pcVar10 = param_2 + (longlong)iVar9 + 2;
        lVar7 = ((longlong)iVar6 - 1U >> 2) + 1;
        do {
          pcVar1 = pcVar10 + -2;
          pcVar2 = pcVar10 + -1;
          cVar5 = *pcVar10;
          pcVar3 = pcVar10 + 1;
          pcVar10 = pcVar10 + 4;
          fVar13 = fVar13 + (float)(int)*pcVar1 * (float)(int)*pcVar1 +
                   (float)(int)*pcVar2 * (float)(int)*pcVar2 + (float)(int)cVar5 * (float)(int)cVar5
                   + (float)(int)*pcVar3 * (float)(int)*pcVar3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        if (fVar13 < 0.0) {
          fVar13 = sqrtf(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        lVar7 = ((longlong)iVar6 - 1U >> 2) + 1;
        fVar13 = *pfVar12 / fVar13;
        pcVar10 = param_2 + (longlong)iVar9 + 2;
        pfVar8 = param_1 + (longlong)iVar9 + 2;
        do {
          pfVar8[-2] = (float)(int)pcVar10[-2] * fVar13;
          pfVar8[-1] = (float)(int)pcVar10[-1] * fVar13;
          *pfVar8 = (float)(int)*pcVar10 * fVar13;
          pfVar8[1] = (float)(int)pcVar10[1] * fVar13;
          lVar7 = lVar7 + -1;
          pcVar10 = pcVar10 + 4;
          pfVar8 = pfVar8 + 4;
        } while (lVar7 != 0);
      }
      iVar9 = iVar9 + iVar6;
      pfVar12 = pfVar12 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (0x7f < iVar9) {
      return;
    }
  }
  memset(param_1 + iVar9,0,(longlong)(0x80 - iVar9) << 2);
  return;
}



// FUNCTION 144f48f80 FUN_144f48f80 body=678 status=ok
// SIG undefined FUN_144f48f80(void)

ulonglong FUN_144f48f80(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined2 *puVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined2 local_res20;
  
  param_4 = param_4 / 2;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    fVar12 = 32767.0;
    puVar4 = (undefined2 *)(param_2 + 4);
    fVar13 = 1.0;
    fVar14 = 1.0;
    fVar15 = 1.0;
    fVar16 = 1.0;
    lVar7 = (longlong)param_4;
    if (0 < param_4) {
      pfVar6 = (float *)(param_3 + 8);
      lVar5 = (lVar7 - 1U >> 2) + 1;
      puVar8 = puVar4;
      do {
        pfVar1 = pfVar6 + -2;
        fVar11 = pfVar6[-1];
        fVar2 = *pfVar6;
        fVar10 = ABS(*pfVar1);
        fVar3 = pfVar6[1];
        if (fVar13 <= fVar10) {
          fVar13 = fVar10;
        }
        pfVar6 = pfVar6 + 4;
        local_res20 = SUB42(*pfVar1 * 32767.0 + 12582912.0,0);
        fVar10 = ABS(fVar11);
        if (fVar15 <= fVar10) {
          fVar15 = fVar10;
        }
        puVar8[-2] = local_res20;
        local_res20 = SUB42(fVar11 * 32767.0 + 12582912.0,0);
        fVar11 = ABS(fVar2);
        if (fVar14 <= fVar11) {
          fVar14 = fVar11;
        }
        puVar8[-1] = local_res20;
        local_res20 = SUB42(fVar2 * 32767.0 + 12582912.0,0);
        fVar11 = ABS(fVar3);
        *puVar8 = local_res20;
        if (fVar16 <= fVar11) {
          fVar16 = fVar11;
        }
        local_res20 = SUB42(fVar3 * 32767.0 + 12582912.0,0);
        puVar8[1] = local_res20;
        puVar8 = puVar8 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (fVar14 <= fVar16) {
      fVar14 = fVar16;
    }
    if (fVar13 <= fVar15) {
      fVar13 = fVar15;
    }
    pfVar6 = (float *)(param_3 + 8);
    if (fVar13 <= fVar14) {
      fVar13 = fVar14;
    }
    if ((1.0 < fVar13) && (fVar12 = 32767.0 / fVar13, 0 < lVar7)) {
      lVar7 = (lVar7 - 1U >> 2) + 1;
      do {
        local_res20 = SUB42(fVar12 * pfVar6[-2] + 12582912.0,0);
        puVar4[-2] = local_res20;
        local_res20 = SUB42(fVar12 * pfVar6[-1] + 12582912.0,0);
        puVar4[-1] = local_res20;
        local_res20 = SUB42(fVar12 * *pfVar6 + 12582912.0,0);
        *puVar4 = local_res20;
        pfVar1 = pfVar6 + 1;
        pfVar6 = pfVar6 + 4;
        local_res20 = SUB42(fVar12 * *pfVar1 + 12582912.0,0);
        puVar4[1] = local_res20;
        puVar4 = puVar4 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    return (ulonglong)(uint)(1.0 / fVar12);
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    uVar9 = FUN_1452f9020(param_2,param_3,param_4);
    return uVar9;
  }
  uVar9 = FUN_1452fa550();
  return uVar9;
}



// FUNCTION 144f49230 FUN_144f49230 body=570 status=ok
// SIG undefined FUN_144f49230(void)

void FUN_144f49230(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 auStack_298 [32];
  uint *local_278;
  longlong local_270;
  longlong local_268;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  undefined4 local_248 [40];
  undefined4 local_1a8 [88];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  memset(local_248,0,0xa0);
  memset(local_1a8,0,0x160);
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = *(longlong *)(param_1 + 0xd8 + (longlong)iVar1 * 8);
  local_270 = lVar3 + 0x43c;
  local_278 = (uint *)param_5;
  FUN_144f47f80(param_1,local_248,*(undefined4 *)(lVar3 + 4),param_2 + 0xc);
  if (iVar1 == 0) {
    local_270 = lVar3 + 0x7c;
    if (*(int *)(lVar3 + 0x7c) == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)((longlong)local_1a8 + lVar4) = *(undefined4 *)((longlong)local_248 + lVar4);
        lVar4 = lVar4 + 4;
      } while (*(int *)(lVar3 + 0x7c + lVar4) == 1);
    }
    local_268 = param_2 + 0xe4;
    local_278 = (uint *)CONCAT44(local_278._4_4_,*(undefined4 *)(lVar3 + 0x10));
    FUN_144f48230(param_1,local_1a8,local_248,*(undefined4 *)(lVar3 + 4));
    uVar2 = *(undefined4 *)(lVar3 + 0x10);
    iVar1 = ((param_4 >> 5) + param_4) * -0x678ca057;
    uVar5 = iVar1 + 0x2aa01d31;
    if (*(char *)(param_1 + 0xd2) == '\0') {
      local_278 = (uint *)(lVar3 + 0x1c);
      FUN_144f47740(param_1,param_2 + 0x182,uVar5,uVar2);
      local_278 = (uint *)CONCAT44(local_278._4_4_,uVar2);
      local_270 = lVar3 + 0x1c;
      FUN_144f48500(param_1,param_2 + 0x5c0,param_2 + 0x182,local_1a8);
    }
    else {
      local_250 = uVar5 ^ 0x55555555;
      local_278 = &local_258;
      local_254 = (uint)((ulonglong)(iVar1 + 0x2aa030b9) * -0x3b314601e57a13ad >> 0x21);
      local_24c = local_254 ^ 0x55555555;
      local_258 = uVar5;
      FUN_1452fa070(param_2 + 0x5c0,param_2 + 0x182,local_1a8);
    }
  }
  else {
    puVar6 = (uint *)(lVar3 + 0x1c);
    FUN_144f47ac0(param_2 + 0x182,((param_4 >> 5) + param_4) * -0x678ca057 + 0x2aa01d31,
                  *(undefined4 *)(lVar3 + 4));
    local_278 = puVar6;
    if (*(char *)(param_1 + 0xd2) == '\0') {
      FUN_144f48a90(param_2 + 0x5c0,param_2 + 0x182,local_248,*(undefined4 *)(lVar3 + 4));
    }
    else {
      FUN_1452f9960();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_298);
}



// FUNCTION 144f49480 FUN_144f49480 body=9751 status=ok
// SIG undefined FUN_144f49480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f49480(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
                  ulonglong *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  char *pcVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  uint *puVar18;
  int *piVar19;
  ulonglong uVar20;
  float *pfVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  undefined *puVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  short *psVar29;
  size_t sVar30;
  longlong lVar31;
  byte *pbVar32;
  longlong lVar33;
  undefined1 *puVar34;
  longlong *plVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint *puVar41;
  byte **ppbVar42;
  ulonglong uVar43;
  byte *pbVar44;
  char *pcVar45;
  size_t _Size;
  int iVar46;
  ulonglong uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined1 auStack_5928 [32];
  byte *local_5908;
  uint *local_5900;
  undefined4 local_58f8;
  float local_58f0;
  undefined *local_58e8;
  undefined4 local_58e0;
  undefined4 local_58d8;
  int local_58d0;
  int local_58c0 [2];
  undefined8 local_58b8;
  longlong local_58b0;
  longlong local_58a8;
  uint local_58a0;
  int local_589c;
  uint local_5898;
  int local_5894;
  int local_5890;
  uint local_588c;
  uint local_5888;
  longlong local_5880;
  ulonglong local_5878;
  longlong local_5870;
  longlong local_5868;
  undefined8 local_5860;
  uint local_5858;
  int local_5854;
  uint local_5850;
  longlong local_5848;
  longlong *local_5840;
  int local_5838;
  ulonglong local_5830;
  int local_5828 [2];
  uint local_5820;
  undefined4 local_581c;
  int local_5818;
  uint local_5814;
  int local_5810;
  int local_580c;
  int local_5808;
  int local_5804;
  int local_5800;
  int local_57fc;
  uint local_57f8;
  uint local_57f4;
  uint local_57f0;
  ulonglong *local_57e8;
  ulonglong *local_57e0;
  ulonglong *local_57d8;
  longlong local_57d0;
  byte *local_57c8;
  int local_57c0;
  uint local_57b8 [6];
  byte *local_57a0;
  byte *local_5798;
  longlong local_5790;
  uint local_5788;
  byte *local_5780;
  byte *local_5778;
  ulonglong local_5770;
  uint local_5768;
  byte *local_5760;
  byte *local_5758;
  undefined8 local_5750;
  uint local_5748;
  undefined1 local_5740 [256];
  undefined1 local_5640 [3840];
  undefined1 local_4740 [12];
  uint local_4734 [24];
  byte local_46d4 [120];
  short local_465c [79];
  undefined1 local_45be [1086];
  float local_4180 [1024];
  undefined1 local_3180 [12];
  int local_3174 [365];
  float local_2bc0 [1024];
  char local_1bc0 [32];
  char local_1ba0 [32];
  ulonglong local_1b80 [6];
  ulonglong local_1b50 [10];
  byte local_1b00 [128];
  ulonglong local_1a80 [18];
  ulonglong local_19f0 [34];
  byte local_18e0 [2080];
  ulonglong local_10c0 [258];
  undefined8 local_8b0;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x144f49497;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_5928;
  uVar47 = 0;
  local_57e8 = param_5;
  *param_5 = 0;
  local_5860 = 0;
  local_5830 = local_5830 & 0xffffffff00000000;
  local_58b0 = param_1;
  local_5840 = param_2;
  iVar10 = FUN_144f46390(param_3,param_1 + 0xc4,local_5828);
  if (iVar10 == -4) {
    if ((((param_4 < 8) || (*param_3 != 0x1a64754164615260)) || (param_4 < 0x80)) ||
       ((local_5830 = FUN_144f465e0(param_3,param_4,local_10c0), local_5830 == 0 ||
        (param_4 < local_5830)))) goto LAB_144f4ba88;
    param_3 = (longlong *)((longlong)param_3 + local_5830);
    *(undefined4 *)(param_1 + 0xbc) = 1;
    param_4 = param_4 - local_5830;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar10 = FUN_144f46390(param_3,param_1 + 0xc4,local_5828,param_4);
    if (iVar10 == -4) goto LAB_144f4ba88;
  }
  if ((iVar10 == -2) || (iVar10 < 0)) goto LAB_144f4ba88;
  local_5858 = local_57fc + iVar10;
  if (0x3fff < local_5858) goto LAB_144f4ba88;
  if (local_5858 < local_57f4 + (local_5804 != 0) + iVar10) goto LAB_144f4ba88;
  local_5850 = local_57f0;
  local_5854 = local_5828[0];
  if ((local_5828[0] != 0) && (0x80 < local_57f0)) goto LAB_144f4ba88;
  lVar25 = (longlong)(int)local_5820;
  local_5898 = local_5820;
  uVar23 = 0x802;
  if (local_5820 != 0) {
    uVar23 = 0x102;
  }
  if ((uVar23 < local_57f8) || (param_4 < local_5858)) goto LAB_144f4ba88;
  if (local_5828[0] != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  *(uint *)(param_1 + 4) = local_5820 & 0xff;
  *(undefined4 *)(param_1 + 0xc) = local_581c;
  lVar33 = *(longlong *)(param_1 + 0xd8 + lVar25 * 8);
  local_5798 = (byte *)((ulonglong)local_5858 + (longlong)param_3);
  local_57a0 = (byte *)((longlong)iVar10 + (longlong)param_3) + (local_5804 != 0);
  local_5894 = local_5800;
  uVar39 = (ulonglong)local_58b8 >> 0x20;
  local_58b8 = (int *)((ulonglong)local_58b8 & 0xffffffff00000000);
  local_5760 = local_57a0 + local_57f4;
  if (local_5798 < local_57a0) {
    local_5790 = 0;
    local_5788 = 0;
  }
  else {
    uVar28 = (longlong)local_5798 - (longlong)local_57a0;
    if (0x3fff < (ulonglong)((longlong)local_5798 - (longlong)local_57a0)) {
      local_58b8 = (int *)CONCAT44((int)uVar39,1);
      uVar28 = uVar47;
    }
    local_5788 = (int)uVar28 * 8;
    if (local_5788 < 0x20) {
      local_5790 = 0;
    }
    else {
      local_5790 = (ulonglong)(local_5788 - 0x20) << 0x20;
    }
  }
  if (local_57a0 < local_5798) {
    local_5770 = 0;
    local_5768 = 0;
  }
  else {
    uVar39 = (longlong)local_57a0 - (longlong)local_5798;
    if (0x3fff < (ulonglong)((longlong)local_57a0 - (longlong)local_5798)) {
      local_58b8 = (int *)CONCAT44(local_58b8._4_4_,1);
      uVar39 = uVar47;
    }
    local_5768 = (int)uVar39 * 8;
    if (local_5768 < 0x20) {
      local_5770 = 0;
    }
    else {
      local_5770 = (ulonglong)(local_5768 - 0x20) << 0x20;
    }
  }
  if (local_5798 < local_5760) {
    local_5750 = 0;
    local_5748 = 0;
  }
  else {
    uVar39 = (longlong)local_5798 - (longlong)local_5760;
    if (0x3fff < (ulonglong)((longlong)local_5798 - (longlong)local_5760)) {
      local_58b8 = (int *)CONCAT44(local_58b8._4_4_,1);
      uVar39 = uVar47;
    }
    local_5748 = (int)uVar39 * 8;
    if (local_5748 < 0x20) {
      local_5750 = 0;
    }
    else {
      local_5750 = (ulonglong)(local_5748 - 0x20) << 0x20;
    }
  }
  local_5888 = 0;
  if (local_5818 == 0) {
    if ((local_5804 != 0) && (0 < *(int *)(lVar33 + 4))) {
      uVar39 = uVar47;
      uVar28 = uVar47;
      uVar23 = 1;
      do {
        if ((uVar23 & *(byte *)((longlong)iVar10 + (longlong)param_3)) != 0) {
          uVar28 = (ulonglong)((uint)uVar28 | 7 << ((byte)uVar39 & 0x1f));
        }
        uVar36 = (int)uVar39 + 3;
        uVar39 = (ulonglong)uVar36;
        uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      } while ((int)uVar36 < *(int *)(lVar33 + 4));
      local_5888 = (uint)uVar28;
    }
  }
  else {
    local_5888 = 0xffffffff;
  }
  lVar31 = (longlong)(int)local_5814;
  local_58a0 = local_5814;
  local_58a8 = lVar33;
  local_5848 = lVar25;
  local_5780 = local_5798;
  local_5778 = local_57a0;
  local_5758 = local_5798;
  if ((local_5808 == 0) || (local_5814 != 2)) {
    puVar26 = &DAT_14c712e70;
    iVar10 = local_5814 * *(int *)(lVar33 + 4);
    pcVar45 = local_1bc0;
  }
  else {
    local_5908 = (byte *)&local_58b8;
    FUN_144f47230(&local_57a0,&DAT_14c712e70,local_1bc0,*(undefined4 *)(lVar33 + 4));
    iVar10 = *(int *)(lVar33 + 4);
    puVar26 = &DAT_14c713e70;
    pcVar45 = local_1ba0;
  }
  local_5908 = (byte *)&local_58b8;
  FUN_144f47230(&local_57a0,puVar26,pcVar45,iVar10);
  local_58c0[0] = (int)local_58b8;
  if ((int)local_58b8 != 0) goto LAB_144f4ba88;
  uVar23 = local_5814;
  if (local_5808 != 0) {
    uVar23 = 1;
  }
  lVar25 = (longlong)(int)uVar23;
  if (0 < (int)uVar23) {
    iVar10 = *(int *)(lVar33 + 4);
    puVar41 = local_4734;
    uVar39 = uVar47;
    do {
      puVar18 = puVar41;
      uVar28 = uVar47;
      uVar43 = uVar47;
      if (0 < iVar10) {
        do {
          uVar36 = (int)uVar43 + (int)local_1bc0[uVar39];
          uVar39 = uVar39 + 1;
          *puVar18 = uVar36;
          uVar23 = (int)uVar28 + 1;
          iVar10 = *(int *)(lVar33 + 4);
          puVar18 = puVar18 + 1;
          uVar28 = (ulonglong)uVar23;
          uVar43 = (ulonglong)uVar36;
        } while ((int)uVar23 < iVar10);
      }
      puVar41 = puVar41 + 0x570;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  if (((local_5808 != 0) && (local_5814 == 2)) && (0 < *(int *)(lVar33 + 4))) {
    pcVar45 = local_1ba0;
    piVar19 = local_3174;
    uVar39 = uVar47;
    do {
      cVar1 = *pcVar45;
      pcVar45 = pcVar45 + 1;
      uVar23 = (int)uVar39 + 1;
      uVar39 = (ulonglong)uVar23;
      *piVar19 = (int)cVar1 + piVar19[-0x570];
      piVar19 = piVar19 + 1;
    } while ((int)uVar23 < *(int *)(lVar33 + 4));
  }
  local_5880 = lVar31;
  if (0 < (int)local_5814) {
    pbVar44 = local_46d4;
    iVar10 = *(int *)(&DAT_14c726ef0 + (longlong)*(int *)(param_1 + 0x10) * 4);
    local_589c = iVar10 * 0xc;
    iVar46 = *(int *)(&DAT_14c70f794 + ((longlong)*(int *)(param_1 + 0x10) + local_5848 * 4) * 0x49c
                     );
    lVar25 = lVar31;
    do {
      iVar12 = local_589c;
      if (0x1000 < local_589c) {
        iVar12 = 0x1000;
      }
      if (0 < (longlong)iVar46) {
        pbVar32 = pbVar44 + -0x60;
        uVar39 = uVar47;
        do {
          iVar11 = 0;
          if (*(int *)pbVar32 != -0x11) {
            lVar33 = uVar39 + local_5848 * 0x18;
            iVar11 = ((int)*(char *)(param_1 + 0x41 + lVar33 * 2) * *(int *)pbVar32 +
                     *(char *)(param_1 + 0x40 + lVar33 * 2) * 0x20) * iVar10 >> 8;
          }
          iVar17 = 0;
          if (-1 < iVar11) {
            iVar17 = iVar11;
          }
          iVar11 = iVar12;
          if (iVar17 <= iVar12) {
            iVar11 = iVar17;
          }
          pbVar32 = pbVar32 + 4;
          pbVar44[uVar39] = (byte)((uint)iVar11 >> 8);
          uVar39 = uVar39 + 1;
        } while ((longlong)uVar39 < (longlong)iVar46);
      }
      pbVar44 = pbVar44 + 0x15c0;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    pbVar44 = local_46d4;
    iVar10 = *(int *)(local_58a8 + 4);
    local_5878 = lVar31;
    uVar23 = (uint)local_5750;
    do {
      lVar25 = local_58a8;
      iVar46 = 0;
      pbVar32 = pbVar44;
      if (0 < iVar10) {
        do {
          bVar9 = *pbVar32;
          if (uVar23 < local_5750._4_4_) {
            uVar22 = (ushort)(*(uint *)(local_5760 + (uVar23 >> 3)) >> ((byte)uVar23 & 7)) &
                     (short)(1 << (bVar9 & 0x1f)) - 1U;
            local_5750 = CONCAT44(local_5750._4_4_,uVar23 + bVar9);
            uVar23 = uVar23 + bVar9;
          }
          else {
            uVar22 = FUN_144f468f0(&local_5760,bVar9,&local_58b8);
            uVar23 = (uint)local_5750;
          }
          iVar46 = iVar46 + 1;
          *(ushort *)(local_1b00 + uVar47 * 2) = uVar22 << (0x10 - bVar9 & 0x1f);
          uVar47 = uVar47 + 1;
          iVar10 = *(int *)(lVar25 + 4);
          pbVar32 = pbVar32 + 1;
        } while (iVar46 < iVar10);
      }
      pbVar44 = pbVar44 + 0x15c0;
      local_5878 = local_5878 + -1;
    } while (local_5878 != 0);
    local_58c0[0] = (int)local_58b8;
    local_5878 = 0;
    lVar33 = local_58a8;
    if ((int)local_58b8 != 0) goto LAB_144f4ba88;
  }
  pbVar44 = local_5780;
  uVar39 = 0;
  iVar46 = 0;
  local_589c = local_580c;
  local_5890 = local_5810;
  uVar47 = uVar39;
  iVar10 = iVar46;
  if (0 < (longlong)*(int *)(lVar33 + 4)) {
    piVar19 = (int *)(lVar33 + 0x7c);
    uVar28 = uVar39;
    uVar43 = uVar39;
    uVar40 = uVar39;
    do {
      iVar10 = *piVar19;
      if ((1 < iVar10) && (uVar20 = uVar39, 0 < local_5880)) {
        do {
          if (local_4734[uVar20 * 0x570 + uVar40] != 0xffffffef) {
            if ((uVar20 == 1) && (local_580c != 0)) {
              uVar43 = (ulonglong)(uint)((int)uVar43 + iVar10);
            }
            else {
              iVar46 = iVar10;
              if (local_5810 == 0) {
                iVar46 = iVar10 + -1;
                uVar28 = (ulonglong)((int)uVar28 + 1);
              }
              uVar47 = (ulonglong)(uint)((int)uVar47 + iVar46);
            }
          }
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < local_5880);
      }
      iVar10 = (int)uVar43;
      iVar46 = (int)uVar28;
      uVar40 = uVar40 + 1;
      piVar19 = piVar19 + 1;
    } while ((longlong)uVar40 < (longlong)*(int *)(lVar33 + 4));
  }
  iVar12 = (int)local_5780;
  if (local_5898 == 0) {
    local_57e0 = local_1a80;
    puVar41 = local_57b8;
    local_57d8 = (ulonglong *)((longlong)local_1a80 + (longlong)(int)uVar47);
    plVar35 = &local_57d0;
    ppbVar42 = &local_57a0;
    lVar25 = 2;
    do {
      uVar23 = -*(uint *)(ppbVar42 + 2) & 7;
      *plVar35 = (longlong)(*ppbVar42 + (*(uint *)(ppbVar42 + 2) >> 3));
      puVar41[3] = uVar23;
      if (uVar23 == 0) {
        *puVar41 = 0;
      }
      else {
        *puVar41 = (uint)(*(byte *)*plVar35 >> (8U - (char)uVar23 & 0x1f));
        *plVar35 = *plVar35 + 1;
      }
      ppbVar42 = ppbVar42 + 8;
      puVar41 = puVar41 + 2;
      plVar35 = plVar35 + 2;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    local_57c8 = pbVar44 + (int)-((uint)local_5770 >> 3);
    local_57b8[4] = -(uint)local_5770 & 7;
    if (local_57b8[4] == 0) {
      local_57b8[1] = 0;
    }
    else {
      pbVar32 = local_57c8 + -1;
      local_57c8 = local_57c8 + -1;
      local_57b8[1] = (uint)(*pbVar32 >> (8U - (char)local_57b8[4] & 0x1f));
    }
    iVar11 = FUN_144f46d60(&local_57e0,&DAT_14c714e70);
    if (iVar11 == 0) {
      local_58c0[0] = 1;
    }
    local_5790 = CONCAT44(local_5790._4_4_,((int)local_57d0 - (int)local_57a0) * 8 - local_57b8[3]);
    uVar23 = (iVar12 - (int)local_57c8) * 8 - local_57b8[4];
    local_58b8 = (int *)CONCAT44(local_58b8._4_4_,local_58c0[0]);
    local_5750 = CONCAT44(local_5750._4_4_,(local_57c0 - (int)local_5760) * 8 - local_57b8[5]);
    local_5770 = CONCAT44(local_5770._4_4_,uVar23);
    iVar11 = (int)local_57a0;
    if (local_5890 == 0) {
      local_57e0 = local_1b80;
      lVar25 = 2;
      plVar35 = &local_57d0;
      local_57d8 = (ulonglong *)((longlong)local_1b80 + (longlong)iVar46);
      puVar41 = local_57b8;
      ppbVar42 = &local_57a0;
      do {
        uVar36 = -*(uint *)(ppbVar42 + 2) & 7;
        *plVar35 = (longlong)(*ppbVar42 + (*(uint *)(ppbVar42 + 2) >> 3));
        puVar41[3] = uVar36;
        if (uVar36 == 0) {
          *puVar41 = 0;
        }
        else {
          *puVar41 = (uint)(*(byte *)*plVar35 >> (8U - (char)uVar36 & 0x1f));
          *plVar35 = *plVar35 + 1;
        }
        ppbVar42 = ppbVar42 + 8;
        puVar41 = puVar41 + 2;
        plVar35 = plVar35 + 2;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      local_57c8 = pbVar44 + (int)-(uVar23 >> 3);
      local_57b8[4] = -uVar23 & 7;
      if (local_57b8[4] == 0) {
        local_57b8[1] = 0;
      }
      else {
        pbVar32 = local_57c8 + -1;
        local_57c8 = local_57c8 + -1;
        local_57b8[1] = (uint)(*pbVar32 >> (8U - (char)local_57b8[4] & 0x1f));
      }
      iVar46 = FUN_144f46d60(&local_57e0,&DAT_14c716e70);
      if (iVar46 == 0) {
        local_58c0[0] = 1;
      }
      local_5790 = CONCAT44(local_5790._4_4_,((int)local_57d0 - (int)local_57a0) * 8 - local_57b8[3]
                           );
      uVar23 = (iVar12 - (int)local_57c8) * 8 - local_57b8[4];
      local_5770 = CONCAT44(local_5770._4_4_,uVar23);
      local_58b8 = (int *)CONCAT44(local_58b8._4_4_,local_58c0[0]);
      local_5750 = CONCAT44(local_5750._4_4_,(local_57c0 - (int)local_5760) * 8 - local_57b8[5]);
      iVar11 = (int)local_57a0;
    }
    if (local_589c != 0) {
      local_57e0 = local_1b50;
      lVar25 = 2;
      plVar35 = &local_57d0;
      local_57d8 = (ulonglong *)((longlong)local_1b50 + (longlong)iVar10);
      puVar41 = local_57b8;
      ppbVar42 = &local_57a0;
      do {
        uVar36 = -*(uint *)(ppbVar42 + 2) & 7;
        *plVar35 = (longlong)(*ppbVar42 + (*(uint *)(ppbVar42 + 2) >> 3));
        puVar41[3] = uVar36;
        if (uVar36 == 0) {
          *puVar41 = 0;
        }
        else {
          *puVar41 = (uint)(*(byte *)*plVar35 >> (8U - (char)uVar36 & 0x1f));
          *plVar35 = *plVar35 + 1;
        }
        ppbVar42 = ppbVar42 + 8;
        puVar41 = puVar41 + 2;
        plVar35 = plVar35 + 2;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      local_57c8 = pbVar44 + (int)-(uVar23 >> 3);
      local_57b8[4] = -uVar23 & 7;
      if (local_57b8[4] == 0) {
        local_57b8[1] = 0;
      }
      else {
        pbVar32 = local_57c8 + -1;
        local_57c8 = local_57c8 + -1;
        local_57b8[1] = (uint)(*pbVar32 >> (8U - (char)local_57b8[4] & 0x1f));
      }
      iVar10 = FUN_144f46d60(&local_57e0,&DAT_14c715e70);
      if (iVar10 == 0) {
        local_58c0[0] = 1;
      }
      local_5790 = CONCAT44(local_5790._4_4_,((int)local_57d0 - iVar11) * 8 - local_57b8[3]);
      uVar23 = (iVar12 - (int)local_57c8) * 8 - local_57b8[4];
      local_5770 = CONCAT44(local_5770._4_4_,uVar23);
      local_58b8 = (int *)CONCAT44(local_58b8._4_4_,local_58c0[0]);
      local_5750 = CONCAT44(local_5750._4_4_,(local_57c0 - (int)local_5760) * 8 - local_57b8[5]);
    }
    if (local_58c0[0] != 0) goto LAB_144f4ba88;
  }
  else {
    uVar23 = (uint)local_5770;
  }
  uVar36 = local_58a0;
  uVar47 = (ulonglong)uVar23;
  if (0x802 < (int)local_57f8) goto LAB_144f4ba88;
  if ((local_5898 == 0) && (local_5894 != 3)) {
    iVar10 = 0;
    lVar33 = (longlong)local_5894 * 0x43;
    lVar25 = 0;
    lVar31 = local_58b0 + lVar33;
    do {
      bVar9 = *(byte *)(lVar25 + 0x101 + lVar31);
      if (bVar9 != 0) {
        local_5908 = (byte *)&local_58b8;
        iVar46 = uVar36 * bVar9 * 8;
        FUN_144f47230(&local_57a0,(&PTR_DAT_14c726e70)[lVar25],
                      (longlong)local_10c0 + (longlong)iVar10,iVar46);
        iVar10 = iVar10 + iVar46;
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < 6);
    if (0 < (int)local_58a0) {
      bVar9 = *(byte *)(lVar33 + 0xe8 + local_58b0);
      lVar31 = 0;
      uVar47 = (ulonglong)local_58a0;
      lVar25 = (longlong)(int)(local_58a0 - 1) * 0xc + 0x12;
      do {
        iVar10 = 0;
        if (bVar9 != 0) {
          pbVar44 = (byte *)(local_58b0 + 0xf5 + lVar33);
          do {
            pbVar32 = pbVar44 + lVar25;
            iVar10 = iVar10 + 1;
            bVar9 = *pbVar44;
            pbVar44 = pbVar44 + 1;
            local_19f0[lVar31] = -(ulonglong)bVar9 ^ local_10c0[*pbVar32];
            lVar31 = lVar31 + 1;
            bVar9 = *(byte *)(lVar33 + 0xe8 + local_58b0);
          } while (iVar10 < (int)(uint)bVar9);
        }
        lVar25 = lVar25 + 0xc;
        uVar47 = uVar47 - 1;
      } while (uVar47 != 0);
    }
    local_58c0[0] = (int)local_58b8;
    if ((int)local_58b8 != 0) goto LAB_144f4ba88;
    uVar47 = local_5770 & 0xffffffff;
    iVar12 = (int)local_5780;
    pbVar44 = local_5780;
  }
  lVar25 = (longlong)(int)local_57f8;
  puVar27 = (ulonglong *)((longlong)&local_8b0 + lVar25);
  local_57e0 = &local_8b0;
  plVar35 = &local_57d0;
  uVar39 = 0;
  uVar23 = 0;
  puVar41 = local_57b8;
  lVar33 = 2;
  ppbVar42 = &local_57a0;
  do {
    uVar24 = -*(uint *)(ppbVar42 + 2) & 7;
    *plVar35 = (longlong)(*ppbVar42 + (*(uint *)(ppbVar42 + 2) >> 3));
    puVar41[3] = uVar24;
    uVar36 = 0;
    if (uVar24 == 0) {
      *puVar41 = 0;
    }
    else {
      *puVar41 = (uint)(*(byte *)*plVar35 >> (8U - (char)uVar24 & 0x1f));
      *plVar35 = *plVar35 + 1;
    }
    ppbVar42 = ppbVar42 + 8;
    puVar41 = puVar41 + 2;
    plVar35 = plVar35 + 2;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  local_57c8 = pbVar44 + -(int)(uVar47 >> 3);
  local_57b8[4] = -(int)uVar47 & 7;
  if (local_57b8[4] == 0) {
    local_57b8[1] = 0;
  }
  else {
    pbVar44 = local_57c8 + -1;
    local_57c8 = local_57c8 + -1;
    local_57b8[1] = (uint)(*pbVar44 >> (8U - (char)local_57b8[4] & 0x1f));
  }
  local_57d8 = puVar27;
  iVar46 = FUN_144f46d60(&local_57e0,&DAT_14c717e70);
  lVar33 = local_58b0;
  *(char *)puVar27 = -1;
  iVar10 = local_58c0[0];
  if (iVar46 == 0) {
    iVar10 = 1;
  }
  *(undefined1 *)((longlong)&local_8b0 + lVar25 + 1) = 0xff;
  local_5790 = CONCAT44(local_5790._4_4_,((int)local_57d0 - (int)local_57a0) * 8 - local_57b8[3]);
  local_5750 = CONCAT44(local_5750._4_4_,(local_57c0 - (int)local_5760) * 8 - local_57b8[5]);
  local_58b8 = (int *)CONCAT44(local_58b8._4_4_,iVar10);
  local_5770 = CONCAT44(local_5770._4_4_,(iVar12 - (int)local_57c8) * 8 - local_57b8[4]);
  local_5838 = local_57f8 + 1;
  if (iVar10 != 0) goto LAB_144f4ba88;
  if (*(char *)(local_58b0 + 0xd0) == '\0') {
    uVar47 = uVar39;
    uVar24 = uVar23;
    if (1 < lVar25) {
      uVar28 = uVar39;
      uVar43 = uVar39;
      do {
        uVar36 = (int)uVar28 + (uint)(*(byte *)((longlong)&local_8b0 + uVar47) < 0xf0);
        uVar28 = (ulonglong)uVar36;
        uVar24 = (int)uVar43 + (uint)(*(byte *)((longlong)&local_8b0 + uVar47 + 1) < 0xf0);
        uVar43 = (ulonglong)uVar24;
        uVar47 = uVar47 + 2;
      } while ((longlong)uVar47 < lVar25 + -1);
    }
    uVar38 = uVar23;
    if ((longlong)uVar47 < lVar25) {
      uVar38 = (uint)(*(byte *)((longlong)&local_8b0 + uVar47) < 0xf0);
    }
    iVar10 = uVar38 + uVar24 + uVar36;
  }
  else {
    iVar10 = FUN_1452f8df0(&local_8b0,local_57f8,0xf0);
  }
  uVar36 = local_5898;
  if ((local_5898 == 0) &&
     (uVar24 = (uint)*(byte *)((longlong)local_5894 * 0x43 + 0xe8 + lVar33), uVar24 != 0)) {
    iVar46 = uVar24 * 8 * local_58a0;
    if (*(char *)(lVar33 + 0xd2) == '\0') {
      uVar47 = uVar39;
      uVar28 = uVar39;
      if (0 < iVar46) {
        do {
          uVar43 = uVar28 + 8;
          uVar28 = *(ulonglong *)((longlong)local_19f0 + uVar28) -
                   (*(ulonglong *)((longlong)local_19f0 + uVar28) >> 1 & 0x5555555555555555);
          uVar23 = (int)uVar47 +
                   (uint)(byte)(((uVar28 >> 6 & 0x303030303030303) +
                                 (uVar28 >> 4 & 0x303030303030303) +
                                 (uVar28 >> 2 & 0x303030303030303) + (uVar28 & 0x303030303030303)) *
                                0x101010101010101 >> 0x38);
          uVar47 = (ulonglong)uVar23;
          uVar28 = uVar43;
        } while ((longlong)uVar43 < (longlong)iVar46);
      }
    }
    else {
      uVar23 = FUN_1452fa500(local_19f0,iVar46);
    }
    iVar10 = iVar10 + uVar23;
  }
  if ((int)(local_58a0 << 10) < iVar10) goto LAB_144f4ba88;
  iVar46 = local_5894;
  if (uVar36 != 0) {
    iVar46 = 4;
  }
  iVar12 = (iVar10 + 1) / 2;
  local_5908 = (byte *)&local_58b8;
  FUN_144f47230(&local_57a0,(&PTR_DAT_14c726ea0)[*(byte *)((longlong)iVar46 + 500 + lVar33)],
                local_10c0,iVar12);
  if (*(char *)(lVar33 + 0xd0) == '\0') {
    if (0 < iVar12) {
      do {
        bVar9 = *(byte *)((longlong)local_10c0 + uVar39);
        local_18e0[uVar39 * 2 + 1] = bVar9 >> 4;
        local_18e0[uVar39 * 2] = bVar9 & 0xf;
        uVar39 = uVar39 + 1;
      } while ((longlong)uVar39 < (longlong)iVar12);
    }
    pbVar44 = local_18e0 + iVar12 * 2;
    pbVar44[0] = 1;
    pbVar44[1] = 1;
    pbVar44[2] = 1;
    pbVar44[3] = 1;
    pbVar44[4] = 1;
    pbVar44[5] = 1;
    pbVar44[6] = 1;
    pbVar44[7] = 1;
    pbVar44 = local_18e0 + (iVar12 * 2 + 8);
    pbVar44[0] = 1;
    pbVar44[1] = 1;
    pbVar44[2] = 1;
    pbVar44[3] = 1;
    pbVar44[4] = 1;
    pbVar44[5] = 1;
    pbVar44[6] = 1;
    pbVar44[7] = 1;
  }
  else {
    FUN_1452f8ec0(local_18e0,local_10c0,iVar12,0x1111111111111111);
  }
  puVar13 = &local_8b0;
  if (&local_8b0 < puVar27) {
    uVar23 = (uint)local_5750;
    do {
      if (*(char *)(lVar33 + 0xd0) == '\0') {
        do {
          if (puVar27 <= puVar13) goto LAB_144f4a5b1;
          uVar47 = *puVar13;
          puVar13 = puVar13 + 1;
          uVar47 = ~((uVar47 & 0x7f7f7f7f7f7f7f7f) + 0x1010101010101010 & uVar47) &
                   ((uVar47 & 0x7f7f7f7f7f7f7f7f) + 0x4444444444444444 | uVar47) &
                   0x8080808080808080;
        } while (uVar47 == 0);
        uVar39 = 0;
        if (uVar47 != 0) {
          for (; (uVar47 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
          }
        }
        puVar13 = (ulonglong *)((longlong)puVar13 + ((uVar39 >> 3) - 8));
      }
      else {
        puVar13 = (ulonglong *)FUN_1452f8fc0(puVar13,puVar27);
      }
      if (puVar27 <= puVar13) break;
      if (uVar23 < local_5750._4_4_) {
        bVar9 = (byte)(*(uint *)(local_5760 + (uVar23 >> 3)) >> ((byte)uVar23 & 7)) & 3;
        local_5750 = CONCAT44(local_5750._4_4_,uVar23 + 2);
        uVar23 = uVar23 + 2;
      }
      else {
        bVar9 = FUN_144f468f0(&local_5760,2,&local_58b8);
        uVar23 = (uint)local_5750;
      }
      *(byte *)puVar13 = (char)*puVar13 + bVar9;
      puVar13 = (ulonglong *)((longlong)puVar13 + 1);
    } while (puVar13 < puVar27);
  }
LAB_144f4a5b1:
  lVar25 = (longlong)iVar10;
  if (*(char *)(lVar33 + 0xd0) == '\0') {
    uVar47 = 0;
    uVar36 = 0;
    uVar24 = 0;
    uVar23 = uVar36;
    if (1 < lVar25) {
      uVar39 = uVar47;
      uVar28 = uVar47;
      do {
        uVar23 = (int)uVar39 + (uint)(local_18e0[uVar47] == 0);
        uVar39 = (ulonglong)uVar23;
        uVar36 = (int)uVar28 + (uint)(local_18e0[uVar47 + 1] == 0);
        uVar28 = (ulonglong)uVar36;
        uVar47 = uVar47 + 2;
      } while ((longlong)uVar47 < lVar25 + -1);
    }
    if ((longlong)uVar47 < lVar25) {
      uVar24 = (uint)(local_18e0[uVar47] == 0);
    }
    iVar12 = uVar36 + uVar23 + uVar24;
  }
  else {
    iVar12 = FUN_1452f8df0(local_18e0,iVar10,1);
  }
  uVar47 = 0;
  local_5908 = (byte *)&local_58b8;
  FUN_144f47230(&local_57a0,(&PTR_DAT_14c726ec0)[*(byte *)((longlong)iVar46 + 0x1f9 + lVar33)],
                local_10c0,iVar12);
  puVar13 = (ulonglong *)((longlong)local_10c0 + lVar25);
  puVar27 = local_10c0;
  if (((longlong)&local_8b0 - (longlong)puVar13 < 0x10) || (*(char *)(lVar33 + 0xd0) == '\0')) {
    uVar39 = uVar47;
    if (0 < iVar10) {
      do {
        if (local_18e0[uVar39] == 0) {
          if (puVar27 == puVar13) goto LAB_144f4ba88;
          bVar9 = (byte)*puVar27;
          puVar27 = (ulonglong *)((longlong)puVar27 + 1);
        }
        else {
          bVar9 = local_18e0[uVar39] - 8;
        }
        local_18e0[uVar39] = bVar9;
        uVar39 = uVar39 + 1;
      } while ((longlong)uVar39 < lVar25);
    }
  }
  else {
    iVar10 = FUN_1452f8f30(local_18e0,iVar10,local_10c0,puVar13);
    if (iVar10 == 0) goto LAB_144f4ba88;
  }
  lVar25 = local_58a8;
  if ((int)local_58b8 != 0) goto LAB_144f4ba88;
  local_588c = 0;
  local_5878 = 0;
  if (0 < (int)local_58a0) {
    psVar29 = local_465c;
    uVar39 = (ulonglong)local_58a0;
    do {
      memset(psVar29,0,(longlong)(*(int *)(lVar25 + 0x10) * 2));
      psVar29 = psVar29 + 0xae0;
      uVar39 = uVar39 - 1;
      lVar33 = local_58b0;
    } while (uVar39 != 0);
  }
  uVar39 = uVar47;
  if ((local_5898 == 0) && (uVar39 = 0, 0 < (int)local_58a0)) {
    local_5868 = 0;
    uVar28 = uVar47;
    uVar43 = uVar47;
    uVar40 = uVar47;
    do {
      local_58c0[0] = 0;
      if (0 < *(int *)(local_58a8 + 4)) {
        local_58b8 = (int *)(local_58a8 + 0xdc);
        pcVar45 = (char *)(lVar33 + 0xa0);
        local_5870 = -0xa0 - local_58b0;
        do {
          iVar10 = local_58b8[-0x18];
          lVar25 = (longlong)iVar10;
          if (iVar10 != 1) {
            iVar46 = *local_58b8;
            if (local_4734[(longlong)(pcVar45 + uVar40 * 0x570 + local_5870)] == 0xffffffef) {
              if (0 < iVar10) {
                bVar9 = pcVar45[-0x78];
                psVar29 = local_465c + uVar40 * 0xae0 + (longlong)iVar46;
                for (; lVar25 != 0; lVar25 = lVar25 + -1) {
                  *psVar29 = (short)((longlong)(ulonglong)bVar9 / (longlong)iVar10);
                  psVar29 = psVar29 + 1;
                }
              }
            }
            else if ((local_589c == 0) || (uVar40 != 1)) {
              iVar12 = 0;
              bVar9 = pcVar45[-0x78];
              cVar1 = *pcVar45;
              if (local_5890 == 0) {
                iVar10 = iVar10 + -1;
              }
              lVar25 = (longlong)iVar10;
              if (0 < iVar10) {
                psVar29 = local_465c + uVar40 * 0xae0 + (longlong)iVar46;
                iVar12 = 0;
                do {
                  pbVar44 = (byte *)((longlong)local_1a80 + uVar28);
                  uVar28 = uVar28 + 1;
                  uVar23 = (uint)*pbVar44 - (int)cVar1 & 0x3f;
                  iVar12 = iVar12 + uVar23;
                  *psVar29 = (short)uVar23;
                  lVar25 = lVar25 + -1;
                  psVar29 = psVar29 + 1;
                } while (lVar25 != 0);
                bVar9 = pcVar45[-0x78];
              }
              if (local_5890 == 0) {
                pcVar14 = (char *)((longlong)local_1b80 + local_5868);
                local_5868 = local_5868 + 1;
                iVar12 = ((int)*pcVar14 + (uint)bVar9) - iVar12;
                if (iVar12 < 0) goto LAB_144f4ba88;
                local_465c[(longlong)(iVar10 + iVar46) + uVar40 * 0xae0] = (short)iVar12;
              }
            }
            else if (0 < iVar10) {
              psVar29 = local_465c + iVar46;
              do {
                pcVar14 = (char *)((longlong)local_1b50 + uVar43);
                uVar43 = uVar43 + 1;
                psVar29[0xae0] = (short)*pcVar14 + *psVar29;
                lVar25 = lVar25 + -1;
                psVar29 = psVar29 + 1;
              } while (lVar25 != 0);
            }
          }
          local_58c0[0] = local_58c0[0] + 1;
          local_58b8 = local_58b8 + 1;
          pcVar45 = pcVar45 + 1;
          lVar33 = local_58b0;
        } while (local_58c0[0] < *(int *)(local_58a8 + 4));
      }
      uVar40 = uVar40 + 1;
      uVar39 = local_5878;
    } while ((longlong)uVar40 < local_5880);
  }
  uVar23 = (uint)uVar39;
  local_589c = 0;
  if (0 < local_5880) {
    local_5870 = (longlong)local_5894 * 0x43;
    local_5868 = 0;
    puVar34 = local_45be;
    do {
      iVar10 = local_589c;
      uVar23 = (uint)uVar47;
      bVar9 = *(byte *)(local_5870 + 0xe8 + lVar33);
      _Size = 0;
      if (local_5898 == 0) {
        _Size = (ulonglong)bVar9 << 6;
      }
      puVar27 = (ulonglong *)((longlong)local_19f0 + (longlong)(int)((uint)bVar9 * 8 * local_589c));
      iVar46 = *(int *)(local_58a8 + 8);
      iVar12 = (int)_Size;
      sVar30 = 0;
      if (iVar12 != 0) {
        sVar30 = _Size;
        if (*(char *)(local_58b0 + 0xd1) == '\0') {
          memset(puVar34,0,_Size);
          lVar25 = 0;
          if (iVar12 != 0) {
            lVar33 = (longlong)(int)uVar23;
            uVar39 = (ulonglong)((iVar12 - 1U >> 6) + 1);
            do {
              for (uVar28 = *puVar27; uVar23 = (uint)uVar47, uVar28 != 0;
                  uVar28 = uVar28 & uVar28 - 1) {
                pbVar44 = local_18e0 + lVar33;
                uVar47 = (ulonglong)(uVar23 + 1);
                lVar31 = 0;
                if (uVar28 != 0) {
                  for (; (uVar28 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                  }
                }
                lVar33 = lVar33 + 1;
                puVar34[lVar25 + lVar31] = *pbVar44;
              }
              lVar25 = lVar25 + 0x40;
              uVar39 = uVar39 - 1;
              puVar27 = puVar27 + 1;
              iVar10 = local_589c;
            } while (uVar39 != 0);
          }
        }
        else {
          local_5900 = &local_588c;
          local_5908 = local_18e0;
          FUN_1452fa480(*(undefined8 *)(local_58b0 + 0xd0),puVar34,_Size,puVar27);
          uVar23 = local_588c;
        }
      }
      iVar12 = (int)local_5878;
      pbVar44 = local_18e0 + (int)uVar23;
      memset(puVar34 + sVar30,0,(longlong)iVar46 - sVar30);
      bVar9 = *(byte *)((longlong)&local_8b0 + (longlong)iVar12);
      pbVar32 = (byte *)((longlong)&local_8b0 + (longlong)iVar12 + 1);
      while (bVar9 != 0xff) {
        sVar30 = sVar30 + bVar9;
        if (bVar9 < 0xf0) {
          if ((longlong)iVar46 <= (longlong)sVar30) goto LAB_144f4ba88;
          bVar9 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          puVar34[sVar30] = bVar9;
          sVar30 = sVar30 + 1;
        }
        bVar9 = *pbVar32;
        pbVar32 = pbVar32 + 1;
      }
      uVar23 = (int)pbVar32 - ((int)local_58c0 + 0x5010);
      local_5878 = (ulonglong)uVar23;
      local_588c = (int)pbVar44 - ((int)local_58c0 + 0x3fe0);
      uVar47 = (ulonglong)local_588c;
      local_589c = iVar10 + 1;
      local_5868 = local_5868 + 1;
      puVar34 = puVar34 + 0x15c0;
      lVar33 = local_58b0;
    } while (local_5868 < local_5880);
  }
  lVar33 = local_58a8;
  lVar25 = local_58b0;
  iVar10 = 0;
  if (local_5838 < (int)uVar23) goto LAB_144f4ba88;
  puVar34 = local_5740 + ((longlong)*(int *)(local_58a8 + 0xc) >> 1) * 4;
  if (*(int *)(local_58b0 + 0x14) == 1) {
    local_5908 = local_1b00;
    FUN_144f49230(local_58b0,local_4740,0,*(undefined4 *)(local_58b0 + 0x20));
    FUN_1452fb740(*(undefined8 *)(lVar25 + 0xd0),local_5740,local_4180,
                  (longlong)
                  *(int *)(*(longlong *)(lVar25 + 0xd8 + (longlong)*(int *)(lVar25 + 4) * 8) + 0xc))
    ;
    lVar31 = local_58b0;
    iVar10 = *(int *)(lVar25 + 4);
    plVar35 = (longlong *)(local_58b0 + 0x208);
    lVar25 = *(longlong *)(lVar25 + 0xd8 + (longlong)iVar10 * 8);
    pfVar16 = (float *)(local_58b0 + 0x218);
    lVar33 = *local_5840;
    if (*(int *)(local_58b0 + 0xbc) == 0) {
      if (iVar10 == *(int *)(local_58b0 + 8)) {
        local_58f0 = *pfVar16;
        uVar49 = 0x400;
        if (iVar10 != 0) {
          uVar49 = 0x80;
        }
        local_58d0 = *(int *)(local_58b0 + 0x24);
        local_58e0 = *(undefined4 *)(local_58b0 + 0x20);
        local_58d8 = 0;
        local_58e8 = (&PTR_DAT_14c726ee0)[iVar10];
        local_5908 = (byte *)*plVar35;
        local_58f8 = 0;
        local_5900 = (uint *)CONCAT44(local_5900._4_4_,uVar49);
        FUN_144f47380(local_58b0,lVar33,uVar49,local_5740);
        local_5860 = CONCAT44(local_5860._4_4_,uVar49);
      }
      else {
        if (iVar10 == 0) {
          local_58d0 = *(int *)(local_58b0 + 0x24);
          local_58f0 = *pfVar16;
          local_58e0 = *(undefined4 *)(local_58b0 + 0x20);
          local_58d8 = 0;
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = (byte *)*plVar35;
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x80);
          FUN_144f47380(local_58b0,lVar33,0x80,local_5740);
          memcpy((void *)(lVar33 + 0x200),local_5640,0x700);
        }
        else {
          fVar48 = *pfVar16;
          lVar37 = 0x38;
          pfVar21 = (float *)(lVar33 + 8);
          psVar29 = (short *)(*plVar35 + 4);
          do {
            pfVar21[-2] = (float)(int)psVar29[-2] * fVar48;
            pfVar21[-1] = (float)(int)psVar29[-1] * fVar48;
            *pfVar21 = (float)(int)*psVar29 * fVar48;
            pfVar21[1] = (float)(int)psVar29[1] * fVar48;
            pfVar21[2] = (float)(int)psVar29[2] * fVar48;
            pfVar21[3] = (float)(int)psVar29[3] * fVar48;
            pfVar21[4] = (float)(int)psVar29[4] * fVar48;
            pfVar21[5] = (float)(int)psVar29[5] * fVar48;
            lVar37 = lVar37 + -1;
            pfVar21 = pfVar21 + 8;
            psVar29 = psVar29 + 8;
          } while (lVar37 != 0);
          local_58f0 = *pfVar16;
          local_58d0 = *(int *)(local_58b0 + 0x24) + 0x1c0;
          local_58e0 = *(undefined4 *)(local_58b0 + 0x20);
          local_58d8 = 0;
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = (byte *)*plVar35;
          local_58f8 = 0x1c0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x400);
          FUN_144f47380(local_58b0,lVar33 + 0x700,0x80,local_5740);
        }
        local_5860 = CONCAT44(local_5860._4_4_,0x240);
      }
    }
    fVar48 = (float)FUN_144f48f80(lVar31,*plVar35,puVar34,*(undefined4 *)(lVar25 + 0xc));
  }
  else {
    if ((*(int *)(local_58b0 + 0x14) == 2) && (local_58a0 == 1)) {
      local_5908 = local_1b00;
      FUN_144f49230(local_58b0,local_4740,0,*(undefined4 *)(local_58b0 + 0x20));
      FUN_1452fb740(*(undefined8 *)(lVar25 + 0xd0),local_5740,local_4180,
                    (longlong)
                    *(int *)(*(longlong *)(lVar25 + 0xd8 + (longlong)*(int *)(lVar25 + 4) * 8) + 0xc
                            ));
      plVar35 = local_5840;
      lVar37 = 0x38;
      iVar10 = *(int *)(lVar25 + 4);
      lVar33 = *(longlong *)(lVar25 + 0xd8 + (longlong)iVar10 * 8);
      lVar31 = *local_5840;
      if (*(int *)(lVar25 + 0xbc) == 0) {
        if (iVar10 == *(int *)(lVar25 + 8)) {
          local_58f0 = *(float *)(lVar25 + 0x218);
          uVar49 = 0x400;
          if (iVar10 != 0) {
            uVar49 = 0x80;
          }
          local_58d0 = *(int *)(lVar25 + 0x24);
          local_58e0 = *(undefined4 *)(lVar25 + 0x20);
          local_58d8 = 0;
          local_58e8 = (&PTR_DAT_14c726ee0)[iVar10];
          local_5908 = *(byte **)(lVar25 + 0x208);
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,uVar49);
          FUN_144f47380(lVar25,lVar31,uVar49,local_5740);
        }
        else if (iVar10 == 0) {
          local_58d0 = *(int *)(lVar25 + 0x24);
          local_58f0 = *(float *)(lVar25 + 0x218);
          local_58e0 = *(undefined4 *)(lVar25 + 0x20);
          local_58d8 = 0;
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = *(byte **)(lVar25 + 0x208);
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x80);
          FUN_144f47380(lVar25,lVar31,0x80,local_5740);
          memcpy((void *)(lVar31 + 0x200),local_5640,0x700);
        }
        else {
          fVar48 = *(float *)(lVar25 + 0x218);
          lVar15 = 0x38;
          pfVar16 = (float *)(lVar31 + 8);
          psVar29 = (short *)(*(longlong *)(lVar25 + 0x208) + 4);
          do {
            pfVar16[-2] = (float)(int)psVar29[-2] * fVar48;
            pfVar16[-1] = (float)(int)psVar29[-1] * fVar48;
            *pfVar16 = (float)(int)*psVar29 * fVar48;
            pfVar16[1] = (float)(int)psVar29[1] * fVar48;
            pfVar16[2] = (float)(int)psVar29[2] * fVar48;
            pfVar16[3] = (float)(int)psVar29[3] * fVar48;
            pfVar16[4] = (float)(int)psVar29[4] * fVar48;
            pfVar16[5] = (float)(int)psVar29[5] * fVar48;
            lVar15 = lVar15 + -1;
            pfVar16 = pfVar16 + 8;
            psVar29 = psVar29 + 8;
          } while (lVar15 != 0);
          local_58f0 = *(float *)(lVar25 + 0x218);
          local_58d0 = *(int *)(lVar25 + 0x24) + 0x1c0;
          local_58e0 = *(undefined4 *)(lVar25 + 0x20);
          local_58d8 = 0;
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = *(byte **)(lVar25 + 0x208);
          local_58f8 = 0x1c0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x400);
          FUN_144f47380(lVar25,lVar31 + 0x700,0x80,local_5740);
        }
      }
      uVar49 = FUN_144f48f80(lVar25,*(undefined8 *)(lVar25 + 0x208),puVar34,
                             *(undefined4 *)(lVar33 + 0xc));
      *(undefined4 *)(lVar25 + 0x218) = uVar49;
      iVar10 = *(int *)(lVar25 + 4);
      lVar15 = (longlong)iVar10;
      lVar33 = plVar35[1];
      plVar35 = (longlong *)(local_58b0 + 0x210);
      pfVar16 = (float *)(local_58b0 + 0x21c);
      lVar25 = *(longlong *)(lVar25 + 0xd8 + lVar15 * 8);
      lVar31 = local_58b0;
      if (*(int *)(local_58b0 + 0xbc) == 0) {
        if (iVar10 == *(int *)(local_58b0 + 8)) {
LAB_144f4b86d:
          lVar31 = local_58b0;
          local_58f0 = *pfVar16;
          uVar49 = 0x400;
          if ((int)lVar15 != 0) {
            uVar49 = 0x80;
          }
          local_58d0 = *(int *)(local_58b0 + 0x24);
          local_58d8 = 1;
          local_58e0 = *(undefined4 *)(local_58b0 + 0x20);
          local_58e8 = (&PTR_DAT_14c726ee0)[lVar15];
          local_5908 = (byte *)*plVar35;
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,uVar49);
          FUN_144f47380(local_58b0,lVar33,uVar49,local_5740);
        }
        else {
          if (iVar10 != 0) {
            fVar48 = *pfVar16;
            pfVar21 = (float *)(lVar33 + 8);
            psVar29 = (short *)(*plVar35 + 4);
            do {
              pfVar21[-2] = (float)(int)psVar29[-2] * fVar48;
              pfVar21[-1] = (float)(int)psVar29[-1] * fVar48;
              *pfVar21 = (float)(int)*psVar29 * fVar48;
              pfVar21[1] = (float)(int)psVar29[1] * fVar48;
              pfVar21[2] = (float)(int)psVar29[2] * fVar48;
              pfVar21[3] = (float)(int)psVar29[3] * fVar48;
              pfVar21[4] = (float)(int)psVar29[4] * fVar48;
              pfVar21[5] = (float)(int)psVar29[5] * fVar48;
              lVar37 = lVar37 + -1;
              pfVar21 = pfVar21 + 8;
              psVar29 = psVar29 + 8;
            } while (lVar37 != 0);
            goto LAB_144f4b222;
          }
LAB_144f4b9b7:
          lVar31 = local_58b0;
          local_58d0 = *(int *)(local_58b0 + 0x24);
          local_58f0 = *pfVar16;
          local_58d8 = 1;
          local_58e0 = *(undefined4 *)(local_58b0 + 0x20);
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = (byte *)*plVar35;
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x80);
          FUN_144f47380(local_58b0,lVar33,0x80,local_5740);
          memcpy((void *)(lVar33 + 0x200),local_5640,0x700);
        }
      }
    }
    else {
      local_5908 = local_1b00;
      FUN_144f49230(local_58b0,local_4740,0,*(undefined4 *)(local_58b0 + 0x20));
      uVar23 = 1;
      local_5908 = local_1b00 +
                   (longlong)*(int *)(*(longlong *)(lVar25 + 0xd8 + local_5848 * 8) + 4) * 2;
      FUN_144f49230(lVar25,local_3180,1,*(uint *)(lVar25 + 0x20) ^ 0x55555555);
      if (0 < *(int *)(lVar33 + 4)) {
        puVar41 = (uint *)(lVar33 + 0x1c);
        do {
          if ((local_5888 & uVar23) != 0) {
            uVar36 = puVar41[0x48];
            uVar47 = (ulonglong)(int)uVar36;
            uVar24 = *puVar41;
            iVar46 = uVar36 + uVar24;
            if (((int)uVar36 < iVar46) && (7 < uVar24)) {
              lVar33 = local_58a8;
              if ((local_4180 + (iVar46 + -1) < local_2bc0 + uVar47) ||
                 (local_2bc0 + (iVar46 + -1) < local_4180 + uVar47)) {
                uVar24 = uVar24 & 0x80000007;
                if ((int)uVar24 < 0) {
                  uVar24 = (uVar24 - 1 | 0xfffffff8) + 1;
                }
                uVar39 = uVar47;
                do {
                  fVar48 = local_4180[uVar47];
                  fVar2 = local_4180[uVar47 + 1];
                  fVar3 = local_4180[uVar47 + 2];
                  fVar4 = local_4180[uVar47 + 3];
                  uVar36 = (int)uVar39 + 8;
                  uVar39 = (ulonglong)uVar36;
                  fVar5 = local_2bc0[uVar47];
                  fVar6 = local_2bc0[uVar47 + 1];
                  fVar7 = local_2bc0[uVar47 + 2];
                  fVar8 = local_2bc0[uVar47 + 3];
                  local_4180[uVar47] = fVar5 * 0.5 + fVar48;
                  local_4180[uVar47 + 1] = fVar6 * 0.5 + fVar2;
                  local_4180[uVar47 + 2] = fVar7 * 0.5 + fVar3;
                  local_4180[uVar47 + 3] = fVar8 * 0.5 + fVar4;
                  local_2bc0[uVar47] = fVar48 - fVar5 * 0.5;
                  local_2bc0[uVar47 + 1] = fVar2 - fVar6 * 0.5;
                  local_2bc0[uVar47 + 2] = fVar3 - fVar7 * 0.5;
                  local_2bc0[uVar47 + 3] = fVar4 - fVar8 * 0.5;
                  fVar48 = local_4180[uVar47 + 4];
                  fVar2 = local_4180[uVar47 + 5];
                  fVar3 = local_4180[uVar47 + 6];
                  fVar4 = local_4180[uVar47 + 7];
                  fVar5 = local_2bc0[uVar47 + 4];
                  fVar6 = local_2bc0[uVar47 + 5];
                  fVar7 = local_2bc0[uVar47 + 6];
                  fVar8 = local_2bc0[uVar47 + 7];
                  local_4180[uVar47 + 4] = fVar5 * 0.5 + fVar48;
                  local_4180[uVar47 + 5] = fVar6 * 0.5 + fVar2;
                  local_4180[uVar47 + 6] = fVar7 * 0.5 + fVar3;
                  local_4180[uVar47 + 7] = fVar8 * 0.5 + fVar4;
                  local_2bc0[uVar47 + 4] = fVar48 - fVar5 * 0.5;
                  local_2bc0[uVar47 + 5] = fVar2 - fVar6 * 0.5;
                  local_2bc0[uVar47 + 6] = fVar3 - fVar7 * 0.5;
                  local_2bc0[uVar47 + 7] = fVar4 - fVar8 * 0.5;
                  uVar47 = uVar47 + 8;
                } while ((longlong)uVar47 < (longlong)(int)(iVar46 - uVar24));
              }
            }
            lVar25 = (longlong)(int)uVar36;
            lVar31 = (longlong)iVar46;
            if (lVar25 < lVar31) {
              if (3 < lVar31 - lVar25) {
                pfVar16 = local_2bc0 + lVar25 + 3;
                lVar37 = ((lVar31 - lVar25) - 4U >> 2) + 1;
                lVar25 = lVar25 + lVar37 * 4;
                do {
                  fVar48 = pfVar16[-0x573];
                  pfVar16[-0x573] = pfVar16[-3] * 0.5 + fVar48;
                  pfVar16[-3] = fVar48 - pfVar16[-3] * 0.5;
                  fVar48 = pfVar16[-0x572];
                  pfVar16[-0x572] = pfVar16[-2] * 0.5 + fVar48;
                  pfVar16[-2] = fVar48 - pfVar16[-2] * 0.5;
                  fVar48 = pfVar16[-0x571];
                  pfVar16[-0x571] = pfVar16[-1] * 0.5 + fVar48;
                  pfVar16[-1] = fVar48 - pfVar16[-1] * 0.5;
                  fVar48 = pfVar16[-0x570];
                  pfVar16[-0x570] = *pfVar16 * 0.5 + fVar48;
                  *pfVar16 = fVar48 - *pfVar16 * 0.5;
                  pfVar16 = pfVar16 + 4;
                  lVar37 = lVar37 + -1;
                } while (lVar37 != 0);
                if (lVar31 <= lVar25) goto LAB_144f4b540;
              }
              do {
                fVar48 = local_4180[lVar25];
                local_4180[lVar25] = local_2bc0[lVar25] * 0.5 + fVar48;
                local_2bc0[lVar25] = fVar48 - local_2bc0[lVar25] * 0.5;
                lVar25 = lVar25 + 1;
              } while (lVar25 < lVar31);
            }
          }
LAB_144f4b540:
          iVar10 = iVar10 + 1;
          uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
          puVar41 = puVar41 + 1;
          lVar25 = local_58b0;
        } while (iVar10 < *(int *)(lVar33 + 4));
      }
      FUN_1452fb740(*(undefined8 *)(lVar25 + 0xd0),local_5740,local_4180,
                    (longlong)
                    *(int *)(*(longlong *)(lVar25 + 0xd8 + (longlong)*(int *)(lVar25 + 4) * 8) + 0xc
                            ));
      plVar35 = local_5840;
      lVar37 = 0x38;
      iVar10 = *(int *)(lVar25 + 4);
      lVar33 = *(longlong *)(lVar25 + 0xd8 + (longlong)iVar10 * 8);
      lVar31 = *local_5840;
      if (*(int *)(lVar25 + 0xbc) == 0) {
        if (iVar10 == *(int *)(lVar25 + 8)) {
          local_58f0 = *(float *)(lVar25 + 0x218);
          uVar49 = 0x400;
          if (iVar10 != 0) {
            uVar49 = 0x80;
          }
          local_58d0 = *(int *)(lVar25 + 0x24);
          local_58e0 = *(undefined4 *)(lVar25 + 0x20);
          local_58d8 = 0;
          local_58e8 = (&PTR_DAT_14c726ee0)[iVar10];
          local_5908 = *(byte **)(lVar25 + 0x208);
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,uVar49);
          FUN_144f47380(lVar25,lVar31,uVar49,local_5740);
        }
        else if (iVar10 == 0) {
          local_58d0 = *(int *)(lVar25 + 0x24);
          local_58f0 = *(float *)(lVar25 + 0x218);
          local_58e0 = *(undefined4 *)(lVar25 + 0x20);
          local_58d8 = 0;
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = *(byte **)(lVar25 + 0x208);
          local_58f8 = 0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x80);
          FUN_144f47380(lVar25,lVar31,0x80,local_5740);
          memcpy((void *)(lVar31 + 0x200),local_5640,0x700);
        }
        else {
          fVar48 = *(float *)(lVar25 + 0x218);
          lVar15 = 0x38;
          pfVar16 = (float *)(lVar31 + 8);
          psVar29 = (short *)(*(longlong *)(lVar25 + 0x208) + 4);
          do {
            pfVar16[-2] = (float)(int)psVar29[-2] * fVar48;
            pfVar16[-1] = (float)(int)psVar29[-1] * fVar48;
            *pfVar16 = (float)(int)*psVar29 * fVar48;
            pfVar16[1] = (float)(int)psVar29[1] * fVar48;
            pfVar16[2] = (float)(int)psVar29[2] * fVar48;
            pfVar16[3] = (float)(int)psVar29[3] * fVar48;
            pfVar16[4] = (float)(int)psVar29[4] * fVar48;
            pfVar16[5] = (float)(int)psVar29[5] * fVar48;
            lVar15 = lVar15 + -1;
            pfVar16 = pfVar16 + 8;
            psVar29 = psVar29 + 8;
          } while (lVar15 != 0);
          local_58f0 = *(float *)(lVar25 + 0x218);
          local_58d0 = *(int *)(lVar25 + 0x24) + 0x1c0;
          local_58e0 = *(undefined4 *)(lVar25 + 0x20);
          local_58d8 = 0;
          local_58e8 = PTR_DAT_14c726ee8;
          local_5908 = *(byte **)(lVar25 + 0x208);
          local_58f8 = 0x1c0;
          local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x400);
          FUN_144f47380(lVar25,lVar31 + 0x700,0x80,local_5740);
        }
      }
      uVar49 = FUN_144f48f80(lVar25,*(undefined8 *)(lVar25 + 0x208),puVar34,
                             *(undefined4 *)(lVar33 + 0xc));
      *(undefined4 *)(lVar25 + 0x218) = uVar49;
      FUN_1452fb740(*(undefined8 *)(lVar25 + 0xd0),local_5740,local_2bc0,
                    (longlong)
                    *(int *)(*(longlong *)(lVar25 + 0xd8 + (longlong)*(int *)(lVar25 + 4) * 8) + 0xc
                            ));
      iVar10 = *(int *)(lVar25 + 4);
      lVar15 = (longlong)iVar10;
      lVar33 = plVar35[1];
      plVar35 = (longlong *)(local_58b0 + 0x210);
      lVar25 = *(longlong *)(lVar25 + 0xd8 + lVar15 * 8);
      pfVar16 = (float *)(local_58b0 + 0x21c);
      lVar31 = local_58b0;
      if (*(int *)(local_58b0 + 0xbc) == 0) {
        if (iVar10 == *(int *)(local_58b0 + 8)) goto LAB_144f4b86d;
        if (iVar10 == 0) goto LAB_144f4b9b7;
        fVar48 = *pfVar16;
        pfVar21 = (float *)(lVar33 + 8);
        psVar29 = (short *)(*plVar35 + 4);
        do {
          pfVar21[-2] = (float)(int)psVar29[-2] * fVar48;
          pfVar21[-1] = (float)(int)psVar29[-1] * fVar48;
          *pfVar21 = (float)(int)*psVar29 * fVar48;
          pfVar21[1] = (float)(int)psVar29[1] * fVar48;
          pfVar21[2] = (float)(int)psVar29[2] * fVar48;
          pfVar21[3] = (float)(int)psVar29[3] * fVar48;
          pfVar21[4] = (float)(int)psVar29[4] * fVar48;
          pfVar21[5] = (float)(int)psVar29[5] * fVar48;
          lVar37 = lVar37 + -1;
          pfVar21 = pfVar21 + 8;
          psVar29 = psVar29 + 8;
        } while (lVar37 != 0);
LAB_144f4b222:
        lVar31 = local_58b0;
        local_58f0 = *pfVar16;
        local_58d0 = *(int *)(local_58b0 + 0x24) + 0x1c0;
        local_58d8 = 1;
        local_58e0 = *(undefined4 *)(local_58b0 + 0x20);
        local_58e8 = PTR_DAT_14c726ee8;
        local_5908 = (byte *)*plVar35;
        local_58f8 = 0x1c0;
        local_5900 = (uint *)CONCAT44(local_5900._4_4_,0x400);
        FUN_144f47380(local_58b0,lVar33 + 0x700,0x80,local_5740);
      }
    }
    fVar48 = (float)FUN_144f48f80(lVar31,*plVar35,puVar34,*(undefined4 *)(lVar25 + 0xc));
  }
  *pfVar16 = fVar48;
  *local_57e8 = (ulonglong)(local_5858 + (int)local_5830);
  *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
  *(undefined4 *)(lVar31 + 8) = *(undefined4 *)(lVar31 + 4);
LAB_144f4ba88:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_5928);
}



// FUNCTION 144f4baf0 FUN_144f4baf0 body=502 status=ok
// SIG undefined FUN_144f4baf0(void)

undefined8 FUN_144f4baf0(undefined8 *param_1,uint param_2,int param_3,uint param_4)

{
  code *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  FUN_1452fb8b0(0);
  if (param_2 < 0xac44) {
    if (param_2 < 0x5622) {
      uVar9 = 0x200;
      uVar10 = DAT_14c727368;
    }
    else {
      uVar9 = 0x400;
      uVar10 = DAT_14c727364;
    }
  }
  else {
    uVar9 = 0x800;
    uVar10 = DAT_14c727360;
  }
  puVar2 = &DAT_14c726f30;
  uVar4 = param_2 + 1 >> 1;
  uVar6 = 0;
  do {
    if (uVar4 <= *puVar2) break;
    if (uVar4 <= puVar2[1]) {
      uVar6 = uVar6 + 1;
      break;
    }
    if (uVar4 <= puVar2[2]) {
      uVar6 = uVar6 + 2;
      break;
    }
    if (uVar4 <= puVar2[3]) {
      uVar6 = uVar6 + 3;
      break;
    }
    if (uVar4 <= puVar2[4]) {
      uVar6 = uVar6 + 4;
      break;
    }
    puVar2 = puVar2 + 5;
    uVar6 = uVar6 + 5;
  } while (uVar6 < 0x19);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = (uVar9 * param_3 & 0x7fffffff) >> 3;
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
  *param_1 = param_1 + 0x14;
  *(uint *)(param_1 + 6) = uVar5 + 0xa0;
  FUN_1452ff7b0();
  *(uint *)((longlong)param_1 + 0x2c) = param_4;
  if (param_3 == 1) {
    *(uint *)((longlong)param_1 + 0x2c) = param_4 & 0xfffffffd;
  }
  uVar8 = 0;
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  *(int *)((longlong)param_1 + 0x1c) = param_3;
  *(uint *)((longlong)param_1 + 0x24) = uVar6;
  *(uint *)(param_1 + 1) = uVar9;
  *(uint *)(param_1 + 2) = uVar9 * param_3 * 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (uVar5 == 0x40) {
    *(undefined4 *)(param_1 + 3) = 5;
  }
  else if (uVar5 == 0x80) {
    *(undefined4 *)(param_1 + 3) = 6;
  }
  else if (uVar5 == 0x100) {
    *(undefined4 *)(param_1 + 3) = 7;
  }
  else {
    if (uVar5 != 0x200) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    *(undefined4 *)(param_1 + 3) = 8;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
  if (uVar6 != 0) {
    uVar7 = (ulonglong)uVar6;
    uVar8 = (ulonglong)uVar6;
    puVar2 = (uint *)((longlong)param_1 + 0x34);
    do {
      uVar6 = ((uVar9 >> 1) * *(int *)((0x14c726ef8 - (longlong)param_1) + (longlong)(puVar2 + 1)))
              / uVar4;
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      *puVar2 = uVar6;
      uVar7 = uVar7 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar7 != 0);
  }
  *(uint *)((longlong)param_1 + uVar8 * 4 + 0x34) = uVar9 >> 1;
  *(undefined4 *)(param_1 + 4) = 1;
  return 1;
}



// FUNCTION 144f4bcf0 FUN_144f4bcf0 body=130 status=ok
// SIG undefined FUN_144f4bcf0(void)

void FUN_144f4bcf0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 4) = 0;
  if (*param_2 == param_2[2]) {
    *param_2 = param_2[1];
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 3);
  }
  else {
    uVar1 = 0;
  }
  FUN_144f4ff00(*(undefined4 *)(param_1 + 1),*(undefined4 *)((longlong)param_1 + 0xc),
                *(undefined4 *)((longlong)param_1 + 0x1c),*(undefined4 *)((longlong)param_1 + 0x2c),
                param_2,param_3,*(undefined4 *)((longlong)param_1 + 0x24),(longlong)param_1 + 0x34,
                *(undefined4 *)((longlong)param_1 + 0x14),uVar1,*param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 144f4bd90 FUN_144f4bd90 body=231 status=ok
// SIG undefined FUN_144f4bd90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144f4bd90(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  short *psVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  unkbyte10 Var5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  short sVar15;
  int iVar16;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ushort uVar21;
  short sVar22;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  undefined1 auVar23 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  
  uVar9 = 0;
  uVar21 = (ushort)(param_3 >> 1) & 0x7fff;
  auVar23 = _DAT_149c0d9a0;
  if (param_3 != 0) {
    do {
      auVar11 = *(undefined1 (*) [16])(uVar9 + param_1);
      sVar22 = auVar23._0_2_;
      auVar19._0_2_ = uVar21 - sVar22;
      sVar24 = auVar23._2_2_;
      auVar19._2_2_ = uVar21 - sVar24;
      sVar25 = auVar23._4_2_;
      auVar19._4_2_ = uVar21 - sVar25;
      sVar26 = auVar23._6_2_;
      auVar19._6_2_ = uVar21 - sVar26;
      sVar27 = auVar23._8_2_;
      auVar19._8_2_ = uVar21 - sVar27;
      sVar28 = auVar23._10_2_;
      auVar19._10_2_ = uVar21 - sVar28;
      sVar29 = auVar23._12_2_;
      auVar19._12_2_ = uVar21 - sVar29;
      sVar30 = auVar23._14_2_;
      auVar19._14_2_ = uVar21 - sVar30;
      auVar10 = pmulhw(auVar11,auVar23);
      psVar1 = (short *)(uVar9 + param_2);
      auVar20 = pmulhw(auVar19,*(undefined1 (*) [16])(uVar9 + param_2));
      sVar15 = auVar11._6_2_ * sVar26;
      auVar23._0_2_ = sVar22 + 8;
      auVar23._2_2_ = sVar24 + 8;
      auVar23._4_2_ = sVar25 + 8;
      auVar23._6_2_ = sVar26 + 8;
      auVar23._8_2_ = sVar27 + 8;
      auVar23._10_2_ = sVar28 + 8;
      auVar23._12_2_ = sVar29 + 8;
      auVar23._14_2_ = sVar30 + 8;
      iVar6 = CONCAT22(auVar10._6_2_,sVar15);
      Var4 = CONCAT64(CONCAT42(iVar6,auVar10._4_2_),CONCAT22(auVar11._4_2_ * sVar25,sVar15));
      auVar2._4_8_ = (longlong)((unkuint10)Var4 >> 0x10);
      auVar2._2_2_ = auVar10._2_2_;
      auVar2._0_2_ = auVar11._2_2_ * sVar24;
      iVar12 = CONCAT22(auVar10._8_2_,auVar11._8_2_ * sVar27);
      auVar13._0_8_ = CONCAT26(auVar10._10_2_,CONCAT24(auVar11._10_2_ * sVar28,iVar12));
      auVar13._8_2_ = auVar11._12_2_ * sVar29;
      auVar13._10_2_ = auVar10._12_2_;
      auVar14._12_2_ = auVar11._14_2_ * sVar30;
      auVar14._0_12_ = auVar13;
      auVar14._14_2_ = auVar10._14_2_;
      iVar7 = CONCAT22(auVar20._6_2_,auVar19._6_2_ * psVar1[3]);
      Var5 = CONCAT64(CONCAT42(iVar7,auVar20._4_2_),
                      CONCAT22(auVar19._4_2_ * psVar1[2],auVar19._6_2_ * psVar1[3]));
      auVar3._4_8_ = (longlong)((unkuint10)Var5 >> 0x10);
      auVar3._2_2_ = auVar20._2_2_;
      auVar3._0_2_ = auVar19._2_2_ * psVar1[1];
      iVar16 = CONCAT22(auVar20._8_2_,auVar19._8_2_ * psVar1[4]);
      auVar17._0_8_ = CONCAT26(auVar20._10_2_,CONCAT24(auVar19._10_2_ * psVar1[5],iVar16));
      auVar17._8_2_ = auVar19._12_2_ * psVar1[6];
      auVar17._10_2_ = auVar20._12_2_;
      auVar18._12_2_ = auVar19._14_2_ * psVar1[7];
      auVar18._0_12_ = auVar17;
      auVar18._14_2_ = auVar20._14_2_;
      auVar11._0_4_ =
           CONCAT22(auVar20._0_2_,auVar19._0_2_ * *psVar1) +
           CONCAT22(auVar10._0_2_,auVar11._0_2_ * sVar22) >> param_4;
      auVar11._4_4_ = auVar3._0_4_ + auVar2._0_4_ >> param_4;
      auVar11._8_4_ = (int)((unkuint10)Var5 >> 0x10) + (int)((unkuint10)Var4 >> 0x10) >> param_4;
      auVar11._12_4_ = iVar7 + iVar6 >> param_4;
      auVar10._0_4_ = iVar16 + iVar12 >> param_4;
      auVar10._4_4_ =
           (int)((ulonglong)auVar17._0_8_ >> 0x20) + (int)((ulonglong)auVar13._0_8_ >> 0x20) >>
           param_4;
      auVar10._8_4_ = auVar17._8_4_ + auVar13._8_4_ >> param_4;
      auVar10._12_4_ = auVar18._12_4_ + auVar14._12_4_ >> param_4;
      auVar11 = packssdw(auVar11,auVar10);
      *(undefined1 (*) [16])(uVar9 + param_1) = auVar11;
      uVar8 = (int)uVar9 + 0x10;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < param_3);
  }
  return;
}



// FUNCTION 144f4be80 FUN_144f4be80 body=114 status=ok
// SIG undefined FUN_144f4be80(void)

void FUN_144f4be80(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  uVar12 = param_3 >> 4 & 3;
  puVar11 = param_2;
  puVar9 = param_1;
  for (param_3 = param_3 >> 6; param_3 != 0; param_3 = param_3 - 1) {
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    uVar4 = puVar11[4];
    uVar5 = puVar11[5];
    uVar6 = puVar11[6];
    uVar7 = puVar11[7];
    uVar8 = puVar11[1];
    *puVar9 = *puVar11;
    puVar9[1] = uVar8;
    puVar9 = puVar9 + 8;
    puVar1 = (undefined8 *)((longlong)param_1 + (0x10 - (longlong)param_2) + (longlong)puVar11);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((longlong)param_1 + (0x20 - (longlong)param_2) + (longlong)puVar11);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((longlong)param_1 + (0x30 - (longlong)param_2) + (longlong)puVar11);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar11 = puVar11 + 8;
  }
  if (uVar12 != 0) {
    lVar10 = (longlong)puVar9 - (longlong)puVar11;
    do {
      uVar2 = puVar11[1];
      puVar9 = (undefined8 *)(lVar10 + (longlong)puVar11);
      *puVar9 = *puVar11;
      puVar9[1] = uVar2;
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// FUNCTION 144f4bf00 FUN_144f4bf00 body=944 status=ok
// SIG undefined FUN_144f4bf00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144f4bf00(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,int param_7)

{
  float *pfVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  unkbyte10 Var10;
  ushort uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  short sVar18;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  short sVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_f8 [32];
  float local_d8 [5];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  auVar20 = _DAT_149c0d9b0;
  auVar50 = _DAT_149c0d990;
  local_a8 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar17 = 0;
  uVar11 = (1 << ((byte)param_7 & 0x1f)) - 1;
  lVar12 = (longlong)param_7 * 0x20;
  uVar15 = (ulonglong)((uint)param_3 & 7);
  uVar30 = *(ushort *)(lVar12 + 0x14c727172) >> uVar15;
  uVar31 = *(ushort *)(lVar12 + 0x14c727174) >> uVar15;
  uVar32 = *(ushort *)(lVar12 + 0x14c727176) >> uVar15;
  uVar34 = *(ushort *)(lVar12 + 0x14c727178) >> uVar15;
  uVar35 = *(ushort *)(lVar12 + 0x14c72717a) >> uVar15;
  uVar36 = *(ushort *)(lVar12 + 0x14c72717c) >> uVar15;
  uVar37 = *(ushort *)(lVar12 + 0x14c72717e) >> uVar15;
  uVar40 = *(ushort *)(&DAT_14c727170 + lVar12) >> uVar15 & 0xff;
  uVar41 = uVar30 & 0xff;
  uVar42 = uVar31 & 0xff;
  uVar43 = uVar32 & 0xff;
  uVar44 = uVar34 & 0xff;
  uVar45 = uVar35 & 0xff;
  uVar46 = uVar36 & 0xff;
  uVar47 = uVar37 & 0xff;
  sVar22 = uVar40 * 2;
  sVar27 = uVar41 * 2;
  sVar33 = uVar42 * 2;
  sVar3 = uVar43 * 2;
  sVar4 = uVar44 * 2;
  sVar5 = uVar45 * 2;
  sVar6 = uVar46 * 2;
  sVar7 = uVar47 * 2;
  sVar18 = -(ushort)(uVar40 == *(ushort *)(&DAT_14c727170 + lVar12) >> uVar15);
  sVar21 = -(ushort)(uVar41 == uVar30);
  sVar23 = -(ushort)(uVar42 == uVar31);
  sVar24 = -(ushort)(uVar43 == uVar32);
  sVar25 = -(ushort)(uVar44 == uVar34);
  sVar26 = -(ushort)(uVar45 == uVar35);
  sVar28 = -(ushort)(uVar46 == uVar36);
  sVar29 = -(ushort)(uVar47 == uVar37);
  auVar48[0] = (&DAT_14c727160)[lVar12] - (char)sVar18;
  auVar48[1] = *(char *)(lVar12 + 0x14c727161) - (char)((ushort)sVar18 >> 8);
  auVar48[2] = *(char *)(lVar12 + 0x14c727162) - (char)sVar21;
  auVar48[3] = *(char *)(lVar12 + 0x14c727163) - (char)((ushort)sVar21 >> 8);
  auVar48[4] = *(char *)(lVar12 + 0x14c727164) - (char)sVar23;
  auVar48[5] = *(char *)(lVar12 + 0x14c727165) - (char)((ushort)sVar23 >> 8);
  auVar48[6] = *(char *)(lVar12 + 0x14c727166) - (char)sVar24;
  auVar48[7] = *(char *)(lVar12 + 0x14c727167) - (char)((ushort)sVar24 >> 8);
  auVar48[8] = *(char *)(lVar12 + 0x14c727168) - (char)sVar25;
  auVar48[9] = *(char *)(lVar12 + 0x14c727169) - (char)((ushort)sVar25 >> 8);
  auVar48[10] = *(char *)(lVar12 + 0x14c72716a) - (char)sVar26;
  auVar48[0xb] = *(char *)(lVar12 + 0x14c72716b) - (char)((ushort)sVar26 >> 8);
  auVar48[0xc] = *(char *)(lVar12 + 0x14c72716c) - (char)sVar28;
  auVar48[0xd] = *(char *)(lVar12 + 0x14c72716d) - (char)((ushort)sVar28 >> 8);
  auVar48[0xe] = *(char *)(lVar12 + 0x14c72716e) - (char)sVar29;
  auVar48[0xf] = *(char *)(lVar12 + 0x14c72716f) - (char)((ushort)sVar29 >> 8);
  auVar49[0] = auVar48[0] + '\x01';
  auVar49[1] = auVar48[1] + '\x01';
  auVar49[2] = auVar48[2] + '\x01';
  auVar49[3] = auVar48[3] + '\x01';
  auVar49[4] = auVar48[4] + '\x01';
  auVar49[5] = auVar48[5] + '\x01';
  auVar49[6] = auVar48[6] + '\x01';
  auVar49[7] = auVar48[7] + '\x01';
  auVar49[8] = auVar48[8] + '\x01';
  auVar49[9] = auVar48[9] + '\x01';
  auVar49[10] = auVar48[10] + '\x01';
  auVar49[0xb] = auVar48[0xb] + '\x01';
  auVar49[0xc] = auVar48[0xc] + '\x01';
  auVar49[0xd] = auVar48[0xd] + '\x01';
  auVar49[0xe] = auVar48[0xe] + '\x01';
  auVar49[0xf] = auVar48[0xf] + '\x01';
  uVar15 = param_6 & 0xfffffffffffffff8;
  if (uVar15 != 0) {
    uVar16 = uVar17;
    do {
      auVar19 = *(undefined1 (*) [16])((param_3 >> 3) + param_2);
      auVar39 = pshufb(auVar19,auVar48);
      uVar30 = (ushort)(auVar39._0_2_ * sVar22) >> 8;
      uVar31 = (ushort)(auVar39._2_2_ * sVar27) >> 8;
      uVar32 = (ushort)(auVar39._4_2_ * sVar33) >> 8;
      uVar34 = (ushort)(auVar39._6_2_ * sVar3) >> 8;
      uVar35 = (ushort)(auVar39._8_2_ * sVar4) >> 8;
      uVar36 = (ushort)(auVar39._10_2_ * sVar5) >> 8;
      uVar37 = (ushort)(auVar39._12_2_ * sVar6) >> 8;
      uVar40 = (ushort)(auVar39._14_2_ * sVar7) >> 8;
      if (8 < param_7) {
        auVar19 = pshufb(auVar19,auVar49);
        uVar30 = uVar30 | auVar19._0_2_ * sVar22;
        uVar31 = uVar31 | auVar19._2_2_ * sVar27;
        uVar32 = uVar32 | auVar19._4_2_ * sVar33;
        uVar34 = uVar34 | auVar19._6_2_ * sVar3;
        uVar35 = uVar35 | auVar19._8_2_ * sVar4;
        uVar36 = uVar36 | auVar19._10_2_ * sVar5;
        uVar37 = uVar37 | auVar19._12_2_ * sVar6;
        uVar40 = uVar40 | auVar19._14_2_ * sVar7;
      }
      uVar35 = uVar35 & uVar11;
      uVar41 = CONCAT11(0,(uVar30 & uVar11) != 0);
      uVar42 = (ushort)((uVar31 & uVar11) != 0);
      uVar43 = (ushort)((uVar32 & uVar11) != 0);
      uVar44 = (ushort)(uVar35 != 0);
      uVar45 = (ushort)((uVar36 & uVar11) != 0);
      uVar46 = (ushort)((uVar37 & uVar11) != 0);
      param_3 = param_3 + (longlong)(param_7 * 8);
      sVar18 = uVar41 + uVar42;
      sVar21 = uVar44 + uVar45;
      auVar19._2_2_ = sVar18;
      auVar19._0_2_ = uVar41;
      auVar19._4_2_ = uVar41 + uVar42 + uVar43;
      auVar19._6_2_ = sVar18 + uVar43 + ((uVar34 & uVar11) != 0);
      auVar19[8] = uVar35 != 0;
      auVar19[9] = 0;
      auVar19._10_2_ = sVar21;
      auVar19._12_2_ = uVar44 + uVar45 + uVar46;
      auVar19._14_2_ = sVar21 + uVar46 + ((uVar40 & uVar11) != 0);
      auVar39 = pshufb(auVar19,auVar20);
      auVar38._0_2_ = auVar39._0_2_ + uVar41;
      auVar38._2_2_ = auVar39._2_2_ + sVar18;
      auVar38._4_2_ = auVar39._4_2_ + auVar19._4_2_;
      auVar38._6_2_ = auVar39._6_2_ + auVar19._6_2_;
      auVar38._8_2_ = auVar39._8_2_ + uVar44;
      auVar38._10_2_ = auVar39._10_2_ + sVar21;
      auVar38._12_2_ = auVar39._12_2_ + auVar19._12_2_;
      auVar38._14_2_ = auVar39._14_2_ + auVar19._14_2_;
      auVar19 = pshufb(ZEXT416(*(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7) & 0xff),
                       ZEXT816(0));
      auVar39 = pshufb(auVar50,auVar38);
      auVar19 = auVar19 & auVar39;
      uVar41 = (ushort)(auVar19._0_2_ == auVar39._0_2_);
      uVar42 = (ushort)(auVar19._2_2_ == auVar39._2_2_);
      uVar43 = (ushort)(auVar19._4_2_ == auVar39._4_2_);
      uVar44 = (ushort)(auVar19._6_2_ == auVar39._6_2_);
      uVar45 = (ushort)(auVar19._8_2_ == auVar39._8_2_);
      uVar46 = (ushort)(auVar19._10_2_ == auVar39._10_2_);
      uVar47 = (ushort)(auVar19._12_2_ == auVar39._12_2_);
      uVar2 = (ushort)(auVar19._14_2_ == auVar39._14_2_);
      sVar18 = (-uVar42 ^ uVar31 & uVar11) + uVar42;
      sVar21 = (-uVar43 ^ uVar32 & uVar11) + uVar43;
      sVar23 = (-uVar44 ^ uVar34 & uVar11) + uVar44;
      param_4 = param_4 + (auVar38._14_2_ & 0xf);
      Var10 = CONCAT64(CONCAT42(CONCAT22(sVar23,sVar23),sVar21),CONCAT22(sVar21,sVar23));
      auVar8._4_8_ = (longlong)((unkuint10)Var10 >> 0x10);
      auVar8._2_2_ = sVar18;
      auVar8._0_2_ = sVar18;
      pfVar1 = (float *)(param_1 + uVar16 * 4);
      *pfVar1 = (float)(int)(short)((-uVar41 ^ uVar30 & uVar11) + uVar41);
      pfVar1[1] = (float)(auVar8._0_4_ >> 0x10);
      pfVar1[2] = (float)((int)((unkuint10)Var10 >> 0x10) >> 0x10);
      pfVar1[3] = (float)(int)sVar23;
      pfVar1 = (float *)(param_1 + 0x10 + uVar16 * 4);
      *pfVar1 = (float)(int)(short)((-uVar45 ^ uVar35) + uVar45);
      pfVar1[1] = (float)(int)(short)((-uVar46 ^ uVar36 & uVar11) + uVar46);
      pfVar1[2] = (float)(int)(short)((-uVar47 ^ uVar37 & uVar11) + uVar47);
      pfVar1[3] = (float)(int)(short)((-uVar2 ^ uVar40 & uVar11) + uVar2);
      if ((param_5 < param_4) || (param_5 < param_3)) goto LAB_144f4c29e;
      uVar16 = uVar16 + 8;
    } while (uVar16 < uVar15);
  }
  uVar16 = (ulonglong)((uint)param_6 & 7);
  if ((param_6 & 7) != 0) {
    auVar20 = *(undefined1 (*) [16])((param_3 >> 3) + param_2);
    auVar48 = pshufb(auVar20,auVar48);
    uVar30 = (ushort)(auVar48._0_2_ * sVar22) >> 8;
    uVar31 = (ushort)(auVar48._2_2_ * sVar27) >> 8;
    uVar32 = (ushort)(auVar48._4_2_ * sVar33) >> 8;
    uVar34 = (ushort)(auVar48._6_2_ * sVar3) >> 8;
    uVar35 = (ushort)(auVar48._8_2_ * sVar4) >> 8;
    uVar36 = (ushort)(auVar48._10_2_ * sVar5) >> 8;
    uVar37 = (ushort)(auVar48._12_2_ * sVar6) >> 8;
    uVar40 = (ushort)(auVar48._14_2_ * sVar7) >> 8;
    if (8 < param_7) {
      auVar20 = pshufb(auVar20,auVar49);
      uVar30 = uVar30 | auVar20._0_2_ * sVar22;
      uVar31 = uVar31 | auVar20._2_2_ * sVar27;
      uVar32 = uVar32 | auVar20._4_2_ * sVar33;
      uVar34 = uVar34 | auVar20._6_2_ * sVar3;
      uVar35 = uVar35 | auVar20._8_2_ * sVar4;
      uVar36 = uVar36 | auVar20._10_2_ * sVar5;
      uVar37 = uVar37 | auVar20._12_2_ * sVar6;
      uVar40 = uVar40 | auVar20._14_2_ * sVar7;
    }
    uVar35 = uVar35 & uVar11;
    uVar41 = CONCAT11(0,(uVar30 & uVar11) != 0);
    uVar42 = (ushort)((uVar31 & uVar11) != 0);
    uVar43 = (ushort)((uVar32 & uVar11) != 0);
    uVar44 = (ushort)(uVar35 != 0);
    uVar45 = (ushort)((uVar36 & uVar11) != 0);
    uVar46 = (ushort)((uVar37 & uVar11) != 0);
    sVar22 = uVar41 + uVar42;
    sVar27 = uVar44 + uVar45;
    auVar20._2_2_ = sVar22;
    auVar20._0_2_ = uVar41;
    auVar20._4_2_ = uVar41 + uVar42 + uVar43;
    auVar20._6_2_ = sVar22 + uVar43 + ((uVar34 & uVar11) != 0);
    auVar20[8] = uVar35 != 0;
    auVar20[9] = 0;
    auVar20._10_2_ = sVar27;
    auVar20._12_2_ = uVar44 + uVar45 + uVar46;
    auVar20._14_2_ = sVar27 + uVar46 + ((uVar40 & uVar11) != 0);
    auVar48 = pshufb(auVar20,_DAT_149c0d9b0);
    local_b8._0_2_ = auVar48._0_2_ + uVar41;
    local_b8._2_2_ = auVar48._2_2_ + sVar22;
    local_b8._4_2_ = auVar48._4_2_ + auVar20._4_2_;
    local_b8._6_2_ = auVar48._6_2_ + auVar20._6_2_;
    local_b8._8_2_ = auVar48._8_2_ + uVar44;
    local_b8._10_2_ = auVar48._10_2_ + sVar27;
    local_b8._12_2_ = auVar48._12_2_ + auVar20._12_2_;
    local_b8._14_2_ = auVar48._14_2_ + auVar20._14_2_;
    auVar20 = pshufb(ZEXT416(*(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7) & 0xff),
                     ZEXT816(0));
    auVar50 = pshufb(auVar50,local_b8);
    auVar20 = auVar20 & auVar50;
    uVar41 = (ushort)(auVar20._0_2_ == auVar50._0_2_);
    uVar42 = (ushort)(auVar20._2_2_ == auVar50._2_2_);
    uVar43 = (ushort)(auVar20._4_2_ == auVar50._4_2_);
    uVar44 = (ushort)(auVar20._6_2_ == auVar50._6_2_);
    uVar45 = (ushort)(auVar20._8_2_ == auVar50._8_2_);
    uVar46 = (ushort)(auVar20._10_2_ == auVar50._10_2_);
    uVar47 = (ushort)(auVar20._12_2_ == auVar50._12_2_);
    uVar2 = (ushort)(auVar20._14_2_ == auVar50._14_2_);
    sVar22 = (-uVar42 ^ uVar31 & uVar11) + uVar42;
    sVar27 = (-uVar43 ^ uVar32 & uVar11) + uVar43;
    sVar33 = (-uVar44 ^ uVar34 & uVar11) + uVar44;
    Var10 = CONCAT64(CONCAT42(CONCAT22(sVar33,sVar33),sVar27),CONCAT22(sVar27,sVar33));
    auVar9._4_8_ = (longlong)((unkuint10)Var10 >> 0x10);
    auVar9._2_2_ = sVar22;
    auVar9._0_2_ = sVar22;
    local_d8[0] = (float)(int)(short)((-uVar41 ^ uVar30 & uVar11) + uVar41);
    local_d8[1] = (float)(auVar9._0_4_ >> 0x10);
    local_d8[2] = (float)((int)((unkuint10)Var10 >> 0x10) >> 0x10);
    local_d8[3] = (float)(int)sVar33;
    local_d8[4] = (float)(int)(short)((-uVar45 ^ uVar35) + uVar45);
    fStack_c4 = (float)(int)(short)((-uVar46 ^ uVar36 & uVar11) + uVar46);
    fStack_c0 = (float)(int)(short)((-uVar47 ^ uVar37 & uVar11) + uVar47);
    fStack_bc = (float)(int)(short)((-uVar2 ^ uVar40 & uVar11) + uVar2);
    if (3 < uVar16) {
      lVar12 = uVar15 * 4 + 8;
      puVar13 = (undefined4 *)(lVar12 + param_1);
      lVar14 = (uVar16 - 4 >> 2) + 1;
      uVar17 = lVar14 * 4;
      do {
        puVar13[-2] = *(undefined4 *)((longlong)local_d8 + (-param_1 - lVar12) + (longlong)puVar13);
        puVar13[-1] = *(undefined4 *)
                       ((longlong)local_d8 + (-param_1 - lVar12) + 4 + (longlong)puVar13);
        *puVar13 = *(undefined4 *)((longlong)local_d8 + (uVar15 * -4 - param_1) + (longlong)puVar13)
        ;
        puVar13[1] = *(undefined4 *)
                      ((longlong)local_d8 + (uVar15 * -4 - param_1) + 4 + (longlong)puVar13);
        puVar13 = puVar13 + 4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if (uVar17 < uVar16) {
      memcpy((void *)(param_1 + (uVar17 + uVar15) * 4),local_d8 + uVar17,(uVar16 - uVar17) * 4);
    }
  }
LAB_144f4c29e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a8 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144f4c2f0 FUN_144f4c2f0 body=458 status=ok
// SIG undefined FUN_144f4c2f0(void)

ulonglong FUN_144f4c2f0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5,undefined4 param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  
  switch(param_6) {
  case 1:
    uVar5 = FUN_144f4c500(param_1);
    return uVar5;
  case 2:
    uVar5 = FUN_144f4c880(param_1);
    return uVar5;
  case 3:
    uVar5 = FUN_144f4cc10(param_1);
    return uVar5;
  case 4:
    uVar5 = FUN_144f4cfa0(param_1);
    return uVar5;
  case 5:
    uVar5 = FUN_144f4d330(param_1);
    return uVar5;
  case 6:
    uVar5 = FUN_144f4d6c0(param_1);
    return uVar5;
  case 7:
    uVar5 = FUN_144f4da50(param_1);
    return uVar5;
  case 8:
    uVar5 = FUN_144f4dde0(param_1);
    return uVar5;
  case 9:
    uVar5 = FUN_144f4e020(param_1);
    return uVar5;
  case 10:
    uVar5 = FUN_144f4e260(param_1);
    return uVar5;
  case 0xb:
    uVar5 = FUN_144f4e4a0(param_1);
    return uVar5;
  case 0xc:
    uVar5 = FUN_144f4e6e0(param_1);
    return uVar5;
  case 0xd:
    uVar5 = FUN_144f4e920(param_1);
    return uVar5;
  case 0xe:
    uVar5 = FUN_144f4eb60(param_1);
    return uVar5;
  case 0xf:
    uVar5 = 0;
    if (param_5 != 0) {
      do {
        bVar6 = (byte)param_3;
        uVar2 = param_3 >> 3;
        param_3 = param_3 + 0xf;
        uVar4 = *(uint *)(uVar2 + param_2) >> (bVar6 & 7);
        bVar6 = (byte)param_4;
        uVar2 = param_4 >> 3;
        uVar3 = (ushort)uVar4 & 0x7fff;
        param_4 = param_4 + ((uVar4 & 0x7fff) != 0);
        uVar1 = -uVar3;
        if ((*(uint *)(uVar2 + param_2) >> (bVar6 & 7) & 1) == 0) {
          uVar1 = uVar3;
        }
        *(float *)(param_1 + uVar5 * 4) = (float)(int)(short)uVar1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_5);
    }
  }
  return param_4 & 0xffffffff;
}



// FUNCTION 144f4c500 FUN_144f4c500 body=881 status=ok
// SIG undefined FUN_144f4c500(void)

ulonglong FUN_144f4c500(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  sbyte sVar1;
  sbyte sVar2;
  sbyte sVar3;
  sbyte sVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  short sVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  float *pfVar18;
  longlong lVar19;
  ushort uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ulonglong local_70;
  float *local_60;
  char local_58;
  longlong local_50;
  
  uVar9 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_50 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar9 = local_50 * 8;
    local_70 = param_4;
    do {
      bVar5 = (byte)param_3;
      uVar12 = param_3 >> 3;
      param_3 = param_3 + 8;
      uVar21 = *(ulonglong *)(uVar12 + param_2) >> (bVar5 & 7);
      uVar8 = *(uint *)((local_70 >> 3) + param_2) >> ((byte)local_70 & 7);
      uVar16 = (ushort)uVar21 & 1;
      uVar17 = (ushort)(uVar21 >> 1) & 1;
      sVar1 = (sbyte)uVar16 + (char)uVar17;
      uVar14 = (ushort)(uVar21 >> 2) & 1;
      sVar2 = sVar1 + (char)uVar14;
      uVar12 = uVar21 >> 6 & 0xffffffffffff0001;
      uVar22 = uVar21 >> 7 & 1;
      uVar15 = (ushort)(uVar21 >> 3) & 1;
      sVar3 = sVar2 + (char)uVar15;
      uVar23 = (ushort)(uVar21 >> 4) & 1;
      uVar20 = (ushort)(uVar21 >> 5) & 1;
      sVar4 = sVar3 + (char)uVar23;
      bVar5 = sVar4 + (char)uVar20;
      bVar6 = bVar5 + (char)uVar12;
      local_58 = (char)uVar22;
      param_4 = local_70 + (byte)(bVar6 + local_58);
      uVar13 = -uVar16;
      if ((uVar8 & 1) == 0) {
        uVar13 = uVar16;
      }
      local_60[-2] = (float)(int)(short)uVar13;
      uVar13 = -uVar17;
      if ((uVar8 >> (sbyte)uVar16 & 1) == 0) {
        uVar13 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar13;
      uVar13 = -uVar14;
      if ((uVar8 >> sVar1 & 1) == 0) {
        uVar13 = uVar14;
      }
      uVar14 = -uVar15;
      if ((uVar8 >> sVar2 & 1) == 0) {
        uVar14 = uVar15;
      }
      *local_60 = (float)(int)(short)uVar13;
      uVar13 = -uVar23;
      if ((uVar8 >> sVar3 & 1) == 0) {
        uVar13 = uVar23;
      }
      local_60[1] = (float)(int)(short)uVar14;
      uVar14 = -uVar20;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar14 = uVar20;
      }
      local_60[2] = (float)(int)(short)uVar13;
      sVar10 = (short)uVar12;
      sVar7 = -sVar10;
      if ((uVar8 >> (bVar5 & 0x1f) & 1) == 0) {
        sVar7 = sVar10;
      }
      local_60[3] = (float)(int)(short)uVar14;
      sVar11 = (short)uVar22;
      sVar10 = -sVar11;
      if ((uVar8 >> (bVar6 & 0x1f) & 1) == 0) {
        sVar10 = sVar11;
      }
      local_60[4] = (float)(int)sVar7;
      local_60[5] = (float)(int)sVar10;
      local_60 = local_60 + 8;
      local_50 = local_50 + -1;
      local_70 = param_4;
    } while (local_50 != 0);
  }
  if (uVar9 < param_5) {
    lVar19 = param_5 - uVar9;
    pfVar18 = (float *)(param_1 + uVar9 * 4);
    do {
      bVar5 = (byte)param_3;
      uVar9 = param_3 >> 3;
      param_3 = param_3 + 1;
      uVar14 = (ushort)(*(uint *)(uVar9 + param_2) >> (bVar5 & 7)) & 1;
      uVar9 = param_4 >> 3;
      bVar5 = (byte)param_4;
      param_4 = param_4 + uVar14;
      uVar13 = -uVar14;
      if ((*(uint *)(uVar9 + param_2) >> (bVar5 & 7) & 1) == 0) {
        uVar13 = uVar14;
      }
      *pfVar18 = (float)(int)(short)uVar13;
      lVar19 = lVar19 + -1;
      pfVar18 = pfVar18 + 1;
    } while (lVar19 != 0);
  }
  return param_4;
}



// FUNCTION 144f4c880 FUN_144f4c880 body=899 status=ok
// SIG undefined FUN_144f4c880(void)

ulonglong FUN_144f4c880(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar14 = param_3;
    do {
      param_3 = uVar14 + 0x10;
      uVar14 = *(ulonglong *)((uVar14 >> 3) + param_2) >> ((byte)uVar14 & 7);
      uVar11 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 3;
      uVar3 = (ushort)(uVar14 >> 2) & 3;
      sVar5 = ((uVar14 & 3) != 0) + ((uVar14 >> 2 & 3) != 0);
      uVar16 = (ushort)(uVar14 >> 4) & 3;
      sVar6 = sVar5 + ((uVar14 >> 4 & 3) != 0);
      uVar17 = (ushort)(uVar14 >> 6) & 3;
      sVar7 = sVar6 + ((uVar14 >> 6 & 3) != 0);
      uVar4 = (ushort)(uVar14 >> 8) & 3;
      sVar8 = sVar7 + ((uVar14 & 0x300) != 0);
      uVar15 = (ushort)(uVar14 >> 10) & 3;
      bVar9 = sVar8 + ((uVar14 >> 10 & 3) != 0);
      uVar12 = (ushort)(uVar14 >> 0xc) & 3;
      bVar10 = bVar9 + ((uVar14 >> 0xc & 3) != 0);
      local_70 = (ushort)(uVar14 >> 0xe) & 3;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0xe & 3) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 3) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar16;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar16;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar17;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar17;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar15;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar15;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar14 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 2;
    uVar11 = *(uint *)(uVar14 + param_2) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 3;
    param_4 = param_4 + ((uVar11 & 3) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(uVar14 + param_2) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    *(float *)(param_1 + uVar13 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4cc10 FUN_144f4cc10 body=899 status=ok
// SIG undefined FUN_144f4cc10(void)

ulonglong FUN_144f4cc10(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar14 = param_3;
    do {
      param_3 = uVar14 + 0x18;
      uVar14 = *(ulonglong *)((uVar14 >> 3) + param_2) >> ((byte)uVar14 & 7);
      uVar11 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 7;
      uVar3 = (ushort)(uVar14 >> 3) & 7;
      sVar5 = ((uVar14 & 7) != 0) + ((uVar14 >> 3 & 7) != 0);
      uVar16 = (ushort)(uVar14 >> 6) & 7;
      sVar6 = sVar5 + ((uVar14 >> 6 & 7) != 0);
      uVar17 = (ushort)(uVar14 >> 9) & 7;
      sVar7 = sVar6 + ((uVar14 >> 9 & 7) != 0);
      uVar4 = (ushort)(uVar14 >> 0xc) & 7;
      sVar8 = sVar7 + ((uVar14 >> 0xc & 7) != 0);
      uVar15 = (ushort)(uVar14 >> 0xf) & 7;
      bVar9 = sVar8 + ((uVar14 >> 0xf & 7) != 0);
      uVar12 = (ushort)(uVar14 >> 0x12) & 7;
      bVar10 = bVar9 + ((uVar14 >> 0x12 & 7) != 0);
      local_70 = (ushort)(uVar14 >> 0x15) & 7;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x15 & 7) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 7) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar16;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar16;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar17;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar17;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar15;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar15;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar14 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 3;
    uVar11 = *(uint *)(uVar14 + param_2) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 7;
    param_4 = param_4 + ((uVar11 & 7) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(uVar14 + param_2) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    *(float *)(param_1 + uVar13 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4cfa0 FUN_144f4cfa0 body=899 status=ok
// SIG undefined FUN_144f4cfa0(void)

ulonglong FUN_144f4cfa0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar14 = param_3;
    do {
      param_3 = uVar14 + 0x20;
      uVar14 = *(ulonglong *)((uVar14 >> 3) + param_2) >> ((byte)uVar14 & 7);
      uVar11 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0xf;
      uVar3 = (ushort)(uVar14 >> 4) & 0xf;
      sVar5 = ((uVar14 & 0xf) != 0) + ((uVar14 >> 4 & 0xf) != 0);
      uVar16 = (ushort)(uVar14 >> 8) & 0xf;
      sVar6 = sVar5 + ((uVar14 & 0xf00) != 0);
      uVar17 = (ushort)(uVar14 >> 0xc) & 0xf;
      sVar7 = sVar6 + ((uVar14 >> 0xc & 0xf) != 0);
      uVar4 = (ushort)(uVar14 >> 0x10) & 0xf;
      sVar8 = sVar7 + ((uVar14 & 0xf0000) != 0);
      uVar15 = (ushort)(uVar14 >> 0x14) & 0xf;
      bVar9 = sVar8 + ((uVar14 >> 0x14 & 0xf) != 0);
      uVar12 = (ushort)(uVar14 >> 0x18) & 0xf;
      bVar10 = bVar9 + ((uVar14 & 0xf000000) != 0);
      local_70 = (ushort)(uVar14 >> 0x1c) & 0xf;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x1c & 0xf) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0xf) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar16;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar16;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar17;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar17;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar15;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar15;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar14 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 4;
    uVar11 = *(uint *)(uVar14 + param_2) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0xf;
    param_4 = param_4 + ((uVar11 & 0xf) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(uVar14 + param_2) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    *(float *)(param_1 + uVar13 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4d330 FUN_144f4d330 body=899 status=ok
// SIG undefined FUN_144f4d330(void)

ulonglong FUN_144f4d330(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar14 = param_3;
    do {
      param_3 = uVar14 + 0x28;
      uVar14 = *(ulonglong *)((uVar14 >> 3) + param_2) >> ((byte)uVar14 & 7);
      uVar11 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0x1f;
      uVar3 = (ushort)(uVar14 >> 5) & 0x1f;
      sVar5 = ((uVar14 & 0x1f) != 0) + ((uVar14 >> 5 & 0x1f) != 0);
      uVar16 = (ushort)(uVar14 >> 10) & 0x1f;
      sVar6 = sVar5 + ((uVar14 >> 10 & 0x1f) != 0);
      uVar17 = (ushort)(uVar14 >> 0xf) & 0x1f;
      sVar7 = sVar6 + ((uVar14 >> 0xf & 0x1f) != 0);
      uVar4 = (ushort)(uVar14 >> 0x14) & 0x1f;
      sVar8 = sVar7 + ((uVar14 >> 0x14 & 0x1f) != 0);
      uVar15 = (ushort)(uVar14 >> 0x19) & 0x1f;
      bVar9 = sVar8 + ((uVar14 >> 0x19 & 0x1f) != 0);
      uVar12 = (ushort)(uVar14 >> 0x1e) & 0x1f;
      bVar10 = bVar9 + ((uVar14 >> 0x1e & 0x1f) != 0);
      local_70 = (ushort)(uVar14 >> 0x23) & 0x1f;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x23 & 0x1f) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0x1f) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar16;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar16;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar17;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar17;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar15;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar15;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar14 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 5;
    uVar11 = *(uint *)(uVar14 + param_2) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0x1f;
    param_4 = param_4 + ((uVar11 & 0x1f) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(uVar14 + param_2) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    *(float *)(param_1 + uVar13 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4d6c0 FUN_144f4d6c0 body=899 status=ok
// SIG undefined FUN_144f4d6c0(void)

ulonglong FUN_144f4d6c0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar14 = param_3;
    do {
      param_3 = uVar14 + 0x30;
      uVar14 = *(ulonglong *)((uVar14 >> 3) + param_2) >> ((byte)uVar14 & 7);
      uVar11 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0x3f;
      uVar3 = (ushort)(uVar14 >> 6) & 0x3f;
      sVar5 = ((uVar14 & 0x3f) != 0) + ((uVar14 >> 6 & 0x3f) != 0);
      uVar16 = (ushort)(uVar14 >> 0xc) & 0x3f;
      sVar6 = sVar5 + ((uVar14 >> 0xc & 0x3f) != 0);
      uVar17 = (ushort)(uVar14 >> 0x12) & 0x3f;
      sVar7 = sVar6 + ((uVar14 >> 0x12 & 0x3f) != 0);
      uVar4 = (ushort)(uVar14 >> 0x18) & 0x3f;
      sVar8 = sVar7 + ((uVar14 & 0x3f000000) != 0);
      uVar15 = (ushort)(uVar14 >> 0x1e) & 0x3f;
      bVar9 = sVar8 + ((uVar14 >> 0x1e & 0x3f) != 0);
      uVar12 = (ushort)(uVar14 >> 0x24) & 0x3f;
      bVar10 = bVar9 + ((uVar14 >> 0x24 & 0x3f) != 0);
      local_70 = (ushort)(uVar14 >> 0x2a) & 0x3f;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x2a & 0x3f) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0x3f) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar16;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar16;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar17;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar17;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar15;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar15;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar14 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 6;
    uVar11 = *(uint *)(uVar14 + param_2) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0x3f;
    param_4 = param_4 + ((uVar11 & 0x3f) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(uVar14 + param_2) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    *(float *)(param_1 + uVar13 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4da50 FUN_144f4da50 body=899 status=ok
// SIG undefined FUN_144f4da50(void)

ulonglong FUN_144f4da50(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = (float *)(param_1 + 8);
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar14 = param_3;
    do {
      param_3 = uVar14 + 0x38;
      uVar14 = *(ulonglong *)((uVar14 >> 3) + param_2) >> ((byte)uVar14 & 7);
      uVar11 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0x7f;
      uVar3 = (ushort)(uVar14 >> 7) & 0x7f;
      sVar5 = ((uVar14 & 0x7f) != 0) + ((uVar14 >> 7 & 0x7f) != 0);
      uVar16 = (ushort)(uVar14 >> 0xe) & 0x7f;
      sVar6 = sVar5 + ((uVar14 >> 0xe & 0x7f) != 0);
      uVar17 = (ushort)(uVar14 >> 0x15) & 0x7f;
      sVar7 = sVar6 + ((uVar14 >> 0x15 & 0x7f) != 0);
      uVar4 = (ushort)(uVar14 >> 0x1c) & 0x7f;
      sVar8 = sVar7 + ((uVar14 >> 0x1c & 0x7f) != 0);
      uVar15 = (ushort)(uVar14 >> 0x23) & 0x7f;
      bVar9 = sVar8 + ((uVar14 >> 0x23 & 0x7f) != 0);
      uVar12 = (ushort)(uVar14 >> 0x2a) & 0x7f;
      bVar10 = bVar9 + ((uVar14 >> 0x2a & 0x7f) != 0);
      local_70 = (ushort)(uVar14 >> 0x31) & 0x7f;
      param_4 = param_4 + (byte)(bVar10 + (local_70 != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0x7f) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar16;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar16;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar17;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar17;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar15;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar15;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar14 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 7;
    uVar11 = *(uint *)(uVar14 + param_2) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0x7f;
    param_4 = param_4 + ((uVar11 & 0x7f) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(uVar14 + param_2) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    *(float *)(param_1 + uVar13 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4dde0 FUN_144f4dde0 body=561 status=ok
// SIG undefined FUN_144f4dde0(void)

ulonglong FUN_144f4dde0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x20;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0xff;
      uVar9 = (ushort)(uVar3 >> 8) & 0xff;
      sVar4 = ((uVar3 & 0xff) != 0) + ((uVar3 & 0xff00) != 0);
      uVar10 = (ushort)(uVar3 >> 0x10) & 0xff;
      sVar5 = sVar4 + ((uVar3 & 0xff0000) != 0);
      uVar7 = (ushort)(uVar3 >> 0x18) & 0xff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 & 0xff000000) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0xff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 8;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0xff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0xff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4e020 FUN_144f4e020 body=561 status=ok
// SIG undefined FUN_144f4e020(void)

ulonglong FUN_144f4e020(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x24;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x1ff;
      uVar9 = (ushort)(uVar3 >> 9) & 0x1ff;
      sVar4 = ((uVar3 & 0x1ff) != 0) + ((uVar3 >> 9 & 0x1ff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x12) & 0x1ff;
      sVar5 = sVar4 + ((uVar3 >> 0x12 & 0x1ff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x1b) & 0x1ff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x1b & 0x1ff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x1ff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 9;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x1ff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x1ff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4e260 FUN_144f4e260 body=561 status=ok
// SIG undefined FUN_144f4e260(void)

ulonglong FUN_144f4e260(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x28;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x3ff;
      uVar9 = (ushort)(uVar3 >> 10) & 0x3ff;
      sVar4 = ((uVar3 & 0x3ff) != 0) + ((uVar3 >> 10 & 0x3ff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x14) & 0x3ff;
      sVar5 = sVar4 + ((uVar3 >> 0x14 & 0x3ff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x1e) & 0x3ff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x1e & 0x3ff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x3ff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 10;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x3ff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x3ff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4e4a0 FUN_144f4e4a0 body=561 status=ok
// SIG undefined FUN_144f4e4a0(void)

ulonglong FUN_144f4e4a0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x2c;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x7ff;
      uVar9 = (ushort)(uVar3 >> 0xb) & 0x7ff;
      sVar4 = ((uVar3 & 0x7ff) != 0) + ((uVar3 >> 0xb & 0x7ff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x16) & 0x7ff;
      sVar5 = sVar4 + ((uVar3 >> 0x16 & 0x7ff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x21) & 0x7ff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x21 & 0x7ff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x7ff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xb;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x7ff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x7ff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4e6e0 FUN_144f4e6e0 body=561 status=ok
// SIG undefined FUN_144f4e6e0(void)

ulonglong FUN_144f4e6e0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x30;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0xfff;
      uVar9 = (ushort)(uVar3 >> 0xc) & 0xfff;
      sVar4 = ((uVar3 & 0xfff) != 0) + ((uVar3 >> 0xc & 0xfff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x18) & 0xfff;
      sVar5 = sVar4 + ((uVar3 & 0xfff000000) != 0);
      uVar7 = (ushort)(uVar3 >> 0x24) & 0xfff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x24 & 0xfff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0xfff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xc;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0xfff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0xfff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4e920 FUN_144f4e920 body=561 status=ok
// SIG undefined FUN_144f4e920(void)

ulonglong FUN_144f4e920(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x34;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x1fff;
      uVar9 = (ushort)(uVar3 >> 0xd) & 0x1fff;
      sVar4 = ((uVar3 & 0x1fff) != 0) + ((uVar3 >> 0xd & 0x1fff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x1a) & 0x1fff;
      sVar5 = sVar4 + ((uVar3 >> 0x1a & 0x1fff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x27) & 0x1fff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x27 & 0x1fff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x1fff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xd;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x1fff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x1fff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4eb60 FUN_144f4eb60 body=561 status=ok
// SIG undefined FUN_144f4eb60(void)

ulonglong FUN_144f4eb60(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = (float *)(param_1 + 8);
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x38;
      uVar3 = *(ulonglong *)(uVar3 + param_2) >> (bVar11 & 7);
      uVar8 = *(uint *)((param_4 >> 3) + param_2) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x3fff;
      uVar9 = (ushort)(uVar3 >> 0xe) & 0x3fff;
      sVar4 = ((uVar3 & 0x3fff) != 0) + ((uVar3 >> 0xe & 0x3fff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x1c) & 0x3fff;
      sVar5 = sVar4 + ((uVar3 >> 0x1c & 0x3fff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x2a) & 0x3fff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x2a & 0x3fff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x3fff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xe;
    uVar8 = *(uint *)(uVar3 + param_2) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x3fff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x3fff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(uVar3 + param_2) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    *(float *)(param_1 + uVar12 * 4) = (float)(int)(short)uVar1;
  }
  return param_4;
}



// FUNCTION 144f4eda0 FUN_144f4eda0 body=1379 status=ok
// SIG undefined FUN_144f4eda0(void)

void FUN_144f4eda0(float *param_1,uint param_2,uint param_3,longlong *param_4,longlong param_5,
                  int param_6)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint local_c8;
  longlong *local_c0;
  float local_b8 [28];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar6 = (ulonglong)param_3;
  uVar12 = 0x40 - (int)param_4[2];
  uVar14 = (ulonglong)uVar12;
  lVar17 = *param_4 + -8;
  uVar15 = 0;
  uVar16 = (ulonglong)(uint)((param_6 - (int)lVar17) * 8);
  local_c8 = param_2;
  local_c0 = param_4;
  if (uVar16 < ((param_3 * 8 + 0x3a) + uVar14 & 0xfffffffffffffff8)) {
LAB_144f4f2c6:
    uVar15 = (ulonglong)(local_c8 * 4) + 0x1f >> 5;
    do {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1 = param_1 + 8;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  else {
    uVar12 = (uint)(*(ulonglong *)((ulonglong)(uVar12 >> 3) + lVar17) >> ((byte)uVar12 & 7));
    uVar8 = uVar12 & 0x1fffffff;
    fVar18 = (float)(uVar8 >> 5 & 0x77fffff) *
             *(float *)(&DAT_14c727120 + (ulonglong)(uVar12 & 0x1f) * 4);
    if (uVar8 >> 0x1c != 0) {
      fVar18 = -fVar18;
    }
    *param_1 = fVar18;
    uVar13 = uVar14 + 0x3a;
    uVar12 = (uint)(*(ulonglong *)((uVar14 + 0x1d >> 3) + lVar17) >> ((byte)(uVar14 + 0x1d) & 7));
    uVar8 = uVar12 & 0x1fffffff;
    fVar18 = (float)(uVar8 >> 5 & 0x77fffff) *
             *(float *)(&DAT_14c727120 + (ulonglong)(uVar12 & 0x1f) * 4);
    if (uVar8 >> 0x1c != 0) {
      fVar18 = -fVar18;
    }
    param_1[1] = fVar18;
    local_b8[0] = 0.0;
    if (3 < uVar6) {
      do {
        uVar12 = *(uint *)((uVar13 >> 3) + lVar17) >> ((byte)uVar13 & 7) & 0x7f;
        if (0x5f < uVar12) {
          uVar12 = 0x5f;
        }
        uVar8 = *(uint *)((uVar13 + 7 >> 3) + lVar17) >> ((byte)(uVar13 + 7) & 7) & 0x7f;
        local_b8[uVar15 + 1] = *(float *)(&DAT_14c726fa0 + (ulonglong)uVar12 * 4);
        if (0x5f < uVar8) {
          uVar8 = 0x5f;
        }
        uVar14 = uVar13 + 0x15;
        uVar12 = *(uint *)((uVar13 + 0xe >> 3) + lVar17) >> ((byte)(uVar13 + 0xe) & 7) & 0x7f;
        local_b8[uVar15 + 2] = *(float *)(&DAT_14c726fa0 + (ulonglong)uVar8 * 4);
        if (0x5f < uVar12) {
          uVar12 = 0x5f;
        }
        uVar13 = uVar13 + 0x1c;
        uVar8 = *(uint *)((uVar14 >> 3) + lVar17) >> ((byte)uVar14 & 7) & 0x7f;
        local_b8[uVar15 + 3] = *(float *)(&DAT_14c726fa0 + (ulonglong)uVar12 * 4);
        uVar14 = (ulonglong)uVar8;
        if (0x5f < uVar8) {
          uVar14 = 0x5f;
        }
        local_b8[uVar15 + 4] = *(float *)(&DAT_14c726fa0 + uVar14 * 4);
        uVar15 = uVar15 + 4;
      } while (uVar15 < uVar6 - 3);
    }
    for (; uVar15 < uVar6; uVar15 = uVar15 + 1) {
      bVar11 = (byte)uVar13;
      uVar14 = uVar13 >> 3;
      uVar13 = uVar13 + 7;
      uVar12 = *(uint *)(uVar14 + lVar17) >> (bVar11 & 7) & 0x7f;
      uVar14 = (ulonglong)uVar12;
      if (0x5f < uVar12) {
        uVar14 = 0x5f;
      }
      local_b8[uVar15 + 1] = *(float *)(&DAT_14c726fa0 + uVar14 * 4);
    }
    uVar6 = (ulonglong)param_2;
    lVar7 = 0;
    uVar15 = 2;
    if (2 < uVar6) {
      do {
        if (uVar16 < (uVar13 + 9 & 0xfffffffffffffff8)) goto LAB_144f4f2c6;
        uVar12 = *(uint *)((uVar13 >> 3) + lVar17) >> ((byte)uVar13 & 7);
        if ((uVar12 & 1) == 0) {
          uVar13 = uVar13 + 5;
          lVar4 = 8;
          uVar8 = uVar12 >> 1;
        }
        else {
          uVar13 = uVar13 + 9;
          uVar8 = uVar12 >> 5;
          lVar4 = (ulonglong)(byte)(&DAT_14c726f20)[uVar12 >> 1 & 0xf] << 3;
        }
        uVar14 = uVar6;
        if (lVar4 + uVar15 <= uVar6) {
          uVar14 = lVar4 + uVar15;
        }
        uVar9 = uVar14 - uVar15;
        uVar12 = uVar8 & 0xf;
        if (uVar12 == 0) {
          uVar9 = uVar9 * 4 + 0x1f >> 5;
          pfVar2 = param_1 + uVar15;
          do {
            pfVar2[0] = 0.0;
            pfVar2[1] = 0.0;
            pfVar2[2] = 0.0;
            pfVar2[3] = 0.0;
            pfVar2[4] = 0.0;
            pfVar2[5] = 0.0;
            pfVar2[6] = 0.0;
            pfVar2[7] = 0.0;
            pfVar2 = pfVar2 + 8;
            uVar9 = uVar9 - 1;
            uVar15 = uVar14;
          } while (uVar9 != 0);
        }
        else {
          uVar10 = uVar12 * uVar9 + uVar13;
          if (uVar16 < ((uVar14 - uVar15) + uVar10 & 0xfffffffffffffff8)) goto LAB_144f4f2c6;
          uVar10 = uVar10 & 0xfffffffffffffff8;
          if (((byte)DAT_14c7fc6b4 & 0x20) == 0) {
            if (uVar16 < uVar10 + 8) goto LAB_144f4f2c6;
            local_e0 = CONCAT44(local_e0._4_4_,uVar8) & 0xffffffff0000000f;
            local_e8 = uVar9;
            uVar12 = FUN_144f4c2f0(param_1 + uVar15,lVar17,uVar13);
            uVar13 = (ulonglong)uVar12;
          }
          else {
            if (uVar16 < uVar10 + 0x10) goto LAB_144f4f2c6;
            local_e8 = uVar16;
            local_e0 = uVar9;
            local_d8 = uVar12;
            uVar13 = FUN_144f4bf00(param_1 + uVar15,lVar17,uVar13);
          }
joined_r0x000144f4f153:
          uVar9 = uVar15;
          uVar15 = uVar9;
          if (uVar9 < uVar14) {
            iVar1 = *(int *)(param_5 + lVar7 * 4);
            while ((uint)(iVar1 * 2) <= uVar9) {
              lVar4 = lVar7 * 4;
              lVar7 = lVar7 + 1;
              iVar1 = *(int *)(param_5 + 4 + lVar4);
            }
            fVar18 = local_b8[lVar7];
            uVar10 = 0;
            uVar15 = (ulonglong)(uint)(*(int *)(param_5 + lVar7 * 4) * 2);
            if (uVar14 < uVar15) {
              uVar15 = uVar14;
            }
            uVar5 = uVar15 - uVar9;
            if ((uVar5 & 0xfffffffffffffff8) != 0) {
              lVar4 = ((uVar5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
              uVar10 = lVar4 * 8;
              pfVar2 = param_1 + uVar9;
              do {
                pfVar2[4] = pfVar2[4] * fVar18;
                pfVar2[5] = pfVar2[5] * fVar18;
                pfVar2[6] = pfVar2[6] * fVar18;
                pfVar2[7] = pfVar2[7] * fVar18;
                *pfVar2 = *pfVar2 * fVar18;
                pfVar2[1] = pfVar2[1] * fVar18;
                pfVar2[2] = pfVar2[2] * fVar18;
                pfVar2[3] = pfVar2[3] * fVar18;
                lVar4 = lVar4 + -1;
                pfVar2 = pfVar2 + 8;
              } while (lVar4 != 0);
            }
            if ((uVar5 - uVar10 < 8) && (uVar10 < uVar5)) {
              fVar18 = local_b8[lVar7];
              if (3 < uVar5 - uVar10) {
                lVar4 = uVar9 + 2 + uVar10;
                lVar3 = ((uVar5 - uVar10) - 4 >> 2) + 1;
                uVar10 = uVar10 + lVar3 * 4;
                pfVar2 = param_1 + lVar4;
                do {
                  pfVar2[-2] = pfVar2[-2] * fVar18;
                  pfVar2[-1] = pfVar2[-1] * fVar18;
                  *pfVar2 = *pfVar2 * fVar18;
                  pfVar2[1] = pfVar2[1] * fVar18;
                  lVar3 = lVar3 + -1;
                  pfVar2 = pfVar2 + 4;
                } while (lVar3 != 0);
                if (uVar5 <= uVar10) goto joined_r0x000144f4f153;
              }
              lVar4 = uVar5 - uVar10;
              pfVar2 = param_1 + uVar10 + uVar9;
              do {
                *pfVar2 = fVar18 * *pfVar2;
                lVar4 = lVar4 + -1;
                pfVar2 = pfVar2 + 1;
              } while (lVar4 != 0);
            }
            goto joined_r0x000144f4f153;
          }
        }
      } while (uVar15 < uVar6);
    }
    uVar12 = (uint)uVar13 & 0x3f;
    uVar15 = *(ulonglong *)(lVar17 + (uVar13 >> 6) * 8);
    *(uint *)(local_c0 + 2) = 0x40 - uVar12;
    local_c0[1] = uVar15 >> (sbyte)uVar12;
    *local_c0 = lVar17 + ((uVar13 >> 6) + 1) * 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144f4f320 FUN_144f4f320 body=2122 status=ok
// SIG undefined FUN_144f4f320(void)

void FUN_144f4f320(float *param_1,uint param_2,uint param_3,longlong *param_4,longlong param_5,
                  ulonglong param_6)

{
  int iVar1;
  ulonglong *puVar2;
  byte bVar3;
  sbyte sVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float local_f8 [2];
  uint local_f0;
  uint local_ec;
  float *local_e8;
  uint local_e0;
  ulonglong *local_d8;
  float *local_d0;
  int *local_c8;
  longlong *local_c0;
  float local_b8 [28];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_f8;
  local_d8 = (ulonglong *)*param_4;
  uVar19 = param_4[1];
  local_c0 = param_4;
  local_ec = param_2;
  uVar17 = *(uint *)(param_4 + 2);
  local_e8 = param_1;
  if (uVar17 < 0x1d) {
    uVar12 = uVar17 + 0x23;
    uVar13 = *local_d8 >> (0x1d - (byte)uVar17 & 0x3f);
    uVar19 = uVar19 | *local_d8 << ((byte)uVar17 & 0x3f);
    puVar16 = local_d8 + 1;
  }
  else {
    uVar13 = uVar19 >> 0x1d;
    uVar12 = uVar17 - 0x1d;
    puVar16 = local_d8;
  }
  uVar17 = (uint)uVar19 & 0x1fffffff;
  uVar18 = (uint)uVar13;
  fVar21 = (float)(uVar17 >> 5 & 0x77fffff) *
           *(float *)(&DAT_14c727120 + (ulonglong)((uint)uVar19 & 0x1f) * 4);
  if (uVar17 >> 0x1c != 0) {
    fVar21 = -fVar21;
  }
  *param_1 = fVar21;
  if (uVar12 < 0x1d) {
    uVar19 = *puVar16;
    uVar17 = uVar12 + 0x23;
    puVar16 = puVar16 + 1;
    uVar13 = uVar19 >> (0x1d - (byte)uVar12 & 0x3f);
    uVar18 = (uint)(uVar19 << ((byte)uVar12 & 0x3f)) | uVar18;
  }
  else {
    uVar13 = uVar13 >> 0x1d;
    uVar17 = uVar12 - 0x1d;
  }
  fVar21 = (float)((uVar18 & 0x1fffffff) >> 5 & 0x77fffff) *
           *(float *)(&DAT_14c727120 + (ulonglong)(uVar18 & 0x1f) * 4);
  if ((uVar18 & 0x1fffffff) >> 0x1c != 0) {
    fVar21 = -fVar21;
  }
  uVar12 = 0;
  param_1[1] = fVar21;
  local_b8[0] = 0.0;
  uVar18 = param_2;
  if (3 < param_3) {
    uVar12 = (param_3 - 4 >> 2) + 1;
    uVar20 = (ulonglong)uVar12;
    uVar12 = uVar12 * 4;
    uVar19 = 2;
    do {
      if (uVar17 < 8) {
        uVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar18 = uVar17 + 0x38;
        uVar14 = uVar15 >> (8 - (byte)uVar17 & 0x3f);
        uVar13 = uVar13 | uVar15 << ((byte)uVar17 & 0x3f);
      }
      else {
        uVar14 = uVar13 >> 8;
        uVar18 = uVar17 - 8;
      }
      uVar13 = uVar13 & 0xff;
      iVar1 = (int)uVar19;
      if (0x5f < (uint)uVar13) {
        uVar13 = 0x5f;
      }
      local_b8[iVar1 - 1] = *(float *)(&DAT_14c726fa0 + uVar13 * 4);
      if (uVar18 < 8) {
        uVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar17 = uVar18 + 0x38;
        uVar13 = uVar15 >> (8 - (byte)uVar18 & 0x3f);
        uVar14 = uVar14 | uVar15 << ((byte)uVar18 & 0x3f);
      }
      else {
        uVar13 = uVar14 >> 8;
        uVar17 = uVar18 - 8;
      }
      uVar14 = uVar14 & 0xff;
      if (0x5f < (uint)uVar14) {
        uVar14 = 0x5f;
      }
      local_b8[uVar19] = *(float *)(&DAT_14c726fa0 + uVar14 * 4);
      if (uVar17 < 8) {
        uVar19 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar18 = uVar17 + 0x38;
        uVar14 = uVar19 >> (8 - (byte)uVar17 & 0x3f);
        uVar13 = uVar13 | uVar19 << ((byte)uVar17 & 0x3f);
      }
      else {
        uVar14 = uVar13 >> 8;
        uVar18 = uVar17 - 8;
      }
      uVar13 = uVar13 & 0xff;
      if (0x5f < (uint)uVar13) {
        uVar13 = 0x5f;
      }
      local_b8[iVar1 + 1] = *(float *)(&DAT_14c726fa0 + uVar13 * 4);
      if (uVar18 < 8) {
        uVar19 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar17 = uVar18 + 0x38;
        uVar13 = uVar19 >> (8 - (byte)uVar18 & 0x3f);
        uVar14 = uVar14 | uVar19 << ((byte)uVar18 & 0x3f);
      }
      else {
        uVar13 = uVar14 >> 8;
        uVar17 = uVar18 - 8;
      }
      uVar14 = uVar14 & 0xff;
      if (0x5f < (uint)uVar14) {
        uVar14 = 0x5f;
      }
      uVar19 = (ulonglong)(iVar1 + 4);
      local_b8[iVar1 + 2] = *(float *)(&DAT_14c726fa0 + uVar14 * 4);
      uVar20 = uVar20 - 1;
      param_1 = local_e8;
      uVar18 = local_ec;
    } while (uVar20 != 0);
  }
  uVar19 = (ulonglong)uVar18;
  if (uVar12 < param_3) {
    uVar14 = (ulonglong)(param_3 - uVar12);
    pfVar10 = local_b8 + (uVar12 + 1);
    uVar20 = uVar13;
    do {
      if (uVar17 < 8) {
        uVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        bVar3 = (byte)uVar17;
        uVar17 = uVar17 + 0x38;
        uVar13 = uVar15 >> (8 - bVar3 & 0x3f);
        uVar20 = uVar20 | uVar15 << (bVar3 & 0x3f);
      }
      else {
        uVar13 = uVar20 >> 8;
        uVar17 = uVar17 - 8;
      }
      uVar20 = uVar20 & 0xff;
      if (0x5f < (uint)uVar20) {
        uVar20 = 0x5f;
      }
      *pfVar10 = *(float *)(&DAT_14c726fa0 + uVar20 * 4);
      pfVar10 = pfVar10 + 1;
      uVar14 = uVar14 - 1;
      uVar20 = uVar13;
      param_1 = local_e8;
    } while (uVar14 != 0);
  }
  uVar20 = 0;
  uVar14 = 2;
  if (2 < uVar18) {
    do {
      uVar15 = uVar13;
      if (uVar17 < 9) {
        uVar15 = uVar13 | *puVar16 << ((byte)uVar17 & 0x3f);
        uVar12 = 0x40 - uVar17 >> 3;
        puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar12);
        uVar17 = uVar17 + uVar12 * 8;
      }
      uVar18 = (uint)(uVar15 >> 1);
      uVar9 = uVar18 & 0x7fffffff;
      uVar12 = (uint)uVar14;
      if ((uVar15 & 1) == 0) {
        uVar13 = uVar15 >> 5;
        uVar18 = uVar12 + 8;
        uVar17 = uVar17 - 5;
      }
      else {
        uVar13 = uVar15 >> 9;
        uVar17 = uVar17 - 9;
        uVar9 = (uint)(uVar15 >> 5) & 0x7ffffff;
        uVar18 = uVar12 + (uint)(byte)(&DAT_14c726f20)[uVar18 & 0xf] * 8;
      }
      uVar15 = (ulonglong)uVar18;
      if ((uint)uVar19 < uVar18) {
        uVar15 = uVar19;
      }
      local_e0 = (uint)uVar15;
      uVar9 = uVar9 & 0xf;
      puVar2 = puVar16;
      uVar11 = uVar15;
      if (uVar9 == 0) {
LAB_144f4f72f:
        puVar16 = puVar2;
        uVar15 = (ulonglong)(((int)uVar11 - uVar12) * 4) + 0x1f >> 5;
        pauVar5 = (undefined1 (*) [16])(param_1 + (uVar14 & 0xffffffff));
        do {
          *pauVar5 = ZEXT816(0);
          pauVar5[1] = ZEXT816(0);
          pauVar5 = pauVar5 + 2;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      else {
        sVar4 = (sbyte)uVar9;
        uVar18 = (1 << sVar4) - 1;
        puVar2 = local_d8;
        uVar11 = uVar19;
        if (param_6 < (ulonglong)((local_e0 - uVar12) * (uVar9 + 1) + 9 >> 3) + (longlong)puVar16)
        goto LAB_144f4f72f;
        uVar11 = uVar14;
        if (uVar12 < local_e0) {
          local_c8 = (int *)(param_5 + uVar20 * 4);
          do {
            iVar1 = *local_c8;
            while ((uint)(iVar1 * 2) <= (uint)uVar14) {
              uVar20 = (ulonglong)((int)uVar20 + 1);
              iVar1 = *(int *)(param_5 + uVar20 * 4);
            }
            uVar12 = *(int *)(param_5 + uVar20 * 4) * 2;
            local_c8 = (int *)(param_5 + uVar20 * 4);
            local_f8[0] = local_b8[uVar20];
            uVar19 = (ulonglong)uVar12;
            if (local_e0 < uVar12) {
              uVar19 = uVar15;
            }
            local_f8[1] = -local_b8[uVar20];
            local_f0 = (uint)uVar19;
            pfVar10 = param_1 + (uVar14 & 0xffffffff);
            local_d0 = param_1 + uVar19;
            if ((local_f0 < (uint)uVar14 + 4) || (0xe < uVar9 + 1)) {
LAB_144f4f95d:
              uVar12 = uVar9 + 1;
              uVar14 = uVar19;
              if (pfVar10 < local_d0) {
                if (0xf < ((longlong)local_d0 + (3 - (longlong)pfVar10) & 0xfffffffffffffffcU)) {
                  do {
                    if (uVar17 < uVar12) {
                      uVar13 = uVar13 | *puVar16 << ((byte)uVar17 & 0x3f);
                      uVar6 = 0x40 - uVar17 >> 3;
                      puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar6);
                      uVar17 = uVar17 + uVar6 * 8;
                    }
                    uVar6 = (uint)uVar13 & uVar18;
                    uVar19 = (uVar13 >> sVar4) >> (uVar6 != 0);
                    uVar17 = uVar17 - ((uVar6 != 0) + uVar9);
                    *pfVar10 = (float)(int)uVar6 * local_f8[(uint)(uVar13 >> sVar4) & 1];
                    if (uVar17 < uVar12) {
                      uVar19 = uVar19 | *puVar16 << ((byte)uVar17 & 0x3f);
                      uVar6 = 0x40 - uVar17 >> 3;
                      puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar6);
                      uVar17 = uVar17 + uVar6 * 8;
                    }
                    uVar6 = (uint)uVar19 & uVar18;
                    uVar13 = (uVar19 >> sVar4) >> (uVar6 != 0);
                    uVar17 = uVar17 - ((uVar6 != 0) + uVar9);
                    pfVar10[1] = (float)(int)uVar6 * local_f8[(uint)(uVar19 >> sVar4) & 1];
                    if (uVar17 < uVar12) {
                      uVar13 = uVar13 | *puVar16 << ((byte)uVar17 & 0x3f);
                      uVar6 = 0x40 - uVar17 >> 3;
                      puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar6);
                      uVar17 = uVar17 + uVar6 * 8;
                    }
                    uVar6 = (uint)uVar13 & uVar18;
                    uVar19 = (uVar13 >> sVar4) >> (uVar6 != 0);
                    uVar17 = uVar17 - ((uVar6 != 0) + uVar9);
                    pfVar10[2] = (float)(int)uVar6 * local_f8[(uint)(uVar13 >> sVar4) & 1];
                    if (uVar17 < uVar12) {
                      uVar19 = uVar19 | *puVar16 << ((byte)uVar17 & 0x3f);
                      uVar6 = 0x40 - uVar17 >> 3;
                      puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar6);
                      uVar17 = uVar17 + uVar6 * 8;
                    }
                    uVar6 = (uint)uVar19 & uVar18;
                    uVar13 = (uVar19 >> sVar4) >> (uVar6 != 0);
                    uVar17 = uVar17 - ((uVar6 != 0) + uVar9);
                    pfVar10[3] = (float)(int)uVar6 * local_f8[(uint)(uVar19 >> sVar4) & 1];
                    pfVar10 = pfVar10 + 4;
                  } while (pfVar10 < local_d0 + -3);
                  if (local_d0 <= pfVar10) goto LAB_144f4fb5b;
                }
                do {
                  if (uVar17 < uVar12) {
                    uVar13 = uVar13 | *puVar16 << ((byte)uVar17 & 0x3f);
                    uVar6 = 0x40 - uVar17 >> 3;
                    puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar6);
                    uVar17 = uVar17 + uVar6 * 8;
                  }
                  uVar19 = uVar13 >> sVar4;
                  uVar6 = (uint)uVar13 & uVar18;
                  uVar13 = uVar19 >> (uVar6 != 0);
                  uVar17 = uVar17 - ((uVar6 != 0) + uVar9);
                  *pfVar10 = (float)(int)uVar6 * local_f8[(uint)uVar19 & 1];
                  pfVar10 = pfVar10 + 1;
                } while (pfVar10 < local_d0);
              }
            }
            else {
              do {
                if (uVar17 < (uVar9 + 1) * 4) {
                  uVar13 = uVar13 | *puVar16 << ((byte)uVar17 & 0x3f);
                  uVar12 = 0x40 - uVar17 >> 3;
                  puVar16 = (ulonglong *)((longlong)puVar16 + (ulonglong)uVar12);
                  uVar17 = uVar17 + uVar12 * 8;
                }
                uVar12 = (uint)uVar13 & uVar18;
                *pfVar10 = (float)(int)uVar12 * local_f8[(uint)(uVar13 >> sVar4) & 1];
                uVar14 = (uVar13 >> sVar4) >> (uVar12 != 0);
                uVar6 = (uint)uVar14 & uVar18;
                uVar14 = uVar14 >> sVar4;
                pfVar10[1] = (float)(int)uVar6 * local_f8[(uint)uVar14 & 1];
                uVar14 = uVar14 >> (uVar6 != 0);
                uVar7 = (uint)uVar14 & uVar18;
                uVar14 = uVar14 >> sVar4;
                pfVar10[2] = (float)(int)uVar7 * local_f8[(uint)uVar14 & 1];
                uVar14 = uVar14 >> (uVar7 != 0);
                uVar8 = (uint)uVar14 & uVar18;
                uVar14 = uVar14 >> sVar4;
                uVar13 = uVar14 >> (uVar8 != 0);
                uVar17 = (((uVar17 + (uVar9 * -4 - (uint)(uVar12 != 0))) - (uint)(uVar6 != 0)) -
                         (uint)(uVar7 != 0)) - (uint)(uVar8 != 0);
                pfVar10[3] = (float)(int)uVar8 * local_f8[(uint)uVar14 & 1];
                pfVar10 = pfVar10 + 4;
              } while (pfVar10 <= local_d0 + -4);
              uVar14 = (longlong)local_d0 - (longlong)pfVar10 >> 2;
              if ((uint)uVar14 < local_f0) goto LAB_144f4f95d;
            }
LAB_144f4fb5b:
            param_1 = local_e8;
          } while ((uint)uVar14 < local_e0);
          uVar19 = (ulonglong)param_2;
          uVar11 = uVar14;
        }
      }
      uVar14 = uVar11;
    } while ((uint)uVar11 < (uint)uVar19);
  }
  *param_4 = (longlong)puVar16;
  param_4[1] = uVar13;
  *(uint *)(param_4 + 2) = uVar17;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)local_f8);
}



// FUNCTION 144f4fb90 FUN_144f4fb90 body=174 status=ok
// SIG undefined FUN_144f4fb90(void)

void FUN_144f4fb90(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(uint *)(param_1 + 4) = (int)param_1[4] + param_3;
  uVar4 = *(uint *)((longlong)param_1 + 0x1c);
  if (uVar4 != 0) {
    if (param_3 < uVar4) {
      *(undefined4 *)(param_1 + 3) = 0;
      *(uint *)((longlong)param_1 + 0x1c) = uVar4 - param_3;
      return;
    }
    param_3 = param_3 - uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    param_2 = param_2 + (ulonglong)uVar4;
  }
  uVar4 = *(uint *)(param_1 + 3);
  if (param_3 <= *(uint *)(param_1 + 3)) {
    uVar4 = param_3;
  }
  uVar2 = (int)param_1[2] - (int)*param_1;
  *(uint *)(param_1 + 3) = uVar4;
  lVar1 = *param_1;
  if (uVar4 < uVar2) {
    uVar2 = uVar4;
  }
  uVar3 = (ulonglong)uVar2;
  if (param_2 == lVar1) {
    *param_1 = (ulonglong)uVar4 + lVar1;
  }
  else {
    FUN_144f4be80(lVar1,param_2,uVar3);
    *param_1 = *param_1 + uVar3;
    uVar4 = uVar4 - uVar2;
    uVar5 = (ulonglong)uVar4;
    if (uVar4 != 0) {
      *param_1 = param_1[1];
      FUN_144f4be80(param_1[1],uVar3 + param_2,uVar4);
      *param_1 = *param_1 + uVar5;
      return;
    }
  }
  return;
}



// FUNCTION 144f4fc40 FUN_144f4fc40 body=185 status=ok
// SIG undefined FUN_144f4fc40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f4fc40(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 param_5,undefined8 param_6,uint param_7,int param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 uStackX_27;
  undefined8 auStack_50 [5];
  ulonglong auStack_28 [4];
  
  auStack_28[2] = DAT_14c707940 ^ (ulonglong)(auStack_28 + 2);
  param_4 = param_4 & 0xffffffff;
  uVar2 = param_4 * 4 + 0x4f;
  if (uVar2 <= param_4 * 4 + 0x40) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x144f4fc95;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  *(ulonglong *)((longlong)auStack_28 + lVar1) = param_4;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fcba;
  FUN_1452ff930(param_2,param_5,(ulonglong)(&uStackX_27 + lVar1) & 0xffffffffffffffc0,param_3);
  uVar2 = (ulonglong)param_7;
  if (param_8 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fcd6;
    FUN_144f4bd90(param_2,param_6);
  }
  if ((int)uVar2 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fced;
    FUN_144f4be80(param_6,(param_4 * 2 - uVar2) + param_2);
  }
  uVar2 = auStack_28[2] ^ (ulonglong)(auStack_28 + 2);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_50 + lVar1) = &UNK_144f4fcf9;
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 144f4fd10 FUN_144f4fd10 body=212 status=ok
// SIG undefined FUN_144f4fd10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f4fd10(undefined4 param_1,int *param_2,undefined8 param_3,int param_4,undefined4 param_5
                  ,undefined8 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [64];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  local_28 = DAT_14c707940 ^ (ulonglong)&local_28;
  uVar2 = param_4 * 2;
  uVar1 = param_2[6];
  puVar6 = *(undefined1 **)param_2;
  uVar4 = uVar1;
  if ((uint)(param_2[4] - *param_2) <= uVar1) {
    uVar4 = param_2[4] - *param_2;
  }
  puVar5 = auStack_68;
  if (uVar4 < uVar2) {
    if (uVar1 - uVar4 < uVar2) {
      uVar3 = (ulonglong)(uVar2 + 0x10) + 0xf;
      if (uVar3 <= uVar2 + 0x10) {
        uVar3 = 0xffffffffffffff0;
      }
      puVar5 = auStack_68 + -(uVar3 & 0xfffffffffffffff0);
      puVar6 = auStack_20 + -(uVar3 & 0xfffffffffffffff0);
    }
    else {
      puVar6 = *(undefined1 **)(param_2 + 2);
      puVar5 = auStack_68;
    }
  }
  *(undefined4 *)(puVar5 + 0x38) = param_8;
  *(int *)(puVar5 + 0x30) = param_7;
  *(undefined8 *)(puVar5 + 0x28) = param_6;
  *(undefined4 *)(puVar5 + 0x20) = param_5;
  *(undefined8 *)(puVar5 + -8) = 0x144f4fdc8;
  FUN_144f4fc40(param_1,puVar6);
  *(undefined8 *)(puVar5 + -8) = 0x144f4fdd8;
  FUN_144f4fb90(param_2,puVar6,uVar2 - param_7);
  uVar3 = local_28 ^ (ulonglong)&local_28;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -8) = &UNK_144f4fde4;
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 144f4fe00 FUN_144f4fe00 body=228 status=ok
// SIG undefined FUN_144f4fe00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f4fe00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint param_5,undefined4 param_6,undefined8 param_7,uint param_8,int param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 auStack_50 [5];
  ulonglong auStack_28 [4];
  
  auStack_28[2] = DAT_14c707940 ^ (ulonglong)(auStack_28 + 2);
  uVar3 = (ulonglong)param_5;
  uVar2 = uVar3 * 4 + 0x4f;
  if (uVar2 <= uVar3 * 4 + 0x40) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x144f4fe5c;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  *(ulonglong *)((longlong)auStack_28 + lVar1 + 8) = uVar3;
  *(undefined8 *)((longlong)auStack_28 + lVar1) = param_4;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fe87;
  FUN_1452ffa00(param_3,param_3 + uVar3 * 2,param_6,
                (ulonglong)(&stack0x00000027 + lVar1) & 0xffffffffffffffc0);
  uVar2 = (ulonglong)param_8;
  if (param_9 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fea6;
    FUN_144f4bd90(param_3,param_7,uVar2);
  }
  if ((int)uVar2 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fec2;
    FUN_144f4be80(param_7,((ulonglong)(param_5 * 2) * 2 - uVar2) + param_3,uVar2 & 0xffffffff);
  }
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x144f4fed8;
  FUN_144f4fb90(param_2,param_3,param_5 * 4 - (int)uVar2);
  uVar2 = auStack_28[2] ^ (ulonglong)(auStack_28 + 2);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_50 + lVar1) = &UNK_144f4fee4;
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 144f4ff00 FUN_144f4ff00 body=882 status=ok
// SIG undefined FUN_144f4ff00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f4ff00(uint param_1,undefined4 param_2,int param_3,uint param_4,longlong *param_5,
                  longlong *param_6,undefined4 param_7,undefined8 param_8,uint param_9,int param_10,
                  longlong param_11)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  longlong alStack_98 [2];
  uint local_88 [8];
  uint local_68;
  int local_64;
  ulonglong *local_60;
  ulonglong local_58;
  uint local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  undefined1 uStack_29;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&local_68;
  uVar7 = (ulonglong)param_1;
  uVar6 = uVar7 * 4 + 0x6f;
  if (uVar6 <= uVar7 * 4 + 0x60) {
    uVar6 = 0xffffffffffffff0;
  }
  uStack_c0 = 0x144f4ff69;
  lVar2 = -(uVar6 & 0xfffffffffffffff0);
  puVar8 = auStack_b8 + lVar2;
  local_50 = 0x3e;
  uVar6 = (ulonglong)(&uStack_29 + lVar2) & 0xffffffffffffffc0;
  lVar9 = param_6[1] + 0x48;
  local_60 = (ulonglong *)*param_6 + 1;
  local_58 = *(ulonglong *)*param_6 >> 2;
  if (param_3 == 1) {
    *(longlong *)((longlong)alStack_98 + lVar2 + 8) = lVar9;
    *(undefined8 *)((longlong)alStack_98 + lVar2) = param_8;
    if ((param_4 & 4) == 0) {
      *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f4ffde;
      FUN_144f4f320(uVar6,uVar7,param_7,&local_60);
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f4ffd7;
      FUN_144f4eda0();
    }
    *(int *)((longlong)local_88 + lVar2 + 8) = param_10;
    *(uint *)((longlong)local_88 + lVar2) = param_9;
  }
  else {
    if ((param_4 & 2) == 0) {
      uVar11 = param_1 * 4;
      uVar1 = *(uint *)(param_5 + 3);
      uVar3 = (int)param_5[2] - (int)*param_5;
      lVar12 = *param_5;
      uVar10 = uVar1;
      if (uVar3 <= uVar1) {
        uVar10 = uVar3;
      }
      puVar8 = auStack_b8 + lVar2;
      if (uVar10 < uVar11) {
        if (uVar1 - uVar10 < uVar11) {
          uVar4 = (ulonglong)(uVar11 + 0x10) + 0xf;
          if (uVar4 <= uVar11 + 0x10) {
            uVar4 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f5016a;
          puVar8 = auStack_b8 + -(uVar4 & 0xfffffffffffffff0) + lVar2;
          lVar12 = (longlong)&local_60 + -(uVar4 & 0xfffffffffffffff0) + lVar2;
        }
        else {
          lVar12 = param_5[1];
          puVar8 = auStack_b8 + lVar2;
        }
      }
      *(longlong *)(puVar8 + 0x28) = lVar9;
      local_68 = param_4 & 4;
      *(undefined8 *)(puVar8 + 0x20) = param_8;
      if ((param_4 & 4) == 0) {
        *(undefined8 *)(puVar8 + -8) = 0x144f501b5;
        FUN_144f4f320(uVar6,uVar7,param_7,&local_60);
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x144f501ae;
        FUN_144f4eda0();
      }
      *(undefined4 *)(puVar8 + 0x38) = 0;
      *(undefined4 *)(puVar8 + 0x30) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined4 *)(puVar8 + 0x20) = param_2;
      *(undefined8 *)(puVar8 + -8) = 0x144f501dc;
      FUN_144f4fc40(param_4,lVar12 + uVar7 * 2,uVar6,uVar7);
      bVar13 = local_68 == 0;
      *(longlong *)(puVar8 + 0x28) = lVar9;
      *(undefined8 *)(puVar8 + 0x20) = param_8;
      if (bVar13) {
        *(undefined8 *)(puVar8 + -8) = 0x144f50204;
        FUN_144f4f320(uVar6,uVar7,param_7,&local_60);
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x144f501fd;
        FUN_144f4eda0();
      }
      *(int *)(puVar8 + 0x40) = param_10;
      *(uint *)(puVar8 + 0x38) = param_9;
      *(longlong *)(puVar8 + 0x30) = param_11;
      *(undefined4 *)(puVar8 + 0x28) = param_2;
      *(uint *)(puVar8 + 0x20) = param_1;
      *(undefined8 *)(puVar8 + -8) = 0x144f50243;
      FUN_144f4fe00(param_4,param_5,lVar12,uVar6);
      goto LAB_144f50243;
    }
    iVar5 = param_10 + -1;
    *(longlong *)((longlong)alStack_98 + lVar2 + 8) = lVar9;
    if (param_10 == 0) {
      iVar5 = 0;
    }
    *(undefined8 *)((longlong)alStack_98 + lVar2) = param_8;
    param_9 = param_9 >> 1;
    local_48 = *(uint *)((longlong)param_5 + 0x1c);
    local_44 = local_48 >> 1;
    *(uint *)((longlong)param_5 + 0x1c) = local_44;
    local_68 = param_4 & 4;
    local_64 = iVar5;
    if (local_68 == 0) {
      *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f50073;
      FUN_144f4f320(uVar6,uVar7,param_7,&local_60);
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f5006c;
      FUN_144f4eda0();
    }
    *(int *)((longlong)local_88 + lVar2 + 8) = local_64;
    *(uint *)((longlong)local_88 + lVar2) = param_9;
    *(longlong *)((longlong)alStack_98 + lVar2 + 8) = param_11;
    *(undefined4 *)((longlong)alStack_98 + lVar2) = param_2;
    *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f500a6;
    FUN_144f4fd10(param_4,param_5,uVar6,uVar7);
    iVar5 = local_48 - local_44;
    *(longlong *)((longlong)alStack_98 + lVar2 + 8) = lVar9;
    *(undefined8 *)((longlong)alStack_98 + lVar2) = param_8;
    *(int *)((longlong)param_5 + 0x1c) = *(int *)((longlong)param_5 + 0x1c) + iVar5;
    if (local_68 == 0) {
      *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f500de;
      FUN_144f4f320(uVar6,uVar7,param_7,&local_60);
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f500d7;
      FUN_144f4eda0();
    }
    param_11 = (ulonglong)param_9 + param_11;
    *(int *)((longlong)local_88 + lVar2 + 8) = local_64;
    *(uint *)((longlong)local_88 + lVar2) = param_9;
  }
  *(longlong *)((longlong)alStack_98 + lVar2 + 8) = param_11;
  *(undefined4 *)((longlong)alStack_98 + lVar2) = param_2;
  *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144f50114;
  FUN_144f4fd10(param_4,param_5,uVar6,uVar7);
LAB_144f50243:
  *param_6 = *param_6 +
             ((longlong)local_60 + (-*param_6 - (ulonglong)(local_50 >> 3)) + 3 & 0xfffffffffffffffc
             );
  uVar6 = local_40 ^ (ulonglong)&local_68;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_144f50272;
  FUN_144d8e3a0(uVar6);
}



// FUNCTION 144f502a0 FUN_144f502a0 body=1085 status=ok
// SIG undefined FUN_144f502a0(void)

void FUN_144f502a0(int *param_1,char param_2,char param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  ushort local_res10 [4];
  ushort local_res18 [4];
  undefined8 local_238;
  code *local_230;
  ushort *local_228;
  undefined8 local_218 [20];
  undefined1 local_178 [336];
  
  pbVar2 = *(byte **)param_1;
  iVar4 = 0;
  bVar7 = 0x75;
  if (param_2 != '\0') {
    bVar7 = 100;
  }
  local_res10[0] = 0x3f;
  if (pbVar2 == *(byte **)(param_1 + 2)) {
    local_res10[0] = (ushort)bVar7;
    FUN_144be06b0(param_4,&DAT_149c0db0c,0xffffffff);
    goto LAB_144f5069e;
  }
  bVar1 = *pbVar2;
  if (((byte)(bVar1 - 0x44) < 0x32) &&
     ((0x2002100020021U >> ((ulonglong)(bVar1 - 0x44) & 0x3f) & 1) != 0)) {
    local_res10[0] = (ushort)bVar7;
    if ((bVar1 + 0xbc & 0xdf) != 0) {
      local_res18[0] = (ushort)bVar1;
      if (DAT_14c797ae8 < 2) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 == '\0') goto LAB_144f5061d;
      }
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar5 = FUN_144bdc640(local_218);
        local_238 = 1;
        local_230 = FUN_144f50ca0;
        local_228 = local_res18;
        lVar6 = FUN_144bdc480(uVar5,
                              "Deprecated integer extra format specifier \'{}\'; use \'D\' (decimal) instead."
                              ,&local_238,0);
        *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0xaf;
        FUN_144bdc690(local_218);
      }
      else {
        uVar5 = FUN_144bdc810(local_178,&DAT_14c797a98,2);
        local_238 = 1;
        local_230 = FUN_144f50ca0;
        local_228 = local_res18;
        lVar6 = FUN_144bdc480(uVar5,
                              "Deprecated integer extra format specifier \'{}\'; use \'D\' (decimal) instead."
                              ,&local_238,0);
        *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0xaf;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  else {
    if ((bVar1 + 0xa8 & 0xdf) == 0) {
      local_res10[0] = (ushort)bVar1;
      if (param_2 == '\0') goto LAB_144f5061d;
      if (DAT_14c797ae8 == 0) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 == '\0') goto LAB_144f50617;
      }
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar5 = FUN_144bdc640(local_218);
        local_238 = 1;
        local_230 = FUN_144f50ca0;
        local_228 = local_res10;
        lVar6 = FUN_144bdc480(uVar5,
                              "Cannot format negative integer with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                              ,&local_238,0);
        *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0xb7;
        FUN_144bdc690(local_218);
        goto LAB_144f50617;
      }
      uVar5 = FUN_144bdc810(local_178,&DAT_14c797a98,1);
      local_238 = 1;
      local_230 = FUN_144f50ca0;
      local_228 = local_res10;
      lVar6 = FUN_144bdc480(uVar5,
                            "Cannot format negative integer with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                            ,&local_238,0);
      *(undefined8 *)(lVar6 + 0x40) = 0xb7;
LAB_144f50603:
      *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
      FUN_144bdc8a0(local_178);
    }
    else {
      local_res18[0] = (ushort)bVar1;
      if (DAT_14c797ae8 == 0) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 != '\0') goto LAB_144f5045d;
      }
      else {
LAB_144f5045d:
        cVar3 = FUN_144bdbf80();
        if (cVar3 != '\0') {
          uVar5 = FUN_144bdc810(local_178,&DAT_14c797a98,1);
          local_238 = 1;
          local_230 = FUN_144f50ca0;
          local_228 = local_res18;
          lVar6 = FUN_144bdc480(uVar5,
                                "Invalid integer extra format specifier \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                                ,&local_238,0);
          *(undefined8 *)(lVar6 + 0x40) = 0xbf;
          goto LAB_144f50603;
        }
        uVar5 = FUN_144bdc640(local_218);
        local_238 = 1;
        local_230 = FUN_144f50ca0;
        local_228 = local_res18;
        lVar6 = FUN_144bdc480(uVar5,
                              "Invalid integer extra format specifier \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                              ,&local_238,0);
        *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0xbf;
        FUN_144bdc690(local_218);
      }
    }
LAB_144f50617:
    local_res10[0] = CONCAT11(local_res10[0]._1_1_,bVar7);
  }
LAB_144f5061d:
  if (1 < param_1[2] - *param_1) {
    FUN_144bdf520(local_218,pbVar2 + 1,(param_1[2] - *param_1) + -1);
    iVar4 = FUN_144bfbbd0(local_218[0],10);
    FUN_144bdf2f0(local_218);
  }
  FUN_144be06b0(param_4,&DAT_149c0db0c,0xffffffff);
  if (0 < iVar4) {
    FUN_144bdff80(param_4,&DAT_149c0db10,iVar4);
  }
LAB_144f5069e:
  if (param_3 != '\0') {
    FUN_144be01f0(param_4,&DAT_149c09ed4);
  }
  FUN_144be01f0(param_4,local_res10);
  return;
}



// FUNCTION 144f506e0 FUN_144f506e0 body=510 status=ok
// SIG undefined FUN_144f506e0(void)

void FUN_144f506e0(undefined8 *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ushort local_res8 [4];
  ushort local_res10 [4];
  undefined8 local_228;
  code *local_220;
  ushort *local_218;
  undefined8 local_208 [20];
  undefined1 local_168 [336];
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  local_res10[0] = 0x3f;
  if (pbVar2 == pbVar3) {
    local_res10[0] = 0x67;
    goto LAB_144f5088c;
  }
  bVar1 = *pbVar2;
  if ((bVar1 + 0xba & 0xdf) == 0) {
    local_res10[0] = 0x66;
  }
  else if ((bVar1 + 0xbb & 0xdd) == 0) {
    local_res10[0] = (ushort)bVar1;
  }
  else {
    local_res8[0] = (ushort)bVar1;
    if (DAT_14c797ae8 == '\0') {
      cVar4 = FUN_144bdbf80();
      if (cVar4 != '\0') goto LAB_144f5075f;
    }
    else {
LAB_144f5075f:
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar5 = FUN_144bdc640(local_208);
        local_228 = 1;
        local_220 = FUN_144f50ca0;
        local_218 = local_res8;
        lVar6 = FUN_144bdc480(uVar5,
                              "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                              ,&local_228,0);
        *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0xff;
        FUN_144bdc690(local_208);
        local_res10[0] = CONCAT11(local_res10[0]._1_1_,0x67);
        goto LAB_144f5084f;
      }
      uVar5 = FUN_144bdc810(local_168,&DAT_14c797a98,1);
      local_228 = 1;
      local_220 = FUN_144f50ca0;
      local_218 = local_res8;
      lVar6 = FUN_144bdc480(uVar5,
                            "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                            ,&local_228,0);
      *(char **)(lVar6 + 0x38) = "Container\\String\\hkPrintableArgs.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0xff;
      FUN_144bdc8a0(local_168);
    }
    local_res10[0] = CONCAT11(local_res10[0]._1_1_,0x67);
  }
LAB_144f5084f:
  iVar7 = (int)pbVar3 - (int)pbVar2;
  if (1 < iVar7) {
    FUN_144bdf520(local_208,pbVar2 + 1,iVar7 + -1);
    param_2 = FUN_144bfbbd0(local_208[0],10);
    FUN_144bdf2f0(local_208);
  }
LAB_144f5088c:
  FUN_144be06b0(param_3,&DAT_149c0db0c,0xffffffff);
  if (-1 < param_2) {
    FUN_144bdff80(param_3,&DAT_149c0db7c,param_2);
  }
  FUN_144be01f0(param_3,local_res10);
  return;
}



// FUNCTION 144f508e0 FUN_144f508e0 body=136 status=ok
// SIG undefined FUN_144f508e0(void)

undefined4 *
FUN_144f508e0(undefined4 *param_1,undefined2 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [20];
  
  uVar1 = *param_2;
  FUN_144bdf360(local_a8);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  FUN_144f502a0(&local_b8,0,0,local_a8);
  FUN_144bdff80(param_4,local_a8[0],uVar1);
  *param_1 = 0;
  FUN_144bdf2f0(local_a8);
  return param_1;
}



// FUNCTION 144f50970 FUN_144f50970 body=138 status=ok
// SIG undefined FUN_144f50970(void)

undefined4 * FUN_144f50970(undefined4 *param_1,uint *param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [20];
  
  uVar1 = *param_2;
  FUN_144bdf360(local_a8);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  FUN_144f502a0(&local_b8,uVar1 >> 0x1f,0,local_a8);
  FUN_144bdff80(param_4,local_a8[0],uVar1);
  *param_1 = 0;
  FUN_144bdf2f0(local_a8);
  return param_1;
}



// FUNCTION 144f50a00 FUN_144f50a00 body=135 status=ok
// SIG undefined FUN_144f50a00(void)

undefined4 *
FUN_144f50a00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [20];
  
  uVar1 = *param_2;
  FUN_144bdf360(local_a8);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  FUN_144f502a0(&local_b8,0,0,local_a8);
  FUN_144bdff80(param_4,local_a8[0],uVar1);
  *param_1 = 0;
  FUN_144bdf2f0(local_a8);
  return param_1;
}



// FUNCTION 144f50a90 FUN_144f50a90 body=141 status=ok
// SIG undefined FUN_144f50a90(void)

undefined4 *
FUN_144f50a90(undefined4 *param_1,ulonglong *param_2,undefined4 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [20];
  
  uVar1 = *param_2;
  FUN_144bdf360(local_a8);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  FUN_144f502a0(&local_b8,uVar1 >> 0x3f,1,local_a8);
  FUN_144bdff80(param_4,local_a8[0],uVar1);
  *param_1 = 0;
  FUN_144bdf2f0(local_a8);
  return param_1;
}



// FUNCTION 144f50b20 FUN_144f50b20 body=136 status=ok
// SIG undefined FUN_144f50b20(void)

undefined4 *
FUN_144f50b20(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [20];
  
  uVar1 = *param_2;
  FUN_144bdf360(local_a8);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  FUN_144f502a0(&local_b8,0,1,local_a8);
  FUN_144bdff80(param_4,local_a8[0],uVar1);
  *param_1 = 0;
  FUN_144bdf2f0(local_a8);
  return param_1;
}



// FUNCTION 144f50bb0 FUN_144f50bb0 body=42 status=ok
// SIG undefined FUN_144f50bb0(void)

undefined4 *
FUN_144f50bb0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144bdff80(param_4,&DAT_149982368,*param_2);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f50be0 FUN_144f50be0 body=143 status=ok
// SIG undefined FUN_144f50be0(void)

undefined4 *
FUN_144f50be0(undefined4 *param_1,float *param_2,undefined4 *param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [22];
  
  fVar1 = *param_2;
  FUN_144bdf360(local_b8);
  local_c8 = *param_3;
  uStack_c4 = param_3[1];
  uStack_c0 = param_3[2];
  uStack_bc = param_3[3];
  FUN_144f506e0(&local_c8,9,local_b8);
  FUN_144bdff80(param_4,local_b8[0],(double)fVar1);
  *param_1 = 0;
  FUN_144bdf2f0(local_b8);
  return param_1;
}



// FUNCTION 144f50c70 FUN_144f50c70 body=41 status=ok
// SIG undefined FUN_144f50c70(void)

undefined4 *
FUN_144f50c70(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144be0720(param_4,*param_2,0xffffffff);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f50ca0 FUN_144f50ca0 body=38 status=ok
// SIG undefined FUN_144f50ca0(void)

undefined4 *
FUN_144f50ca0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144be0720(param_4,param_2,0xffffffff);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f50cd0 FUN_144f50cd0 body=69 status=ok
// SIG undefined FUN_144f50cd0(void)

void FUN_144f50cd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + -8);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 1) {
    (**(code **)(param_1 - 0x10U))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000144f50d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c787678)(0,(ulonglong)(param_1 - 0x10U) & 0xfffffffffffffff0,0);
    return;
  }
  return;
}



// FUNCTION 144f50d20 FUN_144f50d20 body=95 status=ok
// SIG undefined FUN_144f50d20(void)

void FUN_144f50d20(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    (**(code **)(lVar1 - 0x10U))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000144f50d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c787678)(0,(ulonglong)(lVar1 - 0x10U) & 0xfffffffffffffff0,0);
    return;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)&DAT_00000001) {
    FUN_144f50cd0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f50d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,0);
  return;
}



// FUNCTION 144f50d80 FUN_144f50d80 body=86 status=ok
// SIG undefined FUN_144f50d80(void)

undefined8 * FUN_144f50d80(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  if (1 < uVar1) {
    param_1[1] = param_1 + 2;
    (*(code *)param_2[9])(param_2[1]);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[9] = 0;
  return param_1;
}



// FUNCTION 144f50de0 FUN_144f50de0 body=128 status=ok
// SIG undefined FUN_144f50de0(void)

undefined8 *
FUN_144f50de0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong local_res8;
  
  *param_1 = param_4;
  param_1[1] = 0;
  param_1[9] = 0;
  if (param_2 == 0) {
    param_1[1] = param_1 + 2;
    param_1[9] = param_5;
  }
  else if (param_3 != 0) {
    local_res8 = (longlong)((int)param_3 + (int)param_2);
    lVar1 = (*DAT_14c787670)(0,&local_res8,0);
    *(undefined8 *)(lVar1 + param_2 + -0x10) = param_5;
    param_1[1] = lVar1 + param_2;
    return param_1;
  }
  return param_1;
}



// FUNCTION 144f50e60 FUN_144f50e60 body=32 status=ok
// SIG undefined FUN_144f50e60(void)

undefined8 * FUN_144f50e60(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_2[1] != 0) {
    LOCK();
    plVar1 = (longlong *)(param_2[1] + -8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 144f50e80 FUN_144f50e80 body=124 status=ok
// SIG undefined FUN_144f50e80(void)

void FUN_144f50e80(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (longlong *)(lVar3 + -8);
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 1) {
        (**(code **)(lVar3 - 0x10U))(lVar3,0);
        (*DAT_14c787678)(0,(ulonglong)(lVar3 - 0x10U) & 0xfffffffffffffff0,0);
      }
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    if (param_2[1] != 0) {
      LOCK();
      plVar1 = (longlong *)(param_2[1] + -8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 144f50f00 FUN_144f50f00 body=10 status=ok
// SIG undefined FUN_144f50f00(void)

ulonglong FUN_144f50f00(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
}



// FUNCTION 144f50f10 FUN_144f50f10 body=390 status=ok
// SIG undefined FUN_144f50f10(void)

void FUN_144f50f10(void)

{
  uint extraout_var;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  
  if (DAT_14c797a80 == 0) {
    lVar5 = 100;
    dVar6 = 0.0;
    uVar1 = 0;
    do {
      uVar4 = rdtsc();
      uVar2 = uVar1 >> 0x20;
      QueryPerformanceCounter(local_res18);
      lVar3 = 50000;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar3 = rdtsc();
      QueryPerformanceCounter(&local_res10);
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_14c797a80);
      uVar1 = (ulonglong)extraout_var << 0x20;
      uVar4 = lVar3 - (CONCAT44((int)uVar2,(int)uVar4) | uVar4 & 0xffffffff00000000);
      if ((longlong)uVar4 < 0) {
        uVar1 = uVar4 >> 1;
      }
      uVar2 = local_res10.QuadPart - (longlong)local_res18[0];
      if ((longlong)uVar2 < 0) {
        uVar1 = uVar2 >> 1;
      }
      dVar6 = dVar6 + (double)uVar4 / (double)uVar2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = 0;
    dVar6 = (double)DAT_14c797a80 * (dVar6 / 100.0);
    if ((9.223372036854776e+18 <= dVar6) &&
       (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
      lVar5 = -0x8000000000000000;
    }
    DAT_14c797a80 = (longlong)dVar6 + lVar5;
  }
  return;
}



// FUNCTION 144f510a0 FUN_144f510a0 body=1256 status=ok
// SIG undefined FUN_144f510a0(void)

undefined8 * FUN_144f510a0(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58 [3];
  
  puVar9 = (undefined8 *)0x0;
  param_1[2] = 1;
  param_1[7] = 0;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = hkDefaultTaskQueue::vftable;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[3] = hkDefaultTaskQueue::vftable;
  *(undefined4 *)(param_1 + 6) = 1;
  iVar3 = 0x40;
  if (param_2[2] < 0x40) {
    iVar3 = param_2[2];
  }
  *(int *)(param_1 + 9) = iVar3;
  param_1[0x4a] = param_1 + 0x4c;
  param_1[0x6e] = hkDefaultTaskQueue::EmptyTask::vftable;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x80000040;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar3 = *param_2;
  *(int *)((longlong)param_1 + 900) = iVar3;
  puVar6 = puVar9;
  if ((iVar3 == 0) || (iVar3 == 1)) {
    local_res8 = 0x40;
    puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar4,"SpinningCriticalSection");
    }
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = _anon_D6E0876D::SpinningCriticalSection::vftable;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar6 = puVar4;
    }
  }
  else {
    local_res8 = 0x48;
    puVar4 = (undefined8 *)(*DAT_14c787670)(0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar4,"CriticalSection");
    }
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
      *puVar4 = _anon_D6E0876D::AsyncThreadPoolCriticalSection::vftable;
      *(undefined4 *)(puVar4 + 1) = 0;
      FUN_144bdde80(puVar4 + 2);
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar6 = puVar4;
    }
  }
  param_1[4] = puVar6;
  local_res10 = 0x38;
  lVar5 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"HandleAllocator");
  }
  puVar6 = puVar9;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_144f534d0(lVar5,param_2[1]);
  }
  param_1[5] = puVar6;
  if ((*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < 0x100) {
    FUN_144f586c0(param_1 + 7,&PTR_vftable_14c6e47a0,0x100);
  }
  iVar3 = *(int *)(param_1 + 9);
  if (0 < iVar3) {
    puVar6 = param_1 + 10;
    puVar4 = puVar9;
    do {
      iVar8 = (int)puVar4;
      puVar4 = puVar9;
      if (*(int *)((longlong)param_1 + 900) == 0) {
        local_58[0] = 0x188;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"BlockingThreadContext");
        }
        if (puVar7 != (undefined8 *)0x0) {
          iVar3 = param_2[1];
          *puVar7 = hkDefaultTaskQueue::ThreadContext::vftable;
          puVar7[0xb] = puVar7 + 0xd;
          *(int *)(puVar7 + 1) = iVar8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined2 *)(puVar7 + 2) = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          *(undefined1 *)(puVar7 + 10) = 0;
          *(undefined4 *)(puVar7 + 0xc) = 0;
          *(undefined4 *)((longlong)puVar7 + 100) = 0x80000020;
          puVar7[0x2d] = 0;
          puVar7[0x2e] = 0;
          *puVar7 = hkDefaultTaskQueueDetail::BlockingThreadContext::vftable;
          FUN_144b4a290(puVar7 + 0x2f,0,1,iVar3);
          puVar4 = puVar7;
        }
      }
      else if (*(int *)((longlong)param_1 + 900) == 1) {
        local_res20 = 0x1c0;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_res20);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"SpinningThreadContext");
        }
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = hkDefaultTaskQueue::ThreadContext::vftable;
          *(int *)(puVar7 + 1) = iVar8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined2 *)(puVar7 + 2) = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[0xb] = puVar7 + 0xd;
          *(undefined1 *)(puVar7 + 10) = 0;
          *(undefined4 *)(puVar7 + 0xc) = 0;
          *(undefined4 *)((longlong)puVar7 + 100) = 0x80000020;
          puVar7[0x2d] = 0;
          puVar7[0x2e] = 0;
          *puVar7 = hkDefaultTaskQueueDetail::SpinningThreadContext::vftable;
          *(undefined4 *)(puVar7 + 0x30) = 0;
          puVar4 = puVar7;
        }
      }
      else {
        local_res18 = 400;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_res18);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"AsyncThreadPoolContext");
        }
        if (puVar7 != (undefined8 *)0x0) {
          uVar2 = *(undefined8 *)(param_2 + 4);
          *puVar7 = hkDefaultTaskQueue::ThreadContext::vftable;
          puVar7[0xb] = puVar7 + 0xd;
          *(int *)(puVar7 + 1) = iVar8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined2 *)(puVar7 + 2) = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          *puVar7 = hkDefaultTaskQueueDetail::AsyncThreadPoolContext::vftable;
          *(undefined1 *)(puVar7 + 10) = 0;
          *(undefined4 *)(puVar7 + 0xc) = 0;
          *(undefined4 *)((longlong)puVar7 + 100) = 0x80000020;
          puVar7[0x2d] = 0;
          puVar7[0x2e] = 0;
          puVar7[0x2f] = 0;
          puVar7[0x30] = uVar2;
          *(undefined4 *)(puVar7 + 0x31) = 0xffffffff;
          puVar4 = puVar7;
        }
      }
      *puVar6 = puVar4;
      puVar4[0x2d] = param_1;
      iVar3 = *(int *)(param_1 + 0x4b);
      piVar1 = (int *)(param_1[0x4a] + (longlong)iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (*(int *)(param_1 + 9) - iVar8) + -1;
      }
      *(int *)(param_1 + 0x4b) = iVar3 + 1;
      puVar4 = (undefined8 *)(ulonglong)(iVar8 + 1U);
      iVar3 = *(int *)(param_1 + 9);
      puVar6 = puVar6 + 1;
    } while ((int)(iVar8 + 1U) < iVar3);
  }
  lVar5 = (longlong)iVar3;
  if (lVar5 < 0x40) {
    memset(param_1 + lVar5 + 10,0,(0x40 - lVar5) * 8);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 144f51590 FUN_144f51590 body=760 status=ok
// SIG undefined FUN_144f51590(void)

void FUN_144f51590(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  *param_1 = hkDefaultTaskQueue::vftable;
  param_1[3] = hkDefaultTaskQueue::vftable;
  (**(code **)(*(longlong *)param_1[4] + 8))();
  iVar7 = 0;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined1 *)(param_1 + 0x6c) = 1;
    if (*(int *)((longlong)param_1 + 900) == 0) {
      if (0 < *(int *)((longlong)param_1 + 0x4c)) {
        plVar5 = param_1 + 10;
        iVar4 = iVar7;
        do {
          lVar1 = *plVar5;
          if (*(char *)(lVar1 + 0x10) != '\0') {
            *(undefined1 *)(lVar1 + 0x10) = 0;
            FUN_144bdf120(lVar1 + 0x178,1);
          }
          iVar4 = iVar4 + 1;
          plVar5 = plVar5 + 1;
        } while (iVar4 < *(int *)((longlong)param_1 + 0x4c));
      }
    }
    else if (*(int *)((longlong)param_1 + 900) == 1) {
      if (0 < *(int *)((longlong)param_1 + 0x4c)) {
        plVar5 = param_1 + 10;
        iVar4 = iVar7;
        do {
          lVar1 = *plVar5;
          if (*(char *)(lVar1 + 0x10) != '\0') {
            *(undefined1 *)(lVar1 + 0x10) = 0;
            *(undefined4 *)(lVar1 + 0x180) = 1;
          }
          iVar4 = iVar4 + 1;
          plVar5 = plVar5 + 1;
        } while (iVar4 < *(int *)((longlong)param_1 + 0x4c));
      }
    }
    else if (0 < *(int *)((longlong)param_1 + 0x4c)) {
      plVar5 = param_1 + 10;
      iVar4 = iVar7;
      do {
        lVar1 = *plVar5;
        if (*(char *)(lVar1 + 0x10) != '\0') {
          *(undefined1 *)(lVar1 + 0x10) = 0;
          FUN_144be5cf0(*(undefined8 *)(lVar1 + 0x178));
        }
        iVar4 = iVar4 + 1;
        plVar5 = plVar5 + 1;
      } while (iVar4 < *(int *)((longlong)param_1 + 0x4c));
    }
  }
  (**(code **)(*(longlong *)param_1[4] + 0x10))();
  if (0 < *(int *)(param_1 + 9)) {
    plVar5 = param_1 + 10;
    do {
      puVar2 = (undefined8 *)*plVar5;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *plVar5 = 0;
      iVar7 = iVar7 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar7 < *(int *)(param_1 + 9));
  }
  plVar5 = (longlong *)param_1[5];
  if (plVar5 != (longlong *)0x0) {
    lVar1 = *plVar5;
    while (lVar1 != 0) {
      lVar3 = *(longlong *)(lVar1 + 0xfc0);
      lVar8 = 0x2a;
      puVar6 = (undefined4 *)(lVar1 + 0x100c);
      do {
        lVar8 = lVar8 + -1;
        puVar6[-0x19] = 0;
        if ((-1 < (int)puVar6[-0x18]) && (*(longlong *)(puVar6 + -0x1b) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar6 + -0x1b),
                     (ulonglong)(puVar6[-0x18] & 0x7fffffff) << 3);
        }
        *(undefined8 *)(puVar6 + -0x1b) = 0;
        puVar6[-0x18] = 0x80000000;
        puVar6[-0x21] = 0;
        if ((-1 < (int)puVar6[-0x20]) && (*(longlong *)(puVar6 + -0x23) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(puVar6 + -0x23),
                     (ulonglong)(puVar6[-0x20] & 0x7fffffff) << 3);
        }
        *(undefined8 *)(puVar6 + -0x23) = 0;
        puVar6[-0x20] = 0x80000000;
        puVar6 = puVar6 + -0x18;
      } while (lVar8 != 0);
      (*DAT_14c787678)(0,lVar1,0);
      *plVar5 = lVar3;
      lVar1 = lVar3;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(plVar5 + 2));
    (*DAT_14c787678)(0,plVar5,0);
  }
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[4] = 0;
  FUN_144be5f30(param_1 + 0x6e);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x25c)) && (param_1[0x4a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x4a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x25c) & 0x7fffffff) << 2);
  }
  param_1[0x4a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x80000000;
  FUN_144f52b50(param_1 + 7);
  param_1[3] = hkTaskQueue::vftable;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f51890 FUN_144f51890 body=40 status=ok
// SIG undefined FUN_144f51890(void)

void FUN_144f51890(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x18;
  if (*(int *)(param_1 + 0x36c) == 0) {
    FUN_144f56140(lVar1,0);
    return;
  }
  if (*(int *)(param_1 + 0x36c) != 1) {
    FUN_144f57790(lVar1,0);
    return;
  }
  FUN_144f56c80(lVar1,0);
  return;
}



// FUNCTION 144f518c0 FUN_144f518c0 body=40 status=ok
// SIG undefined FUN_144f518c0(void)

void FUN_144f518c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x18;
  if (*(int *)(param_1 + 0x36c) == 0) {
    FUN_144f53dd0(lVar1,0);
    return;
  }
  if (*(int *)(param_1 + 0x36c) != 1) {
    FUN_144f55540(lVar1,0);
    return;
  }
  FUN_144f549a0(lVar1,0);
  return;
}



// FUNCTION 144f518f0 FUN_144f518f0 body=245 status=ok
// SIG undefined FUN_144f518f0(void)

void FUN_144f518f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  if (*(char *)(param_1 + 0x348) == '\0') {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x348) = 1;
    if (*(int *)(param_1 + 0x36c) == 0) {
      if (0 < *(int *)(param_1 + 0x34)) {
        plVar2 = (longlong *)(param_1 + 0x38);
        do {
          lVar1 = *plVar2;
          if (*(char *)(lVar1 + 0x10) != '\0') {
            *(undefined1 *)(lVar1 + 0x10) = 0;
            FUN_144bdf120(lVar1 + 0x178,1);
          }
          iVar3 = iVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x34));
      }
    }
    else if (*(int *)(param_1 + 0x36c) == 1) {
      if (0 < *(int *)(param_1 + 0x34)) {
        plVar2 = (longlong *)(param_1 + 0x38);
        do {
          lVar1 = *plVar2;
          if (*(char *)(lVar1 + 0x10) != '\0') {
            *(undefined1 *)(lVar1 + 0x10) = 0;
            *(undefined4 *)(lVar1 + 0x180) = 1;
          }
          iVar3 = iVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x34));
      }
    }
    else if (0 < *(int *)(param_1 + 0x34)) {
      plVar2 = (longlong *)(param_1 + 0x38);
      do {
        lVar1 = *plVar2;
        if (*(char *)(lVar1 + 0x10) != '\0') {
          *(undefined1 *)(lVar1 + 0x10) = 0;
          FUN_144be5cf0(*(undefined8 *)(lVar1 + 0x178));
        }
        iVar3 = iVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x34));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144f519e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}



// FUNCTION 144f519f0 FUN_144f519f0 body=458 status=ok
// SIG undefined FUN_144f519f0(void)

void FUN_144f519f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar9;
  
  uVar4 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    uVar9 = uVar4;
    do {
      lVar7 = *plVar6;
      if (*(int *)(lVar7 + 0x60) != 0) {
        (**(code **)(*param_1 + 0x18))
                  (param_1,*(undefined8 *)(lVar7 + 0x58),*(int *)(lVar7 + 0x60),8);
        *(undefined4 *)(lVar7 + 0x60) = 0;
      }
      *(undefined8 *)(lVar7 + 0x18) = 0;
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar1 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar5 == 1) {
          lVar5 = *(longlong *)(lVar7 + 0x38);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar5);
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      plVar6 = plVar6 + 1;
    } while ((int)uVar8 < *(int *)((longlong)param_1 + 0x34));
  }
  iVar2 = (int)param_1[0x48];
  uVar9 = uVar4;
  if (0 < iVar2) {
    do {
      iVar3 = (int)uVar4;
      uVar8 = iVar3 + 1;
      uVar4 = (ulonglong)uVar8;
      *(int *)(uVar9 + param_1[0x47]) = (iVar2 - iVar3) + -1;
      iVar2 = (int)param_1[0x48];
      uVar9 = uVar9 + 4;
    } while ((int)uVar8 < iVar2);
  }
  plVar6 = (longlong *)param_1[2];
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 2));
  lVar7 = *plVar6;
  if (lVar7 == 0) {
    plVar6[1] = 0;
  }
  else {
    plVar6[1] = lVar7;
    while( true ) {
      lVar5 = lVar7 + 0x30;
      lVar10 = 0x2a;
      do {
        *(undefined4 *)(lVar5 + -8) = 0;
        if ((*(longlong *)(lVar5 + -0x10) != lVar5) && (-1 < *(int *)(lVar5 + -4))) {
          FUN_144f58310(&PTR_vftable_14c6e47a0,(longlong *)(lVar5 + -0x10),lVar5,2);
        }
        *(undefined4 *)(lVar5 + 0x18) = 0;
        if ((*(longlong *)(lVar5 + 0x10) != lVar5 + 0x20) && (-1 < *(int *)(lVar5 + 0x1c))) {
          FUN_144f58310(&PTR_vftable_14c6e47a0,(longlong *)(lVar5 + 0x10),lVar5 + 0x20,1);
        }
        lVar5 = lVar5 + 0x60;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar5 = *(longlong *)(lVar7 + 0xfc0);
      FUN_144f52c20(lVar7);
      if (lVar5 == 0) break;
      *(longlong *)(lVar7 + 0xfc0) = lVar5;
      *(longlong *)(lVar7 + 0xfb8) = lVar5;
      lVar7 = lVar5;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 2));
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}



// FUNCTION 144f51bc0 FUN_144f51bc0 body=213 status=ok
// SIG undefined FUN_144f51bc0(void)

void FUN_144f51bc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    plVar5 = (longlong *)(param_1 + 0x50);
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar2 = *plVar5;
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        lVar3 = *plVar1;
        pcVar4 = (char *)(lVar3 + 0x114);
        if (*pcVar4 == '\0') {
          __dyn_tls_on_demand_init();
        }
        plVar7 = (longlong *)(lVar3 + 0xf0);
        lVar3 = *plVar7;
        if (lVar3 == 0) {
          if (*pcVar4 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar3 = FUN_144b3f4a0();
          *plVar7 = lVar3;
        }
        if (*(longlong *)(lVar2 + 0x18) != *(longlong *)(lVar3 + 0x3e0)) {
          *(undefined1 *)(lVar2 + 0x50) = 1;
        }
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x4c));
  }
  return;
}



// FUNCTION 144f51ca0 FUN_144f51ca0 body=549 status=ok
// SIG undefined FUN_144f51ca0(void)

void FUN_144f51ca0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_30;
  longlong local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
  iVar8 = (int)param_2[1] + *(int *)(param_1 + 0x4c);
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_144f58420(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    plVar12 = (longlong *)(param_1 + 0x50);
    do {
      lVar2 = *plVar12;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        LOCK();
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x48) + 0x60);
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 1) {
          lVar9 = *(longlong *)(lVar2 + 0x38);
          if (lVar9 == 0) {
            lVar9 = *(longlong *)(lVar2 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar2 + 0x48),lVar9);
        }
      }
      *(undefined8 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        if (*(char *)(lVar2 + 0x50) == '\0') {
          puVar7 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar2 + 0x18),local_48);
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          *(undefined4 *)(lVar2 + 0x20) = *puVar7;
          *(undefined4 *)(lVar2 + 0x24) = uVar3;
          *(undefined4 *)(lVar2 + 0x28) = uVar4;
          *(undefined4 *)(lVar2 + 0x2c) = uVar5;
          uVar3 = puVar7[5];
          uVar4 = puVar7[6];
          uVar5 = puVar7[7];
          *(undefined4 *)(lVar2 + 0x30) = puVar7[4];
          *(undefined4 *)(lVar2 + 0x34) = uVar3;
          *(undefined4 *)(lVar2 + 0x38) = uVar4;
          *(undefined4 *)(lVar2 + 0x3c) = uVar5;
          *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(puVar7 + 8);
          lVar9 = *(longlong *)(lVar2 + 0x48);
          *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(puVar7 + 10);
          *(undefined8 *)(puVar7 + 10) = 0;
          if (lVar9 != 0) {
            LOCK();
            plVar1 = (longlong *)(lVar9 + 0x60);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
          }
          if (local_20 != 0) {
            LOCK();
            plVar1 = (longlong *)(local_20 + 0x60);
            lVar9 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar9 == 1) {
              lVar9 = local_40;
              if (local_30 != 0) {
                lVar9 = local_30;
              }
              FUN_144bea6d0(local_20,lVar9);
            }
          }
          iVar11 = (int)param_2[1] + 1;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar11) {
            FUN_144f58420(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          puVar7 = (undefined4 *)((longlong)(int)param_2[1] * 0x30 + *param_2);
          if (puVar7 != (undefined4 *)0x0) {
            uVar3 = *(undefined4 *)(lVar2 + 0x24);
            uVar4 = *(undefined4 *)(lVar2 + 0x28);
            uVar5 = *(undefined4 *)(lVar2 + 0x2c);
            *puVar7 = *(undefined4 *)(lVar2 + 0x20);
            puVar7[1] = uVar3;
            puVar7[2] = uVar4;
            puVar7[3] = uVar5;
            uVar6 = *(undefined8 *)(lVar2 + 0x38);
            *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar2 + 0x30);
            *(undefined8 *)(puVar7 + 6) = uVar6;
            *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar2 + 0x40);
            lVar2 = *(longlong *)(lVar2 + 0x48);
            *(longlong *)(puVar7 + 10) = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(longlong *)(lVar2 + 0x60) = *(longlong *)(lVar2 + 0x60) + 1;
              UNLOCK();
            }
          }
          *(int *)(param_2 + 1) = iVar11;
        }
        else {
          iVar11 = (int)param_2[1] + 1;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar11) {
            FUN_144f58420(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          puVar10 = (undefined8 *)((longlong)(int)param_2[1] * 0x30 + *param_2);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
          }
          *(int *)(param_2 + 1) = iVar11;
        }
      }
      iVar8 = iVar8 + 1;
      plVar12 = plVar12 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x4c));
  }
                    /* WARNING: Could not recover jumptable at 0x000144f51ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  return;
}



// FUNCTION 144f51ed0 FUN_144f51ed0 body=7 status=ok
// SIG undefined FUN_144f51ed0(void)

undefined4 FUN_144f51ed0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x368);
}



// FUNCTION 144f51ee0 FUN_144f51ee0 body=13 status=ok
// SIG undefined FUN_144f51ee0(void)

undefined8 FUN_144f51ee0(undefined8 param_1,longlong param_2)

{
  return CONCAT71(0xff,*(short *)(param_2 + 4) == -1);
}



// FUNCTION 144f51ef0 FUN_144f51ef0 body=267 status=ok
// SIG undefined FUN_144f51ef0(void)

void FUN_144f51ef0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (((param_3 < 0x10) && (lVar4 = FUN_144bdb730(DAT_14c797a88), lVar4 != 0)) &&
     (*(longlong *)(lVar4 + 0x168) == param_1 + -0x18)) {
    iVar2 = *(int *)(lVar4 + 0x60);
    if (iVar2 < param_3) {
      FUN_144f537d0(*(undefined8 *)(param_1 + 0x10),
                    *(longlong *)(lVar4 + 0x58) + (longlong)iVar2 * 8,0x10);
      iVar2 = iVar2 + 0x10;
      if ((*(int *)(lVar4 + 0x60) < iVar2) || (iVar2 < *(int *)(lVar4 + 0x60))) {
        *(int *)(lVar4 + 0x60) = iVar2;
      }
    }
    iVar2 = 0;
    if (0 < param_3) {
      do {
        iVar3 = *(int *)(lVar4 + 0x60) - iVar2;
        iVar2 = iVar2 + 1;
        puVar1 = *(undefined4 **)(*(longlong *)(lVar4 + 0x58) + -8 + (longlong)iVar3 * 8);
        puVar1[1] = 0x10001;
        puVar1[2] = 0x40000000;
        *(undefined8 *)(puVar1 + 6) = 0;
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 0x16) = 0;
        puVar1[10] = 0;
        puVar1[0x12] = 0;
        *param_2 = puVar1;
        param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      } while (iVar2 < param_3);
    }
    *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) - param_3;
  }
  else {
    FUN_144f537d0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 144f52000 FUN_144f52000 body=219 status=ok
// SIG undefined FUN_144f52000(void)

void FUN_144f52000(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if ((((int)param_3 < 0x10) && (lVar3 = FUN_144bdb730(DAT_14c797a88), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x168) == param_1 + -0x18)) {
    if ((0x1f < (int)(*(int *)(lVar3 + 0x60) + param_3)) &&
       (FUN_144f538e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar3 + 0x58),
                      *(int *)(lVar3 + 0x60),8), *(int *)(lVar3 + 0x60) != 0)) {
      *(undefined4 *)(lVar3 + 0x60) = 0;
    }
    if (0 < (int)param_3) {
      do {
        iVar2 = *(int *)(lVar3 + 0x60);
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar2 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *param_2;
        }
        param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
        *(int *)(lVar3 + 0x60) = iVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    FUN_144f538e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 144f520e0 FUN_144f520e0 body=26 status=ok
// SIG undefined FUN_144f520e0(void)

void FUN_144f520e0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  *(undefined1 *)(param_2 + 0xb) = param_4;
  if (param_3 != 0) {
    *(longlong *)(param_2 + 0x58) = param_3;
    return;
  }
  *(longlong *)(param_2 + 0x58) = param_1 + 0x358;
  return;
}



// FUNCTION 144f52100 FUN_144f52100 body=143 status=ok
// SIG undefined FUN_144f52100(void)

void FUN_144f52100(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  if (*(short *)(param_2 + 4) != -1) {
    iVar2 = *(int *)(param_2 + 0x28) + 1;
    if ((int)(*(uint *)(param_2 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_144f587b0(param_2 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)*(int *)(param_2 + 0x28) * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_3;
    }
    *(int *)(param_2 + 0x28) = iVar2;
    *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f5218b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}



// FUNCTION 144f52190 FUN_144f52190 body=190 status=ok
// SIG undefined FUN_144f52190(void)

void FUN_144f52190(longlong param_1,longlong *param_2,int param_3)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = (longlong)param_3;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  if (0 < param_3) {
    do {
      lVar3 = *param_2;
      lVar4 = param_2[1];
      if (*(short *)(lVar3 + 4) != -1) {
        iVar6 = *(int *)(lVar3 + 0x28) + 1;
        if ((int)(*(uint *)(lVar3 + 0x2c) & 0x7fffffff) < iVar6) {
          FUN_144f587b0(lVar3 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        plVar2 = (longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)*(int *)(lVar3 + 0x28) * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = lVar4;
        }
        *(int *)(lVar3 + 0x28) = iVar6;
        psVar1 = (short *)(lVar4 + 4);
        *psVar1 = *psVar1 + 1;
      }
      param_2 = param_2 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000144f5224a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}



// FUNCTION 144f52250 FUN_144f52250 body=1029 status=ok
// SIG undefined FUN_144f52250(void)

/* WARNING: Removing unreachable block (ram,0x000144f52620) */
/* WARNING: Removing unreachable block (ram,0x000144f5262a) */

void FUN_144f52250(longlong param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ushort uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int local_268;
  int iStack_264;
  int local_248;
  longlong local_240 [65];
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_5;
    uVar12 = (ulonglong)param_3;
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar11 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar11 + 0xf0);
    if (lVar6 == 0) {
      if (*(char *)(lVar11 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = FUN_144b3f4a0();
      *(longlong *)(lVar11 + 0xf0) = lVar6;
    }
    lVar11 = *(longlong *)(lVar6 + 0x3e0);
    if ((((*(int *)(param_1 + 0x36c) == 2) &&
         ((lVar6 = FUN_144bdb730(DAT_14c797a88), lVar6 == 0 ||
          (*(longlong *)(lVar6 + 0x168) != param_1 + -0x18)))) || (lVar11 == 0)) ||
       ((*(ulonglong *)(lVar11 + 0x18) == 0 ||
        ((*(ulonglong *)(lVar11 + 0x18) < *(ulonglong *)(lVar11 + 0x10) &&
         (cVar3 = FUN_144bea600(lVar11,0x20), cVar3 == '\0')))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_144bea150(lVar11);
    }
    plVar8 = param_2;
    uVar10 = uVar12;
    if (0 < (int)param_3) {
      do {
        *(undefined4 *)(*plVar8 + 0xc) = uVar5;
        uVar10 = uVar10 - 1;
        plVar8 = (longlong *)((longlong)plVar8 + lVar14);
      } while (uVar10 != 0);
    }
    local_248 = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    iVar15 = 1;
    if (*(int *)(param_1 + 0x18) + param_3 < 0x800000) {
      iVar15 = *(int *)(param_1 + 0x18);
    }
    iVar13 = 0;
    *(uint *)(param_1 + 0x18) = iVar15 + param_3;
    if (0 < (int)param_3) {
      if (param_4 == 0) {
        do {
          puVar2 = (uint *)*param_2;
          param_2 = (longlong *)((longlong)param_2 + lVar14);
          puVar1 = puVar2 + 1;
          *(short *)puVar1 = (short)*puVar1 + -1;
          *puVar2 = 0x800000U - iVar15 | (uint)*(byte *)((longlong)puVar2 + 0xb) << 0x18;
          if ((short)*puVar1 == 0) {
            (**(code **)(**(longlong **)(puVar2 + 0x16) + 0x10))();
            iVar9 = 0;
            if (0 < local_268) {
              iVar9 = local_268;
            }
            *(bool *)((longlong)puVar2 + 10) = iStack_264 == 1;
            uVar7 = 0xffff;
            if (iVar9 < 0xffff) {
              uVar7 = (ushort)iVar9;
            }
            uVar4 = 1;
            if (1 < uVar7) {
              uVar4 = uVar7;
            }
            *(ushort *)((longlong)puVar2 + 6) = uVar4;
            FUN_144f52950(param_1 + 0x20);
            iVar13 = iVar13 + (uint)*(ushort *)((longlong)puVar2 + 6);
          }
          iVar15 = iVar15 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      else {
        uVar16 = iVar15 + 0x800000;
        do {
          puVar2 = (uint *)*param_2;
          param_2 = (longlong *)((longlong)param_2 + lVar14);
          puVar1 = puVar2 + 1;
          *(short *)puVar1 = (short)*puVar1 + -1;
          *puVar2 = uVar16 | (uint)*(byte *)((longlong)puVar2 + 0xb) << 0x18;
          if ((short)*puVar1 == 0) {
            (**(code **)(**(longlong **)(puVar2 + 0x16) + 0x10))();
            iVar15 = 0;
            if (0 < local_268) {
              iVar15 = local_268;
            }
            *(bool *)((longlong)puVar2 + 10) = iStack_264 == 1;
            uVar7 = 0xffff;
            if (iVar15 < 0xffff) {
              uVar7 = (ushort)iVar15;
            }
            uVar4 = 1;
            if (1 < uVar7) {
              uVar4 = uVar7;
            }
            *(ushort *)((longlong)puVar2 + 6) = uVar4;
            FUN_144f52950(param_1 + 0x20);
            iVar13 = iVar13 + (uint)*(ushort *)((longlong)puVar2 + 6);
          }
          uVar16 = uVar16 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    iVar15 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      plVar8 = (longlong *)(param_1 + 0x38);
      do {
        if (iVar13 < 1) break;
        lVar11 = *plVar8;
        if (*(char *)(lVar11 + 0x10) != '\0') {
          *(undefined1 *)(lVar11 + 0x10) = 0;
          lVar14 = (longlong)local_248;
          local_248 = local_248 + 1;
          if (local_240 + lVar14 != (longlong *)0x0) {
            local_240[lVar14] = lVar11;
          }
          iVar13 = iVar13 + -1;
        }
        iVar15 = iVar15 + 1;
        plVar8 = plVar8 + 1;
      } while (iVar15 < *(int *)(param_1 + 0x34));
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (*(int *)(param_1 + 0x36c) == 0) {
      if ((local_248 != 0) && (iVar15 = 0, 0 < local_248)) {
        lVar11 = 0;
        do {
          FUN_144bdf120(*(longlong *)((longlong)local_240 + lVar11) + 0x178,1);
          iVar15 = iVar15 + 1;
          lVar11 = lVar11 + 8;
        } while (iVar15 < local_248);
      }
    }
    else if (*(int *)(param_1 + 0x36c) == 1) {
      if ((local_248 != 0) && (iVar15 = 0, 0 < local_248)) {
        lVar11 = 0;
        do {
          iVar15 = iVar15 + 1;
          *(undefined4 *)(*(longlong *)((longlong)local_240 + lVar11) + 0x180) = 1;
          lVar11 = lVar11 + 8;
        } while (iVar15 < local_248);
      }
    }
    else if ((local_248 != 0) && (iVar15 = 0, 0 < local_248)) {
      lVar11 = 0;
      do {
        FUN_144be5cf0(*(undefined8 *)(*(longlong *)((longlong)local_240 + lVar11) + 0x178));
        iVar15 = iVar15 + 1;
        lVar11 = lVar11 + 8;
      } while (iVar15 < local_248);
    }
  }
  return;
}



// FUNCTION 144f52660 FUN_144f52660 body=51 status=ok
// SIG undefined FUN_144f52660(void)

ulonglong FUN_144f52660(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  char *pcVar25;
  byte bStackX_18;
  uint uStackX_20;
  longlong lStack_420;
  uint uStack_410;
  int iStack_40c;
  longlong lStack_408;
  char *pcStack_3f8;
  char *pcStack_3f0;
  longlong *plStack_3e8;
  char *pcStack_3e0;
  undefined8 uStack_3d8;
  longlong lStack_3d0;
  undefined4 auStack_3c8 [2];
  char *pcStack_3c0;
  char *pcStack_3b8;
  char *pcStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  longlong lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  uint uStack_380;
  undefined1 *puStack_378;
  int iStack_370;
  uint uStack_36c;
  undefined1 auStack_368 [128];
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [8];
  longlong lStack_2a0;
  longlong lStack_290;
  longlong lStack_280;
  undefined1 *puStack_278;
  int iStack_270;
  uint uStack_26c;
  undefined1 auStack_268 [552];
  
  if (*(short *)(param_2 + 4) == -1) {
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x36c) == 0) {
    uVar7 = FUN_144f53dd0();
    return uVar7;
  }
  if (*(int *)(param_1 + 0x36c) == 1) {
    uVar7 = FUN_144f549a0();
    return uVar7;
  }
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar22 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar8;
  }
  lVar22 = *(longlong *)(lVar8 + 0x3e0);
  plVar11 = *(longlong **)(param_1 + 8);
  lVar8 = FUN_144bdb730(DAT_14c797a88);
  lStack_408 = lVar8;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x168) != param_1 + -0x18)) {
    (**(code **)(*plVar11 + 8))(plVar11);
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x238) + -4 + (longlong)*(int *)(param_1 + 0x240) * 4)
    ;
    iVar6 = iVar24 + 1;
    iVar14 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x34) < iVar6) {
      iVar14 = iVar6;
    }
    *(int *)(param_1 + 0x34) = iVar14;
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
    lVar8 = *(longlong *)(param_1 + 0x38 + (longlong)iVar24 * 8);
    *(longlong *)(lVar8 + 0x18) = lVar22;
    *(undefined4 *)(lVar8 + 0xc) = 1;
    lStack_408 = lVar8;
    FUN_144bdb6a0(DAT_14c797a88,lVar8);
    if (*(int *)(param_1 + 0x36c) == 2) {
      uVar5 = FUN_144bda950();
      *(undefined4 *)(lVar8 + 0x188) = uVar5;
      uStack_3d8 = 0x10;
      lVar9 = (*DAT_14c787670)(0,&uStack_3d8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar9,"hkAsyncThreadPoolSimpleSemaphore");
      }
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_144be5ca0(lVar9,*(undefined8 *)(lVar8 + 0x180),uVar5);
      }
      lVar9 = *(longlong *)(lVar8 + 0x178);
      *(undefined8 *)(lVar8 + 0x178) = uVar10;
      if (lVar9 != 0) {
        FUN_144be5cc0(lVar9);
        (*DAT_14c787678)(0,lVar9,0);
      }
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else {
    if (*(longlong *)(lVar8 + 0x18) != lVar22) {
      (**(code **)(*plVar11 + 8))(plVar11);
      *(longlong *)(lVar8 + 0x18) = lVar22;
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
  }
  uStack_388 = 0;
  lStack_3d0 = param_1 + 0x20;
  uStack_380 = 0;
  uStack_390 = *(undefined8 *)(lVar8 + 0x18);
  puStack_278 = auStack_268;
  bStackX_18 = 0;
  plStack_3e8 = (longlong *)0x149c0de18;
  pcStack_3e0 = "";
  pcStack_3f8 = "LtGetNextTask";
  pcStack_3f0 = "";
  lStack_420 = 0;
  iStack_270 = 0;
  uStack_26c = 0x80000040;
  lStack_398 = param_1;
  do {
    FUN_144bda9a0(*(undefined8 *)(lVar8 + 0x180),0x8db8cde);
    plStack_3e8 = *(longlong **)(param_1 + 8);
    (**(code **)(*plStack_3e8 + 8))();
    lVar9 = *(longlong *)(lVar8 + 0x170);
    *(undefined1 *)(lVar8 + 0x11) = 0;
    if ((param_2 != 0) && (lStack_420 == 0)) {
      iVar24 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar24) {
        FUN_144f587b0(param_2 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      plVar11 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = lVar9;
      }
      *(int *)(param_2 + 0x48) = iVar24;
    }
    uVar7 = 0;
    if (lVar22 != 0) {
      pcStack_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      pcStack_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar22,&pcStack_2d8,&pcStack_2e8);
    }
    uStackX_20 = 0;
    if (lStack_420 != 0) {
      if ((*(char *)(lStack_420 + 10) != '\0') && (*(short *)(lStack_420 + 6) != 0)) {
        *(undefined2 *)(lStack_420 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x28)) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x20) + 8);
          uVar16 = uVar7;
          do {
            if (lStack_420 == *plVar11) {
              FUN_144f52a00((longlong *)(param_1 + 0x20));
              break;
            }
            uVar18 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar18;
            plVar11 = plVar11 + 2;
          } while ((int)uVar18 < *(int *)(param_1 + 0x28));
        }
      }
      *(short *)(lStack_420 + 8) = *(short *)(lStack_420 + 8) + -1;
      if ((uint)*(ushort *)(lStack_420 + 6) + (uint)*(ushort *)(lStack_420 + 8) == 0) {
        iVar24 = *(int *)(lStack_420 + 0x28);
        puStack_378 = auStack_368;
        iStack_370 = 0;
        uStack_36c = 0x80000010;
        if (0 < (longlong)iVar24) {
          do {
            lVar8 = *(longlong *)(*(longlong *)(lStack_420 + 0x20) + uVar7 * 8);
            psVar1 = (short *)(lVar8 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar14 = iStack_370 + 1;
              if ((int)(uStack_36c & 0x7fffffff) < iVar14) {
                FUN_144f587b0(&puStack_378,&PTR_vftable_14c6e47c0,(longlong)iVar14);
              }
              lVar15 = (longlong)iStack_370;
              iStack_370 = iVar14;
              if ((longlong *)(puStack_378 + lVar15 * 8) != (longlong *)0x0) {
                *(longlong *)(puStack_378 + lVar15 * 8) = lVar8;
              }
            }
            uVar7 = uVar7 + 1;
          } while ((longlong)uVar7 < (longlong)iVar24);
        }
        lVar8 = 0;
        *(undefined4 *)(lStack_420 + 0x28) = 0;
        uVar7 = *(ulonglong *)(lStack_420 + 0x18);
        if (uVar7 != 0) {
          do {
            if (((uVar7 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x38 + lVar8 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x38 + lVar8 * 8) + 0x10) = 0;
              FUN_144be5cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x38 + lVar8 * 8) + 0x178));
            }
            lVar8 = lVar8 + 1;
            uVar7 = uVar7 >> 1;
          } while (uVar7 != 0);
          *(undefined8 *)(lStack_420 + 0x18) = 0;
        }
        uVar20 = 0;
        uStackX_20 = 0;
        uVar7 = uVar20;
        uVar16 = uVar20;
        if (0 < iStack_370) {
          do {
            pcVar25 = *(char **)(puStack_378 + uVar16);
            pcStack_3f8 = pcVar25;
            (**(code **)(**(longlong **)(pcVar25 + 0x58) + 0x10))
                      (*(longlong **)(pcVar25 + 0x58),&uStack_410);
            uVar19 = 0xffff;
            uVar18 = 0;
            if (0 < (int)uStack_410) {
              uVar18 = uStack_410;
            }
            if ((int)uVar18 < 0xffff) {
              uVar19 = uVar18 & 0xffff;
            }
            *(short *)(pcVar25 + 6) = (short)uVar19;
            pcVar25[10] = iStack_40c == 1;
            if ((short)uVar19 == 0) {
              plVar23 = *(longlong **)(pcVar25 + 0x20);
              plVar11 = plVar23 + *(int *)(pcVar25 + 0x28);
              for (; plVar23 != plVar11; plVar23 = plVar23 + 1) {
                lVar8 = *plVar23;
                psVar1 = (short *)(lVar8 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar24 = iStack_370 + 1;
                  if ((int)(uStack_36c & 0x7fffffff) < iVar24) {
                    FUN_144f587b0(&puStack_378,&PTR_vftable_14c6e47c0,(longlong)iVar24);
                  }
                  lVar15 = (longlong)iStack_370;
                  iStack_370 = iVar24;
                  if ((longlong *)(puStack_378 + lVar15 * 8) != (longlong *)0x0) {
                    *(longlong *)(puStack_378 + lVar15 * 8) = lVar8;
                  }
                }
              }
              lVar8 = 0;
              pcVar25[0x28] = '\0';
              pcVar25[0x29] = '\0';
              pcVar25[0x2a] = '\0';
              pcVar25[0x2b] = '\0';
              uVar20 = *(ulonglong *)(pcVar25 + 0x18);
              if (uVar20 != 0) {
                do {
                  if (((uVar20 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x38 + lVar8 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x38 + lVar8 * 8) + 0x10) = 0;
                    FUN_144be5cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x38 + lVar8 * 8) + 0x178)
                                 );
                  }
                  lVar8 = lVar8 + 1;
                  uVar20 = uVar20 >> 1;
                } while (uVar20 != 0);
                pcStack_3f8[0x18] = '\0';
                pcStack_3f8[0x19] = '\0';
                pcStack_3f8[0x1a] = '\0';
                pcStack_3f8[0x1b] = '\0';
                pcStack_3f8[0x1c] = '\0';
                pcStack_3f8[0x1d] = '\0';
                pcStack_3f8[0x1e] = '\0';
                pcStack_3f8[0x1f] = '\0';
                pcVar25 = pcStack_3f8;
              }
              pcVar25[4] = -1;
              pcVar25[5] = -1;
            }
            else {
              uStackX_20 = (int)uVar20 + uVar19;
              auStack_3c8[0] = *(undefined4 *)pcVar25;
              pcStack_3c0 = pcVar25;
              FUN_144f52950(lStack_3d0,auStack_3c8);
            }
            uVar20 = (ulonglong)uStackX_20;
            uVar18 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar18;
            uVar16 = uVar16 + 8;
          } while ((int)uVar18 < iStack_370);
        }
        iStack_370 = 0;
        *(undefined2 *)(lStack_420 + 4) = 0xffff;
        if ((-1 < (int)uStack_36c) && (puStack_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,puStack_378,(ulonglong)(uStack_36c & 0x7fffffff) << 3);
        }
        puStack_378 = (undefined1 *)0x0;
        uStack_36c = 0x80000000;
        lVar8 = lStack_408;
      }
      else {
        uStackX_20 = 0;
      }
    }
    pcStack_3b8 = "StGetNext";
    pcStack_3b0 = "";
    if (lVar22 != 0) {
      uStack_2c8 = 0x49c0de40;
      uStack_2c4 = 1;
      uStack_2c0 = 0x49c0de49;
      uStack_2bc = 1;
      FUN_144be99f0(lVar22,&uStack_2c8);
    }
    lVar15 = *(longlong *)(param_1 + 8);
    lStack_420 = 0;
    while ((param_2 == 0 || (*(short *)(param_2 + 4) != -1))) {
      do {
        if (*(int *)(param_1 + 0x28) != 0) {
          lStack_420 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
          *(short *)(lStack_420 + 6) = *(short *)(lStack_420 + 6) + -1;
          *(short *)(lStack_420 + 8) = *(short *)(lStack_420 + 8) + 1;
          uStack_380 = (uint)*(ushort *)(lStack_420 + 6);
          if (uStack_380 == 0) {
            FUN_144f52a00((longlong *)(param_1 + 0x20),0);
          }
          goto LAB_144f55c6f;
        }
        if (*(char *)(param_1 + 0x348) == '\0') {
          if (param_2 != 0) goto LAB_144f55bcf;
        }
        else {
          if (param_2 == 0) goto LAB_144f55c6f;
LAB_144f55bcf:
          uVar7 = (ulonglong)(*(uint *)(lVar8 + 8) >> 6);
          *(ulonglong *)(param_2 + 0x18 + uVar7 * 8) =
               *(ulonglong *)(param_2 + 0x18 + uVar7 * 8) | 1L << (*(uint *)(lVar8 + 8) & 0x3f);
        }
        *(undefined1 *)(lVar8 + 0x10) = 1;
        FUN_144be5e70(lVar15 + 8);
        FUN_144be5cd0(*(undefined8 *)(lVar8 + 0x178));
        FUN_144be5d20(lVar15 + 8);
      } while (param_2 == 0);
      uVar7 = (ulonglong)(*(uint *)(lVar8 + 8) >> 6);
      *(ulonglong *)(param_2 + 0x18 + uVar7 * 8) =
           *(ulonglong *)(param_2 + 0x18 + uVar7 * 8) & ~(1L << (*(uint *)(lVar8 + 8) & 0x3f));
    }
LAB_144f55c6f:
    if (lVar22 != 0) {
      puStack_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      uStack_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar22,&uStack_2b8);
    }
    uVar7 = 0;
    if ((param_2 != 0) && (lStack_420 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar11 = *(longlong **)(param_2 + 0x40);
        uVar16 = uVar7;
        uVar20 = uVar7;
        do {
          iVar24 = (int)uVar16;
          if (*plVar11 == lVar9) goto LAB_144f55cef;
          uVar16 = (ulonglong)(iVar24 + 1);
          uVar20 = uVar20 + 1;
          plVar11 = plVar11 + 1;
        } while ((longlong)uVar20 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar24 = -1;
      uVar20 = 0xffffffffffffffff;
LAB_144f55cef:
      iVar14 = *(int *)(param_2 + 0x48);
      iVar6 = iVar14 + -1;
      *(int *)(param_2 + 0x48) = iVar6;
      if (iVar6 != iVar24) {
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar14 + -1) * 8);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar20 * 8);
        if (puVar13 != puVar17) {
          *puVar13 = *puVar17;
        }
      }
    }
    if (*(char *)(lVar8 + 0x50) != '\0') {
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        LOCK();
        plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
        lVar15 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar15 == 1) {
          lVar15 = *(longlong *)(lVar8 + 0x38);
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(lVar8 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar15);
        }
      }
      *(undefined8 *)(lVar8 + 0x48) = 0;
      puVar12 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar8 + 0x18),auStack_2a8);
      lVar15 = *(longlong *)(lVar8 + 0x48);
      uVar5 = puVar12[1];
      uVar2 = puVar12[2];
      uVar3 = puVar12[3];
      *(undefined4 *)(lVar8 + 0x20) = *puVar12;
      *(undefined4 *)(lVar8 + 0x24) = uVar5;
      *(undefined4 *)(lVar8 + 0x28) = uVar2;
      *(undefined4 *)(lVar8 + 0x2c) = uVar3;
      uVar5 = puVar12[5];
      uVar2 = puVar12[6];
      uVar3 = puVar12[7];
      *(undefined4 *)(lVar8 + 0x30) = puVar12[4];
      *(undefined4 *)(lVar8 + 0x34) = uVar5;
      *(undefined4 *)(lVar8 + 0x38) = uVar2;
      *(undefined4 *)(lVar8 + 0x3c) = uVar3;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(puVar12 + 10);
      *(undefined8 *)(puVar12 + 10) = 0;
      if (lVar15 != 0) {
        LOCK();
        plVar11 = (longlong *)(lVar15 + 0x60);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
      }
      if (lStack_280 != 0) {
        LOCK();
        plVar11 = (longlong *)(lStack_280 + 0x60);
        lVar15 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar15 == 1) {
          lVar15 = lStack_2a0;
          if (lStack_290 != 0) {
            lVar15 = lStack_290;
          }
          FUN_144bea6d0(lStack_280,lVar15);
        }
      }
      lStack_280 = 0;
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        LOCK();
        plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
        lVar15 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar15 == 1) {
          lVar15 = *(longlong *)(lVar8 + 0x38);
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(lVar8 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar15);
        }
      }
      *(undefined8 *)(lVar8 + 0x48) = 0;
      *(undefined1 *)(lVar8 + 0x50) = 0;
    }
    if (0 < (int)uStackX_20) {
      if (lStack_420 != 0) {
        uStackX_20 = uStackX_20 - 1;
      }
      if (0 < *(int *)(param_1 + 0x34)) {
        plVar11 = (longlong *)(param_1 + 0x38);
        uVar16 = uVar7;
        do {
          if ((int)uStackX_20 < 1) break;
          lVar15 = *plVar11;
          if (*(char *)(lVar15 + 0x10) != '\0') {
            *(undefined1 *)(lVar15 + 0x10) = 0;
            lVar21 = (longlong)iStack_270;
            iStack_270 = iStack_270 + 1;
            if ((longlong *)(puStack_278 + lVar21 * 8) != (longlong *)0x0) {
              *(longlong *)(puStack_278 + lVar21 * 8) = lVar15;
            }
            uStackX_20 = uStackX_20 - 1;
          }
          uVar18 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar18;
          plVar11 = plVar11 + 1;
        } while ((int)uVar18 < *(int *)(param_1 + 0x34));
      }
    }
    *(undefined1 *)(lVar8 + 0x11) = 1;
    (**(code **)(*plStack_3e8 + 0x10))();
    FUN_144bda9a0(*(undefined8 *)(lVar8 + 0x180),0xb011ac3e);
    if (iStack_270 != 0) {
      if (0 < iStack_270) {
        lVar15 = 0;
        do {
          FUN_144be5cf0(*(undefined8 *)(*(longlong *)(puStack_278 + lVar15) + 0x178));
          uVar18 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar18;
          lVar15 = lVar15 + 8;
        } while ((int)uVar18 < iStack_270);
      }
      iStack_270 = 0;
    }
    FUN_144bda9a0(*(undefined8 *)(lVar8 + 0x180),0xf0e3c62c);
    if (lStack_420 == 0) {
      FUN_144bda9a0(*(undefined8 *)(lVar8 + 0x180),0x77bbddcf);
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + -1;
      if (*(int *)(lVar8 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 8) + 8))();
        *(undefined8 *)(lVar8 + 0x18) = 0;
        if (*(longlong *)(lVar8 + 0x48) != 0) {
          LOCK();
          plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
          lVar22 = *plVar11;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (lVar22 == 1) {
            lVar22 = *(longlong *)(lVar8 + 0x38);
            if (lVar22 == 0) {
              lVar22 = *(longlong *)(lVar8 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar22);
          }
        }
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined1 *)(lVar8 + 0x50) = 0;
        *(undefined1 *)(lVar8 + 0x11) = 0;
        iVar24 = *(int *)(param_1 + 0x240);
        puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar24 * 4);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *(undefined4 *)(lVar8 + 8);
        }
        *(int *)(param_1 + 0x240) = iVar24 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      }
      FUN_144bda9a0(*(undefined8 *)(lVar8 + 0x180),0x51ba5d33);
      iStack_270 = 0;
      if ((-1 < (int)uStack_26c) && (puStack_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,puStack_278,(ulonglong)(uStack_26c & 0x7fffffff) << 3);
      }
      return (ulonglong)bStackX_18;
    }
    uVar5 = *(undefined4 *)(lStack_420 + 0xc);
    if (((lVar22 != 0) && (*(ulonglong *)(lVar22 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar22 + 0x10) <= *(ulonglong *)(lVar22 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar22,0x20), cVar4 != '\0')))) {
      puVar13 = *(undefined8 **)(lVar22 + 0x10);
      puVar17 = puVar13 + 2;
      if (*(undefined8 **)(lVar22 + 0x20) < puVar17) {
        if (*(undefined8 **)(lVar22 + 0x20) != puVar13) {
          FUN_144bfbef0(puVar13,0);
        }
        puVar13 = *(undefined8 **)(lVar22 + 8);
        puVar17 = puVar13 + 2;
      }
      *(undefined8 **)(lVar22 + 0x10) = puVar17;
      *puVar13 = &DAT_1499720c0;
      *(undefined4 *)(puVar13 + 1) = uVar5;
      FUN_144bea5e0(lVar22);
    }
    *(longlong *)(lVar8 + 0x170) = lStack_420;
    (**(code **)(**(longlong **)(lStack_420 + 0x58) + 0x18))
              (*(longlong **)(lStack_420 + 0x58),&lStack_398);
    *(longlong *)(lVar8 + 0x170) = lVar9;
    if (((lVar22 != 0) && (*(ulonglong *)(lVar22 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar22 + 0x10) <= *(ulonglong *)(lVar22 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar22,0x20), cVar4 != '\0')))) {
      puVar13 = *(undefined8 **)(lVar22 + 0x10);
      puVar17 = puVar13 + 2;
      if (*(undefined8 **)(lVar22 + 0x20) < puVar17) {
        if (*(undefined8 **)(lVar22 + 0x20) != puVar13) {
          FUN_144bfbef0(puVar13,0);
        }
        puVar13 = *(undefined8 **)(lVar22 + 8);
        puVar17 = puVar13 + 2;
      }
      *(undefined8 **)(lVar22 + 0x10) = puVar17;
      *puVar13 = &DAT_1499720c0;
      *(undefined4 *)(puVar13 + 1) = 0;
      FUN_144bea5f0(lVar22);
    }
    bStackX_18 = 1;
    FUN_144bda9a0(*(undefined8 *)(lVar8 + 0x180),0xe52d5b60);
  } while( true );
}



// FUNCTION 144f526a0 FUN_144f526a0 body=255 status=ok
// SIG undefined FUN_144f526a0(void)

void FUN_144f526a0(undefined8 param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 *local_98;
  int local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  uVar5 = (ulonglong)param_3;
  local_98 = local_88;
  local_90 = 0;
  local_8c = 0x80000010;
  plVar4 = param_2;
  if ((int)param_3 < 0x11) {
    iVar2 = local_90;
    if ((int)param_3 < 1) goto LAB_144f52749;
  }
  else {
    FUN_144f585d0(&local_98,&PTR_vftable_14c6e47c0,(longlong)(int)param_3);
    iVar2 = local_90;
  }
  do {
    iVar3 = iVar2;
    if (((param_2 != (longlong *)0x0) && (lVar1 = *plVar4, lVar1 != 0)) &&
       (*(short *)(lVar1 + 4) != -1)) {
      local_90 = iVar2 + 1;
      iVar3 = local_90;
      if ((longlong *)(local_98 + (longlong)iVar2 * 8) != (longlong *)0x0) {
        *(longlong *)(local_98 + (longlong)iVar2 * 8) = lVar1;
      }
    }
    uVar5 = uVar5 - 1;
    plVar4 = plVar4 + 1;
    iVar2 = iVar3;
  } while (uVar5 != 0);
LAB_144f52749:
  FUN_144be6470(param_1,local_98);
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144f527a0 FUN_144f527a0 body=13 status=ok
// SIG undefined FUN_144f527a0(void)

undefined8 FUN_144f527a0(undefined8 param_1,longlong param_2)

{
  return CONCAT71(0xff,*(short *)(param_2 + 4) == -1);
}



// FUNCTION 144f527b0 FUN_144f527b0 body=49 status=ok
// SIG undefined FUN_144f527b0(void)

void FUN_144f527b0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x18))(param_1,local_res10,1);
  return;
}



// FUNCTION 144f527f0 FUN_144f527f0 body=117 status=ok
// SIG undefined FUN_144f527f0(void)

undefined8 FUN_144f527f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res8;
  
  (**(code **)(*param_1 + 0x10))(param_1,&local_res8,1);
  (**(code **)(*param_1 + 0x20))(param_1,local_res8,param_2,param_3);
  (**(code **)(*param_1 + 0x38))(param_1,&local_res8,1,1,8);
  return local_res8;
}



// FUNCTION 144f52870 FUN_144f52870 body=71 status=ok
// SIG undefined FUN_144f52870(void)

undefined8 * FUN_144f52870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f528c0 FUN_144f528c0 body=3 status=ok
// SIG undefined FUN_144f528c0(void)

void FUN_144f528c0(void)

{
  return;
}



// FUNCTION 144f528d0 FUN_144f528d0 body=8 status=ok
// SIG undefined FUN_144f528d0(void)

char * FUN_144f528d0(void)

{
  return "EmptyTask";
}



// FUNCTION 144f528e0 FUN_144f528e0 body=11 status=ok
// SIG undefined FUN_144f528e0(void)

void FUN_144f528e0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x98) = 1;
  return;
}



// FUNCTION 144f528f0 FUN_144f528f0 body=87 status=ok
// SIG undefined FUN_144f528f0(void)

undefined8 FUN_144f528f0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be5f30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f52950 FUN_144f52950 body=170 status=ok
// SIG undefined FUN_144f52950(void)

void FUN_144f52950(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  iVar1 = uVar3 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_144f586c0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  puVar9 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (puVar9 != (undefined8 *)0x0) {
    uVar5 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar5;
  }
  *(int *)(param_1 + 1) = iVar1;
  while( true ) {
    uVar8 = (int)(uVar3 - 1) >> 1;
    if ((int)uVar8 < 0) {
      return;
    }
    lVar4 = *param_1;
    lVar11 = (longlong)(int)uVar3;
    uVar10 = (ulonglong)uVar8;
    if (*(uint *)(lVar4 + lVar11 * 0x10) < *(uint *)(lVar4 + uVar10 * 0x10)) break;
    puVar9 = (undefined8 *)(lVar4 + uVar10 * 0x10);
    uVar5 = puVar9[1];
    puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    *puVar2 = *puVar9;
    puVar2[1] = uVar5;
    puVar9 = (undefined8 *)(lVar4 + uVar10 * 0x10);
    *puVar9 = uVar6;
    puVar9[1] = uVar7;
    uVar3 = uVar8;
  }
  return;
}



// FUNCTION 144f52a00 FUN_144f52a00 body=335 status=ok
// SIG undefined FUN_144f52a00(void)

void FUN_144f52a00(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar14 = (ulonglong)param_2;
  iVar11 = (int)param_1[1];
  if (param_2 == iVar11 + -1) {
    *(int *)(param_1 + 1) = iVar11 + -1;
    return;
  }
  lVar4 = *param_1;
  uVar10 = *(uint *)(lVar4 + -0x10 + (longlong)iVar11 * 0x10);
  puVar2 = (undefined8 *)(lVar4 + -0x10 + (longlong)iVar11 * 0x10);
  uVar6 = puVar2[1];
  uVar3 = *(uint *)(lVar4 + uVar14 * 0x10);
  puVar1 = (undefined8 *)(lVar4 + uVar14 * 0x10);
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  iVar11 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar11;
  if (uVar3 < uVar10) {
    uVar10 = param_2 + -1 >> 1;
    if (-1 < (int)uVar10) {
      while( true ) {
        lVar4 = *param_1;
        lVar12 = (longlong)(int)uVar14;
        uVar9 = (ulonglong)uVar10;
        if (*(uint *)(lVar4 + lVar12 * 0x10) < *(uint *)(lVar4 + uVar9 * 0x10)) break;
        puVar1 = (undefined8 *)(lVar4 + uVar9 * 0x10);
        uVar6 = puVar1[1];
        uVar14 = (ulonglong)uVar10;
        uVar10 = (int)(uVar10 - 1) >> 1;
        puVar2 = (undefined8 *)(lVar4 + lVar12 * 0x10);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar4 + lVar12 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar1 = (undefined8 *)(lVar4 + uVar9 * 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        if ((int)uVar10 < 0) {
          return;
        }
      }
    }
  }
  else {
    param_2 = param_2 * 2;
    uVar10 = param_2 + 1;
    if (param_2 + 2 < iVar11) {
      uVar10 = (2 - (uint)(*(uint *)(*param_1 + ((longlong)param_2 + 2) * 0x10) <
                          *(uint *)(*param_1 + (longlong)(int)uVar10 * 0x10))) + param_2;
    }
    while ((int)uVar10 < iVar11) {
      uVar9 = (ulonglong)uVar10;
      lVar4 = *param_1;
      lVar13 = (longlong)(int)uVar14;
      lVar12 = (longlong)(int)uVar10;
      if (*(uint *)(lVar4 + lVar12 * 0x10) <= *(uint *)(lVar4 + lVar13 * 0x10)) {
        return;
      }
      puVar1 = (undefined8 *)(lVar4 + lVar12 * 0x10);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + lVar13 * 0x10);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + lVar13 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(lVar4 + lVar12 * 0x10);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      iVar5 = uVar10 * 2;
      uVar10 = iVar5 + 1;
      uVar14 = uVar9;
      if (iVar5 + 2 < (int)param_1[1]) {
        uVar10 = (2 - (uint)(*(uint *)(*param_1 + ((longlong)iVar5 + 2) * 0x10) <
                            *(uint *)(*param_1 + (longlong)(int)uVar10 * 0x10))) + iVar5;
      }
    }
  }
  return;
}



// FUNCTION 144f52b50 FUN_144f52b50 body=104 status=ok
// SIG undefined FUN_144f52b50(void)

void FUN_144f52b50(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144f52bc0 FUN_144f52bc0 body=87 status=ok
// SIG undefined FUN_144f52bc0(void)

undefined8 FUN_144f52bc0(undefined8 param_1,ulonglong param_2)

{
  FUN_144f51590();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 144f52c20 FUN_144f52c20 body=2216 status=ok
// SIG undefined FUN_144f52c20(void)

longlong FUN_144f52c20(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x28);
  lVar2 = 0x2a;
  do {
    *puVar1 = 0;
    *(undefined4 **)(puVar1 + 6) = puVar1 + 10;
    *(undefined4 **)(puVar1 + -2) = puVar1 + 2;
    puVar1[1] = 0x80000002;
    puVar1[8] = 0;
    puVar1[9] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x16) = puVar1 + 0x1a;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x1e) = puVar1 + 0x22;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x2e) = puVar1 + 0x32;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x36) = puVar1 + 0x3a;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x46) = puVar1 + 0x4a;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x4e) = puVar1 + 0x52;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x5e) = puVar1 + 0x62;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x66) = puVar1 + 0x6a;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x76) = puVar1 + 0x7a;
    puVar1[0x78] = 0;
    puVar1[0x79] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x7e) = puVar1 + 0x82;
    puVar1[0x80] = 0;
    puVar1[0x81] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x8e) = puVar1 + 0x92;
    puVar1[0x90] = 0;
    puVar1[0x91] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x96) = puVar1 + 0x9a;
    puVar1[0x98] = 0;
    puVar1[0x99] = 0x80000001;
    *(undefined4 **)(puVar1 + 0xa6) = puVar1 + 0xaa;
    puVar1[0xa8] = 0;
    puVar1[0xa9] = 0x80000002;
    *(undefined4 **)(puVar1 + 0xae) = puVar1 + 0xb2;
    puVar1[0xb0] = 0;
    puVar1[0xb1] = 0x80000001;
    *(undefined4 **)(puVar1 + 0xbe) = puVar1 + 0xc2;
    puVar1[0xc0] = 0;
    puVar1[0xc1] = 0x80000002;
    *(undefined4 **)(puVar1 + 0xc6) = puVar1 + 0xca;
    puVar1[200] = 0;
    puVar1[0xc9] = 0x80000001;
    *(undefined4 **)(puVar1 + 0xd6) = puVar1 + 0xda;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0x80000002;
    *(undefined4 **)(puVar1 + 0xde) = puVar1 + 0xe2;
    puVar1[0xe0] = 0;
    puVar1[0xe1] = 0x80000001;
    *(undefined4 **)(puVar1 + 0xee) = puVar1 + 0xf2;
    puVar1[0xf0] = 0;
    puVar1[0xf1] = 0x80000002;
    *(undefined4 **)(puVar1 + 0xf6) = puVar1 + 0xfa;
    puVar1[0xf8] = 0;
    puVar1[0xf9] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x106) = puVar1 + 0x10a;
    puVar1[0x108] = 0;
    puVar1[0x109] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x10e) = puVar1 + 0x112;
    puVar1[0x110] = 0;
    puVar1[0x111] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x11e) = puVar1 + 0x122;
    puVar1[0x120] = 0;
    puVar1[0x121] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x126) = puVar1 + 0x12a;
    puVar1[0x128] = 0;
    puVar1[0x129] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x136) = puVar1 + 0x13a;
    puVar1[0x138] = 0;
    puVar1[0x139] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x13e) = puVar1 + 0x142;
    puVar1[0x140] = 0;
    puVar1[0x141] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x14e) = puVar1 + 0x152;
    puVar1[0x150] = 0;
    puVar1[0x151] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x156) = puVar1 + 0x15a;
    puVar1[0x158] = 0;
    puVar1[0x159] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x166) = puVar1 + 0x16a;
    puVar1[0x168] = 0;
    puVar1[0x169] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x16e) = puVar1 + 0x172;
    puVar1[0x170] = 0;
    puVar1[0x171] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x17e) = puVar1 + 0x182;
    puVar1[0x180] = 0;
    puVar1[0x181] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x186) = puVar1 + 0x18a;
    puVar1[0x188] = 0;
    puVar1[0x189] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x196) = puVar1 + 0x19a;
    puVar1[0x198] = 0;
    puVar1[0x199] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x19e) = puVar1 + 0x1a2;
    puVar1[0x1a0] = 0;
    puVar1[0x1a1] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x1ae) = puVar1 + 0x1b2;
    puVar1[0x1b0] = 0;
    puVar1[0x1b1] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x1b6) = puVar1 + 0x1ba;
    puVar1[0x1b8] = 0;
    puVar1[0x1b9] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x1c6) = puVar1 + 0x1ca;
    puVar1[0x1c8] = 0;
    puVar1[0x1c9] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x1ce) = puVar1 + 0x1d2;
    puVar1[0x1d0] = 0;
    puVar1[0x1d1] = 0x80000001;
    *(undefined4 **)(puVar1 + 0x1de) = puVar1 + 0x1e2;
    puVar1[0x1e0] = 0;
    puVar1[0x1e1] = 0x80000002;
    *(undefined4 **)(puVar1 + 0x1e6) = puVar1 + 0x1ea;
    puVar1[0x1e8] = 0;
    puVar1[0x1e9] = 0x80000001;
    puVar1 = puVar1 + 0x1f8;
    lVar2 = lVar2 + -0x15;
  } while (lVar2 != 0);
  *(longlong *)(param_1 + 0x58) = param_1 + 0x60;
  *(undefined2 *)(param_1 + 4) = 0xfffe;
  *(undefined2 *)(param_1 + 100) = 0xfffe;
  *(longlong *)(param_1 + 0xb8) = param_1 + 0xc0;
  *(undefined2 *)(param_1 + 0xc4) = 0xfffe;
  *(longlong *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined2 *)(param_1 + 0x124) = 0xfffe;
  *(longlong *)(param_1 + 0x178) = param_1 + 0x180;
  *(undefined2 *)(param_1 + 0x184) = 0xfffe;
  *(longlong *)(param_1 + 0x1d8) = param_1 + 0x1e0;
  *(undefined2 *)(param_1 + 0x1e4) = 0xfffe;
  *(longlong *)(param_1 + 0x238) = param_1 + 0x240;
  *(undefined2 *)(param_1 + 0x244) = 0xfffe;
  *(longlong *)(param_1 + 0x298) = param_1 + 0x2a0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xfffe;
  *(longlong *)(param_1 + 0x2f8) = param_1 + 0x300;
  *(undefined2 *)(param_1 + 0x304) = 0xfffe;
  *(longlong *)(param_1 + 0x358) = param_1 + 0x360;
  *(undefined2 *)(param_1 + 0x364) = 0xfffe;
  *(longlong *)(param_1 + 0x3b8) = param_1 + 0x3c0;
  *(undefined2 *)(param_1 + 0x3c4) = 0xfffe;
  *(longlong *)(param_1 + 0x418) = param_1 + 0x420;
  *(undefined2 *)(param_1 + 0x424) = 0xfffe;
  *(longlong *)(param_1 + 0x478) = param_1 + 0x480;
  *(undefined2 *)(param_1 + 0x484) = 0xfffe;
  *(longlong *)(param_1 + 0x4d8) = param_1 + 0x4e0;
  *(undefined2 *)(param_1 + 0x4e4) = 0xfffe;
  *(longlong *)(param_1 + 0x538) = param_1 + 0x540;
  *(undefined2 *)(param_1 + 0x544) = 0xfffe;
  *(longlong *)(param_1 + 0x598) = param_1 + 0x5a0;
  *(undefined2 *)(param_1 + 0x5a4) = 0xfffe;
  *(longlong *)(param_1 + 0x5f8) = param_1 + 0x600;
  *(undefined2 *)(param_1 + 0x604) = 0xfffe;
  *(longlong *)(param_1 + 0x658) = param_1 + 0x660;
  *(undefined2 *)(param_1 + 0x664) = 0xfffe;
  *(longlong *)(param_1 + 0x6b8) = param_1 + 0x6c0;
  *(undefined2 *)(param_1 + 0x6c4) = 0xfffe;
  *(longlong *)(param_1 + 0x718) = param_1 + 0x720;
  *(undefined2 *)(param_1 + 0x724) = 0xfffe;
  *(longlong *)(param_1 + 0x778) = param_1 + 0x780;
  *(undefined2 *)(param_1 + 0x784) = 0xfffe;
  *(longlong *)(param_1 + 0x7d8) = param_1 + 0x7e0;
  *(undefined2 *)(param_1 + 0x7e4) = 0xfffe;
  *(longlong *)(param_1 + 0x838) = param_1 + 0x840;
  *(undefined2 *)(param_1 + 0x844) = 0xfffe;
  *(longlong *)(param_1 + 0x898) = param_1 + 0x8a0;
  *(undefined2 *)(param_1 + 0x8a4) = 0xfffe;
  *(longlong *)(param_1 + 0x8f8) = param_1 + 0x900;
  *(undefined2 *)(param_1 + 0x904) = 0xfffe;
  *(longlong *)(param_1 + 0x958) = param_1 + 0x960;
  *(undefined2 *)(param_1 + 0x964) = 0xfffe;
  *(longlong *)(param_1 + 0x9b8) = param_1 + 0x9c0;
  *(undefined2 *)(param_1 + 0x9c4) = 0xfffe;
  *(longlong *)(param_1 + 0xa18) = param_1 + 0xa20;
  *(undefined2 *)(param_1 + 0xa24) = 0xfffe;
  *(longlong *)(param_1 + 0xa78) = param_1 + 0xa80;
  *(undefined2 *)(param_1 + 0xa84) = 0xfffe;
  *(longlong *)(param_1 + 0xad8) = param_1 + 0xae0;
  *(undefined2 *)(param_1 + 0xae4) = 0xfffe;
  *(longlong *)(param_1 + 0xb38) = param_1 + 0xb40;
  *(undefined2 *)(param_1 + 0xb44) = 0xfffe;
  *(longlong *)(param_1 + 0xb98) = param_1 + 0xba0;
  *(undefined2 *)(param_1 + 0xba4) = 0xfffe;
  *(longlong *)(param_1 + 0xbf8) = param_1 + 0xc00;
  *(undefined2 *)(param_1 + 0xc04) = 0xfffe;
  *(longlong *)(param_1 + 0xc58) = param_1 + 0xc60;
  *(undefined2 *)(param_1 + 0xc64) = 0xfffe;
  *(longlong *)(param_1 + 0xcb8) = param_1 + 0xcc0;
  *(undefined2 *)(param_1 + 0xcc4) = 0xfffe;
  *(longlong *)(param_1 + 0xd18) = param_1 + 0xd20;
  *(undefined2 *)(param_1 + 0xd24) = 0xfffe;
  *(longlong *)(param_1 + 0xd78) = param_1 + 0xd80;
  *(undefined2 *)(param_1 + 0xd84) = 0xfffe;
  *(longlong *)(param_1 + 0xdd8) = param_1 + 0xde0;
  *(undefined2 *)(param_1 + 0xde4) = 0xfffe;
  *(longlong *)(param_1 + 0xe38) = param_1 + 0xe40;
  *(undefined2 *)(param_1 + 0xe44) = 0xfffe;
  *(longlong *)(param_1 + 0xe98) = param_1 + 0xea0;
  *(undefined2 *)(param_1 + 0xea4) = 0xfffe;
  *(longlong *)(param_1 + 0xef8) = param_1 + 0xf00;
  *(undefined2 *)(param_1 + 0xf04) = 0xfffe;
  *(longlong *)(param_1 + 0xf58) = param_1 + 0xf60;
  *(undefined2 *)(param_1 + 0xf64) = 0xfffe;
  *(undefined8 *)(param_1 + 0xfb8) = 0;
  *(undefined8 *)(param_1 + 0xfc0) = 0;
  return param_1;
}



// FUNCTION 144f534d0 FUN_144f534d0 body=757 status=ok
// SIG undefined FUN_144f534d0(void)

longlong * FUN_144f534d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  FUN_144b4a250(param_1 + 2);
  lVar3 = 0;
  local_res8 = 0xfc8;
  param_1[1] = 0;
  *param_1 = 0;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(longlong *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  local_res8 = 0xfc8;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(longlong *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  local_res8 = 0xfc8;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(longlong *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  local_res8 = 0xfc8;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(longlong *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  local_res8 = 0xfc8;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(longlong *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  local_res8 = 0xfc8;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar2 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(longlong *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  local_res8 = 0xfc8;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"Block");
  }
  if (lVar1 != 0) {
    lVar3 = FUN_144f52c20(lVar1);
  }
  *(longlong *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(longlong *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 144f537d0 FUN_144f537d0 body=272 status=ok
// SIG undefined FUN_144f537d0(void)

void FUN_144f537d0(undefined8 *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 local_38 [2];
  
  if (0 < (int)param_3) {
    uVar3 = (ulonglong)param_3;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    do {
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 == (undefined4 *)0x0) {
        local_38[0] = 0xfc8;
        lVar1 = (*DAT_14c787670)(0,local_38,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(lVar1,"Block");
        }
        puVar2 = (undefined4 *)0x0;
        if (lVar1 != 0) {
          puVar2 = (undefined4 *)FUN_144f52c20(lVar1);
        }
        *(undefined8 *)(puVar2 + 0x3f0) = *param_1;
        *param_1 = puVar2;
        *(undefined8 *)(puVar2 + 0x3ee) = param_1[1];
        param_1[1] = puVar2;
      }
      param_1[1] = *(undefined8 *)(puVar2 + 0x16);
      puVar2[1] = 0x10001;
      puVar2[2] = 0x40000000;
      *(undefined8 *)(puVar2 + 6) = 0;
      *puVar2 = 0;
      *(undefined8 *)(puVar2 + 0x16) = 0;
      puVar2[10] = 0;
      puVar2[0x12] = 0;
      *param_2 = puVar2;
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  return;
}



// FUNCTION 144f538e0 FUN_144f538e0 body=373 status=ok
// SIG undefined FUN_144f538e0(void)

void FUN_144f538e0(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < (int)param_3) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    uVar5 = (ulonglong)param_3;
    lVar3 = 0;
    plVar6 = param_2;
    do {
      lVar1 = *plVar6;
      lVar7 = lVar1 + 0x30;
      *(undefined2 *)(lVar1 + 4) = 0xfffe;
      *(longlong *)(lVar1 + 0x58) = lVar3;
      if ((*(longlong *)(lVar1 + 0x20) != lVar7) && (-1 < (int)*(uint *)(lVar1 + 0x2c))) {
        uVar4 = *(int *)(lVar1 + 0x28) - 1;
        uVar4 = uVar4 | (int)uVar4 >> 0x10;
        uVar4 = uVar4 | (int)uVar4 >> 8;
        uVar4 = uVar4 | (int)uVar4 >> 4;
        uVar4 = uVar4 | (int)uVar4 >> 2;
        iVar2 = ((int)uVar4 >> 1 | uVar4) + 1;
        if (iVar2 < 2) {
          iVar2 = 2;
        }
        else {
          if ((int)(*(uint *)(lVar1 + 0x2c) & 0x7fffffff) <= iVar2) goto LAB_144f539a5;
          lVar7 = 0;
        }
        FUN_144f58310(&PTR_vftable_14c6e47a0,(longlong *)(lVar1 + 0x20),lVar7,iVar2);
      }
LAB_144f539a5:
      lVar3 = lVar1 + 0x50;
      if ((*(longlong *)(lVar1 + 0x40) != lVar3) && (-1 < (int)*(uint *)(lVar1 + 0x4c))) {
        uVar4 = *(int *)(lVar1 + 0x48) - 1;
        uVar4 = uVar4 | (int)uVar4 >> 0x10;
        uVar4 = uVar4 | (int)uVar4 >> 8;
        uVar4 = uVar4 | (int)uVar4 >> 4;
        uVar4 = uVar4 | (int)uVar4 >> 2;
        iVar2 = ((int)uVar4 >> 1 | uVar4) + 1;
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        else {
          if ((int)(*(uint *)(lVar1 + 0x4c) & 0x7fffffff) <= iVar2) goto LAB_144f53a0d;
          lVar3 = 0;
        }
        FUN_144f58310(&PTR_vftable_14c6e47a0,(longlong *)(lVar1 + 0x40),lVar3,iVar2);
      }
LAB_144f53a0d:
      plVar6 = (longlong *)((longlong)plVar6 + (longlong)param_4);
      uVar5 = uVar5 - 1;
      lVar3 = lVar1;
    } while (uVar5 != 0);
    *(undefined8 *)(*param_2 + 0x58) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 144f53a60 FUN_144f53a60 body=149 status=ok
// SIG undefined FUN_144f53a60(void)

void FUN_144f53a60(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = hkDefaultTaskQueue::ThreadContext::vftable;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  if (param_1[9] != 0) {
    LOCK();
    plVar1 = (longlong *)(param_1[9] + 0x60);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 1) {
      lVar2 = param_1[7];
      if (lVar2 == 0) {
        lVar2 = param_1[5];
      }
      FUN_144bea6d0(param_1[9],lVar2);
    }
  }
  param_1[9] = 0;
  return;
}



// FUNCTION 144f53b00 FUN_144f53b00 body=87 status=ok
// SIG undefined FUN_144f53b00(void)

undefined8 FUN_144f53b00(undefined8 param_1,ulonglong param_2)

{
  FUN_144f53a60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 144f53b60 FUN_144f53b60 body=102 status=ok
// SIG undefined FUN_144f53b60(void)

longlong FUN_144f53b60(longlong param_1,ulonglong param_2)

{
  FUN_144b49690(param_1 + 0x178);
  FUN_144f53a60(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 144f53bd0 FUN_144f53bd0 body=87 status=ok
// SIG undefined FUN_144f53bd0(void)

undefined8 FUN_144f53bd0(undefined8 param_1,ulonglong param_2)

{
  FUN_144f53a60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 144f53c30 FUN_144f53c30 body=139 status=ok
// SIG undefined FUN_144f53c30(void)

longlong FUN_144f53c30(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    FUN_144be5cc0(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_144f53a60(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,400);
  }
  return param_1;
}



// FUNCTION 144f53cc0 FUN_144f53cc0 body=19 status=ok
// SIG undefined FUN_144f53cc0(void)

void FUN_144f53cc0(longlong param_1)

{
  bool bVar1;
  
  do {
    LOCK();
    bVar1 = *(int *)(param_1 + 8) == 0;
    if (bVar1) {
      *(int *)(param_1 + 8) = 1;
    }
    UNLOCK();
  } while (!bVar1);
  return;
}



// FUNCTION 144f53ce0 FUN_144f53ce0 body=11 status=ok
// SIG undefined FUN_144f53ce0(void)

void FUN_144f53ce0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144f53cf0 FUN_144f53cf0 body=71 status=ok
// SIG undefined FUN_144f53cf0(void)

undefined8 * FUN_144f53cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144f53d40 FUN_144f53d40 body=9 status=ok
// SIG undefined FUN_144f53d40(void)

void FUN_144f53d40(longlong param_1)

{
  FUN_144be5d20(param_1 + 8);
  return;
}



// FUNCTION 144f53d50 FUN_144f53d50 body=9 status=ok
// SIG undefined FUN_144f53d50(void)

void FUN_144f53d50(longlong param_1)

{
  FUN_144be5e70(param_1 + 8);
  return;
}



// FUNCTION 144f53d60 FUN_144f53d60 body=101 status=ok
// SIG undefined FUN_144f53d60(void)

undefined8 * FUN_144f53d60(undefined8 *param_1,ulonglong param_2)

{
  FUN_144be5d10(param_1 + 1);
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 144f53dd0 FUN_144f53dd0 body=3010 status=ok
// SIG undefined FUN_144f53dd0(void)

undefined1 FUN_144f53dd0(longlong param_1,longlong param_2)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  char *pcVar26;
  bool bVar27;
  undefined1 local_res18;
  uint local_res20;
  longlong local_428;
  int local_418;
  int iStack_414;
  longlong local_410;
  char *local_408;
  char *pcStack_400;
  longlong *local_3f8;
  char *pcStack_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  undefined4 local_3d0 [2];
  char *local_3c8;
  char *local_3b8;
  char *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 *local_378;
  int local_370;
  uint local_36c;
  undefined1 local_368 [128];
  char *local_2e8;
  char *pcStack_2e0;
  char *local_2d8;
  char *pcStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  longlong local_290;
  longlong local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268 [552];
  
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar25 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar25 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar25 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar25 + 0xf0) = lVar8;
  }
  lVar25 = *(longlong *)(lVar8 + 0x3e0);
  plVar11 = *(longlong **)(param_1 + 0x20);
  local_3d8 = lVar25;
  lVar8 = FUN_144bdb730(DAT_14c797a88);
  local_410 = lVar8;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x168) != param_1)) {
    (**(code **)(*plVar11 + 8))(plVar11);
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x250) + -4 + (longlong)*(int *)(param_1 + 600) * 4);
    iVar7 = iVar24 + 1;
    iVar15 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar7) {
      iVar15 = iVar7;
    }
    *(int *)(param_1 + 0x4c) = iVar15;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lVar8 = *(longlong *)(param_1 + 0x50 + (longlong)iVar24 * 8);
    *(longlong *)(lVar8 + 0x18) = lVar25;
    *(undefined4 *)(lVar8 + 0xc) = 1;
    local_410 = lVar8;
    FUN_144bdb6a0();
    if (*(int *)(param_1 + 900) == 2) {
      uVar6 = FUN_144bda950();
      *(undefined4 *)(lVar8 + 0x188) = uVar6;
      local_3e8 = 0x10;
      lVar9 = (*DAT_14c787670)(0,&local_3e8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)();
      }
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_144be5ca0(lVar9,*(undefined8 *)(lVar8 + 0x180),uVar6);
      }
      lVar9 = *(longlong *)(lVar8 + 0x178);
      *(undefined8 *)(lVar8 + 0x178) = uVar10;
      if (lVar9 != 0) {
        FUN_144be5cc0(lVar9);
        (*DAT_14c787678)(0,lVar9,0);
      }
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else {
    if (*(longlong *)(lVar8 + 0x18) != lVar25) {
      (**(code **)(*plVar11 + 8))(plVar11);
      *(longlong *)(lVar8 + 0x18) = lVar25;
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
  }
  local_398 = param_1 + 0x18;
  local_388 = 0;
  local_3e0 = param_1 + 0x38;
  local_380 = 0;
  local_390 = *(undefined8 *)(lVar8 + 0x18);
  local_278 = local_268;
  local_res18 = 0;
  pcStack_3f0 = "";
  local_408 = "LtGetNextTask";
  pcStack_400 = "";
  local_428 = 0;
  local_270 = 0;
  local_26c = 0x80000040;
  do {
    local_3f8 = *(longlong **)(param_1 + 0x20);
    (**(code **)(*local_3f8 + 8))();
    lVar9 = *(longlong *)(lVar8 + 0x170);
    *(undefined1 *)(lVar8 + 0x11) = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar24 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar24) {
        FUN_144f587b0(param_2 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      plVar11 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = lVar9;
      }
      *(int *)(param_2 + 0x48) = iVar24;
    }
    if (lVar25 != 0) {
      local_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      local_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar25);
    }
    uVar12 = 0;
    uVar22 = uVar12;
    if (local_428 != 0) {
      if ((*(char *)(local_428 + 10) != '\0') && (*(short *)(local_428 + 6) != 0)) {
        *(undefined2 *)(local_428 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          do {
            if (local_428 == *plVar11) {
              FUN_144f52a00((longlong *)(param_1 + 0x38));
              break;
            }
            uVar19 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar19;
            plVar11 = plVar11 + 2;
          } while ((int)uVar19 < *(int *)(param_1 + 0x40));
        }
      }
      uVar22 = 0;
      *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + -1;
      if ((uint)*(ushort *)(local_428 + 6) + (uint)*(ushort *)(local_428 + 8) == 0) {
        iVar24 = *(int *)(local_428 + 0x28);
        local_378 = local_368;
        local_370 = 0;
        local_36c = 0x80000010;
        if (0 < (longlong)iVar24) {
          do {
            lVar25 = *(longlong *)(*(longlong *)(local_428 + 0x20) + uVar12 * 8);
            psVar1 = (short *)(lVar25 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar15 = local_370 + 1;
              if ((int)(local_36c & 0x7fffffff) < iVar15) {
                FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar15);
              }
              lVar8 = (longlong)local_370;
              local_370 = iVar15;
              if ((longlong *)(local_378 + lVar8 * 8) != (longlong *)0x0) {
                *(longlong *)(local_378 + lVar8 * 8) = lVar25;
              }
            }
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < (longlong)iVar24);
        }
        lVar25 = 0;
        *(undefined4 *)(local_428 + 0x28) = 0;
        uVar22 = *(ulonglong *)(local_428 + 0x18);
        if (uVar22 != 0) {
          do {
            if (((uVar22 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + lVar25 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar25 * 8) + 0x10) = 0;
              FUN_144bdf120(*(longlong *)(param_1 + 0x50 + lVar25 * 8) + 0x178,1);
            }
            lVar25 = lVar25 + 1;
            uVar22 = uVar22 >> 1;
          } while (uVar22 != 0);
          *(undefined8 *)(local_428 + 0x18) = 0;
        }
        lVar25 = 0;
        uVar22 = 0;
        local_res20 = 0;
        iVar24 = 0;
        if (0 < local_370) {
          do {
            pcVar26 = *(char **)(local_378 + lVar25);
            local_408 = pcVar26;
            (**(code **)(**(longlong **)(pcVar26 + 0x58) + 0x10))
                      (*(longlong **)(pcVar26 + 0x58),&local_418);
            iVar15 = 0;
            if (0 < local_418) {
              iVar15 = local_418;
            }
            uVar18 = 0xffff;
            if (iVar15 < 0xffff) {
              uVar18 = (ushort)iVar15;
            }
            *(ushort *)(pcVar26 + 6) = uVar18;
            pcVar26[10] = iStack_414 == 1;
            if (uVar18 == 0) {
              plVar23 = *(longlong **)(pcVar26 + 0x20);
              plVar11 = plVar23 + *(int *)(pcVar26 + 0x28);
              for (; plVar23 != plVar11; plVar23 = plVar23 + 1) {
                lVar8 = *plVar23;
                psVar1 = (short *)(lVar8 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar15 = local_370 + 1;
                  if ((int)(local_36c & 0x7fffffff) < iVar15) {
                    FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar15);
                  }
                  lVar16 = (longlong)local_370;
                  local_370 = iVar15;
                  if ((longlong *)(local_378 + lVar16 * 8) != (longlong *)0x0) {
                    *(longlong *)(local_378 + lVar16 * 8) = lVar8;
                  }
                }
              }
              lVar8 = 0;
              pcVar26[0x28] = '\0';
              pcVar26[0x29] = '\0';
              pcVar26[0x2a] = '\0';
              pcVar26[0x2b] = '\0';
              uVar22 = *(ulonglong *)(pcVar26 + 0x18);
              if (uVar22 != 0) {
                do {
                  if (((uVar22 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x50 + lVar8 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar8 * 8) + 0x10) = 0;
                    FUN_144bdf120(*(longlong *)(param_1 + 0x50 + lVar8 * 8) + 0x178,1);
                  }
                  lVar8 = lVar8 + 1;
                  uVar22 = uVar22 >> 1;
                } while (uVar22 != 0);
                local_408[0x18] = '\0';
                local_408[0x19] = '\0';
                local_408[0x1a] = '\0';
                local_408[0x1b] = '\0';
                local_408[0x1c] = '\0';
                local_408[0x1d] = '\0';
                local_408[0x1e] = '\0';
                local_408[0x1f] = '\0';
                pcVar26 = local_408;
              }
              pcVar26[4] = -1;
              pcVar26[5] = -1;
            }
            else {
              local_res20 = (int)uVar22 + (uint)uVar18;
              local_3d0[0] = *(undefined4 *)pcVar26;
              local_3c8 = pcVar26;
              FUN_144f52950(local_3e0,local_3d0);
            }
            uVar22 = (ulonglong)local_res20;
            iVar24 = iVar24 + 1;
            lVar25 = lVar25 + 8;
          } while (iVar24 < local_370);
        }
        *(undefined2 *)(local_428 + 4) = 0xffff;
        local_370 = 0;
        if ((-1 < (int)local_36c) && (local_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
        }
        local_378 = (undefined1 *)0x0;
        local_36c = 0x80000000;
        lVar25 = local_3d8;
        lVar8 = local_410;
      }
    }
    local_3b8 = "StGetNext";
    pcStack_3b0 = "";
    if (lVar25 != 0) {
      local_2c8 = 0x49c0de40;
      uStack_2c4 = 1;
      uStack_2c0 = 0x49c0de49;
      uStack_2bc = 1;
      FUN_144be99f0(lVar25,&local_2c8);
    }
    lVar16 = *(longlong *)(param_1 + 0x20);
    local_428 = 0;
    while( true ) {
      if ((param_2 != 0) && (*(short *)(param_2 + 4) == -1)) goto LAB_144f54509;
      if (*(int *)(param_1 + 0x40) != 0) break;
      if (*(char *)(param_1 + 0x360) == '\0') {
        if (param_2 != 0) goto LAB_144f5446b;
      }
      else {
        if (param_2 == 0) goto LAB_144f54509;
LAB_144f5446b:
        uVar12 = (ulonglong)(*(uint *)(lVar8 + 8) >> 6);
        *(ulonglong *)(param_2 + uVar12 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar12 * 8) | 1L << (*(uint *)(lVar8 + 8) & 0x3f);
      }
      *(undefined1 *)(lVar8 + 0x10) = 1;
      *(undefined4 *)(lVar16 + 8) = 0;
      FUN_144bdf0d0(lVar8 + 0x178);
      do {
        piVar2 = (int *)(lVar16 + 8);
        LOCK();
        bVar27 = *piVar2 == 0;
        if (bVar27) {
          *piVar2 = 1;
        }
        UNLOCK();
      } while (!bVar27);
      if (param_2 != 0) {
        uVar12 = (ulonglong)(*(uint *)(lVar8 + 8) >> 6);
        *(ulonglong *)(param_2 + uVar12 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar12 * 8) & ~(1L << (*(uint *)(lVar8 + 8) & 0x3f));
      }
    }
    local_428 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    *(short *)(local_428 + 6) = *(short *)(local_428 + 6) + -1;
    *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + 1;
    local_380 = (uint)*(ushort *)(local_428 + 6);
    if (local_380 == 0) {
      FUN_144f52a00((longlong *)(param_1 + 0x38),0);
    }
LAB_144f54509:
    if (lVar25 != 0) {
      local_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      local_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar25,&local_2b8);
    }
    uVar12 = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar11 = *(longlong **)(param_2 + 0x40);
        uVar20 = uVar12;
        do {
          iVar24 = (int)uVar12;
          if (*plVar11 == lVar9) goto LAB_144f54582;
          uVar12 = (ulonglong)(iVar24 + 1);
          uVar20 = uVar20 + 1;
          plVar11 = plVar11 + 1;
        } while ((longlong)uVar20 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar24 = -1;
      uVar20 = 0xffffffffffffffff;
LAB_144f54582:
      iVar15 = *(int *)(param_2 + 0x48);
      iVar7 = iVar15 + -1;
      *(int *)(param_2 + 0x48) = iVar7;
      if (iVar7 != iVar24) {
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar15 + -1) * 8);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar20 * 8);
        if (puVar14 != puVar17) {
          *puVar14 = *puVar17;
        }
      }
    }
    if (*(char *)(lVar8 + 0x50) != '\0') {
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        LOCK();
        plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
        lVar16 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar16 == 1) {
          lVar16 = *(longlong *)(lVar8 + 0x38);
          if (lVar16 == 0) {
            lVar16 = *(longlong *)(lVar8 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar16);
        }
      }
      *(undefined8 *)(lVar8 + 0x48) = 0;
      puVar13 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar8 + 0x18),local_2a8);
      lVar16 = *(longlong *)(lVar8 + 0x48);
      uVar6 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *(undefined4 *)(lVar8 + 0x20) = *puVar13;
      *(undefined4 *)(lVar8 + 0x24) = uVar6;
      *(undefined4 *)(lVar8 + 0x28) = uVar3;
      *(undefined4 *)(lVar8 + 0x2c) = uVar4;
      uVar6 = puVar13[5];
      uVar3 = puVar13[6];
      uVar4 = puVar13[7];
      *(undefined4 *)(lVar8 + 0x30) = puVar13[4];
      *(undefined4 *)(lVar8 + 0x34) = uVar6;
      *(undefined4 *)(lVar8 + 0x38) = uVar3;
      *(undefined4 *)(lVar8 + 0x3c) = uVar4;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(puVar13 + 8);
      *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(puVar13 + 10);
      *(undefined8 *)(puVar13 + 10) = 0;
      if (lVar16 != 0) {
        LOCK();
        plVar11 = (longlong *)(lVar16 + 0x60);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
      }
      if (local_280 != 0) {
        LOCK();
        plVar11 = (longlong *)(local_280 + 0x60);
        lVar16 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar16 == 1) {
          lVar16 = local_2a0;
          if (local_290 != 0) {
            lVar16 = local_290;
          }
          FUN_144bea6d0(local_280,lVar16);
        }
      }
      local_280 = 0;
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        LOCK();
        plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
        lVar16 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar16 == 1) {
          lVar16 = *(longlong *)(lVar8 + 0x38);
          if (lVar16 == 0) {
            lVar16 = *(longlong *)(lVar8 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar16);
        }
      }
      *(undefined8 *)(lVar8 + 0x48) = 0;
      *(undefined1 *)(lVar8 + 0x50) = 0;
    }
    uVar12 = 0;
    if (0 < (int)uVar22) {
      if (local_428 != 0) {
        uVar22 = (ulonglong)((int)uVar22 - 1);
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar11 = (longlong *)(param_1 + 0x50);
        uVar20 = uVar12;
        do {
          if ((int)uVar22 < 1) break;
          lVar16 = *plVar11;
          if (*(char *)(lVar16 + 0x10) != '\0') {
            *(undefined1 *)(lVar16 + 0x10) = 0;
            lVar21 = (longlong)local_270;
            local_270 = local_270 + 1;
            if ((longlong *)(local_278 + lVar21 * 8) != (longlong *)0x0) {
              *(longlong *)(local_278 + lVar21 * 8) = lVar16;
            }
            uVar22 = (ulonglong)((int)uVar22 - 1);
          }
          uVar19 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
          plVar11 = plVar11 + 1;
        } while ((int)uVar19 < *(int *)(param_1 + 0x4c));
      }
    }
    *(undefined1 *)(lVar8 + 0x11) = 1;
    (**(code **)(*local_3f8 + 0x10))();
    if (local_270 != 0) {
      uVar22 = uVar12;
      if (0 < local_270) {
        do {
          FUN_144bdf120(*(longlong *)(local_278 + uVar12) + 0x178,1);
          uVar19 = (int)uVar22 + 1;
          uVar12 = uVar12 + 8;
          uVar22 = (ulonglong)uVar19;
        } while ((int)uVar19 < local_270);
      }
      local_270 = 0;
    }
    if (local_428 == 0) {
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + -1;
      if (*(int *)(lVar8 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(lVar8 + 0x18) = 0;
        if (*(longlong *)(lVar8 + 0x48) != 0) {
          LOCK();
          plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
          lVar25 = *plVar11;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (lVar25 == 1) {
            lVar25 = *(longlong *)(lVar8 + 0x38);
            if (lVar25 == 0) {
              lVar25 = *(longlong *)(lVar8 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar25);
          }
        }
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined1 *)(lVar8 + 0x50) = 0;
        *(undefined1 *)(lVar8 + 0x11) = 0;
        iVar24 = *(int *)(param_1 + 600);
        puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar24 * 4);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = *(undefined4 *)(lVar8 + 8);
        }
        *(int *)(param_1 + 600) = iVar24 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      local_270 = 0;
      if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) << 3);
      }
      return local_res18;
    }
    uVar6 = *(undefined4 *)(local_428 + 0xc);
    if (((lVar25 != 0) && (*(ulonglong *)(lVar25 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar25 + 0x10) <= *(ulonglong *)(lVar25 + 0x18) ||
        (cVar5 = FUN_144bea600(lVar25,0x20), cVar5 != '\0')))) {
      puVar14 = *(undefined8 **)(lVar25 + 0x10);
      puVar17 = puVar14 + 2;
      if (*(undefined8 **)(lVar25 + 0x20) < puVar17) {
        if (*(undefined8 **)(lVar25 + 0x20) != puVar14) {
          FUN_144bfbef0(puVar14,0);
        }
        puVar14 = *(undefined8 **)(lVar25 + 8);
        puVar17 = puVar14 + 2;
      }
      *(undefined8 **)(lVar25 + 0x10) = puVar17;
      *puVar14 = &DAT_1499720c0;
      *(undefined4 *)(puVar14 + 1) = uVar6;
      FUN_144bea5e0(lVar25);
    }
    *(longlong *)(lVar8 + 0x170) = local_428;
    (**(code **)(**(longlong **)(local_428 + 0x58) + 0x18))();
    *(longlong *)(lVar8 + 0x170) = lVar9;
    if (((lVar25 != 0) && (*(ulonglong *)(lVar25 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar25 + 0x10) <= *(ulonglong *)(lVar25 + 0x18) ||
        (cVar5 = FUN_144bea600(lVar25), cVar5 != '\0')))) {
      puVar14 = *(undefined8 **)(lVar25 + 0x10);
      puVar17 = puVar14 + 2;
      if (*(undefined8 **)(lVar25 + 0x20) < puVar17) {
        if (*(undefined8 **)(lVar25 + 0x20) != puVar14) {
          FUN_144bfbef0(puVar14);
        }
        puVar14 = *(undefined8 **)(lVar25 + 8);
        puVar17 = puVar14 + 2;
      }
      *(undefined8 **)(lVar25 + 0x10) = puVar17;
      *(undefined4 *)(puVar14 + 1) = 0;
      *puVar14 = &DAT_1499720c0;
      FUN_144bea5f0(lVar25);
    }
    local_res18 = 1;
  } while( true );
}



// FUNCTION 144f549a0 FUN_144f549a0 body=2976 status=ok
// SIG undefined FUN_144f549a0(void)

undefined1 FUN_144f549a0(longlong param_1,longlong param_2)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  char *pcVar26;
  bool bVar27;
  undefined1 local_res18;
  uint local_res20;
  longlong local_428;
  uint local_418;
  int iStack_414;
  longlong local_410;
  char *local_408;
  char *pcStack_400;
  longlong *local_3f8;
  char *pcStack_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  undefined4 local_3d0 [2];
  char *local_3c8;
  char *local_3b8;
  char *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 *local_378;
  int local_370;
  uint local_36c;
  undefined1 local_368 [128];
  char *local_2e8;
  char *pcStack_2e0;
  char *local_2d8;
  char *pcStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  longlong local_290;
  longlong local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268 [552];
  
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar19 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar19 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar19 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar19 + 0xf0) = lVar8;
  }
  lVar19 = *(longlong *)(lVar8 + 0x3e0);
  plVar11 = *(longlong **)(param_1 + 0x20);
  local_3d8 = lVar19;
  lVar8 = FUN_144bdb730(DAT_14c797a88);
  local_410 = lVar8;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x168) != param_1)) {
    (**(code **)(*plVar11 + 8))(plVar11);
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x250) + -4 + (longlong)*(int *)(param_1 + 600) * 4);
    iVar6 = iVar24 + 1;
    iVar15 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar6) {
      iVar15 = iVar6;
    }
    *(int *)(param_1 + 0x4c) = iVar15;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lVar8 = *(longlong *)(param_1 + 0x50 + (longlong)iVar24 * 8);
    *(longlong *)(lVar8 + 0x18) = lVar19;
    *(undefined4 *)(lVar8 + 0xc) = 1;
    local_410 = lVar8;
    FUN_144bdb6a0(DAT_14c797a88,lVar8);
    if (*(int *)(param_1 + 900) == 2) {
      uVar7 = FUN_144bda950();
      *(undefined4 *)(lVar8 + 0x188) = uVar7;
      local_3e8 = 0x10;
      lVar9 = (*DAT_14c787670)(0,&local_3e8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar9,"hkAsyncThreadPoolSimpleSemaphore");
      }
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_144be5ca0(lVar9,*(undefined8 *)(lVar8 + 0x180),uVar7);
      }
      lVar9 = *(longlong *)(lVar8 + 0x178);
      *(undefined8 *)(lVar8 + 0x178) = uVar10;
      if (lVar9 != 0) {
        FUN_144be5cc0(lVar9);
        (*DAT_14c787678)(0,lVar9,0);
      }
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else {
    if (*(longlong *)(lVar8 + 0x18) != lVar19) {
      (**(code **)(*plVar11 + 8))(plVar11);
      *(longlong *)(lVar8 + 0x18) = lVar19;
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
  }
  local_398 = param_1 + 0x18;
  local_388 = 0;
  local_380 = 0;
  local_390 = *(undefined8 *)(lVar8 + 0x18);
  local_278 = local_268;
  local_res18 = 0;
  pcStack_3f0 = "";
  local_408 = "LtGetNextTask";
  local_428 = 0;
  local_270 = 0;
  local_3e0 = param_1 + 0x38;
  pcStack_400 = "";
  local_26c = 0x80000040;
  do {
    local_3f8 = *(longlong **)(param_1 + 0x20);
    (**(code **)(*local_3f8 + 8))();
    lVar9 = *(longlong *)(lVar8 + 0x170);
    *(undefined1 *)(lVar8 + 0x11) = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar24 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar24) {
        FUN_144f587b0(param_2 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      plVar11 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = lVar9;
      }
      *(int *)(param_2 + 0x48) = iVar24;
    }
    if (lVar19 != 0) {
      local_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      local_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar19,&local_2d8,&local_2e8);
    }
    uVar25 = 0;
    if (local_428 != 0) {
      if ((*(char *)(local_428 + 10) != '\0') && (*(short *)(local_428 + 6) != 0)) {
        *(undefined2 *)(local_428 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          do {
            if (local_428 == *plVar11) {
              FUN_144f52a00((longlong *)(param_1 + 0x38));
              break;
            }
            uVar17 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar17;
            plVar11 = plVar11 + 2;
          } while ((int)uVar17 < *(int *)(param_1 + 0x40));
        }
      }
      uVar25 = 0;
      *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + -1;
      if ((uint)*(ushort *)(local_428 + 6) + (uint)*(ushort *)(local_428 + 8) == 0) {
        iVar24 = *(int *)(local_428 + 0x28);
        local_378 = local_368;
        local_370 = 0;
        local_36c = 0x80000010;
        if (0 < (longlong)iVar24) {
          do {
            lVar19 = *(longlong *)(*(longlong *)(local_428 + 0x20) + uVar25 * 8);
            psVar1 = (short *)(lVar19 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar15 = local_370 + 1;
              if ((int)(local_36c & 0x7fffffff) < iVar15) {
                FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar15);
              }
              lVar8 = (longlong)local_370;
              local_370 = iVar15;
              if ((longlong *)(local_378 + lVar8 * 8) != (longlong *)0x0) {
                *(longlong *)(local_378 + lVar8 * 8) = lVar19;
              }
            }
            uVar25 = uVar25 + 1;
          } while ((longlong)uVar25 < (longlong)iVar24);
        }
        uVar25 = 0;
        *(undefined4 *)(local_428 + 0x28) = 0;
        uVar12 = *(ulonglong *)(local_428 + 0x18);
        uVar20 = uVar25;
        if (uVar12 != 0) {
          do {
            if (((uVar12 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + uVar20 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + uVar20 * 8) + 0x10) = 0;
              *(undefined4 *)(*(longlong *)(param_1 + 0x50 + uVar20 * 8) + 0x180) = 1;
            }
            uVar12 = uVar12 >> 1;
            uVar20 = uVar20 + 1;
          } while (uVar12 != 0);
          *(undefined8 *)(local_428 + 0x18) = 0;
        }
        local_res20 = 0;
        uVar12 = uVar25;
        uVar20 = uVar25;
        if (0 < local_370) {
          do {
            pcVar26 = *(char **)(local_378 + uVar20);
            local_408 = pcVar26;
            (**(code **)(**(longlong **)(pcVar26 + 0x58) + 0x10))
                      (*(longlong **)(pcVar26 + 0x58),&local_418);
            uVar18 = 0xffff;
            uVar17 = 0;
            if (0 < (int)local_418) {
              uVar17 = local_418;
            }
            if ((int)uVar17 < 0xffff) {
              uVar18 = uVar17 & 0xffff;
            }
            *(short *)(pcVar26 + 6) = (short)uVar18;
            pcVar26[10] = iStack_414 == 1;
            if ((short)uVar18 == 0) {
              plVar23 = *(longlong **)(pcVar26 + 0x20);
              plVar11 = plVar23 + *(int *)(pcVar26 + 0x28);
              for (; plVar23 != plVar11; plVar23 = plVar23 + 1) {
                lVar19 = *plVar23;
                psVar1 = (short *)(lVar19 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar24 = local_370 + 1;
                  if ((int)(local_36c & 0x7fffffff) < iVar24) {
                    FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar24);
                  }
                  lVar8 = (longlong)local_370;
                  local_370 = iVar24;
                  if ((longlong *)(local_378 + lVar8 * 8) != (longlong *)0x0) {
                    *(longlong *)(local_378 + lVar8 * 8) = lVar19;
                  }
                }
              }
              lVar19 = 0;
              pcVar26[0x28] = '\0';
              pcVar26[0x29] = '\0';
              pcVar26[0x2a] = '\0';
              pcVar26[0x2b] = '\0';
              uVar25 = *(ulonglong *)(pcVar26 + 0x18);
              if (uVar25 != 0) {
                do {
                  if (((uVar25 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x50 + lVar19 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar19 * 8) + 0x10) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x50 + lVar19 * 8) + 0x180) = 1;
                  }
                  lVar19 = lVar19 + 1;
                  uVar25 = uVar25 >> 1;
                } while (uVar25 != 0);
                local_408[0x18] = '\0';
                local_408[0x19] = '\0';
                local_408[0x1a] = '\0';
                local_408[0x1b] = '\0';
                local_408[0x1c] = '\0';
                local_408[0x1d] = '\0';
                local_408[0x1e] = '\0';
                local_408[0x1f] = '\0';
                pcVar26 = local_408;
              }
              pcVar26[4] = -1;
              pcVar26[5] = -1;
            }
            else {
              local_res20 = (int)uVar25 + uVar18;
              local_3d0[0] = *(undefined4 *)pcVar26;
              local_3c8 = pcVar26;
              FUN_144f52950(local_3e0,local_3d0);
            }
            uVar25 = (ulonglong)local_res20;
            uVar17 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar17;
            uVar20 = uVar20 + 8;
          } while ((int)uVar17 < local_370);
        }
        *(undefined2 *)(local_428 + 4) = 0xffff;
        local_370 = 0;
        if ((-1 < (int)local_36c) && (local_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_378,(ulonglong)(local_36c & 0x7fffffff) << 3);
        }
        local_378 = (undefined1 *)0x0;
        local_36c = 0x80000000;
        lVar19 = local_3d8;
        lVar8 = local_410;
      }
    }
    local_3b8 = "StGetNext";
    pcStack_3b0 = "";
    if (lVar19 != 0) {
      local_2c8 = 0x49c0de40;
      uStack_2c4 = 1;
      uStack_2c0 = 0x49c0de49;
      uStack_2bc = 1;
      FUN_144be99f0(lVar19,&local_2c8);
    }
    lVar21 = *(longlong *)(param_1 + 0x20);
    local_428 = 0;
    while( true ) {
      if ((param_2 != 0) && (*(short *)(param_2 + 4) == -1)) goto LAB_144f550c6;
      if (*(int *)(param_1 + 0x40) != 0) break;
      if (*(char *)(param_1 + 0x360) == '\0') {
        if (param_2 != 0) goto LAB_144f5501a;
      }
      else {
        if (param_2 == 0) goto LAB_144f550c6;
LAB_144f5501a:
        uVar12 = (ulonglong)(*(uint *)(lVar8 + 8) >> 6);
        *(ulonglong *)(param_2 + uVar12 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar12 * 8) | 1L << (*(uint *)(lVar8 + 8) & 0x3f);
      }
      *(undefined1 *)(lVar8 + 0x10) = 1;
      *(undefined4 *)(lVar21 + 8) = 0;
      do {
        LOCK();
        bVar27 = *(int *)(lVar8 + 0x180) == 1;
        if (bVar27) {
          *(int *)(lVar8 + 0x180) = 0;
        }
        UNLOCK();
      } while (!bVar27);
      do {
        piVar2 = (int *)(lVar21 + 8);
        LOCK();
        bVar27 = *piVar2 == 0;
        if (bVar27) {
          *piVar2 = 1;
        }
        UNLOCK();
      } while (!bVar27);
      if (param_2 != 0) {
        uVar12 = (ulonglong)(*(uint *)(lVar8 + 8) >> 6);
        *(ulonglong *)(param_2 + uVar12 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar12 * 8) & ~(1L << (*(uint *)(lVar8 + 8) & 0x3f));
      }
    }
    local_428 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    *(short *)(local_428 + 6) = *(short *)(local_428 + 6) + -1;
    *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + 1;
    local_380 = (uint)*(ushort *)(local_428 + 6);
    if (local_380 == 0) {
      FUN_144f52a00((longlong *)(param_1 + 0x38),0);
    }
LAB_144f550c6:
    if (lVar19 != 0) {
      local_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      local_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar19,&local_2b8);
    }
    uVar12 = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar24 = *(int *)(param_2 + 0x48);
      if (0 < iVar24) {
        plVar11 = *(longlong **)(param_2 + 0x40);
        uVar20 = uVar12;
        do {
          iVar15 = (int)uVar12;
          if (*plVar11 == lVar9) goto LAB_144f55140;
          uVar12 = (ulonglong)(iVar15 + 1);
          uVar20 = uVar20 + 1;
          plVar11 = plVar11 + 1;
        } while ((longlong)uVar20 < (longlong)iVar24);
      }
      iVar15 = -1;
      uVar20 = 0xffffffffffffffff;
LAB_144f55140:
      *(int *)(param_2 + 0x48) = iVar24 + -1;
      if (iVar24 + -1 != iVar15) {
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar24 + -1) * 8);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar20 * 8);
        if (puVar14 != puVar16) {
          *puVar14 = *puVar16;
        }
      }
    }
    if (*(char *)(lVar8 + 0x50) != '\0') {
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        LOCK();
        plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
        lVar21 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar21 == 1) {
          lVar21 = *(longlong *)(lVar8 + 0x38);
          if (lVar21 == 0) {
            lVar21 = *(longlong *)(lVar8 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar21);
        }
      }
      *(undefined8 *)(lVar8 + 0x48) = 0;
      puVar13 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar8 + 0x18),local_2a8);
      lVar21 = *(longlong *)(lVar8 + 0x48);
      uVar7 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *(undefined4 *)(lVar8 + 0x20) = *puVar13;
      *(undefined4 *)(lVar8 + 0x24) = uVar7;
      *(undefined4 *)(lVar8 + 0x28) = uVar3;
      *(undefined4 *)(lVar8 + 0x2c) = uVar4;
      uVar7 = puVar13[5];
      uVar3 = puVar13[6];
      uVar4 = puVar13[7];
      *(undefined4 *)(lVar8 + 0x30) = puVar13[4];
      *(undefined4 *)(lVar8 + 0x34) = uVar7;
      *(undefined4 *)(lVar8 + 0x38) = uVar3;
      *(undefined4 *)(lVar8 + 0x3c) = uVar4;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(puVar13 + 8);
      *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(puVar13 + 10);
      *(undefined8 *)(puVar13 + 10) = 0;
      if (lVar21 != 0) {
        LOCK();
        plVar11 = (longlong *)(lVar21 + 0x60);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
      }
      if (local_280 != 0) {
        LOCK();
        plVar11 = (longlong *)(local_280 + 0x60);
        lVar21 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar21 == 1) {
          lVar21 = local_2a0;
          if (local_290 != 0) {
            lVar21 = local_290;
          }
          FUN_144bea6d0(local_280,lVar21);
        }
      }
      local_280 = 0;
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        LOCK();
        plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
        lVar21 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar21 == 1) {
          lVar21 = *(longlong *)(lVar8 + 0x38);
          if (lVar21 == 0) {
            lVar21 = *(longlong *)(lVar8 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar21);
        }
      }
      *(undefined8 *)(lVar8 + 0x48) = 0;
      *(undefined1 *)(lVar8 + 0x50) = 0;
    }
    iVar24 = 0;
    if (0 < (int)uVar25) {
      if (local_428 != 0) {
        uVar25 = (ulonglong)((int)uVar25 - 1);
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar11 = (longlong *)(param_1 + 0x50);
        do {
          if ((int)uVar25 < 1) break;
          lVar21 = *plVar11;
          if (*(char *)(lVar21 + 0x10) != '\0') {
            *(undefined1 *)(lVar21 + 0x10) = 0;
            lVar22 = (longlong)local_270;
            local_270 = local_270 + 1;
            if ((longlong *)(local_278 + lVar22 * 8) != (longlong *)0x0) {
              *(longlong *)(local_278 + lVar22 * 8) = lVar21;
            }
            uVar25 = (ulonglong)((int)uVar25 - 1);
          }
          iVar24 = iVar24 + 1;
          plVar11 = plVar11 + 1;
        } while (iVar24 < *(int *)(param_1 + 0x4c));
      }
    }
    *(undefined1 *)(lVar8 + 0x11) = 1;
    (**(code **)(*local_3f8 + 0x10))();
    uVar25 = 0;
    if (local_270 != 0) {
      uVar12 = uVar25;
      if (0 < local_270) {
        do {
          uVar17 = (int)uVar12 + 1;
          *(undefined4 *)(*(longlong *)(local_278 + uVar25) + 0x180) = 1;
          uVar25 = uVar25 + 8;
          uVar12 = (ulonglong)uVar17;
        } while ((int)uVar17 < local_270);
      }
      local_270 = 0;
    }
    if (local_428 == 0) {
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + -1;
      if (*(int *)(lVar8 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(lVar8 + 0x18) = 0;
        if (*(longlong *)(lVar8 + 0x48) != 0) {
          LOCK();
          plVar11 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x60);
          lVar19 = *plVar11;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (lVar19 == 1) {
            lVar19 = *(longlong *)(lVar8 + 0x38);
            if (lVar19 == 0) {
              lVar19 = *(longlong *)(lVar8 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar8 + 0x48),lVar19);
          }
        }
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined1 *)(lVar8 + 0x50) = 0;
        *(undefined1 *)(lVar8 + 0x11) = 0;
        iVar24 = *(int *)(param_1 + 600);
        puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar24 * 4);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = *(undefined4 *)(lVar8 + 8);
        }
        *(int *)(param_1 + 600) = iVar24 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      local_270 = 0;
      if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) << 3);
      }
      return local_res18;
    }
    uVar7 = *(undefined4 *)(local_428 + 0xc);
    if (((lVar19 != 0) && (*(ulonglong *)(lVar19 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar19 + 0x10) <= *(ulonglong *)(lVar19 + 0x18) ||
        (cVar5 = FUN_144bea600(lVar19,0x20), cVar5 != '\0')))) {
      puVar14 = *(undefined8 **)(lVar19 + 0x10);
      puVar16 = puVar14 + 2;
      if (*(undefined8 **)(lVar19 + 0x20) < puVar16) {
        if (*(undefined8 **)(lVar19 + 0x20) != puVar14) {
          FUN_144bfbef0(puVar14,0);
        }
        puVar14 = *(undefined8 **)(lVar19 + 8);
        puVar16 = puVar14 + 2;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar16;
      *puVar14 = &DAT_1499720c0;
      *(undefined4 *)(puVar14 + 1) = uVar7;
      FUN_144bea5e0(lVar19);
    }
    *(longlong *)(lVar8 + 0x170) = local_428;
    (**(code **)(**(longlong **)(local_428 + 0x58) + 0x18))();
    *(longlong *)(lVar8 + 0x170) = lVar9;
    if (((lVar19 != 0) && (*(ulonglong *)(lVar19 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar19 + 0x10) <= *(ulonglong *)(lVar19 + 0x18) ||
        (cVar5 = FUN_144bea600(lVar19), cVar5 != '\0')))) {
      puVar14 = *(undefined8 **)(lVar19 + 0x10);
      puVar16 = puVar14 + 2;
      if (*(undefined8 **)(lVar19 + 0x20) < puVar16) {
        if (*(undefined8 **)(lVar19 + 0x20) != puVar14) {
          FUN_144bfbef0(puVar14);
        }
        puVar14 = *(undefined8 **)(lVar19 + 8);
        puVar16 = puVar14 + 2;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar16;
      *puVar14 = &DAT_1499720c0;
      *(undefined4 *)(puVar14 + 1) = 0;
      FUN_144bea5f0(lVar19);
    }
    local_res18 = 1;
  } while( true );
}



// FUNCTION 144f55540 FUN_144f55540 body=3071 status=ok
// SIG undefined FUN_144f55540(void)

undefined1 FUN_144f55540(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  char *pcVar25;
  undefined1 local_res18;
  uint local_res20;
  longlong local_420;
  uint local_410;
  int iStack_40c;
  longlong local_408;
  char *local_3f8;
  char *pcStack_3f0;
  longlong *local_3e8;
  char *pcStack_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [2];
  char *local_3c0;
  char *local_3b8;
  char *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 *local_378;
  int local_370;
  uint local_36c;
  undefined1 local_368 [128];
  char *local_2e8;
  char *pcStack_2e0;
  char *local_2d8;
  char *pcStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  longlong local_290;
  longlong local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268 [552];
  
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar22 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar7;
  }
  lVar22 = *(longlong *)(lVar7 + 0x3e0);
  plVar10 = *(longlong **)(param_1 + 0x20);
  lVar7 = FUN_144bdb730(DAT_14c797a88);
  local_408 = lVar7;
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x168) != param_1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x250) + -4 + (longlong)*(int *)(param_1 + 600) * 4);
    iVar6 = iVar24 + 1;
    iVar14 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar6) {
      iVar14 = iVar6;
    }
    *(int *)(param_1 + 0x4c) = iVar14;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lVar7 = *(longlong *)(param_1 + 0x50 + (longlong)iVar24 * 8);
    *(longlong *)(lVar7 + 0x18) = lVar22;
    *(undefined4 *)(lVar7 + 0xc) = 1;
    local_408 = lVar7;
    FUN_144bdb6a0(DAT_14c797a88,lVar7);
    if (*(int *)(param_1 + 900) == 2) {
      uVar5 = FUN_144bda950();
      *(undefined4 *)(lVar7 + 0x188) = uVar5;
      local_3d8 = 0x10;
      lVar8 = (*DAT_14c787670)(0,&local_3d8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar8,"hkAsyncThreadPoolSimpleSemaphore");
      }
      if (lVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_144be5ca0(lVar8,*(undefined8 *)(lVar7 + 0x180),uVar5);
      }
      lVar8 = *(longlong *)(lVar7 + 0x178);
      *(undefined8 *)(lVar7 + 0x178) = uVar9;
      if (lVar8 != 0) {
        FUN_144be5cc0(lVar8);
        (*DAT_14c787678)(0,lVar8,0);
      }
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != lVar22) {
      (**(code **)(*plVar10 + 8))(plVar10);
      *(longlong *)(lVar7 + 0x18) = lVar22;
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
  }
  local_398 = param_1 + 0x18;
  local_388 = 0;
  local_3d0 = param_1 + 0x38;
  local_380 = 0;
  local_390 = *(undefined8 *)(lVar7 + 0x18);
  local_278 = local_268;
  local_res18 = 0;
  local_3e8 = (longlong *)0x149c0de18;
  pcStack_3e0 = "";
  local_3f8 = "LtGetNextTask";
  pcStack_3f0 = "";
  local_420 = 0;
  local_270 = 0;
  local_26c = 0x80000040;
  do {
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0x8db8cde);
    local_3e8 = *(longlong **)(param_1 + 0x20);
    (**(code **)(*local_3e8 + 8))();
    lVar8 = *(longlong *)(lVar7 + 0x170);
    *(undefined1 *)(lVar7 + 0x11) = 0;
    if ((param_2 != 0) && (local_420 == 0)) {
      iVar24 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar24) {
        FUN_144f587b0(param_2 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      plVar10 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = lVar8;
      }
      *(int *)(param_2 + 0x48) = iVar24;
    }
    uVar11 = 0;
    if (lVar22 != 0) {
      local_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      local_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar22,&local_2d8,&local_2e8);
    }
    local_res20 = 0;
    if (local_420 != 0) {
      if ((*(char *)(local_420 + 10) != '\0') && (*(short *)(local_420 + 6) != 0)) {
        *(undefined2 *)(local_420 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          uVar16 = uVar11;
          do {
            if (local_420 == *plVar10) {
              FUN_144f52a00((longlong *)(param_1 + 0x38));
              break;
            }
            uVar18 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar18;
            plVar10 = plVar10 + 2;
          } while ((int)uVar18 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(local_420 + 8) = *(short *)(local_420 + 8) + -1;
      if ((uint)*(ushort *)(local_420 + 6) + (uint)*(ushort *)(local_420 + 8) == 0) {
        iVar24 = *(int *)(local_420 + 0x28);
        local_378 = local_368;
        local_370 = 0;
        local_36c = 0x80000010;
        if (0 < (longlong)iVar24) {
          do {
            lVar7 = *(longlong *)(*(longlong *)(local_420 + 0x20) + uVar11 * 8);
            psVar1 = (short *)(lVar7 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar14 = local_370 + 1;
              if ((int)(local_36c & 0x7fffffff) < iVar14) {
                FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar14);
              }
              lVar15 = (longlong)local_370;
              local_370 = iVar14;
              if ((longlong *)(local_378 + lVar15 * 8) != (longlong *)0x0) {
                *(longlong *)(local_378 + lVar15 * 8) = lVar7;
              }
            }
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar11 < (longlong)iVar24);
        }
        lVar7 = 0;
        *(undefined4 *)(local_420 + 0x28) = 0;
        uVar11 = *(ulonglong *)(local_420 + 0x18);
        if (uVar11 != 0) {
          do {
            if (((uVar11 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) = 0;
              FUN_144be5cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x178));
            }
            lVar7 = lVar7 + 1;
            uVar11 = uVar11 >> 1;
          } while (uVar11 != 0);
          *(undefined8 *)(local_420 + 0x18) = 0;
        }
        uVar20 = 0;
        local_res20 = 0;
        uVar11 = uVar20;
        uVar16 = uVar20;
        if (0 < local_370) {
          do {
            pcVar25 = *(char **)(local_378 + uVar16);
            local_3f8 = pcVar25;
            (**(code **)(**(longlong **)(pcVar25 + 0x58) + 0x10))
                      (*(longlong **)(pcVar25 + 0x58),&local_410);
            uVar19 = 0xffff;
            uVar18 = 0;
            if (0 < (int)local_410) {
              uVar18 = local_410;
            }
            if ((int)uVar18 < 0xffff) {
              uVar19 = uVar18 & 0xffff;
            }
            *(short *)(pcVar25 + 6) = (short)uVar19;
            pcVar25[10] = iStack_40c == 1;
            if ((short)uVar19 == 0) {
              plVar23 = *(longlong **)(pcVar25 + 0x20);
              plVar10 = plVar23 + *(int *)(pcVar25 + 0x28);
              for (; plVar23 != plVar10; plVar23 = plVar23 + 1) {
                lVar7 = *plVar23;
                psVar1 = (short *)(lVar7 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar24 = local_370 + 1;
                  if ((int)(local_36c & 0x7fffffff) < iVar24) {
                    FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar24);
                  }
                  lVar15 = (longlong)local_370;
                  local_370 = iVar24;
                  if ((longlong *)(local_378 + lVar15 * 8) != (longlong *)0x0) {
                    *(longlong *)(local_378 + lVar15 * 8) = lVar7;
                  }
                }
              }
              lVar7 = 0;
              pcVar25[0x28] = '\0';
              pcVar25[0x29] = '\0';
              pcVar25[0x2a] = '\0';
              pcVar25[0x2b] = '\0';
              uVar20 = *(ulonglong *)(pcVar25 + 0x18);
              if (uVar20 != 0) {
                do {
                  if (((uVar20 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) = 0;
                    FUN_144be5cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x178)
                                 );
                  }
                  lVar7 = lVar7 + 1;
                  uVar20 = uVar20 >> 1;
                } while (uVar20 != 0);
                local_3f8[0x18] = '\0';
                local_3f8[0x19] = '\0';
                local_3f8[0x1a] = '\0';
                local_3f8[0x1b] = '\0';
                local_3f8[0x1c] = '\0';
                local_3f8[0x1d] = '\0';
                local_3f8[0x1e] = '\0';
                local_3f8[0x1f] = '\0';
                pcVar25 = local_3f8;
              }
              pcVar25[4] = -1;
              pcVar25[5] = -1;
            }
            else {
              local_res20 = (int)uVar20 + uVar19;
              local_3c8[0] = *(undefined4 *)pcVar25;
              local_3c0 = pcVar25;
              FUN_144f52950(local_3d0,local_3c8);
            }
            uVar20 = (ulonglong)local_res20;
            uVar18 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar18;
            uVar16 = uVar16 + 8;
          } while ((int)uVar18 < local_370);
        }
        local_370 = 0;
        *(undefined2 *)(local_420 + 4) = 0xffff;
        if ((-1 < (int)local_36c) && (local_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_378,(ulonglong)(local_36c & 0x7fffffff) << 3);
        }
        local_378 = (undefined1 *)0x0;
        local_36c = 0x80000000;
        lVar7 = local_408;
      }
      else {
        local_res20 = 0;
      }
    }
    local_3b8 = "StGetNext";
    pcStack_3b0 = "";
    if (lVar22 != 0) {
      local_2c8 = 0x49c0de40;
      uStack_2c4 = 1;
      uStack_2c0 = 0x49c0de49;
      uStack_2bc = 1;
      FUN_144be99f0(lVar22,&local_2c8);
    }
    lVar15 = *(longlong *)(param_1 + 0x20);
    local_420 = 0;
    while ((param_2 == 0 || (*(short *)(param_2 + 4) != -1))) {
      do {
        if (*(int *)(param_1 + 0x40) != 0) {
          local_420 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          *(short *)(local_420 + 6) = *(short *)(local_420 + 6) + -1;
          *(short *)(local_420 + 8) = *(short *)(local_420 + 8) + 1;
          local_380 = (uint)*(ushort *)(local_420 + 6);
          if (local_380 == 0) {
            FUN_144f52a00((longlong *)(param_1 + 0x38),0);
          }
          goto LAB_144f55c6f;
        }
        if (*(char *)(param_1 + 0x360) == '\0') {
          if (param_2 != 0) goto LAB_144f55bcf;
        }
        else {
          if (param_2 == 0) goto LAB_144f55c6f;
LAB_144f55bcf:
          uVar11 = (ulonglong)(*(uint *)(lVar7 + 8) >> 6);
          *(ulonglong *)(param_2 + 0x18 + uVar11 * 8) =
               *(ulonglong *)(param_2 + 0x18 + uVar11 * 8) | 1L << (*(uint *)(lVar7 + 8) & 0x3f);
        }
        *(undefined1 *)(lVar7 + 0x10) = 1;
        FUN_144be5e70(lVar15 + 8);
        FUN_144be5cd0(*(undefined8 *)(lVar7 + 0x178));
        FUN_144be5d20(lVar15 + 8);
      } while (param_2 == 0);
      uVar11 = (ulonglong)(*(uint *)(lVar7 + 8) >> 6);
      *(ulonglong *)(param_2 + 0x18 + uVar11 * 8) =
           *(ulonglong *)(param_2 + 0x18 + uVar11 * 8) & ~(1L << (*(uint *)(lVar7 + 8) & 0x3f));
    }
LAB_144f55c6f:
    if (lVar22 != 0) {
      local_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      local_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar22,&local_2b8);
    }
    uVar11 = 0;
    if ((param_2 != 0) && (local_420 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar10 = *(longlong **)(param_2 + 0x40);
        uVar16 = uVar11;
        uVar20 = uVar11;
        do {
          iVar24 = (int)uVar16;
          if (*plVar10 == lVar8) goto LAB_144f55cef;
          uVar16 = (ulonglong)(iVar24 + 1);
          uVar20 = uVar20 + 1;
          plVar10 = plVar10 + 1;
        } while ((longlong)uVar20 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar24 = -1;
      uVar20 = 0xffffffffffffffff;
LAB_144f55cef:
      iVar14 = *(int *)(param_2 + 0x48);
      iVar6 = iVar14 + -1;
      *(int *)(param_2 + 0x48) = iVar6;
      if (iVar6 != iVar24) {
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar14 + -1) * 8);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar20 * 8);
        if (puVar13 != puVar17) {
          *puVar13 = *puVar17;
        }
      }
    }
    if (*(char *)(lVar7 + 0x50) != '\0') {
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar15 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar15 == 1) {
          lVar15 = *(longlong *)(lVar7 + 0x38);
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar15);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      puVar12 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar7 + 0x18),local_2a8);
      lVar15 = *(longlong *)(lVar7 + 0x48);
      uVar5 = puVar12[1];
      uVar2 = puVar12[2];
      uVar3 = puVar12[3];
      *(undefined4 *)(lVar7 + 0x20) = *puVar12;
      *(undefined4 *)(lVar7 + 0x24) = uVar5;
      *(undefined4 *)(lVar7 + 0x28) = uVar2;
      *(undefined4 *)(lVar7 + 0x2c) = uVar3;
      uVar5 = puVar12[5];
      uVar2 = puVar12[6];
      uVar3 = puVar12[7];
      *(undefined4 *)(lVar7 + 0x30) = puVar12[4];
      *(undefined4 *)(lVar7 + 0x34) = uVar5;
      *(undefined4 *)(lVar7 + 0x38) = uVar2;
      *(undefined4 *)(lVar7 + 0x3c) = uVar3;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(puVar12 + 10);
      *(undefined8 *)(puVar12 + 10) = 0;
      if (lVar15 != 0) {
        LOCK();
        plVar10 = (longlong *)(lVar15 + 0x60);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
      }
      if (local_280 != 0) {
        LOCK();
        plVar10 = (longlong *)(local_280 + 0x60);
        lVar15 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar15 == 1) {
          lVar15 = local_2a0;
          if (local_290 != 0) {
            lVar15 = local_290;
          }
          FUN_144bea6d0(local_280,lVar15);
        }
      }
      local_280 = 0;
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar15 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar15 == 1) {
          lVar15 = *(longlong *)(lVar7 + 0x38);
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar15);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined1 *)(lVar7 + 0x50) = 0;
    }
    if (0 < (int)local_res20) {
      if (local_420 != 0) {
        local_res20 = local_res20 - 1;
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar10 = (longlong *)(param_1 + 0x50);
        uVar16 = uVar11;
        do {
          if ((int)local_res20 < 1) break;
          lVar15 = *plVar10;
          if (*(char *)(lVar15 + 0x10) != '\0') {
            *(undefined1 *)(lVar15 + 0x10) = 0;
            lVar21 = (longlong)local_270;
            local_270 = local_270 + 1;
            if ((longlong *)(local_278 + lVar21 * 8) != (longlong *)0x0) {
              *(longlong *)(local_278 + lVar21 * 8) = lVar15;
            }
            local_res20 = local_res20 - 1;
          }
          uVar18 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar18;
          plVar10 = plVar10 + 1;
        } while ((int)uVar18 < *(int *)(param_1 + 0x4c));
      }
    }
    *(undefined1 *)(lVar7 + 0x11) = 1;
    (**(code **)(*local_3e8 + 0x10))();
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0xb011ac3e);
    if (local_270 != 0) {
      if (0 < local_270) {
        lVar15 = 0;
        do {
          FUN_144be5cf0(*(undefined8 *)(*(longlong *)(local_278 + lVar15) + 0x178));
          uVar18 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar18;
          lVar15 = lVar15 + 8;
        } while ((int)uVar18 < local_270);
      }
      local_270 = 0;
    }
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0xf0e3c62c);
    if (local_420 == 0) {
      FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0x77bbddcf);
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + -1;
      if (*(int *)(lVar7 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(lVar7 + 0x18) = 0;
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          LOCK();
          plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
          lVar22 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar22 == 1) {
            lVar22 = *(longlong *)(lVar7 + 0x38);
            if (lVar22 == 0) {
              lVar22 = *(longlong *)(lVar7 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar22);
          }
        }
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined1 *)(lVar7 + 0x50) = 0;
        *(undefined1 *)(lVar7 + 0x11) = 0;
        iVar24 = *(int *)(param_1 + 600);
        puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar24 * 4);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *(undefined4 *)(lVar7 + 8);
        }
        *(int *)(param_1 + 600) = iVar24 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0x51ba5d33);
      local_270 = 0;
      if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) << 3);
      }
      return local_res18;
    }
    uVar5 = *(undefined4 *)(local_420 + 0xc);
    if (((lVar22 != 0) && (*(ulonglong *)(lVar22 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar22 + 0x10) <= *(ulonglong *)(lVar22 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar22,0x20), cVar4 != '\0')))) {
      puVar13 = *(undefined8 **)(lVar22 + 0x10);
      puVar17 = puVar13 + 2;
      if (*(undefined8 **)(lVar22 + 0x20) < puVar17) {
        if (*(undefined8 **)(lVar22 + 0x20) != puVar13) {
          FUN_144bfbef0(puVar13,0);
        }
        puVar13 = *(undefined8 **)(lVar22 + 8);
        puVar17 = puVar13 + 2;
      }
      *(undefined8 **)(lVar22 + 0x10) = puVar17;
      *puVar13 = &DAT_1499720c0;
      *(undefined4 *)(puVar13 + 1) = uVar5;
      FUN_144bea5e0(lVar22);
    }
    *(longlong *)(lVar7 + 0x170) = local_420;
    (**(code **)(**(longlong **)(local_420 + 0x58) + 0x18))
              (*(longlong **)(local_420 + 0x58),&local_398);
    *(longlong *)(lVar7 + 0x170) = lVar8;
    if (((lVar22 != 0) && (*(ulonglong *)(lVar22 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar22 + 0x10) <= *(ulonglong *)(lVar22 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar22,0x20), cVar4 != '\0')))) {
      puVar13 = *(undefined8 **)(lVar22 + 0x10);
      puVar17 = puVar13 + 2;
      if (*(undefined8 **)(lVar22 + 0x20) < puVar17) {
        if (*(undefined8 **)(lVar22 + 0x20) != puVar13) {
          FUN_144bfbef0(puVar13,0);
        }
        puVar13 = *(undefined8 **)(lVar22 + 8);
        puVar17 = puVar13 + 2;
      }
      *(undefined8 **)(lVar22 + 0x10) = puVar17;
      *puVar13 = &DAT_1499720c0;
      *(undefined4 *)(puVar13 + 1) = 0;
      FUN_144bea5f0(lVar22);
    }
    local_res18 = 1;
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0xe52d5b60);
  } while( true );
}



// FUNCTION 144f56140 FUN_144f56140 body=2866 status=ok
// SIG undefined FUN_144f56140(void)

undefined1 FUN_144f56140(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  char *pcVar25;
  undefined1 local_res18;
  uint local_res20;
  longlong local_428;
  uint local_410;
  int iStack_40c;
  longlong local_408;
  char *local_3f8;
  char *pcStack_3f0;
  longlong *local_3e8;
  char *pcStack_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [2];
  char *local_3c0;
  char *local_3b8;
  char *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 *local_378;
  int local_370;
  uint local_36c;
  undefined1 local_368 [128];
  char *local_2e8;
  char *pcStack_2e0;
  char *local_2d8;
  char *pcStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  longlong local_290;
  longlong local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268 [552];
  
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar19 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar19 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar19 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar19 + 0xf0) = lVar7;
  }
  lVar19 = *(longlong *)(lVar7 + 0x3e0);
  plVar24 = *(longlong **)(param_1 + 0x20);
  lVar7 = FUN_144bdb730(DAT_14c797a88);
  uVar9 = 0;
  local_408 = lVar7;
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x168) != param_1)) {
    (**(code **)(*plVar24 + 8))(plVar24);
    iVar22 = *(int *)(*(longlong *)(param_1 + 0x250) + -4 + (longlong)*(int *)(param_1 + 600) * 4);
    iVar5 = iVar22 + 1;
    iVar13 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      iVar13 = iVar5;
    }
    *(int *)(param_1 + 0x4c) = iVar13;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lVar7 = *(longlong *)(param_1 + 0x50 + (longlong)iVar22 * 8);
    *(longlong *)(lVar7 + 0x18) = lVar19;
    *(undefined4 *)(lVar7 + 0xc) = 1;
    local_408 = lVar7;
    FUN_144bdb6a0(DAT_14c797a88,lVar7);
    if (*(int *)(param_1 + 900) == 2) {
      uVar6 = FUN_144bda950();
      *(undefined4 *)(lVar7 + 0x188) = uVar6;
      local_3d8 = 0x10;
      lVar8 = (*DAT_14c787670)(0,&local_3d8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar8,"hkAsyncThreadPoolSimpleSemaphore");
      }
      if (lVar8 != 0) {
        uVar9 = FUN_144be5ca0(lVar8,*(undefined8 *)(lVar7 + 0x180),uVar6);
      }
      lVar8 = *(longlong *)(lVar7 + 0x178);
      *(undefined8 *)(lVar7 + 0x178) = uVar9;
      if (lVar8 != 0) {
        FUN_144be5cc0(lVar8);
        (*DAT_14c787678)(0,lVar8,0);
      }
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != lVar19) {
      (**(code **)(*plVar24 + 8))(plVar24);
      *(longlong *)(lVar7 + 0x18) = lVar19;
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
  }
  local_398 = param_1 + 0x18;
  local_388 = 0;
  local_380 = 0;
  local_390 = *(undefined8 *)(lVar7 + 0x18);
  local_278 = local_268;
  local_res18 = 0;
  local_3d0 = param_1 + 0x38;
  pcStack_3e0 = "";
  local_3f8 = "LtGetNextTask";
  pcStack_3f0 = "";
  local_428 = 0;
  local_270 = 0;
  local_26c = 0x80000040;
  do {
    plVar24 = *(longlong **)(param_1 + 0x20);
    local_3e8 = plVar24;
    (**(code **)(*plVar24 + 8))(plVar24);
    lVar8 = *(longlong *)(lVar7 + 0x170);
    *(undefined1 *)(lVar7 + 0x11) = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar22 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar22) {
        FUN_144f587b0((longlong *)(param_2 + 0x40),&PTR_vftable_14c6e47a0,(longlong)iVar22);
      }
      plVar10 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = lVar8;
      }
      *(int *)(param_2 + 0x48) = iVar22;
    }
    if (lVar19 != 0) {
      local_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      local_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar19,&local_2d8,&local_2e8);
    }
    uVar21 = 0;
    uVar20 = 0;
    if (local_428 == 0) {
      local_3b8 = "StGetNext";
      pcStack_3b0 = "";
      if (lVar19 != 0) {
        local_2c8 = 0x49c0de40;
        uStack_2c4 = 1;
        uStack_2c0 = 0x49c0de49;
        uStack_2bc = 1;
        FUN_144be99f0(lVar19,&local_2c8);
      }
      local_428 = 0;
      if (((param_2 == 0) || (*(short *)(param_2 + 4) != -1)) &&
         (uVar21 = uVar20, *(int *)(param_1 + 0x40) != 0)) {
        local_428 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        *(short *)(local_428 + 6) = *(short *)(local_428 + 6) + -1;
        *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + 1;
        local_380 = (uint)*(ushort *)(local_428 + 6);
        if (local_380 == 0) {
          FUN_144f52a00((longlong *)(param_1 + 0x38),0);
        }
      }
    }
    else {
      if ((*(char *)(local_428 + 10) != '\0') && (*(short *)(local_428 + 6) != 0)) {
        *(undefined2 *)(local_428 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          uVar20 = uVar21;
          do {
            if (local_428 == *plVar10) {
              FUN_144f52a00(param_1 + 0x38);
              break;
            }
            uVar16 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar16;
            plVar10 = plVar10 + 2;
          } while ((int)uVar16 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + -1;
      if ((uint)*(ushort *)(local_428 + 6) + (uint)*(ushort *)(local_428 + 8) == 0) {
        iVar22 = *(int *)(local_428 + 0x28);
        local_378 = local_368;
        lVar7 = 0;
        local_370 = 0;
        local_36c = 0x80000010;
        if (0 < (longlong)iVar22) {
          do {
            lVar18 = *(longlong *)(*(longlong *)(local_428 + 0x20) + lVar7 * 8);
            psVar1 = (short *)(lVar18 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar13 = local_370 + 1;
              if ((int)(local_36c & 0x7fffffff) < iVar13) {
                FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar13);
              }
              lVar14 = (longlong)local_370;
              local_370 = iVar13;
              if ((longlong *)(local_378 + lVar14 * 8) != (longlong *)0x0) {
                *(longlong *)(local_378 + lVar14 * 8) = lVar18;
              }
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar22);
        }
        uVar21 = 0;
        *(undefined4 *)(local_428 + 0x28) = 0;
        uVar20 = *(ulonglong *)(local_428 + 0x18);
        uVar23 = uVar21;
        if (uVar20 != 0) {
          do {
            if (((uVar20 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + uVar23 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + uVar23 * 8) + 0x10) = 0;
              FUN_144bdf120(*(longlong *)(param_1 + 0x50 + uVar23 * 8) + 0x178,1);
            }
            uVar20 = uVar20 >> 1;
            uVar23 = uVar23 + 1;
          } while (uVar20 != 0);
          *(undefined8 *)(local_428 + 0x18) = 0;
        }
        local_res20 = 0;
        uVar20 = uVar21;
        uVar23 = uVar21;
        if (0 < local_370) {
          do {
            pcVar25 = *(char **)(local_378 + uVar23);
            local_3f8 = pcVar25;
            (**(code **)(**(longlong **)(pcVar25 + 0x58) + 0x10))
                      (*(longlong **)(pcVar25 + 0x58),&local_410);
            uVar17 = 0xffff;
            uVar16 = 0;
            if (0 < (int)local_410) {
              uVar16 = local_410;
            }
            if ((int)uVar16 < 0xffff) {
              uVar17 = uVar16 & 0xffff;
            }
            *(short *)(pcVar25 + 6) = (short)uVar17;
            pcVar25[10] = iStack_40c == 1;
            if ((short)uVar17 == 0) {
              plVar10 = *(longlong **)(pcVar25 + 0x20);
              plVar24 = plVar10 + *(int *)(pcVar25 + 0x28);
              for (; plVar10 != plVar24; plVar10 = plVar10 + 1) {
                lVar7 = *plVar10;
                psVar1 = (short *)(lVar7 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar22 = local_370 + 1;
                  if ((int)(local_36c & 0x7fffffff) < iVar22) {
                    FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar22);
                  }
                  lVar18 = (longlong)local_370;
                  local_370 = iVar22;
                  if ((longlong *)(local_378 + lVar18 * 8) != (longlong *)0x0) {
                    *(longlong *)(local_378 + lVar18 * 8) = lVar7;
                  }
                }
              }
              lVar7 = 0;
              pcVar25[0x28] = '\0';
              pcVar25[0x29] = '\0';
              pcVar25[0x2a] = '\0';
              pcVar25[0x2b] = '\0';
              uVar21 = *(ulonglong *)(pcVar25 + 0x18);
              if (uVar21 != 0) {
                do {
                  if (((uVar21 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) = 0;
                    FUN_144bdf120(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x178,1);
                  }
                  lVar7 = lVar7 + 1;
                  uVar21 = uVar21 >> 1;
                } while (uVar21 != 0);
                local_3f8[0x18] = '\0';
                local_3f8[0x19] = '\0';
                local_3f8[0x1a] = '\0';
                local_3f8[0x1b] = '\0';
                local_3f8[0x1c] = '\0';
                local_3f8[0x1d] = '\0';
                local_3f8[0x1e] = '\0';
                local_3f8[0x1f] = '\0';
                pcVar25 = local_3f8;
              }
              pcVar25[4] = -1;
              pcVar25[5] = -1;
            }
            else {
              local_res20 = (int)uVar21 + uVar17;
              local_3c8[0] = *(undefined4 *)pcVar25;
              local_3c0 = pcVar25;
              FUN_144f52950(local_3d0,local_3c8);
            }
            uVar21 = (ulonglong)local_res20;
            uVar16 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar16;
            uVar23 = uVar23 + 8;
          } while ((int)uVar16 < local_370);
        }
        *(undefined2 *)(local_428 + 4) = 0xffff;
        local_370 = 0;
        if ((-1 < (int)local_36c) && (local_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_378,(ulonglong)(local_36c & 0x7fffffff) << 3);
        }
        local_378 = (undefined1 *)0x0;
        local_36c = 0x80000000;
        plVar24 = local_3e8;
        lVar7 = local_408;
      }
      local_428 = 0;
    }
    if (lVar19 != 0) {
      local_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      local_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar19,&local_2b8);
    }
    lVar18 = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar22 = *(int *)(param_2 + 0x48);
      iVar13 = 0;
      if (0 < iVar22) {
        plVar10 = *(longlong **)(param_2 + 0x40);
        do {
          if (*plVar10 == lVar8) goto LAB_144f56867;
          iVar13 = iVar13 + 1;
          lVar18 = lVar18 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar18 < iVar22);
      }
      iVar13 = -1;
      lVar18 = -1;
LAB_144f56867:
      *(int *)(param_2 + 0x48) = iVar22 + -1;
      if (iVar22 + -1 != iVar13) {
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar22 + -1) * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + lVar18 * 8);
        if (puVar12 != puVar15) {
          *puVar12 = *puVar15;
        }
      }
    }
    if (*(char *)(lVar7 + 0x50) != '\0') {
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar18 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar18 == 1) {
          lVar18 = *(longlong *)(lVar7 + 0x38);
          if (lVar18 == 0) {
            lVar18 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar18);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      puVar11 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar7 + 0x18),local_2a8);
      lVar18 = *(longlong *)(lVar7 + 0x48);
      uVar6 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *(undefined4 *)(lVar7 + 0x20) = *puVar11;
      *(undefined4 *)(lVar7 + 0x24) = uVar6;
      *(undefined4 *)(lVar7 + 0x28) = uVar2;
      *(undefined4 *)(lVar7 + 0x2c) = uVar3;
      uVar6 = puVar11[5];
      uVar2 = puVar11[6];
      uVar3 = puVar11[7];
      *(undefined4 *)(lVar7 + 0x30) = puVar11[4];
      *(undefined4 *)(lVar7 + 0x34) = uVar6;
      *(undefined4 *)(lVar7 + 0x38) = uVar2;
      *(undefined4 *)(lVar7 + 0x3c) = uVar3;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(puVar11 + 8);
      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(puVar11 + 10);
      *(undefined8 *)(puVar11 + 10) = 0;
      if (lVar18 != 0) {
        LOCK();
        plVar10 = (longlong *)(lVar18 + 0x60);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
      }
      if (local_280 != 0) {
        LOCK();
        plVar10 = (longlong *)(local_280 + 0x60);
        lVar18 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar18 == 1) {
          lVar18 = local_2a0;
          if (local_290 != 0) {
            lVar18 = local_290;
          }
          FUN_144bea6d0(local_280,lVar18);
        }
      }
      local_280 = 0;
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar18 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar18 == 1) {
          lVar18 = *(longlong *)(lVar7 + 0x38);
          if (lVar18 == 0) {
            lVar18 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar18);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined1 *)(lVar7 + 0x50) = 0;
    }
    if (0 < (int)uVar21) {
      if (local_428 != 0) {
        uVar21 = (ulonglong)((int)uVar21 - 1);
      }
      iVar22 = 0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar10 = (longlong *)(param_1 + 0x50);
        do {
          if ((int)uVar21 < 1) break;
          lVar18 = *plVar10;
          if (*(char *)(lVar18 + 0x10) != '\0') {
            *(undefined1 *)(lVar18 + 0x10) = 0;
            lVar14 = (longlong)local_270;
            local_270 = local_270 + 1;
            if ((longlong *)(local_278 + lVar14 * 8) != (longlong *)0x0) {
              *(longlong *)(local_278 + lVar14 * 8) = lVar18;
            }
            uVar21 = (ulonglong)((int)uVar21 - 1);
          }
          iVar22 = iVar22 + 1;
          plVar10 = plVar10 + 1;
        } while (iVar22 < *(int *)(param_1 + 0x4c));
      }
    }
    *(undefined1 *)(lVar7 + 0x11) = 1;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    uVar21 = 0;
    if (local_270 != 0) {
      uVar20 = uVar21;
      if (0 < local_270) {
        do {
          FUN_144bdf120(*(longlong *)(local_278 + uVar21) + 0x178,1);
          uVar16 = (int)uVar20 + 1;
          uVar21 = uVar21 + 8;
          uVar20 = (ulonglong)uVar16;
        } while ((int)uVar16 < local_270);
      }
      local_270 = 0;
    }
    if (local_428 == 0) {
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + -1;
      if (*(int *)(lVar7 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(lVar7 + 0x18) = 0;
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          LOCK();
          plVar24 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
          lVar19 = *plVar24;
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          if (lVar19 == 1) {
            lVar19 = *(longlong *)(lVar7 + 0x38);
            if (lVar19 == 0) {
              lVar19 = *(longlong *)(lVar7 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar19);
          }
        }
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined1 *)(lVar7 + 0x50) = 0;
        *(undefined1 *)(lVar7 + 0x11) = 0;
        iVar22 = *(int *)(param_1 + 600);
        puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar22 * 4);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = *(undefined4 *)(lVar7 + 8);
        }
        *(int *)(param_1 + 600) = iVar22 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      local_270 = 0;
      if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) << 3);
      }
      return local_res18;
    }
    uVar6 = *(undefined4 *)(local_428 + 0xc);
    if (((lVar19 != 0) && (*(ulonglong *)(lVar19 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar19 + 0x10) <= *(ulonglong *)(lVar19 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar19,0x20), cVar4 != '\0')))) {
      puVar12 = *(undefined8 **)(lVar19 + 0x10);
      puVar15 = puVar12 + 2;
      if (*(undefined8 **)(lVar19 + 0x20) < puVar15) {
        if (*(undefined8 **)(lVar19 + 0x20) != puVar12) {
          FUN_144bfbef0(puVar12,0);
        }
        puVar12 = *(undefined8 **)(lVar19 + 8);
        puVar15 = puVar12 + 2;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar15;
      *puVar12 = &DAT_1499720c0;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      FUN_144bea5e0(lVar19);
    }
    *(longlong *)(lVar7 + 0x170) = local_428;
    (**(code **)(**(longlong **)(local_428 + 0x58) + 0x18))
              (*(longlong **)(local_428 + 0x58),&local_398);
    *(longlong *)(lVar7 + 0x170) = lVar8;
    if (((lVar19 != 0) && (*(ulonglong *)(lVar19 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar19 + 0x10) <= *(ulonglong *)(lVar19 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar19,0x20), cVar4 != '\0')))) {
      puVar12 = *(undefined8 **)(lVar19 + 0x10);
      puVar15 = puVar12 + 2;
      if (*(undefined8 **)(lVar19 + 0x20) < puVar15) {
        if (*(undefined8 **)(lVar19 + 0x20) != puVar12) {
          FUN_144bfbef0(puVar12,0);
        }
        puVar12 = *(undefined8 **)(lVar19 + 8);
        puVar15 = puVar12 + 2;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar15;
      *puVar12 = &DAT_1499720c0;
      *(undefined4 *)(puVar12 + 1) = 0;
      FUN_144bea5f0(lVar19);
    }
    local_res18 = 1;
  } while( true );
}



// FUNCTION 144f56c80 FUN_144f56c80 body=2823 status=ok
// SIG undefined FUN_144f56c80(void)

undefined1 FUN_144f56c80(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  char *pcVar25;
  undefined1 local_res18;
  uint local_res20;
  longlong local_428;
  uint local_410;
  int iStack_40c;
  longlong local_408;
  char *local_3f8;
  char *pcStack_3f0;
  longlong *local_3e8;
  char *pcStack_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [2];
  char *local_3c0;
  char *local_3b8;
  char *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 *local_378;
  int local_370;
  uint local_36c;
  undefined1 local_368 [128];
  char *local_2e8;
  char *pcStack_2e0;
  char *local_2d8;
  char *pcStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  longlong local_290;
  longlong local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268 [552];
  
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar21 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar21 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar21 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar21 + 0xf0) = lVar7;
  }
  lVar21 = *(longlong *)(lVar7 + 0x3e0);
  plVar24 = *(longlong **)(param_1 + 0x20);
  lVar7 = FUN_144bdb730(DAT_14c797a88);
  uVar9 = 0;
  local_408 = lVar7;
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x168) != param_1)) {
    (**(code **)(*plVar24 + 8))(plVar24);
    iVar23 = *(int *)(*(longlong *)(param_1 + 0x250) + -4 + (longlong)*(int *)(param_1 + 600) * 4);
    iVar5 = iVar23 + 1;
    iVar13 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      iVar13 = iVar5;
    }
    *(int *)(param_1 + 0x4c) = iVar13;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lVar7 = *(longlong *)(param_1 + 0x50 + (longlong)iVar23 * 8);
    *(longlong *)(lVar7 + 0x18) = lVar21;
    *(undefined4 *)(lVar7 + 0xc) = 1;
    local_408 = lVar7;
    FUN_144bdb6a0(DAT_14c797a88,lVar7);
    if (*(int *)(param_1 + 900) == 2) {
      uVar6 = FUN_144bda950();
      *(undefined4 *)(lVar7 + 0x188) = uVar6;
      local_3d8 = 0x10;
      lVar8 = (*DAT_14c787670)(0,&local_3d8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar8,"hkAsyncThreadPoolSimpleSemaphore");
      }
      if (lVar8 != 0) {
        uVar9 = FUN_144be5ca0(lVar8,*(undefined8 *)(lVar7 + 0x180),uVar6);
      }
      lVar8 = *(longlong *)(lVar7 + 0x178);
      *(undefined8 *)(lVar7 + 0x178) = uVar9;
      if (lVar8 != 0) {
        FUN_144be5cc0(lVar8);
        (*DAT_14c787678)(0,lVar8,0);
      }
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != lVar21) {
      (**(code **)(*plVar24 + 8))(plVar24);
      *(longlong *)(lVar7 + 0x18) = lVar21;
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
  }
  local_398 = param_1 + 0x18;
  local_388 = 0;
  local_380 = 0;
  local_390 = *(undefined8 *)(lVar7 + 0x18);
  local_278 = local_268;
  local_res18 = 0;
  local_3d0 = param_1 + 0x38;
  pcStack_3e0 = "";
  local_3f8 = "LtGetNextTask";
  pcStack_3f0 = "";
  local_428 = 0;
  local_270 = 0;
  local_26c = 0x80000040;
  do {
    plVar24 = *(longlong **)(param_1 + 0x20);
    local_3e8 = plVar24;
    (**(code **)(*plVar24 + 8))(plVar24);
    lVar8 = *(longlong *)(lVar7 + 0x170);
    *(undefined1 *)(lVar7 + 0x11) = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar23 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar23) {
        FUN_144f587b0((longlong *)(param_2 + 0x40),&PTR_vftable_14c6e47a0,(longlong)iVar23);
      }
      plVar10 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = lVar8;
      }
      *(int *)(param_2 + 0x48) = iVar23;
    }
    if (lVar21 != 0) {
      local_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      local_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar21,&local_2d8,&local_2e8);
    }
    uVar22 = 0;
    if (local_428 == 0) {
      local_3b8 = "StGetNext";
      pcStack_3b0 = "";
      if (lVar21 != 0) {
        local_2c8 = 0x49c0de40;
        uStack_2c4 = 1;
        uStack_2c0 = 0x49c0de49;
        uStack_2bc = 1;
        FUN_144be99f0(lVar21,&local_2c8);
      }
      local_428 = 0;
      if (((param_2 == 0) || (*(short *)(param_2 + 4) != -1)) && (*(int *)(param_1 + 0x40) != 0)) {
        local_428 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        *(short *)(local_428 + 6) = *(short *)(local_428 + 6) + -1;
        *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + 1;
        local_380 = (uint)*(ushort *)(local_428 + 6);
        if (local_380 == 0) {
          FUN_144f52a00((longlong *)(param_1 + 0x38),0);
        }
      }
    }
    else {
      uVar22 = 0;
      if ((*(char *)(local_428 + 10) != '\0') && (*(short *)(local_428 + 6) != 0)) {
        *(undefined2 *)(local_428 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          uVar15 = uVar22;
          do {
            if (local_428 == *plVar10) {
              FUN_144f52a00(param_1 + 0x38);
              break;
            }
            uVar17 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar17;
            plVar10 = plVar10 + 2;
          } while ((int)uVar17 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + -1;
      if ((uint)*(ushort *)(local_428 + 6) + (uint)*(ushort *)(local_428 + 8) == 0) {
        iVar23 = *(int *)(local_428 + 0x28);
        local_378 = local_368;
        local_370 = 0;
        local_36c = 0x80000010;
        if (0 < (longlong)iVar23) {
          do {
            lVar7 = *(longlong *)(*(longlong *)(local_428 + 0x20) + uVar22 * 8);
            psVar1 = (short *)(lVar7 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar13 = local_370 + 1;
              if ((int)(local_36c & 0x7fffffff) < iVar13) {
                FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar13);
              }
              lVar14 = (longlong)local_370;
              local_370 = iVar13;
              if ((longlong *)(local_378 + lVar14 * 8) != (longlong *)0x0) {
                *(longlong *)(local_378 + lVar14 * 8) = lVar7;
              }
            }
            uVar22 = uVar22 + 1;
          } while ((longlong)uVar22 < (longlong)iVar23);
        }
        uVar22 = 0;
        *(undefined4 *)(local_428 + 0x28) = 0;
        uVar15 = *(ulonglong *)(local_428 + 0x18);
        uVar19 = uVar22;
        if (uVar15 != 0) {
          do {
            if (((uVar15 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + uVar19 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + uVar19 * 8) + 0x10) = 0;
              *(undefined4 *)(*(longlong *)(param_1 + 0x50 + uVar19 * 8) + 0x180) = 1;
            }
            uVar15 = uVar15 >> 1;
            uVar19 = uVar19 + 1;
          } while (uVar15 != 0);
          *(undefined8 *)(local_428 + 0x18) = 0;
        }
        local_res20 = 0;
        uVar15 = uVar22;
        uVar19 = uVar22;
        if (0 < local_370) {
          do {
            pcVar25 = *(char **)(local_378 + uVar19);
            local_3f8 = pcVar25;
            (**(code **)(**(longlong **)(pcVar25 + 0x58) + 0x10))
                      (*(longlong **)(pcVar25 + 0x58),&local_410);
            uVar18 = 0xffff;
            uVar17 = 0;
            if (0 < (int)local_410) {
              uVar17 = local_410;
            }
            if ((int)uVar17 < 0xffff) {
              uVar18 = uVar17 & 0xffff;
            }
            *(short *)(pcVar25 + 6) = (short)uVar18;
            pcVar25[10] = iStack_40c == 1;
            if ((short)uVar18 == 0) {
              plVar10 = *(longlong **)(pcVar25 + 0x20);
              plVar24 = plVar10 + *(int *)(pcVar25 + 0x28);
              for (; plVar10 != plVar24; plVar10 = plVar10 + 1) {
                lVar7 = *plVar10;
                psVar1 = (short *)(lVar7 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar23 = local_370 + 1;
                  if ((int)(local_36c & 0x7fffffff) < iVar23) {
                    FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar23);
                  }
                  lVar14 = (longlong)local_370;
                  local_370 = iVar23;
                  if ((longlong *)(local_378 + lVar14 * 8) != (longlong *)0x0) {
                    *(longlong *)(local_378 + lVar14 * 8) = lVar7;
                  }
                }
              }
              lVar7 = 0;
              pcVar25[0x28] = '\0';
              pcVar25[0x29] = '\0';
              pcVar25[0x2a] = '\0';
              pcVar25[0x2b] = '\0';
              uVar22 = *(ulonglong *)(pcVar25 + 0x18);
              if (uVar22 != 0) {
                do {
                  if (((uVar22 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x180) = 1;
                  }
                  lVar7 = lVar7 + 1;
                  uVar22 = uVar22 >> 1;
                } while (uVar22 != 0);
                local_3f8[0x18] = '\0';
                local_3f8[0x19] = '\0';
                local_3f8[0x1a] = '\0';
                local_3f8[0x1b] = '\0';
                local_3f8[0x1c] = '\0';
                local_3f8[0x1d] = '\0';
                local_3f8[0x1e] = '\0';
                local_3f8[0x1f] = '\0';
                pcVar25 = local_3f8;
              }
              pcVar25[4] = -1;
              pcVar25[5] = -1;
            }
            else {
              local_res20 = (int)uVar22 + uVar18;
              local_3c8[0] = *(undefined4 *)pcVar25;
              local_3c0 = pcVar25;
              FUN_144f52950(local_3d0,local_3c8);
            }
            uVar22 = (ulonglong)local_res20;
            uVar17 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar17;
            uVar19 = uVar19 + 8;
          } while ((int)uVar17 < local_370);
        }
        *(undefined2 *)(local_428 + 4) = 0xffff;
        local_370 = 0;
        if ((-1 < (int)local_36c) && (local_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_378,(ulonglong)(local_36c & 0x7fffffff) << 3);
        }
        local_378 = (undefined1 *)0x0;
        local_428 = 0;
        local_36c = 0x80000000;
        plVar24 = local_3e8;
        lVar7 = local_408;
      }
      else {
        local_428 = 0;
      }
    }
    if (lVar21 != 0) {
      local_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      local_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar21,&local_2b8);
    }
    uVar15 = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar23 = *(int *)(param_2 + 0x48);
      if (0 < iVar23) {
        plVar10 = *(longlong **)(param_2 + 0x40);
        uVar19 = uVar15;
        do {
          iVar13 = (int)uVar15;
          if (*plVar10 == lVar8) goto LAB_144f57394;
          uVar15 = (ulonglong)(iVar13 + 1);
          uVar19 = uVar19 + 1;
          plVar10 = plVar10 + 1;
        } while ((longlong)uVar19 < (longlong)iVar23);
      }
      iVar13 = -1;
      uVar19 = 0xffffffffffffffff;
LAB_144f57394:
      *(int *)(param_2 + 0x48) = iVar23 + -1;
      if (iVar23 + -1 != iVar13) {
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar23 + -1) * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar19 * 8);
        if (puVar12 != puVar16) {
          *puVar12 = *puVar16;
        }
      }
    }
    if (*(char *)(lVar7 + 0x50) != '\0') {
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar14 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar14 == 1) {
          lVar14 = *(longlong *)(lVar7 + 0x38);
          if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar14);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      puVar11 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar7 + 0x18),local_2a8);
      lVar14 = *(longlong *)(lVar7 + 0x48);
      uVar6 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *(undefined4 *)(lVar7 + 0x20) = *puVar11;
      *(undefined4 *)(lVar7 + 0x24) = uVar6;
      *(undefined4 *)(lVar7 + 0x28) = uVar2;
      *(undefined4 *)(lVar7 + 0x2c) = uVar3;
      uVar6 = puVar11[5];
      uVar2 = puVar11[6];
      uVar3 = puVar11[7];
      *(undefined4 *)(lVar7 + 0x30) = puVar11[4];
      *(undefined4 *)(lVar7 + 0x34) = uVar6;
      *(undefined4 *)(lVar7 + 0x38) = uVar2;
      *(undefined4 *)(lVar7 + 0x3c) = uVar3;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(puVar11 + 8);
      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(puVar11 + 10);
      *(undefined8 *)(puVar11 + 10) = 0;
      if (lVar14 != 0) {
        LOCK();
        plVar10 = (longlong *)(lVar14 + 0x60);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
      }
      if (local_280 != 0) {
        LOCK();
        plVar10 = (longlong *)(local_280 + 0x60);
        lVar14 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar14 == 1) {
          lVar14 = local_2a0;
          if (local_290 != 0) {
            lVar14 = local_290;
          }
          FUN_144bea6d0(local_280,lVar14);
        }
      }
      local_280 = 0;
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar14 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar14 == 1) {
          lVar14 = *(longlong *)(lVar7 + 0x38);
          if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar14);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined1 *)(lVar7 + 0x50) = 0;
    }
    iVar23 = 0;
    if (0 < (int)uVar22) {
      if (local_428 != 0) {
        uVar22 = (ulonglong)((int)uVar22 - 1);
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar10 = (longlong *)(param_1 + 0x50);
        do {
          if ((int)uVar22 < 1) break;
          lVar14 = *plVar10;
          if (*(char *)(lVar14 + 0x10) != '\0') {
            *(undefined1 *)(lVar14 + 0x10) = 0;
            lVar20 = (longlong)local_270;
            local_270 = local_270 + 1;
            if ((longlong *)(local_278 + lVar20 * 8) != (longlong *)0x0) {
              *(longlong *)(local_278 + lVar20 * 8) = lVar14;
            }
            uVar22 = (ulonglong)((int)uVar22 - 1);
          }
          iVar23 = iVar23 + 1;
          plVar10 = plVar10 + 1;
        } while (iVar23 < *(int *)(param_1 + 0x4c));
      }
    }
    *(undefined1 *)(lVar7 + 0x11) = 1;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    uVar22 = 0;
    if (local_270 != 0) {
      uVar15 = uVar22;
      if (0 < local_270) {
        do {
          uVar17 = (int)uVar15 + 1;
          *(undefined4 *)(*(longlong *)(local_278 + uVar22) + 0x180) = 1;
          uVar22 = uVar22 + 8;
          uVar15 = (ulonglong)uVar17;
        } while ((int)uVar17 < local_270);
      }
      local_270 = 0;
    }
    if (local_428 == 0) {
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + -1;
      if (*(int *)(lVar7 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(lVar7 + 0x18) = 0;
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          LOCK();
          plVar24 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
          lVar21 = *plVar24;
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          if (lVar21 == 1) {
            lVar21 = *(longlong *)(lVar7 + 0x38);
            if (lVar21 == 0) {
              lVar21 = *(longlong *)(lVar7 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar21);
          }
        }
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined1 *)(lVar7 + 0x50) = 0;
        *(undefined1 *)(lVar7 + 0x11) = 0;
        iVar23 = *(int *)(param_1 + 600);
        puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar23 * 4);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = *(undefined4 *)(lVar7 + 8);
        }
        *(int *)(param_1 + 600) = iVar23 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      local_270 = 0;
      if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) << 3);
      }
      return local_res18;
    }
    uVar6 = *(undefined4 *)(local_428 + 0xc);
    if (((lVar21 != 0) && (*(ulonglong *)(lVar21 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar21 + 0x10) <= *(ulonglong *)(lVar21 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar21,0x20), cVar4 != '\0')))) {
      puVar12 = *(undefined8 **)(lVar21 + 0x10);
      puVar16 = puVar12 + 2;
      if (*(undefined8 **)(lVar21 + 0x20) < puVar16) {
        if (*(undefined8 **)(lVar21 + 0x20) != puVar12) {
          FUN_144bfbef0(puVar12,0);
        }
        puVar12 = *(undefined8 **)(lVar21 + 8);
        puVar16 = puVar12 + 2;
      }
      *(undefined8 **)(lVar21 + 0x10) = puVar16;
      *puVar12 = &DAT_1499720c0;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      FUN_144bea5e0(lVar21);
    }
    *(longlong *)(lVar7 + 0x170) = local_428;
    (**(code **)(**(longlong **)(local_428 + 0x58) + 0x18))
              (*(longlong **)(local_428 + 0x58),&local_398);
    *(longlong *)(lVar7 + 0x170) = lVar8;
    if (((lVar21 != 0) && (*(ulonglong *)(lVar21 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar21 + 0x10) <= *(ulonglong *)(lVar21 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar21,0x20), cVar4 != '\0')))) {
      puVar12 = *(undefined8 **)(lVar21 + 0x10);
      puVar16 = puVar12 + 2;
      if (*(undefined8 **)(lVar21 + 0x20) < puVar16) {
        if (*(undefined8 **)(lVar21 + 0x20) != puVar12) {
          FUN_144bfbef0(puVar12,0);
        }
        puVar12 = *(undefined8 **)(lVar21 + 8);
        puVar16 = puVar12 + 2;
      }
      *(undefined8 **)(lVar21 + 0x10) = puVar16;
      *puVar12 = &DAT_1499720c0;
      *(undefined4 *)(puVar12 + 1) = 0;
      FUN_144bea5f0(lVar21);
    }
    local_res18 = 1;
  } while( true );
}



// FUNCTION 144f57790 FUN_144f57790 body=2933 status=ok
// SIG undefined FUN_144f57790(void)

undefined1 FUN_144f57790(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ushort uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  char *pcVar25;
  undefined1 local_res18;
  uint local_res20;
  longlong local_428;
  int local_410;
  int iStack_40c;
  longlong local_408;
  char *local_3f8;
  char *pcStack_3f0;
  longlong *local_3e8;
  char *pcStack_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [2];
  char *local_3c0;
  char *local_3b8;
  char *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 *local_378;
  int local_370;
  uint local_36c;
  undefined1 local_368 [128];
  char *local_2e8;
  char *pcStack_2e0;
  char *local_2d8;
  char *pcStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  longlong local_290;
  longlong local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268 [552];
  
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar19 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar19 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar19 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar19 + 0xf0) = lVar7;
  }
  lVar19 = *(longlong *)(lVar7 + 0x3e0);
  plVar24 = *(longlong **)(param_1 + 0x20);
  lVar7 = FUN_144bdb730(DAT_14c797a88);
  uVar9 = 0;
  local_408 = lVar7;
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x168) != param_1)) {
    (**(code **)(*plVar24 + 8))(plVar24);
    iVar22 = *(int *)(*(longlong *)(param_1 + 0x250) + -4 + (longlong)*(int *)(param_1 + 600) * 4);
    iVar5 = iVar22 + 1;
    iVar13 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      iVar13 = iVar5;
    }
    *(int *)(param_1 + 0x4c) = iVar13;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lVar7 = *(longlong *)(param_1 + 0x50 + (longlong)iVar22 * 8);
    *(longlong *)(lVar7 + 0x18) = lVar19;
    *(undefined4 *)(lVar7 + 0xc) = 1;
    local_408 = lVar7;
    FUN_144bdb6a0(DAT_14c797a88,lVar7);
    if (*(int *)(param_1 + 900) == 2) {
      uVar6 = FUN_144bda950();
      *(undefined4 *)(lVar7 + 0x188) = uVar6;
      local_3d8 = 0x10;
      lVar8 = (*DAT_14c787670)(0,&local_3d8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar8,"hkAsyncThreadPoolSimpleSemaphore");
      }
      if (lVar8 != 0) {
        uVar9 = FUN_144be5ca0(lVar8,*(undefined8 *)(lVar7 + 0x180),uVar6);
      }
      lVar8 = *(longlong *)(lVar7 + 0x178);
      *(undefined8 *)(lVar7 + 0x178) = uVar9;
      if (lVar8 != 0) {
        FUN_144be5cc0(lVar8);
        (*DAT_14c787678)(0,lVar8,0);
      }
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != lVar19) {
      (**(code **)(*plVar24 + 8))(plVar24);
      *(longlong *)(lVar7 + 0x18) = lVar19;
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
  }
  local_398 = param_1 + 0x18;
  local_388 = 0;
  local_380 = 0;
  local_390 = *(undefined8 *)(lVar7 + 0x18);
  local_278 = local_268;
  local_res18 = 0;
  local_3d0 = param_1 + 0x38;
  local_3e8 = (longlong *)0x149c0de18;
  pcStack_3e0 = "";
  local_3f8 = "LtGetNextTask";
  pcStack_3f0 = "";
  local_428 = 0;
  local_270 = 0;
  local_26c = 0x80000040;
  do {
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0x8db8cde);
    plVar24 = *(longlong **)(param_1 + 0x20);
    local_3e8 = plVar24;
    (**(code **)(*plVar24 + 8))(plVar24);
    lVar8 = *(longlong *)(lVar7 + 0x170);
    *(undefined1 *)(lVar7 + 0x11) = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar22 = *(int *)(param_2 + 0x48) + 1;
      if ((int)(*(uint *)(param_2 + 0x4c) & 0x7fffffff) < iVar22) {
        FUN_144f587b0((longlong *)(param_2 + 0x40),&PTR_vftable_14c6e47a0,(longlong)iVar22);
      }
      plVar10 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
      ;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = lVar8;
      }
      *(int *)(param_2 + 0x48) = iVar22;
    }
    if (lVar19 != 0) {
      local_2e8 = "StFinishPrevious";
      pcStack_2e0 = "";
      local_2d8 = "LtGetNextTask";
      pcStack_2d0 = "";
      FUN_144be9870(lVar19,&local_2d8,&local_2e8);
    }
    uVar21 = 0;
    uVar20 = 0;
    if (local_428 == 0) {
      local_3b8 = "StGetNext";
      pcStack_3b0 = "";
      if (lVar19 != 0) {
        local_2c8 = 0x49c0de40;
        uStack_2c4 = 1;
        uStack_2c0 = 0x49c0de49;
        uStack_2bc = 1;
        FUN_144be99f0(lVar19,&local_2c8);
      }
      local_428 = 0;
      if (((param_2 == 0) || (*(short *)(param_2 + 4) != -1)) &&
         (uVar21 = uVar20, *(int *)(param_1 + 0x40) != 0)) {
        local_428 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        *(short *)(local_428 + 6) = *(short *)(local_428 + 6) + -1;
        *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + 1;
        local_380 = (uint)*(ushort *)(local_428 + 6);
        if (local_380 == 0) {
          FUN_144f52a00((longlong *)(param_1 + 0x38),0);
        }
      }
    }
    else {
      if ((*(char *)(local_428 + 10) != '\0') && (*(short *)(local_428 + 6) != 0)) {
        *(undefined2 *)(local_428 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          uVar20 = uVar21;
          do {
            if (local_428 == *plVar10) {
              FUN_144f52a00(param_1 + 0x38);
              break;
            }
            uVar17 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar17;
            plVar10 = plVar10 + 2;
          } while ((int)uVar17 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(local_428 + 8) = *(short *)(local_428 + 8) + -1;
      if ((uint)*(ushort *)(local_428 + 6) + (uint)*(ushort *)(local_428 + 8) == 0) {
        iVar22 = *(int *)(local_428 + 0x28);
        local_378 = local_368;
        lVar7 = 0;
        local_370 = 0;
        local_36c = 0x80000010;
        if (0 < (longlong)iVar22) {
          do {
            lVar18 = *(longlong *)(*(longlong *)(local_428 + 0x20) + lVar7 * 8);
            psVar1 = (short *)(lVar18 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              iVar13 = local_370 + 1;
              if ((int)(local_36c & 0x7fffffff) < iVar13) {
                FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar13);
              }
              lVar14 = (longlong)local_370;
              local_370 = iVar13;
              if ((longlong *)(local_378 + lVar14 * 8) != (longlong *)0x0) {
                *(longlong *)(local_378 + lVar14 * 8) = lVar18;
              }
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar22);
        }
        uVar21 = 0;
        *(undefined4 *)(local_428 + 0x28) = 0;
        uVar20 = *(ulonglong *)(local_428 + 0x18);
        uVar23 = uVar21;
        if (uVar20 != 0) {
          do {
            if (((uVar20 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + uVar23 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + uVar23 * 8) + 0x10) = 0;
              FUN_144be5cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x50 + uVar23 * 8) + 0x178));
            }
            uVar20 = uVar20 >> 1;
            uVar23 = uVar23 + 1;
          } while (uVar20 != 0);
          *(undefined8 *)(local_428 + 0x18) = 0;
        }
        local_res20 = 0;
        uVar20 = uVar21;
        uVar23 = uVar21;
        if (0 < local_370) {
          do {
            pcVar25 = *(char **)(local_378 + uVar23);
            local_3f8 = pcVar25;
            (**(code **)(**(longlong **)(pcVar25 + 0x58) + 0x10))
                      (*(longlong **)(pcVar25 + 0x58),&local_410);
            iVar22 = 0;
            if (0 < local_410) {
              iVar22 = local_410;
            }
            uVar16 = 0xffff;
            if (iVar22 < 0xffff) {
              uVar16 = (ushort)iVar22;
            }
            *(ushort *)(pcVar25 + 6) = uVar16;
            pcVar25[10] = iStack_40c == 1;
            if (uVar16 == 0) {
              plVar10 = *(longlong **)(pcVar25 + 0x20);
              plVar24 = plVar10 + *(int *)(pcVar25 + 0x28);
              for (; plVar10 != plVar24; plVar10 = plVar10 + 1) {
                lVar7 = *plVar10;
                psVar1 = (short *)(lVar7 + 4);
                *psVar1 = *psVar1 + -1;
                if (*psVar1 == 0) {
                  iVar22 = local_370 + 1;
                  if ((int)(local_36c & 0x7fffffff) < iVar22) {
                    FUN_144f587b0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar22);
                  }
                  lVar18 = (longlong)local_370;
                  local_370 = iVar22;
                  if ((longlong *)(local_378 + lVar18 * 8) != (longlong *)0x0) {
                    *(longlong *)(local_378 + lVar18 * 8) = lVar7;
                  }
                }
              }
              lVar7 = 0;
              pcVar25[0x28] = '\0';
              pcVar25[0x29] = '\0';
              pcVar25[0x2a] = '\0';
              pcVar25[0x2b] = '\0';
              uVar21 = *(ulonglong *)(pcVar25 + 0x18);
              if (uVar21 != 0) {
                do {
                  if (((uVar21 & 1) != 0) &&
                     (*(char *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) != '\0')) {
                    *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x10) = 0;
                    FUN_144be5cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x50 + lVar7 * 8) + 0x178)
                                 );
                  }
                  lVar7 = lVar7 + 1;
                  uVar21 = uVar21 >> 1;
                } while (uVar21 != 0);
                local_3f8[0x18] = '\0';
                local_3f8[0x19] = '\0';
                local_3f8[0x1a] = '\0';
                local_3f8[0x1b] = '\0';
                local_3f8[0x1c] = '\0';
                local_3f8[0x1d] = '\0';
                local_3f8[0x1e] = '\0';
                local_3f8[0x1f] = '\0';
                pcVar25 = local_3f8;
              }
              pcVar25[4] = -1;
              pcVar25[5] = -1;
            }
            else {
              local_res20 = (int)uVar21 + (uint)uVar16;
              local_3c8[0] = *(undefined4 *)pcVar25;
              local_3c0 = pcVar25;
              FUN_144f52950(local_3d0,local_3c8);
            }
            uVar21 = (ulonglong)local_res20;
            uVar17 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar17;
            uVar23 = uVar23 + 8;
          } while ((int)uVar17 < local_370);
        }
        *(undefined2 *)(local_428 + 4) = 0xffff;
        local_370 = 0;
        if ((-1 < (int)local_36c) && (local_378 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_378,(ulonglong)(local_36c & 0x7fffffff) << 3);
        }
        local_378 = (undefined1 *)0x0;
        local_36c = 0x80000000;
        plVar24 = local_3e8;
        lVar7 = local_408;
      }
      local_428 = 0;
    }
    if (lVar19 != 0) {
      local_3a8 = &DAT_14999058c;
      puStack_3a0 = &DAT_14999058e;
      local_2b8 = 0x4999058c;
      uStack_2b4 = 1;
      uStack_2b0 = 0x4999058e;
      uStack_2ac = 1;
      FUN_144be9b20(lVar19,&local_2b8);
    }
    lVar18 = 0;
    if ((param_2 != 0) && (local_428 == 0)) {
      iVar22 = *(int *)(param_2 + 0x48);
      iVar13 = 0;
      if (0 < iVar22) {
        plVar10 = *(longlong **)(param_2 + 0x40);
        do {
          if (*plVar10 == lVar8) goto LAB_144f57eb2;
          iVar13 = iVar13 + 1;
          lVar18 = lVar18 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar18 < iVar22);
      }
      iVar13 = -1;
      lVar18 = -1;
LAB_144f57eb2:
      *(int *)(param_2 + 0x48) = iVar22 + -1;
      if (iVar22 + -1 != iVar13) {
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + ((longlong)iVar22 + -1) * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + lVar18 * 8);
        if (puVar12 != puVar15) {
          *puVar12 = *puVar15;
        }
      }
    }
    if (*(char *)(lVar7 + 0x50) != '\0') {
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar18 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar18 == 1) {
          lVar18 = *(longlong *)(lVar7 + 0x38);
          if (lVar18 == 0) {
            lVar18 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar18);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      puVar11 = (undefined4 *)FUN_144bea330(*(undefined8 *)(lVar7 + 0x18),local_2a8);
      lVar18 = *(longlong *)(lVar7 + 0x48);
      uVar6 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *(undefined4 *)(lVar7 + 0x20) = *puVar11;
      *(undefined4 *)(lVar7 + 0x24) = uVar6;
      *(undefined4 *)(lVar7 + 0x28) = uVar2;
      *(undefined4 *)(lVar7 + 0x2c) = uVar3;
      uVar6 = puVar11[5];
      uVar2 = puVar11[6];
      uVar3 = puVar11[7];
      *(undefined4 *)(lVar7 + 0x30) = puVar11[4];
      *(undefined4 *)(lVar7 + 0x34) = uVar6;
      *(undefined4 *)(lVar7 + 0x38) = uVar2;
      *(undefined4 *)(lVar7 + 0x3c) = uVar3;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(puVar11 + 8);
      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(puVar11 + 10);
      *(undefined8 *)(puVar11 + 10) = 0;
      if (lVar18 != 0) {
        LOCK();
        plVar10 = (longlong *)(lVar18 + 0x60);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
      }
      if (local_280 != 0) {
        LOCK();
        plVar10 = (longlong *)(local_280 + 0x60);
        lVar18 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar18 == 1) {
          lVar18 = local_2a0;
          if (local_290 != 0) {
            lVar18 = local_290;
          }
          FUN_144bea6d0(local_280,lVar18);
        }
      }
      local_280 = 0;
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        LOCK();
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
        lVar18 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar18 == 1) {
          lVar18 = *(longlong *)(lVar7 + 0x38);
          if (lVar18 == 0) {
            lVar18 = *(longlong *)(lVar7 + 0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar18);
        }
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined1 *)(lVar7 + 0x50) = 0;
    }
    if (0 < (int)uVar21) {
      if (local_428 != 0) {
        uVar21 = (ulonglong)((int)uVar21 - 1);
      }
      iVar22 = 0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar10 = (longlong *)(param_1 + 0x50);
        do {
          if ((int)uVar21 < 1) break;
          lVar18 = *plVar10;
          if (*(char *)(lVar18 + 0x10) != '\0') {
            *(undefined1 *)(lVar18 + 0x10) = 0;
            lVar14 = (longlong)local_270;
            local_270 = local_270 + 1;
            if ((longlong *)(local_278 + lVar14 * 8) != (longlong *)0x0) {
              *(longlong *)(local_278 + lVar14 * 8) = lVar18;
            }
            uVar21 = (ulonglong)((int)uVar21 - 1);
          }
          iVar22 = iVar22 + 1;
          plVar10 = plVar10 + 1;
        } while (iVar22 < *(int *)(param_1 + 0x4c));
      }
    }
    *(undefined1 *)(lVar7 + 0x11) = 1;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0xb011ac3e);
    uVar21 = 0;
    if (local_270 != 0) {
      uVar20 = uVar21;
      if (0 < local_270) {
        do {
          FUN_144be5cf0(*(undefined8 *)(*(longlong *)(local_278 + uVar21) + 0x178));
          uVar17 = (int)uVar20 + 1;
          uVar21 = uVar21 + 8;
          uVar20 = (ulonglong)uVar17;
        } while ((int)uVar17 < local_270);
      }
      local_270 = 0;
    }
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0xf0e3c62c);
    if (local_428 == 0) {
      FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0x77bbddcf);
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + -1;
      if (*(int *)(lVar7 + 0xc) < 1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(lVar7 + 0x18) = 0;
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          LOCK();
          plVar24 = (longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60);
          lVar19 = *plVar24;
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          if (lVar19 == 1) {
            lVar19 = *(longlong *)(lVar7 + 0x38);
            if (lVar19 == 0) {
              lVar19 = *(longlong *)(lVar7 + 0x28);
            }
            FUN_144bea6d0(*(undefined8 *)(lVar7 + 0x48),lVar19);
          }
        }
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined1 *)(lVar7 + 0x50) = 0;
        *(undefined1 *)(lVar7 + 0x11) = 0;
        iVar22 = *(int *)(param_1 + 600);
        puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar22 * 4);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = *(undefined4 *)(lVar7 + 8);
        }
        *(int *)(param_1 + 600) = iVar22 + 1;
        FUN_144bdb6a0(DAT_14c797a88,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0x51ba5d33);
      local_270 = 0;
      if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_278,(ulonglong)(local_26c & 0x7fffffff) << 3);
      }
      return local_res18;
    }
    uVar6 = *(undefined4 *)(local_428 + 0xc);
    if (((lVar19 != 0) && (*(ulonglong *)(lVar19 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar19 + 0x10) <= *(ulonglong *)(lVar19 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar19,0x20), cVar4 != '\0')))) {
      puVar12 = *(undefined8 **)(lVar19 + 0x10);
      puVar15 = puVar12 + 2;
      if (*(undefined8 **)(lVar19 + 0x20) < puVar15) {
        if (*(undefined8 **)(lVar19 + 0x20) != puVar12) {
          FUN_144bfbef0(puVar12,0);
        }
        puVar12 = *(undefined8 **)(lVar19 + 8);
        puVar15 = puVar12 + 2;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar15;
      *puVar12 = &DAT_1499720c0;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      FUN_144bea5e0(lVar19);
    }
    *(longlong *)(lVar7 + 0x170) = local_428;
    (**(code **)(**(longlong **)(local_428 + 0x58) + 0x18))
              (*(longlong **)(local_428 + 0x58),&local_398);
    *(longlong *)(lVar7 + 0x170) = lVar8;
    if (((lVar19 != 0) && (*(ulonglong *)(lVar19 + 0x18) != 0)) &&
       ((*(ulonglong *)(lVar19 + 0x10) <= *(ulonglong *)(lVar19 + 0x18) ||
        (cVar4 = FUN_144bea600(lVar19,0x20), cVar4 != '\0')))) {
      puVar12 = *(undefined8 **)(lVar19 + 0x10);
      puVar15 = puVar12 + 2;
      if (*(undefined8 **)(lVar19 + 0x20) < puVar15) {
        if (*(undefined8 **)(lVar19 + 0x20) != puVar12) {
          FUN_144bfbef0(puVar12,0);
        }
        puVar12 = *(undefined8 **)(lVar19 + 8);
        puVar15 = puVar12 + 2;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar15;
      *puVar12 = &DAT_1499720c0;
      *(undefined4 *)(puVar12 + 1) = 0;
      FUN_144bea5f0(lVar19);
    }
    local_res18 = 1;
    FUN_144bda9a0(*(undefined8 *)(lVar7 + 0x180),0xe52d5b60);
  } while( true );
}



// FUNCTION 144f58310 FUN_144f58310 body=260 status=ok
// SIG undefined FUN_144f58310(void)

void FUN_144f58310(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_144be9620(param_2,param_4);
  if ((param_3 == 0) || ((int)param_4 <= (int)param_2[1])) {
    uVar3 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 < (int)uVar2) {
      uVar2 = param_4;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 << 3);
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_144b3d470(lVar1,*param_2,(longlong)(int)uVar2 << 3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = lVar1;
    uVar3 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar3 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar3;
  }
  else {
    FUN_144b3d470(param_3,*param_2,(longlong)(int)param_2[1] << 3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  return;
}



// FUNCTION 144f58420 FUN_144f58420 body=418 status=ok
// SIG undefined FUN_144f58420(void)

ulonglong FUN_144f58420(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar15 = param_3;
  if (param_3 < uVar10) {
    uVar15 = uVar10;
  }
  if ((0x7ffffffe < uVar15) && (uVar15 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar15 * 0x30;
  puVar9 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar2 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar2;
  puVar3 = (undefined4 *)*param_1;
  uVar14 = (ulonglong)uVar2;
  puVar11 = puVar9;
  puVar16 = puVar3;
  if (0 < (int)uVar2) {
    do {
      if (puVar11 != (undefined4 *)0x0) {
        uVar5 = puVar16[1];
        uVar6 = puVar16[2];
        uVar7 = puVar16[3];
        *puVar11 = *puVar16;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        uVar8 = *(undefined8 *)(puVar16 + 6);
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar16 + 4);
        *(undefined8 *)(puVar11 + 6) = uVar8;
        *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar16 + 8);
        *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(puVar16 + 10);
        *(undefined8 *)(puVar16 + 10) = 0;
      }
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 0xc;
      puVar16 = puVar16 + 0xc;
    } while (uVar10 != 0);
    plVar13 = (longlong *)(puVar3 + 10);
    do {
      if (*plVar13 != 0) {
        LOCK();
        plVar1 = (longlong *)(*plVar13 + 0x60);
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 1) {
          lVar12 = plVar13[-2];
          if (lVar12 == 0) {
            lVar12 = plVar13[-4];
          }
          FUN_144bea6d0(*plVar13,lVar12);
        }
      }
      *plVar13 = 0;
      plVar13 = plVar13 + 6;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = uVar15 * 0x30 + 0x30;
  uVar14 = uVar15;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar14 = uVar15 + 1;
    if (uVar10 <= local_res8) {
      uVar15 = local_res8 + uVar15 * -0x30;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar4,0);
      uVar14 = uVar14 + uVar15 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = (longlong)puVar9;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar14;
  return uVar10;
}



// FUNCTION 144f585d0 FUN_144f585d0 body=235 status=ok
// SIG undefined FUN_144f585d0(void)

void FUN_144f585d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144f586c0 FUN_144f586c0 body=236 status=ok
// SIG undefined FUN_144f586c0(void)

void FUN_144f586c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 0x10;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f587b0 FUN_144f587b0 body=235 status=ok
// SIG undefined FUN_144f587b0(void)

void FUN_144f587b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144f5889c FUN_144f5889c body=9 status=ok
// SIG undefined FUN_144f5889c(void)

void FUN_144f5889c(longlong param_1)

{
  FUN_144bf92e0(param_1 + -0x18);
  return;
}



// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1426a6c60 Unwind@1426a6c60 body=34 status=ok
// SIG undefined Unwind@1426a6c60(void)

void Unwind_1426a6c60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426a6ca0 FUN_1426a6ca0 body=240 status=ok
// SIG undefined FUN_1426a6ca0(void)

longlong * FUN_1426a6ca0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_3 < 1) {
    plVar1 = (longlong *)thunk_FUN_1424da030(0x11040);
    if (plVar1 == (longlong *)0x0) {
      if (*param_3 < 1) {
        *param_3 = 7;
      }
    }
    else {
      *plVar1 = 0;
      plVar1[1] = -0x100000000;
      plVar1[2] = 0;
      plVar1[3] = 0;
      *(undefined4 *)(plVar1 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)plVar1 + 0x24) = param_1;
      *(undefined4 *)(plVar1 + 5) = param_1;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = param_2;
      *(undefined4 *)(plVar1 + 6) = 0;
      *(undefined4 *)((longlong)plVar1 + 0x34) = param_1;
      plVar1[7] = 0;
      if (*param_3 < 1) {
        lVar2 = FUN_1424da030(0x4000);
        *plVar1 = lVar2;
        lVar2 = FUN_1424da030(0x10000);
        plVar1[2] = lVar2;
        if ((*plVar1 == 0) || (lVar2 == 0)) {
          *param_3 = 7;
        }
        else {
          *(undefined4 *)(plVar1 + 1) = 0x1000;
          *(undefined4 *)(plVar1 + 3) = 0x4000;
          if (*param_3 < 1) {
            return plVar1;
          }
        }
      }
      FUN_1424da110(*plVar1);
      FUN_1424da110(plVar1[2]);
      FUN_1424da110(plVar1[7]);
      FUN_1401773f0(plVar1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1426a6d90 FUN_1426a6d90 body=59 status=ok
// SIG undefined FUN_1426a6d90(void)

void FUN_1426a6d90(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1424da110(*param_1);
    FUN_1424da110(param_1[2]);
    FUN_1424da110(param_1[7]);
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 1426a6dd0 FUN_1426a6dd0 body=70 status=ok
// SIG undefined FUN_1426a6dd0(void)

undefined4 FUN_1426a6dd0(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (0x10ffff < param_2) {
    return *(undefined4 *)((longlong)param_1 + 0x2c);
  }
  if ((int)param_2 < (int)param_1[6]) {
    uVar1 = (ulonglong)(param_2 >> 4);
    if (*(char *)((longlong)param_1 + uVar1 + 0x40) != '\0') {
      return *(undefined4 *)
              ((ulonglong)((param_2 & 0xf) + *(int *)(*param_1 + uVar1 * 4)) * 4 + param_1[2]);
    }
    return *(undefined4 *)(uVar1 * 4 + *param_1);
  }
  return *(undefined4 *)((longlong)param_1 + 0x34);
}



// FUNCTION 1426a6e20 FUN_1426a6e20 body=11 status=ok
// SIG undefined FUN_1426a6e20(void)

void FUN_1426a6e20(longlong *param_1,ulonglong param_2,undefined4 param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0 < *param_4) {
    return;
  }
  if (0 < *param_4) {
    return;
  }
  uVar2 = (uint)param_2;
  if (0x10ffff < uVar2) {
    *param_4 = 1;
    return;
  }
  if ((int)param_1[6] <= (int)uVar2) {
    uVar3 = (uVar2 & 0xfffffe00) + 0x200;
    iVar4 = (int)param_1[6] >> 4;
    uVar5 = uVar3 >> 4;
    if ((int)param_1[1] < (int)uVar5) {
      _Dst = (void *)FUN_1424da030(0x44000);
      if (_Dst == (void *)0x0) goto LAB_1426a6f1c;
      memcpy(_Dst,(void *)*param_1,(longlong)(iVar4 * 4));
      FUN_1424da110(*param_1);
      *param_1 = (longlong)_Dst;
      *(undefined4 *)(param_1 + 1) = 0x11000;
    }
    lVar1 = (longlong)iVar4;
    do {
      *(undefined1 *)((longlong)param_1 + lVar1 + 0x40) = 0;
      *(int *)(*param_1 + lVar1 * 4) = (int)param_1[5];
      lVar1 = lVar1 + 1;
    } while (lVar1 < (longlong)(ulonglong)uVar5);
    *(uint *)(param_1 + 6) = uVar3;
  }
  iVar4 = FUN_1426a9f70(param_1,param_2 >> 4 & 0xfffffff);
  if (-1 < iVar4) {
    *(undefined4 *)(param_1[2] + (ulonglong)(iVar4 + (uVar2 & 0xf)) * 4) = param_3;
    return;
  }
LAB_1426a6f1c:
  *param_4 = 7;
  return;
}



// FUNCTION 1426a6e30 FUN_1426a6e30 body=259 status=ok
// SIG undefined FUN_1426a6e30(void)

void FUN_1426a6e30(longlong *param_1,ulonglong param_2,undefined4 param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0 < *param_4) {
    return;
  }
  uVar2 = (uint)param_2;
  if (0x10ffff < uVar2) {
    *param_4 = 1;
    return;
  }
  if ((int)param_1[6] <= (int)uVar2) {
    uVar3 = (uVar2 & 0xfffffe00) + 0x200;
    iVar4 = (int)param_1[6] >> 4;
    uVar5 = uVar3 >> 4;
    if ((int)param_1[1] < (int)uVar5) {
      _Dst = (void *)FUN_1424da030(0x44000);
      if (_Dst == (void *)0x0) goto LAB_1426a6f1c;
      memcpy(_Dst,(void *)*param_1,(longlong)(iVar4 * 4));
      FUN_1424da110(*param_1);
      *param_1 = (longlong)_Dst;
      *(undefined4 *)(param_1 + 1) = 0x11000;
    }
    lVar1 = (longlong)iVar4;
    do {
      *(undefined1 *)((longlong)param_1 + lVar1 + 0x40) = 0;
      *(int *)(*param_1 + lVar1 * 4) = (int)param_1[5];
      lVar1 = lVar1 + 1;
    } while (lVar1 < (longlong)(ulonglong)uVar5);
    *(uint *)(param_1 + 6) = uVar3;
  }
  iVar4 = FUN_1426a9f70(param_1,param_2 >> 4 & 0xfffffff);
  if (-1 < iVar4) {
    *(undefined4 *)(param_1[2] + (ulonglong)(iVar4 + (uVar2 & 0xf)) * 4) = param_3;
    return;
  }
LAB_1426a6f1c:
  *param_4 = 7;
  return;
}



// FUNCTION 1426a6f40 FUN_1426a6f40 body=12202 status=ok
// SIG undefined FUN_1426a6f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1426a6f40(longlong *param_1,uint param_2,uint param_3,int *param_4)

{
  undefined1 (*_Dst) [16];
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ushort *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  char cVar12;
  undefined4 uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  char cVar17;
  byte bVar20;
  byte bVar24;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  uint *puVar38;
  void *pvVar39;
  undefined1 *puVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  void *_Dst_00;
  short *psVar54;
  undefined2 uVar55;
  ulonglong uVar56;
  longlong lVar57;
  longlong lVar58;
  uint uVar59;
  uint uVar60;
  uint *puVar61;
  int iVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  longlong lVar65;
  undefined1 *puVar66;
  longlong lVar67;
  undefined4 *puVar68;
  ulonglong uVar69;
  longlong lVar70;
  int iVar71;
  longlong lVar72;
  ulonglong uVar73;
  int iVar74;
  size_t sVar75;
  ulonglong uVar76;
  bool bVar77;
  bool bVar78;
  undefined1 auVar79 [16];
  ushort uVar80;
  ushort uVar82;
  ushort uVar83;
  ushort uVar84;
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  short sVar91;
  undefined1 auVar94 [16];
  uint local_1df4;
  ulonglong local_1df0;
  uint local_1dd8;
  ulonglong local_1da0;
  undefined1 *local_1d98;
  int local_1d90;
  int local_1d8c;
  int iStack_1d88;
  uint uStack_1d84;
  undefined4 uStack_1d80;
  ulonglong local_1d78;
  undefined1 *local_1d70;
  uint local_1d68;
  uint local_1d64;
  ulonglong local_1d60;
  ulonglong local_1d58;
  ulonglong local_1d50;
  longlong local_1d48;
  longlong local_1d40;
  ulonglong local_1d38;
  uint local_1d2c;
  void *local_1d28;
  int local_1d20;
  int local_1d1c;
  undefined8 uStack_1d18;
  undefined4 uStack_1d10;
  ulonglong local_1d00;
  longlong local_1cf8;
  undefined8 local_1cf0;
  uint auStack_1ce8 [32];
  uint auStack_1c68 [32];
  uint auStack_1be8 [32];
  undefined4 local_1b68 [127];
  ushort auStack_196a [1025];
  ushort local_1168 [2192];
  undefined8 uStack_48;
  char cVar18;
  char cVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined4 uVar92;
  undefined6 uVar93;
  
  uStack_48 = 0x1426a6f56;
  if (0 < *param_4) {
    return (undefined1 (*) [16])0x0;
  }
  if ((1 < param_2) || (2 < param_3)) {
    *param_4 = 1;
    return (undefined1 (*) [16])0x0;
  }
  if (param_3 == 2) {
    param_1[5] = param_1[5] & (ulonglong)DAT_149d58ec0;
    *(uint *)((longlong)param_1 + 0x34) = (uint)*(byte *)((longlong)param_1 + 0x34);
    if (0xf < (int)*(uint *)(param_1 + 6)) {
      uVar32 = *(uint *)(param_1 + 6) >> 4;
      if (uVar32 == 1) {
        uVar63 = 0;
      }
      else {
        uVar63 = 0;
        do {
          if (*(char *)((longlong)param_1 + uVar63 + 0x40) == '\0') {
            *(uint *)(*param_1 + uVar63 * 4) = (uint)*(byte *)(*param_1 + uVar63 * 4);
            cVar12 = *(char *)((longlong)param_1 + uVar63 + 0x41);
          }
          else {
            cVar12 = *(char *)((longlong)param_1 + uVar63 + 0x41);
          }
          if (cVar12 == '\0') {
                    /* WARNING: Read-only address (ram,0x000149931e70) is written */
                    /* WARNING: Read-only address (ram,0x000149d58eb0) is written */
                    /* WARNING: Read-only address (ram,0x000149d58ec0) is written */
            *(uint *)(*param_1 + 4 + uVar63 * 4) = (uint)*(byte *)(*param_1 + 4 + uVar63 * 4);
          }
          uVar63 = uVar63 + 2;
        } while ((uVar32 & 0xfffffffe) != uVar63);
      }
      if (((uVar32 & 1) != 0) && (*(char *)((longlong)param_1 + uVar63 + 0x40) == '\0')) {
        *(uint *)(*param_1 + uVar63 * 4) = (uint)*(byte *)(*param_1 + uVar63 * 4);
      }
    }
    if (0 < *(int *)((longlong)param_1 + 0x1c)) {
      lVar37 = 0;
      do {
        *(uint *)(param_1[2] + lVar37 * 4) = (uint)*(byte *)(param_1[2] + lVar37 * 4);
        lVar37 = lVar37 + 1;
      } while (lVar37 < *(int *)((longlong)param_1 + 0x1c));
    }
  }
  else if (param_3 == 0) {
    param_1[5] = param_1[5] & (ulonglong)DAT_149d58eb0;
    *(uint *)((longlong)param_1 + 0x34) = (uint)*(ushort *)((longlong)param_1 + 0x34);
    if (0xf < (int)*(uint *)(param_1 + 6)) {
      uVar32 = *(uint *)(param_1 + 6) >> 4;
      if (uVar32 == 1) {
        uVar63 = 0;
      }
      else {
        uVar63 = 0;
        do {
          if (*(char *)((longlong)param_1 + uVar63 + 0x40) == '\0') {
            *(uint *)(*param_1 + uVar63 * 4) = (uint)*(ushort *)(*param_1 + uVar63 * 4);
            cVar12 = *(char *)((longlong)param_1 + uVar63 + 0x41);
          }
          else {
            cVar12 = *(char *)((longlong)param_1 + uVar63 + 0x41);
          }
          if (cVar12 == '\0') {
                    /* WARNING: Read-only address (ram,0x000149931e70) is written */
                    /* WARNING: Read-only address (ram,0x000149d58eb0) is written */
                    /* WARNING: Read-only address (ram,0x000149d58ec0) is written */
            *(uint *)(*param_1 + 4 + uVar63 * 4) = (uint)*(ushort *)(*param_1 + 4 + uVar63 * 4);
          }
          uVar63 = uVar63 + 2;
        } while ((uVar32 & 0xfffffffe) != uVar63);
      }
      if (((uVar32 & 1) != 0) && (*(char *)((longlong)param_1 + uVar63 + 0x40) == '\0')) {
        *(uint *)(*param_1 + uVar63 * 4) = (uint)*(ushort *)(*param_1 + uVar63 * 4);
      }
    }
    if (0 < *(int *)((longlong)param_1 + 0x1c)) {
      lVar37 = 0;
      do {
        *(uint *)(param_1[2] + lVar37 * 4) = (uint)*(ushort *)(param_1[2] + lVar37 * 4);
        lVar37 = lVar37 + 1;
      } while (lVar37 < *(int *)((longlong)param_1 + 0x1c));
    }
  }
  local_1d68 = 0x1000;
  if (param_2 == 0) {
    local_1d68 = 0x10000;
  }
  uVar33 = local_1d68 >> 4;
  uVar32 = *(uint *)(param_1 + 6);
  if ((int)uVar32 < 0x110000) {
    local_1d00 = 0;
    if (0xf < (int)uVar32) {
      uVar59 = *(uint *)((longlong)param_1 + 0x34);
      lVar37 = *param_1;
      goto LAB_1426a710d;
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1103f) == '\0') {
      lVar37 = *param_1;
      puVar38 = (uint *)(lVar37 + 0x43ffc);
    }
    else {
      lVar37 = *param_1;
      puVar38 = (uint *)((ulonglong)(*(int *)(lVar37 + 0x43ffc) + 0xf) * 4 + param_1[2]);
    }
    uVar59 = *puVar38;
    *(uint *)((longlong)param_1 + 0x34) = uVar59;
LAB_1426a710d:
    lVar72 = param_1[2];
    uVar32 = uVar32 >> 4;
    do {
      uVar45 = *(uint *)(lVar37 + (ulonglong)(uVar32 - 1) * 4);
      uVar63 = (ulonglong)uVar45;
      if (*(char *)((longlong)param_1 + (ulonglong)(uVar32 - 1) + 0x40) != '\0') {
        if (((((*(uint *)(lVar72 + uVar63 * 4) == uVar59) &&
              (*(uint *)(lVar72 + 4 + uVar63 * 4) == uVar59)) &&
             (*(uint *)(lVar72 + 8 + uVar63 * 4) == uVar59)) &&
            ((*(uint *)(lVar72 + 0xc + uVar63 * 4) == uVar59 &&
             (*(uint *)(lVar72 + 0x10 + uVar63 * 4) == uVar59)))) &&
           (((((*(uint *)(lVar72 + 0x14 + uVar63 * 4) == uVar59 &&
               ((*(uint *)(lVar72 + 0x18 + uVar63 * 4) == uVar59 &&
                (*(uint *)(lVar72 + 0x1c + uVar63 * 4) == uVar59)))) &&
              (*(uint *)(lVar72 + 0x20 + uVar63 * 4) == uVar59)) &&
             (((*(uint *)(lVar72 + 0x24 + uVar63 * 4) == uVar59 &&
               (*(uint *)(lVar72 + 0x28 + uVar63 * 4) == uVar59)) &&
              (*(uint *)(lVar72 + 0x2c + uVar63 * 4) == uVar59)))) &&
            (((*(uint *)(lVar72 + 0x30 + uVar63 * 4) == uVar59 &&
              (*(uint *)(lVar72 + 0x34 + uVar63 * 4) == uVar59)) &&
             (*(uint *)(lVar72 + 0x38 + uVar63 * 4) == uVar59)))))) {
          uVar45 = *(uint *)(lVar72 + 0x3c + uVar63 * 4);
          goto joined_r0x0001426a71ad;
        }
LAB_1426a71c2:
        uVar32 = uVar32 * 0x10 + 0x1ff & 0x7ffffe00;
        local_1d00 = (ulonglong)uVar32;
        if (uVar32 == 0x110000) {
          *(int *)((longlong)param_1 + 0x34) = (int)param_1[5];
          local_1d00 = 0x110000;
          uVar32 = 0x110000;
          goto LAB_1426a72ef;
        }
        if (uVar32 < local_1d68) goto LAB_1426a729e;
        goto LAB_1426a72ef;
      }
joined_r0x0001426a71ad:
      if (uVar45 != uVar59) goto LAB_1426a71c2;
      bVar77 = 1 < (int)uVar32;
      uVar32 = uVar32 - 1;
    } while (bVar77);
    local_1d00 = 0;
  }
LAB_1426a729e:
  uVar63 = local_1d00 >> 4;
  uVar32 = local_1d68;
  if ((uint)uVar63 < uVar33) {
    do {
      *(undefined1 *)((longlong)param_1 + uVar63 + 0x40) = 0;
      *(undefined4 *)(*param_1 + uVar63 * 4) = *(undefined4 *)((longlong)param_1 + 0x34);
      *(undefined1 *)((longlong)param_1 + uVar63 + 0x41) = 0;
      *(undefined4 *)(*param_1 + 4 + uVar63 * 4) = *(undefined4 *)((longlong)param_1 + 0x34);
      uVar63 = uVar63 + 2;
    } while (uVar33 != uVar63);
  }
LAB_1426a72ef:
  *(uint *)(param_1 + 6) = uVar32;
  lVar37 = *param_1;
  lVar72 = param_1[2];
  uVar63 = 0;
  do {
    puVar68 = (undefined4 *)((longlong)param_1 + 0x34);
    if (uVar63 < uVar32) {
      uVar69 = uVar63 >> 4 & 0xfffffff;
      if (*(char *)((longlong)param_1 + uVar69 + 0x40) == '\0') {
        puVar68 = (undefined4 *)(lVar37 + uVar69 * 4);
      }
      else {
        puVar68 = (undefined4 *)
                  (lVar72 + (ulonglong)(((uint)uVar63 & 0xf) + *(int *)(lVar37 + uVar69 * 4)) * 4);
      }
    }
    local_1b68[uVar63] = *puVar68;
    uVar63 = uVar63 + 1;
  } while (uVar63 != 0x80);
  local_1cf0 = 0xffffffff00000000;
  local_1d64 = param_2;
  local_1d2c = param_3;
  if (uVar32 == 0) {
    iVar74 = 0x94;
LAB_1426a77ea:
    pvVar39 = (void *)FUN_1424da030((longlong)(iVar74 * 4));
    if (pvVar39 != (void *)0x0) {
      memcpy(pvVar39,local_1b68,0x200);
      if ((local_1cf0 & 0xffffffff) == 0) {
        uVar32 = 0xffffffff;
      }
      else {
        if ((int)(uint)local_1cf0 < 1) {
          lVar37 = -1;
        }
        else {
          uVar63 = (ulonglong)((uint)local_1cf0 & 3);
          if ((uint)local_1cf0 < 4) {
            uVar69 = 0xffffffff;
            uVar64 = 0;
            uVar32 = 0;
          }
          else {
            uVar69 = 0xffffffff;
            uVar64 = 0;
            uVar32 = 0;
            do {
              uVar59 = auStack_1be8[uVar64];
              if ((int)uVar32 < (int)uVar59) {
                uVar69 = uVar64 & 0xffffffff;
              }
              if ((int)uVar32 < (int)uVar59) {
                uVar32 = uVar59;
              }
              iVar36 = (int)uVar64;
              if ((int)uVar32 < (int)auStack_1be8[uVar64 + 1]) {
                uVar69 = (ulonglong)(iVar36 + 1);
                uVar32 = auStack_1be8[uVar64 + 1];
              }
              if ((int)uVar32 < (int)auStack_1be8[uVar64 + 2]) {
                uVar69 = (ulonglong)(iVar36 + 2);
                uVar32 = auStack_1be8[uVar64 + 2];
              }
              if ((int)uVar32 < (int)auStack_1be8[uVar64 + 3]) {
                uVar69 = (ulonglong)(iVar36 + 3);
                uVar32 = auStack_1be8[uVar64 + 3];
              }
              uVar64 = uVar64 + 4;
            } while (uVar64 != ((uint)local_1cf0 & 0xfffffffc));
          }
          iVar36 = (int)uVar69;
          for (; uVar63 != 0; uVar63 = uVar63 - 1) {
            iVar36 = (int)uVar69;
            if ((int)uVar32 < (int)auStack_1be8[uVar64]) {
              uVar69 = uVar64 & 0xffffffff;
              iVar36 = (int)uVar64;
              uVar32 = auStack_1be8[uVar64];
            }
            uVar64 = uVar64 + 1;
          }
          lVar37 = (longlong)iVar36;
        }
        uVar32 = auStack_1ce8[lVar37];
      }
      *(undefined4 *)*param_1 = 0;
      *(undefined4 *)(*param_1 + 0x10) = 0x40;
      if (iVar74 < 0x103f) {
        iStack_1d88 = 0xc;
        uStack_1d84 = 0xfff;
        uVar63 = 0x1777;
        iVar36 = 0xc;
        uVar59 = 0xfff;
      }
      else if (iVar74 - 0x40U < 0x7fff) {
        iStack_1d88 = 0xf;
        uStack_1d84 = 0x7fff;
        uVar63 = 0xc365;
        iVar36 = 0xf;
        uVar59 = 0x7fff;
      }
      else if (iVar74 - 0x40U < 0x1ffff) {
        iStack_1d88 = 0x11;
        uStack_1d84 = 0x1ffff;
        uVar63 = 0x30d43;
        iVar36 = 0x11;
        uVar59 = 0x1ffff;
      }
      else {
        iStack_1d88 = 0x15;
        uStack_1d84 = 0x1fffff;
        uVar63 = 0x16e367;
        iVar36 = 0x15;
        uVar59 = 0x1fffff;
      }
      FUN_1424da110(0);
      iVar48 = (int)uVar63;
      puVar40 = (undefined1 *)FUN_1424da030((ulonglong)(uint)(iVar48 * 4));
      local_1d98 = puVar40;
      if (puVar40 == (undefined1 *)0x0) {
LAB_1426a83f8:
        *param_4 = 7;
        puVar40 = (undefined1 *)0x0;
LAB_1426a842b:
        uVar63 = 0;
      }
      else {
        local_1d90 = iVar48;
        local_1d8c = iVar48;
        memset(puVar40,0,(ulonglong)(uint)(iVar48 * 4));
        uStack_1d80 = 0x40;
        FUN_1426aa150(&local_1d98,pvVar39,0,0x80);
        lVar37 = param_1[6];
        if ((int)lVar37 < 0x90) {
          local_1df0 = 0x80;
        }
        else {
          uVar45 = 0x7fff;
          if (iVar74 < 0x100f) {
            uVar45 = 0xfff;
          }
          uVar60 = 0xc365;
          if (iVar74 < 0x100f) {
            uVar60 = 0x1777;
          }
          bVar77 = 0x1fffe < iVar74 - 0x10U;
          uVar50 = 0x1fffff;
          if (!bVar77) {
            uVar50 = 0x1ffff;
          }
          uVar47 = 0x16e367;
          if (!bVar77) {
            uVar47 = 0x30d43;
          }
          iVar71 = (uint)bVar77 * 4 + 0x11;
          if (iVar74 < 0x800f) {
            uVar47 = uVar60;
            uVar50 = uVar45;
            iVar71 = (uint)(0x100e < iVar74) * 3 + 0xc;
          }
          local_1d78 = (ulonglong)uVar47;
          local_1d38 = (longlong)pvVar39 + 4;
          local_1d58 = (longlong)pvVar39 + 0x10;
          local_1cf8 = (longlong)pvVar39 + 0xc;
          iVar62 = 4;
          uVar60 = 8;
          local_1df0 = 0x80;
          uVar45 = 0x40;
          local_1d60 = CONCAT44(local_1d60._4_4_,iVar48);
          local_1da0 = 0;
          do {
            uVar69 = local_1d78;
            uVar46 = (uint)local_1df0;
            if (uVar60 == uVar33) {
              iVar36 = (int)local_1d78;
              iStack_1d88 = iVar71;
              uStack_1d84 = uVar50;
              if ((int)local_1d60 < iVar36) {
                FUN_1424da110(puVar40);
                puVar40 = (undefined1 *)FUN_1424da030((ulonglong)(uVar47 * 4));
                local_1d98 = puVar40;
                if (puVar40 == (undefined1 *)0x0) goto LAB_1426a83f8;
                local_1d60 = CONCAT44(local_1d60._4_4_,iVar36);
                local_1d90 = iVar36;
              }
              local_1d8c = iVar36;
              memset(puVar40,0,(ulonglong)(uVar47 * 4));
              uStack_1d80 = 0x10;
              FUN_1426aa150(&local_1d98,pvVar39,0,local_1df0 & 0xffffffff);
              iVar62 = 1;
              uVar45 = 0x10;
              local_1da0 = local_1df0 & 0xffffffff;
              uVar63 = uVar69;
              uVar59 = uVar50;
              iVar36 = iVar71;
            }
            lVar72 = (longlong)(int)uVar60;
            cVar12 = *(char *)((longlong)param_1 + lVar72 + 0x40);
            if (cVar12 == '\x01') {
              local_1d40 = *param_1;
              local_1d48 = param_1[2];
              local_1d50 = (ulonglong)*(uint *)(local_1d40 + lVar72 * 4);
              uVar35 = *(uint *)(local_1d48 + local_1d50 * 4);
              uVar69 = 2;
              if (2 < uVar45) {
                uVar69 = (ulonglong)uVar45;
              }
              uVar64 = uVar69 - 1;
              lVar67 = 1;
              if (2 < uVar69 - 2) {
                lVar67 = local_1d48 + local_1d50 * 4;
                uVar69 = 0;
                do {
                  uVar73 = uVar69;
                  uVar35 = (((uVar35 * 0x25 + *(int *)(lVar67 + 4 + uVar73 * 4)) * 0x25 +
                            *(int *)(lVar67 + 8 + uVar73 * 4)) * 0x25 +
                           *(int *)(lVar67 + 0xc + uVar73 * 4)) * 0x25 +
                           *(int *)(lVar67 + 0x10 + uVar73 * 4);
                  uVar69 = uVar73 + 4;
                } while ((uVar64 & 0xfffffffffffffffc) != uVar73 + 4);
                lVar67 = uVar73 + 5;
              }
              if ((uVar64 & 3) != 0) {
                uVar69 = 0;
                do {
                  uVar35 = uVar35 * 0x25 +
                           *(int *)(local_1d50 * 4 + lVar67 * 4 + local_1d48 + uVar69 * 4);
                  uVar69 = uVar69 + 1;
                } while (((uint)uVar64 & 3) != uVar69);
              }
              lVar67 = local_1d48 + local_1d50 * 4;
              uVar69 = (ulonglong)uVar35 % (ulonglong)((int)uVar63 - 1);
              uVar49 = (int)uVar69 + 1;
              uVar34 = *(uint *)(puVar40 + uVar69 * 4 + 4);
              uVar43 = uVar49;
              if (uVar34 != 0) {
                uVar44 = uVar49;
                do {
                  if ((uVar34 & ~uVar59) == uVar35 << (sbyte)iVar36) {
                    lVar58 = 0;
                    iVar48 = uVar45 + 1;
                    while (*(int *)((longlong)pvVar39 +
                                   lVar58 + (longlong)(int)(uVar34 & uVar59) * 4 + -4) ==
                           *(int *)(lVar67 + lVar58)) {
                      lVar58 = lVar58 + 4;
                      iVar48 = iVar48 + -1;
                      if (iVar48 < 2) {
                        if (-1 < (int)uVar44) goto LAB_1426a7fac;
                        goto LAB_1426a7fd9;
                      }
                    }
                  }
                  uVar44 = (uint)((ulonglong)(uVar44 + uVar49) % (uVar63 & 0xffffffff));
                  uVar34 = *(uint *)(puVar40 + (longlong)(int)uVar44 * 4);
                  uVar43 = uVar44;
                } while (uVar34 != 0);
              }
              uVar44 = ~uVar43;
              if ((int)uVar43 < 0) {
LAB_1426a7fac:
                if ((*(uint *)(puVar40 + (ulonglong)uVar44 * 4) & uVar59) != 0) {
                  *(uint *)(local_1d40 + lVar72 * 4) =
                       (*(uint *)(puVar40 + (ulonglong)uVar44 * 4) & uVar59) - 1;
                  goto LAB_1426a7bbf;
                }
              }
LAB_1426a7fd9:
              uVar64 = (ulonglong)uVar45;
              lVar70 = (longlong)(int)uVar46;
              lVar58 = lVar70 * 4;
              lVar57 = lVar58 + uVar64 * -4 + local_1d38;
              uVar69 = uVar64;
              do {
                uVar76 = uVar69 - 1;
                uVar73 = uVar69 & 0xffffffff;
                lVar65 = 0;
                while (*(int *)(lVar57 + lVar65) == *(int *)(lVar67 + lVar65)) {
                  lVar65 = lVar65 + 4;
                  uVar35 = (int)uVar73 - 1;
                  uVar73 = (ulonglong)uVar35;
                  if ((int)uVar35 < 2) goto LAB_1426a8044;
                }
                lVar57 = lVar57 + 4;
                bVar77 = 2 < (longlong)uVar69;
                uVar69 = uVar76;
              } while (bVar77);
              uVar76 = 0;
LAB_1426a8044:
              iVar48 = (int)uVar76;
              *(uint *)(local_1d40 + lVar72 * 4) = uVar46 - iVar48;
              if (iVar48 < (int)uVar45) {
                uVar69 = (ulonglong)iVar48;
                uVar73 = uVar64 - uVar69;
                if ((uVar73 < 0x10) ||
                   ((longlong)pvVar39 + (lVar70 * 4 - (local_1d48 + (local_1d50 + uVar69) * 4)) <
                    0x20)) {
LAB_1426a80b5:
                  uVar46 = uVar45 - (int)uVar69 & 3;
                  uVar56 = (ulonglong)uVar46;
                  uVar73 = uVar69;
                  uVar76 = uVar69;
                  if (uVar46 != 0) {
                    do {
                      uVar73 = uVar76 + 1;
                      *(undefined4 *)((longlong)pvVar39 + lVar70 * 4) =
                           *(undefined4 *)(lVar67 + uVar76 * 4);
                      lVar70 = lVar70 + 1;
                      uVar56 = uVar56 - 1;
                      uVar76 = uVar73;
                    } while (uVar56 != 0);
                  }
                  if (2 < ~uVar69 + uVar64) {
                    lVar67 = local_1d50 * 4 + uVar73 * 4 + local_1d48;
                    lVar72 = local_1cf8 + lVar70 * 4;
                    lVar58 = 0;
                    do {
                      *(undefined4 *)(lVar72 + -0xc + lVar58 * 4) =
                           *(undefined4 *)(lVar67 + lVar58 * 4);
                      *(undefined4 *)(lVar72 + -8 + lVar58 * 4) =
                           *(undefined4 *)(lVar67 + 4 + lVar58 * 4);
                      *(undefined4 *)(lVar72 + -4 + lVar58 * 4) =
                           *(undefined4 *)(lVar67 + 8 + lVar58 * 4);
                      *(undefined4 *)(lVar72 + lVar58 * 4) =
                           *(undefined4 *)(lVar67 + 0xc + lVar58 * 4);
                      lVar58 = lVar58 + 4;
                    } while (uVar64 - uVar73 != lVar58);
                    lVar70 = lVar70 + lVar58;
                  }
                }
                else {
                  uVar56 = uVar73 & 0xfffffffffffffff8;
                  lVar70 = lVar70 + uVar56;
                  lVar72 = local_1d48 + local_1d50 * 4 + uVar69 * 4;
                  lVar58 = lVar58 + local_1d58;
                  uVar76 = 0;
                  do {
                    puVar10 = (undefined8 *)(lVar72 + uVar76 * 4);
                    uVar28 = puVar10[1];
                    puVar1 = (undefined8 *)(lVar72 + 0x10 + uVar76 * 4);
                    uVar29 = *puVar1;
                    uVar30 = puVar1[1];
                    puVar1 = (undefined8 *)(lVar58 + -0x10 + uVar76 * 4);
                    *puVar1 = *puVar10;
                    puVar1[1] = uVar28;
                    puVar1 = (undefined8 *)(lVar58 + uVar76 * 4);
                    *puVar1 = uVar29;
                    puVar1[1] = uVar30;
                    uVar76 = uVar76 + 8;
                  } while (uVar56 != uVar76);
                  uVar69 = uVar56 + uVar69;
                  if (uVar73 != uVar56) goto LAB_1426a80b5;
                }
                uVar46 = (uint)lVar70;
              }
              local_1d70 = puVar40;
              FUN_1426aa150(&local_1d98,pvVar39,local_1df0,uVar46);
              local_1df0 = (ulonglong)uVar46;
              puVar40 = local_1d70;
            }
            else if (cVar12 == '\0') {
              lVar67 = *param_1;
              uVar35 = *(uint *)(lVar67 + lVar72 * 4);
              uVar34 = uVar35;
              if (6 < uVar45 - 2) {
                iVar48 = uVar45 - 8;
                do {
                  uVar34 = uVar34 * -0x2fe8ed1f + uVar35 * -0x48712308;
                  iVar48 = iVar48 + -8;
                } while (iVar48 != 0);
              }
              for (uVar43 = uVar45 - 1 & 7; uVar43 != 0; uVar43 = uVar43 - 1) {
                uVar34 = uVar34 * 0x25 + uVar35;
              }
              uVar69 = (ulonglong)uVar34 % (ulonglong)((int)uVar63 - 1);
              uVar44 = (int)uVar69 + 1;
              uVar43 = *(uint *)(puVar40 + uVar69 * 4 + 4);
              uVar49 = uVar44;
              if (uVar43 != 0) {
                do {
                  if ((uVar43 & ~uVar59) == uVar34 << (sbyte)iVar36) {
                    puVar61 = (uint *)((longlong)(int)(uVar43 & uVar59) * 4 + -4 + (longlong)pvVar39
                                      );
                    puVar38 = puVar61 + uVar45;
                    do {
                      if (*puVar61 != uVar35) break;
                      puVar61 = puVar61 + 1;
                    } while (puVar61 < puVar38);
                    if (puVar61 == puVar38) goto LAB_1426a7f7f;
                  }
                  uVar49 = (uint)((ulonglong)(uVar49 + uVar44) % (uVar63 & 0xffffffff));
                  uVar43 = *(uint *)(puVar40 + (longlong)(int)uVar49 * 4);
                } while (uVar43 != 0);
              }
              uVar49 = ~uVar49;
LAB_1426a7f7f:
              if ((int)uVar49 < 0) {
                iVar48 = -1;
              }
              else {
                iVar48 = (*(uint *)(puVar40 + (ulonglong)uVar49 * 4) & uVar59) - 1;
              }
              bVar77 = SUB41((uint)iVar48 >> 0x1f,0);
              if ((((uVar60 == uVar32) && ((int)uVar33 <= (int)uVar60)) && (-1 < iVar48)) &&
                 (iVar48 < (int)local_1da0)) {
LAB_1426a81b0:
                uVar69 = 0;
                while (*(int *)(lVar67 + uVar69 * 4) != iVar48) {
                  uVar69 = uVar69 + 4;
                  if (uVar33 <= uVar69) goto LAB_1426a8297;
                }
                while (iVar31 = iVar48, iVar31 < (int)(uVar46 - uVar45)) {
                  iVar48 = iVar31 + 1;
                  if (*(uint *)((longlong)pvVar39 + (longlong)iVar31 * 4 + 4) == uVar35) {
                    uVar69 = 2;
                    while (*(uint *)((longlong)pvVar39 + uVar69 * 4 + (longlong)iVar31 * 4) ==
                           uVar35) {
                      bVar77 = uVar69 == uVar45;
                      uVar69 = uVar69 + 1;
                      if (bVar77) {
                        bVar77 = iVar31 < -1;
                        if ((iVar31 < -1) || ((int)local_1da0 <= iVar48)) goto LAB_1426a8242;
                        goto LAB_1426a81b0;
                      }
                    }
                    iVar48 = iVar31 + (int)uVar69;
                  }
                }
              }
              else {
LAB_1426a8242:
                if (bVar77 == false) {
LAB_1426a8297:
                  *(int *)(lVar67 + lVar72 * 4) = iVar48;
                  goto LAB_1426a7bbf;
                }
              }
              uVar49 = uVar46 + 1;
              uVar43 = uVar49 - uVar45;
              uVar64 = (ulonglong)(int)uVar46;
              uVar69 = uVar64;
              uVar34 = uVar43;
              if ((int)uVar46 < (int)uVar43) {
                uVar34 = uVar46;
              }
              do {
                uVar44 = uVar34;
                if ((longlong)uVar69 <= (longlong)(int)uVar43) break;
                uVar49 = uVar49 - 1;
                lVar58 = uVar69 * 4;
                uVar69 = uVar69 - 1;
                uVar44 = uVar49;
              } while (*(uint *)((longlong)pvVar39 + lVar58 + -4) == uVar35);
              iVar48 = uVar46 - uVar44;
              *(uint *)(lVar67 + lVar72 * 4) = uVar44;
              uVar69 = local_1df0 & 0xffffffff;
              if (iVar48 < (int)uVar45) {
                uVar46 = ~uVar46 + uVar44 + uVar45;
                uVar69 = uVar64;
                if (6 < uVar46) {
                  uVar76 = (ulonglong)uVar46 + 1;
                  uVar73 = uVar76 & 0xfffffffffffffff8;
                  uVar69 = uVar73 + uVar64;
                  iVar48 = iVar48 + (int)uVar73;
                  lVar72 = local_1d58 + uVar64 * 4;
                  uVar64 = 0;
                  do {
                    puVar38 = (uint *)(lVar72 + -0x10 + uVar64 * 4);
                    *puVar38 = uVar35;
                    puVar38[1] = uVar35;
                    puVar38[2] = uVar35;
                    puVar38[3] = uVar35;
                    puVar38 = (uint *)(lVar72 + uVar64 * 4);
                    *puVar38 = uVar35;
                    puVar38[1] = uVar35;
                    puVar38[2] = uVar35;
                    puVar38[3] = uVar35;
                    uVar64 = uVar64 + 8;
                  } while (uVar73 != uVar64);
                  if (uVar76 == uVar73) goto LAB_1426a8341;
                }
                iVar48 = uVar45 - iVar48;
                do {
                  *(uint *)((longlong)pvVar39 + uVar69 * 4) = uVar35;
                  uVar69 = uVar69 + 1;
                  iVar48 = iVar48 + -1;
                } while (iVar48 != 0);
              }
LAB_1426a8341:
              local_1d70 = puVar40;
              FUN_1426aa150(&local_1d98,pvVar39,local_1df0,uVar69 & 0xffffffff);
              puVar40 = local_1d70;
              local_1df0 = uVar69;
            }
            else {
              lVar67 = *param_1;
              *(undefined4 *)(lVar67 + lVar72 * 4) =
                   *(undefined4 *)(lVar67 + (ulonglong)*(uint *)(lVar67 + lVar72 * 4) * 4);
            }
LAB_1426a7bbf:
            uVar60 = uVar60 + iVar62;
          } while ((int)uVar60 < (int)lVar37 >> 4);
        }
        if (0 < *param_4) goto LAB_1426a842b;
        FUN_1424da110(param_1[2]);
        param_1[2] = (longlong)pvVar39;
        *(int *)(param_1 + 3) = iVar74;
        *(int *)((longlong)param_1 + 0x1c) = (int)local_1df0;
        if ((int)local_1df0 < 0x40010) {
          if ((int)uVar32 < 0) {
            *(undefined4 *)(param_1 + 4) = 0xfffff;
          }
          else {
            iVar74 = *(int *)(*param_1 + (ulonglong)uVar32 * 4);
            *(int *)(param_1 + 4) = iVar74;
            *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)pvVar39 + (longlong)iVar74 * 4)
            ;
          }
          uVar63 = (ulonglong)(local_1d68 >> 6);
          if ((int)(local_1d68 >> 6) < (int)param_1[6] >> 6) {
            iVar36 = 0;
            lVar37 = 0;
            iVar74 = -1;
            do {
              lVar72 = *param_1;
              iVar48 = *(int *)(lVar72 + lVar37 * 8);
              *(short *)((longlong)auStack_196a + lVar37 + 2U) = (short)iVar48;
              iVar71 = -1;
              if (((iVar48 == (int)param_1[4]) && (iVar71 = iVar36, -1 < iVar74)) &&
                 ((iVar71 = iVar74, *(int *)((longlong)param_1 + 0xc) < 0 &&
                  (iVar74 + 0x1f == iVar36)))) {
                *(int *)((longlong)param_1 + 0xc) = iVar74;
              }
              *(int *)(lVar72 + 4 + lVar37 * 8) = iVar48 + 0x10;
              *(int *)(*param_1 + 8 + lVar37 * 8) = iVar48 + 0x20;
              *(int *)(*param_1 + 0xc + lVar37 * 8) = iVar48 + 0x30;
              lVar37 = lVar37 + 2;
              iVar36 = iVar36 + 1;
              iVar74 = iVar71;
            } while ((ulonglong)(uVar33 - 1 >> 2) * 2 + 2 != lVar37);
            bVar78 = local_1d64 == 0;
            bVar77 = false;
            local_1d60 = uVar63;
            memset(puVar40,0,0x5ddc);
            local_1d8c = 0x1777;
            iStack_1d88 = 0xc;
            uStack_1d84 = 0xfff;
            uStack_1d80 = 0x20;
            FUN_1426aa290(&local_1d98,auStack_196a + 1,0,0,(int)local_1d60);
            uVar69 = local_1d60;
            auVar79 = _DAT_149931e70;
            uVar32 = (uint)bVar78 * 0x1000;
            iVar36 = (int)param_1[6] >> 4;
            iVar74 = 0;
            iVar48 = iVar36 + (uint)bVar78 * -0x1000;
            if (iVar48 != 0 && (int)uVar32 <= iVar36) {
              iVar71 = *(int *)((longlong)param_1 + 0xc);
              uVar63 = (ulonglong)uVar32;
              lVar37 = uVar63 * 4;
              iVar74 = 0;
              bVar77 = false;
              do {
                lVar72 = *param_1;
                uVar33 = *(uint *)(param_1 + 4);
                uVar64 = uVar63 * 4;
                puVar38 = (uint *)(lVar72 + uVar63 * 4);
                puVar61 = (uint *)(lVar72 + (uVar64 | 0x10));
                auVar81._0_4_ = -(uint)(*puVar38 == uVar33);
                auVar81._4_4_ = -(uint)(puVar38[1] == uVar33);
                auVar81._8_4_ = -(uint)(puVar38[2] == uVar33);
                auVar81._12_4_ = -(uint)(puVar38[3] == uVar33);
                auVar86._0_4_ = -(uint)(*puVar61 == uVar33);
                auVar86._4_4_ = -(uint)(puVar61[1] == uVar33);
                auVar86._8_4_ = -(uint)(puVar61[2] == uVar33);
                auVar86._12_4_ = -(uint)(puVar61[3] == uVar33);
                puVar2 = (uint *)(lVar72 + (uVar64 | 0x20));
                puVar3 = (uint *)(lVar72 + (uVar64 | 0x30));
                auVar89._0_4_ = -(uint)(*puVar2 == uVar33);
                auVar89._4_4_ = -(uint)(puVar2[1] == uVar33);
                auVar89._8_4_ = -(uint)(puVar2[2] == uVar33);
                auVar89._12_4_ = -(uint)(puVar2[3] == uVar33);
                auVar85._0_4_ = -(uint)(*puVar3 == uVar33);
                auVar85._4_4_ = -(uint)(puVar3[1] == uVar33);
                auVar85._8_4_ = -(uint)(puVar3[2] == uVar33);
                auVar85._12_4_ = -(uint)(puVar3[3] == uVar33);
                puVar4 = (uint *)(lVar72 + (uVar64 | 0x40));
                puVar5 = (uint *)(lVar72 + (uVar64 | 0x50));
                auVar87._0_4_ = -(uint)(*puVar4 == uVar33);
                auVar87._4_4_ = -(uint)(puVar4[1] == uVar33);
                auVar87._8_4_ = -(uint)(puVar4[2] == uVar33);
                auVar87._12_4_ = -(uint)(puVar4[3] == uVar33);
                auVar90._0_4_ = -(uint)(*puVar5 == uVar33);
                auVar90._4_4_ = -(uint)(puVar5[1] == uVar33);
                auVar90._8_4_ = -(uint)(puVar5[2] == uVar33);
                auVar90._12_4_ = -(uint)(puVar5[3] == uVar33);
                puVar6 = (uint *)(lVar72 + (uVar64 | 0x60));
                auVar88._0_4_ = -(uint)(*puVar6 == uVar33);
                auVar88._4_4_ = -(uint)(puVar6[1] == uVar33);
                auVar88._8_4_ = -(uint)(puVar6[2] == uVar33);
                auVar88._12_4_ = -(uint)(puVar6[3] == uVar33);
                puVar7 = (uint *)(lVar72 + (uVar64 | 0x70));
                auVar94._0_4_ = -(uint)(*puVar7 == uVar33);
                auVar94._4_4_ = -(uint)(puVar7[1] == uVar33);
                auVar94._8_4_ = -(uint)(puVar7[2] == uVar33);
                auVar94._12_4_ = -(uint)(puVar7[3] == uVar33);
                auVar81 = auVar94 & auVar88 & auVar90 & auVar87 & auVar85 & auVar89 & auVar86 &
                          auVar81 & auVar79;
                sVar14 = auVar81._0_2_;
                cVar12 = (0 < sVar14) * (sVar14 < 0x100) * auVar81[0] - (0xff < sVar14);
                sVar14 = auVar81._2_2_;
                sVar91 = CONCAT11((0 < sVar14) * (sVar14 < 0x100) * auVar81[2] - (0xff < sVar14),
                                  cVar12);
                sVar14 = auVar81._4_2_;
                cVar17 = (0 < sVar14) * (sVar14 < 0x100) * auVar81[4] - (0xff < sVar14);
                sVar14 = auVar81._6_2_;
                uVar92 = CONCAT13((0 < sVar14) * (sVar14 < 0x100) * auVar81[6] - (0xff < sVar14),
                                  CONCAT12(cVar17,sVar91));
                sVar14 = auVar81._8_2_;
                cVar18 = (0 < sVar14) * (sVar14 < 0x100) * auVar81[8] - (0xff < sVar14);
                sVar14 = auVar81._10_2_;
                uVar93 = CONCAT15((0 < sVar14) * (sVar14 < 0x100) * auVar81[10] - (0xff < sVar14),
                                  CONCAT14(cVar18,uVar92));
                sVar14 = auVar81._12_2_;
                cVar19 = (0 < sVar14) * (sVar14 < 0x100) * auVar81[0xc] - (0xff < sVar14);
                sVar16 = auVar81._14_2_;
                sVar14 = (short)((uint)uVar92 >> 0x10);
                sVar15 = (short)((uint6)uVar93 >> 0x20);
                sVar16 = (short)(CONCAT17((0 < sVar16) * (sVar16 < 0x100) * auVar81[0xe] -
                                          (0xff < sVar16),CONCAT16(cVar19,uVar93)) >> 0x30);
                uVar33 = puVar5[3] | puVar4[3] | puVar6[3] |
                         puVar3[3] | puVar2[3] | puVar61[3] | puVar38[3] | puVar7[3] |
                         puVar5[1] | puVar4[1] | puVar6[1] |
                         puVar3[1] | puVar2[1] | puVar61[1] | puVar38[1] | puVar7[1] |
                         puVar5[2] | puVar4[2] | puVar6[2] |
                         puVar3[2] | puVar2[2] | puVar61[2] | puVar38[2] | puVar7[2] |
                         *puVar5 | *puVar4 | *puVar6 | *puVar3 | *puVar2 | *puVar61 | *puVar38 |
                         *puVar7;
                if (CONCAT13((0 < sVar16) * (sVar16 < 0x100) * cVar19 - (0xff < sVar16),
                             CONCAT12((0 < sVar15) * (sVar15 < 0x100) * cVar18 - (0xff < sVar15),
                                      CONCAT11((0 < sVar14) * (sVar14 < 0x100) * cVar17 -
                                               (0xff < sVar14),
                                               (0 < sVar91) * (sVar91 < 0x100) * cVar12 -
                                               (0xff < sVar91)))) == 0x1010101) {
                  *(undefined1 *)((longlong)param_1 + uVar63 + 0x40) = 0;
                  if (iVar71 < 0) {
                    if (0xffff < uVar33) {
                      bVar77 = true;
                    }
                    iVar74 = iVar74 + (uint)(0xffff < uVar33) * 4 + 0x20;
                    iVar71 = 0;
                  }
                }
                else if (uVar33 < 0x10000) {
                  uVar59 = ((((((((((((((((((((((((((((((*(int *)(lVar72 + uVar63 * 4) * 0x25 +
                                                        *(int *)(lVar72 + (uVar64 | 4))) * 0x25 +
                                                       *(int *)(lVar72 + (uVar64 | 8))) * 0x25 +
                                                      *(int *)(lVar72 + (uVar64 | 0xc))) * 0x25 +
                                                     *(int *)(lVar72 + (uVar64 | 0x10))) * 0x25 +
                                                    *(int *)(lVar72 + (uVar64 | 0x14))) * 0x25 +
                                                   *(int *)(lVar72 + (uVar64 | 0x18))) * 0x25 +
                                                  *(int *)(lVar72 + (uVar64 | 0x1c))) * 0x25 +
                                                 *(int *)(lVar72 + (uVar64 | 0x20))) * 0x25 +
                                                *(int *)(lVar72 + (uVar64 | 0x24))) * 0x25 +
                                               *(int *)(lVar72 + (uVar64 | 0x28))) * 0x25 +
                                              *(int *)(lVar72 + (uVar64 | 0x2c))) * 0x25 +
                                             *(int *)(lVar72 + (uVar64 | 0x30))) * 0x25 +
                                            *(int *)(lVar72 + (uVar64 | 0x34))) * 0x25 +
                                           *(int *)(lVar72 + (uVar64 | 0x38))) * 0x25 +
                                          *(int *)(lVar72 + (uVar64 | 0x3c))) * 0x25 +
                                         *(int *)(lVar72 + (uVar64 | 0x40))) * 0x25 +
                                        *(int *)(lVar72 + (uVar64 | 0x44))) * 0x25 +
                                       *(int *)(lVar72 + (uVar64 | 0x48))) * 0x25 +
                                      *(int *)(lVar72 + (uVar64 | 0x4c))) * 0x25 +
                                     *(int *)(lVar72 + (uVar64 | 0x50))) * 0x25 +
                                    *(int *)(lVar72 + (uVar64 | 0x54))) * 0x25 +
                                   *(int *)(lVar72 + (uVar64 | 0x58))) * 0x25 +
                                  *(int *)(lVar72 + (uVar64 | 0x5c))) * 0x25 +
                                 *(int *)(lVar72 + (uVar64 | 0x60))) * 0x25 +
                                *(int *)(lVar72 + (uVar64 | 100))) * 0x25 +
                               *(int *)(lVar72 + (uVar64 | 0x68))) * 0x25 +
                              *(int *)(lVar72 + (uVar64 | 0x6c))) * 0x25 +
                             *(int *)(lVar72 + (uVar64 | 0x70))) * 0x25 +
                            *(int *)(lVar72 + (uVar64 | 0x74))) * 0x25 +
                           *(int *)(lVar72 + (uVar64 | 0x78))) * 0x25 +
                           *(int *)(lVar72 + (uVar64 | 0x7c));
                  uVar45 = uVar59 % 0x1776;
                  uVar33 = *(uint *)(puVar40 + (ulonglong)uVar45 * 4 + 4);
                  if (uVar33 != 0) {
                    uVar45 = uVar45 + 1;
                    lVar67 = lVar72 + lVar37;
                    uVar64 = (ulonglong)uVar45;
                    do {
                      if ((uVar33 & 0xfffff000) == uVar59 * 0x1000) {
                        uVar73 = (ulonglong)(uVar33 & 0xfff);
                        lVar58 = 0;
                        while ((((*(uint *)(lVar67 + lVar58 * 4) ==
                                  (uint)auStack_196a[uVar73 + lVar58] &&
                                 (*(uint *)(lVar67 + 4 + lVar58 * 4) ==
                                  (uint)auStack_196a[uVar73 + lVar58 + 1U])) &&
                                (*(uint *)(lVar67 + 8 + lVar58 * 4) ==
                                 (uint)auStack_196a[uVar73 + lVar58 + 2U])) &&
                               (*(uint *)(lVar67 + 0xc + lVar58 * 4) ==
                                (uint)auStack_196a[uVar73 + lVar58 + 3U]))) {
                          lVar58 = lVar58 + 4;
                          if ((int)lVar58 == 0x20) {
                            uVar33 = *(uint *)(puVar40 + uVar64 * 4);
                            puVar66 = (undefined1 *)((longlong)param_1 + uVar63 + 0x40);
                            if ((uVar33 & 0xfff) == 0) goto LAB_1426a8c72;
                            *puVar66 = 1;
                            *(uint *)(lVar72 + uVar63 * 4) = (uVar33 & 0xfff) - 1;
                            goto LAB_1426a87f8;
                          }
                        }
                      }
                      uVar64 = (ulonglong)(((int)uVar64 + uVar45) % 0x1777);
                      uVar33 = *(uint *)(puVar40 + uVar64 * 4);
                    } while (uVar33 != 0);
                  }
                  puVar66 = (undefined1 *)((longlong)param_1 + uVar63 + 0x40);
LAB_1426a8c72:
                  *puVar66 = 2;
                  iVar74 = iVar74 + 0x20;
                }
                else {
                  *(undefined1 *)((longlong)param_1 + uVar63 + 0x40) = 3;
                  iVar74 = iVar74 + 0x24;
                  bVar77 = true;
                }
LAB_1426a87f8:
                uVar63 = uVar63 + 0x20;
                lVar37 = lVar37 + 0x80;
              } while ((longlong)uVar63 < (longlong)iVar36);
            }
            iVar48 = iVar48 >> 5;
            uVar59 = iVar48 + 0x1f >> 5;
            uVar33 = uVar59 + (int)local_1d60;
            uVar64 = (ulonglong)uVar33;
            iVar74 = iVar48 + iVar74 + uVar33;
            pvVar39 = (void *)FUN_1424da030((longlong)(iVar74 * 2 + 2));
            param_1[7] = (longlong)pvVar39;
            if (pvVar39 == (void *)0x0) {
LAB_1426a9188:
              *param_4 = 7;
              uVar63 = 0;
            }
            else {
              memcpy(pvVar39,auStack_196a + 1,(ulonglong)(local_1d68 >> 5));
              if (iVar74 < 0x101e) {
                uVar73 = 0x1777;
                uVar45 = 0xfff;
                iVar48 = 0xc;
              }
              else if (iVar74 - 0x1fU < 0x7fff) {
                uVar73 = 0xc365;
                uVar45 = 0x7fff;
                iVar48 = 0xf;
              }
              else {
                bVar78 = 0x1fffe < iVar74 - 0x1fU;
                iVar48 = (uint)bVar78 * 4 + 0x11;
                uVar45 = 0x1fffff;
                if (!bVar78) {
                  uVar45 = 0x1ffff;
                }
                uVar73 = 0x16e367;
                if (!bVar78) {
                  uVar73 = 0x30d43;
                }
              }
              iVar71 = (int)uVar73;
              iStack_1d88 = iVar48;
              uStack_1d84 = uVar45;
              local_1d58 = (ulonglong)uVar59;
              if (local_1d90 < iVar71) {
                FUN_1424da110(local_1d98);
                sVar75 = (size_t)(uint)(iVar71 * 4);
                local_1d98 = (undefined1 *)FUN_1424da030(sVar75);
                iVar62 = iVar71;
                if (local_1d98 == (undefined1 *)0x0) goto LAB_1426a9188;
              }
              else {
                sVar75 = (size_t)(uint)(iVar71 * 4);
                iVar62 = local_1d90;
              }
              local_1d90 = iVar62;
              puVar40 = local_1d98;
              local_1dd8 = 0;
              local_1d8c = iVar71;
              memset(local_1d98,0,sVar75);
              uStack_1d80 = 0x20;
              uStack_1d18 = 0;
              uStack_1d10 = 0;
              local_1d28 = (void *)0x0;
              local_1d20 = 0;
              local_1d1c = 0;
              if (bVar77) {
                if (iVar74 < 0x1022) {
                  uStack_1d18 = 0xfff0000000c;
                  lVar37 = 0x1777;
                  local_1d78 = CONCAT44(local_1d78._4_4_,0xc);
                  local_1df4 = 0xfff;
                }
                else if (iVar74 - 0x23U < 0x7fff) {
                  uStack_1d18 = 0x7fff0000000f;
                  lVar37 = 0xc365;
                  local_1d78 = CONCAT44(local_1d78._4_4_,0xf);
                  local_1df4 = 0x7fff;
                }
                else if (iVar74 - 0x23U < 0x1ffff) {
                  uStack_1d18 = 0x1ffff00000011;
                  lVar37 = 0x30d43;
                  local_1d78 = CONCAT44(local_1d78._4_4_,0x11);
                  local_1df4 = 0x1ffff;
                }
                else {
                  uStack_1d18 = 0x1fffff00000015;
                  lVar37 = 0x16e367;
                  local_1d78 = CONCAT44(local_1d78._4_4_,0x15);
                  local_1df4 = 0x1fffff;
                }
                uVar63 = 0;
                FUN_1424da110(0);
                iVar74 = (int)lVar37;
                pvVar39 = (void *)FUN_1424da030((ulonglong)(uint)(iVar74 * 4));
                local_1d28 = pvVar39;
                if (pvVar39 != (void *)0x0) {
                  local_1d20 = iVar74;
                  local_1d1c = iVar74;
                  memset(pvVar39,0,(ulonglong)(uint)(iVar74 * 4));
                  uStack_1d10 = 0x24;
                  local_1d70 = &DAT_00000024;
                  goto LAB_1426a9356;
                }
                *param_4 = 7;
                pvVar39 = (void *)0x0;
              }
              else {
                local_1df4 = 0;
                pvVar39 = (void *)0x0;
                lVar37 = 0;
                local_1d78 = local_1d78 & 0xffffffff00000000;
                local_1d70 = (undefined1 *)0x0;
LAB_1426a9356:
                uVar59 = *(uint *)((longlong)param_1 + 0xc);
                if ((int)uVar32 < iVar36) {
                  local_1d48 = CONCAT44(local_1d48._4_4_,(int)lVar37 + -1);
                  uVar76 = (ulonglong)uVar32;
                  local_1dd8 = (iVar36 + ~uVar32 >> 5) + 1;
                  local_1d50 = CONCAT44(local_1d50._4_4_,iVar71 + -1);
                  local_1d38 = (ulonglong)(int)uVar33;
                  lVar72 = uVar76 * 4;
                  iVar74 = (int)local_1d70;
                  uVar56 = 0;
                  uVar63 = (ulonglong)uVar33;
                  uVar32 = uVar59;
                  local_1d40 = lVar37;
                  do {
                    uVar60 = *(uint *)((longlong)param_1 + uVar76 + 0x40);
                    bVar78 = (char)uVar60 != '\0';
                    uVar50 = (uint)((int)param_1[4] < 0x10000 ^ 3);
                    if (bVar78 || -1 < (int)uVar32) {
                      uVar50 = uVar60;
                    }
                    if (!bVar78 && -1 >= (int)uVar32) {
                      uVar32 = 0;
                    }
                    uVar60 = uVar59;
                    if ((char)uVar50 != '\0') {
                      uVar59 = (uint)uVar63;
                      if ((uVar50 & 0xff) == 2) {
                        lVar37 = *param_1;
                        lVar67 = param_1[7];
                        uVar60 = *(uint *)(lVar37 + ((longlong)(uVar76 << 0x20) >> 0x1e));
                        uVar69 = (longlong)(int)uVar76 | 1;
                        do {
                          uVar60 = uVar60 * 0x25 + *(int *)(lVar37 + uVar69 * 4);
                          uVar69 = uVar69 + 1;
                        } while ((longlong)uVar69 <
                                 (longlong)((uVar76 << 0x20) + 0x2000000000) >> 0x20);
                        uVar69 = (ulonglong)uVar60 % (local_1d50 & 0xffffffff);
                        uVar46 = (int)uVar69 + 1;
                        uVar50 = *(uint *)(puVar40 + uVar69 * 4 + 4);
                        uVar47 = uVar46;
                        if (uVar50 != 0) {
                          lVar58 = (longlong)(int)uVar76 * 4 + lVar37;
                          uVar69 = (ulonglong)uVar46;
                          do {
                            uVar47 = (uint)uVar69;
                            if ((uVar50 & ~uVar45) == uVar60 << (sbyte)iVar48) {
                              lVar70 = lVar67 + (ulonglong)(uVar50 & uVar45) * 2;
                              uVar64 = 0;
                              while (((*(uint *)(lVar58 + uVar64 * 4) ==
                                       (uint)*(ushort *)(lVar70 + -2 + uVar64 * 2) &&
                                      (*(uint *)(lVar58 + 4 + uVar64 * 4) ==
                                       (uint)*(ushort *)(lVar70 + uVar64 * 2))) &&
                                     ((*(uint *)(lVar58 + 8 + uVar64 * 4) ==
                                       (uint)*(ushort *)(lVar70 + 2 + uVar64 * 2) &&
                                      (*(uint *)(lVar58 + 0xc + uVar64 * 4) ==
                                       (uint)*(ushort *)(lVar70 + 4 + uVar64 * 2)))))) {
                                uVar64 = uVar64 + 4;
                                if ((int)uVar64 == 0x20) goto LAB_1426a97c4;
                              }
                            }
                            uVar69 = (ulonglong)(uVar47 + uVar46) % uVar73;
                            uVar50 = *(uint *)(puVar40 + uVar69 * 4);
                            uVar47 = (uint)uVar69;
                          } while (uVar50 != 0);
                        }
                        uVar47 = ~uVar47;
LAB_1426a97c4:
                        if (((int)uVar47 < 0) ||
                           (uVar60 = (*(uint *)(puVar40 + (ulonglong)uVar47 * 4) & uVar45) - 1,
                           (*(uint *)(puVar40 + (ulonglong)uVar47 * 4) & uVar45) == 0)) {
                          if (uVar59 == uVar33) {
                            uVar51 = 0;
                            uVar69 = local_1d38;
                            uVar59 = uVar33;
                          }
                          else {
                            uVar69 = (ulonglong)(int)uVar59;
                            lVar58 = lVar67 + uVar69 * 2 + -0x3e;
                            lVar70 = lVar67 + uVar69 * 2 + -0x3c;
                            uVar53 = 0x1f;
                            uVar64 = 0x20;
                            while( true ) {
                              lVar57 = 0;
                              uVar52 = uVar64;
                              while (*(uint *)(lVar37 + lVar72 + lVar57 * 2) ==
                                     (uint)*(ushort *)(lVar58 + lVar57)) {
                                lVar57 = lVar57 + 2;
                                uVar60 = (int)uVar52 - 1;
                                uVar52 = (ulonglong)uVar60;
                                uVar51 = uVar53;
                                if ((int)uVar60 < 2) goto LAB_1426a9923;
                              }
                              if (uVar53 < 2) break;
                              uVar51 = uVar53 - 1;
                              uVar52 = uVar53 & 0xffffffff;
                              lVar57 = 0;
                              while (*(uint *)(lVar37 + lVar72 + lVar57 * 2) ==
                                     (uint)*(ushort *)(lVar70 + lVar57)) {
                                lVar57 = lVar57 + 2;
                                uVar60 = (int)uVar52 - 1;
                                uVar52 = (ulonglong)uVar60;
                                if ((int)uVar60 < 2) {
                                  uVar53 = uVar51 & 0xffffffff;
LAB_1426a9923:
                                  uVar59 = uVar59 - (int)uVar53;
                                  uVar64 = uVar63;
                                  if ((int)uVar53 < 0x20) goto LAB_1426a9935;
                                  goto LAB_1426a99d1;
                                }
                              }
                              uVar53 = uVar53 - 2;
                              lVar58 = lVar58 + 4;
                              uVar64 = (ulonglong)((int)uVar64 - 2);
                              lVar70 = lVar70 + 4;
                            }
                            uVar51 = 0;
                          }
LAB_1426a9935:
                          uVar53 = uVar51 & 0xffffffff;
                          if ((uVar51 & 1) != 0) {
                            *(undefined2 *)(param_1[7] + uVar69 * 2) =
                                 *(undefined2 *)(*param_1 + (uVar53 + uVar76) * 4);
                            uVar69 = uVar69 + 1;
                            uVar64 = uVar69;
                            uVar53 = uVar53 + 1;
                          }
                          if (uVar51 != 0x1f) {
                            lVar37 = lVar72 + uVar53 * 4;
                            lVar67 = 0;
                            do {
                              *(undefined2 *)(param_1[7] + uVar69 * 2 + lVar67 * 2) =
                                   *(undefined2 *)(*param_1 + lVar37 + lVar67 * 4);
                              *(undefined2 *)(param_1[7] + uVar69 * 2 + 2 + lVar67 * 2) =
                                   *(undefined2 *)(*param_1 + lVar37 + 4 + lVar67 * 4);
                              lVar67 = lVar67 + 2;
                            } while (0x20 - uVar53 != lVar67);
                            uVar64 = uVar69 + lVar67;
                          }
                          lVar67 = param_1[7];
LAB_1426a99d1:
                          FUN_1426aa290(&local_1d98,lVar67,uVar33,uVar63,(int)uVar64);
                          if (bVar77) {
                            FUN_1426aa290(&local_1d28,param_1[7],uVar33,uVar63,(int)uVar64);
                          }
                          uVar63 = uVar64 & 0xffffffff;
                          uVar60 = uVar59;
                        }
                      }
                      else if ((uVar50 & 0xff) == 1) {
                        uVar60 = *(uint *)(*param_1 + uVar76 * 4);
                      }
                      else {
                        lVar58 = (longlong)(int)uVar59;
                        lVar37 = lVar58 * 2;
                        lVar67 = lVar37;
                        uVar69 = uVar76;
                        do {
                          uVar60 = *(uint *)(*param_1 + uVar69 * 4);
                          *(short *)(param_1[7] + 2 + lVar67) = (short)uVar60;
                          uVar50 = *(uint *)(*param_1 + 4 + uVar69 * 4);
                          *(short *)(param_1[7] + 4 + lVar67) = (short)uVar50;
                          uVar47 = *(uint *)(*param_1 + 8 + uVar69 * 4);
                          *(short *)(param_1[7] + 6 + lVar67) = (short)uVar47;
                          uVar92 = *(undefined4 *)(*param_1 + 0xc + uVar69 * 4);
                          *(short *)(param_1[7] + 8 + lVar67) = (short)uVar92;
                          uVar46 = *(uint *)(*param_1 + 0x10 + uVar69 * 4);
                          *(short *)(param_1[7] + 10 + lVar67) = (short)uVar46;
                          uVar35 = *(uint *)(*param_1 + 0x14 + uVar69 * 4);
                          *(short *)(param_1[7] + 0xc + lVar67) = (short)uVar35;
                          uVar34 = *(uint *)(*param_1 + 0x18 + uVar69 * 4);
                          *(short *)(param_1[7] + 0xe + lVar67) = (short)uVar34;
                          uVar13 = *(undefined4 *)(*param_1 + 0x1c + uVar69 * 4);
                          uVar69 = uVar69 + 8;
                          *(short *)(param_1[7] + 0x10 + lVar67) = (short)uVar13;
                          *(ushort *)(param_1[7] + lVar67) =
                               (ushort)((uint)uVar13 >> 0x10) & 3 |
                               (ushort)(uVar34 >> 0xe) & 0xc |
                               (ushort)(uVar35 >> 0xc) & 0x30 |
                               (ushort)(uVar46 >> 10) & 0xc0 |
                               (ushort)((uint)uVar92 >> 8) & 0x300 |
                               (ushort)(uVar47 >> 6) & 0xc00 |
                               (ushort)(uVar50 >> 4) & 0x3000 | (ushort)(uVar60 >> 2) & 0xc000;
                          lVar67 = lVar67 + 0x12;
                        } while (uVar69 < uVar76 + 0x20);
                        uVar69 = param_1[7];
                        psVar9 = (short *)(uVar69 + lVar58 * 2);
                        uVar60 = (uint)*(ushort *)(uVar69 + lVar58 * 2);
                        lVar67 = (longlong)(int)(uVar59 + 1);
                        do {
                          lVar70 = lVar67 * 2;
                          lVar67 = lVar67 + 1;
                          uVar60 = (uint)*(ushort *)(uVar69 + lVar70) + uVar60 * 0x25;
                        } while (lVar67 < (int)(uVar59 + (int)local_1d70));
                        uVar46 = uVar60 % (uint)local_1d48 + 1;
                        uVar50 = *(uint *)((longlong)pvVar39 + (longlong)(int)uVar46 * 4);
                        uVar47 = uVar46;
                        while (uVar50 != 0) {
                          if ((uVar50 & ~local_1df4) == uVar60 << ((byte)local_1d78 & 0x1f)) {
                            if (!bVar77) goto LAB_1426a9780;
                            uVar64 = uVar69;
                            iVar36 = iVar74 + 1;
                            while (*(short *)(uVar64 + (longlong)(int)((uVar50 & local_1df4) - 1) *
                                                       2) == *(short *)(uVar64 + lVar37)) {
                              uVar64 = uVar64 + 2;
                              iVar36 = iVar36 + -1;
                              if (iVar36 < 2) goto LAB_1426a9780;
                            }
                          }
                          uVar47 = (int)(uVar47 + uVar46) % (int)local_1d40;
                          uVar50 = *(uint *)((longlong)pvVar39 + (longlong)(int)uVar47 * 4);
                        }
                        uVar47 = ~uVar47;
LAB_1426a9780:
                        if (((int)uVar47 < 0) ||
                           (uVar60 = *(uint *)((longlong)pvVar39 + (ulonglong)uVar47 * 4) &
                                     local_1df4, uVar60 == 0)) {
                          uVar60 = uVar33;
                          if (uVar59 == uVar33) {
LAB_1426a97b7:
                            uVar47 = uVar59 + 0x24;
                          }
                          else {
                            uVar63 = 0x23;
                            lVar67 = -0x46;
                            iVar36 = 0x24;
                            lVar70 = -0x44;
                            psVar54 = psVar9;
                            iVar62 = iVar36;
                            do {
                              for (; *(short *)((longlong)psVar54 + lVar67) != *psVar54;
                                  lVar67 = lVar67 + 4) {
                                uVar60 = uVar59;
                                if (uVar63 < 2) goto LAB_1426a97b7;
                                uVar64 = uVar63 - 1;
                                uVar53 = uVar63 & 0xffffffff;
                                psVar54 = psVar9;
                                while (*(short *)((longlong)psVar54 + lVar70) == *psVar54) {
                                  psVar54 = psVar54 + 1;
                                  uVar60 = (int)uVar53 - 1;
                                  uVar53 = (ulonglong)uVar60;
                                  if ((int)uVar60 < 2) {
                                    uVar63 = uVar64 & 0xffffffff;
                                    goto LAB_1426a9a3b;
                                  }
                                }
                                uVar63 = uVar63 - 2;
                                iVar36 = iVar62 + -2;
                                lVar70 = lVar70 + 4;
                                psVar54 = psVar9;
                                iVar62 = iVar36;
                              }
                              iVar36 = iVar36 + -1;
                              uVar64 = uVar63;
                              psVar54 = psVar54 + 1;
                            } while (1 < iVar36);
LAB_1426a9a3b:
                            uVar50 = (uint)uVar63;
                            uVar60 = uVar59 - uVar50;
                            if ((int)uVar50 < 1) {
                              uVar47 = uVar59 + 0x24;
                            }
                            else {
                              uVar47 = uVar59;
                              if (uVar50 < 0x24) {
                                uVar69 = uVar64 & 0xffffffff;
                                uVar63 = uVar69;
                                if ((uVar64 & 1) != 0) {
                                  uVar63 = uVar69 + 1;
                                  *(undefined2 *)(param_1[7] + lVar58 * 2) =
                                       *(undefined2 *)(param_1[7] + (uVar69 + lVar58) * 2);
                                  lVar58 = lVar58 + 1;
                                }
                                if (uVar64 != 0x23) {
                                  lVar37 = lVar37 + uVar63 * 2;
                                  lVar67 = 0;
                                  do {
                                    *(undefined2 *)(param_1[7] + lVar58 * 2 + lVar67 * 2) =
                                         *(undefined2 *)(param_1[7] + lVar37 + lVar67 * 2);
                                    *(undefined2 *)(param_1[7] + lVar58 * 2 + 2 + lVar67 * 2) =
                                         *(undefined2 *)(param_1[7] + lVar37 + 2 + lVar67 * 2);
                                    lVar67 = lVar67 + 2;
                                  } while (0x24 - uVar63 != lVar67);
                                  lVar58 = lVar58 + lVar67;
                                }
                                uVar69 = param_1[7];
                                uVar47 = (uint)lVar58;
                              }
                            }
                          }
                          uVar64 = (ulonglong)uVar33;
                          FUN_1426aa290(&local_1d98,uVar69,uVar33,uVar59,uVar47);
                          if (bVar77) {
                            FUN_1426aa290(&local_1d28,param_1[7],uVar33,uVar59,uVar47);
                          }
                          uVar63 = (ulonglong)uVar47;
                        }
                        else {
                          uVar60 = uVar60 - 1;
                        }
                        uVar60 = uVar60 | 0x8000;
                      }
                    }
                    uVar59 = *(uint *)((longlong)param_1 + 0xc);
                    if (((int)uVar59 < 0) && (-1 < (int)uVar32)) {
                      *(uint *)((longlong)param_1 + 0xc) = uVar60;
                      uVar59 = uVar60;
                    }
                    local_1168[uVar56] = (ushort)uVar60;
                    uVar56 = uVar56 + 1;
                    uVar76 = uVar76 + 0x20;
                    lVar72 = lVar72 + 0x80;
                    uVar69 = local_1d60;
                  } while (uVar56 != local_1dd8);
                }
                else {
                  uVar63 = (ulonglong)uVar33;
                }
                puVar40 = local_1d98;
                if ((int)uVar59 < 0) {
                  *(undefined4 *)((longlong)param_1 + 0xc) = 0x7fff;
                }
                pvVar39 = local_1d28;
                if ((int)uVar63 < 0x801f) {
                  if (local_1dd8 != 0) {
                    uVar76 = uVar69 & 0xffffffff;
                    lVar37 = (longlong)(int)local_1d58;
                    uVar64 = 0x20;
                    iVar74 = 0;
                    do {
                      uVar32 = local_1dd8 - iVar74;
                      lVar72 = param_1[7];
                      uVar59 = (uint)uVar63;
                      if ((int)uVar32 < (int)uVar64) {
                        if ((int)uVar33 <= (int)(uVar59 - uVar32)) {
                          lVar67 = lVar37 * 2 + uVar69 * 2 + lVar72;
                          uVar60 = uVar33;
                          do {
                            if ((int)uVar32 < 1) {
                              if (uVar32 == 0) {
                                uVar64 = 0;
                                goto joined_r0x0001426a9d9b;
                              }
                            }
                            else {
                              lVar58 = 0;
                              iVar36 = (local_1dd8 + 1) - iVar74;
                              while (*(short *)(lVar67 + lVar58) ==
                                     *(short *)((longlong)local_1168 + lVar58 + (longlong)iVar74 * 2
                                               )) {
                                lVar58 = lVar58 + 2;
                                iVar36 = iVar36 + -1;
                                if (iVar36 < 2) {
                                  uVar64 = (ulonglong)uVar32;
                                  goto joined_r0x0001426a9d9b;
                                }
                              }
                            }
                            uVar60 = uVar60 + 1;
                            lVar67 = lVar67 + 2;
                          } while ((uVar59 - uVar32) + 1 != uVar60);
                        }
                        uVar64 = (ulonglong)uVar32;
LAB_1426a9e0b:
                        iVar62 = (int)uVar64;
                        iVar36 = 0;
                        if (uVar59 == uVar33) {
LAB_1426a9e7c:
                          uVar55 = (short)uVar63 - (short)iVar36;
                          if (iVar36 < iVar62) goto LAB_1426a9e8b;
                        }
                        else {
                          if (1 < iVar62) {
                            lVar67 = (longlong)(int)uVar59 * 2 + uVar64 * -2 + lVar72;
                            uVar56 = uVar64;
                            do {
                              lVar67 = lVar67 + 2;
                              uVar53 = uVar56 & 0xffffffff;
                              lVar58 = 0;
                              while (*(short *)(lVar67 + lVar58) ==
                                     *(short *)((longlong)local_1168 + lVar58 + (longlong)iVar74 * 2
                                               )) {
                                lVar58 = lVar58 + 2;
                                uVar32 = (int)uVar53 - 1;
                                uVar53 = (ulonglong)uVar32;
                                if ((int)uVar32 < 2) {
                                  iVar36 = (int)(uVar56 - 1);
                                  goto LAB_1426a9e7c;
                                }
                              }
                              bVar77 = 2 < (longlong)uVar56;
                              uVar56 = uVar56 - 1;
                              iVar36 = 0;
                            } while (bVar77);
                            goto LAB_1426a9e7c;
                          }
                          iVar36 = iVar62 + -1;
                          uVar55 = (short)uVar63 - (short)iVar36;
LAB_1426a9e8b:
                          uVar53 = (ulonglong)iVar36;
                          lVar72 = (longlong)(int)uVar59;
                          uVar56 = uVar53;
                          if ((iVar62 - iVar36 & 1U) != 0) {
                            *(ushort *)(param_1[7] + lVar72 * 2) =
                                 local_1168[(longlong)iVar74 + uVar53];
                            lVar72 = lVar72 + 1;
                            uVar56 = uVar53 + 1;
                          }
                          if (~uVar53 + (longlong)iVar62 != 0) {
                            do {
                              *(ushort *)(param_1[7] + lVar72 * 2) =
                                   local_1168[(longlong)iVar74 + uVar56];
                              lVar67 = uVar56 + 1;
                              uVar56 = uVar56 + 2;
                              *(ushort *)(param_1[7] + 2 + lVar72 * 2) = local_1168[iVar74 + lVar67]
                              ;
                              lVar72 = lVar72 + 2;
                            } while ((longlong)iVar62 != uVar56);
                          }
                          uVar59 = (uint)lVar72;
                          lVar72 = param_1[7];
                        }
                        FUN_1426aa290(&local_1d98,lVar72,uVar33,uVar63,uVar59);
                        lVar72 = param_1[7];
                        uVar63 = (ulonglong)uVar59;
                      }
                      else {
                        uVar32 = (uint)local_1168[iVar74];
                        lVar67 = (longlong)(iVar74 + 1);
                        do {
                          puVar8 = local_1168 + lVar67;
                          lVar67 = lVar67 + 1;
                          uVar32 = (uint)*puVar8 + uVar32 * 0x25;
                        } while (lVar67 < iVar74 + 0x20);
                        uVar56 = (ulonglong)uVar32 % (ulonglong)(iVar71 - 1);
                        uVar47 = (int)uVar56 + 1;
                        uVar53 = (ulonglong)uVar47;
                        uVar60 = *(uint *)(puVar40 + uVar56 * 4 + 4);
                        uVar50 = uVar47;
                        while (uVar60 != 0) {
                          uVar50 = (uint)uVar53;
                          if ((uVar60 & ~uVar45) == uVar32 << (sbyte)iVar48) {
                            lVar67 = lVar72 + (ulonglong)(uVar60 & uVar45) * 2;
                            lVar58 = 0;
                            while ((((*(ushort *)(lVar67 + -2 + lVar58 * 2) ==
                                      local_1168[iVar74 + lVar58] &&
                                     (*(ushort *)(lVar67 + lVar58 * 2) ==
                                      local_1168[(longlong)iVar74 + lVar58 + 1])) &&
                                    (*(ushort *)(lVar67 + 2 + lVar58 * 2) ==
                                     local_1168[(longlong)iVar74 + lVar58 + 2])) &&
                                   (*(ushort *)(lVar67 + 4 + lVar58 * 2) ==
                                    local_1168[(longlong)iVar74 + lVar58 + 3]))) {
                              lVar58 = lVar58 + 4;
                              if ((int)lVar58 == 0x20) goto LAB_1426a9d89;
                            }
                          }
                          uVar53 = (ulonglong)(uVar50 + uVar47) % uVar73;
                          uVar50 = (uint)uVar53;
                          uVar60 = *(uint *)(puVar40 + uVar53 * 4);
                        }
                        uVar50 = ~uVar50;
LAB_1426a9d89:
                        if ((int)uVar50 < 0) goto LAB_1426a9e0b;
                        uVar60 = (*(uint *)(puVar40 + (ulonglong)uVar50 * 4) & uVar45) - 1;
joined_r0x0001426a9d9b:
                        uVar55 = (undefined2)uVar60;
                        if ((int)uVar60 < 0) goto LAB_1426a9e0b;
                      }
                      *(undefined2 *)(lVar72 + uVar76 * 2) = uVar55;
                      uVar76 = uVar76 + 1;
                      iVar74 = iVar74 + (int)uVar64;
                      pvVar39 = local_1d28;
                    } while (iVar74 < (int)local_1dd8);
                  }
                }
                else {
                  *param_4 = 8;
                  uVar63 = 0;
                }
              }
              FUN_1424da110(pvVar39);
            }
            *(int *)(param_1 + 6) = (int)local_1d00;
            puVar40 = local_1d98;
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0x7fff;
            *(int *)(param_1 + 6) = (int)local_1d00;
          }
        }
        else {
          *param_4 = 8;
          uVar63 = 0;
        }
      }
      uVar59 = (uint)uVar63;
      FUN_1424da110(puVar40);
      uVar33 = local_1d2c;
      uVar32 = local_1d64;
      if (0 < *param_4) goto LAB_1426a843c;
      if ((local_1d2c == 1) && ((uVar63 & 1) != 0)) {
        lVar37 = (longlong)(int)uVar59;
        iVar74 = uVar59 * 2 + 2;
        uVar59 = uVar59 + 1;
        *(undefined2 *)(param_1[7] + lVar37 * 2) = 0xffee;
LAB_1426a857d:
        lVar37 = param_1[2];
        iVar36 = *(int *)((longlong)param_1 + 0x1c);
        lVar72 = (longlong)iVar36;
        iVar48 = *(int *)(lVar37 + -4 + lVar72 * 4);
        iVar71 = *(int *)((longlong)param_1 + 0x2c);
        if (iVar48 == iVar71) {
          iVar62 = *(int *)((longlong)param_1 + 0x34);
          if (*(int *)(lVar37 + -8 + lVar72 * 4) != iVar62) goto LAB_1426a85a5;
        }
        else {
          iVar62 = *(int *)((longlong)param_1 + 0x34);
LAB_1426a85a5:
          if (iVar48 != iVar62) {
            *(int *)((longlong)param_1 + 0x1c) = iVar36 + 1;
            *(int *)(lVar37 + lVar72 * 4) = iVar62;
            iVar71 = *(int *)((longlong)param_1 + 0x2c);
            lVar37 = param_1[2];
            iVar36 = *(int *)((longlong)param_1 + 0x1c);
          }
          *(int *)((longlong)param_1 + 0x1c) = iVar36 + 1;
          *(int *)(lVar37 + (longlong)iVar36 * 4) = iVar71;
          iVar36 = *(int *)((longlong)param_1 + 0x1c);
        }
        iVar36 = iVar36 << 2;
      }
      else {
        iVar74 = uVar59 * 2;
        if (local_1d2c == 0) {
          uVar45 = *(uint *)((longlong)param_1 + 0x1c);
          if (((uVar45 ^ uVar59) & 1) != 0) {
            *(uint *)((longlong)param_1 + 0x1c) = uVar45 + 1;
            *(undefined4 *)(param_1[2] + (longlong)(int)uVar45 * 4) =
                 *(undefined4 *)((longlong)param_1 + 0x2c);
            uVar45 = *(uint *)((longlong)param_1 + 0x1c);
          }
          lVar37 = param_1[2];
          lVar72 = (longlong)(int)uVar45;
          if (*(int *)(lVar37 + -4 + lVar72 * 4) == *(int *)((longlong)param_1 + 0x2c)) {
            iVar36 = *(int *)((longlong)param_1 + 0x34);
            if (*(int *)(lVar37 + -8 + lVar72 * 4) != iVar36) goto LAB_1426a8d16;
          }
          else {
            iVar36 = *(int *)((longlong)param_1 + 0x34);
LAB_1426a8d16:
            *(uint *)((longlong)param_1 + 0x1c) = uVar45 + 1;
            *(int *)(lVar37 + lVar72 * 4) = iVar36;
            iVar36 = *(int *)((longlong)param_1 + 0x1c);
            *(int *)((longlong)param_1 + 0x1c) = iVar36 + 1;
            *(undefined4 *)(param_1[2] + (longlong)iVar36 * 4) =
                 *(undefined4 *)((longlong)param_1 + 0x2c);
            uVar45 = *(uint *)((longlong)param_1 + 0x1c);
          }
          iVar36 = uVar45 * 2;
        }
        else {
          if (local_1d2c == 1) goto LAB_1426a857d;
          iVar36 = *(int *)((longlong)param_1 + 0x1c);
          lVar37 = (longlong)iVar36;
          uVar45 = iVar36 + iVar74 & 3;
          if (uVar45 == 3) {
            lVar72 = param_1[2];
            if (*(int *)(lVar72 + -4 + lVar37 * 4) != *(int *)((longlong)param_1 + 0x34)) {
LAB_1426a8d73:
              do {
                iVar36 = *(int *)((longlong)param_1 + 0x1c);
                *(int *)((longlong)param_1 + 0x1c) = iVar36 + 1;
                *(undefined4 *)(param_1[2] + (longlong)iVar36 * 4) =
                     *(undefined4 *)((longlong)param_1 + 0x34);
                uVar45 = uVar45 + 1 & 3;
              } while (uVar45 != 2);
              iVar36 = *(int *)((longlong)param_1 + 0x1c);
              goto LAB_1426a8d97;
            }
LAB_1426a8db2:
            *(int *)((longlong)param_1 + 0x1c) = iVar36 + 1;
            *(undefined4 *)(lVar72 + (longlong)iVar36 * 4) =
                 *(undefined4 *)((longlong)param_1 + 0x2c);
            iVar36 = *(int *)((longlong)param_1 + 0x1c);
          }
          else {
            if (uVar45 == 2) {
LAB_1426a8d97:
              *(int *)((longlong)param_1 + 0x1c) = iVar36 + 1;
              *(undefined4 *)(param_1[2] + (longlong)iVar36 * 4) =
                   *(undefined4 *)((longlong)param_1 + 0x34);
              lVar72 = param_1[2];
              iVar36 = *(int *)((longlong)param_1 + 0x1c);
              goto LAB_1426a8db2;
            }
            if (((uVar45 != 0) ||
                (*(int *)(param_1[2] + -4 + lVar37 * 4) != *(int *)((longlong)param_1 + 0x2c))) ||
               (*(int *)(param_1[2] + -8 + lVar37 * 4) != *(int *)((longlong)param_1 + 0x34)))
            goto LAB_1426a8d73;
          }
        }
      }
      pauVar41 = (undefined1 (*) [16])FUN_1424da030((longlong)(iVar36 + iVar74 + 0x30));
      if (pauVar41 != (undefined1 (*) [16])0x0) {
        pauVar41[1] = (undefined1  [16])0x0;
        pauVar41[2] = (undefined1  [16])0x0;
        *pauVar41 = (undefined1  [16])0x0;
        *(uint *)pauVar41[1] = uVar59;
        *(undefined4 *)(pauVar41[1] + 4) = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(int *)(pauVar41[1] + 8) = (int)param_1[6];
        *(short *)(pauVar41[1] + 0xc) = (short)((int)param_1[6] + 0xfffU >> 0xc);
        pauVar41[1][0xe] = (char)uVar32;
        pauVar41[1][0xf] = (char)uVar33;
        *(undefined2 *)(pauVar41[2] + 6) = *(undefined2 *)((longlong)param_1 + 0xc);
        *(int *)(pauVar41[2] + 8) = (int)param_1[4];
        *(int *)(pauVar41[2] + 0xc) = (int)param_1[5];
        _Dst = pauVar41 + 3;
        *(undefined1 (**) [16])*pauVar41 = _Dst;
        sVar75 = (size_t)iVar74;
        if ((int)local_1d68 < (int)param_1[6]) {
          memcpy(_Dst,(void *)param_1[7],sVar75);
          pauVar42 = (undefined1 (*) [16])(*_Dst + (longlong)(int)uVar59 * 2);
        }
        else {
          pauVar42 = _Dst;
          if (0 < (int)uVar59) {
            uVar32 = uVar59 & 3;
            if (uVar59 < 4) {
              lVar72 = 0;
            }
            else {
              uVar59 = uVar59 & 0xfffffffc;
              lVar37 = 0;
              lVar72 = 0;
              do {
                *(undefined2 *)(*_Dst + lVar37) = *(undefined2 *)(*param_1 + lVar37 * 8);
                *(undefined2 *)(pauVar41[3] + lVar37 + 2) =
                     *(undefined2 *)(*param_1 + 0x10 + lVar37 * 8);
                *(undefined2 *)(pauVar41[3] + lVar37 + 4) =
                     *(undefined2 *)(*param_1 + 0x20 + lVar37 * 8);
                *(undefined2 *)(pauVar41[3] + lVar37 + 6) =
                     *(undefined2 *)(*param_1 + 0x30 + lVar37 * 8);
                lVar72 = lVar72 + 0x10;
                lVar37 = lVar37 + 8;
                uVar59 = uVar59 - 4;
              } while (uVar59 != 0);
              pauVar42 = (undefined1 (*) [16])(*_Dst + lVar37);
            }
            if (uVar32 != 0) {
              lVar72 = lVar72 << 2;
              do {
                *(undefined2 *)*pauVar42 = *(undefined2 *)(*param_1 + lVar72);
                pauVar42 = (undefined1 (*) [16])(*pauVar42 + 2);
                lVar72 = lVar72 + 0x10;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
          }
        }
        _Dst_00 = *_Dst + sVar75;
        pvVar39 = (void *)param_1[2];
        if (uVar33 == 2) {
          *(void **)(*pauVar41 + 8) = _Dst_00;
          uVar32 = *(uint *)((longlong)param_1 + 0x1c);
          uVar63 = (ulonglong)uVar32;
          if (0 < (int)uVar32) {
            if ((0x13 < uVar32) &&
               (((void *)((longlong)pvVar39 + (ulonglong)(uVar32 - 1) * 4 + 4) <= _Dst_00 ||
                (pauVar41[3] + (uVar32 - 1) + sVar75 + 1 <= pvVar39)))) {
              uVar69 = (ulonglong)(uVar32 & 0xfffffff8);
              uVar32 = uVar32 - (uVar32 & 0xfffffff8);
              _Dst_00 = (void *)((longlong)_Dst_00 + uVar69);
              uVar64 = 0;
              do {
                puVar8 = (ushort *)((longlong)pvVar39 + uVar64 * 4);
                puVar11 = (ushort *)((longlong)pvVar39 + uVar64 * 4 + 0x10);
                uVar80 = *puVar8 & 0xff;
                uVar82 = puVar8[2] & 0xff;
                uVar83 = puVar8[4] & 0xff;
                uVar84 = puVar8[6] & 0xff;
                bVar20 = (uVar80 != 0) * (uVar80 < 0x100) * (char)*puVar8 - (0xff < uVar80);
                bVar21 = (uVar82 != 0) * (uVar82 < 0x100) * (char)puVar8[2] - (0xff < uVar82);
                bVar22 = (uVar83 != 0) * (uVar83 < 0x100) * (char)puVar8[4] - (0xff < uVar83);
                bVar23 = (uVar84 != 0) * (uVar84 < 0x100) * (char)puVar8[6] - (0xff < uVar84);
                uVar80 = *puVar11 & 0xff;
                uVar82 = puVar11[2] & 0xff;
                uVar83 = puVar11[4] & 0xff;
                uVar84 = puVar11[6] & 0xff;
                bVar24 = (uVar80 != 0) * (uVar80 < 0x100) * (char)*puVar11 - (0xff < uVar80);
                bVar25 = (uVar82 != 0) * (uVar82 < 0x100) * (char)puVar11[2] - (0xff < uVar82);
                bVar26 = (uVar83 != 0) * (uVar83 < 0x100) * (char)puVar11[4] - (0xff < uVar83);
                bVar27 = (uVar84 != 0) * (uVar84 < 0x100) * (char)puVar11[6] - (0xff < uVar84);
                *(uint *)(pauVar41[3] + uVar64 + sVar75) =
                     CONCAT13((bVar23 != 0) * (bVar23 < 0x100) * bVar23 - (0xff < bVar23),
                              CONCAT12((bVar22 != 0) * (bVar22 < 0x100) * bVar22 - (0xff < bVar22),
                                       CONCAT11((bVar21 != 0) * (bVar21 < 0x100) * bVar21 -
                                                (0xff < bVar21),
                                                (bVar20 != 0) * (bVar20 < 0x100) * bVar20 -
                                                (0xff < bVar20))));
                *(uint *)(pauVar41[3] + uVar64 + sVar75 + 4) =
                     CONCAT13((bVar27 != 0) * (bVar27 < 0x100) * bVar27 - (0xff < bVar27),
                              CONCAT12((bVar26 != 0) * (bVar26 < 0x100) * bVar26 - (0xff < bVar26),
                                       CONCAT11((bVar25 != 0) * (bVar25 < 0x100) * bVar25 -
                                                (0xff < bVar25),
                                                (bVar24 != 0) * (bVar24 < 0x100) * bVar24 -
                                                (0xff < bVar24))));
                uVar64 = uVar64 + 8;
              } while (uVar69 != uVar64);
              pvVar39 = (void *)((longlong)pvVar39 + uVar69 * 4);
              if (uVar69 == uVar63) goto LAB_1426a8fea;
            }
            uVar32 = uVar32 + 1;
            lVar37 = 0;
            do {
              *(undefined1 *)((longlong)_Dst_00 + lVar37) =
                   *(undefined1 *)((longlong)pvVar39 + lVar37 * 4);
              uVar32 = uVar32 - 1;
              lVar37 = lVar37 + 1;
            } while (1 < uVar32);
          }
        }
        else if (uVar33 == 1) {
          *(void **)(*pauVar41 + 8) = _Dst_00;
          memcpy(_Dst_00,pvVar39,(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
        }
        else if (uVar33 == 0) {
          *(undefined1 (**) [16])(*pauVar41 + 8) = pauVar42;
          uVar32 = *(uint *)((longlong)param_1 + 0x1c);
          uVar63 = (ulonglong)uVar32;
          if (0 < (int)uVar32) {
            if ((0x13 < uVar32) &&
               (((undefined1 (*) [16])((longlong)pvVar39 + (ulonglong)(uVar32 - 1) * 4 + 4) <=
                 pauVar42 || (*pauVar42 + (ulonglong)(uVar32 - 1) * 2 + 2 <= pvVar39)))) {
              uVar69 = (ulonglong)(uVar32 & 0xfffffff8);
              lVar37 = 0;
              do {
                auVar79 = *(undefined1 (*) [16])((longlong)pvVar39 + lVar37 * 2);
                auVar81 = *(undefined1 (*) [16])((longlong)pvVar39 + lVar37 * 2 + 0x10);
                auVar79 = pshuflw(auVar79,auVar79,0xe8);
                auVar79 = pshufhw(auVar79,auVar79,0xe8);
                auVar81 = pshuflw(auVar81,auVar81,0xe8);
                auVar81 = pshufhw(auVar81,auVar81,0xe8);
                *(ulonglong *)(*pauVar42 + lVar37) = CONCAT44(auVar79._8_4_,auVar79._0_4_);
                *(ulonglong *)((longlong)(*pauVar42 + lVar37) + 8) =
                     CONCAT44(auVar81._8_4_,auVar81._0_4_);
                lVar37 = lVar37 + 0x10;
              } while ((ulonglong)(uVar32 >> 3) << 4 != lVar37);
              pvVar39 = (void *)((longlong)pvVar39 + uVar69 * 4);
              pauVar42 = (undefined1 (*) [16])(*pauVar42 + uVar69 * 2);
              uVar32 = uVar32 - (uVar32 & 0xfffffff8);
              if (uVar69 == uVar63) goto LAB_1426a8fea;
            }
            uVar32 = uVar32 + 1;
            lVar37 = 0;
            do {
              *(undefined2 *)(*pauVar42 + lVar37) = *(undefined2 *)((longlong)pvVar39 + lVar37 * 2);
              uVar32 = uVar32 - 1;
              lVar37 = lVar37 + 2;
            } while (1 < uVar32);
          }
        }
LAB_1426a8fea:
        *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
        *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff00000000;
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_1 + 0x24);
        *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x24);
        *(undefined4 *)(param_1 + 6) = 0;
        FUN_1424da110(param_1[7]);
        param_1[7] = 0;
        return pauVar41;
      }
      *param_4 = 7;
      goto LAB_1426a843c;
    }
  }
  else {
    iVar36 = 0x40;
    uVar45 = 4;
    uVar59 = 0;
    iVar74 = 0x94;
    do {
      if (uVar59 == uVar33) {
        iVar36 = 0x10;
        uVar45 = 1;
      }
      lVar37 = (longlong)(int)uVar59;
      uVar60 = *(uint *)(*param_1 + lVar37 * 4);
      uVar63 = (ulonglong)uVar60;
      if (*(char *)((longlong)param_1 + lVar37 + 0x40) == '\x01') {
        lVar72 = param_1[2];
        uVar60 = *(uint *)(lVar72 + uVar63 * 4);
        puVar38 = (uint *)(lVar72 + uVar63 * 4 + 4);
        puVar61 = (uint *)(lVar72 + uVar63 * 4 + (ulonglong)(iVar36 - 1) * 4 + 4);
        do {
          if (*puVar38 != uVar60) break;
          puVar38 = puVar38 + 1;
        } while (puVar38 < puVar61);
        if (puVar38 != puVar61) goto LAB_1426a7401;
        *(undefined1 *)((longlong)param_1 + lVar37 + 0x40) = 0;
        *(uint *)(*param_1 + lVar37 * 4) = uVar60;
LAB_1426a74e2:
        uVar63 = local_1cf0 >> 0x20;
        if (((longlong)local_1cf0 < 0) || (auStack_1c68[uVar63] != uVar60)) {
          if (0 < (longlong)(int)(uint)local_1cf0) {
            uVar63 = 0;
            do {
              if (auStack_1c68[uVar63] == uVar60) {
                local_1cf0 = CONCAT44((int)uVar63,(uint)local_1cf0);
                goto LAB_1426a7534;
              }
              uVar63 = uVar63 + 1;
            } while ((local_1cf0 & 0xffffffff) != uVar63);
            if ((uint)local_1cf0 == 0x20) goto LAB_1426a754c;
          }
          auStack_1ce8[(int)(uint)local_1cf0] = uVar59;
          auStack_1c68[(int)(uint)local_1cf0] = uVar60;
          lVar37 = (longlong)(int)(uint)local_1cf0;
          local_1cf0 = CONCAT44((uint)local_1cf0,(uint)local_1cf0 + 1);
LAB_1426a73f1:
          auStack_1be8[lVar37] = uVar45;
          goto LAB_1426a7401;
        }
LAB_1426a7534:
        auStack_1be8[uVar63] = auStack_1be8[uVar63] + uVar45;
        uVar50 = auStack_1ce8[uVar63];
        if (uVar50 == 0xfffffffe) {
LAB_1426a754c:
          if (uVar59 != 0) {
            iVar48 = 4;
            uVar50 = 0;
LAB_1426a7567:
            if (uVar50 == uVar33) {
              iVar48 = 1;
            }
            if ((*(char *)((longlong)param_1 + (longlong)(int)uVar50 + 0x40) != '\0') ||
               (*(uint *)(*param_1 + (longlong)(int)uVar50 * 4) != uVar60)) goto LAB_1426a7560;
            if ((int)(uint)local_1cf0 < 1) {
              iVar71 = -1;
            }
            else {
              if ((uint)local_1cf0 < 4) {
                uVar63 = 0xffffffff;
                uVar47 = 0x11000;
                uVar69 = 0;
              }
              else {
                uVar63 = 0xffffffff;
                uVar47 = 0x11000;
                uVar69 = 0;
                do {
                  uVar46 = auStack_1be8[uVar69];
                  if ((int)uVar46 < (int)uVar47) {
                    uVar63 = uVar69 & 0xffffffff;
                  }
                  if ((int)uVar46 < (int)uVar47) {
                    uVar47 = uVar46;
                  }
                  iVar71 = (int)uVar69;
                  if ((int)auStack_1be8[uVar69 + 1] < (int)uVar47) {
                    uVar63 = (ulonglong)(iVar71 + 1);
                    uVar47 = auStack_1be8[uVar69 + 1];
                  }
                  if ((int)auStack_1be8[uVar69 + 2] < (int)uVar47) {
                    uVar63 = (ulonglong)(iVar71 + 2);
                    uVar47 = auStack_1be8[uVar69 + 2];
                  }
                  if ((int)auStack_1be8[uVar69 + 3] < (int)uVar47) {
                    uVar63 = (ulonglong)(iVar71 + 3);
                    uVar47 = auStack_1be8[uVar69 + 3];
                  }
                  uVar69 = uVar69 + 4;
                } while (uVar69 != ((uint)local_1cf0 & 0xfffffffc));
              }
              iVar71 = (int)uVar63;
              uVar64 = (ulonglong)((uint)local_1cf0 & 3);
              uVar73 = local_1cf0 & 3;
              while (uVar73 != 0) {
                iVar71 = (int)uVar63;
                if ((int)auStack_1be8[uVar69] < (int)uVar47) {
                  uVar63 = uVar69 & 0xffffffff;
                  iVar71 = (int)uVar69;
                  uVar47 = auStack_1be8[uVar69];
                }
                uVar69 = uVar69 + 1;
                uVar64 = uVar64 - 1;
                uVar73 = uVar64;
              }
            }
            local_1cf0 = CONCAT44(iVar71,(uint)local_1cf0);
            auStack_1ce8[iVar71] = uVar50;
            auStack_1c68[iVar71] = uVar60;
            auStack_1be8[iVar71] = iVar48 + uVar45;
            goto LAB_1426a77b6;
          }
LAB_1426a75ae:
          if ((int)(uint)local_1cf0 < 1) {
            iVar48 = -1;
          }
          else {
            if ((uint)local_1cf0 < 4) {
              uVar63 = 0xffffffff;
              uVar50 = 0x11000;
              uVar69 = 0;
            }
            else {
              uVar63 = 0xffffffff;
              uVar50 = 0x11000;
              uVar69 = 0;
              do {
                uVar47 = auStack_1be8[uVar69];
                if ((int)uVar47 < (int)uVar50) {
                  uVar63 = uVar69 & 0xffffffff;
                }
                if ((int)uVar47 < (int)uVar50) {
                  uVar50 = uVar47;
                }
                iVar48 = (int)uVar69;
                if ((int)auStack_1be8[uVar69 + 1] < (int)uVar50) {
                  uVar63 = (ulonglong)(iVar48 + 1);
                  uVar50 = auStack_1be8[uVar69 + 1];
                }
                if ((int)auStack_1be8[uVar69 + 2] < (int)uVar50) {
                  uVar63 = (ulonglong)(iVar48 + 2);
                  uVar50 = auStack_1be8[uVar69 + 2];
                }
                if ((int)auStack_1be8[uVar69 + 3] < (int)uVar50) {
                  uVar63 = (ulonglong)(iVar48 + 3);
                  uVar50 = auStack_1be8[uVar69 + 3];
                }
                uVar69 = uVar69 + 4;
              } while (uVar69 != ((uint)local_1cf0 & 0xfffffffc));
            }
            iVar48 = (int)uVar63;
            uVar64 = (ulonglong)((uint)local_1cf0 & 3);
            uVar73 = local_1cf0 & 3;
            while (uVar73 != 0) {
              iVar48 = (int)uVar63;
              if ((int)auStack_1be8[uVar69] < (int)uVar50) {
                uVar63 = uVar69 & 0xffffffff;
                iVar48 = (int)uVar69;
                uVar50 = auStack_1be8[uVar69];
              }
              uVar69 = uVar69 + 1;
              uVar64 = uVar64 - 1;
              uVar73 = uVar64;
            }
          }
          local_1cf0 = CONCAT44(iVar48,(uint)local_1cf0);
          lVar37 = (longlong)iVar48;
          auStack_1ce8[lVar37] = uVar59;
          auStack_1c68[lVar37] = uVar60;
          goto LAB_1426a73f1;
        }
LAB_1426a77b6:
        if ((int)uVar50 < 0) goto LAB_1426a7401;
        *(undefined1 *)((longlong)param_1 + lVar37 + 0x40) = 2;
        *(uint *)(*param_1 + lVar37 * 4) = uVar50;
      }
      else {
        if (uVar45 < 2) goto LAB_1426a74e2;
        lVar72 = lVar37;
        do {
          lVar72 = lVar72 + 1;
          if ((int)(uVar45 + uVar59) <= lVar72) goto LAB_1426a74e2;
        } while (*(uint *)(*param_1 + lVar72 * 4) == uVar60);
        iVar48 = FUN_1426a9f70(param_1,uVar59);
        if (iVar48 < 0) goto LAB_1426a787f;
LAB_1426a7401:
        iVar74 = iVar74 + iVar36;
      }
      uVar59 = uVar59 + uVar45;
    } while ((int)uVar59 < (int)(uVar32 >> 4));
    if (-1 < iVar74) goto LAB_1426a77ea;
  }
LAB_1426a787f:
  *param_4 = 7;
LAB_1426a843c:
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_1424da110(param_1[7]);
  param_1[7] = 0;
                    /* WARNING: Read-only address (ram,0x000149931e70) is written */
                    /* WARNING: Read-only address (ram,0x000149d58eb0) is written */
                    /* WARNING: Read-only address (ram,0x000149d58ec0) is written */
                    /* WARNING: Read-only address (ram,0x000149931e70) is written */
                    /* WARNING: Read-only address (ram,0x000149d58eb0) is written */
                    /* WARNING: Read-only address (ram,0x000149d58ec0) is written */
  return (undefined1 (*) [16])0x0;
LAB_1426a7560:
  uVar50 = uVar50 + iVar48;
  if (uVar50 == uVar59) goto LAB_1426a75ae;
  goto LAB_1426a7567;
}



// FUNCTION 1426a9f70 FUN_1426a9f70 body=477 status=ok
// SIG undefined FUN_1426a9f70(void)

ulonglong FUN_1426a9f70(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = (longlong)(int)param_2;
  if (*(char *)((longlong)param_1 + lVar9 + 0x40) != '\x01') {
    uVar2 = *(uint *)(param_1 + 3);
    uVar3 = *(uint *)((longlong)param_1 + 0x1c);
    uVar10 = (ulonglong)uVar3;
    if (0xfff < (int)param_2) {
      if ((int)uVar2 < (int)(uVar3 + 0x10)) {
        iVar8 = 0x20000;
        if ((0x1ffff < (int)uVar2) && (iVar8 = 0x110000, 0x10ffff < uVar2)) {
          return 0xffffffff;
        }
        pvVar6 = (void *)FUN_1424da030(iVar8 * 4);
        if (pvVar6 == (void *)0x0) {
          return 0xffffffff;
        }
        memcpy(pvVar6,(void *)param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
        FUN_1424da110(param_1[2]);
        param_1[2] = (longlong)pvVar6;
        *(int *)(param_1 + 3) = iVar8;
      }
      *(uint *)((longlong)param_1 + 0x1c) = uVar3 + 0x10;
      if (-1 < (int)uVar3) {
        lVar7 = param_1[2];
        uVar4 = *(undefined4 *)(*param_1 + lVar9 * 4);
        puVar1 = (undefined4 *)(lVar7 + uVar10 * 4);
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        puVar1 = (undefined4 *)(lVar7 + 0x10 + uVar10 * 4);
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        puVar1 = (undefined4 *)(lVar7 + 0x20 + uVar10 * 4);
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        puVar1 = (undefined4 *)(lVar7 + 0x30 + uVar10 * 4);
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        *(undefined1 *)((longlong)param_1 + lVar9 + 0x40) = 1;
        *(uint *)(*param_1 + lVar9 * 4) = uVar3;
        return uVar10;
      }
      return uVar10;
    }
    if ((int)uVar2 < (int)(uVar3 + 0x40)) {
      iVar8 = 0x20000;
      if ((0x1ffff < (int)uVar2) && (iVar8 = 0x110000, 0x10ffff < uVar2)) {
        return 0xffffffff;
      }
      pvVar6 = (void *)FUN_1424da030(iVar8 * 4);
      if (pvVar6 == (void *)0x0) {
        return 0xffffffff;
      }
      memcpy(pvVar6,(void *)param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
      FUN_1424da110(param_1[2]);
      param_1[2] = (longlong)pvVar6;
      *(int *)(param_1 + 3) = iVar8;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar3 + 0x40;
    if ((int)uVar3 < 0) {
      return uVar10;
    }
    lVar7 = (longlong)(int)(param_2 & 0xfffffffc) + -1;
    do {
      lVar5 = param_1[2];
      uVar4 = *(undefined4 *)(*param_1 + 4 + lVar7 * 4);
      puVar1 = (undefined4 *)(lVar5 + uVar10 * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar4;
      puVar1[2] = uVar4;
      puVar1[3] = uVar4;
      puVar1 = (undefined4 *)(lVar5 + 0x10 + uVar10 * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar4;
      puVar1[2] = uVar4;
      puVar1[3] = uVar4;
      puVar1 = (undefined4 *)(lVar5 + 0x20 + uVar10 * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar4;
      puVar1[2] = uVar4;
      puVar1[3] = uVar4;
      puVar1 = (undefined4 *)(lVar5 + 0x30 + uVar10 * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar4;
      puVar1[2] = uVar4;
      puVar1[3] = uVar4;
      *(undefined1 *)((longlong)param_1 + lVar7 + 0x41) = 1;
      *(int *)(*param_1 + 4 + lVar7 * 4) = (int)uVar10;
      uVar10 = uVar10 + 0x10;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)(param_2 | 3));
  }
  return (ulonglong)*(uint *)(*param_1 + lVar9 * 4);
}



// FUNCTION 1426aa150 FUN_1426aa150 body=306 status=ok
// SIG undefined FUN_1426aa150(void)

void FUN_1426aa150(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar2 = param_1[3];
  param_3 = param_3 - (int)lVar2;
  uVar10 = 0;
  if (-1 < param_3) {
    uVar10 = param_3 + 1;
  }
  do {
    if (param_4 - (int)lVar2 < (int)uVar10) {
      return;
    }
    lVar9 = (longlong)(int)uVar10;
    iVar1 = (int)param_1[3];
    iVar6 = iVar1 + uVar10;
    uVar10 = uVar10 + 1;
    uVar3 = *(uint *)(param_2 + lVar9 * 4);
    lVar5 = (longlong)(int)uVar10;
    do {
      uVar3 = uVar3 * 0x25 + *(int *)(param_2 + lVar5 * 4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar6);
    uVar8 = uVar3 << (*(byte *)(param_1 + 2) & 0x1f);
    uVar4 = uVar3 % (*(int *)((longlong)param_1 + 0xc) - 1U) + 1;
    lVar5 = *param_1;
    uVar3 = *(uint *)(lVar5 + (longlong)(int)uVar4 * 4);
    uVar7 = uVar4;
    if (uVar3 != 0) {
      do {
        if ((uVar3 & ~*(uint *)((longlong)param_1 + 0x14)) == uVar8) {
          if (iVar1 < 1) {
            if (iVar1 == 0) goto LAB_1426aa274;
          }
          else {
            lVar11 = param_2;
            iVar6 = iVar1 + 1;
            while (*(int *)(lVar11 + (longlong)
                                     (int)((uVar3 & *(uint *)((longlong)param_1 + 0x14)) - 1) * 4)
                   == *(int *)(lVar11 + lVar9 * 4)) {
              lVar11 = lVar11 + 4;
              iVar6 = iVar6 + -1;
              if (iVar6 < 2) goto LAB_1426aa274;
            }
          }
        }
        uVar7 = (int)(uVar7 + uVar4) % *(int *)((longlong)param_1 + 0xc);
        uVar3 = *(uint *)(lVar5 + (longlong)(int)uVar7 * 4);
      } while (uVar3 != 0);
    }
    uVar7 = ~uVar7;
LAB_1426aa274:
    if ((int)uVar7 < 0) {
      *(uint *)(lVar5 + (ulonglong)~uVar7 * 4) = uVar8 | uVar10;
    }
  } while( true );
}



// FUNCTION 1426aa290 FUN_1426aa290 body=309 status=ok
// SIG undefined FUN_1426aa290(void)

void FUN_1426aa290(longlong *param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar2 = param_1[3];
  param_4 = param_4 - (int)lVar2;
  uVar9 = param_4 + 1;
  if (param_4 < (int)param_3) {
    uVar9 = param_3;
  }
  do {
    if (param_5 - (int)lVar2 < (int)uVar9) {
      return;
    }
    lVar10 = (longlong)(int)uVar9;
    iVar1 = (int)param_1[3];
    iVar6 = iVar1 + uVar9;
    uVar9 = uVar9 + 1;
    uVar3 = (uint)*(ushort *)(param_2 + lVar10 * 2);
    lVar5 = (longlong)(int)uVar9;
    do {
      lVar11 = lVar5 * 2;
      lVar5 = lVar5 + 1;
      uVar3 = (uint)*(ushort *)(param_2 + lVar11) + uVar3 * 0x25;
    } while (lVar5 < iVar6);
    uVar8 = uVar3 << (*(byte *)(param_1 + 2) & 0x1f);
    uVar4 = uVar3 % (*(int *)((longlong)param_1 + 0xc) - 1U) + 1;
    lVar5 = *param_1;
    uVar3 = *(uint *)(lVar5 + (longlong)(int)uVar4 * 4);
    uVar7 = uVar4;
    if (uVar3 != 0) {
      do {
        if ((uVar3 & ~*(uint *)((longlong)param_1 + 0x14)) == uVar8) {
          if (iVar1 < 1) {
            if (iVar1 == 0) goto LAB_1426aa3b4;
          }
          else {
            lVar11 = param_2;
            iVar6 = iVar1 + 1;
            while (*(short *)(lVar11 + (longlong)
                                       (int)((uVar3 & *(uint *)((longlong)param_1 + 0x14)) - 1) * 2)
                   == *(short *)(lVar11 + lVar10 * 2)) {
              lVar11 = lVar11 + 2;
              iVar6 = iVar6 + -1;
              if (iVar6 < 2) goto LAB_1426aa3b4;
            }
          }
        }
        uVar7 = (int)(uVar7 + uVar4) % *(int *)((longlong)param_1 + 0xc);
        uVar3 = *(uint *)(lVar5 + (longlong)(int)uVar7 * 4);
      } while (uVar3 != 0);
    }
    uVar7 = ~uVar7;
LAB_1426aa3b4:
    if ((int)uVar7 < 0) {
      *(uint *)(lVar5 + (ulonglong)~uVar7 * 4) = uVar8 | uVar9;
    }
  } while( true );
}



// FUNCTION 1426aa3d0 FUN_1426aa3d0 body=131 status=ok
// SIG undefined FUN_1426aa3d0(void)

undefined8 * FUN_1426aa3d0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *_Dest;
  
  *param_1 = 0;
  uVar1 = FUN_1424a42e0();
  FUN_1424a3ce0(param_1 + 1,uVar1);
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    _Dest = (char *)FUN_1424da030((longlong)((int)sVar2 + 1));
    *param_1 = _Dest;
    if (_Dest != (char *)0x0) {
      strcpy(_Dest,param_2);
      FUN_1424a3d10(param_1 + 1,param_3);
    }
  }
  return param_1;
}



// FUNCTION 1426aa460 Unwind@1426aa460 body=40 status=ok
// SIG undefined Unwind@1426aa460(void)

void Unwind_1426aa460(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1426aa490 FUN_1426aa490 body=45 status=ok
// SIG undefined FUN_1426aa490(void)

void FUN_1426aa490(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1424da110();
    *param_1 = 0;
  }
  FUN_1414b3f60(param_1 + 1);
  return;
}



// FUNCTION 1426aa4c0 FUN_1426aa4c0 body=238 status=ok
// SIG undefined FUN_1426aa4c0(void)

undefined8
FUN_1426aa4c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined1 local_78 [64];
  int local_38;
  int local_34 [3];
  undefined4 uVar6;
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_38 = 0;
  local_34[0] = 0;
  piVar5 = local_34;
  uVar4 = param_4;
  uVar2 = FUN_142564c60(*param_1,param_1[6],param_2,param_3,param_4,piVar5,&local_38);
  iVar1 = local_34[0];
  uVar6 = (undefined4)((ulonglong)piVar5 >> 0x20);
  if ((local_38 < 1) && (0 < local_34[0])) {
    FUN_1424a8e40(param_5);
    if (*(short *)(param_5 + 8) < 0) {
      iVar3 = *(int *)(param_5 + 0xc);
    }
    else {
      iVar3 = (int)*(short *)(param_5 + 8) >> 5;
    }
    uVar2 = FUN_1424a9130(param_5,0,iVar3,uVar2,uVar4 & 0xffffffff00000000,CONCAT44(uVar6,iVar1));
  }
  else {
    FUN_1424a7220(local_78,param_4,0xffffffff,0);
    uVar2 = FUN_1424a7600(param_5,local_78,0);
    FUN_140859a90(local_78);
  }
  return uVar2;
}



// FUNCTION 1426aa5b0 Unwind@1426aa5b0 body=43 status=ok
// SIG undefined Unwind@1426aa5b0(void)

void Unwind_1426aa5b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1426aa5e0 FUN_1426aa5e0 body=361 status=ok
// SIG undefined FUN_1426aa5e0(void)

undefined8 *
FUN_1426aa5e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::LocaleDisplayNamesImpl::vftable;
  puVar1 = param_1 + 1;
  FUN_1424a3c00();
  *(undefined4 *)(param_1 + 0x1d) = param_3;
  FUN_1426aa3d0(param_1 + 0x1e,"icudt64l-lang",param_2,param_4,puVar1,param_1 + 0x1e);
  FUN_1426aa3d0(param_1 + 0x3b,"icudt64l-region",param_2);
  FUN_1424a6c10(param_1 + 0x58,0);
  FUN_1424a6c10(param_1 + 0x60,0);
  FUN_1424a6c10(param_1 + 0x68,0);
  *(undefined4 *)(param_1 + 0x70) = 0x100;
  param_1[0x71] = 0;
  param_1[0x72] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x73) = 2;
  param_1[0x7a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7b) = 2;
  param_1[0x82] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x83) = 2;
  param_1[0x8a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8b) = 2;
  *(undefined4 *)(param_1 + 0x92) = 0x200;
  FUN_1426aa8c0();
  return param_1;
}



// FUNCTION 1426aa750 Unwind@1426aa750 body=73 status=ok
// SIG undefined Unwind@1426aa750(void)

void Unwind_1426aa750(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x68));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x60));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x58));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x50));
  thunk_FUN_140859a90(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1426aa7a0 Unwind@1426aa7a0 body=37 status=ok
// SIG undefined Unwind@1426aa7a0(void)

void Unwind_1426aa7a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1426aa7d0 Unwind@1426aa7d0 body=37 status=ok
// SIG undefined Unwind@1426aa7d0(void)

void Unwind_1426aa7d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1426aa800 Unwind@1426aa800 body=37 status=ok
// SIG undefined Unwind@1426aa800(void)

void Unwind_1426aa800(undefined8 param_1,longlong param_2)

{
  FUN_1426aa490(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1426aa830 Unwind@1426aa830 body=37 status=ok
// SIG undefined Unwind@1426aa830(void)

void Unwind_1426aa830(undefined8 param_1,longlong param_2)

{
  FUN_1426aa490(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1426aa860 Unwind@1426aa860 body=37 status=ok
// SIG undefined Unwind@1426aa860(void)

void Unwind_1426aa860(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1426aa890 Unwind@1426aa890 body=37 status=ok
// SIG undefined Unwind@1426aa890(void)

void Unwind_1426aa890(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1426aa8c0 FUN_1426aa8c0 body=1779 status=ok
// SIG undefined FUN_1426aa8c0(void)

void FUN_1426aa8c0(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 local_150;
  char local_148;
  longlong local_140;
  undefined **local_110;
  ushort local_108;
  int local_104;
  undefined8 local_d0;
  ushort local_c8;
  int local_c4;
  undefined8 local_90;
  ushort local_88;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar5 = FUN_1424a42e0();
  cVar3 = FUN_1424a3f70(param_1 + 0xf8,uVar5);
  lVar6 = param_1 + 0x1e0;
  if (cVar3 == '\0') {
    lVar6 = param_1 + 0xf8;
  }
  FUN_1424a3d10(param_1 + 8,lVar6);
  local_110 = &PTR_FUN_149e18960;
  local_108 = 2;
  local_d0 = (undefined **)((ulonglong)local_d0._4_4_ << 0x20);
  local_90 = (undefined **)((ulonglong)local_90._4_4_ << 0x20);
  pcVar8 = "separator";
  puVar7 = &local_90;
  uVar5 = FUN_142564c60(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x120),
                        "localeDisplayPattern",0,"separator",&local_90,&local_d0);
  uVar12 = (undefined4)((ulonglong)puVar7 >> 0x20);
  if ((int)local_d0 < 1) {
    uVar2 = (int)local_90;
    FUN_1424a8e40(&local_110);
    if (-1 < (short)local_108) {
      local_104 = (int)(short)local_108 >> 5;
    }
    FUN_1424a9130(&local_110,0,local_104,uVar5,(ulonglong)pcVar8 & 0xffffffff00000000,
                  CONCAT44(uVar12,uVar2));
  }
  else {
    FUN_1424a7130(&local_110);
  }
  if ((local_108 & 1) != 0) {
    FUN_1424a7220(&local_d0,"{0}, {1}",0xffffffff,0);
    FUN_1424a7ca0(&local_110,&local_d0);
    FUN_140859a90(&local_d0);
  }
  local_4c = 0;
  FUN_1425fb600(param_1 + 0x2c0,&local_110,2,2,&local_4c);
  local_d0 = &PTR_FUN_149e18960;
  local_c8 = 2;
  local_90 = (undefined **)((ulonglong)local_90 & 0xffffffff00000000);
  local_150 = (undefined **)((ulonglong)local_150._4_4_ << 0x20);
  puVar7 = &local_150;
  pcVar8 = "pattern";
  uVar5 = FUN_142564c60(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x120),
                        "localeDisplayPattern",0,"pattern",puVar7,&local_90);
  uVar12 = (undefined4)((ulonglong)puVar7 >> 0x20);
  if ((int)local_90 < 1) {
    uVar2 = (undefined4)local_150;
    FUN_1424a8e40(&local_d0);
    iVar4 = local_c4;
    if (-1 < (short)local_c8) {
      iVar4 = (int)(short)local_c8 >> 5;
    }
    uVar11 = CONCAT44(uVar12,uVar2);
    FUN_1424a9130(&local_d0,0,iVar4,uVar5,(ulonglong)pcVar8 & 0xffffffff00000000,uVar11);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  else {
    FUN_1424a7130(&local_d0);
  }
  if ((local_c8 & 1) != 0) {
    FUN_1424a7220(&local_90,"{0} ({1})",0xffffffff,0);
    FUN_1424a7ca0(&local_d0,&local_90);
    FUN_140859a90(&local_90);
  }
  piVar9 = &local_4c;
  FUN_1425fb600(param_1 + 0x300,&local_d0,2,2,&local_4c);
  if (-1 < (short)local_c8) {
    local_c4 = (int)(short)local_c8 >> 5;
  }
  iVar4 = FUN_1424a8940(&local_d0,0xff08,0,local_c4);
  lVar6 = param_1 + 0x390;
  if (iVar4 < 0) {
    local_90._0_2_ = 0x28;
    FUN_1424a8e40(lVar6);
    if (*(short *)(param_1 + 0x398) < 0) {
      iVar4 = *(int *)(param_1 + 0x39c);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x398) >> 5;
    }
    uVar5 = CONCAT44(uVar12,1);
    uVar10 = (ulonglong)piVar9 & 0xffffffff00000000;
    FUN_1424a9130(lVar6,0,iVar4,&local_90,uVar10,uVar5);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_90._0_2_ = 0x5b;
    FUN_1424a8e40(param_1 + 0x3d0);
    if (*(short *)(param_1 + 0x3d8) < 0) {
      iVar4 = *(int *)(param_1 + 0x3dc);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x3d8) >> 5;
    }
    uVar5 = CONCAT44(uVar12,1);
    uVar10 = uVar10 & 0xffffffff00000000;
    FUN_1424a9130(param_1 + 0x3d0,0,iVar4,&local_90,uVar10,uVar5);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_90._0_2_ = 0x29;
    FUN_1424a8e40(param_1 + 0x410);
    if (*(short *)(param_1 + 0x418) < 0) {
      iVar4 = *(int *)(param_1 + 0x41c);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x418) >> 5;
    }
    uVar5 = CONCAT44(uVar12,1);
    uVar10 = uVar10 & 0xffffffff00000000;
    FUN_1424a9130(param_1 + 0x410,0,iVar4,&local_90,uVar10,uVar5);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_90 = (undefined **)CONCAT62(local_90._2_6_,0x5d);
    FUN_1424a8e40(param_1 + 0x450);
    if (*(short *)(param_1 + 0x458) < 0) {
      iVar4 = *(int *)(param_1 + 0x45c);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x458) >> 5;
    }
    FUN_1424a9130(param_1 + 0x450,0,iVar4,&local_90,uVar10 & 0xffffffff00000000,CONCAT44(uVar12,1));
  }
  else {
    local_90._0_2_ = 0xff08;
    FUN_1424a8e40(lVar6);
    if (*(short *)(param_1 + 0x398) < 0) {
      iVar4 = *(int *)(param_1 + 0x39c);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x398) >> 5;
    }
    uVar5 = CONCAT44(uVar12,1);
    uVar10 = (ulonglong)piVar9 & 0xffffffff00000000;
    FUN_1424a9130(lVar6,0,iVar4,&local_90,uVar10,uVar5);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_90._0_2_ = 0xff3b;
    FUN_1424a8e40(param_1 + 0x3d0);
    if (*(short *)(param_1 + 0x3d8) < 0) {
      iVar4 = *(int *)(param_1 + 0x3dc);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x3d8) >> 5;
    }
    uVar5 = CONCAT44(uVar12,1);
    uVar10 = uVar10 & 0xffffffff00000000;
    FUN_1424a9130(param_1 + 0x3d0,0,iVar4,&local_90,uVar10,uVar5);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_90._0_2_ = 0xff09;
    FUN_1424a8e40(param_1 + 0x410);
    if (*(short *)(param_1 + 0x418) < 0) {
      iVar4 = *(int *)(param_1 + 0x41c);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x418) >> 5;
    }
    uVar5 = CONCAT44(uVar12,1);
    uVar10 = uVar10 & 0xffffffff00000000;
    FUN_1424a9130(param_1 + 0x410,0,iVar4,&local_90,uVar10,uVar5);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_90 = (undefined **)CONCAT62(local_90._2_6_,0xff3d);
    FUN_1424a8e40(param_1 + 0x450);
    if (*(short *)(param_1 + 0x458) < 0) {
      iVar4 = *(int *)(param_1 + 0x45c);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x458) >> 5;
    }
    FUN_1424a9130(param_1 + 0x450,0,iVar4,&local_90,uVar10 & 0xffffffff00000000,CONCAT44(uVar12,1));
  }
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  FUN_1426aa4c0(param_1 + 0xf0,"localeDisplayPattern",0,"keyTypePattern",&local_90);
  if ((local_88 & 1) != 0) {
    FUN_1424a7220(&local_150,"{0}={1}",0xffffffff,0);
    FUN_1424a7ca0(&local_90,&local_150);
    FUN_140859a90(&local_150);
  }
  FUN_1425fb600(param_1 + 0x340,&local_90,2,2,&local_4c);
  *(undefined2 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0;
  iVar4 = *(int *)(param_1 + 0x380);
  if (iVar4 - 0x103U < 2) {
    cVar3 = '\0';
    lVar6 = FUN_1424ebfe0(0,*(undefined8 *)(param_1 + 0x30),&local_4c);
    if (local_4c < 1) {
      local_150 = icu_64::LocaleDisplayNamesImpl::CapitalizationContextSink::vftable;
      local_148 = '\0';
      local_140 = param_1;
      FUN_1424ec6e0(lVar6,"contextTransforms",&local_150,&local_4c);
      if (local_4c == 2) {
        local_4c = 0;
LAB_1426aaf94:
        bVar1 = false;
        cVar3 = local_148;
      }
      else {
        if (local_4c < 1) goto LAB_1426aaf94;
        bVar1 = true;
        cVar3 = '\0';
      }
      thunk_FUN_1424b70d0(&local_150);
    }
    else {
      bVar1 = true;
    }
    if (lVar6 != 0) {
      FUN_1424ea9f0(lVar6);
    }
    if (bVar1) goto LAB_1426aaf11;
    iVar4 = *(int *)(param_1 + 0x380);
    if (cVar3 == '\0') goto LAB_1426aaec3;
  }
  else {
LAB_1426aaec3:
    if (iVar4 != 0x102) goto LAB_1426aaf11;
  }
  local_4c = 0;
  puVar7 = (undefined8 *)FUN_1424ba430(param_1 + 8,&local_4c);
  *(undefined8 **)(param_1 + 0x388) = puVar7;
  if (0 < local_4c) {
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
LAB_1426aaf11:
  FUN_140859a90(&local_90);
  FUN_140859a90(&local_d0);
  FUN_140859a90(&local_110);
  return;
}



// FUNCTION 1426aafc0 Unwind@1426aafc0 body=55 status=ok
// SIG undefined Unwind@1426aafc0(void)

void Unwind_1426aafc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 1426ab000 Unwind@1426ab000 body=55 status=ok
// SIG undefined Unwind@1426ab000(void)

void Unwind_1426ab000(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 1426ab040 Unwind@1426ab040 body=55 status=ok
// SIG undefined Unwind@1426ab040(void)

void Unwind_1426ab040(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1426ab080 FUN_1426ab080 body=226 status=ok
// SIG undefined FUN_1426ab080(void)

void FUN_1426ab080(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::LocaleDisplayNamesImpl::vftable;
  puVar1 = (undefined8 *)param_1[0x71];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x8a);
  FUN_140859a90(param_1 + 0x82);
  FUN_140859a90(param_1 + 0x7a);
  FUN_140859a90(param_1 + 0x72);
  thunk_FUN_140859a90(param_1 + 0x68);
  thunk_FUN_140859a90(param_1 + 0x60);
  thunk_FUN_140859a90(param_1 + 0x58);
  if (param_1[0x3b] != 0) {
    FUN_1424da110();
    param_1[0x3b] = 0;
  }
  FUN_1414b3f60(param_1 + 0x3c);
  if (param_1[0x1e] != 0) {
    FUN_1424da110();
    param_1[0x1e] = 0;
  }
  FUN_1414b3f60(param_1 + 0x1f);
  FUN_1414b3f60(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1426ab170 FUN_1426ab170 body=5 status=ok
// SIG undefined FUN_1426ab170(void)

longlong FUN_1426ab170(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1426ab180 FUN_1426ab180 body=7 status=ok
// SIG undefined FUN_1426ab180(void)

undefined4 FUN_1426ab180(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}



// FUNCTION 1426ab190 FUN_1426ab190 body=37 status=ok
// SIG undefined FUN_1426ab190(void)

undefined4 FUN_1426ab190(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x490);
  }
  else {
    if (param_2 == 1) {
      return *(undefined4 *)(param_1 + 0x380);
    }
    uVar1 = 0;
    if (param_2 == 0) {
      return *(undefined4 *)(param_1 + 0xe8);
    }
  }
  return uVar1;
}



// FUNCTION 1426ab1c0 FUN_1426ab1c0 body=320 status=ok
// SIG undefined FUN_1426ab1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1426ab1c0(longlong param_1,int param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_3 + 8) < 0) {
    if (*(int *)(param_3 + 0xc) < 1) {
      return param_3;
    }
  }
  else if (*(short *)(param_3 + 8) >> 5 < 1) {
    return param_3;
  }
  uVar2 = FUN_1424a8030(param_3,0,param_3,param_4,0xfffffffffffffffe);
  cVar1 = FUN_1424d8720(uVar2);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x388) != 0)) &&
     ((*(int *)(param_1 + 0x380) == 0x102 ||
      (*(char *)(param_1 + 0x494 + (longlong)param_2) != '\0')))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c7fecc0) && (FUN_144b3d300(&DAT_14c7fecc0), DAT_14c7fecc0 == -1)) {
      _DAT_14c7fecb0 = 0;
      uRam000000014c7fecb8 = 0;
      _DAT_14c7feca0 = 0;
      uRam000000014c7feca8 = 0;
      _DAT_14c7fec90 = 0;
      uRam000000014c7fec98 = 0;
      _DAT_14c7fec80 = 0;
      uRam000000014c7fec88 = 0;
      _DAT_14c7fec70 = 0;
      uRam000000014c7fec78 = 0;
      _Mtx_init_in_situ(&DAT_14c7fec70,2);
      atexit((_func_5014 *)&LAB_1426ab330);
      _Init_thread_footer(&DAT_14c7fecc0);
    }
    FUN_142501320(&DAT_14c7fec70);
    FUN_1425f56e0(param_3,*(undefined8 *)(param_1 + 0x388),param_1 + 8,0x300);
    FUN_142501400(&DAT_14c7fec70);
  }
  return param_3;
}



// FUNCTION 1426ab300 Unwind@1426ab300 body=39 status=ok
// SIG undefined Unwind@1426ab300(void)

void Unwind_1426ab300(void)

{
  FUN_142501400(&DAT_14c7fec70);
  return;
}



// FUNCTION 1426ab340 FUN_1426ab340 body=3339 status=ok
// SIG undefined FUN_1426ab340(void)

longlong FUN_1426ab340(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined ***in_stack_fffffffffffffd38;
  undefined ***pppuVar15;
  ulonglong uVar16;
  wchar_t *in_stack_fffffffffffffd40;
  undefined4 uVar18;
  ulonglong uVar17;
  ulonglong in_stack_fffffffffffffd50;
  undefined ***local_298;
  undefined ***local_290;
  undefined **local_1f0;
  ushort local_1e8;
  longlong local_1b0;
  undefined ***local_1a8;
  undefined8 local_1a0;
  undefined **local_168;
  ushort local_160;
  int local_15c;
  undefined ***local_128;
  undefined ****local_120;
  undefined **local_110;
  ushort local_108;
  int local_104;
  undefined **local_d0;
  ushort local_c8;
  int local_c4;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined ***local_68;
  undefined8 local_60;
  undefined ***local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0xd8) != '\0') {
    FUN_1424a7130(param_3);
    return param_3;
  }
  local_1f0 = &PTR_FUN_149e18960;
  local_1e8 = 2;
  puVar13 = &DAT_14a418301;
  if (*(char *)(param_2 + 8) != '\0') {
    puVar13 = (undefined1 *)(param_2 + 8);
  }
  pppuVar15 = (undefined ***)(param_2 + 0x14);
  local_58 = (undefined ***)(param_2 + 0x1a);
  local_78 = *(longlong *)(param_2 + 0xd0);
  local_70 = (longlong)*(int *)(param_2 + 0x20);
  cVar5 = *(char *)(param_2 + 0x14);
  cVar3 = *(char *)(param_2 + 0x1a);
  bVar14 = cVar5 != '\0';
  local_60 = CONCAT44(local_60._4_4_,(int)CONCAT71((int7)((ulonglong)param_3 >> 8),cVar3 != '\0'));
  local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(local_78 + local_70));
  local_88 = param_3;
  local_68 = pppuVar15;
  if (*(int *)(param_1 + 0xe8) == 1) {
    if ((cVar5 == '\0') || (cVar3 == '\0')) {
      if (cVar5 != '\0') goto LAB_1426ab49b;
      if (cVar3 == '\0') {
        local_60 = (ulonglong)local_60._4_4_ << 0x20;
        bVar14 = false;
        goto LAB_1426ab573;
      }
LAB_1426ab4fc:
      in_stack_fffffffffffffd40 = (wchar_t *)0x0;
      in_stack_fffffffffffffd38 = local_58;
      FUN_1426ac2a0(&local_298);
      FUN_1426ac350(param_1,&local_298,&local_1f0);
      uVar11 = (uint)local_60 & 0xff;
      if ((local_1e8 & 1) == 0) {
        uVar11 = local_1e8 & 1;
      }
      local_60 = CONCAT44(local_60._4_4_,uVar11);
    }
    else {
      in_stack_fffffffffffffd40 = L"_Common";
      in_stack_fffffffffffffd50 = 0;
      FUN_1426ac2a0(&local_298,local_70,puVar13,L"_Common",pppuVar15,L"_Common",local_58,0);
      FUN_1426ac350(param_1,&local_298,&local_1f0);
      if ((local_1e8 & 1) == 0) {
        bVar14 = false;
        local_60 = local_60 & 0xffffffff00000000;
        in_stack_fffffffffffffd38 = pppuVar15;
      }
      else {
LAB_1426ab49b:
        in_stack_fffffffffffffd40 = (wchar_t *)0x0;
        in_stack_fffffffffffffd38 = local_68;
        FUN_1426ac2a0(&local_298);
        FUN_1426ac350(param_1,&local_298,&local_1f0);
        if ((local_1e8 & 1) == 0) {
          bVar14 = false;
        }
        else if (cVar3 != '\0') goto LAB_1426ab4fc;
      }
    }
    if ((local_1e8 < 0x20) || ((local_1e8 & 1) != 0)) goto LAB_1426ab573;
  }
  else {
LAB_1426ab573:
    FUN_1426ac350(param_1,puVar13,&local_1f0);
  }
  lVar12 = local_88;
  local_110 = &PTR_FUN_149e18960;
  local_108 = 2;
  local_d0 = &PTR_FUN_149e18960;
  local_c8 = 2;
  local_4c = 0;
  if (bVar14) {
    if (*(int *)(param_1 + 0x490) == 0x201) {
      in_stack_fffffffffffffd38 = &local_d0;
      FUN_1426aa4c0(param_1 + 0xf0,"Scripts%short",0,local_68,in_stack_fffffffffffffd38);
      if ((local_c8 & 1) != 0) goto LAB_1426ab603;
    }
    else {
LAB_1426ab603:
      in_stack_fffffffffffffd38 = &local_d0;
      FUN_1426aa4c0(param_1 + 0xf0,"Scripts",0,local_68,in_stack_fffffffffffffd38);
    }
    iVar7 = local_c4;
    if (-1 < (short)local_c8) {
      iVar7 = (int)(short)local_c8 >> 5;
    }
    FUN_1424a9690(&local_110,&local_d0,0,iVar7);
  }
  if ((char)local_60 == '\0') goto LAB_1426ab748;
  if (*(int *)(param_1 + 0x490) == 0x201) {
    in_stack_fffffffffffffd38 = &local_d0;
    FUN_1426aa4c0(param_1 + 0x1d8,"Countries%short",0,local_58,in_stack_fffffffffffffd38);
    if ((local_c8 & 1) != 0) goto LAB_1426ab6aa;
  }
  else {
LAB_1426ab6aa:
    in_stack_fffffffffffffd38 = &local_d0;
    FUN_1426aa4c0(param_1 + 0x1d8,"Countries",0,local_58,in_stack_fffffffffffffd38);
  }
  if (local_108 < 0x20) {
    FUN_1424a7600(&local_110,&local_d0,0);
  }
  else {
    local_298 = &local_110;
    local_290 = &local_d0;
    local_168 = (undefined **)((ulonglong)local_168 & 0xffffffff00000000);
    in_stack_fffffffffffffd40 =
         (wchar_t *)((ulonglong)in_stack_fffffffffffffd40 & 0xffffffff00000000);
    in_stack_fffffffffffffd38 = (undefined ***)0x0;
    FUN_1425fbd60(param_1 + 0x2c0,&local_298,2,local_298,0,in_stack_fffffffffffffd40,&local_168);
  }
LAB_1426ab748:
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffd40 >> 0x20);
  if ((char)local_80 != '\0') {
    in_stack_fffffffffffffd38 = &local_d0;
    FUN_1426aa4c0(param_1 + 0xf0,"Variants",0,local_78 + local_70,&local_d0);
    uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffd40 >> 0x20);
    if (local_108 < 0x20) {
      FUN_1424a7600(&local_110,&local_d0,0);
    }
    else {
      local_298 = &local_110;
      local_168 = (undefined **)((ulonglong)local_168 & 0xffffffff00000000);
      uVar16 = (ulonglong)in_stack_fffffffffffffd40 & 0xffffffff00000000;
      in_stack_fffffffffffffd38 = (undefined ***)0x0;
      local_290 = &local_d0;
      FUN_1425fbd60(param_1 + 0x2c0,&local_298,2,local_298,0,uVar16,&local_168);
      uVar18 = (undefined4)(uVar16 >> 0x20);
    }
  }
  if (*(short *)(param_1 + 0x3d8) < 0) {
    iVar7 = *(int *)(param_1 + 0x3dc);
  }
  else {
    iVar7 = (int)*(short *)(param_1 + 0x3d8) >> 5;
  }
  if (*(short *)(param_1 + 0x398) < 0) {
    iVar10 = *(int *)(param_1 + 0x39c);
  }
  else {
    iVar10 = (int)*(short *)(param_1 + 0x398) >> 5;
  }
  local_60 = param_1 + 0x3d0;
  local_68 = (undefined ***)(param_1 + 0x390);
  iVar4 = local_104;
  if (-1 < (short)local_108) {
    iVar4 = (int)(short)local_108 >> 5;
  }
  uVar9 = CONCAT44(uVar18,iVar10);
  in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffff00000000;
  uVar16 = (ulonglong)in_stack_fffffffffffffd38 & 0xffffffff00000000;
  FUN_1424a8b50(&local_110,0,iVar4,local_68,uVar16,uVar9,local_60,in_stack_fffffffffffffd50,iVar7);
  if (*(short *)(param_1 + 0x458) < 0) {
    iVar7 = *(int *)(param_1 + 0x45c);
  }
  else {
    iVar7 = (int)*(short *)(param_1 + 0x458) >> 5;
  }
  if (*(short *)(param_1 + 0x418) < 0) {
    iVar10 = *(int *)(param_1 + 0x41c);
  }
  else {
    iVar10 = (int)*(short *)(param_1 + 0x418) >> 5;
  }
  lVar1 = param_1 + 0x450;
  lVar2 = param_1 + 0x410;
  if (-1 < (short)local_108) {
    local_104 = (int)(short)local_108 >> 5;
  }
  uVar17 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),iVar10);
  in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffff00000000;
  FUN_1424a8b50(&local_110,0,local_104,lVar2,uVar16 & 0xffffffff00000000,uVar17,lVar1,
                in_stack_fffffffffffffd50,iVar7);
  local_58 = (undefined ***)FUN_1424a52c0(param_2,&local_4c);
  if ((local_58 != (undefined ***)0x0) && (local_4c < 1)) {
    local_168 = &PTR_FUN_149e18960;
    local_160 = 2;
    local_78 = param_1 + 0xf0;
    local_70 = param_1 + 0x2c0;
    local_1b0 = param_1 + 0x340;
    local_80 = param_2;
    while( true ) {
      uVar18 = (undefined4)(uVar17 >> 0x20);
      lVar8 = (**(code **)((longlong)*local_58 + 0x20))(local_58,0,&local_4c);
      if (lVar8 == 0) break;
      local_298 = (undefined ***)((ulonglong)local_298 & 0xffffffffffffff00);
      FUN_1424a5490(local_80,lVar8,&local_298,100,&local_4c);
      if ((0 < local_4c) || (local_4c == -0x7c)) {
        FUN_140859a90(&local_168);
        goto LAB_1426ac072;
      }
      pppuVar15 = &local_d0;
      FUN_1426aa4c0(local_78,&DAT_14a7338d3,0,lVar8,pppuVar15);
      if (*(short *)(param_1 + 0x3d8) < 0) {
        iVar7 = *(int *)(param_1 + 0x3dc);
      }
      else {
        iVar7 = (int)*(short *)(param_1 + 0x3d8) >> 5;
      }
      if (*(short *)(param_1 + 0x398) < 0) {
        iVar10 = *(int *)(param_1 + 0x39c);
      }
      else {
        iVar10 = (int)*(short *)(param_1 + 0x398) >> 5;
      }
      iVar4 = local_c4;
      if (-1 < (short)local_c8) {
        iVar4 = (int)(short)local_c8 >> 5;
      }
      uVar9 = CONCAT44(uVar18,iVar10);
      in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffff00000000;
      uVar16 = (ulonglong)pppuVar15 & 0xffffffff00000000;
      FUN_1424a8b50(&local_d0,0,iVar4,local_68,uVar16,uVar9,local_60,in_stack_fffffffffffffd50,iVar7
                   );
      if (*(short *)(param_1 + 0x458) < 0) {
        iVar7 = *(int *)(param_1 + 0x45c);
      }
      else {
        iVar7 = (int)*(short *)(param_1 + 0x458) >> 5;
      }
      if (*(short *)(param_1 + 0x418) < 0) {
        iVar10 = *(int *)(param_1 + 0x41c);
      }
      else {
        iVar10 = (int)*(short *)(param_1 + 0x418) >> 5;
      }
      iVar4 = local_c4;
      if (-1 < (short)local_c8) {
        iVar4 = (int)(short)local_c8 >> 5;
      }
      uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),iVar10);
      in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffff00000000;
      uVar16 = uVar16 & 0xffffffff00000000;
      FUN_1424a8b50(&local_d0,0,iVar4,lVar2,uVar16,uVar9,lVar1,in_stack_fffffffffffffd50,iVar7);
      uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
      FUN_1426ac4e0(param_1,lVar8,&local_298,&local_168,uVar16);
      if (*(short *)(param_1 + 0x3d8) < 0) {
        iVar7 = *(int *)(param_1 + 0x3dc);
      }
      else {
        iVar7 = (int)*(short *)(param_1 + 0x3d8) >> 5;
      }
      if (*(short *)(param_1 + 0x398) < 0) {
        iVar10 = *(int *)(param_1 + 0x39c);
      }
      else {
        iVar10 = (int)*(short *)(param_1 + 0x398) >> 5;
      }
      iVar4 = local_15c;
      if (-1 < (short)local_160) {
        iVar4 = (int)(short)local_160 >> 5;
      }
      uVar9 = CONCAT44(uVar18,iVar10);
      in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffff00000000;
      uVar16 = uVar16 & 0xffffffff00000000;
      FUN_1424a8b50(&local_168,0,iVar4,local_68,uVar16,uVar9,local_60,in_stack_fffffffffffffd50,
                    iVar7);
      if (*(short *)(param_1 + 0x458) < 0) {
        iVar7 = *(int *)(param_1 + 0x45c);
      }
      else {
        iVar7 = (int)*(short *)(param_1 + 0x458) >> 5;
      }
      if (*(short *)(param_1 + 0x418) < 0) {
        iVar10 = *(int *)(param_1 + 0x41c);
      }
      else {
        iVar10 = (int)*(short *)(param_1 + 0x418) >> 5;
      }
      iVar4 = local_15c;
      if (-1 < (short)local_160) {
        iVar4 = (int)(short)local_160 >> 5;
      }
      uVar17 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),iVar10);
      in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffff00000000;
      FUN_1424a8b50(&local_168,0,iVar4,lVar2,uVar16 & 0xffffffff00000000,uVar17,lVar1,
                    in_stack_fffffffffffffd50,iVar7);
      FUN_1424a7220(&local_1a8,&local_298,0xffffffff,0);
      if ((local_160 & 1) == 0) {
        iVar7 = local_15c;
        if (-1 < (short)local_160) {
          iVar7 = (int)(short)local_160 >> 5;
        }
        if ((short)local_1a0 < 0) {
          iVar10 = local_1a0._4_4_;
        }
        else {
          iVar10 = (int)(short)local_1a0 >> 5;
        }
        if ((((ulonglong)local_1a0 & 1) == 0) && (iVar7 == iVar10)) {
          cVar5 = FUN_1412ae090(&local_168,&local_1a8);
          bVar14 = cVar5 != '\0';
          goto LAB_1426abd0f;
        }
        FUN_140859a90(&local_1a8);
LAB_1426abd68:
        if (local_108 < 0x20) {
          FUN_1424a7600(&local_110,&local_168,0);
        }
        else {
          local_1a8 = &local_110;
          local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffff00000000);
          uVar17 = uVar17 & 0xffffffff00000000;
          local_1a0 = &local_168;
          FUN_1425fbd60(local_70,&local_1a8,2,local_1a8,0,uVar17,&local_128);
        }
      }
      else {
        bVar14 = (bool)((byte)local_1a0 & 1);
LAB_1426abd0f:
        FUN_140859a90(&local_1a8);
        lVar12 = local_88;
        if (bVar14 == false) goto LAB_1426abd68;
        FUN_1424a7220(&local_1a8,lVar8,0xffffffff,0);
        if ((local_c8 & 1) == 0) {
          iVar7 = local_c4;
          if (-1 < (short)local_c8) {
            iVar7 = (int)(short)local_c8 >> 5;
          }
          if ((short)local_1a0 < 0) {
            iVar10 = local_1a0._4_4_;
          }
          else {
            iVar10 = (int)(short)local_1a0 >> 5;
          }
          if ((((ulonglong)local_1a0 & 1) == 0) && (iVar7 == iVar10)) {
            cVar5 = FUN_1412ae090(&local_d0,&local_1a8);
            bVar14 = cVar5 != '\0';
            goto LAB_1426abe2c;
          }
          FUN_140859a90(&local_1a8);
LAB_1426abeb3:
          local_1a8 = (undefined ***)&PTR_FUN_149e18960;
          local_1a0 = (undefined ***)CONCAT62(local_1a0._2_6_,2);
          FUN_1425fba70(local_1b0,&local_d0,&local_168,&local_1a8,&local_4c);
          if (local_108 < 0x20) {
            FUN_1424a7600(&local_110,&local_1a8,0);
          }
          else {
            local_128 = &local_110;
            local_8c = 0;
            uVar17 = uVar17 & 0xffffffff00000000;
            local_120 = &local_1a8;
            FUN_1425fbd60(local_70,&local_128,2,local_128,0,uVar17,&local_8c);
          }
          FUN_140859a90(&local_1a8);
        }
        else {
          bVar14 = (bool)((byte)local_1a0 & 1);
LAB_1426abe2c:
          FUN_140859a90(&local_1a8);
          lVar12 = local_88;
          if (bVar14 == false) goto LAB_1426abeb3;
          if (local_108 < 0x20) {
            FUN_1424a7600(&local_110,&local_d0,0);
          }
          else {
            local_1a8 = &local_110;
            local_1a0 = &local_d0;
            local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffff00000000);
            uVar17 = uVar17 & 0xffffffff00000000;
            FUN_1425fbd60(local_70,&local_1a8,2,local_1a8,0,uVar17,&local_128);
          }
          local_1a8 = (undefined ***)CONCAT62(local_1a8._2_6_,0x3d);
          uVar9 = FUN_1424a6cf0(&local_110,&local_1a8,0,1);
          iVar7 = local_15c;
          if (-1 < (short)local_160) {
            iVar7 = (int)(short)local_160 >> 5;
          }
          FUN_1424a9690(uVar9,&local_168,0,iVar7);
        }
      }
    }
    FUN_140859a90(&local_168);
  }
  if (local_108 < 0x20) {
    FUN_1424a7c80(lVar12,&local_1f0);
    FUN_1426ab1c0(param_1,0,lVar12);
  }
  else {
    uVar6 = 2;
    if ((*(ushort *)(lVar12 + 8) & 1) == 0) {
      uVar6 = *(ushort *)(lVar12 + 8) & 0x1f;
    }
    *(ushort *)(lVar12 + 8) = uVar6;
    FUN_1425fba70(param_1 + 0x300,&local_1f0,&local_110,lVar12,&local_4c);
    FUN_1426ab1c0(param_1,0,lVar12);
  }
  if (local_58 != (undefined ***)0x0) {
LAB_1426ac072:
    (*(code *)**local_58)(local_58,1);
  }
  FUN_140859a90(&local_d0);
  FUN_140859a90(&local_110);
  FUN_140859a90(&local_1f0);
  return lVar12;
}



// FUNCTION 1426ac0c0 Unwind@1426ac0c0 body=58 status=ok
// SIG undefined Unwind@1426ac0c0(void)

void Unwind_1426ac0c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 1426ac100 Unwind@1426ac100 body=58 status=ok
// SIG undefined Unwind@1426ac100(void)

void Unwind_1426ac100(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 1426ac140 Unwind@1426ac140 body=58 status=ok
// SIG undefined Unwind@1426ac140(void)

void Unwind_1426ac140(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 1426ac180 Unwind@1426ac180 body=58 status=ok
// SIG undefined Unwind@1426ac180(void)

void Unwind_1426ac180(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x180);
  return;
}



// FUNCTION 1426ac1c0 Unwind@1426ac1c0 body=73 status=ok
// SIG undefined Unwind@1426ac1c0(void)

void Unwind_1426ac1c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x290) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x290))(*(undefined8 **)(param_2 + 0x290),1);
  }
  return;
}



// FUNCTION 1426ac210 Unwind@1426ac210 body=70 status=ok
// SIG undefined Unwind@1426ac210(void)

void Unwind_1426ac210(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x218);
  FUN_140859a90(param_2 + 0x1d8);
  return;
}



// FUNCTION 1426ac260 Unwind@1426ac260 body=55 status=ok
// SIG undefined Unwind@1426ac260(void)

void Unwind_1426ac260(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 1426ac2a0 FUN_1426ac2a0 body=156 status=ok
// SIG undefined FUN_1426ac2a0(void)

void FUN_1426ac2a0(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_res20 = param_4;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_10 = &local_res20;
    if (param_3 == (char *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      puVar1 = local_10;
      do {
        lVar3 = lVar2;
        for (; (lVar2 = 0x9c, lVar3 != 0x9c && (lVar2 = lVar3, *param_3 != '\0'));
            param_3 = param_3 + 1) {
          *(char *)(param_1 + lVar3) = *param_3;
          lVar3 = lVar3 + 1;
        }
        local_10 = puVar1 + 1;
        param_3 = (char *)*puVar1;
        puVar1 = local_10;
      } while (param_3 != (char *)0x0);
    }
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1426ac350 FUN_1426ac350 body=381 status=ok
// SIG undefined FUN_1426ac350(void)

void FUN_1426ac350(longlong param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 *local_50;
  int *local_48;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x490) == 0x201) {
    local_34 = 0;
    local_38 = 0;
    local_48 = &local_34;
    local_50 = &local_38;
    local_58 = param_2;
    uVar3 = FUN_142564c60(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x120),
                          "Languages%short",0);
    uVar2 = local_38;
    if (local_34 < 1) {
      FUN_1424a8e40(param_3);
      if (*(short *)(param_3 + 8) < 0) {
        iVar4 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_3 + 8) >> 5;
      }
      local_50 = (undefined4 *)CONCAT44(local_50._4_4_,uVar2);
      local_58 = local_58 & 0xffffffff00000000;
      FUN_1424a9130(param_3,0,iVar4,uVar3);
      bVar1 = *(byte *)(param_3 + 8);
    }
    else {
      FUN_1424a7130(param_3);
      bVar1 = *(byte *)(param_3 + 8);
    }
    if ((bVar1 & 1) == 0) goto LAB_1426ac4c0;
  }
  local_34 = 0;
  local_38 = 0;
  local_48 = &local_34;
  local_50 = &local_38;
  local_58 = param_2;
  uVar3 = FUN_142564c60(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x120),"Languages"
                        ,0);
  uVar2 = local_38;
  if (local_34 < 1) {
    FUN_1424a8e40(param_3);
    if (*(short *)(param_3 + 8) < 0) {
      iVar4 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_3 + 8) >> 5;
    }
    local_50 = (undefined4 *)CONCAT44(local_50._4_4_,uVar2);
    local_58 = local_58 & 0xffffffff00000000;
    FUN_1424a9130(param_3,0,iVar4,uVar3);
  }
  else {
    FUN_1424a7130(param_3);
  }
LAB_1426ac4c0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1426ac4e0 FUN_1426ac4e0 body=398 status=ok
// SIG undefined FUN_1426ac4e0(void)

longlong FUN_1426ac4e0(longlong param_1,char *param_2,undefined8 param_3,longlong param_4,
                      char param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 local_88 [68];
  undefined4 local_44;
  int local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 uVar6;
  
  local_38 = 0xfffffffffffffffe;
  iVar1 = strcmp(param_2,"currency");
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x490) != 0x201) ||
       (FUN_1426aa4c0(param_1 + 0xf0,"Types%short",param_2,param_3,param_4),
       (*(byte *)(param_4 + 8) & 1) != 0)) {
      FUN_1426aa4c0(param_1 + 0xf0,"Types",param_2,param_3,param_4);
    }
    if (param_5 == '\0') {
      FUN_1426ab1c0(param_1,5,param_4);
    }
    return param_4;
  }
  local_40 = 0;
  FUN_1424a7220(local_88,param_3,0xffffffff,0);
  local_39 = 0;
  uVar2 = FUN_1424a5500(param_1 + 8);
  uVar3 = FUN_1424a8e50(local_88);
  piVar5 = &local_40;
  puVar4 = &local_44;
  uVar2 = FUN_14253b990(uVar3,uVar2,1,&local_39,puVar4,piVar5);
  uVar6 = (undefined4)((ulonglong)piVar5 >> 0x20);
  if (local_40 < 1) {
    FUN_1424a8e40(param_4);
    if (*(short *)(param_4 + 8) < 0) {
      iVar1 = *(int *)(param_4 + 0xc);
    }
    else {
      iVar1 = (int)*(short *)(param_4 + 8) >> 5;
    }
    FUN_1424a9130(param_4,0,iVar1,uVar2,(ulonglong)puVar4 & 0xffffffff00000000,
                  CONCAT44(uVar6,local_44));
    if (param_5 == '\0') {
      FUN_1426ab1c0(param_1,5,param_4);
    }
  }
  else {
    FUN_1424a7c80(param_4,local_88);
  }
  FUN_140859a90(local_88);
  return param_4;
}



// FUNCTION 1426ac670 Unwind@1426ac670 body=47 status=ok
// SIG undefined Unwind@1426ac670(void)

void Unwind_1426ac670(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426ac6a0 FUN_1426ac6a0 body=105 status=ok
// SIG undefined FUN_1426ac6a0(void)

undefined8 FUN_1426ac6a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_108 [224];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1412ae150(local_108,param_2,0,0,0);
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_108,param_3);
  FUN_1414b3f60(local_108);
  return uVar1;
}



// FUNCTION 1426ac710 Unwind@1426ac710 body=39 status=ok
// SIG undefined Unwind@1426ac710(void)

void Unwind_1426ac710(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1426ac740 FUN_1426ac740 body=218 status=ok
// SIG undefined FUN_1426ac740(void)

void FUN_1426ac740(longlong param_1,char *param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = strcmp("root",param_2);
  if (iVar1 != 0) {
    pcVar2 = strchr(param_2,0x5f);
    if (pcVar2 == (char *)0x0) {
      if (*(int *)(param_1 + 0x490) == 0x201) {
        local_68 = param_3;
        FUN_1426aa4c0(param_1 + 0xf0,"Languages%short",0,param_2);
        if ((*(byte *)(param_3 + 8) & 1) != 0) goto LAB_1426ac7e2;
      }
      else {
LAB_1426ac7e2:
        local_68 = param_3;
        FUN_1426aa4c0(param_1 + 0xf0,"Languages",0,param_2);
      }
      FUN_1426ab1c0(param_1,0,param_3);
      goto LAB_1426ac80d;
    }
  }
  FUN_1424a7220(local_60,param_2,0xffffffff,0);
  FUN_1424a7ca0(param_3,local_60);
  FUN_140859a90(local_60);
LAB_1426ac80d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 1426ac830 FUN_1426ac830 body=117 status=ok
// SIG undefined FUN_1426ac830(void)

void FUN_1426ac830(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (*(int *)(param_1 + 0x490) == 0x201) {
    FUN_1426aa4c0(param_1 + 0xf0,"Scripts%short",0,param_2,param_3);
    if ((*(byte *)(param_3 + 8) & 1) == 0) goto LAB_1426ac88e;
  }
  FUN_1426aa4c0(param_1 + 0xf0,"Scripts",0,param_2,param_3);
LAB_1426ac88e:
  FUN_1426ab1c0(param_1,1,param_3);
  return;
}



// FUNCTION 1426ac8b0 FUN_1426ac8b0 body=124 status=ok
// SIG undefined FUN_1426ac8b0(void)

void FUN_1426ac8b0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142563570(param_2);
  if (*(int *)(param_1 + 0x490) == 0x201) {
    FUN_1426aa4c0(param_1 + 0xf0,"Scripts%short",0,uVar1,param_3);
    if ((*(byte *)(param_3 + 8) & 1) == 0) goto LAB_1426ac915;
  }
  FUN_1426aa4c0(param_1 + 0xf0,"Scripts",0,uVar1,param_3);
LAB_1426ac915:
  FUN_1426ab1c0(param_1,1,param_3);
  return;
}



// FUNCTION 1426ac930 FUN_1426ac930 body=117 status=ok
// SIG undefined FUN_1426ac930(void)

void FUN_1426ac930(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (*(int *)(param_1 + 0x490) == 0x201) {
    FUN_1426aa4c0(param_1 + 0x1d8,"Countries%short",0,param_2,param_3);
    if ((*(byte *)(param_3 + 8) & 1) == 0) goto LAB_1426ac98e;
  }
  FUN_1426aa4c0(param_1 + 0x1d8,"Countries",0,param_2,param_3);
LAB_1426ac98e:
  FUN_1426ab1c0(param_1,2,param_3);
  return;
}



// FUNCTION 1426ac9b0 FUN_1426ac9b0 body=64 status=ok
// SIG undefined FUN_1426ac9b0(void)

void FUN_1426ac9b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426aa4c0(param_1 + 0xf0,"Variants",0,param_2,param_3);
  FUN_1426ab1c0(param_1,3,param_3);
  return;
}



// FUNCTION 1426ac9f0 FUN_1426ac9f0 body=64 status=ok
// SIG undefined FUN_1426ac9f0(void)

void FUN_1426ac9f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426aa4c0(param_1 + 0xf0,&DAT_14a7338d3,0,param_2,param_3);
  FUN_1426ab1c0(param_1,4,param_3);
  return;
}



// FUNCTION 1426aca30 FUN_1426aca30 body=27 status=ok
// SIG undefined FUN_1426aca30(void)

undefined8 FUN_1426aca30(void)

{
  undefined8 in_R9;
  
  FUN_1426ac4e0();
  return in_R9;
}



// FUNCTION 1426aca50 FUN_1426aca50 body=71 status=ok
// SIG undefined FUN_1426aca50(void)

longlong FUN_1426aca50(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = thunk_FUN_1424da030(0x4a0);
  if (lVar1 != 0) {
    FUN_1426aa5e0(lVar1,param_1,param_2,param_4,lVar1,uVar2);
  }
  return lVar1;
}



// FUNCTION 1426acaa0 Unwind@1426acaa0 body=34 status=ok
// SIG undefined Unwind@1426acaa0(void)

void Unwind_1426acaa0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1426acad0 FUN_1426acad0 body=38 status=ok
// SIG undefined FUN_1426acad0(void)

undefined8 FUN_1426acad0(undefined8 param_1,int param_2)

{
  FUN_1426ab080();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426acb00 FUN_1426acb00 body=38 status=ok
// SIG undefined FUN_1426acb00(void)

undefined8 FUN_1426acb00(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426acb30 FUN_1426acb30 body=414 status=ok
// SIG undefined FUN_1426acb30(void)

void FUN_1426acb30(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,int *param_5)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined1 local_78 [40];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_78,param_5);
  if (*param_5 < 1) {
    cVar1 = FUN_14258c4f0(local_78,0,&local_50,param_3);
    if (cVar1 != '\0') {
      iVar4 = 1;
      do {
        _Str1 = local_50;
        iVar2 = strcmp(local_50,"key");
        if (iVar2 == 0) {
          lVar5 = 4;
LAB_1426acca0:
          local_7c = 0;
          lVar3 = (**(code **)(*param_3 + 0x38))(param_3,&local_7c,param_5);
          if (0 < *param_5) break;
          if ((1 < local_7c) &&
             (*(int *)(lVar3 + (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x380) != 0x103)
                               * 4) != 0)) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x494 + lVar5) = 1;
            *(undefined1 *)(param_1 + 8) = 1;
          }
        }
        else {
          iVar2 = strcmp(_Str1,"keyValue");
          if (iVar2 == 0) {
            lVar5 = 5;
            goto LAB_1426acca0;
          }
          iVar2 = strcmp(_Str1,"languages");
          if (iVar2 == 0) {
            lVar5 = 0;
            goto LAB_1426acca0;
          }
          iVar2 = strcmp(_Str1,"script");
          if (iVar2 == 0) {
            lVar5 = 1;
            goto LAB_1426acca0;
          }
          iVar2 = strcmp(_Str1,"territory");
          if (iVar2 == 0) {
            lVar5 = 2;
            goto LAB_1426acca0;
          }
          iVar2 = strcmp(_Str1,"variant");
          if (iVar2 == 0) {
            lVar5 = 3;
            goto LAB_1426acca0;
          }
        }
        cVar1 = FUN_14258c4f0(local_78,iVar4,&local_50,param_3);
        iVar4 = iVar4 + 1;
      } while (cVar1 != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1426acd00 FUN_1426acd00 body=9 status=ok
// SIG undefined FUN_1426acd00(void)

void FUN_1426acd00(longlong param_1)

{
  FUN_142512880(param_1 + 8);
  return;
}



// FUNCTION 1426acd10 FUN_1426acd10 body=185 status=ok
// SIG undefined FUN_1426acd10(void)

undefined4
FUN_1426acd10(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
             )

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_14250e6e0(param_2);
  uVar3 = FUN_14250e920(param_2);
  iVar4 = FUN_14250e6e0(param_2);
  if (iVar4 < param_4) {
    do {
      cVar1 = FUN_142512880(param_1 + 1,uVar3);
      if (cVar1 == '\0') break;
      FUN_14250e570(param_2);
      uVar3 = FUN_14250e920(param_2);
      iVar4 = FUN_14250e6e0(param_2);
    } while (iVar4 < param_4);
  }
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,uVar2,iVar4,param_5);
  FUN_14250e700(param_2,(longlong)iVar4);
  return uVar2;
}



// FUNCTION 1426acdd0 FUN_1426acdd0 body=33 status=ok
// SIG undefined FUN_1426acdd0(void)

void FUN_1426acdd0(longlong param_1)

{
  FUN_142511c30(param_1 + 8);
  FUN_142514740(param_1 + 8);
  return;
}



// FUNCTION 1426ace00 FUN_1426ace00 body=167 status=ok
// SIG undefined FUN_1426ace00(void)

void FUN_1426ace00(int *param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14250e6e0(param_2);
  if (param_1[2] == iVar1) {
LAB_1426ace76:
    iVar2 = *param_1;
    if (iVar2 < 1) goto LAB_1426ace93;
  }
  else {
    param_1[2] = iVar1;
    iVar2 = (**(code **)(*param_3 + 8))
                      (param_3,param_2,param_4 - iVar1,0x14,param_1 + 5,param_1 + 0x19,0,param_1 + 1
                      );
    *param_1 = iVar2;
    if (iVar2 < 1) {
      FUN_14250e700(param_2,(longlong)iVar1);
      goto LAB_1426ace76;
    }
  }
  FUN_14250e700(param_2,(longlong)iVar1 + (longlong)param_1[(ulonglong)(iVar2 - 1) + 5]);
  iVar2 = *param_1;
LAB_1426ace93:
  param_1[4] = iVar2 + -1;
  param_1[3] = iVar2 + -1;
  return;
}



// FUNCTION 1426aceb0 FUN_1426aceb0 body=489 status=ok
// SIG undefined FUN_1426aceb0(void)

longlong * FUN_1426aceb0(longlong *param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong local_a0 [8];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1425e5bc0();
  *param_1 = (longlong)icu_64::DictionaryBreakEngine::vftable;
  local_60 = param_1 + 1;
  local_30 = param_1;
  FUN_142511900();
  *local_30 = (longlong)icu_64::ThaiBreakEngine::vftable;
  local_40 = local_30 + 0x1a;
  FUN_142511900();
  local_38 = local_30 + 0x33;
  FUN_142511900();
  local_50 = local_30 + 0x4c;
  FUN_142511900();
  local_48 = local_30 + 0x65;
  FUN_142511900();
  local_58 = local_30 + 0x7e;
  FUN_142511900();
  local_30[0x97] = param_2;
  FUN_1424a7060(local_a0,1,L"[[:Thai:]&[:LineBreak=SA:]]",0xffffffff);
  FUN_1425c5c30(local_40,local_a0,param_3);
  FUN_140859a90(local_a0);
  if (*param_3 < 1) {
    (**(code **)(*local_30 + 0x18))(local_30,local_40);
  }
  FUN_1424a7060(local_a0,1,L"[[:Thai:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  plVar1 = local_58;
  FUN_1425c5c30(local_58,local_a0,param_3);
  FUN_140859a90(local_a0);
  FUN_142513960(plVar1,0x20);
  FUN_142511c30(local_38,local_40);
  FUN_1425144c0(local_38,0xe31);
  FUN_142514420(local_38,0xe40,0xe44);
  FUN_142511a00(local_50,0xe01,0xe2e);
  FUN_142511a00(local_50,0xe40,0xe44);
  FUN_142513960(local_48,0xe2f);
  FUN_142513960(local_48,0xe46);
  FUN_142514740(local_58);
  FUN_142514740(local_38);
  FUN_142514740(local_50);
  FUN_142514740(local_48);
  return local_30;
}



// FUNCTION 1426ad0a0 Unwind@1426ad0a0 body=39 status=ok
// SIG undefined Unwind@1426ad0a0(void)

void Unwind_1426ad0a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426ad0d0 Unwind@1426ad0d0 body=39 status=ok
// SIG undefined Unwind@1426ad0d0(void)

void Unwind_1426ad0d0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1426ad100 Unwind@1426ad100 body=39 status=ok
// SIG undefined Unwind@1426ad100(void)

void Unwind_1426ad100(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1426ad130 Unwind@1426ad130 body=39 status=ok
// SIG undefined Unwind@1426ad130(void)

void Unwind_1426ad130(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 1426ad160 Unwind@1426ad160 body=39 status=ok
// SIG undefined Unwind@1426ad160(void)

void Unwind_1426ad160(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 1426ad190 Unwind@1426ad190 body=39 status=ok
// SIG undefined Unwind@1426ad190(void)

void Unwind_1426ad190(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 1426ad1c0 Unwind@1426ad1c0 body=61 status=ok
// SIG undefined Unwind@1426ad1c0(void)

void Unwind_1426ad1c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x98);
  *puVar1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x68));
  FUN_1425e5bd0(puVar1);
  return;
}



// FUNCTION 1426ad200 Unwind@1426ad200 body=39 status=ok
// SIG undefined Unwind@1426ad200(void)

void Unwind_1426ad200(undefined8 param_1,longlong param_2)

{
  FUN_1425e5bd0(*(undefined8 *)(param_2 + 0x98));
  return;
}



// FUNCTION 1426ad230 Unwind@1426ad230 body=39 status=ok
// SIG undefined Unwind@1426ad230(void)

void Unwind_1426ad230(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1426ad260 FUN_1426ad260 body=132 status=ok
// SIG undefined FUN_1426ad260(void)

void FUN_1426ad260(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::ThaiBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x97];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425121d0(param_1 + 0x7e);
  FUN_1425121d0(param_1 + 0x65);
  FUN_1425121d0(param_1 + 0x4c);
  FUN_1425121d0(param_1 + 0x33);
  FUN_1425121d0(param_1 + 0x1a);
  *param_1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(param_1 + 1);
  FUN_1425e5bd0(param_1);
  return;
}



// FUNCTION 1426ad2f0 FUN_1426ad2f0 body=1672 status=ok
// SIG undefined FUN_1426ad2f0(void)

uint FUN_1426ad2f0(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  int local_29c;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  uint *local_280;
  longlong local_278;
  longlong local_270;
  uint local_268 [25];
  int aiStack_204 [20];
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  
  lVar16 = (longlong)param_3;
  FUN_14250e700(param_2,lVar16);
  FUN_14250e380(param_2,4);
  lVar9 = FUN_14250e6e0(param_2);
  uVar15 = 0;
  if (lVar9 < param_4) {
    FUN_14250e700(param_2,lVar16);
    local_29c = 0;
    local_268[0] = 0;
    local_268[1] = 0;
    local_268[2] = 0xffffffff;
    local_268[3] = 0;
    local_268[4] = 0;
    local_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0xffffffff;
    uStack_1a8 = 0;
    local_1a4 = 0;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    local_f0 = 0;
    FUN_14250e700(param_2,lVar16);
    local_270 = param_1 + 0x198;
    local_278 = param_1 + 0x260;
    local_298 = param_1 + 0x3f0;
    local_288 = param_1 + 0x328;
    uVar15 = 0;
    do {
      local_290 = FUN_14250e6e0(param_2);
      if (param_4 <= (int)local_290) break;
      uVar10 = (ulonglong)(uVar15 % 3);
      iVar3 = FUN_1426ace00(local_268 + uVar10 * 0x2d,param_2,*(undefined8 *)(param_1 + 0x4b8),
                            param_4);
      if (iVar3 == 1) {
        FUN_14250e700(param_2,(longlong)
                              (int)local_268[uVar10 * 0x2d +
                                             (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5] +
                              (longlong)(int)local_268[uVar10 * 0x2d + 2]);
        uVar13 = local_268[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5];
        iVar3 = aiStack_204[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3]];
        uVar15 = uVar15 + 1;
      }
      else {
        uVar13 = 0;
        if (iVar3 < 2) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_14250e6e0(param_2);
          if (iVar3 < param_4) {
            uVar11 = (ulonglong)((uVar15 + 1) % 3);
            puVar14 = local_268 + uVar10 * 0x2d + 4;
            do {
              iVar3 = FUN_1426ace00(local_268 + uVar11 * 0x2d,param_2,
                                    *(undefined8 *)(param_1 + 0x4b8),param_4);
              if (0 < iVar3) {
                local_268[uVar10 * 0x2d + 3] = *puVar14;
                iVar3 = FUN_14250e6e0(param_2);
                if (param_4 <= iVar3) break;
                while( true ) {
                  iVar3 = FUN_1426ace00(local_268 + (ulonglong)((uVar15 + 2) % 3) * 0x2d,param_2,
                                        *(undefined8 *)(param_1 + 0x4b8),param_4);
                  if (iVar3 != 0) {
                    local_268[uVar10 * 0x2d + 3] = *puVar14;
                    goto LAB_1426ad5bf;
                  }
                  if ((int)local_268[uVar11 * 0x2d + 4] < 1) break;
                  uVar13 = local_268[uVar11 * 0x2d + 4] - 1;
                  local_268[uVar11 * 0x2d + 4] = uVar13;
                  FUN_14250e700(param_2,(longlong)
                                        (int)local_268[uVar11 * 0x2d + (ulonglong)uVar13 + 5] +
                                        (longlong)(int)local_268[uVar11 * 0x2d + 2]);
                }
              }
              if ((int)*puVar14 < 1) break;
              uVar13 = *puVar14 - 1;
              *puVar14 = uVar13;
              FUN_14250e700(param_2,(longlong)(int)local_268[uVar10 * 0x2d + (ulonglong)uVar13 + 5]
                                    + (longlong)(int)local_268[uVar10 * 0x2d + 2]);
            } while( true );
          }
LAB_1426ad5bf:
          FUN_14250e700(param_2,(longlong)
                                (int)local_268[uVar10 * 0x2d +
                                               (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5] +
                                (longlong)(int)local_268[uVar10 * 0x2d + 2]);
          uVar13 = local_268[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5];
          iVar3 = aiStack_204[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3]];
          uVar15 = uVar15 + 1;
        }
      }
      lVar9 = local_298;
      iVar4 = FUN_14250e6e0(param_2);
      if ((iVar3 < 3) && (iVar4 < param_4)) {
        iVar3 = FUN_1426ace00(local_268 + (ulonglong)(uVar15 % 3) * 0x2d,param_2,
                              *(undefined8 *)(param_1 + 0x4b8),param_4);
        if ((iVar3 < 1) &&
           ((uVar13 == 0 || ((int)local_268[(ulonglong)(uVar15 % 3) * 0x2d + 1] < 3)))) {
          iVar12 = (int)local_290 + uVar13;
          iVar3 = FUN_14250e6e0(param_2);
          uVar5 = FUN_14250e570(param_2);
          iVar4 = FUN_14250e6e0(param_2);
          iVar4 = iVar4 - iVar3;
          iVar3 = (param_4 - iVar12) - iVar4;
          if (0 < iVar3) {
            local_280 = local_268 + (ulonglong)((uVar15 + 1) % 3) * 0x2d;
            do {
              uVar7 = FUN_14250e920(param_2);
              cVar2 = FUN_142512880(local_270,uVar5);
              if ((cVar2 != '\0') && (cVar2 = FUN_142512880(local_278,uVar7), cVar2 != '\0')) {
                iVar8 = FUN_1426ace00(local_280,param_2,*(undefined8 *)(param_1 + 0x4b8),param_4);
                FUN_14250e700(param_2,(longlong)(iVar4 + iVar12));
                if (0 < iVar8) break;
              }
              iVar8 = FUN_14250e6e0(param_2);
              uVar5 = FUN_14250e570(param_2);
              iVar6 = FUN_14250e6e0(param_2);
              iVar6 = iVar6 - iVar8;
              iVar4 = iVar4 + iVar6;
              iVar8 = iVar3 - iVar6;
              bVar1 = iVar6 <= iVar3;
              iVar3 = iVar8;
            } while (iVar8 != 0 && bVar1);
          }
          uVar15 = uVar15 + ((int)uVar13 < 1);
          uVar13 = iVar4 + uVar13;
          lVar9 = local_298;
        }
        else {
          FUN_14250e700(param_2,(longlong)(int)((int)local_290 + uVar13));
        }
      }
      while (iVar3 = FUN_14250e6e0(param_2), iVar3 < param_4) {
        uVar5 = FUN_14250e920(param_2);
        cVar2 = FUN_142512880(lVar9,uVar5);
        if (cVar2 == '\0') break;
        FUN_14250e570(param_2);
        iVar4 = FUN_14250e6e0(param_2);
        uVar13 = (uVar13 - iVar3) + iVar4;
      }
      iVar3 = FUN_14250e6e0(param_2);
      if ((iVar3 < param_4) && (0 < (int)uVar13)) {
        iVar3 = FUN_1426ace00(local_268 + (ulonglong)(uVar15 % 3) * 0x2d,param_2,
                              *(undefined8 *)(param_1 + 0x4b8),param_4);
        if (iVar3 < 1) {
          iVar3 = FUN_14250e920(param_2);
          cVar2 = FUN_142512880(local_288,iVar3);
          if (cVar2 != '\0') {
            if (iVar3 != 0xe2f) {
LAB_1426ad8e3:
              if (iVar3 == 0xe46) {
                iVar3 = FUN_14250e620(param_2);
                FUN_14250e570(param_2);
                if (iVar3 != 0xe46) {
                  iVar3 = FUN_14250e6e0(param_2);
                  FUN_14250e570(param_2);
                  iVar4 = FUN_14250e6e0(param_2);
                  uVar13 = (uVar13 - iVar3) + iVar4;
                }
              }
              goto LAB_1426ad930;
            }
            uVar5 = FUN_14250e620(param_2);
            cVar2 = FUN_142512880(local_288,uVar5);
            FUN_14250e570(param_2);
            if (cVar2 == '\0') {
              iVar3 = FUN_14250e6e0(param_2);
              FUN_14250e570(param_2);
              iVar4 = FUN_14250e6e0(param_2);
              uVar13 = (uVar13 - iVar3) + iVar4;
              iVar3 = FUN_14250e920(param_2);
              goto LAB_1426ad8e3;
            }
            goto LAB_1426ad938;
          }
        }
        FUN_14250e700(param_2,(longlong)(int)((int)local_290 + uVar13));
LAB_1426ad938:
        iVar3 = *(int *)(param_5 + 8);
        if ((iVar3 < -1) || (*(int *)(param_5 + 0xc) <= iVar3)) {
          cVar2 = FUN_1425182c0(param_5,iVar3 + 1,&local_29c);
          if (cVar2 == '\0') goto LAB_1426ad3f2;
          iVar3 = *(int *)(param_5 + 8);
        }
        *(uint *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar3 * 4) = uVar13 + (int)local_290;
        *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
      }
      else {
LAB_1426ad930:
        if (0 < (int)uVar13) goto LAB_1426ad938;
      }
LAB_1426ad3f2:
    } while (local_29c < 1);
    if (*(int *)(param_5 + 8) < 1) {
      if (0 < param_4) {
        return uVar15;
      }
    }
    else {
      uVar13 = *(int *)(param_5 + 8) - 1;
      if (*(int *)(*(longlong *)(param_5 + 0x18) + (ulonglong)uVar13 * 4) < param_4) {
        return uVar15;
      }
      *(uint *)(param_5 + 8) = uVar13;
    }
    uVar15 = uVar15 - 1;
  }
  return uVar15;
}



// FUNCTION 1426ad9b0 FUN_1426ad9b0 body=438 status=ok
// SIG undefined FUN_1426ad9b0(void)

longlong * FUN_1426ad9b0(longlong *param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong local_98 [8];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1425e5bc0();
  *param_1 = (longlong)icu_64::DictionaryBreakEngine::vftable;
  local_58 = param_1 + 1;
  local_30 = param_1;
  FUN_142511900();
  *local_30 = (longlong)icu_64::LaoBreakEngine::vftable;
  local_40 = local_30 + 0x1a;
  FUN_142511900();
  local_48 = local_30 + 0x33;
  FUN_142511900();
  local_38 = local_30 + 0x4c;
  FUN_142511900();
  local_50 = local_30 + 0x65;
  FUN_142511900();
  local_30[0x7e] = param_2;
  FUN_1424a7060(local_98,1,L"[[:Laoo:]&[:LineBreak=SA:]]",0xffffffff);
  FUN_1425c5c30(local_40,local_98,param_3);
  FUN_140859a90(local_98);
  if (*param_3 < 1) {
    (**(code **)(*local_30 + 0x18))(local_30,local_40);
  }
  FUN_1424a7060(local_98,1,L"[[:Laoo:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  plVar1 = local_50;
  FUN_1425c5c30(local_50,local_98,param_3);
  FUN_140859a90(local_98);
  FUN_142513960(plVar1,0x20);
  FUN_142511c30(local_48,local_40);
  FUN_142514420(local_48,0xec0,0xec4);
  FUN_142511a00(local_38,0xe81,0xeae);
  FUN_142511a00(local_38,0xedc,0xedd);
  FUN_142511a00(local_38,0xec0,0xec4);
  FUN_142514740(local_50);
  FUN_142514740(local_48);
  FUN_142514740(local_38);
  return local_30;
}



// FUNCTION 1426adb70 Unwind@1426adb70 body=39 status=ok
// SIG undefined Unwind@1426adb70(void)

void Unwind_1426adb70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426adba0 Unwind@1426adba0 body=39 status=ok
// SIG undefined Unwind@1426adba0(void)

void Unwind_1426adba0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1426adbd0 Unwind@1426adbd0 body=39 status=ok
// SIG undefined Unwind@1426adbd0(void)

void Unwind_1426adbd0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1426adc00 Unwind@1426adc00 body=39 status=ok
// SIG undefined Unwind@1426adc00(void)

void Unwind_1426adc00(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1426adc30 Unwind@1426adc30 body=39 status=ok
// SIG undefined Unwind@1426adc30(void)

void Unwind_1426adc30(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 1426adc60 Unwind@1426adc60 body=61 status=ok
// SIG undefined Unwind@1426adc60(void)

void Unwind_1426adc60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  *puVar1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x60));
  FUN_1425e5bd0(puVar1);
  return;
}



// FUNCTION 1426adca0 Unwind@1426adca0 body=39 status=ok
// SIG undefined Unwind@1426adca0(void)

void Unwind_1426adca0(undefined8 param_1,longlong param_2)

{
  FUN_1425e5bd0(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 1426adcd0 Unwind@1426adcd0 body=39 status=ok
// SIG undefined Unwind@1426adcd0(void)

void Unwind_1426adcd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426add00 FUN_1426add00 body=120 status=ok
// SIG undefined FUN_1426add00(void)

void FUN_1426add00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::LaoBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x7e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425121d0(param_1 + 0x65);
  FUN_1425121d0(param_1 + 0x4c);
  FUN_1425121d0(param_1 + 0x33);
  FUN_1425121d0(param_1 + 0x1a);
  *param_1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(param_1 + 1);
  FUN_1425e5bd0(param_1);
  return;
}



// FUNCTION 1426add80 FUN_1426add80 body=1307 status=ok
// SIG undefined FUN_1426add80(void)

uint FUN_1426add80(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int local_29c;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  uint *local_280;
  longlong local_278;
  longlong local_270;
  uint local_268 [25];
  int aiStack_204 [20];
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  
  uVar14 = 0;
  if (3 < param_4 - param_3) {
    local_29c = 0;
    local_268[0] = 0;
    local_268[1] = 0;
    local_268[2] = 0xffffffff;
    local_268[3] = 0;
    local_268[4] = 0;
    local_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0xffffffff;
    uStack_1a8 = 0;
    local_1a4 = 0;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    local_f0 = 0;
    FUN_14250e700(param_2,(longlong)param_3);
    local_288 = (longlong)param_4;
    local_270 = param_1 + 0x198;
    local_278 = param_1 + 0x260;
    local_298 = param_1 + 0x328;
    uVar14 = 0;
    do {
      local_290 = FUN_14250e6e0(param_2);
      if (param_4 <= (int)local_290) break;
      uVar10 = (ulonglong)(uVar14 % 3);
      iVar3 = FUN_1426ace00(local_268 + uVar10 * 0x2d,param_2,*(undefined8 *)(param_1 + 0x3f0),
                            param_4);
      if (iVar3 == 1) {
        FUN_14250e700(param_2,(longlong)
                              (int)local_268[uVar10 * 0x2d +
                                             (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5] +
                              (longlong)(int)local_268[uVar10 * 0x2d + 2]);
        uVar12 = local_268[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5];
        iVar3 = aiStack_204[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3]];
        uVar14 = uVar14 + 1;
      }
      else {
        uVar12 = 0;
        if (iVar3 < 2) {
          iVar3 = 0;
        }
        else {
          lVar9 = FUN_14250e6e0(param_2);
          if (lVar9 < local_288) {
            uVar11 = (ulonglong)((uVar14 + 1) % 3);
            puVar13 = local_268 + uVar10 * 0x2d + 4;
            do {
              iVar3 = FUN_1426ace00(local_268 + uVar11 * 0x2d,param_2,
                                    *(undefined8 *)(param_1 + 0x3f0),param_4);
              if (0 < iVar3) {
                local_268[uVar10 * 0x2d + 3] = *puVar13;
                iVar3 = FUN_14250e6e0(param_2);
                if (param_4 <= iVar3) break;
                while( true ) {
                  iVar3 = FUN_1426ace00(local_268 + (ulonglong)((uVar14 + 2) % 3) * 0x2d,param_2,
                                        *(undefined8 *)(param_1 + 0x3f0),param_4);
                  if (iVar3 != 0) {
                    local_268[uVar10 * 0x2d + 3] = *puVar13;
                    goto LAB_1426ae01f;
                  }
                  if ((int)local_268[uVar11 * 0x2d + 4] < 1) break;
                  uVar12 = local_268[uVar11 * 0x2d + 4] - 1;
                  local_268[uVar11 * 0x2d + 4] = uVar12;
                  FUN_14250e700(param_2,(longlong)
                                        (int)local_268[uVar11 * 0x2d + (ulonglong)uVar12 + 5] +
                                        (longlong)(int)local_268[uVar11 * 0x2d + 2]);
                }
              }
              if ((int)*puVar13 < 1) break;
              uVar12 = *puVar13 - 1;
              *puVar13 = uVar12;
              FUN_14250e700(param_2,(longlong)(int)local_268[uVar10 * 0x2d + (ulonglong)uVar12 + 5]
                                    + (longlong)(int)local_268[uVar10 * 0x2d + 2]);
            } while( true );
          }
LAB_1426ae01f:
          FUN_14250e700(param_2,(longlong)
                                (int)local_268[uVar10 * 0x2d +
                                               (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5] +
                                (longlong)(int)local_268[uVar10 * 0x2d + 2]);
          uVar12 = local_268[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5];
          iVar3 = aiStack_204[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3]];
          uVar14 = uVar14 + 1;
        }
      }
      lVar9 = local_298;
      iVar4 = FUN_14250e6e0(param_2);
      if ((iVar3 < 3) && (iVar4 < param_4)) {
        iVar3 = FUN_1426ace00(local_268 + (ulonglong)(uVar14 % 3) * 0x2d,param_2,
                              *(undefined8 *)(param_1 + 0x3f0),param_4);
        if ((iVar3 < 1) &&
           ((uVar12 == 0 || ((int)local_268[(ulonglong)(uVar14 % 3) * 0x2d + 1] < 3)))) {
          iVar15 = (int)local_290 + uVar12;
          iVar3 = FUN_14250e6e0(param_2);
          uVar5 = FUN_14250e570(param_2);
          iVar4 = FUN_14250e6e0(param_2);
          iVar4 = iVar4 - iVar3;
          iVar3 = (param_4 - iVar15) - iVar4;
          if (0 < iVar3) {
            local_280 = local_268 + (ulonglong)((uVar14 + 1) % 3) * 0x2d;
            do {
              uVar7 = FUN_14250e920(param_2);
              cVar2 = FUN_142512880(local_270,uVar5);
              if ((cVar2 != '\0') && (cVar2 = FUN_142512880(local_278,uVar7), cVar2 != '\0')) {
                iVar8 = FUN_1426ace00(local_280,param_2,*(undefined8 *)(param_1 + 0x3f0),param_4);
                FUN_14250e700(param_2,(longlong)(iVar4 + iVar15));
                if (0 < iVar8) break;
              }
              iVar8 = FUN_14250e6e0(param_2);
              uVar5 = FUN_14250e570(param_2);
              iVar6 = FUN_14250e6e0(param_2);
              iVar6 = iVar6 - iVar8;
              iVar4 = iVar4 + iVar6;
              iVar8 = iVar3 - iVar6;
              bVar1 = iVar6 <= iVar3;
              iVar3 = iVar8;
            } while (iVar8 != 0 && bVar1);
          }
          uVar14 = uVar14 + ((int)uVar12 < 1);
          uVar12 = iVar4 + uVar12;
          lVar9 = local_298;
        }
        else {
          FUN_14250e700(param_2,(longlong)(int)((int)local_290 + uVar12));
        }
      }
      while (iVar3 = FUN_14250e6e0(param_2), iVar3 < param_4) {
        uVar5 = FUN_14250e920(param_2);
        cVar2 = FUN_142512880(lVar9,uVar5);
        if (cVar2 == '\0') break;
        FUN_14250e570(param_2);
        iVar4 = FUN_14250e6e0(param_2);
        uVar12 = (uVar12 - iVar3) + iVar4;
      }
      if (0 < (int)uVar12) {
        iVar3 = *(int *)(param_5 + 8);
        if ((iVar3 < -1) || (*(int *)(param_5 + 0xc) <= iVar3)) {
          cVar2 = FUN_1425182c0(param_5,iVar3 + 1,&local_29c);
          if (cVar2 == '\0') goto LAB_1426ade52;
          iVar3 = *(int *)(param_5 + 8);
        }
        *(uint *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar3 * 4) = uVar12 + (int)local_290;
        *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
      }
LAB_1426ade52:
    } while (local_29c < 1);
    if (*(int *)(param_5 + 8) < 1) {
      if (0 < param_4) {
        return uVar14;
      }
    }
    else {
      uVar12 = *(int *)(param_5 + 8) - 1;
      if (*(int *)(*(longlong *)(param_5 + 0x18) + (ulonglong)uVar12 * 4) < param_4) {
        return uVar14;
      }
      *(uint *)(param_5 + 8) = uVar12;
    }
    uVar14 = uVar14 - 1;
  }
  return uVar14;
}



// FUNCTION 1426ae2c0 FUN_1426ae2c0 body=378 status=ok
// SIG undefined FUN_1426ae2c0(void)

longlong * FUN_1426ae2c0(longlong *param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong local_98 [8];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1425e5bc0();
  *param_1 = (longlong)icu_64::DictionaryBreakEngine::vftable;
  local_58 = param_1 + 1;
  local_30 = param_1;
  FUN_142511900();
  *local_30 = (longlong)icu_64::BurmeseBreakEngine::vftable;
  local_38 = local_30 + 0x1a;
  FUN_142511900();
  local_50 = local_30 + 0x33;
  FUN_142511900();
  local_40 = local_30 + 0x4c;
  FUN_142511900();
  local_48 = local_30 + 0x65;
  FUN_142511900();
  local_30[0x7e] = param_2;
  FUN_1424a7060(local_98,1,L"[[:Mymr:]&[:LineBreak=SA:]]",0xffffffff);
  FUN_1425c5c30(local_38,local_98,param_3);
  FUN_140859a90(local_98);
  if (*param_3 < 1) {
    (**(code **)(*local_30 + 0x18))(local_30,local_38);
  }
  FUN_1424a7060(local_98,1,L"[[:Mymr:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  plVar1 = local_48;
  FUN_1425c5c30(local_48,local_98,param_3);
  FUN_140859a90(local_98);
  FUN_142513960(plVar1,0x20);
  FUN_142511c30(local_50,local_38);
  FUN_142511a00(local_40,0x1000,0x102a);
  FUN_142514740(local_48);
  FUN_142514740(local_50);
  FUN_142514740(local_40);
  return local_30;
}



// FUNCTION 1426ae440 Unwind@1426ae440 body=39 status=ok
// SIG undefined Unwind@1426ae440(void)

void Unwind_1426ae440(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426ae470 Unwind@1426ae470 body=39 status=ok
// SIG undefined Unwind@1426ae470(void)

void Unwind_1426ae470(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1426ae4a0 Unwind@1426ae4a0 body=39 status=ok
// SIG undefined Unwind@1426ae4a0(void)

void Unwind_1426ae4a0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 1426ae4d0 Unwind@1426ae4d0 body=39 status=ok
// SIG undefined Unwind@1426ae4d0(void)

void Unwind_1426ae4d0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1426ae500 Unwind@1426ae500 body=39 status=ok
// SIG undefined Unwind@1426ae500(void)

void Unwind_1426ae500(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1426ae530 Unwind@1426ae530 body=61 status=ok
// SIG undefined Unwind@1426ae530(void)

void Unwind_1426ae530(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  *puVar1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x60));
  FUN_1425e5bd0(puVar1);
  return;
}



// FUNCTION 1426ae570 Unwind@1426ae570 body=39 status=ok
// SIG undefined Unwind@1426ae570(void)

void Unwind_1426ae570(undefined8 param_1,longlong param_2)

{
  FUN_1425e5bd0(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 1426ae5a0 Unwind@1426ae5a0 body=39 status=ok
// SIG undefined Unwind@1426ae5a0(void)

void Unwind_1426ae5a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426ae5d0 FUN_1426ae5d0 body=120 status=ok
// SIG undefined FUN_1426ae5d0(void)

void FUN_1426ae5d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::BurmeseBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x7e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425121d0(param_1 + 0x65);
  FUN_1425121d0(param_1 + 0x4c);
  FUN_1425121d0(param_1 + 0x33);
  FUN_1425121d0(param_1 + 0x1a);
  *param_1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(param_1 + 1);
  FUN_1425e5bd0(param_1);
  return;
}



// FUNCTION 1426ae650 FUN_1426ae650 body=1307 status=ok
// SIG undefined FUN_1426ae650(void)

uint FUN_1426ae650(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int local_29c;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  uint *local_280;
  longlong local_278;
  longlong local_270;
  uint local_268 [25];
  int aiStack_204 [20];
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  
  uVar14 = 0;
  if (3 < param_4 - param_3) {
    local_29c = 0;
    local_268[0] = 0;
    local_268[1] = 0;
    local_268[2] = 0xffffffff;
    local_268[3] = 0;
    local_268[4] = 0;
    local_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0xffffffff;
    uStack_1a8 = 0;
    local_1a4 = 0;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    local_f0 = 0;
    FUN_14250e700(param_2,(longlong)param_3);
    local_288 = (longlong)param_4;
    local_270 = param_1 + 0x198;
    local_278 = param_1 + 0x260;
    local_298 = param_1 + 0x328;
    uVar14 = 0;
    do {
      local_290 = FUN_14250e6e0(param_2);
      if (param_4 <= (int)local_290) break;
      uVar10 = (ulonglong)(uVar14 % 3);
      iVar3 = FUN_1426ace00(local_268 + uVar10 * 0x2d,param_2,*(undefined8 *)(param_1 + 0x3f0),
                            param_4);
      if (iVar3 == 1) {
        FUN_14250e700(param_2,(longlong)
                              (int)local_268[uVar10 * 0x2d +
                                             (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5] +
                              (longlong)(int)local_268[uVar10 * 0x2d + 2]);
        uVar12 = local_268[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5];
        iVar3 = aiStack_204[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3]];
        uVar14 = uVar14 + 1;
      }
      else {
        uVar12 = 0;
        if (iVar3 < 2) {
          iVar3 = 0;
        }
        else {
          lVar9 = FUN_14250e6e0(param_2);
          if (lVar9 < local_288) {
            uVar11 = (ulonglong)((uVar14 + 1) % 3);
            puVar13 = local_268 + uVar10 * 0x2d + 4;
            do {
              iVar3 = FUN_1426ace00(local_268 + uVar11 * 0x2d,param_2,
                                    *(undefined8 *)(param_1 + 0x3f0),param_4);
              if (0 < iVar3) {
                local_268[uVar10 * 0x2d + 3] = *puVar13;
                iVar3 = FUN_14250e6e0(param_2);
                if (param_4 <= iVar3) break;
                while( true ) {
                  iVar3 = FUN_1426ace00(local_268 + (ulonglong)((uVar14 + 2) % 3) * 0x2d,param_2,
                                        *(undefined8 *)(param_1 + 0x3f0),param_4);
                  if (iVar3 != 0) {
                    local_268[uVar10 * 0x2d + 3] = *puVar13;
                    goto LAB_1426ae8ef;
                  }
                  if ((int)local_268[uVar11 * 0x2d + 4] < 1) break;
                  uVar12 = local_268[uVar11 * 0x2d + 4] - 1;
                  local_268[uVar11 * 0x2d + 4] = uVar12;
                  FUN_14250e700(param_2,(longlong)
                                        (int)local_268[uVar11 * 0x2d + (ulonglong)uVar12 + 5] +
                                        (longlong)(int)local_268[uVar11 * 0x2d + 2]);
                }
              }
              if ((int)*puVar13 < 1) break;
              uVar12 = *puVar13 - 1;
              *puVar13 = uVar12;
              FUN_14250e700(param_2,(longlong)(int)local_268[uVar10 * 0x2d + (ulonglong)uVar12 + 5]
                                    + (longlong)(int)local_268[uVar10 * 0x2d + 2]);
            } while( true );
          }
LAB_1426ae8ef:
          FUN_14250e700(param_2,(longlong)
                                (int)local_268[uVar10 * 0x2d +
                                               (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5] +
                                (longlong)(int)local_268[uVar10 * 0x2d + 2]);
          uVar12 = local_268[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3] + 5];
          iVar3 = aiStack_204[uVar10 * 0x2d + (longlong)(int)local_268[uVar10 * 0x2d + 3]];
          uVar14 = uVar14 + 1;
        }
      }
      lVar9 = local_298;
      iVar4 = FUN_14250e6e0(param_2);
      if ((iVar3 < 3) && (iVar4 < param_4)) {
        iVar3 = FUN_1426ace00(local_268 + (ulonglong)(uVar14 % 3) * 0x2d,param_2,
                              *(undefined8 *)(param_1 + 0x3f0),param_4);
        if ((iVar3 < 1) &&
           ((uVar12 == 0 || ((int)local_268[(ulonglong)(uVar14 % 3) * 0x2d + 1] < 3)))) {
          iVar15 = (int)local_290 + uVar12;
          iVar3 = FUN_14250e6e0(param_2);
          uVar5 = FUN_14250e570(param_2);
          iVar4 = FUN_14250e6e0(param_2);
          iVar4 = iVar4 - iVar3;
          iVar3 = (param_4 - iVar15) - iVar4;
          if (0 < iVar3) {
            local_280 = local_268 + (ulonglong)((uVar14 + 1) % 3) * 0x2d;
            do {
              uVar7 = FUN_14250e920(param_2);
              cVar2 = FUN_142512880(local_270,uVar5);
              if ((cVar2 != '\0') && (cVar2 = FUN_142512880(local_278,uVar7), cVar2 != '\0')) {
                iVar8 = FUN_1426ace00(local_280,param_2,*(undefined8 *)(param_1 + 0x3f0),param_4);
                FUN_14250e700(param_2,(longlong)(iVar4 + iVar15));
                if (0 < iVar8) break;
              }
              iVar8 = FUN_14250e6e0(param_2);
              uVar5 = FUN_14250e570(param_2);
              iVar6 = FUN_14250e6e0(param_2);
              iVar6 = iVar6 - iVar8;
              iVar4 = iVar4 + iVar6;
              iVar8 = iVar3 - iVar6;
              bVar1 = iVar6 <= iVar3;
              iVar3 = iVar8;
            } while (iVar8 != 0 && bVar1);
          }
          uVar14 = uVar14 + ((int)uVar12 < 1);
          uVar12 = iVar4 + uVar12;
          lVar9 = local_298;
        }
        else {
          FUN_14250e700(param_2,(longlong)(int)((int)local_290 + uVar12));
        }
      }
      while (iVar3 = FUN_14250e6e0(param_2), iVar3 < param_4) {
        uVar5 = FUN_14250e920(param_2);
        cVar2 = FUN_142512880(lVar9,uVar5);
        if (cVar2 == '\0') break;
        FUN_14250e570(param_2);
        iVar4 = FUN_14250e6e0(param_2);
        uVar12 = (uVar12 - iVar3) + iVar4;
      }
      if (0 < (int)uVar12) {
        iVar3 = *(int *)(param_5 + 8);
        if ((iVar3 < -1) || (*(int *)(param_5 + 0xc) <= iVar3)) {
          cVar2 = FUN_1425182c0(param_5,iVar3 + 1,&local_29c);
          if (cVar2 == '\0') goto LAB_1426ae722;
          iVar3 = *(int *)(param_5 + 8);
        }
        *(uint *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar3 * 4) = uVar12 + (int)local_290;
        *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
      }
LAB_1426ae722:
    } while (local_29c < 1);
    if (*(int *)(param_5 + 8) < 1) {
      if (0 < param_4) {
        return uVar14;
      }
    }
    else {
      uVar12 = *(int *)(param_5 + 8) - 1;
      if (*(int *)(*(longlong *)(param_5 + 0x18) + (ulonglong)uVar12 * 4) < param_4) {
        return uVar14;
      }
      *(uint *)(param_5 + 8) = uVar12;
    }
    uVar14 = uVar14 - 1;
  }
  return uVar14;
}



// FUNCTION 1426aeb90 FUN_1426aeb90 body=392 status=ok
// SIG undefined FUN_1426aeb90(void)

longlong * FUN_1426aeb90(longlong *param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong local_98 [8];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1425e5bc0();
  *param_1 = (longlong)icu_64::DictionaryBreakEngine::vftable;
  local_58 = param_1 + 1;
  local_30 = param_1;
  FUN_142511900();
  *local_30 = (longlong)icu_64::KhmerBreakEngine::vftable;
  local_38 = local_30 + 0x1a;
  FUN_142511900();
  local_40 = local_30 + 0x33;
  FUN_142511900();
  local_48 = local_30 + 0x4c;
  FUN_142511900();
  local_50 = local_30 + 0x65;
  FUN_142511900();
  local_30[0x7e] = param_2;
  FUN_1424a7060(local_98,1,L"[[:Khmr:]&[:LineBreak=SA:]]",0xffffffff);
  FUN_1425c5c30(local_38,local_98,param_3);
  FUN_140859a90(local_98);
  if (*param_3 < 1) {
    (**(code **)(*local_30 + 0x18))(local_30,local_38);
  }
  FUN_1424a7060(local_98,1,L"[[:Khmr:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  plVar1 = local_50;
  FUN_1425c5c30(local_50,local_98,param_3);
  FUN_140859a90(local_98);
  FUN_142513960(plVar1,0x20);
  FUN_142511c30(local_40,local_38);
  FUN_142511a00(local_48,0x1780,0x17b3);
  FUN_1425144c0(local_40,0x17d2);
  FUN_142514740(local_50);
  FUN_142514740(local_40);
  FUN_142514740(local_48);
  return local_30;
}



// FUNCTION 1426aed20 Unwind@1426aed20 body=39 status=ok
// SIG undefined Unwind@1426aed20(void)

void Unwind_1426aed20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426aed50 Unwind@1426aed50 body=39 status=ok
// SIG undefined Unwind@1426aed50(void)

void Unwind_1426aed50(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1426aed80 Unwind@1426aed80 body=39 status=ok
// SIG undefined Unwind@1426aed80(void)

void Unwind_1426aed80(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1426aedb0 Unwind@1426aedb0 body=39 status=ok
// SIG undefined Unwind@1426aedb0(void)

void Unwind_1426aedb0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 1426aede0 Unwind@1426aede0 body=39 status=ok
// SIG undefined Unwind@1426aede0(void)

void Unwind_1426aede0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1426aee10 Unwind@1426aee10 body=61 status=ok
// SIG undefined Unwind@1426aee10(void)

void Unwind_1426aee10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  *puVar1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x60));
  FUN_1425e5bd0(puVar1);
  return;
}



// FUNCTION 1426aee50 Unwind@1426aee50 body=39 status=ok
// SIG undefined Unwind@1426aee50(void)

void Unwind_1426aee50(undefined8 param_1,longlong param_2)

{
  FUN_1425e5bd0(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 1426aee80 Unwind@1426aee80 body=39 status=ok
// SIG undefined Unwind@1426aee80(void)

void Unwind_1426aee80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426aeeb0 FUN_1426aeeb0 body=120 status=ok
// SIG undefined FUN_1426aeeb0(void)

void FUN_1426aeeb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::KhmerBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x7e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425121d0(param_1 + 0x65);
  FUN_1425121d0(param_1 + 0x4c);
  FUN_1425121d0(param_1 + 0x33);
  FUN_1425121d0(param_1 + 0x1a);
  *param_1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(param_1 + 1);
  FUN_1425e5bd0(param_1);
  return;
}



// FUNCTION 1426aef30 FUN_1426aef30 body=1296 status=ok
// SIG undefined FUN_1426aef30(void)

uint FUN_1426aef30(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int local_294;
  longlong local_290;
  undefined8 local_288;
  uint *local_280;
  longlong local_278;
  longlong local_270;
  uint local_268 [25];
  int aiStack_204 [20];
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  
  uVar13 = 0;
  if (3 < param_4 - param_3) {
    local_294 = 0;
    local_268[0] = 0;
    local_268[1] = 0;
    local_268[2] = 0xffffffff;
    local_268[3] = 0;
    local_268[4] = 0;
    local_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0xffffffff;
    uStack_1a8 = 0;
    local_1a4 = 0;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    local_f0 = 0;
    FUN_14250e700(param_2,(longlong)param_3);
    local_270 = param_1 + 0x198;
    local_278 = param_1 + 0x260;
    local_290 = param_1 + 0x328;
    uVar13 = 0;
    do {
      local_288 = FUN_14250e6e0(param_2);
      if (param_4 <= (int)local_288) break;
      uVar9 = (ulonglong)(uVar13 % 3);
      iVar3 = FUN_1426ace00(local_268 + uVar9 * 0x2d,param_2,*(undefined8 *)(param_1 + 0x3f0),
                            param_4);
      if (iVar3 == 1) {
        FUN_14250e700(param_2,(longlong)
                              (int)local_268[uVar9 * 0x2d +
                                             (longlong)(int)local_268[uVar9 * 0x2d + 3] + 5] +
                              (longlong)(int)local_268[uVar9 * 0x2d + 2]);
        uVar11 = local_268[uVar9 * 0x2d + (longlong)(int)local_268[uVar9 * 0x2d + 3] + 5];
        iVar3 = aiStack_204[uVar9 * 0x2d + (longlong)(int)local_268[uVar9 * 0x2d + 3]];
        uVar13 = uVar13 + 1;
      }
      else {
        uVar11 = 0;
        if (iVar3 < 2) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_14250e6e0(param_2);
          if (iVar3 < param_4) {
            uVar10 = (ulonglong)((uVar13 + 1) % 3);
            puVar12 = local_268 + uVar9 * 0x2d + 4;
            do {
              iVar3 = FUN_1426ace00(local_268 + uVar10 * 0x2d,param_2,
                                    *(undefined8 *)(param_1 + 0x3f0),param_4);
              if (0 < iVar3) {
                local_268[uVar9 * 0x2d + 3] = *puVar12;
                iVar3 = FUN_14250e6e0(param_2);
                if (param_4 <= iVar3) break;
                while( true ) {
                  iVar3 = FUN_1426ace00(local_268 + (ulonglong)((uVar13 + 2) % 3) * 0x2d,param_2,
                                        *(undefined8 *)(param_1 + 0x3f0),param_4);
                  if (iVar3 != 0) {
                    local_268[uVar9 * 0x2d + 3] = *puVar12;
                    goto LAB_1426af1cf;
                  }
                  if ((int)local_268[uVar10 * 0x2d + 4] < 1) break;
                  uVar11 = local_268[uVar10 * 0x2d + 4] - 1;
                  local_268[uVar10 * 0x2d + 4] = uVar11;
                  FUN_14250e700(param_2,(longlong)
                                        (int)local_268[uVar10 * 0x2d + (ulonglong)uVar11 + 5] +
                                        (longlong)(int)local_268[uVar10 * 0x2d + 2]);
                }
              }
              if ((int)*puVar12 < 1) break;
              uVar11 = *puVar12 - 1;
              *puVar12 = uVar11;
              FUN_14250e700(param_2,(longlong)(int)local_268[uVar9 * 0x2d + (ulonglong)uVar11 + 5] +
                                    (longlong)(int)local_268[uVar9 * 0x2d + 2]);
            } while( true );
          }
LAB_1426af1cf:
          FUN_14250e700(param_2,(longlong)
                                (int)local_268[uVar9 * 0x2d +
                                               (longlong)(int)local_268[uVar9 * 0x2d + 3] + 5] +
                                (longlong)(int)local_268[uVar9 * 0x2d + 2]);
          uVar11 = local_268[uVar9 * 0x2d + (longlong)(int)local_268[uVar9 * 0x2d + 3] + 5];
          iVar3 = aiStack_204[uVar9 * 0x2d + (longlong)(int)local_268[uVar9 * 0x2d + 3]];
          uVar13 = uVar13 + 1;
        }
      }
      lVar15 = local_290;
      iVar4 = FUN_14250e6e0(param_2);
      if ((iVar3 < 3) && (iVar4 < param_4)) {
        iVar3 = FUN_1426ace00(local_268 + (ulonglong)(uVar13 % 3) * 0x2d,param_2,
                              *(undefined8 *)(param_1 + 0x3f0),param_4);
        if ((iVar3 < 1) &&
           ((uVar11 == 0 || ((int)local_268[(ulonglong)(uVar13 % 3) * 0x2d + 1] < 3)))) {
          iVar14 = (int)local_288 + uVar11;
          iVar3 = FUN_14250e6e0(param_2);
          uVar5 = FUN_14250e570(param_2);
          iVar4 = FUN_14250e6e0(param_2);
          iVar4 = iVar4 - iVar3;
          iVar3 = (param_4 - iVar14) - iVar4;
          if (0 < iVar3) {
            local_280 = local_268 + (ulonglong)((uVar13 + 1) % 3) * 0x2d;
            do {
              uVar7 = FUN_14250e920(param_2);
              cVar2 = FUN_142512880(local_270,uVar5);
              if ((cVar2 != '\0') && (cVar2 = FUN_142512880(local_278,uVar7), cVar2 != '\0')) {
                iVar8 = FUN_1426ace00(local_280,param_2,*(undefined8 *)(param_1 + 0x3f0),param_4);
                FUN_14250e700(param_2,(longlong)(iVar4 + iVar14));
                if (0 < iVar8) break;
              }
              iVar8 = FUN_14250e6e0(param_2);
              uVar5 = FUN_14250e570(param_2);
              iVar6 = FUN_14250e6e0(param_2);
              iVar6 = iVar6 - iVar8;
              iVar4 = iVar4 + iVar6;
              iVar8 = iVar3 - iVar6;
              bVar1 = iVar6 <= iVar3;
              iVar3 = iVar8;
            } while (iVar8 != 0 && bVar1);
          }
          uVar13 = uVar13 + ((int)uVar11 < 1);
          uVar11 = iVar4 + uVar11;
          lVar15 = local_290;
        }
        else {
          FUN_14250e700(param_2,(longlong)(int)((int)local_288 + uVar11));
        }
      }
      while (iVar3 = FUN_14250e6e0(param_2), iVar3 < param_4) {
        uVar5 = FUN_14250e920(param_2);
        cVar2 = FUN_142512880(lVar15,uVar5);
        if (cVar2 == '\0') break;
        FUN_14250e570(param_2);
        iVar4 = FUN_14250e6e0(param_2);
        uVar11 = (uVar11 - iVar3) + iVar4;
      }
      if (0 < (int)uVar11) {
        iVar3 = *(int *)(param_5 + 8);
        if ((iVar3 < -1) || (*(int *)(param_5 + 0xc) <= iVar3)) {
          cVar2 = FUN_1425182c0(param_5,iVar3 + 1,&local_294);
          if (cVar2 == '\0') goto LAB_1426af002;
          iVar3 = *(int *)(param_5 + 8);
        }
        *(uint *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar3 * 4) = uVar11 + (int)local_288;
        *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
      }
LAB_1426af002:
    } while (local_294 < 1);
    if (*(int *)(param_5 + 8) < 1) {
      if (0 < param_4) {
        return uVar13;
      }
    }
    else {
      uVar11 = *(int *)(param_5 + 8) - 1;
      if (*(int *)(*(longlong *)(param_5 + 0x18) + (ulonglong)uVar11 * 4) < param_4) {
        return uVar13;
      }
      *(uint *)(param_5 + 8) = uVar11;
    }
    uVar13 = uVar13 - 1;
  }
  return uVar13;
}



// FUNCTION 1426af470 FUN_1426af470 body=586 status=ok
// SIG undefined FUN_1426af470(void)

longlong * FUN_1426af470(longlong *param_1,longlong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  undefined1 local_128 [200];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1425e5bc0();
  *param_1 = (longlong)icu_64::DictionaryBreakEngine::vftable;
  local_60 = param_1 + 1;
  local_38 = param_1;
  FUN_142511900();
  *local_38 = (longlong)icu_64::CjkBreakEngine::vftable;
  local_40 = local_38 + 0x1a;
  FUN_142511900();
  local_58 = local_38 + 0x33;
  FUN_142511900();
  local_50 = local_38 + 0x4c;
  FUN_142511900();
  local_48 = local_38 + 0x65;
  FUN_142511900();
  local_38[0x7e] = param_2;
  FUN_1424a7060(local_128,1,L"[\\uac00-\\ud7a3]",0xffffffff);
  FUN_1425c5c30(local_40,local_128,param_4);
  FUN_140859a90(local_128);
  FUN_1424a7060(local_128,1,L"[:Han:]",0xffffffff);
  FUN_1425c5c30(local_58,local_128,param_4);
  FUN_140859a90(local_128);
  FUN_1424a7060(local_128,1,L"[[:Katakana:]\\uff9e\\uff9f]",0xffffffff);
  FUN_1425c5c30(local_50,local_128,param_4);
  FUN_140859a90(local_128);
  FUN_1424a7060(local_128,1,L"[:Hiragana:]",0xffffffff);
  FUN_1425c5c30(local_48,local_128,param_4);
  FUN_140859a90(local_128);
  lVar1 = FUN_1425cdc20(param_4);
  local_38[0x7f] = lVar1;
  if (*param_4 < 1) {
    if (param_3 == 0) {
      (**(code **)(*local_38 + 0x18))(local_38,local_40);
    }
    else {
      FUN_142511900(local_128);
      FUN_142513300(local_128,local_58);
      FUN_142513300(local_128,local_50);
      FUN_142513300(local_128,local_48);
      FUN_142513960(local_128,0xff70);
      FUN_142513960(local_128,0x30fc);
      (**(code **)(*local_38 + 0x18))(local_38,local_128);
      FUN_1425121d0(local_128);
    }
  }
  return local_38;
}



// FUNCTION 1426af6c0 Unwind@1426af6c0 body=43 status=ok
// SIG undefined Unwind@1426af6c0(void)

void Unwind_1426af6c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426af6f0 Unwind@1426af6f0 body=43 status=ok
// SIG undefined Unwind@1426af6f0(void)

void Unwind_1426af6f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426af720 Unwind@1426af720 body=43 status=ok
// SIG undefined Unwind@1426af720(void)

void Unwind_1426af720(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426af750 Unwind@1426af750 body=43 status=ok
// SIG undefined Unwind@1426af750(void)

void Unwind_1426af750(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426af780 Unwind@1426af780 body=46 status=ok
// SIG undefined Unwind@1426af780(void)

void Unwind_1426af780(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 1426af7b0 Unwind@1426af7b0 body=43 status=ok
// SIG undefined Unwind@1426af7b0(void)

void Unwind_1426af7b0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 1426af7e0 Unwind@1426af7e0 body=43 status=ok
// SIG undefined Unwind@1426af7e0(void)

void Unwind_1426af7e0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 1426af810 Unwind@1426af810 body=46 status=ok
// SIG undefined Unwind@1426af810(void)

void Unwind_1426af810(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1426af840 Unwind@1426af840 body=68 status=ok
// SIG undefined Unwind@1426af840(void)

void Unwind_1426af840(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x110);
  *puVar1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(*(undefined8 *)(param_2 + 0xe8));
  FUN_1425e5bd0(puVar1);
  return;
}



// FUNCTION 1426af890 Unwind@1426af890 body=46 status=ok
// SIG undefined Unwind@1426af890(void)

void Unwind_1426af890(undefined8 param_1,longlong param_2)

{
  FUN_1425e5bd0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1426af8c0 Unwind@1426af8c0 body=43 status=ok
// SIG undefined Unwind@1426af8c0(void)

void Unwind_1426af8c0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 1426af8f0 FUN_1426af8f0 body=120 status=ok
// SIG undefined FUN_1426af8f0(void)

void FUN_1426af8f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::CjkBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x7e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425121d0(param_1 + 0x65);
  FUN_1425121d0(param_1 + 0x4c);
  FUN_1425121d0(param_1 + 0x33);
  FUN_1425121d0(param_1 + 0x1a);
  *param_1 = icu_64::DictionaryBreakEngine::vftable;
  FUN_1425121d0(param_1 + 1);
  FUN_1425e5bd0(param_1);
  return;
}



// FUNCTION 1426af970 FUN_1426af970 body=3796 status=ok
// SIG undefined FUN_1426af970(void)

uint FUN_1426af970(longlong param_1,longlong param_2,undefined8 param_3,int param_4,longlong param_5
                  )

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ushort uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined **local_238;
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
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [8];
  int local_1a0;
  longlong local_190;
  longlong local_188;
  undefined **local_180;
  int local_178;
  int local_174;
  longlong local_168;
  undefined1 local_140 [8];
  int local_138;
  int *local_128;
  undefined **local_120;
  short local_118;
  uint local_114;
  uint local_dc;
  undefined **local_d8;
  uint local_d0;
  int local_cc;
  longlong local_c0;
  undefined1 local_98 [8];
  int local_90;
  int local_8c;
  longlong local_80;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  iVar17 = (int)param_3;
  if (param_4 <= iVar17) {
    return 0;
  }
  local_120 = &PTR_FUN_149e18960;
  local_118 = 2;
  local_60 = (undefined8 *)0x0;
  local_4c[0] = 0;
  lVar18 = (longlong)param_4;
  local_70 = param_1;
  local_68 = param_3;
  if ((*(byte *)(param_2 + 8) & 4) == 0) {
LAB_1426afa1f:
    FUN_14250e700(param_2,(longlong)iVar17);
    lVar10 = FUN_14250e6d0(param_2);
    if (lVar10 < lVar18) {
      param_4 = FUN_14250e6d0(param_2);
    }
    puVar11 = (undefined8 *)thunk_FUN_1424da030(0x20);
    if (puVar11 == (undefined8 *)0x0) {
      uVar8 = 0;
      goto LAB_1426b088b;
    }
    local_58 = puVar11;
    FUN_142517d10(puVar11,local_4c);
    if (local_4c[0] < 1) {
      if (local_60 != (undefined8 *)0x0) {
        (**(code **)*local_60)(local_60,1);
      }
      local_60 = local_58;
    }
    else {
      (**(code **)*local_58)(local_58,1);
    }
    uVar8 = 0;
    if (local_4c[0] < 1) {
      while (lVar18 = FUN_14250e6e0(param_2), puVar11 = local_60, lVar18 < param_4) {
        uVar3 = FUN_14250e6e0(param_2);
        uVar4 = FUN_14250e570(param_2);
        FUN_1424a7d60(&local_120,uVar4);
LAB_1426afb16:
        puVar11 = local_60;
        iVar17 = *(int *)(local_60 + 1);
        uVar8 = local_114;
        if (-1 < local_118) {
          uVar8 = (int)local_118 >> 5;
        }
        if (iVar17 < (int)uVar8) {
          if ((iVar17 < -1) || (*(int *)((longlong)local_60 + 0xc) <= iVar17)) goto LAB_1426afb53;
          goto LAB_1426afb05;
        }
      }
      iVar17 = *(int *)(local_60 + 1);
      if ((iVar17 < -1) || (*(int *)((longlong)local_60 + 0xc) <= iVar17)) {
        cVar2 = FUN_1425182c0(local_60,iVar17 + 1,local_4c);
        if (cVar2 == '\0') goto LAB_1426afbbc;
        iVar17 = *(int *)(puVar11 + 1);
      }
      *(int *)(puVar11[3] + (longlong)iVar17 * 4) = param_4;
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      goto LAB_1426afbbc;
    }
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0x20);
    if (((iVar17 < lVar10) || (*(longlong *)(param_2 + 0x10) < lVar18)) ||
       ((longlong)*(int *)(param_2 + 0x1c) < lVar18 - lVar10)) goto LAB_1426afa1f;
    FUN_1424a8f10(&local_120,0,(longlong)iVar17 * 2 + *(longlong *)(param_2 + 0x30) + lVar10 * -2);
LAB_1426afbbc:
    cVar2 = (**(code **)(**(longlong **)(local_70 + 0x3f8) + 0x50))
                      (*(longlong **)(local_70 + 0x3f8),&local_120,local_4c);
    if (cVar2 == '\0') {
      local_238 = &PTR_FUN_149e18960;
      uStack_230 = CONCAT62(uStack_230._2_6_,2);
      puVar11 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar11 == (undefined8 *)0x0) {
        if (local_4c[0] < 1) {
          local_4c[0] = 7;
        }
      }
      else {
        local_58 = puVar11;
        FUN_142517d10(puVar11,local_4c);
        if (local_4c[0] < 1) {
          local_d8 = &PTR_FUN_149e18960;
          local_d0 = CONCAT22(local_d0._2_2_,2);
          local_180 = &PTR_FUN_149e18960;
          local_178 = CONCAT22(local_178._2_2_,2);
          uVar8 = 0;
LAB_1426b040f:
          uVar5 = local_114;
          if (-1 < local_118) {
            uVar5 = (int)local_118 >> 5;
          }
          if ((int)uVar8 < (int)uVar5) {
            uVar12 = (ushort)local_d0 & 0x1f;
            if ((local_d0 & 1) != 0) {
              uVar12 = 2;
            }
            local_d0 = CONCAT22(local_d0._2_2_,uVar12);
            uVar3 = FUN_1424a8030(&local_120,uVar8);
            uVar5 = uVar8;
            do {
              FUN_1424a7d60(&local_d8,uVar3);
              uVar5 = FUN_1424a81b0(&local_120,uVar5,1);
              uVar9 = local_114;
              if (-1 < local_118) {
                uVar9 = (int)local_118 >> 5;
              }
              if (uVar5 == uVar9) break;
              uVar3 = FUN_1424a8030(&local_120,uVar5);
              cVar2 = (**(code **)(**(longlong **)(local_70 + 0x3f8) + 0x70))
                                (*(longlong **)(local_70 + 0x3f8),uVar3);
            } while (cVar2 == '\0');
            (**(code **)(**(longlong **)(local_70 + 0x3f8) + 0x10))
                      (*(longlong **)(local_70 + 0x3f8),&local_d8,&local_180,local_4c);
            iVar17 = local_174;
            if (-1 < (short)local_178) {
              iVar17 = (int)(short)local_178 >> 5;
            }
            FUN_1424a9690(&local_238,&local_180,0,iVar17);
            puVar11 = local_58;
            if (local_60 == (undefined8 *)0x0) {
              iVar17 = uVar8 + (int)local_68;
            }
            else {
              iVar17 = 0;
              if (((-1 < (int)uVar8) && (iVar17 = 0, 0 < *(int *)(local_60 + 1))) &&
                 ((int)uVar8 < *(int *)(local_60 + 1))) {
                iVar17 = *(int *)(local_60[3] + (ulonglong)uVar8 * 4);
              }
            }
            do {
              if ((short)uStack_230 < 0) {
                iVar6 = uStack_230._4_4_;
              }
              else {
                iVar6 = (int)(short)uStack_230 >> 5;
              }
              iVar7 = *(int *)(puVar11 + 1);
              uVar8 = uVar5;
              if (iVar6 <= iVar7) break;
              if ((iVar7 < -1) || (*(int *)((longlong)puVar11 + 0xc) <= iVar7)) {
                cVar2 = FUN_1425182c0(puVar11,iVar7 + 1,local_4c);
                puVar11 = local_58;
                if (cVar2 != '\0') {
                  iVar7 = *(int *)(local_58 + 1);
                  goto LAB_1426b0560;
                }
              }
              else {
LAB_1426b0560:
                *(int *)(puVar11[3] + (longlong)iVar7 * 4) = iVar17;
                *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
              }
            } while (local_4c[0] < 1);
            goto LAB_1426b040f;
          }
          if (local_60 == (undefined8 *)0x0) {
            iVar17 = uVar5 + (int)local_68;
          }
          else {
            iVar17 = 0;
            if (((-1 < (int)uVar5) && (0 < *(int *)(local_60 + 1))) &&
               ((int)uVar5 < *(int *)(local_60 + 1))) {
              iVar17 = *(int *)(local_60[3] + (ulonglong)uVar5 * 4);
            }
          }
          FUN_14251ce30(local_58,iVar17,local_4c);
          if (local_60 != (undefined8 *)0x0) {
            (**(code **)*local_60)(local_60,1);
          }
          local_60 = local_58;
          FUN_1424a7ca0(&local_120,&local_238);
          FUN_140859a90(&local_180);
          FUN_140859a90(&local_d8);
          FUN_140859a90(&local_238);
          goto LAB_1426afbe2;
        }
        (**(code **)*local_58)(local_58,1);
      }
      FUN_140859a90(&local_238);
      uVar8 = 0;
    }
    else {
LAB_1426afbe2:
      uVar5 = FUN_1424a8140(&local_120,0,0x7fffffff);
      puVar11 = local_60;
      puVar20 = (undefined8 *)(ulonglong)uVar5;
      uVar8 = local_114;
      if (-1 < local_118) {
        uVar8 = (int)local_118 >> 5;
      }
      if (uVar5 == uVar8) {
LAB_1426afc7e:
        local_74 = uVar5 + 1;
        FUN_142517d70(&local_d8,local_74,local_4c);
        if (((-2 < (int)local_d0) && ((int)local_d0 < local_cc)) ||
           (cVar2 = FUN_1425182c0(&local_d8,local_d0 + 1,local_4c), cVar2 != '\0')) {
          *(undefined4 *)(local_c0 + (longlong)(int)local_d0 * 4) = 0;
          local_d0 = local_d0 + 1;
        }
        for (iVar17 = 1; iVar17 <= (int)uVar5; iVar17 = iVar17 + 1) {
          if (((-2 < (int)local_d0) && ((int)local_d0 < local_cc)) ||
             (cVar2 = FUN_1425182c0(&local_d8,local_d0 + 1,local_4c), cVar2 != '\0')) {
            *(undefined4 *)(local_c0 + (longlong)(int)local_d0 * 4) = 0xffffffff;
            local_d0 = local_d0 + 1;
          }
        }
        FUN_142517d70(&local_180,local_74,local_4c);
        for (iVar17 = 0; iVar17 <= (int)uVar5; iVar17 = iVar17 + 1) {
          if (((-2 < local_178) && (local_178 < local_174)) ||
             (cVar2 = FUN_1425182c0(&local_180,local_178 + 1,local_4c), cVar2 != '\0')) {
            *(undefined4 *)(local_168 + (longlong)local_178 * 4) = 0xffffffff;
            local_178 = local_178 + 1;
          }
        }
        FUN_142517d70(local_1a8,puVar20,local_4c);
        FUN_142518020(local_1a8,puVar20);
        FUN_142517d70(local_140,puVar20,local_4c);
        local_58 = puVar20;
        FUN_142518020(local_140,puVar20);
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = (undefined **)0x345ad82c;
        uStack_230 = 0x9000000000;
        FUN_14250ee40(&local_238,&local_120,local_4c);
        local_188 = local_70 + 0xd0;
        iVar17 = 0;
        uVar14 = 0;
        uVar8 = 0;
        if (0 < (int)local_58) {
          do {
            uVar19 = (ulonglong)uVar8;
            if ((((int)local_d0 < 1) || ((int)local_d0 <= (int)uVar8)) ||
               (*(int *)(local_c0 + uVar19 * 4) != -1)) {
              local_dc = (uint)uVar14;
              FUN_14250e700(&local_238,(longlong)iVar17);
              iVar6 = (**(code **)(**(longlong **)(local_70 + 0x3f0) + 8))
                                (*(longlong **)(local_70 + 0x3f0),&local_238,0x14,local_58,0,
                                 local_128,local_190,0);
              if (((iVar6 == 0) || (local_138 < 1)) || (*local_128 != 1)) {
                FUN_1424a8030(&local_120,iVar17);
                cVar2 = FUN_142512880(local_188);
                if (cVar2 == '\0') {
                  FUN_142518140(local_1a8,0xff,iVar6);
                  FUN_142518140(local_140,1,iVar6);
                  iVar6 = iVar6 + 1;
                }
              }
              uVar14 = 0;
              while (iVar7 = (int)uVar14, iVar7 < iVar6) {
                iVar15 = 0;
                iVar13 = 0;
                if ((int)uVar8 < (int)local_d0) {
                  iVar13 = *(int *)(local_c0 + uVar19 * 4);
                }
                if ((0 < local_1a0) && (iVar7 < local_1a0)) {
                  iVar15 = *(int *)(local_190 + uVar14 * 4);
                }
                iVar16 = 0;
                if ((0 < local_138) && (iVar16 = 0, iVar7 < local_138)) {
                  iVar16 = local_128[uVar14];
                }
                uVar5 = iVar16 + uVar8;
                if ((((-1 < (int)uVar5) && (0 < (int)local_d0)) && ((int)uVar5 < (int)local_d0)) &&
                   ((uint)(iVar15 + iVar13) < *(uint *)(local_c0 + (ulonglong)uVar5 * 4))) {
                  FUN_142518140(&local_d8,iVar15 + iVar13,uVar5);
                  FUN_142518140(&local_180,uVar8,uVar5);
                }
                uVar14 = (ulonglong)(iVar7 + 1);
              }
              iVar6 = FUN_1424a8030(&local_120,iVar17);
              if ((iVar6 == 0x30fb) ||
                 (uVar14 = CONCAT71((int7)(uVar14 >> 8),1), 0x5d < iVar6 - 0x30a1U)) {
                uVar14 = CONCAT71((int7)(uVar14 >> 8),iVar6 - 0xff66U < 0x3a);
              }
              if (((local_dc & 1) == 0) && ((char)uVar14 != '\0')) {
                iVar6 = FUN_1424a81b0(&local_120,iVar17,1);
                uVar5 = 1;
                while (-1 < local_118) {
                  if ((int)local_118 >> 5 <= iVar6) goto LAB_1426b00e0;
LAB_1426b0097:
                  if (0x13 < uVar5) goto LAB_1426b00e0;
                  iVar7 = FUN_1424a8030(&local_120,iVar6);
                  if ((0x39 < iVar7 - 0xff66U) && (iVar7 == 0x30fb || 0x5d < iVar7 - 0x30a1U))
                  goto LAB_1426b00e5;
                  iVar6 = FUN_1424a81b0(&local_120,iVar6,1);
                  uVar5 = uVar5 + 1;
                }
                if (iVar6 < (int)local_114) goto LAB_1426b0097;
LAB_1426b00e0:
                if (0x13 < uVar5) goto LAB_1426b0160;
LAB_1426b00e5:
                iVar6 = 0;
                if ((0 < (int)local_d0) && ((int)uVar8 < (int)local_d0)) {
                  iVar6 = *(int *)(local_c0 + uVar19 * 4);
                }
                iVar7 = 0x2000;
                if (uVar5 < 9) {
                  iVar7 = *(int *)(&DAT_149d59150 + (ulonglong)uVar5 * 4);
                }
                if (((0 < (int)local_d0) && (uVar5 = uVar5 + uVar8, (int)uVar5 < (int)local_d0)) &&
                   ((uint)(iVar7 + iVar6) < *(uint *)(local_c0 + (ulonglong)uVar5 * 4))) {
                  FUN_142518140(&local_d8,iVar7 + iVar6,uVar5);
                  FUN_142518140(&local_180,uVar8,uVar5);
                }
              }
            }
LAB_1426b0160:
            iVar17 = FUN_1424a81b0(&local_120,iVar17,1);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)local_58);
        }
        FUN_14250edb0(&local_238);
        FUN_142517d70(local_98,local_74,local_4c);
        iVar17 = (int)local_58;
        if (((iVar17 < 0) || ((int)local_d0 < 1)) ||
           (((int)local_d0 <= iVar17 ||
            (*(int *)(local_c0 + ((ulonglong)local_58 & 0xffffffff) * 4) != -1)))) {
          uVar8 = 0;
          puVar11 = local_58;
          while (iVar17 = (int)puVar11, 0 < iVar17) {
            uVar14 = (ulonglong)puVar11 & 0xffffffff;
            if (((-2 < local_90) && (local_90 < local_8c)) ||
               (cVar2 = FUN_1425182c0(local_98,local_90 + 1,local_4c), cVar2 != '\0')) {
              *(int *)(local_80 + (longlong)local_90 * 4) = iVar17;
              local_90 = local_90 + 1;
            }
            uVar8 = uVar8 + 1;
            puVar11 = (undefined8 *)0x0;
            if ((0 < local_178) && (iVar17 < local_178)) {
              puVar11 = (undefined8 *)(ulonglong)*(uint *)(local_168 + uVar14 * 4);
            }
          }
        }
        else if (((local_90 < -1) || (local_8c <= local_90)) &&
                (cVar2 = FUN_1425182c0(local_98,local_90 + 1,local_4c), cVar2 == '\0')) {
          uVar8 = 1;
        }
        else {
          *(int *)(local_80 + (longlong)local_90 * 4) = iVar17;
          local_90 = local_90 + 1;
          uVar8 = 1;
        }
        iVar17 = *(int *)(param_5 + 8);
        if (iVar17 != 0) {
          if (iVar17 < 1) {
            if ((int)local_68 < 1) goto LAB_1426b0751;
          }
          else if ((int)local_68 <=
                   *(int *)(*(longlong *)(param_5 + 0x18) + (ulonglong)(iVar17 - 1) * 4))
          goto LAB_1426b0751;
        }
        if (((-2 < local_90) && (local_90 < local_8c)) ||
           (cVar2 = FUN_1425182c0(local_98,local_90 + 1,local_4c), cVar2 != '\0')) {
          *(undefined4 *)(local_80 + (longlong)local_90 * 4) = 0;
          local_90 = local_90 + 1;
        }
        uVar8 = uVar8 + 1;
LAB_1426b0751:
        iVar17 = -1;
        uVar14 = (ulonglong)uVar8;
LAB_1426b0831:
        do {
          uVar5 = (uint)uVar14;
          iVar6 = iVar17;
          do {
            if ((int)uVar5 < 1) {
              FUN_142517df0(local_98);
              FUN_142517df0(local_140);
              FUN_142517df0(local_1a8);
              FUN_142517df0(&local_180);
              FUN_142517df0(&local_d8);
              goto LAB_1426b0875;
            }
            uVar14 = (ulonglong)(uVar5 - 1);
            if ((local_90 < 1) || (local_90 < (int)uVar5)) {
              uVar9 = 0;
              if (local_60 == (undefined8 *)0x0) goto LAB_1426b07e0;
LAB_1426b07be:
              iVar17 = 0;
              if ((0 < *(int *)(local_60 + 1)) && ((int)uVar9 < *(int *)(local_60 + 1))) {
                iVar17 = *(int *)(local_60[3] + (ulonglong)uVar9 * 4);
              }
            }
            else {
              uVar9 = *(uint *)(local_80 + uVar14 * 4);
              if (local_60 == (undefined8 *)0x0) {
LAB_1426b07e0:
                iVar17 = uVar9 + (int)local_68;
              }
              else {
                if (-1 < (int)uVar9) goto LAB_1426b07be;
                iVar17 = 0;
              }
            }
            if (iVar17 <= iVar6) {
              uVar8 = uVar8 - 1;
              goto LAB_1426b0831;
            }
            iVar6 = *(int *)(param_5 + 8);
            if ((-2 < iVar6) && (iVar6 < *(int *)(param_5 + 0xc))) goto LAB_1426b0823;
            cVar2 = FUN_1425182c0(param_5,iVar6 + 1,local_4c);
            uVar5 = uVar5 - 1;
            iVar6 = iVar17;
          } while (cVar2 == '\0');
          iVar6 = *(int *)(param_5 + 8);
LAB_1426b0823:
          *(int *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar6 * 4) = iVar17;
          *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
        } while( true );
      }
      if (local_60 != (undefined8 *)0x0) {
LAB_1426b026e:
        iVar17 = 0;
        uVar14 = 0;
        do {
          puVar1 = local_60;
          uVar8 = (uint)uVar14;
          if (puVar11 == (undefined8 *)0x0) {
            iVar6 = *(int *)(local_60 + 1);
            if ((iVar6 < -1) || (*(int *)((longlong)local_60 + 0xc) <= iVar6)) {
              cVar2 = FUN_1425182c0(local_60,iVar6 + 1,local_4c);
              if (cVar2 == '\0') goto LAB_1426b0311;
              iVar6 = *(int *)(puVar1 + 1);
            }
            *(uint *)(puVar1[3] + (longlong)iVar6 * 4) = (int)local_68 + uVar8;
            *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
          }
          else {
            uVar3 = 0;
            if (((-1 < (int)uVar8) && (0 < *(int *)(local_60 + 1))) &&
               ((int)uVar8 < *(int *)(local_60 + 1))) {
              uVar3 = *(undefined4 *)(local_60[3] + uVar14 * 4);
            }
            FUN_142518140(local_60,uVar3,iVar17);
          }
LAB_1426b0311:
          uVar9 = local_114;
          if (-1 < local_118) {
            uVar9 = (int)local_118 >> 5;
          }
          if (uVar8 == uVar9) goto LAB_1426afc7e;
          iVar17 = iVar17 + 1;
          uVar8 = FUN_1424a81b0(&local_120,uVar14,1);
          uVar14 = (ulonglong)uVar8;
        } while( true );
      }
      local_58 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (local_58 != (undefined8 *)0x0) {
        FUN_142517d10(local_58,local_4c);
      }
      FUN_1426b0ba0(&local_60,local_58,local_4c);
      uVar8 = 0;
      if (local_4c[0] < 1) goto LAB_1426b026e;
    }
  }
LAB_1426b0875:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,1);
  }
LAB_1426b088b:
  FUN_140859a90(&local_120);
  return uVar8;
LAB_1426afb53:
  cVar2 = FUN_1425182c0(local_60,iVar17 + 1,local_4c);
  if (cVar2 != '\0') {
    iVar17 = *(int *)(puVar11 + 1);
LAB_1426afb05:
    *(undefined4 *)(puVar11[3] + (longlong)iVar17 * 4) = uVar3;
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
  }
  goto LAB_1426afb16;
}



// FUNCTION 1426b08b0 Unwind@1426b08b0 body=58 status=ok
// SIG undefined Unwind@1426b08b0(void)

void Unwind_1426b08b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x220));
  return;
}



// FUNCTION 1426b08f0 Unwind@1426b08f0 body=94 status=ok
// SIG undefined Unwind@1426b08f0(void)

void Unwind_1426b08f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  FUN_140859a90(param_2 + 0x1a0);
  if (*(longlong *)(param_2 + 0x220) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x220))(*(undefined8 **)(param_2 + 0x220),1);
  }
  return;
}



// FUNCTION 1426b0950 Unwind@1426b0950 body=55 status=ok
// SIG undefined Unwind@1426b0950(void)

void Unwind_1426b0950(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1426b0990 Unwind@1426b0990 body=58 status=ok
// SIG undefined Unwind@1426b0990(void)

void Unwind_1426b0990(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x220));
  return;
}



// FUNCTION 1426b09d0 Unwind@1426b09d0 body=58 status=ok
// SIG undefined Unwind@1426b09d0(void)

void Unwind_1426b09d0(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x1e0);
  return;
}



// FUNCTION 1426b0a10 Unwind@1426b0a10 body=58 status=ok
// SIG undefined Unwind@1426b0a10(void)

void Unwind_1426b0a10(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x138);
  return;
}



// FUNCTION 1426b0a50 Unwind@1426b0a50 body=55 status=ok
// SIG undefined Unwind@1426b0a50(void)

void Unwind_1426b0a50(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0xd0);
  return;
}



// FUNCTION 1426b0a90 Unwind@1426b0a90 body=55 status=ok
// SIG undefined Unwind@1426b0a90(void)

void Unwind_1426b0a90(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0xf8);
  return;
}



// FUNCTION 1426b0ad0 Unwind@1426b0ad0 body=58 status=ok
// SIG undefined Unwind@1426b0ad0(void)

void Unwind_1426b0ad0(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x1a0);
  return;
}



// FUNCTION 1426b0b10 Unwind@1426b0b10 body=80 status=ok
// SIG undefined Unwind@1426b0b10(void)

void Unwind_1426b0b10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_2 + 0x158);
  return;
}



// FUNCTION 1426b0b60 Unwind@1426b0b60 body=58 status=ok
// SIG undefined Unwind@1426b0b60(void)

void Unwind_1426b0b60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x220));
  return;
}



// FUNCTION 1426b0ba0 FUN_1426b0ba0 body=91 status=ok
// SIG undefined FUN_1426b0ba0(void)

void FUN_1426b0ba0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  
  if (*param_3 < 1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = (longlong)param_2;
    if (param_2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b0bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}



// FUNCTION 1426b0c00 FUN_1426b0c00 body=2 status=ok
// SIG undefined FUN_1426b0c00(void)

void FUN_1426b0c00(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1426b0c10 FUN_1426b0c10 body=38 status=ok
// SIG undefined FUN_1426b0c10(void)

undefined8 FUN_1426b0c10(undefined8 param_1,int param_2)

{
  FUN_1426ad260();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b0c40 FUN_1426b0c40 body=38 status=ok
// SIG undefined FUN_1426b0c40(void)

undefined8 FUN_1426b0c40(undefined8 param_1,int param_2)

{
  FUN_1426add00();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b0c70 FUN_1426b0c70 body=38 status=ok
// SIG undefined FUN_1426b0c70(void)

undefined8 FUN_1426b0c70(undefined8 param_1,int param_2)

{
  FUN_1426ae5d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b0ca0 FUN_1426b0ca0 body=38 status=ok
// SIG undefined FUN_1426b0ca0(void)

undefined8 FUN_1426b0ca0(undefined8 param_1,int param_2)

{
  FUN_1426aeeb0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b0cd0 FUN_1426b0cd0 body=38 status=ok
// SIG undefined FUN_1426b0cd0(void)

undefined8 FUN_1426b0cd0(undefined8 param_1,int param_2)

{
  FUN_1426af8f0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b0d00 FUN_1426b0d00 body=19 status=ok
// SIG undefined FUN_1426b0d00(void)

void FUN_1426b0d00(undefined8 *param_1)

{
  *param_1 = icu_64::UCharsDictionaryMatcher::vftable;
  FUN_142532330(param_1[2]);
  return;
}



// FUNCTION 1426b0d20 FUN_1426b0d20 body=6 status=ok
// SIG undefined FUN_1426b0d20(void)

undefined8 FUN_1426b0d20(void)

{
  return 1;
}



// FUNCTION 1426b0d30 FUN_1426b0d30 body=482 status=ok
// SIG undefined FUN_1426b0d30(void)

int FUN_1426b0d30(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                 longlong param_6,longlong param_7,int *param_8)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  undefined8 local_68;
  ushort *local_60;
  ushort *local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = *(ushort **)(param_1 + 8);
  local_68 = 0;
  local_50 = 0xffffffff;
  local_58 = local_60;
  iVar2 = FUN_14250e6e0(param_2);
  iVar3 = FUN_14250e570(param_2);
  if (iVar3 < 0) {
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar4 = 1;
    do {
      iVar9 = iVar4;
      if (iVar9 == 1) {
        local_50 = 0xffffffff;
        iVar3 = FUN_1425e7630(&local_68,local_60,iVar3);
      }
      else {
        iVar3 = FUN_1425e7340(&local_68,iVar3);
      }
      iVar4 = FUN_14250e6e0(param_2);
      if (iVar3 < 2) {
        if (iVar3 == 0) break;
      }
      else {
        if (iVar7 < param_4) {
          lVar5 = (longlong)iVar7;
          if (param_7 != 0) {
            puVar8 = local_58 + 1;
            uVar1 = *local_58;
            if ((short)uVar1 < 0) {
              uVar6 = uVar1 & 0x7fff;
              if (0x3fff < uVar6) {
                if (uVar6 == 0x7fff) {
                  uVar6 = (uint)local_58[1] << 0x10;
                  puVar8 = local_58 + 2;
                }
                else {
                  uVar6 = uVar6 * 0x10000 + 0xc0000000;
                }
                uVar6 = *puVar8 | uVar6;
              }
            }
            else if (uVar1 < 0x4040) {
              uVar6 = (uVar1 >> 6) - 1;
            }
            else if (uVar1 < 0x7fc0) {
              uVar6 = (uVar1 & 0x7fc0) * 0x400 + (uint)*puVar8 + 0xfeff0000;
            }
            else {
              uVar6 = CONCAT22(local_58[1],local_58[2]);
            }
            *(uint *)(param_7 + lVar5 * 4) = uVar6;
          }
          if (param_5 != 0) {
            *(int *)(param_5 + lVar5 * 4) = iVar4 - iVar2;
          }
          if (param_6 != 0) {
            *(int *)(param_6 + lVar5 * 4) = iVar9;
          }
          iVar7 = iVar7 + 1;
        }
        if (iVar3 == 2) break;
      }
      if (param_3 <= iVar4 - iVar2) break;
      iVar3 = FUN_14250e570(param_2);
      iVar4 = iVar9 + 1;
    } while (-1 < iVar3);
  }
  if (param_8 != (int *)0x0) {
    *param_8 = iVar9;
  }
  FUN_1425e7160(&local_68);
  return iVar7;
}



// FUNCTION 1426b0f30 Unwind@1426b0f30 body=52 status=ok
// SIG undefined Unwind@1426b0f30(void)

void Unwind_1426b0f30(undefined8 param_1,longlong param_2)

{
  FUN_1425e7160(param_2 + 0x30);
  return;
}



// FUNCTION 1426b0f70 FUN_1426b0f70 body=19 status=ok
// SIG undefined FUN_1426b0f70(void)

void FUN_1426b0f70(undefined8 *param_1)

{
  *param_1 = icu_64::BytesDictionaryMatcher::vftable;
  FUN_142532330(param_1[3]);
  return;
}



// FUNCTION 1426b0f90 FUN_1426b0f90 body=3 status=ok
// SIG undefined FUN_1426b0f90(void)

undefined8 FUN_1426b0f90(void)

{
  return 0;
}



// FUNCTION 1426b0fa0 FUN_1426b0fa0 body=596 status=ok
// SIG undefined FUN_1426b0fa0(void)

int FUN_1426b0fa0(longlong param_1,undefined8 param_2,int param_3,int param_4,int *param_5,
                 undefined4 *param_6,undefined4 *param_7,int *param_8)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_78;
  byte *local_70;
  byte *local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pbVar1 = *(byte **)(param_1 + 8);
  local_78 = 0;
  local_60 = 0xffffffff;
  local_70 = pbVar1;
  local_68 = pbVar1;
  local_50 = param_3;
  local_4c = param_4;
  local_58 = FUN_14250e6e0(param_2);
  uVar2 = FUN_14250e570(param_2);
  if ((int)uVar2 < 0) {
    iVar6 = 0;
    iVar7 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x10) & 0x7f000000) == 0x1000000) {
      if (uVar2 == 0x200d) {
        uVar2 = 0xff;
      }
      else if (uVar2 == 0x200c) {
        uVar2 = 0xfe;
      }
      else {
        uVar2 = uVar2 - (*(uint *)(param_1 + 0x10) & 0x1fffff);
        if (0xfd < uVar2) {
          uVar2 = 0xff;
        }
      }
    }
    local_60 = 0xffffffff;
    iVar3 = FUN_142620820(&local_78,pbVar1,uVar2);
    iVar4 = FUN_14250e6e0(param_2);
    iVar4 = iVar4 - (int)local_58;
    if (iVar3 < 2) {
      iVar7 = 0;
      if (iVar3 == 0) {
        iVar6 = 1;
        goto LAB_1426b10e1;
      }
    }
    else {
      if (local_4c < 1) {
        iVar7 = 0;
      }
      else {
        if (param_7 != (undefined4 *)0x0) {
          uVar5 = FUN_1426204f0(local_68 + 1,*local_68 >> 1);
          *param_7 = uVar5;
        }
        if (param_5 != (int *)0x0) {
          *param_5 = iVar4;
        }
        iVar7 = 1;
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = 1;
        }
      }
      iVar6 = 1;
      if (iVar3 == 2) goto LAB_1426b10e1;
    }
    iVar6 = 1;
    do {
      while( true ) {
        if ((local_50 <= iVar4) || (uVar2 = FUN_14250e570(param_2), (int)uVar2 < 0))
        goto LAB_1426b10e1;
        if ((*(uint *)(param_1 + 0x10) & 0x7f000000) == 0x1000000) {
          if (uVar2 == 0x200d) {
            uVar2 = 0xff;
          }
          else if (uVar2 == 0x200c) {
            uVar2 = 0xfe;
          }
          else {
            uVar2 = uVar2 - (*(uint *)(param_1 + 0x10) & 0x1fffff);
            if (0xfd < uVar2) {
              uVar2 = 0xffffffff;
            }
          }
        }
        iVar3 = FUN_1426208d0(&local_78,uVar2);
        iVar4 = FUN_14250e6e0(param_2);
        iVar4 = iVar4 - (int)local_58;
        iVar6 = iVar6 + 1;
        if (iVar3 < 2) break;
        if (iVar7 < local_4c) {
          if (param_7 != (undefined4 *)0x0) {
            uVar5 = FUN_1426204f0(local_68 + 1,*local_68 >> 1);
            param_7[iVar7] = uVar5;
          }
          if (param_5 != (int *)0x0) {
            param_5[iVar7] = iVar4;
          }
          if (param_6 != (undefined4 *)0x0) {
            param_6[iVar7] = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        if (iVar3 == 2) goto LAB_1426b10e1;
      }
    } while (iVar3 != 0);
  }
LAB_1426b10e1:
  if (param_8 != (int *)0x0) {
    *param_8 = iVar6;
  }
  FUN_1426204e0(&local_78);
  return iVar7;
}



// FUNCTION 1426b1210 Unwind@1426b1210 body=52 status=ok
// SIG undefined Unwind@1426b1210(void)

void Unwind_1426b1210(undefined8 param_1,longlong param_2)

{
  FUN_1426204e0(param_2 + 0x20);
  return;
}



// FUNCTION 1426b1250 FUN_1426b1250 body=22 status=ok
// SIG undefined FUN_1426b1250(void)

void FUN_1426b1250(undefined8 *param_1)

{
  *param_1 = icu_64::StringTrieBuilder::vftable;
  param_1[1] = 0;
  return;
}



// FUNCTION 1426b1270 FUN_1426b1270 body=48 status=ok
// SIG undefined FUN_1426b1270(void)

void FUN_1426b1270(undefined8 *param_1)

{
  *param_1 = icu_64::StringTrieBuilder::vftable;
  FUN_142502220(param_1[1]);
  param_1[1] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1426b12c0 FUN_1426b12c0 body=197 status=ok
// SIG undefined FUN_1426b12c0(void)

void FUN_1426b12c0(longlong param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    if (*param_4 < 1) {
      lVar1 = FUN_142501f70(&LAB_1426b12b0,&LAB_1426b12a0,0,param_3 * 2,param_4);
      *(longlong *)(param_1 + 8) = lVar1;
      if (*param_4 < 1) {
        if (lVar1 == 0) {
          *param_4 = 7;
        }
        else {
          FUN_142502340(lVar1,&LAB_1424b70f0);
        }
      }
    }
    plVar2 = (longlong *)FUN_1426b1550(param_1,0,param_3,0,param_4);
    if (*param_4 < 1) {
      (**(code **)(*plVar2 + 0x18))(plVar2,0xffffffff);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    }
    FUN_142502220(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  FUN_1426b1390(param_1,0,param_3,0);
  return;
}



// FUNCTION 1426b1390 FUN_1426b1390 body=441 status=ok
// SIG undefined FUN_1426b1390(void)

void FUN_1426b1390(longlong *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  int iVar8;
  
  iVar3 = (**(code **)(*param_1 + 0x10))();
  uVar4 = 0;
  if (iVar3 == param_4) {
    iVar3 = param_2 + 1;
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    param_2 = iVar3;
    if (iVar3 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x0001426b13f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1,uVar4,1);
      return;
    }
  }
  else {
    uVar7 = 0;
  }
  sVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
  sVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3 + -1,param_4);
  if (sVar1 == sVar2) {
    iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3 + -1,param_4);
    FUN_1426b1390(param_1,param_2,param_3,iVar3);
    iVar8 = iVar3 - param_4;
    iVar5 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar5 < iVar8) {
      iVar3 = iVar3 - iVar5;
      do {
        iVar8 = iVar8 - iVar5;
        (**(code **)(*param_1 + 0x78))(param_1,param_2,iVar3,iVar5);
        iVar6 = (**(code **)(*param_1 + 0x58))(param_1);
        (**(code **)(*param_1 + 0x70))(param_1,iVar6 + iVar5 + -1);
        iVar3 = iVar3 - iVar5;
      } while (iVar5 < iVar8);
    }
    (**(code **)(*param_1 + 0x78))(param_1,param_2,param_4,iVar8);
    iVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    iVar8 = iVar8 + iVar3 + -1;
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
    FUN_1426b1930(param_1,param_2,param_3,param_4,iVar3);
    iVar8 = iVar3 + -1;
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1);
    if (iVar5 < iVar3) {
      (**(code **)(*param_1 + 0x70))(param_1,iVar8);
      iVar8 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001426b1546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar7 & 0xffffffff,uVar4,iVar8);
  return;
}



// FUNCTION 1426b1550 FUN_1426b1550 body=977 status=ok
// SIG undefined FUN_1426b1550(void)

undefined8 * FUN_1426b1550(longlong *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar5 = 0;
  if (0 < *param_5) {
    return (undefined8 *)0x0;
  }
  iVar4 = (**(code **)(*param_1 + 0x10))();
  if (iVar4 == param_4) {
    iVar11 = param_2 + 1;
    iVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    param_2 = iVar11;
    if (iVar11 == param_3) {
      puVar7 = (undefined8 *)FUN_1426b1be0(param_1,iVar5,param_5);
      return puVar7;
    }
  }
  sVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
  sVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_3 + -1,param_4);
  if (sVar2 != sVar3) {
    iVar6 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
    lVar9 = FUN_1426b1cb0(param_1,param_2,param_3,param_4,CONCAT44(uVar12,iVar6),param_5);
    puVar7 = (undefined8 *)thunk_FUN_1424da030(0x28);
    iVar11 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      if (lVar9 != 0) {
        iVar11 = *(int *)(lVar9 + 8);
      }
      *(int *)(puVar7 + 1) = iVar11 + iVar6 * 0x25 + 0x23999776;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
      *puVar7 = icu_64::StringTrieBuilder::BranchHeadNode::vftable;
      *(int *)(puVar7 + 3) = iVar6;
      puVar7[4] = lVar9;
      goto LAB_1426b17bb;
    }
LAB_1426b186b:
    puVar8 = (undefined8 *)0x0;
    iVar5 = *param_5;
    goto joined_r0x0001426b1871;
  }
  iVar11 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3 + -1,param_4);
  puVar7 = (undefined8 *)FUN_1426b1550(param_1,param_2,param_3,iVar11,param_5);
  iVar10 = iVar11 - param_4;
  iVar6 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar6 < iVar10) {
    iVar11 = iVar11 - iVar6;
    do {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x68))(param_1,param_2,iVar11,iVar6,puVar7);
      if (*param_5 < 1) {
        if (puVar7 == (undefined8 *)0x0) {
          *param_5 = 7;
          goto LAB_1426b1670;
        }
        lVar9 = FUN_142503070(param_1[1],puVar7);
        if (lVar9 == 0) {
          FUN_142502d50(param_1[1],puVar7,1,param_5);
          if (0 < *param_5) goto LAB_1426b16a5;
        }
        else {
          (**(code **)*puVar7)(puVar7,1);
          puVar7 = *(undefined8 **)(lVar9 + 0x10);
        }
      }
      else {
        if (puVar7 != (undefined8 *)0x0) {
LAB_1426b16a5:
          (**(code **)*puVar7)(puVar7,1);
        }
LAB_1426b1670:
        puVar7 = (undefined8 *)0x0;
      }
      iVar10 = iVar10 - iVar6;
      iVar11 = iVar11 - iVar6;
    } while (iVar6 < iVar10);
  }
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x68))(param_1,param_2,param_4,iVar10,puVar7);
LAB_1426b17bb:
  puVar8 = puVar7;
  if ((iVar4 == param_4) && (puVar7 != (undefined8 *)0x0)) {
    cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (cVar1 == '\0') {
      puVar8 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar8 == (undefined8 *)0x0) goto LAB_1426b186b;
      if (*param_5 < 1) {
        lVar9 = FUN_142503070(param_1[1],puVar7);
        if (lVar9 == 0) {
          FUN_142502d50(param_1[1],puVar7,1,param_5);
          if (*param_5 < 1) goto LAB_1426b1919;
          goto LAB_1426b180d;
        }
        (**(code **)*puVar7)(puVar7,1);
        puVar7 = *(undefined8 **)(lVar9 + 0x10);
        if (puVar7 == (undefined8 *)0x0) goto LAB_1426b181a;
LAB_1426b1919:
        iVar4 = *(int *)(puVar7 + 1) * 0x25 + -0x4977782e;
      }
      else {
LAB_1426b180d:
        (**(code **)*puVar7)(puVar7,1);
LAB_1426b181a:
        iVar4 = -0x4977782e;
        puVar7 = (undefined8 *)0x0;
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = icu_64::StringTrieBuilder::IntermediateValueNode::vftable;
      puVar8[3] = puVar7;
      *(undefined1 *)(puVar8 + 2) = 1;
      *(int *)((longlong)puVar8 + 0x14) = iVar5;
    }
    else {
      *(undefined1 *)(puVar7 + 2) = 1;
      *(int *)((longlong)puVar7 + 0x14) = iVar5;
      iVar4 = *(int *)(puVar7 + 1) * 0x25;
    }
    *(int *)(puVar8 + 1) = iVar4 + iVar5;
  }
  iVar5 = *param_5;
joined_r0x0001426b1871:
  if (iVar5 < 1) {
    if (puVar8 == (undefined8 *)0x0) {
      *param_5 = 7;
      return (undefined8 *)0x0;
    }
    lVar9 = FUN_142503070(param_1[1],puVar8);
    if (lVar9 != 0) {
      (**(code **)*puVar8)(puVar8,1);
      return *(undefined8 **)(lVar9 + 0x10);
    }
    FUN_142502d50(param_1[1],puVar8,1,param_5);
    if (*param_5 < 1) {
      return puVar8;
    }
  }
  else if (puVar8 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  (**(code **)*puVar8)(puVar8,1);
  return (undefined8 *)0x0;
}



// FUNCTION 1426b1930 FUN_1426b1930 body=623 status=ok
// SIG undefined FUN_1426b1930(void)

void FUN_1426b1930(longlong *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  undefined4 uStack_e0;
  int local_dc [5];
  int local_c8 [8];
  undefined4 auStack_a8 [16];
  undefined2 auStack_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_ec = param_3;
  iVar4 = (**(code **)(*param_1 + 0x50))();
  uVar13 = 0;
  if (iVar4 < param_5) {
    uVar13 = 0;
    iVar4 = param_2;
    do {
      iVar9 = param_5 / 2;
      param_2 = (**(code **)(*param_1 + 0x38))(param_1,iVar4,param_4,iVar9);
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
      auStack_68[uVar13] = uVar3;
      local_f8 = iVar9;
      uVar5 = FUN_1426b1930(param_1,iVar4,param_2,param_4);
      auStack_a8[uVar13] = uVar5;
      uVar13 = uVar13 + 1;
      param_5 = param_5 - iVar9;
      iVar9 = (**(code **)(*param_1 + 0x50))(param_1);
      iVar4 = param_2;
    } while (iVar9 < param_5);
  }
  uVar10 = 1;
  if (1 < (int)(param_5 - 1U)) {
    uVar10 = (ulonglong)(param_5 - 1U);
  }
  local_f0 = param_4 + 1;
  uVar8 = 1;
  local_e8 = uVar10;
  do {
    local_dc[uVar8 + 4] = param_2;
    uVar5 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_2 + 1,param_4,uVar5);
    if (param_2 == iVar4 + -1) {
      iVar9 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
      bVar2 = local_f0 == iVar9;
    }
    else {
      bVar2 = false;
    }
    *(bool *)((longlong)&uStack_e0 + uVar8 + 3) = bVar2;
    uVar7 = uVar8 + 1;
    bVar2 = uVar8 != uVar10;
    uVar8 = uVar7;
    param_2 = iVar4;
  } while (bVar2);
  local_dc[local_e8 + 5] = iVar4;
  do {
    if (*(char *)((longlong)&uStack_e0 + uVar7 + 2) == '\0') {
      uVar5 = FUN_1426b1390(param_1,local_dc[uVar7 + 3],local_dc[uVar7 + 4],local_f0);
      (&uStack_e0)[uVar7] = uVar5;
    }
    uVar7 = uVar7 - 1;
  } while (1 < (longlong)uVar7);
  FUN_1426b1390(param_1,iVar4,local_ec,local_f0);
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1,iVar4,param_4);
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1,uVar3);
  if (1 < param_5) {
    lVar12 = (ulonglong)(param_5 - 2) + 1;
    do {
      iVar9 = local_dc[lVar12 + 4];
      cVar1 = *(char *)((longlong)&uStack_e0 + lVar12 + 3);
      if (cVar1 == '\0') {
        iVar4 = iVar4 - local_dc[lVar12];
      }
      else {
        iVar4 = (**(code **)(*param_1 + 0x20))(param_1,iVar9);
      }
      (**(code **)(*param_1 + 0x80))(param_1,iVar4,cVar1);
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,iVar9,param_4);
      iVar4 = (**(code **)(*param_1 + 0x70))(param_1,uVar3);
      lVar11 = lVar12 + -1;
      bVar2 = 0 < lVar12;
      lVar12 = lVar11;
    } while (lVar11 != 0 && bVar2);
  }
  if (0 < (int)uVar13) {
    uVar13 = (uVar13 & 0xffffffff) + 1;
    do {
      uVar6 = (int)uVar13 - 2;
      (**(code **)(*param_1 + 0x90))(param_1,auStack_a8[uVar6]);
      (**(code **)(*param_1 + 0x70))(param_1,auStack_68[uVar6]);
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 1426b1be0 FUN_1426b1be0 body=204 status=ok
// SIG undefined FUN_1426b1be0(void)

undefined8 * FUN_1426b1be0(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined **local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  
  if (0 < *param_3) {
    return (undefined8 *)0x0;
  }
  local_3c = 0;
  local_48 = icu_64::StringTrieBuilder::FinalValueNode::vftable;
  local_40 = param_2 + 0x2777775;
  local_38 = param_2;
  lVar1 = FUN_142503070(*(undefined8 *)(param_1 + 8),&local_48);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
    else {
      *(int *)(puVar2 + 1) = param_2 + 0x2777775;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *puVar2 = icu_64::StringTrieBuilder::FinalValueNode::vftable;
      *(int *)(puVar2 + 2) = param_2;
      FUN_142502d50(*(undefined8 *)(param_1 + 8),puVar2,1,param_3);
      if (*param_3 < 1) goto LAB_1426b1c92;
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
  }
LAB_1426b1c92:
  FUN_1424b70d0(&local_48);
  return puVar2;
}



// FUNCTION 1426b1cb0 FUN_1426b1cb0 body=1235 status=ok
// SIG undefined FUN_1426b1cb0(void)

undefined8 *
FUN_1426b1cb0(longlong *param_1,int param_2,undefined8 param_3,int param_4,int param_5,int *param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar13;
  ushort auStack_d8 [16];
  longlong alStack_b8 [15];
  
  uVar11 = 0;
  if (0 < *param_6) {
    return (undefined8 *)0x0;
  }
  iVar2 = (**(code **)(*param_1 + 0x50))();
  if (iVar2 < param_5) {
    uVar11 = 0;
    iVar2 = param_2;
    do {
      uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
      iVar12 = param_5 / 2;
      param_2 = (**(code **)(*param_1 + 0x38))(param_1,iVar2,param_4,iVar12);
      uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
      auStack_d8[uVar11] = uVar1;
      in_stack_ffffffffffffff08 = CONCAT44(uVar13,iVar12);
      lVar7 = FUN_1426b1cb0(param_1,iVar2,param_2,param_4,in_stack_ffffffffffffff08,param_6);
      alStack_b8[uVar11] = lVar7;
      uVar11 = uVar11 + 1;
      param_5 = param_5 - iVar12;
      iVar12 = (**(code **)(*param_1 + 0x50))(param_1);
      iVar2 = param_2;
    } while (iVar12 < param_5);
  }
  if (0 < *param_6) {
    return (undefined8 *)0x0;
  }
  puVar8 = (undefined8 *)thunk_FUN_1424da030(0x68);
  if (puVar8 == (undefined8 *)0x0) {
    *param_6 = 7;
    return (undefined8 *)0x0;
  }
  puVar8[1] = 0x444444;
  *puVar8 = icu_64::StringTrieBuilder::ListBranchNode::vftable;
  *(undefined4 *)(puVar8 + 8) = 0;
  iVar12 = param_4 + 1;
  iVar2 = 1;
  if (1 < param_5 + -1) {
    iVar2 = param_5 + -1;
  }
  do {
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_2 + 1,param_4,uVar3);
    if ((param_2 == iVar4 + -1) &&
       (iVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2), iVar12 == iVar5)) {
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      *(short *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 2 + 0x58) = (short)uVar3;
      puVar8[(longlong)*(int *)(puVar8 + 8) + 3] = 0;
      *(int *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 4 + 0x44) = iVar6;
      *(int *)(puVar8 + 8) = *(int *)(puVar8 + 8) + 1;
      iVar5 = (*(int *)(puVar8 + 1) * 0x25 + (uVar3 & 0xffff)) * 0x25;
    }
    else {
      lVar7 = FUN_1426b1550(param_1,param_2,iVar4,iVar12,param_6);
      *(short *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 2 + 0x58) = (short)uVar3;
      puVar8[(longlong)*(int *)(puVar8 + 8) + 3] = lVar7;
      *(undefined4 *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 4 + 0x44) = 0;
      *(int *)(puVar8 + 8) = *(int *)(puVar8 + 8) + 1;
      if (lVar7 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(lVar7 + 8);
      }
      iVar6 = (*(int *)(puVar8 + 1) * 0x25 + (uVar3 & 0xffff)) * 0x25;
    }
    *(int *)(puVar8 + 1) = iVar6 + iVar5;
    iVar2 = iVar2 + -1;
    param_2 = iVar4;
  } while (iVar2 != 0);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,iVar4,param_4);
  if ((iVar4 == (int)param_3 + -1) &&
     (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,iVar4), iVar12 == iVar2)) {
    iVar12 = (**(code **)(*param_1 + 0x20))(param_1,iVar4);
    *(ushort *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 2 + 0x58) = uVar1;
    puVar8[(longlong)*(int *)(puVar8 + 8) + 3] = 0;
    *(int *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 4 + 0x44) = iVar12;
    *(int *)(puVar8 + 8) = *(int *)(puVar8 + 8) + 1;
    iVar2 = (*(int *)(puVar8 + 1) * 0x25 + (uint)uVar1) * 0x25;
  }
  else {
    lVar7 = FUN_1426b1550(param_1,iVar4,param_3,iVar12,param_6);
    *(ushort *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 2 + 0x58) = uVar1;
    puVar8[(longlong)*(int *)(puVar8 + 8) + 3] = lVar7;
    *(undefined4 *)((longlong)puVar8 + (longlong)*(int *)(puVar8 + 8) * 4 + 0x44) = 0;
    *(int *)(puVar8 + 8) = *(int *)(puVar8 + 8) + 1;
    if (lVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lVar7 + 8);
    }
    iVar12 = (*(int *)(puVar8 + 1) * 0x25 + (uint)uVar1) * 0x25;
  }
  *(int *)(puVar8 + 1) = iVar12 + iVar2;
  if (*param_6 < 1) {
    lVar7 = FUN_142503070(param_1[1],puVar8);
    if (lVar7 != 0) {
      (**(code **)*puVar8)(puVar8,1);
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      goto LAB_1426b206e;
    }
    FUN_142502d50(param_1[1],puVar8,1,param_6);
    if (*param_6 < 1) goto LAB_1426b206e;
  }
  (**(code **)*puVar8)(puVar8,1);
  puVar8 = (undefined8 *)0x0;
LAB_1426b206e:
  if ((int)uVar11 < 1) {
    return puVar8;
  }
  uVar11 = (uVar11 & 0xffffffff) + 1;
  do {
    puVar9 = (undefined8 *)thunk_FUN_1424da030();
    if (puVar9 == (undefined8 *)0x0) {
      if (*param_6 < 1) {
        *param_6 = 7;
      }
LAB_1426b20ad:
      puVar9 = (undefined8 *)0x0;
    }
    else {
      uVar10 = uVar11 - 2 & 0xffffffff;
      lVar7 = alStack_b8[uVar10];
      iVar12 = 0;
      iVar2 = 0;
      if (lVar7 != 0) {
        iVar2 = *(int *)(lVar7 + 8);
      }
      uVar1 = auStack_d8[uVar10];
      if (puVar8 != (undefined8 *)0x0) {
        iVar12 = *(int *)(puVar8 + 1);
      }
      *(uint *)(puVar9 + 1) = iVar12 + ((uint)uVar1 * 0x25 + iVar2) * 0x25 + -0xbaaec9f;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = icu_64::StringTrieBuilder::SplitBranchNode::vftable;
      *(ushort *)(puVar9 + 3) = uVar1;
      puVar9[4] = lVar7;
      puVar9[5] = puVar8;
      if (0 < *param_6) {
LAB_1426b20a0:
        (**(code **)*puVar9)(puVar9,1);
        goto LAB_1426b20ad;
      }
      lVar7 = FUN_142503070(param_1[1],puVar9);
      if (lVar7 == 0) {
        FUN_142502d50(param_1[1],puVar9,1,param_6);
        if (0 < *param_6) goto LAB_1426b20a0;
      }
      else {
        (**(code **)*puVar9)(puVar9,1);
        puVar9 = *(undefined8 **)(lVar7 + 0x10);
      }
    }
    uVar11 = uVar11 - 1;
    puVar8 = puVar9;
    if (uVar11 < 2) {
      return puVar9;
    }
  } while( true );
}



// FUNCTION 1426b21b0 FUN_1426b21b0 body=13 status=ok
// SIG undefined FUN_1426b21b0(void)

void FUN_1426b21b0(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 1426b21c0 FUN_1426b21c0 body=87 status=ok
// SIG undefined FUN_1426b21c0(void)

bool FUN_1426b21c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
      bVar4 = *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1426b2220 FUN_1426b2220 body=39 status=ok
// SIG undefined FUN_1426b2220(void)

void FUN_1426b2220(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,*(undefined4 *)(param_1 + 0x10),1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 1426b2250 FUN_1426b2250 body=110 status=ok
// SIG undefined FUN_1426b2250(void)

bool FUN_1426b2250(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10))) &&
       ((*(char *)(param_1 + 0x10) == '\0' || (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))
        ))) {
      bVar4 = *(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x18);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1426b22c0 FUN_1426b22c0 body=38 status=ok
// SIG undefined FUN_1426b22c0(void)

void FUN_1426b22c0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                      (*(longlong **)(param_1 + 0x18),param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 1426b22f0 FUN_1426b22f0 body=50 status=ok
// SIG undefined FUN_1426b22f0(void)

void FUN_1426b22f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 1426b2330 FUN_1426b2330 body=118 status=ok
// SIG undefined FUN_1426b2330(void)

bool FUN_1426b2330(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10))) &&
       (((*(char *)(param_1 + 0x10) == '\0' ||
         (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
        (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))) {
      bVar4 = *(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1426b23b0 FUN_1426b23b0 body=38 status=ok
// SIG undefined FUN_1426b23b0(void)

void FUN_1426b23b0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                      (*(longlong **)(param_1 + 0x20),param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 1426b23e0 FUN_1426b23e0 body=178 status=ok
// SIG undefined FUN_1426b23e0(void)

bool FUN_1426b23e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (param_1 == param_2) {
    bVar6 = true;
  }
  else {
    lVar3 = __RTtypeid();
    lVar4 = __RTtypeid(param_2);
    iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
    if ((iVar2 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
      uVar1 = *(uint *)(param_1 + 0x40);
      if ((int)uVar1 < 1) {
        bVar6 = true;
      }
      else if (*(short *)(param_1 + 0x58) == *(short *)(param_2 + 0x58)) {
        bVar6 = false;
        uVar5 = 0;
        while ((*(int *)(param_1 + 0x44 + uVar5 * 4) == *(int *)(param_2 + 0x44 + uVar5 * 4) &&
               (*(longlong *)(param_1 + 0x18 + uVar5 * 8) ==
                *(longlong *)(param_2 + 0x18 + uVar5 * 8)))) {
          bVar6 = (ulonglong)uVar1 <= uVar5 + 1;
          if ((ulonglong)uVar1 - 1 == uVar5) {
            return bVar6;
          }
          lVar3 = uVar5 * 2;
          lVar4 = uVar5 * 2;
          uVar5 = uVar5 + 1;
          if (*(short *)(param_1 + 0x5a + lVar3) != *(short *)(param_2 + 0x5a + lVar4)) {
            return bVar6;
          }
        }
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
    }
  }
  return bVar6;
}



// FUNCTION 1426b24a0 FUN_1426b24a0 body=90 status=ok
// SIG undefined FUN_1426b24a0(void)

void FUN_1426b24a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(int *)(param_1 + 0x10) = param_2;
    iVar1 = *(int *)(param_1 + 0x40);
    lVar3 = (longlong)iVar1;
    plVar2 = *(longlong **)(param_1 + 0x10 + lVar3 * 8);
    if (plVar2 != (longlong *)0x0) {
      param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    }
    if (1 < iVar1) {
      do {
        plVar2 = *(longlong **)(param_1 + 8 + lVar3 * 8);
        if (plVar2 != (longlong *)0x0) {
          param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2 + -1);
        }
        lVar3 = lVar3 + -1;
      } while (1 < lVar3);
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}



// FUNCTION 1426b2500 FUN_1426b2500 body=275 status=ok
// SIG undefined FUN_1426b2500(void)

void FUN_1426b2500(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar6 = (longlong)*(int *)(param_1 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x10 + lVar6 * 8);
  piVar5 = (int *)((longlong)plVar2 + 0xc);
  if (plVar2 == (longlong *)0x0) {
    piVar5 = (int *)(param_1 + 0x10);
  }
  iVar1 = *piVar5;
  do {
    plVar3 = *(longlong **)(param_1 + 8 + lVar6 * 8);
    if (((plVar3 != (longlong *)0x0) && (iVar4 = *(int *)((longlong)plVar3 + 0xc), iVar4 < 0)) &&
       ((iVar4 < iVar1 || (*(int *)(param_1 + 0x10) < iVar4)))) {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
    }
    lVar6 = lVar6 + -1;
  } while (1 < lVar6);
  iVar1 = *(int *)(param_1 + 0x40);
  lVar6 = (longlong)iVar1 + -1;
  if (plVar2 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x80))(param_2,*(undefined4 *)(param_1 + 0x40 + (longlong)iVar1 * 4),1);
  }
  else {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    lVar6 = (longlong)(int)lVar6;
  }
  iVar4 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined2 *)(param_1 + 0x58 + lVar6 * 2));
  *(int *)(param_1 + 0xc) = iVar4;
  if (1 < iVar1) {
    lVar6 = (ulonglong)(iVar1 - 2) + 0x2c;
    do {
      lVar7 = *(longlong *)(param_1 + -0x148 + lVar6 * 8);
      if (lVar7 != 0) {
        iVar4 = iVar4 - *(int *)(lVar7 + 0xc);
      }
      else {
        iVar4 = *(int *)(param_1 + -0x6c + lVar6 * 4);
      }
      (**(code **)(*param_2 + 0x80))(param_2,iVar4,lVar7 == 0);
      iVar4 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined2 *)(param_1 + lVar6 * 2));
      *(int *)(param_1 + 0xc) = iVar4;
      lVar7 = lVar6 + -0x2c;
      bVar8 = lVar6 != 0x2c;
      lVar6 = lVar6 + -1;
    } while (bVar8 && -1 < lVar7);
  }
  return;
}



// FUNCTION 1426b2620 FUN_1426b2620 body=109 status=ok
// SIG undefined FUN_1426b2620(void)

bool FUN_1426b2620(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
        (*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18))) &&
       (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20))) {
      bVar4 = *(longlong *)(param_1 + 0x28) == *(longlong *)(param_2 + 0x28);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1426b2690 FUN_1426b2690 body=54 status=ok
// SIG undefined FUN_1426b2690(void)

void FUN_1426b2690(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                      (*(longlong **)(param_1 + 0x28),param_2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                      (*(longlong **)(param_1 + 0x20),iVar1 + -1);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  return;
}



// FUNCTION 1426b26d0 FUN_1426b26d0 body=105 status=ok
// SIG undefined FUN_1426b26d0(void)

void FUN_1426b26d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  iVar1 = *(int *)((longlong)plVar2 + 0xc);
  if ((iVar1 < 0) &&
     ((*(int *)(param_1 + 0x10) < iVar1 || (iVar1 < *(int *)((longlong)plVar4 + 0xc))))) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    plVar4 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xc));
  uVar3 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined2 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



// FUNCTION 1426b2740 FUN_1426b2740 body=118 status=ok
// SIG undefined FUN_1426b2740(void)

bool FUN_1426b2740(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10))) &&
       (((*(char *)(param_1 + 0x10) == '\0' ||
         (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
        (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))) {
      bVar4 = *(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1426b27c0 FUN_1426b27c0 body=38 status=ok
// SIG undefined FUN_1426b27c0(void)

void FUN_1426b27c0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                      (*(longlong **)(param_1 + 0x20),param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 1426b27f0 FUN_1426b27f0 body=92 status=ok
// SIG undefined FUN_1426b27f0(void)

void FUN_1426b27f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = (**(code **)(*param_2 + 0x58))(param_2);
  iVar4 = *(int *)(param_1 + 0x18) + -1;
  if (iVar2 < iVar1) {
    (**(code **)(*param_2 + 0x70))(param_2,iVar4);
    iVar4 = 0;
  }
  uVar3 = (**(code **)(*param_2 + 0x88))
                    (param_2,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),iVar4);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



// FUNCTION 1426b2850 FUN_1426b2850 body=2 status=ok
// SIG undefined FUN_1426b2850(void)

void FUN_1426b2850(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1426b2860 FUN_1426b2860 body=38 status=ok
// SIG undefined FUN_1426b2860(void)

undefined8 FUN_1426b2860(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b2890 FUN_1426b2890 body=38 status=ok
// SIG undefined FUN_1426b2890(void)

undefined8 FUN_1426b2890(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b28c0 FUN_1426b28c0 body=38 status=ok
// SIG undefined FUN_1426b28c0(void)

undefined8 FUN_1426b28c0(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b28f0 FUN_1426b28f0 body=38 status=ok
// SIG undefined FUN_1426b28f0(void)

undefined8 FUN_1426b28f0(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b2920 FUN_1426b2920 body=38 status=ok
// SIG undefined FUN_1426b2920(void)

undefined8 FUN_1426b2920(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426b2950 FUN_1426b2950 body=2393 status=ok
// SIG undefined FUN_1426b2950(void)

void FUN_1426b2950(double param_1,uint param_2,uint param_3,longlong *param_4,uint *param_5,
                  int *param_6)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  uint local_c4;
  longlong *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  int local_88;
  longlong local_80;
  int local_78;
  int local_6c;
  ulonglong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 < 2) {
    uVar18 = (ulonglong)param_1 & 0xfffffffffffff;
    iVar15 = (uVar5 >> 0x14 & 0x7ff) - 0x433;
    uVar14 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> uVar14 == 0; uVar14 = uVar14 - 1) {
      }
    }
    iVar3 = -0x427 - (int)(uVar14 ^ 0x3f);
    uVar14 = uVar18 << ((char)(uVar14 ^ 0x3f) - 0xbU & 0x3f);
    if (((ulonglong)param_1 & 0x7ff0000000000000) != 0) {
      iVar3 = iVar15;
      uVar14 = uVar18 + 0x10000000000000;
    }
    if (param_2 == 0) {
      uVar19 = uVar18 + 0x10000000000000;
      if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
        uVar19 = uVar18;
        iVar15 = -0x432;
      }
      uVar11 = uVar19 * 2 + 1;
      iVar22 = iVar15 + -1;
      do {
        uVar13 = uVar11 << 10;
        iVar22 = iVar22 + -10;
        bVar24 = uVar11 < 0x100000000000;
        uVar11 = uVar13;
      } while (bVar24);
      for (; -1 < (longlong)uVar13; uVar13 = uVar13 * 2) {
        iVar22 = iVar22 + -1;
      }
      lVar8 = uVar19 * 2;
      iVar7 = iVar15 + -1;
      if (uVar18 == 0 && ((ulonglong)param_1 & 0x7fe0000000000000) != 0) {
        lVar8 = uVar19 << 2;
        iVar7 = iVar15 + -2;
      }
    }
    else {
      fVar25 = (float)param_1;
      iVar15 = ((uint)fVar25 >> 0x17 & 0xff) - 0x96;
      uVar17 = (uint)fVar25 & 0x7fffff;
      uVar5 = uVar17 + 0x800000;
      if (((uint)fVar25 & 0x7f800000) == 0) {
        uVar5 = uVar17;
        iVar15 = -0x95;
      }
      uVar19 = (ulonglong)uVar5;
      uVar18 = uVar19 * 2 + 1;
      iVar22 = iVar15 + -1;
      do {
        uVar13 = uVar18 << 10;
        iVar22 = iVar22 + -10;
        bVar24 = uVar18 < 0x100000000000;
        uVar18 = uVar13;
      } while (bVar24);
      for (; -1 < (longlong)uVar13; uVar13 = uVar13 * 2) {
        iVar22 = iVar22 + -1;
      }
      lVar8 = uVar19 * 2;
      iVar7 = iVar15 + -1;
      if (uVar17 == 0 && ((uint)fVar25 & 0x7f000000) != 0) {
        lVar8 = uVar19 << 2;
        iVar7 = iVar15 + -2;
      }
    }
    lVar2 = *param_4;
    local_58 = 0;
    local_50 = 0;
    local_c0 = param_4;
    FUN_1427244c0(-0x71 - iVar3,-0x55 - iVar3,&local_58,&local_6c);
    local_68 = uVar14 << 0xb;
    local_60 = iVar3 + -0xb;
    FUN_142724570(&local_68,&local_58);
    local_80 = lVar8 + -1 << ((char)iVar7 - (char)iVar22 & 0x3fU);
    local_78 = iVar22;
    FUN_142724570(&local_80,&local_58);
    local_90 = uVar13;
    local_88 = iVar22;
    FUN_142724570(&local_90,&local_58);
    local_a0 = local_90 + 1;
    local_b0 = local_90;
    local_d0 = (ulonglong)(uint)-local_60;
    bVar6 = (byte)-local_60;
    uVar19 = 1L << (bVar6 & 0x3f);
    uVar14 = local_a0 >> (bVar6 & 0x3f);
    local_98 = uVar19 - 1;
    uVar18 = local_98 & local_a0;
    uVar5 = local_60 * 0x4d1 + 0x13911 >> 0xc;
    if (*(uint *)(&DAT_149d59c14 + (longlong)(int)uVar5 * 4) <= (uint)uVar14) {
      uVar5 = uVar5 + 1;
    }
    uVar11 = (local_90 - local_80) + 2;
    uVar12 = (ulonglong)*(uint *)(&DAT_149d59c10 + (longlong)(int)uVar5 * 4);
    *param_5 = 0;
    local_a8 = (local_90 - local_80) - 2;
    local_b8 = local_68;
    local_a0 = local_a0 - local_68;
    uVar13 = local_a0 - 1;
    local_c4 = (int)uVar5 >> 0x1f & uVar5;
    local_d8 = local_a0 + 1;
    uVar21 = local_a0;
LAB_1426b2f1b:
    if (0 < (int)uVar5) goto code_r0x0001426b2f24;
    local_d8 = local_68 * 10 + local_90 * -10;
    lVar8 = 1;
    uVar5 = local_c4;
    do {
      lVar4 = lVar8 * 10;
      uVar11 = uVar11 * 10;
      *(char *)(lVar2 + (int)*param_5) = (char)(uVar18 * 10 >> (bVar6 & 0x3f)) + '0';
      uVar17 = *param_5;
      *param_5 = uVar17 + 1;
      uVar18 = uVar18 * 10 & local_98;
      if (uVar18 <= uVar11 && uVar11 - uVar18 != 0) {
        bVar24 = uVar11 - uVar18 < uVar19;
        uVar14 = uVar18;
        if (!bVar24) {
          uVar21 = lVar4 * local_a0 + lVar8 * -10;
          uVar13 = uVar21 - uVar18;
          if (uVar18 <= uVar21 && uVar13 != 0) {
            uVar23 = (uVar11 - uVar19) - uVar18;
            uVar12 = uVar18;
            while ((uVar14 = uVar12 + uVar19, uVar14 < uVar21 ||
                   (local_d8 * lVar8 + uVar19 + uVar12 <= uVar13))) {
              pcVar1 = (char *)(lVar2 + (int)uVar17);
              *pcVar1 = *pcVar1 + -1;
              bVar24 = uVar23 < uVar19;
              uVar23 = uVar23 - uVar19;
              if ((uVar21 <= uVar14) || (uVar13 = uVar13 - uVar19, uVar12 = uVar14, bVar24))
              goto LAB_1426b3160;
            }
            bVar24 = false;
            uVar14 = uVar12;
          }
        }
LAB_1426b3160:
        uVar13 = lVar4 * local_a0 + lVar4;
        local_e0 = (ulonglong)uVar5;
        if (((uVar13 <= uVar14) || (bVar24)) ||
           ((uVar13 <= uVar14 + uVar19 && (uVar13 - uVar14 <= (uVar14 + uVar19) - uVar13)))) {
          uVar21 = (ulonglong)
                   (uVar14 <= uVar11 + lVar8 * -0x28 && (ulonglong)(lVar8 * 0x14) <= uVar14);
        }
        else {
          uVar21 = 0;
        }
      }
      uVar5 = uVar5 - 1;
      lVar8 = lVar4;
    } while (uVar11 <= uVar18);
LAB_1426b3199:
    if ((uVar21 & 1) == 0) goto LAB_1426b3218;
    local_6c = uVar5 - local_6c;
    param_4 = local_c0;
    goto LAB_1426b31ac;
  }
  if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1425e8c80();
  }
  pcVar1 = (char *)*param_4;
  uVar18 = (ulonglong)param_1 & 0xfffffffffffff;
  uVar14 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> uVar14 == 0; uVar14 = uVar14 - 1) {
    }
  }
  iVar15 = -0x427 - (int)(uVar14 ^ 0x3f);
  uVar14 = uVar18 << ((char)(uVar14 ^ 0x3f) - 0xbU & 0x3f);
  if (((ulonglong)param_1 & 0x7ff0000000000000) != 0) {
    iVar15 = (uVar5 >> 0x14 & 0x7ff) - 0x433;
    uVar14 = (ulonglong)param_1 | 0x10000000000000;
  }
  local_58 = 0;
  local_50 = 0;
  FUN_1427244c0(-0x71 - iVar15,-0x55 - iVar15,&local_58,&local_80);
  local_68 = uVar14 << 0xb;
  local_60 = iVar15 + -0xb;
  FUN_142724570(&local_68,&local_58);
  bVar6 = -(char)local_60;
  uVar19 = 1L << (bVar6 & 0x3f);
  uVar18 = uVar19 - 1 & local_68;
  uVar14 = local_68 >> (bVar6 & 0x3f);
  uVar5 = local_60 * 0x4d1 + 0x13911 >> 0xc;
  if (*(uint *)(&DAT_149d59c14 + (longlong)(int)uVar5 * 4) <= (uint)uVar14) {
    uVar5 = uVar5 + 1;
  }
  uVar11 = (ulonglong)*(uint *)(&DAT_149d59c10 + (longlong)(int)uVar5 * 4);
  *param_5 = 0;
  uVar20 = 0;
  uVar17 = uVar5;
  if (0 < (int)uVar5) {
    do {
      uVar13 = uVar14 & 0xffffffff;
      uVar14 = uVar13 % uVar11;
      pcVar1[(int)uVar20] = (char)(uVar13 / uVar11) + '0';
      uVar20 = *param_5 + 1;
      *param_5 = uVar20;
      uVar5 = uVar17 - 1;
      if (param_3 == 1) goto LAB_1426b31d4;
      uVar11 = uVar11 / 10;
      param_3 = param_3 - 1;
      bVar24 = 1 < uVar17;
      uVar17 = uVar5;
    } while (bVar24);
  }
  if (param_3 == 0) {
LAB_1426b31d4:
    uVar11 = uVar11 << (bVar6 & 0x3f);
    if (uVar11 < 3) goto LAB_1426b3218;
    uVar18 = ((uVar14 & 0xffffffff) << (bVar6 & 0x3f)) + uVar18;
    if ((uVar11 - uVar18 <= uVar18) || (uVar11 + uVar18 * -2 < 2)) {
      if ((uVar18 < 2) || (uVar18 - 1 < uVar11 - (uVar18 - 1))) goto LAB_1426b3218;
      pcVar1[(longlong)(int)uVar20 + -1] = pcVar1[(longlong)(int)uVar20 + -1] + '\x01';
      if (1 < (int)uVar20) {
        uVar14 = (longlong)(int)uVar20 - 1U & 0xffffffff;
        cVar9 = pcVar1[uVar14];
        lVar8 = uVar14 + 1;
        uVar20 = uVar20 - 2;
        do {
          if (cVar9 != ':') break;
          pcVar1[lVar8 + -1] = '0';
          cVar9 = pcVar1[uVar20] + '\x01';
          pcVar1[uVar20] = cVar9;
          lVar8 = lVar8 + -1;
          uVar20 = uVar20 - 1;
        } while (1 < lVar8);
      }
LAB_1426b32d1:
      if (*pcVar1 == ':') {
        *pcVar1 = '1';
        uVar5 = uVar5 + 1;
      }
    }
    local_6c = uVar5 - (int)local_80;
  }
  else {
    if (((int)param_3 < 1) || (uVar18 < 2)) goto LAB_1426b3218;
    iVar15 = -uVar5;
    uVar14 = 1;
    do {
      uVar11 = uVar14;
      uVar14 = uVar11 * 10;
      pcVar1[(int)uVar20] = (char)(uVar18 * 10 >> (bVar6 & 0x3f)) + '0';
      uVar5 = *param_5;
      uVar20 = uVar5 + 1;
      *param_5 = uVar20;
      uVar17 = param_3 - 1;
      uVar18 = uVar18 * 10 & uVar19 - 1;
      iVar15 = iVar15 + 1;
      if (param_3 < 2) break;
      param_3 = uVar17;
    } while (uVar14 < uVar18);
    if (((uVar17 != 0) || (uVar19 <= uVar14)) || (uVar19 + uVar11 * -10 <= uVar14))
    goto LAB_1426b3218;
    if (uVar19 - uVar18 <= uVar18) {
      if (uVar18 <= uVar14) goto LAB_1426b3218;
LAB_1426b328b:
      uVar18 = uVar18 + uVar11 * -10;
      if (uVar18 < uVar19 - uVar18) goto LAB_1426b3218;
      pcVar1[(int)uVar5] = pcVar1[(int)uVar5] + '\x01';
      if (0 < (int)uVar5) {
        cVar9 = pcVar1[uVar5];
        lVar8 = (ulonglong)uVar5 + 1;
        do {
          uVar5 = uVar5 - 1;
          if (cVar9 != ':') break;
          pcVar1[lVar8 + -1] = '0';
          cVar9 = pcVar1[uVar5] + '\x01';
          pcVar1[uVar5] = cVar9;
          lVar8 = lVar8 + -1;
        } while (1 < lVar8);
      }
      uVar5 = -iVar15;
      goto LAB_1426b32d1;
    }
    uVar13 = uVar19 + uVar18 * -2;
    if ((uVar13 < uVar11 * 0x14) && (uVar14 < uVar18)) goto LAB_1426b328b;
    if (uVar13 < uVar11 * 0x14) goto LAB_1426b3218;
    local_6c = -(iVar15 + (int)local_80);
  }
LAB_1426b31ac:
  *param_6 = local_6c + *param_5;
  *(undefined1 *)(*param_4 + (longlong)(int)*param_5) = 0;
LAB_1426b3218:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
code_r0x0001426b2f24:
  uVar23 = uVar14 & 0xffffffff;
  uVar14 = uVar23 % uVar12;
  *(char *)(lVar2 + (int)*param_5) = (char)(uVar23 / uVar12) + '0';
  uVar17 = *param_5;
  *param_5 = uVar17 + 1;
  uVar23 = (uVar14 << (bVar6 & 0x3f)) + uVar18;
  if (uVar23 < uVar11) {
    uVar16 = uVar12 << (bVar6 & 0x3f);
    bVar24 = uVar11 - uVar23 < uVar16;
    uVar21 = uVar23;
    if ((uVar23 < uVar13) && (uVar10 = uVar23, uVar16 <= uVar11 - uVar23)) {
      while( true ) {
        uVar21 = uVar10 + uVar16;
        if ((uVar13 <= uVar21) && (uVar13 - uVar10 < uVar21 - uVar13)) break;
        pcVar1 = (char *)(lVar2 + (int)uVar17);
        *pcVar1 = *pcVar1 + -1;
        bVar24 = uVar11 - uVar21 < uVar16;
        if ((uVar13 <= uVar21) || (uVar10 = uVar21, uVar11 - uVar21 < uVar16)) goto LAB_1426b2fd0;
      }
      bVar24 = false;
      uVar21 = uVar10;
    }
LAB_1426b2fd0:
    local_e0 = (ulonglong)uVar5;
    if (((local_d8 <= uVar21) || (bVar24)) ||
       ((local_d8 <= uVar16 + uVar21 && (local_d8 - uVar21 <= (uVar16 + uVar21) - local_d8)))) {
      uVar21 = (ulonglong)(uVar21 <= local_a8 && 1 < uVar21);
    }
    else {
      uVar21 = 0;
    }
  }
  else {
    uVar12 = uVar12 / 10;
  }
  uVar5 = uVar5 - 1;
  if (uVar23 < uVar11) goto LAB_1426b3199;
  goto LAB_1426b2f1b;
}



// FUNCTION 1426b3300 FUN_1426b3300 body=1798 status=ok
// SIG undefined FUN_1426b3300(void)

void FUN_1426b3300(double param_1,uint param_2,int param_3,longlong *param_4,int *param_5,
                  uint *param_6)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_908 [32];
  undefined1 **local_8e8;
  int *local_8e0;
  longlong *local_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 *local_8b8;
  longlong local_8b0;
  undefined1 local_8a8 [536];
  undefined1 local_690 [536];
  undefined1 local_478 [536];
  undefined1 local_260 [536];
  ulonglong local_48;
  
  uVar12 = (uint)((ulonglong)param_1 >> 0x20);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_908;
  if (param_2 == 1) {
    fVar15 = (float)param_1;
    uVar10 = (uint)fVar15 & 0x7fffff;
    bVar14 = ((uint)fVar15 & 0x7f800000) == 0;
    uVar12 = uVar10 + 0x800000;
    if (bVar14) {
      uVar12 = uVar10;
    }
    uVar13 = (ulonglong)uVar12;
    iVar5 = -0x95;
    if (!bVar14) {
      iVar5 = ((uint)fVar15 >> 0x17 & 0xff) - 0x96;
    }
    bVar14 = uVar10 == 0;
    uVar12 = (uint)fVar15 & 0x7f000000;
  }
  else {
    uVar11 = (ulonglong)param_1 & 0xfffffffffffff;
    bVar14 = ((ulonglong)param_1 & 0x7ff0000000000000) == 0;
    uVar13 = uVar11 | 0x10000000000000;
    if (bVar14) {
      uVar13 = uVar11;
    }
    iVar5 = -0x432;
    if (!bVar14) {
      iVar5 = (uVar12 >> 0x14 & 0x7ff) - 0x433;
    }
    bVar14 = uVar11 == 0;
    uVar12 = uVar12 & 0x7fe00000;
  }
  lVar1 = 0x3f;
  if ((uVar13 & 0xfffffffffffff) != 0) {
    for (; (uVar13 & 0xfffffffffffff) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar6 = (iVar5 + 0xb) - ((uint)lVar1 ^ 0x3f);
  if ((uVar13 & 0x10000000000000) != 0) {
    iVar6 = iVar5;
  }
  dVar2 = ceil((double)(iVar6 + 0x34) * 0.30102999566398114 + -1e-10);
  uVar10 = (uint)dVar2;
  if ((param_2 == 2) && (param_3 < (int)~uVar10)) {
    *(undefined1 *)*param_4 = 0;
    *param_5 = 0;
    *param_6 = -param_3;
    goto LAB_1426b39f1;
  }
  FUN_1427245e0(local_260);
  FUN_1427245e0(local_478);
  FUN_1427245e0(local_690);
  FUN_1427245e0(local_8a8);
  if (iVar5 < 0) {
    if ((int)uVar10 < 0) {
      FUN_142725b50(local_260,10,-uVar10);
      if (param_2 < 2) {
        FUN_1427247a0(local_8a8,local_260);
        FUN_1427247a0(local_690,local_260);
        FUN_142725680(local_260,uVar13);
        FUN_142724680(local_478,1);
        FUN_1427254b0(local_478,-iVar5);
        iVar5 = 1;
        FUN_1427254b0(local_260,1);
      }
      else {
        FUN_142725680(local_260,uVar13);
        FUN_142724680(local_478,1);
        iVar5 = -iVar5;
      }
      puVar8 = local_478;
      goto LAB_1426b368a;
    }
    FUN_1427246e0(local_260,uVar13);
    FUN_142725b50(local_478,10,uVar10);
    FUN_1427254b0(local_478,-iVar5);
    if (1 < param_2) goto LAB_1426b36d4;
    FUN_1427254b0(local_478,1);
    FUN_1427254b0(local_260,1);
    FUN_142724680(local_8a8,1);
    FUN_142724680(local_690,1);
LAB_1426b3692:
    if ((bool)(uVar12 != 0 & bVar14) && param_2 < 2) {
      FUN_1427254b0(local_478,1);
      FUN_1427254b0(local_260,1);
      FUN_1427254b0(local_8a8,1);
    }
  }
  else {
    FUN_1427246e0(local_260,uVar13);
    FUN_1427254b0(local_260,iVar5);
    FUN_142725b50(local_478,10,uVar10);
    if (param_2 < 2) {
      FUN_1427254b0(local_478,1);
      FUN_1427254b0(local_260,1);
      FUN_142724680(local_8a8,1);
      FUN_1427254b0(local_8a8,iVar5);
      puVar8 = local_690;
      FUN_142724680(puVar8,1);
LAB_1426b368a:
      FUN_1427254b0(puVar8,iVar5);
      goto LAB_1426b3692;
    }
  }
LAB_1426b36d4:
  iVar5 = FUN_142726580(local_260,local_8a8,local_478);
  if ((uVar13 & 1) == 0) {
    if (-1 < iVar5) goto LAB_1426b3751;
LAB_1426b36f8:
    *param_6 = uVar10;
    FUN_142725580(local_260,10);
    iVar5 = FUN_1427264c0(local_690,local_8a8);
    FUN_142725580(local_690,10);
    if (iVar5 == 0) {
      FUN_1427247a0(local_8a8,local_690);
    }
    else {
      FUN_142725580(local_8a8,10);
    }
    if (1 < param_2) goto LAB_1426b375f;
LAB_1426b37e9:
    lVar1 = *param_4;
    local_8d0 = param_4;
    iVar5 = FUN_1427264c0(local_690,local_8a8);
    puVar8 = local_8a8;
    if (iVar5 == 0) {
      puVar8 = local_690;
    }
    *param_5 = 0;
    uVar12 = (uint)((uVar13 & 1) == 0);
    while( true ) {
      cVar3 = FUN_142725ff0(local_260,local_478);
      iVar6 = *param_5;
      *param_5 = iVar6 + 1;
      *(char *)(lVar1 + iVar6) = cVar3 + '0';
      iVar6 = FUN_1427264c0(local_260,local_690);
      iVar7 = FUN_142726580(local_260,puVar8,local_478);
      if ((iVar6 < (int)uVar12) || ((int)-uVar12 < iVar7)) break;
      FUN_142725580(local_260,10);
      FUN_142725580(local_690,10);
      if (iVar5 != 0) {
        FUN_142725580(local_8a8,10);
      }
    }
    if ((iVar6 < (int)uVar12) && ((int)-uVar12 < iVar7)) {
      iVar5 = FUN_142726580(local_260,local_260,local_478);
      param_4 = local_8d0;
      if (-1 < iVar5) {
        bVar4 = *(byte *)((longlong)*param_5 + -1 + lVar1);
        pcVar9 = (char *)((longlong)*param_5 + -1 + lVar1);
        if ((iVar5 != 0) || ((bVar4 & 1) != 0)) goto LAB_1426b3947;
      }
    }
    else {
      param_4 = local_8d0;
      if ((int)uVar12 <= iVar6) {
        pcVar9 = (char *)(*param_5 + lVar1 + -1);
        bVar4 = *(byte *)((longlong)*param_5 + -1 + lVar1);
LAB_1426b3947:
        *pcVar9 = bVar4 + 1;
        param_4 = local_8d0;
      }
    }
  }
  else {
    if (iVar5 < 1) goto LAB_1426b36f8;
LAB_1426b3751:
    *param_6 = uVar10 + 1;
    if (param_2 < 2) goto LAB_1426b37e9;
LAB_1426b375f:
    if (param_2 == 2) {
      iVar5 = -*param_6;
      if (param_3 < iVar5) {
        *param_6 = -param_3;
LAB_1426b37b8:
        *param_5 = 0;
      }
      else {
        puVar8 = (undefined1 *)*param_4;
        if (iVar5 != param_3) {
          local_8b0 = param_4[1];
          param_3 = *param_6 + param_3;
          local_8e8 = &local_8b8;
          local_8b8 = puVar8;
          goto LAB_1426b39d6;
        }
        FUN_142725580(local_478,10);
        iVar5 = FUN_142726580(local_260,local_260,local_478);
        if (iVar5 < 0) goto LAB_1426b37b8;
        *puVar8 = 0x31;
        *param_5 = 1;
        *param_6 = *param_6 + 1;
      }
    }
    else {
      if (param_2 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_1425e8c80();
      }
      local_8c8 = (undefined4)*param_4;
      uStack_8c4 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_8c0 = (undefined4)param_4[1];
      uStack_8bc = *(undefined4 *)((longlong)param_4 + 0xc);
      local_8e8 = (undefined1 **)&local_8c8;
LAB_1426b39d6:
      local_8e0 = param_5;
      FUN_1426b3a20(param_3,param_6,local_260,local_478);
    }
  }
  *(undefined1 *)(*param_4 + (longlong)*param_5) = 0;
LAB_1426b39f1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_908);
}



// FUNCTION 1426b3a20 FUN_1426b3a20 body=245 status=ok
// SIG undefined FUN_1426b3a20(void)

void FUN_1426b3a20(uint param_1,int *param_2,undefined8 param_3,undefined8 param_4,longlong *param_5
                  ,uint *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (1 < (int)param_1) {
    uVar5 = 0;
    do {
      cVar1 = FUN_142725ff0(param_3,param_4);
      *(char *)(*param_5 + uVar5) = cVar1 + '0';
      FUN_142725580(param_3,10);
      uVar5 = uVar5 + 1;
    } while (param_1 - 1 != uVar5);
  }
  cVar1 = FUN_142725ff0(param_3,param_4);
  iVar2 = FUN_142726580(param_3,param_3,param_4);
  *(char *)(*param_5 + (longlong)(int)(param_1 - 1)) = (-1 < iVar2) + cVar1 + '0';
  if (1 < (int)param_1) {
    uVar5 = (ulonglong)(param_1 - 2);
    uVar4 = (ulonglong)param_1;
    do {
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      if (*(char *)(*param_5 + uVar4) != ':') break;
      *(undefined1 *)(*param_5 + uVar4) = 0x30;
      *(char *)(*param_5 + uVar5) = *(char *)(*param_5 + uVar5) + '\x01';
      uVar5 = uVar5 - 1;
    } while (1 < (int)uVar3);
  }
  if (*(char *)*param_5 == ':') {
    *(char *)*param_5 = '1';
    *param_2 = *param_2 + 1;
  }
  *param_6 = param_1;
  return;
}



// FUNCTION 1426b3b20 FUN_1426b3b20 body=1272 status=ok
// SIG undefined FUN_1426b3b20(void)

void FUN_1426b3b20(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_3b8 [40];
  undefined8 *local_390;
  uint local_388;
  ulonglong local_380;
  int local_378;
  undefined8 *local_370;
  uint local_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
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
  undefined8 local_1d8;
  undefined8 uStack_1d0;
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
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  puVar2 = (undefined8 *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (*(char *)((longlong)puVar2 + uVar5) != '0') {
        puVar2 = (undefined8 *)((longlong)puVar2 + uVar5);
        uVar3 = uVar3 - (int)uVar5;
        goto LAB_1426b3b79;
      }
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  uVar3 = 0;
LAB_1426b3b79:
  iVar6 = -1;
  iVar4 = 0x30b;
  iVar8 = 0;
  puVar10 = puVar2;
  do {
    puVar10 = (undefined8 *)((longlong)puVar10 + -1);
    if ((int)(uVar3 + iVar8) < 1) {
      param_2 = uVar3 + param_2;
      uVar11 = 0;
      goto LAB_1426b3f2b;
    }
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 1;
    iVar8 = iVar8 + -1;
  } while (*(char *)((longlong)puVar10 + (ulonglong)uVar3) == '0');
  param_2 = param_2 + iVar6;
  uVar11 = uVar3 - iVar6;
  if (0x30c < uVar11) {
    uVar5 = (longlong)&local_358 - (longlong)puVar2;
    if (uVar5 < 0x20) {
      lVar7 = 0;
    }
    else {
      local_358 = *puVar2;
      uStack_350 = puVar2[1];
      local_348 = puVar2[2];
      uStack_340 = puVar2[3];
      local_338 = puVar2[4];
      uStack_330 = puVar2[5];
      local_328 = puVar2[6];
      uStack_320 = puVar2[7];
      local_318 = puVar2[8];
      uStack_310 = puVar2[9];
      local_308 = puVar2[10];
      uStack_300 = puVar2[0xb];
      local_2f8 = puVar2[0xc];
      uStack_2f0 = puVar2[0xd];
      local_2e8 = puVar2[0xe];
      uStack_2e0 = puVar2[0xf];
      local_2d8 = puVar2[0x10];
      uStack_2d0 = puVar2[0x11];
      local_2c8 = puVar2[0x12];
      uStack_2c0 = puVar2[0x13];
      local_2b8 = puVar2[0x14];
      uStack_2b0 = puVar2[0x15];
      local_2a8 = puVar2[0x16];
      uStack_2a0 = puVar2[0x17];
      local_298 = puVar2[0x18];
      uStack_290 = puVar2[0x19];
      local_288 = puVar2[0x1a];
      uStack_280 = puVar2[0x1b];
      local_278 = puVar2[0x1c];
      uStack_270 = puVar2[0x1d];
      local_268 = puVar2[0x1e];
      uStack_260 = puVar2[0x1f];
      local_258 = puVar2[0x20];
      uStack_250 = puVar2[0x21];
      local_248 = puVar2[0x22];
      uStack_240 = puVar2[0x23];
      local_238 = puVar2[0x24];
      uStack_230 = puVar2[0x25];
      local_228 = puVar2[0x26];
      uStack_220 = puVar2[0x27];
      local_218 = puVar2[0x28];
      uStack_210 = puVar2[0x29];
      local_208 = puVar2[0x2a];
      uStack_200 = puVar2[0x2b];
      local_1f8 = puVar2[0x2c];
      uStack_1f0 = puVar2[0x2d];
      local_1e8 = puVar2[0x2e];
      uStack_1e0 = puVar2[0x2f];
      local_1d8 = puVar2[0x30];
      uStack_1d0 = puVar2[0x31];
      local_1c8 = puVar2[0x32];
      uStack_1c0 = puVar2[0x33];
      local_1b8 = puVar2[0x34];
      uStack_1b0 = puVar2[0x35];
      local_1a8 = puVar2[0x36];
      uStack_1a0 = puVar2[0x37];
      local_198 = puVar2[0x38];
      uStack_190 = puVar2[0x39];
      local_188 = puVar2[0x3a];
      uStack_180 = puVar2[0x3b];
      local_178 = puVar2[0x3c];
      uStack_170 = puVar2[0x3d];
      local_168 = puVar2[0x3e];
      uStack_160 = puVar2[0x3f];
      local_158 = puVar2[0x40];
      uStack_150 = puVar2[0x41];
      local_148 = puVar2[0x42];
      uStack_140 = puVar2[0x43];
      local_138 = puVar2[0x44];
      uStack_130 = puVar2[0x45];
      local_128 = puVar2[0x46];
      uStack_120 = puVar2[0x47];
      local_118 = puVar2[0x48];
      uStack_110 = puVar2[0x49];
      local_108 = puVar2[0x4a];
      uStack_100 = puVar2[0x4b];
      local_f8 = puVar2[0x4c];
      uStack_f0 = puVar2[0x4d];
      local_e8 = puVar2[0x4e];
      uStack_e0 = puVar2[0x4f];
      local_d8 = puVar2[0x50];
      uStack_d0 = puVar2[0x51];
      local_c8 = puVar2[0x52];
      uStack_c0 = puVar2[0x53];
      local_b8 = puVar2[0x54];
      uStack_b0 = puVar2[0x55];
      local_a8 = puVar2[0x56];
      uStack_a0 = puVar2[0x57];
      local_98 = puVar2[0x58];
      uStack_90 = puVar2[0x59];
      local_88 = puVar2[0x5a];
      uStack_80 = puVar2[0x5b];
      local_78 = *(undefined4 *)(puVar2 + 0x5c);
      uStack_74 = *(undefined4 *)((longlong)puVar2 + 0x2e4);
      uStack_70 = *(undefined4 *)(puVar2 + 0x5d);
      uStack_6c = *(undefined4 *)((longlong)puVar2 + 0x2ec);
      local_68 = *(undefined4 *)(puVar2 + 0x5e);
      uStack_64 = *(undefined4 *)((longlong)puVar2 + 0x2f4);
      uStack_60 = *(undefined4 *)(puVar2 + 0x5f);
      uStack_5c = *(undefined4 *)((longlong)puVar2 + 0x2fc);
      local_58 = puVar2[0x60];
      lVar7 = 0x308;
    }
    lVar9 = 3;
    do {
      *(undefined1 *)((longlong)&local_358 + lVar7) = *(undefined1 *)((longlong)puVar2 + lVar7);
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if (uVar5 < 0x20) {
      do {
        *(undefined1 *)((longlong)&local_358 + lVar7) = *(undefined1 *)((longlong)puVar2 + lVar7);
        *(undefined1 *)((longlong)&local_358 + lVar7 + 1) =
             *(undefined1 *)((longlong)puVar2 + lVar7 + 1);
        *(undefined1 *)((longlong)&local_358 + lVar7 + 2) =
             *(undefined1 *)((longlong)puVar2 + lVar7 + 2);
        *(undefined1 *)((longlong)&local_358 + lVar7 + 3) =
             *(undefined1 *)((longlong)puVar2 + lVar7 + 3);
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0x30b);
    }
    local_4d = 0x31;
    param_2 = param_2 + (uVar3 - iVar4);
    uVar11 = 0x30c;
    puVar2 = &local_358;
  }
LAB_1426b3f2b:
  local_370 = puVar2;
  local_368 = uVar11;
  cVar1 = FUN_1426b4040(&local_370,param_2,&local_360);
  if (cVar1 == '\0') {
    local_378 = ((uint)(local_360 >> 0x34) & 0x7ff) - 0x434;
    uVar5 = local_360 * 2 & 0x1ffffffffffffe;
    local_380 = uVar5 + 0x20000000000000;
    if ((local_360 & 0x7ff0000000000000) == 0) {
      local_380 = uVar5;
      local_378 = -0x433;
    }
    local_380 = local_380 | 1;
    local_390 = puVar2;
    local_388 = uVar11;
    FUN_1426b45c0(&local_390,param_2,&local_380);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_3b8);
}



// FUNCTION 1426b4040 FUN_1426b4040 body=1368 status=ok
// SIG undefined FUN_1426b4040(void)

void FUN_1426b4040(longlong *param_1,uint param_2,double *param_3)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar2;
  if (uVar11 == 0) {
LAB_1426b42e0:
    *param_3 = 0.0;
    goto LAB_1426b42e9;
  }
  iVar7 = uVar2 + param_2;
  if (0x135 < iVar7) {
    *param_3 = INFINITY;
    goto LAB_1426b42e9;
  }
  if (iVar7 < -0x143) goto LAB_1426b42e0;
  lVar12 = *param_1;
  if ((int)uVar2 < 0x10) {
    if (param_2 < 0xffffffea) {
      if (0x16 < param_2) {
        if (-1 < (int)param_2) {
          iVar8 = param_2 - (int)(0xf - (longlong)(int)uVar2);
          if (iVar8 < 0x17) {
            if ((int)uVar2 < 1) {
              dVar14 = 0.0;
            }
            else {
              uVar6 = 1;
              uVar9 = 0;
              do {
                uVar9 = ((longlong)*(char *)(lVar12 + -1 + uVar6) + uVar9 * 10) - 0x30;
                if (uVar11 <= uVar6) break;
                uVar6 = uVar6 + 1;
              } while (uVar9 < 0x1999999999999999);
              auVar17._8_4_ = (int)(uVar9 >> 0x20);
              auVar17._0_8_ = uVar9;
              auVar17._12_4_ = 0x45300000;
              dVar14 = (auVar17._8_8_ - 1.9342813113834067e+25) +
                       ((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0);
            }
            dVar14 = dVar14 * *(double *)(&DAT_149d59c50 + (0xf - (longlong)(int)uVar2) * 8) *
                     *(double *)(&DAT_149d59c50 + (longlong)iVar8 * 8);
            goto LAB_1426b45a2;
          }
        }
        if (0 < (int)uVar2) goto LAB_1426b4223;
        uVar6 = 0;
        local_40 = 0;
        goto LAB_1426b425e;
      }
      if ((int)uVar2 < 1) {
        dVar14 = 0.0;
      }
      else {
        uVar6 = 1;
        uVar9 = 0;
        do {
          uVar9 = ((longlong)*(char *)(lVar12 + -1 + uVar6) + uVar9 * 10) - 0x30;
          if (uVar11 <= uVar6) break;
          uVar6 = uVar6 + 1;
        } while (uVar9 < 0x1999999999999999);
        auVar16._8_4_ = (int)(uVar9 >> 0x20);
        auVar16._0_8_ = uVar9;
        auVar16._12_4_ = 0x45300000;
        dVar14 = (auVar16._8_8_ - 1.9342813113834067e+25) +
                 ((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0);
      }
      dVar14 = dVar14 * *(double *)(&DAT_149d59c50 + (ulonglong)param_2 * 8);
    }
    else {
      if ((int)uVar2 < 1) {
        dVar14 = 0.0;
      }
      else {
        uVar6 = 1;
        uVar9 = 0;
        do {
          uVar9 = ((longlong)*(char *)(lVar12 + -1 + uVar6) + uVar9 * 10) - 0x30;
          if (uVar11 <= uVar6) break;
          uVar6 = uVar6 + 1;
        } while (uVar9 < 0x1999999999999999);
        auVar15._8_4_ = (int)(uVar9 >> 0x20);
        auVar15._0_8_ = uVar9;
        auVar15._12_4_ = 0x45300000;
        dVar14 = (auVar15._8_8_ - 1.9342813113834067e+25) +
                 ((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0);
      }
      dVar14 = dVar14 / *(double *)(&DAT_149d59c50 + (longlong)(int)-param_2 * 8);
    }
LAB_1426b45a2:
    *param_3 = dVar14;
    goto LAB_1426b42e9;
  }
LAB_1426b4223:
  uVar6 = 0;
  local_40 = 0;
  do {
    pcVar1 = (char *)(lVar12 + uVar6);
    uVar6 = uVar6 + 1;
    local_40 = ((longlong)*pcVar1 + local_40 * 10) - 0x30;
    if (uVar11 <= uVar6) break;
  } while (local_40 < 0x1999999999999999);
LAB_1426b425e:
  local_38 = 0;
  uVar10 = (uint)uVar6;
  if (uVar2 == uVar10) {
    lVar12 = 0;
  }
  else {
    local_40 = local_40 + ('4' < *(char *)(lVar12 + (int)uVar10));
    param_2 = iVar7 - uVar10;
    lVar12 = 4;
  }
  if (local_40 >> 0x36 == 0) {
    local_38 = 0;
    uVar11 = local_40;
    do {
      local_40 = uVar11 << 10;
      local_38 = local_38 + -10;
      bVar13 = uVar11 < 0x100000000000;
      uVar11 = local_40;
    } while (bVar13);
  }
  for (; -1 < (longlong)local_40; local_40 = local_40 * 2) {
    local_38 = local_38 + -1;
  }
  lVar12 = lVar12 << (-(char)local_38 & 0x3fU);
  if ((int)param_2 < -0x15c) goto LAB_1426b42e0;
  local_50 = 0;
  local_48 = 0;
  FUN_142724530(param_2,&local_50,&local_54);
  iVar7 = param_2 - local_54;
  if (iVar7 != 0) {
    uVar10 = iVar7 - 1;
    if (6 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_1425e8c80();
    }
    local_68 = *(undefined8 *)(&DAT_149d59d08 + (longlong)(int)uVar10 * 8);
    local_60 = *(undefined4 *)(&DAT_149d59d40 + (longlong)(int)uVar10 * 4);
    FUN_142724570(&local_40,&local_68);
    if ((int)(0x13 - uVar2) < iVar7) {
      lVar12 = lVar12 + 4;
    }
  }
  FUN_142724570(&local_40,&local_50);
  uVar6 = local_40;
  uVar11 = local_40;
  iVar7 = local_38;
  if (local_40 < 0x40000000000000) {
    do {
      uVar11 = uVar6 << 10;
      iVar7 = iVar7 + -10;
      bVar13 = uVar6 < 0x100000000000;
      uVar6 = uVar11;
    } while (bVar13);
  }
  for (; -1 < (longlong)uVar11; uVar11 = uVar11 * 2) {
    iVar7 = iVar7 + -1;
  }
  uVar6 = (9 - (ulonglong)(lVar12 == 0)) + lVar12 << ((char)local_38 - (char)iVar7 & 0x3fU);
  iVar8 = 0;
  if (-0x472 < iVar7) {
    iVar8 = iVar7 + 0x472;
  }
  iVar4 = 0x35;
  if (iVar7 < -0x43d) {
    iVar4 = iVar8;
  }
  if (iVar4 < 4) {
    bVar5 = (byte)(4 - iVar4);
    uVar11 = uVar11 >> (bVar5 & 0x3f);
    iVar7 = (4 - iVar4) + iVar7;
    uVar6 = (uVar6 >> (bVar5 & 0x3f)) + 9;
    iVar4 = 0x3c;
  }
  else {
    iVar4 = 0x40 - iVar4;
  }
  bVar5 = (byte)iVar4;
  iVar7 = iVar7 + iVar4;
  uVar11 = ((uVar11 >> (bVar5 & 0x3f)) + 1) -
           (ulonglong)
           ((~(-1L << (bVar5 & 0x3f)) & uVar11) << 3 < (8L << (bVar5 - 1 & 0x3f)) + uVar6);
  if (uVar11 >> 0x35 == 0) {
    if (iVar7 < 0x3cc) goto LAB_1426b44c0;
LAB_1426b44a7:
    dVar14 = INFINITY;
  }
  else {
    do {
      uVar6 = uVar11 >> 1;
      iVar7 = iVar7 + 1;
      bVar13 = 0x3fffffffffffff < uVar11;
      uVar11 = uVar6;
    } while (bVar13);
    if (0x3cb < iVar7) goto LAB_1426b44a7;
LAB_1426b44c0:
    dVar14 = 0.0;
    if (-0x433 < iVar7) {
      uVar9 = uVar11 & 0x10000000000000;
      bVar13 = uVar9 == 0;
      uVar6 = uVar11;
      iVar8 = iVar7;
      if (iVar7 != -0x432) {
        do {
          uVar11 = uVar6;
          iVar7 = iVar8;
          if (uVar9 != 0) break;
          uVar11 = uVar6 * 2;
          iVar7 = iVar8 + -1;
          uVar9 = uVar6 & 0x8000000000000;
          bVar13 = uVar9 == 0;
          bVar3 = -0x431 < iVar8;
          uVar6 = uVar11;
          iVar8 = iVar7;
        } while (bVar3);
      }
      uVar9 = (ulonglong)(iVar7 + 0x433) << 0x34;
      uVar6 = 0;
      if (!bVar13) {
        uVar6 = uVar9;
      }
      if (iVar7 != -0x432) {
        uVar6 = uVar9;
      }
      dVar14 = (double)(uVar11 & 0xfffffffffffff | uVar6);
    }
  }
  *param_3 = dVar14;
LAB_1426b42e9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 1426b45c0 FUN_1426b45c0 body=194 status=ok
// SIG undefined FUN_1426b45c0(void)

void FUN_1426b45c0(undefined4 *param_1,int param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 local_460 [536];
  undefined1 local_248 [536];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_498;
  FUN_1427245e0(local_248);
  FUN_1427245e0(local_460);
  local_478 = *param_1;
  uStack_474 = param_1[1];
  uStack_470 = param_1[2];
  uStack_46c = param_1[3];
  FUN_142724820(local_248,&local_478);
  FUN_1427246e0(local_460,*param_3);
  if (param_2 < 0) {
    param_2 = -param_2;
    puVar1 = local_460;
  }
  else {
    puVar1 = local_248;
  }
  FUN_142724a80(puVar1,param_2);
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 < 1) {
    iVar2 = -iVar2;
    puVar1 = local_248;
  }
  else {
    puVar1 = local_460;
  }
  FUN_1427254b0(puVar1,iVar2);
  FUN_1427264c0(local_248,local_460);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_498);
}



// FUNCTION 1426b46a0 FUN_1426b46a0 body=1495 status=ok
// SIG undefined FUN_1426b46a0(void)

void FUN_1426b46a0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined1 auStack_3c8 [40];
  undefined8 *local_3a0;
  uint local_398;
  ulonglong local_390;
  int local_388;
  undefined8 *local_380;
  uint local_378;
  double local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
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
  undefined8 local_1d8;
  undefined8 uStack_1d0;
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
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  undefined1 local_5d;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  puVar2 = (undefined8 *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      if (*(char *)((longlong)puVar2 + uVar8) != '0') {
        puVar2 = (undefined8 *)((longlong)puVar2 + uVar8);
        uVar4 = uVar4 - (int)uVar8;
        goto LAB_1426b4709;
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  uVar4 = 0;
LAB_1426b4709:
  iVar9 = -1;
  iVar7 = 0x30b;
  iVar11 = 0;
  puVar13 = puVar2;
  do {
    puVar13 = (undefined8 *)((longlong)puVar13 + -1);
    if ((int)(uVar4 + iVar11) < 1) {
      param_2 = uVar4 + param_2;
      uVar6 = 0;
      goto LAB_1426b4aba;
    }
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 1;
    iVar11 = iVar11 + -1;
  } while (*(char *)((longlong)puVar13 + (ulonglong)uVar4) == '0');
  param_2 = param_2 + iVar9;
  uVar6 = uVar4 - iVar9;
  if (0x30c < uVar6) {
    uVar8 = (longlong)&local_368 - (longlong)puVar2;
    if (uVar8 < 0x20) {
      lVar10 = 0;
    }
    else {
      local_368 = *puVar2;
      uStack_360 = puVar2[1];
      local_358 = puVar2[2];
      uStack_350 = puVar2[3];
      local_348 = puVar2[4];
      uStack_340 = puVar2[5];
      local_338 = puVar2[6];
      uStack_330 = puVar2[7];
      local_328 = puVar2[8];
      uStack_320 = puVar2[9];
      local_318 = puVar2[10];
      uStack_310 = puVar2[0xb];
      local_308 = puVar2[0xc];
      uStack_300 = puVar2[0xd];
      local_2f8 = puVar2[0xe];
      uStack_2f0 = puVar2[0xf];
      local_2e8 = puVar2[0x10];
      uStack_2e0 = puVar2[0x11];
      local_2d8 = puVar2[0x12];
      uStack_2d0 = puVar2[0x13];
      local_2c8 = puVar2[0x14];
      uStack_2c0 = puVar2[0x15];
      local_2b8 = puVar2[0x16];
      uStack_2b0 = puVar2[0x17];
      local_2a8 = puVar2[0x18];
      uStack_2a0 = puVar2[0x19];
      local_298 = puVar2[0x1a];
      uStack_290 = puVar2[0x1b];
      local_288 = puVar2[0x1c];
      uStack_280 = puVar2[0x1d];
      local_278 = puVar2[0x1e];
      uStack_270 = puVar2[0x1f];
      local_268 = puVar2[0x20];
      uStack_260 = puVar2[0x21];
      local_258 = puVar2[0x22];
      uStack_250 = puVar2[0x23];
      local_248 = puVar2[0x24];
      uStack_240 = puVar2[0x25];
      local_238 = puVar2[0x26];
      uStack_230 = puVar2[0x27];
      local_228 = puVar2[0x28];
      uStack_220 = puVar2[0x29];
      local_218 = puVar2[0x2a];
      uStack_210 = puVar2[0x2b];
      local_208 = puVar2[0x2c];
      uStack_200 = puVar2[0x2d];
      local_1f8 = puVar2[0x2e];
      uStack_1f0 = puVar2[0x2f];
      local_1e8 = puVar2[0x30];
      uStack_1e0 = puVar2[0x31];
      local_1d8 = puVar2[0x32];
      uStack_1d0 = puVar2[0x33];
      local_1c8 = puVar2[0x34];
      uStack_1c0 = puVar2[0x35];
      local_1b8 = puVar2[0x36];
      uStack_1b0 = puVar2[0x37];
      local_1a8 = puVar2[0x38];
      uStack_1a0 = puVar2[0x39];
      local_198 = puVar2[0x3a];
      uStack_190 = puVar2[0x3b];
      local_188 = puVar2[0x3c];
      uStack_180 = puVar2[0x3d];
      local_178 = puVar2[0x3e];
      uStack_170 = puVar2[0x3f];
      local_168 = puVar2[0x40];
      uStack_160 = puVar2[0x41];
      local_158 = puVar2[0x42];
      uStack_150 = puVar2[0x43];
      local_148 = puVar2[0x44];
      uStack_140 = puVar2[0x45];
      local_138 = puVar2[0x46];
      uStack_130 = puVar2[0x47];
      local_128 = puVar2[0x48];
      uStack_120 = puVar2[0x49];
      local_118 = puVar2[0x4a];
      uStack_110 = puVar2[0x4b];
      local_108 = puVar2[0x4c];
      uStack_100 = puVar2[0x4d];
      local_f8 = puVar2[0x4e];
      uStack_f0 = puVar2[0x4f];
      local_e8 = puVar2[0x50];
      uStack_e0 = puVar2[0x51];
      local_d8 = puVar2[0x52];
      uStack_d0 = puVar2[0x53];
      local_c8 = puVar2[0x54];
      uStack_c0 = puVar2[0x55];
      local_b8 = puVar2[0x56];
      uStack_b0 = puVar2[0x57];
      local_a8 = puVar2[0x58];
      uStack_a0 = puVar2[0x59];
      local_98 = puVar2[0x5a];
      uStack_90 = puVar2[0x5b];
      local_88 = puVar2[0x5c];
      uStack_80 = puVar2[0x5d];
      local_78 = puVar2[0x5e];
      uStack_70 = puVar2[0x5f];
      local_68 = puVar2[0x60];
      lVar10 = 0x308;
    }
    lVar12 = 3;
    do {
      *(undefined1 *)((longlong)&local_368 + lVar10) = *(undefined1 *)((longlong)puVar2 + lVar10);
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (uVar8 < 0x20) {
      do {
        *(undefined1 *)((longlong)&local_368 + lVar10) = *(undefined1 *)((longlong)puVar2 + lVar10);
        *(undefined1 *)((longlong)&local_368 + lVar10 + 1) =
             *(undefined1 *)((longlong)puVar2 + lVar10 + 1);
        *(undefined1 *)((longlong)&local_368 + lVar10 + 2) =
             *(undefined1 *)((longlong)puVar2 + lVar10 + 2);
        *(undefined1 *)((longlong)&local_368 + lVar10 + 3) =
             *(undefined1 *)((longlong)puVar2 + lVar10 + 3);
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x30b);
    }
    local_5d = 0x31;
    param_2 = param_2 + (uVar4 - iVar7);
    uVar6 = 0x30c;
    puVar2 = &local_368;
  }
LAB_1426b4aba:
  local_380 = puVar2;
  local_378 = uVar6;
  cVar1 = FUN_1426b4040(&local_380,param_2,&local_370);
  if ((local_370 == (double)(float)local_370) && (!NAN(local_370) && !NAN((double)(float)local_370))
     ) goto LAB_1426b4c52;
  if (local_370 == INFINITY) {
    dVar3 = INFINITY;
LAB_1426b4b25:
    local_370 = (double)((longlong)local_370 + -1);
  }
  else if ((longlong)local_370 < 0) {
    if (ABS(local_370) == 0.0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)((longlong)local_370 - 1);
      if (local_370 == -INFINITY) {
        local_370 = -INFINITY;
        goto LAB_1426b4b2d;
      }
    }
    local_370 = (double)((longlong)local_370 + 1);
  }
  else {
    dVar3 = (double)((longlong)local_370 + 1);
    if (local_370 != 0.0) goto LAB_1426b4b25;
    local_370 = -0.0;
  }
LAB_1426b4b2d:
  fVar14 = (float)local_370;
  if (cVar1 == '\0') {
    if (dVar3 == INFINITY) {
      dVar3 = INFINITY;
    }
    else if ((longlong)dVar3 < 0) {
      if (ABS(dVar3) == 0.0) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = (double)((longlong)dVar3 - 1);
      }
    }
    else {
      dVar3 = (double)((longlong)dVar3 + 1);
    }
  }
  if ((fVar14 != (float)dVar3) || (NAN(fVar14) || NAN((float)dVar3))) {
    if ((fVar14 != 0.0) || (NAN(fVar14))) {
      local_388 = ((uint)fVar14 >> 0x17 & 0xff) - 0x97;
      uVar5 = (int)fVar14 * 2 & 0xfffffe;
      uVar4 = uVar5 + 0x1000000;
      if (((uint)fVar14 & 0x7f800000) == 0) {
        uVar4 = uVar5;
        local_388 = -0x96;
      }
      local_390 = (ulonglong)(uVar4 | 1);
    }
    else {
      local_388 = -0xca;
      local_390 = 0x10000000000000;
    }
    local_3a0 = puVar2;
    local_398 = uVar6;
    FUN_1426b45c0(&local_3a0,param_2,&local_390);
  }
LAB_1426b4c52:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_3c8);
}



// FUNCTION 1426b4ca0 FUN_1426b4ca0 body=58 status=ok
// SIG undefined FUN_1426b4ca0(void)

void FUN_1426b4ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::NFSubstitution::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1426b4ce0 FUN_1426b4ce0 body=706 status=ok
// SIG undefined FUN_1426b4ce0(void)

undefined8 *
FUN_1426b4ce0(undefined4 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6,undefined4 *param_7)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  short *psVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar9;
  undefined8 *local_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar1 = *(ushort *)(param_6 + 8);
  if ((short)uVar1 < 0) {
    if (*(int *)(param_6 + 0xc) == 0) {
      return (undefined8 *)0x0;
    }
  }
  else if ((short)uVar1 >> 5 == 0) {
    return (undefined8 *)0x0;
  }
  if ((uVar1 & 2) == 0) {
    psVar4 = *(short **)(param_6 + 0x18);
  }
  else {
    psVar4 = (short *)(param_6 + 10);
  }
  sVar2 = *psVar4;
  if (sVar2 == 0x3e) {
    if (*param_2 + 4U < 3) {
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      FUN_1426b5440(puVar6,param_1,param_4,param_6,param_7);
      return puVar6;
    }
    if (*param_2 == -1) {
      local_48 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (local_48 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      FUN_1426b5780(local_48,param_1,param_4,param_6,param_7);
      ppuVar5 = icu_64::AbsoluteValueSubstitution::vftable;
LAB_1426b4ec6:
      *local_48 = ppuVar5;
      return local_48;
    }
    if (*(char *)(param_4 + 0x98) == '\0') {
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x30);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      FUN_1426b5650(puVar6,param_1,param_2,param_3,param_4,param_6,param_7);
      return puVar6;
    }
  }
  else {
    if (sVar2 == 0x3d) {
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar8 = param_7;
      FUN_1426b5780(puVar6,param_1,param_4,param_6,param_7);
      *puVar6 = icu_64::SameValueSubstitution::vftable;
      if (*(short *)(param_6 + 8) < 0) {
        iVar7 = *(int *)(param_6 + 0xc);
      }
      else {
        iVar7 = (int)*(short *)(param_6 + 8) >> 5;
      }
      cVar3 = FUN_1424a7e30(param_6,0,iVar7,&DAT_149d59d5c,(ulonglong)puVar8 & 0xffffffff00000000,
                            CONCAT44(uVar9,2));
      if (cVar3 == '\0') {
        *param_7 = 9;
        return puVar6;
      }
      return puVar6;
    }
    if (sVar2 == 0x3c) {
      if (*param_2 + 4U < 3) {
        local_48 = (undefined8 *)thunk_FUN_1424da030(0x20);
        if (local_48 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        FUN_1426b5780(local_48,param_1,param_4,param_6,param_7);
        ppuVar5 = icu_64::IntegralPartSubstitution::vftable;
        goto LAB_1426b4ec6;
      }
      if (*param_2 != -1) {
        if (*(char *)(param_4 + 0x98) == '\0') {
          puVar6 = (undefined8 *)thunk_FUN_1424da030(0x28);
          if (puVar6 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          FUN_1426b53a0(puVar6,param_1,param_2,param_4,param_6,param_7);
          return puVar6;
        }
        puVar6 = (undefined8 *)thunk_FUN_1424da030(0x38);
        if (puVar6 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        FUN_1426b5140(puVar6,param_1,(double)*param_2,*(undefined8 *)(param_5 + 0x188),param_6,
                      param_7);
        return puVar6;
      }
    }
  }
  *param_7 = 9;
  return (undefined8 *)0x0;
}



// FUNCTION 1426b4fb0 Unwind@1426b4fb0 body=48 status=ok
// SIG undefined Unwind@1426b4fb0(void)

void Unwind_1426b4fb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b4fe0 Unwind@1426b4fe0 body=48 status=ok
// SIG undefined Unwind@1426b4fe0(void)

void Unwind_1426b4fe0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b5010 Unwind@1426b5010 body=48 status=ok
// SIG undefined Unwind@1426b5010(void)

void Unwind_1426b5010(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b5040 Unwind@1426b5040 body=48 status=ok
// SIG undefined Unwind@1426b5040(void)

void Unwind_1426b5040(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b5070 Unwind@1426b5070 body=48 status=ok
// SIG undefined Unwind@1426b5070(void)

void Unwind_1426b5070(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b50a0 Unwind@1426b50a0 body=48 status=ok
// SIG undefined Unwind@1426b50a0(void)

void Unwind_1426b50a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b50d0 Unwind@1426b50d0 body=59 status=ok
// SIG undefined Unwind@1426b50d0(void)

void Unwind_1426b50d0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x40) = &DAT_149d59d5c;
  FUN_1426b4ca0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b5110 Unwind@1426b5110 body=48 status=ok
// SIG undefined Unwind@1426b5110(void)

void Unwind_1426b5110(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1426b5140 FUN_1426b5140 body=350 status=ok
// SIG undefined FUN_1426b5140(void)

void FUN_1426b5140(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong in_stack_ffffffffffffff38;
  undefined1 local_b8 [72];
  undefined *local_70;
  undefined8 *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*(short *)(param_5 + 8) < 0) {
    iVar3 = *(int *)(param_5 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_5 + 8) >> 5;
  }
  cVar1 = FUN_1424a7e30(param_5,iVar3 + -2,2,&DAT_149d59d70,
                        in_stack_ffffffffffffff38 & 0xffffffff00000000,2);
  local_70 = &DAT_149d59d70;
  if (cVar1 == '\0') {
    if (*(short *)(param_5 + 8) < 0) {
      iVar3 = *(int *)(param_5 + 0xc);
    }
    else {
      iVar3 = (int)*(short *)(param_5 + 8) >> 5;
    }
    FUN_1424a7950(local_b8,param_5,0,iVar3 + -1);
  }
  else {
    FUN_1424a6be0(local_b8,param_5);
  }
  FUN_1426b5780(param_1,param_2,param_4,local_b8,param_6);
  FUN_140859a90(local_b8);
  *param_1 = icu_64::NumeratorSubstitution::vftable;
  param_1[4] = param_3;
  local_58 = param_1;
  uVar2 = FUN_1425f13c0((int)param_3);
  local_58[5] = uVar2;
  if (*(short *)(param_5 + 8) < 0) {
    iVar3 = *(int *)(param_5 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_5 + 8) >> 5;
  }
  cVar1 = FUN_1424a7e30(param_5,iVar3 + -2,2,&DAT_149d59d70,param_6 & 0xffffffff00000000,2);
  *(bool *)(local_58 + 6) = cVar1 == '\0';
  return;
}



// FUNCTION 1426b52a0 Unwind@1426b52a0 body=56 status=ok
// SIG undefined Unwind@1426b52a0(void)

void Unwind_1426b52a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1426b52e0 Unwind@1426b52e0 body=56 status=ok
// SIG undefined Unwind@1426b52e0(void)

void Unwind_1426b52e0(undefined8 param_1,longlong param_2)

{
  FUN_1426b4ca0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 1426b5320 Unwind@1426b5320 body=58 status=ok
// SIG undefined Unwind@1426b5320(void)

void Unwind_1426b5320(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x70) = &DAT_149d59d70;
  return;
}



// FUNCTION 1426b5360 Unwind@1426b5360 body=58 status=ok
// SIG undefined Unwind@1426b5360(void)

void Unwind_1426b5360(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x80) = &DAT_149d59d70;
  return;
}



// FUNCTION 1426b53a0 FUN_1426b53a0 body=104 status=ok
// SIG undefined FUN_1426b53a0(void)

undefined8 *
FUN_1426b53a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  longlong lVar1;
  
  FUN_1426b5780(param_1,param_2,param_4,param_5,param_6);
  *param_1 = icu_64::MultiplierSubstitution::vftable;
  lVar1 = FUN_1425f36d0(param_3);
  param_1[4] = lVar1;
  if (lVar1 == 0) {
    *param_6 = 9;
  }
  return param_1;
}



// FUNCTION 1426b5410 Unwind@1426b5410 body=36 status=ok
// SIG undefined Unwind@1426b5410(void)

void Unwind_1426b5410(undefined8 param_1,longlong param_2)

{
  FUN_1426b4ca0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1426b5440 FUN_1426b5440 body=322 status=ok
// SIG undefined FUN_1426b5440(void)

undefined8 *
FUN_1426b5440(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             ulonglong param_5)

{
  char cVar1;
  int iVar2;
  
  FUN_1426b5780();
  *param_1 = icu_64::FractionalPartSubstitution::vftable;
  *(undefined2 *)(param_1 + 4) = 0x100;
  if (*(short *)(param_4 + 8) < 0) {
    iVar2 = *(int *)(param_4 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_4 + 8) >> 5;
  }
  param_5 = param_5 & 0xffffffff00000000;
  cVar1 = FUN_1424a7e30(param_4,0,iVar2,&DAT_149d59d6a,param_5,2);
  if (cVar1 != '\0') {
    if (*(short *)(param_4 + 8) < 0) {
      iVar2 = *(int *)(param_4 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_4 + 8) >> 5;
    }
    param_5 = param_5 & 0xffffffff00000000;
    cVar1 = FUN_1424a7e30(param_4,0,iVar2,&DAT_149d59d62,param_5,3);
    if ((cVar1 != '\0') && (param_1[2] != param_3)) {
      *(undefined1 *)(param_1[2] + 0x98) = 1;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if (*(short *)(param_4 + 8) < 0) {
    iVar2 = *(int *)(param_4 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_4 + 8) >> 5;
  }
  cVar1 = FUN_1424a7e30(param_4,0,iVar2,&DAT_149d59d62,param_5 & 0xffffffff00000000,3);
  if (cVar1 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  }
  return param_1;
}



// FUNCTION 1426b5590 Unwind@1426b5590 body=36 status=ok
// SIG undefined Unwind@1426b5590(void)

void Unwind_1426b5590(undefined8 param_1,longlong param_2)

{
  FUN_1426b4ca0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1426b55c0 Unwind@1426b55c0 body=37 status=ok
// SIG undefined Unwind@1426b55c0(void)

void Unwind_1426b55c0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x38) = &DAT_149d59d6a;
  return;
}



// FUNCTION 1426b55f0 Unwind@1426b55f0 body=37 status=ok
// SIG undefined Unwind@1426b55f0(void)

void Unwind_1426b55f0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x48) = &DAT_149d59d62;
  return;
}



// FUNCTION 1426b5620 Unwind@1426b5620 body=37 status=ok
// SIG undefined Unwind@1426b5620(void)

void Unwind_1426b5620(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x58) = &DAT_149d59d62;
  return;
}



// FUNCTION 1426b5650 FUN_1426b5650 body=199 status=ok
// SIG undefined FUN_1426b5650(void)

void FUN_1426b5650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined4 *param_7)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_7;
  FUN_1426b5780(param_1,param_2,param_5,param_6,param_7);
  *param_1 = icu_64::ModulusSubstitution::vftable;
  lVar2 = FUN_1425f36d0(param_3);
  param_1[4] = lVar2;
  param_1[5] = 0;
  if (lVar2 == 0) {
    *param_7 = 9;
  }
  if (*(short *)(param_6 + 8) < 0) {
    iVar3 = *(int *)(param_6 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_6 + 8) >> 5;
  }
  cVar1 = FUN_1424a7e30(param_6,0,iVar3,&DAT_149d59d62,(ulonglong)puVar4 & 0xffffffff00000000,3);
  if (cVar1 == '\0') {
    param_1[5] = param_4;
  }
  return;
}



// FUNCTION 1426b5720 Unwind@1426b5720 body=44 status=ok
// SIG undefined Unwind@1426b5720(void)

void Unwind_1426b5720(undefined8 param_1,longlong param_2)

{
  FUN_1426b4ca0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1426b5750 Unwind@1426b5750 body=45 status=ok
// SIG undefined Unwind@1426b5750(void)

void Unwind_1426b5750(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x38) = &DAT_149d59d62;
  return;
}



// FUNCTION 1426b5780 FUN_1426b5780 body=489 status=ok
// SIG undefined FUN_1426b5780(void)

undefined8 *
FUN_1426b5780(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,int *param_5)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  short *psVar6;
  undefined1 local_80 [8];
  short local_78;
  ushort local_76;
  int local_74;
  ushort *local_68;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = icu_64::NFSubstitution::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  local_38 = param_1;
  FUN_1424a6be0(local_80,param_4);
  sVar2 = *(short *)(param_4 + 8);
  if (sVar2 < 0) {
    iVar5 = *(int *)(param_4 + 0xc);
  }
  else {
    iVar5 = (int)sVar2 >> 5;
  }
  if (iVar5 < 2) {
    if (iVar5 != 0) goto LAB_1426b5856;
  }
  else {
    if (((int)sVar2 & 2U) == 0) {
      psVar6 = *(short **)(param_4 + 0x18);
    }
    else {
      psVar6 = (short *)(param_4 + 10);
    }
    if (*psVar6 != psVar6[iVar5 - 1]) {
LAB_1426b5856:
      *param_5 = 9;
      goto LAB_1426b594f;
    }
    FUN_1424a9130(local_80,(ulonglong)(iVar5 - 1),1,0,0,0);
    FUN_1424a9130(local_80,0,1,0,0,0);
  }
  if (-1 < local_78) {
    local_74 = (int)local_78 >> 5;
  }
  plVar1 = local_38 + 2;
  if (local_74 == 0) {
    *plVar1 = param_3;
  }
  else {
    if (((int)local_78 & 2U) != 0) {
      local_68 = &local_76;
    }
    switch(*local_68) {
    case 0x23:
    case 0x30:
      lVar3 = FUN_142546200(*(undefined8 *)(param_3 + 0x80));
      if (lVar3 == 0) {
        *param_5 = 2;
      }
      else {
        puVar4 = (undefined8 *)thunk_FUN_1424da030(0x178);
        if (puVar4 == (undefined8 *)0x0) {
          *param_5 = 7;
        }
        else {
          local_40 = puVar4;
          FUN_1424c6640(puVar4,local_80,lVar3,param_5);
          if (*param_5 < 1) {
            local_38[3] = local_40;
          }
          else {
            (**(code **)*local_40)(local_40,1);
          }
        }
      }
      break;
    default:
      *param_5 = 9;
      break;
    case 0x25:
      lVar3 = FUN_142546a40(*(undefined8 *)(param_3 + 0x80),local_80,param_5);
      *plVar1 = lVar3;
      break;
    case 0x3e:
      local_38[2] = param_3;
      local_38[3] = 0;
    }
  }
LAB_1426b594f:
  puVar4 = local_38;
  FUN_140859a90(local_80);
  return puVar4;
}



// FUNCTION 1426b5970 Unwind@1426b5970 body=43 status=ok
// SIG undefined Unwind@1426b5970(void)

void Unwind_1426b5970(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 1426b59a0 Unwind@1426b59a0 body=43 status=ok
// SIG undefined Unwind@1426b59a0(void)

void Unwind_1426b59a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1426b59d0 Unwind@1426b59d0 body=43 status=ok
// SIG undefined Unwind@1426b59d0(void)

void Unwind_1426b59d0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1426b5a00 FUN_1426b5a00 body=1 status=ok
// SIG undefined FUN_1426b5a00(void)

void FUN_1426b5a00(void)

{
  return;
}



// FUNCTION 1426b5a10 FUN_1426b5a10 body=23 status=ok
// SIG undefined FUN_1426b5a10(void)

void FUN_1426b5a10(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b5a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))();
    return;
  }
  return;
}



// FUNCTION 1426b5a30 FUN_1426b5a30 body=8 status=ok
// SIG undefined FUN_1426b5a30(void)

undefined * FUN_1426b5a30(void)

{
  return &DAT_14c7fecc4;
}



// FUNCTION 1426b5a40 FUN_1426b5a40 body=121 status=ok
// SIG undefined FUN_1426b5a40(void)

bool FUN_1426b5a40(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = __RTtypeid();
  lVar4 = __RTtypeid(param_2);
  iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
  if (((iVar2 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(longlong *)(param_1 + 0x10) != 0) != (*(longlong *)(param_2 + 0x10) == 0))) {
    if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
      bVar5 = *(longlong *)(param_2 + 0x18) == 0;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      bVar5 = cVar1 != '\0';
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1426b5bb0 Unwind@1426b5bb0 body=34 status=ok
// SIG undefined Unwind@1426b5bb0(void)

void Unwind_1426b5bb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426b5be0 FUN_1426b5be0 body=435 status=ok
// SIG undefined FUN_1426b5be0(void)

void FUN_1426b5be0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_100 [112];
  undefined **local_90;
  short local_88;
  int local_84;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    if (param_1[3] != 0) {
      if (param_2 < 0x20000000000000) {
        uVar4 = (**(code **)(*param_1 + 0x38))(param_1,(double)param_2);
        iVar3 = FUN_1424bbb90(param_1[3]);
        if (iVar3 == 0) {
          uVar4 = FUN_1424d97b0((int)uVar4);
        }
        local_90 = &PTR_FUN_149e18960;
        local_88 = 2;
        lVar1 = param_1[3];
        FUN_14252c8b0(local_100,uVar4);
        FUN_142537ad0(lVar1,local_100,&local_90,param_6);
        FUN_14252d110(local_100);
        if (-1 < local_88) {
          local_84 = (int)local_88 >> 5;
        }
        FUN_1424a9610(param_3,param_4 + (int)param_1[1],0,&local_90,0,local_84);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
        local_90 = &PTR_FUN_149e18960;
        local_88 = 2;
        lVar1 = param_1[3];
        FUN_14252ca00(local_100,uVar4);
        FUN_142537ad0(lVar1,local_100,&local_90,param_6);
        FUN_14252d110(local_100);
        if (-1 < local_88) {
          local_84 = (int)local_88 >> 5;
        }
        FUN_1424a9610(param_3,param_4 + (int)param_1[1],0,&local_90,0,local_84);
      }
      FUN_140859a90(&local_90);
    }
    return;
  }
  lVar2 = param_1[1];
  uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN_1425f0df0(lVar1,uVar4,param_3,param_4 + (int)lVar2);
  return;
}



// FUNCTION 1426b5da0 Unwind@1426b5da0 body=56 status=ok
// SIG undefined Unwind@1426b5da0(void)

void Unwind_1426b5da0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 1426b5de0 Unwind@1426b5de0 body=56 status=ok
// SIG undefined Unwind@1426b5de0(void)

void Unwind_1426b5de0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}



// FUNCTION 1426b5e20 Unwind@1426b5e20 body=56 status=ok
// SIG undefined Unwind@1426b5e20(void)

void Unwind_1426b5e20(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 1426b5e60 Unwind@1426b5e60 body=56 status=ok
// SIG undefined Unwind@1426b5e60(void)

void Unwind_1426b5e60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}



// FUNCTION 1426b5ea0 FUN_1426b5ea0 body=363 status=ok
// SIG undefined FUN_1426b5ea0(void)

void FUN_1426b5ea0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar7;
  undefined **local_90;
  short local_88;
  int local_84;
  undefined8 local_50;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  local_50 = 0xfffffffffffffffe;
  dVar4 = (double)(**(code **)(*param_1 + 0x38))();
  cVar3 = FUN_1424d9730();
  if (cVar3 != '\0') {
    lVar1 = param_1[2];
    uVar5 = FUN_1424d97a0();
    uVar5 = FUN_1425f0fa0(lVar1,uVar5);
    FUN_1425f3a90(uVar5,dVar4,param_3,param_4 + (int)param_1[1]);
    return;
  }
  dVar6 = (double)FUN_1424d97b0(dVar4);
  lVar1 = param_1[2];
  if ((dVar4 != dVar6) || (NAN(dVar4) || NAN(dVar6))) {
    if (lVar1 != 0) {
      FUN_1425f0f30(lVar1,dVar4,param_3,param_4 + (int)param_1[1],param_5,param_6);
      return;
    }
  }
  else if (lVar1 != 0) {
    lVar2 = param_1[1];
    uVar5 = FUN_1425f13c0(dVar4);
    FUN_1425f0df0(lVar1,uVar5,param_3,param_4 + (int)lVar2,param_5,param_6);
    return;
  }
  if (param_1[3] != 0) {
    local_90 = &PTR_FUN_149e18960;
    local_88 = 2;
    FUN_1424bb540(param_1[3],dVar4,&local_90);
    if (-1 < local_88) {
      local_84 = (int)local_88 >> 5;
    }
    FUN_1424a9610(param_3,param_4 + (int)param_1[1],0,&local_90,0,CONCAT44(uVar7,local_84));
    FUN_140859a90(&local_90);
  }
  return;
}



// FUNCTION 1426b6010 Unwind@1426b6010 body=61 status=ok
// SIG undefined Unwind@1426b6010(void)

void Unwind_1426b6010(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1426b6050 FUN_1426b6050 body=323 status=ok
// SIG undefined FUN_1426b6050(void)

void FUN_1426b6050(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,char param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_5);
  if (param_1[2] == 0) {
    plVar2 = (longlong *)param_1[3];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_8,param_3);
    }
  }
  else {
    local_60 = param_8;
    local_68 = param_7;
    FUN_1425f1450(param_1[2],param_2,param_3,uVar3);
    if (((param_6 != '\0') && (*(char *)(param_1[2] + 0x98) == '\0')) &&
       (*(int *)(param_3 + 8) == 0)) {
      local_54 = 0;
      plVar2 = (longlong *)FUN_1424bb7a0(&local_54);
      if (local_54 < 1) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_8,param_3);
      }
      else if (plVar2 == (longlong *)0x0) goto LAB_1426b6118;
      (**(code **)*plVar2)(plVar2,1);
      iVar1 = *(int *)(param_3 + 8);
      goto joined_r0x0001426b6178;
    }
  }
LAB_1426b6118:
  iVar1 = *(int *)(param_3 + 8);
joined_r0x0001426b6178:
  if (iVar1 == 0) {
    FUN_14252d370(param_8,0);
  }
  else {
    local_54 = 0;
    uVar4 = FUN_14252d270(param_8,&local_54);
    uVar4 = (**(code **)(*param_1 + 0x50))(param_1,uVar4,param_4);
    FUN_14252d340(param_8,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
}



// FUNCTION 1426b61c0 FUN_1426b61c0 body=8 status=ok
// SIG undefined FUN_1426b61c0(void)

undefined * FUN_1426b61c0(void)

{
  return &DAT_14c7fecc5;
}



// FUNCTION 1426b61d0 FUN_1426b61d0 body=8 status=ok
// SIG undefined FUN_1426b61d0(void)

undefined * FUN_1426b61d0(void)

{
  return &DAT_14c7fecc6;
}



// FUNCTION 1426b61e0 FUN_1426b61e0 body=128 status=ok
// SIG undefined FUN_1426b61e0(void)

undefined8 FUN_1426b61e0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = __RTtypeid();
  lVar4 = __RTtypeid(param_2);
  iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
  if (((iVar2 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(longlong *)(param_1 + 0x10) != 0) != (*(longlong *)(param_2 + 0x10) == 0))) {
    if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x18) != 0) goto LAB_1426b6256;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      if (cVar1 == '\0') goto LAB_1426b6256;
    }
    uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                     *(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20));
  }
  else {
LAB_1426b6256:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1426b6260 FUN_1426b6260 body=8 status=ok
// SIG undefined FUN_1426b6260(void)

undefined * FUN_1426b6260(void)

{
  return &DAT_14c7fecc7;
}



// FUNCTION 1426b6270 FUN_1426b6270 body=140 status=ok
// SIG undefined FUN_1426b6270(void)

undefined8 FUN_1426b6270(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = __RTtypeid();
  lVar4 = __RTtypeid(param_2);
  iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
  if (((iVar2 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(longlong *)(param_1 + 0x10) != 0) != (*(longlong *)(param_2 + 0x10) == 0))) {
    if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x18) != 0) {
        return 0;
      }
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),
                      *(longlong *)(param_1 + 0x28) == *(longlong *)(param_2 + 0x28));
    }
  }
  return 0;
}



// FUNCTION 1426b6300 FUN_1426b6300 body=101 status=ok
// SIG undefined FUN_1426b6300(void)

void FUN_1426b6300(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_1[5] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    FUN_1425f36e0(param_1[5],uVar1,param_3,param_4 + (int)param_1[1]);
    return;
  }
  FUN_1426b5be0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1426b6370 FUN_1426b6370 body=101 status=ok
// SIG undefined FUN_1426b6370(void)

void FUN_1426b6370(longlong *param_1,undefined4 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  if (param_1[5] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    FUN_1425f3a90(param_1[5],uVar1,param_3,param_4 + (int)param_1[1]);
    return;
  }
  FUN_1426b5ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1426b63e0 FUN_1426b63e0 body=182 status=ok
// SIG undefined FUN_1426b63e0(void)

void FUN_1426b63e0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[5] != 0) {
    local_58 = param_8;
    local_60 = param_7;
    local_68 = param_5;
    FUN_1425f3f40(param_1[5],param_2,param_3,0);
    if (*(int *)(param_3 + 8) != 0) {
      local_44 = 0;
      uVar1 = FUN_14252d270(param_8,&local_44);
      uVar1 = (**(code **)(*param_1 + 0x50))(param_1,uVar1,param_4);
      FUN_14252d340(param_8,uVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 1426b64d0 FUN_1426b64d0 body=195 status=ok
// SIG undefined FUN_1426b64d0(void)

void FUN_1426b64d0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined1 auStack_48 [42];
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[5] != 0) {
    uVar1 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar1 = *(ushort *)(param_2 + 8) & 0x1f;
    }
    *(ushort *)(param_2 + 8) = uVar1;
    local_1e = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_1424a6cf0(param_2,&local_1e,0,1);
    local_1c = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_1424a6cf0(param_2,&local_1c,0,1);
    local_1a = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_1424a6cf0(param_2,&local_1a,0,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1426b65b0 FUN_1426b65b0 body=8 status=ok
// SIG undefined FUN_1426b65b0(void)

undefined * FUN_1426b65b0(void)

{
  return &DAT_14c7fecc8;
}



// FUNCTION 1426b65c0 FUN_1426b65c0 body=360 status=ok
// SIG undefined FUN_1426b65c0(void)

void FUN_1426b65c0(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_b0 [78];
  undefined2 local_62;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_1426b5ea0(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_142537d10(local_b0);
  FUN_142539590(local_b0,param_2);
  FUN_142538510(local_b0,0xffffffec,4,param_6);
  iVar3 = FUN_142538ed0(local_b0);
  bVar1 = true;
  for (; iVar3 < 0; iVar3 = iVar3 + 1) {
    if (!(bool)(bVar1 | *(char *)(param_1 + 0x21) == '\0')) {
      local_62 = 0x20;
      FUN_1424a9130(param_3,*(int *)(param_1 + 8) + param_4,0,&local_62,0,1);
    }
    cVar2 = FUN_142538ee0(local_b0,iVar3);
    FUN_1425f0df0(*(undefined8 *)(param_1 + 0x10),(longlong)cVar2,param_3,
                  *(int *)(param_1 + 8) + param_4,param_5,param_6);
    bVar1 = false;
  }
  if (bVar1) {
    FUN_1425f0df0(*(undefined8 *)(param_1 + 0x10),0,param_3,param_4 + *(int *)(param_1 + 8),param_5,
                  param_6);
  }
  FUN_142537d50(local_b0);
  return;
}



// FUNCTION 1426b6730 Unwind@1426b6730 body=64 status=ok
// SIG undefined Unwind@1426b6730(void)

void Unwind_1426b6730(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x38);
  return;
}



// FUNCTION 1426b6770 FUN_1426b6770 body=830 status=ok
// SIG undefined FUN_1426b6770(void)

undefined8
FUN_1426b6770(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,char param_6,undefined4 param_7,undefined8 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffe58;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 local_188 [112];
  undefined1 local_118 [72];
  undefined1 local_d0 [8];
  ushort local_c8;
  short local_c6;
  int local_c4;
  short *local_b8;
  longlong *local_90;
  undefined **local_88;
  ulonglong local_80;
  int local_74 [13];
  
  local_74[1] = -2;
  local_74[2] = -1;
  if ((char)param_1[4] == '\0') {
    uVar2 = FUN_1426b6050(param_1,param_2,param_3,param_4,0,param_6,param_7,param_8);
    return uVar2;
  }
  local_90 = param_1;
  FUN_1424a6be0(local_d0);
  local_88 = icu_64::ParsePosition::vftable;
  local_80 = 0xffffffff00000001;
  FUN_142537d10(local_118);
  iVar4 = 0;
  plVar1 = (longlong *)0x0;
  do {
    uVar5 = (undefined4)(in_stack_fffffffffffffe58 >> 0x20);
    if ((short)local_c8 < 0) {
      if (local_c4 < 1) goto LAB_1426b6a1b;
    }
    else if ((short)local_c8 >> 5 < 1) {
LAB_1426b6a1b:
      if (plVar1 != (longlong *)0x0) {
        (**(code **)*plVar1)(plVar1,1);
      }
      FUN_142538840(local_118,-iVar4);
      uVar5 = FUN_142538d80(local_118);
      uVar5 = (**(code **)(*local_90 + 0x50))(local_90,uVar5,param_4);
      FUN_14252d340(param_8,uVar5);
      FUN_142537d50(local_118);
      thunk_FUN_1424b70d0(&local_88);
      FUN_140859a90(local_d0);
      return 1;
    }
    if ((int)local_80 == 0) goto LAB_1426b6a1b;
    local_80 = local_80 & 0xffffffff00000000;
    FUN_14252c810(local_188);
    in_stack_fffffffffffffe58 = CONCAT44(uVar5,param_7);
    puVar6 = local_188;
    FUN_1425f1450(local_90[2],local_d0,&local_88,0,in_stack_fffffffffffffe58,local_188);
    local_74[0] = 0;
    uVar5 = FUN_14252d170(local_188,local_74);
    if (param_6 != '\0') {
      if ((int)local_80 != 0) goto LAB_1426b6924;
      if (plVar1 == (longlong *)0x0) {
        local_74[0] = 0;
        plVar1 = (longlong *)FUN_1424bb7a0(local_74);
        if (local_74[0] < 1) {
          if (plVar1 != (longlong *)0x0) goto LAB_1426b68ec;
        }
        else if (plVar1 != (longlong *)0x0) {
          (**(code **)*plVar1)(plVar1,1);
          plVar1 = (longlong *)0x0;
          goto LAB_1426b6917;
        }
        plVar1 = (longlong *)0x0;
      }
      else {
LAB_1426b68ec:
        (**(code **)(*plVar1 + 0xa0))(plVar1,local_d0,local_188,&local_88);
        uVar5 = FUN_14252d170(local_188,local_74);
      }
    }
LAB_1426b6917:
    if ((int)local_80 != 0) {
LAB_1426b6924:
      FUN_14253af20(local_118,uVar5,0,1);
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (int)local_80;
      uVar7 = (ulonglong)puVar6 & 0xffffffff00000000;
      in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
      FUN_1424a9130(local_d0,0,local_80 & 0xffffffff,0,in_stack_fffffffffffffe58,uVar7);
      iVar4 = iVar4 + 1;
      do {
        if ((short)local_c8 < 0) {
          if (local_c4 < 1) break;
        }
        else if ((short)local_c8 >> 5 < 1) break;
        psVar3 = &local_c6;
        if ((local_c8 & 2) == 0) {
          psVar3 = local_b8;
        }
        if (*psVar3 != 0x20) break;
        uVar7 = uVar7 & 0xffffffff00000000;
        in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffffff00000000;
        FUN_1424a9130(local_d0,0,1,0,in_stack_fffffffffffffe58,uVar7);
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      } while( true );
    }
    FUN_14252d110(local_188);
  } while( true );
}



// FUNCTION 1426b6ad0 Unwind@1426b6ad0 body=74 status=ok
// SIG undefined Unwind@1426b6ad0(void)

void Unwind_1426b6ad0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x40);
  return;
}



// FUNCTION 1426b6b20 Unwind@1426b6b20 body=74 status=ok
// SIG undefined Unwind@1426b6b20(void)

void Unwind_1426b6b20(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0xb0);
  return;
}



// FUNCTION 1426b6b70 Unwind@1426b6b70 body=86 status=ok
// SIG undefined Unwind@1426b6b70(void)

void Unwind_1426b6b70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x140);
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 1426b6bd0 FUN_1426b6bd0 body=127 status=ok
// SIG undefined FUN_1426b6bd0(void)

bool FUN_1426b6bd0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = __RTtypeid();
  lVar4 = __RTtypeid(param_2);
  iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
  if (((iVar2 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
     ((*(longlong *)(param_1 + 0x10) != 0) != (*(longlong *)(param_2 + 0x10) == 0))) {
    if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x18) != 0) goto LAB_1426b6c45;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      if (cVar1 == '\0') goto LAB_1426b6c45;
    }
    bVar5 = *(char *)(param_2 + 0x20) == *(char *)(param_1 + 0x20);
  }
  else {
LAB_1426b6c45:
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1426b6c50 FUN_1426b6c50 body=8 status=ok
// SIG undefined FUN_1426b6c50(void)

undefined * FUN_1426b6c50(void)

{
  return &DAT_14c7fecc9;
}



// FUNCTION 1426b6c60 FUN_1426b6c60 body=8 status=ok
// SIG undefined FUN_1426b6c60(void)

undefined * FUN_1426b6c60(void)

{
  return &DAT_14c7fecca;
}



// FUNCTION 1426b6c70 FUN_1426b6c70 body=564 status=ok
// SIG undefined FUN_1426b6c70(void)

void FUN_1426b6c70(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined8 in_stack_fffffffffffffed0;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined2 local_120 [56];
  undefined **local_b0;
  short local_a8;
  int local_a4;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  dVar8 = (double)(**(code **)(*param_1 + 0x38))();
  lVar2 = FUN_1425f13c0();
  lVar1 = param_1[2];
  if ((lVar1 != 0) && ((char)param_1[6] != '\0')) {
    sVar3 = *(short *)(param_3 + 8);
    iVar5 = (int)sVar3 >> 5;
    iVar4 = *(int *)(param_3 + 0xc);
    iVar6 = iVar5;
    if (sVar3 < 0) {
      iVar6 = iVar4;
    }
    lVar7 = lVar2 * 10;
    if ((double)lVar7 < (double)param_1[4]) {
      local_70 = lVar2;
      local_64 = iVar6;
      do {
        local_120[0] = 0x20;
        FUN_1424a9130(param_3,(int)param_1[1] + param_4,0,local_120,0,1);
        uVar9 = param_6;
        FUN_1425f0df0(lVar1,0,param_3,(int)param_1[1] + param_4,param_5,param_6);
        uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
        lVar7 = lVar7 * 10;
      } while ((double)lVar7 < (double)param_1[4]);
      sVar3 = *(short *)(param_3 + 8);
      iVar4 = *(int *)(param_3 + 0xc);
      iVar5 = (int)sVar3 >> 5;
      lVar2 = local_70;
      iVar6 = local_64;
    }
    if (sVar3 < 0) {
      iVar5 = iVar4;
    }
    param_4 = (param_4 - iVar6) + iVar5;
  }
  if (((dVar8 != (double)lVar2) || (NAN(dVar8) || NAN((double)lVar2))) || (lVar1 == 0)) {
    if (lVar1 == 0) {
      local_b0 = &PTR_FUN_149e18960;
      local_a8 = 2;
      lVar1 = param_1[3];
      FUN_14252c8b0(local_120,dVar8);
      FUN_142537ad0(lVar1,local_120,&local_b0,param_6);
      FUN_14252d110(local_120);
      if (-1 < local_a8) {
        local_a4 = (int)local_a8 >> 5;
      }
      FUN_1424a9610(param_3,param_4 + (int)param_1[1],0,&local_b0,0,CONCAT44(uVar10,local_a4));
      FUN_140859a90(&local_b0);
    }
    else {
      FUN_1425f0f30(lVar1,dVar8,param_3,param_4 + (int)param_1[1],param_5,param_6);
    }
  }
  else {
    FUN_1425f0df0(lVar1,lVar2,param_3,param_4 + (int)param_1[1],param_5,param_6);
  }
  return;
}



// FUNCTION 1426b6eb0 Unwind@1426b6eb0 body=66 status=ok
// SIG undefined Unwind@1426b6eb0(void)

void Unwind_1426b6eb0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 1426b6f00 Unwind@1426b6f00 body=65 status=ok
// SIG undefined Unwind@1426b6f00(void)

void Unwind_1426b6f00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}


